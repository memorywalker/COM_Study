// dllmain.h : 模块类的声明。

class CLoveModule : public ATL::CAtlDllModuleT< CLoveModule >
{
public :
	DECLARE_LIBID(LIBID_LoveLib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_LOVE, "{0BA4D40D-CC39-4F75-B09D-DE3815778D14}")
};

extern class CLoveModule _AtlModule;
