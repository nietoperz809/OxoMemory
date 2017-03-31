// OxoMemory.cpp : Defines the class behaviors for the application.
//

#include "stdafx.h"
#include "OxoMemory.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// COxoMemoryApp

BEGIN_MESSAGE_MAP(COxoMemoryApp, CWinApp)
	//{{AFX_MSG_MAP(COxoMemoryApp)
	ON_COMMAND(ID__ABOUTOXOMEMORY, OnAboutoxomemory)
	//}}AFX_MSG_MAP
	// Standard file based document commands
	ON_COMMAND(ID_FILE_NEW, CWinApp::OnFileNew)
	ON_COMMAND(ID_FILE_OPEN, CWinApp::OnFileOpen)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// COxoMemoryApp construction

COxoMemoryApp::COxoMemoryApp()
{
	// TODO: add construction code here,
	// Place all significant initialization in InitInstance
}

/////////////////////////////////////////////////////////////////////////////
// The one and only COxoMemoryApp object
	COxoMemoryApp theApp;

/////////////////////////////////////////////////////////////////////////////
// COxoMemoryApp initialization

BOOL COxoMemoryApp::InitInstance()
{
	srand (GetTickCount());
	
	CString cs0 = AfxRegisterWndClass (CS_HREDRAW | CS_VREDRAW, 
										LoadStandardCursor (IDC_ARROW),
										0, 
										LoadIcon (IDI_APPICON));

	CString cs1 = AfxRegisterWndClass (CS_HREDRAW | CS_VREDRAW, 
										LoadCursor (IDC_NODROP),
										(HBRUSH)GetStockObject (GRAY_BRUSH), 
										LoadIcon (IDI_OXO));
	CString cs2 = AfxRegisterWndClass (CS_HREDRAW | CS_VREDRAW, 
										LoadStandardCursor (IDC_ARROW),
										(HBRUSH)GetStockObject (WHITE_BRUSH), 
										LoadIcon (IDI_MEMORY));

	CMainFrame *cf = new CMainFrame;
	m_pMainWnd = cf;
	cf->Create (cs0, "OXO-Memory for Windoze NT");
	CMenu cm;
	cm.LoadMenu (IDR_MENU1);
	cf->SetMenu (&cm);
	cm.Detach();
	
	m_memwin = new MemoryWindow;
	m_oxowin = new OXOWindow;
	m_memwin->Create (cs2, "Memory Window");
	m_oxowin->Create (cs1, "OXO Window");

	cf->MDITile();
	cf->ShowWindow (SW_SHOW);

	return TRUE;
}

/////////////////////////////////////////////////////////////////////////////
// CAboutDlg dialog used for App About

/////////////////////////////////////////////////////////////////////////////
// COxoMemoryApp commands

void COxoMemoryApp::OnAboutoxomemory() 
{
	CAboutOxo ca;
	ca.DoModal();	
}

