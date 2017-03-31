// OXOButton.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// OXOButton window

class OXOButton : public CButton
{
// Construction
public:
	OXOButton();

// Attributes
public:
   CBitmap m_bitmap;
   CString m_bmpid;

// Operations
public:
   void SetOXOBitmap (BOOL type);

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(OXOButton)
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~OXOButton();

	// Generated message map functions
protected:
	//{{AFX_MSG(OXOButton)
	afx_msg void OnPaint();
	//}}AFX_MSG

	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////
