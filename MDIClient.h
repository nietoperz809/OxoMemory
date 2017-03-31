// MDIClient.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CMDIClient window

class CMDIClient : public CWnd
{
// Construction
public:
	CMDIClient();

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMDIClient)
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CMDIClient();

	// Generated message map functions
protected:
	//{{AFX_MSG(CMDIClient)
	afx_msg BOOL OnEraseBkgnd(CDC* pDC);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////
