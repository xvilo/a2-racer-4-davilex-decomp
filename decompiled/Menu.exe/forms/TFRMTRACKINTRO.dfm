inherited frmTrackIntro: TfrmTrackIntro
  Left = 167
  Top = 141
  ActiveControl = nil
  Caption = 'frmTrackIntro'
  PixelsPerInch = 96
  TextHeight = 13
  inherited imgBackGround: TImage
    OnClick = imgBackGroundClick
  end
  inherited btnHelp: TGDIButton
    Visible = False
  end
  inherited btnClose: TGDIButton
    Visible = False
  end
  object timClose: TTimer
    Enabled = False
    Interval = 3500
    OnTimer = timCloseTimer
    Left = 264
    Top = 104
  end
end
