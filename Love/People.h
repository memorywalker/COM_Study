// People.h : CPeople 的声明

#pragma once
#include "resource.h"       // 主符号



#include "Love_i.h"
#include "_IPeopleEvents_CP.h"
#include "ICallback_CP.H"



#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Windows CE 平台(如不提供完全 DCOM 支持的 Windows Mobile 平台)上无法正确支持单线程 COM 对象。定义 _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA 可强制 ATL 支持创建单线程 COM 对象实现并允许使用其单线程 COM 对象实现。rgs 文件中的线程模型已被设置为“Free”，原因是该模型是非 DCOM Windows CE 平台支持的唯一线程模型。"
#endif

using namespace ATL;


// CPeople

class ATL_NO_VTABLE CPeople :
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CPeople, &CLSID_People>,
	public IConnectionPointContainerImpl<CPeople>,
	public CProxy_IPeopleEvents<CPeople>,
	public IPeople,
	public CProxyICallback<CPeople>
{
public:
	CPeople()
	{
	}

DECLARE_REGISTRY_RESOURCEID(IDR_PEOPLE)


BEGIN_COM_MAP(CPeople)
	COM_INTERFACE_ENTRY(IPeople)
	COM_INTERFACE_ENTRY(IConnectionPointContainer)
END_COM_MAP()

BEGIN_CONNECTION_POINT_MAP(CPeople)
	CONNECTION_POINT_ENTRY(__uuidof(ICallback))
	CONNECTION_POINT_ENTRY(__uuidof(_IPeopleEvents))
END_CONNECTION_POINT_MAP()


	DECLARE_PROTECT_FINAL_CONSTRUCT()

	HRESULT FinalConstruct()
	{
		return S_OK;
	}

	void FinalRelease()
	{
	}

public:



	STDMETHOD(GetGirl)(LONG nums);
};

OBJECT_ENTRY_AUTO(__uuidof(People), CPeople)
