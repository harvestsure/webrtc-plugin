

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


 /* File created by MIDL compiler version 8.00.0603 */
/* at Thu Apr 20 22:33:49 2017
 */
/* Compiler settings for rtc.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 8.00.0603 
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

MIDL_DEFINE_GUID(IID, IID_IPlugin,0xE7924A16,0x1A24,0x472D,0xB4,0x81,0x92,0xD7,0xC2,0x53,0x3F,0x55);


MIDL_DEFINE_GUID(IID, IID_IMediaDevices,0x2785B9BD,0xCA2D,0x44DA,0x87,0x9B,0xFD,0x15,0xF9,0xBA,0x1D,0x5F);


MIDL_DEFINE_GUID(IID, IID_IMediaStreamDoubango,0x39C30596,0x997E,0x434C,0x81,0x71,0x85,0xB2,0x73,0x0A,0x9C,0xA6);


MIDL_DEFINE_GUID(IID, IID_IMediaTrackSupportedConstraints,0x212555EE,0xF2DC,0x4E4A,0xB2,0x7C,0x51,0x7D,0x29,0xE0,0xB7,0xA4);


MIDL_DEFINE_GUID(IID, IID_IPromise,0x59C63051,0x0B14,0x4D44,0x80,0x15,0xBD,0x42,0xBB,0xCE,0x49,0x64);


MIDL_DEFINE_GUID(IID, IID_IErrorMessage,0x97C09588,0x9992,0x4809,0x90,0x0B,0xE7,0x31,0x9C,0x61,0x5D,0xB1);


MIDL_DEFINE_GUID(IID, IID_IMediaStreamTrack,0x8F5B0823,0x989F,0x4E6F,0xA4,0x86,0x8A,0xBF,0xD5,0x23,0xB2,0x2D);


MIDL_DEFINE_GUID(IID, IID_IMediaTrackConstraints,0xCA8FD86D,0x739E,0x49E3,0x81,0xDB,0x4D,0xE7,0x0F,0x63,0xB8,0x92);


MIDL_DEFINE_GUID(IID, IID_IMediaDeviceInfo,0xCAD81D85,0x1B8C,0x4E1D,0xAD,0x79,0x0B,0x90,0xD0,0xFD,0x64,0x21);


MIDL_DEFINE_GUID(IID, IID_IRTCPeerConnection,0xB2B753B0,0x85A5,0x400F,0xB4,0xF6,0x2E,0x04,0xE8,0xDF,0x3A,0xE7);


MIDL_DEFINE_GUID(IID, IID_IRTCSessionDescription,0xC3F56FD7,0x937E,0x42A6,0x8B,0x00,0x65,0xCB,0x29,0x7F,0xB8,0xAA);


MIDL_DEFINE_GUID(IID, IID_IRTCError,0x48ACEE72,0x5B42,0x463A,0xA3,0x1D,0x34,0xAD,0x55,0xE6,0x1D,0xE1);


MIDL_DEFINE_GUID(IID, IID_IRTCIceCandidate,0x4814FA61,0x92BC,0x4EBD,0x9C,0x1E,0xD9,0xB3,0xAD,0xB2,0x2E,0x5A);


MIDL_DEFINE_GUID(IID, IID_IRTCPeerConnectionIceEvent,0xCA821F0E,0x3D50,0x40B7,0x86,0x84,0x60,0xFC,0x3D,0xAF,0xC2,0x62);


MIDL_DEFINE_GUID(IID, IID_IMediaStreamEvent,0x5480960F,0x4930,0x4981,0x86,0x61,0x01,0x80,0x94,0xDB,0x19,0xE9);


MIDL_DEFINE_GUID(IID, IID_IEmpty,0x528305BD,0xAF6E,0x4E7A,0xAD,0x37,0x88,0xC1,0x36,0x3F,0x0A,0x70);


MIDL_DEFINE_GUID(IID, IID_IRTCDataChannel,0x83C443DF,0x10BB,0x46DE,0xB5,0xC6,0x56,0x73,0x51,0x2C,0x66,0x0F);


MIDL_DEFINE_GUID(IID, IID_IRTCDataChannelEvent,0x08D4E0DC,0xA254,0x4FAE,0x8B,0x72,0x1C,0xA4,0xF8,0x9E,0x58,0x73);


MIDL_DEFINE_GUID(IID, LIBID_rtcLib,0x5701E57F,0x4D99,0x450D,0x84,0x79,0xBC,0x98,0x71,0x79,0x9B,0x8D);


MIDL_DEFINE_GUID(IID, DIID__IPluginEvents,0x2D6EAD85,0xCE94,0x49DA,0xBC,0x4F,0x1C,0x12,0x2C,0x35,0x58,0xB3);


MIDL_DEFINE_GUID(CLSID, CLSID_Plugin,0xF8CFFADD,0x7ED1,0x46E9,0xBE,0xFD,0xDE,0x7D,0xE1,0x09,0x20,0x74);


MIDL_DEFINE_GUID(CLSID, CLSID_MediaDevices,0x8715C55C,0xEB79,0x40E7,0xBB,0xAE,0xCD,0xFC,0x12,0x74,0x98,0xC9);


MIDL_DEFINE_GUID(CLSID, CLSID_MediaStream,0xB1F9B307,0x84D4,0x49D1,0x98,0x17,0x92,0x54,0x1F,0x56,0xD9,0xED);


MIDL_DEFINE_GUID(CLSID, CLSID_MediaTrackSupportedConstraints,0xFC18B94E,0xA34B,0x41A4,0x9E,0xCC,0x8D,0xC9,0xA9,0x35,0x56,0x5B);


MIDL_DEFINE_GUID(CLSID, CLSID_Promise,0x310F737F,0xB074,0x46C3,0xAF,0x4B,0x6C,0xD0,0x6D,0x69,0xC6,0x13);


MIDL_DEFINE_GUID(CLSID, CLSID_ErrorMessage,0x751EF633,0xE34A,0x4CB7,0xBA,0x2F,0x8E,0x80,0x44,0xCF,0xC7,0xFA);


MIDL_DEFINE_GUID(CLSID, CLSID_MediaStreamTrack,0x85C22736,0xEA22,0x41BF,0xA7,0xA2,0xE2,0x5D,0xBD,0x63,0xBA,0x3B);


MIDL_DEFINE_GUID(CLSID, CLSID_MediaTrackConstraints,0x66EBA785,0x4C5C,0x48E3,0x80,0x87,0x4F,0x52,0xE2,0x52,0xAE,0x92);


MIDL_DEFINE_GUID(CLSID, CLSID_MediaDeviceInfo,0xB99DCC2F,0xD37C,0x4053,0x9C,0x8F,0x82,0xE7,0xE5,0xF1,0xED,0xB1);


MIDL_DEFINE_GUID(CLSID, CLSID_RTCPeerConnection,0x3325022A,0x66CE,0x421A,0x88,0xA0,0x45,0xCB,0x43,0x8A,0x8A,0x8D);


MIDL_DEFINE_GUID(CLSID, CLSID_RTCSessionDescription,0x146F17F4,0x9310,0x454C,0x91,0x79,0x4D,0x71,0x99,0x75,0xC8,0x15);


MIDL_DEFINE_GUID(CLSID, CLSID_RTCError,0xA7D9F96B,0x0FC1,0x4165,0xAD,0xA5,0xBA,0x79,0x02,0x46,0xBE,0x4F);


MIDL_DEFINE_GUID(CLSID, CLSID_RTCIceCandidate,0x20E253DA,0x1FAB,0x458B,0xB7,0x3A,0xE8,0xEF,0xB8,0x79,0x3D,0x2A);


MIDL_DEFINE_GUID(CLSID, CLSID_RTCPeerConnectionIceEvent,0xF0B10277,0x5D59,0x428B,0x8E,0xC1,0xE6,0x3C,0x1D,0x0E,0x07,0x14);


MIDL_DEFINE_GUID(CLSID, CLSID_MediaStreamEvent,0xFB701742,0x2F19,0x435F,0x83,0xA5,0xBE,0xCF,0x5D,0x06,0xE3,0xB2);


MIDL_DEFINE_GUID(CLSID, CLSID_Empty,0xB162422C,0xE96D,0x41CF,0x80,0x4E,0xC5,0xBF,0x42,0x52,0x81,0x3C);


MIDL_DEFINE_GUID(CLSID, CLSID_RTCDataChannel,0x18001236,0x9A8E,0x4C9B,0xA8,0xB4,0x09,0x7F,0x9D,0x67,0x4C,0x22);


MIDL_DEFINE_GUID(CLSID, CLSID_RTCDataChannelEvent,0xF7312F73,0x98C4,0x4317,0xB5,0xBE,0x09,0x2E,0xE2,0x86,0xEF,0x25);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



