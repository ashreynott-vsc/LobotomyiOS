# Lobotomy Corporation - Native iOS Build Repository

This repository contains the exported Unity iOS project (C++ IL2CPP source, Xcode project configuration, and dependencies) for compiling the native ARM64 Mach-O binary via GitHub Actions.

## Automated Cloud Build (GitHub Actions)
1. Push to `main` branch or trigger **Actions** -> **Build LobotomyCorp iOS ARM64** -> **Run workflow**.
2. GitHub Actions runs on a macOS 14 (Apple Silicon) runner, extracts static libraries, and compiles the native `LobotomyCorp` ARM64 binary using Xcode 15.4.
3. Download the artifact `LobotomyCorp-iOS-ARM64` from the completed workflow run.

## Packaging into SideStore `.ipa`
Use the packaging script `package_ipa.ps1` on your Windows PC:
```powershell
.\package_ipa.ps1 -ArtifactZip "path\to\LobotomyCorp-iOS-Release.zip"
```
The script merges the compiled binary with your local 4.7 GB `Data/` folder and outputs `LobotomyCorp.ipa` in under 15 seconds.
