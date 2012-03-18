// People.h : CPeople ������

#pragma once
#include "resource.h"       // ������



#include "Love_i.h"
#include "_IPeopleEvents_CP.h"
#include "ICallback_CP.H"



#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Windows CE ƽ̨(�粻�ṩ��ȫ DCOM ֧�ֵ� Windows Mobile ƽ̨)���޷���ȷ֧�ֵ��߳� COM ���󡣶��� _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA ��ǿ�� ATL ֧�ִ������߳� COM ����ʵ�ֲ�����ʹ���䵥�߳� COM ����ʵ�֡�rgs �ļ��е��߳�ģ���ѱ�����Ϊ��Free����ԭ���Ǹ�ģ���Ƿ� DCOM Windows CE ƽ̨֧�ֵ�Ψһ�߳�ģ�͡�"
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
