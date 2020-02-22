
// Translate.h : main header file for the PROJECT_NAME application
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'pch.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CTranslateApp:
// See Translate.cpp for the implementation of this class
//

class CTranslateApp : public CWinApp
{
public:
	CTranslateApp();
	

// Overrides
public:
	virtual BOOL InitInstance();
	const static int COL = 11;
	const static int ROW = 2;
	CString arrWords[ROW][COL] = { { _T("Български"),_T("куче"),_T("котка")_T("жираф"),_T("лъв"),_T("крава"),_T("мравка"),_T("слон"),_T("косатка"),_T("хамстер"), _T("охлюв")},
		{ _T("English"), _T("dog"), _T("cat"), _T("giraffe"), _T("lion"),_T("cow"), _T("ant"), _T("elephant"),_T("killer whale"),_T("hamster"), _T("snail") } };

	CString m_csConfig = _T("Config.txt");
	

// Implementation

	DECLARE_MESSAGE_MAP()
};

extern CTranslateApp theApp;
