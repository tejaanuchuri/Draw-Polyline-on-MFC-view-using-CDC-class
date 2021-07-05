
// Draw Polyline on MFC view using CDC class.h : main header file for the Draw Polyline on MFC view using CDC class application
//
#pragma once

#ifndef __AFXWIN_H__
	#error "include 'pch.h' before including this file for PCH"
#endif

#include "resource.h"       // main symbols


// CDrawPolylineonMFCviewusingCDCclassApp:
// See Draw Polyline on MFC view using CDC class.cpp for the implementation of this class
//

class CDrawPolylineonMFCviewusingCDCclassApp : public CWinAppEx
{
public:
	CDrawPolylineonMFCviewusingCDCclassApp() noexcept;


// Overrides
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// Implementation
	BOOL  m_bHiColorIcons;

	virtual void PreLoadState();
	virtual void LoadCustomState();
	virtual void SaveCustomState();

	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CDrawPolylineonMFCviewusingCDCclassApp theApp;
