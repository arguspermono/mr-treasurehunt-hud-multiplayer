#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif



#include "vm/CachedCCWBase.h"
#include "utils/New.h"


struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
struct KeyCollection_t9420BDECF8BA68DB4504D118BBB93F856E4D657A;
struct KeyCollection_t2F188D57986FFD72350BDB82D3FC34EC26672DF3;
struct KeyCollection_t2D4A0A676928B6B23FC759BEF87CD62E780C787C;
struct KeyCollection_t95FD5642BC2C9C7777B7A737F21A78E0AFDD8AA0;
struct KeyCollection_t6844938B4E85E8FC62B6693FB9718C4747CE8514;
struct KeyCollection_t3CC6366B12095908A6B3B512623B34284A09041D;
struct KeyCollection_tED650D294B9CA383F296469055728F18277BAA17;
struct ValueCollection_tAB178C3A4988CC8138AF8611EAF9D49392BE1D1B;
struct ValueCollection_tA7DF40B33CAF1CC12CCC29F4547D85DA818303A7;
struct ValueCollection_t859E6142C18D367171343C29631CF47CAFBD7EB7;
struct ValueCollection_t067B6565DAB51831954BD36DF5F65A806EDBEF99;
struct ValueCollection_t4E0FB462BEC9A4366F0BAC369EE4B344DA9AA2A6;
struct ValueCollection_tC039743F3DF97A944D4DC9D36739F442375E5D80;
struct ValueCollection_t8AFC80E4208701B8CA6D7D46D09BB3A8BC61C637;
struct EntryU5BU5D_tEEED27980D01DFDFBAB0EF8900602F197431182B;
struct EntryU5BU5D_t2D643CC9045D88A19CABBC3D8D436E9CDB92BE10;
struct EntryU5BU5D_t4F2413B662174A527389E89ABDFEAF68C8FA3EE7;
struct EntryU5BU5D_t3A6696E01E2E8EE835C72A4B0C9E75120C7A122D;
struct EntryU5BU5D_t6180327901661167A9CFAF2E0892DF20507BB1AB;
struct EntryU5BU5D_t4D8D831A3B049F41AC0645D0DE9994241B9C0926;
struct EntryU5BU5D_tB4B9CDF2830AB48EE2A1E559D6AACFBFA1FB7618;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;

struct IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F;
struct IIterator_1_tC4C42822491164C936ABD1F4D44722079E79BF24;
struct IMapView_2_t7A74167516683D7257E4E038B3E6ED662B5AEAFC;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct NOVTABLE IIterable_1_t9D7E2CE18433DFF056C18CF89D3FEB99BA0750E8 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m4E55106E1D0083FBDCAD6A2EC0DF7BC6E876B766(IIterator_1_tC4C42822491164C936ABD1F4D44722079E79BF24** comReturnValue) = 0;
};
struct NOVTABLE IMapView_2_t7A74167516683D7257E4E038B3E6ED662B5AEAFC : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMapView_2_Lookup_mE5856B16DBE19AD7912E478A2A19998F8E57EF13(Il2CppHString ___0_key, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_get_Size_m767F15D2398C898B7DEEDD9339B15A34B2A1CB25(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_HasKey_m57F2ADA56F040EDBC2729B32C5A622C74B4B8606(Il2CppHString ___0_key, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_Split_m18280C07BECDFAC27687B42267AF21D1C8130E32(IMapView_2_t7A74167516683D7257E4E038B3E6ED662B5AEAFC** ___0_first, IMapView_2_t7A74167516683D7257E4E038B3E6ED662B5AEAFC** ___1_second) = 0;
};
struct NOVTABLE IMap_2_t05673FAAAA1514EAA4EB093CC12F2E7FB8D6AFDE : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMap_2_Lookup_m3DAB337DE15D2B0900E5C956D5E989A496EADDC3(Il2CppHString ___0_key, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_get_Size_mAE9688AC36CDAC1BD94ABCF5586E8EC43239D349(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_HasKey_m003541F719BDF0C1889FC707883982597D621B88(Il2CppHString ___0_key, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_GetView_mFA66B8A374D3CEB3318D80DB45EB48B9E1D447EB(IMapView_2_t7A74167516683D7257E4E038B3E6ED662B5AEAFC** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Insert_mF5DF0319B45840B6E69CE060140386C00FCDA16C(Il2CppHString ___0_key, bool ___1_value, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Remove_m932258129115CA6339154ECA6E6EED1CB5938CE5(Il2CppHString ___0_key) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Clear_m9232639DC953BBBA47ECE92F4C11612AD2874890() = 0;
};
struct NOVTABLE IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) = 0;
};
struct Dictionary_2_t6D341191E2021065DBEDA3500D49AB6A7791A7D7  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_tEEED27980D01DFDFBAB0EF8900602F197431182B* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_t9420BDECF8BA68DB4504D118BBB93F856E4D657A* ____keys;
	ValueCollection_tAB178C3A4988CC8138AF8611EAF9D49392BE1D1B* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_t590895D15CD5AFFCCF8B9AB63749AA60FAC3BE2D  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t2D643CC9045D88A19CABBC3D8D436E9CDB92BE10* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_t2F188D57986FFD72350BDB82D3FC34EC26672DF3* ____keys;
	ValueCollection_tA7DF40B33CAF1CC12CCC29F4547D85DA818303A7* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_t875F45E1C30058DD8C75B89CBA139DB968412A30  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t4F2413B662174A527389E89ABDFEAF68C8FA3EE7* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_t2D4A0A676928B6B23FC759BEF87CD62E780C787C* ____keys;
	ValueCollection_t859E6142C18D367171343C29631CF47CAFBD7EB7* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_t17D0D125440AC627FCF80F189C6CBCB02856063C  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t3A6696E01E2E8EE835C72A4B0C9E75120C7A122D* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_t95FD5642BC2C9C7777B7A737F21A78E0AFDD8AA0* ____keys;
	ValueCollection_t067B6565DAB51831954BD36DF5F65A806EDBEF99* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_t3710F63387FFDE3DB34EE1BA1D878781E75CEFCA  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t6180327901661167A9CFAF2E0892DF20507BB1AB* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_t6844938B4E85E8FC62B6693FB9718C4747CE8514* ____keys;
	ValueCollection_t4E0FB462BEC9A4366F0BAC369EE4B344DA9AA2A6* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_tF780F25E987C96A8AEDC6E8A3F4AB29019427B9E  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t4D8D831A3B049F41AC0645D0DE9994241B9C0926* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_t3CC6366B12095908A6B3B512623B34284A09041D* ____keys;
	ValueCollection_tC039743F3DF97A944D4DC9D36739F442375E5D80* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_tB93D9DCC306448C2FEE81635D023BCAB46813BFE  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_tB4B9CDF2830AB48EE2A1E559D6AACFBFA1FB7618* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_tED650D294B9CA383F296469055728F18277BAA17* ____keys;
	ValueCollection_t8AFC80E4208701B8CA6D7D46D09BB3A8BC61C637* ____values;
	RuntimeObject* ____syncRoot;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif

il2cpp_hresult_t IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue);
il2cpp_hresult_t IMap_2_Lookup_m3DAB337DE15D2B0900E5C956D5E989A496EADDC3_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppHString ___0_key, bool* comReturnValue);
il2cpp_hresult_t IMap_2_get_Size_mAE9688AC36CDAC1BD94ABCF5586E8EC43239D349_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue);
il2cpp_hresult_t IMap_2_HasKey_m003541F719BDF0C1889FC707883982597D621B88_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppHString ___0_key, bool* comReturnValue);
il2cpp_hresult_t IMap_2_GetView_mFA66B8A374D3CEB3318D80DB45EB48B9E1D447EB_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IMapView_2_t7A74167516683D7257E4E038B3E6ED662B5AEAFC** comReturnValue);
il2cpp_hresult_t IMap_2_Insert_mF5DF0319B45840B6E69CE060140386C00FCDA16C_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppHString ___0_key, bool ___1_value, bool* comReturnValue);
il2cpp_hresult_t IMap_2_Remove_m932258129115CA6339154ECA6E6EED1CB5938CE5_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppHString ___0_key);
il2cpp_hresult_t IMap_2_Clear_m9232639DC953BBBA47ECE92F4C11612AD2874890_ComCallableWrapperProjectedMethod(RuntimeObject* __this);
il2cpp_hresult_t IIterable_1_First_m4E55106E1D0083FBDCAD6A2EC0DF7BC6E876B766_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_tC4C42822491164C936ABD1F4D44722079E79BF24** comReturnValue);
il2cpp_hresult_t IMapView_2_Lookup_mE5856B16DBE19AD7912E478A2A19998F8E57EF13_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppHString ___0_key, bool* comReturnValue);
il2cpp_hresult_t IMapView_2_get_Size_m767F15D2398C898B7DEEDD9339B15A34B2A1CB25_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue);
il2cpp_hresult_t IMapView_2_HasKey_m57F2ADA56F040EDBC2729B32C5A622C74B4B8606_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppHString ___0_key, bool* comReturnValue);
il2cpp_hresult_t IMapView_2_Split_m18280C07BECDFAC27687B42267AF21D1C8130E32_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IMapView_2_t7A74167516683D7257E4E038B3E6ED662B5AEAFC** ___0_first, IMapView_2_t7A74167516683D7257E4E038B3E6ED662B5AEAFC** ___1_second);



struct Dictionary_2_t6D341191E2021065DBEDA3500D49AB6A7791A7D7_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Dictionary_2_t6D341191E2021065DBEDA3500D49AB6A7791A7D7_ComCallableWrapper>, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline Dictionary_2_t6D341191E2021065DBEDA3500D49AB6A7791A7D7_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Dictionary_2_t6D341191E2021065DBEDA3500D49AB6A7791A7D7_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Dictionary_2_t6D341191E2021065DBEDA3500D49AB6A7791A7D7(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Dictionary_2_t6D341191E2021065DBEDA3500D49AB6A7791A7D7_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Dictionary_2_t6D341191E2021065DBEDA3500D49AB6A7791A7D7_ComCallableWrapper(obj));
}

struct Dictionary_2_t590895D15CD5AFFCCF8B9AB63749AA60FAC3BE2D_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Dictionary_2_t590895D15CD5AFFCCF8B9AB63749AA60FAC3BE2D_ComCallableWrapper>, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline Dictionary_2_t590895D15CD5AFFCCF8B9AB63749AA60FAC3BE2D_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Dictionary_2_t590895D15CD5AFFCCF8B9AB63749AA60FAC3BE2D_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Dictionary_2_t590895D15CD5AFFCCF8B9AB63749AA60FAC3BE2D(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Dictionary_2_t590895D15CD5AFFCCF8B9AB63749AA60FAC3BE2D_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Dictionary_2_t590895D15CD5AFFCCF8B9AB63749AA60FAC3BE2D_ComCallableWrapper(obj));
}

struct Dictionary_2_t875F45E1C30058DD8C75B89CBA139DB968412A30_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Dictionary_2_t875F45E1C30058DD8C75B89CBA139DB968412A30_ComCallableWrapper>, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline Dictionary_2_t875F45E1C30058DD8C75B89CBA139DB968412A30_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Dictionary_2_t875F45E1C30058DD8C75B89CBA139DB968412A30_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Dictionary_2_t875F45E1C30058DD8C75B89CBA139DB968412A30(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Dictionary_2_t875F45E1C30058DD8C75B89CBA139DB968412A30_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Dictionary_2_t875F45E1C30058DD8C75B89CBA139DB968412A30_ComCallableWrapper(obj));
}

struct Dictionary_2_t17D0D125440AC627FCF80F189C6CBCB02856063C_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Dictionary_2_t17D0D125440AC627FCF80F189C6CBCB02856063C_ComCallableWrapper>, IMap_2_t05673FAAAA1514EAA4EB093CC12F2E7FB8D6AFDE, IIterable_1_t9D7E2CE18433DFF056C18CF89D3FEB99BA0750E8, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C, IMapView_2_t7A74167516683D7257E4E038B3E6ED662B5AEAFC
{
	inline Dictionary_2_t17D0D125440AC627FCF80F189C6CBCB02856063C_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Dictionary_2_t17D0D125440AC627FCF80F189C6CBCB02856063C_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IMap_2_t05673FAAAA1514EAA4EB093CC12F2E7FB8D6AFDE::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IMap_2_t05673FAAAA1514EAA4EB093CC12F2E7FB8D6AFDE*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t9D7E2CE18433DFF056C18CF89D3FEB99BA0750E8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t9D7E2CE18433DFF056C18CF89D3FEB99BA0750E8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IMapView_2_t7A74167516683D7257E4E038B3E6ED662B5AEAFC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IMapView_2_t7A74167516683D7257E4E038B3E6ED662B5AEAFC*>(this);
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
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(4);
		interfaceIds[0] = IMap_2_t05673FAAAA1514EAA4EB093CC12F2E7FB8D6AFDE::IID;
		interfaceIds[1] = IIterable_1_t9D7E2CE18433DFF056C18CF89D3FEB99BA0750E8::IID;
		interfaceIds[2] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;
		interfaceIds[3] = IMapView_2_t7A74167516683D7257E4E038B3E6ED662B5AEAFC::IID;

		*iidCount = 4;
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

	virtual il2cpp_hresult_t STDCALL IMap_2_Lookup_m3DAB337DE15D2B0900E5C956D5E989A496EADDC3(Il2CppHString ___0_key, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMap_2_Lookup_m3DAB337DE15D2B0900E5C956D5E989A496EADDC3_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_key, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_get_Size_mAE9688AC36CDAC1BD94ABCF5586E8EC43239D349(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMap_2_get_Size_mAE9688AC36CDAC1BD94ABCF5586E8EC43239D349_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_HasKey_m003541F719BDF0C1889FC707883982597D621B88(Il2CppHString ___0_key, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMap_2_HasKey_m003541F719BDF0C1889FC707883982597D621B88_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_key, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_GetView_mFA66B8A374D3CEB3318D80DB45EB48B9E1D447EB(IMapView_2_t7A74167516683D7257E4E038B3E6ED662B5AEAFC** comReturnValue) IL2CPP_OVERRIDE
	{
		return IMap_2_GetView_mFA66B8A374D3CEB3318D80DB45EB48B9E1D447EB_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_Insert_mF5DF0319B45840B6E69CE060140386C00FCDA16C(Il2CppHString ___0_key, bool ___1_value, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMap_2_Insert_mF5DF0319B45840B6E69CE060140386C00FCDA16C_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_key, ___1_value, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_Remove_m932258129115CA6339154ECA6E6EED1CB5938CE5(Il2CppHString ___0_key) IL2CPP_OVERRIDE
	{
		return IMap_2_Remove_m932258129115CA6339154ECA6E6EED1CB5938CE5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_key);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_Clear_m9232639DC953BBBA47ECE92F4C11612AD2874890() IL2CPP_OVERRIDE
	{
		return IMap_2_Clear_m9232639DC953BBBA47ECE92F4C11612AD2874890_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m4E55106E1D0083FBDCAD6A2EC0DF7BC6E876B766(IIterator_1_tC4C42822491164C936ABD1F4D44722079E79BF24** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m4E55106E1D0083FBDCAD6A2EC0DF7BC6E876B766_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMapView_2_Lookup_mE5856B16DBE19AD7912E478A2A19998F8E57EF13(Il2CppHString ___0_key, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMapView_2_Lookup_mE5856B16DBE19AD7912E478A2A19998F8E57EF13_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_key, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMapView_2_get_Size_m767F15D2398C898B7DEEDD9339B15A34B2A1CB25(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMapView_2_get_Size_m767F15D2398C898B7DEEDD9339B15A34B2A1CB25_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMapView_2_HasKey_m57F2ADA56F040EDBC2729B32C5A622C74B4B8606(Il2CppHString ___0_key, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMapView_2_HasKey_m57F2ADA56F040EDBC2729B32C5A622C74B4B8606_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_key, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMapView_2_Split_m18280C07BECDFAC27687B42267AF21D1C8130E32(IMapView_2_t7A74167516683D7257E4E038B3E6ED662B5AEAFC** ___0_first, IMapView_2_t7A74167516683D7257E4E038B3E6ED662B5AEAFC** ___1_second) IL2CPP_OVERRIDE
	{
		return IMapView_2_Split_m18280C07BECDFAC27687B42267AF21D1C8130E32_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_first, ___1_second);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Dictionary_2_t17D0D125440AC627FCF80F189C6CBCB02856063C(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Dictionary_2_t17D0D125440AC627FCF80F189C6CBCB02856063C_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Dictionary_2_t17D0D125440AC627FCF80F189C6CBCB02856063C_ComCallableWrapper(obj));
}

struct Dictionary_2_t3710F63387FFDE3DB34EE1BA1D878781E75CEFCA_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Dictionary_2_t3710F63387FFDE3DB34EE1BA1D878781E75CEFCA_ComCallableWrapper>, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline Dictionary_2_t3710F63387FFDE3DB34EE1BA1D878781E75CEFCA_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Dictionary_2_t3710F63387FFDE3DB34EE1BA1D878781E75CEFCA_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Dictionary_2_t3710F63387FFDE3DB34EE1BA1D878781E75CEFCA(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Dictionary_2_t3710F63387FFDE3DB34EE1BA1D878781E75CEFCA_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Dictionary_2_t3710F63387FFDE3DB34EE1BA1D878781E75CEFCA_ComCallableWrapper(obj));
}

struct Dictionary_2_tF780F25E987C96A8AEDC6E8A3F4AB29019427B9E_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Dictionary_2_tF780F25E987C96A8AEDC6E8A3F4AB29019427B9E_ComCallableWrapper>, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline Dictionary_2_tF780F25E987C96A8AEDC6E8A3F4AB29019427B9E_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Dictionary_2_tF780F25E987C96A8AEDC6E8A3F4AB29019427B9E_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Dictionary_2_tF780F25E987C96A8AEDC6E8A3F4AB29019427B9E(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Dictionary_2_tF780F25E987C96A8AEDC6E8A3F4AB29019427B9E_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Dictionary_2_tF780F25E987C96A8AEDC6E8A3F4AB29019427B9E_ComCallableWrapper(obj));
}

struct Dictionary_2_tB93D9DCC306448C2FEE81635D023BCAB46813BFE_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Dictionary_2_tB93D9DCC306448C2FEE81635D023BCAB46813BFE_ComCallableWrapper>, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline Dictionary_2_tB93D9DCC306448C2FEE81635D023BCAB46813BFE_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Dictionary_2_tB93D9DCC306448C2FEE81635D023BCAB46813BFE_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Dictionary_2_tB93D9DCC306448C2FEE81635D023BCAB46813BFE(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Dictionary_2_tB93D9DCC306448C2FEE81635D023BCAB46813BFE_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Dictionary_2_tB93D9DCC306448C2FEE81635D023BCAB46813BFE_ComCallableWrapper(obj));
}
