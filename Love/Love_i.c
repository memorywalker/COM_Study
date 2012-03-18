

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


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


#ifdef __cplusplus
extern "C"{
#endif 


#include <rpc.h>
#include <rpcndr.h>

#ifdef _MIDL_USE_GUIDDEF_

#ifndef INITGUID
#define INITGUID
#include <guiddef.h>
#undef INITGUID
#else
#include <guiddef.h>
#endif

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        DEFINE_GUID(name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8)

#else // !_MIDL_USE_GUIDDEF_

#ifndef __IID_DEFINED__
#define __IID_DEFINED__

typedef struct _IID
{
    unsigned long x;
    unsigned short s1;
    unsigned short s2;
    unsigned char  c[8];
} IID;

#endif // __IID_DEFINED__

#ifndef CLSID_DEFINED
#define CLSID_DEFINED
typedef IID CLSID;
#endif // CLSID_DEFINED

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        const type name = {l,w1,w2,{b1,b2,b3,b4,b5,b6,b7,b8}}

#endif !_MIDL_USE_GUIDDEF_

MIDL_DEFINE_GUID(IID, IID_ICallback,0x0041A9E5,0xC099,0x4fc5,0x81,0x33,0x6A,0xF5,0xC5,0x52,0x09,0xD0);


MIDL_DEFINE_GUID(IID, IID_IPeople,0x991FF17A,0x8C41,0x4071,0xA8,0x23,0xFF,0xE2,0x84,0x37,0xC8,0xA4);


MIDL_DEFINE_GUID(IID, LIBID_LoveLib,0x5AAF5835,0x9316,0x4214,0xB1,0xEA,0x9F,0x5D,0xB9,0x98,0xF6,0x5B);


MIDL_DEFINE_GUID(IID, DIID__IPeopleEvents,0x07E7E368,0x0B65,0x40D4,0x9B,0xB0,0x18,0x91,0x65,0x59,0xC0,0x70);


MIDL_DEFINE_GUID(CLSID, CLSID_People,0x3DD99A90,0x6920,0x404E,0x92,0x64,0x2F,0x97,0xF1,0x46,0xA3,0xC4);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



