// AboutOxo.cpp : implementation file
//

#include "stdafx.h"
#include "OxoMemory.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CAboutOxo dialog


CAboutOxo::CAboutOxo(CWnd* pParent /*=NULL*/)
	: CDialog(CAboutOxo::IDD, pParent)
{
	//{{AFX_DATA_INIT(CAboutOxo)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void CAboutOxo::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CAboutOxo)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CAboutOxo, CDialog)
	//{{AFX_MSG_MAP(CAboutOxo)
		// NOTE: the ClassWizard will add message map macros here
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CAboutOxo message handlers
