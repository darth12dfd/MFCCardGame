#pragma once
#include "afxdialogex.h"


// CAloneHardDlg 대화 상자

class CAloneHardDlg : public CDialogEx
{
	DECLARE_DYNAMIC(CAloneHardDlg)

public:
	CAloneHardDlg(CWnd* pParent = nullptr);   // 표준 생성자입니다.
	virtual ~CAloneHardDlg();

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ALONE_HARD_DIALOG };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 지원입니다.

	DECLARE_MESSAGE_MAP()
};
