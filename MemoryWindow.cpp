// MemoryWindow.cpp : implementation file
//

#include "stdafx.h"
#include "OxoMemory.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

// Hier endet das Pogramm
_inline void EndOfGame (const char* str)
{
	CString cs(str);
	cs += "\n\n--> Try again?";
	if (MessageBox (NULL, cs, "Game Over!", MB_YESNO | MB_ICONSTOP) == IDYES)
		WinExec (AfxGetAppName(), SW_SHOW);

	::ExitProcess (0);
	//SendMessage (AfxGetMainWnd()->GetSafeHwnd(), WM_CLOSE, 0, 0);
}


/////////////////////////////////////////////////////////////////////////////
// MemoryWindow

IMPLEMENT_DYNCREATE(MemoryWindow, CMDIChildWnd)

void MemoryWindow::Message (LPCTSTR str, BOOL mode)
{
	CMainFrame *cmf = (CMainFrame*)GetMDIFrame();
	cmf->m_statusbar.SetPaneText (0, str);
	cmf->m_statusbar.InvalidateRect (NULL);
	cmf->m_statusbar.UpdateWindow();
	if (!mode)
		Sleep (500);
}

// Gedaechtnis des Composters auffrischen
void MemoryWindow::LogUserCards (CBmpButton *b1, CBmpButton *b2)
{
	m_cmemory[0] = m_cmemory[2];
	m_cmemory[1] = m_cmemory[3];
	m_cmemory[2] = m_cmemory[4];
	m_cmemory[3] = m_cmemory[5];
	m_cmemory[4] = m_cmemory[6];
	m_cmemory[5] = m_cmemory[7];
	m_cmemory[6] = b1;
	m_cmemory[7] = b2;
}

// Der Composter zieht jetzt
void MemoryWindow::ComposterZug()
{
	int s;
	CBmpButton *card1 = NULL;
	CBmpButton *card2 = NULL;

	// Gedaechtnis nach passenden Kombinationen absuchen
	for (s=0; s<8; s++)
	{
		if (!m_cmemory[s])
			continue;
		if (!m_cmemory[s]->IsWindowVisible())
			continue;
		int i;
		for (i=s; i<8; i++)
		{
			if (!m_cmemory[i])
				continue;
			if (!m_cmemory[i]->IsWindowVisible())
				continue;
			if (m_cmemory[s]->m_bmpid == m_cmemory[i]->m_bmpid &&
				m_cmemory[s] != m_cmemory[i])
			{
				card1 = m_cmemory[s];
				card2 = m_cmemory[i];
				break;
			}
		}
	}
	
	// Nix gefunden ... dann anders versuchen
	if (!card1)
	{
		// Zufallszug erste Karte
		do card1 = &m_buttons[rand()%30];
			while (!card1->IsWindowVisible());

		// Passende zweite Karte im Gedaechtnis suchen
		for (s=0; s<8; s++)
		{
			if (!m_cmemory[s])
				continue;
			if (card1->m_bmpid == m_cmemory[s]->m_bmpid && 
				card1 != m_cmemory[s] && m_cmemory[s]->IsWindowVisible())
			{
				card2 = m_cmemory[s];
				break;
			}
		}
	
		// ....Andernfalls Karte 2 zufaellig auswaehlen
		if (!card2)
		{
			do card2 = &m_buttons[rand()%30];
				while (card2 == card1 || !card2->IsWindowVisible());
		}
	}
	
	// Karten anzeigen
	// Klick....
	PlaySound (MAKEINTRESOURCE(IDR_WAVE_DRIP), 
				AfxGetInstanceHandle(), 
				SND_RESOURCE);  
	card1->ShowBitmap (TRUE);
	Message ("Compis first card....");
	// Klick....
	PlaySound (MAKEINTRESOURCE(IDR_WAVE_DRIP), 
				AfxGetInstanceHandle(), 
				SND_RESOURCE);  
	card2->ShowBitmap (TRUE);
	Message ("....and compis second one....");

	// Vergleichen....
	if (card1->m_bmpid == card2->m_bmpid)
	{
		PlaySound (MAKEINTRESOURCE(IDR_WAVE_CHA), 
					AfxGetInstanceHandle(), 
					SND_RESOURCE | SND_ASYNC);  
		switch (rand()%3)
		{
			case 0:
			Message ("HA....");
			break;
			
			case 1:
			Message ("YES!");
			break;

			case 2:
			Message ("- STRIKE ! -");
			break;
		}
		m_composter_hits++;
		((COxoMemoryApp*)AfxGetApp())->m_oxowin->Mark (card1->m_bmpid, FALSE);
		if (((COxoMemoryApp*)AfxGetApp())->m_oxowin->FindOxos() == "O")
			EndOfGame ("Composter-OXO !\nYou lose!!!");
		card1->ShowWindow (SW_HIDE);
		card2->ShowWindow (SW_HIDE);
		// Ende !!!
		if ((m_composter_hits + m_user_hits) == 15)
			return;
		if (rand()%10 > 8)
			Message ("I'm genius, right?");
		Message ("Compi has a second chance...");
		ComposterZug();
	}
	else
	{
		PlaySound (MAKEINTRESOURCE(IDR_WAVE_NO), 
					AfxGetInstanceHandle(), 
					SND_RESOURCE | SND_ASYNC);  
		switch (rand()%3)
		{
			case 0:
			Message ("....SHIT....");
			break;
			
			case 1:
			Message ("Umhhh?....");
			break;

			case 2:
			Message ("Damn...!");
			break;
		}
		card1->ShowBitmap (FALSE);
		card2->ShowBitmap (FALSE);
		LogUserCards (card1, card2);
	}
}

MemoryWindow::MemoryWindow()
{
	ZeroMemory (m_cmemory, sizeof (m_cmemory));
	m_composter_hits = 0;
	m_user_hits = 0;
}

MemoryWindow::~MemoryWindow()
{
}


BEGIN_MESSAGE_MAP(MemoryWindow, CMDIChildWnd)
	//{{AFX_MSG_MAP(MemoryWindow)
	ON_WM_CLOSE()
	ON_WM_CREATE()
	ON_WM_WINDOWPOSCHANGED()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// MemoryWindow message handlers

void MemoryWindow::OnClose() 
{
	ShowWindow (SW_MINIMIZE);
}

int MemoryWindow::OnCreate(LPCREATESTRUCT lpCreateStruct) 
{
	if (CMDIChildWnd::OnCreate(lpCreateStruct) == -1)
		return -1;

	int control_array[15];
	ZeroMemory (control_array, sizeof (control_array));

	int s;
	int rval;
	CString cs;
	for (s=0; s<30; s++)
	{
		m_buttons[s].Create (this, s+100);
		do	rval = rand()%15;
			while (control_array[rval] > 1);
		cs.Format ("IDB%d", rval);
		m_buttons[s].SetBitmap (cs);
		control_array[rval]++;
	}

	PlaySound (MAKEINTRESOURCE(IDR_WAVE_5TH), 
				AfxGetInstanceHandle(), 
				SND_RESOURCE | SND_ASYNC);  

	Message ("It's your turn !");

	return 0;
}

void MemoryWindow::OnWindowPosChanged(WINDOWPOS FAR* lpwndpos) 
{
	RECT rect;
	GetClientRect (&rect);

	int offsx = rect.right/6;
	int offsy = rect.bottom/5;
	int width = offsx-3;
	int height = offsy-3;

	int a,b;
	for (a=0; a<6; a++)
		for (b=0; b<5; b++)
			m_buttons[a*5+b].MoveWindow (3+a*offsx, 3+b*offsy, width, height);		

	CMDIChildWnd::OnWindowPosChanged(lpwndpos);
}

BOOL MemoryWindow::OnCommand(WPARAM wParam, LPARAM lParam) 
{
	static int click_count = 0;
	static CBmpButton* last_button;

	if (lParam)
	{
		// Klick....
		PlaySound (MAKEINTRESOURCE(IDR_WAVE_DRIP), 
					AfxGetInstanceHandle(), 
					SND_RESOURCE);  

		// Erste Karte geklickt
		if (click_count == 0)
		{
			last_button = (CBmpButton*)GetDlgItem (LOWORD(wParam));	
			last_button->ShowBitmap (TRUE);
			Message ("....Click on another card", TRUE);
		}

		// Zweite Karte....
		if (click_count == 1)
		{
			CBmpButton *button = (CBmpButton*)GetDlgItem (LOWORD(wParam));
			button->ShowBitmap (TRUE);
			if (button->m_bmpid == last_button->m_bmpid && last_button != button)
			{
				PlaySound (MAKEINTRESOURCE(IDR_WAVE_APPLAUS), 
							AfxGetInstanceHandle(), 
							SND_RESOURCE | SND_ASYNC);  
				switch (rand()%3)
				{
					case 0:
					Message ("Lucky hit!");
					break;
			
					case 1:
					Message ("I know that you make it!");
					break;

					case 2:
					Message ("You're a killer!");
					break;
				}
				m_user_hits++;
				((COxoMemoryApp*)AfxGetApp())->m_oxowin->Mark (button->m_bmpid, TRUE);
				if (((COxoMemoryApp*)AfxGetApp())->m_oxowin->FindOxos() == "X")
					EndOfGame ("Gewinner !!!\nDu hast ein OXO!");
				last_button->ShowWindow (SW_HIDE);
				button->ShowWindow (SW_HIDE);
				// Abbruch
				if ((m_composter_hits + m_user_hits) == 15)
				{
					CString cs ("Game over but without OXO...\n");
					CString csv;
					csv.Format ("You got %d OXOs.\n", m_user_hits);
					cs += csv;
					csv.Format ("Compi found %d ones.\n", m_composter_hits);
					cs += csv;
					if (m_user_hits > m_composter_hits)
						cs += "YOU WIN !!!";
					else
						cs += "You lose...";
					EndOfGame ((LPCTSTR)cs);
				}
				Message ("It's your move....");
				Message ("Click on a card....");
			}
			else
			{
				PlaySound (MAKEINTRESOURCE(IDR_WAVE_OHOH), 
							AfxGetInstanceHandle(), 
							SND_RESOURCE | SND_ASYNC);  
				switch (rand()%3)
				{
					case 0:
					Message ("Sorry....");
					break;
			
					case 1:
					Message ("You missed the goal....");
					break;

					case 2:
					Message ("That won't work!");
					break;
				}
				LogUserCards (button, last_button);
				last_button->ShowBitmap (FALSE);
				button->ShowBitmap (FALSE);
				Message ("....Now it's compis time....");
				
				AfxGetMainWnd()->BeginWaitCursor();
				ComposterZug();
				for (;;)
				{
					MSG msg; 
					BOOL res = PeekMessage (&msg, 0, WM_MOUSEFIRST, WM_MOUSELAST, PM_REMOVE);
					if (res == FALSE)
						break;
				}
				AfxGetMainWnd()->EndWaitCursor();

				// Abbruch
				if ((m_composter_hits + m_user_hits) == 15)
					EndOfGame ("GAME OVER");
				Message ("It's your turn!", TRUE);
			}
		}
	
		click_count++;
		if (click_count == 2)
			click_count = 0;
	}
	return CMDIChildWnd::OnCommand(wParam, lParam);
}

