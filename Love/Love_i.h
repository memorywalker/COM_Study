

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


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

#pragma warning( disable: 4049 )  /* more than 64k source lines */


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif // __RPCNDR_H_VERSION__

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __Love_i_h__
#define __Love_i_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __ICallback_FWD_DEFINED__
#define __ICallback_FWD_DEFINED__
typedef interface ICallback ICallback;
#endif 	/* __ICallback_FWD_DEFINED__ */


#ifndef __IPeople_FWD_DEFINED__
#define __IPeople_FWD_DEFINED__
typedef interface IPeople IPeople;
#endif 	/* __IPeople_FWD_DEFINED__ */


#ifndef ___IPeopleEvents_FWD_DEFINED__
#define ___IPeopleEvents_FWD_DEFINED__
typedef interface _IPeopleEvents _IPeopleEvents;
#endif 	/* ___IPeopleEvents_FWD_DEFINED__ */


#ifndef __People_FWD_DEFINED__
#define __People_FWD_DEFINED__

#ifdef __cplusplus
typedef class People People;
#else
typedef struct People People;
#endif /* __cplusplus */

#endif 	/* __People_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __ICallback_INTERFACE_DEFINED__
#define __ICallback_INTERFACE_DEFINED__

/* interface ICallback */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_ICallback;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0041A9E5-C099-4fc5-8133-6AF5C55209D0")
    ICallback : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE OnFindGirl( 
            /* [in] */ LONG nums) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ICallbackVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICallback * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICallback * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICallback * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *OnFindGirl )( 
            ICallback * This,
            /* [in] */ LONG nums);
        
        END_INTERFACE
    } ICallbackVtbl;

    interface ICallback
    {
        CONST_VTBL struct ICallbackVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICallback_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICallback_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICallback_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICallback_OnFindGirl(This,nums)	\
    ( (This)->lpVtbl -> OnFindGirl(This,nums) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICallback_INTERFACE_DEFINED__ */


#ifndef __IPeople_INTERFACE_DEFINED__
#define __IPeople_INTERFACE_DEFINED__

/* interface IPeople */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IPeople;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("991FF17A-8C41-4071-A823-FFE28437C8A4")
    IPeople : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetGirl( 
            /* [in] */ LONG nums) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IPeopleVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IPeople * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IPeople * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IPeople * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetGirl )( 
            IPeople * This,
            /* [in] */ LONG nums);
        
        END_INTERFACE
    } IPeopleVtbl;

    interface IPeople
    {
        CONST_VTBL struct IPeopleVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IPeople_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IPeople_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IPeople_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IPeople_GetGirl(This,nums)	\
    ( (This)->lpVtbl -> GetGirl(This,nums) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IPeople_INTERFACE_DEFINED__ */



#ifndef __LoveLib_LIBRARY_DEFINED__
#define __LoveLib_LIBRARY_DEFINED__

/* library LoveLib */
/* [version][uuid] */ 


EXTERN_C const IID LIBID_LoveLib;

#ifndef ___IPeopleEvents_DISPINTERFACE_DEFINED__
#define ___IPeopleEvents_DISPINTERFACE_DEFINED__

/* dispinterface _IPeopleEvents */
/* [uuid] */ 


EXTERN_C const IID DIID__IPeopleEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("07E7E368-0B65-40D4-9BB0-18916559C070")
    _IPeopleEvents : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _IPeopleEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _IPeopleEvents * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _IPeopleEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _IPeopleEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _IPeopleEvents * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _IPeopleEvents * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _IPeopleEvents * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _IPeopleEvents * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } _IPeopleEventsVtbl;

    interface _IPeopleEvents
    {
        CONST_VTBL struct _IPeopleEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _IPeopleEvents_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _IPeopleEvents_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _IPeopleEvents_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define _IPeopleEvents_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define _IPeopleEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define _IPeopleEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define _IPeopleEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___IPeopleEvents_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_People;

#ifdef __cplusplus

class DECLSPEC_UUID("3DD99A90-6920-404E-9264-2F97F146A3C4")
People;
#endif
#endif /* __LoveLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


