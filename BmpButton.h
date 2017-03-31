// BmpButton.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CBmpButton window

class CBmpButton : public CButton
{
// Construction
public:
	CBmpButton();

// Attributes
public:

// Operations
public:
	void Create (CWnd *parent, int id);   

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CBmpButton)
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CBmpButton();
	BOOL m_paintflag;
	void ShowBitmap (BOOL show_or_hide);
	void SetBitmap (LPCTSTR bmpid);
	CBitmap m_bitmap;
	CString m_bmpid;
	HCURSOR m_hcursor;

	// Generated message map functions
protected:
	//{{AFX_MSG(CBmpButton)
	afx_msg void OnPaint();
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonDblClk(UINT nFlags, CPoint point);
	afx_msg BOOL OnSetCursor(CWnd* pWnd, UINT nHitTest, UINT message);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	//}}AFX_MSG

	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////
