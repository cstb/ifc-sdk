; Script generated by the Inno Setup Script Wizard.
; SEE THE DOCUMENTATION FOR DETAILS ON CREATING INNO SETUP SCRIPT FILES!

#define MyAppName "C++ IFC2X3 API with bridge extensions"
#define MyAppVerName "C++ IFC2X3 API with bridge extensions 0.5.0"
#define MyAppPublisher "CSTB TIDS MOD-EVE"
#define MyAppURL "http://salle-immersive.cstb.fr"

[Setup]
AppName={#MyAppName}
AppVerName={#MyAppVerName}
AppPublisher={#MyAppPublisher}
AppPublisherURL={#MyAppURL}
AppSupportURL={#MyAppURL}
AppUpdatesURL={#MyAppURL}
DefaultDirName={pf}\ifc2x3
DefaultGroupName=ifc2x3
OutputBaseFilename=ifc2x3-install-0.5.0-vs2005
Compression=lzma/ultra
;Compression=none
SolidCompression=false

[Languages]
Name: english; MessagesFile: compiler:Default.isl

[Files]
Source: ..\lib\Debug\*.dll; DestDir: {app}\bin; Flags: ignoreversion; Components: Debug
Source: ..\lib\Debug\ifc2x3d.pdb; DestDir: {app}\bin; Flags: ignoreversion; Components: Debug
Source: ..\lib\Debug\*.lib; DestDir: {app}\lib; Flags: ignoreversion; Components: Debug
Source: ..\lib\Release\*.dll; DestDir: {app}\bin; Flags: ignoreversion; Components: Release
Source: ..\lib\Release\*.lib; DestDir: {app}\lib; Flags: ignoreversion; Components: Release
Source: ..\include\*.h; DestDir: {app}\include; Flags: ignoreversion recursesubdirs createallsubdirs; Components: Release
Source: ..\src\*.cpp; DestDir: {app}\src; Flags: ignoreversion recursesubdirs createallsubdirs; Components: Debug

[Icons]
Name: {group}\Uninstall; Filename: {uninstallexe}

[Registry]
Root: HKLM; Subkey: SYSTEM\CurrentControlSet\Control\Session Manager\Environment; ValueType: string; ValueName: IFC2X3_ROOT; ValueData: {app}; afterInstall: RefreshEnvironment
Root: HKLM; Subkey: SYSTEM\CurrentControlSet\Control\Session Manager\Environment; ValueType: string; ValueName: PATH; ValueData: "{olddata};{app}\bin"; afterInstall: RefreshEnvironment


[Code]
function SendMessageTimeout(hwnd, msg, wParam: LongInt; lParam: String; fuFlags, uTimeout, lpdwResult: LongInt): LongInt;
external 'SendMessageTimeoutA@user32.dll stdcall';

const
HWND_BROADCASTS = 65535;
SMTO_ABORTIFHUNG = 2;
WM_SETTINGCHANGE = 26;

procedure RefreshEnvironment();
begin
SendMessageTimeout(HWND_BROADCASTS, WM_SETTINGCHANGE, 0, 'Environment', SMTO_ABORTIFHUNG, 5000, 0);
end;
[Components]
Name: Release; Description: Optimized binary version of the API; Types: custom full compact; Languages: ; Flags: fixed
Name: Debug; Description: Debug binary version of the API; Types: custom full
