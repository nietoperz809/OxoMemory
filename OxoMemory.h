// OxoMemory.h : main header file for the OXOMEMORY application
//

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

#include "bmpbutton.h"
#include "mdiclient.h"
#include "oxobutton.h"
#include "memorywindow.h"
#include "oxowindow.h"
#include "mainfrm.h"
#include "aboutoxo.h"

/////////////////////////////////////////////////////////////////////////////
// COxoMemoryApp:
// See OxoMemory.cpp for the implementation of this class
//

class COxoMemoryApp : public CWinApp
{
public:
	COxoMemoryApp();
	OXOWindow *m_oxowin;
	MemoryWindow *m_memwin;

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(COxoMemoryApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(COxoMemoryApp)
	afx_msg void OnAboutoxomemory();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////
