#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif



#include "vm/CachedCCWBase.h"
#include "utils/New.h"


struct HashSet_1_t26796BF4011CBFA30FF5AA4EAD424A60B28827B3;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct KeySizesU5BU5D_tDD87467B9CB683380B5DC92193576A3136DFAE03;
struct RTHandleU5BU5D_tE4B403B060D159B839BF74E8B59F8DCD52CF97DF;
struct UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83;
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
struct BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08;
struct BigInteger_t558902B37952162AF8408D05F8341E49AACAC1ED;
struct KeyPairPersistence_t78D61FCDE172753BFE756B555CBD85127832CDF6;
struct RSAManaged_t897B29EF76C459408E11A42680C942716D809001;
struct RandomNumberGenerator_t4E862666A2F7D55324960670C7A1B4C2D40222F3;
struct SymmetricAlgorithm_t8C631E4E7B9073CCBD856F8D559A62EB5616BBE8;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct KeyGeneratedEventHandler_t5EDD824AAD4D47A4C32E693596793AB83DB84107;
struct KeyGeneratedEventHandler_tB6F6C235FC6C71F4B5F6D6C87A5E4A38BC3549FC;



IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct NOVTABLE IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() = 0;
};
struct AsymmetricAlgorithm_t5E7E9D26CE0EDCAABD84F616A44E476473BA2AF8  : public RuntimeObject
{
	int32_t ___KeySizeValue;
	KeySizesU5BU5D_tDD87467B9CB683380B5DC92193576A3136DFAE03* ___LegalKeySizesValue;
};
struct HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D  : public RuntimeObject
{
	bool ____disposed;
	int32_t ___HashSizeValue;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___HashValue;
	int32_t ___State;
};
struct RandomNumberGenerator_t4E862666A2F7D55324960670C7A1B4C2D40222F3  : public RuntimeObject
{
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
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct RIPEMD160_t367AC1CC6F4CB51EDA39EB0AA696470F47ED98F0  : public HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D
{
};
struct RSA_tDDE9BD4C9806074FA9B1C6A5C93523A97116F21A  : public AsymmetricAlgorithm_t5E7E9D26CE0EDCAABD84F616A44E476473BA2AF8
{
};
struct Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A 
{
	int32_t ___m_X;
	int32_t ___m_Y;
};
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	float ___x;
	float ___y;
	float ___z;
	float ___w;
};
struct CipherMode_t932070F221590D5F955DE31430C6EAA91B97F027 
{
	int32_t ___value__;
};
struct CspProviderFlags_tE84737C4FE8BB969ADE9D11702DB91D3165D668F 
{
	int32_t ___value__;
};
struct PaddingMode_t938E0AB76C80739DB1BB44D7D6B9B94C03B72E1D 
{
	int32_t ___value__;
};
struct RIPEMD160Managed_tA3C168825A89226BAB8585359AB324B49DC7B017  : public RIPEMD160_t367AC1CC6F4CB51EDA39EB0AA696470F47ED98F0
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____buffer;
	int64_t ____count;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ____stateMD160;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ____blockDWords;
};
struct RNGCryptoServiceProvider_tAD9D75EFF3D2ED0929EEE27A53BE82AB83D78170  : public RandomNumberGenerator_t4E862666A2F7D55324960670C7A1B4C2D40222F3
{
	intptr_t ____handle;
};
struct RSACryptoServiceProvider_t5B3DF0CAFF65D4103EB90063F3C3B00FE2C6967C  : public RSA_tDDE9BD4C9806074FA9B1C6A5C93523A97116F21A
{
	KeyPairPersistence_t78D61FCDE172753BFE756B555CBD85127832CDF6* ___store;
	bool ___persistKey;
	bool ___persisted;
	bool ___privateKeyExportable;
	bool ___m_disposed;
	RSAManaged_t897B29EF76C459408E11A42680C942716D809001* ___rsa;
};
struct RSAManaged_t16228062567201ED2F5B1335C00576283134F3D4  : public RSA_tDDE9BD4C9806074FA9B1C6A5C93523A97116F21A
{
	bool ___isCRTpossible;
	bool ___keyBlinding;
	bool ___keypairGenerated;
	bool ___m_disposed;
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___d;
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___p;
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___q;
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___dp;
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___dq;
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___qInv;
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___n;
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___e;
	KeyGeneratedEventHandler_t5EDD824AAD4D47A4C32E693596793AB83DB84107* ___KeyGenerated;
};
struct RSAManaged_t897B29EF76C459408E11A42680C942716D809001  : public RSA_tDDE9BD4C9806074FA9B1C6A5C93523A97116F21A
{
	bool ___isCRTpossible;
	bool ___keyBlinding;
	bool ___keypairGenerated;
	bool ___m_disposed;
	BigInteger_t558902B37952162AF8408D05F8341E49AACAC1ED* ___d;
	BigInteger_t558902B37952162AF8408D05F8341E49AACAC1ED* ___p;
	BigInteger_t558902B37952162AF8408D05F8341E49AACAC1ED* ___q;
	BigInteger_t558902B37952162AF8408D05F8341E49AACAC1ED* ___dp;
	BigInteger_t558902B37952162AF8408D05F8341E49AACAC1ED* ___dq;
	BigInteger_t558902B37952162AF8408D05F8341E49AACAC1ED* ___qInv;
	BigInteger_t558902B37952162AF8408D05F8341E49AACAC1ED* ___n;
	BigInteger_t558902B37952162AF8408D05F8341E49AACAC1ED* ___e;
	KeyGeneratedEventHandler_tB6F6C235FC6C71F4B5F6D6C87A5E4A38BC3549FC* ___KeyGenerated;
};
struct RTHandleProperties_tBCB3E1EFE8B366995704C1322B9C443877580CD6 
{
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___previousViewportSize;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___previousRenderTargetSize;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___currentViewportSize;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___currentRenderTargetSize;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___rtHandleScale;
};
struct RTHandleSystem_tAE496B31B56A77B4896E34576C961C3CA073998F  : public RuntimeObject
{
	bool ___m_HardwareDynamicResRequested;
	HashSet_1_t26796BF4011CBFA30FF5AA4EAD424A60B28827B3* ___m_AutoSizedRTs;
	RTHandleU5BU5D_tE4B403B060D159B839BF74E8B59F8DCD52CF97DF* ___m_AutoSizedRTsArray;
	HashSet_1_t26796BF4011CBFA30FF5AA4EAD424A60B28827B3* ___m_ResizeOnDemandRTs;
	RTHandleProperties_tBCB3E1EFE8B366995704C1322B9C443877580CD6 ___m_RTHandleProperties;
	int32_t ___m_MaxWidths;
	int32_t ___m_MaxHeights;
};
struct SymmetricAlgorithm_t8C631E4E7B9073CCBD856F8D559A62EB5616BBE8  : public RuntimeObject
{
	int32_t ___BlockSizeValue;
	int32_t ___FeedbackSizeValue;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___IVValue;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___KeyValue;
	KeySizesU5BU5D_tDD87467B9CB683380B5DC92193576A3136DFAE03* ___LegalBlockSizesValue;
	KeySizesU5BU5D_tDD87467B9CB683380B5DC92193576A3136DFAE03* ___LegalKeySizesValue;
	int32_t ___KeySizeValue;
	int32_t ___ModeValue;
	int32_t ___PaddingValue;
};
struct SymmetricTransform_tDD1D096506ADC83C468EE253DE76D1EB315DAC43  : public RuntimeObject
{
	SymmetricAlgorithm_t8C631E4E7B9073CCBD856F8D559A62EB5616BBE8* ___algo;
	bool ___encrypt;
	int32_t ___BlockSizeByte;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___temp;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___temp2;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___workBuff;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___workout;
	int32_t ___padmode;
	int32_t ___FeedBackByte;
	bool ___m_disposed;
	bool ___lastBlock;
	RandomNumberGenerator_t4E862666A2F7D55324960670C7A1B4C2D40222F3* ____rng;
};
struct RC2_tFBB9A77126D49FBFBA021B103073FBA78F57B0B9  : public SymmetricAlgorithm_t8C631E4E7B9073CCBD856F8D559A62EB5616BBE8
{
	int32_t ___EffectiveKeySizeValue;
};
struct RC2Transform_t715B3309C1B219A09B641E87BFDB66EC016E59B7  : public SymmetricTransform_tDD1D096506ADC83C468EE253DE76D1EB315DAC43
{
	uint16_t ___R0;
	uint16_t ___R1;
	uint16_t ___R2;
	uint16_t ___R3;
	UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___K;
	int32_t ___j;
};
struct RC2CryptoServiceProvider_tCD53638728EFD5594242B33A17B4A85FC3977541  : public RC2_tFBB9A77126D49FBFBA021B103073FBA78F57B0B9
{
	bool ___m_use40bitSalt;
};
struct RNGCryptoServiceProvider_tAD9D75EFF3D2ED0929EEE27A53BE82AB83D78170_StaticFields
{
	RuntimeObject* ____lock;
};
struct RSACryptoServiceProvider_t5B3DF0CAFF65D4103EB90063F3C3B00FE2C6967C_StaticFields
{
	int32_t ___s_UseMachineKeyStore;
};
struct RC2Transform_t715B3309C1B219A09B641E87BFDB66EC016E59B7_StaticFields
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___pitable;
};
struct RC2CryptoServiceProvider_tCD53638728EFD5594242B33A17B4A85FC3977541_StaticFields
{
	KeySizesU5BU5D_tDD87467B9CB683380B5DC92193576A3136DFAE03* ___s_legalKeySizes;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif

il2cpp_hresult_t IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(RuntimeObject* __this);



struct RC2CryptoServiceProvider_tCD53638728EFD5594242B33A17B4A85FC3977541_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<RC2CryptoServiceProvider_tCD53638728EFD5594242B33A17B4A85FC3977541_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline RC2CryptoServiceProvider_tCD53638728EFD5594242B33A17B4A85FC3977541_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<RC2CryptoServiceProvider_tCD53638728EFD5594242B33A17B4A85FC3977541_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
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
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_RC2CryptoServiceProvider_tCD53638728EFD5594242B33A17B4A85FC3977541(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(RC2CryptoServiceProvider_tCD53638728EFD5594242B33A17B4A85FC3977541_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) RC2CryptoServiceProvider_tCD53638728EFD5594242B33A17B4A85FC3977541_ComCallableWrapper(obj));
}

struct RC2Transform_t715B3309C1B219A09B641E87BFDB66EC016E59B7_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<RC2Transform_t715B3309C1B219A09B641E87BFDB66EC016E59B7_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline RC2Transform_t715B3309C1B219A09B641E87BFDB66EC016E59B7_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<RC2Transform_t715B3309C1B219A09B641E87BFDB66EC016E59B7_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
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
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_RC2Transform_t715B3309C1B219A09B641E87BFDB66EC016E59B7(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(RC2Transform_t715B3309C1B219A09B641E87BFDB66EC016E59B7_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) RC2Transform_t715B3309C1B219A09B641E87BFDB66EC016E59B7_ComCallableWrapper(obj));
}

struct RIPEMD160Managed_tA3C168825A89226BAB8585359AB324B49DC7B017_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<RIPEMD160Managed_tA3C168825A89226BAB8585359AB324B49DC7B017_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline RIPEMD160Managed_tA3C168825A89226BAB8585359AB324B49DC7B017_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<RIPEMD160Managed_tA3C168825A89226BAB8585359AB324B49DC7B017_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
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
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_RIPEMD160Managed_tA3C168825A89226BAB8585359AB324B49DC7B017(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(RIPEMD160Managed_tA3C168825A89226BAB8585359AB324B49DC7B017_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) RIPEMD160Managed_tA3C168825A89226BAB8585359AB324B49DC7B017_ComCallableWrapper(obj));
}

struct RNGCryptoServiceProvider_tAD9D75EFF3D2ED0929EEE27A53BE82AB83D78170_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<RNGCryptoServiceProvider_tAD9D75EFF3D2ED0929EEE27A53BE82AB83D78170_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline RNGCryptoServiceProvider_tAD9D75EFF3D2ED0929EEE27A53BE82AB83D78170_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<RNGCryptoServiceProvider_tAD9D75EFF3D2ED0929EEE27A53BE82AB83D78170_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
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
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_RNGCryptoServiceProvider_tAD9D75EFF3D2ED0929EEE27A53BE82AB83D78170(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(RNGCryptoServiceProvider_tAD9D75EFF3D2ED0929EEE27A53BE82AB83D78170_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) RNGCryptoServiceProvider_tAD9D75EFF3D2ED0929EEE27A53BE82AB83D78170_ComCallableWrapper(obj));
}

struct RSACryptoServiceProvider_t5B3DF0CAFF65D4103EB90063F3C3B00FE2C6967C_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<RSACryptoServiceProvider_t5B3DF0CAFF65D4103EB90063F3C3B00FE2C6967C_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline RSACryptoServiceProvider_t5B3DF0CAFF65D4103EB90063F3C3B00FE2C6967C_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<RSACryptoServiceProvider_t5B3DF0CAFF65D4103EB90063F3C3B00FE2C6967C_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
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
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_RSACryptoServiceProvider_t5B3DF0CAFF65D4103EB90063F3C3B00FE2C6967C(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(RSACryptoServiceProvider_t5B3DF0CAFF65D4103EB90063F3C3B00FE2C6967C_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) RSACryptoServiceProvider_t5B3DF0CAFF65D4103EB90063F3C3B00FE2C6967C_ComCallableWrapper(obj));
}

struct RSAManaged_t16228062567201ED2F5B1335C00576283134F3D4_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<RSAManaged_t16228062567201ED2F5B1335C00576283134F3D4_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline RSAManaged_t16228062567201ED2F5B1335C00576283134F3D4_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<RSAManaged_t16228062567201ED2F5B1335C00576283134F3D4_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
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
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_RSAManaged_t16228062567201ED2F5B1335C00576283134F3D4(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(RSAManaged_t16228062567201ED2F5B1335C00576283134F3D4_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) RSAManaged_t16228062567201ED2F5B1335C00576283134F3D4_ComCallableWrapper(obj));
}

struct RSAManaged_t897B29EF76C459408E11A42680C942716D809001_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<RSAManaged_t897B29EF76C459408E11A42680C942716D809001_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline RSAManaged_t897B29EF76C459408E11A42680C942716D809001_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<RSAManaged_t897B29EF76C459408E11A42680C942716D809001_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
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
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_RSAManaged_t897B29EF76C459408E11A42680C942716D809001(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(RSAManaged_t897B29EF76C459408E11A42680C942716D809001_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) RSAManaged_t897B29EF76C459408E11A42680C942716D809001_ComCallableWrapper(obj));
}

struct RTHandleSystem_tAE496B31B56A77B4896E34576C961C3CA073998F_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<RTHandleSystem_tAE496B31B56A77B4896E34576C961C3CA073998F_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline RTHandleSystem_tAE496B31B56A77B4896E34576C961C3CA073998F_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<RTHandleSystem_tAE496B31B56A77B4896E34576C961C3CA073998F_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
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
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_RTHandleSystem_tAE496B31B56A77B4896E34576C961C3CA073998F(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(RTHandleSystem_tAE496B31B56A77B4896E34576C961C3CA073998F_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) RTHandleSystem_tAE496B31B56A77B4896E34576C961C3CA073998F_ComCallableWrapper(obj));
}
