#pragma once
#include "afxdialogex.h"


// CCoupleHardDlg 대화 상자

class CCoupleHardDlg : public CDialogEx
{
	DECLARE_DYNAMIC(CCoupleHardDlg)

public:
	CCoupleHardDlg(CWnd* pParent = nullptr);   // 표준 생성자입니다.
	virtual ~CCoupleHardDlg();

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_COUPLE_HARD_DIALOG };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 지원입니다.

	DECLARE_MESSAGE_MAP()
};
