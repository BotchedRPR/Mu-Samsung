  INF MsGraphicsPkg/GopOverrideDxe/GopOverrideDxe.inf
  INF MsCorePkg/MuCryptoDxe/MuCryptoDxe.inf
  INF DfciPkg/SettingsManager/SettingsManagerDxe.inf
  INF MsGraphicsPkg/MsUiTheme/Dxe/MsUiThemeProtocol.inf
  INF MsGraphicsPkg/RenderingEngineDxe/RenderingEngineDxe.inf
  INF MsGraphicsPkg/DisplayEngineDxe/DisplayEngineDxe.inf
  INF OemPkg/BootMenu/BootMenu.inf
  INF SamsungPkg/Applications/FrontPage/FrontPage.inf
  INF PcBdsPkg/MsBootPolicy/MsBootPolicy.inf
  INF MdeModulePkg/Universal/BootManagerPolicyDxe/BootManagerPolicyDxe.inf
  INF MdeModulePkg/Universal/RegularExpressionDxe/RegularExpressionDxe.inf
  INF DfciPkg/DfciManager/DfciManager.inf
  INF MsGraphicsPkg/OnScreenKeyboardDxe/OnScreenKeyboardDxe.inf
  INF MsGraphicsPkg/SimpleWindowManagerDxe/SimpleWindowManagerDxe.inf
  INF MsGraphicsPkg/MsEarlyGraphics/Dxe/MsEarlyGraphics.inf

  INF MsWheaPkg/HwErrBert/HwErrBert.inf
  INF MsWheaPkg/MsWheaReport/Dxe/MsWheaReportDxe.inf

  # Hardware Health (Menu) application
  INF MsWheaPkg/HwhMenu/HwhMenu.inf

  INF MsCorePkg/AcpiRGRT/AcpiRgrt.inf

  INF DfciPkg/Application/DfciMenu/DfciMenu.inf

  FILE APPLICATION = PCD(gPcBdsPkgTokenSpaceGuid.PcdShellFile) {
    SECTION PE32 = $(OUTPUT_DIRECTORY)/$(TARGET)_$(TOOL_CHAIN_TAG)/AARCH64/Shell.efi
    SECTION UI = "Shell"
  }

  FILE FREEFORM = PCD(gSamsungPkgTokenSpaceGuid.PcdNoBootOSFile) {
    SECTION RAW = SamsungPkg/Include/Resources/NoBootOS.png
  }

  FILE FREEFORM = PCD(gOemPkgTokenSpaceGuid.PcdFrontPageLogoFile) {
    SECTION RAW = SamsungPkg/Applications/FrontPage/Resources/FrontpageLogo.bmp
  }

  FILE FREEFORM = PCD(gOemPkgTokenSpaceGuid.PcdLowBatteryFile) {
    SECTION RAW = SamsungPkg/Applications/FrontPage/Resources/LBAT.bmp
  }

  FILE FREEFORM = PCD(gOemPkgTokenSpaceGuid.PcdThermalFile) {
    SECTION RAW = SamsungPkg/Applications/FrontPage/Resources/THOT.bmp
  }

  FILE FREEFORM = PCD(gOemPkgTokenSpaceGuid.PcdVolumeUpIndicatorFile) {
    SECTION RAW = SamsungPkg/Applications/FrontPage/Resources/VolumeUp.bmp
  }

  FILE FREEFORM = PCD(gOemPkgTokenSpaceGuid.PcdFirmwareSettingsIndicatorFile) {
    SECTION RAW = SamsungPkg/Applications/FrontPage/Resources/FirmwareSettings.bmp
  }

  FILE FREEFORM = PCD(gOemPkgTokenSpaceGuid.PcdBootFailIndicatorFile) {
    SECTION RAW = SamsungPkg/Applications/FrontPage/Resources/NoBoot.bmp
  }