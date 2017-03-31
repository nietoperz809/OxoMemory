// MemoryWindow.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// MemoryWindow frame

class MemoryWindow : public CMDIChildWnd
{
	DECLARE_DYNCREATE(MemoryWindow)
protected:

// Attributes
public:
	CBmpButton m_buttons[30];
	int m_composter_hits;
	int m_user_hits;
	CBmpButton *m_cmemory[8];	// Composters Gedächtnis

// Operations
public:
	MemoryWindow();           // protected constructor used by dynamic creation
	void Message (LPCTSTR str, BOOL mode = FALSE);
	void LogUserCards (CBmpButton *b1, CBmpButton *b2);
	void ComposterZug();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(MemoryWindow)
	protected:
	virtual BOOL OnCommand(WPARAM wParam, LPARAM lParam);
	//}}AFX_VIRTUAL

// Implementation
protected:
	virtual ~MemoryWindow();

	// Generated message map functions
	//{{AFX_MSG(MemoryWindow)
	afx_msg void OnClose();
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg void OnWindowPosChanged(WINDOWPOS FAR* lpwndpos);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
public:
};

/////////////////////////////////////////////////////////////////////////////
