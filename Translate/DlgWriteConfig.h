#pragma once


// CDlgWriteConfig dialog

class CDlgWriteConfig : public CDialogEx
{
	DECLARE_DYNAMIC(CDlgWriteConfig)

public:
	CDlgWriteConfig(CWnd* pParent = nullptr);   // standard constructor
	virtual ~CDlgWriteConfig();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_WRITE_CONFIG};
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnEnChangeMfceditbrowse1();
	afx_msg void OnBnClickedButton1();
	CMFCEditBrowseCtrl m_ed_txtfile;
	afx_msg void OnEnChangeEdit1();
	afx_msg void OnBnClickedButton2();
	afx_msg void OnEnChangeMfceditbrowse2();
};
