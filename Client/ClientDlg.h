
// ClientDlg.h : ͷ�ļ�
//
#include "Sink.h"
#pragma once


// CClientDlg �Ի���
class CClientDlg : public CDialogEx
{
// ����
public:
	CClientDlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
	enum { IDD = IDD_CLIENT_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��


// ʵ��
protected:
	HICON m_hIcon;

	// ���ɵ���Ϣӳ�亯��
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedBtnFind();
private:
	// ����ӿ�ָ��
	//LoveLib::IPeoplePtr m_comObj;
	// ���ӵ� cookie
	//DWORD m_dwCookie;
	// ���ӵ�ָ��
	//CComQIPtr< IConnectionPoint > m_spCP;
	// ����������
	//CSink m_sink;
	//CComObject<CSink> *m_sink;
};
