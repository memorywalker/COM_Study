#pragma once
#include <atlcom.h>

class ATL_NO_VTABLE CSink : //优化虚表结构
	public CComObjectRoot,//继承CComObjectRoot，不用自己实现IUnknown的几个虚函数
	public LoveLib::ICallback  //实现事件回调接口
{
public:

	BEGIN_COM_MAP( CSink )
		COM_INTERFACE_ENTRY( LoveLib::ICallback )  //相关映射
	END_COM_MAP()

	CSink(void);
	~CSink(void);

	// IUnknown
	//STDMETHOD(QueryInterface)(const struct _GUID &iid,void ** ppv);
	//ULONG __stdcall AddRef(void);
	//ULONG __stdcall Release(void);
	STDMETHOD(raw_OnFindGirl)(LONG nums); //实现的回调函数，在tlh文件中声明，有MIDL程序编译tlb文件产生
};

