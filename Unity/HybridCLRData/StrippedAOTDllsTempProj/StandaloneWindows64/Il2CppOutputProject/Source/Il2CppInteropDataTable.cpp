#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <stdint.h>
#include <limits>



// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

struct FORMATETC_tF79DA891CDFF66CD92A30B1BEE21487CBD0A19AF;
struct Guid_t;
struct IAdviseSink_t37C3EC848072ADC38380B8E6792BCFC7FB02F5A3;
struct IEnumFORMATETC_tA2975106C072DA4A2C01123C03B40E4C6A378D2C;
struct IEnumSTATDATA_t74774EEE6E04C3CCE175B8F433428B4F2DCA23E7;
struct IMetaDataEmit_tED2D8D4818050B8E1945A8A5BB85414139BDFE98;
struct IMetaDataImport_tF05FD2344E376C091B8D54AFD5D8181A3C800785;
struct IMoniker_tEB333F870BCBCEA3BB5D6CBC9C22909B568741A8;
struct IStream_tD557F2A7FBD3D478F37E3CBCAA456B6819902AF8;
struct ISymUnmanagedDocumentWriter_tA21FF6B5568131A7AA5AC8209D7C5B91DC935AA8;
struct ImageDebugDirectory_tCF219856731E46D9D5753C0DC4449C115AA1F947;
struct STATDATA_t2B5067A25347A006153807EAA17839425EFAF66C_marshaled_com;
struct STGMEDIUM_t73DA1C6D081B8828B798D5A7FA7B129B1F6E2D3E_marshaled_com;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Runtime.InteropServices.ComTypes.IAdviseSink
struct NOVTABLE IAdviseSink_t37C3EC848072ADC38380B8E6792BCFC7FB02F5A3 : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual void STDCALL IAdviseSink_OnClose_m70409CF5A8652B9F9E90D509519F3BDB16AF2CD1() = 0;
	virtual void STDCALL IAdviseSink_OnDataChange_mE78969ED47C9BD7FCB9F255D2DD6CEF3942E51A4(FORMATETC_tF79DA891CDFF66CD92A30B1BEE21487CBD0A19AF* ___format0, STGMEDIUM_t73DA1C6D081B8828B798D5A7FA7B129B1F6E2D3E_marshaled_com* ___stgmedium1) = 0;
	virtual void STDCALL IAdviseSink_OnRename_m1F028CEE5CA21748497880307AE063B4B48DB83D(IMoniker_tEB333F870BCBCEA3BB5D6CBC9C22909B568741A8* ___moniker0) = 0;
	virtual void STDCALL IAdviseSink_OnSave_m4F59C308C3DA30BACC651EC050BD6E1813D95682() = 0;
	virtual void STDCALL IAdviseSink_OnViewChange_m98E952EAC789D8795C49E0C99C78C375EEF0C595(int32_t ___aspect0, int32_t ___index1) = 0;
};
// System.Runtime.InteropServices.ComTypes.IDataObject
struct NOVTABLE IDataObject_t47F2CDDF556578DD1CA1DD50B64223DE02046725 : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual int32_t STDCALL IDataObject_DAdvise_mCAAAEF214024E8DD0B1D3717B3B0A2F1134DD0C8(FORMATETC_tF79DA891CDFF66CD92A30B1BEE21487CBD0A19AF* ___pFormatetc0, int32_t ___advf1, IAdviseSink_t37C3EC848072ADC38380B8E6792BCFC7FB02F5A3* ___adviseSink2, int32_t* ___connection3) = 0;
	virtual il2cpp_hresult_t STDCALL IDataObject_DUnadvise_mD9EF6E3B4AFF2A0BDCD3170BE265CCCD22F555C7(int32_t ___connection0) = 0;
	virtual int32_t STDCALL IDataObject_EnumDAdvise_mDE7305FE0CE1B6B6347D4B4F727586816EF692D6(IEnumSTATDATA_t74774EEE6E04C3CCE175B8F433428B4F2DCA23E7** ___enumAdvise0) = 0;
	virtual il2cpp_hresult_t STDCALL IDataObject_EnumFormatEtc_mD49699F50464BDAD7C332E962C84DAEC10E8DCBB(int32_t ___direction0, IEnumFORMATETC_tA2975106C072DA4A2C01123C03B40E4C6A378D2C** comReturnValue) = 0;
	virtual int32_t STDCALL IDataObject_GetCanonicalFormatEtc_m52FDD4AA04C3F17598EF29F770CEF6BD3E31757C(FORMATETC_tF79DA891CDFF66CD92A30B1BEE21487CBD0A19AF* ___formatIn0, FORMATETC_tF79DA891CDFF66CD92A30B1BEE21487CBD0A19AF* ___formatOut1) = 0;
	virtual il2cpp_hresult_t STDCALL IDataObject_GetData_mE6EC9CB3087F4D991BF84012C6993FD29768E4D1(FORMATETC_tF79DA891CDFF66CD92A30B1BEE21487CBD0A19AF* ___format0, STGMEDIUM_t73DA1C6D081B8828B798D5A7FA7B129B1F6E2D3E_marshaled_com* ___medium1) = 0;
	virtual il2cpp_hresult_t STDCALL IDataObject_GetDataHere_m35CDE17F3593BF1C9F04BF25B3EF4570F222C910(FORMATETC_tF79DA891CDFF66CD92A30B1BEE21487CBD0A19AF* ___format0, STGMEDIUM_t73DA1C6D081B8828B798D5A7FA7B129B1F6E2D3E_marshaled_com* ___medium1) = 0;
	virtual int32_t STDCALL IDataObject_QueryGetData_mF5FE51C51AA3D7B21B546D70A05E62B20A4C7F0B(FORMATETC_tF79DA891CDFF66CD92A30B1BEE21487CBD0A19AF* ___format0) = 0;
	virtual il2cpp_hresult_t STDCALL IDataObject_SetData_mBE666B5A54856B71B7F2982DE3D6A5D685213DF8(FORMATETC_tF79DA891CDFF66CD92A30B1BEE21487CBD0A19AF* ___formatIn0, STGMEDIUM_t73DA1C6D081B8828B798D5A7FA7B129B1F6E2D3E_marshaled_com* ___medium1, int32_t ___release2) = 0;
};
// System.Runtime.InteropServices.ComTypes.IEnumFORMATETC
struct NOVTABLE IEnumFORMATETC_tA2975106C072DA4A2C01123C03B40E4C6A378D2C : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IEnumFORMATETC_Clone_mB4B8C3EEB64916CC3140C08EADCAF3BDEA3434FA(IEnumFORMATETC_tA2975106C072DA4A2C01123C03B40E4C6A378D2C** ___newEnum0) = 0;
	virtual int32_t STDCALL IEnumFORMATETC_Next_mECB23807C82DB2A79F2DE328F9457DF35DF8496E(int32_t ___celt0, FORMATETC_tF79DA891CDFF66CD92A30B1BEE21487CBD0A19AF* ___rgelt1, int32_t* ___pceltFetched2) = 0;
	virtual int32_t STDCALL IEnumFORMATETC_Reset_mFD53767BEA1DFCFA0A723140D4726A58A9F1A8AC() = 0;
	virtual int32_t STDCALL IEnumFORMATETC_Skip_m65473009B7661891B533A9321954EED7513F642A(int32_t ___celt0) = 0;
};
// System.Runtime.InteropServices.ComTypes.IEnumSTATDATA
struct NOVTABLE IEnumSTATDATA_t74774EEE6E04C3CCE175B8F433428B4F2DCA23E7 : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IEnumSTATDATA_Clone_mA575C8AB14E6EDF3BE968275B6FA10490211DD3F(IEnumSTATDATA_t74774EEE6E04C3CCE175B8F433428B4F2DCA23E7** ___newEnum0) = 0;
	virtual int32_t STDCALL IEnumSTATDATA_Next_m4113E1F41A012CF7C39526A46C76EC1032EC8070(int32_t ___celt0, STATDATA_t2B5067A25347A006153807EAA17839425EFAF66C_marshaled_com* ___rgelt1, int32_t* ___pceltFetched2) = 0;
	virtual int32_t STDCALL IEnumSTATDATA_Reset_m9ABF2C5C0F8E8014E47C9C016906EABFA7B8A289() = 0;
	virtual int32_t STDCALL IEnumSTATDATA_Skip_m8E0A9ED88D8297E9AFA8D3597D200EF343954D9C(int32_t ___celt0) = 0;
};
// System.Runtime.InteropServices.ComTypes.IMoniker
struct NOVTABLE IMoniker_tEB333F870BCBCEA3BB5D6CBC9C22909B568741A8 : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMoniker_U24__Stripped0_GetClassID_m38EEF983DE43F699C996A9D03E2C0CE7569B3462() = 0;
	virtual il2cpp_hresult_t STDCALL IMoniker_U24__Stripped1_IsDirty_m1663265A62AC6EA392DE173A0DC7B228083118DE() = 0;
	virtual il2cpp_hresult_t STDCALL IMoniker_U24__Stripped2_Load_m821E1BF5430FD293B095C0AFDCA8F74B059A4416() = 0;
	virtual il2cpp_hresult_t STDCALL IMoniker_U24__Stripped3_Save_m30A63B61BF55D3A6134B21D39262335CA52F4365() = 0;
	virtual il2cpp_hresult_t STDCALL IMoniker_U24__Stripped4_GetSizeMax_m38058D332A71AF70274E938EC4CAAFE478960D5E() = 0;
	virtual il2cpp_hresult_t STDCALL IMoniker_U24__Stripped5_BindToObject_m4519DE21E6143996EF17AA02AF9DB13A0106E4FC() = 0;
	virtual il2cpp_hresult_t STDCALL IMoniker_U24__Stripped6_BindToStorage_m0457607D11A6AC7D0F30FBFEA541925171ED7E40() = 0;
	virtual il2cpp_hresult_t STDCALL IMoniker_U24__Stripped7_Reduce_m048B977D6E31EC2790D6CD8EBDB59825191ED735() = 0;
	virtual il2cpp_hresult_t STDCALL IMoniker_U24__Stripped8_ComposeWith_mF53BB32BECF2208FCC84AE59B3F69B425867BF8D() = 0;
	virtual il2cpp_hresult_t STDCALL IMoniker_U24__Stripped9_Enum_m85623BCBA0DEFEF84655A9F2DAA33BDB412F2D53() = 0;
	virtual il2cpp_hresult_t STDCALL IMoniker_U24__Stripped10_IsEqual_m5A8CC24FF7835ADFE370D847E322FDF5225AC985() = 0;
	virtual il2cpp_hresult_t STDCALL IMoniker_U24__Stripped11_Hash_m5750C926EF6BB7450AA046459C93B40D799B409A() = 0;
	virtual il2cpp_hresult_t STDCALL IMoniker_U24__Stripped12_IsRunning_m8ECF03C0D546F59F8A35189E3E2D693FEE6F5B33() = 0;
	virtual il2cpp_hresult_t STDCALL IMoniker_U24__Stripped13_GetTimeOfLastChange_mE3003AF5359160248F0E02D9539B8945A2E8CBB0() = 0;
	virtual il2cpp_hresult_t STDCALL IMoniker_U24__Stripped14_Inverse_mEEF60A259B75ADDBE929364C90D471D766281CE4() = 0;
	virtual il2cpp_hresult_t STDCALL IMoniker_U24__Stripped15_CommonPrefixWith_m20E11E4499F6C31C2A6485AC8A126BFFFE173D51() = 0;
	virtual il2cpp_hresult_t STDCALL IMoniker_U24__Stripped16_RelativePathTo_m0999EF2B7334C314B62D33DB1BF76FE7EF9DE315() = 0;
	virtual il2cpp_hresult_t STDCALL IMoniker_U24__Stripped17_GetDisplayName_m8C4F1965BE12BCFF8C9C9E141AC46EE9B993EC57() = 0;
	virtual il2cpp_hresult_t STDCALL IMoniker_U24__Stripped18_ParseDisplayName_mDFB014F83FE9BB9C20CA916490C13556A788B104() = 0;
	virtual il2cpp_hresult_t STDCALL IMoniker_U24__Stripped19_IsSystemMoniker_m01E0FDAE03E8A1B1BFC7B37896F5FD5ED0B15CD6() = 0;
};
// System.Runtime.InteropServices.ComTypes.IStream
struct NOVTABLE IStream_tD557F2A7FBD3D478F37E3CBCAA456B6819902AF8 : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IStream_U24__Stripped0_Read_m3931B96A6502D63027D19B33BA00E7C458F4D7B4() = 0;
	virtual il2cpp_hresult_t STDCALL IStream_U24__Stripped1_Write_m6E380B9D97F9BE8C94006C2EFDAB9AECFB71C8A2() = 0;
	virtual il2cpp_hresult_t STDCALL IStream_U24__Stripped2_Seek_m48BA1F8D419524EA25388A125ACE01FD0E997E29() = 0;
	virtual il2cpp_hresult_t STDCALL IStream_U24__Stripped3_SetSize_mB7C3E686D66E8F06E9481D6568FA59859909618F() = 0;
	virtual il2cpp_hresult_t STDCALL IStream_U24__Stripped4_CopyTo_mFC5D2A1F09A0E8B93E0A59E073E3AA1E52BD0734() = 0;
	virtual il2cpp_hresult_t STDCALL IStream_U24__Stripped5_Commit_mB80C96189A539191961E33DB294ACE3212AF3F5E() = 0;
	virtual il2cpp_hresult_t STDCALL IStream_U24__Stripped6_Revert_m75A5D9DF47733C45D2A898B4BEF1D7F78388FFF7() = 0;
	virtual il2cpp_hresult_t STDCALL IStream_U24__Stripped7_LockRegion_m390EE8E850DD8FABE6AE1E5AFFBA3F9B99A97F7C() = 0;
	virtual il2cpp_hresult_t STDCALL IStream_U24__Stripped8_UnlockRegion_mC6D0528F61E174C8457129EC134A889C7171053D() = 0;
	virtual il2cpp_hresult_t STDCALL IStream_U24__Stripped9_Stat_mA04454F71EE8597AA29723BF0A5BA441E77ED55E() = 0;
	virtual il2cpp_hresult_t STDCALL IStream_U24__Stripped10_Clone_mAD943B3C6CA783518166BCC6DCBB78A60AB210C8() = 0;
};

// System.Diagnostics.PerformanceCounterManager
struct PerformanceCounterManager_t0BF17759AF043AB149940CFB1D6A1A90EE791E6F  : public RuntimeObject
{
	static const Il2CppGuid CLSID;

};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// System.Guid
struct Guid_t 
{
	// System.Int32 System.Guid::_a
	int32_t ____a_1;
	// System.Int16 System.Guid::_b
	int16_t ____b_2;
	// System.Int16 System.Guid::_c
	int16_t ____c_3;
	// System.Byte System.Guid::_d
	uint8_t ____d_4;
	// System.Byte System.Guid::_e
	uint8_t ____e_5;
	// System.Byte System.Guid::_f
	uint8_t ____f_6;
	// System.Byte System.Guid::_g
	uint8_t ____g_7;
	// System.Byte System.Guid::_h
	uint8_t ____h_8;
	// System.Byte System.Guid::_i
	uint8_t ____i_9;
	// System.Byte System.Guid::_j
	uint8_t ____j_10;
	// System.Byte System.Guid::_k
	uint8_t ____k_11;
};

struct Guid_t_StaticFields
{
	// System.Guid System.Guid::Empty
	Guid_t ___Empty_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};
// ILRuntime.Mono.Cecil.Pdb.IMetaDataEmit
struct NOVTABLE IMetaDataEmit_tED2D8D4818050B8E1945A8A5BB85414139BDFE98 : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_SetModuleProps_mA95041EDAECCC37915021E6E0DBC595348E4CCE7(Il2CppChar* ___szName0) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_Save_m734310A1C6AEB32128984A4AFC727B95FD90950B(Il2CppChar* ___szFile0, uint32_t ___dwSaveFlags1) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_SaveToStream_m8B9D635E13D97A5CD7C5C13E010AAF35FC1A2893(intptr_t ___pIStream0, uint32_t ___dwSaveFlags1) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_GetSaveSize_mA0368EAF147D05B19F4C17268A06411C2F9B8706(uint32_t ___fSave0, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_DefineTypeDef_m4577EA3EAF8F0302606E32E3C512BABAAD458BBD(intptr_t ___szTypeDef0, uint32_t ___dwTypeDefFlags1, uint32_t ___tkExtends2, intptr_t ___rtkImplements3, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_DefineNestedType_m20122A46A4D9773476CC3FFECBBEA72F04DB3F97(intptr_t ___szTypeDef0, uint32_t ___dwTypeDefFlags1, uint32_t ___tkExtends2, intptr_t ___rtkImplements3, uint32_t ___tdEncloser4, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_SetHandler_mEDE6769A8218B7A646979648F9722E1C8238EB38(Il2CppIUnknown* ___pUnk0) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_DefineMethod_m6E35D3575B489F30BC79F4EE506CDFCB86D36F49(uint32_t ___td0, intptr_t ___zName1, uint32_t ___dwMethodFlags2, intptr_t ___pvSigBlob3, uint32_t ___cbSigBlob4, uint32_t ___ulCodeRVA5, uint32_t ___dwImplFlags6, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_DefineMethodImpl_m8467A4D88FA95BDDA6E360A7D08C6C5244B661BD(uint32_t ___td0, uint32_t ___tkBody1, uint32_t ___tkDecl2) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_DefineTypeRefByName_m499F73B64F249096E684C7EA0E8ECE24D02E6720(uint32_t ___tkResolutionScope0, intptr_t ___szName1, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_DefineImportType_m4A43439624732E1E4C4A4ACA156E624A998643C8(intptr_t ___pAssemImport0, intptr_t ___pbHashValue1, uint32_t ___cbHashValue2, IMetaDataImport_tF05FD2344E376C091B8D54AFD5D8181A3C800785* ___pImport3, uint32_t ___tdImport4, intptr_t ___pAssemEmit5, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_DefineMemberRef_m5857774AF02A1C740F59FFE7E659D08BB50B313B(uint32_t ___tkImport0, Il2CppChar* ___szName1, intptr_t ___pvSigBlob2, uint32_t ___cbSigBlob3, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_DefineImportMember_mBDE0458F492D68FF57C76F713BCC6BA690B45E19(intptr_t ___pAssemImport0, intptr_t ___pbHashValue1, uint32_t ___cbHashValue2, IMetaDataImport_tF05FD2344E376C091B8D54AFD5D8181A3C800785* ___pImport3, uint32_t ___mbMember4, intptr_t ___pAssemEmit5, uint32_t ___tkParent6, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_DefineEvent_mBC3CF30937646EF70B81CD1FB54CC177AF0F0380(uint32_t ___td0, Il2CppChar* ___szEvent1, uint32_t ___dwEventFlags2, uint32_t ___tkEventType3, uint32_t ___mdAddOn4, uint32_t ___mdRemoveOn5, uint32_t ___mdFire6, intptr_t ___rmdOtherMethods7, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_SetClassLayout_m729AC4762E8882A525802E471446479B3A48A873(uint32_t ___td0, uint32_t ___dwPackSize1, intptr_t ___rFieldOffsets2, uint32_t ___ulClassSize3) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_DeleteClassLayout_m9E4081DA527705EE0A76E954A8FCD4080BEDCA69(uint32_t ___td0) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_SetFieldMarshal_mA6557A99FDA18287EC2D486DA421B16FAC7FF3B7(uint32_t ___tk0, intptr_t ___pvNativeType1, uint32_t ___cbNativeType2) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_DeleteFieldMarshal_m7BEE27C7BFAB29BC898D3E9329DD0DDF412B40F7(uint32_t ___tk0) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_DefinePermissionSet_m1E471D65BBFC2E93DE14D91AFE9FB0D814090300(uint32_t ___tk0, uint32_t ___dwAction1, intptr_t ___pvPermission2, uint32_t ___cbPermission3, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_SetRVA_m4B7B7E086E97BEB4499628813E26AC2D6275B639(uint32_t ___md0, uint32_t ___ulRVA1) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_GetTokenFromSig_mF3AF3B9567A1886DF9510517A820914A90BA5E97(intptr_t ___pvSig0, uint32_t ___cbSig1, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_DefineModuleRef_m9F092C783095B8E843D05BCBB1DE2A2C53C724EE(Il2CppChar* ___szName0, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_SetParent_m214FB04FDAE3BE2FBBED9DC1AD9426C419F89801(uint32_t ___mr0, uint32_t ___tk1) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_GetTokenFromTypeSpec_m4982C0256D76789A041D1F6848FA9F0F034265C9(intptr_t ___pvSig0, uint32_t ___cbSig1, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_SaveToMemory_mE31EBD7118E922D762C8B0A1F2D14CCDEBFDC7F2(intptr_t ___pbData0, uint32_t ___cbData1) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_DefineUserString_m988DEA674D8B50C2368B41C655C0602EE0B4AFA9(Il2CppChar* ___szString0, uint32_t ___cchString1, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_DeleteToken_m751EF495D3195261AAD68CFA2A9D448237DAC024(uint32_t ___tkObj0) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_SetMethodProps_m0BBDEA217A075BBC1A3BB932975543B92E2DF2D8(uint32_t ___md0, uint32_t ___dwMethodFlags1, uint32_t ___ulCodeRVA2, uint32_t ___dwImplFlags3) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_SetTypeDefProps_m8429ED98CB583B18D4ACA683F9C285CBDC67D930(uint32_t ___td0, uint32_t ___dwTypeDefFlags1, uint32_t ___tkExtends2, intptr_t ___rtkImplements3) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_SetEventProps_m3AC574F5EF111BCEE41896D96C64EFA5A878619A(uint32_t ___ev0, uint32_t ___dwEventFlags1, uint32_t ___tkEventType2, uint32_t ___mdAddOn3, uint32_t ___mdRemoveOn4, uint32_t ___mdFire5, intptr_t ___rmdOtherMethods6) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_SetPermissionSetProps_m8F3CA84D5074ED46FB1EAB9EC5A93284F70248FE(uint32_t ___tk0, uint32_t ___dwAction1, intptr_t ___pvPermission2, uint32_t ___cbPermission3, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_DefinePinvokeMap_mE15FF9315265EF61F8FD878583C2112E0EC95C9F(uint32_t ___tk0, uint32_t ___dwMappingFlags1, Il2CppChar* ___szImportName2, uint32_t ___mrImportDLL3) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_SetPinvokeMap_m92D8D381913A17D6B79A8197BCEB46BBFB5E13B9(uint32_t ___tk0, uint32_t ___dwMappingFlags1, Il2CppChar* ___szImportName2, uint32_t ___mrImportDLL3) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_DeletePinvokeMap_m3FCD19D6A9EC82786FF116BCC40DFBAE815D2528(uint32_t ___tk0) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_DefineCustomAttribute_m909DF644BCF47256D1F3225EEFEC319BE9C0909B(uint32_t ___tkObj0, uint32_t ___tkType1, intptr_t ___pCustomAttribute2, uint32_t ___cbCustomAttribute3, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_SetCustomAttributeValue_m7036504233BDDA573BE8CAF0666DF8AB3D4817B0(uint32_t ___pcv0, intptr_t ___pCustomAttribute1, uint32_t ___cbCustomAttribute2) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_DefineField_m63F3C34BD0F13C182AB0BA8E69ED1B1396A8888E(uint32_t ___td0, Il2CppChar* ___szName1, uint32_t ___dwFieldFlags2, intptr_t ___pvSigBlob3, uint32_t ___cbSigBlob4, uint32_t ___dwCPlusTypeFlag5, intptr_t ___pValue6, uint32_t ___cchValue7, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_DefineProperty_m7D50E37EBE3C19EF8B87E996F63EC2CA0F90FEF5(uint32_t ___td0, Il2CppChar* ___szProperty1, uint32_t ___dwPropFlags2, intptr_t ___pvSig3, uint32_t ___cbSig4, uint32_t ___dwCPlusTypeFlag5, intptr_t ___pValue6, uint32_t ___cchValue7, uint32_t ___mdSetter8, uint32_t ___mdGetter9, intptr_t ___rmdOtherMethods10, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_DefineParam_mD4D46D8B8B2A64FC708F30E2591754E7F1D00B52(uint32_t ___md0, uint32_t ___ulParamSeq1, Il2CppChar* ___szName2, uint32_t ___dwParamFlags3, uint32_t ___dwCPlusTypeFlag4, intptr_t ___pValue5, uint32_t ___cchValue6, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_SetFieldProps_m1ADC0456DF7673834043C03755B729F6C608EBC5(uint32_t ___fd0, uint32_t ___dwFieldFlags1, uint32_t ___dwCPlusTypeFlag2, intptr_t ___pValue3, uint32_t ___cchValue4) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_SetPropertyProps_m6AE92CFE077D25824808D0C3B9B62A4F3FDDA258(uint32_t ___pr0, uint32_t ___dwPropFlags1, uint32_t ___dwCPlusTypeFlag2, intptr_t ___pValue3, uint32_t ___cchValue4, uint32_t ___mdSetter5, uint32_t ___mdGetter6, intptr_t ___rmdOtherMethods7) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_SetParamProps_m94DC5ED8820CB86A3EA37388EB8D454C80CE7D01(uint32_t ___pd0, Il2CppChar* ___szName1, uint32_t ___dwParamFlags2, uint32_t ___dwCPlusTypeFlag3, intptr_t ___pValue4, uint32_t ___cchValue5) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_DefineSecurityAttributeSet_mCAE9140C9B61A7222426875240532B70603C447A(uint32_t ___tkObj0, intptr_t ___rSecAttrs1, uint32_t ___cSecAttrs2, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_ApplyEditAndContinue_m505AD1CA3C1C1DB26EDE372F4F93B7B2D46A1EA9(Il2CppIUnknown* ___pImport0) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_TranslateSigWithScope_mFE0AED8DC499101779400CEA6CF308BDC677C3B1(intptr_t ___pAssemImport0, intptr_t ___pbHashValue1, uint32_t ___cbHashValue2, IMetaDataImport_tF05FD2344E376C091B8D54AFD5D8181A3C800785* ___import3, intptr_t ___pbSigBlob4, uint32_t ___cbSigBlob5, intptr_t ___pAssemEmit6, IMetaDataEmit_tED2D8D4818050B8E1945A8A5BB85414139BDFE98* ___emit7, intptr_t ___pvTranslatedSig8, uint32_t ___cbTranslatedSigMax9, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_SetMethodImplFlags_m9278D5A5985759C7099F42F6F1382A2C70121029(uint32_t ___md0, uint32_t ___dwImplFlags1) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_SetFieldRVA_m6E4A2B68AC40F66BAB29C906B3DB35CE0FA86B13(uint32_t ___fd0, uint32_t ___ulRVA1) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_Merge_m4B1D5FC261D35334324BBBD920A9646E4294DC6D(IMetaDataImport_tF05FD2344E376C091B8D54AFD5D8181A3C800785* ___pImport0, intptr_t ___pHostMapToken1, Il2CppIUnknown* ___pHandler2) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_MergeEnd_m2BCD0DBF506BC213288F440DFFA0758F2DAB7B54() = 0;
};
// ILRuntime.Mono.Cecil.Pdb.IMetaDataImport
struct NOVTABLE IMetaDataImport_tF05FD2344E376C091B8D54AFD5D8181A3C800785 : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual void STDCALL IMetaDataImport_CloseEnum_m8929DA7E9C81FFFD748776E3E28335D95FCC2FBD(uint32_t ___hEnum0) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_CountEnum_m6641E18C62012EFFB5FAD3B7E65504E8F325A804(uint32_t ___hEnum0, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_ResetEnum_m4C1C3BED10EFCBE7C055A4AFF935238BC9D4C694(uint32_t ___hEnum0, uint32_t ___ulPos1) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_EnumTypeDefs_mCC190874415F30084DF02FDDA79895CC4446D1DC(uint32_t* ___phEnum0, uint32_t* ___rTypeDefs1, uint32_t ___cMax2, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_EnumInterfaceImpls_mF06D83179BE8765A9B66669332C6163AFFA133B1(uint32_t* ___phEnum0, uint32_t ___td1, uint32_t* ___rImpls2, uint32_t ___cMax3, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_EnumTypeRefs_mB3AA53F7D093BB3BF5AFD5849535F1AFB2DFAFF4(uint32_t* ___phEnum0, uint32_t* ___rTypeRefs1, uint32_t ___cMax2, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_FindTypeDefByName_m4D085122DBF4CE07E36E5FD1C2E865E467FBFDA5(Il2CppChar* ___szTypeDef0, uint32_t ___tkEnclosingClass1, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_GetScopeProps_mF67E5F9E5AED1461142B1E0993B05B727A096D1D(Il2CppChar* ___szName0, uint32_t ___cchName1, uint32_t* ___pchName2, Guid_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_GetModuleFromScope_mC021656D225BDB2E0A870DBC7663E763FFBC3D0B(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_GetTypeDefProps_mD0FF577B6F1D013811A2A83F98A198EEB3BE9E48(uint32_t ___td0, intptr_t ___szTypeDef1, uint32_t ___cchTypeDef2, uint32_t* ___pchTypeDef3, intptr_t ___pdwTypeDefFlags4, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_GetInterfaceImplProps_mC5EF1E2F10C6D008A3AAE64B0C552BC2B63DB895(uint32_t ___iiImpl0, uint32_t* ___pClass1, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_GetTypeRefProps_m411E156FBACD3EC8F0CCCBFE6F7E1E69A4C223CE(uint32_t ___tr0, uint32_t* ___ptkResolutionScope1, Il2CppChar* ___szName2, uint32_t ___cchName3, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_ResolveTypeRef_mAF45A0D742B2F2C7CA4241A26ED70A7FD935AC2C(uint32_t ___tr0, Guid_t* ___riid1, Il2CppIUnknown** ___ppIScope2, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_EnumMembers_mE8758C9B1DA7A5D72F299A6D456FC44B741887B6(uint32_t* ___phEnum0, uint32_t ___cl1, uint32_t* ___rMembers2, uint32_t ___cMax3, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_EnumMembersWithName_m6CF3342250F3E3B50FCF55F2B52683E95D29CB0B(uint32_t* ___phEnum0, uint32_t ___cl1, Il2CppChar* ___szName2, uint32_t* ___rMembers3, uint32_t ___cMax4, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_EnumMethods_m2AFBB052DE645D1BE08C99CF7513247117BC6DBD(uint32_t* ___phEnum0, uint32_t ___cl1, intptr_t ___rMethods2, uint32_t ___cMax3, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_EnumMethodsWithName_m812FC4C4A6C4CFDBAD99F37E2352DC29D413DC0D(uint32_t* ___phEnum0, uint32_t ___cl1, Il2CppChar* ___szName2, uint32_t* ___rMethods3, uint32_t ___cMax4, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_EnumFields_mE19F5587FD49DB4FBDE7E6D29CE8F88A8AE48DAE(uint32_t* ___phEnum0, uint32_t ___cl1, intptr_t ___rFields2, uint32_t ___cMax3, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_EnumFieldsWithName_m60643437E0009235F7C582242A921DD7DDAE5602(uint32_t* ___phEnum0, uint32_t ___cl1, Il2CppChar* ___szName2, uint32_t* ___rFields3, uint32_t ___cMax4, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_EnumParams_m9B8C273AC0E7FE01427A81953839D8859CD6B238(uint32_t* ___phEnum0, uint32_t ___mb1, uint32_t* ___rParams2, uint32_t ___cMax3, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_EnumMemberRefs_m3FFECF3ED5E764FA707BB6BCD67499749CE9CF74(uint32_t* ___phEnum0, uint32_t ___tkParent1, uint32_t* ___rMemberRefs2, uint32_t ___cMax3, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_EnumMethodImpls_m42CDCE9548FAD52D94CFEEE1D0E2C7E5B1ACF522(uint32_t* ___phEnum0, uint32_t ___td1, uint32_t* ___rMethodBody2, uint32_t* ___rMethodDecl3, uint32_t ___cMax4, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_EnumPermissionSets_m48843AB22FA59F6DB1368F8CD52D6D6A7D461F41(uint32_t* ___phEnum0, uint32_t ___tk1, uint32_t ___dwActions2, uint32_t* ___rPermission3, uint32_t ___cMax4, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_FindMember_mFA806979B913787653551A4C44D6BB90ADF108BB(uint32_t ___td0, Il2CppChar* ___szName1, uint8_t* ___pvSigBlob2, uint32_t ___cbSigBlob3, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_FindMethod_m9003B0C0EC5815EE36E615162D15033B54D44F26(uint32_t ___td0, Il2CppChar* ___szName1, uint8_t* ___pvSigBlob2, uint32_t ___cbSigBlob3, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_FindField_mD8F545CBCD5BABB9DE56A84ACEA987B67ED2EF20(uint32_t ___td0, Il2CppChar* ___szName1, uint8_t* ___pvSigBlob2, uint32_t ___cbSigBlob3, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_FindMemberRef_mF72F0A97442EAA2ECF5ADE81EADB1EF8523935E1(uint32_t ___td0, Il2CppChar* ___szName1, uint8_t* ___pvSigBlob2, uint32_t ___cbSigBlob3, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_GetMethodProps_m66123AFD4C1202710F2F5D4AA8AAFD0DA8AFB141(uint32_t ___mb0, uint32_t* ___pClass1, intptr_t ___szMethod2, uint32_t ___cchMethod3, uint32_t* ___pchMethod4, intptr_t ___pdwAttr5, intptr_t ___ppvSigBlob6, intptr_t ___pcbSigBlob7, intptr_t ___pulCodeRVA8, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_GetMemberRefProps_m35264FFAB032CD0FDB4C4FBE67A41DCFC678AE97(uint32_t ___mr0, uint32_t* ___ptk1, Il2CppChar* ___szMember2, uint32_t ___cchMember3, uint32_t* ___pchMember4, intptr_t* ___ppvSigBlob5, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_EnumProperties_mFDFDCA5CEACDA6E1E11BD2CF4ED512B2C36BFB14(uint32_t* ___phEnum0, uint32_t ___td1, intptr_t ___rProperties2, uint32_t ___cMax3, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_EnumEvents_mEB4CF539D41273A61E1A77A84E14B60F86702EDC(uint32_t* ___phEnum0, uint32_t ___td1, intptr_t ___rEvents2, uint32_t ___cMax3, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_GetEventProps_mAB55FDEF9D044A5195A75440A8018350773820BC(uint32_t ___ev0, uint32_t* ___pClass1, Il2CppChar* ___szEvent2, uint32_t ___cchEvent3, uint32_t* ___pchEvent4, uint32_t* ___pdwEventFlags5, uint32_t* ___ptkEventType6, uint32_t* ___pmdAddOn7, uint32_t* ___pmdRemoveOn8, uint32_t* ___pmdFire9, uint32_t* ___rmdOtherMethod10, uint32_t ___cMax11, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_EnumMethodSemantics_m7E81EC58166B652947E3957CADA4BC4E23B8E7CE(uint32_t* ___phEnum0, uint32_t ___mb1, uint32_t* ___rEventProp2, uint32_t ___cMax3, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_GetMethodSemantics_mBE2B534ECA6478E484B3291674FE5676270CC5F1(uint32_t ___mb0, uint32_t ___tkEventProp1, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_GetClassLayout_mABB7B797EC762F1E1ED2039F02F1534BB50FAB4A(uint32_t ___td0, uint32_t* ___pdwPackSize1, intptr_t ___rFieldOffset2, uint32_t ___cMax3, uint32_t* ___pcFieldOffset4, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_GetFieldMarshal_mF53640049228AD94A0CF461A9CF9C26B5D1EFBED(uint32_t ___tk0, intptr_t* ___ppvNativeType1, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_GetRVA_m14250589948E2519E53E5BA3DBE4A4F5C7CBA611(uint32_t ___tk0, uint32_t* ___pulCodeRVA1, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_GetPermissionSetProps_mDAF1AD2BE320FFD8F8E9C386DCB904A1BAC4718B(uint32_t ___pm0, uint32_t* ___pdwAction1, intptr_t* ___ppvPermission2, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_GetSigFromToken_m5A6DF20428CFF9B2CE3E95C1FBADFBD34A72D28B(uint32_t ___mdSig0, intptr_t* ___ppvSig1, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_GetModuleRefProps_m0AC664769172030BF13BB7BC65E13F83EA70BA2A(uint32_t ___mur0, Il2CppChar* ___szName1, uint32_t ___cchName2, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_EnumModuleRefs_mE489CEE8C0B3AB8A96EE5A37690187783CCB67AC(uint32_t* ___phEnum0, uint32_t* ___rModuleRefs1, uint32_t ___cmax2, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_GetTypeSpecFromToken_m23EA2A77193AEB5E0807A92EA4258263D5FCB495(uint32_t ___typespec0, intptr_t* ___ppvSig1, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_GetNameFromToken_m774F398E7DFD805A243C8638EBE791C5E98ED82A(uint32_t ___tk0, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_EnumUnresolvedMethods_mA258CFFCA8EBB44CA1AFDA11419C70DBF7E4837E(uint32_t* ___phEnum0, uint32_t* ___rMethods1, uint32_t ___cMax2, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_GetUserString_m1BCF8DDB690EADCF6E454550E0E9A660D215D78D(uint32_t ___stk0, Il2CppChar* ___szString1, uint32_t ___cchString2, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_GetPinvokeMap_m42B7FBD488E2689574AD925394532E29E8DAE2FE(uint32_t ___tk0, uint32_t* ___pdwMappingFlags1, Il2CppChar* ___szImportName2, uint32_t ___cchImportName3, uint32_t* ___pchImportName4, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_EnumSignatures_m2318A448323BA2177E26B5EA283736A2FA9CA4AC(uint32_t* ___phEnum0, uint32_t* ___rSignatures1, uint32_t ___cmax2, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_EnumTypeSpecs_m542A9A41257C1298F1683EF4DCC40FA6EAFDCB95(uint32_t* ___phEnum0, uint32_t* ___rTypeSpecs1, uint32_t ___cmax2, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_EnumUserStrings_m75D6430E5D09D71E17A1A2A4EC137F1125F4F211(uint32_t* ___phEnum0, uint32_t* ___rStrings1, uint32_t ___cmax2, uint32_t* comReturnValue) = 0;
	virtual int32_t STDCALL IMetaDataImport_GetParamForMethodIndex_mBADB95590FA623792709E81682DC371EEFBCD6B2(uint32_t ___md0, uint32_t ___ulParamSeq1, uint32_t* ___pParam2) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_EnumCustomAttributes_mFCF3752ACDD369AB9687F2954753AECB54178E0F(uint32_t* ___phEnum0, uint32_t ___tk1, uint32_t ___tkType2, uint32_t* ___rCustomAttributes3, uint32_t ___cMax4, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_GetCustomAttributeProps_mA60232DDEE0CEB37F23BE2F123FCE2C4EB16BD14(uint32_t ___cv0, uint32_t* ___ptkObj1, uint32_t* ___ptkType2, intptr_t* ___ppBlob3, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_FindTypeRef_mC72A06B3744B9F9C031CFBF3F2A8D18D8F4DD9D9(uint32_t ___tkResolutionScope0, Il2CppChar* ___szName1, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_GetMemberProps_m489B30F97CAA914DD34BB3E1CB49570098B3B28F(uint32_t ___mb0, uint32_t* ___pClass1, Il2CppChar* ___szMember2, uint32_t ___cchMember3, uint32_t* ___pchMember4, uint32_t* ___pdwAttr5, intptr_t* ___ppvSigBlob6, uint32_t* ___pcbSigBlob7, uint32_t* ___pulCodeRVA8, uint32_t* ___pdwImplFlags9, uint32_t* ___pdwCPlusTypeFlag10, intptr_t* ___ppValue11, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_GetFieldProps_mD57CDF2FFD87BB0B8EB7627D29220D7BBD5803F0(uint32_t ___mb0, uint32_t* ___pClass1, Il2CppChar* ___szField2, uint32_t ___cchField3, uint32_t* ___pchField4, uint32_t* ___pdwAttr5, intptr_t* ___ppvSigBlob6, uint32_t* ___pcbSigBlob7, uint32_t* ___pdwCPlusTypeFlag8, intptr_t* ___ppValue9, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_GetPropertyProps_m7A3F535A4EED2A9D059AB39FE5DE8B3278F8B9A4(uint32_t ___prop0, uint32_t* ___pClass1, Il2CppChar* ___szProperty2, uint32_t ___cchProperty3, uint32_t* ___pchProperty4, uint32_t* ___pdwPropFlags5, intptr_t* ___ppvSig6, uint32_t* ___pbSig7, uint32_t* ___pdwCPlusTypeFlag8, intptr_t* ___ppDefaultValue9, uint32_t* ___pcchDefaultValue10, uint32_t* ___pmdSetter11, uint32_t* ___pmdGetter12, uint32_t* ___rmdOtherMethod13, uint32_t ___cMax14, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_GetParamProps_mB69D7A0CDFE2AEA07C5D31F3EFC9BBA6FBF232A7(uint32_t ___tk0, uint32_t* ___pmd1, uint32_t* ___pulSequence2, Il2CppChar* ___szName3, uint32_t ___cchName4, uint32_t* ___pchName5, uint32_t* ___pdwAttr6, uint32_t* ___pdwCPlusTypeFlag7, intptr_t* ___ppValue8, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_GetCustomAttributeByName_m91EB28E9D6250F1D0D3C365C87560A7E5F96840E(uint32_t ___tkObj0, Il2CppChar* ___szName1, intptr_t* ___ppData2, uint32_t* comReturnValue) = 0;
	virtual int32_t STDCALL IMetaDataImport_IsValidToken_m46E4E718378A959F80F21964A6CDA0E3A6DB719A(uint32_t ___tk0) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_GetNestedClassProps_mB8D9EEBF7C4234E496202B3CCB5F1F5927E90B30(uint32_t ___tdNestedClass0, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_GetNativeCallConvFromSig_mAFD738D5DB9D0FE1D2F2BC2E1C58368CD6F1784B(intptr_t ___pvSig0, uint32_t ___cbSig1, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_IsGlobal_m146C5747EB31B51582AC59959EF1F3CABCF22C22(uint32_t ___pd0, int32_t* comReturnValue) = 0;
};
// ILRuntime.Mono.Cecil.Pdb.ISymUnmanagedDocumentWriter
struct NOVTABLE ISymUnmanagedDocumentWriter_tA21FF6B5568131A7AA5AC8209D7C5B91DC935AA8 : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL ISymUnmanagedDocumentWriter_SetSource_mD23978C838926D84ED39B83BAC61D3D6468123BF(uint32_t ___sourceSize0, uint8_t* ___source1) = 0;
	virtual il2cpp_hresult_t STDCALL ISymUnmanagedDocumentWriter_SetCheckSum_m38ACF8D171677D1EFECE93146FA1A77E695837DA(Guid_t ___algorithmId0, uint32_t ___checkSumSize1, uint8_t* ___checkSum2) = 0;
};
// ILRuntime.Mono.Cecil.Pdb.ISymUnmanagedWriter2
struct NOVTABLE ISymUnmanagedWriter2_t736EB7F3A2D3D53D186BA91789FA620117286258 : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL ISymUnmanagedWriter2_DefineDocument_m630B7BE6C892CE730F14EC3CBDEE4751919E4D33(Il2CppChar* ___url0, Guid_t* ___langauge1, Guid_t* ___languageVendor2, Guid_t* ___documentType3, ISymUnmanagedDocumentWriter_tA21FF6B5568131A7AA5AC8209D7C5B91DC935AA8** ___pRetVal4) = 0;
	virtual il2cpp_hresult_t STDCALL ISymUnmanagedWriter2_SetUserEntryPoint_mFEA1FC9D0FEE13B3D7F2AFA71FC12A6B71B543D6(int32_t ___methodToken0) = 0;
	virtual il2cpp_hresult_t STDCALL ISymUnmanagedWriter2_OpenMethod_mB4CCD57C5F4C456F4FF239E79610E104EF90C85B(int32_t ___methodToken0) = 0;
	virtual il2cpp_hresult_t STDCALL ISymUnmanagedWriter2_CloseMethod_m6E8064069B15706CF89D6CC62AAFDC30677545BE() = 0;
	virtual il2cpp_hresult_t STDCALL ISymUnmanagedWriter2_OpenScope_mAD26E92175933571EE8496C42859902D59FBFED7(int32_t ___startOffset0, int32_t* ___pRetVal1) = 0;
	virtual il2cpp_hresult_t STDCALL ISymUnmanagedWriter2_CloseScope_mA2D2C4C5902AFD0710F4FA0548C2583D3D89E553(int32_t ___endOffset0) = 0;
	virtual il2cpp_hresult_t STDCALL ISymUnmanagedWriter2_SetScopeRange_Placeholder_m5C92CD585C4B25587CF94F9F5677F7C9F6E4FACE() = 0;
	virtual il2cpp_hresult_t STDCALL ISymUnmanagedWriter2_DefineLocalVariable_Placeholder_m4665AD32690F0CD260408BF01ADF7669D2337635() = 0;
	virtual il2cpp_hresult_t STDCALL ISymUnmanagedWriter2_DefineParameter_Placeholder_m97B6A3DFF361E81FDB5F5C3E73B5D752B2EDBDAA() = 0;
	virtual il2cpp_hresult_t STDCALL ISymUnmanagedWriter2_DefineField_Placeholder_mFE253AF5E4C5C23AC074AA7EE5268A1F85865922() = 0;
	virtual il2cpp_hresult_t STDCALL ISymUnmanagedWriter2_DefineGlobalVariable_Placeholder_m315C29D4EE862CB8E65CA84C18CA91990DD1965A() = 0;
	virtual il2cpp_hresult_t STDCALL ISymUnmanagedWriter2_Close_m1C6FA2C784BC4DA69BF8E136CAF1F82A233FC0A1() = 0;
	virtual il2cpp_hresult_t STDCALL ISymUnmanagedWriter2_SetSymAttribute_m6D9CAB252383C60BA8D0B16443E3F42A20722976(uint32_t ___parent0, Il2CppChar* ___name1, uint32_t ___data2, intptr_t ___signature3) = 0;
	virtual il2cpp_hresult_t STDCALL ISymUnmanagedWriter2_OpenNamespace_mF1E2180D13BA9DE9C7B159E4CC36E867B8C24632(Il2CppChar* ___name0) = 0;
	virtual il2cpp_hresult_t STDCALL ISymUnmanagedWriter2_CloseNamespace_mBEE27F5CB42932C3EF7530DDBC5C0FD059092438() = 0;
	virtual il2cpp_hresult_t STDCALL ISymUnmanagedWriter2_UsingNamespace_m93040258E59E57A473D6BC18943EE71D818BC442(Il2CppChar* ___fullName0) = 0;
	virtual il2cpp_hresult_t STDCALL ISymUnmanagedWriter2_SetMethodSourceRange_Placeholder_m6DF0979CC0B09631C4B979A77B0FAA017ECDBB66() = 0;
	virtual il2cpp_hresult_t STDCALL ISymUnmanagedWriter2_Initialize_mD43892F09F3F2A64CF56BF957DF425106C53A225(Il2CppIUnknown* ___emitter0, Il2CppChar* ___filename1, IStream_tD557F2A7FBD3D478F37E3CBCAA456B6819902AF8* ___pIStream2, IL2CPP_VARIANT_BOOL ___fFullBuild3) = 0;
	virtual il2cpp_hresult_t STDCALL ISymUnmanagedWriter2_GetDebugInfo_m9ACE7451D53CD8EC4A69EBAF22D7DD33FC28E219(ImageDebugDirectory_tCF219856731E46D9D5753C0DC4449C115AA1F947* ___pIDD0, int32_t ___cData1, int32_t* ___pcData2, uint8_t* ___data3) = 0;
	virtual il2cpp_hresult_t STDCALL ISymUnmanagedWriter2_DefineSequencePoints_m584D3737108BFB72D4FE71E0044D00A11AE22B31(ISymUnmanagedDocumentWriter_tA21FF6B5568131A7AA5AC8209D7C5B91DC935AA8* ___document0, int32_t ___spCount1, int32_t* ___offsets2, int32_t* ___lines3, int32_t* ___columns4, int32_t* ___endLines5, int32_t* ___endColumns6) = 0;
	virtual il2cpp_hresult_t STDCALL ISymUnmanagedWriter2_RemapToken_Placeholder_m7DEF4D66F2D5A4D36F772B985335B83528036C09() = 0;
	virtual il2cpp_hresult_t STDCALL ISymUnmanagedWriter2_Initialize2_Placeholder_m8AFB638AB4611ACF164FDFCF6E3920E28EACD447() = 0;
	virtual il2cpp_hresult_t STDCALL ISymUnmanagedWriter2_DefineConstant_Placeholder_m78B741569F32C4704D10653F79C6E46035724B89() = 0;
	virtual il2cpp_hresult_t STDCALL ISymUnmanagedWriter2_Abort_Placeholder_m1F1F5424DE75654736859ED0794F28ECF1360820() = 0;
	virtual il2cpp_hresult_t STDCALL ISymUnmanagedWriter2_DefineLocalVariable2_m7C68DC169ADC0270EFB0BD2D068EDFADF6E60815(Il2CppChar* ___name0, int32_t ___attributes1, int32_t ___sigToken2, int32_t ___addrKind3, int32_t ___addr14, int32_t ___addr25, int32_t ___addr36, int32_t ___startOffset7, int32_t ___endOffset8) = 0;
	virtual il2cpp_hresult_t STDCALL ISymUnmanagedWriter2_DefineGlobalVariable2_Placeholder_mB3BF8525620DD51A3E3D81F58030DE3824F3A376() = 0;
	virtual il2cpp_hresult_t STDCALL ISymUnmanagedWriter2_DefineConstant2_m038A4BBFB9C59793902BC97DC6C9C97E751D91D7(Il2CppChar* ___name0, Il2CppVariant ___variant1, int32_t ___sigToken2) = 0;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif



IL2CPP_EXTERN_C void DelegatePInvokeWrapper_Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07();
IL2CPP_EXTERN_C_CONST RuntimeType Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_0_0_0;
IL2CPP_EXTERN_C void Alloc_t78312CFE58F38082281E80E297AE6176BD2BD8AE_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Alloc_t78312CFE58F38082281E80E297AE6176BD2BD8AE_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Alloc_t78312CFE58F38082281E80E297AE6176BD2BD8AE_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Alloc_t78312CFE58F38082281E80E297AE6176BD2BD8AE_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_AndroidJavaRunnable_tF23B9BBDA8C99A48BCEEA6335A47DA3C0EF34A7F();
IL2CPP_EXTERN_C_CONST RuntimeType AndroidJavaRunnable_tF23B9BBDA8C99A48BCEEA6335A47DA3C0EF34A7F_0_0_0;
IL2CPP_EXTERN_C void AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_0_0_0;
IL2CPP_EXTERN_C void AnimationEvent_t77294DB2372A5C387B53EEA3EFDC550C75EC3174_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void AnimationEvent_t77294DB2372A5C387B53EEA3EFDC550C75EC3174_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void AnimationEvent_t77294DB2372A5C387B53EEA3EFDC550C75EC3174_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType AnimationEvent_t77294DB2372A5C387B53EEA3EFDC550C75EC3174_0_0_0;
IL2CPP_EXTERN_C void AnimatorControllerParameter_t1FA67485445446540D4F2857762C960AE6980E02_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void AnimatorControllerParameter_t1FA67485445446540D4F2857762C960AE6980E02_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void AnimatorControllerParameter_t1FA67485445446540D4F2857762C960AE6980E02_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType AnimatorControllerParameter_t1FA67485445446540D4F2857762C960AE6980E02_0_0_0;
IL2CPP_EXTERN_C void AnimatorTransitionInfo_t44894D5EDEACB368CDBA07458F6EE5F01A1F34AD_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void AnimatorTransitionInfo_t44894D5EDEACB368CDBA07458F6EE5F01A1F34AD_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void AnimatorTransitionInfo_t44894D5EDEACB368CDBA07458F6EE5F01A1F34AD_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType AnimatorTransitionInfo_t44894D5EDEACB368CDBA07458F6EE5F01A1F34AD_0_0_0;
IL2CPP_EXTERN_C void AnnotationSym_t1ABDBD1D4074A62BAB113261BC37B4BFF89D9C19_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void AnnotationSym_t1ABDBD1D4074A62BAB113261BC37B4BFF89D9C19_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void AnnotationSym_t1ABDBD1D4074A62BAB113261BC37B4BFF89D9C19_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType AnnotationSym_t1ABDBD1D4074A62BAB113261BC37B4BFF89D9C19_0_0_0;
IL2CPP_EXTERN_C void AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_AppDomainInitializer_tED36272F704E9A95E8FEFFD67EECA50F089B4D1A();
IL2CPP_EXTERN_C_CONST RuntimeType AppDomainInitializer_tED36272F704E9A95E8FEFFD67EECA50F089B4D1A_0_0_0;
IL2CPP_EXTERN_C void AppDomainSetup_tCECBEFD01C102F2D0027CBB0C071FA66B87803C4_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void AppDomainSetup_tCECBEFD01C102F2D0027CBB0C071FA66B87803C4_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void AppDomainSetup_tCECBEFD01C102F2D0027CBB0C071FA66B87803C4_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType AppDomainSetup_tCECBEFD01C102F2D0027CBB0C071FA66B87803C4_0_0_0;
IL2CPP_EXTERN_C void ArrayDimension_t3FE4B437B5959D9980B4443354A02B21BACD39FE_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ArrayDimension_t3FE4B437B5959D9980B4443354A02B21BACD39FE_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ArrayDimension_t3FE4B437B5959D9980B4443354A02B21BACD39FE_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ArrayDimension_t3FE4B437B5959D9980B4443354A02B21BACD39FE_0_0_0;
IL2CPP_EXTERN_C void ArrayMetadata_t0633C1AE44FDB314EBC68AAB7C5C3707745759BC_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ArrayMetadata_t0633C1AE44FDB314EBC68AAB7C5C3707745759BC_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ArrayMetadata_t0633C1AE44FDB314EBC68AAB7C5C3707745759BC_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ArrayMetadata_t0633C1AE44FDB314EBC68AAB7C5C3707745759BC_0_0_0;
IL2CPP_EXTERN_C void Assembly_t_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Assembly_t_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Assembly_t_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Assembly_t_0_0_0;
IL2CPP_EXTERN_C void AssemblyName_t555F1570F523D87D970C6E7F27B1B44C83EADDD2_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void AssemblyName_t555F1570F523D87D970C6E7F27B1B44C83EADDD2_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void AssemblyName_t555F1570F523D87D970C6E7F27B1B44C83EADDD2_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType AssemblyName_t555F1570F523D87D970C6E7F27B1B44C83EADDD2_0_0_0;
IL2CPP_EXTERN_C void AssetBundleCreateRequest_t73B8714B9459A01540E091C3770A408E67188CF6_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void AssetBundleCreateRequest_t73B8714B9459A01540E091C3770A408E67188CF6_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void AssetBundleCreateRequest_t73B8714B9459A01540E091C3770A408E67188CF6_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType AssetBundleCreateRequest_t73B8714B9459A01540E091C3770A408E67188CF6_0_0_0;
IL2CPP_EXTERN_C void AssetBundleRecompressOperation_tFDA1FB5AE1E072FC6CAC1CF0064C13D77F87CDDE_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void AssetBundleRecompressOperation_tFDA1FB5AE1E072FC6CAC1CF0064C13D77F87CDDE_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void AssetBundleRecompressOperation_tFDA1FB5AE1E072FC6CAC1CF0064C13D77F87CDDE_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType AssetBundleRecompressOperation_tFDA1FB5AE1E072FC6CAC1CF0064C13D77F87CDDE_0_0_0;
IL2CPP_EXTERN_C void AssetBundleRequest_tED9F5504E75ED1BCFF8DA9B51F5C7356617E6621_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void AssetBundleRequest_tED9F5504E75ED1BCFF8DA9B51F5C7356617E6621_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void AssetBundleRequest_tED9F5504E75ED1BCFF8DA9B51F5C7356617E6621_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType AssetBundleRequest_tED9F5504E75ED1BCFF8DA9B51F5C7356617E6621_0_0_0;
IL2CPP_EXTERN_C void AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_0_0_0;
IL2CPP_EXTERN_C void AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_0_0_0;
IL2CPP_EXTERN_C void AsyncReadManagerMetricsFilters_t8345AB04A9736805407C88046E48E05CE9CEB626_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void AsyncReadManagerMetricsFilters_t8345AB04A9736805407C88046E48E05CE9CEB626_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void AsyncReadManagerMetricsFilters_t8345AB04A9736805407C88046E48E05CE9CEB626_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType AsyncReadManagerMetricsFilters_t8345AB04A9736805407C88046E48E05CE9CEB626_0_0_0;
IL2CPP_EXTERN_C void AsyncReadManagerRequestMetric_t41C6C9C513C5E798C5D4A9BD4A04216D42458B13_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void AsyncReadManagerRequestMetric_t41C6C9C513C5E798C5D4A9BD4A04216D42458B13_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void AsyncReadManagerRequestMetric_t41C6C9C513C5E798C5D4A9BD4A04216D42458B13_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType AsyncReadManagerRequestMetric_t41C6C9C513C5E798C5D4A9BD4A04216D42458B13_0_0_0;
IL2CPP_EXTERN_C void AsyncResult_t125D959CA0F9FB74EF9F7DF4E04F15BB1B265760_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void AsyncResult_t125D959CA0F9FB74EF9F7DF4E04F15BB1B265760_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void AsyncResult_t125D959CA0F9FB74EF9F7DF4E04F15BB1B265760_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType AsyncResult_t125D959CA0F9FB74EF9F7DF4E04F15BB1B265760_0_0_0;
IL2CPP_EXTERN_C void AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_0_0_0;
IL2CPP_EXTERN_C void AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D_0_0_0;
IL2CPP_EXTERN_C void AttrManyRegSym_tDAA23879FAD53E78F5F085445D07B8FBB129A380_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void AttrManyRegSym_tDAA23879FAD53E78F5F085445D07B8FBB129A380_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void AttrManyRegSym_tDAA23879FAD53E78F5F085445D07B8FBB129A380_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType AttrManyRegSym_tDAA23879FAD53E78F5F085445D07B8FBB129A380_0_0_0;
IL2CPP_EXTERN_C void AttrManyRegSym2_t01559DE2DE2BE48AB9D1C3F56320EE6BF6239636_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void AttrManyRegSym2_t01559DE2DE2BE48AB9D1C3F56320EE6BF6239636_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void AttrManyRegSym2_t01559DE2DE2BE48AB9D1C3F56320EE6BF6239636_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType AttrManyRegSym2_t01559DE2DE2BE48AB9D1C3F56320EE6BF6239636_0_0_0;
IL2CPP_EXTERN_C void AttrRegRel_t35EEE140BEBD246FA051EC68383730308E63D97C_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void AttrRegRel_t35EEE140BEBD246FA051EC68383730308E63D97C_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void AttrRegRel_t35EEE140BEBD246FA051EC68383730308E63D97C_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType AttrRegRel_t35EEE140BEBD246FA051EC68383730308E63D97C_0_0_0;
IL2CPP_EXTERN_C void AttrRegSym_tF535B762E5D0D1F76241E37350DE82064E8E6587_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void AttrRegSym_tF535B762E5D0D1F76241E37350DE82064E8E6587_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void AttrRegSym_tF535B762E5D0D1F76241E37350DE82064E8E6587_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType AttrRegSym_tF535B762E5D0D1F76241E37350DE82064E8E6587_0_0_0;
IL2CPP_EXTERN_C void AttrSlotSym_tB38238AB4F7158637CFC3E72D6CFB77B1314DF12_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void AttrSlotSym_tB38238AB4F7158637CFC3E72D6CFB77B1314DF12_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void AttrSlotSym_tB38238AB4F7158637CFC3E72D6CFB77B1314DF12_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType AttrSlotSym_tB38238AB4F7158637CFC3E72D6CFB77B1314DF12_0_0_0;
IL2CPP_EXTERN_C void Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8_0_0_0;
IL2CPP_EXTERN_C void BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10_0_0_0;
IL2CPP_EXTERN_C void BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_0_0_0;
IL2CPP_EXTERN_C void BitSet_t403E96153804F8C5C75892E92AFD66AFD9F23432_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void BitSet_t403E96153804F8C5C75892E92AFD66AFD9F23432_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void BitSet_t403E96153804F8C5C75892E92AFD66AFD9F23432_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType BitSet_t403E96153804F8C5C75892E92AFD66AFD9F23432_0_0_0;
IL2CPP_EXTERN_C void BitmapAllocator32_t87110600670688D0E149D61E1BDA8F45ADC59C73_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void BitmapAllocator32_t87110600670688D0E149D61E1BDA8F45ADC59C73_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void BitmapAllocator32_t87110600670688D0E149D61E1BDA8F45ADC59C73_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType BitmapAllocator32_t87110600670688D0E149D61E1BDA8F45ADC59C73_0_0_0;
IL2CPP_EXTERN_C void BlockSym32_t3ADE51D8C9A1C7F13694D8234519A31B10885520_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void BlockSym32_t3ADE51D8C9A1C7F13694D8234519A31B10885520_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void BlockSym32_t3ADE51D8C9A1C7F13694D8234519A31B10885520_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType BlockSym32_t3ADE51D8C9A1C7F13694D8234519A31B10885520_0_0_0;
IL2CPP_EXTERN_C void BpRelSym32_t432260FE83EB60F5A5AF97446405E4BA4104DE77_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void BpRelSym32_t432260FE83EB60F5A5AF97446405E4BA4104DE77_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void BpRelSym32_t432260FE83EB60F5A5AF97446405E4BA4104DE77_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType BpRelSym32_t432260FE83EB60F5A5AF97446405E4BA4104DE77_0_0_0;
IL2CPP_EXTERN_C void BuildCompression_t78EB9F3307B431CFDACE8F8F1D277B82379904A1_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void BuildCompression_t78EB9F3307B431CFDACE8F8F1D277B82379904A1_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void BuildCompression_t78EB9F3307B431CFDACE8F8F1D277B82379904A1_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType BuildCompression_t78EB9F3307B431CFDACE8F8F1D277B82379904A1_0_0_0;
IL2CPP_EXTERN_C void CFlagSym_tED75A064BB9674C2DCC5C5857F3728A7A68D7772_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void CFlagSym_tED75A064BB9674C2DCC5C5857F3728A7A68D7772_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void CFlagSym_tED75A064BB9674C2DCC5C5857F3728A7A68D7772_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType CFlagSym_tED75A064BB9674C2DCC5C5857F3728A7A68D7772_0_0_0;
IL2CPP_EXTERN_C void CalendarData_t4A54E28AB4470E0B835605CAEE9BEB25EBF9B6A9_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void CalendarData_t4A54E28AB4470E0B835605CAEE9BEB25EBF9B6A9_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void CalendarData_t4A54E28AB4470E0B835605CAEE9BEB25EBF9B6A9_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType CalendarData_t4A54E28AB4470E0B835605CAEE9BEB25EBF9B6A9_0_0_0;
IL2CPP_EXTERN_C void CameraData_tC27AE109CD20677486A4AC19C0CF014AE0F50C3E_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void CameraData_tC27AE109CD20677486A4AC19C0CF014AE0F50C3E_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void CameraData_tC27AE109CD20677486A4AC19C0CF014AE0F50C3E_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType CameraData_tC27AE109CD20677486A4AC19C0CF014AE0F50C3E_0_0_0;
IL2CPP_EXTERN_C void CancellationCallbackCoreWorkArguments_t12DB960B203CDDF2119BC6A29ACA80175C15FAD0_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void CancellationCallbackCoreWorkArguments_t12DB960B203CDDF2119BC6A29ACA80175C15FAD0_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void CancellationCallbackCoreWorkArguments_t12DB960B203CDDF2119BC6A29ACA80175C15FAD0_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType CancellationCallbackCoreWorkArguments_t12DB960B203CDDF2119BC6A29ACA80175C15FAD0_0_0_0;
IL2CPP_EXTERN_C void CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_0_0_0;
IL2CPP_EXTERN_C void CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389_0_0_0;
IL2CPP_EXTERN_C void CapturedScope_t8253C4F1790C0BB4F90B7AC921FA800D52A6BF9C_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void CapturedScope_t8253C4F1790C0BB4F90B7AC921FA800D52A6BF9C_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void CapturedScope_t8253C4F1790C0BB4F90B7AC921FA800D52A6BF9C_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType CapturedScope_t8253C4F1790C0BB4F90B7AC921FA800D52A6BF9C_0_0_0;
IL2CPP_EXTERN_C void CapturedVariable_tDB5D06C879458BF76D83797147E3BF83A164B297_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void CapturedVariable_tDB5D06C879458BF76D83797147E3BF83A164B297_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void CapturedVariable_tDB5D06C879458BF76D83797147E3BF83A164B297_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType CapturedVariable_tDB5D06C879458BF76D83797147E3BF83A164B297_0_0_0;
IL2CPP_EXTERN_C void CertificateData_t40A99242A632202B3115D05913ED12CAA78F65B1_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void CertificateData_t40A99242A632202B3115D05913ED12CAA78F65B1_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void CertificateData_t40A99242A632202B3115D05913ED12CAA78F65B1_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType CertificateData_t40A99242A632202B3115D05913ED12CAA78F65B1_0_0_0;
IL2CPP_EXTERN_C void CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_0_0_0;
IL2CPP_EXTERN_C void CoffGroupSym_tE56163A74BAD82372DEBC47C956F18D711F65CE9_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void CoffGroupSym_tE56163A74BAD82372DEBC47C956F18D711F65CE9_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void CoffGroupSym_tE56163A74BAD82372DEBC47C956F18D711F65CE9_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType CoffGroupSym_tE56163A74BAD82372DEBC47C956F18D711F65CE9_0_0_0;
IL2CPP_EXTERN_C void Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0_0_0_0;
IL2CPP_EXTERN_C void Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B_0_0_0;
IL2CPP_EXTERN_C void ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0_0_0_0;
IL2CPP_EXTERN_C void ColorTween_t15AEF379B51AC7DF9B23C440A938DCF32DA3FBB7_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ColorTween_t15AEF379B51AC7DF9B23C440A938DCF32DA3FBB7_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ColorTween_t15AEF379B51AC7DF9B23C440A938DCF32DA3FBB7_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ColorTween_t15AEF379B51AC7DF9B23C440A938DCF32DA3FBB7_0_0_0;
IL2CPP_EXTERN_C void ComparableOption_t7744108EA61AA1DD5522E6BD80C829B4A9FABFD3_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ComparableOption_t7744108EA61AA1DD5522E6BD80C829B4A9FABFD3_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ComparableOption_t7744108EA61AA1DD5522E6BD80C829B4A9FABFD3_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ComparableOption_t7744108EA61AA1DD5522E6BD80C829B4A9FABFD3_0_0_0;
IL2CPP_EXTERN_C void CompileSym_t87A309831A1AA109E61DD3C515CE6C4C5156AAFF_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void CompileSym_t87A309831A1AA109E61DD3C515CE6C4C5156AAFF_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void CompileSym_t87A309831A1AA109E61DD3C515CE6C4C5156AAFF_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType CompileSym_t87A309831A1AA109E61DD3C515CE6C4C5156AAFF_0_0_0;
IL2CPP_EXTERN_C void ComputeBufferDesc_t4AFBC6F02239B19810A79101771BBE76388524F4_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ComputeBufferDesc_t4AFBC6F02239B19810A79101771BBE76388524F4_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ComputeBufferDesc_t4AFBC6F02239B19810A79101771BBE76388524F4_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ComputeBufferDesc_t4AFBC6F02239B19810A79101771BBE76388524F4_0_0_0;
IL2CPP_EXTERN_C void ComputedStyle_t8B08CCCEE20525528B3FFDAC6D3F58F101AAF54C_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ComputedStyle_t8B08CCCEE20525528B3FFDAC6D3F58F101AAF54C_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ComputedStyle_t8B08CCCEE20525528B3FFDAC6D3F58F101AAF54C_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ComputedStyle_t8B08CCCEE20525528B3FFDAC6D3F58F101AAF54C_0_0_0;
IL2CPP_EXTERN_C void ComputedTransitionProperty_tD8E4D8EB5DD69E063944F27A48D9263F4F1354E1_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ComputedTransitionProperty_tD8E4D8EB5DD69E063944F27A48D9263F4F1354E1_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ComputedTransitionProperty_tD8E4D8EB5DD69E063944F27A48D9263F4F1354E1_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ComputedTransitionProperty_tD8E4D8EB5DD69E063944F27A48D9263F4F1354E1_0_0_0;
IL2CPP_EXTERN_C void ConfiguredTaskAwaitable_tABE012B321A51A20F0D34F8122B9EAE3A054875C_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ConfiguredTaskAwaitable_tABE012B321A51A20F0D34F8122B9EAE3A054875C_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ConfiguredTaskAwaitable_tABE012B321A51A20F0D34F8122B9EAE3A054875C_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ConfiguredTaskAwaitable_tABE012B321A51A20F0D34F8122B9EAE3A054875C_0_0_0;
IL2CPP_EXTERN_C void ConsoleKeyInfo_t84640C60F53D0F6946B147ADAAF0366BBF1DE900_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ConsoleKeyInfo_t84640C60F53D0F6946B147ADAAF0366BBF1DE900_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ConsoleKeyInfo_t84640C60F53D0F6946B147ADAAF0366BBF1DE900_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ConsoleKeyInfo_t84640C60F53D0F6946B147ADAAF0366BBF1DE900_0_0_0;
IL2CPP_EXTERN_C void ConstSym_tAA484F2F862E9CBF7126B68D8CF53F9729E5549B_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ConstSym_tAA484F2F862E9CBF7126B68D8CF53F9729E5549B_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ConstSym_tAA484F2F862E9CBF7126B68D8CF53F9729E5549B_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ConstSym_tAA484F2F862E9CBF7126B68D8CF53F9729E5549B_0_0_0;
IL2CPP_EXTERN_C void ContactFilter2D_t54A8515C326BF7DA16E5DE97EA7D3CD9B2F77F14_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ContactFilter2D_t54A8515C326BF7DA16E5DE97EA7D3CD9B2F77F14_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ContactFilter2D_t54A8515C326BF7DA16E5DE97EA7D3CD9B2F77F14_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ContactFilter2D_t54A8515C326BF7DA16E5DE97EA7D3CD9B2F77F14_0_0_0;
IL2CPP_EXTERN_C void Context_t2CCB8C97E2B9649D3A11A72438694220AEA6CF95_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Context_t2CCB8C97E2B9649D3A11A72438694220AEA6CF95_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Context_t2CCB8C97E2B9649D3A11A72438694220AEA6CF95_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Context_t2CCB8C97E2B9649D3A11A72438694220AEA6CF95_0_0_0;
IL2CPP_EXTERN_C void ContourVertex_t58C64DD8B2209C868718C7B50657707A15EEEF32_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ContourVertex_t58C64DD8B2209C868718C7B50657707A15EEEF32_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ContourVertex_t58C64DD8B2209C868718C7B50657707A15EEEF32_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ContourVertex_t58C64DD8B2209C868718C7B50657707A15EEEF32_0_0_0;
IL2CPP_EXTERN_C void ControllerColliderHit_tD0B734CBE0E2B089339B14600EB5A80295F6DE92_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ControllerColliderHit_tD0B734CBE0E2B089339B14600EB5A80295F6DE92_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ControllerColliderHit_tD0B734CBE0E2B089339B14600EB5A80295F6DE92_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ControllerColliderHit_tD0B734CBE0E2B089339B14600EB5A80295F6DE92_0_0_0;
IL2CPP_EXTERN_C void Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_0_0_0;
IL2CPP_EXTERN_C void CreationContext_t9C57B5BE551CCE200C0A2C72711BFF9DA298C257_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void CreationContext_t9C57B5BE551CCE200C0A2C72711BFF9DA298C257_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void CreationContext_t9C57B5BE551CCE200C0A2C72711BFF9DA298C257_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType CreationContext_t9C57B5BE551CCE200C0A2C72711BFF9DA298C257_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_CrossContextDelegate_t770FF83DFE79BBDEECEDDF4B0AA61D087C37F7A3();
IL2CPP_EXTERN_C_CONST RuntimeType CrossContextDelegate_t770FF83DFE79BBDEECEDDF4B0AA61D087C37F7A3_0_0_0;
IL2CPP_EXTERN_C void CullingGroup_t0732D3CC044BAE2BE39748CBF5D96DDB6DBF62E7_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void CullingGroup_t0732D3CC044BAE2BE39748CBF5D96DDB6DBF62E7_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void CullingGroup_t0732D3CC044BAE2BE39748CBF5D96DDB6DBF62E7_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType CullingGroup_t0732D3CC044BAE2BE39748CBF5D96DDB6DBF62E7_0_0_0;
IL2CPP_EXTERN_C void CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_0_0_0;
IL2CPP_EXTERN_C void CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_0_0_0;
IL2CPP_EXTERN_C void Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82_0_0_0;
IL2CPP_EXTERN_C void CursorPositionStylePainterParameters_tB79C17871EE8D6764B717689E7E93478D54BC81A_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void CursorPositionStylePainterParameters_tB79C17871EE8D6764B717689E7E93478D54BC81A_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void CursorPositionStylePainterParameters_tB79C17871EE8D6764B717689E7E93478D54BC81A_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType CursorPositionStylePainterParameters_tB79C17871EE8D6764B717689E7E93478D54BC81A_0_0_0;
IL2CPP_EXTERN_C void CustomAttributeArgument_t264D7BFDE14663E3B4A7DB666632DABEB2F3FE14_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void CustomAttributeArgument_t264D7BFDE14663E3B4A7DB666632DABEB2F3FE14_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void CustomAttributeArgument_t264D7BFDE14663E3B4A7DB666632DABEB2F3FE14_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType CustomAttributeArgument_t264D7BFDE14663E3B4A7DB666632DABEB2F3FE14_0_0_0;
IL2CPP_EXTERN_C void CustomAttributeNamedArgument_t768EA445EA2AD5BC0C8632CD26402524C69B0405_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void CustomAttributeNamedArgument_t768EA445EA2AD5BC0C8632CD26402524C69B0405_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void CustomAttributeNamedArgument_t768EA445EA2AD5BC0C8632CD26402524C69B0405_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType CustomAttributeNamedArgument_t768EA445EA2AD5BC0C8632CD26402524C69B0405_0_0_0;
IL2CPP_EXTERN_C void CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02_0_0_0;
IL2CPP_EXTERN_C void CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F_0_0_0;
IL2CPP_EXTERN_C void DSAParameters_t2FA923FEA7E2DB5515EE54A7E86B0401D025E0E9_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void DSAParameters_t2FA923FEA7E2DB5515EE54A7E86B0401D025E0E9_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void DSAParameters_t2FA923FEA7E2DB5515EE54A7E86B0401D025E0E9_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType DSAParameters_t2FA923FEA7E2DB5515EE54A7E86B0401D025E0E9_0_0_0;
IL2CPP_EXTERN_C void DatasSym32_t67DC75EF72EF4626E4415CF4F99CD334B1F63BF0_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void DatasSym32_t67DC75EF72EF4626E4415CF4F99CD334B1F63BF0_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void DatasSym32_t67DC75EF72EF4626E4415CF4F99CD334B1F63BF0_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType DatasSym32_t67DC75EF72EF4626E4415CF4F99CD334B1F63BF0_0_0_0;
IL2CPP_EXTERN_C void DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03_0_0_0;
IL2CPP_EXTERN_C void DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722_0_0_0;
IL2CPP_EXTERN_C void DaylightTimeStruct_tB667DCA32C2FA55FEFB2D8D3A871D4A5BF97CED1_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void DaylightTimeStruct_tB667DCA32C2FA55FEFB2D8D3A871D4A5BF97CED1_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void DaylightTimeStruct_tB667DCA32C2FA55FEFB2D8D3A871D4A5BF97CED1_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType DaylightTimeStruct_tB667DCA32C2FA55FEFB2D8D3A871D4A5BF97CED1_0_0_0;
IL2CPP_EXTERN_C void DecryptFileInfo_tFE2E173F2F6F4CFC1FF46B133FD856B9EA382321_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void DecryptFileInfo_tFE2E173F2F6F4CFC1FF46B133FD856B9EA382321_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void DecryptFileInfo_tFE2E173F2F6F4CFC1FF46B133FD856B9EA382321_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType DecryptFileInfo_tFE2E173F2F6F4CFC1FF46B133FD856B9EA382321_0_0_0;
IL2CPP_EXTERN_C void DefRangeSym2_tEEDCFBAC347208C68FA8DCF148360EA1D8DF6A9A_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void DefRangeSym2_tEEDCFBAC347208C68FA8DCF148360EA1D8DF6A9A_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void DefRangeSym2_tEEDCFBAC347208C68FA8DCF148360EA1D8DF6A9A_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType DefRangeSym2_tEEDCFBAC347208C68FA8DCF148360EA1D8DF6A9A_0_0_0;
IL2CPP_EXTERN_C void DeferredTiler_t2F171ACEF3B3A64DDAC0C713A2358FFE9D169F8F_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void DeferredTiler_t2F171ACEF3B3A64DDAC0C713A2358FFE9D169F8F_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void DeferredTiler_t2F171ACEF3B3A64DDAC0C713A2358FFE9D169F8F_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType DeferredTiler_t2F171ACEF3B3A64DDAC0C713A2358FFE9D169F8F_0_0_0;
IL2CPP_EXTERN_C void Delegate_t_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Delegate_t_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Delegate_t_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Delegate_t_0_0_0;
IL2CPP_EXTERN_C void DiagnosticSwitch_tAE0C76FAF862A896635161E04F86BE637513D294_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void DiagnosticSwitch_tAE0C76FAF862A896635161E04F86BE637513D294_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void DiagnosticSwitch_tAE0C76FAF862A896635161E04F86BE637513D294_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType DiagnosticSwitch_tAE0C76FAF862A896635161E04F86BE637513D294_0_0_0;
IL2CPP_EXTERN_C void DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_0_0_0;
IL2CPP_EXTERN_C void DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB_0_0_0;
IL2CPP_EXTERN_C void DisableMediaInsertionPrompt_t874258833B73FEAAC32D1DB565E134D1439AB2F7_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void DisableMediaInsertionPrompt_t874258833B73FEAAC32D1DB565E134D1439AB2F7_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void DisableMediaInsertionPrompt_t874258833B73FEAAC32D1DB565E134D1439AB2F7_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType DisableMediaInsertionPrompt_t874258833B73FEAAC32D1DB565E134D1439AB2F7_0_0_0;
IL2CPP_EXTERN_C void DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E_0_0_0;
IL2CPP_EXTERN_C void DiscardedSym_t15C088EB0581ACB9ABD785F1A986E57CDFE5089C_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void DiscardedSym_t15C088EB0581ACB9ABD785F1A986E57CDFE5089C_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void DiscardedSym_t15C088EB0581ACB9ABD785F1A986E57CDFE5089C_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType DiscardedSym_t15C088EB0581ACB9ABD785F1A986E57CDFE5089C_0_0_0;
IL2CPP_EXTERN_C void DiscriminatedUnion128_t158A67638C750CA116D14E74233F7A71BB64A845_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void DiscriminatedUnion128_t158A67638C750CA116D14E74233F7A71BB64A845_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void DiscriminatedUnion128_t158A67638C750CA116D14E74233F7A71BB64A845_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType DiscriminatedUnion128_t158A67638C750CA116D14E74233F7A71BB64A845_0_0_0;
IL2CPP_EXTERN_C void DiscriminatedUnion128Object_tECA5EAC1E6569E14514F2F13EE1D14422A5E51EE_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void DiscriminatedUnion128Object_tECA5EAC1E6569E14514F2F13EE1D14422A5E51EE_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void DiscriminatedUnion128Object_tECA5EAC1E6569E14514F2F13EE1D14422A5E51EE_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType DiscriminatedUnion128Object_tECA5EAC1E6569E14514F2F13EE1D14422A5E51EE_0_0_0;
IL2CPP_EXTERN_C void DiscriminatedUnion32_t037E85BE4E566838458239E0F028960CBAB916DA_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void DiscriminatedUnion32_t037E85BE4E566838458239E0F028960CBAB916DA_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void DiscriminatedUnion32_t037E85BE4E566838458239E0F028960CBAB916DA_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType DiscriminatedUnion32_t037E85BE4E566838458239E0F028960CBAB916DA_0_0_0;
IL2CPP_EXTERN_C void DiscriminatedUnion32Object_t664C8A18B754A6ECE96D1B6B519DFDD7BE993366_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void DiscriminatedUnion32Object_t664C8A18B754A6ECE96D1B6B519DFDD7BE993366_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void DiscriminatedUnion32Object_t664C8A18B754A6ECE96D1B6B519DFDD7BE993366_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType DiscriminatedUnion32Object_t664C8A18B754A6ECE96D1B6B519DFDD7BE993366_0_0_0;
IL2CPP_EXTERN_C void DiscriminatedUnion64_t7B7601E27B8677641FF5E8AC57A090EC43CFE956_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void DiscriminatedUnion64_t7B7601E27B8677641FF5E8AC57A090EC43CFE956_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void DiscriminatedUnion64_t7B7601E27B8677641FF5E8AC57A090EC43CFE956_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType DiscriminatedUnion64_t7B7601E27B8677641FF5E8AC57A090EC43CFE956_0_0_0;
IL2CPP_EXTERN_C void DiscriminatedUnion64Object_t34D562E9C5932CA068237EE371324DF9CE92089B_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void DiscriminatedUnion64Object_t34D562E9C5932CA068237EE371324DF9CE92089B_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void DiscriminatedUnion64Object_t34D562E9C5932CA068237EE371324DF9CE92089B_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType DiscriminatedUnion64Object_t34D562E9C5932CA068237EE371324DF9CE92089B_0_0_0;
IL2CPP_EXTERN_C void DiscriminatedUnionObject_t6C0E93E677B68C95DDD7DCA12A6C37B02E918782_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void DiscriminatedUnionObject_t6C0E93E677B68C95DDD7DCA12A6C37B02E918782_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void DiscriminatedUnionObject_t6C0E93E677B68C95DDD7DCA12A6C37B02E918782_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType DiscriminatedUnionObject_t6C0E93E677B68C95DDD7DCA12A6C37B02E918782_0_0_0;
IL2CPP_EXTERN_C void DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_0_0_0;
IL2CPP_EXTERN_C void DownloadHandlerAssetBundle_tCD9D8BA067912469251677D16DFCADD13CAD510C_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void DownloadHandlerAssetBundle_tCD9D8BA067912469251677D16DFCADD13CAD510C_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void DownloadHandlerAssetBundle_tCD9D8BA067912469251677D16DFCADD13CAD510C_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType DownloadHandlerAssetBundle_tCD9D8BA067912469251677D16DFCADD13CAD510C_0_0_0;
IL2CPP_EXTERN_C void DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974_0_0_0;
IL2CPP_EXTERN_C void DownloadHandlerFile_tD1342A7B8173C9ECC7B3BB9E1A7631D7AEFBD902_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void DownloadHandlerFile_tD1342A7B8173C9ECC7B3BB9E1A7631D7AEFBD902_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void DownloadHandlerFile_tD1342A7B8173C9ECC7B3BB9E1A7631D7AEFBD902_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType DownloadHandlerFile_tD1342A7B8173C9ECC7B3BB9E1A7631D7AEFBD902_0_0_0;
IL2CPP_EXTERN_C void DownloadHandlerScript_t42FD7363F738391BB1EA2552FF18F9FA7C0EE38B_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void DownloadHandlerScript_t42FD7363F738391BB1EA2552FF18F9FA7C0EE38B_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void DownloadHandlerScript_t42FD7363F738391BB1EA2552FF18F9FA7C0EE38B_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType DownloadHandlerScript_t42FD7363F738391BB1EA2552FF18F9FA7C0EE38B_0_0_0;
IL2CPP_EXTERN_C void ETAsyncTaskMethodBuilder_t6539D4B6A1CB6F6388453211D928A26188B68B0C_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ETAsyncTaskMethodBuilder_t6539D4B6A1CB6F6388453211D928A26188B68B0C_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ETAsyncTaskMethodBuilder_t6539D4B6A1CB6F6388453211D928A26188B68B0C_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ETAsyncTaskMethodBuilder_t6539D4B6A1CB6F6388453211D928A26188B68B0C_0_0_0;
IL2CPP_EXTERN_C void EncryptFileInfo_tDAA38B9CEBCA459FF3F31DB5DA2B6103979FA18B_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void EncryptFileInfo_tDAA38B9CEBCA459FF3F31DB5DA2B6103979FA18B_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void EncryptFileInfo_tDAA38B9CEBCA459FF3F31DB5DA2B6103979FA18B_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType EncryptFileInfo_tDAA38B9CEBCA459FF3F31DB5DA2B6103979FA18B_0_0_0;
IL2CPP_EXTERN_C void EncryptResult_tF9D7E801F11C360586AA064C31197C0BAC9DB26D_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void EncryptResult_tF9D7E801F11C360586AA064C31197C0BAC9DB26D_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void EncryptResult_tF9D7E801F11C360586AA064C31197C0BAC9DB26D_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType EncryptResult_tF9D7E801F11C360586AA064C31197C0BAC9DB26D_0_0_0;
IL2CPP_EXTERN_C void Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_0_0_0;
IL2CPP_EXTERN_C void Ephemeron_t74F279F5E7CF4A0CFC21C822431DD840572C6DA2_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Ephemeron_t74F279F5E7CF4A0CFC21C822431DD840572C6DA2_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Ephemeron_t74F279F5E7CF4A0CFC21C822431DD840572C6DA2_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Ephemeron_t74F279F5E7CF4A0CFC21C822431DD840572C6DA2_0_0_0;
IL2CPP_EXTERN_C void Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB_0_0_0;
IL2CPP_EXTERN_C void EventDispatcherGate_t75A9E135B6558D523DCFC5CF95B44F153A779097_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void EventDispatcherGate_t75A9E135B6558D523DCFC5CF95B44F153A779097_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void EventDispatcherGate_t75A9E135B6558D523DCFC5CF95B44F153A779097_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType EventDispatcherGate_t75A9E135B6558D523DCFC5CF95B44F153A779097_0_0_0;
IL2CPP_EXTERN_C void EventInterests_tF375F3296A6689BC4B016F237123DB5457515EC8_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void EventInterests_tF375F3296A6689BC4B016F237123DB5457515EC8_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void EventInterests_tF375F3296A6689BC4B016F237123DB5457515EC8_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType EventInterests_tF375F3296A6689BC4B016F237123DB5457515EC8_0_0_0;
IL2CPP_EXTERN_C void Exception_t_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Exception_t_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Exception_t_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Exception_t_0_0_0;
IL2CPP_EXTERN_C void ExceptionHandlingClause_t9FEDBA314A006A0A836538080D93D15758AA114B_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ExceptionHandlingClause_t9FEDBA314A006A0A836538080D93D15758AA114B_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ExceptionHandlingClause_t9FEDBA314A006A0A836538080D93D15758AA114B_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ExceptionHandlingClause_t9FEDBA314A006A0A836538080D93D15758AA114B_0_0_0;
IL2CPP_EXTERN_C void ExecutionContextSwitcher_tC30FBBA37AF7939CED1F80BF8A63BA1DFD07D708_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ExecutionContextSwitcher_tC30FBBA37AF7939CED1F80BF8A63BA1DFD07D708_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ExecutionContextSwitcher_tC30FBBA37AF7939CED1F80BF8A63BA1DFD07D708_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ExecutionContextSwitcher_tC30FBBA37AF7939CED1F80BF8A63BA1DFD07D708_0_0_0;
IL2CPP_EXTERN_C void ExportSym_t17E2ADFA8E6AA76AF1C7713C417334EF97B41B82_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ExportSym_t17E2ADFA8E6AA76AF1C7713C417334EF97B41B82_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ExportSym_t17E2ADFA8E6AA76AF1C7713C417334EF97B41B82_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ExportSym_t17E2ADFA8E6AA76AF1C7713C417334EF97B41B82_0_0_0;
IL2CPP_EXTERN_C void FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756_0_0_0;
IL2CPP_EXTERN_C void FailedToLoadScriptObject_t51C7A75B7D39FE935901EB6E75FE2D020AF14A89_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void FailedToLoadScriptObject_t51C7A75B7D39FE935901EB6E75FE2D020AF14A89_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void FailedToLoadScriptObject_t51C7A75B7D39FE935901EB6E75FE2D020AF14A89_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType FailedToLoadScriptObject_t51C7A75B7D39FE935901EB6E75FE2D020AF14A89_0_0_0;
IL2CPP_EXTERN_C void FastMemoryDesc_tAD0B2FF1E2C10081569B42C98F9E48DE366F7F4D_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void FastMemoryDesc_tAD0B2FF1E2C10081569B42C98F9E48DE366F7F4D_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void FastMemoryDesc_tAD0B2FF1E2C10081569B42C98F9E48DE366F7F4D_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType FastMemoryDesc_tAD0B2FF1E2C10081569B42C98F9E48DE366F7F4D_0_0_0;
IL2CPP_EXTERN_C void FloatTween_t11548A42FCB3B005DD83D77A529119381B2BB64A_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void FloatTween_t11548A42FCB3B005DD83D77A529119381B2BB64A_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void FloatTween_t11548A42FCB3B005DD83D77A529119381B2BB64A_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType FloatTween_t11548A42FCB3B005DD83D77A529119381B2BB64A_0_0_0;
IL2CPP_EXTERN_C void FontAssetCreationEditorSettings_t0FF28D2E78F090105C63C81F9E438A7B09E3EA52_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void FontAssetCreationEditorSettings_t0FF28D2E78F090105C63C81F9E438A7B09E3EA52_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void FontAssetCreationEditorSettings_t0FF28D2E78F090105C63C81F9E438A7B09E3EA52_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType FontAssetCreationEditorSettings_t0FF28D2E78F090105C63C81F9E438A7B09E3EA52_0_0_0;
IL2CPP_EXTERN_C void FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C_0_0_0;
IL2CPP_EXTERN_C void FontReference_t550791D5AA7787156C3A229C65D7E1AC4BF76172_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void FontReference_t550791D5AA7787156C3A229C65D7E1AC4BF76172_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void FontReference_t550791D5AA7787156C3A229C65D7E1AC4BF76172_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType FontReference_t550791D5AA7787156C3A229C65D7E1AC4BF76172_0_0_0;
IL2CPP_EXTERN_C void FontWeightPair_tB94169BD86D0DFC25D651F890B15991A3E0ADA42_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void FontWeightPair_tB94169BD86D0DFC25D651F890B15991A3E0ADA42_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void FontWeightPair_tB94169BD86D0DFC25D651F890B15991A3E0ADA42_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType FontWeightPair_tB94169BD86D0DFC25D651F890B15991A3E0ADA42_0_0_0;
IL2CPP_EXTERN_C void ForceAsyncAwaiter_t4F90D8A767F7504702D667A8E69AA7ACCD0B87C2_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ForceAsyncAwaiter_t4F90D8A767F7504702D667A8E69AA7ACCD0B87C2_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ForceAsyncAwaiter_t4F90D8A767F7504702D667A8E69AA7ACCD0B87C2_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ForceAsyncAwaiter_t4F90D8A767F7504702D667A8E69AA7ACCD0B87C2_0_0_0;
IL2CPP_EXTERN_C void FrameRelSym_t697F8E911353D361238C2B89B48832699AFE098E_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void FrameRelSym_t697F8E911353D361238C2B89B48832699AFE098E_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void FrameRelSym_t697F8E911353D361238C2B89B48832699AFE098E_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType FrameRelSym_t697F8E911353D361238C2B89B48832699AFE098E_0_0_0;
IL2CPP_EXTERN_C void GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_0_0_0;
IL2CPP_EXTERN_C void GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_0_0_0;
IL2CPP_EXTERN_C void GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_0_0_0;
IL2CPP_EXTERN_C void GlobalDynamicResolutionSettings_t2BF29E3CFADCD55F6AC2D35D728817B79264A9A0_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void GlobalDynamicResolutionSettings_t2BF29E3CFADCD55F6AC2D35D728817B79264A9A0_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void GlobalDynamicResolutionSettings_t2BF29E3CFADCD55F6AC2D35D728817B79264A9A0_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType GlobalDynamicResolutionSettings_t2BF29E3CFADCD55F6AC2D35D728817B79264A9A0_0_0_0;
IL2CPP_EXTERN_C void Glyph_t700CF8EBE04ED4AEAB520885AAA1B309E02A103F_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Glyph_t700CF8EBE04ED4AEAB520885AAA1B309E02A103F_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Glyph_t700CF8EBE04ED4AEAB520885AAA1B309E02A103F_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Glyph_t700CF8EBE04ED4AEAB520885AAA1B309E02A103F_0_0_0;
IL2CPP_EXTERN_C void Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_0_0_0;
IL2CPP_EXTERN_C void HashAlgorithmName_t7FCDC65C37365F7AFAAA96952D14F51676480A3F_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void HashAlgorithmName_t7FCDC65C37365F7AFAAA96952D14F51676480A3F_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void HashAlgorithmName_t7FCDC65C37365F7AFAAA96952D14F51676480A3F_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType HashAlgorithmName_t7FCDC65C37365F7AFAAA96952D14F51676480A3F_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_HeaderParser_t9BD3B896027A047C0DA68DC732ABC1B9A660AB67();
IL2CPP_EXTERN_C_CONST RuntimeType HeaderParser_t9BD3B896027A047C0DA68DC732ABC1B9A660AB67_0_0_0;
IL2CPP_EXTERN_C void HeaderVariantInfo_t99223ED0C557730FBD8AA572065B994254F3386A_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void HeaderVariantInfo_t99223ED0C557730FBD8AA572065B994254F3386A_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void HeaderVariantInfo_t99223ED0C557730FBD8AA572065B994254F3386A_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType HeaderVariantInfo_t99223ED0C557730FBD8AA572065B994254F3386A_0_0_0;
IL2CPP_EXTERN_C void HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8_0_0_0;
const Il2CppGuid IAdviseSink_t37C3EC848072ADC38380B8E6792BCFC7FB02F5A3::IID = { 0x10f, 0x0, 0x0, 0xc0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x46 };
IL2CPP_EXTERN_C_CONST RuntimeType IAdviseSink_t37C3EC848072ADC38380B8E6792BCFC7FB02F5A3_0_0_0;
const Il2CppGuid IDataObject_t47F2CDDF556578DD1CA1DD50B64223DE02046725::IID = { 0x10e, 0x0, 0x0, 0xc0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x46 };
IL2CPP_EXTERN_C_CONST RuntimeType IDataObject_t47F2CDDF556578DD1CA1DD50B64223DE02046725_0_0_0;
const Il2CppGuid IEnumFORMATETC_tA2975106C072DA4A2C01123C03B40E4C6A378D2C::IID = { 0x103, 0x0, 0x0, 0xc0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x46 };
IL2CPP_EXTERN_C_CONST RuntimeType IEnumFORMATETC_tA2975106C072DA4A2C01123C03B40E4C6A378D2C_0_0_0;
const Il2CppGuid IEnumSTATDATA_t74774EEE6E04C3CCE175B8F433428B4F2DCA23E7::IID = { 0x103, 0x0, 0x0, 0xc0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x46 };
IL2CPP_EXTERN_C_CONST RuntimeType IEnumSTATDATA_t74774EEE6E04C3CCE175B8F433428B4F2DCA23E7_0_0_0;
const Il2CppGuid IMetaDataEmit_tED2D8D4818050B8E1945A8A5BB85414139BDFE98::IID = { 0xba3fee4c, 0xecb9, 0x4e41, 0x83, 0xb7, 0x18, 0x3f, 0xa4, 0x1c, 0xd8, 0x59 };
IL2CPP_EXTERN_C_CONST RuntimeType IMetaDataEmit_tED2D8D4818050B8E1945A8A5BB85414139BDFE98_0_0_0;
const Il2CppGuid IMetaDataImport_tF05FD2344E376C091B8D54AFD5D8181A3C800785::IID = { 0x7dac8207, 0xd3ae, 0x4c75, 0x9b, 0x67, 0x92, 0x80, 0x1a, 0x49, 0x7d, 0x44 };
IL2CPP_EXTERN_C_CONST RuntimeType IMetaDataImport_tF05FD2344E376C091B8D54AFD5D8181A3C800785_0_0_0;
const Il2CppGuid IMoniker_tEB333F870BCBCEA3BB5D6CBC9C22909B568741A8::IID = { 0xf, 0x0, 0x0, 0xc0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x46 };
IL2CPP_EXTERN_C_CONST RuntimeType IMoniker_tEB333F870BCBCEA3BB5D6CBC9C22909B568741A8_0_0_0;
IL2CPP_EXTERN_C void IOAsyncResult_t667861995468DDF5B2CFED1940CC2BCEEDD2B374_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void IOAsyncResult_t667861995468DDF5B2CFED1940CC2BCEEDD2B374_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void IOAsyncResult_t667861995468DDF5B2CFED1940CC2BCEEDD2B374_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType IOAsyncResult_t667861995468DDF5B2CFED1940CC2BCEEDD2B374_0_0_0;
IL2CPP_EXTERN_C void IOSelectorJob_t988E3C2831A98169EFDB178A08E8548A4E90DD31_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void IOSelectorJob_t988E3C2831A98169EFDB178A08E8548A4E90DD31_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void IOSelectorJob_t988E3C2831A98169EFDB178A08E8548A4E90DD31_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType IOSelectorJob_t988E3C2831A98169EFDB178A08E8548A4E90DD31_0_0_0;
IL2CPP_EXTERN_C void IPPacketInformation_tCD16AD717AD72D36684D9CFFDA0F6B53CCD3249B_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void IPPacketInformation_tCD16AD717AD72D36684D9CFFDA0F6B53CCD3249B_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void IPPacketInformation_tCD16AD717AD72D36684D9CFFDA0F6B53CCD3249B_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType IPPacketInformation_tCD16AD717AD72D36684D9CFFDA0F6B53CCD3249B_0_0_0;
IL2CPP_EXTERN_C void IPv6AddressFormatter_t2EA33A2D57555121A5FB9BF403410B6D66233282_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void IPv6AddressFormatter_t2EA33A2D57555121A5FB9BF403410B6D66233282_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void IPv6AddressFormatter_t2EA33A2D57555121A5FB9BF403410B6D66233282_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType IPv6AddressFormatter_t2EA33A2D57555121A5FB9BF403410B6D66233282_0_0_0;
const Il2CppGuid IStream_tD557F2A7FBD3D478F37E3CBCAA456B6819902AF8::IID = { 0xc, 0x0, 0x0, 0xc0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x46 };
IL2CPP_EXTERN_C_CONST RuntimeType IStream_tD557F2A7FBD3D478F37E3CBCAA456B6819902AF8_0_0_0;
const Il2CppGuid ISymUnmanagedDocumentWriter_tA21FF6B5568131A7AA5AC8209D7C5B91DC935AA8::IID = { 0xb01fafeb, 0xc450, 0x3a4d, 0xbe, 0xec, 0xb4, 0xce, 0xec, 0x1, 0xe0, 0x6 };
IL2CPP_EXTERN_C_CONST RuntimeType ISymUnmanagedDocumentWriter_tA21FF6B5568131A7AA5AC8209D7C5B91DC935AA8_0_0_0;
const Il2CppGuid ISymUnmanagedWriter2_t736EB7F3A2D3D53D186BA91789FA620117286258::IID = { 0xb97726e, 0x9e6d, 0x4f05, 0x9a, 0x26, 0x42, 0x40, 0x22, 0x9, 0x3c, 0xaa };
IL2CPP_EXTERN_C_CONST RuntimeType ISymUnmanagedWriter2_t736EB7F3A2D3D53D186BA91789FA620117286258_0_0_0;
IL2CPP_EXTERN_C void ImageSource_t0990262FCFA5C1F3C695C53FB04A35F71CDD63B4_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ImageSource_t0990262FCFA5C1F3C695C53FB04A35F71CDD63B4_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ImageSource_t0990262FCFA5C1F3C695C53FB04A35F71CDD63B4_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ImageSource_t0990262FCFA5C1F3C695C53FB04A35F71CDD63B4_0_0_0;
IL2CPP_EXTERN_C void ImportGenericContext_t66AAA1F26B1C8CBE8C7333EF69E095A5548311FB_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ImportGenericContext_t66AAA1F26B1C8CBE8C7333EF69E095A5548311FB_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ImportGenericContext_t66AAA1F26B1C8CBE8C7333EF69E095A5548311FB_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ImportGenericContext_t66AAA1F26B1C8CBE8C7333EF69E095A5548311FB_0_0_0;
IL2CPP_EXTERN_C void InheritedData_t9CB0AE42B025C0BD86FEF0C979D5BFE15E188E67_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void InheritedData_t9CB0AE42B025C0BD86FEF0C979D5BFE15E188E67_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void InheritedData_t9CB0AE42B025C0BD86FEF0C979D5BFE15E188E67_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType InheritedData_t9CB0AE42B025C0BD86FEF0C979D5BFE15E188E67_0_0_0;
IL2CPP_EXTERN_C void InlineMethodInfo_tDF2F8974CD5D78C3689E7263ED8A1924F7A85EBE_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void InlineMethodInfo_tDF2F8974CD5D78C3689E7263ED8A1924F7A85EBE_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void InlineMethodInfo_tDF2F8974CD5D78C3689E7263ED8A1924F7A85EBE_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType InlineMethodInfo_tDF2F8974CD5D78C3689E7263ED8A1924F7A85EBE_0_0_0;
IL2CPP_EXTERN_C void InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD_0_0_0;
IL2CPP_EXTERN_C void InputDevices_t02B79FC19CEA9AC29A9945F5CDA6D790730FBF34_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void InputDevices_t02B79FC19CEA9AC29A9945F5CDA6D790730FBF34_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void InputDevices_t02B79FC19CEA9AC29A9945F5CDA6D790730FBF34_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType InputDevices_t02B79FC19CEA9AC29A9945F5CDA6D790730FBF34_0_0_0;
IL2CPP_EXTERN_C void InputFeatureUsage_t1E251DC4F8CD697080F0F5D98388955AF8B87599_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void InputFeatureUsage_t1E251DC4F8CD697080F0F5D98388955AF8B87599_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void InputFeatureUsage_t1E251DC4F8CD697080F0F5D98388955AF8B87599_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType InputFeatureUsage_t1E251DC4F8CD697080F0F5D98388955AF8B87599_0_0_0;
IL2CPP_EXTERN_C void InputRecord_tD3D7910851FC56517EE2767EB28725EE7C295526_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void InputRecord_tD3D7910851FC56517EE2767EB28725EE7C295526_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void InputRecord_tD3D7910851FC56517EE2767EB28725EE7C295526_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType InputRecord_tD3D7910851FC56517EE2767EB28725EE7C295526_0_0_0;
IL2CPP_EXTERN_C void InstructionArray_t462A6779CC45E6F5578352572B16A61954CB8117_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void InstructionArray_t462A6779CC45E6F5578352572B16A61954CB8117_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void InstructionArray_t462A6779CC45E6F5578352572B16A61954CB8117_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType InstructionArray_t462A6779CC45E6F5578352572B16A61954CB8117_0_0_0;
IL2CPP_EXTERN_C void InstructionOffset_tB686944DA41F57E4D92AE845DE655FDC9115AD1F_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void InstructionOffset_tB686944DA41F57E4D92AE845DE655FDC9115AD1F_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void InstructionOffset_tB686944DA41F57E4D92AE845DE655FDC9115AD1F_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType InstructionOffset_tB686944DA41F57E4D92AE845DE655FDC9115AD1F_0_0_0;
IL2CPP_EXTERN_C void IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3_0_0_0;
IL2CPP_EXTERN_C void IntegratedSubsystemDescriptor_t9232963B842E01748A8E032928DC8E35DF00C10D_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void IntegratedSubsystemDescriptor_t9232963B842E01748A8E032928DC8E35DF00C10D_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void IntegratedSubsystemDescriptor_t9232963B842E01748A8E032928DC8E35DF00C10D_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType IntegratedSubsystemDescriptor_t9232963B842E01748A8E032928DC8E35DF00C10D_0_0_0;
IL2CPP_EXTERN_C void InterfaceMapping_t4818CA9DD146752FBC643AD050582979B632D879_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void InterfaceMapping_t4818CA9DD146752FBC643AD050582979B632D879_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void InterfaceMapping_t4818CA9DD146752FBC643AD050582979B632D879_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType InterfaceMapping_t4818CA9DD146752FBC643AD050582979B632D879_0_0_0;
IL2CPP_EXTERN_C void InternalCodePageDataItem_t6B4913D6507B26FFAE0B805874644D3DBE78F316_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void InternalCodePageDataItem_t6B4913D6507B26FFAE0B805874644D3DBE78F316_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void InternalCodePageDataItem_t6B4913D6507B26FFAE0B805874644D3DBE78F316_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType InternalCodePageDataItem_t6B4913D6507B26FFAE0B805874644D3DBE78F316_0_0_0;
IL2CPP_EXTERN_C void InternalEncodingDataItem_t1D6DA6BCE8389C12ECC229A644D2CA45A86C06EB_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void InternalEncodingDataItem_t1D6DA6BCE8389C12ECC229A644D2CA45A86C06EB_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void InternalEncodingDataItem_t1D6DA6BCE8389C12ECC229A644D2CA45A86C06EB_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType InternalEncodingDataItem_t1D6DA6BCE8389C12ECC229A644D2CA45A86C06EB_0_0_0;
IL2CPP_EXTERN_C void InterpretedFrameInfo_tEF62B79D176B8D032C22953AA0D5B581C4076321_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void InterpretedFrameInfo_tEF62B79D176B8D032C22953AA0D5B581C4076321_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void InterpretedFrameInfo_tEF62B79D176B8D032C22953AA0D5B581C4076321_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType InterpretedFrameInfo_tEF62B79D176B8D032C22953AA0D5B581C4076321_0_0_0;
IL2CPP_EXTERN_C void InvocationContext_t61CA8790B5D5ABADCF9DD4581CE465221C67DDC1_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void InvocationContext_t61CA8790B5D5ABADCF9DD4581CE465221C67DDC1_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void InvocationContext_t61CA8790B5D5ABADCF9DD4581CE465221C67DDC1_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType InvocationContext_t61CA8790B5D5ABADCF9DD4581CE465221C67DDC1_0_0_0;
IL2CPP_EXTERN_C void JITCompiler_tC86D7253C6877F1CFF8CA4617CD766CC7460B965_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void JITCompiler_tC86D7253C6877F1CFF8CA4617CD766CC7460B965_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void JITCompiler_tC86D7253C6877F1CFF8CA4617CD766CC7460B965_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType JITCompiler_tC86D7253C6877F1CFF8CA4617CD766CC7460B965_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_KcpLog_t166A3A6F579F69B0AA700460B0BF73A4B8C07C5F();
IL2CPP_EXTERN_C_CONST RuntimeType KcpLog_t166A3A6F579F69B0AA700460B0BF73A4B8C07C5F_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_KcpOutput_t70A2E75BF30C9F6BBFA7EDCCF748E5F9C25F6732();
IL2CPP_EXTERN_C_CONST RuntimeType KcpOutput_t70A2E75BF30C9F6BBFA7EDCCF748E5F9C25F6732_0_0_0;
IL2CPP_EXTERN_C void KcpWaitPacket_t7299EC47BEB86C4A5D9CA00CE65CC7DD9E55DDE0_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void KcpWaitPacket_t7299EC47BEB86C4A5D9CA00CE65CC7DD9E55DDE0_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void KcpWaitPacket_t7299EC47BEB86C4A5D9CA00CE65CC7DD9E55DDE0_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType KcpWaitPacket_t7299EC47BEB86C4A5D9CA00CE65CC7DD9E55DDE0_0_0_0;
IL2CPP_EXTERN_C void LabelSym32_t2326FA82DA839BA7BE35E54FEE18FE62EE3136C1_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void LabelSym32_t2326FA82DA839BA7BE35E54FEE18FE62EE3136C1_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void LabelSym32_t2326FA82DA839BA7BE35E54FEE18FE62EE3136C1_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType LabelSym32_t2326FA82DA839BA7BE35E54FEE18FE62EE3136C1_0_0_0;
IL2CPP_EXTERN_C void LayerBatch_tEC81EE605197FE053EB5C65E38CFD93D9A6B75BC_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void LayerBatch_tEC81EE605197FE053EB5C65E38CFD93D9A6B75BC_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void LayerBatch_tEC81EE605197FE053EB5C65E38CFD93D9A6B75BC_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType LayerBatch_tEC81EE605197FE053EB5C65E38CFD93D9A6B75BC_0_0_0;
IL2CPP_EXTERN_C void LeafAlias_tFE225225044CDF0B7A9CE704F1A787F33C879540_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void LeafAlias_tFE225225044CDF0B7A9CE704F1A787F33C879540_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void LeafAlias_tFE225225044CDF0B7A9CE704F1A787F33C879540_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType LeafAlias_tFE225225044CDF0B7A9CE704F1A787F33C879540_0_0_0;
IL2CPP_EXTERN_C void LeafArgList_tA7E626C075138A076D3E8E3D9B92F2283C0541F9_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void LeafArgList_tA7E626C075138A076D3E8E3D9B92F2283C0541F9_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void LeafArgList_tA7E626C075138A076D3E8E3D9B92F2283C0541F9_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType LeafArgList_tA7E626C075138A076D3E8E3D9B92F2283C0541F9_0_0_0;
IL2CPP_EXTERN_C void LeafArray_t6F93F06E1960D8B7FFD2708C153AD9CAEC9BE8E5_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void LeafArray_t6F93F06E1960D8B7FFD2708C153AD9CAEC9BE8E5_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void LeafArray_t6F93F06E1960D8B7FFD2708C153AD9CAEC9BE8E5_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType LeafArray_t6F93F06E1960D8B7FFD2708C153AD9CAEC9BE8E5_0_0_0;
IL2CPP_EXTERN_C void LeafBClass_t2BD5C6F67E0E0205CDEACBE7E28923605E9DF147_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void LeafBClass_t2BD5C6F67E0E0205CDEACBE7E28923605E9DF147_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void LeafBClass_t2BD5C6F67E0E0205CDEACBE7E28923605E9DF147_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType LeafBClass_t2BD5C6F67E0E0205CDEACBE7E28923605E9DF147_0_0_0;
IL2CPP_EXTERN_C void LeafClass_tC2693BBAE88AA54200B17981E81A4A5599526621_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void LeafClass_tC2693BBAE88AA54200B17981E81A4A5599526621_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void LeafClass_tC2693BBAE88AA54200B17981E81A4A5599526621_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType LeafClass_tC2693BBAE88AA54200B17981E81A4A5599526621_0_0_0;
IL2CPP_EXTERN_C void LeafCobol0_t8D9BADBE5BBA9A862A056E5F2BC5CD556140A36C_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void LeafCobol0_t8D9BADBE5BBA9A862A056E5F2BC5CD556140A36C_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void LeafCobol0_t8D9BADBE5BBA9A862A056E5F2BC5CD556140A36C_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType LeafCobol0_t8D9BADBE5BBA9A862A056E5F2BC5CD556140A36C_0_0_0;
IL2CPP_EXTERN_C void LeafCobol1_t7CF990026BFB72B2B6058CC2CBC479DFDCD92F38_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void LeafCobol1_t7CF990026BFB72B2B6058CC2CBC479DFDCD92F38_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void LeafCobol1_t7CF990026BFB72B2B6058CC2CBC479DFDCD92F38_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType LeafCobol1_t7CF990026BFB72B2B6058CC2CBC479DFDCD92F38_0_0_0;
IL2CPP_EXTERN_C void LeafDefArg_t0063834BC21F585C177635958F36E8EE8EF73A36_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void LeafDefArg_t0063834BC21F585C177635958F36E8EE8EF73A36_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void LeafDefArg_t0063834BC21F585C177635958F36E8EE8EF73A36_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType LeafDefArg_t0063834BC21F585C177635958F36E8EE8EF73A36_0_0_0;
IL2CPP_EXTERN_C void LeafDerived_t9F6B2BFC27A3FB4989B9C9722C7E1F66CD73EC34_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void LeafDerived_t9F6B2BFC27A3FB4989B9C9722C7E1F66CD73EC34_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void LeafDerived_t9F6B2BFC27A3FB4989B9C9722C7E1F66CD73EC34_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType LeafDerived_t9F6B2BFC27A3FB4989B9C9722C7E1F66CD73EC34_0_0_0;
IL2CPP_EXTERN_C void LeafDimArray_tBE34ABB9103A2256EE714636B85B6236C82AAF43_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void LeafDimArray_tBE34ABB9103A2256EE714636B85B6236C82AAF43_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void LeafDimArray_tBE34ABB9103A2256EE714636B85B6236C82AAF43_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType LeafDimArray_tBE34ABB9103A2256EE714636B85B6236C82AAF43_0_0_0;
IL2CPP_EXTERN_C void LeafDimCon_t5DAC6FE74714261B54D1B0134374D88D0F9B61BF_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void LeafDimCon_t5DAC6FE74714261B54D1B0134374D88D0F9B61BF_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void LeafDimCon_t5DAC6FE74714261B54D1B0134374D88D0F9B61BF_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType LeafDimCon_t5DAC6FE74714261B54D1B0134374D88D0F9B61BF_0_0_0;
IL2CPP_EXTERN_C void LeafDimVar_t28BCAADFFB264CCECBB768A70BBCD55A8323F0F2_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void LeafDimVar_t28BCAADFFB264CCECBB768A70BBCD55A8323F0F2_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void LeafDimVar_t28BCAADFFB264CCECBB768A70BBCD55A8323F0F2_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType LeafDimVar_t28BCAADFFB264CCECBB768A70BBCD55A8323F0F2_0_0_0;
IL2CPP_EXTERN_C void LeafEnum_tBBB4F01A4FC2E2ED21E7274F93AEF53B88D7E272_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void LeafEnum_tBBB4F01A4FC2E2ED21E7274F93AEF53B88D7E272_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void LeafEnum_tBBB4F01A4FC2E2ED21E7274F93AEF53B88D7E272_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType LeafEnum_tBBB4F01A4FC2E2ED21E7274F93AEF53B88D7E272_0_0_0;
IL2CPP_EXTERN_C void LeafEnumerate_t100D05CF04AE6EC0EBC4A72EC04EBA14D8BBD08B_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void LeafEnumerate_t100D05CF04AE6EC0EBC4A72EC04EBA14D8BBD08B_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void LeafEnumerate_t100D05CF04AE6EC0EBC4A72EC04EBA14D8BBD08B_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType LeafEnumerate_t100D05CF04AE6EC0EBC4A72EC04EBA14D8BBD08B_0_0_0;
IL2CPP_EXTERN_C void LeafFieldList_t7BECAE38692A8CE3FB878D8CE4042A9D5D834BEC_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void LeafFieldList_t7BECAE38692A8CE3FB878D8CE4042A9D5D834BEC_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void LeafFieldList_t7BECAE38692A8CE3FB878D8CE4042A9D5D834BEC_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType LeafFieldList_t7BECAE38692A8CE3FB878D8CE4042A9D5D834BEC_0_0_0;
IL2CPP_EXTERN_C void LeafFriendFcn_tDDEA2FC9459DD91295934C94907E10401A42A193_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void LeafFriendFcn_tDDEA2FC9459DD91295934C94907E10401A42A193_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void LeafFriendFcn_tDDEA2FC9459DD91295934C94907E10401A42A193_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType LeafFriendFcn_tDDEA2FC9459DD91295934C94907E10401A42A193_0_0_0;
IL2CPP_EXTERN_C void LeafList_t8EBBD11F3626DF112EA61FBFE53A0CB0D74DC2EC_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void LeafList_t8EBBD11F3626DF112EA61FBFE53A0CB0D74DC2EC_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void LeafList_t8EBBD11F3626DF112EA61FBFE53A0CB0D74DC2EC_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType LeafList_t8EBBD11F3626DF112EA61FBFE53A0CB0D74DC2EC_0_0_0;
IL2CPP_EXTERN_C void LeafManaged_t5C0FB21DD212D6C79D66AD7809B569D3D3549B05_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void LeafManaged_t5C0FB21DD212D6C79D66AD7809B569D3D3549B05_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void LeafManaged_t5C0FB21DD212D6C79D66AD7809B569D3D3549B05_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType LeafManaged_t5C0FB21DD212D6C79D66AD7809B569D3D3549B05_0_0_0;
IL2CPP_EXTERN_C void LeafMember_tFEAEB350C842F8F5D5FFC9713EB02E4493574B18_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void LeafMember_tFEAEB350C842F8F5D5FFC9713EB02E4493574B18_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void LeafMember_tFEAEB350C842F8F5D5FFC9713EB02E4493574B18_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType LeafMember_tFEAEB350C842F8F5D5FFC9713EB02E4493574B18_0_0_0;
IL2CPP_EXTERN_C void LeafMemberModify_t73623A235C775C128E76C19CB5E2DC3C57B24CDD_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void LeafMemberModify_t73623A235C775C128E76C19CB5E2DC3C57B24CDD_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void LeafMemberModify_t73623A235C775C128E76C19CB5E2DC3C57B24CDD_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType LeafMemberModify_t73623A235C775C128E76C19CB5E2DC3C57B24CDD_0_0_0;
IL2CPP_EXTERN_C void LeafMethod_t4BD4BB7A7F933C06CFD9484A83FDB22409CD3ACE_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void LeafMethod_t4BD4BB7A7F933C06CFD9484A83FDB22409CD3ACE_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void LeafMethod_t4BD4BB7A7F933C06CFD9484A83FDB22409CD3ACE_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType LeafMethod_t4BD4BB7A7F933C06CFD9484A83FDB22409CD3ACE_0_0_0;
IL2CPP_EXTERN_C void LeafMethodList_t270AF28D434A8D7826E2CBC8FC42E095DB6BF50E_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void LeafMethodList_t270AF28D434A8D7826E2CBC8FC42E095DB6BF50E_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void LeafMethodList_t270AF28D434A8D7826E2CBC8FC42E095DB6BF50E_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType LeafMethodList_t270AF28D434A8D7826E2CBC8FC42E095DB6BF50E_0_0_0;
IL2CPP_EXTERN_C void LeafNestType_t8C3B3109FDE4FAFF0FB80965573B98351C80DC12_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void LeafNestType_t8C3B3109FDE4FAFF0FB80965573B98351C80DC12_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void LeafNestType_t8C3B3109FDE4FAFF0FB80965573B98351C80DC12_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType LeafNestType_t8C3B3109FDE4FAFF0FB80965573B98351C80DC12_0_0_0;
IL2CPP_EXTERN_C void LeafNestTypeEx_t82C3EA7F5C60C07202EC5EBF4EC7B4DC14BACAD7_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void LeafNestTypeEx_t82C3EA7F5C60C07202EC5EBF4EC7B4DC14BACAD7_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void LeafNestTypeEx_t82C3EA7F5C60C07202EC5EBF4EC7B4DC14BACAD7_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType LeafNestTypeEx_t82C3EA7F5C60C07202EC5EBF4EC7B4DC14BACAD7_0_0_0;
IL2CPP_EXTERN_C void LeafOEM_t8C19461C9485D73FA99F0431AE543E62FCA5B83F_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void LeafOEM_t8C19461C9485D73FA99F0431AE543E62FCA5B83F_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void LeafOEM_t8C19461C9485D73FA99F0431AE543E62FCA5B83F_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType LeafOEM_t8C19461C9485D73FA99F0431AE543E62FCA5B83F_0_0_0;
IL2CPP_EXTERN_C void LeafOEM2_t40DC156A41B42F849CEFAC8CBB00F40156CD270A_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void LeafOEM2_t40DC156A41B42F849CEFAC8CBB00F40156CD270A_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void LeafOEM2_t40DC156A41B42F849CEFAC8CBB00F40156CD270A_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType LeafOEM2_t40DC156A41B42F849CEFAC8CBB00F40156CD270A_0_0_0;
IL2CPP_EXTERN_C void LeafOneMethod_t0DF60CF9D042F18292B97F61EE01DA73B4EAAE0F_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void LeafOneMethod_t0DF60CF9D042F18292B97F61EE01DA73B4EAAE0F_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void LeafOneMethod_t0DF60CF9D042F18292B97F61EE01DA73B4EAAE0F_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType LeafOneMethod_t0DF60CF9D042F18292B97F61EE01DA73B4EAAE0F_0_0_0;
IL2CPP_EXTERN_C void LeafPreComp_t2B2B8CD694D97DCA264F160C22EC7CBA5D095772_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void LeafPreComp_t2B2B8CD694D97DCA264F160C22EC7CBA5D095772_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void LeafPreComp_t2B2B8CD694D97DCA264F160C22EC7CBA5D095772_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType LeafPreComp_t2B2B8CD694D97DCA264F160C22EC7CBA5D095772_0_0_0;
IL2CPP_EXTERN_C void LeafRefSym_t66F541303A6D57FAA051E0CF1198C4112393039A_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void LeafRefSym_t66F541303A6D57FAA051E0CF1198C4112393039A_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void LeafRefSym_t66F541303A6D57FAA051E0CF1198C4112393039A_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType LeafRefSym_t66F541303A6D57FAA051E0CF1198C4112393039A_0_0_0;
IL2CPP_EXTERN_C void LeafSTMember_tAE5103B0DDCA382EC7E443038E80FB94DECBFC17_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void LeafSTMember_tAE5103B0DDCA382EC7E443038E80FB94DECBFC17_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void LeafSTMember_tAE5103B0DDCA382EC7E443038E80FB94DECBFC17_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType LeafSTMember_tAE5103B0DDCA382EC7E443038E80FB94DECBFC17_0_0_0;
IL2CPP_EXTERN_C void LeafSkip_tB59D8DD0C1CB3FE478EC2FC0E250B56C813AFABF_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void LeafSkip_tB59D8DD0C1CB3FE478EC2FC0E250B56C813AFABF_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void LeafSkip_tB59D8DD0C1CB3FE478EC2FC0E250B56C813AFABF_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType LeafSkip_tB59D8DD0C1CB3FE478EC2FC0E250B56C813AFABF_0_0_0;
IL2CPP_EXTERN_C void LeafTypeServer_t150ADE52DF89B67986B7C5479953469871F80592_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void LeafTypeServer_t150ADE52DF89B67986B7C5479953469871F80592_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void LeafTypeServer_t150ADE52DF89B67986B7C5479953469871F80592_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType LeafTypeServer_t150ADE52DF89B67986B7C5479953469871F80592_0_0_0;
IL2CPP_EXTERN_C void LeafTypeServer2_tA4B42CD055A72F7DA60A8007380872002FFD1C70_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void LeafTypeServer2_tA4B42CD055A72F7DA60A8007380872002FFD1C70_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void LeafTypeServer2_tA4B42CD055A72F7DA60A8007380872002FFD1C70_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType LeafTypeServer2_tA4B42CD055A72F7DA60A8007380872002FFD1C70_0_0_0;
IL2CPP_EXTERN_C void LeafUnion_t20B39332937BD2C26EFD22E81FBD0ED4C1F95E10_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void LeafUnion_t20B39332937BD2C26EFD22E81FBD0ED4C1F95E10_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void LeafUnion_t20B39332937BD2C26EFD22E81FBD0ED4C1F95E10_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType LeafUnion_t20B39332937BD2C26EFD22E81FBD0ED4C1F95E10_0_0_0;
IL2CPP_EXTERN_C void LeafVBClass_tA734374CC3F8DF22155CCE876C8D5FC0C18A1D44_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void LeafVBClass_tA734374CC3F8DF22155CCE876C8D5FC0C18A1D44_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void LeafVBClass_tA734374CC3F8DF22155CCE876C8D5FC0C18A1D44_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType LeafVBClass_tA734374CC3F8DF22155CCE876C8D5FC0C18A1D44_0_0_0;
IL2CPP_EXTERN_C void LeafVFTPath_t9116CACD57822882028EA5B2C2C1FB55681C049A_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void LeafVFTPath_t9116CACD57822882028EA5B2C2C1FB55681C049A_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void LeafVFTPath_t9116CACD57822882028EA5B2C2C1FB55681C049A_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType LeafVFTPath_t9116CACD57822882028EA5B2C2C1FB55681C049A_0_0_0;
IL2CPP_EXTERN_C void LeafVTShape_t4425CBE9F3F0B1189C480F7AB26BE92BEAFF2FB7_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void LeafVTShape_t4425CBE9F3F0B1189C480F7AB26BE92BEAFF2FB7_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void LeafVTShape_t4425CBE9F3F0B1189C480F7AB26BE92BEAFF2FB7_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType LeafVTShape_t4425CBE9F3F0B1189C480F7AB26BE92BEAFF2FB7_0_0_0;
IL2CPP_EXTERN_C void LeafVarString_tFC47CB44F93FCAAF95A76FDE543952C0F094D2F5_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void LeafVarString_tFC47CB44F93FCAAF95A76FDE543952C0F094D2F5_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void LeafVarString_tFC47CB44F93FCAAF95A76FDE543952C0F094D2F5_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType LeafVarString_tFC47CB44F93FCAAF95A76FDE543952C0F094D2F5_0_0_0;
IL2CPP_EXTERN_C void Light2DBlendStyle_tD5C374DD9D54E8FA4BC495EA99F386F09B16B3D4_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Light2DBlendStyle_tD5C374DD9D54E8FA4BC495EA99F386F09B16B3D4_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Light2DBlendStyle_tD5C374DD9D54E8FA4BC495EA99F386F09B16B3D4_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Light2DBlendStyle_tD5C374DD9D54E8FA4BC495EA99F386F09B16B3D4_0_0_0;
IL2CPP_EXTERN_C void LightBakingOutput_t6212AB0B6B34C94F1982FE964FC48201854B5B90_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void LightBakingOutput_t6212AB0B6B34C94F1982FE964FC48201854B5B90_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void LightBakingOutput_t6212AB0B6B34C94F1982FE964FC48201854B5B90_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType LightBakingOutput_t6212AB0B6B34C94F1982FE964FC48201854B5B90_0_0_0;
IL2CPP_EXTERN_C void LightData_t6A82F1C9AA97327A5EE9C16A3E949918F3A55470_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void LightData_t6A82F1C9AA97327A5EE9C16A3E949918F3A55470_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void LightData_t6A82F1C9AA97327A5EE9C16A3E949918F3A55470_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType LightData_t6A82F1C9AA97327A5EE9C16A3E949918F3A55470_0_0_0;
IL2CPP_EXTERN_C void LightProbes_tB0E0051ED428658D51E611C9E4B6FE3A49EB094D_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void LightProbes_tB0E0051ED428658D51E611C9E4B6FE3A49EB094D_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void LightProbes_tB0E0051ED428658D51E611C9E4B6FE3A49EB094D_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType LightProbes_tB0E0051ED428658D51E611C9E4B6FE3A49EB094D_0_0_0;
IL2CPP_EXTERN_C void LinkInfo_tE85DDAFDFBDA635E6405C88EE4FD5941A9243DD8_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void LinkInfo_tE85DDAFDFBDA635E6405C88EE4FD5941A9243DD8_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void LinkInfo_tE85DDAFDFBDA635E6405C88EE4FD5941A9243DD8_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType LinkInfo_tE85DDAFDFBDA635E6405C88EE4FD5941A9243DD8_0_0_0;
IL2CPP_EXTERN_C void ListDragAndDropArgs_t12CC7206A73BE8F4D8126CD45DA6337DF8C91F53_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ListDragAndDropArgs_t12CC7206A73BE8F4D8126CD45DA6337DF8C91F53_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ListDragAndDropArgs_t12CC7206A73BE8F4D8126CD45DA6337DF8C91F53_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ListDragAndDropArgs_t12CC7206A73BE8F4D8126CD45DA6337DF8C91F53_0_0_0;
IL2CPP_EXTERN_C void LocalBuilder_tCB5AF342391604CED7394B81A931AB5BC6B97BB6_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void LocalBuilder_tCB5AF342391604CED7394B81A931AB5BC6B97BB6_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void LocalBuilder_tCB5AF342391604CED7394B81A931AB5BC6B97BB6_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType LocalBuilder_tCB5AF342391604CED7394B81A931AB5BC6B97BB6_0_0_0;
IL2CPP_EXTERN_C void LocalDefinition_t7B90DE35AAE919E1C79BA7EAFB99BF70589B1C02_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void LocalDefinition_t7B90DE35AAE919E1C79BA7EAFB99BF70589B1C02_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void LocalDefinition_t7B90DE35AAE919E1C79BA7EAFB99BF70589B1C02_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType LocalDefinition_t7B90DE35AAE919E1C79BA7EAFB99BF70589B1C02_0_0_0;
IL2CPP_EXTERN_C void LocalSym_t847E2468DA6B602B494350C1C161B6E9866E76B7_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void LocalSym_t847E2468DA6B602B494350C1C161B6E9866E76B7_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void LocalSym_t847E2468DA6B602B494350C1C161B6E9866E76B7_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType LocalSym_t847E2468DA6B602B494350C1C161B6E9866E76B7_0_0_0;
IL2CPP_EXTERN_C void LocalVariableEntry_t10B47092DAC98B0E32B61E36E568C2C2FE2D1012_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void LocalVariableEntry_t10B47092DAC98B0E32B61E36E568C2C2FE2D1012_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void LocalVariableEntry_t10B47092DAC98B0E32B61E36E568C2C2FE2D1012_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType LocalVariableEntry_t10B47092DAC98B0E32B61E36E568C2C2FE2D1012_0_0_0;
IL2CPP_EXTERN_C void LocalVariableInfo_tFEE59A3613A442977805D456B016C3592CE60B62_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void LocalVariableInfo_tFEE59A3613A442977805D456B016C3592CE60B62_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void LocalVariableInfo_tFEE59A3613A442977805D456B016C3592CE60B62_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType LocalVariableInfo_tFEE59A3613A442977805D456B016C3592CE60B62_0_0_0;
IL2CPP_EXTERN_C void LockHolder_t759094B031976CAB1D40EEA607217A40DB7A0A59_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void LockHolder_t759094B031976CAB1D40EEA607217A40DB7A0A59_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void LockHolder_t759094B031976CAB1D40EEA607217A40DB7A0A59_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType LockHolder_t759094B031976CAB1D40EEA607217A40DB7A0A59_0_0_0;
IL2CPP_EXTERN_C void ManProcSym_t7224C447842CAD42B7EAB9E3BEB5C9C5779E58E2_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ManProcSym_t7224C447842CAD42B7EAB9E3BEB5C9C5779E58E2_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ManProcSym_t7224C447842CAD42B7EAB9E3BEB5C9C5779E58E2_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ManProcSym_t7224C447842CAD42B7EAB9E3BEB5C9C5779E58E2_0_0_0;
IL2CPP_EXTERN_C void ManProcSymMips_t640FAD48B684984AC9748DB8F0BAAB36FE31B9C6_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ManProcSymMips_t640FAD48B684984AC9748DB8F0BAAB36FE31B9C6_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ManProcSymMips_t640FAD48B684984AC9748DB8F0BAAB36FE31B9C6_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ManProcSymMips_t640FAD48B684984AC9748DB8F0BAAB36FE31B9C6_0_0_0;
IL2CPP_EXTERN_C void ManyRegSym_tF3396F04B8DD7C47F9A827C23779575134CDF961_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ManyRegSym_tF3396F04B8DD7C47F9A827C23779575134CDF961_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ManyRegSym_tF3396F04B8DD7C47F9A827C23779575134CDF961_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ManyRegSym_tF3396F04B8DD7C47F9A827C23779575134CDF961_0_0_0;
IL2CPP_EXTERN_C void ManyRegSym2_t6F16E5E0B19094D0DA950BEFD44950A9B980AFCC_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ManyRegSym2_t6F16E5E0B19094D0DA950BEFD44950A9B980AFCC_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ManyRegSym2_t6F16E5E0B19094D0DA950BEFD44950A9B980AFCC_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ManyRegSym2_t6F16E5E0B19094D0DA950BEFD44950A9B980AFCC_0_0_0;
IL2CPP_EXTERN_C void MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_0_0_0;
IL2CPP_EXTERN_C void MatchResult_t466703B46AB8050EABFF2E93F9439AD049D2566A_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void MatchResult_t466703B46AB8050EABFF2E93F9439AD049D2566A_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void MatchResult_t466703B46AB8050EABFF2E93F9439AD049D2566A_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType MatchResult_t466703B46AB8050EABFF2E93F9439AD049D2566A_0_0_0;
IL2CPP_EXTERN_C void MatchResultInfo_t2D42F957A6C5CBA42159437BECB361DA59B66697_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void MatchResultInfo_t2D42F957A6C5CBA42159437BECB361DA59B66697_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void MatchResultInfo_t2D42F957A6C5CBA42159437BECB361DA59B66697_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType MatchResultInfo_t2D42F957A6C5CBA42159437BECB361DA59B66697_0_0_0;
IL2CPP_EXTERN_C void MaterialReference_t86DB0799D5C82869D4FF0A4F59624AED6910FD26_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void MaterialReference_t86DB0799D5C82869D4FF0A4F59624AED6910FD26_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void MaterialReference_t86DB0799D5C82869D4FF0A4F59624AED6910FD26_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType MaterialReference_t86DB0799D5C82869D4FF0A4F59624AED6910FD26_0_0_0;
IL2CPP_EXTERN_C void MemberRelationship_t5A48212AE16D1C0795F070FD38F817F28218CB24_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void MemberRelationship_t5A48212AE16D1C0795F070FD38F817F28218CB24_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void MemberRelationship_t5A48212AE16D1C0795F070FD38F817F28218CB24_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType MemberRelationship_t5A48212AE16D1C0795F070FD38F817F28218CB24_0_0_0;
IL2CPP_EXTERN_C void MemoryHandle_t505785861D4FF84F850A3FF775BE6AE1833D2AFD_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void MemoryHandle_t505785861D4FF84F850A3FF775BE6AE1833D2AFD_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void MemoryHandle_t505785861D4FF84F850A3FF775BE6AE1833D2AFD_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType MemoryHandle_t505785861D4FF84F850A3FF775BE6AE1833D2AFD_0_0_0;
IL2CPP_EXTERN_C void MeshGenerationResult_tD5A6D639B2CF1A3F855AFB41861DEC48DC0D3A9C_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void MeshGenerationResult_tD5A6D639B2CF1A3F855AFB41861DEC48DC0D3A9C_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void MeshGenerationResult_tD5A6D639B2CF1A3F855AFB41861DEC48DC0D3A9C_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType MeshGenerationResult_tD5A6D639B2CF1A3F855AFB41861DEC48DC0D3A9C_0_0_0;
IL2CPP_EXTERN_C void MeshInfo_tE55C4A8846CC2C399CCC3FE989476D987B86AB2F_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void MeshInfo_tE55C4A8846CC2C399CCC3FE989476D987B86AB2F_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void MeshInfo_tE55C4A8846CC2C399CCC3FE989476D987B86AB2F_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType MeshInfo_tE55C4A8846CC2C399CCC3FE989476D987B86AB2F_0_0_0;
IL2CPP_EXTERN_C void Module_tABB9217F7F2BA3E0F4277D03C2B234A7313BB8D0_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Module_tABB9217F7F2BA3E0F4277D03C2B234A7313BB8D0_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Module_tABB9217F7F2BA3E0F4277D03C2B234A7313BB8D0_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Module_tABB9217F7F2BA3E0F4277D03C2B234A7313BB8D0_0_0_0;
IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8(RuntimeObject* obj);
IL2CPP_EXTERN_C_CONST RuntimeType ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8_0_0_0;
IL2CPP_EXTERN_C void MonoAsyncCall_t4CB32CAF9A2C648A4A35E0D921CE0A886B5D1A37_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void MonoAsyncCall_t4CB32CAF9A2C648A4A35E0D921CE0A886B5D1A37_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void MonoAsyncCall_t4CB32CAF9A2C648A4A35E0D921CE0A886B5D1A37_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType MonoAsyncCall_t4CB32CAF9A2C648A4A35E0D921CE0A886B5D1A37_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_MonoBtlsSelectCallback_t94D7F9E6194E0CC0F6D20A02709C3991261BEFAE();
IL2CPP_EXTERN_C_CONST RuntimeType MonoBtlsSelectCallback_t94D7F9E6194E0CC0F6D20A02709C3991261BEFAE_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_MonoBtlsServerNameCallback_t157678673B6A4D619EE32B5F453ECACF3BE430EA();
IL2CPP_EXTERN_C_CONST RuntimeType MonoBtlsServerNameCallback_t157678673B6A4D619EE32B5F453ECACF3BE430EA_0_0_0;
IL2CPP_EXTERN_C void MonoEventInfo_tFC31A64CF7C2FC93D54A539434B3C403FC924777_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void MonoEventInfo_tFC31A64CF7C2FC93D54A539434B3C403FC924777_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void MonoEventInfo_tFC31A64CF7C2FC93D54A539434B3C403FC924777_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType MonoEventInfo_tFC31A64CF7C2FC93D54A539434B3C403FC924777_0_0_0;
IL2CPP_EXTERN_C void MonoMethodInfo_t1E614E57E686DDBD9D853F45CDFD61E1F9206F61_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void MonoMethodInfo_t1E614E57E686DDBD9D853F45CDFD61E1F9206F61_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void MonoMethodInfo_t1E614E57E686DDBD9D853F45CDFD61E1F9206F61_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType MonoMethodInfo_t1E614E57E686DDBD9D853F45CDFD61E1F9206F61_0_0_0;
IL2CPP_EXTERN_C void MonoMethodMessage_t0A062C5351332ED078EDDF6FA38A87B0A7B5A601_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void MonoMethodMessage_t0A062C5351332ED078EDDF6FA38A87B0A7B5A601_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void MonoMethodMessage_t0A062C5351332ED078EDDF6FA38A87B0A7B5A601_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType MonoMethodMessage_t0A062C5351332ED078EDDF6FA38A87B0A7B5A601_0_0_0;
IL2CPP_EXTERN_C void MonoPropertyInfo_t8022292639E946C5DEE573BC1C902DB8D7290A1C_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void MonoPropertyInfo_t8022292639E946C5DEE573BC1C902DB8D7290A1C_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void MonoPropertyInfo_t8022292639E946C5DEE573BC1C902DB8D7290A1C_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType MonoPropertyInfo_t8022292639E946C5DEE573BC1C902DB8D7290A1C_0_0_0;
IL2CPP_EXTERN_C void MonoTypeInfo_t90D5999A69AC524474FDEAC50F55B6CE868AB501_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void MonoTypeInfo_t90D5999A69AC524474FDEAC50F55B6CE868AB501_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void MonoTypeInfo_t90D5999A69AC524474FDEAC50F55B6CE868AB501_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType MonoTypeInfo_t90D5999A69AC524474FDEAC50F55B6CE868AB501_0_0_0;
IL2CPP_EXTERN_C void MovedFromAttributeData_t03CC6A15A3D30385AF3C6E10FA273DE13D874A2F_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void MovedFromAttributeData_t03CC6A15A3D30385AF3C6E10FA273DE13D874A2F_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void MovedFromAttributeData_t03CC6A15A3D30385AF3C6E10FA273DE13D874A2F_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType MovedFromAttributeData_t03CC6A15A3D30385AF3C6E10FA273DE13D874A2F_0_0_0;
IL2CPP_EXTERN_C void MulticastDelegate_t_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void MulticastDelegate_t_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void MulticastDelegate_t_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType MulticastDelegate_t_0_0_0;
IL2CPP_EXTERN_C void NamespaceEntry_tE80696B724578C6233256F392F07517788C6FE5D_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void NamespaceEntry_tE80696B724578C6233256F392F07517788C6FE5D_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void NamespaceEntry_tE80696B724578C6233256F392F07517788C6FE5D_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType NamespaceEntry_tE80696B724578C6233256F392F07517788C6FE5D_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_NativeUpdateCallback_tC5CA5A9117B79251968A4DA3758552EFE1D37495();
IL2CPP_EXTERN_C_CONST RuntimeType NativeUpdateCallback_tC5CA5A9117B79251968A4DA3758552EFE1D37495_0_0_0;
IL2CPP_EXTERN_C void Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_0_0_0;
IL2CPP_EXTERN_C void OSPlatform_t8D6BF4B4756716D5B2694BCA813A49AE0227B9F9_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void OSPlatform_t8D6BF4B4756716D5B2694BCA813A49AE0227B9F9_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void OSPlatform_t8D6BF4B4756716D5B2694BCA813A49AE0227B9F9_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType OSPlatform_t8D6BF4B4756716D5B2694BCA813A49AE0227B9F9_0_0_0;
IL2CPP_EXTERN_C void ObjNameSym_tCB67FC55B68AB653C007CD8413E3429AF7E7B388_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ObjNameSym_tCB67FC55B68AB653C007CD8413E3429AF7E7B388_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ObjNameSym_tCB67FC55B68AB653C007CD8413E3429AF7E7B388_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ObjNameSym_tCB67FC55B68AB653C007CD8413E3429AF7E7B388_0_0_0;
IL2CPP_EXTERN_C void Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0;
IL2CPP_EXTERN_C void ObjectMetadata_t09E25DC9B1567F5C1D828E6D3C3AEF17515BDD9D_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ObjectMetadata_t09E25DC9B1567F5C1D828E6D3C3AEF17515BDD9D_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ObjectMetadata_t09E25DC9B1567F5C1D828E6D3C3AEF17515BDD9D_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ObjectMetadata_t09E25DC9B1567F5C1D828E6D3C3AEF17515BDD9D_0_0_0;
IL2CPP_EXTERN_C void OemSymbol_tEBB8CB732907FE3FCF10DE9F12BF9544C3F6B9D4_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void OemSymbol_tEBB8CB732907FE3FCF10DE9F12BF9544C3F6B9D4_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void OemSymbol_tEBB8CB732907FE3FCF10DE9F12BF9544C3F6B9D4_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType OemSymbol_tEBB8CB732907FE3FCF10DE9F12BF9544C3F6B9D4_0_0_0;
IL2CPP_EXTERN_C void Packet_tAEF2477DE5CBC8C9D1DF5C0B2080F3951C06F77B_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Packet_tAEF2477DE5CBC8C9D1DF5C0B2080F3951C06F77B_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Packet_tAEF2477DE5CBC8C9D1DF5C0B2080F3951C06F77B_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Packet_tAEF2477DE5CBC8C9D1DF5C0B2080F3951C06F77B_0_0_0;
IL2CPP_EXTERN_C void PanelClearSettings_tA3D8EE9A4864781CE3E5FED5225C6FB37ED66EE7_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void PanelClearSettings_tA3D8EE9A4864781CE3E5FED5225C6FB37ED66EE7_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void PanelClearSettings_tA3D8EE9A4864781CE3E5FED5225C6FB37ED66EE7_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType PanelClearSettings_tA3D8EE9A4864781CE3E5FED5225C6FB37ED66EE7_0_0_0;
IL2CPP_EXTERN_C void ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F_0_0_0;
IL2CPP_EXTERN_C void ParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510_0_0_0;
IL2CPP_EXTERN_C void ParamsArray_t2AE19F401652F4CBAB7A3CD4B0F195679FC16F1C_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ParamsArray_t2AE19F401652F4CBAB7A3CD4B0F195679FC16F1C_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ParamsArray_t2AE19F401652F4CBAB7A3CD4B0F195679FC16F1C_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ParamsArray_t2AE19F401652F4CBAB7A3CD4B0F195679FC16F1C_0_0_0;
IL2CPP_EXTERN_C void ParsingInfo_t1717753431089DD2385D3739360CF85BDB410F89_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ParsingInfo_t1717753431089DD2385D3739360CF85BDB410F89_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ParsingInfo_t1717753431089DD2385D3739360CF85BDB410F89_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ParsingInfo_t1717753431089DD2385D3739360CF85BDB410F89_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_PerformDynamicRes_t0949EAA6943CF225A1F61B233E13A440C1C09B47();
IL2CPP_EXTERN_C_CONST RuntimeType PerformDynamicRes_t0949EAA6943CF225A1F61B233E13A440C1C09B47_0_0_0;
const Il2CppGuid PerformanceCounterManager_t0BF17759AF043AB149940CFB1D6A1A90EE791E6F::CLSID = { 0x82840be1, 0xd273, 0x11d2, 0xb9, 0x4a, 0x0, 0x60, 0x8, 0x93, 0xb1, 0x7a };
IL2CPP_EXTERN_C_CONST RuntimeType PerformanceCounterManager_t0BF17759AF043AB149940CFB1D6A1A90EE791E6F_0_0_0;
IL2CPP_EXTERN_C void PhotoCapture_t268971E77CE9FFE83CCCE1F07F8CFE3013A461ED_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void PhotoCapture_t268971E77CE9FFE83CCCE1F07F8CFE3013A461ED_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void PhotoCapture_t268971E77CE9FFE83CCCE1F07F8CFE3013A461ED_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType PhotoCapture_t268971E77CE9FFE83CCCE1F07F8CFE3013A461ED_0_0_0;
IL2CPP_EXTERN_C void PhraseRecognizedEventArgs_t91AA21891352136A6CA60FCF60FCA372D07B18D8_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void PhraseRecognizedEventArgs_t91AA21891352136A6CA60FCF60FCA372D07B18D8_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void PhraseRecognizedEventArgs_t91AA21891352136A6CA60FCF60FCA372D07B18D8_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType PhraseRecognizedEventArgs_t91AA21891352136A6CA60FCF60FCA372D07B18D8_0_0_0;
IL2CPP_EXTERN_C void PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_0_0_0;
IL2CPP_EXTERN_C void PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_0_0_0;
IL2CPP_EXTERN_C void PlayerLoopSystemInternal_tA4BFB5E55A895153CF14333B866219B77AAF1BC5_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void PlayerLoopSystemInternal_tA4BFB5E55A895153CF14333B866219B77AAF1BC5_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void PlayerLoopSystemInternal_tA4BFB5E55A895153CF14333B866219B77AAF1BC5_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType PlayerLoopSystemInternal_tA4BFB5E55A895153CF14333B866219B77AAF1BC5_0_0_0;
IL2CPP_EXTERN_C void PointLight_tD01A1428DC1015D98A527136034187F732433EA7_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void PointLight_tD01A1428DC1015D98A527136034187F732433EA7_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void PointLight_tD01A1428DC1015D98A527136034187F732433EA7_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType PointLight_tD01A1428DC1015D98A527136034187F732433EA7_0_0_0;
IL2CPP_EXTERN_C void PostProcessPasses_tAED11E629F8830B180E0759F4A988839F786D3E9_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void PostProcessPasses_tAED11E629F8830B180E0759F4A988839F786D3E9_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void PostProcessPasses_tAED11E629F8830B180E0759F4A988839F786D3E9_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType PostProcessPasses_tAED11E629F8830B180E0759F4A988839F786D3E9_0_0_0;
IL2CPP_EXTERN_C void PostProcessingData_tFA75BF22951C600258B2707AF7A113E4EDA49BD4_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void PostProcessingData_tFA75BF22951C600258B2707AF7A113E4EDA49BD4_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void PostProcessingData_tFA75BF22951C600258B2707AF7A113E4EDA49BD4_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType PostProcessingData_tFA75BF22951C600258B2707AF7A113E4EDA49BD4_0_0_0;
IL2CPP_EXTERN_C void PrewarmInfo_t8671935B3CCB757CBF141F2B73023B4AEDDB1CB3_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void PrewarmInfo_t8671935B3CCB757CBF141F2B73023B4AEDDB1CB3_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void PrewarmInfo_t8671935B3CCB757CBF141F2B73023B4AEDDB1CB3_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType PrewarmInfo_t8671935B3CCB757CBF141F2B73023B4AEDDB1CB3_0_0_0;
IL2CPP_EXTERN_C void ProbeDilationSettings_tF64C04AC1BD358DC8B8CA9B53F4CD399A72E271A_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ProbeDilationSettings_tF64C04AC1BD358DC8B8CA9B53F4CD399A72E271A_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ProbeDilationSettings_tF64C04AC1BD358DC8B8CA9B53F4CD399A72E271A_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ProbeDilationSettings_tF64C04AC1BD358DC8B8CA9B53F4CD399A72E271A_0_0_0;
IL2CPP_EXTERN_C void ProbeVolumeBakingProcessSettings_t81175AA0740218A8C5D4A4A9F4C55312678C0B4C_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ProbeVolumeBakingProcessSettings_t81175AA0740218A8C5D4A4A9F4C55312678C0B4C_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ProbeVolumeBakingProcessSettings_t81175AA0740218A8C5D4A4A9F4C55312678C0B4C_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ProbeVolumeBakingProcessSettings_t81175AA0740218A8C5D4A4A9F4C55312678C0B4C_0_0_0;
IL2CPP_EXTERN_C void ProbeVolumeShadingParameters_tAB09DAAB534774AA4B7536C3821F3B3C7BD28F9B_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ProbeVolumeShadingParameters_tAB09DAAB534774AA4B7536C3821F3B3C7BD28F9B_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ProbeVolumeShadingParameters_tAB09DAAB534774AA4B7536C3821F3B3C7BD28F9B_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ProbeVolumeShadingParameters_tAB09DAAB534774AA4B7536C3821F3B3C7BD28F9B_0_0_0;
IL2CPP_EXTERN_C void ProbeVolumeSystemParameters_t62F1334D848F83B2D91F42C44CB10CF8E664F843_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ProbeVolumeSystemParameters_t62F1334D848F83B2D91F42C44CB10CF8E664F843_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ProbeVolumeSystemParameters_t62F1334D848F83B2D91F42C44CB10CF8E664F843_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ProbeVolumeSystemParameters_t62F1334D848F83B2D91F42C44CB10CF8E664F843_0_0_0;
IL2CPP_EXTERN_C void ProcSym32_t18A67495A57643D6922F6AFE5BD32752661260C2_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ProcSym32_t18A67495A57643D6922F6AFE5BD32752661260C2_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ProcSym32_t18A67495A57643D6922F6AFE5BD32752661260C2_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ProcSym32_t18A67495A57643D6922F6AFE5BD32752661260C2_0_0_0;
IL2CPP_EXTERN_C void ProcSymIa64_t99F984029F1485479DE0E4304AD8B33BF7461216_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ProcSymIa64_t99F984029F1485479DE0E4304AD8B33BF7461216_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ProcSymIa64_t99F984029F1485479DE0E4304AD8B33BF7461216_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ProcSymIa64_t99F984029F1485479DE0E4304AD8B33BF7461216_0_0_0;
IL2CPP_EXTERN_C void ProcSymMips_t553480EFFF0B41DF2FD86231809817991146292C_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ProcSymMips_t553480EFFF0B41DF2FD86231809817991146292C_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ProcSymMips_t553480EFFF0B41DF2FD86231809817991146292C_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ProcSymMips_t553480EFFF0B41DF2FD86231809817991146292C_0_0_0;
IL2CPP_EXTERN_C void ProcessStartInfo_t03E06D8098D3DC01CDACE23EE2D308BDA8E41D3C_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ProcessStartInfo_t03E06D8098D3DC01CDACE23EE2D308BDA8E41D3C_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ProcessStartInfo_t03E06D8098D3DC01CDACE23EE2D308BDA8E41D3C_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ProcessStartInfo_t03E06D8098D3DC01CDACE23EE2D308BDA8E41D3C_0_0_0;
IL2CPP_EXTERN_C void ProfilingSample_t50A4DFD8DA524681EE1BF64D3A518E6BA633657A_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ProfilingSample_t50A4DFD8DA524681EE1BF64D3A518E6BA633657A_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ProfilingSample_t50A4DFD8DA524681EE1BF64D3A518E6BA633657A_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ProfilingSample_t50A4DFD8DA524681EE1BF64D3A518E6BA633657A_0_0_0;
IL2CPP_EXTERN_C void PropertyMetadata_tE482F2C7DE71C766DB529D68526C1CFE43307224_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void PropertyMetadata_tE482F2C7DE71C766DB529D68526C1CFE43307224_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void PropertyMetadata_tE482F2C7DE71C766DB529D68526C1CFE43307224_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType PropertyMetadata_tE482F2C7DE71C766DB529D68526C1CFE43307224_0_0_0;
IL2CPP_EXTERN_C void PubSym32_t21DBCA12D52E3AA2437513D1914DBA886AEFF786_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void PubSym32_t21DBCA12D52E3AA2437513D1914DBA886AEFF786_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void PubSym32_t21DBCA12D52E3AA2437513D1914DBA886AEFF786_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType PubSym32_t21DBCA12D52E3AA2437513D1914DBA886AEFF786_0_0_0;
IL2CPP_EXTERN_C void RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF_0_0_0;
IL2CPP_EXTERN_C void RareData_t2F466D955456C8E8898324C284948FCB0F4D6F26_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void RareData_t2F466D955456C8E8898324C284948FCB0F4D6F26_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void RareData_t2F466D955456C8E8898324C284948FCB0F4D6F26_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType RareData_t2F466D955456C8E8898324C284948FCB0F4D6F26_0_0_0;
IL2CPP_EXTERN_C void RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_0_0_0;
IL2CPP_EXTERN_C void RealProxy_t2D3667E71799D4A142B9E0EDED7FD858277FC9AB_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void RealProxy_t2D3667E71799D4A142B9E0EDED7FD858277FC9AB_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void RealProxy_t2D3667E71799D4A142B9E0EDED7FD858277FC9AB_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType RealProxy_t2D3667E71799D4A142B9E0EDED7FD858277FC9AB_0_0_0;
IL2CPP_EXTERN_C void RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_0_0_0;
IL2CPP_EXTERN_C void RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698_0_0_0;
IL2CPP_EXTERN_C void RefSym2_tAE664AA02964D542698DB8575ED69CBF83CD6908_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void RefSym2_tAE664AA02964D542698DB8575ED69CBF83CD6908_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void RefSym2_tAE664AA02964D542698DB8575ED69CBF83CD6908_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType RefSym2_tAE664AA02964D542698DB8575ED69CBF83CD6908_0_0_0;
IL2CPP_EXTERN_C void RegRel32_tFD066ADE1140EB16469D06DFFBC12A1DB192A0C1_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void RegRel32_tFD066ADE1140EB16469D06DFFBC12A1DB192A0C1_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void RegRel32_tFD066ADE1140EB16469D06DFFBC12A1DB192A0C1_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType RegRel32_tFD066ADE1140EB16469D06DFFBC12A1DB192A0C1_0_0_0;
IL2CPP_EXTERN_C void RegSym_tFE9CB14DCB3C3757FDCA3906C694A294E51B53C0_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void RegSym_tFE9CB14DCB3C3757FDCA3906C694A294E51B53C0_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void RegSym_tFE9CB14DCB3C3757FDCA3906C694A294E51B53C0_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType RegSym_tFE9CB14DCB3C3757FDCA3906C694A294E51B53C0_0_0_0;
IL2CPP_EXTERN_C void RegexFCD_t696EC897BC155EF1EC7AEC0D97E2CE7717B45ADD_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void RegexFCD_t696EC897BC155EF1EC7AEC0D97E2CE7717B45ADD_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void RegexFCD_t696EC897BC155EF1EC7AEC0D97E2CE7717B45ADD_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType RegexFCD_t696EC897BC155EF1EC7AEC0D97E2CE7717B45ADD_0_0_0;
IL2CPP_EXTERN_C void RegexPrefix_tA54724081F84969072F7826C9CFA861073AD0044_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void RegexPrefix_tA54724081F84969072F7826C9CFA861073AD0044_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void RegexPrefix_tA54724081F84969072F7826C9CFA861073AD0044_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType RegexPrefix_tA54724081F84969072F7826C9CFA861073AD0044_0_0_0;
IL2CPP_EXTERN_C void RegexWriter_t618A9F9480E99C224DE6D93EEFED48EF0CEFAB12_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void RegexWriter_t618A9F9480E99C224DE6D93EEFED48EF0CEFAB12_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void RegexWriter_t618A9F9480E99C224DE6D93EEFED48EF0CEFAB12_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType RegexWriter_t618A9F9480E99C224DE6D93EEFED48EF0CEFAB12_0_0_0;
IL2CPP_EXTERN_C void RegionInfo_tB80D4B7042096ED4166921F58B93FD1DB5555836_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void RegionInfo_tB80D4B7042096ED4166921F58B93FD1DB5555836_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void RegionInfo_tB80D4B7042096ED4166921F58B93FD1DB5555836_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType RegionInfo_tB80D4B7042096ED4166921F58B93FD1DB5555836_0_0_0;
IL2CPP_EXTERN_C void RegisterFrameInfo_tFDA30CC76C82A5CD0EF462300736B8AB8D561F99_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void RegisterFrameInfo_tFDA30CC76C82A5CD0EF462300736B8AB8D561F99_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void RegisterFrameInfo_tFDA30CC76C82A5CD0EF462300736B8AB8D561F99_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType RegisterFrameInfo_tFDA30CC76C82A5CD0EF462300736B8AB8D561F99_0_0_0;
IL2CPP_EXTERN_C void RegisterVMSymbol_t7EF68FC88AA42BA7BAD5AAE74496F079F3AC4AEC_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void RegisterVMSymbol_t7EF68FC88AA42BA7BAD5AAE74496F079F3AC4AEC_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void RegisterVMSymbol_t7EF68FC88AA42BA7BAD5AAE74496F079F3AC4AEC_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType RegisterVMSymbol_t7EF68FC88AA42BA7BAD5AAE74496F079F3AC4AEC_0_0_0;
IL2CPP_EXTERN_C void RemoteConfigSettings_tC979947EE51355162B3241B9F80D95A8FD25FE52_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void RemoteConfigSettings_tC979947EE51355162B3241B9F80D95A8FD25FE52_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void RemoteConfigSettings_tC979947EE51355162B3241B9F80D95A8FD25FE52_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType RemoteConfigSettings_tC979947EE51355162B3241B9F80D95A8FD25FE52_0_0_0;
IL2CPP_EXTERN_C void RenderChainTextEntry_t3B07A86ED897E1859552D13B1CF046F585CF9D11_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void RenderChainTextEntry_t3B07A86ED897E1859552D13B1CF046F585CF9D11_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void RenderChainTextEntry_t3B07A86ED897E1859552D13B1CF046F585CF9D11_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType RenderChainTextEntry_t3B07A86ED897E1859552D13B1CF046F585CF9D11_0_0_0;
IL2CPP_EXTERN_C void RenderChainVEData_t582DE9DA38C6B608A9A38286FCF6FA70398B5847_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void RenderChainVEData_t582DE9DA38C6B608A9A38286FCF6FA70398B5847_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void RenderChainVEData_t582DE9DA38C6B608A9A38286FCF6FA70398B5847_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType RenderChainVEData_t582DE9DA38C6B608A9A38286FCF6FA70398B5847_0_0_0;
IL2CPP_EXTERN_C void RenderGraphBuilder_t8AEC7329276477A095C2D889D3361085DD1A1FFC_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void RenderGraphBuilder_t8AEC7329276477A095C2D889D3361085DD1A1FFC_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void RenderGraphBuilder_t8AEC7329276477A095C2D889D3361085DD1A1FFC_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType RenderGraphBuilder_t8AEC7329276477A095C2D889D3361085DD1A1FFC_0_0_0;
IL2CPP_EXTERN_C void RenderGraphExecution_t6DD852CD6BF4AB57D2D963BA7DA449A218DD0529_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void RenderGraphExecution_t6DD852CD6BF4AB57D2D963BA7DA449A218DD0529_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void RenderGraphExecution_t6DD852CD6BF4AB57D2D963BA7DA449A218DD0529_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType RenderGraphExecution_t6DD852CD6BF4AB57D2D963BA7DA449A218DD0529_0_0_0;
IL2CPP_EXTERN_C void RenderGraphLogIndent_tF9C4FBEEBE5BC22C223A368FD757DB647CD5C8E5_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void RenderGraphLogIndent_tF9C4FBEEBE5BC22C223A368FD757DB647CD5C8E5_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void RenderGraphLogIndent_tF9C4FBEEBE5BC22C223A368FD757DB647CD5C8E5_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType RenderGraphLogIndent_tF9C4FBEEBE5BC22C223A368FD757DB647CD5C8E5_0_0_0;
IL2CPP_EXTERN_C void RenderGraphParameters_t09D9F272548DFFBB836A53B48E15EA3D8FEA4BCA_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void RenderGraphParameters_t09D9F272548DFFBB836A53B48E15EA3D8FEA4BCA_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void RenderGraphParameters_t09D9F272548DFFBB836A53B48E15EA3D8FEA4BCA_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType RenderGraphParameters_t09D9F272548DFFBB836A53B48E15EA3D8FEA4BCA_0_0_0;
IL2CPP_EXTERN_C void RenderGraphProfilingScope_t1FFE4E5C53237490107027CBCCA6684B111C28C0_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void RenderGraphProfilingScope_t1FFE4E5C53237490107027CBCCA6684B111C28C0_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void RenderGraphProfilingScope_t1FFE4E5C53237490107027CBCCA6684B111C28C0_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType RenderGraphProfilingScope_t1FFE4E5C53237490107027CBCCA6684B111C28C0_0_0_0;
IL2CPP_EXTERN_C void RendererList_t9D7C54CD5C2AB0A0D43E9FAB41D696644D904635_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void RendererList_t9D7C54CD5C2AB0A0D43E9FAB41D696644D904635_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void RendererList_t9D7C54CD5C2AB0A0D43E9FAB41D696644D904635_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType RendererList_t9D7C54CD5C2AB0A0D43E9FAB41D696644D904635_0_0_0;
IL2CPP_EXTERN_C void RendererListDesc_t0860DFCDC6DBDC972A14248BE1CA93161D6DFE69_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void RendererListDesc_t0860DFCDC6DBDC972A14248BE1CA93161D6DFE69_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void RendererListDesc_t0860DFCDC6DBDC972A14248BE1CA93161D6DFE69_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType RendererListDesc_t0860DFCDC6DBDC972A14248BE1CA93161D6DFE69_0_0_0;
IL2CPP_EXTERN_C void RendererListDesc_t5C51B75B4D539F99345A077545015B8FB99FE78E_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void RendererListDesc_t5C51B75B4D539F99345A077545015B8FB99FE78E_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void RendererListDesc_t5C51B75B4D539F99345A077545015B8FB99FE78E_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType RendererListDesc_t5C51B75B4D539F99345A077545015B8FB99FE78E_0_0_0;
IL2CPP_EXTERN_C void RendererListHandle_t21AFDDE69B0048546497B890088B880F8080C62D_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void RendererListHandle_t21AFDDE69B0048546497B890088B880F8080C62D_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void RendererListHandle_t21AFDDE69B0048546497B890088B880F8080C62D_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType RendererListHandle_t21AFDDE69B0048546497B890088B880F8080C62D_0_0_0;
IL2CPP_EXTERN_C void RendererListParams_tD7EA1A56CF9C58D8E31C464A62D1546A8B0E66DC_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void RendererListParams_tD7EA1A56CF9C58D8E31C464A62D1546A8B0E66DC_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void RendererListParams_tD7EA1A56CF9C58D8E31C464A62D1546A8B0E66DC_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType RendererListParams_tD7EA1A56CF9C58D8E31C464A62D1546A8B0E66DC_0_0_0;
IL2CPP_EXTERN_C void RendererListResource_t9B978DD85ADC467D7E4DB42EF603B7C49918BF49_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void RendererListResource_t9B978DD85ADC467D7E4DB42EF603B7C49918BF49_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void RendererListResource_t9B978DD85ADC467D7E4DB42EF603B7C49918BF49_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType RendererListResource_t9B978DD85ADC467D7E4DB42EF603B7C49918BF49_0_0_0;
IL2CPP_EXTERN_C void RenderingData_tAAA01190551D6D5954314E3E1E85B58DD45EED71_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void RenderingData_tAAA01190551D6D5954314E3E1E85B58DD45EED71_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void RenderingData_tAAA01190551D6D5954314E3E1E85B58DD45EED71_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType RenderingData_tAAA01190551D6D5954314E3E1E85B58DD45EED71_0_0_0;
IL2CPP_EXTERN_C void ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122_0_0_0;
IL2CPP_EXTERN_C void ResourceRequest_tE6953FBA45EAAEFE866C635B9E7852044E62D868_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ResourceRequest_tE6953FBA45EAAEFE866C635B9E7852044E62D868_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ResourceRequest_tE6953FBA45EAAEFE866C635B9E7852044E62D868_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ResourceRequest_tE6953FBA45EAAEFE866C635B9E7852044E62D868_0_0_0;
IL2CPP_EXTERN_C void Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7_0_0_0;
IL2CPP_EXTERN_C void RuleMatcher_t327CFEB02C81AA20E639DE949DCBBAB5E92FF28E_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void RuleMatcher_t327CFEB02C81AA20E639DE949DCBBAB5E92FF28E_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void RuleMatcher_t327CFEB02C81AA20E639DE949DCBBAB5E92FF28E_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType RuleMatcher_t327CFEB02C81AA20E639DE949DCBBAB5E92FF28E_0_0_0;
IL2CPP_EXTERN_C void RuntimeAssembly_tA26A4DE82E77826DFC3D58AD976BCFC6BCA918AF_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void RuntimeAssembly_tA26A4DE82E77826DFC3D58AD976BCFC6BCA918AF_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void RuntimeAssembly_tA26A4DE82E77826DFC3D58AD976BCFC6BCA918AF_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType RuntimeAssembly_tA26A4DE82E77826DFC3D58AD976BCFC6BCA918AF_0_0_0;
IL2CPP_EXTERN_C void RuntimeModule_tF7DA9B52FC45487544703DCA49464B67CEA79633_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void RuntimeModule_tF7DA9B52FC45487544703DCA49464B67CEA79633_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void RuntimeModule_tF7DA9B52FC45487544703DCA49464B67CEA79633_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType RuntimeModule_tF7DA9B52FC45487544703DCA49464B67CEA79633_0_0_0;
IL2CPP_EXTERN_C void STATDATA_t2B5067A25347A006153807EAA17839425EFAF66C_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void STATDATA_t2B5067A25347A006153807EAA17839425EFAF66C_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void STATDATA_t2B5067A25347A006153807EAA17839425EFAF66C_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType STATDATA_t2B5067A25347A006153807EAA17839425EFAF66C_0_0_0;
IL2CPP_EXTERN_C void STGMEDIUM_t73DA1C6D081B8828B798D5A7FA7B129B1F6E2D3E_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void STGMEDIUM_t73DA1C6D081B8828B798D5A7FA7B129B1F6E2D3E_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void STGMEDIUM_t73DA1C6D081B8828B798D5A7FA7B129B1F6E2D3E_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType STGMEDIUM_t73DA1C6D081B8828B798D5A7FA7B129B1F6E2D3E_0_0_0;
IL2CPP_EXTERN_C void SafeStringMarshal_t37C5C4D85118BDD5A55E3A20736550CF11C76C2E_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void SafeStringMarshal_t37C5C4D85118BDD5A55E3A20736550CF11C76C2E_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void SafeStringMarshal_t37C5C4D85118BDD5A55E3A20736550CF11C76C2E_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType SafeStringMarshal_t37C5C4D85118BDD5A55E3A20736550CF11C76C2E_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_SavePersistentViewData_tFE77B8450170D95B16B3017D62F81F2139D4F716();
IL2CPP_EXTERN_C_CONST RuntimeType SavePersistentViewData_tFE77B8450170D95B16B3017D62F81F2139D4F716_0_0_0;
IL2CPP_EXTERN_C void ScalableImage_t64F0F6F75D1099EF5D595E70CA1A2A7B9914E80F_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ScalableImage_t64F0F6F75D1099EF5D595E70CA1A2A7B9914E80F_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ScalableImage_t64F0F6F75D1099EF5D595E70CA1A2A7B9914E80F_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ScalableImage_t64F0F6F75D1099EF5D595E70CA1A2A7B9914E80F_0_0_0;
IL2CPP_EXTERN_C void Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_ScaleFunc_t423F661DAD5C7A18F509C8F1F62C9D6AEA9A9791();
IL2CPP_EXTERN_C_CONST RuntimeType ScaleFunc_t423F661DAD5C7A18F509C8F1F62C9D6AEA9A9791_0_0_0;
IL2CPP_EXTERN_C void ScriptableCullingParameters_tD9539440A4A7DA4C7578CCE16F24466A5DC89899_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ScriptableCullingParameters_tD9539440A4A7DA4C7578CCE16F24466A5DC89899_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ScriptableCullingParameters_tD9539440A4A7DA4C7578CCE16F24466A5DC89899_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ScriptableCullingParameters_tD9539440A4A7DA4C7578CCE16F24466A5DC89899_0_0_0;
IL2CPP_EXTERN_C void ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_0_0_0;
IL2CPP_EXTERN_C void SecChannelBindings_t312B26406DEA57F70E864E42218D9CDF7D089196_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void SecChannelBindings_t312B26406DEA57F70E864E42218D9CDF7D089196_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void SecChannelBindings_t312B26406DEA57F70E864E42218D9CDF7D089196_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType SecChannelBindings_t312B26406DEA57F70E864E42218D9CDF7D089196_0_0_0;
IL2CPP_EXTERN_C void SecPkgContext_ConnectionInfo_tCD633F36513E24DA4BDA0436E14C81972FF60688_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void SecPkgContext_ConnectionInfo_tCD633F36513E24DA4BDA0436E14C81972FF60688_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void SecPkgContext_ConnectionInfo_tCD633F36513E24DA4BDA0436E14C81972FF60688_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType SecPkgContext_ConnectionInfo_tCD633F36513E24DA4BDA0436E14C81972FF60688_0_0_0;
IL2CPP_EXTERN_C void SecPkgContext_Sizes_t5E35EBB50BE8D8543F95AAB8EDC4FCB0EB0C52EF_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void SecPkgContext_Sizes_t5E35EBB50BE8D8543F95AAB8EDC4FCB0EB0C52EF_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void SecPkgContext_Sizes_t5E35EBB50BE8D8543F95AAB8EDC4FCB0EB0C52EF_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType SecPkgContext_Sizes_t5E35EBB50BE8D8543F95AAB8EDC4FCB0EB0C52EF_0_0_0;
IL2CPP_EXTERN_C void SecPkgContext_StreamSizes_t19EAFCE82EE4A1F95E03CA5425A00E5830390435_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void SecPkgContext_StreamSizes_t19EAFCE82EE4A1F95E03CA5425A00E5830390435_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void SecPkgContext_StreamSizes_t19EAFCE82EE4A1F95E03CA5425A00E5830390435_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType SecPkgContext_StreamSizes_t19EAFCE82EE4A1F95E03CA5425A00E5830390435_0_0_0;
IL2CPP_EXTERN_C void SectionSym_tD774296F1D1945C7076B73DDC54D4063D82E5C0D_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void SectionSym_tD774296F1D1945C7076B73DDC54D4063D82E5C0D_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void SectionSym_tD774296F1D1945C7076B73DDC54D4063D82E5C0D_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType SectionSym_tD774296F1D1945C7076B73DDC54D4063D82E5C0D_0_0_0;
IL2CPP_EXTERN_C void SecurityStatusPal_t6B278DE9D48F48DEA8E0242EBBDAF48F3E96119F_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void SecurityStatusPal_t6B278DE9D48F48DEA8E0242EBBDAF48F3E96119F_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void SecurityStatusPal_t6B278DE9D48F48DEA8E0242EBBDAF48F3E96119F_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType SecurityStatusPal_t6B278DE9D48F48DEA8E0242EBBDAF48F3E96119F_0_0_0;
IL2CPP_EXTERN_C void SelectorMatchRecord_t1E93CDB54312CFB4A67768BB25ABB9AFB31BC5D7_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void SelectorMatchRecord_t1E93CDB54312CFB4A67768BB25ABB9AFB31BC5D7_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void SelectorMatchRecord_t1E93CDB54312CFB4A67768BB25ABB9AFB31BC5D7_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType SelectorMatchRecord_t1E93CDB54312CFB4A67768BB25ABB9AFB31BC5D7_0_0_0;
IL2CPP_EXTERN_C void SemanticMeaning_tB410A3D7306E8060875DDEFE041CC7FDDEEE6335_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void SemanticMeaning_tB410A3D7306E8060875DDEFE041CC7FDDEEE6335_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void SemanticMeaning_tB410A3D7306E8060875DDEFE041CC7FDDEEE6335_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType SemanticMeaning_tB410A3D7306E8060875DDEFE041CC7FDDEEE6335_0_0_0;
IL2CPP_EXTERN_C void SerializationEntry_t6A03B35039769EF0EDD14BE879E68F1C104FFF74_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void SerializationEntry_t6A03B35039769EF0EDD14BE879E68F1C104FFF74_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void SerializationEntry_t6A03B35039769EF0EDD14BE879E68F1C104FFF74_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType SerializationEntry_t6A03B35039769EF0EDD14BE879E68F1C104FFF74_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_SerializationEventHandler_t0A09DB90E1E5E0B2CCCB82D3380E02F4ACE8995F();
IL2CPP_EXTERN_C_CONST RuntimeType SerializationEventHandler_t0A09DB90E1E5E0B2CCCB82D3380E02F4ACE8995F_0_0_0;
IL2CPP_EXTERN_C void ShaderKeyword_t683126BB2B2337DB41954B0FE0DA7EBAA7028661_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ShaderKeyword_t683126BB2B2337DB41954B0FE0DA7EBAA7028661_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ShaderKeyword_t683126BB2B2337DB41954B0FE0DA7EBAA7028661_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ShaderKeyword_t683126BB2B2337DB41954B0FE0DA7EBAA7028661_0_0_0;
IL2CPP_EXTERN_C void ShadowData_tA165FDF7CA4CE6BEA8B649FFAB91C59ED684D832_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ShadowData_tA165FDF7CA4CE6BEA8B649FFAB91C59ED684D832_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ShadowData_tA165FDF7CA4CE6BEA8B649FFAB91C59ED684D832_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ShadowData_tA165FDF7CA4CE6BEA8B649FFAB91C59ED684D832_0_0_0;
IL2CPP_EXTERN_C void SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126_0_0_0;
IL2CPP_EXTERN_C void Sky_t5AB138933D60CB215B9FBA33CB82283A2F743A14_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Sky_t5AB138933D60CB215B9FBA33CB82283A2F743A14_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Sky_t5AB138933D60CB215B9FBA33CB82283A2F743A14_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Sky_t5AB138933D60CB215B9FBA33CB82283A2F743A14_0_0_0;
IL2CPP_EXTERN_C void SlotSym32_t11F8D10167E92331F98AB18DE32283A9187DEE8E_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void SlotSym32_t11F8D10167E92331F98AB18DE32283A9187DEE8E_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void SlotSym32_t11F8D10167E92331F98AB18DE32283A9187DEE8E_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType SlotSym32_t11F8D10167E92331F98AB18DE32283A9187DEE8E_0_0_0;
IL2CPP_EXTERN_C void SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340_0_0_0;
IL2CPP_EXTERN_C void SocketInformation_t9DB498C167BB8ACF9C751042E7174F6B2B96C7EC_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void SocketInformation_t9DB498C167BB8ACF9C751042E7174F6B2B96C7EC_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void SocketInformation_t9DB498C167BB8ACF9C751042E7174F6B2B96C7EC_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType SocketInformation_t9DB498C167BB8ACF9C751042E7174F6B2B96C7EC_0_0_0;
IL2CPP_EXTERN_C void SocketReceiveFromResult_t53649672B974DA5C4009A226A234C9F73EF0414B_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void SocketReceiveFromResult_t53649672B974DA5C4009A226A234C9F73EF0414B_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void SocketReceiveFromResult_t53649672B974DA5C4009A226A234C9F73EF0414B_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType SocketReceiveFromResult_t53649672B974DA5C4009A226A234C9F73EF0414B_0_0_0;
IL2CPP_EXTERN_C void SocketReceiveMessageFromResult_tF9F2E089A06BD89F011D96B685BEDAC7E897BF89_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void SocketReceiveMessageFromResult_tF9F2E089A06BD89F011D96B685BEDAC7E897BF89_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void SocketReceiveMessageFromResult_tF9F2E089A06BD89F011D96B685BEDAC7E897BF89_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType SocketReceiveMessageFromResult_tF9F2E089A06BD89F011D96B685BEDAC7E897BF89_0_0_0;
IL2CPP_EXTERN_C void SortKey_tFE5594FAAAFF330066735114D1021DB0D5273740_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void SortKey_tFE5594FAAAFF330066735114D1021DB0D5273740_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void SortKey_tFE5594FAAAFF330066735114D1021DB0D5273740_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType SortKey_tFE5594FAAAFF330066735114D1021DB0D5273740_0_0_0;
IL2CPP_EXTERN_C void SpinLock_t0826FB2BDD25012485F35D6D33A1FE1E1752E816_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void SpinLock_t0826FB2BDD25012485F35D6D33A1FE1E1752E816_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void SpinLock_t0826FB2BDD25012485F35D6D33A1FE1E1752E816_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType SpinLock_t0826FB2BDD25012485F35D6D33A1FE1E1752E816_0_0_0;
IL2CPP_EXTERN_C void SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869_0_0_0;
IL2CPP_EXTERN_C void SpriteBone_t92E0FF1412CC4B6A5FC71895699E35FB3EF75044_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void SpriteBone_t92E0FF1412CC4B6A5FC71895699E35FB3EF75044_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void SpriteBone_t92E0FF1412CC4B6A5FC71895699E35FB3EF75044_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType SpriteBone_t92E0FF1412CC4B6A5FC71895699E35FB3EF75044_0_0_0;
IL2CPP_EXTERN_C void SpriteRendererGroup_t2925A4576406FAB40F064EDE3A989F9AD410027C_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void SpriteRendererGroup_t2925A4576406FAB40F064EDE3A989F9AD410027C_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void SpriteRendererGroup_t2925A4576406FAB40F064EDE3A989F9AD410027C_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType SpriteRendererGroup_t2925A4576406FAB40F064EDE3A989F9AD410027C_0_0_0;
IL2CPP_EXTERN_C void SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_0_0_0;
IL2CPP_EXTERN_C void SslApplicationProtocol_tB40F12F1093EE37CAE5E107A0D0F709B2F689700_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void SslApplicationProtocol_tB40F12F1093EE37CAE5E107A0D0F709B2F689700_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void SslApplicationProtocol_tB40F12F1093EE37CAE5E107A0D0F709B2F689700_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType SslApplicationProtocol_tB40F12F1093EE37CAE5E107A0D0F709B2F689700_0_0_0;
IL2CPP_EXTERN_C void StackFrame_tA48D05BBE9BFC3ADED6198DF2B538B631AF7BDE2_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void StackFrame_tA48D05BBE9BFC3ADED6198DF2B538B631AF7BDE2_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void StackFrame_tA48D05BBE9BFC3ADED6198DF2B538B631AF7BDE2_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType StackFrame_tA48D05BBE9BFC3ADED6198DF2B538B631AF7BDE2_0_0_0;
IL2CPP_EXTERN_C void StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_StackObjectAllocateCallback_tC44C98B6EEECF553421071595AF55E3E8F0C0F60();
IL2CPP_EXTERN_C_CONST RuntimeType StackObjectAllocateCallback_tC44C98B6EEECF553421071595AF55E3E8F0C0F60_0_0_0;
IL2CPP_EXTERN_C void State_tC241510131965D8DE1919EB16A3650E397E5AEAB_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void State_tC241510131965D8DE1919EB16A3650E397E5AEAB_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void State_tC241510131965D8DE1919EB16A3650E397E5AEAB_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType State_tC241510131965D8DE1919EB16A3650E397E5AEAB_0_0_0;
IL2CPP_EXTERN_C void StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_0_0_0;
IL2CPP_EXTERN_C void StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610_0_0_0;
IL2CPP_EXTERN_C void StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF_0_0_0;
IL2CPP_EXTERN_C void StylePropertyNameCollection_t2AB45DE2C2006786133A882AA60E6E782BB75312_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void StylePropertyNameCollection_t2AB45DE2C2006786133A882AA60E6E782BB75312_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void StylePropertyNameCollection_t2AB45DE2C2006786133A882AA60E6E782BB75312_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType StylePropertyNameCollection_t2AB45DE2C2006786133A882AA60E6E782BB75312_0_0_0;
IL2CPP_EXTERN_C void StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2_0_0_0;
IL2CPP_EXTERN_C void StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B_0_0_0;
IL2CPP_EXTERN_C void StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC_0_0_0;
IL2CPP_EXTERN_C void StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470_0_0_0;
IL2CPP_EXTERN_C void StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C_0_0_0;
IL2CPP_EXTERN_C void StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089_0_0_0;
IL2CPP_EXTERN_C void StyleValueManaged_t68DFBEC1594279E4DC56634FD5092318D1E9A5F4_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void StyleValueManaged_t68DFBEC1594279E4DC56634FD5092318D1E9A5F4_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void StyleValueManaged_t68DFBEC1594279E4DC56634FD5092318D1E9A5F4_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType StyleValueManaged_t68DFBEC1594279E4DC56634FD5092318D1E9A5F4_0_0_0;
IL2CPP_EXTERN_C void StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A_0_0_0;
IL2CPP_EXTERN_C void StyleVariable_t5D4DEC936102A13961F4F2C6214B83D6CDC56269_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void StyleVariable_t5D4DEC936102A13961F4F2C6214B83D6CDC56269_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void StyleVariable_t5D4DEC936102A13961F4F2C6214B83D6CDC56269_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType StyleVariable_t5D4DEC936102A13961F4F2C6214B83D6CDC56269_0_0_0;
IL2CPP_EXTERN_C void TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_0_0_0;
IL2CPP_EXTERN_C void TextCoreHandle_t06766751C4FA547A46F83A8E3DD33A6FF2EBE4B5_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void TextCoreHandle_t06766751C4FA547A46F83A8E3DD33A6FF2EBE4B5_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void TextCoreHandle_t06766751C4FA547A46F83A8E3DD33A6FF2EBE4B5_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType TextCoreHandle_t06766751C4FA547A46F83A8E3DD33A6FF2EBE4B5_0_0_0;
IL2CPP_EXTERN_C void TextElementInfo_tDD7A12E319505510E0B350E342BD55F32AB5F976_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void TextElementInfo_tDD7A12E319505510E0B350E342BD55F32AB5F976_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void TextElementInfo_tDD7A12E319505510E0B350E342BD55F32AB5F976_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType TextElementInfo_tDD7A12E319505510E0B350E342BD55F32AB5F976_0_0_0;
IL2CPP_EXTERN_C void TextGenerationSettings_tBB6E86AC0B348D19158D6721BE790865B04993F3_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void TextGenerationSettings_tBB6E86AC0B348D19158D6721BE790865B04993F3_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void TextGenerationSettings_tBB6E86AC0B348D19158D6721BE790865B04993F3_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType TextGenerationSettings_tBB6E86AC0B348D19158D6721BE790865B04993F3_0_0_0;
IL2CPP_EXTERN_C void TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC_0_0_0;
IL2CPP_EXTERN_C void TextNativeSettings_tE9D302AD381537B4FD42C3D02583F719CFF40062_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void TextNativeSettings_tE9D302AD381537B4FD42C3D02583F719CFF40062_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void TextNativeSettings_tE9D302AD381537B4FD42C3D02583F719CFF40062_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType TextNativeSettings_tE9D302AD381537B4FD42C3D02583F719CFF40062_0_0_0;
IL2CPP_EXTERN_C void TextureDesc_tBD9644C6170930E57EEF8542E9200AD9D858B601_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void TextureDesc_tBD9644C6170930E57EEF8542E9200AD9D858B601_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void TextureDesc_tBD9644C6170930E57EEF8542E9200AD9D858B601_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType TextureDesc_tBD9644C6170930E57EEF8542E9200AD9D858B601_0_0_0;
IL2CPP_EXTERN_C void TextureEntry_tDA3A5BB083FA16C7123AF227C5D7F78860665128_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void TextureEntry_tDA3A5BB083FA16C7123AF227C5D7F78860665128_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void TextureEntry_tDA3A5BB083FA16C7123AF227C5D7F78860665128_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType TextureEntry_tDA3A5BB083FA16C7123AF227C5D7F78860665128_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_ThreadStart_t7662D98F1793EDE90192D7304D1C3C44119328A2();
IL2CPP_EXTERN_C_CONST RuntimeType ThreadStart_t7662D98F1793EDE90192D7304D1C3C44119328A2_0_0_0;
IL2CPP_EXTERN_C void ThreadSym32_tEED5BFB5FCA0CD1CAB4540A94018CB625189349A_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ThreadSym32_tEED5BFB5FCA0CD1CAB4540A94018CB625189349A_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ThreadSym32_tEED5BFB5FCA0CD1CAB4540A94018CB625189349A_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ThreadSym32_tEED5BFB5FCA0CD1CAB4540A94018CB625189349A_0_0_0;
IL2CPP_EXTERN_C void ThunkSym32_t7C43BF77BAF65003138BB396F375F3E391606AC9_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ThunkSym32_t7C43BF77BAF65003138BB396F375F3E391606AC9_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ThunkSym32_t7C43BF77BAF65003138BB396F375F3E391606AC9_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ThunkSym32_t7C43BF77BAF65003138BB396F375F3E391606AC9_0_0_0;
IL2CPP_EXTERN_C void TileAnimationData_tB7419BC111545576349DD19CAB0DEFD240CAF149_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void TileAnimationData_tB7419BC111545576349DD19CAB0DEFD240CAF149_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void TileAnimationData_tB7419BC111545576349DD19CAB0DEFD240CAF149_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType TileAnimationData_tB7419BC111545576349DD19CAB0DEFD240CAF149_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_TimeMsFunction_t1893856976EB95CF5608ACC3642AD8B79994CA2B();
IL2CPP_EXTERN_C_CONST RuntimeType TimeMsFunction_t1893856976EB95CF5608ACC3642AD8B79994CA2B_0_0_0;
IL2CPP_EXTERN_C void TrackedReference_tF35FF4FB6E89ACD81C24469FAF0CA6FFF29262A2_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void TrackedReference_tF35FF4FB6E89ACD81C24469FAF0CA6FFF29262A2_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void TrackedReference_tF35FF4FB6E89ACD81C24469FAF0CA6FFF29262A2_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType TrackedReference_tF35FF4FB6E89ACD81C24469FAF0CA6FFF29262A2_0_0_0;
IL2CPP_EXTERN_C void TransformData_tC4540FA2761D7981877CC9077301F6AFEF1CF808_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void TransformData_tC4540FA2761D7981877CC9077301F6AFEF1CF808_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void TransformData_tC4540FA2761D7981877CC9077301F6AFEF1CF808_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType TransformData_tC4540FA2761D7981877CC9077301F6AFEF1CF808_0_0_0;
IL2CPP_EXTERN_C void TransitionData_tF097DCEA6AD59BAD8C54693D84B3E2AE248AB321_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void TransitionData_tF097DCEA6AD59BAD8C54693D84B3E2AE248AB321_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void TransitionData_tF097DCEA6AD59BAD8C54693D84B3E2AE248AB321_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType TransitionData_tF097DCEA6AD59BAD8C54693D84B3E2AE248AB321_0_0_0;
IL2CPP_EXTERN_C void Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_0_0_0;
IL2CPP_EXTERN_C void TransparentProxy_t943163A9C567330AAD61F9F42479D4EAD2A55DD8_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void TransparentProxy_t943163A9C567330AAD61F9F42479D4EAD2A55DD8_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void TransparentProxy_t943163A9C567330AAD61F9F42479D4EAD2A55DD8_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType TransparentProxy_t943163A9C567330AAD61F9F42479D4EAD2A55DD8_0_0_0;
IL2CPP_EXTERN_C void TypeDescriptor_t01A99BD37834DDEEAD548DFD445FCC204D3C07E3_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void TypeDescriptor_t01A99BD37834DDEEAD548DFD445FCC204D3C07E3_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void TypeDescriptor_t01A99BD37834DDEEAD548DFD445FCC204D3C07E3_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType TypeDescriptor_t01A99BD37834DDEEAD548DFD445FCC204D3C07E3_0_0_0;
IL2CPP_EXTERN_C void TypeSizeInfo_tFC240303A45F862ABF3DD8E0B21E2A723DA66FAD_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void TypeSizeInfo_tFC240303A45F862ABF3DD8E0B21E2A723DA66FAD_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void TypeSizeInfo_tFC240303A45F862ABF3DD8E0B21E2A723DA66FAD_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType TypeSizeInfo_tFC240303A45F862ABF3DD8E0B21E2A723DA66FAD_0_0_0;
IL2CPP_EXTERN_C void UIRVEShaderInfoAllocator_t7A9BCF1924EA027462B8DBBAC7B15BCBCB5CC3BF_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void UIRVEShaderInfoAllocator_t7A9BCF1924EA027462B8DBBAC7B15BCBCB5CC3BF_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void UIRVEShaderInfoAllocator_t7A9BCF1924EA027462B8DBBAC7B15BCBCB5CC3BF_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType UIRVEShaderInfoAllocator_t7A9BCF1924EA027462B8DBBAC7B15BCBCB5CC3BF_0_0_0;
IL2CPP_EXTERN_C void UdpReceiveResult_t9B04AABD71B2DAE00002C0063D6532227A9E243E_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void UdpReceiveResult_t9B04AABD71B2DAE00002C0063D6532227A9E243E_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void UdpReceiveResult_t9B04AABD71B2DAE00002C0063D6532227A9E243E_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType UdpReceiveResult_t9B04AABD71B2DAE00002C0063D6532227A9E243E_0_0_0;
IL2CPP_EXTERN_C void UdtSym_t92865AFDBDB723B2AD6C66DE664ADE1454EB7104_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void UdtSym_t92865AFDBDB723B2AD6C66DE664ADE1454EB7104_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void UdtSym_t92865AFDBDB723B2AD6C66DE664ADE1454EB7104_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType UdtSym_t92865AFDBDB723B2AD6C66DE664ADE1454EB7104_0_0_0;
IL2CPP_EXTERN_C void UnamespaceSym_t726F70980BD4BDFEB38B9AD76693B44C0C4F4647_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void UnamespaceSym_t726F70980BD4BDFEB38B9AD76693B44C0C4F4647_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void UnamespaceSym_t726F70980BD4BDFEB38B9AD76693B44C0C4F4647_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType UnamespaceSym_t726F70980BD4BDFEB38B9AD76693B44C0C4F4647_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7();
IL2CPP_EXTERN_C_CONST RuntimeType UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_0_0_0;
IL2CPP_EXTERN_C void UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_0_0_0;
IL2CPP_EXTERN_C void UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_UnlockConnectionDelegate_t453247A451D867BEFEDC7B88ABF6A0638CB5791E();
IL2CPP_EXTERN_C_CONST RuntimeType UnlockConnectionDelegate_t453247A451D867BEFEDC7B88ABF6A0638CB5791E_0_0_0;
IL2CPP_EXTERN_C void UnmanagedMarshal_t266EA330E458C05C980D8B8C08DF106E266E378C_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void UnmanagedMarshal_t266EA330E458C05C980D8B8C08DF106E266E378C_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void UnmanagedMarshal_t266EA330E458C05C980D8B8C08DF106E266E378C_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType UnmanagedMarshal_t266EA330E458C05C980D8B8C08DF106E266E378C_0_0_0;
IL2CPP_EXTERN_C void UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_UserCallBack_t81E6755DCACDEAF4FD737113D39268AA52B3DD94();
IL2CPP_EXTERN_C_CONST RuntimeType UserCallBack_t81E6755DCACDEAF4FD737113D39268AA52B3DD94_0_0_0;
IL2CPP_EXTERN_C void VFXEventAttribute_tA764A595356174BA39C782A8A64B47B39FB3F518_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void VFXEventAttribute_tA764A595356174BA39C782A8A64B47B39FB3F518_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void VFXEventAttribute_tA764A595356174BA39C782A8A64B47B39FB3F518_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType VFXEventAttribute_tA764A595356174BA39C782A8A64B47B39FB3F518_0_0_0;
IL2CPP_EXTERN_C void VFXExpressionValues_t361C45D33F7B5E9D85F8185EF47AA9ACF43063F5_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void VFXExpressionValues_t361C45D33F7B5E9D85F8185EF47AA9ACF43063F5_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void VFXExpressionValues_t361C45D33F7B5E9D85F8185EF47AA9ACF43063F5_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType VFXExpressionValues_t361C45D33F7B5E9D85F8185EF47AA9ACF43063F5_0_0_0;
IL2CPP_EXTERN_C void VFXOutputEventArgs_tA170E0868F4EFA82F5AF0835B297C4AF9E571A40_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void VFXOutputEventArgs_tA170E0868F4EFA82F5AF0835B297C4AF9E571A40_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void VFXOutputEventArgs_tA170E0868F4EFA82F5AF0835B297C4AF9E571A40_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType VFXOutputEventArgs_tA170E0868F4EFA82F5AF0835B297C4AF9E571A40_0_0_0;
IL2CPP_EXTERN_C void VFXSpawnerState_tCAF49FEA2C8BB3E0BB1E9C3C3F2649576CB64281_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void VFXSpawnerState_tCAF49FEA2C8BB3E0BB1E9C3C3F2649576CB64281_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void VFXSpawnerState_tCAF49FEA2C8BB3E0BB1E9C3C3F2649576CB64281_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType VFXSpawnerState_tCAF49FEA2C8BB3E0BB1E9C3C3F2649576CB64281_0_0_0;
IL2CPP_EXTERN_C void ValueStringBuilder_tEBD54C46E3AF8527BD0D234124F5C1AC14E9E251_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ValueStringBuilder_tEBD54C46E3AF8527BD0D234124F5C1AC14E9E251_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ValueStringBuilder_tEBD54C46E3AF8527BD0D234124F5C1AC14E9E251_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ValueStringBuilder_tEBD54C46E3AF8527BD0D234124F5C1AC14E9E251_0_0_0;
IL2CPP_EXTERN_C void ValueStringBuilder_tC142140E6C0B9CD2BA423636F1BB5822672673E9_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ValueStringBuilder_tC142140E6C0B9CD2BA423636F1BB5822672673E9_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ValueStringBuilder_tC142140E6C0B9CD2BA423636F1BB5822672673E9_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ValueStringBuilder_tC142140E6C0B9CD2BA423636F1BB5822672673E9_0_0_0;
IL2CPP_EXTERN_C void ValueTaskAwaiter_t8A53759F995F1786E132CA010D1D215B55F3101A_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ValueTaskAwaiter_t8A53759F995F1786E132CA010D1D215B55F3101A_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ValueTaskAwaiter_t8A53759F995F1786E132CA010D1D215B55F3101A_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ValueTaskAwaiter_t8A53759F995F1786E132CA010D1D215B55F3101A_0_0_0;
IL2CPP_EXTERN_C void ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_0_0_0;
IL2CPP_EXTERN_C void VariableIndex_t08310156F857121435900AF4C6D3F168CF85E5CF_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void VariableIndex_t08310156F857121435900AF4C6D3F168CF85E5CF_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void VariableIndex_t08310156F857121435900AF4C6D3F168CF85E5CF_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType VariableIndex_t08310156F857121435900AF4C6D3F168CF85E5CF_0_0_0;
IL2CPP_EXTERN_C void VideoCapture_t4FC0DEDE3146D8313C7CD8B8B9D8EFB868CACD7B_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void VideoCapture_t4FC0DEDE3146D8313C7CD8B8B9D8EFB868CACD7B_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void VideoCapture_t4FC0DEDE3146D8313C7CD8B8B9D8EFB868CACD7B_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType VideoCapture_t4FC0DEDE3146D8313C7CD8B8B9D8EFB868CACD7B_0_0_0;
IL2CPP_EXTERN_C void VirtualOffsetSettings_tC12F99414598C4F285ADCFC12DE72C3D88EC9351_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void VirtualOffsetSettings_tC12F99414598C4F285ADCFC12DE72C3D88EC9351_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void VirtualOffsetSettings_tC12F99414598C4F285ADCFC12DE72C3D88EC9351_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType VirtualOffsetSettings_tC12F99414598C4F285ADCFC12DE72C3D88EC9351_0_0_0;
IL2CPP_EXTERN_C void VisualData_t64B2C5387387BCEC426F3981BECC8582A02D3F1B_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void VisualData_t64B2C5387387BCEC426F3981BECC8582A02D3F1B_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void VisualData_t64B2C5387387BCEC426F3981BECC8582A02D3F1B_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType VisualData_t64B2C5387387BCEC426F3981BECC8582A02D3F1B_0_0_0;
IL2CPP_EXTERN_C void VisualElementStyleSheetSet_t01465769E0D9109A677300311A7058701873A23B_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void VisualElementStyleSheetSet_t01465769E0D9109A677300311A7058701873A23B_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void VisualElementStyleSheetSet_t01465769E0D9109A677300311A7058701873A23B_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType VisualElementStyleSheetSet_t01465769E0D9109A677300311A7058701873A23B_0_0_0;
IL2CPP_EXTERN_C void WaitForChangedResult_t50441171847AF2F3C59CCBFDDB903331F2B18AF2_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void WaitForChangedResult_t50441171847AF2F3C59CCBFDDB903331F2B18AF2_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void WaitForChangedResult_t50441171847AF2F3C59CCBFDDB903331F2B18AF2_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType WaitForChangedResult_t50441171847AF2F3C59CCBFDDB903331F2B18AF2_0_0_0;
IL2CPP_EXTERN_C void WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_0_0_0;
IL2CPP_EXTERN_C void WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8_0_0_0;
IL2CPP_EXTERN_C void Win32_FIXED_INFO_t9D99BDFAAAAC166F7EDAFA26BF309D322F817C5F_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Win32_FIXED_INFO_t9D99BDFAAAAC166F7EDAFA26BF309D322F817C5F_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Win32_FIXED_INFO_t9D99BDFAAAAC166F7EDAFA26BF309D322F817C5F_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Win32_FIXED_INFO_t9D99BDFAAAAC166F7EDAFA26BF309D322F817C5F_0_0_0;
IL2CPP_EXTERN_C void Win32_IP_ADAPTER_ADDRESSES_t284DFDE6A9909878EC47F01B9A405572EDD09EEE_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Win32_IP_ADAPTER_ADDRESSES_t284DFDE6A9909878EC47F01B9A405572EDD09EEE_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Win32_IP_ADAPTER_ADDRESSES_t284DFDE6A9909878EC47F01B9A405572EDD09EEE_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Win32_IP_ADAPTER_ADDRESSES_t284DFDE6A9909878EC47F01B9A405572EDD09EEE_0_0_0;
IL2CPP_EXTERN_C void Win32_IP_ADAPTER_INFO_tB0665C5F6FF46171B39F6B4C164B3013E4065F12_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Win32_IP_ADAPTER_INFO_tB0665C5F6FF46171B39F6B4C164B3013E4065F12_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Win32_IP_ADAPTER_INFO_tB0665C5F6FF46171B39F6B4C164B3013E4065F12_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Win32_IP_ADAPTER_INFO_tB0665C5F6FF46171B39F6B4C164B3013E4065F12_0_0_0;
IL2CPP_EXTERN_C void Win32_IP_ADDR_STRING_tB0FA66A644EFD59AFE80E7F55060CC566FF7BEC7_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Win32_IP_ADDR_STRING_tB0FA66A644EFD59AFE80E7F55060CC566FF7BEC7_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Win32_IP_ADDR_STRING_tB0FA66A644EFD59AFE80E7F55060CC566FF7BEC7_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Win32_IP_ADDR_STRING_tB0FA66A644EFD59AFE80E7F55060CC566FF7BEC7_0_0_0;
IL2CPP_EXTERN_C void Win32_IP_PER_ADAPTER_INFO_tA89C4AB997D7CEA885C123A55BEA9F08A186DDE8_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Win32_IP_PER_ADAPTER_INFO_tA89C4AB997D7CEA885C123A55BEA9F08A186DDE8_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Win32_IP_PER_ADAPTER_INFO_tA89C4AB997D7CEA885C123A55BEA9F08A186DDE8_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Win32_IP_PER_ADAPTER_INFO_tA89C4AB997D7CEA885C123A55BEA9F08A186DDE8_0_0_0;
IL2CPP_EXTERN_C void Win32_MIBICMPSTATS_EX_tDC7D2C7BEC795741A78767683EEFB00960E044D9_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Win32_MIBICMPSTATS_EX_tDC7D2C7BEC795741A78767683EEFB00960E044D9_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Win32_MIBICMPSTATS_EX_tDC7D2C7BEC795741A78767683EEFB00960E044D9_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Win32_MIBICMPSTATS_EX_tDC7D2C7BEC795741A78767683EEFB00960E044D9_0_0_0;
IL2CPP_EXTERN_C void Win32_MIB_ICMP_EX_tB24EC96751FAB541B2AAB0F5DFD636FD778E95F0_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Win32_MIB_ICMP_EX_tB24EC96751FAB541B2AAB0F5DFD636FD778E95F0_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Win32_MIB_ICMP_EX_tB24EC96751FAB541B2AAB0F5DFD636FD778E95F0_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Win32_MIB_ICMP_EX_tB24EC96751FAB541B2AAB0F5DFD636FD778E95F0_0_0_0;
IL2CPP_EXTERN_C void Win32_MIB_IFROW_t179E4C942DE065152990382E5BFD758E6C19ED60_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Win32_MIB_IFROW_t179E4C942DE065152990382E5BFD758E6C19ED60_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Win32_MIB_IFROW_t179E4C942DE065152990382E5BFD758E6C19ED60_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Win32_MIB_IFROW_t179E4C942DE065152990382E5BFD758E6C19ED60_0_0_0;
IL2CPP_EXTERN_C void Win32_SOCKADDR_t8FFB71AF192B29914F457E80291909E4CCCCC78E_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Win32_SOCKADDR_t8FFB71AF192B29914F457E80291909E4CCCCC78E_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Win32_SOCKADDR_t8FFB71AF192B29914F457E80291909E4CCCCC78E_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Win32_SOCKADDR_t8FFB71AF192B29914F457E80291909E4CCCCC78E_0_0_0;
IL2CPP_EXTERN_C void WithSym32_t70277B51B38FBCB93CC381DA47F0E0569F4DA421_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void WithSym32_t70277B51B38FBCB93CC381DA47F0E0569F4DA421_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void WithSym32_t70277B51B38FBCB93CC381DA47F0E0569F4DA421_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType WithSym32_t70277B51B38FBCB93CC381DA47F0E0569F4DA421_0_0_0;
IL2CPP_EXTERN_C void WordWrapState_tD71131CF008362DB9562FB9794AE9D9225D8F123_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void WordWrapState_tD71131CF008362DB9562FB9794AE9D9225D8F123_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void WordWrapState_tD71131CF008362DB9562FB9794AE9D9225D8F123_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType WordWrapState_tD71131CF008362DB9562FB9794AE9D9225D8F123_0_0_0;
IL2CPP_EXTERN_C void X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D_0_0_0;
IL2CPP_EXTERN_C void YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_0_0_0;
IL2CPP_EXTERN_C void __DTString_t732683AF9A8EEC82B66C136920240C4033EF0637_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void __DTString_t732683AF9A8EEC82B66C136920240C4033EF0637_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void __DTString_t732683AF9A8EEC82B66C136920240C4033EF0637_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType __DTString_t732683AF9A8EEC82B66C136920240C4033EF0637_0_0_0;
IL2CPP_EXTERN_C void jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225_0_0_0;
IL2CPP_EXTERN_C void mlMethod_t23C752ACB37FC0BE9B6CAE94D4D21F19230BBBA2_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void mlMethod_t23C752ACB37FC0BE9B6CAE94D4D21F19230BBBA2_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void mlMethod_t23C752ACB37FC0BE9B6CAE94D4D21F19230BBBA2_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType mlMethod_t23C752ACB37FC0BE9B6CAE94D4D21F19230BBBA2_0_0_0;
IL2CPP_EXTERN_C void ShadowResolutionRequest_tE0E30FA18ACE318D6540C2BA217F4E8B3E6766CA_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ShadowResolutionRequest_tE0E30FA18ACE318D6540C2BA217F4E8B3E6766CA_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ShadowResolutionRequest_tE0E30FA18ACE318D6540C2BA217F4E8B3E6766CA_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ShadowResolutionRequest_tE0E30FA18ACE318D6540C2BA217F4E8B3E6766CA_0_0_0;
IL2CPP_EXTERN_C void Alloc2D_tB9971776E3506C8F38C7F3C66690F9AC0322542E_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Alloc2D_tB9971776E3506C8F38C7F3C66690F9AC0322542E_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Alloc2D_tB9971776E3506C8F38C7F3C66690F9AC0322542E_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Alloc2D_tB9971776E3506C8F38C7F3C66690F9AC0322542E_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_IdentityTokenChanged_tE8CB0DAB5F6E640A847803F582E6CB6237742395();
IL2CPP_EXTERN_C_CONST RuntimeType IdentityTokenChanged_tE8CB0DAB5F6E640A847803F582E6CB6237742395_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_SessionStateChanged_t1180FB66E702B635CAD9316DC661D931277B2A0C();
IL2CPP_EXTERN_C_CONST RuntimeType SessionStateChanged_t1180FB66E702B635CAD9316DC661D931277B2A0C_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_OnOverrideControllerDirtyCallback_tDC67F7661A27502AD804BDE0B696955AFD4A44D5();
IL2CPP_EXTERN_C_CONST RuntimeType OnOverrideControllerDirtyCallback_tDC67F7661A27502AD804BDE0B696955AFD4A44D5_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413();
IL2CPP_EXTERN_C_CONST RuntimeType LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_LowMemoryCallback_tF685A8AA4A24BB7603D190EB750E61C3F963026F();
IL2CPP_EXTERN_C_CONST RuntimeType LowMemoryCallback_tF685A8AA4A24BB7603D190EB750E61C3F963026F_0_0_0;
IL2CPP_EXTERN_C void RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0_0_0_0;
IL2CPP_EXTERN_C void SorterGenericArray_t894488A2B9F4A1ACE408683B71920FA7DBAA47D9_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void SorterGenericArray_t894488A2B9F4A1ACE408683B71920FA7DBAA47D9_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void SorterGenericArray_t894488A2B9F4A1ACE408683B71920FA7DBAA47D9_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType SorterGenericArray_t894488A2B9F4A1ACE408683B71920FA7DBAA47D9_0_0_0;
IL2CPP_EXTERN_C void SorterObjectArray_t27D45F724041652AE2FD9645BE40292F8E343305_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void SorterObjectArray_t27D45F724041652AE2FD9645BE40292F8E343305_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void SorterObjectArray_t27D45F724041652AE2FD9645BE40292F8E343305_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType SorterObjectArray_t27D45F724041652AE2FD9645BE40292F8E343305_0_0_0;
IL2CPP_EXTERN_C void AttributeEntry_t646320DFCA1CFF9E19700C8AEBF785FE35BB2A9D_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void AttributeEntry_t646320DFCA1CFF9E19700C8AEBF785FE35BB2A9D_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void AttributeEntry_t646320DFCA1CFF9E19700C8AEBF785FE35BB2A9D_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType AttributeEntry_t646320DFCA1CFF9E19700C8AEBF785FE35BB2A9D_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E();
IL2CPP_EXTERN_C_CONST RuntimeType PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072();
IL2CPP_EXTERN_C_CONST RuntimeType PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177();
IL2CPP_EXTERN_C_CONST RuntimeType AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177_0_0_0;
IL2CPP_EXTERN_C void NodeEnumerator_t7CB2EFBA0A2F9767CA59B2EDB2FA4D348959E89B_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void NodeEnumerator_t7CB2EFBA0A2F9767CA59B2EDB2FA4D348959E89B_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void NodeEnumerator_t7CB2EFBA0A2F9767CA59B2EDB2FA4D348959E89B_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType NodeEnumerator_t7CB2EFBA0A2F9767CA59B2EDB2FA4D348959E89B_0_0_0;
IL2CPP_EXTERN_C void OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837_0_0_0;
IL2CPP_EXTERN_C void FormatOptions_tBD49C0C9CC14282D1249620565FC537D4D4AFB84_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void FormatOptions_tBD49C0C9CC14282D1249620565FC537D4D4AFB84_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void FormatOptions_tBD49C0C9CC14282D1249620565FC537D4D4AFB84_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType FormatOptions_tBD49C0C9CC14282D1249620565FC537D4D4AFB84_0_0_0;
IL2CPP_EXTERN_C void NumberBuffer_tF09E8463D840202ECA50F50BE6D57729C18213B4_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void NumberBuffer_tF09E8463D840202ECA50F50BE6D57729C18213B4_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void NumberBuffer_tF09E8463D840202ECA50F50BE6D57729C18213B4_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType NumberBuffer_tF09E8463D840202ECA50F50BE6D57729C18213B4_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_CFProxyAutoConfigurationResultCallback_t9CEAA50E7E7B78CE76F69C81ED662783D4FE0C8A();
IL2CPP_EXTERN_C_CONST RuntimeType CFProxyAutoConfigurationResultCallback_t9CEAA50E7E7B78CE76F69C81ED662783D4FE0C8A_0_0_0;
IL2CPP_EXTERN_C void RenderRequest_t432931B06439AC4704282E924DE8A9A474DB6B9A_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void RenderRequest_t432931B06439AC4704282E924DE8A9A474DB6B9A_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void RenderRequest_t432931B06439AC4704282E924DE8A9A474DB6B9A_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType RenderRequest_t432931B06439AC4704282E924DE8A9A474DB6B9A_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC();
IL2CPP_EXTERN_C_CONST RuntimeType WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC_0_0_0;
IL2CPP_EXTERN_C void AlgorithmIdentifier_tCF880F72315F1725C33F59BB2F5D213BB22275A8_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void AlgorithmIdentifier_tCF880F72315F1725C33F59BB2F5D213BB22275A8_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void AlgorithmIdentifier_tCF880F72315F1725C33F59BB2F5D213BB22275A8_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType AlgorithmIdentifier_tCF880F72315F1725C33F59BB2F5D213BB22275A8_0_0_0;
IL2CPP_EXTERN_C void ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_0_0_0;
IL2CPP_EXTERN_C void RecognizedAttribute_t67AAD871D05C66CFF976B98E4492B979993FB7D3_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void RecognizedAttribute_t67AAD871D05C66CFF976B98E4492B979993FB7D3_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void RecognizedAttribute_t67AAD871D05C66CFF976B98E4492B979993FB7D3_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType RecognizedAttribute_t67AAD871D05C66CFF976B98E4492B979993FB7D3_0_0_0;
IL2CPP_EXTERN_C void ProcessMessageRes_t6B49D2FAE01AC95889FDF8F854970E358D2AC2C7_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ProcessMessageRes_t6B49D2FAE01AC95889FDF8F854970E358D2AC2C7_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ProcessMessageRes_t6B49D2FAE01AC95889FDF8F854970E358D2AC2C7_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ProcessMessageRes_t6B49D2FAE01AC95889FDF8F854970E358D2AC2C7_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_StateChanged_t6DC116251B1ED50EC475CFF0195AB6625478485F();
IL2CPP_EXTERN_C_CONST RuntimeType StateChanged_t6DC116251B1ED50EC475CFF0195AB6625478485F_0_0_0;
IL2CPP_EXTERN_C void Data_t589A371D0FD4E7B3C8E27FDDE05F06BA48BF2E4E_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Data_t589A371D0FD4E7B3C8E27FDDE05F06BA48BF2E4E_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Data_t589A371D0FD4E7B3C8E27FDDE05F06BA48BF2E4E_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Data_t589A371D0FD4E7B3C8E27FDDE05F06BA48BF2E4E_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_OnCultureInfoChangedDelegate_t643F89A369BE552AC4D546507F51BF998EBA670A();
IL2CPP_EXTERN_C_CONST RuntimeType OnCultureInfoChangedDelegate_t643F89A369BE552AC4D546507F51BF998EBA670A_0_0_0;
IL2CPP_EXTERN_C void AlbedoDebugValidationPresetData_tCCFD994474750370F3F5AAEE6312FDF5F06C106B_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void AlbedoDebugValidationPresetData_tCCFD994474750370F3F5AAEE6312FDF5F06C106B_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void AlbedoDebugValidationPresetData_tCCFD994474750370F3F5AAEE6312FDF5F06C106B_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType AlbedoDebugValidationPresetData_tCCFD994474750370F3F5AAEE6312FDF5F06C106B_0_0_0;
IL2CPP_EXTERN_C void CombinedChunks_tCFB3356163B9F9B0E31E0B194E9B415F83340ED9_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void CombinedChunks_tCFB3356163B9F9B0E31E0B194E9B415F83340ED9_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void CombinedChunks_tCFB3356163B9F9B0E31E0B194E9B415F83340ED9_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType CombinedChunks_tCFB3356163B9F9B0E31E0B194E9B415F83340ED9_0_0_0;
IL2CPP_EXTERN_C void Resources_t959FACC867970114DBF8DC7D4C649240E819940E_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Resources_t959FACC867970114DBF8DC7D4C649240E819940E_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Resources_t959FACC867970114DBF8DC7D4C649240E819940E_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Resources_t959FACC867970114DBF8DC7D4C649240E819940E_0_0_0;
IL2CPP_EXTERN_C void CullLightsJob_t12E24FFF641BA4E7E15F02538D2FB6AB656423DE_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void CullLightsJob_t12E24FFF641BA4E7E15F02538D2FB6AB656423DE_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void CullLightsJob_t12E24FFF641BA4E7E15F02538D2FB6AB656423DE_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType CullLightsJob_t12E24FFF641BA4E7E15F02538D2FB6AB656423DE_0_0_0;
IL2CPP_EXTERN_C void DrawCall_t704B8D7A804DDC8CD64E065EC39E89AD61AD405B_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void DrawCall_t704B8D7A804DDC8CD64E065EC39E89AD61AD405B_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void DrawCall_t704B8D7A804DDC8CD64E065EC39E89AD61AD405B_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType DrawCall_t704B8D7A804DDC8CD64E065EC39E89AD61AD405B_0_0_0;
IL2CPP_EXTERN_C void InitParams_tD826C0704956D3F1286BCCC07B5A5F61FFA7FCD6_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void InitParams_tD826C0704956D3F1286BCCC07B5A5F61FFA7FCD6_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void InitParams_tD826C0704956D3F1286BCCC07B5A5F61FFA7FCD6_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType InitParams_tD826C0704956D3F1286BCCC07B5A5F61FFA7FCD6_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_ReadMethod_t87B67872818F82B3DCC067C0DD9BB47200327CE6();
IL2CPP_EXTERN_C_CONST RuntimeType ReadMethod_t87B67872818F82B3DCC067C0DD9BB47200327CE6_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_WriteMethod_t43391B800F1C3F6EFEEFCBADF4D3322CBFB42AB9();
IL2CPP_EXTERN_C_CONST RuntimeType WriteMethod_t43391B800F1C3F6EFEEFCBADF4D3322CBFB42AB9_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_UnmanagedReadOrWrite_t3705731796B1AD7D7A711D794FF08961B623E9BA();
IL2CPP_EXTERN_C_CONST RuntimeType UnmanagedReadOrWrite_t3705731796B1AD7D7A711D794FF08961B623E9BA_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_DictationCompletedDelegate_t83D7F1A9EC8225F6C405F0936EEEA031F75E93C7();
IL2CPP_EXTERN_C_CONST RuntimeType DictationCompletedDelegate_t83D7F1A9EC8225F6C405F0936EEEA031F75E93C7_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_DictationErrorHandler_t3B40C491B80EBCEC860A8ABF490B6A13B129AC6D();
IL2CPP_EXTERN_C_CONST RuntimeType DictationErrorHandler_t3B40C491B80EBCEC860A8ABF490B6A13B129AC6D_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_DictationHypothesisDelegate_t062C7AA1EAEA39F02173D9C05D809EAB1DDBB77A();
IL2CPP_EXTERN_C_CONST RuntimeType DictationHypothesisDelegate_t062C7AA1EAEA39F02173D9C05D809EAB1DDBB77A_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_DictationResultDelegate_t09DC18A221E33F1C0E26AB3363F4004240FBCFC6();
IL2CPP_EXTERN_C_CONST RuntimeType DictationResultDelegate_t09DC18A221E33F1C0E26AB3363F4004240FBCFC6_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_DisplaysUpdatedDelegate_t1BAACED9BE72131FD59213A3186F5D7AB9E1FD68();
IL2CPP_EXTERN_C_CONST RuntimeType DisplaysUpdatedDelegate_t1BAACED9BE72131FD59213A3186F5D7AB9E1FD68_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_OnDownloadError_t35039D2911B5CFD49EF3A4B02A7F0C7D80285206();
IL2CPP_EXTERN_C_CONST RuntimeType OnDownloadError_t35039D2911B5CFD49EF3A4B02A7F0C7D80285206_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_OnDownloadOver_t42B784EDC39A773684AF38DCE8B6F4BADF82E0D6();
IL2CPP_EXTERN_C_CONST RuntimeType OnDownloadOver_t42B784EDC39A773684AF38DCE8B6F4BADF82E0D6_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_OnDownloadProgress_tBE0A65BD0027A02B8CD1EA74A709E17A58B866C6();
IL2CPP_EXTERN_C_CONST RuntimeType OnDownloadProgress_tBE0A65BD0027A02B8CD1EA74A709E17A58B866C6_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_OnStartDownloadFile_tB7A432CAC4DC47EF9279EBD4EE01EC27C248F2F9();
IL2CPP_EXTERN_C_CONST RuntimeType OnStartDownloadFile_tB7A432CAC4DC47EF9279EBD4EE01EC27C248F2F9_0_0_0;
IL2CPP_EXTERN_C void ScalerContainer_t8C9EBECAB45F9B7C806AF9F477262E5F80F5E375_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ScalerContainer_t8C9EBECAB45F9B7C806AF9F477262E5F80F5E375_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ScalerContainer_t8C9EBECAB45F9B7C806AF9F477262E5F80F5E375_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ScalerContainer_t8C9EBECAB45F9B7C806AF9F477262E5F80F5E375_0_0_0;
IL2CPP_EXTERN_C void EnumResult_t136A685F59AB498579BD350717FADD4D6603DAB4_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void EnumResult_t136A685F59AB498579BD350717FADD4D6603DAB4_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void EnumResult_t136A685F59AB498579BD350717FADD4D6603DAB4_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType EnumResult_t136A685F59AB498579BD350717FADD4D6603DAB4_0_0_0;
IL2CPP_EXTERN_C void EnumPair_tAA90AB82C8065DBB8D05ECE8D9195FB20E13423A_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void EnumPair_tAA90AB82C8065DBB8D05ECE8D9195FB20E13423A_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void EnumPair_tAA90AB82C8065DBB8D05ECE8D9195FB20E13423A_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType EnumPair_tAA90AB82C8065DBB8D05ECE8D9195FB20E13423A_0_0_0;
IL2CPP_EXTERN_C void DispatchContext_tFA37790A5FF30508B0146B79E4FF1880EB82E455_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void DispatchContext_tFA37790A5FF30508B0146B79E4FF1880EB82E455_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void DispatchContext_tFA37790A5FF30508B0146B79E4FF1880EB82E455_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType DispatchContext_tFA37790A5FF30508B0146B79E4FF1880EB82E455_0_0_0;
IL2CPP_EXTERN_C void EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2_0_0_0;
IL2CPP_EXTERN_C void UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182_0_0_0;
IL2CPP_EXTERN_C void Reader_tFD6FCF261BBDF95B67147E0E1A8FD60D82333E5E_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Reader_tFD6FCF261BBDF95B67147E0E1A8FD60D82333E5E_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Reader_tFD6FCF261BBDF95B67147E0E1A8FD60D82333E5E_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Reader_tFD6FCF261BBDF95B67147E0E1A8FD60D82333E5E_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_ConfirmOverwriteDelegate_tECABC456A4C853ACB974FF3C432117B7A91FF0A1();
IL2CPP_EXTERN_C_CONST RuntimeType ConfirmOverwriteDelegate_tECABC456A4C853ACB974FF3C432117B7A91FF0A1_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_ReadDelegate_tA1467DDB23ACEC2E32F06F86F7906D1B1AA67C98();
IL2CPP_EXTERN_C_CONST RuntimeType ReadDelegate_tA1467DDB23ACEC2E32F06F86F7906D1B1AA67C98_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_WriteDelegate_tACBC1C867E4248D4A20626FCBFB1C886993FA3BA();
IL2CPP_EXTERN_C_CONST RuntimeType WriteDelegate_tACBC1C867E4248D4A20626FCBFB1C886993FA3BA_0_0_0;
IL2CPP_EXTERN_C void FocusedElement_t1EE083A1C5276213C533A38C6B5DC02E9DE5CBEF_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void FocusedElement_t1EE083A1C5276213C533A38C6B5DC02E9DE5CBEF_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void FocusedElement_t1EE083A1C5276213C533A38C6B5DC02E9DE5CBEF_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType FocusedElement_t1EE083A1C5276213C533A38C6B5DC02E9DE5CBEF_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_FontTextureRebuildCallback_t76D5E172DF8AA57E67763D453AAC40F0961D09B1();
IL2CPP_EXTERN_C_CONST RuntimeType FontTextureRebuildCallback_t76D5E172DF8AA57E67763D453AAC40F0961D09B1_0_0_0;
IL2CPP_EXTERN_C void InitParams_t2637D034DDA6AE1F6AA0A3FEDF3C8D30100B9472_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void InitParams_t2637D034DDA6AE1F6AA0A3FEDF3C8D30100B9472_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void InitParams_t2637D034DDA6AE1F6AA0A3FEDF3C8D30100B9472_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType InitParams_t2637D034DDA6AE1F6AA0A3FEDF3C8D30100B9472_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_WindowFunction_t0067B6F174FD5BEC3E869A38C2319BA8EE85D550();
IL2CPP_EXTERN_C_CONST RuntimeType WindowFunction_t0067B6F174FD5BEC3E869A38C2319BA8EE85D550_0_0_0;
IL2CPP_EXTERN_C void ParentClipScope_tDAB1300C623213518730D926A970098BECFD9C52_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ParentClipScope_tDAB1300C623213518730D926A970098BECFD9C52_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ParentClipScope_tDAB1300C623213518730D926A970098BECFD9C52_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ParentClipScope_tDAB1300C623213518730D926A970098BECFD9C52_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_SkinChangedDelegate_tA6D456E853D58AD2EF8A599F543C7E5BA8E94B98();
IL2CPP_EXTERN_C_CONST RuntimeType SkinChangedDelegate_tA6D456E853D58AD2EF8A599F543C7E5BA8E94B98_0_0_0;
IL2CPP_EXTERN_C void RawTexture_t11E3CED18C936D84173D8F6A55270D7AC5452FCA_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void RawTexture_t11E3CED18C936D84173D8F6A55270D7AC5452FCA_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void RawTexture_t11E3CED18C936D84173D8F6A55270D7AC5452FCA_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType RawTexture_t11E3CED18C936D84173D8F6A55270D7AC5452FCA_0_0_0;
IL2CPP_EXTERN_C void GuidResult_t5B70D46D3C631BD00631FF6D700371C1E9C7AC79_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void GuidResult_t5B70D46D3C631BD00631FF6D700371C1E9C7AC79_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void GuidResult_t5B70D46D3C631BD00631FF6D700371C1E9C7AC79_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType GuidResult_t5B70D46D3C631BD00631FF6D700371C1E9C7AC79_0_0_0;
IL2CPP_EXTERN_C void bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E_0_0_0;
IL2CPP_EXTERN_C void AuthorizationState_t79311A9A938E608B506F10F92C0789E46C8FCA32_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void AuthorizationState_t79311A9A938E608B506F10F92C0789E46C8FCA32_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void AuthorizationState_t79311A9A938E608B506F10F92C0789E46C8FCA32_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType AuthorizationState_t79311A9A938E608B506F10F92C0789E46C8FCA32_0_0_0;
IL2CPP_EXTERN_C void GUIGlobals_tA6082A955224515E1D82F5B41D84A0CD35A9CF10_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void GUIGlobals_tA6082A955224515E1D82F5B41D84A0CD35A9CF10_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void GUIGlobals_tA6082A955224515E1D82F5B41D84A0CD35A9CF10_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType GUIGlobals_tA6082A955224515E1D82F5B41D84A0CD35A9CF10_0_0_0;
IL2CPP_EXTERN_C void InlineRule_t33A25EE06BCFCD5561E60223DF8544C8EF644C30_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void InlineRule_t33A25EE06BCFCD5561E60223DF8544C8EF644C30_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void InlineRule_t33A25EE06BCFCD5561E60223DF8544C8EF644C30_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType InlineRule_t33A25EE06BCFCD5561E60223DF8544C8EF644C30_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_OnValidateInput_t48916A4E9C9FD6204401FF0808C2B7A93D73418B();
IL2CPP_EXTERN_C_CONST RuntimeType OnValidateInput_t48916A4E9C9FD6204401FF0808C2B7A93D73418B_0_0_0;
IL2CPP_EXTERN_C void InstructionOffsetCache_tF9DD2BF155D65B4AC7DA1549DD555A5F881DD52E_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void InstructionOffsetCache_tF9DD2BF155D65B4AC7DA1549DD555A5F881DD52E_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void InstructionOffsetCache_tF9DD2BF155D65B4AC7DA1549DD555A5F881DD52E_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType InstructionOffsetCache_tF9DD2BF155D65B4AC7DA1549DD555A5F881DD52E_0_0_0;
IL2CPP_EXTERN_C void bucket_tAF03F47BB3CB4A383D4C9F40CFDF25075A497895_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void bucket_tAF03F47BB3CB4A383D4C9F40CFDF25075A497895_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void bucket_tAF03F47BB3CB4A383D4C9F40CFDF25075A497895_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType bucket_tAF03F47BB3CB4A383D4C9F40CFDF25075A497895_0_0_0;
IL2CPP_EXTERN_C void TreeViewItemWrapper_tFA593EC4B06E0C963C0EAA9C18DDC99EEDC05D1F_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void TreeViewItemWrapper_tFA593EC4B06E0C963C0EAA9C18DDC99EEDC05D1F_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void TreeViewItemWrapper_tFA593EC4B06E0C963C0EAA9C18DDC99EEDC05D1F_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType TreeViewItemWrapper_tFA593EC4B06E0C963C0EAA9C18DDC99EEDC05D1F_0_0_0;
IL2CPP_EXTERN_C void SecPkgContext_ApplicationProtocol_t2AC94D86A46680A23E028DEC0F09B3C86B5BCCBD_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void SecPkgContext_ApplicationProtocol_t2AC94D86A46680A23E028DEC0F09B3C86B5BCCBD_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void SecPkgContext_ApplicationProtocol_t2AC94D86A46680A23E028DEC0F09B3C86B5BCCBD_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType SecPkgContext_ApplicationProtocol_t2AC94D86A46680A23E028DEC0F09B3C86B5BCCBD_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_PanicFunction__t9B5243C52C7988A1D3B5A297CF2D7B4C63CF0E02();
IL2CPP_EXTERN_C_CONST RuntimeType PanicFunction__t9B5243C52C7988A1D3B5A297CF2D7B4C63CF0E02_0_0_0;
IL2CPP_EXTERN_C void U3CrenderTargetUsedU3Ee__FixedBuffer_tFD6BC31F926EE730D12C5E649A0B4B46B3C49647_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void U3CrenderTargetUsedU3Ee__FixedBuffer_tFD6BC31F926EE730D12C5E649A0B4B46B3C49647_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void U3CrenderTargetUsedU3Ee__FixedBuffer_tFD6BC31F926EE730D12C5E649A0B4B46B3C49647_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType U3CrenderTargetUsedU3Ee__FixedBuffer_tFD6BC31F926EE730D12C5E649A0B4B46B3C49647_0_0_0;
IL2CPP_EXTERN_C void LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_0_0_0;
IL2CPP_EXTERN_C void Settings_tD7A6A8448F1DB2BC0311F24ED5CA30DCA1C30FA1_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Settings_tD7A6A8448F1DB2BC0311F24ED5CA30DCA1C30FA1_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Settings_tD7A6A8448F1DB2BC0311F24ED5CA30DCA1C30FA1_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Settings_tD7A6A8448F1DB2BC0311F24ED5CA30DCA1C30FA1_0_0_0;
IL2CPP_EXTERN_C void ShaderBitArray_t92F648500F336FE106BF7EAACF00FF413DAB0F58_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ShaderBitArray_t92F648500F336FE106BF7EAACF00FF413DAB0F58_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ShaderBitArray_t92F648500F336FE106BF7EAACF00FF413DAB0F58_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ShaderBitArray_t92F648500F336FE106BF7EAACF00FF413DAB0F58_0_0_0;
IL2CPP_EXTERN_C void DragPosition_t922FC1F61C1B1A510241E4207B94AA1CD7E94660_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void DragPosition_t922FC1F61C1B1A510241E4207B94AA1CD7E94660_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void DragPosition_t922FC1F61C1B1A510241E4207B94AA1CD7E94660_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType DragPosition_t922FC1F61C1B1A510241E4207B94AA1CD7E94660_0_0_0;
IL2CPP_EXTERN_C void Reader_t77F3745416303EC22BC31DD74525DB04E7501DB6_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Reader_t77F3745416303EC22BC31DD74525DB04E7501DB6_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Reader_t77F3745416303EC22BC31DD74525DB04E7501DB6_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Reader_t77F3745416303EC22BC31DD74525DB04E7501DB6_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_SCNetworkReachabilityCallback_tB2999B8E8D3F9B2AE93423DFFE710122C60E6F28();
IL2CPP_EXTERN_C_CONST RuntimeType SCNetworkReachabilityCallback_tB2999B8E8D3F9B2AE93423DFFE710122C60E6F28_0_0_0;
IL2CPP_EXTERN_C void HeaderInfo_tC25416261914F4C3B4F2C1F4A5B5254C9F7FA918_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void HeaderInfo_tC25416261914F4C3B4F2C1F4A5B5254C9F7FA918_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void HeaderInfo_tC25416261914F4C3B4F2C1F4A5B5254C9F7FA918_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType HeaderInfo_tC25416261914F4C3B4F2C1F4A5B5254C9F7FA918_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_SecureStringAllocator_t261B9D6083129A0996138F50A608D9F5E4C6DC44();
IL2CPP_EXTERN_C_CONST RuntimeType SecureStringAllocator_t261B9D6083129A0996138F50A608D9F5E4C6DC44_0_0_0;
IL2CPP_EXTERN_C void RelationshipEntry_tCF2A840F44B0C6DAFA86300F8E9006222AE9A5B9_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void RelationshipEntry_tCF2A840F44B0C6DAFA86300F8E9006222AE9A5B9_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void RelationshipEntry_tCF2A840F44B0C6DAFA86300F8E9006222AE9A5B9_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType RelationshipEntry_tCF2A840F44B0C6DAFA86300F8E9006222AE9A5B9_0_0_0;
IL2CPP_EXTERN_C void AllocMeshData_t2A9D421887B81E659406F225BE007B9CD4FC1AA0_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void AllocMeshData_t2A9D421887B81E659406F225BE007B9CD4FC1AA0_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void AllocMeshData_t2A9D421887B81E659406F225BE007B9CD4FC1AA0_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType AllocMeshData_t2A9D421887B81E659406F225BE007B9CD4FC1AA0_0_0_0;
IL2CPP_EXTERN_C void BorderParams_t66CC80A4CCAC5C52D6384BE4E66A3230C7099B80_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void BorderParams_t66CC80A4CCAC5C52D6384BE4E66A3230C7099B80_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void BorderParams_t66CC80A4CCAC5C52D6384BE4E66A3230C7099B80_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType BorderParams_t66CC80A4CCAC5C52D6384BE4E66A3230C7099B80_0_0_0;
IL2CPP_EXTERN_C void RectangleParams_t0B5A63548DC33EE252AF81E242B719118C235A4B_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void RectangleParams_t0B5A63548DC33EE252AF81E242B719118C235A4B_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void RectangleParams_t0B5A63548DC33EE252AF81E242B719118C235A4B_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType RectangleParams_t0B5A63548DC33EE252AF81E242B719118C235A4B_0_0_0;
IL2CPP_EXTERN_C void TextParams_t943244753F8E3A49632BBEC7272DAEAA8E10546F_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void TextParams_t943244753F8E3A49632BBEC7272DAEAA8E10546F_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void TextParams_t943244753F8E3A49632BBEC7272DAEAA8E10546F_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType TextParams_t943244753F8E3A49632BBEC7272DAEAA8E10546F_0_0_0;
IL2CPP_EXTERN_C void EdgePair_t86812E9AC735E6688F232D798F8FDB68D84BE262_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void EdgePair_t86812E9AC735E6688F232D798F8FDB68D84BE262_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void EdgePair_t86812E9AC735E6688F232D798F8FDB68D84BE262_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType EdgePair_t86812E9AC735E6688F232D798F8FDB68D84BE262_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_BioControlFunc_tA25CF03804268D67A2A2298BA7CF0304908E1164();
IL2CPP_EXTERN_C_CONST RuntimeType BioControlFunc_tA25CF03804268D67A2A2298BA7CF0304908E1164_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_BioReadFunc_t13D991FB24C42BE3A5866565A417A46DAFCE2182();
IL2CPP_EXTERN_C_CONST RuntimeType BioReadFunc_t13D991FB24C42BE3A5866565A417A46DAFCE2182_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_BioWriteFunc_t7F203B8BD307C07BC5C115240617DC2098776716();
IL2CPP_EXTERN_C_CONST RuntimeType BioWriteFunc_t7F203B8BD307C07BC5C115240617DC2098776716_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_PrintErrorsCallbackFunc_t269F5AA2AEDE407790495E35615D581F8E57DAF1();
IL2CPP_EXTERN_C_CONST RuntimeType PrintErrorsCallbackFunc_t269F5AA2AEDE407790495E35615D581F8E57DAF1_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_NativeSelectFunc_tB8204D9DD01EEA6E46BA2FDD005653A259AD8FCA();
IL2CPP_EXTERN_C_CONST RuntimeType NativeSelectFunc_tB8204D9DD01EEA6E46BA2FDD005653A259AD8FCA_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_NativeServerNameFunc_tD685BC5D92B7FF9953F0BEB205BCF1BF9A2211FA();
IL2CPP_EXTERN_C_CONST RuntimeType NativeServerNameFunc_tD685BC5D92B7FF9953F0BEB205BCF1BF9A2211FA_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_NativeVerifyFunc_t90E561336E71A9644B88DCC9CDD6A63CE98667E7();
IL2CPP_EXTERN_C_CONST RuntimeType NativeVerifyFunc_t90E561336E71A9644B88DCC9CDD6A63CE98667E7_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_BySubjectFunc_t68E2B6BCEAD254F4C66501F0987E52D5ED8CF8DE();
IL2CPP_EXTERN_C_CONST RuntimeType BySubjectFunc_t68E2B6BCEAD254F4C66501F0987E52D5ED8CF8DE_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_GetSecurityInfoNativeCall_tDD06963B1C1773B84152EBDB0B73BB95D5E29A40();
IL2CPP_EXTERN_C_CONST RuntimeType GetSecurityInfoNativeCall_tDD06963B1C1773B84152EBDB0B73BB95D5E29A40_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_SetSecurityInfoNativeCall_t01A2030E2D268FAB3C374416C4AC1CE3E33F5C37();
IL2CPP_EXTERN_C_CONST RuntimeType SetSecurityInfoNativeCall_t01A2030E2D268FAB3C374416C4AC1CE3E33F5C37_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_OnNavMeshPreUpdate_t332BD19DBCB087D7DE3F4F48C1E8F6A4EAB691C7();
IL2CPP_EXTERN_C_CONST RuntimeType OnNavMeshPreUpdate_t332BD19DBCB087D7DE3F4F48C1E8F6A4EAB691C7_0_0_0;
IL2CPP_EXTERN_C void FocusableHierarchyTraversal_tE18EF688B7AC65FC273812175FCF84916E3E7E4B_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void FocusableHierarchyTraversal_tE18EF688B7AC65FC273812175FCF84916E3E7E4B_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void FocusableHierarchyTraversal_tE18EF688B7AC65FC273812175FCF84916E3E7E4B_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType FocusableHierarchyTraversal_tE18EF688B7AC65FC273812175FCF84916E3E7E4B_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_InvocationEntryDelegate_t6CCA2089ADE78BEAC44921F10D121BD51641A3C3();
IL2CPP_EXTERN_C_CONST RuntimeType InvocationEntryDelegate_t6CCA2089ADE78BEAC44921F10D121BD51641A3C3_0_0_0;
IL2CPP_EXTERN_C void FormatParam_t76A31D70C9964751A9AAFD4CE6951437E6C1CD8E_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void FormatParam_t76A31D70C9964751A9AAFD4CE6951437E6C1CD8E_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void FormatParam_t76A31D70C9964751A9AAFD4CE6951437E6C1CD8E_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType FormatParam_t76A31D70C9964751A9AAFD4CE6951437E6C1CD8E_0_0_0;
IL2CPP_EXTERN_C void EmitParams_tE76279CE754C7B0A4ECDA7E294587AACB039FBA0_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void EmitParams_tE76279CE754C7B0A4ECDA7E294587AACB039FBA0_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void EmitParams_tE76279CE754C7B0A4ECDA7E294587AACB039FBA0_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType EmitParams_tE76279CE754C7B0A4ECDA7E294587AACB039FBA0_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_OnCaptureResourceCreatedCallback_tA8D1E423E6D2EB046CA66BF468199752BA2A882B();
IL2CPP_EXTERN_C_CONST RuntimeType OnCaptureResourceCreatedCallback_tA8D1E423E6D2EB046CA66BF468199752BA2A882B_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_OnCapturedToDiskCallback_t184CFBFA312A113D865AB3348AD2FCC9F2B8C87A();
IL2CPP_EXTERN_C_CONST RuntimeType OnCapturedToDiskCallback_t184CFBFA312A113D865AB3348AD2FCC9F2B8C87A_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_OnPhotoModeStartedCallback_tCC911AAFA0C56D78D8C3AFAB4F10C6D64AFB8F28();
IL2CPP_EXTERN_C_CONST RuntimeType OnPhotoModeStartedCallback_tCC911AAFA0C56D78D8C3AFAB4F10C6D64AFB8F28_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_OnPhotoModeStoppedCallback_t0FBC7D27E79939CF7FE318FA275FDEE6330BB28B();
IL2CPP_EXTERN_C_CONST RuntimeType OnPhotoModeStoppedCallback_t0FBC7D27E79939CF7FE318FA275FDEE6330BB28B_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_ErrorDelegate_t0E4D50125D761FB7F662E5A79E9AA8D915BB2246();
IL2CPP_EXTERN_C_CONST RuntimeType ErrorDelegate_t0E4D50125D761FB7F662E5A79E9AA8D915BB2246_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_StatusDelegate_t1DAF325F3F4C4209ACB9711E4D9B92956BF9D39D();
IL2CPP_EXTERN_C_CONST RuntimeType StatusDelegate_t1DAF325F3F4C4209ACB9711E4D9B92956BF9D39D_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_CreateOutputMethod_tD18AFE3B69E6DDD913D82D5FA1D5D909CEEC8509();
IL2CPP_EXTERN_C_CONST RuntimeType CreateOutputMethod_tD18AFE3B69E6DDD913D82D5FA1D5D909CEEC8509_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_UpdateFunction_t1C48B7EECBE47AC123A9D9D7D9D2A9EE951C56C4();
IL2CPP_EXTERN_C_CONST RuntimeType UpdateFunction_t1C48B7EECBE47AC123A9D9D7D9D2A9EE951C56C4_0_0_0;
IL2CPP_EXTERN_C void PointerLocation_t4E582463D283A22822997C2841D5E1A30D16FCF6_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void PointerLocation_t4E582463D283A22822997C2841D5E1A30D16FCF6_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void PointerLocation_t4E582463D283A22822997C2841D5E1A30D16FCF6_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType PointerLocation_t4E582463D283A22822997C2841D5E1A30D16FCF6_0_0_0;
IL2CPP_EXTERN_C void BrickMeta_t75B625970B160751665565BB3039980A81DED1D1_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void BrickMeta_t75B625970B160751665565BB3039980A81DED1D1_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void BrickMeta_t75B625970B160751665565BB3039980A81DED1D1_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType BrickMeta_t75B625970B160751665565BB3039980A81DED1D1_0_0_0;
IL2CPP_EXTERN_C void VoxelMeta_t68E17D649E8573BDE8903A4931A80C316245FF46_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void VoxelMeta_t68E17D649E8573BDE8903A4931A80C316245FF46_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void VoxelMeta_t68E17D649E8573BDE8903A4931A80C316245FF46_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType VoxelMeta_t68E17D649E8573BDE8903A4931A80C316245FF46_0_0_0;
IL2CPP_EXTERN_C void DataLocation_t6BEE413AC50D21B058D298D198D7C4852F1443AF_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void DataLocation_t6BEE413AC50D21B058D298D198D7C4852F1443AF_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void DataLocation_t6BEE413AC50D21B058D298D198D7C4852F1443AF_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType DataLocation_t6BEE413AC50D21B058D298D198D7C4852F1443AF_0_0_0;
IL2CPP_EXTERN_C void RuntimeResources_tF6D3DA32C48B25FE5365AFCD591ABB471B1E0C5A_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void RuntimeResources_tF6D3DA32C48B25FE5365AFCD591ABB471B1E0C5A_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void RuntimeResources_tF6D3DA32C48B25FE5365AFCD591ABB471B1E0C5A_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType RuntimeResources_tF6D3DA32C48B25FE5365AFCD591ABB471B1E0C5A_0_0_0;
IL2CPP_EXTERN_C void SerializableAssetItem_t6A8C418A5D6068E49195CA2F1908A36B36423416_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void SerializableAssetItem_t6A8C418A5D6068E49195CA2F1908A36B36423416_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void SerializableAssetItem_t6A8C418A5D6068E49195CA2F1908A36B36423416_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType SerializableAssetItem_t6A8C418A5D6068E49195CA2F1908A36B36423416_0_0_0;
IL2CPP_EXTERN_C void SerializableBoundItem_tAAC617FC15812D4C15EA67F564DBBB97C91CA76C_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void SerializableBoundItem_tAAC617FC15812D4C15EA67F564DBBB97C91CA76C_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void SerializableBoundItem_tAAC617FC15812D4C15EA67F564DBBB97C91CA76C_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType SerializableBoundItem_tAAC617FC15812D4C15EA67F564DBBB97C91CA76C_0_0_0;
IL2CPP_EXTERN_C void SerializableHasPVItem_tCB43CF2DDF020627DE121934A0031B5A4A418622_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void SerializableHasPVItem_tCB43CF2DDF020627DE121934A0031B5A4A418622_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void SerializableHasPVItem_tCB43CF2DDF020627DE121934A0031B5A4A418622_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType SerializableHasPVItem_tCB43CF2DDF020627DE121934A0031B5A4A418622_0_0_0;
IL2CPP_EXTERN_C void SerializablePVBakeSettings_t4E5B089BA357A2E91A67F570519556876B797877_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void SerializablePVBakeSettings_t4E5B089BA357A2E91A67F570519556876B797877_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void SerializablePVBakeSettings_t4E5B089BA357A2E91A67F570519556876B797877_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType SerializablePVBakeSettings_t4E5B089BA357A2E91A67F570519556876B797877_0_0_0;
IL2CPP_EXTERN_C void SerializablePVProfile_tD3D31A9B22592CE78C6B023E2A4DD629680BD069_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void SerializablePVProfile_tD3D31A9B22592CE78C6B023E2A4DD629680BD069_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void SerializablePVProfile_tD3D31A9B22592CE78C6B023E2A4DD629680BD069_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType SerializablePVProfile_tD3D31A9B22592CE78C6B023E2A4DD629680BD069_0_0_0;
IL2CPP_EXTERN_C void ProcInfo_t79019AEB58EDD7089B790325C2EBE830E1F458D2_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ProcInfo_t79019AEB58EDD7089B790325C2EBE830E1F458D2_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ProcInfo_t79019AEB58EDD7089B790325C2EBE830E1F458D2_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ProcInfo_t79019AEB58EDD7089B790325C2EBE830E1F458D2_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_GetRayIntersectionAllCallback_t52E7AE4ECEA3F9744FF7F8448F852C872A70315C();
IL2CPP_EXTERN_C_CONST RuntimeType GetRayIntersectionAllCallback_t52E7AE4ECEA3F9744FF7F8448F852C872A70315C_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_GetRayIntersectionAllNonAllocCallback_t28D7ACEBBE525DE0CBEA67986E4C3891D694F980();
IL2CPP_EXTERN_C_CONST RuntimeType GetRayIntersectionAllNonAllocCallback_t28D7ACEBBE525DE0CBEA67986E4C3891D694F980_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_GetRaycastNonAllocCallback_tC3DA6EE6063FE663DD0A9FC52439D825DE4A1FFC();
IL2CPP_EXTERN_C_CONST RuntimeType GetRaycastNonAllocCallback_tC3DA6EE6063FE663DD0A9FC52439D825DE4A1FFC_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_Raycast2DCallback_tC7E4C51859884370CFA01C0DD124F214F46E08E0();
IL2CPP_EXTERN_C_CONST RuntimeType Raycast2DCallback_tC7E4C51859884370CFA01C0DD124F214F46E08E0_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_Raycast3DCallback_t6D90FA1FB092312B3B52812191581F209A9C2B4A();
IL2CPP_EXTERN_C_CONST RuntimeType Raycast3DCallback_t6D90FA1FB092312B3B52812191581F209A9C2B4A_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_RaycastAllCallback_t4AFFDCDAA6F02DD74E1E2DE455BA011D82BED47A();
IL2CPP_EXTERN_C_CONST RuntimeType RaycastAllCallback_t4AFFDCDAA6F02DD74E1E2DE455BA011D82BED47A_0_0_0;
IL2CPP_EXTERN_C void CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31_0_0_0;
IL2CPP_EXTERN_C void LowerCaseMapping_t3E26F9E4ED2CCDA7404B4E4C123B0175FF5F8FF1_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void LowerCaseMapping_t3E26F9E4ED2CCDA7404B4E4C123B0175FF5F8FF1_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void LowerCaseMapping_t3E26F9E4ED2CCDA7404B4E4C123B0175FF5F8FF1_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType LowerCaseMapping_t3E26F9E4ED2CCDA7404B4E4C123B0175FF5F8FF1_0_0_0;
IL2CPP_EXTERN_C void SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_UpdatedEventHandler_tB0D5A5BA322FE093894992C29DCF51E7E12579C4();
IL2CPP_EXTERN_C_CONST RuntimeType UpdatedEventHandler_tB0D5A5BA322FE093894992C29DCF51E7E12579C4_0_0_0;
IL2CPP_EXTERN_C void DepthOrderedDirtyTracking_t7972148BB4524E0E788C8D94A005C3BAF8C189A4_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void DepthOrderedDirtyTracking_t7972148BB4524E0E788C8D94A005C3BAF8C189A4_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void DepthOrderedDirtyTracking_t7972148BB4524E0E788C8D94A005C3BAF8C189A4_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType DepthOrderedDirtyTracking_t7972148BB4524E0E788C8D94A005C3BAF8C189A4_0_0_0;
IL2CPP_EXTERN_C void RenderNodeData_t7527D1643CC280CE2B2E40AB9F5154615B7A99AE_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void RenderNodeData_t7527D1643CC280CE2B2E40AB9F5154615B7A99AE_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void RenderNodeData_t7527D1643CC280CE2B2E40AB9F5154615B7A99AE_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType RenderNodeData_t7527D1643CC280CE2B2E40AB9F5154615B7A99AE_0_0_0;
IL2CPP_EXTERN_C void CompiledPassInfo_t7434C596A1EA90A428DAECAA3FFB87314BC84615_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void CompiledPassInfo_t7434C596A1EA90A428DAECAA3FFB87314BC84615_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void CompiledPassInfo_t7434C596A1EA90A428DAECAA3FFB87314BC84615_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType CompiledPassInfo_t7434C596A1EA90A428DAECAA3FFB87314BC84615_0_0_0;
IL2CPP_EXTERN_C void CompiledResourceInfo_t1B258600AF5819B19709F6E4FF0D2803D039336A_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void CompiledResourceInfo_t1B258600AF5819B19709F6E4FF0D2803D039336A_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void CompiledResourceInfo_t1B258600AF5819B19709F6E4FF0D2803D039336A_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType CompiledResourceInfo_t1B258600AF5819B19709F6E4FF0D2803D039336A_0_0_0;
IL2CPP_EXTERN_C void PassDebugData_tE911DB0148519C33C773511F2D92F57AF1B6D258_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void PassDebugData_tE911DB0148519C33C773511F2D92F57AF1B6D258_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void PassDebugData_tE911DB0148519C33C773511F2D92F57AF1B6D258_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType PassDebugData_tE911DB0148519C33C773511F2D92F57AF1B6D258_0_0_0;
IL2CPP_EXTERN_C void ResourceDebugData_t83301B4E44B1F0B49486E21F019AFEE444809A9B_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ResourceDebugData_t83301B4E44B1F0B49486E21F019AFEE444809A9B_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ResourceDebugData_t83301B4E44B1F0B49486E21F019AFEE444809A9B_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ResourceDebugData_t83301B4E44B1F0B49486E21F019AFEE444809A9B_0_0_0;
IL2CPP_EXTERN_C void HitInfo_t34AF939575E1C059D581AB7ED8F039BCFFC70314_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void HitInfo_t34AF939575E1C059D581AB7ED8F039BCFFC70314_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void HitInfo_t34AF939575E1C059D581AB7ED8F039BCFFC70314_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType HitInfo_t34AF939575E1C059D581AB7ED8F039BCFFC70314_0_0_0;
IL2CPP_EXTERN_C void Edge_tC0E866D7F28E832CE7BEF95C87BECCD97FB09AAB_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Edge_tC0E866D7F28E832CE7BEF95C87BECCD97FB09AAB_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Edge_tC0E866D7F28E832CE7BEF95C87BECCD97FB09AAB_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Edge_tC0E866D7F28E832CE7BEF95C87BECCD97FB09AAB_0_0_0;
IL2CPP_EXTERN_C void Escape_tBDF8B9DE3CB50EC7389A1FCAD8AE65F6AA289178_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Escape_tBDF8B9DE3CB50EC7389A1FCAD8AE65F6AA289178_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Escape_tBDF8B9DE3CB50EC7389A1FCAD8AE65F6AA289178_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Escape_tBDF8B9DE3CB50EC7389A1FCAD8AE65F6AA289178_0_0_0;
IL2CPP_EXTERN_C void SmtpResponse_tCD2A8DC7B0BD3208817AA49BDB60BC32BD62C854_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void SmtpResponse_tCD2A8DC7B0BD3208817AA49BDB60BC32BD62C854_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void SmtpResponse_tCD2A8DC7B0BD3208817AA49BDB60BC32BD62C854_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType SmtpResponse_tCD2A8DC7B0BD3208817AA49BDB60BC32BD62C854_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_SendFileHandler_tFBB94763A61E5EC1AF7F81EC6F05F460B913B902();
IL2CPP_EXTERN_C_CONST RuntimeType SendFileHandler_tFBB94763A61E5EC1AF7F81EC6F05F460B913B902_0_0_0;
IL2CPP_EXTERN_C void ReadWriteParameters_t14911E85F7252B5A39D9A53466C7EDE243327033_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ReadWriteParameters_t14911E85F7252B5A39D9A53466C7EDE243327033_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ReadWriteParameters_t14911E85F7252B5A39D9A53466C7EDE243327033_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ReadWriteParameters_t14911E85F7252B5A39D9A53466C7EDE243327033_0_0_0;
IL2CPP_EXTERN_C void PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8_0_0_0;
IL2CPP_EXTERN_C void ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814_0_0_0;
IL2CPP_EXTERN_C void Enumerator_tA61A6E560BAB8F96C2471024F8FBFF2B6BC1F1BB_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Enumerator_tA61A6E560BAB8F96C2471024F8FBFF2B6BC1F1BB_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Enumerator_tA61A6E560BAB8F96C2471024F8FBFF2B6BC1F1BB_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Enumerator_tA61A6E560BAB8F96C2471024F8FBFF2B6BC1F1BB_0_0_0;
IL2CPP_EXTERN_C void ImportStruct_t8CE0AC0405305E6E27224A07CF153167E99C98B1_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ImportStruct_t8CE0AC0405305E6E27224A07CF153167E99C98B1_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ImportStruct_t8CE0AC0405305E6E27224A07CF153167E99C98B1_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ImportStruct_t8CE0AC0405305E6E27224A07CF153167E99C98B1_0_0_0;
IL2CPP_EXTERN_C void ResolveContext_tEF37DBA22D641E4FE1568C5EBE1605A98D86C992_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ResolveContext_tEF37DBA22D641E4FE1568C5EBE1605A98D86C992_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ResolveContext_tEF37DBA22D641E4FE1568C5EBE1605A98D86C992_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ResolveContext_tEF37DBA22D641E4FE1568C5EBE1605A98D86C992_0_0_0;
IL2CPP_EXTERN_C void AttributeOverride_t58F1DF22E69714D48ECBEEAD266D443A858BADEF_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void AttributeOverride_t58F1DF22E69714D48ECBEEAD266D443A858BADEF_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void AttributeOverride_t58F1DF22E69714D48ECBEEAD266D443A858BADEF_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType AttributeOverride_t58F1DF22E69714D48ECBEEAD266D443A858BADEF_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_OnDetectFocusChangeFunction_tB31D458403A6818419AAAFBA0049B72060284326();
IL2CPP_EXTERN_C_CONST RuntimeType OnDetectFocusChangeFunction_tB31D458403A6818419AAAFBA0049B72060284326_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_OnIndexChangeFunction_t85C95CE0E180FEF496A57F758911AD7D1562043C();
IL2CPP_EXTERN_C_CONST RuntimeType OnIndexChangeFunction_t85C95CE0E180FEF496A57F758911AD7D1562043C_0_0_0;
IL2CPP_EXTERN_C void SpecialCharacter_t869F8BE65A7FE32AFD4196118258F49A63D8E2BD_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void SpecialCharacter_t869F8BE65A7FE32AFD4196118258F49A63D8E2BD_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void SpecialCharacter_t869F8BE65A7FE32AFD4196118258F49A63D8E2BD_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType SpecialCharacter_t869F8BE65A7FE32AFD4196118258F49A63D8E2BD_0_0_0;
IL2CPP_EXTERN_C void FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3_0_0_0;
IL2CPP_EXTERN_C void FontReferenceMap_t1C0CECF3F0F650BE4A881A50A25EFB26965E7831_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void FontReferenceMap_t1C0CECF3F0F650BE4A881A50A25EFB26965E7831_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void FontReferenceMap_t1C0CECF3F0F650BE4A881A50A25EFB26965E7831_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType FontReferenceMap_t1C0CECF3F0F650BE4A881A50A25EFB26965E7831_0_0_0;
IL2CPP_EXTERN_C void BlitInfo_t6D4C0580BBEF65F5EAD39FB6DBC85F360CF6A357_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void BlitInfo_t6D4C0580BBEF65F5EAD39FB6DBC85F360CF6A357_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void BlitInfo_t6D4C0580BBEF65F5EAD39FB6DBC85F360CF6A357_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType BlitInfo_t6D4C0580BBEF65F5EAD39FB6DBC85F360CF6A357_0_0_0;
IL2CPP_EXTERN_C void TextureInfo_t581C305A0444F786E0E7405054714685BE3A5A5B_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void TextureInfo_t581C305A0444F786E0E7405054714685BE3A5A5B_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void TextureInfo_t581C305A0444F786E0E7405054714685BE3A5A5B_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType TextureInfo_t581C305A0444F786E0E7405054714685BE3A5A5B_0_0_0;
IL2CPP_EXTERN_C void FormatLiterals_tB7BAA4DA8EAC1AB8D825A2D9C446C9FCD9BBD94A_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void FormatLiterals_tB7BAA4DA8EAC1AB8D825A2D9C446C9FCD9BBD94A_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void FormatLiterals_tB7BAA4DA8EAC1AB8D825A2D9C446C9FCD9BBD94A_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType FormatLiterals_tB7BAA4DA8EAC1AB8D825A2D9C446C9FCD9BBD94A_0_0_0;
IL2CPP_EXTERN_C void TimeSpanRawInfo_tDB52E4C9854A909DB47D2FEF0A1114A57F3C29FA_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void TimeSpanRawInfo_tDB52E4C9854A909DB47D2FEF0A1114A57F3C29FA_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void TimeSpanRawInfo_tDB52E4C9854A909DB47D2FEF0A1114A57F3C29FA_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType TimeSpanRawInfo_tDB52E4C9854A909DB47D2FEF0A1114A57F3C29FA_0_0_0;
IL2CPP_EXTERN_C void TimeSpanResult_tD0B15293C8224251926B8E7F9D699E00A0CB10B7_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void TimeSpanResult_tD0B15293C8224251926B8E7F9D699E00A0CB10B7_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void TimeSpanResult_tD0B15293C8224251926B8E7F9D699E00A0CB10B7_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType TimeSpanResult_tD0B15293C8224251926B8E7F9D699E00A0CB10B7_0_0_0;
IL2CPP_EXTERN_C void DYNAMIC_TIME_ZONE_INFORMATION_t5E5AC77C219A3CC0783CECA5AE7CECB2260CC16E_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void DYNAMIC_TIME_ZONE_INFORMATION_t5E5AC77C219A3CC0783CECA5AE7CECB2260CC16E_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void DYNAMIC_TIME_ZONE_INFORMATION_t5E5AC77C219A3CC0783CECA5AE7CECB2260CC16E_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType DYNAMIC_TIME_ZONE_INFORMATION_t5E5AC77C219A3CC0783CECA5AE7CECB2260CC16E_0_0_0;
IL2CPP_EXTERN_C void TransitionTime_tE1A32FD9A7AC39502239D3C9A4EA83ED2AD81823_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void TransitionTime_tE1A32FD9A7AC39502239D3C9A4EA83ED2AD81823_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void TransitionTime_tE1A32FD9A7AC39502239D3C9A4EA83ED2AD81823_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType TransitionTime_tE1A32FD9A7AC39502239D3C9A4EA83ED2AD81823_0_0_0;
IL2CPP_EXTERN_C void TreeViewItemWrapper_t8130863A8182C5BF6925A88AF5E77192A4D519CE_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void TreeViewItemWrapper_t8130863A8182C5BF6925A88AF5E77192A4D519CE_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void TreeViewItemWrapper_t8130863A8182C5BF6925A88AF5E77192A4D519CE_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType TreeViewItemWrapper_t8130863A8182C5BF6925A88AF5E77192A4D519CE_0_0_0;
IL2CPP_EXTERN_C void ClosingInfo_t2DD9FDAA81DB13384355D75E956D24D1594C9D14_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ClosingInfo_t2DD9FDAA81DB13384355D75E956D24D1594C9D14_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ClosingInfo_t2DD9FDAA81DB13384355D75E956D24D1594C9D14_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ClosingInfo_t2DD9FDAA81DB13384355D75E956D24D1594C9D14_0_0_0;
IL2CPP_EXTERN_C void Entry_tB8765CA56422E2C92887314844384843688DCB9F_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Entry_tB8765CA56422E2C92887314844384843688DCB9F_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Entry_tB8765CA56422E2C92887314844384843688DCB9F_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Entry_tB8765CA56422E2C92887314844384843688DCB9F_0_0_0;
IL2CPP_EXTERN_C void AllocToFree_tC46982856CB8220A92BB724F5FB75CCCD09C67D8_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void AllocToFree_tC46982856CB8220A92BB724F5FB75CCCD09C67D8_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void AllocToFree_tC46982856CB8220A92BB724F5FB75CCCD09C67D8_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType AllocToFree_tC46982856CB8220A92BB724F5FB75CCCD09C67D8_0_0_0;
IL2CPP_EXTERN_C void AllocToUpdate_tD0221D0ABC5378DDE5AAB1DAA219C337E562B512_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void AllocToUpdate_tD0221D0ABC5378DDE5AAB1DAA219C337E562B512_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void AllocToUpdate_tD0221D0ABC5378DDE5AAB1DAA219C337E562B512_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType AllocToUpdate_tD0221D0ABC5378DDE5AAB1DAA219C337E562B512_0_0_0;
IL2CPP_EXTERN_C void DeviceToFree_tF2AD2D5F5C1936F25516AEF0736CF4BCA1B3052B_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void DeviceToFree_tF2AD2D5F5C1936F25516AEF0736CF4BCA1B3052B_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void DeviceToFree_tF2AD2D5F5C1936F25516AEF0736CF4BCA1B3052B_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType DeviceToFree_tF2AD2D5F5C1936F25516AEF0736CF4BCA1B3052B_0_0_0;
IL2CPP_EXTERN_C void EvaluationState_t91A908747DD184A56AA6402529B965E07E555567_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void EvaluationState_t91A908747DD184A56AA6402529B965E07E555567_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void EvaluationState_t91A908747DD184A56AA6402529B965E07E555567_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType EvaluationState_t91A908747DD184A56AA6402529B965E07E555567_0_0_0;
IL2CPP_EXTERN_C void DateMapping_tD71D0AF5C7C6CB4F9517C292B1B61D7AF7CFCCFD_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void DateMapping_tD71D0AF5C7C6CB4F9517C292B1B61D7AF7CFCCFD_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void DateMapping_tD71D0AF5C7C6CB4F9517C292B1B61D7AF7CFCCFD_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType DateMapping_tD71D0AF5C7C6CB4F9517C292B1B61D7AF7CFCCFD_0_0_0;
IL2CPP_EXTERN_C void WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44_0_0_0;
IL2CPP_EXTERN_C void unitytls_interface_struct_tFD4B67EBFBE5D7FF212193507C3517DBA60978ED_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void unitytls_interface_struct_tFD4B67EBFBE5D7FF212193507C3517DBA60978ED_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void unitytls_interface_struct_tFD4B67EBFBE5D7FF212193507C3517DBA60978ED_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType unitytls_interface_struct_tFD4B67EBFBE5D7FF212193507C3517DBA60978ED_0_0_0;
IL2CPP_EXTERN_C void unitytls_tlsctx_callbacks_t348AE3D333ACBB2F17D4D7B8412256357B39B568_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void unitytls_tlsctx_callbacks_t348AE3D333ACBB2F17D4D7B8412256357B39B568_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void unitytls_tlsctx_callbacks_t348AE3D333ACBB2F17D4D7B8412256357B39B568_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType unitytls_tlsctx_callbacks_t348AE3D333ACBB2F17D4D7B8412256357B39B568_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_unitytls_tlsctx_certificate_callback_tB2FEBFA5D27CFA86544C06451270B36D77F2932C();
IL2CPP_EXTERN_C_CONST RuntimeType unitytls_tlsctx_certificate_callback_tB2FEBFA5D27CFA86544C06451270B36D77F2932C_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_unitytls_tlsctx_read_callback_tDBE877327789CABE940C2A724EC9A5D142318851();
IL2CPP_EXTERN_C_CONST RuntimeType unitytls_tlsctx_read_callback_tDBE877327789CABE940C2A724EC9A5D142318851_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_unitytls_tlsctx_trace_callback_tAC1169E423F6EBDA60CDD5D33E1795A8811E0BE6();
IL2CPP_EXTERN_C_CONST RuntimeType unitytls_tlsctx_trace_callback_tAC1169E423F6EBDA60CDD5D33E1795A8811E0BE6_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_unitytls_tlsctx_write_callback_t5D4B64AD846D04E819A49689F7EAA47365636611();
IL2CPP_EXTERN_C_CONST RuntimeType unitytls_tlsctx_write_callback_t5D4B64AD846D04E819A49689F7EAA47365636611_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_unitytls_tlsctx_x509verify_callback_t3334D904C28324D444B6C26BEEF29B5E07D9D58D();
IL2CPP_EXTERN_C_CONST RuntimeType unitytls_tlsctx_x509verify_callback_t3334D904C28324D444B6C26BEEF29B5E07D9D58D_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_unitytls_x509verify_callback_t1B72B7CF228F76F09A6A75C54C15F2084C01CA09();
IL2CPP_EXTERN_C_CONST RuntimeType unitytls_x509verify_callback_t1B72B7CF228F76F09A6A75C54C15F2084C01CA09_0_0_0;
IL2CPP_EXTERN_C void RenderPassInputSummary_tB1F6567DB675C0D2B3F253BA69C3DCE05B15E036_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void RenderPassInputSummary_tB1F6567DB675C0D2B3F253BA69C3DCE05B15E036_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void RenderPassInputSummary_tB1F6567DB675C0D2B3F253BA69C3DCE05B15E036_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType RenderPassInputSummary_tB1F6567DB675C0D2B3F253BA69C3DCE05B15E036_0_0_0;
IL2CPP_EXTERN_C void UriScheme_t6B786086C95A0192D655D1576DCD35D7B26CD794_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void UriScheme_t6B786086C95A0192D655D1576DCD35D7B26CD794_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void UriScheme_t6B786086C95A0192D655D1576DCD35D7B26CD794_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType UriScheme_t6B786086C95A0192D655D1576DCD35D7B26CD794_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_OnStartedRecordingVideoCallback_t64E6C26F7ABAB9254AACB9D62C693F8922C1E45C();
IL2CPP_EXTERN_C_CONST RuntimeType OnStartedRecordingVideoCallback_t64E6C26F7ABAB9254AACB9D62C693F8922C1E45C_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_OnStoppedRecordingVideoCallback_tC089900DD6C16C42C782522C257740BB222C1437();
IL2CPP_EXTERN_C_CONST RuntimeType OnStoppedRecordingVideoCallback_tC089900DD6C16C42C782522C257740BB222C1437_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_OnVideoCaptureResourceCreatedCallback_t5652A803A57C7FEA9BEAAA7250D14204C9AA114C();
IL2CPP_EXTERN_C_CONST RuntimeType OnVideoCaptureResourceCreatedCallback_t5652A803A57C7FEA9BEAAA7250D14204C9AA114C_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_OnVideoModeStartedCallback_t7BFBEBA2CDDBFA58023D8BA206E0D90920819C1F();
IL2CPP_EXTERN_C_CONST RuntimeType OnVideoModeStartedCallback_t7BFBEBA2CDDBFA58023D8BA206E0D90920819C1F_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_OnVideoModeStoppedCallback_tA29659F86D8702608589583F3F415ABF57F6A054();
IL2CPP_EXTERN_C_CONST RuntimeType OnVideoModeStoppedCallback_tA29659F86D8702608589583F3F415ABF57F6A054_0_0_0;
IL2CPP_EXTERN_C void Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677_0_0_0;
IL2CPP_EXTERN_C void SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8_0_0_0;
IL2CPP_EXTERN_C void SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76_0_0_0;
IL2CPP_EXTERN_C void UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484_0_0_0;
IL2CPP_EXTERN_C void VolatileBoolean_t9E1B0E7929E736D122D1C494D49E80C90874D041_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void VolatileBoolean_t9E1B0E7929E736D122D1C494D49E80C90874D041_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void VolatileBoolean_t9E1B0E7929E736D122D1C494D49E80C90874D041_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType VolatileBoolean_t9E1B0E7929E736D122D1C494D49E80C90874D041_0_0_0;
IL2CPP_EXTERN_C void VolatileInt32_tF87437D9108A3B42A6D3DA0147CD8B00C0538693_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void VolatileInt32_tF87437D9108A3B42A6D3DA0147CD8B00C0538693_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void VolatileInt32_tF87437D9108A3B42A6D3DA0147CD8B00C0538693_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType VolatileInt32_tF87437D9108A3B42A6D3DA0147CD8B00C0538693_0_0_0;
IL2CPP_EXTERN_C void VolatileObject_tEA3ACFAAFB9D2EFA5162F693BAAB342EA7737B99_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void VolatileObject_tEA3ACFAAFB9D2EFA5162F693BAAB342EA7737B99_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void VolatileObject_tEA3ACFAAFB9D2EFA5162F693BAAB342EA7737B99_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType VolatileObject_tEA3ACFAAFB9D2EFA5162F693BAAB342EA7737B99_0_0_0;
IL2CPP_EXTERN_C void Win32_IN6_ADDR_t9B6CDD60B0E692B4829A9A9F9F6FCB2A3F511363_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Win32_IN6_ADDR_t9B6CDD60B0E692B4829A9A9F9F6FCB2A3F511363_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Win32_IN6_ADDR_t9B6CDD60B0E692B4829A9A9F9F6FCB2A3F511363_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Win32_IN6_ADDR_t9B6CDD60B0E692B4829A9A9F9F6FCB2A3F511363_0_0_0;
IL2CPP_EXTERN_C void Win32_MIB_TCP6ROW_tA246F0C25601115F6A63AE262E2FF0DD46662562_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Win32_MIB_TCP6ROW_tA246F0C25601115F6A63AE262E2FF0DD46662562_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Win32_MIB_TCP6ROW_tA246F0C25601115F6A63AE262E2FF0DD46662562_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Win32_MIB_TCP6ROW_tA246F0C25601115F6A63AE262E2FF0DD46662562_0_0_0;
IL2CPP_EXTERN_C void Win32_MIB_TCPROW_tC8F5BC4ED0E21699798F54D80E421130241FA61D_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Win32_MIB_TCPROW_tC8F5BC4ED0E21699798F54D80E421130241FA61D_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Win32_MIB_TCPROW_tC8F5BC4ED0E21699798F54D80E421130241FA61D_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Win32_MIB_TCPROW_tC8F5BC4ED0E21699798F54D80E421130241FA61D_0_0_0;
IL2CPP_EXTERN_C void Win32_MIB_UDP6ROW_t607C9AF97C1096B1A21AE9B6DAE1562E50617B9A_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Win32_MIB_UDP6ROW_t607C9AF97C1096B1A21AE9B6DAE1562E50617B9A_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Win32_MIB_UDP6ROW_t607C9AF97C1096B1A21AE9B6DAE1562E50617B9A_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Win32_MIB_UDP6ROW_t607C9AF97C1096B1A21AE9B6DAE1562E50617B9A_0_0_0;
IL2CPP_EXTERN_C void Win32_MIB_UDPROW_tC48E61D5CB7A87C28BF1D0963DC0916C28AA8FD1_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Win32_MIB_UDPROW_tC48E61D5CB7A87C28BF1D0963DC0916C28AA8FD1_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Win32_MIB_UDPROW_tC48E61D5CB7A87C28BF1D0963DC0916C28AA8FD1_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Win32_MIB_UDPROW_tC48E61D5CB7A87C28BF1D0963DC0916C28AA8FD1_0_0_0;
IL2CPP_EXTERN_C void ProjectionInfo_tF6C24087F1CB99E7F3166A95D0CD282B7421FA81_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ProjectionInfo_tF6C24087F1CB99E7F3166A95D0CD282B7421FA81_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ProjectionInfo_tF6C24087F1CB99E7F3166A95D0CD282B7421FA81_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ProjectionInfo_tF6C24087F1CB99E7F3166A95D0CD282B7421FA81_0_0_0;
IL2CPP_EXTERN_C void XRMirrorViewBlitDesc_tC913B2856BA2160BC3AD99F0C67293850E2162E0_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void XRMirrorViewBlitDesc_tC913B2856BA2160BC3AD99F0C67293850E2162E0_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void XRMirrorViewBlitDesc_tC913B2856BA2160BC3AD99F0C67293850E2162E0_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType XRMirrorViewBlitDesc_tC913B2856BA2160BC3AD99F0C67293850E2162E0_0_0_0;
IL2CPP_EXTERN_C void XRRenderPass_t9E8711E8C69E3917AA39A0CA8304B604ED2838E8_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void XRRenderPass_t9E8711E8C69E3917AA39A0CA8304B604ED2838E8_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void XRRenderPass_t9E8711E8C69E3917AA39A0CA8304B604ED2838E8_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType XRRenderPass_t9E8711E8C69E3917AA39A0CA8304B604ED2838E8_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_ReadDataHandler_t14FE17C332DEFB64312F2193AF0D1EB57825CFD6();
IL2CPP_EXTERN_C_CONST RuntimeType ReadDataHandler_t14FE17C332DEFB64312F2193AF0D1EB57825CFD6_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_IsBurstEnabledDelegate_t0628E97FE590352373ABA022E954D7F5CE183D3C();
IL2CPP_EXTERN_C_CONST RuntimeType IsBurstEnabledDelegate_t0628E97FE590352373ABA022E954D7F5CE183D3C_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_WindowsCancelHandler_tC396577B75EBC714D192D78185E70181CBB963B4();
IL2CPP_EXTERN_C_CONST RuntimeType WindowsCancelHandler_tC396577B75EBC714D192D78185E70181CBB963B4_0_0_0;
IL2CPP_EXTERN_C void ContextMenuItem_t0D29D1ECB0C1F769EFC9ACA2D0AE6B1A8A4736A9_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ContextMenuItem_t0D29D1ECB0C1F769EFC9ACA2D0AE6B1A8A4736A9_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ContextMenuItem_t0D29D1ECB0C1F769EFC9ACA2D0AE6B1A8A4736A9_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ContextMenuItem_t0D29D1ECB0C1F769EFC9ACA2D0AE6B1A8A4736A9_0_0_0;
IL2CPP_EXTERN_C void NameAndTooltip_tA6656221A6E70C8409CFCBAF6CCEC9C718E344D4_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void NameAndTooltip_tA6656221A6E70C8409CFCBAF6CCEC9C718E344D4_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void NameAndTooltip_tA6656221A6E70C8409CFCBAF6CCEC9C718E344D4_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType NameAndTooltip_tA6656221A6E70C8409CFCBAF6CCEC9C718E344D4_0_0_0;
IL2CPP_EXTERN_C void NumberBuffer_t0F9FC9D15F03CFDEBA3B3F4210A2AB3B53305CDA_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void NumberBuffer_t0F9FC9D15F03CFDEBA3B3F4210A2AB3B53305CDA_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void NumberBuffer_t0F9FC9D15F03CFDEBA3B3F4210A2AB3B53305CDA_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType NumberBuffer_t0F9FC9D15F03CFDEBA3B3F4210A2AB3B53305CDA_0_0_0;
IL2CPP_EXTERN_C void InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D_0_0_0;
IL2CPP_EXTERN_C void SEC_WINNT_AUTH_IDENTITY_W_t08251E44E7FDFDC9516EF0BE53823BF113DB5963_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void SEC_WINNT_AUTH_IDENTITY_W_t08251E44E7FDFDC9516EF0BE53823BF113DB5963_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void SEC_WINNT_AUTH_IDENTITY_W_t08251E44E7FDFDC9516EF0BE53823BF113DB5963_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType SEC_WINNT_AUTH_IDENTITY_W_t08251E44E7FDFDC9516EF0BE53823BF113DB5963_0_0_0;
IL2CPP_EXTERN_C void SecPkgContext_IssuerListInfoEx_t45BE40232614EEEDFF25054A7699E031188A011B_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void SecPkgContext_IssuerListInfoEx_t45BE40232614EEEDFF25054A7699E031188A011B_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void SecPkgContext_IssuerListInfoEx_t45BE40232614EEEDFF25054A7699E031188A011B_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType SecPkgContext_IssuerListInfoEx_t45BE40232614EEEDFF25054A7699E031188A011B_0_0_0;
IL2CPP_EXTERN_C void AtlasSettings_tE53BC2E0E77415B1398424E3FB07BCC7C4D42453_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void AtlasSettings_tE53BC2E0E77415B1398424E3FB07BCC7C4D42453_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void AtlasSettings_tE53BC2E0E77415B1398424E3FB07BCC7C4D42453_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType AtlasSettings_tE53BC2E0E77415B1398424E3FB07BCC7C4D42453_0_0_0;
IL2CPP_EXTERN_C void DefaultExtendedTypeDescriptor_tA141AABC2CE8A296CFEBCD528145934014AB06B5_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void DefaultExtendedTypeDescriptor_tA141AABC2CE8A296CFEBCD528145934014AB06B5_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void DefaultExtendedTypeDescriptor_tA141AABC2CE8A296CFEBCD528145934014AB06B5_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType DefaultExtendedTypeDescriptor_tA141AABC2CE8A296CFEBCD528145934014AB06B5_0_0_0;
IL2CPP_EXTERN_C void DefaultTypeDescriptor_tE4BFD69B5DCCF4D947034C2740F803F797E1879F_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void DefaultTypeDescriptor_tE4BFD69B5DCCF4D947034C2740F803F797E1879F_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void DefaultTypeDescriptor_tE4BFD69B5DCCF4D947034C2740F803F797E1879F_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType DefaultTypeDescriptor_tE4BFD69B5DCCF4D947034C2740F803F797E1879F_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_unitytls_errorstate_create_t_tE8BB5D6BCA7D232F4981831586B71C39802CF75B();
IL2CPP_EXTERN_C_CONST RuntimeType unitytls_errorstate_create_t_tE8BB5D6BCA7D232F4981831586B71C39802CF75B_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_unitytls_errorstate_raise_error_t_t8C20FC78CA5BBEE0248CC09D1C1AF25BCB3835CF();
IL2CPP_EXTERN_C_CONST RuntimeType unitytls_errorstate_raise_error_t_t8C20FC78CA5BBEE0248CC09D1C1AF25BCB3835CF_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_unitytls_key_free_t_tDB8665140BAF30447F3650D323078C193566FF72();
IL2CPP_EXTERN_C_CONST RuntimeType unitytls_key_free_t_tDB8665140BAF30447F3650D323078C193566FF72_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_unitytls_key_get_ref_t_t8335968B19449FE0ED92E67AE9B6D95915684209();
IL2CPP_EXTERN_C_CONST RuntimeType unitytls_key_get_ref_t_t8335968B19449FE0ED92E67AE9B6D95915684209_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_unitytls_key_parse_der_t_tC218AEF9253FA105762F39041F696A06C52D3F10();
IL2CPP_EXTERN_C_CONST RuntimeType unitytls_key_parse_der_t_tC218AEF9253FA105762F39041F696A06C52D3F10_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_unitytls_key_parse_pem_t_tE945670C6CB28BBF4670D2E8E904B7D8A2AB277B();
IL2CPP_EXTERN_C_CONST RuntimeType unitytls_key_parse_pem_t_tE945670C6CB28BBF4670D2E8E904B7D8A2AB277B_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_unitytls_random_generate_bytes_t_t6E7011EF958B0948582F8D1D213B454A5A962569();
IL2CPP_EXTERN_C_CONST RuntimeType unitytls_random_generate_bytes_t_t6E7011EF958B0948582F8D1D213B454A5A962569_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_unitytls_tlsctx_create_client_t_t49D8F69D4152410A346CB3560B121DCC44AAC4EC();
IL2CPP_EXTERN_C_CONST RuntimeType unitytls_tlsctx_create_client_t_t49D8F69D4152410A346CB3560B121DCC44AAC4EC_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_unitytls_tlsctx_create_server_t_t1068941B319B893D3FFBE53FE061676FF1CC3803();
IL2CPP_EXTERN_C_CONST RuntimeType unitytls_tlsctx_create_server_t_t1068941B319B893D3FFBE53FE061676FF1CC3803_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_unitytls_tlsctx_free_t_tFBF7BB64D2E1C183718FB5809ABF0051395FD8F0();
IL2CPP_EXTERN_C_CONST RuntimeType unitytls_tlsctx_free_t_tFBF7BB64D2E1C183718FB5809ABF0051395FD8F0_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_unitytls_tlsctx_get_ciphersuite_t_t7317543D399259616648B1AA19447C4B63F70EF2();
IL2CPP_EXTERN_C_CONST RuntimeType unitytls_tlsctx_get_ciphersuite_t_t7317543D399259616648B1AA19447C4B63F70EF2_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_unitytls_tlsctx_get_protocol_t_t04E3B73C1D77379F7C7388ED4934189365326F3C();
IL2CPP_EXTERN_C_CONST RuntimeType unitytls_tlsctx_get_protocol_t_t04E3B73C1D77379F7C7388ED4934189365326F3C_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_unitytls_tlsctx_notify_close_t_t717D19846262E3DF5D1A69C5E136912E7A54B253();
IL2CPP_EXTERN_C_CONST RuntimeType unitytls_tlsctx_notify_close_t_t717D19846262E3DF5D1A69C5E136912E7A54B253_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_unitytls_tlsctx_process_handshake_t_t8D94F5FAD00CD61BF950829866C0C6E29D202606();
IL2CPP_EXTERN_C_CONST RuntimeType unitytls_tlsctx_process_handshake_t_t8D94F5FAD00CD61BF950829866C0C6E29D202606_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_unitytls_tlsctx_read_t_t3E3C711F7A47E704ABDF0DF0B7515E7306EB7C95();
IL2CPP_EXTERN_C_CONST RuntimeType unitytls_tlsctx_read_t_t3E3C711F7A47E704ABDF0DF0B7515E7306EB7C95_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_unitytls_tlsctx_server_require_client_authentication_t_t2AC04245D1F40738C5FB87B0DEE80761E243F0BE();
IL2CPP_EXTERN_C_CONST RuntimeType unitytls_tlsctx_server_require_client_authentication_t_t2AC04245D1F40738C5FB87B0DEE80761E243F0BE_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_unitytls_tlsctx_set_certificate_callback_t_t2B54F7228DFC11BF14DCF2201BDD90CF0EF92D41();
IL2CPP_EXTERN_C_CONST RuntimeType unitytls_tlsctx_set_certificate_callback_t_t2B54F7228DFC11BF14DCF2201BDD90CF0EF92D41_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_unitytls_tlsctx_set_supported_ciphersuites_t_t007E8706D364DE695F1DBF28358058A1E73DF544();
IL2CPP_EXTERN_C_CONST RuntimeType unitytls_tlsctx_set_supported_ciphersuites_t_t007E8706D364DE695F1DBF28358058A1E73DF544_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_unitytls_tlsctx_set_trace_callback_t_t3C615EACADC2CB1CDA8362B3F775071976E7CF7C();
IL2CPP_EXTERN_C_CONST RuntimeType unitytls_tlsctx_set_trace_callback_t_t3C615EACADC2CB1CDA8362B3F775071976E7CF7C_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_unitytls_tlsctx_set_x509verify_callback_t_t032FE980BEDD0D201CAF1EE653ABE303CDBCA7C9();
IL2CPP_EXTERN_C_CONST RuntimeType unitytls_tlsctx_set_x509verify_callback_t_t032FE980BEDD0D201CAF1EE653ABE303CDBCA7C9_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_unitytls_tlsctx_write_t_t976A41600B61F9C8DF022296B67316FFA53EB386();
IL2CPP_EXTERN_C_CONST RuntimeType unitytls_tlsctx_write_t_t976A41600B61F9C8DF022296B67316FFA53EB386_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_unitytls_x509_export_der_t_tB784597940DE501BB5FEFA3EA528634559A16749();
IL2CPP_EXTERN_C_CONST RuntimeType unitytls_x509_export_der_t_tB784597940DE501BB5FEFA3EA528634559A16749_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_unitytls_x509list_append_der_t_tC45176B25C9B11C509119A1943EFDE133D819951();
IL2CPP_EXTERN_C_CONST RuntimeType unitytls_x509list_append_der_t_tC45176B25C9B11C509119A1943EFDE133D819951_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_unitytls_x509list_append_pem_t_t8218AF5B5C57C063C070E2450C1969CAEE30AA8D();
IL2CPP_EXTERN_C_CONST RuntimeType unitytls_x509list_append_pem_t_t8218AF5B5C57C063C070E2450C1969CAEE30AA8D_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_unitytls_x509list_append_t_tC84B9CA7C15F5D1DE98386670A80D5F98559D98E();
IL2CPP_EXTERN_C_CONST RuntimeType unitytls_x509list_append_t_tC84B9CA7C15F5D1DE98386670A80D5F98559D98E_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_unitytls_x509list_create_t_t8873365FFB1556CE6B643700DB0C30E391B758D6();
IL2CPP_EXTERN_C_CONST RuntimeType unitytls_x509list_create_t_t8873365FFB1556CE6B643700DB0C30E391B758D6_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_unitytls_x509list_free_t_t9BD50B09A7919B7891DC529787E93C708FC653A2();
IL2CPP_EXTERN_C_CONST RuntimeType unitytls_x509list_free_t_t9BD50B09A7919B7891DC529787E93C708FC653A2_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_unitytls_x509list_get_ref_t_t264CEEF7B8D1F10FD95E1BC78BB48BCA11E305EA();
IL2CPP_EXTERN_C_CONST RuntimeType unitytls_x509list_get_ref_t_t264CEEF7B8D1F10FD95E1BC78BB48BCA11E305EA_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_unitytls_x509list_get_x509_t_t428DCD367D50DCDD5ECE6DCFEB8967C5F7C3DFE8();
IL2CPP_EXTERN_C_CONST RuntimeType unitytls_x509list_get_x509_t_t428DCD367D50DCDD5ECE6DCFEB8967C5F7C3DFE8_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_unitytls_x509verify_default_ca_t_tED88B7ABC8408A22DB51B1F57D5FC65BDD2EC809();
IL2CPP_EXTERN_C_CONST RuntimeType unitytls_x509verify_default_ca_t_tED88B7ABC8408A22DB51B1F57D5FC65BDD2EC809_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_unitytls_x509verify_explicit_ca_t_t1B3D98BF01F059A3C2ADE87EFDDA03C557A3D08D();
IL2CPP_EXTERN_C_CONST RuntimeType unitytls_x509verify_explicit_ca_t_t1B3D98BF01F059A3C2ADE87EFDDA03C557A3D08D_0_0_0;
IL2CPP_EXTERN_C Il2CppInteropData g_Il2CppInteropData[];
Il2CppInteropData g_Il2CppInteropData[679] = 
{
	{ DelegatePInvokeWrapper_Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07, NULL, NULL, NULL, NULL, NULL, &Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_0_0_0 } /* System.Action */,
	{ NULL, Alloc_t78312CFE58F38082281E80E297AE6176BD2BD8AE_marshal_pinvoke, Alloc_t78312CFE58F38082281E80E297AE6176BD2BD8AE_marshal_pinvoke_back, Alloc_t78312CFE58F38082281E80E297AE6176BD2BD8AE_marshal_pinvoke_cleanup, NULL, NULL, &Alloc_t78312CFE58F38082281E80E297AE6176BD2BD8AE_0_0_0 } /* UnityEngine.UIElements.UIR.Alloc */,
	{ DelegatePInvokeWrapper_AndroidJavaRunnable_tF23B9BBDA8C99A48BCEEA6335A47DA3C0EF34A7F, NULL, NULL, NULL, NULL, NULL, &AndroidJavaRunnable_tF23B9BBDA8C99A48BCEEA6335A47DA3C0EF34A7F_0_0_0 } /* UnityEngine.AndroidJavaRunnable */,
	{ NULL, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshal_pinvoke, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshal_pinvoke_back, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshal_pinvoke_cleanup, NULL, NULL, &AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_0_0_0 } /* UnityEngine.AnimationCurve */,
	{ NULL, AnimationEvent_t77294DB2372A5C387B53EEA3EFDC550C75EC3174_marshal_pinvoke, AnimationEvent_t77294DB2372A5C387B53EEA3EFDC550C75EC3174_marshal_pinvoke_back, AnimationEvent_t77294DB2372A5C387B53EEA3EFDC550C75EC3174_marshal_pinvoke_cleanup, NULL, NULL, &AnimationEvent_t77294DB2372A5C387B53EEA3EFDC550C75EC3174_0_0_0 } /* UnityEngine.AnimationEvent */,
	{ NULL, AnimatorControllerParameter_t1FA67485445446540D4F2857762C960AE6980E02_marshal_pinvoke, AnimatorControllerParameter_t1FA67485445446540D4F2857762C960AE6980E02_marshal_pinvoke_back, AnimatorControllerParameter_t1FA67485445446540D4F2857762C960AE6980E02_marshal_pinvoke_cleanup, NULL, NULL, &AnimatorControllerParameter_t1FA67485445446540D4F2857762C960AE6980E02_0_0_0 } /* UnityEngine.AnimatorControllerParameter */,
	{ NULL, AnimatorTransitionInfo_t44894D5EDEACB368CDBA07458F6EE5F01A1F34AD_marshal_pinvoke, AnimatorTransitionInfo_t44894D5EDEACB368CDBA07458F6EE5F01A1F34AD_marshal_pinvoke_back, AnimatorTransitionInfo_t44894D5EDEACB368CDBA07458F6EE5F01A1F34AD_marshal_pinvoke_cleanup, NULL, NULL, &AnimatorTransitionInfo_t44894D5EDEACB368CDBA07458F6EE5F01A1F34AD_0_0_0 } /* UnityEngine.AnimatorTransitionInfo */,
	{ NULL, AnnotationSym_t1ABDBD1D4074A62BAB113261BC37B4BFF89D9C19_marshal_pinvoke, AnnotationSym_t1ABDBD1D4074A62BAB113261BC37B4BFF89D9C19_marshal_pinvoke_back, AnnotationSym_t1ABDBD1D4074A62BAB113261BC37B4BFF89D9C19_marshal_pinvoke_cleanup, NULL, NULL, &AnnotationSym_t1ABDBD1D4074A62BAB113261BC37B4BFF89D9C19_0_0_0 } /* Microsoft.Cci.Pdb.AnnotationSym */,
	{ NULL, AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F_marshal_pinvoke, AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F_marshal_pinvoke_back, AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F_marshal_pinvoke_cleanup, NULL, NULL, &AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F_0_0_0 } /* System.AppDomain */,
	{ DelegatePInvokeWrapper_AppDomainInitializer_tED36272F704E9A95E8FEFFD67EECA50F089B4D1A, NULL, NULL, NULL, NULL, NULL, &AppDomainInitializer_tED36272F704E9A95E8FEFFD67EECA50F089B4D1A_0_0_0 } /* System.AppDomainInitializer */,
	{ NULL, AppDomainSetup_tCECBEFD01C102F2D0027CBB0C071FA66B87803C4_marshal_pinvoke, AppDomainSetup_tCECBEFD01C102F2D0027CBB0C071FA66B87803C4_marshal_pinvoke_back, AppDomainSetup_tCECBEFD01C102F2D0027CBB0C071FA66B87803C4_marshal_pinvoke_cleanup, NULL, NULL, &AppDomainSetup_tCECBEFD01C102F2D0027CBB0C071FA66B87803C4_0_0_0 } /* System.AppDomainSetup */,
	{ NULL, ArrayDimension_t3FE4B437B5959D9980B4443354A02B21BACD39FE_marshal_pinvoke, ArrayDimension_t3FE4B437B5959D9980B4443354A02B21BACD39FE_marshal_pinvoke_back, ArrayDimension_t3FE4B437B5959D9980B4443354A02B21BACD39FE_marshal_pinvoke_cleanup, NULL, NULL, &ArrayDimension_t3FE4B437B5959D9980B4443354A02B21BACD39FE_0_0_0 } /* ILRuntime.Mono.Cecil.ArrayDimension */,
	{ NULL, ArrayMetadata_t0633C1AE44FDB314EBC68AAB7C5C3707745759BC_marshal_pinvoke, ArrayMetadata_t0633C1AE44FDB314EBC68AAB7C5C3707745759BC_marshal_pinvoke_back, ArrayMetadata_t0633C1AE44FDB314EBC68AAB7C5C3707745759BC_marshal_pinvoke_cleanup, NULL, NULL, &ArrayMetadata_t0633C1AE44FDB314EBC68AAB7C5C3707745759BC_0_0_0 } /* LitJson.ArrayMetadata */,
	{ NULL, Assembly_t_marshal_pinvoke, Assembly_t_marshal_pinvoke_back, Assembly_t_marshal_pinvoke_cleanup, NULL, NULL, &Assembly_t_0_0_0 } /* System.Reflection.Assembly */,
	{ NULL, AssemblyName_t555F1570F523D87D970C6E7F27B1B44C83EADDD2_marshal_pinvoke, AssemblyName_t555F1570F523D87D970C6E7F27B1B44C83EADDD2_marshal_pinvoke_back, AssemblyName_t555F1570F523D87D970C6E7F27B1B44C83EADDD2_marshal_pinvoke_cleanup, NULL, NULL, &AssemblyName_t555F1570F523D87D970C6E7F27B1B44C83EADDD2_0_0_0 } /* System.Reflection.AssemblyName */,
	{ NULL, AssetBundleCreateRequest_t73B8714B9459A01540E091C3770A408E67188CF6_marshal_pinvoke, AssetBundleCreateRequest_t73B8714B9459A01540E091C3770A408E67188CF6_marshal_pinvoke_back, AssetBundleCreateRequest_t73B8714B9459A01540E091C3770A408E67188CF6_marshal_pinvoke_cleanup, NULL, NULL, &AssetBundleCreateRequest_t73B8714B9459A01540E091C3770A408E67188CF6_0_0_0 } /* UnityEngine.AssetBundleCreateRequest */,
	{ NULL, AssetBundleRecompressOperation_tFDA1FB5AE1E072FC6CAC1CF0064C13D77F87CDDE_marshal_pinvoke, AssetBundleRecompressOperation_tFDA1FB5AE1E072FC6CAC1CF0064C13D77F87CDDE_marshal_pinvoke_back, AssetBundleRecompressOperation_tFDA1FB5AE1E072FC6CAC1CF0064C13D77F87CDDE_marshal_pinvoke_cleanup, NULL, NULL, &AssetBundleRecompressOperation_tFDA1FB5AE1E072FC6CAC1CF0064C13D77F87CDDE_0_0_0 } /* UnityEngine.AssetBundleRecompressOperation */,
	{ NULL, AssetBundleRequest_tED9F5504E75ED1BCFF8DA9B51F5C7356617E6621_marshal_pinvoke, AssetBundleRequest_tED9F5504E75ED1BCFF8DA9B51F5C7356617E6621_marshal_pinvoke_back, AssetBundleRequest_tED9F5504E75ED1BCFF8DA9B51F5C7356617E6621_marshal_pinvoke_cleanup, NULL, NULL, &AssetBundleRequest_tED9F5504E75ED1BCFF8DA9B51F5C7356617E6621_0_0_0 } /* UnityEngine.AssetBundleRequest */,
	{ NULL, AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshal_pinvoke, AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshal_pinvoke_back, AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshal_pinvoke_cleanup, NULL, NULL, &AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_0_0_0 } /* System.Runtime.CompilerServices.AsyncMethodBuilderCore */,
	{ NULL, AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshal_pinvoke, AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshal_pinvoke_back, AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshal_pinvoke_cleanup, NULL, NULL, &AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_0_0_0 } /* UnityEngine.AsyncOperation */,
	{ NULL, AsyncReadManagerMetricsFilters_t8345AB04A9736805407C88046E48E05CE9CEB626_marshal_pinvoke, AsyncReadManagerMetricsFilters_t8345AB04A9736805407C88046E48E05CE9CEB626_marshal_pinvoke_back, AsyncReadManagerMetricsFilters_t8345AB04A9736805407C88046E48E05CE9CEB626_marshal_pinvoke_cleanup, NULL, NULL, &AsyncReadManagerMetricsFilters_t8345AB04A9736805407C88046E48E05CE9CEB626_0_0_0 } /* Unity.IO.LowLevel.Unsafe.AsyncReadManagerMetricsFilters */,
	{ NULL, AsyncReadManagerRequestMetric_t41C6C9C513C5E798C5D4A9BD4A04216D42458B13_marshal_pinvoke, AsyncReadManagerRequestMetric_t41C6C9C513C5E798C5D4A9BD4A04216D42458B13_marshal_pinvoke_back, AsyncReadManagerRequestMetric_t41C6C9C513C5E798C5D4A9BD4A04216D42458B13_marshal_pinvoke_cleanup, NULL, NULL, &AsyncReadManagerRequestMetric_t41C6C9C513C5E798C5D4A9BD4A04216D42458B13_0_0_0 } /* Unity.IO.LowLevel.Unsafe.AsyncReadManagerRequestMetric */,
	{ NULL, AsyncResult_t125D959CA0F9FB74EF9F7DF4E04F15BB1B265760_marshal_pinvoke, AsyncResult_t125D959CA0F9FB74EF9F7DF4E04F15BB1B265760_marshal_pinvoke_back, AsyncResult_t125D959CA0F9FB74EF9F7DF4E04F15BB1B265760_marshal_pinvoke_cleanup, NULL, NULL, &AsyncResult_t125D959CA0F9FB74EF9F7DF4E04F15BB1B265760_0_0_0 } /* System.Runtime.Remoting.Messaging.AsyncResult */,
	{ NULL, AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_marshal_pinvoke, AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_marshal_pinvoke_back, AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_marshal_pinvoke_cleanup, NULL, NULL, &AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_0_0_0 } /* System.Runtime.CompilerServices.AsyncTaskMethodBuilder */,
	{ NULL, AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D_marshal_pinvoke, AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D_marshal_pinvoke_back, AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D_marshal_pinvoke_cleanup, NULL, NULL, &AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D_0_0_0 } /* System.Runtime.CompilerServices.AsyncVoidMethodBuilder */,
	{ NULL, AttrManyRegSym_tDAA23879FAD53E78F5F085445D07B8FBB129A380_marshal_pinvoke, AttrManyRegSym_tDAA23879FAD53E78F5F085445D07B8FBB129A380_marshal_pinvoke_back, AttrManyRegSym_tDAA23879FAD53E78F5F085445D07B8FBB129A380_marshal_pinvoke_cleanup, NULL, NULL, &AttrManyRegSym_tDAA23879FAD53E78F5F085445D07B8FBB129A380_0_0_0 } /* Microsoft.Cci.Pdb.AttrManyRegSym */,
	{ NULL, AttrManyRegSym2_t01559DE2DE2BE48AB9D1C3F56320EE6BF6239636_marshal_pinvoke, AttrManyRegSym2_t01559DE2DE2BE48AB9D1C3F56320EE6BF6239636_marshal_pinvoke_back, AttrManyRegSym2_t01559DE2DE2BE48AB9D1C3F56320EE6BF6239636_marshal_pinvoke_cleanup, NULL, NULL, &AttrManyRegSym2_t01559DE2DE2BE48AB9D1C3F56320EE6BF6239636_0_0_0 } /* Microsoft.Cci.Pdb.AttrManyRegSym2 */,
	{ NULL, AttrRegRel_t35EEE140BEBD246FA051EC68383730308E63D97C_marshal_pinvoke, AttrRegRel_t35EEE140BEBD246FA051EC68383730308E63D97C_marshal_pinvoke_back, AttrRegRel_t35EEE140BEBD246FA051EC68383730308E63D97C_marshal_pinvoke_cleanup, NULL, NULL, &AttrRegRel_t35EEE140BEBD246FA051EC68383730308E63D97C_0_0_0 } /* Microsoft.Cci.Pdb.AttrRegRel */,
	{ NULL, AttrRegSym_tF535B762E5D0D1F76241E37350DE82064E8E6587_marshal_pinvoke, AttrRegSym_tF535B762E5D0D1F76241E37350DE82064E8E6587_marshal_pinvoke_back, AttrRegSym_tF535B762E5D0D1F76241E37350DE82064E8E6587_marshal_pinvoke_cleanup, NULL, NULL, &AttrRegSym_tF535B762E5D0D1F76241E37350DE82064E8E6587_0_0_0 } /* Microsoft.Cci.Pdb.AttrRegSym */,
	{ NULL, AttrSlotSym_tB38238AB4F7158637CFC3E72D6CFB77B1314DF12_marshal_pinvoke, AttrSlotSym_tB38238AB4F7158637CFC3E72D6CFB77B1314DF12_marshal_pinvoke_back, AttrSlotSym_tB38238AB4F7158637CFC3E72D6CFB77B1314DF12_marshal_pinvoke_cleanup, NULL, NULL, &AttrSlotSym_tB38238AB4F7158637CFC3E72D6CFB77B1314DF12_0_0_0 } /* Microsoft.Cci.Pdb.AttrSlotSym */,
	{ NULL, Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8_marshal_pinvoke, Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8_marshal_pinvoke_back, Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8_marshal_pinvoke_cleanup, NULL, NULL, &Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8_0_0_0 } /* UnityEngine.UIElements.Background */,
	{ NULL, BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10_marshal_pinvoke, BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10_marshal_pinvoke_back, BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10_marshal_pinvoke_cleanup, NULL, NULL, &BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10_0_0_0 } /* UnityEngine.Rendering.BatchRendererGroup */,
	{ NULL, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_marshal_pinvoke, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_marshal_pinvoke_back, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_marshal_pinvoke_cleanup, NULL, NULL, &BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_0_0_0 } /* System.Numerics.BigInteger */,
	{ NULL, BitSet_t403E96153804F8C5C75892E92AFD66AFD9F23432_marshal_pinvoke, BitSet_t403E96153804F8C5C75892E92AFD66AFD9F23432_marshal_pinvoke_back, BitSet_t403E96153804F8C5C75892E92AFD66AFD9F23432_marshal_pinvoke_cleanup, NULL, NULL, &BitSet_t403E96153804F8C5C75892E92AFD66AFD9F23432_0_0_0 } /* Microsoft.Cci.Pdb.BitSet */,
	{ NULL, BitmapAllocator32_t87110600670688D0E149D61E1BDA8F45ADC59C73_marshal_pinvoke, BitmapAllocator32_t87110600670688D0E149D61E1BDA8F45ADC59C73_marshal_pinvoke_back, BitmapAllocator32_t87110600670688D0E149D61E1BDA8F45ADC59C73_marshal_pinvoke_cleanup, NULL, NULL, &BitmapAllocator32_t87110600670688D0E149D61E1BDA8F45ADC59C73_0_0_0 } /* UnityEngine.UIElements.UIR.BitmapAllocator32 */,
	{ NULL, BlockSym32_t3ADE51D8C9A1C7F13694D8234519A31B10885520_marshal_pinvoke, BlockSym32_t3ADE51D8C9A1C7F13694D8234519A31B10885520_marshal_pinvoke_back, BlockSym32_t3ADE51D8C9A1C7F13694D8234519A31B10885520_marshal_pinvoke_cleanup, NULL, NULL, &BlockSym32_t3ADE51D8C9A1C7F13694D8234519A31B10885520_0_0_0 } /* Microsoft.Cci.Pdb.BlockSym32 */,
	{ NULL, BpRelSym32_t432260FE83EB60F5A5AF97446405E4BA4104DE77_marshal_pinvoke, BpRelSym32_t432260FE83EB60F5A5AF97446405E4BA4104DE77_marshal_pinvoke_back, BpRelSym32_t432260FE83EB60F5A5AF97446405E4BA4104DE77_marshal_pinvoke_cleanup, NULL, NULL, &BpRelSym32_t432260FE83EB60F5A5AF97446405E4BA4104DE77_0_0_0 } /* Microsoft.Cci.Pdb.BpRelSym32 */,
	{ NULL, BuildCompression_t78EB9F3307B431CFDACE8F8F1D277B82379904A1_marshal_pinvoke, BuildCompression_t78EB9F3307B431CFDACE8F8F1D277B82379904A1_marshal_pinvoke_back, BuildCompression_t78EB9F3307B431CFDACE8F8F1D277B82379904A1_marshal_pinvoke_cleanup, NULL, NULL, &BuildCompression_t78EB9F3307B431CFDACE8F8F1D277B82379904A1_0_0_0 } /* UnityEngine.BuildCompression */,
	{ NULL, CFlagSym_tED75A064BB9674C2DCC5C5857F3728A7A68D7772_marshal_pinvoke, CFlagSym_tED75A064BB9674C2DCC5C5857F3728A7A68D7772_marshal_pinvoke_back, CFlagSym_tED75A064BB9674C2DCC5C5857F3728A7A68D7772_marshal_pinvoke_cleanup, NULL, NULL, &CFlagSym_tED75A064BB9674C2DCC5C5857F3728A7A68D7772_0_0_0 } /* Microsoft.Cci.Pdb.CFlagSym */,
	{ NULL, CalendarData_t4A54E28AB4470E0B835605CAEE9BEB25EBF9B6A9_marshal_pinvoke, CalendarData_t4A54E28AB4470E0B835605CAEE9BEB25EBF9B6A9_marshal_pinvoke_back, CalendarData_t4A54E28AB4470E0B835605CAEE9BEB25EBF9B6A9_marshal_pinvoke_cleanup, NULL, NULL, &CalendarData_t4A54E28AB4470E0B835605CAEE9BEB25EBF9B6A9_0_0_0 } /* System.Globalization.CalendarData */,
	{ NULL, CameraData_tC27AE109CD20677486A4AC19C0CF014AE0F50C3E_marshal_pinvoke, CameraData_tC27AE109CD20677486A4AC19C0CF014AE0F50C3E_marshal_pinvoke_back, CameraData_tC27AE109CD20677486A4AC19C0CF014AE0F50C3E_marshal_pinvoke_cleanup, NULL, NULL, &CameraData_tC27AE109CD20677486A4AC19C0CF014AE0F50C3E_0_0_0 } /* UnityEngine.Rendering.Universal.CameraData */,
	{ NULL, CancellationCallbackCoreWorkArguments_t12DB960B203CDDF2119BC6A29ACA80175C15FAD0_marshal_pinvoke, CancellationCallbackCoreWorkArguments_t12DB960B203CDDF2119BC6A29ACA80175C15FAD0_marshal_pinvoke_back, CancellationCallbackCoreWorkArguments_t12DB960B203CDDF2119BC6A29ACA80175C15FAD0_marshal_pinvoke_cleanup, NULL, NULL, &CancellationCallbackCoreWorkArguments_t12DB960B203CDDF2119BC6A29ACA80175C15FAD0_0_0_0 } /* System.Threading.CancellationCallbackCoreWorkArguments */,
	{ NULL, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshal_pinvoke, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshal_pinvoke_back, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshal_pinvoke_cleanup, NULL, NULL, &CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_0_0_0 } /* System.Threading.CancellationToken */,
	{ NULL, CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389_marshal_pinvoke, CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389_marshal_pinvoke_back, CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389_marshal_pinvoke_cleanup, NULL, NULL, &CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389_0_0_0 } /* System.Threading.CancellationTokenRegistration */,
	{ NULL, CapturedScope_t8253C4F1790C0BB4F90B7AC921FA800D52A6BF9C_marshal_pinvoke, CapturedScope_t8253C4F1790C0BB4F90B7AC921FA800D52A6BF9C_marshal_pinvoke_back, CapturedScope_t8253C4F1790C0BB4F90B7AC921FA800D52A6BF9C_marshal_pinvoke_cleanup, NULL, NULL, &CapturedScope_t8253C4F1790C0BB4F90B7AC921FA800D52A6BF9C_0_0_0 } /* ILRuntime.Mono.CompilerServices.SymbolWriter.CapturedScope */,
	{ NULL, CapturedVariable_tDB5D06C879458BF76D83797147E3BF83A164B297_marshal_pinvoke, CapturedVariable_tDB5D06C879458BF76D83797147E3BF83A164B297_marshal_pinvoke_back, CapturedVariable_tDB5D06C879458BF76D83797147E3BF83A164B297_marshal_pinvoke_cleanup, NULL, NULL, &CapturedVariable_tDB5D06C879458BF76D83797147E3BF83A164B297_0_0_0 } /* ILRuntime.Mono.CompilerServices.SymbolWriter.CapturedVariable */,
	{ NULL, CertificateData_t40A99242A632202B3115D05913ED12CAA78F65B1_marshal_pinvoke, CertificateData_t40A99242A632202B3115D05913ED12CAA78F65B1_marshal_pinvoke_back, CertificateData_t40A99242A632202B3115D05913ED12CAA78F65B1_marshal_pinvoke_cleanup, NULL, NULL, &CertificateData_t40A99242A632202B3115D05913ED12CAA78F65B1_0_0_0 } /* Internal.Cryptography.Pal.CertificateData */,
	{ NULL, CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshal_pinvoke, CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshal_pinvoke_back, CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshal_pinvoke_cleanup, NULL, NULL, &CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_0_0_0 } /* UnityEngine.Networking.CertificateHandler */,
	{ NULL, CoffGroupSym_tE56163A74BAD82372DEBC47C956F18D711F65CE9_marshal_pinvoke, CoffGroupSym_tE56163A74BAD82372DEBC47C956F18D711F65CE9_marshal_pinvoke_back, CoffGroupSym_tE56163A74BAD82372DEBC47C956F18D711F65CE9_marshal_pinvoke_cleanup, NULL, NULL, &CoffGroupSym_tE56163A74BAD82372DEBC47C956F18D711F65CE9_0_0_0 } /* Microsoft.Cci.Pdb.CoffGroupSym */,
	{ NULL, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0_marshal_pinvoke, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0_marshal_pinvoke_back, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0_marshal_pinvoke_cleanup, NULL, NULL, &Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0_0_0_0 } /* UnityEngine.Collision */,
	{ NULL, Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B_marshal_pinvoke, Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B_marshal_pinvoke_back, Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B_marshal_pinvoke_cleanup, NULL, NULL, &Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B_0_0_0 } /* UnityEngine.Collision2D */,
	{ NULL, ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0_marshal_pinvoke, ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0_marshal_pinvoke_back, ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0_marshal_pinvoke_cleanup, NULL, NULL, &ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0_0_0_0 } /* UnityEngine.UIElements.ColorPage */,
	{ NULL, ColorTween_t15AEF379B51AC7DF9B23C440A938DCF32DA3FBB7_marshal_pinvoke, ColorTween_t15AEF379B51AC7DF9B23C440A938DCF32DA3FBB7_marshal_pinvoke_back, ColorTween_t15AEF379B51AC7DF9B23C440A938DCF32DA3FBB7_marshal_pinvoke_cleanup, NULL, NULL, &ColorTween_t15AEF379B51AC7DF9B23C440A938DCF32DA3FBB7_0_0_0 } /* UnityEngine.UI.CoroutineTween.ColorTween */,
	{ NULL, ComparableOption_t7744108EA61AA1DD5522E6BD80C829B4A9FABFD3_marshal_pinvoke, ComparableOption_t7744108EA61AA1DD5522E6BD80C829B4A9FABFD3_marshal_pinvoke_back, ComparableOption_t7744108EA61AA1DD5522E6BD80C829B4A9FABFD3_marshal_pinvoke_cleanup, NULL, NULL, &ComparableOption_t7744108EA61AA1DD5522E6BD80C829B4A9FABFD3_0_0_0 } /* CommandLine.Text.ComparableOption */,
	{ NULL, CompileSym_t87A309831A1AA109E61DD3C515CE6C4C5156AAFF_marshal_pinvoke, CompileSym_t87A309831A1AA109E61DD3C515CE6C4C5156AAFF_marshal_pinvoke_back, CompileSym_t87A309831A1AA109E61DD3C515CE6C4C5156AAFF_marshal_pinvoke_cleanup, NULL, NULL, &CompileSym_t87A309831A1AA109E61DD3C515CE6C4C5156AAFF_0_0_0 } /* Microsoft.Cci.Pdb.CompileSym */,
	{ NULL, ComputeBufferDesc_t4AFBC6F02239B19810A79101771BBE76388524F4_marshal_pinvoke, ComputeBufferDesc_t4AFBC6F02239B19810A79101771BBE76388524F4_marshal_pinvoke_back, ComputeBufferDesc_t4AFBC6F02239B19810A79101771BBE76388524F4_marshal_pinvoke_cleanup, NULL, NULL, &ComputeBufferDesc_t4AFBC6F02239B19810A79101771BBE76388524F4_0_0_0 } /* UnityEngine.Experimental.Rendering.RenderGraphModule.ComputeBufferDesc */,
	{ NULL, ComputedStyle_t8B08CCCEE20525528B3FFDAC6D3F58F101AAF54C_marshal_pinvoke, ComputedStyle_t8B08CCCEE20525528B3FFDAC6D3F58F101AAF54C_marshal_pinvoke_back, ComputedStyle_t8B08CCCEE20525528B3FFDAC6D3F58F101AAF54C_marshal_pinvoke_cleanup, NULL, NULL, &ComputedStyle_t8B08CCCEE20525528B3FFDAC6D3F58F101AAF54C_0_0_0 } /* UnityEngine.UIElements.ComputedStyle */,
	{ NULL, ComputedTransitionProperty_tD8E4D8EB5DD69E063944F27A48D9263F4F1354E1_marshal_pinvoke, ComputedTransitionProperty_tD8E4D8EB5DD69E063944F27A48D9263F4F1354E1_marshal_pinvoke_back, ComputedTransitionProperty_tD8E4D8EB5DD69E063944F27A48D9263F4F1354E1_marshal_pinvoke_cleanup, NULL, NULL, &ComputedTransitionProperty_tD8E4D8EB5DD69E063944F27A48D9263F4F1354E1_0_0_0 } /* UnityEngine.UIElements.ComputedTransitionProperty */,
	{ NULL, ConfiguredTaskAwaitable_tABE012B321A51A20F0D34F8122B9EAE3A054875C_marshal_pinvoke, ConfiguredTaskAwaitable_tABE012B321A51A20F0D34F8122B9EAE3A054875C_marshal_pinvoke_back, ConfiguredTaskAwaitable_tABE012B321A51A20F0D34F8122B9EAE3A054875C_marshal_pinvoke_cleanup, NULL, NULL, &ConfiguredTaskAwaitable_tABE012B321A51A20F0D34F8122B9EAE3A054875C_0_0_0 } /* System.Runtime.CompilerServices.ConfiguredTaskAwaitable */,
	{ NULL, ConsoleKeyInfo_t84640C60F53D0F6946B147ADAAF0366BBF1DE900_marshal_pinvoke, ConsoleKeyInfo_t84640C60F53D0F6946B147ADAAF0366BBF1DE900_marshal_pinvoke_back, ConsoleKeyInfo_t84640C60F53D0F6946B147ADAAF0366BBF1DE900_marshal_pinvoke_cleanup, NULL, NULL, &ConsoleKeyInfo_t84640C60F53D0F6946B147ADAAF0366BBF1DE900_0_0_0 } /* System.ConsoleKeyInfo */,
	{ NULL, ConstSym_tAA484F2F862E9CBF7126B68D8CF53F9729E5549B_marshal_pinvoke, ConstSym_tAA484F2F862E9CBF7126B68D8CF53F9729E5549B_marshal_pinvoke_back, ConstSym_tAA484F2F862E9CBF7126B68D8CF53F9729E5549B_marshal_pinvoke_cleanup, NULL, NULL, &ConstSym_tAA484F2F862E9CBF7126B68D8CF53F9729E5549B_0_0_0 } /* Microsoft.Cci.Pdb.ConstSym */,
	{ NULL, ContactFilter2D_t54A8515C326BF7DA16E5DE97EA7D3CD9B2F77F14_marshal_pinvoke, ContactFilter2D_t54A8515C326BF7DA16E5DE97EA7D3CD9B2F77F14_marshal_pinvoke_back, ContactFilter2D_t54A8515C326BF7DA16E5DE97EA7D3CD9B2F77F14_marshal_pinvoke_cleanup, NULL, NULL, &ContactFilter2D_t54A8515C326BF7DA16E5DE97EA7D3CD9B2F77F14_0_0_0 } /* UnityEngine.ContactFilter2D */,
	{ NULL, Context_t2CCB8C97E2B9649D3A11A72438694220AEA6CF95_marshal_pinvoke, Context_t2CCB8C97E2B9649D3A11A72438694220AEA6CF95_marshal_pinvoke_back, Context_t2CCB8C97E2B9649D3A11A72438694220AEA6CF95_marshal_pinvoke_cleanup, NULL, NULL, &Context_t2CCB8C97E2B9649D3A11A72438694220AEA6CF95_0_0_0 } /* System.Runtime.Remoting.Contexts.Context */,
	{ NULL, ContourVertex_t58C64DD8B2209C868718C7B50657707A15EEEF32_marshal_pinvoke, ContourVertex_t58C64DD8B2209C868718C7B50657707A15EEEF32_marshal_pinvoke_back, ContourVertex_t58C64DD8B2209C868718C7B50657707A15EEEF32_marshal_pinvoke_cleanup, NULL, NULL, &ContourVertex_t58C64DD8B2209C868718C7B50657707A15EEEF32_0_0_0 } /* UnityEngine.Rendering.Universal.LibTessDotNet.ContourVertex */,
	{ NULL, ControllerColliderHit_tD0B734CBE0E2B089339B14600EB5A80295F6DE92_marshal_pinvoke, ControllerColliderHit_tD0B734CBE0E2B089339B14600EB5A80295F6DE92_marshal_pinvoke_back, ControllerColliderHit_tD0B734CBE0E2B089339B14600EB5A80295F6DE92_marshal_pinvoke_cleanup, NULL, NULL, &ControllerColliderHit_tD0B734CBE0E2B089339B14600EB5A80295F6DE92_0_0_0 } /* UnityEngine.ControllerColliderHit */,
	{ NULL, Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshal_pinvoke, Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshal_pinvoke_back, Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshal_pinvoke_cleanup, NULL, NULL, &Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_0_0_0 } /* UnityEngine.Coroutine */,
	{ NULL, CreationContext_t9C57B5BE551CCE200C0A2C72711BFF9DA298C257_marshal_pinvoke, CreationContext_t9C57B5BE551CCE200C0A2C72711BFF9DA298C257_marshal_pinvoke_back, CreationContext_t9C57B5BE551CCE200C0A2C72711BFF9DA298C257_marshal_pinvoke_cleanup, NULL, NULL, &CreationContext_t9C57B5BE551CCE200C0A2C72711BFF9DA298C257_0_0_0 } /* UnityEngine.UIElements.CreationContext */,
	{ DelegatePInvokeWrapper_CrossContextDelegate_t770FF83DFE79BBDEECEDDF4B0AA61D087C37F7A3, NULL, NULL, NULL, NULL, NULL, &CrossContextDelegate_t770FF83DFE79BBDEECEDDF4B0AA61D087C37F7A3_0_0_0 } /* System.Runtime.Remoting.Contexts.CrossContextDelegate */,
	{ NULL, CullingGroup_t0732D3CC044BAE2BE39748CBF5D96DDB6DBF62E7_marshal_pinvoke, CullingGroup_t0732D3CC044BAE2BE39748CBF5D96DDB6DBF62E7_marshal_pinvoke_back, CullingGroup_t0732D3CC044BAE2BE39748CBF5D96DDB6DBF62E7_marshal_pinvoke_cleanup, NULL, NULL, &CullingGroup_t0732D3CC044BAE2BE39748CBF5D96DDB6DBF62E7_0_0_0 } /* UnityEngine.CullingGroup */,
	{ NULL, CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshal_pinvoke, CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshal_pinvoke_back, CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshal_pinvoke_cleanup, NULL, NULL, &CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_0_0_0 } /* System.Globalization.CultureData */,
	{ NULL, CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshal_pinvoke, CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshal_pinvoke_back, CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshal_pinvoke_cleanup, NULL, NULL, &CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_0_0_0 } /* System.Globalization.CultureInfo */,
	{ NULL, Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82_marshal_pinvoke, Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82_marshal_pinvoke_back, Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82_marshal_pinvoke_cleanup, NULL, NULL, &Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82_0_0_0 } /* UnityEngine.UIElements.Cursor */,
	{ NULL, CursorPositionStylePainterParameters_tB79C17871EE8D6764B717689E7E93478D54BC81A_marshal_pinvoke, CursorPositionStylePainterParameters_tB79C17871EE8D6764B717689E7E93478D54BC81A_marshal_pinvoke_back, CursorPositionStylePainterParameters_tB79C17871EE8D6764B717689E7E93478D54BC81A_marshal_pinvoke_cleanup, NULL, NULL, &CursorPositionStylePainterParameters_tB79C17871EE8D6764B717689E7E93478D54BC81A_0_0_0 } /* UnityEngine.UIElements.CursorPositionStylePainterParameters */,
	{ NULL, CustomAttributeArgument_t264D7BFDE14663E3B4A7DB666632DABEB2F3FE14_marshal_pinvoke, CustomAttributeArgument_t264D7BFDE14663E3B4A7DB666632DABEB2F3FE14_marshal_pinvoke_back, CustomAttributeArgument_t264D7BFDE14663E3B4A7DB666632DABEB2F3FE14_marshal_pinvoke_cleanup, NULL, NULL, &CustomAttributeArgument_t264D7BFDE14663E3B4A7DB666632DABEB2F3FE14_0_0_0 } /* ILRuntime.Mono.Cecil.CustomAttributeArgument */,
	{ NULL, CustomAttributeNamedArgument_t768EA445EA2AD5BC0C8632CD26402524C69B0405_marshal_pinvoke, CustomAttributeNamedArgument_t768EA445EA2AD5BC0C8632CD26402524C69B0405_marshal_pinvoke_back, CustomAttributeNamedArgument_t768EA445EA2AD5BC0C8632CD26402524C69B0405_marshal_pinvoke_cleanup, NULL, NULL, &CustomAttributeNamedArgument_t768EA445EA2AD5BC0C8632CD26402524C69B0405_0_0_0 } /* ILRuntime.Mono.Cecil.CustomAttributeNamedArgument */,
	{ NULL, CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02_marshal_pinvoke, CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02_marshal_pinvoke_back, CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02_marshal_pinvoke_cleanup, NULL, NULL, &CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02_0_0_0 } /* System.Reflection.CustomAttributeNamedArgument */,
	{ NULL, CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F_marshal_pinvoke, CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F_marshal_pinvoke_back, CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F_marshal_pinvoke_cleanup, NULL, NULL, &CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F_0_0_0 } /* System.Reflection.CustomAttributeTypedArgument */,
	{ NULL, DSAParameters_t2FA923FEA7E2DB5515EE54A7E86B0401D025E0E9_marshal_pinvoke, DSAParameters_t2FA923FEA7E2DB5515EE54A7E86B0401D025E0E9_marshal_pinvoke_back, DSAParameters_t2FA923FEA7E2DB5515EE54A7E86B0401D025E0E9_marshal_pinvoke_cleanup, NULL, NULL, &DSAParameters_t2FA923FEA7E2DB5515EE54A7E86B0401D025E0E9_0_0_0 } /* System.Security.Cryptography.DSAParameters */,
	{ NULL, DatasSym32_t67DC75EF72EF4626E4415CF4F99CD334B1F63BF0_marshal_pinvoke, DatasSym32_t67DC75EF72EF4626E4415CF4F99CD334B1F63BF0_marshal_pinvoke_back, DatasSym32_t67DC75EF72EF4626E4415CF4F99CD334B1F63BF0_marshal_pinvoke_cleanup, NULL, NULL, &DatasSym32_t67DC75EF72EF4626E4415CF4F99CD334B1F63BF0_0_0_0 } /* Microsoft.Cci.Pdb.DatasSym32 */,
	{ NULL, DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03_marshal_pinvoke, DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03_marshal_pinvoke_back, DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03_marshal_pinvoke_cleanup, NULL, NULL, &DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03_0_0_0 } /* System.DateTimeRawInfo */,
	{ NULL, DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722_marshal_pinvoke, DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722_marshal_pinvoke_back, DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722_marshal_pinvoke_cleanup, NULL, NULL, &DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722_0_0_0 } /* System.DateTimeResult */,
	{ NULL, DaylightTimeStruct_tB667DCA32C2FA55FEFB2D8D3A871D4A5BF97CED1_marshal_pinvoke, DaylightTimeStruct_tB667DCA32C2FA55FEFB2D8D3A871D4A5BF97CED1_marshal_pinvoke_back, DaylightTimeStruct_tB667DCA32C2FA55FEFB2D8D3A871D4A5BF97CED1_marshal_pinvoke_cleanup, NULL, NULL, &DaylightTimeStruct_tB667DCA32C2FA55FEFB2D8D3A871D4A5BF97CED1_0_0_0 } /* System.Globalization.DaylightTimeStruct */,
	{ NULL, DecryptFileInfo_tFE2E173F2F6F4CFC1FF46B133FD856B9EA382321_marshal_pinvoke, DecryptFileInfo_tFE2E173F2F6F4CFC1FF46B133FD856B9EA382321_marshal_pinvoke_back, DecryptFileInfo_tFE2E173F2F6F4CFC1FF46B133FD856B9EA382321_marshal_pinvoke_cleanup, NULL, NULL, &DecryptFileInfo_tFE2E173F2F6F4CFC1FF46B133FD856B9EA382321_0_0_0 } /* YooAsset.DecryptFileInfo */,
	{ NULL, DefRangeSym2_tEEDCFBAC347208C68FA8DCF148360EA1D8DF6A9A_marshal_pinvoke, DefRangeSym2_tEEDCFBAC347208C68FA8DCF148360EA1D8DF6A9A_marshal_pinvoke_back, DefRangeSym2_tEEDCFBAC347208C68FA8DCF148360EA1D8DF6A9A_marshal_pinvoke_cleanup, NULL, NULL, &DefRangeSym2_tEEDCFBAC347208C68FA8DCF148360EA1D8DF6A9A_0_0_0 } /* Microsoft.Cci.Pdb.DefRangeSym2 */,
	{ NULL, DeferredTiler_t2F171ACEF3B3A64DDAC0C713A2358FFE9D169F8F_marshal_pinvoke, DeferredTiler_t2F171ACEF3B3A64DDAC0C713A2358FFE9D169F8F_marshal_pinvoke_back, DeferredTiler_t2F171ACEF3B3A64DDAC0C713A2358FFE9D169F8F_marshal_pinvoke_cleanup, NULL, NULL, &DeferredTiler_t2F171ACEF3B3A64DDAC0C713A2358FFE9D169F8F_0_0_0 } /* UnityEngine.Rendering.Universal.Internal.DeferredTiler */,
	{ NULL, Delegate_t_marshal_pinvoke, Delegate_t_marshal_pinvoke_back, Delegate_t_marshal_pinvoke_cleanup, NULL, NULL, &Delegate_t_0_0_0 } /* System.Delegate */,
	{ NULL, DiagnosticSwitch_tAE0C76FAF862A896635161E04F86BE637513D294_marshal_pinvoke, DiagnosticSwitch_tAE0C76FAF862A896635161E04F86BE637513D294_marshal_pinvoke_back, DiagnosticSwitch_tAE0C76FAF862A896635161E04F86BE637513D294_marshal_pinvoke_cleanup, NULL, NULL, &DiagnosticSwitch_tAE0C76FAF862A896635161E04F86BE637513D294_0_0_0 } /* UnityEngine.DiagnosticSwitch */,
	{ NULL, DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_marshal_pinvoke, DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_marshal_pinvoke_back, DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_marshal_pinvoke_cleanup, NULL, NULL, &DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_0_0_0 } /* System.Collections.DictionaryEntry */,
	{ NULL, DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB_marshal_pinvoke, DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB_marshal_pinvoke_back, DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB_marshal_pinvoke_cleanup, NULL, NULL, &DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB_0_0_0 } /* UnityEngine.Experimental.GlobalIllumination.DirectionalLight */,
	{ NULL, DisableMediaInsertionPrompt_t874258833B73FEAAC32D1DB565E134D1439AB2F7_marshal_pinvoke, DisableMediaInsertionPrompt_t874258833B73FEAAC32D1DB565E134D1439AB2F7_marshal_pinvoke_back, DisableMediaInsertionPrompt_t874258833B73FEAAC32D1DB565E134D1439AB2F7_marshal_pinvoke_cleanup, NULL, NULL, &DisableMediaInsertionPrompt_t874258833B73FEAAC32D1DB565E134D1439AB2F7_0_0_0 } /* System.IO.DisableMediaInsertionPrompt */,
	{ NULL, DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E_marshal_pinvoke, DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E_marshal_pinvoke_back, DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E_marshal_pinvoke_cleanup, NULL, NULL, &DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E_0_0_0 } /* UnityEngine.Experimental.GlobalIllumination.DiscLight */,
	{ NULL, DiscardedSym_t15C088EB0581ACB9ABD785F1A986E57CDFE5089C_marshal_pinvoke, DiscardedSym_t15C088EB0581ACB9ABD785F1A986E57CDFE5089C_marshal_pinvoke_back, DiscardedSym_t15C088EB0581ACB9ABD785F1A986E57CDFE5089C_marshal_pinvoke_cleanup, NULL, NULL, &DiscardedSym_t15C088EB0581ACB9ABD785F1A986E57CDFE5089C_0_0_0 } /* Microsoft.Cci.Pdb.DiscardedSym */,
	{ NULL, DiscriminatedUnion128_t158A67638C750CA116D14E74233F7A71BB64A845_marshal_pinvoke, DiscriminatedUnion128_t158A67638C750CA116D14E74233F7A71BB64A845_marshal_pinvoke_back, DiscriminatedUnion128_t158A67638C750CA116D14E74233F7A71BB64A845_marshal_pinvoke_cleanup, NULL, NULL, &DiscriminatedUnion128_t158A67638C750CA116D14E74233F7A71BB64A845_0_0_0 } /* ProtoBuf.DiscriminatedUnion128 */,
	{ NULL, DiscriminatedUnion128Object_tECA5EAC1E6569E14514F2F13EE1D14422A5E51EE_marshal_pinvoke, DiscriminatedUnion128Object_tECA5EAC1E6569E14514F2F13EE1D14422A5E51EE_marshal_pinvoke_back, DiscriminatedUnion128Object_tECA5EAC1E6569E14514F2F13EE1D14422A5E51EE_marshal_pinvoke_cleanup, NULL, NULL, &DiscriminatedUnion128Object_tECA5EAC1E6569E14514F2F13EE1D14422A5E51EE_0_0_0 } /* ProtoBuf.DiscriminatedUnion128Object */,
	{ NULL, DiscriminatedUnion32_t037E85BE4E566838458239E0F028960CBAB916DA_marshal_pinvoke, DiscriminatedUnion32_t037E85BE4E566838458239E0F028960CBAB916DA_marshal_pinvoke_back, DiscriminatedUnion32_t037E85BE4E566838458239E0F028960CBAB916DA_marshal_pinvoke_cleanup, NULL, NULL, &DiscriminatedUnion32_t037E85BE4E566838458239E0F028960CBAB916DA_0_0_0 } /* ProtoBuf.DiscriminatedUnion32 */,
	{ NULL, DiscriminatedUnion32Object_t664C8A18B754A6ECE96D1B6B519DFDD7BE993366_marshal_pinvoke, DiscriminatedUnion32Object_t664C8A18B754A6ECE96D1B6B519DFDD7BE993366_marshal_pinvoke_back, DiscriminatedUnion32Object_t664C8A18B754A6ECE96D1B6B519DFDD7BE993366_marshal_pinvoke_cleanup, NULL, NULL, &DiscriminatedUnion32Object_t664C8A18B754A6ECE96D1B6B519DFDD7BE993366_0_0_0 } /* ProtoBuf.DiscriminatedUnion32Object */,
	{ NULL, DiscriminatedUnion64_t7B7601E27B8677641FF5E8AC57A090EC43CFE956_marshal_pinvoke, DiscriminatedUnion64_t7B7601E27B8677641FF5E8AC57A090EC43CFE956_marshal_pinvoke_back, DiscriminatedUnion64_t7B7601E27B8677641FF5E8AC57A090EC43CFE956_marshal_pinvoke_cleanup, NULL, NULL, &DiscriminatedUnion64_t7B7601E27B8677641FF5E8AC57A090EC43CFE956_0_0_0 } /* ProtoBuf.DiscriminatedUnion64 */,
	{ NULL, DiscriminatedUnion64Object_t34D562E9C5932CA068237EE371324DF9CE92089B_marshal_pinvoke, DiscriminatedUnion64Object_t34D562E9C5932CA068237EE371324DF9CE92089B_marshal_pinvoke_back, DiscriminatedUnion64Object_t34D562E9C5932CA068237EE371324DF9CE92089B_marshal_pinvoke_cleanup, NULL, NULL, &DiscriminatedUnion64Object_t34D562E9C5932CA068237EE371324DF9CE92089B_0_0_0 } /* ProtoBuf.DiscriminatedUnion64Object */,
	{ NULL, DiscriminatedUnionObject_t6C0E93E677B68C95DDD7DCA12A6C37B02E918782_marshal_pinvoke, DiscriminatedUnionObject_t6C0E93E677B68C95DDD7DCA12A6C37B02E918782_marshal_pinvoke_back, DiscriminatedUnionObject_t6C0E93E677B68C95DDD7DCA12A6C37B02E918782_marshal_pinvoke_cleanup, NULL, NULL, &DiscriminatedUnionObject_t6C0E93E677B68C95DDD7DCA12A6C37B02E918782_0_0_0 } /* ProtoBuf.DiscriminatedUnionObject */,
	{ NULL, DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshal_pinvoke, DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshal_pinvoke_back, DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshal_pinvoke_cleanup, NULL, NULL, &DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_0_0_0 } /* UnityEngine.Networking.DownloadHandler */,
	{ NULL, DownloadHandlerAssetBundle_tCD9D8BA067912469251677D16DFCADD13CAD510C_marshal_pinvoke, DownloadHandlerAssetBundle_tCD9D8BA067912469251677D16DFCADD13CAD510C_marshal_pinvoke_back, DownloadHandlerAssetBundle_tCD9D8BA067912469251677D16DFCADD13CAD510C_marshal_pinvoke_cleanup, NULL, NULL, &DownloadHandlerAssetBundle_tCD9D8BA067912469251677D16DFCADD13CAD510C_0_0_0 } /* UnityEngine.Networking.DownloadHandlerAssetBundle */,
	{ NULL, DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974_marshal_pinvoke, DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974_marshal_pinvoke_back, DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974_marshal_pinvoke_cleanup, NULL, NULL, &DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974_0_0_0 } /* UnityEngine.Networking.DownloadHandlerBuffer */,
	{ NULL, DownloadHandlerFile_tD1342A7B8173C9ECC7B3BB9E1A7631D7AEFBD902_marshal_pinvoke, DownloadHandlerFile_tD1342A7B8173C9ECC7B3BB9E1A7631D7AEFBD902_marshal_pinvoke_back, DownloadHandlerFile_tD1342A7B8173C9ECC7B3BB9E1A7631D7AEFBD902_marshal_pinvoke_cleanup, NULL, NULL, &DownloadHandlerFile_tD1342A7B8173C9ECC7B3BB9E1A7631D7AEFBD902_0_0_0 } /* UnityEngine.Networking.DownloadHandlerFile */,
	{ NULL, DownloadHandlerScript_t42FD7363F738391BB1EA2552FF18F9FA7C0EE38B_marshal_pinvoke, DownloadHandlerScript_t42FD7363F738391BB1EA2552FF18F9FA7C0EE38B_marshal_pinvoke_back, DownloadHandlerScript_t42FD7363F738391BB1EA2552FF18F9FA7C0EE38B_marshal_pinvoke_cleanup, NULL, NULL, &DownloadHandlerScript_t42FD7363F738391BB1EA2552FF18F9FA7C0EE38B_0_0_0 } /* UnityEngine.Networking.DownloadHandlerScript */,
	{ NULL, ETAsyncTaskMethodBuilder_t6539D4B6A1CB6F6388453211D928A26188B68B0C_marshal_pinvoke, ETAsyncTaskMethodBuilder_t6539D4B6A1CB6F6388453211D928A26188B68B0C_marshal_pinvoke_back, ETAsyncTaskMethodBuilder_t6539D4B6A1CB6F6388453211D928A26188B68B0C_marshal_pinvoke_cleanup, NULL, NULL, &ETAsyncTaskMethodBuilder_t6539D4B6A1CB6F6388453211D928A26188B68B0C_0_0_0 } /* ET.ETAsyncTaskMethodBuilder */,
	{ NULL, EncryptFileInfo_tDAA38B9CEBCA459FF3F31DB5DA2B6103979FA18B_marshal_pinvoke, EncryptFileInfo_tDAA38B9CEBCA459FF3F31DB5DA2B6103979FA18B_marshal_pinvoke_back, EncryptFileInfo_tDAA38B9CEBCA459FF3F31DB5DA2B6103979FA18B_marshal_pinvoke_cleanup, NULL, NULL, &EncryptFileInfo_tDAA38B9CEBCA459FF3F31DB5DA2B6103979FA18B_0_0_0 } /* YooAsset.EncryptFileInfo */,
	{ NULL, EncryptResult_tF9D7E801F11C360586AA064C31197C0BAC9DB26D_marshal_pinvoke, EncryptResult_tF9D7E801F11C360586AA064C31197C0BAC9DB26D_marshal_pinvoke_back, EncryptResult_tF9D7E801F11C360586AA064C31197C0BAC9DB26D_marshal_pinvoke_cleanup, NULL, NULL, &EncryptResult_tF9D7E801F11C360586AA064C31197C0BAC9DB26D_0_0_0 } /* YooAsset.EncryptResult */,
	{ NULL, Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshal_pinvoke, Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshal_pinvoke_back, Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshal_pinvoke_cleanup, NULL, NULL, &Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_0_0_0 } /* System.Enum */,
	{ NULL, Ephemeron_t74F279F5E7CF4A0CFC21C822431DD840572C6DA2_marshal_pinvoke, Ephemeron_t74F279F5E7CF4A0CFC21C822431DD840572C6DA2_marshal_pinvoke_back, Ephemeron_t74F279F5E7CF4A0CFC21C822431DD840572C6DA2_marshal_pinvoke_cleanup, NULL, NULL, &Ephemeron_t74F279F5E7CF4A0CFC21C822431DD840572C6DA2_0_0_0 } /* System.Runtime.CompilerServices.Ephemeron */,
	{ NULL, Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB_marshal_pinvoke, Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB_marshal_pinvoke_back, Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB_marshal_pinvoke_cleanup, NULL, NULL, &Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB_0_0_0 } /* UnityEngine.Event */,
	{ NULL, EventDispatcherGate_t75A9E135B6558D523DCFC5CF95B44F153A779097_marshal_pinvoke, EventDispatcherGate_t75A9E135B6558D523DCFC5CF95B44F153A779097_marshal_pinvoke_back, EventDispatcherGate_t75A9E135B6558D523DCFC5CF95B44F153A779097_marshal_pinvoke_cleanup, NULL, NULL, &EventDispatcherGate_t75A9E135B6558D523DCFC5CF95B44F153A779097_0_0_0 } /* UnityEngine.UIElements.EventDispatcherGate */,
	{ NULL, EventInterests_tF375F3296A6689BC4B016F237123DB5457515EC8_marshal_pinvoke, EventInterests_tF375F3296A6689BC4B016F237123DB5457515EC8_marshal_pinvoke_back, EventInterests_tF375F3296A6689BC4B016F237123DB5457515EC8_marshal_pinvoke_cleanup, NULL, NULL, &EventInterests_tF375F3296A6689BC4B016F237123DB5457515EC8_0_0_0 } /* UnityEngine.EventInterests */,
	{ NULL, Exception_t_marshal_pinvoke, Exception_t_marshal_pinvoke_back, Exception_t_marshal_pinvoke_cleanup, NULL, NULL, &Exception_t_0_0_0 } /* System.Exception */,
	{ NULL, ExceptionHandlingClause_t9FEDBA314A006A0A836538080D93D15758AA114B_marshal_pinvoke, ExceptionHandlingClause_t9FEDBA314A006A0A836538080D93D15758AA114B_marshal_pinvoke_back, ExceptionHandlingClause_t9FEDBA314A006A0A836538080D93D15758AA114B_marshal_pinvoke_cleanup, NULL, NULL, &ExceptionHandlingClause_t9FEDBA314A006A0A836538080D93D15758AA114B_0_0_0 } /* System.Reflection.ExceptionHandlingClause */,
	{ NULL, ExecutionContextSwitcher_tC30FBBA37AF7939CED1F80BF8A63BA1DFD07D708_marshal_pinvoke, ExecutionContextSwitcher_tC30FBBA37AF7939CED1F80BF8A63BA1DFD07D708_marshal_pinvoke_back, ExecutionContextSwitcher_tC30FBBA37AF7939CED1F80BF8A63BA1DFD07D708_marshal_pinvoke_cleanup, NULL, NULL, &ExecutionContextSwitcher_tC30FBBA37AF7939CED1F80BF8A63BA1DFD07D708_0_0_0 } /* System.Threading.ExecutionContextSwitcher */,
	{ NULL, ExportSym_t17E2ADFA8E6AA76AF1C7713C417334EF97B41B82_marshal_pinvoke, ExportSym_t17E2ADFA8E6AA76AF1C7713C417334EF97B41B82_marshal_pinvoke_back, ExportSym_t17E2ADFA8E6AA76AF1C7713C417334EF97B41B82_marshal_pinvoke_cleanup, NULL, NULL, &ExportSym_t17E2ADFA8E6AA76AF1C7713C417334EF97B41B82_0_0_0 } /* Microsoft.Cci.Pdb.ExportSym */,
	{ NULL, FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756_marshal_pinvoke, FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756_marshal_pinvoke_back, FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756_marshal_pinvoke_cleanup, NULL, NULL, &FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756_0_0_0 } /* UnityEngine.TextCore.FaceInfo */,
	{ NULL, FailedToLoadScriptObject_t51C7A75B7D39FE935901EB6E75FE2D020AF14A89_marshal_pinvoke, FailedToLoadScriptObject_t51C7A75B7D39FE935901EB6E75FE2D020AF14A89_marshal_pinvoke_back, FailedToLoadScriptObject_t51C7A75B7D39FE935901EB6E75FE2D020AF14A89_marshal_pinvoke_cleanup, NULL, NULL, &FailedToLoadScriptObject_t51C7A75B7D39FE935901EB6E75FE2D020AF14A89_0_0_0 } /* UnityEngine.FailedToLoadScriptObject */,
	{ NULL, FastMemoryDesc_tAD0B2FF1E2C10081569B42C98F9E48DE366F7F4D_marshal_pinvoke, FastMemoryDesc_tAD0B2FF1E2C10081569B42C98F9E48DE366F7F4D_marshal_pinvoke_back, FastMemoryDesc_tAD0B2FF1E2C10081569B42C98F9E48DE366F7F4D_marshal_pinvoke_cleanup, NULL, NULL, &FastMemoryDesc_tAD0B2FF1E2C10081569B42C98F9E48DE366F7F4D_0_0_0 } /* UnityEngine.Experimental.Rendering.RenderGraphModule.FastMemoryDesc */,
	{ NULL, FloatTween_t11548A42FCB3B005DD83D77A529119381B2BB64A_marshal_pinvoke, FloatTween_t11548A42FCB3B005DD83D77A529119381B2BB64A_marshal_pinvoke_back, FloatTween_t11548A42FCB3B005DD83D77A529119381B2BB64A_marshal_pinvoke_cleanup, NULL, NULL, &FloatTween_t11548A42FCB3B005DD83D77A529119381B2BB64A_0_0_0 } /* UnityEngine.UI.CoroutineTween.FloatTween */,
	{ NULL, FontAssetCreationEditorSettings_t0FF28D2E78F090105C63C81F9E438A7B09E3EA52_marshal_pinvoke, FontAssetCreationEditorSettings_t0FF28D2E78F090105C63C81F9E438A7B09E3EA52_marshal_pinvoke_back, FontAssetCreationEditorSettings_t0FF28D2E78F090105C63C81F9E438A7B09E3EA52_marshal_pinvoke_cleanup, NULL, NULL, &FontAssetCreationEditorSettings_t0FF28D2E78F090105C63C81F9E438A7B09E3EA52_0_0_0 } /* UnityEngine.TextCore.Text.FontAssetCreationEditorSettings */,
	{ NULL, FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C_marshal_pinvoke, FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C_marshal_pinvoke_back, FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C_marshal_pinvoke_cleanup, NULL, NULL, &FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C_0_0_0 } /* UnityEngine.UIElements.FontDefinition */,
	{ NULL, FontReference_t550791D5AA7787156C3A229C65D7E1AC4BF76172_marshal_pinvoke, FontReference_t550791D5AA7787156C3A229C65D7E1AC4BF76172_marshal_pinvoke_back, FontReference_t550791D5AA7787156C3A229C65D7E1AC4BF76172_marshal_pinvoke_cleanup, NULL, NULL, &FontReference_t550791D5AA7787156C3A229C65D7E1AC4BF76172_0_0_0 } /* UnityEngine.TextCore.LowLevel.FontReference */,
	{ NULL, FontWeightPair_tB94169BD86D0DFC25D651F890B15991A3E0ADA42_marshal_pinvoke, FontWeightPair_tB94169BD86D0DFC25D651F890B15991A3E0ADA42_marshal_pinvoke_back, FontWeightPair_tB94169BD86D0DFC25D651F890B15991A3E0ADA42_marshal_pinvoke_cleanup, NULL, NULL, &FontWeightPair_tB94169BD86D0DFC25D651F890B15991A3E0ADA42_0_0_0 } /* UnityEngine.TextCore.Text.FontWeightPair */,
	{ NULL, ForceAsyncAwaiter_t4F90D8A767F7504702D667A8E69AA7ACCD0B87C2_marshal_pinvoke, ForceAsyncAwaiter_t4F90D8A767F7504702D667A8E69AA7ACCD0B87C2_marshal_pinvoke_back, ForceAsyncAwaiter_t4F90D8A767F7504702D667A8E69AA7ACCD0B87C2_marshal_pinvoke_cleanup, NULL, NULL, &ForceAsyncAwaiter_t4F90D8A767F7504702D667A8E69AA7ACCD0B87C2_0_0_0 } /* System.Threading.Tasks.ForceAsyncAwaiter */,
	{ NULL, FrameRelSym_t697F8E911353D361238C2B89B48832699AFE098E_marshal_pinvoke, FrameRelSym_t697F8E911353D361238C2B89B48832699AFE098E_marshal_pinvoke_back, FrameRelSym_t697F8E911353D361238C2B89B48832699AFE098E_marshal_pinvoke_cleanup, NULL, NULL, &FrameRelSym_t697F8E911353D361238C2B89B48832699AFE098E_0_0_0 } /* Microsoft.Cci.Pdb.FrameRelSym */,
	{ NULL, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_marshal_pinvoke, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_marshal_pinvoke_back, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_marshal_pinvoke_cleanup, NULL, NULL, &GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_0_0_0 } /* UnityEngine.GUIContent */,
	{ NULL, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshal_pinvoke, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshal_pinvoke_back, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshal_pinvoke_cleanup, NULL, NULL, &GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_0_0_0 } /* UnityEngine.GUIStyle */,
	{ NULL, GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshal_pinvoke, GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshal_pinvoke_back, GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshal_pinvoke_cleanup, NULL, NULL, &GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_0_0_0 } /* UnityEngine.GUIStyleState */,
	{ NULL, GlobalDynamicResolutionSettings_t2BF29E3CFADCD55F6AC2D35D728817B79264A9A0_marshal_pinvoke, GlobalDynamicResolutionSettings_t2BF29E3CFADCD55F6AC2D35D728817B79264A9A0_marshal_pinvoke_back, GlobalDynamicResolutionSettings_t2BF29E3CFADCD55F6AC2D35D728817B79264A9A0_marshal_pinvoke_cleanup, NULL, NULL, &GlobalDynamicResolutionSettings_t2BF29E3CFADCD55F6AC2D35D728817B79264A9A0_0_0_0 } /* UnityEngine.Rendering.GlobalDynamicResolutionSettings */,
	{ NULL, Glyph_t700CF8EBE04ED4AEAB520885AAA1B309E02A103F_marshal_pinvoke, Glyph_t700CF8EBE04ED4AEAB520885AAA1B309E02A103F_marshal_pinvoke_back, Glyph_t700CF8EBE04ED4AEAB520885AAA1B309E02A103F_marshal_pinvoke_cleanup, NULL, NULL, &Glyph_t700CF8EBE04ED4AEAB520885AAA1B309E02A103F_0_0_0 } /* UnityEngine.TextCore.Glyph */,
	{ NULL, Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_marshal_pinvoke, Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_marshal_pinvoke_back, Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_marshal_pinvoke_cleanup, NULL, NULL, &Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_0_0_0 } /* UnityEngine.Gradient */,
	{ NULL, HashAlgorithmName_t7FCDC65C37365F7AFAAA96952D14F51676480A3F_marshal_pinvoke, HashAlgorithmName_t7FCDC65C37365F7AFAAA96952D14F51676480A3F_marshal_pinvoke_back, HashAlgorithmName_t7FCDC65C37365F7AFAAA96952D14F51676480A3F_marshal_pinvoke_cleanup, NULL, NULL, &HashAlgorithmName_t7FCDC65C37365F7AFAAA96952D14F51676480A3F_0_0_0 } /* System.Security.Cryptography.HashAlgorithmName */,
	{ DelegatePInvokeWrapper_HeaderParser_t9BD3B896027A047C0DA68DC732ABC1B9A660AB67, NULL, NULL, NULL, NULL, NULL, &HeaderParser_t9BD3B896027A047C0DA68DC732ABC1B9A660AB67_0_0_0 } /* System.Net.HeaderParser */,
	{ NULL, HeaderVariantInfo_t99223ED0C557730FBD8AA572065B994254F3386A_marshal_pinvoke, HeaderVariantInfo_t99223ED0C557730FBD8AA572065B994254F3386A_marshal_pinvoke_back, HeaderVariantInfo_t99223ED0C557730FBD8AA572065B994254F3386A_marshal_pinvoke_cleanup, NULL, NULL, &HeaderVariantInfo_t99223ED0C557730FBD8AA572065B994254F3386A_0_0_0 } /* System.Net.HeaderVariantInfo */,
	{ NULL, HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8_marshal_pinvoke, HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8_marshal_pinvoke_back, HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8_marshal_pinvoke_cleanup, NULL, NULL, &HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8_0_0_0 } /* UnityEngine.HumanBone */,
	{ NULL, NULL, NULL, NULL, NULL, &IAdviseSink_t37C3EC848072ADC38380B8E6792BCFC7FB02F5A3::IID, &IAdviseSink_t37C3EC848072ADC38380B8E6792BCFC7FB02F5A3_0_0_0 } /* System.Runtime.InteropServices.ComTypes.IAdviseSink */,
	{ NULL, NULL, NULL, NULL, NULL, &IDataObject_t47F2CDDF556578DD1CA1DD50B64223DE02046725::IID, &IDataObject_t47F2CDDF556578DD1CA1DD50B64223DE02046725_0_0_0 } /* System.Runtime.InteropServices.ComTypes.IDataObject */,
	{ NULL, NULL, NULL, NULL, NULL, &IEnumFORMATETC_tA2975106C072DA4A2C01123C03B40E4C6A378D2C::IID, &IEnumFORMATETC_tA2975106C072DA4A2C01123C03B40E4C6A378D2C_0_0_0 } /* System.Runtime.InteropServices.ComTypes.IEnumFORMATETC */,
	{ NULL, NULL, NULL, NULL, NULL, &IEnumSTATDATA_t74774EEE6E04C3CCE175B8F433428B4F2DCA23E7::IID, &IEnumSTATDATA_t74774EEE6E04C3CCE175B8F433428B4F2DCA23E7_0_0_0 } /* System.Runtime.InteropServices.ComTypes.IEnumSTATDATA */,
	{ NULL, NULL, NULL, NULL, NULL, &IMetaDataEmit_tED2D8D4818050B8E1945A8A5BB85414139BDFE98::IID, &IMetaDataEmit_tED2D8D4818050B8E1945A8A5BB85414139BDFE98_0_0_0 } /* ILRuntime.Mono.Cecil.Pdb.IMetaDataEmit */,
	{ NULL, NULL, NULL, NULL, NULL, &IMetaDataImport_tF05FD2344E376C091B8D54AFD5D8181A3C800785::IID, &IMetaDataImport_tF05FD2344E376C091B8D54AFD5D8181A3C800785_0_0_0 } /* ILRuntime.Mono.Cecil.Pdb.IMetaDataImport */,
	{ NULL, NULL, NULL, NULL, NULL, &IMoniker_tEB333F870BCBCEA3BB5D6CBC9C22909B568741A8::IID, &IMoniker_tEB333F870BCBCEA3BB5D6CBC9C22909B568741A8_0_0_0 } /* System.Runtime.InteropServices.ComTypes.IMoniker */,
	{ NULL, IOAsyncResult_t667861995468DDF5B2CFED1940CC2BCEEDD2B374_marshal_pinvoke, IOAsyncResult_t667861995468DDF5B2CFED1940CC2BCEEDD2B374_marshal_pinvoke_back, IOAsyncResult_t667861995468DDF5B2CFED1940CC2BCEEDD2B374_marshal_pinvoke_cleanup, NULL, NULL, &IOAsyncResult_t667861995468DDF5B2CFED1940CC2BCEEDD2B374_0_0_0 } /* System.IOAsyncResult */,
	{ NULL, IOSelectorJob_t988E3C2831A98169EFDB178A08E8548A4E90DD31_marshal_pinvoke, IOSelectorJob_t988E3C2831A98169EFDB178A08E8548A4E90DD31_marshal_pinvoke_back, IOSelectorJob_t988E3C2831A98169EFDB178A08E8548A4E90DD31_marshal_pinvoke_cleanup, NULL, NULL, &IOSelectorJob_t988E3C2831A98169EFDB178A08E8548A4E90DD31_0_0_0 } /* System.IOSelectorJob */,
	{ NULL, IPPacketInformation_tCD16AD717AD72D36684D9CFFDA0F6B53CCD3249B_marshal_pinvoke, IPPacketInformation_tCD16AD717AD72D36684D9CFFDA0F6B53CCD3249B_marshal_pinvoke_back, IPPacketInformation_tCD16AD717AD72D36684D9CFFDA0F6B53CCD3249B_marshal_pinvoke_cleanup, NULL, NULL, &IPPacketInformation_tCD16AD717AD72D36684D9CFFDA0F6B53CCD3249B_0_0_0 } /* System.Net.Sockets.IPPacketInformation */,
	{ NULL, IPv6AddressFormatter_t2EA33A2D57555121A5FB9BF403410B6D66233282_marshal_pinvoke, IPv6AddressFormatter_t2EA33A2D57555121A5FB9BF403410B6D66233282_marshal_pinvoke_back, IPv6AddressFormatter_t2EA33A2D57555121A5FB9BF403410B6D66233282_marshal_pinvoke_cleanup, NULL, NULL, &IPv6AddressFormatter_t2EA33A2D57555121A5FB9BF403410B6D66233282_0_0_0 } /* System.Net.IPv6AddressFormatter */,
	{ NULL, NULL, NULL, NULL, NULL, &IStream_tD557F2A7FBD3D478F37E3CBCAA456B6819902AF8::IID, &IStream_tD557F2A7FBD3D478F37E3CBCAA456B6819902AF8_0_0_0 } /* System.Runtime.InteropServices.ComTypes.IStream */,
	{ NULL, NULL, NULL, NULL, NULL, &ISymUnmanagedDocumentWriter_tA21FF6B5568131A7AA5AC8209D7C5B91DC935AA8::IID, &ISymUnmanagedDocumentWriter_tA21FF6B5568131A7AA5AC8209D7C5B91DC935AA8_0_0_0 } /* ILRuntime.Mono.Cecil.Pdb.ISymUnmanagedDocumentWriter */,
	{ NULL, NULL, NULL, NULL, NULL, &ISymUnmanagedWriter2_t736EB7F3A2D3D53D186BA91789FA620117286258::IID, &ISymUnmanagedWriter2_t736EB7F3A2D3D53D186BA91789FA620117286258_0_0_0 } /* ILRuntime.Mono.Cecil.Pdb.ISymUnmanagedWriter2 */,
	{ NULL, ImageSource_t0990262FCFA5C1F3C695C53FB04A35F71CDD63B4_marshal_pinvoke, ImageSource_t0990262FCFA5C1F3C695C53FB04A35F71CDD63B4_marshal_pinvoke_back, ImageSource_t0990262FCFA5C1F3C695C53FB04A35F71CDD63B4_marshal_pinvoke_cleanup, NULL, NULL, &ImageSource_t0990262FCFA5C1F3C695C53FB04A35F71CDD63B4_0_0_0 } /* UnityEngine.UIElements.StyleSheets.ImageSource */,
	{ NULL, ImportGenericContext_t66AAA1F26B1C8CBE8C7333EF69E095A5548311FB_marshal_pinvoke, ImportGenericContext_t66AAA1F26B1C8CBE8C7333EF69E095A5548311FB_marshal_pinvoke_back, ImportGenericContext_t66AAA1F26B1C8CBE8C7333EF69E095A5548311FB_marshal_pinvoke_cleanup, NULL, NULL, &ImportGenericContext_t66AAA1F26B1C8CBE8C7333EF69E095A5548311FB_0_0_0 } /* ILRuntime.Mono.Cecil.ImportGenericContext */,
	{ NULL, InheritedData_t9CB0AE42B025C0BD86FEF0C979D5BFE15E188E67_marshal_pinvoke, InheritedData_t9CB0AE42B025C0BD86FEF0C979D5BFE15E188E67_marshal_pinvoke_back, InheritedData_t9CB0AE42B025C0BD86FEF0C979D5BFE15E188E67_marshal_pinvoke_cleanup, NULL, NULL, &InheritedData_t9CB0AE42B025C0BD86FEF0C979D5BFE15E188E67_0_0_0 } /* UnityEngine.UIElements.InheritedData */,
	{ NULL, InlineMethodInfo_tDF2F8974CD5D78C3689E7263ED8A1924F7A85EBE_marshal_pinvoke, InlineMethodInfo_tDF2F8974CD5D78C3689E7263ED8A1924F7A85EBE_marshal_pinvoke_back, InlineMethodInfo_tDF2F8974CD5D78C3689E7263ED8A1924F7A85EBE_marshal_pinvoke_cleanup, NULL, NULL, &InlineMethodInfo_tDF2F8974CD5D78C3689E7263ED8A1924F7A85EBE_0_0_0 } /* ILRuntime.Runtime.Intepreter.RegisterVM.InlineMethodInfo */,
	{ NULL, InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD_marshal_pinvoke, InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD_marshal_pinvoke_back, InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD_marshal_pinvoke_cleanup, NULL, NULL, &InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD_0_0_0 } /* UnityEngine.XR.InputDevice */,
	{ NULL, InputDevices_t02B79FC19CEA9AC29A9945F5CDA6D790730FBF34_marshal_pinvoke, InputDevices_t02B79FC19CEA9AC29A9945F5CDA6D790730FBF34_marshal_pinvoke_back, InputDevices_t02B79FC19CEA9AC29A9945F5CDA6D790730FBF34_marshal_pinvoke_cleanup, NULL, NULL, &InputDevices_t02B79FC19CEA9AC29A9945F5CDA6D790730FBF34_0_0_0 } /* UnityEngine.XR.InputDevices */,
	{ NULL, InputFeatureUsage_t1E251DC4F8CD697080F0F5D98388955AF8B87599_marshal_pinvoke, InputFeatureUsage_t1E251DC4F8CD697080F0F5D98388955AF8B87599_marshal_pinvoke_back, InputFeatureUsage_t1E251DC4F8CD697080F0F5D98388955AF8B87599_marshal_pinvoke_cleanup, NULL, NULL, &InputFeatureUsage_t1E251DC4F8CD697080F0F5D98388955AF8B87599_0_0_0 } /* UnityEngine.XR.InputFeatureUsage */,
	{ NULL, InputRecord_tD3D7910851FC56517EE2767EB28725EE7C295526_marshal_pinvoke, InputRecord_tD3D7910851FC56517EE2767EB28725EE7C295526_marshal_pinvoke_back, InputRecord_tD3D7910851FC56517EE2767EB28725EE7C295526_marshal_pinvoke_cleanup, NULL, NULL, &InputRecord_tD3D7910851FC56517EE2767EB28725EE7C295526_0_0_0 } /* System.InputRecord */,
	{ NULL, InstructionArray_t462A6779CC45E6F5578352572B16A61954CB8117_marshal_pinvoke, InstructionArray_t462A6779CC45E6F5578352572B16A61954CB8117_marshal_pinvoke_back, InstructionArray_t462A6779CC45E6F5578352572B16A61954CB8117_marshal_pinvoke_cleanup, NULL, NULL, &InstructionArray_t462A6779CC45E6F5578352572B16A61954CB8117_0_0_0 } /* System.Linq.Expressions.Interpreter.InstructionArray */,
	{ NULL, InstructionOffset_tB686944DA41F57E4D92AE845DE655FDC9115AD1F_marshal_pinvoke, InstructionOffset_tB686944DA41F57E4D92AE845DE655FDC9115AD1F_marshal_pinvoke_back, InstructionOffset_tB686944DA41F57E4D92AE845DE655FDC9115AD1F_marshal_pinvoke_cleanup, NULL, NULL, &InstructionOffset_tB686944DA41F57E4D92AE845DE655FDC9115AD1F_0_0_0 } /* ILRuntime.Mono.Cecil.Cil.InstructionOffset */,
	{ NULL, IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3_marshal_pinvoke, IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3_marshal_pinvoke_back, IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3_marshal_pinvoke_cleanup, NULL, NULL, &IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3_0_0_0 } /* UnityEngine.IntegratedSubsystem */,
	{ NULL, IntegratedSubsystemDescriptor_t9232963B842E01748A8E032928DC8E35DF00C10D_marshal_pinvoke, IntegratedSubsystemDescriptor_t9232963B842E01748A8E032928DC8E35DF00C10D_marshal_pinvoke_back, IntegratedSubsystemDescriptor_t9232963B842E01748A8E032928DC8E35DF00C10D_marshal_pinvoke_cleanup, NULL, NULL, &IntegratedSubsystemDescriptor_t9232963B842E01748A8E032928DC8E35DF00C10D_0_0_0 } /* UnityEngine.IntegratedSubsystemDescriptor */,
	{ NULL, InterfaceMapping_t4818CA9DD146752FBC643AD050582979B632D879_marshal_pinvoke, InterfaceMapping_t4818CA9DD146752FBC643AD050582979B632D879_marshal_pinvoke_back, InterfaceMapping_t4818CA9DD146752FBC643AD050582979B632D879_marshal_pinvoke_cleanup, NULL, NULL, &InterfaceMapping_t4818CA9DD146752FBC643AD050582979B632D879_0_0_0 } /* System.Reflection.InterfaceMapping */,
	{ NULL, InternalCodePageDataItem_t6B4913D6507B26FFAE0B805874644D3DBE78F316_marshal_pinvoke, InternalCodePageDataItem_t6B4913D6507B26FFAE0B805874644D3DBE78F316_marshal_pinvoke_back, InternalCodePageDataItem_t6B4913D6507B26FFAE0B805874644D3DBE78F316_marshal_pinvoke_cleanup, NULL, NULL, &InternalCodePageDataItem_t6B4913D6507B26FFAE0B805874644D3DBE78F316_0_0_0 } /* System.Globalization.InternalCodePageDataItem */,
	{ NULL, InternalEncodingDataItem_t1D6DA6BCE8389C12ECC229A644D2CA45A86C06EB_marshal_pinvoke, InternalEncodingDataItem_t1D6DA6BCE8389C12ECC229A644D2CA45A86C06EB_marshal_pinvoke_back, InternalEncodingDataItem_t1D6DA6BCE8389C12ECC229A644D2CA45A86C06EB_marshal_pinvoke_cleanup, NULL, NULL, &InternalEncodingDataItem_t1D6DA6BCE8389C12ECC229A644D2CA45A86C06EB_0_0_0 } /* System.Globalization.InternalEncodingDataItem */,
	{ NULL, InterpretedFrameInfo_tEF62B79D176B8D032C22953AA0D5B581C4076321_marshal_pinvoke, InterpretedFrameInfo_tEF62B79D176B8D032C22953AA0D5B581C4076321_marshal_pinvoke_back, InterpretedFrameInfo_tEF62B79D176B8D032C22953AA0D5B581C4076321_marshal_pinvoke_cleanup, NULL, NULL, &InterpretedFrameInfo_tEF62B79D176B8D032C22953AA0D5B581C4076321_0_0_0 } /* System.Linq.Expressions.Interpreter.InterpretedFrameInfo */,
	{ NULL, InvocationContext_t61CA8790B5D5ABADCF9DD4581CE465221C67DDC1_marshal_pinvoke, InvocationContext_t61CA8790B5D5ABADCF9DD4581CE465221C67DDC1_marshal_pinvoke_back, InvocationContext_t61CA8790B5D5ABADCF9DD4581CE465221C67DDC1_marshal_pinvoke_cleanup, NULL, NULL, &InvocationContext_t61CA8790B5D5ABADCF9DD4581CE465221C67DDC1_0_0_0 } /* ILRuntime.Runtime.Enviorment.InvocationContext */,
	{ NULL, JITCompiler_tC86D7253C6877F1CFF8CA4617CD766CC7460B965_marshal_pinvoke, JITCompiler_tC86D7253C6877F1CFF8CA4617CD766CC7460B965_marshal_pinvoke_back, JITCompiler_tC86D7253C6877F1CFF8CA4617CD766CC7460B965_marshal_pinvoke_cleanup, NULL, NULL, &JITCompiler_tC86D7253C6877F1CFF8CA4617CD766CC7460B965_0_0_0 } /* ILRuntime.Runtime.Intepreter.RegisterVM.JITCompiler */,
	{ DelegatePInvokeWrapper_KcpLog_t166A3A6F579F69B0AA700460B0BF73A4B8C07C5F, NULL, NULL, NULL, NULL, NULL, &KcpLog_t166A3A6F579F69B0AA700460B0BF73A4B8C07C5F_0_0_0 } /* ET.KcpLog */,
	{ DelegatePInvokeWrapper_KcpOutput_t70A2E75BF30C9F6BBFA7EDCCF748E5F9C25F6732, NULL, NULL, NULL, NULL, NULL, &KcpOutput_t70A2E75BF30C9F6BBFA7EDCCF748E5F9C25F6732_0_0_0 } /* ET.KcpOutput */,
	{ NULL, KcpWaitPacket_t7299EC47BEB86C4A5D9CA00CE65CC7DD9E55DDE0_marshal_pinvoke, KcpWaitPacket_t7299EC47BEB86C4A5D9CA00CE65CC7DD9E55DDE0_marshal_pinvoke_back, KcpWaitPacket_t7299EC47BEB86C4A5D9CA00CE65CC7DD9E55DDE0_marshal_pinvoke_cleanup, NULL, NULL, &KcpWaitPacket_t7299EC47BEB86C4A5D9CA00CE65CC7DD9E55DDE0_0_0_0 } /* ET.KcpWaitPacket */,
	{ NULL, LabelSym32_t2326FA82DA839BA7BE35E54FEE18FE62EE3136C1_marshal_pinvoke, LabelSym32_t2326FA82DA839BA7BE35E54FEE18FE62EE3136C1_marshal_pinvoke_back, LabelSym32_t2326FA82DA839BA7BE35E54FEE18FE62EE3136C1_marshal_pinvoke_cleanup, NULL, NULL, &LabelSym32_t2326FA82DA839BA7BE35E54FEE18FE62EE3136C1_0_0_0 } /* Microsoft.Cci.Pdb.LabelSym32 */,
	{ NULL, LayerBatch_tEC81EE605197FE053EB5C65E38CFD93D9A6B75BC_marshal_pinvoke, LayerBatch_tEC81EE605197FE053EB5C65E38CFD93D9A6B75BC_marshal_pinvoke_back, LayerBatch_tEC81EE605197FE053EB5C65E38CFD93D9A6B75BC_marshal_pinvoke_cleanup, NULL, NULL, &LayerBatch_tEC81EE605197FE053EB5C65E38CFD93D9A6B75BC_0_0_0 } /* UnityEngine.Rendering.Universal.LayerBatch */,
	{ NULL, LeafAlias_tFE225225044CDF0B7A9CE704F1A787F33C879540_marshal_pinvoke, LeafAlias_tFE225225044CDF0B7A9CE704F1A787F33C879540_marshal_pinvoke_back, LeafAlias_tFE225225044CDF0B7A9CE704F1A787F33C879540_marshal_pinvoke_cleanup, NULL, NULL, &LeafAlias_tFE225225044CDF0B7A9CE704F1A787F33C879540_0_0_0 } /* Microsoft.Cci.Pdb.LeafAlias */,
	{ NULL, LeafArgList_tA7E626C075138A076D3E8E3D9B92F2283C0541F9_marshal_pinvoke, LeafArgList_tA7E626C075138A076D3E8E3D9B92F2283C0541F9_marshal_pinvoke_back, LeafArgList_tA7E626C075138A076D3E8E3D9B92F2283C0541F9_marshal_pinvoke_cleanup, NULL, NULL, &LeafArgList_tA7E626C075138A076D3E8E3D9B92F2283C0541F9_0_0_0 } /* Microsoft.Cci.Pdb.LeafArgList */,
	{ NULL, LeafArray_t6F93F06E1960D8B7FFD2708C153AD9CAEC9BE8E5_marshal_pinvoke, LeafArray_t6F93F06E1960D8B7FFD2708C153AD9CAEC9BE8E5_marshal_pinvoke_back, LeafArray_t6F93F06E1960D8B7FFD2708C153AD9CAEC9BE8E5_marshal_pinvoke_cleanup, NULL, NULL, &LeafArray_t6F93F06E1960D8B7FFD2708C153AD9CAEC9BE8E5_0_0_0 } /* Microsoft.Cci.Pdb.LeafArray */,
	{ NULL, LeafBClass_t2BD5C6F67E0E0205CDEACBE7E28923605E9DF147_marshal_pinvoke, LeafBClass_t2BD5C6F67E0E0205CDEACBE7E28923605E9DF147_marshal_pinvoke_back, LeafBClass_t2BD5C6F67E0E0205CDEACBE7E28923605E9DF147_marshal_pinvoke_cleanup, NULL, NULL, &LeafBClass_t2BD5C6F67E0E0205CDEACBE7E28923605E9DF147_0_0_0 } /* Microsoft.Cci.Pdb.LeafBClass */,
	{ NULL, LeafClass_tC2693BBAE88AA54200B17981E81A4A5599526621_marshal_pinvoke, LeafClass_tC2693BBAE88AA54200B17981E81A4A5599526621_marshal_pinvoke_back, LeafClass_tC2693BBAE88AA54200B17981E81A4A5599526621_marshal_pinvoke_cleanup, NULL, NULL, &LeafClass_tC2693BBAE88AA54200B17981E81A4A5599526621_0_0_0 } /* Microsoft.Cci.Pdb.LeafClass */,
	{ NULL, LeafCobol0_t8D9BADBE5BBA9A862A056E5F2BC5CD556140A36C_marshal_pinvoke, LeafCobol0_t8D9BADBE5BBA9A862A056E5F2BC5CD556140A36C_marshal_pinvoke_back, LeafCobol0_t8D9BADBE5BBA9A862A056E5F2BC5CD556140A36C_marshal_pinvoke_cleanup, NULL, NULL, &LeafCobol0_t8D9BADBE5BBA9A862A056E5F2BC5CD556140A36C_0_0_0 } /* Microsoft.Cci.Pdb.LeafCobol0 */,
	{ NULL, LeafCobol1_t7CF990026BFB72B2B6058CC2CBC479DFDCD92F38_marshal_pinvoke, LeafCobol1_t7CF990026BFB72B2B6058CC2CBC479DFDCD92F38_marshal_pinvoke_back, LeafCobol1_t7CF990026BFB72B2B6058CC2CBC479DFDCD92F38_marshal_pinvoke_cleanup, NULL, NULL, &LeafCobol1_t7CF990026BFB72B2B6058CC2CBC479DFDCD92F38_0_0_0 } /* Microsoft.Cci.Pdb.LeafCobol1 */,
	{ NULL, LeafDefArg_t0063834BC21F585C177635958F36E8EE8EF73A36_marshal_pinvoke, LeafDefArg_t0063834BC21F585C177635958F36E8EE8EF73A36_marshal_pinvoke_back, LeafDefArg_t0063834BC21F585C177635958F36E8EE8EF73A36_marshal_pinvoke_cleanup, NULL, NULL, &LeafDefArg_t0063834BC21F585C177635958F36E8EE8EF73A36_0_0_0 } /* Microsoft.Cci.Pdb.LeafDefArg */,
	{ NULL, LeafDerived_t9F6B2BFC27A3FB4989B9C9722C7E1F66CD73EC34_marshal_pinvoke, LeafDerived_t9F6B2BFC27A3FB4989B9C9722C7E1F66CD73EC34_marshal_pinvoke_back, LeafDerived_t9F6B2BFC27A3FB4989B9C9722C7E1F66CD73EC34_marshal_pinvoke_cleanup, NULL, NULL, &LeafDerived_t9F6B2BFC27A3FB4989B9C9722C7E1F66CD73EC34_0_0_0 } /* Microsoft.Cci.Pdb.LeafDerived */,
	{ NULL, LeafDimArray_tBE34ABB9103A2256EE714636B85B6236C82AAF43_marshal_pinvoke, LeafDimArray_tBE34ABB9103A2256EE714636B85B6236C82AAF43_marshal_pinvoke_back, LeafDimArray_tBE34ABB9103A2256EE714636B85B6236C82AAF43_marshal_pinvoke_cleanup, NULL, NULL, &LeafDimArray_tBE34ABB9103A2256EE714636B85B6236C82AAF43_0_0_0 } /* Microsoft.Cci.Pdb.LeafDimArray */,
	{ NULL, LeafDimCon_t5DAC6FE74714261B54D1B0134374D88D0F9B61BF_marshal_pinvoke, LeafDimCon_t5DAC6FE74714261B54D1B0134374D88D0F9B61BF_marshal_pinvoke_back, LeafDimCon_t5DAC6FE74714261B54D1B0134374D88D0F9B61BF_marshal_pinvoke_cleanup, NULL, NULL, &LeafDimCon_t5DAC6FE74714261B54D1B0134374D88D0F9B61BF_0_0_0 } /* Microsoft.Cci.Pdb.LeafDimCon */,
	{ NULL, LeafDimVar_t28BCAADFFB264CCECBB768A70BBCD55A8323F0F2_marshal_pinvoke, LeafDimVar_t28BCAADFFB264CCECBB768A70BBCD55A8323F0F2_marshal_pinvoke_back, LeafDimVar_t28BCAADFFB264CCECBB768A70BBCD55A8323F0F2_marshal_pinvoke_cleanup, NULL, NULL, &LeafDimVar_t28BCAADFFB264CCECBB768A70BBCD55A8323F0F2_0_0_0 } /* Microsoft.Cci.Pdb.LeafDimVar */,
	{ NULL, LeafEnum_tBBB4F01A4FC2E2ED21E7274F93AEF53B88D7E272_marshal_pinvoke, LeafEnum_tBBB4F01A4FC2E2ED21E7274F93AEF53B88D7E272_marshal_pinvoke_back, LeafEnum_tBBB4F01A4FC2E2ED21E7274F93AEF53B88D7E272_marshal_pinvoke_cleanup, NULL, NULL, &LeafEnum_tBBB4F01A4FC2E2ED21E7274F93AEF53B88D7E272_0_0_0 } /* Microsoft.Cci.Pdb.LeafEnum */,
	{ NULL, LeafEnumerate_t100D05CF04AE6EC0EBC4A72EC04EBA14D8BBD08B_marshal_pinvoke, LeafEnumerate_t100D05CF04AE6EC0EBC4A72EC04EBA14D8BBD08B_marshal_pinvoke_back, LeafEnumerate_t100D05CF04AE6EC0EBC4A72EC04EBA14D8BBD08B_marshal_pinvoke_cleanup, NULL, NULL, &LeafEnumerate_t100D05CF04AE6EC0EBC4A72EC04EBA14D8BBD08B_0_0_0 } /* Microsoft.Cci.Pdb.LeafEnumerate */,
	{ NULL, LeafFieldList_t7BECAE38692A8CE3FB878D8CE4042A9D5D834BEC_marshal_pinvoke, LeafFieldList_t7BECAE38692A8CE3FB878D8CE4042A9D5D834BEC_marshal_pinvoke_back, LeafFieldList_t7BECAE38692A8CE3FB878D8CE4042A9D5D834BEC_marshal_pinvoke_cleanup, NULL, NULL, &LeafFieldList_t7BECAE38692A8CE3FB878D8CE4042A9D5D834BEC_0_0_0 } /* Microsoft.Cci.Pdb.LeafFieldList */,
	{ NULL, LeafFriendFcn_tDDEA2FC9459DD91295934C94907E10401A42A193_marshal_pinvoke, LeafFriendFcn_tDDEA2FC9459DD91295934C94907E10401A42A193_marshal_pinvoke_back, LeafFriendFcn_tDDEA2FC9459DD91295934C94907E10401A42A193_marshal_pinvoke_cleanup, NULL, NULL, &LeafFriendFcn_tDDEA2FC9459DD91295934C94907E10401A42A193_0_0_0 } /* Microsoft.Cci.Pdb.LeafFriendFcn */,
	{ NULL, LeafList_t8EBBD11F3626DF112EA61FBFE53A0CB0D74DC2EC_marshal_pinvoke, LeafList_t8EBBD11F3626DF112EA61FBFE53A0CB0D74DC2EC_marshal_pinvoke_back, LeafList_t8EBBD11F3626DF112EA61FBFE53A0CB0D74DC2EC_marshal_pinvoke_cleanup, NULL, NULL, &LeafList_t8EBBD11F3626DF112EA61FBFE53A0CB0D74DC2EC_0_0_0 } /* Microsoft.Cci.Pdb.LeafList */,
	{ NULL, LeafManaged_t5C0FB21DD212D6C79D66AD7809B569D3D3549B05_marshal_pinvoke, LeafManaged_t5C0FB21DD212D6C79D66AD7809B569D3D3549B05_marshal_pinvoke_back, LeafManaged_t5C0FB21DD212D6C79D66AD7809B569D3D3549B05_marshal_pinvoke_cleanup, NULL, NULL, &LeafManaged_t5C0FB21DD212D6C79D66AD7809B569D3D3549B05_0_0_0 } /* Microsoft.Cci.Pdb.LeafManaged */,
	{ NULL, LeafMember_tFEAEB350C842F8F5D5FFC9713EB02E4493574B18_marshal_pinvoke, LeafMember_tFEAEB350C842F8F5D5FFC9713EB02E4493574B18_marshal_pinvoke_back, LeafMember_tFEAEB350C842F8F5D5FFC9713EB02E4493574B18_marshal_pinvoke_cleanup, NULL, NULL, &LeafMember_tFEAEB350C842F8F5D5FFC9713EB02E4493574B18_0_0_0 } /* Microsoft.Cci.Pdb.LeafMember */,
	{ NULL, LeafMemberModify_t73623A235C775C128E76C19CB5E2DC3C57B24CDD_marshal_pinvoke, LeafMemberModify_t73623A235C775C128E76C19CB5E2DC3C57B24CDD_marshal_pinvoke_back, LeafMemberModify_t73623A235C775C128E76C19CB5E2DC3C57B24CDD_marshal_pinvoke_cleanup, NULL, NULL, &LeafMemberModify_t73623A235C775C128E76C19CB5E2DC3C57B24CDD_0_0_0 } /* Microsoft.Cci.Pdb.LeafMemberModify */,
	{ NULL, LeafMethod_t4BD4BB7A7F933C06CFD9484A83FDB22409CD3ACE_marshal_pinvoke, LeafMethod_t4BD4BB7A7F933C06CFD9484A83FDB22409CD3ACE_marshal_pinvoke_back, LeafMethod_t4BD4BB7A7F933C06CFD9484A83FDB22409CD3ACE_marshal_pinvoke_cleanup, NULL, NULL, &LeafMethod_t4BD4BB7A7F933C06CFD9484A83FDB22409CD3ACE_0_0_0 } /* Microsoft.Cci.Pdb.LeafMethod */,
	{ NULL, LeafMethodList_t270AF28D434A8D7826E2CBC8FC42E095DB6BF50E_marshal_pinvoke, LeafMethodList_t270AF28D434A8D7826E2CBC8FC42E095DB6BF50E_marshal_pinvoke_back, LeafMethodList_t270AF28D434A8D7826E2CBC8FC42E095DB6BF50E_marshal_pinvoke_cleanup, NULL, NULL, &LeafMethodList_t270AF28D434A8D7826E2CBC8FC42E095DB6BF50E_0_0_0 } /* Microsoft.Cci.Pdb.LeafMethodList */,
	{ NULL, LeafNestType_t8C3B3109FDE4FAFF0FB80965573B98351C80DC12_marshal_pinvoke, LeafNestType_t8C3B3109FDE4FAFF0FB80965573B98351C80DC12_marshal_pinvoke_back, LeafNestType_t8C3B3109FDE4FAFF0FB80965573B98351C80DC12_marshal_pinvoke_cleanup, NULL, NULL, &LeafNestType_t8C3B3109FDE4FAFF0FB80965573B98351C80DC12_0_0_0 } /* Microsoft.Cci.Pdb.LeafNestType */,
	{ NULL, LeafNestTypeEx_t82C3EA7F5C60C07202EC5EBF4EC7B4DC14BACAD7_marshal_pinvoke, LeafNestTypeEx_t82C3EA7F5C60C07202EC5EBF4EC7B4DC14BACAD7_marshal_pinvoke_back, LeafNestTypeEx_t82C3EA7F5C60C07202EC5EBF4EC7B4DC14BACAD7_marshal_pinvoke_cleanup, NULL, NULL, &LeafNestTypeEx_t82C3EA7F5C60C07202EC5EBF4EC7B4DC14BACAD7_0_0_0 } /* Microsoft.Cci.Pdb.LeafNestTypeEx */,
	{ NULL, LeafOEM_t8C19461C9485D73FA99F0431AE543E62FCA5B83F_marshal_pinvoke, LeafOEM_t8C19461C9485D73FA99F0431AE543E62FCA5B83F_marshal_pinvoke_back, LeafOEM_t8C19461C9485D73FA99F0431AE543E62FCA5B83F_marshal_pinvoke_cleanup, NULL, NULL, &LeafOEM_t8C19461C9485D73FA99F0431AE543E62FCA5B83F_0_0_0 } /* Microsoft.Cci.Pdb.LeafOEM */,
	{ NULL, LeafOEM2_t40DC156A41B42F849CEFAC8CBB00F40156CD270A_marshal_pinvoke, LeafOEM2_t40DC156A41B42F849CEFAC8CBB00F40156CD270A_marshal_pinvoke_back, LeafOEM2_t40DC156A41B42F849CEFAC8CBB00F40156CD270A_marshal_pinvoke_cleanup, NULL, NULL, &LeafOEM2_t40DC156A41B42F849CEFAC8CBB00F40156CD270A_0_0_0 } /* Microsoft.Cci.Pdb.LeafOEM2 */,
	{ NULL, LeafOneMethod_t0DF60CF9D042F18292B97F61EE01DA73B4EAAE0F_marshal_pinvoke, LeafOneMethod_t0DF60CF9D042F18292B97F61EE01DA73B4EAAE0F_marshal_pinvoke_back, LeafOneMethod_t0DF60CF9D042F18292B97F61EE01DA73B4EAAE0F_marshal_pinvoke_cleanup, NULL, NULL, &LeafOneMethod_t0DF60CF9D042F18292B97F61EE01DA73B4EAAE0F_0_0_0 } /* Microsoft.Cci.Pdb.LeafOneMethod */,
	{ NULL, LeafPreComp_t2B2B8CD694D97DCA264F160C22EC7CBA5D095772_marshal_pinvoke, LeafPreComp_t2B2B8CD694D97DCA264F160C22EC7CBA5D095772_marshal_pinvoke_back, LeafPreComp_t2B2B8CD694D97DCA264F160C22EC7CBA5D095772_marshal_pinvoke_cleanup, NULL, NULL, &LeafPreComp_t2B2B8CD694D97DCA264F160C22EC7CBA5D095772_0_0_0 } /* Microsoft.Cci.Pdb.LeafPreComp */,
	{ NULL, LeafRefSym_t66F541303A6D57FAA051E0CF1198C4112393039A_marshal_pinvoke, LeafRefSym_t66F541303A6D57FAA051E0CF1198C4112393039A_marshal_pinvoke_back, LeafRefSym_t66F541303A6D57FAA051E0CF1198C4112393039A_marshal_pinvoke_cleanup, NULL, NULL, &LeafRefSym_t66F541303A6D57FAA051E0CF1198C4112393039A_0_0_0 } /* Microsoft.Cci.Pdb.LeafRefSym */,
	{ NULL, LeafSTMember_tAE5103B0DDCA382EC7E443038E80FB94DECBFC17_marshal_pinvoke, LeafSTMember_tAE5103B0DDCA382EC7E443038E80FB94DECBFC17_marshal_pinvoke_back, LeafSTMember_tAE5103B0DDCA382EC7E443038E80FB94DECBFC17_marshal_pinvoke_cleanup, NULL, NULL, &LeafSTMember_tAE5103B0DDCA382EC7E443038E80FB94DECBFC17_0_0_0 } /* Microsoft.Cci.Pdb.LeafSTMember */,
	{ NULL, LeafSkip_tB59D8DD0C1CB3FE478EC2FC0E250B56C813AFABF_marshal_pinvoke, LeafSkip_tB59D8DD0C1CB3FE478EC2FC0E250B56C813AFABF_marshal_pinvoke_back, LeafSkip_tB59D8DD0C1CB3FE478EC2FC0E250B56C813AFABF_marshal_pinvoke_cleanup, NULL, NULL, &LeafSkip_tB59D8DD0C1CB3FE478EC2FC0E250B56C813AFABF_0_0_0 } /* Microsoft.Cci.Pdb.LeafSkip */,
	{ NULL, LeafTypeServer_t150ADE52DF89B67986B7C5479953469871F80592_marshal_pinvoke, LeafTypeServer_t150ADE52DF89B67986B7C5479953469871F80592_marshal_pinvoke_back, LeafTypeServer_t150ADE52DF89B67986B7C5479953469871F80592_marshal_pinvoke_cleanup, NULL, NULL, &LeafTypeServer_t150ADE52DF89B67986B7C5479953469871F80592_0_0_0 } /* Microsoft.Cci.Pdb.LeafTypeServer */,
	{ NULL, LeafTypeServer2_tA4B42CD055A72F7DA60A8007380872002FFD1C70_marshal_pinvoke, LeafTypeServer2_tA4B42CD055A72F7DA60A8007380872002FFD1C70_marshal_pinvoke_back, LeafTypeServer2_tA4B42CD055A72F7DA60A8007380872002FFD1C70_marshal_pinvoke_cleanup, NULL, NULL, &LeafTypeServer2_tA4B42CD055A72F7DA60A8007380872002FFD1C70_0_0_0 } /* Microsoft.Cci.Pdb.LeafTypeServer2 */,
	{ NULL, LeafUnion_t20B39332937BD2C26EFD22E81FBD0ED4C1F95E10_marshal_pinvoke, LeafUnion_t20B39332937BD2C26EFD22E81FBD0ED4C1F95E10_marshal_pinvoke_back, LeafUnion_t20B39332937BD2C26EFD22E81FBD0ED4C1F95E10_marshal_pinvoke_cleanup, NULL, NULL, &LeafUnion_t20B39332937BD2C26EFD22E81FBD0ED4C1F95E10_0_0_0 } /* Microsoft.Cci.Pdb.LeafUnion */,
	{ NULL, LeafVBClass_tA734374CC3F8DF22155CCE876C8D5FC0C18A1D44_marshal_pinvoke, LeafVBClass_tA734374CC3F8DF22155CCE876C8D5FC0C18A1D44_marshal_pinvoke_back, LeafVBClass_tA734374CC3F8DF22155CCE876C8D5FC0C18A1D44_marshal_pinvoke_cleanup, NULL, NULL, &LeafVBClass_tA734374CC3F8DF22155CCE876C8D5FC0C18A1D44_0_0_0 } /* Microsoft.Cci.Pdb.LeafVBClass */,
	{ NULL, LeafVFTPath_t9116CACD57822882028EA5B2C2C1FB55681C049A_marshal_pinvoke, LeafVFTPath_t9116CACD57822882028EA5B2C2C1FB55681C049A_marshal_pinvoke_back, LeafVFTPath_t9116CACD57822882028EA5B2C2C1FB55681C049A_marshal_pinvoke_cleanup, NULL, NULL, &LeafVFTPath_t9116CACD57822882028EA5B2C2C1FB55681C049A_0_0_0 } /* Microsoft.Cci.Pdb.LeafVFTPath */,
	{ NULL, LeafVTShape_t4425CBE9F3F0B1189C480F7AB26BE92BEAFF2FB7_marshal_pinvoke, LeafVTShape_t4425CBE9F3F0B1189C480F7AB26BE92BEAFF2FB7_marshal_pinvoke_back, LeafVTShape_t4425CBE9F3F0B1189C480F7AB26BE92BEAFF2FB7_marshal_pinvoke_cleanup, NULL, NULL, &LeafVTShape_t4425CBE9F3F0B1189C480F7AB26BE92BEAFF2FB7_0_0_0 } /* Microsoft.Cci.Pdb.LeafVTShape */,
	{ NULL, LeafVarString_tFC47CB44F93FCAAF95A76FDE543952C0F094D2F5_marshal_pinvoke, LeafVarString_tFC47CB44F93FCAAF95A76FDE543952C0F094D2F5_marshal_pinvoke_back, LeafVarString_tFC47CB44F93FCAAF95A76FDE543952C0F094D2F5_marshal_pinvoke_cleanup, NULL, NULL, &LeafVarString_tFC47CB44F93FCAAF95A76FDE543952C0F094D2F5_0_0_0 } /* Microsoft.Cci.Pdb.LeafVarString */,
	{ NULL, Light2DBlendStyle_tD5C374DD9D54E8FA4BC495EA99F386F09B16B3D4_marshal_pinvoke, Light2DBlendStyle_tD5C374DD9D54E8FA4BC495EA99F386F09B16B3D4_marshal_pinvoke_back, Light2DBlendStyle_tD5C374DD9D54E8FA4BC495EA99F386F09B16B3D4_marshal_pinvoke_cleanup, NULL, NULL, &Light2DBlendStyle_tD5C374DD9D54E8FA4BC495EA99F386F09B16B3D4_0_0_0 } /* UnityEngine.Rendering.Universal.Light2DBlendStyle */,
	{ NULL, LightBakingOutput_t6212AB0B6B34C94F1982FE964FC48201854B5B90_marshal_pinvoke, LightBakingOutput_t6212AB0B6B34C94F1982FE964FC48201854B5B90_marshal_pinvoke_back, LightBakingOutput_t6212AB0B6B34C94F1982FE964FC48201854B5B90_marshal_pinvoke_cleanup, NULL, NULL, &LightBakingOutput_t6212AB0B6B34C94F1982FE964FC48201854B5B90_0_0_0 } /* UnityEngine.LightBakingOutput */,
	{ NULL, LightData_t6A82F1C9AA97327A5EE9C16A3E949918F3A55470_marshal_pinvoke, LightData_t6A82F1C9AA97327A5EE9C16A3E949918F3A55470_marshal_pinvoke_back, LightData_t6A82F1C9AA97327A5EE9C16A3E949918F3A55470_marshal_pinvoke_cleanup, NULL, NULL, &LightData_t6A82F1C9AA97327A5EE9C16A3E949918F3A55470_0_0_0 } /* UnityEngine.Rendering.Universal.LightData */,
	{ NULL, LightProbes_tB0E0051ED428658D51E611C9E4B6FE3A49EB094D_marshal_pinvoke, LightProbes_tB0E0051ED428658D51E611C9E4B6FE3A49EB094D_marshal_pinvoke_back, LightProbes_tB0E0051ED428658D51E611C9E4B6FE3A49EB094D_marshal_pinvoke_cleanup, NULL, NULL, &LightProbes_tB0E0051ED428658D51E611C9E4B6FE3A49EB094D_0_0_0 } /* UnityEngine.LightProbes */,
	{ NULL, LinkInfo_tE85DDAFDFBDA635E6405C88EE4FD5941A9243DD8_marshal_pinvoke, LinkInfo_tE85DDAFDFBDA635E6405C88EE4FD5941A9243DD8_marshal_pinvoke_back, LinkInfo_tE85DDAFDFBDA635E6405C88EE4FD5941A9243DD8_marshal_pinvoke_cleanup, NULL, NULL, &LinkInfo_tE85DDAFDFBDA635E6405C88EE4FD5941A9243DD8_0_0_0 } /* UnityEngine.TextCore.Text.LinkInfo */,
	{ NULL, ListDragAndDropArgs_t12CC7206A73BE8F4D8126CD45DA6337DF8C91F53_marshal_pinvoke, ListDragAndDropArgs_t12CC7206A73BE8F4D8126CD45DA6337DF8C91F53_marshal_pinvoke_back, ListDragAndDropArgs_t12CC7206A73BE8F4D8126CD45DA6337DF8C91F53_marshal_pinvoke_cleanup, NULL, NULL, &ListDragAndDropArgs_t12CC7206A73BE8F4D8126CD45DA6337DF8C91F53_0_0_0 } /* UnityEngine.UIElements.ListDragAndDropArgs */,
	{ NULL, LocalBuilder_tCB5AF342391604CED7394B81A931AB5BC6B97BB6_marshal_pinvoke, LocalBuilder_tCB5AF342391604CED7394B81A931AB5BC6B97BB6_marshal_pinvoke_back, LocalBuilder_tCB5AF342391604CED7394B81A931AB5BC6B97BB6_marshal_pinvoke_cleanup, NULL, NULL, &LocalBuilder_tCB5AF342391604CED7394B81A931AB5BC6B97BB6_0_0_0 } /* System.Reflection.Emit.LocalBuilder */,
	{ NULL, LocalDefinition_t7B90DE35AAE919E1C79BA7EAFB99BF70589B1C02_marshal_pinvoke, LocalDefinition_t7B90DE35AAE919E1C79BA7EAFB99BF70589B1C02_marshal_pinvoke_back, LocalDefinition_t7B90DE35AAE919E1C79BA7EAFB99BF70589B1C02_marshal_pinvoke_cleanup, NULL, NULL, &LocalDefinition_t7B90DE35AAE919E1C79BA7EAFB99BF70589B1C02_0_0_0 } /* System.Linq.Expressions.Interpreter.LocalDefinition */,
	{ NULL, LocalSym_t847E2468DA6B602B494350C1C161B6E9866E76B7_marshal_pinvoke, LocalSym_t847E2468DA6B602B494350C1C161B6E9866E76B7_marshal_pinvoke_back, LocalSym_t847E2468DA6B602B494350C1C161B6E9866E76B7_marshal_pinvoke_cleanup, NULL, NULL, &LocalSym_t847E2468DA6B602B494350C1C161B6E9866E76B7_0_0_0 } /* Microsoft.Cci.Pdb.LocalSym */,
	{ NULL, LocalVariableEntry_t10B47092DAC98B0E32B61E36E568C2C2FE2D1012_marshal_pinvoke, LocalVariableEntry_t10B47092DAC98B0E32B61E36E568C2C2FE2D1012_marshal_pinvoke_back, LocalVariableEntry_t10B47092DAC98B0E32B61E36E568C2C2FE2D1012_marshal_pinvoke_cleanup, NULL, NULL, &LocalVariableEntry_t10B47092DAC98B0E32B61E36E568C2C2FE2D1012_0_0_0 } /* ILRuntime.Mono.CompilerServices.SymbolWriter.LocalVariableEntry */,
	{ NULL, LocalVariableInfo_tFEE59A3613A442977805D456B016C3592CE60B62_marshal_pinvoke, LocalVariableInfo_tFEE59A3613A442977805D456B016C3592CE60B62_marshal_pinvoke_back, LocalVariableInfo_tFEE59A3613A442977805D456B016C3592CE60B62_marshal_pinvoke_cleanup, NULL, NULL, &LocalVariableInfo_tFEE59A3613A442977805D456B016C3592CE60B62_0_0_0 } /* System.Reflection.LocalVariableInfo */,
	{ NULL, LockHolder_t759094B031976CAB1D40EEA607217A40DB7A0A59_marshal_pinvoke, LockHolder_t759094B031976CAB1D40EEA607217A40DB7A0A59_marshal_pinvoke_back, LockHolder_t759094B031976CAB1D40EEA607217A40DB7A0A59_marshal_pinvoke_cleanup, NULL, NULL, &LockHolder_t759094B031976CAB1D40EEA607217A40DB7A0A59_0_0_0 } /* System.Threading.LockHolder */,
	{ NULL, ManProcSym_t7224C447842CAD42B7EAB9E3BEB5C9C5779E58E2_marshal_pinvoke, ManProcSym_t7224C447842CAD42B7EAB9E3BEB5C9C5779E58E2_marshal_pinvoke_back, ManProcSym_t7224C447842CAD42B7EAB9E3BEB5C9C5779E58E2_marshal_pinvoke_cleanup, NULL, NULL, &ManProcSym_t7224C447842CAD42B7EAB9E3BEB5C9C5779E58E2_0_0_0 } /* Microsoft.Cci.Pdb.ManProcSym */,
	{ NULL, ManProcSymMips_t640FAD48B684984AC9748DB8F0BAAB36FE31B9C6_marshal_pinvoke, ManProcSymMips_t640FAD48B684984AC9748DB8F0BAAB36FE31B9C6_marshal_pinvoke_back, ManProcSymMips_t640FAD48B684984AC9748DB8F0BAAB36FE31B9C6_marshal_pinvoke_cleanup, NULL, NULL, &ManProcSymMips_t640FAD48B684984AC9748DB8F0BAAB36FE31B9C6_0_0_0 } /* Microsoft.Cci.Pdb.ManProcSymMips */,
	{ NULL, ManyRegSym_tF3396F04B8DD7C47F9A827C23779575134CDF961_marshal_pinvoke, ManyRegSym_tF3396F04B8DD7C47F9A827C23779575134CDF961_marshal_pinvoke_back, ManyRegSym_tF3396F04B8DD7C47F9A827C23779575134CDF961_marshal_pinvoke_cleanup, NULL, NULL, &ManyRegSym_tF3396F04B8DD7C47F9A827C23779575134CDF961_0_0_0 } /* Microsoft.Cci.Pdb.ManyRegSym */,
	{ NULL, ManyRegSym2_t6F16E5E0B19094D0DA950BEFD44950A9B980AFCC_marshal_pinvoke, ManyRegSym2_t6F16E5E0B19094D0DA950BEFD44950A9B980AFCC_marshal_pinvoke_back, ManyRegSym2_t6F16E5E0B19094D0DA950BEFD44950A9B980AFCC_marshal_pinvoke_cleanup, NULL, NULL, &ManyRegSym2_t6F16E5E0B19094D0DA950BEFD44950A9B980AFCC_0_0_0 } /* Microsoft.Cci.Pdb.ManyRegSym2 */,
	{ NULL, MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshal_pinvoke, MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshal_pinvoke_back, MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshal_pinvoke_cleanup, NULL, NULL, &MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_0_0_0 } /* System.MarshalByRefObject */,
	{ NULL, MatchResult_t466703B46AB8050EABFF2E93F9439AD049D2566A_marshal_pinvoke, MatchResult_t466703B46AB8050EABFF2E93F9439AD049D2566A_marshal_pinvoke_back, MatchResult_t466703B46AB8050EABFF2E93F9439AD049D2566A_marshal_pinvoke_cleanup, NULL, NULL, &MatchResult_t466703B46AB8050EABFF2E93F9439AD049D2566A_0_0_0 } /* UnityEngine.UIElements.StyleSheets.MatchResult */,
	{ NULL, MatchResultInfo_t2D42F957A6C5CBA42159437BECB361DA59B66697_marshal_pinvoke, MatchResultInfo_t2D42F957A6C5CBA42159437BECB361DA59B66697_marshal_pinvoke_back, MatchResultInfo_t2D42F957A6C5CBA42159437BECB361DA59B66697_marshal_pinvoke_cleanup, NULL, NULL, &MatchResultInfo_t2D42F957A6C5CBA42159437BECB361DA59B66697_0_0_0 } /* UnityEngine.UIElements.StyleSheets.MatchResultInfo */,
	{ NULL, MaterialReference_t86DB0799D5C82869D4FF0A4F59624AED6910FD26_marshal_pinvoke, MaterialReference_t86DB0799D5C82869D4FF0A4F59624AED6910FD26_marshal_pinvoke_back, MaterialReference_t86DB0799D5C82869D4FF0A4F59624AED6910FD26_marshal_pinvoke_cleanup, NULL, NULL, &MaterialReference_t86DB0799D5C82869D4FF0A4F59624AED6910FD26_0_0_0 } /* UnityEngine.TextCore.Text.MaterialReference */,
	{ NULL, MemberRelationship_t5A48212AE16D1C0795F070FD38F817F28218CB24_marshal_pinvoke, MemberRelationship_t5A48212AE16D1C0795F070FD38F817F28218CB24_marshal_pinvoke_back, MemberRelationship_t5A48212AE16D1C0795F070FD38F817F28218CB24_marshal_pinvoke_cleanup, NULL, NULL, &MemberRelationship_t5A48212AE16D1C0795F070FD38F817F28218CB24_0_0_0 } /* System.ComponentModel.Design.Serialization.MemberRelationship */,
	{ NULL, MemoryHandle_t505785861D4FF84F850A3FF775BE6AE1833D2AFD_marshal_pinvoke, MemoryHandle_t505785861D4FF84F850A3FF775BE6AE1833D2AFD_marshal_pinvoke_back, MemoryHandle_t505785861D4FF84F850A3FF775BE6AE1833D2AFD_marshal_pinvoke_cleanup, NULL, NULL, &MemoryHandle_t505785861D4FF84F850A3FF775BE6AE1833D2AFD_0_0_0 } /* System.Buffers.MemoryHandle */,
	{ NULL, MeshGenerationResult_tD5A6D639B2CF1A3F855AFB41861DEC48DC0D3A9C_marshal_pinvoke, MeshGenerationResult_tD5A6D639B2CF1A3F855AFB41861DEC48DC0D3A9C_marshal_pinvoke_back, MeshGenerationResult_tD5A6D639B2CF1A3F855AFB41861DEC48DC0D3A9C_marshal_pinvoke_cleanup, NULL, NULL, &MeshGenerationResult_tD5A6D639B2CF1A3F855AFB41861DEC48DC0D3A9C_0_0_0 } /* UnityEngine.XR.MeshGenerationResult */,
	{ NULL, MeshInfo_tE55C4A8846CC2C399CCC3FE989476D987B86AB2F_marshal_pinvoke, MeshInfo_tE55C4A8846CC2C399CCC3FE989476D987B86AB2F_marshal_pinvoke_back, MeshInfo_tE55C4A8846CC2C399CCC3FE989476D987B86AB2F_marshal_pinvoke_cleanup, NULL, NULL, &MeshInfo_tE55C4A8846CC2C399CCC3FE989476D987B86AB2F_0_0_0 } /* UnityEngine.TextCore.Text.MeshInfo */,
	{ NULL, Module_tABB9217F7F2BA3E0F4277D03C2B234A7313BB8D0_marshal_pinvoke, Module_tABB9217F7F2BA3E0F4277D03C2B234A7313BB8D0_marshal_pinvoke_back, Module_tABB9217F7F2BA3E0F4277D03C2B234A7313BB8D0_marshal_pinvoke_cleanup, NULL, NULL, &Module_tABB9217F7F2BA3E0F4277D03C2B234A7313BB8D0_0_0_0 } /* System.Reflection.Module */,
	{ NULL, NULL, NULL, NULL, CreateComCallableWrapperFor_ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8, NULL, &ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8_0_0_0 } /* ILRuntime.Mono.Cecil.Pdb.ModuleMetadata */,
	{ NULL, MonoAsyncCall_t4CB32CAF9A2C648A4A35E0D921CE0A886B5D1A37_marshal_pinvoke, MonoAsyncCall_t4CB32CAF9A2C648A4A35E0D921CE0A886B5D1A37_marshal_pinvoke_back, MonoAsyncCall_t4CB32CAF9A2C648A4A35E0D921CE0A886B5D1A37_marshal_pinvoke_cleanup, NULL, NULL, &MonoAsyncCall_t4CB32CAF9A2C648A4A35E0D921CE0A886B5D1A37_0_0_0 } /* System.MonoAsyncCall */,
	{ DelegatePInvokeWrapper_MonoBtlsSelectCallback_t94D7F9E6194E0CC0F6D20A02709C3991261BEFAE, NULL, NULL, NULL, NULL, NULL, &MonoBtlsSelectCallback_t94D7F9E6194E0CC0F6D20A02709C3991261BEFAE_0_0_0 } /* Mono.Btls.MonoBtlsSelectCallback */,
	{ DelegatePInvokeWrapper_MonoBtlsServerNameCallback_t157678673B6A4D619EE32B5F453ECACF3BE430EA, NULL, NULL, NULL, NULL, NULL, &MonoBtlsServerNameCallback_t157678673B6A4D619EE32B5F453ECACF3BE430EA_0_0_0 } /* Mono.Btls.MonoBtlsServerNameCallback */,
	{ NULL, MonoEventInfo_tFC31A64CF7C2FC93D54A539434B3C403FC924777_marshal_pinvoke, MonoEventInfo_tFC31A64CF7C2FC93D54A539434B3C403FC924777_marshal_pinvoke_back, MonoEventInfo_tFC31A64CF7C2FC93D54A539434B3C403FC924777_marshal_pinvoke_cleanup, NULL, NULL, &MonoEventInfo_tFC31A64CF7C2FC93D54A539434B3C403FC924777_0_0_0 } /* System.Reflection.MonoEventInfo */,
	{ NULL, MonoMethodInfo_t1E614E57E686DDBD9D853F45CDFD61E1F9206F61_marshal_pinvoke, MonoMethodInfo_t1E614E57E686DDBD9D853F45CDFD61E1F9206F61_marshal_pinvoke_back, MonoMethodInfo_t1E614E57E686DDBD9D853F45CDFD61E1F9206F61_marshal_pinvoke_cleanup, NULL, NULL, &MonoMethodInfo_t1E614E57E686DDBD9D853F45CDFD61E1F9206F61_0_0_0 } /* System.Reflection.MonoMethodInfo */,
	{ NULL, MonoMethodMessage_t0A062C5351332ED078EDDF6FA38A87B0A7B5A601_marshal_pinvoke, MonoMethodMessage_t0A062C5351332ED078EDDF6FA38A87B0A7B5A601_marshal_pinvoke_back, MonoMethodMessage_t0A062C5351332ED078EDDF6FA38A87B0A7B5A601_marshal_pinvoke_cleanup, NULL, NULL, &MonoMethodMessage_t0A062C5351332ED078EDDF6FA38A87B0A7B5A601_0_0_0 } /* System.Runtime.Remoting.Messaging.MonoMethodMessage */,
	{ NULL, MonoPropertyInfo_t8022292639E946C5DEE573BC1C902DB8D7290A1C_marshal_pinvoke, MonoPropertyInfo_t8022292639E946C5DEE573BC1C902DB8D7290A1C_marshal_pinvoke_back, MonoPropertyInfo_t8022292639E946C5DEE573BC1C902DB8D7290A1C_marshal_pinvoke_cleanup, NULL, NULL, &MonoPropertyInfo_t8022292639E946C5DEE573BC1C902DB8D7290A1C_0_0_0 } /* System.Reflection.MonoPropertyInfo */,
	{ NULL, MonoTypeInfo_t90D5999A69AC524474FDEAC50F55B6CE868AB501_marshal_pinvoke, MonoTypeInfo_t90D5999A69AC524474FDEAC50F55B6CE868AB501_marshal_pinvoke_back, MonoTypeInfo_t90D5999A69AC524474FDEAC50F55B6CE868AB501_marshal_pinvoke_cleanup, NULL, NULL, &MonoTypeInfo_t90D5999A69AC524474FDEAC50F55B6CE868AB501_0_0_0 } /* System.MonoTypeInfo */,
	{ NULL, MovedFromAttributeData_t03CC6A15A3D30385AF3C6E10FA273DE13D874A2F_marshal_pinvoke, MovedFromAttributeData_t03CC6A15A3D30385AF3C6E10FA273DE13D874A2F_marshal_pinvoke_back, MovedFromAttributeData_t03CC6A15A3D30385AF3C6E10FA273DE13D874A2F_marshal_pinvoke_cleanup, NULL, NULL, &MovedFromAttributeData_t03CC6A15A3D30385AF3C6E10FA273DE13D874A2F_0_0_0 } /* UnityEngine.Scripting.APIUpdating.MovedFromAttributeData */,
	{ NULL, MulticastDelegate_t_marshal_pinvoke, MulticastDelegate_t_marshal_pinvoke_back, MulticastDelegate_t_marshal_pinvoke_cleanup, NULL, NULL, &MulticastDelegate_t_0_0_0 } /* System.MulticastDelegate */,
	{ NULL, NamespaceEntry_tE80696B724578C6233256F392F07517788C6FE5D_marshal_pinvoke, NamespaceEntry_tE80696B724578C6233256F392F07517788C6FE5D_marshal_pinvoke_back, NamespaceEntry_tE80696B724578C6233256F392F07517788C6FE5D_marshal_pinvoke_cleanup, NULL, NULL, &NamespaceEntry_tE80696B724578C6233256F392F07517788C6FE5D_0_0_0 } /* ILRuntime.Mono.CompilerServices.SymbolWriter.NamespaceEntry */,
	{ DelegatePInvokeWrapper_NativeUpdateCallback_tC5CA5A9117B79251968A4DA3758552EFE1D37495, NULL, NULL, NULL, NULL, NULL, &NativeUpdateCallback_tC5CA5A9117B79251968A4DA3758552EFE1D37495_0_0_0 } /* UnityEngineInternal.Input.NativeUpdateCallback */,
	{ NULL, Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshal_pinvoke, Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshal_pinvoke_back, Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshal_pinvoke_cleanup, NULL, NULL, &Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_0_0_0 } /* UnityEngine.UI.Navigation */,
	{ NULL, OSPlatform_t8D6BF4B4756716D5B2694BCA813A49AE0227B9F9_marshal_pinvoke, OSPlatform_t8D6BF4B4756716D5B2694BCA813A49AE0227B9F9_marshal_pinvoke_back, OSPlatform_t8D6BF4B4756716D5B2694BCA813A49AE0227B9F9_marshal_pinvoke_cleanup, NULL, NULL, &OSPlatform_t8D6BF4B4756716D5B2694BCA813A49AE0227B9F9_0_0_0 } /* System.Runtime.InteropServices.OSPlatform */,
	{ NULL, ObjNameSym_tCB67FC55B68AB653C007CD8413E3429AF7E7B388_marshal_pinvoke, ObjNameSym_tCB67FC55B68AB653C007CD8413E3429AF7E7B388_marshal_pinvoke_back, ObjNameSym_tCB67FC55B68AB653C007CD8413E3429AF7E7B388_marshal_pinvoke_cleanup, NULL, NULL, &ObjNameSym_tCB67FC55B68AB653C007CD8413E3429AF7E7B388_0_0_0 } /* Microsoft.Cci.Pdb.ObjNameSym */,
	{ NULL, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshal_pinvoke, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshal_pinvoke_back, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshal_pinvoke_cleanup, NULL, NULL, &Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0 } /* UnityEngine.Object */,
	{ NULL, ObjectMetadata_t09E25DC9B1567F5C1D828E6D3C3AEF17515BDD9D_marshal_pinvoke, ObjectMetadata_t09E25DC9B1567F5C1D828E6D3C3AEF17515BDD9D_marshal_pinvoke_back, ObjectMetadata_t09E25DC9B1567F5C1D828E6D3C3AEF17515BDD9D_marshal_pinvoke_cleanup, NULL, NULL, &ObjectMetadata_t09E25DC9B1567F5C1D828E6D3C3AEF17515BDD9D_0_0_0 } /* LitJson.ObjectMetadata */,
	{ NULL, OemSymbol_tEBB8CB732907FE3FCF10DE9F12BF9544C3F6B9D4_marshal_pinvoke, OemSymbol_tEBB8CB732907FE3FCF10DE9F12BF9544C3F6B9D4_marshal_pinvoke_back, OemSymbol_tEBB8CB732907FE3FCF10DE9F12BF9544C3F6B9D4_marshal_pinvoke_cleanup, NULL, NULL, &OemSymbol_tEBB8CB732907FE3FCF10DE9F12BF9544C3F6B9D4_0_0_0 } /* Microsoft.Cci.Pdb.OemSymbol */,
	{ NULL, Packet_tAEF2477DE5CBC8C9D1DF5C0B2080F3951C06F77B_marshal_pinvoke, Packet_tAEF2477DE5CBC8C9D1DF5C0B2080F3951C06F77B_marshal_pinvoke_back, Packet_tAEF2477DE5CBC8C9D1DF5C0B2080F3951C06F77B_marshal_pinvoke_cleanup, NULL, NULL, &Packet_tAEF2477DE5CBC8C9D1DF5C0B2080F3951C06F77B_0_0_0 } /* ET.Packet */,
	{ NULL, PanelClearSettings_tA3D8EE9A4864781CE3E5FED5225C6FB37ED66EE7_marshal_pinvoke, PanelClearSettings_tA3D8EE9A4864781CE3E5FED5225C6FB37ED66EE7_marshal_pinvoke_back, PanelClearSettings_tA3D8EE9A4864781CE3E5FED5225C6FB37ED66EE7_marshal_pinvoke_cleanup, NULL, NULL, &PanelClearSettings_tA3D8EE9A4864781CE3E5FED5225C6FB37ED66EE7_0_0_0 } /* UnityEngine.UIElements.PanelClearSettings */,
	{ NULL, ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F_marshal_pinvoke, ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F_marshal_pinvoke_back, ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F_marshal_pinvoke_cleanup, NULL, NULL, &ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F_0_0_0 } /* System.Reflection.ParameterInfo */,
	{ NULL, ParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510_marshal_pinvoke, ParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510_marshal_pinvoke_back, ParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510_marshal_pinvoke_cleanup, NULL, NULL, &ParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510_0_0_0 } /* System.Reflection.ParameterModifier */,
	{ NULL, ParamsArray_t2AE19F401652F4CBAB7A3CD4B0F195679FC16F1C_marshal_pinvoke, ParamsArray_t2AE19F401652F4CBAB7A3CD4B0F195679FC16F1C_marshal_pinvoke_back, ParamsArray_t2AE19F401652F4CBAB7A3CD4B0F195679FC16F1C_marshal_pinvoke_cleanup, NULL, NULL, &ParamsArray_t2AE19F401652F4CBAB7A3CD4B0F195679FC16F1C_0_0_0 } /* System.ParamsArray */,
	{ NULL, ParsingInfo_t1717753431089DD2385D3739360CF85BDB410F89_marshal_pinvoke, ParsingInfo_t1717753431089DD2385D3739360CF85BDB410F89_marshal_pinvoke_back, ParsingInfo_t1717753431089DD2385D3739360CF85BDB410F89_marshal_pinvoke_cleanup, NULL, NULL, &ParsingInfo_t1717753431089DD2385D3739360CF85BDB410F89_0_0_0 } /* System.ParsingInfo */,
	{ DelegatePInvokeWrapper_PerformDynamicRes_t0949EAA6943CF225A1F61B233E13A440C1C09B47, NULL, NULL, NULL, NULL, NULL, &PerformDynamicRes_t0949EAA6943CF225A1F61B233E13A440C1C09B47_0_0_0 } /* UnityEngine.Rendering.PerformDynamicRes */,
	{ NULL, NULL, NULL, NULL, NULL, &PerformanceCounterManager_t0BF17759AF043AB149940CFB1D6A1A90EE791E6F::CLSID, &PerformanceCounterManager_t0BF17759AF043AB149940CFB1D6A1A90EE791E6F_0_0_0 } /* System.Diagnostics.PerformanceCounterManager */,
	{ NULL, PhotoCapture_t268971E77CE9FFE83CCCE1F07F8CFE3013A461ED_marshal_pinvoke, PhotoCapture_t268971E77CE9FFE83CCCE1F07F8CFE3013A461ED_marshal_pinvoke_back, PhotoCapture_t268971E77CE9FFE83CCCE1F07F8CFE3013A461ED_marshal_pinvoke_cleanup, NULL, NULL, &PhotoCapture_t268971E77CE9FFE83CCCE1F07F8CFE3013A461ED_0_0_0 } /* UnityEngine.Windows.WebCam.PhotoCapture */,
	{ NULL, PhraseRecognizedEventArgs_t91AA21891352136A6CA60FCF60FCA372D07B18D8_marshal_pinvoke, PhraseRecognizedEventArgs_t91AA21891352136A6CA60FCF60FCA372D07B18D8_marshal_pinvoke_back, PhraseRecognizedEventArgs_t91AA21891352136A6CA60FCF60FCA372D07B18D8_marshal_pinvoke_cleanup, NULL, NULL, &PhraseRecognizedEventArgs_t91AA21891352136A6CA60FCF60FCA372D07B18D8_0_0_0 } /* UnityEngine.Windows.Speech.PhraseRecognizedEventArgs */,
	{ NULL, PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_marshal_pinvoke, PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_marshal_pinvoke_back, PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_marshal_pinvoke_cleanup, NULL, NULL, &PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_0_0_0 } /* UnityEngine.Playables.PlayableBinding */,
	{ NULL, PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshal_pinvoke, PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshal_pinvoke_back, PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshal_pinvoke_cleanup, NULL, NULL, &PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_0_0_0 } /* UnityEngine.LowLevel.PlayerLoopSystem */,
	{ NULL, PlayerLoopSystemInternal_tA4BFB5E55A895153CF14333B866219B77AAF1BC5_marshal_pinvoke, PlayerLoopSystemInternal_tA4BFB5E55A895153CF14333B866219B77AAF1BC5_marshal_pinvoke_back, PlayerLoopSystemInternal_tA4BFB5E55A895153CF14333B866219B77AAF1BC5_marshal_pinvoke_cleanup, NULL, NULL, &PlayerLoopSystemInternal_tA4BFB5E55A895153CF14333B866219B77AAF1BC5_0_0_0 } /* UnityEngine.LowLevel.PlayerLoopSystemInternal */,
	{ NULL, PointLight_tD01A1428DC1015D98A527136034187F732433EA7_marshal_pinvoke, PointLight_tD01A1428DC1015D98A527136034187F732433EA7_marshal_pinvoke_back, PointLight_tD01A1428DC1015D98A527136034187F732433EA7_marshal_pinvoke_cleanup, NULL, NULL, &PointLight_tD01A1428DC1015D98A527136034187F732433EA7_0_0_0 } /* UnityEngine.Experimental.GlobalIllumination.PointLight */,
	{ NULL, PostProcessPasses_tAED11E629F8830B180E0759F4A988839F786D3E9_marshal_pinvoke, PostProcessPasses_tAED11E629F8830B180E0759F4A988839F786D3E9_marshal_pinvoke_back, PostProcessPasses_tAED11E629F8830B180E0759F4A988839F786D3E9_marshal_pinvoke_cleanup, NULL, NULL, &PostProcessPasses_tAED11E629F8830B180E0759F4A988839F786D3E9_0_0_0 } /* UnityEngine.Rendering.Universal.PostProcessPasses */,
	{ NULL, PostProcessingData_tFA75BF22951C600258B2707AF7A113E4EDA49BD4_marshal_pinvoke, PostProcessingData_tFA75BF22951C600258B2707AF7A113E4EDA49BD4_marshal_pinvoke_back, PostProcessingData_tFA75BF22951C600258B2707AF7A113E4EDA49BD4_marshal_pinvoke_cleanup, NULL, NULL, &PostProcessingData_tFA75BF22951C600258B2707AF7A113E4EDA49BD4_0_0_0 } /* UnityEngine.Rendering.Universal.PostProcessingData */,
	{ NULL, PrewarmInfo_t8671935B3CCB757CBF141F2B73023B4AEDDB1CB3_marshal_pinvoke, PrewarmInfo_t8671935B3CCB757CBF141F2B73023B4AEDDB1CB3_marshal_pinvoke_back, PrewarmInfo_t8671935B3CCB757CBF141F2B73023B4AEDDB1CB3_marshal_pinvoke_cleanup, NULL, NULL, &PrewarmInfo_t8671935B3CCB757CBF141F2B73023B4AEDDB1CB3_0_0_0 } /* ILRuntime.Runtime.Enviorment.PrewarmInfo */,
	{ NULL, ProbeDilationSettings_tF64C04AC1BD358DC8B8CA9B53F4CD399A72E271A_marshal_pinvoke, ProbeDilationSettings_tF64C04AC1BD358DC8B8CA9B53F4CD399A72E271A_marshal_pinvoke_back, ProbeDilationSettings_tF64C04AC1BD358DC8B8CA9B53F4CD399A72E271A_marshal_pinvoke_cleanup, NULL, NULL, &ProbeDilationSettings_tF64C04AC1BD358DC8B8CA9B53F4CD399A72E271A_0_0_0 } /* UnityEngine.Experimental.Rendering.ProbeDilationSettings */,
	{ NULL, ProbeVolumeBakingProcessSettings_t81175AA0740218A8C5D4A4A9F4C55312678C0B4C_marshal_pinvoke, ProbeVolumeBakingProcessSettings_t81175AA0740218A8C5D4A4A9F4C55312678C0B4C_marshal_pinvoke_back, ProbeVolumeBakingProcessSettings_t81175AA0740218A8C5D4A4A9F4C55312678C0B4C_marshal_pinvoke_cleanup, NULL, NULL, &ProbeVolumeBakingProcessSettings_t81175AA0740218A8C5D4A4A9F4C55312678C0B4C_0_0_0 } /* UnityEngine.Experimental.Rendering.ProbeVolumeBakingProcessSettings */,
	{ NULL, ProbeVolumeShadingParameters_tAB09DAAB534774AA4B7536C3821F3B3C7BD28F9B_marshal_pinvoke, ProbeVolumeShadingParameters_tAB09DAAB534774AA4B7536C3821F3B3C7BD28F9B_marshal_pinvoke_back, ProbeVolumeShadingParameters_tAB09DAAB534774AA4B7536C3821F3B3C7BD28F9B_marshal_pinvoke_cleanup, NULL, NULL, &ProbeVolumeShadingParameters_tAB09DAAB534774AA4B7536C3821F3B3C7BD28F9B_0_0_0 } /* UnityEngine.Experimental.Rendering.ProbeVolumeShadingParameters */,
	{ NULL, ProbeVolumeSystemParameters_t62F1334D848F83B2D91F42C44CB10CF8E664F843_marshal_pinvoke, ProbeVolumeSystemParameters_t62F1334D848F83B2D91F42C44CB10CF8E664F843_marshal_pinvoke_back, ProbeVolumeSystemParameters_t62F1334D848F83B2D91F42C44CB10CF8E664F843_marshal_pinvoke_cleanup, NULL, NULL, &ProbeVolumeSystemParameters_t62F1334D848F83B2D91F42C44CB10CF8E664F843_0_0_0 } /* UnityEngine.Experimental.Rendering.ProbeVolumeSystemParameters */,
	{ NULL, ProcSym32_t18A67495A57643D6922F6AFE5BD32752661260C2_marshal_pinvoke, ProcSym32_t18A67495A57643D6922F6AFE5BD32752661260C2_marshal_pinvoke_back, ProcSym32_t18A67495A57643D6922F6AFE5BD32752661260C2_marshal_pinvoke_cleanup, NULL, NULL, &ProcSym32_t18A67495A57643D6922F6AFE5BD32752661260C2_0_0_0 } /* Microsoft.Cci.Pdb.ProcSym32 */,
	{ NULL, ProcSymIa64_t99F984029F1485479DE0E4304AD8B33BF7461216_marshal_pinvoke, ProcSymIa64_t99F984029F1485479DE0E4304AD8B33BF7461216_marshal_pinvoke_back, ProcSymIa64_t99F984029F1485479DE0E4304AD8B33BF7461216_marshal_pinvoke_cleanup, NULL, NULL, &ProcSymIa64_t99F984029F1485479DE0E4304AD8B33BF7461216_0_0_0 } /* Microsoft.Cci.Pdb.ProcSymIa64 */,
	{ NULL, ProcSymMips_t553480EFFF0B41DF2FD86231809817991146292C_marshal_pinvoke, ProcSymMips_t553480EFFF0B41DF2FD86231809817991146292C_marshal_pinvoke_back, ProcSymMips_t553480EFFF0B41DF2FD86231809817991146292C_marshal_pinvoke_cleanup, NULL, NULL, &ProcSymMips_t553480EFFF0B41DF2FD86231809817991146292C_0_0_0 } /* Microsoft.Cci.Pdb.ProcSymMips */,
	{ NULL, ProcessStartInfo_t03E06D8098D3DC01CDACE23EE2D308BDA8E41D3C_marshal_pinvoke, ProcessStartInfo_t03E06D8098D3DC01CDACE23EE2D308BDA8E41D3C_marshal_pinvoke_back, ProcessStartInfo_t03E06D8098D3DC01CDACE23EE2D308BDA8E41D3C_marshal_pinvoke_cleanup, NULL, NULL, &ProcessStartInfo_t03E06D8098D3DC01CDACE23EE2D308BDA8E41D3C_0_0_0 } /* System.Diagnostics.ProcessStartInfo */,
	{ NULL, ProfilingSample_t50A4DFD8DA524681EE1BF64D3A518E6BA633657A_marshal_pinvoke, ProfilingSample_t50A4DFD8DA524681EE1BF64D3A518E6BA633657A_marshal_pinvoke_back, ProfilingSample_t50A4DFD8DA524681EE1BF64D3A518E6BA633657A_marshal_pinvoke_cleanup, NULL, NULL, &ProfilingSample_t50A4DFD8DA524681EE1BF64D3A518E6BA633657A_0_0_0 } /* UnityEngine.Rendering.ProfilingSample */,
	{ NULL, PropertyMetadata_tE482F2C7DE71C766DB529D68526C1CFE43307224_marshal_pinvoke, PropertyMetadata_tE482F2C7DE71C766DB529D68526C1CFE43307224_marshal_pinvoke_back, PropertyMetadata_tE482F2C7DE71C766DB529D68526C1CFE43307224_marshal_pinvoke_cleanup, NULL, NULL, &PropertyMetadata_tE482F2C7DE71C766DB529D68526C1CFE43307224_0_0_0 } /* LitJson.PropertyMetadata */,
	{ NULL, PubSym32_t21DBCA12D52E3AA2437513D1914DBA886AEFF786_marshal_pinvoke, PubSym32_t21DBCA12D52E3AA2437513D1914DBA886AEFF786_marshal_pinvoke_back, PubSym32_t21DBCA12D52E3AA2437513D1914DBA886AEFF786_marshal_pinvoke_cleanup, NULL, NULL, &PubSym32_t21DBCA12D52E3AA2437513D1914DBA886AEFF786_0_0_0 } /* Microsoft.Cci.Pdb.PubSym32 */,
	{ NULL, RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF_marshal_pinvoke, RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF_marshal_pinvoke_back, RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF_marshal_pinvoke_cleanup, NULL, NULL, &RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF_0_0_0 } /* System.Security.Cryptography.RSAParameters */,
	{ NULL, RareData_t2F466D955456C8E8898324C284948FCB0F4D6F26_marshal_pinvoke, RareData_t2F466D955456C8E8898324C284948FCB0F4D6F26_marshal_pinvoke_back, RareData_t2F466D955456C8E8898324C284948FCB0F4D6F26_marshal_pinvoke_cleanup, NULL, NULL, &RareData_t2F466D955456C8E8898324C284948FCB0F4D6F26_0_0_0 } /* UnityEngine.UIElements.RareData */,
	{ NULL, RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshal_pinvoke, RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshal_pinvoke_back, RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshal_pinvoke_cleanup, NULL, NULL, &RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_0_0_0 } /* UnityEngine.EventSystems.RaycastResult */,
	{ NULL, RealProxy_t2D3667E71799D4A142B9E0EDED7FD858277FC9AB_marshal_pinvoke, RealProxy_t2D3667E71799D4A142B9E0EDED7FD858277FC9AB_marshal_pinvoke_back, RealProxy_t2D3667E71799D4A142B9E0EDED7FD858277FC9AB_marshal_pinvoke_cleanup, NULL, NULL, &RealProxy_t2D3667E71799D4A142B9E0EDED7FD858277FC9AB_0_0_0 } /* System.Runtime.Remoting.Proxies.RealProxy */,
	{ NULL, RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshal_pinvoke, RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshal_pinvoke_back, RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshal_pinvoke_cleanup, NULL, NULL, &RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_0_0_0 } /* UnityEngine.RectOffset */,
	{ NULL, RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698_marshal_pinvoke, RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698_marshal_pinvoke_back, RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698_marshal_pinvoke_cleanup, NULL, NULL, &RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698_0_0_0 } /* UnityEngine.Experimental.GlobalIllumination.RectangleLight */,
	{ NULL, RefSym2_tAE664AA02964D542698DB8575ED69CBF83CD6908_marshal_pinvoke, RefSym2_tAE664AA02964D542698DB8575ED69CBF83CD6908_marshal_pinvoke_back, RefSym2_tAE664AA02964D542698DB8575ED69CBF83CD6908_marshal_pinvoke_cleanup, NULL, NULL, &RefSym2_tAE664AA02964D542698DB8575ED69CBF83CD6908_0_0_0 } /* Microsoft.Cci.Pdb.RefSym2 */,
	{ NULL, RegRel32_tFD066ADE1140EB16469D06DFFBC12A1DB192A0C1_marshal_pinvoke, RegRel32_tFD066ADE1140EB16469D06DFFBC12A1DB192A0C1_marshal_pinvoke_back, RegRel32_tFD066ADE1140EB16469D06DFFBC12A1DB192A0C1_marshal_pinvoke_cleanup, NULL, NULL, &RegRel32_tFD066ADE1140EB16469D06DFFBC12A1DB192A0C1_0_0_0 } /* Microsoft.Cci.Pdb.RegRel32 */,
	{ NULL, RegSym_tFE9CB14DCB3C3757FDCA3906C694A294E51B53C0_marshal_pinvoke, RegSym_tFE9CB14DCB3C3757FDCA3906C694A294E51B53C0_marshal_pinvoke_back, RegSym_tFE9CB14DCB3C3757FDCA3906C694A294E51B53C0_marshal_pinvoke_cleanup, NULL, NULL, &RegSym_tFE9CB14DCB3C3757FDCA3906C694A294E51B53C0_0_0_0 } /* Microsoft.Cci.Pdb.RegSym */,
	{ NULL, RegexFCD_t696EC897BC155EF1EC7AEC0D97E2CE7717B45ADD_marshal_pinvoke, RegexFCD_t696EC897BC155EF1EC7AEC0D97E2CE7717B45ADD_marshal_pinvoke_back, RegexFCD_t696EC897BC155EF1EC7AEC0D97E2CE7717B45ADD_marshal_pinvoke_cleanup, NULL, NULL, &RegexFCD_t696EC897BC155EF1EC7AEC0D97E2CE7717B45ADD_0_0_0 } /* System.Text.RegularExpressions.RegexFCD */,
	{ NULL, RegexPrefix_tA54724081F84969072F7826C9CFA861073AD0044_marshal_pinvoke, RegexPrefix_tA54724081F84969072F7826C9CFA861073AD0044_marshal_pinvoke_back, RegexPrefix_tA54724081F84969072F7826C9CFA861073AD0044_marshal_pinvoke_cleanup, NULL, NULL, &RegexPrefix_tA54724081F84969072F7826C9CFA861073AD0044_0_0_0 } /* System.Text.RegularExpressions.RegexPrefix */,
	{ NULL, RegexWriter_t618A9F9480E99C224DE6D93EEFED48EF0CEFAB12_marshal_pinvoke, RegexWriter_t618A9F9480E99C224DE6D93EEFED48EF0CEFAB12_marshal_pinvoke_back, RegexWriter_t618A9F9480E99C224DE6D93EEFED48EF0CEFAB12_marshal_pinvoke_cleanup, NULL, NULL, &RegexWriter_t618A9F9480E99C224DE6D93EEFED48EF0CEFAB12_0_0_0 } /* System.Text.RegularExpressions.RegexWriter */,
	{ NULL, RegionInfo_tB80D4B7042096ED4166921F58B93FD1DB5555836_marshal_pinvoke, RegionInfo_tB80D4B7042096ED4166921F58B93FD1DB5555836_marshal_pinvoke_back, RegionInfo_tB80D4B7042096ED4166921F58B93FD1DB5555836_marshal_pinvoke_cleanup, NULL, NULL, &RegionInfo_tB80D4B7042096ED4166921F58B93FD1DB5555836_0_0_0 } /* System.Globalization.RegionInfo */,
	{ NULL, RegisterFrameInfo_tFDA30CC76C82A5CD0EF462300736B8AB8D561F99_marshal_pinvoke, RegisterFrameInfo_tFDA30CC76C82A5CD0EF462300736B8AB8D561F99_marshal_pinvoke_back, RegisterFrameInfo_tFDA30CC76C82A5CD0EF462300736B8AB8D561F99_marshal_pinvoke_cleanup, NULL, NULL, &RegisterFrameInfo_tFDA30CC76C82A5CD0EF462300736B8AB8D561F99_0_0_0 } /* ILRuntime.Runtime.Intepreter.RegisterFrameInfo */,
	{ NULL, RegisterVMSymbol_t7EF68FC88AA42BA7BAD5AAE74496F079F3AC4AEC_marshal_pinvoke, RegisterVMSymbol_t7EF68FC88AA42BA7BAD5AAE74496F079F3AC4AEC_marshal_pinvoke_back, RegisterVMSymbol_t7EF68FC88AA42BA7BAD5AAE74496F079F3AC4AEC_marshal_pinvoke_cleanup, NULL, NULL, &RegisterVMSymbol_t7EF68FC88AA42BA7BAD5AAE74496F079F3AC4AEC_0_0_0 } /* ILRuntime.Runtime.Intepreter.RegisterVM.RegisterVMSymbol */,
	{ NULL, RemoteConfigSettings_tC979947EE51355162B3241B9F80D95A8FD25FE52_marshal_pinvoke, RemoteConfigSettings_tC979947EE51355162B3241B9F80D95A8FD25FE52_marshal_pinvoke_back, RemoteConfigSettings_tC979947EE51355162B3241B9F80D95A8FD25FE52_marshal_pinvoke_cleanup, NULL, NULL, &RemoteConfigSettings_tC979947EE51355162B3241B9F80D95A8FD25FE52_0_0_0 } /* UnityEngine.RemoteConfigSettings */,
	{ NULL, RenderChainTextEntry_t3B07A86ED897E1859552D13B1CF046F585CF9D11_marshal_pinvoke, RenderChainTextEntry_t3B07A86ED897E1859552D13B1CF046F585CF9D11_marshal_pinvoke_back, RenderChainTextEntry_t3B07A86ED897E1859552D13B1CF046F585CF9D11_marshal_pinvoke_cleanup, NULL, NULL, &RenderChainTextEntry_t3B07A86ED897E1859552D13B1CF046F585CF9D11_0_0_0 } /* UnityEngine.UIElements.UIR.RenderChainTextEntry */,
	{ NULL, RenderChainVEData_t582DE9DA38C6B608A9A38286FCF6FA70398B5847_marshal_pinvoke, RenderChainVEData_t582DE9DA38C6B608A9A38286FCF6FA70398B5847_marshal_pinvoke_back, RenderChainVEData_t582DE9DA38C6B608A9A38286FCF6FA70398B5847_marshal_pinvoke_cleanup, NULL, NULL, &RenderChainVEData_t582DE9DA38C6B608A9A38286FCF6FA70398B5847_0_0_0 } /* UnityEngine.UIElements.UIR.RenderChainVEData */,
	{ NULL, RenderGraphBuilder_t8AEC7329276477A095C2D889D3361085DD1A1FFC_marshal_pinvoke, RenderGraphBuilder_t8AEC7329276477A095C2D889D3361085DD1A1FFC_marshal_pinvoke_back, RenderGraphBuilder_t8AEC7329276477A095C2D889D3361085DD1A1FFC_marshal_pinvoke_cleanup, NULL, NULL, &RenderGraphBuilder_t8AEC7329276477A095C2D889D3361085DD1A1FFC_0_0_0 } /* UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphBuilder */,
	{ NULL, RenderGraphExecution_t6DD852CD6BF4AB57D2D963BA7DA449A218DD0529_marshal_pinvoke, RenderGraphExecution_t6DD852CD6BF4AB57D2D963BA7DA449A218DD0529_marshal_pinvoke_back, RenderGraphExecution_t6DD852CD6BF4AB57D2D963BA7DA449A218DD0529_marshal_pinvoke_cleanup, NULL, NULL, &RenderGraphExecution_t6DD852CD6BF4AB57D2D963BA7DA449A218DD0529_0_0_0 } /* UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphExecution */,
	{ NULL, RenderGraphLogIndent_tF9C4FBEEBE5BC22C223A368FD757DB647CD5C8E5_marshal_pinvoke, RenderGraphLogIndent_tF9C4FBEEBE5BC22C223A368FD757DB647CD5C8E5_marshal_pinvoke_back, RenderGraphLogIndent_tF9C4FBEEBE5BC22C223A368FD757DB647CD5C8E5_marshal_pinvoke_cleanup, NULL, NULL, &RenderGraphLogIndent_tF9C4FBEEBE5BC22C223A368FD757DB647CD5C8E5_0_0_0 } /* UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphLogIndent */,
	{ NULL, RenderGraphParameters_t09D9F272548DFFBB836A53B48E15EA3D8FEA4BCA_marshal_pinvoke, RenderGraphParameters_t09D9F272548DFFBB836A53B48E15EA3D8FEA4BCA_marshal_pinvoke_back, RenderGraphParameters_t09D9F272548DFFBB836A53B48E15EA3D8FEA4BCA_marshal_pinvoke_cleanup, NULL, NULL, &RenderGraphParameters_t09D9F272548DFFBB836A53B48E15EA3D8FEA4BCA_0_0_0 } /* UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphParameters */,
	{ NULL, RenderGraphProfilingScope_t1FFE4E5C53237490107027CBCCA6684B111C28C0_marshal_pinvoke, RenderGraphProfilingScope_t1FFE4E5C53237490107027CBCCA6684B111C28C0_marshal_pinvoke_back, RenderGraphProfilingScope_t1FFE4E5C53237490107027CBCCA6684B111C28C0_marshal_pinvoke_cleanup, NULL, NULL, &RenderGraphProfilingScope_t1FFE4E5C53237490107027CBCCA6684B111C28C0_0_0_0 } /* UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphProfilingScope */,
	{ NULL, RendererList_t9D7C54CD5C2AB0A0D43E9FAB41D696644D904635_marshal_pinvoke, RendererList_t9D7C54CD5C2AB0A0D43E9FAB41D696644D904635_marshal_pinvoke_back, RendererList_t9D7C54CD5C2AB0A0D43E9FAB41D696644D904635_marshal_pinvoke_cleanup, NULL, NULL, &RendererList_t9D7C54CD5C2AB0A0D43E9FAB41D696644D904635_0_0_0 } /* UnityEngine.Experimental.Rendering.RendererList */,
	{ NULL, RendererListDesc_t0860DFCDC6DBDC972A14248BE1CA93161D6DFE69_marshal_pinvoke, RendererListDesc_t0860DFCDC6DBDC972A14248BE1CA93161D6DFE69_marshal_pinvoke_back, RendererListDesc_t0860DFCDC6DBDC972A14248BE1CA93161D6DFE69_marshal_pinvoke_cleanup, NULL, NULL, &RendererListDesc_t0860DFCDC6DBDC972A14248BE1CA93161D6DFE69_0_0_0 } /* UnityEngine.Experimental.Rendering.RendererListDesc */,
	{ NULL, RendererListDesc_t5C51B75B4D539F99345A077545015B8FB99FE78E_marshal_pinvoke, RendererListDesc_t5C51B75B4D539F99345A077545015B8FB99FE78E_marshal_pinvoke_back, RendererListDesc_t5C51B75B4D539F99345A077545015B8FB99FE78E_marshal_pinvoke_cleanup, NULL, NULL, &RendererListDesc_t5C51B75B4D539F99345A077545015B8FB99FE78E_0_0_0 } /* UnityEngine.Rendering.RendererUtils.RendererListDesc */,
	{ NULL, RendererListHandle_t21AFDDE69B0048546497B890088B880F8080C62D_marshal_pinvoke, RendererListHandle_t21AFDDE69B0048546497B890088B880F8080C62D_marshal_pinvoke_back, RendererListHandle_t21AFDDE69B0048546497B890088B880F8080C62D_marshal_pinvoke_cleanup, NULL, NULL, &RendererListHandle_t21AFDDE69B0048546497B890088B880F8080C62D_0_0_0 } /* UnityEngine.Experimental.Rendering.RenderGraphModule.RendererListHandle */,
	{ NULL, RendererListParams_tD7EA1A56CF9C58D8E31C464A62D1546A8B0E66DC_marshal_pinvoke, RendererListParams_tD7EA1A56CF9C58D8E31C464A62D1546A8B0E66DC_marshal_pinvoke_back, RendererListParams_tD7EA1A56CF9C58D8E31C464A62D1546A8B0E66DC_marshal_pinvoke_cleanup, NULL, NULL, &RendererListParams_tD7EA1A56CF9C58D8E31C464A62D1546A8B0E66DC_0_0_0 } /* UnityEngine.Rendering.RendererUtils.RendererListParams */,
	{ NULL, RendererListResource_t9B978DD85ADC467D7E4DB42EF603B7C49918BF49_marshal_pinvoke, RendererListResource_t9B978DD85ADC467D7E4DB42EF603B7C49918BF49_marshal_pinvoke_back, RendererListResource_t9B978DD85ADC467D7E4DB42EF603B7C49918BF49_marshal_pinvoke_cleanup, NULL, NULL, &RendererListResource_t9B978DD85ADC467D7E4DB42EF603B7C49918BF49_0_0_0 } /* UnityEngine.Experimental.Rendering.RenderGraphModule.RendererListResource */,
	{ NULL, RenderingData_tAAA01190551D6D5954314E3E1E85B58DD45EED71_marshal_pinvoke, RenderingData_tAAA01190551D6D5954314E3E1E85B58DD45EED71_marshal_pinvoke_back, RenderingData_tAAA01190551D6D5954314E3E1E85B58DD45EED71_marshal_pinvoke_cleanup, NULL, NULL, &RenderingData_tAAA01190551D6D5954314E3E1E85B58DD45EED71_0_0_0 } /* UnityEngine.Rendering.Universal.RenderingData */,
	{ NULL, ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122_marshal_pinvoke, ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122_marshal_pinvoke_back, ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122_marshal_pinvoke_cleanup, NULL, NULL, &ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122_0_0_0 } /* System.Resources.ResourceLocator */,
	{ NULL, ResourceRequest_tE6953FBA45EAAEFE866C635B9E7852044E62D868_marshal_pinvoke, ResourceRequest_tE6953FBA45EAAEFE866C635B9E7852044E62D868_marshal_pinvoke_back, ResourceRequest_tE6953FBA45EAAEFE866C635B9E7852044E62D868_marshal_pinvoke_cleanup, NULL, NULL, &ResourceRequest_tE6953FBA45EAAEFE866C635B9E7852044E62D868_0_0_0 } /* UnityEngine.ResourceRequest */,
	{ NULL, Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7_marshal_pinvoke, Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7_marshal_pinvoke_back, Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7_marshal_pinvoke_cleanup, NULL, NULL, &Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7_0_0_0 } /* UnityEngine.UIElements.Rotate */,
	{ NULL, RuleMatcher_t327CFEB02C81AA20E639DE949DCBBAB5E92FF28E_marshal_pinvoke, RuleMatcher_t327CFEB02C81AA20E639DE949DCBBAB5E92FF28E_marshal_pinvoke_back, RuleMatcher_t327CFEB02C81AA20E639DE949DCBBAB5E92FF28E_marshal_pinvoke_cleanup, NULL, NULL, &RuleMatcher_t327CFEB02C81AA20E639DE949DCBBAB5E92FF28E_0_0_0 } /* UnityEngine.UIElements.RuleMatcher */,
	{ NULL, RuntimeAssembly_tA26A4DE82E77826DFC3D58AD976BCFC6BCA918AF_marshal_pinvoke, RuntimeAssembly_tA26A4DE82E77826DFC3D58AD976BCFC6BCA918AF_marshal_pinvoke_back, RuntimeAssembly_tA26A4DE82E77826DFC3D58AD976BCFC6BCA918AF_marshal_pinvoke_cleanup, NULL, NULL, &RuntimeAssembly_tA26A4DE82E77826DFC3D58AD976BCFC6BCA918AF_0_0_0 } /* System.Reflection.RuntimeAssembly */,
	{ NULL, RuntimeModule_tF7DA9B52FC45487544703DCA49464B67CEA79633_marshal_pinvoke, RuntimeModule_tF7DA9B52FC45487544703DCA49464B67CEA79633_marshal_pinvoke_back, RuntimeModule_tF7DA9B52FC45487544703DCA49464B67CEA79633_marshal_pinvoke_cleanup, NULL, NULL, &RuntimeModule_tF7DA9B52FC45487544703DCA49464B67CEA79633_0_0_0 } /* System.Reflection.RuntimeModule */,
	{ NULL, STATDATA_t2B5067A25347A006153807EAA17839425EFAF66C_marshal_pinvoke, STATDATA_t2B5067A25347A006153807EAA17839425EFAF66C_marshal_pinvoke_back, STATDATA_t2B5067A25347A006153807EAA17839425EFAF66C_marshal_pinvoke_cleanup, NULL, NULL, &STATDATA_t2B5067A25347A006153807EAA17839425EFAF66C_0_0_0 } /* System.Runtime.InteropServices.ComTypes.STATDATA */,
	{ NULL, STGMEDIUM_t73DA1C6D081B8828B798D5A7FA7B129B1F6E2D3E_marshal_pinvoke, STGMEDIUM_t73DA1C6D081B8828B798D5A7FA7B129B1F6E2D3E_marshal_pinvoke_back, STGMEDIUM_t73DA1C6D081B8828B798D5A7FA7B129B1F6E2D3E_marshal_pinvoke_cleanup, NULL, NULL, &STGMEDIUM_t73DA1C6D081B8828B798D5A7FA7B129B1F6E2D3E_0_0_0 } /* System.Runtime.InteropServices.ComTypes.STGMEDIUM */,
	{ NULL, SafeStringMarshal_t37C5C4D85118BDD5A55E3A20736550CF11C76C2E_marshal_pinvoke, SafeStringMarshal_t37C5C4D85118BDD5A55E3A20736550CF11C76C2E_marshal_pinvoke_back, SafeStringMarshal_t37C5C4D85118BDD5A55E3A20736550CF11C76C2E_marshal_pinvoke_cleanup, NULL, NULL, &SafeStringMarshal_t37C5C4D85118BDD5A55E3A20736550CF11C76C2E_0_0_0 } /* Mono.SafeStringMarshal */,
	{ DelegatePInvokeWrapper_SavePersistentViewData_tFE77B8450170D95B16B3017D62F81F2139D4F716, NULL, NULL, NULL, NULL, NULL, &SavePersistentViewData_tFE77B8450170D95B16B3017D62F81F2139D4F716_0_0_0 } /* UnityEngine.UIElements.SavePersistentViewData */,
	{ NULL, ScalableImage_t64F0F6F75D1099EF5D595E70CA1A2A7B9914E80F_marshal_pinvoke, ScalableImage_t64F0F6F75D1099EF5D595E70CA1A2A7B9914E80F_marshal_pinvoke_back, ScalableImage_t64F0F6F75D1099EF5D595E70CA1A2A7B9914E80F_marshal_pinvoke_cleanup, NULL, NULL, &ScalableImage_t64F0F6F75D1099EF5D595E70CA1A2A7B9914E80F_0_0_0 } /* UnityEngine.UIElements.StyleSheets.ScalableImage */,
	{ NULL, Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7_marshal_pinvoke, Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7_marshal_pinvoke_back, Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7_marshal_pinvoke_cleanup, NULL, NULL, &Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7_0_0_0 } /* UnityEngine.UIElements.Scale */,
	{ DelegatePInvokeWrapper_ScaleFunc_t423F661DAD5C7A18F509C8F1F62C9D6AEA9A9791, NULL, NULL, NULL, NULL, NULL, &ScaleFunc_t423F661DAD5C7A18F509C8F1F62C9D6AEA9A9791_0_0_0 } /* UnityEngine.Rendering.ScaleFunc */,
	{ NULL, ScriptableCullingParameters_tD9539440A4A7DA4C7578CCE16F24466A5DC89899_marshal_pinvoke, ScriptableCullingParameters_tD9539440A4A7DA4C7578CCE16F24466A5DC89899_marshal_pinvoke_back, ScriptableCullingParameters_tD9539440A4A7DA4C7578CCE16F24466A5DC89899_marshal_pinvoke_cleanup, NULL, NULL, &ScriptableCullingParameters_tD9539440A4A7DA4C7578CCE16F24466A5DC89899_0_0_0 } /* UnityEngine.Rendering.ScriptableCullingParameters */,
	{ NULL, ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshal_pinvoke, ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshal_pinvoke_back, ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshal_pinvoke_cleanup, NULL, NULL, &ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_0_0_0 } /* UnityEngine.ScriptableObject */,
	{ NULL, SecChannelBindings_t312B26406DEA57F70E864E42218D9CDF7D089196_marshal_pinvoke, SecChannelBindings_t312B26406DEA57F70E864E42218D9CDF7D089196_marshal_pinvoke_back, SecChannelBindings_t312B26406DEA57F70E864E42218D9CDF7D089196_marshal_pinvoke_cleanup, NULL, NULL, &SecChannelBindings_t312B26406DEA57F70E864E42218D9CDF7D089196_0_0_0 } /* System.Net.SecChannelBindings */,
	{ NULL, SecPkgContext_ConnectionInfo_tCD633F36513E24DA4BDA0436E14C81972FF60688_marshal_pinvoke, SecPkgContext_ConnectionInfo_tCD633F36513E24DA4BDA0436E14C81972FF60688_marshal_pinvoke_back, SecPkgContext_ConnectionInfo_tCD633F36513E24DA4BDA0436E14C81972FF60688_marshal_pinvoke_cleanup, NULL, NULL, &SecPkgContext_ConnectionInfo_tCD633F36513E24DA4BDA0436E14C81972FF60688_0_0_0 } /* System.Net.SecPkgContext_ConnectionInfo */,
	{ NULL, SecPkgContext_Sizes_t5E35EBB50BE8D8543F95AAB8EDC4FCB0EB0C52EF_marshal_pinvoke, SecPkgContext_Sizes_t5E35EBB50BE8D8543F95AAB8EDC4FCB0EB0C52EF_marshal_pinvoke_back, SecPkgContext_Sizes_t5E35EBB50BE8D8543F95AAB8EDC4FCB0EB0C52EF_marshal_pinvoke_cleanup, NULL, NULL, &SecPkgContext_Sizes_t5E35EBB50BE8D8543F95AAB8EDC4FCB0EB0C52EF_0_0_0 } /* System.Net.SecPkgContext_Sizes */,
	{ NULL, SecPkgContext_StreamSizes_t19EAFCE82EE4A1F95E03CA5425A00E5830390435_marshal_pinvoke, SecPkgContext_StreamSizes_t19EAFCE82EE4A1F95E03CA5425A00E5830390435_marshal_pinvoke_back, SecPkgContext_StreamSizes_t19EAFCE82EE4A1F95E03CA5425A00E5830390435_marshal_pinvoke_cleanup, NULL, NULL, &SecPkgContext_StreamSizes_t19EAFCE82EE4A1F95E03CA5425A00E5830390435_0_0_0 } /* System.Net.SecPkgContext_StreamSizes */,
	{ NULL, SectionSym_tD774296F1D1945C7076B73DDC54D4063D82E5C0D_marshal_pinvoke, SectionSym_tD774296F1D1945C7076B73DDC54D4063D82E5C0D_marshal_pinvoke_back, SectionSym_tD774296F1D1945C7076B73DDC54D4063D82E5C0D_marshal_pinvoke_cleanup, NULL, NULL, &SectionSym_tD774296F1D1945C7076B73DDC54D4063D82E5C0D_0_0_0 } /* Microsoft.Cci.Pdb.SectionSym */,
	{ NULL, SecurityStatusPal_t6B278DE9D48F48DEA8E0242EBBDAF48F3E96119F_marshal_pinvoke, SecurityStatusPal_t6B278DE9D48F48DEA8E0242EBBDAF48F3E96119F_marshal_pinvoke_back, SecurityStatusPal_t6B278DE9D48F48DEA8E0242EBBDAF48F3E96119F_marshal_pinvoke_cleanup, NULL, NULL, &SecurityStatusPal_t6B278DE9D48F48DEA8E0242EBBDAF48F3E96119F_0_0_0 } /* System.Net.SecurityStatusPal */,
	{ NULL, SelectorMatchRecord_t1E93CDB54312CFB4A67768BB25ABB9AFB31BC5D7_marshal_pinvoke, SelectorMatchRecord_t1E93CDB54312CFB4A67768BB25ABB9AFB31BC5D7_marshal_pinvoke_back, SelectorMatchRecord_t1E93CDB54312CFB4A67768BB25ABB9AFB31BC5D7_marshal_pinvoke_cleanup, NULL, NULL, &SelectorMatchRecord_t1E93CDB54312CFB4A67768BB25ABB9AFB31BC5D7_0_0_0 } /* UnityEngine.UIElements.StyleSheets.SelectorMatchRecord */,
	{ NULL, SemanticMeaning_tB410A3D7306E8060875DDEFE041CC7FDDEEE6335_marshal_pinvoke, SemanticMeaning_tB410A3D7306E8060875DDEFE041CC7FDDEEE6335_marshal_pinvoke_back, SemanticMeaning_tB410A3D7306E8060875DDEFE041CC7FDDEEE6335_marshal_pinvoke_cleanup, NULL, NULL, &SemanticMeaning_tB410A3D7306E8060875DDEFE041CC7FDDEEE6335_0_0_0 } /* UnityEngine.Windows.Speech.SemanticMeaning */,
	{ NULL, SerializationEntry_t6A03B35039769EF0EDD14BE879E68F1C104FFF74_marshal_pinvoke, SerializationEntry_t6A03B35039769EF0EDD14BE879E68F1C104FFF74_marshal_pinvoke_back, SerializationEntry_t6A03B35039769EF0EDD14BE879E68F1C104FFF74_marshal_pinvoke_cleanup, NULL, NULL, &SerializationEntry_t6A03B35039769EF0EDD14BE879E68F1C104FFF74_0_0_0 } /* System.Runtime.Serialization.SerializationEntry */,
	{ DelegatePInvokeWrapper_SerializationEventHandler_t0A09DB90E1E5E0B2CCCB82D3380E02F4ACE8995F, NULL, NULL, NULL, NULL, NULL, &SerializationEventHandler_t0A09DB90E1E5E0B2CCCB82D3380E02F4ACE8995F_0_0_0 } /* System.Runtime.Serialization.SerializationEventHandler */,
	{ NULL, ShaderKeyword_t683126BB2B2337DB41954B0FE0DA7EBAA7028661_marshal_pinvoke, ShaderKeyword_t683126BB2B2337DB41954B0FE0DA7EBAA7028661_marshal_pinvoke_back, ShaderKeyword_t683126BB2B2337DB41954B0FE0DA7EBAA7028661_marshal_pinvoke_cleanup, NULL, NULL, &ShaderKeyword_t683126BB2B2337DB41954B0FE0DA7EBAA7028661_0_0_0 } /* UnityEngine.Rendering.ShaderKeyword */,
	{ NULL, ShadowData_tA165FDF7CA4CE6BEA8B649FFAB91C59ED684D832_marshal_pinvoke, ShadowData_tA165FDF7CA4CE6BEA8B649FFAB91C59ED684D832_marshal_pinvoke_back, ShadowData_tA165FDF7CA4CE6BEA8B649FFAB91C59ED684D832_marshal_pinvoke_cleanup, NULL, NULL, &ShadowData_tA165FDF7CA4CE6BEA8B649FFAB91C59ED684D832_0_0_0 } /* UnityEngine.Rendering.Universal.ShadowData */,
	{ NULL, SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126_marshal_pinvoke, SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126_marshal_pinvoke_back, SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126_marshal_pinvoke_cleanup, NULL, NULL, &SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126_0_0_0 } /* UnityEngine.SkeletonBone */,
	{ NULL, Sky_t5AB138933D60CB215B9FBA33CB82283A2F743A14_marshal_pinvoke, Sky_t5AB138933D60CB215B9FBA33CB82283A2F743A14_marshal_pinvoke_back, Sky_t5AB138933D60CB215B9FBA33CB82283A2F743A14_marshal_pinvoke_cleanup, NULL, NULL, &Sky_t5AB138933D60CB215B9FBA33CB82283A2F743A14_0_0_0 } /* UnityEngine.Rendering.LookDev.Sky */,
	{ NULL, SlotSym32_t11F8D10167E92331F98AB18DE32283A9187DEE8E_marshal_pinvoke, SlotSym32_t11F8D10167E92331F98AB18DE32283A9187DEE8E_marshal_pinvoke_back, SlotSym32_t11F8D10167E92331F98AB18DE32283A9187DEE8E_marshal_pinvoke_cleanup, NULL, NULL, &SlotSym32_t11F8D10167E92331F98AB18DE32283A9187DEE8E_0_0_0 } /* Microsoft.Cci.Pdb.SlotSym32 */,
	{ NULL, SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340_marshal_pinvoke, SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340_marshal_pinvoke_back, SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340_marshal_pinvoke_cleanup, NULL, NULL, &SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340_0_0_0 } /* System.Net.Sockets.SocketAsyncResult */,
	{ NULL, SocketInformation_t9DB498C167BB8ACF9C751042E7174F6B2B96C7EC_marshal_pinvoke, SocketInformation_t9DB498C167BB8ACF9C751042E7174F6B2B96C7EC_marshal_pinvoke_back, SocketInformation_t9DB498C167BB8ACF9C751042E7174F6B2B96C7EC_marshal_pinvoke_cleanup, NULL, NULL, &SocketInformation_t9DB498C167BB8ACF9C751042E7174F6B2B96C7EC_0_0_0 } /* System.Net.Sockets.SocketInformation */,
	{ NULL, SocketReceiveFromResult_t53649672B974DA5C4009A226A234C9F73EF0414B_marshal_pinvoke, SocketReceiveFromResult_t53649672B974DA5C4009A226A234C9F73EF0414B_marshal_pinvoke_back, SocketReceiveFromResult_t53649672B974DA5C4009A226A234C9F73EF0414B_marshal_pinvoke_cleanup, NULL, NULL, &SocketReceiveFromResult_t53649672B974DA5C4009A226A234C9F73EF0414B_0_0_0 } /* System.Net.Sockets.SocketReceiveFromResult */,
	{ NULL, SocketReceiveMessageFromResult_tF9F2E089A06BD89F011D96B685BEDAC7E897BF89_marshal_pinvoke, SocketReceiveMessageFromResult_tF9F2E089A06BD89F011D96B685BEDAC7E897BF89_marshal_pinvoke_back, SocketReceiveMessageFromResult_tF9F2E089A06BD89F011D96B685BEDAC7E897BF89_marshal_pinvoke_cleanup, NULL, NULL, &SocketReceiveMessageFromResult_tF9F2E089A06BD89F011D96B685BEDAC7E897BF89_0_0_0 } /* System.Net.Sockets.SocketReceiveMessageFromResult */,
	{ NULL, SortKey_tFE5594FAAAFF330066735114D1021DB0D5273740_marshal_pinvoke, SortKey_tFE5594FAAAFF330066735114D1021DB0D5273740_marshal_pinvoke_back, SortKey_tFE5594FAAAFF330066735114D1021DB0D5273740_marshal_pinvoke_cleanup, NULL, NULL, &SortKey_tFE5594FAAAFF330066735114D1021DB0D5273740_0_0_0 } /* System.Globalization.SortKey */,
	{ NULL, SpinLock_t0826FB2BDD25012485F35D6D33A1FE1E1752E816_marshal_pinvoke, SpinLock_t0826FB2BDD25012485F35D6D33A1FE1E1752E816_marshal_pinvoke_back, SpinLock_t0826FB2BDD25012485F35D6D33A1FE1E1752E816_marshal_pinvoke_cleanup, NULL, NULL, &SpinLock_t0826FB2BDD25012485F35D6D33A1FE1E1752E816_0_0_0 } /* System.Threading.SpinLock */,
	{ NULL, SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869_marshal_pinvoke, SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869_marshal_pinvoke_back, SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869_marshal_pinvoke_cleanup, NULL, NULL, &SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869_0_0_0 } /* UnityEngine.Experimental.GlobalIllumination.SpotLight */,
	{ NULL, SpriteBone_t92E0FF1412CC4B6A5FC71895699E35FB3EF75044_marshal_pinvoke, SpriteBone_t92E0FF1412CC4B6A5FC71895699E35FB3EF75044_marshal_pinvoke_back, SpriteBone_t92E0FF1412CC4B6A5FC71895699E35FB3EF75044_marshal_pinvoke_cleanup, NULL, NULL, &SpriteBone_t92E0FF1412CC4B6A5FC71895699E35FB3EF75044_0_0_0 } /* UnityEngine.U2D.SpriteBone */,
	{ NULL, SpriteRendererGroup_t2925A4576406FAB40F064EDE3A989F9AD410027C_marshal_pinvoke, SpriteRendererGroup_t2925A4576406FAB40F064EDE3A989F9AD410027C_marshal_pinvoke_back, SpriteRendererGroup_t2925A4576406FAB40F064EDE3A989F9AD410027C_marshal_pinvoke_cleanup, NULL, NULL, &SpriteRendererGroup_t2925A4576406FAB40F064EDE3A989F9AD410027C_0_0_0 } /* UnityEngine.Experimental.U2D.SpriteRendererGroup */,
	{ NULL, SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshal_pinvoke, SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshal_pinvoke_back, SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshal_pinvoke_cleanup, NULL, NULL, &SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_0_0_0 } /* UnityEngine.UI.SpriteState */,
	{ NULL, SslApplicationProtocol_tB40F12F1093EE37CAE5E107A0D0F709B2F689700_marshal_pinvoke, SslApplicationProtocol_tB40F12F1093EE37CAE5E107A0D0F709B2F689700_marshal_pinvoke_back, SslApplicationProtocol_tB40F12F1093EE37CAE5E107A0D0F709B2F689700_marshal_pinvoke_cleanup, NULL, NULL, &SslApplicationProtocol_tB40F12F1093EE37CAE5E107A0D0F709B2F689700_0_0_0 } /* System.Net.Security.SslApplicationProtocol */,
	{ NULL, StackFrame_tA48D05BBE9BFC3ADED6198DF2B538B631AF7BDE2_marshal_pinvoke, StackFrame_tA48D05BBE9BFC3ADED6198DF2B538B631AF7BDE2_marshal_pinvoke_back, StackFrame_tA48D05BBE9BFC3ADED6198DF2B538B631AF7BDE2_marshal_pinvoke_cleanup, NULL, NULL, &StackFrame_tA48D05BBE9BFC3ADED6198DF2B538B631AF7BDE2_0_0_0 } /* ILRuntime.Runtime.Stack.StackFrame */,
	{ NULL, StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443_marshal_pinvoke, StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443_marshal_pinvoke_back, StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443_marshal_pinvoke_cleanup, NULL, NULL, &StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443_0_0_0 } /* System.Diagnostics.StackFrame */,
	{ DelegatePInvokeWrapper_StackObjectAllocateCallback_tC44C98B6EEECF553421071595AF55E3E8F0C0F60, NULL, NULL, NULL, NULL, NULL, &StackObjectAllocateCallback_tC44C98B6EEECF553421071595AF55E3E8F0C0F60_0_0_0 } /* ILRuntime.Runtime.Stack.StackObjectAllocateCallback */,
	{ NULL, State_tC241510131965D8DE1919EB16A3650E397E5AEAB_marshal_pinvoke, State_tC241510131965D8DE1919EB16A3650E397E5AEAB_marshal_pinvoke_back, State_tC241510131965D8DE1919EB16A3650E397E5AEAB_marshal_pinvoke_cleanup, NULL, NULL, &State_tC241510131965D8DE1919EB16A3650E397E5AEAB_0_0_0 } /* UnityEngine.UIElements.UIR.State */,
	{ NULL, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshal_pinvoke, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshal_pinvoke_back, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshal_pinvoke_cleanup, NULL, NULL, &StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_0_0_0 } /* System.Runtime.Serialization.StreamingContext */,
	{ NULL, StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610_marshal_pinvoke, StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610_marshal_pinvoke_back, StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610_marshal_pinvoke_cleanup, NULL, NULL, &StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610_0_0_0 } /* UnityEngine.UIElements.StyleCursor */,
	{ NULL, StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF_marshal_pinvoke, StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF_marshal_pinvoke_back, StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF_marshal_pinvoke_cleanup, NULL, NULL, &StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF_0_0_0 } /* UnityEngine.UIElements.StylePropertyName */,
	{ NULL, StylePropertyNameCollection_t2AB45DE2C2006786133A882AA60E6E782BB75312_marshal_pinvoke, StylePropertyNameCollection_t2AB45DE2C2006786133A882AA60E6E782BB75312_marshal_pinvoke_back, StylePropertyNameCollection_t2AB45DE2C2006786133A882AA60E6E782BB75312_marshal_pinvoke_cleanup, NULL, NULL, &StylePropertyNameCollection_t2AB45DE2C2006786133A882AA60E6E782BB75312_0_0_0 } /* UnityEngine.UIElements.StylePropertyNameCollection */,
	{ NULL, StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2_marshal_pinvoke, StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2_marshal_pinvoke_back, StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2_marshal_pinvoke_cleanup, NULL, NULL, &StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2_0_0_0 } /* UnityEngine.UIElements.StyleSheets.StylePropertyValue */,
	{ NULL, StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B_marshal_pinvoke, StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B_marshal_pinvoke_back, StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B_marshal_pinvoke_cleanup, NULL, NULL, &StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B_0_0_0 } /* UnityEngine.UIElements.StyleRotate */,
	{ NULL, StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC_marshal_pinvoke, StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC_marshal_pinvoke_back, StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC_marshal_pinvoke_cleanup, NULL, NULL, &StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC_0_0_0 } /* UnityEngine.UIElements.StyleScale */,
	{ NULL, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470_marshal_pinvoke, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470_marshal_pinvoke_back, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470_marshal_pinvoke_cleanup, NULL, NULL, &StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470_0_0_0 } /* UnityEngine.UIElements.StyleSelectorPart */,
	{ NULL, StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C_marshal_pinvoke, StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C_marshal_pinvoke_back, StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C_marshal_pinvoke_cleanup, NULL, NULL, &StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C_0_0_0 } /* UnityEngine.UIElements.StyleSheets.Syntax.StyleSyntaxToken */,
	{ NULL, StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089_marshal_pinvoke, StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089_marshal_pinvoke_back, StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089_marshal_pinvoke_cleanup, NULL, NULL, &StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089_0_0_0 } /* UnityEngine.UIElements.StyleTranslate */,
	{ NULL, StyleValueManaged_t68DFBEC1594279E4DC56634FD5092318D1E9A5F4_marshal_pinvoke, StyleValueManaged_t68DFBEC1594279E4DC56634FD5092318D1E9A5F4_marshal_pinvoke_back, StyleValueManaged_t68DFBEC1594279E4DC56634FD5092318D1E9A5F4_marshal_pinvoke_cleanup, NULL, NULL, &StyleValueManaged_t68DFBEC1594279E4DC56634FD5092318D1E9A5F4_0_0_0 } /* UnityEngine.UIElements.StyleSheets.StyleValueManaged */,
	{ NULL, StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A_marshal_pinvoke, StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A_marshal_pinvoke_back, StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A_marshal_pinvoke_cleanup, NULL, NULL, &StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A_0_0_0 } /* UnityEngine.UIElements.Experimental.StyleValues */,
	{ NULL, StyleVariable_t5D4DEC936102A13961F4F2C6214B83D6CDC56269_marshal_pinvoke, StyleVariable_t5D4DEC936102A13961F4F2C6214B83D6CDC56269_marshal_pinvoke_back, StyleVariable_t5D4DEC936102A13961F4F2C6214B83D6CDC56269_marshal_pinvoke_cleanup, NULL, NULL, &StyleVariable_t5D4DEC936102A13961F4F2C6214B83D6CDC56269_0_0_0 } /* UnityEngine.UIElements.StyleVariable */,
	{ NULL, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_marshal_pinvoke, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_marshal_pinvoke_back, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_marshal_pinvoke_cleanup, NULL, NULL, &TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_0_0_0 } /* System.Runtime.CompilerServices.TaskAwaiter */,
	{ NULL, TextCoreHandle_t06766751C4FA547A46F83A8E3DD33A6FF2EBE4B5_marshal_pinvoke, TextCoreHandle_t06766751C4FA547A46F83A8E3DD33A6FF2EBE4B5_marshal_pinvoke_back, TextCoreHandle_t06766751C4FA547A46F83A8E3DD33A6FF2EBE4B5_marshal_pinvoke_cleanup, NULL, NULL, &TextCoreHandle_t06766751C4FA547A46F83A8E3DD33A6FF2EBE4B5_0_0_0 } /* UnityEngine.UIElements.TextCoreHandle */,
	{ NULL, TextElementInfo_tDD7A12E319505510E0B350E342BD55F32AB5F976_marshal_pinvoke, TextElementInfo_tDD7A12E319505510E0B350E342BD55F32AB5F976_marshal_pinvoke_back, TextElementInfo_tDD7A12E319505510E0B350E342BD55F32AB5F976_marshal_pinvoke_cleanup, NULL, NULL, &TextElementInfo_tDD7A12E319505510E0B350E342BD55F32AB5F976_0_0_0 } /* UnityEngine.TextCore.Text.TextElementInfo */,
	{ NULL, TextGenerationSettings_tBB6E86AC0B348D19158D6721BE790865B04993F3_marshal_pinvoke, TextGenerationSettings_tBB6E86AC0B348D19158D6721BE790865B04993F3_marshal_pinvoke_back, TextGenerationSettings_tBB6E86AC0B348D19158D6721BE790865B04993F3_marshal_pinvoke_cleanup, NULL, NULL, &TextGenerationSettings_tBB6E86AC0B348D19158D6721BE790865B04993F3_0_0_0 } /* UnityEngine.TextGenerationSettings */,
	{ NULL, TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC_marshal_pinvoke, TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC_marshal_pinvoke_back, TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC_marshal_pinvoke_cleanup, NULL, NULL, &TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC_0_0_0 } /* UnityEngine.TextGenerator */,
	{ NULL, TextNativeSettings_tE9D302AD381537B4FD42C3D02583F719CFF40062_marshal_pinvoke, TextNativeSettings_tE9D302AD381537B4FD42C3D02583F719CFF40062_marshal_pinvoke_back, TextNativeSettings_tE9D302AD381537B4FD42C3D02583F719CFF40062_marshal_pinvoke_cleanup, NULL, NULL, &TextNativeSettings_tE9D302AD381537B4FD42C3D02583F719CFF40062_0_0_0 } /* UnityEngine.UIElements.TextNativeSettings */,
	{ NULL, TextureDesc_tBD9644C6170930E57EEF8542E9200AD9D858B601_marshal_pinvoke, TextureDesc_tBD9644C6170930E57EEF8542E9200AD9D858B601_marshal_pinvoke_back, TextureDesc_tBD9644C6170930E57EEF8542E9200AD9D858B601_marshal_pinvoke_cleanup, NULL, NULL, &TextureDesc_tBD9644C6170930E57EEF8542E9200AD9D858B601_0_0_0 } /* UnityEngine.Experimental.Rendering.RenderGraphModule.TextureDesc */,
	{ NULL, TextureEntry_tDA3A5BB083FA16C7123AF227C5D7F78860665128_marshal_pinvoke, TextureEntry_tDA3A5BB083FA16C7123AF227C5D7F78860665128_marshal_pinvoke_back, TextureEntry_tDA3A5BB083FA16C7123AF227C5D7F78860665128_marshal_pinvoke_cleanup, NULL, NULL, &TextureEntry_tDA3A5BB083FA16C7123AF227C5D7F78860665128_0_0_0 } /* UnityEngine.UIElements.UIR.TextureEntry */,
	{ DelegatePInvokeWrapper_ThreadStart_t7662D98F1793EDE90192D7304D1C3C44119328A2, NULL, NULL, NULL, NULL, NULL, &ThreadStart_t7662D98F1793EDE90192D7304D1C3C44119328A2_0_0_0 } /* System.Threading.ThreadStart */,
	{ NULL, ThreadSym32_tEED5BFB5FCA0CD1CAB4540A94018CB625189349A_marshal_pinvoke, ThreadSym32_tEED5BFB5FCA0CD1CAB4540A94018CB625189349A_marshal_pinvoke_back, ThreadSym32_tEED5BFB5FCA0CD1CAB4540A94018CB625189349A_marshal_pinvoke_cleanup, NULL, NULL, &ThreadSym32_tEED5BFB5FCA0CD1CAB4540A94018CB625189349A_0_0_0 } /* Microsoft.Cci.Pdb.ThreadSym32 */,
	{ NULL, ThunkSym32_t7C43BF77BAF65003138BB396F375F3E391606AC9_marshal_pinvoke, ThunkSym32_t7C43BF77BAF65003138BB396F375F3E391606AC9_marshal_pinvoke_back, ThunkSym32_t7C43BF77BAF65003138BB396F375F3E391606AC9_marshal_pinvoke_cleanup, NULL, NULL, &ThunkSym32_t7C43BF77BAF65003138BB396F375F3E391606AC9_0_0_0 } /* Microsoft.Cci.Pdb.ThunkSym32 */,
	{ NULL, TileAnimationData_tB7419BC111545576349DD19CAB0DEFD240CAF149_marshal_pinvoke, TileAnimationData_tB7419BC111545576349DD19CAB0DEFD240CAF149_marshal_pinvoke_back, TileAnimationData_tB7419BC111545576349DD19CAB0DEFD240CAF149_marshal_pinvoke_cleanup, NULL, NULL, &TileAnimationData_tB7419BC111545576349DD19CAB0DEFD240CAF149_0_0_0 } /* UnityEngine.Tilemaps.TileAnimationData */,
	{ DelegatePInvokeWrapper_TimeMsFunction_t1893856976EB95CF5608ACC3642AD8B79994CA2B, NULL, NULL, NULL, NULL, NULL, &TimeMsFunction_t1893856976EB95CF5608ACC3642AD8B79994CA2B_0_0_0 } /* UnityEngine.UIElements.TimeMsFunction */,
	{ NULL, TrackedReference_tF35FF4FB6E89ACD81C24469FAF0CA6FFF29262A2_marshal_pinvoke, TrackedReference_tF35FF4FB6E89ACD81C24469FAF0CA6FFF29262A2_marshal_pinvoke_back, TrackedReference_tF35FF4FB6E89ACD81C24469FAF0CA6FFF29262A2_marshal_pinvoke_cleanup, NULL, NULL, &TrackedReference_tF35FF4FB6E89ACD81C24469FAF0CA6FFF29262A2_0_0_0 } /* UnityEngine.TrackedReference */,
	{ NULL, TransformData_tC4540FA2761D7981877CC9077301F6AFEF1CF808_marshal_pinvoke, TransformData_tC4540FA2761D7981877CC9077301F6AFEF1CF808_marshal_pinvoke_back, TransformData_tC4540FA2761D7981877CC9077301F6AFEF1CF808_marshal_pinvoke_cleanup, NULL, NULL, &TransformData_tC4540FA2761D7981877CC9077301F6AFEF1CF808_0_0_0 } /* UnityEngine.UIElements.TransformData */,
	{ NULL, TransitionData_tF097DCEA6AD59BAD8C54693D84B3E2AE248AB321_marshal_pinvoke, TransitionData_tF097DCEA6AD59BAD8C54693D84B3E2AE248AB321_marshal_pinvoke_back, TransitionData_tF097DCEA6AD59BAD8C54693D84B3E2AE248AB321_marshal_pinvoke_cleanup, NULL, NULL, &TransitionData_tF097DCEA6AD59BAD8C54693D84B3E2AE248AB321_0_0_0 } /* UnityEngine.UIElements.TransitionData */,
	{ NULL, Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_marshal_pinvoke, Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_marshal_pinvoke_back, Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_marshal_pinvoke_cleanup, NULL, NULL, &Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_0_0_0 } /* UnityEngine.UIElements.Translate */,
	{ NULL, TransparentProxy_t943163A9C567330AAD61F9F42479D4EAD2A55DD8_marshal_pinvoke, TransparentProxy_t943163A9C567330AAD61F9F42479D4EAD2A55DD8_marshal_pinvoke_back, TransparentProxy_t943163A9C567330AAD61F9F42479D4EAD2A55DD8_marshal_pinvoke_cleanup, NULL, NULL, &TransparentProxy_t943163A9C567330AAD61F9F42479D4EAD2A55DD8_0_0_0 } /* System.Runtime.Remoting.Proxies.TransparentProxy */,
	{ NULL, TypeDescriptor_t01A99BD37834DDEEAD548DFD445FCC204D3C07E3_marshal_pinvoke, TypeDescriptor_t01A99BD37834DDEEAD548DFD445FCC204D3C07E3_marshal_pinvoke_back, TypeDescriptor_t01A99BD37834DDEEAD548DFD445FCC204D3C07E3_marshal_pinvoke_cleanup, NULL, NULL, &TypeDescriptor_t01A99BD37834DDEEAD548DFD445FCC204D3C07E3_0_0_0 } /* CommandLine.Core.TypeDescriptor */,
	{ NULL, TypeSizeInfo_tFC240303A45F862ABF3DD8E0B21E2A723DA66FAD_marshal_pinvoke, TypeSizeInfo_tFC240303A45F862ABF3DD8E0B21E2A723DA66FAD_marshal_pinvoke_back, TypeSizeInfo_tFC240303A45F862ABF3DD8E0B21E2A723DA66FAD_marshal_pinvoke_cleanup, NULL, NULL, &TypeSizeInfo_tFC240303A45F862ABF3DD8E0B21E2A723DA66FAD_0_0_0 } /* ILRuntime.Runtime.Enviorment.TypeSizeInfo */,
	{ NULL, UIRVEShaderInfoAllocator_t7A9BCF1924EA027462B8DBBAC7B15BCBCB5CC3BF_marshal_pinvoke, UIRVEShaderInfoAllocator_t7A9BCF1924EA027462B8DBBAC7B15BCBCB5CC3BF_marshal_pinvoke_back, UIRVEShaderInfoAllocator_t7A9BCF1924EA027462B8DBBAC7B15BCBCB5CC3BF_marshal_pinvoke_cleanup, NULL, NULL, &UIRVEShaderInfoAllocator_t7A9BCF1924EA027462B8DBBAC7B15BCBCB5CC3BF_0_0_0 } /* UnityEngine.UIElements.UIR.UIRVEShaderInfoAllocator */,
	{ NULL, UdpReceiveResult_t9B04AABD71B2DAE00002C0063D6532227A9E243E_marshal_pinvoke, UdpReceiveResult_t9B04AABD71B2DAE00002C0063D6532227A9E243E_marshal_pinvoke_back, UdpReceiveResult_t9B04AABD71B2DAE00002C0063D6532227A9E243E_marshal_pinvoke_cleanup, NULL, NULL, &UdpReceiveResult_t9B04AABD71B2DAE00002C0063D6532227A9E243E_0_0_0 } /* System.Net.Sockets.UdpReceiveResult */,
	{ NULL, UdtSym_t92865AFDBDB723B2AD6C66DE664ADE1454EB7104_marshal_pinvoke, UdtSym_t92865AFDBDB723B2AD6C66DE664ADE1454EB7104_marshal_pinvoke_back, UdtSym_t92865AFDBDB723B2AD6C66DE664ADE1454EB7104_marshal_pinvoke_cleanup, NULL, NULL, &UdtSym_t92865AFDBDB723B2AD6C66DE664ADE1454EB7104_0_0_0 } /* Microsoft.Cci.Pdb.UdtSym */,
	{ NULL, UnamespaceSym_t726F70980BD4BDFEB38B9AD76693B44C0C4F4647_marshal_pinvoke, UnamespaceSym_t726F70980BD4BDFEB38B9AD76693B44C0C4F4647_marshal_pinvoke_back, UnamespaceSym_t726F70980BD4BDFEB38B9AD76693B44C0C4F4647_marshal_pinvoke_cleanup, NULL, NULL, &UnamespaceSym_t726F70980BD4BDFEB38B9AD76693B44C0C4F4647_0_0_0 } /* Microsoft.Cci.Pdb.UnamespaceSym */,
	{ DelegatePInvokeWrapper_UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7, NULL, NULL, NULL, NULL, NULL, &UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_0_0_0 } /* UnityEngine.Events.UnityAction */,
	{ NULL, UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshal_pinvoke, UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshal_pinvoke_back, UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshal_pinvoke_cleanup, NULL, NULL, &UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_0_0_0 } /* UnityEngine.Networking.UnityWebRequest */,
	{ NULL, UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C_marshal_pinvoke, UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C_marshal_pinvoke_back, UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C_marshal_pinvoke_cleanup, NULL, NULL, &UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C_0_0_0 } /* UnityEngine.Networking.UnityWebRequestAsyncOperation */,
	{ DelegatePInvokeWrapper_UnlockConnectionDelegate_t453247A451D867BEFEDC7B88ABF6A0638CB5791E, NULL, NULL, NULL, NULL, NULL, &UnlockConnectionDelegate_t453247A451D867BEFEDC7B88ABF6A0638CB5791E_0_0_0 } /* System.Net.UnlockConnectionDelegate */,
	{ NULL, UnmanagedMarshal_t266EA330E458C05C980D8B8C08DF106E266E378C_marshal_pinvoke, UnmanagedMarshal_t266EA330E458C05C980D8B8C08DF106E266E378C_marshal_pinvoke_back, UnmanagedMarshal_t266EA330E458C05C980D8B8C08DF106E266E378C_marshal_pinvoke_cleanup, NULL, NULL, &UnmanagedMarshal_t266EA330E458C05C980D8B8C08DF106E266E378C_0_0_0 } /* System.Reflection.Emit.UnmanagedMarshal */,
	{ NULL, UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshal_pinvoke, UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshal_pinvoke_back, UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshal_pinvoke_cleanup, NULL, NULL, &UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_0_0_0 } /* UnityEngine.Networking.UploadHandler */,
	{ DelegatePInvokeWrapper_UserCallBack_t81E6755DCACDEAF4FD737113D39268AA52B3DD94, NULL, NULL, NULL, NULL, NULL, &UserCallBack_t81E6755DCACDEAF4FD737113D39268AA52B3DD94_0_0_0 } /* System.Diagnostics.UserCallBack */,
	{ NULL, VFXEventAttribute_tA764A595356174BA39C782A8A64B47B39FB3F518_marshal_pinvoke, VFXEventAttribute_tA764A595356174BA39C782A8A64B47B39FB3F518_marshal_pinvoke_back, VFXEventAttribute_tA764A595356174BA39C782A8A64B47B39FB3F518_marshal_pinvoke_cleanup, NULL, NULL, &VFXEventAttribute_tA764A595356174BA39C782A8A64B47B39FB3F518_0_0_0 } /* UnityEngine.VFX.VFXEventAttribute */,
	{ NULL, VFXExpressionValues_t361C45D33F7B5E9D85F8185EF47AA9ACF43063F5_marshal_pinvoke, VFXExpressionValues_t361C45D33F7B5E9D85F8185EF47AA9ACF43063F5_marshal_pinvoke_back, VFXExpressionValues_t361C45D33F7B5E9D85F8185EF47AA9ACF43063F5_marshal_pinvoke_cleanup, NULL, NULL, &VFXExpressionValues_t361C45D33F7B5E9D85F8185EF47AA9ACF43063F5_0_0_0 } /* UnityEngine.VFX.VFXExpressionValues */,
	{ NULL, VFXOutputEventArgs_tA170E0868F4EFA82F5AF0835B297C4AF9E571A40_marshal_pinvoke, VFXOutputEventArgs_tA170E0868F4EFA82F5AF0835B297C4AF9E571A40_marshal_pinvoke_back, VFXOutputEventArgs_tA170E0868F4EFA82F5AF0835B297C4AF9E571A40_marshal_pinvoke_cleanup, NULL, NULL, &VFXOutputEventArgs_tA170E0868F4EFA82F5AF0835B297C4AF9E571A40_0_0_0 } /* UnityEngine.VFX.VFXOutputEventArgs */,
	{ NULL, VFXSpawnerState_tCAF49FEA2C8BB3E0BB1E9C3C3F2649576CB64281_marshal_pinvoke, VFXSpawnerState_tCAF49FEA2C8BB3E0BB1E9C3C3F2649576CB64281_marshal_pinvoke_back, VFXSpawnerState_tCAF49FEA2C8BB3E0BB1E9C3C3F2649576CB64281_marshal_pinvoke_cleanup, NULL, NULL, &VFXSpawnerState_tCAF49FEA2C8BB3E0BB1E9C3C3F2649576CB64281_0_0_0 } /* UnityEngine.VFX.VFXSpawnerState */,
	{ NULL, ValueStringBuilder_tEBD54C46E3AF8527BD0D234124F5C1AC14E9E251_marshal_pinvoke, ValueStringBuilder_tEBD54C46E3AF8527BD0D234124F5C1AC14E9E251_marshal_pinvoke_back, ValueStringBuilder_tEBD54C46E3AF8527BD0D234124F5C1AC14E9E251_marshal_pinvoke_cleanup, NULL, NULL, &ValueStringBuilder_tEBD54C46E3AF8527BD0D234124F5C1AC14E9E251_0_0_0 } /* System.Text.ValueStringBuilder */,
	{ NULL, ValueStringBuilder_tC142140E6C0B9CD2BA423636F1BB5822672673E9_marshal_pinvoke, ValueStringBuilder_tC142140E6C0B9CD2BA423636F1BB5822672673E9_marshal_pinvoke_back, ValueStringBuilder_tC142140E6C0B9CD2BA423636F1BB5822672673E9_marshal_pinvoke_cleanup, NULL, NULL, &ValueStringBuilder_tC142140E6C0B9CD2BA423636F1BB5822672673E9_0_0_0 } /* System.Text.ValueStringBuilder */,
	{ NULL, ValueTaskAwaiter_t8A53759F995F1786E132CA010D1D215B55F3101A_marshal_pinvoke, ValueTaskAwaiter_t8A53759F995F1786E132CA010D1D215B55F3101A_marshal_pinvoke_back, ValueTaskAwaiter_t8A53759F995F1786E132CA010D1D215B55F3101A_marshal_pinvoke_cleanup, NULL, NULL, &ValueTaskAwaiter_t8A53759F995F1786E132CA010D1D215B55F3101A_0_0_0 } /* System.Runtime.CompilerServices.ValueTaskAwaiter */,
	{ NULL, ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshal_pinvoke, ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshal_pinvoke_back, ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshal_pinvoke_cleanup, NULL, NULL, &ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_0_0_0 } /* System.ValueType */,
	{ NULL, VariableIndex_t08310156F857121435900AF4C6D3F168CF85E5CF_marshal_pinvoke, VariableIndex_t08310156F857121435900AF4C6D3F168CF85E5CF_marshal_pinvoke_back, VariableIndex_t08310156F857121435900AF4C6D3F168CF85E5CF_marshal_pinvoke_cleanup, NULL, NULL, &VariableIndex_t08310156F857121435900AF4C6D3F168CF85E5CF_0_0_0 } /* ILRuntime.Mono.Cecil.Cil.VariableIndex */,
	{ NULL, VideoCapture_t4FC0DEDE3146D8313C7CD8B8B9D8EFB868CACD7B_marshal_pinvoke, VideoCapture_t4FC0DEDE3146D8313C7CD8B8B9D8EFB868CACD7B_marshal_pinvoke_back, VideoCapture_t4FC0DEDE3146D8313C7CD8B8B9D8EFB868CACD7B_marshal_pinvoke_cleanup, NULL, NULL, &VideoCapture_t4FC0DEDE3146D8313C7CD8B8B9D8EFB868CACD7B_0_0_0 } /* UnityEngine.Windows.WebCam.VideoCapture */,
	{ NULL, VirtualOffsetSettings_tC12F99414598C4F285ADCFC12DE72C3D88EC9351_marshal_pinvoke, VirtualOffsetSettings_tC12F99414598C4F285ADCFC12DE72C3D88EC9351_marshal_pinvoke_back, VirtualOffsetSettings_tC12F99414598C4F285ADCFC12DE72C3D88EC9351_marshal_pinvoke_cleanup, NULL, NULL, &VirtualOffsetSettings_tC12F99414598C4F285ADCFC12DE72C3D88EC9351_0_0_0 } /* UnityEngine.Experimental.Rendering.VirtualOffsetSettings */,
	{ NULL, VisualData_t64B2C5387387BCEC426F3981BECC8582A02D3F1B_marshal_pinvoke, VisualData_t64B2C5387387BCEC426F3981BECC8582A02D3F1B_marshal_pinvoke_back, VisualData_t64B2C5387387BCEC426F3981BECC8582A02D3F1B_marshal_pinvoke_cleanup, NULL, NULL, &VisualData_t64B2C5387387BCEC426F3981BECC8582A02D3F1B_0_0_0 } /* UnityEngine.UIElements.VisualData */,
	{ NULL, VisualElementStyleSheetSet_t01465769E0D9109A677300311A7058701873A23B_marshal_pinvoke, VisualElementStyleSheetSet_t01465769E0D9109A677300311A7058701873A23B_marshal_pinvoke_back, VisualElementStyleSheetSet_t01465769E0D9109A677300311A7058701873A23B_marshal_pinvoke_cleanup, NULL, NULL, &VisualElementStyleSheetSet_t01465769E0D9109A677300311A7058701873A23B_0_0_0 } /* UnityEngine.UIElements.VisualElementStyleSheetSet */,
	{ NULL, WaitForChangedResult_t50441171847AF2F3C59CCBFDDB903331F2B18AF2_marshal_pinvoke, WaitForChangedResult_t50441171847AF2F3C59CCBFDDB903331F2B18AF2_marshal_pinvoke_back, WaitForChangedResult_t50441171847AF2F3C59CCBFDDB903331F2B18AF2_marshal_pinvoke_cleanup, NULL, NULL, &WaitForChangedResult_t50441171847AF2F3C59CCBFDDB903331F2B18AF2_0_0_0 } /* System.IO.WaitForChangedResult */,
	{ NULL, WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshal_pinvoke, WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshal_pinvoke_back, WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshal_pinvoke_cleanup, NULL, NULL, &WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_0_0_0 } /* UnityEngine.WaitForSeconds */,
	{ NULL, WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8_marshal_pinvoke, WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8_marshal_pinvoke_back, WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8_marshal_pinvoke_cleanup, NULL, NULL, &WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8_0_0_0 } /* System.Threading.WaitHandle */,
	{ NULL, Win32_FIXED_INFO_t9D99BDFAAAAC166F7EDAFA26BF309D322F817C5F_marshal_pinvoke, Win32_FIXED_INFO_t9D99BDFAAAAC166F7EDAFA26BF309D322F817C5F_marshal_pinvoke_back, Win32_FIXED_INFO_t9D99BDFAAAAC166F7EDAFA26BF309D322F817C5F_marshal_pinvoke_cleanup, NULL, NULL, &Win32_FIXED_INFO_t9D99BDFAAAAC166F7EDAFA26BF309D322F817C5F_0_0_0 } /* System.Net.NetworkInformation.Win32_FIXED_INFO */,
	{ NULL, Win32_IP_ADAPTER_ADDRESSES_t284DFDE6A9909878EC47F01B9A405572EDD09EEE_marshal_pinvoke, Win32_IP_ADAPTER_ADDRESSES_t284DFDE6A9909878EC47F01B9A405572EDD09EEE_marshal_pinvoke_back, Win32_IP_ADAPTER_ADDRESSES_t284DFDE6A9909878EC47F01B9A405572EDD09EEE_marshal_pinvoke_cleanup, NULL, NULL, &Win32_IP_ADAPTER_ADDRESSES_t284DFDE6A9909878EC47F01B9A405572EDD09EEE_0_0_0 } /* System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES */,
	{ NULL, Win32_IP_ADAPTER_INFO_tB0665C5F6FF46171B39F6B4C164B3013E4065F12_marshal_pinvoke, Win32_IP_ADAPTER_INFO_tB0665C5F6FF46171B39F6B4C164B3013E4065F12_marshal_pinvoke_back, Win32_IP_ADAPTER_INFO_tB0665C5F6FF46171B39F6B4C164B3013E4065F12_marshal_pinvoke_cleanup, NULL, NULL, &Win32_IP_ADAPTER_INFO_tB0665C5F6FF46171B39F6B4C164B3013E4065F12_0_0_0 } /* System.Net.NetworkInformation.Win32_IP_ADAPTER_INFO */,
	{ NULL, Win32_IP_ADDR_STRING_tB0FA66A644EFD59AFE80E7F55060CC566FF7BEC7_marshal_pinvoke, Win32_IP_ADDR_STRING_tB0FA66A644EFD59AFE80E7F55060CC566FF7BEC7_marshal_pinvoke_back, Win32_IP_ADDR_STRING_tB0FA66A644EFD59AFE80E7F55060CC566FF7BEC7_marshal_pinvoke_cleanup, NULL, NULL, &Win32_IP_ADDR_STRING_tB0FA66A644EFD59AFE80E7F55060CC566FF7BEC7_0_0_0 } /* System.Net.NetworkInformation.Win32_IP_ADDR_STRING */,
	{ NULL, Win32_IP_PER_ADAPTER_INFO_tA89C4AB997D7CEA885C123A55BEA9F08A186DDE8_marshal_pinvoke, Win32_IP_PER_ADAPTER_INFO_tA89C4AB997D7CEA885C123A55BEA9F08A186DDE8_marshal_pinvoke_back, Win32_IP_PER_ADAPTER_INFO_tA89C4AB997D7CEA885C123A55BEA9F08A186DDE8_marshal_pinvoke_cleanup, NULL, NULL, &Win32_IP_PER_ADAPTER_INFO_tA89C4AB997D7CEA885C123A55BEA9F08A186DDE8_0_0_0 } /* System.Net.NetworkInformation.Win32_IP_PER_ADAPTER_INFO */,
	{ NULL, Win32_MIBICMPSTATS_EX_tDC7D2C7BEC795741A78767683EEFB00960E044D9_marshal_pinvoke, Win32_MIBICMPSTATS_EX_tDC7D2C7BEC795741A78767683EEFB00960E044D9_marshal_pinvoke_back, Win32_MIBICMPSTATS_EX_tDC7D2C7BEC795741A78767683EEFB00960E044D9_marshal_pinvoke_cleanup, NULL, NULL, &Win32_MIBICMPSTATS_EX_tDC7D2C7BEC795741A78767683EEFB00960E044D9_0_0_0 } /* System.Net.NetworkInformation.Win32_MIBICMPSTATS_EX */,
	{ NULL, Win32_MIB_ICMP_EX_tB24EC96751FAB541B2AAB0F5DFD636FD778E95F0_marshal_pinvoke, Win32_MIB_ICMP_EX_tB24EC96751FAB541B2AAB0F5DFD636FD778E95F0_marshal_pinvoke_back, Win32_MIB_ICMP_EX_tB24EC96751FAB541B2AAB0F5DFD636FD778E95F0_marshal_pinvoke_cleanup, NULL, NULL, &Win32_MIB_ICMP_EX_tB24EC96751FAB541B2AAB0F5DFD636FD778E95F0_0_0_0 } /* System.Net.NetworkInformation.Win32_MIB_ICMP_EX */,
	{ NULL, Win32_MIB_IFROW_t179E4C942DE065152990382E5BFD758E6C19ED60_marshal_pinvoke, Win32_MIB_IFROW_t179E4C942DE065152990382E5BFD758E6C19ED60_marshal_pinvoke_back, Win32_MIB_IFROW_t179E4C942DE065152990382E5BFD758E6C19ED60_marshal_pinvoke_cleanup, NULL, NULL, &Win32_MIB_IFROW_t179E4C942DE065152990382E5BFD758E6C19ED60_0_0_0 } /* System.Net.NetworkInformation.Win32_MIB_IFROW */,
	{ NULL, Win32_SOCKADDR_t8FFB71AF192B29914F457E80291909E4CCCCC78E_marshal_pinvoke, Win32_SOCKADDR_t8FFB71AF192B29914F457E80291909E4CCCCC78E_marshal_pinvoke_back, Win32_SOCKADDR_t8FFB71AF192B29914F457E80291909E4CCCCC78E_marshal_pinvoke_cleanup, NULL, NULL, &Win32_SOCKADDR_t8FFB71AF192B29914F457E80291909E4CCCCC78E_0_0_0 } /* System.Net.NetworkInformation.Win32_SOCKADDR */,
	{ NULL, WithSym32_t70277B51B38FBCB93CC381DA47F0E0569F4DA421_marshal_pinvoke, WithSym32_t70277B51B38FBCB93CC381DA47F0E0569F4DA421_marshal_pinvoke_back, WithSym32_t70277B51B38FBCB93CC381DA47F0E0569F4DA421_marshal_pinvoke_cleanup, NULL, NULL, &WithSym32_t70277B51B38FBCB93CC381DA47F0E0569F4DA421_0_0_0 } /* Microsoft.Cci.Pdb.WithSym32 */,
	{ NULL, WordWrapState_tD71131CF008362DB9562FB9794AE9D9225D8F123_marshal_pinvoke, WordWrapState_tD71131CF008362DB9562FB9794AE9D9225D8F123_marshal_pinvoke_back, WordWrapState_tD71131CF008362DB9562FB9794AE9D9225D8F123_marshal_pinvoke_cleanup, NULL, NULL, &WordWrapState_tD71131CF008362DB9562FB9794AE9D9225D8F123_0_0_0 } /* UnityEngine.TextCore.Text.WordWrapState */,
	{ NULL, X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D_marshal_pinvoke, X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D_marshal_pinvoke_back, X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D_marshal_pinvoke_cleanup, NULL, NULL, &X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D_0_0_0 } /* System.Security.Cryptography.X509Certificates.X509ChainStatus */,
	{ NULL, YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshal_pinvoke, YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshal_pinvoke_back, YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshal_pinvoke_cleanup, NULL, NULL, &YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_0_0_0 } /* UnityEngine.YieldInstruction */,
	{ NULL, __DTString_t732683AF9A8EEC82B66C136920240C4033EF0637_marshal_pinvoke, __DTString_t732683AF9A8EEC82B66C136920240C4033EF0637_marshal_pinvoke_back, __DTString_t732683AF9A8EEC82B66C136920240C4033EF0637_marshal_pinvoke_cleanup, NULL, NULL, &__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637_0_0_0 } /* System.__DTString */,
	{ NULL, jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225_marshal_pinvoke, jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225_marshal_pinvoke_back, jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225_marshal_pinvoke_cleanup, NULL, NULL, &jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225_0_0_0 } /* UnityEngine.jvalue */,
	{ NULL, mlMethod_t23C752ACB37FC0BE9B6CAE94D4D21F19230BBBA2_marshal_pinvoke, mlMethod_t23C752ACB37FC0BE9B6CAE94D4D21F19230BBBA2_marshal_pinvoke_back, mlMethod_t23C752ACB37FC0BE9B6CAE94D4D21F19230BBBA2_marshal_pinvoke_cleanup, NULL, NULL, &mlMethod_t23C752ACB37FC0BE9B6CAE94D4D21F19230BBBA2_0_0_0 } /* Microsoft.Cci.Pdb.mlMethod */,
	{ NULL, ShadowResolutionRequest_tE0E30FA18ACE318D6540C2BA217F4E8B3E6766CA_marshal_pinvoke, ShadowResolutionRequest_tE0E30FA18ACE318D6540C2BA217F4E8B3E6766CA_marshal_pinvoke_back, ShadowResolutionRequest_tE0E30FA18ACE318D6540C2BA217F4E8B3E6766CA_marshal_pinvoke_cleanup, NULL, NULL, &ShadowResolutionRequest_tE0E30FA18ACE318D6540C2BA217F4E8B3E6766CA_0_0_0 } /* UnityEngine.Rendering.Universal.Internal.AdditionalLightsShadowCasterPass/ShadowResolutionRequest */,
	{ NULL, Alloc2D_tB9971776E3506C8F38C7F3C66690F9AC0322542E_marshal_pinvoke, Alloc2D_tB9971776E3506C8F38C7F3C66690F9AC0322542E_marshal_pinvoke_back, Alloc2D_tB9971776E3506C8F38C7F3C66690F9AC0322542E_marshal_pinvoke_cleanup, NULL, NULL, &Alloc2D_tB9971776E3506C8F38C7F3C66690F9AC0322542E_0_0_0 } /* UnityEngine.UIElements.UIR.Allocator2D/Alloc2D */,
	{ DelegatePInvokeWrapper_IdentityTokenChanged_tE8CB0DAB5F6E640A847803F582E6CB6237742395, NULL, NULL, NULL, NULL, NULL, &IdentityTokenChanged_tE8CB0DAB5F6E640A847803F582E6CB6237742395_0_0_0 } /* UnityEngine.Analytics.AnalyticsSessionInfo/IdentityTokenChanged */,
	{ DelegatePInvokeWrapper_SessionStateChanged_t1180FB66E702B635CAD9316DC661D931277B2A0C, NULL, NULL, NULL, NULL, NULL, &SessionStateChanged_t1180FB66E702B635CAD9316DC661D931277B2A0C_0_0_0 } /* UnityEngine.Analytics.AnalyticsSessionInfo/SessionStateChanged */,
	{ DelegatePInvokeWrapper_OnOverrideControllerDirtyCallback_tDC67F7661A27502AD804BDE0B696955AFD4A44D5, NULL, NULL, NULL, NULL, NULL, &OnOverrideControllerDirtyCallback_tDC67F7661A27502AD804BDE0B696955AFD4A44D5_0_0_0 } /* UnityEngine.AnimatorOverrideController/OnOverrideControllerDirtyCallback */,
	{ DelegatePInvokeWrapper_LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413, NULL, NULL, NULL, NULL, NULL, &LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413_0_0_0 } /* UnityEngine.Application/LogCallback */,
	{ DelegatePInvokeWrapper_LowMemoryCallback_tF685A8AA4A24BB7603D190EB750E61C3F963026F, NULL, NULL, NULL, NULL, NULL, &LowMemoryCallback_tF685A8AA4A24BB7603D190EB750E61C3F963026F_0_0_0 } /* UnityEngine.Application/LowMemoryCallback */,
	{ NULL, RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0_marshal_pinvoke, RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0_marshal_pinvoke_back, RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0_marshal_pinvoke_cleanup, NULL, NULL, &RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0_0_0_0 } /* System.Array/RawData */,
	{ NULL, SorterGenericArray_t894488A2B9F4A1ACE408683B71920FA7DBAA47D9_marshal_pinvoke, SorterGenericArray_t894488A2B9F4A1ACE408683B71920FA7DBAA47D9_marshal_pinvoke_back, SorterGenericArray_t894488A2B9F4A1ACE408683B71920FA7DBAA47D9_marshal_pinvoke_cleanup, NULL, NULL, &SorterGenericArray_t894488A2B9F4A1ACE408683B71920FA7DBAA47D9_0_0_0 } /* System.Array/SorterGenericArray */,
	{ NULL, SorterObjectArray_t27D45F724041652AE2FD9645BE40292F8E343305_marshal_pinvoke, SorterObjectArray_t27D45F724041652AE2FD9645BE40292F8E343305_marshal_pinvoke_back, SorterObjectArray_t27D45F724041652AE2FD9645BE40292F8E343305_marshal_pinvoke_cleanup, NULL, NULL, &SorterObjectArray_t27D45F724041652AE2FD9645BE40292F8E343305_0_0_0 } /* System.Array/SorterObjectArray */,
	{ NULL, AttributeEntry_t646320DFCA1CFF9E19700C8AEBF785FE35BB2A9D_marshal_pinvoke, AttributeEntry_t646320DFCA1CFF9E19700C8AEBF785FE35BB2A9D_marshal_pinvoke_back, AttributeEntry_t646320DFCA1CFF9E19700C8AEBF785FE35BB2A9D_marshal_pinvoke_cleanup, NULL, NULL, &AttributeEntry_t646320DFCA1CFF9E19700C8AEBF785FE35BB2A9D_0_0_0 } /* System.ComponentModel.AttributeCollection/AttributeEntry */,
	{ DelegatePInvokeWrapper_PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E, NULL, NULL, NULL, NULL, NULL, &PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E_0_0_0 } /* UnityEngine.AudioClip/PCMReaderCallback */,
	{ DelegatePInvokeWrapper_PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072, NULL, NULL, NULL, NULL, NULL, &PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072_0_0_0 } /* UnityEngine.AudioClip/PCMSetPositionCallback */,
	{ DelegatePInvokeWrapper_AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177, NULL, NULL, NULL, NULL, NULL, &AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177_0_0_0 } /* UnityEngine.AudioSettings/AudioConfigurationChangeHandler */,
	{ NULL, NodeEnumerator_t7CB2EFBA0A2F9767CA59B2EDB2FA4D348959E89B_marshal_pinvoke, NodeEnumerator_t7CB2EFBA0A2F9767CA59B2EDB2FA4D348959E89B_marshal_pinvoke_back, NodeEnumerator_t7CB2EFBA0A2F9767CA59B2EDB2FA4D348959E89B_marshal_pinvoke_cleanup, NULL, NULL, &NodeEnumerator_t7CB2EFBA0A2F9767CA59B2EDB2FA4D348959E89B_0_0_0 } /* ProtoBuf.Meta.BasicList/NodeEnumerator */,
	{ NULL, OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837_marshal_pinvoke, OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837_marshal_pinvoke_back, OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837_marshal_pinvoke_cleanup, NULL, NULL, &OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837_0_0_0 } /* UnityEngine.BeforeRenderHelper/OrderBlock */,
	{ NULL, FormatOptions_tBD49C0C9CC14282D1249620565FC537D4D4AFB84_marshal_pinvoke, FormatOptions_tBD49C0C9CC14282D1249620565FC537D4D4AFB84_marshal_pinvoke_back, FormatOptions_tBD49C0C9CC14282D1249620565FC537D4D4AFB84_marshal_pinvoke_cleanup, NULL, NULL, &FormatOptions_tBD49C0C9CC14282D1249620565FC537D4D4AFB84_0_0_0 } /* Unity.Burst.BurstString/FormatOptions */,
	{ NULL, NumberBuffer_tF09E8463D840202ECA50F50BE6D57729C18213B4_marshal_pinvoke, NumberBuffer_tF09E8463D840202ECA50F50BE6D57729C18213B4_marshal_pinvoke_back, NumberBuffer_tF09E8463D840202ECA50F50BE6D57729C18213B4_marshal_pinvoke_cleanup, NULL, NULL, &NumberBuffer_tF09E8463D840202ECA50F50BE6D57729C18213B4_0_0_0 } /* Unity.Burst.BurstString/NumberBuffer */,
	{ DelegatePInvokeWrapper_CFProxyAutoConfigurationResultCallback_t9CEAA50E7E7B78CE76F69C81ED662783D4FE0C8A, NULL, NULL, NULL, NULL, NULL, &CFProxyAutoConfigurationResultCallback_t9CEAA50E7E7B78CE76F69C81ED662783D4FE0C8A_0_0_0 } /* Mono.Net.CFNetwork/CFProxyAutoConfigurationResultCallback */,
	{ NULL, RenderRequest_t432931B06439AC4704282E924DE8A9A474DB6B9A_marshal_pinvoke, RenderRequest_t432931B06439AC4704282E924DE8A9A474DB6B9A_marshal_pinvoke_back, RenderRequest_t432931B06439AC4704282E924DE8A9A474DB6B9A_marshal_pinvoke_cleanup, NULL, NULL, &RenderRequest_t432931B06439AC4704282E924DE8A9A474DB6B9A_0_0_0 } /* UnityEngine.Camera/RenderRequest */,
	{ DelegatePInvokeWrapper_WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC, NULL, NULL, NULL, NULL, NULL, &WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC_0_0_0 } /* UnityEngine.Canvas/WillRenderCanvases */,
	{ NULL, AlgorithmIdentifier_tCF880F72315F1725C33F59BB2F5D213BB22275A8_marshal_pinvoke, AlgorithmIdentifier_tCF880F72315F1725C33F59BB2F5D213BB22275A8_marshal_pinvoke_back, AlgorithmIdentifier_tCF880F72315F1725C33F59BB2F5D213BB22275A8_marshal_pinvoke_cleanup, NULL, NULL, &AlgorithmIdentifier_tCF880F72315F1725C33F59BB2F5D213BB22275A8_0_0_0 } /* Internal.Cryptography.Pal.CertificateData/AlgorithmIdentifier */,
	{ NULL, ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_marshal_pinvoke, ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_marshal_pinvoke_back, ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_marshal_pinvoke_cleanup, NULL, NULL, &ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_0_0_0 } /* System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter */,
	{ NULL, RecognizedAttribute_t67AAD871D05C66CFF976B98E4492B979993FB7D3_marshal_pinvoke, RecognizedAttribute_t67AAD871D05C66CFF976B98E4492B979993FB7D3_marshal_pinvoke_back, RecognizedAttribute_t67AAD871D05C66CFF976B98E4492B979993FB7D3_marshal_pinvoke_cleanup, NULL, NULL, &RecognizedAttribute_t67AAD871D05C66CFF976B98E4492B979993FB7D3_0_0_0 } /* System.Net.CookieTokenizer/RecognizedAttribute */,
	{ NULL, ProcessMessageRes_t6B49D2FAE01AC95889FDF8F854970E358D2AC2C7_marshal_pinvoke, ProcessMessageRes_t6B49D2FAE01AC95889FDF8F854970E358D2AC2C7_marshal_pinvoke_back, ProcessMessageRes_t6B49D2FAE01AC95889FDF8F854970E358D2AC2C7_marshal_pinvoke_cleanup, NULL, NULL, &ProcessMessageRes_t6B49D2FAE01AC95889FDF8F854970E358D2AC2C7_0_0_0 } /* System.Runtime.Remoting.Channels.CrossAppDomainSink/ProcessMessageRes */,
	{ DelegatePInvokeWrapper_StateChanged_t6DC116251B1ED50EC475CFF0195AB6625478485F, NULL, NULL, NULL, NULL, NULL, &StateChanged_t6DC116251B1ED50EC475CFF0195AB6625478485F_0_0_0 } /* UnityEngine.CullingGroup/StateChanged */,
	{ NULL, Data_t589A371D0FD4E7B3C8E27FDDE05F06BA48BF2E4E_marshal_pinvoke, Data_t589A371D0FD4E7B3C8E27FDDE05F06BA48BF2E4E_marshal_pinvoke_back, Data_t589A371D0FD4E7B3C8E27FDDE05F06BA48BF2E4E_marshal_pinvoke_cleanup, NULL, NULL, &Data_t589A371D0FD4E7B3C8E27FDDE05F06BA48BF2E4E_0_0_0 } /* System.Globalization.CultureInfo/Data */,
	{ DelegatePInvokeWrapper_OnCultureInfoChangedDelegate_t643F89A369BE552AC4D546507F51BF998EBA670A, NULL, NULL, NULL, NULL, NULL, &OnCultureInfoChangedDelegate_t643F89A369BE552AC4D546507F51BF998EBA670A_0_0_0 } /* System.Globalization.CultureInfo/OnCultureInfoChangedDelegate */,
	{ NULL, AlbedoDebugValidationPresetData_tCCFD994474750370F3F5AAEE6312FDF5F06C106B_marshal_pinvoke, AlbedoDebugValidationPresetData_tCCFD994474750370F3F5AAEE6312FDF5F06C106B_marshal_pinvoke_back, AlbedoDebugValidationPresetData_tCCFD994474750370F3F5AAEE6312FDF5F06C106B_marshal_pinvoke_cleanup, NULL, NULL, &AlbedoDebugValidationPresetData_tCCFD994474750370F3F5AAEE6312FDF5F06C106B_0_0_0 } /* UnityEngine.Rendering.Universal.DebugDisplaySettingsMaterial/AlbedoDebugValidationPresetData */,
	{ NULL, CombinedChunks_tCFB3356163B9F9B0E31E0B194E9B415F83340ED9_marshal_pinvoke, CombinedChunks_tCFB3356163B9F9B0E31E0B194E9B415F83340ED9_marshal_pinvoke_back, CombinedChunks_tCFB3356163B9F9B0E31E0B194E9B415F83340ED9_marshal_pinvoke_cleanup, NULL, NULL, &CombinedChunks_tCFB3356163B9F9B0E31E0B194E9B415F83340ED9_0_0_0 } /* UnityEngine.Rendering.Universal.DecalEntityManager/CombinedChunks */,
	{ NULL, Resources_t959FACC867970114DBF8DC7D4C649240E819940E_marshal_pinvoke, Resources_t959FACC867970114DBF8DC7D4C649240E819940E_marshal_pinvoke_back, Resources_t959FACC867970114DBF8DC7D4C649240E819940E_marshal_pinvoke_cleanup, NULL, NULL, &Resources_t959FACC867970114DBF8DC7D4C649240E819940E_0_0_0 } /* UnityEngine.UI.DefaultControls/Resources */,
	{ NULL, CullLightsJob_t12E24FFF641BA4E7E15F02538D2FB6AB656423DE_marshal_pinvoke, CullLightsJob_t12E24FFF641BA4E7E15F02538D2FB6AB656423DE_marshal_pinvoke_back, CullLightsJob_t12E24FFF641BA4E7E15F02538D2FB6AB656423DE_marshal_pinvoke_cleanup, NULL, NULL, &CullLightsJob_t12E24FFF641BA4E7E15F02538D2FB6AB656423DE_0_0_0 } /* UnityEngine.Rendering.Universal.Internal.DeferredLights/CullLightsJob */,
	{ NULL, DrawCall_t704B8D7A804DDC8CD64E065EC39E89AD61AD405B_marshal_pinvoke, DrawCall_t704B8D7A804DDC8CD64E065EC39E89AD61AD405B_marshal_pinvoke_back, DrawCall_t704B8D7A804DDC8CD64E065EC39E89AD61AD405B_marshal_pinvoke_cleanup, NULL, NULL, &DrawCall_t704B8D7A804DDC8CD64E065EC39E89AD61AD405B_0_0_0 } /* UnityEngine.Rendering.Universal.Internal.DeferredLights/DrawCall */,
	{ NULL, InitParams_tD826C0704956D3F1286BCCC07B5A5F61FFA7FCD6_marshal_pinvoke, InitParams_tD826C0704956D3F1286BCCC07B5A5F61FFA7FCD6_marshal_pinvoke_back, InitParams_tD826C0704956D3F1286BCCC07B5A5F61FFA7FCD6_marshal_pinvoke_cleanup, NULL, NULL, &InitParams_tD826C0704956D3F1286BCCC07B5A5F61FFA7FCD6_0_0_0 } /* UnityEngine.Rendering.Universal.Internal.DeferredLights/InitParams */,
	{ DelegatePInvokeWrapper_ReadMethod_t87B67872818F82B3DCC067C0DD9BB47200327CE6, NULL, NULL, NULL, NULL, NULL, &ReadMethod_t87B67872818F82B3DCC067C0DD9BB47200327CE6_0_0_0 } /* System.IO.Compression.DeflateStream/ReadMethod */,
	{ DelegatePInvokeWrapper_WriteMethod_t43391B800F1C3F6EFEEFCBADF4D3322CBFB42AB9, NULL, NULL, NULL, NULL, NULL, &WriteMethod_t43391B800F1C3F6EFEEFCBADF4D3322CBFB42AB9_0_0_0 } /* System.IO.Compression.DeflateStream/WriteMethod */,
	{ DelegatePInvokeWrapper_UnmanagedReadOrWrite_t3705731796B1AD7D7A711D794FF08961B623E9BA, NULL, NULL, NULL, NULL, NULL, &UnmanagedReadOrWrite_t3705731796B1AD7D7A711D794FF08961B623E9BA_0_0_0 } /* System.IO.Compression.DeflateStreamNative/UnmanagedReadOrWrite */,
	{ DelegatePInvokeWrapper_DictationCompletedDelegate_t83D7F1A9EC8225F6C405F0936EEEA031F75E93C7, NULL, NULL, NULL, NULL, NULL, &DictationCompletedDelegate_t83D7F1A9EC8225F6C405F0936EEEA031F75E93C7_0_0_0 } /* UnityEngine.Windows.Speech.DictationRecognizer/DictationCompletedDelegate */,
	{ DelegatePInvokeWrapper_DictationErrorHandler_t3B40C491B80EBCEC860A8ABF490B6A13B129AC6D, NULL, NULL, NULL, NULL, NULL, &DictationErrorHandler_t3B40C491B80EBCEC860A8ABF490B6A13B129AC6D_0_0_0 } /* UnityEngine.Windows.Speech.DictationRecognizer/DictationErrorHandler */,
	{ DelegatePInvokeWrapper_DictationHypothesisDelegate_t062C7AA1EAEA39F02173D9C05D809EAB1DDBB77A, NULL, NULL, NULL, NULL, NULL, &DictationHypothesisDelegate_t062C7AA1EAEA39F02173D9C05D809EAB1DDBB77A_0_0_0 } /* UnityEngine.Windows.Speech.DictationRecognizer/DictationHypothesisDelegate */,
	{ DelegatePInvokeWrapper_DictationResultDelegate_t09DC18A221E33F1C0E26AB3363F4004240FBCFC6, NULL, NULL, NULL, NULL, NULL, &DictationResultDelegate_t09DC18A221E33F1C0E26AB3363F4004240FBCFC6_0_0_0 } /* UnityEngine.Windows.Speech.DictationRecognizer/DictationResultDelegate */,
	{ DelegatePInvokeWrapper_DisplaysUpdatedDelegate_t1BAACED9BE72131FD59213A3186F5D7AB9E1FD68, NULL, NULL, NULL, NULL, NULL, &DisplaysUpdatedDelegate_t1BAACED9BE72131FD59213A3186F5D7AB9E1FD68_0_0_0 } /* UnityEngine.Display/DisplaysUpdatedDelegate */,
	{ DelegatePInvokeWrapper_OnDownloadError_t35039D2911B5CFD49EF3A4B02A7F0C7D80285206, NULL, NULL, NULL, NULL, NULL, &OnDownloadError_t35039D2911B5CFD49EF3A4B02A7F0C7D80285206_0_0_0 } /* YooAsset.DownloaderOperation/OnDownloadError */,
	{ DelegatePInvokeWrapper_OnDownloadOver_t42B784EDC39A773684AF38DCE8B6F4BADF82E0D6, NULL, NULL, NULL, NULL, NULL, &OnDownloadOver_t42B784EDC39A773684AF38DCE8B6F4BADF82E0D6_0_0_0 } /* YooAsset.DownloaderOperation/OnDownloadOver */,
	{ DelegatePInvokeWrapper_OnDownloadProgress_tBE0A65BD0027A02B8CD1EA74A709E17A58B866C6, NULL, NULL, NULL, NULL, NULL, &OnDownloadProgress_tBE0A65BD0027A02B8CD1EA74A709E17A58B866C6_0_0_0 } /* YooAsset.DownloaderOperation/OnDownloadProgress */,
	{ DelegatePInvokeWrapper_OnStartDownloadFile_tB7A432CAC4DC47EF9279EBD4EE01EC27C248F2F9, NULL, NULL, NULL, NULL, NULL, &OnStartDownloadFile_tB7A432CAC4DC47EF9279EBD4EE01EC27C248F2F9_0_0_0 } /* YooAsset.DownloaderOperation/OnStartDownloadFile */,
	{ NULL, ScalerContainer_t8C9EBECAB45F9B7C806AF9F477262E5F80F5E375_marshal_pinvoke, ScalerContainer_t8C9EBECAB45F9B7C806AF9F477262E5F80F5E375_marshal_pinvoke_back, ScalerContainer_t8C9EBECAB45F9B7C806AF9F477262E5F80F5E375_marshal_pinvoke_cleanup, NULL, NULL, &ScalerContainer_t8C9EBECAB45F9B7C806AF9F477262E5F80F5E375_0_0_0 } /* UnityEngine.Rendering.DynamicResolutionHandler/ScalerContainer */,
	{ NULL, EnumResult_t136A685F59AB498579BD350717FADD4D6603DAB4_marshal_pinvoke, EnumResult_t136A685F59AB498579BD350717FADD4D6603DAB4_marshal_pinvoke_back, EnumResult_t136A685F59AB498579BD350717FADD4D6603DAB4_marshal_pinvoke_cleanup, NULL, NULL, &EnumResult_t136A685F59AB498579BD350717FADD4D6603DAB4_0_0_0 } /* System.Enum/EnumResult */,
	{ NULL, EnumPair_tAA90AB82C8065DBB8D05ECE8D9195FB20E13423A_marshal_pinvoke, EnumPair_tAA90AB82C8065DBB8D05ECE8D9195FB20E13423A_marshal_pinvoke_back, EnumPair_tAA90AB82C8065DBB8D05ECE8D9195FB20E13423A_marshal_pinvoke_cleanup, NULL, NULL, &EnumPair_tAA90AB82C8065DBB8D05ECE8D9195FB20E13423A_0_0_0 } /* ProtoBuf.Serializers.EnumSerializer/EnumPair */,
	{ NULL, DispatchContext_tFA37790A5FF30508B0146B79E4FF1880EB82E455_marshal_pinvoke, DispatchContext_tFA37790A5FF30508B0146B79E4FF1880EB82E455_marshal_pinvoke_back, DispatchContext_tFA37790A5FF30508B0146B79E4FF1880EB82E455_marshal_pinvoke_cleanup, NULL, NULL, &DispatchContext_tFA37790A5FF30508B0146B79E4FF1880EB82E455_0_0_0 } /* UnityEngine.UIElements.EventDispatcher/DispatchContext */,
	{ NULL, EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2_marshal_pinvoke, EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2_marshal_pinvoke_back, EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2_marshal_pinvoke_cleanup, NULL, NULL, &EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2_0_0_0 } /* UnityEngine.UIElements.EventDispatcher/EventRecord */,
	{ NULL, UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182_marshal_pinvoke, UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182_marshal_pinvoke_back, UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182_marshal_pinvoke_cleanup, NULL, NULL, &UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182_0_0_0 } /* UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig */,
	{ NULL, Reader_tFD6FCF261BBDF95B67147E0E1A8FD60D82333E5E_marshal_pinvoke, Reader_tFD6FCF261BBDF95B67147E0E1A8FD60D82333E5E_marshal_pinvoke_back, Reader_tFD6FCF261BBDF95B67147E0E1A8FD60D82333E5E_marshal_pinvoke_cleanup, NULL, NULL, &Reader_tFD6FCF261BBDF95B67147E0E1A8FD60D82333E5E_0_0_0 } /* System.Threading.ExecutionContext/Reader */,
	{ DelegatePInvokeWrapper_ConfirmOverwriteDelegate_tECABC456A4C853ACB974FF3C432117B7A91FF0A1, NULL, NULL, NULL, NULL, NULL, &ConfirmOverwriteDelegate_tECABC456A4C853ACB974FF3C432117B7A91FF0A1_0_0_0 } /* ICSharpCode.SharpZipLib.Zip.FastZip/ConfirmOverwriteDelegate */,
	{ DelegatePInvokeWrapper_ReadDelegate_tA1467DDB23ACEC2E32F06F86F7906D1B1AA67C98, NULL, NULL, NULL, NULL, NULL, &ReadDelegate_tA1467DDB23ACEC2E32F06F86F7906D1B1AA67C98_0_0_0 } /* System.IO.FileStream/ReadDelegate */,
	{ DelegatePInvokeWrapper_WriteDelegate_tACBC1C867E4248D4A20626FCBFB1C886993FA3BA, NULL, NULL, NULL, NULL, NULL, &WriteDelegate_tACBC1C867E4248D4A20626FCBFB1C886993FA3BA_0_0_0 } /* System.IO.FileStream/WriteDelegate */,
	{ NULL, FocusedElement_t1EE083A1C5276213C533A38C6B5DC02E9DE5CBEF_marshal_pinvoke, FocusedElement_t1EE083A1C5276213C533A38C6B5DC02E9DE5CBEF_marshal_pinvoke_back, FocusedElement_t1EE083A1C5276213C533A38C6B5DC02E9DE5CBEF_marshal_pinvoke_cleanup, NULL, NULL, &FocusedElement_t1EE083A1C5276213C533A38C6B5DC02E9DE5CBEF_0_0_0 } /* UnityEngine.UIElements.FocusController/FocusedElement */,
	{ DelegatePInvokeWrapper_FontTextureRebuildCallback_t76D5E172DF8AA57E67763D453AAC40F0961D09B1, NULL, NULL, NULL, NULL, NULL, &FontTextureRebuildCallback_t76D5E172DF8AA57E67763D453AAC40F0961D09B1_0_0_0 } /* UnityEngine.Font/FontTextureRebuildCallback */,
	{ NULL, InitParams_t2637D034DDA6AE1F6AA0A3FEDF3C8D30100B9472_marshal_pinvoke, InitParams_t2637D034DDA6AE1F6AA0A3FEDF3C8D30100B9472_marshal_pinvoke_back, InitParams_t2637D034DDA6AE1F6AA0A3FEDF3C8D30100B9472_marshal_pinvoke_cleanup, NULL, NULL, &InitParams_t2637D034DDA6AE1F6AA0A3FEDF3C8D30100B9472_0_0_0 } /* UnityEngine.Rendering.Universal.Internal.ForwardLights/InitParams */,
	{ DelegatePInvokeWrapper_WindowFunction_t0067B6F174FD5BEC3E869A38C2319BA8EE85D550, NULL, NULL, NULL, NULL, NULL, &WindowFunction_t0067B6F174FD5BEC3E869A38C2319BA8EE85D550_0_0_0 } /* UnityEngine.GUI/WindowFunction */,
	{ NULL, ParentClipScope_tDAB1300C623213518730D926A970098BECFD9C52_marshal_pinvoke, ParentClipScope_tDAB1300C623213518730D926A970098BECFD9C52_marshal_pinvoke_back, ParentClipScope_tDAB1300C623213518730D926A970098BECFD9C52_marshal_pinvoke_cleanup, NULL, NULL, &ParentClipScope_tDAB1300C623213518730D926A970098BECFD9C52_0_0_0 } /* UnityEngine.GUIClip/ParentClipScope */,
	{ DelegatePInvokeWrapper_SkinChangedDelegate_tA6D456E853D58AD2EF8A599F543C7E5BA8E94B98, NULL, NULL, NULL, NULL, NULL, &SkinChangedDelegate_tA6D456E853D58AD2EF8A599F543C7E5BA8E94B98_0_0_0 } /* UnityEngine.GUISkin/SkinChangedDelegate */,
	{ NULL, RawTexture_t11E3CED18C936D84173D8F6A55270D7AC5452FCA_marshal_pinvoke, RawTexture_t11E3CED18C936D84173D8F6A55270D7AC5452FCA_marshal_pinvoke_back, RawTexture_t11E3CED18C936D84173D8F6A55270D7AC5452FCA_marshal_pinvoke_cleanup, NULL, NULL, &RawTexture_t11E3CED18C936D84173D8F6A55270D7AC5452FCA_0_0_0 } /* UnityEngine.UIElements.UIR.GradientSettingsAtlas/RawTexture */,
	{ NULL, GuidResult_t5B70D46D3C631BD00631FF6D700371C1E9C7AC79_marshal_pinvoke, GuidResult_t5B70D46D3C631BD00631FF6D700371C1E9C7AC79_marshal_pinvoke_back, GuidResult_t5B70D46D3C631BD00631FF6D700371C1E9C7AC79_marshal_pinvoke_cleanup, NULL, NULL, &GuidResult_t5B70D46D3C631BD00631FF6D700371C1E9C7AC79_0_0_0 } /* System.Guid/GuidResult */,
	{ NULL, bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E_marshal_pinvoke, bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E_marshal_pinvoke_back, bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E_marshal_pinvoke_cleanup, NULL, NULL, &bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E_0_0_0 } /* System.Collections.Hashtable/bucket */,
	{ NULL, AuthorizationState_t79311A9A938E608B506F10F92C0789E46C8FCA32_marshal_pinvoke, AuthorizationState_t79311A9A938E608B506F10F92C0789E46C8FCA32_marshal_pinvoke_back, AuthorizationState_t79311A9A938E608B506F10F92C0789E46C8FCA32_marshal_pinvoke_cleanup, NULL, NULL, &AuthorizationState_t79311A9A938E608B506F10F92C0789E46C8FCA32_0_0_0 } /* System.Net.HttpWebRequest/AuthorizationState */,
	{ NULL, GUIGlobals_tA6082A955224515E1D82F5B41D84A0CD35A9CF10_marshal_pinvoke, GUIGlobals_tA6082A955224515E1D82F5B41D84A0CD35A9CF10_marshal_pinvoke_back, GUIGlobals_tA6082A955224515E1D82F5B41D84A0CD35A9CF10_marshal_pinvoke_cleanup, NULL, NULL, &GUIGlobals_tA6082A955224515E1D82F5B41D84A0CD35A9CF10_0_0_0 } /* UnityEngine.UIElements.IMGUIContainer/GUIGlobals */,
	{ NULL, InlineRule_t33A25EE06BCFCD5561E60223DF8544C8EF644C30_marshal_pinvoke, InlineRule_t33A25EE06BCFCD5561E60223DF8544C8EF644C30_marshal_pinvoke_back, InlineRule_t33A25EE06BCFCD5561E60223DF8544C8EF644C30_marshal_pinvoke_cleanup, NULL, NULL, &InlineRule_t33A25EE06BCFCD5561E60223DF8544C8EF644C30_0_0_0 } /* UnityEngine.UIElements.InlineStyleAccess/InlineRule */,
	{ DelegatePInvokeWrapper_OnValidateInput_t48916A4E9C9FD6204401FF0808C2B7A93D73418B, NULL, NULL, NULL, NULL, NULL, &OnValidateInput_t48916A4E9C9FD6204401FF0808C2B7A93D73418B_0_0_0 } /* UnityEngine.UI.InputField/OnValidateInput */,
	{ NULL, InstructionOffsetCache_tF9DD2BF155D65B4AC7DA1549DD555A5F881DD52E_marshal_pinvoke, InstructionOffsetCache_tF9DD2BF155D65B4AC7DA1549DD555A5F881DD52E_marshal_pinvoke_back, InstructionOffsetCache_tF9DD2BF155D65B4AC7DA1549DD555A5F881DD52E_marshal_pinvoke_cleanup, NULL, NULL, &InstructionOffsetCache_tF9DD2BF155D65B4AC7DA1549DD555A5F881DD52E_0_0_0 } /* ILRuntime.Mono.Cecil.Cil.InstructionCollection/InstructionOffsetCache */,
	{ NULL, bucket_tAF03F47BB3CB4A383D4C9F40CFDF25075A497895_marshal_pinvoke, bucket_tAF03F47BB3CB4A383D4C9F40CFDF25075A497895_marshal_pinvoke_back, bucket_tAF03F47BB3CB4A383D4C9F40CFDF25075A497895_marshal_pinvoke_cleanup, NULL, NULL, &bucket_tAF03F47BB3CB4A383D4C9F40CFDF25075A497895_0_0_0 } /* Microsoft.Cci.Pdb.IntHashTable/bucket */,
	{ NULL, TreeViewItemWrapper_tFA593EC4B06E0C963C0EAA9C18DDC99EEDC05D1F_marshal_pinvoke, TreeViewItemWrapper_tFA593EC4B06E0C963C0EAA9C18DDC99EEDC05D1F_marshal_pinvoke_back, TreeViewItemWrapper_tFA593EC4B06E0C963C0EAA9C18DDC99EEDC05D1F_marshal_pinvoke_cleanup, NULL, NULL, &TreeViewItemWrapper_tFA593EC4B06E0C963C0EAA9C18DDC99EEDC05D1F_0_0_0 } /* UnityEngine.UIElements.InternalTreeView/TreeViewItemWrapper */,
	{ NULL, SecPkgContext_ApplicationProtocol_t2AC94D86A46680A23E028DEC0F09B3C86B5BCCBD_marshal_pinvoke, SecPkgContext_ApplicationProtocol_t2AC94D86A46680A23E028DEC0F09B3C86B5BCCBD_marshal_pinvoke_back, SecPkgContext_ApplicationProtocol_t2AC94D86A46680A23E028DEC0F09B3C86B5BCCBD_marshal_pinvoke_cleanup, NULL, NULL, &SecPkgContext_ApplicationProtocol_t2AC94D86A46680A23E028DEC0F09B3C86B5BCCBD_0_0_0 } /* Interop/SecPkgContext_ApplicationProtocol */,
	{ DelegatePInvokeWrapper_PanicFunction__t9B5243C52C7988A1D3B5A297CF2D7B4C63CF0E02, NULL, NULL, NULL, NULL, NULL, &PanicFunction__t9B5243C52C7988A1D3B5A297CF2D7B4C63CF0E02_0_0_0 } /* Unity.Jobs.LowLevel.Unsafe.JobsUtility/PanicFunction_ */,
	{ NULL, U3CrenderTargetUsedU3Ee__FixedBuffer_tFD6BC31F926EE730D12C5E649A0B4B46B3C49647_marshal_pinvoke, U3CrenderTargetUsedU3Ee__FixedBuffer_tFD6BC31F926EE730D12C5E649A0B4B46B3C49647_marshal_pinvoke_back, U3CrenderTargetUsedU3Ee__FixedBuffer_tFD6BC31F926EE730D12C5E649A0B4B46B3C49647_marshal_pinvoke_cleanup, NULL, NULL, &U3CrenderTargetUsedU3Ee__FixedBuffer_tFD6BC31F926EE730D12C5E649A0B4B46B3C49647_0_0_0 } /* UnityEngine.Rendering.Universal.LayerBatch/<renderTargetUsed>e__FixedBuffer */,
	{ NULL, LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_marshal_pinvoke, LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_marshal_pinvoke_back, LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_marshal_pinvoke_cleanup, NULL, NULL, &LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_0_0_0 } /* UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping */,
	{ NULL, Settings_tD7A6A8448F1DB2BC0311F24ED5CA30DCA1C30FA1_marshal_pinvoke, Settings_tD7A6A8448F1DB2BC0311F24ED5CA30DCA1C30FA1_marshal_pinvoke_back, Settings_tD7A6A8448F1DB2BC0311F24ED5CA30DCA1C30FA1_marshal_pinvoke_cleanup, NULL, NULL, &Settings_tD7A6A8448F1DB2BC0311F24ED5CA30DCA1C30FA1_0_0_0 } /* UnityEngine.Rendering.Universal.LightCookieManager/Settings */,
	{ NULL, ShaderBitArray_t92F648500F336FE106BF7EAACF00FF413DAB0F58_marshal_pinvoke, ShaderBitArray_t92F648500F336FE106BF7EAACF00FF413DAB0F58_marshal_pinvoke_back, ShaderBitArray_t92F648500F336FE106BF7EAACF00FF413DAB0F58_marshal_pinvoke_cleanup, NULL, NULL, &ShaderBitArray_t92F648500F336FE106BF7EAACF00FF413DAB0F58_0_0_0 } /* UnityEngine.Rendering.Universal.LightCookieManager/ShaderBitArray */,
	{ NULL, DragPosition_t922FC1F61C1B1A510241E4207B94AA1CD7E94660_marshal_pinvoke, DragPosition_t922FC1F61C1B1A510241E4207B94AA1CD7E94660_marshal_pinvoke_back, DragPosition_t922FC1F61C1B1A510241E4207B94AA1CD7E94660_marshal_pinvoke_cleanup, NULL, NULL, &DragPosition_t922FC1F61C1B1A510241E4207B94AA1CD7E94660_0_0_0 } /* UnityEngine.UIElements.ListViewDragger/DragPosition */,
	{ NULL, Reader_t77F3745416303EC22BC31DD74525DB04E7501DB6_marshal_pinvoke, Reader_t77F3745416303EC22BC31DD74525DB04E7501DB6_marshal_pinvoke_back, Reader_t77F3745416303EC22BC31DD74525DB04E7501DB6_marshal_pinvoke_cleanup, NULL, NULL, &Reader_t77F3745416303EC22BC31DD74525DB04E7501DB6_0_0_0 } /* System.Runtime.Remoting.Messaging.LogicalCallContext/Reader */,
	{ DelegatePInvokeWrapper_SCNetworkReachabilityCallback_tB2999B8E8D3F9B2AE93423DFFE710122C60E6F28, NULL, NULL, NULL, NULL, NULL, &SCNetworkReachabilityCallback_tB2999B8E8D3F9B2AE93423DFFE710122C60E6F28_0_0_0 } /* System.Net.NetworkInformation.MacNetworkChange/SCNetworkReachabilityCallback */,
	{ NULL, HeaderInfo_tC25416261914F4C3B4F2C1F4A5B5254C9F7FA918_marshal_pinvoke, HeaderInfo_tC25416261914F4C3B4F2C1F4A5B5254C9F7FA918_marshal_pinvoke_back, HeaderInfo_tC25416261914F4C3B4F2C1F4A5B5254C9F7FA918_marshal_pinvoke_cleanup, NULL, NULL, &HeaderInfo_tC25416261914F4C3B4F2C1F4A5B5254C9F7FA918_0_0_0 } /* System.Net.Mail.MailHeaderInfo/HeaderInfo */,
	{ DelegatePInvokeWrapper_SecureStringAllocator_t261B9D6083129A0996138F50A608D9F5E4C6DC44, NULL, NULL, NULL, NULL, NULL, &SecureStringAllocator_t261B9D6083129A0996138F50A608D9F5E4C6DC44_0_0_0 } /* System.Runtime.InteropServices.Marshal/SecureStringAllocator */,
	{ NULL, RelationshipEntry_tCF2A840F44B0C6DAFA86300F8E9006222AE9A5B9_marshal_pinvoke, RelationshipEntry_tCF2A840F44B0C6DAFA86300F8E9006222AE9A5B9_marshal_pinvoke_back, RelationshipEntry_tCF2A840F44B0C6DAFA86300F8E9006222AE9A5B9_marshal_pinvoke_cleanup, NULL, NULL, &RelationshipEntry_tCF2A840F44B0C6DAFA86300F8E9006222AE9A5B9_0_0_0 } /* System.ComponentModel.Design.Serialization.MemberRelationshipService/RelationshipEntry */,
	{ NULL, AllocMeshData_t2A9D421887B81E659406F225BE007B9CD4FC1AA0_marshal_pinvoke, AllocMeshData_t2A9D421887B81E659406F225BE007B9CD4FC1AA0_marshal_pinvoke_back, AllocMeshData_t2A9D421887B81E659406F225BE007B9CD4FC1AA0_marshal_pinvoke_cleanup, NULL, NULL, &AllocMeshData_t2A9D421887B81E659406F225BE007B9CD4FC1AA0_0_0_0 } /* UnityEngine.UIElements.UIR.MeshBuilder/AllocMeshData */,
	{ NULL, BorderParams_t66CC80A4CCAC5C52D6384BE4E66A3230C7099B80_marshal_pinvoke, BorderParams_t66CC80A4CCAC5C52D6384BE4E66A3230C7099B80_marshal_pinvoke_back, BorderParams_t66CC80A4CCAC5C52D6384BE4E66A3230C7099B80_marshal_pinvoke_cleanup, NULL, NULL, &BorderParams_t66CC80A4CCAC5C52D6384BE4E66A3230C7099B80_0_0_0 } /* UnityEngine.UIElements.MeshGenerationContextUtils/BorderParams */,
	{ NULL, RectangleParams_t0B5A63548DC33EE252AF81E242B719118C235A4B_marshal_pinvoke, RectangleParams_t0B5A63548DC33EE252AF81E242B719118C235A4B_marshal_pinvoke_back, RectangleParams_t0B5A63548DC33EE252AF81E242B719118C235A4B_marshal_pinvoke_cleanup, NULL, NULL, &RectangleParams_t0B5A63548DC33EE252AF81E242B719118C235A4B_0_0_0 } /* UnityEngine.UIElements.MeshGenerationContextUtils/RectangleParams */,
	{ NULL, TextParams_t943244753F8E3A49632BBEC7272DAEAA8E10546F_marshal_pinvoke, TextParams_t943244753F8E3A49632BBEC7272DAEAA8E10546F_marshal_pinvoke_back, TextParams_t943244753F8E3A49632BBEC7272DAEAA8E10546F_marshal_pinvoke_cleanup, NULL, NULL, &TextParams_t943244753F8E3A49632BBEC7272DAEAA8E10546F_0_0_0 } /* UnityEngine.UIElements.MeshGenerationContextUtils/TextParams */,
	{ NULL, EdgePair_t86812E9AC735E6688F232D798F8FDB68D84BE262_marshal_pinvoke, EdgePair_t86812E9AC735E6688F232D798F8FDB68D84BE262_marshal_pinvoke_back, EdgePair_t86812E9AC735E6688F232D798F8FDB68D84BE262_marshal_pinvoke_cleanup, NULL, NULL, &EdgePair_t86812E9AC735E6688F232D798F8FDB68D84BE262_0_0_0 } /* UnityEngine.Rendering.Universal.LibTessDotNet.MeshUtils/EdgePair */,
	{ DelegatePInvokeWrapper_BioControlFunc_tA25CF03804268D67A2A2298BA7CF0304908E1164, NULL, NULL, NULL, NULL, NULL, &BioControlFunc_tA25CF03804268D67A2A2298BA7CF0304908E1164_0_0_0 } /* Mono.Btls.MonoBtlsBioMono/BioControlFunc */,
	{ DelegatePInvokeWrapper_BioReadFunc_t13D991FB24C42BE3A5866565A417A46DAFCE2182, NULL, NULL, NULL, NULL, NULL, &BioReadFunc_t13D991FB24C42BE3A5866565A417A46DAFCE2182_0_0_0 } /* Mono.Btls.MonoBtlsBioMono/BioReadFunc */,
	{ DelegatePInvokeWrapper_BioWriteFunc_t7F203B8BD307C07BC5C115240617DC2098776716, NULL, NULL, NULL, NULL, NULL, &BioWriteFunc_t7F203B8BD307C07BC5C115240617DC2098776716_0_0_0 } /* Mono.Btls.MonoBtlsBioMono/BioWriteFunc */,
	{ DelegatePInvokeWrapper_PrintErrorsCallbackFunc_t269F5AA2AEDE407790495E35615D581F8E57DAF1, NULL, NULL, NULL, NULL, NULL, &PrintErrorsCallbackFunc_t269F5AA2AEDE407790495E35615D581F8E57DAF1_0_0_0 } /* Mono.Btls.MonoBtlsSsl/PrintErrorsCallbackFunc */,
	{ DelegatePInvokeWrapper_NativeSelectFunc_tB8204D9DD01EEA6E46BA2FDD005653A259AD8FCA, NULL, NULL, NULL, NULL, NULL, &NativeSelectFunc_tB8204D9DD01EEA6E46BA2FDD005653A259AD8FCA_0_0_0 } /* Mono.Btls.MonoBtlsSslCtx/NativeSelectFunc */,
	{ DelegatePInvokeWrapper_NativeServerNameFunc_tD685BC5D92B7FF9953F0BEB205BCF1BF9A2211FA, NULL, NULL, NULL, NULL, NULL, &NativeServerNameFunc_tD685BC5D92B7FF9953F0BEB205BCF1BF9A2211FA_0_0_0 } /* Mono.Btls.MonoBtlsSslCtx/NativeServerNameFunc */,
	{ DelegatePInvokeWrapper_NativeVerifyFunc_t90E561336E71A9644B88DCC9CDD6A63CE98667E7, NULL, NULL, NULL, NULL, NULL, &NativeVerifyFunc_t90E561336E71A9644B88DCC9CDD6A63CE98667E7_0_0_0 } /* Mono.Btls.MonoBtlsSslCtx/NativeVerifyFunc */,
	{ DelegatePInvokeWrapper_BySubjectFunc_t68E2B6BCEAD254F4C66501F0987E52D5ED8CF8DE, NULL, NULL, NULL, NULL, NULL, &BySubjectFunc_t68E2B6BCEAD254F4C66501F0987E52D5ED8CF8DE_0_0_0 } /* Mono.Btls.MonoBtlsX509LookupMono/BySubjectFunc */,
	{ DelegatePInvokeWrapper_GetSecurityInfoNativeCall_tDD06963B1C1773B84152EBDB0B73BB95D5E29A40, NULL, NULL, NULL, NULL, NULL, &GetSecurityInfoNativeCall_tDD06963B1C1773B84152EBDB0B73BB95D5E29A40_0_0_0 } /* System.Security.AccessControl.NativeObjectSecurity/GetSecurityInfoNativeCall */,
	{ DelegatePInvokeWrapper_SetSecurityInfoNativeCall_t01A2030E2D268FAB3C374416C4AC1CE3E33F5C37, NULL, NULL, NULL, NULL, NULL, &SetSecurityInfoNativeCall_t01A2030E2D268FAB3C374416C4AC1CE3E33F5C37_0_0_0 } /* System.Security.AccessControl.NativeObjectSecurity/SetSecurityInfoNativeCall */,
	{ DelegatePInvokeWrapper_OnNavMeshPreUpdate_t332BD19DBCB087D7DE3F4F48C1E8F6A4EAB691C7, NULL, NULL, NULL, NULL, NULL, &OnNavMeshPreUpdate_t332BD19DBCB087D7DE3F4F48C1E8F6A4EAB691C7_0_0_0 } /* UnityEngine.AI.NavMesh/OnNavMeshPreUpdate */,
	{ NULL, FocusableHierarchyTraversal_tE18EF688B7AC65FC273812175FCF84916E3E7E4B_marshal_pinvoke, FocusableHierarchyTraversal_tE18EF688B7AC65FC273812175FCF84916E3E7E4B_marshal_pinvoke_back, FocusableHierarchyTraversal_tE18EF688B7AC65FC273812175FCF84916E3E7E4B_marshal_pinvoke_cleanup, NULL, NULL, &FocusableHierarchyTraversal_tE18EF688B7AC65FC273812175FCF84916E3E7E4B_0_0_0 } /* UnityEngine.UIElements.NavigateFocusRing/FocusableHierarchyTraversal */,
	{ DelegatePInvokeWrapper_InvocationEntryDelegate_t6CCA2089ADE78BEAC44921F10D121BD51641A3C3, NULL, NULL, NULL, NULL, NULL, &InvocationEntryDelegate_t6CCA2089ADE78BEAC44921F10D121BD51641A3C3_0_0_0 } /* System.Threading.OSSpecificSynchronizationContext/InvocationEntryDelegate */,
	{ NULL, FormatParam_t76A31D70C9964751A9AAFD4CE6951437E6C1CD8E_marshal_pinvoke, FormatParam_t76A31D70C9964751A9AAFD4CE6951437E6C1CD8E_marshal_pinvoke_back, FormatParam_t76A31D70C9964751A9AAFD4CE6951437E6C1CD8E_marshal_pinvoke_cleanup, NULL, NULL, &FormatParam_t76A31D70C9964751A9AAFD4CE6951437E6C1CD8E_0_0_0 } /* System.ParameterizedStrings/FormatParam */,
	{ NULL, EmitParams_tE76279CE754C7B0A4ECDA7E294587AACB039FBA0_marshal_pinvoke, EmitParams_tE76279CE754C7B0A4ECDA7E294587AACB039FBA0_marshal_pinvoke_back, EmitParams_tE76279CE754C7B0A4ECDA7E294587AACB039FBA0_marshal_pinvoke_cleanup, NULL, NULL, &EmitParams_tE76279CE754C7B0A4ECDA7E294587AACB039FBA0_0_0_0 } /* UnityEngine.ParticleSystem/EmitParams */,
	{ DelegatePInvokeWrapper_OnCaptureResourceCreatedCallback_tA8D1E423E6D2EB046CA66BF468199752BA2A882B, NULL, NULL, NULL, NULL, NULL, &OnCaptureResourceCreatedCallback_tA8D1E423E6D2EB046CA66BF468199752BA2A882B_0_0_0 } /* UnityEngine.Windows.WebCam.PhotoCapture/OnCaptureResourceCreatedCallback */,
	{ DelegatePInvokeWrapper_OnCapturedToDiskCallback_t184CFBFA312A113D865AB3348AD2FCC9F2B8C87A, NULL, NULL, NULL, NULL, NULL, &OnCapturedToDiskCallback_t184CFBFA312A113D865AB3348AD2FCC9F2B8C87A_0_0_0 } /* UnityEngine.Windows.WebCam.PhotoCapture/OnCapturedToDiskCallback */,
	{ DelegatePInvokeWrapper_OnPhotoModeStartedCallback_tCC911AAFA0C56D78D8C3AFAB4F10C6D64AFB8F28, NULL, NULL, NULL, NULL, NULL, &OnPhotoModeStartedCallback_tCC911AAFA0C56D78D8C3AFAB4F10C6D64AFB8F28_0_0_0 } /* UnityEngine.Windows.WebCam.PhotoCapture/OnPhotoModeStartedCallback */,
	{ DelegatePInvokeWrapper_OnPhotoModeStoppedCallback_t0FBC7D27E79939CF7FE318FA275FDEE6330BB28B, NULL, NULL, NULL, NULL, NULL, &OnPhotoModeStoppedCallback_t0FBC7D27E79939CF7FE318FA275FDEE6330BB28B_0_0_0 } /* UnityEngine.Windows.WebCam.PhotoCapture/OnPhotoModeStoppedCallback */,
	{ DelegatePInvokeWrapper_ErrorDelegate_t0E4D50125D761FB7F662E5A79E9AA8D915BB2246, NULL, NULL, NULL, NULL, NULL, &ErrorDelegate_t0E4D50125D761FB7F662E5A79E9AA8D915BB2246_0_0_0 } /* UnityEngine.Windows.Speech.PhraseRecognitionSystem/ErrorDelegate */,
	{ DelegatePInvokeWrapper_StatusDelegate_t1DAF325F3F4C4209ACB9711E4D9B92956BF9D39D, NULL, NULL, NULL, NULL, NULL, &StatusDelegate_t1DAF325F3F4C4209ACB9711E4D9B92956BF9D39D_0_0_0 } /* UnityEngine.Windows.Speech.PhraseRecognitionSystem/StatusDelegate */,
	{ DelegatePInvokeWrapper_CreateOutputMethod_tD18AFE3B69E6DDD913D82D5FA1D5D909CEEC8509, NULL, NULL, NULL, NULL, NULL, &CreateOutputMethod_tD18AFE3B69E6DDD913D82D5FA1D5D909CEEC8509_0_0_0 } /* UnityEngine.Playables.PlayableBinding/CreateOutputMethod */,
	{ DelegatePInvokeWrapper_UpdateFunction_t1C48B7EECBE47AC123A9D9D7D9D2A9EE951C56C4, NULL, NULL, NULL, NULL, NULL, &UpdateFunction_t1C48B7EECBE47AC123A9D9D7D9D2A9EE951C56C4_0_0_0 } /* UnityEngine.LowLevel.PlayerLoopSystem/UpdateFunction */,
	{ NULL, PointerLocation_t4E582463D283A22822997C2841D5E1A30D16FCF6_marshal_pinvoke, PointerLocation_t4E582463D283A22822997C2841D5E1A30D16FCF6_marshal_pinvoke_back, PointerLocation_t4E582463D283A22822997C2841D5E1A30D16FCF6_marshal_pinvoke_cleanup, NULL, NULL, &PointerLocation_t4E582463D283A22822997C2841D5E1A30D16FCF6_0_0_0 } /* UnityEngine.UIElements.PointerDeviceState/PointerLocation */,
	{ NULL, BrickMeta_t75B625970B160751665565BB3039980A81DED1D1_marshal_pinvoke, BrickMeta_t75B625970B160751665565BB3039980A81DED1D1_marshal_pinvoke_back, BrickMeta_t75B625970B160751665565BB3039980A81DED1D1_marshal_pinvoke_cleanup, NULL, NULL, &BrickMeta_t75B625970B160751665565BB3039980A81DED1D1_0_0_0 } /* UnityEngine.Experimental.Rendering.ProbeBrickIndex/BrickMeta */,
	{ NULL, VoxelMeta_t68E17D649E8573BDE8903A4931A80C316245FF46_marshal_pinvoke, VoxelMeta_t68E17D649E8573BDE8903A4931A80C316245FF46_marshal_pinvoke_back, VoxelMeta_t68E17D649E8573BDE8903A4931A80C316245FF46_marshal_pinvoke_cleanup, NULL, NULL, &VoxelMeta_t68E17D649E8573BDE8903A4931A80C316245FF46_0_0_0 } /* UnityEngine.Experimental.Rendering.ProbeBrickIndex/VoxelMeta */,
	{ NULL, DataLocation_t6BEE413AC50D21B058D298D198D7C4852F1443AF_marshal_pinvoke, DataLocation_t6BEE413AC50D21B058D298D198D7C4852F1443AF_marshal_pinvoke_back, DataLocation_t6BEE413AC50D21B058D298D198D7C4852F1443AF_marshal_pinvoke_cleanup, NULL, NULL, &DataLocation_t6BEE413AC50D21B058D298D198D7C4852F1443AF_0_0_0 } /* UnityEngine.Experimental.Rendering.ProbeBrickPool/DataLocation */,
	{ NULL, RuntimeResources_tF6D3DA32C48B25FE5365AFCD591ABB471B1E0C5A_marshal_pinvoke, RuntimeResources_tF6D3DA32C48B25FE5365AFCD591ABB471B1E0C5A_marshal_pinvoke_back, RuntimeResources_tF6D3DA32C48B25FE5365AFCD591ABB471B1E0C5A_marshal_pinvoke_cleanup, NULL, NULL, &RuntimeResources_tF6D3DA32C48B25FE5365AFCD591ABB471B1E0C5A_0_0_0 } /* UnityEngine.Experimental.Rendering.ProbeReferenceVolume/RuntimeResources */,
	{ NULL, SerializableAssetItem_t6A8C418A5D6068E49195CA2F1908A36B36423416_marshal_pinvoke, SerializableAssetItem_t6A8C418A5D6068E49195CA2F1908A36B36423416_marshal_pinvoke_back, SerializableAssetItem_t6A8C418A5D6068E49195CA2F1908A36B36423416_marshal_pinvoke_cleanup, NULL, NULL, &SerializableAssetItem_t6A8C418A5D6068E49195CA2F1908A36B36423416_0_0_0 } /* UnityEngine.Experimental.Rendering.ProbeVolumePerSceneData/SerializableAssetItem */,
	{ NULL, SerializableBoundItem_tAAC617FC15812D4C15EA67F564DBBB97C91CA76C_marshal_pinvoke, SerializableBoundItem_tAAC617FC15812D4C15EA67F564DBBB97C91CA76C_marshal_pinvoke_back, SerializableBoundItem_tAAC617FC15812D4C15EA67F564DBBB97C91CA76C_marshal_pinvoke_cleanup, NULL, NULL, &SerializableBoundItem_tAAC617FC15812D4C15EA67F564DBBB97C91CA76C_0_0_0 } /* UnityEngine.Experimental.Rendering.ProbeVolumeSceneData/SerializableBoundItem */,
	{ NULL, SerializableHasPVItem_tCB43CF2DDF020627DE121934A0031B5A4A418622_marshal_pinvoke, SerializableHasPVItem_tCB43CF2DDF020627DE121934A0031B5A4A418622_marshal_pinvoke_back, SerializableHasPVItem_tCB43CF2DDF020627DE121934A0031B5A4A418622_marshal_pinvoke_cleanup, NULL, NULL, &SerializableHasPVItem_tCB43CF2DDF020627DE121934A0031B5A4A418622_0_0_0 } /* UnityEngine.Experimental.Rendering.ProbeVolumeSceneData/SerializableHasPVItem */,
	{ NULL, SerializablePVBakeSettings_t4E5B089BA357A2E91A67F570519556876B797877_marshal_pinvoke, SerializablePVBakeSettings_t4E5B089BA357A2E91A67F570519556876B797877_marshal_pinvoke_back, SerializablePVBakeSettings_t4E5B089BA357A2E91A67F570519556876B797877_marshal_pinvoke_cleanup, NULL, NULL, &SerializablePVBakeSettings_t4E5B089BA357A2E91A67F570519556876B797877_0_0_0 } /* UnityEngine.Experimental.Rendering.ProbeVolumeSceneData/SerializablePVBakeSettings */,
	{ NULL, SerializablePVProfile_tD3D31A9B22592CE78C6B023E2A4DD629680BD069_marshal_pinvoke, SerializablePVProfile_tD3D31A9B22592CE78C6B023E2A4DD629680BD069_marshal_pinvoke_back, SerializablePVProfile_tD3D31A9B22592CE78C6B023E2A4DD629680BD069_marshal_pinvoke_cleanup, NULL, NULL, &SerializablePVProfile_tD3D31A9B22592CE78C6B023E2A4DD629680BD069_0_0_0 } /* UnityEngine.Experimental.Rendering.ProbeVolumeSceneData/SerializablePVProfile */,
	{ NULL, ProcInfo_t79019AEB58EDD7089B790325C2EBE830E1F458D2_marshal_pinvoke, ProcInfo_t79019AEB58EDD7089B790325C2EBE830E1F458D2_marshal_pinvoke_back, ProcInfo_t79019AEB58EDD7089B790325C2EBE830E1F458D2_marshal_pinvoke_cleanup, NULL, NULL, &ProcInfo_t79019AEB58EDD7089B790325C2EBE830E1F458D2_0_0_0 } /* System.Diagnostics.Process/ProcInfo */,
	{ DelegatePInvokeWrapper_GetRayIntersectionAllCallback_t52E7AE4ECEA3F9744FF7F8448F852C872A70315C, NULL, NULL, NULL, NULL, NULL, &GetRayIntersectionAllCallback_t52E7AE4ECEA3F9744FF7F8448F852C872A70315C_0_0_0 } /* UnityEngine.UI.ReflectionMethodsCache/GetRayIntersectionAllCallback */,
	{ DelegatePInvokeWrapper_GetRayIntersectionAllNonAllocCallback_t28D7ACEBBE525DE0CBEA67986E4C3891D694F980, NULL, NULL, NULL, NULL, NULL, &GetRayIntersectionAllNonAllocCallback_t28D7ACEBBE525DE0CBEA67986E4C3891D694F980_0_0_0 } /* UnityEngine.UI.ReflectionMethodsCache/GetRayIntersectionAllNonAllocCallback */,
	{ DelegatePInvokeWrapper_GetRaycastNonAllocCallback_tC3DA6EE6063FE663DD0A9FC52439D825DE4A1FFC, NULL, NULL, NULL, NULL, NULL, &GetRaycastNonAllocCallback_tC3DA6EE6063FE663DD0A9FC52439D825DE4A1FFC_0_0_0 } /* UnityEngine.UI.ReflectionMethodsCache/GetRaycastNonAllocCallback */,
	{ DelegatePInvokeWrapper_Raycast2DCallback_tC7E4C51859884370CFA01C0DD124F214F46E08E0, NULL, NULL, NULL, NULL, NULL, &Raycast2DCallback_tC7E4C51859884370CFA01C0DD124F214F46E08E0_0_0_0 } /* UnityEngine.UI.ReflectionMethodsCache/Raycast2DCallback */,
	{ DelegatePInvokeWrapper_Raycast3DCallback_t6D90FA1FB092312B3B52812191581F209A9C2B4A, NULL, NULL, NULL, NULL, NULL, &Raycast3DCallback_t6D90FA1FB092312B3B52812191581F209A9C2B4A_0_0_0 } /* UnityEngine.UI.ReflectionMethodsCache/Raycast3DCallback */,
	{ DelegatePInvokeWrapper_RaycastAllCallback_t4AFFDCDAA6F02DD74E1E2DE455BA011D82BED47A, NULL, NULL, NULL, NULL, NULL, &RaycastAllCallback_t4AFFDCDAA6F02DD74E1E2DE455BA011D82BED47A_0_0_0 } /* UnityEngine.UI.ReflectionMethodsCache/RaycastAllCallback */,
	{ NULL, CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31_marshal_pinvoke, CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31_marshal_pinvoke_back, CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31_marshal_pinvoke_cleanup, NULL, NULL, &CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31_0_0_0 } /* System.Text.RegularExpressions.Regex/CachedCodeEntryKey */,
	{ NULL, LowerCaseMapping_t3E26F9E4ED2CCDA7404B4E4C123B0175FF5F8FF1_marshal_pinvoke, LowerCaseMapping_t3E26F9E4ED2CCDA7404B4E4C123B0175FF5F8FF1_marshal_pinvoke_back, LowerCaseMapping_t3E26F9E4ED2CCDA7404B4E4C123B0175FF5F8FF1_marshal_pinvoke_cleanup, NULL, NULL, &LowerCaseMapping_t3E26F9E4ED2CCDA7404B4E4C123B0175FF5F8FF1_0_0_0 } /* System.Text.RegularExpressions.RegexCharClass/LowerCaseMapping */,
	{ NULL, SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC_marshal_pinvoke, SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC_marshal_pinvoke_back, SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC_marshal_pinvoke_cleanup, NULL, NULL, &SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC_0_0_0 } /* System.Text.RegularExpressions.RegexCharClass/SingleRange */,
	{ DelegatePInvokeWrapper_UpdatedEventHandler_tB0D5A5BA322FE093894992C29DCF51E7E12579C4, NULL, NULL, NULL, NULL, NULL, &UpdatedEventHandler_tB0D5A5BA322FE093894992C29DCF51E7E12579C4_0_0_0 } /* UnityEngine.RemoteSettings/UpdatedEventHandler */,
	{ NULL, DepthOrderedDirtyTracking_t7972148BB4524E0E788C8D94A005C3BAF8C189A4_marshal_pinvoke, DepthOrderedDirtyTracking_t7972148BB4524E0E788C8D94A005C3BAF8C189A4_marshal_pinvoke_back, DepthOrderedDirtyTracking_t7972148BB4524E0E788C8D94A005C3BAF8C189A4_marshal_pinvoke_cleanup, NULL, NULL, &DepthOrderedDirtyTracking_t7972148BB4524E0E788C8D94A005C3BAF8C189A4_0_0_0 } /* UnityEngine.UIElements.UIR.RenderChain/DepthOrderedDirtyTracking */,
	{ NULL, RenderNodeData_t7527D1643CC280CE2B2E40AB9F5154615B7A99AE_marshal_pinvoke, RenderNodeData_t7527D1643CC280CE2B2E40AB9F5154615B7A99AE_marshal_pinvoke_back, RenderNodeData_t7527D1643CC280CE2B2E40AB9F5154615B7A99AE_marshal_pinvoke_cleanup, NULL, NULL, &RenderNodeData_t7527D1643CC280CE2B2E40AB9F5154615B7A99AE_0_0_0 } /* UnityEngine.UIElements.UIR.RenderChain/RenderNodeData */,
	{ NULL, CompiledPassInfo_t7434C596A1EA90A428DAECAA3FFB87314BC84615_marshal_pinvoke, CompiledPassInfo_t7434C596A1EA90A428DAECAA3FFB87314BC84615_marshal_pinvoke_back, CompiledPassInfo_t7434C596A1EA90A428DAECAA3FFB87314BC84615_marshal_pinvoke_cleanup, NULL, NULL, &CompiledPassInfo_t7434C596A1EA90A428DAECAA3FFB87314BC84615_0_0_0 } /* UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraph/CompiledPassInfo */,
	{ NULL, CompiledResourceInfo_t1B258600AF5819B19709F6E4FF0D2803D039336A_marshal_pinvoke, CompiledResourceInfo_t1B258600AF5819B19709F6E4FF0D2803D039336A_marshal_pinvoke_back, CompiledResourceInfo_t1B258600AF5819B19709F6E4FF0D2803D039336A_marshal_pinvoke_cleanup, NULL, NULL, &CompiledResourceInfo_t1B258600AF5819B19709F6E4FF0D2803D039336A_0_0_0 } /* UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraph/CompiledResourceInfo */,
	{ NULL, PassDebugData_tE911DB0148519C33C773511F2D92F57AF1B6D258_marshal_pinvoke, PassDebugData_tE911DB0148519C33C773511F2D92F57AF1B6D258_marshal_pinvoke_back, PassDebugData_tE911DB0148519C33C773511F2D92F57AF1B6D258_marshal_pinvoke_cleanup, NULL, NULL, &PassDebugData_tE911DB0148519C33C773511F2D92F57AF1B6D258_0_0_0 } /* UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphDebugData/PassDebugData */,
	{ NULL, ResourceDebugData_t83301B4E44B1F0B49486E21F019AFEE444809A9B_marshal_pinvoke, ResourceDebugData_t83301B4E44B1F0B49486E21F019AFEE444809A9B_marshal_pinvoke_back, ResourceDebugData_t83301B4E44B1F0B49486E21F019AFEE444809A9B_marshal_pinvoke_cleanup, NULL, NULL, &ResourceDebugData_t83301B4E44B1F0B49486E21F019AFEE444809A9B_0_0_0 } /* UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphDebugData/ResourceDebugData */,
	{ NULL, HitInfo_t34AF939575E1C059D581AB7ED8F039BCFFC70314_marshal_pinvoke, HitInfo_t34AF939575E1C059D581AB7ED8F039BCFFC70314_marshal_pinvoke_back, HitInfo_t34AF939575E1C059D581AB7ED8F039BCFFC70314_marshal_pinvoke_cleanup, NULL, NULL, &HitInfo_t34AF939575E1C059D581AB7ED8F039BCFFC70314_0_0_0 } /* UnityEngine.SendMouseEvents/HitInfo */,
	{ NULL, Edge_tC0E866D7F28E832CE7BEF95C87BECCD97FB09AAB_marshal_pinvoke, Edge_tC0E866D7F28E832CE7BEF95C87BECCD97FB09AAB_marshal_pinvoke_back, Edge_tC0E866D7F28E832CE7BEF95C87BECCD97FB09AAB_marshal_pinvoke_cleanup, NULL, NULL, &Edge_tC0E866D7F28E832CE7BEF95C87BECCD97FB09AAB_0_0_0 } /* UnityEngine.Rendering.Universal.ShadowUtility/Edge */,
	{ NULL, Escape_tBDF8B9DE3CB50EC7389A1FCAD8AE65F6AA289178_marshal_pinvoke, Escape_tBDF8B9DE3CB50EC7389A1FCAD8AE65F6AA289178_marshal_pinvoke_back, Escape_tBDF8B9DE3CB50EC7389A1FCAD8AE65F6AA289178_marshal_pinvoke_cleanup, NULL, NULL, &Escape_tBDF8B9DE3CB50EC7389A1FCAD8AE65F6AA289178_0_0_0 } /* Mono.Globalization.Unicode.SimpleCollator/Escape */,
	{ NULL, SmtpResponse_tCD2A8DC7B0BD3208817AA49BDB60BC32BD62C854_marshal_pinvoke, SmtpResponse_tCD2A8DC7B0BD3208817AA49BDB60BC32BD62C854_marshal_pinvoke_back, SmtpResponse_tCD2A8DC7B0BD3208817AA49BDB60BC32BD62C854_marshal_pinvoke_cleanup, NULL, NULL, &SmtpResponse_tCD2A8DC7B0BD3208817AA49BDB60BC32BD62C854_0_0_0 } /* System.Net.Mail.SmtpClient/SmtpResponse */,
	{ DelegatePInvokeWrapper_SendFileHandler_tFBB94763A61E5EC1AF7F81EC6F05F460B913B902, NULL, NULL, NULL, NULL, NULL, &SendFileHandler_tFBB94763A61E5EC1AF7F81EC6F05F460B913B902_0_0_0 } /* System.Net.Sockets.Socket/SendFileHandler */,
	{ NULL, ReadWriteParameters_t14911E85F7252B5A39D9A53466C7EDE243327033_marshal_pinvoke, ReadWriteParameters_t14911E85F7252B5A39D9A53466C7EDE243327033_marshal_pinvoke_back, ReadWriteParameters_t14911E85F7252B5A39D9A53466C7EDE243327033_marshal_pinvoke_cleanup, NULL, NULL, &ReadWriteParameters_t14911E85F7252B5A39D9A53466C7EDE243327033_0_0_0 } /* System.IO.Stream/ReadWriteParameters */,
	{ NULL, PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8_marshal_pinvoke, PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8_marshal_pinvoke_back, PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8_marshal_pinvoke_cleanup, NULL, NULL, &PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8_0_0_0 } /* UnityEngine.UIElements.StyleComplexSelector/PseudoStateData */,
	{ NULL, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814_marshal_pinvoke, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814_marshal_pinvoke_back, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814_marshal_pinvoke_cleanup, NULL, NULL, &ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814_0_0_0 } /* UnityEngine.UIElements.StylePropertyAnimationSystem/ElementPropertyPair */,
	{ NULL, Enumerator_tA61A6E560BAB8F96C2471024F8FBFF2B6BC1F1BB_marshal_pinvoke, Enumerator_tA61A6E560BAB8F96C2471024F8FBFF2B6BC1F1BB_marshal_pinvoke_back, Enumerator_tA61A6E560BAB8F96C2471024F8FBFF2B6BC1F1BB_marshal_pinvoke_cleanup, NULL, NULL, &Enumerator_tA61A6E560BAB8F96C2471024F8FBFF2B6BC1F1BB_0_0_0 } /* UnityEngine.UIElements.StylePropertyNameCollection/Enumerator */,
	{ NULL, ImportStruct_t8CE0AC0405305E6E27224A07CF153167E99C98B1_marshal_pinvoke, ImportStruct_t8CE0AC0405305E6E27224A07CF153167E99C98B1_marshal_pinvoke_back, ImportStruct_t8CE0AC0405305E6E27224A07CF153167E99C98B1_marshal_pinvoke_cleanup, NULL, NULL, &ImportStruct_t8CE0AC0405305E6E27224A07CF153167E99C98B1_0_0_0 } /* UnityEngine.UIElements.StyleSheet/ImportStruct */,
	{ NULL, ResolveContext_tEF37DBA22D641E4FE1568C5EBE1605A98D86C992_marshal_pinvoke, ResolveContext_tEF37DBA22D641E4FE1568C5EBE1605A98D86C992_marshal_pinvoke_back, ResolveContext_tEF37DBA22D641E4FE1568C5EBE1605A98D86C992_marshal_pinvoke_cleanup, NULL, NULL, &ResolveContext_tEF37DBA22D641E4FE1568C5EBE1605A98D86C992_0_0_0 } /* UnityEngine.UIElements.StyleVariableResolver/ResolveContext */,
	{ NULL, AttributeOverride_t58F1DF22E69714D48ECBEEAD266D443A858BADEF_marshal_pinvoke, AttributeOverride_t58F1DF22E69714D48ECBEEAD266D443A858BADEF_marshal_pinvoke_back, AttributeOverride_t58F1DF22E69714D48ECBEEAD266D443A858BADEF_marshal_pinvoke_cleanup, NULL, NULL, &AttributeOverride_t58F1DF22E69714D48ECBEEAD266D443A858BADEF_0_0_0 } /* UnityEngine.UIElements.TemplateAsset/AttributeOverride */,
	{ DelegatePInvokeWrapper_OnDetectFocusChangeFunction_tB31D458403A6818419AAAFBA0049B72060284326, NULL, NULL, NULL, NULL, NULL, &OnDetectFocusChangeFunction_tB31D458403A6818419AAAFBA0049B72060284326_0_0_0 } /* UnityEngine.UIElements.TextEditorEngine/OnDetectFocusChangeFunction */,
	{ DelegatePInvokeWrapper_OnIndexChangeFunction_t85C95CE0E180FEF496A57F758911AD7D1562043C, NULL, NULL, NULL, NULL, NULL, &OnIndexChangeFunction_t85C95CE0E180FEF496A57F758911AD7D1562043C_0_0_0 } /* UnityEngine.UIElements.TextEditorEngine/OnIndexChangeFunction */,
	{ NULL, SpecialCharacter_t869F8BE65A7FE32AFD4196118258F49A63D8E2BD_marshal_pinvoke, SpecialCharacter_t869F8BE65A7FE32AFD4196118258F49A63D8E2BD_marshal_pinvoke_back, SpecialCharacter_t869F8BE65A7FE32AFD4196118258F49A63D8E2BD_marshal_pinvoke_cleanup, NULL, NULL, &SpecialCharacter_t869F8BE65A7FE32AFD4196118258F49A63D8E2BD_0_0_0 } /* UnityEngine.TextCore.Text.TextGenerator/SpecialCharacter */,
	{ NULL, FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3_marshal_pinvoke, FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3_marshal_pinvoke_back, FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3_marshal_pinvoke_cleanup, NULL, NULL, &FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3_0_0_0 } /* UnityEngine.TextCore.Text.TextResourceManager/FontAssetRef */,
	{ NULL, FontReferenceMap_t1C0CECF3F0F650BE4A881A50A25EFB26965E7831_marshal_pinvoke, FontReferenceMap_t1C0CECF3F0F650BE4A881A50A25EFB26965E7831_marshal_pinvoke_back, FontReferenceMap_t1C0CECF3F0F650BE4A881A50A25EFB26965E7831_marshal_pinvoke_cleanup, NULL, NULL, &FontReferenceMap_t1C0CECF3F0F650BE4A881A50A25EFB26965E7831_0_0_0 } /* UnityEngine.TextCore.Text.TextSettings/FontReferenceMap */,
	{ NULL, BlitInfo_t6D4C0580BBEF65F5EAD39FB6DBC85F360CF6A357_marshal_pinvoke, BlitInfo_t6D4C0580BBEF65F5EAD39FB6DBC85F360CF6A357_marshal_pinvoke_back, BlitInfo_t6D4C0580BBEF65F5EAD39FB6DBC85F360CF6A357_marshal_pinvoke_cleanup, NULL, NULL, &BlitInfo_t6D4C0580BBEF65F5EAD39FB6DBC85F360CF6A357_0_0_0 } /* UnityEngine.UIElements.UIR.TextureBlitter/BlitInfo */,
	{ NULL, TextureInfo_t581C305A0444F786E0E7405054714685BE3A5A5B_marshal_pinvoke, TextureInfo_t581C305A0444F786E0E7405054714685BE3A5A5B_marshal_pinvoke_back, TextureInfo_t581C305A0444F786E0E7405054714685BE3A5A5B_marshal_pinvoke_cleanup, NULL, NULL, &TextureInfo_t581C305A0444F786E0E7405054714685BE3A5A5B_0_0_0 } /* UnityEngine.UIElements.TextureRegistry/TextureInfo */,
	{ NULL, FormatLiterals_tB7BAA4DA8EAC1AB8D825A2D9C446C9FCD9BBD94A_marshal_pinvoke, FormatLiterals_tB7BAA4DA8EAC1AB8D825A2D9C446C9FCD9BBD94A_marshal_pinvoke_back, FormatLiterals_tB7BAA4DA8EAC1AB8D825A2D9C446C9FCD9BBD94A_marshal_pinvoke_cleanup, NULL, NULL, &FormatLiterals_tB7BAA4DA8EAC1AB8D825A2D9C446C9FCD9BBD94A_0_0_0 } /* System.Globalization.TimeSpanFormat/FormatLiterals */,
	{ NULL, TimeSpanRawInfo_tDB52E4C9854A909DB47D2FEF0A1114A57F3C29FA_marshal_pinvoke, TimeSpanRawInfo_tDB52E4C9854A909DB47D2FEF0A1114A57F3C29FA_marshal_pinvoke_back, TimeSpanRawInfo_tDB52E4C9854A909DB47D2FEF0A1114A57F3C29FA_marshal_pinvoke_cleanup, NULL, NULL, &TimeSpanRawInfo_tDB52E4C9854A909DB47D2FEF0A1114A57F3C29FA_0_0_0 } /* System.Globalization.TimeSpanParse/TimeSpanRawInfo */,
	{ NULL, TimeSpanResult_tD0B15293C8224251926B8E7F9D699E00A0CB10B7_marshal_pinvoke, TimeSpanResult_tD0B15293C8224251926B8E7F9D699E00A0CB10B7_marshal_pinvoke_back, TimeSpanResult_tD0B15293C8224251926B8E7F9D699E00A0CB10B7_marshal_pinvoke_cleanup, NULL, NULL, &TimeSpanResult_tD0B15293C8224251926B8E7F9D699E00A0CB10B7_0_0_0 } /* System.Globalization.TimeSpanParse/TimeSpanResult */,
	{ NULL, DYNAMIC_TIME_ZONE_INFORMATION_t5E5AC77C219A3CC0783CECA5AE7CECB2260CC16E_marshal_pinvoke, DYNAMIC_TIME_ZONE_INFORMATION_t5E5AC77C219A3CC0783CECA5AE7CECB2260CC16E_marshal_pinvoke_back, DYNAMIC_TIME_ZONE_INFORMATION_t5E5AC77C219A3CC0783CECA5AE7CECB2260CC16E_marshal_pinvoke_cleanup, NULL, NULL, &DYNAMIC_TIME_ZONE_INFORMATION_t5E5AC77C219A3CC0783CECA5AE7CECB2260CC16E_0_0_0 } /* System.TimeZoneInfo/DYNAMIC_TIME_ZONE_INFORMATION */,
	{ NULL, TransitionTime_tE1A32FD9A7AC39502239D3C9A4EA83ED2AD81823_marshal_pinvoke, TransitionTime_tE1A32FD9A7AC39502239D3C9A4EA83ED2AD81823_marshal_pinvoke_back, TransitionTime_tE1A32FD9A7AC39502239D3C9A4EA83ED2AD81823_marshal_pinvoke_cleanup, NULL, NULL, &TransitionTime_tE1A32FD9A7AC39502239D3C9A4EA83ED2AD81823_0_0_0 } /* System.TimeZoneInfo/TransitionTime */,
	{ NULL, TreeViewItemWrapper_t8130863A8182C5BF6925A88AF5E77192A4D519CE_marshal_pinvoke, TreeViewItemWrapper_t8130863A8182C5BF6925A88AF5E77192A4D519CE_marshal_pinvoke_back, TreeViewItemWrapper_t8130863A8182C5BF6925A88AF5E77192A4D519CE_marshal_pinvoke_cleanup, NULL, NULL, &TreeViewItemWrapper_t8130863A8182C5BF6925A88AF5E77192A4D519CE_0_0_0 } /* UnityEngine.UIElements.TreeView/TreeViewItemWrapper */,
	{ NULL, ClosingInfo_t2DD9FDAA81DB13384355D75E956D24D1594C9D14_marshal_pinvoke, ClosingInfo_t2DD9FDAA81DB13384355D75E956D24D1594C9D14_marshal_pinvoke_back, ClosingInfo_t2DD9FDAA81DB13384355D75E956D24D1594C9D14_marshal_pinvoke_cleanup, NULL, NULL, &ClosingInfo_t2DD9FDAA81DB13384355D75E956D24D1594C9D14_0_0_0 } /* UnityEngine.UIElements.UIR.Implementation.UIRStylePainter/ClosingInfo */,
	{ NULL, Entry_tB8765CA56422E2C92887314844384843688DCB9F_marshal_pinvoke, Entry_tB8765CA56422E2C92887314844384843688DCB9F_marshal_pinvoke_back, Entry_tB8765CA56422E2C92887314844384843688DCB9F_marshal_pinvoke_cleanup, NULL, NULL, &Entry_tB8765CA56422E2C92887314844384843688DCB9F_0_0_0 } /* UnityEngine.UIElements.UIR.Implementation.UIRStylePainter/Entry */,
	{ NULL, AllocToFree_tC46982856CB8220A92BB724F5FB75CCCD09C67D8_marshal_pinvoke, AllocToFree_tC46982856CB8220A92BB724F5FB75CCCD09C67D8_marshal_pinvoke_back, AllocToFree_tC46982856CB8220A92BB724F5FB75CCCD09C67D8_marshal_pinvoke_cleanup, NULL, NULL, &AllocToFree_tC46982856CB8220A92BB724F5FB75CCCD09C67D8_0_0_0 } /* UnityEngine.UIElements.UIR.UIRenderDevice/AllocToFree */,
	{ NULL, AllocToUpdate_tD0221D0ABC5378DDE5AAB1DAA219C337E562B512_marshal_pinvoke, AllocToUpdate_tD0221D0ABC5378DDE5AAB1DAA219C337E562B512_marshal_pinvoke_back, AllocToUpdate_tD0221D0ABC5378DDE5AAB1DAA219C337E562B512_marshal_pinvoke_cleanup, NULL, NULL, &AllocToUpdate_tD0221D0ABC5378DDE5AAB1DAA219C337E562B512_0_0_0 } /* UnityEngine.UIElements.UIR.UIRenderDevice/AllocToUpdate */,
	{ NULL, DeviceToFree_tF2AD2D5F5C1936F25516AEF0736CF4BCA1B3052B_marshal_pinvoke, DeviceToFree_tF2AD2D5F5C1936F25516AEF0736CF4BCA1B3052B_marshal_pinvoke_back, DeviceToFree_tF2AD2D5F5C1936F25516AEF0736CF4BCA1B3052B_marshal_pinvoke_cleanup, NULL, NULL, &DeviceToFree_tF2AD2D5F5C1936F25516AEF0736CF4BCA1B3052B_0_0_0 } /* UnityEngine.UIElements.UIR.UIRenderDevice/DeviceToFree */,
	{ NULL, EvaluationState_t91A908747DD184A56AA6402529B965E07E555567_marshal_pinvoke, EvaluationState_t91A908747DD184A56AA6402529B965E07E555567_marshal_pinvoke_back, EvaluationState_t91A908747DD184A56AA6402529B965E07E555567_marshal_pinvoke_cleanup, NULL, NULL, &EvaluationState_t91A908747DD184A56AA6402529B965E07E555567_0_0_0 } /* UnityEngine.UIElements.UIR.UIRenderDevice/EvaluationState */,
	{ NULL, DateMapping_tD71D0AF5C7C6CB4F9517C292B1B61D7AF7CFCCFD_marshal_pinvoke, DateMapping_tD71D0AF5C7C6CB4F9517C292B1B61D7AF7CFCCFD_marshal_pinvoke_back, DateMapping_tD71D0AF5C7C6CB4F9517C292B1B61D7AF7CFCCFD_marshal_pinvoke_cleanup, NULL, NULL, &DateMapping_tD71D0AF5C7C6CB4F9517C292B1B61D7AF7CFCCFD_0_0_0 } /* System.Globalization.UmAlQuraCalendar/DateMapping */,
	{ NULL, WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44_marshal_pinvoke, WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44_marshal_pinvoke_back, WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44_marshal_pinvoke_cleanup, NULL, NULL, &WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44_0_0_0 } /* UnityEngine.UnitySynchronizationContext/WorkRequest */,
	{ NULL, unitytls_interface_struct_tFD4B67EBFBE5D7FF212193507C3517DBA60978ED_marshal_pinvoke, unitytls_interface_struct_tFD4B67EBFBE5D7FF212193507C3517DBA60978ED_marshal_pinvoke_back, unitytls_interface_struct_tFD4B67EBFBE5D7FF212193507C3517DBA60978ED_marshal_pinvoke_cleanup, NULL, NULL, &unitytls_interface_struct_tFD4B67EBFBE5D7FF212193507C3517DBA60978ED_0_0_0 } /* Mono.Unity.UnityTls/unitytls_interface_struct */,
	{ NULL, unitytls_tlsctx_callbacks_t348AE3D333ACBB2F17D4D7B8412256357B39B568_marshal_pinvoke, unitytls_tlsctx_callbacks_t348AE3D333ACBB2F17D4D7B8412256357B39B568_marshal_pinvoke_back, unitytls_tlsctx_callbacks_t348AE3D333ACBB2F17D4D7B8412256357B39B568_marshal_pinvoke_cleanup, NULL, NULL, &unitytls_tlsctx_callbacks_t348AE3D333ACBB2F17D4D7B8412256357B39B568_0_0_0 } /* Mono.Unity.UnityTls/unitytls_tlsctx_callbacks */,
	{ DelegatePInvokeWrapper_unitytls_tlsctx_certificate_callback_tB2FEBFA5D27CFA86544C06451270B36D77F2932C, NULL, NULL, NULL, NULL, NULL, &unitytls_tlsctx_certificate_callback_tB2FEBFA5D27CFA86544C06451270B36D77F2932C_0_0_0 } /* Mono.Unity.UnityTls/unitytls_tlsctx_certificate_callback */,
	{ DelegatePInvokeWrapper_unitytls_tlsctx_read_callback_tDBE877327789CABE940C2A724EC9A5D142318851, NULL, NULL, NULL, NULL, NULL, &unitytls_tlsctx_read_callback_tDBE877327789CABE940C2A724EC9A5D142318851_0_0_0 } /* Mono.Unity.UnityTls/unitytls_tlsctx_read_callback */,
	{ DelegatePInvokeWrapper_unitytls_tlsctx_trace_callback_tAC1169E423F6EBDA60CDD5D33E1795A8811E0BE6, NULL, NULL, NULL, NULL, NULL, &unitytls_tlsctx_trace_callback_tAC1169E423F6EBDA60CDD5D33E1795A8811E0BE6_0_0_0 } /* Mono.Unity.UnityTls/unitytls_tlsctx_trace_callback */,
	{ DelegatePInvokeWrapper_unitytls_tlsctx_write_callback_t5D4B64AD846D04E819A49689F7EAA47365636611, NULL, NULL, NULL, NULL, NULL, &unitytls_tlsctx_write_callback_t5D4B64AD846D04E819A49689F7EAA47365636611_0_0_0 } /* Mono.Unity.UnityTls/unitytls_tlsctx_write_callback */,
	{ DelegatePInvokeWrapper_unitytls_tlsctx_x509verify_callback_t3334D904C28324D444B6C26BEEF29B5E07D9D58D, NULL, NULL, NULL, NULL, NULL, &unitytls_tlsctx_x509verify_callback_t3334D904C28324D444B6C26BEEF29B5E07D9D58D_0_0_0 } /* Mono.Unity.UnityTls/unitytls_tlsctx_x509verify_callback */,
	{ DelegatePInvokeWrapper_unitytls_x509verify_callback_t1B72B7CF228F76F09A6A75C54C15F2084C01CA09, NULL, NULL, NULL, NULL, NULL, &unitytls_x509verify_callback_t1B72B7CF228F76F09A6A75C54C15F2084C01CA09_0_0_0 } /* Mono.Unity.UnityTls/unitytls_x509verify_callback */,
	{ NULL, RenderPassInputSummary_tB1F6567DB675C0D2B3F253BA69C3DCE05B15E036_marshal_pinvoke, RenderPassInputSummary_tB1F6567DB675C0D2B3F253BA69C3DCE05B15E036_marshal_pinvoke_back, RenderPassInputSummary_tB1F6567DB675C0D2B3F253BA69C3DCE05B15E036_marshal_pinvoke_cleanup, NULL, NULL, &RenderPassInputSummary_tB1F6567DB675C0D2B3F253BA69C3DCE05B15E036_0_0_0 } /* UnityEngine.Rendering.Universal.UniversalRenderer/RenderPassInputSummary */,
	{ NULL, UriScheme_t6B786086C95A0192D655D1576DCD35D7B26CD794_marshal_pinvoke, UriScheme_t6B786086C95A0192D655D1576DCD35D7B26CD794_marshal_pinvoke_back, UriScheme_t6B786086C95A0192D655D1576DCD35D7B26CD794_marshal_pinvoke_cleanup, NULL, NULL, &UriScheme_t6B786086C95A0192D655D1576DCD35D7B26CD794_0_0_0 } /* Mono.Security.Uri/UriScheme */,
	{ DelegatePInvokeWrapper_OnStartedRecordingVideoCallback_t64E6C26F7ABAB9254AACB9D62C693F8922C1E45C, NULL, NULL, NULL, NULL, NULL, &OnStartedRecordingVideoCallback_t64E6C26F7ABAB9254AACB9D62C693F8922C1E45C_0_0_0 } /* UnityEngine.Windows.WebCam.VideoCapture/OnStartedRecordingVideoCallback */,
	{ DelegatePInvokeWrapper_OnStoppedRecordingVideoCallback_tC089900DD6C16C42C782522C257740BB222C1437, NULL, NULL, NULL, NULL, NULL, &OnStoppedRecordingVideoCallback_tC089900DD6C16C42C782522C257740BB222C1437_0_0_0 } /* UnityEngine.Windows.WebCam.VideoCapture/OnStoppedRecordingVideoCallback */,
	{ DelegatePInvokeWrapper_OnVideoCaptureResourceCreatedCallback_t5652A803A57C7FEA9BEAAA7250D14204C9AA114C, NULL, NULL, NULL, NULL, NULL, &OnVideoCaptureResourceCreatedCallback_t5652A803A57C7FEA9BEAAA7250D14204C9AA114C_0_0_0 } /* UnityEngine.Windows.WebCam.VideoCapture/OnVideoCaptureResourceCreatedCallback */,
	{ DelegatePInvokeWrapper_OnVideoModeStartedCallback_t7BFBEBA2CDDBFA58023D8BA206E0D90920819C1F, NULL, NULL, NULL, NULL, NULL, &OnVideoModeStartedCallback_t7BFBEBA2CDDBFA58023D8BA206E0D90920819C1F_0_0_0 } /* UnityEngine.Windows.WebCam.VideoCapture/OnVideoModeStartedCallback */,
	{ DelegatePInvokeWrapper_OnVideoModeStoppedCallback_tA29659F86D8702608589583F3F415ABF57F6A054, NULL, NULL, NULL, NULL, NULL, &OnVideoModeStoppedCallback_tA29659F86D8702608589583F3F415ABF57F6A054_0_0_0 } /* UnityEngine.Windows.WebCam.VideoCapture/OnVideoModeStoppedCallback */,
	{ NULL, Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677_marshal_pinvoke, Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677_marshal_pinvoke_back, Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677_marshal_pinvoke_cleanup, NULL, NULL, &Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677_0_0_0 } /* UnityEngine.UIElements.VisualElement/Hierarchy */,
	{ NULL, SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8_marshal_pinvoke, SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8_marshal_pinvoke_back, SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8_marshal_pinvoke_cleanup, NULL, NULL, &SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8_0_0_0 } /* UnityEngine.UIElements.VisualTreeAsset/SlotDefinition */,
	{ NULL, SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76_marshal_pinvoke, SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76_marshal_pinvoke_back, SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76_marshal_pinvoke_cleanup, NULL, NULL, &SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76_0_0_0 } /* UnityEngine.UIElements.VisualTreeAsset/SlotUsageEntry */,
	{ NULL, UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484_marshal_pinvoke, UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484_marshal_pinvoke_back, UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484_marshal_pinvoke_cleanup, NULL, NULL, &UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484_0_0_0 } /* UnityEngine.UIElements.VisualTreeAsset/UsingEntry */,
	{ NULL, VolatileBoolean_t9E1B0E7929E736D122D1C494D49E80C90874D041_marshal_pinvoke, VolatileBoolean_t9E1B0E7929E736D122D1C494D49E80C90874D041_marshal_pinvoke_back, VolatileBoolean_t9E1B0E7929E736D122D1C494D49E80C90874D041_marshal_pinvoke_cleanup, NULL, NULL, &VolatileBoolean_t9E1B0E7929E736D122D1C494D49E80C90874D041_0_0_0 } /* System.Threading.Volatile/VolatileBoolean */,
	{ NULL, VolatileInt32_tF87437D9108A3B42A6D3DA0147CD8B00C0538693_marshal_pinvoke, VolatileInt32_tF87437D9108A3B42A6D3DA0147CD8B00C0538693_marshal_pinvoke_back, VolatileInt32_tF87437D9108A3B42A6D3DA0147CD8B00C0538693_marshal_pinvoke_cleanup, NULL, NULL, &VolatileInt32_tF87437D9108A3B42A6D3DA0147CD8B00C0538693_0_0_0 } /* System.Threading.Volatile/VolatileInt32 */,
	{ NULL, VolatileObject_tEA3ACFAAFB9D2EFA5162F693BAAB342EA7737B99_marshal_pinvoke, VolatileObject_tEA3ACFAAFB9D2EFA5162F693BAAB342EA7737B99_marshal_pinvoke_back, VolatileObject_tEA3ACFAAFB9D2EFA5162F693BAAB342EA7737B99_marshal_pinvoke_cleanup, NULL, NULL, &VolatileObject_tEA3ACFAAFB9D2EFA5162F693BAAB342EA7737B99_0_0_0 } /* System.Threading.Volatile/VolatileObject */,
	{ NULL, Win32_IN6_ADDR_t9B6CDD60B0E692B4829A9A9F9F6FCB2A3F511363_marshal_pinvoke, Win32_IN6_ADDR_t9B6CDD60B0E692B4829A9A9F9F6FCB2A3F511363_marshal_pinvoke_back, Win32_IN6_ADDR_t9B6CDD60B0E692B4829A9A9F9F6FCB2A3F511363_marshal_pinvoke_cleanup, NULL, NULL, &Win32_IN6_ADDR_t9B6CDD60B0E692B4829A9A9F9F6FCB2A3F511363_0_0_0 } /* System.Net.NetworkInformation.Win32IPGlobalProperties/Win32_IN6_ADDR */,
	{ NULL, Win32_MIB_TCP6ROW_tA246F0C25601115F6A63AE262E2FF0DD46662562_marshal_pinvoke, Win32_MIB_TCP6ROW_tA246F0C25601115F6A63AE262E2FF0DD46662562_marshal_pinvoke_back, Win32_MIB_TCP6ROW_tA246F0C25601115F6A63AE262E2FF0DD46662562_marshal_pinvoke_cleanup, NULL, NULL, &Win32_MIB_TCP6ROW_tA246F0C25601115F6A63AE262E2FF0DD46662562_0_0_0 } /* System.Net.NetworkInformation.Win32IPGlobalProperties/Win32_MIB_TCP6ROW */,
	{ NULL, Win32_MIB_TCPROW_tC8F5BC4ED0E21699798F54D80E421130241FA61D_marshal_pinvoke, Win32_MIB_TCPROW_tC8F5BC4ED0E21699798F54D80E421130241FA61D_marshal_pinvoke_back, Win32_MIB_TCPROW_tC8F5BC4ED0E21699798F54D80E421130241FA61D_marshal_pinvoke_cleanup, NULL, NULL, &Win32_MIB_TCPROW_tC8F5BC4ED0E21699798F54D80E421130241FA61D_0_0_0 } /* System.Net.NetworkInformation.Win32IPGlobalProperties/Win32_MIB_TCPROW */,
	{ NULL, Win32_MIB_UDP6ROW_t607C9AF97C1096B1A21AE9B6DAE1562E50617B9A_marshal_pinvoke, Win32_MIB_UDP6ROW_t607C9AF97C1096B1A21AE9B6DAE1562E50617B9A_marshal_pinvoke_back, Win32_MIB_UDP6ROW_t607C9AF97C1096B1A21AE9B6DAE1562E50617B9A_marshal_pinvoke_cleanup, NULL, NULL, &Win32_MIB_UDP6ROW_t607C9AF97C1096B1A21AE9B6DAE1562E50617B9A_0_0_0 } /* System.Net.NetworkInformation.Win32IPGlobalProperties/Win32_MIB_UDP6ROW */,
	{ NULL, Win32_MIB_UDPROW_tC48E61D5CB7A87C28BF1D0963DC0916C28AA8FD1_marshal_pinvoke, Win32_MIB_UDPROW_tC48E61D5CB7A87C28BF1D0963DC0916C28AA8FD1_marshal_pinvoke_back, Win32_MIB_UDPROW_tC48E61D5CB7A87C28BF1D0963DC0916C28AA8FD1_marshal_pinvoke_cleanup, NULL, NULL, &Win32_MIB_UDPROW_tC48E61D5CB7A87C28BF1D0963DC0916C28AA8FD1_0_0_0 } /* System.Net.NetworkInformation.Win32IPGlobalProperties/Win32_MIB_UDPROW */,
	{ NULL, ProjectionInfo_tF6C24087F1CB99E7F3166A95D0CD282B7421FA81_marshal_pinvoke, ProjectionInfo_tF6C24087F1CB99E7F3166A95D0CD282B7421FA81_marshal_pinvoke_back, ProjectionInfo_tF6C24087F1CB99E7F3166A95D0CD282B7421FA81_marshal_pinvoke_cleanup, NULL, NULL, &ProjectionInfo_tF6C24087F1CB99E7F3166A95D0CD282B7421FA81_0_0_0 } /* ILRuntime.Mono.Cecil.WindowsRuntimeProjections/ProjectionInfo */,
	{ NULL, XRMirrorViewBlitDesc_tC913B2856BA2160BC3AD99F0C67293850E2162E0_marshal_pinvoke, XRMirrorViewBlitDesc_tC913B2856BA2160BC3AD99F0C67293850E2162E0_marshal_pinvoke_back, XRMirrorViewBlitDesc_tC913B2856BA2160BC3AD99F0C67293850E2162E0_marshal_pinvoke_cleanup, NULL, NULL, &XRMirrorViewBlitDesc_tC913B2856BA2160BC3AD99F0C67293850E2162E0_0_0_0 } /* UnityEngine.XR.XRDisplaySubsystem/XRMirrorViewBlitDesc */,
	{ NULL, XRRenderPass_t9E8711E8C69E3917AA39A0CA8304B604ED2838E8_marshal_pinvoke, XRRenderPass_t9E8711E8C69E3917AA39A0CA8304B604ED2838E8_marshal_pinvoke_back, XRRenderPass_t9E8711E8C69E3917AA39A0CA8304B604ED2838E8_marshal_pinvoke_cleanup, NULL, NULL, &XRRenderPass_t9E8711E8C69E3917AA39A0CA8304B604ED2838E8_0_0_0 } /* UnityEngine.XR.XRDisplaySubsystem/XRRenderPass */,
	{ DelegatePInvokeWrapper_ReadDataHandler_t14FE17C332DEFB64312F2193AF0D1EB57825CFD6, NULL, NULL, NULL, NULL, NULL, &ReadDataHandler_t14FE17C332DEFB64312F2193AF0D1EB57825CFD6_0_0_0 } /* ICSharpCode.SharpZipLib.Zip.ZipInputStream/ReadDataHandler */,
	{ DelegatePInvokeWrapper_IsBurstEnabledDelegate_t0628E97FE590352373ABA022E954D7F5CE183D3C, NULL, NULL, NULL, NULL, NULL, &IsBurstEnabledDelegate_t0628E97FE590352373ABA022E954D7F5CE183D3C_0_0_0 } /* Unity.Burst.BurstCompiler/BurstCompilerHelper/IsBurstEnabledDelegate */,
	{ DelegatePInvokeWrapper_WindowsCancelHandler_tC396577B75EBC714D192D78185E70181CBB963B4, NULL, NULL, NULL, NULL, NULL, &WindowsCancelHandler_tC396577B75EBC714D192D78185E70181CBB963B4_0_0_0 } /* System.Console/WindowsConsole/WindowsCancelHandler */,
	{ NULL, ContextMenuItem_t0D29D1ECB0C1F769EFC9ACA2D0AE6B1A8A4736A9_marshal_pinvoke, ContextMenuItem_t0D29D1ECB0C1F769EFC9ACA2D0AE6B1A8A4736A9_marshal_pinvoke_back, ContextMenuItem_t0D29D1ECB0C1F769EFC9ACA2D0AE6B1A8A4736A9_marshal_pinvoke_cleanup, NULL, NULL, &ContextMenuItem_t0D29D1ECB0C1F769EFC9ACA2D0AE6B1A8A4736A9_0_0_0 } /* UnityEngine.Rendering.DebugUI/Foldout/ContextMenuItem */,
	{ NULL, NameAndTooltip_tA6656221A6E70C8409CFCBAF6CCEC9C718E344D4_marshal_pinvoke, NameAndTooltip_tA6656221A6E70C8409CFCBAF6CCEC9C718E344D4_marshal_pinvoke_back, NameAndTooltip_tA6656221A6E70C8409CFCBAF6CCEC9C718E344D4_marshal_pinvoke_cleanup, NULL, NULL, &NameAndTooltip_tA6656221A6E70C8409CFCBAF6CCEC9C718E344D4_0_0_0 } /* UnityEngine.Rendering.DebugUI/Widget/NameAndTooltip */,
	{ NULL, NumberBuffer_t0F9FC9D15F03CFDEBA3B3F4210A2AB3B53305CDA_marshal_pinvoke, NumberBuffer_t0F9FC9D15F03CFDEBA3B3F4210A2AB3B53305CDA_marshal_pinvoke_back, NumberBuffer_t0F9FC9D15F03CFDEBA3B3F4210A2AB3B53305CDA_marshal_pinvoke_cleanup, NULL, NULL, &NumberBuffer_t0F9FC9D15F03CFDEBA3B3F4210A2AB3B53305CDA_0_0_0 } /* System.Globalization.FormatProvider/Number/NumberBuffer */,
	{ NULL, InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D_marshal_pinvoke, InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D_marshal_pinvoke_back, InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D_marshal_pinvoke_cleanup, NULL, NULL, &InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D_0_0_0 } /* System.Linq.Expressions.Interpreter.InstructionList/DebugView/InstructionView */,
	{ NULL, SEC_WINNT_AUTH_IDENTITY_W_t08251E44E7FDFDC9516EF0BE53823BF113DB5963_marshal_pinvoke, SEC_WINNT_AUTH_IDENTITY_W_t08251E44E7FDFDC9516EF0BE53823BF113DB5963_marshal_pinvoke_back, SEC_WINNT_AUTH_IDENTITY_W_t08251E44E7FDFDC9516EF0BE53823BF113DB5963_marshal_pinvoke_cleanup, NULL, NULL, &SEC_WINNT_AUTH_IDENTITY_W_t08251E44E7FDFDC9516EF0BE53823BF113DB5963_0_0_0 } /* Interop/SspiCli/SEC_WINNT_AUTH_IDENTITY_W */,
	{ NULL, SecPkgContext_IssuerListInfoEx_t45BE40232614EEEDFF25054A7699E031188A011B_marshal_pinvoke, SecPkgContext_IssuerListInfoEx_t45BE40232614EEEDFF25054A7699E031188A011B_marshal_pinvoke_back, SecPkgContext_IssuerListInfoEx_t45BE40232614EEEDFF25054A7699E031188A011B_marshal_pinvoke_cleanup, NULL, NULL, &SecPkgContext_IssuerListInfoEx_t45BE40232614EEEDFF25054A7699E031188A011B_0_0_0 } /* Interop/SspiCli/SecPkgContext_IssuerListInfoEx */,
	{ NULL, AtlasSettings_tE53BC2E0E77415B1398424E3FB07BCC7C4D42453_marshal_pinvoke, AtlasSettings_tE53BC2E0E77415B1398424E3FB07BCC7C4D42453_marshal_pinvoke_back, AtlasSettings_tE53BC2E0E77415B1398424E3FB07BCC7C4D42453_marshal_pinvoke_cleanup, NULL, NULL, &AtlasSettings_tE53BC2E0E77415B1398424E3FB07BCC7C4D42453_0_0_0 } /* UnityEngine.Rendering.Universal.LightCookieManager/Settings/AtlasSettings */,
	{ NULL, DefaultExtendedTypeDescriptor_tA141AABC2CE8A296CFEBCD528145934014AB06B5_marshal_pinvoke, DefaultExtendedTypeDescriptor_tA141AABC2CE8A296CFEBCD528145934014AB06B5_marshal_pinvoke_back, DefaultExtendedTypeDescriptor_tA141AABC2CE8A296CFEBCD528145934014AB06B5_marshal_pinvoke_cleanup, NULL, NULL, &DefaultExtendedTypeDescriptor_tA141AABC2CE8A296CFEBCD528145934014AB06B5_0_0_0 } /* System.ComponentModel.TypeDescriptor/TypeDescriptionNode/DefaultExtendedTypeDescriptor */,
	{ NULL, DefaultTypeDescriptor_tE4BFD69B5DCCF4D947034C2740F803F797E1879F_marshal_pinvoke, DefaultTypeDescriptor_tE4BFD69B5DCCF4D947034C2740F803F797E1879F_marshal_pinvoke_back, DefaultTypeDescriptor_tE4BFD69B5DCCF4D947034C2740F803F797E1879F_marshal_pinvoke_cleanup, NULL, NULL, &DefaultTypeDescriptor_tE4BFD69B5DCCF4D947034C2740F803F797E1879F_0_0_0 } /* System.ComponentModel.TypeDescriptor/TypeDescriptionNode/DefaultTypeDescriptor */,
	{ DelegatePInvokeWrapper_unitytls_errorstate_create_t_tE8BB5D6BCA7D232F4981831586B71C39802CF75B, NULL, NULL, NULL, NULL, NULL, &unitytls_errorstate_create_t_tE8BB5D6BCA7D232F4981831586B71C39802CF75B_0_0_0 } /* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_errorstate_create_t */,
	{ DelegatePInvokeWrapper_unitytls_errorstate_raise_error_t_t8C20FC78CA5BBEE0248CC09D1C1AF25BCB3835CF, NULL, NULL, NULL, NULL, NULL, &unitytls_errorstate_raise_error_t_t8C20FC78CA5BBEE0248CC09D1C1AF25BCB3835CF_0_0_0 } /* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_errorstate_raise_error_t */,
	{ DelegatePInvokeWrapper_unitytls_key_free_t_tDB8665140BAF30447F3650D323078C193566FF72, NULL, NULL, NULL, NULL, NULL, &unitytls_key_free_t_tDB8665140BAF30447F3650D323078C193566FF72_0_0_0 } /* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_free_t */,
	{ DelegatePInvokeWrapper_unitytls_key_get_ref_t_t8335968B19449FE0ED92E67AE9B6D95915684209, NULL, NULL, NULL, NULL, NULL, &unitytls_key_get_ref_t_t8335968B19449FE0ED92E67AE9B6D95915684209_0_0_0 } /* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_get_ref_t */,
	{ DelegatePInvokeWrapper_unitytls_key_parse_der_t_tC218AEF9253FA105762F39041F696A06C52D3F10, NULL, NULL, NULL, NULL, NULL, &unitytls_key_parse_der_t_tC218AEF9253FA105762F39041F696A06C52D3F10_0_0_0 } /* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_parse_der_t */,
	{ DelegatePInvokeWrapper_unitytls_key_parse_pem_t_tE945670C6CB28BBF4670D2E8E904B7D8A2AB277B, NULL, NULL, NULL, NULL, NULL, &unitytls_key_parse_pem_t_tE945670C6CB28BBF4670D2E8E904B7D8A2AB277B_0_0_0 } /* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_parse_pem_t */,
	{ DelegatePInvokeWrapper_unitytls_random_generate_bytes_t_t6E7011EF958B0948582F8D1D213B454A5A962569, NULL, NULL, NULL, NULL, NULL, &unitytls_random_generate_bytes_t_t6E7011EF958B0948582F8D1D213B454A5A962569_0_0_0 } /* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_random_generate_bytes_t */,
	{ DelegatePInvokeWrapper_unitytls_tlsctx_create_client_t_t49D8F69D4152410A346CB3560B121DCC44AAC4EC, NULL, NULL, NULL, NULL, NULL, &unitytls_tlsctx_create_client_t_t49D8F69D4152410A346CB3560B121DCC44AAC4EC_0_0_0 } /* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_create_client_t */,
	{ DelegatePInvokeWrapper_unitytls_tlsctx_create_server_t_t1068941B319B893D3FFBE53FE061676FF1CC3803, NULL, NULL, NULL, NULL, NULL, &unitytls_tlsctx_create_server_t_t1068941B319B893D3FFBE53FE061676FF1CC3803_0_0_0 } /* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_create_server_t */,
	{ DelegatePInvokeWrapper_unitytls_tlsctx_free_t_tFBF7BB64D2E1C183718FB5809ABF0051395FD8F0, NULL, NULL, NULL, NULL, NULL, &unitytls_tlsctx_free_t_tFBF7BB64D2E1C183718FB5809ABF0051395FD8F0_0_0_0 } /* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_free_t */,
	{ DelegatePInvokeWrapper_unitytls_tlsctx_get_ciphersuite_t_t7317543D399259616648B1AA19447C4B63F70EF2, NULL, NULL, NULL, NULL, NULL, &unitytls_tlsctx_get_ciphersuite_t_t7317543D399259616648B1AA19447C4B63F70EF2_0_0_0 } /* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_get_ciphersuite_t */,
	{ DelegatePInvokeWrapper_unitytls_tlsctx_get_protocol_t_t04E3B73C1D77379F7C7388ED4934189365326F3C, NULL, NULL, NULL, NULL, NULL, &unitytls_tlsctx_get_protocol_t_t04E3B73C1D77379F7C7388ED4934189365326F3C_0_0_0 } /* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_get_protocol_t */,
	{ DelegatePInvokeWrapper_unitytls_tlsctx_notify_close_t_t717D19846262E3DF5D1A69C5E136912E7A54B253, NULL, NULL, NULL, NULL, NULL, &unitytls_tlsctx_notify_close_t_t717D19846262E3DF5D1A69C5E136912E7A54B253_0_0_0 } /* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_notify_close_t */,
	{ DelegatePInvokeWrapper_unitytls_tlsctx_process_handshake_t_t8D94F5FAD00CD61BF950829866C0C6E29D202606, NULL, NULL, NULL, NULL, NULL, &unitytls_tlsctx_process_handshake_t_t8D94F5FAD00CD61BF950829866C0C6E29D202606_0_0_0 } /* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_process_handshake_t */,
	{ DelegatePInvokeWrapper_unitytls_tlsctx_read_t_t3E3C711F7A47E704ABDF0DF0B7515E7306EB7C95, NULL, NULL, NULL, NULL, NULL, &unitytls_tlsctx_read_t_t3E3C711F7A47E704ABDF0DF0B7515E7306EB7C95_0_0_0 } /* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_read_t */,
	{ DelegatePInvokeWrapper_unitytls_tlsctx_server_require_client_authentication_t_t2AC04245D1F40738C5FB87B0DEE80761E243F0BE, NULL, NULL, NULL, NULL, NULL, &unitytls_tlsctx_server_require_client_authentication_t_t2AC04245D1F40738C5FB87B0DEE80761E243F0BE_0_0_0 } /* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_server_require_client_authentication_t */,
	{ DelegatePInvokeWrapper_unitytls_tlsctx_set_certificate_callback_t_t2B54F7228DFC11BF14DCF2201BDD90CF0EF92D41, NULL, NULL, NULL, NULL, NULL, &unitytls_tlsctx_set_certificate_callback_t_t2B54F7228DFC11BF14DCF2201BDD90CF0EF92D41_0_0_0 } /* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_certificate_callback_t */,
	{ DelegatePInvokeWrapper_unitytls_tlsctx_set_supported_ciphersuites_t_t007E8706D364DE695F1DBF28358058A1E73DF544, NULL, NULL, NULL, NULL, NULL, &unitytls_tlsctx_set_supported_ciphersuites_t_t007E8706D364DE695F1DBF28358058A1E73DF544_0_0_0 } /* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_supported_ciphersuites_t */,
	{ DelegatePInvokeWrapper_unitytls_tlsctx_set_trace_callback_t_t3C615EACADC2CB1CDA8362B3F775071976E7CF7C, NULL, NULL, NULL, NULL, NULL, &unitytls_tlsctx_set_trace_callback_t_t3C615EACADC2CB1CDA8362B3F775071976E7CF7C_0_0_0 } /* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_trace_callback_t */,
	{ DelegatePInvokeWrapper_unitytls_tlsctx_set_x509verify_callback_t_t032FE980BEDD0D201CAF1EE653ABE303CDBCA7C9, NULL, NULL, NULL, NULL, NULL, &unitytls_tlsctx_set_x509verify_callback_t_t032FE980BEDD0D201CAF1EE653ABE303CDBCA7C9_0_0_0 } /* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_x509verify_callback_t */,
	{ DelegatePInvokeWrapper_unitytls_tlsctx_write_t_t976A41600B61F9C8DF022296B67316FFA53EB386, NULL, NULL, NULL, NULL, NULL, &unitytls_tlsctx_write_t_t976A41600B61F9C8DF022296B67316FFA53EB386_0_0_0 } /* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_write_t */,
	{ DelegatePInvokeWrapper_unitytls_x509_export_der_t_tB784597940DE501BB5FEFA3EA528634559A16749, NULL, NULL, NULL, NULL, NULL, &unitytls_x509_export_der_t_tB784597940DE501BB5FEFA3EA528634559A16749_0_0_0 } /* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509_export_der_t */,
	{ DelegatePInvokeWrapper_unitytls_x509list_append_der_t_tC45176B25C9B11C509119A1943EFDE133D819951, NULL, NULL, NULL, NULL, NULL, &unitytls_x509list_append_der_t_tC45176B25C9B11C509119A1943EFDE133D819951_0_0_0 } /* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_append_der_t */,
	{ DelegatePInvokeWrapper_unitytls_x509list_append_pem_t_t8218AF5B5C57C063C070E2450C1969CAEE30AA8D, NULL, NULL, NULL, NULL, NULL, &unitytls_x509list_append_pem_t_t8218AF5B5C57C063C070E2450C1969CAEE30AA8D_0_0_0 } /* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_append_pem_t */,
	{ DelegatePInvokeWrapper_unitytls_x509list_append_t_tC84B9CA7C15F5D1DE98386670A80D5F98559D98E, NULL, NULL, NULL, NULL, NULL, &unitytls_x509list_append_t_tC84B9CA7C15F5D1DE98386670A80D5F98559D98E_0_0_0 } /* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_append_t */,
	{ DelegatePInvokeWrapper_unitytls_x509list_create_t_t8873365FFB1556CE6B643700DB0C30E391B758D6, NULL, NULL, NULL, NULL, NULL, &unitytls_x509list_create_t_t8873365FFB1556CE6B643700DB0C30E391B758D6_0_0_0 } /* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_create_t */,
	{ DelegatePInvokeWrapper_unitytls_x509list_free_t_t9BD50B09A7919B7891DC529787E93C708FC653A2, NULL, NULL, NULL, NULL, NULL, &unitytls_x509list_free_t_t9BD50B09A7919B7891DC529787E93C708FC653A2_0_0_0 } /* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_free_t */,
	{ DelegatePInvokeWrapper_unitytls_x509list_get_ref_t_t264CEEF7B8D1F10FD95E1BC78BB48BCA11E305EA, NULL, NULL, NULL, NULL, NULL, &unitytls_x509list_get_ref_t_t264CEEF7B8D1F10FD95E1BC78BB48BCA11E305EA_0_0_0 } /* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_get_ref_t */,
	{ DelegatePInvokeWrapper_unitytls_x509list_get_x509_t_t428DCD367D50DCDD5ECE6DCFEB8967C5F7C3DFE8, NULL, NULL, NULL, NULL, NULL, &unitytls_x509list_get_x509_t_t428DCD367D50DCDD5ECE6DCFEB8967C5F7C3DFE8_0_0_0 } /* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_get_x509_t */,
	{ DelegatePInvokeWrapper_unitytls_x509verify_default_ca_t_tED88B7ABC8408A22DB51B1F57D5FC65BDD2EC809, NULL, NULL, NULL, NULL, NULL, &unitytls_x509verify_default_ca_t_tED88B7ABC8408A22DB51B1F57D5FC65BDD2EC809_0_0_0 } /* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509verify_default_ca_t */,
	{ DelegatePInvokeWrapper_unitytls_x509verify_explicit_ca_t_t1B3D98BF01F059A3C2ADE87EFDDA03C557A3D08D, NULL, NULL, NULL, NULL, NULL, &unitytls_x509verify_explicit_ca_t_t1B3D98BF01F059A3C2ADE87EFDDA03C557A3D08D_0_0_0 } /* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509verify_explicit_ca_t */,
};
