#pragma once
#include<windows.h>
#include <windowsX.h>
#include <tchar.h>
#include"resource.h"

class ParentDlg
{
public:
	ParentDlg(void);
public:
	~ParentDlg(void);
	static BOOL CALLBACK DlgProc(HWND hWnd, UINT mes, WPARAM wp, LPARAM lp);
	static ParentDlg* ptr;
	void Close(HWND hwnd);
	void Command(HWND hwnd, int id, HWND hwndCtl, UINT codeNotify);
};