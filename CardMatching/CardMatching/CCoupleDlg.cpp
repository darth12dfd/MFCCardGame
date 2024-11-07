// CCoupleDlg.cpp: 구현 파일
//

#include "pch.h"
#include "CardMatching.h"
#include "afxdialogex.h"
#include "CCoupleDlg.h"

#include "CStartDlg.h"


// CCoupleDlg 대화 상자

IMPLEMENT_DYNAMIC(CCoupleDlg, CDialogEx)

CCoupleDlg::CCoupleDlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_COUPLE_DIALOG, pParent)
{

}

CCoupleDlg::~CCoupleDlg()
{
}

void CCoupleDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CCoupleDlg, CDialogEx)
	ON_WM_DESTROY()
END_MESSAGE_MAP()


// CCoupleDlg 메시지 처리기


void CCoupleDlg::OnDestroy()
{
	CDialogEx::OnDestroy();

	// TODO: 여기에 메시지 처리기 코드를 추가합니다.
	//m_cardDlg->DestroyWindow();
}
