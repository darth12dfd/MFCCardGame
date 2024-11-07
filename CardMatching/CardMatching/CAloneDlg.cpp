// CAloneDlg.cpp: 구현 파일
//

#include "pch.h"
#include "CardMatching.h"
#include "afxdialogex.h"
#include "CAloneDlg.h"


// CAloneDlg 대화 상자

IMPLEMENT_DYNAMIC(CAloneDlg, CDialogEx)

CAloneDlg::CAloneDlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_ALONE_DIALOG, pParent)
{

}

CAloneDlg::~CAloneDlg()
{
}

void CAloneDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CAloneDlg, CDialogEx)
END_MESSAGE_MAP()


// CAloneDlg 메시지 처리기
