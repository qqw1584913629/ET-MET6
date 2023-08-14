#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		void* params[4] = { &p1, &p2, &p3, &p4 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerActionInvoker5;
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerActionInvoker5<T1*, T2, T3, T4, T5>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		void* params[5] = { p1, &p2, &p3, &p4, &p5 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		R ret;
		void* params[4] = { &p1, &p2, &p3, &p4 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerFuncInvoker5;
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerFuncInvoker5<R, T1*, T2, T3, T4, T5>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		R ret;
		void* params[5] = { p1, &p2, &p3, &p4, &p5 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

// System.Action`1<System.Exception>
struct Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// ILRuntime.Mono.Collections.Generic.Collection`1<ILRuntime.Mono.Cecil.ArrayDimension>
struct Collection_1_tF74ACD458D0FBD42DD1900C51DAA4DDBF114103F;
// ILRuntime.Mono.Collections.Generic.Collection`1<ILRuntime.Mono.Cecil.CustomAttribute>
struct Collection_1_t0337BC9E2B8889D1AFAD653F1B760A6C09E46E7F;
// ILRuntime.Mono.Collections.Generic.Collection`1<ILRuntime.Mono.Cecil.CustomAttributeArgument>
struct Collection_1_t94541185B135CB56847AEC0B7649817DE17EDC88;
// ILRuntime.Mono.Collections.Generic.Collection`1<ILRuntime.Mono.Cecil.CustomAttributeNamedArgument>
struct Collection_1_tC233285387A27A2254DF9C00E5FFBA4E0200559D;
// ILRuntime.Mono.Collections.Generic.Collection`1<ILRuntime.Mono.Cecil.Cil.CustomDebugInformation>
struct Collection_1_t06370A4EFF00B6BCBDB4D1D38079668613B406EE;
// ILRuntime.Mono.Collections.Generic.Collection`1<ILRuntime.Mono.Cecil.Cil.ExceptionHandler>
struct Collection_1_t5C54232BE7649E8BCD655EC300132C2E30EC319F;
// ILRuntime.Mono.Collections.Generic.Collection`1<ILRuntime.Mono.Cecil.GenericParameter>
struct Collection_1_tAF0023B9443046D2A5BC6C79ADE1460DA3165828;
// ILRuntime.Mono.Collections.Generic.Collection`1<ILRuntime.Mono.Cecil.Cil.Instruction>
struct Collection_1_tF5DDA42267FA4FB2EEA852938E458549573DB51F;
// ILRuntime.Mono.Collections.Generic.Collection`1<ILRuntime.Mono.Cecil.MethodReference>
struct Collection_1_tFCC9B2ABA4F2CD19C7DE3F95AF86983893916C64;
// ILRuntime.Mono.Collections.Generic.Collection`1<System.Object>
struct Collection_1_tE08A2FA07693E8363A425AFCC772CBB1404392E0;
// ILRuntime.Mono.Collections.Generic.Collection`1<ILRuntime.Mono.Cecil.ParameterDefinition>
struct Collection_1_t07922683F6D8F9416D093E2327FCBCCAC03146F1;
// ILRuntime.Mono.Collections.Generic.Collection`1<ILRuntime.Mono.Cecil.SecurityDeclaration>
struct Collection_1_t299DC8E9E0BE888516E97FEACE3AF67BEF223253;
// ILRuntime.Mono.Collections.Generic.Collection`1<ILRuntime.Mono.Cecil.Cil.SequencePoint>
struct Collection_1_t7057198296C8840DBF5EA3ADE5AA39E81C7D0379;
// ILRuntime.Mono.Collections.Generic.Collection`1<ILRuntime.Mono.Cecil.TypeReference>
struct Collection_1_t4D9D6514FFD29B0141FB7020EC67BC6340193EA5;
// ILRuntime.Mono.Collections.Generic.Collection`1<ILRuntime.Mono.Cecil.Cil.VariableDefinition>
struct Collection_1_t413B13D425BA31F81271569D26FE2157469EB23C;
// System.Collections.Generic.Dictionary`2<System.Reflection.FieldInfo,System.Collections.Generic.KeyValuePair`2<ILRuntime.Runtime.Enviorment.CLRFieldBindingDelegate,ILRuntime.Runtime.Enviorment.CLRFieldBindingDelegate>>
struct Dictionary_2_t960920132BCFCE4E84B9215BD59E48CFF438CA84;
// System.Collections.Generic.Dictionary`2<System.Reflection.FieldInfo,ILRuntime.Runtime.Enviorment.CLRFieldGetterDelegate>
struct Dictionary_2_tA693052798BE59A67A78D0CBACD646C39CA0CC7A;
// System.Collections.Generic.Dictionary`2<System.Reflection.FieldInfo,ILRuntime.Runtime.Enviorment.CLRFieldSetterDelegate>
struct Dictionary_2_t8F163C32461ECD4A027271F42B05C1C325FEA9E4;
// System.Collections.Generic.Dictionary`2<ILRuntime.CLR.Method.ILMethod,ILRuntime.Runtime.Intepreter.IDelegateAdapter>
struct Dictionary_2_tB949D9F13E9DFE10658A01F5DFEB4EE439CA4BC6;
// System.Collections.Generic.Dictionary`2<ILRuntime.Mono.Cecil.Cil.Instruction,System.Int32>
struct Dictionary_2_t5B089D76260FC645B19FAE71638DFBBFEA74D852;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.KeyValuePair`2<ILRuntime.Runtime.Enviorment.CLRFieldBindingDelegate,ILRuntime.Runtime.Enviorment.CLRFieldBindingDelegate>>
struct Dictionary_2_t169275DEA884645B5FE227A9DFE3FBAC399D4E00;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32[]>
struct Dictionary_2_t029F6A37F043A1B571A7DB746955ECB8DC548AD9;
// System.Collections.Generic.Dictionary`2<System.Int32,ILRuntime.Runtime.Enviorment.CLRFieldGetterDelegate>
struct Dictionary_2_tF46722B97F70D0ECAC95378049F4FB4DDCB2E269;
// System.Collections.Generic.Dictionary`2<System.Int32,ILRuntime.Runtime.Enviorment.CLRFieldSetterDelegate>
struct Dictionary_2_t0974A2CAF45D6E95E3D92D2E08B44BF1E9673EBA;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.FieldInfo>
struct Dictionary_2_t388E31CE91169A6FDC01F4480E46D1BE3AEF76F9;
// System.Collections.Generic.Dictionary`2<System.Int32,ILRuntime.Runtime.Intepreter.ILIntepreter>
struct Dictionary_2_tE202C8415E620816369851D2E36F931DAC864CD4;
// System.Collections.Generic.Dictionary`2<System.Int32,ILRuntime.CLR.TypeSystem.IType>
struct Dictionary_2_t80FDC29AD74F0C96E5DC79D2B57AA658D9612268;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907;
// System.Collections.Generic.Dictionary`2<System.Int32,ILRuntime.Runtime.Intepreter.RegisterVM.RegisterVMSymbol>
struct Dictionary_2_tEEB88CF46F6DA1D57225A58A73623EA721DEF951;
// System.Collections.Generic.Dictionary`2<System.Reflection.MethodBase,ILRuntime.Runtime.Enviorment.CLRRedirectionDelegate>
struct Dictionary_2_tBCF477C8957A7776ED771401B7A91BC5EB9B45E5;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<ILRuntime.CLR.Method.CLRMethod>>
struct Dictionary_2_tC26E805B03E735A461D0E10820350B58E0F8E0E6;
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<ILRuntime.CLR.Method.ILMethod>>
struct Dictionary_2_tA246D19070A3833B69EA3F4B84077EF05CC187D5;
// System.Collections.Generic.Dictionary`2<System.String,System.Byte[]>
struct Dictionary_2_t590895D15CD5AFFCCF8B9AB63749AA60FAC3BE2D;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588;
// System.Collections.Generic.Dictionary`2<System.Type,ILRuntime.Runtime.Enviorment.CLRCreateArrayInstanceDelegate>
struct Dictionary_2_t446AC917A9E96A487A0FBFF32EF04444B9210FA2;
// System.Collections.Generic.Dictionary`2<System.Type,ILRuntime.Runtime.Enviorment.CLRCreateDefaultInstanceDelegate>
struct Dictionary_2_tE41322CA541823ACE793D57DF3946EF076C0D7AC;
// System.Collections.Generic.Dictionary`2<System.Type,ILRuntime.Runtime.Enviorment.CLRMemberwiseCloneDelegate>
struct Dictionary_2_t0023E72D1AE4C6D255E2789917E09F333AA42A1A;
// System.Collections.Generic.Dictionary`2<System.Type,ILRuntime.Runtime.Enviorment.CrossBindingAdaptor>
struct Dictionary_2_t9A02F7B6E922C85DACFF9CC5D7FFBD99BFF467DA;
// System.Collections.Generic.Dictionary`2<System.Type,ILRuntime.CLR.TypeSystem.IType>
struct Dictionary_2_t303380A6A30DFE60E5DC3F6DF3D144E0B43D6026;
// System.Collections.Generic.Dictionary`2<System.Type,ILRuntime.Runtime.Enviorment.ValueTypeBinder>
struct Dictionary_2_t4281FE5840E8891AF449FA27109FA17C66463B8A;
// ET.ETTask`1<System.Boolean>
struct ETTask_1_tC3B29B37E823D9C66439D79CE23D65BBFE61686F;
// System.Collections.Generic.HashSet`1<System.Action>
struct HashSet_1_t095EA6937EBCEA0A5C3225D8D0D5E4CEF32D6828;
// System.Collections.Generic.HashSet`1<ILRuntime.CLR.Method.ILMethod>
struct HashSet_1_t2672434E7FA2BDC91784300DAB040065F53CA23A;
// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885;
// System.Collections.Generic.IDictionary`2<ILRuntime.Mono.Cecil.Cil.Instruction,ILRuntime.Mono.Cecil.Cil.SequencePoint>
struct IDictionary_2_t55986C68F428C28EE277F73181671EB2139A2741;
// System.Collections.Generic.IEqualityComparer`1<System.Action>
struct IEqualityComparer_1_t9C770ED0AAB2B03D163EE9D403005B9F2D2425CF;
// System.Collections.Generic.IEqualityComparer`1<ILRuntime.CLR.Method.ILMethod>
struct IEqualityComparer_1_t8E5E2E8FA744D23D596C608ABE59991B628E19D8;
// System.Collections.Generic.IEqualityComparer`1<ILRuntime.Mono.Cecil.Cil.Instruction>
struct IEqualityComparer_1_tE2C4C242D73919F3D44753C01E7CBAE6903532A5;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_tDBFC8496F14612776AF930DBF84AFE7D06D1F0E9;
// System.Collections.Generic.IEqualityComparer`1<System.Reflection.MethodBase>
struct IEqualityComparer_1_t300436C2867B6F6B60F14627F351FA8A1EFE7754;
// System.Collections.Generic.IList`1<System.Object>
struct IList_1_t6EE90D273EFCF5E7E4C37FAB712E70BB6F1B4BFF;
// System.Collections.Generic.Dictionary`2/KeyCollection<ILRuntime.Mono.Cecil.Cil.Instruction,System.Int32>
struct KeyCollection_t400F7DB5452D6395BC15B11D1AEBA89D00770ED3;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Int32[]>
struct KeyCollection_tC542A7519E04306FF4830698FC8A485843209C5F;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Reflection.FieldInfo>
struct KeyCollection_tCA299FFBD545E24D002039DCAF0362CAA379EAA3;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,ILRuntime.Runtime.Intepreter.RegisterVM.RegisterVMSymbol>
struct KeyCollection_t286B6A4A000AA75B412BA48B0549492E56118569;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Reflection.MethodBase,ILRuntime.Runtime.Enviorment.CLRRedirectionDelegate>
struct KeyCollection_t99D869C499B709DA0F9BB1D386AD2F3A3E358D74;
// System.Collections.Generic.List`1<ILRuntime.CLR.Method.CLRMethod>
struct List_1_tC4C56F6874F83838764B7B05A7167303EC89D2D4;
// System.Collections.Generic.List`1<ILRuntime.CLR.TypeSystem.CLRType>
struct List_1_t32A8E080C94B77FBA5689DAD5BB4311A56A0A0A8;
// System.Collections.Generic.List`1<ET.ETTask>
struct List_1_tA4F47AA2446E3F808EABA13A13F5A8A05B4A5101;
// System.Collections.Generic.List`1<ILRuntime.CLR.Method.ILMethod>
struct List_1_tFA02902A19FAE002B331C328F33B02A3498FB44A;
// System.Collections.Generic.List`1<ILRuntime.CLR.TypeSystem.ILType>
struct List_1_t32BC060D5804049B6F09C0EC0CC3FFFE3C2FF8D6;
// System.Collections.Generic.List`1<ILRuntime.CLR.TypeSystem.IType>
struct List_1_t136E925D19ADF1AFF60DF33114FEC34DD1EAFD75;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.Queue`1<ET.ETTask`1<System.Boolean>>
struct Queue_1_tD1128FC48A9924A7893C010373A943FBC90808D9;
// System.Collections.Generic.Queue`1<ET.ETTask>
struct Queue_1_tD81FB1FE4DD008B5193D0BDAA9B48AEDE8DD41A4;
// System.Collections.Generic.Queue`1<ILRuntime.Runtime.Intepreter.ILIntepreter>
struct Queue_1_t4AEA4CEA7AED884D72C0BED118A66ED1A3C971FA;
// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5;
// ILRuntime.Other.ThreadSafeDictionary`2<System.Int32,ILRuntime.CLR.Method.IMethod>
struct ThreadSafeDictionary_2_t3FCB5E95C01BB2854CB57DE2B63AA7E7D83AD1A1;
// ILRuntime.Other.ThreadSafeDictionary`2<System.Int32,ILRuntime.CLR.TypeSystem.IType>
struct ThreadSafeDictionary_2_t3FF2382D5F92C782F9B804FBC45158A07F2B4276;
// ILRuntime.Other.ThreadSafeDictionary`2<System.Int64,System.String>
struct ThreadSafeDictionary_2_tBB9E36280C2B8BB8C60623F6865903808197565B;
// ILRuntime.Other.ThreadSafeDictionary`2<System.String,ILRuntime.CLR.TypeSystem.IType>
struct ThreadSafeDictionary_2_tCEAD23CD21892964704E03E6C7BF4A2068083155;
// System.Collections.Generic.Dictionary`2/ValueCollection<ILRuntime.Mono.Cecil.Cil.Instruction,System.Int32>
struct ValueCollection_t0450B80421E8ADA21B8998DADE4E8653EF456C26;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Int32[]>
struct ValueCollection_t6D44D0A2B65933FB953BE36FD019130BBA243B59;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Reflection.FieldInfo>
struct ValueCollection_tE3ACA2CA4719661123743144CAA5014F0C4781EB;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,ILRuntime.Runtime.Intepreter.RegisterVM.RegisterVMSymbol>
struct ValueCollection_t758280965BD839AB3CCD41D693D100B07C829D4C;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Reflection.MethodBase,ILRuntime.Runtime.Enviorment.CLRRedirectionDelegate>
struct ValueCollection_t18ADDD7B9C95955D4F089660E0C295D607A561C9;
// System.Collections.Generic.Dictionary`2/Entry<ILRuntime.Mono.Cecil.Cil.Instruction,System.Int32>[]
struct EntryU5BU5D_t773796D12907DF8287C7A1993BAC659E9A3D9194;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,System.Int32[]>[]
struct EntryU5BU5D_tE39FFA41A51BE829EA4A822560291EDF5752730D;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,System.Reflection.FieldInfo>[]
struct EntryU5BU5D_t54A240BD2FB8327D2579194BCF97D0BEA6A563EA;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,ILRuntime.Runtime.Intepreter.RegisterVM.RegisterVMSymbol>[]
struct EntryU5BU5D_t057A4E5B7FB6C558C755FE51B69ED1BBF54D9A64;
// System.Collections.Generic.Dictionary`2/Entry<System.Reflection.MethodBase,ILRuntime.Runtime.Enviorment.CLRRedirectionDelegate>[]
struct EntryU5BU5D_t4E9DDCAE888582E81E88FFEF72A34C98DA0650F6;
// System.Collections.Generic.KeyValuePair`2<System.String,ILRuntime.CLR.TypeSystem.IType>[]
struct KeyValuePair_2U5BU5D_t95F3D6603431315C02B152EFB4CA771ADE93BC2D;
// System.Collections.Generic.HashSet`1/Slot<System.Action>[]
struct SlotU5BU5D_tFBFF4140D072DCDE2240FAD3BAC4EB63A2CE63D6;
// System.Collections.Generic.HashSet`1/Slot<ILRuntime.CLR.Method.ILMethod>[]
struct SlotU5BU5D_t2E539C0000EB2F22E8C358B2EA577EC5CAE40F28;
// System.Reflection.Assembly[]
struct AssemblyU5BU5D_t97B7B4E3FD4DA4944A4BFAA4DC484EA7D990B339;
// System.Attribute[]
struct AttributeU5BU5D_t0F73488E6F1249C889608E8DCC0BCC28A874E8F1;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// ILRuntime.Mono.Cecil.CustomAttribute[]
struct CustomAttributeU5BU5D_t0E0BA760E6F815A54571B49091761B80EBB5246F;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// ET.ETTask[]
struct ETTaskU5BU5D_t450F7E88953540359721DAAB8A676CF06A7485C8;
// ILRuntime.CLR.Method.ExceptionHandler[]
struct ExceptionHandlerU5BU5D_t806BA8B0F17F63D28468BC214AB18A4CD4FBAE80;
// ILRuntime.Mono.Cecil.Cil.ExceptionHandler[]
struct ExceptionHandlerU5BU5D_tA126D4942D668627D308D8BC7664CE14195BB2EB;
// ILRuntime.Mono.Cecil.FieldDefinition[]
struct FieldDefinitionU5BU5D_t3FA75D109EABA48310417014237AA7E9EA900FCF;
// ILRuntime.Mono.Cecil.GenericParameter[]
struct GenericParameterU5BU5D_t0B7FF3A870BDD23665552287ADBEAE810D08CFDE;
// ILRuntime.Reflection.ILRuntimeParameterInfo[]
struct ILRuntimeParameterInfoU5BU5D_t8EFF797892286E1E132DD41DBA657A5B7CF770A7;
// ILRuntime.CLR.TypeSystem.IType[]
struct ITypeU5BU5D_tADD584F6D2F1E810AEF7DB2DCA16027722B50991;
// ILRuntime.Mono.Cecil.Cil.Instruction[]
struct InstructionU5BU5D_t9D4853ED91E6D8DBBD543E4708D1C60550B6F42D;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// ILRuntime.Runtime.Intepreter.OpCodes.OpCode[]
struct OpCodeU5BU5D_tA0A660D228D31635BC51D02B26E5D715E3EA7C4D;
// ILRuntime.Runtime.Intepreter.OpCodes.OpCodeR[]
struct OpCodeRU5BU5D_t9144130E7DF3ABF7AF0E3EFC8AF0C63759AA6AC1;
// ILRuntime.Mono.Cecil.ParameterDefinition[]
struct ParameterDefinitionU5BU5D_tDD5CC92601E09F44ADCF9051423BEA8E2AA8940D;
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// ILRuntime.Runtime.Stack.StackObject[]
struct StackObjectU5BU5D_tF9528074802464C4EB5E10C4B2CD2AA608BD3FB7;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// ILRuntime.Mono.Cecil.TypeReference[]
struct TypeReferenceU5BU5D_tBAA98166F570EF532AF395D27D90FD1D7E41A00C;
// ILRuntime.Mono.Cecil.Cil.VariableDefinition[]
struct VariableDefinitionU5BU5D_t06F185E8E9E0C4DC56883454627414136103E3DE;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// ILRuntime.Runtime.Enviorment.AppDomain
struct AppDomain_tFFEF01BA23D79DA3A22C21195FD262862037E506;
// ILRuntime.Mono.Cecil.ArrayType
struct ArrayType_t10E15696DD4C5718FE0EEB9853B40A9C44764048;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// ILRuntime.Runtime.Intepreter.RegisterVM.AsyncJITCompileWorker
struct AsyncJITCompileWorker_t93339DFB530802A17DBC00A0DFB49E7B10FF2A55;
// System.Runtime.CompilerServices.AsyncMethodBuilderAttribute
struct AsyncMethodBuilderAttribute_t3C650C098D60F31A41B7DE2A7E241085AC125960;
// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// ILRuntime.Runtime.Enviorment.CLRCreateArrayInstanceDelegate
struct CLRCreateArrayInstanceDelegate_t21DB61ADE453F57B36B71AAE6267499E7DF6076B;
// ILRuntime.Runtime.Enviorment.CLRCreateDefaultInstanceDelegate
struct CLRCreateDefaultInstanceDelegate_t9FC3EABA0D0026FA75B38BCDF94E2F82AF5C4A57;
// ILRuntime.Runtime.Enviorment.CLRMemberwiseCloneDelegate
struct CLRMemberwiseCloneDelegate_tF5FF76F7A06C611B7D4700D62638DEDBB978777E;
// ILRuntime.CLR.Method.CLRMethod
struct CLRMethod_t7DF49A5C4FF255B056BFEE0BFDF137AEF905FFF5;
// ILRuntime.Runtime.Enviorment.CLRRedirectionDelegate
struct CLRRedirectionDelegate_tF96884F0BC45FF631DAED91A526F4190B9753690;
// ILRuntime.CLR.TypeSystem.CLRType
struct CLRType_t72C55A04EDC2A68F969A27FE7DB52F5A198D437F;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB;
// ILRuntime.Mono.Cecil.CustomAttribute
struct CustomAttribute_t8966CC52D0DB2846953049A29347308658F9014F;
// ILRuntime.Mono.Cecil.CustomAttributeValueProjection
struct CustomAttributeValueProjection_t4F759D907E5607C8175ECB4E7E63D14169B2A1FB;
// ILRuntime.Runtime.Debugger.DebugService
struct DebugService_t09B46E79D818A2FEF8627FFFB4CCD7B03E7A3022;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// ILRuntime.Runtime.Enviorment.DelegateManager
struct DelegateManager_t8D166F33044B767924C26D1BF3C1620DEF4C4A7A;
// ILRuntime.Mono.Cecil.Cil.Document
struct Document_t0E7FF144D1385E309D5C999E68E919564856DB87;
// ET.ETCancellationToken
struct ETCancellationToken_tACA8F146EDE95371894D92DF0FD89C07C08886E1;
// ET.ETTask
struct ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9;
// System.Exception
struct Exception_t;
// System.Runtime.ExceptionServices.ExceptionDispatchInfo
struct ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757;
// ILRuntime.CLR.Method.ExceptionHandler
struct ExceptionHandler_tB7222B56682A0D18CF20D9FD22EC650A924A5C7D;
// ILRuntime.Mono.Cecil.Cil.ExceptionHandler
struct ExceptionHandler_tCC68B4480346581EEA699654AE4E53AE4229E04F;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// ILRuntime.Mono.Cecil.GenericInstanceType
struct GenericInstanceType_t6A678A502BCB7A6A9F60E0E45C11A73A0852F746;
// ILRuntime.Mono.Cecil.GenericParameter
struct GenericParameter_t8414103B394479F255809FF8AFF131596ED43EEA;
// ILRuntime.Mono.Cecil.GenericParameterConstraintCollection
struct GenericParameterConstraintCollection_t2E91B418227AAFF49EDD3861CC0015A7C21DD4AC;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_t0680C7F905C553076B552D5A1A6E39E2F0F36AA2;
// ILRuntime.Runtime.Intepreter.IDelegateAdapter
struct IDelegateAdapter_t58FB4067DE04B629F7528DD1A3E2DA091C0D9427;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// ILRuntime.Mono.Cecil.IGenericParameterProvider
struct IGenericParameterProvider_t0DF6409F410C22EBEED81368F7880C0602D0FB94;
// ILRuntime.CLR.TypeSystem.ILGenericParameterType
struct ILGenericParameterType_tD3907D5D02CED0831ACEC5A4A288F3A6C6E0889B;
// ILRuntime.Runtime.Intepreter.ILIntepreter
struct ILIntepreter_t25A08CFC50F0E2B09F59BB25BF049CA40064BCC9;
// ILRuntime.CLR.Method.ILMethod
struct ILMethod_tA56B8FD062B67B88B2396AC1AFFCED9E4FE92AD7;
// ILRuntime.Reflection.ILRuntimeConstructorInfo
struct ILRuntimeConstructorInfo_t8246144BC4A47C0292CE84CCC8AD31AFA6E9ACAA;
// ILRuntime.Reflection.ILRuntimeMethodInfo
struct ILRuntimeMethodInfo_t5DFC4EC62846DEE24D20FD2F7824F81C90AECF48;
// ILRuntime.Reflection.ILRuntimeType
struct ILRuntimeType_t9A574F579CC136D55BD59788FE7CA5C0CE67ADCB;
// ILRuntime.Reflection.ILRuntimeWrapperType
struct ILRuntimeWrapperType_t6D3A46A94CA7C3E8B8F05968D5BBB5801E566529;
// ILRuntime.CLR.TypeSystem.ILType
struct ILType_tD812655AF7716306B8168AD6F08152435B77708C;
// ILRuntime.Runtime.Intepreter.ILTypeInstance
struct ILTypeInstance_t4661F334AB7A19092229919A81C8444982969A15;
// ILRuntime.Runtime.Intepreter.ILTypeStaticInstance
struct ILTypeStaticInstance_t4D73184CEB0D3868A493ADC3A45AC3C3D1979741;
// ILRuntime.Mono.Cecil.IMetadataScope
struct IMetadataScope_t00908B4C3E5F2931EA198DABF3D933E41CFBD695;
// ILRuntime.CLR.Method.IMethod
struct IMethod_t0A49ACE2196B0F9737B06C8DDE2785CA5A5E2740;
// ILRuntime.Mono.Cecil.IMethodSignature
struct IMethodSignature_t37334CC3DD27E48A0E251D8DE886C93926A81686;
// ILRuntime.CLR.TypeSystem.IType
struct IType_tC510B754395152F7217FD34CD69B8AFA1676AA9E;
// ILRuntime.Mono.Cecil.Cil.Instruction
struct Instruction_tAA84FA05703612EBA9700BB65C31560D5AA0ACC6;
// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
// ET.KcpLog
struct KcpLog_t166A3A6F579F69B0AA700460B0BF73A4B8C07C5F;
// ET.KcpOutput
struct KcpOutput_t70A2E75BF30C9F6BBFA7EDCCF748E5F9C25F6732;
// ILRuntime.Mono.Cecil.MarshalInfo
struct MarshalInfo_t2AD129A43A98669FCB29FDDD925A6B3FC7D9E7B5;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Reflection.MethodBase
struct MethodBase_t;
// ILRuntime.Mono.Cecil.Cil.MethodBody
struct MethodBody_tB818BF5E1248D874E371C7F3BC0C5C6240BB8F16;
// ILRuntime.Mono.Cecil.Cil.MethodDebugInformation
struct MethodDebugInformation_t338182D1EF8BB76B457F22D8592DB2D91326C50D;
// ILRuntime.Mono.Cecil.MethodDefinition
struct MethodDefinition_t20ECAB62A2A1BBEB383A1A979167D658ACCF3244;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// ILRuntime.Mono.Cecil.MethodReference
struct MethodReference_t622A5B7BD95CF4A7E4210CF3DDBD91A0018D9783;
// ILRuntime.Mono.Cecil.MethodReturnType
struct MethodReturnType_t9E3169A9AF461F689378DC2404F78331B5103F17;
// ILRuntime.Mono.Cecil.ModuleDefinition
struct ModuleDefinition_t736466BAF26312907DDA7740301AED7B194ED9A2;
// System.NotImplementedException
struct NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// System.NullReferenceException
struct NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB;
// ILRuntime.Mono.Cecil.PInvokeInfo
struct PInvokeInfo_tD9C7A95539BBA9BFF25FA624F8406D2230992DEF;
// ILRuntime.Mono.Cecil.ParameterDefinition
struct ParameterDefinition_tF36CEEB8641D1EEA2D1D205360F1A7F37E63A6BA;
// ILRuntime.Mono.Cecil.ParameterDefinitionCollection
struct ParameterDefinitionCollection_t41C891E4E902298512C8B5B2B96A1C792FCC5824;
// System.Reflection.ParameterInfo
struct ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F;
// ILRuntime.Mono.Cecil.ParameterReference
struct ParameterReference_tC6D1DC81D82FDDADAF2EE8CFF4BF7DA7A3BECA24;
// ILRuntime.Runtime.Stack.RuntimeStack
struct RuntimeStack_tEFA4672FB9964C37201A1B23C7940695A9D1BF77;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// ILRuntime.Mono.Cecil.Cil.ScopeDebugInformation
struct ScopeDebugInformation_tD58A6B85C5A464FD7F29218E26E7F32937955E31;
// ILRuntime.Mono.Cecil.Cil.SequencePoint
struct SequencePoint_t118B2D7765CB0A5F233E4AD1DAACE8615FD1C3E1;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
// ILRuntime.Runtime.Stack.StackObject
struct StackObject_tE7817703B5F99899973AB6FE8301AF2A37EECEED;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Type
struct Type_t;
// ILRuntime.Mono.Cecil.TypeDefinition
struct TypeDefinition_tD2308912C032A7F7BC8D8A467ACD1034E8868267;
// System.TypeLoadException
struct TypeLoadException_t6333E3083F7BFF1A582969E6F67ACBA8B0035C32;
// ILRuntime.Mono.Cecil.TypeReference
struct TypeReference_tF82E3E035A581A717CE653CEFC3843CE4E460F91;
// ILRuntime.Mono.Cecil.TypeSpecification
struct TypeSpecification_t4B0FB1E89E0C33705697B10881A7A77B713E80A3;
// ILRuntime.Runtime.Enviorment.ValueTypeBinder
struct ValueTypeBinder_tB3DC591278915AB528AAE29F89FD4D694E6278BA;
// ILRuntime.Mono.Cecil.Cil.VariableDefinition
struct VariableDefinition_tAF3B7BC011FA749BB788E1845596F48A86BA0A58;
// ILRuntime.Mono.Cecil.Cil.VariableReference
struct VariableReference_t435D3702B5E65CC6255D3B92104FB4A97B7CEAFC;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// ET.ETTaskHelper/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_t386188471D23E1BA38A602299DF18C0DE2A95748;
// ET.ETTaskHelper/<>c__DisplayClass5_0
struct U3CU3Ec__DisplayClass5_0_t58DC10C24DA5311C6195ED1199782F0126118891;
// ET.ETTaskHelper/<>c__DisplayClass6_0
struct U3CU3Ec__DisplayClass6_0_t683F5DF1ABBC6076EC981A7D758038E5F5001048;
// ET.ETTaskHelper/CoroutineBlocker
struct CoroutineBlocker_tB36E126059540FB732976F4A8DEC06EF8A96634A;

IL2CPP_EXTERN_C RuntimeClass* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArrayType_t10E15696DD4C5718FE0EEB9853B40A9C44764048_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByReferenceType_t04D7CF79E01873D9FB3B6E7B9BECD4B6052E9306_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CLRMethod_t7DF49A5C4FF255B056BFEE0BFDF137AEF905FFF5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CLRType_t72C55A04EDC2A68F969A27FE7DB52F5A198D437F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CoroutineBlocker_tB36E126059540FB732976F4A8DEC06EF8A96634A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CrossBindingAdaptorType_tB0528E91780413AC8DE75AABF74949FBBD390CE5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t029F6A37F043A1B571A7DB746955ECB8DC548AD9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t5B089D76260FC645B19FAE71638DFBBFEA74D852_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExceptionHandlerU5BU5D_t806BA8B0F17F63D28468BC214AB18A4CD4FBAE80_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExceptionHandler_tB7222B56682A0D18CF20D9FD22EC650A924A5C7D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Extensions_t6C2A02730AAB245FEED18167FEF392140EE8B217_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FieldReference_t752D0BBACC7445A73C69EADC5205CCFAB4F3167E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GenericInstanceType_t6A678A502BCB7A6A9F60E0E45C11A73A0852F746_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashSet_1_t095EA6937EBCEA0A5C3225D8D0D5E4CEF32D6828_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashSet_1_t2672434E7FA2BDC91784300DAB040065F53CA23A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ILGenericParameterType_tD3907D5D02CED0831ACEC5A4A288F3A6C6E0889B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ILMethod_tA56B8FD062B67B88B2396AC1AFFCED9E4FE92AD7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ILRuntimeConstructorInfo_t8246144BC4A47C0292CE84CCC8AD31AFA6E9ACAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ILRuntimeMethodInfo_t5DFC4EC62846DEE24D20FD2F7824F81C90AECF48_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ILRuntimeWrapperType_t6D3A46A94CA7C3E8B8F05968D5BBB5801E566529_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ILTypeInstance_t4661F334AB7A19092229919A81C8444982969A15_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ILType_tD812655AF7716306B8168AD6F08152435B77708C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_1_t6EE90D273EFCF5E7E4C37FAB712E70BB6F1B4BFF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IType_tC510B754395152F7217FD34CD69B8AFA1676AA9E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InstructionU5BU5D_t9D4853ED91E6D8DBBD543E4708D1C60550B6F42D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Instruction_tAA84FA05703612EBA9700BB65C31560D5AA0ACC6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Kcp_t429AB84FF46AA83D15D3DA2EF4C9CE96BF648B30_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeyValuePair_2U5BU5D_t95F3D6603431315C02B152EFB4CA771ADE93BC2D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t136E925D19ADF1AFF60DF33114FEC34DD1EAFD75_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tA4F47AA2446E3F808EABA13A13F5A8A05B4A5101_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MethodReference_t622A5B7BD95CF4A7E4210CF3DDBD91A0018D9783_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OpCodeU5BU5D_tA0A660D228D31635BC51D02B26E5D715E3EA7C4D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ParameterDefinition_tF36CEEB8641D1EEA2D1D205360F1A7F37E63A6BA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Queue_1_tD81FB1FE4DD008B5193D0BDAA9B48AEDE8DD41A4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeArray_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StackObject_tE7817703B5F99899973AB6FE8301AF2A37EECEED_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeLoadException_t6333E3083F7BFF1A582969E6F67ACBA8B0035C32_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeReference_tF82E3E035A581A717CE653CEFC3843CE4E460F91_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass2_0_t386188471D23E1BA38A602299DF18C0DE2A95748_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass5_0_t58DC10C24DA5311C6195ED1199782F0126118891_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass6_0_t683F5DF1ABBC6076EC981A7D758038E5F5001048_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VariableDefinition_tAF3B7BC011FA749BB788E1845596F48A86BA0A58_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral02A29BDC20BCE88DC132CE04A01DD7C3469EA8EB;
IL2CPP_EXTERN_C String_t* _stringLiteral14B9C4ED649A12F3286872BC02BF44694FF70613;
IL2CPP_EXTERN_C String_t* _stringLiteral1AE2330C2783C940AC8185003D0F2B7B95AE6B58;
IL2CPP_EXTERN_C String_t* _stringLiteral4B05388AA999E3C1B1E115416F59EDB4DBFF7CBF;
IL2CPP_EXTERN_C String_t* _stringLiteral59FB7F99FEC6B81FAA83ECC3FE9929AB4E5FB0CD;
IL2CPP_EXTERN_C String_t* _stringLiteral6C050FF692D311C2A2ABB15D2771A2C35FA2B927;
IL2CPP_EXTERN_C String_t* _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D;
IL2CPP_EXTERN_C String_t* _stringLiteral7940B1E0CEB23F95FA72EF03CC10A2C9BDF454A3;
IL2CPP_EXTERN_C String_t* _stringLiteralD7A66F857F6E3FCCC482964755DB79017BF35DD2;
IL2CPP_EXTERN_C String_t* _stringLiteralF5B17BC8CAFB0366DD8D8EA29F1A2C07CCE73DC5;
IL2CPP_EXTERN_C String_t* _stringLiteralFCE88E0B4651EFA0D8F7973A07C513EC28038096;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncETVoidMethodBuilder_AwaitUnsafeOnCompleted_TisETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_TisU3CInnerCoroutineU3Ed__10_t2D601F7100272EA0BB5D608AFE81D658FDE14042_mB852682DBD2821E3CB287E509A776C494FF7EE79_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncETVoidMethodBuilder_AwaitUnsafeOnCompleted_TisETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_TisU3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_tC8B9E615EDCA22128352B31CB0005D42DCD70952_m7BBF15F324CD989EAAAC7E26FEF23747228CC8D6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncETVoidMethodBuilder_AwaitUnsafeOnCompleted_TisETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_TisU3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_tD69FC2C1CB7676C114F1AC8B8D4877AF09E91EB4_m12328704DF6C2DC6731309C804DC587642AA27CC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncETVoidMethodBuilder_AwaitUnsafeOnCompleted_TisETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_TisU3CU3CWaitAnyU3Eg__RunOneTaskU7C0U3Ed_t911A5630E36FB2DC9DED97E5A4B71B60EB72D00B_m705FA038EB48F76E682C55BB6FD82ADE0880D111_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncETVoidMethodBuilder_Start_TisU3CInnerCoroutineU3Ed__10_t2D601F7100272EA0BB5D608AFE81D658FDE14042_mC604A8F025BA07EB3FB5C21C8DBBC8044796E40D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncETVoidMethodBuilder_Start_TisU3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_tC8B9E615EDCA22128352B31CB0005D42DCD70952_mF703CC49BFF53BD376F1D2C4A00507A237512E6E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncETVoidMethodBuilder_Start_TisU3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_tD69FC2C1CB7676C114F1AC8B8D4877AF09E91EB4_mA3EA92C6FA79BC46C30122939F6CA44C0E1D90B9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncETVoidMethodBuilder_Start_TisU3CU3CWaitAnyU3Eg__RunOneTaskU7C0U3Ed_t911A5630E36FB2DC9DED97E5A4B71B60EB72D00B_mC193C85AA0BFED7A7BE9CC22FD1DF10E986EF8E2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CLRMethod_InitParameters_m7C8BF0B548C7498E64ED61330980BAAC6C0DB423_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CLRMethod_Invoke_m6449013824D5B35662CFB2D47B896B4A12E8743F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Collection_1_GetEnumerator_m9D5939E9116EFA4DE2779BD84FD22F527169E3C6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Collection_1_GetEnumerator_m9FE5C349DD12829D5AA1109094C6C2B17F320AA4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Collection_1_GetEnumerator_mDDCAB1F5B1BC18DD3D3312273BD5FF67093F16C4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Collection_1_get_Count_m003D9033DAFBB663E0C45CF6EAA4C179A197CB5E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Collection_1_get_Count_m2B375C259B69A1D1AAFF357D42EE581534FDAF06_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Collection_1_get_Count_m6104D73EF401C14E46C6436001A13D5A3F8A056A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Collection_1_get_Count_mCC17E3A5E2B00A3D60C12ABD99FC83E21267C8E3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Collection_1_get_Count_mD783638DF1A29022277C89E124B16C27999F831F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Collection_1_get_Count_mE719EDC754A1D10587DA7C00812D88A4999FAA48_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Collection_1_get_Item_m678B4F2D493069B97DB22FC88CBE03A95DD99830_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Collection_1_get_Item_m94FDDCE2857A8035385ED1D49F4A4877D89DF0B9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Collection_1_get_Item_mAE97E3B8BBEED70FD71268FCF2166A46760DBC08_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Collection_1_get_Item_mE1E62B32EE846548B46E59B86FEC11157991F868_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Collection_1_get_Item_mF76AF89A635ED70B85833B34FE18F867DF6EB1C9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Collection_1_get_Item_mFB170286F10CA68315AAE9DC233BF1AB596F37B5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m39A46D5739773AE4017A5751F9E95ED71874C825_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_mFA115DAA0C795A9E122300A1D3D6E48DEFD4FE54_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m3F530E7CD9CC3EB97DCC6E1669EAB9FCE984FA9A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m4B1AFE2030F99E8F3681722B9977BAF3A7F6718E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mADC5C691258B61F41E9BEAEDA7D77752179C58D6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m128B6075B2D3E884FA44A8C4BF145D871AA9274A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m3D78F37FE49E9F0593B3F90A68A65ED5EEB7B593_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ETAsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_TisU3CWaitAllU3Ed__5_tA50206C2AA88F82EB79AE3021E9EDE47B6455DED_m3E9C13137AFCE80E5814B80D9DA3C4DACE627064_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ETAsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_TisU3CWaitAllU3Ed__6_t73CAD2CCB5423A31C85967FB33B23FE96219FFBF_mC57852BDD2AAF841B61F73D4DC1445AF7DE956F6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ETAsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_TisU3CWaitAnyU3Ed__2_t46A8ED3559C8D2579C2F9E875E382FADDB126E60_m0FEF868C38A3064A56A57DAA57CFC787E5656C11_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ETAsyncTaskMethodBuilder_1_Create_mC59CD51B35E4F74B34A0336B1C4D7094B1C17EBD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ETAsyncTaskMethodBuilder_1_SetException_m4B20AE5BD8F1E608AAD3970CB6C2985ACB4D6B08_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ETAsyncTaskMethodBuilder_1_SetResult_mBAD14F0004B857E596693C614C5B29587E97021C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ETAsyncTaskMethodBuilder_1_SetStateMachine_m5B87C2E5817CF286E3FCDFBB7C7BF417672DB76E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ETAsyncTaskMethodBuilder_1_Start_TisU3CWaitAllU3Ed__5_tA50206C2AA88F82EB79AE3021E9EDE47B6455DED_m2DF74E4D7018815157D5A73C472339BAF9650F23_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ETAsyncTaskMethodBuilder_1_Start_TisU3CWaitAllU3Ed__6_t73CAD2CCB5423A31C85967FB33B23FE96219FFBF_m37FBFFC9DA493FE36032DC4BC84A1F9A4B5DF41D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ETAsyncTaskMethodBuilder_1_Start_TisU3CWaitAnyU3Ed__2_t46A8ED3559C8D2579C2F9E875E382FADDB126E60_m9B5E2E9331F0E05CCE0DFB6FC233632FC9D828D1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ETAsyncTaskMethodBuilder_1_get_Task_mB34D8721E56EE05B2B4AE583DEB758828135BDFF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ETAsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_TisU3CWaitAsyncU3Ed__3_t872511C7B0611473DF4F43EC4CADCB9D7C93CE5F_m31F95AC67B3DB2B292CF87379AA2834815AC631C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ETAsyncTaskMethodBuilder_Start_TisU3CWaitAsyncU3Ed__3_t872511C7B0611473DF4F43EC4CADCB9D7C93CE5F_m670F06EAE7A04C739D1DB3C840951E4901B47226_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ETTask_GetResult_m4025996962517219AB63CD35458CEE581DF064E6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ETTask_SetException_m15F23C04CCB4BD5B9A5AB75928C823A93F9B6176_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ETTask_SetResult_mB00B78BA4E84709D15FBB01D553BB9256E62B926_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m2CF219B461F67CCD06F99FF3AFDEADC48A1BD26C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m32C72DBA34EFCAC82F08CA035E3A2B03BC64256C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m4137411A038431D884A2DB3C5CADB14D786D1B99_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m88315086E58918662C6232991F5023626723EED0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mA51B3CEDE853C0A0FE0EDB5E2AD0C1AD9B162BD2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m10B12DD106E0A499FE1C5250F12F6063404CD28F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m122007C9D7809F797369DF048308B3DD5A167E6D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m8E225A51A6FD5B638EB3D77D976A473FB1C010B2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mCAD14EE6EEE34331E951E425D9648AB20DA6C49D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mD5CACA008AA9B926D6B0042E610B8EFD2CCB77CB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m7CAF11D39E21E895E180C6A04B72B7C42B7C619D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mAF0C0A00871D3A34AECAE95B1FD46A043D9D635F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mDE3732995809E5A4FABC3ACE34ADB9EDA62A6B09_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mE60ACE9719275C7F96CFD6CC221DE814F3DAB201_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mF113979307EBDAD84F602115428780AED2805A52_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Add_m69F65CDD0374F5E7F4F4D6302BFFA838BBE0216F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Add_mA69EB23B2381F6D03CCC56D158E2E706DC21EFB2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_GetEnumerator_m78653A4544248BB5FA1AB0D510F0E20ADA71F273_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Remove_mFD60E090A2022B5DAF0138F0E6846E45654E4C8B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1__ctor_m0279525296802FE105F96F1F35AC932146C0305F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1__ctor_mF893C3501F1243F52B8E9A0CAE7DF1F7673EE8E1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ILMethod_InitCodeBody_m1F7FAAB73BD45A73D12864A973F86382BAC70917_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ILMethod_InitParameters_m0567C9FC09025B3B61FE067D01222B88F1D1BA01_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ILMethod_InitToken_m51FCFA50E29DC10DDA4B99208AD09DE662D0A9E3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ILMethod_get_ReflectionConstructorInfo_m43F9A0E4F167A9926A356BE0C77FC1FB4AB8FD79_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ILMethod_get_ReflectionMethodInfo_mB7AEAD37363023B92C516A618BEED7DAF28E8345_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Kcp_KcpCheck_mFF5699B461298AC1FC2BDDB193A8B265C42A5B11_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Kcp_KcpFlush_m0D37EEA2AAF1E2B7445CCD3ADC0CBBF9DB909283_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Kcp_KcpGetconv_m75E390D675FD17CE5129D2E92EBAB2A3C7744B0D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Kcp_KcpInput_mDEAA6D3D2FEC0B5472CB3FAE978ED5DD9F049E8A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Kcp_KcpNodelay_mC659F51BEF21E59DC93BB569DFB20B030F8BEBC2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Kcp_KcpPeeksize_m4E98089F13E28D997C53B9F43318E1A378C2577D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Kcp_KcpRecv_m4A8EADD4666985339638B265B14D5C03D3BF77AF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Kcp_KcpRelease_m9942274BE8E5A2DCA150958CF8563D5229A06164_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Kcp_KcpSend_m109609A727F084054004E1F15BC55EC65D4F86AD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Kcp_KcpSetminrto_mEB93821BF191ACBBBCC1E7918E45B71F1ED13903_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Kcp_KcpSetmtu_m627959E37515A9F77BC31566CAA74816C187192F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Kcp_KcpUpdate_m4B32869D5B5DD50FFEA8C80760FEEC026A7085AD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Kcp_KcpWaitsnd_m069B8A91826334FB50024D0A584E05A50AFAEB91_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Kcp_KcpWndsize_m76F69DCF04008E654B49358FDD4FD8D571E9D514_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2__ctor_m663938AF9BF607872A8BA8ACB8AC4B58AB444D49_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_mA59894DE3E275AB10E1084984DFA2F43FB1B69A4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_mFA82406BB472516B580931517D30FB07558410C5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m3F51DF5D911FE86B020CC8DD004AC5A96492A070_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m68A5223D8F087592B1404CCD07FAE88BEC924FB3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m058832077A5E305D1A30987EDF5EF94ABB118AB2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m44EE83E964CDEA8BDD3569AD8FF75A7ADDC834BD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m51111317D140CE9FAD15255586ACC19468E8CB16_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m098A3FBEC846D65A6FA1C497181C458CB65EC608_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m85C0F032DCB5D6814A7025C9AC1BB586F662E2A4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mFF4DE940771926F51E45DEEAC63BC14CD28C5635_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_mE2C54C6AE9FC9F05BF44CD9D7D61DC6CD56E3E28_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Dequeue_m8961AF5251B0C920540483E9034A5C4981DAEDC5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Enqueue_m6B193ACE0D1CA2A8A8462A7B3DF4B4AC8B0752B9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1__ctor_m2362F2BF6D5B2DCD823FEAE7D34AF9915581DC79_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_get_Count_mB53765136F6A77A34AD84495D77EE7F54F28CB35_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* ExtensionAttribute_t55192F874E3E06FBC2C075D9AB0214C94A702991_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct KeyValuePair_2U5BU5D_t95F3D6603431315C02B152EFB4CA771ADE93BC2D;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct ETTaskU5BU5D_t450F7E88953540359721DAAB8A676CF06A7485C8;
struct ExceptionHandlerU5BU5D_t806BA8B0F17F63D28468BC214AB18A4CD4FBAE80;
struct ITypeU5BU5D_tADD584F6D2F1E810AEF7DB2DCA16027722B50991;
struct InstructionU5BU5D_t9D4853ED91E6D8DBBD543E4708D1C60550B6F42D;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct OpCodeU5BU5D_tA0A660D228D31635BC51D02B26E5D715E3EA7C4D;
struct OpCodeRU5BU5D_t9144130E7DF3ABF7AF0E3EFC8AF0C63759AA6AC1;
struct ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ILRuntime.Mono.Collections.Generic.Collection`1<ILRuntime.Mono.Cecil.CustomAttribute>
struct Collection_1_t0337BC9E2B8889D1AFAD653F1B760A6C09E46E7F  : public RuntimeObject
{
	// T[] ILRuntime.Mono.Collections.Generic.Collection`1::items
	CustomAttributeU5BU5D_t0E0BA760E6F815A54571B49091761B80EBB5246F* ___items_0;
	// System.Int32 ILRuntime.Mono.Collections.Generic.Collection`1::size
	int32_t ___size_1;
	// System.Int32 ILRuntime.Mono.Collections.Generic.Collection`1::version
	int32_t ___version_2;
};

// ILRuntime.Mono.Collections.Generic.Collection`1<ILRuntime.Mono.Cecil.Cil.ExceptionHandler>
struct Collection_1_t5C54232BE7649E8BCD655EC300132C2E30EC319F  : public RuntimeObject
{
	// T[] ILRuntime.Mono.Collections.Generic.Collection`1::items
	ExceptionHandlerU5BU5D_tA126D4942D668627D308D8BC7664CE14195BB2EB* ___items_0;
	// System.Int32 ILRuntime.Mono.Collections.Generic.Collection`1::size
	int32_t ___size_1;
	// System.Int32 ILRuntime.Mono.Collections.Generic.Collection`1::version
	int32_t ___version_2;
};

// ILRuntime.Mono.Collections.Generic.Collection`1<ILRuntime.Mono.Cecil.GenericParameter>
struct Collection_1_tAF0023B9443046D2A5BC6C79ADE1460DA3165828  : public RuntimeObject
{
	// T[] ILRuntime.Mono.Collections.Generic.Collection`1::items
	GenericParameterU5BU5D_t0B7FF3A870BDD23665552287ADBEAE810D08CFDE* ___items_0;
	// System.Int32 ILRuntime.Mono.Collections.Generic.Collection`1::size
	int32_t ___size_1;
	// System.Int32 ILRuntime.Mono.Collections.Generic.Collection`1::version
	int32_t ___version_2;
};

// ILRuntime.Mono.Collections.Generic.Collection`1<ILRuntime.Mono.Cecil.Cil.Instruction>
struct Collection_1_tF5DDA42267FA4FB2EEA852938E458549573DB51F  : public RuntimeObject
{
	// T[] ILRuntime.Mono.Collections.Generic.Collection`1::items
	InstructionU5BU5D_t9D4853ED91E6D8DBBD543E4708D1C60550B6F42D* ___items_0;
	// System.Int32 ILRuntime.Mono.Collections.Generic.Collection`1::size
	int32_t ___size_1;
	// System.Int32 ILRuntime.Mono.Collections.Generic.Collection`1::version
	int32_t ___version_2;
};

// ILRuntime.Mono.Collections.Generic.Collection`1<System.Object>
struct Collection_1_tE08A2FA07693E8363A425AFCC772CBB1404392E0  : public RuntimeObject
{
	// T[] ILRuntime.Mono.Collections.Generic.Collection`1::items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___items_0;
	// System.Int32 ILRuntime.Mono.Collections.Generic.Collection`1::size
	int32_t ___size_1;
	// System.Int32 ILRuntime.Mono.Collections.Generic.Collection`1::version
	int32_t ___version_2;
};

// ILRuntime.Mono.Collections.Generic.Collection`1<ILRuntime.Mono.Cecil.ParameterDefinition>
struct Collection_1_t07922683F6D8F9416D093E2327FCBCCAC03146F1  : public RuntimeObject
{
	// T[] ILRuntime.Mono.Collections.Generic.Collection`1::items
	ParameterDefinitionU5BU5D_tDD5CC92601E09F44ADCF9051423BEA8E2AA8940D* ___items_0;
	// System.Int32 ILRuntime.Mono.Collections.Generic.Collection`1::size
	int32_t ___size_1;
	// System.Int32 ILRuntime.Mono.Collections.Generic.Collection`1::version
	int32_t ___version_2;
};

// ILRuntime.Mono.Collections.Generic.Collection`1<ILRuntime.Mono.Cecil.TypeReference>
struct Collection_1_t4D9D6514FFD29B0141FB7020EC67BC6340193EA5  : public RuntimeObject
{
	// T[] ILRuntime.Mono.Collections.Generic.Collection`1::items
	TypeReferenceU5BU5D_tBAA98166F570EF532AF395D27D90FD1D7E41A00C* ___items_0;
	// System.Int32 ILRuntime.Mono.Collections.Generic.Collection`1::size
	int32_t ___size_1;
	// System.Int32 ILRuntime.Mono.Collections.Generic.Collection`1::version
	int32_t ___version_2;
};

// ILRuntime.Mono.Collections.Generic.Collection`1<ILRuntime.Mono.Cecil.Cil.VariableDefinition>
struct Collection_1_t413B13D425BA31F81271569D26FE2157469EB23C  : public RuntimeObject
{
	// T[] ILRuntime.Mono.Collections.Generic.Collection`1::items
	VariableDefinitionU5BU5D_t06F185E8E9E0C4DC56883454627414136103E3DE* ___items_0;
	// System.Int32 ILRuntime.Mono.Collections.Generic.Collection`1::size
	int32_t ___size_1;
	// System.Int32 ILRuntime.Mono.Collections.Generic.Collection`1::version
	int32_t ___version_2;
};

// System.Collections.Generic.Dictionary`2<ILRuntime.Mono.Cecil.Cil.Instruction,System.Int32>
struct Dictionary_2_t5B089D76260FC645B19FAE71638DFBBFEA74D852  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t773796D12907DF8287C7A1993BAC659E9A3D9194* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t400F7DB5452D6395BC15B11D1AEBA89D00770ED3* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t0450B80421E8ADA21B8998DADE4E8653EF456C26* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32[]>
struct Dictionary_2_t029F6A37F043A1B571A7DB746955ECB8DC548AD9  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tE39FFA41A51BE829EA4A822560291EDF5752730D* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tC542A7519E04306FF4830698FC8A485843209C5F* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t6D44D0A2B65933FB953BE36FD019130BBA243B59* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.FieldInfo>
struct Dictionary_2_t388E31CE91169A6FDC01F4480E46D1BE3AEF76F9  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t54A240BD2FB8327D2579194BCF97D0BEA6A563EA* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tCA299FFBD545E24D002039DCAF0362CAA379EAA3* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tE3ACA2CA4719661123743144CAA5014F0C4781EB* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.Int32,ILRuntime.Runtime.Intepreter.RegisterVM.RegisterVMSymbol>
struct Dictionary_2_tEEB88CF46F6DA1D57225A58A73623EA721DEF951  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t057A4E5B7FB6C558C755FE51B69ED1BBF54D9A64* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t286B6A4A000AA75B412BA48B0549492E56118569* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t758280965BD839AB3CCD41D693D100B07C829D4C* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.Reflection.MethodBase,ILRuntime.Runtime.Enviorment.CLRRedirectionDelegate>
struct Dictionary_2_tBCF477C8957A7776ED771401B7A91BC5EB9B45E5  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t4E9DDCAE888582E81E88FFEF72A34C98DA0650F6* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t99D869C499B709DA0F9BB1D386AD2F3A3E358D74* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t18ADDD7B9C95955D4F089660E0C295D607A561C9* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// ET.ETTask`1<System.Boolean>
struct ETTask_1_tC3B29B37E823D9C66439D79CE23D65BBFE61686F  : public RuntimeObject
{
	// System.Boolean ET.ETTask`1::fromPool
	bool ___fromPool_1;
	// ET.AwaiterStatus ET.ETTask`1::state
	uint8_t ___state_2;
	// T ET.ETTask`1::value
	bool ___value_3;
	// System.Object ET.ETTask`1::callback
	RuntimeObject* ___callback_4;
};

struct ETTask_1_tC3B29B37E823D9C66439D79CE23D65BBFE61686F_StaticFields
{
	// System.Collections.Generic.Queue`1<ET.ETTask`1<T>> ET.ETTask`1::queue
	Queue_1_tD1128FC48A9924A7893C010373A943FBC90808D9* ___queue_0;
};

// System.Collections.Generic.HashSet`1<System.Action>
struct HashSet_1_t095EA6937EBCEA0A5C3225D8D0D5E4CEF32D6828  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_tFBFF4140D072DCDE2240FAD3BAC4EB63A2CE63D6* ____slots_8;
	// System.Int32 System.Collections.Generic.HashSet`1::_count
	int32_t ____count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::_lastIndex
	int32_t ____lastIndex_10;
	// System.Int32 System.Collections.Generic.HashSet`1::_freeList
	int32_t ____freeList_11;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::_comparer
	RuntimeObject* ____comparer_12;
	// System.Int32 System.Collections.Generic.HashSet`1::_version
	int32_t ____version_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::_siInfo
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____siInfo_14;
};

// System.Collections.Generic.HashSet`1<ILRuntime.CLR.Method.ILMethod>
struct HashSet_1_t2672434E7FA2BDC91784300DAB040065F53CA23A  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_t2E539C0000EB2F22E8C358B2EA577EC5CAE40F28* ____slots_8;
	// System.Int32 System.Collections.Generic.HashSet`1::_count
	int32_t ____count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::_lastIndex
	int32_t ____lastIndex_10;
	// System.Int32 System.Collections.Generic.HashSet`1::_freeList
	int32_t ____freeList_11;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::_comparer
	RuntimeObject* ____comparer_12;
	// System.Int32 System.Collections.Generic.HashSet`1::_version
	int32_t ____version_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::_siInfo
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____siInfo_14;
};

// System.Collections.Generic.List`1<ET.ETTask>
struct List_1_tA4F47AA2446E3F808EABA13A13F5A8A05B4A5101  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ETTaskU5BU5D_t450F7E88953540359721DAAB8A676CF06A7485C8* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA4F47AA2446E3F808EABA13A13F5A8A05B4A5101_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ETTaskU5BU5D_t450F7E88953540359721DAAB8A676CF06A7485C8* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<ILRuntime.CLR.TypeSystem.IType>
struct List_1_t136E925D19ADF1AFF60DF33114FEC34DD1EAFD75  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ITypeU5BU5D_tADD584F6D2F1E810AEF7DB2DCA16027722B50991* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t136E925D19ADF1AFF60DF33114FEC34DD1EAFD75_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ITypeU5BU5D_tADD584F6D2F1E810AEF7DB2DCA16027722B50991* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.Queue`1<ET.ETTask>
struct Queue_1_tD81FB1FE4DD008B5193D0BDAA9B48AEDE8DD41A4  : public RuntimeObject
{
	// T[] System.Collections.Generic.Queue`1::_array
	ETTaskU5BU5D_t450F7E88953540359721DAAB8A676CF06A7485C8* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;
	// System.Object System.Collections.Generic.Queue`1::_syncRoot
	RuntimeObject* ____syncRoot_5;
};

// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5  : public RuntimeObject
{
	// T[] System.Collections.Generic.Queue`1::_array
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;
	// System.Object System.Collections.Generic.Queue`1::_syncRoot
	RuntimeObject* ____syncRoot_5;
};

// ILRuntime.Runtime.Enviorment.AppDomain
struct AppDomain_tFFEF01BA23D79DA3A22C21195FD262862037E506  : public RuntimeObject
{
	// System.Collections.Generic.Queue`1<ILRuntime.Runtime.Intepreter.ILIntepreter> ILRuntime.Runtime.Enviorment.AppDomain::freeIntepreters
	Queue_1_t4AEA4CEA7AED884D72C0BED118A66ED1A3C971FA* ___freeIntepreters_0;
	// System.Collections.Generic.Dictionary`2<System.Int32,ILRuntime.Runtime.Intepreter.ILIntepreter> ILRuntime.Runtime.Enviorment.AppDomain::intepreters
	Dictionary_2_tE202C8415E620816369851D2E36F931DAC864CD4* ___intepreters_1;
	// System.Collections.Generic.Dictionary`2<System.Type,ILRuntime.Runtime.Enviorment.CrossBindingAdaptor> ILRuntime.Runtime.Enviorment.AppDomain::crossAdaptors
	Dictionary_2_t9A02F7B6E922C85DACFF9CC5D7FFBD99BFF467DA* ___crossAdaptors_2;
	// System.Collections.Generic.Dictionary`2<System.Type,ILRuntime.Runtime.Enviorment.ValueTypeBinder> ILRuntime.Runtime.Enviorment.AppDomain::valueTypeBinders
	Dictionary_2_t4281FE5840E8891AF449FA27109FA17C66463B8A* ___valueTypeBinders_3;
	// ILRuntime.Other.ThreadSafeDictionary`2<System.String,ILRuntime.CLR.TypeSystem.IType> ILRuntime.Runtime.Enviorment.AppDomain::mapType
	ThreadSafeDictionary_2_tCEAD23CD21892964704E03E6C7BF4A2068083155* ___mapType_4;
	// System.Collections.Generic.Dictionary`2<System.Type,ILRuntime.CLR.TypeSystem.IType> ILRuntime.Runtime.Enviorment.AppDomain::clrTypeMapping
	Dictionary_2_t303380A6A30DFE60E5DC3F6DF3D144E0B43D6026* ___clrTypeMapping_5;
	// System.Collections.Generic.List`1<ILRuntime.CLR.TypeSystem.IType> ILRuntime.Runtime.Enviorment.AppDomain::typesByIndex
	List_1_t136E925D19ADF1AFF60DF33114FEC34DD1EAFD75* ___typesByIndex_6;
	// ILRuntime.Other.ThreadSafeDictionary`2<System.Int32,ILRuntime.CLR.TypeSystem.IType> ILRuntime.Runtime.Enviorment.AppDomain::mapTypeToken
	ThreadSafeDictionary_2_t3FF2382D5F92C782F9B804FBC45158A07F2B4276* ___mapTypeToken_7;
	// ILRuntime.Other.ThreadSafeDictionary`2<System.Int32,ILRuntime.CLR.Method.IMethod> ILRuntime.Runtime.Enviorment.AppDomain::mapMethod
	ThreadSafeDictionary_2_t3FCB5E95C01BB2854CB57DE2B63AA7E7D83AD1A1* ___mapMethod_8;
	// ILRuntime.Other.ThreadSafeDictionary`2<System.Int64,System.String> ILRuntime.Runtime.Enviorment.AppDomain::mapString
	ThreadSafeDictionary_2_tBB9E36280C2B8BB8C60623F6865903808197565B* ___mapString_9;
	// System.Collections.Generic.Dictionary`2<System.Reflection.MethodBase,ILRuntime.Runtime.Enviorment.CLRRedirectionDelegate> ILRuntime.Runtime.Enviorment.AppDomain::redirectMap
	Dictionary_2_tBCF477C8957A7776ED771401B7A91BC5EB9B45E5* ___redirectMap_10;
	// System.Collections.Generic.Dictionary`2<System.Reflection.FieldInfo,ILRuntime.Runtime.Enviorment.CLRFieldGetterDelegate> ILRuntime.Runtime.Enviorment.AppDomain::fieldGetterMap
	Dictionary_2_tA693052798BE59A67A78D0CBACD646C39CA0CC7A* ___fieldGetterMap_11;
	// System.Collections.Generic.Dictionary`2<System.Reflection.FieldInfo,ILRuntime.Runtime.Enviorment.CLRFieldSetterDelegate> ILRuntime.Runtime.Enviorment.AppDomain::fieldSetterMap
	Dictionary_2_t8F163C32461ECD4A027271F42B05C1C325FEA9E4* ___fieldSetterMap_12;
	// System.Collections.Generic.Dictionary`2<System.Reflection.FieldInfo,System.Collections.Generic.KeyValuePair`2<ILRuntime.Runtime.Enviorment.CLRFieldBindingDelegate,ILRuntime.Runtime.Enviorment.CLRFieldBindingDelegate>> ILRuntime.Runtime.Enviorment.AppDomain::fieldBindingMap
	Dictionary_2_t960920132BCFCE4E84B9215BD59E48CFF438CA84* ___fieldBindingMap_13;
	// System.Collections.Generic.Dictionary`2<System.Type,ILRuntime.Runtime.Enviorment.CLRMemberwiseCloneDelegate> ILRuntime.Runtime.Enviorment.AppDomain::memberwiseCloneMap
	Dictionary_2_t0023E72D1AE4C6D255E2789917E09F333AA42A1A* ___memberwiseCloneMap_14;
	// System.Collections.Generic.Dictionary`2<System.Type,ILRuntime.Runtime.Enviorment.CLRCreateDefaultInstanceDelegate> ILRuntime.Runtime.Enviorment.AppDomain::createDefaultInstanceMap
	Dictionary_2_tE41322CA541823ACE793D57DF3946EF076C0D7AC* ___createDefaultInstanceMap_15;
	// System.Collections.Generic.Dictionary`2<System.Type,ILRuntime.Runtime.Enviorment.CLRCreateArrayInstanceDelegate> ILRuntime.Runtime.Enviorment.AppDomain::createArrayInstanceMap
	Dictionary_2_t446AC917A9E96A487A0FBFF32EF04444B9210FA2* ___createArrayInstanceMap_16;
	// ILRuntime.CLR.TypeSystem.IType ILRuntime.Runtime.Enviorment.AppDomain::voidType
	RuntimeObject* ___voidType_17;
	// ILRuntime.CLR.TypeSystem.IType ILRuntime.Runtime.Enviorment.AppDomain::intType
	RuntimeObject* ___intType_18;
	// ILRuntime.CLR.TypeSystem.IType ILRuntime.Runtime.Enviorment.AppDomain::longType
	RuntimeObject* ___longType_19;
	// ILRuntime.CLR.TypeSystem.IType ILRuntime.Runtime.Enviorment.AppDomain::boolType
	RuntimeObject* ___boolType_20;
	// ILRuntime.CLR.TypeSystem.IType ILRuntime.Runtime.Enviorment.AppDomain::floatType
	RuntimeObject* ___floatType_21;
	// ILRuntime.CLR.TypeSystem.IType ILRuntime.Runtime.Enviorment.AppDomain::doubleType
	RuntimeObject* ___doubleType_22;
	// ILRuntime.CLR.TypeSystem.IType ILRuntime.Runtime.Enviorment.AppDomain::objectType
	RuntimeObject* ___objectType_23;
	// ILRuntime.CLR.TypeSystem.IType ILRuntime.Runtime.Enviorment.AppDomain::jitAttributeType
	RuntimeObject* ___jitAttributeType_24;
	// ILRuntime.Runtime.Enviorment.DelegateManager ILRuntime.Runtime.Enviorment.AppDomain::dMgr
	DelegateManager_t8D166F33044B767924C26D1BF3C1620DEF4C4A7A* ___dMgr_25;
	// System.Reflection.Assembly[] ILRuntime.Runtime.Enviorment.AppDomain::loadedAssemblies
	AssemblyU5BU5D_t97B7B4E3FD4DA4944A4BFAA4DC484EA7D990B339* ___loadedAssemblies_26;
	// System.Collections.Generic.Dictionary`2<System.String,System.Byte[]> ILRuntime.Runtime.Enviorment.AppDomain::references
	Dictionary_2_t590895D15CD5AFFCCF8B9AB63749AA60FAC3BE2D* ___references_27;
	// ILRuntime.Runtime.Debugger.DebugService ILRuntime.Runtime.Enviorment.AppDomain::debugService
	DebugService_t09B46E79D818A2FEF8627FFFB4CCD7B03E7A3022* ___debugService_28;
	// ILRuntime.Runtime.Intepreter.RegisterVM.AsyncJITCompileWorker ILRuntime.Runtime.Enviorment.AppDomain::jitWorker
	AsyncJITCompileWorker_t93339DFB530802A17DBC00A0DFB49E7B10FF2A55* ___jitWorker_29;
	// System.Int32 ILRuntime.Runtime.Enviorment.AppDomain::defaultJITFlags
	int32_t ___defaultJITFlags_30;
	// System.Boolean ILRuntime.Runtime.Enviorment.AppDomain::<AllowUnboundCLRMethod>k__BackingField
	bool ___U3CAllowUnboundCLRMethodU3Ek__BackingField_31;
	// System.Boolean ILRuntime.Runtime.Enviorment.AppDomain::<SuppressStaticConstructor>k__BackingField
	bool ___U3CSuppressStaticConstructorU3Ek__BackingField_32;
	// System.Boolean ILRuntime.Runtime.Enviorment.AppDomain::IsThreadBinding
	bool ___IsThreadBinding_33;
	// System.Boolean ILRuntime.Runtime.Enviorment.AppDomain::IsBindingDone
	bool ___IsBindingDone_34;
};

struct AppDomain_tFFEF01BA23D79DA3A22C21195FD262862037E506_StaticFields
{
	// System.Object ILRuntime.Runtime.Enviorment.AppDomain::bindingLockObject
	RuntimeObject* ___bindingLockObject_35;
};
struct Il2CppArrayBounds;

// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
{
};

// ILRuntime.Mono.Cecil.CustomAttribute
struct CustomAttribute_t8966CC52D0DB2846953049A29347308658F9014F  : public RuntimeObject
{
	// ILRuntime.Mono.Cecil.CustomAttributeValueProjection ILRuntime.Mono.Cecil.CustomAttribute::projection
	CustomAttributeValueProjection_t4F759D907E5607C8175ECB4E7E63D14169B2A1FB* ___projection_0;
	// System.UInt32 ILRuntime.Mono.Cecil.CustomAttribute::signature
	uint32_t ___signature_1;
	// System.Boolean ILRuntime.Mono.Cecil.CustomAttribute::resolved
	bool ___resolved_2;
	// ILRuntime.Mono.Cecil.MethodReference ILRuntime.Mono.Cecil.CustomAttribute::constructor
	MethodReference_t622A5B7BD95CF4A7E4210CF3DDBD91A0018D9783* ___constructor_3;
	// System.Byte[] ILRuntime.Mono.Cecil.CustomAttribute::blob
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___blob_4;
	// ILRuntime.Mono.Collections.Generic.Collection`1<ILRuntime.Mono.Cecil.CustomAttributeArgument> ILRuntime.Mono.Cecil.CustomAttribute::arguments
	Collection_1_t94541185B135CB56847AEC0B7649817DE17EDC88* ___arguments_5;
	// ILRuntime.Mono.Collections.Generic.Collection`1<ILRuntime.Mono.Cecil.CustomAttributeNamedArgument> ILRuntime.Mono.Cecil.CustomAttribute::fields
	Collection_1_tC233285387A27A2254DF9C00E5FFBA4E0200559D* ___fields_6;
	// ILRuntime.Mono.Collections.Generic.Collection`1<ILRuntime.Mono.Cecil.CustomAttributeNamedArgument> ILRuntime.Mono.Cecil.CustomAttribute::properties
	Collection_1_tC233285387A27A2254DF9C00E5FFBA4E0200559D* ___properties_7;
};

// ET.ETCancellationToken
struct ETCancellationToken_tACA8F146EDE95371894D92DF0FD89C07C08886E1  : public RuntimeObject
{
	// System.Collections.Generic.HashSet`1<System.Action> ET.ETCancellationToken::actions
	HashSet_1_t095EA6937EBCEA0A5C3225D8D0D5E4CEF32D6828* ___actions_0;
};

// ET.ETTask
struct ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9  : public RuntimeObject
{
	// System.Boolean ET.ETTask::fromPool
	bool ___fromPool_2;
	// ET.AwaiterStatus ET.ETTask::state
	uint8_t ___state_3;
	// System.Object ET.ETTask::callback
	RuntimeObject* ___callback_4;
};

struct ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_StaticFields
{
	// System.Action`1<System.Exception> ET.ETTask::ExceptionHandler
	Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04* ___ExceptionHandler_0;
	// System.Collections.Generic.Queue`1<ET.ETTask> ET.ETTask::queue
	Queue_1_tD81FB1FE4DD008B5193D0BDAA9B48AEDE8DD41A4* ___queue_1;
};

// ET.ETTaskHelper
struct ETTaskHelper_t3B45F2D90A9C2BD9A6EAF512B3EDE3A8D13E2439  : public RuntimeObject
{
};

// System.Runtime.ExceptionServices.ExceptionDispatchInfo
struct ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757  : public RuntimeObject
{
	// System.Exception System.Runtime.ExceptionServices.ExceptionDispatchInfo::m_Exception
	Exception_t* ___m_Exception_0;
	// System.Object System.Runtime.ExceptionServices.ExceptionDispatchInfo::m_stackTrace
	RuntimeObject* ___m_stackTrace_1;
};

// ILRuntime.CLR.Method.ExceptionHandler
struct ExceptionHandler_tB7222B56682A0D18CF20D9FD22EC650A924A5C7D  : public RuntimeObject
{
	// ILRuntime.CLR.Method.ExceptionHandlerType ILRuntime.CLR.Method.ExceptionHandler::<HandlerType>k__BackingField
	int32_t ___U3CHandlerTypeU3Ek__BackingField_0;
	// System.Int32 ILRuntime.CLR.Method.ExceptionHandler::<TryStart>k__BackingField
	int32_t ___U3CTryStartU3Ek__BackingField_1;
	// System.Int32 ILRuntime.CLR.Method.ExceptionHandler::<TryEnd>k__BackingField
	int32_t ___U3CTryEndU3Ek__BackingField_2;
	// System.Int32 ILRuntime.CLR.Method.ExceptionHandler::<HandlerStart>k__BackingField
	int32_t ___U3CHandlerStartU3Ek__BackingField_3;
	// System.Int32 ILRuntime.CLR.Method.ExceptionHandler::<HandlerEnd>k__BackingField
	int32_t ___U3CHandlerEndU3Ek__BackingField_4;
	// ILRuntime.CLR.TypeSystem.IType ILRuntime.CLR.Method.ExceptionHandler::<CatchType>k__BackingField
	RuntimeObject* ___U3CCatchTypeU3Ek__BackingField_5;
};

// ILRuntime.Mono.Cecil.Cil.ExceptionHandler
struct ExceptionHandler_tCC68B4480346581EEA699654AE4E53AE4229E04F  : public RuntimeObject
{
	// ILRuntime.Mono.Cecil.Cil.Instruction ILRuntime.Mono.Cecil.Cil.ExceptionHandler::try_start
	Instruction_tAA84FA05703612EBA9700BB65C31560D5AA0ACC6* ___try_start_0;
	// ILRuntime.Mono.Cecil.Cil.Instruction ILRuntime.Mono.Cecil.Cil.ExceptionHandler::try_end
	Instruction_tAA84FA05703612EBA9700BB65C31560D5AA0ACC6* ___try_end_1;
	// ILRuntime.Mono.Cecil.Cil.Instruction ILRuntime.Mono.Cecil.Cil.ExceptionHandler::filter_start
	Instruction_tAA84FA05703612EBA9700BB65C31560D5AA0ACC6* ___filter_start_2;
	// ILRuntime.Mono.Cecil.Cil.Instruction ILRuntime.Mono.Cecil.Cil.ExceptionHandler::handler_start
	Instruction_tAA84FA05703612EBA9700BB65C31560D5AA0ACC6* ___handler_start_3;
	// ILRuntime.Mono.Cecil.Cil.Instruction ILRuntime.Mono.Cecil.Cil.ExceptionHandler::handler_end
	Instruction_tAA84FA05703612EBA9700BB65C31560D5AA0ACC6* ___handler_end_4;
	// ILRuntime.Mono.Cecil.TypeReference ILRuntime.Mono.Cecil.Cil.ExceptionHandler::catch_type
	TypeReference_tF82E3E035A581A717CE653CEFC3843CE4E460F91* ___catch_type_5;
	// ILRuntime.Mono.Cecil.Cil.ExceptionHandlerType ILRuntime.Mono.Cecil.Cil.ExceptionHandler::handler_type
	int32_t ___handler_type_6;
};

// ILRuntime.CLR.TypeSystem.ILGenericParameterType
struct ILGenericParameterType_tD3907D5D02CED0831ACEC5A4A288F3A6C6E0889B  : public RuntimeObject
{
	// System.String ILRuntime.CLR.TypeSystem.ILGenericParameterType::name
	String_t* ___name_0;
	// System.Boolean ILRuntime.CLR.TypeSystem.ILGenericParameterType::isArray
	bool ___isArray_1;
	// System.Boolean ILRuntime.CLR.TypeSystem.ILGenericParameterType::isByRef
	bool ___isByRef_2;
	// ILRuntime.CLR.TypeSystem.ILGenericParameterType ILRuntime.CLR.TypeSystem.ILGenericParameterType::arrayType
	ILGenericParameterType_tD3907D5D02CED0831ACEC5A4A288F3A6C6E0889B* ___arrayType_3;
	// ILRuntime.CLR.TypeSystem.ILGenericParameterType ILRuntime.CLR.TypeSystem.ILGenericParameterType::byrefType
	ILGenericParameterType_tD3907D5D02CED0831ACEC5A4A288F3A6C6E0889B* ___byrefType_4;
	// ILRuntime.CLR.TypeSystem.ILGenericParameterType ILRuntime.CLR.TypeSystem.ILGenericParameterType::elementType
	ILGenericParameterType_tD3907D5D02CED0831ACEC5A4A288F3A6C6E0889B* ___elementType_5;
};

// ILRuntime.Runtime.Intepreter.ILIntepreter
struct ILIntepreter_t25A08CFC50F0E2B09F59BB25BF049CA40064BCC9  : public RuntimeObject
{
	// ILRuntime.Runtime.Enviorment.AppDomain ILRuntime.Runtime.Intepreter.ILIntepreter::domain
	AppDomain_tFFEF01BA23D79DA3A22C21195FD262862037E506* ___domain_0;
	// ILRuntime.Runtime.Stack.RuntimeStack ILRuntime.Runtime.Intepreter.ILIntepreter::stack
	RuntimeStack_tEFA4672FB9964C37201A1B23C7940695A9D1BF77* ___stack_1;
	// System.Object ILRuntime.Runtime.Intepreter.ILIntepreter::_lockObj
	RuntimeObject* ____lockObj_2;
	// System.Boolean ILRuntime.Runtime.Intepreter.ILIntepreter::allowUnboundCLRMethod
	bool ___allowUnboundCLRMethod_3;
	// System.Boolean ILRuntime.Runtime.Intepreter.ILIntepreter::<ShouldBreak>k__BackingField
	bool ___U3CShouldBreakU3Ek__BackingField_4;
	// ILRuntime.Runtime.Debugger.StepTypes ILRuntime.Runtime.Intepreter.ILIntepreter::<CurrentStepType>k__BackingField
	int32_t ___U3CCurrentStepTypeU3Ek__BackingField_5;
	// ILRuntime.Runtime.Stack.StackObject* ILRuntime.Runtime.Intepreter.ILIntepreter::<LastStepFrameBase>k__BackingField
	StackObject_tE7817703B5F99899973AB6FE8301AF2A37EECEED* ___U3CLastStepFrameBaseU3Ek__BackingField_6;
	// System.Int32 ILRuntime.Runtime.Intepreter.ILIntepreter::<LastStepInstructionIndex>k__BackingField
	int32_t ___U3CLastStepInstructionIndexU3Ek__BackingField_7;
	// ILRuntime.Runtime.Stack.StackObject* ILRuntime.Runtime.Intepreter.ILIntepreter::ValueTypeBasePointer
	StackObject_tE7817703B5F99899973AB6FE8301AF2A37EECEED* ___ValueTypeBasePointer_8;
	// System.Boolean ILRuntime.Runtime.Intepreter.ILIntepreter::mainthreadLock
	bool ___mainthreadLock_9;
};

// ILRuntime.Runtime.Intepreter.ILTypeInstance
struct ILTypeInstance_t4661F334AB7A19092229919A81C8444982969A15  : public RuntimeObject
{
	// ILRuntime.CLR.TypeSystem.ILType ILRuntime.Runtime.Intepreter.ILTypeInstance::type
	ILType_tD812655AF7716306B8168AD6F08152435B77708C* ___type_0;
	// ILRuntime.Runtime.Stack.StackObject[] ILRuntime.Runtime.Intepreter.ILTypeInstance::fields
	StackObjectU5BU5D_tF9528074802464C4EB5E10C4B2CD2AA608BD3FB7* ___fields_1;
	// System.Collections.Generic.IList`1<System.Object> ILRuntime.Runtime.Intepreter.ILTypeInstance::managedObjs
	RuntimeObject* ___managedObjs_2;
	// System.Object ILRuntime.Runtime.Intepreter.ILTypeInstance::clrInstance
	RuntimeObject* ___clrInstance_3;
	// System.UInt64 ILRuntime.Runtime.Intepreter.ILTypeInstance::valueTypeMask
	uint64_t ___valueTypeMask_4;
	// System.Collections.Generic.Dictionary`2<ILRuntime.CLR.Method.ILMethod,ILRuntime.Runtime.Intepreter.IDelegateAdapter> ILRuntime.Runtime.Intepreter.ILTypeInstance::delegates
	Dictionary_2_tB949D9F13E9DFE10658A01F5DFEB4EE439CA4BC6* ___delegates_5;
	// System.Boolean ILRuntime.Runtime.Intepreter.ILTypeInstance::<Boxed>k__BackingField
	bool ___U3CBoxedU3Ek__BackingField_6;
};

// ILRuntime.CLR.Method.IMethodExtensions
struct IMethodExtensions_t2ED8FEEF30AA0BF6A988609E9ACCC7195C32215B  : public RuntimeObject
{
};

// ET.Kcp
struct Kcp_t429AB84FF46AA83D15D3DA2EF4C9CE96BF648B30  : public RuntimeObject
{
};

struct Kcp_t429AB84FF46AA83D15D3DA2EF4C9CE96BF648B30_StaticFields
{
	// ET.KcpOutput ET.Kcp::KcpOutput
	KcpOutput_t70A2E75BF30C9F6BBFA7EDCCF748E5F9C25F6732* ___KcpOutput_3;
	// ET.KcpLog ET.Kcp::KcpLog
	KcpLog_t166A3A6F579F69B0AA700460B0BF73A4B8C07C5F* ___KcpLog_4;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// System.Reflection.ParameterInfo
struct ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F  : public RuntimeObject
{
	// System.Reflection.ParameterAttributes System.Reflection.ParameterInfo::AttrsImpl
	int32_t ___AttrsImpl_0;
	// System.Type System.Reflection.ParameterInfo::ClassImpl
	Type_t* ___ClassImpl_1;
	// System.Object System.Reflection.ParameterInfo::DefaultValueImpl
	RuntimeObject* ___DefaultValueImpl_2;
	// System.Reflection.MemberInfo System.Reflection.ParameterInfo::MemberImpl
	MemberInfo_t* ___MemberImpl_3;
	// System.String System.Reflection.ParameterInfo::NameImpl
	String_t* ___NameImpl_4;
	// System.Int32 System.Reflection.ParameterInfo::PositionImpl
	int32_t ___PositionImpl_5;
};
// Native definition for P/Invoke marshalling of System.Reflection.ParameterInfo
struct ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F_marshaled_pinvoke
{
	int32_t ___AttrsImpl_0;
	Type_t* ___ClassImpl_1;
	Il2CppIUnknown* ___DefaultValueImpl_2;
	MemberInfo_t* ___MemberImpl_3;
	char* ___NameImpl_4;
	int32_t ___PositionImpl_5;
};
// Native definition for COM marshalling of System.Reflection.ParameterInfo
struct ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F_marshaled_com
{
	int32_t ___AttrsImpl_0;
	Type_t* ___ClassImpl_1;
	Il2CppIUnknown* ___DefaultValueImpl_2;
	MemberInfo_t* ___MemberImpl_3;
	Il2CppChar* ___NameImpl_4;
	int32_t ___PositionImpl_5;
};

// ET.Recast
struct Recast_tD185A230EB6DC6FEE5B363E529CC435229499B01  : public RuntimeObject
{
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

// ILRuntime.Mono.Cecil.Cil.VariableReference
struct VariableReference_t435D3702B5E65CC6255D3B92104FB4A97B7CEAFC  : public RuntimeObject
{
	// System.Int32 ILRuntime.Mono.Cecil.Cil.VariableReference::index
	int32_t ___index_0;
	// ILRuntime.Mono.Cecil.TypeReference ILRuntime.Mono.Cecil.Cil.VariableReference::variable_type
	TypeReference_tF82E3E035A581A717CE653CEFC3843CE4E460F91* ___variable_type_1;
};

// ET.ETTaskHelper/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_t386188471D23E1BA38A602299DF18C0DE2A95748  : public RuntimeObject
{
	// ET.ETTaskHelper/CoroutineBlocker ET.ETTaskHelper/<>c__DisplayClass2_0::coroutineBlocker
	CoroutineBlocker_tB36E126059540FB732976F4A8DEC06EF8A96634A* ___coroutineBlocker_0;
};

// ET.ETTaskHelper/<>c__DisplayClass5_0
struct U3CU3Ec__DisplayClass5_0_t58DC10C24DA5311C6195ED1199782F0126118891  : public RuntimeObject
{
	// ET.ETTaskHelper/CoroutineBlocker ET.ETTaskHelper/<>c__DisplayClass5_0::coroutineBlocker
	CoroutineBlocker_tB36E126059540FB732976F4A8DEC06EF8A96634A* ___coroutineBlocker_0;
};

// ET.ETTaskHelper/<>c__DisplayClass6_0
struct U3CU3Ec__DisplayClass6_0_t683F5DF1ABBC6076EC981A7D758038E5F5001048  : public RuntimeObject
{
	// ET.ETTaskHelper/CoroutineBlocker ET.ETTaskHelper/<>c__DisplayClass6_0::coroutineBlocker
	CoroutineBlocker_tB36E126059540FB732976F4A8DEC06EF8A96634A* ___coroutineBlocker_0;
};

// ET.ETTaskHelper/CoroutineBlocker
struct CoroutineBlocker_tB36E126059540FB732976F4A8DEC06EF8A96634A  : public RuntimeObject
{
	// System.Int32 ET.ETTaskHelper/CoroutineBlocker::count
	int32_t ___count_0;
	// System.Collections.Generic.List`1<ET.ETTask> ET.ETTaskHelper/CoroutineBlocker::tcss
	List_1_tA4F47AA2446E3F808EABA13A13F5A8A05B4A5101* ___tcss_1;
};

// ET.ETAsyncTaskMethodBuilder`1<System.Boolean>
struct ETAsyncTaskMethodBuilder_1_t769C7EF52D8DA1B6EBB8B7AEC7B2D7C854730D31 
{
	// ET.ETTask`1<T> ET.ETAsyncTaskMethodBuilder`1::tcs
	ETTask_1_tC3B29B37E823D9C66439D79CE23D65BBFE61686F* ___tcs_0;
};

// System.Collections.Generic.HashSet`1/Enumerator<System.Action>
struct Enumerator_t6C5AF6111106FABDB3A75090A81060D2FDA7270D 
{
	// System.Collections.Generic.HashSet`1<T> System.Collections.Generic.HashSet`1/Enumerator::_set
	HashSet_1_t095EA6937EBCEA0A5C3225D8D0D5E4CEF32D6828* ____set_0;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.HashSet`1/Enumerator::_current
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<ET.ETTask>
struct Enumerator_t05F9D6B822BE78199481DA0AA4B6B04FCC4968E9 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA4F47AA2446E3F808EABA13A13F5A8A05B4A5101* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* ____current_3;
};

// ILRuntime.Mono.Collections.Generic.Collection`1/Enumerator<ILRuntime.Mono.Cecil.GenericParameter>
struct Enumerator_tA0970D8A9568C2F7B9F4CD8871395601EDC137C2 
{
	// ILRuntime.Mono.Collections.Generic.Collection`1<T> ILRuntime.Mono.Collections.Generic.Collection`1/Enumerator::collection
	Collection_1_tAF0023B9443046D2A5BC6C79ADE1460DA3165828* ___collection_0;
	// T ILRuntime.Mono.Collections.Generic.Collection`1/Enumerator::current
	GenericParameter_t8414103B394479F255809FF8AFF131596ED43EEA* ___current_1;
	// System.Int32 ILRuntime.Mono.Collections.Generic.Collection`1/Enumerator::next
	int32_t ___next_2;
	// System.Int32 ILRuntime.Mono.Collections.Generic.Collection`1/Enumerator::version
	int32_t ___version_3;
};

// ILRuntime.Mono.Collections.Generic.Collection`1/Enumerator<System.Object>
struct Enumerator_tF46B85C70F153D6E4DA6BCF8809C23A525A3F94A 
{
	// ILRuntime.Mono.Collections.Generic.Collection`1<T> ILRuntime.Mono.Collections.Generic.Collection`1/Enumerator::collection
	Collection_1_tE08A2FA07693E8363A425AFCC772CBB1404392E0* ___collection_0;
	// T ILRuntime.Mono.Collections.Generic.Collection`1/Enumerator::current
	RuntimeObject* ___current_1;
	// System.Int32 ILRuntime.Mono.Collections.Generic.Collection`1/Enumerator::next
	int32_t ___next_2;
	// System.Int32 ILRuntime.Mono.Collections.Generic.Collection`1/Enumerator::version
	int32_t ___version_3;
};

// System.Collections.Generic.HashSet`1/Enumerator<System.Object>
struct Enumerator_t72556E98D7DDBE118A973D782D523D15A96461C8 
{
	// System.Collections.Generic.HashSet`1<T> System.Collections.Generic.HashSet`1/Enumerator::_set
	HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* ____set_0;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.HashSet`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// ILRuntime.Mono.Collections.Generic.Collection`1/Enumerator<ILRuntime.Mono.Cecil.ParameterDefinition>
struct Enumerator_t53891B8BDE2BAF0158F2F4F5670307C5EE5420C3 
{
	// ILRuntime.Mono.Collections.Generic.Collection`1<T> ILRuntime.Mono.Collections.Generic.Collection`1/Enumerator::collection
	Collection_1_t07922683F6D8F9416D093E2327FCBCCAC03146F1* ___collection_0;
	// T ILRuntime.Mono.Collections.Generic.Collection`1/Enumerator::current
	ParameterDefinition_tF36CEEB8641D1EEA2D1D205360F1A7F37E63A6BA* ___current_1;
	// System.Int32 ILRuntime.Mono.Collections.Generic.Collection`1/Enumerator::next
	int32_t ___next_2;
	// System.Int32 ILRuntime.Mono.Collections.Generic.Collection`1/Enumerator::version
	int32_t ___version_3;
};

// ILRuntime.Mono.Collections.Generic.Collection`1/Enumerator<ILRuntime.Mono.Cecil.TypeReference>
struct Enumerator_t7DD1A0B4DF4F70D54047832E79CB1D0E502D500F 
{
	// ILRuntime.Mono.Collections.Generic.Collection`1<T> ILRuntime.Mono.Collections.Generic.Collection`1/Enumerator::collection
	Collection_1_t4D9D6514FFD29B0141FB7020EC67BC6340193EA5* ___collection_0;
	// T ILRuntime.Mono.Collections.Generic.Collection`1/Enumerator::current
	TypeReference_tF82E3E035A581A717CE653CEFC3843CE4E460F91* ___current_1;
	// System.Int32 ILRuntime.Mono.Collections.Generic.Collection`1/Enumerator::next
	int32_t ___next_2;
	// System.Int32 ILRuntime.Mono.Collections.Generic.Collection`1/Enumerator::version
	int32_t ___version_3;
};

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject* ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.String,ILRuntime.CLR.TypeSystem.IType>
struct KeyValuePair_2_tE28C7DA12E13817FD3C7A77CBB509ED7784C2AB5 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject* ___value_1;
};

// System.Nullable`1<System.Boolean>
struct Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	bool ___value_1;
};

// System.Nullable`1<System.Int32>
struct Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// ET.AsyncETTaskCompletedMethodBuilder
struct AsyncETTaskCompletedMethodBuilder_t53ABA0333D7CD0BCD066353A41DFB67445B8E031 
{
	union
	{
		struct
		{
		};
		uint8_t AsyncETTaskCompletedMethodBuilder_t53ABA0333D7CD0BCD066353A41DFB67445B8E031__padding[1];
	};
};

// ET.AsyncETVoidMethodBuilder
struct AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203 
{
	union
	{
		struct
		{
		};
		uint8_t AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203__padding[1];
	};
};

// System.Runtime.CompilerServices.AsyncMethodBuilderAttribute
struct AsyncMethodBuilderAttribute_t3C650C098D60F31A41B7DE2A7E241085AC125960  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.Type System.Runtime.CompilerServices.AsyncMethodBuilderAttribute::<BuilderType>k__BackingField
	Type_t* ___U3CBuilderTypeU3Ek__BackingField_0;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// ET.ETAsyncTaskMethodBuilder
struct ETAsyncTaskMethodBuilder_t6539D4B6A1CB6F6388453211D928A26188B68B0C 
{
	// ET.ETTask ET.ETAsyncTaskMethodBuilder::tcs
	ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* ___tcs_0;
};
// Native definition for P/Invoke marshalling of ET.ETAsyncTaskMethodBuilder
struct ETAsyncTaskMethodBuilder_t6539D4B6A1CB6F6388453211D928A26188B68B0C_marshaled_pinvoke
{
	ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* ___tcs_0;
};
// Native definition for COM marshalling of ET.ETAsyncTaskMethodBuilder
struct ETAsyncTaskMethodBuilder_t6539D4B6A1CB6F6388453211D928A26188B68B0C_marshaled_com
{
	ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* ___tcs_0;
};

// ET.ETTaskCompleted
struct ETTaskCompleted_tC7E784791E37157A69DC06ADE2C07D5F0BD577A1 
{
	union
	{
		struct
		{
		};
		uint8_t ETTaskCompleted_tC7E784791E37157A69DC06ADE2C07D5F0BD577A1__padding[1];
	};
};

// ET.ETVoid
struct ETVoid_tFB79A53EB5B1FFC7F4A2428E68797AD75B74DC38 
{
	union
	{
		struct
		{
		};
		uint8_t ETVoid_tFB79A53EB5B1FFC7F4A2428E68797AD75B74DC38__padding[1];
	};
};

// System.Reflection.FieldInfo
struct FieldInfo_t  : public MemberInfo_t
{
};

// ILRuntime.Runtime.Intepreter.ILTypeStaticInstance
struct ILTypeStaticInstance_t4D73184CEB0D3868A493ADC3A45AC3C3D1979741  : public ILTypeInstance_t4661F334AB7A19092229919A81C8444982969A15
{
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
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

// ILRuntime.Runtime.Intepreter.RegisterVM.JITCompiler
struct JITCompiler_tC86D7253C6877F1CFF8CA4617CD766CC7460B965 
{
	// ILRuntime.Runtime.Enviorment.AppDomain ILRuntime.Runtime.Intepreter.RegisterVM.JITCompiler::appdomain
	AppDomain_tFFEF01BA23D79DA3A22C21195FD262862037E506* ___appdomain_1;
	// ILRuntime.CLR.TypeSystem.ILType ILRuntime.Runtime.Intepreter.RegisterVM.JITCompiler::declaringType
	ILType_tD812655AF7716306B8168AD6F08152435B77708C* ___declaringType_2;
	// ILRuntime.CLR.Method.ILMethod ILRuntime.Runtime.Intepreter.RegisterVM.JITCompiler::method
	ILMethod_tA56B8FD062B67B88B2396AC1AFFCED9E4FE92AD7* ___method_3;
	// ILRuntime.Mono.Cecil.MethodDefinition ILRuntime.Runtime.Intepreter.RegisterVM.JITCompiler::def
	MethodDefinition_t20ECAB62A2A1BBEB383A1A979167D658ACCF3244* ___def_4;
	// System.Boolean ILRuntime.Runtime.Intepreter.RegisterVM.JITCompiler::hasReturn
	bool ___hasReturn_5;
	// System.Collections.Generic.Dictionary`2<ILRuntime.Mono.Cecil.Cil.Instruction,System.Int32> ILRuntime.Runtime.Intepreter.RegisterVM.JITCompiler::entryMapping
	Dictionary_2_t5B089D76260FC645B19FAE71638DFBBFEA74D852* ___entryMapping_6;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32[]> ILRuntime.Runtime.Intepreter.RegisterVM.JITCompiler::jumptables
	Dictionary_2_t029F6A37F043A1B571A7DB746955ECB8DC548AD9* ___jumptables_7;
};
// Native definition for P/Invoke marshalling of ILRuntime.Runtime.Intepreter.RegisterVM.JITCompiler
struct JITCompiler_tC86D7253C6877F1CFF8CA4617CD766CC7460B965_marshaled_pinvoke
{
	AppDomain_tFFEF01BA23D79DA3A22C21195FD262862037E506* ___appdomain_1;
	ILType_tD812655AF7716306B8168AD6F08152435B77708C* ___declaringType_2;
	ILMethod_tA56B8FD062B67B88B2396AC1AFFCED9E4FE92AD7* ___method_3;
	MethodDefinition_t20ECAB62A2A1BBEB383A1A979167D658ACCF3244* ___def_4;
	int32_t ___hasReturn_5;
	Dictionary_2_t5B089D76260FC645B19FAE71638DFBBFEA74D852* ___entryMapping_6;
	Dictionary_2_t029F6A37F043A1B571A7DB746955ECB8DC548AD9* ___jumptables_7;
};
// Native definition for COM marshalling of ILRuntime.Runtime.Intepreter.RegisterVM.JITCompiler
struct JITCompiler_tC86D7253C6877F1CFF8CA4617CD766CC7460B965_marshaled_com
{
	AppDomain_tFFEF01BA23D79DA3A22C21195FD262862037E506* ___appdomain_1;
	ILType_tD812655AF7716306B8168AD6F08152435B77708C* ___declaringType_2;
	ILMethod_tA56B8FD062B67B88B2396AC1AFFCED9E4FE92AD7* ___method_3;
	MethodDefinition_t20ECAB62A2A1BBEB383A1A979167D658ACCF3244* ___def_4;
	int32_t ___hasReturn_5;
	Dictionary_2_t5B089D76260FC645B19FAE71638DFBBFEA74D852* ___entryMapping_6;
	Dictionary_2_t029F6A37F043A1B571A7DB746955ECB8DC548AD9* ___jumptables_7;
};

// ILRuntime.Mono.Cecil.MetadataToken
struct MetadataToken_tD051B0D2FD4077E4F77F42068CBE36B71B004B90 
{
	// System.UInt32 ILRuntime.Mono.Cecil.MetadataToken::token
	uint32_t ___token_0;
};

struct MetadataToken_tD051B0D2FD4077E4F77F42068CBE36B71B004B90_StaticFields
{
	// ILRuntime.Mono.Cecil.MetadataToken ILRuntime.Mono.Cecil.MetadataToken::Zero
	MetadataToken_tD051B0D2FD4077E4F77F42068CBE36B71B004B90 ___Zero_1;
};

// System.Reflection.MethodBase
struct MethodBase_t  : public MemberInfo_t
{
};

// ILRuntime.Mono.Cecil.Cil.OpCode
struct OpCode_t9B1522253DF23368D786BB5D1DF051781F1D3EA9 
{
	// System.Byte ILRuntime.Mono.Cecil.Cil.OpCode::op1
	uint8_t ___op1_0;
	// System.Byte ILRuntime.Mono.Cecil.Cil.OpCode::op2
	uint8_t ___op2_1;
	// System.Byte ILRuntime.Mono.Cecil.Cil.OpCode::code
	uint8_t ___code_2;
	// System.Byte ILRuntime.Mono.Cecil.Cil.OpCode::flow_control
	uint8_t ___flow_control_3;
	// System.Byte ILRuntime.Mono.Cecil.Cil.OpCode::opcode_type
	uint8_t ___opcode_type_4;
	// System.Byte ILRuntime.Mono.Cecil.Cil.OpCode::operand_type
	uint8_t ___operand_type_5;
	// System.Byte ILRuntime.Mono.Cecil.Cil.OpCode::stack_behavior_pop
	uint8_t ___stack_behavior_pop_6;
	// System.Byte ILRuntime.Mono.Cecil.Cil.OpCode::stack_behavior_push
	uint8_t ___stack_behavior_push_7;
};

// ILRuntime.Runtime.Intepreter.OpCodes.OpCode
struct OpCode_t34FC4B6966640D468676BA39661AF3946A3943A7 
{
	// ILRuntime.Runtime.Intepreter.OpCodes.OpCodeEnum ILRuntime.Runtime.Intepreter.OpCodes.OpCode::Code
	int32_t ___Code_0;
	// System.Int32 ILRuntime.Runtime.Intepreter.OpCodes.OpCode::TokenInteger
	int32_t ___TokenInteger_1;
	// System.Int64 ILRuntime.Runtime.Intepreter.OpCodes.OpCode::TokenLong
	int64_t ___TokenLong_2;
};

// ILRuntime.Runtime.Intepreter.OpCodes.OpCodeR
struct OpCodeR_t5309D85805CCD36C3D3DB728886F81579C6F9E65 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// ILRuntime.Runtime.Intepreter.OpCodes.OpCodeREnum ILRuntime.Runtime.Intepreter.OpCodes.OpCodeR::Code
			int32_t ___Code_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___Code_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Register1_1_OffsetPadding[4];
			// System.Int16 ILRuntime.Runtime.Intepreter.OpCodes.OpCodeR::Register1
			int16_t ___Register1_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Register1_1_OffsetPadding_forAlignmentOnly[4];
			int16_t ___Register1_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Register2_2_OffsetPadding[6];
			// System.Int16 ILRuntime.Runtime.Intepreter.OpCodes.OpCodeR::Register2
			int16_t ___Register2_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Register2_2_OffsetPadding_forAlignmentOnly[6];
			int16_t ___Register2_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Register3_3_OffsetPadding[8];
			// System.Int16 ILRuntime.Runtime.Intepreter.OpCodes.OpCodeR::Register3
			int16_t ___Register3_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Register3_3_OffsetPadding_forAlignmentOnly[8];
			int16_t ___Register3_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Register4_4_OffsetPadding[10];
			// System.Int16 ILRuntime.Runtime.Intepreter.OpCodes.OpCodeR::Register4
			int16_t ___Register4_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Register4_4_OffsetPadding_forAlignmentOnly[10];
			int16_t ___Register4_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Operand_5_OffsetPadding[8];
			// System.Int32 ILRuntime.Runtime.Intepreter.OpCodes.OpCodeR::Operand
			int32_t ___Operand_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Operand_5_OffsetPadding_forAlignmentOnly[8];
			int32_t ___Operand_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___OperandFloat_6_OffsetPadding[8];
			// System.Single ILRuntime.Runtime.Intepreter.OpCodes.OpCodeR::OperandFloat
			float ___OperandFloat_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___OperandFloat_6_OffsetPadding_forAlignmentOnly[8];
			float ___OperandFloat_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Operand2_7_OffsetPadding[12];
			// System.Int32 ILRuntime.Runtime.Intepreter.OpCodes.OpCodeR::Operand2
			int32_t ___Operand2_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Operand2_7_OffsetPadding_forAlignmentOnly[12];
			int32_t ___Operand2_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Operand3_8_OffsetPadding[16];
			// System.Int32 ILRuntime.Runtime.Intepreter.OpCodes.OpCodeR::Operand3
			int32_t ___Operand3_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Operand3_8_OffsetPadding_forAlignmentOnly[16];
			int32_t ___Operand3_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___OperandLong_9_OffsetPadding[12];
			// System.Int64 ILRuntime.Runtime.Intepreter.OpCodes.OpCodeR::OperandLong
			int64_t ___OperandLong_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___OperandLong_9_OffsetPadding_forAlignmentOnly[12];
			int64_t ___OperandLong_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___OperandDouble_10_OffsetPadding[12];
			// System.Double ILRuntime.Runtime.Intepreter.OpCodes.OpCodeR::OperandDouble
			double ___OperandDouble_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___OperandDouble_10_OffsetPadding_forAlignmentOnly[12];
			double ___OperandDouble_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Operand4_11_OffsetPadding[20];
			// System.Int32 ILRuntime.Runtime.Intepreter.OpCodes.OpCodeR::Operand4
			int32_t ___Operand4_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Operand4_11_OffsetPadding_forAlignmentOnly[20];
			int32_t ___Operand4_11_forAlignmentOnly;
		};
	};
};

// System.SByte
struct SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5 
{
	// System.SByte System.SByte::m_value
	int8_t ___m_value_0;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// ILRuntime.Runtime.Stack.StackObject
struct StackObject_tE7817703B5F99899973AB6FE8301AF2A37EECEED 
{
	// ILRuntime.Runtime.Stack.ObjectTypes ILRuntime.Runtime.Stack.StackObject::ObjectType
	int32_t ___ObjectType_1;
	// System.Int32 ILRuntime.Runtime.Stack.StackObject::Value
	int32_t ___Value_2;
	// System.Int32 ILRuntime.Runtime.Stack.StackObject::ValueLow
	int32_t ___ValueLow_3;
};

struct StackObject_tE7817703B5F99899973AB6FE8301AF2A37EECEED_StaticFields
{
	// ILRuntime.Runtime.Stack.StackObject ILRuntime.Runtime.Stack.StackObject::Null
	StackObject_tE7817703B5F99899973AB6FE8301AF2A37EECEED ___Null_0;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// ILRuntime.Mono.Cecil.Cil.VariableDefinition
struct VariableDefinition_tAF3B7BC011FA749BB788E1845596F48A86BA0A58  : public VariableReference_t435D3702B5E65CC6255D3B92104FB4A97B7CEAFC
{
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=112
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D112_tDDD35F21B154FD734DAEDC7EB9590218829A2803 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D112_tDDD35F21B154FD734DAEDC7EB9590218829A2803__padding[112];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D12_t5350B8DB70A0194741098178FD0C827A680701DA 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D12_t5350B8DB70A0194741098178FD0C827A680701DA__padding[12];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=128
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D128_t409360C9CD01BA65204DA283E875EA9C0461A5CA 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D128_t409360C9CD01BA65204DA283E875EA9C0461A5CA__padding[128];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=160
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D160_t3B5C711DA8074509B7D048F3A4907F270480FAFD 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D160_t3B5C711DA8074509B7D048F3A4907F270480FAFD__padding[160];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1790
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D1790_t9716915A0E868099ABC7CE27B8B36F13C1B477BD 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D1790_t9716915A0E868099ABC7CE27B8B36F13C1B477BD__padding[1790];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=22
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D22_t2232EFFB440507ACD734E4888BFA6E22C98D8455 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D22_t2232EFFB440507ACD734E4888BFA6E22C98D8455__padding[22];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=27
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D27_t0BCA966246C396262B28D181C7CF2B31CA97F777 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D27_t0BCA966246C396262B28D181C7CF2B31CA97F777__padding[27];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=288
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D288_t9E50215D8EE830C874DDD1E5AC6FEF5A5E273F29 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D288_t9E50215D8EE830C874DDD1E5AC6FEF5A5E273F29__padding[288];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D3_tC010332190C21B02BF93BF4E7FD3F2C73FDD1CCC 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D3_tC010332190C21B02BF93BF4E7FD3F2C73FDD1CCC__padding[3];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D32_t85002B5FCD5FF39BE9C5B6CE3C3F3EC6C62F3087 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D32_t85002B5FCD5FF39BE9C5B6CE3C3F3EC6C62F3087__padding[32];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=5
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D5_t052F9D346A875F13DB23CE6883D58A2457B73F77 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D5_t052F9D346A875F13DB23CE6883D58A2457B73F77__padding[5];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t1B87C548AA18EE17AEBFB26A31BD1C9DF5B46B32  : public RuntimeObject
{
};

struct U3CPrivateImplementationDetailsU3E_t1B87C548AA18EE17AEBFB26A31BD1C9DF5B46B32_StaticFields
{
	// System.Int64 <PrivateImplementationDetails>::1B960802B155541DF3837ADE50790DA7E91762D14B8E011FA8223424FF75ACDB
	int64_t ___1B960802B155541DF3837ADE50790DA7E91762D14B8E011FA8223424FF75ACDB_0;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3 <PrivateImplementationDetails>::22E28E709DF793CE9C08BD5FD04302DD85EBBE5181309792D059E080BF5A2992
	__StaticArrayInitTypeSizeU3D3_tC010332190C21B02BF93BF4E7FD3F2C73FDD1CCC ___22E28E709DF793CE9C08BD5FD04302DD85EBBE5181309792D059E080BF5A2992_1;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1790 <PrivateImplementationDetails>::2EF0065A03764C27AE8D5DC3002E10F0426E43BDFA7D8ECFFF633E45DD32376B
	__StaticArrayInitTypeSizeU3D1790_t9716915A0E868099ABC7CE27B8B36F13C1B477BD ___2EF0065A03764C27AE8D5DC3002E10F0426E43BDFA7D8ECFFF633E45DD32376B_2;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=5 <PrivateImplementationDetails>::3D9B507B4E8B3D8B2C853E5AFBEC4F9E74A112EFFE222CFB04B34326619DCBBA
	__StaticArrayInitTypeSizeU3D5_t052F9D346A875F13DB23CE6883D58A2457B73F77 ___3D9B507B4E8B3D8B2C853E5AFBEC4F9E74A112EFFE222CFB04B34326619DCBBA_3;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::59B7E757844D3BF9299877BD1C17451611BFBAB493374D6B18D973FDE534151A
	__StaticArrayInitTypeSizeU3D12_t5350B8DB70A0194741098178FD0C827A680701DA ___59B7E757844D3BF9299877BD1C17451611BFBAB493374D6B18D973FDE534151A_4;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::5AED05C00AFE7BD291FD4D73F5200B7919E0D05C0D63DBCB4A210F74133093BD
	__StaticArrayInitTypeSizeU3D32_t85002B5FCD5FF39BE9C5B6CE3C3F3EC6C62F3087 ___5AED05C00AFE7BD291FD4D73F5200B7919E0D05C0D63DBCB4A210F74133093BD_5;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::5B979F69B96A61586A09DD4ED26F20534C629B08732AE32FA34B6F8A0049ACDD
	__StaticArrayInitTypeSizeU3D12_t5350B8DB70A0194741098178FD0C827A680701DA ___5B979F69B96A61586A09DD4ED26F20534C629B08732AE32FA34B6F8A0049ACDD_6;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3 <PrivateImplementationDetails>::6ED62981FEAD210B9EBF6F5DC0A47E64D4EFEFD609061AB6ED3492F71112F661
	__StaticArrayInitTypeSizeU3D3_tC010332190C21B02BF93BF4E7FD3F2C73FDD1CCC ___6ED62981FEAD210B9EBF6F5DC0A47E64D4EFEFD609061AB6ED3492F71112F661_7;
	// System.Int32 <PrivateImplementationDetails>::738D99562EED8E3D24E03E90ABD33E44800967F797D4CD30D712664EA5AB6B9E
	int32_t ___738D99562EED8E3D24E03E90ABD33E44800967F797D4CD30D712664EA5AB6B9E_8;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=288 <PrivateImplementationDetails>::74BCD6ED20AF2231F2BB1CDE814C5F4FF48E54BAC46029EEF90DDF4A208E2B20
	__StaticArrayInitTypeSizeU3D288_t9E50215D8EE830C874DDD1E5AC6FEF5A5E273F29 ___74BCD6ED20AF2231F2BB1CDE814C5F4FF48E54BAC46029EEF90DDF4A208E2B20_9;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3 <PrivateImplementationDetails>::768E33C10368B83610534F464992D4C8A6A6B812EFA31CB4E9C6368E4E30D1FC
	__StaticArrayInitTypeSizeU3D3_tC010332190C21B02BF93BF4E7FD3F2C73FDD1CCC ___768E33C10368B83610534F464992D4C8A6A6B812EFA31CB4E9C6368E4E30D1FC_10;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::7FCA397EF25DB53B2C58A05F9BBFA4E8E0685FDBC8AAF39536123447056895C0
	__StaticArrayInitTypeSizeU3D12_t5350B8DB70A0194741098178FD0C827A680701DA ___7FCA397EF25DB53B2C58A05F9BBFA4E8E0685FDBC8AAF39536123447056895C0_11;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=160 <PrivateImplementationDetails>::933598639CBAA1DE502F80D2FD1DB78F13C8D7BB64A5FDC1BC73AC0B5CE4F5CA
	__StaticArrayInitTypeSizeU3D160_t3B5C711DA8074509B7D048F3A4907F270480FAFD ___933598639CBAA1DE502F80D2FD1DB78F13C8D7BB64A5FDC1BC73AC0B5CE4F5CA_12;
	// System.Int64 <PrivateImplementationDetails>::971150DD73DC318E68A98CCE9B91AC7DEA2D43C562B4F5A9A2F4272C7E29477E
	int64_t ___971150DD73DC318E68A98CCE9B91AC7DEA2D43C562B4F5A9A2F4272C7E29477E_13;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3 <PrivateImplementationDetails>::A77401FC0BF7BF3DAC6B205E004909E685D45C43A903D9EB3C79BD8B1265D258
	__StaticArrayInitTypeSizeU3D3_tC010332190C21B02BF93BF4E7FD3F2C73FDD1CCC ___A77401FC0BF7BF3DAC6B205E004909E685D45C43A903D9EB3C79BD8B1265D258_14;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::B257E85A5D3CAB5E738D5A0FD1A7AE96624BFE92CB7915726CBBE1518C3225CF
	__StaticArrayInitTypeSizeU3D12_t5350B8DB70A0194741098178FD0C827A680701DA ___B257E85A5D3CAB5E738D5A0FD1A7AE96624BFE92CB7915726CBBE1518C3225CF_15;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::B7A918F6F138CA8137025633559198B529D28CCEC5A51B005376CC69A5B83D85
	__StaticArrayInitTypeSizeU3D12_t5350B8DB70A0194741098178FD0C827A680701DA ___B7A918F6F138CA8137025633559198B529D28CCEC5A51B005376CC69A5B83D85_16;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=128 <PrivateImplementationDetails>::BFDF5E72651B4EC588BD5FC6A9F17E9E0972248146BBACC10478F48D72F29B81
	__StaticArrayInitTypeSizeU3D128_t409360C9CD01BA65204DA283E875EA9C0461A5CA ___BFDF5E72651B4EC588BD5FC6A9F17E9E0972248146BBACC10478F48D72F29B81_17;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=22 <PrivateImplementationDetails>::C4FE8FBE6726012F9932E780243283A23290E8177CBBEE08F4264182A4F06398
	__StaticArrayInitTypeSizeU3D22_t2232EFFB440507ACD734E4888BFA6E22C98D8455 ___C4FE8FBE6726012F9932E780243283A23290E8177CBBEE08F4264182A4F06398_18;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=112 <PrivateImplementationDetails>::C84227140A8A7787B30DFF8BD5693C19AA5A430C4E89FFD0256D7F77B3FEAD82
	__StaticArrayInitTypeSizeU3D112_tDDD35F21B154FD734DAEDC7EB9590218829A2803 ___C84227140A8A7787B30DFF8BD5693C19AA5A430C4E89FFD0256D7F77B3FEAD82_19;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=27 <PrivateImplementationDetails>::FBED83E5688F001B49A3A132C6FE1BD098783C0D48577E9E168EA25043357625
	__StaticArrayInitTypeSizeU3D27_t0BCA966246C396262B28D181C7CF2B31CA97F777 ___FBED83E5688F001B49A3A132C6FE1BD098783C0D48577E9E168EA25043357625_20;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::FC03ECB1D62767A5B31230F548FA4D4C02F01E3DA8CA1FC66C7C332EA16BF206
	__StaticArrayInitTypeSizeU3D12_t5350B8DB70A0194741098178FD0C827A680701DA ___FC03ECB1D62767A5B31230F548FA4D4C02F01E3DA8CA1FC66C7C332EA16BF206_21;
};

// ILRuntime.CLR.Method.CLRMethod
struct CLRMethod_t7DF49A5C4FF255B056BFEE0BFDF137AEF905FFF5  : public RuntimeObject
{
	// System.Reflection.MethodInfo ILRuntime.CLR.Method.CLRMethod::def
	MethodInfo_t* ___def_0;
	// System.Reflection.ConstructorInfo ILRuntime.CLR.Method.CLRMethod::cDef
	ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* ___cDef_1;
	// System.Collections.Generic.List`1<ILRuntime.CLR.TypeSystem.IType> ILRuntime.CLR.Method.CLRMethod::parameters
	List_1_t136E925D19ADF1AFF60DF33114FEC34DD1EAFD75* ___parameters_2;
	// System.Reflection.ParameterInfo[] ILRuntime.CLR.Method.CLRMethod::parametersCLR
	ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* ___parametersCLR_3;
	// ILRuntime.Runtime.Enviorment.AppDomain ILRuntime.CLR.Method.CLRMethod::appdomain
	AppDomain_tFFEF01BA23D79DA3A22C21195FD262862037E506* ___appdomain_4;
	// ILRuntime.CLR.TypeSystem.CLRType ILRuntime.CLR.Method.CLRMethod::declaringType
	CLRType_t72C55A04EDC2A68F969A27FE7DB52F5A198D437F* ___declaringType_5;
	// System.Boolean ILRuntime.CLR.Method.CLRMethod::isConstructor
	bool ___isConstructor_6;
	// ILRuntime.Runtime.Enviorment.CLRRedirectionDelegate ILRuntime.CLR.Method.CLRMethod::redirect
	CLRRedirectionDelegate_tF96884F0BC45FF631DAED91A526F4190B9753690* ___redirect_7;
	// ILRuntime.CLR.TypeSystem.IType[] ILRuntime.CLR.Method.CLRMethod::genericArguments
	ITypeU5BU5D_tADD584F6D2F1E810AEF7DB2DCA16027722B50991* ___genericArguments_8;
	// System.Type[] ILRuntime.CLR.Method.CLRMethod::genericArgumentsCLR
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___genericArgumentsCLR_9;
	// System.Object[] ILRuntime.CLR.Method.CLRMethod::invocationParam
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___invocationParam_10;
	// System.Boolean ILRuntime.CLR.Method.CLRMethod::isDelegateInvoke
	bool ___isDelegateInvoke_11;
	// System.Boolean ILRuntime.CLR.Method.CLRMethod::isDelegateDynamicInvoke
	bool ___isDelegateDynamicInvoke_12;
	// System.Int32 ILRuntime.CLR.Method.CLRMethod::hashCode
	int32_t ___hashCode_13;
	// System.Int32 ILRuntime.CLR.Method.CLRMethod::_genericParameterCount
	int32_t ____genericParameterCount_15;
	// ILRuntime.CLR.TypeSystem.IType ILRuntime.CLR.Method.CLRMethod::<ReturnType>k__BackingField
	RuntimeObject* ___U3CReturnTypeU3Ek__BackingField_16;
	// System.Nullable`1<System.Boolean> ILRuntime.CLR.Method.CLRMethod::isExtend
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___isExtend_17;
};

struct CLRMethod_t7DF49A5C4FF255B056BFEE0BFDF137AEF905FFF5_StaticFields
{
	// System.Int32 ILRuntime.CLR.Method.CLRMethod::instance_id
	int32_t ___instance_id_14;
};

// ILRuntime.CLR.TypeSystem.CLRType
struct CLRType_t72C55A04EDC2A68F969A27FE7DB52F5A198D437F  : public RuntimeObject
{
	// System.Type ILRuntime.CLR.TypeSystem.CLRType::clrType
	Type_t* ___clrType_0;
	// System.Boolean ILRuntime.CLR.TypeSystem.CLRType::isPrimitive
	bool ___isPrimitive_1;
	// System.Boolean ILRuntime.CLR.TypeSystem.CLRType::isValueType
	bool ___isValueType_2;
	// System.Boolean ILRuntime.CLR.TypeSystem.CLRType::isEnum
	bool ___isEnum_3;
	// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<ILRuntime.CLR.Method.CLRMethod>> ILRuntime.CLR.TypeSystem.CLRType::methods
	Dictionary_2_tC26E805B03E735A461D0E10820350B58E0F8E0E6* ___methods_4;
	// ILRuntime.Runtime.Enviorment.AppDomain ILRuntime.CLR.TypeSystem.CLRType::appdomain
	AppDomain_tFFEF01BA23D79DA3A22C21195FD262862037E506* ___appdomain_5;
	// System.Collections.Generic.List`1<ILRuntime.CLR.Method.CLRMethod> ILRuntime.CLR.TypeSystem.CLRType::constructors
	List_1_tC4C56F6874F83838764B7B05A7167303EC89D2D4* ___constructors_6;
	// System.Collections.Generic.KeyValuePair`2<System.String,ILRuntime.CLR.TypeSystem.IType>[] ILRuntime.CLR.TypeSystem.CLRType::genericArguments
	KeyValuePair_2U5BU5D_t95F3D6603431315C02B152EFB4CA771ADE93BC2D* ___genericArguments_7;
	// System.Collections.Generic.List`1<ILRuntime.CLR.TypeSystem.CLRType> ILRuntime.CLR.TypeSystem.CLRType::genericInstances
	List_1_t32A8E080C94B77FBA5689DAD5BB4311A56A0A0A8* ___genericInstances_8;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> ILRuntime.CLR.TypeSystem.CLRType::fieldMapping
	Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* ___fieldMapping_9;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.FieldInfo> ILRuntime.CLR.TypeSystem.CLRType::fieldInfoCache
	Dictionary_2_t388E31CE91169A6FDC01F4480E46D1BE3AEF76F9* ___fieldInfoCache_10;
	// System.Collections.Generic.Dictionary`2<System.Int32,ILRuntime.Runtime.Enviorment.CLRFieldGetterDelegate> ILRuntime.CLR.TypeSystem.CLRType::fieldGetterCache
	Dictionary_2_tF46722B97F70D0ECAC95378049F4FB4DDCB2E269* ___fieldGetterCache_11;
	// System.Collections.Generic.Dictionary`2<System.Int32,ILRuntime.Runtime.Enviorment.CLRFieldSetterDelegate> ILRuntime.CLR.TypeSystem.CLRType::fieldSetterCache
	Dictionary_2_t0974A2CAF45D6E95E3D92D2E08B44BF1E9673EBA* ___fieldSetterCache_12;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.KeyValuePair`2<ILRuntime.Runtime.Enviorment.CLRFieldBindingDelegate,ILRuntime.Runtime.Enviorment.CLRFieldBindingDelegate>> ILRuntime.CLR.TypeSystem.CLRType::fieldBindingCache
	Dictionary_2_t169275DEA884645B5FE227A9DFE3FBAC399D4E00* ___fieldBindingCache_13;
	// ILRuntime.Runtime.Stack.StackObject ILRuntime.CLR.TypeSystem.CLRType::defaultObject
	StackObject_tE7817703B5F99899973AB6FE8301AF2A37EECEED ___defaultObject_14;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> ILRuntime.CLR.TypeSystem.CLRType::fieldIdxMapping
	Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ___fieldIdxMapping_15;
	// ILRuntime.CLR.TypeSystem.IType[] ILRuntime.CLR.TypeSystem.CLRType::orderedFieldTypes
	ITypeU5BU5D_tADD584F6D2F1E810AEF7DB2DCA16027722B50991* ___orderedFieldTypes_16;
	// ILRuntime.Runtime.Enviorment.CLRMemberwiseCloneDelegate ILRuntime.CLR.TypeSystem.CLRType::memberwiseCloneDelegate
	CLRMemberwiseCloneDelegate_tF5FF76F7A06C611B7D4700D62638DEDBB978777E* ___memberwiseCloneDelegate_17;
	// ILRuntime.Runtime.Enviorment.CLRCreateDefaultInstanceDelegate ILRuntime.CLR.TypeSystem.CLRType::createDefaultInstanceDelegate
	CLRCreateDefaultInstanceDelegate_t9FC3EABA0D0026FA75B38BCDF94E2F82AF5C4A57* ___createDefaultInstanceDelegate_18;
	// ILRuntime.Runtime.Enviorment.CLRCreateArrayInstanceDelegate ILRuntime.CLR.TypeSystem.CLRType::createArrayInstanceDelegate
	CLRCreateArrayInstanceDelegate_t21DB61ADE453F57B36B71AAE6267499E7DF6076B* ___createArrayInstanceDelegate_19;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> ILRuntime.CLR.TypeSystem.CLRType::fieldTokenMapping
	Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ___fieldTokenMapping_20;
	// ILRuntime.CLR.TypeSystem.IType ILRuntime.CLR.TypeSystem.CLRType::byRefType
	RuntimeObject* ___byRefType_21;
	// ILRuntime.CLR.TypeSystem.IType ILRuntime.CLR.TypeSystem.CLRType::elementType
	RuntimeObject* ___elementType_22;
	// System.Collections.Generic.Dictionary`2<System.Int32,ILRuntime.CLR.TypeSystem.IType> ILRuntime.CLR.TypeSystem.CLRType::arrayTypes
	Dictionary_2_t80FDC29AD74F0C96E5DC79D2B57AA658D9612268* ___arrayTypes_23;
	// ILRuntime.CLR.TypeSystem.IType[] ILRuntime.CLR.TypeSystem.CLRType::interfaces
	ITypeU5BU5D_tADD584F6D2F1E810AEF7DB2DCA16027722B50991* ___interfaces_24;
	// System.Boolean ILRuntime.CLR.TypeSystem.CLRType::isDelegate
	bool ___isDelegate_25;
	// ILRuntime.CLR.TypeSystem.IType ILRuntime.CLR.TypeSystem.CLRType::baseType
	RuntimeObject* ___baseType_26;
	// System.Boolean ILRuntime.CLR.TypeSystem.CLRType::isBaseTypeInitialized
	bool ___isBaseTypeInitialized_27;
	// System.Boolean ILRuntime.CLR.TypeSystem.CLRType::interfaceInitialized
	bool ___interfaceInitialized_28;
	// System.Boolean ILRuntime.CLR.TypeSystem.CLRType::valueTypeBinderGot
	bool ___valueTypeBinderGot_29;
	// ILRuntime.Reflection.ILRuntimeWrapperType ILRuntime.CLR.TypeSystem.CLRType::wraperType
	ILRuntimeWrapperType_t6D3A46A94CA7C3E8B8F05968D5BBB5801E566529* ___wraperType_30;
	// ILRuntime.Runtime.Enviorment.ValueTypeBinder ILRuntime.CLR.TypeSystem.CLRType::valueTypeBinder
	ValueTypeBinder_tB3DC591278915AB528AAE29F89FD4D694E6278BA* ___valueTypeBinder_31;
	// System.Int32 ILRuntime.CLR.TypeSystem.CLRType::valuetypeFieldCount
	int32_t ___valuetypeFieldCount_32;
	// System.Int32 ILRuntime.CLR.TypeSystem.CLRType::valuetypeManagedCount
	int32_t ___valuetypeManagedCount_33;
	// System.Boolean ILRuntime.CLR.TypeSystem.CLRType::valuetypeSizeCalculated
	bool ___valuetypeSizeCalculated_34;
	// System.Int32 ILRuntime.CLR.TypeSystem.CLRType::hashCode
	int32_t ___hashCode_35;
	// System.Int32 ILRuntime.CLR.TypeSystem.CLRType::tIdx
	int32_t ___tIdx_36;
	// System.Boolean ILRuntime.CLR.TypeSystem.CLRType::<IsArray>k__BackingField
	bool ___U3CIsArrayU3Ek__BackingField_38;
	// System.Int32 ILRuntime.CLR.TypeSystem.CLRType::<ArrayRank>k__BackingField
	int32_t ___U3CArrayRankU3Ek__BackingField_39;
};

struct CLRType_t72C55A04EDC2A68F969A27FE7DB52F5A198D437F_StaticFields
{
	// System.Int32 ILRuntime.CLR.TypeSystem.CLRType::instance_id
	int32_t ___instance_id_37;
};

// System.Reflection.ConstructorInfo
struct ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB  : public MethodBase_t
{
};

struct ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB_StaticFields
{
	// System.String System.Reflection.ConstructorInfo::ConstructorName
	String_t* ___ConstructorName_0;
	// System.String System.Reflection.ConstructorInfo::TypeConstructorName
	String_t* ___TypeConstructorName_1;
};

// ILRuntime.Mono.Cecil.Cil.DebugInformation
struct DebugInformation_tD80908CB78C0A3BCF1EC9D62EE069C41E042A539  : public RuntimeObject
{
	// ILRuntime.Mono.Cecil.MetadataToken ILRuntime.Mono.Cecil.Cil.DebugInformation::token
	MetadataToken_tD051B0D2FD4077E4F77F42068CBE36B71B004B90 ___token_0;
	// ILRuntime.Mono.Collections.Generic.Collection`1<ILRuntime.Mono.Cecil.Cil.CustomDebugInformation> ILRuntime.Mono.Cecil.Cil.DebugInformation::custom_infos
	Collection_1_t06370A4EFF00B6BCBDB4D1D38079668613B406EE* ___custom_infos_1;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// ILRuntime.CLR.Method.ILMethod
struct ILMethod_tA56B8FD062B67B88B2396AC1AFFCED9E4FE92AD7  : public RuntimeObject
{
	// ILRuntime.Runtime.Intepreter.OpCodes.OpCode[] ILRuntime.CLR.Method.ILMethod::body
	OpCodeU5BU5D_tA0A660D228D31635BC51D02B26E5D715E3EA7C4D* ___body_0;
	// ILRuntime.Runtime.Intepreter.OpCodes.OpCodeR[] ILRuntime.CLR.Method.ILMethod::bodyRegister
	OpCodeRU5BU5D_t9144130E7DF3ABF7AF0E3EFC8AF0C63759AA6AC1* ___bodyRegister_1;
	// System.Collections.Generic.Dictionary`2<System.Int32,ILRuntime.Runtime.Intepreter.RegisterVM.RegisterVMSymbol> ILRuntime.CLR.Method.ILMethod::registerSymbols
	Dictionary_2_tEEB88CF46F6DA1D57225A58A73623EA721DEF951* ___registerSymbols_2;
	// System.Boolean ILRuntime.CLR.Method.ILMethod::symbolFixed
	bool ___symbolFixed_3;
	// ILRuntime.Mono.Cecil.MethodDefinition ILRuntime.CLR.Method.ILMethod::def
	MethodDefinition_t20ECAB62A2A1BBEB383A1A979167D658ACCF3244* ___def_4;
	// System.Collections.Generic.List`1<ILRuntime.CLR.TypeSystem.IType> ILRuntime.CLR.Method.ILMethod::parameters
	List_1_t136E925D19ADF1AFF60DF33114FEC34DD1EAFD75* ___parameters_5;
	// ILRuntime.Runtime.Enviorment.AppDomain ILRuntime.CLR.Method.ILMethod::appdomain
	AppDomain_tFFEF01BA23D79DA3A22C21195FD262862037E506* ___appdomain_6;
	// ILRuntime.CLR.TypeSystem.ILType ILRuntime.CLR.Method.ILMethod::declaringType
	ILType_tD812655AF7716306B8168AD6F08152435B77708C* ___declaringType_7;
	// ILRuntime.CLR.Method.ExceptionHandler[] ILRuntime.CLR.Method.ILMethod::exceptionHandler
	ExceptionHandlerU5BU5D_t806BA8B0F17F63D28468BC214AB18A4CD4FBAE80* ___exceptionHandler_8;
	// ILRuntime.CLR.Method.ExceptionHandler[] ILRuntime.CLR.Method.ILMethod::exceptionHandlerR
	ExceptionHandlerU5BU5D_t806BA8B0F17F63D28468BC214AB18A4CD4FBAE80* ___exceptionHandlerR_9;
	// System.Collections.Generic.KeyValuePair`2<System.String,ILRuntime.CLR.TypeSystem.IType>[] ILRuntime.CLR.Method.ILMethod::genericParameters
	KeyValuePair_2U5BU5D_t95F3D6603431315C02B152EFB4CA771ADE93BC2D* ___genericParameters_10;
	// ILRuntime.CLR.TypeSystem.IType[] ILRuntime.CLR.Method.ILMethod::genericArguments
	ITypeU5BU5D_tADD584F6D2F1E810AEF7DB2DCA16027722B50991* ___genericArguments_11;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32[]> ILRuntime.CLR.Method.ILMethod::jumptables
	Dictionary_2_t029F6A37F043A1B571A7DB746955ECB8DC548AD9* ___jumptables_12;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32[]> ILRuntime.CLR.Method.ILMethod::jumptablesR
	Dictionary_2_t029F6A37F043A1B571A7DB746955ECB8DC548AD9* ___jumptablesR_13;
	// System.Boolean ILRuntime.CLR.Method.ILMethod::isDelegateInvoke
	bool ___isDelegateInvoke_14;
	// System.Boolean ILRuntime.CLR.Method.ILMethod::jitPending
	bool ___jitPending_15;
	// ILRuntime.Reflection.ILRuntimeMethodInfo ILRuntime.CLR.Method.ILMethod::refletionMethodInfo
	ILRuntimeMethodInfo_t5DFC4EC62846DEE24D20FD2F7824F81C90AECF48* ___refletionMethodInfo_16;
	// ILRuntime.Reflection.ILRuntimeConstructorInfo ILRuntime.CLR.Method.ILMethod::reflectionCtorInfo
	ILRuntimeConstructorInfo_t8246144BC4A47C0292CE84CCC8AD31AFA6E9ACAA* ___reflectionCtorInfo_17;
	// System.Int32 ILRuntime.CLR.Method.ILMethod::paramCnt
	int32_t ___paramCnt_18;
	// System.Int32 ILRuntime.CLR.Method.ILMethod::localVarCnt
	int32_t ___localVarCnt_19;
	// System.Int32 ILRuntime.CLR.Method.ILMethod::stackRegisterCnt
	int32_t ___stackRegisterCnt_20;
	// System.Int32 ILRuntime.CLR.Method.ILMethod::jitFlags
	int32_t ___jitFlags_21;
	// System.Boolean ILRuntime.CLR.Method.ILMethod::jitOnDemand
	bool ___jitOnDemand_22;
	// System.Boolean ILRuntime.CLR.Method.ILMethod::jitImmediately
	bool ___jitImmediately_23;
	// System.Int32 ILRuntime.CLR.Method.ILMethod::warmupCounter
	int32_t ___warmupCounter_24;
	// ILRuntime.Mono.Collections.Generic.Collection`1<ILRuntime.Mono.Cecil.Cil.VariableDefinition> ILRuntime.CLR.Method.ILMethod::variables
	Collection_1_t413B13D425BA31F81271569D26FE2157469EB23C* ___variables_25;
	// System.Int32 ILRuntime.CLR.Method.ILMethod::hashCode
	int32_t ___hashCode_26;
	// System.Boolean ILRuntime.CLR.Method.ILMethod::<Compiling>k__BackingField
	bool ___U3CCompilingU3Ek__BackingField_29;
	// ILRuntime.Runtime.Intepreter.IDelegateAdapter ILRuntime.CLR.Method.ILMethod::<DelegateAdapter>k__BackingField
	RuntimeObject* ___U3CDelegateAdapterU3Ek__BackingField_30;
	// System.Int32 ILRuntime.CLR.Method.ILMethod::<StartLine>k__BackingField
	int32_t ___U3CStartLineU3Ek__BackingField_31;
	// System.Int32 ILRuntime.CLR.Method.ILMethod::<EndLine>k__BackingField
	int32_t ___U3CEndLineU3Ek__BackingField_32;
	// ILRuntime.CLR.TypeSystem.IType ILRuntime.CLR.Method.ILMethod::<ReturnType>k__BackingField
	RuntimeObject* ___U3CReturnTypeU3Ek__BackingField_33;
	// System.String ILRuntime.CLR.Method.ILMethod::cachedName
	String_t* ___cachedName_34;
	// System.Nullable`1<System.Boolean> ILRuntime.CLR.Method.ILMethod::isExtend
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___isExtend_35;
};

struct ILMethod_tA56B8FD062B67B88B2396AC1AFFCED9E4FE92AD7_StaticFields
{
	// System.Int32 ILRuntime.CLR.Method.ILMethod::instance_id
	int32_t ___instance_id_27;
};

// ILRuntime.CLR.TypeSystem.ILType
struct ILType_tD812655AF7716306B8168AD6F08152435B77708C  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<ILRuntime.CLR.Method.ILMethod>> ILRuntime.CLR.TypeSystem.ILType::methods
	Dictionary_2_tA246D19070A3833B69EA3F4B84077EF05CC187D5* ___methods_0;
	// ILRuntime.Mono.Cecil.TypeReference ILRuntime.CLR.TypeSystem.ILType::typeRef
	TypeReference_tF82E3E035A581A717CE653CEFC3843CE4E460F91* ___typeRef_1;
	// ILRuntime.Mono.Cecil.TypeDefinition ILRuntime.CLR.TypeSystem.ILType::definition
	TypeDefinition_tD2308912C032A7F7BC8D8A467ACD1034E8868267* ___definition_2;
	// ILRuntime.Runtime.Enviorment.AppDomain ILRuntime.CLR.TypeSystem.ILType::appdomain
	AppDomain_tFFEF01BA23D79DA3A22C21195FD262862037E506* ___appdomain_3;
	// System.Boolean ILRuntime.CLR.TypeSystem.ILType::staticConstructorCalled
	bool ___staticConstructorCalled_4;
	// ILRuntime.CLR.Method.ILMethod ILRuntime.CLR.TypeSystem.ILType::staticConstructor
	ILMethod_tA56B8FD062B67B88B2396AC1AFFCED9E4FE92AD7* ___staticConstructor_5;
	// System.Collections.Generic.List`1<ILRuntime.CLR.Method.ILMethod> ILRuntime.CLR.TypeSystem.ILType::constructors
	List_1_tFA02902A19FAE002B331C328F33B02A3498FB44A* ___constructors_6;
	// ILRuntime.CLR.TypeSystem.IType[] ILRuntime.CLR.TypeSystem.ILType::fieldTypes
	ITypeU5BU5D_tADD584F6D2F1E810AEF7DB2DCA16027722B50991* ___fieldTypes_7;
	// ILRuntime.Mono.Cecil.FieldDefinition[] ILRuntime.CLR.TypeSystem.ILType::fieldDefinitions
	FieldDefinitionU5BU5D_t3FA75D109EABA48310417014237AA7E9EA900FCF* ___fieldDefinitions_8;
	// ILRuntime.CLR.TypeSystem.IType[] ILRuntime.CLR.TypeSystem.ILType::staticFieldTypes
	ITypeU5BU5D_tADD584F6D2F1E810AEF7DB2DCA16027722B50991* ___staticFieldTypes_9;
	// ILRuntime.Mono.Cecil.FieldDefinition[] ILRuntime.CLR.TypeSystem.ILType::staticFieldDefinitions
	FieldDefinitionU5BU5D_t3FA75D109EABA48310417014237AA7E9EA900FCF* ___staticFieldDefinitions_10;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> ILRuntime.CLR.TypeSystem.ILType::fieldMapping
	Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* ___fieldMapping_11;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> ILRuntime.CLR.TypeSystem.ILType::staticFieldMapping
	Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* ___staticFieldMapping_12;
	// ILRuntime.Runtime.Intepreter.ILTypeStaticInstance ILRuntime.CLR.TypeSystem.ILType::staticInstance
	ILTypeStaticInstance_t4D73184CEB0D3868A493ADC3A45AC3C3D1979741* ___staticInstance_13;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> ILRuntime.CLR.TypeSystem.ILType::fieldTokenMapping
	Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ___fieldTokenMapping_14;
	// System.Int32 ILRuntime.CLR.TypeSystem.ILType::fieldStartIdx
	int32_t ___fieldStartIdx_15;
	// System.Int32 ILRuntime.CLR.TypeSystem.ILType::totalFieldCnt
	int32_t ___totalFieldCnt_16;
	// System.Collections.Generic.KeyValuePair`2<System.String,ILRuntime.CLR.TypeSystem.IType>[] ILRuntime.CLR.TypeSystem.ILType::genericArguments
	KeyValuePair_2U5BU5D_t95F3D6603431315C02B152EFB4CA771ADE93BC2D* ___genericArguments_17;
	// ILRuntime.CLR.TypeSystem.IType ILRuntime.CLR.TypeSystem.ILType::baseType
	RuntimeObject* ___baseType_18;
	// ILRuntime.CLR.TypeSystem.IType ILRuntime.CLR.TypeSystem.ILType::byRefType
	RuntimeObject* ___byRefType_19;
	// ILRuntime.CLR.TypeSystem.IType ILRuntime.CLR.TypeSystem.ILType::enumType
	RuntimeObject* ___enumType_20;
	// ILRuntime.CLR.TypeSystem.IType ILRuntime.CLR.TypeSystem.ILType::elementType
	RuntimeObject* ___elementType_21;
	// System.Collections.Generic.Dictionary`2<System.Int32,ILRuntime.CLR.TypeSystem.IType> ILRuntime.CLR.TypeSystem.ILType::arrayTypes
	Dictionary_2_t80FDC29AD74F0C96E5DC79D2B57AA658D9612268* ___arrayTypes_22;
	// System.Type ILRuntime.CLR.TypeSystem.ILType::arrayCLRType
	Type_t* ___arrayCLRType_23;
	// System.Type ILRuntime.CLR.TypeSystem.ILType::byRefCLRType
	Type_t* ___byRefCLRType_24;
	// ILRuntime.CLR.TypeSystem.IType[] ILRuntime.CLR.TypeSystem.ILType::interfaces
	ITypeU5BU5D_tADD584F6D2F1E810AEF7DB2DCA16027722B50991* ___interfaces_25;
	// System.Boolean ILRuntime.CLR.TypeSystem.ILType::baseTypeInitialized
	bool ___baseTypeInitialized_26;
	// System.Boolean ILRuntime.CLR.TypeSystem.ILType::interfaceInitialized
	bool ___interfaceInitialized_27;
	// System.Collections.Generic.List`1<ILRuntime.CLR.TypeSystem.ILType> ILRuntime.CLR.TypeSystem.ILType::genericInstances
	List_1_t32BC060D5804049B6F09C0EC0CC3FFFE3C2FF8D6* ___genericInstances_28;
	// System.Boolean ILRuntime.CLR.TypeSystem.ILType::isDelegate
	bool ___isDelegate_29;
	// ILRuntime.Reflection.ILRuntimeType ILRuntime.CLR.TypeSystem.ILType::reflectionType
	ILRuntimeType_t9A574F579CC136D55BD59788FE7CA5C0CE67ADCB* ___reflectionType_30;
	// ILRuntime.CLR.TypeSystem.ILType ILRuntime.CLR.TypeSystem.ILType::genericDefinition
	ILType_tD812655AF7716306B8168AD6F08152435B77708C* ___genericDefinition_31;
	// ILRuntime.CLR.TypeSystem.IType ILRuntime.CLR.TypeSystem.ILType::firstCLRBaseType
	RuntimeObject* ___firstCLRBaseType_32;
	// ILRuntime.CLR.TypeSystem.IType ILRuntime.CLR.TypeSystem.ILType::firstCLRInterface
	RuntimeObject* ___firstCLRInterface_33;
	// System.Int32 ILRuntime.CLR.TypeSystem.ILType::hashCode
	int32_t ___hashCode_34;
	// System.Int32 ILRuntime.CLR.TypeSystem.ILType::tIdx
	int32_t ___tIdx_35;
	// System.Int32 ILRuntime.CLR.TypeSystem.ILType::jitFlags
	int32_t ___jitFlags_37;
	// System.Boolean ILRuntime.CLR.TypeSystem.ILType::mToStringGot
	bool ___mToStringGot_38;
	// System.Boolean ILRuntime.CLR.TypeSystem.ILType::mEqualsGot
	bool ___mEqualsGot_39;
	// System.Boolean ILRuntime.CLR.TypeSystem.ILType::mGetHashCodeGot
	bool ___mGetHashCodeGot_40;
	// ILRuntime.CLR.Method.IMethod ILRuntime.CLR.TypeSystem.ILType::mToString
	RuntimeObject* ___mToString_41;
	// ILRuntime.CLR.Method.IMethod ILRuntime.CLR.TypeSystem.ILType::mEquals
	RuntimeObject* ___mEquals_42;
	// ILRuntime.CLR.Method.IMethod ILRuntime.CLR.TypeSystem.ILType::mGetHashCode
	RuntimeObject* ___mGetHashCode_43;
	// System.Int32 ILRuntime.CLR.TypeSystem.ILType::valuetypeFieldCount
	int32_t ___valuetypeFieldCount_44;
	// System.Int32 ILRuntime.CLR.TypeSystem.ILType::valuetypeManagedCount
	int32_t ___valuetypeManagedCount_45;
	// System.Boolean ILRuntime.CLR.TypeSystem.ILType::valuetypeSizeCalculated
	bool ___valuetypeSizeCalculated_46;
	// System.Boolean ILRuntime.CLR.TypeSystem.ILType::<IsArray>k__BackingField
	bool ___U3CIsArrayU3Ek__BackingField_47;
	// System.Int32 ILRuntime.CLR.TypeSystem.ILType::<ArrayRank>k__BackingField
	int32_t ___U3CArrayRankU3Ek__BackingField_48;
	// System.Nullable`1<System.Boolean> ILRuntime.CLR.TypeSystem.ILType::isValueType
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___isValueType_49;
	// System.String ILRuntime.CLR.TypeSystem.ILType::fullName
	String_t* ___fullName_50;
	// System.String ILRuntime.CLR.TypeSystem.ILType::fullNameForNested
	String_t* ___fullNameForNested_51;
};

struct ILType_tD812655AF7716306B8168AD6F08152435B77708C_StaticFields
{
	// System.Int32 ILRuntime.CLR.TypeSystem.ILType::instance_id
	int32_t ___instance_id_36;
};

// ILRuntime.Mono.Cecil.Cil.Instruction
struct Instruction_tAA84FA05703612EBA9700BB65C31560D5AA0ACC6  : public RuntimeObject
{
	// System.Int32 ILRuntime.Mono.Cecil.Cil.Instruction::offset
	int32_t ___offset_0;
	// ILRuntime.Mono.Cecil.Cil.OpCode ILRuntime.Mono.Cecil.Cil.Instruction::opcode
	OpCode_t9B1522253DF23368D786BB5D1DF051781F1D3EA9 ___opcode_1;
	// System.Object ILRuntime.Mono.Cecil.Cil.Instruction::operand
	RuntimeObject* ___operand_2;
	// ILRuntime.Mono.Cecil.Cil.Instruction ILRuntime.Mono.Cecil.Cil.Instruction::previous
	Instruction_tAA84FA05703612EBA9700BB65C31560D5AA0ACC6* ___previous_3;
	// ILRuntime.Mono.Cecil.Cil.Instruction ILRuntime.Mono.Cecil.Cil.Instruction::next
	Instruction_tAA84FA05703612EBA9700BB65C31560D5AA0ACC6* ___next_4;
};

// ILRuntime.Mono.Cecil.Cil.InstructionOffset
struct InstructionOffset_tB686944DA41F57E4D92AE845DE655FDC9115AD1F 
{
	// ILRuntime.Mono.Cecil.Cil.Instruction ILRuntime.Mono.Cecil.Cil.InstructionOffset::instruction
	Instruction_tAA84FA05703612EBA9700BB65C31560D5AA0ACC6* ___instruction_0;
	// System.Nullable`1<System.Int32> ILRuntime.Mono.Cecil.Cil.InstructionOffset::offset
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___offset_1;
};
// Native definition for P/Invoke marshalling of ILRuntime.Mono.Cecil.Cil.InstructionOffset
struct InstructionOffset_tB686944DA41F57E4D92AE845DE655FDC9115AD1F_marshaled_pinvoke
{
	Instruction_tAA84FA05703612EBA9700BB65C31560D5AA0ACC6* ___instruction_0;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___offset_1;
};
// Native definition for COM marshalling of ILRuntime.Mono.Cecil.Cil.InstructionOffset
struct InstructionOffset_tB686944DA41F57E4D92AE845DE655FDC9115AD1F_marshaled_com
{
	Instruction_tAA84FA05703612EBA9700BB65C31560D5AA0ACC6* ___instruction_0;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___offset_1;
};

// ILRuntime.Mono.Cecil.MemberReference
struct MemberReference_tE8BA17CFE1266ACA8E7BAAC5F71EEE997A90B377  : public RuntimeObject
{
	// System.String ILRuntime.Mono.Cecil.MemberReference::name
	String_t* ___name_0;
	// ILRuntime.Mono.Cecil.TypeReference ILRuntime.Mono.Cecil.MemberReference::declaring_type
	TypeReference_tF82E3E035A581A717CE653CEFC3843CE4E460F91* ___declaring_type_1;
	// ILRuntime.Mono.Cecil.MetadataToken ILRuntime.Mono.Cecil.MemberReference::token
	MetadataToken_tD051B0D2FD4077E4F77F42068CBE36B71B004B90 ___token_2;
	// System.Object ILRuntime.Mono.Cecil.MemberReference::projection
	RuntimeObject* ___projection_3;
};

// ILRuntime.Mono.Cecil.Cil.MethodBody
struct MethodBody_tB818BF5E1248D874E371C7F3BC0C5C6240BB8F16  : public RuntimeObject
{
	// ILRuntime.Mono.Cecil.MethodDefinition ILRuntime.Mono.Cecil.Cil.MethodBody::method
	MethodDefinition_t20ECAB62A2A1BBEB383A1A979167D658ACCF3244* ___method_0;
	// ILRuntime.Mono.Cecil.ParameterDefinition ILRuntime.Mono.Cecil.Cil.MethodBody::this_parameter
	ParameterDefinition_tF36CEEB8641D1EEA2D1D205360F1A7F37E63A6BA* ___this_parameter_1;
	// System.Int32 ILRuntime.Mono.Cecil.Cil.MethodBody::max_stack_size
	int32_t ___max_stack_size_2;
	// System.Int32 ILRuntime.Mono.Cecil.Cil.MethodBody::code_size
	int32_t ___code_size_3;
	// System.Boolean ILRuntime.Mono.Cecil.Cil.MethodBody::init_locals
	bool ___init_locals_4;
	// ILRuntime.Mono.Cecil.MetadataToken ILRuntime.Mono.Cecil.Cil.MethodBody::local_var_token
	MetadataToken_tD051B0D2FD4077E4F77F42068CBE36B71B004B90 ___local_var_token_5;
	// ILRuntime.Mono.Collections.Generic.Collection`1<ILRuntime.Mono.Cecil.Cil.Instruction> ILRuntime.Mono.Cecil.Cil.MethodBody::instructions
	Collection_1_tF5DDA42267FA4FB2EEA852938E458549573DB51F* ___instructions_6;
	// ILRuntime.Mono.Collections.Generic.Collection`1<ILRuntime.Mono.Cecil.Cil.ExceptionHandler> ILRuntime.Mono.Cecil.Cil.MethodBody::exceptions
	Collection_1_t5C54232BE7649E8BCD655EC300132C2E30EC319F* ___exceptions_7;
	// ILRuntime.Mono.Collections.Generic.Collection`1<ILRuntime.Mono.Cecil.Cil.VariableDefinition> ILRuntime.Mono.Cecil.Cil.MethodBody::variables
	Collection_1_t413B13D425BA31F81271569D26FE2157469EB23C* ___variables_8;
};

// System.Reflection.MethodInfo
struct MethodInfo_t  : public MethodBase_t
{
};

// ILRuntime.Mono.Cecil.ParameterReference
struct ParameterReference_tC6D1DC81D82FDDADAF2EE8CFF4BF7DA7A3BECA24  : public RuntimeObject
{
	// System.String ILRuntime.Mono.Cecil.ParameterReference::name
	String_t* ___name_0;
	// System.Int32 ILRuntime.Mono.Cecil.ParameterReference::index
	int32_t ___index_1;
	// ILRuntime.Mono.Cecil.TypeReference ILRuntime.Mono.Cecil.ParameterReference::parameter_type
	TypeReference_tF82E3E035A581A717CE653CEFC3843CE4E460F91* ___parameter_type_2;
	// ILRuntime.Mono.Cecil.MetadataToken ILRuntime.Mono.Cecil.ParameterReference::token
	MetadataToken_tD051B0D2FD4077E4F77F42068CBE36B71B004B90 ___token_3;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// ET.ETTask/<InnerCoroutine>d__10
struct U3CInnerCoroutineU3Ed__10_t2D601F7100272EA0BB5D608AFE81D658FDE14042 
{
	// System.Int32 ET.ETTask/<InnerCoroutine>d__10::<>1__state
	int32_t ___U3CU3E1__state_0;
	// ET.AsyncETVoidMethodBuilder ET.ETTask/<InnerCoroutine>d__10::<>t__builder
	AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203 ___U3CU3Et__builder_1;
	// ET.ETTask ET.ETTask/<InnerCoroutine>d__10::<>4__this
	ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* ___U3CU3E4__this_2;
	// System.Object ET.ETTask/<InnerCoroutine>d__10::<>u__1
	RuntimeObject* ___U3CU3Eu__1_3;
};

// ET.ETTaskHelper/<WaitAll>d__5
struct U3CWaitAllU3Ed__5_tA50206C2AA88F82EB79AE3021E9EDE47B6455DED 
{
	// System.Int32 ET.ETTaskHelper/<WaitAll>d__5::<>1__state
	int32_t ___U3CU3E1__state_0;
	// ET.ETAsyncTaskMethodBuilder`1<System.Boolean> ET.ETTaskHelper/<WaitAll>d__5::<>t__builder
	ETAsyncTaskMethodBuilder_1_t769C7EF52D8DA1B6EBB8B7AEC7B2D7C854730D31 ___U3CU3Et__builder_1;
	// ET.ETTask[] ET.ETTaskHelper/<WaitAll>d__5::tasks
	ETTaskU5BU5D_t450F7E88953540359721DAAB8A676CF06A7485C8* ___tasks_2;
	// ET.ETCancellationToken ET.ETTaskHelper/<WaitAll>d__5::cancellationToken
	ETCancellationToken_tACA8F146EDE95371894D92DF0FD89C07C08886E1* ___cancellationToken_3;
	// System.Object ET.ETTaskHelper/<WaitAll>d__5::<>u__1
	RuntimeObject* ___U3CU3Eu__1_4;
};

// ET.ETTaskHelper/<WaitAll>d__6
struct U3CWaitAllU3Ed__6_t73CAD2CCB5423A31C85967FB33B23FE96219FFBF 
{
	// System.Int32 ET.ETTaskHelper/<WaitAll>d__6::<>1__state
	int32_t ___U3CU3E1__state_0;
	// ET.ETAsyncTaskMethodBuilder`1<System.Boolean> ET.ETTaskHelper/<WaitAll>d__6::<>t__builder
	ETAsyncTaskMethodBuilder_1_t769C7EF52D8DA1B6EBB8B7AEC7B2D7C854730D31 ___U3CU3Et__builder_1;
	// System.Collections.Generic.List`1<ET.ETTask> ET.ETTaskHelper/<WaitAll>d__6::tasks
	List_1_tA4F47AA2446E3F808EABA13A13F5A8A05B4A5101* ___tasks_2;
	// ET.ETCancellationToken ET.ETTaskHelper/<WaitAll>d__6::cancellationToken
	ETCancellationToken_tACA8F146EDE95371894D92DF0FD89C07C08886E1* ___cancellationToken_3;
	// System.Object ET.ETTaskHelper/<WaitAll>d__6::<>u__1
	RuntimeObject* ___U3CU3Eu__1_4;
};

// ET.ETTaskHelper/<WaitAny>d__2
struct U3CWaitAnyU3Ed__2_t46A8ED3559C8D2579C2F9E875E382FADDB126E60 
{
	// System.Int32 ET.ETTaskHelper/<WaitAny>d__2::<>1__state
	int32_t ___U3CU3E1__state_0;
	// ET.ETAsyncTaskMethodBuilder`1<System.Boolean> ET.ETTaskHelper/<WaitAny>d__2::<>t__builder
	ETAsyncTaskMethodBuilder_1_t769C7EF52D8DA1B6EBB8B7AEC7B2D7C854730D31 ___U3CU3Et__builder_1;
	// ET.ETTask[] ET.ETTaskHelper/<WaitAny>d__2::tasks
	ETTaskU5BU5D_t450F7E88953540359721DAAB8A676CF06A7485C8* ___tasks_2;
	// ET.ETCancellationToken ET.ETTaskHelper/<WaitAny>d__2::cancellationToken
	ETCancellationToken_tACA8F146EDE95371894D92DF0FD89C07C08886E1* ___cancellationToken_3;
	// System.Object ET.ETTaskHelper/<WaitAny>d__2::<>u__1
	RuntimeObject* ___U3CU3Eu__1_4;
};

// ET.ETTaskHelper/<>c__DisplayClass2_0/<<WaitAny>g__RunOneTask|0>d
struct U3CU3CWaitAnyU3Eg__RunOneTaskU7C0U3Ed_t911A5630E36FB2DC9DED97E5A4B71B60EB72D00B 
{
	// System.Int32 ET.ETTaskHelper/<>c__DisplayClass2_0/<<WaitAny>g__RunOneTask|0>d::<>1__state
	int32_t ___U3CU3E1__state_0;
	// ET.AsyncETVoidMethodBuilder ET.ETTaskHelper/<>c__DisplayClass2_0/<<WaitAny>g__RunOneTask|0>d::<>t__builder
	AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203 ___U3CU3Et__builder_1;
	// ET.ETTask ET.ETTaskHelper/<>c__DisplayClass2_0/<<WaitAny>g__RunOneTask|0>d::task
	ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* ___task_2;
	// ET.ETTaskHelper/<>c__DisplayClass2_0 ET.ETTaskHelper/<>c__DisplayClass2_0/<<WaitAny>g__RunOneTask|0>d::<>4__this
	U3CU3Ec__DisplayClass2_0_t386188471D23E1BA38A602299DF18C0DE2A95748* ___U3CU3E4__this_3;
	// System.Object ET.ETTaskHelper/<>c__DisplayClass2_0/<<WaitAny>g__RunOneTask|0>d::<>u__1
	RuntimeObject* ___U3CU3Eu__1_4;
};

// ET.ETTaskHelper/<>c__DisplayClass5_0/<<WaitAll>g__RunOneTask|0>d
struct U3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_tD69FC2C1CB7676C114F1AC8B8D4877AF09E91EB4 
{
	// System.Int32 ET.ETTaskHelper/<>c__DisplayClass5_0/<<WaitAll>g__RunOneTask|0>d::<>1__state
	int32_t ___U3CU3E1__state_0;
	// ET.AsyncETVoidMethodBuilder ET.ETTaskHelper/<>c__DisplayClass5_0/<<WaitAll>g__RunOneTask|0>d::<>t__builder
	AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203 ___U3CU3Et__builder_1;
	// ET.ETTask ET.ETTaskHelper/<>c__DisplayClass5_0/<<WaitAll>g__RunOneTask|0>d::task
	ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* ___task_2;
	// ET.ETTaskHelper/<>c__DisplayClass5_0 ET.ETTaskHelper/<>c__DisplayClass5_0/<<WaitAll>g__RunOneTask|0>d::<>4__this
	U3CU3Ec__DisplayClass5_0_t58DC10C24DA5311C6195ED1199782F0126118891* ___U3CU3E4__this_3;
	// System.Object ET.ETTaskHelper/<>c__DisplayClass5_0/<<WaitAll>g__RunOneTask|0>d::<>u__1
	RuntimeObject* ___U3CU3Eu__1_4;
};

// ET.ETTaskHelper/<>c__DisplayClass6_0/<<WaitAll>g__RunOneTask|0>d
struct U3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_tC8B9E615EDCA22128352B31CB0005D42DCD70952 
{
	// System.Int32 ET.ETTaskHelper/<>c__DisplayClass6_0/<<WaitAll>g__RunOneTask|0>d::<>1__state
	int32_t ___U3CU3E1__state_0;
	// ET.AsyncETVoidMethodBuilder ET.ETTaskHelper/<>c__DisplayClass6_0/<<WaitAll>g__RunOneTask|0>d::<>t__builder
	AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203 ___U3CU3Et__builder_1;
	// ET.ETTask ET.ETTaskHelper/<>c__DisplayClass6_0/<<WaitAll>g__RunOneTask|0>d::task
	ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* ___task_2;
	// ET.ETTaskHelper/<>c__DisplayClass6_0 ET.ETTaskHelper/<>c__DisplayClass6_0/<<WaitAll>g__RunOneTask|0>d::<>4__this
	U3CU3Ec__DisplayClass6_0_t683F5DF1ABBC6076EC981A7D758038E5F5001048* ___U3CU3E4__this_3;
	// System.Object ET.ETTaskHelper/<>c__DisplayClass6_0/<<WaitAll>g__RunOneTask|0>d::<>u__1
	RuntimeObject* ___U3CU3Eu__1_4;
};

// ET.ETTaskHelper/CoroutineBlocker/<WaitAsync>d__3
struct U3CWaitAsyncU3Ed__3_t872511C7B0611473DF4F43EC4CADCB9D7C93CE5F 
{
	// System.Int32 ET.ETTaskHelper/CoroutineBlocker/<WaitAsync>d__3::<>1__state
	int32_t ___U3CU3E1__state_0;
	// ET.ETAsyncTaskMethodBuilder ET.ETTaskHelper/CoroutineBlocker/<WaitAsync>d__3::<>t__builder
	ETAsyncTaskMethodBuilder_t6539D4B6A1CB6F6388453211D928A26188B68B0C ___U3CU3Et__builder_1;
	// ET.ETTaskHelper/CoroutineBlocker ET.ETTaskHelper/CoroutineBlocker/<WaitAsync>d__3::<>4__this
	CoroutineBlocker_tB36E126059540FB732976F4A8DEC06EF8A96634A* ___U3CU3E4__this_2;
	// System.Object ET.ETTaskHelper/CoroutineBlocker/<WaitAsync>d__3::<>u__1
	RuntimeObject* ___U3CU3Eu__1_3;
};

// ILRuntime.Mono.Cecil.FieldReference
struct FieldReference_t752D0BBACC7445A73C69EADC5205CCFAB4F3167E  : public MemberReference_tE8BA17CFE1266ACA8E7BAAC5F71EEE997A90B377
{
	// ILRuntime.Mono.Cecil.TypeReference ILRuntime.Mono.Cecil.FieldReference::field_type
	TypeReference_tF82E3E035A581A717CE653CEFC3843CE4E460F91* ___field_type_4;
};

// ILRuntime.Reflection.ILRuntimeConstructorInfo
struct ILRuntimeConstructorInfo_t8246144BC4A47C0292CE84CCC8AD31AFA6E9ACAA  : public ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB
{
	// ILRuntime.CLR.Method.ILMethod ILRuntime.Reflection.ILRuntimeConstructorInfo::method
	ILMethod_tA56B8FD062B67B88B2396AC1AFFCED9E4FE92AD7* ___method_2;
	// ILRuntime.Reflection.ILRuntimeParameterInfo[] ILRuntime.Reflection.ILRuntimeConstructorInfo::parameters
	ILRuntimeParameterInfoU5BU5D_t8EFF797892286E1E132DD41DBA657A5B7CF770A7* ___parameters_3;
};

// ILRuntime.Reflection.ILRuntimeMethodInfo
struct ILRuntimeMethodInfo_t5DFC4EC62846DEE24D20FD2F7824F81C90AECF48  : public MethodInfo_t
{
	// ILRuntime.CLR.Method.ILMethod ILRuntime.Reflection.ILRuntimeMethodInfo::method
	ILMethod_tA56B8FD062B67B88B2396AC1AFFCED9E4FE92AD7* ___method_0;
	// ILRuntime.Reflection.ILRuntimeParameterInfo[] ILRuntime.Reflection.ILRuntimeMethodInfo::parameters
	ILRuntimeParameterInfoU5BU5D_t8EFF797892286E1E132DD41DBA657A5B7CF770A7* ___parameters_1;
	// ILRuntime.Mono.Cecil.MethodDefinition ILRuntime.Reflection.ILRuntimeMethodInfo::definition
	MethodDefinition_t20ECAB62A2A1BBEB383A1A979167D658ACCF3244* ___definition_2;
	// ILRuntime.Runtime.Enviorment.AppDomain ILRuntime.Reflection.ILRuntimeMethodInfo::appdomain
	AppDomain_tFFEF01BA23D79DA3A22C21195FD262862037E506* ___appdomain_3;
	// System.Attribute[] ILRuntime.Reflection.ILRuntimeMethodInfo::customAttributes
	AttributeU5BU5D_t0F73488E6F1249C889608E8DCC0BCC28A874E8F1* ___customAttributes_4;
	// System.Type[] ILRuntime.Reflection.ILRuntimeMethodInfo::attributeTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___attributeTypes_5;
	// ILRuntime.Runtime.Intepreter.IDelegateAdapter ILRuntime.Reflection.ILRuntimeMethodInfo::iDelegate
	RuntimeObject* ___iDelegate_6;
};

// ILRuntime.Mono.Cecil.Cil.MethodDebugInformation
struct MethodDebugInformation_t338182D1EF8BB76B457F22D8592DB2D91326C50D  : public DebugInformation_tD80908CB78C0A3BCF1EC9D62EE069C41E042A539
{
	// ILRuntime.Mono.Cecil.MethodDefinition ILRuntime.Mono.Cecil.Cil.MethodDebugInformation::method
	MethodDefinition_t20ECAB62A2A1BBEB383A1A979167D658ACCF3244* ___method_2;
	// ILRuntime.Mono.Collections.Generic.Collection`1<ILRuntime.Mono.Cecil.Cil.SequencePoint> ILRuntime.Mono.Cecil.Cil.MethodDebugInformation::sequence_points
	Collection_1_t7057198296C8840DBF5EA3ADE5AA39E81C7D0379* ___sequence_points_3;
	// ILRuntime.Mono.Cecil.Cil.ScopeDebugInformation ILRuntime.Mono.Cecil.Cil.MethodDebugInformation::scope
	ScopeDebugInformation_tD58A6B85C5A464FD7F29218E26E7F32937955E31* ___scope_4;
	// ILRuntime.Mono.Cecil.MethodDefinition ILRuntime.Mono.Cecil.Cil.MethodDebugInformation::kickoff_method
	MethodDefinition_t20ECAB62A2A1BBEB383A1A979167D658ACCF3244* ___kickoff_method_5;
	// System.Int32 ILRuntime.Mono.Cecil.Cil.MethodDebugInformation::code_size
	int32_t ___code_size_6;
	// ILRuntime.Mono.Cecil.MetadataToken ILRuntime.Mono.Cecil.Cil.MethodDebugInformation::local_var_token
	MetadataToken_tD051B0D2FD4077E4F77F42068CBE36B71B004B90 ___local_var_token_7;
};

// ILRuntime.Mono.Cecil.MethodReference
struct MethodReference_t622A5B7BD95CF4A7E4210CF3DDBD91A0018D9783  : public MemberReference_tE8BA17CFE1266ACA8E7BAAC5F71EEE997A90B377
{
	// System.Int32 ILRuntime.Mono.Cecil.MethodReference::hashCode
	int32_t ___hashCode_4;
	// ILRuntime.Mono.Cecil.ParameterDefinitionCollection ILRuntime.Mono.Cecil.MethodReference::parameters
	ParameterDefinitionCollection_t41C891E4E902298512C8B5B2B96A1C792FCC5824* ___parameters_6;
	// ILRuntime.Mono.Cecil.MethodReturnType ILRuntime.Mono.Cecil.MethodReference::return_type
	MethodReturnType_t9E3169A9AF461F689378DC2404F78331B5103F17* ___return_type_7;
	// System.Boolean ILRuntime.Mono.Cecil.MethodReference::has_this
	bool ___has_this_8;
	// System.Boolean ILRuntime.Mono.Cecil.MethodReference::explicit_this
	bool ___explicit_this_9;
	// ILRuntime.Mono.Cecil.MethodCallingConvention ILRuntime.Mono.Cecil.MethodReference::calling_convention
	uint8_t ___calling_convention_10;
	// ILRuntime.Mono.Collections.Generic.Collection`1<ILRuntime.Mono.Cecil.GenericParameter> ILRuntime.Mono.Cecil.MethodReference::generic_parameters
	Collection_1_tAF0023B9443046D2A5BC6C79ADE1460DA3165828* ___generic_parameters_11;
};

struct MethodReference_t622A5B7BD95CF4A7E4210CF3DDBD91A0018D9783_StaticFields
{
	// System.Int32 ILRuntime.Mono.Cecil.MethodReference::instance_id
	int32_t ___instance_id_5;
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// ILRuntime.Mono.Cecil.ParameterDefinition
struct ParameterDefinition_tF36CEEB8641D1EEA2D1D205360F1A7F37E63A6BA  : public ParameterReference_tC6D1DC81D82FDDADAF2EE8CFF4BF7DA7A3BECA24
{
	// System.UInt16 ILRuntime.Mono.Cecil.ParameterDefinition::attributes
	uint16_t ___attributes_4;
	// ILRuntime.Mono.Cecil.IMethodSignature ILRuntime.Mono.Cecil.ParameterDefinition::method
	RuntimeObject* ___method_5;
	// System.Object ILRuntime.Mono.Cecil.ParameterDefinition::constant
	RuntimeObject* ___constant_6;
	// ILRuntime.Mono.Collections.Generic.Collection`1<ILRuntime.Mono.Cecil.CustomAttribute> ILRuntime.Mono.Cecil.ParameterDefinition::custom_attributes
	Collection_1_t0337BC9E2B8889D1AFAD653F1B760A6C09E46E7F* ___custom_attributes_7;
	// ILRuntime.Mono.Cecil.MarshalInfo ILRuntime.Mono.Cecil.ParameterDefinition::marshal_info
	MarshalInfo_t2AD129A43A98669FCB29FDDD925A6B3FC7D9E7B5* ___marshal_info_8;
};

// ILRuntime.Mono.Cecil.Cil.SequencePoint
struct SequencePoint_t118B2D7765CB0A5F233E4AD1DAACE8615FD1C3E1  : public RuntimeObject
{
	// ILRuntime.Mono.Cecil.Cil.InstructionOffset ILRuntime.Mono.Cecil.Cil.SequencePoint::offset
	InstructionOffset_tB686944DA41F57E4D92AE845DE655FDC9115AD1F ___offset_0;
	// ILRuntime.Mono.Cecil.Cil.Document ILRuntime.Mono.Cecil.Cil.SequencePoint::document
	Document_t0E7FF144D1385E309D5C999E68E919564856DB87* ___document_1;
	// System.Int32 ILRuntime.Mono.Cecil.Cil.SequencePoint::start_line
	int32_t ___start_line_2;
	// System.Int32 ILRuntime.Mono.Cecil.Cil.SequencePoint::start_column
	int32_t ___start_column_3;
	// System.Int32 ILRuntime.Mono.Cecil.Cil.SequencePoint::end_line
	int32_t ___end_line_4;
	// System.Int32 ILRuntime.Mono.Cecil.Cil.SequencePoint::end_column
	int32_t ___end_column_5;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// ILRuntime.Mono.Cecil.TypeReference
struct TypeReference_tF82E3E035A581A717CE653CEFC3843CE4E460F91  : public MemberReference_tE8BA17CFE1266ACA8E7BAAC5F71EEE997A90B377
{
	// System.String ILRuntime.Mono.Cecil.TypeReference::namespace
	String_t* ___namespace_4;
	// System.Boolean ILRuntime.Mono.Cecil.TypeReference::value_type
	bool ___value_type_5;
	// System.Int32 ILRuntime.Mono.Cecil.TypeReference::hashCode
	int32_t ___hashCode_6;
	// ILRuntime.Mono.Cecil.IMetadataScope ILRuntime.Mono.Cecil.TypeReference::scope
	RuntimeObject* ___scope_8;
	// ILRuntime.Mono.Cecil.ModuleDefinition ILRuntime.Mono.Cecil.TypeReference::module
	ModuleDefinition_t736466BAF26312907DDA7740301AED7B194ED9A2* ___module_9;
	// ILRuntime.Mono.Cecil.Metadata.ElementType ILRuntime.Mono.Cecil.TypeReference::etype
	uint8_t ___etype_10;
	// System.String ILRuntime.Mono.Cecil.TypeReference::fullname
	String_t* ___fullname_11;
	// ILRuntime.Mono.Collections.Generic.Collection`1<ILRuntime.Mono.Cecil.GenericParameter> ILRuntime.Mono.Cecil.TypeReference::generic_parameters
	Collection_1_tAF0023B9443046D2A5BC6C79ADE1460DA3165828* ___generic_parameters_12;
};

struct TypeReference_tF82E3E035A581A717CE653CEFC3843CE4E460F91_StaticFields
{
	// System.Int32 ILRuntime.Mono.Cecil.TypeReference::instance_id
	int32_t ___instance_id_7;
};

// System.Action`1<System.Exception>
struct Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04  : public MulticastDelegate_t
{
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87  : public MulticastDelegate_t
{
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// ILRuntime.Runtime.Enviorment.CLRRedirectionDelegate
struct CLRRedirectionDelegate_tF96884F0BC45FF631DAED91A526F4190B9753690  : public MulticastDelegate_t
{
};

// ILRuntime.Mono.Cecil.GenericParameter
struct GenericParameter_t8414103B394479F255809FF8AFF131596ED43EEA  : public TypeReference_tF82E3E035A581A717CE653CEFC3843CE4E460F91
{
	// System.Int32 ILRuntime.Mono.Cecil.GenericParameter::position
	int32_t ___position_13;
	// ILRuntime.Mono.Cecil.GenericParameterType ILRuntime.Mono.Cecil.GenericParameter::type
	int32_t ___type_14;
	// ILRuntime.Mono.Cecil.IGenericParameterProvider ILRuntime.Mono.Cecil.GenericParameter::owner
	RuntimeObject* ___owner_15;
	// System.UInt16 ILRuntime.Mono.Cecil.GenericParameter::attributes
	uint16_t ___attributes_16;
	// ILRuntime.Mono.Cecil.GenericParameterConstraintCollection ILRuntime.Mono.Cecil.GenericParameter::constraints
	GenericParameterConstraintCollection_t2E91B418227AAFF49EDD3861CC0015A7C21DD4AC* ___constraints_17;
	// ILRuntime.Mono.Collections.Generic.Collection`1<ILRuntime.Mono.Cecil.CustomAttribute> ILRuntime.Mono.Cecil.GenericParameter::custom_attributes
	Collection_1_t0337BC9E2B8889D1AFAD653F1B760A6C09E46E7F* ___custom_attributes_18;
};

// ILRuntime.Reflection.ILRuntimeWrapperType
struct ILRuntimeWrapperType_t6D3A46A94CA7C3E8B8F05968D5BBB5801E566529  : public Type_t
{
	// ILRuntime.CLR.TypeSystem.CLRType ILRuntime.Reflection.ILRuntimeWrapperType::type
	CLRType_t72C55A04EDC2A68F969A27FE7DB52F5A198D437F* ___type_10;
	// System.Type ILRuntime.Reflection.ILRuntimeWrapperType::et
	Type_t* ___et_11;
};

// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// ET.KcpLog
struct KcpLog_t166A3A6F579F69B0AA700460B0BF73A4B8C07C5F  : public MulticastDelegate_t
{
};

// ET.KcpOutput
struct KcpOutput_t70A2E75BF30C9F6BBFA7EDCCF748E5F9C25F6732  : public MulticastDelegate_t
{
};

// ILRuntime.Mono.Cecil.MethodDefinition
struct MethodDefinition_t20ECAB62A2A1BBEB383A1A979167D658ACCF3244  : public MethodReference_t622A5B7BD95CF4A7E4210CF3DDBD91A0018D9783
{
	// System.UInt16 ILRuntime.Mono.Cecil.MethodDefinition::attributes
	uint16_t ___attributes_12;
	// System.UInt16 ILRuntime.Mono.Cecil.MethodDefinition::impl_attributes
	uint16_t ___impl_attributes_13;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) ILRuntime.Mono.Cecil.MethodDefinition::sem_attrs_ready
	bool ___sem_attrs_ready_14;
	// ILRuntime.Mono.Cecil.MethodSemanticsAttributes ILRuntime.Mono.Cecil.MethodDefinition::sem_attrs
	uint16_t ___sem_attrs_15;
	// ILRuntime.Mono.Collections.Generic.Collection`1<ILRuntime.Mono.Cecil.CustomAttribute> ILRuntime.Mono.Cecil.MethodDefinition::custom_attributes
	Collection_1_t0337BC9E2B8889D1AFAD653F1B760A6C09E46E7F* ___custom_attributes_16;
	// ILRuntime.Mono.Collections.Generic.Collection`1<ILRuntime.Mono.Cecil.SecurityDeclaration> ILRuntime.Mono.Cecil.MethodDefinition::security_declarations
	Collection_1_t299DC8E9E0BE888516E97FEACE3AF67BEF223253* ___security_declarations_17;
	// System.UInt32 ILRuntime.Mono.Cecil.MethodDefinition::rva
	uint32_t ___rva_18;
	// ILRuntime.Mono.Cecil.PInvokeInfo ILRuntime.Mono.Cecil.MethodDefinition::pinvoke
	PInvokeInfo_tD9C7A95539BBA9BFF25FA624F8406D2230992DEF* ___pinvoke_19;
	// ILRuntime.Mono.Collections.Generic.Collection`1<ILRuntime.Mono.Cecil.MethodReference> ILRuntime.Mono.Cecil.MethodDefinition::overrides
	Collection_1_tFCC9B2ABA4F2CD19C7DE3F95AF86983893916C64* ___overrides_20;
	// ILRuntime.Mono.Cecil.Cil.MethodBody ILRuntime.Mono.Cecil.MethodDefinition::body
	MethodBody_tB818BF5E1248D874E371C7F3BC0C5C6240BB8F16* ___body_21;
	// ILRuntime.Mono.Cecil.Cil.MethodDebugInformation ILRuntime.Mono.Cecil.MethodDefinition::debug_info
	MethodDebugInformation_t338182D1EF8BB76B457F22D8592DB2D91326C50D* ___debug_info_22;
	// ILRuntime.Mono.Collections.Generic.Collection`1<ILRuntime.Mono.Cecil.Cil.CustomDebugInformation> ILRuntime.Mono.Cecil.MethodDefinition::custom_infos
	Collection_1_t06370A4EFF00B6BCBDB4D1D38079668613B406EE* ___custom_infos_23;
};

// System.NotImplementedException
struct NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.NullReferenceException
struct NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.TypeLoadException
struct TypeLoadException_t6333E3083F7BFF1A582969E6F67ACBA8B0035C32  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.TypeLoadException::ClassName
	String_t* ___ClassName_18;
	// System.String System.TypeLoadException::AssemblyName
	String_t* ___AssemblyName_19;
	// System.String System.TypeLoadException::MessageArg
	String_t* ___MessageArg_20;
	// System.Int32 System.TypeLoadException::ResourceId
	int32_t ___ResourceId_21;
};

// ILRuntime.Mono.Cecil.TypeSpecification
struct TypeSpecification_t4B0FB1E89E0C33705697B10881A7A77B713E80A3  : public TypeReference_tF82E3E035A581A717CE653CEFC3843CE4E460F91
{
	// ILRuntime.Mono.Cecil.TypeReference ILRuntime.Mono.Cecil.TypeSpecification::element_type
	TypeReference_tF82E3E035A581A717CE653CEFC3843CE4E460F91* ___element_type_13;
};

// ILRuntime.Mono.Cecil.ArrayType
struct ArrayType_t10E15696DD4C5718FE0EEB9853B40A9C44764048  : public TypeSpecification_t4B0FB1E89E0C33705697B10881A7A77B713E80A3
{
	// ILRuntime.Mono.Collections.Generic.Collection`1<ILRuntime.Mono.Cecil.ArrayDimension> ILRuntime.Mono.Cecil.ArrayType::dimensions
	Collection_1_tF74ACD458D0FBD42DD1900C51DAA4DDBF114103F* ___dimensions_14;
};

// ILRuntime.Mono.Cecil.ByReferenceType
struct ByReferenceType_t04D7CF79E01873D9FB3B6E7B9BECD4B6052E9306  : public TypeSpecification_t4B0FB1E89E0C33705697B10881A7A77B713E80A3
{
};

// ILRuntime.Mono.Cecil.GenericInstanceType
struct GenericInstanceType_t6A678A502BCB7A6A9F60E0E45C11A73A0852F746  : public TypeSpecification_t4B0FB1E89E0C33705697B10881A7A77B713E80A3
{
	// ILRuntime.Mono.Collections.Generic.Collection`1<ILRuntime.Mono.Cecil.TypeReference> ILRuntime.Mono.Cecil.GenericInstanceType::arguments
	Collection_1_t4D9D6514FFD29B0141FB7020EC67BC6340193EA5* ___arguments_14;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB  : public RuntimeArray
{
	ALIGN_FIELD (8) Type_t* m_Items[1];

	inline Type_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Type_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Type_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Type_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Type_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Type_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// ILRuntime.CLR.TypeSystem.IType[]
struct ITypeU5BU5D_tADD584F6D2F1E810AEF7DB2DCA16027722B50991  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C  : public RuntimeArray
{
	ALIGN_FIELD (8) ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* m_Items[1];

	inline ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// ILRuntime.Runtime.Intepreter.OpCodes.OpCodeR[]
struct OpCodeRU5BU5D_t9144130E7DF3ABF7AF0E3EFC8AF0C63759AA6AC1  : public RuntimeArray
{
	ALIGN_FIELD (8) OpCodeR_t5309D85805CCD36C3D3DB728886F81579C6F9E65 m_Items[1];

	inline OpCodeR_t5309D85805CCD36C3D3DB728886F81579C6F9E65 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline OpCodeR_t5309D85805CCD36C3D3DB728886F81579C6F9E65* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, OpCodeR_t5309D85805CCD36C3D3DB728886F81579C6F9E65 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline OpCodeR_t5309D85805CCD36C3D3DB728886F81579C6F9E65 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline OpCodeR_t5309D85805CCD36C3D3DB728886F81579C6F9E65* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, OpCodeR_t5309D85805CCD36C3D3DB728886F81579C6F9E65 value)
	{
		m_Items[index] = value;
	}
};
// ILRuntime.CLR.Method.ExceptionHandler[]
struct ExceptionHandlerU5BU5D_t806BA8B0F17F63D28468BC214AB18A4CD4FBAE80  : public RuntimeArray
{
	ALIGN_FIELD (8) ExceptionHandler_tB7222B56682A0D18CF20D9FD22EC650A924A5C7D* m_Items[1];

	inline ExceptionHandler_tB7222B56682A0D18CF20D9FD22EC650A924A5C7D* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ExceptionHandler_tB7222B56682A0D18CF20D9FD22EC650A924A5C7D** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ExceptionHandler_tB7222B56682A0D18CF20D9FD22EC650A924A5C7D* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ExceptionHandler_tB7222B56682A0D18CF20D9FD22EC650A924A5C7D* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ExceptionHandler_tB7222B56682A0D18CF20D9FD22EC650A924A5C7D** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ExceptionHandler_tB7222B56682A0D18CF20D9FD22EC650A924A5C7D* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Collections.Generic.KeyValuePair`2<System.String,ILRuntime.CLR.TypeSystem.IType>[]
struct KeyValuePair_2U5BU5D_t95F3D6603431315C02B152EFB4CA771ADE93BC2D  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_tE28C7DA12E13817FD3C7A77CBB509ED7784C2AB5 m_Items[1];

	inline KeyValuePair_2_tE28C7DA12E13817FD3C7A77CBB509ED7784C2AB5 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_tE28C7DA12E13817FD3C7A77CBB509ED7784C2AB5* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_tE28C7DA12E13817FD3C7A77CBB509ED7784C2AB5 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value_1), (void*)NULL);
		#endif
	}
	inline KeyValuePair_2_tE28C7DA12E13817FD3C7A77CBB509ED7784C2AB5 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_tE28C7DA12E13817FD3C7A77CBB509ED7784C2AB5* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_tE28C7DA12E13817FD3C7A77CBB509ED7784C2AB5 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value_1), (void*)NULL);
		#endif
	}
};
// ILRuntime.Runtime.Intepreter.OpCodes.OpCode[]
struct OpCodeU5BU5D_tA0A660D228D31635BC51D02B26E5D715E3EA7C4D  : public RuntimeArray
{
	ALIGN_FIELD (8) OpCode_t34FC4B6966640D468676BA39661AF3946A3943A7 m_Items[1];

	inline OpCode_t34FC4B6966640D468676BA39661AF3946A3943A7 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline OpCode_t34FC4B6966640D468676BA39661AF3946A3943A7* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, OpCode_t34FC4B6966640D468676BA39661AF3946A3943A7 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline OpCode_t34FC4B6966640D468676BA39661AF3946A3943A7 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline OpCode_t34FC4B6966640D468676BA39661AF3946A3943A7* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, OpCode_t34FC4B6966640D468676BA39661AF3946A3943A7 value)
	{
		m_Items[index] = value;
	}
};
// ILRuntime.Mono.Cecil.Cil.Instruction[]
struct InstructionU5BU5D_t9D4853ED91E6D8DBBD543E4708D1C60550B6F42D  : public RuntimeArray
{
	ALIGN_FIELD (8) Instruction_tAA84FA05703612EBA9700BB65C31560D5AA0ACC6* m_Items[1];

	inline Instruction_tAA84FA05703612EBA9700BB65C31560D5AA0ACC6* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Instruction_tAA84FA05703612EBA9700BB65C31560D5AA0ACC6** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Instruction_tAA84FA05703612EBA9700BB65C31560D5AA0ACC6* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Instruction_tAA84FA05703612EBA9700BB65C31560D5AA0ACC6* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Instruction_tAA84FA05703612EBA9700BB65C31560D5AA0ACC6** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Instruction_tAA84FA05703612EBA9700BB65C31560D5AA0ACC6* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// ET.ETTask[]
struct ETTaskU5BU5D_t450F7E88953540359721DAAB8A676CF06A7485C8  : public RuntimeArray
{
	ALIGN_FIELD (8) ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* m_Items[1];

	inline ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C  : public RuntimeArray
{
	ALIGN_FIELD (8) float m_Items[1];

	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};


// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject** ___value1, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<System.Boolean>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_gshared_inline (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01* __this, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<System.Boolean>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5_gshared (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01* __this, bool ___value0, const RuntimeMethod* method) ;
// T System.Nullable`1<System.Boolean>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Nullable_1_get_Value_mE2C54C6AE9FC9F05BF44CD9D7D61DC6CD56E3E28_gshared (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01* __this, const RuntimeMethod* method) ;
// System.Int32 ILRuntime.Mono.Collections.Generic.Collection`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Collection_1_get_Count_m967DD3DE8A5BE9D547D4D4EC95C81A5B14FDA60E_gshared_inline (Collection_1_tE08A2FA07693E8363A425AFCC772CBB1404392E0* __this, const RuntimeMethod* method) ;
// T ILRuntime.Mono.Collections.Generic.Collection`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Collection_1_get_Item_m521D781FB8FB2FE7292D4068B242B8E78CC1AAFB_gshared (Collection_1_tE08A2FA07693E8363A425AFCC772CBB1404392E0* __this, int32_t ___index0, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m9132EE1422BAA45E44B7FFF495F378790D36D90E_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Add(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Add_m2CD7657B3459B61DD4BBA47024AC71F7D319658B_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m517E7F9D104FEAE6646EABDDC9C852510E86077C_gshared (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Item_mA019F7A495B48EF2A6E5D36977DB3EA09A47ECDB_gshared (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m72CC2F1213D1C1B8ABEDE31082D07B67EC873B13_gshared (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, RuntimeObject* ___key0, int32_t ___value1, const RuntimeMethod* method) ;
// ILRuntime.Mono.Collections.Generic.Collection`1/Enumerator<T> ILRuntime.Mono.Collections.Generic.Collection`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tF46B85C70F153D6E4DA6BCF8809C23A525A3F94A Collection_1_GetEnumerator_mB8304E680D99A214B15602F65FB7628BC790DA6D_gshared (Collection_1_tE08A2FA07693E8363A425AFCC772CBB1404392E0* __this, const RuntimeMethod* method) ;
// System.Void ILRuntime.Mono.Collections.Generic.Collection`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m8D451D445B9F9DDDD262EDA749D20D2C2F52F3F4_gshared (Enumerator_tF46B85C70F153D6E4DA6BCF8809C23A525A3F94A* __this, const RuntimeMethod* method) ;
// T ILRuntime.Mono.Collections.Generic.Collection`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6B934051D5594D4E6E7E8D4C74E98C2F41BDE499_gshared_inline (Enumerator_tF46B85C70F153D6E4DA6BCF8809C23A525A3F94A* __this, const RuntimeMethod* method) ;
// System.Boolean ILRuntime.Mono.Collections.Generic.Collection`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mDFA46CE9A9184E5D1E785779A5B6B5CC95B2ECBB_gshared (Enumerator_tF46B85C70F153D6E4DA6BCF8809C23A525A3F94A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m92E9AB321FBD7147CA109C822D99C8B0610C27B7_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_mED5C451F158CDDD2B3F4B0720CD248DA9DB27B25_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___key0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m2888D71A14F2B8510102F24FEE90552E91B124C1_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::.ctor(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_m0D5C3E0BE2D37252D3F4E0F0EA9A13C9458D4950_gshared (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Remove(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Remove_mF1D84C0A2829DDA2A0CEE1D82A5B999B5F6627CB_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t72556E98D7DDBE118A973D782D523D15A96461C8 HashSet_1_GetEnumerator_m143B98FEED7E9CABA2C494AB2F04DAD60A504635_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.HashSet`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mFB582AEAA2E73F3128B5571197BEDE256A83F657_gshared (Enumerator_t72556E98D7DDBE118A973D782D523D15A96461C8* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.HashSet`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m139A176CD271A0532D75BE08DA7831C8C45CE28F_gshared_inline (Enumerator_t72556E98D7DDBE118A973D782D523D15A96461C8* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m27565F5ACCCC75C3DD34CC4CAE3E6AEFEB9144A6_gshared (Enumerator_t72556E98D7DDBE118A973D782D523D15A96461C8* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Queue`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m1768ADA9855B7CDA14C9C42E098A287F1A39C3A2_gshared_inline (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.Queue`1<System.Object>::Dequeue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_Dequeue_m86B243DF9EC238316EC3D27DF3E0AB8DB0987E84_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<System.Object>::Enqueue(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_m5CB8CF3906F1289F92036F0973EC5BE3450402EF_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void ET.AsyncETVoidMethodBuilder::Start<ET.ETTask/<InnerCoroutine>d__10>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncETVoidMethodBuilder_Start_TisU3CInnerCoroutineU3Ed__10_t2D601F7100272EA0BB5D608AFE81D658FDE14042_mC604A8F025BA07EB3FB5C21C8DBBC8044796E40D_gshared (AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203* __this, U3CInnerCoroutineU3Ed__10_t2D601F7100272EA0BB5D608AFE81D658FDE14042* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m6E2A5A8173E0CC524496D5155C737DF8FD10D0EB_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) ;
// System.Void ET.AsyncETVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Object,ET.ETTask/<InnerCoroutine>d__10>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncETVoidMethodBuilder_AwaitUnsafeOnCompleted_TisRuntimeObject_TisU3CInnerCoroutineU3Ed__10_t2D601F7100272EA0BB5D608AFE81D658FDE14042_mCAC25C56C5E5D60AED7260BB185F139B27D4F4E9_gshared (AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203* __this, RuntimeObject** ___awaiter0, U3CInnerCoroutineU3Ed__10_t2D601F7100272EA0BB5D608AFE81D658FDE14042* ___stateMachine1, const RuntimeMethod* method) ;
// ET.ETAsyncTaskMethodBuilder`1<T> ET.ETAsyncTaskMethodBuilder`1<System.Boolean>::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ETAsyncTaskMethodBuilder_1_t769C7EF52D8DA1B6EBB8B7AEC7B2D7C854730D31 ETAsyncTaskMethodBuilder_1_Create_mC59CD51B35E4F74B34A0336B1C4D7094B1C17EBD_gshared (const RuntimeMethod* method) ;
// System.Void ET.ETAsyncTaskMethodBuilder`1<System.Boolean>::Start<ET.ETTaskHelper/<WaitAny>d__2>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETAsyncTaskMethodBuilder_1_Start_TisU3CWaitAnyU3Ed__2_t46A8ED3559C8D2579C2F9E875E382FADDB126E60_m9B5E2E9331F0E05CCE0DFB6FC233632FC9D828D1_gshared (ETAsyncTaskMethodBuilder_1_t769C7EF52D8DA1B6EBB8B7AEC7B2D7C854730D31* __this, U3CWaitAnyU3Ed__2_t46A8ED3559C8D2579C2F9E875E382FADDB126E60* ___stateMachine0, const RuntimeMethod* method) ;
// ET.ETTask`1<T> ET.ETAsyncTaskMethodBuilder`1<System.Boolean>::get_Task()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ETTask_1_tC3B29B37E823D9C66439D79CE23D65BBFE61686F* ETAsyncTaskMethodBuilder_1_get_Task_mB34D8721E56EE05B2B4AE583DEB758828135BDFF_gshared_inline (ETAsyncTaskMethodBuilder_1_t769C7EF52D8DA1B6EBB8B7AEC7B2D7C854730D31* __this, const RuntimeMethod* method) ;
// System.Void ET.ETAsyncTaskMethodBuilder`1<System.Boolean>::Start<ET.ETTaskHelper/<WaitAll>d__5>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETAsyncTaskMethodBuilder_1_Start_TisU3CWaitAllU3Ed__5_tA50206C2AA88F82EB79AE3021E9EDE47B6455DED_m2DF74E4D7018815157D5A73C472339BAF9650F23_gshared (ETAsyncTaskMethodBuilder_1_t769C7EF52D8DA1B6EBB8B7AEC7B2D7C854730D31* __this, U3CWaitAllU3Ed__5_tA50206C2AA88F82EB79AE3021E9EDE47B6455DED* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void ET.ETAsyncTaskMethodBuilder`1<System.Boolean>::Start<ET.ETTaskHelper/<WaitAll>d__6>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETAsyncTaskMethodBuilder_1_Start_TisU3CWaitAllU3Ed__6_t73CAD2CCB5423A31C85967FB33B23FE96219FFBF_m37FBFFC9DA493FE36032DC4BC84A1F9A4B5DF41D_gshared (ETAsyncTaskMethodBuilder_1_t769C7EF52D8DA1B6EBB8B7AEC7B2D7C854730D31* __this, U3CWaitAllU3Ed__6_t73CAD2CCB5423A31C85967FB33B23FE96219FFBF* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void ET.ETAsyncTaskMethodBuilder::Start<ET.ETTaskHelper/CoroutineBlocker/<WaitAsync>d__3>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETAsyncTaskMethodBuilder_Start_TisU3CWaitAsyncU3Ed__3_t872511C7B0611473DF4F43EC4CADCB9D7C93CE5F_m670F06EAE7A04C739D1DB3C840951E4901B47226_gshared (ETAsyncTaskMethodBuilder_t6539D4B6A1CB6F6388453211D928A26188B68B0C* __this, U3CWaitAsyncU3Ed__3_t872511C7B0611473DF4F43EC4CADCB9D7C93CE5F* ___stateMachine0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Void ET.ETAsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Object,ET.ETTaskHelper/CoroutineBlocker/<WaitAsync>d__3>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETAsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisRuntimeObject_TisU3CWaitAsyncU3Ed__3_t872511C7B0611473DF4F43EC4CADCB9D7C93CE5F_mFB89546D4B20A7091D3DFB511AE50F3F6470B764_gshared (ETAsyncTaskMethodBuilder_t6539D4B6A1CB6F6388453211D928A26188B68B0C* __this, RuntimeObject** ___awaiter0, U3CWaitAsyncU3Ed__3_t872511C7B0611473DF4F43EC4CADCB9D7C93CE5F* ___stateMachine1, const RuntimeMethod* method) ;
// System.Void ET.AsyncETVoidMethodBuilder::Start<ET.ETTaskHelper/<>c__DisplayClass2_0/<<WaitAny>g__RunOneTask|0>d>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncETVoidMethodBuilder_Start_TisU3CU3CWaitAnyU3Eg__RunOneTaskU7C0U3Ed_t911A5630E36FB2DC9DED97E5A4B71B60EB72D00B_mC193C85AA0BFED7A7BE9CC22FD1DF10E986EF8E2_gshared (AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203* __this, U3CU3CWaitAnyU3Eg__RunOneTaskU7C0U3Ed_t911A5630E36FB2DC9DED97E5A4B71B60EB72D00B* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void ET.AsyncETVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Object,ET.ETTaskHelper/<>c__DisplayClass2_0/<<WaitAny>g__RunOneTask|0>d>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncETVoidMethodBuilder_AwaitUnsafeOnCompleted_TisRuntimeObject_TisU3CU3CWaitAnyU3Eg__RunOneTaskU7C0U3Ed_t911A5630E36FB2DC9DED97E5A4B71B60EB72D00B_m2BA91121C842D738C465A7F11CF47A1717192FFD_gshared (AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203* __this, RuntimeObject** ___awaiter0, U3CU3CWaitAnyU3Eg__RunOneTaskU7C0U3Ed_t911A5630E36FB2DC9DED97E5A4B71B60EB72D00B* ___stateMachine1, const RuntimeMethod* method) ;
// System.Void ET.ETAsyncTaskMethodBuilder`1<System.Boolean>::AwaitUnsafeOnCompleted<System.Object,ET.ETTaskHelper/<WaitAny>d__2>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETAsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisRuntimeObject_TisU3CWaitAnyU3Ed__2_t46A8ED3559C8D2579C2F9E875E382FADDB126E60_m56B65EE491BA122A6DC38F1D209106C0283A3F16_gshared (ETAsyncTaskMethodBuilder_1_t769C7EF52D8DA1B6EBB8B7AEC7B2D7C854730D31* __this, RuntimeObject** ___awaiter0, U3CWaitAnyU3Ed__2_t46A8ED3559C8D2579C2F9E875E382FADDB126E60* ___stateMachine1, const RuntimeMethod* method) ;
// System.Void ET.ETAsyncTaskMethodBuilder`1<System.Boolean>::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETAsyncTaskMethodBuilder_1_SetException_m4B20AE5BD8F1E608AAD3970CB6C2985ACB4D6B08_gshared (ETAsyncTaskMethodBuilder_1_t769C7EF52D8DA1B6EBB8B7AEC7B2D7C854730D31* __this, Exception_t* ___exception0, const RuntimeMethod* method) ;
// System.Void ET.ETAsyncTaskMethodBuilder`1<System.Boolean>::SetResult(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETAsyncTaskMethodBuilder_1_SetResult_mBAD14F0004B857E596693C614C5B29587E97021C_gshared (ETAsyncTaskMethodBuilder_1_t769C7EF52D8DA1B6EBB8B7AEC7B2D7C854730D31* __this, bool ___ret0, const RuntimeMethod* method) ;
// System.Void ET.ETAsyncTaskMethodBuilder`1<System.Boolean>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETAsyncTaskMethodBuilder_1_SetStateMachine_m5B87C2E5817CF286E3FCDFBB7C7BF417672DB76E_gshared (ETAsyncTaskMethodBuilder_1_t769C7EF52D8DA1B6EBB8B7AEC7B2D7C854730D31* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void ET.AsyncETVoidMethodBuilder::Start<ET.ETTaskHelper/<>c__DisplayClass5_0/<<WaitAll>g__RunOneTask|0>d>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncETVoidMethodBuilder_Start_TisU3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_tD69FC2C1CB7676C114F1AC8B8D4877AF09E91EB4_mA3EA92C6FA79BC46C30122939F6CA44C0E1D90B9_gshared (AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203* __this, U3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_tD69FC2C1CB7676C114F1AC8B8D4877AF09E91EB4* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void ET.AsyncETVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Object,ET.ETTaskHelper/<>c__DisplayClass5_0/<<WaitAll>g__RunOneTask|0>d>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncETVoidMethodBuilder_AwaitUnsafeOnCompleted_TisRuntimeObject_TisU3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_tD69FC2C1CB7676C114F1AC8B8D4877AF09E91EB4_m49D6103BAA01FE76FE5E3286C8D93D681A6B655A_gshared (AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203* __this, RuntimeObject** ___awaiter0, U3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_tD69FC2C1CB7676C114F1AC8B8D4877AF09E91EB4* ___stateMachine1, const RuntimeMethod* method) ;
// System.Void ET.ETAsyncTaskMethodBuilder`1<System.Boolean>::AwaitUnsafeOnCompleted<System.Object,ET.ETTaskHelper/<WaitAll>d__5>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETAsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisRuntimeObject_TisU3CWaitAllU3Ed__5_tA50206C2AA88F82EB79AE3021E9EDE47B6455DED_m52C93FFDCFCB3800E439F160A87D392865C415D3_gshared (ETAsyncTaskMethodBuilder_1_t769C7EF52D8DA1B6EBB8B7AEC7B2D7C854730D31* __this, RuntimeObject** ___awaiter0, U3CWaitAllU3Ed__5_tA50206C2AA88F82EB79AE3021E9EDE47B6455DED* ___stateMachine1, const RuntimeMethod* method) ;
// System.Void ET.AsyncETVoidMethodBuilder::Start<ET.ETTaskHelper/<>c__DisplayClass6_0/<<WaitAll>g__RunOneTask|0>d>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncETVoidMethodBuilder_Start_TisU3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_tC8B9E615EDCA22128352B31CB0005D42DCD70952_mF703CC49BFF53BD376F1D2C4A00507A237512E6E_gshared (AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203* __this, U3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_tC8B9E615EDCA22128352B31CB0005D42DCD70952* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void ET.AsyncETVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Object,ET.ETTaskHelper/<>c__DisplayClass6_0/<<WaitAll>g__RunOneTask|0>d>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncETVoidMethodBuilder_AwaitUnsafeOnCompleted_TisRuntimeObject_TisU3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_tC8B9E615EDCA22128352B31CB0005D42DCD70952_m711C5BAA747560EB6DE3C28B63F58223A14B0C59_gshared (AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203* __this, RuntimeObject** ___awaiter0, U3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_tC8B9E615EDCA22128352B31CB0005D42DCD70952* ___stateMachine1, const RuntimeMethod* method) ;
// System.Void ET.ETAsyncTaskMethodBuilder`1<System.Boolean>::AwaitUnsafeOnCompleted<System.Object,ET.ETTaskHelper/<WaitAll>d__6>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETAsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisRuntimeObject_TisU3CWaitAllU3Ed__6_t73CAD2CCB5423A31C85967FB33B23FE96219FFBF_m2EE77E3B9956EB0D01827EC2019BB1294CDE6E42_gshared (ETAsyncTaskMethodBuilder_1_t769C7EF52D8DA1B6EBB8B7AEC7B2D7C854730D31* __this, RuntimeObject** ___awaiter0, U3CWaitAllU3Ed__6_t73CAD2CCB5423A31C85967FB33B23FE96219FFBF* ___stateMachine1, const RuntimeMethod* method) ;

// System.Boolean System.Reflection.MethodBase::get_IsStatic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MethodBase_get_IsStatic_mD2921396167EC4F99E2ADC46C39CCCEC3CD0E16E (MethodBase_t* __this, const RuntimeMethod* method) ;
// System.Boolean System.Reflection.ConstructorInfo::op_Inequality(System.Reflection.ConstructorInfo,System.Reflection.ConstructorInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConstructorInfo_op_Inequality_mB3CB8B779FA4400BBF7069097CC64E6CA1D235A4 (ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* ___left0, ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* ___right1, const RuntimeMethod* method) ;
// System.Boolean System.Reflection.MethodInfo::op_Inequality(System.Reflection.MethodInfo,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MethodInfo_op_Inequality_mB73597A1FCC2F906DBCADDEC68A1B7D5B7E89FA8 (MethodInfo_t* ___left0, MethodInfo_t* ___right1, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2<System.Reflection.MethodBase,ILRuntime.Runtime.Enviorment.CLRRedirectionDelegate> ILRuntime.Runtime.Enviorment.AppDomain::get_RedirectMap()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_tBCF477C8957A7776ED771401B7A91BC5EB9B45E5* AppDomain_get_RedirectMap_m42A5D4F3A0A14585955A39D7C7BF093ECBFEFF01 (AppDomain_tFFEF01BA23D79DA3A22C21195FD262862037E506* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Reflection.MethodBase,ILRuntime.Runtime.Enviorment.CLRRedirectionDelegate>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_mFA115DAA0C795A9E122300A1D3D6E48DEFD4FE54 (Dictionary_2_tBCF477C8957A7776ED771401B7A91BC5EB9B45E5* __this, MethodBase_t* ___key0, CLRRedirectionDelegate_tF96884F0BC45FF631DAED91A526F4190B9753690** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tBCF477C8957A7776ED771401B7A91BC5EB9B45E5*, MethodBase_t*, CLRRedirectionDelegate_tF96884F0BC45FF631DAED91A526F4190B9753690**, const RuntimeMethod*))Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// ILRuntime.CLR.TypeSystem.IType ILRuntime.Runtime.Enviorment.AppDomain::GetType(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AppDomain_GetType_m05A6BC3059C74ADF2B7F22C2C39947D011FDE169 (AppDomain_tFFEF01BA23D79DA3A22C21195FD262862037E506* __this, String_t* ___fullname0, const RuntimeMethod* method) ;
// System.Void ILRuntime.CLR.Method.CLRMethod::set_ReturnType(ILRuntime.CLR.TypeSystem.IType)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CLRMethod_set_ReturnType_mD36DB3457CFAF03FDBDBA4A31E237C7DA1815858_inline (CLRMethod_t7DF49A5C4FF255B056BFEE0BFDF137AEF905FFF5* __this, RuntimeObject* ___value0, const RuntimeMethod* method) ;
// ILRuntime.CLR.TypeSystem.IType ILRuntime.CLR.Method.CLRMethod::get_ReturnType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CLRMethod_get_ReturnType_m6945E1D7376126D59133420C4A85C878D8F17952_inline (CLRMethod_t7DF49A5C4FF255B056BFEE0BFDF137AEF905FFF5* __this, const RuntimeMethod* method) ;
// System.Boolean ILRuntime.CLR.TypeSystem.CLRType::get_IsDelegate()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool CLRType_get_IsDelegate_m70EBE1A937EBE57679E84B4EEC289523AD50AE1E_inline (CLRType_t72C55A04EDC2A68F969A27FE7DB52F5A198D437F* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<ILRuntime.CLR.TypeSystem.IType> ILRuntime.CLR.Method.CLRMethod::get_Parameters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t136E925D19ADF1AFF60DF33114FEC34DD1EAFD75* CLRMethod_get_Parameters_mC66DC507A5E7793018B3F91F2AAABC3E618D5C9B (CLRMethod_t7DF49A5C4FF255B056BFEE0BFDF137AEF905FFF5* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<ILRuntime.CLR.TypeSystem.IType>::get_Count()
inline int32_t List_1_get_Count_m85C0F032DCB5D6814A7025C9AC1BB586F662E2A4_inline (List_1_t136E925D19ADF1AFF60DF33114FEC34DD1EAFD75* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t136E925D19ADF1AFF60DF33114FEC34DD1EAFD75*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void ILRuntime.CLR.Method.CLRMethod::InitParameters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CLRMethod_InitParameters_m7C8BF0B548C7498E64ED61330980BAAC6C0DB423 (CLRMethod_t7DF49A5C4FF255B056BFEE0BFDF137AEF905FFF5* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<ILRuntime.CLR.TypeSystem.IType>::.ctor()
inline void List_1__ctor_m44EE83E964CDEA8BDD3569AD8FF75A7ADDC834BD (List_1_t136E925D19ADF1AFF60DF33114FEC34DD1EAFD75* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t136E925D19ADF1AFF60DF33114FEC34DD1EAFD75*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Reflection.ParameterInfo[] ILRuntime.CLR.Method.CLRMethod::get_ParametersCLR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* CLRMethod_get_ParametersCLR_m5467ACF4503B380903B245CBE6021DACA6D31144 (CLRMethod_t7DF49A5C4FF255B056BFEE0BFDF137AEF905FFF5* __this, const RuntimeMethod* method) ;
// System.Boolean System.Type::get_HasElementType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_HasElementType_m44F9601E586D2EEA2EDB93FB81D1D80521C264EE (Type_t* __this, const RuntimeMethod* method) ;
// System.Void ILRuntime.CLR.TypeSystem.ILGenericParameterType::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ILGenericParameterType__ctor_m76EF62E1872BC4A6EEA911578FEA1A8811AFE6FB (ILGenericParameterType_tD3907D5D02CED0831ACEC5A4A288F3A6C6E0889B* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Void System.TypeLoadException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeLoadException__ctor_mE23EFA36AFDD51A3025C528FA60DB2A78CFAB44E (TypeLoadException_t6333E3083F7BFF1A582969E6F67ACBA8B0035C32* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<ILRuntime.CLR.TypeSystem.IType>::Add(T)
inline void List_1_Add_m3F51DF5D911FE86B020CC8DD004AC5A96492A070_inline (List_1_t136E925D19ADF1AFF60DF33114FEC34DD1EAFD75* __this, RuntimeObject* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t136E925D19ADF1AFF60DF33114FEC34DD1EAFD75*, RuntimeObject*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Int32 ILRuntime.CLR.Method.CLRMethod::get_ParameterCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CLRMethod_get_ParameterCount_mE781F880D1B9196A9382C6A381BAD4070FE3622F (CLRMethod_t7DF49A5C4FF255B056BFEE0BFDF137AEF905FFF5* __this, const RuntimeMethod* method) ;
// ILRuntime.Runtime.Stack.StackObject* ILRuntime.CLR.Method.CLRMethod::Minus(ILRuntime.Runtime.Stack.StackObject*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StackObject_tE7817703B5F99899973AB6FE8301AF2A37EECEED* CLRMethod_Minus_mC323262EF6B344B8C321DEC3D916AA9EF2EFD312 (CLRMethod_t7DF49A5C4FF255B056BFEE0BFDF137AEF905FFF5* __this, StackObject_tE7817703B5F99899973AB6FE8301AF2A37EECEED* ___a0, int32_t ___b1, const RuntimeMethod* method) ;
// System.Object ILRuntime.Runtime.Stack.StackObject::ToObject(ILRuntime.Runtime.Stack.StackObject*,ILRuntime.Runtime.Enviorment.AppDomain,System.Collections.Generic.IList`1<System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StackObject_ToObject_mB6ECFD115234788924C47183E4C8D6F4348F2B63 (StackObject_tE7817703B5F99899973AB6FE8301AF2A37EECEED* ___esp0, AppDomain_tFFEF01BA23D79DA3A22C21195FD262862037E506* ___appdomain1, RuntimeObject* ___mStack2, const RuntimeMethod* method) ;
// System.Object ILRuntime.CLR.Utils.Extensions::CheckCLRTypes(System.Type,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Extensions_CheckCLRTypes_m69420B63D41FB950C09E0A9AA70CE84876CEC963 (Type_t* ___pt0, RuntimeObject* ___obj1, const RuntimeMethod* method) ;
// System.Object ILRuntime.Runtime.Intepreter.ILIntepreter::CheckAndCloneValueType(System.Object,ILRuntime.Runtime.Enviorment.AppDomain)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ILIntepreter_CheckAndCloneValueType_mD48C9A1FB49388393D639261145F77DC300F56CD (RuntimeObject* ___obj0, AppDomain_tFFEF01BA23D79DA3A22C21195FD262862037E506* ___domain1, const RuntimeMethod* method) ;
// System.Type ILRuntime.CLR.TypeSystem.CLRType::get_TypeForCLR()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* CLRType_get_TypeForCLR_m664A93098B757595B5F90AFAD61B5C7ACFF71C5C_inline (CLRType_t72C55A04EDC2A68F969A27FE7DB52F5A198D437F* __this, const RuntimeMethod* method) ;
// System.Void System.NullReferenceException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullReferenceException__ctor_mD26D62094A5E49C18D817817E17FDFBC1D3BD752 (NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB* __this, const RuntimeMethod* method) ;
// System.Object System.Reflection.MethodBase::Invoke(System.Object,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MethodBase_Invoke_mEEF3218648F111A8C338001A7804091A0747C826 (MethodBase_t* __this, RuntimeObject* ___obj0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___parameters1, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___array0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method) ;
// System.Void System.NotImplementedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* __this, const RuntimeMethod* method) ;
// System.Object System.Reflection.ConstructorInfo::Invoke(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConstructorInfo_Invoke_m15FDF2B682BD01CC934BE4D314EF2193103CECFE (ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___parameters0, const RuntimeMethod* method) ;
// System.Void ILRuntime.CLR.Method.CLRMethod::FixReference(System.Int32,ILRuntime.Runtime.Stack.StackObject*,System.Object[],System.Collections.Generic.IList`1<System.Object>,System.Object,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CLRMethod_FixReference_m197B0428A82CEDEFC607F03B4E5691CCBC36EEF8 (CLRMethod_t7DF49A5C4FF255B056BFEE0BFDF137AEF905FFF5* __this, int32_t ___paramCount0, StackObject_tE7817703B5F99899973AB6FE8301AF2A37EECEED* ___esp1, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___param2, RuntimeObject* ___mStack3, RuntimeObject* ___instance4, bool ___hasThis5, const RuntimeMethod* method) ;
// System.Boolean ILRuntime.CLR.TypeSystem.CLRType::get_IsValueType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool CLRType_get_IsValueType_mBE56C8C16725817A215BECD5041B23A06E7DE4E6_inline (CLRType_t72C55A04EDC2A68F969A27FE7DB52F5A198D437F* __this, const RuntimeMethod* method) ;
// System.Void ILRuntime.Runtime.Intepreter.ILIntepreter::UnboxObject(ILRuntime.Runtime.Stack.StackObject*,System.Object,System.Collections.Generic.IList`1<System.Object>,ILRuntime.Runtime.Enviorment.AppDomain)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ILIntepreter_UnboxObject_mA2C072896D74DE85AC99802DF319A61E853D3245 (StackObject_tE7817703B5F99899973AB6FE8301AF2A37EECEED* ___esp0, RuntimeObject* ___obj1, RuntimeObject* ___mStack2, AppDomain_tFFEF01BA23D79DA3A22C21195FD262862037E506* ___domain3, const RuntimeMethod* method) ;
// System.Void ILRuntime.Runtime.Intepreter.ILTypeInstance::set_Item(System.Int32,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ILTypeInstance_set_Item_m3CE0DD7B7783F5B559D69693929B5DEDED318482 (ILTypeInstance_t4661F334AB7A19092229919A81C8444982969A15* __this, int32_t ___index0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// ILRuntime.CLR.TypeSystem.IType ILRuntime.Runtime.Enviorment.AppDomain::GetType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AppDomain_GetType_mC1BCC62B3BD153AF9A944FDB68783264EAA7E9D3 (AppDomain_tFFEF01BA23D79DA3A22C21195FD262862037E506* __this, Type_t* ___t0, const RuntimeMethod* method) ;
// System.Reflection.FieldInfo ILRuntime.CLR.TypeSystem.CLRType::GetField(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FieldInfo_t* CLRType_GetField_mAE2DD5D7B931E8AA29B5800F4898B0AC1A4E110E (CLRType_t72C55A04EDC2A68F969A27FE7DB52F5A198D437F* __this, int32_t ___hash0, const RuntimeMethod* method) ;
// System.Void System.Reflection.FieldInfo::SetValue(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FieldInfo_SetValue_mD8C0DA3A1A0CFF073F971622BBDBAAB6688B4B6C (FieldInfo_t* __this, RuntimeObject* ___obj0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// ILRuntime.CLR.TypeSystem.IType ILRuntime.Runtime.Enviorment.AppDomain::GetType(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AppDomain_GetType_mA30B03F0CCDE4B5BD4EEB8C187C70BAFDB523BB1 (AppDomain_tFFEF01BA23D79DA3A22C21195FD262862037E506* __this, int32_t ___hash0, const RuntimeMethod* method) ;
// ILRuntime.Runtime.Intepreter.ILTypeStaticInstance ILRuntime.CLR.TypeSystem.ILType::get_StaticInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ILTypeStaticInstance_t4D73184CEB0D3868A493ADC3A45AC3C3D1979741* ILType_get_StaticInstance_mE531686F466AB38079A0A2DD593151FA74772390 (ILType_tD812655AF7716306B8168AD6F08152435B77708C* __this, const RuntimeMethod* method) ;
// System.Void ILRuntime.CLR.TypeSystem.CLRType::SetStaticFieldValue(System.Int32,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CLRType_SetStaticFieldValue_m69F0259BB4DFDEB2533D4E41639A4C6EEEF4535D (CLRType_t72C55A04EDC2A68F969A27FE7DB52F5A198D437F* __this, int32_t ___hash0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Void System.Array::SetValue(System.Object,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_SetValue_mE9507B366ED84E91E92BF32649D36916F96C67B8 (RuntimeArray* __this, RuntimeObject* ___value0, int32_t ___index1, const RuntimeMethod* method) ;
// System.Void ILRuntime.CLR.Method.CLRMethod::.ctor(System.Reflection.MethodInfo,ILRuntime.CLR.TypeSystem.CLRType,ILRuntime.Runtime.Enviorment.AppDomain)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CLRMethod__ctor_m246973F5914F20EFEBF8DDA88EBAEFA2C607C274 (CLRMethod_t7DF49A5C4FF255B056BFEE0BFDF137AEF905FFF5* __this, MethodInfo_t* ___def0, CLRType_t72C55A04EDC2A68F969A27FE7DB52F5A198D437F* ___type1, AppDomain_tFFEF01BA23D79DA3A22C21195FD262862037E506* ___domain2, const RuntimeMethod* method) ;
// System.Int32 System.Threading.Interlocked::Add(System.Int32&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interlocked_Add_m2455208C56EEFD8832AEAD8AF7368A3FEB33A73C (int32_t* ___location10, int32_t ___value1, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<System.Boolean>::get_HasValue()
inline bool Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_inline (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01*, const RuntimeMethod*))Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_gshared_inline)(__this, method);
}
// System.Boolean ILRuntime.CLR.Method.IMethodExtensions::IsExtendMethod(ILRuntime.CLR.Method.CLRMethod)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IMethodExtensions_IsExtendMethod_m98DD7B8FA21B9E94FB958EF5D341F967EF28AAFA (CLRMethod_t7DF49A5C4FF255B056BFEE0BFDF137AEF905FFF5* ___cm0, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<System.Boolean>::.ctor(T)
inline void Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5 (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01* __this, bool ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01*, bool, const RuntimeMethod*))Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5_gshared)(__this, ___value0, method);
}
// T System.Nullable`1<System.Boolean>::get_Value()
inline bool Nullable_1_get_Value_mE2C54C6AE9FC9F05BF44CD9D7D61DC6CD56E3E28 (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01*, const RuntimeMethod*))Nullable_1_get_Value_mE2C54C6AE9FC9F05BF44CD9D7D61DC6CD56E3E28_gshared)(__this, method);
}
// System.Boolean ILRuntime.CLR.Method.ILMethod::get_IsConstructor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ILMethod_get_IsConstructor_m1A57C7FA9560331115B2536F5218FF270666C135 (ILMethod_tA56B8FD062B67B88B2396AC1AFFCED9E4FE92AD7* __this, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Reflection.MethodInfo::op_Equality(System.Reflection.MethodInfo,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MethodInfo_op_Equality_m1466AB76300C9F07856E706E7E914062175189D1 (MethodInfo_t* ___left0, MethodInfo_t* ___right1, const RuntimeMethod* method) ;
// System.Void ILRuntime.Reflection.ILRuntimeMethodInfo::.ctor(ILRuntime.CLR.Method.ILMethod)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ILRuntimeMethodInfo__ctor_mC3C361767E84F8E35743AE1211BF276B94FD2439 (ILRuntimeMethodInfo_t5DFC4EC62846DEE24D20FD2F7824F81C90AECF48* __this, ILMethod_tA56B8FD062B67B88B2396AC1AFFCED9E4FE92AD7* ___m0, const RuntimeMethod* method) ;
// System.Boolean System.Reflection.ConstructorInfo::op_Equality(System.Reflection.ConstructorInfo,System.Reflection.ConstructorInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConstructorInfo_op_Equality_m6DD673A9263EE646773396F9D8DEE46FA48FFBF2 (ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* ___left0, ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* ___right1, const RuntimeMethod* method) ;
// System.Void ILRuntime.Reflection.ILRuntimeConstructorInfo::.ctor(ILRuntime.CLR.Method.ILMethod)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ILRuntimeConstructorInfo__ctor_m8C0D159585B1EDB0DDD31E49B4321DE9C84D3276 (ILRuntimeConstructorInfo_t8246144BC4A47C0292CE84CCC8AD31AFA6E9ACAA* __this, ILMethod_tA56B8FD062B67B88B2396AC1AFFCED9E4FE92AD7* ___m0, const RuntimeMethod* method) ;
// System.Boolean ILRuntime.CLR.Method.ILMethod::get_IsGenericInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ILMethod_get_IsGenericInstance_m40D284198369058542C1CE0BD42D4F7EA4CD9FDC (ILMethod_tA56B8FD062B67B88B2396AC1AFFCED9E4FE92AD7* __this, const RuntimeMethod* method) ;
// System.Int32 ILRuntime.Mono.Collections.Generic.Collection`1<ILRuntime.Mono.Cecil.GenericParameter>::get_Count()
inline int32_t Collection_1_get_Count_mE719EDC754A1D10587DA7C00812D88A4999FAA48_inline (Collection_1_tAF0023B9443046D2A5BC6C79ADE1460DA3165828* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Collection_1_tAF0023B9443046D2A5BC6C79ADE1460DA3165828*, const RuntimeMethod*))Collection_1_get_Count_m967DD3DE8A5BE9D547D4D4EC95C81A5B14FDA60E_gshared_inline)(__this, method);
}
// System.Void ILRuntime.CLR.Method.ILMethod::InitCodeBody(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ILMethod_InitCodeBody_m1F7FAAB73BD45A73D12864A973F86382BAC70917 (ILMethod_tA56B8FD062B67B88B2396AC1AFFCED9E4FE92AD7* __this, bool ___register0, const RuntimeMethod* method) ;
// ILRuntime.Runtime.Enviorment.AppDomain ILRuntime.CLR.Method.ILMethod::get_AppDomain()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AppDomain_tFFEF01BA23D79DA3A22C21195FD262862037E506* ILMethod_get_AppDomain_m2D77F9F5A8F239070B5BE03FA353FCB9CA4F2344_inline (ILMethod_tA56B8FD062B67B88B2396AC1AFFCED9E4FE92AD7* __this, const RuntimeMethod* method) ;
// System.Void ILRuntime.Runtime.Enviorment.AppDomain::EnqueueJITCompileJob(ILRuntime.CLR.Method.ILMethod)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppDomain_EnqueueJITCompileJob_mC2CA0EC25B3EB2AEE9FF0FC3A70AC15D77F46CE6 (AppDomain_tFFEF01BA23D79DA3A22C21195FD262862037E506* __this, ILMethod_tA56B8FD062B67B88B2396AC1AFFCED9E4FE92AD7* ___method0, const RuntimeMethod* method) ;
// ILRuntime.Mono.Cecil.TypeReference ILRuntime.Mono.Cecil.MethodReference::get_ReturnType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeReference_tF82E3E035A581A717CE653CEFC3843CE4E460F91* MethodReference_get_ReturnType_m9C100121D93CB8ED2D4ACB85CF5FBDFE551F20DA (MethodReference_t622A5B7BD95CF4A7E4210CF3DDBD91A0018D9783* __this, const RuntimeMethod* method) ;
// ILRuntime.CLR.TypeSystem.IType ILRuntime.CLR.Method.ILMethod::FindGenericArgument(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ILMethod_FindGenericArgument_mA14178CACC778ED8DD7029F4D44EA5F21B73486F (ILMethod_tA56B8FD062B67B88B2396AC1AFFCED9E4FE92AD7* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Void ILRuntime.CLR.Method.ILMethod::set_ReturnType(ILRuntime.CLR.TypeSystem.IType)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ILMethod_set_ReturnType_mAC96B2A8A1372938DB97FA88CA042D025CDD0E40_inline (ILMethod_tA56B8FD062B67B88B2396AC1AFFCED9E4FE92AD7* __this, RuntimeObject* ___value0, const RuntimeMethod* method) ;
// ILRuntime.CLR.TypeSystem.IType ILRuntime.Runtime.Enviorment.AppDomain::GetType(System.Object,ILRuntime.CLR.TypeSystem.IType,ILRuntime.CLR.Method.IMethod)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AppDomain_GetType_m0CF8800358B9E64FE1C5257FDCD210A37C25385B (AppDomain_tFFEF01BA23D79DA3A22C21195FD262862037E506* __this, RuntimeObject* ___token0, RuntimeObject* ___contextType1, RuntimeObject* ___contextMethod2, const RuntimeMethod* method) ;
// System.Boolean ILRuntime.CLR.TypeSystem.ILType::get_IsDelegate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ILType_get_IsDelegate_m8BE9E2C142D12D8F154422617F00F5C54F7FF512 (ILType_tD812655AF7716306B8168AD6F08152435B77708C* __this, const RuntimeMethod* method) ;
// System.Int32 ILRuntime.Mono.Collections.Generic.Collection`1<ILRuntime.Mono.Cecil.ParameterDefinition>::get_Count()
inline int32_t Collection_1_get_Count_m003D9033DAFBB663E0C45CF6EAA4C179A197CB5E_inline (Collection_1_t07922683F6D8F9416D093E2327FCBCCAC03146F1* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Collection_1_t07922683F6D8F9416D093E2327FCBCCAC03146F1*, const RuntimeMethod*))Collection_1_get_Count_m967DD3DE8A5BE9D547D4D4EC95C81A5B14FDA60E_gshared_inline)(__this, method);
}
// System.Boolean ILRuntime.Mono.Cecil.MethodDefinition::get_HasCustomAttributes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MethodDefinition_get_HasCustomAttributes_mB6618BE4287BDDEF5DB627A8EE4223B998D5D431 (MethodDefinition_t20ECAB62A2A1BBEB383A1A979167D658ACCF3244* __this, const RuntimeMethod* method) ;
// ILRuntime.Mono.Collections.Generic.Collection`1<ILRuntime.Mono.Cecil.CustomAttribute> ILRuntime.Mono.Cecil.MethodDefinition::get_CustomAttributes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collection_1_t0337BC9E2B8889D1AFAD653F1B760A6C09E46E7F* MethodDefinition_get_CustomAttributes_m1A95A1495906BE92DD50D25470473F7D72534A1C (MethodDefinition_t20ECAB62A2A1BBEB383A1A979167D658ACCF3244* __this, const RuntimeMethod* method) ;
// T ILRuntime.Mono.Collections.Generic.Collection`1<ILRuntime.Mono.Cecil.CustomAttribute>::get_Item(System.Int32)
inline CustomAttribute_t8966CC52D0DB2846953049A29347308658F9014F* Collection_1_get_Item_mAE97E3B8BBEED70FD71268FCF2166A46760DBC08 (Collection_1_t0337BC9E2B8889D1AFAD653F1B760A6C09E46E7F* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  CustomAttribute_t8966CC52D0DB2846953049A29347308658F9014F* (*) (Collection_1_t0337BC9E2B8889D1AFAD653F1B760A6C09E46E7F*, int32_t, const RuntimeMethod*))Collection_1_get_Item_m521D781FB8FB2FE7292D4068B242B8E78CC1AAFB_gshared)(__this, ___index0, method);
}
// System.Boolean ILRuntime.Runtime.Extensions::GetJITFlags(ILRuntime.Mono.Cecil.CustomAttribute,ILRuntime.Runtime.Enviorment.AppDomain,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Extensions_GetJITFlags_m580F9C3CE95D91F28D79BCE398FF9926B2FC3417 (CustomAttribute_t8966CC52D0DB2846953049A29347308658F9014F* ___attribute0, AppDomain_tFFEF01BA23D79DA3A22C21195FD262862037E506* ___appdomain1, int32_t* ___flags2, const RuntimeMethod* method) ;
// System.Int32 ILRuntime.Mono.Collections.Generic.Collection`1<ILRuntime.Mono.Cecil.CustomAttribute>::get_Count()
inline int32_t Collection_1_get_Count_mCC17E3A5E2B00A3D60C12ABD99FC83E21267C8E3_inline (Collection_1_t0337BC9E2B8889D1AFAD653F1B760A6C09E46E7F* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Collection_1_t0337BC9E2B8889D1AFAD653F1B760A6C09E46E7F*, const RuntimeMethod*))Collection_1_get_Count_m967DD3DE8A5BE9D547D4D4EC95C81A5B14FDA60E_gshared_inline)(__this, method);
}
// System.Void ILRuntime.Runtime.Intepreter.RegisterVM.JITCompiler::FixSymbol(System.Collections.Generic.Dictionary`2<System.Int32,ILRuntime.Runtime.Intepreter.RegisterVM.RegisterVMSymbol>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JITCompiler_FixSymbol_mE05B135A02A7A9750D22F483CF2B9ED5DEE11E75 (Dictionary_2_tEEB88CF46F6DA1D57225A58A73623EA721DEF951* ___symbol0, const RuntimeMethod* method) ;
// ILRuntime.Mono.Cecil.Cil.MethodDebugInformation ILRuntime.Mono.Cecil.MethodDefinition::get_DebugInformation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodDebugInformation_t338182D1EF8BB76B457F22D8592DB2D91326C50D* MethodDefinition_get_DebugInformation_m5143664D2646D9FE29DF1D0C9C818B007A225EE3 (MethodDefinition_t20ECAB62A2A1BBEB383A1A979167D658ACCF3244* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IDictionary`2<ILRuntime.Mono.Cecil.Cil.Instruction,ILRuntime.Mono.Cecil.Cil.SequencePoint> ILRuntime.Mono.Cecil.Cil.MethodDebugInformation::GetSequencePointMapping()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MethodDebugInformation_GetSequencePointMapping_mFD82804D6FA4A14052FAD5895429A147D35FC93E (MethodDebugInformation_t338182D1EF8BB76B457F22D8592DB2D91326C50D* __this, const RuntimeMethod* method) ;
// ILRuntime.Mono.Cecil.Cil.MethodBody ILRuntime.Mono.Cecil.MethodDefinition::get_Body()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodBody_tB818BF5E1248D874E371C7F3BC0C5C6240BB8F16* MethodDefinition_get_Body_m2230AD544D044BCCF1DF19D233FD474055BE404B (MethodDefinition_t20ECAB62A2A1BBEB383A1A979167D658ACCF3244* __this, const RuntimeMethod* method) ;
// ILRuntime.Mono.Collections.Generic.Collection`1<ILRuntime.Mono.Cecil.Cil.Instruction> ILRuntime.Mono.Cecil.Cil.MethodBody::get_Instructions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collection_1_tF5DDA42267FA4FB2EEA852938E458549573DB51F* MethodBody_get_Instructions_m1B9F3083080FE9D7E7E0180E6AAE97AC1CD37991 (MethodBody_tB818BF5E1248D874E371C7F3BC0C5C6240BB8F16* __this, const RuntimeMethod* method) ;
// T ILRuntime.Mono.Collections.Generic.Collection`1<ILRuntime.Mono.Cecil.Cil.Instruction>::get_Item(System.Int32)
inline Instruction_tAA84FA05703612EBA9700BB65C31560D5AA0ACC6* Collection_1_get_Item_mFB170286F10CA68315AAE9DC233BF1AB596F37B5 (Collection_1_tF5DDA42267FA4FB2EEA852938E458549573DB51F* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Instruction_tAA84FA05703612EBA9700BB65C31560D5AA0ACC6* (*) (Collection_1_tF5DDA42267FA4FB2EEA852938E458549573DB51F*, int32_t, const RuntimeMethod*))Collection_1_get_Item_m521D781FB8FB2FE7292D4068B242B8E78CC1AAFB_gshared)(__this, ___index0, method);
}
// ILRuntime.Mono.Cecil.Cil.SequencePoint ILRuntime.Runtime.Debugger.DebugService::FindSequencePoint(ILRuntime.Mono.Cecil.Cil.Instruction,System.Collections.Generic.IDictionary`2<ILRuntime.Mono.Cecil.Cil.Instruction,ILRuntime.Mono.Cecil.Cil.SequencePoint>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SequencePoint_t118B2D7765CB0A5F233E4AD1DAACE8615FD1C3E1* DebugService_FindSequencePoint_m36339E360BD5D8132E7E19520886290C1DFA88CC (Instruction_tAA84FA05703612EBA9700BB65C31560D5AA0ACC6* ___ins0, RuntimeObject* ___seqMapping1, const RuntimeMethod* method) ;
// System.Int32 ILRuntime.Mono.Collections.Generic.Collection`1<ILRuntime.Mono.Cecil.Cil.Instruction>::get_Count()
inline int32_t Collection_1_get_Count_m2B375C259B69A1D1AAFF357D42EE581534FDAF06_inline (Collection_1_tF5DDA42267FA4FB2EEA852938E458549573DB51F* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Collection_1_tF5DDA42267FA4FB2EEA852938E458549573DB51F*, const RuntimeMethod*))Collection_1_get_Count_m967DD3DE8A5BE9D547D4D4EC95C81A5B14FDA60E_gshared_inline)(__this, method);
}
// System.Int32 ILRuntime.Mono.Cecil.Cil.SequencePoint::get_StartLine()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SequencePoint_get_StartLine_m49140029B5143D0D72069B8A57ABDBD1A5637FC0_inline (SequencePoint_t118B2D7765CB0A5F233E4AD1DAACE8615FD1C3E1* __this, const RuntimeMethod* method) ;
// ILRuntime.CLR.TypeSystem.IType ILRuntime.CLR.TypeSystem.ILType::FindGenericArgument(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ILType_FindGenericArgument_m413FBA4359A075CA9165895C353C8F04535C0D52 (ILType_tD812655AF7716306B8168AD6F08152435B77708C* __this, String_t* ___key0, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<System.String,ILRuntime.CLR.TypeSystem.IType>::get_Key()
inline String_t* KeyValuePair_2_get_Key_mA59894DE3E275AB10E1084984DFA2F43FB1B69A4_inline (KeyValuePair_2_tE28C7DA12E13817FD3C7A77CBB509ED7784C2AB5* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_tE28C7DA12E13817FD3C7A77CBB509ED7784C2AB5*, const RuntimeMethod*))KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.String,ILRuntime.CLR.TypeSystem.IType>::get_Value()
inline RuntimeObject* KeyValuePair_2_get_Value_mFA82406BB472516B580931517D30FB07558410C5_inline (KeyValuePair_2_tE28C7DA12E13817FD3C7A77CBB509ED7784C2AB5* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (KeyValuePair_2_tE28C7DA12E13817FD3C7A77CBB509ED7784C2AB5*, const RuntimeMethod*))KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline)(__this, method);
}
// System.Boolean ILRuntime.Mono.Cecil.MethodDefinition::get_IsConstructor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MethodDefinition_get_IsConstructor_mCB149120C310A4D0B0E93537277788268E136831 (MethodDefinition_t20ECAB62A2A1BBEB383A1A979167D658ACCF3244* __this, const RuntimeMethod* method) ;
// System.Boolean ILRuntime.Mono.Cecil.MethodDefinition::get_IsVirtual()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MethodDefinition_get_IsVirtual_m58EFC3AE15D4913746A936C41539A7047409A962 (MethodDefinition_t20ECAB62A2A1BBEB383A1A979167D658ACCF3244* __this, const RuntimeMethod* method) ;
// System.Boolean ILRuntime.Mono.Cecil.MethodDefinition::get_IsStatic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MethodDefinition_get_IsStatic_mFD3EA590101EB19820695E20AA6D432BC488B309 (MethodDefinition_t20ECAB62A2A1BBEB383A1A979167D658ACCF3244* __this, const RuntimeMethod* method) ;
// System.Void ILRuntime.CLR.Method.ILMethod::InitParameters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ILMethod_InitParameters_m0567C9FC09025B3B61FE067D01222B88F1D1BA01 (ILMethod_tA56B8FD062B67B88B2396AC1AFFCED9E4FE92AD7* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.HashSet`1<ILRuntime.CLR.Method.ILMethod>::.ctor()
inline void HashSet_1__ctor_mF893C3501F1243F52B8E9A0CAE7DF1F7673EE8E1 (HashSet_1_t2672434E7FA2BDC91784300DAB040065F53CA23A* __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t2672434E7FA2BDC91784300DAB040065F53CA23A*, const RuntimeMethod*))HashSet_1__ctor_m9132EE1422BAA45E44B7FFF495F378790D36D90E_gshared)(__this, method);
}
// System.Void ILRuntime.CLR.Method.ILMethod::Prewarm(System.Collections.Generic.HashSet`1<ILRuntime.CLR.Method.ILMethod>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ILMethod_Prewarm_m8B93DCA38382F1A603C1890B034A0D4BD5106D78 (ILMethod_tA56B8FD062B67B88B2396AC1AFFCED9E4FE92AD7* __this, HashSet_1_t2672434E7FA2BDC91784300DAB040065F53CA23A* ___alreadyPrewarmed0, const RuntimeMethod* method) ;
// ILRuntime.Runtime.Intepreter.OpCodes.OpCode[] ILRuntime.CLR.Method.ILMethod::get_Body()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OpCodeU5BU5D_tA0A660D228D31635BC51D02B26E5D715E3EA7C4D* ILMethod_get_Body_mBA80F612949FE14C50AB7B66B6814EF70070795E (ILMethod_tA56B8FD062B67B88B2396AC1AFFCED9E4FE92AD7* __this, const RuntimeMethod* method) ;
// ILRuntime.CLR.Method.IMethod ILRuntime.Runtime.Enviorment.AppDomain::GetMethod(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AppDomain_GetMethod_mABACE30254ADD75967E64EFAC313F925C9B702DC (AppDomain_tFFEF01BA23D79DA3A22C21195FD262862037E506* __this, int32_t ___tokenHash0, const RuntimeMethod* method) ;
// ILRuntime.CLR.TypeSystem.IType ILRuntime.CLR.Method.CLRMethod::get_DeclearingType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CLRMethod_get_DeclearingType_mC1EA3C987B8420A99B021251423B89A05F61A297_inline (CLRMethod_t7DF49A5C4FF255B056BFEE0BFDF137AEF905FFF5* __this, const RuntimeMethod* method) ;
// ILRuntime.CLR.Utils.Extensions/TypeFlags ILRuntime.CLR.Utils.Extensions::GetTypeFlags(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Extensions_GetTypeFlags_mBA0B8A943BD59B7B52814B176196A6AD039387C4 (Type_t* ___pt0, const RuntimeMethod* method) ;
// ILRuntime.Runtime.Intepreter.OpCodes.OpCodeR[] ILRuntime.CLR.Method.ILMethod::get_BodyRegister()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OpCodeRU5BU5D_t9144130E7DF3ABF7AF0E3EFC8AF0C63759AA6AC1* ILMethod_get_BodyRegister_m50E30C1DB4663852460C1D57FCB785D2CE1D9F70 (ILMethod_tA56B8FD062B67B88B2396AC1AFFCED9E4FE92AD7* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<ILRuntime.CLR.Method.ILMethod>::Add(T)
inline bool HashSet_1_Add_m69F65CDD0374F5E7F4F4D6302BFFA838BBE0216F (HashSet_1_t2672434E7FA2BDC91784300DAB040065F53CA23A* __this, ILMethod_tA56B8FD062B67B88B2396AC1AFFCED9E4FE92AD7* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t2672434E7FA2BDC91784300DAB040065F53CA23A*, ILMethod_tA56B8FD062B67B88B2396AC1AFFCED9E4FE92AD7*, const RuntimeMethod*))HashSet_1_Add_m2CD7657B3459B61DD4BBA47024AC71F7D319658B_gshared)(__this, ___item0, method);
}
// System.Int32 ILRuntime.CLR.Method.ILMethod::get_GenericParameterCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ILMethod_get_GenericParameterCount_m2D281BF43D3E831E6D51297BD5BB114CBC508CB3 (ILMethod_tA56B8FD062B67B88B2396AC1AFFCED9E4FE92AD7* __this, const RuntimeMethod* method) ;
// ILRuntime.Mono.Collections.Generic.Collection`1<ILRuntime.Mono.Cecil.Cil.VariableDefinition> ILRuntime.CLR.Method.ILMethod::get_Variables()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Collection_1_t413B13D425BA31F81271569D26FE2157469EB23C* ILMethod_get_Variables_m8A0181A11F5E65FBBE84683B5D9259FD0923FE49_inline (ILMethod_tA56B8FD062B67B88B2396AC1AFFCED9E4FE92AD7* __this, const RuntimeMethod* method) ;
// T ILRuntime.Mono.Collections.Generic.Collection`1<ILRuntime.Mono.Cecil.Cil.VariableDefinition>::get_Item(System.Int32)
inline VariableDefinition_tAF3B7BC011FA749BB788E1845596F48A86BA0A58* Collection_1_get_Item_m678B4F2D493069B97DB22FC88CBE03A95DD99830 (Collection_1_t413B13D425BA31F81271569D26FE2157469EB23C* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  VariableDefinition_tAF3B7BC011FA749BB788E1845596F48A86BA0A58* (*) (Collection_1_t413B13D425BA31F81271569D26FE2157469EB23C*, int32_t, const RuntimeMethod*))Collection_1_get_Item_m521D781FB8FB2FE7292D4068B242B8E78CC1AAFB_gshared)(__this, ___index0, method);
}
// ILRuntime.Mono.Cecil.TypeReference ILRuntime.Mono.Cecil.Cil.VariableReference::get_VariableType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TypeReference_tF82E3E035A581A717CE653CEFC3843CE4E460F91* VariableReference_get_VariableType_mC884228C8ECE97F9D071B35187F8BA23EE411F89_inline (VariableReference_t435D3702B5E65CC6255D3B92104FB4A97B7CEAFC* __this, const RuntimeMethod* method) ;
// ILRuntime.CLR.TypeSystem.IType ILRuntime.CLR.Method.ILMethod::get_DeclearingType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ILMethod_get_DeclearingType_m47BEDAF621AFAB5289C976E1C3D2EBBD2DFDA1AE_inline (ILMethod_tA56B8FD062B67B88B2396AC1AFFCED9E4FE92AD7* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.FieldInfo> ILRuntime.CLR.TypeSystem.CLRType::get_Fields()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t388E31CE91169A6FDC01F4480E46D1BE3AEF76F9* CLRType_get_Fields_m4AD95D2B9ACD1012F94EEA77BB889F954A5B10AE (CLRType_t72C55A04EDC2A68F969A27FE7DB52F5A198D437F* __this, const RuntimeMethod* method) ;
// System.Int32 ILRuntime.CLR.Method.ILMethod::get_LocalVariableCount()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ILMethod_get_LocalVariableCount_m68F32BF5041349D1C171C418CC69F7132F4CC44B_inline (ILMethod_tA56B8FD062B67B88B2396AC1AFFCED9E4FE92AD7* __this, const RuntimeMethod* method) ;
// System.Void ILRuntime.CLR.Method.ILMethod::PrewarmBodyRegister(System.Collections.Generic.HashSet`1<ILRuntime.CLR.Method.ILMethod>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ILMethod_PrewarmBodyRegister_m0ED88A8369A17E76CE08663B3229FD1AC5280CA7 (ILMethod_tA56B8FD062B67B88B2396AC1AFFCED9E4FE92AD7* __this, HashSet_1_t2672434E7FA2BDC91784300DAB040065F53CA23A* ___alreadyPrewarmed0, const RuntimeMethod* method) ;
// System.Void ILRuntime.CLR.Method.ILMethod::PrewarmBody(System.Collections.Generic.HashSet`1<ILRuntime.CLR.Method.ILMethod>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ILMethod_PrewarmBody_mECB768A05A580845D24EF394483405E5A85527DC (ILMethod_tA56B8FD062B67B88B2396AC1AFFCED9E4FE92AD7* __this, HashSet_1_t2672434E7FA2BDC91784300DAB040065F53CA23A* ___alreadyPrewarmed0, const RuntimeMethod* method) ;
// System.Boolean ILRuntime.Mono.Cecil.MethodDefinition::get_HasBody()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MethodDefinition_get_HasBody_m54400707C5F0F89C4261504BFE3A5F6D2406104F (MethodDefinition_t20ECAB62A2A1BBEB383A1A979167D658ACCF3244* __this, const RuntimeMethod* method) ;
// ILRuntime.Mono.Collections.Generic.Collection`1<ILRuntime.Mono.Cecil.Cil.VariableDefinition> ILRuntime.Mono.Cecil.Cil.MethodBody::get_Variables()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collection_1_t413B13D425BA31F81271569D26FE2157469EB23C* MethodBody_get_Variables_mFFB10230E11ACF2DF96348F54C476D1E4FF9A757 (MethodBody_tB818BF5E1248D874E371C7F3BC0C5C6240BB8F16* __this, const RuntimeMethod* method) ;
// System.Int32 ILRuntime.Mono.Collections.Generic.Collection`1<ILRuntime.Mono.Cecil.Cil.VariableDefinition>::get_Count()
inline int32_t Collection_1_get_Count_mD783638DF1A29022277C89E124B16C27999F831F_inline (Collection_1_t413B13D425BA31F81271569D26FE2157469EB23C* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Collection_1_t413B13D425BA31F81271569D26FE2157469EB23C*, const RuntimeMethod*))Collection_1_get_Count_m967DD3DE8A5BE9D547D4D4EC95C81A5B14FDA60E_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<ILRuntime.Mono.Cecil.Cil.Instruction,System.Int32>::.ctor()
inline void Dictionary_2__ctor_m4B1AFE2030F99E8F3681722B9977BAF3A7F6718E (Dictionary_2_t5B089D76260FC645B19FAE71638DFBBFEA74D852* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5B089D76260FC645B19FAE71638DFBBFEA74D852*, const RuntimeMethod*))Dictionary_2__ctor_m517E7F9D104FEAE6646EABDDC9C852510E86077C_gshared)(__this, method);
}
// System.Void ILRuntime.Runtime.Intepreter.RegisterVM.JITCompiler::.ctor(ILRuntime.Runtime.Enviorment.AppDomain,ILRuntime.CLR.TypeSystem.ILType,ILRuntime.CLR.Method.ILMethod)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JITCompiler__ctor_m5EACDD500E97DE7A10B5C27156A162188D871649 (JITCompiler_tC86D7253C6877F1CFF8CA4617CD766CC7460B965* __this, AppDomain_tFFEF01BA23D79DA3A22C21195FD262862037E506* ___appDomain0, ILType_tD812655AF7716306B8168AD6F08152435B77708C* ___declaringType1, ILMethod_tA56B8FD062B67B88B2396AC1AFFCED9E4FE92AD7* ___method2, const RuntimeMethod* method) ;
// ILRuntime.Runtime.Intepreter.OpCodes.OpCodeR[] ILRuntime.Runtime.Intepreter.RegisterVM.JITCompiler::Compile(System.Int32&,System.Collections.Generic.Dictionary`2<System.Int32,System.Int32[]>&,System.Collections.Generic.Dictionary`2<ILRuntime.Mono.Cecil.Cil.Instruction,System.Int32>,System.Collections.Generic.Dictionary`2<System.Int32,ILRuntime.Runtime.Intepreter.RegisterVM.RegisterVMSymbol>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OpCodeRU5BU5D_t9144130E7DF3ABF7AF0E3EFC8AF0C63759AA6AC1* JITCompiler_Compile_m82A2F857B70F39D5F3E6083BBABECE2BAC3C7F1C (JITCompiler_tC86D7253C6877F1CFF8CA4617CD766CC7460B965* __this, int32_t* ___stackRegisterCnt0, Dictionary_2_t029F6A37F043A1B571A7DB746955ECB8DC548AD9** ___switchTargets1, Dictionary_2_t5B089D76260FC645B19FAE71638DFBBFEA74D852* ___addr2, Dictionary_2_tEEB88CF46F6DA1D57225A58A73623EA721DEF951** ___symbols3, const RuntimeMethod* method) ;
// System.Void ILRuntime.CLR.Method.ILMethod::InitStackCodeBody(System.Collections.Generic.Dictionary`2<ILRuntime.Mono.Cecil.Cil.Instruction,System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ILMethod_InitStackCodeBody_m81E7A99FBC70BB12A081DC84390D5EC7FFB12919 (ILMethod_tA56B8FD062B67B88B2396AC1AFFCED9E4FE92AD7* __this, Dictionary_2_t5B089D76260FC645B19FAE71638DFBBFEA74D852* ___addr0, const RuntimeMethod* method) ;
// ILRuntime.Mono.Collections.Generic.Collection`1<ILRuntime.Mono.Cecil.Cil.ExceptionHandler> ILRuntime.Mono.Cecil.Cil.MethodBody::get_ExceptionHandlers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collection_1_t5C54232BE7649E8BCD655EC300132C2E30EC319F* MethodBody_get_ExceptionHandlers_m2AA0D7642BE1BAC29A717A215E3473793354E001 (MethodBody_tB818BF5E1248D874E371C7F3BC0C5C6240BB8F16* __this, const RuntimeMethod* method) ;
// System.Int32 ILRuntime.Mono.Collections.Generic.Collection`1<ILRuntime.Mono.Cecil.Cil.ExceptionHandler>::get_Count()
inline int32_t Collection_1_get_Count_m6104D73EF401C14E46C6436001A13D5A3F8A056A_inline (Collection_1_t5C54232BE7649E8BCD655EC300132C2E30EC319F* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Collection_1_t5C54232BE7649E8BCD655EC300132C2E30EC319F*, const RuntimeMethod*))Collection_1_get_Count_m967DD3DE8A5BE9D547D4D4EC95C81A5B14FDA60E_gshared_inline)(__this, method);
}
// T ILRuntime.Mono.Collections.Generic.Collection`1<ILRuntime.Mono.Cecil.Cil.ExceptionHandler>::get_Item(System.Int32)
inline ExceptionHandler_tCC68B4480346581EEA699654AE4E53AE4229E04F* Collection_1_get_Item_mF76AF89A635ED70B85833B34FE18F867DF6EB1C9 (Collection_1_t5C54232BE7649E8BCD655EC300132C2E30EC319F* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  ExceptionHandler_tCC68B4480346581EEA699654AE4E53AE4229E04F* (*) (Collection_1_t5C54232BE7649E8BCD655EC300132C2E30EC319F*, int32_t, const RuntimeMethod*))Collection_1_get_Item_m521D781FB8FB2FE7292D4068B242B8E78CC1AAFB_gshared)(__this, ___index0, method);
}
// System.Void ILRuntime.CLR.Method.ExceptionHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionHandler__ctor_m7588697CEACF57BAAC73CE205962AAED7022DADD (ExceptionHandler_tB7222B56682A0D18CF20D9FD22EC650A924A5C7D* __this, const RuntimeMethod* method) ;
// ILRuntime.Mono.Cecil.Cil.Instruction ILRuntime.Mono.Cecil.Cil.ExceptionHandler::get_HandlerStart()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Instruction_tAA84FA05703612EBA9700BB65C31560D5AA0ACC6* ExceptionHandler_get_HandlerStart_m9077C46C0CB011140C0D23065E1ADF43A4988E1B_inline (ExceptionHandler_tCC68B4480346581EEA699654AE4E53AE4229E04F* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<ILRuntime.Mono.Cecil.Cil.Instruction,System.Int32>::get_Item(TKey)
inline int32_t Dictionary_2_get_Item_mADC5C691258B61F41E9BEAEDA7D77752179C58D6 (Dictionary_2_t5B089D76260FC645B19FAE71638DFBBFEA74D852* __this, Instruction_tAA84FA05703612EBA9700BB65C31560D5AA0ACC6* ___key0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t5B089D76260FC645B19FAE71638DFBBFEA74D852*, Instruction_tAA84FA05703612EBA9700BB65C31560D5AA0ACC6*, const RuntimeMethod*))Dictionary_2_get_Item_mA019F7A495B48EF2A6E5D36977DB3EA09A47ECDB_gshared)(__this, ___key0, method);
}
// System.Void ILRuntime.CLR.Method.ExceptionHandler::set_HandlerStart(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ExceptionHandler_set_HandlerStart_m3CB97FBD951D52CE39641D648293B10391EAE971_inline (ExceptionHandler_tB7222B56682A0D18CF20D9FD22EC650A924A5C7D* __this, int32_t ___value0, const RuntimeMethod* method) ;
// ILRuntime.Mono.Cecil.Cil.Instruction ILRuntime.Mono.Cecil.Cil.ExceptionHandler::get_HandlerEnd()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Instruction_tAA84FA05703612EBA9700BB65C31560D5AA0ACC6* ExceptionHandler_get_HandlerEnd_mEB9F653A69A06E7BA5F7B3FECC195966514FB958_inline (ExceptionHandler_tCC68B4480346581EEA699654AE4E53AE4229E04F* __this, const RuntimeMethod* method) ;
// System.Void ILRuntime.CLR.Method.ExceptionHandler::set_HandlerEnd(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ExceptionHandler_set_HandlerEnd_mA3E4CA82B92936DBD2B7C638D9E6CA51D097B0EA_inline (ExceptionHandler_tB7222B56682A0D18CF20D9FD22EC650A924A5C7D* __this, int32_t ___value0, const RuntimeMethod* method) ;
// ILRuntime.Mono.Cecil.Cil.Instruction ILRuntime.Mono.Cecil.Cil.ExceptionHandler::get_TryStart()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Instruction_tAA84FA05703612EBA9700BB65C31560D5AA0ACC6* ExceptionHandler_get_TryStart_m3B6DE3DDA77825C59E390F15849CF123EA06D73C_inline (ExceptionHandler_tCC68B4480346581EEA699654AE4E53AE4229E04F* __this, const RuntimeMethod* method) ;
// System.Void ILRuntime.CLR.Method.ExceptionHandler::set_TryStart(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ExceptionHandler_set_TryStart_mEA428C865E60D3BC637301D915F007B3367F58BD_inline (ExceptionHandler_tB7222B56682A0D18CF20D9FD22EC650A924A5C7D* __this, int32_t ___value0, const RuntimeMethod* method) ;
// ILRuntime.Mono.Cecil.Cil.Instruction ILRuntime.Mono.Cecil.Cil.ExceptionHandler::get_TryEnd()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Instruction_tAA84FA05703612EBA9700BB65C31560D5AA0ACC6* ExceptionHandler_get_TryEnd_mE568F7495E0715221987FCF2488EF1508959A004_inline (ExceptionHandler_tCC68B4480346581EEA699654AE4E53AE4229E04F* __this, const RuntimeMethod* method) ;
// System.Void ILRuntime.CLR.Method.ExceptionHandler::set_TryEnd(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ExceptionHandler_set_TryEnd_mA9F6DC9D3444D2CD6497E88234B508A2C5439DE7_inline (ExceptionHandler_tB7222B56682A0D18CF20D9FD22EC650A924A5C7D* __this, int32_t ___value0, const RuntimeMethod* method) ;
// ILRuntime.Mono.Cecil.Cil.ExceptionHandlerType ILRuntime.Mono.Cecil.Cil.ExceptionHandler::get_HandlerType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ExceptionHandler_get_HandlerType_mACFCDC40A68537732DA482458A0BB299CC0E3710_inline (ExceptionHandler_tCC68B4480346581EEA699654AE4E53AE4229E04F* __this, const RuntimeMethod* method) ;
// ILRuntime.Mono.Cecil.TypeReference ILRuntime.Mono.Cecil.Cil.ExceptionHandler::get_CatchType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TypeReference_tF82E3E035A581A717CE653CEFC3843CE4E460F91* ExceptionHandler_get_CatchType_mC30D22E4A69E04F4E2509E094609EF48EE09BA1C_inline (ExceptionHandler_tCC68B4480346581EEA699654AE4E53AE4229E04F* __this, const RuntimeMethod* method) ;
// System.Void ILRuntime.CLR.Method.ExceptionHandler::set_CatchType(ILRuntime.CLR.TypeSystem.IType)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ExceptionHandler_set_CatchType_m30E5EF5C99A5BCC4D89B2E7E13888F67B315DFC0_inline (ExceptionHandler_tB7222B56682A0D18CF20D9FD22EC650A924A5C7D* __this, RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Void ILRuntime.CLR.Method.ExceptionHandler::set_HandlerType(ILRuntime.CLR.Method.ExceptionHandlerType)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ExceptionHandler_set_HandlerType_m5C6AF51DFA74A298E65D9A735D7726CCB7633764_inline (ExceptionHandler_tB7222B56682A0D18CF20D9FD22EC650A924A5C7D* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void ILRuntime.Mono.Cecil.MethodDefinition::set_Body(ILRuntime.Mono.Cecil.Cil.MethodBody)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MethodDefinition_set_Body_mCE247A64A8262FAE7EEE95237A3A3250460CEA99 (MethodDefinition_t20ECAB62A2A1BBEB383A1A979167D658ACCF3244* __this, MethodBody_tB818BF5E1248D874E371C7F3BC0C5C6240BB8F16* ___value0, const RuntimeMethod* method) ;
// ILRuntime.Mono.Cecil.Cil.OpCode ILRuntime.Mono.Cecil.Cil.Instruction::get_OpCode()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR OpCode_t9B1522253DF23368D786BB5D1DF051781F1D3EA9 Instruction_get_OpCode_mE204C6C94777DF469A4011D6DBC08500B1187586_inline (Instruction_tAA84FA05703612EBA9700BB65C31560D5AA0ACC6* __this, const RuntimeMethod* method) ;
// ILRuntime.Mono.Cecil.Cil.Code ILRuntime.Mono.Cecil.Cil.OpCode::get_Code()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t OpCode_get_Code_mCD6F937B2F495740EBBE40050D4D748C1563B8D6_inline (OpCode_t9B1522253DF23368D786BB5D1DF051781F1D3EA9* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<ILRuntime.Mono.Cecil.Cil.Instruction,System.Int32>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m128B6075B2D3E884FA44A8C4BF145D871AA9274A (Dictionary_2_t5B089D76260FC645B19FAE71638DFBBFEA74D852* __this, Instruction_tAA84FA05703612EBA9700BB65C31560D5AA0ACC6* ___key0, int32_t ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5B089D76260FC645B19FAE71638DFBBFEA74D852*, Instruction_tAA84FA05703612EBA9700BB65C31560D5AA0ACC6*, int32_t, const RuntimeMethod*))Dictionary_2_set_Item_m72CC2F1213D1C1B8ABEDE31082D07B67EC873B13_gshared)(__this, ___key0, ___value1, method);
}
// System.Object ILRuntime.Mono.Cecil.Cil.Instruction::get_Operand()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Instruction_get_Operand_m0461C42D44AE75A597C330499680991C9D1BF00A_inline (Instruction_tAA84FA05703612EBA9700BB65C31560D5AA0ACC6* __this, const RuntimeMethod* method) ;
// System.Void ILRuntime.CLR.Method.ILMethod::InitToken(ILRuntime.Runtime.Intepreter.OpCodes.OpCode&,System.Object,System.Collections.Generic.Dictionary`2<ILRuntime.Mono.Cecil.Cil.Instruction,System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ILMethod_InitToken_m51FCFA50E29DC10DDA4B99208AD09DE662D0A9E3 (ILMethod_tA56B8FD062B67B88B2396AC1AFFCED9E4FE92AD7* __this, OpCode_t34FC4B6966640D468676BA39661AF3946A3943A7* ___code0, RuntimeObject* ___token1, Dictionary_2_t5B089D76260FC645B19FAE71638DFBBFEA74D852* ___addr2, const RuntimeMethod* method) ;
// System.Int32 ILRuntime.Mono.Cecil.Cil.VariableReference::get_Index()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t VariableReference_get_Index_m9587EF28FDCE9CEAA06D6B282B104451317024D7_inline (VariableReference_t435D3702B5E65CC6255D3B92104FB4A97B7CEAFC* __this, const RuntimeMethod* method) ;
// System.Int32 ILRuntime.Mono.Cecil.ParameterReference::get_Index()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ParameterReference_get_Index_m2AA4C5349F8D03E4CABED027BED846214675F29C_inline (ParameterReference_tC6D1DC81D82FDDADAF2EE8CFF4BF7DA7A3BECA24* __this, const RuntimeMethod* method) ;
// System.Boolean ILRuntime.CLR.Method.ILMethod::get_HasThis()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ILMethod_get_HasThis_mC92E1A5BC0128888C615C33F62C298A466CD1BDB (ILMethod_tA56B8FD062B67B88B2396AC1AFFCED9E4FE92AD7* __this, const RuntimeMethod* method) ;
// ILRuntime.CLR.Method.IMethod ILRuntime.Runtime.Enviorment.AppDomain::GetMethod(System.Object,ILRuntime.CLR.TypeSystem.ILType,ILRuntime.CLR.Method.ILMethod,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AppDomain_GetMethod_m34143B12E3B76A98618222727B25EC0D39A38F2A (AppDomain_tFFEF01BA23D79DA3A22C21195FD262862037E506* __this, RuntimeObject* ___token0, ILType_tD812655AF7716306B8168AD6F08152435B77708C* ___contextType1, ILMethod_tA56B8FD062B67B88B2396AC1AFFCED9E4FE92AD7* ___contextMethod2, bool* ___invalidToken3, const RuntimeMethod* method) ;
// System.Boolean ILRuntime.Mono.Cecil.MethodDefinition::get_IsAbstract()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MethodDefinition_get_IsAbstract_m23B1CE6413C64B19573CBBFA40A9B40151CA76E7 (MethodDefinition_t20ECAB62A2A1BBEB383A1A979167D658ACCF3244* __this, const RuntimeMethod* method) ;
// System.Int32 ILRuntime.CLR.Method.ILMethod::GetTypeTokenHashCode(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ILMethod_GetTypeTokenHashCode_m3DBFC8FF86E037BCE3DF1D135196FA682C923B93 (ILMethod_tA56B8FD062B67B88B2396AC1AFFCED9E4FE92AD7* __this, RuntimeObject* ___token0, const RuntimeMethod* method) ;
// System.Int64 ILRuntime.Runtime.Enviorment.AppDomain::GetStaticFieldIndex(System.Object,ILRuntime.CLR.TypeSystem.IType,ILRuntime.CLR.Method.IMethod)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t AppDomain_GetStaticFieldIndex_m1D671D88A4A3CF7D339A237C5FCC24922F555AC3 (AppDomain_tFFEF01BA23D79DA3A22C21195FD262862037E506* __this, RuntimeObject* ___token0, RuntimeObject* ___contextType1, RuntimeObject* ___contextMethod2, const RuntimeMethod* method) ;
// System.Int64 ILRuntime.Runtime.Enviorment.AppDomain::CacheString(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t AppDomain_CacheString_m7222680D0CAE5D23C9C21BBB4CF97AAD7F1E8C59 (AppDomain_tFFEF01BA23D79DA3A22C21195FD262862037E506* __this, RuntimeObject* ___token0, const RuntimeMethod* method) ;
// System.Void ILRuntime.CLR.Method.ILMethod::PrepareJumpTable(System.Object,System.Collections.Generic.Dictionary`2<ILRuntime.Mono.Cecil.Cil.Instruction,System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ILMethod_PrepareJumpTable_m262B4BD25585A8BEC9DF114F81BA2D5D19758016 (ILMethod_tA56B8FD062B67B88B2396AC1AFFCED9E4FE92AD7* __this, RuntimeObject* ___token0, Dictionary_2_t5B089D76260FC645B19FAE71638DFBBFEA74D852* ___addr1, const RuntimeMethod* method) ;
// System.Boolean ILRuntime.CLR.Method.ILMethod::CheckHasGenericParamter(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ILMethod_CheckHasGenericParamter_mB3C60837FC357FF6DAB3EDA0FF2A86F7093247BB (ILMethod_tA56B8FD062B67B88B2396AC1AFFCED9E4FE92AD7* __this, RuntimeObject* ___token0, const RuntimeMethod* method) ;
// ILRuntime.Mono.Cecil.TypeReference ILRuntime.Mono.Cecil.TypeSpecification::get_ElementType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TypeReference_tF82E3E035A581A717CE653CEFC3843CE4E460F91* TypeSpecification_get_ElementType_m21C20A8CB7B9482CC3702FA739626D6AC82863CB_inline (TypeSpecification_t4B0FB1E89E0C33705697B10881A7A77B713E80A3* __this, const RuntimeMethod* method) ;
// ILRuntime.Mono.Collections.Generic.Collection`1<ILRuntime.Mono.Cecil.TypeReference> ILRuntime.Mono.Cecil.GenericInstanceType::get_GenericArguments()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collection_1_t4D9D6514FFD29B0141FB7020EC67BC6340193EA5* GenericInstanceType_get_GenericArguments_mE4EFFF9590D81853C70F07A115E0E536774C990A (GenericInstanceType_t6A678A502BCB7A6A9F60E0E45C11A73A0852F746* __this, const RuntimeMethod* method) ;
// ILRuntime.Mono.Collections.Generic.Collection`1/Enumerator<T> ILRuntime.Mono.Collections.Generic.Collection`1<ILRuntime.Mono.Cecil.TypeReference>::GetEnumerator()
inline Enumerator_t7DD1A0B4DF4F70D54047832E79CB1D0E502D500F Collection_1_GetEnumerator_m9D5939E9116EFA4DE2779BD84FD22F527169E3C6 (Collection_1_t4D9D6514FFD29B0141FB7020EC67BC6340193EA5* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t7DD1A0B4DF4F70D54047832E79CB1D0E502D500F (*) (Collection_1_t4D9D6514FFD29B0141FB7020EC67BC6340193EA5*, const RuntimeMethod*))Collection_1_GetEnumerator_mB8304E680D99A214B15602F65FB7628BC790DA6D_gshared)(__this, method);
}
// System.Void ILRuntime.Mono.Collections.Generic.Collection`1/Enumerator<ILRuntime.Mono.Cecil.TypeReference>::Dispose()
inline void Enumerator_Dispose_m4137411A038431D884A2DB3C5CADB14D786D1B99 (Enumerator_t7DD1A0B4DF4F70D54047832E79CB1D0E502D500F* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t7DD1A0B4DF4F70D54047832E79CB1D0E502D500F*, const RuntimeMethod*))Enumerator_Dispose_m8D451D445B9F9DDDD262EDA749D20D2C2F52F3F4_gshared)(__this, method);
}
// T ILRuntime.Mono.Collections.Generic.Collection`1/Enumerator<ILRuntime.Mono.Cecil.TypeReference>::get_Current()
inline TypeReference_tF82E3E035A581A717CE653CEFC3843CE4E460F91* Enumerator_get_Current_m7CAF11D39E21E895E180C6A04B72B7C42B7C619D_inline (Enumerator_t7DD1A0B4DF4F70D54047832E79CB1D0E502D500F* __this, const RuntimeMethod* method)
{
	return ((  TypeReference_tF82E3E035A581A717CE653CEFC3843CE4E460F91* (*) (Enumerator_t7DD1A0B4DF4F70D54047832E79CB1D0E502D500F*, const RuntimeMethod*))Enumerator_get_Current_m6B934051D5594D4E6E7E8D4C74E98C2F41BDE499_gshared_inline)(__this, method);
}
// System.Boolean ILRuntime.Mono.Collections.Generic.Collection`1/Enumerator<ILRuntime.Mono.Cecil.TypeReference>::MoveNext()
inline bool Enumerator_MoveNext_mD5CACA008AA9B926D6B0042E610B8EFD2CCB77CB (Enumerator_t7DD1A0B4DF4F70D54047832E79CB1D0E502D500F* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t7DD1A0B4DF4F70D54047832E79CB1D0E502D500F*, const RuntimeMethod*))Enumerator_MoveNext_mDFA46CE9A9184E5D1E785779A5B6B5CC95B2ECBB_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32[]>::.ctor()
inline void Dictionary_2__ctor_m3F530E7CD9CC3EB97DCC6E1669EAB9FCE984FA9A (Dictionary_2_t029F6A37F043A1B571A7DB746955ECB8DC548AD9* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t029F6A37F043A1B571A7DB746955ECB8DC548AD9*, const RuntimeMethod*))Dictionary_2__ctor_m92E9AB321FBD7147CA109C822D99C8B0610C27B7_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32[]>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_m39A46D5739773AE4017A5751F9E95ED71874C825 (Dictionary_2_t029F6A37F043A1B571A7DB746955ECB8DC548AD9* __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t029F6A37F043A1B571A7DB746955ECB8DC548AD9*, int32_t, const RuntimeMethod*))Dictionary_2_ContainsKey_mED5C451F158CDDD2B3F4B0720CD248DA9DB27B25_gshared)(__this, ___key0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32[]>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m3D78F37FE49E9F0593B3F90A68A65ED5EEB7B593 (Dictionary_2_t029F6A37F043A1B571A7DB746955ECB8DC548AD9* __this, int32_t ___key0, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t029F6A37F043A1B571A7DB746955ECB8DC548AD9*, int32_t, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*, const RuntimeMethod*))Dictionary_2_set_Item_m2888D71A14F2B8510102F24FEE90552E91B124C1_gshared)(__this, ___key0, ___value1, method);
}
// ILRuntime.Mono.Collections.Generic.Collection`1/Enumerator<T> ILRuntime.Mono.Collections.Generic.Collection`1<ILRuntime.Mono.Cecil.ParameterDefinition>::GetEnumerator()
inline Enumerator_t53891B8BDE2BAF0158F2F4F5670307C5EE5420C3 Collection_1_GetEnumerator_m9FE5C349DD12829D5AA1109094C6C2B17F320AA4 (Collection_1_t07922683F6D8F9416D093E2327FCBCCAC03146F1* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t53891B8BDE2BAF0158F2F4F5670307C5EE5420C3 (*) (Collection_1_t07922683F6D8F9416D093E2327FCBCCAC03146F1*, const RuntimeMethod*))Collection_1_GetEnumerator_mB8304E680D99A214B15602F65FB7628BC790DA6D_gshared)(__this, method);
}
// System.Void ILRuntime.Mono.Collections.Generic.Collection`1/Enumerator<ILRuntime.Mono.Cecil.ParameterDefinition>::Dispose()
inline void Enumerator_Dispose_m32C72DBA34EFCAC82F08CA035E3A2B03BC64256C (Enumerator_t53891B8BDE2BAF0158F2F4F5670307C5EE5420C3* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t53891B8BDE2BAF0158F2F4F5670307C5EE5420C3*, const RuntimeMethod*))Enumerator_Dispose_m8D451D445B9F9DDDD262EDA749D20D2C2F52F3F4_gshared)(__this, method);
}
// T ILRuntime.Mono.Collections.Generic.Collection`1/Enumerator<ILRuntime.Mono.Cecil.ParameterDefinition>::get_Current()
inline ParameterDefinition_tF36CEEB8641D1EEA2D1D205360F1A7F37E63A6BA* Enumerator_get_Current_mF113979307EBDAD84F602115428780AED2805A52_inline (Enumerator_t53891B8BDE2BAF0158F2F4F5670307C5EE5420C3* __this, const RuntimeMethod* method)
{
	return ((  ParameterDefinition_tF36CEEB8641D1EEA2D1D205360F1A7F37E63A6BA* (*) (Enumerator_t53891B8BDE2BAF0158F2F4F5670307C5EE5420C3*, const RuntimeMethod*))Enumerator_get_Current_m6B934051D5594D4E6E7E8D4C74E98C2F41BDE499_gshared_inline)(__this, method);
}
// ILRuntime.Mono.Cecil.TypeReference ILRuntime.Mono.Cecil.ParameterReference::get_ParameterType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TypeReference_tF82E3E035A581A717CE653CEFC3843CE4E460F91* ParameterReference_get_ParameterType_m70C3F6E3D81FE1622794ACCE3780FE6C835D4DF5_inline (ParameterReference_tC6D1DC81D82FDDADAF2EE8CFF4BF7DA7A3BECA24* __this, const RuntimeMethod* method) ;
// System.Int32 ILRuntime.Mono.Cecil.ArrayType::get_Rank()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ArrayType_get_Rank_m5FF53B0C0328B93D146F14BCB8BD3DB565FF9E8D (ArrayType_t10E15696DD4C5718FE0EEB9853B40A9C44764048* __this, const RuntimeMethod* method) ;
// ILRuntime.Mono.Collections.Generic.Collection`1/Enumerator<T> ILRuntime.Mono.Collections.Generic.Collection`1<ILRuntime.Mono.Cecil.GenericParameter>::GetEnumerator()
inline Enumerator_tA0970D8A9568C2F7B9F4CD8871395601EDC137C2 Collection_1_GetEnumerator_mDDCAB1F5B1BC18DD3D3312273BD5FF67093F16C4 (Collection_1_tAF0023B9443046D2A5BC6C79ADE1460DA3165828* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tA0970D8A9568C2F7B9F4CD8871395601EDC137C2 (*) (Collection_1_tAF0023B9443046D2A5BC6C79ADE1460DA3165828*, const RuntimeMethod*))Collection_1_GetEnumerator_mB8304E680D99A214B15602F65FB7628BC790DA6D_gshared)(__this, method);
}
// System.Void ILRuntime.Mono.Collections.Generic.Collection`1/Enumerator<ILRuntime.Mono.Cecil.GenericParameter>::Dispose()
inline void Enumerator_Dispose_mA51B3CEDE853C0A0FE0EDB5E2AD0C1AD9B162BD2 (Enumerator_tA0970D8A9568C2F7B9F4CD8871395601EDC137C2* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tA0970D8A9568C2F7B9F4CD8871395601EDC137C2*, const RuntimeMethod*))Enumerator_Dispose_m8D451D445B9F9DDDD262EDA749D20D2C2F52F3F4_gshared)(__this, method);
}
// T ILRuntime.Mono.Collections.Generic.Collection`1/Enumerator<ILRuntime.Mono.Cecil.GenericParameter>::get_Current()
inline GenericParameter_t8414103B394479F255809FF8AFF131596ED43EEA* Enumerator_get_Current_mAF0C0A00871D3A34AECAE95B1FD46A043D9D635F_inline (Enumerator_tA0970D8A9568C2F7B9F4CD8871395601EDC137C2* __this, const RuntimeMethod* method)
{
	return ((  GenericParameter_t8414103B394479F255809FF8AFF131596ED43EEA* (*) (Enumerator_tA0970D8A9568C2F7B9F4CD8871395601EDC137C2*, const RuntimeMethod*))Enumerator_get_Current_m6B934051D5594D4E6E7E8D4C74E98C2F41BDE499_gshared_inline)(__this, method);
}
// System.Boolean ILRuntime.Mono.Collections.Generic.Collection`1/Enumerator<ILRuntime.Mono.Cecil.GenericParameter>::MoveNext()
inline bool Enumerator_MoveNext_mCAD14EE6EEE34331E951E425D9648AB20DA6C49D (Enumerator_tA0970D8A9568C2F7B9F4CD8871395601EDC137C2* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tA0970D8A9568C2F7B9F4CD8871395601EDC137C2*, const RuntimeMethod*))Enumerator_MoveNext_mDFA46CE9A9184E5D1E785779A5B6B5CC95B2ECBB_gshared)(__this, method);
}
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m093934F71A9B351911EE46311674ED463B180006 (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Boolean ILRuntime.Mono.Collections.Generic.Collection`1/Enumerator<ILRuntime.Mono.Cecil.ParameterDefinition>::MoveNext()
inline bool Enumerator_MoveNext_m10B12DD106E0A499FE1C5250F12F6063404CD28F (Enumerator_t53891B8BDE2BAF0158F2F4F5670307C5EE5420C3* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t53891B8BDE2BAF0158F2F4F5670307C5EE5420C3*, const RuntimeMethod*))Enumerator_MoveNext_mDFA46CE9A9184E5D1E785779A5B6B5CC95B2ECBB_gshared)(__this, method);
}
// T ILRuntime.Mono.Collections.Generic.Collection`1<ILRuntime.Mono.Cecil.GenericParameter>::get_Item(System.Int32)
inline GenericParameter_t8414103B394479F255809FF8AFF131596ED43EEA* Collection_1_get_Item_mE1E62B32EE846548B46E59B86FEC11157991F868 (Collection_1_tAF0023B9443046D2A5BC6C79ADE1460DA3165828* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  GenericParameter_t8414103B394479F255809FF8AFF131596ED43EEA* (*) (Collection_1_tAF0023B9443046D2A5BC6C79ADE1460DA3165828*, int32_t, const RuntimeMethod*))Collection_1_get_Item_m521D781FB8FB2FE7292D4068B242B8E78CC1AAFB_gshared)(__this, ___index0, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.String,ILRuntime.CLR.TypeSystem.IType>::.ctor(TKey,TValue)
inline void KeyValuePair_2__ctor_m663938AF9BF607872A8BA8ACB8AC4B58AB444D49 (KeyValuePair_2_tE28C7DA12E13817FD3C7A77CBB509ED7784C2AB5* __this, String_t* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_tE28C7DA12E13817FD3C7A77CBB509ED7784C2AB5*, String_t*, RuntimeObject*, const RuntimeMethod*))KeyValuePair_2__ctor_m0D5C3E0BE2D37252D3F4E0F0EA9A13C9458D4950_gshared)(__this, ___key0, ___value1, method);
}
// System.Void ILRuntime.CLR.Method.ILMethod::.ctor(ILRuntime.Mono.Cecil.MethodDefinition,ILRuntime.CLR.TypeSystem.ILType,ILRuntime.Runtime.Enviorment.AppDomain,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ILMethod__ctor_m33DBA416544D54425950E94037E8B113B7C43A0B (ILMethod_tA56B8FD062B67B88B2396AC1AFFCED9E4FE92AD7* __this, MethodDefinition_t20ECAB62A2A1BBEB383A1A979167D658ACCF3244* ___def0, ILType_tD812655AF7716306B8168AD6F08152435B77708C* ___type1, AppDomain_tFFEF01BA23D79DA3A22C21195FD262862037E506* ___domain2, int32_t ___flags3, const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D (StringBuilder_t* __this, const RuntimeMethod* method) ;
// System.String ILRuntime.CLR.TypeSystem.ILType::get_FullName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ILType_get_FullName_mED914066A7FD965D01D566274DC64414B8D21CB7 (ILType_tD812655AF7716306B8168AD6F08152435B77708C* __this, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D (StringBuilder_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1 (StringBuilder_t* __this, Il2CppChar ___value0, const RuntimeMethod* method) ;
// System.String ILRuntime.CLR.Method.ILMethod::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ILMethod_get_Name_m201619334A6A071426B14588BDE9893402E800FF (ILMethod_tA56B8FD062B67B88B2396AC1AFFCED9E4FE92AD7* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<ILRuntime.CLR.TypeSystem.IType>::get_Item(System.Int32)
inline RuntimeObject* List_1_get_Item_mFF4DE940771926F51E45DEEAC63BC14CD28C5635 (List_1_t136E925D19ADF1AFF60DF33114FEC34DD1EAFD75* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (List_1_t136E925D19ADF1AFF60DF33114FEC34DD1EAFD75*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// T ILRuntime.Mono.Collections.Generic.Collection`1<ILRuntime.Mono.Cecil.ParameterDefinition>::get_Item(System.Int32)
inline ParameterDefinition_tF36CEEB8641D1EEA2D1D205360F1A7F37E63A6BA* Collection_1_get_Item_m94FDDCE2857A8035385ED1D49F4A4877D89DF0B9 (Collection_1_t07922683F6D8F9416D093E2327FCBCCAC03146F1* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  ParameterDefinition_tF36CEEB8641D1EEA2D1D205360F1A7F37E63A6BA* (*) (Collection_1_t07922683F6D8F9416D093E2327FCBCCAC03146F1*, int32_t, const RuntimeMethod*))Collection_1_get_Item_m521D781FB8FB2FE7292D4068B242B8E78CC1AAFB_gshared)(__this, ___index0, method);
}
// System.String ILRuntime.Mono.Cecil.ParameterReference::get_Name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ParameterReference_get_Name_m76C1DEB1A9156E1BE5FBF2C9186DFB0353C650D8_inline (ParameterReference_tC6D1DC81D82FDDADAF2EE8CFF4BF7DA7A3BECA24* __this, const RuntimeMethod* method) ;
// System.Boolean ILRuntime.CLR.Method.IMethodExtensions::IsExtendMethod(ILRuntime.CLR.Method.ILMethod)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IMethodExtensions_IsExtendMethod_m5269B80C75EF5484549A61FFE41850690379F828 (ILMethod_tA56B8FD062B67B88B2396AC1AFFCED9E4FE92AD7* ___im0, const RuntimeMethod* method) ;
// System.Boolean ILRuntime.CLR.Method.ILMethod::get_IsStatic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ILMethod_get_IsStatic_mE66DE4FD886C446A0AE7BF330BFBB86CCE52EF82 (ILMethod_tA56B8FD062B67B88B2396AC1AFFCED9E4FE92AD7* __this, const RuntimeMethod* method) ;
// System.Int32 ILRuntime.CLR.Method.ILMethod::get_ParameterCount()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ILMethod_get_ParameterCount_m0C4573BC61A5259587CA3E2988861200ED6755F0_inline (ILMethod_tA56B8FD062B67B88B2396AC1AFFCED9E4FE92AD7* __this, const RuntimeMethod* method) ;
// System.Reflection.MethodInfo ILRuntime.CLR.Method.ILMethod::get_ReflectionMethodInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t* ILMethod_get_ReflectionMethodInfo_mB7AEAD37363023B92C516A618BEED7DAF28E8345 (ILMethod_tA56B8FD062B67B88B2396AC1AFFCED9E4FE92AD7* __this, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// System.Boolean ILRuntime.CLR.Method.CLRMethod::get_IsStatic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CLRMethod_get_IsStatic_m66F4EDB78E7250E98FA4902256C0E048BD3EB68C (CLRMethod_t7DF49A5C4FF255B056BFEE0BFDF137AEF905FFF5* __this, const RuntimeMethod* method) ;
// System.Reflection.MethodInfo ILRuntime.CLR.Method.CLRMethod::get_MethodInfo()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MethodInfo_t* CLRMethod_get_MethodInfo_mA20BF96B9EF5F7021E583C5E10EBEB616A2A1779_inline (CLRMethod_t7DF49A5C4FF255B056BFEE0BFDF137AEF905FFF5* __this, const RuntimeMethod* method) ;
// System.Void System.Attribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2 (Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* __this, const RuntimeMethod* method) ;
// ET.ETTaskCompleted ET.AsyncETTaskCompletedMethodBuilder::get_Task()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ETTaskCompleted_tC7E784791E37157A69DC06ADE2C07D5F0BD577A1 AsyncETTaskCompletedMethodBuilder_get_Task_mF761709525C4245B9C13ADFDB62B55D0FD50DE4A (AsyncETTaskCompletedMethodBuilder_t53ABA0333D7CD0BCD066353A41DFB67445B8E031* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Exception>::Invoke(T)
inline void Action_1_Invoke_m43B5C4C0F292CE3E07CB03B46D8F960ACF7D6A58_inline (Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04* __this, Exception_t* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04*, Exception_t*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___obj0, method);
}
// System.Void ET.AsyncETTaskCompletedMethodBuilder::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncETTaskCompletedMethodBuilder_SetException_m3421C1089E30FAFFAE0B7A24F40EB6FB9D663A39 (AsyncETTaskCompletedMethodBuilder_t53ABA0333D7CD0BCD066353A41DFB67445B8E031* __this, Exception_t* ___e0, const RuntimeMethod* method) ;
// System.Void ET.AsyncETTaskCompletedMethodBuilder::SetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncETTaskCompletedMethodBuilder_SetResult_m4C2AF9E157E63D95304DA43FC782928D508BF31B (AsyncETTaskCompletedMethodBuilder_t53ABA0333D7CD0BCD066353A41DFB67445B8E031* __this, const RuntimeMethod* method) ;
// System.Void ET.AsyncETTaskCompletedMethodBuilder::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncETTaskCompletedMethodBuilder_SetStateMachine_m099AF3AF77EFF4CFFE33ECC82857335D827033EC (AsyncETTaskCompletedMethodBuilder_t53ABA0333D7CD0BCD066353A41DFB67445B8E031* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// ET.ETTask ET.ETTask::Create(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* ETTask_Create_mE2D8362BDB2030D3D4345BE6D68DDD7AB7E1F7BE (bool ___fromPool0, const RuntimeMethod* method) ;
// ET.ETTask ET.ETAsyncTaskMethodBuilder::get_Task()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* ETAsyncTaskMethodBuilder_get_Task_mB1EE6961178A9200208ED6EAF4B16C84A579421F_inline (ETAsyncTaskMethodBuilder_t6539D4B6A1CB6F6388453211D928A26188B68B0C* __this, const RuntimeMethod* method) ;
// System.Void ET.ETTask::SetException(System.Exception)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ETTask_SetException_m15F23C04CCB4BD5B9A5AB75928C823A93F9B6176_inline (ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* __this, Exception_t* ___e0, const RuntimeMethod* method) ;
// System.Void ET.ETAsyncTaskMethodBuilder::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETAsyncTaskMethodBuilder_SetException_mF9A14E1D6F427CF0BD0DC18EBCB318745C5B2A5F (ETAsyncTaskMethodBuilder_t6539D4B6A1CB6F6388453211D928A26188B68B0C* __this, Exception_t* ___exception0, const RuntimeMethod* method) ;
// System.Void ET.ETTask::SetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETTask_SetResult_mB00B78BA4E84709D15FBB01D553BB9256E62B926 (ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* __this, const RuntimeMethod* method) ;
// System.Void ET.ETAsyncTaskMethodBuilder::SetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETAsyncTaskMethodBuilder_SetResult_m76EACE0F7E3EFD983F292BC5DB8693678E573081 (ETAsyncTaskMethodBuilder_t6539D4B6A1CB6F6388453211D928A26188B68B0C* __this, const RuntimeMethod* method) ;
// System.Void ET.ETAsyncTaskMethodBuilder::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETAsyncTaskMethodBuilder_SetStateMachine_mEA437B0708968D310F0DC9BF80D420D59B26AB20 (ETAsyncTaskMethodBuilder_t6539D4B6A1CB6F6388453211D928A26188B68B0C* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// ET.ETVoid ET.AsyncETVoidMethodBuilder::get_Task()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ETVoid_tFB79A53EB5B1FFC7F4A2428E68797AD75B74DC38 AsyncETVoidMethodBuilder_get_Task_m01D925CDA13749DAF0518204CA06493E8A93EC46 (AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203* __this, const RuntimeMethod* method) ;
// System.Void ET.AsyncETVoidMethodBuilder::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncETVoidMethodBuilder_SetException_m7F5356721EF2BCB40149B2F55B8E2590699EBAF5 (AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203* __this, Exception_t* ___e0, const RuntimeMethod* method) ;
// System.Void ET.AsyncETVoidMethodBuilder::SetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncETVoidMethodBuilder_SetResult_m290D2A1FF93C5EB907BE4243F0E62E0CA49E760A (AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203* __this, const RuntimeMethod* method) ;
// System.Void ET.AsyncETVoidMethodBuilder::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncETVoidMethodBuilder_SetStateMachine_m6A0835E3894AAEE9D100F17C6415C8C2DF7B5A78 (AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<System.Action>::Add(T)
inline bool HashSet_1_Add_mA69EB23B2381F6D03CCC56D158E2E706DC21EFB2 (HashSet_1_t095EA6937EBCEA0A5C3225D8D0D5E4CEF32D6828* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t095EA6937EBCEA0A5C3225D8D0D5E4CEF32D6828*, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*, const RuntimeMethod*))HashSet_1_Add_m2CD7657B3459B61DD4BBA47024AC71F7D319658B_gshared)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.HashSet`1<System.Action>::Remove(T)
inline bool HashSet_1_Remove_mFD60E090A2022B5DAF0138F0E6846E45654E4C8B (HashSet_1_t095EA6937EBCEA0A5C3225D8D0D5E4CEF32D6828* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t095EA6937EBCEA0A5C3225D8D0D5E4CEF32D6828*, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*, const RuntimeMethod*))HashSet_1_Remove_mF1D84C0A2829DDA2A0CEE1D82A5B999B5F6627CB_gshared)(__this, ___item0, method);
}
// System.Void ET.ETCancellationToken::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETCancellationToken_Invoke_mF885E55DC0DACEC31D8203FAAACD5450FE978475 (ETCancellationToken_tACA8F146EDE95371894D92DF0FD89C07C08886E1* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1<System.Action>::GetEnumerator()
inline Enumerator_t6C5AF6111106FABDB3A75090A81060D2FDA7270D HashSet_1_GetEnumerator_m78653A4544248BB5FA1AB0D510F0E20ADA71F273 (HashSet_1_t095EA6937EBCEA0A5C3225D8D0D5E4CEF32D6828* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t6C5AF6111106FABDB3A75090A81060D2FDA7270D (*) (HashSet_1_t095EA6937EBCEA0A5C3225D8D0D5E4CEF32D6828*, const RuntimeMethod*))HashSet_1_GetEnumerator_m143B98FEED7E9CABA2C494AB2F04DAD60A504635_gshared)(__this, method);
}
// System.Void System.Collections.Generic.HashSet`1/Enumerator<System.Action>::Dispose()
inline void Enumerator_Dispose_m88315086E58918662C6232991F5023626723EED0 (Enumerator_t6C5AF6111106FABDB3A75090A81060D2FDA7270D* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t6C5AF6111106FABDB3A75090A81060D2FDA7270D*, const RuntimeMethod*))Enumerator_Dispose_mFB582AEAA2E73F3128B5571197BEDE256A83F657_gshared)(__this, method);
}
// T System.Collections.Generic.HashSet`1/Enumerator<System.Action>::get_Current()
inline Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* Enumerator_get_Current_mE60ACE9719275C7F96CFD6CC221DE814F3DAB201_inline (Enumerator_t6C5AF6111106FABDB3A75090A81060D2FDA7270D* __this, const RuntimeMethod* method)
{
	return ((  Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* (*) (Enumerator_t6C5AF6111106FABDB3A75090A81060D2FDA7270D*, const RuntimeMethod*))Enumerator_get_Current_m139A176CD271A0532D75BE08DA7831C8C45CE28F_gshared_inline)(__this, method);
}
// System.Void System.Action::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1/Enumerator<System.Action>::MoveNext()
inline bool Enumerator_MoveNext_m122007C9D7809F797369DF048308B3DD5A167E6D (Enumerator_t6C5AF6111106FABDB3A75090A81060D2FDA7270D* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t6C5AF6111106FABDB3A75090A81060D2FDA7270D*, const RuntimeMethod*))Enumerator_MoveNext_m27565F5ACCCC75C3DD34CC4CAE3E6AEFEB9144A6_gshared)(__this, method);
}
// System.Void System.Collections.Generic.HashSet`1<System.Action>::.ctor()
inline void HashSet_1__ctor_m0279525296802FE105F96F1F35AC932146C0305F (HashSet_1_t095EA6937EBCEA0A5C3225D8D0D5E4CEF32D6828* __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t095EA6937EBCEA0A5C3225D8D0D5E4CEF32D6828*, const RuntimeMethod*))HashSet_1__ctor_m9132EE1422BAA45E44B7FFF495F378790D36D90E_gshared)(__this, method);
}
// System.Void ET.ETTask::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETTask__ctor_m93ADE5A29C33E37BD3B19ACEBDF0B7AF434EB623 (ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Queue`1<ET.ETTask>::get_Count()
inline int32_t Queue_1_get_Count_mB53765136F6A77A34AD84495D77EE7F54F28CB35_inline (Queue_1_tD81FB1FE4DD008B5193D0BDAA9B48AEDE8DD41A4* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Queue_1_tD81FB1FE4DD008B5193D0BDAA9B48AEDE8DD41A4*, const RuntimeMethod*))Queue_1_get_Count_m1768ADA9855B7CDA14C9C42E098A287F1A39C3A2_gshared_inline)(__this, method);
}
// T System.Collections.Generic.Queue`1<ET.ETTask>::Dequeue()
inline ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* Queue_1_Dequeue_m8961AF5251B0C920540483E9034A5C4981DAEDC5 (Queue_1_tD81FB1FE4DD008B5193D0BDAA9B48AEDE8DD41A4* __this, const RuntimeMethod* method)
{
	return ((  ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* (*) (Queue_1_tD81FB1FE4DD008B5193D0BDAA9B48AEDE8DD41A4*, const RuntimeMethod*))Queue_1_Dequeue_m86B243DF9EC238316EC3D27DF3E0AB8DB0987E84_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Queue`1<ET.ETTask>::Enqueue(T)
inline void Queue_1_Enqueue_m6B193ACE0D1CA2A8A8462A7B3DF4B4AC8B0752B9 (Queue_1_tD81FB1FE4DD008B5193D0BDAA9B48AEDE8DD41A4* __this, ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* ___item0, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tD81FB1FE4DD008B5193D0BDAA9B48AEDE8DD41A4*, ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9*, const RuntimeMethod*))Queue_1_Enqueue_m5CB8CF3906F1289F92036F0973EC5BE3450402EF_gshared)(__this, ___item0, method);
}
// ET.AsyncETVoidMethodBuilder ET.AsyncETVoidMethodBuilder::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203 AsyncETVoidMethodBuilder_Create_m9CEDA84619E25BAC3C65FA55A7C6A56FF650F200 (const RuntimeMethod* method) ;
// System.Void ET.AsyncETVoidMethodBuilder::Start<ET.ETTask/<InnerCoroutine>d__10>(TStateMachine&)
inline void AsyncETVoidMethodBuilder_Start_TisU3CInnerCoroutineU3Ed__10_t2D601F7100272EA0BB5D608AFE81D658FDE14042_mC604A8F025BA07EB3FB5C21C8DBBC8044796E40D (AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203* __this, U3CInnerCoroutineU3Ed__10_t2D601F7100272EA0BB5D608AFE81D658FDE14042* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203*, U3CInnerCoroutineU3Ed__10_t2D601F7100272EA0BB5D608AFE81D658FDE14042*, const RuntimeMethod*))AsyncETVoidMethodBuilder_Start_TisU3CInnerCoroutineU3Ed__10_t2D601F7100272EA0BB5D608AFE81D658FDE14042_mC604A8F025BA07EB3FB5C21C8DBBC8044796E40D_gshared)(__this, ___stateMachine0, method);
}
// ET.ETVoid ET.ETTask::InnerCoroutine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ETVoid_tFB79A53EB5B1FFC7F4A2428E68797AD75B74DC38 ETTask_InnerCoroutine_m9537CC74C1428C6737E19D55BDB81524276FAEC3 (ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* __this, const RuntimeMethod* method) ;
// System.Void ET.ETVoid::Coroutine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETVoid_Coroutine_m7D69369538267F547E8D8AF8467A2806C5F6E6DA (ETVoid_tFB79A53EB5B1FFC7F4A2428E68797AD75B74DC38* __this, const RuntimeMethod* method) ;
// System.Void ET.ETTask::UnsafeOnCompleted(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETTask_UnsafeOnCompleted_mEB36CE8A9B0FE7806F997833703CD0227ECCB9B9 (ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___action0, const RuntimeMethod* method) ;
// System.Void ET.ETTask::Recycle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETTask_Recycle_mCA3F18646D07DB9EA6E2BA4AFBDAAE3A1E27CD36 (ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.ExceptionServices.ExceptionDispatchInfo::Throw()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330 (ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* __this, const RuntimeMethod* method) ;
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Runtime.ExceptionServices.ExceptionDispatchInfo System.Runtime.ExceptionServices.ExceptionDispatchInfo::Capture(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803 (Exception_t* ___source0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<ET.ETTask>::.ctor()
inline void Queue_1__ctor_m2362F2BF6D5B2DCD823FEAE7D34AF9915581DC79 (Queue_1_tD81FB1FE4DD008B5193D0BDAA9B48AEDE8DD41A4* __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tD81FB1FE4DD008B5193D0BDAA9B48AEDE8DD41A4*, const RuntimeMethod*))Queue_1__ctor_m6E2A5A8173E0CC524496D5155C737DF8FD10D0EB_gshared)(__this, method);
}
// ET.ETTask ET.ETTask::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* ETTask_GetAwaiter_m18704BF1223130E4441BED1DF784F584052E9F46 (ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* __this, const RuntimeMethod* method) ;
// System.Boolean ET.ETTask::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ETTask_get_IsCompleted_mC46408CF8CDBC0122E679473EDB14A9BA55A13F2 (ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* __this, const RuntimeMethod* method) ;
// System.Void ET.AsyncETVoidMethodBuilder::AwaitUnsafeOnCompleted<ET.ETTask,ET.ETTask/<InnerCoroutine>d__10>(TAwaiter&,TStateMachine&)
inline void AsyncETVoidMethodBuilder_AwaitUnsafeOnCompleted_TisETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_TisU3CInnerCoroutineU3Ed__10_t2D601F7100272EA0BB5D608AFE81D658FDE14042_mB852682DBD2821E3CB287E509A776C494FF7EE79 (AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203* __this, ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9** ___awaiter0, U3CInnerCoroutineU3Ed__10_t2D601F7100272EA0BB5D608AFE81D658FDE14042* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203*, ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9**, U3CInnerCoroutineU3Ed__10_t2D601F7100272EA0BB5D608AFE81D658FDE14042*, const RuntimeMethod*))AsyncETVoidMethodBuilder_AwaitUnsafeOnCompleted_TisRuntimeObject_TisU3CInnerCoroutineU3Ed__10_t2D601F7100272EA0BB5D608AFE81D658FDE14042_mCAC25C56C5E5D60AED7260BB185F139B27D4F4E9_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void ET.ETTask::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETTask_GetResult_m4025996962517219AB63CD35458CEE581DF064E6 (ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* __this, const RuntimeMethod* method) ;
// System.Void ET.ETTask/<InnerCoroutine>d__10::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInnerCoroutineU3Ed__10_MoveNext_m215D18BC3B798B1543AECCE15AA994D76697901E (U3CInnerCoroutineU3Ed__10_t2D601F7100272EA0BB5D608AFE81D658FDE14042* __this, const RuntimeMethod* method) ;
// System.Void ET.ETTask/<InnerCoroutine>d__10::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInnerCoroutineU3Ed__10_SetStateMachine_m467597CFCFE1144E0EA75800DD5A05FA47271517 (U3CInnerCoroutineU3Ed__10_t2D601F7100272EA0BB5D608AFE81D658FDE14042* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// ET.ETTaskCompleted ET.ETTaskCompleted::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ETTaskCompleted_tC7E784791E37157A69DC06ADE2C07D5F0BD577A1 ETTaskCompleted_GetAwaiter_mE3AEE62423C7E74E5BA5E4298F51A94537291113 (ETTaskCompleted_tC7E784791E37157A69DC06ADE2C07D5F0BD577A1* __this, const RuntimeMethod* method) ;
// System.Boolean ET.ETTaskCompleted::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ETTaskCompleted_get_IsCompleted_mF124D814B224FC03ABA766B4DD6D32129EB65FC0 (ETTaskCompleted_tC7E784791E37157A69DC06ADE2C07D5F0BD577A1* __this, const RuntimeMethod* method) ;
// System.Void ET.ETTaskCompleted::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETTaskCompleted_GetResult_m99982AD00E2DE9170E7A8DCE4314B1DC19C34D50 (ETTaskCompleted_tC7E784791E37157A69DC06ADE2C07D5F0BD577A1* __this, const RuntimeMethod* method) ;
// System.Void ET.ETTaskCompleted::OnCompleted(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETTaskCompleted_OnCompleted_m46057706E7DDC6C8DB7BCFE28EA25514E43AC067 (ETTaskCompleted_tC7E784791E37157A69DC06ADE2C07D5F0BD577A1* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___continuation0, const RuntimeMethod* method) ;
// System.Void ET.ETTaskCompleted::UnsafeOnCompleted(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETTaskCompleted_UnsafeOnCompleted_m999B40E9B88E496271C0150F1B7820F01E010BC8 (ETTaskCompleted_tC7E784791E37157A69DC06ADE2C07D5F0BD577A1* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___continuation0, const RuntimeMethod* method) ;
// ET.ETAsyncTaskMethodBuilder`1<T> ET.ETAsyncTaskMethodBuilder`1<System.Boolean>::Create()
inline ETAsyncTaskMethodBuilder_1_t769C7EF52D8DA1B6EBB8B7AEC7B2D7C854730D31 ETAsyncTaskMethodBuilder_1_Create_mC59CD51B35E4F74B34A0336B1C4D7094B1C17EBD (const RuntimeMethod* method)
{
	return ((  ETAsyncTaskMethodBuilder_1_t769C7EF52D8DA1B6EBB8B7AEC7B2D7C854730D31 (*) (const RuntimeMethod*))ETAsyncTaskMethodBuilder_1_Create_mC59CD51B35E4F74B34A0336B1C4D7094B1C17EBD_gshared)(method);
}
// System.Void ET.ETAsyncTaskMethodBuilder`1<System.Boolean>::Start<ET.ETTaskHelper/<WaitAny>d__2>(TStateMachine&)
inline void ETAsyncTaskMethodBuilder_1_Start_TisU3CWaitAnyU3Ed__2_t46A8ED3559C8D2579C2F9E875E382FADDB126E60_m9B5E2E9331F0E05CCE0DFB6FC233632FC9D828D1 (ETAsyncTaskMethodBuilder_1_t769C7EF52D8DA1B6EBB8B7AEC7B2D7C854730D31* __this, U3CWaitAnyU3Ed__2_t46A8ED3559C8D2579C2F9E875E382FADDB126E60* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (ETAsyncTaskMethodBuilder_1_t769C7EF52D8DA1B6EBB8B7AEC7B2D7C854730D31*, U3CWaitAnyU3Ed__2_t46A8ED3559C8D2579C2F9E875E382FADDB126E60*, const RuntimeMethod*))ETAsyncTaskMethodBuilder_1_Start_TisU3CWaitAnyU3Ed__2_t46A8ED3559C8D2579C2F9E875E382FADDB126E60_m9B5E2E9331F0E05CCE0DFB6FC233632FC9D828D1_gshared)(__this, ___stateMachine0, method);
}
// ET.ETTask`1<T> ET.ETAsyncTaskMethodBuilder`1<System.Boolean>::get_Task()
inline ETTask_1_tC3B29B37E823D9C66439D79CE23D65BBFE61686F* ETAsyncTaskMethodBuilder_1_get_Task_mB34D8721E56EE05B2B4AE583DEB758828135BDFF_inline (ETAsyncTaskMethodBuilder_1_t769C7EF52D8DA1B6EBB8B7AEC7B2D7C854730D31* __this, const RuntimeMethod* method)
{
	return ((  ETTask_1_tC3B29B37E823D9C66439D79CE23D65BBFE61686F* (*) (ETAsyncTaskMethodBuilder_1_t769C7EF52D8DA1B6EBB8B7AEC7B2D7C854730D31*, const RuntimeMethod*))ETAsyncTaskMethodBuilder_1_get_Task_mB34D8721E56EE05B2B4AE583DEB758828135BDFF_gshared_inline)(__this, method);
}
// System.Void ET.ETAsyncTaskMethodBuilder`1<System.Boolean>::Start<ET.ETTaskHelper/<WaitAll>d__5>(TStateMachine&)
inline void ETAsyncTaskMethodBuilder_1_Start_TisU3CWaitAllU3Ed__5_tA50206C2AA88F82EB79AE3021E9EDE47B6455DED_m2DF74E4D7018815157D5A73C472339BAF9650F23 (ETAsyncTaskMethodBuilder_1_t769C7EF52D8DA1B6EBB8B7AEC7B2D7C854730D31* __this, U3CWaitAllU3Ed__5_tA50206C2AA88F82EB79AE3021E9EDE47B6455DED* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (ETAsyncTaskMethodBuilder_1_t769C7EF52D8DA1B6EBB8B7AEC7B2D7C854730D31*, U3CWaitAllU3Ed__5_tA50206C2AA88F82EB79AE3021E9EDE47B6455DED*, const RuntimeMethod*))ETAsyncTaskMethodBuilder_1_Start_TisU3CWaitAllU3Ed__5_tA50206C2AA88F82EB79AE3021E9EDE47B6455DED_m2DF74E4D7018815157D5A73C472339BAF9650F23_gshared)(__this, ___stateMachine0, method);
}
// System.Void ET.ETAsyncTaskMethodBuilder`1<System.Boolean>::Start<ET.ETTaskHelper/<WaitAll>d__6>(TStateMachine&)
inline void ETAsyncTaskMethodBuilder_1_Start_TisU3CWaitAllU3Ed__6_t73CAD2CCB5423A31C85967FB33B23FE96219FFBF_m37FBFFC9DA493FE36032DC4BC84A1F9A4B5DF41D (ETAsyncTaskMethodBuilder_1_t769C7EF52D8DA1B6EBB8B7AEC7B2D7C854730D31* __this, U3CWaitAllU3Ed__6_t73CAD2CCB5423A31C85967FB33B23FE96219FFBF* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (ETAsyncTaskMethodBuilder_1_t769C7EF52D8DA1B6EBB8B7AEC7B2D7C854730D31*, U3CWaitAllU3Ed__6_t73CAD2CCB5423A31C85967FB33B23FE96219FFBF*, const RuntimeMethod*))ETAsyncTaskMethodBuilder_1_Start_TisU3CWaitAllU3Ed__6_t73CAD2CCB5423A31C85967FB33B23FE96219FFBF_m37FBFFC9DA493FE36032DC4BC84A1F9A4B5DF41D_gshared)(__this, ___stateMachine0, method);
}
// System.Void System.Collections.Generic.List`1<ET.ETTask>::.ctor()
inline void List_1__ctor_m51111317D140CE9FAD15255586ACC19468E8CB16 (List_1_tA4F47AA2446E3F808EABA13A13F5A8A05B4A5101* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA4F47AA2446E3F808EABA13A13F5A8A05B4A5101*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// ET.ETAsyncTaskMethodBuilder ET.ETAsyncTaskMethodBuilder::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ETAsyncTaskMethodBuilder_t6539D4B6A1CB6F6388453211D928A26188B68B0C ETAsyncTaskMethodBuilder_Create_m0AFDF846A1859E2424FB91848080B693A7900449 (const RuntimeMethod* method) ;
// System.Void ET.ETAsyncTaskMethodBuilder::Start<ET.ETTaskHelper/CoroutineBlocker/<WaitAsync>d__3>(TStateMachine&)
inline void ETAsyncTaskMethodBuilder_Start_TisU3CWaitAsyncU3Ed__3_t872511C7B0611473DF4F43EC4CADCB9D7C93CE5F_m670F06EAE7A04C739D1DB3C840951E4901B47226 (ETAsyncTaskMethodBuilder_t6539D4B6A1CB6F6388453211D928A26188B68B0C* __this, U3CWaitAsyncU3Ed__3_t872511C7B0611473DF4F43EC4CADCB9D7C93CE5F* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (ETAsyncTaskMethodBuilder_t6539D4B6A1CB6F6388453211D928A26188B68B0C*, U3CWaitAsyncU3Ed__3_t872511C7B0611473DF4F43EC4CADCB9D7C93CE5F*, const RuntimeMethod*))ETAsyncTaskMethodBuilder_Start_TisU3CWaitAsyncU3Ed__3_t872511C7B0611473DF4F43EC4CADCB9D7C93CE5F_m670F06EAE7A04C739D1DB3C840951E4901B47226_gshared)(__this, ___stateMachine0, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<ET.ETTask>::GetEnumerator()
inline Enumerator_t05F9D6B822BE78199481DA0AA4B6B04FCC4968E9 List_1_GetEnumerator_m058832077A5E305D1A30987EDF5EF94ABB118AB2 (List_1_tA4F47AA2446E3F808EABA13A13F5A8A05B4A5101* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t05F9D6B822BE78199481DA0AA4B6B04FCC4968E9 (*) (List_1_tA4F47AA2446E3F808EABA13A13F5A8A05B4A5101*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<ET.ETTask>::Dispose()
inline void Enumerator_Dispose_m2CF219B461F67CCD06F99FF3AFDEADC48A1BD26C (Enumerator_t05F9D6B822BE78199481DA0AA4B6B04FCC4968E9* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t05F9D6B822BE78199481DA0AA4B6B04FCC4968E9*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<ET.ETTask>::get_Current()
inline ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* Enumerator_get_Current_mDE3732995809E5A4FABC3ACE34ADB9EDA62A6B09_inline (Enumerator_t05F9D6B822BE78199481DA0AA4B6B04FCC4968E9* __this, const RuntimeMethod* method)
{
	return ((  ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* (*) (Enumerator_t05F9D6B822BE78199481DA0AA4B6B04FCC4968E9*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<ET.ETTask>::MoveNext()
inline bool Enumerator_MoveNext_m8E225A51A6FD5B638EB3D77D976A473FB1C010B2 (Enumerator_t05F9D6B822BE78199481DA0AA4B6B04FCC4968E9* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t05F9D6B822BE78199481DA0AA4B6B04FCC4968E9*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<ET.ETTask>::Add(T)
inline void List_1_Add_m68A5223D8F087592B1404CCD07FAE88BEC924FB3_inline (List_1_tA4F47AA2446E3F808EABA13A13F5A8A05B4A5101* __this, ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA4F47AA2446E3F808EABA13A13F5A8A05B4A5101*, ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void ET.ETAsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<ET.ETTask,ET.ETTaskHelper/CoroutineBlocker/<WaitAsync>d__3>(TAwaiter&,TStateMachine&)
inline void ETAsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_TisU3CWaitAsyncU3Ed__3_t872511C7B0611473DF4F43EC4CADCB9D7C93CE5F_m31F95AC67B3DB2B292CF87379AA2834815AC631C (ETAsyncTaskMethodBuilder_t6539D4B6A1CB6F6388453211D928A26188B68B0C* __this, ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9** ___awaiter0, U3CWaitAsyncU3Ed__3_t872511C7B0611473DF4F43EC4CADCB9D7C93CE5F* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (ETAsyncTaskMethodBuilder_t6539D4B6A1CB6F6388453211D928A26188B68B0C*, ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9**, U3CWaitAsyncU3Ed__3_t872511C7B0611473DF4F43EC4CADCB9D7C93CE5F*, const RuntimeMethod*))ETAsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisRuntimeObject_TisU3CWaitAsyncU3Ed__3_t872511C7B0611473DF4F43EC4CADCB9D7C93CE5F_mFB89546D4B20A7091D3DFB511AE50F3F6470B764_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void ET.ETTaskHelper/CoroutineBlocker/<WaitAsync>d__3::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitAsyncU3Ed__3_MoveNext_m8536558CF33DCA7061FF6777CE8464293F7B5096 (U3CWaitAsyncU3Ed__3_t872511C7B0611473DF4F43EC4CADCB9D7C93CE5F* __this, const RuntimeMethod* method) ;
// System.Void ET.ETTaskHelper/CoroutineBlocker/<WaitAsync>d__3::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitAsyncU3Ed__3_SetStateMachine_mAB2E22D61B8BA7628DF702242F3EA26D9DCEC660 (U3CWaitAsyncU3Ed__3_t872511C7B0611473DF4F43EC4CADCB9D7C93CE5F* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void ET.AsyncETVoidMethodBuilder::Start<ET.ETTaskHelper/<>c__DisplayClass2_0/<<WaitAny>g__RunOneTask|0>d>(TStateMachine&)
inline void AsyncETVoidMethodBuilder_Start_TisU3CU3CWaitAnyU3Eg__RunOneTaskU7C0U3Ed_t911A5630E36FB2DC9DED97E5A4B71B60EB72D00B_mC193C85AA0BFED7A7BE9CC22FD1DF10E986EF8E2 (AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203* __this, U3CU3CWaitAnyU3Eg__RunOneTaskU7C0U3Ed_t911A5630E36FB2DC9DED97E5A4B71B60EB72D00B* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203*, U3CU3CWaitAnyU3Eg__RunOneTaskU7C0U3Ed_t911A5630E36FB2DC9DED97E5A4B71B60EB72D00B*, const RuntimeMethod*))AsyncETVoidMethodBuilder_Start_TisU3CU3CWaitAnyU3Eg__RunOneTaskU7C0U3Ed_t911A5630E36FB2DC9DED97E5A4B71B60EB72D00B_mC193C85AA0BFED7A7BE9CC22FD1DF10E986EF8E2_gshared)(__this, ___stateMachine0, method);
}
// System.Void ET.AsyncETVoidMethodBuilder::AwaitUnsafeOnCompleted<ET.ETTask,ET.ETTaskHelper/<>c__DisplayClass2_0/<<WaitAny>g__RunOneTask|0>d>(TAwaiter&,TStateMachine&)
inline void AsyncETVoidMethodBuilder_AwaitUnsafeOnCompleted_TisETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_TisU3CU3CWaitAnyU3Eg__RunOneTaskU7C0U3Ed_t911A5630E36FB2DC9DED97E5A4B71B60EB72D00B_m705FA038EB48F76E682C55BB6FD82ADE0880D111 (AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203* __this, ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9** ___awaiter0, U3CU3CWaitAnyU3Eg__RunOneTaskU7C0U3Ed_t911A5630E36FB2DC9DED97E5A4B71B60EB72D00B* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203*, ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9**, U3CU3CWaitAnyU3Eg__RunOneTaskU7C0U3Ed_t911A5630E36FB2DC9DED97E5A4B71B60EB72D00B*, const RuntimeMethod*))AsyncETVoidMethodBuilder_AwaitUnsafeOnCompleted_TisRuntimeObject_TisU3CU3CWaitAnyU3Eg__RunOneTaskU7C0U3Ed_t911A5630E36FB2DC9DED97E5A4B71B60EB72D00B_m2BA91121C842D738C465A7F11CF47A1717192FFD_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// ET.ETTask ET.ETTaskHelper/CoroutineBlocker::WaitAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* CoroutineBlocker_WaitAsync_m73943BDA099AA93BBD5EAEEA957B1FA94706C3DF (CoroutineBlocker_tB36E126059540FB732976F4A8DEC06EF8A96634A* __this, const RuntimeMethod* method) ;
// System.Void ET.ETTaskHelper/<>c__DisplayClass2_0/<<WaitAny>g__RunOneTask|0>d::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CWaitAnyU3Eg__RunOneTaskU7C0U3Ed_MoveNext_m0356D0F9555CBF870F7BAEBD138D84C302A906E4 (U3CU3CWaitAnyU3Eg__RunOneTaskU7C0U3Ed_t911A5630E36FB2DC9DED97E5A4B71B60EB72D00B* __this, const RuntimeMethod* method) ;
// System.Void ET.ETTaskHelper/<>c__DisplayClass2_0/<<WaitAny>g__RunOneTask|0>d::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CWaitAnyU3Eg__RunOneTaskU7C0U3Ed_SetStateMachine_m3B316052D34522796950006E79B65A1A56E7B51B (U3CU3CWaitAnyU3Eg__RunOneTaskU7C0U3Ed_t911A5630E36FB2DC9DED97E5A4B71B60EB72D00B* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void ET.ETTaskHelper/<>c__DisplayClass2_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0__ctor_m1DCD4067C43B78DCCF930C3E1570835EF438CA26 (U3CU3Ec__DisplayClass2_0_t386188471D23E1BA38A602299DF18C0DE2A95748* __this, const RuntimeMethod* method) ;
// System.Void ET.ETTaskHelper/CoroutineBlocker::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoroutineBlocker__ctor_mC2DEAA1C928DA22578C4C3F820DD758ECAF79A52 (CoroutineBlocker_tB36E126059540FB732976F4A8DEC06EF8A96634A* __this, int32_t ___count0, const RuntimeMethod* method) ;
// ET.ETVoid ET.ETTaskHelper/<>c__DisplayClass2_0::<WaitAny>g__RunOneTask|0(ET.ETTask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ETVoid_tFB79A53EB5B1FFC7F4A2428E68797AD75B74DC38 U3CU3Ec__DisplayClass2_0_U3CWaitAnyU3Eg__RunOneTaskU7C0_mEF239870F7E9422BF519CAC2C1C72CB2D1C751C2 (U3CU3Ec__DisplayClass2_0_t386188471D23E1BA38A602299DF18C0DE2A95748* __this, ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* ___task0, const RuntimeMethod* method) ;
// System.Void ET.ETAsyncTaskMethodBuilder`1<System.Boolean>::AwaitUnsafeOnCompleted<ET.ETTask,ET.ETTaskHelper/<WaitAny>d__2>(TAwaiter&,TStateMachine&)
inline void ETAsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_TisU3CWaitAnyU3Ed__2_t46A8ED3559C8D2579C2F9E875E382FADDB126E60_m0FEF868C38A3064A56A57DAA57CFC787E5656C11 (ETAsyncTaskMethodBuilder_1_t769C7EF52D8DA1B6EBB8B7AEC7B2D7C854730D31* __this, ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9** ___awaiter0, U3CWaitAnyU3Ed__2_t46A8ED3559C8D2579C2F9E875E382FADDB126E60* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (ETAsyncTaskMethodBuilder_1_t769C7EF52D8DA1B6EBB8B7AEC7B2D7C854730D31*, ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9**, U3CWaitAnyU3Ed__2_t46A8ED3559C8D2579C2F9E875E382FADDB126E60*, const RuntimeMethod*))ETAsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisRuntimeObject_TisU3CWaitAnyU3Ed__2_t46A8ED3559C8D2579C2F9E875E382FADDB126E60_m56B65EE491BA122A6DC38F1D209106C0283A3F16_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Boolean ET.ETCancellationToken::IsCancel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ETCancellationToken_IsCancel_m2138EFC83F2D201AD73E6B56D7F394F39CDD8068 (ETCancellationToken_tACA8F146EDE95371894D92DF0FD89C07C08886E1* __this, const RuntimeMethod* method) ;
// System.Void ET.ETAsyncTaskMethodBuilder`1<System.Boolean>::SetException(System.Exception)
inline void ETAsyncTaskMethodBuilder_1_SetException_m4B20AE5BD8F1E608AAD3970CB6C2985ACB4D6B08 (ETAsyncTaskMethodBuilder_1_t769C7EF52D8DA1B6EBB8B7AEC7B2D7C854730D31* __this, Exception_t* ___exception0, const RuntimeMethod* method)
{
	((  void (*) (ETAsyncTaskMethodBuilder_1_t769C7EF52D8DA1B6EBB8B7AEC7B2D7C854730D31*, Exception_t*, const RuntimeMethod*))ETAsyncTaskMethodBuilder_1_SetException_m4B20AE5BD8F1E608AAD3970CB6C2985ACB4D6B08_gshared)(__this, ___exception0, method);
}
// System.Void ET.ETAsyncTaskMethodBuilder`1<System.Boolean>::SetResult(T)
inline void ETAsyncTaskMethodBuilder_1_SetResult_mBAD14F0004B857E596693C614C5B29587E97021C (ETAsyncTaskMethodBuilder_1_t769C7EF52D8DA1B6EBB8B7AEC7B2D7C854730D31* __this, bool ___ret0, const RuntimeMethod* method)
{
	((  void (*) (ETAsyncTaskMethodBuilder_1_t769C7EF52D8DA1B6EBB8B7AEC7B2D7C854730D31*, bool, const RuntimeMethod*))ETAsyncTaskMethodBuilder_1_SetResult_mBAD14F0004B857E596693C614C5B29587E97021C_gshared)(__this, ___ret0, method);
}
// System.Void ET.ETTaskHelper/<WaitAny>d__2::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitAnyU3Ed__2_MoveNext_mCFF7A82120B59F76023142DF5EABD63CB153EF35 (U3CWaitAnyU3Ed__2_t46A8ED3559C8D2579C2F9E875E382FADDB126E60* __this, const RuntimeMethod* method) ;
// System.Void ET.ETAsyncTaskMethodBuilder`1<System.Boolean>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
inline void ETAsyncTaskMethodBuilder_1_SetStateMachine_m5B87C2E5817CF286E3FCDFBB7C7BF417672DB76E (ETAsyncTaskMethodBuilder_1_t769C7EF52D8DA1B6EBB8B7AEC7B2D7C854730D31* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (ETAsyncTaskMethodBuilder_1_t769C7EF52D8DA1B6EBB8B7AEC7B2D7C854730D31*, RuntimeObject*, const RuntimeMethod*))ETAsyncTaskMethodBuilder_1_SetStateMachine_m5B87C2E5817CF286E3FCDFBB7C7BF417672DB76E_gshared)(__this, ___stateMachine0, method);
}
// System.Void ET.ETTaskHelper/<WaitAny>d__2::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitAnyU3Ed__2_SetStateMachine_m2AA20AC21256C2068B145399ACAE608EDC00D486 (U3CWaitAnyU3Ed__2_t46A8ED3559C8D2579C2F9E875E382FADDB126E60* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void ET.AsyncETVoidMethodBuilder::Start<ET.ETTaskHelper/<>c__DisplayClass5_0/<<WaitAll>g__RunOneTask|0>d>(TStateMachine&)
inline void AsyncETVoidMethodBuilder_Start_TisU3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_tD69FC2C1CB7676C114F1AC8B8D4877AF09E91EB4_mA3EA92C6FA79BC46C30122939F6CA44C0E1D90B9 (AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203* __this, U3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_tD69FC2C1CB7676C114F1AC8B8D4877AF09E91EB4* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203*, U3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_tD69FC2C1CB7676C114F1AC8B8D4877AF09E91EB4*, const RuntimeMethod*))AsyncETVoidMethodBuilder_Start_TisU3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_tD69FC2C1CB7676C114F1AC8B8D4877AF09E91EB4_mA3EA92C6FA79BC46C30122939F6CA44C0E1D90B9_gshared)(__this, ___stateMachine0, method);
}
// System.Void ET.AsyncETVoidMethodBuilder::AwaitUnsafeOnCompleted<ET.ETTask,ET.ETTaskHelper/<>c__DisplayClass5_0/<<WaitAll>g__RunOneTask|0>d>(TAwaiter&,TStateMachine&)
inline void AsyncETVoidMethodBuilder_AwaitUnsafeOnCompleted_TisETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_TisU3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_tD69FC2C1CB7676C114F1AC8B8D4877AF09E91EB4_m12328704DF6C2DC6731309C804DC587642AA27CC (AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203* __this, ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9** ___awaiter0, U3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_tD69FC2C1CB7676C114F1AC8B8D4877AF09E91EB4* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203*, ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9**, U3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_tD69FC2C1CB7676C114F1AC8B8D4877AF09E91EB4*, const RuntimeMethod*))AsyncETVoidMethodBuilder_AwaitUnsafeOnCompleted_TisRuntimeObject_TisU3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_tD69FC2C1CB7676C114F1AC8B8D4877AF09E91EB4_m49D6103BAA01FE76FE5E3286C8D93D681A6B655A_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void ET.ETTaskHelper/<>c__DisplayClass5_0/<<WaitAll>g__RunOneTask|0>d::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_MoveNext_mD2B6DAD55F46CBA1BAA6BFC4717B6411BF98C5A1 (U3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_tD69FC2C1CB7676C114F1AC8B8D4877AF09E91EB4* __this, const RuntimeMethod* method) ;
// System.Void ET.ETTaskHelper/<>c__DisplayClass5_0/<<WaitAll>g__RunOneTask|0>d::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_SetStateMachine_m04EC6DB1C2D31452D4A930BA164228324E293146 (U3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_tD69FC2C1CB7676C114F1AC8B8D4877AF09E91EB4* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void ET.ETTaskHelper/<>c__DisplayClass5_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0__ctor_mC592A74726910254060BD7A5165379A73612DA43 (U3CU3Ec__DisplayClass5_0_t58DC10C24DA5311C6195ED1199782F0126118891* __this, const RuntimeMethod* method) ;
// ET.ETVoid ET.ETTaskHelper/<>c__DisplayClass5_0::<WaitAll>g__RunOneTask|0(ET.ETTask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ETVoid_tFB79A53EB5B1FFC7F4A2428E68797AD75B74DC38 U3CU3Ec__DisplayClass5_0_U3CWaitAllU3Eg__RunOneTaskU7C0_m9382542E84A59B53307BAE06DC605A4055D0146D (U3CU3Ec__DisplayClass5_0_t58DC10C24DA5311C6195ED1199782F0126118891* __this, ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* ___task0, const RuntimeMethod* method) ;
// System.Void ET.ETAsyncTaskMethodBuilder`1<System.Boolean>::AwaitUnsafeOnCompleted<ET.ETTask,ET.ETTaskHelper/<WaitAll>d__5>(TAwaiter&,TStateMachine&)
inline void ETAsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_TisU3CWaitAllU3Ed__5_tA50206C2AA88F82EB79AE3021E9EDE47B6455DED_m3E9C13137AFCE80E5814B80D9DA3C4DACE627064 (ETAsyncTaskMethodBuilder_1_t769C7EF52D8DA1B6EBB8B7AEC7B2D7C854730D31* __this, ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9** ___awaiter0, U3CWaitAllU3Ed__5_tA50206C2AA88F82EB79AE3021E9EDE47B6455DED* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (ETAsyncTaskMethodBuilder_1_t769C7EF52D8DA1B6EBB8B7AEC7B2D7C854730D31*, ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9**, U3CWaitAllU3Ed__5_tA50206C2AA88F82EB79AE3021E9EDE47B6455DED*, const RuntimeMethod*))ETAsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisRuntimeObject_TisU3CWaitAllU3Ed__5_tA50206C2AA88F82EB79AE3021E9EDE47B6455DED_m52C93FFDCFCB3800E439F160A87D392865C415D3_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void ET.ETTaskHelper/<WaitAll>d__5::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitAllU3Ed__5_MoveNext_m5896B4E3831744CD7B6D4E2465B29A9952FAAE73 (U3CWaitAllU3Ed__5_tA50206C2AA88F82EB79AE3021E9EDE47B6455DED* __this, const RuntimeMethod* method) ;
// System.Void ET.ETTaskHelper/<WaitAll>d__5::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitAllU3Ed__5_SetStateMachine_mE9FF048A584A2EA0CC8B07759D1CE214B93FDD49 (U3CWaitAllU3Ed__5_tA50206C2AA88F82EB79AE3021E9EDE47B6455DED* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void ET.AsyncETVoidMethodBuilder::Start<ET.ETTaskHelper/<>c__DisplayClass6_0/<<WaitAll>g__RunOneTask|0>d>(TStateMachine&)
inline void AsyncETVoidMethodBuilder_Start_TisU3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_tC8B9E615EDCA22128352B31CB0005D42DCD70952_mF703CC49BFF53BD376F1D2C4A00507A237512E6E (AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203* __this, U3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_tC8B9E615EDCA22128352B31CB0005D42DCD70952* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203*, U3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_tC8B9E615EDCA22128352B31CB0005D42DCD70952*, const RuntimeMethod*))AsyncETVoidMethodBuilder_Start_TisU3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_tC8B9E615EDCA22128352B31CB0005D42DCD70952_mF703CC49BFF53BD376F1D2C4A00507A237512E6E_gshared)(__this, ___stateMachine0, method);
}
// System.Void ET.AsyncETVoidMethodBuilder::AwaitUnsafeOnCompleted<ET.ETTask,ET.ETTaskHelper/<>c__DisplayClass6_0/<<WaitAll>g__RunOneTask|0>d>(TAwaiter&,TStateMachine&)
inline void AsyncETVoidMethodBuilder_AwaitUnsafeOnCompleted_TisETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_TisU3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_tC8B9E615EDCA22128352B31CB0005D42DCD70952_m7BBF15F324CD989EAAAC7E26FEF23747228CC8D6 (AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203* __this, ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9** ___awaiter0, U3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_tC8B9E615EDCA22128352B31CB0005D42DCD70952* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203*, ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9**, U3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_tC8B9E615EDCA22128352B31CB0005D42DCD70952*, const RuntimeMethod*))AsyncETVoidMethodBuilder_AwaitUnsafeOnCompleted_TisRuntimeObject_TisU3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_tC8B9E615EDCA22128352B31CB0005D42DCD70952_m711C5BAA747560EB6DE3C28B63F58223A14B0C59_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void ET.ETTaskHelper/<>c__DisplayClass6_0/<<WaitAll>g__RunOneTask|0>d::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_MoveNext_mE6E8D66C93025FD6239EDB86C098A5214F652D73 (U3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_tC8B9E615EDCA22128352B31CB0005D42DCD70952* __this, const RuntimeMethod* method) ;
// System.Void ET.ETTaskHelper/<>c__DisplayClass6_0/<<WaitAll>g__RunOneTask|0>d::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_SetStateMachine_mCF501DE82C7EE07B063C4A75C71AC5245D8F594E (U3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_tC8B9E615EDCA22128352B31CB0005D42DCD70952* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void ET.ETTaskHelper/<>c__DisplayClass6_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass6_0__ctor_mB4BE8E3414AAE4FBCECE1D4E864D610D57F70C3C (U3CU3Ec__DisplayClass6_0_t683F5DF1ABBC6076EC981A7D758038E5F5001048* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<ET.ETTask>::get_Count()
inline int32_t List_1_get_Count_m098A3FBEC846D65A6FA1C497181C458CB65EC608_inline (List_1_tA4F47AA2446E3F808EABA13A13F5A8A05B4A5101* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tA4F47AA2446E3F808EABA13A13F5A8A05B4A5101*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// ET.ETVoid ET.ETTaskHelper/<>c__DisplayClass6_0::<WaitAll>g__RunOneTask|0(ET.ETTask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ETVoid_tFB79A53EB5B1FFC7F4A2428E68797AD75B74DC38 U3CU3Ec__DisplayClass6_0_U3CWaitAllU3Eg__RunOneTaskU7C0_mCE1182ADD6A9B03DEE4481D7556D7A64C9BC7AFC (U3CU3Ec__DisplayClass6_0_t683F5DF1ABBC6076EC981A7D758038E5F5001048* __this, ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* ___task0, const RuntimeMethod* method) ;
// System.Void ET.ETAsyncTaskMethodBuilder`1<System.Boolean>::AwaitUnsafeOnCompleted<ET.ETTask,ET.ETTaskHelper/<WaitAll>d__6>(TAwaiter&,TStateMachine&)
inline void ETAsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_TisU3CWaitAllU3Ed__6_t73CAD2CCB5423A31C85967FB33B23FE96219FFBF_mC57852BDD2AAF841B61F73D4DC1445AF7DE956F6 (ETAsyncTaskMethodBuilder_1_t769C7EF52D8DA1B6EBB8B7AEC7B2D7C854730D31* __this, ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9** ___awaiter0, U3CWaitAllU3Ed__6_t73CAD2CCB5423A31C85967FB33B23FE96219FFBF* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (ETAsyncTaskMethodBuilder_1_t769C7EF52D8DA1B6EBB8B7AEC7B2D7C854730D31*, ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9**, U3CWaitAllU3Ed__6_t73CAD2CCB5423A31C85967FB33B23FE96219FFBF*, const RuntimeMethod*))ETAsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisRuntimeObject_TisU3CWaitAllU3Ed__6_t73CAD2CCB5423A31C85967FB33B23FE96219FFBF_m2EE77E3B9956EB0D01827EC2019BB1294CDE6E42_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void ET.ETTaskHelper/<WaitAll>d__6::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitAllU3Ed__6_MoveNext_mC67606D6615193A5AD14D47F4AA3309A557F0CE5 (U3CWaitAllU3Ed__6_t73CAD2CCB5423A31C85967FB33B23FE96219FFBF* __this, const RuntimeMethod* method) ;
// System.Void ET.ETTaskHelper/<WaitAll>d__6::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitAllU3Ed__6_SetStateMachine_m8F2550CD0C39FBA84AF251340E455AE3C5EEF1E4 (U3CWaitAllU3Ed__6_t73CAD2CCB5423A31C85967FB33B23FE96219FFBF* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Boolean ET.ETVoid::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ETVoid_get_IsCompleted_m6EC6117D7E6C71F1ABDA3DD9BFA990560A812572 (ETVoid_tFB79A53EB5B1FFC7F4A2428E68797AD75B74DC38* __this, const RuntimeMethod* method) ;
// System.Void ET.ETVoid::OnCompleted(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETVoid_OnCompleted_mE2A013466ABE3DE81D7193A13C5A88F902274170 (ETVoid_tFB79A53EB5B1FFC7F4A2428E68797AD75B74DC38* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___continuation0, const RuntimeMethod* method) ;
// System.Void ET.ETVoid::UnsafeOnCompleted(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETVoid_UnsafeOnCompleted_mBA7A78A207BDC8D1E2AD8B0D957316B36D224213 (ETVoid_tFB79A53EB5B1FFC7F4A2428E68797AD75B74DC38* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___continuation0, const RuntimeMethod* method) ;
// System.Boolean System.IntPtr::op_Equality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271 (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.UInt32 ET.Kcp::ikcp_check(System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Kcp_ikcp_check_m622BAB3EF82B3FA0D37104F8F36F075F47EACD2C (intptr_t ___kcp0, uint32_t ___current1, const RuntimeMethod* method) ;
// System.IntPtr ET.Kcp::ikcp_create(System.UInt32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Kcp_ikcp_create_m65B289D9825C3E8701AAF805408A5C089A16AD0D (uint32_t ___conv0, intptr_t ___user1, const RuntimeMethod* method) ;
// System.Void ET.Kcp::ikcp_flush(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Kcp_ikcp_flush_m379F0AB1930C706120A548693C76BB8439108F7A (intptr_t ___kcp0, const RuntimeMethod* method) ;
// System.UInt32 ET.Kcp::ikcp_getconv(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Kcp_ikcp_getconv_m7CFD0C1FEF4825D838B385697A49B61A9D3919F7 (intptr_t ___ptr0, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, RuntimeObject* ___arg23, const RuntimeMethod* method) ;
// System.Int32 ET.Kcp::ikcp_input(System.IntPtr,System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Kcp_ikcp_input_mD236CC30373194C4027A7BD6E2561115DB933127 (intptr_t ___kcp0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data1, int32_t ___offset2, int32_t ___size3, const RuntimeMethod* method) ;
// System.Int32 ET.Kcp::ikcp_nodelay(System.IntPtr,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Kcp_ikcp_nodelay_m2AA1F18619F35C9787E1E849E2856BFDBA7AAB54 (intptr_t ___kcp0, int32_t ___nodelay1, int32_t ___interval2, int32_t ___resend3, int32_t ___nc4, const RuntimeMethod* method) ;
// System.Int32 ET.Kcp::ikcp_peeksize(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Kcp_ikcp_peeksize_mF034ED89B138DB85D35CF6F55AE701F9A6A26A71 (intptr_t ___kcp0, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, const RuntimeMethod* method) ;
// System.Int32 ET.Kcp::ikcp_recv(System.IntPtr,System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Kcp_ikcp_recv_m4282CB4E958BB4A5802CE6FDC8DB4BD496B78996 (intptr_t ___kcp0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer1, int32_t ___index2, int32_t ___len3, const RuntimeMethod* method) ;
// System.Void ET.Kcp::ikcp_release(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Kcp_ikcp_release_mFEDEE6822FB19DD4DBA737A9530D29D8AA7CE7BB (intptr_t ___kcp0, const RuntimeMethod* method) ;
// System.Int32 ET.Kcp::ikcp_send(System.IntPtr,System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Kcp_ikcp_send_mC9AAFA8AC4B349A97A368AFA829D77E55C8682A4 (intptr_t ___kcp0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer1, int32_t ___offset2, int32_t ___len3, const RuntimeMethod* method) ;
// System.Void ET.Kcp::ikcp_setminrto(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Kcp_ikcp_setminrto_m6BA2CC874C011FD9ADF9B6D324114B074BED1E3C (intptr_t ___ptr0, int32_t ___minrto1, const RuntimeMethod* method) ;
// System.Int32 ET.Kcp::ikcp_setmtu(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Kcp_ikcp_setmtu_m603F2EA8751291C312C84A8C967E8D576ABED42B (intptr_t ___kcp0, int32_t ___mtu1, const RuntimeMethod* method) ;
// System.Void ET.Kcp::ikcp_setoutput(ET.KcpOutput)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Kcp_ikcp_setoutput_m641E9841DD1F17DE384A86F91F1B76E4CE3BB900 (KcpOutput_t70A2E75BF30C9F6BBFA7EDCCF748E5F9C25F6732* ___output0, const RuntimeMethod* method) ;
// System.Void ET.Kcp::ikcp_setlog(ET.KcpLog)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Kcp_ikcp_setlog_m15CF697BD5FBF75AA0C6D0E1D3A8E88846D56A9F (KcpLog_t166A3A6F579F69B0AA700460B0BF73A4B8C07C5F* ___log0, const RuntimeMethod* method) ;
// System.Void ET.Kcp::ikcp_update(System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Kcp_ikcp_update_mFF3FA1FF289B9117348C6790BA46AF52E0760E29 (intptr_t ___kcp0, uint32_t ___current1, const RuntimeMethod* method) ;
// System.Int32 ET.Kcp::ikcp_waitsnd(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Kcp_ikcp_waitsnd_mB8BCFAC87034508D3392ADDA415892C4AE41B4F4 (intptr_t ___kcp0, const RuntimeMethod* method) ;
// System.Int32 ET.Kcp::ikcp_wndsize(System.IntPtr,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Kcp_ikcp_wndsize_m32F6D50A19B5381B060FAF4A24C8859BAF7EB3CB (intptr_t ___kcp0, int32_t ___sndwnd1, int32_t ___rcvwnd2, const RuntimeMethod* method) ;
// System.IntPtr ET.Recast::RecastLoad(System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recast_RecastLoad_mB4EE23761CD49A97B85FA7639E4DF250BF8FA623 (int32_t ___id0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer1, int32_t ___n2, const RuntimeMethod* method) ;
// System.Int64 System.IntPtr::ToInt64()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t IntPtr_ToInt64_m0F81FB6FB08014074D4F5B915EDAB06A08552032 (intptr_t* __this, const RuntimeMethod* method) ;
// System.IntPtr ET.Recast::RecastGet(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recast_RecastGet_m467619DA580236F07A592226572C394AFA40F497 (int32_t ___id0, const RuntimeMethod* method) ;
// System.Int32 System.IntPtr::ToInt32()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IntPtr_ToInt32_mD53B5D2C73C7E4BE5ADEBC5D187EACC83D5BB292 (intptr_t* __this, const RuntimeMethod* method) ;
// System.Void System.IntPtr::.ctor(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IntPtr__ctor_m2C033540A2F274766CF5C2A120587DD997E3F6DC (intptr_t* __this, int64_t ___value0, const RuntimeMethod* method) ;
// System.Int32 ET.Recast::RecastFind(System.IntPtr,System.Single[],System.Single[],System.Single[],System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Recast_RecastFind_mCBA38176FD73663D69B407633661CCEE4DCF29F0 (intptr_t ___navPtr0, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___extents1, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___startPos2, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___endPos3, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___straightPath4, const RuntimeMethod* method) ;
// System.Int32 ET.Recast::RecastFindNearestPoint(System.IntPtr,System.Single[],System.Single[],System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Recast_RecastFindNearestPoint_m11C47CB1E714AEF02D2C1A46C31EC9E835C5DB4B (intptr_t ___navPtr0, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___extents1, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___pos2, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___nearestPos3, const RuntimeMethod* method) ;
// System.Int32 ET.Recast::RecastFindRandomPointAroundCircle(System.IntPtr,System.Single[],System.Single[],System.Single,System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Recast_RecastFindRandomPointAroundCircle_m56E946B64540AEB84DBB4115045F5F4BE8AB9D56 (intptr_t ___navPtr0, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___extents1, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___centerPos2, float ___radius3, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___randomPos4, const RuntimeMethod* method) ;
// System.Int32 ET.Recast::RecastFindRandomPoint(System.IntPtr,System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Recast_RecastFindRandomPoint_mE48982AD91CF18D8AF76BEDB8958CE8F0F2BBF13 (intptr_t ___navPtr0, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___randomPos1, const RuntimeMethod* method) ;
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_kcp_INTERNAL
IL2CPP_EXTERN_C uint32_t CDECL ikcp_check(intptr_t, uint32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_kcp_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL ikcp_create(uint32_t, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_kcp_INTERNAL
IL2CPP_EXTERN_C void CDECL ikcp_flush(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_kcp_INTERNAL
IL2CPP_EXTERN_C uint32_t CDECL ikcp_getconv(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_kcp_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL ikcp_input(intptr_t, uint8_t*, int32_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_kcp_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL ikcp_nodelay(intptr_t, int32_t, int32_t, int32_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_kcp_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL ikcp_peeksize(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_kcp_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL ikcp_recv(intptr_t, uint8_t*, int32_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_kcp_INTERNAL
IL2CPP_EXTERN_C void CDECL ikcp_release(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_kcp_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL ikcp_send(intptr_t, uint8_t*, int32_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_kcp_INTERNAL
IL2CPP_EXTERN_C void CDECL ikcp_setminrto(intptr_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_kcp_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL ikcp_setmtu(intptr_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_kcp_INTERNAL
IL2CPP_EXTERN_C void CDECL ikcp_setoutput(Il2CppMethodPointer);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_kcp_INTERNAL
IL2CPP_EXTERN_C void CDECL ikcp_setlog(Il2CppMethodPointer);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_kcp_INTERNAL
IL2CPP_EXTERN_C void CDECL ikcp_update(intptr_t, uint32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_kcp_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL ikcp_waitsnd(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_kcp_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL ikcp_wndsize(intptr_t, int32_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_RecastDll_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL RecastLoad(int32_t, uint8_t*, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_RecastDll_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL RecastGet(int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_RecastDll_INTERNAL
IL2CPP_EXTERN_C void CDECL RecastClear();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_RecastDll_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL RecastFind(intptr_t, float*, float*, float*, float*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_RecastDll_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL RecastFindNearestPoint(intptr_t, float*, float*, float*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_RecastDll_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL RecastFindRandomPointAroundCircle(intptr_t, float*, float*, float, float*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_RecastDll_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL RecastFindRandomPoint(intptr_t, float*);
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// ILRuntime.CLR.TypeSystem.IType ILRuntime.CLR.Method.CLRMethod::get_DeclearingType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CLRMethod_get_DeclearingType_mC1EA3C987B8420A99B021251423B89A05F61A297 (CLRMethod_t7DF49A5C4FF255B056BFEE0BFDF137AEF905FFF5* __this, const RuntimeMethod* method) 
{
	{
		// return declaringType;
		CLRType_t72C55A04EDC2A68F969A27FE7DB52F5A198D437F* L_0 = __this->___declaringType_5;
		return L_0;
	}
}
// System.String ILRuntime.CLR.Method.CLRMethod::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CLRMethod_get_Name_m3F97093CE54A38D652147E21E795352E88B22D57 (CLRMethod_t7DF49A5C4FF255B056BFEE0BFDF137AEF905FFF5* __this, const RuntimeMethod* method) 
{
	{
		// return def.Name;
		MethodInfo_t* L_0 = __this->___def_0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(12 /* System.String System.Reflection.MemberInfo::get_Name() */, L_0);
		return L_1;
	}
}
// System.Boolean ILRuntime.CLR.Method.CLRMethod::get_HasThis()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CLRMethod_get_HasThis_m15B54B637AF67B4009FE2D39A6DF895C7BE7F7E1 (CLRMethod_t7DF49A5C4FF255B056BFEE0BFDF137AEF905FFF5* __this, const RuntimeMethod* method) 
{
	{
		// return isConstructor ? !cDef.IsStatic : !def.IsStatic;
		bool L_0 = __this->___isConstructor_6;
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		MethodInfo_t* L_1 = __this->___def_0;
		NullCheck(L_1);
		bool L_2;
		L_2 = MethodBase_get_IsStatic_mD2921396167EC4F99E2ADC46C39CCCEC3CD0E16E(L_1, NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}

IL_0017:
	{
		ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* L_3 = __this->___cDef_1;
		NullCheck(L_3);
		bool L_4;
		L_4 = MethodBase_get_IsStatic_mD2921396167EC4F99E2ADC46C39CCCEC3CD0E16E(L_3, NULL);
		return (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
	}
}
// System.Int32 ILRuntime.CLR.Method.CLRMethod::get_GenericParameterCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CLRMethod_get_GenericParameterCount_m3225A872B2121A127549471AE128A8193E214ADC (CLRMethod_t7DF49A5C4FF255B056BFEE0BFDF137AEF905FFF5* __this, const RuntimeMethod* method) 
{
	{
		// if (_genericParameterCount == -1)
		int32_t L_0 = __this->____genericParameterCount_15;
		if ((!(((uint32_t)L_0) == ((uint32_t)(-1)))))
		{
			goto IL_003f;
		}
	}
	{
		// if (def.ContainsGenericParameters && def.IsGenericMethodDefinition)
		MethodInfo_t* L_1 = __this->___def_0;
		NullCheck(L_1);
		bool L_2;
		L_2 = VirtualFuncInvoker0< bool >::Invoke(47 /* System.Boolean System.Reflection.MethodBase::get_ContainsGenericParameters() */, L_1);
		if (!L_2)
		{
			goto IL_0038;
		}
	}
	{
		MethodInfo_t* L_3 = __this->___def_0;
		NullCheck(L_3);
		bool L_4;
		L_4 = VirtualFuncInvoker0< bool >::Invoke(45 /* System.Boolean System.Reflection.MethodBase::get_IsGenericMethodDefinition() */, L_3);
		if (!L_4)
		{
			goto IL_0038;
		}
	}
	{
		// _genericParameterCount = def.GetGenericArguments().Length;
		MethodInfo_t* L_5 = __this->___def_0;
		NullCheck(L_5);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_6;
		L_6 = VirtualFuncInvoker0< TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* >::Invoke(46 /* System.Type[] System.Reflection.MethodBase::GetGenericArguments() */, L_5);
		NullCheck(L_6);
		__this->____genericParameterCount_15 = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		goto IL_003f;
	}

IL_0038:
	{
		// _genericParameterCount = 0;
		__this->____genericParameterCount_15 = 0;
	}

IL_003f:
	{
		// return _genericParameterCount;
		int32_t L_7 = __this->____genericParameterCount_15;
		return L_7;
	}
}
// System.Boolean ILRuntime.CLR.Method.CLRMethod::get_IsGenericInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CLRMethod_get_IsGenericInstance_mFC58569492FB64BB62EFEFAA6CF75FEE479B6D73 (CLRMethod_t7DF49A5C4FF255B056BFEE0BFDF137AEF905FFF5* __this, const RuntimeMethod* method) 
{
	{
		// return genericArguments != null;
		ITypeU5BU5D_tADD584F6D2F1E810AEF7DB2DCA16027722B50991* L_0 = __this->___genericArguments_8;
		return (bool)((!(((RuntimeObject*)(ITypeU5BU5D_tADD584F6D2F1E810AEF7DB2DCA16027722B50991*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
// System.Boolean ILRuntime.CLR.Method.CLRMethod::get_IsDelegateInvoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CLRMethod_get_IsDelegateInvoke_m9D3D77DCEFD43741B14FDD7D221046A5397D55A5 (CLRMethod_t7DF49A5C4FF255B056BFEE0BFDF137AEF905FFF5* __this, const RuntimeMethod* method) 
{
	{
		// return isDelegateInvoke;
		bool L_0 = __this->___isDelegateInvoke_11;
		return L_0;
	}
}
// System.Boolean ILRuntime.CLR.Method.CLRMethod::get_IsDelegateDynamicInvoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CLRMethod_get_IsDelegateDynamicInvoke_m519216888F8EDAAFEF6E5C5943EB5A04A1895046 (CLRMethod_t7DF49A5C4FF255B056BFEE0BFDF137AEF905FFF5* __this, const RuntimeMethod* method) 
{
	{
		// return isDelegateDynamicInvoke;
		bool L_0 = __this->___isDelegateDynamicInvoke_12;
		return L_0;
	}
}
// System.Boolean ILRuntime.CLR.Method.CLRMethod::get_IsStatic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CLRMethod_get_IsStatic_m66F4EDB78E7250E98FA4902256C0E048BD3EB68C (CLRMethod_t7DF49A5C4FF255B056BFEE0BFDF137AEF905FFF5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (cDef != null)
		ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* L_0 = __this->___cDef_1;
		il2cpp_codegen_runtime_class_init_inline(ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = ConstructorInfo_op_Inequality_mB3CB8B779FA4400BBF7069097CC64E6CA1D235A4(L_0, (ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// return cDef.IsStatic;
		ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* L_2 = __this->___cDef_1;
		NullCheck(L_2);
		bool L_3;
		L_3 = MethodBase_get_IsStatic_mD2921396167EC4F99E2ADC46C39CCCEC3CD0E16E(L_2, NULL);
		return L_3;
	}

IL_001a:
	{
		// return def.IsStatic;
		MethodInfo_t* L_4 = __this->___def_0;
		NullCheck(L_4);
		bool L_5;
		L_5 = MethodBase_get_IsStatic_mD2921396167EC4F99E2ADC46C39CCCEC3CD0E16E(L_4, NULL);
		return L_5;
	}
}
// ILRuntime.Runtime.Enviorment.CLRRedirectionDelegate ILRuntime.CLR.Method.CLRMethod::get_Redirection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CLRRedirectionDelegate_tF96884F0BC45FF631DAED91A526F4190B9753690* CLRMethod_get_Redirection_m1EC36A8E9F21161A233ED40C9ED815795F58C795 (CLRMethod_t7DF49A5C4FF255B056BFEE0BFDF137AEF905FFF5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mFA115DAA0C795A9E122300A1D3D6E48DEFD4FE54_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (redirect == null)
		CLRRedirectionDelegate_tF96884F0BC45FF631DAED91A526F4190B9753690* L_0 = __this->___redirect_7;
		if (L_0)
		{
			goto IL_00bf;
		}
	}
	{
		// if (def != null)
		MethodInfo_t* L_1 = __this->___def_0;
		bool L_2;
		L_2 = MethodInfo_op_Inequality_mB73597A1FCC2F906DBCADDEC68A1B7D5B7E89FA8(L_1, (MethodInfo_t*)NULL, NULL);
		if (!L_2)
		{
			goto IL_0094;
		}
	}
	{
		// if (def.IsGenericMethod && !def.IsGenericMethodDefinition)
		MethodInfo_t* L_3 = __this->___def_0;
		NullCheck(L_3);
		bool L_4;
		L_4 = VirtualFuncInvoker0< bool >::Invoke(44 /* System.Boolean System.Reflection.MethodBase::get_IsGenericMethod() */, L_3);
		if (!L_4)
		{
			goto IL_0075;
		}
	}
	{
		MethodInfo_t* L_5 = __this->___def_0;
		NullCheck(L_5);
		bool L_6;
		L_6 = VirtualFuncInvoker0< bool >::Invoke(45 /* System.Boolean System.Reflection.MethodBase::get_IsGenericMethodDefinition() */, L_5);
		if (L_6)
		{
			goto IL_0075;
		}
	}
	{
		// if (!appdomain.RedirectMap.TryGetValue(def.GetGenericMethodDefinition(), out redirect))
		AppDomain_tFFEF01BA23D79DA3A22C21195FD262862037E506* L_7 = __this->___appdomain_4;
		NullCheck(L_7);
		Dictionary_2_tBCF477C8957A7776ED771401B7A91BC5EB9B45E5* L_8;
		L_8 = AppDomain_get_RedirectMap_m42A5D4F3A0A14585955A39D7C7BF093ECBFEFF01(L_7, NULL);
		MethodInfo_t* L_9 = __this->___def_0;
		NullCheck(L_9);
		MethodInfo_t* L_10;
		L_10 = VirtualFuncInvoker0< MethodInfo_t* >::Invoke(61 /* System.Reflection.MethodInfo System.Reflection.MethodInfo::GetGenericMethodDefinition() */, L_9);
		CLRRedirectionDelegate_tF96884F0BC45FF631DAED91A526F4190B9753690** L_11 = (&__this->___redirect_7);
		NullCheck(L_8);
		bool L_12;
		L_12 = Dictionary_2_TryGetValue_mFA115DAA0C795A9E122300A1D3D6E48DEFD4FE54(L_8, L_10, L_11, Dictionary_2_TryGetValue_mFA115DAA0C795A9E122300A1D3D6E48DEFD4FE54_RuntimeMethod_var);
		if (L_12)
		{
			goto IL_00bf;
		}
	}
	{
		// appdomain.RedirectMap.TryGetValue(def, out redirect);
		AppDomain_tFFEF01BA23D79DA3A22C21195FD262862037E506* L_13 = __this->___appdomain_4;
		NullCheck(L_13);
		Dictionary_2_tBCF477C8957A7776ED771401B7A91BC5EB9B45E5* L_14;
		L_14 = AppDomain_get_RedirectMap_m42A5D4F3A0A14585955A39D7C7BF093ECBFEFF01(L_13, NULL);
		MethodInfo_t* L_15 = __this->___def_0;
		CLRRedirectionDelegate_tF96884F0BC45FF631DAED91A526F4190B9753690** L_16 = (&__this->___redirect_7);
		NullCheck(L_14);
		bool L_17;
		L_17 = Dictionary_2_TryGetValue_mFA115DAA0C795A9E122300A1D3D6E48DEFD4FE54(L_14, L_15, L_16, Dictionary_2_TryGetValue_mFA115DAA0C795A9E122300A1D3D6E48DEFD4FE54_RuntimeMethod_var);
		goto IL_00bf;
	}

IL_0075:
	{
		// appdomain.RedirectMap.TryGetValue(def, out redirect);
		AppDomain_tFFEF01BA23D79DA3A22C21195FD262862037E506* L_18 = __this->___appdomain_4;
		NullCheck(L_18);
		Dictionary_2_tBCF477C8957A7776ED771401B7A91BC5EB9B45E5* L_19;
		L_19 = AppDomain_get_RedirectMap_m42A5D4F3A0A14585955A39D7C7BF093ECBFEFF01(L_18, NULL);
		MethodInfo_t* L_20 = __this->___def_0;
		CLRRedirectionDelegate_tF96884F0BC45FF631DAED91A526F4190B9753690** L_21 = (&__this->___redirect_7);
		NullCheck(L_19);
		bool L_22;
		L_22 = Dictionary_2_TryGetValue_mFA115DAA0C795A9E122300A1D3D6E48DEFD4FE54(L_19, L_20, L_21, Dictionary_2_TryGetValue_mFA115DAA0C795A9E122300A1D3D6E48DEFD4FE54_RuntimeMethod_var);
		goto IL_00bf;
	}

IL_0094:
	{
		// else if (cDef != null)
		ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* L_23 = __this->___cDef_1;
		il2cpp_codegen_runtime_class_init_inline(ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB_il2cpp_TypeInfo_var);
		bool L_24;
		L_24 = ConstructorInfo_op_Inequality_mB3CB8B779FA4400BBF7069097CC64E6CA1D235A4(L_23, (ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB*)NULL, NULL);
		if (!L_24)
		{
			goto IL_00bf;
		}
	}
	{
		// appdomain.RedirectMap.TryGetValue(cDef, out redirect);
		AppDomain_tFFEF01BA23D79DA3A22C21195FD262862037E506* L_25 = __this->___appdomain_4;
		NullCheck(L_25);
		Dictionary_2_tBCF477C8957A7776ED771401B7A91BC5EB9B45E5* L_26;
		L_26 = AppDomain_get_RedirectMap_m42A5D4F3A0A14585955A39D7C7BF093ECBFEFF01(L_25, NULL);
		ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* L_27 = __this->___cDef_1;
		CLRRedirectionDelegate_tF96884F0BC45FF631DAED91A526F4190B9753690** L_28 = (&__this->___redirect_7);
		NullCheck(L_26);
		bool L_29;
		L_29 = Dictionary_2_TryGetValue_mFA115DAA0C795A9E122300A1D3D6E48DEFD4FE54(L_26, L_27, L_28, Dictionary_2_TryGetValue_mFA115DAA0C795A9E122300A1D3D6E48DEFD4FE54_RuntimeMethod_var);
	}

IL_00bf:
	{
		// return redirect;
		CLRRedirectionDelegate_tF96884F0BC45FF631DAED91A526F4190B9753690* L_30 = __this->___redirect_7;
		return L_30;
	}
}
// System.Reflection.MethodInfo ILRuntime.CLR.Method.CLRMethod::get_MethodInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t* CLRMethod_get_MethodInfo_mA20BF96B9EF5F7021E583C5E10EBEB616A2A1779 (CLRMethod_t7DF49A5C4FF255B056BFEE0BFDF137AEF905FFF5* __this, const RuntimeMethod* method) 
{
	{
		// public MethodInfo MethodInfo { get { return def; } }
		MethodInfo_t* L_0 = __this->___def_0;
		return L_0;
	}
}
// System.Reflection.ConstructorInfo ILRuntime.CLR.Method.CLRMethod::get_ConstructorInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* CLRMethod_get_ConstructorInfo_m3BB81729E9EA9182D2F6A562A41FF74391D7C984 (CLRMethod_t7DF49A5C4FF255B056BFEE0BFDF137AEF905FFF5* __this, const RuntimeMethod* method) 
{
	{
		// public ConstructorInfo ConstructorInfo { get { return cDef; } }
		ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* L_0 = __this->___cDef_1;
		return L_0;
	}
}
// ILRuntime.CLR.TypeSystem.IType[] ILRuntime.CLR.Method.CLRMethod::get_GenericArguments()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ITypeU5BU5D_tADD584F6D2F1E810AEF7DB2DCA16027722B50991* CLRMethod_get_GenericArguments_m53D5FC1DE89FD8476457C90BC39D3AEA4E05D4D2 (CLRMethod_t7DF49A5C4FF255B056BFEE0BFDF137AEF905FFF5* __this, const RuntimeMethod* method) 
{
	{
		// public IType[] GenericArguments { get { return genericArguments; } }
		ITypeU5BU5D_tADD584F6D2F1E810AEF7DB2DCA16027722B50991* L_0 = __this->___genericArguments_8;
		return L_0;
	}
}
// System.Type[] ILRuntime.CLR.Method.CLRMethod::get_GenericArgumentsCLR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* CLRMethod_get_GenericArgumentsCLR_m6804D8AF38033C7B6FBBAAD18FBE38888A8FB69C (CLRMethod_t7DF49A5C4FF255B056BFEE0BFDF137AEF905FFF5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (genericArgumentsCLR == null)
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_0 = __this->___genericArgumentsCLR_9;
		if (L_0)
		{
			goto IL_003a;
		}
	}
	{
		// if (cDef != null)
		ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* L_1 = __this->___cDef_1;
		il2cpp_codegen_runtime_class_init_inline(ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = ConstructorInfo_op_Inequality_mB3CB8B779FA4400BBF7069097CC64E6CA1D235A4(L_1, (ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB*)NULL, NULL);
		if (!L_2)
		{
			goto IL_0029;
		}
	}
	{
		// genericArgumentsCLR = cDef.GetGenericArguments();
		ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* L_3 = __this->___cDef_1;
		NullCheck(L_3);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_4;
		L_4 = VirtualFuncInvoker0< TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* >::Invoke(46 /* System.Type[] System.Reflection.MethodBase::GetGenericArguments() */, L_3);
		__this->___genericArgumentsCLR_9 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___genericArgumentsCLR_9), (void*)L_4);
		goto IL_003a;
	}

IL_0029:
	{
		// genericArgumentsCLR = def.GetGenericArguments();
		MethodInfo_t* L_5 = __this->___def_0;
		NullCheck(L_5);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_6;
		L_6 = VirtualFuncInvoker0< TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* >::Invoke(46 /* System.Type[] System.Reflection.MethodBase::GetGenericArguments() */, L_5);
		__this->___genericArgumentsCLR_9 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___genericArgumentsCLR_9), (void*)L_6);
	}

IL_003a:
	{
		// return genericArgumentsCLR;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_7 = __this->___genericArgumentsCLR_9;
		return L_7;
	}
}
// System.Void ILRuntime.CLR.Method.CLRMethod::.ctor(System.Reflection.MethodInfo,ILRuntime.CLR.TypeSystem.CLRType,ILRuntime.Runtime.Enviorment.AppDomain)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CLRMethod__ctor_m246973F5914F20EFEBF8DDA88EBAEFA2C607C274 (CLRMethod_t7DF49A5C4FF255B056BFEE0BFDF137AEF905FFF5* __this, MethodInfo_t* ___def0, CLRType_t72C55A04EDC2A68F969A27FE7DB52F5A198D437F* ___type1, AppDomain_tFFEF01BA23D79DA3A22C21195FD262862037E506* ___domain2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1AE2330C2783C940AC8185003D0F2B7B95AE6B58);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD7A66F857F6E3FCCC482964755DB79017BF35DD2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// int hashCode = -1;
		__this->___hashCode_13 = (-1);
		// int _genericParameterCount = -1;
		__this->____genericParameterCount_15 = (-1);
		// internal CLRMethod(MethodInfo def, CLRType type, ILRuntime.Runtime.Enviorment.AppDomain domain)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.def = def;
		MethodInfo_t* L_0 = ___def0;
		__this->___def_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___def_0), (void*)L_0);
		// declaringType = type;
		CLRType_t72C55A04EDC2A68F969A27FE7DB52F5A198D437F* L_1 = ___type1;
		__this->___declaringType_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___declaringType_5), (void*)L_1);
		// this.appdomain = domain;
		AppDomain_tFFEF01BA23D79DA3A22C21195FD262862037E506* L_2 = ___domain2;
		__this->___appdomain_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___appdomain_4), (void*)L_2);
		// if (!def.ContainsGenericParameters)
		MethodInfo_t* L_3 = ___def0;
		NullCheck(L_3);
		bool L_4;
		L_4 = VirtualFuncInvoker0< bool >::Invoke(47 /* System.Boolean System.Reflection.MethodBase::get_ContainsGenericParameters() */, L_3);
		if (L_4)
		{
			goto IL_0067;
		}
	}
	{
		// ReturnType = domain.GetType(def.ReturnType.FullName);
		AppDomain_tFFEF01BA23D79DA3A22C21195FD262862037E506* L_5 = ___domain2;
		MethodInfo_t* L_6 = ___def0;
		NullCheck(L_6);
		Type_t* L_7;
		L_7 = VirtualFuncInvoker0< Type_t* >::Invoke(60 /* System.Type System.Reflection.MethodInfo::get_ReturnType() */, L_6);
		NullCheck(L_7);
		String_t* L_8;
		L_8 = VirtualFuncInvoker0< String_t* >::Invoke(40 /* System.String System.Type::get_FullName() */, L_7);
		NullCheck(L_5);
		RuntimeObject* L_9;
		L_9 = AppDomain_GetType_m05A6BC3059C74ADF2B7F22C2C39947D011FDE169(L_5, L_8, NULL);
		CLRMethod_set_ReturnType_mD36DB3457CFAF03FDBDBA4A31E237C7DA1815858_inline(__this, L_9, NULL);
		// if (ReturnType == null)
		RuntimeObject* L_10;
		L_10 = CLRMethod_get_ReturnType_m6945E1D7376126D59133420C4A85C878D8F17952_inline(__this, NULL);
		if (L_10)
		{
			goto IL_0067;
		}
	}
	{
		// ReturnType = domain.GetType(def.ReturnType.AssemblyQualifiedName);
		AppDomain_tFFEF01BA23D79DA3A22C21195FD262862037E506* L_11 = ___domain2;
		MethodInfo_t* L_12 = ___def0;
		NullCheck(L_12);
		Type_t* L_13;
		L_13 = VirtualFuncInvoker0< Type_t* >::Invoke(60 /* System.Type System.Reflection.MethodInfo::get_ReturnType() */, L_12);
		NullCheck(L_13);
		String_t* L_14;
		L_14 = VirtualFuncInvoker0< String_t* >::Invoke(39 /* System.String System.Type::get_AssemblyQualifiedName() */, L_13);
		NullCheck(L_11);
		RuntimeObject* L_15;
		L_15 = AppDomain_GetType_m05A6BC3059C74ADF2B7F22C2C39947D011FDE169(L_11, L_14, NULL);
		CLRMethod_set_ReturnType_mD36DB3457CFAF03FDBDBA4A31E237C7DA1815858_inline(__this, L_15, NULL);
	}

IL_0067:
	{
		// if (type.IsDelegate)
		CLRType_t72C55A04EDC2A68F969A27FE7DB52F5A198D437F* L_16 = ___type1;
		NullCheck(L_16);
		bool L_17;
		L_17 = CLRType_get_IsDelegate_m70EBE1A937EBE57679E84B4EEC289523AD50AE1E_inline(L_16, NULL);
		if (!L_17)
		{
			goto IL_00a8;
		}
	}
	{
		// if (def.Name == "Invoke")
		MethodInfo_t* L_18 = ___def0;
		NullCheck(L_18);
		String_t* L_19;
		L_19 = VirtualFuncInvoker0< String_t* >::Invoke(12 /* System.String System.Reflection.MemberInfo::get_Name() */, L_18);
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteralD7A66F857F6E3FCCC482964755DB79017BF35DD2, NULL);
		if (!L_20)
		{
			goto IL_0088;
		}
	}
	{
		// isDelegateInvoke = true;
		__this->___isDelegateInvoke_11 = (bool)1;
	}

IL_0088:
	{
		// if (def.Name == "DynamicInvoke")
		MethodInfo_t* L_21 = ___def0;
		NullCheck(L_21);
		String_t* L_22;
		L_22 = VirtualFuncInvoker0< String_t* >::Invoke(12 /* System.String System.Reflection.MemberInfo::get_Name() */, L_21);
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral1AE2330C2783C940AC8185003D0F2B7B95AE6B58, NULL);
		if (!L_23)
		{
			goto IL_00a8;
		}
	}
	{
		// isDelegateInvoke = true;
		__this->___isDelegateInvoke_11 = (bool)1;
		// isDelegateDynamicInvoke = true;
		__this->___isDelegateDynamicInvoke_12 = (bool)1;
	}

IL_00a8:
	{
		// isConstructor = false;
		__this->___isConstructor_6 = (bool)0;
		// }
		return;
	}
}
// System.Void ILRuntime.CLR.Method.CLRMethod::.ctor(System.Reflection.ConstructorInfo,ILRuntime.CLR.TypeSystem.CLRType,ILRuntime.Runtime.Enviorment.AppDomain)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CLRMethod__ctor_m1A8BCFF6764D65FD3127136FA221503D2FBE01AF (CLRMethod_t7DF49A5C4FF255B056BFEE0BFDF137AEF905FFF5* __this, ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* ___def0, CLRType_t72C55A04EDC2A68F969A27FE7DB52F5A198D437F* ___type1, AppDomain_tFFEF01BA23D79DA3A22C21195FD262862037E506* ___domain2, const RuntimeMethod* method) 
{
	{
		// int hashCode = -1;
		__this->___hashCode_13 = (-1);
		// int _genericParameterCount = -1;
		__this->____genericParameterCount_15 = (-1);
		// internal CLRMethod(ConstructorInfo def, CLRType type, ILRuntime.Runtime.Enviorment.AppDomain domain)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.cDef = def;
		ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* L_0 = ___def0;
		__this->___cDef_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___cDef_1), (void*)L_0);
		// declaringType = type;
		CLRType_t72C55A04EDC2A68F969A27FE7DB52F5A198D437F* L_1 = ___type1;
		__this->___declaringType_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___declaringType_5), (void*)L_1);
		// this.appdomain = domain;
		AppDomain_tFFEF01BA23D79DA3A22C21195FD262862037E506* L_2 = ___domain2;
		__this->___appdomain_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___appdomain_4), (void*)L_2);
		// if (!def.ContainsGenericParameters)
		ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* L_3 = ___def0;
		NullCheck(L_3);
		bool L_4;
		L_4 = VirtualFuncInvoker0< bool >::Invoke(47 /* System.Boolean System.Reflection.MethodBase::get_ContainsGenericParameters() */, L_3);
		if (L_4)
		{
			goto IL_0038;
		}
	}
	{
		// ReturnType = type;
		CLRType_t72C55A04EDC2A68F969A27FE7DB52F5A198D437F* L_5 = ___type1;
		CLRMethod_set_ReturnType_mD36DB3457CFAF03FDBDBA4A31E237C7DA1815858_inline(__this, L_5, NULL);
	}

IL_0038:
	{
		// isConstructor = true;
		__this->___isConstructor_6 = (bool)1;
		// }
		return;
	}
}
// System.Int32 ILRuntime.CLR.Method.CLRMethod::get_ParameterCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CLRMethod_get_ParameterCount_mE781F880D1B9196A9382C6A381BAD4070FE3622F (CLRMethod_t7DF49A5C4FF255B056BFEE0BFDF137AEF905FFF5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m85C0F032DCB5D6814A7025C9AC1BB586F662E2A4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Parameters.Count;
		List_1_t136E925D19ADF1AFF60DF33114FEC34DD1EAFD75* L_0;
		L_0 = CLRMethod_get_Parameters_mC66DC507A5E7793018B3F91F2AAABC3E618D5C9B(__this, NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m85C0F032DCB5D6814A7025C9AC1BB586F662E2A4_inline(L_0, List_1_get_Count_m85C0F032DCB5D6814A7025C9AC1BB586F662E2A4_RuntimeMethod_var);
		return L_1;
	}
}
// System.Collections.Generic.List`1<ILRuntime.CLR.TypeSystem.IType> ILRuntime.CLR.Method.CLRMethod::get_Parameters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t136E925D19ADF1AFF60DF33114FEC34DD1EAFD75* CLRMethod_get_Parameters_mC66DC507A5E7793018B3F91F2AAABC3E618D5C9B (CLRMethod_t7DF49A5C4FF255B056BFEE0BFDF137AEF905FFF5* __this, const RuntimeMethod* method) 
{
	{
		// if (parameters == null)
		List_1_t136E925D19ADF1AFF60DF33114FEC34DD1EAFD75* L_0 = __this->___parameters_2;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// InitParameters();
		CLRMethod_InitParameters_m7C8BF0B548C7498E64ED61330980BAAC6C0DB423(__this, NULL);
	}

IL_000e:
	{
		// return parameters;
		List_1_t136E925D19ADF1AFF60DF33114FEC34DD1EAFD75* L_1 = __this->___parameters_2;
		return L_1;
	}
}
// System.Reflection.ParameterInfo[] ILRuntime.CLR.Method.CLRMethod::get_ParametersCLR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* CLRMethod_get_ParametersCLR_m5467ACF4503B380903B245CBE6021DACA6D31144 (CLRMethod_t7DF49A5C4FF255B056BFEE0BFDF137AEF905FFF5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (parametersCLR == null)
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_0 = __this->___parametersCLR_3;
		if (L_0)
		{
			goto IL_003a;
		}
	}
	{
		// if (cDef != null)
		ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* L_1 = __this->___cDef_1;
		il2cpp_codegen_runtime_class_init_inline(ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = ConstructorInfo_op_Inequality_mB3CB8B779FA4400BBF7069097CC64E6CA1D235A4(L_1, (ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB*)NULL, NULL);
		if (!L_2)
		{
			goto IL_0029;
		}
	}
	{
		// parametersCLR = cDef.GetParameters();
		ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* L_3 = __this->___cDef_1;
		NullCheck(L_3);
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_4;
		L_4 = VirtualFuncInvoker0< ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* >::Invoke(24 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_3);
		__this->___parametersCLR_3 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___parametersCLR_3), (void*)L_4);
		goto IL_003a;
	}

IL_0029:
	{
		// parametersCLR = def.GetParameters();
		MethodInfo_t* L_5 = __this->___def_0;
		NullCheck(L_5);
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_6;
		L_6 = VirtualFuncInvoker0< ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* >::Invoke(24 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_5);
		__this->___parametersCLR_3 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___parametersCLR_3), (void*)L_6);
	}

IL_003a:
	{
		// return parametersCLR;
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_7 = __this->___parametersCLR_3;
		return L_7;
	}
}
// ILRuntime.CLR.TypeSystem.IType ILRuntime.CLR.Method.CLRMethod::get_ReturnType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CLRMethod_get_ReturnType_m6945E1D7376126D59133420C4A85C878D8F17952 (CLRMethod_t7DF49A5C4FF255B056BFEE0BFDF137AEF905FFF5* __this, const RuntimeMethod* method) 
{
	{
		// get;
		RuntimeObject* L_0 = __this->___U3CReturnTypeU3Ek__BackingField_16;
		return L_0;
	}
}
// System.Void ILRuntime.CLR.Method.CLRMethod::set_ReturnType(ILRuntime.CLR.TypeSystem.IType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CLRMethod_set_ReturnType_mD36DB3457CFAF03FDBDBA4A31E237C7DA1815858 (CLRMethod_t7DF49A5C4FF255B056BFEE0BFDF137AEF905FFF5* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		// private set;
		RuntimeObject* L_0 = ___value0;
		__this->___U3CReturnTypeU3Ek__BackingField_16 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CReturnTypeU3Ek__BackingField_16), (void*)L_0);
		return;
	}
}
// System.Boolean ILRuntime.CLR.Method.CLRMethod::get_IsConstructor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CLRMethod_get_IsConstructor_m7212E6849B7EAC4C5BC98A10C37100FF4AD376AB (CLRMethod_t7DF49A5C4FF255B056BFEE0BFDF137AEF905FFF5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return cDef != null;
		ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* L_0 = __this->___cDef_1;
		il2cpp_codegen_runtime_class_init_inline(ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = ConstructorInfo_op_Inequality_mB3CB8B779FA4400BBF7069097CC64E6CA1D235A4(L_0, (ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB*)NULL, NULL);
		return L_1;
	}
}
// System.Void ILRuntime.CLR.Method.CLRMethod::InitParameters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CLRMethod_InitParameters_m7C8BF0B548C7498E64ED61330980BAAC6C0DB423 (CLRMethod_t7DF49A5C4FF255B056BFEE0BFDF137AEF905FFF5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILGenericParameterType_tD3907D5D02CED0831ACEC5A4A288F3A6C6E0889B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m3F51DF5D911FE86B020CC8DD004AC5A96492A070_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m44EE83E964CDEA8BDD3569AD8FF75A7ADDC834BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t136E925D19ADF1AFF60DF33114FEC34DD1EAFD75_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* V_0 = NULL;
	int32_t V_1 = 0;
	ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	Type_t* V_4 = NULL;
	{
		// parameters = new List<IType>();
		List_1_t136E925D19ADF1AFF60DF33114FEC34DD1EAFD75* L_0 = (List_1_t136E925D19ADF1AFF60DF33114FEC34DD1EAFD75*)il2cpp_codegen_object_new(List_1_t136E925D19ADF1AFF60DF33114FEC34DD1EAFD75_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m44EE83E964CDEA8BDD3569AD8FF75A7ADDC834BD(L_0, List_1__ctor_m44EE83E964CDEA8BDD3569AD8FF75A7ADDC834BD_RuntimeMethod_var);
		__this->___parameters_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___parameters_2), (void*)L_0);
		// foreach (var i in ParametersCLR)
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_1;
		L_1 = CLRMethod_get_ParametersCLR_m5467ACF4503B380903B245CBE6021DACA6D31144(__this, NULL);
		V_0 = L_1;
		V_1 = 0;
		goto IL_0101;
	}

IL_0019:
	{
		// foreach (var i in ParametersCLR)
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_2 = L_5;
		// IType type = appdomain.GetType(i.ParameterType.FullName);
		AppDomain_tFFEF01BA23D79DA3A22C21195FD262862037E506* L_6 = __this->___appdomain_4;
		ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* L_7 = V_2;
		NullCheck(L_7);
		Type_t* L_8;
		L_8 = VirtualFuncInvoker0< Type_t* >::Invoke(10 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_7);
		NullCheck(L_8);
		String_t* L_9;
		L_9 = VirtualFuncInvoker0< String_t* >::Invoke(40 /* System.String System.Type::get_FullName() */, L_8);
		NullCheck(L_6);
		RuntimeObject* L_10;
		L_10 = AppDomain_GetType_m05A6BC3059C74ADF2B7F22C2C39947D011FDE169(L_6, L_9, NULL);
		V_3 = L_10;
		// if (type == null)
		RuntimeObject* L_11 = V_3;
		if (L_11)
		{
			goto IL_004e;
		}
	}
	{
		// type = appdomain.GetType(i.ParameterType.AssemblyQualifiedName);
		AppDomain_tFFEF01BA23D79DA3A22C21195FD262862037E506* L_12 = __this->___appdomain_4;
		ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* L_13 = V_2;
		NullCheck(L_13);
		Type_t* L_14;
		L_14 = VirtualFuncInvoker0< Type_t* >::Invoke(10 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_13);
		NullCheck(L_14);
		String_t* L_15;
		L_15 = VirtualFuncInvoker0< String_t* >::Invoke(39 /* System.String System.Type::get_AssemblyQualifiedName() */, L_14);
		NullCheck(L_12);
		RuntimeObject* L_16;
		L_16 = AppDomain_GetType_m05A6BC3059C74ADF2B7F22C2C39947D011FDE169(L_12, L_15, NULL);
		V_3 = L_16;
	}

IL_004e:
	{
		// if (i.ParameterType.IsGenericTypeDefinition)
		ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* L_17 = V_2;
		NullCheck(L_17);
		Type_t* L_18;
		L_18 = VirtualFuncInvoker0< Type_t* >::Invoke(10 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_17);
		NullCheck(L_18);
		bool L_19;
		L_19 = VirtualFuncInvoker0< bool >::Invoke(57 /* System.Boolean System.Type::get_IsGenericTypeDefinition() */, L_18);
		if (!L_19)
		{
			goto IL_0099;
		}
	}
	{
		// if (type == null)
		RuntimeObject* L_20 = V_3;
		if (L_20)
		{
			goto IL_007a;
		}
	}
	{
		// type = appdomain.GetType(i.ParameterType.GetGenericTypeDefinition().FullName);
		AppDomain_tFFEF01BA23D79DA3A22C21195FD262862037E506* L_21 = __this->___appdomain_4;
		ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* L_22 = V_2;
		NullCheck(L_22);
		Type_t* L_23;
		L_23 = VirtualFuncInvoker0< Type_t* >::Invoke(10 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_22);
		NullCheck(L_23);
		Type_t* L_24;
		L_24 = VirtualFuncInvoker0< Type_t* >::Invoke(65 /* System.Type System.Type::GetGenericTypeDefinition() */, L_23);
		NullCheck(L_24);
		String_t* L_25;
		L_25 = VirtualFuncInvoker0< String_t* >::Invoke(40 /* System.String System.Type::get_FullName() */, L_24);
		NullCheck(L_21);
		RuntimeObject* L_26;
		L_26 = AppDomain_GetType_m05A6BC3059C74ADF2B7F22C2C39947D011FDE169(L_21, L_25, NULL);
		V_3 = L_26;
	}

IL_007a:
	{
		// if (type == null)
		RuntimeObject* L_27 = V_3;
		if (L_27)
		{
			goto IL_0099;
		}
	}
	{
		// type = appdomain.GetType(i.ParameterType.GetGenericTypeDefinition().AssemblyQualifiedName);
		AppDomain_tFFEF01BA23D79DA3A22C21195FD262862037E506* L_28 = __this->___appdomain_4;
		ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* L_29 = V_2;
		NullCheck(L_29);
		Type_t* L_30;
		L_30 = VirtualFuncInvoker0< Type_t* >::Invoke(10 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_29);
		NullCheck(L_30);
		Type_t* L_31;
		L_31 = VirtualFuncInvoker0< Type_t* >::Invoke(65 /* System.Type System.Type::GetGenericTypeDefinition() */, L_30);
		NullCheck(L_31);
		String_t* L_32;
		L_32 = VirtualFuncInvoker0< String_t* >::Invoke(39 /* System.String System.Type::get_AssemblyQualifiedName() */, L_31);
		NullCheck(L_28);
		RuntimeObject* L_33;
		L_33 = AppDomain_GetType_m05A6BC3059C74ADF2B7F22C2C39947D011FDE169(L_28, L_32, NULL);
		V_3 = L_33;
	}

IL_0099:
	{
		// if (i.ParameterType.ContainsGenericParameters)
		ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* L_34 = V_2;
		NullCheck(L_34);
		Type_t* L_35;
		L_35 = VirtualFuncInvoker0< Type_t* >::Invoke(10 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_34);
		NullCheck(L_35);
		bool L_36;
		L_36 = VirtualFuncInvoker0< bool >::Invoke(32 /* System.Boolean System.Type::get_ContainsGenericParameters() */, L_35);
		if (!L_36)
		{
			goto IL_00e8;
		}
	}
	{
		// var t = i.ParameterType;
		ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* L_37 = V_2;
		NullCheck(L_37);
		Type_t* L_38;
		L_38 = VirtualFuncInvoker0< Type_t* >::Invoke(10 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_37);
		V_4 = L_38;
		// if (t.HasElementType)
		Type_t* L_39 = V_4;
		NullCheck(L_39);
		bool L_40;
		L_40 = Type_get_HasElementType_m44F9601E586D2EEA2EDB93FB81D1D80521C264EE(L_39, NULL);
		if (!L_40)
		{
			goto IL_00c6;
		}
	}
	{
		// t = i.ParameterType.GetElementType();
		ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* L_41 = V_2;
		NullCheck(L_41);
		Type_t* L_42;
		L_42 = VirtualFuncInvoker0< Type_t* >::Invoke(10 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_41);
		NullCheck(L_42);
		Type_t* L_43;
		L_43 = VirtualFuncInvoker0< Type_t* >::Invoke(63 /* System.Type System.Type::GetElementType() */, L_42);
		V_4 = L_43;
		goto IL_00db;
	}

IL_00c6:
	{
		// else if (t.GetGenericArguments().Length > 0)
		Type_t* L_44 = V_4;
		NullCheck(L_44);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_45;
		L_45 = VirtualFuncInvoker0< TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* >::Invoke(67 /* System.Type[] System.Type::GetGenericArguments() */, L_44);
		NullCheck(L_45);
		if (!(((RuntimeArray*)L_45)->max_length))
		{
			goto IL_00db;
		}
	}
	{
		// t = t.GetGenericArguments()[0];
		Type_t* L_46 = V_4;
		NullCheck(L_46);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_47;
		L_47 = VirtualFuncInvoker0< TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* >::Invoke(67 /* System.Type[] System.Type::GetGenericArguments() */, L_46);
		NullCheck(L_47);
		int32_t L_48 = 0;
		Type_t* L_49 = (L_47)->GetAt(static_cast<il2cpp_array_size_t>(L_48));
		V_4 = L_49;
	}

IL_00db:
	{
		// type = new ILGenericParameterType(t.Name);
		Type_t* L_50 = V_4;
		NullCheck(L_50);
		String_t* L_51;
		L_51 = VirtualFuncInvoker0< String_t* >::Invoke(12 /* System.String System.Reflection.MemberInfo::get_Name() */, L_50);
		ILGenericParameterType_tD3907D5D02CED0831ACEC5A4A288F3A6C6E0889B* L_52 = (ILGenericParameterType_tD3907D5D02CED0831ACEC5A4A288F3A6C6E0889B*)il2cpp_codegen_object_new(ILGenericParameterType_tD3907D5D02CED0831ACEC5A4A288F3A6C6E0889B_il2cpp_TypeInfo_var);
		NullCheck(L_52);
		ILGenericParameterType__ctor_m76EF62E1872BC4A6EEA911578FEA1A8811AFE6FB(L_52, L_51, NULL);
		V_3 = L_52;
	}

IL_00e8:
	{
		// if (type == null)
		RuntimeObject* L_53 = V_3;
		if (L_53)
		{
			goto IL_00f1;
		}
	}
	{
		// throw new TypeLoadException();
		TypeLoadException_t6333E3083F7BFF1A582969E6F67ACBA8B0035C32* L_54 = (TypeLoadException_t6333E3083F7BFF1A582969E6F67ACBA8B0035C32*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TypeLoadException_t6333E3083F7BFF1A582969E6F67ACBA8B0035C32_il2cpp_TypeInfo_var)));
		NullCheck(L_54);
		TypeLoadException__ctor_mE23EFA36AFDD51A3025C528FA60DB2A78CFAB44E(L_54, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_54, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CLRMethod_InitParameters_m7C8BF0B548C7498E64ED61330980BAAC6C0DB423_RuntimeMethod_var)));
	}

IL_00f1:
	{
		// parameters.Add(type);
		List_1_t136E925D19ADF1AFF60DF33114FEC34DD1EAFD75* L_55 = __this->___parameters_2;
		RuntimeObject* L_56 = V_3;
		NullCheck(L_55);
		List_1_Add_m3F51DF5D911FE86B020CC8DD004AC5A96492A070_inline(L_55, L_56, List_1_Add_m3F51DF5D911FE86B020CC8DD004AC5A96492A070_RuntimeMethod_var);
		int32_t L_57 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_57, 1));
	}

IL_0101:
	{
		// foreach (var i in ParametersCLR)
		int32_t L_58 = V_1;
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_59 = V_0;
		NullCheck(L_59);
		if ((((int32_t)L_58) < ((int32_t)((int32_t)(((RuntimeArray*)L_59)->max_length)))))
		{
			goto IL_0019;
		}
	}
	{
		// }
		return;
	}
}
// ILRuntime.Runtime.Stack.StackObject* ILRuntime.CLR.Method.CLRMethod::Minus(ILRuntime.Runtime.Stack.StackObject*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StackObject_tE7817703B5F99899973AB6FE8301AF2A37EECEED* CLRMethod_Minus_mC323262EF6B344B8C321DEC3D916AA9EF2EFD312 (CLRMethod_t7DF49A5C4FF255B056BFEE0BFDF137AEF905FFF5* __this, StackObject_tE7817703B5F99899973AB6FE8301AF2A37EECEED* ___a0, int32_t ___b1, const RuntimeMethod* method) 
{
	{
		// return (StackObject*)((long)a - sizeof(StackObject) * b);
		StackObject_tE7817703B5F99899973AB6FE8301AF2A37EECEED* L_0 = ___a0;
		uint32_t L_1 = sizeof(StackObject_tE7817703B5F99899973AB6FE8301AF2A37EECEED);
		int32_t L_2 = ___b1;
		return (StackObject_tE7817703B5F99899973AB6FE8301AF2A37EECEED*)(((uintptr_t)((int64_t)il2cpp_codegen_subtract(((int64_t)(uint64_t)(intptr_t)L_0), ((int64_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_1, L_2)))))));
	}
}
// System.Object ILRuntime.CLR.Method.CLRMethod::Invoke(ILRuntime.Runtime.Intepreter.ILIntepreter,ILRuntime.Runtime.Stack.StackObject*,System.Collections.Generic.IList`1<System.Object>,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CLRMethod_Invoke_m6449013824D5B35662CFB2D47B896B4A12E8743F (CLRMethod_t7DF49A5C4FF255B056BFEE0BFDF137AEF905FFF5* __this, ILIntepreter_t25A08CFC50F0E2B09F59BB25BF049CA40064BCC9* ___intepreter0, StackObject_tE7817703B5F99899973AB6FE8301AF2A37EECEED* ___esp1, RuntimeObject* ___mStack2, bool ___isNewObj3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossBindingAdaptorType_tB0528E91780413AC8DE75AABF74949FBBD390CE5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Extensions_t6C2A02730AAB245FEED18167FEF392140EE8B217_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILRuntimeWrapperType_t6D3A46A94CA7C3E8B8F05968D5BBB5801E566529_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StackObject_tE7817703B5F99899973AB6FE8301AF2A37EECEED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_1 = NULL;
	int32_t V_2 = 0;
	StackObject_tE7817703B5F99899973AB6FE8301AF2A37EECEED* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	{
		// if (parameters == null)
		List_1_t136E925D19ADF1AFF60DF33114FEC34DD1EAFD75* L_0 = __this->___parameters_2;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// InitParameters();
		CLRMethod_InitParameters_m7C8BF0B548C7498E64ED61330980BAAC6C0DB423(__this, NULL);
	}

IL_000e:
	{
		// int paramCount = ParameterCount;
		int32_t L_1;
		L_1 = CLRMethod_get_ParameterCount_mE781F880D1B9196A9382C6A381BAD4070FE3622F(__this, NULL);
		V_0 = L_1;
		// if (invocationParam == null)
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = __this->___invocationParam_10;
		if (L_2)
		{
			goto IL_0029;
		}
	}
	{
		// invocationParam = new object[paramCount];
		int32_t L_3 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)L_3);
		__this->___invocationParam_10 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___invocationParam_10), (void*)L_4);
	}

IL_0029:
	{
		// object[] param = invocationParam;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = __this->___invocationParam_10;
		V_1 = L_5;
		// for (int i = paramCount; i >= 1; i--)
		int32_t L_6 = V_0;
		V_2 = L_6;
		goto IL_007a;
	}

IL_0034:
	{
		// var p = Minus(esp, i);
		StackObject_tE7817703B5F99899973AB6FE8301AF2A37EECEED* L_7 = ___esp1;
		int32_t L_8 = V_2;
		StackObject_tE7817703B5F99899973AB6FE8301AF2A37EECEED* L_9;
		L_9 = CLRMethod_Minus_mC323262EF6B344B8C321DEC3D916AA9EF2EFD312(__this, L_7, L_8, NULL);
		V_3 = L_9;
		// var pt = this.ParametersCLR[paramCount - i].ParameterType;
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_10;
		L_10 = CLRMethod_get_ParametersCLR_m5467ACF4503B380903B245CBE6021DACA6D31144(__this, NULL);
		int32_t L_11 = V_0;
		int32_t L_12 = V_2;
		NullCheck(L_10);
		int32_t L_13 = ((int32_t)il2cpp_codegen_subtract(L_11, L_12));
		ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* L_14 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		NullCheck(L_14);
		Type_t* L_15;
		L_15 = VirtualFuncInvoker0< Type_t* >::Invoke(10 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_14);
		// var obj = pt.CheckCLRTypes(StackObject.ToObject(p, appdomain, mStack));
		StackObject_tE7817703B5F99899973AB6FE8301AF2A37EECEED* L_16 = V_3;
		AppDomain_tFFEF01BA23D79DA3A22C21195FD262862037E506* L_17 = __this->___appdomain_4;
		RuntimeObject* L_18 = ___mStack2;
		il2cpp_codegen_runtime_class_init_inline(StackObject_tE7817703B5F99899973AB6FE8301AF2A37EECEED_il2cpp_TypeInfo_var);
		RuntimeObject* L_19;
		L_19 = StackObject_ToObject_mB6ECFD115234788924C47183E4C8D6F4348F2B63(L_16, L_17, L_18, NULL);
		il2cpp_codegen_runtime_class_init_inline(Extensions_t6C2A02730AAB245FEED18167FEF392140EE8B217_il2cpp_TypeInfo_var);
		RuntimeObject* L_20;
		L_20 = Extensions_CheckCLRTypes_m69420B63D41FB950C09E0A9AA70CE84876CEC963(L_15, L_19, NULL);
		V_4 = L_20;
		// obj = ILIntepreter.CheckAndCloneValueType(obj, appdomain);
		RuntimeObject* L_21 = V_4;
		AppDomain_tFFEF01BA23D79DA3A22C21195FD262862037E506* L_22 = __this->___appdomain_4;
		RuntimeObject* L_23;
		L_23 = ILIntepreter_CheckAndCloneValueType_mD48C9A1FB49388393D639261145F77DC300F56CD(L_21, L_22, NULL);
		V_4 = L_23;
		// param[paramCount - i] = obj;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_24 = V_1;
		int32_t L_25 = V_0;
		int32_t L_26 = V_2;
		RuntimeObject* L_27 = V_4;
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, L_27);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_25, L_26))), (RuntimeObject*)L_27);
		// for (int i = paramCount; i >= 1; i--)
		int32_t L_28 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_28, 1));
	}

IL_007a:
	{
		// for (int i = paramCount; i >= 1; i--)
		int32_t L_29 = V_2;
		if ((((int32_t)L_29) >= ((int32_t)1)))
		{
			goto IL_0034;
		}
	}
	{
		// if (isConstructor)
		bool L_30 = __this->___isConstructor_6;
		if (!L_30)
		{
			goto IL_0132;
		}
	}
	{
		// if (!isNewObj)
		bool L_31 = ___isNewObj3;
		if (L_31)
		{
			goto IL_0105;
		}
	}
	{
		// if (!cDef.IsStatic)
		ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* L_32 = __this->___cDef_1;
		NullCheck(L_32);
		bool L_33;
		L_33 = MethodBase_get_IsStatic_mD2921396167EC4F99E2ADC46C39CCCEC3CD0E16E(L_32, NULL);
		if (L_33)
		{
			goto IL_00ff;
		}
	}
	{
		// object instance = declaringType.TypeForCLR.CheckCLRTypes(StackObject.ToObject((Minus(esp, paramCount + 1)), appdomain, mStack));
		CLRType_t72C55A04EDC2A68F969A27FE7DB52F5A198D437F* L_34 = __this->___declaringType_5;
		NullCheck(L_34);
		Type_t* L_35;
		L_35 = CLRType_get_TypeForCLR_m664A93098B757595B5F90AFAD61B5C7ACFF71C5C_inline(L_34, NULL);
		StackObject_tE7817703B5F99899973AB6FE8301AF2A37EECEED* L_36 = ___esp1;
		int32_t L_37 = V_0;
		StackObject_tE7817703B5F99899973AB6FE8301AF2A37EECEED* L_38;
		L_38 = CLRMethod_Minus_mC323262EF6B344B8C321DEC3D916AA9EF2EFD312(__this, L_36, ((int32_t)il2cpp_codegen_add(L_37, 1)), NULL);
		AppDomain_tFFEF01BA23D79DA3A22C21195FD262862037E506* L_39 = __this->___appdomain_4;
		RuntimeObject* L_40 = ___mStack2;
		il2cpp_codegen_runtime_class_init_inline(StackObject_tE7817703B5F99899973AB6FE8301AF2A37EECEED_il2cpp_TypeInfo_var);
		RuntimeObject* L_41;
		L_41 = StackObject_ToObject_mB6ECFD115234788924C47183E4C8D6F4348F2B63(L_38, L_39, L_40, NULL);
		il2cpp_codegen_runtime_class_init_inline(Extensions_t6C2A02730AAB245FEED18167FEF392140EE8B217_il2cpp_TypeInfo_var);
		RuntimeObject* L_42;
		L_42 = Extensions_CheckCLRTypes_m69420B63D41FB950C09E0A9AA70CE84876CEC963(L_35, L_41, NULL);
		V_5 = L_42;
		// if (instance == null)
		RuntimeObject* L_43 = V_5;
		if (L_43)
		{
			goto IL_00cc;
		}
	}
	{
		// throw new NullReferenceException();
		NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB* L_44 = (NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB_il2cpp_TypeInfo_var)));
		NullCheck(L_44);
		NullReferenceException__ctor_mD26D62094A5E49C18D817817E17FDFBC1D3BD752(L_44, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_44, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CLRMethod_Invoke_m6449013824D5B35662CFB2D47B896B4A12E8743F_RuntimeMethod_var)));
	}

IL_00cc:
	{
		// if (instance is CrossBindingAdaptorType && paramCount == 0)//It makes no sense to call the Adaptor's default constructor
		RuntimeObject* L_45 = V_5;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_45, CrossBindingAdaptorType_tB0528E91780413AC8DE75AABF74949FBBD390CE5_il2cpp_TypeInfo_var)))
		{
			goto IL_00da;
		}
	}
	{
		int32_t L_46 = V_0;
		if (L_46)
		{
			goto IL_00da;
		}
	}
	{
		// return null;
		return NULL;
	}

IL_00da:
	{
		// cDef.Invoke(instance, param);
		ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* L_47 = __this->___cDef_1;
		RuntimeObject* L_48 = V_5;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_49 = V_1;
		NullCheck(L_47);
		RuntimeObject* L_50;
		L_50 = MethodBase_Invoke_mEEF3218648F111A8C338001A7804091A0747C826(L_47, L_48, L_49, NULL);
		// Array.Clear(invocationParam, 0, invocationParam.Length);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_51 = __this->___invocationParam_10;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_52 = __this->___invocationParam_10;
		NullCheck(L_52);
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_51, 0, ((int32_t)(((RuntimeArray*)L_52)->max_length)), NULL);
		// return null;
		return NULL;
	}

IL_00ff:
	{
		// throw new NotImplementedException();
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_53 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_53);
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_53, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_53, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CLRMethod_Invoke_m6449013824D5B35662CFB2D47B896B4A12E8743F_RuntimeMethod_var)));
	}

IL_0105:
	{
		// var res = cDef.Invoke(param);
		ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* L_54 = __this->___cDef_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_55 = V_1;
		NullCheck(L_54);
		RuntimeObject* L_56;
		L_56 = ConstructorInfo_Invoke_m15FDF2B682BD01CC934BE4D314EF2193103CECFE(L_54, L_55, NULL);
		// FixReference(paramCount, esp, param, mStack, null, false);
		int32_t L_57 = V_0;
		StackObject_tE7817703B5F99899973AB6FE8301AF2A37EECEED* L_58 = ___esp1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_59 = V_1;
		RuntimeObject* L_60 = ___mStack2;
		CLRMethod_FixReference_m197B0428A82CEDEFC607F03B4E5691CCBC36EEF8(__this, L_57, L_58, L_59, L_60, NULL, (bool)0, NULL);
		// Array.Clear(invocationParam, 0, invocationParam.Length);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_61 = __this->___invocationParam_10;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_62 = __this->___invocationParam_10;
		NullCheck(L_62);
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_61, 0, ((int32_t)(((RuntimeArray*)L_62)->max_length)), NULL);
		// return res;
		return L_56;
	}

IL_0132:
	{
		// object instance = null;
		V_6 = NULL;
		// if (!def.IsStatic)
		MethodInfo_t* L_63 = __this->___def_0;
		NullCheck(L_63);
		bool L_64;
		L_64 = MethodBase_get_IsStatic_mD2921396167EC4F99E2ADC46C39CCCEC3CD0E16E(L_63, NULL);
		if (L_64)
		{
			goto IL_019d;
		}
	}
	{
		// instance = StackObject.ToObject((Minus(esp, paramCount + 1)), appdomain, mStack);
		StackObject_tE7817703B5F99899973AB6FE8301AF2A37EECEED* L_65 = ___esp1;
		int32_t L_66 = V_0;
		StackObject_tE7817703B5F99899973AB6FE8301AF2A37EECEED* L_67;
		L_67 = CLRMethod_Minus_mC323262EF6B344B8C321DEC3D916AA9EF2EFD312(__this, L_65, ((int32_t)il2cpp_codegen_add(L_66, 1)), NULL);
		AppDomain_tFFEF01BA23D79DA3A22C21195FD262862037E506* L_68 = __this->___appdomain_4;
		RuntimeObject* L_69 = ___mStack2;
		il2cpp_codegen_runtime_class_init_inline(StackObject_tE7817703B5F99899973AB6FE8301AF2A37EECEED_il2cpp_TypeInfo_var);
		RuntimeObject* L_70;
		L_70 = StackObject_ToObject_mB6ECFD115234788924C47183E4C8D6F4348F2B63(L_67, L_68, L_69, NULL);
		V_6 = L_70;
		// if (!(instance is Reflection.ILRuntimeWrapperType))
		RuntimeObject* L_71 = V_6;
		if (((ILRuntimeWrapperType_t6D3A46A94CA7C3E8B8F05968D5BBB5801E566529*)IsInstClass((RuntimeObject*)L_71, ILRuntimeWrapperType_t6D3A46A94CA7C3E8B8F05968D5BBB5801E566529_il2cpp_TypeInfo_var)))
		{
			goto IL_0177;
		}
	}
	{
		// instance = declaringType.TypeForCLR.CheckCLRTypes(instance);
		CLRType_t72C55A04EDC2A68F969A27FE7DB52F5A198D437F* L_72 = __this->___declaringType_5;
		NullCheck(L_72);
		Type_t* L_73;
		L_73 = CLRType_get_TypeForCLR_m664A93098B757595B5F90AFAD61B5C7ACFF71C5C_inline(L_72, NULL);
		RuntimeObject* L_74 = V_6;
		il2cpp_codegen_runtime_class_init_inline(Extensions_t6C2A02730AAB245FEED18167FEF392140EE8B217_il2cpp_TypeInfo_var);
		RuntimeObject* L_75;
		L_75 = Extensions_CheckCLRTypes_m69420B63D41FB950C09E0A9AA70CE84876CEC963(L_73, L_74, NULL);
		V_6 = L_75;
	}

IL_0177:
	{
		// if (declaringType.IsValueType)
		CLRType_t72C55A04EDC2A68F969A27FE7DB52F5A198D437F* L_76 = __this->___declaringType_5;
		NullCheck(L_76);
		bool L_77;
		L_77 = CLRType_get_IsValueType_mBE56C8C16725817A215BECD5041B23A06E7DE4E6_inline(L_76, NULL);
		if (!L_77)
		{
			goto IL_0193;
		}
	}
	{
		// instance = ILIntepreter.CheckAndCloneValueType(instance, appdomain);
		RuntimeObject* L_78 = V_6;
		AppDomain_tFFEF01BA23D79DA3A22C21195FD262862037E506* L_79 = __this->___appdomain_4;
		RuntimeObject* L_80;
		L_80 = ILIntepreter_CheckAndCloneValueType_mD48C9A1FB49388393D639261145F77DC300F56CD(L_78, L_79, NULL);
		V_6 = L_80;
	}

IL_0193:
	{
		// if (instance == null)
		RuntimeObject* L_81 = V_6;
		if (L_81)
		{
			goto IL_019d;
		}
	}
	{
		// throw new NullReferenceException();
		NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB* L_82 = (NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB_il2cpp_TypeInfo_var)));
		NullCheck(L_82);
		NullReferenceException__ctor_mD26D62094A5E49C18D817817E17FDFBC1D3BD752(L_82, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_82, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CLRMethod_Invoke_m6449013824D5B35662CFB2D47B896B4A12E8743F_RuntimeMethod_var)));
	}

IL_019d:
	{
		// res = def.Invoke(instance, param);
		MethodInfo_t* L_83 = __this->___def_0;
		RuntimeObject* L_84 = V_6;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_85 = V_1;
		NullCheck(L_83);
		RuntimeObject* L_86;
		L_86 = MethodBase_Invoke_mEEF3218648F111A8C338001A7804091A0747C826(L_83, L_84, L_85, NULL);
		// FixReference(paramCount, esp, param, mStack, instance, !def.IsStatic);
		int32_t L_87 = V_0;
		StackObject_tE7817703B5F99899973AB6FE8301AF2A37EECEED* L_88 = ___esp1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_89 = V_1;
		RuntimeObject* L_90 = ___mStack2;
		RuntimeObject* L_91 = V_6;
		MethodInfo_t* L_92 = __this->___def_0;
		NullCheck(L_92);
		bool L_93;
		L_93 = MethodBase_get_IsStatic_mD2921396167EC4F99E2ADC46C39CCCEC3CD0E16E(L_92, NULL);
		CLRMethod_FixReference_m197B0428A82CEDEFC607F03B4E5691CCBC36EEF8(__this, L_87, L_88, L_89, L_90, L_91, (bool)((((int32_t)L_93) == ((int32_t)0))? 1 : 0), NULL);
		// Array.Clear(invocationParam, 0, invocationParam.Length);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_94 = __this->___invocationParam_10;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_95 = __this->___invocationParam_10;
		NullCheck(L_95);
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_94, 0, ((int32_t)(((RuntimeArray*)L_95)->max_length)), NULL);
		// return res;
		return L_86;
	}
}
// System.Void ILRuntime.CLR.Method.CLRMethod::FixReference(System.Int32,ILRuntime.Runtime.Stack.StackObject*,System.Object[],System.Collections.Generic.IList`1<System.Object>,System.Object,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CLRMethod_FixReference_m197B0428A82CEDEFC607F03B4E5691CCBC36EEF8 (CLRMethod_t7DF49A5C4FF255B056BFEE0BFDF137AEF905FFF5* __this, int32_t ___paramCount0, StackObject_tE7817703B5F99899973AB6FE8301AF2A37EECEED* ___esp1, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___param2, RuntimeObject* ___mStack3, RuntimeObject* ___instance4, bool ___hasThis5, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CLRType_t72C55A04EDC2A68F969A27FE7DB52F5A198D437F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossBindingAdaptorType_tB0528E91780413AC8DE75AABF74949FBBD390CE5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILTypeInstance_t4661F334AB7A19092229919A81C8444982969A15_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILType_tD812655AF7716306B8168AD6F08152435B77708C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_t6EE90D273EFCF5E7E4C37FAB712E70BB6F1B4BFF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeArray_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	StackObject_tE7817703B5F99899973AB6FE8301AF2A37EECEED* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	int32_t V_3 = 0;
	StackObject_tE7817703B5F99899973AB6FE8301AF2A37EECEED* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	RuntimeObject* V_7 = NULL;
	int32_t G_B3_0 = 0;
	RuntimeObject* G_B7_0 = NULL;
	{
		// var cnt = hasThis ? paramCount + 1 : paramCount;
		bool L_0 = ___hasThis5;
		if (L_0)
		{
			goto IL_0007;
		}
	}
	{
		int32_t L_1 = ___paramCount0;
		G_B3_0 = L_1;
		goto IL_000a;
	}

IL_0007:
	{
		int32_t L_2 = ___paramCount0;
		G_B3_0 = ((int32_t)il2cpp_codegen_add(L_2, 1));
	}

IL_000a:
	{
		// for (int i = cnt; i >= 1; i--)
		V_0 = G_B3_0;
		goto IL_017a;
	}

IL_0010:
	{
		// var p = Minus(esp, i);
		StackObject_tE7817703B5F99899973AB6FE8301AF2A37EECEED* L_3 = ___esp1;
		int32_t L_4 = V_0;
		StackObject_tE7817703B5F99899973AB6FE8301AF2A37EECEED* L_5;
		L_5 = CLRMethod_Minus_mC323262EF6B344B8C321DEC3D916AA9EF2EFD312(__this, L_3, L_4, NULL);
		V_1 = L_5;
		// var val = i <= paramCount ? param[paramCount - i] : instance;
		int32_t L_6 = V_0;
		int32_t L_7 = ___paramCount0;
		if ((((int32_t)L_6) <= ((int32_t)L_7)))
		{
			goto IL_0021;
		}
	}
	{
		RuntimeObject* L_8 = ___instance4;
		G_B7_0 = L_8;
		goto IL_0026;
	}

IL_0021:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = ___param2;
		int32_t L_10 = ___paramCount0;
		int32_t L_11 = V_0;
		NullCheck(L_9);
		int32_t L_12 = ((int32_t)il2cpp_codegen_subtract(L_10, L_11));
		RuntimeObject* L_13 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		G_B7_0 = L_13;
	}

IL_0026:
	{
		V_2 = G_B7_0;
		// switch (p->ObjectType)
		StackObject_tE7817703B5F99899973AB6FE8301AF2A37EECEED* L_14 = V_1;
		NullCheck(L_14);
		int32_t L_15 = L_14->___ObjectType_1;
		V_3 = L_15;
		int32_t L_16 = V_3;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_16, 5)))
		{
			case 0:
			{
				goto IL_0057;
			}
			case 1:
			{
				goto IL_010d;
			}
			case 2:
			{
				goto IL_0176;
			}
			case 3:
			{
				goto IL_0176;
			}
			case 4:
			{
				goto IL_0176;
			}
			case 5:
			{
				goto IL_00b1;
			}
			case 6:
			{
				goto IL_0158;
			}
		}
	}
	{
		goto IL_0176;
	}

IL_0057:
	{
		// var addr = *(long*)&p->Value;
		StackObject_tE7817703B5F99899973AB6FE8301AF2A37EECEED* L_17 = V_1;
		NullCheck(L_17);
		int32_t* L_18 = (&L_17->___Value_2);
		int64_t L_19 = *((int64_t*)((uintptr_t)L_18));
		// var dst = (StackObject*)addr;
		V_4 = (StackObject_tE7817703B5F99899973AB6FE8301AF2A37EECEED*)((uintptr_t)L_19);
		// if (dst->ObjectType >= ObjectTypes.Object)
		StackObject_tE7817703B5F99899973AB6FE8301AF2A37EECEED* L_20 = V_4;
		NullCheck(L_20);
		int32_t L_21 = L_20->___ObjectType_1;
		if ((((int32_t)L_21) < ((int32_t)((int32_t)9))))
		{
			goto IL_009c;
		}
	}
	{
		// var obj = val;
		RuntimeObject* L_22 = V_2;
		V_5 = L_22;
		// if (obj is CrossBindingAdaptorType)
		RuntimeObject* L_23 = V_5;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_23, CrossBindingAdaptorType_tB0528E91780413AC8DE75AABF74949FBBD390CE5_il2cpp_TypeInfo_var)))
		{
			goto IL_0087;
		}
	}
	{
		// obj = ((CrossBindingAdaptorType)obj).ILInstance;
		RuntimeObject* L_24 = V_5;
		NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_24, CrossBindingAdaptorType_tB0528E91780413AC8DE75AABF74949FBBD390CE5_il2cpp_TypeInfo_var)));
		ILTypeInstance_t4661F334AB7A19092229919A81C8444982969A15* L_25;
		L_25 = InterfaceFuncInvoker0< ILTypeInstance_t4661F334AB7A19092229919A81C8444982969A15* >::Invoke(0 /* ILRuntime.Runtime.Intepreter.ILTypeInstance ILRuntime.Runtime.Enviorment.CrossBindingAdaptorType::get_ILInstance() */, CrossBindingAdaptorType_tB0528E91780413AC8DE75AABF74949FBBD390CE5_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_24, CrossBindingAdaptorType_tB0528E91780413AC8DE75AABF74949FBBD390CE5_il2cpp_TypeInfo_var)));
		V_5 = L_25;
	}

IL_0087:
	{
		// mStack[dst->Value] = obj;
		RuntimeObject* L_26 = ___mStack3;
		StackObject_tE7817703B5F99899973AB6FE8301AF2A37EECEED* L_27 = V_4;
		NullCheck(L_27);
		int32_t L_28 = L_27->___Value_2;
		RuntimeObject* L_29 = V_5;
		NullCheck(L_26);
		InterfaceActionInvoker2< int32_t, RuntimeObject* >::Invoke(1 /* System.Void System.Collections.Generic.IList`1<System.Object>::set_Item(System.Int32,T) */, IList_1_t6EE90D273EFCF5E7E4C37FAB712E70BB6F1B4BFF_il2cpp_TypeInfo_var, L_26, L_28, L_29);
		goto IL_0176;
	}

IL_009c:
	{
		// ILIntepreter.UnboxObject(dst, val, mStack, appdomain);
		StackObject_tE7817703B5F99899973AB6FE8301AF2A37EECEED* L_30 = V_4;
		RuntimeObject* L_31 = V_2;
		RuntimeObject* L_32 = ___mStack3;
		AppDomain_tFFEF01BA23D79DA3A22C21195FD262862037E506* L_33 = __this->___appdomain_4;
		ILIntepreter_UnboxObject_mA2C072896D74DE85AC99802DF319A61E853D3245(L_30, L_31, L_32, L_33, NULL);
		// break;
		goto IL_0176;
	}

IL_00b1:
	{
		// var obj = mStack[p->Value];
		RuntimeObject* L_34 = ___mStack3;
		StackObject_tE7817703B5F99899973AB6FE8301AF2A37EECEED* L_35 = V_1;
		NullCheck(L_35);
		int32_t L_36 = L_35->___Value_2;
		NullCheck(L_34);
		RuntimeObject* L_37;
		L_37 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<System.Object>::get_Item(System.Int32) */, IList_1_t6EE90D273EFCF5E7E4C37FAB712E70BB6F1B4BFF_il2cpp_TypeInfo_var, L_34, L_36);
		V_6 = L_37;
		// if (obj is ILTypeInstance)
		RuntimeObject* L_38 = V_6;
		if (!((ILTypeInstance_t4661F334AB7A19092229919A81C8444982969A15*)IsInstClass((RuntimeObject*)L_38, ILTypeInstance_t4661F334AB7A19092229919A81C8444982969A15_il2cpp_TypeInfo_var)))
		{
			goto IL_00e1;
		}
	}
	{
		// ((ILTypeInstance)obj)[p->ValueLow] = val;
		RuntimeObject* L_39 = V_6;
		StackObject_tE7817703B5F99899973AB6FE8301AF2A37EECEED* L_40 = V_1;
		NullCheck(L_40);
		int32_t L_41 = L_40->___ValueLow_3;
		RuntimeObject* L_42 = V_2;
		NullCheck(((ILTypeInstance_t4661F334AB7A19092229919A81C8444982969A15*)CastclassClass((RuntimeObject*)L_39, ILTypeInstance_t4661F334AB7A19092229919A81C8444982969A15_il2cpp_TypeInfo_var)));
		ILTypeInstance_set_Item_m3CE0DD7B7783F5B559D69693929B5DEDED318482(((ILTypeInstance_t4661F334AB7A19092229919A81C8444982969A15*)CastclassClass((RuntimeObject*)L_39, ILTypeInstance_t4661F334AB7A19092229919A81C8444982969A15_il2cpp_TypeInfo_var)), L_41, L_42, NULL);
		goto IL_0176;
	}

IL_00e1:
	{
		// var t = appdomain.GetType(obj.GetType()) as CLRType;
		AppDomain_tFFEF01BA23D79DA3A22C21195FD262862037E506* L_43 = __this->___appdomain_4;
		RuntimeObject* L_44 = V_6;
		NullCheck(L_44);
		Type_t* L_45;
		L_45 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_44, NULL);
		NullCheck(L_43);
		RuntimeObject* L_46;
		L_46 = AppDomain_GetType_mC1BCC62B3BD153AF9A944FDB68783264EAA7E9D3(L_43, L_45, NULL);
		// t.GetField(p->ValueLow).SetValue(obj, val);
		StackObject_tE7817703B5F99899973AB6FE8301AF2A37EECEED* L_47 = V_1;
		NullCheck(L_47);
		int32_t L_48 = L_47->___ValueLow_3;
		NullCheck(((CLRType_t72C55A04EDC2A68F969A27FE7DB52F5A198D437F*)IsInstClass((RuntimeObject*)L_46, CLRType_t72C55A04EDC2A68F969A27FE7DB52F5A198D437F_il2cpp_TypeInfo_var)));
		FieldInfo_t* L_49;
		L_49 = CLRType_GetField_mAE2DD5D7B931E8AA29B5800F4898B0AC1A4E110E(((CLRType_t72C55A04EDC2A68F969A27FE7DB52F5A198D437F*)IsInstClass((RuntimeObject*)L_46, CLRType_t72C55A04EDC2A68F969A27FE7DB52F5A198D437F_il2cpp_TypeInfo_var)), L_48, NULL);
		RuntimeObject* L_50 = V_6;
		RuntimeObject* L_51 = V_2;
		NullCheck(L_49);
		FieldInfo_SetValue_mD8C0DA3A1A0CFF073F971622BBDBAAB6688B4B6C(L_49, L_50, L_51, NULL);
		// break;
		goto IL_0176;
	}

IL_010d:
	{
		// var t = appdomain.GetType(p->Value);
		AppDomain_tFFEF01BA23D79DA3A22C21195FD262862037E506* L_52 = __this->___appdomain_4;
		StackObject_tE7817703B5F99899973AB6FE8301AF2A37EECEED* L_53 = V_1;
		NullCheck(L_53);
		int32_t L_54 = L_53->___Value_2;
		NullCheck(L_52);
		RuntimeObject* L_55;
		L_55 = AppDomain_GetType_mA30B03F0CCDE4B5BD4EEB8C187C70BAFDB523BB1(L_52, L_54, NULL);
		V_7 = L_55;
		// if (t is ILType)
		RuntimeObject* L_56 = V_7;
		if (!((ILType_tD812655AF7716306B8168AD6F08152435B77708C*)IsInstClass((RuntimeObject*)L_56, ILType_tD812655AF7716306B8168AD6F08152435B77708C_il2cpp_TypeInfo_var)))
		{
			goto IL_0143;
		}
	}
	{
		// ((ILType)t).StaticInstance[p->ValueLow] = val;
		RuntimeObject* L_57 = V_7;
		NullCheck(((ILType_tD812655AF7716306B8168AD6F08152435B77708C*)CastclassClass((RuntimeObject*)L_57, ILType_tD812655AF7716306B8168AD6F08152435B77708C_il2cpp_TypeInfo_var)));
		ILTypeStaticInstance_t4D73184CEB0D3868A493ADC3A45AC3C3D1979741* L_58;
		L_58 = ILType_get_StaticInstance_mE531686F466AB38079A0A2DD593151FA74772390(((ILType_tD812655AF7716306B8168AD6F08152435B77708C*)CastclassClass((RuntimeObject*)L_57, ILType_tD812655AF7716306B8168AD6F08152435B77708C_il2cpp_TypeInfo_var)), NULL);
		StackObject_tE7817703B5F99899973AB6FE8301AF2A37EECEED* L_59 = V_1;
		NullCheck(L_59);
		int32_t L_60 = L_59->___ValueLow_3;
		RuntimeObject* L_61 = V_2;
		NullCheck(L_58);
		ILTypeInstance_set_Item_m3CE0DD7B7783F5B559D69693929B5DEDED318482(L_58, L_60, L_61, NULL);
		goto IL_0176;
	}

IL_0143:
	{
		// ((CLRType)t).SetStaticFieldValue(p->ValueLow, val);
		RuntimeObject* L_62 = V_7;
		StackObject_tE7817703B5F99899973AB6FE8301AF2A37EECEED* L_63 = V_1;
		NullCheck(L_63);
		int32_t L_64 = L_63->___ValueLow_3;
		RuntimeObject* L_65 = V_2;
		NullCheck(((CLRType_t72C55A04EDC2A68F969A27FE7DB52F5A198D437F*)CastclassClass((RuntimeObject*)L_62, CLRType_t72C55A04EDC2A68F969A27FE7DB52F5A198D437F_il2cpp_TypeInfo_var)));
		CLRType_SetStaticFieldValue_m69F0259BB4DFDEB2533D4E41639A4C6EEEF4535D(((CLRType_t72C55A04EDC2A68F969A27FE7DB52F5A198D437F*)CastclassClass((RuntimeObject*)L_62, CLRType_t72C55A04EDC2A68F969A27FE7DB52F5A198D437F_il2cpp_TypeInfo_var)), L_64, L_65, NULL);
		// break;
		goto IL_0176;
	}

IL_0158:
	{
		// var arr = mStack[p->Value] as Array;
		RuntimeObject* L_66 = ___mStack3;
		StackObject_tE7817703B5F99899973AB6FE8301AF2A37EECEED* L_67 = V_1;
		NullCheck(L_67);
		int32_t L_68 = L_67->___Value_2;
		NullCheck(L_66);
		RuntimeObject* L_69;
		L_69 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<System.Object>::get_Item(System.Int32) */, IList_1_t6EE90D273EFCF5E7E4C37FAB712E70BB6F1B4BFF_il2cpp_TypeInfo_var, L_66, L_68);
		// arr.SetValue(val, p->ValueLow);
		RuntimeObject* L_70 = V_2;
		StackObject_tE7817703B5F99899973AB6FE8301AF2A37EECEED* L_71 = V_1;
		NullCheck(L_71);
		int32_t L_72 = L_71->___ValueLow_3;
		NullCheck(((RuntimeArray*)IsInstClass((RuntimeObject*)L_69, RuntimeArray_il2cpp_TypeInfo_var)));
		Array_SetValue_mE9507B366ED84E91E92BF32649D36916F96C67B8(((RuntimeArray*)IsInstClass((RuntimeObject*)L_69, RuntimeArray_il2cpp_TypeInfo_var)), L_70, L_72, NULL);
	}

IL_0176:
	{
		// for (int i = cnt; i >= 1; i--)
		int32_t L_73 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_73, 1));
	}

IL_017a:
	{
		// for (int i = cnt; i >= 1; i--)
		int32_t L_74 = V_0;
		if ((((int32_t)L_74) >= ((int32_t)1)))
		{
			goto IL_0010;
		}
	}
	{
		// }
		return;
	}
}
// ILRuntime.CLR.Method.IMethod ILRuntime.CLR.Method.CLRMethod::MakeGenericMethod(ILRuntime.CLR.TypeSystem.IType[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CLRMethod_MakeGenericMethod_m7D4A0C1E4ACCDBB04D8D0ACC08DC12D75EAA088B (CLRMethod_t7DF49A5C4FF255B056BFEE0BFDF137AEF905FFF5* __this, ITypeU5BU5D_tADD584F6D2F1E810AEF7DB2DCA16027722B50991* ___genericArguments0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CLRMethod_t7DF49A5C4FF255B056BFEE0BFDF137AEF905FFF5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IType_tC510B754395152F7217FD34CD69B8AFA1676AA9E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// Type[] p = new Type[genericArguments.Length];
		ITypeU5BU5D_tADD584F6D2F1E810AEF7DB2DCA16027722B50991* L_0 = ___genericArguments0;
		NullCheck(L_0);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_1 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_0)->max_length)));
		V_0 = L_1;
		// for (int i = 0; i < genericArguments.Length; i++)
		V_1 = 0;
		goto IL_001c;
	}

IL_000d:
	{
		// p[i] = genericArguments[i].TypeForCLR;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_2 = V_0;
		int32_t L_3 = V_1;
		ITypeU5BU5D_tADD584F6D2F1E810AEF7DB2DCA16027722B50991* L_4 = ___genericArguments0;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_7);
		Type_t* L_8;
		L_8 = InterfaceFuncInvoker0< Type_t* >::Invoke(2 /* System.Type ILRuntime.CLR.TypeSystem.IType::get_TypeForCLR() */, IType_tC510B754395152F7217FD34CD69B8AFA1676AA9E_il2cpp_TypeInfo_var, L_7);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_8);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (Type_t*)L_8);
		// for (int i = 0; i < genericArguments.Length; i++)
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_001c:
	{
		// for (int i = 0; i < genericArguments.Length; i++)
		int32_t L_10 = V_1;
		ITypeU5BU5D_tADD584F6D2F1E810AEF7DB2DCA16027722B50991* L_11 = ___genericArguments0;
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length)))))
		{
			goto IL_000d;
		}
	}
	{
		// t = def.MakeGenericMethod(p);
		MethodInfo_t* L_12 = __this->___def_0;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_13 = V_0;
		NullCheck(L_12);
		MethodInfo_t* L_14;
		L_14 = VirtualFuncInvoker1< MethodInfo_t*, TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* >::Invoke(62 /* System.Reflection.MethodInfo System.Reflection.MethodInfo::MakeGenericMethod(System.Type[]) */, L_12, L_13);
		// var res = new CLRMethod(t, declaringType, appdomain);
		CLRType_t72C55A04EDC2A68F969A27FE7DB52F5A198D437F* L_15 = __this->___declaringType_5;
		AppDomain_tFFEF01BA23D79DA3A22C21195FD262862037E506* L_16 = __this->___appdomain_4;
		CLRMethod_t7DF49A5C4FF255B056BFEE0BFDF137AEF905FFF5* L_17 = (CLRMethod_t7DF49A5C4FF255B056BFEE0BFDF137AEF905FFF5*)il2cpp_codegen_object_new(CLRMethod_t7DF49A5C4FF255B056BFEE0BFDF137AEF905FFF5_il2cpp_TypeInfo_var);
		NullCheck(L_17);
		CLRMethod__ctor_m246973F5914F20EFEBF8DDA88EBAEFA2C607C274(L_17, L_14, L_15, L_16, NULL);
		// res.genericArguments = genericArguments;
		CLRMethod_t7DF49A5C4FF255B056BFEE0BFDF137AEF905FFF5* L_18 = L_17;
		ITypeU5BU5D_tADD584F6D2F1E810AEF7DB2DCA16027722B50991* L_19 = ___genericArguments0;
		NullCheck(L_18);
		L_18->___genericArguments_8 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&L_18->___genericArguments_8), (void*)L_19);
		// return res;
		return L_18;
	}
}
// System.String ILRuntime.CLR.Method.CLRMethod::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CLRMethod_ToString_mC79E0E4A0E9ABC4513BFED09CB60DF5F32E285A0 (CLRMethod_t7DF49A5C4FF255B056BFEE0BFDF137AEF905FFF5* __this, const RuntimeMethod* method) 
{
	{
		// if (def != null)
		MethodInfo_t* L_0 = __this->___def_0;
		bool L_1;
		L_1 = MethodInfo_op_Inequality_mB73597A1FCC2F906DBCADDEC68A1B7D5B7E89FA8(L_0, (MethodInfo_t*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// return def.ToString();
		MethodInfo_t* L_2 = __this->___def_0;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_2);
		return L_3;
	}

IL_001a:
	{
		// return cDef.ToString();
		ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* L_4 = __this->___cDef_1;
		NullCheck(L_4);
		String_t* L_5;
		L_5 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_4);
		return L_5;
	}
}
// System.Int32 ILRuntime.CLR.Method.CLRMethod::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CLRMethod_GetHashCode_m4CA8BD7600707ABDC097D4AE00C6227FD5B33EF0 (CLRMethod_t7DF49A5C4FF255B056BFEE0BFDF137AEF905FFF5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CLRMethod_t7DF49A5C4FF255B056BFEE0BFDF137AEF905FFF5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (hashCode == -1)
		int32_t L_0 = __this->___hashCode_13;
		if ((!(((uint32_t)L_0) == ((uint32_t)(-1)))))
		{
			goto IL_001a;
		}
	}
	{
		// hashCode = System.Threading.Interlocked.Add(ref instance_id, 1);
		il2cpp_codegen_runtime_class_init_inline(CLRMethod_t7DF49A5C4FF255B056BFEE0BFDF137AEF905FFF5_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = Interlocked_Add_m2455208C56EEFD8832AEAD8AF7368A3FEB33A73C((&((CLRMethod_t7DF49A5C4FF255B056BFEE0BFDF137AEF905FFF5_StaticFields*)il2cpp_codegen_static_fields_for(CLRMethod_t7DF49A5C4FF255B056BFEE0BFDF137AEF905FFF5_il2cpp_TypeInfo_var))->___instance_id_14), 1, NULL);
		__this->___hashCode_13 = L_1;
	}

IL_001a:
	{
		// return hashCode;
		int32_t L_2 = __this->___hashCode_13;
		return L_2;
	}
}
// System.Boolean ILRuntime.CLR.Method.CLRMethod::get_IsExtend()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CLRMethod_get_IsExtend_m3BD44599AA208BC9367CFB38395B7EBC8BFC1BD4 (CLRMethod_t7DF49A5C4FF255B056BFEE0BFDF137AEF905FFF5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_mE2C54C6AE9FC9F05BF44CD9D7D61DC6CD56E3E28_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (isExtend == null)
		Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01* L_0 = (&__this->___isExtend_17);
		bool L_1;
		L_1 = Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_inline(L_0, Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_RuntimeMethod_var);
		if (L_1)
		{
			goto IL_001e;
		}
	}
	{
		// isExtend = this.IsExtendMethod();
		bool L_2;
		L_2 = IMethodExtensions_IsExtendMethod_m98DD7B8FA21B9E94FB958EF5D341F967EF28AAFA(__this, NULL);
		Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5((&L_3), L_2, /*hidden argument*/Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5_RuntimeMethod_var);
		__this->___isExtend_17 = L_3;
	}

IL_001e:
	{
		// return isExtend.Value;
		Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01* L_4 = (&__this->___isExtend_17);
		bool L_5;
		L_5 = Nullable_1_get_Value_mE2C54C6AE9FC9F05BF44CD9D7D61DC6CD56E3E28(L_4, Nullable_1_get_Value_mE2C54C6AE9FC9F05BF44CD9D7D61DC6CD56E3E28_RuntimeMethod_var);
		return L_5;
	}
}
// System.Void ILRuntime.CLR.Method.CLRMethod::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CLRMethod__cctor_m410304BD942458903BC6253F896307901D2B7665 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CLRMethod_t7DF49A5C4FF255B056BFEE0BFDF137AEF905FFF5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static int instance_id = 0x20000000;
		((CLRMethod_t7DF49A5C4FF255B056BFEE0BFDF137AEF905FFF5_StaticFields*)il2cpp_codegen_static_fields_for(CLRMethod_t7DF49A5C4FF255B056BFEE0BFDF137AEF905FFF5_il2cpp_TypeInfo_var))->___instance_id_14 = ((int32_t)536870912);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// ILRuntime.CLR.Method.ExceptionHandlerType ILRuntime.CLR.Method.ExceptionHandler::get_HandlerType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ExceptionHandler_get_HandlerType_mE4D4189A130F20F9CF6F8E726541EC58ECCE2F04 (ExceptionHandler_tB7222B56682A0D18CF20D9FD22EC650A924A5C7D* __this, const RuntimeMethod* method) 
{
	{
		// public ExceptionHandlerType HandlerType { get; set; }
		int32_t L_0 = __this->___U3CHandlerTypeU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void ILRuntime.CLR.Method.ExceptionHandler::set_HandlerType(ILRuntime.CLR.Method.ExceptionHandlerType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionHandler_set_HandlerType_m5C6AF51DFA74A298E65D9A735D7726CCB7633764 (ExceptionHandler_tB7222B56682A0D18CF20D9FD22EC650A924A5C7D* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public ExceptionHandlerType HandlerType { get; set; }
		int32_t L_0 = ___value0;
		__this->___U3CHandlerTypeU3Ek__BackingField_0 = L_0;
		return;
	}
}
// System.Int32 ILRuntime.CLR.Method.ExceptionHandler::get_TryStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ExceptionHandler_get_TryStart_m74B54859CC24D4AFDF3295E2D62A8ADD9DFAC62C (ExceptionHandler_tB7222B56682A0D18CF20D9FD22EC650A924A5C7D* __this, const RuntimeMethod* method) 
{
	{
		// public int TryStart { get; set; }
		int32_t L_0 = __this->___U3CTryStartU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void ILRuntime.CLR.Method.ExceptionHandler::set_TryStart(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionHandler_set_TryStart_mEA428C865E60D3BC637301D915F007B3367F58BD (ExceptionHandler_tB7222B56682A0D18CF20D9FD22EC650A924A5C7D* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public int TryStart { get; set; }
		int32_t L_0 = ___value0;
		__this->___U3CTryStartU3Ek__BackingField_1 = L_0;
		return;
	}
}
// System.Int32 ILRuntime.CLR.Method.ExceptionHandler::get_TryEnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ExceptionHandler_get_TryEnd_mA15AB05D29186B70A35A68DC1BAA44B8BBDCBCA4 (ExceptionHandler_tB7222B56682A0D18CF20D9FD22EC650A924A5C7D* __this, const RuntimeMethod* method) 
{
	{
		// public int TryEnd { get; set; }
		int32_t L_0 = __this->___U3CTryEndU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void ILRuntime.CLR.Method.ExceptionHandler::set_TryEnd(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionHandler_set_TryEnd_mA9F6DC9D3444D2CD6497E88234B508A2C5439DE7 (ExceptionHandler_tB7222B56682A0D18CF20D9FD22EC650A924A5C7D* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public int TryEnd { get; set; }
		int32_t L_0 = ___value0;
		__this->___U3CTryEndU3Ek__BackingField_2 = L_0;
		return;
	}
}
// System.Int32 ILRuntime.CLR.Method.ExceptionHandler::get_HandlerStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ExceptionHandler_get_HandlerStart_m0FCC6EBC76E667099A2615942A5085286F95C361 (ExceptionHandler_tB7222B56682A0D18CF20D9FD22EC650A924A5C7D* __this, const RuntimeMethod* method) 
{
	{
		// public int HandlerStart { get; set; }
		int32_t L_0 = __this->___U3CHandlerStartU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void ILRuntime.CLR.Method.ExceptionHandler::set_HandlerStart(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionHandler_set_HandlerStart_m3CB97FBD951D52CE39641D648293B10391EAE971 (ExceptionHandler_tB7222B56682A0D18CF20D9FD22EC650A924A5C7D* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public int HandlerStart { get; set; }
		int32_t L_0 = ___value0;
		__this->___U3CHandlerStartU3Ek__BackingField_3 = L_0;
		return;
	}
}
// System.Int32 ILRuntime.CLR.Method.ExceptionHandler::get_HandlerEnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ExceptionHandler_get_HandlerEnd_mB03A748A131AC5CC71427AEE1036F720A1D3CC6C (ExceptionHandler_tB7222B56682A0D18CF20D9FD22EC650A924A5C7D* __this, const RuntimeMethod* method) 
{
	{
		// public int HandlerEnd { get; set; }
		int32_t L_0 = __this->___U3CHandlerEndU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void ILRuntime.CLR.Method.ExceptionHandler::set_HandlerEnd(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionHandler_set_HandlerEnd_mA3E4CA82B92936DBD2B7C638D9E6CA51D097B0EA (ExceptionHandler_tB7222B56682A0D18CF20D9FD22EC650A924A5C7D* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public int HandlerEnd { get; set; }
		int32_t L_0 = ___value0;
		__this->___U3CHandlerEndU3Ek__BackingField_4 = L_0;
		return;
	}
}
// ILRuntime.CLR.TypeSystem.IType ILRuntime.CLR.Method.ExceptionHandler::get_CatchType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ExceptionHandler_get_CatchType_mF44B5E91603A68998AB5E0EB5B4166723F15366D (ExceptionHandler_tB7222B56682A0D18CF20D9FD22EC650A924A5C7D* __this, const RuntimeMethod* method) 
{
	{
		// public IType CatchType { get; set; }
		RuntimeObject* L_0 = __this->___U3CCatchTypeU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void ILRuntime.CLR.Method.ExceptionHandler::set_CatchType(ILRuntime.CLR.TypeSystem.IType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionHandler_set_CatchType_m30E5EF5C99A5BCC4D89B2E7E13888F67B315DFC0 (ExceptionHandler_tB7222B56682A0D18CF20D9FD22EC650A924A5C7D* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		// public IType CatchType { get; set; }
		RuntimeObject* L_0 = ___value0;
		__this->___U3CCatchTypeU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCatchTypeU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
// System.Void ILRuntime.CLR.Method.ExceptionHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionHandler__ctor_m7588697CEACF57BAAC73CE205962AAED7022DADD (ExceptionHandler_tB7222B56682A0D18CF20D9FD22EC650A924A5C7D* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean ILRuntime.CLR.Method.ILMethod::get_Compiling()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ILMethod_get_Compiling_mE62B536607735ACBF475D4C8EF3E16310286FBB5 (ILMethod_tA56B8FD062B67B88B2396AC1AFFCED9E4FE92AD7* __this, const RuntimeMethod* method) 
{
	{
		// public bool Compiling { get; set; }
		bool L_0 = __this->___U3CCompilingU3Ek__BackingField_29;
		return L_0;
	}
}
// System.Void ILRuntime.CLR.Method.ILMethod::set_Compiling(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ILMethod_set_Compiling_m495823529D3094AF2BD8638577CE0E046321F7D0 (ILMethod_tA56B8FD062B67B88B2396AC1AFFCED9E4FE92AD7* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool Compiling { get; set; }
		bool L_0 = ___value0;
		__this->___U3CCompilingU3Ek__BackingField_29 = L_0;
		return;
	}
}
// System.Boolean ILRuntime.CLR.Method.ILMethod::get_IsRegisterBodyReady()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ILMethod_get_IsRegisterBodyReady_mF83873BEE73A7BF6008A9C810486D5D277001DEA (ILMethod_tA56B8FD062B67B88B2396AC1AFFCED9E4FE92AD7* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsRegisterBodyReady { get { return bodyRegister != null; } }
		OpCodeRU5BU5D_t9144130E7DF3ABF7AF0E3EFC8AF0C63759AA6AC1* L_0 = __this->___bodyRegister_1;
		return (bool)((!(((RuntimeObject*)(OpCodeRU5BU5D_t9144130E7DF3ABF7AF0E3EFC8AF0C63759AA6AC1*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
// ILRuntime.Mono.Cecil.MethodDefinition ILRuntime.CLR.Method.ILMethod::get_Definition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodDefinition_t20ECAB62A2A1BBEB383A1A979167D658ACCF3244* ILMethod_get_Definition_mAD1F24B3AC7E53CCEA027BB0B7D6D447309C7426 (ILMethod_tA56B8FD062B67B88B2396AC1AFFCED9E4FE92AD7* __this, const RuntimeMethod* method) 
{
	{
		// public MethodDefinition Definition { get { return def; } }
		MethodDefinition_t20ECAB62A2A1BBEB383A1A979167D658ACCF3244* L_0 = __this->___def_4;
		return L_0;
	}
}
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32[]> ILRuntime.CLR.Method.ILMethod::get_JumpTables()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t029F6A37F043A1B571A7DB746955ECB8DC548AD9* ILMethod_get_JumpTables_m493749DE39E704AC312FA8775BF0F3C20F902C5B (ILMethod_tA56B8FD062B67B88B2396AC1AFFCED9E4FE92AD7* __this, const RuntimeMethod* method) 
{
	{
		// public Dictionary<int, int[]> JumpTables { get { return jumptables; } }
		Dictionary_2_t029F6A37F043A1B571A7DB746955ECB8DC548AD9* L_0 = __this->___jumptables_12;
		return L_0;
	}
}
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32[]> ILRuntime.CLR.Method.ILMethod::get_JumpTablesRegister()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t029F6A37F043A1B571A7DB746955ECB8DC548AD9* ILMethod_get_JumpTablesRegister_m488CFA0511678D52996B77EAD0FBDC6834948D50 (ILMethod_tA56B8FD062B67B88B2396AC1AFFCED9E4FE92AD7* __this, const RuntimeMethod* method) 
{
	{
		// public Dictionary<int, int[]> JumpTablesRegister { get { return jumptablesR; } }
		Dictionary_2_t029F6A37F043A1B571A7DB746955ECB8DC548AD9* L_0 = __this->___jumptablesR_13;
		return L_0;
	}
}
// System.Collections.Generic.Dictionary`2<System.Int32,ILRuntime.Runtime.Intepreter.RegisterVM.RegisterVMSymbol> ILRuntime.CLR.Method.ILMethod::get_RegisterVMSymbols()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_tEEB88CF46F6DA1D57225A58A73623EA721DEF951* ILMethod_get_RegisterVMSymbols_m21669D0FC6D9DB0FD6ECBD482DABA035B910583B (ILMethod_tA56B8FD062B67B88B2396AC1AFFCED9E4FE92AD7* __this, const RuntimeMethod* method) 
{
	{
		// internal Dictionary<int, RegisterVMSymbol> RegisterVMSymbols { get { return registerSymbols; } }
		Dictionary_2_tEEB88CF46F6DA1D57225A58A73623EA721DEF951* L_0 = __this->___registerSymbols_2;
		return L_0;
	}
}
// System.Int32 ILRuntime.CLR.Method.ILMethod::get_JITFlags()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ILMethod_get_JITFlags_m6B0ECA18793E2C36158AA2AC1FC1DEAF94E4FD7E (ILMethod_tA56B8FD062B67B88B2396AC1AFFCED9E4FE92AD7* __this, const RuntimeMethod* method) 
{
	{
		// internal int JITFlags { get { return jitFlags; } }
		int32_t L_0 = __this->___jitFlags_21;
		return L_0;
	}
}
// System.Boolean ILRuntime.CLR.Method.ILMethod::get_IsRegisterVMSymbolFixed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ILMethod_get_IsRegisterVMSymbolFixed_mEBB864045E6BAE7C1999EB277CA80DA5796BE504 (ILMethod_tA56B8FD062B67B88B2396AC1AFFCED9E4FE92AD7* __this, const RuntimeMethod* method) 
{
	{
		// internal bool IsRegisterVMSymbolFixed { get { return symbolFixed; } }
		bool L_0 = __this->___symbolFixed_3;
		return L_0;
	}
}
// ILRuntime.Runtime.Intepreter.IDelegateAdapter ILRuntime.CLR.Method.ILMethod::get_DelegateAdapter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ILMethod_get_DelegateAdapter_mD14B5D7F08E72F07DB1B927DD099F836C9031D46 (ILMethod_tA56B8FD062B67B88B2396AC1AFFCED9E4FE92AD7* __this, const RuntimeMethod* method) 
{
	{
		// internal IDelegateAdapter DelegateAdapter { get; set; }
		RuntimeObject* L_0 = __this->___U3CDelegateAdapterU3Ek__BackingField_30;
		return L_0;
	}
}
// System.Void ILRuntime.CLR.Method.ILMethod::set_DelegateAdapter(ILRuntime.Runtime.Intepreter.IDelegateAdapter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ILMethod_set_DelegateAdapter_m39FD621BF6A14B34AD1036428BFE8BAD24EF5C93 (ILMethod_tA56B8FD062B67B88B2396AC1AFFCED9E4FE92AD7* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		// internal IDelegateAdapter DelegateAdapter { get; set; }
		RuntimeObject* L_0 = ___value0;
		__this->___U3CDelegateAdapterU3Ek__BackingField_30 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDelegateAdapterU3Ek__BackingField_30), (void*)L_0);
		return;
	}
}
// System.Int32 ILRuntime.CLR.Method.ILMethod::get_StartLine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ILMethod_get_StartLine_m2A5EA97A1CF4CEB30B0B418E4E4E8C89418F98CA (ILMethod_tA56B8FD062B67B88B2396AC1AFFCED9E4FE92AD7* __this, const RuntimeMethod* method) 
{
	{
		// internal int StartLine { get; set; }
		int32_t L_0 = __this->___U3CStartLineU3Ek__BackingField_31;
		return L_0;
	}
}
// System.Void ILRuntime.CLR.Method.ILMethod::set_StartLine(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ILMethod_set_StartLine_mC394F35BA4BCE75A7CF22655B7C54207410A69C7 (ILMethod_tA56B8FD062B67B88B2396AC1AFFCED9E4FE92AD7* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// internal int StartLine { get; set; }
		int32_t L_0 = ___value0;
		__this->___U3CStartLineU3Ek__BackingField_31 = L_0;
		return;
	}
}
// System.Int32 ILRuntime.CLR.Method.ILMethod::get_EndLine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ILMethod_get_EndLine_mAC109E2E564F17F09BBB77C2C5A17BF02DEB7404 (ILMethod_tA56B8FD062B67B88B2396AC1AFFCED9E4FE92AD7* __this, const RuntimeMethod* method) 
{
	{
		// internal int EndLine { get; set; }
		int32_t L_0 = __this->___U3CEndLineU3Ek__BackingField_32;
		return L_0;
	}
}
// System.Void ILRuntime.CLR.Method.ILMethod::set_EndLine(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ILMethod_set_EndLine_mE6E287212E7F9B65B3932E87DEBDEE2F82AFDEEE (ILMethod_tA56B8FD062B67B88B2396AC1AFFCED9E4FE92AD7* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// internal int EndLine { get; set; }
		int32_t L_0 = ___value0;
		__this->___U3CEndLineU3Ek__BackingField_32 = L_0;
		return;
	}
}
// ILRuntime.Runtime.Enviorment.AppDomain ILRuntime.CLR.Method.ILMethod::get_AppDomain()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AppDomain_tFFEF01BA23D79DA3A22C21195FD262862037E506* ILMethod_get_AppDomain_m2D77F9F5A8F239070B5BE03FA353FCB9CA4F2344 (ILMethod_tA56B8FD062B67B88B2396AC1AFFCED9E4FE92AD7* __this, const RuntimeMethod* method) 
{
	{
		// public ILRuntime.Runtime.Enviorment.AppDomain AppDomain { get { return appdomain; } }
		AppDomain_tFFEF01BA23D79DA3A22C21195FD262862037E506* L_0 = __this->___appdomain_6;
		return L_0;
	}
}
// System.Reflection.MethodInfo ILRuntime.CLR.Method.ILMethod::get_ReflectionMethodInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t* ILMethod_get_ReflectionMethodInfo_mB7AEAD37363023B92C516A618BEED7DAF28E8345 (ILMethod_tA56B8FD062B67B88B2396AC1AFFCED9E4FE92AD7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILRuntimeMethodInfo_t5DFC4EC62846DEE24D20FD2F7824F81C90AECF48_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (IsConstructor)
		bool L_0;
		L_0 = ILMethod_get_IsConstructor_m1A57C7FA9560331115B2536F5218FF270666C135(__this, NULL);
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		// throw new NotSupportedException();
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_1 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_1, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ILMethod_get_ReflectionMethodInfo_mB7AEAD37363023B92C516A618BEED7DAF28E8345_RuntimeMethod_var)));
	}

IL_000e:
	{
		// if (refletionMethodInfo == null)
		ILRuntimeMethodInfo_t5DFC4EC62846DEE24D20FD2F7824F81C90AECF48* L_2 = __this->___refletionMethodInfo_16;
		bool L_3;
		L_3 = MethodInfo_op_Equality_m1466AB76300C9F07856E706E7E914062175189D1(L_2, (MethodInfo_t*)NULL, NULL);
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		// refletionMethodInfo = new ILRuntimeMethodInfo(this);
		ILRuntimeMethodInfo_t5DFC4EC62846DEE24D20FD2F7824F81C90AECF48* L_4 = (ILRuntimeMethodInfo_t5DFC4EC62846DEE24D20FD2F7824F81C90AECF48*)il2cpp_codegen_object_new(ILRuntimeMethodInfo_t5DFC4EC62846DEE24D20FD2F7824F81C90AECF48_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		ILRuntimeMethodInfo__ctor_mC3C361767E84F8E35743AE1211BF276B94FD2439(L_4, __this, NULL);
		__this->___refletionMethodInfo_16 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___refletionMethodInfo_16), (void*)L_4);
	}

IL_0028:
	{
		// return refletionMethodInfo;
		ILRuntimeMethodInfo_t5DFC4EC62846DEE24D20FD2F7824F81C90AECF48* L_5 = __this->___refletionMethodInfo_16;
		return L_5;
	}
}
// System.Reflection.ConstructorInfo ILRuntime.CLR.Method.ILMethod::get_ReflectionConstructorInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* ILMethod_get_ReflectionConstructorInfo_m43F9A0E4F167A9926A356BE0C77FC1FB4AB8FD79 (ILMethod_tA56B8FD062B67B88B2396AC1AFFCED9E4FE92AD7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILRuntimeConstructorInfo_t8246144BC4A47C0292CE84CCC8AD31AFA6E9ACAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!IsConstructor)
		bool L_0;
		L_0 = ILMethod_get_IsConstructor_m1A57C7FA9560331115B2536F5218FF270666C135(__this, NULL);
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// throw new NotSupportedException();
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_1 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_1, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ILMethod_get_ReflectionConstructorInfo_m43F9A0E4F167A9926A356BE0C77FC1FB4AB8FD79_RuntimeMethod_var)));
	}

IL_000e:
	{
		// if (reflectionCtorInfo == null)
		ILRuntimeConstructorInfo_t8246144BC4A47C0292CE84CCC8AD31AFA6E9ACAA* L_2 = __this->___reflectionCtorInfo_17;
		il2cpp_codegen_runtime_class_init_inline(ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = ConstructorInfo_op_Equality_m6DD673A9263EE646773396F9D8DEE46FA48FFBF2(L_2, (ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB*)NULL, NULL);
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		// reflectionCtorInfo = new ILRuntimeConstructorInfo(this);
		ILRuntimeConstructorInfo_t8246144BC4A47C0292CE84CCC8AD31AFA6E9ACAA* L_4 = (ILRuntimeConstructorInfo_t8246144BC4A47C0292CE84CCC8AD31AFA6E9ACAA*)il2cpp_codegen_object_new(ILRuntimeConstructorInfo_t8246144BC4A47C0292CE84CCC8AD31AFA6E9ACAA_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		ILRuntimeConstructorInfo__ctor_m8C0D159585B1EDB0DDD31E49B4321DE9C84D3276(L_4, __this, NULL);
		__this->___reflectionCtorInfo_17 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___reflectionCtorInfo_17), (void*)L_4);
	}

IL_0028:
	{
		// return reflectionCtorInfo;
		ILRuntimeConstructorInfo_t8246144BC4A47C0292CE84CCC8AD31AFA6E9ACAA* L_5 = __this->___reflectionCtorInfo_17;
		return L_5;
	}
}
// ILRuntime.CLR.Method.ExceptionHandler[] ILRuntime.CLR.Method.ILMethod::get_ExceptionHandler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ExceptionHandlerU5BU5D_t806BA8B0F17F63D28468BC214AB18A4CD4FBAE80* ILMethod_get_ExceptionHandler_m252E49D921F0B79DC5BC2230489550477CEBF8CB (ILMethod_tA56B8FD062B67B88B2396AC1AFFCED9E4FE92AD7* __this, const RuntimeMethod* method) 
{
	{
		// return exceptionHandler;
		ExceptionHandlerU5BU5D_t806BA8B0F17F63D28468BC214AB18A4CD4FBAE80* L_0 = __this->___exceptionHandler_8;
		return L_0;
	}
}
// ILRuntime.CLR.Method.ExceptionHandler[] ILRuntime.CLR.Method.ILMethod::get_ExceptionHandlerRegister()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ExceptionHandlerU5BU5D_t806BA8B0F17F63D28468BC214AB18A4CD4FBAE80* ILMethod_get_ExceptionHandlerRegister_mBB9F9CBD46E5D6564C648E5C2D116FF93CD78BAD (ILMethod_tA56B8FD062B67B88B2396AC1AFFCED9E4FE92AD7* __this, const RuntimeMethod* method) 
{
	{
		// return exceptionHandlerR;
		ExceptionHandlerU5BU5D_t806BA8B0F17F63D28468BC214AB18A4CD4FBAE80* L_0 = __this->___exceptionHandlerR_9;
		return L_0;
	}
}
// System.String ILRuntime.CLR.Method.ILMethod::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ILMethod_get_Name_m201619334A6A071426B14588BDE9893402E800FF (ILMethod_tA56B8FD062B67B88B2396AC1AFFCED9E4FE92AD7* __this, const RuntimeMethod* method) 
{
	{
		// return def.Name;
		MethodDefinition_t20ECAB62A2A1BBEB383A1A979167D658ACCF3244* L_0 = __this->___def_4;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(6 /* System.String ILRuntime.Mono.Cecil.MemberReference::get_Name() */, L_0);
		return L_1;
	}
}
// ILRuntime.CLR.TypeSystem.IType ILRuntime.CLR.Method.ILMethod::get_DeclearingType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ILMethod_get_DeclearingType_m47BEDAF621AFAB5289C976E1C3D2EBBD2DFDA1AE (ILMethod_tA56B8FD062B67B88B2396AC1AFFCED9E4FE92AD7* __this, const RuntimeMethod* method) 
{
	{
		// return declaringType;
		ILType_tD812655AF7716306B8168AD6F08152435B77708C* L_0 = __this->___declaringType_7;
		return L_0;
	}
}
// System.Boolean ILRuntime.CLR.Method.ILMethod::get_HasThis()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ILMethod_get_HasThis_mC92E1A5BC0128888C615C33F62C298A466CD1BDB (ILMethod_tA56B8FD062B67B88B2396AC1AFFCED9E4FE92AD7* __this, const RuntimeMethod* method) 
{
	{
		// return def.HasThis;
		MethodDefinition_t20ECAB62A2A1BBEB383A1A979167D658ACCF3244* L_0 = __this->___def_4;
		NullCheck(L_0);
		bool L_1;
		L_1 = VirtualFuncInvoker0< bool >::Invoke(34 /* System.Boolean ILRuntime.Mono.Cecil.MethodReference::get_HasThis() */, L_0);
		return L_1;
	}
}
// System.Int32 ILRuntime.CLR.Method.ILMethod::get_GenericParameterCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ILMethod_get_GenericParameterCount_m2D281BF43D3E831E6D51297BD5BB114CBC508CB3 (ILMethod_tA56B8FD062B67B88B2396AC1AFFCED9E4FE92AD7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Collection_1_get_Count_mE719EDC754A1D10587DA7C00812D88A4999FAA48_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (IsGenericInstance)
		bool L_0;
		L_0 = ILMethod_get_IsGenericInstance_m40D284198369058542C1CE0BD42D4F7EA4CD9FDC(__this, NULL);
		if (!L_0)
		{
			goto IL_000a;
		}
	}
	{
		// return 0;
		return 0;
	}

IL_000a:
	{
		// return def.GenericParameters.Count;
		MethodDefinition_t20ECAB62A2A1BBEB383A1A979167D658ACCF3244* L_1 = __this->___def_4;
		NullCheck(L_1);
		Collection_1_tAF0023B9443046D2A5BC6C79ADE1460DA3165828* L_2;
		L_2 = VirtualFuncInvoker0< Collection_1_tAF0023B9443046D2A5BC6C79ADE1460DA3165828* >::Invoke(43 /* ILRuntime.Mono.Collections.Generic.Collection`1<ILRuntime.Mono.Cecil.GenericParameter> ILRuntime.Mono.Cecil.MethodReference::get_GenericParameters() */, L_1);
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Collection_1_get_Count_mE719EDC754A1D10587DA7C00812D88A4999FAA48_inline(L_2, Collection_1_get_Count_mE719EDC754A1D10587DA7C00812D88A4999FAA48_RuntimeMethod_var);
		return L_3;
	}
}
// System.Boolean ILRuntime.CLR.Method.ILMethod::get_IsGenericInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ILMethod_get_IsGenericInstance_m40D284198369058542C1CE0BD42D4F7EA4CD9FDC (ILMethod_tA56B8FD062B67B88B2396AC1AFFCED9E4FE92AD7* __this, const RuntimeMethod* method) 
{
	{
		// return genericParameters != null;
		KeyValuePair_2U5BU5D_t95F3D6603431315C02B152EFB4CA771ADE93BC2D* L_0 = __this->___genericParameters_10;
		return (bool)((!(((RuntimeObject*)(KeyValuePair_2U5BU5D_t95F3D6603431315C02B152EFB4CA771ADE93BC2D*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
// ILRuntime.Mono.Collections.Generic.Collection`1<ILRuntime.Mono.Cecil.Cil.VariableDefinition> ILRuntime.CLR.Method.ILMethod::get_Variables()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collection_1_t413B13D425BA31F81271569D26FE2157469EB23C* ILMethod_get_Variables_m8A0181A11F5E65FBBE84683B5D9259FD0923FE49 (ILMethod_tA56B8FD062B67B88B2396AC1AFFCED9E4FE92AD7* __this, const RuntimeMethod* method) 
{
	{
		// return variables;
		Collection_1_t413B13D425BA31F81271569D26FE2157469EB23C* L_0 = __this->___variables_25;
		return L_0;
	}
}
// System.Collections.Generic.KeyValuePair`2<System.String,ILRuntime.CLR.TypeSystem.IType>[] ILRuntime.CLR.Method.ILMethod::get_GenericArguments()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValuePair_2U5BU5D_t95F3D6603431315C02B152EFB4CA771ADE93BC2D* ILMethod_get_GenericArguments_mD4532F0CB26A46753E6599A70EA13893546595CC (ILMethod_tA56B8FD062B67B88B2396AC1AFFCED9E4FE92AD7* __this, const RuntimeMethod* method) 
{
	{
		// public KeyValuePair<string, IType>[] GenericArguments { get { return genericParameters; } }
		KeyValuePair_2U5BU5D_t95F3D6603431315C02B152EFB4CA771ADE93BC2D* L_0 = __this->___genericParameters_10;
		return L_0;
	}
}
// ILRuntime.CLR.TypeSystem.IType[] ILRuntime.CLR.Method.ILMethod::get_GenericArugmentsArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ITypeU5BU5D_tADD584F6D2F1E810AEF7DB2DCA16027722B50991* ILMethod_get_GenericArugmentsArray_mF46E8D2731EAF2D6E40996B52E8C23534A2F9495 (ILMethod_tA56B8FD062B67B88B2396AC1AFFCED9E4FE92AD7* __this, const RuntimeMethod* method) 
{
	{
		// public IType[] GenericArugmentsArray { get { return genericArguments; } }
		ITypeU5BU5D_tADD584F6D2F1E810AEF7DB2DCA16027722B50991* L_0 = __this->___genericArguments_11;
		return L_0;
	}
}
// System.Boolean ILRuntime.CLR.Method.ILMethod::get_ShouldUseRegisterVM()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ILMethod_get_ShouldUseRegisterVM_mAA33A4755A39509AE616FA4C1BEBC65643EFED7F (ILMethod_tA56B8FD062B67B88B2396AC1AFFCED9E4FE92AD7* __this, const RuntimeMethod* method) 
{
	{
		// if (bodyRegister != null)
		OpCodeRU5BU5D_t9144130E7DF3ABF7AF0E3EFC8AF0C63759AA6AC1* L_0 = __this->___bodyRegister_1;
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		// body = null;
		__this->___body_0 = (OpCodeU5BU5D_tA0A660D228D31635BC51D02B26E5D715E3EA7C4D*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___body_0), (void*)(OpCodeU5BU5D_tA0A660D228D31635BC51D02B26E5D715E3EA7C4D*)NULL);
		// exceptionHandler = null;
		__this->___exceptionHandler_8 = (ExceptionHandlerU5BU5D_t806BA8B0F17F63D28468BC214AB18A4CD4FBAE80*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___exceptionHandler_8), (void*)(ExceptionHandlerU5BU5D_t806BA8B0F17F63D28468BC214AB18A4CD4FBAE80*)NULL);
		// return true;
		return (bool)1;
	}

IL_0018:
	{
		// if (jitImmediately)
		bool L_1 = __this->___jitImmediately_23;
		if (!L_1)
		{
			goto IL_0029;
		}
	}
	{
		// InitCodeBody(true);
		ILMethod_InitCodeBody_m1F7FAAB73BD45A73D12864A973F86382BAC70917(__this, (bool)1, NULL);
		// return true;
		return (bool)1;
	}

IL_0029:
	{
		// if (jitOnDemand)
		bool L_2 = __this->___jitOnDemand_22;
		if (!L_2)
		{
			goto IL_0064;
		}
	}
	{
		// warmupCounter++;
		int32_t L_3 = __this->___warmupCounter_24;
		__this->___warmupCounter_24 = ((int32_t)il2cpp_codegen_add(L_3, 1));
		// if (warmupCounter > JITWarmUpThreshold && !jitPending)
		int32_t L_4 = __this->___warmupCounter_24;
		if ((((int32_t)L_4) <= ((int32_t)((int32_t)10))))
		{
			goto IL_0064;
		}
	}
	{
		bool L_5 = __this->___jitPending_15;
		if (L_5)
		{
			goto IL_0064;
		}
	}
	{
		// jitPending = true;
		__this->___jitPending_15 = (bool)1;
		// AppDomain.EnqueueJITCompileJob(this);
		AppDomain_tFFEF01BA23D79DA3A22C21195FD262862037E506* L_6;
		L_6 = ILMethod_get_AppDomain_m2D77F9F5A8F239070B5BE03FA353FCB9CA4F2344_inline(__this, NULL);
		NullCheck(L_6);
		AppDomain_EnqueueJITCompileJob_mC2CA0EC25B3EB2AEE9FF0FC3A70AC15D77F46CE6(L_6, __this, NULL);
	}

IL_0064:
	{
		// return false;
		return (bool)0;
	}
}
// System.Void ILRuntime.CLR.Method.ILMethod::.ctor(ILRuntime.Mono.Cecil.MethodDefinition,ILRuntime.CLR.TypeSystem.ILType,ILRuntime.Runtime.Enviorment.AppDomain,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ILMethod__ctor_m33DBA416544D54425950E94037E8B113B7C43A0B (ILMethod_tA56B8FD062B67B88B2396AC1AFFCED9E4FE92AD7* __this, MethodDefinition_t20ECAB62A2A1BBEB383A1A979167D658ACCF3244* ___def0, ILType_tD812655AF7716306B8168AD6F08152435B77708C* ___type1, AppDomain_tFFEF01BA23D79DA3A22C21195FD262862037E506* ___domain2, int32_t ___flags3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Collection_1_get_Count_m003D9033DAFBB663E0C45CF6EAA4C179A197CB5E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Collection_1_get_Count_mCC17E3A5E2B00A3D60C12ABD99FC83E21267C8E3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Collection_1_get_Item_mAE97E3B8BBEED70FD71268FCF2166A46760DBC08_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD7A66F857F6E3FCCC482964755DB79017BF35DD2);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ILMethod_tA56B8FD062B67B88B2396AC1AFFCED9E4FE92AD7* G_B8_0 = NULL;
	ILMethod_tA56B8FD062B67B88B2396AC1AFFCED9E4FE92AD7* G_B7_0 = NULL;
	int32_t G_B9_0 = 0;
	ILMethod_tA56B8FD062B67B88B2396AC1AFFCED9E4FE92AD7* G_B9_1 = NULL;
	{
		// int hashCode = -1;
		__this->___hashCode_26 = (-1);
		// public ILMethod(MethodDefinition def, ILType type, ILRuntime.Runtime.Enviorment.AppDomain domain, int flags)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.def = def;
		MethodDefinition_t20ECAB62A2A1BBEB383A1A979167D658ACCF3244* L_0 = ___def0;
		__this->___def_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___def_4), (void*)L_0);
		// declaringType = type;
		ILType_tD812655AF7716306B8168AD6F08152435B77708C* L_1 = ___type1;
		__this->___declaringType_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___declaringType_7), (void*)L_1);
		// this.jitFlags = flags;
		int32_t L_2 = ___flags3;
		__this->___jitFlags_21 = L_2;
		// if (def.ReturnType.IsGenericParameter)
		MethodDefinition_t20ECAB62A2A1BBEB383A1A979167D658ACCF3244* L_3 = ___def0;
		NullCheck(L_3);
		TypeReference_tF82E3E035A581A717CE653CEFC3843CE4E460F91* L_4;
		L_4 = MethodReference_get_ReturnType_m9C100121D93CB8ED2D4ACB85CF5FBDFE551F20DA(L_3, NULL);
		NullCheck(L_4);
		bool L_5;
		L_5 = VirtualFuncInvoker0< bool >::Invoke(35 /* System.Boolean ILRuntime.Mono.Cecil.TypeReference::get_IsGenericParameter() */, L_4);
		if (!L_5)
		{
			goto IL_0049;
		}
	}
	{
		// ReturnType = FindGenericArgument(def.ReturnType.Name);
		MethodDefinition_t20ECAB62A2A1BBEB383A1A979167D658ACCF3244* L_6 = ___def0;
		NullCheck(L_6);
		TypeReference_tF82E3E035A581A717CE653CEFC3843CE4E460F91* L_7;
		L_7 = MethodReference_get_ReturnType_m9C100121D93CB8ED2D4ACB85CF5FBDFE551F20DA(L_6, NULL);
		NullCheck(L_7);
		String_t* L_8;
		L_8 = VirtualFuncInvoker0< String_t* >::Invoke(6 /* System.String ILRuntime.Mono.Cecil.MemberReference::get_Name() */, L_7);
		RuntimeObject* L_9;
		L_9 = ILMethod_FindGenericArgument_mA14178CACC778ED8DD7029F4D44EA5F21B73486F(__this, L_8, NULL);
		ILMethod_set_ReturnType_mAC96B2A8A1372938DB97FA88CA042D025CDD0E40_inline(__this, L_9, NULL);
		goto IL_005d;
	}

IL_0049:
	{
		// ReturnType = domain.GetType(def.ReturnType, type, this);
		AppDomain_tFFEF01BA23D79DA3A22C21195FD262862037E506* L_10 = ___domain2;
		MethodDefinition_t20ECAB62A2A1BBEB383A1A979167D658ACCF3244* L_11 = ___def0;
		NullCheck(L_11);
		TypeReference_tF82E3E035A581A717CE653CEFC3843CE4E460F91* L_12;
		L_12 = MethodReference_get_ReturnType_m9C100121D93CB8ED2D4ACB85CF5FBDFE551F20DA(L_11, NULL);
		ILType_tD812655AF7716306B8168AD6F08152435B77708C* L_13 = ___type1;
		NullCheck(L_10);
		RuntimeObject* L_14;
		L_14 = AppDomain_GetType_m0CF8800358B9E64FE1C5257FDCD210A37C25385B(L_10, L_12, L_13, __this, NULL);
		ILMethod_set_ReturnType_mAC96B2A8A1372938DB97FA88CA042D025CDD0E40_inline(__this, L_14, NULL);
	}

IL_005d:
	{
		// if (type.IsDelegate && def.Name == "Invoke")
		ILType_tD812655AF7716306B8168AD6F08152435B77708C* L_15 = ___type1;
		NullCheck(L_15);
		bool L_16;
		L_16 = ILType_get_IsDelegate_m8BE9E2C142D12D8F154422617F00F5C54F7FF512(L_15, NULL);
		if (!L_16)
		{
			goto IL_007e;
		}
	}
	{
		MethodDefinition_t20ECAB62A2A1BBEB383A1A979167D658ACCF3244* L_17 = ___def0;
		NullCheck(L_17);
		String_t* L_18;
		L_18 = VirtualFuncInvoker0< String_t* >::Invoke(6 /* System.String ILRuntime.Mono.Cecil.MemberReference::get_Name() */, L_17);
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteralD7A66F857F6E3FCCC482964755DB79017BF35DD2, NULL);
		if (!L_19)
		{
			goto IL_007e;
		}
	}
	{
		// isDelegateInvoke = true;
		__this->___isDelegateInvoke_14 = (bool)1;
	}

IL_007e:
	{
		// this.appdomain = domain;
		AppDomain_tFFEF01BA23D79DA3A22C21195FD262862037E506* L_20 = ___domain2;
		__this->___appdomain_6 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___appdomain_6), (void*)L_20);
		// paramCnt = def.HasParameters ? def.Parameters.Count : 0;
		MethodDefinition_t20ECAB62A2A1BBEB383A1A979167D658ACCF3244* L_21 = ___def0;
		NullCheck(L_21);
		bool L_22;
		L_22 = VirtualFuncInvoker0< bool >::Invoke(40 /* System.Boolean ILRuntime.Mono.Cecil.MethodReference::get_HasParameters() */, L_21);
		G_B7_0 = __this;
		if (L_22)
		{
			G_B8_0 = __this;
			goto IL_0091;
		}
	}
	{
		G_B9_0 = 0;
		G_B9_1 = G_B7_0;
		goto IL_009c;
	}

IL_0091:
	{
		MethodDefinition_t20ECAB62A2A1BBEB383A1A979167D658ACCF3244* L_23 = ___def0;
		NullCheck(L_23);
		Collection_1_t07922683F6D8F9416D093E2327FCBCCAC03146F1* L_24;
		L_24 = VirtualFuncInvoker0< Collection_1_t07922683F6D8F9416D093E2327FCBCCAC03146F1* >::Invoke(41 /* ILRuntime.Mono.Collections.Generic.Collection`1<ILRuntime.Mono.Cecil.ParameterDefinition> ILRuntime.Mono.Cecil.MethodReference::get_Parameters() */, L_23);
		NullCheck(L_24);
		int32_t L_25;
		L_25 = Collection_1_get_Count_m003D9033DAFBB663E0C45CF6EAA4C179A197CB5E_inline(L_24, Collection_1_get_Count_m003D9033DAFBB663E0C45CF6EAA4C179A197CB5E_RuntimeMethod_var);
		G_B9_0 = L_25;
		G_B9_1 = G_B8_0;
	}

IL_009c:
	{
		NullCheck(G_B9_1);
		G_B9_1->___paramCnt_18 = G_B9_0;
		// if(def.HasCustomAttributes)
		MethodDefinition_t20ECAB62A2A1BBEB383A1A979167D658ACCF3244* L_26 = ___def0;
		NullCheck(L_26);
		bool L_27;
		L_27 = MethodDefinition_get_HasCustomAttributes_mB6618BE4287BDDEF5DB627A8EE4223B998D5D431(L_26, NULL);
		if (!L_27)
		{
			goto IL_00de;
		}
	}
	{
		// for(int i = 0; i < def.CustomAttributes.Count; i++)
		V_0 = 0;
		goto IL_00d0;
	}

IL_00ad:
	{
		// if(def.CustomAttributes[i].GetJITFlags(domain, out f))
		MethodDefinition_t20ECAB62A2A1BBEB383A1A979167D658ACCF3244* L_28 = ___def0;
		NullCheck(L_28);
		Collection_1_t0337BC9E2B8889D1AFAD653F1B760A6C09E46E7F* L_29;
		L_29 = MethodDefinition_get_CustomAttributes_m1A95A1495906BE92DD50D25470473F7D72534A1C(L_28, NULL);
		int32_t L_30 = V_0;
		NullCheck(L_29);
		CustomAttribute_t8966CC52D0DB2846953049A29347308658F9014F* L_31;
		L_31 = Collection_1_get_Item_mAE97E3B8BBEED70FD71268FCF2166A46760DBC08(L_29, L_30, Collection_1_get_Item_mAE97E3B8BBEED70FD71268FCF2166A46760DBC08_RuntimeMethod_var);
		AppDomain_tFFEF01BA23D79DA3A22C21195FD262862037E506* L_32 = ___domain2;
		bool L_33;
		L_33 = Extensions_GetJITFlags_m580F9C3CE95D91F28D79BCE398FF9926B2FC3417(L_31, L_32, (&V_1), NULL);
		if (!L_33)
		{
			goto IL_00cc;
		}
	}
	{
		// this.jitFlags = f;
		int32_t L_34 = V_1;
		__this->___jitFlags_21 = L_34;
		// break;
		goto IL_00de;
	}

IL_00cc:
	{
		// for(int i = 0; i < def.CustomAttributes.Count; i++)
		int32_t L_35 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_35, 1));
	}

IL_00d0:
	{
		// for(int i = 0; i < def.CustomAttributes.Count; i++)
		int32_t L_36 = V_0;
		MethodDefinition_t20ECAB62A2A1BBEB383A1A979167D658ACCF3244* L_37 = ___def0;
		NullCheck(L_37);
		Collection_1_t0337BC9E2B8889D1AFAD653F1B760A6C09E46E7F* L_38;
		L_38 = MethodDefinition_get_CustomAttributes_m1A95A1495906BE92DD50D25470473F7D72534A1C(L_37, NULL);
		NullCheck(L_38);
		int32_t L_39;
		L_39 = Collection_1_get_Count_mCC17E3A5E2B00A3D60C12ABD99FC83E21267C8E3_inline(L_38, Collection_1_get_Count_mCC17E3A5E2B00A3D60C12ABD99FC83E21267C8E3_RuntimeMethod_var);
		if ((((int32_t)L_36) < ((int32_t)L_39)))
		{
			goto IL_00ad;
		}
	}

IL_00de:
	{
		// jitImmediately = (jitFlags & ILRuntimeJITFlags.JITImmediately) == ILRuntimeJITFlags.JITImmediately;
		int32_t L_40 = __this->___jitFlags_21;
		__this->___jitImmediately_23 = (bool)((((int32_t)((int32_t)(L_40&2))) == ((int32_t)2))? 1 : 0);
		// jitOnDemand = (jitFlags & ILRuntimeJITFlags.JITOnDemand) == ILRuntimeJITFlags.JITOnDemand;
		int32_t L_41 = __this->___jitFlags_21;
		__this->___jitOnDemand_22 = (bool)((((int32_t)((int32_t)(L_41&1))) == ((int32_t)1))? 1 : 0);
		// }
		return;
	}
}
// System.Void ILRuntime.CLR.Method.ILMethod::FixRegisterVMSymbol()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ILMethod_FixRegisterVMSymbol_m66FACBBEBEB4B8612A0C6666E2F63D9FAFBD3C64 (ILMethod_tA56B8FD062B67B88B2396AC1AFFCED9E4FE92AD7* __this, const RuntimeMethod* method) 
{
	{
		// if (!symbolFixed && registerSymbols != null)
		bool L_0 = __this->___symbolFixed_3;
		if (L_0)
		{
			goto IL_0022;
		}
	}
	{
		Dictionary_2_tEEB88CF46F6DA1D57225A58A73623EA721DEF951* L_1 = __this->___registerSymbols_2;
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		// symbolFixed = true;
		__this->___symbolFixed_3 = (bool)1;
		// JITCompiler.FixSymbol(registerSymbols);
		Dictionary_2_tEEB88CF46F6DA1D57225A58A73623EA721DEF951* L_2 = __this->___registerSymbols_2;
		JITCompiler_FixSymbol_mE05B135A02A7A9750D22F483CF2B9ED5DEE11E75(L_2, NULL);
	}

IL_0022:
	{
		// }
		return;
	}
}
// ILRuntime.Mono.Cecil.Cil.SequencePoint ILRuntime.CLR.Method.ILMethod::GetValidSequence(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SequencePoint_t118B2D7765CB0A5F233E4AD1DAACE8615FD1C3E1* ILMethod_GetValidSequence_m0A627C903897C5B3A6971F50EA3BAFB88C42E09F (ILMethod_tA56B8FD062B67B88B2396AC1AFFCED9E4FE92AD7* __this, int32_t ___startIdx0, int32_t ___dir1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Collection_1_get_Count_m2B375C259B69A1D1AAFF357D42EE581534FDAF06_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Collection_1_get_Item_mFB170286F10CA68315AAE9DC233BF1AB596F37B5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	SequencePoint_t118B2D7765CB0A5F233E4AD1DAACE8615FD1C3E1* V_1 = NULL;
	{
		// var seqMapping = def.DebugInformation.GetSequencePointMapping();
		MethodDefinition_t20ECAB62A2A1BBEB383A1A979167D658ACCF3244* L_0 = __this->___def_4;
		NullCheck(L_0);
		MethodDebugInformation_t338182D1EF8BB76B457F22D8592DB2D91326C50D* L_1;
		L_1 = MethodDefinition_get_DebugInformation_m5143664D2646D9FE29DF1D0C9C818B007A225EE3(L_0, NULL);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = MethodDebugInformation_GetSequencePointMapping_mFD82804D6FA4A14052FAD5895429A147D35FC93E(L_1, NULL);
		V_0 = L_2;
		// var cur = DebugService.FindSequencePoint(def.Body.Instructions[startIdx], seqMapping);
		MethodDefinition_t20ECAB62A2A1BBEB383A1A979167D658ACCF3244* L_3 = __this->___def_4;
		NullCheck(L_3);
		MethodBody_tB818BF5E1248D874E371C7F3BC0C5C6240BB8F16* L_4;
		L_4 = MethodDefinition_get_Body_m2230AD544D044BCCF1DF19D233FD474055BE404B(L_3, NULL);
		NullCheck(L_4);
		Collection_1_tF5DDA42267FA4FB2EEA852938E458549573DB51F* L_5;
		L_5 = MethodBody_get_Instructions_m1B9F3083080FE9D7E7E0180E6AAE97AC1CD37991(L_4, NULL);
		int32_t L_6 = ___startIdx0;
		NullCheck(L_5);
		Instruction_tAA84FA05703612EBA9700BB65C31560D5AA0ACC6* L_7;
		L_7 = Collection_1_get_Item_mFB170286F10CA68315AAE9DC233BF1AB596F37B5(L_5, L_6, Collection_1_get_Item_mFB170286F10CA68315AAE9DC233BF1AB596F37B5_RuntimeMethod_var);
		RuntimeObject* L_8 = V_0;
		SequencePoint_t118B2D7765CB0A5F233E4AD1DAACE8615FD1C3E1* L_9;
		L_9 = DebugService_FindSequencePoint_m36339E360BD5D8132E7E19520886290C1DFA88CC(L_7, L_8, NULL);
		V_1 = L_9;
		goto IL_006e;
	}

IL_0030:
	{
		// startIdx += dir;
		int32_t L_10 = ___startIdx0;
		int32_t L_11 = ___dir1;
		___startIdx0 = ((int32_t)il2cpp_codegen_add(L_10, L_11));
		// if (startIdx >= 0 && startIdx < def.Body.Instructions.Count)
		int32_t L_12 = ___startIdx0;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_007e;
		}
	}
	{
		int32_t L_13 = ___startIdx0;
		MethodDefinition_t20ECAB62A2A1BBEB383A1A979167D658ACCF3244* L_14 = __this->___def_4;
		NullCheck(L_14);
		MethodBody_tB818BF5E1248D874E371C7F3BC0C5C6240BB8F16* L_15;
		L_15 = MethodDefinition_get_Body_m2230AD544D044BCCF1DF19D233FD474055BE404B(L_14, NULL);
		NullCheck(L_15);
		Collection_1_tF5DDA42267FA4FB2EEA852938E458549573DB51F* L_16;
		L_16 = MethodBody_get_Instructions_m1B9F3083080FE9D7E7E0180E6AAE97AC1CD37991(L_15, NULL);
		NullCheck(L_16);
		int32_t L_17;
		L_17 = Collection_1_get_Count_m2B375C259B69A1D1AAFF357D42EE581534FDAF06_inline(L_16, Collection_1_get_Count_m2B375C259B69A1D1AAFF357D42EE581534FDAF06_RuntimeMethod_var);
		if ((((int32_t)L_13) >= ((int32_t)L_17)))
		{
			goto IL_007e;
		}
	}
	{
		// cur = DebugService.FindSequencePoint(def.Body.Instructions[startIdx], seqMapping);
		MethodDefinition_t20ECAB62A2A1BBEB383A1A979167D658ACCF3244* L_18 = __this->___def_4;
		NullCheck(L_18);
		MethodBody_tB818BF5E1248D874E371C7F3BC0C5C6240BB8F16* L_19;
		L_19 = MethodDefinition_get_Body_m2230AD544D044BCCF1DF19D233FD474055BE404B(L_18, NULL);
		NullCheck(L_19);
		Collection_1_tF5DDA42267FA4FB2EEA852938E458549573DB51F* L_20;
		L_20 = MethodBody_get_Instructions_m1B9F3083080FE9D7E7E0180E6AAE97AC1CD37991(L_19, NULL);
		int32_t L_21 = ___startIdx0;
		NullCheck(L_20);
		Instruction_tAA84FA05703612EBA9700BB65C31560D5AA0ACC6* L_22;
		L_22 = Collection_1_get_Item_mFB170286F10CA68315AAE9DC233BF1AB596F37B5(L_20, L_21, Collection_1_get_Item_mFB170286F10CA68315AAE9DC233BF1AB596F37B5_RuntimeMethod_var);
		RuntimeObject* L_23 = V_0;
		SequencePoint_t118B2D7765CB0A5F233E4AD1DAACE8615FD1C3E1* L_24;
		L_24 = DebugService_FindSequencePoint_m36339E360BD5D8132E7E19520886290C1DFA88CC(L_22, L_23, NULL);
		V_1 = L_24;
	}

IL_006e:
	{
		// while (cur != null && cur.StartLine == 0x0feefee)
		SequencePoint_t118B2D7765CB0A5F233E4AD1DAACE8615FD1C3E1* L_25 = V_1;
		if (!L_25)
		{
			goto IL_007e;
		}
	}
	{
		SequencePoint_t118B2D7765CB0A5F233E4AD1DAACE8615FD1C3E1* L_26 = V_1;
		NullCheck(L_26);
		int32_t L_27;
		L_27 = SequencePoint_get_StartLine_m49140029B5143D0D72069B8A57ABDBD1A5637FC0_inline(L_26, NULL);
		if ((((int32_t)L_27) == ((int32_t)((int32_t)16707566))))
		{
			goto IL_0030;
		}
	}

IL_007e:
	{
		// return cur;
		SequencePoint_t118B2D7765CB0A5F233E4AD1DAACE8615FD1C3E1* L_28 = V_1;
		return L_28;
	}
}
// ILRuntime.CLR.TypeSystem.IType ILRuntime.CLR.Method.ILMethod::FindGenericArgument(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ILMethod_FindGenericArgument_mA14178CACC778ED8DD7029F4D44EA5F21B73486F (ILMethod_tA56B8FD062B67B88B2396AC1AFFCED9E4FE92AD7* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_mA59894DE3E275AB10E1084984DFA2F43FB1B69A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_mFA82406BB472516B580931517D30FB07558410C5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	KeyValuePair_2U5BU5D_t95F3D6603431315C02B152EFB4CA771ADE93BC2D* V_1 = NULL;
	int32_t V_2 = 0;
	KeyValuePair_2_tE28C7DA12E13817FD3C7A77CBB509ED7784C2AB5 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// IType res = declaringType.FindGenericArgument(name);
		ILType_tD812655AF7716306B8168AD6F08152435B77708C* L_0 = __this->___declaringType_7;
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = ILType_FindGenericArgument_m413FBA4359A075CA9165895C353C8F04535C0D52(L_0, L_1, NULL);
		V_0 = L_2;
		// if (res == null && genericParameters != null)
		RuntimeObject* L_3 = V_0;
		if (L_3)
		{
			goto IL_004e;
		}
	}
	{
		KeyValuePair_2U5BU5D_t95F3D6603431315C02B152EFB4CA771ADE93BC2D* L_4 = __this->___genericParameters_10;
		if (!L_4)
		{
			goto IL_004e;
		}
	}
	{
		// foreach (var i in genericParameters)
		KeyValuePair_2U5BU5D_t95F3D6603431315C02B152EFB4CA771ADE93BC2D* L_5 = __this->___genericParameters_10;
		V_1 = L_5;
		V_2 = 0;
		goto IL_0046;
	}

IL_0023:
	{
		// foreach (var i in genericParameters)
		KeyValuePair_2U5BU5D_t95F3D6603431315C02B152EFB4CA771ADE93BC2D* L_6 = V_1;
		int32_t L_7 = V_2;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		KeyValuePair_2_tE28C7DA12E13817FD3C7A77CBB509ED7784C2AB5 L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_3 = L_9;
		// if (i.Key == name)
		String_t* L_10;
		L_10 = KeyValuePair_2_get_Key_mA59894DE3E275AB10E1084984DFA2F43FB1B69A4_inline((&V_3), KeyValuePair_2_get_Key_mA59894DE3E275AB10E1084984DFA2F43FB1B69A4_RuntimeMethod_var);
		String_t* L_11 = ___name0;
		bool L_12;
		L_12 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_10, L_11, NULL);
		if (!L_12)
		{
			goto IL_0042;
		}
	}
	{
		// return i.Value;
		RuntimeObject* L_13;
		L_13 = KeyValuePair_2_get_Value_mFA82406BB472516B580931517D30FB07558410C5_inline((&V_3), KeyValuePair_2_get_Value_mFA82406BB472516B580931517D30FB07558410C5_RuntimeMethod_var);
		return L_13;
	}

IL_0042:
	{
		int32_t L_14 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_0046:
	{
		// foreach (var i in genericParameters)
		int32_t L_15 = V_2;
		KeyValuePair_2U5BU5D_t95F3D6603431315C02B152EFB4CA771ADE93BC2D* L_16 = V_1;
		NullCheck(L_16);
		if ((((int32_t)L_15) < ((int32_t)((int32_t)(((RuntimeArray*)L_16)->max_length)))))
		{
			goto IL_0023;
		}
	}
	{
		goto IL_0050;
	}

IL_004e:
	{
		// return res;
		RuntimeObject* L_17 = V_0;
		return L_17;
	}

IL_0050:
	{
		// return null;
		return (RuntimeObject*)NULL;
	}
}
// ILRuntime.Runtime.Intepreter.OpCodes.OpCode[] ILRuntime.CLR.Method.ILMethod::get_Body()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OpCodeU5BU5D_tA0A660D228D31635BC51D02B26E5D715E3EA7C4D* ILMethod_get_Body_mBA80F612949FE14C50AB7B66B6814EF70070795E (ILMethod_tA56B8FD062B67B88B2396AC1AFFCED9E4FE92AD7* __this, const RuntimeMethod* method) 
{
	{
		// if (body == null)
		OpCodeU5BU5D_tA0A660D228D31635BC51D02B26E5D715E3EA7C4D* L_0 = __this->___body_0;
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		// InitCodeBody(false);
		ILMethod_InitCodeBody_m1F7FAAB73BD45A73D12864A973F86382BAC70917(__this, (bool)0, NULL);
	}

IL_000f:
	{
		// return body;
		OpCodeU5BU5D_tA0A660D228D31635BC51D02B26E5D715E3EA7C4D* L_1 = __this->___body_0;
		return L_1;
	}
}
// ILRuntime.Runtime.Intepreter.OpCodes.OpCodeR[] ILRuntime.CLR.Method.ILMethod::get_BodyRegister()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OpCodeRU5BU5D_t9144130E7DF3ABF7AF0E3EFC8AF0C63759AA6AC1* ILMethod_get_BodyRegister_m50E30C1DB4663852460C1D57FCB785D2CE1D9F70 (ILMethod_tA56B8FD062B67B88B2396AC1AFFCED9E4FE92AD7* __this, const RuntimeMethod* method) 
{
	{
		// if (bodyRegister == null)
		OpCodeRU5BU5D_t9144130E7DF3ABF7AF0E3EFC8AF0C63759AA6AC1* L_0 = __this->___bodyRegister_1;
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		// InitCodeBody(true);
		ILMethod_InitCodeBody_m1F7FAAB73BD45A73D12864A973F86382BAC70917(__this, (bool)1, NULL);
	}

IL_000f:
	{
		// return bodyRegister;
		OpCodeRU5BU5D_t9144130E7DF3ABF7AF0E3EFC8AF0C63759AA6AC1* L_1 = __this->___bodyRegister_1;
		return L_1;
	}
}
// System.Boolean ILRuntime.CLR.Method.ILMethod::get_HasBody()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ILMethod_get_HasBody_m9374A5AFBF1AE0E6DE89B08F08F82E277BBB5EEC (ILMethod_tA56B8FD062B67B88B2396AC1AFFCED9E4FE92AD7* __this, const RuntimeMethod* method) 
{
	{
		// return body != null;
		OpCodeU5BU5D_tA0A660D228D31635BC51D02B26E5D715E3EA7C4D* L_0 = __this->___body_0;
		return (bool)((!(((RuntimeObject*)(OpCodeU5BU5D_tA0A660D228D31635BC51D02B26E5D715E3EA7C4D*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
// System.Int32 ILRuntime.CLR.Method.ILMethod::get_LocalVariableCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ILMethod_get_LocalVariableCount_m68F32BF5041349D1C171C418CC69F7132F4CC44B (ILMethod_tA56B8FD062B67B88B2396AC1AFFCED9E4FE92AD7* __this, const RuntimeMethod* method) 
{
	{
		// return localVarCnt;
		int32_t L_0 = __this->___localVarCnt_19;
		return L_0;
	}
}
// System.Int32 ILRuntime.CLR.Method.ILMethod::get_StackRegisterCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ILMethod_get_StackRegisterCount_mE13BA99B32B64B181487535A7949D4704F203644 (ILMethod_tA56B8FD062B67B88B2396AC1AFFCED9E4FE92AD7* __this, const RuntimeMethod* method) 
{
	{
		// return stackRegisterCnt;
		int32_t L_0 = __this->___stackRegisterCnt_20;
		return L_0;
	}
}
// System.Boolean ILRuntime.CLR.Method.ILMethod::get_IsConstructor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ILMethod_get_IsConstructor_m1A57C7FA9560331115B2536F5218FF270666C135 (ILMethod_tA56B8FD062B67B88B2396AC1AFFCED9E4FE92AD7* __this, const RuntimeMethod* method) 
{
	{
		// return def.IsConstructor;
		MethodDefinition_t20ECAB62A2A1BBEB383A1A979167D658ACCF3244* L_0 = __this->___def_4;
		NullCheck(L_0);
		bool L_1;
		L_1 = MethodDefinition_get_IsConstructor_mCB149120C310A4D0B0E93537277788268E136831(L_0, NULL);
		return L_1;
	}
}
// System.Boolean ILRuntime.CLR.Method.ILMethod::get_IsVirtual()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ILMethod_get_IsVirtual_m7CFCA9CEB9A6042318EE8C1EDCEF3E23F0549422 (ILMethod_tA56B8FD062B67B88B2396AC1AFFCED9E4FE92AD7* __this, const RuntimeMethod* method) 
{
	{
		// return def.IsVirtual;
		MethodDefinition_t20ECAB62A2A1BBEB383A1A979167D658ACCF3244* L_0 = __this->___def_4;
		NullCheck(L_0);
		bool L_1;
		L_1 = MethodDefinition_get_IsVirtual_m58EFC3AE15D4913746A936C41539A7047409A962(L_0, NULL);
		return L_1;
	}
}
// System.Boolean ILRuntime.CLR.Method.ILMethod::get_IsDelegateInvoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ILMethod_get_IsDelegateInvoke_mD41BA6A86376C8B6003A07BD022856A10F645698 (ILMethod_tA56B8FD062B67B88B2396AC1AFFCED9E4FE92AD7* __this, const RuntimeMethod* method) 
{
	{
		// return isDelegateInvoke;
		bool L_0 = __this->___isDelegateInvoke_14;
		return L_0;
	}
}
// System.Boolean ILRuntime.CLR.Method.ILMethod::get_IsStatic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ILMethod_get_IsStatic_mE66DE4FD886C446A0AE7BF330BFBB86CCE52EF82 (ILMethod_tA56B8FD062B67B88B2396AC1AFFCED9E4FE92AD7* __this, const RuntimeMethod* method) 
{
	{
		// get { return def.IsStatic; }
		MethodDefinition_t20ECAB62A2A1BBEB383A1A979167D658ACCF3244* L_0 = __this->___def_4;
		NullCheck(L_0);
		bool L_1;
		L_1 = MethodDefinition_get_IsStatic_mFD3EA590101EB19820695E20AA6D432BC488B309(L_0, NULL);
		return L_1;
	}
}
// System.Int32 ILRuntime.CLR.Method.ILMethod::get_ParameterCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ILMethod_get_ParameterCount_m0C4573BC61A5259587CA3E2988861200ED6755F0 (ILMethod_tA56B8FD062B67B88B2396AC1AFFCED9E4FE92AD7* __this, const RuntimeMethod* method) 
{
	{
		// return paramCnt;
		int32_t L_0 = __this->___paramCnt_18;
		return L_0;
	}
}
// System.Collections.Generic.List`1<ILRuntime.CLR.TypeSystem.IType> ILRuntime.CLR.Method.ILMethod::get_Parameters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t136E925D19ADF1AFF60DF33114FEC34DD1EAFD75* ILMethod_get_Parameters_m62C396C91C826DF75D0423DB8B06CB5FD16651EB (ILMethod_tA56B8FD062B67B88B2396AC1AFFCED9E4FE92AD7* __this, const RuntimeMethod* method) 
{
	{
		// if (def.HasParameters && parameters == null)
		MethodDefinition_t20ECAB62A2A1BBEB383A1A979167D658ACCF3244* L_0 = __this->___def_4;
		NullCheck(L_0);
		bool L_1;
		L_1 = VirtualFuncInvoker0< bool >::Invoke(40 /* System.Boolean ILRuntime.Mono.Cecil.MethodReference::get_HasParameters() */, L_0);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		List_1_t136E925D19ADF1AFF60DF33114FEC34DD1EAFD75* L_2 = __this->___parameters_5;
		if (L_2)
		{
			goto IL_001b;
		}
	}
	{
		// InitParameters();
		ILMethod_InitParameters_m0567C9FC09025B3B61FE067D01222B88F1D1BA01(__this, NULL);
	}

IL_001b:
	{
		// return parameters;
		List_1_t136E925D19ADF1AFF60DF33114FEC34DD1EAFD75* L_3 = __this->___parameters_5;
		return L_3;
	}
}
// ILRuntime.CLR.TypeSystem.IType ILRuntime.CLR.Method.ILMethod::get_ReturnType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ILMethod_get_ReturnType_m2A4CB91158D77D8EFAC2474CCE3FA20348A50DE2 (ILMethod_tA56B8FD062B67B88B2396AC1AFFCED9E4FE92AD7* __this, const RuntimeMethod* method) 
{
	{
		// get;
		RuntimeObject* L_0 = __this->___U3CReturnTypeU3Ek__BackingField_33;
		return L_0;
	}
}
// System.Void ILRuntime.CLR.Method.ILMethod::set_ReturnType(ILRuntime.CLR.TypeSystem.IType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ILMethod_set_ReturnType_mAC96B2A8A1372938DB97FA88CA042D025CDD0E40 (ILMethod_tA56B8FD062B67B88B2396AC1AFFCED9E4FE92AD7* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		// private set;
		RuntimeObject* L_0 = ___value0;
		__this->___U3CReturnTypeU3Ek__BackingField_33 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CReturnTypeU3Ek__BackingField_33), (void*)L_0);
		return;
	}
}
// System.Void ILRuntime.CLR.Method.ILMethod::Prewarm(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ILMethod_Prewarm_m694A721CBC178D66DC284E4C372228DE095C9FFA (ILMethod_tA56B8FD062B67B88B2396AC1AFFCED9E4FE92AD7* __this, bool ___recursive0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1__ctor_mF893C3501F1243F52B8E9A0CAE7DF1F7673EE8E1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_t2672434E7FA2BDC91784300DAB040065F53CA23A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	HashSet_1_t2672434E7FA2BDC91784300DAB040065F53CA23A* V_0 = NULL;
	{
		// HashSet<ILMethod> alreadyPrewarmed = null;
		V_0 = (HashSet_1_t2672434E7FA2BDC91784300DAB040065F53CA23A*)NULL;
		// if (recursive)
		bool L_0 = ___recursive0;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		// alreadyPrewarmed = new HashSet<ILMethod>();
		HashSet_1_t2672434E7FA2BDC91784300DAB040065F53CA23A* L_1 = (HashSet_1_t2672434E7FA2BDC91784300DAB040065F53CA23A*)il2cpp_codegen_object_new(HashSet_1_t2672434E7FA2BDC91784300DAB040065F53CA23A_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		HashSet_1__ctor_mF893C3501F1243F52B8E9A0CAE7DF1F7673EE8E1(L_1, HashSet_1__ctor_mF893C3501F1243F52B8E9A0CAE7DF1F7673EE8E1_RuntimeMethod_var);
		V_0 = L_1;
	}

IL_000b:
	{
		// Prewarm(alreadyPrewarmed);
		HashSet_1_t2672434E7FA2BDC91784300DAB040065F53CA23A* L_2 = V_0;
		ILMethod_Prewarm_m8B93DCA38382F1A603C1890B034A0D4BD5106D78(__this, L_2, NULL);
		// }
		return;
	}
}
// System.Void ILRuntime.CLR.Method.ILMethod::PrewarmBody(System.Collections.Generic.HashSet`1<ILRuntime.CLR.Method.ILMethod>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ILMethod_PrewarmBody_mECB768A05A580845D24EF394483405E5A85527DC (ILMethod_tA56B8FD062B67B88B2396AC1AFFCED9E4FE92AD7* __this, HashSet_1_t2672434E7FA2BDC91784300DAB040065F53CA23A* ___alreadyPrewarmed0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CLRMethod_t7DF49A5C4FF255B056BFEE0BFDF137AEF905FFF5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Extensions_t6C2A02730AAB245FEED18167FEF392140EE8B217_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILMethod_tA56B8FD062B67B88B2396AC1AFFCED9E4FE92AD7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IType_tC510B754395152F7217FD34CD69B8AFA1676AA9E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	OpCodeU5BU5D_tA0A660D228D31635BC51D02B26E5D715E3EA7C4D* V_0 = NULL;
	int32_t V_1 = 0;
	OpCode_t34FC4B6966640D468676BA39661AF3946A3943A7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	ILMethod_tA56B8FD062B67B88B2396AC1AFFCED9E4FE92AD7* V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	{
		// var body = Body;
		OpCodeU5BU5D_tA0A660D228D31635BC51D02B26E5D715E3EA7C4D* L_0;
		L_0 = ILMethod_get_Body_mBA80F612949FE14C50AB7B66B6814EF70070795E(__this, NULL);
		// foreach (var ins in body)
		V_0 = L_0;
		V_1 = 0;
		goto IL_00ca;
	}

IL_000e:
	{
		// foreach (var ins in body)
		OpCodeU5BU5D_tA0A660D228D31635BC51D02B26E5D715E3EA7C4D* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		OpCode_t34FC4B6966640D468676BA39661AF3946A3943A7 L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = L_4;
		// switch (ins.Code)
		OpCode_t34FC4B6966640D468676BA39661AF3946A3943A7 L_5 = V_2;
		int32_t L_6 = L_5.___Code_0;
		V_3 = L_6;
		int32_t L_7 = V_3;
		if ((((int32_t)L_7) > ((int32_t)((int32_t)114))))
		{
			goto IL_0036;
		}
	}
	{
		int32_t L_8 = V_3;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)39))))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_9 = V_3;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)110))))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_10 = V_3;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)114))))
		{
			goto IL_004f;
		}
	}
	{
		goto IL_00c6;
	}

IL_0036:
	{
		int32_t L_11 = V_3;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_11, ((int32_t)120)))) > ((uint32_t)5))))
		{
			goto IL_00a3;
		}
	}
	{
		int32_t L_12 = V_3;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)174))))
		{
			goto IL_00a3;
		}
	}
	{
		int32_t L_13 = V_3;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_13, ((int32_t)197)))) <= ((uint32_t)1))))
		{
			goto IL_00c6;
		}
	}

IL_004f:
	{
		// var m = appdomain.GetMethod(ins.TokenInteger);
		AppDomain_tFFEF01BA23D79DA3A22C21195FD262862037E506* L_14 = __this->___appdomain_6;
		OpCode_t34FC4B6966640D468676BA39661AF3946A3943A7 L_15 = V_2;
		int32_t L_16 = L_15.___TokenInteger_1;
		NullCheck(L_14);
		RuntimeObject* L_17;
		L_17 = AppDomain_GetMethod_mABACE30254ADD75967E64EFAC313F925C9B702DC(L_14, L_16, NULL);
		V_4 = L_17;
		// if (m is ILMethod)
		RuntimeObject* L_18 = V_4;
		if (!((ILMethod_tA56B8FD062B67B88B2396AC1AFFCED9E4FE92AD7*)IsInstClass((RuntimeObject*)L_18, ILMethod_tA56B8FD062B67B88B2396AC1AFFCED9E4FE92AD7_il2cpp_TypeInfo_var)))
		{
			goto IL_0081;
		}
	}
	{
		// ILMethod ilm = (ILMethod)m;
		RuntimeObject* L_19 = V_4;
		V_5 = ((ILMethod_tA56B8FD062B67B88B2396AC1AFFCED9E4FE92AD7*)CastclassClass((RuntimeObject*)L_19, ILMethod_tA56B8FD062B67B88B2396AC1AFFCED9E4FE92AD7_il2cpp_TypeInfo_var));
		// if (alreadyPrewarmed != null)
		HashSet_1_t2672434E7FA2BDC91784300DAB040065F53CA23A* L_20 = ___alreadyPrewarmed0;
		if (!L_20)
		{
			goto IL_00c6;
		}
	}
	{
		// ilm.Prewarm(alreadyPrewarmed);
		ILMethod_tA56B8FD062B67B88B2396AC1AFFCED9E4FE92AD7* L_21 = V_5;
		HashSet_1_t2672434E7FA2BDC91784300DAB040065F53CA23A* L_22 = ___alreadyPrewarmed0;
		NullCheck(L_21);
		ILMethod_Prewarm_m8B93DCA38382F1A603C1890B034A0D4BD5106D78(L_21, L_22, NULL);
		goto IL_00c6;
	}

IL_0081:
	{
		// else if (m is CLRMethod)
		RuntimeObject* L_23 = V_4;
		if (!((CLRMethod_t7DF49A5C4FF255B056BFEE0BFDF137AEF905FFF5*)IsInstClass((RuntimeObject*)L_23, CLRMethod_t7DF49A5C4FF255B056BFEE0BFDF137AEF905FFF5_il2cpp_TypeInfo_var)))
		{
			goto IL_00c6;
		}
	}
	{
		// CLRMethod clrm = (CLRMethod)m;
		RuntimeObject* L_24 = V_4;
		// ILRuntime.CLR.Utils.Extensions.GetTypeFlags(clrm.DeclearingType.TypeForCLR);
		NullCheck(((CLRMethod_t7DF49A5C4FF255B056BFEE0BFDF137AEF905FFF5*)CastclassClass((RuntimeObject*)L_24, CLRMethod_t7DF49A5C4FF255B056BFEE0BFDF137AEF905FFF5_il2cpp_TypeInfo_var)));
		RuntimeObject* L_25;
		L_25 = CLRMethod_get_DeclearingType_mC1EA3C987B8420A99B021251423B89A05F61A297_inline(((CLRMethod_t7DF49A5C4FF255B056BFEE0BFDF137AEF905FFF5*)CastclassClass((RuntimeObject*)L_24, CLRMethod_t7DF49A5C4FF255B056BFEE0BFDF137AEF905FFF5_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_25);
		Type_t* L_26;
		L_26 = InterfaceFuncInvoker0< Type_t* >::Invoke(2 /* System.Type ILRuntime.CLR.TypeSystem.IType::get_TypeForCLR() */, IType_tC510B754395152F7217FD34CD69B8AFA1676AA9E_il2cpp_TypeInfo_var, L_25);
		il2cpp_codegen_runtime_class_init_inline(Extensions_t6C2A02730AAB245FEED18167FEF392140EE8B217_il2cpp_TypeInfo_var);
		int32_t L_27;
		L_27 = Extensions_GetTypeFlags_mBA0B8A943BD59B7B52814B176196A6AD039387C4(L_26, NULL);
		// break;
		goto IL_00c6;
	}

IL_00a3:
	{
		// var t = appdomain.GetType((int)(ins.TokenLong >> 32));
		AppDomain_tFFEF01BA23D79DA3A22C21195FD262862037E506* L_28 = __this->___appdomain_6;
		OpCode_t34FC4B6966640D468676BA39661AF3946A3943A7 L_29 = V_2;
		int64_t L_30 = L_29.___TokenLong_2;
		NullCheck(L_28);
		RuntimeObject* L_31;
		L_31 = AppDomain_GetType_mA30B03F0CCDE4B5BD4EEB8C187C70BAFDB523BB1(L_28, ((int32_t)((int64_t)(L_30>>((int32_t)32)))), NULL);
		V_6 = L_31;
		// if (t != null)
		RuntimeObject* L_32 = V_6;
		if (!L_32)
		{
			goto IL_00c6;
		}
	}
	{
		// var baseType = t.BaseType;
		RuntimeObject* L_33 = V_6;
		NullCheck(L_33);
		RuntimeObject* L_34;
		L_34 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(4 /* ILRuntime.CLR.TypeSystem.IType ILRuntime.CLR.TypeSystem.IType::get_BaseType() */, IType_tC510B754395152F7217FD34CD69B8AFA1676AA9E_il2cpp_TypeInfo_var, L_33);
	}

IL_00c6:
	{
		int32_t L_35 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_35, 1));
	}

IL_00ca:
	{
		// foreach (var ins in body)
		int32_t L_36 = V_1;
		OpCodeU5BU5D_tA0A660D228D31635BC51D02B26E5D715E3EA7C4D* L_37 = V_0;
		NullCheck(L_37);
		if ((((int32_t)L_36) < ((int32_t)((int32_t)(((RuntimeArray*)L_37)->max_length)))))
		{
			goto IL_000e;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ILRuntime.CLR.Method.ILMethod::PrewarmBodyRegister(System.Collections.Generic.HashSet`1<ILRuntime.CLR.Method.ILMethod>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ILMethod_PrewarmBodyRegister_m0ED88A8369A17E76CE08663B3229FD1AC5280CA7 (ILMethod_tA56B8FD062B67B88B2396AC1AFFCED9E4FE92AD7* __this, HashSet_1_t2672434E7FA2BDC91784300DAB040065F53CA23A* ___alreadyPrewarmed0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CLRMethod_t7DF49A5C4FF255B056BFEE0BFDF137AEF905FFF5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Extensions_t6C2A02730AAB245FEED18167FEF392140EE8B217_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILMethod_tA56B8FD062B67B88B2396AC1AFFCED9E4FE92AD7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IType_tC510B754395152F7217FD34CD69B8AFA1676AA9E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	OpCodeRU5BU5D_t9144130E7DF3ABF7AF0E3EFC8AF0C63759AA6AC1* V_0 = NULL;
	int32_t V_1 = 0;
	OpCodeR_t5309D85805CCD36C3D3DB728886F81579C6F9E65 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	ILMethod_tA56B8FD062B67B88B2396AC1AFFCED9E4FE92AD7* V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	{
		// var body = BodyRegister;
		OpCodeRU5BU5D_t9144130E7DF3ABF7AF0E3EFC8AF0C63759AA6AC1* L_0;
		L_0 = ILMethod_get_BodyRegister_m50E30C1DB4663852460C1D57FCB785D2CE1D9F70(__this, NULL);
		// foreach (var ins in body)
		V_0 = L_0;
		V_1 = 0;
		goto IL_00ca;
	}

IL_000e:
	{
		// foreach (var ins in body)
		OpCodeRU5BU5D_t9144130E7DF3ABF7AF0E3EFC8AF0C63759AA6AC1* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		OpCodeR_t5309D85805CCD36C3D3DB728886F81579C6F9E65 L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = L_4;
		// switch (ins.Code)
		OpCodeR_t5309D85805CCD36C3D3DB728886F81579C6F9E65 L_5 = V_2;
		int32_t L_6 = L_5.___Code_0;
		V_3 = L_6;
		int32_t L_7 = V_3;
		if ((((int32_t)L_7) > ((int32_t)((int32_t)114))))
		{
			goto IL_0036;
		}
	}
	{
		int32_t L_8 = V_3;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)39))))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_9 = V_3;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)110))))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_10 = V_3;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)114))))
		{
			goto IL_004f;
		}
	}
	{
		goto IL_00c6;
	}

IL_0036:
	{
		int32_t L_11 = V_3;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_11, ((int32_t)120)))) > ((uint32_t)5))))
		{
			goto IL_00a3;
		}
	}
	{
		int32_t L_12 = V_3;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)174))))
		{
			goto IL_00a3;
		}
	}
	{
		int32_t L_13 = V_3;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_13, ((int32_t)197)))) <= ((uint32_t)1))))
		{
			goto IL_00c6;
		}
	}

IL_004f:
	{
		// var m = appdomain.GetMethod(ins.Operand);
		AppDomain_tFFEF01BA23D79DA3A22C21195FD262862037E506* L_14 = __this->___appdomain_6;
		OpCodeR_t5309D85805CCD36C3D3DB728886F81579C6F9E65 L_15 = V_2;
		int32_t L_16 = L_15.___Operand_5;
		NullCheck(L_14);
		RuntimeObject* L_17;
		L_17 = AppDomain_GetMethod_mABACE30254ADD75967E64EFAC313F925C9B702DC(L_14, L_16, NULL);
		V_4 = L_17;
		// if (m is ILMethod)
		RuntimeObject* L_18 = V_4;
		if (!((ILMethod_tA56B8FD062B67B88B2396AC1AFFCED9E4FE92AD7*)IsInstClass((RuntimeObject*)L_18, ILMethod_tA56B8FD062B67B88B2396AC1AFFCED9E4FE92AD7_il2cpp_TypeInfo_var)))
		{
			goto IL_0081;
		}
	}
	{
		// ILMethod ilm = (ILMethod)m;
		RuntimeObject* L_19 = V_4;
		V_5 = ((ILMethod_tA56B8FD062B67B88B2396AC1AFFCED9E4FE92AD7*)CastclassClass((RuntimeObject*)L_19, ILMethod_tA56B8FD062B67B88B2396AC1AFFCED9E4FE92AD7_il2cpp_TypeInfo_var));
		// if (alreadyPrewarmed != null)
		HashSet_1_t2672434E7FA2BDC91784300DAB040065F53CA23A* L_20 = ___alreadyPrewarmed0;
		if (!L_20)
		{
			goto IL_00c6;
		}
	}
	{
		// ilm.Prewarm(alreadyPrewarmed);
		ILMethod_tA56B8FD062B67B88B2396AC1AFFCED9E4FE92AD7* L_21 = V_5;
		HashSet_1_t2672434E7FA2BDC91784300DAB040065F53CA23A* L_22 = ___alreadyPrewarmed0;
		NullCheck(L_21);
		ILMethod_Prewarm_m8B93DCA38382F1A603C1890B034A0D4BD5106D78(L_21, L_22, NULL);
		goto IL_00c6;
	}

IL_0081:
	{
		// else if (m is CLRMethod)
		RuntimeObject* L_23 = V_4;
		if (!((CLRMethod_t7DF49A5C4FF255B056BFEE0BFDF137AEF905FFF5*)IsInstClass((RuntimeObject*)L_23, CLRMethod_t7DF49A5C4FF255B056BFEE0BFDF137AEF905FFF5_il2cpp_TypeInfo_var)))
		{
			goto IL_00c6;
		}
	}
	{
		// CLRMethod clrm = (CLRMethod)m;
		RuntimeObject* L_24 = V_4;
		// ILRuntime.CLR.Utils.Extensions.GetTypeFlags(clrm.DeclearingType.TypeForCLR);
		NullCheck(((CLRMethod_t7DF49A5C4FF255B056BFEE0BFDF137AEF905FFF5*)CastclassClass((RuntimeObject*)L_24, CLRMethod_t7DF49A5C4FF255B056BFEE0BFDF137AEF905FFF5_il2cpp_TypeInfo_var)));
		RuntimeObject* L_25;
		L_25 = CLRMethod_get_DeclearingType_mC1EA3C987B8420A99B021251423B89A05F61A297_inline(((CLRMethod_t7DF49A5C4FF255B056BFEE0BFDF137AEF905FFF5*)CastclassClass((RuntimeObject*)L_24, CLRMethod_t7DF49A5C4FF255B056BFEE0BFDF137AEF905FFF5_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_25);
		Type_t* L_26;
		L_26 = InterfaceFuncInvoker0< Type_t* >::Invoke(2 /* System.Type ILRuntime.CLR.TypeSystem.IType::get_TypeForCLR() */, IType_tC510B754395152F7217FD34CD69B8AFA1676AA9E_il2cpp_TypeInfo_var, L_25);
		il2cpp_codegen_runtime_class_init_inline(Extensions_t6C2A02730AAB245FEED18167FEF392140EE8B217_il2cpp_TypeInfo_var);
		int32_t L_27;
		L_27 = Extensions_GetTypeFlags_mBA0B8A943BD59B7B52814B176196A6AD039387C4(L_26, NULL);
		// break;
		goto IL_00c6;
	}

IL_00a3:
	{
		// var t = appdomain.GetType((int)(ins.OperandLong >> 32));
		AppDomain_tFFEF01BA23D79DA3A22C21195FD262862037E506* L_28 = __this->___appdomain_6;
		OpCodeR_t5309D85805CCD36C3D3DB728886F81579C6F9E65 L_29 = V_2;
		int64_t L_30 = L_29.___OperandLong_9;
		NullCheck(L_28);
		RuntimeObject* L_31;
		L_31 = AppDomain_GetType_mA30B03F0CCDE4B5BD4EEB8C187C70BAFDB523BB1(L_28, ((int32_t)((int64_t)(L_30>>((int32_t)32)))), NULL);
		V_6 = L_31;
		// if (t != null)
		RuntimeObject* L_32 = V_6;
		if (!L_32)
		{
			goto IL_00c6;
		}
	}
	{
		// var baseType = t.BaseType;
		RuntimeObject* L_33 = V_6;
		NullCheck(L_33);
		RuntimeObject* L_34;
		L_34 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(4 /* ILRuntime.CLR.TypeSystem.IType ILRuntime.CLR.TypeSystem.IType::get_BaseType() */, IType_tC510B754395152F7217FD34CD69B8AFA1676AA9E_il2cpp_TypeInfo_var, L_33);
	}

IL_00c6:
	{
		int32_t L_35 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_35, 1));
	}

IL_00ca:
	{
		// foreach (var ins in body)
		int32_t L_36 = V_1;
		OpCodeRU5BU5D_t9144130E7DF3ABF7AF0E3EFC8AF0C63759AA6AC1* L_37 = V_0;
		NullCheck(L_37);
		if ((((int32_t)L_36) < ((int32_t)((int32_t)(((RuntimeArray*)L_37)->max_length)))))
		{
			goto IL_000e;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ILRuntime.CLR.Method.ILMethod::Prewarm(System.Collections.Generic.HashSet`1<ILRuntime.CLR.Method.ILMethod>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ILMethod_Prewarm_m8B93DCA38382F1A603C1890B034A0D4BD5106D78 (ILMethod_tA56B8FD062B67B88B2396AC1AFFCED9E4FE92AD7* __this, HashSet_1_t2672434E7FA2BDC91784300DAB040065F53CA23A* ___alreadyPrewarmed0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CLRType_t72C55A04EDC2A68F969A27FE7DB52F5A198D437F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Collection_1_get_Item_m678B4F2D493069B97DB22FC88CBE03A95DD99830_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Extensions_t6C2A02730AAB245FEED18167FEF392140EE8B217_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Add_m69F65CDD0374F5E7F4F4D6302BFFA838BBE0216F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	VariableDefinition_tAF3B7BC011FA749BB788E1845596F48A86BA0A58* V_1 = NULL;
	TypeReference_tF82E3E035A581A717CE653CEFC3843CE4E460F91* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	{
		// if (alreadyPrewarmed != null && alreadyPrewarmed.Add(this) == false)
		HashSet_1_t2672434E7FA2BDC91784300DAB040065F53CA23A* L_0 = ___alreadyPrewarmed0;
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		HashSet_1_t2672434E7FA2BDC91784300DAB040065F53CA23A* L_1 = ___alreadyPrewarmed0;
		NullCheck(L_1);
		bool L_2;
		L_2 = HashSet_1_Add_m69F65CDD0374F5E7F4F4D6302BFFA838BBE0216F(L_1, __this, HashSet_1_Add_m69F65CDD0374F5E7F4F4D6302BFFA838BBE0216F_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_000d;
		}
	}
	{
		// return;
		return;
	}

IL_000d:
	{
		// if (GenericParameterCount > 0 && !IsGenericInstance)
		int32_t L_3;
		L_3 = ILMethod_get_GenericParameterCount_m2D281BF43D3E831E6D51297BD5BB114CBC508CB3(__this, NULL);
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		bool L_4;
		L_4 = ILMethod_get_IsGenericInstance_m40D284198369058542C1CE0BD42D4F7EA4CD9FDC(__this, NULL);
		if (L_4)
		{
			goto IL_001f;
		}
	}
	{
		// return;
		return;
	}

IL_001f:
	{
		// for (int i = 0; i < LocalVariableCount; i++)
		V_0 = 0;
		goto IL_008b;
	}

IL_0023:
	{
		// var v = Variables[i];
		Collection_1_t413B13D425BA31F81271569D26FE2157469EB23C* L_5;
		L_5 = ILMethod_get_Variables_m8A0181A11F5E65FBBE84683B5D9259FD0923FE49_inline(__this, NULL);
		int32_t L_6 = V_0;
		NullCheck(L_5);
		VariableDefinition_tAF3B7BC011FA749BB788E1845596F48A86BA0A58* L_7;
		L_7 = Collection_1_get_Item_m678B4F2D493069B97DB22FC88CBE03A95DD99830(L_5, L_6, Collection_1_get_Item_m678B4F2D493069B97DB22FC88CBE03A95DD99830_RuntimeMethod_var);
		V_1 = L_7;
		// var vt = v.VariableType;
		VariableDefinition_tAF3B7BC011FA749BB788E1845596F48A86BA0A58* L_8 = V_1;
		NullCheck(L_8);
		TypeReference_tF82E3E035A581A717CE653CEFC3843CE4E460F91* L_9;
		L_9 = VariableReference_get_VariableType_mC884228C8ECE97F9D071B35187F8BA23EE411F89_inline(L_8, NULL);
		V_2 = L_9;
		// if (vt.IsGenericParameter)
		TypeReference_tF82E3E035A581A717CE653CEFC3843CE4E460F91* L_10 = V_2;
		NullCheck(L_10);
		bool L_11;
		L_11 = VirtualFuncInvoker0< bool >::Invoke(35 /* System.Boolean ILRuntime.Mono.Cecil.TypeReference::get_IsGenericParameter() */, L_10);
		if (!L_11)
		{
			goto IL_004e;
		}
	}
	{
		// t = FindGenericArgument(vt.Name);
		TypeReference_tF82E3E035A581A717CE653CEFC3843CE4E460F91* L_12 = V_2;
		NullCheck(L_12);
		String_t* L_13;
		L_13 = VirtualFuncInvoker0< String_t* >::Invoke(6 /* System.String ILRuntime.Mono.Cecil.MemberReference::get_Name() */, L_12);
		RuntimeObject* L_14;
		L_14 = ILMethod_FindGenericArgument_mA14178CACC778ED8DD7029F4D44EA5F21B73486F(__this, L_13, NULL);
		V_3 = L_14;
		goto IL_0067;
	}

IL_004e:
	{
		// t = appdomain.GetType(v.VariableType, DeclearingType, this);
		AppDomain_tFFEF01BA23D79DA3A22C21195FD262862037E506* L_15 = __this->___appdomain_6;
		VariableDefinition_tAF3B7BC011FA749BB788E1845596F48A86BA0A58* L_16 = V_1;
		NullCheck(L_16);
		TypeReference_tF82E3E035A581A717CE653CEFC3843CE4E460F91* L_17;
		L_17 = VariableReference_get_VariableType_mC884228C8ECE97F9D071B35187F8BA23EE411F89_inline(L_16, NULL);
		RuntimeObject* L_18;
		L_18 = ILMethod_get_DeclearingType_m47BEDAF621AFAB5289C976E1C3D2EBBD2DFDA1AE_inline(__this, NULL);
		NullCheck(L_15);
		RuntimeObject* L_19;
		L_19 = AppDomain_GetType_m0CF8800358B9E64FE1C5257FDCD210A37C25385B(L_15, L_17, L_18, __this, NULL);
		V_3 = L_19;
	}

IL_0067:
	{
		// if (t is CLRType)
		RuntimeObject* L_20 = V_3;
		if (!((CLRType_t72C55A04EDC2A68F969A27FE7DB52F5A198D437F*)IsInstClass((RuntimeObject*)L_20, CLRType_t72C55A04EDC2A68F969A27FE7DB52F5A198D437F_il2cpp_TypeInfo_var)))
		{
			goto IL_0087;
		}
	}
	{
		// CLRType ct = (CLRType)t;
		RuntimeObject* L_21 = V_3;
		// var fields = ct.Fields;
		CLRType_t72C55A04EDC2A68F969A27FE7DB52F5A198D437F* L_22 = ((CLRType_t72C55A04EDC2A68F969A27FE7DB52F5A198D437F*)CastclassClass((RuntimeObject*)L_21, CLRType_t72C55A04EDC2A68F969A27FE7DB52F5A198D437F_il2cpp_TypeInfo_var));
		NullCheck(L_22);
		Dictionary_2_t388E31CE91169A6FDC01F4480E46D1BE3AEF76F9* L_23;
		L_23 = CLRType_get_Fields_m4AD95D2B9ACD1012F94EEA77BB889F954A5B10AE(L_22, NULL);
		// ILRuntime.CLR.Utils.Extensions.GetTypeFlags(ct.TypeForCLR);
		NullCheck(L_22);
		Type_t* L_24;
		L_24 = CLRType_get_TypeForCLR_m664A93098B757595B5F90AFAD61B5C7ACFF71C5C_inline(L_22, NULL);
		il2cpp_codegen_runtime_class_init_inline(Extensions_t6C2A02730AAB245FEED18167FEF392140EE8B217_il2cpp_TypeInfo_var);
		int32_t L_25;
		L_25 = Extensions_GetTypeFlags_mBA0B8A943BD59B7B52814B176196A6AD039387C4(L_24, NULL);
	}

IL_0087:
	{
		// for (int i = 0; i < LocalVariableCount; i++)
		int32_t L_26 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_26, 1));
	}

IL_008b:
	{
		// for (int i = 0; i < LocalVariableCount; i++)
		int32_t L_27 = V_0;
		int32_t L_28;
		L_28 = ILMethod_get_LocalVariableCount_m68F32BF5041349D1C171C418CC69F7132F4CC44B_inline(__this, NULL);
		if ((((int32_t)L_27) < ((int32_t)L_28)))
		{
			goto IL_0023;
		}
	}
	{
		// if (jitImmediately || jitOnDemand)
		bool L_29 = __this->___jitImmediately_23;
		if (L_29)
		{
			goto IL_00a4;
		}
	}
	{
		bool L_30 = __this->___jitOnDemand_22;
		if (!L_30)
		{
			goto IL_00ac;
		}
	}

IL_00a4:
	{
		// PrewarmBodyRegister(alreadyPrewarmed);
		HashSet_1_t2672434E7FA2BDC91784300DAB040065F53CA23A* L_31 = ___alreadyPrewarmed0;
		ILMethod_PrewarmBodyRegister_m0ED88A8369A17E76CE08663B3229FD1AC5280CA7(__this, L_31, NULL);
		return;
	}

IL_00ac:
	{
		// PrewarmBody(alreadyPrewarmed);
		HashSet_1_t2672434E7FA2BDC91784300DAB040065F53CA23A* L_32 = ___alreadyPrewarmed0;
		ILMethod_PrewarmBody_mECB768A05A580845D24EF394483405E5A85527DC(__this, L_32, NULL);
		// }
		return;
	}
}
// System.Void ILRuntime.CLR.Method.ILMethod::InitCodeBody(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ILMethod_InitCodeBody_m1F7FAAB73BD45A73D12864A973F86382BAC70917 (ILMethod_tA56B8FD062B67B88B2396AC1AFFCED9E4FE92AD7* __this, bool ___register0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Collection_1_get_Count_m2B375C259B69A1D1AAFF357D42EE581534FDAF06_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Collection_1_get_Count_m6104D73EF401C14E46C6436001A13D5A3F8A056A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Collection_1_get_Count_mD783638DF1A29022277C89E124B16C27999F831F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Collection_1_get_Item_mF76AF89A635ED70B85833B34FE18F867DF6EB1C9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m4B1AFE2030F99E8F3681722B9977BAF3A7F6718E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mADC5C691258B61F41E9BEAEDA7D77752179C58D6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t5B089D76260FC645B19FAE71638DFBBFEA74D852_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExceptionHandlerU5BU5D_t806BA8B0F17F63D28468BC214AB18A4CD4FBAE80_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExceptionHandler_tB7222B56682A0D18CF20D9FD22EC650A924A5C7D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OpCodeU5BU5D_tA0A660D228D31635BC51D02B26E5D715E3EA7C4D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t5B089D76260FC645B19FAE71638DFBBFEA74D852* V_0 = NULL;
	bool V_1 = false;
	JITCompiler_tC86D7253C6877F1CFF8CA4617CD766CC7460B965 V_2;
	memset((&V_2), 0, sizeof(V_2));
	ExceptionHandlerU5BU5D_t806BA8B0F17F63D28468BC214AB18A4CD4FBAE80* V_3 = NULL;
	int32_t V_4 = 0;
	ExceptionHandler_tCC68B4480346581EEA699654AE4E53AE4229E04F* V_5 = NULL;
	ExceptionHandler_tB7222B56682A0D18CF20D9FD22EC650A924A5C7D* V_6 = NULL;
	int32_t V_7 = 0;
	ExceptionHandler_tB7222B56682A0D18CF20D9FD22EC650A924A5C7D* G_B16_0 = NULL;
	ExceptionHandler_tB7222B56682A0D18CF20D9FD22EC650A924A5C7D* G_B15_0 = NULL;
	int32_t G_B17_0 = 0;
	ExceptionHandler_tB7222B56682A0D18CF20D9FD22EC650A924A5C7D* G_B17_1 = NULL;
	{
		// if (def.HasBody)
		MethodDefinition_t20ECAB62A2A1BBEB383A1A979167D658ACCF3244* L_0 = __this->___def_4;
		NullCheck(L_0);
		bool L_1;
		L_1 = MethodDefinition_get_HasBody_m54400707C5F0F89C4261504BFE3A5F6D2406104F(L_0, NULL);
		if (!L_1)
		{
			goto IL_0259;
		}
	}
	{
		// localVarCnt = def.Body.Variables.Count;
		MethodDefinition_t20ECAB62A2A1BBEB383A1A979167D658ACCF3244* L_2 = __this->___def_4;
		NullCheck(L_2);
		MethodBody_tB818BF5E1248D874E371C7F3BC0C5C6240BB8F16* L_3;
		L_3 = MethodDefinition_get_Body_m2230AD544D044BCCF1DF19D233FD474055BE404B(L_2, NULL);
		NullCheck(L_3);
		Collection_1_t413B13D425BA31F81271569D26FE2157469EB23C* L_4;
		L_4 = MethodBody_get_Variables_mFFB10230E11ACF2DF96348F54C476D1E4FF9A757(L_3, NULL);
		NullCheck(L_4);
		int32_t L_5;
		L_5 = Collection_1_get_Count_mD783638DF1A29022277C89E124B16C27999F831F_inline(L_4, Collection_1_get_Count_mD783638DF1A29022277C89E124B16C27999F831F_RuntimeMethod_var);
		__this->___localVarCnt_19 = L_5;
		// Dictionary<Mono.Cecil.Cil.Instruction, int> addr = new Dictionary<Mono.Cecil.Cil.Instruction, int>();
		Dictionary_2_t5B089D76260FC645B19FAE71638DFBBFEA74D852* L_6 = (Dictionary_2_t5B089D76260FC645B19FAE71638DFBBFEA74D852*)il2cpp_codegen_object_new(Dictionary_2_t5B089D76260FC645B19FAE71638DFBBFEA74D852_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Dictionary_2__ctor_m4B1AFE2030F99E8F3681722B9977BAF3A7F6718E(L_6, Dictionary_2__ctor_m4B1AFE2030F99E8F3681722B9977BAF3A7F6718E_RuntimeMethod_var);
		V_0 = L_6;
		// bool noRelease = false;
		V_1 = (bool)0;
		// if (register)
		bool L_7 = ___register0;
		if (!L_7)
		{
			goto IL_006c;
		}
	}
	{
		// JITCompiler jit = new JITCompiler(appdomain, declaringType, this);
		AppDomain_tFFEF01BA23D79DA3A22C21195FD262862037E506* L_8 = __this->___appdomain_6;
		ILType_tD812655AF7716306B8168AD6F08152435B77708C* L_9 = __this->___declaringType_7;
		JITCompiler__ctor_m5EACDD500E97DE7A10B5C27156A162188D871649((&V_2), L_8, L_9, __this, NULL);
		// bodyRegister = jit.Compile(out stackRegisterCnt, out jumptablesR, addr, out registerSymbols);
		int32_t* L_10 = (&__this->___stackRegisterCnt_20);
		Dictionary_2_t029F6A37F043A1B571A7DB746955ECB8DC548AD9** L_11 = (&__this->___jumptablesR_13);
		Dictionary_2_t5B089D76260FC645B19FAE71638DFBBFEA74D852* L_12 = V_0;
		Dictionary_2_tEEB88CF46F6DA1D57225A58A73623EA721DEF951** L_13 = (&__this->___registerSymbols_2);
		OpCodeRU5BU5D_t9144130E7DF3ABF7AF0E3EFC8AF0C63759AA6AC1* L_14;
		L_14 = JITCompiler_Compile_m82A2F857B70F39D5F3E6083BBABECE2BAC3C7F1C((&V_2), L_10, L_11, L_12, L_13, NULL);
		__this->___bodyRegister_1 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___bodyRegister_1), (void*)L_14);
		goto IL_0085;
	}

IL_006c:
	{
		// InitStackCodeBody(addr);
		Dictionary_2_t5B089D76260FC645B19FAE71638DFBBFEA74D852* L_15 = V_0;
		ILMethod_InitStackCodeBody_m81E7A99FBC70BB12A081DC84390D5EC7FFB12919(__this, L_15, NULL);
		// if (jitOnDemand)
		bool L_16 = __this->___jitOnDemand_22;
		if (!L_16)
		{
			goto IL_0085;
		}
	}
	{
		// noRelease = bodyRegister == null;
		OpCodeRU5BU5D_t9144130E7DF3ABF7AF0E3EFC8AF0C63759AA6AC1* L_17 = __this->___bodyRegister_1;
		V_1 = (bool)((((RuntimeObject*)(OpCodeRU5BU5D_t9144130E7DF3ABF7AF0E3EFC8AF0C63759AA6AC1*)L_17) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
	}

IL_0085:
	{
		// if (def.Body.ExceptionHandlers.Count > 0)
		MethodDefinition_t20ECAB62A2A1BBEB383A1A979167D658ACCF3244* L_18 = __this->___def_4;
		NullCheck(L_18);
		MethodBody_tB818BF5E1248D874E371C7F3BC0C5C6240BB8F16* L_19;
		L_19 = MethodDefinition_get_Body_m2230AD544D044BCCF1DF19D233FD474055BE404B(L_18, NULL);
		NullCheck(L_19);
		Collection_1_t5C54232BE7649E8BCD655EC300132C2E30EC319F* L_20;
		L_20 = MethodBody_get_ExceptionHandlers_m2AA0D7642BE1BAC29A717A215E3473793354E001(L_19, NULL);
		NullCheck(L_20);
		int32_t L_21;
		L_21 = Collection_1_get_Count_m6104D73EF401C14E46C6436001A13D5A3F8A056A_inline(L_20, Collection_1_get_Count_m6104D73EF401C14E46C6436001A13D5A3F8A056A_RuntimeMethod_var);
		if ((((int32_t)L_21) <= ((int32_t)0)))
		{
			goto IL_0233;
		}
	}
	{
		// if (register)
		bool L_22 = ___register0;
		if (!L_22)
		{
			goto IL_00d4;
		}
	}
	{
		// if (exceptionHandlerR == null)
		ExceptionHandlerU5BU5D_t806BA8B0F17F63D28468BC214AB18A4CD4FBAE80* L_23 = __this->___exceptionHandlerR_9;
		if (L_23)
		{
			goto IL_00cb;
		}
	}
	{
		// exceptionHandlerR = new Method.ExceptionHandler[def.Body.ExceptionHandlers.Count];
		MethodDefinition_t20ECAB62A2A1BBEB383A1A979167D658ACCF3244* L_24 = __this->___def_4;
		NullCheck(L_24);
		MethodBody_tB818BF5E1248D874E371C7F3BC0C5C6240BB8F16* L_25;
		L_25 = MethodDefinition_get_Body_m2230AD544D044BCCF1DF19D233FD474055BE404B(L_24, NULL);
		NullCheck(L_25);
		Collection_1_t5C54232BE7649E8BCD655EC300132C2E30EC319F* L_26;
		L_26 = MethodBody_get_ExceptionHandlers_m2AA0D7642BE1BAC29A717A215E3473793354E001(L_25, NULL);
		NullCheck(L_26);
		int32_t L_27;
		L_27 = Collection_1_get_Count_m6104D73EF401C14E46C6436001A13D5A3F8A056A_inline(L_26, Collection_1_get_Count_m6104D73EF401C14E46C6436001A13D5A3F8A056A_RuntimeMethod_var);
		ExceptionHandlerU5BU5D_t806BA8B0F17F63D28468BC214AB18A4CD4FBAE80* L_28 = (ExceptionHandlerU5BU5D_t806BA8B0F17F63D28468BC214AB18A4CD4FBAE80*)(ExceptionHandlerU5BU5D_t806BA8B0F17F63D28468BC214AB18A4CD4FBAE80*)SZArrayNew(ExceptionHandlerU5BU5D_t806BA8B0F17F63D28468BC214AB18A4CD4FBAE80_il2cpp_TypeInfo_var, (uint32_t)L_27);
		__this->___exceptionHandlerR_9 = L_28;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___exceptionHandlerR_9), (void*)L_28);
	}

IL_00cb:
	{
		// ehs = exceptionHandlerR;
		ExceptionHandlerU5BU5D_t806BA8B0F17F63D28468BC214AB18A4CD4FBAE80* L_29 = __this->___exceptionHandlerR_9;
		V_3 = L_29;
		goto IL_0103;
	}

IL_00d4:
	{
		// if (exceptionHandler == null)
		ExceptionHandlerU5BU5D_t806BA8B0F17F63D28468BC214AB18A4CD4FBAE80* L_30 = __this->___exceptionHandler_8;
		if (L_30)
		{
			goto IL_00fc;
		}
	}
	{
		// exceptionHandler = new Method.ExceptionHandler[def.Body.ExceptionHandlers.Count];
		MethodDefinition_t20ECAB62A2A1BBEB383A1A979167D658ACCF3244* L_31 = __this->___def_4;
		NullCheck(L_31);
		MethodBody_tB818BF5E1248D874E371C7F3BC0C5C6240BB8F16* L_32;
		L_32 = MethodDefinition_get_Body_m2230AD544D044BCCF1DF19D233FD474055BE404B(L_31, NULL);
		NullCheck(L_32);
		Collection_1_t5C54232BE7649E8BCD655EC300132C2E30EC319F* L_33;
		L_33 = MethodBody_get_ExceptionHandlers_m2AA0D7642BE1BAC29A717A215E3473793354E001(L_32, NULL);
		NullCheck(L_33);
		int32_t L_34;
		L_34 = Collection_1_get_Count_m6104D73EF401C14E46C6436001A13D5A3F8A056A_inline(L_33, Collection_1_get_Count_m6104D73EF401C14E46C6436001A13D5A3F8A056A_RuntimeMethod_var);
		ExceptionHandlerU5BU5D_t806BA8B0F17F63D28468BC214AB18A4CD4FBAE80* L_35 = (ExceptionHandlerU5BU5D_t806BA8B0F17F63D28468BC214AB18A4CD4FBAE80*)(ExceptionHandlerU5BU5D_t806BA8B0F17F63D28468BC214AB18A4CD4FBAE80*)SZArrayNew(ExceptionHandlerU5BU5D_t806BA8B0F17F63D28468BC214AB18A4CD4FBAE80_il2cpp_TypeInfo_var, (uint32_t)L_34);
		__this->___exceptionHandler_8 = L_35;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___exceptionHandler_8), (void*)L_35);
	}

IL_00fc:
	{
		// ehs = exceptionHandler;
		ExceptionHandlerU5BU5D_t806BA8B0F17F63D28468BC214AB18A4CD4FBAE80* L_36 = __this->___exceptionHandler_8;
		V_3 = L_36;
	}

IL_0103:
	{
		// for (int i = 0; i < def.Body.ExceptionHandlers.Count; i++)
		V_4 = 0;
		goto IL_0217;
	}

IL_010b:
	{
		// var eh = def.Body.ExceptionHandlers[i];
		MethodDefinition_t20ECAB62A2A1BBEB383A1A979167D658ACCF3244* L_37 = __this->___def_4;
		NullCheck(L_37);
		MethodBody_tB818BF5E1248D874E371C7F3BC0C5C6240BB8F16* L_38;
		L_38 = MethodDefinition_get_Body_m2230AD544D044BCCF1DF19D233FD474055BE404B(L_37, NULL);
		NullCheck(L_38);
		Collection_1_t5C54232BE7649E8BCD655EC300132C2E30EC319F* L_39;
		L_39 = MethodBody_get_ExceptionHandlers_m2AA0D7642BE1BAC29A717A215E3473793354E001(L_38, NULL);
		int32_t L_40 = V_4;
		NullCheck(L_39);
		ExceptionHandler_tCC68B4480346581EEA699654AE4E53AE4229E04F* L_41;
		L_41 = Collection_1_get_Item_mF76AF89A635ED70B85833B34FE18F867DF6EB1C9(L_39, L_40, Collection_1_get_Item_mF76AF89A635ED70B85833B34FE18F867DF6EB1C9_RuntimeMethod_var);
		V_5 = L_41;
		// ExceptionHandler e = new ExceptionHandler();
		ExceptionHandler_tB7222B56682A0D18CF20D9FD22EC650A924A5C7D* L_42 = (ExceptionHandler_tB7222B56682A0D18CF20D9FD22EC650A924A5C7D*)il2cpp_codegen_object_new(ExceptionHandler_tB7222B56682A0D18CF20D9FD22EC650A924A5C7D_il2cpp_TypeInfo_var);
		NullCheck(L_42);
		ExceptionHandler__ctor_m7588697CEACF57BAAC73CE205962AAED7022DADD(L_42, NULL);
		V_6 = L_42;
		// e.HandlerStart = addr[eh.HandlerStart];
		ExceptionHandler_tB7222B56682A0D18CF20D9FD22EC650A924A5C7D* L_43 = V_6;
		Dictionary_2_t5B089D76260FC645B19FAE71638DFBBFEA74D852* L_44 = V_0;
		ExceptionHandler_tCC68B4480346581EEA699654AE4E53AE4229E04F* L_45 = V_5;
		NullCheck(L_45);
		Instruction_tAA84FA05703612EBA9700BB65C31560D5AA0ACC6* L_46;
		L_46 = ExceptionHandler_get_HandlerStart_m9077C46C0CB011140C0D23065E1ADF43A4988E1B_inline(L_45, NULL);
		NullCheck(L_44);
		int32_t L_47;
		L_47 = Dictionary_2_get_Item_mADC5C691258B61F41E9BEAEDA7D77752179C58D6(L_44, L_46, Dictionary_2_get_Item_mADC5C691258B61F41E9BEAEDA7D77752179C58D6_RuntimeMethod_var);
		NullCheck(L_43);
		ExceptionHandler_set_HandlerStart_m3CB97FBD951D52CE39641D648293B10391EAE971_inline(L_43, L_47, NULL);
		// e.HandlerEnd = eh.HandlerEnd != null ? addr[eh.HandlerEnd] - 1 : def.Body.Instructions.Count - 1;
		ExceptionHandler_tB7222B56682A0D18CF20D9FD22EC650A924A5C7D* L_48 = V_6;
		ExceptionHandler_tCC68B4480346581EEA699654AE4E53AE4229E04F* L_49 = V_5;
		NullCheck(L_49);
		Instruction_tAA84FA05703612EBA9700BB65C31560D5AA0ACC6* L_50;
		L_50 = ExceptionHandler_get_HandlerEnd_mEB9F653A69A06E7BA5F7B3FECC195966514FB958_inline(L_49, NULL);
		G_B15_0 = L_48;
		if (L_50)
		{
			G_B16_0 = L_48;
			goto IL_0163;
		}
	}
	{
		MethodDefinition_t20ECAB62A2A1BBEB383A1A979167D658ACCF3244* L_51 = __this->___def_4;
		NullCheck(L_51);
		MethodBody_tB818BF5E1248D874E371C7F3BC0C5C6240BB8F16* L_52;
		L_52 = MethodDefinition_get_Body_m2230AD544D044BCCF1DF19D233FD474055BE404B(L_51, NULL);
		NullCheck(L_52);
		Collection_1_tF5DDA42267FA4FB2EEA852938E458549573DB51F* L_53;
		L_53 = MethodBody_get_Instructions_m1B9F3083080FE9D7E7E0180E6AAE97AC1CD37991(L_52, NULL);
		NullCheck(L_53);
		int32_t L_54;
		L_54 = Collection_1_get_Count_m2B375C259B69A1D1AAFF357D42EE581534FDAF06_inline(L_53, Collection_1_get_Count_m2B375C259B69A1D1AAFF357D42EE581534FDAF06_RuntimeMethod_var);
		G_B17_0 = ((int32_t)il2cpp_codegen_subtract(L_54, 1));
		G_B17_1 = G_B15_0;
		goto IL_0172;
	}

IL_0163:
	{
		Dictionary_2_t5B089D76260FC645B19FAE71638DFBBFEA74D852* L_55 = V_0;
		ExceptionHandler_tCC68B4480346581EEA699654AE4E53AE4229E04F* L_56 = V_5;
		NullCheck(L_56);
		Instruction_tAA84FA05703612EBA9700BB65C31560D5AA0ACC6* L_57;
		L_57 = ExceptionHandler_get_HandlerEnd_mEB9F653A69A06E7BA5F7B3FECC195966514FB958_inline(L_56, NULL);
		NullCheck(L_55);
		int32_t L_58;
		L_58 = Dictionary_2_get_Item_mADC5C691258B61F41E9BEAEDA7D77752179C58D6(L_55, L_57, Dictionary_2_get_Item_mADC5C691258B61F41E9BEAEDA7D77752179C58D6_RuntimeMethod_var);
		G_B17_0 = ((int32_t)il2cpp_codegen_subtract(L_58, 1));
		G_B17_1 = G_B16_0;
	}

IL_0172:
	{
		NullCheck(G_B17_1);
		ExceptionHandler_set_HandlerEnd_mA3E4CA82B92936DBD2B7C638D9E6CA51D097B0EA_inline(G_B17_1, G_B17_0, NULL);
		// e.TryStart = addr[eh.TryStart];
		ExceptionHandler_tB7222B56682A0D18CF20D9FD22EC650A924A5C7D* L_59 = V_6;
		Dictionary_2_t5B089D76260FC645B19FAE71638DFBBFEA74D852* L_60 = V_0;
		ExceptionHandler_tCC68B4480346581EEA699654AE4E53AE4229E04F* L_61 = V_5;
		NullCheck(L_61);
		Instruction_tAA84FA05703612EBA9700BB65C31560D5AA0ACC6* L_62;
		L_62 = ExceptionHandler_get_TryStart_m3B6DE3DDA77825C59E390F15849CF123EA06D73C_inline(L_61, NULL);
		NullCheck(L_60);
		int32_t L_63;
		L_63 = Dictionary_2_get_Item_mADC5C691258B61F41E9BEAEDA7D77752179C58D6(L_60, L_62, Dictionary_2_get_Item_mADC5C691258B61F41E9BEAEDA7D77752179C58D6_RuntimeMethod_var);
		NullCheck(L_59);
		ExceptionHandler_set_TryStart_mEA428C865E60D3BC637301D915F007B3367F58BD_inline(L_59, L_63, NULL);
		// e.TryEnd = addr[eh.TryEnd] - 1;
		ExceptionHandler_tB7222B56682A0D18CF20D9FD22EC650A924A5C7D* L_64 = V_6;
		Dictionary_2_t5B089D76260FC645B19FAE71638DFBBFEA74D852* L_65 = V_0;
		ExceptionHandler_tCC68B4480346581EEA699654AE4E53AE4229E04F* L_66 = V_5;
		NullCheck(L_66);
		Instruction_tAA84FA05703612EBA9700BB65C31560D5AA0ACC6* L_67;
		L_67 = ExceptionHandler_get_TryEnd_mE568F7495E0715221987FCF2488EF1508959A004_inline(L_66, NULL);
		NullCheck(L_65);
		int32_t L_68;
		L_68 = Dictionary_2_get_Item_mADC5C691258B61F41E9BEAEDA7D77752179C58D6(L_65, L_67, Dictionary_2_get_Item_mADC5C691258B61F41E9BEAEDA7D77752179C58D6_RuntimeMethod_var);
		NullCheck(L_64);
		ExceptionHandler_set_TryEnd_mA9F6DC9D3444D2CD6497E88234B508A2C5439DE7_inline(L_64, ((int32_t)il2cpp_codegen_subtract(L_68, 1)), NULL);
		// switch (eh.HandlerType)
		ExceptionHandler_tCC68B4480346581EEA699654AE4E53AE4229E04F* L_69 = V_5;
		NullCheck(L_69);
		int32_t L_70;
		L_70 = ExceptionHandler_get_HandlerType_mACFCDC40A68537732DA482458A0BB299CC0E3710_inline(L_69, NULL);
		V_7 = L_70;
		int32_t L_71 = V_7;
		switch (L_71)
		{
			case 0:
			{
				goto IL_01c7;
			}
			case 1:
			{
				goto IL_0205;
			}
			case 2:
			{
				goto IL_01f1;
			}
			case 3:
			{
				goto IL_0205;
			}
			case 4:
			{
				goto IL_01fb;
			}
		}
	}
	{
		goto IL_0205;
	}

IL_01c7:
	{
		// e.CatchType = appdomain.GetType(eh.CatchType, declaringType, this);
		ExceptionHandler_tB7222B56682A0D18CF20D9FD22EC650A924A5C7D* L_72 = V_6;
		AppDomain_tFFEF01BA23D79DA3A22C21195FD262862037E506* L_73 = __this->___appdomain_6;
		ExceptionHandler_tCC68B4480346581EEA699654AE4E53AE4229E04F* L_74 = V_5;
		NullCheck(L_74);
		TypeReference_tF82E3E035A581A717CE653CEFC3843CE4E460F91* L_75;
		L_75 = ExceptionHandler_get_CatchType_mC30D22E4A69E04F4E2509E094609EF48EE09BA1C_inline(L_74, NULL);
		ILType_tD812655AF7716306B8168AD6F08152435B77708C* L_76 = __this->___declaringType_7;
		NullCheck(L_73);
		RuntimeObject* L_77;
		L_77 = AppDomain_GetType_m0CF8800358B9E64FE1C5257FDCD210A37C25385B(L_73, L_75, L_76, __this, NULL);
		NullCheck(L_72);
		ExceptionHandler_set_CatchType_m30E5EF5C99A5BCC4D89B2E7E13888F67B315DFC0_inline(L_72, L_77, NULL);
		// e.HandlerType = ExceptionHandlerType.Catch;
		ExceptionHandler_tB7222B56682A0D18CF20D9FD22EC650A924A5C7D* L_78 = V_6;
		NullCheck(L_78);
		ExceptionHandler_set_HandlerType_m5C6AF51DFA74A298E65D9A735D7726CCB7633764_inline(L_78, 0, NULL);
		// break;
		goto IL_020b;
	}

IL_01f1:
	{
		// e.HandlerType = ExceptionHandlerType.Finally;
		ExceptionHandler_tB7222B56682A0D18CF20D9FD22EC650A924A5C7D* L_79 = V_6;
		NullCheck(L_79);
		ExceptionHandler_set_HandlerType_m5C6AF51DFA74A298E65D9A735D7726CCB7633764_inline(L_79, 1, NULL);
		// break;
		goto IL_020b;
	}

IL_01fb:
	{
		// e.HandlerType = ExceptionHandlerType.Fault;
		ExceptionHandler_tB7222B56682A0D18CF20D9FD22EC650A924A5C7D* L_80 = V_6;
		NullCheck(L_80);
		ExceptionHandler_set_HandlerType_m5C6AF51DFA74A298E65D9A735D7726CCB7633764_inline(L_80, 2, NULL);
		// break;
		goto IL_020b;
	}

IL_0205:
	{
		// throw new NotImplementedException();
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_81 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_81);
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_81, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_81, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ILMethod_InitCodeBody_m1F7FAAB73BD45A73D12864A973F86382BAC70917_RuntimeMethod_var)));
	}

IL_020b:
	{
		// ehs[i] = e;
		ExceptionHandlerU5BU5D_t806BA8B0F17F63D28468BC214AB18A4CD4FBAE80* L_82 = V_3;
		int32_t L_83 = V_4;
		ExceptionHandler_tB7222B56682A0D18CF20D9FD22EC650A924A5C7D* L_84 = V_6;
		NullCheck(L_82);
		ArrayElementTypeCheck (L_82, L_84);
		(L_82)->SetAt(static_cast<il2cpp_array_size_t>(L_83), (ExceptionHandler_tB7222B56682A0D18CF20D9FD22EC650A924A5C7D*)L_84);
		// for (int i = 0; i < def.Body.ExceptionHandlers.Count; i++)
		int32_t L_85 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_85, 1));
	}

IL_0217:
	{
		// for (int i = 0; i < def.Body.ExceptionHandlers.Count; i++)
		int32_t L_86 = V_4;
		MethodDefinition_t20ECAB62A2A1BBEB383A1A979167D658ACCF3244* L_87 = __this->___def_4;
		NullCheck(L_87);
		MethodBody_tB818BF5E1248D874E371C7F3BC0C5C6240BB8F16* L_88;
		L_88 = MethodDefinition_get_Body_m2230AD544D044BCCF1DF19D233FD474055BE404B(L_87, NULL);
		NullCheck(L_88);
		Collection_1_t5C54232BE7649E8BCD655EC300132C2E30EC319F* L_89;
		L_89 = MethodBody_get_ExceptionHandlers_m2AA0D7642BE1BAC29A717A215E3473793354E001(L_88, NULL);
		NullCheck(L_89);
		int32_t L_90;
		L_90 = Collection_1_get_Count_m6104D73EF401C14E46C6436001A13D5A3F8A056A_inline(L_89, Collection_1_get_Count_m6104D73EF401C14E46C6436001A13D5A3F8A056A_RuntimeMethod_var);
		if ((((int32_t)L_86) < ((int32_t)L_90)))
		{
			goto IL_010b;
		}
	}

IL_0233:
	{
		// variables = def.Body.Variables;
		MethodDefinition_t20ECAB62A2A1BBEB383A1A979167D658ACCF3244* L_91 = __this->___def_4;
		NullCheck(L_91);
		MethodBody_tB818BF5E1248D874E371C7F3BC0C5C6240BB8F16* L_92;
		L_92 = MethodDefinition_get_Body_m2230AD544D044BCCF1DF19D233FD474055BE404B(L_91, NULL);
		NullCheck(L_92);
		Collection_1_t413B13D425BA31F81271569D26FE2157469EB23C* L_93;
		L_93 = MethodBody_get_Variables_mFFB10230E11ACF2DF96348F54C476D1E4FF9A757(L_92, NULL);
		__this->___variables_25 = L_93;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___variables_25), (void*)L_93);
		// if(!noRelease)
		bool L_94 = V_1;
		if (L_94)
		{
			goto IL_0265;
		}
	}
	{
		// def.Body = null;
		MethodDefinition_t20ECAB62A2A1BBEB383A1A979167D658ACCF3244* L_95 = __this->___def_4;
		NullCheck(L_95);
		MethodDefinition_set_Body_mCE247A64A8262FAE7EEE95237A3A3250460CEA99(L_95, (MethodBody_tB818BF5E1248D874E371C7F3BC0C5C6240BB8F16*)NULL, NULL);
		return;
	}

IL_0259:
	{
		// body = new OpCode[0];
		OpCodeU5BU5D_tA0A660D228D31635BC51D02B26E5D715E3EA7C4D* L_96 = (OpCodeU5BU5D_tA0A660D228D31635BC51D02B26E5D715E3EA7C4D*)(OpCodeU5BU5D_tA0A660D228D31635BC51D02B26E5D715E3EA7C4D*)SZArrayNew(OpCodeU5BU5D_tA0A660D228D31635BC51D02B26E5D715E3EA7C4D_il2cpp_TypeInfo_var, (uint32_t)0);
		__this->___body_0 = L_96;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___body_0), (void*)L_96);
	}

IL_0265:
	{
		// }
		return;
	}
}
// System.Void ILRuntime.CLR.Method.ILMethod::InitStackCodeBody(System.Collections.Generic.Dictionary`2<ILRuntime.Mono.Cecil.Cil.Instruction,System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ILMethod_InitStackCodeBody_m81E7A99FBC70BB12A081DC84390D5EC7FFB12919 (ILMethod_tA56B8FD062B67B88B2396AC1AFFCED9E4FE92AD7* __this, Dictionary_2_t5B089D76260FC645B19FAE71638DFBBFEA74D852* ___addr0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Collection_1_get_Count_m2B375C259B69A1D1AAFF357D42EE581534FDAF06_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Collection_1_get_Item_mFB170286F10CA68315AAE9DC233BF1AB596F37B5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m128B6075B2D3E884FA44A8C4BF145D871AA9274A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OpCodeU5BU5D_tA0A660D228D31635BC51D02B26E5D715E3EA7C4D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Instruction_tAA84FA05703612EBA9700BB65C31560D5AA0ACC6* V_1 = NULL;
	OpCode_t34FC4B6966640D468676BA39661AF3946A3943A7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	OpCode_t9B1522253DF23368D786BB5D1DF051781F1D3EA9 V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	Instruction_tAA84FA05703612EBA9700BB65C31560D5AA0ACC6* V_5 = NULL;
	{
		// body = new OpCode[def.Body.Instructions.Count];
		MethodDefinition_t20ECAB62A2A1BBEB383A1A979167D658ACCF3244* L_0 = __this->___def_4;
		NullCheck(L_0);
		MethodBody_tB818BF5E1248D874E371C7F3BC0C5C6240BB8F16* L_1;
		L_1 = MethodDefinition_get_Body_m2230AD544D044BCCF1DF19D233FD474055BE404B(L_0, NULL);
		NullCheck(L_1);
		Collection_1_tF5DDA42267FA4FB2EEA852938E458549573DB51F* L_2;
		L_2 = MethodBody_get_Instructions_m1B9F3083080FE9D7E7E0180E6AAE97AC1CD37991(L_1, NULL);
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Collection_1_get_Count_m2B375C259B69A1D1AAFF357D42EE581534FDAF06_inline(L_2, Collection_1_get_Count_m2B375C259B69A1D1AAFF357D42EE581534FDAF06_RuntimeMethod_var);
		OpCodeU5BU5D_tA0A660D228D31635BC51D02B26E5D715E3EA7C4D* L_4 = (OpCodeU5BU5D_tA0A660D228D31635BC51D02B26E5D715E3EA7C4D*)(OpCodeU5BU5D_tA0A660D228D31635BC51D02B26E5D715E3EA7C4D*)SZArrayNew(OpCodeU5BU5D_tA0A660D228D31635BC51D02B26E5D715E3EA7C4D_il2cpp_TypeInfo_var, (uint32_t)L_3);
		__this->___body_0 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___body_0), (void*)L_4);
		// for (int i = 0; i < body.Length; i++)
		V_0 = 0;
		goto IL_0071;
	}

IL_0024:
	{
		// var c = def.Body.Instructions[i];
		MethodDefinition_t20ECAB62A2A1BBEB383A1A979167D658ACCF3244* L_5 = __this->___def_4;
		NullCheck(L_5);
		MethodBody_tB818BF5E1248D874E371C7F3BC0C5C6240BB8F16* L_6;
		L_6 = MethodDefinition_get_Body_m2230AD544D044BCCF1DF19D233FD474055BE404B(L_5, NULL);
		NullCheck(L_6);
		Collection_1_tF5DDA42267FA4FB2EEA852938E458549573DB51F* L_7;
		L_7 = MethodBody_get_Instructions_m1B9F3083080FE9D7E7E0180E6AAE97AC1CD37991(L_6, NULL);
		int32_t L_8 = V_0;
		NullCheck(L_7);
		Instruction_tAA84FA05703612EBA9700BB65C31560D5AA0ACC6* L_9;
		L_9 = Collection_1_get_Item_mFB170286F10CA68315AAE9DC233BF1AB596F37B5(L_7, L_8, Collection_1_get_Item_mFB170286F10CA68315AAE9DC233BF1AB596F37B5_RuntimeMethod_var);
		V_1 = L_9;
		// OpCode code = new OpCode();
		il2cpp_codegen_initobj((&V_2), sizeof(OpCode_t34FC4B6966640D468676BA39661AF3946A3943A7));
		// code.Code = (OpCodeEnum)c.OpCode.Code;
		Instruction_tAA84FA05703612EBA9700BB65C31560D5AA0ACC6* L_10 = V_1;
		NullCheck(L_10);
		OpCode_t9B1522253DF23368D786BB5D1DF051781F1D3EA9 L_11;
		L_11 = Instruction_get_OpCode_mE204C6C94777DF469A4011D6DBC08500B1187586_inline(L_10, NULL);
		V_3 = L_11;
		int32_t L_12;
		L_12 = OpCode_get_Code_mCD6F937B2F495740EBBE40050D4D748C1563B8D6_inline((&V_3), NULL);
		(&V_2)->___Code_0 = L_12;
		// addr[c] = i;
		Dictionary_2_t5B089D76260FC645B19FAE71638DFBBFEA74D852* L_13 = ___addr0;
		Instruction_tAA84FA05703612EBA9700BB65C31560D5AA0ACC6* L_14 = V_1;
		int32_t L_15 = V_0;
		NullCheck(L_13);
		Dictionary_2_set_Item_m128B6075B2D3E884FA44A8C4BF145D871AA9274A(L_13, L_14, L_15, Dictionary_2_set_Item_m128B6075B2D3E884FA44A8C4BF145D871AA9274A_RuntimeMethod_var);
		// body[i] = code;
		OpCodeU5BU5D_tA0A660D228D31635BC51D02B26E5D715E3EA7C4D* L_16 = __this->___body_0;
		int32_t L_17 = V_0;
		OpCode_t34FC4B6966640D468676BA39661AF3946A3943A7 L_18 = V_2;
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(L_17), (OpCode_t34FC4B6966640D468676BA39661AF3946A3943A7)L_18);
		// for (int i = 0; i < body.Length; i++)
		int32_t L_19 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_0071:
	{
		// for (int i = 0; i < body.Length; i++)
		int32_t L_20 = V_0;
		OpCodeU5BU5D_tA0A660D228D31635BC51D02B26E5D715E3EA7C4D* L_21 = __this->___body_0;
		NullCheck(L_21);
		if ((((int32_t)L_20) < ((int32_t)((int32_t)(((RuntimeArray*)L_21)->max_length)))))
		{
			goto IL_0024;
		}
	}
	{
		// for (int i = 0; i < body.Length; i++)
		V_4 = 0;
		goto IL_012a;
	}

IL_0084:
	{
		// var c = def.Body.Instructions[i];
		MethodDefinition_t20ECAB62A2A1BBEB383A1A979167D658ACCF3244* L_22 = __this->___def_4;
		NullCheck(L_22);
		MethodBody_tB818BF5E1248D874E371C7F3BC0C5C6240BB8F16* L_23;
		L_23 = MethodDefinition_get_Body_m2230AD544D044BCCF1DF19D233FD474055BE404B(L_22, NULL);
		NullCheck(L_23);
		Collection_1_tF5DDA42267FA4FB2EEA852938E458549573DB51F* L_24;
		L_24 = MethodBody_get_Instructions_m1B9F3083080FE9D7E7E0180E6AAE97AC1CD37991(L_23, NULL);
		int32_t L_25 = V_4;
		NullCheck(L_24);
		Instruction_tAA84FA05703612EBA9700BB65C31560D5AA0ACC6* L_26;
		L_26 = Collection_1_get_Item_mFB170286F10CA68315AAE9DC233BF1AB596F37B5(L_24, L_25, Collection_1_get_Item_mFB170286F10CA68315AAE9DC233BF1AB596F37B5_RuntimeMethod_var);
		V_5 = L_26;
		// InitToken(ref body[i], c.Operand, addr);
		OpCodeU5BU5D_tA0A660D228D31635BC51D02B26E5D715E3EA7C4D* L_27 = __this->___body_0;
		int32_t L_28 = V_4;
		NullCheck(L_27);
		Instruction_tAA84FA05703612EBA9700BB65C31560D5AA0ACC6* L_29 = V_5;
		NullCheck(L_29);
		RuntimeObject* L_30;
		L_30 = Instruction_get_Operand_m0461C42D44AE75A597C330499680991C9D1BF00A_inline(L_29, NULL);
		Dictionary_2_t5B089D76260FC645B19FAE71638DFBBFEA74D852* L_31 = ___addr0;
		ILMethod_InitToken_m51FCFA50E29DC10DDA4B99208AD09DE662D0A9E3(__this, ((L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_28))), L_30, L_31, NULL);
		// if (i > 0 && c.OpCode.Code == Mono.Cecil.Cil.Code.Callvirt && def.Body.Instructions[i - 1].OpCode.Code == Mono.Cecil.Cil.Code.Constrained)
		int32_t L_32 = V_4;
		if ((((int32_t)L_32) <= ((int32_t)0)))
		{
			goto IL_0124;
		}
	}
	{
		Instruction_tAA84FA05703612EBA9700BB65C31560D5AA0ACC6* L_33 = V_5;
		NullCheck(L_33);
		OpCode_t9B1522253DF23368D786BB5D1DF051781F1D3EA9 L_34;
		L_34 = Instruction_get_OpCode_mE204C6C94777DF469A4011D6DBC08500B1187586_inline(L_33, NULL);
		V_3 = L_34;
		int32_t L_35;
		L_35 = OpCode_get_Code_mCD6F937B2F495740EBBE40050D4D748C1563B8D6_inline((&V_3), NULL);
		if ((!(((uint32_t)L_35) == ((uint32_t)((int32_t)110)))))
		{
			goto IL_0124;
		}
	}
	{
		MethodDefinition_t20ECAB62A2A1BBEB383A1A979167D658ACCF3244* L_36 = __this->___def_4;
		NullCheck(L_36);
		MethodBody_tB818BF5E1248D874E371C7F3BC0C5C6240BB8F16* L_37;
		L_37 = MethodDefinition_get_Body_m2230AD544D044BCCF1DF19D233FD474055BE404B(L_36, NULL);
		NullCheck(L_37);
		Collection_1_tF5DDA42267FA4FB2EEA852938E458549573DB51F* L_38;
		L_38 = MethodBody_get_Instructions_m1B9F3083080FE9D7E7E0180E6AAE97AC1CD37991(L_37, NULL);
		int32_t L_39 = V_4;
		NullCheck(L_38);
		Instruction_tAA84FA05703612EBA9700BB65C31560D5AA0ACC6* L_40;
		L_40 = Collection_1_get_Item_mFB170286F10CA68315AAE9DC233BF1AB596F37B5(L_38, ((int32_t)il2cpp_codegen_subtract(L_39, 1)), Collection_1_get_Item_mFB170286F10CA68315AAE9DC233BF1AB596F37B5_RuntimeMethod_var);
		NullCheck(L_40);
		OpCode_t9B1522253DF23368D786BB5D1DF051781F1D3EA9 L_41;
		L_41 = Instruction_get_OpCode_mE204C6C94777DF469A4011D6DBC08500B1187586_inline(L_40, NULL);
		V_3 = L_41;
		int32_t L_42;
		L_42 = OpCode_get_Code_mCD6F937B2F495740EBBE40050D4D748C1563B8D6_inline((&V_3), NULL);
		if ((!(((uint32_t)L_42) == ((uint32_t)((int32_t)211)))))
		{
			goto IL_0124;
		}
	}
	{
		// body[i - 1].TokenLong = body[i].TokenInteger;
		OpCodeU5BU5D_tA0A660D228D31635BC51D02B26E5D715E3EA7C4D* L_43 = __this->___body_0;
		int32_t L_44 = V_4;
		NullCheck(L_43);
		OpCodeU5BU5D_tA0A660D228D31635BC51D02B26E5D715E3EA7C4D* L_45 = __this->___body_0;
		int32_t L_46 = V_4;
		NullCheck(L_45);
		int32_t L_47 = ((L_45)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_46)))->___TokenInteger_1;
		((L_43)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_44, 1)))))->___TokenLong_2 = ((int64_t)L_47);
	}

IL_0124:
	{
		// for (int i = 0; i < body.Length; i++)
		int32_t L_48 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_48, 1));
	}

IL_012a:
	{
		// for (int i = 0; i < body.Length; i++)
		int32_t L_49 = V_4;
		OpCodeU5BU5D_tA0A660D228D31635BC51D02B26E5D715E3EA7C4D* L_50 = __this->___body_0;
		NullCheck(L_50);
		if ((((int32_t)L_49) < ((int32_t)((int32_t)(((RuntimeArray*)L_50)->max_length)))))
		{
			goto IL_0084;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ILRuntime.CLR.Method.ILMethod::InitToken(ILRuntime.Runtime.Intepreter.OpCodes.OpCode&,System.Object,System.Collections.Generic.Dictionary`2<ILRuntime.Mono.Cecil.Cil.Instruction,System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ILMethod_InitToken_m51FCFA50E29DC10DDA4B99208AD09DE662D0A9E3 (ILMethod_tA56B8FD062B67B88B2396AC1AFFCED9E4FE92AD7* __this, OpCode_t34FC4B6966640D468676BA39661AF3946A3943A7* ___code0, RuntimeObject* ___token1, Dictionary_2_t5B089D76260FC645B19FAE71638DFBBFEA74D852* ___addr2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Collection_1_get_Count_m003D9033DAFBB663E0C45CF6EAA4C179A197CB5E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mADC5C691258B61F41E9BEAEDA7D77752179C58D6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FieldReference_t752D0BBACC7445A73C69EADC5205CCFAB4F3167E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILMethod_tA56B8FD062B67B88B2396AC1AFFCED9E4FE92AD7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IType_tC510B754395152F7217FD34CD69B8AFA1676AA9E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Instruction_tAA84FA05703612EBA9700BB65C31560D5AA0ACC6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MethodReference_t622A5B7BD95CF4A7E4210CF3DDBD91A0018D9783_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParameterDefinition_tF36CEEB8641D1EEA2D1D205360F1A7F37E63A6BA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeReference_tF82E3E035A581A717CE653CEFC3843CE4E460F91_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VariableDefinition_tAF3B7BC011FA749BB788E1845596F48A86BA0A58_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	double V_2 = 0.0;
	VariableDefinition_tAF3B7BC011FA749BB788E1845596F48A86BA0A58* V_3 = NULL;
	ParameterDefinition_tF36CEEB8641D1EEA2D1D205360F1A7F37E63A6BA* V_4 = NULL;
	bool V_5 = false;
	RuntimeObject* V_6 = NULL;
	ILMethod_tA56B8FD062B67B88B2396AC1AFFCED9E4FE92AD7* V_7 = NULL;
	MethodReference_t622A5B7BD95CF4A7E4210CF3DDBD91A0018D9783* V_8 = NULL;
	int32_t V_9 = 0;
	int64_t V_10 = 0;
	int32_t G_B31_0 = 0;
	{
		// switch (code.Code)
		OpCode_t34FC4B6966640D468676BA39661AF3946A3943A7* L_0 = ___code0;
		int32_t L_1 = L_0->___Code_0;
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) > ((int32_t)((int32_t)162))))
		{
			goto IL_0180;
		}
	}
	{
		int32_t L_3 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_3, ((int32_t)14))))
		{
			case 0:
			{
				goto IL_025f;
			}
			case 1:
			{
				goto IL_025f;
			}
			case 2:
			{
				goto IL_025f;
			}
			case 3:
			{
				goto IL_024b;
			}
			case 4:
			{
				goto IL_024b;
			}
			case 5:
			{
				goto IL_024b;
			}
			case 6:
			{
				goto IL_0408;
			}
			case 7:
			{
				goto IL_0408;
			}
			case 8:
			{
				goto IL_0408;
			}
			case 9:
			{
				goto IL_0408;
			}
			case 10:
			{
				goto IL_0408;
			}
			case 11:
			{
				goto IL_0408;
			}
			case 12:
			{
				goto IL_0408;
			}
			case 13:
			{
				goto IL_0408;
			}
			case 14:
			{
				goto IL_0408;
			}
			case 15:
			{
				goto IL_0408;
			}
			case 16:
			{
				goto IL_0408;
			}
			case 17:
			{
				goto IL_020d;
			}
			case 18:
			{
				goto IL_0200;
			}
			case 19:
			{
				goto IL_021a;
			}
			case 20:
			{
				goto IL_0227;
			}
			case 21:
			{
				goto IL_0239;
			}
			case 22:
			{
				goto IL_0408;
			}
			case 23:
			{
				goto IL_0408;
			}
			case 24:
			{
				goto IL_0408;
			}
			case 25:
			{
				goto IL_028b;
			}
			case 26:
			{
				goto IL_0408;
			}
			case 27:
			{
				goto IL_0408;
			}
			case 28:
			{
				goto IL_01ed;
			}
			case 29:
			{
				goto IL_01ed;
			}
			case 30:
			{
				goto IL_01ed;
			}
			case 31:
			{
				goto IL_01ed;
			}
			case 32:
			{
				goto IL_01ed;
			}
			case 33:
			{
				goto IL_01ed;
			}
			case 34:
			{
				goto IL_01ed;
			}
			case 35:
			{
				goto IL_01ed;
			}
			case 36:
			{
				goto IL_01ed;
			}
			case 37:
			{
				goto IL_01ed;
			}
			case 38:
			{
				goto IL_01ed;
			}
			case 39:
			{
				goto IL_01ed;
			}
			case 40:
			{
				goto IL_01ed;
			}
			case 41:
			{
				goto IL_01ed;
			}
			case 42:
			{
				goto IL_01ed;
			}
			case 43:
			{
				goto IL_01ed;
			}
			case 44:
			{
				goto IL_01ed;
			}
			case 45:
			{
				goto IL_01ed;
			}
			case 46:
			{
				goto IL_01ed;
			}
			case 47:
			{
				goto IL_01ed;
			}
			case 48:
			{
				goto IL_01ed;
			}
			case 49:
			{
				goto IL_01ed;
			}
			case 50:
			{
				goto IL_01ed;
			}
			case 51:
			{
				goto IL_01ed;
			}
			case 52:
			{
				goto IL_01ed;
			}
			case 53:
			{
				goto IL_01ed;
			}
			case 54:
			{
				goto IL_03f4;
			}
		}
	}
	{
		int32_t L_4 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_4, ((int32_t)110))))
		{
			case 0:
			{
				goto IL_028b;
			}
			case 1:
			{
				goto IL_0408;
			}
			case 2:
			{
				goto IL_034e;
			}
			case 3:
			{
				goto IL_0390;
			}
			case 4:
			{
				goto IL_028b;
			}
			case 5:
			{
				goto IL_034e;
			}
			case 6:
			{
				goto IL_034e;
			}
			case 7:
			{
				goto IL_0408;
			}
			case 8:
			{
				goto IL_034e;
			}
			case 9:
			{
				goto IL_0408;
			}
			case 10:
			{
				goto IL_035c;
			}
			case 11:
			{
				goto IL_035c;
			}
			case 12:
			{
				goto IL_035c;
			}
			case 13:
			{
				goto IL_0376;
			}
			case 14:
			{
				goto IL_0376;
			}
			case 15:
			{
				goto IL_0376;
			}
			case 16:
			{
				goto IL_034e;
			}
			case 17:
			{
				goto IL_0408;
			}
			case 18:
			{
				goto IL_0408;
			}
			case 19:
			{
				goto IL_0408;
			}
			case 20:
			{
				goto IL_0408;
			}
			case 21:
			{
				goto IL_0408;
			}
			case 22:
			{
				goto IL_0408;
			}
			case 23:
			{
				goto IL_0408;
			}
			case 24:
			{
				goto IL_0408;
			}
			case 25:
			{
				goto IL_0408;
			}
			case 26:
			{
				goto IL_0408;
			}
			case 27:
			{
				goto IL_034e;
			}
			case 28:
			{
				goto IL_034e;
			}
		}
	}
	{
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)162))))
		{
			goto IL_034e;
		}
	}
	{
		return;
	}

IL_0180:
	{
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)174))))
		{
			goto IL_03a7;
		}
	}
	{
		int32_t L_7 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_7, ((int32_t)187))))
		{
			case 0:
			{
				goto IL_01ed;
			}
			case 1:
			{
				goto IL_01ed;
			}
			case 2:
			{
				goto IL_0408;
			}
			case 3:
			{
				goto IL_0408;
			}
			case 4:
			{
				goto IL_0408;
			}
			case 5:
			{
				goto IL_0408;
			}
			case 6:
			{
				goto IL_0408;
			}
			case 7:
			{
				goto IL_0408;
			}
			case 8:
			{
				goto IL_0408;
			}
			case 9:
			{
				goto IL_0408;
			}
			case 10:
			{
				goto IL_028b;
			}
			case 11:
			{
				goto IL_028b;
			}
			case 12:
			{
				goto IL_025f;
			}
			case 13:
			{
				goto IL_025f;
			}
			case 14:
			{
				goto IL_025f;
			}
			case 15:
			{
				goto IL_024b;
			}
			case 16:
			{
				goto IL_024b;
			}
			case 17:
			{
				goto IL_024b;
			}
		}
	}
	{
		int32_t L_8 = V_0;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_8, ((int32_t)210)))) > ((uint32_t)1))))
		{
			goto IL_034e;
		}
	}
	{
		return;
	}

IL_01ed:
	{
		// code.TokenInteger = addr[(Mono.Cecil.Cil.Instruction)token];
		OpCode_t34FC4B6966640D468676BA39661AF3946A3943A7* L_9 = ___code0;
		Dictionary_2_t5B089D76260FC645B19FAE71638DFBBFEA74D852* L_10 = ___addr2;
		RuntimeObject* L_11 = ___token1;
		NullCheck(L_10);
		int32_t L_12;
		L_12 = Dictionary_2_get_Item_mADC5C691258B61F41E9BEAEDA7D77752179C58D6(L_10, ((Instruction_tAA84FA05703612EBA9700BB65C31560D5AA0ACC6*)CastclassSealed((RuntimeObject*)L_11, Instruction_tAA84FA05703612EBA9700BB65C31560D5AA0ACC6_il2cpp_TypeInfo_var)), Dictionary_2_get_Item_mADC5C691258B61F41E9BEAEDA7D77752179C58D6_RuntimeMethod_var);
		L_9->___TokenInteger_1 = L_12;
		// break;
		return;
	}

IL_0200:
	{
		// code.TokenInteger = (int)token;
		OpCode_t34FC4B6966640D468676BA39661AF3946A3943A7* L_13 = ___code0;
		RuntimeObject* L_14 = ___token1;
		L_13->___TokenInteger_1 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_14, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var))));
		// break;
		return;
	}

IL_020d:
	{
		// code.TokenInteger = (sbyte)token;
		OpCode_t34FC4B6966640D468676BA39661AF3946A3943A7* L_15 = ___code0;
		RuntimeObject* L_16 = ___token1;
		L_15->___TokenInteger_1 = ((*(int8_t*)((int8_t*)(int8_t*)UnBox(L_16, SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var))));
		// break;
		return;
	}

IL_021a:
	{
		// code.TokenLong = (long)token;
		OpCode_t34FC4B6966640D468676BA39661AF3946A3943A7* L_17 = ___code0;
		RuntimeObject* L_18 = ___token1;
		L_17->___TokenLong_2 = ((*(int64_t*)((int64_t*)(int64_t*)UnBox(L_18, Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var))));
		// break;
		return;
	}

IL_0227:
	{
		// float val = (float)token;
		RuntimeObject* L_19 = ___token1;
		V_1 = ((*(float*)((float*)(float*)UnBox(L_19, Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var))));
		// code.TokenInteger = *(int*)&val;
		OpCode_t34FC4B6966640D468676BA39661AF3946A3943A7* L_20 = ___code0;
		int32_t L_21 = *((int32_t*)((uintptr_t)(&V_1)));
		L_20->___TokenInteger_1 = L_21;
		// break;
		return;
	}

IL_0239:
	{
		// double val = (double)token;
		RuntimeObject* L_22 = ___token1;
		V_2 = ((*(double*)((double*)(double*)UnBox(L_22, Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var))));
		// code.TokenLong = *(long*)&val;
		OpCode_t34FC4B6966640D468676BA39661AF3946A3943A7* L_23 = ___code0;
		int64_t L_24 = *((int64_t*)((uintptr_t)(&V_2)));
		L_23->___TokenLong_2 = L_24;
		// break;
		return;
	}

IL_024b:
	{
		// Mono.Cecil.Cil.VariableDefinition vd = (Mono.Cecil.Cil.VariableDefinition)token;
		RuntimeObject* L_25 = ___token1;
		V_3 = ((VariableDefinition_tAF3B7BC011FA749BB788E1845596F48A86BA0A58*)CastclassSealed((RuntimeObject*)L_25, VariableDefinition_tAF3B7BC011FA749BB788E1845596F48A86BA0A58_il2cpp_TypeInfo_var));
		// code.TokenInteger = vd.Index;
		OpCode_t34FC4B6966640D468676BA39661AF3946A3943A7* L_26 = ___code0;
		VariableDefinition_tAF3B7BC011FA749BB788E1845596F48A86BA0A58* L_27 = V_3;
		NullCheck(L_27);
		int32_t L_28;
		L_28 = VariableReference_get_Index_m9587EF28FDCE9CEAA06D6B282B104451317024D7_inline(L_27, NULL);
		L_26->___TokenInteger_1 = L_28;
		// break;
		return;
	}

IL_025f:
	{
		// Mono.Cecil.ParameterDefinition vd = (Mono.Cecil.ParameterDefinition)token;
		RuntimeObject* L_29 = ___token1;
		V_4 = ((ParameterDefinition_tF36CEEB8641D1EEA2D1D205360F1A7F37E63A6BA*)CastclassSealed((RuntimeObject*)L_29, ParameterDefinition_tF36CEEB8641D1EEA2D1D205360F1A7F37E63A6BA_il2cpp_TypeInfo_var));
		// code.TokenInteger = vd.Index;
		OpCode_t34FC4B6966640D468676BA39661AF3946A3943A7* L_30 = ___code0;
		ParameterDefinition_tF36CEEB8641D1EEA2D1D205360F1A7F37E63A6BA* L_31 = V_4;
		NullCheck(L_31);
		int32_t L_32;
		L_32 = ParameterReference_get_Index_m2AA4C5349F8D03E4CABED027BED846214675F29C_inline(L_31, NULL);
		L_30->___TokenInteger_1 = L_32;
		// if (HasThis)
		bool L_33;
		L_33 = ILMethod_get_HasThis_mC92E1A5BC0128888C615C33F62C298A466CD1BDB(__this, NULL);
		if (!L_33)
		{
			goto IL_0408;
		}
	}
	{
		// code.TokenInteger++;
		OpCode_t34FC4B6966640D468676BA39661AF3946A3943A7* L_34 = ___code0;
		int32_t* L_35 = (&L_34->___TokenInteger_1);
		int32_t* L_36 = L_35;
		int32_t L_37 = *((int32_t*)L_36);
		*((int32_t*)L_36) = (int32_t)((int32_t)il2cpp_codegen_add(L_37, 1));
		// break;
		return;
	}

IL_028b:
	{
		// var m = appdomain.GetMethod(token, declaringType, this, out invalidToken);
		AppDomain_tFFEF01BA23D79DA3A22C21195FD262862037E506* L_38 = __this->___appdomain_6;
		RuntimeObject* L_39 = ___token1;
		ILType_tD812655AF7716306B8168AD6F08152435B77708C* L_40 = __this->___declaringType_7;
		NullCheck(L_38);
		RuntimeObject* L_41;
		L_41 = AppDomain_GetMethod_m34143B12E3B76A98618222727B25EC0D39A38F2A(L_38, L_39, L_40, __this, (&V_5), NULL);
		V_6 = L_41;
		// if (m != null)
		RuntimeObject* L_42 = V_6;
		if (!L_42)
		{
			goto IL_0313;
		}
	}
	{
		// if(code.Code == OpCodeEnum.Callvirt && m is ILMethod)
		OpCode_t34FC4B6966640D468676BA39661AF3946A3943A7* L_43 = ___code0;
		int32_t L_44 = L_43->___Code_0;
		if ((!(((uint32_t)L_44) == ((uint32_t)((int32_t)110)))))
		{
			goto IL_02f4;
		}
	}
	{
		RuntimeObject* L_45 = V_6;
		if (!((ILMethod_tA56B8FD062B67B88B2396AC1AFFCED9E4FE92AD7*)IsInstClass((RuntimeObject*)L_45, ILMethod_tA56B8FD062B67B88B2396AC1AFFCED9E4FE92AD7_il2cpp_TypeInfo_var)))
		{
			goto IL_02f4;
		}
	}
	{
		// ILMethod ilm = (ILMethod)m;
		RuntimeObject* L_46 = V_6;
		V_7 = ((ILMethod_tA56B8FD062B67B88B2396AC1AFFCED9E4FE92AD7*)CastclassClass((RuntimeObject*)L_46, ILMethod_tA56B8FD062B67B88B2396AC1AFFCED9E4FE92AD7_il2cpp_TypeInfo_var));
		// if (!ilm.def.IsAbstract && !ilm.def.IsVirtual && !ilm.DeclearingType.IsInterface)
		ILMethod_tA56B8FD062B67B88B2396AC1AFFCED9E4FE92AD7* L_47 = V_7;
		NullCheck(L_47);
		MethodDefinition_t20ECAB62A2A1BBEB383A1A979167D658ACCF3244* L_48 = L_47->___def_4;
		NullCheck(L_48);
		bool L_49;
		L_49 = MethodDefinition_get_IsAbstract_m23B1CE6413C64B19573CBBFA40A9B40151CA76E7(L_48, NULL);
		if (L_49)
		{
			goto IL_02f4;
		}
	}
	{
		ILMethod_tA56B8FD062B67B88B2396AC1AFFCED9E4FE92AD7* L_50 = V_7;
		NullCheck(L_50);
		MethodDefinition_t20ECAB62A2A1BBEB383A1A979167D658ACCF3244* L_51 = L_50->___def_4;
		NullCheck(L_51);
		bool L_52;
		L_52 = MethodDefinition_get_IsVirtual_m58EFC3AE15D4913746A936C41539A7047409A962(L_51, NULL);
		if (L_52)
		{
			goto IL_02f4;
		}
	}
	{
		ILMethod_tA56B8FD062B67B88B2396AC1AFFCED9E4FE92AD7* L_53 = V_7;
		NullCheck(L_53);
		RuntimeObject* L_54;
		L_54 = ILMethod_get_DeclearingType_m47BEDAF621AFAB5289C976E1C3D2EBBD2DFDA1AE_inline(L_53, NULL);
		NullCheck(L_54);
		bool L_55;
		L_55 = InterfaceFuncInvoker0< bool >::Invoke(17 /* System.Boolean ILRuntime.CLR.TypeSystem.IType::get_IsInterface() */, IType_tC510B754395152F7217FD34CD69B8AFA1676AA9E_il2cpp_TypeInfo_var, L_54);
		if (L_55)
		{
			goto IL_02f4;
		}
	}
	{
		// code.Code = OpCodeEnum.Call;
		OpCode_t34FC4B6966640D468676BA39661AF3946A3943A7* L_56 = ___code0;
		L_56->___Code_0 = ((int32_t)39);
	}

IL_02f4:
	{
		// if (invalidToken)
		bool L_57 = V_5;
		if (!L_57)
		{
			goto IL_0306;
		}
	}
	{
		// code.TokenInteger = m.GetHashCode();
		OpCode_t34FC4B6966640D468676BA39661AF3946A3943A7* L_58 = ___code0;
		RuntimeObject* L_59 = V_6;
		NullCheck(L_59);
		int32_t L_60;
		L_60 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_59);
		L_58->___TokenInteger_1 = L_60;
		return;
	}

IL_0306:
	{
		// code.TokenInteger = token.GetHashCode();
		OpCode_t34FC4B6966640D468676BA39661AF3946A3943A7* L_61 = ___code0;
		RuntimeObject* L_62 = ___token1;
		NullCheck(L_62);
		int32_t L_63;
		L_63 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_62);
		L_61->___TokenInteger_1 = L_63;
		return;
	}

IL_0313:
	{
		// MethodReference _ref = (MethodReference)token;
		RuntimeObject* L_64 = ___token1;
		V_8 = ((MethodReference_t622A5B7BD95CF4A7E4210CF3DDBD91A0018D9783*)CastclassClass((RuntimeObject*)L_64, MethodReference_t622A5B7BD95CF4A7E4210CF3DDBD91A0018D9783_il2cpp_TypeInfo_var));
		// int paramCnt = _ref.HasParameters ? _ref.Parameters.Count : 0;
		MethodReference_t622A5B7BD95CF4A7E4210CF3DDBD91A0018D9783* L_65 = V_8;
		NullCheck(L_65);
		bool L_66;
		L_66 = VirtualFuncInvoker0< bool >::Invoke(40 /* System.Boolean ILRuntime.Mono.Cecil.MethodReference::get_HasParameters() */, L_65);
		if (L_66)
		{
			goto IL_0327;
		}
	}
	{
		G_B31_0 = 0;
		goto IL_0333;
	}

IL_0327:
	{
		MethodReference_t622A5B7BD95CF4A7E4210CF3DDBD91A0018D9783* L_67 = V_8;
		NullCheck(L_67);
		Collection_1_t07922683F6D8F9416D093E2327FCBCCAC03146F1* L_68;
		L_68 = VirtualFuncInvoker0< Collection_1_t07922683F6D8F9416D093E2327FCBCCAC03146F1* >::Invoke(41 /* ILRuntime.Mono.Collections.Generic.Collection`1<ILRuntime.Mono.Cecil.ParameterDefinition> ILRuntime.Mono.Cecil.MethodReference::get_Parameters() */, L_67);
		NullCheck(L_68);
		int32_t L_69;
		L_69 = Collection_1_get_Count_m003D9033DAFBB663E0C45CF6EAA4C179A197CB5E_inline(L_68, Collection_1_get_Count_m003D9033DAFBB663E0C45CF6EAA4C179A197CB5E_RuntimeMethod_var);
		G_B31_0 = L_69;
	}

IL_0333:
	{
		V_9 = G_B31_0;
		// if (_ref.HasThis)
		MethodReference_t622A5B7BD95CF4A7E4210CF3DDBD91A0018D9783* L_70 = V_8;
		NullCheck(L_70);
		bool L_71;
		L_71 = VirtualFuncInvoker0< bool >::Invoke(34 /* System.Boolean ILRuntime.Mono.Cecil.MethodReference::get_HasThis() */, L_70);
		if (!L_71)
		{
			goto IL_0344;
		}
	}
	{
		// paramCnt++;
		int32_t L_72 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_72, 1));
	}

IL_0344:
	{
		// code.TokenLong = paramCnt;
		OpCode_t34FC4B6966640D468676BA39661AF3946A3943A7* L_73 = ___code0;
		int32_t L_74 = V_9;
		L_73->___TokenLong_2 = ((int64_t)L_74);
		// break;
		return;
	}

IL_034e:
	{
		// code.TokenInteger = GetTypeTokenHashCode(token);
		OpCode_t34FC4B6966640D468676BA39661AF3946A3943A7* L_75 = ___code0;
		RuntimeObject* L_76 = ___token1;
		int32_t L_77;
		L_77 = ILMethod_GetTypeTokenHashCode_m3DBFC8FF86E037BCE3DF1D135196FA682C923B93(__this, L_76, NULL);
		L_75->___TokenInteger_1 = L_77;
		// break;
		return;
	}

IL_035c:
	{
		// code.TokenLong = appdomain.GetStaticFieldIndex(token, declaringType, this);
		OpCode_t34FC4B6966640D468676BA39661AF3946A3943A7* L_78 = ___code0;
		AppDomain_tFFEF01BA23D79DA3A22C21195FD262862037E506* L_79 = __this->___appdomain_6;
		RuntimeObject* L_80 = ___token1;
		ILType_tD812655AF7716306B8168AD6F08152435B77708C* L_81 = __this->___declaringType_7;
		NullCheck(L_79);
		int64_t L_82;
		L_82 = AppDomain_GetStaticFieldIndex_m1D671D88A4A3CF7D339A237C5FCC24922F555AC3(L_79, L_80, L_81, __this, NULL);
		L_78->___TokenLong_2 = L_82;
		// break;
		return;
	}

IL_0376:
	{
		// code.TokenLong = appdomain.GetStaticFieldIndex(token, declaringType, this);
		OpCode_t34FC4B6966640D468676BA39661AF3946A3943A7* L_83 = ___code0;
		AppDomain_tFFEF01BA23D79DA3A22C21195FD262862037E506* L_84 = __this->___appdomain_6;
		RuntimeObject* L_85 = ___token1;
		ILType_tD812655AF7716306B8168AD6F08152435B77708C* L_86 = __this->___declaringType_7;
		NullCheck(L_84);
		int64_t L_87;
		L_87 = AppDomain_GetStaticFieldIndex_m1D671D88A4A3CF7D339A237C5FCC24922F555AC3(L_84, L_85, L_86, __this, NULL);
		L_83->___TokenLong_2 = L_87;
		// break;
		return;
	}

IL_0390:
	{
		// long hashCode = appdomain.CacheString(token);
		AppDomain_tFFEF01BA23D79DA3A22C21195FD262862037E506* L_88 = __this->___appdomain_6;
		RuntimeObject* L_89 = ___token1;
		NullCheck(L_88);
		int64_t L_90;
		L_90 = AppDomain_CacheString_m7222680D0CAE5D23C9C21BBB4CF97AAD7F1E8C59(L_88, L_89, NULL);
		V_10 = L_90;
		// code.TokenLong = hashCode;
		OpCode_t34FC4B6966640D468676BA39661AF3946A3943A7* L_91 = ___code0;
		int64_t L_92 = V_10;
		L_91->___TokenLong_2 = L_92;
		// break;
		return;
	}

IL_03a7:
	{
		// if (token is FieldReference)
		RuntimeObject* L_93 = ___token1;
		if (!((FieldReference_t752D0BBACC7445A73C69EADC5205CCFAB4F3167E*)IsInstClass((RuntimeObject*)L_93, FieldReference_t752D0BBACC7445A73C69EADC5205CCFAB4F3167E_il2cpp_TypeInfo_var)))
		{
			goto IL_03d0;
		}
	}
	{
		// code.TokenInteger = 0;
		OpCode_t34FC4B6966640D468676BA39661AF3946A3943A7* L_94 = ___code0;
		L_94->___TokenInteger_1 = 0;
		// code.TokenLong = appdomain.GetStaticFieldIndex(token, declaringType, this);
		OpCode_t34FC4B6966640D468676BA39661AF3946A3943A7* L_95 = ___code0;
		AppDomain_tFFEF01BA23D79DA3A22C21195FD262862037E506* L_96 = __this->___appdomain_6;
		RuntimeObject* L_97 = ___token1;
		ILType_tD812655AF7716306B8168AD6F08152435B77708C* L_98 = __this->___declaringType_7;
		NullCheck(L_96);
		int64_t L_99;
		L_99 = AppDomain_GetStaticFieldIndex_m1D671D88A4A3CF7D339A237C5FCC24922F555AC3(L_96, L_97, L_98, __this, NULL);
		L_95->___TokenLong_2 = L_99;
		return;
	}

IL_03d0:
	{
		// else if (token is TypeReference)
		RuntimeObject* L_100 = ___token1;
		if (!((TypeReference_tF82E3E035A581A717CE653CEFC3843CE4E460F91*)IsInstClass((RuntimeObject*)L_100, TypeReference_tF82E3E035A581A717CE653CEFC3843CE4E460F91_il2cpp_TypeInfo_var)))
		{
			goto IL_03ee;
		}
	}
	{
		// code.TokenInteger = 1;
		OpCode_t34FC4B6966640D468676BA39661AF3946A3943A7* L_101 = ___code0;
		L_101->___TokenInteger_1 = 1;
		// code.TokenLong = GetTypeTokenHashCode(token);
		OpCode_t34FC4B6966640D468676BA39661AF3946A3943A7* L_102 = ___code0;
		RuntimeObject* L_103 = ___token1;
		int32_t L_104;
		L_104 = ILMethod_GetTypeTokenHashCode_m3DBFC8FF86E037BCE3DF1D135196FA682C923B93(__this, L_103, NULL);
		L_102->___TokenLong_2 = ((int64_t)L_104);
		return;
	}

IL_03ee:
	{
		// throw new NotImplementedException();
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_105 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_105);
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_105, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_105, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ILMethod_InitToken_m51FCFA50E29DC10DDA4B99208AD09DE662D0A9E3_RuntimeMethod_var)));
	}

IL_03f4:
	{
		// PrepareJumpTable(token, addr);
		RuntimeObject* L_106 = ___token1;
		Dictionary_2_t5B089D76260FC645B19FAE71638DFBBFEA74D852* L_107 = ___addr2;
		ILMethod_PrepareJumpTable_m262B4BD25585A8BEC9DF114F81BA2D5D19758016(__this, L_106, L_107, NULL);
		// code.TokenInteger = token.GetHashCode();
		OpCode_t34FC4B6966640D468676BA39661AF3946A3943A7* L_108 = ___code0;
		RuntimeObject* L_109 = ___token1;
		NullCheck(L_109);
		int32_t L_110;
		L_110 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_109);
		L_108->___TokenInteger_1 = L_110;
	}

IL_0408:
	{
		// }
		return;
	}
}
// System.Int32 ILRuntime.CLR.Method.ILMethod::GetTypeTokenHashCode(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ILMethod_GetTypeTokenHashCode_m3DBFC8FF86E037BCE3DF1D135196FA682C923B93 (ILMethod_tA56B8FD062B67B88B2396AC1AFFCED9E4FE92AD7* __this, RuntimeObject* ___token0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILType_tD812655AF7716306B8168AD6F08152435B77708C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeReference_tF82E3E035A581A717CE653CEFC3843CE4E460F91_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	{
		// var t = appdomain.GetType(token, declaringType, this);
		AppDomain_tFFEF01BA23D79DA3A22C21195FD262862037E506* L_0 = __this->___appdomain_6;
		RuntimeObject* L_1 = ___token0;
		ILType_tD812655AF7716306B8168AD6F08152435B77708C* L_2 = __this->___declaringType_7;
		NullCheck(L_0);
		RuntimeObject* L_3;
		L_3 = AppDomain_GetType_m0CF8800358B9E64FE1C5257FDCD210A37C25385B(L_0, L_1, L_2, __this, NULL);
		V_0 = L_3;
		// bool isGenericParameter = CheckHasGenericParamter(token);
		RuntimeObject* L_4 = ___token0;
		bool L_5;
		L_5 = ILMethod_CheckHasGenericParamter_mB3C60837FC357FF6DAB3EDA0FF2A86F7093247BB(__this, L_4, NULL);
		V_1 = L_5;
		// if (t == null && isGenericParameter)
		RuntimeObject* L_6 = V_0;
		bool L_7 = V_1;
		if (!((int32_t)(((((RuntimeObject*)(RuntimeObject*)L_6) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0)&(int32_t)L_7)))
		{
			goto IL_0036;
		}
	}
	{
		// t = FindGenericArgument(((TypeReference)token).Name);
		RuntimeObject* L_8 = ___token0;
		NullCheck(((TypeReference_tF82E3E035A581A717CE653CEFC3843CE4E460F91*)CastclassClass((RuntimeObject*)L_8, TypeReference_tF82E3E035A581A717CE653CEFC3843CE4E460F91_il2cpp_TypeInfo_var)));
		String_t* L_9;
		L_9 = VirtualFuncInvoker0< String_t* >::Invoke(6 /* System.String ILRuntime.Mono.Cecil.MemberReference::get_Name() */, ((TypeReference_tF82E3E035A581A717CE653CEFC3843CE4E460F91*)CastclassClass((RuntimeObject*)L_8, TypeReference_tF82E3E035A581A717CE653CEFC3843CE4E460F91_il2cpp_TypeInfo_var)));
		RuntimeObject* L_10;
		L_10 = ILMethod_FindGenericArgument_mA14178CACC778ED8DD7029F4D44EA5F21B73486F(__this, L_9, NULL);
		V_0 = L_10;
	}

IL_0036:
	{
		// if (t != null)
		RuntimeObject* L_11 = V_0;
		if (!L_11)
		{
			goto IL_0054;
		}
	}
	{
		// if (t is ILType || isGenericParameter)
		RuntimeObject* L_12 = V_0;
		bool L_13 = V_1;
		if (!((int32_t)(((!(((RuntimeObject*)(ILType_tD812655AF7716306B8168AD6F08152435B77708C*)((ILType_tD812655AF7716306B8168AD6F08152435B77708C*)IsInstClass((RuntimeObject*)L_12, ILType_tD812655AF7716306B8168AD6F08152435B77708C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0)|(int32_t)L_13)))
		{
			goto IL_004d;
		}
	}
	{
		// return t.GetHashCode();
		RuntimeObject* L_14 = V_0;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_14);
		return L_15;
	}

IL_004d:
	{
		// return token.GetHashCode();
		RuntimeObject* L_16 = ___token0;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_16);
		return L_17;
	}

IL_0054:
	{
		// return 0;
		return 0;
	}
}
// System.Boolean ILRuntime.CLR.Method.ILMethod::CheckHasGenericParamter(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ILMethod_CheckHasGenericParamter_mB3C60837FC357FF6DAB3EDA0FF2A86F7093247BB (ILMethod_tA56B8FD062B67B88B2396AC1AFFCED9E4FE92AD7* __this, RuntimeObject* ___token0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayType_t10E15696DD4C5718FE0EEB9853B40A9C44764048_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Collection_1_GetEnumerator_m9D5939E9116EFA4DE2779BD84FD22F527169E3C6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m4137411A038431D884A2DB3C5CADB14D786D1B99_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mD5CACA008AA9B926D6B0042E610B8EFD2CCB77CB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m7CAF11D39E21E895E180C6A04B72B7C42B7C619D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GenericInstanceType_t6A678A502BCB7A6A9F60E0E45C11A73A0852F746_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeReference_tF82E3E035A581A717CE653CEFC3843CE4E460F91_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TypeReference_tF82E3E035A581A717CE653CEFC3843CE4E460F91* V_0 = NULL;
	Enumerator_t7DD1A0B4DF4F70D54047832E79CB1D0E502D500F V_1;
	memset((&V_1), 0, sizeof(V_1));
	TypeReference_tF82E3E035A581A717CE653CEFC3843CE4E460F91* V_2 = NULL;
	bool V_3 = false;
	{
		// if (token is TypeReference)
		RuntimeObject* L_0 = ___token0;
		if (!((TypeReference_tF82E3E035A581A717CE653CEFC3843CE4E460F91*)IsInstClass((RuntimeObject*)L_0, TypeReference_tF82E3E035A581A717CE653CEFC3843CE4E460F91_il2cpp_TypeInfo_var)))
		{
			goto IL_0080;
		}
	}
	{
		// TypeReference _ref = ((TypeReference)token);
		RuntimeObject* L_1 = ___token0;
		V_0 = ((TypeReference_tF82E3E035A581A717CE653CEFC3843CE4E460F91*)CastclassClass((RuntimeObject*)L_1, TypeReference_tF82E3E035A581A717CE653CEFC3843CE4E460F91_il2cpp_TypeInfo_var));
		// if (_ref.IsArray)
		TypeReference_tF82E3E035A581A717CE653CEFC3843CE4E460F91* L_2 = V_0;
		NullCheck(L_2);
		bool L_3;
		L_3 = VirtualFuncInvoker0< bool >::Invoke(34 /* System.Boolean ILRuntime.Mono.Cecil.TypeReference::get_IsArray() */, L_2);
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		// return CheckHasGenericParamter(((ArrayType)_ref).ElementType);
		TypeReference_tF82E3E035A581A717CE653CEFC3843CE4E460F91* L_4 = V_0;
		NullCheck(((ArrayType_t10E15696DD4C5718FE0EEB9853B40A9C44764048*)CastclassSealed((RuntimeObject*)L_4, ArrayType_t10E15696DD4C5718FE0EEB9853B40A9C44764048_il2cpp_TypeInfo_var)));
		TypeReference_tF82E3E035A581A717CE653CEFC3843CE4E460F91* L_5;
		L_5 = TypeSpecification_get_ElementType_m21C20A8CB7B9482CC3702FA739626D6AC82863CB_inline(((ArrayType_t10E15696DD4C5718FE0EEB9853B40A9C44764048*)CastclassSealed((RuntimeObject*)L_4, ArrayType_t10E15696DD4C5718FE0EEB9853B40A9C44764048_il2cpp_TypeInfo_var)), NULL);
		bool L_6;
		L_6 = ILMethod_CheckHasGenericParamter_mB3C60837FC357FF6DAB3EDA0FF2A86F7093247BB(__this, L_5, NULL);
		return L_6;
	}

IL_0029:
	{
		// if (_ref.IsGenericParameter)
		TypeReference_tF82E3E035A581A717CE653CEFC3843CE4E460F91* L_7 = V_0;
		NullCheck(L_7);
		bool L_8;
		L_8 = VirtualFuncInvoker0< bool >::Invoke(35 /* System.Boolean ILRuntime.Mono.Cecil.TypeReference::get_IsGenericParameter() */, L_7);
		if (!L_8)
		{
			goto IL_0033;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_0033:
	{
		// if (_ref.IsGenericInstance)
		TypeReference_tF82E3E035A581A717CE653CEFC3843CE4E460F91* L_9 = V_0;
		NullCheck(L_9);
		bool L_10;
		L_10 = VirtualFuncInvoker0< bool >::Invoke(36 /* System.Boolean ILRuntime.Mono.Cecil.TypeReference::get_IsGenericInstance() */, L_9);
		if (!L_10)
		{
			goto IL_007e;
		}
	}
	{
		// GenericInstanceType gi = (GenericInstanceType)_ref;
		TypeReference_tF82E3E035A581A717CE653CEFC3843CE4E460F91* L_11 = V_0;
		// foreach(var i in gi.GenericArguments)
		NullCheck(((GenericInstanceType_t6A678A502BCB7A6A9F60E0E45C11A73A0852F746*)CastclassSealed((RuntimeObject*)L_11, GenericInstanceType_t6A678A502BCB7A6A9F60E0E45C11A73A0852F746_il2cpp_TypeInfo_var)));
		Collection_1_t4D9D6514FFD29B0141FB7020EC67BC6340193EA5* L_12;
		L_12 = GenericInstanceType_get_GenericArguments_mE4EFFF9590D81853C70F07A115E0E536774C990A(((GenericInstanceType_t6A678A502BCB7A6A9F60E0E45C11A73A0852F746*)CastclassSealed((RuntimeObject*)L_11, GenericInstanceType_t6A678A502BCB7A6A9F60E0E45C11A73A0852F746_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_12);
		Enumerator_t7DD1A0B4DF4F70D54047832E79CB1D0E502D500F L_13;
		L_13 = Collection_1_GetEnumerator_m9D5939E9116EFA4DE2779BD84FD22F527169E3C6(L_12, Collection_1_GetEnumerator_m9D5939E9116EFA4DE2779BD84FD22F527169E3C6_RuntimeMethod_var);
		V_1 = L_13;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_006e:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m4137411A038431D884A2DB3C5CADB14D786D1B99((&V_1), Enumerator_Dispose_m4137411A038431D884A2DB3C5CADB14D786D1B99_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0063_1;
			}

IL_004e_1:
			{
				// foreach(var i in gi.GenericArguments)
				TypeReference_tF82E3E035A581A717CE653CEFC3843CE4E460F91* L_14;
				L_14 = Enumerator_get_Current_m7CAF11D39E21E895E180C6A04B72B7C42B7C619D_inline((&V_1), Enumerator_get_Current_m7CAF11D39E21E895E180C6A04B72B7C42B7C619D_RuntimeMethod_var);
				V_2 = L_14;
				// if (CheckHasGenericParamter(i))
				TypeReference_tF82E3E035A581A717CE653CEFC3843CE4E460F91* L_15 = V_2;
				bool L_16;
				L_16 = ILMethod_CheckHasGenericParamter_mB3C60837FC357FF6DAB3EDA0FF2A86F7093247BB(__this, L_15, NULL);
				if (!L_16)
				{
					goto IL_0063_1;
				}
			}
			{
				// return true;
				V_3 = (bool)1;
				goto IL_0082;
			}

IL_0063_1:
			{
				// foreach(var i in gi.GenericArguments)
				bool L_17;
				L_17 = Enumerator_MoveNext_mD5CACA008AA9B926D6B0042E610B8EFD2CCB77CB((&V_1), Enumerator_MoveNext_mD5CACA008AA9B926D6B0042E610B8EFD2CCB77CB_RuntimeMethod_var);
				if (L_17)
				{
					goto IL_004e_1;
				}
			}
			{
				goto IL_007c;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_007c:
	{
		// return false;
		return (bool)0;
	}

IL_007e:
	{
		// return false;
		return (bool)0;
	}

IL_0080:
	{
		// return false;
		return (bool)0;
	}

IL_0082:
	{
		// }
		bool L_18 = V_3;
		return L_18;
	}
}
// System.Void ILRuntime.CLR.Method.ILMethod::PrepareJumpTable(System.Object,System.Collections.Generic.Dictionary`2<ILRuntime.Mono.Cecil.Cil.Instruction,System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ILMethod_PrepareJumpTable_m262B4BD25585A8BEC9DF114F81BA2D5D19758016 (ILMethod_tA56B8FD062B67B88B2396AC1AFFCED9E4FE92AD7* __this, RuntimeObject* ___token0, Dictionary_2_t5B089D76260FC645B19FAE71638DFBBFEA74D852* ___addr1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m39A46D5739773AE4017A5751F9E95ED71874C825_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m3F530E7CD9CC3EB97DCC6E1669EAB9FCE984FA9A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mADC5C691258B61F41E9BEAEDA7D77752179C58D6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m3D78F37FE49E9F0593B3F90A68A65ED5EEB7B593_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t029F6A37F043A1B571A7DB746955ECB8DC548AD9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InstructionU5BU5D_t9D4853ED91E6D8DBBD543E4708D1C60550B6F42D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	InstructionU5BU5D_t9D4853ED91E6D8DBBD543E4708D1C60550B6F42D* V_1 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_2 = NULL;
	int32_t V_3 = 0;
	{
		// int hashCode = token.GetHashCode();
		RuntimeObject* L_0 = ___token0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_0);
		V_0 = L_1;
		// if (jumptables == null)
		Dictionary_2_t029F6A37F043A1B571A7DB746955ECB8DC548AD9* L_2 = __this->___jumptables_12;
		if (L_2)
		{
			goto IL_001a;
		}
	}
	{
		// jumptables = new Dictionary<int, int[]>();
		Dictionary_2_t029F6A37F043A1B571A7DB746955ECB8DC548AD9* L_3 = (Dictionary_2_t029F6A37F043A1B571A7DB746955ECB8DC548AD9*)il2cpp_codegen_object_new(Dictionary_2_t029F6A37F043A1B571A7DB746955ECB8DC548AD9_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Dictionary_2__ctor_m3F530E7CD9CC3EB97DCC6E1669EAB9FCE984FA9A(L_3, Dictionary_2__ctor_m3F530E7CD9CC3EB97DCC6E1669EAB9FCE984FA9A_RuntimeMethod_var);
		__this->___jumptables_12 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___jumptables_12), (void*)L_3);
	}

IL_001a:
	{
		// if (jumptables.ContainsKey(hashCode))
		Dictionary_2_t029F6A37F043A1B571A7DB746955ECB8DC548AD9* L_4 = __this->___jumptables_12;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		bool L_6;
		L_6 = Dictionary_2_ContainsKey_m39A46D5739773AE4017A5751F9E95ED71874C825(L_4, L_5, Dictionary_2_ContainsKey_m39A46D5739773AE4017A5751F9E95ED71874C825_RuntimeMethod_var);
		if (!L_6)
		{
			goto IL_0029;
		}
	}
	{
		// return;
		return;
	}

IL_0029:
	{
		// Mono.Cecil.Cil.Instruction[] e = token as Mono.Cecil.Cil.Instruction[];
		RuntimeObject* L_7 = ___token0;
		V_1 = ((InstructionU5BU5D_t9D4853ED91E6D8DBBD543E4708D1C60550B6F42D*)IsInst((RuntimeObject*)L_7, InstructionU5BU5D_t9D4853ED91E6D8DBBD543E4708D1C60550B6F42D_il2cpp_TypeInfo_var));
		// int[] addrs = new int[e.Length];
		InstructionU5BU5D_t9D4853ED91E6D8DBBD543E4708D1C60550B6F42D* L_8 = V_1;
		NullCheck(L_8);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_8)->max_length)));
		V_2 = L_9;
		// for (int i = 0; i < e.Length; i++)
		V_3 = 0;
		goto IL_004d;
	}

IL_003d:
	{
		// addrs[i] = addr[e[i]];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = V_2;
		int32_t L_11 = V_3;
		Dictionary_2_t5B089D76260FC645B19FAE71638DFBBFEA74D852* L_12 = ___addr1;
		InstructionU5BU5D_t9D4853ED91E6D8DBBD543E4708D1C60550B6F42D* L_13 = V_1;
		int32_t L_14 = V_3;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		Instruction_tAA84FA05703612EBA9700BB65C31560D5AA0ACC6* L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		NullCheck(L_12);
		int32_t L_17;
		L_17 = Dictionary_2_get_Item_mADC5C691258B61F41E9BEAEDA7D77752179C58D6(L_12, L_16, Dictionary_2_get_Item_mADC5C691258B61F41E9BEAEDA7D77752179C58D6_RuntimeMethod_var);
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_11), (int32_t)L_17);
		// for (int i = 0; i < e.Length; i++)
		int32_t L_18 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_004d:
	{
		// for (int i = 0; i < e.Length; i++)
		int32_t L_19 = V_3;
		InstructionU5BU5D_t9D4853ED91E6D8DBBD543E4708D1C60550B6F42D* L_20 = V_1;
		NullCheck(L_20);
		if ((((int32_t)L_19) < ((int32_t)((int32_t)(((RuntimeArray*)L_20)->max_length)))))
		{
			goto IL_003d;
		}
	}
	{
		// jumptables[hashCode] = addrs;
		Dictionary_2_t029F6A37F043A1B571A7DB746955ECB8DC548AD9* L_21 = __this->___jumptables_12;
		int32_t L_22 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_23 = V_2;
		NullCheck(L_21);
		Dictionary_2_set_Item_m3D78F37FE49E9F0593B3F90A68A65ED5EEB7B593(L_21, L_22, L_23, Dictionary_2_set_Item_m3D78F37FE49E9F0593B3F90A68A65ED5EEB7B593_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void ILRuntime.CLR.Method.ILMethod::InitParameters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ILMethod_InitParameters_m0567C9FC09025B3B61FE067D01222B88F1D1BA01 (ILMethod_tA56B8FD062B67B88B2396AC1AFFCED9E4FE92AD7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayType_t10E15696DD4C5718FE0EEB9853B40A9C44764048_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByReferenceType_t04D7CF79E01873D9FB3B6E7B9BECD4B6052E9306_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Collection_1_GetEnumerator_m9FE5C349DD12829D5AA1109094C6C2B17F320AA4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Collection_1_GetEnumerator_mDDCAB1F5B1BC18DD3D3312273BD5FF67093F16C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m32C72DBA34EFCAC82F08CA035E3A2B03BC64256C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mA51B3CEDE853C0A0FE0EDB5E2AD0C1AD9B162BD2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m10B12DD106E0A499FE1C5250F12F6063404CD28F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mCAD14EE6EEE34331E951E425D9648AB20DA6C49D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mAF0C0A00871D3A34AECAE95B1FD46A043D9D635F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mF113979307EBDAD84F602115428780AED2805A52_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILGenericParameterType_tD3907D5D02CED0831ACEC5A4A288F3A6C6E0889B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IType_tC510B754395152F7217FD34CD69B8AFA1676AA9E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m3F51DF5D911FE86B020CC8DD004AC5A96492A070_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m44EE83E964CDEA8BDD3569AD8FF75A7ADDC834BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t136E925D19ADF1AFF60DF33114FEC34DD1EAFD75_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t53891B8BDE2BAF0158F2F4F5670307C5EE5420C3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	int32_t V_4 = 0;
	TypeReference_tF82E3E035A581A717CE653CEFC3843CE4E460F91* V_5 = NULL;
	bool V_6 = false;
	Enumerator_tA0970D8A9568C2F7B9F4CD8871395601EDC137C2 V_7;
	memset((&V_7), 0, sizeof(V_7));
	{
		// parameters = new List<IType>();
		List_1_t136E925D19ADF1AFF60DF33114FEC34DD1EAFD75* L_0 = (List_1_t136E925D19ADF1AFF60DF33114FEC34DD1EAFD75*)il2cpp_codegen_object_new(List_1_t136E925D19ADF1AFF60DF33114FEC34DD1EAFD75_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m44EE83E964CDEA8BDD3569AD8FF75A7ADDC834BD(L_0, List_1__ctor_m44EE83E964CDEA8BDD3569AD8FF75A7ADDC834BD_RuntimeMethod_var);
		__this->___parameters_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___parameters_5), (void*)L_0);
		// foreach (var i in def.Parameters)
		MethodDefinition_t20ECAB62A2A1BBEB383A1A979167D658ACCF3244* L_1 = __this->___def_4;
		NullCheck(L_1);
		Collection_1_t07922683F6D8F9416D093E2327FCBCCAC03146F1* L_2;
		L_2 = VirtualFuncInvoker0< Collection_1_t07922683F6D8F9416D093E2327FCBCCAC03146F1* >::Invoke(41 /* ILRuntime.Mono.Collections.Generic.Collection`1<ILRuntime.Mono.Cecil.ParameterDefinition> ILRuntime.Mono.Cecil.MethodReference::get_Parameters() */, L_1);
		NullCheck(L_2);
		Enumerator_t53891B8BDE2BAF0158F2F4F5670307C5EE5420C3 L_3;
		L_3 = Collection_1_GetEnumerator_m9FE5C349DD12829D5AA1109094C6C2B17F320AA4(L_2, Collection_1_GetEnumerator_m9FE5C349DD12829D5AA1109094C6C2B17F320AA4_RuntimeMethod_var);
		V_0 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0176:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m32C72DBA34EFCAC82F08CA035E3A2B03BC64256C((&V_0), Enumerator_Dispose_m32C72DBA34EFCAC82F08CA035E3A2B03BC64256C_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0168_1;
			}

IL_0021_1:
			{
				// foreach (var i in def.Parameters)
				ParameterDefinition_tF36CEEB8641D1EEA2D1D205360F1A7F37E63A6BA* L_4;
				L_4 = Enumerator_get_Current_mF113979307EBDAD84F602115428780AED2805A52_inline((&V_0), Enumerator_get_Current_mF113979307EBDAD84F602115428780AED2805A52_RuntimeMethod_var);
				// IType type = null;
				V_1 = (RuntimeObject*)NULL;
				// bool isByRef = false;
				V_2 = (bool)0;
				// bool isArray = false;
				V_3 = (bool)0;
				// int rank = 1;
				V_4 = 1;
				// TypeReference pt = i.ParameterType;
				NullCheck(L_4);
				TypeReference_tF82E3E035A581A717CE653CEFC3843CE4E460F91* L_5;
				L_5 = ParameterReference_get_ParameterType_m70C3F6E3D81FE1622794ACCE3780FE6C835D4DF5_inline(L_4, NULL);
				V_5 = L_5;
				// if (pt.IsByReference)
				TypeReference_tF82E3E035A581A717CE653CEFC3843CE4E460F91* L_6 = V_5;
				NullCheck(L_6);
				bool L_7;
				L_7 = VirtualFuncInvoker0< bool >::Invoke(31 /* System.Boolean ILRuntime.Mono.Cecil.TypeReference::get_IsByReference() */, L_6);
				if (!L_7)
				{
					goto IL_0051_1;
				}
			}
			{
				// isByRef = true;
				V_2 = (bool)1;
				// pt = ((ByReferenceType)pt).ElementType;
				TypeReference_tF82E3E035A581A717CE653CEFC3843CE4E460F91* L_8 = V_5;
				NullCheck(((ByReferenceType_t04D7CF79E01873D9FB3B6E7B9BECD4B6052E9306*)CastclassSealed((RuntimeObject*)L_8, ByReferenceType_t04D7CF79E01873D9FB3B6E7B9BECD4B6052E9306_il2cpp_TypeInfo_var)));
				TypeReference_tF82E3E035A581A717CE653CEFC3843CE4E460F91* L_9;
				L_9 = TypeSpecification_get_ElementType_m21C20A8CB7B9482CC3702FA739626D6AC82863CB_inline(((ByReferenceType_t04D7CF79E01873D9FB3B6E7B9BECD4B6052E9306*)CastclassSealed((RuntimeObject*)L_8, ByReferenceType_t04D7CF79E01873D9FB3B6E7B9BECD4B6052E9306_il2cpp_TypeInfo_var)), NULL);
				V_5 = L_9;
			}

IL_0051_1:
			{
				// if (pt.IsArray)
				TypeReference_tF82E3E035A581A717CE653CEFC3843CE4E460F91* L_10 = V_5;
				NullCheck(L_10);
				bool L_11;
				L_11 = VirtualFuncInvoker0< bool >::Invoke(34 /* System.Boolean ILRuntime.Mono.Cecil.TypeReference::get_IsArray() */, L_10);
				if (!L_11)
				{
					goto IL_0078_1;
				}
			}
			{
				// isArray = true;
				V_3 = (bool)1;
				// rank = ((ArrayType)pt).Rank;
				TypeReference_tF82E3E035A581A717CE653CEFC3843CE4E460F91* L_12 = V_5;
				NullCheck(((ArrayType_t10E15696DD4C5718FE0EEB9853B40A9C44764048*)CastclassSealed((RuntimeObject*)L_12, ArrayType_t10E15696DD4C5718FE0EEB9853B40A9C44764048_il2cpp_TypeInfo_var)));
				int32_t L_13;
				L_13 = ArrayType_get_Rank_m5FF53B0C0328B93D146F14BCB8BD3DB565FF9E8D(((ArrayType_t10E15696DD4C5718FE0EEB9853B40A9C44764048*)CastclassSealed((RuntimeObject*)L_12, ArrayType_t10E15696DD4C5718FE0EEB9853B40A9C44764048_il2cpp_TypeInfo_var)), NULL);
				V_4 = L_13;
				// pt = ((ArrayType)pt).ElementType;
				TypeReference_tF82E3E035A581A717CE653CEFC3843CE4E460F91* L_14 = V_5;
				NullCheck(((ArrayType_t10E15696DD4C5718FE0EEB9853B40A9C44764048*)CastclassSealed((RuntimeObject*)L_14, ArrayType_t10E15696DD4C5718FE0EEB9853B40A9C44764048_il2cpp_TypeInfo_var)));
				TypeReference_tF82E3E035A581A717CE653CEFC3843CE4E460F91* L_15;
				L_15 = TypeSpecification_get_ElementType_m21C20A8CB7B9482CC3702FA739626D6AC82863CB_inline(((ArrayType_t10E15696DD4C5718FE0EEB9853B40A9C44764048*)CastclassSealed((RuntimeObject*)L_14, ArrayType_t10E15696DD4C5718FE0EEB9853B40A9C44764048_il2cpp_TypeInfo_var)), NULL);
				V_5 = L_15;
			}

IL_0078_1:
			{
				// if (pt.IsGenericParameter)
				TypeReference_tF82E3E035A581A717CE653CEFC3843CE4E460F91* L_16 = V_5;
				NullCheck(L_16);
				bool L_17;
				L_17 = VirtualFuncInvoker0< bool >::Invoke(35 /* System.Boolean ILRuntime.Mono.Cecil.TypeReference::get_IsGenericParameter() */, L_16);
				if (!L_17)
				{
					goto IL_0131_1;
				}
			}
			{
				// type = FindGenericArgument(pt.Name);
				TypeReference_tF82E3E035A581A717CE653CEFC3843CE4E460F91* L_18 = V_5;
				NullCheck(L_18);
				String_t* L_19;
				L_19 = VirtualFuncInvoker0< String_t* >::Invoke(6 /* System.String ILRuntime.Mono.Cecil.MemberReference::get_Name() */, L_18);
				RuntimeObject* L_20;
				L_20 = ILMethod_FindGenericArgument_mA14178CACC778ED8DD7029F4D44EA5F21B73486F(__this, L_19, NULL);
				V_1 = L_20;
				// if (type == null && def.HasGenericParameters)
				RuntimeObject* L_21 = V_1;
				if (L_21)
				{
					goto IL_0146_1;
				}
			}
			{
				MethodDefinition_t20ECAB62A2A1BBEB383A1A979167D658ACCF3244* L_22 = __this->___def_4;
				NullCheck(L_22);
				bool L_23;
				L_23 = VirtualFuncInvoker0< bool >::Invoke(42 /* System.Boolean ILRuntime.Mono.Cecil.MethodReference::get_HasGenericParameters() */, L_22);
				if (!L_23)
				{
					goto IL_0146_1;
				}
			}
			{
				// bool found = false;
				V_6 = (bool)0;
				// foreach (var j in def.GenericParameters)
				MethodDefinition_t20ECAB62A2A1BBEB383A1A979167D658ACCF3244* L_24 = __this->___def_4;
				NullCheck(L_24);
				Collection_1_tAF0023B9443046D2A5BC6C79ADE1460DA3165828* L_25;
				L_25 = VirtualFuncInvoker0< Collection_1_tAF0023B9443046D2A5BC6C79ADE1460DA3165828* >::Invoke(43 /* ILRuntime.Mono.Collections.Generic.Collection`1<ILRuntime.Mono.Cecil.GenericParameter> ILRuntime.Mono.Cecil.MethodReference::get_GenericParameters() */, L_24);
				NullCheck(L_25);
				Enumerator_tA0970D8A9568C2F7B9F4CD8871395601EDC137C2 L_26;
				L_26 = Collection_1_GetEnumerator_mDDCAB1F5B1BC18DD3D3312273BD5FF67093F16C4(L_25, Collection_1_GetEnumerator_mDDCAB1F5B1BC18DD3D3312273BD5FF67093F16C4_RuntimeMethod_var);
				V_7 = L_26;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_00e9_1:
					{// begin finally (depth: 2)
						Enumerator_Dispose_mA51B3CEDE853C0A0FE0EDB5E2AD0C1AD9B162BD2((&V_7), Enumerator_Dispose_mA51B3CEDE853C0A0FE0EDB5E2AD0C1AD9B162BD2_RuntimeMethod_var);
						return;
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						goto IL_00de_2;
					}

IL_00bf_2:
					{
						// foreach (var j in def.GenericParameters)
						GenericParameter_t8414103B394479F255809FF8AFF131596ED43EEA* L_27;
						L_27 = Enumerator_get_Current_mAF0C0A00871D3A34AECAE95B1FD46A043D9D635F_inline((&V_7), Enumerator_get_Current_mAF0C0A00871D3A34AECAE95B1FD46A043D9D635F_RuntimeMethod_var);
						// if (j.Name == pt.Name)
						NullCheck(L_27);
						String_t* L_28;
						L_28 = VirtualFuncInvoker0< String_t* >::Invoke(6 /* System.String ILRuntime.Mono.Cecil.MemberReference::get_Name() */, L_27);
						TypeReference_tF82E3E035A581A717CE653CEFC3843CE4E460F91* L_29 = V_5;
						NullCheck(L_29);
						String_t* L_30;
						L_30 = VirtualFuncInvoker0< String_t* >::Invoke(6 /* System.String ILRuntime.Mono.Cecil.MemberReference::get_Name() */, L_29);
						bool L_31;
						L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, L_30, NULL);
						if (!L_31)
						{
							goto IL_00de_2;
						}
					}
					{
						// found = true;
						V_6 = (bool)1;
						// break;
						goto IL_00f7_1;
					}

IL_00de_2:
					{
						// foreach (var j in def.GenericParameters)
						bool L_32;
						L_32 = Enumerator_MoveNext_mCAD14EE6EEE34331E951E425D9648AB20DA6C49D((&V_7), Enumerator_MoveNext_mCAD14EE6EEE34331E951E425D9648AB20DA6C49D_RuntimeMethod_var);
						if (L_32)
						{
							goto IL_00bf_2;
						}
					}
					{
						goto IL_00f7_1;
					}
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_00f7_1:
			{
				// if (found)
				bool L_33 = V_6;
				if (!L_33)
				{
					goto IL_010a_1;
				}
			}
			{
				// type = new ILGenericParameterType(pt.Name);
				TypeReference_tF82E3E035A581A717CE653CEFC3843CE4E460F91* L_34 = V_5;
				NullCheck(L_34);
				String_t* L_35;
				L_35 = VirtualFuncInvoker0< String_t* >::Invoke(6 /* System.String ILRuntime.Mono.Cecil.MemberReference::get_Name() */, L_34);
				ILGenericParameterType_tD3907D5D02CED0831ACEC5A4A288F3A6C6E0889B* L_36 = (ILGenericParameterType_tD3907D5D02CED0831ACEC5A4A288F3A6C6E0889B*)il2cpp_codegen_object_new(ILGenericParameterType_tD3907D5D02CED0831ACEC5A4A288F3A6C6E0889B_il2cpp_TypeInfo_var);
				NullCheck(L_36);
				ILGenericParameterType__ctor_m76EF62E1872BC4A6EEA911578FEA1A8811AFE6FB(L_36, L_35, NULL);
				V_1 = L_36;
				goto IL_0146_1;
			}

IL_010a_1:
			{
				// throw new NotSupportedException("Cannot find Generic Parameter " + pt.Name + " in " + def.FullName);
				TypeReference_tF82E3E035A581A717CE653CEFC3843CE4E460F91* L_37 = V_5;
				NullCheck(L_37);
				String_t* L_38;
				L_38 = VirtualFuncInvoker0< String_t* >::Invoke(6 /* System.String ILRuntime.Mono.Cecil.MemberReference::get_Name() */, L_37);
				MethodDefinition_t20ECAB62A2A1BBEB383A1A979167D658ACCF3244* L_39 = __this->___def_4;
				NullCheck(L_39);
				String_t* L_40;
				L_40 = VirtualFuncInvoker0< String_t* >::Invoke(8 /* System.String ILRuntime.Mono.Cecil.MemberReference::get_FullName() */, L_39);
				String_t* L_41;
				L_41 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4B05388AA999E3C1B1E115416F59EDB4DBFF7CBF)), L_38, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6C050FF692D311C2A2ABB15D2771A2C35FA2B927)), L_40, NULL);
				NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_42 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
				NullCheck(L_42);
				NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_42, L_41, NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_42, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ILMethod_InitParameters_m0567C9FC09025B3B61FE067D01222B88F1D1BA01_RuntimeMethod_var)));
			}

IL_0131_1:
			{
				// type = appdomain.GetType(pt, declaringType, this);
				AppDomain_tFFEF01BA23D79DA3A22C21195FD262862037E506* L_43 = __this->___appdomain_6;
				TypeReference_tF82E3E035A581A717CE653CEFC3843CE4E460F91* L_44 = V_5;
				ILType_tD812655AF7716306B8168AD6F08152435B77708C* L_45 = __this->___declaringType_7;
				NullCheck(L_43);
				RuntimeObject* L_46;
				L_46 = AppDomain_GetType_m0CF8800358B9E64FE1C5257FDCD210A37C25385B(L_43, L_44, L_45, __this, NULL);
				V_1 = L_46;
			}

IL_0146_1:
			{
				// if (isArray)
				bool L_47 = V_3;
				if (!L_47)
				{
					goto IL_0152_1;
				}
			}
			{
				// type = type.MakeArrayType(rank);
				RuntimeObject* L_48 = V_1;
				int32_t L_49 = V_4;
				NullCheck(L_48);
				RuntimeObject* L_50;
				L_50 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(33 /* ILRuntime.CLR.TypeSystem.IType ILRuntime.CLR.TypeSystem.IType::MakeArrayType(System.Int32) */, IType_tC510B754395152F7217FD34CD69B8AFA1676AA9E_il2cpp_TypeInfo_var, L_48, L_49);
				V_1 = L_50;
			}

IL_0152_1:
			{
				// if (isByRef)
				bool L_51 = V_2;
				if (!L_51)
				{
					goto IL_015c_1;
				}
			}
			{
				// type = type.MakeByRefType();
				RuntimeObject* L_52 = V_1;
				NullCheck(L_52);
				RuntimeObject* L_53;
				L_53 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(32 /* ILRuntime.CLR.TypeSystem.IType ILRuntime.CLR.TypeSystem.IType::MakeByRefType() */, IType_tC510B754395152F7217FD34CD69B8AFA1676AA9E_il2cpp_TypeInfo_var, L_52);
				V_1 = L_53;
			}

IL_015c_1:
			{
				// parameters.Add(type);
				List_1_t136E925D19ADF1AFF60DF33114FEC34DD1EAFD75* L_54 = __this->___parameters_5;
				RuntimeObject* L_55 = V_1;
				NullCheck(L_54);
				List_1_Add_m3F51DF5D911FE86B020CC8DD004AC5A96492A070_inline(L_54, L_55, List_1_Add_m3F51DF5D911FE86B020CC8DD004AC5A96492A070_RuntimeMethod_var);
			}

IL_0168_1:
			{
				// foreach (var i in def.Parameters)
				bool L_56;
				L_56 = Enumerator_MoveNext_m10B12DD106E0A499FE1C5250F12F6063404CD28F((&V_0), Enumerator_MoveNext_m10B12DD106E0A499FE1C5250F12F6063404CD28F_RuntimeMethod_var);
				if (L_56)
				{
					goto IL_0021_1;
				}
			}
			{
				goto IL_0184;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0184:
	{
		// }
		return;
	}
}
// ILRuntime.CLR.Method.IMethod ILRuntime.CLR.Method.ILMethod::MakeGenericMethod(ILRuntime.CLR.TypeSystem.IType[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ILMethod_MakeGenericMethod_m65602B7FC3D002F8BEBDCEB568ABF92C3D5A0A8B (ILMethod_tA56B8FD062B67B88B2396AC1AFFCED9E4FE92AD7* __this, ITypeU5BU5D_tADD584F6D2F1E810AEF7DB2DCA16027722B50991* ___genericArguments0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Collection_1_get_Item_mE1E62B32EE846548B46E59B86FEC11157991F868_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILMethod_tA56B8FD062B67B88B2396AC1AFFCED9E4FE92AD7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2U5BU5D_t95F3D6603431315C02B152EFB4CA771ADE93BC2D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2__ctor_m663938AF9BF607872A8BA8ACB8AC4B58AB444D49_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_t95F3D6603431315C02B152EFB4CA771ADE93BC2D* V_0 = NULL;
	ILMethod_tA56B8FD062B67B88B2396AC1AFFCED9E4FE92AD7* V_1 = NULL;
	int32_t V_2 = 0;
	String_t* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	{
		// KeyValuePair<string, IType>[] genericParameters = new KeyValuePair<string, IType>[genericArguments.Length];
		ITypeU5BU5D_tADD584F6D2F1E810AEF7DB2DCA16027722B50991* L_0 = ___genericArguments0;
		NullCheck(L_0);
		KeyValuePair_2U5BU5D_t95F3D6603431315C02B152EFB4CA771ADE93BC2D* L_1 = (KeyValuePair_2U5BU5D_t95F3D6603431315C02B152EFB4CA771ADE93BC2D*)(KeyValuePair_2U5BU5D_t95F3D6603431315C02B152EFB4CA771ADE93BC2D*)SZArrayNew(KeyValuePair_2U5BU5D_t95F3D6603431315C02B152EFB4CA771ADE93BC2D_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_0)->max_length)));
		V_0 = L_1;
		// for (int i = 0; i < genericArguments.Length; i++)
		V_2 = 0;
		goto IL_003c;
	}

IL_000d:
	{
		// string name = def.GenericParameters[i].Name;
		MethodDefinition_t20ECAB62A2A1BBEB383A1A979167D658ACCF3244* L_2 = __this->___def_4;
		NullCheck(L_2);
		Collection_1_tAF0023B9443046D2A5BC6C79ADE1460DA3165828* L_3;
		L_3 = VirtualFuncInvoker0< Collection_1_tAF0023B9443046D2A5BC6C79ADE1460DA3165828* >::Invoke(43 /* ILRuntime.Mono.Collections.Generic.Collection`1<ILRuntime.Mono.Cecil.GenericParameter> ILRuntime.Mono.Cecil.MethodReference::get_GenericParameters() */, L_2);
		int32_t L_4 = V_2;
		NullCheck(L_3);
		GenericParameter_t8414103B394479F255809FF8AFF131596ED43EEA* L_5;
		L_5 = Collection_1_get_Item_mE1E62B32EE846548B46E59B86FEC11157991F868(L_3, L_4, Collection_1_get_Item_mE1E62B32EE846548B46E59B86FEC11157991F868_RuntimeMethod_var);
		NullCheck(L_5);
		String_t* L_6;
		L_6 = VirtualFuncInvoker0< String_t* >::Invoke(6 /* System.String ILRuntime.Mono.Cecil.MemberReference::get_Name() */, L_5);
		V_3 = L_6;
		// IType val = genericArguments[i];
		ITypeU5BU5D_tADD584F6D2F1E810AEF7DB2DCA16027722B50991* L_7 = ___genericArguments0;
		int32_t L_8 = V_2;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		RuntimeObject* L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_4 = L_10;
		// genericParameters[i] = new KeyValuePair<string, IType>(name, val);
		KeyValuePair_2U5BU5D_t95F3D6603431315C02B152EFB4CA771ADE93BC2D* L_11 = V_0;
		int32_t L_12 = V_2;
		String_t* L_13 = V_3;
		RuntimeObject* L_14 = V_4;
		KeyValuePair_2_tE28C7DA12E13817FD3C7A77CBB509ED7784C2AB5 L_15;
		memset((&L_15), 0, sizeof(L_15));
		KeyValuePair_2__ctor_m663938AF9BF607872A8BA8ACB8AC4B58AB444D49((&L_15), L_13, L_14, /*hidden argument*/KeyValuePair_2__ctor_m663938AF9BF607872A8BA8ACB8AC4B58AB444D49_RuntimeMethod_var);
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_12), (KeyValuePair_2_tE28C7DA12E13817FD3C7A77CBB509ED7784C2AB5)L_15);
		// for (int i = 0; i < genericArguments.Length; i++)
		int32_t L_16 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_003c:
	{
		// for (int i = 0; i < genericArguments.Length; i++)
		int32_t L_17 = V_2;
		ITypeU5BU5D_tADD584F6D2F1E810AEF7DB2DCA16027722B50991* L_18 = ___genericArguments0;
		NullCheck(L_18);
		if ((((int32_t)L_17) < ((int32_t)((int32_t)(((RuntimeArray*)L_18)->max_length)))))
		{
			goto IL_000d;
		}
	}
	{
		// ILMethod m = new ILMethod(def, declaringType, appdomain, jitFlags);
		MethodDefinition_t20ECAB62A2A1BBEB383A1A979167D658ACCF3244* L_19 = __this->___def_4;
		ILType_tD812655AF7716306B8168AD6F08152435B77708C* L_20 = __this->___declaringType_7;
		AppDomain_tFFEF01BA23D79DA3A22C21195FD262862037E506* L_21 = __this->___appdomain_6;
		int32_t L_22 = __this->___jitFlags_21;
		ILMethod_tA56B8FD062B67B88B2396AC1AFFCED9E4FE92AD7* L_23 = (ILMethod_tA56B8FD062B67B88B2396AC1AFFCED9E4FE92AD7*)il2cpp_codegen_object_new(ILMethod_tA56B8FD062B67B88B2396AC1AFFCED9E4FE92AD7_il2cpp_TypeInfo_var);
		NullCheck(L_23);
		ILMethod__ctor_m33DBA416544D54425950E94037E8B113B7C43A0B(L_23, L_19, L_20, L_21, L_22, NULL);
		V_1 = L_23;
		// m.genericParameters = genericParameters;
		ILMethod_tA56B8FD062B67B88B2396AC1AFFCED9E4FE92AD7* L_24 = V_1;
		KeyValuePair_2U5BU5D_t95F3D6603431315C02B152EFB4CA771ADE93BC2D* L_25 = V_0;
		NullCheck(L_24);
		L_24->___genericParameters_10 = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&L_24->___genericParameters_10), (void*)L_25);
		// m.genericArguments = genericArguments;
		ILMethod_tA56B8FD062B67B88B2396AC1AFFCED9E4FE92AD7* L_26 = V_1;
		ITypeU5BU5D_tADD584F6D2F1E810AEF7DB2DCA16027722B50991* L_27 = ___genericArguments0;
		NullCheck(L_26);
		L_26->___genericArguments_11 = L_27;
		Il2CppCodeGenWriteBarrier((void**)(&L_26->___genericArguments_11), (void*)L_27);
		// if (m.def.ReturnType.IsGenericParameter)
		ILMethod_tA56B8FD062B67B88B2396AC1AFFCED9E4FE92AD7* L_28 = V_1;
		NullCheck(L_28);
		MethodDefinition_t20ECAB62A2A1BBEB383A1A979167D658ACCF3244* L_29 = L_28->___def_4;
		NullCheck(L_29);
		TypeReference_tF82E3E035A581A717CE653CEFC3843CE4E460F91* L_30;
		L_30 = MethodReference_get_ReturnType_m9C100121D93CB8ED2D4ACB85CF5FBDFE551F20DA(L_29, NULL);
		NullCheck(L_30);
		bool L_31;
		L_31 = VirtualFuncInvoker0< bool >::Invoke(35 /* System.Boolean ILRuntime.Mono.Cecil.TypeReference::get_IsGenericParameter() */, L_30);
		if (!L_31)
		{
			goto IL_009c;
		}
	}
	{
		// m.ReturnType = m.FindGenericArgument(m.def.ReturnType.Name);
		ILMethod_tA56B8FD062B67B88B2396AC1AFFCED9E4FE92AD7* L_32 = V_1;
		ILMethod_tA56B8FD062B67B88B2396AC1AFFCED9E4FE92AD7* L_33 = V_1;
		ILMethod_tA56B8FD062B67B88B2396AC1AFFCED9E4FE92AD7* L_34 = V_1;
		NullCheck(L_34);
		MethodDefinition_t20ECAB62A2A1BBEB383A1A979167D658ACCF3244* L_35 = L_34->___def_4;
		NullCheck(L_35);
		TypeReference_tF82E3E035A581A717CE653CEFC3843CE4E460F91* L_36;
		L_36 = MethodReference_get_ReturnType_m9C100121D93CB8ED2D4ACB85CF5FBDFE551F20DA(L_35, NULL);
		NullCheck(L_36);
		String_t* L_37;
		L_37 = VirtualFuncInvoker0< String_t* >::Invoke(6 /* System.String ILRuntime.Mono.Cecil.MemberReference::get_Name() */, L_36);
		NullCheck(L_33);
		RuntimeObject* L_38;
		L_38 = ILMethod_FindGenericArgument_mA14178CACC778ED8DD7029F4D44EA5F21B73486F(L_33, L_37, NULL);
		NullCheck(L_32);
		ILMethod_set_ReturnType_mAC96B2A8A1372938DB97FA88CA042D025CDD0E40_inline(L_32, L_38, NULL);
	}

IL_009c:
	{
		// return m;
		ILMethod_tA56B8FD062B67B88B2396AC1AFFCED9E4FE92AD7* L_39 = V_1;
		return L_39;
	}
}
// System.String ILRuntime.CLR.Method.ILMethod::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ILMethod_ToString_m483A360B29176DC1B08354C65A49BE6313360DAC (ILMethod_tA56B8FD062B67B88B2396AC1AFFCED9E4FE92AD7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Collection_1_get_Item_m94FDDCE2857A8035385ED1D49F4A4877D89DF0B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IType_tC510B754395152F7217FD34CD69B8AFA1676AA9E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m85C0F032DCB5D6814A7025C9AC1BB586F662E2A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mFF4DE940771926F51E45DEEAC63BC14CD28C5635_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	{
		// if (cachedName == null)
		String_t* L_0 = __this->___cachedName_34;
		if (L_0)
		{
			goto IL_00ce;
		}
	}
	{
		// StringBuilder sb = new StringBuilder();
		StringBuilder_t* L_1 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_1, NULL);
		V_0 = L_1;
		// sb.Append(declaringType.FullName);
		StringBuilder_t* L_2 = V_0;
		ILType_tD812655AF7716306B8168AD6F08152435B77708C* L_3 = __this->___declaringType_7;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = ILType_get_FullName_mED914066A7FD965D01D566274DC64414B8D21CB7(L_3, NULL);
		NullCheck(L_2);
		StringBuilder_t* L_5;
		L_5 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_2, L_4, NULL);
		// sb.Append('.');
		StringBuilder_t* L_6 = V_0;
		NullCheck(L_6);
		StringBuilder_t* L_7;
		L_7 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_6, ((int32_t)46), NULL);
		// sb.Append(Name);
		StringBuilder_t* L_8 = V_0;
		String_t* L_9;
		L_9 = ILMethod_get_Name_m201619334A6A071426B14588BDE9893402E800FF(__this, NULL);
		NullCheck(L_8);
		StringBuilder_t* L_10;
		L_10 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_8, L_9, NULL);
		// sb.Append('(');
		StringBuilder_t* L_11 = V_0;
		NullCheck(L_11);
		StringBuilder_t* L_12;
		L_12 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_11, ((int32_t)40), NULL);
		// bool isFirst = true;
		V_1 = (bool)1;
		// if (parameters == null)
		List_1_t136E925D19ADF1AFF60DF33114FEC34DD1EAFD75* L_13 = __this->___parameters_5;
		if (L_13)
		{
			goto IL_0052;
		}
	}
	{
		// InitParameters();
		ILMethod_InitParameters_m0567C9FC09025B3B61FE067D01222B88F1D1BA01(__this, NULL);
	}

IL_0052:
	{
		// for (int i = 0; i < parameters.Count; i++)
		V_2 = 0;
		goto IL_00ab;
	}

IL_0056:
	{
		// if (isFirst)
		bool L_14 = V_1;
		if (!L_14)
		{
			goto IL_005d;
		}
	}
	{
		// isFirst = false;
		V_1 = (bool)0;
		goto IL_0069;
	}

IL_005d:
	{
		// sb.Append(", ");
		StringBuilder_t* L_15 = V_0;
		NullCheck(L_15);
		StringBuilder_t* L_16;
		L_16 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_15, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, NULL);
	}

IL_0069:
	{
		// sb.Append(parameters[i].FullName);
		StringBuilder_t* L_17 = V_0;
		List_1_t136E925D19ADF1AFF60DF33114FEC34DD1EAFD75* L_18 = __this->___parameters_5;
		int32_t L_19 = V_2;
		NullCheck(L_18);
		RuntimeObject* L_20;
		L_20 = List_1_get_Item_mFF4DE940771926F51E45DEEAC63BC14CD28C5635(L_18, L_19, List_1_get_Item_mFF4DE940771926F51E45DEEAC63BC14CD28C5635_RuntimeMethod_var);
		NullCheck(L_20);
		String_t* L_21;
		L_21 = InterfaceFuncInvoker0< String_t* >::Invoke(8 /* System.String ILRuntime.CLR.TypeSystem.IType::get_FullName() */, IType_tC510B754395152F7217FD34CD69B8AFA1676AA9E_il2cpp_TypeInfo_var, L_20);
		NullCheck(L_17);
		StringBuilder_t* L_22;
		L_22 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_17, L_21, NULL);
		// sb.Append(' ');
		StringBuilder_t* L_23 = V_0;
		NullCheck(L_23);
		StringBuilder_t* L_24;
		L_24 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_23, ((int32_t)32), NULL);
		// sb.Append(def.Parameters[i].Name);
		StringBuilder_t* L_25 = V_0;
		MethodDefinition_t20ECAB62A2A1BBEB383A1A979167D658ACCF3244* L_26 = __this->___def_4;
		NullCheck(L_26);
		Collection_1_t07922683F6D8F9416D093E2327FCBCCAC03146F1* L_27;
		L_27 = VirtualFuncInvoker0< Collection_1_t07922683F6D8F9416D093E2327FCBCCAC03146F1* >::Invoke(41 /* ILRuntime.Mono.Collections.Generic.Collection`1<ILRuntime.Mono.Cecil.ParameterDefinition> ILRuntime.Mono.Cecil.MethodReference::get_Parameters() */, L_26);
		int32_t L_28 = V_2;
		NullCheck(L_27);
		ParameterDefinition_tF36CEEB8641D1EEA2D1D205360F1A7F37E63A6BA* L_29;
		L_29 = Collection_1_get_Item_m94FDDCE2857A8035385ED1D49F4A4877D89DF0B9(L_27, L_28, Collection_1_get_Item_m94FDDCE2857A8035385ED1D49F4A4877D89DF0B9_RuntimeMethod_var);
		NullCheck(L_29);
		String_t* L_30;
		L_30 = ParameterReference_get_Name_m76C1DEB1A9156E1BE5FBF2C9186DFB0353C650D8_inline(L_29, NULL);
		NullCheck(L_25);
		StringBuilder_t* L_31;
		L_31 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_25, L_30, NULL);
		// for (int i = 0; i < parameters.Count; i++)
		int32_t L_32 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_32, 1));
	}

IL_00ab:
	{
		// for (int i = 0; i < parameters.Count; i++)
		int32_t L_33 = V_2;
		List_1_t136E925D19ADF1AFF60DF33114FEC34DD1EAFD75* L_34 = __this->___parameters_5;
		NullCheck(L_34);
		int32_t L_35;
		L_35 = List_1_get_Count_m85C0F032DCB5D6814A7025C9AC1BB586F662E2A4_inline(L_34, List_1_get_Count_m85C0F032DCB5D6814A7025C9AC1BB586F662E2A4_RuntimeMethod_var);
		if ((((int32_t)L_33) < ((int32_t)L_35)))
		{
			goto IL_0056;
		}
	}
	{
		// sb.Append(')');
		StringBuilder_t* L_36 = V_0;
		NullCheck(L_36);
		StringBuilder_t* L_37;
		L_37 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_36, ((int32_t)41), NULL);
		// cachedName = sb.ToString();
		StringBuilder_t* L_38 = V_0;
		NullCheck(L_38);
		String_t* L_39;
		L_39 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_38);
		__this->___cachedName_34 = L_39;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___cachedName_34), (void*)L_39);
	}

IL_00ce:
	{
		// return cachedName;
		String_t* L_40 = __this->___cachedName_34;
		return L_40;
	}
}
// System.Int32 ILRuntime.CLR.Method.ILMethod::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ILMethod_GetHashCode_m193F19FD15B450A959A2F8AC2AD56A80D9BA9DE4 (ILMethod_tA56B8FD062B67B88B2396AC1AFFCED9E4FE92AD7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILMethod_tA56B8FD062B67B88B2396AC1AFFCED9E4FE92AD7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (hashCode == -1)
		int32_t L_0 = __this->___hashCode_26;
		if ((!(((uint32_t)L_0) == ((uint32_t)(-1)))))
		{
			goto IL_001a;
		}
	}
	{
		// hashCode = System.Threading.Interlocked.Add(ref instance_id, 1);
		il2cpp_codegen_runtime_class_init_inline(ILMethod_tA56B8FD062B67B88B2396AC1AFFCED9E4FE92AD7_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = Interlocked_Add_m2455208C56EEFD8832AEAD8AF7368A3FEB33A73C((&((ILMethod_tA56B8FD062B67B88B2396AC1AFFCED9E4FE92AD7_StaticFields*)il2cpp_codegen_static_fields_for(ILMethod_tA56B8FD062B67B88B2396AC1AFFCED9E4FE92AD7_il2cpp_TypeInfo_var))->___instance_id_27), 1, NULL);
		__this->___hashCode_26 = L_1;
	}

IL_001a:
	{
		// return hashCode;
		int32_t L_2 = __this->___hashCode_26;
		return L_2;
	}
}
// System.Boolean ILRuntime.CLR.Method.ILMethod::get_IsExtend()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ILMethod_get_IsExtend_m6342608363575040FB33D7276EB6FF8EFC0FCA97 (ILMethod_tA56B8FD062B67B88B2396AC1AFFCED9E4FE92AD7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_mE2C54C6AE9FC9F05BF44CD9D7D61DC6CD56E3E28_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (isExtend == null)
		Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01* L_0 = (&__this->___isExtend_35);
		bool L_1;
		L_1 = Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_inline(L_0, Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_RuntimeMethod_var);
		if (L_1)
		{
			goto IL_001e;
		}
	}
	{
		// isExtend = this.IsExtendMethod();
		bool L_2;
		L_2 = IMethodExtensions_IsExtendMethod_m5269B80C75EF5484549A61FFE41850690379F828(__this, NULL);
		Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5((&L_3), L_2, /*hidden argument*/Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5_RuntimeMethod_var);
		__this->___isExtend_35 = L_3;
	}

IL_001e:
	{
		// return isExtend.Value;
		Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01* L_4 = (&__this->___isExtend_35);
		bool L_5;
		L_5 = Nullable_1_get_Value_mE2C54C6AE9FC9F05BF44CD9D7D61DC6CD56E3E28(L_4, Nullable_1_get_Value_mE2C54C6AE9FC9F05BF44CD9D7D61DC6CD56E3E28_RuntimeMethod_var);
		return L_5;
	}
}
// System.Void ILRuntime.CLR.Method.ILMethod::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ILMethod__cctor_m7981ADBF08CE850EB56C9FC6F848D06339DB9B80 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILMethod_tA56B8FD062B67B88B2396AC1AFFCED9E4FE92AD7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static int instance_id = 0x10000000;
		((ILMethod_tA56B8FD062B67B88B2396AC1AFFCED9E4FE92AD7_StaticFields*)il2cpp_codegen_static_fields_for(ILMethod_tA56B8FD062B67B88B2396AC1AFFCED9E4FE92AD7_il2cpp_TypeInfo_var))->___instance_id_27 = ((int32_t)268435456);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean ILRuntime.CLR.Method.IMethodExtensions::IsExtendMethod(ILRuntime.CLR.Method.ILMethod)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IMethodExtensions_IsExtendMethod_m5269B80C75EF5484549A61FFE41850690379F828 (ILMethod_tA56B8FD062B67B88B2396AC1AFFCED9E4FE92AD7* ___im0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExtensionAttribute_t55192F874E3E06FBC2C075D9AB0214C94A702991_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!im.IsStatic || im.ParameterCount == 0)
		ILMethod_tA56B8FD062B67B88B2396AC1AFFCED9E4FE92AD7* L_0 = ___im0;
		NullCheck(L_0);
		bool L_1;
		L_1 = ILMethod_get_IsStatic_mE66DE4FD886C446A0AE7BF330BFBB86CCE52EF82(L_0, NULL);
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		ILMethod_tA56B8FD062B67B88B2396AC1AFFCED9E4FE92AD7* L_2 = ___im0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = ILMethod_get_ParameterCount_m0C4573BC61A5259587CA3E2988861200ED6755F0_inline(L_2, NULL);
		if (L_3)
		{
			goto IL_0012;
		}
	}

IL_0010:
	{
		// return false;
		return (bool)0;
	}

IL_0012:
	{
		// return im.ReflectionMethodInfo.GetCustomAttributes(typeof(System.Runtime.CompilerServices.ExtensionAttribute), false).Length > 0;
		ILMethod_tA56B8FD062B67B88B2396AC1AFFCED9E4FE92AD7* L_4 = ___im0;
		NullCheck(L_4);
		MethodInfo_t* L_5;
		L_5 = ILMethod_get_ReflectionMethodInfo_mB7AEAD37363023B92C516A618BEED7DAF28E8345(L_4, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (ExtensionAttribute_t55192F874E3E06FBC2C075D9AB0214C94A702991_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		NullCheck(L_5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8;
		L_8 = VirtualFuncInvoker2< ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, Type_t*, bool >::Invoke(19 /* System.Object[] System.Reflection.MemberInfo::GetCustomAttributes(System.Type,System.Boolean) */, L_5, L_7, (bool)0);
		NullCheck(L_8);
		return (bool)((!(((uint32_t)(((RuntimeArray*)L_8)->max_length)) <= ((uint32_t)0)))? 1 : 0);
	}
}
// System.Boolean ILRuntime.CLR.Method.IMethodExtensions::IsExtendMethod(ILRuntime.CLR.Method.CLRMethod)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IMethodExtensions_IsExtendMethod_m98DD7B8FA21B9E94FB958EF5D341F967EF28AAFA (CLRMethod_t7DF49A5C4FF255B056BFEE0BFDF137AEF905FFF5* ___cm0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExtensionAttribute_t55192F874E3E06FBC2C075D9AB0214C94A702991_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!cm.IsStatic || cm.ParameterCount == 0)
		CLRMethod_t7DF49A5C4FF255B056BFEE0BFDF137AEF905FFF5* L_0 = ___cm0;
		NullCheck(L_0);
		bool L_1;
		L_1 = CLRMethod_get_IsStatic_m66F4EDB78E7250E98FA4902256C0E048BD3EB68C(L_0, NULL);
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		CLRMethod_t7DF49A5C4FF255B056BFEE0BFDF137AEF905FFF5* L_2 = ___cm0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = CLRMethod_get_ParameterCount_mE781F880D1B9196A9382C6A381BAD4070FE3622F(L_2, NULL);
		if (L_3)
		{
			goto IL_0012;
		}
	}

IL_0010:
	{
		// return false;
		return (bool)0;
	}

IL_0012:
	{
		// return cm.MethodInfo.IsDefined(typeof(System.Runtime.CompilerServices.ExtensionAttribute), false);
		CLRMethod_t7DF49A5C4FF255B056BFEE0BFDF137AEF905FFF5* L_4 = ___cm0;
		NullCheck(L_4);
		MethodInfo_t* L_5;
		L_5 = CLRMethod_get_MethodInfo_mA20BF96B9EF5F7021E583C5E10EBEB616A2A1779_inline(L_4, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (ExtensionAttribute_t55192F874E3E06FBC2C075D9AB0214C94A702991_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		NullCheck(L_5);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, Type_t*, bool >::Invoke(17 /* System.Boolean System.Reflection.MemberInfo::IsDefined(System.Type,System.Boolean) */, L_5, L_7, (bool)0);
		return L_8;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Type System.Runtime.CompilerServices.AsyncMethodBuilderAttribute::get_BuilderType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* AsyncMethodBuilderAttribute_get_BuilderType_m285FF3F9EB24594955D6CDFB5665D67D2B86F38D (AsyncMethodBuilderAttribute_t3C650C098D60F31A41B7DE2A7E241085AC125960* __this, const RuntimeMethod* method) 
{
	{
		// get;
		Type_t* L_0 = __this->___U3CBuilderTypeU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void System.Runtime.CompilerServices.AsyncMethodBuilderAttribute::.ctor(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncMethodBuilderAttribute__ctor_mA0F9E9A40F628B84FFFCBF4FF92896650CD3B8F8 (AsyncMethodBuilderAttribute_t3C650C098D60F31A41B7DE2A7E241085AC125960* __this, Type_t* ___builderType0, const RuntimeMethod* method) 
{
	{
		// public AsyncMethodBuilderAttribute(Type builderType)
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		// BuilderType = builderType;
		Type_t* L_0 = ___builderType0;
		__this->___U3CBuilderTypeU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CBuilderTypeU3Ek__BackingField_0), (void*)L_0);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// ET.AsyncETTaskCompletedMethodBuilder ET.AsyncETTaskCompletedMethodBuilder::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncETTaskCompletedMethodBuilder_t53ABA0333D7CD0BCD066353A41DFB67445B8E031 AsyncETTaskCompletedMethodBuilder_Create_mB9EB46C0E97838273A6A3A7A4B2EB5162EAD929E (const RuntimeMethod* method) 
{
	AsyncETTaskCompletedMethodBuilder_t53ABA0333D7CD0BCD066353A41DFB67445B8E031 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// AsyncETTaskCompletedMethodBuilder builder = new AsyncETTaskCompletedMethodBuilder();
		il2cpp_codegen_initobj((&V_0), sizeof(AsyncETTaskCompletedMethodBuilder_t53ABA0333D7CD0BCD066353A41DFB67445B8E031));
		AsyncETTaskCompletedMethodBuilder_t53ABA0333D7CD0BCD066353A41DFB67445B8E031 L_0 = V_0;
		// return builder;
		return L_0;
	}
}
// ET.ETTaskCompleted ET.AsyncETTaskCompletedMethodBuilder::get_Task()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ETTaskCompleted_tC7E784791E37157A69DC06ADE2C07D5F0BD577A1 AsyncETTaskCompletedMethodBuilder_get_Task_mF761709525C4245B9C13ADFDB62B55D0FD50DE4A (AsyncETTaskCompletedMethodBuilder_t53ABA0333D7CD0BCD066353A41DFB67445B8E031* __this, const RuntimeMethod* method) 
{
	ETTaskCompleted_tC7E784791E37157A69DC06ADE2C07D5F0BD577A1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public ETTaskCompleted Task => default;
		il2cpp_codegen_initobj((&V_0), sizeof(ETTaskCompleted_tC7E784791E37157A69DC06ADE2C07D5F0BD577A1));
		ETTaskCompleted_tC7E784791E37157A69DC06ADE2C07D5F0BD577A1 L_0 = V_0;
		return L_0;
	}
}
IL2CPP_EXTERN_C  ETTaskCompleted_tC7E784791E37157A69DC06ADE2C07D5F0BD577A1 AsyncETTaskCompletedMethodBuilder_get_Task_mF761709525C4245B9C13ADFDB62B55D0FD50DE4A_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AsyncETTaskCompletedMethodBuilder_t53ABA0333D7CD0BCD066353A41DFB67445B8E031* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AsyncETTaskCompletedMethodBuilder_t53ABA0333D7CD0BCD066353A41DFB67445B8E031*>(__this + _offset);
	ETTaskCompleted_tC7E784791E37157A69DC06ADE2C07D5F0BD577A1 _returnValue;
	_returnValue = AsyncETTaskCompletedMethodBuilder_get_Task_mF761709525C4245B9C13ADFDB62B55D0FD50DE4A(_thisAdjusted, method);
	return _returnValue;
}
// System.Void ET.AsyncETTaskCompletedMethodBuilder::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncETTaskCompletedMethodBuilder_SetException_m3421C1089E30FAFFAE0B7A24F40EB6FB9D663A39 (AsyncETTaskCompletedMethodBuilder_t53ABA0333D7CD0BCD066353A41DFB67445B8E031* __this, Exception_t* ___e0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ETTask.ExceptionHandler.Invoke(e);
		il2cpp_codegen_runtime_class_init_inline(ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_il2cpp_TypeInfo_var);
		Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04* L_0 = ((ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_StaticFields*)il2cpp_codegen_static_fields_for(ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_il2cpp_TypeInfo_var))->___ExceptionHandler_0;
		Exception_t* L_1 = ___e0;
		NullCheck(L_0);
		Action_1_Invoke_m43B5C4C0F292CE3E07CB03B46D8F960ACF7D6A58_inline(L_0, L_1, NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void AsyncETTaskCompletedMethodBuilder_SetException_m3421C1089E30FAFFAE0B7A24F40EB6FB9D663A39_AdjustorThunk (RuntimeObject* __this, Exception_t* ___e0, const RuntimeMethod* method)
{
	AsyncETTaskCompletedMethodBuilder_t53ABA0333D7CD0BCD066353A41DFB67445B8E031* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AsyncETTaskCompletedMethodBuilder_t53ABA0333D7CD0BCD066353A41DFB67445B8E031*>(__this + _offset);
	AsyncETTaskCompletedMethodBuilder_SetException_m3421C1089E30FAFFAE0B7A24F40EB6FB9D663A39(_thisAdjusted, ___e0, method);
}
// System.Void ET.AsyncETTaskCompletedMethodBuilder::SetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncETTaskCompletedMethodBuilder_SetResult_m4C2AF9E157E63D95304DA43FC782928D508BF31B (AsyncETTaskCompletedMethodBuilder_t53ABA0333D7CD0BCD066353A41DFB67445B8E031* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void AsyncETTaskCompletedMethodBuilder_SetResult_m4C2AF9E157E63D95304DA43FC782928D508BF31B_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AsyncETTaskCompletedMethodBuilder_t53ABA0333D7CD0BCD066353A41DFB67445B8E031* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AsyncETTaskCompletedMethodBuilder_t53ABA0333D7CD0BCD066353A41DFB67445B8E031*>(__this + _offset);
	AsyncETTaskCompletedMethodBuilder_SetResult_m4C2AF9E157E63D95304DA43FC782928D508BF31B(_thisAdjusted, method);
}
// System.Void ET.AsyncETTaskCompletedMethodBuilder::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncETTaskCompletedMethodBuilder_SetStateMachine_m099AF3AF77EFF4CFFE33ECC82857335D827033EC (AsyncETTaskCompletedMethodBuilder_t53ABA0333D7CD0BCD066353A41DFB67445B8E031* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void AsyncETTaskCompletedMethodBuilder_SetStateMachine_m099AF3AF77EFF4CFFE33ECC82857335D827033EC_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	AsyncETTaskCompletedMethodBuilder_t53ABA0333D7CD0BCD066353A41DFB67445B8E031* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AsyncETTaskCompletedMethodBuilder_t53ABA0333D7CD0BCD066353A41DFB67445B8E031*>(__this + _offset);
	AsyncETTaskCompletedMethodBuilder_SetStateMachine_m099AF3AF77EFF4CFFE33ECC82857335D827033EC(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: ET.ETAsyncTaskMethodBuilder
IL2CPP_EXTERN_C void ETAsyncTaskMethodBuilder_t6539D4B6A1CB6F6388453211D928A26188B68B0C_marshal_pinvoke(const ETAsyncTaskMethodBuilder_t6539D4B6A1CB6F6388453211D928A26188B68B0C& unmarshaled, ETAsyncTaskMethodBuilder_t6539D4B6A1CB6F6388453211D928A26188B68B0C_marshaled_pinvoke& marshaled)
{
	Exception_t* ___tcs_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'tcs' of type 'ETAsyncTaskMethodBuilder': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___tcs_0Exception, NULL);
}
IL2CPP_EXTERN_C void ETAsyncTaskMethodBuilder_t6539D4B6A1CB6F6388453211D928A26188B68B0C_marshal_pinvoke_back(const ETAsyncTaskMethodBuilder_t6539D4B6A1CB6F6388453211D928A26188B68B0C_marshaled_pinvoke& marshaled, ETAsyncTaskMethodBuilder_t6539D4B6A1CB6F6388453211D928A26188B68B0C& unmarshaled)
{
	Exception_t* ___tcs_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'tcs' of type 'ETAsyncTaskMethodBuilder': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___tcs_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: ET.ETAsyncTaskMethodBuilder
IL2CPP_EXTERN_C void ETAsyncTaskMethodBuilder_t6539D4B6A1CB6F6388453211D928A26188B68B0C_marshal_pinvoke_cleanup(ETAsyncTaskMethodBuilder_t6539D4B6A1CB6F6388453211D928A26188B68B0C_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: ET.ETAsyncTaskMethodBuilder
IL2CPP_EXTERN_C void ETAsyncTaskMethodBuilder_t6539D4B6A1CB6F6388453211D928A26188B68B0C_marshal_com(const ETAsyncTaskMethodBuilder_t6539D4B6A1CB6F6388453211D928A26188B68B0C& unmarshaled, ETAsyncTaskMethodBuilder_t6539D4B6A1CB6F6388453211D928A26188B68B0C_marshaled_com& marshaled)
{
	Exception_t* ___tcs_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'tcs' of type 'ETAsyncTaskMethodBuilder': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___tcs_0Exception, NULL);
}
IL2CPP_EXTERN_C void ETAsyncTaskMethodBuilder_t6539D4B6A1CB6F6388453211D928A26188B68B0C_marshal_com_back(const ETAsyncTaskMethodBuilder_t6539D4B6A1CB6F6388453211D928A26188B68B0C_marshaled_com& marshaled, ETAsyncTaskMethodBuilder_t6539D4B6A1CB6F6388453211D928A26188B68B0C& unmarshaled)
{
	Exception_t* ___tcs_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'tcs' of type 'ETAsyncTaskMethodBuilder': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___tcs_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: ET.ETAsyncTaskMethodBuilder
IL2CPP_EXTERN_C void ETAsyncTaskMethodBuilder_t6539D4B6A1CB6F6388453211D928A26188B68B0C_marshal_com_cleanup(ETAsyncTaskMethodBuilder_t6539D4B6A1CB6F6388453211D928A26188B68B0C_marshaled_com& marshaled)
{
}
// ET.ETAsyncTaskMethodBuilder ET.ETAsyncTaskMethodBuilder::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ETAsyncTaskMethodBuilder_t6539D4B6A1CB6F6388453211D928A26188B68B0C ETAsyncTaskMethodBuilder_Create_m0AFDF846A1859E2424FB91848080B693A7900449 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ETAsyncTaskMethodBuilder_t6539D4B6A1CB6F6388453211D928A26188B68B0C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// ETAsyncTaskMethodBuilder builder = new ETAsyncTaskMethodBuilder() { tcs = ETTask.Create(true) };
		il2cpp_codegen_initobj((&V_0), sizeof(ETAsyncTaskMethodBuilder_t6539D4B6A1CB6F6388453211D928A26188B68B0C));
		il2cpp_codegen_runtime_class_init_inline(ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_il2cpp_TypeInfo_var);
		ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_0;
		L_0 = ETTask_Create_mE2D8362BDB2030D3D4345BE6D68DDD7AB7E1F7BE((bool)1, NULL);
		(&V_0)->___tcs_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___tcs_0), (void*)L_0);
		ETAsyncTaskMethodBuilder_t6539D4B6A1CB6F6388453211D928A26188B68B0C L_1 = V_0;
		// return builder;
		return L_1;
	}
}
// ET.ETTask ET.ETAsyncTaskMethodBuilder::get_Task()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* ETAsyncTaskMethodBuilder_get_Task_mB1EE6961178A9200208ED6EAF4B16C84A579421F (ETAsyncTaskMethodBuilder_t6539D4B6A1CB6F6388453211D928A26188B68B0C* __this, const RuntimeMethod* method) 
{
	{
		// public ETTask Task => this.tcs;
		ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_0 = __this->___tcs_0;
		return L_0;
	}
}
IL2CPP_EXTERN_C  ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* ETAsyncTaskMethodBuilder_get_Task_mB1EE6961178A9200208ED6EAF4B16C84A579421F_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ETAsyncTaskMethodBuilder_t6539D4B6A1CB6F6388453211D928A26188B68B0C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ETAsyncTaskMethodBuilder_t6539D4B6A1CB6F6388453211D928A26188B68B0C*>(__this + _offset);
	ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* _returnValue;
	_returnValue = ETAsyncTaskMethodBuilder_get_Task_mB1EE6961178A9200208ED6EAF4B16C84A579421F_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void ET.ETAsyncTaskMethodBuilder::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETAsyncTaskMethodBuilder_SetException_mF9A14E1D6F427CF0BD0DC18EBCB318745C5B2A5F (ETAsyncTaskMethodBuilder_t6539D4B6A1CB6F6388453211D928A26188B68B0C* __this, Exception_t* ___exception0, const RuntimeMethod* method) 
{
	{
		// this.tcs.SetException(exception);
		ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_0 = __this->___tcs_0;
		Exception_t* L_1 = ___exception0;
		NullCheck(L_0);
		ETTask_SetException_m15F23C04CCB4BD5B9A5AB75928C823A93F9B6176_inline(L_0, L_1, NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ETAsyncTaskMethodBuilder_SetException_mF9A14E1D6F427CF0BD0DC18EBCB318745C5B2A5F_AdjustorThunk (RuntimeObject* __this, Exception_t* ___exception0, const RuntimeMethod* method)
{
	ETAsyncTaskMethodBuilder_t6539D4B6A1CB6F6388453211D928A26188B68B0C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ETAsyncTaskMethodBuilder_t6539D4B6A1CB6F6388453211D928A26188B68B0C*>(__this + _offset);
	ETAsyncTaskMethodBuilder_SetException_mF9A14E1D6F427CF0BD0DC18EBCB318745C5B2A5F(_thisAdjusted, ___exception0, method);
}
// System.Void ET.ETAsyncTaskMethodBuilder::SetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETAsyncTaskMethodBuilder_SetResult_m76EACE0F7E3EFD983F292BC5DB8693678E573081 (ETAsyncTaskMethodBuilder_t6539D4B6A1CB6F6388453211D928A26188B68B0C* __this, const RuntimeMethod* method) 
{
	{
		// this.tcs.SetResult();
		ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_0 = __this->___tcs_0;
		NullCheck(L_0);
		ETTask_SetResult_mB00B78BA4E84709D15FBB01D553BB9256E62B926(L_0, NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ETAsyncTaskMethodBuilder_SetResult_m76EACE0F7E3EFD983F292BC5DB8693678E573081_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ETAsyncTaskMethodBuilder_t6539D4B6A1CB6F6388453211D928A26188B68B0C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ETAsyncTaskMethodBuilder_t6539D4B6A1CB6F6388453211D928A26188B68B0C*>(__this + _offset);
	ETAsyncTaskMethodBuilder_SetResult_m76EACE0F7E3EFD983F292BC5DB8693678E573081(_thisAdjusted, method);
}
// System.Void ET.ETAsyncTaskMethodBuilder::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETAsyncTaskMethodBuilder_SetStateMachine_mEA437B0708968D310F0DC9BF80D420D59B26AB20 (ETAsyncTaskMethodBuilder_t6539D4B6A1CB6F6388453211D928A26188B68B0C* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ETAsyncTaskMethodBuilder_SetStateMachine_mEA437B0708968D310F0DC9BF80D420D59B26AB20_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	ETAsyncTaskMethodBuilder_t6539D4B6A1CB6F6388453211D928A26188B68B0C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ETAsyncTaskMethodBuilder_t6539D4B6A1CB6F6388453211D928A26188B68B0C*>(__this + _offset);
	ETAsyncTaskMethodBuilder_SetStateMachine_mEA437B0708968D310F0DC9BF80D420D59B26AB20(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// ET.AsyncETVoidMethodBuilder ET.AsyncETVoidMethodBuilder::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203 AsyncETVoidMethodBuilder_Create_m9CEDA84619E25BAC3C65FA55A7C6A56FF650F200 (const RuntimeMethod* method) 
{
	AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// AsyncETVoidMethodBuilder builder = new AsyncETVoidMethodBuilder();
		il2cpp_codegen_initobj((&V_0), sizeof(AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203));
		AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203 L_0 = V_0;
		// return builder;
		return L_0;
	}
}
// ET.ETVoid ET.AsyncETVoidMethodBuilder::get_Task()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ETVoid_tFB79A53EB5B1FFC7F4A2428E68797AD75B74DC38 AsyncETVoidMethodBuilder_get_Task_m01D925CDA13749DAF0518204CA06493E8A93EC46 (AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203* __this, const RuntimeMethod* method) 
{
	ETVoid_tFB79A53EB5B1FFC7F4A2428E68797AD75B74DC38 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public ETVoid Task => default;
		il2cpp_codegen_initobj((&V_0), sizeof(ETVoid_tFB79A53EB5B1FFC7F4A2428E68797AD75B74DC38));
		ETVoid_tFB79A53EB5B1FFC7F4A2428E68797AD75B74DC38 L_0 = V_0;
		return L_0;
	}
}
IL2CPP_EXTERN_C  ETVoid_tFB79A53EB5B1FFC7F4A2428E68797AD75B74DC38 AsyncETVoidMethodBuilder_get_Task_m01D925CDA13749DAF0518204CA06493E8A93EC46_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203*>(__this + _offset);
	ETVoid_tFB79A53EB5B1FFC7F4A2428E68797AD75B74DC38 _returnValue;
	_returnValue = AsyncETVoidMethodBuilder_get_Task_m01D925CDA13749DAF0518204CA06493E8A93EC46(_thisAdjusted, method);
	return _returnValue;
}
// System.Void ET.AsyncETVoidMethodBuilder::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncETVoidMethodBuilder_SetException_m7F5356721EF2BCB40149B2F55B8E2590699EBAF5 (AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203* __this, Exception_t* ___e0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ETTask.ExceptionHandler.Invoke(e);
		il2cpp_codegen_runtime_class_init_inline(ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_il2cpp_TypeInfo_var);
		Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04* L_0 = ((ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_StaticFields*)il2cpp_codegen_static_fields_for(ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_il2cpp_TypeInfo_var))->___ExceptionHandler_0;
		Exception_t* L_1 = ___e0;
		NullCheck(L_0);
		Action_1_Invoke_m43B5C4C0F292CE3E07CB03B46D8F960ACF7D6A58_inline(L_0, L_1, NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void AsyncETVoidMethodBuilder_SetException_m7F5356721EF2BCB40149B2F55B8E2590699EBAF5_AdjustorThunk (RuntimeObject* __this, Exception_t* ___e0, const RuntimeMethod* method)
{
	AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203*>(__this + _offset);
	AsyncETVoidMethodBuilder_SetException_m7F5356721EF2BCB40149B2F55B8E2590699EBAF5(_thisAdjusted, ___e0, method);
}
// System.Void ET.AsyncETVoidMethodBuilder::SetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncETVoidMethodBuilder_SetResult_m290D2A1FF93C5EB907BE4243F0E62E0CA49E760A (AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void AsyncETVoidMethodBuilder_SetResult_m290D2A1FF93C5EB907BE4243F0E62E0CA49E760A_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203*>(__this + _offset);
	AsyncETVoidMethodBuilder_SetResult_m290D2A1FF93C5EB907BE4243F0E62E0CA49E760A(_thisAdjusted, method);
}
// System.Void ET.AsyncETVoidMethodBuilder::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncETVoidMethodBuilder_SetStateMachine_m6A0835E3894AAEE9D100F17C6415C8C2DF7B5A78 (AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void AsyncETVoidMethodBuilder_SetStateMachine_m6A0835E3894AAEE9D100F17C6415C8C2DF7B5A78_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203*>(__this + _offset);
	AsyncETVoidMethodBuilder_SetStateMachine_m6A0835E3894AAEE9D100F17C6415C8C2DF7B5A78(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ET.ETCancellationToken::Add(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETCancellationToken_Add_mBA87E7C580A891C430C51E68FDA1C21F3B5407E7 (ETCancellationToken_tACA8F146EDE95371894D92DF0FD89C07C08886E1* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___callback0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Add_mA69EB23B2381F6D03CCC56D158E2E706DC21EFB2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.actions.Add(callback);
		HashSet_1_t095EA6937EBCEA0A5C3225D8D0D5E4CEF32D6828* L_0 = __this->___actions_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = ___callback0;
		NullCheck(L_0);
		bool L_2;
		L_2 = HashSet_1_Add_mA69EB23B2381F6D03CCC56D158E2E706DC21EFB2(L_0, L_1, HashSet_1_Add_mA69EB23B2381F6D03CCC56D158E2E706DC21EFB2_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void ET.ETCancellationToken::Remove(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETCancellationToken_Remove_mD8C4B35A9CEAC4336775F6975A1246863E104AC6 (ETCancellationToken_tACA8F146EDE95371894D92DF0FD89C07C08886E1* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___callback0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Remove_mFD60E090A2022B5DAF0138F0E6846E45654E4C8B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	HashSet_1_t095EA6937EBCEA0A5C3225D8D0D5E4CEF32D6828* G_B2_0 = NULL;
	HashSet_1_t095EA6937EBCEA0A5C3225D8D0D5E4CEF32D6828* G_B1_0 = NULL;
	{
		// this.actions?.Remove(callback);
		HashSet_1_t095EA6937EBCEA0A5C3225D8D0D5E4CEF32D6828* L_0 = __this->___actions_0;
		HashSet_1_t095EA6937EBCEA0A5C3225D8D0D5E4CEF32D6828* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = ___callback0;
		NullCheck(G_B2_0);
		bool L_3;
		L_3 = HashSet_1_Remove_mFD60E090A2022B5DAF0138F0E6846E45654E4C8B(G_B2_0, L_2, HashSet_1_Remove_mFD60E090A2022B5DAF0138F0E6846E45654E4C8B_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Boolean ET.ETCancellationToken::IsCancel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ETCancellationToken_IsCancel_m2138EFC83F2D201AD73E6B56D7F394F39CDD8068 (ETCancellationToken_tACA8F146EDE95371894D92DF0FD89C07C08886E1* __this, const RuntimeMethod* method) 
{
	{
		// return this.actions == null;
		HashSet_1_t095EA6937EBCEA0A5C3225D8D0D5E4CEF32D6828* L_0 = __this->___actions_0;
		return (bool)((((RuntimeObject*)(HashSet_1_t095EA6937EBCEA0A5C3225D8D0D5E4CEF32D6828*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
	}
}
// System.Void ET.ETCancellationToken::Cancel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETCancellationToken_Cancel_mB5946D0D2799AF1A3FFC8215726A6EBE21324E93 (ETCancellationToken_tACA8F146EDE95371894D92DF0FD89C07C08886E1* __this, const RuntimeMethod* method) 
{
	{
		// if (this.actions == null)
		HashSet_1_t095EA6937EBCEA0A5C3225D8D0D5E4CEF32D6828* L_0 = __this->___actions_0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// this.Invoke();
		ETCancellationToken_Invoke_mF885E55DC0DACEC31D8203FAAACD5450FE978475(__this, NULL);
		// }
		return;
	}
}
// System.Void ET.ETCancellationToken::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETCancellationToken_Invoke_mF885E55DC0DACEC31D8203FAAACD5450FE978475 (ETCancellationToken_tACA8F146EDE95371894D92DF0FD89C07C08886E1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m88315086E58918662C6232991F5023626723EED0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m122007C9D7809F797369DF048308B3DD5A167E6D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mE60ACE9719275C7F96CFD6CC221DE814F3DAB201_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_GetEnumerator_m78653A4544248BB5FA1AB0D510F0E20ADA71F273_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	HashSet_1_t095EA6937EBCEA0A5C3225D8D0D5E4CEF32D6828* V_0 = NULL;
	Enumerator_t6C5AF6111106FABDB3A75090A81060D2FDA7270D V_1;
	memset((&V_1), 0, sizeof(V_1));
	Exception_t* V_2 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// HashSet<Action> runActions = this.actions;
		HashSet_1_t095EA6937EBCEA0A5C3225D8D0D5E4CEF32D6828* L_0 = __this->___actions_0;
		V_0 = L_0;
		// this.actions = null;
		__this->___actions_0 = (HashSet_1_t095EA6937EBCEA0A5C3225D8D0D5E4CEF32D6828*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___actions_0), (void*)(HashSet_1_t095EA6937EBCEA0A5C3225D8D0D5E4CEF32D6828*)NULL);
	}
	try
	{// begin try (depth: 1)
		{
			// foreach (Action action in runActions)
			HashSet_1_t095EA6937EBCEA0A5C3225D8D0D5E4CEF32D6828* L_1 = V_0;
			NullCheck(L_1);
			Enumerator_t6C5AF6111106FABDB3A75090A81060D2FDA7270D L_2;
			L_2 = HashSet_1_GetEnumerator_m78653A4544248BB5FA1AB0D510F0E20ADA71F273(L_1, HashSet_1_GetEnumerator_m78653A4544248BB5FA1AB0D510F0E20ADA71F273_RuntimeMethod_var);
			V_1 = L_2;
		}
		{
			auto __finallyBlock = il2cpp::utils::Finally([&]
			{

FINALLY_002e_1:
				{// begin finally (depth: 2)
					Enumerator_Dispose_m88315086E58918662C6232991F5023626723EED0((&V_1), Enumerator_Dispose_m88315086E58918662C6232991F5023626723EED0_RuntimeMethod_var);
					return;
				}// end finally (depth: 2)
			});
			try
			{// begin try (depth: 2)
				{
					goto IL_0023_2;
				}

IL_0017_2:
				{
					// foreach (Action action in runActions)
					Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3;
					L_3 = Enumerator_get_Current_mE60ACE9719275C7F96CFD6CC221DE814F3DAB201_inline((&V_1), Enumerator_get_Current_mE60ACE9719275C7F96CFD6CC221DE814F3DAB201_RuntimeMethod_var);
					// action.Invoke();
					NullCheck(L_3);
					Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_3, NULL);
				}

IL_0023_2:
				{
					// foreach (Action action in runActions)
					bool L_4;
					L_4 = Enumerator_MoveNext_m122007C9D7809F797369DF048308B3DD5A167E6D((&V_1), Enumerator_MoveNext_m122007C9D7809F797369DF048308B3DD5A167E6D_RuntimeMethod_var);
					if (L_4)
					{
						goto IL_0017_2;
					}
				}
				{
					goto IL_003c_1;
				}
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				__finallyBlock.StoreException(e.ex);
			}
		}

IL_003c_1:
		{
			// }
			goto IL_004c;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003e;
		}
		throw e;
	}

CATCH_003e:
	{// begin catch(System.Exception)
		// catch (Exception e)
		V_2 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		// ETTask.ExceptionHandler.Invoke(e);
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_il2cpp_TypeInfo_var)));
		Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04* L_5 = ((ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_il2cpp_TypeInfo_var))))->___ExceptionHandler_0;
		Exception_t* L_6 = V_2;
		NullCheck(L_5);
		Action_1_Invoke_m43B5C4C0F292CE3E07CB03B46D8F960ACF7D6A58_inline(L_5, L_6, NULL);
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_004c;
	}// end catch (depth: 1)

IL_004c:
	{
		// }
		return;
	}
}
// System.Void ET.ETCancellationToken::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETCancellationToken__ctor_m209ED60B44C988C6F305D548AA46547B787F2075 (ETCancellationToken_tACA8F146EDE95371894D92DF0FD89C07C08886E1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1__ctor_m0279525296802FE105F96F1F35AC932146C0305F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_t095EA6937EBCEA0A5C3225D8D0D5E4CEF32D6828_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private HashSet<Action> actions = new HashSet<Action>();
		HashSet_1_t095EA6937EBCEA0A5C3225D8D0D5E4CEF32D6828* L_0 = (HashSet_1_t095EA6937EBCEA0A5C3225D8D0D5E4CEF32D6828*)il2cpp_codegen_object_new(HashSet_1_t095EA6937EBCEA0A5C3225D8D0D5E4CEF32D6828_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		HashSet_1__ctor_m0279525296802FE105F96F1F35AC932146C0305F(L_0, HashSet_1__ctor_m0279525296802FE105F96F1F35AC932146C0305F_RuntimeMethod_var);
		__this->___actions_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___actions_0), (void*)L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// ET.ETTaskCompleted ET.ETTask::get_CompletedTask()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ETTaskCompleted_tC7E784791E37157A69DC06ADE2C07D5F0BD577A1 ETTask_get_CompletedTask_m2DCA4F1F44E2A92ACAE8EE3404C6B51C05F0D637 (const RuntimeMethod* method) 
{
	ETTaskCompleted_tC7E784791E37157A69DC06ADE2C07D5F0BD577A1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return new ETTaskCompleted();
		il2cpp_codegen_initobj((&V_0), sizeof(ETTaskCompleted_tC7E784791E37157A69DC06ADE2C07D5F0BD577A1));
		ETTaskCompleted_tC7E784791E37157A69DC06ADE2C07D5F0BD577A1 L_0 = V_0;
		return L_0;
	}
}
// ET.ETTask ET.ETTask::Create(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* ETTask_Create_mE2D8362BDB2030D3D4345BE6D68DDD7AB7E1F7BE (bool ___fromPool0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Dequeue_m8961AF5251B0C920540483E9034A5C4981DAEDC5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_get_Count_mB53765136F6A77A34AD84495D77EE7F54F28CB35_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!fromPool)
		bool L_0 = ___fromPool0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return new ETTask();
		ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_1 = (ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9*)il2cpp_codegen_object_new(ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		ETTask__ctor_m93ADE5A29C33E37BD3B19ACEBDF0B7AF434EB623(L_1, NULL);
		return L_1;
	}

IL_0009:
	{
		// if (queue.Count == 0)
		il2cpp_codegen_runtime_class_init_inline(ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_il2cpp_TypeInfo_var);
		Queue_1_tD81FB1FE4DD008B5193D0BDAA9B48AEDE8DD41A4* L_2 = ((ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_StaticFields*)il2cpp_codegen_static_fields_for(ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_il2cpp_TypeInfo_var))->___queue_1;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Queue_1_get_Count_mB53765136F6A77A34AD84495D77EE7F54F28CB35_inline(L_2, Queue_1_get_Count_mB53765136F6A77A34AD84495D77EE7F54F28CB35_RuntimeMethod_var);
		if (L_3)
		{
			goto IL_0022;
		}
	}
	{
		// return new ETTask() {fromPool = true};
		ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_4 = (ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9*)il2cpp_codegen_object_new(ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		ETTask__ctor_m93ADE5A29C33E37BD3B19ACEBDF0B7AF434EB623(L_4, NULL);
		ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_5 = L_4;
		NullCheck(L_5);
		L_5->___fromPool_2 = (bool)1;
		return L_5;
	}

IL_0022:
	{
		// return queue.Dequeue();
		il2cpp_codegen_runtime_class_init_inline(ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_il2cpp_TypeInfo_var);
		Queue_1_tD81FB1FE4DD008B5193D0BDAA9B48AEDE8DD41A4* L_6 = ((ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_StaticFields*)il2cpp_codegen_static_fields_for(ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_il2cpp_TypeInfo_var))->___queue_1;
		NullCheck(L_6);
		ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_7;
		L_7 = Queue_1_Dequeue_m8961AF5251B0C920540483E9034A5C4981DAEDC5(L_6, Queue_1_Dequeue_m8961AF5251B0C920540483E9034A5C4981DAEDC5_RuntimeMethod_var);
		return L_7;
	}
}
// System.Void ET.ETTask::Recycle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETTask_Recycle_mCA3F18646D07DB9EA6E2BA4AFBDAAE3A1E27CD36 (ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Enqueue_m6B193ACE0D1CA2A8A8462A7B3DF4B4AC8B0752B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_get_Count_mB53765136F6A77A34AD84495D77EE7F54F28CB35_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!this.fromPool)
		bool L_0 = __this->___fromPool_2;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// this.state = AwaiterStatus.Pending;
		__this->___state_3 = 0;
		// this.callback = null;
		__this->___callback_4 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___callback_4), (void*)NULL);
		// if (queue.Count > 1000)
		il2cpp_codegen_runtime_class_init_inline(ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_il2cpp_TypeInfo_var);
		Queue_1_tD81FB1FE4DD008B5193D0BDAA9B48AEDE8DD41A4* L_1 = ((ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_StaticFields*)il2cpp_codegen_static_fields_for(ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_il2cpp_TypeInfo_var))->___queue_1;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Queue_1_get_Count_mB53765136F6A77A34AD84495D77EE7F54F28CB35_inline(L_1, Queue_1_get_Count_mB53765136F6A77A34AD84495D77EE7F54F28CB35_RuntimeMethod_var);
		if ((((int32_t)L_2) <= ((int32_t)((int32_t)1000))))
		{
			goto IL_0029;
		}
	}
	{
		// return;
		return;
	}

IL_0029:
	{
		// queue.Enqueue(this);
		il2cpp_codegen_runtime_class_init_inline(ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_il2cpp_TypeInfo_var);
		Queue_1_tD81FB1FE4DD008B5193D0BDAA9B48AEDE8DD41A4* L_3 = ((ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_StaticFields*)il2cpp_codegen_static_fields_for(ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_il2cpp_TypeInfo_var))->___queue_1;
		NullCheck(L_3);
		Queue_1_Enqueue_m6B193ACE0D1CA2A8A8462A7B3DF4B4AC8B0752B9(L_3, __this, Queue_1_Enqueue_m6B193ACE0D1CA2A8A8462A7B3DF4B4AC8B0752B9_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void ET.ETTask::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETTask__ctor_m93ADE5A29C33E37BD3B19ACEBDF0B7AF434EB623 (ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* __this, const RuntimeMethod* method) 
{
	{
		// private ETTask()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// }
		return;
	}
}
// ET.ETVoid ET.ETTask::InnerCoroutine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ETVoid_tFB79A53EB5B1FFC7F4A2428E68797AD75B74DC38 ETTask_InnerCoroutine_m9537CC74C1428C6737E19D55BDB81524276FAEC3 (ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncETVoidMethodBuilder_Start_TisU3CInnerCoroutineU3Ed__10_t2D601F7100272EA0BB5D608AFE81D658FDE14042_mC604A8F025BA07EB3FB5C21C8DBBC8044796E40D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CInnerCoroutineU3Ed__10_t2D601F7100272EA0BB5D608AFE81D658FDE14042 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203 L_0;
		L_0 = AsyncETVoidMethodBuilder_Create_m9CEDA84619E25BAC3C65FA55A7C6A56FF650F200(NULL);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		(&V_0)->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this_2), (void*)__this);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203* L_1 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncETVoidMethodBuilder_Start_TisU3CInnerCoroutineU3Ed__10_t2D601F7100272EA0BB5D608AFE81D658FDE14042_mC604A8F025BA07EB3FB5C21C8DBBC8044796E40D(L_1, (&V_0), AsyncETVoidMethodBuilder_Start_TisU3CInnerCoroutineU3Ed__10_t2D601F7100272EA0BB5D608AFE81D658FDE14042_mC604A8F025BA07EB3FB5C21C8DBBC8044796E40D_RuntimeMethod_var);
		AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203* L_2 = (&(&V_0)->___U3CU3Et__builder_1);
		ETVoid_tFB79A53EB5B1FFC7F4A2428E68797AD75B74DC38 L_3;
		L_3 = AsyncETVoidMethodBuilder_get_Task_m01D925CDA13749DAF0518204CA06493E8A93EC46(L_2, NULL);
		return L_3;
	}
}
// System.Void ET.ETTask::Coroutine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETTask_Coroutine_m267B0F7F89DF1A355325410B19B78EAAC0511D16 (ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* __this, const RuntimeMethod* method) 
{
	ETVoid_tFB79A53EB5B1FFC7F4A2428E68797AD75B74DC38 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// InnerCoroutine().Coroutine();
		ETVoid_tFB79A53EB5B1FFC7F4A2428E68797AD75B74DC38 L_0;
		L_0 = ETTask_InnerCoroutine_m9537CC74C1428C6737E19D55BDB81524276FAEC3(__this, NULL);
		V_0 = L_0;
		ETVoid_Coroutine_m7D69369538267F547E8D8AF8467A2806C5F6E6DA((&V_0), NULL);
		// }
		return;
	}
}
// ET.ETTask ET.ETTask::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* ETTask_GetAwaiter_m18704BF1223130E4441BED1DF784F584052E9F46 (ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* __this, const RuntimeMethod* method) 
{
	{
		// return this;
		return __this;
	}
}
// System.Boolean ET.ETTask::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ETTask_get_IsCompleted_mC46408CF8CDBC0122E679473EDB14A9BA55A13F2 (ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* __this, const RuntimeMethod* method) 
{
	{
		// return this.state != AwaiterStatus.Pending;
		uint8_t L_0 = __this->___state_3;
		return (bool)((!(((uint32_t)L_0) <= ((uint32_t)0)))? 1 : 0);
	}
}
// System.Void ET.ETTask::UnsafeOnCompleted(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETTask_UnsafeOnCompleted_mEB36CE8A9B0FE7806F997833703CD0227ECCB9B9 (ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___action0, const RuntimeMethod* method) 
{
	{
		// if (this.state != AwaiterStatus.Pending)
		uint8_t L_0 = __this->___state_3;
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		// action?.Invoke();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = ___action0;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = ___action0;
		NullCheck(L_2);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_2, NULL);
	}

IL_0011:
	{
		// return;
		return;
	}

IL_0012:
	{
		// this.callback = action;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___action0;
		__this->___callback_4 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___callback_4), (void*)L_3);
		// }
		return;
	}
}
// System.Void ET.ETTask::OnCompleted(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETTask_OnCompleted_mABFE6AB74C5544758EA97F5E87E0C5FB90D4136D (ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___action0, const RuntimeMethod* method) 
{
	{
		// this.UnsafeOnCompleted(action);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ___action0;
		ETTask_UnsafeOnCompleted_mEB36CE8A9B0FE7806F997833703CD0227ECCB9B9(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void ET.ETTask::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETTask_GetResult_m4025996962517219AB63CD35458CEE581DF064E6 (ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t V_0 = 0;
	ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* G_B6_0 = NULL;
	ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* G_B5_0 = NULL;
	{
		// switch (this.state)
		uint8_t L_0 = __this->___state_3;
		V_0 = L_0;
		uint8_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		uint8_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0018;
		}
	}
	{
		goto IL_003b;
	}

IL_0011:
	{
		// this.Recycle();
		ETTask_Recycle_mCA3F18646D07DB9EA6E2BA4AFBDAAE3A1E27CD36(__this, NULL);
		// break;
		return;
	}

IL_0018:
	{
		// ExceptionDispatchInfo c = this.callback as ExceptionDispatchInfo;
		RuntimeObject* L_3 = __this->___callback_4;
		// this.callback = null;
		__this->___callback_4 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___callback_4), (void*)NULL);
		// this.Recycle();
		ETTask_Recycle_mCA3F18646D07DB9EA6E2BA4AFBDAAE3A1E27CD36(__this, NULL);
		// c?.Throw();
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_4 = ((ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757*)IsInstSealed((RuntimeObject*)L_3, ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757_il2cpp_TypeInfo_var));
		G_B5_0 = L_4;
		if (L_4)
		{
			G_B6_0 = L_4;
			goto IL_0035;
		}
	}
	{
		return;
	}

IL_0035:
	{
		NullCheck(G_B6_0);
		ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(G_B6_0, NULL);
		// break;
		return;
	}

IL_003b:
	{
		// throw new NotSupportedException("ETTask does not allow call GetResult directly when task not completed. Please use 'await'.");
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_5 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral59FB7F99FEC6B81FAA83ECC3FE9929AB4E5FB0CD)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ETTask_GetResult_m4025996962517219AB63CD35458CEE581DF064E6_RuntimeMethod_var)));
	}
}
// System.Void ET.ETTask::SetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETTask_SetResult_mB00B78BA4E84709D15FBB01D553BB9256E62B926 (ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B4_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B3_0 = NULL;
	{
		// if (this.state != AwaiterStatus.Pending)
		uint8_t L_0 = __this->___state_3;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// throw new InvalidOperationException("TaskT_TransitionToFinal_AlreadyCompleted");
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7940B1E0CEB23F95FA72EF03CC10A2C9BDF454A3)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ETTask_SetResult_mB00B78BA4E84709D15FBB01D553BB9256E62B926_RuntimeMethod_var)));
	}

IL_0013:
	{
		// this.state = AwaiterStatus.Succeeded;
		__this->___state_3 = 1;
		// Action c = this.callback as Action;
		RuntimeObject* L_2 = __this->___callback_4;
		// this.callback = null;
		__this->___callback_4 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___callback_4), (void*)NULL);
		// c?.Invoke();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)IsInstSealed((RuntimeObject*)L_2, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		G_B3_0 = L_3;
		if (L_3)
		{
			G_B4_0 = L_3;
			goto IL_0031;
		}
	}
	{
		return;
	}

IL_0031:
	{
		NullCheck(G_B4_0);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(G_B4_0, NULL);
		// }
		return;
	}
}
// System.Void ET.ETTask::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETTask_SetException_m15F23C04CCB4BD5B9A5AB75928C823A93F9B6176 (ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* __this, Exception_t* ___e0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B4_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B3_0 = NULL;
	{
		// if (this.state != AwaiterStatus.Pending)
		uint8_t L_0 = __this->___state_3;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// throw new InvalidOperationException("TaskT_TransitionToFinal_AlreadyCompleted");
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7940B1E0CEB23F95FA72EF03CC10A2C9BDF454A3)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ETTask_SetException_m15F23C04CCB4BD5B9A5AB75928C823A93F9B6176_RuntimeMethod_var)));
	}

IL_0013:
	{
		// this.state = AwaiterStatus.Faulted;
		__this->___state_3 = 2;
		// Action c = this.callback as Action;
		RuntimeObject* L_2 = __this->___callback_4;
		// this.callback = ExceptionDispatchInfo.Capture(e);
		Exception_t* L_3 = ___e0;
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_4;
		L_4 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_3, NULL);
		__this->___callback_4 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___callback_4), (void*)L_4);
		// c?.Invoke();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_5 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)IsInstSealed((RuntimeObject*)L_2, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		G_B3_0 = L_5;
		if (L_5)
		{
			G_B4_0 = L_5;
			goto IL_0036;
		}
	}
	{
		return;
	}

IL_0036:
	{
		NullCheck(G_B4_0);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(G_B4_0, NULL);
		// }
		return;
	}
}
// System.Void ET.ETTask::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETTask__cctor_mD401A30568AA00D071D6A2B077F035D492882083 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1__ctor_m2362F2BF6D5B2DCD823FEAE7D34AF9915581DC79_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_tD81FB1FE4DD008B5193D0BDAA9B48AEDE8DD41A4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly Queue<ETTask> queue = new Queue<ETTask>();
		Queue_1_tD81FB1FE4DD008B5193D0BDAA9B48AEDE8DD41A4* L_0 = (Queue_1_tD81FB1FE4DD008B5193D0BDAA9B48AEDE8DD41A4*)il2cpp_codegen_object_new(Queue_1_tD81FB1FE4DD008B5193D0BDAA9B48AEDE8DD41A4_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Queue_1__ctor_m2362F2BF6D5B2DCD823FEAE7D34AF9915581DC79(L_0, Queue_1__ctor_m2362F2BF6D5B2DCD823FEAE7D34AF9915581DC79_RuntimeMethod_var);
		((ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_StaticFields*)il2cpp_codegen_static_fields_for(ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_il2cpp_TypeInfo_var))->___queue_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_StaticFields*)il2cpp_codegen_static_fields_for(ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_il2cpp_TypeInfo_var))->___queue_1), (void*)L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ET.ETTask/<InnerCoroutine>d__10::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInnerCoroutineU3Ed__10_MoveNext_m215D18BC3B798B1543AECCE15AA994D76697901E (U3CInnerCoroutineU3Ed__10_t2D601F7100272EA0BB5D608AFE81D658FDE14042* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncETVoidMethodBuilder_AwaitUnsafeOnCompleted_TisETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_TisU3CInnerCoroutineU3Ed__10_t2D601F7100272EA0BB5D608AFE81D658FDE14042_mB852682DBD2821E3CB287E509A776C494FF7EE79_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* V_1 = NULL;
	ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* V_2 = NULL;
	Exception_t* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_0040_1;
			}
		}
		{
			// await this;
			ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_3 = V_1;
			NullCheck(L_3);
			ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_4;
			L_4 = ETTask_GetAwaiter_m18704BF1223130E4441BED1DF784F584052E9F46(L_3, NULL);
			V_2 = L_4;
			ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_5 = V_2;
			NullCheck(L_5);
			bool L_6;
			L_6 = ETTask_get_IsCompleted_mC46408CF8CDBC0122E679473EDB14A9BA55A13F2(L_5, NULL);
			if (L_6)
			{
				goto IL_005c_1;
			}
		}
		{
			int32_t L_7 = 0;
			V_0 = L_7;
			__this->___U3CU3E1__state_0 = L_7;
			ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_8 = V_2;
			__this->___U3CU3Eu__1_3 = L_8;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Eu__1_3), (void*)L_8);
			AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203* L_9 = (&__this->___U3CU3Et__builder_1);
			AsyncETVoidMethodBuilder_AwaitUnsafeOnCompleted_TisETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_TisU3CInnerCoroutineU3Ed__10_t2D601F7100272EA0BB5D608AFE81D658FDE14042_mB852682DBD2821E3CB287E509A776C494FF7EE79(L_9, (&V_2), __this, AsyncETVoidMethodBuilder_AwaitUnsafeOnCompleted_TisETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_TisU3CInnerCoroutineU3Ed__10_t2D601F7100272EA0BB5D608AFE81D658FDE14042_mB852682DBD2821E3CB287E509A776C494FF7EE79_RuntimeMethod_var);
			goto IL_008e;
		}

IL_0040_1:
		{
			RuntimeObject* L_10 = __this->___U3CU3Eu__1_3;
			V_2 = ((ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9*)CastclassClass((RuntimeObject*)L_10, ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_il2cpp_TypeInfo_var));
			__this->___U3CU3Eu__1_3 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Eu__1_3), (void*)NULL);
			int32_t L_11 = (-1);
			V_0 = L_11;
			__this->___U3CU3E1__state_0 = L_11;
		}

IL_005c_1:
		{
			ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_12 = V_2;
			NullCheck(L_12);
			ETTask_GetResult_m4025996962517219AB63CD35458CEE581DF064E6(L_12, NULL);
			goto IL_007b;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0064;
		}
		throw e;
	}

CATCH_0064:
	{// begin catch(System.Exception)
		V_3 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203* L_13 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_14 = V_3;
		AsyncETVoidMethodBuilder_SetException_m7F5356721EF2BCB40149B2F55B8E2590699EBAF5(L_13, L_14, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_008e;
	}// end catch (depth: 1)

IL_007b:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203* L_15 = (&__this->___U3CU3Et__builder_1);
		AsyncETVoidMethodBuilder_SetResult_m290D2A1FF93C5EB907BE4243F0E62E0CA49E760A(L_15, NULL);
	}

IL_008e:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CInnerCoroutineU3Ed__10_MoveNext_m215D18BC3B798B1543AECCE15AA994D76697901E_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CInnerCoroutineU3Ed__10_t2D601F7100272EA0BB5D608AFE81D658FDE14042* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CInnerCoroutineU3Ed__10_t2D601F7100272EA0BB5D608AFE81D658FDE14042*>(__this + _offset);
	U3CInnerCoroutineU3Ed__10_MoveNext_m215D18BC3B798B1543AECCE15AA994D76697901E(_thisAdjusted, method);
}
// System.Void ET.ETTask/<InnerCoroutine>d__10::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInnerCoroutineU3Ed__10_SetStateMachine_m467597CFCFE1144E0EA75800DD5A05FA47271517 (U3CInnerCoroutineU3Ed__10_t2D601F7100272EA0BB5D608AFE81D658FDE14042* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	{
		AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncETVoidMethodBuilder_SetStateMachine_m6A0835E3894AAEE9D100F17C6415C8C2DF7B5A78(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CInnerCoroutineU3Ed__10_SetStateMachine_m467597CFCFE1144E0EA75800DD5A05FA47271517_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CInnerCoroutineU3Ed__10_t2D601F7100272EA0BB5D608AFE81D658FDE14042* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CInnerCoroutineU3Ed__10_t2D601F7100272EA0BB5D608AFE81D658FDE14042*>(__this + _offset);
	U3CInnerCoroutineU3Ed__10_SetStateMachine_m467597CFCFE1144E0EA75800DD5A05FA47271517(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// ET.ETTaskCompleted ET.ETTaskCompleted::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ETTaskCompleted_tC7E784791E37157A69DC06ADE2C07D5F0BD577A1 ETTaskCompleted_GetAwaiter_mE3AEE62423C7E74E5BA5E4298F51A94537291113 (ETTaskCompleted_tC7E784791E37157A69DC06ADE2C07D5F0BD577A1* __this, const RuntimeMethod* method) 
{
	{
		// return this;
		ETTaskCompleted_tC7E784791E37157A69DC06ADE2C07D5F0BD577A1 L_0 = (*(ETTaskCompleted_tC7E784791E37157A69DC06ADE2C07D5F0BD577A1*)__this);
		return L_0;
	}
}
IL2CPP_EXTERN_C  ETTaskCompleted_tC7E784791E37157A69DC06ADE2C07D5F0BD577A1 ETTaskCompleted_GetAwaiter_mE3AEE62423C7E74E5BA5E4298F51A94537291113_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ETTaskCompleted_tC7E784791E37157A69DC06ADE2C07D5F0BD577A1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ETTaskCompleted_tC7E784791E37157A69DC06ADE2C07D5F0BD577A1*>(__this + _offset);
	ETTaskCompleted_tC7E784791E37157A69DC06ADE2C07D5F0BD577A1 _returnValue;
	_returnValue = ETTaskCompleted_GetAwaiter_mE3AEE62423C7E74E5BA5E4298F51A94537291113(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean ET.ETTaskCompleted::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ETTaskCompleted_get_IsCompleted_mF124D814B224FC03ABA766B4DD6D32129EB65FC0 (ETTaskCompleted_tC7E784791E37157A69DC06ADE2C07D5F0BD577A1* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsCompleted => true;
		return (bool)1;
	}
}
IL2CPP_EXTERN_C  bool ETTaskCompleted_get_IsCompleted_mF124D814B224FC03ABA766B4DD6D32129EB65FC0_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ETTaskCompleted_tC7E784791E37157A69DC06ADE2C07D5F0BD577A1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ETTaskCompleted_tC7E784791E37157A69DC06ADE2C07D5F0BD577A1*>(__this + _offset);
	bool _returnValue;
	_returnValue = ETTaskCompleted_get_IsCompleted_mF124D814B224FC03ABA766B4DD6D32129EB65FC0(_thisAdjusted, method);
	return _returnValue;
}
// System.Void ET.ETTaskCompleted::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETTaskCompleted_GetResult_m99982AD00E2DE9170E7A8DCE4314B1DC19C34D50 (ETTaskCompleted_tC7E784791E37157A69DC06ADE2C07D5F0BD577A1* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ETTaskCompleted_GetResult_m99982AD00E2DE9170E7A8DCE4314B1DC19C34D50_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ETTaskCompleted_tC7E784791E37157A69DC06ADE2C07D5F0BD577A1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ETTaskCompleted_tC7E784791E37157A69DC06ADE2C07D5F0BD577A1*>(__this + _offset);
	ETTaskCompleted_GetResult_m99982AD00E2DE9170E7A8DCE4314B1DC19C34D50(_thisAdjusted, method);
}
// System.Void ET.ETTaskCompleted::OnCompleted(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETTaskCompleted_OnCompleted_m46057706E7DDC6C8DB7BCFE28EA25514E43AC067 (ETTaskCompleted_tC7E784791E37157A69DC06ADE2C07D5F0BD577A1* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___continuation0, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ETTaskCompleted_OnCompleted_m46057706E7DDC6C8DB7BCFE28EA25514E43AC067_AdjustorThunk (RuntimeObject* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___continuation0, const RuntimeMethod* method)
{
	ETTaskCompleted_tC7E784791E37157A69DC06ADE2C07D5F0BD577A1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ETTaskCompleted_tC7E784791E37157A69DC06ADE2C07D5F0BD577A1*>(__this + _offset);
	ETTaskCompleted_OnCompleted_m46057706E7DDC6C8DB7BCFE28EA25514E43AC067(_thisAdjusted, ___continuation0, method);
}
// System.Void ET.ETTaskCompleted::UnsafeOnCompleted(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETTaskCompleted_UnsafeOnCompleted_m999B40E9B88E496271C0150F1B7820F01E010BC8 (ETTaskCompleted_tC7E784791E37157A69DC06ADE2C07D5F0BD577A1* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___continuation0, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ETTaskCompleted_UnsafeOnCompleted_m999B40E9B88E496271C0150F1B7820F01E010BC8_AdjustorThunk (RuntimeObject* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___continuation0, const RuntimeMethod* method)
{
	ETTaskCompleted_tC7E784791E37157A69DC06ADE2C07D5F0BD577A1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ETTaskCompleted_tC7E784791E37157A69DC06ADE2C07D5F0BD577A1*>(__this + _offset);
	ETTaskCompleted_UnsafeOnCompleted_m999B40E9B88E496271C0150F1B7820F01E010BC8(_thisAdjusted, ___continuation0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// ET.ETTask`1<System.Boolean> ET.ETTaskHelper::WaitAny(ET.ETTask[],ET.ETCancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ETTask_1_tC3B29B37E823D9C66439D79CE23D65BBFE61686F* ETTaskHelper_WaitAny_mC466E60E854B59D3E40FAF48BC3398E7D9778E87 (ETTaskU5BU5D_t450F7E88953540359721DAAB8A676CF06A7485C8* ___tasks0, ETCancellationToken_tACA8F146EDE95371894D92DF0FD89C07C08886E1* ___cancellationToken1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ETAsyncTaskMethodBuilder_1_Create_mC59CD51B35E4F74B34A0336B1C4D7094B1C17EBD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ETAsyncTaskMethodBuilder_1_Start_TisU3CWaitAnyU3Ed__2_t46A8ED3559C8D2579C2F9E875E382FADDB126E60_m9B5E2E9331F0E05CCE0DFB6FC233632FC9D828D1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ETAsyncTaskMethodBuilder_1_get_Task_mB34D8721E56EE05B2B4AE583DEB758828135BDFF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CWaitAnyU3Ed__2_t46A8ED3559C8D2579C2F9E875E382FADDB126E60 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ETAsyncTaskMethodBuilder_1_t769C7EF52D8DA1B6EBB8B7AEC7B2D7C854730D31 L_0;
		L_0 = ETAsyncTaskMethodBuilder_1_Create_mC59CD51B35E4F74B34A0336B1C4D7094B1C17EBD(ETAsyncTaskMethodBuilder_1_Create_mC59CD51B35E4F74B34A0336B1C4D7094B1C17EBD_RuntimeMethod_var);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___tcs_0), (void*)NULL);
		ETTaskU5BU5D_t450F7E88953540359721DAAB8A676CF06A7485C8* L_1 = ___tasks0;
		(&V_0)->___tasks_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___tasks_2), (void*)L_1);
		ETCancellationToken_tACA8F146EDE95371894D92DF0FD89C07C08886E1* L_2 = ___cancellationToken1;
		(&V_0)->___cancellationToken_3 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___cancellationToken_3), (void*)L_2);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		ETAsyncTaskMethodBuilder_1_t769C7EF52D8DA1B6EBB8B7AEC7B2D7C854730D31* L_3 = (&(&V_0)->___U3CU3Et__builder_1);
		ETAsyncTaskMethodBuilder_1_Start_TisU3CWaitAnyU3Ed__2_t46A8ED3559C8D2579C2F9E875E382FADDB126E60_m9B5E2E9331F0E05CCE0DFB6FC233632FC9D828D1(L_3, (&V_0), ETAsyncTaskMethodBuilder_1_Start_TisU3CWaitAnyU3Ed__2_t46A8ED3559C8D2579C2F9E875E382FADDB126E60_m9B5E2E9331F0E05CCE0DFB6FC233632FC9D828D1_RuntimeMethod_var);
		ETAsyncTaskMethodBuilder_1_t769C7EF52D8DA1B6EBB8B7AEC7B2D7C854730D31* L_4 = (&(&V_0)->___U3CU3Et__builder_1);
		ETTask_1_tC3B29B37E823D9C66439D79CE23D65BBFE61686F* L_5;
		L_5 = ETAsyncTaskMethodBuilder_1_get_Task_mB34D8721E56EE05B2B4AE583DEB758828135BDFF_inline(L_4, ETAsyncTaskMethodBuilder_1_get_Task_mB34D8721E56EE05B2B4AE583DEB758828135BDFF_RuntimeMethod_var);
		return L_5;
	}
}
// ET.ETTask`1<System.Boolean> ET.ETTaskHelper::WaitAll(ET.ETTask[],ET.ETCancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ETTask_1_tC3B29B37E823D9C66439D79CE23D65BBFE61686F* ETTaskHelper_WaitAll_m0EA645D4B046C46119544E2F8CBA45A966736A62 (ETTaskU5BU5D_t450F7E88953540359721DAAB8A676CF06A7485C8* ___tasks0, ETCancellationToken_tACA8F146EDE95371894D92DF0FD89C07C08886E1* ___cancellationToken1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ETAsyncTaskMethodBuilder_1_Create_mC59CD51B35E4F74B34A0336B1C4D7094B1C17EBD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ETAsyncTaskMethodBuilder_1_Start_TisU3CWaitAllU3Ed__5_tA50206C2AA88F82EB79AE3021E9EDE47B6455DED_m2DF74E4D7018815157D5A73C472339BAF9650F23_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ETAsyncTaskMethodBuilder_1_get_Task_mB34D8721E56EE05B2B4AE583DEB758828135BDFF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CWaitAllU3Ed__5_tA50206C2AA88F82EB79AE3021E9EDE47B6455DED V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ETAsyncTaskMethodBuilder_1_t769C7EF52D8DA1B6EBB8B7AEC7B2D7C854730D31 L_0;
		L_0 = ETAsyncTaskMethodBuilder_1_Create_mC59CD51B35E4F74B34A0336B1C4D7094B1C17EBD(ETAsyncTaskMethodBuilder_1_Create_mC59CD51B35E4F74B34A0336B1C4D7094B1C17EBD_RuntimeMethod_var);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___tcs_0), (void*)NULL);
		ETTaskU5BU5D_t450F7E88953540359721DAAB8A676CF06A7485C8* L_1 = ___tasks0;
		(&V_0)->___tasks_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___tasks_2), (void*)L_1);
		ETCancellationToken_tACA8F146EDE95371894D92DF0FD89C07C08886E1* L_2 = ___cancellationToken1;
		(&V_0)->___cancellationToken_3 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___cancellationToken_3), (void*)L_2);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		ETAsyncTaskMethodBuilder_1_t769C7EF52D8DA1B6EBB8B7AEC7B2D7C854730D31* L_3 = (&(&V_0)->___U3CU3Et__builder_1);
		ETAsyncTaskMethodBuilder_1_Start_TisU3CWaitAllU3Ed__5_tA50206C2AA88F82EB79AE3021E9EDE47B6455DED_m2DF74E4D7018815157D5A73C472339BAF9650F23(L_3, (&V_0), ETAsyncTaskMethodBuilder_1_Start_TisU3CWaitAllU3Ed__5_tA50206C2AA88F82EB79AE3021E9EDE47B6455DED_m2DF74E4D7018815157D5A73C472339BAF9650F23_RuntimeMethod_var);
		ETAsyncTaskMethodBuilder_1_t769C7EF52D8DA1B6EBB8B7AEC7B2D7C854730D31* L_4 = (&(&V_0)->___U3CU3Et__builder_1);
		ETTask_1_tC3B29B37E823D9C66439D79CE23D65BBFE61686F* L_5;
		L_5 = ETAsyncTaskMethodBuilder_1_get_Task_mB34D8721E56EE05B2B4AE583DEB758828135BDFF_inline(L_4, ETAsyncTaskMethodBuilder_1_get_Task_mB34D8721E56EE05B2B4AE583DEB758828135BDFF_RuntimeMethod_var);
		return L_5;
	}
}
// ET.ETTask`1<System.Boolean> ET.ETTaskHelper::WaitAll(System.Collections.Generic.List`1<ET.ETTask>,ET.ETCancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ETTask_1_tC3B29B37E823D9C66439D79CE23D65BBFE61686F* ETTaskHelper_WaitAll_mCE6037D034D3C10621852DAFBBBA44213778966F (List_1_tA4F47AA2446E3F808EABA13A13F5A8A05B4A5101* ___tasks0, ETCancellationToken_tACA8F146EDE95371894D92DF0FD89C07C08886E1* ___cancellationToken1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ETAsyncTaskMethodBuilder_1_Create_mC59CD51B35E4F74B34A0336B1C4D7094B1C17EBD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ETAsyncTaskMethodBuilder_1_Start_TisU3CWaitAllU3Ed__6_t73CAD2CCB5423A31C85967FB33B23FE96219FFBF_m37FBFFC9DA493FE36032DC4BC84A1F9A4B5DF41D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ETAsyncTaskMethodBuilder_1_get_Task_mB34D8721E56EE05B2B4AE583DEB758828135BDFF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CWaitAllU3Ed__6_t73CAD2CCB5423A31C85967FB33B23FE96219FFBF V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ETAsyncTaskMethodBuilder_1_t769C7EF52D8DA1B6EBB8B7AEC7B2D7C854730D31 L_0;
		L_0 = ETAsyncTaskMethodBuilder_1_Create_mC59CD51B35E4F74B34A0336B1C4D7094B1C17EBD(ETAsyncTaskMethodBuilder_1_Create_mC59CD51B35E4F74B34A0336B1C4D7094B1C17EBD_RuntimeMethod_var);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___tcs_0), (void*)NULL);
		List_1_tA4F47AA2446E3F808EABA13A13F5A8A05B4A5101* L_1 = ___tasks0;
		(&V_0)->___tasks_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___tasks_2), (void*)L_1);
		ETCancellationToken_tACA8F146EDE95371894D92DF0FD89C07C08886E1* L_2 = ___cancellationToken1;
		(&V_0)->___cancellationToken_3 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___cancellationToken_3), (void*)L_2);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		ETAsyncTaskMethodBuilder_1_t769C7EF52D8DA1B6EBB8B7AEC7B2D7C854730D31* L_3 = (&(&V_0)->___U3CU3Et__builder_1);
		ETAsyncTaskMethodBuilder_1_Start_TisU3CWaitAllU3Ed__6_t73CAD2CCB5423A31C85967FB33B23FE96219FFBF_m37FBFFC9DA493FE36032DC4BC84A1F9A4B5DF41D(L_3, (&V_0), ETAsyncTaskMethodBuilder_1_Start_TisU3CWaitAllU3Ed__6_t73CAD2CCB5423A31C85967FB33B23FE96219FFBF_m37FBFFC9DA493FE36032DC4BC84A1F9A4B5DF41D_RuntimeMethod_var);
		ETAsyncTaskMethodBuilder_1_t769C7EF52D8DA1B6EBB8B7AEC7B2D7C854730D31* L_4 = (&(&V_0)->___U3CU3Et__builder_1);
		ETTask_1_tC3B29B37E823D9C66439D79CE23D65BBFE61686F* L_5;
		L_5 = ETAsyncTaskMethodBuilder_1_get_Task_mB34D8721E56EE05B2B4AE583DEB758828135BDFF_inline(L_4, ETAsyncTaskMethodBuilder_1_get_Task_mB34D8721E56EE05B2B4AE583DEB758828135BDFF_RuntimeMethod_var);
		return L_5;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ET.ETTaskHelper/CoroutineBlocker::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoroutineBlocker__ctor_mC2DEAA1C928DA22578C4C3F820DD758ECAF79A52 (CoroutineBlocker_tB36E126059540FB732976F4A8DEC06EF8A96634A* __this, int32_t ___count0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m51111317D140CE9FAD15255586ACC19468E8CB16_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tA4F47AA2446E3F808EABA13A13F5A8A05B4A5101_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private List<ETTask> tcss = new List<ETTask>();
		List_1_tA4F47AA2446E3F808EABA13A13F5A8A05B4A5101* L_0 = (List_1_tA4F47AA2446E3F808EABA13A13F5A8A05B4A5101*)il2cpp_codegen_object_new(List_1_tA4F47AA2446E3F808EABA13A13F5A8A05B4A5101_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m51111317D140CE9FAD15255586ACC19468E8CB16(L_0, List_1__ctor_m51111317D140CE9FAD15255586ACC19468E8CB16_RuntimeMethod_var);
		__this->___tcss_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tcss_1), (void*)L_0);
		// public CoroutineBlocker(int count)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.count = count;
		int32_t L_1 = ___count0;
		__this->___count_0 = L_1;
		// }
		return;
	}
}
// ET.ETTask ET.ETTaskHelper/CoroutineBlocker::WaitAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* CoroutineBlocker_WaitAsync_m73943BDA099AA93BBD5EAEEA957B1FA94706C3DF (CoroutineBlocker_tB36E126059540FB732976F4A8DEC06EF8A96634A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ETAsyncTaskMethodBuilder_Start_TisU3CWaitAsyncU3Ed__3_t872511C7B0611473DF4F43EC4CADCB9D7C93CE5F_m670F06EAE7A04C739D1DB3C840951E4901B47226_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CWaitAsyncU3Ed__3_t872511C7B0611473DF4F43EC4CADCB9D7C93CE5F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ETAsyncTaskMethodBuilder_t6539D4B6A1CB6F6388453211D928A26188B68B0C L_0;
		L_0 = ETAsyncTaskMethodBuilder_Create_m0AFDF846A1859E2424FB91848080B693A7900449(NULL);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___tcs_0), (void*)NULL);
		(&V_0)->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this_2), (void*)__this);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		ETAsyncTaskMethodBuilder_t6539D4B6A1CB6F6388453211D928A26188B68B0C* L_1 = (&(&V_0)->___U3CU3Et__builder_1);
		ETAsyncTaskMethodBuilder_Start_TisU3CWaitAsyncU3Ed__3_t872511C7B0611473DF4F43EC4CADCB9D7C93CE5F_m670F06EAE7A04C739D1DB3C840951E4901B47226(L_1, (&V_0), ETAsyncTaskMethodBuilder_Start_TisU3CWaitAsyncU3Ed__3_t872511C7B0611473DF4F43EC4CADCB9D7C93CE5F_m670F06EAE7A04C739D1DB3C840951E4901B47226_RuntimeMethod_var);
		ETAsyncTaskMethodBuilder_t6539D4B6A1CB6F6388453211D928A26188B68B0C* L_2 = (&(&V_0)->___U3CU3Et__builder_1);
		ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_3;
		L_3 = ETAsyncTaskMethodBuilder_get_Task_mB1EE6961178A9200208ED6EAF4B16C84A579421F_inline(L_2, NULL);
		return L_3;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ET.ETTaskHelper/CoroutineBlocker/<WaitAsync>d__3::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitAsyncU3Ed__3_MoveNext_m8536558CF33DCA7061FF6777CE8464293F7B5096 (U3CWaitAsyncU3Ed__3_t872511C7B0611473DF4F43EC4CADCB9D7C93CE5F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ETAsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_TisU3CWaitAsyncU3Ed__3_t872511C7B0611473DF4F43EC4CADCB9D7C93CE5F_m31F95AC67B3DB2B292CF87379AA2834815AC631C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m2CF219B461F67CCD06F99FF3AFDEADC48A1BD26C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m8E225A51A6FD5B638EB3D77D976A473FB1C010B2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mDE3732995809E5A4FABC3ACE34ADB9EDA62A6B09_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m68A5223D8F087592B1404CCD07FAE88BEC924FB3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m058832077A5E305D1A30987EDF5EF94ABB118AB2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	CoroutineBlocker_tB36E126059540FB732976F4A8DEC06EF8A96634A* V_1 = NULL;
	ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* V_2 = NULL;
	List_1_tA4F47AA2446E3F808EABA13A13F5A8A05B4A5101* V_3 = NULL;
	Enumerator_t05F9D6B822BE78199481DA0AA4B6B04FCC4968E9 V_4;
	memset((&V_4), 0, sizeof(V_4));
	ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* V_5 = NULL;
	Exception_t* V_6 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		CoroutineBlocker_tB36E126059540FB732976F4A8DEC06EF8A96634A* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_00c3_1;
			}
		}
		{
			// --this.count;
			CoroutineBlocker_tB36E126059540FB732976F4A8DEC06EF8A96634A* L_3 = V_1;
			CoroutineBlocker_tB36E126059540FB732976F4A8DEC06EF8A96634A* L_4 = V_1;
			NullCheck(L_4);
			int32_t L_5 = L_4->___count_0;
			NullCheck(L_3);
			L_3->___count_0 = ((int32_t)il2cpp_codegen_subtract(L_5, 1));
			// if (this.count < 0)
			CoroutineBlocker_tB36E126059540FB732976F4A8DEC06EF8A96634A* L_6 = V_1;
			NullCheck(L_6);
			int32_t L_7 = L_6->___count_0;
			if ((((int32_t)L_7) >= ((int32_t)0)))
			{
				goto IL_0030_1;
			}
		}
		{
			// return;
			goto IL_0102;
		}

IL_0030_1:
		{
			// if (this.count == 0)
			CoroutineBlocker_tB36E126059540FB732976F4A8DEC06EF8A96634A* L_8 = V_1;
			NullCheck(L_8);
			int32_t L_9 = L_8->___count_0;
			if (L_9)
			{
				goto IL_007e_1;
			}
		}
		{
			// List<ETTask> t = this.tcss;
			CoroutineBlocker_tB36E126059540FB732976F4A8DEC06EF8A96634A* L_10 = V_1;
			NullCheck(L_10);
			List_1_tA4F47AA2446E3F808EABA13A13F5A8A05B4A5101* L_11 = L_10->___tcss_1;
			V_3 = L_11;
			// this.tcss = null;
			CoroutineBlocker_tB36E126059540FB732976F4A8DEC06EF8A96634A* L_12 = V_1;
			NullCheck(L_12);
			L_12->___tcss_1 = (List_1_tA4F47AA2446E3F808EABA13A13F5A8A05B4A5101*)NULL;
			Il2CppCodeGenWriteBarrier((void**)(&L_12->___tcss_1), (void*)(List_1_tA4F47AA2446E3F808EABA13A13F5A8A05B4A5101*)NULL);
			// foreach (ETTask ttcs in t)
			List_1_tA4F47AA2446E3F808EABA13A13F5A8A05B4A5101* L_13 = V_3;
			NullCheck(L_13);
			Enumerator_t05F9D6B822BE78199481DA0AA4B6B04FCC4968E9 L_14;
			L_14 = List_1_GetEnumerator_m058832077A5E305D1A30987EDF5EF94ABB118AB2(L_13, List_1_GetEnumerator_m058832077A5E305D1A30987EDF5EF94ABB118AB2_RuntimeMethod_var);
			V_4 = L_14;
		}
		{
			auto __finallyBlock = il2cpp::utils::Finally([&]
			{

FINALLY_0067_1:
				{// begin finally (depth: 2)
					{
						int32_t L_15 = V_0;
						if ((((int32_t)L_15) >= ((int32_t)0)))
						{
							goto IL_0078_1;
						}
					}
					{
						Enumerator_Dispose_m2CF219B461F67CCD06F99FF3AFDEADC48A1BD26C((&V_4), Enumerator_Dispose_m2CF219B461F67CCD06F99FF3AFDEADC48A1BD26C_RuntimeMethod_var);
					}

IL_0078_1:
					{
						return;
					}
				}// end finally (depth: 2)
			});
			try
			{// begin try (depth: 2)
				{
					goto IL_005c_2;
				}

IL_0050_2:
				{
					// foreach (ETTask ttcs in t)
					ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_16;
					L_16 = Enumerator_get_Current_mDE3732995809E5A4FABC3ACE34ADB9EDA62A6B09_inline((&V_4), Enumerator_get_Current_mDE3732995809E5A4FABC3ACE34ADB9EDA62A6B09_RuntimeMethod_var);
					// ttcs.SetResult();
					NullCheck(L_16);
					ETTask_SetResult_mB00B78BA4E84709D15FBB01D553BB9256E62B926(L_16, NULL);
				}

IL_005c_2:
				{
					// foreach (ETTask ttcs in t)
					bool L_17;
					L_17 = Enumerator_MoveNext_m8E225A51A6FD5B638EB3D77D976A473FB1C010B2((&V_4), Enumerator_MoveNext_m8E225A51A6FD5B638EB3D77D976A473FB1C010B2_RuntimeMethod_var);
					if (L_17)
					{
						goto IL_0050_2;
					}
				}
				{
					goto IL_0079_1;
				}
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				__finallyBlock.StoreException(e.ex);
			}
		}

IL_0079_1:
		{
			// return;
			goto IL_0102;
		}

IL_007e_1:
		{
			// ETTask tcs = ETTask.Create(true);
			il2cpp_codegen_runtime_class_init_inline(ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_il2cpp_TypeInfo_var);
			ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_18;
			L_18 = ETTask_Create_mE2D8362BDB2030D3D4345BE6D68DDD7AB7E1F7BE((bool)1, NULL);
			V_2 = L_18;
			// tcss.Add(tcs);
			CoroutineBlocker_tB36E126059540FB732976F4A8DEC06EF8A96634A* L_19 = V_1;
			NullCheck(L_19);
			List_1_tA4F47AA2446E3F808EABA13A13F5A8A05B4A5101* L_20 = L_19->___tcss_1;
			ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_21 = V_2;
			NullCheck(L_20);
			List_1_Add_m68A5223D8F087592B1404CCD07FAE88BEC924FB3_inline(L_20, L_21, List_1_Add_m68A5223D8F087592B1404CCD07FAE88BEC924FB3_RuntimeMethod_var);
			// await tcs;
			ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_22 = V_2;
			NullCheck(L_22);
			ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_23;
			L_23 = ETTask_GetAwaiter_m18704BF1223130E4441BED1DF784F584052E9F46(L_22, NULL);
			V_5 = L_23;
			ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_24 = V_5;
			NullCheck(L_24);
			bool L_25;
			L_25 = ETTask_get_IsCompleted_mC46408CF8CDBC0122E679473EDB14A9BA55A13F2(L_24, NULL);
			if (L_25)
			{
				goto IL_00e0_1;
			}
		}
		{
			int32_t L_26 = 0;
			V_0 = L_26;
			__this->___U3CU3E1__state_0 = L_26;
			ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_27 = V_5;
			__this->___U3CU3Eu__1_3 = L_27;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Eu__1_3), (void*)L_27);
			ETAsyncTaskMethodBuilder_t6539D4B6A1CB6F6388453211D928A26188B68B0C* L_28 = (&__this->___U3CU3Et__builder_1);
			ETAsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_TisU3CWaitAsyncU3Ed__3_t872511C7B0611473DF4F43EC4CADCB9D7C93CE5F_m31F95AC67B3DB2B292CF87379AA2834815AC631C(L_28, (&V_5), __this, ETAsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_TisU3CWaitAsyncU3Ed__3_t872511C7B0611473DF4F43EC4CADCB9D7C93CE5F_m31F95AC67B3DB2B292CF87379AA2834815AC631C_RuntimeMethod_var);
			goto IL_0115;
		}

IL_00c3_1:
		{
			RuntimeObject* L_29 = __this->___U3CU3Eu__1_3;
			V_5 = ((ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9*)CastclassClass((RuntimeObject*)L_29, ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_il2cpp_TypeInfo_var));
			__this->___U3CU3Eu__1_3 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Eu__1_3), (void*)NULL);
			int32_t L_30 = (-1);
			V_0 = L_30;
			__this->___U3CU3E1__state_0 = L_30;
		}

IL_00e0_1:
		{
			ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_31 = V_5;
			NullCheck(L_31);
			ETTask_GetResult_m4025996962517219AB63CD35458CEE581DF064E6(L_31, NULL);
			goto IL_0102;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00e9;
		}
		throw e;
	}

CATCH_00e9:
	{// begin catch(System.Exception)
		V_6 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		ETAsyncTaskMethodBuilder_t6539D4B6A1CB6F6388453211D928A26188B68B0C* L_32 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_33 = V_6;
		ETAsyncTaskMethodBuilder_SetException_mF9A14E1D6F427CF0BD0DC18EBCB318745C5B2A5F(L_32, L_33, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0115;
	}// end catch (depth: 1)

IL_0102:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		ETAsyncTaskMethodBuilder_t6539D4B6A1CB6F6388453211D928A26188B68B0C* L_34 = (&__this->___U3CU3Et__builder_1);
		ETAsyncTaskMethodBuilder_SetResult_m76EACE0F7E3EFD983F292BC5DB8693678E573081(L_34, NULL);
	}

IL_0115:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CWaitAsyncU3Ed__3_MoveNext_m8536558CF33DCA7061FF6777CE8464293F7B5096_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CWaitAsyncU3Ed__3_t872511C7B0611473DF4F43EC4CADCB9D7C93CE5F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CWaitAsyncU3Ed__3_t872511C7B0611473DF4F43EC4CADCB9D7C93CE5F*>(__this + _offset);
	U3CWaitAsyncU3Ed__3_MoveNext_m8536558CF33DCA7061FF6777CE8464293F7B5096(_thisAdjusted, method);
}
// System.Void ET.ETTaskHelper/CoroutineBlocker/<WaitAsync>d__3::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitAsyncU3Ed__3_SetStateMachine_mAB2E22D61B8BA7628DF702242F3EA26D9DCEC660 (U3CWaitAsyncU3Ed__3_t872511C7B0611473DF4F43EC4CADCB9D7C93CE5F* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	{
		ETAsyncTaskMethodBuilder_t6539D4B6A1CB6F6388453211D928A26188B68B0C* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___stateMachine0;
		ETAsyncTaskMethodBuilder_SetStateMachine_mEA437B0708968D310F0DC9BF80D420D59B26AB20(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CWaitAsyncU3Ed__3_SetStateMachine_mAB2E22D61B8BA7628DF702242F3EA26D9DCEC660_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CWaitAsyncU3Ed__3_t872511C7B0611473DF4F43EC4CADCB9D7C93CE5F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CWaitAsyncU3Ed__3_t872511C7B0611473DF4F43EC4CADCB9D7C93CE5F*>(__this + _offset);
	U3CWaitAsyncU3Ed__3_SetStateMachine_mAB2E22D61B8BA7628DF702242F3EA26D9DCEC660(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ET.ETTaskHelper/<>c__DisplayClass2_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0__ctor_m1DCD4067C43B78DCCF930C3E1570835EF438CA26 (U3CU3Ec__DisplayClass2_0_t386188471D23E1BA38A602299DF18C0DE2A95748* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// ET.ETVoid ET.ETTaskHelper/<>c__DisplayClass2_0::<WaitAny>g__RunOneTask|0(ET.ETTask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ETVoid_tFB79A53EB5B1FFC7F4A2428E68797AD75B74DC38 U3CU3Ec__DisplayClass2_0_U3CWaitAnyU3Eg__RunOneTaskU7C0_mEF239870F7E9422BF519CAC2C1C72CB2D1C751C2 (U3CU3Ec__DisplayClass2_0_t386188471D23E1BA38A602299DF18C0DE2A95748* __this, ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* ___task0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncETVoidMethodBuilder_Start_TisU3CU3CWaitAnyU3Eg__RunOneTaskU7C0U3Ed_t911A5630E36FB2DC9DED97E5A4B71B60EB72D00B_mC193C85AA0BFED7A7BE9CC22FD1DF10E986EF8E2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3CWaitAnyU3Eg__RunOneTaskU7C0U3Ed_t911A5630E36FB2DC9DED97E5A4B71B60EB72D00B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203 L_0;
		L_0 = AsyncETVoidMethodBuilder_Create_m9CEDA84619E25BAC3C65FA55A7C6A56FF650F200(NULL);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		(&V_0)->___U3CU3E4__this_3 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this_3), (void*)__this);
		ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_1 = ___task0;
		(&V_0)->___task_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___task_2), (void*)L_1);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203* L_2 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncETVoidMethodBuilder_Start_TisU3CU3CWaitAnyU3Eg__RunOneTaskU7C0U3Ed_t911A5630E36FB2DC9DED97E5A4B71B60EB72D00B_mC193C85AA0BFED7A7BE9CC22FD1DF10E986EF8E2(L_2, (&V_0), AsyncETVoidMethodBuilder_Start_TisU3CU3CWaitAnyU3Eg__RunOneTaskU7C0U3Ed_t911A5630E36FB2DC9DED97E5A4B71B60EB72D00B_mC193C85AA0BFED7A7BE9CC22FD1DF10E986EF8E2_RuntimeMethod_var);
		AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203* L_3 = (&(&V_0)->___U3CU3Et__builder_1);
		ETVoid_tFB79A53EB5B1FFC7F4A2428E68797AD75B74DC38 L_4;
		L_4 = AsyncETVoidMethodBuilder_get_Task_m01D925CDA13749DAF0518204CA06493E8A93EC46(L_3, NULL);
		return L_4;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ET.ETTaskHelper/<>c__DisplayClass2_0/<<WaitAny>g__RunOneTask|0>d::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CWaitAnyU3Eg__RunOneTaskU7C0U3Ed_MoveNext_m0356D0F9555CBF870F7BAEBD138D84C302A906E4 (U3CU3CWaitAnyU3Eg__RunOneTaskU7C0U3Ed_t911A5630E36FB2DC9DED97E5A4B71B60EB72D00B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncETVoidMethodBuilder_AwaitUnsafeOnCompleted_TisETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_TisU3CU3CWaitAnyU3Eg__RunOneTaskU7C0U3Ed_t911A5630E36FB2DC9DED97E5A4B71B60EB72D00B_m705FA038EB48F76E682C55BB6FD82ADE0880D111_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	U3CU3Ec__DisplayClass2_0_t386188471D23E1BA38A602299DF18C0DE2A95748* V_1 = NULL;
	ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* V_2 = NULL;
	Exception_t* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		U3CU3Ec__DisplayClass2_0_t386188471D23E1BA38A602299DF18C0DE2A95748* L_1 = __this->___U3CU3E4__this_3;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_004f_1;
			}
		}
		{
			int32_t L_3 = V_0;
			if ((((int32_t)L_3) == ((int32_t)1)))
			{
				goto IL_00aa_1;
			}
		}
		{
			// await task;
			ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_4 = __this->___task_2;
			NullCheck(L_4);
			ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_5;
			L_5 = ETTask_GetAwaiter_m18704BF1223130E4441BED1DF784F584052E9F46(L_4, NULL);
			V_2 = L_5;
			ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_6 = V_2;
			NullCheck(L_6);
			bool L_7;
			L_7 = ETTask_get_IsCompleted_mC46408CF8CDBC0122E679473EDB14A9BA55A13F2(L_6, NULL);
			if (L_7)
			{
				goto IL_006b_1;
			}
		}
		{
			int32_t L_8 = 0;
			V_0 = L_8;
			__this->___U3CU3E1__state_0 = L_8;
			ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_9 = V_2;
			__this->___U3CU3Eu__1_4 = L_9;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Eu__1_4), (void*)L_9);
			AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203* L_10 = (&__this->___U3CU3Et__builder_1);
			AsyncETVoidMethodBuilder_AwaitUnsafeOnCompleted_TisETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_TisU3CU3CWaitAnyU3Eg__RunOneTaskU7C0U3Ed_t911A5630E36FB2DC9DED97E5A4B71B60EB72D00B_m705FA038EB48F76E682C55BB6FD82ADE0880D111(L_10, (&V_2), __this, AsyncETVoidMethodBuilder_AwaitUnsafeOnCompleted_TisETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_TisU3CU3CWaitAnyU3Eg__RunOneTaskU7C0U3Ed_t911A5630E36FB2DC9DED97E5A4B71B60EB72D00B_m705FA038EB48F76E682C55BB6FD82ADE0880D111_RuntimeMethod_var);
			goto IL_00f8;
		}

IL_004f_1:
		{
			RuntimeObject* L_11 = __this->___U3CU3Eu__1_4;
			V_2 = ((ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9*)CastclassClass((RuntimeObject*)L_11, ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_il2cpp_TypeInfo_var));
			__this->___U3CU3Eu__1_4 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Eu__1_4), (void*)NULL);
			int32_t L_12 = (-1);
			V_0 = L_12;
			__this->___U3CU3E1__state_0 = L_12;
		}

IL_006b_1:
		{
			ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_13 = V_2;
			NullCheck(L_13);
			ETTask_GetResult_m4025996962517219AB63CD35458CEE581DF064E6(L_13, NULL);
			// await coroutineBlocker.WaitAsync();
			U3CU3Ec__DisplayClass2_0_t386188471D23E1BA38A602299DF18C0DE2A95748* L_14 = V_1;
			NullCheck(L_14);
			CoroutineBlocker_tB36E126059540FB732976F4A8DEC06EF8A96634A* L_15 = L_14->___coroutineBlocker_0;
			NullCheck(L_15);
			ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_16;
			L_16 = CoroutineBlocker_WaitAsync_m73943BDA099AA93BBD5EAEEA957B1FA94706C3DF(L_15, NULL);
			NullCheck(L_16);
			ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_17;
			L_17 = ETTask_GetAwaiter_m18704BF1223130E4441BED1DF784F584052E9F46(L_16, NULL);
			V_2 = L_17;
			ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_18 = V_2;
			NullCheck(L_18);
			bool L_19;
			L_19 = ETTask_get_IsCompleted_mC46408CF8CDBC0122E679473EDB14A9BA55A13F2(L_18, NULL);
			if (L_19)
			{
				goto IL_00c6_1;
			}
		}
		{
			int32_t L_20 = 1;
			V_0 = L_20;
			__this->___U3CU3E1__state_0 = L_20;
			ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_21 = V_2;
			__this->___U3CU3Eu__1_4 = L_21;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Eu__1_4), (void*)L_21);
			AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203* L_22 = (&__this->___U3CU3Et__builder_1);
			AsyncETVoidMethodBuilder_AwaitUnsafeOnCompleted_TisETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_TisU3CU3CWaitAnyU3Eg__RunOneTaskU7C0U3Ed_t911A5630E36FB2DC9DED97E5A4B71B60EB72D00B_m705FA038EB48F76E682C55BB6FD82ADE0880D111(L_22, (&V_2), __this, AsyncETVoidMethodBuilder_AwaitUnsafeOnCompleted_TisETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_TisU3CU3CWaitAnyU3Eg__RunOneTaskU7C0U3Ed_t911A5630E36FB2DC9DED97E5A4B71B60EB72D00B_m705FA038EB48F76E682C55BB6FD82ADE0880D111_RuntimeMethod_var);
			goto IL_00f8;
		}

IL_00aa_1:
		{
			RuntimeObject* L_23 = __this->___U3CU3Eu__1_4;
			V_2 = ((ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9*)CastclassClass((RuntimeObject*)L_23, ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_il2cpp_TypeInfo_var));
			__this->___U3CU3Eu__1_4 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Eu__1_4), (void*)NULL);
			int32_t L_24 = (-1);
			V_0 = L_24;
			__this->___U3CU3E1__state_0 = L_24;
		}

IL_00c6_1:
		{
			ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_25 = V_2;
			NullCheck(L_25);
			ETTask_GetResult_m4025996962517219AB63CD35458CEE581DF064E6(L_25, NULL);
			goto IL_00e5;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00ce;
		}
		throw e;
	}

CATCH_00ce:
	{// begin catch(System.Exception)
		V_3 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203* L_26 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_27 = V_3;
		AsyncETVoidMethodBuilder_SetException_m7F5356721EF2BCB40149B2F55B8E2590699EBAF5(L_26, L_27, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00f8;
	}// end catch (depth: 1)

IL_00e5:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203* L_28 = (&__this->___U3CU3Et__builder_1);
		AsyncETVoidMethodBuilder_SetResult_m290D2A1FF93C5EB907BE4243F0E62E0CA49E760A(L_28, NULL);
	}

IL_00f8:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CU3CWaitAnyU3Eg__RunOneTaskU7C0U3Ed_MoveNext_m0356D0F9555CBF870F7BAEBD138D84C302A906E4_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CU3CWaitAnyU3Eg__RunOneTaskU7C0U3Ed_t911A5630E36FB2DC9DED97E5A4B71B60EB72D00B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CU3CWaitAnyU3Eg__RunOneTaskU7C0U3Ed_t911A5630E36FB2DC9DED97E5A4B71B60EB72D00B*>(__this + _offset);
	U3CU3CWaitAnyU3Eg__RunOneTaskU7C0U3Ed_MoveNext_m0356D0F9555CBF870F7BAEBD138D84C302A906E4(_thisAdjusted, method);
}
// System.Void ET.ETTaskHelper/<>c__DisplayClass2_0/<<WaitAny>g__RunOneTask|0>d::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CWaitAnyU3Eg__RunOneTaskU7C0U3Ed_SetStateMachine_m3B316052D34522796950006E79B65A1A56E7B51B (U3CU3CWaitAnyU3Eg__RunOneTaskU7C0U3Ed_t911A5630E36FB2DC9DED97E5A4B71B60EB72D00B* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	{
		AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncETVoidMethodBuilder_SetStateMachine_m6A0835E3894AAEE9D100F17C6415C8C2DF7B5A78(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CU3CWaitAnyU3Eg__RunOneTaskU7C0U3Ed_SetStateMachine_m3B316052D34522796950006E79B65A1A56E7B51B_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CU3CWaitAnyU3Eg__RunOneTaskU7C0U3Ed_t911A5630E36FB2DC9DED97E5A4B71B60EB72D00B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CU3CWaitAnyU3Eg__RunOneTaskU7C0U3Ed_t911A5630E36FB2DC9DED97E5A4B71B60EB72D00B*>(__this + _offset);
	U3CU3CWaitAnyU3Eg__RunOneTaskU7C0U3Ed_SetStateMachine_m3B316052D34522796950006E79B65A1A56E7B51B(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ET.ETTaskHelper/<WaitAny>d__2::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitAnyU3Ed__2_MoveNext_mCFF7A82120B59F76023142DF5EABD63CB153EF35 (U3CWaitAnyU3Ed__2_t46A8ED3559C8D2579C2F9E875E382FADDB126E60* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoroutineBlocker_tB36E126059540FB732976F4A8DEC06EF8A96634A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ETAsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_TisU3CWaitAnyU3Ed__2_t46A8ED3559C8D2579C2F9E875E382FADDB126E60_m0FEF868C38A3064A56A57DAA57CFC787E5656C11_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ETAsyncTaskMethodBuilder_1_SetResult_mBAD14F0004B857E596693C614C5B29587E97021C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass2_0_t386188471D23E1BA38A602299DF18C0DE2A95748_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	U3CU3Ec__DisplayClass2_0_t386188471D23E1BA38A602299DF18C0DE2A95748* V_2 = NULL;
	ETTaskU5BU5D_t450F7E88953540359721DAAB8A676CF06A7485C8* V_3 = NULL;
	int32_t V_4 = 0;
	ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* V_5 = NULL;
	ETVoid_tFB79A53EB5B1FFC7F4A2428E68797AD75B74DC38 V_6;
	memset((&V_6), 0, sizeof(V_6));
	ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* V_7 = NULL;
	Exception_t* V_8 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_009b_1;
			}
		}
		{
			U3CU3Ec__DisplayClass2_0_t386188471D23E1BA38A602299DF18C0DE2A95748* L_2 = (U3CU3Ec__DisplayClass2_0_t386188471D23E1BA38A602299DF18C0DE2A95748*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass2_0_t386188471D23E1BA38A602299DF18C0DE2A95748_il2cpp_TypeInfo_var);
			NullCheck(L_2);
			U3CU3Ec__DisplayClass2_0__ctor_m1DCD4067C43B78DCCF930C3E1570835EF438CA26(L_2, NULL);
			V_2 = L_2;
			// if (tasks.Length == 0)
			ETTaskU5BU5D_t450F7E88953540359721DAAB8A676CF06A7485C8* L_3 = __this->___tasks_2;
			NullCheck(L_3);
			if ((((RuntimeArray*)L_3)->max_length))
			{
				goto IL_0023_1;
			}
		}
		{
			// return false;
			V_1 = (bool)0;
			goto IL_00f5;
		}

IL_0023_1:
		{
			// CoroutineBlocker coroutineBlocker = new CoroutineBlocker(2);
			U3CU3Ec__DisplayClass2_0_t386188471D23E1BA38A602299DF18C0DE2A95748* L_4 = V_2;
			CoroutineBlocker_tB36E126059540FB732976F4A8DEC06EF8A96634A* L_5 = (CoroutineBlocker_tB36E126059540FB732976F4A8DEC06EF8A96634A*)il2cpp_codegen_object_new(CoroutineBlocker_tB36E126059540FB732976F4A8DEC06EF8A96634A_il2cpp_TypeInfo_var);
			NullCheck(L_5);
			CoroutineBlocker__ctor_mC2DEAA1C928DA22578C4C3F820DD758ECAF79A52(L_5, 2, NULL);
			NullCheck(L_4);
			L_4->___coroutineBlocker_0 = L_5;
			Il2CppCodeGenWriteBarrier((void**)(&L_4->___coroutineBlocker_0), (void*)L_5);
			// foreach (ETTask task in tasks)
			ETTaskU5BU5D_t450F7E88953540359721DAAB8A676CF06A7485C8* L_6 = __this->___tasks_2;
			V_3 = L_6;
			V_4 = 0;
			goto IL_0058_1;
		}

IL_003b_1:
		{
			// foreach (ETTask task in tasks)
			ETTaskU5BU5D_t450F7E88953540359721DAAB8A676CF06A7485C8* L_7 = V_3;
			int32_t L_8 = V_4;
			NullCheck(L_7);
			int32_t L_9 = L_8;
			ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
			V_5 = L_10;
			// RunOneTask(task).Coroutine();
			U3CU3Ec__DisplayClass2_0_t386188471D23E1BA38A602299DF18C0DE2A95748* L_11 = V_2;
			ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_12 = V_5;
			NullCheck(L_11);
			ETVoid_tFB79A53EB5B1FFC7F4A2428E68797AD75B74DC38 L_13;
			L_13 = U3CU3Ec__DisplayClass2_0_U3CWaitAnyU3Eg__RunOneTaskU7C0_mEF239870F7E9422BF519CAC2C1C72CB2D1C751C2(L_11, L_12, NULL);
			V_6 = L_13;
			ETVoid_Coroutine_m7D69369538267F547E8D8AF8467A2806C5F6E6DA((&V_6), NULL);
			int32_t L_14 = V_4;
			V_4 = ((int32_t)il2cpp_codegen_add(L_14, 1));
		}

IL_0058_1:
		{
			// foreach (ETTask task in tasks)
			int32_t L_15 = V_4;
			ETTaskU5BU5D_t450F7E88953540359721DAAB8A676CF06A7485C8* L_16 = V_3;
			NullCheck(L_16);
			if ((((int32_t)L_15) < ((int32_t)((int32_t)(((RuntimeArray*)L_16)->max_length)))))
			{
				goto IL_003b_1;
			}
		}
		{
			// await coroutineBlocker.WaitAsync();
			U3CU3Ec__DisplayClass2_0_t386188471D23E1BA38A602299DF18C0DE2A95748* L_17 = V_2;
			NullCheck(L_17);
			CoroutineBlocker_tB36E126059540FB732976F4A8DEC06EF8A96634A* L_18 = L_17->___coroutineBlocker_0;
			NullCheck(L_18);
			ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_19;
			L_19 = CoroutineBlocker_WaitAsync_m73943BDA099AA93BBD5EAEEA957B1FA94706C3DF(L_18, NULL);
			NullCheck(L_19);
			ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_20;
			L_20 = ETTask_GetAwaiter_m18704BF1223130E4441BED1DF784F584052E9F46(L_19, NULL);
			V_7 = L_20;
			ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_21 = V_7;
			NullCheck(L_21);
			bool L_22;
			L_22 = ETTask_get_IsCompleted_mC46408CF8CDBC0122E679473EDB14A9BA55A13F2(L_21, NULL);
			if (L_22)
			{
				goto IL_00b8_1;
			}
		}
		{
			int32_t L_23 = 0;
			V_0 = L_23;
			__this->___U3CU3E1__state_0 = L_23;
			ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_24 = V_7;
			__this->___U3CU3Eu__1_4 = L_24;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Eu__1_4), (void*)L_24);
			ETAsyncTaskMethodBuilder_1_t769C7EF52D8DA1B6EBB8B7AEC7B2D7C854730D31* L_25 = (&__this->___U3CU3Et__builder_1);
			ETAsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_TisU3CWaitAnyU3Ed__2_t46A8ED3559C8D2579C2F9E875E382FADDB126E60_m0FEF868C38A3064A56A57DAA57CFC787E5656C11(L_25, (&V_7), __this, ETAsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_TisU3CWaitAnyU3Ed__2_t46A8ED3559C8D2579C2F9E875E382FADDB126E60_m0FEF868C38A3064A56A57DAA57CFC787E5656C11_RuntimeMethod_var);
			goto IL_0109;
		}

IL_009b_1:
		{
			RuntimeObject* L_26 = __this->___U3CU3Eu__1_4;
			V_7 = ((ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9*)CastclassClass((RuntimeObject*)L_26, ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_il2cpp_TypeInfo_var));
			__this->___U3CU3Eu__1_4 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Eu__1_4), (void*)NULL);
			int32_t L_27 = (-1);
			V_0 = L_27;
			__this->___U3CU3E1__state_0 = L_27;
		}

IL_00b8_1:
		{
			ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_28 = V_7;
			NullCheck(L_28);
			ETTask_GetResult_m4025996962517219AB63CD35458CEE581DF064E6(L_28, NULL);
			// if (cancellationToken == null)
			ETCancellationToken_tACA8F146EDE95371894D92DF0FD89C07C08886E1* L_29 = __this->___cancellationToken_3;
			if (L_29)
			{
				goto IL_00cb_1;
			}
		}
		{
			// return true;
			V_1 = (bool)1;
			goto IL_00f5;
		}

IL_00cb_1:
		{
			// return !cancellationToken.IsCancel();
			ETCancellationToken_tACA8F146EDE95371894D92DF0FD89C07C08886E1* L_30 = __this->___cancellationToken_3;
			NullCheck(L_30);
			bool L_31;
			L_31 = ETCancellationToken_IsCancel_m2138EFC83F2D201AD73E6B56D7F394F39CDD8068(L_30, NULL);
			V_1 = (bool)((((int32_t)L_31) == ((int32_t)0))? 1 : 0);
			goto IL_00f5;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00dc;
		}
		throw e;
	}

CATCH_00dc:
	{// begin catch(System.Exception)
		V_8 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		ETAsyncTaskMethodBuilder_1_t769C7EF52D8DA1B6EBB8B7AEC7B2D7C854730D31* L_32 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_33 = V_8;
		ETAsyncTaskMethodBuilder_1_SetException_m4B20AE5BD8F1E608AAD3970CB6C2985ACB4D6B08(L_32, L_33, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ETAsyncTaskMethodBuilder_1_SetException_m4B20AE5BD8F1E608AAD3970CB6C2985ACB4D6B08_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0109;
	}// end catch (depth: 1)

IL_00f5:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		ETAsyncTaskMethodBuilder_1_t769C7EF52D8DA1B6EBB8B7AEC7B2D7C854730D31* L_34 = (&__this->___U3CU3Et__builder_1);
		bool L_35 = V_1;
		ETAsyncTaskMethodBuilder_1_SetResult_mBAD14F0004B857E596693C614C5B29587E97021C(L_34, L_35, ETAsyncTaskMethodBuilder_1_SetResult_mBAD14F0004B857E596693C614C5B29587E97021C_RuntimeMethod_var);
	}

IL_0109:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CWaitAnyU3Ed__2_MoveNext_mCFF7A82120B59F76023142DF5EABD63CB153EF35_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CWaitAnyU3Ed__2_t46A8ED3559C8D2579C2F9E875E382FADDB126E60* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CWaitAnyU3Ed__2_t46A8ED3559C8D2579C2F9E875E382FADDB126E60*>(__this + _offset);
	U3CWaitAnyU3Ed__2_MoveNext_mCFF7A82120B59F76023142DF5EABD63CB153EF35(_thisAdjusted, method);
}
// System.Void ET.ETTaskHelper/<WaitAny>d__2::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitAnyU3Ed__2_SetStateMachine_m2AA20AC21256C2068B145399ACAE608EDC00D486 (U3CWaitAnyU3Ed__2_t46A8ED3559C8D2579C2F9E875E382FADDB126E60* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ETAsyncTaskMethodBuilder_1_SetStateMachine_m5B87C2E5817CF286E3FCDFBB7C7BF417672DB76E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ETAsyncTaskMethodBuilder_1_t769C7EF52D8DA1B6EBB8B7AEC7B2D7C854730D31* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___stateMachine0;
		ETAsyncTaskMethodBuilder_1_SetStateMachine_m5B87C2E5817CF286E3FCDFBB7C7BF417672DB76E(L_0, L_1, ETAsyncTaskMethodBuilder_1_SetStateMachine_m5B87C2E5817CF286E3FCDFBB7C7BF417672DB76E_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CWaitAnyU3Ed__2_SetStateMachine_m2AA20AC21256C2068B145399ACAE608EDC00D486_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CWaitAnyU3Ed__2_t46A8ED3559C8D2579C2F9E875E382FADDB126E60* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CWaitAnyU3Ed__2_t46A8ED3559C8D2579C2F9E875E382FADDB126E60*>(__this + _offset);
	U3CWaitAnyU3Ed__2_SetStateMachine_m2AA20AC21256C2068B145399ACAE608EDC00D486(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ET.ETTaskHelper/<>c__DisplayClass5_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0__ctor_mC592A74726910254060BD7A5165379A73612DA43 (U3CU3Ec__DisplayClass5_0_t58DC10C24DA5311C6195ED1199782F0126118891* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// ET.ETVoid ET.ETTaskHelper/<>c__DisplayClass5_0::<WaitAll>g__RunOneTask|0(ET.ETTask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ETVoid_tFB79A53EB5B1FFC7F4A2428E68797AD75B74DC38 U3CU3Ec__DisplayClass5_0_U3CWaitAllU3Eg__RunOneTaskU7C0_m9382542E84A59B53307BAE06DC605A4055D0146D (U3CU3Ec__DisplayClass5_0_t58DC10C24DA5311C6195ED1199782F0126118891* __this, ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* ___task0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncETVoidMethodBuilder_Start_TisU3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_tD69FC2C1CB7676C114F1AC8B8D4877AF09E91EB4_mA3EA92C6FA79BC46C30122939F6CA44C0E1D90B9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_tD69FC2C1CB7676C114F1AC8B8D4877AF09E91EB4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203 L_0;
		L_0 = AsyncETVoidMethodBuilder_Create_m9CEDA84619E25BAC3C65FA55A7C6A56FF650F200(NULL);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		(&V_0)->___U3CU3E4__this_3 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this_3), (void*)__this);
		ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_1 = ___task0;
		(&V_0)->___task_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___task_2), (void*)L_1);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203* L_2 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncETVoidMethodBuilder_Start_TisU3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_tD69FC2C1CB7676C114F1AC8B8D4877AF09E91EB4_mA3EA92C6FA79BC46C30122939F6CA44C0E1D90B9(L_2, (&V_0), AsyncETVoidMethodBuilder_Start_TisU3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_tD69FC2C1CB7676C114F1AC8B8D4877AF09E91EB4_mA3EA92C6FA79BC46C30122939F6CA44C0E1D90B9_RuntimeMethod_var);
		AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203* L_3 = (&(&V_0)->___U3CU3Et__builder_1);
		ETVoid_tFB79A53EB5B1FFC7F4A2428E68797AD75B74DC38 L_4;
		L_4 = AsyncETVoidMethodBuilder_get_Task_m01D925CDA13749DAF0518204CA06493E8A93EC46(L_3, NULL);
		return L_4;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ET.ETTaskHelper/<>c__DisplayClass5_0/<<WaitAll>g__RunOneTask|0>d::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_MoveNext_mD2B6DAD55F46CBA1BAA6BFC4717B6411BF98C5A1 (U3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_tD69FC2C1CB7676C114F1AC8B8D4877AF09E91EB4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncETVoidMethodBuilder_AwaitUnsafeOnCompleted_TisETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_TisU3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_tD69FC2C1CB7676C114F1AC8B8D4877AF09E91EB4_m12328704DF6C2DC6731309C804DC587642AA27CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	U3CU3Ec__DisplayClass5_0_t58DC10C24DA5311C6195ED1199782F0126118891* V_1 = NULL;
	ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* V_2 = NULL;
	Exception_t* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		U3CU3Ec__DisplayClass5_0_t58DC10C24DA5311C6195ED1199782F0126118891* L_1 = __this->___U3CU3E4__this_3;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_004f_1;
			}
		}
		{
			int32_t L_3 = V_0;
			if ((((int32_t)L_3) == ((int32_t)1)))
			{
				goto IL_00aa_1;
			}
		}
		{
			// await task;
			ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_4 = __this->___task_2;
			NullCheck(L_4);
			ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_5;
			L_5 = ETTask_GetAwaiter_m18704BF1223130E4441BED1DF784F584052E9F46(L_4, NULL);
			V_2 = L_5;
			ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_6 = V_2;
			NullCheck(L_6);
			bool L_7;
			L_7 = ETTask_get_IsCompleted_mC46408CF8CDBC0122E679473EDB14A9BA55A13F2(L_6, NULL);
			if (L_7)
			{
				goto IL_006b_1;
			}
		}
		{
			int32_t L_8 = 0;
			V_0 = L_8;
			__this->___U3CU3E1__state_0 = L_8;
			ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_9 = V_2;
			__this->___U3CU3Eu__1_4 = L_9;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Eu__1_4), (void*)L_9);
			AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203* L_10 = (&__this->___U3CU3Et__builder_1);
			AsyncETVoidMethodBuilder_AwaitUnsafeOnCompleted_TisETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_TisU3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_tD69FC2C1CB7676C114F1AC8B8D4877AF09E91EB4_m12328704DF6C2DC6731309C804DC587642AA27CC(L_10, (&V_2), __this, AsyncETVoidMethodBuilder_AwaitUnsafeOnCompleted_TisETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_TisU3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_tD69FC2C1CB7676C114F1AC8B8D4877AF09E91EB4_m12328704DF6C2DC6731309C804DC587642AA27CC_RuntimeMethod_var);
			goto IL_00f8;
		}

IL_004f_1:
		{
			RuntimeObject* L_11 = __this->___U3CU3Eu__1_4;
			V_2 = ((ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9*)CastclassClass((RuntimeObject*)L_11, ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_il2cpp_TypeInfo_var));
			__this->___U3CU3Eu__1_4 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Eu__1_4), (void*)NULL);
			int32_t L_12 = (-1);
			V_0 = L_12;
			__this->___U3CU3E1__state_0 = L_12;
		}

IL_006b_1:
		{
			ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_13 = V_2;
			NullCheck(L_13);
			ETTask_GetResult_m4025996962517219AB63CD35458CEE581DF064E6(L_13, NULL);
			// await coroutineBlocker.WaitAsync();
			U3CU3Ec__DisplayClass5_0_t58DC10C24DA5311C6195ED1199782F0126118891* L_14 = V_1;
			NullCheck(L_14);
			CoroutineBlocker_tB36E126059540FB732976F4A8DEC06EF8A96634A* L_15 = L_14->___coroutineBlocker_0;
			NullCheck(L_15);
			ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_16;
			L_16 = CoroutineBlocker_WaitAsync_m73943BDA099AA93BBD5EAEEA957B1FA94706C3DF(L_15, NULL);
			NullCheck(L_16);
			ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_17;
			L_17 = ETTask_GetAwaiter_m18704BF1223130E4441BED1DF784F584052E9F46(L_16, NULL);
			V_2 = L_17;
			ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_18 = V_2;
			NullCheck(L_18);
			bool L_19;
			L_19 = ETTask_get_IsCompleted_mC46408CF8CDBC0122E679473EDB14A9BA55A13F2(L_18, NULL);
			if (L_19)
			{
				goto IL_00c6_1;
			}
		}
		{
			int32_t L_20 = 1;
			V_0 = L_20;
			__this->___U3CU3E1__state_0 = L_20;
			ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_21 = V_2;
			__this->___U3CU3Eu__1_4 = L_21;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Eu__1_4), (void*)L_21);
			AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203* L_22 = (&__this->___U3CU3Et__builder_1);
			AsyncETVoidMethodBuilder_AwaitUnsafeOnCompleted_TisETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_TisU3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_tD69FC2C1CB7676C114F1AC8B8D4877AF09E91EB4_m12328704DF6C2DC6731309C804DC587642AA27CC(L_22, (&V_2), __this, AsyncETVoidMethodBuilder_AwaitUnsafeOnCompleted_TisETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_TisU3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_tD69FC2C1CB7676C114F1AC8B8D4877AF09E91EB4_m12328704DF6C2DC6731309C804DC587642AA27CC_RuntimeMethod_var);
			goto IL_00f8;
		}

IL_00aa_1:
		{
			RuntimeObject* L_23 = __this->___U3CU3Eu__1_4;
			V_2 = ((ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9*)CastclassClass((RuntimeObject*)L_23, ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_il2cpp_TypeInfo_var));
			__this->___U3CU3Eu__1_4 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Eu__1_4), (void*)NULL);
			int32_t L_24 = (-1);
			V_0 = L_24;
			__this->___U3CU3E1__state_0 = L_24;
		}

IL_00c6_1:
		{
			ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_25 = V_2;
			NullCheck(L_25);
			ETTask_GetResult_m4025996962517219AB63CD35458CEE581DF064E6(L_25, NULL);
			goto IL_00e5;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00ce;
		}
		throw e;
	}

CATCH_00ce:
	{// begin catch(System.Exception)
		V_3 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203* L_26 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_27 = V_3;
		AsyncETVoidMethodBuilder_SetException_m7F5356721EF2BCB40149B2F55B8E2590699EBAF5(L_26, L_27, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00f8;
	}// end catch (depth: 1)

IL_00e5:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203* L_28 = (&__this->___U3CU3Et__builder_1);
		AsyncETVoidMethodBuilder_SetResult_m290D2A1FF93C5EB907BE4243F0E62E0CA49E760A(L_28, NULL);
	}

IL_00f8:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_MoveNext_mD2B6DAD55F46CBA1BAA6BFC4717B6411BF98C5A1_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_tD69FC2C1CB7676C114F1AC8B8D4877AF09E91EB4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_tD69FC2C1CB7676C114F1AC8B8D4877AF09E91EB4*>(__this + _offset);
	U3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_MoveNext_mD2B6DAD55F46CBA1BAA6BFC4717B6411BF98C5A1(_thisAdjusted, method);
}
// System.Void ET.ETTaskHelper/<>c__DisplayClass5_0/<<WaitAll>g__RunOneTask|0>d::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_SetStateMachine_m04EC6DB1C2D31452D4A930BA164228324E293146 (U3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_tD69FC2C1CB7676C114F1AC8B8D4877AF09E91EB4* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	{
		AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncETVoidMethodBuilder_SetStateMachine_m6A0835E3894AAEE9D100F17C6415C8C2DF7B5A78(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_SetStateMachine_m04EC6DB1C2D31452D4A930BA164228324E293146_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_tD69FC2C1CB7676C114F1AC8B8D4877AF09E91EB4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_tD69FC2C1CB7676C114F1AC8B8D4877AF09E91EB4*>(__this + _offset);
	U3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_SetStateMachine_m04EC6DB1C2D31452D4A930BA164228324E293146(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ET.ETTaskHelper/<WaitAll>d__5::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitAllU3Ed__5_MoveNext_m5896B4E3831744CD7B6D4E2465B29A9952FAAE73 (U3CWaitAllU3Ed__5_tA50206C2AA88F82EB79AE3021E9EDE47B6455DED* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoroutineBlocker_tB36E126059540FB732976F4A8DEC06EF8A96634A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ETAsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_TisU3CWaitAllU3Ed__5_tA50206C2AA88F82EB79AE3021E9EDE47B6455DED_m3E9C13137AFCE80E5814B80D9DA3C4DACE627064_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ETAsyncTaskMethodBuilder_1_SetResult_mBAD14F0004B857E596693C614C5B29587E97021C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass5_0_t58DC10C24DA5311C6195ED1199782F0126118891_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	U3CU3Ec__DisplayClass5_0_t58DC10C24DA5311C6195ED1199782F0126118891* V_2 = NULL;
	ETTaskU5BU5D_t450F7E88953540359721DAAB8A676CF06A7485C8* V_3 = NULL;
	int32_t V_4 = 0;
	ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* V_5 = NULL;
	ETVoid_tFB79A53EB5B1FFC7F4A2428E68797AD75B74DC38 V_6;
	memset((&V_6), 0, sizeof(V_6));
	ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* V_7 = NULL;
	Exception_t* V_8 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_00a4_1;
			}
		}
		{
			U3CU3Ec__DisplayClass5_0_t58DC10C24DA5311C6195ED1199782F0126118891* L_2 = (U3CU3Ec__DisplayClass5_0_t58DC10C24DA5311C6195ED1199782F0126118891*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass5_0_t58DC10C24DA5311C6195ED1199782F0126118891_il2cpp_TypeInfo_var);
			NullCheck(L_2);
			U3CU3Ec__DisplayClass5_0__ctor_mC592A74726910254060BD7A5165379A73612DA43(L_2, NULL);
			V_2 = L_2;
			// if (tasks.Length == 0)
			ETTaskU5BU5D_t450F7E88953540359721DAAB8A676CF06A7485C8* L_3 = __this->___tasks_2;
			NullCheck(L_3);
			if ((((RuntimeArray*)L_3)->max_length))
			{
				goto IL_0023_1;
			}
		}
		{
			// return false;
			V_1 = (bool)0;
			goto IL_00fe;
		}

IL_0023_1:
		{
			// CoroutineBlocker coroutineBlocker = new CoroutineBlocker(tasks.Length + 1);
			U3CU3Ec__DisplayClass5_0_t58DC10C24DA5311C6195ED1199782F0126118891* L_4 = V_2;
			ETTaskU5BU5D_t450F7E88953540359721DAAB8A676CF06A7485C8* L_5 = __this->___tasks_2;
			NullCheck(L_5);
			CoroutineBlocker_tB36E126059540FB732976F4A8DEC06EF8A96634A* L_6 = (CoroutineBlocker_tB36E126059540FB732976F4A8DEC06EF8A96634A*)il2cpp_codegen_object_new(CoroutineBlocker_tB36E126059540FB732976F4A8DEC06EF8A96634A_il2cpp_TypeInfo_var);
			NullCheck(L_6);
			CoroutineBlocker__ctor_mC2DEAA1C928DA22578C4C3F820DD758ECAF79A52(L_6, ((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_5)->max_length)), 1)), NULL);
			NullCheck(L_4);
			L_4->___coroutineBlocker_0 = L_6;
			Il2CppCodeGenWriteBarrier((void**)(&L_4->___coroutineBlocker_0), (void*)L_6);
			// foreach (ETTask task in tasks)
			ETTaskU5BU5D_t450F7E88953540359721DAAB8A676CF06A7485C8* L_7 = __this->___tasks_2;
			V_3 = L_7;
			V_4 = 0;
			goto IL_0061_1;
		}

IL_0044_1:
		{
			// foreach (ETTask task in tasks)
			ETTaskU5BU5D_t450F7E88953540359721DAAB8A676CF06A7485C8* L_8 = V_3;
			int32_t L_9 = V_4;
			NullCheck(L_8);
			int32_t L_10 = L_9;
			ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
			V_5 = L_11;
			// RunOneTask(task).Coroutine();
			U3CU3Ec__DisplayClass5_0_t58DC10C24DA5311C6195ED1199782F0126118891* L_12 = V_2;
			ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_13 = V_5;
			NullCheck(L_12);
			ETVoid_tFB79A53EB5B1FFC7F4A2428E68797AD75B74DC38 L_14;
			L_14 = U3CU3Ec__DisplayClass5_0_U3CWaitAllU3Eg__RunOneTaskU7C0_m9382542E84A59B53307BAE06DC605A4055D0146D(L_12, L_13, NULL);
			V_6 = L_14;
			ETVoid_Coroutine_m7D69369538267F547E8D8AF8467A2806C5F6E6DA((&V_6), NULL);
			int32_t L_15 = V_4;
			V_4 = ((int32_t)il2cpp_codegen_add(L_15, 1));
		}

IL_0061_1:
		{
			// foreach (ETTask task in tasks)
			int32_t L_16 = V_4;
			ETTaskU5BU5D_t450F7E88953540359721DAAB8A676CF06A7485C8* L_17 = V_3;
			NullCheck(L_17);
			if ((((int32_t)L_16) < ((int32_t)((int32_t)(((RuntimeArray*)L_17)->max_length)))))
			{
				goto IL_0044_1;
			}
		}
		{
			// await coroutineBlocker.WaitAsync();
			U3CU3Ec__DisplayClass5_0_t58DC10C24DA5311C6195ED1199782F0126118891* L_18 = V_2;
			NullCheck(L_18);
			CoroutineBlocker_tB36E126059540FB732976F4A8DEC06EF8A96634A* L_19 = L_18->___coroutineBlocker_0;
			NullCheck(L_19);
			ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_20;
			L_20 = CoroutineBlocker_WaitAsync_m73943BDA099AA93BBD5EAEEA957B1FA94706C3DF(L_19, NULL);
			NullCheck(L_20);
			ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_21;
			L_21 = ETTask_GetAwaiter_m18704BF1223130E4441BED1DF784F584052E9F46(L_20, NULL);
			V_7 = L_21;
			ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_22 = V_7;
			NullCheck(L_22);
			bool L_23;
			L_23 = ETTask_get_IsCompleted_mC46408CF8CDBC0122E679473EDB14A9BA55A13F2(L_22, NULL);
			if (L_23)
			{
				goto IL_00c1_1;
			}
		}
		{
			int32_t L_24 = 0;
			V_0 = L_24;
			__this->___U3CU3E1__state_0 = L_24;
			ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_25 = V_7;
			__this->___U3CU3Eu__1_4 = L_25;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Eu__1_4), (void*)L_25);
			ETAsyncTaskMethodBuilder_1_t769C7EF52D8DA1B6EBB8B7AEC7B2D7C854730D31* L_26 = (&__this->___U3CU3Et__builder_1);
			ETAsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_TisU3CWaitAllU3Ed__5_tA50206C2AA88F82EB79AE3021E9EDE47B6455DED_m3E9C13137AFCE80E5814B80D9DA3C4DACE627064(L_26, (&V_7), __this, ETAsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_TisU3CWaitAllU3Ed__5_tA50206C2AA88F82EB79AE3021E9EDE47B6455DED_m3E9C13137AFCE80E5814B80D9DA3C4DACE627064_RuntimeMethod_var);
			goto IL_0112;
		}

IL_00a4_1:
		{
			RuntimeObject* L_27 = __this->___U3CU3Eu__1_4;
			V_7 = ((ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9*)CastclassClass((RuntimeObject*)L_27, ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_il2cpp_TypeInfo_var));
			__this->___U3CU3Eu__1_4 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Eu__1_4), (void*)NULL);
			int32_t L_28 = (-1);
			V_0 = L_28;
			__this->___U3CU3E1__state_0 = L_28;
		}

IL_00c1_1:
		{
			ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_29 = V_7;
			NullCheck(L_29);
			ETTask_GetResult_m4025996962517219AB63CD35458CEE581DF064E6(L_29, NULL);
			// if (cancellationToken == null)
			ETCancellationToken_tACA8F146EDE95371894D92DF0FD89C07C08886E1* L_30 = __this->___cancellationToken_3;
			if (L_30)
			{
				goto IL_00d4_1;
			}
		}
		{
			// return true;
			V_1 = (bool)1;
			goto IL_00fe;
		}

IL_00d4_1:
		{
			// return !cancellationToken.IsCancel();
			ETCancellationToken_tACA8F146EDE95371894D92DF0FD89C07C08886E1* L_31 = __this->___cancellationToken_3;
			NullCheck(L_31);
			bool L_32;
			L_32 = ETCancellationToken_IsCancel_m2138EFC83F2D201AD73E6B56D7F394F39CDD8068(L_31, NULL);
			V_1 = (bool)((((int32_t)L_32) == ((int32_t)0))? 1 : 0);
			goto IL_00fe;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00e5;
		}
		throw e;
	}

CATCH_00e5:
	{// begin catch(System.Exception)
		V_8 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		ETAsyncTaskMethodBuilder_1_t769C7EF52D8DA1B6EBB8B7AEC7B2D7C854730D31* L_33 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_34 = V_8;
		ETAsyncTaskMethodBuilder_1_SetException_m4B20AE5BD8F1E608AAD3970CB6C2985ACB4D6B08(L_33, L_34, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ETAsyncTaskMethodBuilder_1_SetException_m4B20AE5BD8F1E608AAD3970CB6C2985ACB4D6B08_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0112;
	}// end catch (depth: 1)

IL_00fe:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		ETAsyncTaskMethodBuilder_1_t769C7EF52D8DA1B6EBB8B7AEC7B2D7C854730D31* L_35 = (&__this->___U3CU3Et__builder_1);
		bool L_36 = V_1;
		ETAsyncTaskMethodBuilder_1_SetResult_mBAD14F0004B857E596693C614C5B29587E97021C(L_35, L_36, ETAsyncTaskMethodBuilder_1_SetResult_mBAD14F0004B857E596693C614C5B29587E97021C_RuntimeMethod_var);
	}

IL_0112:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CWaitAllU3Ed__5_MoveNext_m5896B4E3831744CD7B6D4E2465B29A9952FAAE73_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CWaitAllU3Ed__5_tA50206C2AA88F82EB79AE3021E9EDE47B6455DED* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CWaitAllU3Ed__5_tA50206C2AA88F82EB79AE3021E9EDE47B6455DED*>(__this + _offset);
	U3CWaitAllU3Ed__5_MoveNext_m5896B4E3831744CD7B6D4E2465B29A9952FAAE73(_thisAdjusted, method);
}
// System.Void ET.ETTaskHelper/<WaitAll>d__5::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitAllU3Ed__5_SetStateMachine_mE9FF048A584A2EA0CC8B07759D1CE214B93FDD49 (U3CWaitAllU3Ed__5_tA50206C2AA88F82EB79AE3021E9EDE47B6455DED* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ETAsyncTaskMethodBuilder_1_SetStateMachine_m5B87C2E5817CF286E3FCDFBB7C7BF417672DB76E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ETAsyncTaskMethodBuilder_1_t769C7EF52D8DA1B6EBB8B7AEC7B2D7C854730D31* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___stateMachine0;
		ETAsyncTaskMethodBuilder_1_SetStateMachine_m5B87C2E5817CF286E3FCDFBB7C7BF417672DB76E(L_0, L_1, ETAsyncTaskMethodBuilder_1_SetStateMachine_m5B87C2E5817CF286E3FCDFBB7C7BF417672DB76E_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CWaitAllU3Ed__5_SetStateMachine_mE9FF048A584A2EA0CC8B07759D1CE214B93FDD49_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CWaitAllU3Ed__5_tA50206C2AA88F82EB79AE3021E9EDE47B6455DED* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CWaitAllU3Ed__5_tA50206C2AA88F82EB79AE3021E9EDE47B6455DED*>(__this + _offset);
	U3CWaitAllU3Ed__5_SetStateMachine_mE9FF048A584A2EA0CC8B07759D1CE214B93FDD49(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ET.ETTaskHelper/<>c__DisplayClass6_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass6_0__ctor_mB4BE8E3414AAE4FBCECE1D4E864D610D57F70C3C (U3CU3Ec__DisplayClass6_0_t683F5DF1ABBC6076EC981A7D758038E5F5001048* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// ET.ETVoid ET.ETTaskHelper/<>c__DisplayClass6_0::<WaitAll>g__RunOneTask|0(ET.ETTask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ETVoid_tFB79A53EB5B1FFC7F4A2428E68797AD75B74DC38 U3CU3Ec__DisplayClass6_0_U3CWaitAllU3Eg__RunOneTaskU7C0_mCE1182ADD6A9B03DEE4481D7556D7A64C9BC7AFC (U3CU3Ec__DisplayClass6_0_t683F5DF1ABBC6076EC981A7D758038E5F5001048* __this, ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* ___task0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncETVoidMethodBuilder_Start_TisU3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_tC8B9E615EDCA22128352B31CB0005D42DCD70952_mF703CC49BFF53BD376F1D2C4A00507A237512E6E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_tC8B9E615EDCA22128352B31CB0005D42DCD70952 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203 L_0;
		L_0 = AsyncETVoidMethodBuilder_Create_m9CEDA84619E25BAC3C65FA55A7C6A56FF650F200(NULL);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		(&V_0)->___U3CU3E4__this_3 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this_3), (void*)__this);
		ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_1 = ___task0;
		(&V_0)->___task_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___task_2), (void*)L_1);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203* L_2 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncETVoidMethodBuilder_Start_TisU3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_tC8B9E615EDCA22128352B31CB0005D42DCD70952_mF703CC49BFF53BD376F1D2C4A00507A237512E6E(L_2, (&V_0), AsyncETVoidMethodBuilder_Start_TisU3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_tC8B9E615EDCA22128352B31CB0005D42DCD70952_mF703CC49BFF53BD376F1D2C4A00507A237512E6E_RuntimeMethod_var);
		AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203* L_3 = (&(&V_0)->___U3CU3Et__builder_1);
		ETVoid_tFB79A53EB5B1FFC7F4A2428E68797AD75B74DC38 L_4;
		L_4 = AsyncETVoidMethodBuilder_get_Task_m01D925CDA13749DAF0518204CA06493E8A93EC46(L_3, NULL);
		return L_4;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ET.ETTaskHelper/<>c__DisplayClass6_0/<<WaitAll>g__RunOneTask|0>d::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_MoveNext_mE6E8D66C93025FD6239EDB86C098A5214F652D73 (U3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_tC8B9E615EDCA22128352B31CB0005D42DCD70952* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncETVoidMethodBuilder_AwaitUnsafeOnCompleted_TisETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_TisU3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_tC8B9E615EDCA22128352B31CB0005D42DCD70952_m7BBF15F324CD989EAAAC7E26FEF23747228CC8D6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	U3CU3Ec__DisplayClass6_0_t683F5DF1ABBC6076EC981A7D758038E5F5001048* V_1 = NULL;
	ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* V_2 = NULL;
	Exception_t* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		U3CU3Ec__DisplayClass6_0_t683F5DF1ABBC6076EC981A7D758038E5F5001048* L_1 = __this->___U3CU3E4__this_3;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_004f_1;
			}
		}
		{
			int32_t L_3 = V_0;
			if ((((int32_t)L_3) == ((int32_t)1)))
			{
				goto IL_00aa_1;
			}
		}
		{
			// await task;
			ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_4 = __this->___task_2;
			NullCheck(L_4);
			ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_5;
			L_5 = ETTask_GetAwaiter_m18704BF1223130E4441BED1DF784F584052E9F46(L_4, NULL);
			V_2 = L_5;
			ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_6 = V_2;
			NullCheck(L_6);
			bool L_7;
			L_7 = ETTask_get_IsCompleted_mC46408CF8CDBC0122E679473EDB14A9BA55A13F2(L_6, NULL);
			if (L_7)
			{
				goto IL_006b_1;
			}
		}
		{
			int32_t L_8 = 0;
			V_0 = L_8;
			__this->___U3CU3E1__state_0 = L_8;
			ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_9 = V_2;
			__this->___U3CU3Eu__1_4 = L_9;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Eu__1_4), (void*)L_9);
			AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203* L_10 = (&__this->___U3CU3Et__builder_1);
			AsyncETVoidMethodBuilder_AwaitUnsafeOnCompleted_TisETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_TisU3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_tC8B9E615EDCA22128352B31CB0005D42DCD70952_m7BBF15F324CD989EAAAC7E26FEF23747228CC8D6(L_10, (&V_2), __this, AsyncETVoidMethodBuilder_AwaitUnsafeOnCompleted_TisETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_TisU3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_tC8B9E615EDCA22128352B31CB0005D42DCD70952_m7BBF15F324CD989EAAAC7E26FEF23747228CC8D6_RuntimeMethod_var);
			goto IL_00f8;
		}

IL_004f_1:
		{
			RuntimeObject* L_11 = __this->___U3CU3Eu__1_4;
			V_2 = ((ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9*)CastclassClass((RuntimeObject*)L_11, ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_il2cpp_TypeInfo_var));
			__this->___U3CU3Eu__1_4 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Eu__1_4), (void*)NULL);
			int32_t L_12 = (-1);
			V_0 = L_12;
			__this->___U3CU3E1__state_0 = L_12;
		}

IL_006b_1:
		{
			ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_13 = V_2;
			NullCheck(L_13);
			ETTask_GetResult_m4025996962517219AB63CD35458CEE581DF064E6(L_13, NULL);
			// await coroutineBlocker.WaitAsync();
			U3CU3Ec__DisplayClass6_0_t683F5DF1ABBC6076EC981A7D758038E5F5001048* L_14 = V_1;
			NullCheck(L_14);
			CoroutineBlocker_tB36E126059540FB732976F4A8DEC06EF8A96634A* L_15 = L_14->___coroutineBlocker_0;
			NullCheck(L_15);
			ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_16;
			L_16 = CoroutineBlocker_WaitAsync_m73943BDA099AA93BBD5EAEEA957B1FA94706C3DF(L_15, NULL);
			NullCheck(L_16);
			ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_17;
			L_17 = ETTask_GetAwaiter_m18704BF1223130E4441BED1DF784F584052E9F46(L_16, NULL);
			V_2 = L_17;
			ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_18 = V_2;
			NullCheck(L_18);
			bool L_19;
			L_19 = ETTask_get_IsCompleted_mC46408CF8CDBC0122E679473EDB14A9BA55A13F2(L_18, NULL);
			if (L_19)
			{
				goto IL_00c6_1;
			}
		}
		{
			int32_t L_20 = 1;
			V_0 = L_20;
			__this->___U3CU3E1__state_0 = L_20;
			ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_21 = V_2;
			__this->___U3CU3Eu__1_4 = L_21;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Eu__1_4), (void*)L_21);
			AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203* L_22 = (&__this->___U3CU3Et__builder_1);
			AsyncETVoidMethodBuilder_AwaitUnsafeOnCompleted_TisETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_TisU3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_tC8B9E615EDCA22128352B31CB0005D42DCD70952_m7BBF15F324CD989EAAAC7E26FEF23747228CC8D6(L_22, (&V_2), __this, AsyncETVoidMethodBuilder_AwaitUnsafeOnCompleted_TisETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_TisU3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_tC8B9E615EDCA22128352B31CB0005D42DCD70952_m7BBF15F324CD989EAAAC7E26FEF23747228CC8D6_RuntimeMethod_var);
			goto IL_00f8;
		}

IL_00aa_1:
		{
			RuntimeObject* L_23 = __this->___U3CU3Eu__1_4;
			V_2 = ((ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9*)CastclassClass((RuntimeObject*)L_23, ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_il2cpp_TypeInfo_var));
			__this->___U3CU3Eu__1_4 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Eu__1_4), (void*)NULL);
			int32_t L_24 = (-1);
			V_0 = L_24;
			__this->___U3CU3E1__state_0 = L_24;
		}

IL_00c6_1:
		{
			ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_25 = V_2;
			NullCheck(L_25);
			ETTask_GetResult_m4025996962517219AB63CD35458CEE581DF064E6(L_25, NULL);
			goto IL_00e5;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00ce;
		}
		throw e;
	}

CATCH_00ce:
	{// begin catch(System.Exception)
		V_3 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203* L_26 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_27 = V_3;
		AsyncETVoidMethodBuilder_SetException_m7F5356721EF2BCB40149B2F55B8E2590699EBAF5(L_26, L_27, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00f8;
	}// end catch (depth: 1)

IL_00e5:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203* L_28 = (&__this->___U3CU3Et__builder_1);
		AsyncETVoidMethodBuilder_SetResult_m290D2A1FF93C5EB907BE4243F0E62E0CA49E760A(L_28, NULL);
	}

IL_00f8:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_MoveNext_mE6E8D66C93025FD6239EDB86C098A5214F652D73_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_tC8B9E615EDCA22128352B31CB0005D42DCD70952* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_tC8B9E615EDCA22128352B31CB0005D42DCD70952*>(__this + _offset);
	U3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_MoveNext_mE6E8D66C93025FD6239EDB86C098A5214F652D73(_thisAdjusted, method);
}
// System.Void ET.ETTaskHelper/<>c__DisplayClass6_0/<<WaitAll>g__RunOneTask|0>d::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_SetStateMachine_mCF501DE82C7EE07B063C4A75C71AC5245D8F594E (U3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_tC8B9E615EDCA22128352B31CB0005D42DCD70952* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	{
		AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncETVoidMethodBuilder_SetStateMachine_m6A0835E3894AAEE9D100F17C6415C8C2DF7B5A78(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_SetStateMachine_mCF501DE82C7EE07B063C4A75C71AC5245D8F594E_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_tC8B9E615EDCA22128352B31CB0005D42DCD70952* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_tC8B9E615EDCA22128352B31CB0005D42DCD70952*>(__this + _offset);
	U3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_SetStateMachine_mCF501DE82C7EE07B063C4A75C71AC5245D8F594E(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ET.ETTaskHelper/<WaitAll>d__6::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitAllU3Ed__6_MoveNext_mC67606D6615193A5AD14D47F4AA3309A557F0CE5 (U3CWaitAllU3Ed__6_t73CAD2CCB5423A31C85967FB33B23FE96219FFBF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoroutineBlocker_tB36E126059540FB732976F4A8DEC06EF8A96634A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ETAsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_TisU3CWaitAllU3Ed__6_t73CAD2CCB5423A31C85967FB33B23FE96219FFBF_mC57852BDD2AAF841B61F73D4DC1445AF7DE956F6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ETAsyncTaskMethodBuilder_1_SetResult_mBAD14F0004B857E596693C614C5B29587E97021C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m2CF219B461F67CCD06F99FF3AFDEADC48A1BD26C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m8E225A51A6FD5B638EB3D77D976A473FB1C010B2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mDE3732995809E5A4FABC3ACE34ADB9EDA62A6B09_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m058832077A5E305D1A30987EDF5EF94ABB118AB2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m098A3FBEC846D65A6FA1C497181C458CB65EC608_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass6_0_t683F5DF1ABBC6076EC981A7D758038E5F5001048_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	U3CU3Ec__DisplayClass6_0_t683F5DF1ABBC6076EC981A7D758038E5F5001048* V_2 = NULL;
	Enumerator_t05F9D6B822BE78199481DA0AA4B6B04FCC4968E9 V_3;
	memset((&V_3), 0, sizeof(V_3));
	ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* V_4 = NULL;
	ETVoid_tFB79A53EB5B1FFC7F4A2428E68797AD75B74DC38 V_5;
	memset((&V_5), 0, sizeof(V_5));
	ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* V_6 = NULL;
	Exception_t* V_7 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_00c0_1;
			}
		}
		{
			U3CU3Ec__DisplayClass6_0_t683F5DF1ABBC6076EC981A7D758038E5F5001048* L_2 = (U3CU3Ec__DisplayClass6_0_t683F5DF1ABBC6076EC981A7D758038E5F5001048*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass6_0_t683F5DF1ABBC6076EC981A7D758038E5F5001048_il2cpp_TypeInfo_var);
			NullCheck(L_2);
			U3CU3Ec__DisplayClass6_0__ctor_mB4BE8E3414AAE4FBCECE1D4E864D610D57F70C3C(L_2, NULL);
			V_2 = L_2;
			// if (tasks.Count == 0)
			List_1_tA4F47AA2446E3F808EABA13A13F5A8A05B4A5101* L_3 = __this->___tasks_2;
			NullCheck(L_3);
			int32_t L_4;
			L_4 = List_1_get_Count_m098A3FBEC846D65A6FA1C497181C458CB65EC608_inline(L_3, List_1_get_Count_m098A3FBEC846D65A6FA1C497181C458CB65EC608_RuntimeMethod_var);
			if (L_4)
			{
				goto IL_0027_1;
			}
		}
		{
			// return false;
			V_1 = (bool)0;
			goto IL_011a;
		}

IL_0027_1:
		{
			// CoroutineBlocker coroutineBlocker = new CoroutineBlocker(tasks.Count + 1);
			U3CU3Ec__DisplayClass6_0_t683F5DF1ABBC6076EC981A7D758038E5F5001048* L_5 = V_2;
			List_1_tA4F47AA2446E3F808EABA13A13F5A8A05B4A5101* L_6 = __this->___tasks_2;
			NullCheck(L_6);
			int32_t L_7;
			L_7 = List_1_get_Count_m098A3FBEC846D65A6FA1C497181C458CB65EC608_inline(L_6, List_1_get_Count_m098A3FBEC846D65A6FA1C497181C458CB65EC608_RuntimeMethod_var);
			CoroutineBlocker_tB36E126059540FB732976F4A8DEC06EF8A96634A* L_8 = (CoroutineBlocker_tB36E126059540FB732976F4A8DEC06EF8A96634A*)il2cpp_codegen_object_new(CoroutineBlocker_tB36E126059540FB732976F4A8DEC06EF8A96634A_il2cpp_TypeInfo_var);
			NullCheck(L_8);
			CoroutineBlocker__ctor_mC2DEAA1C928DA22578C4C3F820DD758ECAF79A52(L_8, ((int32_t)il2cpp_codegen_add(L_7, 1)), NULL);
			NullCheck(L_5);
			L_5->___coroutineBlocker_0 = L_8;
			Il2CppCodeGenWriteBarrier((void**)(&L_5->___coroutineBlocker_0), (void*)L_8);
			// foreach (ETTask task in tasks)
			List_1_tA4F47AA2446E3F808EABA13A13F5A8A05B4A5101* L_9 = __this->___tasks_2;
			NullCheck(L_9);
			Enumerator_t05F9D6B822BE78199481DA0AA4B6B04FCC4968E9 L_10;
			L_10 = List_1_GetEnumerator_m058832077A5E305D1A30987EDF5EF94ABB118AB2(L_9, List_1_GetEnumerator_m058832077A5E305D1A30987EDF5EF94ABB118AB2_RuntimeMethod_var);
			V_3 = L_10;
		}
		{
			auto __finallyBlock = il2cpp::utils::Finally([&]
			{

FINALLY_0072_1:
				{// begin finally (depth: 2)
					{
						int32_t L_11 = V_0;
						if ((((int32_t)L_11) >= ((int32_t)0)))
						{
							goto IL_0083_1;
						}
					}
					{
						Enumerator_Dispose_m2CF219B461F67CCD06F99FF3AFDEADC48A1BD26C((&V_3), Enumerator_Dispose_m2CF219B461F67CCD06F99FF3AFDEADC48A1BD26C_RuntimeMethod_var);
					}

IL_0083_1:
					{
						return;
					}
				}// end finally (depth: 2)
			});
			try
			{// begin try (depth: 2)
				{
					goto IL_0067_2;
				}

IL_004d_2:
				{
					// foreach (ETTask task in tasks)
					ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_12;
					L_12 = Enumerator_get_Current_mDE3732995809E5A4FABC3ACE34ADB9EDA62A6B09_inline((&V_3), Enumerator_get_Current_mDE3732995809E5A4FABC3ACE34ADB9EDA62A6B09_RuntimeMethod_var);
					V_4 = L_12;
					// RunOneTask(task).Coroutine();
					U3CU3Ec__DisplayClass6_0_t683F5DF1ABBC6076EC981A7D758038E5F5001048* L_13 = V_2;
					ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_14 = V_4;
					NullCheck(L_13);
					ETVoid_tFB79A53EB5B1FFC7F4A2428E68797AD75B74DC38 L_15;
					L_15 = U3CU3Ec__DisplayClass6_0_U3CWaitAllU3Eg__RunOneTaskU7C0_mCE1182ADD6A9B03DEE4481D7556D7A64C9BC7AFC(L_13, L_14, NULL);
					V_5 = L_15;
					ETVoid_Coroutine_m7D69369538267F547E8D8AF8467A2806C5F6E6DA((&V_5), NULL);
				}

IL_0067_2:
				{
					// foreach (ETTask task in tasks)
					bool L_16;
					L_16 = Enumerator_MoveNext_m8E225A51A6FD5B638EB3D77D976A473FB1C010B2((&V_3), Enumerator_MoveNext_m8E225A51A6FD5B638EB3D77D976A473FB1C010B2_RuntimeMethod_var);
					if (L_16)
					{
						goto IL_004d_2;
					}
				}
				{
					goto IL_0084_1;
				}
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				__finallyBlock.StoreException(e.ex);
			}
		}

IL_0084_1:
		{
			// await coroutineBlocker.WaitAsync();
			U3CU3Ec__DisplayClass6_0_t683F5DF1ABBC6076EC981A7D758038E5F5001048* L_17 = V_2;
			NullCheck(L_17);
			CoroutineBlocker_tB36E126059540FB732976F4A8DEC06EF8A96634A* L_18 = L_17->___coroutineBlocker_0;
			NullCheck(L_18);
			ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_19;
			L_19 = CoroutineBlocker_WaitAsync_m73943BDA099AA93BBD5EAEEA957B1FA94706C3DF(L_18, NULL);
			NullCheck(L_19);
			ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_20;
			L_20 = ETTask_GetAwaiter_m18704BF1223130E4441BED1DF784F584052E9F46(L_19, NULL);
			V_6 = L_20;
			ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_21 = V_6;
			NullCheck(L_21);
			bool L_22;
			L_22 = ETTask_get_IsCompleted_mC46408CF8CDBC0122E679473EDB14A9BA55A13F2(L_21, NULL);
			if (L_22)
			{
				goto IL_00dd_1;
			}
		}
		{
			int32_t L_23 = 0;
			V_0 = L_23;
			__this->___U3CU3E1__state_0 = L_23;
			ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_24 = V_6;
			__this->___U3CU3Eu__1_4 = L_24;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Eu__1_4), (void*)L_24);
			ETAsyncTaskMethodBuilder_1_t769C7EF52D8DA1B6EBB8B7AEC7B2D7C854730D31* L_25 = (&__this->___U3CU3Et__builder_1);
			ETAsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_TisU3CWaitAllU3Ed__6_t73CAD2CCB5423A31C85967FB33B23FE96219FFBF_mC57852BDD2AAF841B61F73D4DC1445AF7DE956F6(L_25, (&V_6), __this, ETAsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_TisU3CWaitAllU3Ed__6_t73CAD2CCB5423A31C85967FB33B23FE96219FFBF_mC57852BDD2AAF841B61F73D4DC1445AF7DE956F6_RuntimeMethod_var);
			goto IL_012e;
		}

IL_00c0_1:
		{
			RuntimeObject* L_26 = __this->___U3CU3Eu__1_4;
			V_6 = ((ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9*)CastclassClass((RuntimeObject*)L_26, ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_il2cpp_TypeInfo_var));
			__this->___U3CU3Eu__1_4 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Eu__1_4), (void*)NULL);
			int32_t L_27 = (-1);
			V_0 = L_27;
			__this->___U3CU3E1__state_0 = L_27;
		}

IL_00dd_1:
		{
			ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_28 = V_6;
			NullCheck(L_28);
			ETTask_GetResult_m4025996962517219AB63CD35458CEE581DF064E6(L_28, NULL);
			// if (cancellationToken == null)
			ETCancellationToken_tACA8F146EDE95371894D92DF0FD89C07C08886E1* L_29 = __this->___cancellationToken_3;
			if (L_29)
			{
				goto IL_00f0_1;
			}
		}
		{
			// return true;
			V_1 = (bool)1;
			goto IL_011a;
		}

IL_00f0_1:
		{
			// return !cancellationToken.IsCancel();
			ETCancellationToken_tACA8F146EDE95371894D92DF0FD89C07C08886E1* L_30 = __this->___cancellationToken_3;
			NullCheck(L_30);
			bool L_31;
			L_31 = ETCancellationToken_IsCancel_m2138EFC83F2D201AD73E6B56D7F394F39CDD8068(L_30, NULL);
			V_1 = (bool)((((int32_t)L_31) == ((int32_t)0))? 1 : 0);
			goto IL_011a;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0101;
		}
		throw e;
	}

CATCH_0101:
	{// begin catch(System.Exception)
		V_7 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		ETAsyncTaskMethodBuilder_1_t769C7EF52D8DA1B6EBB8B7AEC7B2D7C854730D31* L_32 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_33 = V_7;
		ETAsyncTaskMethodBuilder_1_SetException_m4B20AE5BD8F1E608AAD3970CB6C2985ACB4D6B08(L_32, L_33, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ETAsyncTaskMethodBuilder_1_SetException_m4B20AE5BD8F1E608AAD3970CB6C2985ACB4D6B08_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_012e;
	}// end catch (depth: 1)

IL_011a:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		ETAsyncTaskMethodBuilder_1_t769C7EF52D8DA1B6EBB8B7AEC7B2D7C854730D31* L_34 = (&__this->___U3CU3Et__builder_1);
		bool L_35 = V_1;
		ETAsyncTaskMethodBuilder_1_SetResult_mBAD14F0004B857E596693C614C5B29587E97021C(L_34, L_35, ETAsyncTaskMethodBuilder_1_SetResult_mBAD14F0004B857E596693C614C5B29587E97021C_RuntimeMethod_var);
	}

IL_012e:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CWaitAllU3Ed__6_MoveNext_mC67606D6615193A5AD14D47F4AA3309A557F0CE5_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CWaitAllU3Ed__6_t73CAD2CCB5423A31C85967FB33B23FE96219FFBF* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CWaitAllU3Ed__6_t73CAD2CCB5423A31C85967FB33B23FE96219FFBF*>(__this + _offset);
	U3CWaitAllU3Ed__6_MoveNext_mC67606D6615193A5AD14D47F4AA3309A557F0CE5(_thisAdjusted, method);
}
// System.Void ET.ETTaskHelper/<WaitAll>d__6::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitAllU3Ed__6_SetStateMachine_m8F2550CD0C39FBA84AF251340E455AE3C5EEF1E4 (U3CWaitAllU3Ed__6_t73CAD2CCB5423A31C85967FB33B23FE96219FFBF* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ETAsyncTaskMethodBuilder_1_SetStateMachine_m5B87C2E5817CF286E3FCDFBB7C7BF417672DB76E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ETAsyncTaskMethodBuilder_1_t769C7EF52D8DA1B6EBB8B7AEC7B2D7C854730D31* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___stateMachine0;
		ETAsyncTaskMethodBuilder_1_SetStateMachine_m5B87C2E5817CF286E3FCDFBB7C7BF417672DB76E(L_0, L_1, ETAsyncTaskMethodBuilder_1_SetStateMachine_m5B87C2E5817CF286E3FCDFBB7C7BF417672DB76E_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CWaitAllU3Ed__6_SetStateMachine_m8F2550CD0C39FBA84AF251340E455AE3C5EEF1E4_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CWaitAllU3Ed__6_t73CAD2CCB5423A31C85967FB33B23FE96219FFBF* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CWaitAllU3Ed__6_t73CAD2CCB5423A31C85967FB33B23FE96219FFBF*>(__this + _offset);
	U3CWaitAllU3Ed__6_SetStateMachine_m8F2550CD0C39FBA84AF251340E455AE3C5EEF1E4(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ET.ETVoid::Coroutine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETVoid_Coroutine_m7D69369538267F547E8D8AF8467A2806C5F6E6DA (ETVoid_tFB79A53EB5B1FFC7F4A2428E68797AD75B74DC38* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ETVoid_Coroutine_m7D69369538267F547E8D8AF8467A2806C5F6E6DA_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ETVoid_tFB79A53EB5B1FFC7F4A2428E68797AD75B74DC38* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ETVoid_tFB79A53EB5B1FFC7F4A2428E68797AD75B74DC38*>(__this + _offset);
	ETVoid_Coroutine_m7D69369538267F547E8D8AF8467A2806C5F6E6DA(_thisAdjusted, method);
}
// System.Boolean ET.ETVoid::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ETVoid_get_IsCompleted_m6EC6117D7E6C71F1ABDA3DD9BFA990560A812572 (ETVoid_tFB79A53EB5B1FFC7F4A2428E68797AD75B74DC38* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsCompleted => true;
		return (bool)1;
	}
}
IL2CPP_EXTERN_C  bool ETVoid_get_IsCompleted_m6EC6117D7E6C71F1ABDA3DD9BFA990560A812572_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ETVoid_tFB79A53EB5B1FFC7F4A2428E68797AD75B74DC38* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ETVoid_tFB79A53EB5B1FFC7F4A2428E68797AD75B74DC38*>(__this + _offset);
	bool _returnValue;
	_returnValue = ETVoid_get_IsCompleted_m6EC6117D7E6C71F1ABDA3DD9BFA990560A812572(_thisAdjusted, method);
	return _returnValue;
}
// System.Void ET.ETVoid::OnCompleted(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETVoid_OnCompleted_mE2A013466ABE3DE81D7193A13C5A88F902274170 (ETVoid_tFB79A53EB5B1FFC7F4A2428E68797AD75B74DC38* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___continuation0, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ETVoid_OnCompleted_mE2A013466ABE3DE81D7193A13C5A88F902274170_AdjustorThunk (RuntimeObject* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___continuation0, const RuntimeMethod* method)
{
	ETVoid_tFB79A53EB5B1FFC7F4A2428E68797AD75B74DC38* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ETVoid_tFB79A53EB5B1FFC7F4A2428E68797AD75B74DC38*>(__this + _offset);
	ETVoid_OnCompleted_mE2A013466ABE3DE81D7193A13C5A88F902274170(_thisAdjusted, ___continuation0, method);
}
// System.Void ET.ETVoid::UnsafeOnCompleted(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETVoid_UnsafeOnCompleted_mBA7A78A207BDC8D1E2AD8B0D957316B36D224213 (ETVoid_tFB79A53EB5B1FFC7F4A2428E68797AD75B74DC38* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___continuation0, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ETVoid_UnsafeOnCompleted_mBA7A78A207BDC8D1E2AD8B0D957316B36D224213_AdjustorThunk (RuntimeObject* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___continuation0, const RuntimeMethod* method)
{
	ETVoid_tFB79A53EB5B1FFC7F4A2428E68797AD75B74DC38* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ETVoid_tFB79A53EB5B1FFC7F4A2428E68797AD75B74DC38*>(__this + _offset);
	ETVoid_UnsafeOnCompleted_mBA7A78A207BDC8D1E2AD8B0D957316B36D224213(_thisAdjusted, ___continuation0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
int32_t KcpOutput_Invoke_m0D17200A85788343ECCC96D489F76518974662A5_Multicast(KcpOutput_t70A2E75BF30C9F6BBFA7EDCCF748E5F9C25F6732* __this, intptr_t ___buf0, int32_t ___len1, intptr_t ___kcp2, intptr_t ___user3, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		KcpOutput_t70A2E75BF30C9F6BBFA7EDCCF748E5F9C25F6732* currentDelegate = reinterpret_cast<KcpOutput_t70A2E75BF30C9F6BBFA7EDCCF748E5F9C25F6732*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, int32_t, intptr_t, intptr_t, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___buf0, ___len1, ___kcp2, ___user3, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
int32_t KcpOutput_Invoke_m0D17200A85788343ECCC96D489F76518974662A5_OpenInst(KcpOutput_t70A2E75BF30C9F6BBFA7EDCCF748E5F9C25F6732* __this, intptr_t ___buf0, int32_t ___len1, intptr_t ___kcp2, intptr_t ___user3, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (intptr_t, int32_t, intptr_t, intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___buf0, ___len1, ___kcp2, ___user3, method);
}
int32_t KcpOutput_Invoke_m0D17200A85788343ECCC96D489F76518974662A5_OpenStatic(KcpOutput_t70A2E75BF30C9F6BBFA7EDCCF748E5F9C25F6732* __this, intptr_t ___buf0, int32_t ___len1, intptr_t ___kcp2, intptr_t ___user3, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (intptr_t, int32_t, intptr_t, intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___buf0, ___len1, ___kcp2, ___user3, method);
}
int32_t KcpOutput_Invoke_m0D17200A85788343ECCC96D489F76518974662A5_OpenStaticInvoker(KcpOutput_t70A2E75BF30C9F6BBFA7EDCCF748E5F9C25F6732* __this, intptr_t ___buf0, int32_t ___len1, intptr_t ___kcp2, intptr_t ___user3, const RuntimeMethod* method)
{
	return InvokerFuncInvoker4< int32_t, intptr_t, int32_t, intptr_t, intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, ___buf0, ___len1, ___kcp2, ___user3);
}
int32_t KcpOutput_Invoke_m0D17200A85788343ECCC96D489F76518974662A5_ClosedStaticInvoker(KcpOutput_t70A2E75BF30C9F6BBFA7EDCCF748E5F9C25F6732* __this, intptr_t ___buf0, int32_t ___len1, intptr_t ___kcp2, intptr_t ___user3, const RuntimeMethod* method)
{
	return InvokerFuncInvoker5< int32_t, RuntimeObject*, intptr_t, int32_t, intptr_t, intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___buf0, ___len1, ___kcp2, ___user3);
}
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper_KcpOutput_t70A2E75BF30C9F6BBFA7EDCCF748E5F9C25F6732 (KcpOutput_t70A2E75BF30C9F6BBFA7EDCCF748E5F9C25F6732* __this, intptr_t ___buf0, int32_t ___len1, intptr_t ___kcp2, intptr_t ___user3, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc)(intptr_t, int32_t, intptr_t, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___buf0, ___len1, ___kcp2, ___user3);

	return returnValue;
}
// System.Void ET.KcpOutput::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpOutput__ctor_m352C858407C59680A6115553DB22CF7DBD0EC979 (KcpOutput_t70A2E75BF30C9F6BBFA7EDCCF748E5F9C25F6732* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 4;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&KcpOutput_Invoke_m0D17200A85788343ECCC96D489F76518974662A5_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&KcpOutput_Invoke_m0D17200A85788343ECCC96D489F76518974662A5_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&KcpOutput_Invoke_m0D17200A85788343ECCC96D489F76518974662A5_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___object0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&KcpOutput_Invoke_m0D17200A85788343ECCC96D489F76518974662A5_Multicast;
}
// System.Int32 ET.KcpOutput::Invoke(System.IntPtr,System.Int32,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t KcpOutput_Invoke_m0D17200A85788343ECCC96D489F76518974662A5 (KcpOutput_t70A2E75BF30C9F6BBFA7EDCCF748E5F9C25F6732* __this, intptr_t ___buf0, int32_t ___len1, intptr_t ___kcp2, intptr_t ___user3, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, int32_t, intptr_t, intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___buf0, ___len1, ___kcp2, ___user3, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult ET.KcpOutput::BeginInvoke(System.IntPtr,System.Int32,System.IntPtr,System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* KcpOutput_BeginInvoke_m530C0B87F4EB9F8B4883975895FF9E8D09FF65EF (KcpOutput_t70A2E75BF30C9F6BBFA7EDCCF748E5F9C25F6732* __this, intptr_t ___buf0, int32_t ___len1, intptr_t ___kcp2, intptr_t ___user3, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback4, RuntimeObject* ___object5, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[5] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___buf0);
	__d_args[1] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &___len1);
	__d_args[2] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___kcp2);
	__d_args[3] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___user3);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback4, (RuntimeObject*)___object5);
}
// System.Int32 ET.KcpOutput::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t KcpOutput_EndInvoke_mE9A16D749003A839866D6DE9A11DC52C47C83D24 (KcpOutput_t70A2E75BF30C9F6BBFA7EDCCF748E5F9C25F6732* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void KcpLog_Invoke_mF30BC38D82257CB8527D6E2CBCBAA2081B5FC074_Multicast(KcpLog_t166A3A6F579F69B0AA700460B0BF73A4B8C07C5F* __this, intptr_t ___buf0, int32_t ___len1, intptr_t ___kcp2, intptr_t ___user3, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		KcpLog_t166A3A6F579F69B0AA700460B0BF73A4B8C07C5F* currentDelegate = reinterpret_cast<KcpLog_t166A3A6F579F69B0AA700460B0BF73A4B8C07C5F*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, int32_t, intptr_t, intptr_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___buf0, ___len1, ___kcp2, ___user3, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void KcpLog_Invoke_mF30BC38D82257CB8527D6E2CBCBAA2081B5FC074_OpenInst(KcpLog_t166A3A6F579F69B0AA700460B0BF73A4B8C07C5F* __this, intptr_t ___buf0, int32_t ___len1, intptr_t ___kcp2, intptr_t ___user3, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, int32_t, intptr_t, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___buf0, ___len1, ___kcp2, ___user3, method);
}
void KcpLog_Invoke_mF30BC38D82257CB8527D6E2CBCBAA2081B5FC074_OpenStatic(KcpLog_t166A3A6F579F69B0AA700460B0BF73A4B8C07C5F* __this, intptr_t ___buf0, int32_t ___len1, intptr_t ___kcp2, intptr_t ___user3, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, int32_t, intptr_t, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___buf0, ___len1, ___kcp2, ___user3, method);
}
void KcpLog_Invoke_mF30BC38D82257CB8527D6E2CBCBAA2081B5FC074_OpenStaticInvoker(KcpLog_t166A3A6F579F69B0AA700460B0BF73A4B8C07C5F* __this, intptr_t ___buf0, int32_t ___len1, intptr_t ___kcp2, intptr_t ___user3, const RuntimeMethod* method)
{
	InvokerActionInvoker4< intptr_t, int32_t, intptr_t, intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, ___buf0, ___len1, ___kcp2, ___user3);
}
void KcpLog_Invoke_mF30BC38D82257CB8527D6E2CBCBAA2081B5FC074_ClosedStaticInvoker(KcpLog_t166A3A6F579F69B0AA700460B0BF73A4B8C07C5F* __this, intptr_t ___buf0, int32_t ___len1, intptr_t ___kcp2, intptr_t ___user3, const RuntimeMethod* method)
{
	InvokerActionInvoker5< RuntimeObject*, intptr_t, int32_t, intptr_t, intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___buf0, ___len1, ___kcp2, ___user3);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_KcpLog_t166A3A6F579F69B0AA700460B0BF73A4B8C07C5F (KcpLog_t166A3A6F579F69B0AA700460B0BF73A4B8C07C5F* __this, intptr_t ___buf0, int32_t ___len1, intptr_t ___kcp2, intptr_t ___user3, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(intptr_t, int32_t, intptr_t, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___buf0, ___len1, ___kcp2, ___user3);

}
// System.Void ET.KcpLog::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpLog__ctor_m6121C293C59A8EA0CAE5913857B1396DBFC0CDC8 (KcpLog_t166A3A6F579F69B0AA700460B0BF73A4B8C07C5F* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 4;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&KcpLog_Invoke_mF30BC38D82257CB8527D6E2CBCBAA2081B5FC074_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&KcpLog_Invoke_mF30BC38D82257CB8527D6E2CBCBAA2081B5FC074_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&KcpLog_Invoke_mF30BC38D82257CB8527D6E2CBCBAA2081B5FC074_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___object0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&KcpLog_Invoke_mF30BC38D82257CB8527D6E2CBCBAA2081B5FC074_Multicast;
}
// System.Void ET.KcpLog::Invoke(System.IntPtr,System.Int32,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpLog_Invoke_mF30BC38D82257CB8527D6E2CBCBAA2081B5FC074 (KcpLog_t166A3A6F579F69B0AA700460B0BF73A4B8C07C5F* __this, intptr_t ___buf0, int32_t ___len1, intptr_t ___kcp2, intptr_t ___user3, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, int32_t, intptr_t, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___buf0, ___len1, ___kcp2, ___user3, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult ET.KcpLog::BeginInvoke(System.IntPtr,System.Int32,System.IntPtr,System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* KcpLog_BeginInvoke_m1712EEC7A9E73AC66BC49E0420EA58DD3B1BD9DD (KcpLog_t166A3A6F579F69B0AA700460B0BF73A4B8C07C5F* __this, intptr_t ___buf0, int32_t ___len1, intptr_t ___kcp2, intptr_t ___user3, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback4, RuntimeObject* ___object5, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[5] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___buf0);
	__d_args[1] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &___len1);
	__d_args[2] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___kcp2);
	__d_args[3] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___user3);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback4, (RuntimeObject*)___object5);
}
// System.Void ET.KcpLog::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpLog_EndInvoke_m16B40206957AFDE3E0DA26112CC4BC3D6E3C77A1 (KcpLog_t166A3A6F579F69B0AA700460B0BF73A4B8C07C5F* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.UInt32 ET.Kcp::ikcp_check(System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Kcp_ikcp_check_m622BAB3EF82B3FA0D37104F8F36F075F47EACD2C (intptr_t ___kcp0, uint32_t ___current1, const RuntimeMethod* method) 
{
	typedef uint32_t (CDECL *PInvokeFunc) (intptr_t, uint32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_kcp_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(uint32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("kcp"), "ikcp_check", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_kcp_INTERNAL
	uint32_t returnValue = reinterpret_cast<PInvokeFunc>(ikcp_check)(___kcp0, ___current1);
	#else
	uint32_t returnValue = il2cppPInvokeFunc(___kcp0, ___current1);
	#endif

	return returnValue;
}
// System.IntPtr ET.Kcp::ikcp_create(System.UInt32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Kcp_ikcp_create_m65B289D9825C3E8701AAF805408A5C089A16AD0D (uint32_t ___conv0, intptr_t ___user1, const RuntimeMethod* method) 
{
	typedef intptr_t (CDECL *PInvokeFunc) (uint32_t, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_kcp_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(uint32_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("kcp"), "ikcp_create", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_kcp_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(ikcp_create)(___conv0, ___user1);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___conv0, ___user1);
	#endif

	return returnValue;
}
// System.Void ET.Kcp::ikcp_flush(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Kcp_ikcp_flush_m379F0AB1930C706120A548693C76BB8439108F7A (intptr_t ___kcp0, const RuntimeMethod* method) 
{
	typedef void (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_kcp_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("kcp"), "ikcp_flush", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_kcp_INTERNAL
	reinterpret_cast<PInvokeFunc>(ikcp_flush)(___kcp0);
	#else
	il2cppPInvokeFunc(___kcp0);
	#endif

}
// System.UInt32 ET.Kcp::ikcp_getconv(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Kcp_ikcp_getconv_m7CFD0C1FEF4825D838B385697A49B61A9D3919F7 (intptr_t ___ptr0, const RuntimeMethod* method) 
{
	typedef uint32_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_kcp_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("kcp"), "ikcp_getconv", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_kcp_INTERNAL
	uint32_t returnValue = reinterpret_cast<PInvokeFunc>(ikcp_getconv)(___ptr0);
	#else
	uint32_t returnValue = il2cppPInvokeFunc(___ptr0);
	#endif

	return returnValue;
}
// System.Int32 ET.Kcp::ikcp_input(System.IntPtr,System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Kcp_ikcp_input_mD236CC30373194C4027A7BD6E2561115DB933127 (intptr_t ___kcp0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data1, int32_t ___offset2, int32_t ___size3, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, uint8_t*, int32_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_kcp_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*) + sizeof(int32_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("kcp"), "ikcp_input", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___data1' to native representation
	uint8_t* ____data1_marshaled = NULL;
	if (___data1 != NULL)
	{
		____data1_marshaled = reinterpret_cast<uint8_t*>((___data1)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_kcp_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(ikcp_input)(___kcp0, ____data1_marshaled, ___offset2, ___size3);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___kcp0, ____data1_marshaled, ___offset2, ___size3);
	#endif

	return returnValue;
}
// System.Int32 ET.Kcp::ikcp_nodelay(System.IntPtr,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Kcp_ikcp_nodelay_m2AA1F18619F35C9787E1E849E2856BFDBA7AAB54 (intptr_t ___kcp0, int32_t ___nodelay1, int32_t ___interval2, int32_t ___resend3, int32_t ___nc4, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, int32_t, int32_t, int32_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_kcp_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t) + sizeof(int32_t) + sizeof(int32_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("kcp"), "ikcp_nodelay", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_kcp_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(ikcp_nodelay)(___kcp0, ___nodelay1, ___interval2, ___resend3, ___nc4);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___kcp0, ___nodelay1, ___interval2, ___resend3, ___nc4);
	#endif

	return returnValue;
}
// System.Int32 ET.Kcp::ikcp_peeksize(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Kcp_ikcp_peeksize_mF034ED89B138DB85D35CF6F55AE701F9A6A26A71 (intptr_t ___kcp0, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_kcp_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("kcp"), "ikcp_peeksize", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_kcp_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(ikcp_peeksize)(___kcp0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___kcp0);
	#endif

	return returnValue;
}
// System.Int32 ET.Kcp::ikcp_recv(System.IntPtr,System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Kcp_ikcp_recv_m4282CB4E958BB4A5802CE6FDC8DB4BD496B78996 (intptr_t ___kcp0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer1, int32_t ___index2, int32_t ___len3, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, uint8_t*, int32_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_kcp_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*) + sizeof(int32_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("kcp"), "ikcp_recv", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___buffer1' to native representation
	uint8_t* ____buffer1_marshaled = NULL;
	if (___buffer1 != NULL)
	{
		____buffer1_marshaled = reinterpret_cast<uint8_t*>((___buffer1)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_kcp_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(ikcp_recv)(___kcp0, ____buffer1_marshaled, ___index2, ___len3);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___kcp0, ____buffer1_marshaled, ___index2, ___len3);
	#endif

	return returnValue;
}
// System.Void ET.Kcp::ikcp_release(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Kcp_ikcp_release_mFEDEE6822FB19DD4DBA737A9530D29D8AA7CE7BB (intptr_t ___kcp0, const RuntimeMethod* method) 
{
	typedef void (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_kcp_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("kcp"), "ikcp_release", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_kcp_INTERNAL
	reinterpret_cast<PInvokeFunc>(ikcp_release)(___kcp0);
	#else
	il2cppPInvokeFunc(___kcp0);
	#endif

}
// System.Int32 ET.Kcp::ikcp_send(System.IntPtr,System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Kcp_ikcp_send_mC9AAFA8AC4B349A97A368AFA829D77E55C8682A4 (intptr_t ___kcp0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer1, int32_t ___offset2, int32_t ___len3, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, uint8_t*, int32_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_kcp_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*) + sizeof(int32_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("kcp"), "ikcp_send", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___buffer1' to native representation
	uint8_t* ____buffer1_marshaled = NULL;
	if (___buffer1 != NULL)
	{
		____buffer1_marshaled = reinterpret_cast<uint8_t*>((___buffer1)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_kcp_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(ikcp_send)(___kcp0, ____buffer1_marshaled, ___offset2, ___len3);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___kcp0, ____buffer1_marshaled, ___offset2, ___len3);
	#endif

	return returnValue;
}
// System.Void ET.Kcp::ikcp_setminrto(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Kcp_ikcp_setminrto_m6BA2CC874C011FD9ADF9B6D324114B074BED1E3C (intptr_t ___ptr0, int32_t ___minrto1, const RuntimeMethod* method) 
{
	typedef void (CDECL *PInvokeFunc) (intptr_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_kcp_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("kcp"), "ikcp_setminrto", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_kcp_INTERNAL
	reinterpret_cast<PInvokeFunc>(ikcp_setminrto)(___ptr0, ___minrto1);
	#else
	il2cppPInvokeFunc(___ptr0, ___minrto1);
	#endif

}
// System.Int32 ET.Kcp::ikcp_setmtu(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Kcp_ikcp_setmtu_m603F2EA8751291C312C84A8C967E8D576ABED42B (intptr_t ___kcp0, int32_t ___mtu1, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_kcp_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("kcp"), "ikcp_setmtu", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_kcp_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(ikcp_setmtu)(___kcp0, ___mtu1);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___kcp0, ___mtu1);
	#endif

	return returnValue;
}
// System.Void ET.Kcp::ikcp_setoutput(ET.KcpOutput)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Kcp_ikcp_setoutput_m641E9841DD1F17DE384A86F91F1B76E4CE3BB900 (KcpOutput_t70A2E75BF30C9F6BBFA7EDCCF748E5F9C25F6732* ___output0, const RuntimeMethod* method) 
{
	typedef void (CDECL *PInvokeFunc) (Il2CppMethodPointer);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_kcp_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("kcp"), "ikcp_setoutput", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___output0' to native representation
	Il2CppMethodPointer ____output0_marshaled = NULL;
	____output0_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___output0));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_kcp_INTERNAL
	reinterpret_cast<PInvokeFunc>(ikcp_setoutput)(____output0_marshaled);
	#else
	il2cppPInvokeFunc(____output0_marshaled);
	#endif

}
// System.Void ET.Kcp::ikcp_setlog(ET.KcpLog)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Kcp_ikcp_setlog_m15CF697BD5FBF75AA0C6D0E1D3A8E88846D56A9F (KcpLog_t166A3A6F579F69B0AA700460B0BF73A4B8C07C5F* ___log0, const RuntimeMethod* method) 
{
	typedef void (CDECL *PInvokeFunc) (Il2CppMethodPointer);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_kcp_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("kcp"), "ikcp_setlog", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___log0' to native representation
	Il2CppMethodPointer ____log0_marshaled = NULL;
	____log0_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___log0));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_kcp_INTERNAL
	reinterpret_cast<PInvokeFunc>(ikcp_setlog)(____log0_marshaled);
	#else
	il2cppPInvokeFunc(____log0_marshaled);
	#endif

}
// System.Void ET.Kcp::ikcp_update(System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Kcp_ikcp_update_mFF3FA1FF289B9117348C6790BA46AF52E0760E29 (intptr_t ___kcp0, uint32_t ___current1, const RuntimeMethod* method) 
{
	typedef void (CDECL *PInvokeFunc) (intptr_t, uint32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_kcp_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(uint32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("kcp"), "ikcp_update", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_kcp_INTERNAL
	reinterpret_cast<PInvokeFunc>(ikcp_update)(___kcp0, ___current1);
	#else
	il2cppPInvokeFunc(___kcp0, ___current1);
	#endif

}
// System.Int32 ET.Kcp::ikcp_waitsnd(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Kcp_ikcp_waitsnd_mB8BCFAC87034508D3392ADDA415892C4AE41B4F4 (intptr_t ___kcp0, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_kcp_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("kcp"), "ikcp_waitsnd", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_kcp_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(ikcp_waitsnd)(___kcp0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___kcp0);
	#endif

	return returnValue;
}
// System.Int32 ET.Kcp::ikcp_wndsize(System.IntPtr,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Kcp_ikcp_wndsize_m32F6D50A19B5381B060FAF4A24C8859BAF7EB3CB (intptr_t ___kcp0, int32_t ___sndwnd1, int32_t ___rcvwnd2, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, int32_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_kcp_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("kcp"), "ikcp_wndsize", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_kcp_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(ikcp_wndsize)(___kcp0, ___sndwnd1, ___rcvwnd2);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___kcp0, ___sndwnd1, ___rcvwnd2);
	#endif

	return returnValue;
}
// System.UInt32 ET.Kcp::KcpCheck(System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Kcp_KcpCheck_mFF5699B461298AC1FC2BDDB193A8B265C42A5B11 (intptr_t ___kcp0, uint32_t ___current1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (kcp == IntPtr.Zero)
		intptr_t L_0 = ___kcp0;
		intptr_t L_1 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_2;
		L_2 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_0018;
		}
	}
	{
		// throw new Exception($"kcp error, kcp point is zero");
		Exception_t* L_3 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFCE88E0B4651EFA0D8F7973A07C513EC28038096)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Kcp_KcpCheck_mFF5699B461298AC1FC2BDDB193A8B265C42A5B11_RuntimeMethod_var)));
	}

IL_0018:
	{
		// uint ret = ikcp_check(kcp, current);
		intptr_t L_4 = ___kcp0;
		uint32_t L_5 = ___current1;
		uint32_t L_6;
		L_6 = Kcp_ikcp_check_m622BAB3EF82B3FA0D37104F8F36F075F47EACD2C(L_4, L_5, NULL);
		// return ret;
		return L_6;
	}
}
// System.IntPtr ET.Kcp::KcpCreate(System.UInt32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Kcp_KcpCreate_mFB6C10BC1F2873F05BA660C3627CC9C8D454F925 (uint32_t ___conv0, intptr_t ___user1, const RuntimeMethod* method) 
{
	{
		// return ikcp_create(conv, user);
		uint32_t L_0 = ___conv0;
		intptr_t L_1 = ___user1;
		intptr_t L_2;
		L_2 = Kcp_ikcp_create_m65B289D9825C3E8701AAF805408A5C089A16AD0D(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Void ET.Kcp::KcpFlush(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Kcp_KcpFlush_m0D37EEA2AAF1E2B7445CCD3ADC0CBBF9DB909283 (intptr_t ___kcp0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (kcp == IntPtr.Zero)
		intptr_t L_0 = ___kcp0;
		intptr_t L_1 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_2;
		L_2 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_0018;
		}
	}
	{
		// throw new Exception($"kcp error, kcp point is zero");
		Exception_t* L_3 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFCE88E0B4651EFA0D8F7973A07C513EC28038096)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Kcp_KcpFlush_m0D37EEA2AAF1E2B7445CCD3ADC0CBBF9DB909283_RuntimeMethod_var)));
	}

IL_0018:
	{
		// ikcp_flush(kcp);
		intptr_t L_4 = ___kcp0;
		Kcp_ikcp_flush_m379F0AB1930C706120A548693C76BB8439108F7A(L_4, NULL);
		// }
		return;
	}
}
// System.UInt32 ET.Kcp::KcpGetconv(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Kcp_KcpGetconv_m75E390D675FD17CE5129D2E92EBAB2A3C7744B0D (intptr_t ___ptr0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (ptr == IntPtr.Zero)
		intptr_t L_0 = ___ptr0;
		intptr_t L_1 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_2;
		L_2 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_0018;
		}
	}
	{
		// throw new Exception($"kcp error, kcp point is zero");
		Exception_t* L_3 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFCE88E0B4651EFA0D8F7973A07C513EC28038096)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Kcp_KcpGetconv_m75E390D675FD17CE5129D2E92EBAB2A3C7744B0D_RuntimeMethod_var)));
	}

IL_0018:
	{
		// return ikcp_getconv(ptr);
		intptr_t L_4 = ___ptr0;
		uint32_t L_5;
		L_5 = Kcp_ikcp_getconv_m7CFD0C1FEF4825D838B385697A49B61A9D3919F7(L_4, NULL);
		return L_5;
	}
}
// System.Int32 ET.Kcp::KcpInput(System.IntPtr,System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Kcp_KcpInput_mDEAA6D3D2FEC0B5472CB3FAE978ED5DD9F049E8A (intptr_t ___kcp0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer1, int32_t ___offset2, int32_t ___len3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (kcp == IntPtr.Zero)
		intptr_t L_0 = ___kcp0;
		intptr_t L_1 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_2;
		L_2 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_0018;
		}
	}
	{
		// throw new Exception($"kcp error, kcp point is zero");
		Exception_t* L_3 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFCE88E0B4651EFA0D8F7973A07C513EC28038096)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Kcp_KcpInput_mDEAA6D3D2FEC0B5472CB3FAE978ED5DD9F049E8A_RuntimeMethod_var)));
	}

IL_0018:
	{
		// if (offset + len > buffer.Length)
		int32_t L_4 = ___offset2;
		int32_t L_5 = ___len3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___buffer1;
		NullCheck(L_6);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_4, L_5))) <= ((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length)))))
		{
			goto IL_0044;
		}
	}
	{
		// throw new Exception($"kcp error, KcpInput {buffer.Length} {offset} {len}");
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___buffer1;
		NullCheck(L_7);
		int32_t L_8 = ((int32_t)(((RuntimeArray*)L_7)->max_length));
		RuntimeObject* L_9 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_8);
		int32_t L_10 = ___offset2;
		int32_t L_11 = L_10;
		RuntimeObject* L_12 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_11);
		int32_t L_13 = ___len3;
		int32_t L_14 = L_13;
		RuntimeObject* L_15 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_14);
		String_t* L_16;
		L_16 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF5B17BC8CAFB0366DD8D8EA29F1A2C07CCE73DC5)), L_9, L_12, L_15, NULL);
		Exception_t* L_17 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_17);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_17, L_16, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Kcp_KcpInput_mDEAA6D3D2FEC0B5472CB3FAE978ED5DD9F049E8A_RuntimeMethod_var)));
	}

IL_0044:
	{
		// int ret = ikcp_input(kcp, buffer, offset, len);
		intptr_t L_18 = ___kcp0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = ___buffer1;
		int32_t L_20 = ___offset2;
		int32_t L_21 = ___len3;
		int32_t L_22;
		L_22 = Kcp_ikcp_input_mD236CC30373194C4027A7BD6E2561115DB933127(L_18, L_19, L_20, L_21, NULL);
		// return ret;
		return L_22;
	}
}
// System.Int32 ET.Kcp::KcpNodelay(System.IntPtr,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Kcp_KcpNodelay_mC659F51BEF21E59DC93BB569DFB20B030F8BEBC2 (intptr_t ___kcp0, int32_t ___nodelay1, int32_t ___interval2, int32_t ___resend3, int32_t ___nc4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (kcp == IntPtr.Zero)
		intptr_t L_0 = ___kcp0;
		intptr_t L_1 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_2;
		L_2 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_0018;
		}
	}
	{
		// throw new Exception($"kcp error, kcp point is zero");
		Exception_t* L_3 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFCE88E0B4651EFA0D8F7973A07C513EC28038096)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Kcp_KcpNodelay_mC659F51BEF21E59DC93BB569DFB20B030F8BEBC2_RuntimeMethod_var)));
	}

IL_0018:
	{
		// return ikcp_nodelay(kcp, nodelay, interval, resend, nc);
		intptr_t L_4 = ___kcp0;
		int32_t L_5 = ___nodelay1;
		int32_t L_6 = ___interval2;
		int32_t L_7 = ___resend3;
		int32_t L_8 = ___nc4;
		int32_t L_9;
		L_9 = Kcp_ikcp_nodelay_m2AA1F18619F35C9787E1E849E2856BFDBA7AAB54(L_4, L_5, L_6, L_7, L_8, NULL);
		return L_9;
	}
}
// System.Int32 ET.Kcp::KcpPeeksize(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Kcp_KcpPeeksize_m4E98089F13E28D997C53B9F43318E1A378C2577D (intptr_t ___kcp0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (kcp == IntPtr.Zero)
		intptr_t L_0 = ___kcp0;
		intptr_t L_1 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_2;
		L_2 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_0018;
		}
	}
	{
		// throw new Exception($"kcp error, kcp point is zero");
		Exception_t* L_3 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFCE88E0B4651EFA0D8F7973A07C513EC28038096)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Kcp_KcpPeeksize_m4E98089F13E28D997C53B9F43318E1A378C2577D_RuntimeMethod_var)));
	}

IL_0018:
	{
		// int ret = ikcp_peeksize(kcp);
		intptr_t L_4 = ___kcp0;
		int32_t L_5;
		L_5 = Kcp_ikcp_peeksize_mF034ED89B138DB85D35CF6F55AE701F9A6A26A71(L_4, NULL);
		// return ret;
		return L_5;
	}
}
// System.Int32 ET.Kcp::KcpRecv(System.IntPtr,System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Kcp_KcpRecv_m4A8EADD4666985339638B265B14D5C03D3BF77AF (intptr_t ___kcp0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer1, int32_t ___index2, int32_t ___len3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (kcp == IntPtr.Zero)
		intptr_t L_0 = ___kcp0;
		intptr_t L_1 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_2;
		L_2 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_0018;
		}
	}
	{
		// throw new Exception($"kcp error, kcp point is zero");
		Exception_t* L_3 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFCE88E0B4651EFA0D8F7973A07C513EC28038096)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Kcp_KcpRecv_m4A8EADD4666985339638B265B14D5C03D3BF77AF_RuntimeMethod_var)));
	}

IL_0018:
	{
		// if (buffer.Length < index + len)
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___buffer1;
		NullCheck(L_4);
		int32_t L_5 = ___index2;
		int32_t L_6 = ___len3;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))) >= ((int32_t)((int32_t)il2cpp_codegen_add(L_5, L_6)))))
		{
			goto IL_003c;
		}
	}
	{
		// throw new Exception($"kcp error, KcpRecv error: {index} {len}");
		int32_t L_7 = ___index2;
		int32_t L_8 = L_7;
		RuntimeObject* L_9 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_8);
		int32_t L_10 = ___len3;
		int32_t L_11 = L_10;
		RuntimeObject* L_12 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_11);
		String_t* L_13;
		L_13 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral02A29BDC20BCE88DC132CE04A01DD7C3469EA8EB)), L_9, L_12, NULL);
		Exception_t* L_14 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_14);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_14, L_13, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Kcp_KcpRecv_m4A8EADD4666985339638B265B14D5C03D3BF77AF_RuntimeMethod_var)));
	}

IL_003c:
	{
		// int ret = ikcp_recv(kcp, buffer, index, len);
		intptr_t L_15 = ___kcp0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = ___buffer1;
		int32_t L_17 = ___index2;
		int32_t L_18 = ___len3;
		int32_t L_19;
		L_19 = Kcp_ikcp_recv_m4282CB4E958BB4A5802CE6FDC8DB4BD496B78996(L_15, L_16, L_17, L_18, NULL);
		// return ret;
		return L_19;
	}
}
// System.Void ET.Kcp::KcpRelease(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Kcp_KcpRelease_m9942274BE8E5A2DCA150958CF8563D5229A06164 (intptr_t ___kcp0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (kcp == IntPtr.Zero)
		intptr_t L_0 = ___kcp0;
		intptr_t L_1 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_2;
		L_2 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_0018;
		}
	}
	{
		// throw new Exception($"kcp error, kcp point is zero");
		Exception_t* L_3 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFCE88E0B4651EFA0D8F7973A07C513EC28038096)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Kcp_KcpRelease_m9942274BE8E5A2DCA150958CF8563D5229A06164_RuntimeMethod_var)));
	}

IL_0018:
	{
		// ikcp_release(kcp);
		intptr_t L_4 = ___kcp0;
		Kcp_ikcp_release_mFEDEE6822FB19DD4DBA737A9530D29D8AA7CE7BB(L_4, NULL);
		// }
		return;
	}
}
// System.Int32 ET.Kcp::KcpSend(System.IntPtr,System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Kcp_KcpSend_m109609A727F084054004E1F15BC55EC65D4F86AD (intptr_t ___kcp0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer1, int32_t ___offset2, int32_t ___len3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (kcp == IntPtr.Zero)
		intptr_t L_0 = ___kcp0;
		intptr_t L_1 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_2;
		L_2 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_0018;
		}
	}
	{
		// throw new Exception($"kcp error, kcp point is zero");
		Exception_t* L_3 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFCE88E0B4651EFA0D8F7973A07C513EC28038096)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Kcp_KcpSend_m109609A727F084054004E1F15BC55EC65D4F86AD_RuntimeMethod_var)));
	}

IL_0018:
	{
		// if (offset + len > buffer.Length)
		int32_t L_4 = ___offset2;
		int32_t L_5 = ___len3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___buffer1;
		NullCheck(L_6);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_4, L_5))) <= ((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length)))))
		{
			goto IL_0044;
		}
	}
	{
		// throw new Exception($"kcp error, KcpSend {buffer.Length} {offset} {len}");
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___buffer1;
		NullCheck(L_7);
		int32_t L_8 = ((int32_t)(((RuntimeArray*)L_7)->max_length));
		RuntimeObject* L_9 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_8);
		int32_t L_10 = ___offset2;
		int32_t L_11 = L_10;
		RuntimeObject* L_12 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_11);
		int32_t L_13 = ___len3;
		int32_t L_14 = L_13;
		RuntimeObject* L_15 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_14);
		String_t* L_16;
		L_16 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral14B9C4ED649A12F3286872BC02BF44694FF70613)), L_9, L_12, L_15, NULL);
		Exception_t* L_17 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_17);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_17, L_16, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Kcp_KcpSend_m109609A727F084054004E1F15BC55EC65D4F86AD_RuntimeMethod_var)));
	}

IL_0044:
	{
		// int ret = ikcp_send(kcp, buffer, offset, len);
		intptr_t L_18 = ___kcp0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = ___buffer1;
		int32_t L_20 = ___offset2;
		int32_t L_21 = ___len3;
		int32_t L_22;
		L_22 = Kcp_ikcp_send_mC9AAFA8AC4B349A97A368AFA829D77E55C8682A4(L_18, L_19, L_20, L_21, NULL);
		// return ret;
		return L_22;
	}
}
// System.Void ET.Kcp::KcpSetminrto(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Kcp_KcpSetminrto_mEB93821BF191ACBBBCC1E7918E45B71F1ED13903 (intptr_t ___kcp0, int32_t ___minrto1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (kcp == IntPtr.Zero)
		intptr_t L_0 = ___kcp0;
		intptr_t L_1 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_2;
		L_2 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_0018;
		}
	}
	{
		// throw new Exception($"kcp error, kcp point is zero");
		Exception_t* L_3 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFCE88E0B4651EFA0D8F7973A07C513EC28038096)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Kcp_KcpSetminrto_mEB93821BF191ACBBBCC1E7918E45B71F1ED13903_RuntimeMethod_var)));
	}

IL_0018:
	{
		// ikcp_setminrto(kcp, minrto);
		intptr_t L_4 = ___kcp0;
		int32_t L_5 = ___minrto1;
		Kcp_ikcp_setminrto_m6BA2CC874C011FD9ADF9B6D324114B074BED1E3C(L_4, L_5, NULL);
		// }
		return;
	}
}
// System.Int32 ET.Kcp::KcpSetmtu(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Kcp_KcpSetmtu_m627959E37515A9F77BC31566CAA74816C187192F (intptr_t ___kcp0, int32_t ___mtu1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (kcp == IntPtr.Zero)
		intptr_t L_0 = ___kcp0;
		intptr_t L_1 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_2;
		L_2 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_0018;
		}
	}
	{
		// throw new Exception($"kcp error, kcp point is zero");
		Exception_t* L_3 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFCE88E0B4651EFA0D8F7973A07C513EC28038096)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Kcp_KcpSetmtu_m627959E37515A9F77BC31566CAA74816C187192F_RuntimeMethod_var)));
	}

IL_0018:
	{
		// return ikcp_setmtu(kcp, mtu);
		intptr_t L_4 = ___kcp0;
		int32_t L_5 = ___mtu1;
		int32_t L_6;
		L_6 = Kcp_ikcp_setmtu_m603F2EA8751291C312C84A8C967E8D576ABED42B(L_4, L_5, NULL);
		return L_6;
	}
}
// System.Void ET.Kcp::KcpSetoutput(ET.KcpOutput)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Kcp_KcpSetoutput_m650A6F5A616A162B7F488F1F95A4FC3270EAC628 (KcpOutput_t70A2E75BF30C9F6BBFA7EDCCF748E5F9C25F6732* ___output0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Kcp_t429AB84FF46AA83D15D3DA2EF4C9CE96BF648B30_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// KcpOutput = output;
		KcpOutput_t70A2E75BF30C9F6BBFA7EDCCF748E5F9C25F6732* L_0 = ___output0;
		((Kcp_t429AB84FF46AA83D15D3DA2EF4C9CE96BF648B30_StaticFields*)il2cpp_codegen_static_fields_for(Kcp_t429AB84FF46AA83D15D3DA2EF4C9CE96BF648B30_il2cpp_TypeInfo_var))->___KcpOutput_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((Kcp_t429AB84FF46AA83D15D3DA2EF4C9CE96BF648B30_StaticFields*)il2cpp_codegen_static_fields_for(Kcp_t429AB84FF46AA83D15D3DA2EF4C9CE96BF648B30_il2cpp_TypeInfo_var))->___KcpOutput_3), (void*)L_0);
		// ikcp_setoutput(KcpOutput);
		KcpOutput_t70A2E75BF30C9F6BBFA7EDCCF748E5F9C25F6732* L_1 = ((Kcp_t429AB84FF46AA83D15D3DA2EF4C9CE96BF648B30_StaticFields*)il2cpp_codegen_static_fields_for(Kcp_t429AB84FF46AA83D15D3DA2EF4C9CE96BF648B30_il2cpp_TypeInfo_var))->___KcpOutput_3;
		Kcp_ikcp_setoutput_m641E9841DD1F17DE384A86F91F1B76E4CE3BB900(L_1, NULL);
		// }
		return;
	}
}
// System.Void ET.Kcp::KcpSetLog(ET.KcpLog)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Kcp_KcpSetLog_m4F59E7E9344EFC7217B9C84FE0DFEF2EE0B5EE25 (KcpLog_t166A3A6F579F69B0AA700460B0BF73A4B8C07C5F* ___kcpLog0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Kcp_t429AB84FF46AA83D15D3DA2EF4C9CE96BF648B30_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// KcpLog = kcpLog;
		KcpLog_t166A3A6F579F69B0AA700460B0BF73A4B8C07C5F* L_0 = ___kcpLog0;
		((Kcp_t429AB84FF46AA83D15D3DA2EF4C9CE96BF648B30_StaticFields*)il2cpp_codegen_static_fields_for(Kcp_t429AB84FF46AA83D15D3DA2EF4C9CE96BF648B30_il2cpp_TypeInfo_var))->___KcpLog_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((Kcp_t429AB84FF46AA83D15D3DA2EF4C9CE96BF648B30_StaticFields*)il2cpp_codegen_static_fields_for(Kcp_t429AB84FF46AA83D15D3DA2EF4C9CE96BF648B30_il2cpp_TypeInfo_var))->___KcpLog_4), (void*)L_0);
		// ikcp_setlog(KcpLog);
		KcpLog_t166A3A6F579F69B0AA700460B0BF73A4B8C07C5F* L_1 = ((Kcp_t429AB84FF46AA83D15D3DA2EF4C9CE96BF648B30_StaticFields*)il2cpp_codegen_static_fields_for(Kcp_t429AB84FF46AA83D15D3DA2EF4C9CE96BF648B30_il2cpp_TypeInfo_var))->___KcpLog_4;
		Kcp_ikcp_setlog_m15CF697BD5FBF75AA0C6D0E1D3A8E88846D56A9F(L_1, NULL);
		// }
		return;
	}
}
// System.Void ET.Kcp::KcpUpdate(System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Kcp_KcpUpdate_m4B32869D5B5DD50FFEA8C80760FEEC026A7085AD (intptr_t ___kcp0, uint32_t ___current1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (kcp == IntPtr.Zero)
		intptr_t L_0 = ___kcp0;
		intptr_t L_1 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_2;
		L_2 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_0018;
		}
	}
	{
		// throw new Exception($"kcp error, kcp point is zero");
		Exception_t* L_3 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFCE88E0B4651EFA0D8F7973A07C513EC28038096)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Kcp_KcpUpdate_m4B32869D5B5DD50FFEA8C80760FEEC026A7085AD_RuntimeMethod_var)));
	}

IL_0018:
	{
		// ikcp_update(kcp, current);
		intptr_t L_4 = ___kcp0;
		uint32_t L_5 = ___current1;
		Kcp_ikcp_update_mFF3FA1FF289B9117348C6790BA46AF52E0760E29(L_4, L_5, NULL);
		// }
		return;
	}
}
// System.Int32 ET.Kcp::KcpWaitsnd(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Kcp_KcpWaitsnd_m069B8A91826334FB50024D0A584E05A50AFAEB91 (intptr_t ___kcp0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (kcp == IntPtr.Zero)
		intptr_t L_0 = ___kcp0;
		intptr_t L_1 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_2;
		L_2 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_0018;
		}
	}
	{
		// throw new Exception($"kcp error, kcp point is zero");
		Exception_t* L_3 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFCE88E0B4651EFA0D8F7973A07C513EC28038096)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Kcp_KcpWaitsnd_m069B8A91826334FB50024D0A584E05A50AFAEB91_RuntimeMethod_var)));
	}

IL_0018:
	{
		// int ret = ikcp_waitsnd(kcp);
		intptr_t L_4 = ___kcp0;
		int32_t L_5;
		L_5 = Kcp_ikcp_waitsnd_mB8BCFAC87034508D3392ADDA415892C4AE41B4F4(L_4, NULL);
		// return ret;
		return L_5;
	}
}
// System.Int32 ET.Kcp::KcpWndsize(System.IntPtr,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Kcp_KcpWndsize_m76F69DCF04008E654B49358FDD4FD8D571E9D514 (intptr_t ___kcp0, int32_t ___sndwnd1, int32_t ___rcvwnd2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (kcp == IntPtr.Zero)
		intptr_t L_0 = ___kcp0;
		intptr_t L_1 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_2;
		L_2 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_0018;
		}
	}
	{
		// throw new Exception($"kcp error, kcp point is zero");
		Exception_t* L_3 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFCE88E0B4651EFA0D8F7973A07C513EC28038096)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Kcp_KcpWndsize_m76F69DCF04008E654B49358FDD4FD8D571E9D514_RuntimeMethod_var)));
	}

IL_0018:
	{
		// return ikcp_wndsize(kcp, sndwnd, rcvwnd);
		intptr_t L_4 = ___kcp0;
		int32_t L_5 = ___sndwnd1;
		int32_t L_6 = ___rcvwnd2;
		int32_t L_7;
		L_7 = Kcp_ikcp_wndsize_m32F6D50A19B5381B060FAF4A24C8859BAF7EB3CB(L_4, L_5, L_6, NULL);
		return L_7;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.IntPtr ET.Recast::RecastLoad(System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recast_RecastLoad_mB4EE23761CD49A97B85FA7639E4DF250BF8FA623 (int32_t ___id0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer1, int32_t ___n2, const RuntimeMethod* method) 
{
	typedef intptr_t (CDECL *PInvokeFunc) (int32_t, uint8_t*, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_RecastDll_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t) + sizeof(void*) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("RecastDll"), "RecastLoad", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___buffer1' to native representation
	uint8_t* ____buffer1_marshaled = NULL;
	if (___buffer1 != NULL)
	{
		____buffer1_marshaled = reinterpret_cast<uint8_t*>((___buffer1)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_RecastDll_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(RecastLoad)(___id0, ____buffer1_marshaled, ___n2);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___id0, ____buffer1_marshaled, ___n2);
	#endif

	return returnValue;
}
// System.Int64 ET.Recast::RecastLoadLong(System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Recast_RecastLoadLong_m2CB9D37282F4678187E58DD460DD58AFFA103E38 (int32_t ___id0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer1, int32_t ___n2, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return RecastLoad(id, buffer, n).ToInt64();
		int32_t L_0 = ___id0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___buffer1;
		int32_t L_2 = ___n2;
		intptr_t L_3;
		L_3 = Recast_RecastLoad_mB4EE23761CD49A97B85FA7639E4DF250BF8FA623(L_0, L_1, L_2, NULL);
		V_0 = L_3;
		int64_t L_4;
		L_4 = IntPtr_ToInt64_m0F81FB6FB08014074D4F5B915EDAB06A08552032((&V_0), NULL);
		return L_4;
	}
}
// System.IntPtr ET.Recast::RecastGet(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recast_RecastGet_m467619DA580236F07A592226572C394AFA40F497 (int32_t ___id0, const RuntimeMethod* method) 
{
	typedef intptr_t (CDECL *PInvokeFunc) (int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_RecastDll_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("RecastDll"), "RecastGet", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_RecastDll_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(RecastGet)(___id0);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___id0);
	#endif

	return returnValue;
}
// System.Int64 ET.Recast::RecastGetLong(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Recast_RecastGetLong_mDD98E4DB71AF743043A54422A7B7ED02988811FD (int32_t ___id0, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return RecastGet(id).ToInt32();
		int32_t L_0 = ___id0;
		intptr_t L_1;
		L_1 = Recast_RecastGet_m467619DA580236F07A592226572C394AFA40F497(L_0, NULL);
		V_0 = L_1;
		int32_t L_2;
		L_2 = IntPtr_ToInt32_mD53B5D2C73C7E4BE5ADEBC5D187EACC83D5BB292((&V_0), NULL);
		return ((int64_t)L_2);
	}
}
// System.Void ET.Recast::RecastClear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recast_RecastClear_m473B8D51FA6D5E6F2E0779D41ADC34AE02FF3590 (const RuntimeMethod* method) 
{
	typedef void (CDECL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_RecastDll_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("RecastDll"), "RecastClear", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_RecastDll_INTERNAL
	reinterpret_cast<PInvokeFunc>(RecastClear)();
	#else
	il2cppPInvokeFunc();
	#endif

}
// System.Int32 ET.Recast::RecastFind(System.IntPtr,System.Single[],System.Single[],System.Single[],System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Recast_RecastFind_mCBA38176FD73663D69B407633661CCEE4DCF29F0 (intptr_t ___navPtr0, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___extents1, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___startPos2, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___endPos3, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___straightPath4, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, float*, float*, float*, float*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_RecastDll_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*) + sizeof(void*) + sizeof(void*) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("RecastDll"), "RecastFind", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___extents1' to native representation
	float* ____extents1_marshaled = NULL;
	if (___extents1 != NULL)
	{
		____extents1_marshaled = reinterpret_cast<float*>((___extents1)->GetAddressAtUnchecked(0));
	}

	// Marshaling of parameter '___startPos2' to native representation
	float* ____startPos2_marshaled = NULL;
	if (___startPos2 != NULL)
	{
		____startPos2_marshaled = reinterpret_cast<float*>((___startPos2)->GetAddressAtUnchecked(0));
	}

	// Marshaling of parameter '___endPos3' to native representation
	float* ____endPos3_marshaled = NULL;
	if (___endPos3 != NULL)
	{
		____endPos3_marshaled = reinterpret_cast<float*>((___endPos3)->GetAddressAtUnchecked(0));
	}

	// Marshaling of parameter '___straightPath4' to native representation
	float* ____straightPath4_marshaled = NULL;
	if (___straightPath4 != NULL)
	{
		____straightPath4_marshaled = reinterpret_cast<float*>((___straightPath4)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_RecastDll_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(RecastFind)(___navPtr0, ____extents1_marshaled, ____startPos2_marshaled, ____endPos3_marshaled, ____straightPath4_marshaled);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___navPtr0, ____extents1_marshaled, ____startPos2_marshaled, ____endPos3_marshaled, ____straightPath4_marshaled);
	#endif

	return returnValue;
}
// System.Int32 ET.Recast::RecastFind(System.Int64,System.Single[],System.Single[],System.Single[],System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Recast_RecastFind_m392F707F2F5368B22A882CE64BA38AE22E3642E8 (int64_t ___navPtr0, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___extents1, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___startPos2, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___endPos3, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___straightPath4, const RuntimeMethod* method) 
{
	{
		// return RecastFind(new IntPtr(navPtr), extents, startPos, endPos, straightPath);
		int64_t L_0 = ___navPtr0;
		intptr_t L_1;
		memset((&L_1), 0, sizeof(L_1));
		IntPtr__ctor_m2C033540A2F274766CF5C2A120587DD997E3F6DC((&L_1), L_0, /*hidden argument*/NULL);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_2 = ___extents1;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_3 = ___startPos2;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_4 = ___endPos3;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_5 = ___straightPath4;
		int32_t L_6;
		L_6 = Recast_RecastFind_mCBA38176FD73663D69B407633661CCEE4DCF29F0(L_1, L_2, L_3, L_4, L_5, NULL);
		return L_6;
	}
}
// System.Int32 ET.Recast::RecastFindNearestPoint(System.IntPtr,System.Single[],System.Single[],System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Recast_RecastFindNearestPoint_m11C47CB1E714AEF02D2C1A46C31EC9E835C5DB4B (intptr_t ___navPtr0, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___extents1, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___pos2, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___nearestPos3, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, float*, float*, float*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_RecastDll_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*) + sizeof(void*) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("RecastDll"), "RecastFindNearestPoint", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___extents1' to native representation
	float* ____extents1_marshaled = NULL;
	if (___extents1 != NULL)
	{
		____extents1_marshaled = reinterpret_cast<float*>((___extents1)->GetAddressAtUnchecked(0));
	}

	// Marshaling of parameter '___pos2' to native representation
	float* ____pos2_marshaled = NULL;
	if (___pos2 != NULL)
	{
		____pos2_marshaled = reinterpret_cast<float*>((___pos2)->GetAddressAtUnchecked(0));
	}

	// Marshaling of parameter '___nearestPos3' to native representation
	float* ____nearestPos3_marshaled = NULL;
	if (___nearestPos3 != NULL)
	{
		____nearestPos3_marshaled = reinterpret_cast<float*>((___nearestPos3)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_RecastDll_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(RecastFindNearestPoint)(___navPtr0, ____extents1_marshaled, ____pos2_marshaled, ____nearestPos3_marshaled);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___navPtr0, ____extents1_marshaled, ____pos2_marshaled, ____nearestPos3_marshaled);
	#endif

	return returnValue;
}
// System.Int32 ET.Recast::RecastFindNearestPoint(System.Int64,System.Single[],System.Single[],System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Recast_RecastFindNearestPoint_m626C640DA9A8ADD1935B65905352F0C516A5D48B (int64_t ___navPtr0, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___extents1, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___pos2, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___nearestPos3, const RuntimeMethod* method) 
{
	{
		// return RecastFindNearestPoint(new IntPtr(navPtr), extents, pos, nearestPos);
		int64_t L_0 = ___navPtr0;
		intptr_t L_1;
		memset((&L_1), 0, sizeof(L_1));
		IntPtr__ctor_m2C033540A2F274766CF5C2A120587DD997E3F6DC((&L_1), L_0, /*hidden argument*/NULL);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_2 = ___extents1;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_3 = ___pos2;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_4 = ___nearestPos3;
		int32_t L_5;
		L_5 = Recast_RecastFindNearestPoint_m11C47CB1E714AEF02D2C1A46C31EC9E835C5DB4B(L_1, L_2, L_3, L_4, NULL);
		return L_5;
	}
}
// System.Int32 ET.Recast::RecastFindRandomPointAroundCircle(System.IntPtr,System.Single[],System.Single[],System.Single,System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Recast_RecastFindRandomPointAroundCircle_m56E946B64540AEB84DBB4115045F5F4BE8AB9D56 (intptr_t ___navPtr0, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___extents1, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___centerPos2, float ___radius3, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___randomPos4, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, float*, float*, float, float*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_RecastDll_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*) + sizeof(void*) + sizeof(float) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("RecastDll"), "RecastFindRandomPointAroundCircle", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___extents1' to native representation
	float* ____extents1_marshaled = NULL;
	if (___extents1 != NULL)
	{
		____extents1_marshaled = reinterpret_cast<float*>((___extents1)->GetAddressAtUnchecked(0));
	}

	// Marshaling of parameter '___centerPos2' to native representation
	float* ____centerPos2_marshaled = NULL;
	if (___centerPos2 != NULL)
	{
		____centerPos2_marshaled = reinterpret_cast<float*>((___centerPos2)->GetAddressAtUnchecked(0));
	}

	// Marshaling of parameter '___randomPos4' to native representation
	float* ____randomPos4_marshaled = NULL;
	if (___randomPos4 != NULL)
	{
		____randomPos4_marshaled = reinterpret_cast<float*>((___randomPos4)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_RecastDll_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(RecastFindRandomPointAroundCircle)(___navPtr0, ____extents1_marshaled, ____centerPos2_marshaled, ___radius3, ____randomPos4_marshaled);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___navPtr0, ____extents1_marshaled, ____centerPos2_marshaled, ___radius3, ____randomPos4_marshaled);
	#endif

	return returnValue;
}
// System.Int32 ET.Recast::RecastFindRandomPointAroundCircle(System.Int64,System.Single[],System.Single[],System.Single,System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Recast_RecastFindRandomPointAroundCircle_m7A9A846FF4C2B9A4EA0E998BD5826D8D025CBA4B (int64_t ___navPtr0, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___extents1, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___centerPos2, float ___radius3, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___randomPos4, const RuntimeMethod* method) 
{
	{
		// return RecastFindRandomPointAroundCircle(new IntPtr(navPtr), extents, centerPos, radius, randomPos);
		int64_t L_0 = ___navPtr0;
		intptr_t L_1;
		memset((&L_1), 0, sizeof(L_1));
		IntPtr__ctor_m2C033540A2F274766CF5C2A120587DD997E3F6DC((&L_1), L_0, /*hidden argument*/NULL);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_2 = ___extents1;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_3 = ___centerPos2;
		float L_4 = ___radius3;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_5 = ___randomPos4;
		int32_t L_6;
		L_6 = Recast_RecastFindRandomPointAroundCircle_m56E946B64540AEB84DBB4115045F5F4BE8AB9D56(L_1, L_2, L_3, L_4, L_5, NULL);
		return L_6;
	}
}
// System.Int32 ET.Recast::RecastFindRandomPoint(System.IntPtr,System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Recast_RecastFindRandomPoint_mE48982AD91CF18D8AF76BEDB8958CE8F0F2BBF13 (intptr_t ___navPtr0, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___randomPos1, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, float*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_RecastDll_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("RecastDll"), "RecastFindRandomPoint", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___randomPos1' to native representation
	float* ____randomPos1_marshaled = NULL;
	if (___randomPos1 != NULL)
	{
		____randomPos1_marshaled = reinterpret_cast<float*>((___randomPos1)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_RecastDll_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(RecastFindRandomPoint)(___navPtr0, ____randomPos1_marshaled);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___navPtr0, ____randomPos1_marshaled);
	#endif

	return returnValue;
}
// System.Int32 ET.Recast::RecastFindRandomPoint(System.Int64,System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Recast_RecastFindRandomPoint_m6BBAAC98659A9149E29F8BA6BE36DAA34DCEC5B2 (int64_t ___navPtr0, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___randomPos1, const RuntimeMethod* method) 
{
	{
		// return RecastFindRandomPoint(new IntPtr(navPtr), randomPos);
		int64_t L_0 = ___navPtr0;
		intptr_t L_1;
		memset((&L_1), 0, sizeof(L_1));
		IntPtr__ctor_m2C033540A2F274766CF5C2A120587DD997E3F6DC((&L_1), L_0, /*hidden argument*/NULL);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_2 = ___randomPos1;
		int32_t L_3;
		L_3 = Recast_RecastFindRandomPoint_mE48982AD91CF18D8AF76BEDB8958CE8F0F2BBF13(L_1, L_2, NULL);
		return L_3;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.UInt32 <PrivateImplementationDetails>::ComputeStringHash(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U3CPrivateImplementationDetailsU3E_ComputeStringHash_mACCF89F219EFB28070A76ADD1C2CA80E6E22B0F7 (String_t* ___s0, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		String_t* L_0 = ___s0;
		if (!L_0)
		{
			goto IL_002a;
		}
	}
	{
		V_0 = ((int32_t)-2128831035);
		V_1 = 0;
		goto IL_0021;
	}

IL_000d:
	{
		String_t* L_1 = ___s0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		Il2CppChar L_3;
		L_3 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_1, L_2, NULL);
		uint32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_multiply(((int32_t)((int32_t)L_3^(int32_t)L_4)), ((int32_t)16777619)));
		int32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0021:
	{
		int32_t L_6 = V_1;
		String_t* L_7 = ___s0;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_7, NULL);
		if ((((int32_t)L_6) < ((int32_t)L_8)))
		{
			goto IL_000d;
		}
	}

IL_002a:
	{
		uint32_t L_9 = V_0;
		return L_9;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CLRMethod_set_ReturnType_mD36DB3457CFAF03FDBDBA4A31E237C7DA1815858_inline (CLRMethod_t7DF49A5C4FF255B056BFEE0BFDF137AEF905FFF5* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		// private set;
		RuntimeObject* L_0 = ___value0;
		__this->___U3CReturnTypeU3Ek__BackingField_16 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CReturnTypeU3Ek__BackingField_16), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CLRMethod_get_ReturnType_m6945E1D7376126D59133420C4A85C878D8F17952_inline (CLRMethod_t7DF49A5C4FF255B056BFEE0BFDF137AEF905FFF5* __this, const RuntimeMethod* method) 
{
	{
		// get;
		RuntimeObject* L_0 = __this->___U3CReturnTypeU3Ek__BackingField_16;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool CLRType_get_IsDelegate_m70EBE1A937EBE57679E84B4EEC289523AD50AE1E_inline (CLRType_t72C55A04EDC2A68F969A27FE7DB52F5A198D437F* __this, const RuntimeMethod* method) 
{
	{
		// return isDelegate;
		bool L_0 = __this->___isDelegate_25;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* CLRType_get_TypeForCLR_m664A93098B757595B5F90AFAD61B5C7ACFF71C5C_inline (CLRType_t72C55A04EDC2A68F969A27FE7DB52F5A198D437F* __this, const RuntimeMethod* method) 
{
	{
		// return clrType;
		Type_t* L_0 = __this->___clrType_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool CLRType_get_IsValueType_mBE56C8C16725817A215BECD5041B23A06E7DE4E6_inline (CLRType_t72C55A04EDC2A68F969A27FE7DB52F5A198D437F* __this, const RuntimeMethod* method) 
{
	{
		// return isValueType;
		bool L_0 = __this->___isValueType_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AppDomain_tFFEF01BA23D79DA3A22C21195FD262862037E506* ILMethod_get_AppDomain_m2D77F9F5A8F239070B5BE03FA353FCB9CA4F2344_inline (ILMethod_tA56B8FD062B67B88B2396AC1AFFCED9E4FE92AD7* __this, const RuntimeMethod* method) 
{
	{
		// public ILRuntime.Runtime.Enviorment.AppDomain AppDomain { get { return appdomain; } }
		AppDomain_tFFEF01BA23D79DA3A22C21195FD262862037E506* L_0 = __this->___appdomain_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ILMethod_set_ReturnType_mAC96B2A8A1372938DB97FA88CA042D025CDD0E40_inline (ILMethod_tA56B8FD062B67B88B2396AC1AFFCED9E4FE92AD7* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		// private set;
		RuntimeObject* L_0 = ___value0;
		__this->___U3CReturnTypeU3Ek__BackingField_33 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CReturnTypeU3Ek__BackingField_33), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SequencePoint_get_StartLine_m49140029B5143D0D72069B8A57ABDBD1A5637FC0_inline (SequencePoint_t118B2D7765CB0A5F233E4AD1DAACE8615FD1C3E1* __this, const RuntimeMethod* method) 
{
	{
		// get { return start_line; }
		int32_t L_0 = __this->___start_line_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CLRMethod_get_DeclearingType_mC1EA3C987B8420A99B021251423B89A05F61A297_inline (CLRMethod_t7DF49A5C4FF255B056BFEE0BFDF137AEF905FFF5* __this, const RuntimeMethod* method) 
{
	{
		// return declaringType;
		CLRType_t72C55A04EDC2A68F969A27FE7DB52F5A198D437F* L_0 = __this->___declaringType_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Collection_1_t413B13D425BA31F81271569D26FE2157469EB23C* ILMethod_get_Variables_m8A0181A11F5E65FBBE84683B5D9259FD0923FE49_inline (ILMethod_tA56B8FD062B67B88B2396AC1AFFCED9E4FE92AD7* __this, const RuntimeMethod* method) 
{
	{
		// return variables;
		Collection_1_t413B13D425BA31F81271569D26FE2157469EB23C* L_0 = __this->___variables_25;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TypeReference_tF82E3E035A581A717CE653CEFC3843CE4E460F91* VariableReference_get_VariableType_mC884228C8ECE97F9D071B35187F8BA23EE411F89_inline (VariableReference_t435D3702B5E65CC6255D3B92104FB4A97B7CEAFC* __this, const RuntimeMethod* method) 
{
	{
		// get { return variable_type; }
		TypeReference_tF82E3E035A581A717CE653CEFC3843CE4E460F91* L_0 = __this->___variable_type_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ILMethod_get_DeclearingType_m47BEDAF621AFAB5289C976E1C3D2EBBD2DFDA1AE_inline (ILMethod_tA56B8FD062B67B88B2396AC1AFFCED9E4FE92AD7* __this, const RuntimeMethod* method) 
{
	{
		// return declaringType;
		ILType_tD812655AF7716306B8168AD6F08152435B77708C* L_0 = __this->___declaringType_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ILMethod_get_LocalVariableCount_m68F32BF5041349D1C171C418CC69F7132F4CC44B_inline (ILMethod_tA56B8FD062B67B88B2396AC1AFFCED9E4FE92AD7* __this, const RuntimeMethod* method) 
{
	{
		// return localVarCnt;
		int32_t L_0 = __this->___localVarCnt_19;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Instruction_tAA84FA05703612EBA9700BB65C31560D5AA0ACC6* ExceptionHandler_get_HandlerStart_m9077C46C0CB011140C0D23065E1ADF43A4988E1B_inline (ExceptionHandler_tCC68B4480346581EEA699654AE4E53AE4229E04F* __this, const RuntimeMethod* method) 
{
	{
		// get { return handler_start; }
		Instruction_tAA84FA05703612EBA9700BB65C31560D5AA0ACC6* L_0 = __this->___handler_start_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ExceptionHandler_set_HandlerStart_m3CB97FBD951D52CE39641D648293B10391EAE971_inline (ExceptionHandler_tB7222B56682A0D18CF20D9FD22EC650A924A5C7D* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public int HandlerStart { get; set; }
		int32_t L_0 = ___value0;
		__this->___U3CHandlerStartU3Ek__BackingField_3 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Instruction_tAA84FA05703612EBA9700BB65C31560D5AA0ACC6* ExceptionHandler_get_HandlerEnd_mEB9F653A69A06E7BA5F7B3FECC195966514FB958_inline (ExceptionHandler_tCC68B4480346581EEA699654AE4E53AE4229E04F* __this, const RuntimeMethod* method) 
{
	{
		// get { return handler_end; }
		Instruction_tAA84FA05703612EBA9700BB65C31560D5AA0ACC6* L_0 = __this->___handler_end_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ExceptionHandler_set_HandlerEnd_mA3E4CA82B92936DBD2B7C638D9E6CA51D097B0EA_inline (ExceptionHandler_tB7222B56682A0D18CF20D9FD22EC650A924A5C7D* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public int HandlerEnd { get; set; }
		int32_t L_0 = ___value0;
		__this->___U3CHandlerEndU3Ek__BackingField_4 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Instruction_tAA84FA05703612EBA9700BB65C31560D5AA0ACC6* ExceptionHandler_get_TryStart_m3B6DE3DDA77825C59E390F15849CF123EA06D73C_inline (ExceptionHandler_tCC68B4480346581EEA699654AE4E53AE4229E04F* __this, const RuntimeMethod* method) 
{
	{
		// get { return try_start; }
		Instruction_tAA84FA05703612EBA9700BB65C31560D5AA0ACC6* L_0 = __this->___try_start_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ExceptionHandler_set_TryStart_mEA428C865E60D3BC637301D915F007B3367F58BD_inline (ExceptionHandler_tB7222B56682A0D18CF20D9FD22EC650A924A5C7D* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public int TryStart { get; set; }
		int32_t L_0 = ___value0;
		__this->___U3CTryStartU3Ek__BackingField_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Instruction_tAA84FA05703612EBA9700BB65C31560D5AA0ACC6* ExceptionHandler_get_TryEnd_mE568F7495E0715221987FCF2488EF1508959A004_inline (ExceptionHandler_tCC68B4480346581EEA699654AE4E53AE4229E04F* __this, const RuntimeMethod* method) 
{
	{
		// get { return try_end; }
		Instruction_tAA84FA05703612EBA9700BB65C31560D5AA0ACC6* L_0 = __this->___try_end_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ExceptionHandler_set_TryEnd_mA9F6DC9D3444D2CD6497E88234B508A2C5439DE7_inline (ExceptionHandler_tB7222B56682A0D18CF20D9FD22EC650A924A5C7D* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public int TryEnd { get; set; }
		int32_t L_0 = ___value0;
		__this->___U3CTryEndU3Ek__BackingField_2 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ExceptionHandler_get_HandlerType_mACFCDC40A68537732DA482458A0BB299CC0E3710_inline (ExceptionHandler_tCC68B4480346581EEA699654AE4E53AE4229E04F* __this, const RuntimeMethod* method) 
{
	{
		// get { return handler_type; }
		int32_t L_0 = __this->___handler_type_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TypeReference_tF82E3E035A581A717CE653CEFC3843CE4E460F91* ExceptionHandler_get_CatchType_mC30D22E4A69E04F4E2509E094609EF48EE09BA1C_inline (ExceptionHandler_tCC68B4480346581EEA699654AE4E53AE4229E04F* __this, const RuntimeMethod* method) 
{
	{
		// get { return catch_type; }
		TypeReference_tF82E3E035A581A717CE653CEFC3843CE4E460F91* L_0 = __this->___catch_type_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ExceptionHandler_set_CatchType_m30E5EF5C99A5BCC4D89B2E7E13888F67B315DFC0_inline (ExceptionHandler_tB7222B56682A0D18CF20D9FD22EC650A924A5C7D* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		// public IType CatchType { get; set; }
		RuntimeObject* L_0 = ___value0;
		__this->___U3CCatchTypeU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCatchTypeU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ExceptionHandler_set_HandlerType_m5C6AF51DFA74A298E65D9A735D7726CCB7633764_inline (ExceptionHandler_tB7222B56682A0D18CF20D9FD22EC650A924A5C7D* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public ExceptionHandlerType HandlerType { get; set; }
		int32_t L_0 = ___value0;
		__this->___U3CHandlerTypeU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR OpCode_t9B1522253DF23368D786BB5D1DF051781F1D3EA9 Instruction_get_OpCode_mE204C6C94777DF469A4011D6DBC08500B1187586_inline (Instruction_tAA84FA05703612EBA9700BB65C31560D5AA0ACC6* __this, const RuntimeMethod* method) 
{
	{
		// get { return opcode; }
		OpCode_t9B1522253DF23368D786BB5D1DF051781F1D3EA9 L_0 = __this->___opcode_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t OpCode_get_Code_mCD6F937B2F495740EBBE40050D4D748C1563B8D6_inline (OpCode_t9B1522253DF23368D786BB5D1DF051781F1D3EA9* __this, const RuntimeMethod* method) 
{
	{
		// get { return (Code) code; }
		uint8_t L_0 = __this->___code_2;
		return (int32_t)(L_0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Instruction_get_Operand_m0461C42D44AE75A597C330499680991C9D1BF00A_inline (Instruction_tAA84FA05703612EBA9700BB65C31560D5AA0ACC6* __this, const RuntimeMethod* method) 
{
	{
		// get { return operand; }
		RuntimeObject* L_0 = __this->___operand_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t VariableReference_get_Index_m9587EF28FDCE9CEAA06D6B282B104451317024D7_inline (VariableReference_t435D3702B5E65CC6255D3B92104FB4A97B7CEAFC* __this, const RuntimeMethod* method) 
{
	{
		// get { return index; }
		int32_t L_0 = __this->___index_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ParameterReference_get_Index_m2AA4C5349F8D03E4CABED027BED846214675F29C_inline (ParameterReference_tC6D1DC81D82FDDADAF2EE8CFF4BF7DA7A3BECA24* __this, const RuntimeMethod* method) 
{
	{
		// get { return index; }
		int32_t L_0 = __this->___index_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TypeReference_tF82E3E035A581A717CE653CEFC3843CE4E460F91* TypeSpecification_get_ElementType_m21C20A8CB7B9482CC3702FA739626D6AC82863CB_inline (TypeSpecification_t4B0FB1E89E0C33705697B10881A7A77B713E80A3* __this, const RuntimeMethod* method) 
{
	{
		// get { return element_type; }
		TypeReference_tF82E3E035A581A717CE653CEFC3843CE4E460F91* L_0 = __this->___element_type_13;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TypeReference_tF82E3E035A581A717CE653CEFC3843CE4E460F91* ParameterReference_get_ParameterType_m70C3F6E3D81FE1622794ACCE3780FE6C835D4DF5_inline (ParameterReference_tC6D1DC81D82FDDADAF2EE8CFF4BF7DA7A3BECA24* __this, const RuntimeMethod* method) 
{
	{
		// get { return parameter_type; }
		TypeReference_tF82E3E035A581A717CE653CEFC3843CE4E460F91* L_0 = __this->___parameter_type_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ParameterReference_get_Name_m76C1DEB1A9156E1BE5FBF2C9186DFB0353C650D8_inline (ParameterReference_tC6D1DC81D82FDDADAF2EE8CFF4BF7DA7A3BECA24* __this, const RuntimeMethod* method) 
{
	{
		// get { return name; }
		String_t* L_0 = __this->___name_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ILMethod_get_ParameterCount_m0C4573BC61A5259587CA3E2988861200ED6755F0_inline (ILMethod_tA56B8FD062B67B88B2396AC1AFFCED9E4FE92AD7* __this, const RuntimeMethod* method) 
{
	{
		// return paramCnt;
		int32_t L_0 = __this->___paramCnt_18;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MethodInfo_t* CLRMethod_get_MethodInfo_mA20BF96B9EF5F7021E583C5E10EBEB616A2A1779_inline (CLRMethod_t7DF49A5C4FF255B056BFEE0BFDF137AEF905FFF5* __this, const RuntimeMethod* method) 
{
	{
		// public MethodInfo MethodInfo { get { return def; } }
		MethodInfo_t* L_0 = __this->___def_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* ETAsyncTaskMethodBuilder_get_Task_mB1EE6961178A9200208ED6EAF4B16C84A579421F_inline (ETAsyncTaskMethodBuilder_t6539D4B6A1CB6F6388453211D928A26188B68B0C* __this, const RuntimeMethod* method) 
{
	{
		// public ETTask Task => this.tcs;
		ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_0 = __this->___tcs_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ETTask_SetException_m15F23C04CCB4BD5B9A5AB75928C823A93F9B6176_inline (ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* __this, Exception_t* ___e0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B4_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B3_0 = NULL;
	{
		// if (this.state != AwaiterStatus.Pending)
		uint8_t L_0 = __this->___state_3;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// throw new InvalidOperationException("TaskT_TransitionToFinal_AlreadyCompleted");
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7940B1E0CEB23F95FA72EF03CC10A2C9BDF454A3)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ETTask_SetException_m15F23C04CCB4BD5B9A5AB75928C823A93F9B6176_RuntimeMethod_var)));
	}

IL_0013:
	{
		// this.state = AwaiterStatus.Faulted;
		__this->___state_3 = 2;
		// Action c = this.callback as Action;
		RuntimeObject* L_2 = __this->___callback_4;
		// this.callback = ExceptionDispatchInfo.Capture(e);
		Exception_t* L_3 = ___e0;
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_4;
		L_4 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_3, NULL);
		__this->___callback_4 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___callback_4), (void*)L_4);
		// c?.Invoke();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_5 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)IsInstSealed((RuntimeObject*)L_2, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		G_B3_0 = L_5;
		if (L_5)
		{
			G_B4_0 = L_5;
			goto IL_0036;
		}
	}
	{
		return;
	}

IL_0036:
	{
		NullCheck(G_B4_0);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(G_B4_0, NULL);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_gshared_inline (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___hasValue_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Collection_1_get_Count_m967DD3DE8A5BE9D547D4D4EC95C81A5B14FDA60E_gshared_inline (Collection_1_tE08A2FA07693E8363A425AFCC772CBB1404392E0* __this, const RuntimeMethod* method) 
{
	{
		// get { return size; }
		int32_t L_0 = (int32_t)__this->___size_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___key_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6B934051D5594D4E6E7E8D4C74E98C2F41BDE499_gshared_inline (Enumerator_tF46B85C70F153D6E4DA6BCF8809C23A525A3F94A* __this, const RuntimeMethod* method) 
{
	{
		// get { return current; }
		RuntimeObject* L_0 = (RuntimeObject*)__this->___current_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___obj0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m139A176CD271A0532D75BE08DA7831C8C45CE28F_gshared_inline (Enumerator_t72556E98D7DDBE118A973D782D523D15A96461C8* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m1768ADA9855B7CDA14C9C42E098A287F1A39C3A2_gshared_inline (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ETTask_1_tC3B29B37E823D9C66439D79CE23D65BBFE61686F* ETAsyncTaskMethodBuilder_1_get_Task_mB34D8721E56EE05B2B4AE583DEB758828135BDFF_gshared_inline (ETAsyncTaskMethodBuilder_1_t769C7EF52D8DA1B6EBB8B7AEC7B2D7C854730D31* __this, const RuntimeMethod* method) 
{
	{
		// public ETTask<T> Task => this.tcs;
		ETTask_1_tC3B29B37E823D9C66439D79CE23D65BBFE61686F* L_0 = (ETTask_1_tC3B29B37E823D9C66439D79CE23D65BBFE61686F*)__this->___tcs_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
