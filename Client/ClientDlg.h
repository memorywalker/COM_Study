
// ClientDlg.h : 头文件
//
#include "Sink.h"
#pragma once


// CClientDlg 对话框
class CClientDlg : public CDialogEx
{
// 构造
public:
	CClientDlg(CWnd* pParent = NULL);	// 标准构造函数

// 对话框数据
	enum { IDD = IDD_CLIENT_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedBtnFind();
private:
	// 组件接口指针
	//LoveLib::IPeoplePtr m_comObj;
	// 连接的 cookie
	//DWORD m_dwCookie;
	// 连接点指针
	//CComQIPtr< IConnectionPoint > m_spCP;
	// 接收器对象
	//CSink m_sink;
	//CComObject<CSink> *m_sink;
};
