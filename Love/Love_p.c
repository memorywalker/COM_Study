

/* this ALWAYS GENERATED file contains the proxy stub code */


 /* File created by MIDL compiler version 7.00.0555 */
/* at Sun Mar 18 12:41:12 2012
 */
/* Compiler settings for Love.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 7.00.0555 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#if !defined(_M_IA64) && !defined(_M_AMD64)


#pragma warning( disable: 4049 )  /* more than 64k source lines */
#if _MSC_VER >= 1200
#pragma warning(push)
#endif

#pragma warning( disable: 4211 )  /* redefine extern to static */
#pragma warning( disable: 4232 )  /* dllimport identity*/
#pragma warning( disable: 4024 )  /* array to pointer mapping*/
#pragma warning( disable: 4152 )  /* function/data pointer conversion in expression */
#pragma warning( disable: 4100 ) /* unreferenced arguments in x86 call */

#pragma optimize("", off ) 

#define USE_STUBLESS_PROXY


/* verify that the <rpcproxy.h> version is high enough to compile this file*/
#ifndef __REDQ_RPCPROXY_H_VERSION__
#define __REQUIRED_RPCPROXY_H_VERSION__ 475
#endif


#include "rpcproxy.h"
#ifndef __RPCPROXY_H_VERSION__
#error this stub requires an updated version of <rpcproxy.h>
#endif /* __RPCPROXY_H_VERSION__ */


#include "Love_i.h"

#define TYPE_FORMAT_STRING_SIZE   3                                 
#define PROC_FORMAT_STRING_SIZE   37                                
#define EXPR_FORMAT_STRING_SIZE   1                                 
#define TRANSMIT_AS_TABLE_SIZE    0            
#define WIRE_MARSHAL_TABLE_SIZE   0            

typedef struct _Love_MIDL_TYPE_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ TYPE_FORMAT_STRING_SIZE ];
    } Love_MIDL_TYPE_FORMAT_STRING;

typedef struct _Love_MIDL_PROC_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ PROC_FORMAT_STRING_SIZE ];
    } Love_MIDL_PROC_FORMAT_STRING;

typedef struct _Love_MIDL_EXPR_FORMAT_STRING
    {
    long          Pad;
    unsigned char  Format[ EXPR_FORMAT_STRING_SIZE ];
    } Love_MIDL_EXPR_FORMAT_STRING;


static const RPC_SYNTAX_IDENTIFIER  _RpcTransferSyntax = 
{{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}};


extern const Love_MIDL_TYPE_FORMAT_STRING Love__MIDL_TypeFormatString;
extern const Love_MIDL_PROC_FORMAT_STRING Love__MIDL_ProcFormatString;
extern const Love_MIDL_EXPR_FORMAT_STRING Love__MIDL_ExprFormatString;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO ICallback_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO ICallback_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IPeople_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IPeople_ProxyInfo;



#if !defined(__RPC_WIN32__)
#error  Invalid build platform for this stub.
#endif

#if !(TARGET_IS_NT50_OR_LATER)
#error You need Windows 2000 or later to run this stub because it uses these features:
#error   /robust command line switch.
#error However, your C/C++ compilation flags indicate you intend to run this app on earlier systems.
#error This app will fail with the RPC_X_WRONG_STUB_VERSION error.
#endif


static const Love_MIDL_PROC_FORMAT_STRING Love__MIDL_ProcFormatString =
    {
        0,
        {

	/* Procedure GetGirl */


	/* Procedure OnFindGirl */

			0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/*  2 */	NdrFcLong( 0x0 ),	/* 0 */
/*  6 */	NdrFcShort( 0x3 ),	/* 3 */
/*  8 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10 */	NdrFcShort( 0x8 ),	/* 8 */
/* 12 */	NdrFcShort( 0x8 ),	/* 8 */
/* 14 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 16 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 18 */	NdrFcShort( 0x0 ),	/* 0 */
/* 20 */	NdrFcShort( 0x0 ),	/* 0 */
/* 22 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter nums */


	/* Parameter nums */

/* 24 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 26 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 28 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 30 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 32 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 34 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

			0x0
        }
    };

static const Love_MIDL_TYPE_FORMAT_STRING Love__MIDL_TypeFormatString =
    {
        0,
        {
			NdrFcShort( 0x0 ),	/* 0 */

			0x0
        }
    };


/* Object interface: IUnknown, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: ICallback, ver. 0.0,
   GUID={0x0041A9E5,0xC099,0x4fc5,{0x81,0x33,0x6A,0xF5,0xC5,0x52,0x09,0xD0}} */

#pragma code_seg(".orpc")
static const unsigned short ICallback_FormatStringOffsetTable[] =
    {
    0
    };

static const MIDL_STUBLESS_PROXY_INFO ICallback_ProxyInfo =
    {
    &Object_StubDesc,
    Love__MIDL_ProcFormatString.Format,
    &ICallback_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO ICallback_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    Love__MIDL_ProcFormatString.Format,
    &ICallback_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(4) _ICallbackProxyVtbl = 
{
    &ICallback_ProxyInfo,
    &IID_ICallback,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* ICallback::OnFindGirl */
};

const CInterfaceStubVtbl _ICallbackStubVtbl =
{
    &IID_ICallback,
    &ICallback_ServerInfo,
    4,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IPeople, ver. 0.0,
   GUID={0x991FF17A,0x8C41,0x4071,{0xA8,0x23,0xFF,0xE2,0x84,0x37,0xC8,0xA4}} */

#pragma code_seg(".orpc")
static const unsigned short IPeople_FormatStringOffsetTable[] =
    {
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IPeople_ProxyInfo =
    {
    &Object_StubDesc,
    Love__MIDL_ProcFormatString.Format,
    &IPeople_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IPeople_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    Love__MIDL_ProcFormatString.Format,
    &IPeople_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(4) _IPeopleProxyVtbl = 
{
    &IPeople_ProxyInfo,
    &IID_IPeople,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IPeople::GetGirl */
};

const CInterfaceStubVtbl _IPeopleStubVtbl =
{
    &IID_IPeople,
    &IPeople_ServerInfo,
    4,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};

static const MIDL_STUB_DESC Object_StubDesc = 
    {
    0,
    NdrOleAllocate,
    NdrOleFree,
    0,
    0,
    0,
    0,
    0,
    Love__MIDL_TypeFormatString.Format,
    1, /* -error bounds_check flag */
    0x50002, /* Ndr library version */
    0,
    0x700022b, /* MIDL Version 7.0.555 */
    0,
    0,
    0,  /* notify & notify_flag routine table */
    0x1, /* MIDL flag */
    0, /* cs routines */
    0,   /* proxy/server info */
    0
    };

const CInterfaceProxyVtbl * const _Love_ProxyVtblList[] = 
{
    ( CInterfaceProxyVtbl *) &_IPeopleProxyVtbl,
    ( CInterfaceProxyVtbl *) &_ICallbackProxyVtbl,
    0
};

const CInterfaceStubVtbl * const _Love_StubVtblList[] = 
{
    ( CInterfaceStubVtbl *) &_IPeopleStubVtbl,
    ( CInterfaceStubVtbl *) &_ICallbackStubVtbl,
    0
};

PCInterfaceName const _Love_InterfaceNamesList[] = 
{
    "IPeople",
    "ICallback",
    0
};


#define _Love_CHECK_IID(n)	IID_GENERIC_CHECK_IID( _Love, pIID, n)

int __stdcall _Love_IID_Lookup( const IID * pIID, int * pIndex )
{
    IID_BS_LOOKUP_SETUP

    IID_BS_LOOKUP_INITIAL_TEST( _Love, 2, 1 )
    IID_BS_LOOKUP_RETURN_RESULT( _Love, 2, *pIndex )
    
}

const ExtendedProxyFileInfo Love_ProxyFileInfo = 
{
    (PCInterfaceProxyVtblList *) & _Love_ProxyVtblList,
    (PCInterfaceStubVtblList *) & _Love_StubVtblList,
    (const PCInterfaceName * ) & _Love_InterfaceNamesList,
    0, /* no delegation */
    & _Love_IID_Lookup, 
    2,
    2,
    0, /* table of [async_uuid] interfaces */
    0, /* Filler1 */
    0, /* Filler2 */
    0  /* Filler3 */
};
#pragma optimize("", on )
#if _MSC_VER >= 1200
#pragma warning(pop)
#endif


#endif /* !defined(_M_IA64) && !defined(_M_AMD64)*/

