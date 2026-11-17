#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import <mach/mach.h>

extern "C" {
    UIView* UnityGetGLView(void);
    UIViewController* UnityGetGLViewController(void);
    void UnitySendMessage(const char* obj, const char* method, const char* msg);

    void* Resources_UnloadUnusedAssets_m2836736321(void* __this, void* method);
    void GC_Collect_m743975114(void* __this, void* method);
    void QualitySettings_SetQualityLevel_m2320778053(void* __this, int32_t index, bool applyExpensiveChanges, void* method);
    int32_t QualitySettings_GetQualityLevel_m848937883(void* __this, void* method);
}

__attribute__((constructor)) static void EnableMetalPerformanceHUD(void) {
    setenv("MTL_HUD_ENABLED", "1", 1);
    [[NSUserDefaults standardUserDefaults] setBool:YES forKey:@"MetalForceHudEnabled"];
    [[NSUserDefaults standardUserDefaults] setBool:YES forKey:@"MetalHUDEnabled"];
    [[NSUserDefaults standardUserDefaults] setBool:YES forKey:@"MetalHudEnabled"];
    [[NSUserDefaults standardUserDefaults] synchronize];
}

static int64_t GetPhysicalMemoryMB(void) {
    task_vm_info_data_t vmInfo;
    mach_msg_type_number_t count = TASK_VM_INFO_COUNT;
    kern_return_t kr = task_info(mach_task_self(), TASK_VM_INFO, (task_info_t)&vmInfo, &count);
    if (kr == KERN_SUCCESS) {
        return (int64_t)(vmInfo.phys_footprint / (1024 * 1024));
    }
    return 0;
}

static void PurgeMemoryNow(void) {
    GC_Collect_m743975114(NULL, NULL);
    Resources_UnloadUnusedAssets_m2836736321(NULL, NULL);
    GC_Collect_m743975114(NULL, NULL);
    NSLog(@"[LobotomyCorp] Purged unused assets and collected GC");
}

static void SetTextureQualityLevel(int level) {
    QualitySettings_SetQualityLevel_m2320778053(NULL, level, true, NULL);
    PurgeMemoryNow();
    NSLog(@"[LobotomyCorp] SetQualityLevel to %d", level);
}

// -------------------------------------------------------------
// Touch Passthrough Overlay Container
// -------------------------------------------------------------
@interface LiquidGlassOverlayContainerView : UIView
@property (nonatomic, weak) UIView *pillView;
@property (nonatomic, weak) UIView *menuView;
@end

@implementation LiquidGlassOverlayContainerView
- (UIView *)hitTest:(CGPoint)point withEvent:(UIEvent *)event {
    UIView *hitView = [super hitTest:point withEvent:event];
    if (hitView == self) {
        // Touch is on empty area: pass straight through to Unity game view!
        return nil;
    }
    return hitView;
}
@end

// -------------------------------------------------------------
// Native Liquid Glass Controller
// -------------------------------------------------------------
@interface LiquidGlassDebugMenuController : NSObject <UITextFieldDelegate>

@property (nonatomic, strong) LiquidGlassOverlayContainerView *containerView;
@property (nonatomic, strong) UIVisualEffectView *pillView;
@property (nonatomic, strong) UILabel *pillLabel;
@property (nonatomic, strong) UIVisualEffectView *menuView;
@property (nonatomic, strong) UILabel *telemetryLabel;
@property (nonatomic, strong) UILabel *statusLabel;
@property (nonatomic, strong) UITextField *commandTextField;
@property (nonatomic, strong) UIButton *btnClean16x9;
@property (nonatomic, strong) UIButton *btnWide;
@property (nonatomic, strong) UIButton *btnTexFull;
@property (nonatomic, strong) UIButton *btnTexHalf;
@property (nonatomic, copy) NSString *gameObjectName;
@property (nonatomic, assign) BOOL isMenuVisible;
@property (nonatomic, assign) int currentAspectMode;
@property (nonatomic, assign) int currentQualityLevel;

+ (instancetype)sharedInstance;
- (void)setupWithGameObjectName:(NSString *)name;
- (void)showMenu;
- (void)hideMenu;
- (void)toggleMenu;
- (void)updateTelemetry:(NSString *)text;
- (void)updateStatusMessage:(NSString *)text;
- (void)setAspectMode:(int)mode;
- (void)updateQualityButtonStyles;

@end

static void TriggerHaptic(void) {
    if (@available(iOS 10.0, *)) {
        UIImpactFeedbackGenerator *feedback = [[UIImpactFeedbackGenerator alloc] initWithStyle:UIImpactFeedbackStyleLight];
        [feedback prepare];
        [feedback impactOccurred];
    }
}

static UIVisualEffect* GetLiquidGlassEffect(void) {
    Class glassClass = NSClassFromString(@"UIGlassEffect");
    if (glassClass) {
        #pragma clang diagnostic push
        #pragma clang diagnostic ignored "-Warc-performSelector-leaks"
        SEL sel = NSSelectorFromString(@"effect");
        if ([glassClass respondsToSelector:sel]) {
            return (UIVisualEffect *)[glassClass performSelector:sel];
        }
        #pragma clang diagnostic pop
    }
    if (@available(iOS 13.0, *)) {
        return [UIBlurEffect effectWithStyle:UIBlurEffectStyleSystemUltraThinMaterialDark];
    }
    return [UIBlurEffect effectWithStyle:UIBlurEffectStyleDark];
}

static UIButton* CreateGlassButton(NSString *title, id target, SEL action) {
    UIButton *btn = [UIButton buttonWithType:UIButtonTypeCustom];
    [btn setTitle:title forState:UIControlStateNormal];
    [btn setTitleColor:[UIColor colorWithWhite:0.95 alpha:1.0] forState:UIControlStateNormal];
    [btn setTitleColor:[UIColor colorWithWhite:0.7 alpha:1.0] forState:UIControlStateHighlighted];
    btn.titleLabel.font = [UIFont systemFontOfSize:11.5 weight:UIFontWeightSemibold];
    btn.titleLabel.adjustsFontSizeToFitWidth = YES;
    btn.titleLabel.minimumScaleFactor = 0.7;
    btn.backgroundColor = [UIColor colorWithWhite:1.0 alpha:0.12];
    btn.layer.cornerRadius = 9.0;
    if (@available(iOS 13.0, *)) {
        btn.layer.cornerCurve = kCACornerCurveContinuous;
    }
    btn.layer.borderWidth = 0.5;
    btn.layer.borderColor = [UIColor colorWithWhite:1.0 alpha:0.22].CGColor;
    btn.layer.masksToBounds = YES;
    [btn addTarget:target action:action forControlEvents:UIControlEventTouchUpInside];
    return btn;
}

@implementation LiquidGlassDebugMenuController

+ (instancetype)sharedInstance {
    static LiquidGlassDebugMenuController *s_instance = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        s_instance = [[LiquidGlassDebugMenuController alloc] init];
    });
    return s_instance;
}

- (void)setupWithGameObjectName:(NSString *)name {
    self.gameObjectName = name;
    self.currentAspectMode = 1;
    self.currentQualityLevel = 0;

    // Register for iOS Low Memory Warning
    [[NSNotificationCenter defaultCenter] addObserverForName:UIApplicationDidReceiveMemoryWarningNotification
                                                     object:nil
                                                      queue:[NSOperationQueue mainQueue]
                                                 usingBlock:^(NSNotification *note) {
        NSLog(@"[LobotomyCorp] iOS Low Memory Warning! Emergency purging RAM...");
        PurgeMemoryNow();
        SetTextureQualityLevel(1);
        [self updateQualityButtonStyles];
        [self updateStatusMessage:@"[EMERGENCY] iOS Memory Warning -> Purged & Set Half-Res"];
    }];

    dispatch_async(dispatch_get_main_queue(), ^{
        [self createOverlayUI];
    });
}

- (void)createOverlayUI {
    if (self.containerView) {
        return;
    }

    UIView *rootView = UnityGetGLView();
    if (!rootView) {
        UIViewController *vc = UnityGetGLViewController();
        if (vc) {
            rootView = vc.view;
        }
    }
    if (!rootView) {
        UIWindow *keyWin = [UIApplication sharedApplication].keyWindow;
        rootView = keyWin.rootViewController.view;
    }
    if (!rootView) {
        return;
    }

    self.containerView = [[LiquidGlassOverlayContainerView alloc] initWithFrame:rootView.bounds];
    self.containerView.autoresizingMask = UIViewAutoresizingFlexibleWidth | UIViewAutoresizingFlexibleHeight;
    self.containerView.backgroundColor = [UIColor clearColor];
    [rootView addSubview:self.containerView];

    UIVisualEffect *glassEffect = GetLiquidGlassEffect();

    // 1. Floating Pill View
    self.pillView = [[UIVisualEffectView alloc] initWithEffect:glassEffect];
    self.pillView.translatesAutoresizingMaskIntoConstraints = NO;
    self.pillView.layer.cornerRadius = 17.0;
    if (@available(iOS 13.0, *)) {
        self.pillView.layer.cornerCurve = kCACornerCurveContinuous;
    }
    self.pillView.layer.borderWidth = 0.6;
    self.pillView.layer.borderColor = [UIColor colorWithWhite:1.0 alpha:0.30].CGColor;
    self.pillView.layer.masksToBounds = YES;
    self.containerView.pillView = self.pillView;

    self.pillLabel = [[UILabel alloc] init];
    self.pillLabel.translatesAutoresizingMaskIntoConstraints = NO;
    self.pillLabel.font = [UIFont monospacedDigitSystemFontOfSize:13.0 weight:UIFontWeightBold];
    self.pillLabel.textColor = [UIColor colorWithWhite:0.96 alpha:0.95];
    self.pillLabel.textAlignment = NSTextAlignmentCenter;
    self.pillLabel.text = @"60 fps · 75 MB";
    [self.pillView.contentView addSubview:self.pillLabel];

    [NSLayoutConstraint activateConstraints:@[
        [self.pillLabel.centerXAnchor constraintEqualToAnchor:self.pillView.contentView.centerXAnchor],
        [self.pillLabel.centerYAnchor constraintEqualToAnchor:self.pillView.contentView.centerYAnchor],
        [self.pillLabel.leadingAnchor constraintEqualToAnchor:self.pillView.contentView.leadingAnchor constant:12.0],
        [self.pillLabel.trailingAnchor constraintEqualToAnchor:self.pillView.contentView.trailingAnchor constant:-12.0]
    ]];

    [self.containerView addSubview:self.pillView];

    // Safe area layout constraints for pill
    UILayoutGuide *safeGuide = self.containerView.safeAreaLayoutGuide;
    [NSLayoutConstraint activateConstraints:@[
        [self.pillView.topAnchor constraintEqualToAnchor:safeGuide.topAnchor constant:6.0],
        [self.pillView.centerXAnchor constraintEqualToAnchor:safeGuide.centerXAnchor],
        [self.pillView.heightAnchor constraintEqualToConstant:34.0]
    ]];

    // Gestures for pill
    UITapGestureRecognizer *tap = [[UITapGestureRecognizer alloc] initWithTarget:self action:@selector(onPillTapped:)];
    [self.pillView addGestureRecognizer:tap];

    UIPanGestureRecognizer *pan = [[UIPanGestureRecognizer alloc] initWithTarget:self action:@selector(onPillPanned:)];
    [self.pillView addGestureRecognizer:pan];

    // 2. Floating Menu View
    self.menuView = [[UIVisualEffectView alloc] initWithEffect:glassEffect];
    self.menuView.translatesAutoresizingMaskIntoConstraints = NO;
    self.menuView.layer.cornerRadius = 24.0;
    if (@available(iOS 13.0, *)) {
        self.menuView.layer.cornerCurve = kCACornerCurveContinuous;
    }
    self.menuView.layer.borderWidth = 0.6;
    self.menuView.layer.borderColor = [UIColor colorWithWhite:1.0 alpha:0.25].CGColor;
    self.menuView.layer.masksToBounds = YES;
    self.menuView.alpha = 0.0;
    self.menuView.hidden = YES;
    self.containerView.menuView = self.menuView;

    [self buildMenuControls];

    [self.containerView addSubview:self.menuView];

    [NSLayoutConstraint activateConstraints:@[
        [self.menuView.centerXAnchor constraintEqualToAnchor:safeGuide.centerXAnchor],
        [self.menuView.centerYAnchor constraintEqualToAnchor:safeGuide.centerYAnchor],
        [self.menuView.widthAnchor constraintEqualToConstant:540.0],
        [self.menuView.heightAnchor constraintEqualToConstant:430.0],
        [self.menuView.leadingAnchor constraintGreaterThanOrEqualToAnchor:safeGuide.leadingAnchor constant:16.0],
        [self.menuView.trailingAnchor constraintLessThanOrEqualToAnchor:safeGuide.trailingAnchor constant:-16.0],
        [self.menuView.topAnchor constraintGreaterThanOrEqualToAnchor:safeGuide.topAnchor constant:16.0],
        [self.menuView.bottomAnchor constraintLessThanOrEqualToAnchor:safeGuide.bottomAnchor constant:-16.0]
    ]];
}

- (void)buildMenuControls {
    UIView *content = self.menuView.contentView;

    // Header Title
    UILabel *titleLabel = [[UILabel alloc] init];
    titleLabel.translatesAutoresizingMaskIntoConstraints = NO;
    titleLabel.text = @"SYSTEM & DIAGNOSTICS";
    titleLabel.font = [UIFont systemFontOfSize:15.0 weight:UIFontWeightBold];
    titleLabel.textColor = [UIColor colorWithWhite:0.96 alpha:1.0];
    [content addSubview:titleLabel];

    // Close Button
    UIButton *closeBtn = [UIButton buttonWithType:UIButtonTypeCustom];
    closeBtn.translatesAutoresizingMaskIntoConstraints = NO;
    [closeBtn setTitle:@"✕" forState:UIControlStateNormal];
    [closeBtn setTitleColor:[UIColor colorWithWhite:0.85 alpha:1.0] forState:UIControlStateNormal];
    closeBtn.titleLabel.font = [UIFont systemFontOfSize:15.0 weight:UIFontWeightBold];
    closeBtn.backgroundColor = [UIColor colorWithWhite:1.0 alpha:0.10];
    closeBtn.layer.cornerRadius = 14.0;
    closeBtn.layer.masksToBounds = YES;
    [closeBtn addTarget:self action:@selector(hideMenu) forControlEvents:UIControlEventTouchUpInside];
    [content addSubview:closeBtn];

    [NSLayoutConstraint activateConstraints:@[
        [titleLabel.topAnchor constraintEqualToAnchor:content.topAnchor constant:16.0],
        [titleLabel.leadingAnchor constraintEqualToAnchor:content.leadingAnchor constant:20.0],
        [closeBtn.centerYAnchor constraintEqualToAnchor:titleLabel.centerYAnchor],
        [closeBtn.trailingAnchor constraintEqualToAnchor:content.trailingAnchor constant:-16.0],
        [closeBtn.widthAnchor constraintEqualToConstant:28.0],
        [closeBtn.heightAnchor constraintEqualToConstant:28.0]
    ]];

    // Scrollable content area
    UIScrollView *scrollView = [[UIScrollView alloc] init];
    scrollView.translatesAutoresizingMaskIntoConstraints = NO;
    scrollView.alwaysBounceVertical = NO;
    scrollView.showsVerticalScrollIndicator = NO;
    [content addSubview:scrollView];

    [NSLayoutConstraint activateConstraints:@[
        [scrollView.topAnchor constraintEqualToAnchor:titleLabel.bottomAnchor constant:12.0],
        [scrollView.leadingAnchor constraintEqualToAnchor:content.leadingAnchor constant:20.0],
        [scrollView.trailingAnchor constraintEqualToAnchor:content.trailingAnchor constant:-20.0],
        [scrollView.bottomAnchor constraintEqualToAnchor:content.bottomAnchor constant:-14.0]
    ]];

    UIStackView *mainStack = [[UIStackView alloc] init];
    mainStack.translatesAutoresizingMaskIntoConstraints = NO;
    mainStack.axis = UILayoutConstraintAxisVertical;
    mainStack.spacing = 10.0;
    mainStack.alignment = UIStackViewAlignmentFill;
    [scrollView addSubview:mainStack];

    [NSLayoutConstraint activateConstraints:@[
        [mainStack.topAnchor constraintEqualToAnchor:scrollView.topAnchor],
        [mainStack.leadingAnchor constraintEqualToAnchor:scrollView.leadingAnchor],
        [mainStack.trailingAnchor constraintEqualToAnchor:scrollView.trailingAnchor],
        [mainStack.bottomAnchor constraintEqualToAnchor:scrollView.bottomAnchor],
        [mainStack.widthAnchor constraintEqualToAnchor:scrollView.widthAnchor]
    ]];

    // Telemetry label
    self.telemetryLabel = [[UILabel alloc] init];
    self.telemetryLabel.font = [UIFont monospacedDigitSystemFontOfSize:11.5 weight:UIFontWeightMedium];
    self.telemetryLabel.textColor = [UIColor colorWithWhite:0.85 alpha:0.95];
    self.telemetryLabel.numberOfLines = 2;
    self.telemetryLabel.text = @"FPS: 60.0 (16.6 ms)   RAM: 75 MB\nResolution: 2337x1080 (2.16:1)   Scene: Main";
    [mainStack addArrangedSubview:self.telemetryLabel];

    // Section: Screen Aspect
    UILabel *aspectHdr = [self makeSectionHeader:@"SCREEN ASPECT MODE"];
    [mainStack addArrangedSubview:aspectHdr];

    UIStackView *aspectStack = [[UIStackView alloc] init];
    aspectStack.axis = UILayoutConstraintAxisHorizontal;
    aspectStack.spacing = 10.0;
    aspectStack.distribution = UIStackViewDistributionFillEqually;

    self.btnClean16x9 = CreateGlassButton(@"16:9 CLEAN (PILLARBOX)", self, @selector(onMode16x9Tapped));
    self.btnWide = CreateGlassButton(@"FULLSCREEN WIDE", self, @selector(onModeWideTapped));
    [aspectStack addArrangedSubview:self.btnClean16x9];
    [aspectStack addArrangedSubview:self.btnWide];
    [self.btnClean16x9.heightAnchor constraintEqualToConstant:32.0].active = YES;
    [mainStack addArrangedSubview:aspectStack];

    [self updateAspectButtonStyles];

    // Section: Memory & Textures Optimization
    UILabel *memHdr = [self makeSectionHeader:@"MEMORY & TEXTURE OPTIMIZATION"];
    [mainStack addArrangedSubview:memHdr];

    UIStackView *memStack = [[UIStackView alloc] init];
    memStack.axis = UILayoutConstraintAxisHorizontal;
    memStack.spacing = 10.0;
    memStack.distribution = UIStackViewDistributionFillEqually;

    self.btnTexFull = CreateGlassButton(@"TEXTURE: FULL (HIGH)", self, @selector(onTexFullTapped));
    self.btnTexHalf = CreateGlassButton(@"TEXTURE: HALF (75% SAVED)", self, @selector(onTexHalfTapped));
    [memStack addArrangedSubview:self.btnTexFull];
    [memStack addArrangedSubview:self.btnTexHalf];
    [self.btnTexFull.heightAnchor constraintEqualToConstant:32.0].active = YES;
    [mainStack addArrangedSubview:memStack];

    [self updateQualityButtonStyles];

    UIButton *btnPurge = CreateGlassButton(@"PURGE UNUSED RAM (FORCE GC)", self, @selector(onPurgeRamTapped));
    btnPurge.backgroundColor = [UIColor colorWithRed:0.2 green:0.55 blue:0.85 alpha:0.25];
    [btnPurge.heightAnchor constraintEqualToConstant:30.0].active = YES;
    [mainStack addArrangedSubview:btnPurge];

    // Section: In-Game ESC Button
    UIButton *btnEsc = CreateGlassButton(@"SEND ESC KEY (CLOSE POPUPS)", self, @selector(onEscTapped));
    [btnEsc.heightAnchor constraintEqualToConstant:30.0].active = YES;
    [mainStack addArrangedSubview:btnEsc];

    // Section: Cheats
    UILabel *cheatsHdr = [self makeSectionHeader:@"QUICK CHEATS"];
    [mainStack addArrangedSubview:cheatsHdr];

    UIStackView *cheatRow1 = [[UIStackView alloc] init];
    cheatRow1.axis = UILayoutConstraintAxisHorizontal;
    cheatRow1.spacing = 8.0;
    cheatRow1.distribution = UIStackViewDistributionFillEqually;

    UIButton *c1 = CreateGlassButton(@"+500 Enkephalin", self, @selector(onCheatEnkephalin));
    UIButton *c2 = CreateGlassButton(@"+1000 Lob", self, @selector(onCheatLob));
    UIButton *c3 = CreateGlassButton(@"Max Bullets", self, @selector(onCheatBullets));
    UIButton *c4 = CreateGlassButton(@"Buff Nugget", self, @selector(onCheatBuff));
    [cheatRow1 addArrangedSubview:c1];
    [cheatRow1 addArrangedSubview:c2];
    [cheatRow1 addArrangedSubview:c3];
    [cheatRow1 addArrangedSubview:c4];
    [c1.heightAnchor constraintEqualToConstant:30.0].active = YES;
    [mainStack addArrangedSubview:cheatRow1];

    UIStackView *cheatRow2 = [[UIStackView alloc] init];
    cheatRow2.axis = UILayoutConstraintAxisHorizontal;
    cheatRow2.spacing = 8.0;
    cheatRow2.distribution = UIStackViewDistributionFillEqually;

    UIButton *c5 = CreateGlassButton(@"Suppress All", self, @selector(onCheatSuppress));
    UIButton *c6 = CreateGlassButton(@"Clear Meltdown", self, @selector(onCheatMeltdown));
    UIButton *c7 = CreateGlassButton(@"Mission Clear", self, @selector(onCheatMission));
    UIButton *c8 = CreateGlassButton(@"Research All", self, @selector(onCheatResearch));
    [cheatRow2 addArrangedSubview:c5];
    [cheatRow2 addArrangedSubview:c6];
    [cheatRow2 addArrangedSubview:c7];
    [cheatRow2 addArrangedSubview:c8];
    [c5.heightAnchor constraintEqualToConstant:30.0].active = YES;
    [mainStack addArrangedSubview:cheatRow2];

    // Section: Command Input
    UILabel *cmdHdr = [self makeSectionHeader:@"DEBUG COMMAND"];
    [mainStack addArrangedSubview:cmdHdr];

    UIStackView *cmdStack = [[UIStackView alloc] init];
    cmdStack.axis = UILayoutConstraintAxisHorizontal;
    cmdStack.spacing = 8.0;

    self.commandTextField = [[UITextField alloc] init];
    self.commandTextField.font = [UIFont systemFontOfSize:12.5];
    self.commandTextField.textColor = [UIColor whiteColor];
    self.commandTextField.placeholder = @"Enter raw command (e.g. money 1000)";
    self.commandTextField.attributedPlaceholder = [[NSAttributedString alloc] initWithString:self.commandTextField.placeholder attributes:@{NSForegroundColorAttributeName: [UIColor colorWithWhite:0.5 alpha:1.0]}];
    self.commandTextField.backgroundColor = [UIColor colorWithWhite:0.0 alpha:0.40];
    self.commandTextField.layer.cornerRadius = 8.0;
    self.commandTextField.layer.borderWidth = 0.5;
    self.commandTextField.layer.borderColor = [UIColor colorWithWhite:1.0 alpha:0.18].CGColor;
    self.commandTextField.layer.masksToBounds = YES;
    self.commandTextField.autocapitalizationType = UITextAutocapitalizationTypeNone;
    self.commandTextField.autocorrectionType = UITextAutocorrectionTypeNo;
    self.commandTextField.returnKeyType = UIReturnKeySend;
    self.commandTextField.delegate = self;

    UIView *paddingView = [[UIView alloc] initWithFrame:CGRectMake(0, 0, 10, 20)];
    self.commandTextField.leftView = paddingView;
    self.commandTextField.leftViewMode = UITextFieldViewModeAlways;

    UIButton *runBtn = CreateGlassButton(@"RUN", self, @selector(onRunCommandTapped));
    [runBtn setContentHuggingPriority:UILayoutPriorityRequired forAxis:UILayoutConstraintAxisHorizontal];
    [runBtn.widthAnchor constraintEqualToConstant:60.0].active = YES;

    [cmdStack addArrangedSubview:self.commandTextField];
    [cmdStack addArrangedSubview:runBtn];
    [self.commandTextField.heightAnchor constraintEqualToConstant:32.0].active = YES;
    [mainStack addArrangedSubview:cmdStack];

    // Status message label
    self.statusLabel = [[UILabel alloc] init];
    self.statusLabel.font = [UIFont systemFontOfSize:11.0 weight:UIFontWeightMedium];
    self.statusLabel.textColor = [UIColor colorWithRed:0.55 green:0.80 blue:1.0 alpha:0.95];
    self.statusLabel.text = @"Ready";
    [mainStack addArrangedSubview:self.statusLabel];
}

- (UILabel *)makeSectionHeader:(NSString *)title {
    UILabel *lbl = [[UILabel alloc] init];
    lbl.text = title;
    lbl.font = [UIFont systemFontOfSize:12.0 weight:UIFontWeightBold];
    lbl.textColor = [UIColor colorWithWhite:0.92 alpha:0.90];
    return lbl;
}

- (void)updateAspectButtonStyles {
    if (self.currentAspectMode == 0) {
        self.btnClean16x9.backgroundColor = [UIColor colorWithRed:0.15 green:0.45 blue:0.85 alpha:0.85];
        self.btnWide.backgroundColor = [UIColor colorWithWhite:1.0 alpha:0.12];
    } else {
        self.btnClean16x9.backgroundColor = [UIColor colorWithWhite:1.0 alpha:0.12];
        self.btnWide.backgroundColor = [UIColor colorWithRed:0.15 green:0.45 blue:0.85 alpha:0.85];
    }
}

- (void)updateQualityButtonStyles {
    if (self.currentQualityLevel == 0) {
        self.btnTexFull.backgroundColor = [UIColor colorWithRed:0.15 green:0.45 blue:0.85 alpha:0.85];
        self.btnTexHalf.backgroundColor = [UIColor colorWithWhite:1.0 alpha:0.12];
    } else {
        self.btnTexFull.backgroundColor = [UIColor colorWithWhite:1.0 alpha:0.12];
        self.btnTexHalf.backgroundColor = [UIColor colorWithRed:0.15 green:0.75 blue:0.45 alpha:0.85];
    }
}

- (void)onTexFullTapped {
    TriggerHaptic();
    self.currentQualityLevel = 0;
    SetTextureQualityLevel(0);
    [self updateQualityButtonStyles];
    [self updateStatusMessage:@"Texture Quality: Full (High)"];
}

- (void)onTexHalfTapped {
    TriggerHaptic();
    self.currentQualityLevel = 1;
    SetTextureQualityLevel(1);
    [self updateQualityButtonStyles];
    [self updateStatusMessage:@"Texture Quality: Half (75% VRAM saved)"];
}

- (void)onPurgeRamTapped {
    TriggerHaptic();
    int64_t beforeMB = GetPhysicalMemoryMB();
    PurgeMemoryNow();
    int64_t afterMB = GetPhysicalMemoryMB();
    [self updateStatusMessage:[NSString stringWithFormat:@"RAM Purged: %lld MB -> %lld MB", beforeMB, afterMB]];
}

// -------------------------------------------------------------
// Actions & SendMessage
// -------------------------------------------------------------

- (void)onPillTapped:(UITapGestureRecognizer *)gesture {
    TriggerHaptic();
    [self toggleMenu];
}

- (void)onPillPanned:(UIPanGestureRecognizer *)pan {
    CGPoint trans = [pan translationInView:self.containerView];
    CGPoint center = self.pillView.center;
    center.x += trans.x;
    center.y += trans.y;
    self.pillView.center = center;
    [pan setTranslation:CGPointZero inView:self.containerView];
}

- (void)showMenu {
    if (self.isMenuVisible) return;
    TriggerHaptic();
    self.isMenuVisible = YES;
    self.menuView.hidden = NO;
    self.menuView.transform = CGAffineTransformMakeScale(0.92, 0.92);
    [UIView animateWithDuration:0.25 delay:0 usingSpringWithDamping:0.85 initialSpringVelocity:0.5 options:UIViewAnimationOptionCurveEaseOut animations:^{
        self.menuView.alpha = 1.0;
        self.menuView.transform = CGAffineTransformIdentity;
    } completion:nil];
}

- (void)hideMenu {
    if (!self.isMenuVisible) return;
    TriggerHaptic();
    [self.commandTextField resignFirstResponder];
    [UIView animateWithDuration:0.20 animations:^{
        self.menuView.alpha = 0.0;
        self.menuView.transform = CGAffineTransformMakeScale(0.92, 0.92);
    } completion:^(BOOL finished) {
        self.menuView.hidden = YES;
        self.isMenuVisible = NO;
    }];
}

- (void)toggleMenu {
    if (self.isMenuVisible) {
        [self hideMenu];
    } else {
        [self showMenu];
    }
}

- (void)onMode16x9Tapped {
    TriggerHaptic();
    self.currentAspectMode = 0;
    [self updateAspectButtonStyles];
    [self sendUnityCommand:@"mode 0"];
}

- (void)onModeWideTapped {
    TriggerHaptic();
    self.currentAspectMode = 1;
    [self updateAspectButtonStyles];
    [self sendUnityCommand:@"mode 1"];
}

- (void)onEscTapped {
    TriggerHaptic();
    [self sendUnityCommand:@"esc"];
}

- (void)onCheatEnkephalin { TriggerHaptic(); [self sendUnityCommand:@"enkephalin 500"]; }
- (void)onCheatLob { TriggerHaptic(); [self sendUnityCommand:@"money 1000"]; }
- (void)onCheatBullets { TriggerHaptic(); [self sendUnityCommand:@"bullets"]; }
- (void)onCheatBuff { TriggerHaptic(); [self sendUnityCommand:@"buffnugget"]; }
- (void)onCheatSuppress { TriggerHaptic(); [self sendUnityCommand:@"suppress"]; }
- (void)onCheatMeltdown { TriggerHaptic(); [self sendUnityCommand:@"clearmeltdown"]; }
- (void)onCheatMission { TriggerHaptic(); [self sendUnityCommand:@"mission"]; }
- (void)onCheatResearch { TriggerHaptic(); [self sendUnityCommand:@"research"]; }

- (void)onRunCommandTapped {
    TriggerHaptic();
    NSString *cmd = [self.commandTextField.text stringByTrimmingCharactersInSet:[NSCharacterSet whitespaceAndNewlineCharacterSet]];
    if (cmd.length > 0) {
        [self sendUnityCommand:cmd];
        self.commandTextField.text = @"";
    }
    [self.commandTextField resignFirstResponder];
}

- (BOOL)textFieldShouldReturn:(UITextField *)textField {
    [self onRunCommandTapped];
    return YES;
}

- (void)sendUnityCommand:(NSString *)cmd {
    if (self.gameObjectName.length > 0 && cmd.length > 0) {
        UnitySendMessage([self.gameObjectName UTF8String], "OnNativeCommandReceived", [cmd UTF8String]);
    }
}

- (void)updateTelemetry:(NSString *)text {
    int64_t physMB = GetPhysicalMemoryMB();

    // Memory watchdog: auto-purge if memory gets dangerous (> 1500 MB)
    static NSTimeInterval s_lastWatchdogPurge = 0;
    if (physMB > 1500) {
        NSTimeInterval now = [NSDate timeIntervalSinceReferenceDate];
        if (now - s_lastWatchdogPurge > 30.0) {
            s_lastWatchdogPurge = now;
            NSLog(@"[LobotomyCorp] Auto-purging high RAM: %lld MB...", physMB);
            PurgeMemoryNow();
        }
    }

    dispatch_async(dispatch_get_main_queue(), ^{
        NSArray *lines = [text componentsSeparatedByString:@"\n"];
        NSString *firstLine = lines.count > 0 ? lines[0] : @"";

        // Parse FPS prefix (e.g. "60 fps")
        NSString *fpsPrefix = @"60 fps";
        NSRange fpsRange = [firstLine rangeOfString:@" fps"];
        if (fpsRange.location != NSNotFound) {
            fpsPrefix = [firstLine substringToIndex:fpsRange.location + 4];
        }

        if (physMB > 0) {
            self.pillLabel.text = [NSString stringWithFormat:@"%@ · %lld MB", fpsPrefix, physMB];
        } else {
            self.pillLabel.text = firstLine;
        }

        if (self.telemetryLabel) {
            if (physMB > 0 && lines.count > 1) {
                NSString *line1 = lines[1];
                NSRange ramIdx = [line1 rangeOfString:@"RAM:"];
                if (ramIdx.location != NSNotFound) {
                    NSString *lead = [line1 substringToIndex:ramIdx.location];
                    NSString *monoTail = [line1 substringFromIndex:ramIdx.location + 4];
                    line1 = [NSString stringWithFormat:@"%@Physical RAM: %lld MB (Mono:%@)", lead, physMB, monoTail];
                }
                NSString *line2 = lines.count > 2 ? lines[2] : @"";
                self.telemetryLabel.text = [NSString stringWithFormat:@"%@\n%@", line1, line2];
            } else {
                self.telemetryLabel.text = text;
            }
        }
    });
}

- (void)updateStatusMessage:(NSString *)text {
    dispatch_async(dispatch_get_main_queue(), ^{
        if (self.statusLabel) {
            self.statusLabel.text = text;
        }
    });
}

- (void)setAspectMode:(int)mode {
    dispatch_async(dispatch_get_main_queue(), ^{
        self.currentAspectMode = mode;
        [self updateAspectButtonStyles];
    });
}

@end

// -------------------------------------------------------------
// C-Linkage Exported Functions for Unity C#
// -------------------------------------------------------------
extern "C" {

void _InitNativeLiquidGlassMenu(const char* gameObjectName) {
    if (gameObjectName) {
        NSString *name = [NSString stringWithUTF8String:gameObjectName];
        [[LiquidGlassDebugMenuController sharedInstance] setupWithGameObjectName:name];
    }
}

void _ShowNativeLiquidGlassMenu(void) {
    dispatch_async(dispatch_get_main_queue(), ^{
        [[LiquidGlassDebugMenuController sharedInstance] showMenu];
    });
}

void _HideNativeLiquidGlassMenu(void) {
    dispatch_async(dispatch_get_main_queue(), ^{
        [[LiquidGlassDebugMenuController sharedInstance] hideMenu];
    });
}

void _ToggleNativeLiquidGlassMenu(void) {
    dispatch_async(dispatch_get_main_queue(), ^{
        [[LiquidGlassDebugMenuController sharedInstance] toggleMenu];
    });
}

void _UpdateNativeTelemetry(const char* telemetryText) {
    if (telemetryText) {
        NSString *txt = [NSString stringWithUTF8String:telemetryText];
        [[LiquidGlassDebugMenuController sharedInstance] updateTelemetry:txt];
    }
}

void _UpdateNativeStatusMessage(const char* msg) {
    if (msg) {
        NSString *txt = [NSString stringWithUTF8String:msg];
        [[LiquidGlassDebugMenuController sharedInstance] updateStatusMessage:txt];
    }
}

void _SetNativeAspectMode(int mode) {
    [[LiquidGlassDebugMenuController sharedInstance] setAspectMode:mode];
}

}
