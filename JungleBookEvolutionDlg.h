// JungleBookEvolutionDlg.h : header file
//

#if !defined(AFX_JUNGLEBOOKEVOLUTIONDLG_H__9CFB1A87_68F3_4F64_BC25_4FEA7E0417A8__INCLUDED_)
#define AFX_JUNGLEBOOKEVOLUTIONDLG_H__9CFB1A87_68F3_4F64_BC25_4FEA7E0417A8__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CJungleBookEvolutionDlg dialog

class CJungleBookEvolutionDlg : public CDialog
{
// Construction
public:
	CJungleBookEvolutionDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CJungleBookEvolutionDlg)
	enum { IDD = IDD_JUNGLEBOOKEVOLUTION_DIALOG };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CJungleBookEvolutionDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CJungleBookEvolutionDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_JUNGLEBOOKEVOLUTIONDLG_H__9CFB1A87_68F3_4F64_BC25_4FEA7E0417A8__INCLUDED_)
