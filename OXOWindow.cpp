// OXOWindow.cpp : implementation file
//

#include "stdafx.h"
#include "OxoMemory.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// OXOWindow

IMPLEMENT_DYNCREATE(OXOWindow, CMDIChildWnd)

OXOWindow::OXOWindow()
{
}

OXOWindow::~OXOWindow()
{
}

//	0 1 2
//	3 4	5
//	6 7 8
CString OXOWindow::FindOxos()
{
	if (m_buttons[0].m_bmpid == m_buttons[1].m_bmpid && 
		m_buttons[1].m_bmpid == m_buttons[2].m_bmpid)
			return m_buttons[0].m_bmpid;
	if (m_buttons[3].m_bmpid == m_buttons[4].m_bmpid && 
		m_buttons[4].m_bmpid == m_buttons[5].m_bmpid)
			return m_buttons[3].m_bmpid;
	if (m_buttons[6].m_bmpid == m_buttons[7].m_bmpid && 
		m_buttons[7].m_bmpid == m_buttons[8].m_bmpid)
			return m_buttons[6].m_bmpid;
	if (m_buttons[0].m_bmpid == m_buttons[3].m_bmpid && 
		m_buttons[3].m_bmpid == m_buttons[6].m_bmpid)
			return m_buttons[0].m_bmpid;
	if (m_buttons[1].m_bmpid == m_buttons[4].m_bmpid && 
		m_buttons[4].m_bmpid == m_buttons[7].m_bmpid)
			return m_buttons[1].m_bmpid;
	if (m_buttons[2].m_bmpid == m_buttons[5].m_bmpid && 
		m_buttons[5].m_bmpid == m_buttons[8].m_bmpid)
			return m_buttons[2].m_bmpid;
	if (m_buttons[0].m_bmpid == m_buttons[4].m_bmpid && 
		m_buttons[4].m_bmpid == m_buttons[8].m_bmpid)
			return m_buttons[0].m_bmpid;
	if (m_buttons[2].m_bmpid == m_buttons[4].m_bmpid && 
		m_buttons[4].m_bmpid == m_buttons[6].m_bmpid)
			return m_buttons[2].m_bmpid;
	return CString("NULL");
}

// Sucht das Bitmap und markiert es als getroffen...
void OXOWindow::Mark (CString bmpid, BOOL player_or_computer)
{
	int s;
	for (s=0; s<9; s++)
	{
		if (bmpid == m_buttons[s].m_bmpid)
		{
			m_buttons[s].SetOXOBitmap (player_or_computer);
			break;
		}	
	}
}


BEGIN_MESSAGE_MAP(OXOWindow, CMDIChildWnd)
	//{{AFX_MSG_MAP(OXOWindow)
	ON_WM_CREATE()
	ON_WM_WINDOWPOSCHANGED()
	ON_WM_CLOSE()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// OXOWindow message handlers

int OXOWindow::OnCreate(LPCREATESTRUCT lpCreateStruct) 
{
	if (CMDIChildWnd::OnCreate(lpCreateStruct) == -1)
		return -1;
	
	int s;
	CString cs;
	for (s=0; s<9; s++)
	{
		cs.Format ("%d", s);
		m_buttons[s].Create (cs, 
							WS_VISIBLE | WS_CHILD | WS_DISABLED, 
							CRect(0,0,0,0),
							this, 100+s); 
	}

	return 0;
}

void OXOWindow::OnWindowPosChanged (WINDOWPOS FAR* wpos) 
{
	RECT rect;
	GetClientRect (&rect);
	int xdiff = rect.right/3, ydiff = rect.bottom/3;
	int xd2 = xdiff+xdiff, yd2 = ydiff+ydiff;
	m_buttons[0].MoveWindow (0, 0, xdiff, ydiff);
	m_buttons[1].MoveWindow (xdiff, 0, xdiff, ydiff);
	m_buttons[2].MoveWindow (xd2, 0, xdiff, ydiff);
	m_buttons[3].MoveWindow (0, ydiff, xdiff, ydiff);
	m_buttons[4].MoveWindow (xdiff, ydiff, xdiff, ydiff);
	m_buttons[5].MoveWindow (xd2, ydiff, xdiff, ydiff);
	m_buttons[6].MoveWindow (0, yd2, xdiff, ydiff);
	m_buttons[7].MoveWindow (xdiff, yd2, xdiff, ydiff);
	m_buttons[8].MoveWindow (xd2, yd2, xdiff, ydiff);

	CMDIChildWnd::OnWindowPosChanged (wpos);
}


void OXOWindow::OnClose() 
{
	ShowWindow (SW_MINIMIZE);
}

