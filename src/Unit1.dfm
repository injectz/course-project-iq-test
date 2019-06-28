object Form1: TForm1
  Left = 0
  Top = 0
  Caption = #1055#1057' "'#1054#1094#1077#1085#1082#1072' '#1091#1088#1086#1074#1085#1103' IQ '#1087#1086' '#1086#1076#1085#1086#1081' '#1080#1079' '#1084#1077#1090#1086#1076#1080#1082'"'
  ClientHeight = 512
  ClientWidth = 784
  Color = clWhite
  Constraints.MinHeight = 550
  Constraints.MinWidth = 800
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  Menu = MainMenu1
  OldCreateOrder = False
  DesignSize = (
    784
    512)
  PixelsPerInch = 96
  TextHeight = 13
  object Image1: TImage
    Left = 199
    Top = 8
    Width = 577
    Height = 496
    Anchors = [akLeft, akTop, akRight, akBottom]
    Center = True
    Proportional = True
    Visible = False
  end
  object Panel1: TPanel
    Left = 8
    Top = 8
    Width = 185
    Height = 496
    Ctl3D = False
    ParentCtl3D = False
    TabOrder = 0
    object Button1: TButton
      Left = 8
      Top = 8
      Width = 161
      Height = 73
      Caption = #1053#1072#1095#1072#1090#1100' '#1090#1077#1089#1090
      TabOrder = 0
      OnClick = Button1Click
    end
    object Button2: TButton
      Left = 8
      Top = 440
      Width = 161
      Height = 44
      Caption = #1044#1072#1083#1077#1077' >'
      TabOrder = 1
      Visible = False
      OnClick = Button2Click
    end
    object RadioGroup1: TRadioGroup
      Left = 8
      Top = 144
      Width = 161
      Height = 290
      Caption = #1042#1099#1073#1077#1088#1080#1090#1077' '#1074#1072#1088#1080#1072#1085#1090' '#1086#1090#1074#1077#1090#1072':'
      TabOrder = 2
      Visible = False
    end
    object Edit1: TEdit
      Left = 8
      Top = 87
      Width = 161
      Height = 19
      TabOrder = 3
      TextHint = #1048#1084#1103' '#1080#1089#1087#1099#1090#1091#1077#1084#1086#1075#1086
    end
    object Edit2: TEdit
      Left = 8
      Top = 112
      Width = 161
      Height = 19
      MaxLength = 2
      NumbersOnly = True
      TabOrder = 4
      TextHint = #1042#1086#1079#1088#1072#1089#1090' '#1080#1089#1087#1099#1090#1091#1077#1084#1086#1075#1086
    end
  end
  object MainMenu1: TMainMenu
    Left = 208
    Top = 432
    object J1: TMenuItem
      Caption = #1054' '#1084#1077#1090#1086#1076#1080#1082#1077' '#1090#1077#1089#1090#1080#1088#1086#1074#1072#1085#1080#1103
      OnClick = J1Click
    end
  end
end
