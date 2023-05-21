#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>



// UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt[]
struct AppleInAppPurchaseReceiptU5BU5D_tE521ED29BA1528A3E90EFC6126DA7230E921B3F8;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt
struct AppleInAppPurchaseReceipt_t64E09258E0CC803DC0A93786AD32A737588BEA36;
// System.String
struct String_t;



IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tAADC34165FACDC5693EBAD60615ACCF6BD9442FC 
{
public:

public:
};


// System.Object


// UnityEngine.Purchasing.Security.AppleReceipt
struct AppleReceipt_t22259E08F1B556242C6E6EE1A41F25B4F8860D62  : public RuntimeObject
{
public:
	// UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt[] UnityEngine.Purchasing.Security.AppleReceipt::inAppPurchaseReceipts
	AppleInAppPurchaseReceiptU5BU5D_tE521ED29BA1528A3E90EFC6126DA7230E921B3F8* ___inAppPurchaseReceipts_0;

public:
	inline static int32_t get_offset_of_inAppPurchaseReceipts_0() { return static_cast<int32_t>(offsetof(AppleReceipt_t22259E08F1B556242C6E6EE1A41F25B4F8860D62, ___inAppPurchaseReceipts_0)); }
	inline AppleInAppPurchaseReceiptU5BU5D_tE521ED29BA1528A3E90EFC6126DA7230E921B3F8* get_inAppPurchaseReceipts_0() const { return ___inAppPurchaseReceipts_0; }
	inline AppleInAppPurchaseReceiptU5BU5D_tE521ED29BA1528A3E90EFC6126DA7230E921B3F8** get_address_of_inAppPurchaseReceipts_0() { return &___inAppPurchaseReceipts_0; }
	inline void set_inAppPurchaseReceipts_0(AppleInAppPurchaseReceiptU5BU5D_tE521ED29BA1528A3E90EFC6126DA7230E921B3F8* value)
	{
		___inAppPurchaseReceipts_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inAppPurchaseReceipts_0), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// System.DateTime
struct DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 
{
public:
	// System.UInt64 System.DateTime::dateData
	uint64_t ___dateData_44;

public:
	inline static int32_t get_offset_of_dateData_44() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405, ___dateData_44)); }
	inline uint64_t get_dateData_44() const { return ___dateData_44; }
	inline uint64_t* get_address_of_dateData_44() { return &___dateData_44; }
	inline void set_dateData_44(uint64_t value)
	{
		___dateData_44 = value;
	}
};

struct DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields
{
public:
	// System.Int32[] System.DateTime::DaysToMonth365
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___DaysToMonth365_29;
	// System.Int32[] System.DateTime::DaysToMonth366
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___DaysToMonth366_30;
	// System.DateTime System.DateTime::MinValue
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___MinValue_31;
	// System.DateTime System.DateTime::MaxValue
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___MaxValue_32;

public:
	inline static int32_t get_offset_of_DaysToMonth365_29() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___DaysToMonth365_29)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_DaysToMonth365_29() const { return ___DaysToMonth365_29; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_DaysToMonth365_29() { return &___DaysToMonth365_29; }
	inline void set_DaysToMonth365_29(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___DaysToMonth365_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth365_29), (void*)value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_30() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___DaysToMonth366_30)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_DaysToMonth366_30() const { return ___DaysToMonth366_30; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_DaysToMonth366_30() { return &___DaysToMonth366_30; }
	inline void set_DaysToMonth366_30(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___DaysToMonth366_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth366_30), (void*)value);
	}

	inline static int32_t get_offset_of_MinValue_31() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___MinValue_31)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_MinValue_31() const { return ___MinValue_31; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_MinValue_31() { return &___MinValue_31; }
	inline void set_MinValue_31(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___MinValue_31 = value;
	}

	inline static int32_t get_offset_of_MaxValue_32() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___MaxValue_32)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_MaxValue_32() const { return ___MaxValue_32; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_MaxValue_32() { return &___MaxValue_32; }
	inline void set_MaxValue_32(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___MaxValue_32 = value;
	}
};


// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt
struct AppleInAppPurchaseReceipt_t64E09258E0CC803DC0A93786AD32A737588BEA36  : public RuntimeObject
{
public:
	// System.String UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::<productID>k__BackingField
	String_t* ___U3CproductIDU3Ek__BackingField_0;
	// System.String UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::<transactionID>k__BackingField
	String_t* ___U3CtransactionIDU3Ek__BackingField_1;
	// System.DateTime UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::<purchaseDate>k__BackingField
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___U3CpurchaseDateU3Ek__BackingField_2;
	// System.DateTime UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::<subscriptionExpirationDate>k__BackingField
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___U3CsubscriptionExpirationDateU3Ek__BackingField_3;
	// System.DateTime UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::<cancellationDate>k__BackingField
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___U3CcancellationDateU3Ek__BackingField_4;
	// System.Int32 UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::<isFreeTrial>k__BackingField
	int32_t ___U3CisFreeTrialU3Ek__BackingField_5;
	// System.Int32 UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::<productType>k__BackingField
	int32_t ___U3CproductTypeU3Ek__BackingField_6;
	// System.Int32 UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::<isIntroductoryPricePeriod>k__BackingField
	int32_t ___U3CisIntroductoryPricePeriodU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of_U3CproductIDU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(AppleInAppPurchaseReceipt_t64E09258E0CC803DC0A93786AD32A737588BEA36, ___U3CproductIDU3Ek__BackingField_0)); }
	inline String_t* get_U3CproductIDU3Ek__BackingField_0() const { return ___U3CproductIDU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CproductIDU3Ek__BackingField_0() { return &___U3CproductIDU3Ek__BackingField_0; }
	inline void set_U3CproductIDU3Ek__BackingField_0(String_t* value)
	{
		___U3CproductIDU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CproductIDU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CtransactionIDU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(AppleInAppPurchaseReceipt_t64E09258E0CC803DC0A93786AD32A737588BEA36, ___U3CtransactionIDU3Ek__BackingField_1)); }
	inline String_t* get_U3CtransactionIDU3Ek__BackingField_1() const { return ___U3CtransactionIDU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CtransactionIDU3Ek__BackingField_1() { return &___U3CtransactionIDU3Ek__BackingField_1; }
	inline void set_U3CtransactionIDU3Ek__BackingField_1(String_t* value)
	{
		___U3CtransactionIDU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtransactionIDU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpurchaseDateU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(AppleInAppPurchaseReceipt_t64E09258E0CC803DC0A93786AD32A737588BEA36, ___U3CpurchaseDateU3Ek__BackingField_2)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_U3CpurchaseDateU3Ek__BackingField_2() const { return ___U3CpurchaseDateU3Ek__BackingField_2; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_U3CpurchaseDateU3Ek__BackingField_2() { return &___U3CpurchaseDateU3Ek__BackingField_2; }
	inline void set_U3CpurchaseDateU3Ek__BackingField_2(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___U3CpurchaseDateU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CsubscriptionExpirationDateU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(AppleInAppPurchaseReceipt_t64E09258E0CC803DC0A93786AD32A737588BEA36, ___U3CsubscriptionExpirationDateU3Ek__BackingField_3)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_U3CsubscriptionExpirationDateU3Ek__BackingField_3() const { return ___U3CsubscriptionExpirationDateU3Ek__BackingField_3; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_U3CsubscriptionExpirationDateU3Ek__BackingField_3() { return &___U3CsubscriptionExpirationDateU3Ek__BackingField_3; }
	inline void set_U3CsubscriptionExpirationDateU3Ek__BackingField_3(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___U3CsubscriptionExpirationDateU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CcancellationDateU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(AppleInAppPurchaseReceipt_t64E09258E0CC803DC0A93786AD32A737588BEA36, ___U3CcancellationDateU3Ek__BackingField_4)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_U3CcancellationDateU3Ek__BackingField_4() const { return ___U3CcancellationDateU3Ek__BackingField_4; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_U3CcancellationDateU3Ek__BackingField_4() { return &___U3CcancellationDateU3Ek__BackingField_4; }
	inline void set_U3CcancellationDateU3Ek__BackingField_4(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___U3CcancellationDateU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CisFreeTrialU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(AppleInAppPurchaseReceipt_t64E09258E0CC803DC0A93786AD32A737588BEA36, ___U3CisFreeTrialU3Ek__BackingField_5)); }
	inline int32_t get_U3CisFreeTrialU3Ek__BackingField_5() const { return ___U3CisFreeTrialU3Ek__BackingField_5; }
	inline int32_t* get_address_of_U3CisFreeTrialU3Ek__BackingField_5() { return &___U3CisFreeTrialU3Ek__BackingField_5; }
	inline void set_U3CisFreeTrialU3Ek__BackingField_5(int32_t value)
	{
		___U3CisFreeTrialU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CproductTypeU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(AppleInAppPurchaseReceipt_t64E09258E0CC803DC0A93786AD32A737588BEA36, ___U3CproductTypeU3Ek__BackingField_6)); }
	inline int32_t get_U3CproductTypeU3Ek__BackingField_6() const { return ___U3CproductTypeU3Ek__BackingField_6; }
	inline int32_t* get_address_of_U3CproductTypeU3Ek__BackingField_6() { return &___U3CproductTypeU3Ek__BackingField_6; }
	inline void set_U3CproductTypeU3Ek__BackingField_6(int32_t value)
	{
		___U3CproductTypeU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CisIntroductoryPricePeriodU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(AppleInAppPurchaseReceipt_t64E09258E0CC803DC0A93786AD32A737588BEA36, ___U3CisIntroductoryPricePeriodU3Ek__BackingField_7)); }
	inline int32_t get_U3CisIntroductoryPricePeriodU3Ek__BackingField_7() const { return ___U3CisIntroductoryPricePeriodU3Ek__BackingField_7; }
	inline int32_t* get_address_of_U3CisIntroductoryPricePeriodU3Ek__BackingField_7() { return &___U3CisIntroductoryPricePeriodU3Ek__BackingField_7; }
	inline void set_U3CisIntroductoryPricePeriodU3Ek__BackingField_7(int32_t value)
	{
		___U3CisIntroductoryPricePeriodU3Ek__BackingField_7 = value;
	}
};

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
// System.String UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::get_productID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AppleInAppPurchaseReceipt_get_productID_m3D3B9BAE64549143216710BFC82A2858783AD4B3 (AppleInAppPurchaseReceipt_t64E09258E0CC803DC0A93786AD32A737588BEA36 * __this, const RuntimeMethod* method)
{
	{
		// public string productID { get; internal set; }
		String_t* L_0 = __this->get_U3CproductIDU3Ek__BackingField_0();
		return L_0;
	}
}
// System.String UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::get_transactionID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AppleInAppPurchaseReceipt_get_transactionID_m7D2DB3D76AD2B50834BBAFB385C7160FA0067A1C (AppleInAppPurchaseReceipt_t64E09258E0CC803DC0A93786AD32A737588BEA36 * __this, const RuntimeMethod* method)
{
	{
		// public string transactionID { get; internal set; }
		String_t* L_0 = __this->get_U3CtransactionIDU3Ek__BackingField_1();
		return L_0;
	}
}
// System.DateTime UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::get_purchaseDate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  AppleInAppPurchaseReceipt_get_purchaseDate_m02B2E5F8F6A76A5A822E31894D9768730A3CA5D5 (AppleInAppPurchaseReceipt_t64E09258E0CC803DC0A93786AD32A737588BEA36 * __this, const RuntimeMethod* method)
{
	{
		// public DateTime purchaseDate { get; internal set; }
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_0 = __this->get_U3CpurchaseDateU3Ek__BackingField_2();
		return L_0;
	}
}
// System.DateTime UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::get_subscriptionExpirationDate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  AppleInAppPurchaseReceipt_get_subscriptionExpirationDate_mFC27A6E299027CBFA1FF676F34C5B29DB6AA5996 (AppleInAppPurchaseReceipt_t64E09258E0CC803DC0A93786AD32A737588BEA36 * __this, const RuntimeMethod* method)
{
	{
		// public DateTime subscriptionExpirationDate { get; internal set; }
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_0 = __this->get_U3CsubscriptionExpirationDateU3Ek__BackingField_3();
		return L_0;
	}
}
// System.DateTime UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::get_cancellationDate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  AppleInAppPurchaseReceipt_get_cancellationDate_m1A860CFAA008D4F86791180577A8445A5CC25896 (AppleInAppPurchaseReceipt_t64E09258E0CC803DC0A93786AD32A737588BEA36 * __this, const RuntimeMethod* method)
{
	{
		// public DateTime cancellationDate { get; internal set; }
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_0 = __this->get_U3CcancellationDateU3Ek__BackingField_4();
		return L_0;
	}
}
// System.Int32 UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::get_isFreeTrial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AppleInAppPurchaseReceipt_get_isFreeTrial_m5642BA7C60EC4AC6A371EC781E06F43BDF88EB4B (AppleInAppPurchaseReceipt_t64E09258E0CC803DC0A93786AD32A737588BEA36 * __this, const RuntimeMethod* method)
{
	{
		// public int isFreeTrial { get; internal set; }
		int32_t L_0 = __this->get_U3CisFreeTrialU3Ek__BackingField_5();
		return L_0;
	}
}
// System.Int32 UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::get_productType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AppleInAppPurchaseReceipt_get_productType_mD63B4729E340857B9D002C5DF78AC0930232976C (AppleInAppPurchaseReceipt_t64E09258E0CC803DC0A93786AD32A737588BEA36 * __this, const RuntimeMethod* method)
{
	{
		// public int productType { get; internal set; }
		int32_t L_0 = __this->get_U3CproductTypeU3Ek__BackingField_6();
		return L_0;
	}
}
// System.Int32 UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::get_isIntroductoryPricePeriod()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AppleInAppPurchaseReceipt_get_isIntroductoryPricePeriod_m98E871EA35F34C69A28EE4FE00129BC57E846A1F (AppleInAppPurchaseReceipt_t64E09258E0CC803DC0A93786AD32A737588BEA36 * __this, const RuntimeMethod* method)
{
	{
		// public int isIntroductoryPricePeriod {get; internal set; }
		int32_t L_0 = __this->get_U3CisIntroductoryPricePeriodU3Ek__BackingField_7();
		return L_0;
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
