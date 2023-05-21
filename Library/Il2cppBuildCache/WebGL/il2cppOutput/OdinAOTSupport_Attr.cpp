#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>



// Ludiq.OdinSerializer.EmittedAssemblyAttribute
struct EmittedAssemblyAttribute_t09D7AFB6533EE3470060AF232B768F4E89205DAF;
// UnityEngine.Scripting.PreserveAttribute
struct PreserveAttribute_tD3CDF1454F8E64CEF59CF7094B45BBACE2C69948;



IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.Attribute
struct Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71  : public RuntimeObject
{
public:

public:
};


// Ludiq.OdinSerializer.EmittedAssemblyAttribute
struct EmittedAssemblyAttribute_t09D7AFB6533EE3470060AF232B768F4E89205DAF  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// UnityEngine.Scripting.PreserveAttribute
struct PreserveAttribute_tD3CDF1454F8E64CEF59CF7094B45BBACE2C69948  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif



// System.Void Ludiq.OdinSerializer.EmittedAssemblyAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EmittedAssemblyAttribute__ctor_mE3247A76F20D0C41607480EAA217B891253376A0 (EmittedAssemblyAttribute_t09D7AFB6533EE3470060AF232B768F4E89205DAF * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Scripting.PreserveAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PreserveAttribute__ctor_mBD1EEF1095DBD581365C77729CF4ACB914859CD2 (PreserveAttribute_tD3CDF1454F8E64CEF59CF7094B45BBACE2C69948 * __this, const RuntimeMethod* method);
static void OdinAOTSupport_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		EmittedAssemblyAttribute_t09D7AFB6533EE3470060AF232B768F4E89205DAF * tmp = (EmittedAssemblyAttribute_t09D7AFB6533EE3470060AF232B768F4E89205DAF *)cache->attributes[0];
		EmittedAssemblyAttribute__ctor_mE3247A76F20D0C41607480EAA217B891253376A0(tmp, NULL);
	}
}
static void PreventCodeStrippingViaReferences_tEA3CCBCB76671895DC5A42F7BB2CA3BE0F78E0F8_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		PreserveAttribute_tD3CDF1454F8E64CEF59CF7094B45BBACE2C69948 * tmp = (PreserveAttribute_tD3CDF1454F8E64CEF59CF7094B45BBACE2C69948 *)cache->attributes[0];
		PreserveAttribute__ctor_mBD1EEF1095DBD581365C77729CF4ACB914859CD2(tmp, NULL);
	}
}
IL2CPP_EXTERN_C const CustomAttributesCacheGenerator g_OdinAOTSupport_AttributeGenerators[];
const CustomAttributesCacheGenerator g_OdinAOTSupport_AttributeGenerators[2] = 
{
	PreventCodeStrippingViaReferences_tEA3CCBCB76671895DC5A42F7BB2CA3BE0F78E0F8_CustomAttributesCacheGenerator,
	OdinAOTSupport_CustomAttributesCacheGenerator,
};
