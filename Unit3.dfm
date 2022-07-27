object Form3: TForm3
  Left = 0
  Top = 0
  BorderStyle = bsToolWindow
  Caption = 'About Application'
  ClientHeight = 280
  ClientWidth = 470
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  KeyPreview = True
  OldCreateOrder = False
  OnKeyPress = FormKeyPress
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 8
    Top = 17
    Width = 175
    Height = 17
    Caption = 'Developer`s message:'
    Font.Charset = SYMBOL_CHARSET
    Font.Color = clMaroon
    Font.Height = -16
    Font.Name = 'Technic'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Label2: TLabel
    Left = 248
    Top = 17
    Width = 166
    Height = 17
    Caption = 'Round Robin system:'
    Font.Charset = SYMBOL_CHARSET
    Font.Color = clTeal
    Font.Height = -16
    Font.Name = 'Technic'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Memo1: TMemo
    Left = 8
    Top = 40
    Width = 175
    Height = 217
    Enabled = False
    Lines.Strings = (
      'The application is designed to '
      'help with'
      'pairing and conducting Chess '
      'Tournaments.'
      ''
      'Code was written by an '
      'inexperienced developer'
      'who`ll be glad to get your '
      'feedback and suggestions '
      'for app  improvement.')
    TabOrder = 0
  end
  object Memo2: TMemo
    Left = 216
    Top = 40
    Width = 234
    Height = 217
    Lines.Strings = (
      'Round robin is a system in which every '
      'player has to face all of opponents. For a '
      'win players '
      'get 1 point and for lose 0. Draw is 0.5 '
      'point for each player of a pair. '
      'One who has the most points at the end '
      'of a tournament wins.'
      'If two players have got same amount of '
      'points other conditions decide.'
      ''
      'The tournament always consists of '
      '(number of players -1)  rounds '
      'if number of players is even or (number of '
      'players) if  it`s odd.'
      'The application pairs players so it`s '
      'guaranteed after this amount of rounds'
      'all of games are gonna be played.'
      ''
      'Round robin is considered fair system'
      'but it`s recomended for small amount of '
      'players '
      'as every player extends duration of the '
      'tournament.')
    ReadOnly = True
    ScrollBars = ssVertical
    TabOrder = 1
  end
end
