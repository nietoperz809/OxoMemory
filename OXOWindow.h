// OXOWindow.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// OXOWindow frame

class OXOWindow : public CMDIChildWnd
{
	DECLARE_DYNCREATE(OXOWindow)
protected:

// Attributes
public:
	OXOButton m_buttons[9];
// Operations
public:
	OXOWindow();           // protected constructor used by dynamic creation
	void Mark (CString bmpid, BOOL player_or_computer);
	CString FindOxos();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(OXOWindow)
	//}}AFX_VIRTUAL

// Implementation
protected:
	virtual ~OXOWindow();

	// Generated message map functions
	//{{AFX_MSG(OXOWindow)
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg void OnWindowPosChanged(WINDOWPOS FAR* lpwndpos);
	afx_msg void OnClose();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////
