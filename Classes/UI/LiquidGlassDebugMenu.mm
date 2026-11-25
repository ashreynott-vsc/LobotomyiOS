#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import <QuartzCore/QuartzCore.h>
#import <mach/mach.h>
#import <objc/message.h>
#import <stdint.h>
#import <stdbool.h>
#import <stdlib.h>

extern "C" {
    UIView* UnityGetGLView(void);
    UIViewController* UnityGetGLViewController(void);
    void UnitySendMessage(const char* obj, const char* method, const char* msg);
    void* Resources_UnloadUnusedAssets_m2836736321(void* __this, void* method);
    void GC_Collect_m743975114(void* __this, void* method);
    void QualitySettings_SetQualityLevel_m2320778053(void* __this, int32_t index, bool applyExpensiveChanges, void* method);
    int32_t QualitySettings_GetQualityLevel_m848937883(void* __this, void* method);
    const char* Mobile_GetEgoCatalogTSV(void);
    float _GetMobileRenderScale(void);
    void _ApplyMobileRenderScaleLive(float scale);
}

static BOOL s_metalHudDesired = NO;
static volatile int32_t s_menuVisibleAtomic = 0;
static int s_cachedTargetFPS = 0;

extern "C" int _GetMobileTargetFPS(void) {
    if (s_cachedTargetFPS > 0) return s_cachedTargetFPS;
    NSInteger saved = [[NSUserDefaults standardUserDefaults] integerForKey:@"LobCorp_TargetFPS"];
    if (saved == 30 || saved == 45 || saved == 60) {
        s_cachedTargetFPS = (int)saved;
    } else {
        s_cachedTargetFPS = 60;
    }
    return s_cachedTargetFPS;
}

static int64_t GetRamWatchdogThresholdMB(void) {
    static int64_t s_thresh = 0;
    if (s_thresh == 0) {
        unsigned long long physBytes = [NSProcessInfo processInfo].physicalMemory;
        s_thresh = (physBytes <= 4500000000ULL) ? 1650 : 1980;
    }
    return s_thresh;
}

static void RunOnMainThread(void (^block)(void)) {
    if (!block) return;
    if ([NSThread isMainThread]) {
        block();
    } else {
        dispatch_async(dispatch_get_main_queue(), block);
    }
}

static void TriggerHaptic(void) {
    if (@available(iOS 10.0, *)) {
        UIImpactFeedbackGenerator *feedback = [[UIImpactFeedbackGenerator alloc] initWithStyle:UIImpactFeedbackStyleLight];
        [feedback prepare];
        [feedback impactOccurred];
    }
}

static int64_t GetPhysicalMemoryMB(void) {
    task_vm_info_data_t vmInfo;
    mach_msg_type_number_t count = TASK_VM_INFO_COUNT;
    kern_return_t kr = task_info(mach_task_self(), TASK_VM_INFO, (task_info_t)&vmInfo, &count);
    if (kr == KERN_SUCCESS) {
        return (int64_t)(vmInfo.phys_footprint / (1024LL * 1024LL));
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

static void CollectMetalLayersFromLayer(CALayer *layer, NSMutableArray<CAMetalLayer *> *out, Class metalCls) {
    if (!layer) return;
    if ([layer isKindOfClass:metalCls] && ![out containsObject:(CAMetalLayer *)layer]) {
        [out addObject:(CAMetalLayer *)layer];
    }
    NSArray<CALayer *> *subs = layer.sublayers;
    for (CALayer *sub in subs) {
        CollectMetalLayersFromLayer(sub, out, metalCls);
    }
}

static NSArray<CAMetalLayer *>* CollectMetalLayers(void) {
    Class metalCls = NSClassFromString(@"CAMetalLayer");
    if (!metalCls) return @[];
    NSMutableArray<CAMetalLayer *> *layers = [NSMutableArray array];
    UIView *glView = UnityGetGLView();
    if (glView && glView.layer) {
        CollectMetalLayersFromLayer(glView.layer, layers, metalCls);
    }
    if (@available(iOS 13.0, *)) {
        for (UIScene *scene in [UIApplication sharedApplication].connectedScenes) {
            if (![scene isKindOfClass:[UIWindowScene class]]) continue;
            UIWindowScene *ws = (UIWindowScene *)scene;
            for (UIWindow *win in ws.windows) {
                if (win.layer) {
                    CollectMetalLayersFromLayer(win.layer, layers, metalCls);
                }
            }
        }
    }
    return [layers copy];
}

static BOOL IsMetalHudActive(void) {
    NSArray<CAMetalLayer *> *layers = CollectMetalLayers();
    SEL getSel = NSSelectorFromString(@"developerHUDProperties");
    for (CAMetalLayer *layer in layers) {
        if (![layer respondsToSelector:getSel]) continue;
        NSDictionary *props = ((id (*)(id, SEL))objc_msgSend)(layer, getSel);
        if (props == nil) {
            return YES;
        }
        if ([props isKindOfClass:[NSDictionary class]]) {
            id modeObj = props[@"mode"];
            if ([modeObj isKindOfClass:[NSString class]]) {
                return ![((NSString *)modeObj) isEqualToString:@"disabled"];
            }
        }
        return s_metalHudDesired;
    }
    return s_metalHudDesired;
}

static BOOL SetMetalHudActive(BOOL enabled, BOOL *supportedOut) {
    s_metalHudDesired = enabled;
    NSUserDefaults *defs = [NSUserDefaults standardUserDefaults];
    [defs setBool:enabled forKey:@"LobCorp_MetalHudActive"];
    [defs removeObjectForKey:@"MetalForceHudEnabled"];
    [defs removeObjectForKey:@"MetalHUDEnabled"];
    [defs removeObjectForKey:@"MetalHudEnabled"];
    [defs synchronize];

    NSArray<CAMetalLayer *> *layers = CollectMetalLayers();
    SEL setSel = NSSelectorFromString(@"setDeveloperHUDProperties:");
    NSDictionary *newProps = enabled
        ? @{@"mode": @"default"}
        : @{@"mode": @"disabled", @"logging": @"disabled"};

    BOOL anySupported = NO;
    for (CAMetalLayer *layer in layers) {
        if (![layer respondsToSelector:setSel]) continue;
        ((void (*)(id, SEL, NSDictionary *))objc_msgSend)(layer, setSel, newProps);
        anySupported = YES;
    }
    if (supportedOut) *supportedOut = anySupported;
    return IsMetalHudActive();
}

static UIVisualEffect* GetLiquidGlassEffect(void) {
    Class glassClass = NSClassFromString(@"UIGlassEffect");
    if (glassClass) {
        SEL selEffect = NSSelectorFromString(@"effect");
        if ([glassClass respondsToSelector:selEffect]) {
            UIVisualEffect *effect = ((id (*)(Class, SEL))objc_msgSend)(glassClass, selEffect);
            if (effect) return effect;
        }
        SEL selStyle = NSSelectorFromString(@"effectWithStyle:");
        if ([glassClass respondsToSelector:selStyle]) {
            UIVisualEffect *effect = ((id (*)(Class, SEL, NSInteger))objc_msgSend)(glassClass, selStyle, 0);
            if (effect) return effect;
        }
    }
    if (@available(iOS 13.0, *)) {
        return [UIBlurEffect effectWithStyle:UIBlurEffectStyleSystemUltraThinMaterialDark];
    }
    return [UIBlurEffect effectWithStyle:UIBlurEffectStyleDark];
}

static UIColor* RiskColorForGrade(NSInteger grade) {
    switch (grade) {
        case 1: return [UIColor colorWithRed:0.29 green:0.87 blue:0.50 alpha:1.0]; // ZAYIN
        case 2: return [UIColor colorWithRed:0.38 green:0.65 blue:0.98 alpha:1.0]; // TETH
        case 3: return [UIColor colorWithRed:0.98 green:0.80 blue:0.08 alpha:1.0]; // HE
        case 4: return [UIColor colorWithRed:0.75 green:0.52 blue:0.99 alpha:1.0]; // WAW
        case 5: return [UIColor colorWithRed:0.97 green:0.44 blue:0.44 alpha:1.0]; // ALEPH
        default: return [UIColor colorWithWhite:0.75 alpha:1.0];
    }
}

static NSString* RiskTitleForGrade(NSInteger grade) {
    switch (grade) {
        case 1: return @"ZAYIN";
        case 2: return @"TETH";
        case 3: return @"HE";
        case 4: return @"WAW";
        case 5: return @"ALEPH";
        default: return @"EGO";
    }
}

static UIButton* CreateGlassButton(NSString *title, id target, SEL action, CGFloat fontSize) {
    UIButton *btn = [UIButton buttonWithType:UIButtonTypeCustom];
    [btn setTitle:title forState:UIControlStateNormal];
    [btn setTitleColor:[UIColor colorWithWhite:0.96 alpha:1.0] forState:UIControlStateNormal];
    [btn setTitleColor:[UIColor colorWithWhite:0.70 alpha:1.0] forState:UIControlStateHighlighted];
    [btn setTitleColor:[UIColor colorWithWhite:1.0 alpha:0.32] forState:UIControlStateDisabled];
    btn.titleLabel.font = [UIFont systemFontOfSize:fontSize weight:UIFontWeightSemibold];
    btn.titleLabel.adjustsFontSizeToFitWidth = YES;
    btn.titleLabel.minimumScaleFactor = 0.70;
    btn.titleLabel.lineBreakMode = NSLineBreakByTruncatingTail;
    btn.backgroundColor = [UIColor colorWithWhite:1.0 alpha:0.12];
    btn.layer.cornerRadius = 9.0;
    if (@available(iOS 13.0, *)) {
        btn.layer.cornerCurve = kCACornerCurveContinuous;
    }
    btn.layer.borderWidth = 0.5;
    btn.layer.borderColor = [UIColor colorWithWhite:1.0 alpha:0.22].CGColor;
    btn.layer.masksToBounds = YES;
    btn.contentEdgeInsets = UIEdgeInsetsMake(5, 8, 5, 8);
    if (target && action) {
        [btn addTarget:target action:action forControlEvents:UIControlEventTouchUpInside];
    }
    return btn;
}

static UILabel* CreateSectionLabel(NSString *text) {
    UILabel *lbl = [[UILabel alloc] init];
    lbl.text = text;
    lbl.textColor = [UIColor colorWithWhite:0.84 alpha:0.88];
    lbl.font = [UIFont systemFontOfSize:10.0 weight:UIFontWeightBold];
    return lbl;
}

@interface MobileEgoItem : NSObject
@property (nonatomic, assign) NSInteger grade;
@property (nonatomic, assign) int32_t wpnId;
@property (nonatomic, assign) int32_t armId;
@property (nonatomic, copy) NSString *codeNo;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *searchBlob;
@end

@implementation MobileEgoItem
@end

@interface LiquidGlassEgoCell : UITableViewCell
@property (nonatomic, strong) UILabel *tierLabel;
@property (nonatomic, strong) UILabel *nameLabel;
@property (nonatomic, strong) UILabel *codeLabel;
@property (nonatomic, strong) UIButton *btnWpn;
@property (nonatomic, strong) UIButton *btnSuit;
@property (nonatomic, strong) UIButton *btnSet;
@property (nonatomic, copy) void (^onForgeAction)(NSInteger mode);
@end

@implementation LiquidGlassEgoCell

- (instancetype)initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString *)reuseIdentifier {
    self = [super initWithStyle:style reuseIdentifier:reuseIdentifier];
    if (self) {
        self.backgroundColor = [UIColor clearColor];
        self.selectionStyle = UITableViewCellSelectionStyleNone;

        UIView *card = [[UIView alloc] init];
        card.translatesAutoresizingMaskIntoConstraints = NO;
        card.backgroundColor = [UIColor colorWithWhite:1.0 alpha:0.07];
        card.layer.cornerRadius = 9.0;
        if (@available(iOS 13.0, *)) {
            card.layer.cornerCurve = kCACornerCurveContinuous;
        }
        card.layer.borderWidth = 0.5;
        card.layer.borderColor = [UIColor colorWithWhite:1.0 alpha:0.15].CGColor;
        [self.contentView addSubview:card];

        self.tierLabel = [[UILabel alloc] init];
        self.tierLabel.translatesAutoresizingMaskIntoConstraints = NO;
        self.tierLabel.font = [UIFont systemFontOfSize:9.5 weight:UIFontWeightBlack];
        self.tierLabel.textAlignment = NSTextAlignmentCenter;
        self.tierLabel.layer.cornerRadius = 5.0;
        self.tierLabel.layer.masksToBounds = YES;
        self.tierLabel.layer.borderWidth = 0.7;

        self.nameLabel = [[UILabel alloc] init];
        self.nameLabel.translatesAutoresizingMaskIntoConstraints = NO;
        self.nameLabel.font = [UIFont systemFontOfSize:12.5 weight:UIFontWeightSemibold];
        self.nameLabel.textColor = [UIColor whiteColor];
        self.nameLabel.lineBreakMode = NSLineBreakByTruncatingTail;

        self.codeLabel = [[UILabel alloc] init];
        self.codeLabel.translatesAutoresizingMaskIntoConstraints = NO;
        self.codeLabel.font = [UIFont monospacedSystemFontOfSize:10.0 weight:UIFontWeightRegular];
        self.codeLabel.textColor = [UIColor colorWithWhite:0.78 alpha:0.85];

        self.btnWpn = CreateGlassButton(@"+ WPN", self, @selector(onWpnTap), 10.5);
        self.btnWpn.translatesAutoresizingMaskIntoConstraints = NO;
        self.btnWpn.contentEdgeInsets = UIEdgeInsetsMake(4, 6, 4, 6);

        self.btnSuit = CreateGlassButton(@"+ SUIT", self, @selector(onSuitTap), 10.5);
        self.btnSuit.translatesAutoresizingMaskIntoConstraints = NO;
        self.btnSuit.contentEdgeInsets = UIEdgeInsetsMake(4, 6, 4, 6);

        self.btnSet = CreateGlassButton(@"+ SET", self, @selector(onSetTap), 10.5);
        self.btnSet.translatesAutoresizingMaskIntoConstraints = NO;
        self.btnSet.contentEdgeInsets = UIEdgeInsetsMake(4, 6, 4, 6);
        self.btnSet.backgroundColor = [UIColor colorWithRed:0.18 green:0.58 blue:0.35 alpha:0.35];

        [card addSubview:self.tierLabel];
        [card addSubview:self.nameLabel];
        [card addSubview:self.codeLabel];
        [card addSubview:self.btnWpn];
        [card addSubview:self.btnSuit];
        [card addSubview:self.btnSet];

        [NSLayoutConstraint activateConstraints:@[
            [card.topAnchor constraintEqualToAnchor:self.contentView.topAnchor constant:2.5],
            [card.bottomAnchor constraintEqualToAnchor:self.contentView.bottomAnchor constant:-2.5],
            [card.leadingAnchor constraintEqualToAnchor:self.contentView.leadingAnchor],
            [card.trailingAnchor constraintEqualToAnchor:self.contentView.trailingAnchor],

            [self.tierLabel.leadingAnchor constraintEqualToAnchor:card.leadingAnchor constant:8],
            [self.tierLabel.centerYAnchor constraintEqualToAnchor:card.centerYAnchor],
            [self.tierLabel.widthAnchor constraintEqualToConstant:44],
            [self.tierLabel.heightAnchor constraintEqualToConstant:20],

            [self.nameLabel.leadingAnchor constraintEqualToAnchor:self.tierLabel.trailingAnchor constant:8],
            [self.nameLabel.topAnchor constraintEqualToAnchor:card.topAnchor constant:6],
            [self.nameLabel.trailingAnchor constraintLessThanOrEqualToAnchor:self.btnWpn.leadingAnchor constant:-6],

            [self.codeLabel.leadingAnchor constraintEqualToAnchor:self.nameLabel.leadingAnchor],
            [self.codeLabel.topAnchor constraintEqualToAnchor:self.nameLabel.bottomAnchor constant:1],
            [self.codeLabel.trailingAnchor constraintLessThanOrEqualToAnchor:self.btnWpn.leadingAnchor constant:-6],

            [self.btnSet.trailingAnchor constraintEqualToAnchor:card.trailingAnchor constant:-7],
            [self.btnSet.centerYAnchor constraintEqualToAnchor:card.centerYAnchor],
            [self.btnSet.widthAnchor constraintEqualToConstant:48],
            [self.btnSet.heightAnchor constraintEqualToConstant:26],

            [self.btnSuit.trailingAnchor constraintEqualToAnchor:self.btnSet.leadingAnchor constant:-4],
            [self.btnSuit.centerYAnchor constraintEqualToAnchor:card.centerYAnchor],
            [self.btnSuit.widthAnchor constraintEqualToConstant:52],
            [self.btnSuit.heightAnchor constraintEqualToConstant:26],

            [self.btnWpn.trailingAnchor constraintEqualToAnchor:self.btnSuit.leadingAnchor constant:-4],
            [self.btnWpn.centerYAnchor constraintEqualToAnchor:card.centerYAnchor],
            [self.btnWpn.widthAnchor constraintEqualToConstant:50],
            [self.btnWpn.heightAnchor constraintEqualToConstant:26],
        ]];
    }
    return self;
}

- (void)configureWithItem:(MobileEgoItem *)item {
    UIColor *riskColor = RiskColorForGrade(item.grade);
    self.tierLabel.text = RiskTitleForGrade(item.grade);
    self.tierLabel.textColor = riskColor;
    self.tierLabel.backgroundColor = [riskColor colorWithAlphaComponent:0.18];
    self.tierLabel.layer.borderColor = [riskColor colorWithAlphaComponent:0.55].CGColor;

    self.nameLabel.text = item.name.length > 0 ? item.name : [NSString stringWithFormat:@"E.G.O %d", item.wpnId > 0 ? item.wpnId : item.armId];
    self.codeLabel.text = item.codeNo.length > 0 ? item.codeNo : [NSString stringWithFormat:@"W:%d  S:%d", item.wpnId, item.armId];

    BOOL hasWpn = (item.wpnId > 0);
    BOOL hasArm = (item.armId > 0);
    self.btnWpn.enabled = hasWpn;
    self.btnWpn.alpha = hasWpn ? 1.0 : 0.25;
    self.btnSuit.enabled = hasArm;
    self.btnSuit.alpha = hasArm ? 1.0 : 0.25;
    self.btnSet.enabled = (hasWpn && hasArm);
    self.btnSet.alpha = (hasWpn && hasArm) ? 1.0 : 0.25;
}

- (void)onWpnTap {
    TriggerHaptic();
    if (self.onForgeAction) self.onForgeAction(0);
}
- (void)onSuitTap {
    TriggerHaptic();
    if (self.onForgeAction) self.onForgeAction(1);
}
- (void)onSetTap {
    TriggerHaptic();
    if (self.onForgeAction) self.onForgeAction(2);
}

@end

@interface LiquidGlassOverlayContainerView : UIView
@property (nonatomic, weak) UIView *pillView;
@property (nonatomic, weak) UIView *menuView;
@property (nonatomic, assign) BOOL menuVisible;
@end

@implementation LiquidGlassOverlayContainerView
- (UIView *)hitTest:(CGPoint)point withEvent:(UIEvent *)event {
    UIView *hitView = [super hitTest:point withEvent:event];
    if (!self.menuVisible) {
        if (hitView == self) {
            return nil;
        }
        if (self.pillView && !self.pillView.hidden && [hitView isDescendantOfView:self.pillView]) {
            return hitView;
        }
        return nil;
    }
    return hitView;
}
@end

@interface LiquidGlassDebugMenuController : NSObject <UITextFieldDelegate, UITableViewDataSource, UITableViewDelegate>
@property (nonatomic, copy) NSString *gameObjectName;
@property (nonatomic, strong) LiquidGlassOverlayContainerView *containerView;
@property (nonatomic, strong) UIView *backdropView;
@property (nonatomic, strong) UIVisualEffectView *pillView;
@property (nonatomic, strong) UILabel *pillLabel;
@property (nonatomic, strong) UIVisualEffectView *menuView;
@property (nonatomic, strong) NSLayoutConstraint *menuCenterYConstraint;

@property (nonatomic, strong) UISegmentedControl *tabSegment;
@property (nonatomic, strong) UIScrollView *controlsScrollView;
@property (nonatomic, strong) UIView *armoryContainerView;

@property (nonatomic, strong) UILabel *telemetryLabel;
@property (nonatomic, strong) UILabel *statusLabel;
@property (nonatomic, strong) UIButton *btnClean169;
@property (nonatomic, strong) UIButton *btnQualHigh;
@property (nonatomic, strong) UIButton *btnQualHalf;
@property (nonatomic, strong) UIButton *btnRenderScale;
@property (nonatomic, strong) UIButton *btnFpsCap;
@property (nonatomic, strong) UIButton *btnMetalHud;
@property (nonatomic, strong) UITextField *cmdInputField;

@property (nonatomic, strong) UITextField *egoSearchField;
@property (nonatomic, strong) UITableView *egoTableView;
@property (nonatomic, strong) NSArray<UIButton *> *tierFilterButtons;
@property (nonatomic, strong) NSArray<MobileEgoItem *> *allEgoItems;
@property (nonatomic, strong) NSArray<MobileEgoItem *> *filteredEgoItems;
@property (nonatomic, assign) NSInteger selectedTierFilter; // 0 = ALL, 1..5 = ZAYIN..ALEPH
@property (nonatomic, assign) BOOL egoLoaded;

@property (nonatomic, assign) int currentAspectMode;
@property (nonatomic, assign) int currentQualityLevel;
@property (nonatomic, assign) float currentRenderScale;
@property (nonatomic, assign) int currentTargetFPS;
@property (nonatomic, assign) BOOL menuVisible;

+ (instancetype)sharedInstance;
- (void)setupWithGameObjectName:(NSString *)name;
- (void)createOverlayUI;
- (void)showMenu;
- (void)hideMenu;
- (void)toggleMenu;
- (void)updateTelemetry:(NSString *)text;
- (void)updateStatusMessage:(NSString *)msg;
- (void)setAspectMode:(int)mode;
- (void)updateAspectButtonStyles;
- (void)updateQualityButtonStyles;
- (void)updatePerfButtonStyles;
- (void)updateMetalHudButtonStyle;
@end

@implementation LiquidGlassDebugMenuController

+ (instancetype)sharedInstance {
    static LiquidGlassDebugMenuController *s_instance = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        s_instance = [[LiquidGlassDebugMenuController alloc] init];
    });
    return s_instance;
}

- (instancetype)init {
    self = [super init];
    if (self) {
        _gameObjectName = @"[MobileScreenManager]";
        _currentAspectMode = 0;
        _currentQualityLevel = 0;
        _currentRenderScale = _GetMobileRenderScale();
        _currentTargetFPS = _GetMobileTargetFPS();
        _selectedTierFilter = 0;
        _menuVisible = NO;
        _egoLoaded = NO;
        s_metalHudDesired = [[NSUserDefaults standardUserDefaults] boolForKey:@"LobCorp_MetalHudActive"];

        [[NSNotificationCenter defaultCenter] addObserver:self
                                                 selector:@selector(onMemoryWarning:)
                                                     name:UIApplicationDidReceiveMemoryWarningNotification
                                                   object:nil];
        [[NSNotificationCenter defaultCenter] addObserver:self
                                                 selector:@selector(onKeyboardWillShow:)
                                                     name:UIKeyboardWillShowNotification
                                                   object:nil];
        [[NSNotificationCenter defaultCenter] addObserver:self
                                                 selector:@selector(onKeyboardWillHide:)
                                                     name:UIKeyboardWillHideNotification
                                                   object:nil];
    }
    return self;
}

- (void)dealloc {
    [[NSNotificationCenter defaultCenter] removeObserver:self];
}

- (void)onMemoryWarning:(NSNotification *)note {
    PurgeMemoryNow();
    if (self.currentQualityLevel != 1) {
        self.currentQualityLevel = 1;
        SetTextureQualityLevel(1);
        [self updateQualityButtonStyles];
    }
    [self updateStatusMessage:@"[EMERGENCY] iOS Memory Warning -> Purged & Half-Res"];
}

- (void)onKeyboardWillShow:(NSNotification *)note {
    if (!self.menuVisible || !self.menuCenterYConstraint) return;
    CGRect kbFrame = [note.userInfo[UIKeyboardFrameEndUserInfoKey] CGRectValue];
    CGFloat shift = MIN(0.0, -(kbFrame.size.height * 0.25));
    [UIView animateWithDuration:0.22 animations:^{
        self.menuCenterYConstraint.constant = shift;
        [self.containerView layoutIfNeeded];
    }];
}

- (void)onKeyboardWillHide:(NSNotification *)note {
    if (!self.menuCenterYConstraint) return;
    [UIView animateWithDuration:0.22 animations:^{
        self.menuCenterYConstraint.constant = 0.0;
        [self.containerView layoutIfNeeded];
    }];
}

- (void)setupWithGameObjectName:(NSString *)name {
    RunOnMainThread(^{
        if (name.length > 0) {
            self.gameObjectName = name;
        }
        self.currentQualityLevel = QualitySettings_GetQualityLevel_m848937883(NULL, NULL);
        [self createOverlayUI];
        SetMetalHudActive(s_metalHudDesired, NULL);
        [self updateAspectButtonStyles];
        [self updateQualityButtonStyles];
        [self updatePerfButtonStyles];
        [self updateMetalHudButtonStyle];
    });
}

- (UIView *)findRootHostView {
    UIView *rootView = UnityGetGLView();
    if (!rootView) {
        UIViewController *vc = UnityGetGLViewController();
        if (vc) rootView = vc.view;
    }
    if (!rootView) {
        if (@available(iOS 13.0, *)) {
            for (UIScene *scene in [UIApplication sharedApplication].connectedScenes) {
                if (![scene isKindOfClass:[UIWindowScene class]]) continue;
                UIWindowScene *ws = (UIWindowScene *)scene;
                for (UIWindow *win in ws.windows) {
                    if (win.isKeyWindow && win.rootViewController.view) {
                        return win.rootViewController.view;
                    }
                }
                if (!rootView && ws.windows.firstObject.rootViewController.view) {
                    rootView = ws.windows.firstObject.rootViewController.view;
                }
            }
        }
    }
    return rootView;
}

- (void)attachContainerIfNeeded {
    UIView *rootView = [self findRootHostView];
    if (!rootView || !self.containerView) return;
    if (self.containerView.superview != rootView) {
        self.containerView.frame = rootView.bounds;
        self.containerView.autoresizingMask = UIViewAutoresizingFlexibleWidth | UIViewAutoresizingFlexibleHeight;
        [rootView addSubview:self.containerView];
    }
    [rootView bringSubviewToFront:self.containerView];
}

- (void)createOverlayUI {
    if (self.containerView) {
        [self attachContainerIfNeeded];
        return;
    }

    UIView *rootView = [self findRootHostView];
    if (!rootView) {
        return;
    }

    self.containerView = [[LiquidGlassOverlayContainerView alloc] initWithFrame:rootView.bounds];
    self.containerView.autoresizingMask = UIViewAutoresizingFlexibleWidth | UIViewAutoresizingFlexibleHeight;
    self.containerView.backgroundColor = [UIColor clearColor];
    [rootView addSubview:self.containerView];

    self.backdropView = [[UIView alloc] initWithFrame:self.containerView.bounds];
    self.backdropView.autoresizingMask = UIViewAutoresizingFlexibleWidth | UIViewAutoresizingFlexibleHeight;
    self.backdropView.backgroundColor = [UIColor colorWithWhite:0.0 alpha:0.34];
    self.backdropView.alpha = 0.0;
    self.backdropView.hidden = YES;
    UITapGestureRecognizer *bgTap = [[UITapGestureRecognizer alloc] initWithTarget:self action:@selector(onBackdropTapped)];
    [self.backdropView addGestureRecognizer:bgTap];
    [self.containerView addSubview:self.backdropView];

    UIVisualEffect *glassEffect = GetLiquidGlassEffect();

    // 1. Floating Pill View (Auto Layout top-center, draggable via CGAffineTransform)
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
    self.pillLabel.text = @"60 fps · -- MB";
    [self.pillView.contentView addSubview:self.pillLabel];

    [NSLayoutConstraint activateConstraints:@[
        [self.pillLabel.centerXAnchor constraintEqualToAnchor:self.pillView.contentView.centerXAnchor],
        [self.pillLabel.centerYAnchor constraintEqualToAnchor:self.pillView.contentView.centerYAnchor],
        [self.pillLabel.leadingAnchor constraintEqualToAnchor:self.pillView.contentView.leadingAnchor constant:12.0],
        [self.pillLabel.trailingAnchor constraintEqualToAnchor:self.pillView.contentView.trailingAnchor constant:-12.0],
    ]];

    [self.containerView addSubview:self.pillView];

    UILayoutGuide *safe = self.containerView.safeAreaLayoutGuide;
    [NSLayoutConstraint activateConstraints:@[
        [self.pillView.topAnchor constraintEqualToAnchor:safe.topAnchor constant:6.0],
        [self.pillView.centerXAnchor constraintEqualToAnchor:safe.centerXAnchor],
        [self.pillView.heightAnchor constraintEqualToConstant:34.0],
    ]];

    UITapGestureRecognizer *pillTap = [[UITapGestureRecognizer alloc] initWithTarget:self action:@selector(toggleMenu)];
    [self.pillView addGestureRecognizer:pillTap];
    UIPanGestureRecognizer *pillPan = [[UIPanGestureRecognizer alloc] initWithTarget:self action:@selector(handlePillPan:)];
    [self.pillView addGestureRecognizer:pillPan];

    // 2. Main Modal Card (560x450 clamped by safeGuide +/- 12)
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
    [self.containerView addSubview:self.menuView];
    self.containerView.menuView = self.menuView;

    UIView *tintView = [[UIView alloc] init];
    tintView.translatesAutoresizingMaskIntoConstraints = NO;
    tintView.backgroundColor = [UIColor colorWithRed:0.06 green:0.08 blue:0.11 alpha:0.52];
    tintView.userInteractionEnabled = NO;
    [self.menuView.contentView addSubview:tintView];
    [NSLayoutConstraint activateConstraints:@[
        [tintView.topAnchor constraintEqualToAnchor:self.menuView.contentView.topAnchor],
        [tintView.bottomAnchor constraintEqualToAnchor:self.menuView.contentView.bottomAnchor],
        [tintView.leadingAnchor constraintEqualToAnchor:self.menuView.contentView.leadingAnchor],
        [tintView.trailingAnchor constraintEqualToAnchor:self.menuView.contentView.trailingAnchor],
    ]];

    NSLayoutConstraint *prefW = [self.menuView.widthAnchor constraintEqualToConstant:560.0];
    prefW.priority = UILayoutPriorityDefaultHigh;
    NSLayoutConstraint *prefH = [self.menuView.heightAnchor constraintEqualToConstant:450.0];
    prefH.priority = UILayoutPriorityDefaultHigh;
    self.menuCenterYConstraint = [self.menuView.centerYAnchor constraintEqualToAnchor:safe.centerYAnchor];

    [NSLayoutConstraint activateConstraints:@[
        [self.menuView.centerXAnchor constraintEqualToAnchor:safe.centerXAnchor],
        self.menuCenterYConstraint,
        [self.menuView.widthAnchor constraintLessThanOrEqualToAnchor:safe.widthAnchor constant:-24.0],
        [self.menuView.heightAnchor constraintLessThanOrEqualToAnchor:safe.heightAnchor constant:-24.0],
        prefW,
        prefH,
    ]];

    [self buildMenuContents];
    [self updateAspectButtonStyles];
    [self updateQualityButtonStyles];
    [self updatePerfButtonStyles];
    [self updateMetalHudButtonStyle];
}

- (void)buildMenuContents {
    UIView *content = self.menuView.contentView;

    UIView *header = [[UIView alloc] init];
    header.translatesAutoresizingMaskIntoConstraints = NO;
    [content addSubview:header];

    UILabel *titleLabel = [[UILabel alloc] init];
    titleLabel.translatesAutoresizingMaskIntoConstraints = NO;
    titleLabel.text = @"LOBOTOMY // DBG";
    titleLabel.textColor = [UIColor whiteColor];
    titleLabel.font = [UIFont monospacedSystemFontOfSize:12.0 weight:UIFontWeightHeavy];

    self.tabSegment = [[UISegmentedControl alloc] initWithItems:@[@"CONTROLS & CHEATS", @"E.G.O ARMORY"]];
    self.tabSegment.translatesAutoresizingMaskIntoConstraints = NO;
    self.tabSegment.selectedSegmentIndex = 0;
    if (@available(iOS 13.0, *)) {
        self.tabSegment.selectedSegmentTintColor = [UIColor colorWithRed:0.22 green:0.56 blue:0.86 alpha:0.65];
        self.tabSegment.backgroundColor = [UIColor colorWithWhite:1.0 alpha:0.10];
    }
    [self.tabSegment setTitleTextAttributes:@{
        NSForegroundColorAttributeName: [UIColor colorWithWhite:0.86 alpha:0.9],
        NSFontAttributeName: [UIFont systemFontOfSize:11.0 weight:UIFontWeightSemibold]
    } forState:UIControlStateNormal];
    [self.tabSegment setTitleTextAttributes:@{
        NSForegroundColorAttributeName: [UIColor whiteColor],
        NSFontAttributeName: [UIFont systemFontOfSize:11.0 weight:UIFontWeightBold]
    } forState:UIControlStateSelected];
    [self.tabSegment addTarget:self action:@selector(onTabChanged) forControlEvents:UIControlEventValueChanged];

    UIButton *closeBtn = CreateGlassButton(@"✕", self, @selector(hideMenu), 13.0);
    closeBtn.translatesAutoresizingMaskIntoConstraints = NO;
    closeBtn.backgroundColor = [UIColor colorWithRed:0.82 green:0.22 blue:0.22 alpha:0.32];

    [header addSubview:titleLabel];
    [header addSubview:self.tabSegment];
    [header addSubview:closeBtn];

    [NSLayoutConstraint activateConstraints:@[
        [header.topAnchor constraintEqualToAnchor:content.topAnchor constant:10],
        [header.leadingAnchor constraintEqualToAnchor:content.leadingAnchor constant:14],
        [header.trailingAnchor constraintEqualToAnchor:content.trailingAnchor constant:-14],
        [header.heightAnchor constraintEqualToConstant:32],

        [titleLabel.leadingAnchor constraintEqualToAnchor:header.leadingAnchor],
        [titleLabel.centerYAnchor constraintEqualToAnchor:header.centerYAnchor],
        [titleLabel.widthAnchor constraintLessThanOrEqualToConstant:145],

        [closeBtn.trailingAnchor constraintEqualToAnchor:header.trailingAnchor],
        [closeBtn.centerYAnchor constraintEqualToAnchor:header.centerYAnchor],
        [closeBtn.widthAnchor constraintEqualToConstant:32],
        [closeBtn.heightAnchor constraintEqualToConstant:28],

        [self.tabSegment.centerYAnchor constraintEqualToAnchor:header.centerYAnchor],
        [self.tabSegment.trailingAnchor constraintEqualToAnchor:closeBtn.leadingAnchor constant:-8],
        [self.tabSegment.leadingAnchor constraintGreaterThanOrEqualToAnchor:titleLabel.trailingAnchor constant:8],
        [self.tabSegment.heightAnchor constraintEqualToConstant:28],
    ]];

    self.statusLabel = [[UILabel alloc] init];
    self.statusLabel.translatesAutoresizingMaskIntoConstraints = NO;
    self.statusLabel.text = @"Ready.";
    self.statusLabel.textColor = [UIColor colorWithRed:0.64 green:0.88 blue:1.0 alpha:0.95];
    self.statusLabel.font = [UIFont monospacedSystemFontOfSize:10.5 weight:UIFontWeightMedium];
    self.statusLabel.lineBreakMode = NSLineBreakByTruncatingTail;
    [content addSubview:self.statusLabel];

    UIView *dividerTop = [[UIView alloc] init];
    dividerTop.translatesAutoresizingMaskIntoConstraints = NO;
    dividerTop.backgroundColor = [UIColor colorWithWhite:1.0 alpha:0.14];
    [content addSubview:dividerTop];

    UIView *dividerBot = [[UIView alloc] init];
    dividerBot.translatesAutoresizingMaskIntoConstraints = NO;
    dividerBot.backgroundColor = [UIColor colorWithWhite:1.0 alpha:0.14];
    [content addSubview:dividerBot];

    self.controlsScrollView = [[UIScrollView alloc] init];
    self.controlsScrollView.translatesAutoresizingMaskIntoConstraints = NO;
    self.controlsScrollView.showsVerticalScrollIndicator = YES;
    self.controlsScrollView.keyboardDismissMode = UIScrollViewKeyboardDismissModeOnDrag;
    [content addSubview:self.controlsScrollView];

    self.armoryContainerView = [[UIView alloc] init];
    self.armoryContainerView.translatesAutoresizingMaskIntoConstraints = NO;
    self.armoryContainerView.hidden = YES;
    [content addSubview:self.armoryContainerView];

    [NSLayoutConstraint activateConstraints:@[
        [dividerTop.topAnchor constraintEqualToAnchor:header.bottomAnchor constant:8],
        [dividerTop.leadingAnchor constraintEqualToAnchor:content.leadingAnchor constant:12],
        [dividerTop.trailingAnchor constraintEqualToAnchor:content.trailingAnchor constant:-12],
        [dividerTop.heightAnchor constraintEqualToConstant:0.6],

        [self.statusLabel.bottomAnchor constraintEqualToAnchor:content.bottomAnchor constant:-9],
        [self.statusLabel.leadingAnchor constraintEqualToAnchor:content.leadingAnchor constant:14],
        [self.statusLabel.trailingAnchor constraintEqualToAnchor:content.trailingAnchor constant:-14],
        [self.statusLabel.heightAnchor constraintEqualToConstant:18],

        [dividerBot.bottomAnchor constraintEqualToAnchor:self.statusLabel.topAnchor constant:-6],
        [dividerBot.leadingAnchor constraintEqualToAnchor:content.leadingAnchor constant:12],
        [dividerBot.trailingAnchor constraintEqualToAnchor:content.trailingAnchor constant:-12],
        [dividerBot.heightAnchor constraintEqualToConstant:0.6],

        [self.controlsScrollView.topAnchor constraintEqualToAnchor:dividerTop.bottomAnchor constant:4],
        [self.controlsScrollView.bottomAnchor constraintEqualToAnchor:dividerBot.topAnchor constant:-4],
        [self.controlsScrollView.leadingAnchor constraintEqualToAnchor:content.leadingAnchor],
        [self.controlsScrollView.trailingAnchor constraintEqualToAnchor:content.trailingAnchor],

        [self.armoryContainerView.topAnchor constraintEqualToAnchor:dividerTop.bottomAnchor constant:6],
        [self.armoryContainerView.bottomAnchor constraintEqualToAnchor:dividerBot.topAnchor constant:-6],
        [self.armoryContainerView.leadingAnchor constraintEqualToAnchor:content.leadingAnchor constant:12],
        [self.armoryContainerView.trailingAnchor constraintEqualToAnchor:content.trailingAnchor constant:-12],
    ]];

    [self buildControlsTab];
    [self buildArmoryTab];
}

- (void)buildControlsTab {
    UIStackView *stack = [[UIStackView alloc] init];
    stack.translatesAutoresizingMaskIntoConstraints = NO;
    stack.axis = UILayoutConstraintAxisVertical;
    stack.spacing = 9.0;
    [self.controlsScrollView addSubview:stack];

    [NSLayoutConstraint activateConstraints:@[
        [stack.topAnchor constraintEqualToAnchor:self.controlsScrollView.contentLayoutGuide.topAnchor constant:8],
        [stack.bottomAnchor constraintEqualToAnchor:self.controlsScrollView.contentLayoutGuide.bottomAnchor constant:-10],
        [stack.leadingAnchor constraintEqualToAnchor:self.controlsScrollView.contentLayoutGuide.leadingAnchor constant:12],
        [stack.trailingAnchor constraintEqualToAnchor:self.controlsScrollView.contentLayoutGuide.trailingAnchor constant:-12],
        [stack.widthAnchor constraintEqualToAnchor:self.controlsScrollView.frameLayoutGuide.widthAnchor constant:-24],
    ]];

    UIView *telCard = [[UIView alloc] init];
    telCard.backgroundColor = [UIColor colorWithWhite:0.0 alpha:0.28];
    telCard.layer.cornerRadius = 10.0;
    telCard.layer.borderWidth = 0.6;
    telCard.layer.borderColor = [UIColor colorWithWhite:1.0 alpha:0.14].CGColor;
    self.telemetryLabel = [[UILabel alloc] init];
    self.telemetryLabel.translatesAutoresizingMaskIntoConstraints = NO;
    self.telemetryLabel.numberOfLines = 0;
    self.telemetryLabel.text = @"Waiting for telemetry...";
    self.telemetryLabel.textColor = [UIColor colorWithWhite:0.93 alpha:0.95];
    self.telemetryLabel.font = [UIFont monospacedDigitSystemFontOfSize:10.5 weight:UIFontWeightRegular];
    [telCard addSubview:self.telemetryLabel];
    [NSLayoutConstraint activateConstraints:@[
        [self.telemetryLabel.topAnchor constraintEqualToAnchor:telCard.topAnchor constant:7],
        [self.telemetryLabel.bottomAnchor constraintEqualToAnchor:telCard.bottomAnchor constant:-7],
        [self.telemetryLabel.leadingAnchor constraintEqualToAnchor:telCard.leadingAnchor constant:10],
        [self.telemetryLabel.trailingAnchor constraintEqualToAnchor:telCard.trailingAnchor constant:-10],
    ]];
    [stack addArrangedSubview:telCard];

    [stack addArrangedSubview:CreateSectionLabel(@"DISPLAY & GRAPHICS")];

    self.btnClean169 = CreateGlassButton(@"Aspect: 16:9 Pillbox (Locked)", self, @selector(onModeCleanTapped), 11.5);
    self.btnClean169.translatesAutoresizingMaskIntoConstraints = NO;
    [self.btnClean169.heightAnchor constraintEqualToConstant:28.0].active = YES;
    [stack addArrangedSubview:self.btnClean169];

    self.btnQualHigh = CreateGlassButton(@"Tex: Full (High)", self, @selector(onQualHighTapped), 11.5);
    self.btnQualHalf = CreateGlassButton(@"Tex: Half (Low VRAM)", self, @selector(onQualHalfTapped), 11.5);
    UIStackView *qualRow = [[UIStackView alloc] initWithArrangedSubviews:@[self.btnQualHigh, self.btnQualHalf]];
    qualRow.axis = UILayoutConstraintAxisHorizontal;
    qualRow.distribution = UIStackViewDistributionFillEqually;
    qualRow.spacing = 8.0;
    [qualRow.heightAnchor constraintEqualToConstant:30.0].active = YES;
    [stack addArrangedSubview:qualRow];

    self.btnRenderScale = CreateGlassButton(@"Scale: 75%", self, @selector(onCycleRenderScaleTapped), 11.5);
    self.btnFpsCap = CreateGlassButton(@"FPS Cap: 60", self, @selector(onCycleFpsCapTapped), 11.5);
    UIStackView *perfRow = [[UIStackView alloc] initWithArrangedSubviews:@[self.btnRenderScale, self.btnFpsCap]];
    perfRow.axis = UILayoutConstraintAxisHorizontal;
    perfRow.distribution = UIStackViewDistributionFillEqually;
    perfRow.spacing = 8.0;
    [perfRow.heightAnchor constraintEqualToConstant:30.0].active = YES;
    [stack addArrangedSubview:perfRow];

    self.btnMetalHud = CreateGlassButton(@"Metal HUD", self, @selector(onToggleMetalHudTapped), 11.0);
    UIButton *btnPurge = CreateGlassButton(@"Purge Unused RAM", self, @selector(onPurgeRamTapped), 11.0);
    btnPurge.backgroundColor = [UIColor colorWithRed:0.20 green:0.55 blue:0.85 alpha:0.26];
    UIButton *btnEsc = CreateGlassButton(@"ESC / Back", self, @selector(onEscTapped), 11.0);
    btnEsc.backgroundColor = [UIColor colorWithRed:0.85 green:0.52 blue:0.18 alpha:0.26];
    UIStackView *sysRow = [[UIStackView alloc] initWithArrangedSubviews:@[self.btnMetalHud, btnPurge, btnEsc]];
    sysRow.axis = UILayoutConstraintAxisHorizontal;
    sysRow.distribution = UIStackViewDistributionFillEqually;
    sysRow.spacing = 8.0;
    [sysRow.heightAnchor constraintEqualToConstant:30.0].active = YES;
    [stack addArrangedSubview:sysRow];

    [stack addArrangedSubview:CreateSectionLabel(@"FACILITY CHEATS")];

    UIButton *b1 = CreateGlassButton(@"+500 Enkephalin", self, @selector(onCheatEnkTapped), 11.0);
    UIButton *b2 = CreateGlassButton(@"+1000 LOB Points", self, @selector(onCheatMoneyTapped), 11.0);
    UIButton *b3 = CreateGlassButton(@"Max Bullets", self, @selector(onCheatBulletsTapped), 11.0);
    UIStackView *r1 = [[UIStackView alloc] initWithArrangedSubviews:@[b1, b2, b3]];
    r1.axis = UILayoutConstraintAxisHorizontal;
    r1.distribution = UIStackViewDistributionFillEqually;
    r1.spacing = 7.0;
    [r1.heightAnchor constraintEqualToConstant:32.0].active = YES;
    [stack addArrangedSubview:r1];

    UIButton *b4 = CreateGlassButton(@"Buff All Agents", self, @selector(onCheatBuffTapped), 11.0);
    UIButton *b5 = CreateGlassButton(@"Suppress All", self, @selector(onCheatSuppressTapped), 11.0);
    UIButton *b6 = CreateGlassButton(@"Clear Meltdowns", self, @selector(onCheatClearMeltTapped), 11.0);
    UIStackView *r2 = [[UIStackView alloc] initWithArrangedSubviews:@[b4, b5, b6]];
    r2.axis = UILayoutConstraintAxisHorizontal;
    r2.distribution = UIStackViewDistributionFillEqually;
    r2.spacing = 7.0;
    [r2.heightAnchor constraintEqualToConstant:32.0].active = YES;
    [stack addArrangedSubview:r2];

    UIButton *b7 = CreateGlassButton(@"+1 Meltdown Lvl", self, @selector(onCheatNextMeltTapped), 11.0);
    b7.backgroundColor = [UIColor colorWithRed:0.86 green:0.32 blue:0.24 alpha:0.30];
    UIButton *b8 = CreateGlassButton(@"Complete Missions", self, @selector(onCheatMissionTapped), 11.0);
    UIButton *b9 = CreateGlassButton(@"Unlock Research", self, @selector(onCheatResearchTapped), 11.0);
    UIStackView *r3 = [[UIStackView alloc] initWithArrangedSubviews:@[b7, b8, b9]];
    r3.axis = UILayoutConstraintAxisHorizontal;
    r3.distribution = UIStackViewDistributionFillEqually;
    r3.spacing = 7.0;
    [r3.heightAnchor constraintEqualToConstant:32.0].active = YES;
    [stack addArrangedSubview:r3];

    [stack addArrangedSubview:CreateSectionLabel(@"CONSOLE COMMAND")];

    self.cmdInputField = [[UITextField alloc] init];
    self.cmdInputField.delegate = self;
    self.cmdInputField.backgroundColor = [UIColor colorWithWhite:0.0 alpha:0.36];
    self.cmdInputField.textColor = [UIColor whiteColor];
    self.cmdInputField.font = [UIFont monospacedSystemFontOfSize:12.0 weight:UIFontWeightRegular];
    self.cmdInputField.attributedPlaceholder = [[NSAttributedString alloc]
        initWithString:@"Command (e.g. nextmeltdown, forgeallego)..."
            attributes:@{NSForegroundColorAttributeName: [UIColor colorWithWhite:0.68 alpha:0.75]}];
    self.cmdInputField.layer.cornerRadius = 8.0;
    self.cmdInputField.layer.borderWidth = 0.6;
    self.cmdInputField.layer.borderColor = [UIColor colorWithWhite:1.0 alpha:0.2].CGColor;
    self.cmdInputField.leftView = [[UIView alloc] initWithFrame:CGRectMake(0, 0, 8, 1)];
    self.cmdInputField.leftViewMode = UITextFieldViewModeAlways;
    self.cmdInputField.autocorrectionType = UITextAutocorrectionTypeNo;
    self.cmdInputField.autocapitalizationType = UITextAutocapitalizationTypeNone;
    self.cmdInputField.returnKeyType = UIReturnKeyGo;

    UIButton *runBtn = CreateGlassButton(@"RUN", self, @selector(onRunCustomCmd), 11.5);
    runBtn.backgroundColor = [UIColor colorWithRed:0.22 green:0.56 blue:0.86 alpha:0.42];
    [runBtn.widthAnchor constraintEqualToConstant:58.0].active = YES;

    UIStackView *cmdRow = [[UIStackView alloc] initWithArrangedSubviews:@[self.cmdInputField, runBtn]];
    cmdRow.axis = UILayoutConstraintAxisHorizontal;
    cmdRow.spacing = 8.0;
    [cmdRow.heightAnchor constraintEqualToConstant:32.0].active = YES;
    [stack addArrangedSubview:cmdRow];
}

- (void)buildArmoryTab {
    self.egoSearchField = [[UITextField alloc] init];
    self.egoSearchField.translatesAutoresizingMaskIntoConstraints = NO;
    self.egoSearchField.delegate = self;
    self.egoSearchField.backgroundColor = [UIColor colorWithWhite:0.0 alpha:0.36];
    self.egoSearchField.textColor = [UIColor whiteColor];
    self.egoSearchField.font = [UIFont systemFontOfSize:12.0 weight:UIFontWeightRegular];
    self.egoSearchField.attributedPlaceholder = [[NSAttributedString alloc]
        initWithString:@"Search E.G.O name or code (e.g. Mimicry, O-03-89)..."
            attributes:@{NSForegroundColorAttributeName: [UIColor colorWithWhite:0.68 alpha:0.75]}];
    self.egoSearchField.layer.cornerRadius = 8.0;
    self.egoSearchField.layer.borderWidth = 0.6;
    self.egoSearchField.layer.borderColor = [UIColor colorWithWhite:1.0 alpha:0.2].CGColor;
    self.egoSearchField.leftView = [[UIView alloc] initWithFrame:CGRectMake(0, 0, 8, 1)];
    self.egoSearchField.leftViewMode = UITextFieldViewModeAlways;
    self.egoSearchField.clearButtonMode = UITextFieldViewModeWhileEditing;
    self.egoSearchField.autocorrectionType = UITextAutocorrectionTypeNo;
    self.egoSearchField.autocapitalizationType = UITextAutocapitalizationTypeNone;
    self.egoSearchField.returnKeyType = UIReturnKeySearch;
    [self.egoSearchField addTarget:self action:@selector(onEgoSearchChanged) forControlEvents:UIControlEventEditingChanged];

    UIButton *forgeAllBtn = CreateGlassButton(@"+1 ALL E.G.O", self, @selector(onForgeAllEgoTapped), 11.0);
    forgeAllBtn.translatesAutoresizingMaskIntoConstraints = NO;
    forgeAllBtn.backgroundColor = [UIColor colorWithRed:0.18 green:0.64 blue:0.42 alpha:0.42];
    [forgeAllBtn.widthAnchor constraintEqualToConstant:102.0].active = YES;

    UIStackView *searchRow = [[UIStackView alloc] initWithArrangedSubviews:@[self.egoSearchField, forgeAllBtn]];
    searchRow.translatesAutoresizingMaskIntoConstraints = NO;
    searchRow.axis = UILayoutConstraintAxisHorizontal;
    searchRow.spacing = 7.0;

    NSArray *tierNames = @[@"ALL", @"ZAYIN", @"TETH", @"HE", @"WAW", @"ALEPH"];
    NSMutableArray<UIButton *> *tierBtns = [NSMutableArray array];
    for (NSInteger idx = 0; idx < (NSInteger)tierNames.count; idx++) {
        UIButton *tb = CreateGlassButton(tierNames[idx], self, @selector(onTierFilterTapped:), 10.5);
        tb.tag = idx;
        tb.layer.cornerRadius = 7.0;
        [tierBtns addObject:tb];
    }
    self.tierFilterButtons = [tierBtns copy];

    UIStackView *tierRow = [[UIStackView alloc] initWithArrangedSubviews:self.tierFilterButtons];
    tierRow.translatesAutoresizingMaskIntoConstraints = NO;
    tierRow.axis = UILayoutConstraintAxisHorizontal;
    tierRow.distribution = UIStackViewDistributionFillEqually;
    tierRow.spacing = 5.0;

    self.egoTableView = [[UITableView alloc] initWithFrame:CGRectZero style:UITableViewStylePlain];
    self.egoTableView.translatesAutoresizingMaskIntoConstraints = NO;
    self.egoTableView.backgroundColor = [UIColor clearColor];
    self.egoTableView.separatorStyle = UITableViewCellSeparatorStyleNone;
    self.egoTableView.rowHeight = 46.0;
    self.egoTableView.keyboardDismissMode = UIScrollViewKeyboardDismissModeOnDrag;
    self.egoTableView.dataSource = self;
    self.egoTableView.delegate = self;
    [self.egoTableView registerClass:[LiquidGlassEgoCell class] forCellReuseIdentifier:@"LiquidGlassEgoCell"];

    [self.armoryContainerView addSubview:searchRow];
    [self.armoryContainerView addSubview:tierRow];
    [self.armoryContainerView addSubview:self.egoTableView];

    [NSLayoutConstraint activateConstraints:@[
        [searchRow.topAnchor constraintEqualToAnchor:self.armoryContainerView.topAnchor],
        [searchRow.leadingAnchor constraintEqualToAnchor:self.armoryContainerView.leadingAnchor],
        [searchRow.trailingAnchor constraintEqualToAnchor:self.armoryContainerView.trailingAnchor],
        [searchRow.heightAnchor constraintEqualToConstant:32.0],

        [tierRow.topAnchor constraintEqualToAnchor:searchRow.bottomAnchor constant:6.0],
        [tierRow.leadingAnchor constraintEqualToAnchor:self.armoryContainerView.leadingAnchor],
        [tierRow.trailingAnchor constraintEqualToAnchor:self.armoryContainerView.trailingAnchor],
        [tierRow.heightAnchor constraintEqualToConstant:26.0],

        [self.egoTableView.topAnchor constraintEqualToAnchor:tierRow.bottomAnchor constant:6.0],
        [self.egoTableView.bottomAnchor constraintEqualToAnchor:self.armoryContainerView.bottomAnchor],
        [self.egoTableView.leadingAnchor constraintEqualToAnchor:self.armoryContainerView.leadingAnchor],
        [self.egoTableView.trailingAnchor constraintEqualToAnchor:self.armoryContainerView.trailingAnchor],
    ]];

    [self updateTierFilterStyles];
}

#pragma mark - Armory Catalog Loading & Filtering

- (void)ensureEgoCatalogLoaded {
    if (self.egoLoaded && self.allEgoItems.count > 0) return;

    const char *raw = Mobile_GetEgoCatalogTSV();
    if (!raw || raw[0] == '\0') {
        self.allEgoItems = @[];
        self.filteredEgoItems = @[];
        [self.egoTableView reloadData];
        return;
    }

    NSString *tsv = [NSString stringWithUTF8String:raw];
    if (!tsv) tsv = @"";
    NSArray<NSString *> *lines = [tsv componentsSeparatedByString:@"\n"];
    NSMutableArray<MobileEgoItem *> *items = [NSMutableArray arrayWithCapacity:lines.count];

    for (NSString *line in lines) {
        if (line.length == 0) continue;
        NSArray<NSString *> *parts = [line componentsSeparatedByString:@"\t"];
        if (parts.count < 5) continue;

        MobileEgoItem *item = [[MobileEgoItem alloc] init];
        item.grade = [parts[0] integerValue];
        item.wpnId = (int32_t)[parts[1] integerValue];
        item.armId = (int32_t)[parts[2] integerValue];
        item.codeNo = parts[3];
        if (parts.count == 5) {
            item.name = parts[4];
        } else {
            item.name = [[parts subarrayWithRange:NSMakeRange(4, parts.count - 4)] componentsJoinedByString:@"\t"];
        }
        item.searchBlob = [[NSString stringWithFormat:@"%@ %@ %d %d", item.name, item.codeNo, item.wpnId, item.armId] lowercaseString];
        [items addObject:item];
    }

    [items sortUsingComparator:^NSComparisonResult(MobileEgoItem *a, MobileEgoItem *b) {
        if (a.grade != b.grade) {
            return (a.grade < b.grade) ? NSOrderedAscending : NSOrderedDescending;
        }
        return [a.name localizedCaseInsensitiveCompare:b.name];
    }];

    self.allEgoItems = [items copy];
    self.egoLoaded = (self.allEgoItems.count > 0);
    [self applyEgoFilters];
}

- (void)applyEgoFilters {
    NSString *q = [[self.egoSearchField.text ?: @"" stringByTrimmingCharactersInSet:[NSCharacterSet whitespaceAndNewlineCharacterSet]] lowercaseString];
    NSInteger tier = self.selectedTierFilter;

    if (tier == 0 && q.length == 0) {
        self.filteredEgoItems = self.allEgoItems ?: @[];
    } else {
        NSMutableArray<MobileEgoItem *> *out = [NSMutableArray arrayWithCapacity:self.allEgoItems.count];
        for (MobileEgoItem *item in self.allEgoItems) {
            if (tier != 0 && item.grade != tier) continue;
            if (q.length > 0 && [item.searchBlob rangeOfString:q].location == NSNotFound) continue;
            [out addObject:item];
        }
        self.filteredEgoItems = [out copy];
    }
    [self.egoTableView reloadData];
}

- (void)updateTierFilterStyles {
    for (UIButton *btn in self.tierFilterButtons) {
        BOOL sel = (btn.tag == self.selectedTierFilter);
        if (sel) {
            UIColor *accent = (btn.tag == 0)
                ? [UIColor colorWithRed:0.24 green:0.60 blue:0.92 alpha:0.65]
                : [RiskColorForGrade(btn.tag) colorWithAlphaComponent:0.42];
            btn.backgroundColor = accent;
            btn.layer.borderColor = [UIColor colorWithWhite:1.0 alpha:0.65].CGColor;
        } else {
            btn.backgroundColor = [UIColor colorWithWhite:1.0 alpha:0.10];
            btn.layer.borderColor = [UIColor colorWithWhite:1.0 alpha:0.18].CGColor;
        }
    }
}

#pragma mark - UITableViewDataSource / UITableViewDelegate

- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section {
    return (NSInteger)self.filteredEgoItems.count;
}

- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath {
    LiquidGlassEgoCell *cell = [tableView dequeueReusableCellWithIdentifier:@"LiquidGlassEgoCell" forIndexPath:indexPath];
    MobileEgoItem *item = self.filteredEgoItems[indexPath.row];
    [cell configureWithItem:item];

    __weak LiquidGlassDebugMenuController *weakSelf = self;
    cell.onForgeAction = ^(NSInteger mode) {
        __strong LiquidGlassDebugMenuController *strongSelf = weakSelf;
        if (!strongSelf) return;
        if (mode == 0 && item.wpnId > 0) {
            [strongSelf sendUnityCommand:[NSString stringWithFormat:@"forgeego %d", item.wpnId]];
        } else if (mode == 1 && item.armId > 0) {
            [strongSelf sendUnityCommand:[NSString stringWithFormat:@"forgeego %d", item.armId]];
        } else if (mode == 2 && item.wpnId > 0 && item.armId > 0) {
            [strongSelf sendUnityCommand:[NSString stringWithFormat:@"forgeegoset %d %d", item.wpnId, item.armId]];
        }
    };
    return cell;
}

#pragma mark - Actions

- (void)onTabChanged {
    TriggerHaptic();
    BOOL showArmory = (self.tabSegment.selectedSegmentIndex == 1);
    self.controlsScrollView.hidden = showArmory;
    self.armoryContainerView.hidden = !showArmory;
    [self.containerView endEditing:YES];
    if (showArmory) {
        [self ensureEgoCatalogLoaded];
        [self updateStatusMessage:[NSString stringWithFormat:@"E.G.O Armory: %lu catalog sets", (unsigned long)self.allEgoItems.count]];
    }
}

- (void)onBackdropTapped {
    [self.containerView endEditing:YES];
    [self hideMenu];
}

- (void)handlePillPan:(UIPanGestureRecognizer *)pan {
    UIView *v = self.pillView;
    if (!v || !self.containerView) return;
    CGPoint delta = [pan translationInView:self.containerView];
    [pan setTranslation:CGPointZero inView:self.containerView];
    CGAffineTransform next = CGAffineTransformTranslate(v.transform, delta.x, delta.y);
    CGRect baseFrame = v.frame;
    CGFloat halfDx = (self.containerView.bounds.size.width - baseFrame.size.width) * 0.5;
    CGFloat maxUp = -(baseFrame.origin.y - 4.0);
    CGFloat maxDown = (self.containerView.bounds.size.height - CGRectGetMaxY(baseFrame) - 4.0);
    next.tx = MAX(-halfDx, MIN(halfDx, next.tx));
    next.ty = MAX(maxUp, MIN(maxDown, next.ty));
    v.transform = next;
}

- (void)showMenu {
    RunOnMainThread(^{
        [self createOverlayUI];
        [self attachContainerIfNeeded];
        if (!self.menuView || self.menuVisible) return;
        TriggerHaptic();
        s_menuVisibleAtomic = 1;
        self.menuVisible = YES;
        self.containerView.menuVisible = YES;
        self.backdropView.hidden = NO;
        self.menuView.hidden = NO;
        self.menuView.transform = CGAffineTransformMakeScale(0.92, 0.92);
        [self updatePerfButtonStyles];
        [self updateMetalHudButtonStyle];
        [UIView animateWithDuration:0.25
                              delay:0.0
             usingSpringWithDamping:0.85
              initialSpringVelocity:0.5
                            options:UIViewAnimationOptionCurveEaseOut
                         animations:^{
            self.backdropView.alpha = 1.0;
            self.menuView.alpha = 1.0;
            self.menuView.transform = CGAffineTransformIdentity;
        } completion:nil];
    });
}

- (void)hideMenu {
    RunOnMainThread(^{
        if (!self.menuVisible && s_menuVisibleAtomic == 0) return;
        TriggerHaptic();
        s_menuVisibleAtomic = 0;
        self.menuVisible = NO;
        self.containerView.menuVisible = NO;
        [self.containerView endEditing:YES];
        [UIView animateWithDuration:0.20 animations:^{
            self.backdropView.alpha = 0.0;
            self.menuView.alpha = 0.0;
            self.menuView.transform = CGAffineTransformMakeScale(0.92, 0.92);
        } completion:^(BOOL finished) {
            if (!self.menuVisible) {
                self.backdropView.hidden = YES;
                self.menuView.hidden = YES;
                self.menuView.transform = CGAffineTransformIdentity;
            }
        }];
    });
}

- (void)toggleMenu {
    RunOnMainThread(^{
        if (self.menuVisible) {
            [self hideMenu];
        } else {
            [self showMenu];
        }
    });
}

- (void)sendUnityCommand:(NSString *)cmd {
    if (!cmd || cmd.length == 0 || self.gameObjectName.length == 0) return;
    UnitySendMessage([self.gameObjectName UTF8String], "OnNativeCommandReceived", [cmd UTF8String]);
}

- (void)onModeCleanTapped {
    TriggerHaptic();
    self.currentAspectMode = 0;
    [self updateAspectButtonStyles];
    [self sendUnityCommand:@"mode 0"];
    [self updateStatusMessage:@"16:9 Pillbox Mode (Locked)"];
}
- (void)onEscTapped {
    TriggerHaptic();
    [self sendUnityCommand:@"esc"];
}

- (void)onQualHighTapped {
    TriggerHaptic();
    self.currentQualityLevel = 0;
    SetTextureQualityLevel(0);
    [self updateQualityButtonStyles];
    [self updateStatusMessage:@"Texture Quality: Full (High)"];
}

- (void)onQualHalfTapped {
    TriggerHaptic();
    self.currentQualityLevel = 1;
    SetTextureQualityLevel(1);
    [self updateQualityButtonStyles];
    [self updateStatusMessage:@"Texture Quality: Half (Low VRAM)"];
}

- (void)onCycleRenderScaleTapped {
    TriggerHaptic();
    float cur = _GetMobileRenderScale();
    float next = 0.75f;
    if (cur < 0.70f) next = 0.75f;
    else if (cur < 0.80f) next = 0.85f;
    else if (cur < 0.95f) next = 1.00f;
    else next = 0.65f;

    self.currentRenderScale = next;
    _ApplyMobileRenderScaleLive(next);
    [self sendUnityCommand:@"mode 0"];
    [self updatePerfButtonStyles];
    int pct = (int)(next * 100.0f + 0.5f);
    [self updateStatusMessage:[NSString stringWithFormat:@"Render Scale: %d%% (applied live)", pct]];
}

- (void)onCycleFpsCapTapped {
    TriggerHaptic();
    int cur = _GetMobileTargetFPS();
    int next = (cur >= 60) ? 45 : (cur >= 45 ? 30 : 60);
    s_cachedTargetFPS = next;
    self.currentTargetFPS = next;
    NSUserDefaults *defs = [NSUserDefaults standardUserDefaults];
    [defs setInteger:next forKey:@"LobCorp_TargetFPS"];
    [defs synchronize];
    [self sendUnityCommand:[NSString stringWithFormat:@"fps %d", next]];
    [self updatePerfButtonStyles];
    [self updateStatusMessage:[NSString stringWithFormat:@"Target Frame Rate: %d FPS", next]];
}

- (void)onToggleMetalHudTapped {
    TriggerHaptic();
    BOOL next = !IsMetalHudActive();
    BOOL supported = NO;
    BOOL nowOn = SetMetalHudActive(next, &supported);
    [self updateMetalHudButtonStyle];
    if (!supported) {
        [self updateStatusMessage:@"Metal HUD property unavailable on this iOS runtime"];
    } else {
        [self updateStatusMessage:nowOn ? @"Metal Performance HUD: ON" : @"Metal Performance HUD: OFF"];
    }
}

- (void)onPurgeRamTapped {
    TriggerHaptic();
    int64_t beforeMB = GetPhysicalMemoryMB();
    PurgeMemoryNow();
    int64_t afterMB = GetPhysicalMemoryMB();
    [self updateStatusMessage:[NSString stringWithFormat:@"RAM Purged: %lld MB -> %lld MB", beforeMB, afterMB]];
}

- (void)onCheatEnkTapped { TriggerHaptic(); [self sendUnityCommand:@"enkephalin 500"]; }
- (void)onCheatMoneyTapped { TriggerHaptic(); [self sendUnityCommand:@"money 1000"]; }
- (void)onCheatBulletsTapped { TriggerHaptic(); [self sendUnityCommand:@"bullets"]; }
- (void)onCheatBuffTapped { TriggerHaptic(); [self sendUnityCommand:@"buffnugget"]; }
- (void)onCheatSuppressTapped { TriggerHaptic(); [self sendUnityCommand:@"suppress"]; }
- (void)onCheatClearMeltTapped { TriggerHaptic(); [self sendUnityCommand:@"clearmeltdown"]; }
- (void)onCheatNextMeltTapped { TriggerHaptic(); [self sendUnityCommand:@"nextmeltdown"]; }
- (void)onCheatMissionTapped { TriggerHaptic(); [self sendUnityCommand:@"mission"]; }
- (void)onCheatResearchTapped { TriggerHaptic(); [self sendUnityCommand:@"research"]; }

- (void)onForgeAllEgoTapped {
    TriggerHaptic();
    [self sendUnityCommand:@"forgeallego"];
}

- (void)onEgoSearchChanged {
    [self applyEgoFilters];
}

- (void)onTierFilterTapped:(UIButton *)sender {
    TriggerHaptic();
    self.selectedTierFilter = sender.tag;
    [self updateTierFilterStyles];
    [self applyEgoFilters];
}

- (void)onRunCustomCmd {
    TriggerHaptic();
    NSString *cmd = [self.cmdInputField.text stringByTrimmingCharactersInSet:[NSCharacterSet whitespaceAndNewlineCharacterSet]];
    if (cmd.length > 0) {
        [self sendUnityCommand:cmd];
        self.cmdInputField.text = @"";
    }
    [self.cmdInputField resignFirstResponder];
}

- (BOOL)textFieldShouldReturn:(UITextField *)textField {
    if (textField == self.cmdInputField) {
        [self onRunCustomCmd];
        return YES;
    }
    [textField resignFirstResponder];
    return YES;
}

#pragma mark - Button Style & Telemetry Sync

- (void)updateAspectButtonStyles {
    self.btnClean169.backgroundColor = [UIColor colorWithRed:0.20 green:0.56 blue:0.88 alpha:0.42];
    self.btnClean169.layer.borderColor = [UIColor colorWithWhite:1.0 alpha:0.30].CGColor;
}

- (void)updateQualityButtonStyles {
    BOOL high = (self.currentQualityLevel == 0);
    self.btnQualHigh.backgroundColor = high
        ? [UIColor colorWithRed:0.20 green:0.65 blue:0.42 alpha:0.55]
        : [UIColor colorWithWhite:1.0 alpha:0.12];
    self.btnQualHalf.backgroundColor = !high
        ? [UIColor colorWithRed:0.20 green:0.65 blue:0.42 alpha:0.55]
        : [UIColor colorWithWhite:1.0 alpha:0.12];
}

- (void)updatePerfButtonStyles {
    self.currentRenderScale = _GetMobileRenderScale();
    self.currentTargetFPS = _GetMobileTargetFPS();
    int pct = (int)(self.currentRenderScale * 100.0f + 0.5f);
    [self.btnRenderScale setTitle:[NSString stringWithFormat:@"Render Scale: %d%%", pct] forState:UIControlStateNormal];
    self.btnRenderScale.backgroundColor = (pct <= 75)
        ? [UIColor colorWithRed:0.20 green:0.65 blue:0.42 alpha:0.45]
        : [UIColor colorWithRed:0.20 green:0.52 blue:0.84 alpha:0.36];

    [self.btnFpsCap setTitle:[NSString stringWithFormat:@"FPS Cap: %d", self.currentTargetFPS] forState:UIControlStateNormal];
    self.btnFpsCap.backgroundColor = (self.currentTargetFPS < 60)
        ? [UIColor colorWithRed:0.20 green:0.65 blue:0.42 alpha:0.45]
        : [UIColor colorWithRed:0.20 green:0.52 blue:0.84 alpha:0.36];
}

- (void)updateMetalHudButtonStyle {
    BOOL on = IsMetalHudActive();
    [self.btnMetalHud setTitle:(on ? @"Metal HUD: ON" : @"Metal HUD: OFF") forState:UIControlStateNormal];
    self.btnMetalHud.backgroundColor = on
        ? [UIColor colorWithRed:0.20 green:0.68 blue:0.45 alpha:0.45]
        : [UIColor colorWithWhite:1.0 alpha:0.12];
}

- (void)setAspectMode:(int)mode {
    RunOnMainThread(^{
        self.currentAspectMode = 0;
        [self updateAspectButtonStyles];
    });
}

- (void)updateStatusMessage:(NSString *)msg {
    RunOnMainThread(^{
        if (self.statusLabel && msg) {
            self.statusLabel.text = msg;
        }
    });
}

- (void)updateTelemetry:(NSString *)text {
    if (!text) return;
    int64_t physMB = GetPhysicalMemoryMB();

    // Emergency watchdog when physical footprint approaches device jetsam limit (90s cooldown, no GC_Collect stall)
    static CFTimeInterval s_lastWatchdogUnload = 0;
    CFTimeInterval now = CACurrentMediaTime();
    int64_t threshMB = GetRamWatchdogThresholdMB();
    if (physMB > threshMB && (now - s_lastWatchdogUnload) >= 90.0) {
        s_lastWatchdogUnload = now;
        NSLog(@"[LobotomyCorp] Emergency RAM unload (>%lld MB): %lld MB", threshMB, physMB);
        Resources_UnloadUnusedAssets_m2836736321(NULL, NULL);
    }

    RunOnMainThread(^{
        if (!self.containerView) {
            [self createOverlayUI];
        }
        NSArray<NSString *> *lines = [text componentsSeparatedByString:@"\n"];
        NSString *firstLine = lines.count > 0 ? lines[0] : @"";

        NSString *fpsPrefix = @"60 fps";
        NSRange fpsRange = [firstLine rangeOfString:@" fps" options:NSCaseInsensitiveSearch];
        if (fpsRange.location != NSNotFound) {
            fpsPrefix = [[firstLine substringToIndex:NSMaxRange(fpsRange)] stringByTrimmingCharactersInSet:[NSCharacterSet whitespaceCharacterSet]];
        }

        if (physMB > 0) {
            self.pillLabel.text = [NSString stringWithFormat:@"%@ · %lld MB", fpsPrefix, physMB];
        } else if (firstLine.length > 0) {
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

@end

extern "C" {
    void _InitNativeLiquidGlassMenu(const char* gameObjectName) {
        NSString *name = gameObjectName ? [NSString stringWithUTF8String:gameObjectName] : @"[MobileScreenManager]";
        [[LiquidGlassDebugMenuController sharedInstance] setupWithGameObjectName:name];
    }

    void _ShowNativeLiquidGlassMenu(void) {
        [[LiquidGlassDebugMenuController sharedInstance] showMenu];
    }

    void _HideNativeLiquidGlassMenu(void) {
        [[LiquidGlassDebugMenuController sharedInstance] hideMenu];
    }

    void _ToggleNativeLiquidGlassMenu(void) {
        [[LiquidGlassDebugMenuController sharedInstance] toggleMenu];
    }

    int _IsNativeLiquidGlassMenuVisible(void) {
        return (int)s_menuVisibleAtomic;
    }

    void _UpdateNativePillFPS(int fps) {
        static int s_lastPillFPS = -999;
        static int64_t s_lastPillMemMB = -1;
        static CFTimeInterval s_lastMemCheck = 0;
        static CFTimeInterval s_lastWatchdogUnload = 0;

        CFTimeInterval now = CACurrentMediaTime();
        BOOL needMem = (s_lastPillMemMB < 0) || ((now - s_lastMemCheck) >= 2.0);
        if (!needMem && fps == s_lastPillFPS) {
            return;
        }

        if (needMem) {
            s_lastMemCheck = now;
            s_lastPillMemMB = GetPhysicalMemoryMB();
            int64_t threshMB = GetRamWatchdogThresholdMB();
            if (s_lastPillMemMB > threshMB && (now - s_lastWatchdogUnload) >= 90.0) {
                s_lastWatchdogUnload = now;
                NSLog(@"[LobotomyCorp] Emergency RAM unload (>%lld MB): %lld MB", threshMB, s_lastPillMemMB);
                Resources_UnloadUnusedAssets_m2836736321(NULL, NULL);
            }
        }
        s_lastPillFPS = fps;
        int64_t memToShow = s_lastPillMemMB;

        RunOnMainThread(^{
            LiquidGlassDebugMenuController *ctrl = [LiquidGlassDebugMenuController sharedInstance];
            if (!ctrl.containerView) {
                [ctrl createOverlayUI];
            }
            if (ctrl.pillLabel) {
                if (memToShow > 0) {
                    ctrl.pillLabel.text = [NSString stringWithFormat:@"%d fps · %lld MB", fps, memToShow];
                } else {
                    ctrl.pillLabel.text = [NSString stringWithFormat:@"%d fps", fps];
                }
            }
        });
    }

    void _UpdateNativeTelemetry(const char* telemetryText) {
        if (!telemetryText) return;
        NSString *txt = [NSString stringWithUTF8String:telemetryText];
        if (txt) {
            [[LiquidGlassDebugMenuController sharedInstance] updateTelemetry:txt];
        }
    }

    void _UpdateNativeStatusMessage(const char* msg) {
        if (!msg) return;
        NSString *txt = [NSString stringWithUTF8String:msg];
        if (txt) {
            [[LiquidGlassDebugMenuController sharedInstance] updateStatusMessage:txt];
        }
    }

    void _SetNativeAspectMode(int mode) {
        [[LiquidGlassDebugMenuController sharedInstance] setAspectMode:mode];
    }
}
