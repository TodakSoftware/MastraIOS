﻿#include "pch-cpp.hpp"





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
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2Invoker;
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2Invoker<R, T1*, T2*>
{
	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1* p1, T2* p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		R ret;
		void* params[2] = { p1, p2 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1>
struct InvokerFuncInvoker1;
template <typename R, typename T1>
struct InvokerFuncInvoker1<R, T1*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		R ret;
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2;
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2<R, T1*, T2*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		R ret;
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

struct Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907;
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
struct Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3;
struct ExtractKeyDelegate_t9BADAD4BDEEE5FEB8CBD095F1EA307C3DA921583;
struct ExtractKeyDelegate_t0FCB0690B76E40F52DC9D05708A8FC488624E3CD;
struct IEqualityComparer_1_tDBFC8496F14612776AF930DBF84AFE7D06D1F0E9;
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
struct KeyCollection_tA19BA39E5042FA7AF8D048D51934DC3BD9F2E952;
struct KeyCollection_t018A8DACA62B00F41314B17E9BB03E1169319CA5;
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
struct ValueCollection_t65BBB6F728D41FD4760F6D6C59CC030CF237785F;
struct ValueCollection_t26762FBAABEED8AF6FEC2532717F621A053E1E81;
struct WriteDeltaDelegate_t18D222402FA79F0C2647FA4DF1C713CE7617227C;
struct WriteDeltaDelegate_t25C554505A9C8FD9FF8C6B5F2D428B93EA4C1453;
struct WriteDeltaDelegate_t06FDE026EA06A2D52B05B8785C9C84AA8EEBA292;
struct WriteDeltaDelegate_t8B476DEF456281BA34B0D04703C3543162BC7609;
struct WriteDeltaDelegate_tE5FD16D805C72D2EE27208BA463BC7D2BA923D85;
struct WriteDeltaDelegate_tDE9A2D16AFAF9E62FDA443573CDEB4A4A8114D8D;
struct WriteDeltaDelegate_tC67F55C5F48816BFF448F048A5EDB1F44E721270;
struct WriteDeltaDelegate_t012D58DA12096CDE5B3F8723C0BC5535F02F8A06;
struct WriteDeltaDelegate_t5037628E7793813F5FC9D57D241C463644491024;
struct WriteDeltaDelegate_tE738A850E7CCB35359470E6C7128BE79BD99DA66;
struct WriteDeltaDelegate_tC9B3AA2B1E5528B1D02722D84BC3AB2980D81902;
struct WriteDeltaDelegate_tAE91576E843E7D3658DD43AAE4FA0208727DBDF7;
struct WriteValueDelegate_t50D95E61CEBE7B989D9E6B9E52A924880A040DDF;
struct WriteValueDelegate_tAB5E09C0958FE12D6017BA124FB35AEC2A0F69EE;
struct WriteValueDelegate_tC60A572918EC0CF835899702C221082E927F9BF1;
struct WriteValueDelegate_t8B3C6943F86D34C7048257FCC996A5D82A04AFBF;
struct WriteValueDelegate_tDEBCD609141F0411B3AD9A0B37D83D2D21321B50;
struct WriteValueDelegate_t151C4C983EB51995EDDE77F1D5F693BCDDBDACED;
struct WriteValueDelegate_t28D3C8BE903E7E73325C22836F9F68C58384EAE1;
struct WriteValueDelegate_t024E8A7B3A528B116063E2D7FA17CB14E06E4F16;
struct WriteValueDelegate_t45D324B20EFBA6F5D66410BDE5FAD8FDFAC3EF21;
struct WriteValueDelegate_t56FDBE53C8F6ADF47F9C8662115BF484A42703F8;
struct WriteValueDelegate_tF07A6D84C76842F9DF7E45B506143D8F6060D15F;
struct WriteValueDelegate_t8FEF9ED27C319AD2333C17230727C2AFBE82F0D0;
struct WriteValueDelegate_t2AB9AB6218D28F8C724E65BC320D9697354C0E25;
struct WriteValueDelegate_tC15BF137CB83E68C952D67EA8752B7A97841BDAC;
struct WriteValueDelegate_t5229761A9455193D5D8B28A714E3489CFD860723;
struct WriteValueDelegate_tF70BA29F2969BFB2104C17052D00DBCDB4B1B113;
struct WriteValueDelegate_tF8086A0C78B6B051B38BB69528E95426A2653AE4;
struct WriteValueDelegate_t7E0DAB5EB031E80524026DA5E69B8BC284685EAD;
struct WriteValueDelegate_tC3027B65BB056C8F37B342D753A4CA8474285D18;
struct WriteValueDelegate_t217B1C103C4D27C527620B9528827C801905E8B6;
struct WriteValueDelegate_t87086BD0A9A6D2BE7452749D920C58B9607894C7;
struct WriteValueDelegate_t88B6EFBB7B972D83905C56799D5DF8EAE16F41E5;
struct WriteValueDelegate_t68E2A03463D6DCF3C833BDAB83CFC16ED78E1CD8;
struct WriteValueDelegate_t20F1B1986CAED121C12F30E899A29DC0906C4931;
struct WriteValueDelegate_tEB628C298806C5A8F41B790FB23343AFABA232B8;
struct WriteValueDelegate_t8C465CFC206065169E9FE05E506A75847A375644;
struct WriteValueDelegate_t89E6668DF3B1C0A458B6747B41C5D177FD14C351;
struct WriteValueDelegate_t49F65B2D9C5E28CC45790864AE8F1B4F00F1E203;
struct XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A;
struct XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D;
struct XHashtable_1_t4C208624C5DAFD8858B7794DF15C5747BE4B3072;
struct XHashtable_1_t781B821CC6AC13BED190536310819EB7FD1463D0;
struct apCache_1_t23C90689CAA46AC7D6F44D414092326EF5C5549E;
struct fsDirectConverter_1_tF307DFA6F21486A34320546F09381BBF84FF0539;
struct fsDirectConverter_1_t8EC81BCA98876AF5AF3271B6086EC66E2CCDC388;
struct fsDirectConverter_1_tCBA7B5D48312C1775A21082D3D453731C902A8BD;
struct EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635;
struct EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4;
struct EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1;
struct EntryU5BU5D_tCFEDD9B392BFDE2D313BC0974DB2CABF3A7A893D;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F;
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct Delegate_t;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct MethodInfo_t;
struct OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct String_t;
struct Type_t;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct fsBaseConverter_tDF9366828A5B8ADB6D986EB35B320D4DDC81CB04;
struct fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23;
struct fsDirectConverter_t9EE506A371C95C62E21CA6586396D7B3BD55F668;
struct fsSerializer_t770DD30E2427CF63ECAEF61D7A1D1D178CECB3DC;
struct ReaderHandle_t7A818FF1A9ACF79E6D6322AFF494B9FB12C48CC8;
struct WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6;

IL2CPP_EXTERN_C RuntimeClass* ByteEnum_t2A464EF5EC59CBA8ED5E194537D5832168B1A692_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ChakraVeinInfo_tA9F7FEEA74A8F324BE4D4816F6DC8C8B79991357_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CustomTransform_t1F0F3FAC4EAE6AFC5031BB6107FF675E3FE4200B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FixedString32Bytes_t0FB200DC482825CC1EF24B4640201CC039631824_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MatchStatClientSync_t53201D4730BB7370354E6F0489C98E2E0957D827_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NetworkCharacterSelectState_t3CA2BEC90F7FED70364463A60D4AD3C10698EBEF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NetworkObjectReference_tDC1F1C3CC1E28DCB9229C36E30BB81F847CF77FD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NetworkTransformState_tCCC77820160AFE28825DDD9C3F090B523CA8F5ED_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayerStackData_tE3EBF2B06FF3A7096CBE57912B5D47E76A78F529_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* S_Stack_t765C2DB295BE8C07FB40C225F6570328D9FD787A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* S_Stats_t8976BA1109823F18D06136E3A6E6E5F2B5F2A86E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* S_TowerStats_t73D8D343CC245E34D05DCA470D39D0BA8B078248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt16Enum_t481D129F5FAE551E8684190D640F0FAEFB237CF8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UserPlayerData_tB7F0676C35AAB963313E190E7D7B97BDE5AA22D6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0A7D3B18DF4F9238A50A156FF06A5A7E794C1C7F;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8_marshaled_com;
struct fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8_marshaled_pinvoke;

struct EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635;
struct EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_tA19BA39E5042FA7AF8D048D51934DC3BD9F2E952* ____keys;
	ValueCollection_t65BBB6F728D41FD4760F6D6C59CC030CF237785F* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_tCFEDD9B392BFDE2D313BC0974DB2CABF3A7A893D* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_t018A8DACA62B00F41314B17E9BB03E1169319CA5* ____keys;
	ValueCollection_t26762FBAABEED8AF6FEC2532717F621A053E1E81* ____values;
	RuntimeObject* ____syncRoot;
};
struct XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635* ____entries;
	int32_t ____numEntries;
	ExtractKeyDelegate_t9BADAD4BDEEE5FEB8CBD095F1EA307C3DA921583* ____extractKey;
};
struct XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4* ____entries;
	int32_t ____numEntries;
	ExtractKeyDelegate_t0FCB0690B76E40F52DC9D05708A8FC488624E3CD* ____extractKey;
};
struct XHashtable_1_t4C208624C5DAFD8858B7794DF15C5747BE4B3072  : public RuntimeObject
{
	XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* ____state;
};
struct XHashtable_1_t781B821CC6AC13BED190536310819EB7FD1463D0  : public RuntimeObject
{
	XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D* ____state;
};
struct apCache_1_t23C90689CAA46AC7D6F44D414092326EF5C5549E  : public RuntimeObject
{
	Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* ____objects;
	bool ____isAnyAdded;
	RuntimeObject* ____lastObject;
	int32_t ____lastID;
};
struct MemberInfo_t  : public RuntimeObject
{
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};
struct fsBaseConverter_tDF9366828A5B8ADB6D986EB35B320D4DDC81CB04  : public RuntimeObject
{
	fsSerializer_t770DD30E2427CF63ECAEF61D7A1D1D178CECB3DC* ___Serializer;
};
struct fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23  : public RuntimeObject
{
	RuntimeObject* ____value;
};
struct Entry_t6E72C722C46949F140550D563C1F41E304752583 
{
	RuntimeObject* ___Value;
	int32_t ___HashCode;
	int32_t ___Next;
};
typedef Il2CppFullySharedGenericStruct Entry_t7F8922DC9D131FDA94BF956DD509FC395285A91E;
typedef Il2CppFullySharedGenericStruct fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88;
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	uint8_t ___m_value;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	Il2CppChar ___m_value;
};
struct CustomTransform_t1F0F3FAC4EAE6AFC5031BB6107FF675E3FE4200B 
{
	int16_t ___compressedPosX;
	int16_t ___compressedPosY;
	int16_t ___compressedPosZ;
	uint8_t ___compressedRotY;
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};
struct FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99 
{
	ReaderHandle_t7A818FF1A9ACF79E6D6322AFF494B9FB12C48CC8* ___Handle;
};
struct FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC 
{
	WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6* ___Handle;
};
#pragma pack(push, tp, 1)
struct FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 
{
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					uint8_t ___byte0000;
				};
				#pragma pack(pop, tp)
				struct
				{
					uint8_t ___byte0000_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0001_OffsetPadding[1];
					uint8_t ___byte0001;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0001_OffsetPadding_forAlignmentOnly[1];
					uint8_t ___byte0001_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0002_OffsetPadding[2];
					uint8_t ___byte0002;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0002_OffsetPadding_forAlignmentOnly[2];
					uint8_t ___byte0002_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0003_OffsetPadding[3];
					uint8_t ___byte0003;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0003_OffsetPadding_forAlignmentOnly[3];
					uint8_t ___byte0003_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0004_OffsetPadding[4];
					uint8_t ___byte0004;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0004_OffsetPadding_forAlignmentOnly[4];
					uint8_t ___byte0004_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0005_OffsetPadding[5];
					uint8_t ___byte0005;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0005_OffsetPadding_forAlignmentOnly[5];
					uint8_t ___byte0005_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0006_OffsetPadding[6];
					uint8_t ___byte0006;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0006_OffsetPadding_forAlignmentOnly[6];
					uint8_t ___byte0006_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0007_OffsetPadding[7];
					uint8_t ___byte0007;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0007_OffsetPadding_forAlignmentOnly[7];
					uint8_t ___byte0007_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0008_OffsetPadding[8];
					uint8_t ___byte0008;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0008_OffsetPadding_forAlignmentOnly[8];
					uint8_t ___byte0008_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0009_OffsetPadding[9];
					uint8_t ___byte0009;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0009_OffsetPadding_forAlignmentOnly[9];
					uint8_t ___byte0009_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0010_OffsetPadding[10];
					uint8_t ___byte0010;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0010_OffsetPadding_forAlignmentOnly[10];
					uint8_t ___byte0010_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0011_OffsetPadding[11];
					uint8_t ___byte0011;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0011_OffsetPadding_forAlignmentOnly[11];
					uint8_t ___byte0011_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0012_OffsetPadding[12];
					uint8_t ___byte0012;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0012_OffsetPadding_forAlignmentOnly[12];
					uint8_t ___byte0012_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0013_OffsetPadding[13];
					uint8_t ___byte0013;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0013_OffsetPadding_forAlignmentOnly[13];
					uint8_t ___byte0013_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0014_OffsetPadding[14];
					uint8_t ___byte0014;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0014_OffsetPadding_forAlignmentOnly[14];
					uint8_t ___byte0014_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0015_OffsetPadding[15];
					uint8_t ___byte0015;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0015_OffsetPadding_forAlignmentOnly[15];
					uint8_t ___byte0015_forAlignmentOnly;
				};
			};
		};
		uint8_t FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0__padding[16];
	};
};
#pragma pack(pop, tp)
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175 
{
	int16_t ___m_value;
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	int64_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct NetworkObjectReference_tDC1F1C3CC1E28DCB9229C36E30BB81F847CF77FD 
{
	uint64_t ___m_NetworkObjectId;
};
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	float ___x;
	float ___y;
	float ___z;
	float ___w;
};
struct SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5 
{
	int8_t ___m_value;
};
struct S_StatsDetails_tBE9F3D6BDB8F0C7A8467FFA6AC685F724B422DCF 
{
	float ___value;
	float ___growth;
};
struct S_TowerStats_t73D8D343CC245E34D05DCA470D39D0BA8B078248 
{
	int32_t ___HP;
	float ___attackDamage;
	float ___dmgGrowthPerSec;
	float ___dmgCap;
	float ___otherHeroDamageReducePercent;
	float ___sightRange;
	float ___attackRange;
	float ___physicalDef;
	float ___magicalDef;
	float ___dmgReduction;
	float ___attackMultiplier;
};
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	float ___m_value;
};
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	uint16_t ___m_value;
};
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	uint32_t ___m_value;
};
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	uint64_t ___m_value;
};
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	float ___x;
	float ___y;
};
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	float ___x;
	float ___y;
	float ___z;
};
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
struct bool3_tFD58BE2745DA207A4938AB2F604C829410F0A861 
{
	bool ___x;
	bool ___y;
	bool ___z;
};
struct fsDirectConverter_t9EE506A371C95C62E21CA6586396D7B3BD55F668  : public fsBaseConverter_tDF9366828A5B8ADB6D986EB35B320D4DDC81CB04
{
};
struct fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 
{
	bool ____success;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ____messages;
};
struct fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_marshaled_pinvoke
{
	int32_t ____success;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ____messages;
};
struct fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_marshaled_com
{
	int32_t ____success;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ____messages;
};
struct fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 
{
	fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F* ___Ancestors;
	String_t* ___VersionString;
	Type_t* ___ModelType;
};
struct fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8_marshaled_pinvoke
{
	fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8_marshaled_pinvoke* ___Ancestors;
	char* ___VersionString;
	Type_t* ___ModelType;
};
struct fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8_marshaled_com
{
	fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8_marshaled_com* ___Ancestors;
	Il2CppChar* ___VersionString;
	Type_t* ___ModelType;
};
struct half_tE8A6792149696F478D662DD4B736964C0FF018AF 
{
	uint16_t ___value;
};
struct PlayerStackData_tE3EBF2B06FF3A7096CBE57912B5D47E76A78F529 
{
	uint64_t ___playerId;
	int32_t ___stackCount;
};
struct fsDirectConverter_1_tF307DFA6F21486A34320546F09381BBF84FF0539  : public fsDirectConverter_t9EE506A371C95C62E21CA6586396D7B3BD55F668
{
};
struct fsDirectConverter_1_t8EC81BCA98876AF5AF3271B6086EC66E2CCDC388  : public fsDirectConverter_t9EE506A371C95C62E21CA6586396D7B3BD55F668
{
};
struct fsDirectConverter_1_tCBA7B5D48312C1775A21082D3D453731C902A8BD  : public fsDirectConverter_t9EE506A371C95C62E21CA6586396D7B3BD55F668
{
};
struct fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A 
{
	bool ____hasValue;
	fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 ____value;
};
struct Allocator_t996642592271AAD9EE688F142741D512C07B5824 
{
	int32_t ___value__;
};
struct ByteEnum_t2A464EF5EC59CBA8ED5E194537D5832168B1A692 
{
	uint8_t ___value__;
};
struct Delegate_t  : public RuntimeObject
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	RuntimeObject* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	bool ___method_is_virtual;
};
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct E_ChakraVein_t1C8E63DFC61F61F954F378D42B324808F0D0E7D6 
{
	uint8_t ___value__;
};
struct E_HeroCode_tF77B8D14BB8D1B6D3D4413083CCE844999D24352 
{
	int32_t ___value__;
};
struct E_PlayerConnectState_tE5338C679189C9BBADABC61458E2FCEF3C93CF50 
{
	uint8_t ___value__;
};
struct Exception_t  : public RuntimeObject
{
	String_t* ____className;
	String_t* ____message;
	RuntimeObject* ____data;
	Exception_t* ____innerException;
	String_t* ____helpURL;
	RuntimeObject* ____stackTrace;
	String_t* ____stackTraceString;
	String_t* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	RuntimeObject* ____dynamicMethods;
	int32_t ____HResult;
	String_t* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_pinvoke
{
	char* ____className;
	char* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_pinvoke* ____innerException;
	char* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	char* ____stackTraceString;
	char* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	char* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className;
	Il2CppChar* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_com* ____innerException;
	Il2CppChar* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	Il2CppChar* ____stackTraceString;
	Il2CppChar* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	Il2CppChar* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
#pragma pack(push, tp, 1)
struct FixedBytes30_t7721F11929A3AC08287DF5E6D7AEF85CCEE04AD2 
{
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0000;
				};
				#pragma pack(pop, tp)
				struct
				{
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0000_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0016_OffsetPadding[16];
					uint8_t ___byte0016;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0016_OffsetPadding_forAlignmentOnly[16];
					uint8_t ___byte0016_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0017_OffsetPadding[17];
					uint8_t ___byte0017;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0017_OffsetPadding_forAlignmentOnly[17];
					uint8_t ___byte0017_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0018_OffsetPadding[18];
					uint8_t ___byte0018;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0018_OffsetPadding_forAlignmentOnly[18];
					uint8_t ___byte0018_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0019_OffsetPadding[19];
					uint8_t ___byte0019;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0019_OffsetPadding_forAlignmentOnly[19];
					uint8_t ___byte0019_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0020_OffsetPadding[20];
					uint8_t ___byte0020;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0020_OffsetPadding_forAlignmentOnly[20];
					uint8_t ___byte0020_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0021_OffsetPadding[21];
					uint8_t ___byte0021;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0021_OffsetPadding_forAlignmentOnly[21];
					uint8_t ___byte0021_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0022_OffsetPadding[22];
					uint8_t ___byte0022;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0022_OffsetPadding_forAlignmentOnly[22];
					uint8_t ___byte0022_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0023_OffsetPadding[23];
					uint8_t ___byte0023;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0023_OffsetPadding_forAlignmentOnly[23];
					uint8_t ___byte0023_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0024_OffsetPadding[24];
					uint8_t ___byte0024;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0024_OffsetPadding_forAlignmentOnly[24];
					uint8_t ___byte0024_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0025_OffsetPadding[25];
					uint8_t ___byte0025;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0025_OffsetPadding_forAlignmentOnly[25];
					uint8_t ___byte0025_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0026_OffsetPadding[26];
					uint8_t ___byte0026;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0026_OffsetPadding_forAlignmentOnly[26];
					uint8_t ___byte0026_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0027_OffsetPadding[27];
					uint8_t ___byte0027;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0027_OffsetPadding_forAlignmentOnly[27];
					uint8_t ___byte0027_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0028_OffsetPadding[28];
					uint8_t ___byte0028;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0028_OffsetPadding_forAlignmentOnly[28];
					uint8_t ___byte0028_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0029_OffsetPadding[29];
					uint8_t ___byte0029;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0029_OffsetPadding_forAlignmentOnly[29];
					uint8_t ___byte0029_forAlignmentOnly;
				};
			};
		};
		uint8_t FixedBytes30_t7721F11929A3AC08287DF5E6D7AEF85CCEE04AD2__padding[30];
	};
};
#pragma pack(pop, tp)
struct GlobalNaming_t1A75F7E4A32434B985800B24D3922F545623258F 
{
	int16_t ___value__;
};
struct Int32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C 
{
	int32_t ___value__;
};
struct Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Origin;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Direction;
};
struct Ray2D_t48EB7C703F8A2363D8A8F4A05D58640BD5721C7A 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Origin;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Direction;
};
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value;
};
struct S_Stats_t8976BA1109823F18D06136E3A6E6E5F2B5F2A86E 
{
	int32_t ___sightRange;
	int32_t ___attackRange;
	S_StatsDetails_tBE9F3D6BDB8F0C7A8467FFA6AC685F724B422DCF ___HP;
	S_StatsDetails_tBE9F3D6BDB8F0C7A8467FFA6AC685F724B422DCF ___mana;
	S_StatsDetails_tBE9F3D6BDB8F0C7A8467FFA6AC685F724B422DCF ___HPRegen;
	S_StatsDetails_tBE9F3D6BDB8F0C7A8467FFA6AC685F724B422DCF ___manaRegen;
	S_StatsDetails_tBE9F3D6BDB8F0C7A8467FFA6AC685F724B422DCF ___basicAttackBaseDamage;
	S_StatsDetails_tBE9F3D6BDB8F0C7A8467FFA6AC685F724B422DCF ___physicalDamage;
	S_StatsDetails_tBE9F3D6BDB8F0C7A8467FFA6AC685F724B422DCF ___magicalDamage;
	S_StatsDetails_tBE9F3D6BDB8F0C7A8467FFA6AC685F724B422DCF ___armor;
	S_StatsDetails_tBE9F3D6BDB8F0C7A8467FFA6AC685F724B422DCF ___magicResist;
	S_StatsDetails_tBE9F3D6BDB8F0C7A8467FFA6AC685F724B422DCF ___physicalPenetrationFlat;
	S_StatsDetails_tBE9F3D6BDB8F0C7A8467FFA6AC685F724B422DCF ___magicalPenetrationFlat;
	S_StatsDetails_tBE9F3D6BDB8F0C7A8467FFA6AC685F724B422DCF ___movementSpeed;
	S_StatsDetails_tBE9F3D6BDB8F0C7A8467FFA6AC685F724B422DCF ___attackSpeed;
	S_StatsDetails_tBE9F3D6BDB8F0C7A8467FFA6AC685F724B422DCF ___defReductionFlat;
	S_StatsDetails_tBE9F3D6BDB8F0C7A8467FFA6AC685F724B422DCF ___moveSpeedPercent;
	S_StatsDetails_tBE9F3D6BDB8F0C7A8467FFA6AC685F724B422DCF ___hpExtraPercent;
	S_StatsDetails_tBE9F3D6BDB8F0C7A8467FFA6AC685F724B422DCF ___manaRegenExtraPercent;
	S_StatsDetails_tBE9F3D6BDB8F0C7A8467FFA6AC685F724B422DCF ___basicAttackPhysicalPercentBuffDebuff;
	S_StatsDetails_tBE9F3D6BDB8F0C7A8467FFA6AC685F724B422DCF ___basicAttackMagicalPercentBuffDebuff;
	S_StatsDetails_tBE9F3D6BDB8F0C7A8467FFA6AC685F724B422DCF ___physicalPen;
	S_StatsDetails_tBE9F3D6BDB8F0C7A8467FFA6AC685F724B422DCF ___magicPen;
	S_StatsDetails_tBE9F3D6BDB8F0C7A8467FFA6AC685F724B422DCF ___physicalLifesteal;
	S_StatsDetails_tBE9F3D6BDB8F0C7A8467FFA6AC685F724B422DCF ___magicLifesteal;
	S_StatsDetails_tBE9F3D6BDB8F0C7A8467FFA6AC685F724B422DCF ___skillLifesteal;
	S_StatsDetails_tBE9F3D6BDB8F0C7A8467FFA6AC685F724B422DCF ___criticalChance;
	S_StatsDetails_tBE9F3D6BDB8F0C7A8467FFA6AC685F724B422DCF ___criticalDamage;
	S_StatsDetails_tBE9F3D6BDB8F0C7A8467FFA6AC685F724B422DCF ___cooldownReduction;
	S_StatsDetails_tBE9F3D6BDB8F0C7A8467FFA6AC685F724B422DCF ___manaCostReduction;
	S_StatsDetails_tBE9F3D6BDB8F0C7A8467FFA6AC685F724B422DCF ___damageReduction;
	S_StatsDetails_tBE9F3D6BDB8F0C7A8467FFA6AC685F724B422DCF ___criticalDamageReduction;
	S_StatsDetails_tBE9F3D6BDB8F0C7A8467FFA6AC685F724B422DCF ___defReductionPercent;
	S_StatsDetails_tBE9F3D6BDB8F0C7A8467FFA6AC685F724B422DCF ___basicAtkDamageBonusPercent;
	S_StatsDetails_tBE9F3D6BDB8F0C7A8467FFA6AC685F724B422DCF ___skillDamageBonus;
	S_StatsDetails_tBE9F3D6BDB8F0C7A8467FFA6AC685F724B422DCF ___ultimateDamageRatio;
	S_StatsDetails_tBE9F3D6BDB8F0C7A8467FFA6AC685F724B422DCF ___elementalDamageBonus;
	S_StatsDetails_tBE9F3D6BDB8F0C7A8467FFA6AC685F724B422DCF ___buffEffectivenessRatio;
	S_StatsDetails_tBE9F3D6BDB8F0C7A8467FFA6AC685F724B422DCF ___debuffDurationRatio;
};
struct UInt16Enum_t481D129F5FAE551E8684190D640F0FAEFB237CF8 
{
	uint16_t ___value__;
};
struct fsDataType_t4DDBD7DB585B530CF852D23D5FF4D9801DDE4A16 
{
	int32_t ___value__;
};
struct half3_tE87D06748FC18B6C9237D910911C43754C0E4AD8 
{
	half_tE8A6792149696F478D662DD4B736964C0FF018AF ___x;
	half_tE8A6792149696F478D662DD4B736964C0FF018AF ___y;
	half_tE8A6792149696F478D662DD4B736964C0FF018AF ___z;
};
struct half4_t69CC75C393FD0ED1CEFC8B6F1C0FBE7746CF9826 
{
	half_tE8A6792149696F478D662DD4B736964C0FF018AF ___x;
	half_tE8A6792149696F478D662DD4B736964C0FF018AF ___y;
	half_tE8A6792149696F478D662DD4B736964C0FF018AF ___z;
	half_tE8A6792149696F478D662DD4B736964C0FF018AF ___w;
};
struct NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct ChakraVeinInfo_tA9F7FEEA74A8F324BE4D4816F6DC8C8B79991357 
{
	int32_t ___priority;
	uint8_t ___type;
	int32_t ___level;
};
struct FixedString32Bytes_t0FB200DC482825CC1EF24B4640201CC039631824 
{
	union
	{
		struct
		{
			uint16_t ___utf8LengthInBytes;
			alignas(1) FixedBytes30_t7721F11929A3AC08287DF5E6D7AEF85CCEE04AD2 ___bytes;
		};
		uint8_t FixedString32Bytes_t0FB200DC482825CC1EF24B4640201CC039631824__padding[32];
	};
};
struct HalfVector3_t921D176C4A9C03F0C05F55B8440B72BB3730EC02 
{
	half3_tE87D06748FC18B6C9237D910911C43754C0E4AD8 ___Axis;
	bool3_tFD58BE2745DA207A4938AB2F604C829410F0A861 ___AxisToSynchronize;
};
struct HalfVector4_t493672846617D0E05AE7C0B3E38E7B460948A1BD 
{
	half4_t69CC75C393FD0ED1CEFC8B6F1C0FBE7746CF9826 ___Axis;
};
struct MulticastDelegate_t  : public Delegate_t
{
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates;
};
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates;
};
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates;
};
struct S_Stack_t765C2DB295BE8C07FB40C225F6570328D9FD787A 
{
	uint64_t ___targetNetworkObjectId;
	int16_t ___stackName;
	uint8_t ___stack;
	float ___checkInTime;
	bool ___IsDone;
};
struct S_Stack_t765C2DB295BE8C07FB40C225F6570328D9FD787A_marshaled_pinvoke
{
	uint64_t ___targetNetworkObjectId;
	int16_t ___stackName;
	uint8_t ___stack;
	float ___checkInTime;
	int32_t ___IsDone;
};
struct S_Stack_t765C2DB295BE8C07FB40C225F6570328D9FD787A_marshaled_com
{
	uint64_t ___targetNetworkObjectId;
	int16_t ___stackName;
	uint8_t ___stack;
	float ___checkInTime;
	int32_t ___IsDone;
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct Type_t  : public MemberInfo_t
{
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl;
};
struct ExtractKeyDelegate_t9BADAD4BDEEE5FEB8CBD095F1EA307C3DA921583  : public MulticastDelegate_t
{
};
struct ExtractKeyDelegate_t0FCB0690B76E40F52DC9D05708A8FC488624E3CD  : public MulticastDelegate_t
{
};
struct WriteDeltaDelegate_t18D222402FA79F0C2647FA4DF1C713CE7617227C  : public MulticastDelegate_t
{
};
struct WriteDeltaDelegate_t25C554505A9C8FD9FF8C6B5F2D428B93EA4C1453  : public MulticastDelegate_t
{
};
struct WriteDeltaDelegate_t06FDE026EA06A2D52B05B8785C9C84AA8EEBA292  : public MulticastDelegate_t
{
};
struct WriteDeltaDelegate_t8B476DEF456281BA34B0D04703C3543162BC7609  : public MulticastDelegate_t
{
};
struct WriteDeltaDelegate_tE5FD16D805C72D2EE27208BA463BC7D2BA923D85  : public MulticastDelegate_t
{
};
struct WriteDeltaDelegate_tDE9A2D16AFAF9E62FDA443573CDEB4A4A8114D8D  : public MulticastDelegate_t
{
};
struct WriteDeltaDelegate_tC67F55C5F48816BFF448F048A5EDB1F44E721270  : public MulticastDelegate_t
{
};
struct WriteDeltaDelegate_t012D58DA12096CDE5B3F8723C0BC5535F02F8A06  : public MulticastDelegate_t
{
};
struct WriteDeltaDelegate_tE738A850E7CCB35359470E6C7128BE79BD99DA66  : public MulticastDelegate_t
{
};
struct WriteDeltaDelegate_tC9B3AA2B1E5528B1D02722D84BC3AB2980D81902  : public MulticastDelegate_t
{
};
struct WriteValueDelegate_t50D95E61CEBE7B989D9E6B9E52A924880A040DDF  : public MulticastDelegate_t
{
};
struct WriteValueDelegate_tAB5E09C0958FE12D6017BA124FB35AEC2A0F69EE  : public MulticastDelegate_t
{
};
struct WriteValueDelegate_tC60A572918EC0CF835899702C221082E927F9BF1  : public MulticastDelegate_t
{
};
struct WriteValueDelegate_t8B3C6943F86D34C7048257FCC996A5D82A04AFBF  : public MulticastDelegate_t
{
};
struct WriteValueDelegate_tDEBCD609141F0411B3AD9A0B37D83D2D21321B50  : public MulticastDelegate_t
{
};
struct WriteValueDelegate_t151C4C983EB51995EDDE77F1D5F693BCDDBDACED  : public MulticastDelegate_t
{
};
struct WriteValueDelegate_t28D3C8BE903E7E73325C22836F9F68C58384EAE1  : public MulticastDelegate_t
{
};
struct WriteValueDelegate_t024E8A7B3A528B116063E2D7FA17CB14E06E4F16  : public MulticastDelegate_t
{
};
struct WriteValueDelegate_t45D324B20EFBA6F5D66410BDE5FAD8FDFAC3EF21  : public MulticastDelegate_t
{
};
struct WriteValueDelegate_t56FDBE53C8F6ADF47F9C8662115BF484A42703F8  : public MulticastDelegate_t
{
};
struct WriteValueDelegate_tF07A6D84C76842F9DF7E45B506143D8F6060D15F  : public MulticastDelegate_t
{
};
struct WriteValueDelegate_tC15BF137CB83E68C952D67EA8752B7A97841BDAC  : public MulticastDelegate_t
{
};
struct WriteValueDelegate_t5229761A9455193D5D8B28A714E3489CFD860723  : public MulticastDelegate_t
{
};
struct WriteValueDelegate_tF70BA29F2969BFB2104C17052D00DBCDB4B1B113  : public MulticastDelegate_t
{
};
struct WriteValueDelegate_tF8086A0C78B6B051B38BB69528E95426A2653AE4  : public MulticastDelegate_t
{
};
struct WriteValueDelegate_t7E0DAB5EB031E80524026DA5E69B8BC284685EAD  : public MulticastDelegate_t
{
};
struct WriteValueDelegate_tC3027B65BB056C8F37B342D753A4CA8474285D18  : public MulticastDelegate_t
{
};
struct WriteValueDelegate_t217B1C103C4D27C527620B9528827C801905E8B6  : public MulticastDelegate_t
{
};
struct WriteValueDelegate_t87086BD0A9A6D2BE7452749D920C58B9607894C7  : public MulticastDelegate_t
{
};
struct WriteValueDelegate_t88B6EFBB7B972D83905C56799D5DF8EAE16F41E5  : public MulticastDelegate_t
{
};
struct WriteValueDelegate_t68E2A03463D6DCF3C833BDAB83CFC16ED78E1CD8  : public MulticastDelegate_t
{
};
struct WriteValueDelegate_t20F1B1986CAED121C12F30E899A29DC0906C4931  : public MulticastDelegate_t
{
};
struct WriteValueDelegate_t8C465CFC206065169E9FE05E506A75847A375644  : public MulticastDelegate_t
{
};
struct WriteValueDelegate_t89E6668DF3B1C0A458B6747B41C5D177FD14C351  : public MulticastDelegate_t
{
};
struct ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct MatchStatClientSync_t53201D4730BB7370354E6F0489C98E2E0957D827 
{
	FixedString32Bytes_t0FB200DC482825CC1EF24B4640201CC039631824 ___userName;
	FixedString32Bytes_t0FB200DC482825CC1EF24B4640201CC039631824 ___userAuthId;
	uint64_t ___clientId;
	uint8_t ___connectState;
	uint8_t ___characterId;
	uint8_t ___skinId;
	int32_t ___heroCode;
	uint8_t ___heroRole;
	uint8_t ___artifakType;
	uint8_t ___team;
	uint8_t ___kill;
	uint8_t ___assist;
	uint8_t ___death;
};
struct NetworkCharacterSelectState_t3CA2BEC90F7FED70364463A60D4AD3C10698EBEF 
{
	uint64_t ___ClientId;
	int32_t ___CharacterId;
	int32_t ___SkinId;
	bool ___IsTaken;
	bool ___IsLock;
	int32_t ___Team;
	FixedString32Bytes_t0FB200DC482825CC1EF24B4640201CC039631824 ___Name;
};
struct NetworkCharacterSelectState_t3CA2BEC90F7FED70364463A60D4AD3C10698EBEF_marshaled_pinvoke
{
	uint64_t ___ClientId;
	int32_t ___CharacterId;
	int32_t ___SkinId;
	int32_t ___IsTaken;
	int32_t ___IsLock;
	int32_t ___Team;
	FixedString32Bytes_t0FB200DC482825CC1EF24B4640201CC039631824 ___Name;
};
struct NetworkCharacterSelectState_t3CA2BEC90F7FED70364463A60D4AD3C10698EBEF_marshaled_com
{
	uint64_t ___ClientId;
	int32_t ___CharacterId;
	int32_t ___SkinId;
	int32_t ___IsTaken;
	int32_t ___IsLock;
	int32_t ___Team;
	FixedString32Bytes_t0FB200DC482825CC1EF24B4640201CC039631824 ___Name;
};
struct NetworkDeltaPosition_tD1DE84F6587BF2B08490254D05F79F260D234FE9 
{
	HalfVector3_t921D176C4A9C03F0C05F55B8440B72BB3730EC02 ___HalfVector3;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___CurrentBasePosition;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___PrecisionLossDelta;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___HalfDeltaConvertedBack;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___PreviousPosition;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___DeltaPosition;
	int32_t ___NetworkTick;
	bool ___SynchronizeBase;
	bool ___CollapsedDeltaIntoBase;
};
struct UserPlayerData_tB7F0676C35AAB963313E190E7D7B97BDE5AA22D6 
{
	int32_t ___heroCode;
	int32_t ___skinId;
	FixedString32Bytes_t0FB200DC482825CC1EF24B4640201CC039631824 ___userName;
	FixedString32Bytes_t0FB200DC482825CC1EF24B4640201CC039631824 ___userAuthId;
};
struct WriteDeltaDelegate_t5037628E7793813F5FC9D57D241C463644491024  : public MulticastDelegate_t
{
};
struct WriteValueDelegate_t8FEF9ED27C319AD2333C17230727C2AFBE82F0D0  : public MulticastDelegate_t
{
};
struct WriteValueDelegate_t2AB9AB6218D28F8C724E65BC320D9697354C0E25  : public MulticastDelegate_t
{
};
struct WriteValueDelegate_tEB628C298806C5A8F41B790FB23343AFABA232B8  : public MulticastDelegate_t
{
};
struct OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C  : public ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA
{
};
struct NetworkTransformState_tCCC77820160AFE28825DDD9C3F090B523CA8F5ED 
{
	uint32_t ___m_Bitset;
	double ___SentTime;
	float ___PositionX;
	float ___PositionY;
	float ___PositionZ;
	float ___RotAngleX;
	float ___RotAngleY;
	float ___RotAngleZ;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___Rotation;
	float ___ScaleX;
	float ___ScaleY;
	float ___ScaleZ;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___CurrentPosition;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___DeltaPosition;
	NetworkDeltaPosition_tD1DE84F6587BF2B08490254D05F79F260D234FE9 ___NetworkDeltaPosition;
	HalfVector3_t921D176C4A9C03F0C05F55B8440B72BB3730EC02 ___HalfVectorScale;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___Scale;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___LossyScale;
	HalfVector4_t493672846617D0E05AE7C0B3E38E7B460948A1BD ___HalfVectorRotation;
	uint32_t ___QuaternionCompressed;
	bool ___U3CIsDirtyU3Ek__BackingField;
	int32_t ___U3CLastSerializedSizeU3Ek__BackingField;
	int32_t ___NetworkTick;
	int32_t ___StateId;
	bool ___ExplicitSet;
	FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99 ___m_Reader;
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___m_Writer;
	HalfVector3_t921D176C4A9C03F0C05F55B8440B72BB3730EC02 ___HalfEulerRotation;
};
struct WriteDeltaDelegate_tAE91576E843E7D3658DD43AAE4FA0208727DBDF7  : public MulticastDelegate_t
{
};
struct WriteValueDelegate_t49F65B2D9C5E28CC45790864AE8F1B4F00F1E203  : public MulticastDelegate_t
{
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23_StaticFields
{
	fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* ___True;
	fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* ___False;
	fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* ___Null;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1;
};
struct FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_StaticFields
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_ByteArrayCache;
};
struct IntPtr_t_StaticFields
{
	intptr_t ___Zero;
};
struct NetworkObjectReference_tDC1F1C3CC1E28DCB9229C36E30BB81F847CF77FD_StaticFields
{
	uint64_t ___s_NullId;
};
struct fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_StaticFields
{
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___EmptyStringArray;
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 ___Success;
};
struct Type_t_StaticFields
{
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder;
	Il2CppChar ___Delimiter;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes;
	RuntimeObject* ___Missing;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
struct EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_t6E72C722C46949F140550D563C1F41E304752583 m_Items[1];

	inline Entry_t6E72C722C46949F140550D563C1F41E304752583 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_t6E72C722C46949F140550D563C1F41E304752583* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_t6E72C722C46949F140550D563C1F41E304752583 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Value), (void*)NULL);
	}
	inline Entry_t6E72C722C46949F140550D563C1F41E304752583 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_t6E72C722C46949F140550D563C1F41E304752583* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_t6E72C722C46949F140550D563C1F41E304752583 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Value), (void*)NULL);
	}
};
struct EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
};


IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ExtractKeyDelegate_Invoke_m3214A3F92C2EB22088AB7738E8DFE1BE70925148_gshared_inline (ExtractKeyDelegate_t9BADAD4BDEEE5FEB8CBD095F1EA307C3DA921583* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XHashtableState__ctor_m37E975C296D7D8CDF9ACAA9ABD7C4A0C82C427D3_gshared (XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* __this, ExtractKeyDelegate_t9BADAD4BDEEE5FEB8CBD095F1EA307C3DA921583* ___0_extractKey, int32_t ___1_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XHashtableState_TryAdd_m951A9A914307495745E2B33DB0BA6583FB4060A1_gshared (XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* __this, RuntimeObject* ___0_value, RuntimeObject** ___1_newValue, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XHashtableState_ComputeHashCode_mD58A823B4A09F8DB93853EA9536E6B457B59F1B1_gshared (String_t* ___0_key, int32_t ___1_index, int32_t ___2_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XHashtableState_FindEntry_m3AC0430564190D3FCAD9A8DB1DD0E725F7392A91_gshared (XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* __this, int32_t ___0_hashCode, String_t* ___1_key, int32_t ___2_index, int32_t ___3_count, int32_t* ___4_entryIndex, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XHashtableState_TryGetValue_m22BFB31B1A4E2CEDE4CA7133F4A0B50B9E514308_gshared (XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* __this, String_t* ___0_key, int32_t ___1_index, int32_t ___2_count, RuntimeObject** ___3_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* XHashtableState_Resize_mDB3BA5C327EF6A86F6CE58B59E1D7430E62532C5_gshared (XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m92E9AB321FBD7147CA109C822D99C8B0610C27B7_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_mE1EFF7C68491EE07D21EE9924475A559BF0A4773_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_mED5C451F158CDDD2B3F4B0720CD248DA9DB27B25_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Item_mC3FEA647E750C27367C990777D8890E0E712E514_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mAF1EF7DA16BD70E252EA5C4B0F74DE519A02CBCD_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool fsOption_1_get_HasValue_m2E9021BB4CB6156A14918A5B865D21751CA6D00C_gshared_inline (fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool fsOption_1_get_IsEmpty_m8F02E0608720E562CDB4C8906C1CD863FD8FE767_gshared (fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsOption_1_get_Value_m2A0C3FDC3098EA4DC3BB5CF398E95EC2C991988A_gshared (fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsOption_1__ctor_m343A7CF35E302DB9E5BCA27A0DAC03751B238516_gshared (fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88* __this, Il2CppFullySharedGenericAny ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool fsOption_1_get_HasValue_mA83E56B4674C678E7C760EABB73397EF37356E6F_gshared_inline (fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool fsOption_1_get_IsEmpty_m95C6343EC3B5E180C487DF2F28019391A5B6672E_gshared (fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 fsOption_1_get_Value_m06DFFCCEB8E41DDEAEC89C3133DC3E75E3EA2241_gshared (fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsOption_1__ctor_m22E0CD4999637C5B1CCFAD980FD29F2FFE3963B6_gshared (fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A* __this, fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 ___0_value, const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717 (int32_t* ___0_location1, int32_t ___1_value, int32_t ___2_comparand, const RuntimeMethod* method) ;
inline String_t* ExtractKeyDelegate_Invoke_m3214A3F92C2EB22088AB7738E8DFE1BE70925148_inline (ExtractKeyDelegate_t9BADAD4BDEEE5FEB8CBD095F1EA307C3DA921583* __this, RuntimeObject* ___0_value, const RuntimeMethod* method)
{
	return ((  String_t* (*) (ExtractKeyDelegate_t9BADAD4BDEEE5FEB8CBD095F1EA307C3DA921583*, RuntimeObject*, const RuntimeMethod*))ExtractKeyDelegate_Invoke_m3214A3F92C2EB22088AB7738E8DFE1BE70925148_gshared_inline)(__this, ___0_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OverflowException__ctor_m7F6A928C9BE47384586BDDE8B4B87666421E0F1A (OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C* __this, const RuntimeMethod* method) ;
inline void XHashtableState__ctor_m37E975C296D7D8CDF9ACAA9ABD7C4A0C82C427D3 (XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* __this, ExtractKeyDelegate_t9BADAD4BDEEE5FEB8CBD095F1EA307C3DA921583* ___0_extractKey, int32_t ___1_capacity, const RuntimeMethod* method)
{
	((  void (*) (XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A*, ExtractKeyDelegate_t9BADAD4BDEEE5FEB8CBD095F1EA307C3DA921583*, int32_t, const RuntimeMethod*))XHashtableState__ctor_m37E975C296D7D8CDF9ACAA9ABD7C4A0C82C427D3_gshared)(__this, ___0_extractKey, ___1_capacity, method);
}
inline bool XHashtableState_TryAdd_m951A9A914307495745E2B33DB0BA6583FB4060A1 (XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* __this, RuntimeObject* ___0_value, RuntimeObject** ___1_newValue, const RuntimeMethod* method)
{
	return ((  bool (*) (XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A*, RuntimeObject*, RuntimeObject**, const RuntimeMethod*))XHashtableState_TryAdd_m951A9A914307495745E2B33DB0BA6583FB4060A1_gshared)(__this, ___0_value, ___1_newValue, method);
}
inline int32_t XHashtableState_ComputeHashCode_mD58A823B4A09F8DB93853EA9536E6B457B59F1B1 (String_t* ___0_key, int32_t ___1_index, int32_t ___2_count, const RuntimeMethod* method)
{
	return ((  int32_t (*) (String_t*, int32_t, int32_t, const RuntimeMethod*))XHashtableState_ComputeHashCode_mD58A823B4A09F8DB93853EA9536E6B457B59F1B1_gshared)(___0_key, ___1_index, ___2_count, method);
}
inline bool XHashtableState_FindEntry_m3AC0430564190D3FCAD9A8DB1DD0E725F7392A91 (XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* __this, int32_t ___0_hashCode, String_t* ___1_key, int32_t ___2_index, int32_t ___3_count, int32_t* ___4_entryIndex, const RuntimeMethod* method)
{
	return ((  bool (*) (XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A*, int32_t, String_t*, int32_t, int32_t, int32_t*, const RuntimeMethod*))XHashtableState_FindEntry_m3AC0430564190D3FCAD9A8DB1DD0E725F7392A91_gshared)(__this, ___0_hashCode, ___1_key, ___2_index, ___3_count, ___4_entryIndex, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interlocked_Increment_m3C240C32E8D9544EC050B74D4F28EEB58F1F9309 (int32_t* ___0_location, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Thread_MemoryBarrier_m83873F1E6CEB16C0781941141382DA874A36097D (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_CompareOrdinal_m8940CFAE90021ED8DA3F2DF8226941C9EEB2E32D (String_t* ___0_strA, int32_t ___1_indexA, String_t* ___2_strB, int32_t ___3_indexB, int32_t ___4_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___0_index, const RuntimeMethod* method) ;
inline bool XHashtableState_TryGetValue_m22BFB31B1A4E2CEDE4CA7133F4A0B50B9E514308 (XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* __this, String_t* ___0_key, int32_t ___1_index, int32_t ___2_count, RuntimeObject** ___3_value, const RuntimeMethod* method)
{
	return ((  bool (*) (XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A*, String_t*, int32_t, int32_t, RuntimeObject**, const RuntimeMethod*))XHashtableState_TryGetValue_m22BFB31B1A4E2CEDE4CA7133F4A0B50B9E514308_gshared)(__this, ___0_key, ___1_index, ___2_count, ___3_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149 (RuntimeObject* ___0_obj, bool* ___1_lockTaken, const RuntimeMethod* method) ;
inline XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* XHashtableState_Resize_mDB3BA5C327EF6A86F6CE58B59E1D7430E62532C5 (XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* __this, const RuntimeMethod* method)
{
	return ((  XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* (*) (XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A*, const RuntimeMethod*))XHashtableState_Resize_mDB3BA5C327EF6A86F6CE58B59E1D7430E62532C5_gshared)(__this, method);
}
inline void Dictionary_2__ctor_m92E9AB321FBD7147CA109C822D99C8B0610C27B7 (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907*, const RuntimeMethod*))Dictionary_2__ctor_m92E9AB321FBD7147CA109C822D99C8B0610C27B7_gshared)(__this, method);
}
inline void Dictionary_2_Clear_mE1EFF7C68491EE07D21EE9924475A559BF0A4773 (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907*, const RuntimeMethod*))Dictionary_2_Clear_mE1EFF7C68491EE07D21EE9924475A559BF0A4773_gshared)(__this, method);
}
inline bool Dictionary_2_ContainsKey_mED5C451F158CDDD2B3F4B0720CD248DA9DB27B25 (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907*, int32_t, const RuntimeMethod*))Dictionary_2_ContainsKey_mED5C451F158CDDD2B3F4B0720CD248DA9DB27B25_gshared)(__this, ___0_key, method);
}
inline RuntimeObject* Dictionary_2_get_Item_mC3FEA647E750C27367C990777D8890E0E712E514 (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___0_key, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907*, int32_t, const RuntimeMethod*))Dictionary_2_get_Item_mC3FEA647E750C27367C990777D8890E0E712E514_gshared)(__this, ___0_key, method);
}
inline void Dictionary_2_Add_mAF1EF7DA16BD70E252EA5C4B0F74DE519A02CBCD (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907*, int32_t, RuntimeObject*, const RuntimeMethod*))Dictionary_2_Add_mAF1EF7DA16BD70E252EA5C4B0F74DE519A02CBCD_gshared)(__this, ___0_key, ___1_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
inline void Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04 (Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsData__ctor_mCF4D73BFD9271596000ACC3E17988E3492236781 (fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* __this, Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* ___0_dict, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsBaseConverter_CheckType_m14C4D0CAF424DF9F14D6365B5E5681C43FA82F32 (fsBaseConverter_tDF9366828A5B8ADB6D986EB35B320D4DDC81CB04* __this, fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* ___0_data, int32_t ___1_type, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsResult_op_Addition_mA94A4AD68668E539DEFE1255DC72B9D11A6DE41C (fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 ___0_a, fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool fsResult_get_Failed_m1398C627A72E75F5C7F8DB1A7C14E5B3271FF1FB (fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* fsData_get_AsDictionary_m51779E71BBC994A7F5036BFB43F61B28C0817D86 (fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsDirectConverter__ctor_mCE6F7898DA2A3FBE101F5939D06A809E3164ABE1 (fsDirectConverter_t9EE506A371C95C62E21CA6586396D7B3BD55F668* __this, const RuntimeMethod* method) ;
inline bool fsOption_1_get_HasValue_m2E9021BB4CB6156A14918A5B865D21751CA6D00C_inline (fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88*, const RuntimeMethod*))fsOption_1_get_HasValue_m2E9021BB4CB6156A14918A5B865D21751CA6D00C_gshared_inline)(__this, method);
}
inline bool fsOption_1_get_IsEmpty_m8F02E0608720E562CDB4C8906C1CD863FD8FE767 (fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88*, const RuntimeMethod*))fsOption_1_get_IsEmpty_m8F02E0608720E562CDB4C8906C1CD863FD8FE767_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___0_message, const RuntimeMethod* method) ;
inline void fsOption_1_get_Value_m2A0C3FDC3098EA4DC3BB5CF398E95EC2C991988A (fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))fsOption_1_get_Value_m2A0C3FDC3098EA4DC3BB5CF398E95EC2C991988A_gshared)((fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88*)__this, il2cppRetVal, method);
}
inline void fsOption_1__ctor_m343A7CF35E302DB9E5BCA27A0DAC03751B238516 (fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88* __this, Il2CppFullySharedGenericAny ___0_value, const RuntimeMethod* method)
{
	((  void (*) (fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88*, Il2CppFullySharedGenericAny, const RuntimeMethod*))fsOption_1__ctor_m343A7CF35E302DB9E5BCA27A0DAC03751B238516_gshared)((fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88*)__this, ___0_value, method);
}
inline bool fsOption_1_get_HasValue_mA83E56B4674C678E7C760EABB73397EF37356E6F_inline (fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A*, const RuntimeMethod*))fsOption_1_get_HasValue_mA83E56B4674C678E7C760EABB73397EF37356E6F_gshared_inline)(__this, method);
}
inline bool fsOption_1_get_IsEmpty_m95C6343EC3B5E180C487DF2F28019391A5B6672E (fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A*, const RuntimeMethod*))fsOption_1_get_IsEmpty_m95C6343EC3B5E180C487DF2F28019391A5B6672E_gshared)(__this, method);
}
inline fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 fsOption_1_get_Value_m06DFFCCEB8E41DDEAEC89C3133DC3E75E3EA2241 (fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A* __this, const RuntimeMethod* method)
{
	return ((  fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 (*) (fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A*, const RuntimeMethod*))fsOption_1_get_Value_m06DFFCCEB8E41DDEAEC89C3133DC3E75E3EA2241_gshared)(__this, method);
}
inline void fsOption_1__ctor_m22E0CD4999637C5B1CCFAD980FD29F2FFE3963B6 (fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A* __this, fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 ___0_value, const RuntimeMethod* method)
{
	((  void (*) (fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A*, fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8, const RuntimeMethod*))fsOption_1__ctor_m22E0CD4999637C5B1CCFAD980FD29F2FFE3963B6_gshared)(__this, ___0_value, method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void WriteDeltaDelegate_Invoke_m84D067AEE29F69571E65EBF623EC37454DACE8F9_Multicast(WriteDeltaDelegate_t18D222402FA79F0C2647FA4DF1C713CE7617227C* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, S_Stack_t765C2DB295BE8C07FB40C225F6570328D9FD787A* ___1_value, S_Stack_t765C2DB295BE8C07FB40C225F6570328D9FD787A* ___2_previousValue, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		WriteDeltaDelegate_t18D222402FA79F0C2647FA4DF1C713CE7617227C* currentDelegate = reinterpret_cast<WriteDeltaDelegate_t18D222402FA79F0C2647FA4DF1C713CE7617227C*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, S_Stack_t765C2DB295BE8C07FB40C225F6570328D9FD787A*, S_Stack_t765C2DB295BE8C07FB40C225F6570328D9FD787A*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_writer, ___1_value, ___2_previousValue, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void WriteDeltaDelegate_Invoke_m84D067AEE29F69571E65EBF623EC37454DACE8F9_OpenInst(WriteDeltaDelegate_t18D222402FA79F0C2647FA4DF1C713CE7617227C* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, S_Stack_t765C2DB295BE8C07FB40C225F6570328D9FD787A* ___1_value, S_Stack_t765C2DB295BE8C07FB40C225F6570328D9FD787A* ___2_previousValue, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, S_Stack_t765C2DB295BE8C07FB40C225F6570328D9FD787A*, S_Stack_t765C2DB295BE8C07FB40C225F6570328D9FD787A*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_writer, ___1_value, ___2_previousValue, method);
}
void WriteDeltaDelegate_Invoke_m84D067AEE29F69571E65EBF623EC37454DACE8F9_OpenStatic(WriteDeltaDelegate_t18D222402FA79F0C2647FA4DF1C713CE7617227C* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, S_Stack_t765C2DB295BE8C07FB40C225F6570328D9FD787A* ___1_value, S_Stack_t765C2DB295BE8C07FB40C225F6570328D9FD787A* ___2_previousValue, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, S_Stack_t765C2DB295BE8C07FB40C225F6570328D9FD787A*, S_Stack_t765C2DB295BE8C07FB40C225F6570328D9FD787A*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_writer, ___1_value, ___2_previousValue, method);
}
// Method Definition Index: 82871
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDeltaDelegate__ctor_m99F8F8C297AF9DC24080A99208EBCED30817970F_gshared (WriteDeltaDelegate_t18D222402FA79F0C2647FA4DF1C713CE7617227C* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 3;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&WriteDeltaDelegate_Invoke_m84D067AEE29F69571E65EBF623EC37454DACE8F9_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl = __this->___method_ptr;
		__this->___method_code = (intptr_t)__this->___m_target;
	}
	__this->___extra_arg = (intptr_t)&WriteDeltaDelegate_Invoke_m84D067AEE29F69571E65EBF623EC37454DACE8F9_Multicast;
}
// Method Definition Index: 82872
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDeltaDelegate_Invoke_m84D067AEE29F69571E65EBF623EC37454DACE8F9_gshared (WriteDeltaDelegate_t18D222402FA79F0C2647FA4DF1C713CE7617227C* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, S_Stack_t765C2DB295BE8C07FB40C225F6570328D9FD787A* ___1_value, S_Stack_t765C2DB295BE8C07FB40C225F6570328D9FD787A* ___2_previousValue, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, S_Stack_t765C2DB295BE8C07FB40C225F6570328D9FD787A*, S_Stack_t765C2DB295BE8C07FB40C225F6570328D9FD787A*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_writer, ___1_value, ___2_previousValue, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 82873
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WriteDeltaDelegate_BeginInvoke_m3D3E32E32E5211ADE61C5CF4F70664E37B0C3210_gshared (WriteDeltaDelegate_t18D222402FA79F0C2647FA4DF1C713CE7617227C* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, S_Stack_t765C2DB295BE8C07FB40C225F6570328D9FD787A* ___1_value, S_Stack_t765C2DB295BE8C07FB40C225F6570328D9FD787A* ___2_previousValue, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___3_callback, RuntimeObject* ___4_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&S_Stack_t765C2DB295BE8C07FB40C225F6570328D9FD787A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var, &___0_writer);
	__d_args[1] = Box(S_Stack_t765C2DB295BE8C07FB40C225F6570328D9FD787A_il2cpp_TypeInfo_var, &*___1_value);
	__d_args[2] = Box(S_Stack_t765C2DB295BE8C07FB40C225F6570328D9FD787A_il2cpp_TypeInfo_var, &*___2_previousValue);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___3_callback, (RuntimeObject*)___4_object);
}
// Method Definition Index: 82874
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDeltaDelegate_EndInvoke_mC994D88F5D2942A7BC827EFF85840733649D6C76_gshared (WriteDeltaDelegate_t18D222402FA79F0C2647FA4DF1C713CE7617227C* __this, S_Stack_t765C2DB295BE8C07FB40C225F6570328D9FD787A* ___0_value, S_Stack_t765C2DB295BE8C07FB40C225F6570328D9FD787A* ___1_previousValue, RuntimeObject* ___2_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___2_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void WriteDeltaDelegate_Invoke_m764879748C7EB74706911DDC8BF0472AC88DEC97_Multicast(WriteDeltaDelegate_t25C554505A9C8FD9FF8C6B5F2D428B93EA4C1453* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, S_Stats_t8976BA1109823F18D06136E3A6E6E5F2B5F2A86E* ___1_value, S_Stats_t8976BA1109823F18D06136E3A6E6E5F2B5F2A86E* ___2_previousValue, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		WriteDeltaDelegate_t25C554505A9C8FD9FF8C6B5F2D428B93EA4C1453* currentDelegate = reinterpret_cast<WriteDeltaDelegate_t25C554505A9C8FD9FF8C6B5F2D428B93EA4C1453*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, S_Stats_t8976BA1109823F18D06136E3A6E6E5F2B5F2A86E*, S_Stats_t8976BA1109823F18D06136E3A6E6E5F2B5F2A86E*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_writer, ___1_value, ___2_previousValue, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void WriteDeltaDelegate_Invoke_m764879748C7EB74706911DDC8BF0472AC88DEC97_OpenInst(WriteDeltaDelegate_t25C554505A9C8FD9FF8C6B5F2D428B93EA4C1453* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, S_Stats_t8976BA1109823F18D06136E3A6E6E5F2B5F2A86E* ___1_value, S_Stats_t8976BA1109823F18D06136E3A6E6E5F2B5F2A86E* ___2_previousValue, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, S_Stats_t8976BA1109823F18D06136E3A6E6E5F2B5F2A86E*, S_Stats_t8976BA1109823F18D06136E3A6E6E5F2B5F2A86E*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_writer, ___1_value, ___2_previousValue, method);
}
void WriteDeltaDelegate_Invoke_m764879748C7EB74706911DDC8BF0472AC88DEC97_OpenStatic(WriteDeltaDelegate_t25C554505A9C8FD9FF8C6B5F2D428B93EA4C1453* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, S_Stats_t8976BA1109823F18D06136E3A6E6E5F2B5F2A86E* ___1_value, S_Stats_t8976BA1109823F18D06136E3A6E6E5F2B5F2A86E* ___2_previousValue, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, S_Stats_t8976BA1109823F18D06136E3A6E6E5F2B5F2A86E*, S_Stats_t8976BA1109823F18D06136E3A6E6E5F2B5F2A86E*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_writer, ___1_value, ___2_previousValue, method);
}
// Method Definition Index: 82871
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDeltaDelegate__ctor_mF4B7E196025DA5A8D6F99EC56E07C06E9369FD74_gshared (WriteDeltaDelegate_t25C554505A9C8FD9FF8C6B5F2D428B93EA4C1453* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 3;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&WriteDeltaDelegate_Invoke_m764879748C7EB74706911DDC8BF0472AC88DEC97_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl = __this->___method_ptr;
		__this->___method_code = (intptr_t)__this->___m_target;
	}
	__this->___extra_arg = (intptr_t)&WriteDeltaDelegate_Invoke_m764879748C7EB74706911DDC8BF0472AC88DEC97_Multicast;
}
// Method Definition Index: 82872
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDeltaDelegate_Invoke_m764879748C7EB74706911DDC8BF0472AC88DEC97_gshared (WriteDeltaDelegate_t25C554505A9C8FD9FF8C6B5F2D428B93EA4C1453* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, S_Stats_t8976BA1109823F18D06136E3A6E6E5F2B5F2A86E* ___1_value, S_Stats_t8976BA1109823F18D06136E3A6E6E5F2B5F2A86E* ___2_previousValue, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, S_Stats_t8976BA1109823F18D06136E3A6E6E5F2B5F2A86E*, S_Stats_t8976BA1109823F18D06136E3A6E6E5F2B5F2A86E*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_writer, ___1_value, ___2_previousValue, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 82873
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WriteDeltaDelegate_BeginInvoke_m44348B7AF500909F5D38A405F014686D28DCFBE5_gshared (WriteDeltaDelegate_t25C554505A9C8FD9FF8C6B5F2D428B93EA4C1453* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, S_Stats_t8976BA1109823F18D06136E3A6E6E5F2B5F2A86E* ___1_value, S_Stats_t8976BA1109823F18D06136E3A6E6E5F2B5F2A86E* ___2_previousValue, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___3_callback, RuntimeObject* ___4_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&S_Stats_t8976BA1109823F18D06136E3A6E6E5F2B5F2A86E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var, &___0_writer);
	__d_args[1] = Box(S_Stats_t8976BA1109823F18D06136E3A6E6E5F2B5F2A86E_il2cpp_TypeInfo_var, &*___1_value);
	__d_args[2] = Box(S_Stats_t8976BA1109823F18D06136E3A6E6E5F2B5F2A86E_il2cpp_TypeInfo_var, &*___2_previousValue);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___3_callback, (RuntimeObject*)___4_object);
}
// Method Definition Index: 82874
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDeltaDelegate_EndInvoke_m631B43486B457BD690A0E976F6DC160827C69942_gshared (WriteDeltaDelegate_t25C554505A9C8FD9FF8C6B5F2D428B93EA4C1453* __this, S_Stats_t8976BA1109823F18D06136E3A6E6E5F2B5F2A86E* ___0_value, S_Stats_t8976BA1109823F18D06136E3A6E6E5F2B5F2A86E* ___1_previousValue, RuntimeObject* ___2_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___2_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void WriteDeltaDelegate_Invoke_mE4E28C2496076488CFD5FF519704489D7B7CFE42_Multicast(WriteDeltaDelegate_t06FDE026EA06A2D52B05B8785C9C84AA8EEBA292* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, S_TowerStats_t73D8D343CC245E34D05DCA470D39D0BA8B078248* ___1_value, S_TowerStats_t73D8D343CC245E34D05DCA470D39D0BA8B078248* ___2_previousValue, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		WriteDeltaDelegate_t06FDE026EA06A2D52B05B8785C9C84AA8EEBA292* currentDelegate = reinterpret_cast<WriteDeltaDelegate_t06FDE026EA06A2D52B05B8785C9C84AA8EEBA292*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, S_TowerStats_t73D8D343CC245E34D05DCA470D39D0BA8B078248*, S_TowerStats_t73D8D343CC245E34D05DCA470D39D0BA8B078248*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_writer, ___1_value, ___2_previousValue, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void WriteDeltaDelegate_Invoke_mE4E28C2496076488CFD5FF519704489D7B7CFE42_OpenInst(WriteDeltaDelegate_t06FDE026EA06A2D52B05B8785C9C84AA8EEBA292* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, S_TowerStats_t73D8D343CC245E34D05DCA470D39D0BA8B078248* ___1_value, S_TowerStats_t73D8D343CC245E34D05DCA470D39D0BA8B078248* ___2_previousValue, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, S_TowerStats_t73D8D343CC245E34D05DCA470D39D0BA8B078248*, S_TowerStats_t73D8D343CC245E34D05DCA470D39D0BA8B078248*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_writer, ___1_value, ___2_previousValue, method);
}
void WriteDeltaDelegate_Invoke_mE4E28C2496076488CFD5FF519704489D7B7CFE42_OpenStatic(WriteDeltaDelegate_t06FDE026EA06A2D52B05B8785C9C84AA8EEBA292* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, S_TowerStats_t73D8D343CC245E34D05DCA470D39D0BA8B078248* ___1_value, S_TowerStats_t73D8D343CC245E34D05DCA470D39D0BA8B078248* ___2_previousValue, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, S_TowerStats_t73D8D343CC245E34D05DCA470D39D0BA8B078248*, S_TowerStats_t73D8D343CC245E34D05DCA470D39D0BA8B078248*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_writer, ___1_value, ___2_previousValue, method);
}
// Method Definition Index: 82871
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDeltaDelegate__ctor_m06842444BAD4312E3B00A6C29D80005A097F6674_gshared (WriteDeltaDelegate_t06FDE026EA06A2D52B05B8785C9C84AA8EEBA292* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 3;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&WriteDeltaDelegate_Invoke_mE4E28C2496076488CFD5FF519704489D7B7CFE42_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl = __this->___method_ptr;
		__this->___method_code = (intptr_t)__this->___m_target;
	}
	__this->___extra_arg = (intptr_t)&WriteDeltaDelegate_Invoke_mE4E28C2496076488CFD5FF519704489D7B7CFE42_Multicast;
}
// Method Definition Index: 82872
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDeltaDelegate_Invoke_mE4E28C2496076488CFD5FF519704489D7B7CFE42_gshared (WriteDeltaDelegate_t06FDE026EA06A2D52B05B8785C9C84AA8EEBA292* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, S_TowerStats_t73D8D343CC245E34D05DCA470D39D0BA8B078248* ___1_value, S_TowerStats_t73D8D343CC245E34D05DCA470D39D0BA8B078248* ___2_previousValue, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, S_TowerStats_t73D8D343CC245E34D05DCA470D39D0BA8B078248*, S_TowerStats_t73D8D343CC245E34D05DCA470D39D0BA8B078248*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_writer, ___1_value, ___2_previousValue, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 82873
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WriteDeltaDelegate_BeginInvoke_m31B4AA52CA2422B252AB49BD57510AF10F240429_gshared (WriteDeltaDelegate_t06FDE026EA06A2D52B05B8785C9C84AA8EEBA292* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, S_TowerStats_t73D8D343CC245E34D05DCA470D39D0BA8B078248* ___1_value, S_TowerStats_t73D8D343CC245E34D05DCA470D39D0BA8B078248* ___2_previousValue, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___3_callback, RuntimeObject* ___4_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&S_TowerStats_t73D8D343CC245E34D05DCA470D39D0BA8B078248_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var, &___0_writer);
	__d_args[1] = Box(S_TowerStats_t73D8D343CC245E34D05DCA470D39D0BA8B078248_il2cpp_TypeInfo_var, &*___1_value);
	__d_args[2] = Box(S_TowerStats_t73D8D343CC245E34D05DCA470D39D0BA8B078248_il2cpp_TypeInfo_var, &*___2_previousValue);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___3_callback, (RuntimeObject*)___4_object);
}
// Method Definition Index: 82874
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDeltaDelegate_EndInvoke_m0859B8F060862C31BA3BF69CCE756A95A013C253_gshared (WriteDeltaDelegate_t06FDE026EA06A2D52B05B8785C9C84AA8EEBA292* __this, S_TowerStats_t73D8D343CC245E34D05DCA470D39D0BA8B078248* ___0_value, S_TowerStats_t73D8D343CC245E34D05DCA470D39D0BA8B078248* ___1_previousValue, RuntimeObject* ___2_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___2_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void WriteDeltaDelegate_Invoke_m1270B5C0AFC035CBCAEB7687DC17D3CDDB75154A_Multicast(WriteDeltaDelegate_t8B476DEF456281BA34B0D04703C3543162BC7609* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, float* ___1_value, float* ___2_previousValue, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		WriteDeltaDelegate_t8B476DEF456281BA34B0D04703C3543162BC7609* currentDelegate = reinterpret_cast<WriteDeltaDelegate_t8B476DEF456281BA34B0D04703C3543162BC7609*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, float*, float*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_writer, ___1_value, ___2_previousValue, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void WriteDeltaDelegate_Invoke_m1270B5C0AFC035CBCAEB7687DC17D3CDDB75154A_OpenInst(WriteDeltaDelegate_t8B476DEF456281BA34B0D04703C3543162BC7609* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, float* ___1_value, float* ___2_previousValue, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, float*, float*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_writer, ___1_value, ___2_previousValue, method);
}
void WriteDeltaDelegate_Invoke_m1270B5C0AFC035CBCAEB7687DC17D3CDDB75154A_OpenStatic(WriteDeltaDelegate_t8B476DEF456281BA34B0D04703C3543162BC7609* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, float* ___1_value, float* ___2_previousValue, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, float*, float*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_writer, ___1_value, ___2_previousValue, method);
}
// Method Definition Index: 82871
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDeltaDelegate__ctor_m953D36EF6344C3DECDED283DBF87FB7437581AA5_gshared (WriteDeltaDelegate_t8B476DEF456281BA34B0D04703C3543162BC7609* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 3;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&WriteDeltaDelegate_Invoke_m1270B5C0AFC035CBCAEB7687DC17D3CDDB75154A_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl = __this->___method_ptr;
		__this->___method_code = (intptr_t)__this->___m_target;
	}
	__this->___extra_arg = (intptr_t)&WriteDeltaDelegate_Invoke_m1270B5C0AFC035CBCAEB7687DC17D3CDDB75154A_Multicast;
}
// Method Definition Index: 82872
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDeltaDelegate_Invoke_m1270B5C0AFC035CBCAEB7687DC17D3CDDB75154A_gshared (WriteDeltaDelegate_t8B476DEF456281BA34B0D04703C3543162BC7609* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, float* ___1_value, float* ___2_previousValue, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, float*, float*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_writer, ___1_value, ___2_previousValue, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 82873
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WriteDeltaDelegate_BeginInvoke_mC8E3705C3696052C531CEDD279568B62358A1B6F_gshared (WriteDeltaDelegate_t8B476DEF456281BA34B0D04703C3543162BC7609* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, float* ___1_value, float* ___2_previousValue, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___3_callback, RuntimeObject* ___4_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var, &___0_writer);
	__d_args[1] = Box(il2cpp_defaults.single_class, &*___1_value);
	__d_args[2] = Box(il2cpp_defaults.single_class, &*___2_previousValue);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___3_callback, (RuntimeObject*)___4_object);
}
// Method Definition Index: 82874
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDeltaDelegate_EndInvoke_m84523C9BB0DEC6A81368866EAEF3DBA091E4CA14_gshared (WriteDeltaDelegate_t8B476DEF456281BA34B0D04703C3543162BC7609* __this, float* ___0_value, float* ___1_previousValue, RuntimeObject* ___2_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___2_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void WriteDeltaDelegate_Invoke_m7ACB3561EB283E66A4E90676333910D55C31501D_Multicast(WriteDeltaDelegate_tE5FD16D805C72D2EE27208BA463BC7D2BA923D85* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, uint16_t* ___1_value, uint16_t* ___2_previousValue, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		WriteDeltaDelegate_tE5FD16D805C72D2EE27208BA463BC7D2BA923D85* currentDelegate = reinterpret_cast<WriteDeltaDelegate_tE5FD16D805C72D2EE27208BA463BC7D2BA923D85*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, uint16_t*, uint16_t*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_writer, ___1_value, ___2_previousValue, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void WriteDeltaDelegate_Invoke_m7ACB3561EB283E66A4E90676333910D55C31501D_OpenInst(WriteDeltaDelegate_tE5FD16D805C72D2EE27208BA463BC7D2BA923D85* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, uint16_t* ___1_value, uint16_t* ___2_previousValue, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, uint16_t*, uint16_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_writer, ___1_value, ___2_previousValue, method);
}
void WriteDeltaDelegate_Invoke_m7ACB3561EB283E66A4E90676333910D55C31501D_OpenStatic(WriteDeltaDelegate_tE5FD16D805C72D2EE27208BA463BC7D2BA923D85* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, uint16_t* ___1_value, uint16_t* ___2_previousValue, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, uint16_t*, uint16_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_writer, ___1_value, ___2_previousValue, method);
}
// Method Definition Index: 82871
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDeltaDelegate__ctor_m10008D95166F32EA0A356A6B68446391ED4ED590_gshared (WriteDeltaDelegate_tE5FD16D805C72D2EE27208BA463BC7D2BA923D85* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 3;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&WriteDeltaDelegate_Invoke_m7ACB3561EB283E66A4E90676333910D55C31501D_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl = __this->___method_ptr;
		__this->___method_code = (intptr_t)__this->___m_target;
	}
	__this->___extra_arg = (intptr_t)&WriteDeltaDelegate_Invoke_m7ACB3561EB283E66A4E90676333910D55C31501D_Multicast;
}
// Method Definition Index: 82872
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDeltaDelegate_Invoke_m7ACB3561EB283E66A4E90676333910D55C31501D_gshared (WriteDeltaDelegate_tE5FD16D805C72D2EE27208BA463BC7D2BA923D85* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, uint16_t* ___1_value, uint16_t* ___2_previousValue, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, uint16_t*, uint16_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_writer, ___1_value, ___2_previousValue, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 82873
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WriteDeltaDelegate_BeginInvoke_mD8D53E908C5DFB3AD8CAC02BC6B02AD3548843D0_gshared (WriteDeltaDelegate_tE5FD16D805C72D2EE27208BA463BC7D2BA923D85* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, uint16_t* ___1_value, uint16_t* ___2_previousValue, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___3_callback, RuntimeObject* ___4_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var, &___0_writer);
	__d_args[1] = Box(il2cpp_defaults.uint16_class, &*___1_value);
	__d_args[2] = Box(il2cpp_defaults.uint16_class, &*___2_previousValue);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___3_callback, (RuntimeObject*)___4_object);
}
// Method Definition Index: 82874
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDeltaDelegate_EndInvoke_mCB22A81ED40E30155D6FB92454BD3219FD3E6A0F_gshared (WriteDeltaDelegate_tE5FD16D805C72D2EE27208BA463BC7D2BA923D85* __this, uint16_t* ___0_value, uint16_t* ___1_previousValue, RuntimeObject* ___2_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___2_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void WriteDeltaDelegate_Invoke_mB962CD74146B66CA843C58DBB191039AF2022F66_Multicast(WriteDeltaDelegate_tDE9A2D16AFAF9E62FDA443573CDEB4A4A8114D8D* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, uint16_t* ___1_value, uint16_t* ___2_previousValue, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		WriteDeltaDelegate_tDE9A2D16AFAF9E62FDA443573CDEB4A4A8114D8D* currentDelegate = reinterpret_cast<WriteDeltaDelegate_tDE9A2D16AFAF9E62FDA443573CDEB4A4A8114D8D*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, uint16_t*, uint16_t*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_writer, ___1_value, ___2_previousValue, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void WriteDeltaDelegate_Invoke_mB962CD74146B66CA843C58DBB191039AF2022F66_OpenInst(WriteDeltaDelegate_tDE9A2D16AFAF9E62FDA443573CDEB4A4A8114D8D* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, uint16_t* ___1_value, uint16_t* ___2_previousValue, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, uint16_t*, uint16_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_writer, ___1_value, ___2_previousValue, method);
}
void WriteDeltaDelegate_Invoke_mB962CD74146B66CA843C58DBB191039AF2022F66_OpenStatic(WriteDeltaDelegate_tDE9A2D16AFAF9E62FDA443573CDEB4A4A8114D8D* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, uint16_t* ___1_value, uint16_t* ___2_previousValue, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, uint16_t*, uint16_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_writer, ___1_value, ___2_previousValue, method);
}
// Method Definition Index: 82871
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDeltaDelegate__ctor_m4ACE13D1E7AD782169BBC924EEA350FE7678F87F_gshared (WriteDeltaDelegate_tDE9A2D16AFAF9E62FDA443573CDEB4A4A8114D8D* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 3;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&WriteDeltaDelegate_Invoke_mB962CD74146B66CA843C58DBB191039AF2022F66_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl = __this->___method_ptr;
		__this->___method_code = (intptr_t)__this->___m_target;
	}
	__this->___extra_arg = (intptr_t)&WriteDeltaDelegate_Invoke_mB962CD74146B66CA843C58DBB191039AF2022F66_Multicast;
}
// Method Definition Index: 82872
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDeltaDelegate_Invoke_mB962CD74146B66CA843C58DBB191039AF2022F66_gshared (WriteDeltaDelegate_tDE9A2D16AFAF9E62FDA443573CDEB4A4A8114D8D* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, uint16_t* ___1_value, uint16_t* ___2_previousValue, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, uint16_t*, uint16_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_writer, ___1_value, ___2_previousValue, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 82873
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WriteDeltaDelegate_BeginInvoke_m08725771136D4D4080483D9C637DCC81A029A804_gshared (WriteDeltaDelegate_tDE9A2D16AFAF9E62FDA443573CDEB4A4A8114D8D* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, uint16_t* ___1_value, uint16_t* ___2_previousValue, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___3_callback, RuntimeObject* ___4_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16Enum_t481D129F5FAE551E8684190D640F0FAEFB237CF8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var, &___0_writer);
	__d_args[1] = Box(UInt16Enum_t481D129F5FAE551E8684190D640F0FAEFB237CF8_il2cpp_TypeInfo_var, &*___1_value);
	__d_args[2] = Box(UInt16Enum_t481D129F5FAE551E8684190D640F0FAEFB237CF8_il2cpp_TypeInfo_var, &*___2_previousValue);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___3_callback, (RuntimeObject*)___4_object);
}
// Method Definition Index: 82874
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDeltaDelegate_EndInvoke_mF456D09798C155B5BE6F95A549181B282C4EF85B_gshared (WriteDeltaDelegate_tDE9A2D16AFAF9E62FDA443573CDEB4A4A8114D8D* __this, uint16_t* ___0_value, uint16_t* ___1_previousValue, RuntimeObject* ___2_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___2_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void WriteDeltaDelegate_Invoke_m7DA6776201A4CEB37699A31681787F7D471B6D1B_Multicast(WriteDeltaDelegate_tC67F55C5F48816BFF448F048A5EDB1F44E721270* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, uint32_t* ___1_value, uint32_t* ___2_previousValue, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		WriteDeltaDelegate_tC67F55C5F48816BFF448F048A5EDB1F44E721270* currentDelegate = reinterpret_cast<WriteDeltaDelegate_tC67F55C5F48816BFF448F048A5EDB1F44E721270*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, uint32_t*, uint32_t*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_writer, ___1_value, ___2_previousValue, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void WriteDeltaDelegate_Invoke_m7DA6776201A4CEB37699A31681787F7D471B6D1B_OpenInst(WriteDeltaDelegate_tC67F55C5F48816BFF448F048A5EDB1F44E721270* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, uint32_t* ___1_value, uint32_t* ___2_previousValue, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, uint32_t*, uint32_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_writer, ___1_value, ___2_previousValue, method);
}
void WriteDeltaDelegate_Invoke_m7DA6776201A4CEB37699A31681787F7D471B6D1B_OpenStatic(WriteDeltaDelegate_tC67F55C5F48816BFF448F048A5EDB1F44E721270* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, uint32_t* ___1_value, uint32_t* ___2_previousValue, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, uint32_t*, uint32_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_writer, ___1_value, ___2_previousValue, method);
}
// Method Definition Index: 82871
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDeltaDelegate__ctor_m5B0AAFEACDBA62FA14CB44B959EA5E1873240AE6_gshared (WriteDeltaDelegate_tC67F55C5F48816BFF448F048A5EDB1F44E721270* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 3;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&WriteDeltaDelegate_Invoke_m7DA6776201A4CEB37699A31681787F7D471B6D1B_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl = __this->___method_ptr;
		__this->___method_code = (intptr_t)__this->___m_target;
	}
	__this->___extra_arg = (intptr_t)&WriteDeltaDelegate_Invoke_m7DA6776201A4CEB37699A31681787F7D471B6D1B_Multicast;
}
// Method Definition Index: 82872
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDeltaDelegate_Invoke_m7DA6776201A4CEB37699A31681787F7D471B6D1B_gshared (WriteDeltaDelegate_tC67F55C5F48816BFF448F048A5EDB1F44E721270* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, uint32_t* ___1_value, uint32_t* ___2_previousValue, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, uint32_t*, uint32_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_writer, ___1_value, ___2_previousValue, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 82873
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WriteDeltaDelegate_BeginInvoke_m5DC5788EB5EC5D15E487537A21464DEDD1D76F2F_gshared (WriteDeltaDelegate_tC67F55C5F48816BFF448F048A5EDB1F44E721270* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, uint32_t* ___1_value, uint32_t* ___2_previousValue, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___3_callback, RuntimeObject* ___4_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var, &___0_writer);
	__d_args[1] = Box(il2cpp_defaults.uint32_class, &*___1_value);
	__d_args[2] = Box(il2cpp_defaults.uint32_class, &*___2_previousValue);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___3_callback, (RuntimeObject*)___4_object);
}
// Method Definition Index: 82874
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDeltaDelegate_EndInvoke_mE61547627C38598126782BCB48EC25006D521D6F_gshared (WriteDeltaDelegate_tC67F55C5F48816BFF448F048A5EDB1F44E721270* __this, uint32_t* ___0_value, uint32_t* ___1_previousValue, RuntimeObject* ___2_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___2_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void WriteDeltaDelegate_Invoke_mE5BC9E713CBD9AA99366FA2810560634A6CECF8B_Multicast(WriteDeltaDelegate_t012D58DA12096CDE5B3F8723C0BC5535F02F8A06* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, uint64_t* ___1_value, uint64_t* ___2_previousValue, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		WriteDeltaDelegate_t012D58DA12096CDE5B3F8723C0BC5535F02F8A06* currentDelegate = reinterpret_cast<WriteDeltaDelegate_t012D58DA12096CDE5B3F8723C0BC5535F02F8A06*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, uint64_t*, uint64_t*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_writer, ___1_value, ___2_previousValue, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void WriteDeltaDelegate_Invoke_mE5BC9E713CBD9AA99366FA2810560634A6CECF8B_OpenInst(WriteDeltaDelegate_t012D58DA12096CDE5B3F8723C0BC5535F02F8A06* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, uint64_t* ___1_value, uint64_t* ___2_previousValue, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, uint64_t*, uint64_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_writer, ___1_value, ___2_previousValue, method);
}
void WriteDeltaDelegate_Invoke_mE5BC9E713CBD9AA99366FA2810560634A6CECF8B_OpenStatic(WriteDeltaDelegate_t012D58DA12096CDE5B3F8723C0BC5535F02F8A06* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, uint64_t* ___1_value, uint64_t* ___2_previousValue, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, uint64_t*, uint64_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_writer, ___1_value, ___2_previousValue, method);
}
// Method Definition Index: 82871
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDeltaDelegate__ctor_m47FD11D0092B1D4EECAB214249D91ED577AEE920_gshared (WriteDeltaDelegate_t012D58DA12096CDE5B3F8723C0BC5535F02F8A06* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 3;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&WriteDeltaDelegate_Invoke_mE5BC9E713CBD9AA99366FA2810560634A6CECF8B_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl = __this->___method_ptr;
		__this->___method_code = (intptr_t)__this->___m_target;
	}
	__this->___extra_arg = (intptr_t)&WriteDeltaDelegate_Invoke_mE5BC9E713CBD9AA99366FA2810560634A6CECF8B_Multicast;
}
// Method Definition Index: 82872
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDeltaDelegate_Invoke_mE5BC9E713CBD9AA99366FA2810560634A6CECF8B_gshared (WriteDeltaDelegate_t012D58DA12096CDE5B3F8723C0BC5535F02F8A06* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, uint64_t* ___1_value, uint64_t* ___2_previousValue, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, uint64_t*, uint64_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_writer, ___1_value, ___2_previousValue, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 82873
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WriteDeltaDelegate_BeginInvoke_m0548E34144BDCE3A0D52465F6FE450EFACCB6A71_gshared (WriteDeltaDelegate_t012D58DA12096CDE5B3F8723C0BC5535F02F8A06* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, uint64_t* ___1_value, uint64_t* ___2_previousValue, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___3_callback, RuntimeObject* ___4_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var, &___0_writer);
	__d_args[1] = Box(il2cpp_defaults.uint64_class, &*___1_value);
	__d_args[2] = Box(il2cpp_defaults.uint64_class, &*___2_previousValue);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___3_callback, (RuntimeObject*)___4_object);
}
// Method Definition Index: 82874
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDeltaDelegate_EndInvoke_m1B1C373F9093CEDF0FF380CB412C325325102890_gshared (WriteDeltaDelegate_t012D58DA12096CDE5B3F8723C0BC5535F02F8A06* __this, uint64_t* ___0_value, uint64_t* ___1_previousValue, RuntimeObject* ___2_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___2_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void WriteDeltaDelegate_Invoke_mA9BE3B5520B6D2330428DA0B20226196575445A0_Multicast(WriteDeltaDelegate_t5037628E7793813F5FC9D57D241C463644491024* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, UserPlayerData_tB7F0676C35AAB963313E190E7D7B97BDE5AA22D6* ___1_value, UserPlayerData_tB7F0676C35AAB963313E190E7D7B97BDE5AA22D6* ___2_previousValue, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		WriteDeltaDelegate_t5037628E7793813F5FC9D57D241C463644491024* currentDelegate = reinterpret_cast<WriteDeltaDelegate_t5037628E7793813F5FC9D57D241C463644491024*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, UserPlayerData_tB7F0676C35AAB963313E190E7D7B97BDE5AA22D6*, UserPlayerData_tB7F0676C35AAB963313E190E7D7B97BDE5AA22D6*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_writer, ___1_value, ___2_previousValue, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void WriteDeltaDelegate_Invoke_mA9BE3B5520B6D2330428DA0B20226196575445A0_OpenInst(WriteDeltaDelegate_t5037628E7793813F5FC9D57D241C463644491024* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, UserPlayerData_tB7F0676C35AAB963313E190E7D7B97BDE5AA22D6* ___1_value, UserPlayerData_tB7F0676C35AAB963313E190E7D7B97BDE5AA22D6* ___2_previousValue, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, UserPlayerData_tB7F0676C35AAB963313E190E7D7B97BDE5AA22D6*, UserPlayerData_tB7F0676C35AAB963313E190E7D7B97BDE5AA22D6*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_writer, ___1_value, ___2_previousValue, method);
}
void WriteDeltaDelegate_Invoke_mA9BE3B5520B6D2330428DA0B20226196575445A0_OpenStatic(WriteDeltaDelegate_t5037628E7793813F5FC9D57D241C463644491024* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, UserPlayerData_tB7F0676C35AAB963313E190E7D7B97BDE5AA22D6* ___1_value, UserPlayerData_tB7F0676C35AAB963313E190E7D7B97BDE5AA22D6* ___2_previousValue, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, UserPlayerData_tB7F0676C35AAB963313E190E7D7B97BDE5AA22D6*, UserPlayerData_tB7F0676C35AAB963313E190E7D7B97BDE5AA22D6*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_writer, ___1_value, ___2_previousValue, method);
}
// Method Definition Index: 82871
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDeltaDelegate__ctor_m5BF9BD7B9BA7580E84308FAC3A8D8EDB1FADBFD7_gshared (WriteDeltaDelegate_t5037628E7793813F5FC9D57D241C463644491024* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 3;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&WriteDeltaDelegate_Invoke_mA9BE3B5520B6D2330428DA0B20226196575445A0_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl = __this->___method_ptr;
		__this->___method_code = (intptr_t)__this->___m_target;
	}
	__this->___extra_arg = (intptr_t)&WriteDeltaDelegate_Invoke_mA9BE3B5520B6D2330428DA0B20226196575445A0_Multicast;
}
// Method Definition Index: 82872
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDeltaDelegate_Invoke_mA9BE3B5520B6D2330428DA0B20226196575445A0_gshared (WriteDeltaDelegate_t5037628E7793813F5FC9D57D241C463644491024* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, UserPlayerData_tB7F0676C35AAB963313E190E7D7B97BDE5AA22D6* ___1_value, UserPlayerData_tB7F0676C35AAB963313E190E7D7B97BDE5AA22D6* ___2_previousValue, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, UserPlayerData_tB7F0676C35AAB963313E190E7D7B97BDE5AA22D6*, UserPlayerData_tB7F0676C35AAB963313E190E7D7B97BDE5AA22D6*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_writer, ___1_value, ___2_previousValue, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 82873
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WriteDeltaDelegate_BeginInvoke_m219259C46BCB309735D3D862F58E237B53A7A15E_gshared (WriteDeltaDelegate_t5037628E7793813F5FC9D57D241C463644491024* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, UserPlayerData_tB7F0676C35AAB963313E190E7D7B97BDE5AA22D6* ___1_value, UserPlayerData_tB7F0676C35AAB963313E190E7D7B97BDE5AA22D6* ___2_previousValue, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___3_callback, RuntimeObject* ___4_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UserPlayerData_tB7F0676C35AAB963313E190E7D7B97BDE5AA22D6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var, &___0_writer);
	__d_args[1] = Box(UserPlayerData_tB7F0676C35AAB963313E190E7D7B97BDE5AA22D6_il2cpp_TypeInfo_var, &*___1_value);
	__d_args[2] = Box(UserPlayerData_tB7F0676C35AAB963313E190E7D7B97BDE5AA22D6_il2cpp_TypeInfo_var, &*___2_previousValue);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___3_callback, (RuntimeObject*)___4_object);
}
// Method Definition Index: 82874
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDeltaDelegate_EndInvoke_mA1A445D97B2649CBFC50B2F5B53BF5346650B407_gshared (WriteDeltaDelegate_t5037628E7793813F5FC9D57D241C463644491024* __this, UserPlayerData_tB7F0676C35AAB963313E190E7D7B97BDE5AA22D6* ___0_value, UserPlayerData_tB7F0676C35AAB963313E190E7D7B97BDE5AA22D6* ___1_previousValue, RuntimeObject* ___2_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___2_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void WriteDeltaDelegate_Invoke_mFA7136D9BC813069E82A80ADF84B01189F58B197_Multicast(WriteDeltaDelegate_tE738A850E7CCB35359470E6C7128BE79BD99DA66* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, Il2CppFullySharedGenericAny* ___1_value, Il2CppFullySharedGenericAny* ___2_previousValue, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		WriteDeltaDelegate_tE738A850E7CCB35359470E6C7128BE79BD99DA66* currentDelegate = reinterpret_cast<WriteDeltaDelegate_tE738A850E7CCB35359470E6C7128BE79BD99DA66*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_writer, ___1_value, ___2_previousValue, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void WriteDeltaDelegate_Invoke_mFA7136D9BC813069E82A80ADF84B01189F58B197_OpenInst(WriteDeltaDelegate_tE738A850E7CCB35359470E6C7128BE79BD99DA66* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, Il2CppFullySharedGenericAny* ___1_value, Il2CppFullySharedGenericAny* ___2_previousValue, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_writer, ___1_value, ___2_previousValue, method);
}
void WriteDeltaDelegate_Invoke_mFA7136D9BC813069E82A80ADF84B01189F58B197_OpenStatic(WriteDeltaDelegate_tE738A850E7CCB35359470E6C7128BE79BD99DA66* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, Il2CppFullySharedGenericAny* ___1_value, Il2CppFullySharedGenericAny* ___2_previousValue, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_writer, ___1_value, ___2_previousValue, method);
}
// Method Definition Index: 82871
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDeltaDelegate__ctor_mB63DA15740C6A50FCD349E1AB4B51CD270AEAC97_gshared (WriteDeltaDelegate_tE738A850E7CCB35359470E6C7128BE79BD99DA66* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 3;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&WriteDeltaDelegate_Invoke_mFA7136D9BC813069E82A80ADF84B01189F58B197_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl = __this->___method_ptr;
		__this->___method_code = (intptr_t)__this->___m_target;
	}
	__this->___extra_arg = (intptr_t)&WriteDeltaDelegate_Invoke_mFA7136D9BC813069E82A80ADF84B01189F58B197_Multicast;
}
// Method Definition Index: 82872
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDeltaDelegate_Invoke_mFA7136D9BC813069E82A80ADF84B01189F58B197_gshared (WriteDeltaDelegate_tE738A850E7CCB35359470E6C7128BE79BD99DA66* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, Il2CppFullySharedGenericAny* ___1_value, Il2CppFullySharedGenericAny* ___2_previousValue, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_writer, ___1_value, ___2_previousValue, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 82873
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WriteDeltaDelegate_BeginInvoke_m913B425514898F953CF4B4C67A8A04B82E28E371_gshared (WriteDeltaDelegate_tE738A850E7CCB35359470E6C7128BE79BD99DA66* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, Il2CppFullySharedGenericAny* ___1_value, Il2CppFullySharedGenericAny* ___2_previousValue, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___3_callback, RuntimeObject* ___4_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var, &___0_writer);
	RuntimeClass* ___1_value_klass = il2cpp_codegen_class_from_type(il2cpp_codegen_method_parameter_type((MethodInfo*)__this->___method, 1));
	__d_args[1] = (il2cpp_codegen_class_is_value_type(___1_value_klass) ? Box(___1_value_klass, ___1_value) : (void*)*___1_value);
	RuntimeClass* ___2_previousValue_klass = il2cpp_codegen_class_from_type(il2cpp_codegen_method_parameter_type((MethodInfo*)__this->___method, 2));
	__d_args[2] = (il2cpp_codegen_class_is_value_type(___2_previousValue_klass) ? Box(___2_previousValue_klass, ___2_previousValue) : (void*)*___2_previousValue);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___3_callback, (RuntimeObject*)___4_object);
}
// Method Definition Index: 82874
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDeltaDelegate_EndInvoke_m86232B843D7BF4ECA3584FA5B834F0A1D004F781_gshared (WriteDeltaDelegate_tE738A850E7CCB35359470E6C7128BE79BD99DA66* __this, Il2CppFullySharedGenericAny* ___0_value, Il2CppFullySharedGenericAny* ___1_previousValue, RuntimeObject* ___2_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___2_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void WriteDeltaDelegate_Invoke_mBDFC0186478B6C9363ED1E4A8C9206A5F728F56A_Multicast(WriteDeltaDelegate_tC9B3AA2B1E5528B1D02722D84BC3AB2980D81902* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, PlayerStackData_tE3EBF2B06FF3A7096CBE57912B5D47E76A78F529* ___1_value, PlayerStackData_tE3EBF2B06FF3A7096CBE57912B5D47E76A78F529* ___2_previousValue, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		WriteDeltaDelegate_tC9B3AA2B1E5528B1D02722D84BC3AB2980D81902* currentDelegate = reinterpret_cast<WriteDeltaDelegate_tC9B3AA2B1E5528B1D02722D84BC3AB2980D81902*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, PlayerStackData_tE3EBF2B06FF3A7096CBE57912B5D47E76A78F529*, PlayerStackData_tE3EBF2B06FF3A7096CBE57912B5D47E76A78F529*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_writer, ___1_value, ___2_previousValue, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void WriteDeltaDelegate_Invoke_mBDFC0186478B6C9363ED1E4A8C9206A5F728F56A_OpenInst(WriteDeltaDelegate_tC9B3AA2B1E5528B1D02722D84BC3AB2980D81902* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, PlayerStackData_tE3EBF2B06FF3A7096CBE57912B5D47E76A78F529* ___1_value, PlayerStackData_tE3EBF2B06FF3A7096CBE57912B5D47E76A78F529* ___2_previousValue, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, PlayerStackData_tE3EBF2B06FF3A7096CBE57912B5D47E76A78F529*, PlayerStackData_tE3EBF2B06FF3A7096CBE57912B5D47E76A78F529*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_writer, ___1_value, ___2_previousValue, method);
}
void WriteDeltaDelegate_Invoke_mBDFC0186478B6C9363ED1E4A8C9206A5F728F56A_OpenStatic(WriteDeltaDelegate_tC9B3AA2B1E5528B1D02722D84BC3AB2980D81902* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, PlayerStackData_tE3EBF2B06FF3A7096CBE57912B5D47E76A78F529* ___1_value, PlayerStackData_tE3EBF2B06FF3A7096CBE57912B5D47E76A78F529* ___2_previousValue, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, PlayerStackData_tE3EBF2B06FF3A7096CBE57912B5D47E76A78F529*, PlayerStackData_tE3EBF2B06FF3A7096CBE57912B5D47E76A78F529*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_writer, ___1_value, ___2_previousValue, method);
}
// Method Definition Index: 82871
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDeltaDelegate__ctor_m337C7FEAAF90892241C1C2C28747DE2F1D5B7FDB_gshared (WriteDeltaDelegate_tC9B3AA2B1E5528B1D02722D84BC3AB2980D81902* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 3;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&WriteDeltaDelegate_Invoke_mBDFC0186478B6C9363ED1E4A8C9206A5F728F56A_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl = __this->___method_ptr;
		__this->___method_code = (intptr_t)__this->___m_target;
	}
	__this->___extra_arg = (intptr_t)&WriteDeltaDelegate_Invoke_mBDFC0186478B6C9363ED1E4A8C9206A5F728F56A_Multicast;
}
// Method Definition Index: 82872
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDeltaDelegate_Invoke_mBDFC0186478B6C9363ED1E4A8C9206A5F728F56A_gshared (WriteDeltaDelegate_tC9B3AA2B1E5528B1D02722D84BC3AB2980D81902* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, PlayerStackData_tE3EBF2B06FF3A7096CBE57912B5D47E76A78F529* ___1_value, PlayerStackData_tE3EBF2B06FF3A7096CBE57912B5D47E76A78F529* ___2_previousValue, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, PlayerStackData_tE3EBF2B06FF3A7096CBE57912B5D47E76A78F529*, PlayerStackData_tE3EBF2B06FF3A7096CBE57912B5D47E76A78F529*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_writer, ___1_value, ___2_previousValue, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 82873
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WriteDeltaDelegate_BeginInvoke_m76E83A93A31D9FF385ADF90FD096D65B155A4D6F_gshared (WriteDeltaDelegate_tC9B3AA2B1E5528B1D02722D84BC3AB2980D81902* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, PlayerStackData_tE3EBF2B06FF3A7096CBE57912B5D47E76A78F529* ___1_value, PlayerStackData_tE3EBF2B06FF3A7096CBE57912B5D47E76A78F529* ___2_previousValue, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___3_callback, RuntimeObject* ___4_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerStackData_tE3EBF2B06FF3A7096CBE57912B5D47E76A78F529_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var, &___0_writer);
	__d_args[1] = Box(PlayerStackData_tE3EBF2B06FF3A7096CBE57912B5D47E76A78F529_il2cpp_TypeInfo_var, &*___1_value);
	__d_args[2] = Box(PlayerStackData_tE3EBF2B06FF3A7096CBE57912B5D47E76A78F529_il2cpp_TypeInfo_var, &*___2_previousValue);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___3_callback, (RuntimeObject*)___4_object);
}
// Method Definition Index: 82874
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDeltaDelegate_EndInvoke_mF34A24F2175BAE42EFCAC5EF1F683167A69943A7_gshared (WriteDeltaDelegate_tC9B3AA2B1E5528B1D02722D84BC3AB2980D81902* __this, PlayerStackData_tE3EBF2B06FF3A7096CBE57912B5D47E76A78F529* ___0_value, PlayerStackData_tE3EBF2B06FF3A7096CBE57912B5D47E76A78F529* ___1_previousValue, RuntimeObject* ___2_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___2_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void WriteDeltaDelegate_Invoke_m0F6B705ACF59AE723F86F54EF49D69805EE73EE2_Multicast(WriteDeltaDelegate_tAE91576E843E7D3658DD43AAE4FA0208727DBDF7* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, NetworkTransformState_tCCC77820160AFE28825DDD9C3F090B523CA8F5ED* ___1_value, NetworkTransformState_tCCC77820160AFE28825DDD9C3F090B523CA8F5ED* ___2_previousValue, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		WriteDeltaDelegate_tAE91576E843E7D3658DD43AAE4FA0208727DBDF7* currentDelegate = reinterpret_cast<WriteDeltaDelegate_tAE91576E843E7D3658DD43AAE4FA0208727DBDF7*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, NetworkTransformState_tCCC77820160AFE28825DDD9C3F090B523CA8F5ED*, NetworkTransformState_tCCC77820160AFE28825DDD9C3F090B523CA8F5ED*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_writer, ___1_value, ___2_previousValue, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void WriteDeltaDelegate_Invoke_m0F6B705ACF59AE723F86F54EF49D69805EE73EE2_OpenInst(WriteDeltaDelegate_tAE91576E843E7D3658DD43AAE4FA0208727DBDF7* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, NetworkTransformState_tCCC77820160AFE28825DDD9C3F090B523CA8F5ED* ___1_value, NetworkTransformState_tCCC77820160AFE28825DDD9C3F090B523CA8F5ED* ___2_previousValue, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, NetworkTransformState_tCCC77820160AFE28825DDD9C3F090B523CA8F5ED*, NetworkTransformState_tCCC77820160AFE28825DDD9C3F090B523CA8F5ED*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_writer, ___1_value, ___2_previousValue, method);
}
void WriteDeltaDelegate_Invoke_m0F6B705ACF59AE723F86F54EF49D69805EE73EE2_OpenStatic(WriteDeltaDelegate_tAE91576E843E7D3658DD43AAE4FA0208727DBDF7* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, NetworkTransformState_tCCC77820160AFE28825DDD9C3F090B523CA8F5ED* ___1_value, NetworkTransformState_tCCC77820160AFE28825DDD9C3F090B523CA8F5ED* ___2_previousValue, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, NetworkTransformState_tCCC77820160AFE28825DDD9C3F090B523CA8F5ED*, NetworkTransformState_tCCC77820160AFE28825DDD9C3F090B523CA8F5ED*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_writer, ___1_value, ___2_previousValue, method);
}
// Method Definition Index: 82871
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDeltaDelegate__ctor_mFF825572C406D8C773EA30EF0C23082CB48782CD_gshared (WriteDeltaDelegate_tAE91576E843E7D3658DD43AAE4FA0208727DBDF7* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 3;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&WriteDeltaDelegate_Invoke_m0F6B705ACF59AE723F86F54EF49D69805EE73EE2_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl = __this->___method_ptr;
		__this->___method_code = (intptr_t)__this->___m_target;
	}
	__this->___extra_arg = (intptr_t)&WriteDeltaDelegate_Invoke_m0F6B705ACF59AE723F86F54EF49D69805EE73EE2_Multicast;
}
// Method Definition Index: 82872
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDeltaDelegate_Invoke_m0F6B705ACF59AE723F86F54EF49D69805EE73EE2_gshared (WriteDeltaDelegate_tAE91576E843E7D3658DD43AAE4FA0208727DBDF7* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, NetworkTransformState_tCCC77820160AFE28825DDD9C3F090B523CA8F5ED* ___1_value, NetworkTransformState_tCCC77820160AFE28825DDD9C3F090B523CA8F5ED* ___2_previousValue, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, NetworkTransformState_tCCC77820160AFE28825DDD9C3F090B523CA8F5ED*, NetworkTransformState_tCCC77820160AFE28825DDD9C3F090B523CA8F5ED*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_writer, ___1_value, ___2_previousValue, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 82873
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WriteDeltaDelegate_BeginInvoke_m86EA4BF241F04ADDB7E3165725EA1B7545C66E03_gshared (WriteDeltaDelegate_tAE91576E843E7D3658DD43AAE4FA0208727DBDF7* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, NetworkTransformState_tCCC77820160AFE28825DDD9C3F090B523CA8F5ED* ___1_value, NetworkTransformState_tCCC77820160AFE28825DDD9C3F090B523CA8F5ED* ___2_previousValue, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___3_callback, RuntimeObject* ___4_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkTransformState_tCCC77820160AFE28825DDD9C3F090B523CA8F5ED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var, &___0_writer);
	__d_args[1] = Box(NetworkTransformState_tCCC77820160AFE28825DDD9C3F090B523CA8F5ED_il2cpp_TypeInfo_var, &*___1_value);
	__d_args[2] = Box(NetworkTransformState_tCCC77820160AFE28825DDD9C3F090B523CA8F5ED_il2cpp_TypeInfo_var, &*___2_previousValue);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___3_callback, (RuntimeObject*)___4_object);
}
// Method Definition Index: 82874
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDeltaDelegate_EndInvoke_m5D4F4D1B3C1600F147443DFC17D001063F9F1394_gshared (WriteDeltaDelegate_tAE91576E843E7D3658DD43AAE4FA0208727DBDF7* __this, NetworkTransformState_tCCC77820160AFE28825DDD9C3F090B523CA8F5ED* ___0_value, NetworkTransformState_tCCC77820160AFE28825DDD9C3F090B523CA8F5ED* ___1_previousValue, RuntimeObject* ___2_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___2_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void WriteValueDelegate_Invoke_mCFB82C9F084EF00098599077593063E469726FEA_Multicast(WriteValueDelegate_t50D95E61CEBE7B989D9E6B9E52A924880A040DDF* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B* ___1_value, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		WriteValueDelegate_t50D95E61CEBE7B989D9E6B9E52A924880A040DDF* currentDelegate = reinterpret_cast<WriteValueDelegate_t50D95E61CEBE7B989D9E6B9E52A924880A040DDF*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_writer, ___1_value, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void WriteValueDelegate_Invoke_mCFB82C9F084EF00098599077593063E469726FEA_OpenInst(WriteValueDelegate_t50D95E61CEBE7B989D9E6B9E52A924880A040DDF* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B* ___1_value, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_writer, ___1_value, method);
}
void WriteValueDelegate_Invoke_mCFB82C9F084EF00098599077593063E469726FEA_OpenStatic(WriteValueDelegate_t50D95E61CEBE7B989D9E6B9E52A924880A040DDF* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B* ___1_value, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_writer, ___1_value, method);
}
// Method Definition Index: 82867
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteValueDelegate__ctor_mA857ABF12370E7A5F5628D202EBE475951AF3376_gshared (WriteValueDelegate_t50D95E61CEBE7B989D9E6B9E52A924880A040DDF* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&WriteValueDelegate_Invoke_mCFB82C9F084EF00098599077593063E469726FEA_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl = __this->___method_ptr;
		__this->___method_code = (intptr_t)__this->___m_target;
	}
	__this->___extra_arg = (intptr_t)&WriteValueDelegate_Invoke_mCFB82C9F084EF00098599077593063E469726FEA_Multicast;
}
// Method Definition Index: 82868
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteValueDelegate_Invoke_mCFB82C9F084EF00098599077593063E469726FEA_gshared (WriteValueDelegate_t50D95E61CEBE7B989D9E6B9E52A924880A040DDF* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B* ___1_value, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_writer, ___1_value, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 82869
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WriteValueDelegate_BeginInvoke_mED59987F9302CC093713A0A338776EA07A16CC89_gshared (WriteValueDelegate_t50D95E61CEBE7B989D9E6B9E52A924880A040DDF* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B* ___1_value, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___2_callback, RuntimeObject* ___3_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var, &___0_writer);
	__d_args[1] = Box(NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B_il2cpp_TypeInfo_var, &*___1_value);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___2_callback, (RuntimeObject*)___3_object);
}
// Method Definition Index: 82870
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteValueDelegate_EndInvoke_mE20AACBBB23A5D93FDF32D1AD89221C14C30F4EC_gshared (WriteValueDelegate_t50D95E61CEBE7B989D9E6B9E52A924880A040DDF* __this, NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B* ___0_value, RuntimeObject* ___1_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___1_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void WriteValueDelegate_Invoke_m10AA46444E4B287E2FF819C4A96D81EF9B2C09E0_Multicast(WriteValueDelegate_tAB5E09C0958FE12D6017BA124FB35AEC2A0F69EE* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, bool* ___1_value, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		WriteValueDelegate_tAB5E09C0958FE12D6017BA124FB35AEC2A0F69EE* currentDelegate = reinterpret_cast<WriteValueDelegate_tAB5E09C0958FE12D6017BA124FB35AEC2A0F69EE*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, bool*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_writer, ___1_value, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void WriteValueDelegate_Invoke_m10AA46444E4B287E2FF819C4A96D81EF9B2C09E0_OpenInst(WriteValueDelegate_tAB5E09C0958FE12D6017BA124FB35AEC2A0F69EE* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, bool* ___1_value, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, bool*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_writer, ___1_value, method);
}
void WriteValueDelegate_Invoke_m10AA46444E4B287E2FF819C4A96D81EF9B2C09E0_OpenStatic(WriteValueDelegate_tAB5E09C0958FE12D6017BA124FB35AEC2A0F69EE* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, bool* ___1_value, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, bool*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_writer, ___1_value, method);
}
// Method Definition Index: 82867
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteValueDelegate__ctor_mB7690FA3A59AC6F4CEFE5E8BF8E71425DC56A063_gshared (WriteValueDelegate_tAB5E09C0958FE12D6017BA124FB35AEC2A0F69EE* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&WriteValueDelegate_Invoke_m10AA46444E4B287E2FF819C4A96D81EF9B2C09E0_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl = __this->___method_ptr;
		__this->___method_code = (intptr_t)__this->___m_target;
	}
	__this->___extra_arg = (intptr_t)&WriteValueDelegate_Invoke_m10AA46444E4B287E2FF819C4A96D81EF9B2C09E0_Multicast;
}
// Method Definition Index: 82868
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteValueDelegate_Invoke_m10AA46444E4B287E2FF819C4A96D81EF9B2C09E0_gshared (WriteValueDelegate_tAB5E09C0958FE12D6017BA124FB35AEC2A0F69EE* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, bool* ___1_value, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, bool*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_writer, ___1_value, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 82869
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WriteValueDelegate_BeginInvoke_m2CF04803A525AC0663358966E47B37086056B577_gshared (WriteValueDelegate_tAB5E09C0958FE12D6017BA124FB35AEC2A0F69EE* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, bool* ___1_value, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___2_callback, RuntimeObject* ___3_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var, &___0_writer);
	__d_args[1] = Box(il2cpp_defaults.boolean_class, &*___1_value);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___2_callback, (RuntimeObject*)___3_object);
}
// Method Definition Index: 82870
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteValueDelegate_EndInvoke_m85776D7D8246B2D3B79BEA08A6402B1278F6C88D_gshared (WriteValueDelegate_tAB5E09C0958FE12D6017BA124FB35AEC2A0F69EE* __this, bool* ___0_value, RuntimeObject* ___1_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___1_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void WriteValueDelegate_Invoke_m374516B4F7D90D800077BAA9BCD4B4961BE28275_Multicast(WriteValueDelegate_tC60A572918EC0CF835899702C221082E927F9BF1* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, uint8_t* ___1_value, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		WriteValueDelegate_tC60A572918EC0CF835899702C221082E927F9BF1* currentDelegate = reinterpret_cast<WriteValueDelegate_tC60A572918EC0CF835899702C221082E927F9BF1*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, uint8_t*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_writer, ___1_value, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void WriteValueDelegate_Invoke_m374516B4F7D90D800077BAA9BCD4B4961BE28275_OpenInst(WriteValueDelegate_tC60A572918EC0CF835899702C221082E927F9BF1* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, uint8_t* ___1_value, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, uint8_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_writer, ___1_value, method);
}
void WriteValueDelegate_Invoke_m374516B4F7D90D800077BAA9BCD4B4961BE28275_OpenStatic(WriteValueDelegate_tC60A572918EC0CF835899702C221082E927F9BF1* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, uint8_t* ___1_value, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, uint8_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_writer, ___1_value, method);
}
// Method Definition Index: 82867
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteValueDelegate__ctor_m34BB7178458A353168168D16230128AE499A4FD9_gshared (WriteValueDelegate_tC60A572918EC0CF835899702C221082E927F9BF1* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&WriteValueDelegate_Invoke_m374516B4F7D90D800077BAA9BCD4B4961BE28275_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl = __this->___method_ptr;
		__this->___method_code = (intptr_t)__this->___m_target;
	}
	__this->___extra_arg = (intptr_t)&WriteValueDelegate_Invoke_m374516B4F7D90D800077BAA9BCD4B4961BE28275_Multicast;
}
// Method Definition Index: 82868
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteValueDelegate_Invoke_m374516B4F7D90D800077BAA9BCD4B4961BE28275_gshared (WriteValueDelegate_tC60A572918EC0CF835899702C221082E927F9BF1* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, uint8_t* ___1_value, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, uint8_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_writer, ___1_value, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 82869
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WriteValueDelegate_BeginInvoke_mE3B002F412FCEDC7644EB4ADEF74A97B73478CF9_gshared (WriteValueDelegate_tC60A572918EC0CF835899702C221082E927F9BF1* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, uint8_t* ___1_value, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___2_callback, RuntimeObject* ___3_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var, &___0_writer);
	__d_args[1] = Box(il2cpp_defaults.byte_class, &*___1_value);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___2_callback, (RuntimeObject*)___3_object);
}
// Method Definition Index: 82870
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteValueDelegate_EndInvoke_m6412FB1CC603D9B0F2D3FE7F12D45C91CCC049B0_gshared (WriteValueDelegate_tC60A572918EC0CF835899702C221082E927F9BF1* __this, uint8_t* ___0_value, RuntimeObject* ___1_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___1_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void WriteValueDelegate_Invoke_m00100AFE8F1ABC676CDACA8174F033CA298E047A_Multicast(WriteValueDelegate_t8B3C6943F86D34C7048257FCC996A5D82A04AFBF* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, uint8_t* ___1_value, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		WriteValueDelegate_t8B3C6943F86D34C7048257FCC996A5D82A04AFBF* currentDelegate = reinterpret_cast<WriteValueDelegate_t8B3C6943F86D34C7048257FCC996A5D82A04AFBF*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, uint8_t*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_writer, ___1_value, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void WriteValueDelegate_Invoke_m00100AFE8F1ABC676CDACA8174F033CA298E047A_OpenInst(WriteValueDelegate_t8B3C6943F86D34C7048257FCC996A5D82A04AFBF* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, uint8_t* ___1_value, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, uint8_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_writer, ___1_value, method);
}
void WriteValueDelegate_Invoke_m00100AFE8F1ABC676CDACA8174F033CA298E047A_OpenStatic(WriteValueDelegate_t8B3C6943F86D34C7048257FCC996A5D82A04AFBF* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, uint8_t* ___1_value, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, uint8_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_writer, ___1_value, method);
}
// Method Definition Index: 82867
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteValueDelegate__ctor_m50D025A39A192274BB230199694CB65FACD3F85A_gshared (WriteValueDelegate_t8B3C6943F86D34C7048257FCC996A5D82A04AFBF* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&WriteValueDelegate_Invoke_m00100AFE8F1ABC676CDACA8174F033CA298E047A_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl = __this->___method_ptr;
		__this->___method_code = (intptr_t)__this->___m_target;
	}
	__this->___extra_arg = (intptr_t)&WriteValueDelegate_Invoke_m00100AFE8F1ABC676CDACA8174F033CA298E047A_Multicast;
}
// Method Definition Index: 82868
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteValueDelegate_Invoke_m00100AFE8F1ABC676CDACA8174F033CA298E047A_gshared (WriteValueDelegate_t8B3C6943F86D34C7048257FCC996A5D82A04AFBF* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, uint8_t* ___1_value, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, uint8_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_writer, ___1_value, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 82869
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WriteValueDelegate_BeginInvoke_m06100610D4772B4AB6D1F80ED81130DED7A86E73_gshared (WriteValueDelegate_t8B3C6943F86D34C7048257FCC996A5D82A04AFBF* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, uint8_t* ___1_value, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___2_callback, RuntimeObject* ___3_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteEnum_t2A464EF5EC59CBA8ED5E194537D5832168B1A692_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var, &___0_writer);
	__d_args[1] = Box(ByteEnum_t2A464EF5EC59CBA8ED5E194537D5832168B1A692_il2cpp_TypeInfo_var, &*___1_value);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___2_callback, (RuntimeObject*)___3_object);
}
// Method Definition Index: 82870
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteValueDelegate_EndInvoke_mC4C70C948EBD046A574EC1A8883DADEB3ADDBEE9_gshared (WriteValueDelegate_t8B3C6943F86D34C7048257FCC996A5D82A04AFBF* __this, uint8_t* ___0_value, RuntimeObject* ___1_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___1_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void WriteValueDelegate_Invoke_mEB3B8C2B6B409EA5F2819E591D6F5F3F881DF8B9_Multicast(WriteValueDelegate_tDEBCD609141F0411B3AD9A0B37D83D2D21321B50* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, ChakraVeinInfo_tA9F7FEEA74A8F324BE4D4816F6DC8C8B79991357* ___1_value, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		WriteValueDelegate_tDEBCD609141F0411B3AD9A0B37D83D2D21321B50* currentDelegate = reinterpret_cast<WriteValueDelegate_tDEBCD609141F0411B3AD9A0B37D83D2D21321B50*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, ChakraVeinInfo_tA9F7FEEA74A8F324BE4D4816F6DC8C8B79991357*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_writer, ___1_value, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void WriteValueDelegate_Invoke_mEB3B8C2B6B409EA5F2819E591D6F5F3F881DF8B9_OpenInst(WriteValueDelegate_tDEBCD609141F0411B3AD9A0B37D83D2D21321B50* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, ChakraVeinInfo_tA9F7FEEA74A8F324BE4D4816F6DC8C8B79991357* ___1_value, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, ChakraVeinInfo_tA9F7FEEA74A8F324BE4D4816F6DC8C8B79991357*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_writer, ___1_value, method);
}
void WriteValueDelegate_Invoke_mEB3B8C2B6B409EA5F2819E591D6F5F3F881DF8B9_OpenStatic(WriteValueDelegate_tDEBCD609141F0411B3AD9A0B37D83D2D21321B50* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, ChakraVeinInfo_tA9F7FEEA74A8F324BE4D4816F6DC8C8B79991357* ___1_value, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, ChakraVeinInfo_tA9F7FEEA74A8F324BE4D4816F6DC8C8B79991357*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_writer, ___1_value, method);
}
// Method Definition Index: 82867
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteValueDelegate__ctor_m9C171C2A65A62A64F7594966E3EA7D1A5AF9E199_gshared (WriteValueDelegate_tDEBCD609141F0411B3AD9A0B37D83D2D21321B50* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&WriteValueDelegate_Invoke_mEB3B8C2B6B409EA5F2819E591D6F5F3F881DF8B9_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl = __this->___method_ptr;
		__this->___method_code = (intptr_t)__this->___m_target;
	}
	__this->___extra_arg = (intptr_t)&WriteValueDelegate_Invoke_mEB3B8C2B6B409EA5F2819E591D6F5F3F881DF8B9_Multicast;
}
// Method Definition Index: 82868
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteValueDelegate_Invoke_mEB3B8C2B6B409EA5F2819E591D6F5F3F881DF8B9_gshared (WriteValueDelegate_tDEBCD609141F0411B3AD9A0B37D83D2D21321B50* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, ChakraVeinInfo_tA9F7FEEA74A8F324BE4D4816F6DC8C8B79991357* ___1_value, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, ChakraVeinInfo_tA9F7FEEA74A8F324BE4D4816F6DC8C8B79991357*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_writer, ___1_value, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 82869
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WriteValueDelegate_BeginInvoke_mA0167364A8BE4EB9D72FD8D5D2CABBE05771BE9A_gshared (WriteValueDelegate_tDEBCD609141F0411B3AD9A0B37D83D2D21321B50* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, ChakraVeinInfo_tA9F7FEEA74A8F324BE4D4816F6DC8C8B79991357* ___1_value, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___2_callback, RuntimeObject* ___3_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChakraVeinInfo_tA9F7FEEA74A8F324BE4D4816F6DC8C8B79991357_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var, &___0_writer);
	__d_args[1] = Box(ChakraVeinInfo_tA9F7FEEA74A8F324BE4D4816F6DC8C8B79991357_il2cpp_TypeInfo_var, &*___1_value);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___2_callback, (RuntimeObject*)___3_object);
}
// Method Definition Index: 82870
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteValueDelegate_EndInvoke_m1435172CBDE51AF5C3DD70D47493B6EA756B8B5C_gshared (WriteValueDelegate_tDEBCD609141F0411B3AD9A0B37D83D2D21321B50* __this, ChakraVeinInfo_tA9F7FEEA74A8F324BE4D4816F6DC8C8B79991357* ___0_value, RuntimeObject* ___1_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___1_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void WriteValueDelegate_Invoke_m603CC7538F2800E118E483ED873F9D4CE2E55BB2_Multicast(WriteValueDelegate_t151C4C983EB51995EDDE77F1D5F693BCDDBDACED* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, CustomTransform_t1F0F3FAC4EAE6AFC5031BB6107FF675E3FE4200B* ___1_value, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		WriteValueDelegate_t151C4C983EB51995EDDE77F1D5F693BCDDBDACED* currentDelegate = reinterpret_cast<WriteValueDelegate_t151C4C983EB51995EDDE77F1D5F693BCDDBDACED*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, CustomTransform_t1F0F3FAC4EAE6AFC5031BB6107FF675E3FE4200B*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_writer, ___1_value, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void WriteValueDelegate_Invoke_m603CC7538F2800E118E483ED873F9D4CE2E55BB2_OpenInst(WriteValueDelegate_t151C4C983EB51995EDDE77F1D5F693BCDDBDACED* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, CustomTransform_t1F0F3FAC4EAE6AFC5031BB6107FF675E3FE4200B* ___1_value, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, CustomTransform_t1F0F3FAC4EAE6AFC5031BB6107FF675E3FE4200B*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_writer, ___1_value, method);
}
void WriteValueDelegate_Invoke_m603CC7538F2800E118E483ED873F9D4CE2E55BB2_OpenStatic(WriteValueDelegate_t151C4C983EB51995EDDE77F1D5F693BCDDBDACED* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, CustomTransform_t1F0F3FAC4EAE6AFC5031BB6107FF675E3FE4200B* ___1_value, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, CustomTransform_t1F0F3FAC4EAE6AFC5031BB6107FF675E3FE4200B*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_writer, ___1_value, method);
}
// Method Definition Index: 82867
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteValueDelegate__ctor_m9874BE1A46A14A9E2EEF7A906CCC581577EE9D21_gshared (WriteValueDelegate_t151C4C983EB51995EDDE77F1D5F693BCDDBDACED* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&WriteValueDelegate_Invoke_m603CC7538F2800E118E483ED873F9D4CE2E55BB2_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl = __this->___method_ptr;
		__this->___method_code = (intptr_t)__this->___m_target;
	}
	__this->___extra_arg = (intptr_t)&WriteValueDelegate_Invoke_m603CC7538F2800E118E483ED873F9D4CE2E55BB2_Multicast;
}
// Method Definition Index: 82868
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteValueDelegate_Invoke_m603CC7538F2800E118E483ED873F9D4CE2E55BB2_gshared (WriteValueDelegate_t151C4C983EB51995EDDE77F1D5F693BCDDBDACED* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, CustomTransform_t1F0F3FAC4EAE6AFC5031BB6107FF675E3FE4200B* ___1_value, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, CustomTransform_t1F0F3FAC4EAE6AFC5031BB6107FF675E3FE4200B*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_writer, ___1_value, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 82869
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WriteValueDelegate_BeginInvoke_m6CDBFE228C50452B949B4C0102DC339C7AB27D1B_gshared (WriteValueDelegate_t151C4C983EB51995EDDE77F1D5F693BCDDBDACED* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, CustomTransform_t1F0F3FAC4EAE6AFC5031BB6107FF675E3FE4200B* ___1_value, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___2_callback, RuntimeObject* ___3_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CustomTransform_t1F0F3FAC4EAE6AFC5031BB6107FF675E3FE4200B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var, &___0_writer);
	__d_args[1] = Box(CustomTransform_t1F0F3FAC4EAE6AFC5031BB6107FF675E3FE4200B_il2cpp_TypeInfo_var, &*___1_value);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___2_callback, (RuntimeObject*)___3_object);
}
// Method Definition Index: 82870
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteValueDelegate_EndInvoke_m2634F04CA6BB8B1ABEA84E8D82E90C5842C11547_gshared (WriteValueDelegate_t151C4C983EB51995EDDE77F1D5F693BCDDBDACED* __this, CustomTransform_t1F0F3FAC4EAE6AFC5031BB6107FF675E3FE4200B* ___0_value, RuntimeObject* ___1_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___1_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void WriteValueDelegate_Invoke_m5EC71492E526713CEC0F425737D5373EE4CAC9D1_Multicast(WriteValueDelegate_t28D3C8BE903E7E73325C22836F9F68C58384EAE1* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, FixedString32Bytes_t0FB200DC482825CC1EF24B4640201CC039631824* ___1_value, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		WriteValueDelegate_t28D3C8BE903E7E73325C22836F9F68C58384EAE1* currentDelegate = reinterpret_cast<WriteValueDelegate_t28D3C8BE903E7E73325C22836F9F68C58384EAE1*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, FixedString32Bytes_t0FB200DC482825CC1EF24B4640201CC039631824*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_writer, ___1_value, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void WriteValueDelegate_Invoke_m5EC71492E526713CEC0F425737D5373EE4CAC9D1_OpenInst(WriteValueDelegate_t28D3C8BE903E7E73325C22836F9F68C58384EAE1* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, FixedString32Bytes_t0FB200DC482825CC1EF24B4640201CC039631824* ___1_value, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, FixedString32Bytes_t0FB200DC482825CC1EF24B4640201CC039631824*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_writer, ___1_value, method);
}
void WriteValueDelegate_Invoke_m5EC71492E526713CEC0F425737D5373EE4CAC9D1_OpenStatic(WriteValueDelegate_t28D3C8BE903E7E73325C22836F9F68C58384EAE1* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, FixedString32Bytes_t0FB200DC482825CC1EF24B4640201CC039631824* ___1_value, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, FixedString32Bytes_t0FB200DC482825CC1EF24B4640201CC039631824*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_writer, ___1_value, method);
}
// Method Definition Index: 82867
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteValueDelegate__ctor_m0D89AB70BFD451FA73EF48930CAFD6186A959CC1_gshared (WriteValueDelegate_t28D3C8BE903E7E73325C22836F9F68C58384EAE1* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&WriteValueDelegate_Invoke_m5EC71492E526713CEC0F425737D5373EE4CAC9D1_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl = __this->___method_ptr;
		__this->___method_code = (intptr_t)__this->___m_target;
	}
	__this->___extra_arg = (intptr_t)&WriteValueDelegate_Invoke_m5EC71492E526713CEC0F425737D5373EE4CAC9D1_Multicast;
}
// Method Definition Index: 82868
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteValueDelegate_Invoke_m5EC71492E526713CEC0F425737D5373EE4CAC9D1_gshared (WriteValueDelegate_t28D3C8BE903E7E73325C22836F9F68C58384EAE1* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, FixedString32Bytes_t0FB200DC482825CC1EF24B4640201CC039631824* ___1_value, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, FixedString32Bytes_t0FB200DC482825CC1EF24B4640201CC039631824*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_writer, ___1_value, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 82869
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WriteValueDelegate_BeginInvoke_m7EC3BD391B8D12678B428DCE32B5D6DE3847D4AC_gshared (WriteValueDelegate_t28D3C8BE903E7E73325C22836F9F68C58384EAE1* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, FixedString32Bytes_t0FB200DC482825CC1EF24B4640201CC039631824* ___1_value, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___2_callback, RuntimeObject* ___3_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FixedString32Bytes_t0FB200DC482825CC1EF24B4640201CC039631824_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var, &___0_writer);
	__d_args[1] = Box(FixedString32Bytes_t0FB200DC482825CC1EF24B4640201CC039631824_il2cpp_TypeInfo_var, &*___1_value);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___2_callback, (RuntimeObject*)___3_object);
}
// Method Definition Index: 82870
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteValueDelegate_EndInvoke_m901854A2CE8ACC23406B697D9C4FDD06D4BBCE78_gshared (WriteValueDelegate_t28D3C8BE903E7E73325C22836F9F68C58384EAE1* __this, FixedString32Bytes_t0FB200DC482825CC1EF24B4640201CC039631824* ___0_value, RuntimeObject* ___1_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___1_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void WriteValueDelegate_Invoke_m9640A12565B34A27B3E57ABAB35AFE31BD594564_Multicast(WriteValueDelegate_t024E8A7B3A528B116063E2D7FA17CB14E06E4F16* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, int16_t* ___1_value, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		WriteValueDelegate_t024E8A7B3A528B116063E2D7FA17CB14E06E4F16* currentDelegate = reinterpret_cast<WriteValueDelegate_t024E8A7B3A528B116063E2D7FA17CB14E06E4F16*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, int16_t*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_writer, ___1_value, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void WriteValueDelegate_Invoke_m9640A12565B34A27B3E57ABAB35AFE31BD594564_OpenInst(WriteValueDelegate_t024E8A7B3A528B116063E2D7FA17CB14E06E4F16* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, int16_t* ___1_value, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, int16_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_writer, ___1_value, method);
}
void WriteValueDelegate_Invoke_m9640A12565B34A27B3E57ABAB35AFE31BD594564_OpenStatic(WriteValueDelegate_t024E8A7B3A528B116063E2D7FA17CB14E06E4F16* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, int16_t* ___1_value, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, int16_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_writer, ___1_value, method);
}
// Method Definition Index: 82867
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteValueDelegate__ctor_mA61A64E7A96E85962E93C74B99C061B455F5F0E6_gshared (WriteValueDelegate_t024E8A7B3A528B116063E2D7FA17CB14E06E4F16* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&WriteValueDelegate_Invoke_m9640A12565B34A27B3E57ABAB35AFE31BD594564_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl = __this->___method_ptr;
		__this->___method_code = (intptr_t)__this->___m_target;
	}
	__this->___extra_arg = (intptr_t)&WriteValueDelegate_Invoke_m9640A12565B34A27B3E57ABAB35AFE31BD594564_Multicast;
}
// Method Definition Index: 82868
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteValueDelegate_Invoke_m9640A12565B34A27B3E57ABAB35AFE31BD594564_gshared (WriteValueDelegate_t024E8A7B3A528B116063E2D7FA17CB14E06E4F16* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, int16_t* ___1_value, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, int16_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_writer, ___1_value, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 82869
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WriteValueDelegate_BeginInvoke_mC64772F2AAC762396BF9487BD2CB3B457851CBAB_gshared (WriteValueDelegate_t024E8A7B3A528B116063E2D7FA17CB14E06E4F16* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, int16_t* ___1_value, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___2_callback, RuntimeObject* ___3_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var, &___0_writer);
	__d_args[1] = Box(il2cpp_defaults.int16_class, &*___1_value);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___2_callback, (RuntimeObject*)___3_object);
}
// Method Definition Index: 82870
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteValueDelegate_EndInvoke_m9E2B05A3D21DA4E66876522C2F2FCDA10158AA65_gshared (WriteValueDelegate_t024E8A7B3A528B116063E2D7FA17CB14E06E4F16* __this, int16_t* ___0_value, RuntimeObject* ___1_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___1_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void WriteValueDelegate_Invoke_m56B44E0F643BCDE45F558B2379B446DAA148BBA6_Multicast(WriteValueDelegate_t45D324B20EFBA6F5D66410BDE5FAD8FDFAC3EF21* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, int32_t* ___1_value, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		WriteValueDelegate_t45D324B20EFBA6F5D66410BDE5FAD8FDFAC3EF21* currentDelegate = reinterpret_cast<WriteValueDelegate_t45D324B20EFBA6F5D66410BDE5FAD8FDFAC3EF21*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, int32_t*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_writer, ___1_value, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void WriteValueDelegate_Invoke_m56B44E0F643BCDE45F558B2379B446DAA148BBA6_OpenInst(WriteValueDelegate_t45D324B20EFBA6F5D66410BDE5FAD8FDFAC3EF21* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, int32_t* ___1_value, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, int32_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_writer, ___1_value, method);
}
void WriteValueDelegate_Invoke_m56B44E0F643BCDE45F558B2379B446DAA148BBA6_OpenStatic(WriteValueDelegate_t45D324B20EFBA6F5D66410BDE5FAD8FDFAC3EF21* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, int32_t* ___1_value, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, int32_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_writer, ___1_value, method);
}
// Method Definition Index: 82867
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteValueDelegate__ctor_mE971953AB8743378971DF8083497FE3F8034CC5A_gshared (WriteValueDelegate_t45D324B20EFBA6F5D66410BDE5FAD8FDFAC3EF21* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&WriteValueDelegate_Invoke_m56B44E0F643BCDE45F558B2379B446DAA148BBA6_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl = __this->___method_ptr;
		__this->___method_code = (intptr_t)__this->___m_target;
	}
	__this->___extra_arg = (intptr_t)&WriteValueDelegate_Invoke_m56B44E0F643BCDE45F558B2379B446DAA148BBA6_Multicast;
}
// Method Definition Index: 82868
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteValueDelegate_Invoke_m56B44E0F643BCDE45F558B2379B446DAA148BBA6_gshared (WriteValueDelegate_t45D324B20EFBA6F5D66410BDE5FAD8FDFAC3EF21* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, int32_t* ___1_value, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, int32_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_writer, ___1_value, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 82869
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WriteValueDelegate_BeginInvoke_m53A1CC8259D7F417A61A1DDB206B6DF6F6D1CF4E_gshared (WriteValueDelegate_t45D324B20EFBA6F5D66410BDE5FAD8FDFAC3EF21* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, int32_t* ___1_value, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___2_callback, RuntimeObject* ___3_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var, &___0_writer);
	__d_args[1] = Box(il2cpp_defaults.int32_class, &*___1_value);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___2_callback, (RuntimeObject*)___3_object);
}
// Method Definition Index: 82870
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteValueDelegate_EndInvoke_m2867A55DE9BE2A95252EBF290618016F1EB781D9_gshared (WriteValueDelegate_t45D324B20EFBA6F5D66410BDE5FAD8FDFAC3EF21* __this, int32_t* ___0_value, RuntimeObject* ___1_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___1_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void WriteValueDelegate_Invoke_m310F72F199F846634C671ABFB5F0E6FC9E25F9C7_Multicast(WriteValueDelegate_t56FDBE53C8F6ADF47F9C8662115BF484A42703F8* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, int32_t* ___1_value, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		WriteValueDelegate_t56FDBE53C8F6ADF47F9C8662115BF484A42703F8* currentDelegate = reinterpret_cast<WriteValueDelegate_t56FDBE53C8F6ADF47F9C8662115BF484A42703F8*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, int32_t*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_writer, ___1_value, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void WriteValueDelegate_Invoke_m310F72F199F846634C671ABFB5F0E6FC9E25F9C7_OpenInst(WriteValueDelegate_t56FDBE53C8F6ADF47F9C8662115BF484A42703F8* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, int32_t* ___1_value, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, int32_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_writer, ___1_value, method);
}
void WriteValueDelegate_Invoke_m310F72F199F846634C671ABFB5F0E6FC9E25F9C7_OpenStatic(WriteValueDelegate_t56FDBE53C8F6ADF47F9C8662115BF484A42703F8* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, int32_t* ___1_value, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, int32_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_writer, ___1_value, method);
}
// Method Definition Index: 82867
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteValueDelegate__ctor_m167379BB2FE54D5D25E051BAC96FFE546A67F299_gshared (WriteValueDelegate_t56FDBE53C8F6ADF47F9C8662115BF484A42703F8* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&WriteValueDelegate_Invoke_m310F72F199F846634C671ABFB5F0E6FC9E25F9C7_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl = __this->___method_ptr;
		__this->___method_code = (intptr_t)__this->___m_target;
	}
	__this->___extra_arg = (intptr_t)&WriteValueDelegate_Invoke_m310F72F199F846634C671ABFB5F0E6FC9E25F9C7_Multicast;
}
// Method Definition Index: 82868
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteValueDelegate_Invoke_m310F72F199F846634C671ABFB5F0E6FC9E25F9C7_gshared (WriteValueDelegate_t56FDBE53C8F6ADF47F9C8662115BF484A42703F8* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, int32_t* ___1_value, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, int32_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_writer, ___1_value, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 82869
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WriteValueDelegate_BeginInvoke_mFC3E883B067B78169326B3880EF0C3D64AD941B8_gshared (WriteValueDelegate_t56FDBE53C8F6ADF47F9C8662115BF484A42703F8* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, int32_t* ___1_value, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___2_callback, RuntimeObject* ___3_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var, &___0_writer);
	__d_args[1] = Box(Int32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_il2cpp_TypeInfo_var, &*___1_value);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___2_callback, (RuntimeObject*)___3_object);
}
// Method Definition Index: 82870
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteValueDelegate_EndInvoke_m4A1A333F4611A50CEFCE45BF55FB67F2041CA49A_gshared (WriteValueDelegate_t56FDBE53C8F6ADF47F9C8662115BF484A42703F8* __this, int32_t* ___0_value, RuntimeObject* ___1_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___1_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void WriteValueDelegate_Invoke_m55EAD95B2DBAD90AADA4F8748FA866C43BCA3F15_Multicast(WriteValueDelegate_tF07A6D84C76842F9DF7E45B506143D8F6060D15F* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, int64_t* ___1_value, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		WriteValueDelegate_tF07A6D84C76842F9DF7E45B506143D8F6060D15F* currentDelegate = reinterpret_cast<WriteValueDelegate_tF07A6D84C76842F9DF7E45B506143D8F6060D15F*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, int64_t*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_writer, ___1_value, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void WriteValueDelegate_Invoke_m55EAD95B2DBAD90AADA4F8748FA866C43BCA3F15_OpenInst(WriteValueDelegate_tF07A6D84C76842F9DF7E45B506143D8F6060D15F* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, int64_t* ___1_value, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, int64_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_writer, ___1_value, method);
}
void WriteValueDelegate_Invoke_m55EAD95B2DBAD90AADA4F8748FA866C43BCA3F15_OpenStatic(WriteValueDelegate_tF07A6D84C76842F9DF7E45B506143D8F6060D15F* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, int64_t* ___1_value, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, int64_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_writer, ___1_value, method);
}
// Method Definition Index: 82867
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteValueDelegate__ctor_mEC2FBABBC2C93C6772386E8E7A44A1BEB1B749D2_gshared (WriteValueDelegate_tF07A6D84C76842F9DF7E45B506143D8F6060D15F* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&WriteValueDelegate_Invoke_m55EAD95B2DBAD90AADA4F8748FA866C43BCA3F15_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl = __this->___method_ptr;
		__this->___method_code = (intptr_t)__this->___m_target;
	}
	__this->___extra_arg = (intptr_t)&WriteValueDelegate_Invoke_m55EAD95B2DBAD90AADA4F8748FA866C43BCA3F15_Multicast;
}
// Method Definition Index: 82868
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteValueDelegate_Invoke_m55EAD95B2DBAD90AADA4F8748FA866C43BCA3F15_gshared (WriteValueDelegate_tF07A6D84C76842F9DF7E45B506143D8F6060D15F* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, int64_t* ___1_value, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, int64_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_writer, ___1_value, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 82869
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WriteValueDelegate_BeginInvoke_m767D68892295CC2725CA4D38A27B4A116B99FA85_gshared (WriteValueDelegate_tF07A6D84C76842F9DF7E45B506143D8F6060D15F* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, int64_t* ___1_value, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___2_callback, RuntimeObject* ___3_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var, &___0_writer);
	__d_args[1] = Box(il2cpp_defaults.int64_class, &*___1_value);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___2_callback, (RuntimeObject*)___3_object);
}
// Method Definition Index: 82870
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteValueDelegate_EndInvoke_m841C9F82B0C1A86A926247FCE1105C3721CD556E_gshared (WriteValueDelegate_tF07A6D84C76842F9DF7E45B506143D8F6060D15F* __this, int64_t* ___0_value, RuntimeObject* ___1_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___1_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void WriteValueDelegate_Invoke_m42092052E47D6C560401FB4F560FD7BE160B48B7_Multicast(WriteValueDelegate_t8FEF9ED27C319AD2333C17230727C2AFBE82F0D0* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, MatchStatClientSync_t53201D4730BB7370354E6F0489C98E2E0957D827* ___1_value, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		WriteValueDelegate_t8FEF9ED27C319AD2333C17230727C2AFBE82F0D0* currentDelegate = reinterpret_cast<WriteValueDelegate_t8FEF9ED27C319AD2333C17230727C2AFBE82F0D0*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, MatchStatClientSync_t53201D4730BB7370354E6F0489C98E2E0957D827*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_writer, ___1_value, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void WriteValueDelegate_Invoke_m42092052E47D6C560401FB4F560FD7BE160B48B7_OpenInst(WriteValueDelegate_t8FEF9ED27C319AD2333C17230727C2AFBE82F0D0* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, MatchStatClientSync_t53201D4730BB7370354E6F0489C98E2E0957D827* ___1_value, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, MatchStatClientSync_t53201D4730BB7370354E6F0489C98E2E0957D827*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_writer, ___1_value, method);
}
void WriteValueDelegate_Invoke_m42092052E47D6C560401FB4F560FD7BE160B48B7_OpenStatic(WriteValueDelegate_t8FEF9ED27C319AD2333C17230727C2AFBE82F0D0* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, MatchStatClientSync_t53201D4730BB7370354E6F0489C98E2E0957D827* ___1_value, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, MatchStatClientSync_t53201D4730BB7370354E6F0489C98E2E0957D827*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_writer, ___1_value, method);
}
// Method Definition Index: 82867
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteValueDelegate__ctor_mF6326495B0F313DF20929BAF88E0BDE4156DFB29_gshared (WriteValueDelegate_t8FEF9ED27C319AD2333C17230727C2AFBE82F0D0* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&WriteValueDelegate_Invoke_m42092052E47D6C560401FB4F560FD7BE160B48B7_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl = __this->___method_ptr;
		__this->___method_code = (intptr_t)__this->___m_target;
	}
	__this->___extra_arg = (intptr_t)&WriteValueDelegate_Invoke_m42092052E47D6C560401FB4F560FD7BE160B48B7_Multicast;
}
// Method Definition Index: 82868
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteValueDelegate_Invoke_m42092052E47D6C560401FB4F560FD7BE160B48B7_gshared (WriteValueDelegate_t8FEF9ED27C319AD2333C17230727C2AFBE82F0D0* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, MatchStatClientSync_t53201D4730BB7370354E6F0489C98E2E0957D827* ___1_value, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, MatchStatClientSync_t53201D4730BB7370354E6F0489C98E2E0957D827*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_writer, ___1_value, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 82869
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WriteValueDelegate_BeginInvoke_m1DFEEAEACBB60B87325BDBDB0E5FC6DE04F24069_gshared (WriteValueDelegate_t8FEF9ED27C319AD2333C17230727C2AFBE82F0D0* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, MatchStatClientSync_t53201D4730BB7370354E6F0489C98E2E0957D827* ___1_value, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___2_callback, RuntimeObject* ___3_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MatchStatClientSync_t53201D4730BB7370354E6F0489C98E2E0957D827_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var, &___0_writer);
	__d_args[1] = Box(MatchStatClientSync_t53201D4730BB7370354E6F0489C98E2E0957D827_il2cpp_TypeInfo_var, &*___1_value);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___2_callback, (RuntimeObject*)___3_object);
}
// Method Definition Index: 82870
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteValueDelegate_EndInvoke_m235F2EEE7F377D8CE047F5C88069AEC3B69EB75F_gshared (WriteValueDelegate_t8FEF9ED27C319AD2333C17230727C2AFBE82F0D0* __this, MatchStatClientSync_t53201D4730BB7370354E6F0489C98E2E0957D827* ___0_value, RuntimeObject* ___1_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___1_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void WriteValueDelegate_Invoke_m05665D9D332F9CE5134CB1CE17A6620F9673BFC5_Multicast(WriteValueDelegate_t2AB9AB6218D28F8C724E65BC320D9697354C0E25* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, NetworkCharacterSelectState_t3CA2BEC90F7FED70364463A60D4AD3C10698EBEF* ___1_value, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		WriteValueDelegate_t2AB9AB6218D28F8C724E65BC320D9697354C0E25* currentDelegate = reinterpret_cast<WriteValueDelegate_t2AB9AB6218D28F8C724E65BC320D9697354C0E25*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, NetworkCharacterSelectState_t3CA2BEC90F7FED70364463A60D4AD3C10698EBEF*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_writer, ___1_value, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void WriteValueDelegate_Invoke_m05665D9D332F9CE5134CB1CE17A6620F9673BFC5_OpenInst(WriteValueDelegate_t2AB9AB6218D28F8C724E65BC320D9697354C0E25* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, NetworkCharacterSelectState_t3CA2BEC90F7FED70364463A60D4AD3C10698EBEF* ___1_value, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, NetworkCharacterSelectState_t3CA2BEC90F7FED70364463A60D4AD3C10698EBEF*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_writer, ___1_value, method);
}
void WriteValueDelegate_Invoke_m05665D9D332F9CE5134CB1CE17A6620F9673BFC5_OpenStatic(WriteValueDelegate_t2AB9AB6218D28F8C724E65BC320D9697354C0E25* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, NetworkCharacterSelectState_t3CA2BEC90F7FED70364463A60D4AD3C10698EBEF* ___1_value, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, NetworkCharacterSelectState_t3CA2BEC90F7FED70364463A60D4AD3C10698EBEF*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_writer, ___1_value, method);
}
// Method Definition Index: 82867
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteValueDelegate__ctor_mBF50984B3C31934BD63966FF6AABD54F8CE7CF71_gshared (WriteValueDelegate_t2AB9AB6218D28F8C724E65BC320D9697354C0E25* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&WriteValueDelegate_Invoke_m05665D9D332F9CE5134CB1CE17A6620F9673BFC5_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl = __this->___method_ptr;
		__this->___method_code = (intptr_t)__this->___m_target;
	}
	__this->___extra_arg = (intptr_t)&WriteValueDelegate_Invoke_m05665D9D332F9CE5134CB1CE17A6620F9673BFC5_Multicast;
}
// Method Definition Index: 82868
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteValueDelegate_Invoke_m05665D9D332F9CE5134CB1CE17A6620F9673BFC5_gshared (WriteValueDelegate_t2AB9AB6218D28F8C724E65BC320D9697354C0E25* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, NetworkCharacterSelectState_t3CA2BEC90F7FED70364463A60D4AD3C10698EBEF* ___1_value, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, NetworkCharacterSelectState_t3CA2BEC90F7FED70364463A60D4AD3C10698EBEF*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_writer, ___1_value, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 82869
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WriteValueDelegate_BeginInvoke_mBE92C2157CD826CF0191CDFAEBA6BEE57EF14F62_gshared (WriteValueDelegate_t2AB9AB6218D28F8C724E65BC320D9697354C0E25* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, NetworkCharacterSelectState_t3CA2BEC90F7FED70364463A60D4AD3C10698EBEF* ___1_value, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___2_callback, RuntimeObject* ___3_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkCharacterSelectState_t3CA2BEC90F7FED70364463A60D4AD3C10698EBEF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var, &___0_writer);
	__d_args[1] = Box(NetworkCharacterSelectState_t3CA2BEC90F7FED70364463A60D4AD3C10698EBEF_il2cpp_TypeInfo_var, &*___1_value);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___2_callback, (RuntimeObject*)___3_object);
}
// Method Definition Index: 82870
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteValueDelegate_EndInvoke_m22A723402869418911EB3D1416EA675F3D213196_gshared (WriteValueDelegate_t2AB9AB6218D28F8C724E65BC320D9697354C0E25* __this, NetworkCharacterSelectState_t3CA2BEC90F7FED70364463A60D4AD3C10698EBEF* ___0_value, RuntimeObject* ___1_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___1_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void WriteValueDelegate_Invoke_mD379132F16BC21FF3BBDC62AF46FE3A0826C6180_Multicast(WriteValueDelegate_tC15BF137CB83E68C952D67EA8752B7A97841BDAC* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, NetworkObjectReference_tDC1F1C3CC1E28DCB9229C36E30BB81F847CF77FD* ___1_value, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		WriteValueDelegate_tC15BF137CB83E68C952D67EA8752B7A97841BDAC* currentDelegate = reinterpret_cast<WriteValueDelegate_tC15BF137CB83E68C952D67EA8752B7A97841BDAC*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, NetworkObjectReference_tDC1F1C3CC1E28DCB9229C36E30BB81F847CF77FD*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_writer, ___1_value, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void WriteValueDelegate_Invoke_mD379132F16BC21FF3BBDC62AF46FE3A0826C6180_OpenInst(WriteValueDelegate_tC15BF137CB83E68C952D67EA8752B7A97841BDAC* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, NetworkObjectReference_tDC1F1C3CC1E28DCB9229C36E30BB81F847CF77FD* ___1_value, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, NetworkObjectReference_tDC1F1C3CC1E28DCB9229C36E30BB81F847CF77FD*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_writer, ___1_value, method);
}
void WriteValueDelegate_Invoke_mD379132F16BC21FF3BBDC62AF46FE3A0826C6180_OpenStatic(WriteValueDelegate_tC15BF137CB83E68C952D67EA8752B7A97841BDAC* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, NetworkObjectReference_tDC1F1C3CC1E28DCB9229C36E30BB81F847CF77FD* ___1_value, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, NetworkObjectReference_tDC1F1C3CC1E28DCB9229C36E30BB81F847CF77FD*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_writer, ___1_value, method);
}
// Method Definition Index: 82867
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteValueDelegate__ctor_m59C2EE03250931AF73F8716815AFBC4290BF0962_gshared (WriteValueDelegate_tC15BF137CB83E68C952D67EA8752B7A97841BDAC* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&WriteValueDelegate_Invoke_mD379132F16BC21FF3BBDC62AF46FE3A0826C6180_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl = __this->___method_ptr;
		__this->___method_code = (intptr_t)__this->___m_target;
	}
	__this->___extra_arg = (intptr_t)&WriteValueDelegate_Invoke_mD379132F16BC21FF3BBDC62AF46FE3A0826C6180_Multicast;
}
// Method Definition Index: 82868
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteValueDelegate_Invoke_mD379132F16BC21FF3BBDC62AF46FE3A0826C6180_gshared (WriteValueDelegate_tC15BF137CB83E68C952D67EA8752B7A97841BDAC* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, NetworkObjectReference_tDC1F1C3CC1E28DCB9229C36E30BB81F847CF77FD* ___1_value, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, NetworkObjectReference_tDC1F1C3CC1E28DCB9229C36E30BB81F847CF77FD*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_writer, ___1_value, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 82869
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WriteValueDelegate_BeginInvoke_m13C76F9A32A8C141513DE94EACB0890BFDE273E0_gshared (WriteValueDelegate_tC15BF137CB83E68C952D67EA8752B7A97841BDAC* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, NetworkObjectReference_tDC1F1C3CC1E28DCB9229C36E30BB81F847CF77FD* ___1_value, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___2_callback, RuntimeObject* ___3_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkObjectReference_tDC1F1C3CC1E28DCB9229C36E30BB81F847CF77FD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var, &___0_writer);
	__d_args[1] = Box(NetworkObjectReference_tDC1F1C3CC1E28DCB9229C36E30BB81F847CF77FD_il2cpp_TypeInfo_var, &*___1_value);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___2_callback, (RuntimeObject*)___3_object);
}
// Method Definition Index: 82870
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteValueDelegate_EndInvoke_mB4C96128F4CF9C19E6935659EDEC7378ED147D6A_gshared (WriteValueDelegate_tC15BF137CB83E68C952D67EA8752B7A97841BDAC* __this, NetworkObjectReference_tDC1F1C3CC1E28DCB9229C36E30BB81F847CF77FD* ___0_value, RuntimeObject* ___1_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___1_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void WriteValueDelegate_Invoke_m45247BEDC222A5B539360D481CD6AD6444969C66_Multicast(WriteValueDelegate_t5229761A9455193D5D8B28A714E3489CFD860723* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, RuntimeObject** ___1_value, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		WriteValueDelegate_t5229761A9455193D5D8B28A714E3489CFD860723* currentDelegate = reinterpret_cast<WriteValueDelegate_t5229761A9455193D5D8B28A714E3489CFD860723*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, RuntimeObject**, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_writer, ___1_value, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void WriteValueDelegate_Invoke_m45247BEDC222A5B539360D481CD6AD6444969C66_OpenInst(WriteValueDelegate_t5229761A9455193D5D8B28A714E3489CFD860723* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, RuntimeObject** ___1_value, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, RuntimeObject**, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_writer, ___1_value, method);
}
void WriteValueDelegate_Invoke_m45247BEDC222A5B539360D481CD6AD6444969C66_OpenStatic(WriteValueDelegate_t5229761A9455193D5D8B28A714E3489CFD860723* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, RuntimeObject** ___1_value, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, RuntimeObject**, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_writer, ___1_value, method);
}
// Method Definition Index: 82867
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteValueDelegate__ctor_m1C60109154F74BB40DA6F194449FE9A891711B3F_gshared (WriteValueDelegate_t5229761A9455193D5D8B28A714E3489CFD860723* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&WriteValueDelegate_Invoke_m45247BEDC222A5B539360D481CD6AD6444969C66_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl = __this->___method_ptr;
		__this->___method_code = (intptr_t)__this->___m_target;
	}
	__this->___extra_arg = (intptr_t)&WriteValueDelegate_Invoke_m45247BEDC222A5B539360D481CD6AD6444969C66_Multicast;
}
// Method Definition Index: 82868
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteValueDelegate_Invoke_m45247BEDC222A5B539360D481CD6AD6444969C66_gshared (WriteValueDelegate_t5229761A9455193D5D8B28A714E3489CFD860723* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, RuntimeObject** ___1_value, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, RuntimeObject**, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_writer, ___1_value, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 82869
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WriteValueDelegate_BeginInvoke_m638CCB27A6046324AC5237DCA8AF67730BEC36D3_gshared (WriteValueDelegate_t5229761A9455193D5D8B28A714E3489CFD860723* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, RuntimeObject** ___1_value, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___2_callback, RuntimeObject* ___3_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var, &___0_writer);
	__d_args[1] = *___1_value;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___2_callback, (RuntimeObject*)___3_object);
}
// Method Definition Index: 82870
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteValueDelegate_EndInvoke_m371E39B8BB74D4DC94D472B5835E8F2755ABBABB_gshared (WriteValueDelegate_t5229761A9455193D5D8B28A714E3489CFD860723* __this, RuntimeObject** ___0_value, RuntimeObject* ___1_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___1_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void WriteValueDelegate_Invoke_mBDE0BBE2AAA36D8E8ABF57FFFFA3C94EE1EB2A15_Multicast(WriteValueDelegate_tF70BA29F2969BFB2104C17052D00DBCDB4B1B113* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, int8_t* ___1_value, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		WriteValueDelegate_tF70BA29F2969BFB2104C17052D00DBCDB4B1B113* currentDelegate = reinterpret_cast<WriteValueDelegate_tF70BA29F2969BFB2104C17052D00DBCDB4B1B113*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, int8_t*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_writer, ___1_value, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void WriteValueDelegate_Invoke_mBDE0BBE2AAA36D8E8ABF57FFFFA3C94EE1EB2A15_OpenInst(WriteValueDelegate_tF70BA29F2969BFB2104C17052D00DBCDB4B1B113* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, int8_t* ___1_value, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, int8_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_writer, ___1_value, method);
}
void WriteValueDelegate_Invoke_mBDE0BBE2AAA36D8E8ABF57FFFFA3C94EE1EB2A15_OpenStatic(WriteValueDelegate_tF70BA29F2969BFB2104C17052D00DBCDB4B1B113* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, int8_t* ___1_value, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, int8_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_writer, ___1_value, method);
}
// Method Definition Index: 82867
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteValueDelegate__ctor_mFF14EBD18EE48DF3910CFED0B0902F2CC0E5C99B_gshared (WriteValueDelegate_tF70BA29F2969BFB2104C17052D00DBCDB4B1B113* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&WriteValueDelegate_Invoke_mBDE0BBE2AAA36D8E8ABF57FFFFA3C94EE1EB2A15_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl = __this->___method_ptr;
		__this->___method_code = (intptr_t)__this->___m_target;
	}
	__this->___extra_arg = (intptr_t)&WriteValueDelegate_Invoke_mBDE0BBE2AAA36D8E8ABF57FFFFA3C94EE1EB2A15_Multicast;
}
// Method Definition Index: 82868
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteValueDelegate_Invoke_mBDE0BBE2AAA36D8E8ABF57FFFFA3C94EE1EB2A15_gshared (WriteValueDelegate_tF70BA29F2969BFB2104C17052D00DBCDB4B1B113* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, int8_t* ___1_value, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, int8_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_writer, ___1_value, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 82869
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WriteValueDelegate_BeginInvoke_m3E307A3B1C66FFFC8B9D8714A8EA8D434B2A715C_gshared (WriteValueDelegate_tF70BA29F2969BFB2104C17052D00DBCDB4B1B113* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, int8_t* ___1_value, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___2_callback, RuntimeObject* ___3_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var, &___0_writer);
	__d_args[1] = Box(il2cpp_defaults.sbyte_class, &*___1_value);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___2_callback, (RuntimeObject*)___3_object);
}
// Method Definition Index: 82870
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteValueDelegate_EndInvoke_m47ADE41C670E95A7927E9D639C1E82264F059DC2_gshared (WriteValueDelegate_tF70BA29F2969BFB2104C17052D00DBCDB4B1B113* __this, int8_t* ___0_value, RuntimeObject* ___1_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___1_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void WriteValueDelegate_Invoke_mFF8AEAA23E1B6FD8B2142F04494D090888CCDABC_Multicast(WriteValueDelegate_tF8086A0C78B6B051B38BB69528E95426A2653AE4* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, S_Stack_t765C2DB295BE8C07FB40C225F6570328D9FD787A* ___1_value, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		WriteValueDelegate_tF8086A0C78B6B051B38BB69528E95426A2653AE4* currentDelegate = reinterpret_cast<WriteValueDelegate_tF8086A0C78B6B051B38BB69528E95426A2653AE4*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, S_Stack_t765C2DB295BE8C07FB40C225F6570328D9FD787A*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_writer, ___1_value, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void WriteValueDelegate_Invoke_mFF8AEAA23E1B6FD8B2142F04494D090888CCDABC_OpenInst(WriteValueDelegate_tF8086A0C78B6B051B38BB69528E95426A2653AE4* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, S_Stack_t765C2DB295BE8C07FB40C225F6570328D9FD787A* ___1_value, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, S_Stack_t765C2DB295BE8C07FB40C225F6570328D9FD787A*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_writer, ___1_value, method);
}
void WriteValueDelegate_Invoke_mFF8AEAA23E1B6FD8B2142F04494D090888CCDABC_OpenStatic(WriteValueDelegate_tF8086A0C78B6B051B38BB69528E95426A2653AE4* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, S_Stack_t765C2DB295BE8C07FB40C225F6570328D9FD787A* ___1_value, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, S_Stack_t765C2DB295BE8C07FB40C225F6570328D9FD787A*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_writer, ___1_value, method);
}
// Method Definition Index: 82867
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteValueDelegate__ctor_mDE2DCED64789238A80E90734B3547AFE04AA4C3A_gshared (WriteValueDelegate_tF8086A0C78B6B051B38BB69528E95426A2653AE4* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&WriteValueDelegate_Invoke_mFF8AEAA23E1B6FD8B2142F04494D090888CCDABC_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl = __this->___method_ptr;
		__this->___method_code = (intptr_t)__this->___m_target;
	}
	__this->___extra_arg = (intptr_t)&WriteValueDelegate_Invoke_mFF8AEAA23E1B6FD8B2142F04494D090888CCDABC_Multicast;
}
// Method Definition Index: 82868
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteValueDelegate_Invoke_mFF8AEAA23E1B6FD8B2142F04494D090888CCDABC_gshared (WriteValueDelegate_tF8086A0C78B6B051B38BB69528E95426A2653AE4* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, S_Stack_t765C2DB295BE8C07FB40C225F6570328D9FD787A* ___1_value, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, S_Stack_t765C2DB295BE8C07FB40C225F6570328D9FD787A*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_writer, ___1_value, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 82869
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WriteValueDelegate_BeginInvoke_m28C3619AEEE0A4E3A000C4B574106F175F9EA01C_gshared (WriteValueDelegate_tF8086A0C78B6B051B38BB69528E95426A2653AE4* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, S_Stack_t765C2DB295BE8C07FB40C225F6570328D9FD787A* ___1_value, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___2_callback, RuntimeObject* ___3_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&S_Stack_t765C2DB295BE8C07FB40C225F6570328D9FD787A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var, &___0_writer);
	__d_args[1] = Box(S_Stack_t765C2DB295BE8C07FB40C225F6570328D9FD787A_il2cpp_TypeInfo_var, &*___1_value);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___2_callback, (RuntimeObject*)___3_object);
}
// Method Definition Index: 82870
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteValueDelegate_EndInvoke_m46EB3AA4AB39E4A3BA505478A1AD5EC4EB69F8D8_gshared (WriteValueDelegate_tF8086A0C78B6B051B38BB69528E95426A2653AE4* __this, S_Stack_t765C2DB295BE8C07FB40C225F6570328D9FD787A* ___0_value, RuntimeObject* ___1_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___1_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void WriteValueDelegate_Invoke_m5526B4B2667C3F554F7D2F93855EA02D251B495F_Multicast(WriteValueDelegate_t7E0DAB5EB031E80524026DA5E69B8BC284685EAD* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, S_Stats_t8976BA1109823F18D06136E3A6E6E5F2B5F2A86E* ___1_value, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		WriteValueDelegate_t7E0DAB5EB031E80524026DA5E69B8BC284685EAD* currentDelegate = reinterpret_cast<WriteValueDelegate_t7E0DAB5EB031E80524026DA5E69B8BC284685EAD*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, S_Stats_t8976BA1109823F18D06136E3A6E6E5F2B5F2A86E*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_writer, ___1_value, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void WriteValueDelegate_Invoke_m5526B4B2667C3F554F7D2F93855EA02D251B495F_OpenInst(WriteValueDelegate_t7E0DAB5EB031E80524026DA5E69B8BC284685EAD* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, S_Stats_t8976BA1109823F18D06136E3A6E6E5F2B5F2A86E* ___1_value, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, S_Stats_t8976BA1109823F18D06136E3A6E6E5F2B5F2A86E*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_writer, ___1_value, method);
}
void WriteValueDelegate_Invoke_m5526B4B2667C3F554F7D2F93855EA02D251B495F_OpenStatic(WriteValueDelegate_t7E0DAB5EB031E80524026DA5E69B8BC284685EAD* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, S_Stats_t8976BA1109823F18D06136E3A6E6E5F2B5F2A86E* ___1_value, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, S_Stats_t8976BA1109823F18D06136E3A6E6E5F2B5F2A86E*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_writer, ___1_value, method);
}
// Method Definition Index: 82867
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteValueDelegate__ctor_mD2CA61F8CBD1D20D66E1A2E557BBF67930B1AA61_gshared (WriteValueDelegate_t7E0DAB5EB031E80524026DA5E69B8BC284685EAD* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&WriteValueDelegate_Invoke_m5526B4B2667C3F554F7D2F93855EA02D251B495F_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl = __this->___method_ptr;
		__this->___method_code = (intptr_t)__this->___m_target;
	}
	__this->___extra_arg = (intptr_t)&WriteValueDelegate_Invoke_m5526B4B2667C3F554F7D2F93855EA02D251B495F_Multicast;
}
// Method Definition Index: 82868
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteValueDelegate_Invoke_m5526B4B2667C3F554F7D2F93855EA02D251B495F_gshared (WriteValueDelegate_t7E0DAB5EB031E80524026DA5E69B8BC284685EAD* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, S_Stats_t8976BA1109823F18D06136E3A6E6E5F2B5F2A86E* ___1_value, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, S_Stats_t8976BA1109823F18D06136E3A6E6E5F2B5F2A86E*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_writer, ___1_value, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 82869
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WriteValueDelegate_BeginInvoke_m8BA57E4A30ABFF3754B2C32A5A588F5E0065686D_gshared (WriteValueDelegate_t7E0DAB5EB031E80524026DA5E69B8BC284685EAD* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, S_Stats_t8976BA1109823F18D06136E3A6E6E5F2B5F2A86E* ___1_value, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___2_callback, RuntimeObject* ___3_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&S_Stats_t8976BA1109823F18D06136E3A6E6E5F2B5F2A86E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var, &___0_writer);
	__d_args[1] = Box(S_Stats_t8976BA1109823F18D06136E3A6E6E5F2B5F2A86E_il2cpp_TypeInfo_var, &*___1_value);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___2_callback, (RuntimeObject*)___3_object);
}
// Method Definition Index: 82870
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteValueDelegate_EndInvoke_m478F8D9C6C8596A447ECB312386BDFF18E4071B1_gshared (WriteValueDelegate_t7E0DAB5EB031E80524026DA5E69B8BC284685EAD* __this, S_Stats_t8976BA1109823F18D06136E3A6E6E5F2B5F2A86E* ___0_value, RuntimeObject* ___1_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___1_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void WriteValueDelegate_Invoke_mB5983D7E1F8ABD4211372CA3AF368271AA40EBD8_Multicast(WriteValueDelegate_tC3027B65BB056C8F37B342D753A4CA8474285D18* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, S_TowerStats_t73D8D343CC245E34D05DCA470D39D0BA8B078248* ___1_value, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		WriteValueDelegate_tC3027B65BB056C8F37B342D753A4CA8474285D18* currentDelegate = reinterpret_cast<WriteValueDelegate_tC3027B65BB056C8F37B342D753A4CA8474285D18*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, S_TowerStats_t73D8D343CC245E34D05DCA470D39D0BA8B078248*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_writer, ___1_value, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void WriteValueDelegate_Invoke_mB5983D7E1F8ABD4211372CA3AF368271AA40EBD8_OpenInst(WriteValueDelegate_tC3027B65BB056C8F37B342D753A4CA8474285D18* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, S_TowerStats_t73D8D343CC245E34D05DCA470D39D0BA8B078248* ___1_value, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, S_TowerStats_t73D8D343CC245E34D05DCA470D39D0BA8B078248*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_writer, ___1_value, method);
}
void WriteValueDelegate_Invoke_mB5983D7E1F8ABD4211372CA3AF368271AA40EBD8_OpenStatic(WriteValueDelegate_tC3027B65BB056C8F37B342D753A4CA8474285D18* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, S_TowerStats_t73D8D343CC245E34D05DCA470D39D0BA8B078248* ___1_value, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, S_TowerStats_t73D8D343CC245E34D05DCA470D39D0BA8B078248*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_writer, ___1_value, method);
}
// Method Definition Index: 82867
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteValueDelegate__ctor_mCCA84F7F2411CB1BAC8C43F8C6C300FFDE246E09_gshared (WriteValueDelegate_tC3027B65BB056C8F37B342D753A4CA8474285D18* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&WriteValueDelegate_Invoke_mB5983D7E1F8ABD4211372CA3AF368271AA40EBD8_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl = __this->___method_ptr;
		__this->___method_code = (intptr_t)__this->___m_target;
	}
	__this->___extra_arg = (intptr_t)&WriteValueDelegate_Invoke_mB5983D7E1F8ABD4211372CA3AF368271AA40EBD8_Multicast;
}
// Method Definition Index: 82868
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteValueDelegate_Invoke_mB5983D7E1F8ABD4211372CA3AF368271AA40EBD8_gshared (WriteValueDelegate_tC3027B65BB056C8F37B342D753A4CA8474285D18* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, S_TowerStats_t73D8D343CC245E34D05DCA470D39D0BA8B078248* ___1_value, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, S_TowerStats_t73D8D343CC245E34D05DCA470D39D0BA8B078248*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_writer, ___1_value, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 82869
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WriteValueDelegate_BeginInvoke_m20D18C0AEDB1457FA819830479456417E0CF23B2_gshared (WriteValueDelegate_tC3027B65BB056C8F37B342D753A4CA8474285D18* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, S_TowerStats_t73D8D343CC245E34D05DCA470D39D0BA8B078248* ___1_value, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___2_callback, RuntimeObject* ___3_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&S_TowerStats_t73D8D343CC245E34D05DCA470D39D0BA8B078248_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var, &___0_writer);
	__d_args[1] = Box(S_TowerStats_t73D8D343CC245E34D05DCA470D39D0BA8B078248_il2cpp_TypeInfo_var, &*___1_value);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___2_callback, (RuntimeObject*)___3_object);
}
// Method Definition Index: 82870
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteValueDelegate_EndInvoke_m04EB1915685E8D50479D6A2F292A8DEE875B63D6_gshared (WriteValueDelegate_tC3027B65BB056C8F37B342D753A4CA8474285D18* __this, S_TowerStats_t73D8D343CC245E34D05DCA470D39D0BA8B078248* ___0_value, RuntimeObject* ___1_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___1_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void WriteValueDelegate_Invoke_mB5541F9135C84CD54346FDF2589B221F766BE191_Multicast(WriteValueDelegate_t217B1C103C4D27C527620B9528827C801905E8B6* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, float* ___1_value, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		WriteValueDelegate_t217B1C103C4D27C527620B9528827C801905E8B6* currentDelegate = reinterpret_cast<WriteValueDelegate_t217B1C103C4D27C527620B9528827C801905E8B6*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, float*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_writer, ___1_value, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void WriteValueDelegate_Invoke_mB5541F9135C84CD54346FDF2589B221F766BE191_OpenInst(WriteValueDelegate_t217B1C103C4D27C527620B9528827C801905E8B6* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, float* ___1_value, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, float*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_writer, ___1_value, method);
}
void WriteValueDelegate_Invoke_mB5541F9135C84CD54346FDF2589B221F766BE191_OpenStatic(WriteValueDelegate_t217B1C103C4D27C527620B9528827C801905E8B6* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, float* ___1_value, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, float*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_writer, ___1_value, method);
}
// Method Definition Index: 82867
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteValueDelegate__ctor_mB94959269D6E396B8F337EBC7B1F984B5BF75ED2_gshared (WriteValueDelegate_t217B1C103C4D27C527620B9528827C801905E8B6* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&WriteValueDelegate_Invoke_mB5541F9135C84CD54346FDF2589B221F766BE191_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl = __this->___method_ptr;
		__this->___method_code = (intptr_t)__this->___m_target;
	}
	__this->___extra_arg = (intptr_t)&WriteValueDelegate_Invoke_mB5541F9135C84CD54346FDF2589B221F766BE191_Multicast;
}
// Method Definition Index: 82868
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteValueDelegate_Invoke_mB5541F9135C84CD54346FDF2589B221F766BE191_gshared (WriteValueDelegate_t217B1C103C4D27C527620B9528827C801905E8B6* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, float* ___1_value, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, float*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_writer, ___1_value, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 82869
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WriteValueDelegate_BeginInvoke_mB7E2F9F53870EE5CE23687024F7D3BBA002510BA_gshared (WriteValueDelegate_t217B1C103C4D27C527620B9528827C801905E8B6* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, float* ___1_value, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___2_callback, RuntimeObject* ___3_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var, &___0_writer);
	__d_args[1] = Box(il2cpp_defaults.single_class, &*___1_value);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___2_callback, (RuntimeObject*)___3_object);
}
// Method Definition Index: 82870
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteValueDelegate_EndInvoke_m55CE5769B0A0F59BECBDBE1F4682181A9EE700C5_gshared (WriteValueDelegate_t217B1C103C4D27C527620B9528827C801905E8B6* __this, float* ___0_value, RuntimeObject* ___1_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___1_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void WriteValueDelegate_Invoke_m0564D8EC115C4993BC58DE67D5F437FDF1CBB7DE_Multicast(WriteValueDelegate_t87086BD0A9A6D2BE7452749D920C58B9607894C7* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, uint16_t* ___1_value, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		WriteValueDelegate_t87086BD0A9A6D2BE7452749D920C58B9607894C7* currentDelegate = reinterpret_cast<WriteValueDelegate_t87086BD0A9A6D2BE7452749D920C58B9607894C7*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, uint16_t*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_writer, ___1_value, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void WriteValueDelegate_Invoke_m0564D8EC115C4993BC58DE67D5F437FDF1CBB7DE_OpenInst(WriteValueDelegate_t87086BD0A9A6D2BE7452749D920C58B9607894C7* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, uint16_t* ___1_value, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, uint16_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_writer, ___1_value, method);
}
void WriteValueDelegate_Invoke_m0564D8EC115C4993BC58DE67D5F437FDF1CBB7DE_OpenStatic(WriteValueDelegate_t87086BD0A9A6D2BE7452749D920C58B9607894C7* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, uint16_t* ___1_value, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, uint16_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_writer, ___1_value, method);
}
// Method Definition Index: 82867
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteValueDelegate__ctor_m79D8CB848293AC11C5717F94E519C647665215C0_gshared (WriteValueDelegate_t87086BD0A9A6D2BE7452749D920C58B9607894C7* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&WriteValueDelegate_Invoke_m0564D8EC115C4993BC58DE67D5F437FDF1CBB7DE_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl = __this->___method_ptr;
		__this->___method_code = (intptr_t)__this->___m_target;
	}
	__this->___extra_arg = (intptr_t)&WriteValueDelegate_Invoke_m0564D8EC115C4993BC58DE67D5F437FDF1CBB7DE_Multicast;
}
// Method Definition Index: 82868
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteValueDelegate_Invoke_m0564D8EC115C4993BC58DE67D5F437FDF1CBB7DE_gshared (WriteValueDelegate_t87086BD0A9A6D2BE7452749D920C58B9607894C7* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, uint16_t* ___1_value, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, uint16_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_writer, ___1_value, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 82869
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WriteValueDelegate_BeginInvoke_mE3424F497F3C2909575182BF6921789D0E11AE5B_gshared (WriteValueDelegate_t87086BD0A9A6D2BE7452749D920C58B9607894C7* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, uint16_t* ___1_value, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___2_callback, RuntimeObject* ___3_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var, &___0_writer);
	__d_args[1] = Box(il2cpp_defaults.uint16_class, &*___1_value);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___2_callback, (RuntimeObject*)___3_object);
}
// Method Definition Index: 82870
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteValueDelegate_EndInvoke_m659C53890BF735CEA1155FCC4E60BBA4A7D00A1D_gshared (WriteValueDelegate_t87086BD0A9A6D2BE7452749D920C58B9607894C7* __this, uint16_t* ___0_value, RuntimeObject* ___1_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___1_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void WriteValueDelegate_Invoke_mF5492FB2D8C552D47C9644CB9CE1104C8A57B430_Multicast(WriteValueDelegate_t88B6EFBB7B972D83905C56799D5DF8EAE16F41E5* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, uint16_t* ___1_value, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		WriteValueDelegate_t88B6EFBB7B972D83905C56799D5DF8EAE16F41E5* currentDelegate = reinterpret_cast<WriteValueDelegate_t88B6EFBB7B972D83905C56799D5DF8EAE16F41E5*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, uint16_t*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_writer, ___1_value, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void WriteValueDelegate_Invoke_mF5492FB2D8C552D47C9644CB9CE1104C8A57B430_OpenInst(WriteValueDelegate_t88B6EFBB7B972D83905C56799D5DF8EAE16F41E5* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, uint16_t* ___1_value, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, uint16_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_writer, ___1_value, method);
}
void WriteValueDelegate_Invoke_mF5492FB2D8C552D47C9644CB9CE1104C8A57B430_OpenStatic(WriteValueDelegate_t88B6EFBB7B972D83905C56799D5DF8EAE16F41E5* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, uint16_t* ___1_value, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, uint16_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_writer, ___1_value, method);
}
// Method Definition Index: 82867
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteValueDelegate__ctor_mE87EEE7DFAFC1EE84438F24A1173DBB4D8B185A6_gshared (WriteValueDelegate_t88B6EFBB7B972D83905C56799D5DF8EAE16F41E5* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&WriteValueDelegate_Invoke_mF5492FB2D8C552D47C9644CB9CE1104C8A57B430_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl = __this->___method_ptr;
		__this->___method_code = (intptr_t)__this->___m_target;
	}
	__this->___extra_arg = (intptr_t)&WriteValueDelegate_Invoke_mF5492FB2D8C552D47C9644CB9CE1104C8A57B430_Multicast;
}
// Method Definition Index: 82868
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteValueDelegate_Invoke_mF5492FB2D8C552D47C9644CB9CE1104C8A57B430_gshared (WriteValueDelegate_t88B6EFBB7B972D83905C56799D5DF8EAE16F41E5* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, uint16_t* ___1_value, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, uint16_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_writer, ___1_value, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 82869
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WriteValueDelegate_BeginInvoke_mD22B392BC53EA6798D1597DE2EC2FD8F6BEA63C2_gshared (WriteValueDelegate_t88B6EFBB7B972D83905C56799D5DF8EAE16F41E5* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, uint16_t* ___1_value, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___2_callback, RuntimeObject* ___3_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16Enum_t481D129F5FAE551E8684190D640F0FAEFB237CF8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var, &___0_writer);
	__d_args[1] = Box(UInt16Enum_t481D129F5FAE551E8684190D640F0FAEFB237CF8_il2cpp_TypeInfo_var, &*___1_value);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___2_callback, (RuntimeObject*)___3_object);
}
// Method Definition Index: 82870
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteValueDelegate_EndInvoke_mB3A5E0E43360FC81595075320DAFADAF6775918F_gshared (WriteValueDelegate_t88B6EFBB7B972D83905C56799D5DF8EAE16F41E5* __this, uint16_t* ___0_value, RuntimeObject* ___1_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___1_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void WriteValueDelegate_Invoke_mA5618AB69B33125B3BD9ACD7DAE5C4C9E28185E9_Multicast(WriteValueDelegate_t68E2A03463D6DCF3C833BDAB83CFC16ED78E1CD8* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, uint32_t* ___1_value, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		WriteValueDelegate_t68E2A03463D6DCF3C833BDAB83CFC16ED78E1CD8* currentDelegate = reinterpret_cast<WriteValueDelegate_t68E2A03463D6DCF3C833BDAB83CFC16ED78E1CD8*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, uint32_t*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_writer, ___1_value, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void WriteValueDelegate_Invoke_mA5618AB69B33125B3BD9ACD7DAE5C4C9E28185E9_OpenInst(WriteValueDelegate_t68E2A03463D6DCF3C833BDAB83CFC16ED78E1CD8* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, uint32_t* ___1_value, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, uint32_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_writer, ___1_value, method);
}
void WriteValueDelegate_Invoke_mA5618AB69B33125B3BD9ACD7DAE5C4C9E28185E9_OpenStatic(WriteValueDelegate_t68E2A03463D6DCF3C833BDAB83CFC16ED78E1CD8* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, uint32_t* ___1_value, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, uint32_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_writer, ___1_value, method);
}
// Method Definition Index: 82867
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteValueDelegate__ctor_mCF49434F2EF4CD68D67416F00F7065442879AC61_gshared (WriteValueDelegate_t68E2A03463D6DCF3C833BDAB83CFC16ED78E1CD8* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&WriteValueDelegate_Invoke_mA5618AB69B33125B3BD9ACD7DAE5C4C9E28185E9_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl = __this->___method_ptr;
		__this->___method_code = (intptr_t)__this->___m_target;
	}
	__this->___extra_arg = (intptr_t)&WriteValueDelegate_Invoke_mA5618AB69B33125B3BD9ACD7DAE5C4C9E28185E9_Multicast;
}
// Method Definition Index: 82868
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteValueDelegate_Invoke_mA5618AB69B33125B3BD9ACD7DAE5C4C9E28185E9_gshared (WriteValueDelegate_t68E2A03463D6DCF3C833BDAB83CFC16ED78E1CD8* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, uint32_t* ___1_value, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, uint32_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_writer, ___1_value, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 82869
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WriteValueDelegate_BeginInvoke_m2FE001B6475D1CD372259B735F5D242DCC00DEFB_gshared (WriteValueDelegate_t68E2A03463D6DCF3C833BDAB83CFC16ED78E1CD8* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, uint32_t* ___1_value, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___2_callback, RuntimeObject* ___3_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var, &___0_writer);
	__d_args[1] = Box(il2cpp_defaults.uint32_class, &*___1_value);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___2_callback, (RuntimeObject*)___3_object);
}
// Method Definition Index: 82870
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteValueDelegate_EndInvoke_mACF19CED859A3508BCB3808CAF29B72EF4DB251C_gshared (WriteValueDelegate_t68E2A03463D6DCF3C833BDAB83CFC16ED78E1CD8* __this, uint32_t* ___0_value, RuntimeObject* ___1_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___1_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void WriteValueDelegate_Invoke_m3CE85CA817583FB05B8DA387992D6A50E0E0AAE1_Multicast(WriteValueDelegate_t20F1B1986CAED121C12F30E899A29DC0906C4931* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, uint64_t* ___1_value, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		WriteValueDelegate_t20F1B1986CAED121C12F30E899A29DC0906C4931* currentDelegate = reinterpret_cast<WriteValueDelegate_t20F1B1986CAED121C12F30E899A29DC0906C4931*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, uint64_t*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_writer, ___1_value, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void WriteValueDelegate_Invoke_m3CE85CA817583FB05B8DA387992D6A50E0E0AAE1_OpenInst(WriteValueDelegate_t20F1B1986CAED121C12F30E899A29DC0906C4931* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, uint64_t* ___1_value, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, uint64_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_writer, ___1_value, method);
}
void WriteValueDelegate_Invoke_m3CE85CA817583FB05B8DA387992D6A50E0E0AAE1_OpenStatic(WriteValueDelegate_t20F1B1986CAED121C12F30E899A29DC0906C4931* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, uint64_t* ___1_value, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, uint64_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_writer, ___1_value, method);
}
// Method Definition Index: 82867
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteValueDelegate__ctor_mC5DEEFC6D8BF86C45FB469C085953FDEC6DE721F_gshared (WriteValueDelegate_t20F1B1986CAED121C12F30E899A29DC0906C4931* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&WriteValueDelegate_Invoke_m3CE85CA817583FB05B8DA387992D6A50E0E0AAE1_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl = __this->___method_ptr;
		__this->___method_code = (intptr_t)__this->___m_target;
	}
	__this->___extra_arg = (intptr_t)&WriteValueDelegate_Invoke_m3CE85CA817583FB05B8DA387992D6A50E0E0AAE1_Multicast;
}
// Method Definition Index: 82868
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteValueDelegate_Invoke_m3CE85CA817583FB05B8DA387992D6A50E0E0AAE1_gshared (WriteValueDelegate_t20F1B1986CAED121C12F30E899A29DC0906C4931* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, uint64_t* ___1_value, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, uint64_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_writer, ___1_value, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 82869
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WriteValueDelegate_BeginInvoke_m4FF30188D167427F1C0A30AFABDE6B57F9E8C87C_gshared (WriteValueDelegate_t20F1B1986CAED121C12F30E899A29DC0906C4931* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, uint64_t* ___1_value, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___2_callback, RuntimeObject* ___3_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var, &___0_writer);
	__d_args[1] = Box(il2cpp_defaults.uint64_class, &*___1_value);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___2_callback, (RuntimeObject*)___3_object);
}
// Method Definition Index: 82870
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteValueDelegate_EndInvoke_m5CC607B3A11C4B7FE12838494C316EFE4F4A2B33_gshared (WriteValueDelegate_t20F1B1986CAED121C12F30E899A29DC0906C4931* __this, uint64_t* ___0_value, RuntimeObject* ___1_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___1_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void WriteValueDelegate_Invoke_m504A632CFD68DD358B52131FC26D65AB64FDD695_Multicast(WriteValueDelegate_tEB628C298806C5A8F41B790FB23343AFABA232B8* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, UserPlayerData_tB7F0676C35AAB963313E190E7D7B97BDE5AA22D6* ___1_value, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		WriteValueDelegate_tEB628C298806C5A8F41B790FB23343AFABA232B8* currentDelegate = reinterpret_cast<WriteValueDelegate_tEB628C298806C5A8F41B790FB23343AFABA232B8*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, UserPlayerData_tB7F0676C35AAB963313E190E7D7B97BDE5AA22D6*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_writer, ___1_value, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void WriteValueDelegate_Invoke_m504A632CFD68DD358B52131FC26D65AB64FDD695_OpenInst(WriteValueDelegate_tEB628C298806C5A8F41B790FB23343AFABA232B8* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, UserPlayerData_tB7F0676C35AAB963313E190E7D7B97BDE5AA22D6* ___1_value, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, UserPlayerData_tB7F0676C35AAB963313E190E7D7B97BDE5AA22D6*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_writer, ___1_value, method);
}
void WriteValueDelegate_Invoke_m504A632CFD68DD358B52131FC26D65AB64FDD695_OpenStatic(WriteValueDelegate_tEB628C298806C5A8F41B790FB23343AFABA232B8* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, UserPlayerData_tB7F0676C35AAB963313E190E7D7B97BDE5AA22D6* ___1_value, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, UserPlayerData_tB7F0676C35AAB963313E190E7D7B97BDE5AA22D6*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_writer, ___1_value, method);
}
// Method Definition Index: 82867
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteValueDelegate__ctor_m5FE3F493B3A3AD20792B630CFC276BBF71A5B2B7_gshared (WriteValueDelegate_tEB628C298806C5A8F41B790FB23343AFABA232B8* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&WriteValueDelegate_Invoke_m504A632CFD68DD358B52131FC26D65AB64FDD695_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl = __this->___method_ptr;
		__this->___method_code = (intptr_t)__this->___m_target;
	}
	__this->___extra_arg = (intptr_t)&WriteValueDelegate_Invoke_m504A632CFD68DD358B52131FC26D65AB64FDD695_Multicast;
}
// Method Definition Index: 82868
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteValueDelegate_Invoke_m504A632CFD68DD358B52131FC26D65AB64FDD695_gshared (WriteValueDelegate_tEB628C298806C5A8F41B790FB23343AFABA232B8* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, UserPlayerData_tB7F0676C35AAB963313E190E7D7B97BDE5AA22D6* ___1_value, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, UserPlayerData_tB7F0676C35AAB963313E190E7D7B97BDE5AA22D6*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_writer, ___1_value, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 82869
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WriteValueDelegate_BeginInvoke_m50479E7E3D64231F44F4362DEFCF28A0C449E66E_gshared (WriteValueDelegate_tEB628C298806C5A8F41B790FB23343AFABA232B8* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, UserPlayerData_tB7F0676C35AAB963313E190E7D7B97BDE5AA22D6* ___1_value, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___2_callback, RuntimeObject* ___3_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UserPlayerData_tB7F0676C35AAB963313E190E7D7B97BDE5AA22D6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var, &___0_writer);
	__d_args[1] = Box(UserPlayerData_tB7F0676C35AAB963313E190E7D7B97BDE5AA22D6_il2cpp_TypeInfo_var, &*___1_value);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___2_callback, (RuntimeObject*)___3_object);
}
// Method Definition Index: 82870
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteValueDelegate_EndInvoke_mD7BBE26E8B42E603D9FE4A3D8348E46FFF704156_gshared (WriteValueDelegate_tEB628C298806C5A8F41B790FB23343AFABA232B8* __this, UserPlayerData_tB7F0676C35AAB963313E190E7D7B97BDE5AA22D6* ___0_value, RuntimeObject* ___1_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___1_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void WriteValueDelegate_Invoke_mCE3912BD2527BB7D6541E11876DE967BFBD2E004_Multicast(WriteValueDelegate_t8C465CFC206065169E9FE05E506A75847A375644* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, Il2CppFullySharedGenericAny* ___1_value, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		WriteValueDelegate_t8C465CFC206065169E9FE05E506A75847A375644* currentDelegate = reinterpret_cast<WriteValueDelegate_t8C465CFC206065169E9FE05E506A75847A375644*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, Il2CppFullySharedGenericAny*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_writer, ___1_value, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void WriteValueDelegate_Invoke_mCE3912BD2527BB7D6541E11876DE967BFBD2E004_OpenInst(WriteValueDelegate_t8C465CFC206065169E9FE05E506A75847A375644* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, Il2CppFullySharedGenericAny* ___1_value, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, Il2CppFullySharedGenericAny*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_writer, ___1_value, method);
}
void WriteValueDelegate_Invoke_mCE3912BD2527BB7D6541E11876DE967BFBD2E004_OpenStatic(WriteValueDelegate_t8C465CFC206065169E9FE05E506A75847A375644* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, Il2CppFullySharedGenericAny* ___1_value, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, Il2CppFullySharedGenericAny*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_writer, ___1_value, method);
}
// Method Definition Index: 82867
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteValueDelegate__ctor_m4E8591BECCC6A7A2AB9E3D82BB9F7316FA67BE71_gshared (WriteValueDelegate_t8C465CFC206065169E9FE05E506A75847A375644* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&WriteValueDelegate_Invoke_mCE3912BD2527BB7D6541E11876DE967BFBD2E004_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl = __this->___method_ptr;
		__this->___method_code = (intptr_t)__this->___m_target;
	}
	__this->___extra_arg = (intptr_t)&WriteValueDelegate_Invoke_mCE3912BD2527BB7D6541E11876DE967BFBD2E004_Multicast;
}
// Method Definition Index: 82868
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteValueDelegate_Invoke_mCE3912BD2527BB7D6541E11876DE967BFBD2E004_gshared (WriteValueDelegate_t8C465CFC206065169E9FE05E506A75847A375644* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, Il2CppFullySharedGenericAny* ___1_value, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, Il2CppFullySharedGenericAny*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_writer, ___1_value, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 82869
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WriteValueDelegate_BeginInvoke_m30407310776BF5262D0D1B658E694AEE8BE6BF0F_gshared (WriteValueDelegate_t8C465CFC206065169E9FE05E506A75847A375644* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, Il2CppFullySharedGenericAny* ___1_value, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___2_callback, RuntimeObject* ___3_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var, &___0_writer);
	RuntimeClass* ___1_value_klass = il2cpp_codegen_class_from_type(il2cpp_codegen_method_parameter_type((MethodInfo*)__this->___method, 1));
	__d_args[1] = (il2cpp_codegen_class_is_value_type(___1_value_klass) ? Box(___1_value_klass, ___1_value) : (void*)*___1_value);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___2_callback, (RuntimeObject*)___3_object);
}
// Method Definition Index: 82870
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteValueDelegate_EndInvoke_m47699478A1258D766F3CBA57EF7E6726759AA13E_gshared (WriteValueDelegate_t8C465CFC206065169E9FE05E506A75847A375644* __this, Il2CppFullySharedGenericAny* ___0_value, RuntimeObject* ___1_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___1_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void WriteValueDelegate_Invoke_m1582E2F4245301E763A99C2CDAAC5C6AAAADF5D3_Multicast(WriteValueDelegate_t89E6668DF3B1C0A458B6747B41C5D177FD14C351* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, PlayerStackData_tE3EBF2B06FF3A7096CBE57912B5D47E76A78F529* ___1_value, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		WriteValueDelegate_t89E6668DF3B1C0A458B6747B41C5D177FD14C351* currentDelegate = reinterpret_cast<WriteValueDelegate_t89E6668DF3B1C0A458B6747B41C5D177FD14C351*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, PlayerStackData_tE3EBF2B06FF3A7096CBE57912B5D47E76A78F529*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_writer, ___1_value, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void WriteValueDelegate_Invoke_m1582E2F4245301E763A99C2CDAAC5C6AAAADF5D3_OpenInst(WriteValueDelegate_t89E6668DF3B1C0A458B6747B41C5D177FD14C351* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, PlayerStackData_tE3EBF2B06FF3A7096CBE57912B5D47E76A78F529* ___1_value, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, PlayerStackData_tE3EBF2B06FF3A7096CBE57912B5D47E76A78F529*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_writer, ___1_value, method);
}
void WriteValueDelegate_Invoke_m1582E2F4245301E763A99C2CDAAC5C6AAAADF5D3_OpenStatic(WriteValueDelegate_t89E6668DF3B1C0A458B6747B41C5D177FD14C351* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, PlayerStackData_tE3EBF2B06FF3A7096CBE57912B5D47E76A78F529* ___1_value, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, PlayerStackData_tE3EBF2B06FF3A7096CBE57912B5D47E76A78F529*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_writer, ___1_value, method);
}
// Method Definition Index: 82867
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteValueDelegate__ctor_mFC9D84CEEE353F96655B56C5951EE35044762908_gshared (WriteValueDelegate_t89E6668DF3B1C0A458B6747B41C5D177FD14C351* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&WriteValueDelegate_Invoke_m1582E2F4245301E763A99C2CDAAC5C6AAAADF5D3_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl = __this->___method_ptr;
		__this->___method_code = (intptr_t)__this->___m_target;
	}
	__this->___extra_arg = (intptr_t)&WriteValueDelegate_Invoke_m1582E2F4245301E763A99C2CDAAC5C6AAAADF5D3_Multicast;
}
// Method Definition Index: 82868
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteValueDelegate_Invoke_m1582E2F4245301E763A99C2CDAAC5C6AAAADF5D3_gshared (WriteValueDelegate_t89E6668DF3B1C0A458B6747B41C5D177FD14C351* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, PlayerStackData_tE3EBF2B06FF3A7096CBE57912B5D47E76A78F529* ___1_value, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, PlayerStackData_tE3EBF2B06FF3A7096CBE57912B5D47E76A78F529*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_writer, ___1_value, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 82869
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WriteValueDelegate_BeginInvoke_m606ACA71CF6D62D889CA8DD9F29998A6087359F8_gshared (WriteValueDelegate_t89E6668DF3B1C0A458B6747B41C5D177FD14C351* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, PlayerStackData_tE3EBF2B06FF3A7096CBE57912B5D47E76A78F529* ___1_value, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___2_callback, RuntimeObject* ___3_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerStackData_tE3EBF2B06FF3A7096CBE57912B5D47E76A78F529_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var, &___0_writer);
	__d_args[1] = Box(PlayerStackData_tE3EBF2B06FF3A7096CBE57912B5D47E76A78F529_il2cpp_TypeInfo_var, &*___1_value);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___2_callback, (RuntimeObject*)___3_object);
}
// Method Definition Index: 82870
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteValueDelegate_EndInvoke_m1A0AF229EF263E688C3A2F64C93B1BE5FD727DD3_gshared (WriteValueDelegate_t89E6668DF3B1C0A458B6747B41C5D177FD14C351* __this, PlayerStackData_tE3EBF2B06FF3A7096CBE57912B5D47E76A78F529* ___0_value, RuntimeObject* ___1_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___1_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void WriteValueDelegate_Invoke_m384BAA9C41D5FD1548B46C6C0991DCE00D56DADC_Multicast(WriteValueDelegate_t49F65B2D9C5E28CC45790864AE8F1B4F00F1E203* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, NetworkTransformState_tCCC77820160AFE28825DDD9C3F090B523CA8F5ED* ___1_value, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		WriteValueDelegate_t49F65B2D9C5E28CC45790864AE8F1B4F00F1E203* currentDelegate = reinterpret_cast<WriteValueDelegate_t49F65B2D9C5E28CC45790864AE8F1B4F00F1E203*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, NetworkTransformState_tCCC77820160AFE28825DDD9C3F090B523CA8F5ED*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_writer, ___1_value, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void WriteValueDelegate_Invoke_m384BAA9C41D5FD1548B46C6C0991DCE00D56DADC_OpenInst(WriteValueDelegate_t49F65B2D9C5E28CC45790864AE8F1B4F00F1E203* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, NetworkTransformState_tCCC77820160AFE28825DDD9C3F090B523CA8F5ED* ___1_value, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, NetworkTransformState_tCCC77820160AFE28825DDD9C3F090B523CA8F5ED*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_writer, ___1_value, method);
}
void WriteValueDelegate_Invoke_m384BAA9C41D5FD1548B46C6C0991DCE00D56DADC_OpenStatic(WriteValueDelegate_t49F65B2D9C5E28CC45790864AE8F1B4F00F1E203* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, NetworkTransformState_tCCC77820160AFE28825DDD9C3F090B523CA8F5ED* ___1_value, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, NetworkTransformState_tCCC77820160AFE28825DDD9C3F090B523CA8F5ED*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_writer, ___1_value, method);
}
// Method Definition Index: 82867
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteValueDelegate__ctor_mEB4DAC5704AE3415E042856641F65A324695B73D_gshared (WriteValueDelegate_t49F65B2D9C5E28CC45790864AE8F1B4F00F1E203* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&WriteValueDelegate_Invoke_m384BAA9C41D5FD1548B46C6C0991DCE00D56DADC_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl = __this->___method_ptr;
		__this->___method_code = (intptr_t)__this->___m_target;
	}
	__this->___extra_arg = (intptr_t)&WriteValueDelegate_Invoke_m384BAA9C41D5FD1548B46C6C0991DCE00D56DADC_Multicast;
}
// Method Definition Index: 82868
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteValueDelegate_Invoke_m384BAA9C41D5FD1548B46C6C0991DCE00D56DADC_gshared (WriteValueDelegate_t49F65B2D9C5E28CC45790864AE8F1B4F00F1E203* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, NetworkTransformState_tCCC77820160AFE28825DDD9C3F090B523CA8F5ED* ___1_value, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, NetworkTransformState_tCCC77820160AFE28825DDD9C3F090B523CA8F5ED*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_writer, ___1_value, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 82869
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WriteValueDelegate_BeginInvoke_m7A45173810E4FF27603D72ED2B14106BA964180E_gshared (WriteValueDelegate_t49F65B2D9C5E28CC45790864AE8F1B4F00F1E203* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, NetworkTransformState_tCCC77820160AFE28825DDD9C3F090B523CA8F5ED* ___1_value, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___2_callback, RuntimeObject* ___3_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkTransformState_tCCC77820160AFE28825DDD9C3F090B523CA8F5ED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var, &___0_writer);
	__d_args[1] = Box(NetworkTransformState_tCCC77820160AFE28825DDD9C3F090B523CA8F5ED_il2cpp_TypeInfo_var, &*___1_value);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___2_callback, (RuntimeObject*)___3_object);
}
// Method Definition Index: 82870
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteValueDelegate_EndInvoke_m57F0485B4D00320C7744D56230CFE77110304A12_gshared (WriteValueDelegate_t49F65B2D9C5E28CC45790864AE8F1B4F00F1E203* __this, NetworkTransformState_tCCC77820160AFE28825DDD9C3F090B523CA8F5ED* ___0_value, RuntimeObject* ___1_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___1_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 129620
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XHashtableState__ctor_m37E975C296D7D8CDF9ACAA9ABD7C4A0C82C427D3_gshared (XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* __this, ExtractKeyDelegate_t9BADAD4BDEEE5FEB8CBD095F1EA307C3DA921583* ___0_extractKey, int32_t ___1_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___1_capacity;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		__this->____buckets = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_1);
		int32_t L_2 = ___1_capacity;
		EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635* L_3 = (EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635*)(EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 1), (uint32_t)L_2);
		__this->____entries = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_3);
		ExtractKeyDelegate_t9BADAD4BDEEE5FEB8CBD095F1EA307C3DA921583* L_4 = ___0_extractKey;
		__this->____extractKey = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____extractKey), (void*)L_4);
		return;
	}
}
// Method Definition Index: 129621
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* XHashtableState_Resize_mDB3BA5C327EF6A86F6CE58B59E1D7430E62532C5_gshared (XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	{
		int32_t L_0 = __this->____numEntries;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		NullCheck(L_1);
		if ((((int32_t)L_0) >= ((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length)))))
		{
			goto IL_0012;
		}
	}
	{
		return __this;
	}

IL_0012:
	{
		V_0 = 0;
		V_2 = 0;
		goto IL_00a7;
	}

IL_001b:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		int32_t L_3 = V_2;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		int32_t L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_3 = L_5;
		int32_t L_6 = V_3;
		if (L_6)
		{
			goto IL_009f;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = __this->____buckets;
		int32_t L_8 = V_2;
		NullCheck(L_7);
		int32_t L_9;
		L_9 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717(((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8))), (-1), 0, NULL);
		V_3 = L_9;
		goto IL_009f;
	}

IL_003d:
	{
		ExtractKeyDelegate_t9BADAD4BDEEE5FEB8CBD095F1EA307C3DA921583* L_10 = __this->____extractKey;
		EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635* L_11 = __this->____entries;
		int32_t L_12 = V_3;
		NullCheck(L_11);
		RuntimeObject* L_13 = ((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_12)))->___Value;
		NullCheck(L_10);
		String_t* L_14;
		L_14 = ExtractKeyDelegate_Invoke_m3214A3F92C2EB22088AB7738E8DFE1BE70925148_inline(L_10, L_13, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		if (!L_14)
		{
			goto IL_005f;
		}
	}
	{
		int32_t L_15 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_005f:
	{
		EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635* L_16 = __this->____entries;
		int32_t L_17 = V_3;
		NullCheck(L_16);
		int32_t L_18 = ((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)))->___Next;
		if (L_18)
		{
			goto IL_008d;
		}
	}
	{
		EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635* L_19 = __this->____entries;
		int32_t L_20 = V_3;
		NullCheck(L_19);
		int32_t* L_21 = (int32_t*)(&((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)))->___Next);
		int32_t L_22;
		L_22 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717(L_21, (-1), 0, NULL);
		V_3 = L_22;
		goto IL_009f;
	}

IL_008d:
	{
		EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635* L_23 = __this->____entries;
		int32_t L_24 = V_3;
		NullCheck(L_23);
		int32_t L_25 = ((L_23)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_24)))->___Next;
		V_3 = L_25;
	}

IL_009f:
	{
		int32_t L_26 = V_3;
		if ((((int32_t)L_26) > ((int32_t)0)))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_27 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_27, 1));
	}

IL_00a7:
	{
		int32_t L_28 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_29 = __this->____buckets;
		NullCheck(L_29);
		if ((((int32_t)L_28) < ((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length)))))
		{
			goto IL_001b;
		}
	}
	{
		int32_t L_30 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = __this->____buckets;
		NullCheck(L_31);
		if ((((int32_t)L_30) >= ((int32_t)((int32_t)(((int32_t)(((RuntimeArray*)L_31)->max_length))/2)))))
		{
			goto IL_00cd;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_32 = __this->____buckets;
		NullCheck(L_32);
		V_0 = ((int32_t)(((RuntimeArray*)L_32)->max_length));
		goto IL_00e2;
	}

IL_00cd:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_33 = __this->____buckets;
		NullCheck(L_33);
		V_0 = ((int32_t)il2cpp_codegen_multiply(((int32_t)(((RuntimeArray*)L_33)->max_length)), 2));
		int32_t L_34 = V_0;
		if ((((int32_t)L_34) >= ((int32_t)0)))
		{
			goto IL_00e2;
		}
	}
	{
		OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C* L_35 = (OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C_il2cpp_TypeInfo_var)));
		OverflowException__ctor_m7F6A928C9BE47384586BDDE8B4B87666421E0F1A(L_35, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_35, method);
	}

IL_00e2:
	{
		ExtractKeyDelegate_t9BADAD4BDEEE5FEB8CBD095F1EA307C3DA921583* L_36 = __this->____extractKey;
		int32_t L_37 = V_0;
		XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* L_38 = (XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 0));
		XHashtableState__ctor_m37E975C296D7D8CDF9ACAA9ABD7C4A0C82C427D3(L_38, L_36, L_37, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		V_1 = L_38;
		V_4 = 0;
		goto IL_013b;
	}

IL_00f4:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_39 = __this->____buckets;
		int32_t L_40 = V_4;
		NullCheck(L_39);
		int32_t L_41 = L_40;
		int32_t L_42 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		V_5 = L_42;
		goto IL_0130;
	}

IL_0101:
	{
		XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* L_43 = V_1;
		EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635* L_44 = __this->____entries;
		int32_t L_45 = V_5;
		NullCheck(L_44);
		RuntimeObject* L_46 = ((L_44)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_45)))->___Value;
		NullCheck(L_43);
		bool L_47;
		L_47 = XHashtableState_TryAdd_m951A9A914307495745E2B33DB0BA6583FB4060A1(L_43, L_46, (&V_6), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635* L_48 = __this->____entries;
		int32_t L_49 = V_5;
		NullCheck(L_48);
		int32_t L_50 = ((L_48)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_49)))->___Next;
		V_5 = L_50;
	}

IL_0130:
	{
		int32_t L_51 = V_5;
		if ((((int32_t)L_51) > ((int32_t)0)))
		{
			goto IL_0101;
		}
	}
	{
		int32_t L_52 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_52, 1));
	}

IL_013b:
	{
		int32_t L_53 = V_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_54 = __this->____buckets;
		NullCheck(L_54);
		if ((((int32_t)L_53) < ((int32_t)((int32_t)(((RuntimeArray*)L_54)->max_length)))))
		{
			goto IL_00f4;
		}
	}
	{
		XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* L_55 = V_1;
		return L_55;
	}
}
// Method Definition Index: 129622
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XHashtableState_TryGetValue_m22BFB31B1A4E2CEDE4CA7133F4A0B50B9E514308_gshared (XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* __this, String_t* ___0_key, int32_t ___1_index, int32_t ___2_count, RuntimeObject** ___3_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		String_t* L_0 = ___0_key;
		int32_t L_1 = ___1_index;
		int32_t L_2 = ___2_count;
		int32_t L_3;
		L_3 = XHashtableState_ComputeHashCode_mD58A823B4A09F8DB93853EA9536E6B457B59F1B1(L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_0 = L_3;
		V_1 = 0;
		int32_t L_4 = V_0;
		String_t* L_5 = ___0_key;
		int32_t L_6 = ___1_index;
		int32_t L_7 = ___2_count;
		bool L_8;
		L_8 = XHashtableState_FindEntry_m3AC0430564190D3FCAD9A8DB1DD0E725F7392A91(__this, L_4, L_5, L_6, L_7, (&V_1), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if (!L_8)
		{
			goto IL_0033;
		}
	}
	{
		RuntimeObject** L_9 = ___3_value;
		EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635* L_10 = __this->____entries;
		int32_t L_11 = V_1;
		NullCheck(L_10);
		RuntimeObject* L_12 = ((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->___Value;
		*(RuntimeObject**)L_9 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_9, (void*)L_12);
		return (bool)1;
	}

IL_0033:
	{
		RuntimeObject** L_13 = ___3_value;
		il2cpp_codegen_initobj(L_13, sizeof(RuntimeObject*));
		return (bool)0;
	}
}
// Method Definition Index: 129623
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XHashtableState_TryAdd_m951A9A914307495745E2B33DB0BA6583FB4060A1_gshared (XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* __this, RuntimeObject* ___0_value, RuntimeObject** ___1_newValue, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	int32_t V_3 = 0;
	{
		RuntimeObject** L_0 = ___1_newValue;
		RuntimeObject* L_1 = ___0_value;
		*(RuntimeObject**)L_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_0, (void*)L_1);
		ExtractKeyDelegate_t9BADAD4BDEEE5FEB8CBD095F1EA307C3DA921583* L_2 = __this->____extractKey;
		RuntimeObject* L_3 = ___0_value;
		NullCheck(L_2);
		String_t* L_4;
		L_4 = ExtractKeyDelegate_Invoke_m3214A3F92C2EB22088AB7738E8DFE1BE70925148_inline(L_2, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		V_2 = L_4;
		String_t* L_5 = V_2;
		if (L_5)
		{
			goto IL_0019;
		}
	}
	{
		return (bool)1;
	}

IL_0019:
	{
		String_t* L_6 = V_2;
		String_t* L_7 = V_2;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_7, NULL);
		int32_t L_9;
		L_9 = XHashtableState_ComputeHashCode_mD58A823B4A09F8DB93853EA9536E6B457B59F1B1(L_6, 0, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_3 = L_9;
		int32_t* L_10 = (int32_t*)(&__this->____numEntries);
		int32_t L_11;
		L_11 = Interlocked_Increment_m3C240C32E8D9544EC050B74D4F28EEB58F1F9309(L_10, NULL);
		V_0 = L_11;
		int32_t L_12 = V_0;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_0042;
		}
	}
	{
		int32_t L_13 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = __this->____buckets;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_0044;
		}
	}

IL_0042:
	{
		return (bool)0;
	}

IL_0044:
	{
		EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635* L_15 = __this->____entries;
		int32_t L_16 = V_0;
		NullCheck(L_15);
		RuntimeObject* L_17 = ___0_value;
		((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___Value = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___Value), (void*)L_17);
		EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635* L_18 = __this->____entries;
		int32_t L_19 = V_0;
		NullCheck(L_18);
		int32_t L_20 = V_3;
		((L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_19)))->___HashCode = L_20;
		Thread_MemoryBarrier_m83873F1E6CEB16C0781941141382DA874A36097D(NULL);
		V_1 = 0;
		goto IL_00b7;
	}

IL_0071:
	{
		int32_t L_21 = V_1;
		if (L_21)
		{
			goto IL_0095;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_22 = __this->____buckets;
		int32_t L_23 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_24 = __this->____buckets;
		NullCheck(L_24);
		NullCheck(L_22);
		int32_t L_25 = V_0;
		int32_t L_26;
		L_26 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717(((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_23&((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_24)->max_length)), 1))))))), L_25, 0, NULL);
		V_1 = L_26;
		goto IL_00ae;
	}

IL_0095:
	{
		EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635* L_27 = __this->____entries;
		int32_t L_28 = V_1;
		NullCheck(L_27);
		int32_t* L_29 = (int32_t*)(&((L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_28)))->___Next);
		int32_t L_30 = V_0;
		int32_t L_31;
		L_31 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717(L_29, L_30, 0, NULL);
		V_1 = L_31;
	}

IL_00ae:
	{
		int32_t L_32 = V_1;
		if ((((int32_t)L_32) > ((int32_t)0)))
		{
			goto IL_00b7;
		}
	}
	{
		int32_t L_33 = V_1;
		return (bool)((((int32_t)L_33) == ((int32_t)0))? 1 : 0);
	}

IL_00b7:
	{
		int32_t L_34 = V_3;
		String_t* L_35 = V_2;
		String_t* L_36 = V_2;
		NullCheck(L_36);
		int32_t L_37;
		L_37 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_36, NULL);
		bool L_38;
		L_38 = XHashtableState_FindEntry_m3AC0430564190D3FCAD9A8DB1DD0E725F7392A91(__this, L_34, L_35, 0, L_37, (&V_1), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if (!L_38)
		{
			goto IL_0071;
		}
	}
	{
		RuntimeObject** L_39 = ___1_newValue;
		EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635* L_40 = __this->____entries;
		int32_t L_41 = V_1;
		NullCheck(L_40);
		RuntimeObject* L_42 = ((L_40)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_41)))->___Value;
		*(RuntimeObject**)L_39 = L_42;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_39, (void*)L_42);
		return (bool)1;
	}
}
// Method Definition Index: 129624
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XHashtableState_FindEntry_m3AC0430564190D3FCAD9A8DB1DD0E725F7392A91_gshared (XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* __this, int32_t ___0_hashCode, String_t* ___1_key, int32_t ___2_index, int32_t ___3_count, int32_t* ___4_entryIndex, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	{
		int32_t* L_0 = ___4_entryIndex;
		int32_t L_1 = *((int32_t*)L_0);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_0020;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____buckets;
		int32_t L_4 = ___0_hashCode;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = __this->____buckets;
		NullCheck(L_5);
		NullCheck(L_3);
		int32_t L_6 = ((int32_t)(L_4&((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_5)->max_length)), 1))));
		int32_t L_7 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_1 = L_7;
		goto IL_00f9;
	}

IL_0020:
	{
		int32_t L_8 = V_0;
		V_1 = L_8;
		goto IL_00f9;
	}

IL_0027:
	{
		EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635* L_9 = __this->____entries;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = ((L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10)))->___HashCode;
		int32_t L_12 = ___0_hashCode;
		if ((!(((uint32_t)L_11) == ((uint32_t)L_12))))
		{
			goto IL_00e5;
		}
	}
	{
		ExtractKeyDelegate_t9BADAD4BDEEE5FEB8CBD095F1EA307C3DA921583* L_13 = __this->____extractKey;
		EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635* L_14 = __this->____entries;
		int32_t L_15 = V_1;
		NullCheck(L_14);
		RuntimeObject* L_16 = ((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___Value;
		NullCheck(L_13);
		String_t* L_17;
		L_17 = ExtractKeyDelegate_Invoke_m3214A3F92C2EB22088AB7738E8DFE1BE70925148_inline(L_13, L_16, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		V_2 = L_17;
		String_t* L_18 = V_2;
		if (L_18)
		{
			goto IL_00c8;
		}
	}
	{
		EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635* L_19 = __this->____entries;
		int32_t L_20 = V_1;
		NullCheck(L_19);
		int32_t L_21 = ((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)))->___Next;
		if ((((int32_t)L_21) <= ((int32_t)0)))
		{
			goto IL_00e5;
		}
	}
	{
		EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635* L_22 = __this->____entries;
		int32_t L_23 = V_1;
		NullCheck(L_22);
		RuntimeObject** L_24 = (RuntimeObject**)(&((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23)))->___Value);
		il2cpp_codegen_initobj(L_24, sizeof(RuntimeObject*));
		EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635* L_25 = __this->____entries;
		int32_t L_26 = V_1;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___Next;
		V_1 = L_27;
		int32_t L_28 = V_0;
		if (L_28)
		{
			goto IL_00b4;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_29 = __this->____buckets;
		int32_t L_30 = ___0_hashCode;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = __this->____buckets;
		NullCheck(L_31);
		int32_t L_32 = V_1;
		NullCheck(L_29);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_30&((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_31)->max_length)), 1))))), (int32_t)L_32);
		goto IL_00f9;
	}

IL_00b4:
	{
		EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635* L_33 = __this->____entries;
		int32_t L_34 = V_0;
		NullCheck(L_33);
		int32_t L_35 = V_1;
		((L_33)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_34)))->___Next = L_35;
		goto IL_00f9;
	}

IL_00c8:
	{
		int32_t L_36 = ___3_count;
		String_t* L_37 = V_2;
		NullCheck(L_37);
		int32_t L_38;
		L_38 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_37, NULL);
		if ((!(((uint32_t)L_36) == ((uint32_t)L_38))))
		{
			goto IL_00e5;
		}
	}
	{
		String_t* L_39 = ___1_key;
		int32_t L_40 = ___2_index;
		String_t* L_41 = V_2;
		int32_t L_42 = ___3_count;
		int32_t L_43;
		L_43 = String_CompareOrdinal_m8940CFAE90021ED8DA3F2DF8226941C9EEB2E32D(L_39, L_40, L_41, 0, L_42, NULL);
		if (L_43)
		{
			goto IL_00e5;
		}
	}
	{
		int32_t* L_44 = ___4_entryIndex;
		int32_t L_45 = V_1;
		*((int32_t*)L_44) = (int32_t)L_45;
		return (bool)1;
	}

IL_00e5:
	{
		int32_t L_46 = V_1;
		V_0 = L_46;
		EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635* L_47 = __this->____entries;
		int32_t L_48 = V_1;
		NullCheck(L_47);
		int32_t L_49 = ((L_47)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_48)))->___Next;
		V_1 = L_49;
	}

IL_00f9:
	{
		int32_t L_50 = V_1;
		if ((((int32_t)L_50) > ((int32_t)0)))
		{
			goto IL_0027;
		}
	}
	{
		int32_t* L_51 = ___4_entryIndex;
		int32_t L_52 = V_0;
		*((int32_t*)L_51) = (int32_t)L_52;
		return (bool)0;
	}
}
// Method Definition Index: 129625
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XHashtableState_ComputeHashCode_mD58A823B4A09F8DB93853EA9536E6B457B59F1B1_gshared (String_t* ___0_key, int32_t ___1_index, int32_t ___2_count, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		V_0 = ((int32_t)352654597);
		int32_t L_0 = ___1_index;
		int32_t L_1 = ___2_count;
		V_1 = ((int32_t)il2cpp_codegen_add(L_0, L_1));
		int32_t L_2 = ___1_index;
		V_2 = L_2;
		goto IL_0020;
	}

IL_000e:
	{
		int32_t L_3 = V_0;
		int32_t L_4 = V_0;
		String_t* L_5 = ___0_key;
		int32_t L_6 = V_2;
		NullCheck(L_5);
		Il2CppChar L_7;
		L_7 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_5, L_6, NULL);
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, ((int32_t)(((int32_t)(L_4<<7))^(int32_t)L_7))));
		int32_t L_8 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_0020:
	{
		int32_t L_9 = V_2;
		int32_t L_10 = V_1;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_000e;
		}
	}
	{
		int32_t L_11 = V_0;
		int32_t L_12 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_11, ((int32_t)(L_12>>((int32_t)17)))));
		int32_t L_13 = V_0;
		int32_t L_14 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_13, ((int32_t)(L_14>>((int32_t)11)))));
		int32_t L_15 = V_0;
		int32_t L_16 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_15, ((int32_t)(L_16>>5))));
		int32_t L_17 = V_0;
		return ((int32_t)(L_17&((int32_t)2147483647LL)));
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
// Method Definition Index: 129620
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XHashtableState__ctor_mC2ED3CAB78829509332331B146E7165C58D3DD0F_gshared (XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D* __this, ExtractKeyDelegate_t0FCB0690B76E40F52DC9D05708A8FC488624E3CD* ___0_extractKey, int32_t ___1_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___1_capacity;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		__this->____buckets = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_1);
		int32_t L_2 = ___1_capacity;
		EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4* L_3 = (EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4*)(EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 1), (uint32_t)L_2);
		__this->____entries = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_3);
		ExtractKeyDelegate_t0FCB0690B76E40F52DC9D05708A8FC488624E3CD* L_4 = ___0_extractKey;
		__this->____extractKey = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____extractKey), (void*)L_4);
		return;
	}
}
// Method Definition Index: 129621
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D* XHashtableState_Resize_m3CD152F50AD9E53B808C9B1CEC069D894A621202_gshared (XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_tE0E843520D1B6FE8622D14458F0B584A2B7BCD70 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5));
	const Il2CppFullySharedGenericAny L_13 = alloca(SizeOf_TValue_tE0E843520D1B6FE8622D14458F0B584A2B7BCD70);
	const Il2CppFullySharedGenericAny L_45 = L_13;
	int32_t V_0 = 0;
	XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	Il2CppFullySharedGenericAny V_6 = alloca(SizeOf_TValue_tE0E843520D1B6FE8622D14458F0B584A2B7BCD70);
	memset(V_6, 0, SizeOf_TValue_tE0E843520D1B6FE8622D14458F0B584A2B7BCD70);
	{
		int32_t L_0 = __this->____numEntries;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		NullCheck(L_1);
		if ((((int32_t)L_0) >= ((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length)))))
		{
			goto IL_0012;
		}
	}
	{
		return __this;
	}

IL_0012:
	{
		V_0 = 0;
		V_2 = 0;
		goto IL_00a7;
	}

IL_001b:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		int32_t L_3 = V_2;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		int32_t L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_3 = L_5;
		int32_t L_6 = V_3;
		if (L_6)
		{
			goto IL_009f;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = __this->____buckets;
		int32_t L_8 = V_2;
		NullCheck(L_7);
		int32_t L_9;
		L_9 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717(((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8))), (-1), 0, NULL);
		V_3 = L_9;
		goto IL_009f;
	}

IL_003d:
	{
		ExtractKeyDelegate_t0FCB0690B76E40F52DC9D05708A8FC488624E3CD* L_10 = __this->____extractKey;
		EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4* L_11 = __this->____entries;
		int32_t L_12 = V_3;
		NullCheck(L_11);
		il2cpp_codegen_memcpy(L_13, il2cpp_codegen_get_instance_field_data_pointer(((Entry_t7F8922DC9D131FDA94BF956DD509FC395285A91E*)(L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_12))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4),0)), SizeOf_TValue_tE0E843520D1B6FE8622D14458F0B584A2B7BCD70);
		NullCheck(L_10);
		String_t* L_14;
		L_14 = InvokerFuncInvoker1< String_t*, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)), il2cpp_rgctx_method(method->klass->rgctx_data, 6), L_10, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5)) ? L_13: *(void**)L_13));
		if (!L_14)
		{
			goto IL_005f;
		}
	}
	{
		int32_t L_15 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_005f:
	{
		EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4* L_16 = __this->____entries;
		int32_t L_17 = V_3;
		NullCheck(L_16);
		int32_t L_18 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Entry_t7F8922DC9D131FDA94BF956DD509FC395285A91E*)(L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4),2));
		if (L_18)
		{
			goto IL_008d;
		}
	}
	{
		EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4* L_19 = __this->____entries;
		int32_t L_20 = V_3;
		NullCheck(L_19);
		int32_t L_21;
		L_21 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((((int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Entry_t7F8922DC9D131FDA94BF956DD509FC395285A91E*)(L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4),2)))), (-1), 0, NULL);
		V_3 = L_21;
		goto IL_009f;
	}

IL_008d:
	{
		EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4* L_22 = __this->____entries;
		int32_t L_23 = V_3;
		NullCheck(L_22);
		int32_t L_24 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Entry_t7F8922DC9D131FDA94BF956DD509FC395285A91E*)(L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4),2));
		V_3 = L_24;
	}

IL_009f:
	{
		int32_t L_25 = V_3;
		if ((((int32_t)L_25) > ((int32_t)0)))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_26 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_26, 1));
	}

IL_00a7:
	{
		int32_t L_27 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_28 = __this->____buckets;
		NullCheck(L_28);
		if ((((int32_t)L_27) < ((int32_t)((int32_t)(((RuntimeArray*)L_28)->max_length)))))
		{
			goto IL_001b;
		}
	}
	{
		int32_t L_29 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = __this->____buckets;
		NullCheck(L_30);
		if ((((int32_t)L_29) >= ((int32_t)((int32_t)(((int32_t)(((RuntimeArray*)L_30)->max_length))/2)))))
		{
			goto IL_00cd;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = __this->____buckets;
		NullCheck(L_31);
		V_0 = ((int32_t)(((RuntimeArray*)L_31)->max_length));
		goto IL_00e2;
	}

IL_00cd:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_32 = __this->____buckets;
		NullCheck(L_32);
		V_0 = ((int32_t)il2cpp_codegen_multiply(((int32_t)(((RuntimeArray*)L_32)->max_length)), 2));
		int32_t L_33 = V_0;
		if ((((int32_t)L_33) >= ((int32_t)0)))
		{
			goto IL_00e2;
		}
	}
	{
		OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C* L_34 = (OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C_il2cpp_TypeInfo_var)));
		OverflowException__ctor_m7F6A928C9BE47384586BDDE8B4B87666421E0F1A(L_34, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_34, method);
	}

IL_00e2:
	{
		ExtractKeyDelegate_t0FCB0690B76E40F52DC9D05708A8FC488624E3CD* L_35 = __this->____extractKey;
		int32_t L_36 = V_0;
		XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D* L_37 = (XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 0));
		((  void (*) (XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D*, ExtractKeyDelegate_t0FCB0690B76E40F52DC9D05708A8FC488624E3CD*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)))(L_37, L_35, L_36, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		V_1 = L_37;
		V_4 = 0;
		goto IL_013b;
	}

IL_00f4:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_38 = __this->____buckets;
		int32_t L_39 = V_4;
		NullCheck(L_38);
		int32_t L_40 = L_39;
		int32_t L_41 = (L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
		V_5 = L_41;
		goto IL_0130;
	}

IL_0101:
	{
		XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D* L_42 = V_1;
		EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4* L_43 = __this->____entries;
		int32_t L_44 = V_5;
		NullCheck(L_43);
		il2cpp_codegen_memcpy(L_45, il2cpp_codegen_get_instance_field_data_pointer(((Entry_t7F8922DC9D131FDA94BF956DD509FC395285A91E*)(L_43)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_44))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4),0)), SizeOf_TValue_tE0E843520D1B6FE8622D14458F0B584A2B7BCD70);
		NullCheck(L_42);
		bool L_46;
		L_46 = InvokerFuncInvoker2< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)), il2cpp_rgctx_method(method->klass->rgctx_data, 8), L_42, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5)) ? L_45: *(void**)L_45), (Il2CppFullySharedGenericAny*)V_6);
		EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4* L_47 = __this->____entries;
		int32_t L_48 = V_5;
		NullCheck(L_47);
		int32_t L_49 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Entry_t7F8922DC9D131FDA94BF956DD509FC395285A91E*)(L_47)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_48))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4),2));
		V_5 = L_49;
	}

IL_0130:
	{
		int32_t L_50 = V_5;
		if ((((int32_t)L_50) > ((int32_t)0)))
		{
			goto IL_0101;
		}
	}
	{
		int32_t L_51 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_51, 1));
	}

IL_013b:
	{
		int32_t L_52 = V_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_53 = __this->____buckets;
		NullCheck(L_53);
		if ((((int32_t)L_52) < ((int32_t)((int32_t)(((RuntimeArray*)L_53)->max_length)))))
		{
			goto IL_00f4;
		}
	}
	{
		XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D* L_54 = V_1;
		return L_54;
	}
}
// Method Definition Index: 129622
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XHashtableState_TryGetValue_m94EE8AEAE527C34D9D2B86D03E1D04FF867266F3_gshared (XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D* __this, String_t* ___0_key, int32_t ___1_index, int32_t ___2_count, Il2CppFullySharedGenericAny* ___3_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_tE0E843520D1B6FE8622D14458F0B584A2B7BCD70 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5));
	const Il2CppFullySharedGenericAny L_12 = alloca(SizeOf_TValue_tE0E843520D1B6FE8622D14458F0B584A2B7BCD70);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		String_t* L_0 = ___0_key;
		int32_t L_1 = ___1_index;
		int32_t L_2 = ___2_count;
		int32_t L_3;
		L_3 = ((  int32_t (*) (String_t*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_0 = L_3;
		V_1 = 0;
		int32_t L_4 = V_0;
		String_t* L_5 = ___0_key;
		int32_t L_6 = ___1_index;
		int32_t L_7 = ___2_count;
		bool L_8;
		L_8 = ((  bool (*) (XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D*, int32_t, String_t*, int32_t, int32_t, int32_t*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(__this, L_4, L_5, L_6, L_7, (&V_1), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if (!L_8)
		{
			goto IL_0033;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_9 = ___3_value;
		EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4* L_10 = __this->____entries;
		int32_t L_11 = V_1;
		NullCheck(L_10);
		il2cpp_codegen_memcpy(L_12, il2cpp_codegen_get_instance_field_data_pointer(((Entry_t7F8922DC9D131FDA94BF956DD509FC395285A91E*)(L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4),0)), SizeOf_TValue_tE0E843520D1B6FE8622D14458F0B584A2B7BCD70);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_9, L_12, SizeOf_TValue_tE0E843520D1B6FE8622D14458F0B584A2B7BCD70);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 5), (void**)(Il2CppFullySharedGenericAny*)L_9, (void*)L_12);
		return (bool)1;
	}

IL_0033:
	{
		Il2CppFullySharedGenericAny* L_13 = ___3_value;
		il2cpp_codegen_initobj(L_13, SizeOf_TValue_tE0E843520D1B6FE8622D14458F0B584A2B7BCD70);
		return (bool)0;
	}
}
// Method Definition Index: 129623
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XHashtableState_TryAdd_m25BEF4B433B3B23CE79C25AA27DA2FFB624CCAE2_gshared (XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D* __this, Il2CppFullySharedGenericAny ___0_value, Il2CppFullySharedGenericAny* ___1_newValue, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_tE0E843520D1B6FE8622D14458F0B584A2B7BCD70 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TValue_tE0E843520D1B6FE8622D14458F0B584A2B7BCD70);
	const Il2CppFullySharedGenericAny L_17 = L_1;
	const Il2CppFullySharedGenericAny L_41 = L_1;
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_TValue_tE0E843520D1B6FE8622D14458F0B584A2B7BCD70);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	int32_t V_3 = 0;
	{
		Il2CppFullySharedGenericAny* L_0 = ___1_newValue;
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5)) ? ___0_value : &___0_value), SizeOf_TValue_tE0E843520D1B6FE8622D14458F0B584A2B7BCD70);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_0, L_1, SizeOf_TValue_tE0E843520D1B6FE8622D14458F0B584A2B7BCD70);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 5), (void**)(Il2CppFullySharedGenericAny*)L_0, (void*)L_1);
		ExtractKeyDelegate_t0FCB0690B76E40F52DC9D05708A8FC488624E3CD* L_2 = __this->____extractKey;
		il2cpp_codegen_memcpy(L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5)) ? ___0_value : &___0_value), SizeOf_TValue_tE0E843520D1B6FE8622D14458F0B584A2B7BCD70);
		NullCheck(L_2);
		String_t* L_4;
		L_4 = InvokerFuncInvoker1< String_t*, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)), il2cpp_rgctx_method(method->klass->rgctx_data, 6), L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5)) ? L_3: *(void**)L_3));
		V_2 = L_4;
		String_t* L_5 = V_2;
		if (L_5)
		{
			goto IL_0019;
		}
	}
	{
		return (bool)1;
	}

IL_0019:
	{
		String_t* L_6 = V_2;
		String_t* L_7 = V_2;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_7, NULL);
		int32_t L_9;
		L_9 = ((  int32_t (*) (String_t*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(L_6, 0, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_3 = L_9;
		int32_t* L_10 = (int32_t*)(&__this->____numEntries);
		int32_t L_11;
		L_11 = Interlocked_Increment_m3C240C32E8D9544EC050B74D4F28EEB58F1F9309(L_10, NULL);
		V_0 = L_11;
		int32_t L_12 = V_0;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_0042;
		}
	}
	{
		int32_t L_13 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = __this->____buckets;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_0044;
		}
	}

IL_0042:
	{
		return (bool)0;
	}

IL_0044:
	{
		EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4* L_15 = __this->____entries;
		int32_t L_16 = V_0;
		NullCheck(L_15);
		il2cpp_codegen_memcpy(L_17, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5)) ? ___0_value : &___0_value), SizeOf_TValue_tE0E843520D1B6FE8622D14458F0B584A2B7BCD70);
		il2cpp_codegen_write_instance_field_data(((Entry_t7F8922DC9D131FDA94BF956DD509FC395285A91E*)(L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4),0), L_17, SizeOf_TValue_tE0E843520D1B6FE8622D14458F0B584A2B7BCD70);
		EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4* L_18 = __this->____entries;
		int32_t L_19 = V_0;
		NullCheck(L_18);
		int32_t L_20 = V_3;
		il2cpp_codegen_write_instance_field_data<int32_t>(((Entry_t7F8922DC9D131FDA94BF956DD509FC395285A91E*)(L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_19))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4),1), L_20);
		Thread_MemoryBarrier_m83873F1E6CEB16C0781941141382DA874A36097D(NULL);
		V_1 = 0;
		goto IL_00b7;
	}

IL_0071:
	{
		int32_t L_21 = V_1;
		if (L_21)
		{
			goto IL_0095;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_22 = __this->____buckets;
		int32_t L_23 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_24 = __this->____buckets;
		NullCheck(L_24);
		NullCheck(L_22);
		int32_t L_25 = V_0;
		int32_t L_26;
		L_26 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717(((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_23&((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_24)->max_length)), 1))))))), L_25, 0, NULL);
		V_1 = L_26;
		goto IL_00ae;
	}

IL_0095:
	{
		EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4* L_27 = __this->____entries;
		int32_t L_28 = V_1;
		NullCheck(L_27);
		int32_t L_29 = V_0;
		int32_t L_30;
		L_30 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((((int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Entry_t7F8922DC9D131FDA94BF956DD509FC395285A91E*)(L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_28))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4),2)))), L_29, 0, NULL);
		V_1 = L_30;
	}

IL_00ae:
	{
		int32_t L_31 = V_1;
		if ((((int32_t)L_31) > ((int32_t)0)))
		{
			goto IL_00b7;
		}
	}
	{
		int32_t L_32 = V_1;
		return (bool)((((int32_t)L_32) == ((int32_t)0))? 1 : 0);
	}

IL_00b7:
	{
		int32_t L_33 = V_3;
		String_t* L_34 = V_2;
		String_t* L_35 = V_2;
		NullCheck(L_35);
		int32_t L_36;
		L_36 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_35, NULL);
		bool L_37;
		L_37 = ((  bool (*) (XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D*, int32_t, String_t*, int32_t, int32_t, int32_t*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(__this, L_33, L_34, 0, L_36, (&V_1), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if (!L_37)
		{
			goto IL_0071;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_38 = ___1_newValue;
		EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4* L_39 = __this->____entries;
		int32_t L_40 = V_1;
		NullCheck(L_39);
		il2cpp_codegen_memcpy(L_41, il2cpp_codegen_get_instance_field_data_pointer(((Entry_t7F8922DC9D131FDA94BF956DD509FC395285A91E*)(L_39)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_40))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4),0)), SizeOf_TValue_tE0E843520D1B6FE8622D14458F0B584A2B7BCD70);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_38, L_41, SizeOf_TValue_tE0E843520D1B6FE8622D14458F0B584A2B7BCD70);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 5), (void**)(Il2CppFullySharedGenericAny*)L_38, (void*)L_41);
		return (bool)1;
	}
}
// Method Definition Index: 129624
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XHashtableState_FindEntry_m480C6B27D99709A7E6CB50C907ACDEA057992BCD_gshared (XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D* __this, int32_t ___0_hashCode, String_t* ___1_key, int32_t ___2_index, int32_t ___3_count, int32_t* ___4_entryIndex, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_tE0E843520D1B6FE8622D14458F0B584A2B7BCD70 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5));
	const Il2CppFullySharedGenericAny L_16 = alloca(SizeOf_TValue_tE0E843520D1B6FE8622D14458F0B584A2B7BCD70);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	{
		int32_t* L_0 = ___4_entryIndex;
		int32_t L_1 = *((int32_t*)L_0);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_0020;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____buckets;
		int32_t L_4 = ___0_hashCode;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = __this->____buckets;
		NullCheck(L_5);
		NullCheck(L_3);
		int32_t L_6 = ((int32_t)(L_4&((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_5)->max_length)), 1))));
		int32_t L_7 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_1 = L_7;
		goto IL_00f9;
	}

IL_0020:
	{
		int32_t L_8 = V_0;
		V_1 = L_8;
		goto IL_00f9;
	}

IL_0027:
	{
		EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4* L_9 = __this->____entries;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Entry_t7F8922DC9D131FDA94BF956DD509FC395285A91E*)(L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4),1));
		int32_t L_12 = ___0_hashCode;
		if ((!(((uint32_t)L_11) == ((uint32_t)L_12))))
		{
			goto IL_00e5;
		}
	}
	{
		ExtractKeyDelegate_t0FCB0690B76E40F52DC9D05708A8FC488624E3CD* L_13 = __this->____extractKey;
		EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4* L_14 = __this->____entries;
		int32_t L_15 = V_1;
		NullCheck(L_14);
		il2cpp_codegen_memcpy(L_16, il2cpp_codegen_get_instance_field_data_pointer(((Entry_t7F8922DC9D131FDA94BF956DD509FC395285A91E*)(L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4),0)), SizeOf_TValue_tE0E843520D1B6FE8622D14458F0B584A2B7BCD70);
		NullCheck(L_13);
		String_t* L_17;
		L_17 = InvokerFuncInvoker1< String_t*, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)), il2cpp_rgctx_method(method->klass->rgctx_data, 6), L_13, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5)) ? L_16: *(void**)L_16));
		V_2 = L_17;
		String_t* L_18 = V_2;
		if (L_18)
		{
			goto IL_00c8;
		}
	}
	{
		EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4* L_19 = __this->____entries;
		int32_t L_20 = V_1;
		NullCheck(L_19);
		int32_t L_21 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Entry_t7F8922DC9D131FDA94BF956DD509FC395285A91E*)(L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4),2));
		if ((((int32_t)L_21) <= ((int32_t)0)))
		{
			goto IL_00e5;
		}
	}
	{
		EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4* L_22 = __this->____entries;
		int32_t L_23 = V_1;
		NullCheck(L_22);
		il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(((Entry_t7F8922DC9D131FDA94BF956DD509FC395285A91E*)(L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4),0)))), SizeOf_TValue_tE0E843520D1B6FE8622D14458F0B584A2B7BCD70);
		EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4* L_24 = __this->____entries;
		int32_t L_25 = V_1;
		NullCheck(L_24);
		int32_t L_26 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Entry_t7F8922DC9D131FDA94BF956DD509FC395285A91E*)(L_24)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_25))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4),2));
		V_1 = L_26;
		int32_t L_27 = V_0;
		if (L_27)
		{
			goto IL_00b4;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_28 = __this->____buckets;
		int32_t L_29 = ___0_hashCode;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = __this->____buckets;
		NullCheck(L_30);
		int32_t L_31 = V_1;
		NullCheck(L_28);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_29&((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_30)->max_length)), 1))))), (int32_t)L_31);
		goto IL_00f9;
	}

IL_00b4:
	{
		EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4* L_32 = __this->____entries;
		int32_t L_33 = V_0;
		NullCheck(L_32);
		int32_t L_34 = V_1;
		il2cpp_codegen_write_instance_field_data<int32_t>(((Entry_t7F8922DC9D131FDA94BF956DD509FC395285A91E*)(L_32)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_33))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4),2), L_34);
		goto IL_00f9;
	}

IL_00c8:
	{
		int32_t L_35 = ___3_count;
		String_t* L_36 = V_2;
		NullCheck(L_36);
		int32_t L_37;
		L_37 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_36, NULL);
		if ((!(((uint32_t)L_35) == ((uint32_t)L_37))))
		{
			goto IL_00e5;
		}
	}
	{
		String_t* L_38 = ___1_key;
		int32_t L_39 = ___2_index;
		String_t* L_40 = V_2;
		int32_t L_41 = ___3_count;
		int32_t L_42;
		L_42 = String_CompareOrdinal_m8940CFAE90021ED8DA3F2DF8226941C9EEB2E32D(L_38, L_39, L_40, 0, L_41, NULL);
		if (L_42)
		{
			goto IL_00e5;
		}
	}
	{
		int32_t* L_43 = ___4_entryIndex;
		int32_t L_44 = V_1;
		*((int32_t*)L_43) = (int32_t)L_44;
		return (bool)1;
	}

IL_00e5:
	{
		int32_t L_45 = V_1;
		V_0 = L_45;
		EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4* L_46 = __this->____entries;
		int32_t L_47 = V_1;
		NullCheck(L_46);
		int32_t L_48 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Entry_t7F8922DC9D131FDA94BF956DD509FC395285A91E*)(L_46)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_47))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4),2));
		V_1 = L_48;
	}

IL_00f9:
	{
		int32_t L_49 = V_1;
		if ((((int32_t)L_49) > ((int32_t)0)))
		{
			goto IL_0027;
		}
	}
	{
		int32_t* L_50 = ___4_entryIndex;
		int32_t L_51 = V_0;
		*((int32_t*)L_50) = (int32_t)L_51;
		return (bool)0;
	}
}
// Method Definition Index: 129625
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XHashtableState_ComputeHashCode_m52BA0BD18441AD2A49C4E822AB76A7A5B7DC4B6D_gshared (String_t* ___0_key, int32_t ___1_index, int32_t ___2_count, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		V_0 = ((int32_t)352654597);
		int32_t L_0 = ___1_index;
		int32_t L_1 = ___2_count;
		V_1 = ((int32_t)il2cpp_codegen_add(L_0, L_1));
		int32_t L_2 = ___1_index;
		V_2 = L_2;
		goto IL_0020;
	}

IL_000e:
	{
		int32_t L_3 = V_0;
		int32_t L_4 = V_0;
		String_t* L_5 = ___0_key;
		int32_t L_6 = V_2;
		NullCheck(L_5);
		Il2CppChar L_7;
		L_7 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_5, L_6, NULL);
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, ((int32_t)(((int32_t)(L_4<<7))^(int32_t)L_7))));
		int32_t L_8 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_0020:
	{
		int32_t L_9 = V_2;
		int32_t L_10 = V_1;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_000e;
		}
	}
	{
		int32_t L_11 = V_0;
		int32_t L_12 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_11, ((int32_t)(L_12>>((int32_t)17)))));
		int32_t L_13 = V_0;
		int32_t L_14 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_13, ((int32_t)(L_14>>((int32_t)11)))));
		int32_t L_15 = V_0;
		int32_t L_16 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_15, ((int32_t)(L_16>>5))));
		int32_t L_17 = V_0;
		return ((int32_t)(L_17&((int32_t)2147483647LL)));
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
// Method Definition Index: 129615
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XHashtable_1__ctor_m9D005D3C7669B409F1E1B4F0863596FD91DB335C_gshared (XHashtable_1_t4C208624C5DAFD8858B7794DF15C5747BE4B3072* __this, ExtractKeyDelegate_t9BADAD4BDEEE5FEB8CBD095F1EA307C3DA921583* ___0_extractKey, int32_t ___1_capacity, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		ExtractKeyDelegate_t9BADAD4BDEEE5FEB8CBD095F1EA307C3DA921583* L_0 = ___0_extractKey;
		int32_t L_1 = ___1_capacity;
		XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* L_2 = (XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 1));
		XHashtableState__ctor_m37E975C296D7D8CDF9ACAA9ABD7C4A0C82C427D3(L_2, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		__this->____state = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____state), (void*)L_2);
		return;
	}
}
// Method Definition Index: 129616
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XHashtable_1_TryGetValue_mB91947F216CD72CEE9C38FA8EF56137E42817080_gshared (XHashtable_1_t4C208624C5DAFD8858B7794DF15C5747BE4B3072* __this, String_t* ___0_key, int32_t ___1_index, int32_t ___2_count, RuntimeObject** ___3_value, const RuntimeMethod* method) 
{
	{
		XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* L_0 = __this->____state;
		String_t* L_1 = ___0_key;
		int32_t L_2 = ___1_index;
		int32_t L_3 = ___2_count;
		RuntimeObject** L_4 = ___3_value;
		NullCheck(L_0);
		bool L_5;
		L_5 = XHashtableState_TryGetValue_m22BFB31B1A4E2CEDE4CA7133F4A0B50B9E514308(L_0, L_1, L_2, L_3, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		return L_5;
	}
}
// Method Definition Index: 129617
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XHashtable_1_Add_m4CE3AB9A64E8EBADEC48510932751F7C6D5581A0_gshared (XHashtable_1_t4C208624C5DAFD8858B7794DF15C5747BE4B3072* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	XHashtable_1_t4C208624C5DAFD8858B7794DF15C5747BE4B3072* V_1 = NULL;
	bool V_2 = false;
	XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* V_3 = NULL;

IL_0000:
	{
		XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* L_0 = __this->____state;
		RuntimeObject* L_1 = ___0_value;
		NullCheck(L_0);
		bool L_2;
		L_2 = XHashtableState_TryAdd_m951A9A914307495745E2B33DB0BA6583FB4060A1(L_0, L_1, (&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		if (!L_2)
		{
			goto IL_0012;
		}
	}
	{
		RuntimeObject* L_3 = V_0;
		return L_3;
	}

IL_0012:
	{
		V_1 = __this;
		V_2 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0038:
			{
				{
					bool L_4 = V_2;
					if (!L_4)
					{
						goto IL_0041;
					}
				}
				{
					XHashtable_1_t4C208624C5DAFD8858B7794DF15C5747BE4B3072* L_5 = V_1;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA((RuntimeObject*)L_5, NULL);
				}

IL_0041:
				{
					return;
				}
			}
		});
		try
		{
			XHashtable_1_t4C208624C5DAFD8858B7794DF15C5747BE4B3072* L_6 = V_1;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149((RuntimeObject*)L_6, (&V_2), NULL);
			XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* L_7 = __this->____state;
			NullCheck(L_7);
			XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* L_8;
			L_8 = XHashtableState_Resize_mDB3BA5C327EF6A86F6CE58B59E1D7430E62532C5(L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
			V_3 = L_8;
			Thread_MemoryBarrier_m83873F1E6CEB16C0781941141382DA874A36097D(NULL);
			XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* L_9 = V_3;
			__this->____state = L_9;
			Il2CppCodeGenWriteBarrier((void**)(&__this->____state), (void*)L_9);
			goto IL_0000;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}
	il2cpp_codegen_no_return();
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 129615
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XHashtable_1__ctor_m76AD29BB3D4A65A3071FDFCC0AD7F927FC6051B7_gshared (XHashtable_1_t781B821CC6AC13BED190536310819EB7FD1463D0* __this, ExtractKeyDelegate_t0FCB0690B76E40F52DC9D05708A8FC488624E3CD* ___0_extractKey, int32_t ___1_capacity, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		ExtractKeyDelegate_t0FCB0690B76E40F52DC9D05708A8FC488624E3CD* L_0 = ___0_extractKey;
		int32_t L_1 = ___1_capacity;
		XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D* L_2 = (XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 1));
		((  void (*) (XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D*, ExtractKeyDelegate_t0FCB0690B76E40F52DC9D05708A8FC488624E3CD*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(L_2, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		__this->____state = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____state), (void*)L_2);
		return;
	}
}
// Method Definition Index: 129616
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XHashtable_1_TryGetValue_m2AE37A0F57ADCA202E17A64CCAF4D0F37A070A24_gshared (XHashtable_1_t781B821CC6AC13BED190536310819EB7FD1463D0* __this, String_t* ___0_key, int32_t ___1_index, int32_t ___2_count, Il2CppFullySharedGenericAny* ___3_value, const RuntimeMethod* method) 
{
	{
		XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D* L_0 = __this->____state;
		String_t* L_1 = ___0_key;
		int32_t L_2 = ___1_index;
		int32_t L_3 = ___2_count;
		Il2CppFullySharedGenericAny* L_4 = ___3_value;
		NullCheck(L_0);
		bool L_5;
		L_5 = ((  bool (*) (XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D*, String_t*, int32_t, int32_t, Il2CppFullySharedGenericAny*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_0, L_1, L_2, L_3, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		return L_5;
	}
}
// Method Definition Index: 129617
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XHashtable_1_Add_mB4B8BF6CA81EE97D92FEE9D365A8FFB15168AE00_gshared (XHashtable_1_t781B821CC6AC13BED190536310819EB7FD1463D0* __this, Il2CppFullySharedGenericAny ___0_value, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_t3953344BBD5AABD452C9834A9E3F75B5A767B1A7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TValue_t3953344BBD5AABD452C9834A9E3F75B5A767B1A7);
	const Il2CppFullySharedGenericAny L_3 = L_1;
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_TValue_t3953344BBD5AABD452C9834A9E3F75B5A767B1A7);
	memset(V_0, 0, SizeOf_TValue_t3953344BBD5AABD452C9834A9E3F75B5A767B1A7);
	XHashtable_1_t781B821CC6AC13BED190536310819EB7FD1463D0* V_1 = NULL;
	bool V_2 = false;
	XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D* V_3 = NULL;

IL_0000:
	{
		XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D* L_0 = __this->____state;
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? ___0_value : &___0_value), SizeOf_TValue_t3953344BBD5AABD452C9834A9E3F75B5A767B1A7);
		NullCheck(L_0);
		bool L_2;
		L_2 = InvokerFuncInvoker2< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_1: *(void**)L_1), (Il2CppFullySharedGenericAny*)V_0);
		if (!L_2)
		{
			goto IL_0012;
		}
	}
	{
		il2cpp_codegen_memcpy(L_3, V_0, SizeOf_TValue_t3953344BBD5AABD452C9834A9E3F75B5A767B1A7);
		il2cpp_codegen_memcpy(il2cppRetVal, L_3, SizeOf_TValue_t3953344BBD5AABD452C9834A9E3F75B5A767B1A7);
		return;
	}

IL_0012:
	{
		V_1 = __this;
		V_2 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0038:
			{
				{
					bool L_4 = V_2;
					if (!L_4)
					{
						goto IL_0041;
					}
				}
				{
					XHashtable_1_t781B821CC6AC13BED190536310819EB7FD1463D0* L_5 = V_1;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA((RuntimeObject*)L_5, NULL);
				}

IL_0041:
				{
					return;
				}
			}
		});
		try
		{
			XHashtable_1_t781B821CC6AC13BED190536310819EB7FD1463D0* L_6 = V_1;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149((RuntimeObject*)L_6, (&V_2), NULL);
			XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D* L_7 = __this->____state;
			NullCheck(L_7);
			XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D* L_8;
			L_8 = ((  XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D* (*) (XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
			V_3 = L_8;
			Thread_MemoryBarrier_m83873F1E6CEB16C0781941141382DA874A36097D(NULL);
			XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D* L_9 = V_3;
			__this->____state = L_9;
			Il2CppCodeGenWriteBarrier((void**)(&__this->____state), (void*)L_9);
			goto IL_0000;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}
	il2cpp_codegen_no_return();
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 40984
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void apCache_1__ctor_m17C935EF998D656920838D8BA893F1666D7344A2_gshared (apCache_1_t23C90689CAA46AC7D6F44D414092326EF5C5549E* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:/Users/devops/wkspaces/New_Mastra_UGS/Assets/Plugins/AnyPortrait/Assets/Scripts/BasicObjects/apCache.cs:56>
		Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* L_0 = (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 0));
		Dictionary_2__ctor_m92E9AB321FBD7147CA109C822D99C8B0610C27B7(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		__this->____objects = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____objects), (void*)L_0);
		//<source_info:/Users/devops/wkspaces/New_Mastra_UGS/Assets/Plugins/AnyPortrait/Assets/Scripts/BasicObjects/apCache.cs:59>
		__this->____lastID = (-1);
		//<source_info:/Users/devops/wkspaces/New_Mastra_UGS/Assets/Plugins/AnyPortrait/Assets/Scripts/BasicObjects/apCache.cs:62>
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		//<source_info:/Users/devops/wkspaces/New_Mastra_UGS/Assets/Plugins/AnyPortrait/Assets/Scripts/BasicObjects/apCache.cs:70>
		Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* L_1 = __this->____objects;
		if (L_1)
		{
			goto IL_002b;
		}
	}
	{
		//<source_info:/Users/devops/wkspaces/New_Mastra_UGS/Assets/Plugins/AnyPortrait/Assets/Scripts/BasicObjects/apCache.cs:72>
		Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* L_2 = (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 0));
		Dictionary_2__ctor_m92E9AB321FBD7147CA109C822D99C8B0610C27B7(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		__this->____objects = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____objects), (void*)L_2);
	}

IL_002b:
	{
		//<source_info:/Users/devops/wkspaces/New_Mastra_UGS/Assets/Plugins/AnyPortrait/Assets/Scripts/BasicObjects/apCache.cs:75>
		__this->____isAnyAdded = (bool)0;
		//<source_info:/Users/devops/wkspaces/New_Mastra_UGS/Assets/Plugins/AnyPortrait/Assets/Scripts/BasicObjects/apCache.cs:76>
		RuntimeObject** L_3 = (RuntimeObject**)(&__this->____lastObject);
		il2cpp_codegen_initobj(L_3, sizeof(RuntimeObject*));
		//<source_info:/Users/devops/wkspaces/New_Mastra_UGS/Assets/Plugins/AnyPortrait/Assets/Scripts/BasicObjects/apCache.cs:77>
		__this->____lastID = (-1);
		//<source_info:/Users/devops/wkspaces/New_Mastra_UGS/Assets/Plugins/AnyPortrait/Assets/Scripts/BasicObjects/apCache.cs:78>
		return;
	}
}
// Method Definition Index: 40985
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void apCache_1_Clear_m03E7FD3CDECEE729A45A90EDB6BAB5BB9E1D7805_gshared (apCache_1_t23C90689CAA46AC7D6F44D414092326EF5C5549E* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:/Users/devops/wkspaces/New_Mastra_UGS/Assets/Plugins/AnyPortrait/Assets/Scripts/BasicObjects/apCache.cs:98>
		Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* L_0 = __this->____objects;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		//<source_info:/Users/devops/wkspaces/New_Mastra_UGS/Assets/Plugins/AnyPortrait/Assets/Scripts/BasicObjects/apCache.cs:100>
		Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* L_1 = (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 0));
		Dictionary_2__ctor_m92E9AB321FBD7147CA109C822D99C8B0610C27B7(L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		__this->____objects = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____objects), (void*)L_1);
	}

IL_0013:
	{
		//<source_info:/Users/devops/wkspaces/New_Mastra_UGS/Assets/Plugins/AnyPortrait/Assets/Scripts/BasicObjects/apCache.cs:102>
		Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* L_2 = __this->____objects;
		NullCheck(L_2);
		Dictionary_2_Clear_mE1EFF7C68491EE07D21EE9924475A559BF0A4773(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		//<source_info:/Users/devops/wkspaces/New_Mastra_UGS/Assets/Plugins/AnyPortrait/Assets/Scripts/BasicObjects/apCache.cs:104>
		__this->____isAnyAdded = (bool)0;
		//<source_info:/Users/devops/wkspaces/New_Mastra_UGS/Assets/Plugins/AnyPortrait/Assets/Scripts/BasicObjects/apCache.cs:105>
		RuntimeObject** L_3 = (RuntimeObject**)(&__this->____lastObject);
		il2cpp_codegen_initobj(L_3, sizeof(RuntimeObject*));
		//<source_info:/Users/devops/wkspaces/New_Mastra_UGS/Assets/Plugins/AnyPortrait/Assets/Scripts/BasicObjects/apCache.cs:106>
		__this->____lastID = (-1);
		//<source_info:/Users/devops/wkspaces/New_Mastra_UGS/Assets/Plugins/AnyPortrait/Assets/Scripts/BasicObjects/apCache.cs:107>
		return;
	}
}
// Method Definition Index: 40986
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool apCache_1_IsContain_m46FB29A6E63037B9E4CCB101F4321BF3F1E8F2FB_gshared (apCache_1_t23C90689CAA46AC7D6F44D414092326EF5C5549E* __this, int32_t ___0_id, const RuntimeMethod* method) 
{
	{
		//<source_info:/Users/devops/wkspaces/New_Mastra_UGS/Assets/Plugins/AnyPortrait/Assets/Scripts/BasicObjects/apCache.cs:116>
		bool L_0 = __this->____isAnyAdded;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		//<source_info:/Users/devops/wkspaces/New_Mastra_UGS/Assets/Plugins/AnyPortrait/Assets/Scripts/BasicObjects/apCache.cs:118>
		return (bool)0;
	}

IL_000a:
	{
		//<source_info:/Users/devops/wkspaces/New_Mastra_UGS/Assets/Plugins/AnyPortrait/Assets/Scripts/BasicObjects/apCache.cs:121>
		int32_t L_1 = __this->____lastID;
		int32_t L_2 = ___0_id;
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0015;
		}
	}
	{
		//<source_info:/Users/devops/wkspaces/New_Mastra_UGS/Assets/Plugins/AnyPortrait/Assets/Scripts/BasicObjects/apCache.cs:123>
		return (bool)1;
	}

IL_0015:
	{
		//<source_info:/Users/devops/wkspaces/New_Mastra_UGS/Assets/Plugins/AnyPortrait/Assets/Scripts/BasicObjects/apCache.cs:126>
		Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* L_3 = __this->____objects;
		int32_t L_4 = ___0_id;
		NullCheck(L_3);
		bool L_5;
		L_5 = Dictionary_2_ContainsKey_mED5C451F158CDDD2B3F4B0720CD248DA9DB27B25(L_3, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		if (!L_5)
		{
			goto IL_0025;
		}
	}
	{
		//<source_info:/Users/devops/wkspaces/New_Mastra_UGS/Assets/Plugins/AnyPortrait/Assets/Scripts/BasicObjects/apCache.cs:128>
		return (bool)1;
	}

IL_0025:
	{
		//<source_info:/Users/devops/wkspaces/New_Mastra_UGS/Assets/Plugins/AnyPortrait/Assets/Scripts/BasicObjects/apCache.cs:131>
		return (bool)0;
	}
}
// Method Definition Index: 40987
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* apCache_1_Get_m363A1B4B37718324A4A4331A7B6A7F1C79385BAF_gshared (apCache_1_t23C90689CAA46AC7D6F44D414092326EF5C5549E* __this, int32_t ___0_id, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		//<source_info:/Users/devops/wkspaces/New_Mastra_UGS/Assets/Plugins/AnyPortrait/Assets/Scripts/BasicObjects/apCache.cs:141>
		bool L_0 = __this->____isAnyAdded;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		//<source_info:/Users/devops/wkspaces/New_Mastra_UGS/Assets/Plugins/AnyPortrait/Assets/Scripts/BasicObjects/apCache.cs:143>
		il2cpp_codegen_initobj((&V_0), sizeof(RuntimeObject*));
		RuntimeObject* L_1 = V_0;
		return L_1;
	}

IL_0012:
	{
		//<source_info:/Users/devops/wkspaces/New_Mastra_UGS/Assets/Plugins/AnyPortrait/Assets/Scripts/BasicObjects/apCache.cs:146>
		int32_t L_2 = __this->____lastID;
		int32_t L_3 = ___0_id;
		if ((!(((uint32_t)L_2) == ((uint32_t)L_3))))
		{
			goto IL_0022;
		}
	}
	{
		//<source_info:/Users/devops/wkspaces/New_Mastra_UGS/Assets/Plugins/AnyPortrait/Assets/Scripts/BasicObjects/apCache.cs:148>
		RuntimeObject* L_4 = __this->____lastObject;
		return L_4;
	}

IL_0022:
	{
		//<source_info:/Users/devops/wkspaces/New_Mastra_UGS/Assets/Plugins/AnyPortrait/Assets/Scripts/BasicObjects/apCache.cs:151>
		Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* L_5 = __this->____objects;
		int32_t L_6 = ___0_id;
		NullCheck(L_5);
		RuntimeObject* L_7;
		L_7 = Dictionary_2_get_Item_mC3FEA647E750C27367C990777D8890E0E712E514(L_5, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		__this->____lastObject = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____lastObject), (void*)L_7);
		//<source_info:/Users/devops/wkspaces/New_Mastra_UGS/Assets/Plugins/AnyPortrait/Assets/Scripts/BasicObjects/apCache.cs:152>
		int32_t L_8 = ___0_id;
		__this->____lastID = L_8;
		//<source_info:/Users/devops/wkspaces/New_Mastra_UGS/Assets/Plugins/AnyPortrait/Assets/Scripts/BasicObjects/apCache.cs:154>
		RuntimeObject* L_9 = __this->____lastObject;
		return L_9;
	}
}
// Method Definition Index: 40988
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void apCache_1_Add_mE62AA86CB28781DECBCBFCA18518EC0A9F83247B_gshared (apCache_1_t23C90689CAA46AC7D6F44D414092326EF5C5549E* __this, int32_t ___0_id, RuntimeObject* ___1_targetObject, const RuntimeMethod* method) 
{
	{
		//<source_info:/Users/devops/wkspaces/New_Mastra_UGS/Assets/Plugins/AnyPortrait/Assets/Scripts/BasicObjects/apCache.cs:164>
		__this->____isAnyAdded = (bool)1;
		//<source_info:/Users/devops/wkspaces/New_Mastra_UGS/Assets/Plugins/AnyPortrait/Assets/Scripts/BasicObjects/apCache.cs:165>
		Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* L_0 = __this->____objects;
		int32_t L_1 = ___0_id;
		RuntimeObject* L_2 = ___1_targetObject;
		NullCheck(L_0);
		Dictionary_2_Add_mAF1EF7DA16BD70E252EA5C4B0F74DE519A02CBCD(L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		//<source_info:/Users/devops/wkspaces/New_Mastra_UGS/Assets/Plugins/AnyPortrait/Assets/Scripts/BasicObjects/apCache.cs:166>
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
// Method Definition Index: 110247
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* fsDirectConverter_1_get_ModelType_mC32E7553583DD793467D6FB5CE24747854A070E4_gshared (fsDirectConverter_1_tF307DFA6F21486A34320546F09381BBF84FF0539* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:24>
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		return L_1;
	}
}
// Method Definition Index: 110248
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsDirectConverter_1_TrySerialize_m8B301BF0E4624082448AC261F66E55A9069C9F2B_gshared (fsDirectConverter_1_tF307DFA6F21486A34320546F09381BBF84FF0539* __this, RuntimeObject* ___0_instance, fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23** ___1_serialized, Type_t* ___2_storageType, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* V_0 = NULL;
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:28>
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_0 = (Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3*)il2cpp_codegen_object_new(Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04(L_0, Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04_RuntimeMethod_var);
		V_0 = L_0;
		//<source_info:./Library/PackageCache/com.unity.visualscripting/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:29>
		RuntimeObject* L_1 = ___0_instance;
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_2 = V_0;
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_3;
		L_3 = VirtualFuncInvoker2< fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974, Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00, Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* >::Invoke(10, __this, ((*(Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00*)UnBox(L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 1)))), L_2);
		//<source_info:./Library/PackageCache/com.unity.visualscripting/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:30>
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23** L_4 = ___1_serialized;
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_5 = V_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_6 = (fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23*)il2cpp_codegen_object_new(fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23_il2cpp_TypeInfo_var);
		fsData__ctor_mCF4D73BFD9271596000ACC3E17988E3492236781(L_6, L_5, NULL);
		*((RuntimeObject**)L_4) = (RuntimeObject*)L_6;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_4, (void*)(RuntimeObject*)L_6);
		//<source_info:./Library/PackageCache/com.unity.visualscripting/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:31>
		return L_3;
	}
}
// Method Definition Index: 110249
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsDirectConverter_1_TryDeserialize_mB57F1FED13B2F213B3A9C45337315BC8E5E3F6A6_gshared (fsDirectConverter_1_tF307DFA6F21486A34320546F09381BBF84FF0539* __this, fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* ___0_data, RuntimeObject** ___1_instance, Type_t* ___2_storageType, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 V_1;
	memset((&V_1), 0, sizeof(V_1));
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:36>
		il2cpp_codegen_runtime_class_init_inline(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_0 = ((fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_StaticFields*)il2cpp_codegen_static_fields_for(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var))->___Success;
		V_0 = L_0;
		//<source_info:./Library/PackageCache/com.unity.visualscripting/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:37>
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_1 = V_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_2 = ___0_data;
		NullCheck((fsBaseConverter_tDF9366828A5B8ADB6D986EB35B320D4DDC81CB04*)__this);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_3;
		L_3 = fsBaseConverter_CheckType_m14C4D0CAF424DF9F14D6365B5E5681C43FA82F32((fsBaseConverter_tDF9366828A5B8ADB6D986EB35B320D4DDC81CB04*)__this, L_2, (int32_t)1, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_4;
		L_4 = fsResult_op_Addition_mA94A4AD68668E539DEFE1255DC72B9D11A6DE41C(L_1, L_3, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_5 = L_4;
		V_0 = L_5;
		V_2 = L_5;
		bool L_6;
		L_6 = fsResult_get_Failed_m1398C627A72E75F5C7F8DB1A7C14E5B3271FF1FB((&V_2), NULL);
		if (!L_6)
		{
			goto IL_0022;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:39>
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_7 = V_0;
		return L_7;
	}

IL_0022:
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:42>
		RuntimeObject** L_8 = ___1_instance;
		RuntimeObject* L_9 = *((RuntimeObject**)L_8);
		V_1 = ((*(Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00*)UnBox(L_9, il2cpp_rgctx_data(method->klass->rgctx_data, 1))));
		//<source_info:./Library/PackageCache/com.unity.visualscripting/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:43>
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_10 = V_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_11 = ___0_data;
		NullCheck(L_11);
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_12;
		L_12 = fsData_get_AsDictionary_m51779E71BBC994A7F5036BFB43F61B28C0817D86(L_11, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_13;
		L_13 = VirtualFuncInvoker2< fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974, Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3*, Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00* >::Invoke(11, __this, L_12, (&V_1));
		il2cpp_codegen_runtime_class_init_inline(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_14;
		L_14 = fsResult_op_Addition_mA94A4AD68668E539DEFE1255DC72B9D11A6DE41C(L_10, L_13, NULL);
		V_0 = L_14;
		//<source_info:./Library/PackageCache/com.unity.visualscripting/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:44>
		RuntimeObject** L_15 = ___1_instance;
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_16 = V_1;
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_17 = L_16;
		RuntimeObject* L_18 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1), &L_17);
		*((RuntimeObject**)L_15) = (RuntimeObject*)L_18;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_15, (void*)(RuntimeObject*)L_18);
		//<source_info:./Library/PackageCache/com.unity.visualscripting/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:45>
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_19 = V_0;
		return L_19;
	}
}
// Method Definition Index: 110252
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsDirectConverter_1__ctor_m644F4C264CCF8F165037066D5AC2034B6D176110_gshared (fsDirectConverter_1_tF307DFA6F21486A34320546F09381BBF84FF0539* __this, const RuntimeMethod* method) 
{
	{
		fsDirectConverter__ctor_mCE6F7898DA2A3FBE101F5939D06A809E3164ABE1((fsDirectConverter_t9EE506A371C95C62E21CA6586396D7B3BD55F668*)__this, NULL);
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
// Method Definition Index: 110247
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* fsDirectConverter_1_get_ModelType_m58E406781ACEFCFD3F1526A502D26109CE14F8DF_gshared (fsDirectConverter_1_t8EC81BCA98876AF5AF3271B6086EC66E2CCDC388* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:24>
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		return L_1;
	}
}
// Method Definition Index: 110248
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsDirectConverter_1_TrySerialize_mBF17673DDC9A3AF571B07DA5640AA0BFE06B3FB4_gshared (fsDirectConverter_1_t8EC81BCA98876AF5AF3271B6086EC66E2CCDC388* __this, RuntimeObject* ___0_instance, fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23** ___1_serialized, Type_t* ___2_storageType, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* V_0 = NULL;
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:28>
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_0 = (Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3*)il2cpp_codegen_object_new(Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04(L_0, Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04_RuntimeMethod_var);
		V_0 = L_0;
		//<source_info:./Library/PackageCache/com.unity.visualscripting/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:29>
		RuntimeObject* L_1 = ___0_instance;
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_2 = V_0;
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_3;
		L_3 = VirtualFuncInvoker2< fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974, Ray2D_t48EB7C703F8A2363D8A8F4A05D58640BD5721C7A, Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* >::Invoke(10, __this, ((*(Ray2D_t48EB7C703F8A2363D8A8F4A05D58640BD5721C7A*)UnBox(L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 1)))), L_2);
		//<source_info:./Library/PackageCache/com.unity.visualscripting/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:30>
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23** L_4 = ___1_serialized;
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_5 = V_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_6 = (fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23*)il2cpp_codegen_object_new(fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23_il2cpp_TypeInfo_var);
		fsData__ctor_mCF4D73BFD9271596000ACC3E17988E3492236781(L_6, L_5, NULL);
		*((RuntimeObject**)L_4) = (RuntimeObject*)L_6;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_4, (void*)(RuntimeObject*)L_6);
		//<source_info:./Library/PackageCache/com.unity.visualscripting/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:31>
		return L_3;
	}
}
// Method Definition Index: 110249
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsDirectConverter_1_TryDeserialize_m6DC3716E17198067B467187A41C5F378F9C2753F_gshared (fsDirectConverter_1_t8EC81BCA98876AF5AF3271B6086EC66E2CCDC388* __this, fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* ___0_data, RuntimeObject** ___1_instance, Type_t* ___2_storageType, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Ray2D_t48EB7C703F8A2363D8A8F4A05D58640BD5721C7A V_1;
	memset((&V_1), 0, sizeof(V_1));
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:36>
		il2cpp_codegen_runtime_class_init_inline(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_0 = ((fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_StaticFields*)il2cpp_codegen_static_fields_for(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var))->___Success;
		V_0 = L_0;
		//<source_info:./Library/PackageCache/com.unity.visualscripting/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:37>
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_1 = V_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_2 = ___0_data;
		NullCheck((fsBaseConverter_tDF9366828A5B8ADB6D986EB35B320D4DDC81CB04*)__this);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_3;
		L_3 = fsBaseConverter_CheckType_m14C4D0CAF424DF9F14D6365B5E5681C43FA82F32((fsBaseConverter_tDF9366828A5B8ADB6D986EB35B320D4DDC81CB04*)__this, L_2, (int32_t)1, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_4;
		L_4 = fsResult_op_Addition_mA94A4AD68668E539DEFE1255DC72B9D11A6DE41C(L_1, L_3, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_5 = L_4;
		V_0 = L_5;
		V_2 = L_5;
		bool L_6;
		L_6 = fsResult_get_Failed_m1398C627A72E75F5C7F8DB1A7C14E5B3271FF1FB((&V_2), NULL);
		if (!L_6)
		{
			goto IL_0022;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:39>
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_7 = V_0;
		return L_7;
	}

IL_0022:
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:42>
		RuntimeObject** L_8 = ___1_instance;
		RuntimeObject* L_9 = *((RuntimeObject**)L_8);
		V_1 = ((*(Ray2D_t48EB7C703F8A2363D8A8F4A05D58640BD5721C7A*)UnBox(L_9, il2cpp_rgctx_data(method->klass->rgctx_data, 1))));
		//<source_info:./Library/PackageCache/com.unity.visualscripting/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:43>
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_10 = V_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_11 = ___0_data;
		NullCheck(L_11);
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_12;
		L_12 = fsData_get_AsDictionary_m51779E71BBC994A7F5036BFB43F61B28C0817D86(L_11, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_13;
		L_13 = VirtualFuncInvoker2< fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974, Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3*, Ray2D_t48EB7C703F8A2363D8A8F4A05D58640BD5721C7A* >::Invoke(11, __this, L_12, (&V_1));
		il2cpp_codegen_runtime_class_init_inline(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_14;
		L_14 = fsResult_op_Addition_mA94A4AD68668E539DEFE1255DC72B9D11A6DE41C(L_10, L_13, NULL);
		V_0 = L_14;
		//<source_info:./Library/PackageCache/com.unity.visualscripting/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:44>
		RuntimeObject** L_15 = ___1_instance;
		Ray2D_t48EB7C703F8A2363D8A8F4A05D58640BD5721C7A L_16 = V_1;
		Ray2D_t48EB7C703F8A2363D8A8F4A05D58640BD5721C7A L_17 = L_16;
		RuntimeObject* L_18 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1), &L_17);
		*((RuntimeObject**)L_15) = (RuntimeObject*)L_18;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_15, (void*)(RuntimeObject*)L_18);
		//<source_info:./Library/PackageCache/com.unity.visualscripting/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:45>
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_19 = V_0;
		return L_19;
	}
}
// Method Definition Index: 110252
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsDirectConverter_1__ctor_mBFCA0DE0165FE7459AEBC89AC73731BBCF7F64E6_gshared (fsDirectConverter_1_t8EC81BCA98876AF5AF3271B6086EC66E2CCDC388* __this, const RuntimeMethod* method) 
{
	{
		fsDirectConverter__ctor_mCE6F7898DA2A3FBE101F5939D06A809E3164ABE1((fsDirectConverter_t9EE506A371C95C62E21CA6586396D7B3BD55F668*)__this, NULL);
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
// Method Definition Index: 110247
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* fsDirectConverter_1_get_ModelType_m7BFCBE6128959F6AAA08BB9FB82C5E3DA07FB3AD_gshared (fsDirectConverter_1_tCBA7B5D48312C1775A21082D3D453731C902A8BD* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:24>
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		return L_1;
	}
}
// Method Definition Index: 110248
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsDirectConverter_1_TrySerialize_mAB417033757D14765392C802374EE82941F7E430_gshared (fsDirectConverter_1_tCBA7B5D48312C1775A21082D3D453731C902A8BD* __this, RuntimeObject* ___0_instance, fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23** ___1_serialized, Type_t* ___2_storageType, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TModel_tA846BAB14AD72C3F97B08FAFEF7B2629C8054C13 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_TModel_tA846BAB14AD72C3F97B08FAFEF7B2629C8054C13);
	Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* V_0 = NULL;
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:28>
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_0 = (Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3*)il2cpp_codegen_object_new(Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04(L_0, Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04_RuntimeMethod_var);
		V_0 = L_0;
		//<source_info:./Library/PackageCache/com.unity.visualscripting/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:29>
		RuntimeObject* L_1 = ___0_instance;
		void* L_3 = UnBox_Any(L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_2);
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_4 = V_0;
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_5;
		L_5 = VirtualFuncInvoker2Invoker< fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974, Il2CppFullySharedGenericAny, Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* >::Invoke(10, __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1)) ? (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_3)): *(void**)(((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_3))), L_4);
		//<source_info:./Library/PackageCache/com.unity.visualscripting/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:30>
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23** L_6 = ___1_serialized;
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_7 = V_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_8 = (fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23*)il2cpp_codegen_object_new(fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23_il2cpp_TypeInfo_var);
		fsData__ctor_mCF4D73BFD9271596000ACC3E17988E3492236781(L_8, L_7, NULL);
		*((RuntimeObject**)L_6) = (RuntimeObject*)L_8;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_6, (void*)(RuntimeObject*)L_8);
		//<source_info:./Library/PackageCache/com.unity.visualscripting/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:31>
		return L_5;
	}
}
// Method Definition Index: 110249
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsDirectConverter_1_TryDeserialize_m68AEEE5C3FB70E702E364D7B0C537966E0B079CF_gshared (fsDirectConverter_1_tCBA7B5D48312C1775A21082D3D453731C902A8BD* __this, fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* ___0_data, RuntimeObject** ___1_instance, Type_t* ___2_storageType, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TModel_tA846BAB14AD72C3F97B08FAFEF7B2629C8054C13 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_TModel_tA846BAB14AD72C3F97B08FAFEF7B2629C8054C13);
	const Il2CppFullySharedGenericAny L_18 = alloca(SizeOf_TModel_tA846BAB14AD72C3F97B08FAFEF7B2629C8054C13);
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_TModel_tA846BAB14AD72C3F97B08FAFEF7B2629C8054C13);
	memset(V_1, 0, SizeOf_TModel_tA846BAB14AD72C3F97B08FAFEF7B2629C8054C13);
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:36>
		il2cpp_codegen_runtime_class_init_inline(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_0 = ((fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_StaticFields*)il2cpp_codegen_static_fields_for(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var))->___Success;
		V_0 = L_0;
		//<source_info:./Library/PackageCache/com.unity.visualscripting/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:37>
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_1 = V_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_2 = ___0_data;
		NullCheck((fsBaseConverter_tDF9366828A5B8ADB6D986EB35B320D4DDC81CB04*)__this);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_3;
		L_3 = fsBaseConverter_CheckType_m14C4D0CAF424DF9F14D6365B5E5681C43FA82F32((fsBaseConverter_tDF9366828A5B8ADB6D986EB35B320D4DDC81CB04*)__this, L_2, (int32_t)1, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_4;
		L_4 = fsResult_op_Addition_mA94A4AD68668E539DEFE1255DC72B9D11A6DE41C(L_1, L_3, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_5 = L_4;
		V_0 = L_5;
		V_2 = L_5;
		bool L_6;
		L_6 = fsResult_get_Failed_m1398C627A72E75F5C7F8DB1A7C14E5B3271FF1FB((&V_2), NULL);
		if (!L_6)
		{
			goto IL_0022;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:39>
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_7 = V_0;
		return L_7;
	}

IL_0022:
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:42>
		RuntimeObject** L_8 = ___1_instance;
		RuntimeObject* L_9 = *((RuntimeObject**)L_8);
		void* L_11 = UnBox_Any(L_9, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_10);
		il2cpp_codegen_memcpy(V_1, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_11)), SizeOf_TModel_tA846BAB14AD72C3F97B08FAFEF7B2629C8054C13);
		//<source_info:./Library/PackageCache/com.unity.visualscripting/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:43>
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_12 = V_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_13 = ___0_data;
		NullCheck(L_13);
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_14;
		L_14 = fsData_get_AsDictionary_m51779E71BBC994A7F5036BFB43F61B28C0817D86(L_13, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_15;
		L_15 = VirtualFuncInvoker2< fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974, Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3*, Il2CppFullySharedGenericAny* >::Invoke(11, __this, L_14, (Il2CppFullySharedGenericAny*)V_1);
		il2cpp_codegen_runtime_class_init_inline(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_16;
		L_16 = fsResult_op_Addition_mA94A4AD68668E539DEFE1255DC72B9D11A6DE41C(L_12, L_15, NULL);
		V_0 = L_16;
		//<source_info:./Library/PackageCache/com.unity.visualscripting/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:44>
		RuntimeObject** L_17 = ___1_instance;
		il2cpp_codegen_memcpy(L_18, V_1, SizeOf_TModel_tA846BAB14AD72C3F97B08FAFEF7B2629C8054C13);
		RuntimeObject* L_19 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1), L_18);
		*((RuntimeObject**)L_17) = (RuntimeObject*)L_19;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_17, (void*)(RuntimeObject*)L_19);
		//<source_info:./Library/PackageCache/com.unity.visualscripting/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:45>
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_20 = V_0;
		return L_20;
	}
}
// Method Definition Index: 110252
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsDirectConverter_1__ctor_mA219A5FF100DBCB35147606E9E4E9C565D2F8D50_gshared (fsDirectConverter_1_tCBA7B5D48312C1775A21082D3D453731C902A8BD* __this, const RuntimeMethod* method) 
{
	{
		fsDirectConverter__ctor_mCE6F7898DA2A3FBE101F5939D06A809E3164ABE1((fsDirectConverter_t9EE506A371C95C62E21CA6586396D7B3BD55F668*)__this, NULL);
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
// Method Definition Index: 110419
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool fsOption_1_get_HasValue_m2E9021BB4CB6156A14918A5B865D21751CA6D00C_gshared (fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting/Runtime/VisualScripting.Core/Dependencies/FullSerializer/Internal/fsOption.cs:13>
		bool L_0 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),0));
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool fsOption_1_get_HasValue_m2E9021BB4CB6156A14918A5B865D21751CA6D00C_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88*>(__this + _offset);
	bool _returnValue;
	_returnValue = fsOption_1_get_HasValue_m2E9021BB4CB6156A14918A5B865D21751CA6D00C_inline(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 110420
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool fsOption_1_get_IsEmpty_m8F02E0608720E562CDB4C8906C1CD863FD8FE767_gshared (fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting/Runtime/VisualScripting.Core/Dependencies/FullSerializer/Internal/fsOption.cs:15>
		bool L_0 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),0));
		return (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool fsOption_1_get_IsEmpty_m8F02E0608720E562CDB4C8906C1CD863FD8FE767_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88*>(__this + _offset);
	bool _returnValue;
	_returnValue = fsOption_1_get_IsEmpty_m8F02E0608720E562CDB4C8906C1CD863FD8FE767(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 110421
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsOption_1_get_Value_m2A0C3FDC3098EA4DC3BB5CF398E95EC2C991988A_gshared (fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_tC5D84CBABB6B1934F21007E0A382E362C744EBA6 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_T_tC5D84CBABB6B1934F21007E0A382E362C744EBA6);
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting/Runtime/VisualScripting.Core/Dependencies/FullSerializer/Internal/fsOption.cs:21>
		bool L_0;
		L_0 = ((  bool (*) (fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1)))(__this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting/Runtime/VisualScripting.Core/Dependencies/FullSerializer/Internal/fsOption.cs:23>
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0A7D3B18DF4F9238A50A156FF06A5A7E794C1C7F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0013:
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting/Runtime/VisualScripting.Core/Dependencies/FullSerializer/Internal/fsOption.cs:25>
		il2cpp_codegen_memcpy(L_2, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),1)), SizeOf_T_tC5D84CBABB6B1934F21007E0A382E362C744EBA6);
		il2cpp_codegen_memcpy(il2cppRetVal, L_2, SizeOf_T_tC5D84CBABB6B1934F21007E0A382E362C744EBA6);
		return;
	}
}
IL2CPP_EXTERN_C  void fsOption_1_get_Value_m2A0C3FDC3098EA4DC3BB5CF398E95EC2C991988A_AdjustorThunk (RuntimeObject* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88*>(__this + _offset);
	fsOption_1_get_Value_m2A0C3FDC3098EA4DC3BB5CF398E95EC2C991988A(_thisAdjusted, il2cppRetVal, method);
	return;
}
// Method Definition Index: 110422
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsOption_1__ctor_m343A7CF35E302DB9E5BCA27A0DAC03751B238516_gshared (fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88* __this, Il2CppFullySharedGenericAny ___0_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_tC5D84CBABB6B1934F21007E0A382E362C744EBA6 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_tC5D84CBABB6B1934F21007E0A382E362C744EBA6);
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting/Runtime/VisualScripting.Core/Dependencies/FullSerializer/Internal/fsOption.cs:31>
		il2cpp_codegen_write_instance_field_data<bool>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),0), (bool)1);
		//<source_info:./Library/PackageCache/com.unity.visualscripting/Runtime/VisualScripting.Core/Dependencies/FullSerializer/Internal/fsOption.cs:32>
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3)) ? ___0_value : &___0_value), SizeOf_T_tC5D84CBABB6B1934F21007E0A382E362C744EBA6);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),1), L_0, SizeOf_T_tC5D84CBABB6B1934F21007E0A382E362C744EBA6);
		//<source_info:./Library/PackageCache/com.unity.visualscripting/Runtime/VisualScripting.Core/Dependencies/FullSerializer/Internal/fsOption.cs:33>
		return;
	}
}
IL2CPP_EXTERN_C  void fsOption_1__ctor_m343A7CF35E302DB9E5BCA27A0DAC03751B238516_AdjustorThunk (RuntimeObject* __this, Il2CppFullySharedGenericAny ___0_value, const RuntimeMethod* method)
{
	fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88*>(__this + _offset);
	fsOption_1__ctor_m343A7CF35E302DB9E5BCA27A0DAC03751B238516(_thisAdjusted, ___0_value, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 110419
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool fsOption_1_get_HasValue_mA83E56B4674C678E7C760EABB73397EF37356E6F_gshared (fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting/Runtime/VisualScripting.Core/Dependencies/FullSerializer/Internal/fsOption.cs:13>
		bool L_0 = __this->____hasValue;
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool fsOption_1_get_HasValue_mA83E56B4674C678E7C760EABB73397EF37356E6F_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A*>(__this + _offset);
	bool _returnValue;
	_returnValue = fsOption_1_get_HasValue_mA83E56B4674C678E7C760EABB73397EF37356E6F_inline(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 110420
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool fsOption_1_get_IsEmpty_m95C6343EC3B5E180C487DF2F28019391A5B6672E_gshared (fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting/Runtime/VisualScripting.Core/Dependencies/FullSerializer/Internal/fsOption.cs:15>
		bool L_0 = __this->____hasValue;
		return (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool fsOption_1_get_IsEmpty_m95C6343EC3B5E180C487DF2F28019391A5B6672E_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A*>(__this + _offset);
	bool _returnValue;
	_returnValue = fsOption_1_get_IsEmpty_m95C6343EC3B5E180C487DF2F28019391A5B6672E(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 110421
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 fsOption_1_get_Value_m06DFFCCEB8E41DDEAEC89C3133DC3E75E3EA2241_gshared (fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting/Runtime/VisualScripting.Core/Dependencies/FullSerializer/Internal/fsOption.cs:21>
		bool L_0;
		L_0 = fsOption_1_get_IsEmpty_m95C6343EC3B5E180C487DF2F28019391A5B6672E(__this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting/Runtime/VisualScripting.Core/Dependencies/FullSerializer/Internal/fsOption.cs:23>
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0A7D3B18DF4F9238A50A156FF06A5A7E794C1C7F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0013:
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting/Runtime/VisualScripting.Core/Dependencies/FullSerializer/Internal/fsOption.cs:25>
		fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 L_2 = __this->____value;
		return L_2;
	}
}
IL2CPP_EXTERN_C  fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 fsOption_1_get_Value_m06DFFCCEB8E41DDEAEC89C3133DC3E75E3EA2241_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A*>(__this + _offset);
	fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 _returnValue;
	_returnValue = fsOption_1_get_Value_m06DFFCCEB8E41DDEAEC89C3133DC3E75E3EA2241(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 110422
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsOption_1__ctor_m22E0CD4999637C5B1CCFAD980FD29F2FFE3963B6_gshared (fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A* __this, fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 ___0_value, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting/Runtime/VisualScripting.Core/Dependencies/FullSerializer/Internal/fsOption.cs:31>
		__this->____hasValue = (bool)1;
		//<source_info:./Library/PackageCache/com.unity.visualscripting/Runtime/VisualScripting.Core/Dependencies/FullSerializer/Internal/fsOption.cs:32>
		fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 L_0 = ___0_value;
		__this->____value = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->____value))->___Ancestors), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->____value))->___VersionString), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->____value))->___ModelType), (void*)NULL);
		#endif
		//<source_info:./Library/PackageCache/com.unity.visualscripting/Runtime/VisualScripting.Core/Dependencies/FullSerializer/Internal/fsOption.cs:33>
		return;
	}
}
IL2CPP_EXTERN_C  void fsOption_1__ctor_m22E0CD4999637C5B1CCFAD980FD29F2FFE3963B6_AdjustorThunk (RuntimeObject* __this, fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 ___0_value, const RuntimeMethod* method)
{
	fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A*>(__this + _offset);
	fsOption_1__ctor_m22E0CD4999637C5B1CCFAD980FD29F2FFE3963B6(_thisAdjusted, ___0_value, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Method Definition Index: 15474
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength;
		return L_0;
	}
}
// Method Definition Index: 129619
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ExtractKeyDelegate_Invoke_m3214A3F92C2EB22088AB7738E8DFE1BE70925148_gshared_inline (ExtractKeyDelegate_t9BADAD4BDEEE5FEB8CBD095F1EA307C3DA921583* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	typedef String_t* (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_value, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 110419
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool fsOption_1_get_HasValue_m2E9021BB4CB6156A14918A5B865D21751CA6D00C_gshared_inline (fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting/Runtime/VisualScripting.Core/Dependencies/FullSerializer/Internal/fsOption.cs:13>
		bool L_0 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),0));
		return L_0;
	}
}
// Method Definition Index: 110419
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool fsOption_1_get_HasValue_mA83E56B4674C678E7C760EABB73397EF37356E6F_gshared_inline (fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting/Runtime/VisualScripting.Core/Dependencies/FullSerializer/Internal/fsOption.cs:13>
		bool L_0 = __this->____hasValue;
		return L_0;
	}
}
