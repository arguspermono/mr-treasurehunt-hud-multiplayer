#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif



#include "vm/CachedCCWBase.h"
#include "utils/New.h"


struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
struct KeyCollection_t08A22134ED7D772EFC919A99FC94525FC3F6F01A;
struct KeyCollection_t851423C7344032A1F54545C69FC6507778294D6C;
struct KeyCollection_tB57CC90FD7461471159C351E10C1C4C745284454;
struct KeyCollection_tA4C98D4683EA62A1ADAB410A11C395280AC2BF2C;
struct KeyCollection_t17DF620CCFE376312BD13BF40FC8F9EFC7314A19;
struct KeyCollection_t459B292797CA8E4875DD12495B2A79E56F5FD2A5;
struct KeyCollection_t26620BB43BDAA24882C5B5AE5EBF46C2362108F7;
struct ValueCollection_t01DA97BF50D83FEC330190A9A98CFF75B3801084;
struct ValueCollection_t6CD4B9552B29D570FBA4E0145D0C98841ECCC8C1;
struct ValueCollection_tAA4B91D1FC6E3150E12FB777D5C1A8530004C5D1;
struct ValueCollection_t724BDA5C2FD77CCD0DA64DBC329BBE06C5BB82D0;
struct ValueCollection_t300A22EFE26D3294E954E863A88AB8982BC2C30D;
struct ValueCollection_tF970ED5BF04048113E4E6CCC4C11DA5862AF78A2;
struct ValueCollection_t3B80A05F6877E79B4863617CC348739144DAA5FF;
struct EntryU5BU5D_tA3F94CC7F2B60A84EFCEC02E1D3028065518E21B;
struct EntryU5BU5D_tAEFE165DEE6FDB9F2B657E11D15B8C95DD88B0C2;
struct EntryU5BU5D_tBC8769FFC7ECC10C2740A220C39736B63B151E29;
struct EntryU5BU5D_t4E0135C13EE08B9193FEC5ED4EBC18AF3DB909DB;
struct EntryU5BU5D_t79987EBCD9F7C1B3008E8FFC672E9B1388866232;
struct EntryU5BU5D_tC43A169AA010AB941E95E5292CF6AB46235C3317;
struct EntryU5BU5D_t1FFC76DF84085A121D954553967595F76F27B3C3;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;

struct IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct NOVTABLE IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) = 0;
};
struct Dictionary_2_t33C9BF26B2450AD59FD5517651D5A19EA70DA3A7  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_tA3F94CC7F2B60A84EFCEC02E1D3028065518E21B* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_t08A22134ED7D772EFC919A99FC94525FC3F6F01A* ____keys;
	ValueCollection_t01DA97BF50D83FEC330190A9A98CFF75B3801084* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_tEFC8016EC28460E6CE058A5F413FAB656883AA5F  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_tAEFE165DEE6FDB9F2B657E11D15B8C95DD88B0C2* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_t851423C7344032A1F54545C69FC6507778294D6C* ____keys;
	ValueCollection_t6CD4B9552B29D570FBA4E0145D0C98841ECCC8C1* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_t0B15A60B00EC883D4249611C6C641C7BED5A71CE  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_tBC8769FFC7ECC10C2740A220C39736B63B151E29* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_tB57CC90FD7461471159C351E10C1C4C745284454* ____keys;
	ValueCollection_tAA4B91D1FC6E3150E12FB777D5C1A8530004C5D1* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_tFCFF42783ACF99F9D85B2DA16D65F3686ED3BB3C  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t4E0135C13EE08B9193FEC5ED4EBC18AF3DB909DB* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_tA4C98D4683EA62A1ADAB410A11C395280AC2BF2C* ____keys;
	ValueCollection_t724BDA5C2FD77CCD0DA64DBC329BBE06C5BB82D0* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_t8C0DA592DDF4EA9C541F52815A938E10CDF500FB  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t79987EBCD9F7C1B3008E8FFC672E9B1388866232* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_t17DF620CCFE376312BD13BF40FC8F9EFC7314A19* ____keys;
	ValueCollection_t300A22EFE26D3294E954E863A88AB8982BC2C30D* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_t5CD3F4D4D92A89783AE1C95F1528A7B08E8A54E0  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_tC43A169AA010AB941E95E5292CF6AB46235C3317* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_t459B292797CA8E4875DD12495B2A79E56F5FD2A5* ____keys;
	ValueCollection_tF970ED5BF04048113E4E6CCC4C11DA5862AF78A2* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_tFA0E7CD5951B83DD87A65E89D971A68E538F9470  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t1FFC76DF84085A121D954553967595F76F27B3C3* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_t26620BB43BDAA24882C5B5AE5EBF46C2362108F7* ____keys;
	ValueCollection_t3B80A05F6877E79B4863617CC348739144DAA5FF* ____values;
	RuntimeObject* ____syncRoot;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif

il2cpp_hresult_t IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue);



struct Dictionary_2_t33C9BF26B2450AD59FD5517651D5A19EA70DA3A7_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Dictionary_2_t33C9BF26B2450AD59FD5517651D5A19EA70DA3A7_ComCallableWrapper>, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline Dictionary_2_t33C9BF26B2450AD59FD5517651D5A19EA70DA3A7_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Dictionary_2_t33C9BF26B2450AD59FD5517651D5A19EA70DA3A7_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
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

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Dictionary_2_t33C9BF26B2450AD59FD5517651D5A19EA70DA3A7(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Dictionary_2_t33C9BF26B2450AD59FD5517651D5A19EA70DA3A7_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Dictionary_2_t33C9BF26B2450AD59FD5517651D5A19EA70DA3A7_ComCallableWrapper(obj));
}

struct Dictionary_2_tEFC8016EC28460E6CE058A5F413FAB656883AA5F_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Dictionary_2_tEFC8016EC28460E6CE058A5F413FAB656883AA5F_ComCallableWrapper>, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline Dictionary_2_tEFC8016EC28460E6CE058A5F413FAB656883AA5F_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Dictionary_2_tEFC8016EC28460E6CE058A5F413FAB656883AA5F_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
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

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Dictionary_2_tEFC8016EC28460E6CE058A5F413FAB656883AA5F(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Dictionary_2_tEFC8016EC28460E6CE058A5F413FAB656883AA5F_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Dictionary_2_tEFC8016EC28460E6CE058A5F413FAB656883AA5F_ComCallableWrapper(obj));
}

struct Dictionary_2_t0B15A60B00EC883D4249611C6C641C7BED5A71CE_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Dictionary_2_t0B15A60B00EC883D4249611C6C641C7BED5A71CE_ComCallableWrapper>, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline Dictionary_2_t0B15A60B00EC883D4249611C6C641C7BED5A71CE_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Dictionary_2_t0B15A60B00EC883D4249611C6C641C7BED5A71CE_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
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

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Dictionary_2_t0B15A60B00EC883D4249611C6C641C7BED5A71CE(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Dictionary_2_t0B15A60B00EC883D4249611C6C641C7BED5A71CE_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Dictionary_2_t0B15A60B00EC883D4249611C6C641C7BED5A71CE_ComCallableWrapper(obj));
}

struct Dictionary_2_tFCFF42783ACF99F9D85B2DA16D65F3686ED3BB3C_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Dictionary_2_tFCFF42783ACF99F9D85B2DA16D65F3686ED3BB3C_ComCallableWrapper>, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline Dictionary_2_tFCFF42783ACF99F9D85B2DA16D65F3686ED3BB3C_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Dictionary_2_tFCFF42783ACF99F9D85B2DA16D65F3686ED3BB3C_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
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

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Dictionary_2_tFCFF42783ACF99F9D85B2DA16D65F3686ED3BB3C(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Dictionary_2_tFCFF42783ACF99F9D85B2DA16D65F3686ED3BB3C_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Dictionary_2_tFCFF42783ACF99F9D85B2DA16D65F3686ED3BB3C_ComCallableWrapper(obj));
}

struct Dictionary_2_t8C0DA592DDF4EA9C541F52815A938E10CDF500FB_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Dictionary_2_t8C0DA592DDF4EA9C541F52815A938E10CDF500FB_ComCallableWrapper>, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline Dictionary_2_t8C0DA592DDF4EA9C541F52815A938E10CDF500FB_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Dictionary_2_t8C0DA592DDF4EA9C541F52815A938E10CDF500FB_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
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

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Dictionary_2_t8C0DA592DDF4EA9C541F52815A938E10CDF500FB(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Dictionary_2_t8C0DA592DDF4EA9C541F52815A938E10CDF500FB_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Dictionary_2_t8C0DA592DDF4EA9C541F52815A938E10CDF500FB_ComCallableWrapper(obj));
}

struct Dictionary_2_t5CD3F4D4D92A89783AE1C95F1528A7B08E8A54E0_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Dictionary_2_t5CD3F4D4D92A89783AE1C95F1528A7B08E8A54E0_ComCallableWrapper>, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline Dictionary_2_t5CD3F4D4D92A89783AE1C95F1528A7B08E8A54E0_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Dictionary_2_t5CD3F4D4D92A89783AE1C95F1528A7B08E8A54E0_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
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

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Dictionary_2_t5CD3F4D4D92A89783AE1C95F1528A7B08E8A54E0(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Dictionary_2_t5CD3F4D4D92A89783AE1C95F1528A7B08E8A54E0_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Dictionary_2_t5CD3F4D4D92A89783AE1C95F1528A7B08E8A54E0_ComCallableWrapper(obj));
}

struct Dictionary_2_tFA0E7CD5951B83DD87A65E89D971A68E538F9470_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Dictionary_2_tFA0E7CD5951B83DD87A65E89D971A68E538F9470_ComCallableWrapper>, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline Dictionary_2_tFA0E7CD5951B83DD87A65E89D971A68E538F9470_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Dictionary_2_tFA0E7CD5951B83DD87A65E89D971A68E538F9470_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
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

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Dictionary_2_tFA0E7CD5951B83DD87A65E89D971A68E538F9470(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Dictionary_2_tFA0E7CD5951B83DD87A65E89D971A68E538F9470_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Dictionary_2_tFA0E7CD5951B83DD87A65E89D971A68E538F9470_ComCallableWrapper(obj));
}
