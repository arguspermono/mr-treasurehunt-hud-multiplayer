#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


struct GenericVirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

struct Dictionary_2_t6A075724755C7A5DCAD6974ABDEC33484D2EA941;
struct IEqualityComparer_1_tDBFC8496F14612776AF930DBF84AFE7D06D1F0E9;
struct KeyCollection_tF10B99F6E09082A28F0A88CEEFEE8EEC2974C5B1;
struct MixedRealitySpatialAwarenessEventData_1_tE46EB2E96DFDDF77196F0A24715743FD22640021;
struct ValueCollection_tA72BD7D724CE3349A8B73188A810631DD6C92C68;
struct EntryU5BU5D_t2D773360023B366541A954D8D8740BA28904C9FE;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B;
struct DemoSpatialMeshHandler_tFD823EAEBF6167EFE262AAD6B62DD2AA8301B2EE;
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707;
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
struct IMixedRealityEventSource_t9E9DFD08DEE578702833FF502590A1E0476E59E1;
struct MixedRealitySpatialAwarenessEventData_t665140146CE5C138E399BC73BA5802220AE76341;
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
struct SpatialAwarenessMeshObject_t5577B6C05F0A1138C582A8F1B7A717B81AE11379;
struct String_t;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t6A075724755C7A5DCAD6974ABDEC33484D2EA941_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral697FB0231F804375E0927CADC1B1C0FA85C07BEF;
IL2CPP_EXTERN_C String_t* _stringLiteralBABD5F84CFAE42B094A0A937A48816B61338D316;
IL2CPP_EXTERN_C String_t* _stringLiteralD87DE9472D71F6ED13876C3E6F9565591968955E;
IL2CPP_EXTERN_C const RuntimeMethod* DemoSpatialMeshHandler_RegisterEventHandlers_TisIMixedRealitySpatialAwarenessObservationHandler_1_t92770D3EC6A2A2A1BCC5AFF6614A5CA110847BA4_TisSpatialAwarenessMeshObject_t5577B6C05F0A1138C582A8F1B7A717B81AE11379_mADAFE4F394C813DC386DD8E31846C3E7C54D8866_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DemoSpatialMeshHandler_UnregisterEventHandlers_TisIMixedRealitySpatialAwarenessObservationHandler_1_t92770D3EC6A2A2A1BCC5AFF6614A5CA110847BA4_TisSpatialAwarenessMeshObject_t5577B6C05F0A1138C582A8F1B7A717B81AE11379_m55C725D99854B89870A9A3385B2318573E0E97A8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m2A953E5E686FD21410BFE26A979E62AD3B606ACD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m96DDD145802AA047D446C1CCBFE8C7081826DDB3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m1D1D35A762F0F28B2765B4DA71CF79CB366FE469_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_mFD3AC7FF3135A2F96FD773BBE87E3638ED2DC605_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m4B3F8178FB972174D13CD5AB86A7DA5B5251CA3B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m8A5D89A88626E5D1C4EC173C7E833ACAC3DDE2FA_RuntimeMethod_var;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct U3CModuleU3E_t3179111F5E33FE15E26FF1A12B4917456EB860EA 
{
};
struct Dictionary_2_t6A075724755C7A5DCAD6974ABDEC33484D2EA941  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t2D773360023B366541A954D8D8740BA28904C9FE* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_tF10B99F6E09082A28F0A88CEEFEE8EEC2974C5B1* ____keys;
	ValueCollection_tA72BD7D724CE3349A8B73188A810631DD6C92C68* ____values;
	RuntimeObject* ____syncRoot;
};
struct AbstractEventData_tAE1A127ED657117548181D29FFE4B1B14D8E67F7  : public RuntimeObject
{
	bool ___m_Used;
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
struct BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F  : public AbstractEventData_tAE1A127ED657117548181D29FFE4B1B14D8E67F7
{
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___m_EventSystem;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D 
{
	uint64_t ____dateData;
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	uint32_t ___m_value;
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
struct GenericBaseEventData_tA3C45766BDAC0A70B553C855E65F215F2E881687  : public BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F
{
	RuntimeObject* ___U3CEventSourceU3Ek__BackingField;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___U3CEventTimeU3Ek__BackingField;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CselectedObjectU3Ek__BackingField;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	intptr_t ___m_CachedPtr;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr;
};
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct MixedRealitySpatialAwarenessEventData_t665140146CE5C138E399BC73BA5802220AE76341  : public GenericBaseEventData_tA3C45766BDAC0A70B553C855E65F215F2E881687
{
	int32_t ___U3CIdU3Ek__BackingField;
};
struct MixedRealitySpatialAwarenessEventData_1_tE46EB2E96DFDDF77196F0A24715743FD22640021  : public MixedRealitySpatialAwarenessEventData_t665140146CE5C138E399BC73BA5802220AE76341
{
	SpatialAwarenessMeshObject_t5577B6C05F0A1138C582A8F1B7A717B81AE11379* ___U3CSpatialObjectU3Ek__BackingField;
};
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ___m_CancellationTokenSource;
};
struct DemoSpatialMeshHandler_tFD823EAEBF6167EFE262AAD6B62DD2AA8301B2EE  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	Dictionary_2_t6A075724755C7A5DCAD6974ABDEC33484D2EA941* ___meshUpdateData;
	bool ___isRegistered;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m2A953E5E686FD21410BFE26A979E62AD3B606ACD_gshared (Dictionary_2_t6A075724755C7A5DCAD6974ABDEC33484D2EA941* __this, int32_t ___0_key, uint32_t ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mFD3AC7FF3135A2F96FD773BBE87E3638ED2DC605_gshared (Dictionary_2_t6A075724755C7A5DCAD6974ABDEC33484D2EA941* __this, int32_t ___0_key, uint32_t* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m8A5D89A88626E5D1C4EC173C7E833ACAC3DDE2FA_gshared (Dictionary_2_t6A075724755C7A5DCAD6974ABDEC33484D2EA941* __this, int32_t ___0_key, uint32_t ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m96DDD145802AA047D446C1CCBFE8C7081826DDB3_gshared (Dictionary_2_t6A075724755C7A5DCAD6974ABDEC33484D2EA941* __this, int32_t ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m1D1D35A762F0F28B2765B4DA71CF79CB366FE469_gshared (Dictionary_2_t6A075724755C7A5DCAD6974ABDEC33484D2EA941* __this, int32_t ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m4B3F8178FB972174D13CD5AB86A7DA5B5251CA3B_gshared (Dictionary_2_t6A075724755C7A5DCAD6974ABDEC33484D2EA941* __this, const RuntimeMethod* method) ;

IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MixedRealitySpatialAwarenessEventData_get_Id_m862270D43158D37BD0CF07EB63839DCD23E374CF_inline (MixedRealitySpatialAwarenessEventData_t665140146CE5C138E399BC73BA5802220AE76341* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoSpatialMeshHandler_AddToData_m03D3CC4E40A135B619FD3CDD2FF50D803B2745F5 (DemoSpatialMeshHandler_tFD823EAEBF6167EFE262AAD6B62DD2AA8301B2EE* __this, int32_t ___0_eventDataId, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoSpatialMeshHandler_UpdateData_mBE578B5EC4384927F0EDEE67B0F079669A48961D (DemoSpatialMeshHandler_tFD823EAEBF6167EFE262AAD6B62DD2AA8301B2EE* __this, int32_t ___0_eventDataId, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoSpatialMeshHandler_RemoveFromData_m00802A4584E2C4E1F7804C5D7583916AFE7C4FA6 (DemoSpatialMeshHandler_tFD823EAEBF6167EFE262AAD6B62DD2AA8301B2EE* __this, int32_t ___0_eventDataId, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___0_format, RuntimeObject* ___1_arg0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
inline void Dictionary_2_Add_m2A953E5E686FD21410BFE26A979E62AD3B606ACD (Dictionary_2_t6A075724755C7A5DCAD6974ABDEC33484D2EA941* __this, int32_t ___0_key, uint32_t ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t6A075724755C7A5DCAD6974ABDEC33484D2EA941*, int32_t, uint32_t, const RuntimeMethod*))Dictionary_2_Add_m2A953E5E686FD21410BFE26A979E62AD3B606ACD_gshared)(__this, ___0_key, ___1_value, method);
}
inline bool Dictionary_2_TryGetValue_mFD3AC7FF3135A2F96FD773BBE87E3638ED2DC605 (Dictionary_2_t6A075724755C7A5DCAD6974ABDEC33484D2EA941* __this, int32_t ___0_key, uint32_t* ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t6A075724755C7A5DCAD6974ABDEC33484D2EA941*, int32_t, uint32_t*, const RuntimeMethod*))Dictionary_2_TryGetValue_mFD3AC7FF3135A2F96FD773BBE87E3638ED2DC605_gshared)(__this, ___0_key, ___1_value, method);
}
inline void Dictionary_2_set_Item_m8A5D89A88626E5D1C4EC173C7E833ACAC3DDE2FA (Dictionary_2_t6A075724755C7A5DCAD6974ABDEC33484D2EA941* __this, int32_t ___0_key, uint32_t ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t6A075724755C7A5DCAD6974ABDEC33484D2EA941*, int32_t, uint32_t, const RuntimeMethod*))Dictionary_2_set_Item_m8A5D89A88626E5D1C4EC173C7E833ACAC3DDE2FA_gshared)(__this, ___0_key, ___1_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, const RuntimeMethod* method) ;
inline bool Dictionary_2_ContainsKey_m96DDD145802AA047D446C1CCBFE8C7081826DDB3 (Dictionary_2_t6A075724755C7A5DCAD6974ABDEC33484D2EA941* __this, int32_t ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t6A075724755C7A5DCAD6974ABDEC33484D2EA941*, int32_t, const RuntimeMethod*))Dictionary_2_ContainsKey_m96DDD145802AA047D446C1CCBFE8C7081826DDB3_gshared)(__this, ___0_key, method);
}
inline bool Dictionary_2_Remove_m1D1D35A762F0F28B2765B4DA71CF79CB366FE469 (Dictionary_2_t6A075724755C7A5DCAD6974ABDEC33484D2EA941* __this, int32_t ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t6A075724755C7A5DCAD6974ABDEC33484D2EA941*, int32_t, const RuntimeMethod*))Dictionary_2_Remove_m1D1D35A762F0F28B2765B4DA71CF79CB366FE469_gshared)(__this, ___0_key, method);
}
inline void Dictionary_2__ctor_m4B3F8178FB972174D13CD5AB86A7DA5B5251CA3B (Dictionary_2_t6A075724755C7A5DCAD6974ABDEC33484D2EA941* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t6A075724755C7A5DCAD6974ABDEC33484D2EA941*, const RuntimeMethod*))Dictionary_2__ctor_m4B3F8178FB972174D13CD5AB86A7DA5B5251CA3B_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoSpatialMeshHandler_Start_m48A4E737391E236D1A27A49A51CA998F972CDEA4 (DemoSpatialMeshHandler_tFD823EAEBF6167EFE262AAD6B62DD2AA8301B2EE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DemoSpatialMeshHandler_RegisterEventHandlers_TisIMixedRealitySpatialAwarenessObservationHandler_1_t92770D3EC6A2A2A1BCC5AFF6614A5CA110847BA4_TisSpatialAwarenessMeshObject_t5577B6C05F0A1138C582A8F1B7A717B81AE11379_mADAFE4F394C813DC386DD8E31846C3E7C54D8866_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		GenericVirtualActionInvoker0::Invoke(DemoSpatialMeshHandler_RegisterEventHandlers_TisIMixedRealitySpatialAwarenessObservationHandler_1_t92770D3EC6A2A2A1BCC5AFF6614A5CA110847BA4_TisSpatialAwarenessMeshObject_t5577B6C05F0A1138C582A8F1B7A717B81AE11379_mADAFE4F394C813DC386DD8E31846C3E7C54D8866_RuntimeMethod_var, __this);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoSpatialMeshHandler_OnEnable_m292A62C3671D9671F069EC6E7EABE07101291189 (DemoSpatialMeshHandler_tFD823EAEBF6167EFE262AAD6B62DD2AA8301B2EE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DemoSpatialMeshHandler_RegisterEventHandlers_TisIMixedRealitySpatialAwarenessObservationHandler_1_t92770D3EC6A2A2A1BCC5AFF6614A5CA110847BA4_TisSpatialAwarenessMeshObject_t5577B6C05F0A1138C582A8F1B7A717B81AE11379_mADAFE4F394C813DC386DD8E31846C3E7C54D8866_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		GenericVirtualActionInvoker0::Invoke(DemoSpatialMeshHandler_RegisterEventHandlers_TisIMixedRealitySpatialAwarenessObservationHandler_1_t92770D3EC6A2A2A1BCC5AFF6614A5CA110847BA4_TisSpatialAwarenessMeshObject_t5577B6C05F0A1138C582A8F1B7A717B81AE11379_mADAFE4F394C813DC386DD8E31846C3E7C54D8866_RuntimeMethod_var, __this);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoSpatialMeshHandler_OnDisable_m48F2D3F0A146EBFB020B8789EE7A524A3C6A1F1B (DemoSpatialMeshHandler_tFD823EAEBF6167EFE262AAD6B62DD2AA8301B2EE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DemoSpatialMeshHandler_UnregisterEventHandlers_TisIMixedRealitySpatialAwarenessObservationHandler_1_t92770D3EC6A2A2A1BCC5AFF6614A5CA110847BA4_TisSpatialAwarenessMeshObject_t5577B6C05F0A1138C582A8F1B7A717B81AE11379_m55C725D99854B89870A9A3385B2318573E0E97A8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		GenericVirtualActionInvoker0::Invoke(DemoSpatialMeshHandler_UnregisterEventHandlers_TisIMixedRealitySpatialAwarenessObservationHandler_1_t92770D3EC6A2A2A1BCC5AFF6614A5CA110847BA4_TisSpatialAwarenessMeshObject_t5577B6C05F0A1138C582A8F1B7A717B81AE11379_m55C725D99854B89870A9A3385B2318573E0E97A8_RuntimeMethod_var, __this);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoSpatialMeshHandler_OnDestroy_m1D2AF55A02FE4FE4CB76652301F5E07084047160 (DemoSpatialMeshHandler_tFD823EAEBF6167EFE262AAD6B62DD2AA8301B2EE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DemoSpatialMeshHandler_UnregisterEventHandlers_TisIMixedRealitySpatialAwarenessObservationHandler_1_t92770D3EC6A2A2A1BCC5AFF6614A5CA110847BA4_TisSpatialAwarenessMeshObject_t5577B6C05F0A1138C582A8F1B7A717B81AE11379_m55C725D99854B89870A9A3385B2318573E0E97A8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		GenericVirtualActionInvoker0::Invoke(DemoSpatialMeshHandler_UnregisterEventHandlers_TisIMixedRealitySpatialAwarenessObservationHandler_1_t92770D3EC6A2A2A1BCC5AFF6614A5CA110847BA4_TisSpatialAwarenessMeshObject_t5577B6C05F0A1138C582A8F1B7A717B81AE11379_m55C725D99854B89870A9A3385B2318573E0E97A8_RuntimeMethod_var, __this);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoSpatialMeshHandler_OnObservationAdded_mF04C3FED1B4B443CBD6A65153BEF4419BFB5CFE6 (DemoSpatialMeshHandler_tFD823EAEBF6167EFE262AAD6B62DD2AA8301B2EE* __this, MixedRealitySpatialAwarenessEventData_1_tE46EB2E96DFDDF77196F0A24715743FD22640021* ___0_eventData, const RuntimeMethod* method) 
{
	{
		MixedRealitySpatialAwarenessEventData_1_tE46EB2E96DFDDF77196F0A24715743FD22640021* L_0 = ___0_eventData;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = MixedRealitySpatialAwarenessEventData_get_Id_m862270D43158D37BD0CF07EB63839DCD23E374CF_inline(L_0, NULL);
		DemoSpatialMeshHandler_AddToData_m03D3CC4E40A135B619FD3CDD2FF50D803B2745F5(__this, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoSpatialMeshHandler_OnObservationUpdated_m056BD02DA81F91EE4A911D61665B8B314D415632 (DemoSpatialMeshHandler_tFD823EAEBF6167EFE262AAD6B62DD2AA8301B2EE* __this, MixedRealitySpatialAwarenessEventData_1_tE46EB2E96DFDDF77196F0A24715743FD22640021* ___0_eventData, const RuntimeMethod* method) 
{
	{
		MixedRealitySpatialAwarenessEventData_1_tE46EB2E96DFDDF77196F0A24715743FD22640021* L_0 = ___0_eventData;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = MixedRealitySpatialAwarenessEventData_get_Id_m862270D43158D37BD0CF07EB63839DCD23E374CF_inline(L_0, NULL);
		DemoSpatialMeshHandler_UpdateData_mBE578B5EC4384927F0EDEE67B0F079669A48961D(__this, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoSpatialMeshHandler_OnObservationRemoved_m4CAF7C9A0A9CB14A3D1ED0CBDB03888F6B4F6743 (DemoSpatialMeshHandler_tFD823EAEBF6167EFE262AAD6B62DD2AA8301B2EE* __this, MixedRealitySpatialAwarenessEventData_1_tE46EB2E96DFDDF77196F0A24715743FD22640021* ___0_eventData, const RuntimeMethod* method) 
{
	{
		MixedRealitySpatialAwarenessEventData_1_tE46EB2E96DFDDF77196F0A24715743FD22640021* L_0 = ___0_eventData;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = MixedRealitySpatialAwarenessEventData_get_Id_m862270D43158D37BD0CF07EB63839DCD23E374CF_inline(L_0, NULL);
		DemoSpatialMeshHandler_RemoveFromData_m00802A4584E2C4E1F7804C5D7583916AFE7C4FA6(__this, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoSpatialMeshHandler_AddToData_m03D3CC4E40A135B619FD3CDD2FF50D803B2745F5 (DemoSpatialMeshHandler_tFD823EAEBF6167EFE262AAD6B62DD2AA8301B2EE* __this, int32_t ___0_eventDataId, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m2A953E5E686FD21410BFE26A979E62AD3B606ACD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral697FB0231F804375E0927CADC1B1C0FA85C07BEF);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___0_eventDataId;
		int32_t L_1 = L_0;
		RuntimeObject* L_2 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_1);
		String_t* L_3;
		L_3 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral697FB0231F804375E0927CADC1B1C0FA85C07BEF, L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_3, NULL);
		Dictionary_2_t6A075724755C7A5DCAD6974ABDEC33484D2EA941* L_4 = __this->___meshUpdateData;
		int32_t L_5 = ___0_eventDataId;
		NullCheck(L_4);
		Dictionary_2_Add_m2A953E5E686FD21410BFE26A979E62AD3B606ACD(L_4, L_5, 0, Dictionary_2_Add_m2A953E5E686FD21410BFE26A979E62AD3B606ACD_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoSpatialMeshHandler_UpdateData_mBE578B5EC4384927F0EDEE67B0F079669A48961D (DemoSpatialMeshHandler_tFD823EAEBF6167EFE262AAD6B62DD2AA8301B2EE* __this, int32_t ___0_eventDataId, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mFD3AC7FF3135A2F96FD773BBE87E3638ED2DC605_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m8A5D89A88626E5D1C4EC173C7E833ACAC3DDE2FA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBABD5F84CFAE42B094A0A937A48816B61338D316);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	bool V_1 = false;
	{
		Dictionary_2_t6A075724755C7A5DCAD6974ABDEC33484D2EA941* L_0 = __this->___meshUpdateData;
		int32_t L_1 = ___0_eventDataId;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_TryGetValue_mFD3AC7FF3135A2F96FD773BBE87E3638ED2DC605(L_0, L_1, (&V_0), Dictionary_2_TryGetValue_mFD3AC7FF3135A2F96FD773BBE87E3638ED2DC605_RuntimeMethod_var);
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0043;
		}
	}
	{
		Dictionary_2_t6A075724755C7A5DCAD6974ABDEC33484D2EA941* L_4 = __this->___meshUpdateData;
		int32_t L_5 = ___0_eventDataId;
		uint32_t L_6 = V_0;
		int32_t L_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, 1));
		V_0 = L_7;
		NullCheck(L_4);
		Dictionary_2_set_Item_m8A5D89A88626E5D1C4EC173C7E833ACAC3DDE2FA(L_4, L_5, L_7, Dictionary_2_set_Item_m8A5D89A88626E5D1C4EC173C7E833ACAC3DDE2FA_RuntimeMethod_var);
		int32_t L_8 = ___0_eventDataId;
		int32_t L_9 = L_8;
		RuntimeObject* L_10 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_9);
		uint32_t L_11 = V_0;
		uint32_t L_12 = L_11;
		RuntimeObject* L_13 = Box(UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var, &L_12);
		String_t* L_14;
		L_14 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteralBABD5F84CFAE42B094A0A937A48816B61338D316, L_10, L_13, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_14, NULL);
	}

IL_0043:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoSpatialMeshHandler_RemoveFromData_m00802A4584E2C4E1F7804C5D7583916AFE7C4FA6 (DemoSpatialMeshHandler_tFD823EAEBF6167EFE262AAD6B62DD2AA8301B2EE* __this, int32_t ___0_eventDataId, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m96DDD145802AA047D446C1CCBFE8C7081826DDB3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m1D1D35A762F0F28B2765B4DA71CF79CB366FE469_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD87DE9472D71F6ED13876C3E6F9565591968955E);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		Dictionary_2_t6A075724755C7A5DCAD6974ABDEC33484D2EA941* L_0 = __this->___meshUpdateData;
		int32_t L_1 = ___0_eventDataId;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_m96DDD145802AA047D446C1CCBFE8C7081826DDB3(L_0, L_1, Dictionary_2_ContainsKey_m96DDD145802AA047D446C1CCBFE8C7081826DDB3_RuntimeMethod_var);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0036;
		}
	}
	{
		int32_t L_4 = ___0_eventDataId;
		int32_t L_5 = L_4;
		RuntimeObject* L_6 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_5);
		String_t* L_7;
		L_7 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteralD87DE9472D71F6ED13876C3E6F9565591968955E, L_6, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_7, NULL);
		Dictionary_2_t6A075724755C7A5DCAD6974ABDEC33484D2EA941* L_8 = __this->___meshUpdateData;
		int32_t L_9 = ___0_eventDataId;
		NullCheck(L_8);
		bool L_10;
		L_10 = Dictionary_2_Remove_m1D1D35A762F0F28B2765B4DA71CF79CB366FE469(L_8, L_9, Dictionary_2_Remove_m1D1D35A762F0F28B2765B4DA71CF79CB366FE469_RuntimeMethod_var);
	}

IL_0036:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoSpatialMeshHandler__ctor_m3DD926771A64892229BE53755963DB6D5E0B64DF (DemoSpatialMeshHandler_tFD823EAEBF6167EFE262AAD6B62DD2AA8301B2EE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m4B3F8178FB972174D13CD5AB86A7DA5B5251CA3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t6A075724755C7A5DCAD6974ABDEC33484D2EA941_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t6A075724755C7A5DCAD6974ABDEC33484D2EA941* L_0 = (Dictionary_2_t6A075724755C7A5DCAD6974ABDEC33484D2EA941*)il2cpp_codegen_object_new(Dictionary_2_t6A075724755C7A5DCAD6974ABDEC33484D2EA941_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m4B3F8178FB972174D13CD5AB86A7DA5B5251CA3B(L_0, Dictionary_2__ctor_m4B3F8178FB972174D13CD5AB86A7DA5B5251CA3B_RuntimeMethod_var);
		__this->___meshUpdateData = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___meshUpdateData), (void*)L_0);
		__this->___isRegistered = (bool)0;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MixedRealitySpatialAwarenessEventData_get_Id_m862270D43158D37BD0CF07EB63839DCD23E374CF_inline (MixedRealitySpatialAwarenessEventData_t665140146CE5C138E399BC73BA5802220AE76341* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CIdU3Ek__BackingField;
		return L_0;
	}
}
