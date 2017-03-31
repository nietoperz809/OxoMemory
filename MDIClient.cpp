// MDIClient.cpp : implementation file
//

#include "stdafx.h"
#include "OxoMemory.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMDIClient

CMDIClient::CMDIClient()
{
}

CMDIClient::~CMDIClient()
{
}


BEGIN_MESSAGE_MAP(CMDIClient, CWnd)
	//{{AFX_MSG_MAP(CMDIClient)
	ON_WM_ERASEBKGND()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()


/////////////////////////////////////////////////////////////////////////////
// CMDIClient message handlers

BOOL CMDIClient::OnEraseBkgnd(CDC* pDC) 
{
      // Set brush to desired background color
      CBitmap cb;
	  cb.LoadBitmap (IDB_BACKGND);
	  CBrush backBrush (&cb);
 
      // Save old brush
      CBrush* pOldBrush = pDC->SelectObject(&backBrush);
 
      CRect rect;
      pDC->GetClipBox(&rect);     // Erase the area needed
 
      pDC->PatBlt(rect.left, rect.top, rect.Width(), rect.Height(),
          PATCOPY);
      pDC->SelectObject(pOldBrush);
      return TRUE;
}
