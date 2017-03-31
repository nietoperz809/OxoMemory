; CLW file contains information for the MFC ClassWizard

[General Info]
Version=1
LastClass=CMDIClient
LastTemplate=generic CWnd
NewFileInclude1=#include "stdafx.h"
NewFileInclude2=#include "OxoMemory.h"
LastPage=0

ClassCount=13
Class1=COxoMemoryApp
Class2=COxoMemoryDoc
Class3=COxoMemoryView
Class4=CMainFrame

ResourceCount=4
Resource1=IDD_ABOUTBOX
Resource2=IDR_OXOMEMTYPE
Class5=CAboutDlg
Class6=CChildFrame
Class7=OXOWindow
Class8=MemoryWindow
Class9=OXOButton
Resource3=IDR_MENU1
Class10=CMDIClient
Class11=CBmpButton
Class12=CAboutOxo
Resource4=IDD_ABOUT
Class13=XStatusBar

[CLS:COxoMemoryApp]
Type=0
HeaderFile=OxoMemory.h
ImplementationFile=OxoMemory.cpp
Filter=N
LastObject=COxoMemoryApp
BaseClass=CWinApp
VirtualFilter=AC

[CLS:COxoMemoryDoc]
Type=0
HeaderFile=OxoMemoryDoc.h
ImplementationFile=OxoMemoryDoc.cpp
Filter=N

[CLS:COxoMemoryView]
Type=0
HeaderFile=OxoMemoryView.h
ImplementationFile=OxoMemoryView.cpp
Filter=C

[CLS:CMainFrame]
Type=0
HeaderFile=MainFrm.h
ImplementationFile=MainFrm.cpp
Filter=T
BaseClass=CMDIFrameWnd
VirtualFilter=fWC


[CLS:CChildFrame]
Type=0
HeaderFile=ChildFrm.h
ImplementationFile=ChildFrm.cpp
Filter=M

[CLS:CAboutDlg]
Type=0
HeaderFile=OxoMemory.cpp
ImplementationFile=OxoMemory.cpp
Filter=D

[CLS:OXOWindow]
Type=0
HeaderFile=OXOWindow.h
ImplementationFile=OXOWindow.cpp
BaseClass=CMDIChildWnd
Filter=W
LastObject=OXOWindow
VirtualFilter=mfWC

[CLS:MemoryWindow]
Type=0
HeaderFile=MemoryWindow.h
ImplementationFile=MemoryWindow.cpp
BaseClass=CMDIChildWnd
Filter=W
LastObject=ID_WINDOW_TILE_VERT
VirtualFilter=mfWC

[CLS:OXOButton]
Type=0
HeaderFile=OXOButton.h
ImplementationFile=OXOButton.cpp
BaseClass=CButton
Filter=W
LastObject=OXOButton
VirtualFilter=BWC

[MNU:IDR_MENU1]
Type=1
Class=COxoMemoryApp
Command1=ID_WINDOW_TILE_VERT
Command2=ID__ABOUTOXOMEMORY
CommandCount=2

[CLS:CMDIClient]
Type=0
HeaderFile=MDIClient.h
ImplementationFile=MDIClient.cpp
BaseClass=CWnd
Filter=W
VirtualFilter=WC
LastObject=CMDIClient

[CLS:CBmpButton]
Type=0
HeaderFile=bmpbutton.h
ImplementationFile=bmpbutton.cpp
BaseClass=CButton
Filter=W
LastObject=ID__ABOUTOXOMEMORY

[DLG:IDD_ABOUT]
Type=1
Class=CAboutOxo
ControlCount=5
Control1=IDOK,button,1342242817
Control2=IDC_STATIC,static,1342177283
Control3=IDC_STATIC,static,1342177283
Control4=IDC_STATIC,static,1342177283
Control5=IDC_STATIC,static,1342308352

[CLS:CAboutOxo]
Type=0
HeaderFile=AboutOxo.h
ImplementationFile=AboutOxo.cpp
BaseClass=CDialog
Filter=D
LastObject=CAboutOxo

[CLS:XStatusBar]
Type=0
HeaderFile=XStatusBar.h
ImplementationFile=XStatusBar.cpp
BaseClass=generic CWnd
Filter=W
LastObject=ID__ABOUTOXOMEMORY

