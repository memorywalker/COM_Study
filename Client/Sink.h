#pragma once
#include <atlcom.h>

class ATL_NO_VTABLE CSink : //�Ż����ṹ
	public CComObjectRoot,//�̳�CComObjectRoot�������Լ�ʵ��IUnknown�ļ����麯��
	public LoveLib::ICallback  //ʵ���¼��ص��ӿ�
{
public:

	BEGIN_COM_MAP( CSink )
		COM_INTERFACE_ENTRY( LoveLib::ICallback )  //���ӳ��
	END_COM_MAP()

	CSink(void);
	~CSink(void);

	// IUnknown
	//STDMETHOD(QueryInterface)(const struct _GUID &iid,void ** ppv);
	//ULONG __stdcall AddRef(void);
	//ULONG __stdcall Release(void);
	STDMETHOD(raw_OnFindGirl)(LONG nums); //ʵ�ֵĻص���������tlh�ļ�����������MIDL�������tlb�ļ�����
};

