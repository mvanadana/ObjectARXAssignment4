// Assignment4.h : main header file for the Assignment4 DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'pch.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols
#include <Windows.h>
#include<arxHeaders.h>
#include <dbents.h>

// CAssignment4App
// See Assignment4.cpp for the implementation of this class
//

class CAssignment4App : public CWinApp
{
public:
	CAssignment4App();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
