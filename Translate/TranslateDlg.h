
// TranslateDlg.h : header file
//

#pragma once


// CTranslateDlg dialog
class CTranslateDlg : public CDialogEx
{
	// Construction
public:
	CTranslateDlg(CWnd* pParent = nullptr);	// standard constructor

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_TRANSLATE_DIALOG };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support


// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	virtual BOOL OnInitDialog();
	void IncorectCount(int *count, bool flag);
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	CEdit m_edit_from;
	CEdit m_edit_to;
	CEdit m_edit_original;
	CEdit m_edit_translation;

	
	int m_count_all;

	int m_index;
	int m_incorrect_count;

	bool arrCorect[theApp.COL - 1] = { false, false, false, false, false, false, false, false, false, false };

	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedCheck1();
	CEdit m_edit_correct;
	CButton m_check_spelling;
	CEdit m_edit_count;
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedButton3();
	afx_msg void OnClose();
	afx_msg void OnWriteaconfigfileWriteaconfigfile();
};
