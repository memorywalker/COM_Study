
// ClientDlg.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "Client.h"
#include "ClientDlg.h"
#include "afxdialogex.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CClientDlg �Ի���




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


// CClientDlg ��Ϣ�������

BOOL CClientDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// ���ô˶Ի����ͼ�ꡣ��Ӧ�ó��������ڲ��ǶԻ���ʱ����ܽ��Զ�
	//  ִ�д˲���
	SetIcon(m_hIcon, TRUE);			// ���ô�ͼ��
	SetIcon(m_hIcon, FALSE);		// ����Сͼ��

	// TODO: �ڴ���Ӷ���ĳ�ʼ������
	AfxOleInit();	// ��ʼ��COM

	HRESULT hr = m_comObj.CreateInstance(__uuidof(People));
	if( FAILED( hr ) )
	{
		AfxMessageBox( _T("û��ע�ỹ��û�г�ʼ����") );
		CDialog::OnCancel();
	}

	return TRUE;  // ���ǽ��������õ��ؼ������򷵻� TRUE
}

// �����Ի��������С����ť������Ҫ����Ĵ���
//  �����Ƹ�ͼ�ꡣ����ʹ���ĵ�/��ͼģ�͵� MFC Ӧ�ó���
//  �⽫�ɿ���Զ���ɡ�

void CClientDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // ���ڻ��Ƶ��豸������

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// ʹͼ���ڹ����������о���
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// ����ͼ��
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

//���û��϶���С������ʱϵͳ���ô˺���ȡ�ù��
//��ʾ��
HCURSOR CClientDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}



void CClientDlg::OnBnClickedBtnFind()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	// �õ����ӵ������ӿ�
	CComQIPtr<IConnectionPointContainer> spContainer( m_comObj );
	if( !spContainer )
	{
		AfxMessageBox( _T("���û���ṩ���ӵ㹦��") );
		return;
	}
	// �õ����ӵ�ӿ�
	spContainer->FindConnectionPoint(__uuidof(ICallback), &m_spCP );

	if( !m_spCP )
	{
		AfxMessageBox( _T("û���ҵ����ӵ�ӿ�") );
		return;
	}

	//	CComPtr<IUnknown> spUnk;		//�õ��������ӿ�
	//	m_sink.QueryInterface( IID_IUnknown, (LPVOID *)&spUnk );	//m_sink�ǽ���������
	//	hr=spCP->Advise( pUnk, &m_dwCookie);		//���ӣ�m_dwCookie �ǽ�����cookie

	// ������γ�����ʵ���Լ�Ϊ��
	HRESULT hr = m_spCP->Advise( &m_sink, &m_dwCookie );
	if( FAILED( hr ) )
	{
		AfxMessageBox( _T("����ʧ��") );
	}
	else
	{
		AfxMessageBox( _T("�Ѿ����ӳɹ�") );
	}

	//���ýӿڵĴ���
	m_comObj->GetGirl(5);

	if( m_spCP )
	{
		m_spCP->Unadvise( m_dwCookie );
		m_spCP.Release();
	}
	AfxMessageBox( _T("�Ѿ��Ͽ�����") );

	//m_comObj.Release();
}
