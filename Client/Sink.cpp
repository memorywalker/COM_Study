#include "StdAfx.h"
#include "Sink.h"


CSink::CSink(void)
{
}


CSink::~CSink(void)
{
}


//// STDMETHODIMP 是宏，等价于 long __stdcall
//STDMETHODIMP CSink::QueryInterface(const struct _GUID &iid,void ** ppv)
//{
//	*ppv=this;
//	return S_OK;
//}
//
//ULONG __stdcall CSink::AddRef(void)
//{	return 1;	}	// 做个假的就可以，因为反正这个对象在程序结束前是不会退出的
//
//ULONG __stdcall CSink::Release(void)
//{	return 0;	}	// 做个假的就可以，因为反正这个对象在程序结束前是不会退出的

STDMETHODIMP CSink::raw_OnFindGirl(LONG nums)
{
	CString str=NULL;
	str.Format( _T("You Find %d girls(Plus 1)."), nums+1 );
	AfxMessageBox(str);
	return S_OK;
}