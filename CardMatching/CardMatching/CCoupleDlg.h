#pragma once
#include "afxdialogex.h"
#include "CardMatchingDlg.h"


// CCoupleDlg 대화 상자

class CCoupleDlg : public CDialogEx
{
	DECLARE_DYNAMIC(CCoupleDlg)

public:
	CCoupleDlg(CWnd* pParent = nullptr);   // 표준 생성자입니다.
	CCardMatchingDlg* m_cardDlg;

	CCoupleDlg(CCardMatchingDlg* pDlg) : m_cardDlg(pDlg) {}
	virtual ~CCoupleDlg();

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_COUPLE_DIALOG };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 지원입니다.
	
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnDestroy();
};
