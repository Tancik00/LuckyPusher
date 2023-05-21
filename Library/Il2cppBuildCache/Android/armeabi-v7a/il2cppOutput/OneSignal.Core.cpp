#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
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
template <typename T1>
struct GenericVirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
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
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
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
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D;
// System.Collections.Generic.Dictionary`2<System.String,System.Boolean>
struct Dictionary_2_t99F1CF0D8EAD35142580D7CF6EC736C063B6190C;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC;
// System.Collections.Generic.Dictionary`2<System.String,System.Delegate>
struct Dictionary_2_t521306497EEE741202CFF9F69FB533CCAD8C8ACD;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5;
// System.Func`2<System.Object,System.Int32>
struct Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C;
// System.Func`2<System.Object,System.String>
struct Func_2_t060A650AB95DEF14D4F579FA5999ACEFEEE0FD82;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tE6A65C5E45E33FD7D9849FD0914DE3AD32B68050;
// System.Collections.Generic.IList`1<System.String>
struct IList_1_t54B152FB364EC47FC3BD440154FEB50A17503847;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Delegate>
struct KeyCollection_t0AD2DA40AC8BC38306680EF315DC73A925928BC2;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>
struct KeyCollection_t0043475CBB02FD67894529F3CAA818080A2F7A17;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>
struct KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<System.String>
struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3;
// OSStateChanges`1<OSEmailSubscriptionState>
struct OSStateChanges_1_tF6D22E1814993B2CC13952337B9CDD4434573527;
// OSStateChanges`1<OSPermissionState>
struct OSStateChanges_1_t888AE05C74699C24C20A082A169751FE9EC83345;
// OSStateChanges`1<OSSubscriptionState>
struct OSStateChanges_1_tDE1C321C28B88403CFDCC441FB2913F2BC5F45A3;
// OSStateChanges`1<System.Object>
struct OSStateChanges_1_tD8FC28464C8F461C5668D97DE7A3E0BF9CD0AE7C;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Delegate>
struct ValueCollection_t95FD4F8422D4204F94F64CC2BD10440026707DD0;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>
struct ValueCollection_tB942A1033B750DCF04FE948413982D120FC69A4E;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>
struct ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Delegate>[]
struct EntryU5BU5D_tD7FCDD66A48A28C1990072180391BBA2D830A0D9;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Object>[]
struct EntryU5BU5D_tDCA1A62E50C5B5A40FD6F44107088AF42F5671D2;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.String>[]
struct EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// System.UInt32[]
struct UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF;
// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// System.Globalization.Calendar
struct Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A;
// System.Globalization.CompareInfo
struct CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9;
// System.Globalization.CultureData
struct CultureData_t53CDF1C5F789A28897415891667799420D3C5529;
// System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.IFormatProvider
struct IFormatProvider_tF2AECC4B14F41D36718920D67F930CED940412DF;
// System.Collections.IList
struct IList_tB15A9D6625D09661D6E47976BB626C703EC81910;
// IOneSignalPlatform
struct IOneSignalPlatform_t161D92077EBE8503720EE7A41E171D69406AAF68;
// System.InvalidOperationException
struct InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D;
// OSEmailSubscriptionState
struct OSEmailSubscriptionState_tF6350D8DFFE2530E089402386E40677052DE2B6F;
// OSEmailSubscriptionStateChanges
struct OSEmailSubscriptionStateChanges_tCEE883A6FE7F1AAAC113C9D9E6135CEDAE1ABC6A;
// OSInAppMessageAction
struct OSInAppMessageAction_tAE95CC815769B2A2C7EE6A21F465550529D5C1A3;
// OSNotification
struct OSNotification_t554DC6C0C4C4F2E6602C4C5E096252126B0EAD72;
// OSNotificationAction
struct OSNotificationAction_t54C0BF5FEB98EBD72454642C9CAAD66B464C99AA;
// OSNotificationOpenedResult
struct OSNotificationOpenedResult_t74C73E0CEA2EB83022E266EF9F12B5E721DD057F;
// OSNotificationPayload
struct OSNotificationPayload_tC710F220B7749FA10F167E672736061B3B774BD2;
// OSOutcomeEvent
struct OSOutcomeEvent_tA0383B5CF8F2466567F3E15AA97710870875535D;
// OSPermissionState
struct OSPermissionState_tCBAFAF68101221797E344D4C443CBCD374C4B754;
// OSPermissionStateChanges
struct OSPermissionStateChanges_t1B014D5332A17B2F12B7B9B981B61A08AB8FDCF8;
// OSPermissionSubscriptionState
struct OSPermissionSubscriptionState_t7BCEA446B237598B727E00B8D8F4DBC11DEC9B72;
// OSSubscriptionState
struct OSSubscriptionState_t5D2F2C11D6193A8FAE88B9785FED7355C3CAB1D7;
// OSSubscriptionStateChanges
struct OSSubscriptionStateChanges_t80801EC51BCF40EDC399FB2C2658111539658213;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// OneSignal
struct OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C;
// OneSignalSettings
struct OneSignalSettings_t6B52AD1BB70C27A333C9FE47B84C9C93FE594CCF;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.IO.StringReader
struct StringReader_t74E352C280EAC22C878867444978741F19E1F895;
// System.Globalization.TextInfo
struct TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C;
// System.IO.TextReader
struct TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F;
// System.Type
struct Type_t;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// Json/Parser
struct Parser_t2D45D1FA01DEBA1E03BB55A0AF0A7453A771EF00;
// Json/Serializer
struct Serializer_tD60707A2A49A34FBCB719C8EFD602D15FF19C248;
// OneSignal/EmailSubscriptionObservable
struct EmailSubscriptionObservable_t0BE190ED78D890F32B3CD78351CB03CDE6743C4A;
// OneSignal/IdsAvailableCallback
struct IdsAvailableCallback_t4542530853E11729402E55FCDDD09AD6FBC8B377;
// OneSignal/InAppMessageClicked
struct InAppMessageClicked_t28BE72075727CEF08C18EC3542264EE5099C46AA;
// OneSignal/NotificationOpened
struct NotificationOpened_t1EAAB82F6D9989F1EC2B2A408858A3DDE351BBA0;
// OneSignal/NotificationReceived
struct NotificationReceived_tAD87EB0BF05ABA12EF33C2C0C3300278BA0CB814;
// OneSignal/OnExternalUserIdUpdateCompletion
struct OnExternalUserIdUpdateCompletion_tE7AD9883916B83BCCE7A9F6C4C77E818FA079EF3;
// OneSignal/OnExternalUserIdUpdateCompletionFailure
struct OnExternalUserIdUpdateCompletionFailure_t3C667A1A4AC32CE33E8FA58F11890E28729BB8F1;
// OneSignal/OnLogoutEmailFailure
struct OnLogoutEmailFailure_tA4226BD4128D5C768C079A27BC0ABEA359DC848D;
// OneSignal/OnLogoutEmailSuccess
struct OnLogoutEmailSuccess_t87D6896F1510F5624EA317AA83BCEEBE79DC60AF;
// OneSignal/OnPostNotificationFailure
struct OnPostNotificationFailure_t838C4BF4E9FE424E9B8A948B686BC4B56EA0EE85;
// OneSignal/OnPostNotificationSuccess
struct OnPostNotificationSuccess_tDCA1A38F1FC336944A4489421DD2C28BF9F6DAFA;
// OneSignal/OnSendOutcomeSuccess
struct OnSendOutcomeSuccess_t33CAC591369FF5B710CB915E5F2EC54F7BD19D0C;
// OneSignal/OnSetEmailFailure
struct OnSetEmailFailure_tC1B0B2D7E54644EF4414EFE4A1DC6A9371409B5D;
// OneSignal/OnSetEmailSuccess
struct OnSetEmailSuccess_t5D828241C45219E51AC4B47C581F66419C7D3BDB;
// OneSignal/PermissionObservable
struct PermissionObservable_tAD0961762662CFBE5C5C21B4F7B44816689D232D;
// OneSignal/PromptForPushNotificationsUserResponse
struct PromptForPushNotificationsUserResponse_t5508C614F3AB278D72FACCAD119F0F65792AB501;
// OneSignal/SubscriptionObservable
struct SubscriptionObservable_tAC9D68D12698867A849F8DBEDF5E81CEF8353BBB;
// OneSignal/TagsReceived
struct TagsReceived_t7D5926BFB0FAC298A876D14D71495DE029E4A791;
// OneSignal/UnityBuilder
struct UnityBuilder_tDBFC88D88033BADCF56F27E95359EF77CF9ADFED;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t521306497EEE741202CFF9F69FB533CCAD8C8ACD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EmailSubscriptionObservable_t0BE190ED78D890F32B3CD78351CB03CDE6743C4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Guid_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_tC1E1DED86C0A66845675392606B302452210D5DA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_t47A618747A1BB2A868710316F7372094849163A2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IOneSignalPlatform_t161D92077EBE8503720EE7A41E171D69406AAF68_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IdsAvailableCallback_t4542530853E11729402E55FCDDD09AD6FBC8B377_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OSEmailSubscriptionStateChanges_tCEE883A6FE7F1AAAC113C9D9E6135CEDAE1ABC6A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OSInAppMessageAction_tAE95CC815769B2A2C7EE6A21F465550529D5C1A3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OSNotificationAction_t54C0BF5FEB98EBD72454642C9CAAD66B464C99AA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OSNotificationOpenedResult_t74C73E0CEA2EB83022E266EF9F12B5E721DD057F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OSNotificationPayload_tC710F220B7749FA10F167E672736061B3B774BD2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OSNotification_t554DC6C0C4C4F2E6602C4C5E096252126B0EAD72_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OSOutcomeEvent_tA0383B5CF8F2466567F3E15AA97710870875535D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OSPermissionStateChanges_t1B014D5332A17B2F12B7B9B981B61A08AB8FDCF8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OSPermissionSubscriptionState_t7BCEA446B237598B727E00B8D8F4DBC11DEC9B72_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OSSubscriptionStateChanges_t80801EC51BCF40EDC399FB2C2658111539658213_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnExternalUserIdUpdateCompletion_tE7AD9883916B83BCCE7A9F6C4C77E818FA079EF3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnLogoutEmailFailure_tA4226BD4128D5C768C079A27BC0ABEA359DC848D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnLogoutEmailSuccess_t87D6896F1510F5624EA317AA83BCEEBE79DC60AF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnPostNotificationFailure_t838C4BF4E9FE424E9B8A948B686BC4B56EA0EE85_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnPostNotificationSuccess_tDCA1A38F1FC336944A4489421DD2C28BF9F6DAFA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnSendOutcomeSuccess_t33CAC591369FF5B710CB915E5F2EC54F7BD19D0C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnSetEmailFailure_tC1B0B2D7E54644EF4414EFE4A1DC6A9371409B5D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnSetEmailSuccess_t5D828241C45219E51AC4B47C581F66419C7D3BDB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OneSignalSettings_t6B52AD1BB70C27A333C9FE47B84C9C93FE594CCF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Parser_t2D45D1FA01DEBA1E03BB55A0AF0A7453A771EF00_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PermissionObservable_tAD0961762662CFBE5C5C21B4F7B44816689D232D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimePlatform_tB8798C800FD9810C0FE2B7D2F2A0A3979D239065_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Serializer_tD60707A2A49A34FBCB719C8EFD602D15FF19C248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringReader_t74E352C280EAC22C878867444978741F19E1F895_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SubscriptionObservable_tAC9D68D12698867A849F8DBEDF5E81CEF8353BBB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TagsReceived_t7D5926BFB0FAC298A876D14D71495DE029E4A791_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityBuilder_tDBFC88D88033BADCF56F27E95359EF77CF9ADFED_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0165CD426FD0E40D5DD836E735AEDA7B705A6307;
IL2CPP_EXTERN_C String_t* _stringLiteral03CE17F590FA4374BBD77BB910F23D5C321E1DF4;
IL2CPP_EXTERN_C String_t* _stringLiteral0B4D33ECEDCA004ACF5FBD9F549F536E73E5C059;
IL2CPP_EXTERN_C String_t* _stringLiteral0D889D11C6E8778B08365EED155A5049B9BB9413;
IL2CPP_EXTERN_C String_t* _stringLiteral1593F0BA9565D41C31360961E958F85BB60F0C8B;
IL2CPP_EXTERN_C String_t* _stringLiteral1B595A6FA2BAB4242CE1D3ED6E8149603F48C57F;
IL2CPP_EXTERN_C String_t* _stringLiteral1DAA3017CF52DD3E068D9EECEB45A4E48C5C84AC;
IL2CPP_EXTERN_C String_t* _stringLiteral1E3DB61522C4E7AA1D5A216FFA2CA92BAFA2EBF1;
IL2CPP_EXTERN_C String_t* _stringLiteral1EEA747F426E86C7BA93F023FA884C9357A942DB;
IL2CPP_EXTERN_C String_t* _stringLiteral240BE9B5E609F0DD8657150691504C4DE92A0925;
IL2CPP_EXTERN_C String_t* _stringLiteral2C3D4826D5236B3C9A914C5CE2E3D8CEA48AC7CE;
IL2CPP_EXTERN_C String_t* _stringLiteral2C410EB1F22365EC1A74DF0D8C89C99D53453CDD;
IL2CPP_EXTERN_C String_t* _stringLiteral3F7BB78E23CC83DC1DABE86458AEB502D8D2259A;
IL2CPP_EXTERN_C String_t* _stringLiteral3FE20946BA6B23BFF6A16331B412E0CFE9B755D3;
IL2CPP_EXTERN_C String_t* _stringLiteral404D7682AFE93081033FF0CD1A9165B38F3DAF39;
IL2CPP_EXTERN_C String_t* _stringLiteral42E49EB985DBD525F9131D975D4A1458641A6558;
IL2CPP_EXTERN_C String_t* _stringLiteral44846090648036BB6C68BEDC0AFAE9D786E2D352;
IL2CPP_EXTERN_C String_t* _stringLiteral449A390479E90BFAA4AA59C9E38C9E52D3E4E211;
IL2CPP_EXTERN_C String_t* _stringLiteral51311F107A22ACB2B9982782F66881085ABC044E;
IL2CPP_EXTERN_C String_t* _stringLiteral55AC598ED5884D77F7D97920AA5DDDDA2CAA02B4;
IL2CPP_EXTERN_C String_t* _stringLiteral55BCDA18DECBD8C76084B19CD63F790E3ECAD78C;
IL2CPP_EXTERN_C String_t* _stringLiteral5962E944D7340CE47999BF097B4AFD70C1501FB9;
IL2CPP_EXTERN_C String_t* _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174;
IL2CPP_EXTERN_C String_t* _stringLiteral5D08F7C1B259530ED46D90B3F0BD1CA69B5791A4;
IL2CPP_EXTERN_C String_t* _stringLiteral61FFF631210305266275E5181A82553B20C27BED;
IL2CPP_EXTERN_C String_t* _stringLiteral64B0BC222D53600613D752142B4DCEB97CE29683;
IL2CPP_EXTERN_C String_t* _stringLiteral689F3DBBCBED1762C5EE94535D915BAA7AF9BB97;
IL2CPP_EXTERN_C String_t* _stringLiteral703C0C715FA81A5615B2EB888B81982A4CC84394;
IL2CPP_EXTERN_C String_t* _stringLiteral737770B3F764157DABB4CE6100DDE5F3A7607BE8;
IL2CPP_EXTERN_C String_t* _stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB;
IL2CPP_EXTERN_C String_t* _stringLiteral785F17F45C331C415D0A7458E6AAC36966399C51;
IL2CPP_EXTERN_C String_t* _stringLiteral78E86F042D371FD16F0D696EF476DAAA4953E187;
IL2CPP_EXTERN_C String_t* _stringLiteral7A69BB6DC52ACFDC658A5C2155E741E58818E320;
IL2CPP_EXTERN_C String_t* _stringLiteral7AA6DC89F58BAAC908DD46FA2A87D7E8FB2F4A98;
IL2CPP_EXTERN_C String_t* _stringLiteral7BA4811D9B4DD1C83525D6D519B43A954269123C;
IL2CPP_EXTERN_C String_t* _stringLiteral7F3238CD8C342B06FB9AB185C610175C84625462;
IL2CPP_EXTERN_C String_t* _stringLiteral848E5ED630B3142F565DD995C6E8D30187ED33CD;
IL2CPP_EXTERN_C String_t* _stringLiteral84C1E07F84B6E7BDCC02A904AFEC3BBD2CAE6EAA;
IL2CPP_EXTERN_C String_t* _stringLiteral84C56EB5613DF38582973C9BB51B037D6DD69651;
IL2CPP_EXTERN_C String_t* _stringLiteral89F72ADA2A5007125CC0F6835664693ADBCCE81E;
IL2CPP_EXTERN_C String_t* _stringLiteral8AC5E01C0ED930FDDF47429AABA2FD04371BB804;
IL2CPP_EXTERN_C String_t* _stringLiteral8B3A67CB9621DC1863F25BA9BEA4614E6A89D67D;
IL2CPP_EXTERN_C String_t* _stringLiteral91F7E6F20B6646D90CD184646336FEFB5B3FCC2F;
IL2CPP_EXTERN_C String_t* _stringLiteral9459166F9C8874C454F72B62451C5CE876287B2B;
IL2CPP_EXTERN_C String_t* _stringLiteral996E5360F80E16B2189CC1E536C91CE68083F694;
IL2CPP_EXTERN_C String_t* _stringLiteral9E6A16EA00C50AC4711E813882BEA6313BE62302;
IL2CPP_EXTERN_C String_t* _stringLiteralA3B1199C309A44E7A09BF65AEC370CFC7C45CA9E;
IL2CPP_EXTERN_C String_t* _stringLiteralA3D208B8D59BE45DA847378972F5873C295095CA;
IL2CPP_EXTERN_C String_t* _stringLiteralA4419EF51FB63A77978E414E01AC1C9DCF20AA99;
IL2CPP_EXTERN_C String_t* _stringLiteralA7C3FCA8C63E127B542B38A5CA5E3FEEDDD1B122;
IL2CPP_EXTERN_C String_t* _stringLiteralA87C61B80C637AF7634ECA7413C525DA4D22787A;
IL2CPP_EXTERN_C String_t* _stringLiteralAD98798087396DE6FBBE1C8D540AB7643EC8804C;
IL2CPP_EXTERN_C String_t* _stringLiteralB78F235D4291950A7D101307609C259F3E1F033F;
IL2CPP_EXTERN_C String_t* _stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2;
IL2CPP_EXTERN_C String_t* _stringLiteralB8DDA9ED9882200BD39E3BD909BD0F58222BFAB6;
IL2CPP_EXTERN_C String_t* _stringLiteralBB22FF41C87BD3A9161757A1915692E00F3487A4;
IL2CPP_EXTERN_C String_t* _stringLiteralC5CD64A4BBC46492D30767199E811DE9461EBEDA;
IL2CPP_EXTERN_C String_t* _stringLiteralC7B4D926EF9532A71B25AEC040A33D52C926425F;
IL2CPP_EXTERN_C String_t* _stringLiteralCA38A2A438DBE868658AF134FDA5094E8ED31EAD;
IL2CPP_EXTERN_C String_t* _stringLiteralCCE359C6B0ABE9D58CB588667F9A93BA52A1C294;
IL2CPP_EXTERN_C String_t* _stringLiteralCD002DD70C7AAC9CFF6D7D4821927E13D2989493;
IL2CPP_EXTERN_C String_t* _stringLiteralD0209804F423F0C2698D8BEDDD802E490C489A40;
IL2CPP_EXTERN_C String_t* _stringLiteralD1BE973B5F59125FC8CC7D8264A1F724131BB623;
IL2CPP_EXTERN_C String_t* _stringLiteralD42CF38C169EF48A21F4E8340A2B67394539D49C;
IL2CPP_EXTERN_C String_t* _stringLiteralD5EEAB289A4A68C76A67688DA8452FC0FC483492;
IL2CPP_EXTERN_C String_t* _stringLiteralD9AFFD73A6E1A8B98370EE89588C726B632B5A95;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDA666908BB15F4E1D2649752EC5DCBD0D5C64699;
IL2CPP_EXTERN_C String_t* _stringLiteralDA7962E79DE9971EF95CECB194FDE602D7DCDA96;
IL2CPP_EXTERN_C String_t* _stringLiteralDC648DA3297D06299B89CFD936903E43D7C25B32;
IL2CPP_EXTERN_C String_t* _stringLiteralE144FB2BA65CCA8A37157EA2DED13F3F75C57B61;
IL2CPP_EXTERN_C String_t* _stringLiteralE6ECEC24C270F38E763B608B89E674B8ED03DA0E;
IL2CPP_EXTERN_C String_t* _stringLiteralE727BF366E3CC855B808D806440542BF7152AF19;
IL2CPP_EXTERN_C String_t* _stringLiteralEF92001FB995FAEADA46CAAC674F539A98DA3DAB;
IL2CPP_EXTERN_C String_t* _stringLiteralF099946CD3172EC2D59FF79A93DA608AD918F472;
IL2CPP_EXTERN_C String_t* _stringLiteralF183BDC1C5F166FCCED41C9844FCF55171B6B91D;
IL2CPP_EXTERN_C String_t* _stringLiteralF18840F490E42D3CE48CDCBF47229C1C240F8ABE;
IL2CPP_EXTERN_C String_t* _stringLiteralF24F4A3F68E5CF26ACA7939EE5A7E9EC9904D86E;
IL2CPP_EXTERN_C String_t* _stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7;
IL2CPP_EXTERN_C String_t* _stringLiteralF9010398F7F524C05AB19445BDCE02E617A3E267;
IL2CPP_EXTERN_C String_t* _stringLiteralFA0FB7629437B147B4CC9592153430D3C0BC5697;
IL2CPP_EXTERN_C String_t* _stringLiteralFD7FF5527419DE1CA42102B67E5C816D3A8C368A;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m41347382F51428371DD0FF5A518052A6CC8C3A4F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m288872404D22932B8AE710EF7BEE1AF7064BD258_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m3C1B28325435E61FFAD431E314EABF915B79A55E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m3D41B282C6E5156A390B58BF791E0CB3AB282E43_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m210799E1C2576446641CA24C1D9463F791556112_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mCD0C2F0325B7677B9BC340A60AA3FB9C7A88FF63_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mF5D8C5B9DBE4629B80CA94EBBF5F528C9A35FC3C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m012F321188703DCCB5C4F99C5A5AA2FA31A98144_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m4C91D0E84532DF10C654917487D82CB0AB27693B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisOneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_mCE3E2304529B1DEDC61A6277E04BB0999833151B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mD8C90346622A7F72A072D319F0E2AE851BB5885A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mF15250BF947CA27BE9A23C08BAC6DB6F180B0EDD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m6339FC2D3D1CE4FA13CF21C7F9FC58CA4441BF0C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OSStateChanges_1__ctor_m188DA2BB9E6C45BEDD5F669FE43B35A6512F2CC7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OSStateChanges_1__ctor_m2200C199AFE9F03327D9E335914783CC2AB5B625_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OSStateChanges_1__ctor_m3C8DB5A44C17B05FF364451D433764C32A667D7B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OneSignal_Init_m756C1C4D540B10908DD87EDC00BB106549112B0F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OneSignal_RegisterPlatform_m234A03E0BC37C49B0967D5EA1C5A1CC4DB730D4C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OneSignal_StartInit_mCE355FA4323A4ED21EF56D72469CE02D3F59EEA7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Resources_Load_TisOneSignalSettings_t6B52AD1BB70C27A333C9FE47B84C9C93FE594CCF_m19330665DFAC033277FB62F5B17BD204752E5A12_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ScriptableObject_CreateInstance_TisOneSignalSettings_t6B52AD1BB70C27A333C9FE47B84C9C93FE594CCF_m1E1C422AC5E73CAFFCEB43C3DDC9451A7A135B7D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* String_t_0_0_0_var;
struct CultureData_t53CDF1C5F789A28897415891667799420D3C5529_marshaled_com;
struct CultureData_t53CDF1C5F789A28897415891667799420D3C5529_marshaled_pinvoke;
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_com;
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_pinvoke;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tD01B1B040507A91800D3BE7951A029B2662D728C 
{
public:

public:
};


// System.Object


// System.Collections.Generic.Dictionary`2<System.String,System.Delegate>
struct Dictionary_2_t521306497EEE741202CFF9F69FB533CCAD8C8ACD  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tD7FCDD66A48A28C1990072180391BBA2D830A0D9* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t0AD2DA40AC8BC38306680EF315DC73A925928BC2 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t95FD4F8422D4204F94F64CC2BD10440026707DD0 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t521306497EEE741202CFF9F69FB533CCAD8C8ACD, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t521306497EEE741202CFF9F69FB533CCAD8C8ACD, ___entries_1)); }
	inline EntryU5BU5D_tD7FCDD66A48A28C1990072180391BBA2D830A0D9* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tD7FCDD66A48A28C1990072180391BBA2D830A0D9** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tD7FCDD66A48A28C1990072180391BBA2D830A0D9* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t521306497EEE741202CFF9F69FB533CCAD8C8ACD, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t521306497EEE741202CFF9F69FB533CCAD8C8ACD, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t521306497EEE741202CFF9F69FB533CCAD8C8ACD, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t521306497EEE741202CFF9F69FB533CCAD8C8ACD, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t521306497EEE741202CFF9F69FB533CCAD8C8ACD, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t521306497EEE741202CFF9F69FB533CCAD8C8ACD, ___keys_7)); }
	inline KeyCollection_t0AD2DA40AC8BC38306680EF315DC73A925928BC2 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t0AD2DA40AC8BC38306680EF315DC73A925928BC2 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t0AD2DA40AC8BC38306680EF315DC73A925928BC2 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t521306497EEE741202CFF9F69FB533CCAD8C8ACD, ___values_8)); }
	inline ValueCollection_t95FD4F8422D4204F94F64CC2BD10440026707DD0 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t95FD4F8422D4204F94F64CC2BD10440026707DD0 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t95FD4F8422D4204F94F64CC2BD10440026707DD0 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t521306497EEE741202CFF9F69FB533CCAD8C8ACD, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tDCA1A62E50C5B5A40FD6F44107088AF42F5671D2* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t0043475CBB02FD67894529F3CAA818080A2F7A17 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tB942A1033B750DCF04FE948413982D120FC69A4E * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___entries_1)); }
	inline EntryU5BU5D_tDCA1A62E50C5B5A40FD6F44107088AF42F5671D2* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tDCA1A62E50C5B5A40FD6F44107088AF42F5671D2** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tDCA1A62E50C5B5A40FD6F44107088AF42F5671D2* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___keys_7)); }
	inline KeyCollection_t0043475CBB02FD67894529F3CAA818080A2F7A17 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t0043475CBB02FD67894529F3CAA818080A2F7A17 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t0043475CBB02FD67894529F3CAA818080A2F7A17 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___values_8)); }
	inline ValueCollection_tB942A1033B750DCF04FE948413982D120FC69A4E * get_values_8() const { return ___values_8; }
	inline ValueCollection_tB942A1033B750DCF04FE948413982D120FC69A4E ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tB942A1033B750DCF04FE948413982D120FC69A4E * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___entries_1)); }
	inline EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___keys_7)); }
	inline KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___values_8)); }
	inline ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____items_1)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.String>
struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____items_1)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__items_1() const { return ____items_1; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_StaticFields, ____emptyArray_5)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__emptyArray_5() const { return ____emptyArray_5; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// OSStateChanges`1<OSEmailSubscriptionState>
struct OSStateChanges_1_tF6D22E1814993B2CC13952337B9CDD4434573527  : public RuntimeObject
{
public:
	// T OSStateChanges`1::to
	OSEmailSubscriptionState_tF6350D8DFFE2530E089402386E40677052DE2B6F * ___to_0;
	// T OSStateChanges`1::from
	OSEmailSubscriptionState_tF6350D8DFFE2530E089402386E40677052DE2B6F * ___from_1;

public:
	inline static int32_t get_offset_of_to_0() { return static_cast<int32_t>(offsetof(OSStateChanges_1_tF6D22E1814993B2CC13952337B9CDD4434573527, ___to_0)); }
	inline OSEmailSubscriptionState_tF6350D8DFFE2530E089402386E40677052DE2B6F * get_to_0() const { return ___to_0; }
	inline OSEmailSubscriptionState_tF6350D8DFFE2530E089402386E40677052DE2B6F ** get_address_of_to_0() { return &___to_0; }
	inline void set_to_0(OSEmailSubscriptionState_tF6350D8DFFE2530E089402386E40677052DE2B6F * value)
	{
		___to_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___to_0), (void*)value);
	}

	inline static int32_t get_offset_of_from_1() { return static_cast<int32_t>(offsetof(OSStateChanges_1_tF6D22E1814993B2CC13952337B9CDD4434573527, ___from_1)); }
	inline OSEmailSubscriptionState_tF6350D8DFFE2530E089402386E40677052DE2B6F * get_from_1() const { return ___from_1; }
	inline OSEmailSubscriptionState_tF6350D8DFFE2530E089402386E40677052DE2B6F ** get_address_of_from_1() { return &___from_1; }
	inline void set_from_1(OSEmailSubscriptionState_tF6350D8DFFE2530E089402386E40677052DE2B6F * value)
	{
		___from_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___from_1), (void*)value);
	}
};


// OSStateChanges`1<OSPermissionState>
struct OSStateChanges_1_t888AE05C74699C24C20A082A169751FE9EC83345  : public RuntimeObject
{
public:
	// T OSStateChanges`1::to
	OSPermissionState_tCBAFAF68101221797E344D4C443CBCD374C4B754 * ___to_0;
	// T OSStateChanges`1::from
	OSPermissionState_tCBAFAF68101221797E344D4C443CBCD374C4B754 * ___from_1;

public:
	inline static int32_t get_offset_of_to_0() { return static_cast<int32_t>(offsetof(OSStateChanges_1_t888AE05C74699C24C20A082A169751FE9EC83345, ___to_0)); }
	inline OSPermissionState_tCBAFAF68101221797E344D4C443CBCD374C4B754 * get_to_0() const { return ___to_0; }
	inline OSPermissionState_tCBAFAF68101221797E344D4C443CBCD374C4B754 ** get_address_of_to_0() { return &___to_0; }
	inline void set_to_0(OSPermissionState_tCBAFAF68101221797E344D4C443CBCD374C4B754 * value)
	{
		___to_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___to_0), (void*)value);
	}

	inline static int32_t get_offset_of_from_1() { return static_cast<int32_t>(offsetof(OSStateChanges_1_t888AE05C74699C24C20A082A169751FE9EC83345, ___from_1)); }
	inline OSPermissionState_tCBAFAF68101221797E344D4C443CBCD374C4B754 * get_from_1() const { return ___from_1; }
	inline OSPermissionState_tCBAFAF68101221797E344D4C443CBCD374C4B754 ** get_address_of_from_1() { return &___from_1; }
	inline void set_from_1(OSPermissionState_tCBAFAF68101221797E344D4C443CBCD374C4B754 * value)
	{
		___from_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___from_1), (void*)value);
	}
};


// OSStateChanges`1<OSSubscriptionState>
struct OSStateChanges_1_tDE1C321C28B88403CFDCC441FB2913F2BC5F45A3  : public RuntimeObject
{
public:
	// T OSStateChanges`1::to
	OSSubscriptionState_t5D2F2C11D6193A8FAE88B9785FED7355C3CAB1D7 * ___to_0;
	// T OSStateChanges`1::from
	OSSubscriptionState_t5D2F2C11D6193A8FAE88B9785FED7355C3CAB1D7 * ___from_1;

public:
	inline static int32_t get_offset_of_to_0() { return static_cast<int32_t>(offsetof(OSStateChanges_1_tDE1C321C28B88403CFDCC441FB2913F2BC5F45A3, ___to_0)); }
	inline OSSubscriptionState_t5D2F2C11D6193A8FAE88B9785FED7355C3CAB1D7 * get_to_0() const { return ___to_0; }
	inline OSSubscriptionState_t5D2F2C11D6193A8FAE88B9785FED7355C3CAB1D7 ** get_address_of_to_0() { return &___to_0; }
	inline void set_to_0(OSSubscriptionState_t5D2F2C11D6193A8FAE88B9785FED7355C3CAB1D7 * value)
	{
		___to_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___to_0), (void*)value);
	}

	inline static int32_t get_offset_of_from_1() { return static_cast<int32_t>(offsetof(OSStateChanges_1_tDE1C321C28B88403CFDCC441FB2913F2BC5F45A3, ___from_1)); }
	inline OSSubscriptionState_t5D2F2C11D6193A8FAE88B9785FED7355C3CAB1D7 * get_from_1() const { return ___from_1; }
	inline OSSubscriptionState_t5D2F2C11D6193A8FAE88B9785FED7355C3CAB1D7 ** get_address_of_from_1() { return &___from_1; }
	inline void set_from_1(OSSubscriptionState_t5D2F2C11D6193A8FAE88B9785FED7355C3CAB1D7 * value)
	{
		___from_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___from_1), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98  : public RuntimeObject
{
public:
	// System.Boolean System.Globalization.CultureInfo::m_isReadOnly
	bool ___m_isReadOnly_3;
	// System.Int32 System.Globalization.CultureInfo::cultureID
	int32_t ___cultureID_4;
	// System.Int32 System.Globalization.CultureInfo::parent_lcid
	int32_t ___parent_lcid_5;
	// System.Int32 System.Globalization.CultureInfo::datetime_index
	int32_t ___datetime_index_6;
	// System.Int32 System.Globalization.CultureInfo::number_index
	int32_t ___number_index_7;
	// System.Int32 System.Globalization.CultureInfo::default_calendar_type
	int32_t ___default_calendar_type_8;
	// System.Boolean System.Globalization.CultureInfo::m_useUserOverride
	bool ___m_useUserOverride_9;
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::numInfo
	NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * ___numInfo_10;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::dateTimeInfo
	DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * ___dateTimeInfo_11;
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::textInfo
	TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * ___textInfo_12;
	// System.String System.Globalization.CultureInfo::m_name
	String_t* ___m_name_13;
	// System.String System.Globalization.CultureInfo::englishname
	String_t* ___englishname_14;
	// System.String System.Globalization.CultureInfo::nativename
	String_t* ___nativename_15;
	// System.String System.Globalization.CultureInfo::iso3lang
	String_t* ___iso3lang_16;
	// System.String System.Globalization.CultureInfo::iso2lang
	String_t* ___iso2lang_17;
	// System.String System.Globalization.CultureInfo::win3lang
	String_t* ___win3lang_18;
	// System.String System.Globalization.CultureInfo::territory
	String_t* ___territory_19;
	// System.String[] System.Globalization.CultureInfo::native_calendar_names
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___native_calendar_names_20;
	// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::compareInfo
	CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * ___compareInfo_21;
	// System.Void* System.Globalization.CultureInfo::textinfo_data
	void* ___textinfo_data_22;
	// System.Int32 System.Globalization.CultureInfo::m_dataItem
	int32_t ___m_dataItem_23;
	// System.Globalization.Calendar System.Globalization.CultureInfo::calendar
	Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * ___calendar_24;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::parent_culture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___parent_culture_25;
	// System.Boolean System.Globalization.CultureInfo::constructed
	bool ___constructed_26;
	// System.Byte[] System.Globalization.CultureInfo::cached_serialized_form
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___cached_serialized_form_27;
	// System.Globalization.CultureData System.Globalization.CultureInfo::m_cultureData
	CultureData_t53CDF1C5F789A28897415891667799420D3C5529 * ___m_cultureData_28;
	// System.Boolean System.Globalization.CultureInfo::m_isInherited
	bool ___m_isInherited_29;

public:
	inline static int32_t get_offset_of_m_isReadOnly_3() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_isReadOnly_3)); }
	inline bool get_m_isReadOnly_3() const { return ___m_isReadOnly_3; }
	inline bool* get_address_of_m_isReadOnly_3() { return &___m_isReadOnly_3; }
	inline void set_m_isReadOnly_3(bool value)
	{
		___m_isReadOnly_3 = value;
	}

	inline static int32_t get_offset_of_cultureID_4() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___cultureID_4)); }
	inline int32_t get_cultureID_4() const { return ___cultureID_4; }
	inline int32_t* get_address_of_cultureID_4() { return &___cultureID_4; }
	inline void set_cultureID_4(int32_t value)
	{
		___cultureID_4 = value;
	}

	inline static int32_t get_offset_of_parent_lcid_5() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___parent_lcid_5)); }
	inline int32_t get_parent_lcid_5() const { return ___parent_lcid_5; }
	inline int32_t* get_address_of_parent_lcid_5() { return &___parent_lcid_5; }
	inline void set_parent_lcid_5(int32_t value)
	{
		___parent_lcid_5 = value;
	}

	inline static int32_t get_offset_of_datetime_index_6() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___datetime_index_6)); }
	inline int32_t get_datetime_index_6() const { return ___datetime_index_6; }
	inline int32_t* get_address_of_datetime_index_6() { return &___datetime_index_6; }
	inline void set_datetime_index_6(int32_t value)
	{
		___datetime_index_6 = value;
	}

	inline static int32_t get_offset_of_number_index_7() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___number_index_7)); }
	inline int32_t get_number_index_7() const { return ___number_index_7; }
	inline int32_t* get_address_of_number_index_7() { return &___number_index_7; }
	inline void set_number_index_7(int32_t value)
	{
		___number_index_7 = value;
	}

	inline static int32_t get_offset_of_default_calendar_type_8() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___default_calendar_type_8)); }
	inline int32_t get_default_calendar_type_8() const { return ___default_calendar_type_8; }
	inline int32_t* get_address_of_default_calendar_type_8() { return &___default_calendar_type_8; }
	inline void set_default_calendar_type_8(int32_t value)
	{
		___default_calendar_type_8 = value;
	}

	inline static int32_t get_offset_of_m_useUserOverride_9() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_useUserOverride_9)); }
	inline bool get_m_useUserOverride_9() const { return ___m_useUserOverride_9; }
	inline bool* get_address_of_m_useUserOverride_9() { return &___m_useUserOverride_9; }
	inline void set_m_useUserOverride_9(bool value)
	{
		___m_useUserOverride_9 = value;
	}

	inline static int32_t get_offset_of_numInfo_10() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___numInfo_10)); }
	inline NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * get_numInfo_10() const { return ___numInfo_10; }
	inline NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D ** get_address_of_numInfo_10() { return &___numInfo_10; }
	inline void set_numInfo_10(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * value)
	{
		___numInfo_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___numInfo_10), (void*)value);
	}

	inline static int32_t get_offset_of_dateTimeInfo_11() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___dateTimeInfo_11)); }
	inline DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * get_dateTimeInfo_11() const { return ___dateTimeInfo_11; }
	inline DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 ** get_address_of_dateTimeInfo_11() { return &___dateTimeInfo_11; }
	inline void set_dateTimeInfo_11(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * value)
	{
		___dateTimeInfo_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dateTimeInfo_11), (void*)value);
	}

	inline static int32_t get_offset_of_textInfo_12() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___textInfo_12)); }
	inline TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * get_textInfo_12() const { return ___textInfo_12; }
	inline TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C ** get_address_of_textInfo_12() { return &___textInfo_12; }
	inline void set_textInfo_12(TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * value)
	{
		___textInfo_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textInfo_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_name_13() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_name_13)); }
	inline String_t* get_m_name_13() const { return ___m_name_13; }
	inline String_t** get_address_of_m_name_13() { return &___m_name_13; }
	inline void set_m_name_13(String_t* value)
	{
		___m_name_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_name_13), (void*)value);
	}

	inline static int32_t get_offset_of_englishname_14() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___englishname_14)); }
	inline String_t* get_englishname_14() const { return ___englishname_14; }
	inline String_t** get_address_of_englishname_14() { return &___englishname_14; }
	inline void set_englishname_14(String_t* value)
	{
		___englishname_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___englishname_14), (void*)value);
	}

	inline static int32_t get_offset_of_nativename_15() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___nativename_15)); }
	inline String_t* get_nativename_15() const { return ___nativename_15; }
	inline String_t** get_address_of_nativename_15() { return &___nativename_15; }
	inline void set_nativename_15(String_t* value)
	{
		___nativename_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nativename_15), (void*)value);
	}

	inline static int32_t get_offset_of_iso3lang_16() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___iso3lang_16)); }
	inline String_t* get_iso3lang_16() const { return ___iso3lang_16; }
	inline String_t** get_address_of_iso3lang_16() { return &___iso3lang_16; }
	inline void set_iso3lang_16(String_t* value)
	{
		___iso3lang_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___iso3lang_16), (void*)value);
	}

	inline static int32_t get_offset_of_iso2lang_17() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___iso2lang_17)); }
	inline String_t* get_iso2lang_17() const { return ___iso2lang_17; }
	inline String_t** get_address_of_iso2lang_17() { return &___iso2lang_17; }
	inline void set_iso2lang_17(String_t* value)
	{
		___iso2lang_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___iso2lang_17), (void*)value);
	}

	inline static int32_t get_offset_of_win3lang_18() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___win3lang_18)); }
	inline String_t* get_win3lang_18() const { return ___win3lang_18; }
	inline String_t** get_address_of_win3lang_18() { return &___win3lang_18; }
	inline void set_win3lang_18(String_t* value)
	{
		___win3lang_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___win3lang_18), (void*)value);
	}

	inline static int32_t get_offset_of_territory_19() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___territory_19)); }
	inline String_t* get_territory_19() const { return ___territory_19; }
	inline String_t** get_address_of_territory_19() { return &___territory_19; }
	inline void set_territory_19(String_t* value)
	{
		___territory_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___territory_19), (void*)value);
	}

	inline static int32_t get_offset_of_native_calendar_names_20() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___native_calendar_names_20)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_native_calendar_names_20() const { return ___native_calendar_names_20; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_native_calendar_names_20() { return &___native_calendar_names_20; }
	inline void set_native_calendar_names_20(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___native_calendar_names_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_calendar_names_20), (void*)value);
	}

	inline static int32_t get_offset_of_compareInfo_21() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___compareInfo_21)); }
	inline CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * get_compareInfo_21() const { return ___compareInfo_21; }
	inline CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 ** get_address_of_compareInfo_21() { return &___compareInfo_21; }
	inline void set_compareInfo_21(CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * value)
	{
		___compareInfo_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___compareInfo_21), (void*)value);
	}

	inline static int32_t get_offset_of_textinfo_data_22() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___textinfo_data_22)); }
	inline void* get_textinfo_data_22() const { return ___textinfo_data_22; }
	inline void** get_address_of_textinfo_data_22() { return &___textinfo_data_22; }
	inline void set_textinfo_data_22(void* value)
	{
		___textinfo_data_22 = value;
	}

	inline static int32_t get_offset_of_m_dataItem_23() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_dataItem_23)); }
	inline int32_t get_m_dataItem_23() const { return ___m_dataItem_23; }
	inline int32_t* get_address_of_m_dataItem_23() { return &___m_dataItem_23; }
	inline void set_m_dataItem_23(int32_t value)
	{
		___m_dataItem_23 = value;
	}

	inline static int32_t get_offset_of_calendar_24() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___calendar_24)); }
	inline Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * get_calendar_24() const { return ___calendar_24; }
	inline Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A ** get_address_of_calendar_24() { return &___calendar_24; }
	inline void set_calendar_24(Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * value)
	{
		___calendar_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___calendar_24), (void*)value);
	}

	inline static int32_t get_offset_of_parent_culture_25() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___parent_culture_25)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_parent_culture_25() const { return ___parent_culture_25; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_parent_culture_25() { return &___parent_culture_25; }
	inline void set_parent_culture_25(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___parent_culture_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_culture_25), (void*)value);
	}

	inline static int32_t get_offset_of_constructed_26() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___constructed_26)); }
	inline bool get_constructed_26() const { return ___constructed_26; }
	inline bool* get_address_of_constructed_26() { return &___constructed_26; }
	inline void set_constructed_26(bool value)
	{
		___constructed_26 = value;
	}

	inline static int32_t get_offset_of_cached_serialized_form_27() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___cached_serialized_form_27)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_cached_serialized_form_27() const { return ___cached_serialized_form_27; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_cached_serialized_form_27() { return &___cached_serialized_form_27; }
	inline void set_cached_serialized_form_27(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___cached_serialized_form_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cached_serialized_form_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_cultureData_28() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_cultureData_28)); }
	inline CultureData_t53CDF1C5F789A28897415891667799420D3C5529 * get_m_cultureData_28() const { return ___m_cultureData_28; }
	inline CultureData_t53CDF1C5F789A28897415891667799420D3C5529 ** get_address_of_m_cultureData_28() { return &___m_cultureData_28; }
	inline void set_m_cultureData_28(CultureData_t53CDF1C5F789A28897415891667799420D3C5529 * value)
	{
		___m_cultureData_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_cultureData_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_isInherited_29() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_isInherited_29)); }
	inline bool get_m_isInherited_29() const { return ___m_isInherited_29; }
	inline bool* get_address_of_m_isInherited_29() { return &___m_isInherited_29; }
	inline void set_m_isInherited_29(bool value)
	{
		___m_isInherited_29 = value;
	}
};

struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields
{
public:
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::invariant_culture_info
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___invariant_culture_info_0;
	// System.Object System.Globalization.CultureInfo::shared_table_lock
	RuntimeObject * ___shared_table_lock_1;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::default_current_culture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___default_current_culture_2;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentUICulture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___s_DefaultThreadCurrentUICulture_33;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentCulture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___s_DefaultThreadCurrentCulture_34;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_number
	Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402 * ___shared_by_number_35;
	// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_name
	Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC * ___shared_by_name_36;
	// System.Boolean System.Globalization.CultureInfo::IsTaiwanSku
	bool ___IsTaiwanSku_37;

public:
	inline static int32_t get_offset_of_invariant_culture_info_0() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___invariant_culture_info_0)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_invariant_culture_info_0() const { return ___invariant_culture_info_0; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_invariant_culture_info_0() { return &___invariant_culture_info_0; }
	inline void set_invariant_culture_info_0(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___invariant_culture_info_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___invariant_culture_info_0), (void*)value);
	}

	inline static int32_t get_offset_of_shared_table_lock_1() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___shared_table_lock_1)); }
	inline RuntimeObject * get_shared_table_lock_1() const { return ___shared_table_lock_1; }
	inline RuntimeObject ** get_address_of_shared_table_lock_1() { return &___shared_table_lock_1; }
	inline void set_shared_table_lock_1(RuntimeObject * value)
	{
		___shared_table_lock_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shared_table_lock_1), (void*)value);
	}

	inline static int32_t get_offset_of_default_current_culture_2() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___default_current_culture_2)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_default_current_culture_2() const { return ___default_current_culture_2; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_default_current_culture_2() { return &___default_current_culture_2; }
	inline void set_default_current_culture_2(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___default_current_culture_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___default_current_culture_2), (void*)value);
	}

	inline static int32_t get_offset_of_s_DefaultThreadCurrentUICulture_33() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___s_DefaultThreadCurrentUICulture_33)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_s_DefaultThreadCurrentUICulture_33() const { return ___s_DefaultThreadCurrentUICulture_33; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_s_DefaultThreadCurrentUICulture_33() { return &___s_DefaultThreadCurrentUICulture_33; }
	inline void set_s_DefaultThreadCurrentUICulture_33(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___s_DefaultThreadCurrentUICulture_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultThreadCurrentUICulture_33), (void*)value);
	}

	inline static int32_t get_offset_of_s_DefaultThreadCurrentCulture_34() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___s_DefaultThreadCurrentCulture_34)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_s_DefaultThreadCurrentCulture_34() const { return ___s_DefaultThreadCurrentCulture_34; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_s_DefaultThreadCurrentCulture_34() { return &___s_DefaultThreadCurrentCulture_34; }
	inline void set_s_DefaultThreadCurrentCulture_34(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___s_DefaultThreadCurrentCulture_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultThreadCurrentCulture_34), (void*)value);
	}

	inline static int32_t get_offset_of_shared_by_number_35() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___shared_by_number_35)); }
	inline Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402 * get_shared_by_number_35() const { return ___shared_by_number_35; }
	inline Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402 ** get_address_of_shared_by_number_35() { return &___shared_by_number_35; }
	inline void set_shared_by_number_35(Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402 * value)
	{
		___shared_by_number_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shared_by_number_35), (void*)value);
	}

	inline static int32_t get_offset_of_shared_by_name_36() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___shared_by_name_36)); }
	inline Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC * get_shared_by_name_36() const { return ___shared_by_name_36; }
	inline Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC ** get_address_of_shared_by_name_36() { return &___shared_by_name_36; }
	inline void set_shared_by_name_36(Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC * value)
	{
		___shared_by_name_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shared_by_name_36), (void*)value);
	}

	inline static int32_t get_offset_of_IsTaiwanSku_37() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___IsTaiwanSku_37)); }
	inline bool get_IsTaiwanSku_37() const { return ___IsTaiwanSku_37; }
	inline bool* get_address_of_IsTaiwanSku_37() { return &___IsTaiwanSku_37; }
	inline void set_IsTaiwanSku_37(bool value)
	{
		___IsTaiwanSku_37 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_pinvoke
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * ___numInfo_10;
	DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * ___dateTimeInfo_11;
	TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * ___textInfo_12;
	char* ___m_name_13;
	char* ___englishname_14;
	char* ___nativename_15;
	char* ___iso3lang_16;
	char* ___iso2lang_17;
	char* ___win3lang_18;
	char* ___territory_19;
	char** ___native_calendar_names_20;
	CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * ___calendar_24;
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_pinvoke* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_t53CDF1C5F789A28897415891667799420D3C5529_marshaled_pinvoke* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};
// Native definition for COM marshalling of System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_com
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * ___numInfo_10;
	DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * ___dateTimeInfo_11;
	TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * ___textInfo_12;
	Il2CppChar* ___m_name_13;
	Il2CppChar* ___englishname_14;
	Il2CppChar* ___nativename_15;
	Il2CppChar* ___iso3lang_16;
	Il2CppChar* ___iso2lang_17;
	Il2CppChar* ___win3lang_18;
	Il2CppChar* ___territory_19;
	Il2CppChar** ___native_calendar_names_20;
	CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * ___calendar_24;
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_com* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_t53CDF1C5F789A28897415891667799420D3C5529_marshaled_com* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};

// Json
struct Json_t6B4B0980B2C10DE20CCCAEA0C34E9DD0DBF40F0F  : public RuntimeObject
{
public:

public:
};


// System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8  : public RuntimeObject
{
public:
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8, ____identity_0)); }
	inline RuntimeObject * get__identity_0() const { return ____identity_0; }
	inline RuntimeObject ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(RuntimeObject * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____identity_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// OSEmailSubscriptionState
struct OSEmailSubscriptionState_tF6350D8DFFE2530E089402386E40677052DE2B6F  : public RuntimeObject
{
public:
	// System.String OSEmailSubscriptionState::emailUserId
	String_t* ___emailUserId_0;
	// System.String OSEmailSubscriptionState::emailAddress
	String_t* ___emailAddress_1;
	// System.Boolean OSEmailSubscriptionState::subscribed
	bool ___subscribed_2;

public:
	inline static int32_t get_offset_of_emailUserId_0() { return static_cast<int32_t>(offsetof(OSEmailSubscriptionState_tF6350D8DFFE2530E089402386E40677052DE2B6F, ___emailUserId_0)); }
	inline String_t* get_emailUserId_0() const { return ___emailUserId_0; }
	inline String_t** get_address_of_emailUserId_0() { return &___emailUserId_0; }
	inline void set_emailUserId_0(String_t* value)
	{
		___emailUserId_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___emailUserId_0), (void*)value);
	}

	inline static int32_t get_offset_of_emailAddress_1() { return static_cast<int32_t>(offsetof(OSEmailSubscriptionState_tF6350D8DFFE2530E089402386E40677052DE2B6F, ___emailAddress_1)); }
	inline String_t* get_emailAddress_1() const { return ___emailAddress_1; }
	inline String_t** get_address_of_emailAddress_1() { return &___emailAddress_1; }
	inline void set_emailAddress_1(String_t* value)
	{
		___emailAddress_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___emailAddress_1), (void*)value);
	}

	inline static int32_t get_offset_of_subscribed_2() { return static_cast<int32_t>(offsetof(OSEmailSubscriptionState_tF6350D8DFFE2530E089402386E40677052DE2B6F, ___subscribed_2)); }
	inline bool get_subscribed_2() const { return ___subscribed_2; }
	inline bool* get_address_of_subscribed_2() { return &___subscribed_2; }
	inline void set_subscribed_2(bool value)
	{
		___subscribed_2 = value;
	}
};


// OSInAppMessageAction
struct OSInAppMessageAction_tAE95CC815769B2A2C7EE6A21F465550529D5C1A3  : public RuntimeObject
{
public:
	// System.String OSInAppMessageAction::clickName
	String_t* ___clickName_0;
	// System.String OSInAppMessageAction::clickUrl
	String_t* ___clickUrl_1;
	// System.Boolean OSInAppMessageAction::firstClick
	bool ___firstClick_2;
	// System.Boolean OSInAppMessageAction::closesMessage
	bool ___closesMessage_3;

public:
	inline static int32_t get_offset_of_clickName_0() { return static_cast<int32_t>(offsetof(OSInAppMessageAction_tAE95CC815769B2A2C7EE6A21F465550529D5C1A3, ___clickName_0)); }
	inline String_t* get_clickName_0() const { return ___clickName_0; }
	inline String_t** get_address_of_clickName_0() { return &___clickName_0; }
	inline void set_clickName_0(String_t* value)
	{
		___clickName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___clickName_0), (void*)value);
	}

	inline static int32_t get_offset_of_clickUrl_1() { return static_cast<int32_t>(offsetof(OSInAppMessageAction_tAE95CC815769B2A2C7EE6A21F465550529D5C1A3, ___clickUrl_1)); }
	inline String_t* get_clickUrl_1() const { return ___clickUrl_1; }
	inline String_t** get_address_of_clickUrl_1() { return &___clickUrl_1; }
	inline void set_clickUrl_1(String_t* value)
	{
		___clickUrl_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___clickUrl_1), (void*)value);
	}

	inline static int32_t get_offset_of_firstClick_2() { return static_cast<int32_t>(offsetof(OSInAppMessageAction_tAE95CC815769B2A2C7EE6A21F465550529D5C1A3, ___firstClick_2)); }
	inline bool get_firstClick_2() const { return ___firstClick_2; }
	inline bool* get_address_of_firstClick_2() { return &___firstClick_2; }
	inline void set_firstClick_2(bool value)
	{
		___firstClick_2 = value;
	}

	inline static int32_t get_offset_of_closesMessage_3() { return static_cast<int32_t>(offsetof(OSInAppMessageAction_tAE95CC815769B2A2C7EE6A21F465550529D5C1A3, ___closesMessage_3)); }
	inline bool get_closesMessage_3() const { return ___closesMessage_3; }
	inline bool* get_address_of_closesMessage_3() { return &___closesMessage_3; }
	inline void set_closesMessage_3(bool value)
	{
		___closesMessage_3 = value;
	}
};


// OSNotificationOpenedResult
struct OSNotificationOpenedResult_t74C73E0CEA2EB83022E266EF9F12B5E721DD057F  : public RuntimeObject
{
public:
	// OSNotificationAction OSNotificationOpenedResult::action
	OSNotificationAction_t54C0BF5FEB98EBD72454642C9CAAD66B464C99AA * ___action_0;
	// OSNotification OSNotificationOpenedResult::notification
	OSNotification_t554DC6C0C4C4F2E6602C4C5E096252126B0EAD72 * ___notification_1;

public:
	inline static int32_t get_offset_of_action_0() { return static_cast<int32_t>(offsetof(OSNotificationOpenedResult_t74C73E0CEA2EB83022E266EF9F12B5E721DD057F, ___action_0)); }
	inline OSNotificationAction_t54C0BF5FEB98EBD72454642C9CAAD66B464C99AA * get_action_0() const { return ___action_0; }
	inline OSNotificationAction_t54C0BF5FEB98EBD72454642C9CAAD66B464C99AA ** get_address_of_action_0() { return &___action_0; }
	inline void set_action_0(OSNotificationAction_t54C0BF5FEB98EBD72454642C9CAAD66B464C99AA * value)
	{
		___action_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___action_0), (void*)value);
	}

	inline static int32_t get_offset_of_notification_1() { return static_cast<int32_t>(offsetof(OSNotificationOpenedResult_t74C73E0CEA2EB83022E266EF9F12B5E721DD057F, ___notification_1)); }
	inline OSNotification_t554DC6C0C4C4F2E6602C4C5E096252126B0EAD72 * get_notification_1() const { return ___notification_1; }
	inline OSNotification_t554DC6C0C4C4F2E6602C4C5E096252126B0EAD72 ** get_address_of_notification_1() { return &___notification_1; }
	inline void set_notification_1(OSNotification_t554DC6C0C4C4F2E6602C4C5E096252126B0EAD72 * value)
	{
		___notification_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___notification_1), (void*)value);
	}
};


// OSNotificationPayload
struct OSNotificationPayload_tC710F220B7749FA10F167E672736061B3B774BD2  : public RuntimeObject
{
public:
	// System.String OSNotificationPayload::notificationID
	String_t* ___notificationID_0;
	// System.String OSNotificationPayload::sound
	String_t* ___sound_1;
	// System.String OSNotificationPayload::title
	String_t* ___title_2;
	// System.String OSNotificationPayload::body
	String_t* ___body_3;
	// System.String OSNotificationPayload::subtitle
	String_t* ___subtitle_4;
	// System.String OSNotificationPayload::launchURL
	String_t* ___launchURL_5;
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> OSNotificationPayload::additionalData
	Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * ___additionalData_6;
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> OSNotificationPayload::actionButtons
	Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * ___actionButtons_7;
	// System.Boolean OSNotificationPayload::contentAvailable
	bool ___contentAvailable_8;
	// System.Int32 OSNotificationPayload::badge
	int32_t ___badge_9;
	// System.String OSNotificationPayload::smallIcon
	String_t* ___smallIcon_10;
	// System.String OSNotificationPayload::largeIcon
	String_t* ___largeIcon_11;
	// System.String OSNotificationPayload::bigPicture
	String_t* ___bigPicture_12;
	// System.String OSNotificationPayload::smallIconAccentColor
	String_t* ___smallIconAccentColor_13;
	// System.String OSNotificationPayload::ledColor
	String_t* ___ledColor_14;
	// System.Int32 OSNotificationPayload::lockScreenVisibility
	int32_t ___lockScreenVisibility_15;
	// System.String OSNotificationPayload::groupKey
	String_t* ___groupKey_16;
	// System.String OSNotificationPayload::groupMessage
	String_t* ___groupMessage_17;
	// System.String OSNotificationPayload::fromProjectNumber
	String_t* ___fromProjectNumber_18;

public:
	inline static int32_t get_offset_of_notificationID_0() { return static_cast<int32_t>(offsetof(OSNotificationPayload_tC710F220B7749FA10F167E672736061B3B774BD2, ___notificationID_0)); }
	inline String_t* get_notificationID_0() const { return ___notificationID_0; }
	inline String_t** get_address_of_notificationID_0() { return &___notificationID_0; }
	inline void set_notificationID_0(String_t* value)
	{
		___notificationID_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___notificationID_0), (void*)value);
	}

	inline static int32_t get_offset_of_sound_1() { return static_cast<int32_t>(offsetof(OSNotificationPayload_tC710F220B7749FA10F167E672736061B3B774BD2, ___sound_1)); }
	inline String_t* get_sound_1() const { return ___sound_1; }
	inline String_t** get_address_of_sound_1() { return &___sound_1; }
	inline void set_sound_1(String_t* value)
	{
		___sound_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sound_1), (void*)value);
	}

	inline static int32_t get_offset_of_title_2() { return static_cast<int32_t>(offsetof(OSNotificationPayload_tC710F220B7749FA10F167E672736061B3B774BD2, ___title_2)); }
	inline String_t* get_title_2() const { return ___title_2; }
	inline String_t** get_address_of_title_2() { return &___title_2; }
	inline void set_title_2(String_t* value)
	{
		___title_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___title_2), (void*)value);
	}

	inline static int32_t get_offset_of_body_3() { return static_cast<int32_t>(offsetof(OSNotificationPayload_tC710F220B7749FA10F167E672736061B3B774BD2, ___body_3)); }
	inline String_t* get_body_3() const { return ___body_3; }
	inline String_t** get_address_of_body_3() { return &___body_3; }
	inline void set_body_3(String_t* value)
	{
		___body_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___body_3), (void*)value);
	}

	inline static int32_t get_offset_of_subtitle_4() { return static_cast<int32_t>(offsetof(OSNotificationPayload_tC710F220B7749FA10F167E672736061B3B774BD2, ___subtitle_4)); }
	inline String_t* get_subtitle_4() const { return ___subtitle_4; }
	inline String_t** get_address_of_subtitle_4() { return &___subtitle_4; }
	inline void set_subtitle_4(String_t* value)
	{
		___subtitle_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___subtitle_4), (void*)value);
	}

	inline static int32_t get_offset_of_launchURL_5() { return static_cast<int32_t>(offsetof(OSNotificationPayload_tC710F220B7749FA10F167E672736061B3B774BD2, ___launchURL_5)); }
	inline String_t* get_launchURL_5() const { return ___launchURL_5; }
	inline String_t** get_address_of_launchURL_5() { return &___launchURL_5; }
	inline void set_launchURL_5(String_t* value)
	{
		___launchURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___launchURL_5), (void*)value);
	}

	inline static int32_t get_offset_of_additionalData_6() { return static_cast<int32_t>(offsetof(OSNotificationPayload_tC710F220B7749FA10F167E672736061B3B774BD2, ___additionalData_6)); }
	inline Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * get_additionalData_6() const { return ___additionalData_6; }
	inline Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 ** get_address_of_additionalData_6() { return &___additionalData_6; }
	inline void set_additionalData_6(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * value)
	{
		___additionalData_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___additionalData_6), (void*)value);
	}

	inline static int32_t get_offset_of_actionButtons_7() { return static_cast<int32_t>(offsetof(OSNotificationPayload_tC710F220B7749FA10F167E672736061B3B774BD2, ___actionButtons_7)); }
	inline Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * get_actionButtons_7() const { return ___actionButtons_7; }
	inline Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 ** get_address_of_actionButtons_7() { return &___actionButtons_7; }
	inline void set_actionButtons_7(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * value)
	{
		___actionButtons_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___actionButtons_7), (void*)value);
	}

	inline static int32_t get_offset_of_contentAvailable_8() { return static_cast<int32_t>(offsetof(OSNotificationPayload_tC710F220B7749FA10F167E672736061B3B774BD2, ___contentAvailable_8)); }
	inline bool get_contentAvailable_8() const { return ___contentAvailable_8; }
	inline bool* get_address_of_contentAvailable_8() { return &___contentAvailable_8; }
	inline void set_contentAvailable_8(bool value)
	{
		___contentAvailable_8 = value;
	}

	inline static int32_t get_offset_of_badge_9() { return static_cast<int32_t>(offsetof(OSNotificationPayload_tC710F220B7749FA10F167E672736061B3B774BD2, ___badge_9)); }
	inline int32_t get_badge_9() const { return ___badge_9; }
	inline int32_t* get_address_of_badge_9() { return &___badge_9; }
	inline void set_badge_9(int32_t value)
	{
		___badge_9 = value;
	}

	inline static int32_t get_offset_of_smallIcon_10() { return static_cast<int32_t>(offsetof(OSNotificationPayload_tC710F220B7749FA10F167E672736061B3B774BD2, ___smallIcon_10)); }
	inline String_t* get_smallIcon_10() const { return ___smallIcon_10; }
	inline String_t** get_address_of_smallIcon_10() { return &___smallIcon_10; }
	inline void set_smallIcon_10(String_t* value)
	{
		___smallIcon_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___smallIcon_10), (void*)value);
	}

	inline static int32_t get_offset_of_largeIcon_11() { return static_cast<int32_t>(offsetof(OSNotificationPayload_tC710F220B7749FA10F167E672736061B3B774BD2, ___largeIcon_11)); }
	inline String_t* get_largeIcon_11() const { return ___largeIcon_11; }
	inline String_t** get_address_of_largeIcon_11() { return &___largeIcon_11; }
	inline void set_largeIcon_11(String_t* value)
	{
		___largeIcon_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___largeIcon_11), (void*)value);
	}

	inline static int32_t get_offset_of_bigPicture_12() { return static_cast<int32_t>(offsetof(OSNotificationPayload_tC710F220B7749FA10F167E672736061B3B774BD2, ___bigPicture_12)); }
	inline String_t* get_bigPicture_12() const { return ___bigPicture_12; }
	inline String_t** get_address_of_bigPicture_12() { return &___bigPicture_12; }
	inline void set_bigPicture_12(String_t* value)
	{
		___bigPicture_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bigPicture_12), (void*)value);
	}

	inline static int32_t get_offset_of_smallIconAccentColor_13() { return static_cast<int32_t>(offsetof(OSNotificationPayload_tC710F220B7749FA10F167E672736061B3B774BD2, ___smallIconAccentColor_13)); }
	inline String_t* get_smallIconAccentColor_13() const { return ___smallIconAccentColor_13; }
	inline String_t** get_address_of_smallIconAccentColor_13() { return &___smallIconAccentColor_13; }
	inline void set_smallIconAccentColor_13(String_t* value)
	{
		___smallIconAccentColor_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___smallIconAccentColor_13), (void*)value);
	}

	inline static int32_t get_offset_of_ledColor_14() { return static_cast<int32_t>(offsetof(OSNotificationPayload_tC710F220B7749FA10F167E672736061B3B774BD2, ___ledColor_14)); }
	inline String_t* get_ledColor_14() const { return ___ledColor_14; }
	inline String_t** get_address_of_ledColor_14() { return &___ledColor_14; }
	inline void set_ledColor_14(String_t* value)
	{
		___ledColor_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ledColor_14), (void*)value);
	}

	inline static int32_t get_offset_of_lockScreenVisibility_15() { return static_cast<int32_t>(offsetof(OSNotificationPayload_tC710F220B7749FA10F167E672736061B3B774BD2, ___lockScreenVisibility_15)); }
	inline int32_t get_lockScreenVisibility_15() const { return ___lockScreenVisibility_15; }
	inline int32_t* get_address_of_lockScreenVisibility_15() { return &___lockScreenVisibility_15; }
	inline void set_lockScreenVisibility_15(int32_t value)
	{
		___lockScreenVisibility_15 = value;
	}

	inline static int32_t get_offset_of_groupKey_16() { return static_cast<int32_t>(offsetof(OSNotificationPayload_tC710F220B7749FA10F167E672736061B3B774BD2, ___groupKey_16)); }
	inline String_t* get_groupKey_16() const { return ___groupKey_16; }
	inline String_t** get_address_of_groupKey_16() { return &___groupKey_16; }
	inline void set_groupKey_16(String_t* value)
	{
		___groupKey_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___groupKey_16), (void*)value);
	}

	inline static int32_t get_offset_of_groupMessage_17() { return static_cast<int32_t>(offsetof(OSNotificationPayload_tC710F220B7749FA10F167E672736061B3B774BD2, ___groupMessage_17)); }
	inline String_t* get_groupMessage_17() const { return ___groupMessage_17; }
	inline String_t** get_address_of_groupMessage_17() { return &___groupMessage_17; }
	inline void set_groupMessage_17(String_t* value)
	{
		___groupMessage_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___groupMessage_17), (void*)value);
	}

	inline static int32_t get_offset_of_fromProjectNumber_18() { return static_cast<int32_t>(offsetof(OSNotificationPayload_tC710F220B7749FA10F167E672736061B3B774BD2, ___fromProjectNumber_18)); }
	inline String_t* get_fromProjectNumber_18() const { return ___fromProjectNumber_18; }
	inline String_t** get_address_of_fromProjectNumber_18() { return &___fromProjectNumber_18; }
	inline void set_fromProjectNumber_18(String_t* value)
	{
		___fromProjectNumber_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fromProjectNumber_18), (void*)value);
	}
};


// OSPermissionSubscriptionState
struct OSPermissionSubscriptionState_t7BCEA446B237598B727E00B8D8F4DBC11DEC9B72  : public RuntimeObject
{
public:
	// OSPermissionState OSPermissionSubscriptionState::permissionStatus
	OSPermissionState_tCBAFAF68101221797E344D4C443CBCD374C4B754 * ___permissionStatus_0;
	// OSSubscriptionState OSPermissionSubscriptionState::subscriptionStatus
	OSSubscriptionState_t5D2F2C11D6193A8FAE88B9785FED7355C3CAB1D7 * ___subscriptionStatus_1;
	// OSEmailSubscriptionState OSPermissionSubscriptionState::emailSubscriptionStatus
	OSEmailSubscriptionState_tF6350D8DFFE2530E089402386E40677052DE2B6F * ___emailSubscriptionStatus_2;

public:
	inline static int32_t get_offset_of_permissionStatus_0() { return static_cast<int32_t>(offsetof(OSPermissionSubscriptionState_t7BCEA446B237598B727E00B8D8F4DBC11DEC9B72, ___permissionStatus_0)); }
	inline OSPermissionState_tCBAFAF68101221797E344D4C443CBCD374C4B754 * get_permissionStatus_0() const { return ___permissionStatus_0; }
	inline OSPermissionState_tCBAFAF68101221797E344D4C443CBCD374C4B754 ** get_address_of_permissionStatus_0() { return &___permissionStatus_0; }
	inline void set_permissionStatus_0(OSPermissionState_tCBAFAF68101221797E344D4C443CBCD374C4B754 * value)
	{
		___permissionStatus_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___permissionStatus_0), (void*)value);
	}

	inline static int32_t get_offset_of_subscriptionStatus_1() { return static_cast<int32_t>(offsetof(OSPermissionSubscriptionState_t7BCEA446B237598B727E00B8D8F4DBC11DEC9B72, ___subscriptionStatus_1)); }
	inline OSSubscriptionState_t5D2F2C11D6193A8FAE88B9785FED7355C3CAB1D7 * get_subscriptionStatus_1() const { return ___subscriptionStatus_1; }
	inline OSSubscriptionState_t5D2F2C11D6193A8FAE88B9785FED7355C3CAB1D7 ** get_address_of_subscriptionStatus_1() { return &___subscriptionStatus_1; }
	inline void set_subscriptionStatus_1(OSSubscriptionState_t5D2F2C11D6193A8FAE88B9785FED7355C3CAB1D7 * value)
	{
		___subscriptionStatus_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___subscriptionStatus_1), (void*)value);
	}

	inline static int32_t get_offset_of_emailSubscriptionStatus_2() { return static_cast<int32_t>(offsetof(OSPermissionSubscriptionState_t7BCEA446B237598B727E00B8D8F4DBC11DEC9B72, ___emailSubscriptionStatus_2)); }
	inline OSEmailSubscriptionState_tF6350D8DFFE2530E089402386E40677052DE2B6F * get_emailSubscriptionStatus_2() const { return ___emailSubscriptionStatus_2; }
	inline OSEmailSubscriptionState_tF6350D8DFFE2530E089402386E40677052DE2B6F ** get_address_of_emailSubscriptionStatus_2() { return &___emailSubscriptionStatus_2; }
	inline void set_emailSubscriptionStatus_2(OSEmailSubscriptionState_tF6350D8DFFE2530E089402386E40677052DE2B6F * value)
	{
		___emailSubscriptionStatus_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___emailSubscriptionStatus_2), (void*)value);
	}
};


// OSSubscriptionState
struct OSSubscriptionState_t5D2F2C11D6193A8FAE88B9785FED7355C3CAB1D7  : public RuntimeObject
{
public:
	// System.Boolean OSSubscriptionState::userSubscriptionSetting
	bool ___userSubscriptionSetting_0;
	// System.String OSSubscriptionState::userId
	String_t* ___userId_1;
	// System.String OSSubscriptionState::pushToken
	String_t* ___pushToken_2;
	// System.Boolean OSSubscriptionState::subscribed
	bool ___subscribed_3;

public:
	inline static int32_t get_offset_of_userSubscriptionSetting_0() { return static_cast<int32_t>(offsetof(OSSubscriptionState_t5D2F2C11D6193A8FAE88B9785FED7355C3CAB1D7, ___userSubscriptionSetting_0)); }
	inline bool get_userSubscriptionSetting_0() const { return ___userSubscriptionSetting_0; }
	inline bool* get_address_of_userSubscriptionSetting_0() { return &___userSubscriptionSetting_0; }
	inline void set_userSubscriptionSetting_0(bool value)
	{
		___userSubscriptionSetting_0 = value;
	}

	inline static int32_t get_offset_of_userId_1() { return static_cast<int32_t>(offsetof(OSSubscriptionState_t5D2F2C11D6193A8FAE88B9785FED7355C3CAB1D7, ___userId_1)); }
	inline String_t* get_userId_1() const { return ___userId_1; }
	inline String_t** get_address_of_userId_1() { return &___userId_1; }
	inline void set_userId_1(String_t* value)
	{
		___userId_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___userId_1), (void*)value);
	}

	inline static int32_t get_offset_of_pushToken_2() { return static_cast<int32_t>(offsetof(OSSubscriptionState_t5D2F2C11D6193A8FAE88B9785FED7355C3CAB1D7, ___pushToken_2)); }
	inline String_t* get_pushToken_2() const { return ___pushToken_2; }
	inline String_t** get_address_of_pushToken_2() { return &___pushToken_2; }
	inline void set_pushToken_2(String_t* value)
	{
		___pushToken_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pushToken_2), (void*)value);
	}

	inline static int32_t get_offset_of_subscribed_3() { return static_cast<int32_t>(offsetof(OSSubscriptionState_t5D2F2C11D6193A8FAE88B9785FED7355C3CAB1D7, ___subscribed_3)); }
	inline bool get_subscribed_3() const { return ___subscribed_3; }
	inline bool* get_address_of_subscribed_3() { return &___subscribed_3; }
	inline void set_subscribed_3(bool value)
	{
		___subscribed_3 = value;
	}
};


// OneSignalPlatformHelper
struct OneSignalPlatformHelper_t6DE3DCAEA427209ADE4FAEA712012EF3A1B6B539  : public RuntimeObject
{
public:

public:
};


// OneSignalUnityUtils
struct OneSignalUnityUtils_tD7E825606B5B6893AF02C30E694A4E395CC5D1B4  : public RuntimeObject
{
public:

public:
};


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


// System.Text.StringBuilder
struct StringBuilder_t  : public RuntimeObject
{
public:
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t * ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;

public:
	inline static int32_t get_offset_of_m_ChunkChars_0() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkChars_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_m_ChunkChars_0() const { return ___m_ChunkChars_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_m_ChunkChars_0() { return &___m_ChunkChars_0; }
	inline void set_m_ChunkChars_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___m_ChunkChars_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChunkChars_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChunkPrevious_1() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkPrevious_1)); }
	inline StringBuilder_t * get_m_ChunkPrevious_1() const { return ___m_ChunkPrevious_1; }
	inline StringBuilder_t ** get_address_of_m_ChunkPrevious_1() { return &___m_ChunkPrevious_1; }
	inline void set_m_ChunkPrevious_1(StringBuilder_t * value)
	{
		___m_ChunkPrevious_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChunkPrevious_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChunkLength_2() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkLength_2)); }
	inline int32_t get_m_ChunkLength_2() const { return ___m_ChunkLength_2; }
	inline int32_t* get_address_of_m_ChunkLength_2() { return &___m_ChunkLength_2; }
	inline void set_m_ChunkLength_2(int32_t value)
	{
		___m_ChunkLength_2 = value;
	}

	inline static int32_t get_offset_of_m_ChunkOffset_3() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkOffset_3)); }
	inline int32_t get_m_ChunkOffset_3() const { return ___m_ChunkOffset_3; }
	inline int32_t* get_address_of_m_ChunkOffset_3() { return &___m_ChunkOffset_3; }
	inline void set_m_ChunkOffset_3(int32_t value)
	{
		___m_ChunkOffset_3 = value;
	}

	inline static int32_t get_offset_of_m_MaxCapacity_4() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_MaxCapacity_4)); }
	inline int32_t get_m_MaxCapacity_4() const { return ___m_MaxCapacity_4; }
	inline int32_t* get_address_of_m_MaxCapacity_4() { return &___m_MaxCapacity_4; }
	inline void set_m_MaxCapacity_4(int32_t value)
	{
		___m_MaxCapacity_4 = value;
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

// Json/Parser
struct Parser_t2D45D1FA01DEBA1E03BB55A0AF0A7453A771EF00  : public RuntimeObject
{
public:
	// System.IO.StringReader Json/Parser::json
	StringReader_t74E352C280EAC22C878867444978741F19E1F895 * ___json_0;

public:
	inline static int32_t get_offset_of_json_0() { return static_cast<int32_t>(offsetof(Parser_t2D45D1FA01DEBA1E03BB55A0AF0A7453A771EF00, ___json_0)); }
	inline StringReader_t74E352C280EAC22C878867444978741F19E1F895 * get_json_0() const { return ___json_0; }
	inline StringReader_t74E352C280EAC22C878867444978741F19E1F895 ** get_address_of_json_0() { return &___json_0; }
	inline void set_json_0(StringReader_t74E352C280EAC22C878867444978741F19E1F895 * value)
	{
		___json_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___json_0), (void*)value);
	}
};


// Json/Serializer
struct Serializer_tD60707A2A49A34FBCB719C8EFD602D15FF19C248  : public RuntimeObject
{
public:
	// System.Text.StringBuilder Json/Serializer::builder
	StringBuilder_t * ___builder_0;
	// System.Boolean Json/Serializer::humanReadable
	bool ___humanReadable_1;
	// System.Int32 Json/Serializer::indentSpaces
	int32_t ___indentSpaces_2;
	// System.Int32 Json/Serializer::indentLevel
	int32_t ___indentLevel_3;

public:
	inline static int32_t get_offset_of_builder_0() { return static_cast<int32_t>(offsetof(Serializer_tD60707A2A49A34FBCB719C8EFD602D15FF19C248, ___builder_0)); }
	inline StringBuilder_t * get_builder_0() const { return ___builder_0; }
	inline StringBuilder_t ** get_address_of_builder_0() { return &___builder_0; }
	inline void set_builder_0(StringBuilder_t * value)
	{
		___builder_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___builder_0), (void*)value);
	}

	inline static int32_t get_offset_of_humanReadable_1() { return static_cast<int32_t>(offsetof(Serializer_tD60707A2A49A34FBCB719C8EFD602D15FF19C248, ___humanReadable_1)); }
	inline bool get_humanReadable_1() const { return ___humanReadable_1; }
	inline bool* get_address_of_humanReadable_1() { return &___humanReadable_1; }
	inline void set_humanReadable_1(bool value)
	{
		___humanReadable_1 = value;
	}

	inline static int32_t get_offset_of_indentSpaces_2() { return static_cast<int32_t>(offsetof(Serializer_tD60707A2A49A34FBCB719C8EFD602D15FF19C248, ___indentSpaces_2)); }
	inline int32_t get_indentSpaces_2() const { return ___indentSpaces_2; }
	inline int32_t* get_address_of_indentSpaces_2() { return &___indentSpaces_2; }
	inline void set_indentSpaces_2(int32_t value)
	{
		___indentSpaces_2 = value;
	}

	inline static int32_t get_offset_of_indentLevel_3() { return static_cast<int32_t>(offsetof(Serializer_tD60707A2A49A34FBCB719C8EFD602D15FF19C248, ___indentLevel_3)); }
	inline int32_t get_indentLevel_3() const { return ___indentLevel_3; }
	inline int32_t* get_address_of_indentLevel_3() { return &___indentLevel_3; }
	inline void set_indentLevel_3(int32_t value)
	{
		___indentLevel_3 = value;
	}
};


// OneSignal/UnityBuilder
struct UnityBuilder_tDBFC88D88033BADCF56F27E95359EF77CF9ADFED  : public RuntimeObject
{
public:
	// System.String OneSignal/UnityBuilder::appID
	String_t* ___appID_0;
	// System.String OneSignal/UnityBuilder::googleProjectNumber
	String_t* ___googleProjectNumber_1;
	// System.Collections.Generic.Dictionary`2<System.String,System.Boolean> OneSignal/UnityBuilder::iOSSettings
	Dictionary_2_t99F1CF0D8EAD35142580D7CF6EC736C063B6190C * ___iOSSettings_2;
	// OneSignal/NotificationReceived OneSignal/UnityBuilder::notificationReceivedDelegate
	NotificationReceived_tAD87EB0BF05ABA12EF33C2C0C3300278BA0CB814 * ___notificationReceivedDelegate_3;
	// OneSignal/NotificationOpened OneSignal/UnityBuilder::notificationOpenedDelegate
	NotificationOpened_t1EAAB82F6D9989F1EC2B2A408858A3DDE351BBA0 * ___notificationOpenedDelegate_4;
	// OneSignal/InAppMessageClicked OneSignal/UnityBuilder::inAppMessageClickHandlerDelegate
	InAppMessageClicked_t28BE72075727CEF08C18EC3542264EE5099C46AA * ___inAppMessageClickHandlerDelegate_5;

public:
	inline static int32_t get_offset_of_appID_0() { return static_cast<int32_t>(offsetof(UnityBuilder_tDBFC88D88033BADCF56F27E95359EF77CF9ADFED, ___appID_0)); }
	inline String_t* get_appID_0() const { return ___appID_0; }
	inline String_t** get_address_of_appID_0() { return &___appID_0; }
	inline void set_appID_0(String_t* value)
	{
		___appID_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___appID_0), (void*)value);
	}

	inline static int32_t get_offset_of_googleProjectNumber_1() { return static_cast<int32_t>(offsetof(UnityBuilder_tDBFC88D88033BADCF56F27E95359EF77CF9ADFED, ___googleProjectNumber_1)); }
	inline String_t* get_googleProjectNumber_1() const { return ___googleProjectNumber_1; }
	inline String_t** get_address_of_googleProjectNumber_1() { return &___googleProjectNumber_1; }
	inline void set_googleProjectNumber_1(String_t* value)
	{
		___googleProjectNumber_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___googleProjectNumber_1), (void*)value);
	}

	inline static int32_t get_offset_of_iOSSettings_2() { return static_cast<int32_t>(offsetof(UnityBuilder_tDBFC88D88033BADCF56F27E95359EF77CF9ADFED, ___iOSSettings_2)); }
	inline Dictionary_2_t99F1CF0D8EAD35142580D7CF6EC736C063B6190C * get_iOSSettings_2() const { return ___iOSSettings_2; }
	inline Dictionary_2_t99F1CF0D8EAD35142580D7CF6EC736C063B6190C ** get_address_of_iOSSettings_2() { return &___iOSSettings_2; }
	inline void set_iOSSettings_2(Dictionary_2_t99F1CF0D8EAD35142580D7CF6EC736C063B6190C * value)
	{
		___iOSSettings_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___iOSSettings_2), (void*)value);
	}

	inline static int32_t get_offset_of_notificationReceivedDelegate_3() { return static_cast<int32_t>(offsetof(UnityBuilder_tDBFC88D88033BADCF56F27E95359EF77CF9ADFED, ___notificationReceivedDelegate_3)); }
	inline NotificationReceived_tAD87EB0BF05ABA12EF33C2C0C3300278BA0CB814 * get_notificationReceivedDelegate_3() const { return ___notificationReceivedDelegate_3; }
	inline NotificationReceived_tAD87EB0BF05ABA12EF33C2C0C3300278BA0CB814 ** get_address_of_notificationReceivedDelegate_3() { return &___notificationReceivedDelegate_3; }
	inline void set_notificationReceivedDelegate_3(NotificationReceived_tAD87EB0BF05ABA12EF33C2C0C3300278BA0CB814 * value)
	{
		___notificationReceivedDelegate_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___notificationReceivedDelegate_3), (void*)value);
	}

	inline static int32_t get_offset_of_notificationOpenedDelegate_4() { return static_cast<int32_t>(offsetof(UnityBuilder_tDBFC88D88033BADCF56F27E95359EF77CF9ADFED, ___notificationOpenedDelegate_4)); }
	inline NotificationOpened_t1EAAB82F6D9989F1EC2B2A408858A3DDE351BBA0 * get_notificationOpenedDelegate_4() const { return ___notificationOpenedDelegate_4; }
	inline NotificationOpened_t1EAAB82F6D9989F1EC2B2A408858A3DDE351BBA0 ** get_address_of_notificationOpenedDelegate_4() { return &___notificationOpenedDelegate_4; }
	inline void set_notificationOpenedDelegate_4(NotificationOpened_t1EAAB82F6D9989F1EC2B2A408858A3DDE351BBA0 * value)
	{
		___notificationOpenedDelegate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___notificationOpenedDelegate_4), (void*)value);
	}

	inline static int32_t get_offset_of_inAppMessageClickHandlerDelegate_5() { return static_cast<int32_t>(offsetof(UnityBuilder_tDBFC88D88033BADCF56F27E95359EF77CF9ADFED, ___inAppMessageClickHandlerDelegate_5)); }
	inline InAppMessageClicked_t28BE72075727CEF08C18EC3542264EE5099C46AA * get_inAppMessageClickHandlerDelegate_5() const { return ___inAppMessageClickHandlerDelegate_5; }
	inline InAppMessageClicked_t28BE72075727CEF08C18EC3542264EE5099C46AA ** get_address_of_inAppMessageClickHandlerDelegate_5() { return &___inAppMessageClickHandlerDelegate_5; }
	inline void set_inAppMessageClickHandlerDelegate_5(InAppMessageClicked_t28BE72075727CEF08C18EC3542264EE5099C46AA * value)
	{
		___inAppMessageClickHandlerDelegate_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inAppMessageClickHandlerDelegate_5), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___list_0)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_list_0() const { return ___list_0; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Byte
struct Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// System.Char
struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___categoryForLatin1_3), (void*)value);
	}
};


// System.Decimal
struct Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 
{
public:
	// System.Int32 System.Decimal::flags
	int32_t ___flags_14;
	// System.Int32 System.Decimal::hi
	int32_t ___hi_15;
	// System.Int32 System.Decimal::lo
	int32_t ___lo_16;
	// System.Int32 System.Decimal::mid
	int32_t ___mid_17;

public:
	inline static int32_t get_offset_of_flags_14() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7, ___flags_14)); }
	inline int32_t get_flags_14() const { return ___flags_14; }
	inline int32_t* get_address_of_flags_14() { return &___flags_14; }
	inline void set_flags_14(int32_t value)
	{
		___flags_14 = value;
	}

	inline static int32_t get_offset_of_hi_15() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7, ___hi_15)); }
	inline int32_t get_hi_15() const { return ___hi_15; }
	inline int32_t* get_address_of_hi_15() { return &___hi_15; }
	inline void set_hi_15(int32_t value)
	{
		___hi_15 = value;
	}

	inline static int32_t get_offset_of_lo_16() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7, ___lo_16)); }
	inline int32_t get_lo_16() const { return ___lo_16; }
	inline int32_t* get_address_of_lo_16() { return &___lo_16; }
	inline void set_lo_16(int32_t value)
	{
		___lo_16 = value;
	}

	inline static int32_t get_offset_of_mid_17() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7, ___mid_17)); }
	inline int32_t get_mid_17() const { return ___mid_17; }
	inline int32_t* get_address_of_mid_17() { return &___mid_17; }
	inline void set_mid_17(int32_t value)
	{
		___mid_17 = value;
	}
};

struct Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields
{
public:
	// System.UInt32[] System.Decimal::Powers10
	UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ___Powers10_6;
	// System.Decimal System.Decimal::Zero
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___Zero_7;
	// System.Decimal System.Decimal::One
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___One_8;
	// System.Decimal System.Decimal::MinusOne
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___MinusOne_9;
	// System.Decimal System.Decimal::MaxValue
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___MaxValue_10;
	// System.Decimal System.Decimal::MinValue
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___MinValue_11;
	// System.Decimal System.Decimal::NearNegativeZero
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___NearNegativeZero_12;
	// System.Decimal System.Decimal::NearPositiveZero
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___NearPositiveZero_13;

public:
	inline static int32_t get_offset_of_Powers10_6() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___Powers10_6)); }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* get_Powers10_6() const { return ___Powers10_6; }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF** get_address_of_Powers10_6() { return &___Powers10_6; }
	inline void set_Powers10_6(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* value)
	{
		___Powers10_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Powers10_6), (void*)value);
	}

	inline static int32_t get_offset_of_Zero_7() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___Zero_7)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_Zero_7() const { return ___Zero_7; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_Zero_7() { return &___Zero_7; }
	inline void set_Zero_7(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___Zero_7 = value;
	}

	inline static int32_t get_offset_of_One_8() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___One_8)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_One_8() const { return ___One_8; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_One_8() { return &___One_8; }
	inline void set_One_8(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___One_8 = value;
	}

	inline static int32_t get_offset_of_MinusOne_9() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___MinusOne_9)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_MinusOne_9() const { return ___MinusOne_9; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_MinusOne_9() { return &___MinusOne_9; }
	inline void set_MinusOne_9(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___MinusOne_9 = value;
	}

	inline static int32_t get_offset_of_MaxValue_10() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___MaxValue_10)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_MaxValue_10() const { return ___MaxValue_10; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_MaxValue_10() { return &___MaxValue_10; }
	inline void set_MaxValue_10(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___MaxValue_10 = value;
	}

	inline static int32_t get_offset_of_MinValue_11() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___MinValue_11)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_MinValue_11() const { return ___MinValue_11; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_MinValue_11() { return &___MinValue_11; }
	inline void set_MinValue_11(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___MinValue_11 = value;
	}

	inline static int32_t get_offset_of_NearNegativeZero_12() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___NearNegativeZero_12)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_NearNegativeZero_12() const { return ___NearNegativeZero_12; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_NearNegativeZero_12() { return &___NearNegativeZero_12; }
	inline void set_NearNegativeZero_12(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___NearNegativeZero_12 = value;
	}

	inline static int32_t get_offset_of_NearPositiveZero_13() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___NearPositiveZero_13)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_NearPositiveZero_13() const { return ___NearPositiveZero_13; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_NearPositiveZero_13() { return &___NearPositiveZero_13; }
	inline void set_NearPositiveZero_13(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___NearPositiveZero_13 = value;
	}
};


// System.Double
struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Guid
struct Guid_t 
{
public:
	// System.Int32 System.Guid::_a
	int32_t ____a_1;
	// System.Int16 System.Guid::_b
	int16_t ____b_2;
	// System.Int16 System.Guid::_c
	int16_t ____c_3;
	// System.Byte System.Guid::_d
	uint8_t ____d_4;
	// System.Byte System.Guid::_e
	uint8_t ____e_5;
	// System.Byte System.Guid::_f
	uint8_t ____f_6;
	// System.Byte System.Guid::_g
	uint8_t ____g_7;
	// System.Byte System.Guid::_h
	uint8_t ____h_8;
	// System.Byte System.Guid::_i
	uint8_t ____i_9;
	// System.Byte System.Guid::_j
	uint8_t ____j_10;
	// System.Byte System.Guid::_k
	uint8_t ____k_11;

public:
	inline static int32_t get_offset_of__a_1() { return static_cast<int32_t>(offsetof(Guid_t, ____a_1)); }
	inline int32_t get__a_1() const { return ____a_1; }
	inline int32_t* get_address_of__a_1() { return &____a_1; }
	inline void set__a_1(int32_t value)
	{
		____a_1 = value;
	}

	inline static int32_t get_offset_of__b_2() { return static_cast<int32_t>(offsetof(Guid_t, ____b_2)); }
	inline int16_t get__b_2() const { return ____b_2; }
	inline int16_t* get_address_of__b_2() { return &____b_2; }
	inline void set__b_2(int16_t value)
	{
		____b_2 = value;
	}

	inline static int32_t get_offset_of__c_3() { return static_cast<int32_t>(offsetof(Guid_t, ____c_3)); }
	inline int16_t get__c_3() const { return ____c_3; }
	inline int16_t* get_address_of__c_3() { return &____c_3; }
	inline void set__c_3(int16_t value)
	{
		____c_3 = value;
	}

	inline static int32_t get_offset_of__d_4() { return static_cast<int32_t>(offsetof(Guid_t, ____d_4)); }
	inline uint8_t get__d_4() const { return ____d_4; }
	inline uint8_t* get_address_of__d_4() { return &____d_4; }
	inline void set__d_4(uint8_t value)
	{
		____d_4 = value;
	}

	inline static int32_t get_offset_of__e_5() { return static_cast<int32_t>(offsetof(Guid_t, ____e_5)); }
	inline uint8_t get__e_5() const { return ____e_5; }
	inline uint8_t* get_address_of__e_5() { return &____e_5; }
	inline void set__e_5(uint8_t value)
	{
		____e_5 = value;
	}

	inline static int32_t get_offset_of__f_6() { return static_cast<int32_t>(offsetof(Guid_t, ____f_6)); }
	inline uint8_t get__f_6() const { return ____f_6; }
	inline uint8_t* get_address_of__f_6() { return &____f_6; }
	inline void set__f_6(uint8_t value)
	{
		____f_6 = value;
	}

	inline static int32_t get_offset_of__g_7() { return static_cast<int32_t>(offsetof(Guid_t, ____g_7)); }
	inline uint8_t get__g_7() const { return ____g_7; }
	inline uint8_t* get_address_of__g_7() { return &____g_7; }
	inline void set__g_7(uint8_t value)
	{
		____g_7 = value;
	}

	inline static int32_t get_offset_of__h_8() { return static_cast<int32_t>(offsetof(Guid_t, ____h_8)); }
	inline uint8_t get__h_8() const { return ____h_8; }
	inline uint8_t* get_address_of__h_8() { return &____h_8; }
	inline void set__h_8(uint8_t value)
	{
		____h_8 = value;
	}

	inline static int32_t get_offset_of__i_9() { return static_cast<int32_t>(offsetof(Guid_t, ____i_9)); }
	inline uint8_t get__i_9() const { return ____i_9; }
	inline uint8_t* get_address_of__i_9() { return &____i_9; }
	inline void set__i_9(uint8_t value)
	{
		____i_9 = value;
	}

	inline static int32_t get_offset_of__j_10() { return static_cast<int32_t>(offsetof(Guid_t, ____j_10)); }
	inline uint8_t get__j_10() const { return ____j_10; }
	inline uint8_t* get_address_of__j_10() { return &____j_10; }
	inline void set__j_10(uint8_t value)
	{
		____j_10 = value;
	}

	inline static int32_t get_offset_of__k_11() { return static_cast<int32_t>(offsetof(Guid_t, ____k_11)); }
	inline uint8_t get__k_11() const { return ____k_11; }
	inline uint8_t* get_address_of__k_11() { return &____k_11; }
	inline void set__k_11(uint8_t value)
	{
		____k_11 = value;
	}
};

struct Guid_t_StaticFields
{
public:
	// System.Guid System.Guid::Empty
	Guid_t  ___Empty_0;
	// System.Object System.Guid::_rngAccess
	RuntimeObject * ____rngAccess_12;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_rng
	RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * ____rng_13;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_fastRng
	RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * ____fastRng_14;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ___Empty_0)); }
	inline Guid_t  get_Empty_0() const { return ___Empty_0; }
	inline Guid_t * get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(Guid_t  value)
	{
		___Empty_0 = value;
	}

	inline static int32_t get_offset_of__rngAccess_12() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rngAccess_12)); }
	inline RuntimeObject * get__rngAccess_12() const { return ____rngAccess_12; }
	inline RuntimeObject ** get_address_of__rngAccess_12() { return &____rngAccess_12; }
	inline void set__rngAccess_12(RuntimeObject * value)
	{
		____rngAccess_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rngAccess_12), (void*)value);
	}

	inline static int32_t get_offset_of__rng_13() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rng_13)); }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * get__rng_13() const { return ____rng_13; }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 ** get_address_of__rng_13() { return &____rng_13; }
	inline void set__rng_13(RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * value)
	{
		____rng_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rng_13), (void*)value);
	}

	inline static int32_t get_offset_of__fastRng_14() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____fastRng_14)); }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * get__fastRng_14() const { return ____fastRng_14; }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 ** get_address_of__fastRng_14() { return &____fastRng_14; }
	inline void set__fastRng_14(RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * value)
	{
		____fastRng_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____fastRng_14), (void*)value);
	}
};


// System.Int16
struct Int16_tD0F031114106263BB459DA1F099FF9F42691295A 
{
public:
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int16_tD0F031114106263BB459DA1F099FF9F42691295A, ___m_value_0)); }
	inline int16_t get_m_value_0() const { return ___m_value_0; }
	inline int16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int16_t value)
	{
		___m_value_0 = value;
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


// System.Int64
struct Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// OSEmailSubscriptionStateChanges
struct OSEmailSubscriptionStateChanges_tCEE883A6FE7F1AAAC113C9D9E6135CEDAE1ABC6A  : public OSStateChanges_1_tF6D22E1814993B2CC13952337B9CDD4434573527
{
public:

public:
};


// OSPermissionStateChanges
struct OSPermissionStateChanges_t1B014D5332A17B2F12B7B9B981B61A08AB8FDCF8  : public OSStateChanges_1_t888AE05C74699C24C20A082A169751FE9EC83345
{
public:

public:
};


// OSSubscriptionStateChanges
struct OSSubscriptionStateChanges_t80801EC51BCF40EDC399FB2C2658111539658213  : public OSStateChanges_1_tDE1C321C28B88403CFDCC441FB2913F2BC5F45A3
{
public:

public:
};


// System.SByte
struct SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B 
{
public:
	// System.SByte System.SByte::m_value
	int8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B, ___m_value_0)); }
	inline int8_t get_m_value_0() const { return ___m_value_0; }
	inline int8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int8_t value)
	{
		___m_value_0 = value;
	}
};


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.IO.TextReader
struct TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:

public:
};

struct TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F_StaticFields
{
public:
	// System.Func`2<System.Object,System.String> System.IO.TextReader::_ReadLineDelegate
	Func_2_t060A650AB95DEF14D4F579FA5999ACEFEEE0FD82 * ____ReadLineDelegate_1;
	// System.Func`2<System.Object,System.Int32> System.IO.TextReader::_ReadDelegate
	Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * ____ReadDelegate_2;
	// System.IO.TextReader System.IO.TextReader::Null
	TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * ___Null_3;

public:
	inline static int32_t get_offset_of__ReadLineDelegate_1() { return static_cast<int32_t>(offsetof(TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F_StaticFields, ____ReadLineDelegate_1)); }
	inline Func_2_t060A650AB95DEF14D4F579FA5999ACEFEEE0FD82 * get__ReadLineDelegate_1() const { return ____ReadLineDelegate_1; }
	inline Func_2_t060A650AB95DEF14D4F579FA5999ACEFEEE0FD82 ** get_address_of__ReadLineDelegate_1() { return &____ReadLineDelegate_1; }
	inline void set__ReadLineDelegate_1(Func_2_t060A650AB95DEF14D4F579FA5999ACEFEEE0FD82 * value)
	{
		____ReadLineDelegate_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____ReadLineDelegate_1), (void*)value);
	}

	inline static int32_t get_offset_of__ReadDelegate_2() { return static_cast<int32_t>(offsetof(TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F_StaticFields, ____ReadDelegate_2)); }
	inline Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * get__ReadDelegate_2() const { return ____ReadDelegate_2; }
	inline Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C ** get_address_of__ReadDelegate_2() { return &____ReadDelegate_2; }
	inline void set__ReadDelegate_2(Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * value)
	{
		____ReadDelegate_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____ReadDelegate_2), (void*)value);
	}

	inline static int32_t get_offset_of_Null_3() { return static_cast<int32_t>(offsetof(TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F_StaticFields, ___Null_3)); }
	inline TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * get_Null_3() const { return ___Null_3; }
	inline TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F ** get_address_of_Null_3() { return &___Null_3; }
	inline void set_Null_3(TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * value)
	{
		___Null_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_3), (void*)value);
	}
};


// System.UInt16
struct UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD 
{
public:
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD, ___m_value_0)); }
	inline uint16_t get_m_value_0() const { return ___m_value_0; }
	inline uint16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint16_t value)
	{
		___m_value_0 = value;
	}
};


// System.UInt32
struct UInt32_tE60352A06233E4E69DD198BCC67142159F686B15 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};


// System.UInt64
struct UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
	{
		___m_value_0 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// System.Reflection.BindingFlags
struct BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Delegate
struct Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// System.Globalization.NumberStyles
struct NumberStyles_t379EFBF2535E1C950DEC8042704BB663BF636594 
{
public:
	// System.Int32 System.Globalization.NumberStyles::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NumberStyles_t379EFBF2535E1C950DEC8042704BB663BF636594, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// OSNotificationPermission
struct OSNotificationPermission_tE4B573F7930F4BDB945AB6AF901790CB2D66A160 
{
public:
	// System.Int32 OSNotificationPermission::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(OSNotificationPermission_tE4B573F7930F4BDB945AB6AF901790CB2D66A160, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.RuntimePlatform
struct RuntimePlatform_tB8798C800FD9810C0FE2B7D2F2A0A3979D239065 
{
public:
	// System.Int32 UnityEngine.RuntimePlatform::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RuntimePlatform_tB8798C800FD9810C0FE2B7D2F2A0A3979D239065, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.RuntimeTypeHandle
struct RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// System.IO.StringReader
struct StringReader_t74E352C280EAC22C878867444978741F19E1F895  : public TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F
{
public:
	// System.String System.IO.StringReader::_s
	String_t* ____s_4;
	// System.Int32 System.IO.StringReader::_pos
	int32_t ____pos_5;
	// System.Int32 System.IO.StringReader::_length
	int32_t ____length_6;

public:
	inline static int32_t get_offset_of__s_4() { return static_cast<int32_t>(offsetof(StringReader_t74E352C280EAC22C878867444978741F19E1F895, ____s_4)); }
	inline String_t* get__s_4() const { return ____s_4; }
	inline String_t** get_address_of__s_4() { return &____s_4; }
	inline void set__s_4(String_t* value)
	{
		____s_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____s_4), (void*)value);
	}

	inline static int32_t get_offset_of__pos_5() { return static_cast<int32_t>(offsetof(StringReader_t74E352C280EAC22C878867444978741F19E1F895, ____pos_5)); }
	inline int32_t get__pos_5() const { return ____pos_5; }
	inline int32_t* get_address_of__pos_5() { return &____pos_5; }
	inline void set__pos_5(int32_t value)
	{
		____pos_5 = value;
	}

	inline static int32_t get_offset_of__length_6() { return static_cast<int32_t>(offsetof(StringReader_t74E352C280EAC22C878867444978741F19E1F895, ____length_6)); }
	inline int32_t get__length_6() const { return ____length_6; }
	inline int32_t* get_address_of__length_6() { return &____length_6; }
	inline void set__length_6(int32_t value)
	{
		____length_6 = value;
	}
};


// OSNotification/DisplayType
struct DisplayType_tB2D8D580678438FE08641CA8F9DCD6525CFAF8A0 
{
public:
	// System.Int32 OSNotification/DisplayType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DisplayType_tB2D8D580678438FE08641CA8F9DCD6525CFAF8A0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// OSNotificationAction/ActionType
struct ActionType_tEED3AA062103E0D118F7DC206C844521CAC33235 
{
public:
	// System.Int32 OSNotificationAction/ActionType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ActionType_tEED3AA062103E0D118F7DC206C844521CAC33235, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// OSOutcomeEvent/OSSession
struct OSSession_t21B63810B25F6DA9AE0A9F890C8FD764E993D9D5 
{
public:
	// System.Int32 OSOutcomeEvent/OSSession::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(OSSession_t21B63810B25F6DA9AE0A9F890C8FD764E993D9D5, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// OneSignal/LOG_LEVEL
struct LOG_LEVEL_tE4E6151757ED16FC2335C7692F0A53F4B1A6F912 
{
public:
	// System.Int32 OneSignal/LOG_LEVEL::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LOG_LEVEL_tE4E6151757ED16FC2335C7692F0A53F4B1A6F912, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// OneSignal/OSInFocusDisplayOption
struct OSInFocusDisplayOption_tF8EF763C6B95D679F952B4DFB275FE136CE68C0C 
{
public:
	// System.Int32 OneSignal/OSInFocusDisplayOption::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(OSInFocusDisplayOption_tF8EF763C6B95D679F952B4DFB275FE136CE68C0C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Json/Parser/TOKEN
struct TOKEN_tD5F980F9943D747A18E3302F381C6F8552233E1D 
{
public:
	// System.Int32 Json/Parser/TOKEN::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TOKEN_tD5F980F9943D747A18E3302F381C6F8552233E1D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// OSNotification
struct OSNotification_t554DC6C0C4C4F2E6602C4C5E096252126B0EAD72  : public RuntimeObject
{
public:
	// System.Boolean OSNotification::isAppInFocus
	bool ___isAppInFocus_0;
	// System.Boolean OSNotification::shown
	bool ___shown_1;
	// System.Boolean OSNotification::silentNotification
	bool ___silentNotification_2;
	// System.Int32 OSNotification::androidNotificationId
	int32_t ___androidNotificationId_3;
	// OSNotification/DisplayType OSNotification::displayType
	int32_t ___displayType_4;
	// OSNotificationPayload OSNotification::payload
	OSNotificationPayload_tC710F220B7749FA10F167E672736061B3B774BD2 * ___payload_5;

public:
	inline static int32_t get_offset_of_isAppInFocus_0() { return static_cast<int32_t>(offsetof(OSNotification_t554DC6C0C4C4F2E6602C4C5E096252126B0EAD72, ___isAppInFocus_0)); }
	inline bool get_isAppInFocus_0() const { return ___isAppInFocus_0; }
	inline bool* get_address_of_isAppInFocus_0() { return &___isAppInFocus_0; }
	inline void set_isAppInFocus_0(bool value)
	{
		___isAppInFocus_0 = value;
	}

	inline static int32_t get_offset_of_shown_1() { return static_cast<int32_t>(offsetof(OSNotification_t554DC6C0C4C4F2E6602C4C5E096252126B0EAD72, ___shown_1)); }
	inline bool get_shown_1() const { return ___shown_1; }
	inline bool* get_address_of_shown_1() { return &___shown_1; }
	inline void set_shown_1(bool value)
	{
		___shown_1 = value;
	}

	inline static int32_t get_offset_of_silentNotification_2() { return static_cast<int32_t>(offsetof(OSNotification_t554DC6C0C4C4F2E6602C4C5E096252126B0EAD72, ___silentNotification_2)); }
	inline bool get_silentNotification_2() const { return ___silentNotification_2; }
	inline bool* get_address_of_silentNotification_2() { return &___silentNotification_2; }
	inline void set_silentNotification_2(bool value)
	{
		___silentNotification_2 = value;
	}

	inline static int32_t get_offset_of_androidNotificationId_3() { return static_cast<int32_t>(offsetof(OSNotification_t554DC6C0C4C4F2E6602C4C5E096252126B0EAD72, ___androidNotificationId_3)); }
	inline int32_t get_androidNotificationId_3() const { return ___androidNotificationId_3; }
	inline int32_t* get_address_of_androidNotificationId_3() { return &___androidNotificationId_3; }
	inline void set_androidNotificationId_3(int32_t value)
	{
		___androidNotificationId_3 = value;
	}

	inline static int32_t get_offset_of_displayType_4() { return static_cast<int32_t>(offsetof(OSNotification_t554DC6C0C4C4F2E6602C4C5E096252126B0EAD72, ___displayType_4)); }
	inline int32_t get_displayType_4() const { return ___displayType_4; }
	inline int32_t* get_address_of_displayType_4() { return &___displayType_4; }
	inline void set_displayType_4(int32_t value)
	{
		___displayType_4 = value;
	}

	inline static int32_t get_offset_of_payload_5() { return static_cast<int32_t>(offsetof(OSNotification_t554DC6C0C4C4F2E6602C4C5E096252126B0EAD72, ___payload_5)); }
	inline OSNotificationPayload_tC710F220B7749FA10F167E672736061B3B774BD2 * get_payload_5() const { return ___payload_5; }
	inline OSNotificationPayload_tC710F220B7749FA10F167E672736061B3B774BD2 ** get_address_of_payload_5() { return &___payload_5; }
	inline void set_payload_5(OSNotificationPayload_tC710F220B7749FA10F167E672736061B3B774BD2 * value)
	{
		___payload_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___payload_5), (void*)value);
	}
};


// OSNotificationAction
struct OSNotificationAction_t54C0BF5FEB98EBD72454642C9CAAD66B464C99AA  : public RuntimeObject
{
public:
	// System.String OSNotificationAction::actionID
	String_t* ___actionID_0;
	// OSNotificationAction/ActionType OSNotificationAction::type
	int32_t ___type_1;

public:
	inline static int32_t get_offset_of_actionID_0() { return static_cast<int32_t>(offsetof(OSNotificationAction_t54C0BF5FEB98EBD72454642C9CAAD66B464C99AA, ___actionID_0)); }
	inline String_t* get_actionID_0() const { return ___actionID_0; }
	inline String_t** get_address_of_actionID_0() { return &___actionID_0; }
	inline void set_actionID_0(String_t* value)
	{
		___actionID_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___actionID_0), (void*)value);
	}

	inline static int32_t get_offset_of_type_1() { return static_cast<int32_t>(offsetof(OSNotificationAction_t54C0BF5FEB98EBD72454642C9CAAD66B464C99AA, ___type_1)); }
	inline int32_t get_type_1() const { return ___type_1; }
	inline int32_t* get_address_of_type_1() { return &___type_1; }
	inline void set_type_1(int32_t value)
	{
		___type_1 = value;
	}
};


// OSOutcomeEvent
struct OSOutcomeEvent_tA0383B5CF8F2466567F3E15AA97710870875535D  : public RuntimeObject
{
public:
	// OSOutcomeEvent/OSSession OSOutcomeEvent::session
	int32_t ___session_0;
	// System.Collections.Generic.List`1<System.String> OSOutcomeEvent::notificationIds
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___notificationIds_1;
	// System.String OSOutcomeEvent::name
	String_t* ___name_2;
	// System.Int64 OSOutcomeEvent::timestamp
	int64_t ___timestamp_3;
	// System.Double OSOutcomeEvent::weight
	double ___weight_4;

public:
	inline static int32_t get_offset_of_session_0() { return static_cast<int32_t>(offsetof(OSOutcomeEvent_tA0383B5CF8F2466567F3E15AA97710870875535D, ___session_0)); }
	inline int32_t get_session_0() const { return ___session_0; }
	inline int32_t* get_address_of_session_0() { return &___session_0; }
	inline void set_session_0(int32_t value)
	{
		___session_0 = value;
	}

	inline static int32_t get_offset_of_notificationIds_1() { return static_cast<int32_t>(offsetof(OSOutcomeEvent_tA0383B5CF8F2466567F3E15AA97710870875535D, ___notificationIds_1)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_notificationIds_1() const { return ___notificationIds_1; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_notificationIds_1() { return &___notificationIds_1; }
	inline void set_notificationIds_1(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___notificationIds_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___notificationIds_1), (void*)value);
	}

	inline static int32_t get_offset_of_name_2() { return static_cast<int32_t>(offsetof(OSOutcomeEvent_tA0383B5CF8F2466567F3E15AA97710870875535D, ___name_2)); }
	inline String_t* get_name_2() const { return ___name_2; }
	inline String_t** get_address_of_name_2() { return &___name_2; }
	inline void set_name_2(String_t* value)
	{
		___name_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_2), (void*)value);
	}

	inline static int32_t get_offset_of_timestamp_3() { return static_cast<int32_t>(offsetof(OSOutcomeEvent_tA0383B5CF8F2466567F3E15AA97710870875535D, ___timestamp_3)); }
	inline int64_t get_timestamp_3() const { return ___timestamp_3; }
	inline int64_t* get_address_of_timestamp_3() { return &___timestamp_3; }
	inline void set_timestamp_3(int64_t value)
	{
		___timestamp_3 = value;
	}

	inline static int32_t get_offset_of_weight_4() { return static_cast<int32_t>(offsetof(OSOutcomeEvent_tA0383B5CF8F2466567F3E15AA97710870875535D, ___weight_4)); }
	inline double get_weight_4() const { return ___weight_4; }
	inline double* get_address_of_weight_4() { return &___weight_4; }
	inline void set_weight_4(double value)
	{
		___weight_4 = value;
	}
};


// OSPermissionState
struct OSPermissionState_tCBAFAF68101221797E344D4C443CBCD374C4B754  : public RuntimeObject
{
public:
	// System.Boolean OSPermissionState::hasPrompted
	bool ___hasPrompted_0;
	// OSNotificationPermission OSPermissionState::status
	int32_t ___status_1;

public:
	inline static int32_t get_offset_of_hasPrompted_0() { return static_cast<int32_t>(offsetof(OSPermissionState_tCBAFAF68101221797E344D4C443CBCD374C4B754, ___hasPrompted_0)); }
	inline bool get_hasPrompted_0() const { return ___hasPrompted_0; }
	inline bool* get_address_of_hasPrompted_0() { return &___hasPrompted_0; }
	inline void set_hasPrompted_0(bool value)
	{
		___hasPrompted_0 = value;
	}

	inline static int32_t get_offset_of_status_1() { return static_cast<int32_t>(offsetof(OSPermissionState_tCBAFAF68101221797E344D4C443CBCD374C4B754, ___status_1)); }
	inline int32_t get_status_1() const { return ___status_1; }
	inline int32_t* get_address_of_status_1() { return &___status_1; }
	inline void set_status_1(int32_t value)
	{
		___status_1 = value;
	}
};


// UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_pinvoke : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_com : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
};

// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// System.Type
struct Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_paramName_17), (void*)value);
	}
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// System.InvalidOperationException
struct InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// OneSignalSettings
struct OneSignalSettings_t6B52AD1BB70C27A333C9FE47B84C9C93FE594CCF  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// System.String OneSignalSettings::ApplicationId
	String_t* ___ApplicationId_5;

public:
	inline static int32_t get_offset_of_ApplicationId_5() { return static_cast<int32_t>(offsetof(OneSignalSettings_t6B52AD1BB70C27A333C9FE47B84C9C93FE594CCF, ___ApplicationId_5)); }
	inline String_t* get_ApplicationId_5() const { return ___ApplicationId_5; }
	inline String_t** get_address_of_ApplicationId_5() { return &___ApplicationId_5; }
	inline void set_ApplicationId_5(String_t* value)
	{
		___ApplicationId_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ApplicationId_5), (void*)value);
	}
};

struct OneSignalSettings_t6B52AD1BB70C27A333C9FE47B84C9C93FE594CCF_StaticFields
{
public:
	// OneSignalSettings OneSignalSettings::s_Instance
	OneSignalSettings_t6B52AD1BB70C27A333C9FE47B84C9C93FE594CCF * ___s_Instance_4;
	// System.String OneSignalSettings::SettingsLocation
	String_t* ___SettingsLocation_6;

public:
	inline static int32_t get_offset_of_s_Instance_4() { return static_cast<int32_t>(offsetof(OneSignalSettings_t6B52AD1BB70C27A333C9FE47B84C9C93FE594CCF_StaticFields, ___s_Instance_4)); }
	inline OneSignalSettings_t6B52AD1BB70C27A333C9FE47B84C9C93FE594CCF * get_s_Instance_4() const { return ___s_Instance_4; }
	inline OneSignalSettings_t6B52AD1BB70C27A333C9FE47B84C9C93FE594CCF ** get_address_of_s_Instance_4() { return &___s_Instance_4; }
	inline void set_s_Instance_4(OneSignalSettings_t6B52AD1BB70C27A333C9FE47B84C9C93FE594CCF * value)
	{
		___s_Instance_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Instance_4), (void*)value);
	}

	inline static int32_t get_offset_of_SettingsLocation_6() { return static_cast<int32_t>(offsetof(OneSignalSettings_t6B52AD1BB70C27A333C9FE47B84C9C93FE594CCF_StaticFields, ___SettingsLocation_6)); }
	inline String_t* get_SettingsLocation_6() const { return ___SettingsLocation_6; }
	inline String_t** get_address_of_SettingsLocation_6() { return &___SettingsLocation_6; }
	inline void set_SettingsLocation_6(String_t* value)
	{
		___SettingsLocation_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SettingsLocation_6), (void*)value);
	}
};


// OneSignal/EmailSubscriptionObservable
struct EmailSubscriptionObservable_t0BE190ED78D890F32B3CD78351CB03CDE6743C4A  : public MulticastDelegate_t
{
public:

public:
};


// OneSignal/IdsAvailableCallback
struct IdsAvailableCallback_t4542530853E11729402E55FCDDD09AD6FBC8B377  : public MulticastDelegate_t
{
public:

public:
};


// OneSignal/InAppMessageClicked
struct InAppMessageClicked_t28BE72075727CEF08C18EC3542264EE5099C46AA  : public MulticastDelegate_t
{
public:

public:
};


// OneSignal/NotificationOpened
struct NotificationOpened_t1EAAB82F6D9989F1EC2B2A408858A3DDE351BBA0  : public MulticastDelegate_t
{
public:

public:
};


// OneSignal/NotificationReceived
struct NotificationReceived_tAD87EB0BF05ABA12EF33C2C0C3300278BA0CB814  : public MulticastDelegate_t
{
public:

public:
};


// OneSignal/OnExternalUserIdUpdateCompletion
struct OnExternalUserIdUpdateCompletion_tE7AD9883916B83BCCE7A9F6C4C77E818FA079EF3  : public MulticastDelegate_t
{
public:

public:
};


// OneSignal/OnExternalUserIdUpdateCompletionFailure
struct OnExternalUserIdUpdateCompletionFailure_t3C667A1A4AC32CE33E8FA58F11890E28729BB8F1  : public MulticastDelegate_t
{
public:

public:
};


// OneSignal/OnLogoutEmailFailure
struct OnLogoutEmailFailure_tA4226BD4128D5C768C079A27BC0ABEA359DC848D  : public MulticastDelegate_t
{
public:

public:
};


// OneSignal/OnLogoutEmailSuccess
struct OnLogoutEmailSuccess_t87D6896F1510F5624EA317AA83BCEEBE79DC60AF  : public MulticastDelegate_t
{
public:

public:
};


// OneSignal/OnPostNotificationFailure
struct OnPostNotificationFailure_t838C4BF4E9FE424E9B8A948B686BC4B56EA0EE85  : public MulticastDelegate_t
{
public:

public:
};


// OneSignal/OnPostNotificationSuccess
struct OnPostNotificationSuccess_tDCA1A38F1FC336944A4489421DD2C28BF9F6DAFA  : public MulticastDelegate_t
{
public:

public:
};


// OneSignal/OnSendOutcomeSuccess
struct OnSendOutcomeSuccess_t33CAC591369FF5B710CB915E5F2EC54F7BD19D0C  : public MulticastDelegate_t
{
public:

public:
};


// OneSignal/OnSetEmailFailure
struct OnSetEmailFailure_tC1B0B2D7E54644EF4414EFE4A1DC6A9371409B5D  : public MulticastDelegate_t
{
public:

public:
};


// OneSignal/OnSetEmailSuccess
struct OnSetEmailSuccess_t5D828241C45219E51AC4B47C581F66419C7D3BDB  : public MulticastDelegate_t
{
public:

public:
};


// OneSignal/PermissionObservable
struct PermissionObservable_tAD0961762662CFBE5C5C21B4F7B44816689D232D  : public MulticastDelegate_t
{
public:

public:
};


// OneSignal/PromptForPushNotificationsUserResponse
struct PromptForPushNotificationsUserResponse_t5508C614F3AB278D72FACCAD119F0F65792AB501  : public MulticastDelegate_t
{
public:

public:
};


// OneSignal/SubscriptionObservable
struct SubscriptionObservable_tAC9D68D12698867A849F8DBEDF5E81CEF8353BBB  : public MulticastDelegate_t
{
public:

public:
};


// OneSignal/TagsReceived
struct TagsReceived_t7D5926BFB0FAC298A876D14D71495DE029E4A791  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// OneSignal
struct OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};

struct OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Delegate> OneSignal::delegates
	Dictionary_2_t521306497EEE741202CFF9F69FB533CCAD8C8ACD * ___delegates_4;
	// OneSignal/PromptForPushNotificationsUserResponse OneSignal::notificationUserResponseDelegate
	PromptForPushNotificationsUserResponse_t5508C614F3AB278D72FACCAD119F0F65792AB501 * ___notificationUserResponseDelegate_5;
	// OneSignal/PermissionObservable OneSignal::internalPermissionObserver
	PermissionObservable_tAD0961762662CFBE5C5C21B4F7B44816689D232D * ___internalPermissionObserver_6;
	// System.Boolean OneSignal::addedPermissionObserver
	bool ___addedPermissionObserver_7;
	// OneSignal/SubscriptionObservable OneSignal::internalSubscriptionObserver
	SubscriptionObservable_tAC9D68D12698867A849F8DBEDF5E81CEF8353BBB * ___internalSubscriptionObserver_8;
	// System.Boolean OneSignal::addedSubscriptionObserver
	bool ___addedSubscriptionObserver_9;
	// OneSignal/EmailSubscriptionObservable OneSignal::internalEmailSubscriptionObserver
	EmailSubscriptionObservable_t0BE190ED78D890F32B3CD78351CB03CDE6743C4A * ___internalEmailSubscriptionObserver_10;
	// System.Boolean OneSignal::addedEmailSubscriptionObserver
	bool ___addedEmailSubscriptionObserver_11;
	// OneSignal/UnityBuilder OneSignal::builder
	UnityBuilder_tDBFC88D88033BADCF56F27E95359EF77CF9ADFED * ___builder_14;
	// IOneSignalPlatform OneSignal::oneSignalPlatform
	RuntimeObject* ___oneSignalPlatform_16;
	// OneSignal/LOG_LEVEL OneSignal::logLevel
	int32_t ___logLevel_17;
	// OneSignal/LOG_LEVEL OneSignal::visualLogLevel
	int32_t ___visualLogLevel_18;
	// System.Boolean OneSignal::requiresUserConsent
	bool ___requiresUserConsent_19;
	// OneSignal/OSInFocusDisplayOption OneSignal::_inFocusDisplayType
	int32_t ____inFocusDisplayType_20;

public:
	inline static int32_t get_offset_of_delegates_4() { return static_cast<int32_t>(offsetof(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_StaticFields, ___delegates_4)); }
	inline Dictionary_2_t521306497EEE741202CFF9F69FB533CCAD8C8ACD * get_delegates_4() const { return ___delegates_4; }
	inline Dictionary_2_t521306497EEE741202CFF9F69FB533CCAD8C8ACD ** get_address_of_delegates_4() { return &___delegates_4; }
	inline void set_delegates_4(Dictionary_2_t521306497EEE741202CFF9F69FB533CCAD8C8ACD * value)
	{
		___delegates_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_4), (void*)value);
	}

	inline static int32_t get_offset_of_notificationUserResponseDelegate_5() { return static_cast<int32_t>(offsetof(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_StaticFields, ___notificationUserResponseDelegate_5)); }
	inline PromptForPushNotificationsUserResponse_t5508C614F3AB278D72FACCAD119F0F65792AB501 * get_notificationUserResponseDelegate_5() const { return ___notificationUserResponseDelegate_5; }
	inline PromptForPushNotificationsUserResponse_t5508C614F3AB278D72FACCAD119F0F65792AB501 ** get_address_of_notificationUserResponseDelegate_5() { return &___notificationUserResponseDelegate_5; }
	inline void set_notificationUserResponseDelegate_5(PromptForPushNotificationsUserResponse_t5508C614F3AB278D72FACCAD119F0F65792AB501 * value)
	{
		___notificationUserResponseDelegate_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___notificationUserResponseDelegate_5), (void*)value);
	}

	inline static int32_t get_offset_of_internalPermissionObserver_6() { return static_cast<int32_t>(offsetof(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_StaticFields, ___internalPermissionObserver_6)); }
	inline PermissionObservable_tAD0961762662CFBE5C5C21B4F7B44816689D232D * get_internalPermissionObserver_6() const { return ___internalPermissionObserver_6; }
	inline PermissionObservable_tAD0961762662CFBE5C5C21B4F7B44816689D232D ** get_address_of_internalPermissionObserver_6() { return &___internalPermissionObserver_6; }
	inline void set_internalPermissionObserver_6(PermissionObservable_tAD0961762662CFBE5C5C21B4F7B44816689D232D * value)
	{
		___internalPermissionObserver_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___internalPermissionObserver_6), (void*)value);
	}

	inline static int32_t get_offset_of_addedPermissionObserver_7() { return static_cast<int32_t>(offsetof(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_StaticFields, ___addedPermissionObserver_7)); }
	inline bool get_addedPermissionObserver_7() const { return ___addedPermissionObserver_7; }
	inline bool* get_address_of_addedPermissionObserver_7() { return &___addedPermissionObserver_7; }
	inline void set_addedPermissionObserver_7(bool value)
	{
		___addedPermissionObserver_7 = value;
	}

	inline static int32_t get_offset_of_internalSubscriptionObserver_8() { return static_cast<int32_t>(offsetof(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_StaticFields, ___internalSubscriptionObserver_8)); }
	inline SubscriptionObservable_tAC9D68D12698867A849F8DBEDF5E81CEF8353BBB * get_internalSubscriptionObserver_8() const { return ___internalSubscriptionObserver_8; }
	inline SubscriptionObservable_tAC9D68D12698867A849F8DBEDF5E81CEF8353BBB ** get_address_of_internalSubscriptionObserver_8() { return &___internalSubscriptionObserver_8; }
	inline void set_internalSubscriptionObserver_8(SubscriptionObservable_tAC9D68D12698867A849F8DBEDF5E81CEF8353BBB * value)
	{
		___internalSubscriptionObserver_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___internalSubscriptionObserver_8), (void*)value);
	}

	inline static int32_t get_offset_of_addedSubscriptionObserver_9() { return static_cast<int32_t>(offsetof(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_StaticFields, ___addedSubscriptionObserver_9)); }
	inline bool get_addedSubscriptionObserver_9() const { return ___addedSubscriptionObserver_9; }
	inline bool* get_address_of_addedSubscriptionObserver_9() { return &___addedSubscriptionObserver_9; }
	inline void set_addedSubscriptionObserver_9(bool value)
	{
		___addedSubscriptionObserver_9 = value;
	}

	inline static int32_t get_offset_of_internalEmailSubscriptionObserver_10() { return static_cast<int32_t>(offsetof(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_StaticFields, ___internalEmailSubscriptionObserver_10)); }
	inline EmailSubscriptionObservable_t0BE190ED78D890F32B3CD78351CB03CDE6743C4A * get_internalEmailSubscriptionObserver_10() const { return ___internalEmailSubscriptionObserver_10; }
	inline EmailSubscriptionObservable_t0BE190ED78D890F32B3CD78351CB03CDE6743C4A ** get_address_of_internalEmailSubscriptionObserver_10() { return &___internalEmailSubscriptionObserver_10; }
	inline void set_internalEmailSubscriptionObserver_10(EmailSubscriptionObservable_t0BE190ED78D890F32B3CD78351CB03CDE6743C4A * value)
	{
		___internalEmailSubscriptionObserver_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___internalEmailSubscriptionObserver_10), (void*)value);
	}

	inline static int32_t get_offset_of_addedEmailSubscriptionObserver_11() { return static_cast<int32_t>(offsetof(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_StaticFields, ___addedEmailSubscriptionObserver_11)); }
	inline bool get_addedEmailSubscriptionObserver_11() const { return ___addedEmailSubscriptionObserver_11; }
	inline bool* get_address_of_addedEmailSubscriptionObserver_11() { return &___addedEmailSubscriptionObserver_11; }
	inline void set_addedEmailSubscriptionObserver_11(bool value)
	{
		___addedEmailSubscriptionObserver_11 = value;
	}

	inline static int32_t get_offset_of_builder_14() { return static_cast<int32_t>(offsetof(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_StaticFields, ___builder_14)); }
	inline UnityBuilder_tDBFC88D88033BADCF56F27E95359EF77CF9ADFED * get_builder_14() const { return ___builder_14; }
	inline UnityBuilder_tDBFC88D88033BADCF56F27E95359EF77CF9ADFED ** get_address_of_builder_14() { return &___builder_14; }
	inline void set_builder_14(UnityBuilder_tDBFC88D88033BADCF56F27E95359EF77CF9ADFED * value)
	{
		___builder_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___builder_14), (void*)value);
	}

	inline static int32_t get_offset_of_oneSignalPlatform_16() { return static_cast<int32_t>(offsetof(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_StaticFields, ___oneSignalPlatform_16)); }
	inline RuntimeObject* get_oneSignalPlatform_16() const { return ___oneSignalPlatform_16; }
	inline RuntimeObject** get_address_of_oneSignalPlatform_16() { return &___oneSignalPlatform_16; }
	inline void set_oneSignalPlatform_16(RuntimeObject* value)
	{
		___oneSignalPlatform_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___oneSignalPlatform_16), (void*)value);
	}

	inline static int32_t get_offset_of_logLevel_17() { return static_cast<int32_t>(offsetof(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_StaticFields, ___logLevel_17)); }
	inline int32_t get_logLevel_17() const { return ___logLevel_17; }
	inline int32_t* get_address_of_logLevel_17() { return &___logLevel_17; }
	inline void set_logLevel_17(int32_t value)
	{
		___logLevel_17 = value;
	}

	inline static int32_t get_offset_of_visualLogLevel_18() { return static_cast<int32_t>(offsetof(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_StaticFields, ___visualLogLevel_18)); }
	inline int32_t get_visualLogLevel_18() const { return ___visualLogLevel_18; }
	inline int32_t* get_address_of_visualLogLevel_18() { return &___visualLogLevel_18; }
	inline void set_visualLogLevel_18(int32_t value)
	{
		___visualLogLevel_18 = value;
	}

	inline static int32_t get_offset_of_requiresUserConsent_19() { return static_cast<int32_t>(offsetof(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_StaticFields, ___requiresUserConsent_19)); }
	inline bool get_requiresUserConsent_19() const { return ___requiresUserConsent_19; }
	inline bool* get_address_of_requiresUserConsent_19() { return &___requiresUserConsent_19; }
	inline void set_requiresUserConsent_19(bool value)
	{
		___requiresUserConsent_19 = value;
	}

	inline static int32_t get_offset_of__inFocusDisplayType_20() { return static_cast<int32_t>(offsetof(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_StaticFields, ____inFocusDisplayType_20)); }
	inline int32_t get__inFocusDisplayType_20() const { return ____inFocusDisplayType_20; }
	inline int32_t* get_address_of__inFocusDisplayType_20() { return &____inFocusDisplayType_20; }
	inline void set__inFocusDisplayType_20(int32_t value)
	{
		____inFocusDisplayType_20 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

public:
	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};


// System.Void OSStateChanges`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OSStateChanges_1__ctor_m988AE56D7492634DD8F19D6A8E4CF43901AF4A2C_gshared (OSStateChanges_1_tD8FC28464C8F461C5668D97DE7A3E0BF9CD0AE7C * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_mCABABA5D0FA017D2D54BE4FA6256C51518274116_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Dictionary_2_get_Item_mF3BA34126DA8AFA32D1E5285D842C5955C698F0D_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mF15250BF947CA27BE9A23C08BAC6DB6F180B0EDD_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  List_1_GetEnumerator_m6339FC2D3D1CE4FA13CF21C7F9FC58CA4441BF0C_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m4C91D0E84532DF10C654917487D82CB0AB27693B_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_AddComponent_TisRuntimeObject_mF5562A0C81CEDFE1C295F7E16FC6904B5057CB2D_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m1D9CF8FA99A277EE49BC3002FDEAACDCDB29803B_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m45DB5340BC5312349874253DD3239546CB025D21_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// !!0 UnityEngine.Resources::Load<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Resources_Load_TisRuntimeObject_m83108B6D8808A0E83DE12FD220A87000D19AEE00_gshared (String_t* ___path0, const RuntimeMethod* method);
// !!0 UnityEngine.ScriptableObject::CreateInstance<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ScriptableObject_CreateInstance_TisRuntimeObject_mF4140C4B5E93F4E297B82702364BB7455E2E4EBE_gshared (const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mA8F31A10EE1129768E13ACC4DC847B05EAD2A055_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);

// System.Object Json/Parser::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Parser_Parse_m59C9400B0758A82184794D7A39B43372E3AC4C32 (String_t* ___jsonString0, const RuntimeMethod* method);
// System.String Json/Serializer::MakeSerialization(System.Object,System.Boolean,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Serializer_MakeSerialization_m0E3856CB6C844529AA2871FDFB27D472C922E086 (RuntimeObject * ___obj0, bool ___humanReadable1, int32_t ___indentSpaces2, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void OSStateChanges`1<OSEmailSubscriptionState>::.ctor()
inline void OSStateChanges_1__ctor_m3C8DB5A44C17B05FF364451D433764C32A667D7B (OSStateChanges_1_tF6D22E1814993B2CC13952337B9CDD4434573527 * __this, const RuntimeMethod* method)
{
	((  void (*) (OSStateChanges_1_tF6D22E1814993B2CC13952337B9CDD4434573527 *, const RuntimeMethod*))OSStateChanges_1__ctor_m988AE56D7492634DD8F19D6A8E4CF43901AF4A2C_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9 (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::ContainsKey(!0)
inline bool Dictionary_2_ContainsKey_m3C1B28325435E61FFAD431E314EABF915B79A55E (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_mCABABA5D0FA017D2D54BE4FA6256C51518274116_gshared)(__this, ___key0, method);
}
// !1 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Item(!0)
inline RuntimeObject * Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_mF3BA34126DA8AFA32D1E5285D842C5955C698F0D_gshared)(__this, ___key0, method);
}
// OSOutcomeEvent/OSSession OSOutcomeEvent::SessionFromString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OSOutcomeEvent_SessionFromString_m52C6706CD3E9689F188DDD625AB39B35C5B7D713 (OSOutcomeEvent_tA0383B5CF8F2466567F3E15AA97710870875535D * __this, String_t* ___session0, const RuntimeMethod* method);
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B (RuntimeObject * __this, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// System.String System.Convert::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Convert_ToString_m9947BD81AE89C07F57E968D7CDE9C971D620CDC8 (String_t* ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.String>::Add(!0)
inline void List_1_Add_mD8C90346622A7F72A072D319F0E2AE851BB5885A (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, String_t* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, String_t*, const RuntimeMethod*))List_1_Add_mF15250BF947CA27BE9A23C08BAC6DB6F180B0EDD_gshared)(__this, ___item0, method);
}
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
inline Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  List_1_GetEnumerator_m6339FC2D3D1CE4FA13CF21C7F9FC58CA4441BF0C (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, const RuntimeMethod*))List_1_GetEnumerator_m6339FC2D3D1CE4FA13CF21C7F9FC58CA4441BF0C_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
inline RuntimeObject * Enumerator_get_Current_m4C91D0E84532DF10C654917487D82CB0AB27693B_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *, const RuntimeMethod*))Enumerator_get_Current_m4C91D0E84532DF10C654917487D82CB0AB27693B_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
inline bool Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0 (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
inline void Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8 (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// System.String System.Convert::ToString(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Convert_ToString_m27BA6FF6E38081A1A16F6C13D007713B656AA148 (RuntimeObject * ___value0, const RuntimeMethod* method);
// System.Double System.Double::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Double_Parse_mFF5B29ED0585A4847BFE654ABB9E915DFE21B63E (String_t* ___s0, const RuntimeMethod* method);
// System.String System.String::ToLower()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_ToLower_m7875A49FE166D0A68F3F6B6E70C0C056EBEFD31D (String_t* __this, const RuntimeMethod* method);
// System.Boolean System.String::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D (String_t* __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void OSStateChanges`1<OSPermissionState>::.ctor()
inline void OSStateChanges_1__ctor_m2200C199AFE9F03327D9E335914783CC2AB5B625 (OSStateChanges_1_t888AE05C74699C24C20A082A169751FE9EC83345 * __this, const RuntimeMethod* method)
{
	((  void (*) (OSStateChanges_1_t888AE05C74699C24C20A082A169751FE9EC83345 *, const RuntimeMethod*))OSStateChanges_1__ctor_m988AE56D7492634DD8F19D6A8E4CF43901AF4A2C_gshared)(__this, method);
}
// System.Void OSStateChanges`1<OSSubscriptionState>::.ctor()
inline void OSStateChanges_1__ctor_m188DA2BB9E6C45BEDD5F669FE43B35A6512F2CC7 (OSStateChanges_1_tDE1C321C28B88403CFDCC441FB2913F2BC5F45A3 * __this, const RuntimeMethod* method)
{
	((  void (*) (OSStateChanges_1_tDE1C321C28B88403CFDCC441FB2913F2BC5F45A3 *, const RuntimeMethod*))OSStateChanges_1__ctor_m988AE56D7492634DD8F19D6A8E4CF43901AF4A2C_gshared)(__this, method);
}
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55 (Delegate_t * ___a0, Delegate_t * ___b1, const RuntimeMethod* method);
// System.Void OneSignal::addPermissionObserver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneSignal_addPermissionObserver_mF94547770851AD11FD794CC04296CE10AFB8172D (const RuntimeMethod* method);
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4 (Delegate_t * ___source0, Delegate_t * ___value1, const RuntimeMethod* method);
// System.Void OneSignal::addSubscriptionObserver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneSignal_addSubscriptionObserver_m89CFADF08E893A5699A2A55B6F7BC9B67A1E952F (const RuntimeMethod* method);
// System.Void OneSignal::addEmailSubscriptionObserver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneSignal_addEmailSubscriptionObserver_mA2659A7A57140EEC0D257A0F6B336A3886F1A2BF (const RuntimeMethod* method);
// System.Void OneSignal/UnityBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityBuilder__ctor_m725634C7F0B07CC4E671B1F1394760E11168EB0C (UnityBuilder_tDBFC88D88033BADCF56F27E95359EF77CF9ADFED * __this, const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C (String_t* ___value0, const RuntimeMethod* method);
// OneSignalSettings OneSignalSettings::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OneSignalSettings_t6B52AD1BB70C27A333C9FE47B84C9C93FE594CCF * OneSignalSettings_get_Instance_mDCEA4F3B9EBB5CD5F3F11C3634CA5B91FFFA1DFB (const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * __this, String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66 (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, const RuntimeMethod* method);
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * __this, String_t* ___message0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Delegate>::.ctor()
inline void Dictionary_2__ctor_m210799E1C2576446641CA24C1D9463F791556112 (Dictionary_2_t521306497EEE741202CFF9F69FB533CCAD8C8ACD * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t521306497EEE741202CFF9F69FB533CCAD8C8ACD *, const RuntimeMethod*))Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared)(__this, method);
}
// UnityEngine.RuntimePlatform UnityEngine.Application::get_platform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4 (const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17 (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.Void OneSignal::LogDebug(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneSignal_LogDebug_mCC268EBDC2B876D27A2FB9CF66A6E50BAC6FD6C0 (String_t* ___message0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Application::get_isEditor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isEditor_m7367DDB72F13E4846E8EB76FFAAACA84840BE921 (const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_mDF8BF31EAE3E03F24421531B25FB4BEDB7C87144 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, String_t* ___name0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<OneSignal>()
inline OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C * GameObject_AddComponent_TisOneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_mCE3E2304529B1DEDC61A6277E04BB0999833151B (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mF5562A0C81CEDFE1C295F7E16FC6904B5057CB2D_gshared)(__this, method);
}
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m03007A68ABBA4CCD8C27B944964983395E7640F9 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___target0, const RuntimeMethod* method);
// System.String OneSignalUnityUtils::GetNewGuid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* OneSignalUnityUtils_GetNewGuid_mE98FB8FC6067F7DA8AF1C46C9DA028581C037814 (const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Delegate>::Add(!0,!1)
inline void Dictionary_2_Add_m41347382F51428371DD0FF5A518052A6CC8C3A4F (Dictionary_2_t521306497EEE741202CFF9F69FB533CCAD8C8ACD * __this, String_t* ___key0, Delegate_t * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t521306497EEE741202CFF9F69FB533CCAD8C8ACD *, String_t*, Delegate_t *, const RuntimeMethod*))Dictionary_2_Add_m1D9CF8FA99A277EE49BC3002FDEAACDCDB29803B_gshared)(__this, ___key0, ___value1, method);
}
// System.Void OSNotification::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OSNotification__ctor_m6E1749773FF3F7979E219FF4BEAD8927DA7FDB03 (OSNotification_t554DC6C0C4C4F2E6602C4C5E096252126B0EAD72 * __this, const RuntimeMethod* method);
// System.Void OSNotificationPayload::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OSNotificationPayload__ctor_m0D83B11E3E859EE3DA9004AF697FCFAB451A9D8A (OSNotificationPayload_tC710F220B7749FA10F167E672736061B3B774BD2 * __this, const RuntimeMethod* method);
// System.Object Json::Deserialize(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Json_Deserialize_m4F6ECB958C77AF596B8666DDF7B41BAF2F0FCE10 (String_t* ___json0, const RuntimeMethod* method);
// System.Int32 System.Convert::ToInt32(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Convert_ToInt32_mFFEDED67681E3EC8705BCA890BBC206514431B4A (RuntimeObject * ___value0, const RuntimeMethod* method);
// OSNotification OneSignal::DictionaryToNotification(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OSNotification_t554DC6C0C4C4F2E6602C4C5E096252126B0EAD72 * OneSignal_DictionaryToNotification_mE2E37E68961355812CDA6FA5D0025B5370CAD9CB (OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C * __this, Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * ___jsonObject0, const RuntimeMethod* method);
// System.Void OneSignal/NotificationReceived::Invoke(OSNotification)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotificationReceived_Invoke_m5C7278BB32535EEDD14D95287192CF05DB0FC156 (NotificationReceived_tAD87EB0BF05ABA12EF33C2C0C3300278BA0CB814 * __this, OSNotification_t554DC6C0C4C4F2E6602C4C5E096252126B0EAD72 * ___notification0, const RuntimeMethod* method);
// System.Void OSNotificationAction::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OSNotificationAction__ctor_m4B01FC919A0E58BACBF960E24B968C4AA926941A (OSNotificationAction_t54C0BF5FEB98EBD72454642C9CAAD66B464C99AA * __this, const RuntimeMethod* method);
// System.Void OSNotificationOpenedResult::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OSNotificationOpenedResult__ctor_m6B1E36689167D0D75F60E3E62DC3C5D3A3ABB998 (OSNotificationOpenedResult_t74C73E0CEA2EB83022E266EF9F12B5E721DD057F * __this, const RuntimeMethod* method);
// System.Void OneSignal/NotificationOpened::Invoke(OSNotificationOpenedResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotificationOpened_Invoke_m59A3350E8B2917932D9183162DA3C32998E56416 (NotificationOpened_t1EAAB82F6D9989F1EC2B2A408858A3DDE351BBA0 * __this, OSNotificationOpenedResult_t74C73E0CEA2EB83022E266EF9F12B5E721DD057F * ___result0, const RuntimeMethod* method);
// System.Boolean OneSignal::isValidDelegate(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OneSignal_isValidDelegate_m6E92E6BD705588CB1BCCE46C57AE3956E9D340B5 (OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C * __this, Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * ___jsonObject0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Delegate>::ContainsKey(!0)
inline bool Dictionary_2_ContainsKey_m288872404D22932B8AE710EF7BEE1AF7064BD258 (Dictionary_2_t521306497EEE741202CFF9F69FB533CCAD8C8ACD * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t521306497EEE741202CFF9F69FB533CCAD8C8ACD *, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_mCABABA5D0FA017D2D54BE4FA6256C51518274116_gshared)(__this, ___key0, method);
}
// !1 System.Collections.Generic.Dictionary`2<System.String,System.Delegate>::get_Item(!0)
inline Delegate_t * Dictionary_2_get_Item_mF5D8C5B9DBE4629B80CA94EBBF5F528C9A35FC3C (Dictionary_2_t521306497EEE741202CFF9F69FB533CCAD8C8ACD * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  Delegate_t * (*) (Dictionary_2_t521306497EEE741202CFF9F69FB533CCAD8C8ACD *, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_mF3BA34126DA8AFA32D1E5285D842C5955C698F0D_gshared)(__this, ___key0, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Delegate>::Remove(!0)
inline bool Dictionary_2_Remove_m3D41B282C6E5156A390B58BF791E0CB3AB282E43 (Dictionary_2_t521306497EEE741202CFF9F69FB533CCAD8C8ACD * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t521306497EEE741202CFF9F69FB533CCAD8C8ACD *, String_t*, const RuntimeMethod*))Dictionary_2_Remove_m45DB5340BC5312349874253DD3239546CB025D21_gshared)(__this, ___key0, method);
}
// System.Void OneSignal/IdsAvailableCallback::Invoke(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IdsAvailableCallback_Invoke_mE0E2A2CC4C3E5B5CDBF8CACEA82129388941186C (IdsAvailableCallback_t4542530853E11729402E55FCDDD09AD6FBC8B377 * __this, String_t* ___playerID0, String_t* ___pushToken1, const RuntimeMethod* method);
// System.Void OneSignal/TagsReceived::Invoke(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TagsReceived_Invoke_m8FC2051A4C71C2FC59BF7791F2F4F4817324F6CE (TagsReceived_t7D5926BFB0FAC298A876D14D71495DE029E4A791 * __this, Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * ___tags0, const RuntimeMethod* method);
// System.Boolean OneSignal::isValidSuccessFailureDelegate(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OneSignal_isValidSuccessFailureDelegate_m45DCD71D2555940A8605074102FCBFC669A4E83E (OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C * __this, Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * ___jsonObject0, const RuntimeMethod* method);
// System.Void OneSignal/OnPostNotificationSuccess::Invoke(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnPostNotificationSuccess_Invoke_mC4E45D5B1D9E50AAB4CA72796F9E52FAD2817D93 (OnPostNotificationSuccess_tDCA1A38F1FC336944A4489421DD2C28BF9F6DAFA * __this, Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * ___response0, const RuntimeMethod* method);
// System.Void OneSignal/OnPostNotificationFailure::Invoke(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnPostNotificationFailure_Invoke_mCFEFAB9AB63633AD5BC9D31FC1A402BC8E821133 (OnPostNotificationFailure_t838C4BF4E9FE424E9B8A948B686BC4B56EA0EE85 * __this, Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * ___response0, const RuntimeMethod* method);
// System.Void OneSignal/OnExternalUserIdUpdateCompletion::Invoke(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnExternalUserIdUpdateCompletion_Invoke_mE9FBD8E1231DB6B2C9418A4CBC46CA2D6FA99B6B (OnExternalUserIdUpdateCompletion_tE7AD9883916B83BCCE7A9F6C4C77E818FA079EF3 * __this, Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * ___results0, const RuntimeMethod* method);
// System.Void OneSignal/OnSetEmailSuccess::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnSetEmailSuccess_Invoke_m77F99D61CA68EA36709DBF7125C94692118D4C62 (OnSetEmailSuccess_t5D828241C45219E51AC4B47C581F66419C7D3BDB * __this, const RuntimeMethod* method);
// System.Void OneSignal/OnSetEmailFailure::Invoke(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnSetEmailFailure_Invoke_mB49471E694DA5104BC76980F4C8C5639798527F9 (OnSetEmailFailure_tC1B0B2D7E54644EF4414EFE4A1DC6A9371409B5D * __this, Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * ___error0, const RuntimeMethod* method);
// System.Void OneSignal/OnLogoutEmailSuccess::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnLogoutEmailSuccess_Invoke_m1249F522E9ACB6C6AEB1E0A650126D2E76A2E5FD (OnLogoutEmailSuccess_t87D6896F1510F5624EA317AA83BCEEBE79DC60AF * __this, const RuntimeMethod* method);
// System.Void OneSignal/OnLogoutEmailFailure::Invoke(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnLogoutEmailFailure_Invoke_m5433108F92A3791222E6C178AD2F6B92F0E6BCCA (OnLogoutEmailFailure_tA4226BD4128D5C768C079A27BC0ABEA359DC848D * __this, Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * ___error0, const RuntimeMethod* method);
// System.Void OSOutcomeEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OSOutcomeEvent__ctor_m360584AB1C080E514D051EC88EB8C1AD499C9D48 (OSOutcomeEvent_tA0383B5CF8F2466567F3E15AA97710870875535D * __this, const RuntimeMethod* method);
// System.Void OSOutcomeEvent::.ctor(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OSOutcomeEvent__ctor_mB222B71F5172E1E97E05D7D9294D531241CCE18A (OSOutcomeEvent_tA0383B5CF8F2466567F3E15AA97710870875535D * __this, Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * ___outcomeDict0, const RuntimeMethod* method);
// System.Void OneSignal/OnSendOutcomeSuccess::Invoke(OSOutcomeEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnSendOutcomeSuccess_Invoke_mA05B4A944D533EBBA32B0EB4ED8EBA632B47F5DE (OnSendOutcomeSuccess_t33CAC591369FF5B710CB915E5F2EC54F7BD19D0C * __this, OSOutcomeEvent_tA0383B5CF8F2466567F3E15AA97710870875535D * ___outcomeEvent0, const RuntimeMethod* method);
// System.Void OneSignal/PermissionObservable::Invoke(OSPermissionStateChanges)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PermissionObservable_Invoke_m7AE7C99E2B8A793B0D60ECA41D4E59D8CC426E33 (PermissionObservable_tAD0961762662CFBE5C5C21B4F7B44816689D232D * __this, OSPermissionStateChanges_t1B014D5332A17B2F12B7B9B981B61A08AB8FDCF8 * ___stateChanges0, const RuntimeMethod* method);
// System.Void OneSignal/SubscriptionObservable::Invoke(OSSubscriptionStateChanges)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubscriptionObservable_Invoke_mA5DABD1A12E6A7502F4E0BBDBB87B944A25ADC79 (SubscriptionObservable_tAC9D68D12698867A849F8DBEDF5E81CEF8353BBB * __this, OSSubscriptionStateChanges_t80801EC51BCF40EDC399FB2C2658111539658213 * ___stateChanges0, const RuntimeMethod* method);
// System.Void OneSignal/EmailSubscriptionObservable::Invoke(OSEmailSubscriptionStateChanges)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EmailSubscriptionObservable_Invoke_m475D1FD8E0E1FD296C7E6E188E23D1654FFA6146 (EmailSubscriptionObservable_t0BE190ED78D890F32B3CD78351CB03CDE6743C4A * __this, OSEmailSubscriptionStateChanges_tCEE883A6FE7F1AAAC113C9D9E6135CEDAE1ABC6A * ___stateChanges0, const RuntimeMethod* method);
// System.Boolean System.Convert::ToBoolean(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Convert_ToBoolean_m9BE4DAAEA91C52F17A8A7101DABB32253925826B (String_t* ___value0, const RuntimeMethod* method);
// System.Void OneSignal/PromptForPushNotificationsUserResponse::Invoke(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PromptForPushNotificationsUserResponse_Invoke_mAB662FD998CF5BC2A5B565F794F3FED2EDF8A622 (PromptForPushNotificationsUserResponse_t5508C614F3AB278D72FACCAD119F0F65792AB501 * __this, bool ___accepted0, const RuntimeMethod* method);
// System.Void OSInAppMessageAction::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OSInAppMessageAction__ctor_m39592287776905704BF2D003AFBBFD345EAA08FB (OSInAppMessageAction_tAE95CC815769B2A2C7EE6A21F465550529D5C1A3 * __this, const RuntimeMethod* method);
// System.Void OneSignal/InAppMessageClicked::Invoke(OSInAppMessageAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InAppMessageClicked_Invoke_m66291C067D0E1521F8343E8ADC337ACB49CBD88E (InAppMessageClicked_t28BE72075727CEF08C18EC3542264EE5099C46AA * __this, OSInAppMessageAction_tAE95CC815769B2A2C7EE6A21F465550529D5C1A3 * ___action0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Void OSPermissionSubscriptionState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OSPermissionSubscriptionState__ctor_mDCA70F367EC97F3013DC5ECA3E13DF21AE297DA2 (OSPermissionSubscriptionState_t7BCEA446B237598B727E00B8D8F4DBC11DEC9B72 * __this, const RuntimeMethod* method);
// System.Void OSPermissionStateChanges::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OSPermissionStateChanges__ctor_m4BC5B6EC0A425A3D33F99EB7E7BBCA2866A9CFE0 (OSPermissionStateChanges_t1B014D5332A17B2F12B7B9B981B61A08AB8FDCF8 * __this, const RuntimeMethod* method);
// System.Void OSSubscriptionStateChanges::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OSSubscriptionStateChanges__ctor_mFAB047B779BEA67235CDCB81D82C40541EAE4B3D (OSSubscriptionStateChanges_t80801EC51BCF40EDC399FB2C2658111539658213 * __this, const RuntimeMethod* method);
// System.Void OSEmailSubscriptionStateChanges::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OSEmailSubscriptionStateChanges__ctor_m5C8A24EDD86F6E9459CEEFFD345E0C3B9F101043 (OSEmailSubscriptionStateChanges_tCEE883A6FE7F1AAAC113C9D9E6135CEDAE1ABC6A * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// !!0 UnityEngine.Resources::Load<OneSignalSettings>(System.String)
inline OneSignalSettings_t6B52AD1BB70C27A333C9FE47B84C9C93FE594CCF * Resources_Load_TisOneSignalSettings_t6B52AD1BB70C27A333C9FE47B84C9C93FE594CCF_m19330665DFAC033277FB62F5B17BD204752E5A12 (String_t* ___path0, const RuntimeMethod* method)
{
	return ((  OneSignalSettings_t6B52AD1BB70C27A333C9FE47B84C9C93FE594CCF * (*) (String_t*, const RuntimeMethod*))Resources_Load_TisRuntimeObject_m83108B6D8808A0E83DE12FD220A87000D19AEE00_gshared)(___path0, method);
}
// !!0 UnityEngine.ScriptableObject::CreateInstance<OneSignalSettings>()
inline OneSignalSettings_t6B52AD1BB70C27A333C9FE47B84C9C93FE594CCF * ScriptableObject_CreateInstance_TisOneSignalSettings_t6B52AD1BB70C27A333C9FE47B84C9C93FE594CCF_m1E1C422AC5E73CAFFCEB43C3DDC9451A7A135B7D (const RuntimeMethod* method)
{
	return ((  OneSignalSettings_t6B52AD1BB70C27A333C9FE47B84C9C93FE594CCF * (*) (const RuntimeMethod*))ScriptableObject_CreateInstance_TisRuntimeObject_mF4140C4B5E93F4E297B82702364BB7455E2E4EBE_gshared)(method);
}
// System.Void OneSignalSettings::SaveToAssetDatabase()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneSignalSettings_SaveToAssetDatabase_mB01414C7361153704EE1300A467BC2CD7E05FA8C (OneSignalSettings_t6B52AD1BB70C27A333C9FE47B84C9C93FE594CCF * __this, const RuntimeMethod* method);
// System.Void UnityEngine.ScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_m8DAE6CDCFA34E16F2543B02CC3669669FF203063 (ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A * __this, const RuntimeMethod* method);
// System.String System.IO.Path::Combine(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_Combine_mDEAC65F07A793450CFB9D0086463CAEBD28D098E (String_t* ___path10, String_t* ___path21, String_t* ___path32, String_t* ___path43, const RuntimeMethod* method);
// System.Guid System.Guid::NewGuid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Guid_t  Guid_NewGuid_m5BD19325820690ED6ECA31D67BC2CD474DC4FDB0 (const RuntimeMethod* method);
// System.String System.Guid::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Guid_ToString_mA3AB7742FB0E04808F580868E82BDEB93187FB75 (Guid_t * __this, const RuntimeMethod* method);
// System.Boolean System.Char::IsWhiteSpace(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Char_IsWhiteSpace_m99A5E1BE1EB9F17EA530A67A607DA8C260BCBF99 (Il2CppChar ___c0, const RuntimeMethod* method);
// System.Int32 System.String::IndexOf(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_IndexOf_mEE2D2F738175E3FF05580366D6226DBD673CA2BE (String_t* __this, Il2CppChar ___value0, const RuntimeMethod* method);
// System.Void System.IO.StringReader::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringReader__ctor_m7CC29D8E83F4813395ACA9CF4F756B1BCE09A7EE (StringReader_t74E352C280EAC22C878867444978741F19E1F895 * __this, String_t* ___s0, const RuntimeMethod* method);
// System.Void Json/Parser::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Parser__ctor_m0D974AD82CE8E7310882721F293E4972E5CD8090 (Parser_t2D45D1FA01DEBA1E03BB55A0AF0A7453A771EF00 * __this, String_t* ___jsonString0, const RuntimeMethod* method);
// System.Object Json/Parser::ParseValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Parser_ParseValue_mAE33A6DD3A48C5E0FE040821ECBFD5AECF0D86B1 (Parser_t2D45D1FA01DEBA1E03BB55A0AF0A7453A771EF00 * __this, const RuntimeMethod* method);
// System.Void System.IO.TextReader::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextReader_Dispose_mDF1DCFD8FBE94A453EB2350DB7173027420BA5F8 (TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::.ctor()
inline void Dictionary_2__ctor_mCD0C2F0325B7677B9BC340A60AA3FB9C7A88FF63 (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *, const RuntimeMethod*))Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared)(__this, method);
}
// Json/Parser/TOKEN Json/Parser::get_NextToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Parser_get_NextToken_m934F15CF28460A3EB6DA4AF7944C7A0B38408F11 (Parser_t2D45D1FA01DEBA1E03BB55A0AF0A7453A771EF00 * __this, const RuntimeMethod* method);
// System.String Json/Parser::ParseString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Parser_ParseString_mBE6784E1D3B5C0C99A9DC467C0813CC99D07665E (Parser_t2D45D1FA01DEBA1E03BB55A0AF0A7453A771EF00 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_m012F321188703DCCB5C4F99C5A5AA2FA31A98144 (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * __this, String_t* ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *, String_t*, RuntimeObject *, const RuntimeMethod*))Dictionary_2_set_Item_mA8F31A10EE1129768E13ACC4DC847B05EAD2A055_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
inline void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Object Json/Parser::ParseByToken(Json/Parser/TOKEN)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Parser_ParseByToken_mE3D63D087A28F7BC97785DD4DDF40FC2E4FEDD5C (Parser_t2D45D1FA01DEBA1E03BB55A0AF0A7453A771EF00 * __this, int32_t ___token0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
inline void List_1_Add_mF15250BF947CA27BE9A23C08BAC6DB6F180B0EDD (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, RuntimeObject *, const RuntimeMethod*))List_1_Add_mF15250BF947CA27BE9A23C08BAC6DB6F180B0EDD_gshared)(__this, ___item0, method);
}
// System.Object Json/Parser::ParseNumber()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Parser_ParseNumber_m83A4A664E4C1C1279C792484EE6A76DC663DBEBE (Parser_t2D45D1FA01DEBA1E03BB55A0AF0A7453A771EF00 * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2<System.String,System.Object> Json/Parser::ParseObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * Parser_ParseObject_mBE726F3D8ADB6336205E86F5EEE8BDA4EE03D1EB (Parser_t2D45D1FA01DEBA1E03BB55A0AF0A7453A771EF00 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1<System.Object> Json/Parser::ParseArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * Parser_ParseArray_m16D44CA2E64AE8965E4ED1DBCE459E3997B06F20 (Parser_t2D45D1FA01DEBA1E03BB55A0AF0A7453A771EF00 * __this, const RuntimeMethod* method);
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9 (StringBuilder_t * __this, const RuntimeMethod* method);
// System.Char Json/Parser::get_NextChar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar Parser_get_NextChar_mB85A1AC0571ED1AD9552464133635AE07C0DCDD7 (Parser_t2D45D1FA01DEBA1E03BB55A0AF0A7453A771EF00 * __this, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E (StringBuilder_t * __this, Il2CppChar ___value0, const RuntimeMethod* method);
// System.String System.String::CreateString(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_CreateString_mC7F57CE6ED768CF86591160424FE55D5CBA7C344 (String_t* __this, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___val0, const RuntimeMethod* method);
// System.Int32 System.Convert::ToInt32(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Convert_ToInt32_m21526761291049AC762DEAEA073870C8A8583643 (String_t* ___value0, int32_t ___fromBase1, const RuntimeMethod* method);
// System.String Json/Parser::get_NextWord()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Parser_get_NextWord_mE9D819CD9304F00733AC020146515F035E2706E9 (Parser_t2D45D1FA01DEBA1E03BB55A0AF0A7453A771EF00 * __this, const RuntimeMethod* method);
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164 (const RuntimeMethod* method);
// System.Boolean System.Int64::TryParse(System.String,System.Globalization.NumberStyles,System.IFormatProvider,System.Int64&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Int64_TryParse_m4A94015941D9BD9F9304D1FE14F17E84BFD3B69A (String_t* ___s0, int32_t ___style1, RuntimeObject* ___provider2, int64_t* ___result3, const RuntimeMethod* method);
// System.Boolean System.Double::TryParse(System.String,System.Globalization.NumberStyles,System.IFormatProvider,System.Double&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Double_TryParse_mE740D7083AC52793A9634067C4F032570FFBF61E (String_t* ___s0, int32_t ___style1, RuntimeObject* ___provider2, double* ___result3, const RuntimeMethod* method);
// System.Char Json/Parser::get_PeekChar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar Parser_get_PeekChar_mFA891FD35F5C092EC8ECE479F5F7C777AB06C70D (Parser_t2D45D1FA01DEBA1E03BB55A0AF0A7453A771EF00 * __this, const RuntimeMethod* method);
// System.Char System.Convert::ToChar(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar Convert_ToChar_m84E3CF47987D8B6F2D889D957CBFB5FD55F3DAEC (int32_t ___value0, const RuntimeMethod* method);
// System.Boolean Json/Parser::IsWordBreak(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Parser_IsWordBreak_mC565924147B4E1D11FB080EDD82622BDF66C53AF (Il2CppChar ___c0, const RuntimeMethod* method);
// System.Void Json/Parser::EatWhitespace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Parser_EatWhitespace_mFD1B9AD7B2D5F43B8FBC1259F8619BEB268CC13D (Parser_t2D45D1FA01DEBA1E03BB55A0AF0A7453A771EF00 * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Void Json/Serializer::.ctor(System.Boolean,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer__ctor_mCA139ACEFEF3588F206BD98D01770AC34A6753DA (Serializer_tD60707A2A49A34FBCB719C8EFD602D15FF19C248 * __this, bool ___humanReadable0, int32_t ___indentSpaces1, const RuntimeMethod* method);
// System.Void Json/Serializer::SerializeValue(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeValue_mC2F24912AE676EBEBEDFA3275A9AF5E092AB7AE7 (Serializer_tD60707A2A49A34FBCB719C8EFD602D15FF19C248 * __this, RuntimeObject * ___value0, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1 (StringBuilder_t * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void Json/Serializer::SerializeString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeString_mB50720F378B286FB45C8915ABEA8915C56EAADEA (Serializer_tD60707A2A49A34FBCB719C8EFD602D15FF19C248 * __this, String_t* ___str0, const RuntimeMethod* method);
// System.Void Json/Serializer::SerializeArray(System.Collections.IList)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeArray_mDB25878AB7D9B1C4ECC70EEBB4BB9DC39100BC64 (Serializer_tD60707A2A49A34FBCB719C8EFD602D15FF19C248 * __this, RuntimeObject* ___anArray0, const RuntimeMethod* method);
// System.Void Json/Serializer::SerializeObject(System.Collections.IDictionary)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeObject_m2C3E0353B344C3CD4D9EA9EEE7B17AC623A49EC2 (Serializer_tD60707A2A49A34FBCB719C8EFD602D15FF19C248 * __this, RuntimeObject* ___obj0, const RuntimeMethod* method);
// System.String System.String::CreateString(System.Char,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_CreateString_m4CBF2A74FB65655B0BB1452CA748E9CF78D974ED (String_t* __this, Il2CppChar ___c0, int32_t ___count1, const RuntimeMethod* method);
// System.Void Json/Serializer::SerializeOther(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeOther_m8A4C90F8CFCD6E67AB81C8EDB14C633B96DCBE54 (Serializer_tD60707A2A49A34FBCB719C8EFD602D15FF19C248 * __this, RuntimeObject * ___value0, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::AppendLine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_AppendLine_mB5790BC98389118626505708AE683AE9257B91B2 (StringBuilder_t * __this, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_mB04B8FAD8E322DF8E69F3F85BCE4A8D041AE8BFB (StringBuilder_t * __this, Il2CppChar ___value0, int32_t ___repeatCount1, const RuntimeMethod* method);
// System.Void Json/Serializer::AppendNewLineFunc()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_AppendNewLineFunc_m153B82BF1125A82F14857B3B2F45FF9A1E749D37 (Serializer_tD60707A2A49A34FBCB719C8EFD602D15FF19C248 * __this, const RuntimeMethod* method);
// System.Char[] System.String::ToCharArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* String_ToCharArray_m33E93AEB7086CBEBDFA5730EAAC49686F144089C (String_t* __this, const RuntimeMethod* method);
// System.Int32 System.Convert::ToInt32(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Convert_ToInt32_m0B80BF2883121B16934DF6F71590CAE15442A5BC (Il2CppChar ___value0, const RuntimeMethod* method);
// System.String System.Int32::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m5398ED0B6625B75CAF70C63B3CF2CE47D3C1B184 (int32_t* __this, String_t* ___format0, const RuntimeMethod* method);
// System.String System.Single::ToString(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_m7631D332703B4197EAA7DC0BA067CE7E16334D8B (float* __this, String_t* ___format0, RuntimeObject* ___provider1, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_m545FFB72A578320B1D6EA3772160353FD62C344F (StringBuilder_t * __this, RuntimeObject * ___value0, const RuntimeMethod* method);
// System.Double System.Convert::ToDouble(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Convert_ToDouble_mF6F0642EA16CAB414EEA621DEAA519527DA64284 (RuntimeObject * ___value0, const RuntimeMethod* method);
// System.String System.Double::ToString(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Double_ToString_mFF1DAF2003FC7096C54C5A2685F85082220E330B (double* __this, String_t* ___format0, RuntimeObject* ___provider1, const RuntimeMethod* method);
// System.Void OneSignal::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneSignal_Init_m756C1C4D540B10908DD87EDC00BB106549112B0F (const RuntimeMethod* method);
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
// System.Object Json::Deserialize(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Json_Deserialize_m4F6ECB958C77AF596B8666DDF7B41BAF2F0FCE10 (String_t* ___json0, const RuntimeMethod* method)
{
	{
		// if (json == null)
		String_t* L_0 = ___json0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		// return null;
		return NULL;
	}

IL_0005:
	{
		// return Parser.Parse(json);
		String_t* L_1 = ___json0;
		RuntimeObject * L_2;
		L_2 = Parser_Parse_m59C9400B0758A82184794D7A39B43372E3AC4C32(L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.String Json::Serialize(System.Object,System.Boolean,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Json_Serialize_m65E34AB65E9C7615563C88222B157E58B387741E (RuntimeObject * ___obj0, bool ___humanReadable1, int32_t ___indentSpaces2, const RuntimeMethod* method)
{
	{
		// return Serializer.MakeSerialization(obj, humanReadable, indentSpaces);
		RuntimeObject * L_0 = ___obj0;
		bool L_1 = ___humanReadable1;
		int32_t L_2 = ___indentSpaces2;
		String_t* L_3;
		L_3 = Serializer_MakeSerialization_m0E3856CB6C844529AA2871FDFB27D472C922E086(L_0, L_1, L_2, /*hidden argument*/NULL);
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
// System.Void OSEmailSubscriptionState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OSEmailSubscriptionState__ctor_mF051A028E4419C3BC224D145295E1BF6AE97BC43 (OSEmailSubscriptionState_tF6350D8DFFE2530E089402386E40677052DE2B6F * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void OSEmailSubscriptionStateChanges::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OSEmailSubscriptionStateChanges__ctor_m5C8A24EDD86F6E9459CEEFFD345E0C3B9F101043 (OSEmailSubscriptionStateChanges_tCEE883A6FE7F1AAAC113C9D9E6135CEDAE1ABC6A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OSStateChanges_1__ctor_m3C8DB5A44C17B05FF364451D433764C32A667D7B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		OSStateChanges_1__ctor_m3C8DB5A44C17B05FF364451D433764C32A667D7B(__this, /*hidden argument*/OSStateChanges_1__ctor_m3C8DB5A44C17B05FF364451D433764C32A667D7B_RuntimeMethod_var);
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
// System.Void OSInAppMessageAction::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OSInAppMessageAction__ctor_m39592287776905704BF2D003AFBBFD345EAA08FB (OSInAppMessageAction_tAE95CC815769B2A2C7EE6A21F465550529D5C1A3 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void OSNotification::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OSNotification__ctor_m6E1749773FF3F7979E219FF4BEAD8927DA7FDB03 (OSNotification_t554DC6C0C4C4F2E6602C4C5E096252126B0EAD72 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void OSNotificationAction::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OSNotificationAction__ctor_m4B01FC919A0E58BACBF960E24B968C4AA926941A (OSNotificationAction_t54C0BF5FEB98EBD72454642C9CAAD66B464C99AA * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void OSNotificationOpenedResult::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OSNotificationOpenedResult__ctor_m6B1E36689167D0D75F60E3E62DC3C5D3A3ABB998 (OSNotificationOpenedResult_t74C73E0CEA2EB83022E266EF9F12B5E721DD057F * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void OSNotificationPayload::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OSNotificationPayload__ctor_m0D83B11E3E859EE3DA9004AF697FCFAB451A9D8A (OSNotificationPayload_tC710F220B7749FA10F167E672736061B3B774BD2 * __this, const RuntimeMethod* method)
{
	{
		// public int lockScreenVisibility = 1;
		__this->set_lockScreenVisibility_15(1);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void OSOutcomeEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OSOutcomeEvent__ctor_m360584AB1C080E514D051EC88EB8C1AD499C9D48 (OSOutcomeEvent_tA0383B5CF8F2466567F3E15AA97710870875535D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public OSSession session = OSSession.DISABLED;
		__this->set_session_0(3);
		// public List<string> notificationIds = new List<string>();
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_0 = (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)il2cpp_codegen_object_new(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9(L_0, /*hidden argument*/List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		__this->set_notificationIds_1(L_0);
		// public string name = "";
		__this->set_name_2(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// public OSOutcomeEvent() { }
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// public OSOutcomeEvent() { }
		return;
	}
}
// System.Void OSOutcomeEvent::.ctor(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OSOutcomeEvent__ctor_mB222B71F5172E1E97E05D7D9294D531241CCE18A (OSOutcomeEvent_tA0383B5CF8F2466567F3E15AA97710870875535D * __this, Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * ___outcomeDict0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m3C1B28325435E61FFAD431E314EABF915B79A55E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m4C91D0E84532DF10C654917487D82CB0AB27693B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mD8C90346622A7F72A072D319F0E2AE851BB5885A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m6339FC2D3D1CE4FA13CF21C7F9FC58CA4441BF0C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral42E49EB985DBD525F9131D975D4A1458641A6558);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral703C0C715FA81A5615B2EB888B81982A4CC84394);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral996E5360F80E16B2189CC1E536C91CE68083F694);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5CD64A4BBC46492D30767199E811DE9461EBEDA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCCE359C6B0ABE9D58CB588667F9A93BA52A1C294);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * V_0 = NULL;
	Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  V_1;
	memset((&V_1), 0, sizeof(V_1));
	RuntimeObject * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// public OSSession session = OSSession.DISABLED;
		__this->set_session_0(3);
		// public List<string> notificationIds = new List<string>();
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_0 = (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)il2cpp_codegen_object_new(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9(L_0, /*hidden argument*/List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		__this->set_notificationIds_1(L_0);
		// public string name = "";
		__this->set_name_2(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// public OSOutcomeEvent(Dictionary<string, object> outcomeDict)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// if (outcomeDict.ContainsKey("session") && outcomeDict["session"] != null)
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_1 = ___outcomeDict0;
		NullCheck(L_1);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_m3C1B28325435E61FFAD431E314EABF915B79A55E(L_1, _stringLiteral42E49EB985DBD525F9131D975D4A1458641A6558, /*hidden argument*/Dictionary_2_ContainsKey_m3C1B28325435E61FFAD431E314EABF915B79A55E_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0059;
		}
	}
	{
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_3 = ___outcomeDict0;
		NullCheck(L_3);
		RuntimeObject * L_4;
		L_4 = Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D(L_3, _stringLiteral42E49EB985DBD525F9131D975D4A1458641A6558, /*hidden argument*/Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D_RuntimeMethod_var);
		if (!L_4)
		{
			goto IL_0059;
		}
	}
	{
		// session = SessionFromString(outcomeDict["session"] as string);
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_5 = ___outcomeDict0;
		NullCheck(L_5);
		RuntimeObject * L_6;
		L_6 = Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D(L_5, _stringLiteral42E49EB985DBD525F9131D975D4A1458641A6558, /*hidden argument*/Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D_RuntimeMethod_var);
		int32_t L_7;
		L_7 = OSOutcomeEvent_SessionFromString_m52C6706CD3E9689F188DDD625AB39B35C5B7D713(__this, ((String_t*)IsInstSealed((RuntimeObject*)L_6, String_t_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		__this->set_session_0(L_7);
	}

IL_0059:
	{
		// if (outcomeDict.ContainsKey("notification_ids") && outcomeDict["notification_ids"] != null)
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_8 = ___outcomeDict0;
		NullCheck(L_8);
		bool L_9;
		L_9 = Dictionary_2_ContainsKey_m3C1B28325435E61FFAD431E314EABF915B79A55E(L_8, _stringLiteral703C0C715FA81A5615B2EB888B81982A4CC84394, /*hidden argument*/Dictionary_2_ContainsKey_m3C1B28325435E61FFAD431E314EABF915B79A55E_RuntimeMethod_var);
		if (!L_9)
		{
			goto IL_010f;
		}
	}
	{
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_10 = ___outcomeDict0;
		NullCheck(L_10);
		RuntimeObject * L_11;
		L_11 = Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D(L_10, _stringLiteral703C0C715FA81A5615B2EB888B81982A4CC84394, /*hidden argument*/Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D_RuntimeMethod_var);
		if (!L_11)
		{
			goto IL_010f;
		}
	}
	{
		// List<string> notifications = new List<string>();
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_12 = (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)il2cpp_codegen_object_new(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9(L_12, /*hidden argument*/List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		V_0 = L_12;
		// if (outcomeDict["notification_ids"].GetType().Equals(typeof(string)))
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_13 = ___outcomeDict0;
		NullCheck(L_13);
		RuntimeObject * L_14;
		L_14 = Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D(L_13, _stringLiteral703C0C715FA81A5615B2EB888B81982A4CC84394, /*hidden argument*/Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D_RuntimeMethod_var);
		NullCheck(L_14);
		Type_t * L_15;
		L_15 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(L_14, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_16 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_17;
		L_17 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_16, /*hidden argument*/NULL);
		NullCheck(L_15);
		bool L_18;
		L_18 = VirtualFuncInvoker1< bool, Type_t * >::Invoke(115 /* System.Boolean System.Type::Equals(System.Type) */, L_15, L_17);
		if (!L_18)
		{
			goto IL_00c3;
		}
	}
	{
		// notifications = new List<string> { Convert.ToString(outcomeDict["notification_ids"] as string) };
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_19 = (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)il2cpp_codegen_object_new(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9(L_19, /*hidden argument*/List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_20 = L_19;
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_21 = ___outcomeDict0;
		NullCheck(L_21);
		RuntimeObject * L_22;
		L_22 = Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D(L_21, _stringLiteral703C0C715FA81A5615B2EB888B81982A4CC84394, /*hidden argument*/Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		String_t* L_23;
		L_23 = Convert_ToString_m9947BD81AE89C07F57E968D7CDE9C971D620CDC8(((String_t*)IsInstSealed((RuntimeObject*)L_22, String_t_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		NullCheck(L_20);
		List_1_Add_mD8C90346622A7F72A072D319F0E2AE851BB5885A(L_20, L_23, /*hidden argument*/List_1_Add_mD8C90346622A7F72A072D319F0E2AE851BB5885A_RuntimeMethod_var);
		V_0 = L_20;
		// }
		goto IL_0108;
	}

IL_00c3:
	{
		// List<object> idObjects = outcomeDict["notification_ids"] as List<object>;
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_24 = ___outcomeDict0;
		NullCheck(L_24);
		RuntimeObject * L_25;
		L_25 = Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D(L_24, _stringLiteral703C0C715FA81A5615B2EB888B81982A4CC84394, /*hidden argument*/Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D_RuntimeMethod_var);
		// foreach (var id in idObjects)
		NullCheck(((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)IsInstClass((RuntimeObject*)L_25, List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_il2cpp_TypeInfo_var)));
		Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  L_26;
		L_26 = List_1_GetEnumerator_m6339FC2D3D1CE4FA13CF21C7F9FC58CA4441BF0C(((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)IsInstClass((RuntimeObject*)L_25, List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_il2cpp_TypeInfo_var)), /*hidden argument*/List_1_GetEnumerator_m6339FC2D3D1CE4FA13CF21C7F9FC58CA4441BF0C_RuntimeMethod_var);
		V_1 = L_26;
	}

IL_00d9:
	try
	{// begin try (depth: 1)
		{
			goto IL_00ef;
		}

IL_00db:
		{
			// foreach (var id in idObjects)
			RuntimeObject * L_27;
			L_27 = Enumerator_get_Current_m4C91D0E84532DF10C654917487D82CB0AB27693B_inline((Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)(&V_1), /*hidden argument*/Enumerator_get_Current_m4C91D0E84532DF10C654917487D82CB0AB27693B_RuntimeMethod_var);
			V_2 = L_27;
			// notifications.Add(id.ToString());
			List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_28 = V_0;
			RuntimeObject * L_29 = V_2;
			NullCheck(L_29);
			String_t* L_30;
			L_30 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_29);
			NullCheck(L_28);
			List_1_Add_mD8C90346622A7F72A072D319F0E2AE851BB5885A(L_28, L_30, /*hidden argument*/List_1_Add_mD8C90346622A7F72A072D319F0E2AE851BB5885A_RuntimeMethod_var);
		}

IL_00ef:
		{
			// foreach (var id in idObjects)
			bool L_31;
			L_31 = Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0((Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)(&V_1), /*hidden argument*/Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_RuntimeMethod_var);
			if (L_31)
			{
				goto IL_00db;
			}
		}

IL_00f8:
		{
			IL2CPP_LEAVE(0x108, FINALLY_00fa);
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00fa;
	}

FINALLY_00fa:
	{// begin finally (depth: 1)
		Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8((Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)(&V_1), /*hidden argument*/Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_RuntimeMethod_var);
		IL2CPP_END_FINALLY(250)
	}// end finally (depth: 1)
	IL2CPP_CLEANUP(250)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x108, IL_0108)
	}

IL_0108:
	{
		// notificationIds = notifications;
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_32 = V_0;
		__this->set_notificationIds_1(L_32);
	}

IL_010f:
	{
		// if (outcomeDict.ContainsKey("id") && outcomeDict["id"] != null)
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_33 = ___outcomeDict0;
		NullCheck(L_33);
		bool L_34;
		L_34 = Dictionary_2_ContainsKey_m3C1B28325435E61FFAD431E314EABF915B79A55E(L_33, _stringLiteral996E5360F80E16B2189CC1E536C91CE68083F694, /*hidden argument*/Dictionary_2_ContainsKey_m3C1B28325435E61FFAD431E314EABF915B79A55E_RuntimeMethod_var);
		if (!L_34)
		{
			goto IL_013f;
		}
	}
	{
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_35 = ___outcomeDict0;
		NullCheck(L_35);
		RuntimeObject * L_36;
		L_36 = Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D(L_35, _stringLiteral996E5360F80E16B2189CC1E536C91CE68083F694, /*hidden argument*/Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D_RuntimeMethod_var);
		if (!L_36)
		{
			goto IL_013f;
		}
	}
	{
		// name = outcomeDict["id"] as string;
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_37 = ___outcomeDict0;
		NullCheck(L_37);
		RuntimeObject * L_38;
		L_38 = Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D(L_37, _stringLiteral996E5360F80E16B2189CC1E536C91CE68083F694, /*hidden argument*/Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D_RuntimeMethod_var);
		__this->set_name_2(((String_t*)IsInstSealed((RuntimeObject*)L_38, String_t_il2cpp_TypeInfo_var)));
	}

IL_013f:
	{
		// if (outcomeDict.ContainsKey("timestamp") && outcomeDict["timestamp"] != null)
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_39 = ___outcomeDict0;
		NullCheck(L_39);
		bool L_40;
		L_40 = Dictionary_2_ContainsKey_m3C1B28325435E61FFAD431E314EABF915B79A55E(L_39, _stringLiteralCCE359C6B0ABE9D58CB588667F9A93BA52A1C294, /*hidden argument*/Dictionary_2_ContainsKey_m3C1B28325435E61FFAD431E314EABF915B79A55E_RuntimeMethod_var);
		if (!L_40)
		{
			goto IL_016f;
		}
	}
	{
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_41 = ___outcomeDict0;
		NullCheck(L_41);
		RuntimeObject * L_42;
		L_42 = Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D(L_41, _stringLiteralCCE359C6B0ABE9D58CB588667F9A93BA52A1C294, /*hidden argument*/Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D_RuntimeMethod_var);
		if (!L_42)
		{
			goto IL_016f;
		}
	}
	{
		// timestamp = (long)outcomeDict["timestamp"];
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_43 = ___outcomeDict0;
		NullCheck(L_43);
		RuntimeObject * L_44;
		L_44 = Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D(L_43, _stringLiteralCCE359C6B0ABE9D58CB588667F9A93BA52A1C294, /*hidden argument*/Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D_RuntimeMethod_var);
		__this->set_timestamp_3(((*(int64_t*)((int64_t*)UnBox(L_44, Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var)))));
	}

IL_016f:
	{
		// if (outcomeDict.ContainsKey("weight") && outcomeDict["weight"] != null)
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_45 = ___outcomeDict0;
		NullCheck(L_45);
		bool L_46;
		L_46 = Dictionary_2_ContainsKey_m3C1B28325435E61FFAD431E314EABF915B79A55E(L_45, _stringLiteralC5CD64A4BBC46492D30767199E811DE9461EBEDA, /*hidden argument*/Dictionary_2_ContainsKey_m3C1B28325435E61FFAD431E314EABF915B79A55E_RuntimeMethod_var);
		if (!L_46)
		{
			goto IL_01a4;
		}
	}
	{
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_47 = ___outcomeDict0;
		NullCheck(L_47);
		RuntimeObject * L_48;
		L_48 = Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D(L_47, _stringLiteralC5CD64A4BBC46492D30767199E811DE9461EBEDA, /*hidden argument*/Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D_RuntimeMethod_var);
		if (!L_48)
		{
			goto IL_01a4;
		}
	}
	{
		// weight = double.Parse(Convert.ToString(outcomeDict["weight"]));
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_49 = ___outcomeDict0;
		NullCheck(L_49);
		RuntimeObject * L_50;
		L_50 = Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D(L_49, _stringLiteralC5CD64A4BBC46492D30767199E811DE9461EBEDA, /*hidden argument*/Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		String_t* L_51;
		L_51 = Convert_ToString_m27BA6FF6E38081A1A16F6C13D007713B656AA148(L_50, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var);
		double L_52;
		L_52 = Double_Parse_mFF5B29ED0585A4847BFE654ABB9E915DFE21B63E(L_51, /*hidden argument*/NULL);
		__this->set_weight_4(L_52);
	}

IL_01a4:
	{
		// }
		return;
	}
}
// OSOutcomeEvent/OSSession OSOutcomeEvent::SessionFromString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OSOutcomeEvent_SessionFromString_m52C6706CD3E9689F188DDD625AB39B35C5B7D713 (OSOutcomeEvent_tA0383B5CF8F2466567F3E15AA97710870875535D * __this, String_t* ___session0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0D889D11C6E8778B08365EED155A5049B9BB9413);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral89F72ADA2A5007125CC0F6835664693ADBCCE81E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE6ECEC24C270F38E763B608B89E674B8ED03DA0E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// session = session.ToLower();
		String_t* L_0 = ___session0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = String_ToLower_m7875A49FE166D0A68F3F6B6E70C0C056EBEFD31D(L_0, /*hidden argument*/NULL);
		___session0 = L_1;
		// if (session.Equals("direct"))
		String_t* L_2 = ___session0;
		NullCheck(L_2);
		bool L_3;
		L_3 = String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D(L_2, _stringLiteral89F72ADA2A5007125CC0F6835664693ADBCCE81E, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0017;
		}
	}
	{
		// return OSSession.DIRECT;
		return (int32_t)(0);
	}

IL_0017:
	{
		// else if (session.Equals("indirect"))
		String_t* L_4 = ___session0;
		NullCheck(L_4);
		bool L_5;
		L_5 = String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D(L_4, _stringLiteralE6ECEC24C270F38E763B608B89E674B8ED03DA0E, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0026;
		}
	}
	{
		// return OSSession.INDIRECT;
		return (int32_t)(1);
	}

IL_0026:
	{
		// else if (session.Equals("unattributed"))
		String_t* L_6 = ___session0;
		NullCheck(L_6);
		bool L_7;
		L_7 = String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D(L_6, _stringLiteral0D889D11C6E8778B08365EED155A5049B9BB9413, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0035;
		}
	}
	{
		// return OSSession.UNATTRIBUTED;
		return (int32_t)(2);
	}

IL_0035:
	{
		// return OSSession.DISABLED;
		return (int32_t)(3);
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
// System.Void OSPermissionState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OSPermissionState__ctor_m567E92D0F4D04184027BF927DE3299FB91D5144A (OSPermissionState_tCBAFAF68101221797E344D4C443CBCD374C4B754 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void OSPermissionStateChanges::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OSPermissionStateChanges__ctor_m4BC5B6EC0A425A3D33F99EB7E7BBCA2866A9CFE0 (OSPermissionStateChanges_t1B014D5332A17B2F12B7B9B981B61A08AB8FDCF8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OSStateChanges_1__ctor_m2200C199AFE9F03327D9E335914783CC2AB5B625_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		OSStateChanges_1__ctor_m2200C199AFE9F03327D9E335914783CC2AB5B625(__this, /*hidden argument*/OSStateChanges_1__ctor_m2200C199AFE9F03327D9E335914783CC2AB5B625_RuntimeMethod_var);
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
// System.Void OSPermissionSubscriptionState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OSPermissionSubscriptionState__ctor_mDCA70F367EC97F3013DC5ECA3E13DF21AE297DA2 (OSPermissionSubscriptionState_t7BCEA446B237598B727E00B8D8F4DBC11DEC9B72 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void OSSubscriptionState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OSSubscriptionState__ctor_m3FE6064F2CF776EAA8F7310CC5A7D7AE7B18D398 (OSSubscriptionState_t5D2F2C11D6193A8FAE88B9785FED7355C3CAB1D7 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void OSSubscriptionStateChanges::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OSSubscriptionStateChanges__ctor_mFAB047B779BEA67235CDCB81D82C40541EAE4B3D (OSSubscriptionStateChanges_t80801EC51BCF40EDC399FB2C2658111539658213 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OSStateChanges_1__ctor_m188DA2BB9E6C45BEDD5F669FE43B35A6512F2CC7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		OSStateChanges_1__ctor_m188DA2BB9E6C45BEDD5F669FE43B35A6512F2CC7(__this, /*hidden argument*/OSStateChanges_1__ctor_m188DA2BB9E6C45BEDD5F669FE43B35A6512F2CC7_RuntimeMethod_var);
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
// System.Void OneSignal::add_permissionObserver(OneSignal/PermissionObservable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneSignal_add_permissionObserver_m2F2F4236334C0FBF0E85C34108E55849B9D5CF57 (PermissionObservable_tAD0961762662CFBE5C5C21B4F7B44816689D232D * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PermissionObservable_tAD0961762662CFBE5C5C21B4F7B44816689D232D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (oneSignalPlatform != null)
		IL2CPP_RUNTIME_CLASS_INIT(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var))->get_oneSignalPlatform_16();
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		// internalPermissionObserver += value;
		IL2CPP_RUNTIME_CLASS_INIT(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var);
		PermissionObservable_tAD0961762662CFBE5C5C21B4F7B44816689D232D * L_1 = ((OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var))->get_internalPermissionObserver_6();
		PermissionObservable_tAD0961762662CFBE5C5C21B4F7B44816689D232D * L_2 = ___value0;
		Delegate_t * L_3;
		L_3 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_1, L_2, /*hidden argument*/NULL);
		((OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var))->set_internalPermissionObserver_6(((PermissionObservable_tAD0961762662CFBE5C5C21B4F7B44816689D232D *)CastclassSealed((RuntimeObject*)L_3, PermissionObservable_tAD0961762662CFBE5C5C21B4F7B44816689D232D_il2cpp_TypeInfo_var)));
		// addPermissionObserver();
		OneSignal_addPermissionObserver_mF94547770851AD11FD794CC04296CE10AFB8172D(/*hidden argument*/NULL);
	}

IL_0021:
	{
		// }
		return;
	}
}
// System.Void OneSignal::remove_permissionObserver(OneSignal/PermissionObservable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneSignal_remove_permissionObserver_mC2CA2A2BA58DE4DBEFAAE657C114510864D0698F (PermissionObservable_tAD0961762662CFBE5C5C21B4F7B44816689D232D * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IOneSignalPlatform_t161D92077EBE8503720EE7A41E171D69406AAF68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PermissionObservable_tAD0961762662CFBE5C5C21B4F7B44816689D232D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (oneSignalPlatform != null)
		IL2CPP_RUNTIME_CLASS_INIT(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var))->get_oneSignalPlatform_16();
		if (!L_0)
		{
			goto IL_0040;
		}
	}
	{
		// internalPermissionObserver -= value;
		IL2CPP_RUNTIME_CLASS_INIT(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var);
		PermissionObservable_tAD0961762662CFBE5C5C21B4F7B44816689D232D * L_1 = ((OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var))->get_internalPermissionObserver_6();
		PermissionObservable_tAD0961762662CFBE5C5C21B4F7B44816689D232D * L_2 = ___value0;
		Delegate_t * L_3;
		L_3 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_1, L_2, /*hidden argument*/NULL);
		((OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var))->set_internalPermissionObserver_6(((PermissionObservable_tAD0961762662CFBE5C5C21B4F7B44816689D232D *)CastclassSealed((RuntimeObject*)L_3, PermissionObservable_tAD0961762662CFBE5C5C21B4F7B44816689D232D_il2cpp_TypeInfo_var)));
		// if (addedPermissionObserver && internalPermissionObserver.GetInvocationList().Length == 0)
		bool L_4 = ((OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var))->get_addedPermissionObserver_7();
		if (!L_4)
		{
			goto IL_0040;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var);
		PermissionObservable_tAD0961762662CFBE5C5C21B4F7B44816689D232D * L_5 = ((OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var))->get_internalPermissionObserver_6();
		NullCheck(L_5);
		DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* L_6;
		L_6 = VirtualFuncInvoker0< DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* >::Invoke(9 /* System.Delegate[] System.Delegate::GetInvocationList() */, L_5);
		NullCheck(L_6);
		if ((((RuntimeArray*)L_6)->max_length))
		{
			goto IL_0040;
		}
	}
	{
		// addedPermissionObserver = false;
		IL2CPP_RUNTIME_CLASS_INIT(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var);
		((OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var))->set_addedPermissionObserver_7((bool)0);
		// oneSignalPlatform.RemovePermissionObserver();
		RuntimeObject* L_7 = ((OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var))->get_oneSignalPlatform_16();
		NullCheck(L_7);
		InterfaceActionInvoker0::Invoke(24 /* System.Void IOneSignalPlatform::RemovePermissionObserver() */, IOneSignalPlatform_t161D92077EBE8503720EE7A41E171D69406AAF68_il2cpp_TypeInfo_var, L_7);
	}

IL_0040:
	{
		// }
		return;
	}
}
// System.Void OneSignal::addPermissionObserver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneSignal_addPermissionObserver_mF94547770851AD11FD794CC04296CE10AFB8172D (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IOneSignalPlatform_t161D92077EBE8503720EE7A41E171D69406AAF68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!addedPermissionObserver && internalPermissionObserver != null &&
		//     internalPermissionObserver.GetInvocationList().Length > 0)
		IL2CPP_RUNTIME_CLASS_INIT(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var);
		bool L_0 = ((OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var))->get_addedPermissionObserver_7();
		if (L_0)
		{
			goto IL_002b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var);
		PermissionObservable_tAD0961762662CFBE5C5C21B4F7B44816689D232D * L_1 = ((OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var))->get_internalPermissionObserver_6();
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var);
		PermissionObservable_tAD0961762662CFBE5C5C21B4F7B44816689D232D * L_2 = ((OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var))->get_internalPermissionObserver_6();
		NullCheck(L_2);
		DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* L_3;
		L_3 = VirtualFuncInvoker0< DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* >::Invoke(9 /* System.Delegate[] System.Delegate::GetInvocationList() */, L_2);
		NullCheck(L_3);
		if (!(((RuntimeArray*)L_3)->max_length))
		{
			goto IL_002b;
		}
	}
	{
		// addedPermissionObserver = true;
		IL2CPP_RUNTIME_CLASS_INIT(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var);
		((OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var))->set_addedPermissionObserver_7((bool)1);
		// oneSignalPlatform.AddPermissionObserver();
		RuntimeObject* L_4 = ((OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var))->get_oneSignalPlatform_16();
		NullCheck(L_4);
		InterfaceActionInvoker0::Invoke(23 /* System.Void IOneSignalPlatform::AddPermissionObserver() */, IOneSignalPlatform_t161D92077EBE8503720EE7A41E171D69406AAF68_il2cpp_TypeInfo_var, L_4);
	}

IL_002b:
	{
		// }
		return;
	}
}
// System.Void OneSignal::add_subscriptionObserver(OneSignal/SubscriptionObservable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneSignal_add_subscriptionObserver_mEF3E333F71419EC5F43DCC36437FBFDB0F93F6AE (SubscriptionObservable_tAC9D68D12698867A849F8DBEDF5E81CEF8353BBB * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubscriptionObservable_tAC9D68D12698867A849F8DBEDF5E81CEF8353BBB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (oneSignalPlatform != null)
		IL2CPP_RUNTIME_CLASS_INIT(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var))->get_oneSignalPlatform_16();
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		// internalSubscriptionObserver += value;
		IL2CPP_RUNTIME_CLASS_INIT(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var);
		SubscriptionObservable_tAC9D68D12698867A849F8DBEDF5E81CEF8353BBB * L_1 = ((OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var))->get_internalSubscriptionObserver_8();
		SubscriptionObservable_tAC9D68D12698867A849F8DBEDF5E81CEF8353BBB * L_2 = ___value0;
		Delegate_t * L_3;
		L_3 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_1, L_2, /*hidden argument*/NULL);
		((OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var))->set_internalSubscriptionObserver_8(((SubscriptionObservable_tAC9D68D12698867A849F8DBEDF5E81CEF8353BBB *)CastclassSealed((RuntimeObject*)L_3, SubscriptionObservable_tAC9D68D12698867A849F8DBEDF5E81CEF8353BBB_il2cpp_TypeInfo_var)));
		// addSubscriptionObserver();
		OneSignal_addSubscriptionObserver_m89CFADF08E893A5699A2A55B6F7BC9B67A1E952F(/*hidden argument*/NULL);
	}

IL_0021:
	{
		// }
		return;
	}
}
// System.Void OneSignal::remove_subscriptionObserver(OneSignal/SubscriptionObservable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneSignal_remove_subscriptionObserver_m72108111E14D7B9F4C968F3FC6F00F8383B44B87 (SubscriptionObservable_tAC9D68D12698867A849F8DBEDF5E81CEF8353BBB * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IOneSignalPlatform_t161D92077EBE8503720EE7A41E171D69406AAF68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubscriptionObservable_tAC9D68D12698867A849F8DBEDF5E81CEF8353BBB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (oneSignalPlatform != null)
		IL2CPP_RUNTIME_CLASS_INIT(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var))->get_oneSignalPlatform_16();
		if (!L_0)
		{
			goto IL_003a;
		}
	}
	{
		// internalSubscriptionObserver -= value;
		IL2CPP_RUNTIME_CLASS_INIT(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var);
		SubscriptionObservable_tAC9D68D12698867A849F8DBEDF5E81CEF8353BBB * L_1 = ((OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var))->get_internalSubscriptionObserver_8();
		SubscriptionObservable_tAC9D68D12698867A849F8DBEDF5E81CEF8353BBB * L_2 = ___value0;
		Delegate_t * L_3;
		L_3 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_1, L_2, /*hidden argument*/NULL);
		((OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var))->set_internalSubscriptionObserver_8(((SubscriptionObservable_tAC9D68D12698867A849F8DBEDF5E81CEF8353BBB *)CastclassSealed((RuntimeObject*)L_3, SubscriptionObservable_tAC9D68D12698867A849F8DBEDF5E81CEF8353BBB_il2cpp_TypeInfo_var)));
		// if (addedSubscriptionObserver && internalSubscriptionObserver.GetInvocationList().Length == 0)
		bool L_4 = ((OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var))->get_addedSubscriptionObserver_9();
		if (!L_4)
		{
			goto IL_003a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var);
		SubscriptionObservable_tAC9D68D12698867A849F8DBEDF5E81CEF8353BBB * L_5 = ((OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var))->get_internalSubscriptionObserver_8();
		NullCheck(L_5);
		DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* L_6;
		L_6 = VirtualFuncInvoker0< DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* >::Invoke(9 /* System.Delegate[] System.Delegate::GetInvocationList() */, L_5);
		NullCheck(L_6);
		if ((((RuntimeArray*)L_6)->max_length))
		{
			goto IL_003a;
		}
	}
	{
		// oneSignalPlatform.RemoveSubscriptionObserver();
		IL2CPP_RUNTIME_CLASS_INIT(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var);
		RuntimeObject* L_7 = ((OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var))->get_oneSignalPlatform_16();
		NullCheck(L_7);
		InterfaceActionInvoker0::Invoke(26 /* System.Void IOneSignalPlatform::RemoveSubscriptionObserver() */, IOneSignalPlatform_t161D92077EBE8503720EE7A41E171D69406AAF68_il2cpp_TypeInfo_var, L_7);
	}

IL_003a:
	{
		// }
		return;
	}
}
// System.Void OneSignal::addSubscriptionObserver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneSignal_addSubscriptionObserver_m89CFADF08E893A5699A2A55B6F7BC9B67A1E952F (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IOneSignalPlatform_t161D92077EBE8503720EE7A41E171D69406AAF68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!addedSubscriptionObserver && internalSubscriptionObserver != null &&
		//     internalSubscriptionObserver.GetInvocationList().Length > 0)
		IL2CPP_RUNTIME_CLASS_INIT(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var);
		bool L_0 = ((OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var))->get_addedSubscriptionObserver_9();
		if (L_0)
		{
			goto IL_002b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var);
		SubscriptionObservable_tAC9D68D12698867A849F8DBEDF5E81CEF8353BBB * L_1 = ((OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var))->get_internalSubscriptionObserver_8();
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var);
		SubscriptionObservable_tAC9D68D12698867A849F8DBEDF5E81CEF8353BBB * L_2 = ((OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var))->get_internalSubscriptionObserver_8();
		NullCheck(L_2);
		DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* L_3;
		L_3 = VirtualFuncInvoker0< DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* >::Invoke(9 /* System.Delegate[] System.Delegate::GetInvocationList() */, L_2);
		NullCheck(L_3);
		if (!(((RuntimeArray*)L_3)->max_length))
		{
			goto IL_002b;
		}
	}
	{
		// addedSubscriptionObserver = true;
		IL2CPP_RUNTIME_CLASS_INIT(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var);
		((OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var))->set_addedSubscriptionObserver_9((bool)1);
		// oneSignalPlatform.AddSubscriptionObserver();
		RuntimeObject* L_4 = ((OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var))->get_oneSignalPlatform_16();
		NullCheck(L_4);
		InterfaceActionInvoker0::Invoke(25 /* System.Void IOneSignalPlatform::AddSubscriptionObserver() */, IOneSignalPlatform_t161D92077EBE8503720EE7A41E171D69406AAF68_il2cpp_TypeInfo_var, L_4);
	}

IL_002b:
	{
		// }
		return;
	}
}
// System.Void OneSignal::add_emailSubscriptionObserver(OneSignal/EmailSubscriptionObservable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneSignal_add_emailSubscriptionObserver_mEB3B1F0F56234DBD4AF53096BE3674FC04E42F4C (EmailSubscriptionObservable_t0BE190ED78D890F32B3CD78351CB03CDE6743C4A * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EmailSubscriptionObservable_t0BE190ED78D890F32B3CD78351CB03CDE6743C4A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (oneSignalPlatform != null)
		IL2CPP_RUNTIME_CLASS_INIT(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var))->get_oneSignalPlatform_16();
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		// internalEmailSubscriptionObserver += value;
		IL2CPP_RUNTIME_CLASS_INIT(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var);
		EmailSubscriptionObservable_t0BE190ED78D890F32B3CD78351CB03CDE6743C4A * L_1 = ((OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var))->get_internalEmailSubscriptionObserver_10();
		EmailSubscriptionObservable_t0BE190ED78D890F32B3CD78351CB03CDE6743C4A * L_2 = ___value0;
		Delegate_t * L_3;
		L_3 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_1, L_2, /*hidden argument*/NULL);
		((OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var))->set_internalEmailSubscriptionObserver_10(((EmailSubscriptionObservable_t0BE190ED78D890F32B3CD78351CB03CDE6743C4A *)CastclassSealed((RuntimeObject*)L_3, EmailSubscriptionObservable_t0BE190ED78D890F32B3CD78351CB03CDE6743C4A_il2cpp_TypeInfo_var)));
		// addEmailSubscriptionObserver();
		OneSignal_addEmailSubscriptionObserver_mA2659A7A57140EEC0D257A0F6B336A3886F1A2BF(/*hidden argument*/NULL);
	}

IL_0021:
	{
		// }
		return;
	}
}
// System.Void OneSignal::remove_emailSubscriptionObserver(OneSignal/EmailSubscriptionObservable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneSignal_remove_emailSubscriptionObserver_mF717E63D4E5CC4AA9CEF5281412451B757BB7B45 (EmailSubscriptionObservable_t0BE190ED78D890F32B3CD78351CB03CDE6743C4A * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EmailSubscriptionObservable_t0BE190ED78D890F32B3CD78351CB03CDE6743C4A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IOneSignalPlatform_t161D92077EBE8503720EE7A41E171D69406AAF68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (oneSignalPlatform != null)
		IL2CPP_RUNTIME_CLASS_INIT(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var))->get_oneSignalPlatform_16();
		if (!L_0)
		{
			goto IL_003a;
		}
	}
	{
		// internalEmailSubscriptionObserver -= value;
		IL2CPP_RUNTIME_CLASS_INIT(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var);
		EmailSubscriptionObservable_t0BE190ED78D890F32B3CD78351CB03CDE6743C4A * L_1 = ((OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var))->get_internalEmailSubscriptionObserver_10();
		EmailSubscriptionObservable_t0BE190ED78D890F32B3CD78351CB03CDE6743C4A * L_2 = ___value0;
		Delegate_t * L_3;
		L_3 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_1, L_2, /*hidden argument*/NULL);
		((OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var))->set_internalEmailSubscriptionObserver_10(((EmailSubscriptionObservable_t0BE190ED78D890F32B3CD78351CB03CDE6743C4A *)CastclassSealed((RuntimeObject*)L_3, EmailSubscriptionObservable_t0BE190ED78D890F32B3CD78351CB03CDE6743C4A_il2cpp_TypeInfo_var)));
		// if (addedEmailSubscriptionObserver &&
		//     internalEmailSubscriptionObserver.GetInvocationList().Length == 0)
		bool L_4 = ((OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var))->get_addedEmailSubscriptionObserver_11();
		if (!L_4)
		{
			goto IL_003a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var);
		EmailSubscriptionObservable_t0BE190ED78D890F32B3CD78351CB03CDE6743C4A * L_5 = ((OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var))->get_internalEmailSubscriptionObserver_10();
		NullCheck(L_5);
		DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* L_6;
		L_6 = VirtualFuncInvoker0< DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* >::Invoke(9 /* System.Delegate[] System.Delegate::GetInvocationList() */, L_5);
		NullCheck(L_6);
		if ((((RuntimeArray*)L_6)->max_length))
		{
			goto IL_003a;
		}
	}
	{
		// oneSignalPlatform.RemoveEmailSubscriptionObserver();
		IL2CPP_RUNTIME_CLASS_INIT(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var);
		RuntimeObject* L_7 = ((OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var))->get_oneSignalPlatform_16();
		NullCheck(L_7);
		InterfaceActionInvoker0::Invoke(28 /* System.Void IOneSignalPlatform::RemoveEmailSubscriptionObserver() */, IOneSignalPlatform_t161D92077EBE8503720EE7A41E171D69406AAF68_il2cpp_TypeInfo_var, L_7);
	}

IL_003a:
	{
		// }
		return;
	}
}
// System.Void OneSignal::addEmailSubscriptionObserver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneSignal_addEmailSubscriptionObserver_mA2659A7A57140EEC0D257A0F6B336A3886F1A2BF (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IOneSignalPlatform_t161D92077EBE8503720EE7A41E171D69406AAF68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!addedEmailSubscriptionObserver && internalEmailSubscriptionObserver != null &&
		//     internalEmailSubscriptionObserver.GetInvocationList().Length > 0)
		IL2CPP_RUNTIME_CLASS_INIT(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var);
		bool L_0 = ((OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var))->get_addedEmailSubscriptionObserver_11();
		if (L_0)
		{
			goto IL_002b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var);
		EmailSubscriptionObservable_t0BE190ED78D890F32B3CD78351CB03CDE6743C4A * L_1 = ((OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var))->get_internalEmailSubscriptionObserver_10();
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var);
		EmailSubscriptionObservable_t0BE190ED78D890F32B3CD78351CB03CDE6743C4A * L_2 = ((OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var))->get_internalEmailSubscriptionObserver_10();
		NullCheck(L_2);
		DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* L_3;
		L_3 = VirtualFuncInvoker0< DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* >::Invoke(9 /* System.Delegate[] System.Delegate::GetInvocationList() */, L_2);
		NullCheck(L_3);
		if (!(((RuntimeArray*)L_3)->max_length))
		{
			goto IL_002b;
		}
	}
	{
		// addedEmailSubscriptionObserver = true;
		IL2CPP_RUNTIME_CLASS_INIT(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var);
		((OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var))->set_addedEmailSubscriptionObserver_11((bool)1);
		// oneSignalPlatform.AddEmailSubscriptionObserver();
		RuntimeObject* L_4 = ((OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var))->get_oneSignalPlatform_16();
		NullCheck(L_4);
		InterfaceActionInvoker0::Invoke(27 /* System.Void IOneSignalPlatform::AddEmailSubscriptionObserver() */, IOneSignalPlatform_t161D92077EBE8503720EE7A41E171D69406AAF68_il2cpp_TypeInfo_var, L_4);
	}

IL_002b:
	{
		// }
		return;
	}
}
// OneSignal/UnityBuilder OneSignal::StartInit(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityBuilder_tDBFC88D88033BADCF56F27E95359EF77CF9ADFED * OneSignal_StartInit_mCE355FA4323A4ED21EF56D72469CE02D3F59EEA7 (String_t* ___appID0, String_t* ___googleProjectNumber1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OneSignalSettings_t6B52AD1BB70C27A333C9FE47B84C9C93FE594CCF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityBuilder_tDBFC88D88033BADCF56F27E95359EF77CF9ADFED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UnityBuilder_tDBFC88D88033BADCF56F27E95359EF77CF9ADFED * G_B4_0 = NULL;
	UnityBuilder_tDBFC88D88033BADCF56F27E95359EF77CF9ADFED * G_B3_0 = NULL;
	String_t* G_B5_0 = NULL;
	UnityBuilder_tDBFC88D88033BADCF56F27E95359EF77CF9ADFED * G_B5_1 = NULL;
	{
		// if (builder is null) builder = new UnityBuilder();
		IL2CPP_RUNTIME_CLASS_INIT(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var);
		UnityBuilder_tDBFC88D88033BADCF56F27E95359EF77CF9ADFED * L_0 = ((OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var))->get_builder_14();
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		// if (builder is null) builder = new UnityBuilder();
		UnityBuilder_tDBFC88D88033BADCF56F27E95359EF77CF9ADFED * L_1 = (UnityBuilder_tDBFC88D88033BADCF56F27E95359EF77CF9ADFED *)il2cpp_codegen_object_new(UnityBuilder_tDBFC88D88033BADCF56F27E95359EF77CF9ADFED_il2cpp_TypeInfo_var);
		UnityBuilder__ctor_m725634C7F0B07CC4E671B1F1394760E11168EB0C(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var);
		((OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var))->set_builder_14(L_1);
	}

IL_0011:
	{
		// builder.appID = string.IsNullOrEmpty(appID)
		//     ? OneSignalSettings.Instance.ApplicationId
		//     : appID;
		IL2CPP_RUNTIME_CLASS_INIT(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var);
		UnityBuilder_tDBFC88D88033BADCF56F27E95359EF77CF9ADFED * L_2 = ((OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var))->get_builder_14();
		String_t* L_3 = ___appID0;
		bool L_4;
		L_4 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_3, /*hidden argument*/NULL);
		G_B3_0 = L_2;
		if (L_4)
		{
			G_B4_0 = L_2;
			goto IL_0021;
		}
	}
	{
		String_t* L_5 = ___appID0;
		G_B5_0 = L_5;
		G_B5_1 = G_B3_0;
		goto IL_002b;
	}

IL_0021:
	{
		IL2CPP_RUNTIME_CLASS_INIT(OneSignalSettings_t6B52AD1BB70C27A333C9FE47B84C9C93FE594CCF_il2cpp_TypeInfo_var);
		OneSignalSettings_t6B52AD1BB70C27A333C9FE47B84C9C93FE594CCF * L_6;
		L_6 = OneSignalSettings_get_Instance_mDCEA4F3B9EBB5CD5F3F11C3634CA5B91FFFA1DFB(/*hidden argument*/NULL);
		NullCheck(L_6);
		String_t* L_7 = L_6->get_ApplicationId_5();
		G_B5_0 = L_7;
		G_B5_1 = G_B4_0;
	}

IL_002b:
	{
		NullCheck(G_B5_1);
		G_B5_1->set_appID_0(G_B5_0);
		// if (string.IsNullOrEmpty(builder.appID))
		IL2CPP_RUNTIME_CLASS_INIT(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var);
		UnityBuilder_tDBFC88D88033BADCF56F27E95359EF77CF9ADFED * L_8 = ((OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var))->get_builder_14();
		NullCheck(L_8);
		String_t* L_9 = L_8->get_appID_0();
		bool L_10;
		L_10 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0051;
		}
	}
	{
		// throw new ArgumentException("Application id can not be empty. " +
		//                             "Provide validate app id via argument or settings window", nameof(appID));
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_11 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_11, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1DAA3017CF52DD3E068D9EECEB45A4E48C5C84AC)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralEF92001FB995FAEADA46CAAC674F539A98DA3DAB)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OneSignal_StartInit_mCE355FA4323A4ED21EF56D72469CE02D3F59EEA7_RuntimeMethod_var)));
	}

IL_0051:
	{
		// builder.googleProjectNumber = googleProjectNumber;
		IL2CPP_RUNTIME_CLASS_INIT(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var);
		UnityBuilder_tDBFC88D88033BADCF56F27E95359EF77CF9ADFED * L_12 = ((OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var))->get_builder_14();
		String_t* L_13 = ___googleProjectNumber1;
		NullCheck(L_12);
		L_12->set_googleProjectNumber_1(L_13);
		// return builder;
		UnityBuilder_tDBFC88D88033BADCF56F27E95359EF77CF9ADFED * L_14 = ((OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var))->get_builder_14();
		return L_14;
	}
}
// System.Void OneSignal::RegisterPlatform(IOneSignalPlatform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneSignal_RegisterPlatform_m234A03E0BC37C49B0967D5EA1C5A1CC4DB730D4C (RuntimeObject* ___platform0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (oneSignalPlatform != null)
		IL2CPP_RUNTIME_CLASS_INIT(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var))->get_oneSignalPlatform_16();
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		// throw new InvalidOperationException(
		//     $"{nameof(oneSignalPlatform)} has already been initialized as {oneSignalPlatform}.");
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var)));
		RuntimeObject* L_1 = ((OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var))))->get_oneSignalPlatform_16();
		String_t* L_2;
		L_2 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA3B1199C309A44E7A09BF65AEC370CFC7C45CA9E)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD9AFFD73A6E1A8B98370EE89588C726B632B5A95)), L_1, /*hidden argument*/NULL);
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_3 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_3, L_2, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OneSignal_RegisterPlatform_m234A03E0BC37C49B0967D5EA1C5A1CC4DB730D4C_RuntimeMethod_var)));
	}

IL_0021:
	{
		// oneSignalPlatform = platform;
		RuntimeObject* L_4 = ___platform0;
		IL2CPP_RUNTIME_CLASS_INIT(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var);
		((OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var))->set_oneSignalPlatform_16(L_4);
		// }
		return;
	}
}
// System.Void OneSignal::LogDebug(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneSignal_LogDebug_mCC268EBDC2B876D27A2FB9CF66A6E50BAC6FD6C0 (String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF183BDC1C5F166FCCED41C9844FCF55171B6B91D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (logLevel >= LOG_LEVEL.DEBUG)
		IL2CPP_RUNTIME_CLASS_INIT(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var);
		int32_t L_0 = ((OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var))->get_logLevel_17();
		if ((((int32_t)L_0) < ((int32_t)5)))
		{
			goto IL_0018;
		}
	}
	{
		// Debug.Log($"{nameof(OneSignal)}: {message}");
		String_t* L_1 = ___message0;
		String_t* L_2;
		L_2 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralF183BDC1C5F166FCCED41C9844FCF55171B6B91D, L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_2, /*hidden argument*/NULL);
	}

IL_0018:
	{
		// }
		return;
	}
}
// System.Void OneSignal::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneSignal_Init_m756C1C4D540B10908DD87EDC00BB106549112B0F (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m210799E1C2576446641CA24C1D9463F791556112_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t521306497EEE741202CFF9F69FB533CCAD8C8ACD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisOneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_mCE3E2304529B1DEDC61A6277E04BB0999833151B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IOneSignalPlatform_t161D92077EBE8503720EE7A41E171D69406AAF68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0165CD426FD0E40D5DD836E735AEDA7B705A6307);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B595A6FA2BAB4242CE1D3ED6E8149603F48C57F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (delegates == null)
		IL2CPP_RUNTIME_CLASS_INIT(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var);
		Dictionary_2_t521306497EEE741202CFF9F69FB533CCAD8C8ACD * L_0 = ((OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var))->get_delegates_4();
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		// delegates = new Dictionary<string, Delegate>();
		Dictionary_2_t521306497EEE741202CFF9F69FB533CCAD8C8ACD * L_1 = (Dictionary_2_t521306497EEE741202CFF9F69FB533CCAD8C8ACD *)il2cpp_codegen_object_new(Dictionary_2_t521306497EEE741202CFF9F69FB533CCAD8C8ACD_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m210799E1C2576446641CA24C1D9463F791556112(L_1, /*hidden argument*/Dictionary_2__ctor_m210799E1C2576446641CA24C1D9463F791556112_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var);
		((OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var))->set_delegates_4(L_1);
	}

IL_0011:
	{
		// if (builder == null)
		IL2CPP_RUNTIME_CLASS_INIT(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var);
		UnityBuilder_tDBFC88D88033BADCF56F27E95359EF77CF9ADFED * L_2 = ((OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var))->get_builder_14();
		if (L_2)
		{
			goto IL_0023;
		}
	}
	{
		// throw new InvalidOperationException($"{nameof(builder)} can not be null.");
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_3 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD5EEAB289A4A68C76A67688DA8452FC0FC483492)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OneSignal_Init_m756C1C4D540B10908DD87EDC00BB106549112B0F_RuntimeMethod_var)));
	}

IL_0023:
	{
		// if (oneSignalPlatform == null)
		IL2CPP_RUNTIME_CLASS_INIT(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var);
		RuntimeObject* L_4 = ((OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var))->get_oneSignalPlatform_16();
		if (L_4)
		{
			goto IL_0044;
		}
	}
	{
		// throw new InvalidOperationException($"{Application.platform} platform is not supported by OneSignal.");
		int32_t L_5;
		L_5 = Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4(/*hidden argument*/NULL);
		int32_t L_6 = L_5;
		RuntimeObject * L_7 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimePlatform_tB8798C800FD9810C0FE2B7D2F2A0A3979D239065_il2cpp_TypeInfo_var)), &L_6);
		String_t* L_8;
		L_8 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD42CF38C169EF48A21F4E8340A2B67394539D49C)), L_7, /*hidden argument*/NULL);
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_9 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_9, L_8, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OneSignal_Init_m756C1C4D540B10908DD87EDC00BB106549112B0F_RuntimeMethod_var)));
	}

IL_0044:
	{
		// LogDebug($"Initializing {oneSignalPlatform} platform.");
		IL2CPP_RUNTIME_CLASS_INIT(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var);
		RuntimeObject* L_10 = ((OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var))->get_oneSignalPlatform_16();
		String_t* L_11;
		L_11 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteral1B595A6FA2BAB4242CE1D3ED6E8149603F48C57F, L_10, /*hidden argument*/NULL);
		OneSignal_LogDebug_mCC268EBDC2B876D27A2FB9CF66A6E50BAC6FD6C0(L_11, /*hidden argument*/NULL);
		// oneSignalPlatform.Init();
		RuntimeObject* L_12 = ((OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var))->get_oneSignalPlatform_16();
		NullCheck(L_12);
		InterfaceActionInvoker0::Invoke(0 /* System.Void IOneSignalPlatform::Init() */, IOneSignalPlatform_t161D92077EBE8503720EE7A41E171D69406AAF68_il2cpp_TypeInfo_var, L_12);
		// if (!Application.isEditor)
		bool L_13;
		L_13 = Application_get_isEditor_m7367DDB72F13E4846E8EB76FFAAACA84840BE921(/*hidden argument*/NULL);
		if (L_13)
		{
			goto IL_007f;
		}
	}
	{
		// var go = new GameObject(GameObjectName);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14 = (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)il2cpp_codegen_object_new(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		GameObject__ctor_mDF8BF31EAE3E03F24421531B25FB4BEDB7C87144(L_14, _stringLiteral0165CD426FD0E40D5DD836E735AEDA7B705A6307, /*hidden argument*/NULL);
		// go.AddComponent<OneSignal>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_15 = L_14;
		NullCheck(L_15);
		OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C * L_16;
		L_16 = GameObject_AddComponent_TisOneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_mCE3E2304529B1DEDC61A6277E04BB0999833151B(L_15, /*hidden argument*/GameObject_AddComponent_TisOneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_mCE3E2304529B1DEDC61A6277E04BB0999833151B_RuntimeMethod_var);
		// DontDestroyOnLoad(go);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m03007A68ABBA4CCD8C27B944964983395E7640F9(L_15, /*hidden argument*/NULL);
	}

IL_007f:
	{
		// addPermissionObserver();
		IL2CPP_RUNTIME_CLASS_INIT(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var);
		OneSignal_addPermissionObserver_mF94547770851AD11FD794CC04296CE10AFB8172D(/*hidden argument*/NULL);
		// addSubscriptionObserver();
		OneSignal_addSubscriptionObserver_m89CFADF08E893A5699A2A55B6F7BC9B67A1E952F(/*hidden argument*/NULL);
		// }
		return;
	}
}
// OneSignal/OSInFocusDisplayOption OneSignal::get_inFocusDisplayType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OneSignal_get_inFocusDisplayType_mE0666C0E7CE43F153D2A26E2AFD11F0FB5F17B69 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return _inFocusDisplayType; }
		IL2CPP_RUNTIME_CLASS_INIT(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var);
		int32_t L_0 = ((OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var))->get__inFocusDisplayType_20();
		return L_0;
	}
}
// System.Void OneSignal::set_inFocusDisplayType(OneSignal/OSInFocusDisplayOption)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneSignal_set_inFocusDisplayType_m084C9176B6C93E57100FC5848CA97BC720A4A633 (int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IOneSignalPlatform_t161D92077EBE8503720EE7A41E171D69406AAF68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _inFocusDisplayType = value;
		int32_t L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var);
		((OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var))->set__inFocusDisplayType_20(L_0);
		// if (oneSignalPlatform != null)
		RuntimeObject* L_1 = ((OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var))->get_oneSignalPlatform_16();
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		// oneSignalPlatform.SetInFocusDisplaying(_inFocusDisplayType);
		IL2CPP_RUNTIME_CLASS_INIT(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var);
		RuntimeObject* L_2 = ((OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var))->get_oneSignalPlatform_16();
		int32_t L_3 = ((OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var))->get__inFocusDisplayType_20();
		NullCheck(L_2);
		InterfaceActionInvoker1< int32_t >::Invoke(17 /* System.Void IOneSignalPlatform::SetInFocusDisplaying(OneSignal/OSInFocusDisplayOption) */, IOneSignalPlatform_t161D92077EBE8503720EE7A41E171D69406AAF68_il2cpp_TypeInfo_var, L_2, L_3);
	}

IL_001c:
	{
		// }
		return;
	}
}
// System.Void OneSignal::SetLogLevel(OneSignal/LOG_LEVEL,OneSignal/LOG_LEVEL)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneSignal_SetLogLevel_m9324491D9B1DDEDD181453B17B1AA273DF915F3E (int32_t ___inLogLevel0, int32_t ___inVisualLevel1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// logLevel = inLogLevel;
		int32_t L_0 = ___inLogLevel0;
		IL2CPP_RUNTIME_CLASS_INIT(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var);
		((OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var))->set_logLevel_17(L_0);
		// visualLogLevel = inVisualLevel;
		int32_t L_1 = ___inVisualLevel1;
		((OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var))->set_visualLogLevel_18(L_1);
		// }
		return;
	}
}
// System.Void OneSignal::SetLocationShared(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneSignal_SetLocationShared_m98084A0239B29EABECD6BCAA07AEFF2202130D20 (bool ___shared0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IOneSignalPlatform_t161D92077EBE8503720EE7A41E171D69406AAF68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral64B0BC222D53600613D752142B4DCEB97CE29683);
		s_Il2CppMethodInitialized = true;
	}
	{
		// LogDebug("Called OneSignal.cs SetLocationShared");
		IL2CPP_RUNTIME_CLASS_INIT(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var);
		OneSignal_LogDebug_mCC268EBDC2B876D27A2FB9CF66A6E50BAC6FD6C0(_stringLiteral64B0BC222D53600613D752142B4DCEB97CE29683, /*hidden argument*/NULL);
		// oneSignalPlatform.SetLocationShared(shared);
		RuntimeObject* L_0 = ((OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var))->get_oneSignalPlatform_16();
		bool L_1 = ___shared0;
		NullCheck(L_0);
		InterfaceActionInvoker1< bool >::Invoke(13 /* System.Void IOneSignalPlatform::SetLocationShared(System.Boolean) */, IOneSignalPlatform_t161D92077EBE8503720EE7A41E171D69406AAF68_il2cpp_TypeInfo_var, L_0, L_1);
		// }
		return;
	}
}
// System.Void OneSignal::SendTag(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneSignal_SendTag_m1C5D597F997EBD115F2B901037CBFB4EFC4040E4 (String_t* ___tagName0, String_t* ___tagValue1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IOneSignalPlatform_t161D92077EBE8503720EE7A41E171D69406AAF68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// oneSignalPlatform.SendTag(tagName, tagValue);
		IL2CPP_RUNTIME_CLASS_INIT(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var))->get_oneSignalPlatform_16();
		String_t* L_1 = ___tagName0;
		String_t* L_2 = ___tagValue1;
		NullCheck(L_0);
		InterfaceActionInvoker2< String_t*, String_t* >::Invoke(3 /* System.Void IOneSignalPlatform::SendTag(System.String,System.String) */, IOneSignalPlatform_t161D92077EBE8503720EE7A41E171D69406AAF68_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		// }
		return;
	}
}
// System.Void OneSignal::SendTags(System.Collections.Generic.Dictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneSignal_SendTags_mCE5CDE6089CB368FC0C303F7DC4E30F1EBCDEE42 (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * ___tags0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IOneSignalPlatform_t161D92077EBE8503720EE7A41E171D69406AAF68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// oneSignalPlatform.SendTags(tags);
		IL2CPP_RUNTIME_CLASS_INIT(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var))->get_oneSignalPlatform_16();
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_1 = ___tags0;
		NullCheck(L_0);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(4 /* System.Void IOneSignalPlatform::SendTags(System.Collections.Generic.IDictionary`2<System.String,System.String>) */, IOneSignalPlatform_t161D92077EBE8503720EE7A41E171D69406AAF68_il2cpp_TypeInfo_var, L_0, L_1);
		// }
		return;
	}
}
// System.Void OneSignal::GetTags()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneSignal_GetTags_mC74C2D43B42A874852FBEF1A0FD13FED54CD8E7D (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IOneSignalPlatform_t161D92077EBE8503720EE7A41E171D69406AAF68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// oneSignalPlatform.GetTags(null);
		IL2CPP_RUNTIME_CLASS_INIT(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var))->get_oneSignalPlatform_16();
		NullCheck(L_0);
		InterfaceActionInvoker1< String_t* >::Invoke(5 /* System.Void IOneSignalPlatform::GetTags(System.String) */, IOneSignalPlatform_t161D92077EBE8503720EE7A41E171D69406AAF68_il2cpp_TypeInfo_var, L_0, (String_t*)NULL);
		// }
		return;
	}
}
// System.Void OneSignal::GetTags(OneSignal/TagsReceived)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneSignal_GetTags_m8B00BCE7E1F8AADE551D52F7A0BCB6C0F9F639B0 (TagsReceived_t7D5926BFB0FAC298A876D14D71495DE029E4A791 * ___inTagsReceivedDelegate0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m41347382F51428371DD0FF5A518052A6CC8C3A4F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IOneSignalPlatform_t161D92077EBE8503720EE7A41E171D69406AAF68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// string delegateGuid = OneSignalUnityUtils.GetNewGuid();
		String_t* L_0;
		L_0 = OneSignalUnityUtils_GetNewGuid_mE98FB8FC6067F7DA8AF1C46C9DA028581C037814(/*hidden argument*/NULL);
		V_0 = L_0;
		// delegates.Add(delegateGuid, inTagsReceivedDelegate);
		IL2CPP_RUNTIME_CLASS_INIT(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var);
		Dictionary_2_t521306497EEE741202CFF9F69FB533CCAD8C8ACD * L_1 = ((OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var))->get_delegates_4();
		String_t* L_2 = V_0;
		TagsReceived_t7D5926BFB0FAC298A876D14D71495DE029E4A791 * L_3 = ___inTagsReceivedDelegate0;
		NullCheck(L_1);
		Dictionary_2_Add_m41347382F51428371DD0FF5A518052A6CC8C3A4F(L_1, L_2, L_3, /*hidden argument*/Dictionary_2_Add_m41347382F51428371DD0FF5A518052A6CC8C3A4F_RuntimeMethod_var);
		// oneSignalPlatform.GetTags(delegateGuid);
		RuntimeObject* L_4 = ((OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var))->get_oneSignalPlatform_16();
		String_t* L_5 = V_0;
		NullCheck(L_4);
		InterfaceActionInvoker1< String_t* >::Invoke(5 /* System.Void IOneSignalPlatform::GetTags(System.String) */, IOneSignalPlatform_t161D92077EBE8503720EE7A41E171D69406AAF68_il2cpp_TypeInfo_var, L_4, L_5);
		// }
		return;
	}
}
// System.Void OneSignal::DeleteTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneSignal_DeleteTag_m94ABCEEC21B47C29B878A59E80AFE735D78A3D77 (String_t* ___key0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IOneSignalPlatform_t161D92077EBE8503720EE7A41E171D69406AAF68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// oneSignalPlatform.DeleteTag(key);
		IL2CPP_RUNTIME_CLASS_INIT(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var))->get_oneSignalPlatform_16();
		String_t* L_1 = ___key0;
		NullCheck(L_0);
		InterfaceActionInvoker1< String_t* >::Invoke(6 /* System.Void IOneSignalPlatform::DeleteTag(System.String) */, IOneSignalPlatform_t161D92077EBE8503720EE7A41E171D69406AAF68_il2cpp_TypeInfo_var, L_0, L_1);
		// }
		return;
	}
}
// System.Void OneSignal::DeleteTags(System.Collections.Generic.IList`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneSignal_DeleteTags_m2BF0EB88A6CB6977DF32513D137DC8DDF307CD1C (RuntimeObject* ___keys0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IOneSignalPlatform_t161D92077EBE8503720EE7A41E171D69406AAF68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// oneSignalPlatform.DeleteTags(keys);
		IL2CPP_RUNTIME_CLASS_INIT(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var))->get_oneSignalPlatform_16();
		RuntimeObject* L_1 = ___keys0;
		NullCheck(L_0);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(7 /* System.Void IOneSignalPlatform::DeleteTags(System.Collections.Generic.IList`1<System.String>) */, IOneSignalPlatform_t161D92077EBE8503720EE7A41E171D69406AAF68_il2cpp_TypeInfo_var, L_0, L_1);
		// }
		return;
	}
}
// System.Void OneSignal::RegisterForPushNotifications()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneSignal_RegisterForPushNotifications_mB9EB3EEAC02944FECD02D5C7AA3569AE67670202 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IOneSignalPlatform_t161D92077EBE8503720EE7A41E171D69406AAF68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// oneSignalPlatform.RegisterForPushNotifications();
		IL2CPP_RUNTIME_CLASS_INIT(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var))->get_oneSignalPlatform_16();
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(1 /* System.Void IOneSignalPlatform::RegisterForPushNotifications() */, IOneSignalPlatform_t161D92077EBE8503720EE7A41E171D69406AAF68_il2cpp_TypeInfo_var, L_0);
		// }
		return;
	}
}
// System.Void OneSignal::PromptForPushNotificationsWithUserResponse(OneSignal/PromptForPushNotificationsUserResponse)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneSignal_PromptForPushNotificationsWithUserResponse_mD80A75BB8F4387BCC612397BC3E0C7E8BEE1F566 (PromptForPushNotificationsUserResponse_t5508C614F3AB278D72FACCAD119F0F65792AB501 * ___inDelegate0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IOneSignalPlatform_t161D92077EBE8503720EE7A41E171D69406AAF68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// notificationUserResponseDelegate = inDelegate;
		PromptForPushNotificationsUserResponse_t5508C614F3AB278D72FACCAD119F0F65792AB501 * L_0 = ___inDelegate0;
		IL2CPP_RUNTIME_CLASS_INIT(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var);
		((OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var))->set_notificationUserResponseDelegate_5(L_0);
		// oneSignalPlatform.PromptForPushNotificationsWithUserResponse();
		RuntimeObject* L_1 = ((OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var))->get_oneSignalPlatform_16();
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(2 /* System.Void IOneSignalPlatform::PromptForPushNotificationsWithUserResponse() */, IOneSignalPlatform_t161D92077EBE8503720EE7A41E171D69406AAF68_il2cpp_TypeInfo_var, L_1);
		// }
		return;
	}
}
// System.Void OneSignal::IdsAvailable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneSignal_IdsAvailable_m6600F642D4A9C99CCEEE2290104D9F24AD51AE55 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IOneSignalPlatform_t161D92077EBE8503720EE7A41E171D69406AAF68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// oneSignalPlatform.IdsAvailable(null);
		IL2CPP_RUNTIME_CLASS_INIT(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var))->get_oneSignalPlatform_16();
		NullCheck(L_0);
		InterfaceActionInvoker1< String_t* >::Invoke(8 /* System.Void IOneSignalPlatform::IdsAvailable(System.String) */, IOneSignalPlatform_t161D92077EBE8503720EE7A41E171D69406AAF68_il2cpp_TypeInfo_var, L_0, (String_t*)NULL);
		// }
		return;
	}
}
// System.Void OneSignal::IdsAvailable(OneSignal/IdsAvailableCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneSignal_IdsAvailable_m07CE6AC8351316D2D505A57911195084F07BE242 (IdsAvailableCallback_t4542530853E11729402E55FCDDD09AD6FBC8B377 * ___inIdsAvailableDelegate0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m41347382F51428371DD0FF5A518052A6CC8C3A4F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IOneSignalPlatform_t161D92077EBE8503720EE7A41E171D69406AAF68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// string delegateGuid = OneSignalUnityUtils.GetNewGuid();
		String_t* L_0;
		L_0 = OneSignalUnityUtils_GetNewGuid_mE98FB8FC6067F7DA8AF1C46C9DA028581C037814(/*hidden argument*/NULL);
		V_0 = L_0;
		// delegates.Add(delegateGuid, inIdsAvailableDelegate);
		IL2CPP_RUNTIME_CLASS_INIT(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var);
		Dictionary_2_t521306497EEE741202CFF9F69FB533CCAD8C8ACD * L_1 = ((OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var))->get_delegates_4();
		String_t* L_2 = V_0;
		IdsAvailableCallback_t4542530853E11729402E55FCDDD09AD6FBC8B377 * L_3 = ___inIdsAvailableDelegate0;
		NullCheck(L_1);
		Dictionary_2_Add_m41347382F51428371DD0FF5A518052A6CC8C3A4F(L_1, L_2, L_3, /*hidden argument*/Dictionary_2_Add_m41347382F51428371DD0FF5A518052A6CC8C3A4F_RuntimeMethod_var);
		// oneSignalPlatform.IdsAvailable(delegateGuid);
		RuntimeObject* L_4 = ((OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var))->get_oneSignalPlatform_16();
		String_t* L_5 = V_0;
		NullCheck(L_4);
		InterfaceActionInvoker1< String_t* >::Invoke(8 /* System.Void IOneSignalPlatform::IdsAvailable(System.String) */, IOneSignalPlatform_t161D92077EBE8503720EE7A41E171D69406AAF68_il2cpp_TypeInfo_var, L_4, L_5);
		// }
		return;
	}
}
// System.Void OneSignal::EnableVibrate(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneSignal_EnableVibrate_mD9484E8707D0802C58FF654EB698DB939F2FD4C5 (bool ___enable0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IOneSignalPlatform_t161D92077EBE8503720EE7A41E171D69406AAF68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// oneSignalPlatform.EnableVibrate(enable);
		IL2CPP_RUNTIME_CLASS_INIT(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var))->get_oneSignalPlatform_16();
		bool L_1 = ___enable0;
		NullCheck(L_0);
		InterfaceActionInvoker1< bool >::Invoke(36 /* System.Void IOneSignalPlatform::EnableVibrate(System.Boolean) */, IOneSignalPlatform_t161D92077EBE8503720EE7A41E171D69406AAF68_il2cpp_TypeInfo_var, L_0, L_1);
		// }
		return;
	}
}
// System.Void OneSignal::EnableSound(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneSignal_EnableSound_m5AF4E3FC2A6D0774F1D192D8CFD60AD5682422E3 (bool ___enable0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IOneSignalPlatform_t161D92077EBE8503720EE7A41E171D69406AAF68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// oneSignalPlatform.EnableSound(enable);
		IL2CPP_RUNTIME_CLASS_INIT(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var))->get_oneSignalPlatform_16();
		bool L_1 = ___enable0;
		NullCheck(L_0);
		InterfaceActionInvoker1< bool >::Invoke(37 /* System.Void IOneSignalPlatform::EnableSound(System.Boolean) */, IOneSignalPlatform_t161D92077EBE8503720EE7A41E171D69406AAF68_il2cpp_TypeInfo_var, L_0, L_1);
		// }
		return;
	}
}
// System.Void OneSignal::ClearOneSignalNotifications()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneSignal_ClearOneSignalNotifications_m4A11A801404B3551FE3D66CD9B0FE5C0A5C1430C (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IOneSignalPlatform_t161D92077EBE8503720EE7A41E171D69406AAF68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// oneSignalPlatform.ClearOneSignalNotifications();
		IL2CPP_RUNTIME_CLASS_INIT(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var))->get_oneSignalPlatform_16();
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(38 /* System.Void IOneSignalPlatform::ClearOneSignalNotifications() */, IOneSignalPlatform_t161D92077EBE8503720EE7A41E171D69406AAF68_il2cpp_TypeInfo_var, L_0);
		// }
		return;
	}
}
// System.Void OneSignal::SetSubscription(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneSignal_SetSubscription_m02346B7CABDFF30191286C1C1F1CB2207D91C27F (bool ___enable0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IOneSignalPlatform_t161D92077EBE8503720EE7A41E171D69406AAF68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// oneSignalPlatform.SetSubscription(enable);
		IL2CPP_RUNTIME_CLASS_INIT(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var))->get_oneSignalPlatform_16();
		bool L_1 = ___enable0;
		NullCheck(L_0);
		InterfaceActionInvoker1< bool >::Invoke(9 /* System.Void IOneSignalPlatform::SetSubscription(System.Boolean) */, IOneSignalPlatform_t161D92077EBE8503720EE7A41E171D69406AAF68_il2cpp_TypeInfo_var, L_0, L_1);
		// }
		return;
	}
}
// System.Void OneSignal::SetEmail(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneSignal_SetEmail_m9D6036B52EC04B63633F2246A63BBA62935EF431 (String_t* ___email0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IOneSignalPlatform_t161D92077EBE8503720EE7A41E171D69406AAF68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// oneSignalPlatform.SetEmail(null, null, email);
		IL2CPP_RUNTIME_CLASS_INIT(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var))->get_oneSignalPlatform_16();
		String_t* L_1 = ___email0;
		NullCheck(L_0);
		InterfaceActionInvoker3< String_t*, String_t*, String_t* >::Invoke(14 /* System.Void IOneSignalPlatform::SetEmail(System.String,System.String,System.String) */, IOneSignalPlatform_t161D92077EBE8503720EE7A41E171D69406AAF68_il2cpp_TypeInfo_var, L_0, (String_t*)NULL, (String_t*)NULL, L_1);
		// }
		return;
	}
}
// System.Void OneSignal::SetEmail(System.String,OneSignal/OnSetEmailSuccess,OneSignal/OnSetEmailFailure)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneSignal_SetEmail_mDB63B941D34E857DA3E339F2380DD2154B8A5346 (String_t* ___email0, OnSetEmailSuccess_t5D828241C45219E51AC4B47C581F66419C7D3BDB * ___successDelegate1, OnSetEmailFailure_tC1B0B2D7E54644EF4414EFE4A1DC6A9371409B5D * ___failureDelegate2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m41347382F51428371DD0FF5A518052A6CC8C3A4F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IOneSignalPlatform_t161D92077EBE8503720EE7A41E171D69406AAF68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	{
		// string delegateGuidSuccess = OneSignalUnityUtils.GetNewGuid();
		String_t* L_0;
		L_0 = OneSignalUnityUtils_GetNewGuid_mE98FB8FC6067F7DA8AF1C46C9DA028581C037814(/*hidden argument*/NULL);
		V_0 = L_0;
		// string delegateGuidFailure = OneSignalUnityUtils.GetNewGuid();
		String_t* L_1;
		L_1 = OneSignalUnityUtils_GetNewGuid_mE98FB8FC6067F7DA8AF1C46C9DA028581C037814(/*hidden argument*/NULL);
		V_1 = L_1;
		// delegates.Add(delegateGuidSuccess, successDelegate);
		IL2CPP_RUNTIME_CLASS_INIT(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var);
		Dictionary_2_t521306497EEE741202CFF9F69FB533CCAD8C8ACD * L_2 = ((OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var))->get_delegates_4();
		String_t* L_3 = V_0;
		OnSetEmailSuccess_t5D828241C45219E51AC4B47C581F66419C7D3BDB * L_4 = ___successDelegate1;
		NullCheck(L_2);
		Dictionary_2_Add_m41347382F51428371DD0FF5A518052A6CC8C3A4F(L_2, L_3, L_4, /*hidden argument*/Dictionary_2_Add_m41347382F51428371DD0FF5A518052A6CC8C3A4F_RuntimeMethod_var);
		// delegates.Add(delegateGuidFailure, failureDelegate);
		Dictionary_2_t521306497EEE741202CFF9F69FB533CCAD8C8ACD * L_5 = ((OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var))->get_delegates_4();
		String_t* L_6 = V_1;
		OnSetEmailFailure_tC1B0B2D7E54644EF4414EFE4A1DC6A9371409B5D * L_7 = ___failureDelegate2;
		NullCheck(L_5);
		Dictionary_2_Add_m41347382F51428371DD0FF5A518052A6CC8C3A4F(L_5, L_6, L_7, /*hidden argument*/Dictionary_2_Add_m41347382F51428371DD0FF5A518052A6CC8C3A4F_RuntimeMethod_var);
		// oneSignalPlatform.SetEmail(delegateGuidSuccess, delegateGuidFailure, email);
		RuntimeObject* L_8 = ((OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var))->get_oneSignalPlatform_16();
		String_t* L_9 = V_0;
		String_t* L_10 = V_1;
		String_t* L_11 = ___email0;
		NullCheck(L_8);
		InterfaceActionInvoker3< String_t*, String_t*, String_t* >::Invoke(14 /* System.Void IOneSignalPlatform::SetEmail(System.String,System.String,System.String) */, IOneSignalPlatform_t161D92077EBE8503720EE7A41E171D69406AAF68_il2cpp_TypeInfo_var, L_8, L_9, L_10, L_11);
		// }
		return;
	}
}
// System.Void OneSignal::SetEmail(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneSignal_SetEmail_mFC2BADD5E33EF210F18A5924A577DD87C70F141F (String_t* ___email0, String_t* ___emailAuthToken1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IOneSignalPlatform_t161D92077EBE8503720EE7A41E171D69406AAF68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// oneSignalPlatform.SetEmail(null, null, email, emailAuthToken);
		IL2CPP_RUNTIME_CLASS_INIT(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var))->get_oneSignalPlatform_16();
		String_t* L_1 = ___email0;
		String_t* L_2 = ___emailAuthToken1;
		NullCheck(L_0);
		InterfaceActionInvoker4< String_t*, String_t*, String_t*, String_t* >::Invoke(15 /* System.Void IOneSignalPlatform::SetEmail(System.String,System.String,System.String,System.String) */, IOneSignalPlatform_t161D92077EBE8503720EE7A41E171D69406AAF68_il2cpp_TypeInfo_var, L_0, (String_t*)NULL, (String_t*)NULL, L_1, L_2);
		// }
		return;
	}
}
// System.Void OneSignal::SetEmail(System.String,System.String,OneSignal/OnSetEmailSuccess,OneSignal/OnSetEmailFailure)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneSignal_SetEmail_mF118BB08E84801FFE6BAF038600AF60BB01C6F33 (String_t* ___email0, String_t* ___emailAuthToken1, OnSetEmailSuccess_t5D828241C45219E51AC4B47C581F66419C7D3BDB * ___successDelegate2, OnSetEmailFailure_tC1B0B2D7E54644EF4414EFE4A1DC6A9371409B5D * ___failureDelegate3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m41347382F51428371DD0FF5A518052A6CC8C3A4F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IOneSignalPlatform_t161D92077EBE8503720EE7A41E171D69406AAF68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	{
		// string delegateGuidSuccess = OneSignalUnityUtils.GetNewGuid();
		String_t* L_0;
		L_0 = OneSignalUnityUtils_GetNewGuid_mE98FB8FC6067F7DA8AF1C46C9DA028581C037814(/*hidden argument*/NULL);
		V_0 = L_0;
		// string delegateGuidFailure = OneSignalUnityUtils.GetNewGuid();
		String_t* L_1;
		L_1 = OneSignalUnityUtils_GetNewGuid_mE98FB8FC6067F7DA8AF1C46C9DA028581C037814(/*hidden argument*/NULL);
		V_1 = L_1;
		// delegates.Add(delegateGuidSuccess, successDelegate);
		IL2CPP_RUNTIME_CLASS_INIT(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var);
		Dictionary_2_t521306497EEE741202CFF9F69FB533CCAD8C8ACD * L_2 = ((OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var))->get_delegates_4();
		String_t* L_3 = V_0;
		OnSetEmailSuccess_t5D828241C45219E51AC4B47C581F66419C7D3BDB * L_4 = ___successDelegate2;
		NullCheck(L_2);
		Dictionary_2_Add_m41347382F51428371DD0FF5A518052A6CC8C3A4F(L_2, L_3, L_4, /*hidden argument*/Dictionary_2_Add_m41347382F51428371DD0FF5A518052A6CC8C3A4F_RuntimeMethod_var);
		// delegates.Add(delegateGuidFailure, failureDelegate);
		Dictionary_2_t521306497EEE741202CFF9F69FB533CCAD8C8ACD * L_5 = ((OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var))->get_delegates_4();
		String_t* L_6 = V_1;
		OnSetEmailFailure_tC1B0B2D7E54644EF4414EFE4A1DC6A9371409B5D * L_7 = ___failureDelegate3;
		NullCheck(L_5);
		Dictionary_2_Add_m41347382F51428371DD0FF5A518052A6CC8C3A4F(L_5, L_6, L_7, /*hidden argument*/Dictionary_2_Add_m41347382F51428371DD0FF5A518052A6CC8C3A4F_RuntimeMethod_var);
		// oneSignalPlatform.SetEmail(delegateGuidSuccess, delegateGuidFailure, email, emailAuthToken);
		RuntimeObject* L_8 = ((OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var))->get_oneSignalPlatform_16();
		String_t* L_9 = V_0;
		String_t* L_10 = V_1;
		String_t* L_11 = ___email0;
		String_t* L_12 = ___emailAuthToken1;
		NullCheck(L_8);
		InterfaceActionInvoker4< String_t*, String_t*, String_t*, String_t* >::Invoke(15 /* System.Void IOneSignalPlatform::SetEmail(System.String,System.String,System.String,System.String) */, IOneSignalPlatform_t161D92077EBE8503720EE7A41E171D69406AAF68_il2cpp_TypeInfo_var, L_8, L_9, L_10, L_11, L_12);
		// }
		return;
	}
}
// System.Void OneSignal::LogoutEmail()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneSignal_LogoutEmail_mAD57C11F270D50127675660BBFD4FFF91A4B075B (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IOneSignalPlatform_t161D92077EBE8503720EE7A41E171D69406AAF68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// oneSignalPlatform.LogoutEmail(null, null);
		IL2CPP_RUNTIME_CLASS_INIT(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var))->get_oneSignalPlatform_16();
		NullCheck(L_0);
		InterfaceActionInvoker2< String_t*, String_t* >::Invoke(16 /* System.Void IOneSignalPlatform::LogoutEmail(System.String,System.String) */, IOneSignalPlatform_t161D92077EBE8503720EE7A41E171D69406AAF68_il2cpp_TypeInfo_var, L_0, (String_t*)NULL, (String_t*)NULL);
		// }
		return;
	}
}
// System.Void OneSignal::LogoutEmail(OneSignal/OnLogoutEmailSuccess,OneSignal/OnLogoutEmailFailure)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneSignal_LogoutEmail_mA0E3DAD95867CF703269C5C66018E5718841535F (OnLogoutEmailSuccess_t87D6896F1510F5624EA317AA83BCEEBE79DC60AF * ___successDelegate0, OnLogoutEmailFailure_tA4226BD4128D5C768C079A27BC0ABEA359DC848D * ___failureDelegate1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m41347382F51428371DD0FF5A518052A6CC8C3A4F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IOneSignalPlatform_t161D92077EBE8503720EE7A41E171D69406AAF68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	{
		// string delegateGuidSuccess = OneSignalUnityUtils.GetNewGuid();
		String_t* L_0;
		L_0 = OneSignalUnityUtils_GetNewGuid_mE98FB8FC6067F7DA8AF1C46C9DA028581C037814(/*hidden argument*/NULL);
		V_0 = L_0;
		// string delegateGuidFailure = OneSignalUnityUtils.GetNewGuid();
		String_t* L_1;
		L_1 = OneSignalUnityUtils_GetNewGuid_mE98FB8FC6067F7DA8AF1C46C9DA028581C037814(/*hidden argument*/NULL);
		V_1 = L_1;
		// delegates.Add(delegateGuidSuccess, successDelegate);
		IL2CPP_RUNTIME_CLASS_INIT(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var);
		Dictionary_2_t521306497EEE741202CFF9F69FB533CCAD8C8ACD * L_2 = ((OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var))->get_delegates_4();
		String_t* L_3 = V_0;
		OnLogoutEmailSuccess_t87D6896F1510F5624EA317AA83BCEEBE79DC60AF * L_4 = ___successDelegate0;
		NullCheck(L_2);
		Dictionary_2_Add_m41347382F51428371DD0FF5A518052A6CC8C3A4F(L_2, L_3, L_4, /*hidden argument*/Dictionary_2_Add_m41347382F51428371DD0FF5A518052A6CC8C3A4F_RuntimeMethod_var);
		// delegates.Add(delegateGuidFailure, failureDelegate);
		Dictionary_2_t521306497EEE741202CFF9F69FB533CCAD8C8ACD * L_5 = ((OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var))->get_delegates_4();
		String_t* L_6 = V_1;
		OnLogoutEmailFailure_tA4226BD4128D5C768C079A27BC0ABEA359DC848D * L_7 = ___failureDelegate1;
		NullCheck(L_5);
		Dictionary_2_Add_m41347382F51428371DD0FF5A518052A6CC8C3A4F(L_5, L_6, L_7, /*hidden argument*/Dictionary_2_Add_m41347382F51428371DD0FF5A518052A6CC8C3A4F_RuntimeMethod_var);
		// oneSignalPlatform.LogoutEmail(delegateGuidSuccess, delegateGuidFailure);
		RuntimeObject* L_8 = ((OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var))->get_oneSignalPlatform_16();
		String_t* L_9 = V_0;
		String_t* L_10 = V_1;
		NullCheck(L_8);
		InterfaceActionInvoker2< String_t*, String_t* >::Invoke(16 /* System.Void IOneSignalPlatform::LogoutEmail(System.String,System.String) */, IOneSignalPlatform_t161D92077EBE8503720EE7A41E171D69406AAF68_il2cpp_TypeInfo_var, L_8, L_9, L_10);
		// }
		return;
	}
}
// System.Void OneSignal::PostNotification(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneSignal_PostNotification_m409B352B00D71524060D6B8D198931F2B4A97C6E (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * ___data0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IOneSignalPlatform_t161D92077EBE8503720EE7A41E171D69406AAF68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// oneSignalPlatform.PostNotification(null, null, data);
		IL2CPP_RUNTIME_CLASS_INIT(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var))->get_oneSignalPlatform_16();
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_1 = ___data0;
		NullCheck(L_0);
		InterfaceActionInvoker3< String_t*, String_t*, Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * >::Invoke(10 /* System.Void IOneSignalPlatform::PostNotification(System.String,System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>) */, IOneSignalPlatform_t161D92077EBE8503720EE7A41E171D69406AAF68_il2cpp_TypeInfo_var, L_0, (String_t*)NULL, (String_t*)NULL, L_1);
		// }
		return;
	}
}
// System.Void OneSignal::PostNotification(System.Collections.Generic.Dictionary`2<System.String,System.Object>,OneSignal/OnPostNotificationSuccess,OneSignal/OnPostNotificationFailure)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneSignal_PostNotification_m8F6EA72A155F841DD46CAD506780BF5BD48186D4 (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * ___data0, OnPostNotificationSuccess_tDCA1A38F1FC336944A4489421DD2C28BF9F6DAFA * ___inOnPostNotificationSuccess1, OnPostNotificationFailure_t838C4BF4E9FE424E9B8A948B686BC4B56EA0EE85 * ___inOnPostNotificationFailure2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m41347382F51428371DD0FF5A518052A6CC8C3A4F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IOneSignalPlatform_t161D92077EBE8503720EE7A41E171D69406AAF68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	{
		// string delegateGuidSuccess = OneSignalUnityUtils.GetNewGuid();
		String_t* L_0;
		L_0 = OneSignalUnityUtils_GetNewGuid_mE98FB8FC6067F7DA8AF1C46C9DA028581C037814(/*hidden argument*/NULL);
		V_0 = L_0;
		// string delegateGuidFailure = OneSignalUnityUtils.GetNewGuid();
		String_t* L_1;
		L_1 = OneSignalUnityUtils_GetNewGuid_mE98FB8FC6067F7DA8AF1C46C9DA028581C037814(/*hidden argument*/NULL);
		V_1 = L_1;
		// delegates.Add(delegateGuidSuccess, inOnPostNotificationSuccess);
		IL2CPP_RUNTIME_CLASS_INIT(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var);
		Dictionary_2_t521306497EEE741202CFF9F69FB533CCAD8C8ACD * L_2 = ((OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var))->get_delegates_4();
		String_t* L_3 = V_0;
		OnPostNotificationSuccess_tDCA1A38F1FC336944A4489421DD2C28BF9F6DAFA * L_4 = ___inOnPostNotificationSuccess1;
		NullCheck(L_2);
		Dictionary_2_Add_m41347382F51428371DD0FF5A518052A6CC8C3A4F(L_2, L_3, L_4, /*hidden argument*/Dictionary_2_Add_m41347382F51428371DD0FF5A518052A6CC8C3A4F_RuntimeMethod_var);
		// delegates.Add(delegateGuidFailure, inOnPostNotificationFailure);
		Dictionary_2_t521306497EEE741202CFF9F69FB533CCAD8C8ACD * L_5 = ((OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var))->get_delegates_4();
		String_t* L_6 = V_1;
		OnPostNotificationFailure_t838C4BF4E9FE424E9B8A948B686BC4B56EA0EE85 * L_7 = ___inOnPostNotificationFailure2;
		NullCheck(L_5);
		Dictionary_2_Add_m41347382F51428371DD0FF5A518052A6CC8C3A4F(L_5, L_6, L_7, /*hidden argument*/Dictionary_2_Add_m41347382F51428371DD0FF5A518052A6CC8C3A4F_RuntimeMethod_var);
		// oneSignalPlatform.PostNotification(delegateGuidSuccess, delegateGuidFailure, data);
		RuntimeObject* L_8 = ((OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var))->get_oneSignalPlatform_16();
		String_t* L_9 = V_0;
		String_t* L_10 = V_1;
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_11 = ___data0;
		NullCheck(L_8);
		InterfaceActionInvoker3< String_t*, String_t*, Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * >::Invoke(10 /* System.Void IOneSignalPlatform::PostNotification(System.String,System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>) */, IOneSignalPlatform_t161D92077EBE8503720EE7A41E171D69406AAF68_il2cpp_TypeInfo_var, L_8, L_9, L_10, L_11);
		// }
		return;
	}
}
// System.Void OneSignal::SyncHashedEmail(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneSignal_SyncHashedEmail_mDD8C55E8545AD4F8294A2A3D7B91AF8AC2A009E3 (String_t* ___email0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IOneSignalPlatform_t161D92077EBE8503720EE7A41E171D69406AAF68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// oneSignalPlatform.SyncHashedEmail(email);
		IL2CPP_RUNTIME_CLASS_INIT(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var))->get_oneSignalPlatform_16();
		String_t* L_1 = ___email0;
		NullCheck(L_0);
		InterfaceActionInvoker1< String_t* >::Invoke(11 /* System.Void IOneSignalPlatform::SyncHashedEmail(System.String) */, IOneSignalPlatform_t161D92077EBE8503720EE7A41E171D69406AAF68_il2cpp_TypeInfo_var, L_0, L_1);
		// }
		return;
	}
}
// System.Void OneSignal::PromptLocation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneSignal_PromptLocation_m3F0FB69A3557999E3C897CC90358D5984596974C (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IOneSignalPlatform_t161D92077EBE8503720EE7A41E171D69406AAF68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// oneSignalPlatform.PromptLocation();
		IL2CPP_RUNTIME_CLASS_INIT(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var))->get_oneSignalPlatform_16();
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(12 /* System.Void IOneSignalPlatform::PromptLocation() */, IOneSignalPlatform_t161D92077EBE8503720EE7A41E171D69406AAF68_il2cpp_TypeInfo_var, L_0);
		// }
		return;
	}
}
// OSPermissionSubscriptionState OneSignal::GetPermissionSubscriptionState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OSPermissionSubscriptionState_t7BCEA446B237598B727E00B8D8F4DBC11DEC9B72 * OneSignal_GetPermissionSubscriptionState_m196DD43D7ADBA4EC7910A28AC98EC4283638D705 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IOneSignalPlatform_t161D92077EBE8503720EE7A41E171D69406AAF68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return oneSignalPlatform.GetPermissionSubscriptionState();
		IL2CPP_RUNTIME_CLASS_INIT(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var))->get_oneSignalPlatform_16();
		NullCheck(L_0);
		OSPermissionSubscriptionState_t7BCEA446B237598B727E00B8D8F4DBC11DEC9B72 * L_1;
		L_1 = InterfaceFuncInvoker0< OSPermissionSubscriptionState_t7BCEA446B237598B727E00B8D8F4DBC11DEC9B72 * >::Invoke(29 /* OSPermissionSubscriptionState IOneSignalPlatform::GetPermissionSubscriptionState() */, IOneSignalPlatform_t161D92077EBE8503720EE7A41E171D69406AAF68_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Void OneSignal::UserDidProvideConsent(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneSignal_UserDidProvideConsent_mE38B5FA35EC4B213EF56A331A19AF0237464EF4E (bool ___consent0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IOneSignalPlatform_t161D92077EBE8503720EE7A41E171D69406AAF68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// oneSignalPlatform.UserDidProvideConsent(consent);
		IL2CPP_RUNTIME_CLASS_INIT(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var))->get_oneSignalPlatform_16();
		bool L_1 = ___consent0;
		NullCheck(L_0);
		InterfaceActionInvoker1< bool >::Invoke(18 /* System.Void IOneSignalPlatform::UserDidProvideConsent(System.Boolean) */, IOneSignalPlatform_t161D92077EBE8503720EE7A41E171D69406AAF68_il2cpp_TypeInfo_var, L_0, L_1);
		// }
		return;
	}
}
// System.Boolean OneSignal::UserProvidedConsent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OneSignal_UserProvidedConsent_m11C4DE224081FCD055D3BBEB968F69A345CB7294 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IOneSignalPlatform_t161D92077EBE8503720EE7A41E171D69406AAF68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return oneSignalPlatform.UserProvidedConsent();
		IL2CPP_RUNTIME_CLASS_INIT(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var))->get_oneSignalPlatform_16();
		NullCheck(L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(19 /* System.Boolean IOneSignalPlatform::UserProvidedConsent() */, IOneSignalPlatform_t161D92077EBE8503720EE7A41E171D69406AAF68_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Void OneSignal::SetRequiresUserPrivacyConsent(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneSignal_SetRequiresUserPrivacyConsent_mA21F8EBF20F191CCC49E41AD22972EABB459BD1C (bool ___required0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// requiresUserConsent = required;
		bool L_0 = ___required0;
		IL2CPP_RUNTIME_CLASS_INIT(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var);
		((OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var))->set_requiresUserConsent_19(L_0);
		// }
		return;
	}
}
// System.Void OneSignal::SetExternalUserId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneSignal_SetExternalUserId_mB27AC7D0A5BDD424089DDEDBE1403763E86B36D7 (String_t* ___externalId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IOneSignalPlatform_t161D92077EBE8503720EE7A41E171D69406AAF68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// string delegateGuidCompletion = OneSignalUnityUtils.GetNewGuid();
		String_t* L_0;
		L_0 = OneSignalUnityUtils_GetNewGuid_mE98FB8FC6067F7DA8AF1C46C9DA028581C037814(/*hidden argument*/NULL);
		V_0 = L_0;
		// oneSignalPlatform.SetExternalUserId(delegateGuidCompletion, externalId);
		IL2CPP_RUNTIME_CLASS_INIT(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = ((OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var))->get_oneSignalPlatform_16();
		String_t* L_2 = V_0;
		String_t* L_3 = ___externalId0;
		NullCheck(L_1);
		InterfaceActionInvoker2< String_t*, String_t* >::Invoke(20 /* System.Void IOneSignalPlatform::SetExternalUserId(System.String,System.String) */, IOneSignalPlatform_t161D92077EBE8503720EE7A41E171D69406AAF68_il2cpp_TypeInfo_var, L_1, L_2, L_3);
		// }
		return;
	}
}
// System.Void OneSignal::SetExternalUserId(System.String,OneSignal/OnExternalUserIdUpdateCompletion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneSignal_SetExternalUserId_m5B2F48672A5A215CA9AD6B04DCE2CE9FE607CDE3 (String_t* ___externalId0, OnExternalUserIdUpdateCompletion_tE7AD9883916B83BCCE7A9F6C4C77E818FA079EF3 * ___completion1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m41347382F51428371DD0FF5A518052A6CC8C3A4F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IOneSignalPlatform_t161D92077EBE8503720EE7A41E171D69406AAF68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// string delegateGuidCompletion = OneSignalUnityUtils.GetNewGuid();
		String_t* L_0;
		L_0 = OneSignalUnityUtils_GetNewGuid_mE98FB8FC6067F7DA8AF1C46C9DA028581C037814(/*hidden argument*/NULL);
		V_0 = L_0;
		// delegates.Add(delegateGuidCompletion, completion);
		IL2CPP_RUNTIME_CLASS_INIT(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var);
		Dictionary_2_t521306497EEE741202CFF9F69FB533CCAD8C8ACD * L_1 = ((OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var))->get_delegates_4();
		String_t* L_2 = V_0;
		OnExternalUserIdUpdateCompletion_tE7AD9883916B83BCCE7A9F6C4C77E818FA079EF3 * L_3 = ___completion1;
		NullCheck(L_1);
		Dictionary_2_Add_m41347382F51428371DD0FF5A518052A6CC8C3A4F(L_1, L_2, L_3, /*hidden argument*/Dictionary_2_Add_m41347382F51428371DD0FF5A518052A6CC8C3A4F_RuntimeMethod_var);
		// oneSignalPlatform.SetExternalUserId(delegateGuidCompletion, externalId);
		RuntimeObject* L_4 = ((OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var))->get_oneSignalPlatform_16();
		String_t* L_5 = V_0;
		String_t* L_6 = ___externalId0;
		NullCheck(L_4);
		InterfaceActionInvoker2< String_t*, String_t* >::Invoke(20 /* System.Void IOneSignalPlatform::SetExternalUserId(System.String,System.String) */, IOneSignalPlatform_t161D92077EBE8503720EE7A41E171D69406AAF68_il2cpp_TypeInfo_var, L_4, L_5, L_6);
		// }
		return;
	}
}
// System.Void OneSignal::SetExternalUserId(System.String,System.String,OneSignal/OnExternalUserIdUpdateCompletion,OneSignal/OnExternalUserIdUpdateCompletionFailure)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneSignal_SetExternalUserId_mC35359D2A1F14271D0FFA213F1ADD7E623B39FD0 (String_t* ___externalId0, String_t* ___authHashToken1, OnExternalUserIdUpdateCompletion_tE7AD9883916B83BCCE7A9F6C4C77E818FA079EF3 * ___completion2, OnExternalUserIdUpdateCompletionFailure_t3C667A1A4AC32CE33E8FA58F11890E28729BB8F1 * ___completionFailure3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m41347382F51428371DD0FF5A518052A6CC8C3A4F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IOneSignalPlatform_t161D92077EBE8503720EE7A41E171D69406AAF68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	{
		// string delegateGuidCompletion = OneSignalUnityUtils.GetNewGuid();
		String_t* L_0;
		L_0 = OneSignalUnityUtils_GetNewGuid_mE98FB8FC6067F7DA8AF1C46C9DA028581C037814(/*hidden argument*/NULL);
		V_0 = L_0;
		// string delegateGuidFailure = OneSignalUnityUtils.GetNewGuid();
		String_t* L_1;
		L_1 = OneSignalUnityUtils_GetNewGuid_mE98FB8FC6067F7DA8AF1C46C9DA028581C037814(/*hidden argument*/NULL);
		V_1 = L_1;
		// delegates.Add(delegateGuidCompletion, completion);
		IL2CPP_RUNTIME_CLASS_INIT(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var);
		Dictionary_2_t521306497EEE741202CFF9F69FB533CCAD8C8ACD * L_2 = ((OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var))->get_delegates_4();
		String_t* L_3 = V_0;
		OnExternalUserIdUpdateCompletion_tE7AD9883916B83BCCE7A9F6C4C77E818FA079EF3 * L_4 = ___completion2;
		NullCheck(L_2);
		Dictionary_2_Add_m41347382F51428371DD0FF5A518052A6CC8C3A4F(L_2, L_3, L_4, /*hidden argument*/Dictionary_2_Add_m41347382F51428371DD0FF5A518052A6CC8C3A4F_RuntimeMethod_var);
		// delegates.Add(delegateGuidFailure, completionFailure);
		Dictionary_2_t521306497EEE741202CFF9F69FB533CCAD8C8ACD * L_5 = ((OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var))->get_delegates_4();
		String_t* L_6 = V_1;
		OnExternalUserIdUpdateCompletionFailure_t3C667A1A4AC32CE33E8FA58F11890E28729BB8F1 * L_7 = ___completionFailure3;
		NullCheck(L_5);
		Dictionary_2_Add_m41347382F51428371DD0FF5A518052A6CC8C3A4F(L_5, L_6, L_7, /*hidden argument*/Dictionary_2_Add_m41347382F51428371DD0FF5A518052A6CC8C3A4F_RuntimeMethod_var);
		// oneSignalPlatform.SetExternalUserId(delegateGuidCompletion, delegateGuidFailure, externalId, authHashToken);
		RuntimeObject* L_8 = ((OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var))->get_oneSignalPlatform_16();
		String_t* L_9 = V_0;
		String_t* L_10 = V_1;
		String_t* L_11 = ___externalId0;
		String_t* L_12 = ___authHashToken1;
		NullCheck(L_8);
		InterfaceActionInvoker4< String_t*, String_t*, String_t*, String_t* >::Invoke(21 /* System.Void IOneSignalPlatform::SetExternalUserId(System.String,System.String,System.String,System.String) */, IOneSignalPlatform_t161D92077EBE8503720EE7A41E171D69406AAF68_il2cpp_TypeInfo_var, L_8, L_9, L_10, L_11, L_12);
		// }
		return;
	}
}
// System.Void OneSignal::RemoveExternalUserId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneSignal_RemoveExternalUserId_mE9298EC2DA19B7830BE40394FC38654871327D80 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IOneSignalPlatform_t161D92077EBE8503720EE7A41E171D69406AAF68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// string delegateGuidCompletion = OneSignalUnityUtils.GetNewGuid();
		String_t* L_0;
		L_0 = OneSignalUnityUtils_GetNewGuid_mE98FB8FC6067F7DA8AF1C46C9DA028581C037814(/*hidden argument*/NULL);
		V_0 = L_0;
		// oneSignalPlatform.RemoveExternalUserId(delegateGuidCompletion);
		IL2CPP_RUNTIME_CLASS_INIT(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = ((OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var))->get_oneSignalPlatform_16();
		String_t* L_2 = V_0;
		NullCheck(L_1);
		InterfaceActionInvoker1< String_t* >::Invoke(22 /* System.Void IOneSignalPlatform::RemoveExternalUserId(System.String) */, IOneSignalPlatform_t161D92077EBE8503720EE7A41E171D69406AAF68_il2cpp_TypeInfo_var, L_1, L_2);
		// }
		return;
	}
}
// System.Void OneSignal::RemoveExternalUserId(OneSignal/OnExternalUserIdUpdateCompletion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneSignal_RemoveExternalUserId_mD73A51037F2E62C084259F547C3841AC9544C5E2 (OnExternalUserIdUpdateCompletion_tE7AD9883916B83BCCE7A9F6C4C77E818FA079EF3 * ___completion0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m41347382F51428371DD0FF5A518052A6CC8C3A4F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IOneSignalPlatform_t161D92077EBE8503720EE7A41E171D69406AAF68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// string delegateGuidCompletion = OneSignalUnityUtils.GetNewGuid();
		String_t* L_0;
		L_0 = OneSignalUnityUtils_GetNewGuid_mE98FB8FC6067F7DA8AF1C46C9DA028581C037814(/*hidden argument*/NULL);
		V_0 = L_0;
		// delegates.Add(delegateGuidCompletion, completion);
		IL2CPP_RUNTIME_CLASS_INIT(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var);
		Dictionary_2_t521306497EEE741202CFF9F69FB533CCAD8C8ACD * L_1 = ((OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var))->get_delegates_4();
		String_t* L_2 = V_0;
		OnExternalUserIdUpdateCompletion_tE7AD9883916B83BCCE7A9F6C4C77E818FA079EF3 * L_3 = ___completion0;
		NullCheck(L_1);
		Dictionary_2_Add_m41347382F51428371DD0FF5A518052A6CC8C3A4F(L_1, L_2, L_3, /*hidden argument*/Dictionary_2_Add_m41347382F51428371DD0FF5A518052A6CC8C3A4F_RuntimeMethod_var);
		// oneSignalPlatform.RemoveExternalUserId(delegateGuidCompletion);
		RuntimeObject* L_4 = ((OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var))->get_oneSignalPlatform_16();
		String_t* L_5 = V_0;
		NullCheck(L_4);
		InterfaceActionInvoker1< String_t* >::Invoke(22 /* System.Void IOneSignalPlatform::RemoveExternalUserId(System.String) */, IOneSignalPlatform_t161D92077EBE8503720EE7A41E171D69406AAF68_il2cpp_TypeInfo_var, L_4, L_5);
		// }
		return;
	}
}
// System.Void OneSignal::AddTrigger(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneSignal_AddTrigger_mBAE1FAD885BA3FEB0D10CEDACC5FC37A7465EB18 (String_t* ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IOneSignalPlatform_t161D92077EBE8503720EE7A41E171D69406AAF68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// oneSignalPlatform.AddTrigger(key, value);
		IL2CPP_RUNTIME_CLASS_INIT(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var))->get_oneSignalPlatform_16();
		String_t* L_1 = ___key0;
		RuntimeObject * L_2 = ___value1;
		NullCheck(L_0);
		InterfaceActionInvoker2< String_t*, RuntimeObject * >::Invoke(30 /* System.Void IOneSignalPlatform::AddTrigger(System.String,System.Object) */, IOneSignalPlatform_t161D92077EBE8503720EE7A41E171D69406AAF68_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		// }
		return;
	}
}
// System.Void OneSignal::AddTriggers(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneSignal_AddTriggers_mA03F35E669AF74E62B3CF849788060B544232D91 (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * ___triggers0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IOneSignalPlatform_t161D92077EBE8503720EE7A41E171D69406AAF68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// oneSignalPlatform.AddTriggers(triggers);
		IL2CPP_RUNTIME_CLASS_INIT(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var))->get_oneSignalPlatform_16();
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_1 = ___triggers0;
		NullCheck(L_0);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(31 /* System.Void IOneSignalPlatform::AddTriggers(System.Collections.Generic.IDictionary`2<System.String,System.Object>) */, IOneSignalPlatform_t161D92077EBE8503720EE7A41E171D69406AAF68_il2cpp_TypeInfo_var, L_0, L_1);
		// }
		return;
	}
}
// System.Void OneSignal::RemoveTriggerForKey(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneSignal_RemoveTriggerForKey_m02A11CF3613CF6DC2C863465CC40ABF2D0519872 (String_t* ___key0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IOneSignalPlatform_t161D92077EBE8503720EE7A41E171D69406AAF68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// oneSignalPlatform.RemoveTriggerForKey(key);
		IL2CPP_RUNTIME_CLASS_INIT(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var))->get_oneSignalPlatform_16();
		String_t* L_1 = ___key0;
		NullCheck(L_0);
		InterfaceActionInvoker1< String_t* >::Invoke(32 /* System.Void IOneSignalPlatform::RemoveTriggerForKey(System.String) */, IOneSignalPlatform_t161D92077EBE8503720EE7A41E171D69406AAF68_il2cpp_TypeInfo_var, L_0, L_1);
		// }
		return;
	}
}
// System.Void OneSignal::RemoveTriggersForKeys(System.Collections.Generic.IList`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneSignal_RemoveTriggersForKeys_mD1837A85C2CDB70C74EAB2D7FDB10BFC5BCEE579 (RuntimeObject* ___keys0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IOneSignalPlatform_t161D92077EBE8503720EE7A41E171D69406AAF68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// oneSignalPlatform.RemoveTriggersForKeys(keys);
		IL2CPP_RUNTIME_CLASS_INIT(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var))->get_oneSignalPlatform_16();
		RuntimeObject* L_1 = ___keys0;
		NullCheck(L_0);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(33 /* System.Void IOneSignalPlatform::RemoveTriggersForKeys(System.Collections.Generic.IList`1<System.String>) */, IOneSignalPlatform_t161D92077EBE8503720EE7A41E171D69406AAF68_il2cpp_TypeInfo_var, L_0, L_1);
		// }
		return;
	}
}
// System.Object OneSignal::GetTriggerValueForKey(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * OneSignal_GetTriggerValueForKey_mA92E59B666D00C9DC1940C62FDFB39131C8A8272 (String_t* ___key0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IOneSignalPlatform_t161D92077EBE8503720EE7A41E171D69406AAF68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return oneSignalPlatform.GetTriggerValueForKey(key);
		IL2CPP_RUNTIME_CLASS_INIT(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var))->get_oneSignalPlatform_16();
		String_t* L_1 = ___key0;
		NullCheck(L_0);
		RuntimeObject * L_2;
		L_2 = InterfaceFuncInvoker1< RuntimeObject *, String_t* >::Invoke(34 /* System.Object IOneSignalPlatform::GetTriggerValueForKey(System.String) */, IOneSignalPlatform_t161D92077EBE8503720EE7A41E171D69406AAF68_il2cpp_TypeInfo_var, L_0, L_1);
		return L_2;
	}
}
// System.Void OneSignal::PauseInAppMessages(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneSignal_PauseInAppMessages_mD7C3888E14FF3D48BD577DA87410ECD768E04D0F (bool ___pause0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IOneSignalPlatform_t161D92077EBE8503720EE7A41E171D69406AAF68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// oneSignalPlatform.PauseInAppMessages(pause);
		IL2CPP_RUNTIME_CLASS_INIT(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var))->get_oneSignalPlatform_16();
		bool L_1 = ___pause0;
		NullCheck(L_0);
		InterfaceActionInvoker1< bool >::Invoke(35 /* System.Void IOneSignalPlatform::PauseInAppMessages(System.Boolean) */, IOneSignalPlatform_t161D92077EBE8503720EE7A41E171D69406AAF68_il2cpp_TypeInfo_var, L_0, L_1);
		// }
		return;
	}
}
// System.Void OneSignal::SendOutcome(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneSignal_SendOutcome_mB7426D016FCA81DD2C525F157DDBC51F2A7DA846 (String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IOneSignalPlatform_t161D92077EBE8503720EE7A41E171D69406AAF68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// oneSignalPlatform.SendOutcome(null, name);
		IL2CPP_RUNTIME_CLASS_INIT(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var))->get_oneSignalPlatform_16();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		InterfaceActionInvoker2< String_t*, String_t* >::Invoke(39 /* System.Void IOneSignalPlatform::SendOutcome(System.String,System.String) */, IOneSignalPlatform_t161D92077EBE8503720EE7A41E171D69406AAF68_il2cpp_TypeInfo_var, L_0, (String_t*)NULL, L_1);
		// }
		return;
	}
}
// System.Void OneSignal::SendOutcome(System.String,OneSignal/OnSendOutcomeSuccess)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneSignal_SendOutcome_m911BCB79171A7A7494396248A578B74014CBC6FF (String_t* ___name0, OnSendOutcomeSuccess_t33CAC591369FF5B710CB915E5F2EC54F7BD19D0C * ___onSendOutcomeSuccess1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m41347382F51428371DD0FF5A518052A6CC8C3A4F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IOneSignalPlatform_t161D92077EBE8503720EE7A41E171D69406AAF68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// string delegateGuid = OneSignalUnityUtils.GetNewGuid();
		String_t* L_0;
		L_0 = OneSignalUnityUtils_GetNewGuid_mE98FB8FC6067F7DA8AF1C46C9DA028581C037814(/*hidden argument*/NULL);
		V_0 = L_0;
		// delegates.Add(delegateGuid, onSendOutcomeSuccess);
		IL2CPP_RUNTIME_CLASS_INIT(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var);
		Dictionary_2_t521306497EEE741202CFF9F69FB533CCAD8C8ACD * L_1 = ((OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var))->get_delegates_4();
		String_t* L_2 = V_0;
		OnSendOutcomeSuccess_t33CAC591369FF5B710CB915E5F2EC54F7BD19D0C * L_3 = ___onSendOutcomeSuccess1;
		NullCheck(L_1);
		Dictionary_2_Add_m41347382F51428371DD0FF5A518052A6CC8C3A4F(L_1, L_2, L_3, /*hidden argument*/Dictionary_2_Add_m41347382F51428371DD0FF5A518052A6CC8C3A4F_RuntimeMethod_var);
		// oneSignalPlatform.SendOutcome(delegateGuid, name);
		RuntimeObject* L_4 = ((OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var))->get_oneSignalPlatform_16();
		String_t* L_5 = V_0;
		String_t* L_6 = ___name0;
		NullCheck(L_4);
		InterfaceActionInvoker2< String_t*, String_t* >::Invoke(39 /* System.Void IOneSignalPlatform::SendOutcome(System.String,System.String) */, IOneSignalPlatform_t161D92077EBE8503720EE7A41E171D69406AAF68_il2cpp_TypeInfo_var, L_4, L_5, L_6);
		// }
		return;
	}
}
// System.Void OneSignal::SendUniqueOutcome(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneSignal_SendUniqueOutcome_m157008ED8BAF318262FCD739F9E26815B89CF000 (String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IOneSignalPlatform_t161D92077EBE8503720EE7A41E171D69406AAF68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// oneSignalPlatform.SendUniqueOutcome(null, name);
		IL2CPP_RUNTIME_CLASS_INIT(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var))->get_oneSignalPlatform_16();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		InterfaceActionInvoker2< String_t*, String_t* >::Invoke(40 /* System.Void IOneSignalPlatform::SendUniqueOutcome(System.String,System.String) */, IOneSignalPlatform_t161D92077EBE8503720EE7A41E171D69406AAF68_il2cpp_TypeInfo_var, L_0, (String_t*)NULL, L_1);
		// }
		return;
	}
}
// System.Void OneSignal::SendUniqueOutcome(System.String,OneSignal/OnSendOutcomeSuccess)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneSignal_SendUniqueOutcome_m578BD42BB28905D2417CFB3F0CE5BFD49A700244 (String_t* ___name0, OnSendOutcomeSuccess_t33CAC591369FF5B710CB915E5F2EC54F7BD19D0C * ___onSendOutcomeSuccess1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m41347382F51428371DD0FF5A518052A6CC8C3A4F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IOneSignalPlatform_t161D92077EBE8503720EE7A41E171D69406AAF68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// string delegateGuid = OneSignalUnityUtils.GetNewGuid();
		String_t* L_0;
		L_0 = OneSignalUnityUtils_GetNewGuid_mE98FB8FC6067F7DA8AF1C46C9DA028581C037814(/*hidden argument*/NULL);
		V_0 = L_0;
		// delegates.Add(delegateGuid, onSendOutcomeSuccess);
		IL2CPP_RUNTIME_CLASS_INIT(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var);
		Dictionary_2_t521306497EEE741202CFF9F69FB533CCAD8C8ACD * L_1 = ((OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var))->get_delegates_4();
		String_t* L_2 = V_0;
		OnSendOutcomeSuccess_t33CAC591369FF5B710CB915E5F2EC54F7BD19D0C * L_3 = ___onSendOutcomeSuccess1;
		NullCheck(L_1);
		Dictionary_2_Add_m41347382F51428371DD0FF5A518052A6CC8C3A4F(L_1, L_2, L_3, /*hidden argument*/Dictionary_2_Add_m41347382F51428371DD0FF5A518052A6CC8C3A4F_RuntimeMethod_var);
		// oneSignalPlatform.SendUniqueOutcome(delegateGuid, name);
		RuntimeObject* L_4 = ((OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var))->get_oneSignalPlatform_16();
		String_t* L_5 = V_0;
		String_t* L_6 = ___name0;
		NullCheck(L_4);
		InterfaceActionInvoker2< String_t*, String_t* >::Invoke(40 /* System.Void IOneSignalPlatform::SendUniqueOutcome(System.String,System.String) */, IOneSignalPlatform_t161D92077EBE8503720EE7A41E171D69406AAF68_il2cpp_TypeInfo_var, L_4, L_5, L_6);
		// }
		return;
	}
}
// System.Void OneSignal::SendOutcomeWithValue(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneSignal_SendOutcomeWithValue_mF89CDC5120ABE578C0E08BD751EB8E377EDC7B3B (String_t* ___name0, float ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IOneSignalPlatform_t161D92077EBE8503720EE7A41E171D69406AAF68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// oneSignalPlatform.SendOutcomeWithValue(null, name, value);
		IL2CPP_RUNTIME_CLASS_INIT(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var))->get_oneSignalPlatform_16();
		String_t* L_1 = ___name0;
		float L_2 = ___value1;
		NullCheck(L_0);
		InterfaceActionInvoker3< String_t*, String_t*, float >::Invoke(41 /* System.Void IOneSignalPlatform::SendOutcomeWithValue(System.String,System.String,System.Single) */, IOneSignalPlatform_t161D92077EBE8503720EE7A41E171D69406AAF68_il2cpp_TypeInfo_var, L_0, (String_t*)NULL, L_1, L_2);
		// }
		return;
	}
}
// System.Void OneSignal::SendOutcomeWithValue(System.String,System.Single,OneSignal/OnSendOutcomeSuccess)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneSignal_SendOutcomeWithValue_mFE5BCC3868F5E0782E2ADBFBFA387062A5D6D977 (String_t* ___name0, float ___value1, OnSendOutcomeSuccess_t33CAC591369FF5B710CB915E5F2EC54F7BD19D0C * ___onSendOutcomeSuccess2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m41347382F51428371DD0FF5A518052A6CC8C3A4F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IOneSignalPlatform_t161D92077EBE8503720EE7A41E171D69406AAF68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// string delegateGuid = OneSignalUnityUtils.GetNewGuid();
		String_t* L_0;
		L_0 = OneSignalUnityUtils_GetNewGuid_mE98FB8FC6067F7DA8AF1C46C9DA028581C037814(/*hidden argument*/NULL);
		V_0 = L_0;
		// delegates.Add(delegateGuid, onSendOutcomeSuccess);
		IL2CPP_RUNTIME_CLASS_INIT(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var);
		Dictionary_2_t521306497EEE741202CFF9F69FB533CCAD8C8ACD * L_1 = ((OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var))->get_delegates_4();
		String_t* L_2 = V_0;
		OnSendOutcomeSuccess_t33CAC591369FF5B710CB915E5F2EC54F7BD19D0C * L_3 = ___onSendOutcomeSuccess2;
		NullCheck(L_1);
		Dictionary_2_Add_m41347382F51428371DD0FF5A518052A6CC8C3A4F(L_1, L_2, L_3, /*hidden argument*/Dictionary_2_Add_m41347382F51428371DD0FF5A518052A6CC8C3A4F_RuntimeMethod_var);
		// oneSignalPlatform.SendOutcomeWithValue(delegateGuid, name, value);
		RuntimeObject* L_4 = ((OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var))->get_oneSignalPlatform_16();
		String_t* L_5 = V_0;
		String_t* L_6 = ___name0;
		float L_7 = ___value1;
		NullCheck(L_4);
		InterfaceActionInvoker3< String_t*, String_t*, float >::Invoke(41 /* System.Void IOneSignalPlatform::SendOutcomeWithValue(System.String,System.String,System.Single) */, IOneSignalPlatform_t161D92077EBE8503720EE7A41E171D69406AAF68_il2cpp_TypeInfo_var, L_4, L_5, L_6, L_7);
		// }
		return;
	}
}
// OSNotification OneSignal::DictionaryToNotification(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OSNotification_t554DC6C0C4C4F2E6602C4C5E096252126B0EAD72 * OneSignal_DictionaryToNotification_mE2E37E68961355812CDA6FA5D0025B5370CAD9CB (OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C * __this, Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * ___jsonObject0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m3C1B28325435E61FFAD431E314EABF915B79A55E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OSNotificationPayload_tC710F220B7749FA10F167E672736061B3B774BD2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OSNotification_t554DC6C0C4C4F2E6602C4C5E096252126B0EAD72_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral03CE17F590FA4374BBD77BB910F23D5C321E1DF4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1EEA747F426E86C7BA93F023FA884C9357A942DB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral240BE9B5E609F0DD8657150691504C4DE92A0925);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral44846090648036BB6C68BEDC0AFAE9D786E2D352);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral449A390479E90BFAA4AA59C9E38C9E52D3E4E211);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral55AC598ED5884D77F7D97920AA5DDDDA2CAA02B4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral55BCDA18DECBD8C76084B19CD63F790E3ECAD78C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral61FFF631210305266275E5181A82553B20C27BED);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral737770B3F764157DABB4CE6100DDE5F3A7607BE8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7AA6DC89F58BAAC908DD46FA2A87D7E8FB2F4A98);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7BA4811D9B4DD1C83525D6D519B43A954269123C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral84C56EB5613DF38582973C9BB51B037D6DD69651);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8AC5E01C0ED930FDDF47429AABA2FD04371BB804);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E6A16EA00C50AC4711E813882BEA6313BE62302);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA87C61B80C637AF7634ECA7413C525DA4D22787A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAD98798087396DE6FBBE1C8D540AB7643EC8804C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB8DDA9ED9882200BD39E3BD909BD0F58222BFAB6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC7B4D926EF9532A71B25AEC040A33D52C926425F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCA38A2A438DBE868658AF134FDA5094E8ED31EAD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCD002DD70C7AAC9CFF6D7D4821927E13D2989493);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD0209804F423F0C2698D8BEDDD802E490C489A40);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD1BE973B5F59125FC8CC7D8264A1F724131BB623);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA7962E79DE9971EF95CECB194FDE602D7DCDA96);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF099946CD3172EC2D59FF79A93DA608AD918F472);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF24F4A3F68E5CF26ACA7939EE5A7E9EC9904D86E);
		s_Il2CppMethodInitialized = true;
	}
	OSNotification_t554DC6C0C4C4F2E6602C4C5E096252126B0EAD72 * V_0 = NULL;
	OSNotificationPayload_tC710F220B7749FA10F167E672736061B3B774BD2 * V_1 = NULL;
	Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * V_2 = NULL;
	{
		// OSNotification notification = new OSNotification();
		OSNotification_t554DC6C0C4C4F2E6602C4C5E096252126B0EAD72 * L_0 = (OSNotification_t554DC6C0C4C4F2E6602C4C5E096252126B0EAD72 *)il2cpp_codegen_object_new(OSNotification_t554DC6C0C4C4F2E6602C4C5E096252126B0EAD72_il2cpp_TypeInfo_var);
		OSNotification__ctor_m6E1749773FF3F7979E219FF4BEAD8927DA7FDB03(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		// OSNotificationPayload payload = new OSNotificationPayload();
		OSNotificationPayload_tC710F220B7749FA10F167E672736061B3B774BD2 * L_1 = (OSNotificationPayload_tC710F220B7749FA10F167E672736061B3B774BD2 *)il2cpp_codegen_object_new(OSNotificationPayload_tC710F220B7749FA10F167E672736061B3B774BD2_il2cpp_TypeInfo_var);
		OSNotificationPayload__ctor_m0D83B11E3E859EE3DA9004AF697FCFAB451A9D8A(L_1, /*hidden argument*/NULL);
		V_1 = L_1;
		// var payloadObj = jsonObject["payload"] as Dictionary<string, object>;
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_2 = ___jsonObject0;
		NullCheck(L_2);
		RuntimeObject * L_3;
		L_3 = Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D(L_2, _stringLiteral55AC598ED5884D77F7D97920AA5DDDDA2CAA02B4, /*hidden argument*/Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D_RuntimeMethod_var);
		V_2 = ((Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *)IsInstClass((RuntimeObject*)L_3, Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_il2cpp_TypeInfo_var));
		// if (payloadObj.ContainsKey("notificationID"))
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_4 = V_2;
		NullCheck(L_4);
		bool L_5;
		L_5 = Dictionary_2_ContainsKey_m3C1B28325435E61FFAD431E314EABF915B79A55E(L_4, _stringLiteral7BA4811D9B4DD1C83525D6D519B43A954269123C, /*hidden argument*/Dictionary_2_ContainsKey_m3C1B28325435E61FFAD431E314EABF915B79A55E_RuntimeMethod_var);
		if (!L_5)
		{
			goto IL_0040;
		}
	}
	{
		// payload.notificationID =
		//     payloadObj["notificationID"] as string;
		OSNotificationPayload_tC710F220B7749FA10F167E672736061B3B774BD2 * L_6 = V_1;
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_7 = V_2;
		NullCheck(L_7);
		RuntimeObject * L_8;
		L_8 = Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D(L_7, _stringLiteral7BA4811D9B4DD1C83525D6D519B43A954269123C, /*hidden argument*/Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D_RuntimeMethod_var);
		NullCheck(L_6);
		L_6->set_notificationID_0(((String_t*)IsInstSealed((RuntimeObject*)L_8, String_t_il2cpp_TypeInfo_var)));
	}

IL_0040:
	{
		// if (payloadObj.ContainsKey("sound")) payload.sound = payloadObj["sound"] as string;
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_9 = V_2;
		NullCheck(L_9);
		bool L_10;
		L_10 = Dictionary_2_ContainsKey_m3C1B28325435E61FFAD431E314EABF915B79A55E(L_9, _stringLiteral240BE9B5E609F0DD8657150691504C4DE92A0925, /*hidden argument*/Dictionary_2_ContainsKey_m3C1B28325435E61FFAD431E314EABF915B79A55E_RuntimeMethod_var);
		if (!L_10)
		{
			goto IL_0063;
		}
	}
	{
		// if (payloadObj.ContainsKey("sound")) payload.sound = payloadObj["sound"] as string;
		OSNotificationPayload_tC710F220B7749FA10F167E672736061B3B774BD2 * L_11 = V_1;
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_12 = V_2;
		NullCheck(L_12);
		RuntimeObject * L_13;
		L_13 = Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D(L_12, _stringLiteral240BE9B5E609F0DD8657150691504C4DE92A0925, /*hidden argument*/Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D_RuntimeMethod_var);
		NullCheck(L_11);
		L_11->set_sound_1(((String_t*)IsInstSealed((RuntimeObject*)L_13, String_t_il2cpp_TypeInfo_var)));
	}

IL_0063:
	{
		// if (payloadObj.ContainsKey("title")) payload.title = payloadObj["title"] as string;
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_14 = V_2;
		NullCheck(L_14);
		bool L_15;
		L_15 = Dictionary_2_ContainsKey_m3C1B28325435E61FFAD431E314EABF915B79A55E(L_14, _stringLiteralC7B4D926EF9532A71B25AEC040A33D52C926425F, /*hidden argument*/Dictionary_2_ContainsKey_m3C1B28325435E61FFAD431E314EABF915B79A55E_RuntimeMethod_var);
		if (!L_15)
		{
			goto IL_0086;
		}
	}
	{
		// if (payloadObj.ContainsKey("title")) payload.title = payloadObj["title"] as string;
		OSNotificationPayload_tC710F220B7749FA10F167E672736061B3B774BD2 * L_16 = V_1;
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_17 = V_2;
		NullCheck(L_17);
		RuntimeObject * L_18;
		L_18 = Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D(L_17, _stringLiteralC7B4D926EF9532A71B25AEC040A33D52C926425F, /*hidden argument*/Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D_RuntimeMethod_var);
		NullCheck(L_16);
		L_16->set_title_2(((String_t*)IsInstSealed((RuntimeObject*)L_18, String_t_il2cpp_TypeInfo_var)));
	}

IL_0086:
	{
		// if (payloadObj.ContainsKey("body")) payload.body = payloadObj["body"] as string;
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_19 = V_2;
		NullCheck(L_19);
		bool L_20;
		L_20 = Dictionary_2_ContainsKey_m3C1B28325435E61FFAD431E314EABF915B79A55E(L_19, _stringLiteralCD002DD70C7AAC9CFF6D7D4821927E13D2989493, /*hidden argument*/Dictionary_2_ContainsKey_m3C1B28325435E61FFAD431E314EABF915B79A55E_RuntimeMethod_var);
		if (!L_20)
		{
			goto IL_00a9;
		}
	}
	{
		// if (payloadObj.ContainsKey("body")) payload.body = payloadObj["body"] as string;
		OSNotificationPayload_tC710F220B7749FA10F167E672736061B3B774BD2 * L_21 = V_1;
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_22 = V_2;
		NullCheck(L_22);
		RuntimeObject * L_23;
		L_23 = Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D(L_22, _stringLiteralCD002DD70C7AAC9CFF6D7D4821927E13D2989493, /*hidden argument*/Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D_RuntimeMethod_var);
		NullCheck(L_21);
		L_21->set_body_3(((String_t*)IsInstSealed((RuntimeObject*)L_23, String_t_il2cpp_TypeInfo_var)));
	}

IL_00a9:
	{
		// if (payloadObj.ContainsKey("subtitle")) payload.subtitle = payloadObj["subtitle"] as string;
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_24 = V_2;
		NullCheck(L_24);
		bool L_25;
		L_25 = Dictionary_2_ContainsKey_m3C1B28325435E61FFAD431E314EABF915B79A55E(L_24, _stringLiteral61FFF631210305266275E5181A82553B20C27BED, /*hidden argument*/Dictionary_2_ContainsKey_m3C1B28325435E61FFAD431E314EABF915B79A55E_RuntimeMethod_var);
		if (!L_25)
		{
			goto IL_00cc;
		}
	}
	{
		// if (payloadObj.ContainsKey("subtitle")) payload.subtitle = payloadObj["subtitle"] as string;
		OSNotificationPayload_tC710F220B7749FA10F167E672736061B3B774BD2 * L_26 = V_1;
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_27 = V_2;
		NullCheck(L_27);
		RuntimeObject * L_28;
		L_28 = Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D(L_27, _stringLiteral61FFF631210305266275E5181A82553B20C27BED, /*hidden argument*/Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D_RuntimeMethod_var);
		NullCheck(L_26);
		L_26->set_subtitle_4(((String_t*)IsInstSealed((RuntimeObject*)L_28, String_t_il2cpp_TypeInfo_var)));
	}

IL_00cc:
	{
		// if (payloadObj.ContainsKey("launchURL")) payload.launchURL = payloadObj["launchURL"] as string;
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_29 = V_2;
		NullCheck(L_29);
		bool L_30;
		L_30 = Dictionary_2_ContainsKey_m3C1B28325435E61FFAD431E314EABF915B79A55E(L_29, _stringLiteral55BCDA18DECBD8C76084B19CD63F790E3ECAD78C, /*hidden argument*/Dictionary_2_ContainsKey_m3C1B28325435E61FFAD431E314EABF915B79A55E_RuntimeMethod_var);
		if (!L_30)
		{
			goto IL_00ef;
		}
	}
	{
		// if (payloadObj.ContainsKey("launchURL")) payload.launchURL = payloadObj["launchURL"] as string;
		OSNotificationPayload_tC710F220B7749FA10F167E672736061B3B774BD2 * L_31 = V_1;
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_32 = V_2;
		NullCheck(L_32);
		RuntimeObject * L_33;
		L_33 = Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D(L_32, _stringLiteral55BCDA18DECBD8C76084B19CD63F790E3ECAD78C, /*hidden argument*/Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D_RuntimeMethod_var);
		NullCheck(L_31);
		L_31->set_launchURL_5(((String_t*)IsInstSealed((RuntimeObject*)L_33, String_t_il2cpp_TypeInfo_var)));
	}

IL_00ef:
	{
		// if (payloadObj.ContainsKey("additionalData"))
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_34 = V_2;
		NullCheck(L_34);
		bool L_35;
		L_35 = Dictionary_2_ContainsKey_m3C1B28325435E61FFAD431E314EABF915B79A55E(L_34, _stringLiteral737770B3F764157DABB4CE6100DDE5F3A7607BE8, /*hidden argument*/Dictionary_2_ContainsKey_m3C1B28325435E61FFAD431E314EABF915B79A55E_RuntimeMethod_var);
		if (!L_35)
		{
			goto IL_0146;
		}
	}
	{
		// if (payloadObj["additionalData"] is string)
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_36 = V_2;
		NullCheck(L_36);
		RuntimeObject * L_37;
		L_37 = Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D(L_36, _stringLiteral737770B3F764157DABB4CE6100DDE5F3A7607BE8, /*hidden argument*/Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D_RuntimeMethod_var);
		if (!((String_t*)IsInstSealed((RuntimeObject*)L_37, String_t_il2cpp_TypeInfo_var)))
		{
			goto IL_0130;
		}
	}
	{
		// payload.additionalData =
		//     Json.Deserialize(payloadObj["additionalData"] as string) as Dictionary<string, object>;
		OSNotificationPayload_tC710F220B7749FA10F167E672736061B3B774BD2 * L_38 = V_1;
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_39 = V_2;
		NullCheck(L_39);
		RuntimeObject * L_40;
		L_40 = Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D(L_39, _stringLiteral737770B3F764157DABB4CE6100DDE5F3A7607BE8, /*hidden argument*/Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D_RuntimeMethod_var);
		RuntimeObject * L_41;
		L_41 = Json_Deserialize_m4F6ECB958C77AF596B8666DDF7B41BAF2F0FCE10(((String_t*)IsInstSealed((RuntimeObject*)L_40, String_t_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		NullCheck(L_38);
		L_38->set_additionalData_6(((Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *)IsInstClass((RuntimeObject*)L_41, Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_il2cpp_TypeInfo_var)));
		goto IL_0146;
	}

IL_0130:
	{
		// payload.additionalData = payloadObj["additionalData"] as Dictionary<string, object>;
		OSNotificationPayload_tC710F220B7749FA10F167E672736061B3B774BD2 * L_42 = V_1;
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_43 = V_2;
		NullCheck(L_43);
		RuntimeObject * L_44;
		L_44 = Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D(L_43, _stringLiteral737770B3F764157DABB4CE6100DDE5F3A7607BE8, /*hidden argument*/Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D_RuntimeMethod_var);
		NullCheck(L_42);
		L_42->set_additionalData_6(((Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *)IsInstClass((RuntimeObject*)L_44, Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_il2cpp_TypeInfo_var)));
	}

IL_0146:
	{
		// if (payloadObj.ContainsKey("actionButtons"))
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_45 = V_2;
		NullCheck(L_45);
		bool L_46;
		L_46 = Dictionary_2_ContainsKey_m3C1B28325435E61FFAD431E314EABF915B79A55E(L_45, _stringLiteral7AA6DC89F58BAAC908DD46FA2A87D7E8FB2F4A98, /*hidden argument*/Dictionary_2_ContainsKey_m3C1B28325435E61FFAD431E314EABF915B79A55E_RuntimeMethod_var);
		if (!L_46)
		{
			goto IL_019d;
		}
	}
	{
		// if (payloadObj["actionButtons"] is string)
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_47 = V_2;
		NullCheck(L_47);
		RuntimeObject * L_48;
		L_48 = Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D(L_47, _stringLiteral7AA6DC89F58BAAC908DD46FA2A87D7E8FB2F4A98, /*hidden argument*/Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D_RuntimeMethod_var);
		if (!((String_t*)IsInstSealed((RuntimeObject*)L_48, String_t_il2cpp_TypeInfo_var)))
		{
			goto IL_0187;
		}
	}
	{
		// payload.actionButtons =
		//     Json.Deserialize(payloadObj["actionButtons"] as string) as Dictionary<string, object>;
		OSNotificationPayload_tC710F220B7749FA10F167E672736061B3B774BD2 * L_49 = V_1;
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_50 = V_2;
		NullCheck(L_50);
		RuntimeObject * L_51;
		L_51 = Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D(L_50, _stringLiteral7AA6DC89F58BAAC908DD46FA2A87D7E8FB2F4A98, /*hidden argument*/Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D_RuntimeMethod_var);
		RuntimeObject * L_52;
		L_52 = Json_Deserialize_m4F6ECB958C77AF596B8666DDF7B41BAF2F0FCE10(((String_t*)IsInstSealed((RuntimeObject*)L_51, String_t_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		NullCheck(L_49);
		L_49->set_actionButtons_7(((Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *)IsInstClass((RuntimeObject*)L_52, Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_il2cpp_TypeInfo_var)));
		goto IL_019d;
	}

IL_0187:
	{
		// payload.actionButtons = payloadObj["actionButtons"] as Dictionary<string, object>;
		OSNotificationPayload_tC710F220B7749FA10F167E672736061B3B774BD2 * L_53 = V_1;
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_54 = V_2;
		NullCheck(L_54);
		RuntimeObject * L_55;
		L_55 = Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D(L_54, _stringLiteral7AA6DC89F58BAAC908DD46FA2A87D7E8FB2F4A98, /*hidden argument*/Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D_RuntimeMethod_var);
		NullCheck(L_53);
		L_53->set_actionButtons_7(((Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *)IsInstClass((RuntimeObject*)L_55, Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_il2cpp_TypeInfo_var)));
	}

IL_019d:
	{
		// if (payloadObj.ContainsKey("contentAvailable"))
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_56 = V_2;
		NullCheck(L_56);
		bool L_57;
		L_57 = Dictionary_2_ContainsKey_m3C1B28325435E61FFAD431E314EABF915B79A55E(L_56, _stringLiteral8AC5E01C0ED930FDDF47429AABA2FD04371BB804, /*hidden argument*/Dictionary_2_ContainsKey_m3C1B28325435E61FFAD431E314EABF915B79A55E_RuntimeMethod_var);
		if (!L_57)
		{
			goto IL_01c0;
		}
	}
	{
		// payload.contentAvailable =
		//     (bool) payloadObj["contentAvailable"];
		OSNotificationPayload_tC710F220B7749FA10F167E672736061B3B774BD2 * L_58 = V_1;
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_59 = V_2;
		NullCheck(L_59);
		RuntimeObject * L_60;
		L_60 = Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D(L_59, _stringLiteral8AC5E01C0ED930FDDF47429AABA2FD04371BB804, /*hidden argument*/Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D_RuntimeMethod_var);
		NullCheck(L_58);
		L_58->set_contentAvailable_8(((*(bool*)((bool*)UnBox(L_60, Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var)))));
	}

IL_01c0:
	{
		// if (payloadObj.ContainsKey("badge")) payload.badge = Convert.ToInt32(payloadObj["badge"]);
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_61 = V_2;
		NullCheck(L_61);
		bool L_62;
		L_62 = Dictionary_2_ContainsKey_m3C1B28325435E61FFAD431E314EABF915B79A55E(L_61, _stringLiteralF099946CD3172EC2D59FF79A93DA608AD918F472, /*hidden argument*/Dictionary_2_ContainsKey_m3C1B28325435E61FFAD431E314EABF915B79A55E_RuntimeMethod_var);
		if (!L_62)
		{
			goto IL_01e3;
		}
	}
	{
		// if (payloadObj.ContainsKey("badge")) payload.badge = Convert.ToInt32(payloadObj["badge"]);
		OSNotificationPayload_tC710F220B7749FA10F167E672736061B3B774BD2 * L_63 = V_1;
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_64 = V_2;
		NullCheck(L_64);
		RuntimeObject * L_65;
		L_65 = Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D(L_64, _stringLiteralF099946CD3172EC2D59FF79A93DA608AD918F472, /*hidden argument*/Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		int32_t L_66;
		L_66 = Convert_ToInt32_mFFEDED67681E3EC8705BCA890BBC206514431B4A(L_65, /*hidden argument*/NULL);
		NullCheck(L_63);
		L_63->set_badge_9(L_66);
	}

IL_01e3:
	{
		// if (payloadObj.ContainsKey("smallIcon")) payload.smallIcon = payloadObj["smallIcon"] as string;
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_67 = V_2;
		NullCheck(L_67);
		bool L_68;
		L_68 = Dictionary_2_ContainsKey_m3C1B28325435E61FFAD431E314EABF915B79A55E(L_67, _stringLiteralF24F4A3F68E5CF26ACA7939EE5A7E9EC9904D86E, /*hidden argument*/Dictionary_2_ContainsKey_m3C1B28325435E61FFAD431E314EABF915B79A55E_RuntimeMethod_var);
		if (!L_68)
		{
			goto IL_0206;
		}
	}
	{
		// if (payloadObj.ContainsKey("smallIcon")) payload.smallIcon = payloadObj["smallIcon"] as string;
		OSNotificationPayload_tC710F220B7749FA10F167E672736061B3B774BD2 * L_69 = V_1;
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_70 = V_2;
		NullCheck(L_70);
		RuntimeObject * L_71;
		L_71 = Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D(L_70, _stringLiteralF24F4A3F68E5CF26ACA7939EE5A7E9EC9904D86E, /*hidden argument*/Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D_RuntimeMethod_var);
		NullCheck(L_69);
		L_69->set_smallIcon_10(((String_t*)IsInstSealed((RuntimeObject*)L_71, String_t_il2cpp_TypeInfo_var)));
	}

IL_0206:
	{
		// if (payloadObj.ContainsKey("largeIcon")) payload.largeIcon = payloadObj["largeIcon"] as string;
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_72 = V_2;
		NullCheck(L_72);
		bool L_73;
		L_73 = Dictionary_2_ContainsKey_m3C1B28325435E61FFAD431E314EABF915B79A55E(L_72, _stringLiteralCA38A2A438DBE868658AF134FDA5094E8ED31EAD, /*hidden argument*/Dictionary_2_ContainsKey_m3C1B28325435E61FFAD431E314EABF915B79A55E_RuntimeMethod_var);
		if (!L_73)
		{
			goto IL_0229;
		}
	}
	{
		// if (payloadObj.ContainsKey("largeIcon")) payload.largeIcon = payloadObj["largeIcon"] as string;
		OSNotificationPayload_tC710F220B7749FA10F167E672736061B3B774BD2 * L_74 = V_1;
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_75 = V_2;
		NullCheck(L_75);
		RuntimeObject * L_76;
		L_76 = Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D(L_75, _stringLiteralCA38A2A438DBE868658AF134FDA5094E8ED31EAD, /*hidden argument*/Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D_RuntimeMethod_var);
		NullCheck(L_74);
		L_74->set_largeIcon_11(((String_t*)IsInstSealed((RuntimeObject*)L_76, String_t_il2cpp_TypeInfo_var)));
	}

IL_0229:
	{
		// if (payloadObj.ContainsKey("bigPicture")) payload.bigPicture = payloadObj["bigPicture"] as string;
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_77 = V_2;
		NullCheck(L_77);
		bool L_78;
		L_78 = Dictionary_2_ContainsKey_m3C1B28325435E61FFAD431E314EABF915B79A55E(L_77, _stringLiteral84C56EB5613DF38582973C9BB51B037D6DD69651, /*hidden argument*/Dictionary_2_ContainsKey_m3C1B28325435E61FFAD431E314EABF915B79A55E_RuntimeMethod_var);
		if (!L_78)
		{
			goto IL_024c;
		}
	}
	{
		// if (payloadObj.ContainsKey("bigPicture")) payload.bigPicture = payloadObj["bigPicture"] as string;
		OSNotificationPayload_tC710F220B7749FA10F167E672736061B3B774BD2 * L_79 = V_1;
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_80 = V_2;
		NullCheck(L_80);
		RuntimeObject * L_81;
		L_81 = Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D(L_80, _stringLiteral84C56EB5613DF38582973C9BB51B037D6DD69651, /*hidden argument*/Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D_RuntimeMethod_var);
		NullCheck(L_79);
		L_79->set_bigPicture_12(((String_t*)IsInstSealed((RuntimeObject*)L_81, String_t_il2cpp_TypeInfo_var)));
	}

IL_024c:
	{
		// if (payloadObj.ContainsKey("smallIconAccentColor"))
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_82 = V_2;
		NullCheck(L_82);
		bool L_83;
		L_83 = Dictionary_2_ContainsKey_m3C1B28325435E61FFAD431E314EABF915B79A55E(L_82, _stringLiteralAD98798087396DE6FBBE1C8D540AB7643EC8804C, /*hidden argument*/Dictionary_2_ContainsKey_m3C1B28325435E61FFAD431E314EABF915B79A55E_RuntimeMethod_var);
		if (!L_83)
		{
			goto IL_026f;
		}
	}
	{
		// payload.smallIconAccentColor =
		//     payloadObj["smallIconAccentColor"] as string;
		OSNotificationPayload_tC710F220B7749FA10F167E672736061B3B774BD2 * L_84 = V_1;
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_85 = V_2;
		NullCheck(L_85);
		RuntimeObject * L_86;
		L_86 = Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D(L_85, _stringLiteralAD98798087396DE6FBBE1C8D540AB7643EC8804C, /*hidden argument*/Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D_RuntimeMethod_var);
		NullCheck(L_84);
		L_84->set_smallIconAccentColor_13(((String_t*)IsInstSealed((RuntimeObject*)L_86, String_t_il2cpp_TypeInfo_var)));
	}

IL_026f:
	{
		// if (payloadObj.ContainsKey("ledColor")) payload.ledColor = payloadObj["ledColor"] as string;
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_87 = V_2;
		NullCheck(L_87);
		bool L_88;
		L_88 = Dictionary_2_ContainsKey_m3C1B28325435E61FFAD431E314EABF915B79A55E(L_87, _stringLiteralB8DDA9ED9882200BD39E3BD909BD0F58222BFAB6, /*hidden argument*/Dictionary_2_ContainsKey_m3C1B28325435E61FFAD431E314EABF915B79A55E_RuntimeMethod_var);
		if (!L_88)
		{
			goto IL_0292;
		}
	}
	{
		// if (payloadObj.ContainsKey("ledColor")) payload.ledColor = payloadObj["ledColor"] as string;
		OSNotificationPayload_tC710F220B7749FA10F167E672736061B3B774BD2 * L_89 = V_1;
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_90 = V_2;
		NullCheck(L_90);
		RuntimeObject * L_91;
		L_91 = Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D(L_90, _stringLiteralB8DDA9ED9882200BD39E3BD909BD0F58222BFAB6, /*hidden argument*/Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D_RuntimeMethod_var);
		NullCheck(L_89);
		L_89->set_ledColor_14(((String_t*)IsInstSealed((RuntimeObject*)L_91, String_t_il2cpp_TypeInfo_var)));
	}

IL_0292:
	{
		// if (payloadObj.ContainsKey("lockScreenVisibility"))
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_92 = V_2;
		NullCheck(L_92);
		bool L_93;
		L_93 = Dictionary_2_ContainsKey_m3C1B28325435E61FFAD431E314EABF915B79A55E(L_92, _stringLiteralD1BE973B5F59125FC8CC7D8264A1F724131BB623, /*hidden argument*/Dictionary_2_ContainsKey_m3C1B28325435E61FFAD431E314EABF915B79A55E_RuntimeMethod_var);
		if (!L_93)
		{
			goto IL_02b5;
		}
	}
	{
		// payload.lockScreenVisibility =
		//     Convert.ToInt32(payloadObj["lockScreenVisibility"]);
		OSNotificationPayload_tC710F220B7749FA10F167E672736061B3B774BD2 * L_94 = V_1;
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_95 = V_2;
		NullCheck(L_95);
		RuntimeObject * L_96;
		L_96 = Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D(L_95, _stringLiteralD1BE973B5F59125FC8CC7D8264A1F724131BB623, /*hidden argument*/Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		int32_t L_97;
		L_97 = Convert_ToInt32_mFFEDED67681E3EC8705BCA890BBC206514431B4A(L_96, /*hidden argument*/NULL);
		NullCheck(L_94);
		L_94->set_lockScreenVisibility_15(L_97);
	}

IL_02b5:
	{
		// if (payloadObj.ContainsKey("groupKey")) payload.groupKey = payloadObj["groupKey"] as string;
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_98 = V_2;
		NullCheck(L_98);
		bool L_99;
		L_99 = Dictionary_2_ContainsKey_m3C1B28325435E61FFAD431E314EABF915B79A55E(L_98, _stringLiteralA87C61B80C637AF7634ECA7413C525DA4D22787A, /*hidden argument*/Dictionary_2_ContainsKey_m3C1B28325435E61FFAD431E314EABF915B79A55E_RuntimeMethod_var);
		if (!L_99)
		{
			goto IL_02d8;
		}
	}
	{
		// if (payloadObj.ContainsKey("groupKey")) payload.groupKey = payloadObj["groupKey"] as string;
		OSNotificationPayload_tC710F220B7749FA10F167E672736061B3B774BD2 * L_100 = V_1;
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_101 = V_2;
		NullCheck(L_101);
		RuntimeObject * L_102;
		L_102 = Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D(L_101, _stringLiteralA87C61B80C637AF7634ECA7413C525DA4D22787A, /*hidden argument*/Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D_RuntimeMethod_var);
		NullCheck(L_100);
		L_100->set_groupKey_16(((String_t*)IsInstSealed((RuntimeObject*)L_102, String_t_il2cpp_TypeInfo_var)));
	}

IL_02d8:
	{
		// if (payloadObj.ContainsKey("groupMessage")) payload.groupMessage = payloadObj["groupMessage"] as string;
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_103 = V_2;
		NullCheck(L_103);
		bool L_104;
		L_104 = Dictionary_2_ContainsKey_m3C1B28325435E61FFAD431E314EABF915B79A55E(L_103, _stringLiteral03CE17F590FA4374BBD77BB910F23D5C321E1DF4, /*hidden argument*/Dictionary_2_ContainsKey_m3C1B28325435E61FFAD431E314EABF915B79A55E_RuntimeMethod_var);
		if (!L_104)
		{
			goto IL_02fb;
		}
	}
	{
		// if (payloadObj.ContainsKey("groupMessage")) payload.groupMessage = payloadObj["groupMessage"] as string;
		OSNotificationPayload_tC710F220B7749FA10F167E672736061B3B774BD2 * L_105 = V_1;
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_106 = V_2;
		NullCheck(L_106);
		RuntimeObject * L_107;
		L_107 = Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D(L_106, _stringLiteral03CE17F590FA4374BBD77BB910F23D5C321E1DF4, /*hidden argument*/Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D_RuntimeMethod_var);
		NullCheck(L_105);
		L_105->set_groupMessage_17(((String_t*)IsInstSealed((RuntimeObject*)L_107, String_t_il2cpp_TypeInfo_var)));
	}

IL_02fb:
	{
		// if (payloadObj.ContainsKey("fromProjectNumber"))
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_108 = V_2;
		NullCheck(L_108);
		bool L_109;
		L_109 = Dictionary_2_ContainsKey_m3C1B28325435E61FFAD431E314EABF915B79A55E(L_108, _stringLiteralD0209804F423F0C2698D8BEDDD802E490C489A40, /*hidden argument*/Dictionary_2_ContainsKey_m3C1B28325435E61FFAD431E314EABF915B79A55E_RuntimeMethod_var);
		if (!L_109)
		{
			goto IL_031e;
		}
	}
	{
		// payload.fromProjectNumber =
		//     payloadObj["fromProjectNumber"] as string;
		OSNotificationPayload_tC710F220B7749FA10F167E672736061B3B774BD2 * L_110 = V_1;
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_111 = V_2;
		NullCheck(L_111);
		RuntimeObject * L_112;
		L_112 = Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D(L_111, _stringLiteralD0209804F423F0C2698D8BEDDD802E490C489A40, /*hidden argument*/Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D_RuntimeMethod_var);
		NullCheck(L_110);
		L_110->set_fromProjectNumber_18(((String_t*)IsInstSealed((RuntimeObject*)L_112, String_t_il2cpp_TypeInfo_var)));
	}

IL_031e:
	{
		// notification.payload = payload;
		OSNotification_t554DC6C0C4C4F2E6602C4C5E096252126B0EAD72 * L_113 = V_0;
		OSNotificationPayload_tC710F220B7749FA10F167E672736061B3B774BD2 * L_114 = V_1;
		NullCheck(L_113);
		L_113->set_payload_5(L_114);
		// if (jsonObject.ContainsKey("isAppInFocus")) notification.isAppInFocus = (bool) jsonObject["isAppInFocus"];
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_115 = ___jsonObject0;
		NullCheck(L_115);
		bool L_116;
		L_116 = Dictionary_2_ContainsKey_m3C1B28325435E61FFAD431E314EABF915B79A55E(L_115, _stringLiteral449A390479E90BFAA4AA59C9E38C9E52D3E4E211, /*hidden argument*/Dictionary_2_ContainsKey_m3C1B28325435E61FFAD431E314EABF915B79A55E_RuntimeMethod_var);
		if (!L_116)
		{
			goto IL_0348;
		}
	}
	{
		// if (jsonObject.ContainsKey("isAppInFocus")) notification.isAppInFocus = (bool) jsonObject["isAppInFocus"];
		OSNotification_t554DC6C0C4C4F2E6602C4C5E096252126B0EAD72 * L_117 = V_0;
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_118 = ___jsonObject0;
		NullCheck(L_118);
		RuntimeObject * L_119;
		L_119 = Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D(L_118, _stringLiteral449A390479E90BFAA4AA59C9E38C9E52D3E4E211, /*hidden argument*/Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D_RuntimeMethod_var);
		NullCheck(L_117);
		L_117->set_isAppInFocus_0(((*(bool*)((bool*)UnBox(L_119, Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var)))));
	}

IL_0348:
	{
		// if (jsonObject.ContainsKey("shown")) notification.shown = (bool) jsonObject["shown"];
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_120 = ___jsonObject0;
		NullCheck(L_120);
		bool L_121;
		L_121 = Dictionary_2_ContainsKey_m3C1B28325435E61FFAD431E314EABF915B79A55E(L_120, _stringLiteral1EEA747F426E86C7BA93F023FA884C9357A942DB, /*hidden argument*/Dictionary_2_ContainsKey_m3C1B28325435E61FFAD431E314EABF915B79A55E_RuntimeMethod_var);
		if (!L_121)
		{
			goto IL_036b;
		}
	}
	{
		// if (jsonObject.ContainsKey("shown")) notification.shown = (bool) jsonObject["shown"];
		OSNotification_t554DC6C0C4C4F2E6602C4C5E096252126B0EAD72 * L_122 = V_0;
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_123 = ___jsonObject0;
		NullCheck(L_123);
		RuntimeObject * L_124;
		L_124 = Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D(L_123, _stringLiteral1EEA747F426E86C7BA93F023FA884C9357A942DB, /*hidden argument*/Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D_RuntimeMethod_var);
		NullCheck(L_122);
		L_122->set_shown_1(((*(bool*)((bool*)UnBox(L_124, Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var)))));
	}

IL_036b:
	{
		// if (jsonObject.ContainsKey("silentNotification"))
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_125 = ___jsonObject0;
		NullCheck(L_125);
		bool L_126;
		L_126 = Dictionary_2_ContainsKey_m3C1B28325435E61FFAD431E314EABF915B79A55E(L_125, _stringLiteral44846090648036BB6C68BEDC0AFAE9D786E2D352, /*hidden argument*/Dictionary_2_ContainsKey_m3C1B28325435E61FFAD431E314EABF915B79A55E_RuntimeMethod_var);
		if (!L_126)
		{
			goto IL_038e;
		}
	}
	{
		// notification.silentNotification =
		//     (bool) jsonObject["silentNotification"];
		OSNotification_t554DC6C0C4C4F2E6602C4C5E096252126B0EAD72 * L_127 = V_0;
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_128 = ___jsonObject0;
		NullCheck(L_128);
		RuntimeObject * L_129;
		L_129 = Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D(L_128, _stringLiteral44846090648036BB6C68BEDC0AFAE9D786E2D352, /*hidden argument*/Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D_RuntimeMethod_var);
		NullCheck(L_127);
		L_127->set_silentNotification_2(((*(bool*)((bool*)UnBox(L_129, Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var)))));
	}

IL_038e:
	{
		// if (jsonObject.ContainsKey("androidNotificationId"))
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_130 = ___jsonObject0;
		NullCheck(L_130);
		bool L_131;
		L_131 = Dictionary_2_ContainsKey_m3C1B28325435E61FFAD431E314EABF915B79A55E(L_130, _stringLiteral9E6A16EA00C50AC4711E813882BEA6313BE62302, /*hidden argument*/Dictionary_2_ContainsKey_m3C1B28325435E61FFAD431E314EABF915B79A55E_RuntimeMethod_var);
		if (!L_131)
		{
			goto IL_03b1;
		}
	}
	{
		// notification.androidNotificationId =
		//     Convert.ToInt32(jsonObject["androidNotificationId"]);
		OSNotification_t554DC6C0C4C4F2E6602C4C5E096252126B0EAD72 * L_132 = V_0;
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_133 = ___jsonObject0;
		NullCheck(L_133);
		RuntimeObject * L_134;
		L_134 = Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D(L_133, _stringLiteral9E6A16EA00C50AC4711E813882BEA6313BE62302, /*hidden argument*/Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		int32_t L_135;
		L_135 = Convert_ToInt32_mFFEDED67681E3EC8705BCA890BBC206514431B4A(L_134, /*hidden argument*/NULL);
		NullCheck(L_132);
		L_132->set_androidNotificationId_3(L_135);
	}

IL_03b1:
	{
		// if (jsonObject.ContainsKey("displayType"))
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_136 = ___jsonObject0;
		NullCheck(L_136);
		bool L_137;
		L_137 = Dictionary_2_ContainsKey_m3C1B28325435E61FFAD431E314EABF915B79A55E(L_136, _stringLiteralDA7962E79DE9971EF95CECB194FDE602D7DCDA96, /*hidden argument*/Dictionary_2_ContainsKey_m3C1B28325435E61FFAD431E314EABF915B79A55E_RuntimeMethod_var);
		if (!L_137)
		{
			goto IL_03d4;
		}
	}
	{
		// notification.displayType =
		//     (OSNotification.DisplayType) Convert.ToInt32(jsonObject["displayType"]);
		OSNotification_t554DC6C0C4C4F2E6602C4C5E096252126B0EAD72 * L_138 = V_0;
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_139 = ___jsonObject0;
		NullCheck(L_139);
		RuntimeObject * L_140;
		L_140 = Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D(L_139, _stringLiteralDA7962E79DE9971EF95CECB194FDE602D7DCDA96, /*hidden argument*/Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		int32_t L_141;
		L_141 = Convert_ToInt32_mFFEDED67681E3EC8705BCA890BBC206514431B4A(L_140, /*hidden argument*/NULL);
		NullCheck(L_138);
		L_138->set_displayType_4(L_141);
	}

IL_03d4:
	{
		// return notification;
		OSNotification_t554DC6C0C4C4F2E6602C4C5E096252126B0EAD72 * L_142 = V_0;
		return L_142;
	}
}
// System.Void OneSignal::onPushNotificationReceived(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneSignal_onPushNotificationReceived_mFCA783622D0D5C77EC6FAEEE2E665F479EB35049 (OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C * __this, String_t* ___jsonString0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * V_0 = NULL;
	{
		// if (builder.notificationReceivedDelegate != null)
		IL2CPP_RUNTIME_CLASS_INIT(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var);
		UnityBuilder_tDBFC88D88033BADCF56F27E95359EF77CF9ADFED * L_0 = ((OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var))->get_builder_14();
		NullCheck(L_0);
		NotificationReceived_tAD87EB0BF05ABA12EF33C2C0C3300278BA0CB814 * L_1 = L_0->get_notificationReceivedDelegate_3();
		if (!L_1)
		{
			goto IL_002e;
		}
	}
	{
		// var jsonObject = Json.Deserialize(jsonString) as Dictionary<string, object>;
		String_t* L_2 = ___jsonString0;
		RuntimeObject * L_3;
		L_3 = Json_Deserialize_m4F6ECB958C77AF596B8666DDF7B41BAF2F0FCE10(L_2, /*hidden argument*/NULL);
		V_0 = ((Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *)IsInstClass((RuntimeObject*)L_3, Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_il2cpp_TypeInfo_var));
		// builder.notificationReceivedDelegate(DictionaryToNotification(jsonObject));
		IL2CPP_RUNTIME_CLASS_INIT(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var);
		UnityBuilder_tDBFC88D88033BADCF56F27E95359EF77CF9ADFED * L_4 = ((OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var))->get_builder_14();
		NullCheck(L_4);
		NotificationReceived_tAD87EB0BF05ABA12EF33C2C0C3300278BA0CB814 * L_5 = L_4->get_notificationReceivedDelegate_3();
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_6 = V_0;
		OSNotification_t554DC6C0C4C4F2E6602C4C5E096252126B0EAD72 * L_7;
		L_7 = OneSignal_DictionaryToNotification_mE2E37E68961355812CDA6FA5D0025B5370CAD9CB(__this, L_6, /*hidden argument*/NULL);
		NullCheck(L_5);
		NotificationReceived_Invoke_m5C7278BB32535EEDD14D95287192CF05DB0FC156(L_5, L_7, /*hidden argument*/NULL);
	}

IL_002e:
	{
		// }
		return;
	}
}
// System.Void OneSignal::onPushNotificationOpened(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneSignal_onPushNotificationOpened_mAD98C86D226B01E4031F850A73139C10929B7026 (OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C * __this, String_t* ___jsonString0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m3C1B28325435E61FFAD431E314EABF915B79A55E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OSNotificationAction_t54C0BF5FEB98EBD72454642C9CAAD66B464C99AA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OSNotificationOpenedResult_t74C73E0CEA2EB83022E266EF9F12B5E721DD057F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3FE20946BA6B23BFF6A16331B412E0CFE9B755D3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral404D7682AFE93081033FF0CD1A9165B38F3DAF39);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9010398F7F524C05AB19445BDCE02E617A3E267);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * V_0 = NULL;
	OSNotificationAction_t54C0BF5FEB98EBD72454642C9CAAD66B464C99AA * V_1 = NULL;
	OSNotificationOpenedResult_t74C73E0CEA2EB83022E266EF9F12B5E721DD057F * V_2 = NULL;
	Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * V_3 = NULL;
	{
		// if (builder.notificationOpenedDelegate != null)
		IL2CPP_RUNTIME_CLASS_INIT(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var);
		UnityBuilder_tDBFC88D88033BADCF56F27E95359EF77CF9ADFED * L_0 = ((OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var))->get_builder_14();
		NullCheck(L_0);
		NotificationOpened_t1EAAB82F6D9989F1EC2B2A408858A3DDE351BBA0 * L_1 = L_0->get_notificationOpenedDelegate_4();
		if (!L_1)
		{
			goto IL_00be;
		}
	}
	{
		// Dictionary<string, object> jsonObject = Json.Deserialize(jsonString) as Dictionary<string, object>;
		String_t* L_2 = ___jsonString0;
		RuntimeObject * L_3;
		L_3 = Json_Deserialize_m4F6ECB958C77AF596B8666DDF7B41BAF2F0FCE10(L_2, /*hidden argument*/NULL);
		V_0 = ((Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *)IsInstClass((RuntimeObject*)L_3, Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_il2cpp_TypeInfo_var));
		// OSNotificationAction action = new OSNotificationAction();
		OSNotificationAction_t54C0BF5FEB98EBD72454642C9CAAD66B464C99AA * L_4 = (OSNotificationAction_t54C0BF5FEB98EBD72454642C9CAAD66B464C99AA *)il2cpp_codegen_object_new(OSNotificationAction_t54C0BF5FEB98EBD72454642C9CAAD66B464C99AA_il2cpp_TypeInfo_var);
		OSNotificationAction__ctor_m4B01FC919A0E58BACBF960E24B968C4AA926941A(L_4, /*hidden argument*/NULL);
		V_1 = L_4;
		// if (jsonObject.ContainsKey("action"))
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_5 = V_0;
		NullCheck(L_5);
		bool L_6;
		L_6 = Dictionary_2_ContainsKey_m3C1B28325435E61FFAD431E314EABF915B79A55E(L_5, _stringLiteralF9010398F7F524C05AB19445BDCE02E617A3E267, /*hidden argument*/Dictionary_2_ContainsKey_m3C1B28325435E61FFAD431E314EABF915B79A55E_RuntimeMethod_var);
		if (!L_6)
		{
			goto IL_0085;
		}
	}
	{
		// Dictionary<string, object> actionJsonObject = jsonObject["action"] as Dictionary<string, object>;
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_7 = V_0;
		NullCheck(L_7);
		RuntimeObject * L_8;
		L_8 = Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D(L_7, _stringLiteralF9010398F7F524C05AB19445BDCE02E617A3E267, /*hidden argument*/Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D_RuntimeMethod_var);
		V_3 = ((Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *)IsInstClass((RuntimeObject*)L_8, Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_il2cpp_TypeInfo_var));
		// if (actionJsonObject.ContainsKey("actionID"))
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_9 = V_3;
		NullCheck(L_9);
		bool L_10;
		L_10 = Dictionary_2_ContainsKey_m3C1B28325435E61FFAD431E314EABF915B79A55E(L_9, _stringLiteral404D7682AFE93081033FF0CD1A9165B38F3DAF39, /*hidden argument*/Dictionary_2_ContainsKey_m3C1B28325435E61FFAD431E314EABF915B79A55E_RuntimeMethod_var);
		if (!L_10)
		{
			goto IL_0062;
		}
	}
	{
		// action.actionID = actionJsonObject["actionID"] as string;
		OSNotificationAction_t54C0BF5FEB98EBD72454642C9CAAD66B464C99AA * L_11 = V_1;
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_12 = V_3;
		NullCheck(L_12);
		RuntimeObject * L_13;
		L_13 = Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D(L_12, _stringLiteral404D7682AFE93081033FF0CD1A9165B38F3DAF39, /*hidden argument*/Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D_RuntimeMethod_var);
		NullCheck(L_11);
		L_11->set_actionID_0(((String_t*)IsInstSealed((RuntimeObject*)L_13, String_t_il2cpp_TypeInfo_var)));
	}

IL_0062:
	{
		// if (actionJsonObject.ContainsKey("type"))
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_14 = V_3;
		NullCheck(L_14);
		bool L_15;
		L_15 = Dictionary_2_ContainsKey_m3C1B28325435E61FFAD431E314EABF915B79A55E(L_14, _stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7, /*hidden argument*/Dictionary_2_ContainsKey_m3C1B28325435E61FFAD431E314EABF915B79A55E_RuntimeMethod_var);
		if (!L_15)
		{
			goto IL_0085;
		}
	}
	{
		// action.type = (OSNotificationAction.ActionType) Convert.ToInt32(actionJsonObject["type"]);
		OSNotificationAction_t54C0BF5FEB98EBD72454642C9CAAD66B464C99AA * L_16 = V_1;
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_17 = V_3;
		NullCheck(L_17);
		RuntimeObject * L_18;
		L_18 = Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D(L_17, _stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7, /*hidden argument*/Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		int32_t L_19;
		L_19 = Convert_ToInt32_mFFEDED67681E3EC8705BCA890BBC206514431B4A(L_18, /*hidden argument*/NULL);
		NullCheck(L_16);
		L_16->set_type_1(L_19);
	}

IL_0085:
	{
		// OSNotificationOpenedResult result = new OSNotificationOpenedResult();
		OSNotificationOpenedResult_t74C73E0CEA2EB83022E266EF9F12B5E721DD057F * L_20 = (OSNotificationOpenedResult_t74C73E0CEA2EB83022E266EF9F12B5E721DD057F *)il2cpp_codegen_object_new(OSNotificationOpenedResult_t74C73E0CEA2EB83022E266EF9F12B5E721DD057F_il2cpp_TypeInfo_var);
		OSNotificationOpenedResult__ctor_m6B1E36689167D0D75F60E3E62DC3C5D3A3ABB998(L_20, /*hidden argument*/NULL);
		V_2 = L_20;
		// result.notification = DictionaryToNotification((Dictionary<string, object>) jsonObject["notification"]);
		OSNotificationOpenedResult_t74C73E0CEA2EB83022E266EF9F12B5E721DD057F * L_21 = V_2;
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_22 = V_0;
		NullCheck(L_22);
		RuntimeObject * L_23;
		L_23 = Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D(L_22, _stringLiteral3FE20946BA6B23BFF6A16331B412E0CFE9B755D3, /*hidden argument*/Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D_RuntimeMethod_var);
		OSNotification_t554DC6C0C4C4F2E6602C4C5E096252126B0EAD72 * L_24;
		L_24 = OneSignal_DictionaryToNotification_mE2E37E68961355812CDA6FA5D0025B5370CAD9CB(__this, ((Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *)CastclassClass((RuntimeObject*)L_23, Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		NullCheck(L_21);
		L_21->set_notification_1(L_24);
		// result.action = action;
		OSNotificationOpenedResult_t74C73E0CEA2EB83022E266EF9F12B5E721DD057F * L_25 = V_2;
		OSNotificationAction_t54C0BF5FEB98EBD72454642C9CAAD66B464C99AA * L_26 = V_1;
		NullCheck(L_25);
		L_25->set_action_0(L_26);
		// builder.notificationOpenedDelegate(result);
		IL2CPP_RUNTIME_CLASS_INIT(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var);
		UnityBuilder_tDBFC88D88033BADCF56F27E95359EF77CF9ADFED * L_27 = ((OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var))->get_builder_14();
		NullCheck(L_27);
		NotificationOpened_t1EAAB82F6D9989F1EC2B2A408858A3DDE351BBA0 * L_28 = L_27->get_notificationOpenedDelegate_4();
		OSNotificationOpenedResult_t74C73E0CEA2EB83022E266EF9F12B5E721DD057F * L_29 = V_2;
		NullCheck(L_28);
		NotificationOpened_Invoke_m59A3350E8B2917932D9183162DA3C32998E56416(L_28, L_29, /*hidden argument*/NULL);
	}

IL_00be:
	{
		// }
		return;
	}
}
// System.Void OneSignal::onIdsAvailable(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneSignal_onIdsAvailable_mD7EECC2A7C7A2158B662AB206AD7783488B524A2 (OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C * __this, String_t* ___jsonString0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m288872404D22932B8AE710EF7BEE1AF7064BD258_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m3D41B282C6E5156A390B58BF791E0CB3AB282E43_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mF5D8C5B9DBE4629B80CA94EBBF5F528C9A35FC3C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IdsAvailableCallback_t4542530853E11729402E55FCDDD09AD6FBC8B377_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B4D33ECEDCA004ACF5FBD9F549F536E73E5C059);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2C410EB1F22365EC1A74DF0D8C89C99D53453CDD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3D208B8D59BE45DA847378972F5873C295095CA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE144FB2BA65CCA8A37157EA2DED13F3F75C57B61);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * V_0 = NULL;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	{
		// if (string.IsNullOrEmpty(jsonString))
		String_t* L_0 = ___jsonString0;
		bool L_1;
		L_1 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_0, /*hidden argument*/NULL);
		if (!L_1)
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
		// var jsonObject = Json.Deserialize(jsonString) as Dictionary<string, object>;
		String_t* L_2 = ___jsonString0;
		RuntimeObject * L_3;
		L_3 = Json_Deserialize_m4F6ECB958C77AF596B8666DDF7B41BAF2F0FCE10(L_2, /*hidden argument*/NULL);
		V_0 = ((Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *)IsInstClass((RuntimeObject*)L_3, Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_il2cpp_TypeInfo_var));
		// if (!isValidDelegate(jsonObject))
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_4 = V_0;
		bool L_5;
		L_5 = OneSignal_isValidDelegate_m6E92E6BD705588CB1BCCE46C57AE3956E9D340B5(__this, L_4, /*hidden argument*/NULL);
		if (L_5)
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
		// var delegateId = jsonObject["delegate_id"] as string;
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_6 = V_0;
		NullCheck(L_6);
		RuntimeObject * L_7;
		L_7 = Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D(L_6, _stringLiteral0B4D33ECEDCA004ACF5FBD9F549F536E73E5C059, /*hidden argument*/Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D_RuntimeMethod_var);
		V_1 = ((String_t*)IsInstSealed((RuntimeObject*)L_7, String_t_il2cpp_TypeInfo_var));
		// var response = jsonObject["response"] as string;
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_8 = V_0;
		NullCheck(L_8);
		RuntimeObject * L_9;
		L_9 = Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D(L_8, _stringLiteral2C410EB1F22365EC1A74DF0D8C89C99D53453CDD, /*hidden argument*/Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D_RuntimeMethod_var);
		// var ids = Json.Deserialize(response) as Dictionary<string, object>;
		RuntimeObject * L_10;
		L_10 = Json_Deserialize_m4F6ECB958C77AF596B8666DDF7B41BAF2F0FCE10(((String_t*)IsInstSealed((RuntimeObject*)L_9, String_t_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		// var userId = ids["userId"] as string;
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_11 = ((Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *)IsInstClass((RuntimeObject*)L_10, Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_il2cpp_TypeInfo_var));
		NullCheck(L_11);
		RuntimeObject * L_12;
		L_12 = Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D(L_11, _stringLiteralA3D208B8D59BE45DA847378972F5873C295095CA, /*hidden argument*/Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D_RuntimeMethod_var);
		V_2 = ((String_t*)IsInstSealed((RuntimeObject*)L_12, String_t_il2cpp_TypeInfo_var));
		// var pushToken = ids["pushToken"] as string;
		NullCheck(L_11);
		RuntimeObject * L_13;
		L_13 = Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D(L_11, _stringLiteralE144FB2BA65CCA8A37157EA2DED13F3F75C57B61, /*hidden argument*/Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D_RuntimeMethod_var);
		V_3 = ((String_t*)IsInstSealed((RuntimeObject*)L_13, String_t_il2cpp_TypeInfo_var));
		// if (delegates.ContainsKey(delegateId))
		IL2CPP_RUNTIME_CLASS_INIT(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var);
		Dictionary_2_t521306497EEE741202CFF9F69FB533CCAD8C8ACD * L_14 = ((OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var))->get_delegates_4();
		String_t* L_15 = V_1;
		NullCheck(L_14);
		bool L_16;
		L_16 = Dictionary_2_ContainsKey_m288872404D22932B8AE710EF7BEE1AF7064BD258(L_14, L_15, /*hidden argument*/Dictionary_2_ContainsKey_m288872404D22932B8AE710EF7BEE1AF7064BD258_RuntimeMethod_var);
		if (!L_16)
		{
			goto IL_009b;
		}
	}
	{
		// var idsAvailableCallback = (IdsAvailableCallback) delegates[delegateId];
		IL2CPP_RUNTIME_CLASS_INIT(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var);
		Dictionary_2_t521306497EEE741202CFF9F69FB533CCAD8C8ACD * L_17 = ((OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var))->get_delegates_4();
		String_t* L_18 = V_1;
		NullCheck(L_17);
		Delegate_t * L_19;
		L_19 = Dictionary_2_get_Item_mF5D8C5B9DBE4629B80CA94EBBF5F528C9A35FC3C(L_17, L_18, /*hidden argument*/Dictionary_2_get_Item_mF5D8C5B9DBE4629B80CA94EBBF5F528C9A35FC3C_RuntimeMethod_var);
		// delegates.Remove(delegateId);
		Dictionary_2_t521306497EEE741202CFF9F69FB533CCAD8C8ACD * L_20 = ((OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var))->get_delegates_4();
		String_t* L_21 = V_1;
		NullCheck(L_20);
		bool L_22;
		L_22 = Dictionary_2_Remove_m3D41B282C6E5156A390B58BF791E0CB3AB282E43(L_20, L_21, /*hidden argument*/Dictionary_2_Remove_m3D41B282C6E5156A390B58BF791E0CB3AB282E43_RuntimeMethod_var);
		// idsAvailableCallback(userId, pushToken);
		String_t* L_23 = V_2;
		String_t* L_24 = V_3;
		NullCheck(((IdsAvailableCallback_t4542530853E11729402E55FCDDD09AD6FBC8B377 *)CastclassSealed((RuntimeObject*)L_19, IdsAvailableCallback_t4542530853E11729402E55FCDDD09AD6FBC8B377_il2cpp_TypeInfo_var)));
		IdsAvailableCallback_Invoke_mE0E2A2CC4C3E5B5CDBF8CACEA82129388941186C(((IdsAvailableCallback_t4542530853E11729402E55FCDDD09AD6FBC8B377 *)CastclassSealed((RuntimeObject*)L_19, IdsAvailableCallback_t4542530853E11729402E55FCDDD09AD6FBC8B377_il2cpp_TypeInfo_var)), L_23, L_24, /*hidden argument*/NULL);
	}

IL_009b:
	{
		// }
		return;
	}
}
// System.Void OneSignal::onTagsReceived(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneSignal_onTagsReceived_m18993620E5598A3CC6752DEDB218B90A40041AAB (OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C * __this, String_t* ___jsonString0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m288872404D22932B8AE710EF7BEE1AF7064BD258_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m3D41B282C6E5156A390B58BF791E0CB3AB282E43_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mF5D8C5B9DBE4629B80CA94EBBF5F528C9A35FC3C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TagsReceived_t7D5926BFB0FAC298A876D14D71495DE029E4A791_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B4D33ECEDCA004ACF5FBD9F549F536E73E5C059);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2C410EB1F22365EC1A74DF0D8C89C99D53453CDD);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * V_0 = NULL;
	String_t* V_1 = NULL;
	Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * V_2 = NULL;
	{
		// if (string.IsNullOrEmpty(jsonString))
		String_t* L_0 = ___jsonString0;
		bool L_1;
		L_1 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_0, /*hidden argument*/NULL);
		if (!L_1)
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
		// var jsonObject = Json.Deserialize(jsonString) as Dictionary<string, object>;
		String_t* L_2 = ___jsonString0;
		RuntimeObject * L_3;
		L_3 = Json_Deserialize_m4F6ECB958C77AF596B8666DDF7B41BAF2F0FCE10(L_2, /*hidden argument*/NULL);
		V_0 = ((Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *)IsInstClass((RuntimeObject*)L_3, Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_il2cpp_TypeInfo_var));
		// if (!isValidDelegate(jsonObject))
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_4 = V_0;
		bool L_5;
		L_5 = OneSignal_isValidDelegate_m6E92E6BD705588CB1BCCE46C57AE3956E9D340B5(__this, L_4, /*hidden argument*/NULL);
		if (L_5)
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
		// var delegateId = jsonObject["delegate_id"] as string;
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_6 = V_0;
		NullCheck(L_6);
		RuntimeObject * L_7;
		L_7 = Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D(L_6, _stringLiteral0B4D33ECEDCA004ACF5FBD9F549F536E73E5C059, /*hidden argument*/Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D_RuntimeMethod_var);
		V_1 = ((String_t*)IsInstSealed((RuntimeObject*)L_7, String_t_il2cpp_TypeInfo_var));
		// var response = jsonObject["response"] as string;
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_8 = V_0;
		NullCheck(L_8);
		RuntimeObject * L_9;
		L_9 = Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D(L_8, _stringLiteral2C410EB1F22365EC1A74DF0D8C89C99D53453CDD, /*hidden argument*/Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D_RuntimeMethod_var);
		// var tags = Json.Deserialize(response) as Dictionary<string, object>;
		RuntimeObject * L_10;
		L_10 = Json_Deserialize_m4F6ECB958C77AF596B8666DDF7B41BAF2F0FCE10(((String_t*)IsInstSealed((RuntimeObject*)L_9, String_t_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		V_2 = ((Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *)IsInstClass((RuntimeObject*)L_10, Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_il2cpp_TypeInfo_var));
		// if (!string.IsNullOrEmpty(delegateId) && delegates.ContainsKey(delegateId))
		String_t* L_11 = V_1;
		bool L_12;
		L_12 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_11, /*hidden argument*/NULL);
		if (L_12)
		{
			goto IL_0082;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var);
		Dictionary_2_t521306497EEE741202CFF9F69FB533CCAD8C8ACD * L_13 = ((OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var))->get_delegates_4();
		String_t* L_14 = V_1;
		NullCheck(L_13);
		bool L_15;
		L_15 = Dictionary_2_ContainsKey_m288872404D22932B8AE710EF7BEE1AF7064BD258(L_13, L_14, /*hidden argument*/Dictionary_2_ContainsKey_m288872404D22932B8AE710EF7BEE1AF7064BD258_RuntimeMethod_var);
		if (!L_15)
		{
			goto IL_0082;
		}
	}
	{
		// var tagsReceivedDelegate = (TagsReceived) delegates[delegateId];
		IL2CPP_RUNTIME_CLASS_INIT(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var);
		Dictionary_2_t521306497EEE741202CFF9F69FB533CCAD8C8ACD * L_16 = ((OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var))->get_delegates_4();
		String_t* L_17 = V_1;
		NullCheck(L_16);
		Delegate_t * L_18;
		L_18 = Dictionary_2_get_Item_mF5D8C5B9DBE4629B80CA94EBBF5F528C9A35FC3C(L_16, L_17, /*hidden argument*/Dictionary_2_get_Item_mF5D8C5B9DBE4629B80CA94EBBF5F528C9A35FC3C_RuntimeMethod_var);
		// delegates.Remove(delegateId);
		Dictionary_2_t521306497EEE741202CFF9F69FB533CCAD8C8ACD * L_19 = ((OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var))->get_delegates_4();
		String_t* L_20 = V_1;
		NullCheck(L_19);
		bool L_21;
		L_21 = Dictionary_2_Remove_m3D41B282C6E5156A390B58BF791E0CB3AB282E43(L_19, L_20, /*hidden argument*/Dictionary_2_Remove_m3D41B282C6E5156A390B58BF791E0CB3AB282E43_RuntimeMethod_var);
		// tagsReceivedDelegate(tags);
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_22 = V_2;
		NullCheck(((TagsReceived_t7D5926BFB0FAC298A876D14D71495DE029E4A791 *)CastclassSealed((RuntimeObject*)L_18, TagsReceived_t7D5926BFB0FAC298A876D14D71495DE029E4A791_il2cpp_TypeInfo_var)));
		TagsReceived_Invoke_m8FC2051A4C71C2FC59BF7791F2F4F4817324F6CE(((TagsReceived_t7D5926BFB0FAC298A876D14D71495DE029E4A791 *)CastclassSealed((RuntimeObject*)L_18, TagsReceived_t7D5926BFB0FAC298A876D14D71495DE029E4A791_il2cpp_TypeInfo_var)), L_22, /*hidden argument*/NULL);
	}

IL_0082:
	{
		// }
		return;
	}
}
// System.Void OneSignal::onPostNotificationSuccess(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneSignal_onPostNotificationSuccess_mD9A78715025AED27A30C0E1A5481AEEC6DB77FDC (OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C * __this, String_t* ___jsonString0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m288872404D22932B8AE710EF7BEE1AF7064BD258_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m3D41B282C6E5156A390B58BF791E0CB3AB282E43_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mF5D8C5B9DBE4629B80CA94EBBF5F528C9A35FC3C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnPostNotificationSuccess_tDCA1A38F1FC336944A4489421DD2C28BF9F6DAFA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B4D33ECEDCA004ACF5FBD9F549F536E73E5C059);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1E3DB61522C4E7AA1D5A216FFA2CA92BAFA2EBF1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2C410EB1F22365EC1A74DF0D8C89C99D53453CDD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5D08F7C1B259530ED46D90B3F0BD1CA69B5791A4);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * V_0 = NULL;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * V_3 = NULL;
	{
		// if (string.IsNullOrEmpty(jsonString))
		String_t* L_0 = ___jsonString0;
		bool L_1;
		L_1 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_0, /*hidden argument*/NULL);
		if (!L_1)
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
		// var jsonObject = Json.Deserialize(jsonString) as Dictionary<string, object>;
		String_t* L_2 = ___jsonString0;
		RuntimeObject * L_3;
		L_3 = Json_Deserialize_m4F6ECB958C77AF596B8666DDF7B41BAF2F0FCE10(L_2, /*hidden argument*/NULL);
		V_0 = ((Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *)IsInstClass((RuntimeObject*)L_3, Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_il2cpp_TypeInfo_var));
		// if (!isValidSuccessFailureDelegate(jsonObject))
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_4 = V_0;
		bool L_5;
		L_5 = OneSignal_isValidSuccessFailureDelegate_m45DCD71D2555940A8605074102FCBFC669A4E83E(__this, L_4, /*hidden argument*/NULL);
		if (L_5)
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
		// var delegateId = Json.Deserialize(jsonObject["delegate_id"] as string) as Dictionary<string, object>;
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_6 = V_0;
		NullCheck(L_6);
		RuntimeObject * L_7;
		L_7 = Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D(L_6, _stringLiteral0B4D33ECEDCA004ACF5FBD9F549F536E73E5C059, /*hidden argument*/Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D_RuntimeMethod_var);
		RuntimeObject * L_8;
		L_8 = Json_Deserialize_m4F6ECB958C77AF596B8666DDF7B41BAF2F0FCE10(((String_t*)IsInstSealed((RuntimeObject*)L_7, String_t_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		// var delegateIdSuccess = delegateId["success"] as string;
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_9 = ((Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *)IsInstClass((RuntimeObject*)L_8, Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_il2cpp_TypeInfo_var));
		NullCheck(L_9);
		RuntimeObject * L_10;
		L_10 = Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D(L_9, _stringLiteral5D08F7C1B259530ED46D90B3F0BD1CA69B5791A4, /*hidden argument*/Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D_RuntimeMethod_var);
		V_1 = ((String_t*)IsInstSealed((RuntimeObject*)L_10, String_t_il2cpp_TypeInfo_var));
		// var delegateIdFailure = delegateId["failure"] as string;
		NullCheck(L_9);
		RuntimeObject * L_11;
		L_11 = Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D(L_9, _stringLiteral1E3DB61522C4E7AA1D5A216FFA2CA92BAFA2EBF1, /*hidden argument*/Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D_RuntimeMethod_var);
		V_2 = ((String_t*)IsInstSealed((RuntimeObject*)L_11, String_t_il2cpp_TypeInfo_var));
		// var response = jsonObject["response"] as string;
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_12 = V_0;
		NullCheck(L_12);
		RuntimeObject * L_13;
		L_13 = Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D(L_12, _stringLiteral2C410EB1F22365EC1A74DF0D8C89C99D53453CDD, /*hidden argument*/Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D_RuntimeMethod_var);
		// var postNotificationDic = Json.Deserialize(response) as Dictionary<string, object>;
		RuntimeObject * L_14;
		L_14 = Json_Deserialize_m4F6ECB958C77AF596B8666DDF7B41BAF2F0FCE10(((String_t*)IsInstSealed((RuntimeObject*)L_13, String_t_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		V_3 = ((Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *)IsInstClass((RuntimeObject*)L_14, Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_il2cpp_TypeInfo_var));
		// if (delegates.ContainsKey(delegateIdSuccess))
		IL2CPP_RUNTIME_CLASS_INIT(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var);
		Dictionary_2_t521306497EEE741202CFF9F69FB533CCAD8C8ACD * L_15 = ((OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var))->get_delegates_4();
		String_t* L_16 = V_1;
		NullCheck(L_15);
		bool L_17;
		L_17 = Dictionary_2_ContainsKey_m288872404D22932B8AE710EF7BEE1AF7064BD258(L_15, L_16, /*hidden argument*/Dictionary_2_ContainsKey_m288872404D22932B8AE710EF7BEE1AF7064BD258_RuntimeMethod_var);
		if (!L_17)
		{
			goto IL_00b0;
		}
	}
	{
		// var postNotificationSuccessDelegate = (OnPostNotificationSuccess) delegates[delegateIdSuccess];
		IL2CPP_RUNTIME_CLASS_INIT(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var);
		Dictionary_2_t521306497EEE741202CFF9F69FB533CCAD8C8ACD * L_18 = ((OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var))->get_delegates_4();
		String_t* L_19 = V_1;
		NullCheck(L_18);
		Delegate_t * L_20;
		L_20 = Dictionary_2_get_Item_mF5D8C5B9DBE4629B80CA94EBBF5F528C9A35FC3C(L_18, L_19, /*hidden argument*/Dictionary_2_get_Item_mF5D8C5B9DBE4629B80CA94EBBF5F528C9A35FC3C_RuntimeMethod_var);
		// delegates.Remove(delegateIdSuccess);
		Dictionary_2_t521306497EEE741202CFF9F69FB533CCAD8C8ACD * L_21 = ((OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var))->get_delegates_4();
		String_t* L_22 = V_1;
		NullCheck(L_21);
		bool L_23;
		L_23 = Dictionary_2_Remove_m3D41B282C6E5156A390B58BF791E0CB3AB282E43(L_21, L_22, /*hidden argument*/Dictionary_2_Remove_m3D41B282C6E5156A390B58BF791E0CB3AB282E43_RuntimeMethod_var);
		// delegates.Remove(delegateIdFailure);
		Dictionary_2_t521306497EEE741202CFF9F69FB533CCAD8C8ACD * L_24 = ((OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var))->get_delegates_4();
		String_t* L_25 = V_2;
		NullCheck(L_24);
		bool L_26;
		L_26 = Dictionary_2_Remove_m3D41B282C6E5156A390B58BF791E0CB3AB282E43(L_24, L_25, /*hidden argument*/Dictionary_2_Remove_m3D41B282C6E5156A390B58BF791E0CB3AB282E43_RuntimeMethod_var);
		// postNotificationSuccessDelegate(postNotificationDic);
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_27 = V_3;
		NullCheck(((OnPostNotificationSuccess_tDCA1A38F1FC336944A4489421DD2C28BF9F6DAFA *)CastclassSealed((RuntimeObject*)L_20, OnPostNotificationSuccess_tDCA1A38F1FC336944A4489421DD2C28BF9F6DAFA_il2cpp_TypeInfo_var)));
		OnPostNotificationSuccess_Invoke_mC4E45D5B1D9E50AAB4CA72796F9E52FAD2817D93(((OnPostNotificationSuccess_tDCA1A38F1FC336944A4489421DD2C28BF9F6DAFA *)CastclassSealed((RuntimeObject*)L_20, OnPostNotificationSuccess_tDCA1A38F1FC336944A4489421DD2C28BF9F6DAFA_il2cpp_TypeInfo_var)), L_27, /*hidden argument*/NULL);
	}

IL_00b0:
	{
		// }
		return;
	}
}
// System.Void OneSignal::onPostNotificationFailed(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneSignal_onPostNotificationFailed_mDC0AEB66201658B5FD2389B5EB688B9501B548BB (OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C * __this, String_t* ___jsonString0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m288872404D22932B8AE710EF7BEE1AF7064BD258_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m3D41B282C6E5156A390B58BF791E0CB3AB282E43_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mF5D8C5B9DBE4629B80CA94EBBF5F528C9A35FC3C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnPostNotificationFailure_t838C4BF4E9FE424E9B8A948B686BC4B56EA0EE85_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B4D33ECEDCA004ACF5FBD9F549F536E73E5C059);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1E3DB61522C4E7AA1D5A216FFA2CA92BAFA2EBF1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2C410EB1F22365EC1A74DF0D8C89C99D53453CDD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5D08F7C1B259530ED46D90B3F0BD1CA69B5791A4);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * V_0 = NULL;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * V_3 = NULL;
	{
		// if (string.IsNullOrEmpty(jsonString))
		String_t* L_0 = ___jsonString0;
		bool L_1;
		L_1 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_0, /*hidden argument*/NULL);
		if (!L_1)
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
		// var jsonObject = Json.Deserialize(jsonString) as Dictionary<string, object>;
		String_t* L_2 = ___jsonString0;
		RuntimeObject * L_3;
		L_3 = Json_Deserialize_m4F6ECB958C77AF596B8666DDF7B41BAF2F0FCE10(L_2, /*hidden argument*/NULL);
		V_0 = ((Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *)IsInstClass((RuntimeObject*)L_3, Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_il2cpp_TypeInfo_var));
		// if (!isValidSuccessFailureDelegate(jsonObject))
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_4 = V_0;
		bool L_5;
		L_5 = OneSignal_isValidSuccessFailureDelegate_m45DCD71D2555940A8605074102FCBFC669A4E83E(__this, L_4, /*hidden argument*/NULL);
		if (L_5)
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
		// var delegateId = Json.Deserialize(jsonObject["delegate_id"] as string) as Dictionary<string, object>;
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_6 = V_0;
		NullCheck(L_6);
		RuntimeObject * L_7;
		L_7 = Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D(L_6, _stringLiteral0B4D33ECEDCA004ACF5FBD9F549F536E73E5C059, /*hidden argument*/Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D_RuntimeMethod_var);
		RuntimeObject * L_8;
		L_8 = Json_Deserialize_m4F6ECB958C77AF596B8666DDF7B41BAF2F0FCE10(((String_t*)IsInstSealed((RuntimeObject*)L_7, String_t_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		// var delegateIdSuccess = delegateId["success"] as string;
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_9 = ((Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *)IsInstClass((RuntimeObject*)L_8, Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_il2cpp_TypeInfo_var));
		NullCheck(L_9);
		RuntimeObject * L_10;
		L_10 = Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D(L_9, _stringLiteral5D08F7C1B259530ED46D90B3F0BD1CA69B5791A4, /*hidden argument*/Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D_RuntimeMethod_var);
		V_1 = ((String_t*)IsInstSealed((RuntimeObject*)L_10, String_t_il2cpp_TypeInfo_var));
		// var delegateIdFailure = delegateId["failure"] as string;
		NullCheck(L_9);
		RuntimeObject * L_11;
		L_11 = Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D(L_9, _stringLiteral1E3DB61522C4E7AA1D5A216FFA2CA92BAFA2EBF1, /*hidden argument*/Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D_RuntimeMethod_var);
		V_2 = ((String_t*)IsInstSealed((RuntimeObject*)L_11, String_t_il2cpp_TypeInfo_var));
		// var response = jsonObject["response"] as string;
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_12 = V_0;
		NullCheck(L_12);
		RuntimeObject * L_13;
		L_13 = Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D(L_12, _stringLiteral2C410EB1F22365EC1A74DF0D8C89C99D53453CDD, /*hidden argument*/Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D_RuntimeMethod_var);
		// var postNotificationDic = Json.Deserialize(response) as Dictionary<string, object>;
		RuntimeObject * L_14;
		L_14 = Json_Deserialize_m4F6ECB958C77AF596B8666DDF7B41BAF2F0FCE10(((String_t*)IsInstSealed((RuntimeObject*)L_13, String_t_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		V_3 = ((Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *)IsInstClass((RuntimeObject*)L_14, Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_il2cpp_TypeInfo_var));
		// if (delegates.ContainsKey(delegateIdFailure))
		IL2CPP_RUNTIME_CLASS_INIT(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var);
		Dictionary_2_t521306497EEE741202CFF9F69FB533CCAD8C8ACD * L_15 = ((OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var))->get_delegates_4();
		String_t* L_16 = V_2;
		NullCheck(L_15);
		bool L_17;
		L_17 = Dictionary_2_ContainsKey_m288872404D22932B8AE710EF7BEE1AF7064BD258(L_15, L_16, /*hidden argument*/Dictionary_2_ContainsKey_m288872404D22932B8AE710EF7BEE1AF7064BD258_RuntimeMethod_var);
		if (!L_17)
		{
			goto IL_00b0;
		}
	}
	{
		// var postNotificationFailureDelegate = (OnPostNotificationFailure) delegates[delegateIdFailure];
		IL2CPP_RUNTIME_CLASS_INIT(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var);
		Dictionary_2_t521306497EEE741202CFF9F69FB533CCAD8C8ACD * L_18 = ((OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var))->get_delegates_4();
		String_t* L_19 = V_2;
		NullCheck(L_18);
		Delegate_t * L_20;
		L_20 = Dictionary_2_get_Item_mF5D8C5B9DBE4629B80CA94EBBF5F528C9A35FC3C(L_18, L_19, /*hidden argument*/Dictionary_2_get_Item_mF5D8C5B9DBE4629B80CA94EBBF5F528C9A35FC3C_RuntimeMethod_var);
		// delegates.Remove(delegateIdSuccess);
		Dictionary_2_t521306497EEE741202CFF9F69FB533CCAD8C8ACD * L_21 = ((OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var))->get_delegates_4();
		String_t* L_22 = V_1;
		NullCheck(L_21);
		bool L_23;
		L_23 = Dictionary_2_Remove_m3D41B282C6E5156A390B58BF791E0CB3AB282E43(L_21, L_22, /*hidden argument*/Dictionary_2_Remove_m3D41B282C6E5156A390B58BF791E0CB3AB282E43_RuntimeMethod_var);
		// delegates.Remove(delegateIdFailure);
		Dictionary_2_t521306497EEE741202CFF9F69FB533CCAD8C8ACD * L_24 = ((OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var))->get_delegates_4();
		String_t* L_25 = V_2;
		NullCheck(L_24);
		bool L_26;
		L_26 = Dictionary_2_Remove_m3D41B282C6E5156A390B58BF791E0CB3AB282E43(L_24, L_25, /*hidden argument*/Dictionary_2_Remove_m3D41B282C6E5156A390B58BF791E0CB3AB282E43_RuntimeMethod_var);
		// postNotificationFailureDelegate(postNotificationDic);
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_27 = V_3;
		NullCheck(((OnPostNotificationFailure_t838C4BF4E9FE424E9B8A948B686BC4B56EA0EE85 *)CastclassSealed((RuntimeObject*)L_20, OnPostNotificationFailure_t838C4BF4E9FE424E9B8A948B686BC4B56EA0EE85_il2cpp_TypeInfo_var)));
		OnPostNotificationFailure_Invoke_mCFEFAB9AB63633AD5BC9D31FC1A402BC8E821133(((OnPostNotificationFailure_t838C4BF4E9FE424E9B8A948B686BC4B56EA0EE85 *)CastclassSealed((RuntimeObject*)L_20, OnPostNotificationFailure_t838C4BF4E9FE424E9B8A948B686BC4B56EA0EE85_il2cpp_TypeInfo_var)), L_27, /*hidden argument*/NULL);
	}

IL_00b0:
	{
		// }
		return;
	}
}
// System.Void OneSignal::onExternalUserIdUpdateCompletion(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneSignal_onExternalUserIdUpdateCompletion_m5AF831D28B8792BF3FA6F5B0E024C03BC726EB0C (OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C * __this, String_t* ___jsonString0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m288872404D22932B8AE710EF7BEE1AF7064BD258_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m3D41B282C6E5156A390B58BF791E0CB3AB282E43_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mF5D8C5B9DBE4629B80CA94EBBF5F528C9A35FC3C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnExternalUserIdUpdateCompletion_tE7AD9883916B83BCCE7A9F6C4C77E818FA079EF3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B4D33ECEDCA004ACF5FBD9F549F536E73E5C059);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2C410EB1F22365EC1A74DF0D8C89C99D53453CDD);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * V_0 = NULL;
	String_t* V_1 = NULL;
	Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * V_2 = NULL;
	{
		// if (string.IsNullOrEmpty(jsonString))
		String_t* L_0 = ___jsonString0;
		bool L_1;
		L_1 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_0, /*hidden argument*/NULL);
		if (!L_1)
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
		// var jsonObject = Json.Deserialize(jsonString) as Dictionary<string, object>;
		String_t* L_2 = ___jsonString0;
		RuntimeObject * L_3;
		L_3 = Json_Deserialize_m4F6ECB958C77AF596B8666DDF7B41BAF2F0FCE10(L_2, /*hidden argument*/NULL);
		V_0 = ((Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *)IsInstClass((RuntimeObject*)L_3, Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_il2cpp_TypeInfo_var));
		// if (!isValidDelegate(jsonObject))
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_4 = V_0;
		bool L_5;
		L_5 = OneSignal_isValidDelegate_m6E92E6BD705588CB1BCCE46C57AE3956E9D340B5(__this, L_4, /*hidden argument*/NULL);
		if (L_5)
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
		// var delegateId = jsonObject["delegate_id"] as string;
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_6 = V_0;
		NullCheck(L_6);
		RuntimeObject * L_7;
		L_7 = Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D(L_6, _stringLiteral0B4D33ECEDCA004ACF5FBD9F549F536E73E5C059, /*hidden argument*/Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D_RuntimeMethod_var);
		V_1 = ((String_t*)IsInstSealed((RuntimeObject*)L_7, String_t_il2cpp_TypeInfo_var));
		// var response = jsonObject["response"] as string;
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_8 = V_0;
		NullCheck(L_8);
		RuntimeObject * L_9;
		L_9 = Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D(L_8, _stringLiteral2C410EB1F22365EC1A74DF0D8C89C99D53453CDD, /*hidden argument*/Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D_RuntimeMethod_var);
		// var results = Json.Deserialize(response) as Dictionary<string, object>;
		RuntimeObject * L_10;
		L_10 = Json_Deserialize_m4F6ECB958C77AF596B8666DDF7B41BAF2F0FCE10(((String_t*)IsInstSealed((RuntimeObject*)L_9, String_t_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		V_2 = ((Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *)IsInstClass((RuntimeObject*)L_10, Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_il2cpp_TypeInfo_var));
		// if (delegates.ContainsKey(delegateId))
		IL2CPP_RUNTIME_CLASS_INIT(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var);
		Dictionary_2_t521306497EEE741202CFF9F69FB533CCAD8C8ACD * L_11 = ((OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var))->get_delegates_4();
		String_t* L_12 = V_1;
		NullCheck(L_11);
		bool L_13;
		L_13 = Dictionary_2_ContainsKey_m288872404D22932B8AE710EF7BEE1AF7064BD258(L_11, L_12, /*hidden argument*/Dictionary_2_ContainsKey_m288872404D22932B8AE710EF7BEE1AF7064BD258_RuntimeMethod_var);
		if (!L_13)
		{
			goto IL_007a;
		}
	}
	{
		// var externalUserIdUpdateCompletionDelegate = (OnExternalUserIdUpdateCompletion) delegates[delegateId];
		IL2CPP_RUNTIME_CLASS_INIT(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var);
		Dictionary_2_t521306497EEE741202CFF9F69FB533CCAD8C8ACD * L_14 = ((OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var))->get_delegates_4();
		String_t* L_15 = V_1;
		NullCheck(L_14);
		Delegate_t * L_16;
		L_16 = Dictionary_2_get_Item_mF5D8C5B9DBE4629B80CA94EBBF5F528C9A35FC3C(L_14, L_15, /*hidden argument*/Dictionary_2_get_Item_mF5D8C5B9DBE4629B80CA94EBBF5F528C9A35FC3C_RuntimeMethod_var);
		// delegates.Remove(delegateId);
		Dictionary_2_t521306497EEE741202CFF9F69FB533CCAD8C8ACD * L_17 = ((OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var))->get_delegates_4();
		String_t* L_18 = V_1;
		NullCheck(L_17);
		bool L_19;
		L_19 = Dictionary_2_Remove_m3D41B282C6E5156A390B58BF791E0CB3AB282E43(L_17, L_18, /*hidden argument*/Dictionary_2_Remove_m3D41B282C6E5156A390B58BF791E0CB3AB282E43_RuntimeMethod_var);
		// externalUserIdUpdateCompletionDelegate(results);
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_20 = V_2;
		NullCheck(((OnExternalUserIdUpdateCompletion_tE7AD9883916B83BCCE7A9F6C4C77E818FA079EF3 *)CastclassSealed((RuntimeObject*)L_16, OnExternalUserIdUpdateCompletion_tE7AD9883916B83BCCE7A9F6C4C77E818FA079EF3_il2cpp_TypeInfo_var)));
		OnExternalUserIdUpdateCompletion_Invoke_mE9FBD8E1231DB6B2C9418A4CBC46CA2D6FA99B6B(((OnExternalUserIdUpdateCompletion_tE7AD9883916B83BCCE7A9F6C4C77E818FA079EF3 *)CastclassSealed((RuntimeObject*)L_16, OnExternalUserIdUpdateCompletion_tE7AD9883916B83BCCE7A9F6C4C77E818FA079EF3_il2cpp_TypeInfo_var)), L_20, /*hidden argument*/NULL);
	}

IL_007a:
	{
		// }
		return;
	}
}
// System.Void OneSignal::onSetEmailSuccess(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneSignal_onSetEmailSuccess_mE1392F54A63AFDF75DDA9038C30CE6D8284C9705 (OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C * __this, String_t* ___jsonString0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m288872404D22932B8AE710EF7BEE1AF7064BD258_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m3D41B282C6E5156A390B58BF791E0CB3AB282E43_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mF5D8C5B9DBE4629B80CA94EBBF5F528C9A35FC3C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnSetEmailSuccess_t5D828241C45219E51AC4B47C581F66419C7D3BDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B4D33ECEDCA004ACF5FBD9F549F536E73E5C059);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1E3DB61522C4E7AA1D5A216FFA2CA92BAFA2EBF1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2C410EB1F22365EC1A74DF0D8C89C99D53453CDD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5D08F7C1B259530ED46D90B3F0BD1CA69B5791A4);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * V_0 = NULL;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	{
		// if (string.IsNullOrEmpty(jsonString))
		String_t* L_0 = ___jsonString0;
		bool L_1;
		L_1 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_0, /*hidden argument*/NULL);
		if (!L_1)
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
		// var jsonObject = Json.Deserialize(jsonString) as Dictionary<string, object>;
		String_t* L_2 = ___jsonString0;
		RuntimeObject * L_3;
		L_3 = Json_Deserialize_m4F6ECB958C77AF596B8666DDF7B41BAF2F0FCE10(L_2, /*hidden argument*/NULL);
		V_0 = ((Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *)IsInstClass((RuntimeObject*)L_3, Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_il2cpp_TypeInfo_var));
		// if (!isValidSuccessFailureDelegate(jsonObject))
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_4 = V_0;
		bool L_5;
		L_5 = OneSignal_isValidSuccessFailureDelegate_m45DCD71D2555940A8605074102FCBFC669A4E83E(__this, L_4, /*hidden argument*/NULL);
		if (L_5)
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
		// var delegateId = Json.Deserialize(jsonObject["delegate_id"] as string) as Dictionary<string, object>;
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_6 = V_0;
		NullCheck(L_6);
		RuntimeObject * L_7;
		L_7 = Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D(L_6, _stringLiteral0B4D33ECEDCA004ACF5FBD9F549F536E73E5C059, /*hidden argument*/Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D_RuntimeMethod_var);
		RuntimeObject * L_8;
		L_8 = Json_Deserialize_m4F6ECB958C77AF596B8666DDF7B41BAF2F0FCE10(((String_t*)IsInstSealed((RuntimeObject*)L_7, String_t_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		// var delegateIdSuccess = delegateId["success"] as string;
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_9 = ((Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *)IsInstClass((RuntimeObject*)L_8, Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_il2cpp_TypeInfo_var));
		NullCheck(L_9);
		RuntimeObject * L_10;
		L_10 = Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D(L_9, _stringLiteral5D08F7C1B259530ED46D90B3F0BD1CA69B5791A4, /*hidden argument*/Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D_RuntimeMethod_var);
		V_1 = ((String_t*)IsInstSealed((RuntimeObject*)L_10, String_t_il2cpp_TypeInfo_var));
		// var delegateIdFailure = delegateId["failure"] as string;
		NullCheck(L_9);
		RuntimeObject * L_11;
		L_11 = Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D(L_9, _stringLiteral1E3DB61522C4E7AA1D5A216FFA2CA92BAFA2EBF1, /*hidden argument*/Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D_RuntimeMethod_var);
		V_2 = ((String_t*)IsInstSealed((RuntimeObject*)L_11, String_t_il2cpp_TypeInfo_var));
		// var response = jsonObject["response"] as string;
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_12 = V_0;
		NullCheck(L_12);
		RuntimeObject * L_13;
		L_13 = Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D(L_12, _stringLiteral2C410EB1F22365EC1A74DF0D8C89C99D53453CDD, /*hidden argument*/Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D_RuntimeMethod_var);
		// if (delegates.ContainsKey(delegateIdSuccess))
		IL2CPP_RUNTIME_CLASS_INIT(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var);
		Dictionary_2_t521306497EEE741202CFF9F69FB533CCAD8C8ACD * L_14 = ((OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var))->get_delegates_4();
		String_t* L_15 = V_1;
		NullCheck(L_14);
		bool L_16;
		L_16 = Dictionary_2_ContainsKey_m288872404D22932B8AE710EF7BEE1AF7064BD258(L_14, L_15, /*hidden argument*/Dictionary_2_ContainsKey_m288872404D22932B8AE710EF7BEE1AF7064BD258_RuntimeMethod_var);
		if (!L_16)
		{
			goto IL_00a0;
		}
	}
	{
		// var setEmailSuccessDelegate = (OnSetEmailSuccess) delegates[delegateIdSuccess];
		IL2CPP_RUNTIME_CLASS_INIT(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var);
		Dictionary_2_t521306497EEE741202CFF9F69FB533CCAD8C8ACD * L_17 = ((OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var))->get_delegates_4();
		String_t* L_18 = V_1;
		NullCheck(L_17);
		Delegate_t * L_19;
		L_19 = Dictionary_2_get_Item_mF5D8C5B9DBE4629B80CA94EBBF5F528C9A35FC3C(L_17, L_18, /*hidden argument*/Dictionary_2_get_Item_mF5D8C5B9DBE4629B80CA94EBBF5F528C9A35FC3C_RuntimeMethod_var);
		// delegates.Remove(delegateIdSuccess);
		Dictionary_2_t521306497EEE741202CFF9F69FB533CCAD8C8ACD * L_20 = ((OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var))->get_delegates_4();
		String_t* L_21 = V_1;
		NullCheck(L_20);
		bool L_22;
		L_22 = Dictionary_2_Remove_m3D41B282C6E5156A390B58BF791E0CB3AB282E43(L_20, L_21, /*hidden argument*/Dictionary_2_Remove_m3D41B282C6E5156A390B58BF791E0CB3AB282E43_RuntimeMethod_var);
		// delegates.Remove(delegateIdFailure);
		Dictionary_2_t521306497EEE741202CFF9F69FB533CCAD8C8ACD * L_23 = ((OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var))->get_delegates_4();
		String_t* L_24 = V_2;
		NullCheck(L_23);
		bool L_25;
		L_25 = Dictionary_2_Remove_m3D41B282C6E5156A390B58BF791E0CB3AB282E43(L_23, L_24, /*hidden argument*/Dictionary_2_Remove_m3D41B282C6E5156A390B58BF791E0CB3AB282E43_RuntimeMethod_var);
		// setEmailSuccessDelegate();
		NullCheck(((OnSetEmailSuccess_t5D828241C45219E51AC4B47C581F66419C7D3BDB *)CastclassSealed((RuntimeObject*)L_19, OnSetEmailSuccess_t5D828241C45219E51AC4B47C581F66419C7D3BDB_il2cpp_TypeInfo_var)));
		OnSetEmailSuccess_Invoke_m77F99D61CA68EA36709DBF7125C94692118D4C62(((OnSetEmailSuccess_t5D828241C45219E51AC4B47C581F66419C7D3BDB *)CastclassSealed((RuntimeObject*)L_19, OnSetEmailSuccess_t5D828241C45219E51AC4B47C581F66419C7D3BDB_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
	}

IL_00a0:
	{
		// }
		return;
	}
}
// System.Void OneSignal::onSetEmailFailure(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneSignal_onSetEmailFailure_mF758E142632AE59BDBF4D66C49E8404837188E07 (OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C * __this, String_t* ___jsonString0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m288872404D22932B8AE710EF7BEE1AF7064BD258_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m3D41B282C6E5156A390B58BF791E0CB3AB282E43_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mF5D8C5B9DBE4629B80CA94EBBF5F528C9A35FC3C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnSetEmailFailure_tC1B0B2D7E54644EF4414EFE4A1DC6A9371409B5D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B4D33ECEDCA004ACF5FBD9F549F536E73E5C059);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1E3DB61522C4E7AA1D5A216FFA2CA92BAFA2EBF1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2C410EB1F22365EC1A74DF0D8C89C99D53453CDD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5D08F7C1B259530ED46D90B3F0BD1CA69B5791A4);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * V_0 = NULL;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * V_3 = NULL;
	{
		// if (string.IsNullOrEmpty(jsonString))
		String_t* L_0 = ___jsonString0;
		bool L_1;
		L_1 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_0, /*hidden argument*/NULL);
		if (!L_1)
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
		// var jsonObject = Json.Deserialize(jsonString) as Dictionary<string, object>;
		String_t* L_2 = ___jsonString0;
		RuntimeObject * L_3;
		L_3 = Json_Deserialize_m4F6ECB958C77AF596B8666DDF7B41BAF2F0FCE10(L_2, /*hidden argument*/NULL);
		V_0 = ((Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *)IsInstClass((RuntimeObject*)L_3, Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_il2cpp_TypeInfo_var));
		// if (!isValidSuccessFailureDelegate(jsonObject))
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_4 = V_0;
		bool L_5;
		L_5 = OneSignal_isValidSuccessFailureDelegate_m45DCD71D2555940A8605074102FCBFC669A4E83E(__this, L_4, /*hidden argument*/NULL);
		if (L_5)
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
		// var delegateId = Json.Deserialize(jsonObject["delegate_id"] as string) as Dictionary<string, object>;
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_6 = V_0;
		NullCheck(L_6);
		RuntimeObject * L_7;
		L_7 = Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D(L_6, _stringLiteral0B4D33ECEDCA004ACF5FBD9F549F536E73E5C059, /*hidden argument*/Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D_RuntimeMethod_var);
		RuntimeObject * L_8;
		L_8 = Json_Deserialize_m4F6ECB958C77AF596B8666DDF7B41BAF2F0FCE10(((String_t*)IsInstSealed((RuntimeObject*)L_7, String_t_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		// var delegateIdSuccess = delegateId["success"] as string;
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_9 = ((Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *)IsInstClass((RuntimeObject*)L_8, Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_il2cpp_TypeInfo_var));
		NullCheck(L_9);
		RuntimeObject * L_10;
		L_10 = Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D(L_9, _stringLiteral5D08F7C1B259530ED46D90B3F0BD1CA69B5791A4, /*hidden argument*/Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D_RuntimeMethod_var);
		V_1 = ((String_t*)IsInstSealed((RuntimeObject*)L_10, String_t_il2cpp_TypeInfo_var));
		// var delegateIdFailure = delegateId["failure"] as string;
		NullCheck(L_9);
		RuntimeObject * L_11;
		L_11 = Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D(L_9, _stringLiteral1E3DB61522C4E7AA1D5A216FFA2CA92BAFA2EBF1, /*hidden argument*/Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D_RuntimeMethod_var);
		V_2 = ((String_t*)IsInstSealed((RuntimeObject*)L_11, String_t_il2cpp_TypeInfo_var));
		// var response = jsonObject["response"] as string;
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_12 = V_0;
		NullCheck(L_12);
		RuntimeObject * L_13;
		L_13 = Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D(L_12, _stringLiteral2C410EB1F22365EC1A74DF0D8C89C99D53453CDD, /*hidden argument*/Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D_RuntimeMethod_var);
		// var failure = Json.Deserialize(response) as Dictionary<string, object>;
		RuntimeObject * L_14;
		L_14 = Json_Deserialize_m4F6ECB958C77AF596B8666DDF7B41BAF2F0FCE10(((String_t*)IsInstSealed((RuntimeObject*)L_13, String_t_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		V_3 = ((Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *)IsInstClass((RuntimeObject*)L_14, Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_il2cpp_TypeInfo_var));
		// if (delegates.ContainsKey(delegateIdFailure))
		IL2CPP_RUNTIME_CLASS_INIT(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var);
		Dictionary_2_t521306497EEE741202CFF9F69FB533CCAD8C8ACD * L_15 = ((OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var))->get_delegates_4();
		String_t* L_16 = V_2;
		NullCheck(L_15);
		bool L_17;
		L_17 = Dictionary_2_ContainsKey_m288872404D22932B8AE710EF7BEE1AF7064BD258(L_15, L_16, /*hidden argument*/Dictionary_2_ContainsKey_m288872404D22932B8AE710EF7BEE1AF7064BD258_RuntimeMethod_var);
		if (!L_17)
		{
			goto IL_00b0;
		}
	}
	{
		// var setEmailFailureDelegate = (OnSetEmailFailure) delegates[delegateIdFailure];
		IL2CPP_RUNTIME_CLASS_INIT(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var);
		Dictionary_2_t521306497EEE741202CFF9F69FB533CCAD8C8ACD * L_18 = ((OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var))->get_delegates_4();
		String_t* L_19 = V_2;
		NullCheck(L_18);
		Delegate_t * L_20;
		L_20 = Dictionary_2_get_Item_mF5D8C5B9DBE4629B80CA94EBBF5F528C9A35FC3C(L_18, L_19, /*hidden argument*/Dictionary_2_get_Item_mF5D8C5B9DBE4629B80CA94EBBF5F528C9A35FC3C_RuntimeMethod_var);
		// delegates.Remove(delegateIdSuccess);
		Dictionary_2_t521306497EEE741202CFF9F69FB533CCAD8C8ACD * L_21 = ((OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var))->get_delegates_4();
		String_t* L_22 = V_1;
		NullCheck(L_21);
		bool L_23;
		L_23 = Dictionary_2_Remove_m3D41B282C6E5156A390B58BF791E0CB3AB282E43(L_21, L_22, /*hidden argument*/Dictionary_2_Remove_m3D41B282C6E5156A390B58BF791E0CB3AB282E43_RuntimeMethod_var);
		// delegates.Remove(delegateIdFailure);
		Dictionary_2_t521306497EEE741202CFF9F69FB533CCAD8C8ACD * L_24 = ((OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var))->get_delegates_4();
		String_t* L_25 = V_2;
		NullCheck(L_24);
		bool L_26;
		L_26 = Dictionary_2_Remove_m3D41B282C6E5156A390B58BF791E0CB3AB282E43(L_24, L_25, /*hidden argument*/Dictionary_2_Remove_m3D41B282C6E5156A390B58BF791E0CB3AB282E43_RuntimeMethod_var);
		// setEmailFailureDelegate(failure);
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_27 = V_3;
		NullCheck(((OnSetEmailFailure_tC1B0B2D7E54644EF4414EFE4A1DC6A9371409B5D *)CastclassSealed((RuntimeObject*)L_20, OnSetEmailFailure_tC1B0B2D7E54644EF4414EFE4A1DC6A9371409B5D_il2cpp_TypeInfo_var)));
		OnSetEmailFailure_Invoke_mB49471E694DA5104BC76980F4C8C5639798527F9(((OnSetEmailFailure_tC1B0B2D7E54644EF4414EFE4A1DC6A9371409B5D *)CastclassSealed((RuntimeObject*)L_20, OnSetEmailFailure_tC1B0B2D7E54644EF4414EFE4A1DC6A9371409B5D_il2cpp_TypeInfo_var)), L_27, /*hidden argument*/NULL);
	}

IL_00b0:
	{
		// }
		return;
	}
}
// System.Void OneSignal::onLogoutEmailSuccess(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneSignal_onLogoutEmailSuccess_mFAB276E591F9710E745E21691C4BCA81AFBB99E6 (OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C * __this, String_t* ___jsonString0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m288872404D22932B8AE710EF7BEE1AF7064BD258_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m3D41B282C6E5156A390B58BF791E0CB3AB282E43_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mF5D8C5B9DBE4629B80CA94EBBF5F528C9A35FC3C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnLogoutEmailSuccess_t87D6896F1510F5624EA317AA83BCEEBE79DC60AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B4D33ECEDCA004ACF5FBD9F549F536E73E5C059);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1E3DB61522C4E7AA1D5A216FFA2CA92BAFA2EBF1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2C410EB1F22365EC1A74DF0D8C89C99D53453CDD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5D08F7C1B259530ED46D90B3F0BD1CA69B5791A4);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * V_0 = NULL;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	{
		// if (string.IsNullOrEmpty(jsonString))
		String_t* L_0 = ___jsonString0;
		bool L_1;
		L_1 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_0, /*hidden argument*/NULL);
		if (!L_1)
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
		// var jsonObject = Json.Deserialize(jsonString) as Dictionary<string, object>;
		String_t* L_2 = ___jsonString0;
		RuntimeObject * L_3;
		L_3 = Json_Deserialize_m4F6ECB958C77AF596B8666DDF7B41BAF2F0FCE10(L_2, /*hidden argument*/NULL);
		V_0 = ((Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *)IsInstClass((RuntimeObject*)L_3, Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_il2cpp_TypeInfo_var));
		// if (!isValidSuccessFailureDelegate(jsonObject))
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_4 = V_0;
		bool L_5;
		L_5 = OneSignal_isValidSuccessFailureDelegate_m45DCD71D2555940A8605074102FCBFC669A4E83E(__this, L_4, /*hidden argument*/NULL);
		if (L_5)
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
		// var delegateId = Json.Deserialize(jsonObject["delegate_id"] as string) as Dictionary<string, object>;
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_6 = V_0;
		NullCheck(L_6);
		RuntimeObject * L_7;
		L_7 = Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D(L_6, _stringLiteral0B4D33ECEDCA004ACF5FBD9F549F536E73E5C059, /*hidden argument*/Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D_RuntimeMethod_var);
		RuntimeObject * L_8;
		L_8 = Json_Deserialize_m4F6ECB958C77AF596B8666DDF7B41BAF2F0FCE10(((String_t*)IsInstSealed((RuntimeObject*)L_7, String_t_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		// var delegateIdSuccess = delegateId["success"] as string;
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_9 = ((Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *)IsInstClass((RuntimeObject*)L_8, Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_il2cpp_TypeInfo_var));
		NullCheck(L_9);
		RuntimeObject * L_10;
		L_10 = Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D(L_9, _stringLiteral5D08F7C1B259530ED46D90B3F0BD1CA69B5791A4, /*hidden argument*/Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D_RuntimeMethod_var);
		V_1 = ((String_t*)IsInstSealed((RuntimeObject*)L_10, String_t_il2cpp_TypeInfo_var));
		// var delegateIdFailure = delegateId["failure"] as string;
		NullCheck(L_9);
		RuntimeObject * L_11;
		L_11 = Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D(L_9, _stringLiteral1E3DB61522C4E7AA1D5A216FFA2CA92BAFA2EBF1, /*hidden argument*/Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D_RuntimeMethod_var);
		V_2 = ((String_t*)IsInstSealed((RuntimeObject*)L_11, String_t_il2cpp_TypeInfo_var));
		// var response = jsonObject["response"] as string;
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_12 = V_0;
		NullCheck(L_12);
		RuntimeObject * L_13;
		L_13 = Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D(L_12, _stringLiteral2C410EB1F22365EC1A74DF0D8C89C99D53453CDD, /*hidden argument*/Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D_RuntimeMethod_var);
		// if (delegates.ContainsKey(delegateIdSuccess))
		IL2CPP_RUNTIME_CLASS_INIT(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var);
		Dictionary_2_t521306497EEE741202CFF9F69FB533CCAD8C8ACD * L_14 = ((OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var))->get_delegates_4();
		String_t* L_15 = V_1;
		NullCheck(L_14);
		bool L_16;
		L_16 = Dictionary_2_ContainsKey_m288872404D22932B8AE710EF7BEE1AF7064BD258(L_14, L_15, /*hidden argument*/Dictionary_2_ContainsKey_m288872404D22932B8AE710EF7BEE1AF7064BD258_RuntimeMethod_var);
		if (!L_16)
		{
			goto IL_00a0;
		}
	}
	{
		// var logoutEmailSuccessDelegate = (OnLogoutEmailSuccess) delegates[delegateIdSuccess];
		IL2CPP_RUNTIME_CLASS_INIT(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var);
		Dictionary_2_t521306497EEE741202CFF9F69FB533CCAD8C8ACD * L_17 = ((OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var))->get_delegates_4();
		String_t* L_18 = V_1;
		NullCheck(L_17);
		Delegate_t * L_19;
		L_19 = Dictionary_2_get_Item_mF5D8C5B9DBE4629B80CA94EBBF5F528C9A35FC3C(L_17, L_18, /*hidden argument*/Dictionary_2_get_Item_mF5D8C5B9DBE4629B80CA94EBBF5F528C9A35FC3C_RuntimeMethod_var);
		// delegates.Remove(delegateIdSuccess);
		Dictionary_2_t521306497EEE741202CFF9F69FB533CCAD8C8ACD * L_20 = ((OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var))->get_delegates_4();
		String_t* L_21 = V_1;
		NullCheck(L_20);
		bool L_22;
		L_22 = Dictionary_2_Remove_m3D41B282C6E5156A390B58BF791E0CB3AB282E43(L_20, L_21, /*hidden argument*/Dictionary_2_Remove_m3D41B282C6E5156A390B58BF791E0CB3AB282E43_RuntimeMethod_var);
		// delegates.Remove(delegateIdFailure);
		Dictionary_2_t521306497EEE741202CFF9F69FB533CCAD8C8ACD * L_23 = ((OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var))->get_delegates_4();
		String_t* L_24 = V_2;
		NullCheck(L_23);
		bool L_25;
		L_25 = Dictionary_2_Remove_m3D41B282C6E5156A390B58BF791E0CB3AB282E43(L_23, L_24, /*hidden argument*/Dictionary_2_Remove_m3D41B282C6E5156A390B58BF791E0CB3AB282E43_RuntimeMethod_var);
		// logoutEmailSuccessDelegate();
		NullCheck(((OnLogoutEmailSuccess_t87D6896F1510F5624EA317AA83BCEEBE79DC60AF *)CastclassSealed((RuntimeObject*)L_19, OnLogoutEmailSuccess_t87D6896F1510F5624EA317AA83BCEEBE79DC60AF_il2cpp_TypeInfo_var)));
		OnLogoutEmailSuccess_Invoke_m1249F522E9ACB6C6AEB1E0A650126D2E76A2E5FD(((OnLogoutEmailSuccess_t87D6896F1510F5624EA317AA83BCEEBE79DC60AF *)CastclassSealed((RuntimeObject*)L_19, OnLogoutEmailSuccess_t87D6896F1510F5624EA317AA83BCEEBE79DC60AF_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
	}

IL_00a0:
	{
		// }
		return;
	}
}
// System.Void OneSignal::onLogoutEmailFailure(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneSignal_onLogoutEmailFailure_m45F82C231E566E9A27D32E4B06B858A8BC036039 (OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C * __this, String_t* ___jsonString0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m288872404D22932B8AE710EF7BEE1AF7064BD258_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m3D41B282C6E5156A390B58BF791E0CB3AB282E43_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mF5D8C5B9DBE4629B80CA94EBBF5F528C9A35FC3C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnLogoutEmailFailure_tA4226BD4128D5C768C079A27BC0ABEA359DC848D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B4D33ECEDCA004ACF5FBD9F549F536E73E5C059);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1E3DB61522C4E7AA1D5A216FFA2CA92BAFA2EBF1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2C410EB1F22365EC1A74DF0D8C89C99D53453CDD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5D08F7C1B259530ED46D90B3F0BD1CA69B5791A4);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * V_0 = NULL;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * V_3 = NULL;
	{
		// if (string.IsNullOrEmpty(jsonString))
		String_t* L_0 = ___jsonString0;
		bool L_1;
		L_1 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_0, /*hidden argument*/NULL);
		if (!L_1)
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
		// var jsonObject = Json.Deserialize(jsonString) as Dictionary<string, object>;
		String_t* L_2 = ___jsonString0;
		RuntimeObject * L_3;
		L_3 = Json_Deserialize_m4F6ECB958C77AF596B8666DDF7B41BAF2F0FCE10(L_2, /*hidden argument*/NULL);
		V_0 = ((Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *)IsInstClass((RuntimeObject*)L_3, Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_il2cpp_TypeInfo_var));
		// if (!isValidSuccessFailureDelegate(jsonObject))
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_4 = V_0;
		bool L_5;
		L_5 = OneSignal_isValidSuccessFailureDelegate_m45DCD71D2555940A8605074102FCBFC669A4E83E(__this, L_4, /*hidden argument*/NULL);
		if (L_5)
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
		// var delegateId = Json.Deserialize(jsonObject["delegate_id"] as string) as Dictionary<string, object>;
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_6 = V_0;
		NullCheck(L_6);
		RuntimeObject * L_7;
		L_7 = Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D(L_6, _stringLiteral0B4D33ECEDCA004ACF5FBD9F549F536E73E5C059, /*hidden argument*/Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D_RuntimeMethod_var);
		RuntimeObject * L_8;
		L_8 = Json_Deserialize_m4F6ECB958C77AF596B8666DDF7B41BAF2F0FCE10(((String_t*)IsInstSealed((RuntimeObject*)L_7, String_t_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		// var delegateIdSuccess = delegateId["success"] as string;
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_9 = ((Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *)IsInstClass((RuntimeObject*)L_8, Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_il2cpp_TypeInfo_var));
		NullCheck(L_9);
		RuntimeObject * L_10;
		L_10 = Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D(L_9, _stringLiteral5D08F7C1B259530ED46D90B3F0BD1CA69B5791A4, /*hidden argument*/Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D_RuntimeMethod_var);
		V_1 = ((String_t*)IsInstSealed((RuntimeObject*)L_10, String_t_il2cpp_TypeInfo_var));
		// var delegateIdFailure = delegateId["failure"] as string;
		NullCheck(L_9);
		RuntimeObject * L_11;
		L_11 = Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D(L_9, _stringLiteral1E3DB61522C4E7AA1D5A216FFA2CA92BAFA2EBF1, /*hidden argument*/Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D_RuntimeMethod_var);
		V_2 = ((String_t*)IsInstSealed((RuntimeObject*)L_11, String_t_il2cpp_TypeInfo_var));
		// var response = jsonObject["response"] as string;
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_12 = V_0;
		NullCheck(L_12);
		RuntimeObject * L_13;
		L_13 = Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D(L_12, _stringLiteral2C410EB1F22365EC1A74DF0D8C89C99D53453CDD, /*hidden argument*/Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D_RuntimeMethod_var);
		// var failure = Json.Deserialize(response) as Dictionary<string, object>;
		RuntimeObject * L_14;
		L_14 = Json_Deserialize_m4F6ECB958C77AF596B8666DDF7B41BAF2F0FCE10(((String_t*)IsInstSealed((RuntimeObject*)L_13, String_t_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		V_3 = ((Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *)IsInstClass((RuntimeObject*)L_14, Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_il2cpp_TypeInfo_var));
		// if (delegates.ContainsKey(delegateIdFailure))
		IL2CPP_RUNTIME_CLASS_INIT(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var);
		Dictionary_2_t521306497EEE741202CFF9F69FB533CCAD8C8ACD * L_15 = ((OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var))->get_delegates_4();
		String_t* L_16 = V_2;
		NullCheck(L_15);
		bool L_17;
		L_17 = Dictionary_2_ContainsKey_m288872404D22932B8AE710EF7BEE1AF7064BD258(L_15, L_16, /*hidden argument*/Dictionary_2_ContainsKey_m288872404D22932B8AE710EF7BEE1AF7064BD258_RuntimeMethod_var);
		if (!L_17)
		{
			goto IL_00b0;
		}
	}
	{
		// var logoutEmailFailureDelegate = (OnLogoutEmailFailure) delegates[delegateIdFailure];
		IL2CPP_RUNTIME_CLASS_INIT(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var);
		Dictionary_2_t521306497EEE741202CFF9F69FB533CCAD8C8ACD * L_18 = ((OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var))->get_delegates_4();
		String_t* L_19 = V_2;
		NullCheck(L_18);
		Delegate_t * L_20;
		L_20 = Dictionary_2_get_Item_mF5D8C5B9DBE4629B80CA94EBBF5F528C9A35FC3C(L_18, L_19, /*hidden argument*/Dictionary_2_get_Item_mF5D8C5B9DBE4629B80CA94EBBF5F528C9A35FC3C_RuntimeMethod_var);
		// delegates.Remove(delegateIdSuccess);
		Dictionary_2_t521306497EEE741202CFF9F69FB533CCAD8C8ACD * L_21 = ((OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var))->get_delegates_4();
		String_t* L_22 = V_1;
		NullCheck(L_21);
		bool L_23;
		L_23 = Dictionary_2_Remove_m3D41B282C6E5156A390B58BF791E0CB3AB282E43(L_21, L_22, /*hidden argument*/Dictionary_2_Remove_m3D41B282C6E5156A390B58BF791E0CB3AB282E43_RuntimeMethod_var);
		// delegates.Remove(delegateIdFailure);
		Dictionary_2_t521306497EEE741202CFF9F69FB533CCAD8C8ACD * L_24 = ((OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var))->get_delegates_4();
		String_t* L_25 = V_2;
		NullCheck(L_24);
		bool L_26;
		L_26 = Dictionary_2_Remove_m3D41B282C6E5156A390B58BF791E0CB3AB282E43(L_24, L_25, /*hidden argument*/Dictionary_2_Remove_m3D41B282C6E5156A390B58BF791E0CB3AB282E43_RuntimeMethod_var);
		// logoutEmailFailureDelegate(failure);
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_27 = V_3;
		NullCheck(((OnLogoutEmailFailure_tA4226BD4128D5C768C079A27BC0ABEA359DC848D *)CastclassSealed((RuntimeObject*)L_20, OnLogoutEmailFailure_tA4226BD4128D5C768C079A27BC0ABEA359DC848D_il2cpp_TypeInfo_var)));
		OnLogoutEmailFailure_Invoke_m5433108F92A3791222E6C178AD2F6B92F0E6BCCA(((OnLogoutEmailFailure_tA4226BD4128D5C768C079A27BC0ABEA359DC848D *)CastclassSealed((RuntimeObject*)L_20, OnLogoutEmailFailure_tA4226BD4128D5C768C079A27BC0ABEA359DC848D_il2cpp_TypeInfo_var)), L_27, /*hidden argument*/NULL);
	}

IL_00b0:
	{
		// }
		return;
	}
}
// System.Void OneSignal::onSendOutcomeSuccess(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneSignal_onSendOutcomeSuccess_m1D02FAE7D613DCEEF8E61F0792DCEF40AFD2C5F4 (OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C * __this, String_t* ___jsonString0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m288872404D22932B8AE710EF7BEE1AF7064BD258_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m3D41B282C6E5156A390B58BF791E0CB3AB282E43_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mF5D8C5B9DBE4629B80CA94EBBF5F528C9A35FC3C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OSOutcomeEvent_tA0383B5CF8F2466567F3E15AA97710870875535D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnSendOutcomeSuccess_t33CAC591369FF5B710CB915E5F2EC54F7BD19D0C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B4D33ECEDCA004ACF5FBD9F549F536E73E5C059);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2C410EB1F22365EC1A74DF0D8C89C99D53453CDD);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * V_0 = NULL;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	OSOutcomeEvent_tA0383B5CF8F2466567F3E15AA97710870875535D * V_3 = NULL;
	{
		// if (string.IsNullOrEmpty(jsonString))
		String_t* L_0 = ___jsonString0;
		bool L_1;
		L_1 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_0, /*hidden argument*/NULL);
		if (!L_1)
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
		// var jsonObject = Json.Deserialize(jsonString) as Dictionary<string, object>;
		String_t* L_2 = ___jsonString0;
		RuntimeObject * L_3;
		L_3 = Json_Deserialize_m4F6ECB958C77AF596B8666DDF7B41BAF2F0FCE10(L_2, /*hidden argument*/NULL);
		V_0 = ((Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *)IsInstClass((RuntimeObject*)L_3, Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_il2cpp_TypeInfo_var));
		// if (!isValidDelegate(jsonObject))
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_4 = V_0;
		bool L_5;
		L_5 = OneSignal_isValidDelegate_m6E92E6BD705588CB1BCCE46C57AE3956E9D340B5(__this, L_4, /*hidden argument*/NULL);
		if (L_5)
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
		// var delegateId = jsonObject["delegate_id"] as string;
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_6 = V_0;
		NullCheck(L_6);
		RuntimeObject * L_7;
		L_7 = Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D(L_6, _stringLiteral0B4D33ECEDCA004ACF5FBD9F549F536E73E5C059, /*hidden argument*/Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D_RuntimeMethod_var);
		V_1 = ((String_t*)IsInstSealed((RuntimeObject*)L_7, String_t_il2cpp_TypeInfo_var));
		// var response = jsonObject["response"] as string;
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_8 = V_0;
		NullCheck(L_8);
		RuntimeObject * L_9;
		L_9 = Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D(L_8, _stringLiteral2C410EB1F22365EC1A74DF0D8C89C99D53453CDD, /*hidden argument*/Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D_RuntimeMethod_var);
		V_2 = ((String_t*)IsInstSealed((RuntimeObject*)L_9, String_t_il2cpp_TypeInfo_var));
		// if (string.IsNullOrEmpty(response))
		String_t* L_10 = V_2;
		bool L_11;
		L_11 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0051;
		}
	}
	{
		// outcomeEvent = new OSOutcomeEvent();
		OSOutcomeEvent_tA0383B5CF8F2466567F3E15AA97710870875535D * L_12 = (OSOutcomeEvent_tA0383B5CF8F2466567F3E15AA97710870875535D *)il2cpp_codegen_object_new(OSOutcomeEvent_tA0383B5CF8F2466567F3E15AA97710870875535D_il2cpp_TypeInfo_var);
		OSOutcomeEvent__ctor_m360584AB1C080E514D051EC88EB8C1AD499C9D48(L_12, /*hidden argument*/NULL);
		V_3 = L_12;
		// }
		goto IL_0062;
	}

IL_0051:
	{
		// var outcomeObject = Json.Deserialize(response) as Dictionary<string, object>;
		String_t* L_13 = V_2;
		RuntimeObject * L_14;
		L_14 = Json_Deserialize_m4F6ECB958C77AF596B8666DDF7B41BAF2F0FCE10(L_13, /*hidden argument*/NULL);
		// outcomeEvent = new OSOutcomeEvent(outcomeObject);
		OSOutcomeEvent_tA0383B5CF8F2466567F3E15AA97710870875535D * L_15 = (OSOutcomeEvent_tA0383B5CF8F2466567F3E15AA97710870875535D *)il2cpp_codegen_object_new(OSOutcomeEvent_tA0383B5CF8F2466567F3E15AA97710870875535D_il2cpp_TypeInfo_var);
		OSOutcomeEvent__ctor_mB222B71F5172E1E97E05D7D9294D531241CCE18A(L_15, ((Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *)IsInstClass((RuntimeObject*)L_14, Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		V_3 = L_15;
	}

IL_0062:
	{
		// if (delegates.ContainsKey(delegateId) && delegates[delegateId] != null)
		IL2CPP_RUNTIME_CLASS_INIT(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var);
		Dictionary_2_t521306497EEE741202CFF9F69FB533CCAD8C8ACD * L_16 = ((OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var))->get_delegates_4();
		String_t* L_17 = V_1;
		NullCheck(L_16);
		bool L_18;
		L_18 = Dictionary_2_ContainsKey_m288872404D22932B8AE710EF7BEE1AF7064BD258(L_16, L_17, /*hidden argument*/Dictionary_2_ContainsKey_m288872404D22932B8AE710EF7BEE1AF7064BD258_RuntimeMethod_var);
		if (!L_18)
		{
			goto IL_009e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var);
		Dictionary_2_t521306497EEE741202CFF9F69FB533CCAD8C8ACD * L_19 = ((OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var))->get_delegates_4();
		String_t* L_20 = V_1;
		NullCheck(L_19);
		Delegate_t * L_21;
		L_21 = Dictionary_2_get_Item_mF5D8C5B9DBE4629B80CA94EBBF5F528C9A35FC3C(L_19, L_20, /*hidden argument*/Dictionary_2_get_Item_mF5D8C5B9DBE4629B80CA94EBBF5F528C9A35FC3C_RuntimeMethod_var);
		if (!L_21)
		{
			goto IL_009e;
		}
	}
	{
		// var sendOutcomeSuccess = (OnSendOutcomeSuccess) delegates[delegateId];
		IL2CPP_RUNTIME_CLASS_INIT(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var);
		Dictionary_2_t521306497EEE741202CFF9F69FB533CCAD8C8ACD * L_22 = ((OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var))->get_delegates_4();
		String_t* L_23 = V_1;
		NullCheck(L_22);
		Delegate_t * L_24;
		L_24 = Dictionary_2_get_Item_mF5D8C5B9DBE4629B80CA94EBBF5F528C9A35FC3C(L_22, L_23, /*hidden argument*/Dictionary_2_get_Item_mF5D8C5B9DBE4629B80CA94EBBF5F528C9A35FC3C_RuntimeMethod_var);
		// delegates.Remove(delegateId);
		Dictionary_2_t521306497EEE741202CFF9F69FB533CCAD8C8ACD * L_25 = ((OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var))->get_delegates_4();
		String_t* L_26 = V_1;
		NullCheck(L_25);
		bool L_27;
		L_27 = Dictionary_2_Remove_m3D41B282C6E5156A390B58BF791E0CB3AB282E43(L_25, L_26, /*hidden argument*/Dictionary_2_Remove_m3D41B282C6E5156A390B58BF791E0CB3AB282E43_RuntimeMethod_var);
		// sendOutcomeSuccess(outcomeEvent);
		OSOutcomeEvent_tA0383B5CF8F2466567F3E15AA97710870875535D * L_28 = V_3;
		NullCheck(((OnSendOutcomeSuccess_t33CAC591369FF5B710CB915E5F2EC54F7BD19D0C *)CastclassSealed((RuntimeObject*)L_24, OnSendOutcomeSuccess_t33CAC591369FF5B710CB915E5F2EC54F7BD19D0C_il2cpp_TypeInfo_var)));
		OnSendOutcomeSuccess_Invoke_mA05B4A944D533EBBA32B0EB4ED8EBA632B47F5DE(((OnSendOutcomeSuccess_t33CAC591369FF5B710CB915E5F2EC54F7BD19D0C *)CastclassSealed((RuntimeObject*)L_24, OnSendOutcomeSuccess_t33CAC591369FF5B710CB915E5F2EC54F7BD19D0C_il2cpp_TypeInfo_var)), L_28, /*hidden argument*/NULL);
	}

IL_009e:
	{
		// }
		return;
	}
}
// System.Void OneSignal::onOSPermissionChanged(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneSignal_onOSPermissionChanged_m0FE4E135E2AB5F3E3EFD81A32611DC99B8F23279 (OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C * __this, String_t* ___stateChangesJSONString0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IOneSignalPlatform_t161D92077EBE8503720EE7A41E171D69406AAF68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	OSPermissionStateChanges_t1B014D5332A17B2F12B7B9B981B61A08AB8FDCF8 * V_0 = NULL;
	{
		// OSPermissionStateChanges stateChanges =
		//     oneSignalPlatform.ParseOSPermissionStateChanges(stateChangesJSONString);
		IL2CPP_RUNTIME_CLASS_INIT(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var))->get_oneSignalPlatform_16();
		String_t* L_1 = ___stateChangesJSONString0;
		NullCheck(L_0);
		OSPermissionStateChanges_t1B014D5332A17B2F12B7B9B981B61A08AB8FDCF8 * L_2;
		L_2 = InterfaceFuncInvoker1< OSPermissionStateChanges_t1B014D5332A17B2F12B7B9B981B61A08AB8FDCF8 *, String_t* >::Invoke(45 /* OSPermissionStateChanges IOneSignalPlatform::ParseOSPermissionStateChanges(System.String) */, IOneSignalPlatform_t161D92077EBE8503720EE7A41E171D69406AAF68_il2cpp_TypeInfo_var, L_0, L_1);
		V_0 = L_2;
		// internalPermissionObserver(stateChanges);
		PermissionObservable_tAD0961762662CFBE5C5C21B4F7B44816689D232D * L_3 = ((OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var))->get_internalPermissionObserver_6();
		OSPermissionStateChanges_t1B014D5332A17B2F12B7B9B981B61A08AB8FDCF8 * L_4 = V_0;
		NullCheck(L_3);
		PermissionObservable_Invoke_m7AE7C99E2B8A793B0D60ECA41D4E59D8CC426E33(L_3, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void OneSignal::onOSSubscriptionChanged(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneSignal_onOSSubscriptionChanged_m06B493BB2C90CF03DB24219CAB79B133F8F55DFD (OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C * __this, String_t* ___stateChangesJSONString0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IOneSignalPlatform_t161D92077EBE8503720EE7A41E171D69406AAF68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	OSSubscriptionStateChanges_t80801EC51BCF40EDC399FB2C2658111539658213 * V_0 = NULL;
	{
		// OSSubscriptionStateChanges stateChanges =
		//     oneSignalPlatform.ParseOSSubscriptionStateChanges(stateChangesJSONString);
		IL2CPP_RUNTIME_CLASS_INIT(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var))->get_oneSignalPlatform_16();
		String_t* L_1 = ___stateChangesJSONString0;
		NullCheck(L_0);
		OSSubscriptionStateChanges_t80801EC51BCF40EDC399FB2C2658111539658213 * L_2;
		L_2 = InterfaceFuncInvoker1< OSSubscriptionStateChanges_t80801EC51BCF40EDC399FB2C2658111539658213 *, String_t* >::Invoke(46 /* OSSubscriptionStateChanges IOneSignalPlatform::ParseOSSubscriptionStateChanges(System.String) */, IOneSignalPlatform_t161D92077EBE8503720EE7A41E171D69406AAF68_il2cpp_TypeInfo_var, L_0, L_1);
		V_0 = L_2;
		// internalSubscriptionObserver(stateChanges);
		SubscriptionObservable_tAC9D68D12698867A849F8DBEDF5E81CEF8353BBB * L_3 = ((OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var))->get_internalSubscriptionObserver_8();
		OSSubscriptionStateChanges_t80801EC51BCF40EDC399FB2C2658111539658213 * L_4 = V_0;
		NullCheck(L_3);
		SubscriptionObservable_Invoke_mA5DABD1A12E6A7502F4E0BBDBB87B944A25ADC79(L_3, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void OneSignal::onOSEmailSubscriptionChanged(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneSignal_onOSEmailSubscriptionChanged_m2F6F1CCEB4E7CF5BE68A007A67C78C63157CEEFF (OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C * __this, String_t* ___stateChangesJSONString0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IOneSignalPlatform_t161D92077EBE8503720EE7A41E171D69406AAF68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	OSEmailSubscriptionStateChanges_tCEE883A6FE7F1AAAC113C9D9E6135CEDAE1ABC6A * V_0 = NULL;
	{
		// OSEmailSubscriptionStateChanges stateChanges =
		//     oneSignalPlatform.ParseOSEmailSubscriptionStateChanges(stateChangesJSONString);
		IL2CPP_RUNTIME_CLASS_INIT(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var))->get_oneSignalPlatform_16();
		String_t* L_1 = ___stateChangesJSONString0;
		NullCheck(L_0);
		OSEmailSubscriptionStateChanges_tCEE883A6FE7F1AAAC113C9D9E6135CEDAE1ABC6A * L_2;
		L_2 = InterfaceFuncInvoker1< OSEmailSubscriptionStateChanges_tCEE883A6FE7F1AAAC113C9D9E6135CEDAE1ABC6A *, String_t* >::Invoke(47 /* OSEmailSubscriptionStateChanges IOneSignalPlatform::ParseOSEmailSubscriptionStateChanges(System.String) */, IOneSignalPlatform_t161D92077EBE8503720EE7A41E171D69406AAF68_il2cpp_TypeInfo_var, L_0, L_1);
		V_0 = L_2;
		// internalEmailSubscriptionObserver(stateChanges);
		EmailSubscriptionObservable_t0BE190ED78D890F32B3CD78351CB03CDE6743C4A * L_3 = ((OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var))->get_internalEmailSubscriptionObserver_10();
		OSEmailSubscriptionStateChanges_tCEE883A6FE7F1AAAC113C9D9E6135CEDAE1ABC6A * L_4 = V_0;
		NullCheck(L_3);
		EmailSubscriptionObservable_Invoke_m475D1FD8E0E1FD296C7E6E188E23D1654FFA6146(L_3, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void OneSignal::onPromptForPushNotificationsWithUserResponse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneSignal_onPromptForPushNotificationsWithUserResponse_mEA025C7C3ACCBBD2BE7560378EDC3A074A823B0E (OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C * __this, String_t* ___accepted0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// notificationUserResponseDelegate(Convert.ToBoolean(accepted));
		IL2CPP_RUNTIME_CLASS_INIT(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var);
		PromptForPushNotificationsUserResponse_t5508C614F3AB278D72FACCAD119F0F65792AB501 * L_0 = ((OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var))->get_notificationUserResponseDelegate_5();
		String_t* L_1 = ___accepted0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Convert_ToBoolean_m9BE4DAAEA91C52F17A8A7101DABB32253925826B(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		PromptForPushNotificationsUserResponse_Invoke_mAB662FD998CF5BC2A5B565F794F3FED2EDF8A622(L_0, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void OneSignal::onInAppMessageClicked(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneSignal_onInAppMessageClicked_mDCE2937FB83BCAB69CAEE59CCF22E15C005E71A7 (OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C * __this, String_t* ___jsonString0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m3C1B28325435E61FFAD431E314EABF915B79A55E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OSInAppMessageAction_tAE95CC815769B2A2C7EE6A21F465550529D5C1A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3F7BB78E23CC83DC1DABE86458AEB502D8D2259A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral689F3DBBCBED1762C5EE94535D915BAA7AF9BB97);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7A69BB6DC52ACFDC658A5C2155E741E58818E320);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFD7FF5527419DE1CA42102B67E5C816D3A8C368A);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * V_0 = NULL;
	OSInAppMessageAction_tAE95CC815769B2A2C7EE6A21F465550529D5C1A3 * V_1 = NULL;
	{
		// if (builder.inAppMessageClickHandlerDelegate == null)
		IL2CPP_RUNTIME_CLASS_INIT(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var);
		UnityBuilder_tDBFC88D88033BADCF56F27E95359EF77CF9ADFED * L_0 = ((OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var))->get_builder_14();
		NullCheck(L_0);
		InAppMessageClicked_t28BE72075727CEF08C18EC3542264EE5099C46AA * L_1 = L_0->get_inAppMessageClickHandlerDelegate_5();
		if (L_1)
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
		// var jsonObject = Json.Deserialize(jsonString) as Dictionary<string, object>;
		String_t* L_2 = ___jsonString0;
		RuntimeObject * L_3;
		L_3 = Json_Deserialize_m4F6ECB958C77AF596B8666DDF7B41BAF2F0FCE10(L_2, /*hidden argument*/NULL);
		V_0 = ((Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *)IsInstClass((RuntimeObject*)L_3, Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_il2cpp_TypeInfo_var));
		// var action = new OSInAppMessageAction();
		OSInAppMessageAction_tAE95CC815769B2A2C7EE6A21F465550529D5C1A3 * L_4 = (OSInAppMessageAction_tAE95CC815769B2A2C7EE6A21F465550529D5C1A3 *)il2cpp_codegen_object_new(OSInAppMessageAction_tAE95CC815769B2A2C7EE6A21F465550529D5C1A3_il2cpp_TypeInfo_var);
		OSInAppMessageAction__ctor_m39592287776905704BF2D003AFBBFD345EAA08FB(L_4, /*hidden argument*/NULL);
		V_1 = L_4;
		// if (jsonObject.ContainsKey("click_name"))
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_5 = V_0;
		NullCheck(L_5);
		bool L_6;
		L_6 = Dictionary_2_ContainsKey_m3C1B28325435E61FFAD431E314EABF915B79A55E(L_5, _stringLiteral3F7BB78E23CC83DC1DABE86458AEB502D8D2259A, /*hidden argument*/Dictionary_2_ContainsKey_m3C1B28325435E61FFAD431E314EABF915B79A55E_RuntimeMethod_var);
		if (!L_6)
		{
			goto IL_0042;
		}
	}
	{
		// action.clickName = jsonObject["click_name"] as String;
		OSInAppMessageAction_tAE95CC815769B2A2C7EE6A21F465550529D5C1A3 * L_7 = V_1;
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_8 = V_0;
		NullCheck(L_8);
		RuntimeObject * L_9;
		L_9 = Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D(L_8, _stringLiteral3F7BB78E23CC83DC1DABE86458AEB502D8D2259A, /*hidden argument*/Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D_RuntimeMethod_var);
		NullCheck(L_7);
		L_7->set_clickName_0(((String_t*)IsInstSealed((RuntimeObject*)L_9, String_t_il2cpp_TypeInfo_var)));
	}

IL_0042:
	{
		// if (jsonObject.ContainsKey("click_url"))
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_10 = V_0;
		NullCheck(L_10);
		bool L_11;
		L_11 = Dictionary_2_ContainsKey_m3C1B28325435E61FFAD431E314EABF915B79A55E(L_10, _stringLiteral689F3DBBCBED1762C5EE94535D915BAA7AF9BB97, /*hidden argument*/Dictionary_2_ContainsKey_m3C1B28325435E61FFAD431E314EABF915B79A55E_RuntimeMethod_var);
		if (!L_11)
		{
			goto IL_0065;
		}
	}
	{
		// action.clickUrl = jsonObject["click_url"] as String;
		OSInAppMessageAction_tAE95CC815769B2A2C7EE6A21F465550529D5C1A3 * L_12 = V_1;
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_13 = V_0;
		NullCheck(L_13);
		RuntimeObject * L_14;
		L_14 = Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D(L_13, _stringLiteral689F3DBBCBED1762C5EE94535D915BAA7AF9BB97, /*hidden argument*/Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D_RuntimeMethod_var);
		NullCheck(L_12);
		L_12->set_clickUrl_1(((String_t*)IsInstSealed((RuntimeObject*)L_14, String_t_il2cpp_TypeInfo_var)));
	}

IL_0065:
	{
		// if (jsonObject.ContainsKey("closes_message"))
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_15 = V_0;
		NullCheck(L_15);
		bool L_16;
		L_16 = Dictionary_2_ContainsKey_m3C1B28325435E61FFAD431E314EABF915B79A55E(L_15, _stringLiteralFD7FF5527419DE1CA42102B67E5C816D3A8C368A, /*hidden argument*/Dictionary_2_ContainsKey_m3C1B28325435E61FFAD431E314EABF915B79A55E_RuntimeMethod_var);
		if (!L_16)
		{
			goto IL_0088;
		}
	}
	{
		// action.closesMessage = (bool) jsonObject["closes_message"];
		OSInAppMessageAction_tAE95CC815769B2A2C7EE6A21F465550529D5C1A3 * L_17 = V_1;
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_18 = V_0;
		NullCheck(L_18);
		RuntimeObject * L_19;
		L_19 = Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D(L_18, _stringLiteralFD7FF5527419DE1CA42102B67E5C816D3A8C368A, /*hidden argument*/Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D_RuntimeMethod_var);
		NullCheck(L_17);
		L_17->set_closesMessage_3(((*(bool*)((bool*)UnBox(L_19, Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var)))));
	}

IL_0088:
	{
		// if (jsonObject.ContainsKey("first_click"))
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_20 = V_0;
		NullCheck(L_20);
		bool L_21;
		L_21 = Dictionary_2_ContainsKey_m3C1B28325435E61FFAD431E314EABF915B79A55E(L_20, _stringLiteral7A69BB6DC52ACFDC658A5C2155E741E58818E320, /*hidden argument*/Dictionary_2_ContainsKey_m3C1B28325435E61FFAD431E314EABF915B79A55E_RuntimeMethod_var);
		if (!L_21)
		{
			goto IL_00ab;
		}
	}
	{
		// action.firstClick = (bool) jsonObject["first_click"];
		OSInAppMessageAction_tAE95CC815769B2A2C7EE6A21F465550529D5C1A3 * L_22 = V_1;
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_23 = V_0;
		NullCheck(L_23);
		RuntimeObject * L_24;
		L_24 = Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D(L_23, _stringLiteral7A69BB6DC52ACFDC658A5C2155E741E58818E320, /*hidden argument*/Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D_RuntimeMethod_var);
		NullCheck(L_22);
		L_22->set_firstClick_2(((*(bool*)((bool*)UnBox(L_24, Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var)))));
	}

IL_00ab:
	{
		// builder.inAppMessageClickHandlerDelegate(action);
		IL2CPP_RUNTIME_CLASS_INIT(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var);
		UnityBuilder_tDBFC88D88033BADCF56F27E95359EF77CF9ADFED * L_25 = ((OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var))->get_builder_14();
		NullCheck(L_25);
		InAppMessageClicked_t28BE72075727CEF08C18EC3542264EE5099C46AA * L_26 = L_25->get_inAppMessageClickHandlerDelegate_5();
		OSInAppMessageAction_tAE95CC815769B2A2C7EE6A21F465550529D5C1A3 * L_27 = V_1;
		NullCheck(L_26);
		InAppMessageClicked_Invoke_m66291C067D0E1521F8343E8ADC337ACB49CBD88E(L_26, L_27, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean OneSignal::isValidDelegate(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OneSignal_isValidDelegate_m6E92E6BD705588CB1BCCE46C57AE3956E9D340B5 (OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C * __this, Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * ___jsonObject0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m3C1B28325435E61FFAD431E314EABF915B79A55E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B4D33ECEDCA004ACF5FBD9F549F536E73E5C059);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2C410EB1F22365EC1A74DF0D8C89C99D53453CDD);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!jsonObject.ContainsKey("delegate_id"))
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_0 = ___jsonObject0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Dictionary_2_ContainsKey_m3C1B28325435E61FFAD431E314EABF915B79A55E(L_0, _stringLiteral0B4D33ECEDCA004ACF5FBD9F549F536E73E5C059, /*hidden argument*/Dictionary_2_ContainsKey_m3C1B28325435E61FFAD431E314EABF915B79A55E_RuntimeMethod_var);
		if (L_1)
		{
			goto IL_000f;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_000f:
	{
		// if (!jsonObject.ContainsKey("response"))
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_2 = ___jsonObject0;
		NullCheck(L_2);
		bool L_3;
		L_3 = Dictionary_2_ContainsKey_m3C1B28325435E61FFAD431E314EABF915B79A55E(L_2, _stringLiteral2C410EB1F22365EC1A74DF0D8C89C99D53453CDD, /*hidden argument*/Dictionary_2_ContainsKey_m3C1B28325435E61FFAD431E314EABF915B79A55E_RuntimeMethod_var);
		if (L_3)
		{
			goto IL_001e;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_001e:
	{
		// return true;
		return (bool)1;
	}
}
// System.Boolean OneSignal::isValidSuccessFailureDelegate(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OneSignal_isValidSuccessFailureDelegate_m45DCD71D2555940A8605074102FCBFC669A4E83E (OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C * __this, Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * ___jsonObject0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m3C1B28325435E61FFAD431E314EABF915B79A55E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B4D33ECEDCA004ACF5FBD9F549F536E73E5C059);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1E3DB61522C4E7AA1D5A216FFA2CA92BAFA2EBF1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5D08F7C1B259530ED46D90B3F0BD1CA69B5791A4);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * V_0 = NULL;
	{
		// if (!isValidDelegate(jsonObject))
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_0 = ___jsonObject0;
		bool L_1;
		L_1 = OneSignal_isValidDelegate_m6E92E6BD705588CB1BCCE46C57AE3956E9D340B5(__this, L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_000b;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_000b:
	{
		// var delegateId = Json.Deserialize(jsonObject["delegate_id"] as string) as Dictionary<string, object>;
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_2 = ___jsonObject0;
		NullCheck(L_2);
		RuntimeObject * L_3;
		L_3 = Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D(L_2, _stringLiteral0B4D33ECEDCA004ACF5FBD9F549F536E73E5C059, /*hidden argument*/Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D_RuntimeMethod_var);
		RuntimeObject * L_4;
		L_4 = Json_Deserialize_m4F6ECB958C77AF596B8666DDF7B41BAF2F0FCE10(((String_t*)IsInstSealed((RuntimeObject*)L_3, String_t_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		V_0 = ((Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *)IsInstClass((RuntimeObject*)L_4, Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_il2cpp_TypeInfo_var));
		// if (!delegateId.ContainsKey("success") || !delegateId.ContainsKey("failure"))
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_5 = V_0;
		NullCheck(L_5);
		bool L_6;
		L_6 = Dictionary_2_ContainsKey_m3C1B28325435E61FFAD431E314EABF915B79A55E(L_5, _stringLiteral5D08F7C1B259530ED46D90B3F0BD1CA69B5791A4, /*hidden argument*/Dictionary_2_ContainsKey_m3C1B28325435E61FFAD431E314EABF915B79A55E_RuntimeMethod_var);
		if (!L_6)
		{
			goto IL_0040;
		}
	}
	{
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_7 = V_0;
		NullCheck(L_7);
		bool L_8;
		L_8 = Dictionary_2_ContainsKey_m3C1B28325435E61FFAD431E314EABF915B79A55E(L_7, _stringLiteral1E3DB61522C4E7AA1D5A216FFA2CA92BAFA2EBF1, /*hidden argument*/Dictionary_2_ContainsKey_m3C1B28325435E61FFAD431E314EABF915B79A55E_RuntimeMethod_var);
		if (L_8)
		{
			goto IL_0042;
		}
	}

IL_0040:
	{
		// return false;
		return (bool)0;
	}

IL_0042:
	{
		// return true;
		return (bool)1;
	}
}
// System.Void OneSignal::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneSignal__ctor_m801417B63426639B5914424B29208D4D6015B061 (OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void OneSignal::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneSignal__cctor_mAADE56D96D1D52BEC9E490B7DB71931810B66094 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal static UnityBuilder builder = null;
		((OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var))->set_builder_14((UnityBuilder_tDBFC88D88033BADCF56F27E95359EF77CF9ADFED *)NULL);
		// static IOneSignalPlatform oneSignalPlatform = null;
		((OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var))->set_oneSignalPlatform_16((RuntimeObject*)NULL);
		// internal static LOG_LEVEL logLevel = LOG_LEVEL.INFO, visualLogLevel = LOG_LEVEL.NONE;
		((OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var))->set_logLevel_17(4);
		// internal static LOG_LEVEL logLevel = LOG_LEVEL.INFO, visualLogLevel = LOG_LEVEL.NONE;
		((OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var))->set_visualLogLevel_18(0);
		// internal static bool requiresUserConsent = false;
		((OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var))->set_requiresUserConsent_19((bool)0);
		// static OSInFocusDisplayOption _inFocusDisplayType = OSInFocusDisplayOption.InAppAlert;
		((OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var))->set__inFocusDisplayType_20(1);
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
// OSPermissionSubscriptionState OneSignalPlatformHelper::ParsePermissionSubscriptionState(IOneSignalPlatform,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OSPermissionSubscriptionState_t7BCEA446B237598B727E00B8D8F4DBC11DEC9B72 * OneSignalPlatformHelper_ParsePermissionSubscriptionState_m1245E064E7F70A3A7C085329E268EEBD7A805E83 (RuntimeObject* ___platform0, String_t* ___jsonStr1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m3C1B28325435E61FFAD431E314EABF915B79A55E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IOneSignalPlatform_t161D92077EBE8503720EE7A41E171D69406AAF68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OSPermissionSubscriptionState_t7BCEA446B237598B727E00B8D8F4DBC11DEC9B72_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8B3A67CB9621DC1863F25BA9BEA4614E6A89D67D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9459166F9C8874C454F72B62451C5CE876287B2B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFA0FB7629437B147B4CC9592153430D3C0BC5697);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * V_0 = NULL;
	OSPermissionSubscriptionState_t7BCEA446B237598B727E00B8D8F4DBC11DEC9B72 * V_1 = NULL;
	{
		// var stateDict = Json.Deserialize(jsonStr) as Dictionary<string, object>;
		String_t* L_0 = ___jsonStr1;
		RuntimeObject * L_1;
		L_1 = Json_Deserialize_m4F6ECB958C77AF596B8666DDF7B41BAF2F0FCE10(L_0, /*hidden argument*/NULL);
		V_0 = ((Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *)IsInstClass((RuntimeObject*)L_1, Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_il2cpp_TypeInfo_var));
		// var state = new OSPermissionSubscriptionState();
		OSPermissionSubscriptionState_t7BCEA446B237598B727E00B8D8F4DBC11DEC9B72 * L_2 = (OSPermissionSubscriptionState_t7BCEA446B237598B727E00B8D8F4DBC11DEC9B72 *)il2cpp_codegen_object_new(OSPermissionSubscriptionState_t7BCEA446B237598B727E00B8D8F4DBC11DEC9B72_il2cpp_TypeInfo_var);
		OSPermissionSubscriptionState__ctor_mDCA70F367EC97F3013DC5ECA3E13DF21AE297DA2(L_2, /*hidden argument*/NULL);
		V_1 = L_2;
		// state.permissionStatus = platform.ParseOSPermissionState(stateDict["permissionStatus"]);
		OSPermissionSubscriptionState_t7BCEA446B237598B727E00B8D8F4DBC11DEC9B72 * L_3 = V_1;
		RuntimeObject* L_4 = ___platform0;
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_5 = V_0;
		NullCheck(L_5);
		RuntimeObject * L_6;
		L_6 = Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D(L_5, _stringLiteralFA0FB7629437B147B4CC9592153430D3C0BC5697, /*hidden argument*/Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D_RuntimeMethod_var);
		NullCheck(L_4);
		OSPermissionState_tCBAFAF68101221797E344D4C443CBCD374C4B754 * L_7;
		L_7 = InterfaceFuncInvoker1< OSPermissionState_tCBAFAF68101221797E344D4C443CBCD374C4B754 *, RuntimeObject * >::Invoke(42 /* OSPermissionState IOneSignalPlatform::ParseOSPermissionState(System.Object) */, IOneSignalPlatform_t161D92077EBE8503720EE7A41E171D69406AAF68_il2cpp_TypeInfo_var, L_4, L_6);
		NullCheck(L_3);
		L_3->set_permissionStatus_0(L_7);
		// state.subscriptionStatus = platform.ParseOSSubscriptionState(stateDict["subscriptionStatus"]);
		OSPermissionSubscriptionState_t7BCEA446B237598B727E00B8D8F4DBC11DEC9B72 * L_8 = V_1;
		RuntimeObject* L_9 = ___platform0;
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_10 = V_0;
		NullCheck(L_10);
		RuntimeObject * L_11;
		L_11 = Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D(L_10, _stringLiteral9459166F9C8874C454F72B62451C5CE876287B2B, /*hidden argument*/Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D_RuntimeMethod_var);
		NullCheck(L_9);
		OSSubscriptionState_t5D2F2C11D6193A8FAE88B9785FED7355C3CAB1D7 * L_12;
		L_12 = InterfaceFuncInvoker1< OSSubscriptionState_t5D2F2C11D6193A8FAE88B9785FED7355C3CAB1D7 *, RuntimeObject * >::Invoke(43 /* OSSubscriptionState IOneSignalPlatform::ParseOSSubscriptionState(System.Object) */, IOneSignalPlatform_t161D92077EBE8503720EE7A41E171D69406AAF68_il2cpp_TypeInfo_var, L_9, L_11);
		NullCheck(L_8);
		L_8->set_subscriptionStatus_1(L_12);
		// if (stateDict.ContainsKey("emailSubscriptionStatus"))
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_13 = V_0;
		NullCheck(L_13);
		bool L_14;
		L_14 = Dictionary_2_ContainsKey_m3C1B28325435E61FFAD431E314EABF915B79A55E(L_13, _stringLiteral8B3A67CB9621DC1863F25BA9BEA4614E6A89D67D, /*hidden argument*/Dictionary_2_ContainsKey_m3C1B28325435E61FFAD431E314EABF915B79A55E_RuntimeMethod_var);
		if (!L_14)
		{
			goto IL_0064;
		}
	}
	{
		// state.emailSubscriptionStatus =
		//     platform.ParseOSEmailSubscriptionState(stateDict["emailSubscriptionStatus"]);
		OSPermissionSubscriptionState_t7BCEA446B237598B727E00B8D8F4DBC11DEC9B72 * L_15 = V_1;
		RuntimeObject* L_16 = ___platform0;
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_17 = V_0;
		NullCheck(L_17);
		RuntimeObject * L_18;
		L_18 = Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D(L_17, _stringLiteral8B3A67CB9621DC1863F25BA9BEA4614E6A89D67D, /*hidden argument*/Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D_RuntimeMethod_var);
		NullCheck(L_16);
		OSEmailSubscriptionState_tF6350D8DFFE2530E089402386E40677052DE2B6F * L_19;
		L_19 = InterfaceFuncInvoker1< OSEmailSubscriptionState_tF6350D8DFFE2530E089402386E40677052DE2B6F *, RuntimeObject * >::Invoke(44 /* OSEmailSubscriptionState IOneSignalPlatform::ParseOSEmailSubscriptionState(System.Object) */, IOneSignalPlatform_t161D92077EBE8503720EE7A41E171D69406AAF68_il2cpp_TypeInfo_var, L_16, L_18);
		NullCheck(L_15);
		L_15->set_emailSubscriptionStatus_2(L_19);
	}

IL_0064:
	{
		// return state;
		OSPermissionSubscriptionState_t7BCEA446B237598B727E00B8D8F4DBC11DEC9B72 * L_20 = V_1;
		return L_20;
	}
}
// OSPermissionStateChanges OneSignalPlatformHelper::ParseOSPermissionStateChanges(IOneSignalPlatform,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OSPermissionStateChanges_t1B014D5332A17B2F12B7B9B981B61A08AB8FDCF8 * OneSignalPlatformHelper_ParseOSPermissionStateChanges_mC4525C16CEDACAE1A37EF281C2580D697DEC2455 (RuntimeObject* ___platform0, String_t* ___stateChangesJSONString1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IOneSignalPlatform_t161D92077EBE8503720EE7A41E171D69406AAF68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OSPermissionStateChanges_t1B014D5332A17B2F12B7B9B981B61A08AB8FDCF8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1593F0BA9565D41C31360961E958F85BB60F0C8B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA4419EF51FB63A77978E414E01AC1C9DCF20AA99);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * V_0 = NULL;
	{
		// var stateChangesJson = Json.Deserialize(stateChangesJSONString) as Dictionary<string, object>;
		String_t* L_0 = ___stateChangesJSONString1;
		RuntimeObject * L_1;
		L_1 = Json_Deserialize_m4F6ECB958C77AF596B8666DDF7B41BAF2F0FCE10(L_0, /*hidden argument*/NULL);
		V_0 = ((Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *)IsInstClass((RuntimeObject*)L_1, Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_il2cpp_TypeInfo_var));
		// var permissionStateChanges = new OSPermissionStateChanges();
		OSPermissionStateChanges_t1B014D5332A17B2F12B7B9B981B61A08AB8FDCF8 * L_2 = (OSPermissionStateChanges_t1B014D5332A17B2F12B7B9B981B61A08AB8FDCF8 *)il2cpp_codegen_object_new(OSPermissionStateChanges_t1B014D5332A17B2F12B7B9B981B61A08AB8FDCF8_il2cpp_TypeInfo_var);
		OSPermissionStateChanges__ctor_m4BC5B6EC0A425A3D33F99EB7E7BBCA2866A9CFE0(L_2, /*hidden argument*/NULL);
		// permissionStateChanges.to = platform.ParseOSPermissionState(stateChangesJson["to"]);
		OSPermissionStateChanges_t1B014D5332A17B2F12B7B9B981B61A08AB8FDCF8 * L_3 = L_2;
		RuntimeObject* L_4 = ___platform0;
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_5 = V_0;
		NullCheck(L_5);
		RuntimeObject * L_6;
		L_6 = Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D(L_5, _stringLiteralA4419EF51FB63A77978E414E01AC1C9DCF20AA99, /*hidden argument*/Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D_RuntimeMethod_var);
		NullCheck(L_4);
		OSPermissionState_tCBAFAF68101221797E344D4C443CBCD374C4B754 * L_7;
		L_7 = InterfaceFuncInvoker1< OSPermissionState_tCBAFAF68101221797E344D4C443CBCD374C4B754 *, RuntimeObject * >::Invoke(42 /* OSPermissionState IOneSignalPlatform::ParseOSPermissionState(System.Object) */, IOneSignalPlatform_t161D92077EBE8503720EE7A41E171D69406AAF68_il2cpp_TypeInfo_var, L_4, L_6);
		NullCheck(L_3);
		((OSStateChanges_1_t888AE05C74699C24C20A082A169751FE9EC83345 *)L_3)->set_to_0(L_7);
		// permissionStateChanges.from = platform.ParseOSPermissionState(stateChangesJson["from"]);
		OSPermissionStateChanges_t1B014D5332A17B2F12B7B9B981B61A08AB8FDCF8 * L_8 = L_3;
		RuntimeObject* L_9 = ___platform0;
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_10 = V_0;
		NullCheck(L_10);
		RuntimeObject * L_11;
		L_11 = Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D(L_10, _stringLiteral1593F0BA9565D41C31360961E958F85BB60F0C8B, /*hidden argument*/Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D_RuntimeMethod_var);
		NullCheck(L_9);
		OSPermissionState_tCBAFAF68101221797E344D4C443CBCD374C4B754 * L_12;
		L_12 = InterfaceFuncInvoker1< OSPermissionState_tCBAFAF68101221797E344D4C443CBCD374C4B754 *, RuntimeObject * >::Invoke(42 /* OSPermissionState IOneSignalPlatform::ParseOSPermissionState(System.Object) */, IOneSignalPlatform_t161D92077EBE8503720EE7A41E171D69406AAF68_il2cpp_TypeInfo_var, L_9, L_11);
		NullCheck(L_8);
		((OSStateChanges_1_t888AE05C74699C24C20A082A169751FE9EC83345 *)L_8)->set_from_1(L_12);
		// return permissionStateChanges;
		return L_8;
	}
}
// OSSubscriptionStateChanges OneSignalPlatformHelper::ParseOSSubscriptionStateChanges(IOneSignalPlatform,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OSSubscriptionStateChanges_t80801EC51BCF40EDC399FB2C2658111539658213 * OneSignalPlatformHelper_ParseOSSubscriptionStateChanges_m8DDBF9C624EC0F885079D9DF75D84B6D6C8DFB9C (RuntimeObject* ___platform0, String_t* ___stateChangesJSONString1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IOneSignalPlatform_t161D92077EBE8503720EE7A41E171D69406AAF68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OSSubscriptionStateChanges_t80801EC51BCF40EDC399FB2C2658111539658213_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1593F0BA9565D41C31360961E958F85BB60F0C8B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA4419EF51FB63A77978E414E01AC1C9DCF20AA99);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * V_0 = NULL;
	{
		// var stateChangesJson = Json.Deserialize(stateChangesJSONString) as Dictionary<string, object>;
		String_t* L_0 = ___stateChangesJSONString1;
		RuntimeObject * L_1;
		L_1 = Json_Deserialize_m4F6ECB958C77AF596B8666DDF7B41BAF2F0FCE10(L_0, /*hidden argument*/NULL);
		V_0 = ((Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *)IsInstClass((RuntimeObject*)L_1, Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_il2cpp_TypeInfo_var));
		// var permissionStateChanges = new OSSubscriptionStateChanges();
		OSSubscriptionStateChanges_t80801EC51BCF40EDC399FB2C2658111539658213 * L_2 = (OSSubscriptionStateChanges_t80801EC51BCF40EDC399FB2C2658111539658213 *)il2cpp_codegen_object_new(OSSubscriptionStateChanges_t80801EC51BCF40EDC399FB2C2658111539658213_il2cpp_TypeInfo_var);
		OSSubscriptionStateChanges__ctor_mFAB047B779BEA67235CDCB81D82C40541EAE4B3D(L_2, /*hidden argument*/NULL);
		// permissionStateChanges.to = platform.ParseOSSubscriptionState(stateChangesJson["to"]);
		OSSubscriptionStateChanges_t80801EC51BCF40EDC399FB2C2658111539658213 * L_3 = L_2;
		RuntimeObject* L_4 = ___platform0;
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_5 = V_0;
		NullCheck(L_5);
		RuntimeObject * L_6;
		L_6 = Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D(L_5, _stringLiteralA4419EF51FB63A77978E414E01AC1C9DCF20AA99, /*hidden argument*/Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D_RuntimeMethod_var);
		NullCheck(L_4);
		OSSubscriptionState_t5D2F2C11D6193A8FAE88B9785FED7355C3CAB1D7 * L_7;
		L_7 = InterfaceFuncInvoker1< OSSubscriptionState_t5D2F2C11D6193A8FAE88B9785FED7355C3CAB1D7 *, RuntimeObject * >::Invoke(43 /* OSSubscriptionState IOneSignalPlatform::ParseOSSubscriptionState(System.Object) */, IOneSignalPlatform_t161D92077EBE8503720EE7A41E171D69406AAF68_il2cpp_TypeInfo_var, L_4, L_6);
		NullCheck(L_3);
		((OSStateChanges_1_tDE1C321C28B88403CFDCC441FB2913F2BC5F45A3 *)L_3)->set_to_0(L_7);
		// permissionStateChanges.from = platform.ParseOSSubscriptionState(stateChangesJson["from"]);
		OSSubscriptionStateChanges_t80801EC51BCF40EDC399FB2C2658111539658213 * L_8 = L_3;
		RuntimeObject* L_9 = ___platform0;
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_10 = V_0;
		NullCheck(L_10);
		RuntimeObject * L_11;
		L_11 = Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D(L_10, _stringLiteral1593F0BA9565D41C31360961E958F85BB60F0C8B, /*hidden argument*/Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D_RuntimeMethod_var);
		NullCheck(L_9);
		OSSubscriptionState_t5D2F2C11D6193A8FAE88B9785FED7355C3CAB1D7 * L_12;
		L_12 = InterfaceFuncInvoker1< OSSubscriptionState_t5D2F2C11D6193A8FAE88B9785FED7355C3CAB1D7 *, RuntimeObject * >::Invoke(43 /* OSSubscriptionState IOneSignalPlatform::ParseOSSubscriptionState(System.Object) */, IOneSignalPlatform_t161D92077EBE8503720EE7A41E171D69406AAF68_il2cpp_TypeInfo_var, L_9, L_11);
		NullCheck(L_8);
		((OSStateChanges_1_tDE1C321C28B88403CFDCC441FB2913F2BC5F45A3 *)L_8)->set_from_1(L_12);
		// return permissionStateChanges;
		return L_8;
	}
}
// OSEmailSubscriptionStateChanges OneSignalPlatformHelper::ParseOSEmailSubscriptionStateChanges(IOneSignalPlatform,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OSEmailSubscriptionStateChanges_tCEE883A6FE7F1AAAC113C9D9E6135CEDAE1ABC6A * OneSignalPlatformHelper_ParseOSEmailSubscriptionStateChanges_mEE332D8C4B1EB9AA08677B2C7EAA40449DF1C73E (RuntimeObject* ___platform0, String_t* ___stateChangesJSONString1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IOneSignalPlatform_t161D92077EBE8503720EE7A41E171D69406AAF68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OSEmailSubscriptionStateChanges_tCEE883A6FE7F1AAAC113C9D9E6135CEDAE1ABC6A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1593F0BA9565D41C31360961E958F85BB60F0C8B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA4419EF51FB63A77978E414E01AC1C9DCF20AA99);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * V_0 = NULL;
	{
		// var stateChangesJson = Json.Deserialize(stateChangesJSONString) as Dictionary<string, object>;
		String_t* L_0 = ___stateChangesJSONString1;
		RuntimeObject * L_1;
		L_1 = Json_Deserialize_m4F6ECB958C77AF596B8666DDF7B41BAF2F0FCE10(L_0, /*hidden argument*/NULL);
		V_0 = ((Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *)IsInstClass((RuntimeObject*)L_1, Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_il2cpp_TypeInfo_var));
		// var emailStateChanges = new OSEmailSubscriptionStateChanges();
		OSEmailSubscriptionStateChanges_tCEE883A6FE7F1AAAC113C9D9E6135CEDAE1ABC6A * L_2 = (OSEmailSubscriptionStateChanges_tCEE883A6FE7F1AAAC113C9D9E6135CEDAE1ABC6A *)il2cpp_codegen_object_new(OSEmailSubscriptionStateChanges_tCEE883A6FE7F1AAAC113C9D9E6135CEDAE1ABC6A_il2cpp_TypeInfo_var);
		OSEmailSubscriptionStateChanges__ctor_m5C8A24EDD86F6E9459CEEFFD345E0C3B9F101043(L_2, /*hidden argument*/NULL);
		// emailStateChanges.to = platform.ParseOSEmailSubscriptionState(stateChangesJson["to"]);
		OSEmailSubscriptionStateChanges_tCEE883A6FE7F1AAAC113C9D9E6135CEDAE1ABC6A * L_3 = L_2;
		RuntimeObject* L_4 = ___platform0;
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_5 = V_0;
		NullCheck(L_5);
		RuntimeObject * L_6;
		L_6 = Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D(L_5, _stringLiteralA4419EF51FB63A77978E414E01AC1C9DCF20AA99, /*hidden argument*/Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D_RuntimeMethod_var);
		NullCheck(L_4);
		OSEmailSubscriptionState_tF6350D8DFFE2530E089402386E40677052DE2B6F * L_7;
		L_7 = InterfaceFuncInvoker1< OSEmailSubscriptionState_tF6350D8DFFE2530E089402386E40677052DE2B6F *, RuntimeObject * >::Invoke(44 /* OSEmailSubscriptionState IOneSignalPlatform::ParseOSEmailSubscriptionState(System.Object) */, IOneSignalPlatform_t161D92077EBE8503720EE7A41E171D69406AAF68_il2cpp_TypeInfo_var, L_4, L_6);
		NullCheck(L_3);
		((OSStateChanges_1_tF6D22E1814993B2CC13952337B9CDD4434573527 *)L_3)->set_to_0(L_7);
		// emailStateChanges.from = platform.ParseOSEmailSubscriptionState(stateChangesJson["from"]);
		OSEmailSubscriptionStateChanges_tCEE883A6FE7F1AAAC113C9D9E6135CEDAE1ABC6A * L_8 = L_3;
		RuntimeObject* L_9 = ___platform0;
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_10 = V_0;
		NullCheck(L_10);
		RuntimeObject * L_11;
		L_11 = Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D(L_10, _stringLiteral1593F0BA9565D41C31360961E958F85BB60F0C8B, /*hidden argument*/Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D_RuntimeMethod_var);
		NullCheck(L_9);
		OSEmailSubscriptionState_tF6350D8DFFE2530E089402386E40677052DE2B6F * L_12;
		L_12 = InterfaceFuncInvoker1< OSEmailSubscriptionState_tF6350D8DFFE2530E089402386E40677052DE2B6F *, RuntimeObject * >::Invoke(44 /* OSEmailSubscriptionState IOneSignalPlatform::ParseOSEmailSubscriptionState(System.Object) */, IOneSignalPlatform_t161D92077EBE8503720EE7A41E171D69406AAF68_il2cpp_TypeInfo_var, L_9, L_11);
		NullCheck(L_8);
		((OSStateChanges_1_tF6D22E1814993B2CC13952337B9CDD4434573527 *)L_8)->set_from_1(L_12);
		// return emailStateChanges;
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
// OneSignalSettings OneSignalSettings::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OneSignalSettings_t6B52AD1BB70C27A333C9FE47B84C9C93FE594CCF * OneSignalSettings_get_Instance_mDCEA4F3B9EBB5CD5F3F11C3634CA5B91FFFA1DFB (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OneSignalSettings_t6B52AD1BB70C27A333C9FE47B84C9C93FE594CCF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Resources_Load_TisOneSignalSettings_t6B52AD1BB70C27A333C9FE47B84C9C93FE594CCF_m19330665DFAC033277FB62F5B17BD204752E5A12_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptableObject_CreateInstance_TisOneSignalSettings_t6B52AD1BB70C27A333C9FE47B84C9C93FE594CCF_m1E1C422AC5E73CAFFCEB43C3DDC9451A7A135B7D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBB22FF41C87BD3A9161757A1915692E00F3487A4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (s_Instance == null)
		IL2CPP_RUNTIME_CLASS_INIT(OneSignalSettings_t6B52AD1BB70C27A333C9FE47B84C9C93FE594CCF_il2cpp_TypeInfo_var);
		OneSignalSettings_t6B52AD1BB70C27A333C9FE47B84C9C93FE594CCF * L_0 = ((OneSignalSettings_t6B52AD1BB70C27A333C9FE47B84C9C93FE594CCF_StaticFields*)il2cpp_codegen_static_fields_for(OneSignalSettings_t6B52AD1BB70C27A333C9FE47B84C9C93FE594CCF_il2cpp_TypeInfo_var))->get_s_Instance_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_003d;
		}
	}
	{
		// s_Instance = Resources.Load<OneSignalSettings>(nameof(OneSignalSettings));
		OneSignalSettings_t6B52AD1BB70C27A333C9FE47B84C9C93FE594CCF * L_2;
		L_2 = Resources_Load_TisOneSignalSettings_t6B52AD1BB70C27A333C9FE47B84C9C93FE594CCF_m19330665DFAC033277FB62F5B17BD204752E5A12(_stringLiteralBB22FF41C87BD3A9161757A1915692E00F3487A4, /*hidden argument*/Resources_Load_TisOneSignalSettings_t6B52AD1BB70C27A333C9FE47B84C9C93FE594CCF_m19330665DFAC033277FB62F5B17BD204752E5A12_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(OneSignalSettings_t6B52AD1BB70C27A333C9FE47B84C9C93FE594CCF_il2cpp_TypeInfo_var);
		((OneSignalSettings_t6B52AD1BB70C27A333C9FE47B84C9C93FE594CCF_StaticFields*)il2cpp_codegen_static_fields_for(OneSignalSettings_t6B52AD1BB70C27A333C9FE47B84C9C93FE594CCF_il2cpp_TypeInfo_var))->set_s_Instance_4(L_2);
		// if (s_Instance == null)
		OneSignalSettings_t6B52AD1BB70C27A333C9FE47B84C9C93FE594CCF * L_3 = ((OneSignalSettings_t6B52AD1BB70C27A333C9FE47B84C9C93FE594CCF_StaticFields*)il2cpp_codegen_static_fields_for(OneSignalSettings_t6B52AD1BB70C27A333C9FE47B84C9C93FE594CCF_il2cpp_TypeInfo_var))->get_s_Instance_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_3, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_003d;
		}
	}
	{
		// s_Instance = CreateInstance<OneSignalSettings>();
		OneSignalSettings_t6B52AD1BB70C27A333C9FE47B84C9C93FE594CCF * L_5;
		L_5 = ScriptableObject_CreateInstance_TisOneSignalSettings_t6B52AD1BB70C27A333C9FE47B84C9C93FE594CCF_m1E1C422AC5E73CAFFCEB43C3DDC9451A7A135B7D(/*hidden argument*/ScriptableObject_CreateInstance_TisOneSignalSettings_t6B52AD1BB70C27A333C9FE47B84C9C93FE594CCF_m1E1C422AC5E73CAFFCEB43C3DDC9451A7A135B7D_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(OneSignalSettings_t6B52AD1BB70C27A333C9FE47B84C9C93FE594CCF_il2cpp_TypeInfo_var);
		((OneSignalSettings_t6B52AD1BB70C27A333C9FE47B84C9C93FE594CCF_StaticFields*)il2cpp_codegen_static_fields_for(OneSignalSettings_t6B52AD1BB70C27A333C9FE47B84C9C93FE594CCF_il2cpp_TypeInfo_var))->set_s_Instance_4(L_5);
		// s_Instance.SaveToAssetDatabase();
		OneSignalSettings_t6B52AD1BB70C27A333C9FE47B84C9C93FE594CCF * L_6 = ((OneSignalSettings_t6B52AD1BB70C27A333C9FE47B84C9C93FE594CCF_StaticFields*)il2cpp_codegen_static_fields_for(OneSignalSettings_t6B52AD1BB70C27A333C9FE47B84C9C93FE594CCF_il2cpp_TypeInfo_var))->get_s_Instance_4();
		NullCheck(L_6);
		OneSignalSettings_SaveToAssetDatabase_mB01414C7361153704EE1300A467BC2CD7E05FA8C(L_6, /*hidden argument*/NULL);
	}

IL_003d:
	{
		// return s_Instance;
		IL2CPP_RUNTIME_CLASS_INIT(OneSignalSettings_t6B52AD1BB70C27A333C9FE47B84C9C93FE594CCF_il2cpp_TypeInfo_var);
		OneSignalSettings_t6B52AD1BB70C27A333C9FE47B84C9C93FE594CCF * L_7 = ((OneSignalSettings_t6B52AD1BB70C27A333C9FE47B84C9C93FE594CCF_StaticFields*)il2cpp_codegen_static_fields_for(OneSignalSettings_t6B52AD1BB70C27A333C9FE47B84C9C93FE594CCF_il2cpp_TypeInfo_var))->get_s_Instance_4();
		return L_7;
	}
}
// System.Void OneSignalSettings::SaveToAssetDatabase()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneSignalSettings_SaveToAssetDatabase_mB01414C7361153704EE1300A467BC2CD7E05FA8C (OneSignalSettings_t6B52AD1BB70C27A333C9FE47B84C9C93FE594CCF * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void OneSignalSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneSignalSettings__ctor_mB82C7D67D8B3CDE25AAB50367F7E163E8670531D (OneSignalSettings_t6B52AD1BB70C27A333C9FE47B84C9C93FE594CCF * __this, const RuntimeMethod* method)
{
	{
		ScriptableObject__ctor_m8DAE6CDCFA34E16F2543B02CC3669669FF203063(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void OneSignalSettings::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneSignalSettings__cctor_m8923DC1A4DC9A307004299602A252EA66081D7B3 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OneSignalSettings_t6B52AD1BB70C27A333C9FE47B84C9C93FE594CCF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral51311F107A22ACB2B9982782F66881085ABC044E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral78E86F042D371FD16F0D696EF476DAAA4953E187);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral91F7E6F20B6646D90CD184646336FEFB5B3FCC2F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDC648DA3297D06299B89CFD936903E43D7C25B32);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static readonly string SettingsLocation = Path.Combine("Assets", "Plugins", "OneSignal", "Resources");
		IL2CPP_RUNTIME_CLASS_INIT(Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
		String_t* L_0;
		L_0 = Path_Combine_mDEAC65F07A793450CFB9D0086463CAEBD28D098E(_stringLiteral51311F107A22ACB2B9982782F66881085ABC044E, _stringLiteralDC648DA3297D06299B89CFD936903E43D7C25B32, _stringLiteral91F7E6F20B6646D90CD184646336FEFB5B3FCC2F, _stringLiteral78E86F042D371FD16F0D696EF476DAAA4953E187, /*hidden argument*/NULL);
		((OneSignalSettings_t6B52AD1BB70C27A333C9FE47B84C9C93FE594CCF_StaticFields*)il2cpp_codegen_static_fields_for(OneSignalSettings_t6B52AD1BB70C27A333C9FE47B84C9C93FE594CCF_il2cpp_TypeInfo_var))->set_SettingsLocation_6(L_0);
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
// System.String OneSignalUnityUtils::GetNewGuid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* OneSignalUnityUtils_GetNewGuid_mE98FB8FC6067F7DA8AF1C46C9DA028581C037814 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Guid_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Guid_t  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return System.Guid.NewGuid().ToString();
		IL2CPP_RUNTIME_CLASS_INIT(Guid_t_il2cpp_TypeInfo_var);
		Guid_t  L_0;
		L_0 = Guid_NewGuid_m5BD19325820690ED6ECA31D67BC2CD474DC4FDB0(/*hidden argument*/NULL);
		V_0 = L_0;
		String_t* L_1;
		L_1 = Guid_ToString_mA3AB7742FB0E04808F580868E82BDEB93187FB75((Guid_t *)(&V_0), /*hidden argument*/NULL);
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
// System.Boolean Json/Parser::IsWordBreak(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Parser_IsWordBreak_mC565924147B4E1D11FB080EDD82622BDF66C53AF (Il2CppChar ___c0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral84C1E07F84B6E7BDCC02A904AFEC3BBD2CAE6EAA);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Char.IsWhiteSpace(c) || WORD_BREAK.IndexOf(c) != -1;
		Il2CppChar L_0 = ___c0;
		IL2CPP_RUNTIME_CLASS_INIT(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Char_IsWhiteSpace_m99A5E1BE1EB9F17EA530A67A607DA8C260BCBF99(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_001a;
		}
	}
	{
		Il2CppChar L_2 = ___c0;
		NullCheck(_stringLiteral84C1E07F84B6E7BDCC02A904AFEC3BBD2CAE6EAA);
		int32_t L_3;
		L_3 = String_IndexOf_mEE2D2F738175E3FF05580366D6226DBD673CA2BE(_stringLiteral84C1E07F84B6E7BDCC02A904AFEC3BBD2CAE6EAA, L_2, /*hidden argument*/NULL);
		return (bool)((((int32_t)((((int32_t)L_3) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_001a:
	{
		return (bool)1;
	}
}
// System.Void Json/Parser::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Parser__ctor_m0D974AD82CE8E7310882721F293E4972E5CD8090 (Parser_t2D45D1FA01DEBA1E03BB55A0AF0A7453A771EF00 * __this, String_t* ___jsonString0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringReader_t74E352C280EAC22C878867444978741F19E1F895_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Parser(string jsonString)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// json = new StringReader(jsonString);
		String_t* L_0 = ___jsonString0;
		StringReader_t74E352C280EAC22C878867444978741F19E1F895 * L_1 = (StringReader_t74E352C280EAC22C878867444978741F19E1F895 *)il2cpp_codegen_object_new(StringReader_t74E352C280EAC22C878867444978741F19E1F895_il2cpp_TypeInfo_var);
		StringReader__ctor_m7CC29D8E83F4813395ACA9CF4F756B1BCE09A7EE(L_1, L_0, /*hidden argument*/NULL);
		__this->set_json_0(L_1);
		// }
		return;
	}
}
// System.Object Json/Parser::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Parser_Parse_m59C9400B0758A82184794D7A39B43372E3AC4C32 (String_t* ___jsonString0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Parser_t2D45D1FA01DEBA1E03BB55A0AF0A7453A771EF00_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Parser_t2D45D1FA01DEBA1E03BB55A0AF0A7453A771EF00 * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// using (var instance = new Parser(jsonString))
		String_t* L_0 = ___jsonString0;
		Parser_t2D45D1FA01DEBA1E03BB55A0AF0A7453A771EF00 * L_1 = (Parser_t2D45D1FA01DEBA1E03BB55A0AF0A7453A771EF00 *)il2cpp_codegen_object_new(Parser_t2D45D1FA01DEBA1E03BB55A0AF0A7453A771EF00_il2cpp_TypeInfo_var);
		Parser__ctor_m0D974AD82CE8E7310882721F293E4972E5CD8090(L_1, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_0007:
	try
	{// begin try (depth: 1)
		// return instance.ParseValue();
		Parser_t2D45D1FA01DEBA1E03BB55A0AF0A7453A771EF00 * L_2 = V_0;
		NullCheck(L_2);
		RuntimeObject * L_3;
		L_3 = Parser_ParseValue_mAE33A6DD3A48C5E0FE040821ECBFD5AECF0D86B1(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		IL2CPP_LEAVE(0x1A, FINALLY_0010);
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0010;
	}

FINALLY_0010:
	{// begin finally (depth: 1)
		{
			Parser_t2D45D1FA01DEBA1E03BB55A0AF0A7453A771EF00 * L_4 = V_0;
			if (!L_4)
			{
				goto IL_0019;
			}
		}

IL_0013:
		{
			Parser_t2D45D1FA01DEBA1E03BB55A0AF0A7453A771EF00 * L_5 = V_0;
			NullCheck(L_5);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_5);
		}

IL_0019:
		{
			IL2CPP_END_FINALLY(16)
		}
	}// end finally (depth: 1)
	IL2CPP_CLEANUP(16)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x1A, IL_001a)
	}

IL_001a:
	{
		// }
		RuntimeObject * L_6 = V_1;
		return L_6;
	}
}
// System.Void Json/Parser::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Parser_Dispose_mD588BA3ED107251119D509FE3372D1136DB5B440 (Parser_t2D45D1FA01DEBA1E03BB55A0AF0A7453A771EF00 * __this, const RuntimeMethod* method)
{
	{
		// json.Dispose();
		StringReader_t74E352C280EAC22C878867444978741F19E1F895 * L_0 = __this->get_json_0();
		NullCheck(L_0);
		TextReader_Dispose_mDF1DCFD8FBE94A453EB2350DB7173027420BA5F8(L_0, /*hidden argument*/NULL);
		// json = null;
		__this->set_json_0((StringReader_t74E352C280EAC22C878867444978741F19E1F895 *)NULL);
		// }
		return;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.Object> Json/Parser::ParseObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * Parser_ParseObject_mBE726F3D8ADB6336205E86F5EEE8BDA4EE03D1EB (Parser_t2D45D1FA01DEBA1E03BB55A0AF0A7453A771EF00 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mCD0C2F0325B7677B9BC340A60AA3FB9C7A88FF63_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m012F321188703DCCB5C4F99C5A5AA2FA31A98144_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * V_0 = NULL;
	String_t* V_1 = NULL;
	int32_t V_2 = 0;
	{
		// Dictionary<string, object> table = new Dictionary<string, object>();
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_0 = (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *)il2cpp_codegen_object_new(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mCD0C2F0325B7677B9BC340A60AA3FB9C7A88FF63(L_0, /*hidden argument*/Dictionary_2__ctor_mCD0C2F0325B7677B9BC340A60AA3FB9C7A88FF63_RuntimeMethod_var);
		V_0 = L_0;
		// json.Read();
		StringReader_t74E352C280EAC22C878867444978741F19E1F895 * L_1 = __this->get_json_0();
		NullCheck(L_1);
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.IO.TextReader::Read() */, L_1);
	}

IL_0012:
	{
		// switch (NextToken)
		int32_t L_3;
		L_3 = Parser_get_NextToken_m934F15CF28460A3EB6DA4AF7944C7A0B38408F11(__this, /*hidden argument*/NULL);
		V_2 = L_3;
		int32_t L_4 = V_2;
		if (!L_4)
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)2)))
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)6)))
		{
			goto IL_0012;
		}
	}
	{
		goto IL_002a;
	}

IL_0026:
	{
		// return null;
		return (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *)NULL;
	}

IL_0028:
	{
		// return table;
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_7 = V_0;
		return L_7;
	}

IL_002a:
	{
		// string name = ParseString();
		String_t* L_8;
		L_8 = Parser_ParseString_mBE6784E1D3B5C0C99A9DC467C0813CC99D07665E(__this, /*hidden argument*/NULL);
		V_1 = L_8;
		// if (name == null)
		String_t* L_9 = V_1;
		if (L_9)
		{
			goto IL_0036;
		}
	}
	{
		// return null;
		return (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *)NULL;
	}

IL_0036:
	{
		// if (NextToken != TOKEN.COLON)
		int32_t L_10;
		L_10 = Parser_get_NextToken_m934F15CF28460A3EB6DA4AF7944C7A0B38408F11(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_10) == ((int32_t)5)))
		{
			goto IL_0041;
		}
	}
	{
		// return null;
		return (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *)NULL;
	}

IL_0041:
	{
		// json.Read();
		StringReader_t74E352C280EAC22C878867444978741F19E1F895 * L_11 = __this->get_json_0();
		NullCheck(L_11);
		int32_t L_12;
		L_12 = VirtualFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.IO.TextReader::Read() */, L_11);
		// table[name] = ParseValue();
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_13 = V_0;
		String_t* L_14 = V_1;
		RuntimeObject * L_15;
		L_15 = Parser_ParseValue_mAE33A6DD3A48C5E0FE040821ECBFD5AECF0D86B1(__this, /*hidden argument*/NULL);
		NullCheck(L_13);
		Dictionary_2_set_Item_m012F321188703DCCB5C4F99C5A5AA2FA31A98144(L_13, L_14, L_15, /*hidden argument*/Dictionary_2_set_Item_m012F321188703DCCB5C4F99C5A5AA2FA31A98144_RuntimeMethod_var);
		// break;
		goto IL_0012;
	}
}
// System.Collections.Generic.List`1<System.Object> Json/Parser::ParseArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * Parser_ParseArray_m16D44CA2E64AE8965E4ED1DBCE459E3997B06F20 (Parser_t2D45D1FA01DEBA1E03BB55A0AF0A7453A771EF00 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF15250BF947CA27BE9A23C08BAC6DB6F180B0EDD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	RuntimeObject * V_3 = NULL;
	{
		// List<object> array = new List<object>();
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_0 = (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)il2cpp_codegen_object_new(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_il2cpp_TypeInfo_var);
		List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B(L_0, /*hidden argument*/List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_RuntimeMethod_var);
		V_0 = L_0;
		// json.Read();
		StringReader_t74E352C280EAC22C878867444978741F19E1F895 * L_1 = __this->get_json_0();
		NullCheck(L_1);
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.IO.TextReader::Read() */, L_1);
		// var parsing = true;
		V_1 = (bool)1;
		goto IL_003f;
	}

IL_0016:
	{
		// TOKEN nextToken = NextToken;
		int32_t L_3;
		L_3 = Parser_get_NextToken_m934F15CF28460A3EB6DA4AF7944C7A0B38408F11(__this, /*hidden argument*/NULL);
		V_2 = L_3;
		int32_t L_4 = V_2;
		if (!L_4)
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)4)))
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)6)))
		{
			goto IL_003f;
		}
	}
	{
		goto IL_0030;
	}

IL_002a:
	{
		// return null;
		return (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)NULL;
	}

IL_002c:
	{
		// parsing = false;
		V_1 = (bool)0;
		// break;
		goto IL_003f;
	}

IL_0030:
	{
		// object value = ParseByToken(nextToken);
		int32_t L_7 = V_2;
		RuntimeObject * L_8;
		L_8 = Parser_ParseByToken_mE3D63D087A28F7BC97785DD4DDF40FC2E4FEDD5C(__this, L_7, /*hidden argument*/NULL);
		V_3 = L_8;
		// array.Add(value);
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_9 = V_0;
		RuntimeObject * L_10 = V_3;
		NullCheck(L_9);
		List_1_Add_mF15250BF947CA27BE9A23C08BAC6DB6F180B0EDD(L_9, L_10, /*hidden argument*/List_1_Add_mF15250BF947CA27BE9A23C08BAC6DB6F180B0EDD_RuntimeMethod_var);
	}

IL_003f:
	{
		// while (parsing)
		bool L_11 = V_1;
		if (L_11)
		{
			goto IL_0016;
		}
	}
	{
		// return array;
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_12 = V_0;
		return L_12;
	}
}
// System.Object Json/Parser::ParseValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Parser_ParseValue_mAE33A6DD3A48C5E0FE040821ECBFD5AECF0D86B1 (Parser_t2D45D1FA01DEBA1E03BB55A0AF0A7453A771EF00 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// TOKEN nextToken = NextToken;
		int32_t L_0;
		L_0 = Parser_get_NextToken_m934F15CF28460A3EB6DA4AF7944C7A0B38408F11(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		// return ParseByToken(nextToken);
		int32_t L_1 = V_0;
		RuntimeObject * L_2;
		L_2 = Parser_ParseByToken_mE3D63D087A28F7BC97785DD4DDF40FC2E4FEDD5C(__this, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Object Json/Parser::ParseByToken(Json/Parser/TOKEN)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Parser_ParseByToken_mE3D63D087A28F7BC97785DD4DDF40FC2E4FEDD5C (Parser_t2D45D1FA01DEBA1E03BB55A0AF0A7453A771EF00 * __this, int32_t ___token0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___token0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)1)))
		{
			case 0:
			{
				goto IL_0044;
			}
			case 1:
			{
				goto IL_0062;
			}
			case 2:
			{
				goto IL_004b;
			}
			case 3:
			{
				goto IL_0062;
			}
			case 4:
			{
				goto IL_0062;
			}
			case 5:
			{
				goto IL_0062;
			}
			case 6:
			{
				goto IL_0036;
			}
			case 7:
			{
				goto IL_003d;
			}
			case 8:
			{
				goto IL_0052;
			}
			case 9:
			{
				goto IL_0059;
			}
			case 10:
			{
				goto IL_0060;
			}
		}
	}
	{
		goto IL_0062;
	}

IL_0036:
	{
		// return ParseString();
		String_t* L_1;
		L_1 = Parser_ParseString_mBE6784E1D3B5C0C99A9DC467C0813CC99D07665E(__this, /*hidden argument*/NULL);
		return L_1;
	}

IL_003d:
	{
		// return ParseNumber();
		RuntimeObject * L_2;
		L_2 = Parser_ParseNumber_m83A4A664E4C1C1279C792484EE6A76DC663DBEBE(__this, /*hidden argument*/NULL);
		return L_2;
	}

IL_0044:
	{
		// return ParseObject();
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_3;
		L_3 = Parser_ParseObject_mBE726F3D8ADB6336205E86F5EEE8BDA4EE03D1EB(__this, /*hidden argument*/NULL);
		return L_3;
	}

IL_004b:
	{
		// return ParseArray();
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_4;
		L_4 = Parser_ParseArray_m16D44CA2E64AE8965E4ED1DBCE459E3997B06F20(__this, /*hidden argument*/NULL);
		return L_4;
	}

IL_0052:
	{
		// return true;
		bool L_5 = ((bool)1);
		RuntimeObject * L_6 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}

IL_0059:
	{
		// return false;
		bool L_7 = ((bool)0);
		RuntimeObject * L_8 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_7);
		return L_8;
	}

IL_0060:
	{
		// return null;
		return NULL;
	}

IL_0062:
	{
		// return null;
		return NULL;
	}
}
// System.String Json/Parser::ParseString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Parser_ParseString_mBE6784E1D3B5C0C99A9DC467C0813CC99D07665E (Parser_t2D45D1FA01DEBA1E03BB55A0AF0A7453A771EF00 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	Il2CppChar V_1 = 0x0;
	bool V_2 = false;
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* V_3 = NULL;
	int32_t V_4 = 0;
	{
		// StringBuilder s = new StringBuilder();
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		// json.Read();
		StringReader_t74E352C280EAC22C878867444978741F19E1F895 * L_1 = __this->get_json_0();
		NullCheck(L_1);
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.IO.TextReader::Read() */, L_1);
		// bool parsing = true;
		V_2 = (bool)1;
		goto IL_013d;
	}

IL_0019:
	{
		// if (json.Peek() == -1)
		StringReader_t74E352C280EAC22C878867444978741F19E1F895 * L_3 = __this->get_json_0();
		NullCheck(L_3);
		int32_t L_4;
		L_4 = VirtualFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 System.IO.TextReader::Peek() */, L_3);
		if ((((int32_t)L_4) == ((int32_t)(-1))))
		{
			goto IL_0143;
		}
	}
	{
		// c = NextChar;
		Il2CppChar L_5;
		L_5 = Parser_get_NextChar_mB85A1AC0571ED1AD9552464133635AE07C0DCDD7(__this, /*hidden argument*/NULL);
		V_1 = L_5;
		Il2CppChar L_6 = V_1;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)34))))
		{
			goto IL_0040;
		}
	}
	{
		Il2CppChar L_7 = V_1;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)92))))
		{
			goto IL_0047;
		}
	}
	{
		goto IL_0135;
	}

IL_0040:
	{
		// parsing = false;
		V_2 = (bool)0;
		// break;
		goto IL_013d;
	}

IL_0047:
	{
		// if (json.Peek() == -1)
		StringReader_t74E352C280EAC22C878867444978741F19E1F895 * L_8 = __this->get_json_0();
		NullCheck(L_8);
		int32_t L_9;
		L_9 = VirtualFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 System.IO.TextReader::Peek() */, L_8);
		if ((!(((uint32_t)L_9) == ((uint32_t)(-1)))))
		{
			goto IL_005c;
		}
	}
	{
		// parsing = false;
		V_2 = (bool)0;
		// break;
		goto IL_013d;
	}

IL_005c:
	{
		// c = NextChar;
		Il2CppChar L_10;
		L_10 = Parser_get_NextChar_mB85A1AC0571ED1AD9552464133635AE07C0DCDD7(__this, /*hidden argument*/NULL);
		V_1 = L_10;
		Il2CppChar L_11 = V_1;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)92)))))
		{
			goto IL_007c;
		}
	}
	{
		Il2CppChar L_12 = V_1;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)34))))
		{
			goto IL_00b0;
		}
	}
	{
		Il2CppChar L_13 = V_1;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)47))))
		{
			goto IL_00b0;
		}
	}
	{
		Il2CppChar L_14 = V_1;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)92))))
		{
			goto IL_00b0;
		}
	}
	{
		goto IL_012b;
	}

IL_007c:
	{
		Il2CppChar L_15 = V_1;
		if ((!(((uint32_t)L_15) <= ((uint32_t)((int32_t)102)))))
		{
			goto IL_0090;
		}
	}
	{
		Il2CppChar L_16 = V_1;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)98))))
		{
			goto IL_00bd;
		}
	}
	{
		Il2CppChar L_17 = V_1;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)102))))
		{
			goto IL_00c7;
		}
	}
	{
		goto IL_012b;
	}

IL_0090:
	{
		Il2CppChar L_18 = V_1;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)110))))
		{
			goto IL_00d2;
		}
	}
	{
		Il2CppChar L_19 = V_1;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_19, (int32_t)((int32_t)114))))
		{
			case 0:
			{
				goto IL_00dd;
			}
			case 1:
			{
				goto IL_012b;
			}
			case 2:
			{
				goto IL_00e8;
			}
			case 3:
			{
				goto IL_00f3;
			}
		}
	}
	{
		goto IL_012b;
	}

IL_00b0:
	{
		// s.Append(c);
		StringBuilder_t * L_20 = V_0;
		Il2CppChar L_21 = V_1;
		NullCheck(L_20);
		StringBuilder_t * L_22;
		L_22 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_20, L_21, /*hidden argument*/NULL);
		// break;
		goto IL_013d;
	}

IL_00bd:
	{
		// s.Append('\b');
		StringBuilder_t * L_23 = V_0;
		NullCheck(L_23);
		StringBuilder_t * L_24;
		L_24 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_23, 8, /*hidden argument*/NULL);
		// break;
		goto IL_013d;
	}

IL_00c7:
	{
		// s.Append('\f');
		StringBuilder_t * L_25 = V_0;
		NullCheck(L_25);
		StringBuilder_t * L_26;
		L_26 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_25, ((int32_t)12), /*hidden argument*/NULL);
		// break;
		goto IL_013d;
	}

IL_00d2:
	{
		// s.Append('\n');
		StringBuilder_t * L_27 = V_0;
		NullCheck(L_27);
		StringBuilder_t * L_28;
		L_28 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_27, ((int32_t)10), /*hidden argument*/NULL);
		// break;
		goto IL_013d;
	}

IL_00dd:
	{
		// s.Append('\r');
		StringBuilder_t * L_29 = V_0;
		NullCheck(L_29);
		StringBuilder_t * L_30;
		L_30 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_29, ((int32_t)13), /*hidden argument*/NULL);
		// break;
		goto IL_013d;
	}

IL_00e8:
	{
		// s.Append('\t');
		StringBuilder_t * L_31 = V_0;
		NullCheck(L_31);
		StringBuilder_t * L_32;
		L_32 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_31, ((int32_t)9), /*hidden argument*/NULL);
		// break;
		goto IL_013d;
	}

IL_00f3:
	{
		// var hex = new char[4];
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_33 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)4);
		V_3 = L_33;
		// for (int i = 0; i < 4; i++)
		V_4 = 0;
		goto IL_010f;
	}

IL_00ff:
	{
		// hex[i] = NextChar;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_34 = V_3;
		int32_t L_35 = V_4;
		Il2CppChar L_36;
		L_36 = Parser_get_NextChar_mB85A1AC0571ED1AD9552464133635AE07C0DCDD7(__this, /*hidden argument*/NULL);
		NullCheck(L_34);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(L_35), (Il2CppChar)L_36);
		// for (int i = 0; i < 4; i++)
		int32_t L_37 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_37, (int32_t)1));
	}

IL_010f:
	{
		// for (int i = 0; i < 4; i++)
		int32_t L_38 = V_4;
		if ((((int32_t)L_38) < ((int32_t)4)))
		{
			goto IL_00ff;
		}
	}
	{
		// s.Append((char) Convert.ToInt32(new string(hex), 16));
		StringBuilder_t * L_39 = V_0;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_40 = V_3;
		String_t* L_41;
		L_41 = String_CreateString_mC7F57CE6ED768CF86591160424FE55D5CBA7C344(NULL, L_40, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		int32_t L_42;
		L_42 = Convert_ToInt32_m21526761291049AC762DEAEA073870C8A8583643(L_41, ((int32_t)16), /*hidden argument*/NULL);
		NullCheck(L_39);
		StringBuilder_t * L_43;
		L_43 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_39, ((int32_t)((uint16_t)L_42)), /*hidden argument*/NULL);
		// break;
		goto IL_013d;
	}

IL_012b:
	{
		// s.Append(c);
		StringBuilder_t * L_44 = V_0;
		Il2CppChar L_45 = V_1;
		NullCheck(L_44);
		StringBuilder_t * L_46;
		L_46 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_44, L_45, /*hidden argument*/NULL);
		// break;
		goto IL_013d;
	}

IL_0135:
	{
		// s.Append(c);
		StringBuilder_t * L_47 = V_0;
		Il2CppChar L_48 = V_1;
		NullCheck(L_47);
		StringBuilder_t * L_49;
		L_49 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_47, L_48, /*hidden argument*/NULL);
	}

IL_013d:
	{
		// while (parsing)
		bool L_50 = V_2;
		if (L_50)
		{
			goto IL_0019;
		}
	}

IL_0143:
	{
		// return s.ToString();
		StringBuilder_t * L_51 = V_0;
		NullCheck(L_51);
		String_t* L_52;
		L_52 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_51);
		return L_52;
	}
}
// System.Object Json/Parser::ParseNumber()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Parser_ParseNumber_m83A4A664E4C1C1279C792484EE6A76DC663DBEBE (Parser_t2D45D1FA01DEBA1E03BB55A0AF0A7453A771EF00 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	double V_1 = 0.0;
	int64_t V_2 = 0;
	{
		// string number = NextWord;
		String_t* L_0;
		L_0 = Parser_get_NextWord_mE9D819CD9304F00733AC020146515F035E2706E9(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		// if (number.IndexOf('.') == -1 && number.IndexOf('E') == -1 && number.IndexOf('e') == -1)
		String_t* L_1 = V_0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = String_IndexOf_mEE2D2F738175E3FF05580366D6226DBD673CA2BE(L_1, ((int32_t)46), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_0042;
		}
	}
	{
		String_t* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = String_IndexOf_mEE2D2F738175E3FF05580366D6226DBD673CA2BE(L_3, ((int32_t)69), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_4) == ((uint32_t)(-1)))))
		{
			goto IL_0042;
		}
	}
	{
		String_t* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = String_IndexOf_mEE2D2F738175E3FF05580366D6226DBD673CA2BE(L_5, ((int32_t)101), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_6) == ((uint32_t)(-1)))))
		{
			goto IL_0042;
		}
	}
	{
		// Int64.TryParse(number, System.Globalization.NumberStyles.Any,
		//     System.Globalization.CultureInfo.InvariantCulture, out parsedInt);
		String_t* L_7 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_8;
		L_8 = CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164(/*hidden argument*/NULL);
		bool L_9;
		L_9 = Int64_TryParse_m4A94015941D9BD9F9304D1FE14F17E84BFD3B69A(L_7, ((int32_t)511), L_8, (int64_t*)(&V_2), /*hidden argument*/NULL);
		// return parsedInt;
		int64_t L_10 = V_2;
		int64_t L_11 = L_10;
		RuntimeObject * L_12 = Box(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var, &L_11);
		return L_12;
	}

IL_0042:
	{
		// Double.TryParse(number, System.Globalization.NumberStyles.Any,
		//     System.Globalization.CultureInfo.InvariantCulture, out parsedDouble);
		String_t* L_13 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_14;
		L_14 = CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = Double_TryParse_mE740D7083AC52793A9634067C4F032570FFBF61E(L_13, ((int32_t)511), L_14, (double*)(&V_1), /*hidden argument*/NULL);
		// return parsedDouble;
		double L_16 = V_1;
		double L_17 = L_16;
		RuntimeObject * L_18 = Box(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var, &L_17);
		return L_18;
	}
}
// System.Void Json/Parser::EatWhitespace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Parser_EatWhitespace_mFD1B9AD7B2D5F43B8FBC1259F8619BEB268CC13D (Parser_t2D45D1FA01DEBA1E03BB55A0AF0A7453A771EF00 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		goto IL_001c;
	}

IL_0002:
	{
		// json.Read();
		StringReader_t74E352C280EAC22C878867444978741F19E1F895 * L_0 = __this->get_json_0();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.IO.TextReader::Read() */, L_0);
		// if (json.Peek() == -1)
		StringReader_t74E352C280EAC22C878867444978741F19E1F895 * L_2 = __this->get_json_0();
		NullCheck(L_2);
		int32_t L_3;
		L_3 = VirtualFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 System.IO.TextReader::Peek() */, L_2);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_0029;
		}
	}

IL_001c:
	{
		// while (Char.IsWhiteSpace(PeekChar))
		Il2CppChar L_4;
		L_4 = Parser_get_PeekChar_mFA891FD35F5C092EC8ECE479F5F7C777AB06C70D(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Char_IsWhiteSpace_m99A5E1BE1EB9F17EA530A67A607DA8C260BCBF99(L_4, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_0002;
		}
	}

IL_0029:
	{
		// }
		return;
	}
}
// System.Char Json/Parser::get_PeekChar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar Parser_get_PeekChar_mFA891FD35F5C092EC8ECE479F5F7C777AB06C70D (Parser_t2D45D1FA01DEBA1E03BB55A0AF0A7453A771EF00 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return Convert.ToChar(json.Peek()); }
		StringReader_t74E352C280EAC22C878867444978741F19E1F895 * L_0 = __this->get_json_0();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 System.IO.TextReader::Peek() */, L_0);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		Il2CppChar L_2;
		L_2 = Convert_ToChar_m84E3CF47987D8B6F2D889D957CBFB5FD55F3DAEC(L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Char Json/Parser::get_NextChar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar Parser_get_NextChar_mB85A1AC0571ED1AD9552464133635AE07C0DCDD7 (Parser_t2D45D1FA01DEBA1E03BB55A0AF0A7453A771EF00 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return Convert.ToChar(json.Read()); }
		StringReader_t74E352C280EAC22C878867444978741F19E1F895 * L_0 = __this->get_json_0();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.IO.TextReader::Read() */, L_0);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		Il2CppChar L_2;
		L_2 = Convert_ToChar_m84E3CF47987D8B6F2D889D957CBFB5FD55F3DAEC(L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.String Json/Parser::get_NextWord()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Parser_get_NextWord_mE9D819CD9304F00733AC020146515F035E2706E9 (Parser_t2D45D1FA01DEBA1E03BB55A0AF0A7453A771EF00 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	{
		// StringBuilder word = new StringBuilder();
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_0023;
	}

IL_0008:
	{
		// word.Append(NextChar);
		StringBuilder_t * L_1 = V_0;
		Il2CppChar L_2;
		L_2 = Parser_get_NextChar_mB85A1AC0571ED1AD9552464133635AE07C0DCDD7(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		StringBuilder_t * L_3;
		L_3 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_1, L_2, /*hidden argument*/NULL);
		// if (json.Peek() == -1)
		StringReader_t74E352C280EAC22C878867444978741F19E1F895 * L_4 = __this->get_json_0();
		NullCheck(L_4);
		int32_t L_5;
		L_5 = VirtualFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 System.IO.TextReader::Peek() */, L_4);
		if ((((int32_t)L_5) == ((int32_t)(-1))))
		{
			goto IL_0030;
		}
	}

IL_0023:
	{
		// while (!IsWordBreak(PeekChar))
		Il2CppChar L_6;
		L_6 = Parser_get_PeekChar_mFA891FD35F5C092EC8ECE479F5F7C777AB06C70D(__this, /*hidden argument*/NULL);
		bool L_7;
		L_7 = Parser_IsWordBreak_mC565924147B4E1D11FB080EDD82622BDF66C53AF(L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0008;
		}
	}

IL_0030:
	{
		// return word.ToString();
		StringBuilder_t * L_8 = V_0;
		NullCheck(L_8);
		String_t* L_9;
		L_9 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_8);
		return L_9;
	}
}
// Json/Parser/TOKEN Json/Parser::get_NextToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Parser_get_NextToken_m934F15CF28460A3EB6DA4AF7944C7A0B38408F11 (Parser_t2D45D1FA01DEBA1E03BB55A0AF0A7453A771EF00 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar V_0 = 0x0;
	String_t* V_1 = NULL;
	{
		// EatWhitespace();
		Parser_EatWhitespace_mFD1B9AD7B2D5F43B8FBC1259F8619BEB268CC13D(__this, /*hidden argument*/NULL);
		// if (json.Peek() == -1)
		StringReader_t74E352C280EAC22C878867444978741F19E1F895 * L_0 = __this->get_json_0();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 System.IO.TextReader::Peek() */, L_0);
		if ((!(((uint32_t)L_1) == ((uint32_t)(-1)))))
		{
			goto IL_0016;
		}
	}
	{
		// return TOKEN.NONE;
		return (int32_t)(0);
	}

IL_0016:
	{
		// switch (PeekChar)
		Il2CppChar L_2;
		L_2 = Parser_get_PeekChar_mFA891FD35F5C092EC8ECE479F5F7C777AB06C70D(__this, /*hidden argument*/NULL);
		V_0 = L_2;
		Il2CppChar L_3 = V_0;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)91)))))
		{
			goto IL_0096;
		}
	}
	{
		Il2CppChar L_4 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)((int32_t)34))))
		{
			case 0:
			{
				goto IL_00d5;
			}
			case 1:
			{
				goto IL_00db;
			}
			case 2:
			{
				goto IL_00db;
			}
			case 3:
			{
				goto IL_00db;
			}
			case 4:
			{
				goto IL_00db;
			}
			case 5:
			{
				goto IL_00db;
			}
			case 6:
			{
				goto IL_00db;
			}
			case 7:
			{
				goto IL_00db;
			}
			case 8:
			{
				goto IL_00db;
			}
			case 9:
			{
				goto IL_00db;
			}
			case 10:
			{
				goto IL_00c7;
			}
			case 11:
			{
				goto IL_00d9;
			}
			case 12:
			{
				goto IL_00db;
			}
			case 13:
			{
				goto IL_00db;
			}
			case 14:
			{
				goto IL_00d9;
			}
			case 15:
			{
				goto IL_00d9;
			}
			case 16:
			{
				goto IL_00d9;
			}
			case 17:
			{
				goto IL_00d9;
			}
			case 18:
			{
				goto IL_00d9;
			}
			case 19:
			{
				goto IL_00d9;
			}
			case 20:
			{
				goto IL_00d9;
			}
			case 21:
			{
				goto IL_00d9;
			}
			case 22:
			{
				goto IL_00d9;
			}
			case 23:
			{
				goto IL_00d9;
			}
			case 24:
			{
				goto IL_00d7;
			}
		}
	}
	{
		Il2CppChar L_5 = V_0;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)91))))
		{
			goto IL_00b7;
		}
	}
	{
		goto IL_00db;
	}

IL_0096:
	{
		Il2CppChar L_6 = V_0;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)93))))
		{
			goto IL_00b9;
		}
	}
	{
		Il2CppChar L_7 = V_0;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)123))))
		{
			goto IL_00a7;
		}
	}
	{
		Il2CppChar L_8 = V_0;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)125))))
		{
			goto IL_00a9;
		}
	}
	{
		goto IL_00db;
	}

IL_00a7:
	{
		// return TOKEN.CURLY_OPEN;
		return (int32_t)(1);
	}

IL_00a9:
	{
		// json.Read();
		StringReader_t74E352C280EAC22C878867444978741F19E1F895 * L_9 = __this->get_json_0();
		NullCheck(L_9);
		int32_t L_10;
		L_10 = VirtualFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.IO.TextReader::Read() */, L_9);
		// return TOKEN.CURLY_CLOSE;
		return (int32_t)(2);
	}

IL_00b7:
	{
		// return TOKEN.SQUARED_OPEN;
		return (int32_t)(3);
	}

IL_00b9:
	{
		// json.Read();
		StringReader_t74E352C280EAC22C878867444978741F19E1F895 * L_11 = __this->get_json_0();
		NullCheck(L_11);
		int32_t L_12;
		L_12 = VirtualFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.IO.TextReader::Read() */, L_11);
		// return TOKEN.SQUARED_CLOSE;
		return (int32_t)(4);
	}

IL_00c7:
	{
		// json.Read();
		StringReader_t74E352C280EAC22C878867444978741F19E1F895 * L_13 = __this->get_json_0();
		NullCheck(L_13);
		int32_t L_14;
		L_14 = VirtualFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.IO.TextReader::Read() */, L_13);
		// return TOKEN.COMMA;
		return (int32_t)(6);
	}

IL_00d5:
	{
		// return TOKEN.STRING;
		return (int32_t)(7);
	}

IL_00d7:
	{
		// return TOKEN.COLON;
		return (int32_t)(5);
	}

IL_00d9:
	{
		// return TOKEN.NUMBER;
		return (int32_t)(8);
	}

IL_00db:
	{
		// switch (NextWord)
		String_t* L_15;
		L_15 = Parser_get_NextWord_mE9D819CD9304F00733AC020146515F035E2706E9(__this, /*hidden argument*/NULL);
		V_1 = L_15;
		String_t* L_16 = V_1;
		if (!L_16)
		{
			goto IL_0117;
		}
	}
	{
		String_t* L_17 = V_1;
		bool L_18;
		L_18 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_17, _stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB, /*hidden argument*/NULL);
		if (L_18)
		{
			goto IL_010e;
		}
	}
	{
		String_t* L_19 = V_1;
		bool L_20;
		L_20 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_19, _stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2, /*hidden argument*/NULL);
		if (L_20)
		{
			goto IL_0111;
		}
	}
	{
		String_t* L_21 = V_1;
		bool L_22;
		L_22 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_21, _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174, /*hidden argument*/NULL);
		if (L_22)
		{
			goto IL_0114;
		}
	}
	{
		goto IL_0117;
	}

IL_010e:
	{
		// return TOKEN.FALSE;
		return (int32_t)(((int32_t)10));
	}

IL_0111:
	{
		// return TOKEN.TRUE;
		return (int32_t)(((int32_t)9));
	}

IL_0114:
	{
		// return TOKEN.NULL;
		return (int32_t)(((int32_t)11));
	}

IL_0117:
	{
		// return TOKEN.NONE;
		return (int32_t)(0);
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
// System.Void Json/Serializer::.ctor(System.Boolean,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer__ctor_mCA139ACEFEF3588F206BD98D01770AC34A6753DA (Serializer_tD60707A2A49A34FBCB719C8EFD602D15FF19C248 * __this, bool ___humanReadable0, int32_t ___indentSpaces1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Serializer(bool humanReadable, int indentSpaces)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// builder = new StringBuilder();
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9(L_0, /*hidden argument*/NULL);
		__this->set_builder_0(L_0);
		// this.humanReadable = humanReadable;
		bool L_1 = ___humanReadable0;
		__this->set_humanReadable_1(L_1);
		// this.indentSpaces = indentSpaces;
		int32_t L_2 = ___indentSpaces1;
		__this->set_indentSpaces_2(L_2);
		// indentLevel = 0;
		__this->set_indentLevel_3(0);
		// }
		return;
	}
}
// System.String Json/Serializer::MakeSerialization(System.Object,System.Boolean,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Serializer_MakeSerialization_m0E3856CB6C844529AA2871FDFB27D472C922E086 (RuntimeObject * ___obj0, bool ___humanReadable1, int32_t ___indentSpaces2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Serializer_tD60707A2A49A34FBCB719C8EFD602D15FF19C248_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var instance = new Serializer(humanReadable, indentSpaces);
		bool L_0 = ___humanReadable1;
		int32_t L_1 = ___indentSpaces2;
		Serializer_tD60707A2A49A34FBCB719C8EFD602D15FF19C248 * L_2 = (Serializer_tD60707A2A49A34FBCB719C8EFD602D15FF19C248 *)il2cpp_codegen_object_new(Serializer_tD60707A2A49A34FBCB719C8EFD602D15FF19C248_il2cpp_TypeInfo_var);
		Serializer__ctor_mCA139ACEFEF3588F206BD98D01770AC34A6753DA(L_2, L_0, L_1, /*hidden argument*/NULL);
		// instance.SerializeValue(obj);
		Serializer_tD60707A2A49A34FBCB719C8EFD602D15FF19C248 * L_3 = L_2;
		RuntimeObject * L_4 = ___obj0;
		NullCheck(L_3);
		Serializer_SerializeValue_mC2F24912AE676EBEBEDFA3275A9AF5E092AB7AE7(L_3, L_4, /*hidden argument*/NULL);
		// return instance.builder.ToString();
		NullCheck(L_3);
		StringBuilder_t * L_5 = L_3->get_builder_0();
		NullCheck(L_5);
		String_t* L_6;
		L_6 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_5);
		return L_6;
	}
}
// System.Void Json/Serializer::SerializeValue(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeValue_mC2F24912AE676EBEBEDFA3275A9AF5E092AB7AE7 (Serializer_tD60707A2A49A34FBCB719C8EFD602D15FF19C248 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	String_t* V_2 = NULL;
	StringBuilder_t * G_B7_0 = NULL;
	StringBuilder_t * G_B6_0 = NULL;
	String_t* G_B8_0 = NULL;
	StringBuilder_t * G_B8_1 = NULL;
	{
		// if (value == null)
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		// builder.Append("null");
		StringBuilder_t * L_1 = __this->get_builder_0();
		NullCheck(L_1);
		StringBuilder_t * L_2;
		L_2 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_1, _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0015:
	{
		// else if ((asStr = value as string) != null)
		RuntimeObject * L_3 = ___value0;
		String_t* L_4 = ((String_t*)IsInstSealed((RuntimeObject*)L_3, String_t_il2cpp_TypeInfo_var));
		V_2 = L_4;
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		// SerializeString(asStr);
		String_t* L_5 = V_2;
		Serializer_SerializeString_mB50720F378B286FB45C8915ABEA8915C56EAADEA(__this, L_5, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0027:
	{
		// else if (value is bool)
		RuntimeObject * L_6 = ___value0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_6, Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var)))
		{
			goto IL_0050;
		}
	}
	{
		// builder.Append((bool) value ? "true" : "false");
		StringBuilder_t * L_7 = __this->get_builder_0();
		RuntimeObject * L_8 = ___value0;
		G_B6_0 = L_7;
		if (((*(bool*)((bool*)UnBox(L_8, Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var)))))
		{
			G_B7_0 = L_7;
			goto IL_0044;
		}
	}
	{
		G_B8_0 = _stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB;
		G_B8_1 = G_B6_0;
		goto IL_0049;
	}

IL_0044:
	{
		G_B8_0 = _stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2;
		G_B8_1 = G_B7_0;
	}

IL_0049:
	{
		NullCheck(G_B8_1);
		StringBuilder_t * L_9;
		L_9 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(G_B8_1, G_B8_0, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0050:
	{
		// else if ((asList = value as IList) != null)
		RuntimeObject * L_10 = ___value0;
		RuntimeObject* L_11 = ((RuntimeObject*)IsInst((RuntimeObject*)L_10, IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var));
		V_0 = L_11;
		if (!L_11)
		{
			goto IL_0062;
		}
	}
	{
		// SerializeArray(asList);
		RuntimeObject* L_12 = V_0;
		Serializer_SerializeArray_mDB25878AB7D9B1C4ECC70EEBB4BB9DC39100BC64(__this, L_12, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0062:
	{
		// else if ((asDict = value as IDictionary) != null)
		RuntimeObject * L_13 = ___value0;
		RuntimeObject* L_14 = ((RuntimeObject*)IsInst((RuntimeObject*)L_13, IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A_il2cpp_TypeInfo_var));
		V_1 = L_14;
		if (!L_14)
		{
			goto IL_0074;
		}
	}
	{
		// SerializeObject(asDict);
		RuntimeObject* L_15 = V_1;
		Serializer_SerializeObject_m2C3E0353B344C3CD4D9EA9EEE7B17AC623A49EC2(__this, L_15, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0074:
	{
		// else if (value is char)
		RuntimeObject * L_16 = ___value0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_16, Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var)))
		{
			goto IL_008f;
		}
	}
	{
		// SerializeString(new string((char) value, 1));
		RuntimeObject * L_17 = ___value0;
		String_t* L_18;
		L_18 = String_CreateString_m4CBF2A74FB65655B0BB1452CA748E9CF78D974ED(NULL, ((*(Il2CppChar*)((Il2CppChar*)UnBox(L_17, Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var)))), 1, /*hidden argument*/NULL);
		Serializer_SerializeString_mB50720F378B286FB45C8915ABEA8915C56EAADEA(__this, L_18, /*hidden argument*/NULL);
		// }
		return;
	}

IL_008f:
	{
		// SerializeOther(value);
		RuntimeObject * L_19 = ___value0;
		Serializer_SerializeOther_m8A4C90F8CFCD6E67AB81C8EDB14C633B96DCBE54(__this, L_19, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Json/Serializer::AppendNewLineFunc()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_AppendNewLineFunc_m153B82BF1125A82F14857B3B2F45FF9A1E749D37 (Serializer_tD60707A2A49A34FBCB719C8EFD602D15FF19C248 * __this, const RuntimeMethod* method)
{
	{
		// builder.AppendLine();
		StringBuilder_t * L_0 = __this->get_builder_0();
		NullCheck(L_0);
		StringBuilder_t * L_1;
		L_1 = StringBuilder_AppendLine_mB5790BC98389118626505708AE683AE9257B91B2(L_0, /*hidden argument*/NULL);
		// builder.Append(' ', indentSpaces * indentLevel);
		StringBuilder_t * L_2 = __this->get_builder_0();
		int32_t L_3 = __this->get_indentSpaces_2();
		int32_t L_4 = __this->get_indentLevel_3();
		NullCheck(L_2);
		StringBuilder_t * L_5;
		L_5 = StringBuilder_Append_mB04B8FAD8E322DF8E69F3F85BCE4A8D041AE8BFB(L_2, ((int32_t)32), ((int32_t)il2cpp_codegen_multiply((int32_t)L_3, (int32_t)L_4)), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Json/Serializer::SerializeObject(System.Collections.IDictionary)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeObject_m2C3E0353B344C3CD4D9EA9EEE7B17AC623A49EC2 (Serializer_tD60707A2A49A34FBCB719C8EFD602D15FF19C248 * __this, RuntimeObject* ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_tC1E1DED86C0A66845675392606B302452210D5DA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_t47A618747A1BB2A868710316F7372094849163A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	RuntimeObject * V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// bool first = true;
		V_0 = (bool)1;
		// builder.Append('{');
		StringBuilder_t * L_0 = __this->get_builder_0();
		NullCheck(L_0);
		StringBuilder_t * L_1;
		L_1 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_0, ((int32_t)123), /*hidden argument*/NULL);
		// ++indentLevel;
		int32_t L_2 = __this->get_indentLevel_3();
		__this->set_indentLevel_3(((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1)));
		// foreach (object e in obj.Keys)
		RuntimeObject* L_3 = ___obj0;
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2 /* System.Collections.ICollection System.Collections.IDictionary::get_Keys() */, IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A_il2cpp_TypeInfo_var, L_3);
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t47A618747A1BB2A868710316F7372094849163A2_il2cpp_TypeInfo_var, L_4);
		V_1 = L_5;
	}

IL_002a:
	try
	{// begin try (depth: 1)
		{
			goto IL_00a1;
		}

IL_002c:
		{
			// foreach (object e in obj.Keys)
			RuntimeObject* L_6 = V_1;
			NullCheck(L_6);
			RuntimeObject * L_7;
			L_7 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_6);
			V_2 = L_7;
			// if (first)
			bool L_8 = V_0;
			if (!L_8)
			{
				goto IL_0046;
			}
		}

IL_0036:
		{
			// if (humanReadable) AppendNewLineFunc();
			bool L_9 = __this->get_humanReadable_1();
			if (!L_9)
			{
				goto IL_0062;
			}
		}

IL_003e:
		{
			// if (humanReadable) AppendNewLineFunc();
			Serializer_AppendNewLineFunc_m153B82BF1125A82F14857B3B2F45FF9A1E749D37(__this, /*hidden argument*/NULL);
			// }
			goto IL_0062;
		}

IL_0046:
		{
			// builder.Append(',');
			StringBuilder_t * L_10 = __this->get_builder_0();
			NullCheck(L_10);
			StringBuilder_t * L_11;
			L_11 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_10, ((int32_t)44), /*hidden argument*/NULL);
			// if (humanReadable) AppendNewLineFunc();
			bool L_12 = __this->get_humanReadable_1();
			if (!L_12)
			{
				goto IL_0062;
			}
		}

IL_005c:
		{
			// if (humanReadable) AppendNewLineFunc();
			Serializer_AppendNewLineFunc_m153B82BF1125A82F14857B3B2F45FF9A1E749D37(__this, /*hidden argument*/NULL);
		}

IL_0062:
		{
			// SerializeString(e.ToString());
			RuntimeObject * L_13 = V_2;
			NullCheck(L_13);
			String_t* L_14;
			L_14 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_13);
			Serializer_SerializeString_mB50720F378B286FB45C8915ABEA8915C56EAADEA(__this, L_14, /*hidden argument*/NULL);
			// builder.Append(':');
			StringBuilder_t * L_15 = __this->get_builder_0();
			NullCheck(L_15);
			StringBuilder_t * L_16;
			L_16 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_15, ((int32_t)58), /*hidden argument*/NULL);
			// if (humanReadable) builder.Append(' ');
			bool L_17 = __this->get_humanReadable_1();
			if (!L_17)
			{
				goto IL_0092;
			}
		}

IL_0084:
		{
			// if (humanReadable) builder.Append(' ');
			StringBuilder_t * L_18 = __this->get_builder_0();
			NullCheck(L_18);
			StringBuilder_t * L_19;
			L_19 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_18, ((int32_t)32), /*hidden argument*/NULL);
		}

IL_0092:
		{
			// SerializeValue(obj[e]);
			RuntimeObject* L_20 = ___obj0;
			RuntimeObject * L_21 = V_2;
			NullCheck(L_20);
			RuntimeObject * L_22;
			L_22 = InterfaceFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Object System.Collections.IDictionary::get_Item(System.Object) */, IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A_il2cpp_TypeInfo_var, L_20, L_21);
			Serializer_SerializeValue_mC2F24912AE676EBEBEDFA3275A9AF5E092AB7AE7(__this, L_22, /*hidden argument*/NULL);
			// first = false;
			V_0 = (bool)0;
		}

IL_00a1:
		{
			// foreach (object e in obj.Keys)
			RuntimeObject* L_23 = V_1;
			NullCheck(L_23);
			bool L_24;
			L_24 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_23);
			if (L_24)
			{
				goto IL_002c;
			}
		}

IL_00a9:
		{
			IL2CPP_LEAVE(0xBC, FINALLY_00ab);
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00ab;
	}

FINALLY_00ab:
	{// begin finally (depth: 1)
		{
			RuntimeObject* L_25 = V_1;
			V_3 = ((RuntimeObject*)IsInst((RuntimeObject*)L_25, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var));
			RuntimeObject* L_26 = V_3;
			if (!L_26)
			{
				goto IL_00bb;
			}
		}

IL_00b5:
		{
			RuntimeObject* L_27 = V_3;
			NullCheck(L_27);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_27);
		}

IL_00bb:
		{
			IL2CPP_END_FINALLY(171)
		}
	}// end finally (depth: 1)
	IL2CPP_CLEANUP(171)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xBC, IL_00bc)
	}

IL_00bc:
	{
		// --indentLevel;
		int32_t L_28 = __this->get_indentLevel_3();
		__this->set_indentLevel_3(((int32_t)il2cpp_codegen_subtract((int32_t)L_28, (int32_t)1)));
		// if (humanReadable && obj.Count > 0) AppendNewLineFunc();
		bool L_29 = __this->get_humanReadable_1();
		if (!L_29)
		{
			goto IL_00e1;
		}
	}
	{
		RuntimeObject* L_30 = ___obj0;
		NullCheck(L_30);
		int32_t L_31;
		L_31 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_tC1E1DED86C0A66845675392606B302452210D5DA_il2cpp_TypeInfo_var, L_30);
		if ((((int32_t)L_31) <= ((int32_t)0)))
		{
			goto IL_00e1;
		}
	}
	{
		// if (humanReadable && obj.Count > 0) AppendNewLineFunc();
		Serializer_AppendNewLineFunc_m153B82BF1125A82F14857B3B2F45FF9A1E749D37(__this, /*hidden argument*/NULL);
	}

IL_00e1:
	{
		// builder.Append('}');
		StringBuilder_t * L_32 = __this->get_builder_0();
		NullCheck(L_32);
		StringBuilder_t * L_33;
		L_33 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_32, ((int32_t)125), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Json/Serializer::SerializeArray(System.Collections.IList)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeArray_mDB25878AB7D9B1C4ECC70EEBB4BB9DC39100BC64 (Serializer_tD60707A2A49A34FBCB719C8EFD602D15FF19C248 * __this, RuntimeObject* ___anArray0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_tC1E1DED86C0A66845675392606B302452210D5DA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	RuntimeObject * V_2 = NULL;
	{
		// builder.Append('[');
		StringBuilder_t * L_0 = __this->get_builder_0();
		NullCheck(L_0);
		StringBuilder_t * L_1;
		L_1 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_0, ((int32_t)91), /*hidden argument*/NULL);
		// ++indentLevel;
		int32_t L_2 = __this->get_indentLevel_3();
		__this->set_indentLevel_3(((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1)));
		// bool first = true;
		V_0 = (bool)1;
		// for (int i = 0; i < anArray.Count; i++)
		V_1 = 0;
		goto IL_0066;
	}

IL_0022:
	{
		// object obj = anArray[i];
		RuntimeObject* L_3 = ___anArray0;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		RuntimeObject * L_5;
		L_5 = InterfaceFuncInvoker1< RuntimeObject *, int32_t >::Invoke(0 /* System.Object System.Collections.IList::get_Item(System.Int32) */, IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var, L_3, L_4);
		V_2 = L_5;
		// if (first)
		bool L_6 = V_0;
		if (!L_6)
		{
			goto IL_003d;
		}
	}
	{
		// if (humanReadable) AppendNewLineFunc();
		bool L_7 = __this->get_humanReadable_1();
		if (!L_7)
		{
			goto IL_0059;
		}
	}
	{
		// if (humanReadable) AppendNewLineFunc();
		Serializer_AppendNewLineFunc_m153B82BF1125A82F14857B3B2F45FF9A1E749D37(__this, /*hidden argument*/NULL);
		// }
		goto IL_0059;
	}

IL_003d:
	{
		// builder.Append(',');
		StringBuilder_t * L_8 = __this->get_builder_0();
		NullCheck(L_8);
		StringBuilder_t * L_9;
		L_9 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_8, ((int32_t)44), /*hidden argument*/NULL);
		// if (humanReadable) AppendNewLineFunc();
		bool L_10 = __this->get_humanReadable_1();
		if (!L_10)
		{
			goto IL_0059;
		}
	}
	{
		// if (humanReadable) AppendNewLineFunc();
		Serializer_AppendNewLineFunc_m153B82BF1125A82F14857B3B2F45FF9A1E749D37(__this, /*hidden argument*/NULL);
	}

IL_0059:
	{
		// SerializeValue(obj);
		RuntimeObject * L_11 = V_2;
		Serializer_SerializeValue_mC2F24912AE676EBEBEDFA3275A9AF5E092AB7AE7(__this, L_11, /*hidden argument*/NULL);
		// first = false;
		V_0 = (bool)0;
		// for (int i = 0; i < anArray.Count; i++)
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_0066:
	{
		// for (int i = 0; i < anArray.Count; i++)
		int32_t L_13 = V_1;
		RuntimeObject* L_14 = ___anArray0;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_tC1E1DED86C0A66845675392606B302452210D5DA_il2cpp_TypeInfo_var, L_14);
		if ((((int32_t)L_13) < ((int32_t)L_15)))
		{
			goto IL_0022;
		}
	}
	{
		// --indentLevel;
		int32_t L_16 = __this->get_indentLevel_3();
		__this->set_indentLevel_3(((int32_t)il2cpp_codegen_subtract((int32_t)L_16, (int32_t)1)));
		// if (humanReadable && anArray.Count > 0) AppendNewLineFunc();
		bool L_17 = __this->get_humanReadable_1();
		if (!L_17)
		{
			goto IL_0094;
		}
	}
	{
		RuntimeObject* L_18 = ___anArray0;
		NullCheck(L_18);
		int32_t L_19;
		L_19 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_tC1E1DED86C0A66845675392606B302452210D5DA_il2cpp_TypeInfo_var, L_18);
		if ((((int32_t)L_19) <= ((int32_t)0)))
		{
			goto IL_0094;
		}
	}
	{
		// if (humanReadable && anArray.Count > 0) AppendNewLineFunc();
		Serializer_AppendNewLineFunc_m153B82BF1125A82F14857B3B2F45FF9A1E749D37(__this, /*hidden argument*/NULL);
	}

IL_0094:
	{
		// builder.Append(']');
		StringBuilder_t * L_20 = __this->get_builder_0();
		NullCheck(L_20);
		StringBuilder_t * L_21;
		L_21 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_20, ((int32_t)93), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Json/Serializer::SerializeString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeString_mB50720F378B286FB45C8915ABEA8915C56EAADEA (Serializer_tD60707A2A49A34FBCB719C8EFD602D15FF19C248 * __this, String_t* ___str0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5962E944D7340CE47999BF097B4AFD70C1501FB9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral785F17F45C331C415D0A7458E6AAC36966399C51);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F3238CD8C342B06FB9AB185C610175C84625462);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral848E5ED630B3142F565DD995C6E8D30187ED33CD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA7C3FCA8C63E127B542B38A5CA5E3FEEDDD1B122);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB78F235D4291950A7D101307609C259F3E1F033F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA666908BB15F4E1D2649752EC5DCBD0D5C64699);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE727BF366E3CC855B808D806440542BF7152AF19);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF18840F490E42D3CE48CDCBF47229C1C240F8ABE);
		s_Il2CppMethodInitialized = true;
	}
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* V_0 = NULL;
	int32_t V_1 = 0;
	Il2CppChar V_2 = 0x0;
	int32_t V_3 = 0;
	{
		// builder.Append('\"');
		StringBuilder_t * L_0 = __this->get_builder_0();
		NullCheck(L_0);
		StringBuilder_t * L_1;
		L_1 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_0, ((int32_t)34), /*hidden argument*/NULL);
		// char[] charArray = str.ToCharArray();
		String_t* L_2 = ___str0;
		NullCheck(L_2);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_3;
		L_3 = String_ToCharArray_m33E93AEB7086CBEBDFA5730EAAC49686F144089C(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		// for (int i = 0; i < charArray.Length; i++)
		V_1 = 0;
		goto IL_012d;
	}

IL_001c:
	{
		// char c = charArray[i];
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_4 = V_0;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		uint16_t L_7 = (uint16_t)(L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_2 = L_7;
		Il2CppChar L_8 = V_2;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)8)))
		{
			case 0:
			{
				goto IL_007b;
			}
			case 1:
			{
				goto IL_00cd;
			}
			case 2:
			{
				goto IL_00a7;
			}
			case 3:
			{
				goto IL_00e0;
			}
			case 4:
			{
				goto IL_0091;
			}
			case 5:
			{
				goto IL_00ba;
			}
		}
	}
	{
		Il2CppChar L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)34))))
		{
			goto IL_004f;
		}
	}
	{
		Il2CppChar L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)92))))
		{
			goto IL_0065;
		}
	}
	{
		goto IL_00e0;
	}

IL_004f:
	{
		// builder.Append("\\\"");
		StringBuilder_t * L_11 = __this->get_builder_0();
		NullCheck(L_11);
		StringBuilder_t * L_12;
		L_12 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_11, _stringLiteral848E5ED630B3142F565DD995C6E8D30187ED33CD, /*hidden argument*/NULL);
		// break;
		goto IL_0129;
	}

IL_0065:
	{
		// builder.Append("\\\\");
		StringBuilder_t * L_13 = __this->get_builder_0();
		NullCheck(L_13);
		StringBuilder_t * L_14;
		L_14 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_13, _stringLiteralF18840F490E42D3CE48CDCBF47229C1C240F8ABE, /*hidden argument*/NULL);
		// break;
		goto IL_0129;
	}

IL_007b:
	{
		// builder.Append("\\b");
		StringBuilder_t * L_15 = __this->get_builder_0();
		NullCheck(L_15);
		StringBuilder_t * L_16;
		L_16 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_15, _stringLiteral5962E944D7340CE47999BF097B4AFD70C1501FB9, /*hidden argument*/NULL);
		// break;
		goto IL_0129;
	}

IL_0091:
	{
		// builder.Append("\\f");
		StringBuilder_t * L_17 = __this->get_builder_0();
		NullCheck(L_17);
		StringBuilder_t * L_18;
		L_18 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_17, _stringLiteralA7C3FCA8C63E127B542B38A5CA5E3FEEDDD1B122, /*hidden argument*/NULL);
		// break;
		goto IL_0129;
	}

IL_00a7:
	{
		// builder.Append("\\n");
		StringBuilder_t * L_19 = __this->get_builder_0();
		NullCheck(L_19);
		StringBuilder_t * L_20;
		L_20 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_19, _stringLiteral785F17F45C331C415D0A7458E6AAC36966399C51, /*hidden argument*/NULL);
		// break;
		goto IL_0129;
	}

IL_00ba:
	{
		// builder.Append("\\r");
		StringBuilder_t * L_21 = __this->get_builder_0();
		NullCheck(L_21);
		StringBuilder_t * L_22;
		L_22 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_21, _stringLiteralB78F235D4291950A7D101307609C259F3E1F033F, /*hidden argument*/NULL);
		// break;
		goto IL_0129;
	}

IL_00cd:
	{
		// builder.Append("\\t");
		StringBuilder_t * L_23 = __this->get_builder_0();
		NullCheck(L_23);
		StringBuilder_t * L_24;
		L_24 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_23, _stringLiteral7F3238CD8C342B06FB9AB185C610175C84625462, /*hidden argument*/NULL);
		// break;
		goto IL_0129;
	}

IL_00e0:
	{
		// int codepoint = Convert.ToInt32(c);
		Il2CppChar L_25 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		int32_t L_26;
		L_26 = Convert_ToInt32_m0B80BF2883121B16934DF6F71590CAE15442A5BC(L_25, /*hidden argument*/NULL);
		V_3 = L_26;
		// if ((codepoint >= 32) && (codepoint <= 126))
		int32_t L_27 = V_3;
		if ((((int32_t)L_27) < ((int32_t)((int32_t)32))))
		{
			goto IL_0100;
		}
	}
	{
		int32_t L_28 = V_3;
		if ((((int32_t)L_28) > ((int32_t)((int32_t)126))))
		{
			goto IL_0100;
		}
	}
	{
		// builder.Append(c);
		StringBuilder_t * L_29 = __this->get_builder_0();
		Il2CppChar L_30 = V_2;
		NullCheck(L_29);
		StringBuilder_t * L_31;
		L_31 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_29, L_30, /*hidden argument*/NULL);
		// }
		goto IL_0129;
	}

IL_0100:
	{
		// builder.Append("\\u");
		StringBuilder_t * L_32 = __this->get_builder_0();
		NullCheck(L_32);
		StringBuilder_t * L_33;
		L_33 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_32, _stringLiteralDA666908BB15F4E1D2649752EC5DCBD0D5C64699, /*hidden argument*/NULL);
		// builder.Append(codepoint.ToString("x4"));
		StringBuilder_t * L_34 = __this->get_builder_0();
		String_t* L_35;
		L_35 = Int32_ToString_m5398ED0B6625B75CAF70C63B3CF2CE47D3C1B184((int32_t*)(&V_3), _stringLiteralE727BF366E3CC855B808D806440542BF7152AF19, /*hidden argument*/NULL);
		NullCheck(L_34);
		StringBuilder_t * L_36;
		L_36 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_34, L_35, /*hidden argument*/NULL);
	}

IL_0129:
	{
		// for (int i = 0; i < charArray.Length; i++)
		int32_t L_37 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_37, (int32_t)1));
	}

IL_012d:
	{
		// for (int i = 0; i < charArray.Length; i++)
		int32_t L_38 = V_1;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_39 = V_0;
		NullCheck(L_39);
		if ((((int32_t)L_38) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_39)->max_length))))))
		{
			goto IL_001c;
		}
	}
	{
		// builder.Append('\"');
		StringBuilder_t * L_40 = __this->get_builder_0();
		NullCheck(L_40);
		StringBuilder_t * L_41;
		L_41 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_40, ((int32_t)34), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Json/Serializer::SerializeOther(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeOther_m8A4C90F8CFCD6E67AB81C8EDB14C633B96DCBE54 (Serializer_tD60707A2A49A34FBCB719C8EFD602D15FF19C248 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2C3D4826D5236B3C9A914C5CE2E3D8CEA48AC7CE);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	double V_1 = 0.0;
	{
		// if (value is float)
		RuntimeObject * L_0 = ___value0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var)))
		{
			goto IL_002d;
		}
	}
	{
		// builder.Append(((float) value).ToString("R", System.Globalization.CultureInfo.InvariantCulture));
		StringBuilder_t * L_1 = __this->get_builder_0();
		RuntimeObject * L_2 = ___value0;
		V_0 = ((*(float*)((float*)UnBox(L_2, Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var))));
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_3;
		L_3 = CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164(/*hidden argument*/NULL);
		String_t* L_4;
		L_4 = Single_ToString_m7631D332703B4197EAA7DC0BA067CE7E16334D8B((float*)(&V_0), _stringLiteral2C3D4826D5236B3C9A914C5CE2E3D8CEA48AC7CE, L_3, /*hidden argument*/NULL);
		NullCheck(L_1);
		StringBuilder_t * L_5;
		L_5 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_1, L_4, /*hidden argument*/NULL);
		// }
		return;
	}

IL_002d:
	{
		// else if (value is int
		//          || value is uint
		//          || value is long
		//          || value is sbyte
		//          || value is byte
		//          || value is short
		//          || value is ushort
		//          || value is ulong)
		RuntimeObject * L_6 = ___value0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_6, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)))
		{
			goto IL_006d;
		}
	}
	{
		RuntimeObject * L_7 = ___value0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_7, UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var)))
		{
			goto IL_006d;
		}
	}
	{
		RuntimeObject * L_8 = ___value0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_8, Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var)))
		{
			goto IL_006d;
		}
	}
	{
		RuntimeObject * L_9 = ___value0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_9, SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_il2cpp_TypeInfo_var)))
		{
			goto IL_006d;
		}
	}
	{
		RuntimeObject * L_10 = ___value0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_10, Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var)))
		{
			goto IL_006d;
		}
	}
	{
		RuntimeObject * L_11 = ___value0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_11, Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var)))
		{
			goto IL_006d;
		}
	}
	{
		RuntimeObject * L_12 = ___value0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_12, UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_il2cpp_TypeInfo_var)))
		{
			goto IL_006d;
		}
	}
	{
		RuntimeObject * L_13 = ___value0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_13, UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var)))
		{
			goto IL_007b;
		}
	}

IL_006d:
	{
		// builder.Append(value);
		StringBuilder_t * L_14 = __this->get_builder_0();
		RuntimeObject * L_15 = ___value0;
		NullCheck(L_14);
		StringBuilder_t * L_16;
		L_16 = StringBuilder_Append_m545FFB72A578320B1D6EA3772160353FD62C344F(L_14, L_15, /*hidden argument*/NULL);
		// }
		return;
	}

IL_007b:
	{
		// else if (value is double
		//          || value is decimal)
		RuntimeObject * L_17 = ___value0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_17, Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}
	{
		RuntimeObject * L_18 = ___value0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_18, Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_il2cpp_TypeInfo_var)))
		{
			goto IL_00b0;
		}
	}

IL_008b:
	{
		// builder.Append(Convert.ToDouble(value)
		//     .ToString("R", System.Globalization.CultureInfo.InvariantCulture));
		StringBuilder_t * L_19 = __this->get_builder_0();
		RuntimeObject * L_20 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		double L_21;
		L_21 = Convert_ToDouble_mF6F0642EA16CAB414EEA621DEAA519527DA64284(L_20, /*hidden argument*/NULL);
		V_1 = L_21;
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_22;
		L_22 = CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164(/*hidden argument*/NULL);
		String_t* L_23;
		L_23 = Double_ToString_mFF1DAF2003FC7096C54C5A2685F85082220E330B((double*)(&V_1), _stringLiteral2C3D4826D5236B3C9A914C5CE2E3D8CEA48AC7CE, L_22, /*hidden argument*/NULL);
		NullCheck(L_19);
		StringBuilder_t * L_24;
		L_24 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_19, L_23, /*hidden argument*/NULL);
		// }
		return;
	}

IL_00b0:
	{
		// SerializeString(value.ToString());
		RuntimeObject * L_25 = ___value0;
		NullCheck(L_25);
		String_t* L_26;
		L_26 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_25);
		Serializer_SerializeString_mB50720F378B286FB45C8915ABEA8915C56EAADEA(__this, L_26, /*hidden argument*/NULL);
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
// System.Void OneSignal/EmailSubscriptionObservable::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EmailSubscriptionObservable__ctor_mB179BF2540A04B27D46E5F7FD354481CE0826457 (EmailSubscriptionObservable_t0BE190ED78D890F32B3CD78351CB03CDE6743C4A * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void OneSignal/EmailSubscriptionObservable::Invoke(OSEmailSubscriptionStateChanges)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EmailSubscriptionObservable_Invoke_m475D1FD8E0E1FD296C7E6E188E23D1654FFA6146 (EmailSubscriptionObservable_t0BE190ED78D890F32B3CD78351CB03CDE6743C4A * __this, OSEmailSubscriptionStateChanges_tCEE883A6FE7F1AAAC113C9D9E6135CEDAE1ABC6A * ___stateChanges0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!currentDelegate->get_method_is_virtual_10())
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (OSEmailSubscriptionStateChanges_tCEE883A6FE7F1AAAC113C9D9E6135CEDAE1ABC6A *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___stateChanges0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, OSEmailSubscriptionStateChanges_tCEE883A6FE7F1AAAC113C9D9E6135CEDAE1ABC6A *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___stateChanges0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (currentDelegate->get_method_is_virtual_10())
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___stateChanges0);
					else
						GenericVirtualActionInvoker0::Invoke(targetMethod, ___stateChanges0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___stateChanges0);
					else
						VirtualActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___stateChanges0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (OSEmailSubscriptionStateChanges_tCEE883A6FE7F1AAAC113C9D9E6135CEDAE1ABC6A *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___stateChanges0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis == NULL)
			{
				typedef void (*FunctionPointerType) (OSEmailSubscriptionStateChanges_tCEE883A6FE7F1AAAC113C9D9E6135CEDAE1ABC6A *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___stateChanges0, targetMethod);
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, OSEmailSubscriptionStateChanges_tCEE883A6FE7F1AAAC113C9D9E6135CEDAE1ABC6A *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___stateChanges0, targetMethod);
			}
		}
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_IdsAvailableCallback_t4542530853E11729402E55FCDDD09AD6FBC8B377 (IdsAvailableCallback_t4542530853E11729402E55FCDDD09AD6FBC8B377 * __this, String_t* ___playerID0, String_t* ___pushToken1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*, char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___playerID0' to native representation
	char* ____playerID0_marshaled = NULL;
	____playerID0_marshaled = il2cpp_codegen_marshal_string(___playerID0);

	// Marshaling of parameter '___pushToken1' to native representation
	char* ____pushToken1_marshaled = NULL;
	____pushToken1_marshaled = il2cpp_codegen_marshal_string(___pushToken1);

	// Native function invocation
	il2cppPInvokeFunc(____playerID0_marshaled, ____pushToken1_marshaled);

	// Marshaling cleanup of parameter '___playerID0' native representation
	il2cpp_codegen_marshal_free(____playerID0_marshaled);
	____playerID0_marshaled = NULL;

	// Marshaling cleanup of parameter '___pushToken1' native representation
	il2cpp_codegen_marshal_free(____pushToken1_marshaled);
	____pushToken1_marshaled = NULL;

}
// System.Void OneSignal/IdsAvailableCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IdsAvailableCallback__ctor_m71D5E40CEC5D26B5DD74C5E07CBF9792E0D5637D (IdsAvailableCallback_t4542530853E11729402E55FCDDD09AD6FBC8B377 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void OneSignal/IdsAvailableCallback::Invoke(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IdsAvailableCallback_Invoke_mE0E2A2CC4C3E5B5CDBF8CACEA82129388941186C (IdsAvailableCallback_t4542530853E11729402E55FCDDD09AD6FBC8B377 * __this, String_t* ___playerID0, String_t* ___pushToken1, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!currentDelegate->get_method_is_virtual_10())
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (String_t*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___playerID0, ___pushToken1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, String_t*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___playerID0, ___pushToken1, targetMethod);
			}
		}
		else if (___parameterCount != 2)
		{
			// open
			if (currentDelegate->get_method_is_virtual_10())
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< String_t* >::Invoke(targetMethod, ___playerID0, ___pushToken1);
					else
						GenericVirtualActionInvoker1< String_t* >::Invoke(targetMethod, ___playerID0, ___pushToken1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___playerID0, ___pushToken1);
					else
						VirtualActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___playerID0, ___pushToken1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (String_t*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___playerID0, ___pushToken1, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis == NULL)
			{
				typedef void (*FunctionPointerType) (String_t*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___playerID0, ___pushToken1, targetMethod);
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, String_t*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___playerID0, ___pushToken1, targetMethod);
			}
		}
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
// System.Void OneSignal/InAppMessageClicked::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InAppMessageClicked__ctor_m3252D848D868D3FE5E3156D716E2963342AEB7B5 (InAppMessageClicked_t28BE72075727CEF08C18EC3542264EE5099C46AA * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void OneSignal/InAppMessageClicked::Invoke(OSInAppMessageAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InAppMessageClicked_Invoke_m66291C067D0E1521F8343E8ADC337ACB49CBD88E (InAppMessageClicked_t28BE72075727CEF08C18EC3542264EE5099C46AA * __this, OSInAppMessageAction_tAE95CC815769B2A2C7EE6A21F465550529D5C1A3 * ___action0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!currentDelegate->get_method_is_virtual_10())
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (OSInAppMessageAction_tAE95CC815769B2A2C7EE6A21F465550529D5C1A3 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___action0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, OSInAppMessageAction_tAE95CC815769B2A2C7EE6A21F465550529D5C1A3 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___action0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (currentDelegate->get_method_is_virtual_10())
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___action0);
					else
						GenericVirtualActionInvoker0::Invoke(targetMethod, ___action0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___action0);
					else
						VirtualActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___action0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (OSInAppMessageAction_tAE95CC815769B2A2C7EE6A21F465550529D5C1A3 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___action0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis == NULL)
			{
				typedef void (*FunctionPointerType) (OSInAppMessageAction_tAE95CC815769B2A2C7EE6A21F465550529D5C1A3 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___action0, targetMethod);
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, OSInAppMessageAction_tAE95CC815769B2A2C7EE6A21F465550529D5C1A3 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___action0, targetMethod);
			}
		}
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
// System.Void OneSignal/NotificationOpened::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotificationOpened__ctor_mC79F95BC7C9A3A2BDDBEAB20D2361924BDEBF124 (NotificationOpened_t1EAAB82F6D9989F1EC2B2A408858A3DDE351BBA0 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void OneSignal/NotificationOpened::Invoke(OSNotificationOpenedResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotificationOpened_Invoke_m59A3350E8B2917932D9183162DA3C32998E56416 (NotificationOpened_t1EAAB82F6D9989F1EC2B2A408858A3DDE351BBA0 * __this, OSNotificationOpenedResult_t74C73E0CEA2EB83022E266EF9F12B5E721DD057F * ___result0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!currentDelegate->get_method_is_virtual_10())
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (OSNotificationOpenedResult_t74C73E0CEA2EB83022E266EF9F12B5E721DD057F *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___result0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, OSNotificationOpenedResult_t74C73E0CEA2EB83022E266EF9F12B5E721DD057F *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___result0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (currentDelegate->get_method_is_virtual_10())
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___result0);
					else
						GenericVirtualActionInvoker0::Invoke(targetMethod, ___result0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___result0);
					else
						VirtualActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___result0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (OSNotificationOpenedResult_t74C73E0CEA2EB83022E266EF9F12B5E721DD057F *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___result0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis == NULL)
			{
				typedef void (*FunctionPointerType) (OSNotificationOpenedResult_t74C73E0CEA2EB83022E266EF9F12B5E721DD057F *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___result0, targetMethod);
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, OSNotificationOpenedResult_t74C73E0CEA2EB83022E266EF9F12B5E721DD057F *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___result0, targetMethod);
			}
		}
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
// System.Void OneSignal/NotificationReceived::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotificationReceived__ctor_m26939E166DA703D362C8526DFDBA04C37D584ED1 (NotificationReceived_tAD87EB0BF05ABA12EF33C2C0C3300278BA0CB814 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void OneSignal/NotificationReceived::Invoke(OSNotification)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotificationReceived_Invoke_m5C7278BB32535EEDD14D95287192CF05DB0FC156 (NotificationReceived_tAD87EB0BF05ABA12EF33C2C0C3300278BA0CB814 * __this, OSNotification_t554DC6C0C4C4F2E6602C4C5E096252126B0EAD72 * ___notification0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!currentDelegate->get_method_is_virtual_10())
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (OSNotification_t554DC6C0C4C4F2E6602C4C5E096252126B0EAD72 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___notification0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, OSNotification_t554DC6C0C4C4F2E6602C4C5E096252126B0EAD72 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___notification0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (currentDelegate->get_method_is_virtual_10())
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___notification0);
					else
						GenericVirtualActionInvoker0::Invoke(targetMethod, ___notification0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___notification0);
					else
						VirtualActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___notification0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (OSNotification_t554DC6C0C4C4F2E6602C4C5E096252126B0EAD72 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___notification0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis == NULL)
			{
				typedef void (*FunctionPointerType) (OSNotification_t554DC6C0C4C4F2E6602C4C5E096252126B0EAD72 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___notification0, targetMethod);
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, OSNotification_t554DC6C0C4C4F2E6602C4C5E096252126B0EAD72 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___notification0, targetMethod);
			}
		}
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
// System.Void OneSignal/OnExternalUserIdUpdateCompletion::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnExternalUserIdUpdateCompletion__ctor_m79ABE4E111F775A80E4BAF8FF210150401B6511D (OnExternalUserIdUpdateCompletion_tE7AD9883916B83BCCE7A9F6C4C77E818FA079EF3 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void OneSignal/OnExternalUserIdUpdateCompletion::Invoke(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnExternalUserIdUpdateCompletion_Invoke_mE9FBD8E1231DB6B2C9418A4CBC46CA2D6FA99B6B (OnExternalUserIdUpdateCompletion_tE7AD9883916B83BCCE7A9F6C4C77E818FA079EF3 * __this, Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * ___results0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!currentDelegate->get_method_is_virtual_10())
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___results0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___results0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (currentDelegate->get_method_is_virtual_10())
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___results0);
					else
						GenericVirtualActionInvoker0::Invoke(targetMethod, ___results0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___results0);
					else
						VirtualActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___results0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___results0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis == NULL)
			{
				typedef void (*FunctionPointerType) (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___results0, targetMethod);
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___results0, targetMethod);
			}
		}
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
// System.Void OneSignal/OnExternalUserIdUpdateCompletionFailure::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnExternalUserIdUpdateCompletionFailure__ctor_m9DD9E8FDA2C491C738C5473AD63E132B8E200A1C (OnExternalUserIdUpdateCompletionFailure_t3C667A1A4AC32CE33E8FA58F11890E28729BB8F1 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void OneSignal/OnExternalUserIdUpdateCompletionFailure::Invoke(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnExternalUserIdUpdateCompletionFailure_Invoke_mB8BE22FB158894DC243E347ABB1CDB5B80E4CFB3 (OnExternalUserIdUpdateCompletionFailure_t3C667A1A4AC32CE33E8FA58F11890E28729BB8F1 * __this, Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * ___error0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!currentDelegate->get_method_is_virtual_10())
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___error0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___error0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (currentDelegate->get_method_is_virtual_10())
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___error0);
					else
						GenericVirtualActionInvoker0::Invoke(targetMethod, ___error0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___error0);
					else
						VirtualActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___error0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___error0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis == NULL)
			{
				typedef void (*FunctionPointerType) (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___error0, targetMethod);
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___error0, targetMethod);
			}
		}
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
// System.Void OneSignal/OnLogoutEmailFailure::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnLogoutEmailFailure__ctor_mEBB0DC590B07FC2C9AADEACE95DC7A5E7709184A (OnLogoutEmailFailure_tA4226BD4128D5C768C079A27BC0ABEA359DC848D * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void OneSignal/OnLogoutEmailFailure::Invoke(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnLogoutEmailFailure_Invoke_m5433108F92A3791222E6C178AD2F6B92F0E6BCCA (OnLogoutEmailFailure_tA4226BD4128D5C768C079A27BC0ABEA359DC848D * __this, Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * ___error0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!currentDelegate->get_method_is_virtual_10())
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___error0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___error0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (currentDelegate->get_method_is_virtual_10())
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___error0);
					else
						GenericVirtualActionInvoker0::Invoke(targetMethod, ___error0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___error0);
					else
						VirtualActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___error0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___error0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis == NULL)
			{
				typedef void (*FunctionPointerType) (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___error0, targetMethod);
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___error0, targetMethod);
			}
		}
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_OnLogoutEmailSuccess_t87D6896F1510F5624EA317AA83BCEEBE79DC60AF (OnLogoutEmailSuccess_t87D6896F1510F5624EA317AA83BCEEBE79DC60AF * __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void OneSignal/OnLogoutEmailSuccess::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnLogoutEmailSuccess__ctor_m5CFAE4CF4900024D0C97E229F1F2F58AF1F7FE11 (OnLogoutEmailSuccess_t87D6896F1510F5624EA317AA83BCEEBE79DC60AF * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void OneSignal/OnLogoutEmailSuccess::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnLogoutEmailSuccess_Invoke_m1249F522E9ACB6C6AEB1E0A650126D2E76A2E5FD (OnLogoutEmailSuccess_t87D6896F1510F5624EA317AA83BCEEBE79DC60AF * __this, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!currentDelegate->get_method_is_virtual_10())
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 0)
			{
				// open
				typedef void (*FunctionPointerType) (const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
		else
		{
			// closed
			typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
			((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
		}
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
// System.Void OneSignal/OnPostNotificationFailure::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnPostNotificationFailure__ctor_m1BF93A8732046FBA52C46B45836BC2CB426109C3 (OnPostNotificationFailure_t838C4BF4E9FE424E9B8A948B686BC4B56EA0EE85 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void OneSignal/OnPostNotificationFailure::Invoke(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnPostNotificationFailure_Invoke_mCFEFAB9AB63633AD5BC9D31FC1A402BC8E821133 (OnPostNotificationFailure_t838C4BF4E9FE424E9B8A948B686BC4B56EA0EE85 * __this, Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * ___response0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!currentDelegate->get_method_is_virtual_10())
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___response0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___response0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (currentDelegate->get_method_is_virtual_10())
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___response0);
					else
						GenericVirtualActionInvoker0::Invoke(targetMethod, ___response0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___response0);
					else
						VirtualActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___response0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___response0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis == NULL)
			{
				typedef void (*FunctionPointerType) (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___response0, targetMethod);
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___response0, targetMethod);
			}
		}
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
// System.Void OneSignal/OnPostNotificationSuccess::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnPostNotificationSuccess__ctor_mF74778FA8E1FD78FF66740AF8D9CC2182CEEB2BF (OnPostNotificationSuccess_tDCA1A38F1FC336944A4489421DD2C28BF9F6DAFA * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void OneSignal/OnPostNotificationSuccess::Invoke(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnPostNotificationSuccess_Invoke_mC4E45D5B1D9E50AAB4CA72796F9E52FAD2817D93 (OnPostNotificationSuccess_tDCA1A38F1FC336944A4489421DD2C28BF9F6DAFA * __this, Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * ___response0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!currentDelegate->get_method_is_virtual_10())
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___response0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___response0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (currentDelegate->get_method_is_virtual_10())
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___response0);
					else
						GenericVirtualActionInvoker0::Invoke(targetMethod, ___response0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___response0);
					else
						VirtualActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___response0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___response0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis == NULL)
			{
				typedef void (*FunctionPointerType) (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___response0, targetMethod);
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___response0, targetMethod);
			}
		}
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
// System.Void OneSignal/OnSendOutcomeSuccess::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnSendOutcomeSuccess__ctor_m554F5443E2A9680B9CCEE53062EEC668F9256913 (OnSendOutcomeSuccess_t33CAC591369FF5B710CB915E5F2EC54F7BD19D0C * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void OneSignal/OnSendOutcomeSuccess::Invoke(OSOutcomeEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnSendOutcomeSuccess_Invoke_mA05B4A944D533EBBA32B0EB4ED8EBA632B47F5DE (OnSendOutcomeSuccess_t33CAC591369FF5B710CB915E5F2EC54F7BD19D0C * __this, OSOutcomeEvent_tA0383B5CF8F2466567F3E15AA97710870875535D * ___outcomeEvent0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!currentDelegate->get_method_is_virtual_10())
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (OSOutcomeEvent_tA0383B5CF8F2466567F3E15AA97710870875535D *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___outcomeEvent0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, OSOutcomeEvent_tA0383B5CF8F2466567F3E15AA97710870875535D *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___outcomeEvent0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (currentDelegate->get_method_is_virtual_10())
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___outcomeEvent0);
					else
						GenericVirtualActionInvoker0::Invoke(targetMethod, ___outcomeEvent0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___outcomeEvent0);
					else
						VirtualActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___outcomeEvent0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (OSOutcomeEvent_tA0383B5CF8F2466567F3E15AA97710870875535D *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___outcomeEvent0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis == NULL)
			{
				typedef void (*FunctionPointerType) (OSOutcomeEvent_tA0383B5CF8F2466567F3E15AA97710870875535D *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___outcomeEvent0, targetMethod);
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, OSOutcomeEvent_tA0383B5CF8F2466567F3E15AA97710870875535D *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___outcomeEvent0, targetMethod);
			}
		}
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
// System.Void OneSignal/OnSetEmailFailure::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnSetEmailFailure__ctor_m74548167D2B299EB82C35F1F6E3A42D657D95C1B (OnSetEmailFailure_tC1B0B2D7E54644EF4414EFE4A1DC6A9371409B5D * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void OneSignal/OnSetEmailFailure::Invoke(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnSetEmailFailure_Invoke_mB49471E694DA5104BC76980F4C8C5639798527F9 (OnSetEmailFailure_tC1B0B2D7E54644EF4414EFE4A1DC6A9371409B5D * __this, Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * ___error0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!currentDelegate->get_method_is_virtual_10())
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___error0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___error0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (currentDelegate->get_method_is_virtual_10())
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___error0);
					else
						GenericVirtualActionInvoker0::Invoke(targetMethod, ___error0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___error0);
					else
						VirtualActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___error0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___error0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis == NULL)
			{
				typedef void (*FunctionPointerType) (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___error0, targetMethod);
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___error0, targetMethod);
			}
		}
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_OnSetEmailSuccess_t5D828241C45219E51AC4B47C581F66419C7D3BDB (OnSetEmailSuccess_t5D828241C45219E51AC4B47C581F66419C7D3BDB * __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void OneSignal/OnSetEmailSuccess::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnSetEmailSuccess__ctor_mD18EC284F506911FCD8EA2F0EE2A5BC01AD17D3F (OnSetEmailSuccess_t5D828241C45219E51AC4B47C581F66419C7D3BDB * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void OneSignal/OnSetEmailSuccess::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnSetEmailSuccess_Invoke_m77F99D61CA68EA36709DBF7125C94692118D4C62 (OnSetEmailSuccess_t5D828241C45219E51AC4B47C581F66419C7D3BDB * __this, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!currentDelegate->get_method_is_virtual_10())
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 0)
			{
				// open
				typedef void (*FunctionPointerType) (const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
		else
		{
			// closed
			typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
			((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
		}
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
// System.Void OneSignal/PermissionObservable::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PermissionObservable__ctor_mD54147678F4093EA4B4D24952BBD1B9E5E21E932 (PermissionObservable_tAD0961762662CFBE5C5C21B4F7B44816689D232D * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void OneSignal/PermissionObservable::Invoke(OSPermissionStateChanges)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PermissionObservable_Invoke_m7AE7C99E2B8A793B0D60ECA41D4E59D8CC426E33 (PermissionObservable_tAD0961762662CFBE5C5C21B4F7B44816689D232D * __this, OSPermissionStateChanges_t1B014D5332A17B2F12B7B9B981B61A08AB8FDCF8 * ___stateChanges0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!currentDelegate->get_method_is_virtual_10())
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (OSPermissionStateChanges_t1B014D5332A17B2F12B7B9B981B61A08AB8FDCF8 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___stateChanges0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, OSPermissionStateChanges_t1B014D5332A17B2F12B7B9B981B61A08AB8FDCF8 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___stateChanges0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (currentDelegate->get_method_is_virtual_10())
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___stateChanges0);
					else
						GenericVirtualActionInvoker0::Invoke(targetMethod, ___stateChanges0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___stateChanges0);
					else
						VirtualActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___stateChanges0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (OSPermissionStateChanges_t1B014D5332A17B2F12B7B9B981B61A08AB8FDCF8 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___stateChanges0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis == NULL)
			{
				typedef void (*FunctionPointerType) (OSPermissionStateChanges_t1B014D5332A17B2F12B7B9B981B61A08AB8FDCF8 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___stateChanges0, targetMethod);
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, OSPermissionStateChanges_t1B014D5332A17B2F12B7B9B981B61A08AB8FDCF8 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___stateChanges0, targetMethod);
			}
		}
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_PromptForPushNotificationsUserResponse_t5508C614F3AB278D72FACCAD119F0F65792AB501 (PromptForPushNotificationsUserResponse_t5508C614F3AB278D72FACCAD119F0F65792AB501 * __this, bool ___accepted0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(static_cast<int32_t>(___accepted0));

}
// System.Void OneSignal/PromptForPushNotificationsUserResponse::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PromptForPushNotificationsUserResponse__ctor_m48A40C88BD96CDFEC9C99C4319D1ACA2FE75FD94 (PromptForPushNotificationsUserResponse_t5508C614F3AB278D72FACCAD119F0F65792AB501 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void OneSignal/PromptForPushNotificationsUserResponse::Invoke(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PromptForPushNotificationsUserResponse_Invoke_mAB662FD998CF5BC2A5B565F794F3FED2EDF8A622 (PromptForPushNotificationsUserResponse_t5508C614F3AB278D72FACCAD119F0F65792AB501 * __this, bool ___accepted0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!currentDelegate->get_method_is_virtual_10())
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (bool, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___accepted0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, bool, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___accepted0, targetMethod);
			}
		}
		else
		{
			// closed
			typedef void (*FunctionPointerType) (void*, bool, const RuntimeMethod*);
			((FunctionPointerType)targetMethodPointer)(targetThis, ___accepted0, targetMethod);
		}
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
// System.Void OneSignal/SubscriptionObservable::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubscriptionObservable__ctor_m8ECFF54EA2FBA93379986097721FABF7838547A0 (SubscriptionObservable_tAC9D68D12698867A849F8DBEDF5E81CEF8353BBB * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void OneSignal/SubscriptionObservable::Invoke(OSSubscriptionStateChanges)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubscriptionObservable_Invoke_mA5DABD1A12E6A7502F4E0BBDBB87B944A25ADC79 (SubscriptionObservable_tAC9D68D12698867A849F8DBEDF5E81CEF8353BBB * __this, OSSubscriptionStateChanges_t80801EC51BCF40EDC399FB2C2658111539658213 * ___stateChanges0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!currentDelegate->get_method_is_virtual_10())
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (OSSubscriptionStateChanges_t80801EC51BCF40EDC399FB2C2658111539658213 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___stateChanges0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, OSSubscriptionStateChanges_t80801EC51BCF40EDC399FB2C2658111539658213 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___stateChanges0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (currentDelegate->get_method_is_virtual_10())
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___stateChanges0);
					else
						GenericVirtualActionInvoker0::Invoke(targetMethod, ___stateChanges0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___stateChanges0);
					else
						VirtualActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___stateChanges0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (OSSubscriptionStateChanges_t80801EC51BCF40EDC399FB2C2658111539658213 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___stateChanges0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis == NULL)
			{
				typedef void (*FunctionPointerType) (OSSubscriptionStateChanges_t80801EC51BCF40EDC399FB2C2658111539658213 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___stateChanges0, targetMethod);
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, OSSubscriptionStateChanges_t80801EC51BCF40EDC399FB2C2658111539658213 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___stateChanges0, targetMethod);
			}
		}
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
// System.Void OneSignal/TagsReceived::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TagsReceived__ctor_mF6EC62262B4715EF38513460952DB11AC141E3C3 (TagsReceived_t7D5926BFB0FAC298A876D14D71495DE029E4A791 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void OneSignal/TagsReceived::Invoke(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TagsReceived_Invoke_m8FC2051A4C71C2FC59BF7791F2F4F4817324F6CE (TagsReceived_t7D5926BFB0FAC298A876D14D71495DE029E4A791 * __this, Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * ___tags0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!currentDelegate->get_method_is_virtual_10())
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___tags0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___tags0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (currentDelegate->get_method_is_virtual_10())
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___tags0);
					else
						GenericVirtualActionInvoker0::Invoke(targetMethod, ___tags0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___tags0);
					else
						VirtualActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___tags0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___tags0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis == NULL)
			{
				typedef void (*FunctionPointerType) (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___tags0, targetMethod);
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___tags0, targetMethod);
			}
		}
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
// OneSignal/UnityBuilder OneSignal/UnityBuilder::HandleNotificationReceived(OneSignal/NotificationReceived)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityBuilder_tDBFC88D88033BADCF56F27E95359EF77CF9ADFED * UnityBuilder_HandleNotificationReceived_mA3B9204AAD4EE70E9A220E97D1EE06977C33F896 (UnityBuilder_tDBFC88D88033BADCF56F27E95359EF77CF9ADFED * __this, NotificationReceived_tAD87EB0BF05ABA12EF33C2C0C3300278BA0CB814 * ___inNotificationReceivedDelegate0, const RuntimeMethod* method)
{
	{
		// notificationReceivedDelegate = inNotificationReceivedDelegate;
		NotificationReceived_tAD87EB0BF05ABA12EF33C2C0C3300278BA0CB814 * L_0 = ___inNotificationReceivedDelegate0;
		__this->set_notificationReceivedDelegate_3(L_0);
		// return this;
		return __this;
	}
}
// OneSignal/UnityBuilder OneSignal/UnityBuilder::HandleNotificationOpened(OneSignal/NotificationOpened)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityBuilder_tDBFC88D88033BADCF56F27E95359EF77CF9ADFED * UnityBuilder_HandleNotificationOpened_mBAF1B4FCB10789003227CEE7BA339F379341AB9A (UnityBuilder_tDBFC88D88033BADCF56F27E95359EF77CF9ADFED * __this, NotificationOpened_t1EAAB82F6D9989F1EC2B2A408858A3DDE351BBA0 * ___inNotificationOpenedDelegate0, const RuntimeMethod* method)
{
	{
		// notificationOpenedDelegate = inNotificationOpenedDelegate;
		NotificationOpened_t1EAAB82F6D9989F1EC2B2A408858A3DDE351BBA0 * L_0 = ___inNotificationOpenedDelegate0;
		__this->set_notificationOpenedDelegate_4(L_0);
		// return this;
		return __this;
	}
}
// OneSignal/UnityBuilder OneSignal/UnityBuilder::HandleInAppMessageClicked(OneSignal/InAppMessageClicked)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityBuilder_tDBFC88D88033BADCF56F27E95359EF77CF9ADFED * UnityBuilder_HandleInAppMessageClicked_m67D766871A787EB71151AC2454E5F811C5F3573D (UnityBuilder_tDBFC88D88033BADCF56F27E95359EF77CF9ADFED * __this, InAppMessageClicked_t28BE72075727CEF08C18EC3542264EE5099C46AA * ___inInAppMessageClickedDelegate0, const RuntimeMethod* method)
{
	{
		// inAppMessageClickHandlerDelegate = inInAppMessageClickedDelegate;
		InAppMessageClicked_t28BE72075727CEF08C18EC3542264EE5099C46AA * L_0 = ___inInAppMessageClickedDelegate0;
		__this->set_inAppMessageClickHandlerDelegate_5(L_0);
		// return this;
		return __this;
	}
}
// System.Void OneSignal/UnityBuilder::EndInit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityBuilder_EndInit_mBA0F45CEAFA09CAD57F3AB8DB6B7D59708F6BF94 (UnityBuilder_tDBFC88D88033BADCF56F27E95359EF77CF9ADFED * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Init();
		IL2CPP_RUNTIME_CLASS_INIT(OneSignal_tFFBE148C962E69524EC63EA4005A89F9BF1C5B0C_il2cpp_TypeInfo_var);
		OneSignal_Init_m756C1C4D540B10908DD87EDC00BB106549112B0F(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void OneSignal/UnityBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityBuilder__ctor_m725634C7F0B07CC4E671B1F1394760E11168EB0C (UnityBuilder_tDBFC88D88033BADCF56F27E95359EF77CF9ADFED * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m4C91D0E84532DF10C654917487D82CB0AB27693B_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return (RuntimeObject *)L_0;
	}
}
