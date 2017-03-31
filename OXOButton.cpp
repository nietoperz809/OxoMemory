// 
// OXOButton.cpp : implementation file
//

#include "stdafx.h"
#include "OxoMemory.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// OXOButton

OXOButton::OXOButton()
{
	static int flags[] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
	CString cs;
	int rval;
	do
		rval = rand()%15;
		while (flags[rval]);
	flags[rval] = 1;
	cs.Format ("IDB%d", rval);
	m_bmpid = cs;
	if (!m_bitmap.LoadBitmap (cs))
		MessageBox (cs, "OXOButton->Cannot Load Bitmap...");
}

OXOButton::~OXOButton()
{
}


void OXOButton::SetOXOBitmap (BOOL type)
{
	m_bitmap.DeleteObject();
	if (type)
	{
		m_bitmap.LoadBitmap (IDB_OXO_X);
		m_bmpid = "X";
	}
	else
	{
		m_bitmap.LoadBitmap (IDB_OXO_O);
		m_bmpid = "O";
	}
	InvalidateRect (NULL);
	UpdateWindow();
}


BEGIN_MESSAGE_MAP(OXOButton, CButton)
	//{{AFX_MSG_MAP(OXOButton)
	ON_WM_PAINT()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// OXOButton message handlers

void OXOButton::OnPaint() 
{
	CPaintDC dc(this); // device context for painting
	CDC memdc;
	RECT rect;
	BITMAP bmp;
	m_bitmap.GetBitmap (&bmp);
	memdc.CreateCompatibleDC (&dc);
	memdc.SelectObject (m_bitmap);
	GetClientRect (&rect);
	dc.StretchBlt (2,2, rect.right-4, rect.bottom-4, 
				   &memdc, 
				   0,0, bmp.bmWidth, bmp.bmHeight, 
				   SRCCOPY);  
}

