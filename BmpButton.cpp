// BmpButton.cpp : implementation file
//

#include "stdafx.h"
#include "oxomemory.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CBmpButton

CBmpButton::CBmpButton()
{
	m_paintflag = TRUE;
	m_hcursor = AfxGetApp()->LoadCursor (HAND_DOWN);
}

CBmpButton::~CBmpButton()
{
}

void CBmpButton::SetBitmap (LPCTSTR bmpid)
{
	m_paintflag = TRUE;
	m_bmpid = bmpid;
	m_bitmap.DeleteObject();
	if (!m_bitmap.LoadBitmap (bmpid))
		AfxMessageBox ("CBmpButton -> Cannot load Bitmap....");
	InvalidateRect (NULL);
	UpdateWindow();
}

void CBmpButton::ShowBitmap (BOOL show_or_hide)
{
	m_paintflag = !show_or_hide;
	InvalidateRect (NULL);
	UpdateWindow();
}

void CBmpButton::Create (CWnd *parent, int id)
{
	CButton::Create ("?", WS_VISIBLE | WS_CHILD, 
							  CRect(0,0,0,0), 
							  parent, id);
}   

BEGIN_MESSAGE_MAP(CBmpButton, CButton)
	//{{AFX_MSG_MAP(CBmpButton)
	ON_WM_PAINT()
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONDBLCLK()
	ON_WM_SETCURSOR()
	ON_WM_LBUTTONUP()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CBmpButton message handlers

void CBmpButton::OnPaint() 
{
	if (m_paintflag)
		CButton::OnPaint();
	else
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
}


void CBmpButton::OnLButtonDown(UINT nFlags, CPoint point) 
{
	if (m_paintflag)
	{
		m_hcursor = AfxGetApp()->LoadCursor (HAND_UP);
		::SetCursor (m_hcursor);
		CButton::OnLButtonDown(nFlags, point);
	}
}

void CBmpButton::OnLButtonDblClk(UINT nFlags, CPoint point) 
{
}

BOOL CBmpButton::OnSetCursor(CWnd* pWnd, UINT nHitTest, UINT message) 
{
	::SetCursor (m_hcursor);
	return TRUE;
}


void CBmpButton::OnLButtonUp(UINT nFlags, CPoint point) 
{
	m_hcursor = AfxGetApp()->LoadCursor (HAND_DOWN);
	::SetCursor (m_hcursor);
	CButton::OnLButtonUp(nFlags, point);
}
