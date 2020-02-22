// DlgWriteConfig.cpp : implementation file
//

#include "pch.h"
#include "Translate.h"
#include "DlgWriteConfig.h"
#include "afxdialogex.h"


// CDlgWriteConfig dialog

IMPLEMENT_DYNAMIC(CDlgWriteConfig, CDialogEx)

CDlgWriteConfig::CDlgWriteConfig(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_WRITE_CONFIG, pParent)
{

}

CDlgWriteConfig::~CDlgWriteConfig()
{
}

void CDlgWriteConfig::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_MFCEDITBROWSE1, m_ed_txtfile);
}


BEGIN_MESSAGE_MAP(CDlgWriteConfig, CDialogEx)
	ON_EN_CHANGE(IDC_MFCEDITBROWSE1, &CDlgWriteConfig::OnEnChangeMfceditbrowse1)
	ON_BN_CLICKED(IDC_BUTTON1, &CDlgWriteConfig::OnBnClickedButton1)
	ON_EN_CHANGE(IDC_EDIT1, &CDlgWriteConfig::OnEnChangeEdit1)
	ON_BN_CLICKED(IDC_BUTTON2, &CDlgWriteConfig::OnBnClickedButton2)
	ON_EN_CHANGE(IDC_MFCEDITBROWSE2, &CDlgWriteConfig::OnEnChangeMfceditbrowse2)
END_MESSAGE_MAP()


// CDlgWriteConfig message handlers


void CDlgWriteConfig::OnEnChangeMfceditbrowse1()
{
	// TODO:  If this is a RICHEDIT control, the control will not
	// send this notification unless you override the CDialogEx::OnInitDialog()
	// function and call CRichEditCtrl().SetEventMask()
	// with the ENM_CHANGE flag ORed into the mask.

	// TODO:  Add your control notification handler code here
}


void CDlgWriteConfig::OnBnClickedButton1()
{
	// TODO: Add your control notification handler code here
	for (int y = 0; y <= 11; y++)
	{
		theApp.arrWords[1][y] = "";
		theApp.arrWords[0][y] = "";
	}
	CString fil;
	m_ed_txtfile.GetWindowText(fil); 
	if(fil==""){
		MessageBox(_T("Please select a file"), _T("NOT NICE"));
	}else{
		MessageBox(_T("Your file is ready to go"), _T("NICE")); 
	}

	theApp.m_csConfig = fil;
	
	
	
}


void CDlgWriteConfig::OnEnChangeEdit1()
{
	// TODO:  If this is a RICHEDIT control, the control will not
	// send this notification unless you override the CDialogEx::OnInitDialog()
	// function and call CRichEditCtrl().SetEventMask()
	// with the ENM_CHANGE flag ORed into the mask.

	// TODO:  Add your control notification handler code here
}


void CDlgWriteConfig::OnBnClickedButton2()
{
	// TODO: Add your control notification handler code here
}


void CDlgWriteConfig::OnEnChangeMfceditbrowse2()
{
	// TODO:  If this is a RICHEDIT control, the control will not
	// send this notification unless you override the CDialogEx::OnInitDialog()
	// function and call CRichEditCtrl().SetEventMask()
	// with the ENM_CHANGE flag ORed into the mask.

	// TODO:  Add your control notification handler code here
}
