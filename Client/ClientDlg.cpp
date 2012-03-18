
// ClientDlg.cpp : 实现文件
//

#include "stdafx.h"
#include "Client.h"
#include "ClientDlg.h"
#include "afxdialogex.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CClientDlg 对话框




CClientDlg::CClientDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(CClientDlg::IDD, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CClientDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CClientDlg, CDialogEx)
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_BTN_FIND, &CClientDlg::OnBnClickedBtnFind)
END_MESSAGE_MAP()


// CClientDlg 消息处理程序

BOOL CClientDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// 设置此对话框的图标。当应用程序主窗口不是对话框时，框架将自动
	//  执行此操作
	SetIcon(m_hIcon, TRUE);			// 设置大图标
	SetIcon(m_hIcon, FALSE);		// 设置小图标

	// TODO: 在此添加额外的初始化代码
	AfxOleInit();	// 初始化COM

	HRESULT hr = m_comObj.CreateInstance(__uuidof(People));
	if( FAILED( hr ) )
	{
		AfxMessageBox( _T("没有注册还是没有初始化？") );
		CDialog::OnCancel();
	}

	return TRUE;  // 除非将焦点设置到控件，否则返回 TRUE
}

// 如果向对话框添加最小化按钮，则需要下面的代码
//  来绘制该图标。对于使用文档/视图模型的 MFC 应用程序，
//  这将由框架自动完成。

void CClientDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // 用于绘制的设备上下文

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// 使图标在工作区矩形中居中
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// 绘制图标
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

//当用户拖动最小化窗口时系统调用此函数取得光标
//显示。
HCURSOR CClientDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}



void CClientDlg::OnBnClickedBtnFind()
{
	// TODO: 在此添加控件通知处理程序代码
	// 得到连接点容器接口
	CComQIPtr<IConnectionPointContainer> spContainer( m_comObj );
	if( !spContainer )
	{
		AfxMessageBox( _T("组件没有提供连接点功能") );
		return;
	}
	// 得到连接点接口
	spContainer->FindConnectionPoint(__uuidof(ICallback), &m_spCP );

	if( !m_spCP )
	{
		AfxMessageBox( _T("没有找到连接点接口") );
		return;
	}

	//	CComPtr<IUnknown> spUnk;		//得到接受器接口
	//	m_sink.QueryInterface( IID_IUnknown, (LPVOID *)&spUnk );	//m_sink是接受器对象
	//	hr=spCP->Advise( pUnk, &m_dwCookie);		//连接，m_dwCookie 是接受器cookie

	// 上面这段程序，其实可以简化为：
	HRESULT hr = m_spCP->Advise( &m_sink, &m_dwCookie );
	if( FAILED( hr ) )
	{
		AfxMessageBox( _T("连接失败") );
	}
	else
	{
		AfxMessageBox( _T("已经连接成功") );
	}

	//调用接口的代码
	m_comObj->GetGirl(5);

	if( m_spCP )
	{
		m_spCP->Unadvise( m_dwCookie );
		m_spCP.Release();
	}
	AfxMessageBox( _T("已经断开连接") );

	//m_comObj.Release();
}
