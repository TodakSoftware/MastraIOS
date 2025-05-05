#include "pch-cpp.hpp"





struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
struct Actor_t2D9C6030A1C7755F708F67A1BA3C24F1E867351B;
struct Delegate_t;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct MethodInfo_t;
struct StateSyncPolicy_tD86D02D0DB8CF2AEAEDAD22657227470F12E3B66;
struct String_t;
struct Ticker_t8A1FAC3C3201311421A5F68814E3DC7B5C2E6B4A;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C const RuntimeMethod* Actor_InternalOnTick_m59B65E1C1DCC095E6AD11179F7A448AE8921019D_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct U3CModuleU3E_tCE6B745E31FF2EAD824EFD3B41769C653A8691B2 
{
};
struct Actor_t2D9C6030A1C7755F708F67A1BA3C24F1E867351B  : public RuntimeObject
{
	Ticker_t8A1FAC3C3201311421A5F68814E3DC7B5C2E6B4A* ___ticker;
	int32_t ___U3CtickU3Ek__BackingField;
};
struct StateSyncPolicy_tD86D02D0DB8CF2AEAEDAD22657227470F12E3B66  : public RuntimeObject
{
	int32_t ___U3CcatchUpThresholdU3Ek__BackingField;
	bool ___U3CwithPredictionU3Ek__BackingField;
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
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
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
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A 
{
	int64_t ____ticks;
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
struct NetworkRole_t6BAE8B3B95BC409097B98129EF998CD676E667C0 
{
	int32_t ___value__;
};
struct Ticker_t8A1FAC3C3201311421A5F68814E3DC7B5C2E6B4A  : public RuntimeObject
{
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___U3CloopDurationU3Ek__BackingField;
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___U3CremainingTimeU3Ek__BackingField;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___onTick;
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
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct IntPtr_t_StaticFields
{
	intptr_t ___Zero;
};
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_StaticFields
{
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___Zero;
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MaxValue;
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MinValue;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif



IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00 (Delegate_t* ___0_a, Delegate_t* ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3 (Delegate_t* ___0_source, Delegate_t* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Ticker_set_loopDuration_mDCD774ADCAD2C91924D19A08AC0392EAB429FA65_inline (Ticker_t8A1FAC3C3201311421A5F68814E3DC7B5C2E6B4A* __this, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Ticker_set_remainingTime_m1905DA93967844C704562C43ECFB6FB35355AAB9_inline (Ticker_t8A1FAC3C3201311421A5F68814E3DC7B5C2E6B4A* __this, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A Ticker_get_remainingTime_m6BA1105B276C49CE7F16A3CAEB837C59D755FB6C_inline (Ticker_t8A1FAC3C3201311421A5F68814E3DC7B5C2E6B4A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A TimeSpan_op_Subtraction_m56EC225AACB5E7C91E29A2ECB634B658A63289F7 (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___0_t1, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___1_t2, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A Ticker_get_loopDuration_m7013B213154A1B3CDC887478AE2CA54C462FF9A9_inline (Ticker_t8A1FAC3C3201311421A5F68814E3DC7B5C2E6B4A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A TimeSpan_op_Addition_mD8B0E0E30595D82C7336CCCA411FE384441DE1A6 (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___0_t1, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___1_t2, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TimeSpan_op_LessThanOrEqual_m56A0500CAC0C9B531B5D390D94B0F0A062A3808A (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___0_t1, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___1_t2, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StateSyncPolicy_set_withPrediction_m3152D72FE402E4ABCAA605987861BFBCB575E2D6_inline (StateSyncPolicy_tD86D02D0DB8CF2AEAEDAD22657227470F12E3B66* __this, bool ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StateSyncPolicy_set_catchUpThreshold_mB5C890B72DA8C516ED9E137B21B840CFAB778CA1_inline (StateSyncPolicy_tD86D02D0DB8CF2AEAEDAD22657227470F12E3B66* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ticker_add_onTick_m95AC65E92A1CBEB4E80772973291A593F9205602 (Ticker_t8A1FAC3C3201311421A5F68814E3DC7B5C2E6B4A* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Actor_get_tick_m8C977B73A6E27043CEFAE373CD4288BAD5859221_inline (Actor_t2D9C6030A1C7755F708F67A1BA3C24F1E867351B* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Actor_set_tick_m0A567E2F42AF9F3B1F7FF920644E50ED929C9427_inline (Actor_t2D9C6030A1C7755F708F67A1BA3C24F1E867351B* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ticker_remove_onTick_mBA9C954D62EFA912E34A5D19B554670BFF7D913E (Ticker_t8A1FAC3C3201311421A5F68814E3DC7B5C2E6B4A* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_value, const RuntimeMethod* method) ;
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
// Method Definition Index: 134054
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A Ticker_get_loopDuration_m7013B213154A1B3CDC887478AE2CA54C462FF9A9 (Ticker_t8A1FAC3C3201311421A5F68814E3DC7B5C2E6B4A* __this, const RuntimeMethod* method) 
{
	{
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_0 = __this->___U3CloopDurationU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 134055
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ticker_set_loopDuration_mDCD774ADCAD2C91924D19A08AC0392EAB429FA65 (Ticker_t8A1FAC3C3201311421A5F68814E3DC7B5C2E6B4A* __this, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___0_value, const RuntimeMethod* method) 
{
	{
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_0 = ___0_value;
		__this->___U3CloopDurationU3Ek__BackingField = L_0;
		return;
	}
}
// Method Definition Index: 134056
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A Ticker_get_remainingTime_m6BA1105B276C49CE7F16A3CAEB837C59D755FB6C (Ticker_t8A1FAC3C3201311421A5F68814E3DC7B5C2E6B4A* __this, const RuntimeMethod* method) 
{
	{
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_0 = __this->___U3CremainingTimeU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 134057
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ticker_set_remainingTime_m1905DA93967844C704562C43ECFB6FB35355AAB9 (Ticker_t8A1FAC3C3201311421A5F68814E3DC7B5C2E6B4A* __this, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___0_value, const RuntimeMethod* method) 
{
	{
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_0 = ___0_value;
		__this->___U3CremainingTimeU3Ek__BackingField = L_0;
		return;
	}
}
// Method Definition Index: 134058
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ticker_add_onTick_m95AC65E92A1CBEB4E80772973291A593F9205602 (Ticker_t8A1FAC3C3201311421A5F68814E3DC7B5C2E6B4A* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_2 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___onTick;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_4, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07** L_5 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07**)(&__this->___onTick);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 134059
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ticker_remove_onTick_mBA9C954D62EFA912E34A5D19B554670BFF7D913E (Ticker_t8A1FAC3C3201311421A5F68814E3DC7B5C2E6B4A* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_2 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___onTick;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_4, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07** L_5 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07**)(&__this->___onTick);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 134060
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ticker__ctor_mC013BB10E487B24731A1010896A04354753E6F2F (Ticker_t8A1FAC3C3201311421A5F68814E3DC7B5C2E6B4A* __this, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___0_loopDuration, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_0 = ___0_loopDuration;
		Ticker_set_loopDuration_mDCD774ADCAD2C91924D19A08AC0392EAB429FA65_inline(__this, L_0, NULL);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_1 = ___0_loopDuration;
		Ticker_set_remainingTime_m1905DA93967844C704562C43ECFB6FB35355AAB9_inline(__this, L_1, NULL);
		return;
	}
}
// Method Definition Index: 134061
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ticker_OnTimePassed_m62EF1974B0641E157D0B8CA349152875E64E4833 (Ticker_t8A1FAC3C3201311421A5F68814E3DC7B5C2E6B4A* __this, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___0_deltaTime, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B3_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B2_0 = NULL;
	{
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_0;
		L_0 = Ticker_get_remainingTime_m6BA1105B276C49CE7F16A3CAEB837C59D755FB6C_inline(__this, NULL);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_1 = ___0_deltaTime;
		il2cpp_codegen_runtime_class_init_inline(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_2;
		L_2 = TimeSpan_op_Subtraction_m56EC225AACB5E7C91E29A2ECB634B658A63289F7(L_0, L_1, NULL);
		Ticker_set_remainingTime_m1905DA93967844C704562C43ECFB6FB35355AAB9_inline(__this, L_2, NULL);
		goto IL_0042;
	}

IL_0016:
	{
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_3;
		L_3 = Ticker_get_remainingTime_m6BA1105B276C49CE7F16A3CAEB837C59D755FB6C_inline(__this, NULL);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_4;
		L_4 = Ticker_get_loopDuration_m7013B213154A1B3CDC887478AE2CA54C462FF9A9_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_5;
		L_5 = TimeSpan_op_Addition_mD8B0E0E30595D82C7336CCCA411FE384441DE1A6(L_3, L_4, NULL);
		Ticker_set_remainingTime_m1905DA93967844C704562C43ECFB6FB35355AAB9_inline(__this, L_5, NULL);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = __this->___onTick;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7 = L_6;
		if (L_7)
		{
			G_B3_0 = L_7;
			goto IL_003b;
		}
		G_B2_0 = L_7;
	}
	{
		goto IL_0041;
	}

IL_003b:
	{
		NullCheck(G_B3_0);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(G_B3_0, NULL);
	}

IL_0041:
	{
	}

IL_0042:
	{
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_8;
		L_8 = Ticker_get_remainingTime_m6BA1105B276C49CE7F16A3CAEB837C59D755FB6C_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_9 = ((TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_StaticFields*)il2cpp_codegen_static_fields_for(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var))->___Zero;
		bool L_10;
		L_10 = TimeSpan_op_LessThanOrEqual_m56A0500CAC0C9B531B5D390D94B0F0A062A3808A(L_8, L_9, NULL);
		V_0 = L_10;
		bool L_11 = V_0;
		if (L_11)
		{
			goto IL_0016;
		}
	}
	{
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
// Method Definition Index: 134063
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StateSyncPolicy_get_catchUpThreshold_mEFFA76EBD5E1F3D4EDF3C6A71596DE7A2B8C1B58 (StateSyncPolicy_tD86D02D0DB8CF2AEAEDAD22657227470F12E3B66* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CcatchUpThresholdU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 134064
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateSyncPolicy_set_catchUpThreshold_mB5C890B72DA8C516ED9E137B21B840CFAB778CA1 (StateSyncPolicy_tD86D02D0DB8CF2AEAEDAD22657227470F12E3B66* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CcatchUpThresholdU3Ek__BackingField = L_0;
		return;
	}
}
// Method Definition Index: 134065
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StateSyncPolicy_get_withPrediction_mA59D949F9BC2786B9F64DE82D6D2381753E85C7B (StateSyncPolicy_tD86D02D0DB8CF2AEAEDAD22657227470F12E3B66* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CwithPredictionU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 134066
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateSyncPolicy_set_withPrediction_m3152D72FE402E4ABCAA605987861BFBCB575E2D6 (StateSyncPolicy_tD86D02D0DB8CF2AEAEDAD22657227470F12E3B66* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->___U3CwithPredictionU3Ek__BackingField = L_0;
		return;
	}
}
// Method Definition Index: 134067
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateSyncPolicy__ctor_m9A7BBB411F44171B6961A1E382F142705CA610A6 (StateSyncPolicy_tD86D02D0DB8CF2AEAEDAD22657227470F12E3B66* __this, int32_t ___0_catchUpThreshold, bool ___1_withPrediction, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		bool L_0 = ___1_withPrediction;
		StateSyncPolicy_set_withPrediction_m3152D72FE402E4ABCAA605987861BFBCB575E2D6_inline(__this, L_0, NULL);
		int32_t L_1 = ___0_catchUpThreshold;
		StateSyncPolicy_set_catchUpThreshold_mB5C890B72DA8C516ED9E137B21B840CFAB778CA1_inline(__this, L_1, NULL);
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
// Method Definition Index: 134068
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Actor_get_tick_m8C977B73A6E27043CEFAE373CD4288BAD5859221 (Actor_t2D9C6030A1C7755F708F67A1BA3C24F1E867351B* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CtickU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 134069
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Actor_set_tick_m0A567E2F42AF9F3B1F7FF920644E50ED929C9427 (Actor_t2D9C6030A1C7755F708F67A1BA3C24F1E867351B* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CtickU3Ek__BackingField = L_0;
		return;
	}
}
// Method Definition Index: 134070
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A Actor_get_tickDeltaTime_m019C304C88917E2A60A382591D8409C29A314E5D (Actor_t2D9C6030A1C7755F708F67A1BA3C24F1E867351B* __this, const RuntimeMethod* method) 
{
	{
		Ticker_t8A1FAC3C3201311421A5F68814E3DC7B5C2E6B4A* L_0 = __this->___ticker;
		NullCheck(L_0);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_1;
		L_1 = Ticker_get_loopDuration_m7013B213154A1B3CDC887478AE2CA54C462FF9A9_inline(L_0, NULL);
		return L_1;
	}
}
// Method Definition Index: 134071
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Actor__ctor_m830B6B25E90E5931A5E9D6B9DC8146FC5388FE47 (Actor_t2D9C6030A1C7755F708F67A1BA3C24F1E867351B* __this, Ticker_t8A1FAC3C3201311421A5F68814E3DC7B5C2E6B4A* ___0_ticker, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Actor_InternalOnTick_m59B65E1C1DCC095E6AD11179F7A448AE8921019D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___U3CtickU3Ek__BackingField = (-1);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		Ticker_t8A1FAC3C3201311421A5F68814E3DC7B5C2E6B4A* L_0 = ___0_ticker;
		__this->___ticker = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ticker), (void*)L_0);
		Ticker_t8A1FAC3C3201311421A5F68814E3DC7B5C2E6B4A* L_1 = ___0_ticker;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_2, __this, (intptr_t)((void*)Actor_InternalOnTick_m59B65E1C1DCC095E6AD11179F7A448AE8921019D_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		Ticker_add_onTick_m95AC65E92A1CBEB4E80772973291A593F9205602(L_1, L_2, NULL);
		return;
	}
}
// Method Definition Index: 134072
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Actor_InternalOnTick_m59B65E1C1DCC095E6AD11179F7A448AE8921019D (Actor_t2D9C6030A1C7755F708F67A1BA3C24F1E867351B* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = Actor_get_tick_m8C977B73A6E27043CEFAE373CD4288BAD5859221_inline(__this, NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		Actor_set_tick_m0A567E2F42AF9F3B1F7FF920644E50ED929C9427_inline(__this, ((int32_t)il2cpp_codegen_add(L_1, 1)), NULL);
		VirtualActionInvoker0::Invoke(4, __this);
		return;
	}
}
// Method Definition Index: 134074
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Actor_Dispose_mDEFFA1190967452BB5F010D52417E19C54E2E421 (Actor_t2D9C6030A1C7755F708F67A1BA3C24F1E867351B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Actor_InternalOnTick_m59B65E1C1DCC095E6AD11179F7A448AE8921019D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Ticker_t8A1FAC3C3201311421A5F68814E3DC7B5C2E6B4A* L_0 = __this->___ticker;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_1, __this, (intptr_t)((void*)Actor_InternalOnTick_m59B65E1C1DCC095E6AD11179F7A448AE8921019D_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		Ticker_remove_onTick_mBA9C954D62EFA912E34A5D19B554670BFF7D913E(L_0, L_1, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Method Definition Index: 134055
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Ticker_set_loopDuration_mDCD774ADCAD2C91924D19A08AC0392EAB429FA65_inline (Ticker_t8A1FAC3C3201311421A5F68814E3DC7B5C2E6B4A* __this, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___0_value, const RuntimeMethod* method) 
{
	{
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_0 = ___0_value;
		__this->___U3CloopDurationU3Ek__BackingField = L_0;
		return;
	}
}
// Method Definition Index: 134057
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Ticker_set_remainingTime_m1905DA93967844C704562C43ECFB6FB35355AAB9_inline (Ticker_t8A1FAC3C3201311421A5F68814E3DC7B5C2E6B4A* __this, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___0_value, const RuntimeMethod* method) 
{
	{
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_0 = ___0_value;
		__this->___U3CremainingTimeU3Ek__BackingField = L_0;
		return;
	}
}
// Method Definition Index: 134056
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A Ticker_get_remainingTime_m6BA1105B276C49CE7F16A3CAEB837C59D755FB6C_inline (Ticker_t8A1FAC3C3201311421A5F68814E3DC7B5C2E6B4A* __this, const RuntimeMethod* method) 
{
	{
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_0 = __this->___U3CremainingTimeU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 134054
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A Ticker_get_loopDuration_m7013B213154A1B3CDC887478AE2CA54C462FF9A9_inline (Ticker_t8A1FAC3C3201311421A5F68814E3DC7B5C2E6B4A* __this, const RuntimeMethod* method) 
{
	{
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_0 = __this->___U3CloopDurationU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 15650
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 134066
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StateSyncPolicy_set_withPrediction_m3152D72FE402E4ABCAA605987861BFBCB575E2D6_inline (StateSyncPolicy_tD86D02D0DB8CF2AEAEDAD22657227470F12E3B66* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->___U3CwithPredictionU3Ek__BackingField = L_0;
		return;
	}
}
// Method Definition Index: 134064
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StateSyncPolicy_set_catchUpThreshold_mB5C890B72DA8C516ED9E137B21B840CFAB778CA1_inline (StateSyncPolicy_tD86D02D0DB8CF2AEAEDAD22657227470F12E3B66* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CcatchUpThresholdU3Ek__BackingField = L_0;
		return;
	}
}
// Method Definition Index: 134068
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Actor_get_tick_m8C977B73A6E27043CEFAE373CD4288BAD5859221_inline (Actor_t2D9C6030A1C7755F708F67A1BA3C24F1E867351B* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CtickU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 134069
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Actor_set_tick_m0A567E2F42AF9F3B1F7FF920644E50ED929C9427_inline (Actor_t2D9C6030A1C7755F708F67A1BA3C24F1E867351B* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CtickU3Ek__BackingField = L_0;
		return;
	}
}
