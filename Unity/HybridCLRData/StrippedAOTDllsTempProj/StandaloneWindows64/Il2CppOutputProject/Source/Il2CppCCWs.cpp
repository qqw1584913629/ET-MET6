#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <stdint.h>
#include <limits>

#include "vm/CachedCCWBase.h"
#include "utils/New.h"

template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Collections.Generic.Dictionary`2<System.UInt32,ILRuntime.Mono.Cecil.MethodDefinition>
struct Dictionary_2_tE2C604760A34E8C44426E80617994E6120A5D7FE;
// System.Collections.Generic.Dictionary`2<System.UInt32,ILRuntime.Mono.Cecil.TypeDefinition>
struct Dictionary_2_t8AF0183AA1111CD983F7EFB204E3F9EC85BFB760;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// ILRuntime.Mono.Cecil.Pdb.IMetaDataEmit
struct IMetaDataEmit_tED2D8D4818050B8E1945A8A5BB85414139BDFE98;
// ILRuntime.Mono.Cecil.Pdb.IMetaDataImport
struct IMetaDataImport_tF05FD2344E376C091B8D54AFD5D8181A3C800785;
// ILRuntime.Mono.Cecil.ModuleDefinition
struct ModuleDefinition_t736466BAF26312907DDA7740301AED7B194ED9A2;
// ILRuntime.Mono.Cecil.Pdb.ModuleMetadata
struct ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Il2CppComObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var;
struct Guid_t;
struct IMetaDataEmit_tED2D8D4818050B8E1945A8A5BB85414139BDFE98;
struct IMetaDataImport_tF05FD2344E376C091B8D54AFD5D8181A3C800785;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ILRuntime.Mono.Cecil.Pdb.ModuleMetadata
struct ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8  : public RuntimeObject
{
	// ILRuntime.Mono.Cecil.ModuleDefinition ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::module
	ModuleDefinition_t736466BAF26312907DDA7740301AED7B194ED9A2* ___module_0;
	// System.Collections.Generic.Dictionary`2<System.UInt32,ILRuntime.Mono.Cecil.TypeDefinition> ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::types
	Dictionary_2_t8AF0183AA1111CD983F7EFB204E3F9EC85BFB760* ___types_1;
	// System.Collections.Generic.Dictionary`2<System.UInt32,ILRuntime.Mono.Cecil.MethodDefinition> ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::methods
	Dictionary_2_tE2C604760A34E8C44426E80617994E6120A5D7FE* ___methods_2;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.Text.StringBuilder
struct StringBuilder_t  : public RuntimeObject
{
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t* ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;
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

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
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

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA  : public RuntimeArray
{
	ALIGN_FIELD (8) uint32_t m_Items[1];

	inline uint32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint32_t value)
	{
		m_Items[index] = value;
	}
};
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};



// System.Void ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::SetModuleProps(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModuleMetadata_SetModuleProps_mE7EFF8B292EA5C1ED532203DD64426D3880EACDA (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __this, String_t* ___szName0, const RuntimeMethod* method) ;
// System.Void ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::Save(System.String,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModuleMetadata_Save_m48EF8B24F78519FFCA14F835DB0D0DD27F4E4527 (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __this, String_t* ___szFile0, uint32_t ___dwSaveFlags1, const RuntimeMethod* method) ;
// System.Void ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::SaveToStream(System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModuleMetadata_SaveToStream_m2C0B282F083CC8E1E995888EFBB91C1D9B120D0A (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __this, intptr_t ___pIStream0, uint32_t ___dwSaveFlags1, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::GetSaveSize(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_GetSaveSize_m6DD39C39A13788D703847743A6E0CED56CC2BE5E (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __this, uint32_t ___fSave0, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::DefineTypeDef(System.IntPtr,System.UInt32,System.UInt32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_DefineTypeDef_mBF3C3EF4E12D0641D8B2AC6CF5258BB5C5F9520C (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __this, intptr_t ___szTypeDef0, uint32_t ___dwTypeDefFlags1, uint32_t ___tkExtends2, intptr_t ___rtkImplements3, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::DefineNestedType(System.IntPtr,System.UInt32,System.UInt32,System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_DefineNestedType_m4C3C4BCB8AADAA4E9A1417C36D152D9E1149866E (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __this, intptr_t ___szTypeDef0, uint32_t ___dwTypeDefFlags1, uint32_t ___tkExtends2, intptr_t ___rtkImplements3, uint32_t ___tdEncloser4, const RuntimeMethod* method) ;
// System.Void ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::SetHandler(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModuleMetadata_SetHandler_mF68B97FBA0C659FBE1421F85577D51E00C410E4D (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __this, RuntimeObject* ___pUnk0, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::DefineMethod(System.UInt32,System.IntPtr,System.UInt32,System.IntPtr,System.UInt32,System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_DefineMethod_mBB8F9863B1D0C8C97C11A428C513476D4FFF79DF (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __this, uint32_t ___td0, intptr_t ___zName1, uint32_t ___dwMethodFlags2, intptr_t ___pvSigBlob3, uint32_t ___cbSigBlob4, uint32_t ___ulCodeRVA5, uint32_t ___dwImplFlags6, const RuntimeMethod* method) ;
// System.Void ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::DefineMethodImpl(System.UInt32,System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModuleMetadata_DefineMethodImpl_mDAE986584C668446FC4E392897DED417392279D7 (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __this, uint32_t ___td0, uint32_t ___tkBody1, uint32_t ___tkDecl2, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::DefineTypeRefByName(System.UInt32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_DefineTypeRefByName_mBEB0781E8F4EDFA68CD42073B9502353AA9FF218 (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __this, uint32_t ___tkResolutionScope0, intptr_t ___szName1, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::DefineImportType(System.IntPtr,System.IntPtr,System.UInt32,ILRuntime.Mono.Cecil.Pdb.IMetaDataImport,System.UInt32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_DefineImportType_mED5546455BD96ED4E35ADD65ED2CE05C1E8D876C (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __this, intptr_t ___pAssemImport0, intptr_t ___pbHashValue1, uint32_t ___cbHashValue2, RuntimeObject* ___pImport3, uint32_t ___tdImport4, intptr_t ___pAssemEmit5, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::DefineMemberRef(System.UInt32,System.String,System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_DefineMemberRef_m2FE2A7F9901ED3A34F1339A9BA2F7DD894F82061 (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __this, uint32_t ___tkImport0, String_t* ___szName1, intptr_t ___pvSigBlob2, uint32_t ___cbSigBlob3, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::DefineImportMember(System.IntPtr,System.IntPtr,System.UInt32,ILRuntime.Mono.Cecil.Pdb.IMetaDataImport,System.UInt32,System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_DefineImportMember_mB430601DFF63DEE9CF6CD62DCEC1AAB076974497 (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __this, intptr_t ___pAssemImport0, intptr_t ___pbHashValue1, uint32_t ___cbHashValue2, RuntimeObject* ___pImport3, uint32_t ___mbMember4, intptr_t ___pAssemEmit5, uint32_t ___tkParent6, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::DefineEvent(System.UInt32,System.String,System.UInt32,System.UInt32,System.UInt32,System.UInt32,System.UInt32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_DefineEvent_m123A4FCCC07C6D1860903FC531862BE4EBA3D749 (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __this, uint32_t ___td0, String_t* ___szEvent1, uint32_t ___dwEventFlags2, uint32_t ___tkEventType3, uint32_t ___mdAddOn4, uint32_t ___mdRemoveOn5, uint32_t ___mdFire6, intptr_t ___rmdOtherMethods7, const RuntimeMethod* method) ;
// System.Void ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::SetClassLayout(System.UInt32,System.UInt32,System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModuleMetadata_SetClassLayout_m4BF0DAD3F3037AF8ED0142A3D56F8A0DC7197D2F (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __this, uint32_t ___td0, uint32_t ___dwPackSize1, intptr_t ___rFieldOffsets2, uint32_t ___ulClassSize3, const RuntimeMethod* method) ;
// System.Void ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::DeleteClassLayout(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModuleMetadata_DeleteClassLayout_mAC904F4652C8EA692E2C7CBABFE1A2767E52E0AF (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __this, uint32_t ___td0, const RuntimeMethod* method) ;
// System.Void ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::SetFieldMarshal(System.UInt32,System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModuleMetadata_SetFieldMarshal_mF751045E1C524A532D8550CEB008265C524A6684 (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __this, uint32_t ___tk0, intptr_t ___pvNativeType1, uint32_t ___cbNativeType2, const RuntimeMethod* method) ;
// System.Void ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::DeleteFieldMarshal(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModuleMetadata_DeleteFieldMarshal_mF2D844241050C459EECA9B12178BFBBCEA24394D (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __this, uint32_t ___tk0, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::DefinePermissionSet(System.UInt32,System.UInt32,System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_DefinePermissionSet_mADB2C6F541CEDE6C0C4E7F65709741DB39ADD4F4 (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __this, uint32_t ___tk0, uint32_t ___dwAction1, intptr_t ___pvPermission2, uint32_t ___cbPermission3, const RuntimeMethod* method) ;
// System.Void ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::SetRVA(System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModuleMetadata_SetRVA_m2FD393942A3901BED63FD43D382F09AB832EB561 (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __this, uint32_t ___md0, uint32_t ___ulRVA1, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::GetTokenFromSig(System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_GetTokenFromSig_m145B283ABDA2EDC677A95FCD5574BFF100BC223E (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __this, intptr_t ___pvSig0, uint32_t ___cbSig1, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::DefineModuleRef(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_DefineModuleRef_m0359B984D28AE6407DF3E0A00F56D01109016797 (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __this, String_t* ___szName0, const RuntimeMethod* method) ;
// System.Void ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::SetParent(System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModuleMetadata_SetParent_m92ECEC015A4CF8AB876E217C6884DF3837B4AAF1 (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __this, uint32_t ___mr0, uint32_t ___tk1, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::GetTokenFromTypeSpec(System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_GetTokenFromTypeSpec_m5F792CD22F43D58B4D35D2D3CA83F3E85EE15DFB (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __this, intptr_t ___pvSig0, uint32_t ___cbSig1, const RuntimeMethod* method) ;
// System.Void ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::SaveToMemory(System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModuleMetadata_SaveToMemory_m5243B934470ECFB4F60C94A12873D482B9E75342 (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __this, intptr_t ___pbData0, uint32_t ___cbData1, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::DefineUserString(System.String,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_DefineUserString_m37DAACB50F4FC7137D2A3016560F27EE2D43BB12 (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __this, String_t* ___szString0, uint32_t ___cchString1, const RuntimeMethod* method) ;
// System.Void ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::DeleteToken(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModuleMetadata_DeleteToken_m71FCF519E2D82A578C9D2FC431EC00C64C5D0EE7 (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __this, uint32_t ___tkObj0, const RuntimeMethod* method) ;
// System.Void ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::SetMethodProps(System.UInt32,System.UInt32,System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModuleMetadata_SetMethodProps_mC8FFAD7ADF45546420E72B01CF49E30BE0844BEA (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __this, uint32_t ___md0, uint32_t ___dwMethodFlags1, uint32_t ___ulCodeRVA2, uint32_t ___dwImplFlags3, const RuntimeMethod* method) ;
// System.Void ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::SetTypeDefProps(System.UInt32,System.UInt32,System.UInt32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModuleMetadata_SetTypeDefProps_mF98FD1C33516BC25EBFE0049329F43122DECD0D2 (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __this, uint32_t ___td0, uint32_t ___dwTypeDefFlags1, uint32_t ___tkExtends2, intptr_t ___rtkImplements3, const RuntimeMethod* method) ;
// System.Void ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::SetEventProps(System.UInt32,System.UInt32,System.UInt32,System.UInt32,System.UInt32,System.UInt32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModuleMetadata_SetEventProps_m89E28F08AF6A309C8D88F46A50E12014FC09B33B (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __this, uint32_t ___ev0, uint32_t ___dwEventFlags1, uint32_t ___tkEventType2, uint32_t ___mdAddOn3, uint32_t ___mdRemoveOn4, uint32_t ___mdFire5, intptr_t ___rmdOtherMethods6, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::SetPermissionSetProps(System.UInt32,System.UInt32,System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_SetPermissionSetProps_mF33AFE8040BF10FE685EAAC3675E9A7BA24EFCAC (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __this, uint32_t ___tk0, uint32_t ___dwAction1, intptr_t ___pvPermission2, uint32_t ___cbPermission3, const RuntimeMethod* method) ;
// System.Void ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::DefinePinvokeMap(System.UInt32,System.UInt32,System.String,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModuleMetadata_DefinePinvokeMap_m293911AE14EA4BD09F8C1A0F6D3C9FAE9F38C781 (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __this, uint32_t ___tk0, uint32_t ___dwMappingFlags1, String_t* ___szImportName2, uint32_t ___mrImportDLL3, const RuntimeMethod* method) ;
// System.Void ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::SetPinvokeMap(System.UInt32,System.UInt32,System.String,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModuleMetadata_SetPinvokeMap_m6219A3F31720EB8391BB1CF325D0F23C96E721D5 (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __this, uint32_t ___tk0, uint32_t ___dwMappingFlags1, String_t* ___szImportName2, uint32_t ___mrImportDLL3, const RuntimeMethod* method) ;
// System.Void ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::DeletePinvokeMap(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModuleMetadata_DeletePinvokeMap_m56FCC1B4E5472104366A24EB9C91B0B724F1D25A (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __this, uint32_t ___tk0, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::DefineCustomAttribute(System.UInt32,System.UInt32,System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_DefineCustomAttribute_m7AA9B2452ACD2DD7340037627F4E70DC6439E6F6 (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __this, uint32_t ___tkObj0, uint32_t ___tkType1, intptr_t ___pCustomAttribute2, uint32_t ___cbCustomAttribute3, const RuntimeMethod* method) ;
// System.Void ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::SetCustomAttributeValue(System.UInt32,System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModuleMetadata_SetCustomAttributeValue_mF3FA0B85584FCEBD17F47B712F2BD9DA17872965 (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __this, uint32_t ___pcv0, intptr_t ___pCustomAttribute1, uint32_t ___cbCustomAttribute2, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::DefineField(System.UInt32,System.String,System.UInt32,System.IntPtr,System.UInt32,System.UInt32,System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_DefineField_mAACB1BEEC4BF8687811A5F1D72F86FC4A1361C54 (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __this, uint32_t ___td0, String_t* ___szName1, uint32_t ___dwFieldFlags2, intptr_t ___pvSigBlob3, uint32_t ___cbSigBlob4, uint32_t ___dwCPlusTypeFlag5, intptr_t ___pValue6, uint32_t ___cchValue7, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::DefineProperty(System.UInt32,System.String,System.UInt32,System.IntPtr,System.UInt32,System.UInt32,System.IntPtr,System.UInt32,System.UInt32,System.UInt32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_DefineProperty_mA6511E8170601FE5CB1D3678F5AE76C0408D611F (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __this, uint32_t ___td0, String_t* ___szProperty1, uint32_t ___dwPropFlags2, intptr_t ___pvSig3, uint32_t ___cbSig4, uint32_t ___dwCPlusTypeFlag5, intptr_t ___pValue6, uint32_t ___cchValue7, uint32_t ___mdSetter8, uint32_t ___mdGetter9, intptr_t ___rmdOtherMethods10, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::DefineParam(System.UInt32,System.UInt32,System.String,System.UInt32,System.UInt32,System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_DefineParam_mEC750CE8B47416D33EEA2A6AD561EDEBF9AEBE3C (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __this, uint32_t ___md0, uint32_t ___ulParamSeq1, String_t* ___szName2, uint32_t ___dwParamFlags3, uint32_t ___dwCPlusTypeFlag4, intptr_t ___pValue5, uint32_t ___cchValue6, const RuntimeMethod* method) ;
// System.Void ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::SetFieldProps(System.UInt32,System.UInt32,System.UInt32,System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModuleMetadata_SetFieldProps_mD2E6D0453CFDA932AC496EA95CD25D55081D41B1 (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __this, uint32_t ___fd0, uint32_t ___dwFieldFlags1, uint32_t ___dwCPlusTypeFlag2, intptr_t ___pValue3, uint32_t ___cchValue4, const RuntimeMethod* method) ;
// System.Void ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::SetPropertyProps(System.UInt32,System.UInt32,System.UInt32,System.IntPtr,System.UInt32,System.UInt32,System.UInt32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModuleMetadata_SetPropertyProps_mB9AACCDB7689176723AC58F39AC4BA955472739F (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __this, uint32_t ___pr0, uint32_t ___dwPropFlags1, uint32_t ___dwCPlusTypeFlag2, intptr_t ___pValue3, uint32_t ___cchValue4, uint32_t ___mdSetter5, uint32_t ___mdGetter6, intptr_t ___rmdOtherMethods7, const RuntimeMethod* method) ;
// System.Void ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::SetParamProps(System.UInt32,System.String,System.UInt32,System.UInt32,System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModuleMetadata_SetParamProps_m35145464C918BF02644EEC2A234BFAFABF5010D7 (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __this, uint32_t ___pd0, String_t* ___szName1, uint32_t ___dwParamFlags2, uint32_t ___dwCPlusTypeFlag3, intptr_t ___pValue4, uint32_t ___cchValue5, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::DefineSecurityAttributeSet(System.UInt32,System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_DefineSecurityAttributeSet_m8B628029AF9AF24DA4906FF6F09EDC1E45809041 (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __this, uint32_t ___tkObj0, intptr_t ___rSecAttrs1, uint32_t ___cSecAttrs2, const RuntimeMethod* method) ;
// System.Void ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::ApplyEditAndContinue(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModuleMetadata_ApplyEditAndContinue_mBA31B2F644B73E054AC43DDDD8B7832E2FD4BF7F (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __this, RuntimeObject* ___pImport0, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::TranslateSigWithScope(System.IntPtr,System.IntPtr,System.UInt32,ILRuntime.Mono.Cecil.Pdb.IMetaDataImport,System.IntPtr,System.UInt32,System.IntPtr,ILRuntime.Mono.Cecil.Pdb.IMetaDataEmit,System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_TranslateSigWithScope_m589A238725D73877124B82D83B5DFCCF122EA075 (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __this, intptr_t ___pAssemImport0, intptr_t ___pbHashValue1, uint32_t ___cbHashValue2, RuntimeObject* ___import3, intptr_t ___pbSigBlob4, uint32_t ___cbSigBlob5, intptr_t ___pAssemEmit6, RuntimeObject* ___emit7, intptr_t ___pvTranslatedSig8, uint32_t ___cbTranslatedSigMax9, const RuntimeMethod* method) ;
// System.Void ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::SetMethodImplFlags(System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModuleMetadata_SetMethodImplFlags_mAF645C849E9D59E153655D72C885ED16428B8785 (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __this, uint32_t ___md0, uint32_t ___dwImplFlags1, const RuntimeMethod* method) ;
// System.Void ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::SetFieldRVA(System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModuleMetadata_SetFieldRVA_mC7E5377AC7E47E8B39A62E00DFA306246DF2FDE7 (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __this, uint32_t ___fd0, uint32_t ___ulRVA1, const RuntimeMethod* method) ;
// System.Void ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::Merge(ILRuntime.Mono.Cecil.Pdb.IMetaDataImport,System.IntPtr,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModuleMetadata_Merge_mE53E457379BE3164003D1625FC2CC127B3FA7AC1 (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __this, RuntimeObject* ___pImport0, intptr_t ___pHostMapToken1, RuntimeObject* ___pHandler2, const RuntimeMethod* method) ;
// System.Void ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::MergeEnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModuleMetadata_MergeEnd_m2CC4379ED27D9E73EEF064CB2E851E6F8D0CD933 (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __this, const RuntimeMethod* method) ;
// System.Void ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::CloseEnum(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModuleMetadata_CloseEnum_m5FFE1D6A01971169A8EC44F1F0C448913A81D6DF (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __this, uint32_t ___hEnum0, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::CountEnum(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_CountEnum_mC1B8BDFBB690F0D943F762CEF75ACA5B41BD0D76 (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __this, uint32_t ___hEnum0, const RuntimeMethod* method) ;
// System.Void ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::ResetEnum(System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModuleMetadata_ResetEnum_m65168CF6DE803D3329FA98A9096099DDF8A87F50 (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __this, uint32_t ___hEnum0, uint32_t ___ulPos1, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::EnumTypeDefs(System.UInt32&,System.UInt32[],System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_EnumTypeDefs_m570EB2A3911204617BA1A7BC474666F9E614A168 (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __this, uint32_t* ___phEnum0, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___rTypeDefs1, uint32_t ___cMax2, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::EnumInterfaceImpls(System.UInt32&,System.UInt32,System.UInt32[],System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_EnumInterfaceImpls_m612B630B46538CEA3534A61CECA4AF7B11F50763 (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __this, uint32_t* ___phEnum0, uint32_t ___td1, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___rImpls2, uint32_t ___cMax3, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::EnumTypeRefs(System.UInt32&,System.UInt32[],System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_EnumTypeRefs_mF187ED6C164AA97CF793B43593BB2AE169DCA910 (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __this, uint32_t* ___phEnum0, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___rTypeRefs1, uint32_t ___cMax2, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::FindTypeDefByName(System.String,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_FindTypeDefByName_mC0FDBC8817FF66985F91F33B9E5B4CC0D8B9EFBC (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __this, String_t* ___szTypeDef0, uint32_t ___tkEnclosingClass1, const RuntimeMethod* method) ;
// System.Guid ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::GetScopeProps(System.Text.StringBuilder,System.UInt32,System.UInt32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Guid_t ModuleMetadata_GetScopeProps_mF0A45DC0E2AF468572ABC4BAC136BFDA16ED918B (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __this, StringBuilder_t* ___szName0, uint32_t ___cchName1, uint32_t* ___pchName2, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::GetModuleFromScope()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_GetModuleFromScope_m505D0E9A6720E2D4CC3CFA945AC7EE964AEC2713 (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __this, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::GetTypeDefProps(System.UInt32,System.IntPtr,System.UInt32,System.UInt32&,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_GetTypeDefProps_m2AE7767E3B867890CBDF9FA759751D3B47FC6DC0 (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __this, uint32_t ___td0, intptr_t ___szTypeDef1, uint32_t ___cchTypeDef2, uint32_t* ___pchTypeDef3, intptr_t ___pdwTypeDefFlags4, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::GetInterfaceImplProps(System.UInt32,System.UInt32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_GetInterfaceImplProps_mF3001C194B5212C53D1A09D8DEA26329D4F474CB (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __this, uint32_t ___iiImpl0, uint32_t* ___pClass1, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::GetTypeRefProps(System.UInt32,System.UInt32&,System.Text.StringBuilder,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_GetTypeRefProps_m529973484832D31387D9A8B9E494A6090E2BD3C1 (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __this, uint32_t ___tr0, uint32_t* ___ptkResolutionScope1, StringBuilder_t* ___szName2, uint32_t ___cchName3, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::ResolveTypeRef(System.UInt32,System.Guid&,System.Object&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_ResolveTypeRef_m916D8859048019ED3E3B9F41E109CE91F33A993B (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __this, uint32_t ___tr0, Guid_t* ___riid1, RuntimeObject** ___ppIScope2, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::EnumMembers(System.UInt32&,System.UInt32,System.UInt32[],System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_EnumMembers_m00A052BAA9EDC9747BE35884578894180D3B9D3A (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __this, uint32_t* ___phEnum0, uint32_t ___cl1, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___rMembers2, uint32_t ___cMax3, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::EnumMembersWithName(System.UInt32&,System.UInt32,System.String,System.UInt32[],System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_EnumMembersWithName_m4CA83C592B9870885D11BF119C8E8B2DD797B74A (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __this, uint32_t* ___phEnum0, uint32_t ___cl1, String_t* ___szName2, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___rMembers3, uint32_t ___cMax4, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::EnumMethods(System.UInt32&,System.UInt32,System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_EnumMethods_m13BE913295279DB499E857AE5D49550C583E12BB (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __this, uint32_t* ___phEnum0, uint32_t ___cl1, intptr_t ___rMethods2, uint32_t ___cMax3, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::EnumMethodsWithName(System.UInt32&,System.UInt32,System.String,System.UInt32[],System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_EnumMethodsWithName_m7D8D3B8F2C81DD191F093DD634901C4E07C81C0D (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __this, uint32_t* ___phEnum0, uint32_t ___cl1, String_t* ___szName2, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___rMethods3, uint32_t ___cMax4, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::EnumFields(System.UInt32&,System.UInt32,System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_EnumFields_m52EC8FB8C96F78D680F2C6E28080FF2D869B27A3 (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __this, uint32_t* ___phEnum0, uint32_t ___cl1, intptr_t ___rFields2, uint32_t ___cMax3, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::EnumFieldsWithName(System.UInt32&,System.UInt32,System.String,System.UInt32[],System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_EnumFieldsWithName_m499BF6C27F76B66A5A4A246D09A60191AEF4D6D3 (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __this, uint32_t* ___phEnum0, uint32_t ___cl1, String_t* ___szName2, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___rFields3, uint32_t ___cMax4, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::EnumParams(System.UInt32&,System.UInt32,System.UInt32[],System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_EnumParams_m2DA7D32460A216AE7C3FE73E244C2E00E7A6DD39 (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __this, uint32_t* ___phEnum0, uint32_t ___mb1, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___rParams2, uint32_t ___cMax3, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::EnumMemberRefs(System.UInt32&,System.UInt32,System.UInt32[],System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_EnumMemberRefs_mC125307C8887551F8A50F4B3745C2D47A61F61C5 (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __this, uint32_t* ___phEnum0, uint32_t ___tkParent1, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___rMemberRefs2, uint32_t ___cMax3, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::EnumMethodImpls(System.UInt32&,System.UInt32,System.UInt32[],System.UInt32[],System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_EnumMethodImpls_m95DC9AB59F1BF96EEF36F76009C8219A41E60A48 (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __this, uint32_t* ___phEnum0, uint32_t ___td1, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___rMethodBody2, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___rMethodDecl3, uint32_t ___cMax4, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::EnumPermissionSets(System.UInt32&,System.UInt32,System.UInt32,System.UInt32[],System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_EnumPermissionSets_mA8C36AC8BDF347AFEA2A2AD49E3A0E72B6DCC3C4 (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __this, uint32_t* ___phEnum0, uint32_t ___tk1, uint32_t ___dwActions2, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___rPermission3, uint32_t ___cMax4, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::FindMember(System.UInt32,System.String,System.Byte[],System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_FindMember_m8AC0C1571E84F472129F45600DE4365294AE18FA (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __this, uint32_t ___td0, String_t* ___szName1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___pvSigBlob2, uint32_t ___cbSigBlob3, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::FindMethod(System.UInt32,System.String,System.Byte[],System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_FindMethod_mC8B58A622BAFD7EEF91533BB91A56BE1948E8D17 (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __this, uint32_t ___td0, String_t* ___szName1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___pvSigBlob2, uint32_t ___cbSigBlob3, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::FindField(System.UInt32,System.String,System.Byte[],System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_FindField_m51BC8683E9E2D577AFDFB2696F720F170499530C (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __this, uint32_t ___td0, String_t* ___szName1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___pvSigBlob2, uint32_t ___cbSigBlob3, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::FindMemberRef(System.UInt32,System.String,System.Byte[],System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_FindMemberRef_mD1C76A9793BFB77C1A4DD9AF245AECB096A4FAB2 (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __this, uint32_t ___td0, String_t* ___szName1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___pvSigBlob2, uint32_t ___cbSigBlob3, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::GetMethodProps(System.UInt32,System.UInt32&,System.IntPtr,System.UInt32,System.UInt32&,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_GetMethodProps_m46DED369D88493486E9D27B8B29C36A2CEEDA492 (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __this, uint32_t ___mb0, uint32_t* ___pClass1, intptr_t ___szMethod2, uint32_t ___cchMethod3, uint32_t* ___pchMethod4, intptr_t ___pdwAttr5, intptr_t ___ppvSigBlob6, intptr_t ___pcbSigBlob7, intptr_t ___pulCodeRVA8, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::GetMemberRefProps(System.UInt32,System.UInt32&,System.Text.StringBuilder,System.UInt32,System.UInt32&,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_GetMemberRefProps_mF661E838ED0F818EF9C163D10F74E6371C4D9AAF (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __this, uint32_t ___mr0, uint32_t* ___ptk1, StringBuilder_t* ___szMember2, uint32_t ___cchMember3, uint32_t* ___pchMember4, intptr_t* ___ppvSigBlob5, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::EnumProperties(System.UInt32&,System.UInt32,System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_EnumProperties_mEB1F163CE5C38DECEC7ABB648EE796BB1336575B (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __this, uint32_t* ___phEnum0, uint32_t ___td1, intptr_t ___rProperties2, uint32_t ___cMax3, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::EnumEvents(System.UInt32&,System.UInt32,System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_EnumEvents_m4089E30FDFEEC276473CAF7C0CAE5370C25C0B9F (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __this, uint32_t* ___phEnum0, uint32_t ___td1, intptr_t ___rEvents2, uint32_t ___cMax3, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::GetEventProps(System.UInt32,System.UInt32&,System.Text.StringBuilder,System.UInt32,System.UInt32&,System.UInt32&,System.UInt32&,System.UInt32&,System.UInt32&,System.UInt32&,System.UInt32[],System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_GetEventProps_m94FB1FFEC2DB6D05796CD61E984B8D6D28F88A81 (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __this, uint32_t ___ev0, uint32_t* ___pClass1, StringBuilder_t* ___szEvent2, uint32_t ___cchEvent3, uint32_t* ___pchEvent4, uint32_t* ___pdwEventFlags5, uint32_t* ___ptkEventType6, uint32_t* ___pmdAddOn7, uint32_t* ___pmdRemoveOn8, uint32_t* ___pmdFire9, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___rmdOtherMethod10, uint32_t ___cMax11, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::EnumMethodSemantics(System.UInt32&,System.UInt32,System.UInt32[],System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_EnumMethodSemantics_m68AAA4BD84C2189226AC97707E62D0D4E2EC9584 (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __this, uint32_t* ___phEnum0, uint32_t ___mb1, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___rEventProp2, uint32_t ___cMax3, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::GetMethodSemantics(System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_GetMethodSemantics_m0171FC6F26E5E3D8B34D18501AF7B21EDC6B1A19 (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __this, uint32_t ___mb0, uint32_t ___tkEventProp1, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::GetClassLayout(System.UInt32,System.UInt32&,System.IntPtr,System.UInt32,System.UInt32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_GetClassLayout_m4DB131D6DCAF3B4DAC50DCFF84FE33476A15A4A1 (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __this, uint32_t ___td0, uint32_t* ___pdwPackSize1, intptr_t ___rFieldOffset2, uint32_t ___cMax3, uint32_t* ___pcFieldOffset4, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::GetFieldMarshal(System.UInt32,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_GetFieldMarshal_mB22E84F692E2F1B889A8F67B0357FB1479960BBE (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __this, uint32_t ___tk0, intptr_t* ___ppvNativeType1, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::GetRVA(System.UInt32,System.UInt32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_GetRVA_m226188F119A096CF68662FE261BB5D4E5C59627E (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __this, uint32_t ___tk0, uint32_t* ___pulCodeRVA1, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::GetPermissionSetProps(System.UInt32,System.UInt32&,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_GetPermissionSetProps_mD490FBAB57FA2712415334420F9D6812E83E4D5E (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __this, uint32_t ___pm0, uint32_t* ___pdwAction1, intptr_t* ___ppvPermission2, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::GetSigFromToken(System.UInt32,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_GetSigFromToken_m7072CF81198BF818A4808978680D4E6C60B970FC (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __this, uint32_t ___mdSig0, intptr_t* ___ppvSig1, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::GetModuleRefProps(System.UInt32,System.Text.StringBuilder,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_GetModuleRefProps_m17454D4A0989FCA9A3F99D5565E2CC4866DFC4A4 (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __this, uint32_t ___mur0, StringBuilder_t* ___szName1, uint32_t ___cchName2, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::EnumModuleRefs(System.UInt32&,System.UInt32[],System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_EnumModuleRefs_m93727B61AE3410C019A2C6681CDC1F2A7D5ECC0A (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __this, uint32_t* ___phEnum0, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___rModuleRefs1, uint32_t ___cmax2, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::GetTypeSpecFromToken(System.UInt32,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_GetTypeSpecFromToken_mE3EC15FB29E8C359C1F91FE22A297F1AEC506C60 (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __this, uint32_t ___typespec0, intptr_t* ___ppvSig1, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::GetNameFromToken(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_GetNameFromToken_m9EE30B292061677EB2FCF2CD22CE89C4FB5E8D5A (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __this, uint32_t ___tk0, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::EnumUnresolvedMethods(System.UInt32&,System.UInt32[],System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_EnumUnresolvedMethods_mDCFD430F6F8AC29804E06025468B4DD796ED8053 (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __this, uint32_t* ___phEnum0, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___rMethods1, uint32_t ___cMax2, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::GetUserString(System.UInt32,System.Text.StringBuilder,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_GetUserString_m41538418E9CA8B074777A3E60FA7714D695D8BB5 (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __this, uint32_t ___stk0, StringBuilder_t* ___szString1, uint32_t ___cchString2, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::GetPinvokeMap(System.UInt32,System.UInt32&,System.Text.StringBuilder,System.UInt32,System.UInt32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_GetPinvokeMap_m179834BA7D466FAEFF4F3DF1957D92FA3E85E778 (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __this, uint32_t ___tk0, uint32_t* ___pdwMappingFlags1, StringBuilder_t* ___szImportName2, uint32_t ___cchImportName3, uint32_t* ___pchImportName4, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::EnumSignatures(System.UInt32&,System.UInt32[],System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_EnumSignatures_m29216F0FDB1F74A9EC861817DA2F7979299B19AE (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __this, uint32_t* ___phEnum0, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___rSignatures1, uint32_t ___cmax2, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::EnumTypeSpecs(System.UInt32&,System.UInt32[],System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_EnumTypeSpecs_m58FB99203E034DDC78FCC0808C116DF68B2D4734 (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __this, uint32_t* ___phEnum0, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___rTypeSpecs1, uint32_t ___cmax2, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::EnumUserStrings(System.UInt32&,System.UInt32[],System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_EnumUserStrings_m04D2C16ED174C66FDE6FC42EB19EDBBEB917B3FA (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __this, uint32_t* ___phEnum0, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___rStrings1, uint32_t ___cmax2, const RuntimeMethod* method) ;
// System.Int32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::GetParamForMethodIndex(System.UInt32,System.UInt32,System.UInt32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ModuleMetadata_GetParamForMethodIndex_m291E7157E53CEA57A2478114EF4734372C7993D4 (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __this, uint32_t ___md0, uint32_t ___ulParamSeq1, uint32_t* ___pParam2, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::EnumCustomAttributes(System.UInt32&,System.UInt32,System.UInt32,System.UInt32[],System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_EnumCustomAttributes_m82918528F02A8B51EA2764E57299F0D2A941B612 (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __this, uint32_t* ___phEnum0, uint32_t ___tk1, uint32_t ___tkType2, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___rCustomAttributes3, uint32_t ___cMax4, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::GetCustomAttributeProps(System.UInt32,System.UInt32&,System.UInt32&,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_GetCustomAttributeProps_mA3C199780F4601149CE38920A5ADE2D6D93CA78D (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __this, uint32_t ___cv0, uint32_t* ___ptkObj1, uint32_t* ___ptkType2, intptr_t* ___ppBlob3, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::FindTypeRef(System.UInt32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_FindTypeRef_mF91C92F8FE64261EDBD0F9CBA1E555F0C24486C7 (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __this, uint32_t ___tkResolutionScope0, String_t* ___szName1, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::GetMemberProps(System.UInt32,System.UInt32&,System.Text.StringBuilder,System.UInt32,System.UInt32&,System.UInt32&,System.IntPtr&,System.UInt32&,System.UInt32&,System.UInt32&,System.UInt32&,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_GetMemberProps_m34DDBF071B5EE1F64B143D59ADEA61CEE039646B (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __this, uint32_t ___mb0, uint32_t* ___pClass1, StringBuilder_t* ___szMember2, uint32_t ___cchMember3, uint32_t* ___pchMember4, uint32_t* ___pdwAttr5, intptr_t* ___ppvSigBlob6, uint32_t* ___pcbSigBlob7, uint32_t* ___pulCodeRVA8, uint32_t* ___pdwImplFlags9, uint32_t* ___pdwCPlusTypeFlag10, intptr_t* ___ppValue11, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::GetFieldProps(System.UInt32,System.UInt32&,System.Text.StringBuilder,System.UInt32,System.UInt32&,System.UInt32&,System.IntPtr&,System.UInt32&,System.UInt32&,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_GetFieldProps_mB2A10C18C5DD5B5146B4ECCF39FBBD151D165077 (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __this, uint32_t ___mb0, uint32_t* ___pClass1, StringBuilder_t* ___szField2, uint32_t ___cchField3, uint32_t* ___pchField4, uint32_t* ___pdwAttr5, intptr_t* ___ppvSigBlob6, uint32_t* ___pcbSigBlob7, uint32_t* ___pdwCPlusTypeFlag8, intptr_t* ___ppValue9, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::GetPropertyProps(System.UInt32,System.UInt32&,System.Text.StringBuilder,System.UInt32,System.UInt32&,System.UInt32&,System.IntPtr&,System.UInt32&,System.UInt32&,System.IntPtr&,System.UInt32&,System.UInt32&,System.UInt32&,System.UInt32[],System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_GetPropertyProps_m3B84DB01251C027B3250D06C5B4C3621731579C8 (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __this, uint32_t ___prop0, uint32_t* ___pClass1, StringBuilder_t* ___szProperty2, uint32_t ___cchProperty3, uint32_t* ___pchProperty4, uint32_t* ___pdwPropFlags5, intptr_t* ___ppvSig6, uint32_t* ___pbSig7, uint32_t* ___pdwCPlusTypeFlag8, intptr_t* ___ppDefaultValue9, uint32_t* ___pcchDefaultValue10, uint32_t* ___pmdSetter11, uint32_t* ___pmdGetter12, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___rmdOtherMethod13, uint32_t ___cMax14, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::GetParamProps(System.UInt32,System.UInt32&,System.UInt32&,System.Text.StringBuilder,System.UInt32,System.UInt32&,System.UInt32&,System.UInt32&,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_GetParamProps_mF5FC49FCA18D465D6E1B2DED57799423F5F84138 (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __this, uint32_t ___tk0, uint32_t* ___pmd1, uint32_t* ___pulSequence2, StringBuilder_t* ___szName3, uint32_t ___cchName4, uint32_t* ___pchName5, uint32_t* ___pdwAttr6, uint32_t* ___pdwCPlusTypeFlag7, intptr_t* ___ppValue8, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::GetCustomAttributeByName(System.UInt32,System.String,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_GetCustomAttributeByName_mC90FBC388C6041B284A237D4F1EA86544905DDFB (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __this, uint32_t ___tkObj0, String_t* ___szName1, intptr_t* ___ppData2, const RuntimeMethod* method) ;
// System.Boolean ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::IsValidToken(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ModuleMetadata_IsValidToken_m1ED55ED480E220B3D09F6ABB21167B0DEF61B1AF (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __this, uint32_t ___tk0, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::GetNestedClassProps(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_GetNestedClassProps_m717051053B2063D31149748215113F6ADB13C60B (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __this, uint32_t ___tdNestedClass0, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::GetNativeCallConvFromSig(System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_GetNativeCallConvFromSig_m916E8A59275973291005C971E98A06F07AC9DC78 (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __this, intptr_t ___pvSig0, uint32_t ___cbSig1, const RuntimeMethod* method) ;
// System.Int32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::IsGlobal(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ModuleMetadata_IsGlobal_m45A0732A6EE4C898ABFB13E3AA28469F97567D76 (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __this, uint32_t ___pd0, const RuntimeMethod* method) ;

// COM Callable Wrapper for ILRuntime.Mono.Cecil.Pdb.ModuleMetadata
struct ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8_ComCallableWrapper>, IMetaDataEmit_tED2D8D4818050B8E1945A8A5BB85414139BDFE98, IMetaDataImport_tF05FD2344E376C091B8D54AFD5D8181A3C800785
{
	inline ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IMetaDataEmit_tED2D8D4818050B8E1945A8A5BB85414139BDFE98::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IMetaDataEmit_tED2D8D4818050B8E1945A8A5BB85414139BDFE98*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IMetaDataImport_tF05FD2344E376C091B8D54AFD5D8181A3C800785::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IMetaDataImport_tF05FD2344E376C091B8D54AFD5D8181A3C800785*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_SetModuleProps_mA95041EDAECCC37915021E6E0DBC595348E4CCE7(Il2CppChar* ___szName0) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___szName0' to managed representation
		String_t* ____szName0_unmarshaled = NULL;
		____szName0_unmarshaled = il2cpp_codegen_marshal_bstring_result(___szName0);

		// Managed method invocation
		try
		{
			ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __thisValue = (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8*)GetManagedObjectInline();
			ModuleMetadata_SetModuleProps_mE7EFF8B292EA5C1ED532203DD64426D3880EACDA(__thisValue, ____szName0_unmarshaled, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_Save_m734310A1C6AEB32128984A4AFC727B95FD90950B(Il2CppChar* ___szFile0, uint32_t ___dwSaveFlags1) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___szFile0' to managed representation
		String_t* ____szFile0_unmarshaled = NULL;
		____szFile0_unmarshaled = il2cpp_codegen_marshal_bstring_result(___szFile0);

		// Managed method invocation
		try
		{
			ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __thisValue = (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8*)GetManagedObjectInline();
			ModuleMetadata_Save_m48EF8B24F78519FFCA14F835DB0D0DD27F4E4527(__thisValue, ____szFile0_unmarshaled, ___dwSaveFlags1, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_SaveToStream_m8B9D635E13D97A5CD7C5C13E010AAF35FC1A2893(intptr_t ___pIStream0, uint32_t ___dwSaveFlags1) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __thisValue = (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8*)GetManagedObjectInline();
			ModuleMetadata_SaveToStream_m2C0B282F083CC8E1E995888EFBB91C1D9B120D0A(__thisValue, ___pIStream0, ___dwSaveFlags1, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_GetSaveSize_mA0368EAF147D05B19F4C17268A06411C2F9B8706(uint32_t ___fSave0, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __thisValue = (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8*)GetManagedObjectInline();
			returnValue = ModuleMetadata_GetSaveSize_m6DD39C39A13788D703847743A6E0CED56CC2BE5E(__thisValue, ___fSave0, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_DefineTypeDef_m4577EA3EAF8F0302606E32E3C512BABAAD458BBD(intptr_t ___szTypeDef0, uint32_t ___dwTypeDefFlags1, uint32_t ___tkExtends2, intptr_t ___rtkImplements3, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __thisValue = (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8*)GetManagedObjectInline();
			returnValue = ModuleMetadata_DefineTypeDef_mBF3C3EF4E12D0641D8B2AC6CF5258BB5C5F9520C(__thisValue, ___szTypeDef0, ___dwTypeDefFlags1, ___tkExtends2, ___rtkImplements3, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_DefineNestedType_m20122A46A4D9773476CC3FFECBBEA72F04DB3F97(intptr_t ___szTypeDef0, uint32_t ___dwTypeDefFlags1, uint32_t ___tkExtends2, intptr_t ___rtkImplements3, uint32_t ___tdEncloser4, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __thisValue = (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8*)GetManagedObjectInline();
			returnValue = ModuleMetadata_DefineNestedType_m4C3C4BCB8AADAA4E9A1417C36D152D9E1149866E(__thisValue, ___szTypeDef0, ___dwTypeDefFlags1, ___tkExtends2, ___rtkImplements3, ___tdEncloser4, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_SetHandler_mEDE6769A8218B7A646979648F9722E1C8238EB38(Il2CppIUnknown* ___pUnk0) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Il2CppComObject_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___pUnk0' to managed representation
		RuntimeObject* ____pUnk0_unmarshaled = NULL;
		if (___pUnk0 != NULL)
		{
			____pUnk0_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iunknown<RuntimeObject>(___pUnk0, Il2CppComObject_il2cpp_TypeInfo_var);

			if (il2cpp_codegen_is_import_or_windows_runtime(____pUnk0_unmarshaled))
			{
				il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(____pUnk0_unmarshaled), Il2CppIUnknown::IID, ___pUnk0);
			}
		}
		else
		{
			____pUnk0_unmarshaled = NULL;
		}

		// Managed method invocation
		try
		{
			ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __thisValue = (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8*)GetManagedObjectInline();
			ModuleMetadata_SetHandler_mF68B97FBA0C659FBE1421F85577D51E00C410E4D(__thisValue, ____pUnk0_unmarshaled, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_DefineMethod_m6E35D3575B489F30BC79F4EE506CDFCB86D36F49(uint32_t ___td0, intptr_t ___zName1, uint32_t ___dwMethodFlags2, intptr_t ___pvSigBlob3, uint32_t ___cbSigBlob4, uint32_t ___ulCodeRVA5, uint32_t ___dwImplFlags6, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __thisValue = (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8*)GetManagedObjectInline();
			returnValue = ModuleMetadata_DefineMethod_mBB8F9863B1D0C8C97C11A428C513476D4FFF79DF(__thisValue, ___td0, ___zName1, ___dwMethodFlags2, ___pvSigBlob3, ___cbSigBlob4, ___ulCodeRVA5, ___dwImplFlags6, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_DefineMethodImpl_m8467A4D88FA95BDDA6E360A7D08C6C5244B661BD(uint32_t ___td0, uint32_t ___tkBody1, uint32_t ___tkDecl2) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __thisValue = (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8*)GetManagedObjectInline();
			ModuleMetadata_DefineMethodImpl_mDAE986584C668446FC4E392897DED417392279D7(__thisValue, ___td0, ___tkBody1, ___tkDecl2, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_DefineTypeRefByName_m499F73B64F249096E684C7EA0E8ECE24D02E6720(uint32_t ___tkResolutionScope0, intptr_t ___szName1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __thisValue = (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8*)GetManagedObjectInline();
			returnValue = ModuleMetadata_DefineTypeRefByName_mBEB0781E8F4EDFA68CD42073B9502353AA9FF218(__thisValue, ___tkResolutionScope0, ___szName1, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_DefineImportType_m4A43439624732E1E4C4A4ACA156E624A998643C8(intptr_t ___pAssemImport0, intptr_t ___pbHashValue1, uint32_t ___cbHashValue2, IMetaDataImport_tF05FD2344E376C091B8D54AFD5D8181A3C800785* ___pImport3, uint32_t ___tdImport4, intptr_t ___pAssemEmit5, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Il2CppComObject_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___pImport3' to managed representation
		RuntimeObject* ____pImport3_unmarshaled = NULL;
		if (___pImport3 != NULL)
		{
			____pImport3_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iunknown<RuntimeObject>(___pImport3, Il2CppComObject_il2cpp_TypeInfo_var);

			if (il2cpp_codegen_is_import_or_windows_runtime(____pImport3_unmarshaled))
			{
				il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(____pImport3_unmarshaled), IMetaDataImport_tF05FD2344E376C091B8D54AFD5D8181A3C800785::IID, ___pImport3);
			}
		}
		else
		{
			____pImport3_unmarshaled = NULL;
		}

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __thisValue = (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8*)GetManagedObjectInline();
			returnValue = ModuleMetadata_DefineImportType_mED5546455BD96ED4E35ADD65ED2CE05C1E8D876C(__thisValue, ___pAssemImport0, ___pbHashValue1, ___cbHashValue2, ____pImport3_unmarshaled, ___tdImport4, ___pAssemEmit5, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_DefineMemberRef_m5857774AF02A1C740F59FFE7E659D08BB50B313B(uint32_t ___tkImport0, Il2CppChar* ___szName1, intptr_t ___pvSigBlob2, uint32_t ___cbSigBlob3, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___szName1' to managed representation
		String_t* ____szName1_unmarshaled = NULL;
		____szName1_unmarshaled = il2cpp_codegen_marshal_bstring_result(___szName1);

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __thisValue = (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8*)GetManagedObjectInline();
			returnValue = ModuleMetadata_DefineMemberRef_m2FE2A7F9901ED3A34F1339A9BA2F7DD894F82061(__thisValue, ___tkImport0, ____szName1_unmarshaled, ___pvSigBlob2, ___cbSigBlob3, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_DefineImportMember_mBDE0458F492D68FF57C76F713BCC6BA690B45E19(intptr_t ___pAssemImport0, intptr_t ___pbHashValue1, uint32_t ___cbHashValue2, IMetaDataImport_tF05FD2344E376C091B8D54AFD5D8181A3C800785* ___pImport3, uint32_t ___mbMember4, intptr_t ___pAssemEmit5, uint32_t ___tkParent6, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Il2CppComObject_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___pImport3' to managed representation
		RuntimeObject* ____pImport3_unmarshaled = NULL;
		if (___pImport3 != NULL)
		{
			____pImport3_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iunknown<RuntimeObject>(___pImport3, Il2CppComObject_il2cpp_TypeInfo_var);

			if (il2cpp_codegen_is_import_or_windows_runtime(____pImport3_unmarshaled))
			{
				il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(____pImport3_unmarshaled), IMetaDataImport_tF05FD2344E376C091B8D54AFD5D8181A3C800785::IID, ___pImport3);
			}
		}
		else
		{
			____pImport3_unmarshaled = NULL;
		}

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __thisValue = (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8*)GetManagedObjectInline();
			returnValue = ModuleMetadata_DefineImportMember_mB430601DFF63DEE9CF6CD62DCEC1AAB076974497(__thisValue, ___pAssemImport0, ___pbHashValue1, ___cbHashValue2, ____pImport3_unmarshaled, ___mbMember4, ___pAssemEmit5, ___tkParent6, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_DefineEvent_mBC3CF30937646EF70B81CD1FB54CC177AF0F0380(uint32_t ___td0, Il2CppChar* ___szEvent1, uint32_t ___dwEventFlags2, uint32_t ___tkEventType3, uint32_t ___mdAddOn4, uint32_t ___mdRemoveOn5, uint32_t ___mdFire6, intptr_t ___rmdOtherMethods7, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___szEvent1' to managed representation
		String_t* ____szEvent1_unmarshaled = NULL;
		____szEvent1_unmarshaled = il2cpp_codegen_marshal_bstring_result(___szEvent1);

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __thisValue = (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8*)GetManagedObjectInline();
			returnValue = ModuleMetadata_DefineEvent_m123A4FCCC07C6D1860903FC531862BE4EBA3D749(__thisValue, ___td0, ____szEvent1_unmarshaled, ___dwEventFlags2, ___tkEventType3, ___mdAddOn4, ___mdRemoveOn5, ___mdFire6, ___rmdOtherMethods7, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_SetClassLayout_m729AC4762E8882A525802E471446479B3A48A873(uint32_t ___td0, uint32_t ___dwPackSize1, intptr_t ___rFieldOffsets2, uint32_t ___ulClassSize3) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __thisValue = (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8*)GetManagedObjectInline();
			ModuleMetadata_SetClassLayout_m4BF0DAD3F3037AF8ED0142A3D56F8A0DC7197D2F(__thisValue, ___td0, ___dwPackSize1, ___rFieldOffsets2, ___ulClassSize3, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_DeleteClassLayout_m9E4081DA527705EE0A76E954A8FCD4080BEDCA69(uint32_t ___td0) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __thisValue = (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8*)GetManagedObjectInline();
			ModuleMetadata_DeleteClassLayout_mAC904F4652C8EA692E2C7CBABFE1A2767E52E0AF(__thisValue, ___td0, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_SetFieldMarshal_mA6557A99FDA18287EC2D486DA421B16FAC7FF3B7(uint32_t ___tk0, intptr_t ___pvNativeType1, uint32_t ___cbNativeType2) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __thisValue = (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8*)GetManagedObjectInline();
			ModuleMetadata_SetFieldMarshal_mF751045E1C524A532D8550CEB008265C524A6684(__thisValue, ___tk0, ___pvNativeType1, ___cbNativeType2, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_DeleteFieldMarshal_m7BEE27C7BFAB29BC898D3E9329DD0DDF412B40F7(uint32_t ___tk0) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __thisValue = (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8*)GetManagedObjectInline();
			ModuleMetadata_DeleteFieldMarshal_mF2D844241050C459EECA9B12178BFBBCEA24394D(__thisValue, ___tk0, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_DefinePermissionSet_m1E471D65BBFC2E93DE14D91AFE9FB0D814090300(uint32_t ___tk0, uint32_t ___dwAction1, intptr_t ___pvPermission2, uint32_t ___cbPermission3, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __thisValue = (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8*)GetManagedObjectInline();
			returnValue = ModuleMetadata_DefinePermissionSet_mADB2C6F541CEDE6C0C4E7F65709741DB39ADD4F4(__thisValue, ___tk0, ___dwAction1, ___pvPermission2, ___cbPermission3, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_SetRVA_m4B7B7E086E97BEB4499628813E26AC2D6275B639(uint32_t ___md0, uint32_t ___ulRVA1) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __thisValue = (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8*)GetManagedObjectInline();
			ModuleMetadata_SetRVA_m2FD393942A3901BED63FD43D382F09AB832EB561(__thisValue, ___md0, ___ulRVA1, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_GetTokenFromSig_mF3AF3B9567A1886DF9510517A820914A90BA5E97(intptr_t ___pvSig0, uint32_t ___cbSig1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __thisValue = (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8*)GetManagedObjectInline();
			returnValue = ModuleMetadata_GetTokenFromSig_m145B283ABDA2EDC677A95FCD5574BFF100BC223E(__thisValue, ___pvSig0, ___cbSig1, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_DefineModuleRef_m9F092C783095B8E843D05BCBB1DE2A2C53C724EE(Il2CppChar* ___szName0, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___szName0' to managed representation
		String_t* ____szName0_unmarshaled = NULL;
		____szName0_unmarshaled = il2cpp_codegen_marshal_bstring_result(___szName0);

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __thisValue = (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8*)GetManagedObjectInline();
			returnValue = ModuleMetadata_DefineModuleRef_m0359B984D28AE6407DF3E0A00F56D01109016797(__thisValue, ____szName0_unmarshaled, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_SetParent_m214FB04FDAE3BE2FBBED9DC1AD9426C419F89801(uint32_t ___mr0, uint32_t ___tk1) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __thisValue = (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8*)GetManagedObjectInline();
			ModuleMetadata_SetParent_m92ECEC015A4CF8AB876E217C6884DF3837B4AAF1(__thisValue, ___mr0, ___tk1, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_GetTokenFromTypeSpec_m4982C0256D76789A041D1F6848FA9F0F034265C9(intptr_t ___pvSig0, uint32_t ___cbSig1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __thisValue = (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8*)GetManagedObjectInline();
			returnValue = ModuleMetadata_GetTokenFromTypeSpec_m5F792CD22F43D58B4D35D2D3CA83F3E85EE15DFB(__thisValue, ___pvSig0, ___cbSig1, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_SaveToMemory_mE31EBD7118E922D762C8B0A1F2D14CCDEBFDC7F2(intptr_t ___pbData0, uint32_t ___cbData1) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __thisValue = (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8*)GetManagedObjectInline();
			ModuleMetadata_SaveToMemory_m5243B934470ECFB4F60C94A12873D482B9E75342(__thisValue, ___pbData0, ___cbData1, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_DefineUserString_m988DEA674D8B50C2368B41C655C0602EE0B4AFA9(Il2CppChar* ___szString0, uint32_t ___cchString1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___szString0' to managed representation
		String_t* ____szString0_unmarshaled = NULL;
		____szString0_unmarshaled = il2cpp_codegen_marshal_bstring_result(___szString0);

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __thisValue = (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8*)GetManagedObjectInline();
			returnValue = ModuleMetadata_DefineUserString_m37DAACB50F4FC7137D2A3016560F27EE2D43BB12(__thisValue, ____szString0_unmarshaled, ___cchString1, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_DeleteToken_m751EF495D3195261AAD68CFA2A9D448237DAC024(uint32_t ___tkObj0) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __thisValue = (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8*)GetManagedObjectInline();
			ModuleMetadata_DeleteToken_m71FCF519E2D82A578C9D2FC431EC00C64C5D0EE7(__thisValue, ___tkObj0, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_SetMethodProps_m0BBDEA217A075BBC1A3BB932975543B92E2DF2D8(uint32_t ___md0, uint32_t ___dwMethodFlags1, uint32_t ___ulCodeRVA2, uint32_t ___dwImplFlags3) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __thisValue = (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8*)GetManagedObjectInline();
			ModuleMetadata_SetMethodProps_mC8FFAD7ADF45546420E72B01CF49E30BE0844BEA(__thisValue, ___md0, ___dwMethodFlags1, ___ulCodeRVA2, ___dwImplFlags3, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_SetTypeDefProps_m8429ED98CB583B18D4ACA683F9C285CBDC67D930(uint32_t ___td0, uint32_t ___dwTypeDefFlags1, uint32_t ___tkExtends2, intptr_t ___rtkImplements3) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __thisValue = (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8*)GetManagedObjectInline();
			ModuleMetadata_SetTypeDefProps_mF98FD1C33516BC25EBFE0049329F43122DECD0D2(__thisValue, ___td0, ___dwTypeDefFlags1, ___tkExtends2, ___rtkImplements3, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_SetEventProps_m3AC574F5EF111BCEE41896D96C64EFA5A878619A(uint32_t ___ev0, uint32_t ___dwEventFlags1, uint32_t ___tkEventType2, uint32_t ___mdAddOn3, uint32_t ___mdRemoveOn4, uint32_t ___mdFire5, intptr_t ___rmdOtherMethods6) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __thisValue = (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8*)GetManagedObjectInline();
			ModuleMetadata_SetEventProps_m89E28F08AF6A309C8D88F46A50E12014FC09B33B(__thisValue, ___ev0, ___dwEventFlags1, ___tkEventType2, ___mdAddOn3, ___mdRemoveOn4, ___mdFire5, ___rmdOtherMethods6, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_SetPermissionSetProps_m8F3CA84D5074ED46FB1EAB9EC5A93284F70248FE(uint32_t ___tk0, uint32_t ___dwAction1, intptr_t ___pvPermission2, uint32_t ___cbPermission3, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __thisValue = (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8*)GetManagedObjectInline();
			returnValue = ModuleMetadata_SetPermissionSetProps_mF33AFE8040BF10FE685EAAC3675E9A7BA24EFCAC(__thisValue, ___tk0, ___dwAction1, ___pvPermission2, ___cbPermission3, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_DefinePinvokeMap_mE15FF9315265EF61F8FD878583C2112E0EC95C9F(uint32_t ___tk0, uint32_t ___dwMappingFlags1, Il2CppChar* ___szImportName2, uint32_t ___mrImportDLL3) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___szImportName2' to managed representation
		String_t* ____szImportName2_unmarshaled = NULL;
		____szImportName2_unmarshaled = il2cpp_codegen_marshal_bstring_result(___szImportName2);

		// Managed method invocation
		try
		{
			ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __thisValue = (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8*)GetManagedObjectInline();
			ModuleMetadata_DefinePinvokeMap_m293911AE14EA4BD09F8C1A0F6D3C9FAE9F38C781(__thisValue, ___tk0, ___dwMappingFlags1, ____szImportName2_unmarshaled, ___mrImportDLL3, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_SetPinvokeMap_m92D8D381913A17D6B79A8197BCEB46BBFB5E13B9(uint32_t ___tk0, uint32_t ___dwMappingFlags1, Il2CppChar* ___szImportName2, uint32_t ___mrImportDLL3) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___szImportName2' to managed representation
		String_t* ____szImportName2_unmarshaled = NULL;
		____szImportName2_unmarshaled = il2cpp_codegen_marshal_bstring_result(___szImportName2);

		// Managed method invocation
		try
		{
			ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __thisValue = (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8*)GetManagedObjectInline();
			ModuleMetadata_SetPinvokeMap_m6219A3F31720EB8391BB1CF325D0F23C96E721D5(__thisValue, ___tk0, ___dwMappingFlags1, ____szImportName2_unmarshaled, ___mrImportDLL3, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_DeletePinvokeMap_m3FCD19D6A9EC82786FF116BCC40DFBAE815D2528(uint32_t ___tk0) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __thisValue = (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8*)GetManagedObjectInline();
			ModuleMetadata_DeletePinvokeMap_m56FCC1B4E5472104366A24EB9C91B0B724F1D25A(__thisValue, ___tk0, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_DefineCustomAttribute_m909DF644BCF47256D1F3225EEFEC319BE9C0909B(uint32_t ___tkObj0, uint32_t ___tkType1, intptr_t ___pCustomAttribute2, uint32_t ___cbCustomAttribute3, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __thisValue = (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8*)GetManagedObjectInline();
			returnValue = ModuleMetadata_DefineCustomAttribute_m7AA9B2452ACD2DD7340037627F4E70DC6439E6F6(__thisValue, ___tkObj0, ___tkType1, ___pCustomAttribute2, ___cbCustomAttribute3, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_SetCustomAttributeValue_m7036504233BDDA573BE8CAF0666DF8AB3D4817B0(uint32_t ___pcv0, intptr_t ___pCustomAttribute1, uint32_t ___cbCustomAttribute2) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __thisValue = (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8*)GetManagedObjectInline();
			ModuleMetadata_SetCustomAttributeValue_mF3FA0B85584FCEBD17F47B712F2BD9DA17872965(__thisValue, ___pcv0, ___pCustomAttribute1, ___cbCustomAttribute2, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_DefineField_m63F3C34BD0F13C182AB0BA8E69ED1B1396A8888E(uint32_t ___td0, Il2CppChar* ___szName1, uint32_t ___dwFieldFlags2, intptr_t ___pvSigBlob3, uint32_t ___cbSigBlob4, uint32_t ___dwCPlusTypeFlag5, intptr_t ___pValue6, uint32_t ___cchValue7, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___szName1' to managed representation
		String_t* ____szName1_unmarshaled = NULL;
		____szName1_unmarshaled = il2cpp_codegen_marshal_bstring_result(___szName1);

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __thisValue = (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8*)GetManagedObjectInline();
			returnValue = ModuleMetadata_DefineField_mAACB1BEEC4BF8687811A5F1D72F86FC4A1361C54(__thisValue, ___td0, ____szName1_unmarshaled, ___dwFieldFlags2, ___pvSigBlob3, ___cbSigBlob4, ___dwCPlusTypeFlag5, ___pValue6, ___cchValue7, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_DefineProperty_m7D50E37EBE3C19EF8B87E996F63EC2CA0F90FEF5(uint32_t ___td0, Il2CppChar* ___szProperty1, uint32_t ___dwPropFlags2, intptr_t ___pvSig3, uint32_t ___cbSig4, uint32_t ___dwCPlusTypeFlag5, intptr_t ___pValue6, uint32_t ___cchValue7, uint32_t ___mdSetter8, uint32_t ___mdGetter9, intptr_t ___rmdOtherMethods10, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___szProperty1' to managed representation
		String_t* ____szProperty1_unmarshaled = NULL;
		____szProperty1_unmarshaled = il2cpp_codegen_marshal_bstring_result(___szProperty1);

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __thisValue = (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8*)GetManagedObjectInline();
			returnValue = ModuleMetadata_DefineProperty_mA6511E8170601FE5CB1D3678F5AE76C0408D611F(__thisValue, ___td0, ____szProperty1_unmarshaled, ___dwPropFlags2, ___pvSig3, ___cbSig4, ___dwCPlusTypeFlag5, ___pValue6, ___cchValue7, ___mdSetter8, ___mdGetter9, ___rmdOtherMethods10, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_DefineParam_mD4D46D8B8B2A64FC708F30E2591754E7F1D00B52(uint32_t ___md0, uint32_t ___ulParamSeq1, Il2CppChar* ___szName2, uint32_t ___dwParamFlags3, uint32_t ___dwCPlusTypeFlag4, intptr_t ___pValue5, uint32_t ___cchValue6, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___szName2' to managed representation
		String_t* ____szName2_unmarshaled = NULL;
		____szName2_unmarshaled = il2cpp_codegen_marshal_bstring_result(___szName2);

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __thisValue = (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8*)GetManagedObjectInline();
			returnValue = ModuleMetadata_DefineParam_mEC750CE8B47416D33EEA2A6AD561EDEBF9AEBE3C(__thisValue, ___md0, ___ulParamSeq1, ____szName2_unmarshaled, ___dwParamFlags3, ___dwCPlusTypeFlag4, ___pValue5, ___cchValue6, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_SetFieldProps_m1ADC0456DF7673834043C03755B729F6C608EBC5(uint32_t ___fd0, uint32_t ___dwFieldFlags1, uint32_t ___dwCPlusTypeFlag2, intptr_t ___pValue3, uint32_t ___cchValue4) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __thisValue = (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8*)GetManagedObjectInline();
			ModuleMetadata_SetFieldProps_mD2E6D0453CFDA932AC496EA95CD25D55081D41B1(__thisValue, ___fd0, ___dwFieldFlags1, ___dwCPlusTypeFlag2, ___pValue3, ___cchValue4, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_SetPropertyProps_m6AE92CFE077D25824808D0C3B9B62A4F3FDDA258(uint32_t ___pr0, uint32_t ___dwPropFlags1, uint32_t ___dwCPlusTypeFlag2, intptr_t ___pValue3, uint32_t ___cchValue4, uint32_t ___mdSetter5, uint32_t ___mdGetter6, intptr_t ___rmdOtherMethods7) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __thisValue = (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8*)GetManagedObjectInline();
			ModuleMetadata_SetPropertyProps_mB9AACCDB7689176723AC58F39AC4BA955472739F(__thisValue, ___pr0, ___dwPropFlags1, ___dwCPlusTypeFlag2, ___pValue3, ___cchValue4, ___mdSetter5, ___mdGetter6, ___rmdOtherMethods7, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_SetParamProps_m94DC5ED8820CB86A3EA37388EB8D454C80CE7D01(uint32_t ___pd0, Il2CppChar* ___szName1, uint32_t ___dwParamFlags2, uint32_t ___dwCPlusTypeFlag3, intptr_t ___pValue4, uint32_t ___cchValue5) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___szName1' to managed representation
		String_t* ____szName1_unmarshaled = NULL;
		____szName1_unmarshaled = il2cpp_codegen_marshal_bstring_result(___szName1);

		// Managed method invocation
		try
		{
			ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __thisValue = (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8*)GetManagedObjectInline();
			ModuleMetadata_SetParamProps_m35145464C918BF02644EEC2A234BFAFABF5010D7(__thisValue, ___pd0, ____szName1_unmarshaled, ___dwParamFlags2, ___dwCPlusTypeFlag3, ___pValue4, ___cchValue5, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_DefineSecurityAttributeSet_mCAE9140C9B61A7222426875240532B70603C447A(uint32_t ___tkObj0, intptr_t ___rSecAttrs1, uint32_t ___cSecAttrs2, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __thisValue = (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8*)GetManagedObjectInline();
			returnValue = ModuleMetadata_DefineSecurityAttributeSet_m8B628029AF9AF24DA4906FF6F09EDC1E45809041(__thisValue, ___tkObj0, ___rSecAttrs1, ___cSecAttrs2, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_ApplyEditAndContinue_m505AD1CA3C1C1DB26EDE372F4F93B7B2D46A1EA9(Il2CppIUnknown* ___pImport0) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Il2CppComObject_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___pImport0' to managed representation
		RuntimeObject* ____pImport0_unmarshaled = NULL;
		if (___pImport0 != NULL)
		{
			____pImport0_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iunknown<RuntimeObject>(___pImport0, Il2CppComObject_il2cpp_TypeInfo_var);

			if (il2cpp_codegen_is_import_or_windows_runtime(____pImport0_unmarshaled))
			{
				il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(____pImport0_unmarshaled), Il2CppIUnknown::IID, ___pImport0);
			}
		}
		else
		{
			____pImport0_unmarshaled = NULL;
		}

		// Managed method invocation
		try
		{
			ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __thisValue = (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8*)GetManagedObjectInline();
			ModuleMetadata_ApplyEditAndContinue_mBA31B2F644B73E054AC43DDDD8B7832E2FD4BF7F(__thisValue, ____pImport0_unmarshaled, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_TranslateSigWithScope_mFE0AED8DC499101779400CEA6CF308BDC677C3B1(intptr_t ___pAssemImport0, intptr_t ___pbHashValue1, uint32_t ___cbHashValue2, IMetaDataImport_tF05FD2344E376C091B8D54AFD5D8181A3C800785* ___import3, intptr_t ___pbSigBlob4, uint32_t ___cbSigBlob5, intptr_t ___pAssemEmit6, IMetaDataEmit_tED2D8D4818050B8E1945A8A5BB85414139BDFE98* ___emit7, intptr_t ___pvTranslatedSig8, uint32_t ___cbTranslatedSigMax9, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Il2CppComObject_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___import3' to managed representation
		RuntimeObject* ____import3_unmarshaled = NULL;
		if (___import3 != NULL)
		{
			____import3_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iunknown<RuntimeObject>(___import3, Il2CppComObject_il2cpp_TypeInfo_var);

			if (il2cpp_codegen_is_import_or_windows_runtime(____import3_unmarshaled))
			{
				il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(____import3_unmarshaled), IMetaDataImport_tF05FD2344E376C091B8D54AFD5D8181A3C800785::IID, ___import3);
			}
		}
		else
		{
			____import3_unmarshaled = NULL;
		}

		// Marshaling of parameter '___emit7' to managed representation
		RuntimeObject* ____emit7_unmarshaled = NULL;
		if (___emit7 != NULL)
		{
			____emit7_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iunknown<RuntimeObject>(___emit7, Il2CppComObject_il2cpp_TypeInfo_var);

			if (il2cpp_codegen_is_import_or_windows_runtime(____emit7_unmarshaled))
			{
				il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(____emit7_unmarshaled), IMetaDataEmit_tED2D8D4818050B8E1945A8A5BB85414139BDFE98::IID, ___emit7);
			}
		}
		else
		{
			____emit7_unmarshaled = NULL;
		}

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __thisValue = (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8*)GetManagedObjectInline();
			returnValue = ModuleMetadata_TranslateSigWithScope_m589A238725D73877124B82D83B5DFCCF122EA075(__thisValue, ___pAssemImport0, ___pbHashValue1, ___cbHashValue2, ____import3_unmarshaled, ___pbSigBlob4, ___cbSigBlob5, ___pAssemEmit6, ____emit7_unmarshaled, ___pvTranslatedSig8, ___cbTranslatedSigMax9, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_SetMethodImplFlags_m9278D5A5985759C7099F42F6F1382A2C70121029(uint32_t ___md0, uint32_t ___dwImplFlags1) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __thisValue = (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8*)GetManagedObjectInline();
			ModuleMetadata_SetMethodImplFlags_mAF645C849E9D59E153655D72C885ED16428B8785(__thisValue, ___md0, ___dwImplFlags1, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_SetFieldRVA_m6E4A2B68AC40F66BAB29C906B3DB35CE0FA86B13(uint32_t ___fd0, uint32_t ___ulRVA1) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __thisValue = (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8*)GetManagedObjectInline();
			ModuleMetadata_SetFieldRVA_mC7E5377AC7E47E8B39A62E00DFA306246DF2FDE7(__thisValue, ___fd0, ___ulRVA1, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_Merge_m4B1D5FC261D35334324BBBD920A9646E4294DC6D(IMetaDataImport_tF05FD2344E376C091B8D54AFD5D8181A3C800785* ___pImport0, intptr_t ___pHostMapToken1, Il2CppIUnknown* ___pHandler2) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Il2CppComObject_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___pImport0' to managed representation
		RuntimeObject* ____pImport0_unmarshaled = NULL;
		if (___pImport0 != NULL)
		{
			____pImport0_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iunknown<RuntimeObject>(___pImport0, Il2CppComObject_il2cpp_TypeInfo_var);

			if (il2cpp_codegen_is_import_or_windows_runtime(____pImport0_unmarshaled))
			{
				il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(____pImport0_unmarshaled), IMetaDataImport_tF05FD2344E376C091B8D54AFD5D8181A3C800785::IID, ___pImport0);
			}
		}
		else
		{
			____pImport0_unmarshaled = NULL;
		}

		// Marshaling of parameter '___pHandler2' to managed representation
		RuntimeObject* ____pHandler2_unmarshaled = NULL;
		if (___pHandler2 != NULL)
		{
			____pHandler2_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iunknown<RuntimeObject>(___pHandler2, Il2CppComObject_il2cpp_TypeInfo_var);

			if (il2cpp_codegen_is_import_or_windows_runtime(____pHandler2_unmarshaled))
			{
				il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(____pHandler2_unmarshaled), Il2CppIUnknown::IID, ___pHandler2);
			}
		}
		else
		{
			____pHandler2_unmarshaled = NULL;
		}

		// Managed method invocation
		try
		{
			ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __thisValue = (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8*)GetManagedObjectInline();
			ModuleMetadata_Merge_mE53E457379BE3164003D1625FC2CC127B3FA7AC1(__thisValue, ____pImport0_unmarshaled, ___pHostMapToken1, ____pHandler2_unmarshaled, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_MergeEnd_m2BCD0DBF506BC213288F440DFFA0758F2DAB7B54() IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __thisValue = (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8*)GetManagedObjectInline();
			ModuleMetadata_MergeEnd_m2CC4379ED27D9E73EEF064CB2E851E6F8D0CD933(__thisValue, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual void STDCALL IMetaDataImport_CloseEnum_m8929DA7E9C81FFFD748776E3E28335D95FCC2FBD(uint32_t ___hEnum0) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __thisValue = (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8*)GetManagedObjectInline();
			ModuleMetadata_CloseEnum_m5FFE1D6A01971169A8EC44F1F0C448913A81D6DF(__thisValue, ___hEnum0, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		}

	}

	virtual il2cpp_hresult_t STDCALL IMetaDataImport_CountEnum_m6641E18C62012EFFB5FAD3B7E65504E8F325A804(uint32_t ___hEnum0, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __thisValue = (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8*)GetManagedObjectInline();
			returnValue = ModuleMetadata_CountEnum_mC1B8BDFBB690F0D943F762CEF75ACA5B41BD0D76(__thisValue, ___hEnum0, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataImport_ResetEnum_m4C1C3BED10EFCBE7C055A4AFF935238BC9D4C694(uint32_t ___hEnum0, uint32_t ___ulPos1) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __thisValue = (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8*)GetManagedObjectInline();
			ModuleMetadata_ResetEnum_m65168CF6DE803D3329FA98A9096099DDF8A87F50(__thisValue, ___hEnum0, ___ulPos1, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataImport_EnumTypeDefs_mCC190874415F30084DF02FDDA79895CC4446D1DC(uint32_t* ___phEnum0, uint32_t* ___rTypeDefs1, uint32_t ___cMax2, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___rTypeDefs1' to managed representation
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ____rTypeDefs1_unmarshaled = NULL;
		if (___rTypeDefs1 != NULL)
		{
			____rTypeDefs1_unmarshaled = reinterpret_cast<UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*>((UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, static_cast<int32_t>(___cMax2)));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(___cMax2)); i++)
			{
				(____rTypeDefs1_unmarshaled)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (___rTypeDefs1)[i]);
			}
		}

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __thisValue = (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8*)GetManagedObjectInline();
			returnValue = ModuleMetadata_EnumTypeDefs_m570EB2A3911204617BA1A7BC474666F9E614A168(__thisValue, ___phEnum0, ____rTypeDefs1_unmarshaled, ___cMax2, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataImport_EnumInterfaceImpls_mF06D83179BE8765A9B66669332C6163AFFA133B1(uint32_t* ___phEnum0, uint32_t ___td1, uint32_t* ___rImpls2, uint32_t ___cMax3, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___rImpls2' to managed representation
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ____rImpls2_unmarshaled = NULL;
		if (___rImpls2 != NULL)
		{
			____rImpls2_unmarshaled = reinterpret_cast<UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*>((UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, static_cast<int32_t>(___cMax3)));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(___cMax3)); i++)
			{
				(____rImpls2_unmarshaled)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (___rImpls2)[i]);
			}
		}

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __thisValue = (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8*)GetManagedObjectInline();
			returnValue = ModuleMetadata_EnumInterfaceImpls_m612B630B46538CEA3534A61CECA4AF7B11F50763(__thisValue, ___phEnum0, ___td1, ____rImpls2_unmarshaled, ___cMax3, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataImport_EnumTypeRefs_mB3AA53F7D093BB3BF5AFD5849535F1AFB2DFAFF4(uint32_t* ___phEnum0, uint32_t* ___rTypeRefs1, uint32_t ___cMax2, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___rTypeRefs1' to managed representation
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ____rTypeRefs1_unmarshaled = NULL;
		if (___rTypeRefs1 != NULL)
		{
			____rTypeRefs1_unmarshaled = reinterpret_cast<UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*>((UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, static_cast<int32_t>(___cMax2)));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(___cMax2)); i++)
			{
				(____rTypeRefs1_unmarshaled)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (___rTypeRefs1)[i]);
			}
		}

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __thisValue = (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8*)GetManagedObjectInline();
			returnValue = ModuleMetadata_EnumTypeRefs_mF187ED6C164AA97CF793B43593BB2AE169DCA910(__thisValue, ___phEnum0, ____rTypeRefs1_unmarshaled, ___cMax2, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataImport_FindTypeDefByName_m4D085122DBF4CE07E36E5FD1C2E865E467FBFDA5(Il2CppChar* ___szTypeDef0, uint32_t ___tkEnclosingClass1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___szTypeDef0' to managed representation
		String_t* ____szTypeDef0_unmarshaled = NULL;
		____szTypeDef0_unmarshaled = il2cpp_codegen_marshal_bstring_result(___szTypeDef0);

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __thisValue = (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8*)GetManagedObjectInline();
			returnValue = ModuleMetadata_FindTypeDefByName_mC0FDBC8817FF66985F91F33B9E5B4CC0D8B9EFBC(__thisValue, ____szTypeDef0_unmarshaled, ___tkEnclosingClass1, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataImport_GetScopeProps_mF67E5F9E5AED1461142B1E0993B05B727A096D1D(Il2CppChar* ___szName0, uint32_t ___cchName1, uint32_t* ___pchName2, Guid_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___szName0' to managed representation
		StringBuilder_t* ____szName0_unmarshaled = NULL;
		il2cpp_codegen_marshal_wstring_builder_result(____szName0_unmarshaled, ___szName0);

		// Marshaling of parameter '___pchName2' to managed representation
		uint32_t ____pchName2_empty = 0;

		// Managed method invocation
		Guid_t returnValue;
		try
		{
			ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __thisValue = (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8*)GetManagedObjectInline();
			returnValue = ModuleMetadata_GetScopeProps_mF0A45DC0E2AF468572ABC4BAC136BFDA16ED918B(__thisValue, ____szName0_unmarshaled, ___cchName1, (&____pchName2_empty), NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of parameter '___pchName2' back from managed representation
		*___pchName2 = ____pchName2_empty;

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataImport_GetModuleFromScope_mC021656D225BDB2E0A870DBC7663E763FFBC3D0B(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __thisValue = (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8*)GetManagedObjectInline();
			returnValue = ModuleMetadata_GetModuleFromScope_m505D0E9A6720E2D4CC3CFA945AC7EE964AEC2713(__thisValue, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataImport_GetTypeDefProps_mD0FF577B6F1D013811A2A83F98A198EEB3BE9E48(uint32_t ___td0, intptr_t ___szTypeDef1, uint32_t ___cchTypeDef2, uint32_t* ___pchTypeDef3, intptr_t ___pdwTypeDefFlags4, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___pchTypeDef3' to managed representation
		uint32_t ____pchTypeDef3_empty = 0;

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __thisValue = (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8*)GetManagedObjectInline();
			returnValue = ModuleMetadata_GetTypeDefProps_m2AE7767E3B867890CBDF9FA759751D3B47FC6DC0(__thisValue, ___td0, ___szTypeDef1, ___cchTypeDef2, (&____pchTypeDef3_empty), ___pdwTypeDefFlags4, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of parameter '___pchTypeDef3' back from managed representation
		*___pchTypeDef3 = ____pchTypeDef3_empty;

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataImport_GetInterfaceImplProps_mC5EF1E2F10C6D008A3AAE64B0C552BC2B63DB895(uint32_t ___iiImpl0, uint32_t* ___pClass1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___pClass1' to managed representation
		uint32_t ____pClass1_empty = 0;

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __thisValue = (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8*)GetManagedObjectInline();
			returnValue = ModuleMetadata_GetInterfaceImplProps_mF3001C194B5212C53D1A09D8DEA26329D4F474CB(__thisValue, ___iiImpl0, (&____pClass1_empty), NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of parameter '___pClass1' back from managed representation
		*___pClass1 = ____pClass1_empty;

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataImport_GetTypeRefProps_m411E156FBACD3EC8F0CCCBFE6F7E1E69A4C223CE(uint32_t ___tr0, uint32_t* ___ptkResolutionScope1, Il2CppChar* ___szName2, uint32_t ___cchName3, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___ptkResolutionScope1' to managed representation
		uint32_t ____ptkResolutionScope1_empty = 0;

		// Marshaling of parameter '___szName2' to managed representation
		StringBuilder_t* ____szName2_unmarshaled = NULL;
		il2cpp_codegen_marshal_wstring_builder_result(____szName2_unmarshaled, ___szName2);

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __thisValue = (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8*)GetManagedObjectInline();
			returnValue = ModuleMetadata_GetTypeRefProps_m529973484832D31387D9A8B9E494A6090E2BD3C1(__thisValue, ___tr0, (&____ptkResolutionScope1_empty), ____szName2_unmarshaled, ___cchName3, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of parameter '___ptkResolutionScope1' back from managed representation
		*___ptkResolutionScope1 = ____ptkResolutionScope1_empty;

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataImport_ResolveTypeRef_mAF45A0D742B2F2C7CA4241A26ED70A7FD935AC2C(uint32_t ___tr0, Guid_t* ___riid1, Il2CppIUnknown** ___ppIScope2, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___ppIScope2' to managed representation
		RuntimeObject* ____ppIScope2_empty = NULL;

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __thisValue = (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8*)GetManagedObjectInline();
			returnValue = ModuleMetadata_ResolveTypeRef_m916D8859048019ED3E3B9F41E109CE91F33A993B(__thisValue, ___tr0, ___riid1, (&____ppIScope2_empty), NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of parameter '___ppIScope2' back from managed representation
		if (____ppIScope2_empty != NULL)
		{
			if (il2cpp_codegen_is_import_or_windows_runtime(____ppIScope2_empty))
			{
				*___ppIScope2 = il2cpp_codegen_com_query_interface<Il2CppIUnknown>(static_cast<Il2CppComObject*>(____ppIScope2_empty));
				(*___ppIScope2)->AddRef();
			}
			else
			{
				*___ppIScope2 = il2cpp_codegen_com_get_or_create_ccw<Il2CppIUnknown>(____ppIScope2_empty);
			}
		}
		else
		{
			*___ppIScope2 = NULL;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataImport_EnumMembers_mE8758C9B1DA7A5D72F299A6D456FC44B741887B6(uint32_t* ___phEnum0, uint32_t ___cl1, uint32_t* ___rMembers2, uint32_t ___cMax3, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___rMembers2' to managed representation
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ____rMembers2_unmarshaled = NULL;
		if (___rMembers2 != NULL)
		{
			____rMembers2_unmarshaled = reinterpret_cast<UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*>((UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, static_cast<int32_t>(___cMax3)));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(___cMax3)); i++)
			{
				(____rMembers2_unmarshaled)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (___rMembers2)[i]);
			}
		}

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __thisValue = (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8*)GetManagedObjectInline();
			returnValue = ModuleMetadata_EnumMembers_m00A052BAA9EDC9747BE35884578894180D3B9D3A(__thisValue, ___phEnum0, ___cl1, ____rMembers2_unmarshaled, ___cMax3, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataImport_EnumMembersWithName_m6CF3342250F3E3B50FCF55F2B52683E95D29CB0B(uint32_t* ___phEnum0, uint32_t ___cl1, Il2CppChar* ___szName2, uint32_t* ___rMembers3, uint32_t ___cMax4, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___szName2' to managed representation
		String_t* ____szName2_unmarshaled = NULL;
		____szName2_unmarshaled = il2cpp_codegen_marshal_bstring_result(___szName2);

		// Marshaling of parameter '___rMembers3' to managed representation
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ____rMembers3_unmarshaled = NULL;
		if (___rMembers3 != NULL)
		{
			____rMembers3_unmarshaled = reinterpret_cast<UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*>((UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, static_cast<int32_t>(___cMax4)));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(___cMax4)); i++)
			{
				(____rMembers3_unmarshaled)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (___rMembers3)[i]);
			}
		}

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __thisValue = (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8*)GetManagedObjectInline();
			returnValue = ModuleMetadata_EnumMembersWithName_m4CA83C592B9870885D11BF119C8E8B2DD797B74A(__thisValue, ___phEnum0, ___cl1, ____szName2_unmarshaled, ____rMembers3_unmarshaled, ___cMax4, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataImport_EnumMethods_m2AFBB052DE645D1BE08C99CF7513247117BC6DBD(uint32_t* ___phEnum0, uint32_t ___cl1, intptr_t ___rMethods2, uint32_t ___cMax3, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __thisValue = (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8*)GetManagedObjectInline();
			returnValue = ModuleMetadata_EnumMethods_m13BE913295279DB499E857AE5D49550C583E12BB(__thisValue, ___phEnum0, ___cl1, ___rMethods2, ___cMax3, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataImport_EnumMethodsWithName_m812FC4C4A6C4CFDBAD99F37E2352DC29D413DC0D(uint32_t* ___phEnum0, uint32_t ___cl1, Il2CppChar* ___szName2, uint32_t* ___rMethods3, uint32_t ___cMax4, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___szName2' to managed representation
		String_t* ____szName2_unmarshaled = NULL;
		____szName2_unmarshaled = il2cpp_codegen_marshal_bstring_result(___szName2);

		// Marshaling of parameter '___rMethods3' to managed representation
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ____rMethods3_unmarshaled = NULL;
		if (___rMethods3 != NULL)
		{
			____rMethods3_unmarshaled = reinterpret_cast<UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*>((UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, static_cast<int32_t>(___cMax4)));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(___cMax4)); i++)
			{
				(____rMethods3_unmarshaled)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (___rMethods3)[i]);
			}
		}

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __thisValue = (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8*)GetManagedObjectInline();
			returnValue = ModuleMetadata_EnumMethodsWithName_m7D8D3B8F2C81DD191F093DD634901C4E07C81C0D(__thisValue, ___phEnum0, ___cl1, ____szName2_unmarshaled, ____rMethods3_unmarshaled, ___cMax4, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataImport_EnumFields_mE19F5587FD49DB4FBDE7E6D29CE8F88A8AE48DAE(uint32_t* ___phEnum0, uint32_t ___cl1, intptr_t ___rFields2, uint32_t ___cMax3, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __thisValue = (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8*)GetManagedObjectInline();
			returnValue = ModuleMetadata_EnumFields_m52EC8FB8C96F78D680F2C6E28080FF2D869B27A3(__thisValue, ___phEnum0, ___cl1, ___rFields2, ___cMax3, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataImport_EnumFieldsWithName_m60643437E0009235F7C582242A921DD7DDAE5602(uint32_t* ___phEnum0, uint32_t ___cl1, Il2CppChar* ___szName2, uint32_t* ___rFields3, uint32_t ___cMax4, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___szName2' to managed representation
		String_t* ____szName2_unmarshaled = NULL;
		____szName2_unmarshaled = il2cpp_codegen_marshal_bstring_result(___szName2);

		// Marshaling of parameter '___rFields3' to managed representation
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ____rFields3_unmarshaled = NULL;
		if (___rFields3 != NULL)
		{
			____rFields3_unmarshaled = reinterpret_cast<UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*>((UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, static_cast<int32_t>(___cMax4)));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(___cMax4)); i++)
			{
				(____rFields3_unmarshaled)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (___rFields3)[i]);
			}
		}

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __thisValue = (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8*)GetManagedObjectInline();
			returnValue = ModuleMetadata_EnumFieldsWithName_m499BF6C27F76B66A5A4A246D09A60191AEF4D6D3(__thisValue, ___phEnum0, ___cl1, ____szName2_unmarshaled, ____rFields3_unmarshaled, ___cMax4, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataImport_EnumParams_m9B8C273AC0E7FE01427A81953839D8859CD6B238(uint32_t* ___phEnum0, uint32_t ___mb1, uint32_t* ___rParams2, uint32_t ___cMax3, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___rParams2' to managed representation
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ____rParams2_unmarshaled = NULL;
		if (___rParams2 != NULL)
		{
			____rParams2_unmarshaled = reinterpret_cast<UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*>((UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, static_cast<int32_t>(___cMax3)));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(___cMax3)); i++)
			{
				(____rParams2_unmarshaled)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (___rParams2)[i]);
			}
		}

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __thisValue = (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8*)GetManagedObjectInline();
			returnValue = ModuleMetadata_EnumParams_m2DA7D32460A216AE7C3FE73E244C2E00E7A6DD39(__thisValue, ___phEnum0, ___mb1, ____rParams2_unmarshaled, ___cMax3, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataImport_EnumMemberRefs_m3FFECF3ED5E764FA707BB6BCD67499749CE9CF74(uint32_t* ___phEnum0, uint32_t ___tkParent1, uint32_t* ___rMemberRefs2, uint32_t ___cMax3, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___rMemberRefs2' to managed representation
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ____rMemberRefs2_unmarshaled = NULL;
		if (___rMemberRefs2 != NULL)
		{
			____rMemberRefs2_unmarshaled = reinterpret_cast<UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*>((UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, static_cast<int32_t>(___cMax3)));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(___cMax3)); i++)
			{
				(____rMemberRefs2_unmarshaled)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (___rMemberRefs2)[i]);
			}
		}

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __thisValue = (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8*)GetManagedObjectInline();
			returnValue = ModuleMetadata_EnumMemberRefs_mC125307C8887551F8A50F4B3745C2D47A61F61C5(__thisValue, ___phEnum0, ___tkParent1, ____rMemberRefs2_unmarshaled, ___cMax3, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataImport_EnumMethodImpls_m42CDCE9548FAD52D94CFEEE1D0E2C7E5B1ACF522(uint32_t* ___phEnum0, uint32_t ___td1, uint32_t* ___rMethodBody2, uint32_t* ___rMethodDecl3, uint32_t ___cMax4, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___rMethodBody2' to managed representation
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ____rMethodBody2_unmarshaled = NULL;
		if (___rMethodBody2 != NULL)
		{
			____rMethodBody2_unmarshaled = reinterpret_cast<UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*>((UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, static_cast<int32_t>(___cMax4)));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(___cMax4)); i++)
			{
				(____rMethodBody2_unmarshaled)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (___rMethodBody2)[i]);
			}
		}

		// Marshaling of parameter '___rMethodDecl3' to managed representation
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ____rMethodDecl3_unmarshaled = NULL;
		if (___rMethodDecl3 != NULL)
		{
			____rMethodDecl3_unmarshaled = reinterpret_cast<UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*>((UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, static_cast<int32_t>(___cMax4)));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(___cMax4)); i++)
			{
				(____rMethodDecl3_unmarshaled)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (___rMethodDecl3)[i]);
			}
		}

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __thisValue = (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8*)GetManagedObjectInline();
			returnValue = ModuleMetadata_EnumMethodImpls_m95DC9AB59F1BF96EEF36F76009C8219A41E60A48(__thisValue, ___phEnum0, ___td1, ____rMethodBody2_unmarshaled, ____rMethodDecl3_unmarshaled, ___cMax4, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataImport_EnumPermissionSets_m48843AB22FA59F6DB1368F8CD52D6D6A7D461F41(uint32_t* ___phEnum0, uint32_t ___tk1, uint32_t ___dwActions2, uint32_t* ___rPermission3, uint32_t ___cMax4, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___rPermission3' to managed representation
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ____rPermission3_unmarshaled = NULL;
		if (___rPermission3 != NULL)
		{
			____rPermission3_unmarshaled = reinterpret_cast<UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*>((UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, static_cast<int32_t>(___cMax4)));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(___cMax4)); i++)
			{
				(____rPermission3_unmarshaled)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (___rPermission3)[i]);
			}
		}

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __thisValue = (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8*)GetManagedObjectInline();
			returnValue = ModuleMetadata_EnumPermissionSets_mA8C36AC8BDF347AFEA2A2AD49E3A0E72B6DCC3C4(__thisValue, ___phEnum0, ___tk1, ___dwActions2, ____rPermission3_unmarshaled, ___cMax4, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataImport_FindMember_mFA806979B913787653551A4C44D6BB90ADF108BB(uint32_t ___td0, Il2CppChar* ___szName1, uint8_t* ___pvSigBlob2, uint32_t ___cbSigBlob3, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___szName1' to managed representation
		String_t* ____szName1_unmarshaled = NULL;
		____szName1_unmarshaled = il2cpp_codegen_marshal_bstring_result(___szName1);

		// Marshaling of parameter '___pvSigBlob2' to managed representation
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____pvSigBlob2_unmarshaled = NULL;
		if (___pvSigBlob2 != NULL)
		{
			____pvSigBlob2_unmarshaled = reinterpret_cast<ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*>((ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, static_cast<int32_t>(___cbSigBlob3)));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(___cbSigBlob3)); i++)
			{
				(____pvSigBlob2_unmarshaled)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (___pvSigBlob2)[i]);
			}
		}

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __thisValue = (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8*)GetManagedObjectInline();
			returnValue = ModuleMetadata_FindMember_m8AC0C1571E84F472129F45600DE4365294AE18FA(__thisValue, ___td0, ____szName1_unmarshaled, ____pvSigBlob2_unmarshaled, ___cbSigBlob3, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataImport_FindMethod_m9003B0C0EC5815EE36E615162D15033B54D44F26(uint32_t ___td0, Il2CppChar* ___szName1, uint8_t* ___pvSigBlob2, uint32_t ___cbSigBlob3, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___szName1' to managed representation
		String_t* ____szName1_unmarshaled = NULL;
		____szName1_unmarshaled = il2cpp_codegen_marshal_bstring_result(___szName1);

		// Marshaling of parameter '___pvSigBlob2' to managed representation
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____pvSigBlob2_unmarshaled = NULL;
		if (___pvSigBlob2 != NULL)
		{
			____pvSigBlob2_unmarshaled = reinterpret_cast<ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*>((ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, static_cast<int32_t>(___cbSigBlob3)));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(___cbSigBlob3)); i++)
			{
				(____pvSigBlob2_unmarshaled)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (___pvSigBlob2)[i]);
			}
		}

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __thisValue = (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8*)GetManagedObjectInline();
			returnValue = ModuleMetadata_FindMethod_mC8B58A622BAFD7EEF91533BB91A56BE1948E8D17(__thisValue, ___td0, ____szName1_unmarshaled, ____pvSigBlob2_unmarshaled, ___cbSigBlob3, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataImport_FindField_mD8F545CBCD5BABB9DE56A84ACEA987B67ED2EF20(uint32_t ___td0, Il2CppChar* ___szName1, uint8_t* ___pvSigBlob2, uint32_t ___cbSigBlob3, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___szName1' to managed representation
		String_t* ____szName1_unmarshaled = NULL;
		____szName1_unmarshaled = il2cpp_codegen_marshal_bstring_result(___szName1);

		// Marshaling of parameter '___pvSigBlob2' to managed representation
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____pvSigBlob2_unmarshaled = NULL;
		if (___pvSigBlob2 != NULL)
		{
			____pvSigBlob2_unmarshaled = reinterpret_cast<ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*>((ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, static_cast<int32_t>(___cbSigBlob3)));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(___cbSigBlob3)); i++)
			{
				(____pvSigBlob2_unmarshaled)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (___pvSigBlob2)[i]);
			}
		}

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __thisValue = (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8*)GetManagedObjectInline();
			returnValue = ModuleMetadata_FindField_m51BC8683E9E2D577AFDFB2696F720F170499530C(__thisValue, ___td0, ____szName1_unmarshaled, ____pvSigBlob2_unmarshaled, ___cbSigBlob3, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataImport_FindMemberRef_mF72F0A97442EAA2ECF5ADE81EADB1EF8523935E1(uint32_t ___td0, Il2CppChar* ___szName1, uint8_t* ___pvSigBlob2, uint32_t ___cbSigBlob3, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___szName1' to managed representation
		String_t* ____szName1_unmarshaled = NULL;
		____szName1_unmarshaled = il2cpp_codegen_marshal_bstring_result(___szName1);

		// Marshaling of parameter '___pvSigBlob2' to managed representation
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____pvSigBlob2_unmarshaled = NULL;
		if (___pvSigBlob2 != NULL)
		{
			____pvSigBlob2_unmarshaled = reinterpret_cast<ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*>((ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, static_cast<int32_t>(___cbSigBlob3)));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(___cbSigBlob3)); i++)
			{
				(____pvSigBlob2_unmarshaled)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (___pvSigBlob2)[i]);
			}
		}

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __thisValue = (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8*)GetManagedObjectInline();
			returnValue = ModuleMetadata_FindMemberRef_mD1C76A9793BFB77C1A4DD9AF245AECB096A4FAB2(__thisValue, ___td0, ____szName1_unmarshaled, ____pvSigBlob2_unmarshaled, ___cbSigBlob3, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataImport_GetMethodProps_m66123AFD4C1202710F2F5D4AA8AAFD0DA8AFB141(uint32_t ___mb0, uint32_t* ___pClass1, intptr_t ___szMethod2, uint32_t ___cchMethod3, uint32_t* ___pchMethod4, intptr_t ___pdwAttr5, intptr_t ___ppvSigBlob6, intptr_t ___pcbSigBlob7, intptr_t ___pulCodeRVA8, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___pClass1' to managed representation
		uint32_t ____pClass1_empty = 0;

		// Marshaling of parameter '___pchMethod4' to managed representation
		uint32_t ____pchMethod4_empty = 0;

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __thisValue = (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8*)GetManagedObjectInline();
			returnValue = ModuleMetadata_GetMethodProps_m46DED369D88493486E9D27B8B29C36A2CEEDA492(__thisValue, ___mb0, (&____pClass1_empty), ___szMethod2, ___cchMethod3, (&____pchMethod4_empty), ___pdwAttr5, ___ppvSigBlob6, ___pcbSigBlob7, ___pulCodeRVA8, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of parameter '___pClass1' back from managed representation
		*___pClass1 = ____pClass1_empty;

		// Marshaling of parameter '___pchMethod4' back from managed representation
		*___pchMethod4 = ____pchMethod4_empty;

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataImport_GetMemberRefProps_m35264FFAB032CD0FDB4C4FBE67A41DCFC678AE97(uint32_t ___mr0, uint32_t* ___ptk1, Il2CppChar* ___szMember2, uint32_t ___cchMember3, uint32_t* ___pchMember4, intptr_t* ___ppvSigBlob5, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___szMember2' to managed representation
		StringBuilder_t* ____szMember2_unmarshaled = NULL;
		il2cpp_codegen_marshal_wstring_builder_result(____szMember2_unmarshaled, ___szMember2);

		// Marshaling of parameter '___pchMember4' to managed representation
		uint32_t ____pchMember4_empty = 0;

		// Marshaling of parameter '___ppvSigBlob5' to managed representation
		intptr_t ____ppvSigBlob5_empty;
		memset((&____ppvSigBlob5_empty), 0, sizeof(____ppvSigBlob5_empty));

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __thisValue = (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8*)GetManagedObjectInline();
			returnValue = ModuleMetadata_GetMemberRefProps_mF661E838ED0F818EF9C163D10F74E6371C4D9AAF(__thisValue, ___mr0, ___ptk1, ____szMember2_unmarshaled, ___cchMember3, (&____pchMember4_empty), (&____ppvSigBlob5_empty), NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of parameter '___pchMember4' back from managed representation
		*___pchMember4 = ____pchMember4_empty;

		// Marshaling of parameter '___ppvSigBlob5' back from managed representation
		*___ppvSigBlob5 = ____ppvSigBlob5_empty;

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataImport_EnumProperties_mFDFDCA5CEACDA6E1E11BD2CF4ED512B2C36BFB14(uint32_t* ___phEnum0, uint32_t ___td1, intptr_t ___rProperties2, uint32_t ___cMax3, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __thisValue = (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8*)GetManagedObjectInline();
			returnValue = ModuleMetadata_EnumProperties_mEB1F163CE5C38DECEC7ABB648EE796BB1336575B(__thisValue, ___phEnum0, ___td1, ___rProperties2, ___cMax3, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataImport_EnumEvents_mEB4CF539D41273A61E1A77A84E14B60F86702EDC(uint32_t* ___phEnum0, uint32_t ___td1, intptr_t ___rEvents2, uint32_t ___cMax3, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __thisValue = (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8*)GetManagedObjectInline();
			returnValue = ModuleMetadata_EnumEvents_m4089E30FDFEEC276473CAF7C0CAE5370C25C0B9F(__thisValue, ___phEnum0, ___td1, ___rEvents2, ___cMax3, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataImport_GetEventProps_mAB55FDEF9D044A5195A75440A8018350773820BC(uint32_t ___ev0, uint32_t* ___pClass1, Il2CppChar* ___szEvent2, uint32_t ___cchEvent3, uint32_t* ___pchEvent4, uint32_t* ___pdwEventFlags5, uint32_t* ___ptkEventType6, uint32_t* ___pmdAddOn7, uint32_t* ___pmdRemoveOn8, uint32_t* ___pmdFire9, uint32_t* ___rmdOtherMethod10, uint32_t ___cMax11, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___pClass1' to managed representation
		uint32_t ____pClass1_empty = 0;

		// Marshaling of parameter '___szEvent2' to managed representation
		StringBuilder_t* ____szEvent2_unmarshaled = NULL;
		il2cpp_codegen_marshal_wstring_builder_result(____szEvent2_unmarshaled, ___szEvent2);

		// Marshaling of parameter '___pchEvent4' to managed representation
		uint32_t ____pchEvent4_empty = 0;

		// Marshaling of parameter '___pdwEventFlags5' to managed representation
		uint32_t ____pdwEventFlags5_empty = 0;

		// Marshaling of parameter '___ptkEventType6' to managed representation
		uint32_t ____ptkEventType6_empty = 0;

		// Marshaling of parameter '___pmdAddOn7' to managed representation
		uint32_t ____pmdAddOn7_empty = 0;

		// Marshaling of parameter '___pmdRemoveOn8' to managed representation
		uint32_t ____pmdRemoveOn8_empty = 0;

		// Marshaling of parameter '___pmdFire9' to managed representation
		uint32_t ____pmdFire9_empty = 0;

		// Marshaling of parameter '___rmdOtherMethod10' to managed representation
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ____rmdOtherMethod10_unmarshaled = NULL;
		if (___rmdOtherMethod10 != NULL)
		{
			____rmdOtherMethod10_unmarshaled = reinterpret_cast<UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*>((UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, static_cast<int32_t>(___cMax11)));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(___cMax11)); i++)
			{
				(____rmdOtherMethod10_unmarshaled)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (___rmdOtherMethod10)[i]);
			}
		}

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __thisValue = (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8*)GetManagedObjectInline();
			returnValue = ModuleMetadata_GetEventProps_m94FB1FFEC2DB6D05796CD61E984B8D6D28F88A81(__thisValue, ___ev0, (&____pClass1_empty), ____szEvent2_unmarshaled, ___cchEvent3, (&____pchEvent4_empty), (&____pdwEventFlags5_empty), (&____ptkEventType6_empty), (&____pmdAddOn7_empty), (&____pmdRemoveOn8_empty), (&____pmdFire9_empty), ____rmdOtherMethod10_unmarshaled, ___cMax11, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of parameter '___pClass1' back from managed representation
		*___pClass1 = ____pClass1_empty;

		// Marshaling of parameter '___pchEvent4' back from managed representation
		*___pchEvent4 = ____pchEvent4_empty;

		// Marshaling of parameter '___pdwEventFlags5' back from managed representation
		*___pdwEventFlags5 = ____pdwEventFlags5_empty;

		// Marshaling of parameter '___ptkEventType6' back from managed representation
		*___ptkEventType6 = ____ptkEventType6_empty;

		// Marshaling of parameter '___pmdAddOn7' back from managed representation
		*___pmdAddOn7 = ____pmdAddOn7_empty;

		// Marshaling of parameter '___pmdRemoveOn8' back from managed representation
		*___pmdRemoveOn8 = ____pmdRemoveOn8_empty;

		// Marshaling of parameter '___pmdFire9' back from managed representation
		*___pmdFire9 = ____pmdFire9_empty;

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataImport_EnumMethodSemantics_m7E81EC58166B652947E3957CADA4BC4E23B8E7CE(uint32_t* ___phEnum0, uint32_t ___mb1, uint32_t* ___rEventProp2, uint32_t ___cMax3, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___rEventProp2' to managed representation
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ____rEventProp2_unmarshaled = NULL;
		if (___rEventProp2 != NULL)
		{
			____rEventProp2_unmarshaled = reinterpret_cast<UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*>((UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, static_cast<int32_t>(___cMax3)));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(___cMax3)); i++)
			{
				(____rEventProp2_unmarshaled)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (___rEventProp2)[i]);
			}
		}

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __thisValue = (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8*)GetManagedObjectInline();
			returnValue = ModuleMetadata_EnumMethodSemantics_m68AAA4BD84C2189226AC97707E62D0D4E2EC9584(__thisValue, ___phEnum0, ___mb1, ____rEventProp2_unmarshaled, ___cMax3, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataImport_GetMethodSemantics_mBE2B534ECA6478E484B3291674FE5676270CC5F1(uint32_t ___mb0, uint32_t ___tkEventProp1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __thisValue = (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8*)GetManagedObjectInline();
			returnValue = ModuleMetadata_GetMethodSemantics_m0171FC6F26E5E3D8B34D18501AF7B21EDC6B1A19(__thisValue, ___mb0, ___tkEventProp1, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataImport_GetClassLayout_mABB7B797EC762F1E1ED2039F02F1534BB50FAB4A(uint32_t ___td0, uint32_t* ___pdwPackSize1, intptr_t ___rFieldOffset2, uint32_t ___cMax3, uint32_t* ___pcFieldOffset4, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___pdwPackSize1' to managed representation
		uint32_t ____pdwPackSize1_empty = 0;

		// Marshaling of parameter '___pcFieldOffset4' to managed representation
		uint32_t ____pcFieldOffset4_empty = 0;

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __thisValue = (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8*)GetManagedObjectInline();
			returnValue = ModuleMetadata_GetClassLayout_m4DB131D6DCAF3B4DAC50DCFF84FE33476A15A4A1(__thisValue, ___td0, (&____pdwPackSize1_empty), ___rFieldOffset2, ___cMax3, (&____pcFieldOffset4_empty), NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of parameter '___pdwPackSize1' back from managed representation
		*___pdwPackSize1 = ____pdwPackSize1_empty;

		// Marshaling of parameter '___pcFieldOffset4' back from managed representation
		*___pcFieldOffset4 = ____pcFieldOffset4_empty;

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataImport_GetFieldMarshal_mF53640049228AD94A0CF461A9CF9C26B5D1EFBED(uint32_t ___tk0, intptr_t* ___ppvNativeType1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___ppvNativeType1' to managed representation
		intptr_t ____ppvNativeType1_empty;
		memset((&____ppvNativeType1_empty), 0, sizeof(____ppvNativeType1_empty));

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __thisValue = (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8*)GetManagedObjectInline();
			returnValue = ModuleMetadata_GetFieldMarshal_mB22E84F692E2F1B889A8F67B0357FB1479960BBE(__thisValue, ___tk0, (&____ppvNativeType1_empty), NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of parameter '___ppvNativeType1' back from managed representation
		*___ppvNativeType1 = ____ppvNativeType1_empty;

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataImport_GetRVA_m14250589948E2519E53E5BA3DBE4A4F5C7CBA611(uint32_t ___tk0, uint32_t* ___pulCodeRVA1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___pulCodeRVA1' to managed representation
		uint32_t ____pulCodeRVA1_empty = 0;

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __thisValue = (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8*)GetManagedObjectInline();
			returnValue = ModuleMetadata_GetRVA_m226188F119A096CF68662FE261BB5D4E5C59627E(__thisValue, ___tk0, (&____pulCodeRVA1_empty), NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of parameter '___pulCodeRVA1' back from managed representation
		*___pulCodeRVA1 = ____pulCodeRVA1_empty;

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataImport_GetPermissionSetProps_mDAF1AD2BE320FFD8F8E9C386DCB904A1BAC4718B(uint32_t ___pm0, uint32_t* ___pdwAction1, intptr_t* ___ppvPermission2, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___pdwAction1' to managed representation
		uint32_t ____pdwAction1_empty = 0;

		// Marshaling of parameter '___ppvPermission2' to managed representation
		intptr_t ____ppvPermission2_empty;
		memset((&____ppvPermission2_empty), 0, sizeof(____ppvPermission2_empty));

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __thisValue = (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8*)GetManagedObjectInline();
			returnValue = ModuleMetadata_GetPermissionSetProps_mD490FBAB57FA2712415334420F9D6812E83E4D5E(__thisValue, ___pm0, (&____pdwAction1_empty), (&____ppvPermission2_empty), NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of parameter '___pdwAction1' back from managed representation
		*___pdwAction1 = ____pdwAction1_empty;

		// Marshaling of parameter '___ppvPermission2' back from managed representation
		*___ppvPermission2 = ____ppvPermission2_empty;

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataImport_GetSigFromToken_m5A6DF20428CFF9B2CE3E95C1FBADFBD34A72D28B(uint32_t ___mdSig0, intptr_t* ___ppvSig1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___ppvSig1' to managed representation
		intptr_t ____ppvSig1_empty;
		memset((&____ppvSig1_empty), 0, sizeof(____ppvSig1_empty));

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __thisValue = (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8*)GetManagedObjectInline();
			returnValue = ModuleMetadata_GetSigFromToken_m7072CF81198BF818A4808978680D4E6C60B970FC(__thisValue, ___mdSig0, (&____ppvSig1_empty), NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of parameter '___ppvSig1' back from managed representation
		*___ppvSig1 = ____ppvSig1_empty;

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataImport_GetModuleRefProps_m0AC664769172030BF13BB7BC65E13F83EA70BA2A(uint32_t ___mur0, Il2CppChar* ___szName1, uint32_t ___cchName2, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___szName1' to managed representation
		StringBuilder_t* ____szName1_unmarshaled = NULL;
		il2cpp_codegen_marshal_wstring_builder_result(____szName1_unmarshaled, ___szName1);

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __thisValue = (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8*)GetManagedObjectInline();
			returnValue = ModuleMetadata_GetModuleRefProps_m17454D4A0989FCA9A3F99D5565E2CC4866DFC4A4(__thisValue, ___mur0, ____szName1_unmarshaled, ___cchName2, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataImport_EnumModuleRefs_mE489CEE8C0B3AB8A96EE5A37690187783CCB67AC(uint32_t* ___phEnum0, uint32_t* ___rModuleRefs1, uint32_t ___cmax2, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___rModuleRefs1' to managed representation
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ____rModuleRefs1_unmarshaled = NULL;
		if (___rModuleRefs1 != NULL)
		{
			____rModuleRefs1_unmarshaled = reinterpret_cast<UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*>((UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, static_cast<int32_t>(___cmax2)));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(___cmax2)); i++)
			{
				(____rModuleRefs1_unmarshaled)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (___rModuleRefs1)[i]);
			}
		}

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __thisValue = (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8*)GetManagedObjectInline();
			returnValue = ModuleMetadata_EnumModuleRefs_m93727B61AE3410C019A2C6681CDC1F2A7D5ECC0A(__thisValue, ___phEnum0, ____rModuleRefs1_unmarshaled, ___cmax2, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataImport_GetTypeSpecFromToken_m23EA2A77193AEB5E0807A92EA4258263D5FCB495(uint32_t ___typespec0, intptr_t* ___ppvSig1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___ppvSig1' to managed representation
		intptr_t ____ppvSig1_empty;
		memset((&____ppvSig1_empty), 0, sizeof(____ppvSig1_empty));

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __thisValue = (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8*)GetManagedObjectInline();
			returnValue = ModuleMetadata_GetTypeSpecFromToken_mE3EC15FB29E8C359C1F91FE22A297F1AEC506C60(__thisValue, ___typespec0, (&____ppvSig1_empty), NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of parameter '___ppvSig1' back from managed representation
		*___ppvSig1 = ____ppvSig1_empty;

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataImport_GetNameFromToken_m774F398E7DFD805A243C8638EBE791C5E98ED82A(uint32_t ___tk0, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __thisValue = (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8*)GetManagedObjectInline();
			returnValue = ModuleMetadata_GetNameFromToken_m9EE30B292061677EB2FCF2CD22CE89C4FB5E8D5A(__thisValue, ___tk0, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataImport_EnumUnresolvedMethods_mA258CFFCA8EBB44CA1AFDA11419C70DBF7E4837E(uint32_t* ___phEnum0, uint32_t* ___rMethods1, uint32_t ___cMax2, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___rMethods1' to managed representation
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ____rMethods1_unmarshaled = NULL;
		if (___rMethods1 != NULL)
		{
			____rMethods1_unmarshaled = reinterpret_cast<UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*>((UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, static_cast<int32_t>(___cMax2)));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(___cMax2)); i++)
			{
				(____rMethods1_unmarshaled)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (___rMethods1)[i]);
			}
		}

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __thisValue = (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8*)GetManagedObjectInline();
			returnValue = ModuleMetadata_EnumUnresolvedMethods_mDCFD430F6F8AC29804E06025468B4DD796ED8053(__thisValue, ___phEnum0, ____rMethods1_unmarshaled, ___cMax2, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataImport_GetUserString_m1BCF8DDB690EADCF6E454550E0E9A660D215D78D(uint32_t ___stk0, Il2CppChar* ___szString1, uint32_t ___cchString2, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___szString1' to managed representation
		StringBuilder_t* ____szString1_unmarshaled = NULL;
		il2cpp_codegen_marshal_wstring_builder_result(____szString1_unmarshaled, ___szString1);

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __thisValue = (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8*)GetManagedObjectInline();
			returnValue = ModuleMetadata_GetUserString_m41538418E9CA8B074777A3E60FA7714D695D8BB5(__thisValue, ___stk0, ____szString1_unmarshaled, ___cchString2, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataImport_GetPinvokeMap_m42B7FBD488E2689574AD925394532E29E8DAE2FE(uint32_t ___tk0, uint32_t* ___pdwMappingFlags1, Il2CppChar* ___szImportName2, uint32_t ___cchImportName3, uint32_t* ___pchImportName4, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___pdwMappingFlags1' to managed representation
		uint32_t ____pdwMappingFlags1_empty = 0;

		// Marshaling of parameter '___szImportName2' to managed representation
		StringBuilder_t* ____szImportName2_unmarshaled = NULL;
		il2cpp_codegen_marshal_wstring_builder_result(____szImportName2_unmarshaled, ___szImportName2);

		// Marshaling of parameter '___pchImportName4' to managed representation
		uint32_t ____pchImportName4_empty = 0;

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __thisValue = (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8*)GetManagedObjectInline();
			returnValue = ModuleMetadata_GetPinvokeMap_m179834BA7D466FAEFF4F3DF1957D92FA3E85E778(__thisValue, ___tk0, (&____pdwMappingFlags1_empty), ____szImportName2_unmarshaled, ___cchImportName3, (&____pchImportName4_empty), NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of parameter '___pdwMappingFlags1' back from managed representation
		*___pdwMappingFlags1 = ____pdwMappingFlags1_empty;

		// Marshaling of parameter '___pchImportName4' back from managed representation
		*___pchImportName4 = ____pchImportName4_empty;

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataImport_EnumSignatures_m2318A448323BA2177E26B5EA283736A2FA9CA4AC(uint32_t* ___phEnum0, uint32_t* ___rSignatures1, uint32_t ___cmax2, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___rSignatures1' to managed representation
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ____rSignatures1_unmarshaled = NULL;
		if (___rSignatures1 != NULL)
		{
			____rSignatures1_unmarshaled = reinterpret_cast<UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*>((UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, static_cast<int32_t>(___cmax2)));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(___cmax2)); i++)
			{
				(____rSignatures1_unmarshaled)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (___rSignatures1)[i]);
			}
		}

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __thisValue = (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8*)GetManagedObjectInline();
			returnValue = ModuleMetadata_EnumSignatures_m29216F0FDB1F74A9EC861817DA2F7979299B19AE(__thisValue, ___phEnum0, ____rSignatures1_unmarshaled, ___cmax2, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataImport_EnumTypeSpecs_m542A9A41257C1298F1683EF4DCC40FA6EAFDCB95(uint32_t* ___phEnum0, uint32_t* ___rTypeSpecs1, uint32_t ___cmax2, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___rTypeSpecs1' to managed representation
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ____rTypeSpecs1_unmarshaled = NULL;
		if (___rTypeSpecs1 != NULL)
		{
			____rTypeSpecs1_unmarshaled = reinterpret_cast<UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*>((UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, static_cast<int32_t>(___cmax2)));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(___cmax2)); i++)
			{
				(____rTypeSpecs1_unmarshaled)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (___rTypeSpecs1)[i]);
			}
		}

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __thisValue = (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8*)GetManagedObjectInline();
			returnValue = ModuleMetadata_EnumTypeSpecs_m58FB99203E034DDC78FCC0808C116DF68B2D4734(__thisValue, ___phEnum0, ____rTypeSpecs1_unmarshaled, ___cmax2, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataImport_EnumUserStrings_m75D6430E5D09D71E17A1A2A4EC137F1125F4F211(uint32_t* ___phEnum0, uint32_t* ___rStrings1, uint32_t ___cmax2, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___rStrings1' to managed representation
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ____rStrings1_unmarshaled = NULL;
		if (___rStrings1 != NULL)
		{
			____rStrings1_unmarshaled = reinterpret_cast<UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*>((UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, static_cast<int32_t>(___cmax2)));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(___cmax2)); i++)
			{
				(____rStrings1_unmarshaled)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (___rStrings1)[i]);
			}
		}

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __thisValue = (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8*)GetManagedObjectInline();
			returnValue = ModuleMetadata_EnumUserStrings_m04D2C16ED174C66FDE6FC42EB19EDBBEB917B3FA(__thisValue, ___phEnum0, ____rStrings1_unmarshaled, ___cmax2, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual int32_t STDCALL IMetaDataImport_GetParamForMethodIndex_mBADB95590FA623792709E81682DC371EEFBCD6B2(uint32_t ___md0, uint32_t ___ulParamSeq1, uint32_t* ___pParam2) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___pParam2' to managed representation
		uint32_t ____pParam2_empty = 0;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __thisValue = (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8*)GetManagedObjectInline();
			returnValue = ModuleMetadata_GetParamForMethodIndex_m291E7157E53CEA57A2478114EF4734372C7993D4(__thisValue, ___md0, ___ulParamSeq1, (&____pParam2_empty), NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return static_cast<int32_t>(ex.ex->hresult);
		}

		// Marshaling of parameter '___pParam2' back from managed representation
		*___pParam2 = ____pParam2_empty;

		return returnValue;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataImport_EnumCustomAttributes_mFCF3752ACDD369AB9687F2954753AECB54178E0F(uint32_t* ___phEnum0, uint32_t ___tk1, uint32_t ___tkType2, uint32_t* ___rCustomAttributes3, uint32_t ___cMax4, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___rCustomAttributes3' to managed representation
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ____rCustomAttributes3_unmarshaled = NULL;
		if (___rCustomAttributes3 != NULL)
		{
			____rCustomAttributes3_unmarshaled = reinterpret_cast<UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*>((UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, static_cast<int32_t>(___cMax4)));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(___cMax4)); i++)
			{
				(____rCustomAttributes3_unmarshaled)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (___rCustomAttributes3)[i]);
			}
		}

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __thisValue = (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8*)GetManagedObjectInline();
			returnValue = ModuleMetadata_EnumCustomAttributes_m82918528F02A8B51EA2764E57299F0D2A941B612(__thisValue, ___phEnum0, ___tk1, ___tkType2, ____rCustomAttributes3_unmarshaled, ___cMax4, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataImport_GetCustomAttributeProps_mA60232DDEE0CEB37F23BE2F123FCE2C4EB16BD14(uint32_t ___cv0, uint32_t* ___ptkObj1, uint32_t* ___ptkType2, intptr_t* ___ppBlob3, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___ptkObj1' to managed representation
		uint32_t ____ptkObj1_empty = 0;

		// Marshaling of parameter '___ptkType2' to managed representation
		uint32_t ____ptkType2_empty = 0;

		// Marshaling of parameter '___ppBlob3' to managed representation
		intptr_t ____ppBlob3_empty;
		memset((&____ppBlob3_empty), 0, sizeof(____ppBlob3_empty));

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __thisValue = (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8*)GetManagedObjectInline();
			returnValue = ModuleMetadata_GetCustomAttributeProps_mA3C199780F4601149CE38920A5ADE2D6D93CA78D(__thisValue, ___cv0, (&____ptkObj1_empty), (&____ptkType2_empty), (&____ppBlob3_empty), NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of parameter '___ptkObj1' back from managed representation
		*___ptkObj1 = ____ptkObj1_empty;

		// Marshaling of parameter '___ptkType2' back from managed representation
		*___ptkType2 = ____ptkType2_empty;

		// Marshaling of parameter '___ppBlob3' back from managed representation
		*___ppBlob3 = ____ppBlob3_empty;

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataImport_FindTypeRef_mC72A06B3744B9F9C031CFBF3F2A8D18D8F4DD9D9(uint32_t ___tkResolutionScope0, Il2CppChar* ___szName1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___szName1' to managed representation
		String_t* ____szName1_unmarshaled = NULL;
		____szName1_unmarshaled = il2cpp_codegen_marshal_bstring_result(___szName1);

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __thisValue = (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8*)GetManagedObjectInline();
			returnValue = ModuleMetadata_FindTypeRef_mF91C92F8FE64261EDBD0F9CBA1E555F0C24486C7(__thisValue, ___tkResolutionScope0, ____szName1_unmarshaled, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataImport_GetMemberProps_m489B30F97CAA914DD34BB3E1CB49570098B3B28F(uint32_t ___mb0, uint32_t* ___pClass1, Il2CppChar* ___szMember2, uint32_t ___cchMember3, uint32_t* ___pchMember4, uint32_t* ___pdwAttr5, intptr_t* ___ppvSigBlob6, uint32_t* ___pcbSigBlob7, uint32_t* ___pulCodeRVA8, uint32_t* ___pdwImplFlags9, uint32_t* ___pdwCPlusTypeFlag10, intptr_t* ___ppValue11, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___pClass1' to managed representation
		uint32_t ____pClass1_empty = 0;

		// Marshaling of parameter '___szMember2' to managed representation
		StringBuilder_t* ____szMember2_unmarshaled = NULL;
		il2cpp_codegen_marshal_wstring_builder_result(____szMember2_unmarshaled, ___szMember2);

		// Marshaling of parameter '___pchMember4' to managed representation
		uint32_t ____pchMember4_empty = 0;

		// Marshaling of parameter '___pdwAttr5' to managed representation
		uint32_t ____pdwAttr5_empty = 0;

		// Marshaling of parameter '___ppvSigBlob6' to managed representation
		intptr_t ____ppvSigBlob6_empty;
		memset((&____ppvSigBlob6_empty), 0, sizeof(____ppvSigBlob6_empty));

		// Marshaling of parameter '___pcbSigBlob7' to managed representation
		uint32_t ____pcbSigBlob7_empty = 0;

		// Marshaling of parameter '___pulCodeRVA8' to managed representation
		uint32_t ____pulCodeRVA8_empty = 0;

		// Marshaling of parameter '___pdwImplFlags9' to managed representation
		uint32_t ____pdwImplFlags9_empty = 0;

		// Marshaling of parameter '___pdwCPlusTypeFlag10' to managed representation
		uint32_t ____pdwCPlusTypeFlag10_empty = 0;

		// Marshaling of parameter '___ppValue11' to managed representation
		intptr_t ____ppValue11_empty;
		memset((&____ppValue11_empty), 0, sizeof(____ppValue11_empty));

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __thisValue = (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8*)GetManagedObjectInline();
			returnValue = ModuleMetadata_GetMemberProps_m34DDBF071B5EE1F64B143D59ADEA61CEE039646B(__thisValue, ___mb0, (&____pClass1_empty), ____szMember2_unmarshaled, ___cchMember3, (&____pchMember4_empty), (&____pdwAttr5_empty), (&____ppvSigBlob6_empty), (&____pcbSigBlob7_empty), (&____pulCodeRVA8_empty), (&____pdwImplFlags9_empty), (&____pdwCPlusTypeFlag10_empty), (&____ppValue11_empty), NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of parameter '___pClass1' back from managed representation
		*___pClass1 = ____pClass1_empty;

		// Marshaling of parameter '___pchMember4' back from managed representation
		*___pchMember4 = ____pchMember4_empty;

		// Marshaling of parameter '___pdwAttr5' back from managed representation
		*___pdwAttr5 = ____pdwAttr5_empty;

		// Marshaling of parameter '___ppvSigBlob6' back from managed representation
		*___ppvSigBlob6 = ____ppvSigBlob6_empty;

		// Marshaling of parameter '___pcbSigBlob7' back from managed representation
		*___pcbSigBlob7 = ____pcbSigBlob7_empty;

		// Marshaling of parameter '___pulCodeRVA8' back from managed representation
		*___pulCodeRVA8 = ____pulCodeRVA8_empty;

		// Marshaling of parameter '___pdwImplFlags9' back from managed representation
		*___pdwImplFlags9 = ____pdwImplFlags9_empty;

		// Marshaling of parameter '___pdwCPlusTypeFlag10' back from managed representation
		*___pdwCPlusTypeFlag10 = ____pdwCPlusTypeFlag10_empty;

		// Marshaling of parameter '___ppValue11' back from managed representation
		*___ppValue11 = ____ppValue11_empty;

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataImport_GetFieldProps_mD57CDF2FFD87BB0B8EB7627D29220D7BBD5803F0(uint32_t ___mb0, uint32_t* ___pClass1, Il2CppChar* ___szField2, uint32_t ___cchField3, uint32_t* ___pchField4, uint32_t* ___pdwAttr5, intptr_t* ___ppvSigBlob6, uint32_t* ___pcbSigBlob7, uint32_t* ___pdwCPlusTypeFlag8, intptr_t* ___ppValue9, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___pClass1' to managed representation
		uint32_t ____pClass1_empty = 0;

		// Marshaling of parameter '___szField2' to managed representation
		StringBuilder_t* ____szField2_unmarshaled = NULL;
		il2cpp_codegen_marshal_wstring_builder_result(____szField2_unmarshaled, ___szField2);

		// Marshaling of parameter '___pchField4' to managed representation
		uint32_t ____pchField4_empty = 0;

		// Marshaling of parameter '___pdwAttr5' to managed representation
		uint32_t ____pdwAttr5_empty = 0;

		// Marshaling of parameter '___ppvSigBlob6' to managed representation
		intptr_t ____ppvSigBlob6_empty;
		memset((&____ppvSigBlob6_empty), 0, sizeof(____ppvSigBlob6_empty));

		// Marshaling of parameter '___pcbSigBlob7' to managed representation
		uint32_t ____pcbSigBlob7_empty = 0;

		// Marshaling of parameter '___pdwCPlusTypeFlag8' to managed representation
		uint32_t ____pdwCPlusTypeFlag8_empty = 0;

		// Marshaling of parameter '___ppValue9' to managed representation
		intptr_t ____ppValue9_empty;
		memset((&____ppValue9_empty), 0, sizeof(____ppValue9_empty));

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __thisValue = (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8*)GetManagedObjectInline();
			returnValue = ModuleMetadata_GetFieldProps_mB2A10C18C5DD5B5146B4ECCF39FBBD151D165077(__thisValue, ___mb0, (&____pClass1_empty), ____szField2_unmarshaled, ___cchField3, (&____pchField4_empty), (&____pdwAttr5_empty), (&____ppvSigBlob6_empty), (&____pcbSigBlob7_empty), (&____pdwCPlusTypeFlag8_empty), (&____ppValue9_empty), NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of parameter '___pClass1' back from managed representation
		*___pClass1 = ____pClass1_empty;

		// Marshaling of parameter '___pchField4' back from managed representation
		*___pchField4 = ____pchField4_empty;

		// Marshaling of parameter '___pdwAttr5' back from managed representation
		*___pdwAttr5 = ____pdwAttr5_empty;

		// Marshaling of parameter '___ppvSigBlob6' back from managed representation
		*___ppvSigBlob6 = ____ppvSigBlob6_empty;

		// Marshaling of parameter '___pcbSigBlob7' back from managed representation
		*___pcbSigBlob7 = ____pcbSigBlob7_empty;

		// Marshaling of parameter '___pdwCPlusTypeFlag8' back from managed representation
		*___pdwCPlusTypeFlag8 = ____pdwCPlusTypeFlag8_empty;

		// Marshaling of parameter '___ppValue9' back from managed representation
		*___ppValue9 = ____ppValue9_empty;

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataImport_GetPropertyProps_m7A3F535A4EED2A9D059AB39FE5DE8B3278F8B9A4(uint32_t ___prop0, uint32_t* ___pClass1, Il2CppChar* ___szProperty2, uint32_t ___cchProperty3, uint32_t* ___pchProperty4, uint32_t* ___pdwPropFlags5, intptr_t* ___ppvSig6, uint32_t* ___pbSig7, uint32_t* ___pdwCPlusTypeFlag8, intptr_t* ___ppDefaultValue9, uint32_t* ___pcchDefaultValue10, uint32_t* ___pmdSetter11, uint32_t* ___pmdGetter12, uint32_t* ___rmdOtherMethod13, uint32_t ___cMax14, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___pClass1' to managed representation
		uint32_t ____pClass1_empty = 0;

		// Marshaling of parameter '___szProperty2' to managed representation
		StringBuilder_t* ____szProperty2_unmarshaled = NULL;
		il2cpp_codegen_marshal_wstring_builder_result(____szProperty2_unmarshaled, ___szProperty2);

		// Marshaling of parameter '___pchProperty4' to managed representation
		uint32_t ____pchProperty4_empty = 0;

		// Marshaling of parameter '___pdwPropFlags5' to managed representation
		uint32_t ____pdwPropFlags5_empty = 0;

		// Marshaling of parameter '___ppvSig6' to managed representation
		intptr_t ____ppvSig6_empty;
		memset((&____ppvSig6_empty), 0, sizeof(____ppvSig6_empty));

		// Marshaling of parameter '___pbSig7' to managed representation
		uint32_t ____pbSig7_empty = 0;

		// Marshaling of parameter '___pdwCPlusTypeFlag8' to managed representation
		uint32_t ____pdwCPlusTypeFlag8_empty = 0;

		// Marshaling of parameter '___ppDefaultValue9' to managed representation
		intptr_t ____ppDefaultValue9_empty;
		memset((&____ppDefaultValue9_empty), 0, sizeof(____ppDefaultValue9_empty));

		// Marshaling of parameter '___pcchDefaultValue10' to managed representation
		uint32_t ____pcchDefaultValue10_empty = 0;

		// Marshaling of parameter '___pmdSetter11' to managed representation
		uint32_t ____pmdSetter11_empty = 0;

		// Marshaling of parameter '___pmdGetter12' to managed representation
		uint32_t ____pmdGetter12_empty = 0;

		// Marshaling of parameter '___rmdOtherMethod13' to managed representation
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ____rmdOtherMethod13_unmarshaled = NULL;
		if (___rmdOtherMethod13 != NULL)
		{
			____rmdOtherMethod13_unmarshaled = reinterpret_cast<UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*>((UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, static_cast<int32_t>(___cMax14)));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(___cMax14)); i++)
			{
				(____rmdOtherMethod13_unmarshaled)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (___rmdOtherMethod13)[i]);
			}
		}

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __thisValue = (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8*)GetManagedObjectInline();
			returnValue = ModuleMetadata_GetPropertyProps_m3B84DB01251C027B3250D06C5B4C3621731579C8(__thisValue, ___prop0, (&____pClass1_empty), ____szProperty2_unmarshaled, ___cchProperty3, (&____pchProperty4_empty), (&____pdwPropFlags5_empty), (&____ppvSig6_empty), (&____pbSig7_empty), (&____pdwCPlusTypeFlag8_empty), (&____ppDefaultValue9_empty), (&____pcchDefaultValue10_empty), (&____pmdSetter11_empty), (&____pmdGetter12_empty), ____rmdOtherMethod13_unmarshaled, ___cMax14, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of parameter '___pClass1' back from managed representation
		*___pClass1 = ____pClass1_empty;

		// Marshaling of parameter '___pchProperty4' back from managed representation
		*___pchProperty4 = ____pchProperty4_empty;

		// Marshaling of parameter '___pdwPropFlags5' back from managed representation
		*___pdwPropFlags5 = ____pdwPropFlags5_empty;

		// Marshaling of parameter '___ppvSig6' back from managed representation
		*___ppvSig6 = ____ppvSig6_empty;

		// Marshaling of parameter '___pbSig7' back from managed representation
		*___pbSig7 = ____pbSig7_empty;

		// Marshaling of parameter '___pdwCPlusTypeFlag8' back from managed representation
		*___pdwCPlusTypeFlag8 = ____pdwCPlusTypeFlag8_empty;

		// Marshaling of parameter '___ppDefaultValue9' back from managed representation
		*___ppDefaultValue9 = ____ppDefaultValue9_empty;

		// Marshaling of parameter '___pcchDefaultValue10' back from managed representation
		*___pcchDefaultValue10 = ____pcchDefaultValue10_empty;

		// Marshaling of parameter '___pmdSetter11' back from managed representation
		*___pmdSetter11 = ____pmdSetter11_empty;

		// Marshaling of parameter '___pmdGetter12' back from managed representation
		*___pmdGetter12 = ____pmdGetter12_empty;

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataImport_GetParamProps_mB69D7A0CDFE2AEA07C5D31F3EFC9BBA6FBF232A7(uint32_t ___tk0, uint32_t* ___pmd1, uint32_t* ___pulSequence2, Il2CppChar* ___szName3, uint32_t ___cchName4, uint32_t* ___pchName5, uint32_t* ___pdwAttr6, uint32_t* ___pdwCPlusTypeFlag7, intptr_t* ___ppValue8, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___pmd1' to managed representation
		uint32_t ____pmd1_empty = 0;

		// Marshaling of parameter '___pulSequence2' to managed representation
		uint32_t ____pulSequence2_empty = 0;

		// Marshaling of parameter '___szName3' to managed representation
		StringBuilder_t* ____szName3_unmarshaled = NULL;
		il2cpp_codegen_marshal_wstring_builder_result(____szName3_unmarshaled, ___szName3);

		// Marshaling of parameter '___pchName5' to managed representation
		uint32_t ____pchName5_empty = 0;

		// Marshaling of parameter '___pdwAttr6' to managed representation
		uint32_t ____pdwAttr6_empty = 0;

		// Marshaling of parameter '___pdwCPlusTypeFlag7' to managed representation
		uint32_t ____pdwCPlusTypeFlag7_empty = 0;

		// Marshaling of parameter '___ppValue8' to managed representation
		intptr_t ____ppValue8_empty;
		memset((&____ppValue8_empty), 0, sizeof(____ppValue8_empty));

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __thisValue = (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8*)GetManagedObjectInline();
			returnValue = ModuleMetadata_GetParamProps_mF5FC49FCA18D465D6E1B2DED57799423F5F84138(__thisValue, ___tk0, (&____pmd1_empty), (&____pulSequence2_empty), ____szName3_unmarshaled, ___cchName4, (&____pchName5_empty), (&____pdwAttr6_empty), (&____pdwCPlusTypeFlag7_empty), (&____ppValue8_empty), NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of parameter '___pmd1' back from managed representation
		*___pmd1 = ____pmd1_empty;

		// Marshaling of parameter '___pulSequence2' back from managed representation
		*___pulSequence2 = ____pulSequence2_empty;

		// Marshaling of parameter '___pchName5' back from managed representation
		*___pchName5 = ____pchName5_empty;

		// Marshaling of parameter '___pdwAttr6' back from managed representation
		*___pdwAttr6 = ____pdwAttr6_empty;

		// Marshaling of parameter '___pdwCPlusTypeFlag7' back from managed representation
		*___pdwCPlusTypeFlag7 = ____pdwCPlusTypeFlag7_empty;

		// Marshaling of parameter '___ppValue8' back from managed representation
		*___ppValue8 = ____ppValue8_empty;

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataImport_GetCustomAttributeByName_m91EB28E9D6250F1D0D3C365C87560A7E5F96840E(uint32_t ___tkObj0, Il2CppChar* ___szName1, intptr_t* ___ppData2, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___szName1' to managed representation
		String_t* ____szName1_unmarshaled = NULL;
		____szName1_unmarshaled = il2cpp_codegen_marshal_bstring_result(___szName1);

		// Marshaling of parameter '___ppData2' to managed representation
		intptr_t ____ppData2_empty;
		memset((&____ppData2_empty), 0, sizeof(____ppData2_empty));

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __thisValue = (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8*)GetManagedObjectInline();
			returnValue = ModuleMetadata_GetCustomAttributeByName_mC90FBC388C6041B284A237D4F1EA86544905DDFB(__thisValue, ___tkObj0, ____szName1_unmarshaled, (&____ppData2_empty), NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of parameter '___ppData2' back from managed representation
		*___ppData2 = ____ppData2_empty;

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual int32_t STDCALL IMetaDataImport_IsValidToken_m46E4E718378A959F80F21964A6CDA0E3A6DB719A(uint32_t ___tk0) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		bool returnValue;
		try
		{
			ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __thisValue = (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8*)GetManagedObjectInline();
			returnValue = ModuleMetadata_IsValidToken_m1ED55ED480E220B3D09F6ABB21167B0DEF61B1AF(__thisValue, ___tk0, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return static_cast<int32_t>(0);
		}

		return static_cast<int32_t>(returnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataImport_GetNestedClassProps_mB8D9EEBF7C4234E496202B3CCB5F1F5927E90B30(uint32_t ___tdNestedClass0, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __thisValue = (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8*)GetManagedObjectInline();
			returnValue = ModuleMetadata_GetNestedClassProps_m717051053B2063D31149748215113F6ADB13C60B(__thisValue, ___tdNestedClass0, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataImport_GetNativeCallConvFromSig_mAFD738D5DB9D0FE1D2F2BC2E1C58368CD6F1784B(intptr_t ___pvSig0, uint32_t ___cbSig1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __thisValue = (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8*)GetManagedObjectInline();
			returnValue = ModuleMetadata_GetNativeCallConvFromSig_m916E8A59275973291005C971E98A06F07AC9DC78(__thisValue, ___pvSig0, ___cbSig1, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataImport_IsGlobal_m146C5747EB31B51582AC59959EF1F3CABCF22C22(uint32_t ___pd0, int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8* __thisValue = (ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8*)GetManagedObjectInline();
			returnValue = ModuleMetadata_IsGlobal_m45A0732A6EE4C898ABFB13E3AA28469F97567D76(__thisValue, ___pd0, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ModuleMetadata_t66AE381AEA6324F4392885BF7F2E1824E9AADFA8_ComCallableWrapper(obj));
}
