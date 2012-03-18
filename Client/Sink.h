#pragma once

class CSink :
	public ICallback
{
public:
	CSink(void);
	~CSink(void);

	// IUnknown
	STDMETHOD(QueryInterface)(const struct _GUID &iid,void ** ppv);
	ULONG __stdcall AddRef(void);
	ULONG __stdcall Release(void);
	STDMETHOD(raw_OnFindGirl)(LONG nums);
};

