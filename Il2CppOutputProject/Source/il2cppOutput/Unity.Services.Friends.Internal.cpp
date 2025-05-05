#include "pch-cpp.hpp"





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

struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
struct Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55;
struct Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1;
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
struct Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED;
struct TaskFactory_1_t22C3B5AA2FAC851FE8E5DD878B6D2780B8D61AB3;
struct Task_1_t804F4EFB61396A0242408176C4A0F69562D7EB1E;
struct ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007;
struct Delegate_t;
struct IDeserializable_tC8513EE9D70405AE1269D4D3D753F1B83B696832;
struct IFriendsServiceInternal_t24F30CA575780811A80A41C9F15DC6FE3CD296D4;
struct Notification_t9F68EB0C573729AC018C59DDB27D1CE1E3BAE255;
struct StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352;
struct String_t;
struct TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0;
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E;
struct WireTokenProvider_t463D258A58628A5173D161165A9A77A0CDBEA5FB;
struct ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540;

IL2CPP_EXTERN_C RuntimeClass* IFriendsServiceInternal_t24F30CA575780811A80A41C9F15DC6FE3CD296D4_il2cpp_TypeInfo_var;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct U3CModuleU3E_t8780F09381670F76416B9B8E33E09F97051490BD 
{
};
struct Notification_t9F68EB0C573729AC018C59DDB27D1CE1E3BAE255  : public RuntimeObject
{
	String_t* ___U3CCreatedAtU3Ek__BackingField;
	String_t* ___U3CRequestIDU3Ek__BackingField;
	String_t* ___U3CTypeU3Ek__BackingField;
	RuntimeObject* ___U3CPayloadU3Ek__BackingField;
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
};
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572  : public RuntimeObject
{
	int32_t ___m_taskId;
	Delegate_t* ___m_action;
	RuntimeObject* ___m_stateObject;
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___m_taskScheduler;
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_parent;
	int32_t ___m_stateFlags;
	RuntimeObject* ___m_continuationObject;
	ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540* ___m_contingentProperties;
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
struct WireTokenProvider_t463D258A58628A5173D161165A9A77A0CDBEA5FB  : public RuntimeObject
{
	RuntimeObject* ___m_friendService;
};
struct ChannelToken_t65B05271650820AF814458D7AB1C06A16111EE5F 
{
	String_t* ___ChannelName;
	String_t* ___Token;
};
struct ChannelToken_t65B05271650820AF814458D7AB1C06A16111EE5F_marshaled_pinvoke
{
	char* ___ChannelName;
	char* ___Token;
};
struct ChannelToken_t65B05271650820AF814458D7AB1C06A16111EE5F_marshaled_com
{
	Il2CppChar* ___ChannelName;
	Il2CppChar* ___Token;
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
struct Task_1_t804F4EFB61396A0242408176C4A0F69562D7EB1E  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	ChannelToken_t65B05271650820AF814458D7AB1C06A16111EE5F ___m_result;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct Task_1_t804F4EFB61396A0242408176C4A0F69562D7EB1E_StaticFields
{
	TaskFactory_1_t22C3B5AA2FAC851FE8E5DD878B6D2780B8D61AB3* ___s_defaultFactory;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif



IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
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
// Method Definition Index: 134720
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WireTokenProvider__ctor_m003308702008C05571B21ECFE1875996E8718C6C (WireTokenProvider_t463D258A58628A5173D161165A9A77A0CDBEA5FB* __this, RuntimeObject* ___0_friendService, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.services.friends/Runtime/Internal/Notifications/WireTokenProvider.cs:11>
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		//<source_info:./Library/PackageCache/com.unity.services.friends/Runtime/Internal/Notifications/WireTokenProvider.cs:13>
		RuntimeObject* L_0 = ___0_friendService;
		__this->___m_friendService = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_friendService), (void*)L_0);
		//<source_info:./Library/PackageCache/com.unity.services.friends/Runtime/Internal/Notifications/WireTokenProvider.cs:14>
		return;
	}
}
// Method Definition Index: 134721
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t804F4EFB61396A0242408176C4A0F69562D7EB1E* WireTokenProvider_GetTokenAsync_m783C9B78B35085CA511915B664C25A0EE9A3C55A (WireTokenProvider_t463D258A58628A5173D161165A9A77A0CDBEA5FB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFriendsServiceInternal_t24F30CA575780811A80A41C9F15DC6FE3CD296D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:./Library/PackageCache/com.unity.services.friends/Runtime/Internal/Notifications/WireTokenProvider.cs:18>
		RuntimeObject* L_0 = __this->___m_friendService;
		NullCheck(L_0);
		Task_1_t804F4EFB61396A0242408176C4A0F69562D7EB1E* L_1;
		L_1 = InterfaceFuncInvoker0< Task_1_t804F4EFB61396A0242408176C4A0F69562D7EB1E* >::Invoke(0, IFriendsServiceInternal_t24F30CA575780811A80A41C9F15DC6FE3CD296D4_il2cpp_TypeInfo_var, L_0);
		return L_1;
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
// Method Definition Index: 134722
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Notification_get_CreatedAt_mE94404A697C02858A729B0692554021470CA37CF (Notification_t9F68EB0C573729AC018C59DDB27D1CE1E3BAE255* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.services.friends/Runtime/Internal/Notifications/Notification.cs:20>
		String_t* L_0 = __this->___U3CCreatedAtU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 134723
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Notification_set_CreatedAt_m3827310F7F9818F25505BBEF29621A99FC05047D (Notification_t9F68EB0C573729AC018C59DDB27D1CE1E3BAE255* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.services.friends/Runtime/Internal/Notifications/Notification.cs:20>
		String_t* L_0 = ___0_value;
		__this->___U3CCreatedAtU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCreatedAtU3Ek__BackingField), (void*)L_0);
		return;
	}
}
// Method Definition Index: 134724
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Notification_get_RequestID_m3FD4CA78A3E752EADF91CA53F58211D24E62346A (Notification_t9F68EB0C573729AC018C59DDB27D1CE1E3BAE255* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.services.friends/Runtime/Internal/Notifications/Notification.cs:27>
		String_t* L_0 = __this->___U3CRequestIDU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 134725
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Notification_set_RequestID_mBA34F7BACC100E68DF0946E47DD1E77034D27854 (Notification_t9F68EB0C573729AC018C59DDB27D1CE1E3BAE255* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.services.friends/Runtime/Internal/Notifications/Notification.cs:27>
		String_t* L_0 = ___0_value;
		__this->___U3CRequestIDU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CRequestIDU3Ek__BackingField), (void*)L_0);
		return;
	}
}
// Method Definition Index: 134726
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Notification_get_Type_m1ABC85E9106EC4032D842CA2FA3903FA2B9B8E0A (Notification_t9F68EB0C573729AC018C59DDB27D1CE1E3BAE255* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.services.friends/Runtime/Internal/Notifications/Notification.cs:34>
		String_t* L_0 = __this->___U3CTypeU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 134727
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Notification_set_Type_mFB950A463A490A09858CE5AA34CFE869DD7A0C33 (Notification_t9F68EB0C573729AC018C59DDB27D1CE1E3BAE255* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.services.friends/Runtime/Internal/Notifications/Notification.cs:34>
		String_t* L_0 = ___0_value;
		__this->___U3CTypeU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTypeU3Ek__BackingField), (void*)L_0);
		return;
	}
}
// Method Definition Index: 134728
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Notification_get_Payload_mF02133CE940160C33A8EFFCB79E14727953F3D56 (Notification_t9F68EB0C573729AC018C59DDB27D1CE1E3BAE255* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.services.friends/Runtime/Internal/Notifications/Notification.cs:41>
		RuntimeObject* L_0 = __this->___U3CPayloadU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 134729
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Notification_set_Payload_m334927440F9CCA79C782830EA13D2E4D9F2EE563 (Notification_t9F68EB0C573729AC018C59DDB27D1CE1E3BAE255* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.services.friends/Runtime/Internal/Notifications/Notification.cs:41>
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CPayloadU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CPayloadU3Ek__BackingField), (void*)L_0);
		return;
	}
}
// Method Definition Index: 134730
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Notification__ctor_m24654C905893BF344D5ED2802E4620CA2231002D (Notification_t9F68EB0C573729AC018C59DDB27D1CE1E3BAE255* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
