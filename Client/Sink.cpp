#include "StdAfx.h"
#include "Sink.h"


CSink::CSink(void)
{
}


CSink::~CSink(void)
{
}


//// STDMETHODIMP �Ǻ꣬�ȼ��� long __stdcall
//STDMETHODIMP CSink::QueryInterface(const struct _GUID &iid,void ** ppv)
//{
//	*ppv=this;
//	return S_OK;
//}
//
//ULONG __stdcall CSink::AddRef(void)
//{	return 1;	}	// �����ٵľͿ��ԣ���Ϊ������������ڳ������ǰ�ǲ����˳���
//
//ULONG __stdcall CSink::Release(void)
//{	return 0;	}	// �����ٵľͿ��ԣ���Ϊ������������ڳ������ǰ�ǲ����˳���

STDMETHODIMP CSink::raw_OnFindGirl(LONG nums)
{
	CString str=NULL;
	str.Format( _T("You Find %d girls(Plus 1)."), nums+1 );
	AfxMessageBox(str);
	return S_OK;
}