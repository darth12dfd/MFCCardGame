
// CardMatching.cpp: 애플리케이션에 대한 클래스 동작을 정의합니다.
//

#include "pch.h"
#include "framework.h"
#include "CardMatching.h"
#include "CardMatchingDlg.h"
#include "CStartDlg.h"


#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCardMatchingApp

BEGIN_MESSAGE_MAP(CCardMatchingApp, CWinApp)
	ON_COMMAND(ID_HELP, &CWinApp::OnHelp)
END_MESSAGE_MAP()


// CCardMatchingApp 생성

CCardMatchingApp::CCardMatchingApp()
{
	// TODO: 여기에 생성 코드를 추가합니다.
	// InitInstance에 모든 중요한 초기화 작업을 배치합니다.
}


// 유일한 CCardMatchingApp 개체입니다.

CCardMatchingApp theApp;


// CCardMatchingApp 초기화

BOOL CCardMatchingApp::InitInstance()
{
	CWinApp::InitInstance();


	// 대화 상자에 셸 트리 뷰 또는
	// 셸 목록 뷰 컨트롤이 포함되어 있는 경우 셸 관리자를 만듭니다.

	// MFC 컨트롤의 테마를 사용하기 위해 "Windows 원형" 비주얼 관리자 활성화

	// 표준 초기화
	// 이들 기능을 사용하지 않고 최종 실행 파일의 크기를 줄이려면
	// 아래에서 필요 없는 특정 초기화
	// 루틴을 제거해야 합니다.
	// 해당 설정이 저장된 레지스트리 키를 변경하십시오.
	// TODO: 이 문자열을 회사 또는 조직의 이름과 같은
	// 적절한 내용으로 수정해야 합니다.


	CStartDlg start_dlg;
	m_pMainWnd = &start_dlg;
	start_dlg.DoModal();
	

	//CCardMatchingDlg dlg;
	//m_pMainWnd = &dlg;
	//dlg.DoModal();



	// 대화 상자가 닫혔으므로 응용 프로그램의 메시지 펌프를 시작하지 않고 응용 프로그램을 끝낼 수 있도록 FALSE를
	// 반환합니다.
	return FALSE;
}

