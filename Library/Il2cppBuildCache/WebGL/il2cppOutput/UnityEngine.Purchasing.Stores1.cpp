#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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

// System.Action`1<System.Collections.Generic.List`1<UnityEngine.AndroidJavaObject>>
struct Action_1_t280D324324436AF42C8D2A05C7B79D2070238EC5;
// System.Action`1<System.Collections.Generic.List`1<UnityEngine.Purchasing.Models.GooglePurchase>>
struct Action_1_tE42BD9F1180F09C4A76A988DB2ABFE78413236E1;
// System.Action`1<System.Collections.Generic.List`1<UnityEngine.Purchasing.Product>>
struct Action_1_t5868F85E84D90CF271B4E7863DE1EFA97B473193;
// System.Action`1<System.Collections.Generic.List`1<UnityEngine.Purchasing.Extension.ProductDescription>>
struct Action_1_t762239D56917E8864E53EE1DFBAE23C93B8EF280;
// System.Action`1<System.Boolean>
struct Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83;
// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Action`1<UnityEngine.Purchasing.Product>
struct Action_1_tA1980BF879FC3C2BEF14A6B79268F3DBBB7EB865;
// System.Action`2<System.Boolean,System.String>
struct Action_2_t88E033566C44CCAAB72BD2C7604420B260FD3BF3;
// System.Action`3<UnityEngine.Purchasing.ProductDefinition,UnityEngine.Purchasing.Models.GooglePurchase,UnityEngine.Purchasing.Models.GoogleBillingResult>
struct Action_3_t0083092190368806A2DB2F1602BADE4C8B060D46;
// System.Action`4<UnityEngine.Purchasing.ProductDefinition,UnityEngine.Purchasing.Models.GooglePurchase,UnityEngine.Purchasing.Models.GoogleBillingResult,System.String>
struct Action_4_t6B11EA4C8E25C04252AE71EBA2F351ABD22B744A;
// System.Collections.Generic.Dictionary`2<UnityEngine.Purchasing.AppStore,System.String>
struct Dictionary_2_t44560DF978B3A19D443806371A881CDCB3BB0308;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399;
// System.Func`2<UnityEngine.Purchasing.Models.GooglePurchase,System.Boolean>
struct Func_2_t02A8DDA5AA2B110AE853BA161253FF2B6FADBF02;
// System.Func`2<System.Object,System.Boolean>
struct Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8;
// System.Func`2<UnityEngine.Purchasing.ProductCatalogItem,System.Boolean>
struct Func_2_t236EEA40DB78747B61EF79F060D053D1BFDB3B12;
// System.Func`2<UnityEngine.Purchasing.ProductDefinition,System.Boolean>
struct Func_2_t2F3D631795CE97DFD1F4F32CA7BA9B506C483851;
// System.Func`2<UnityEngine.Purchasing.ProductDefinition,System.String>
struct Func_2_tAB10861D99AA807AE21941AC819229F13C65AE06;
// System.Func`2<UnityEngine.Purchasing.ProductDefinition,UnityEngine.Purchasing.Default.WinProductDescription>
struct Func_2_t26F79FEEAFC83C364423428EC9E72457BDC04366;
// System.Collections.Generic.HashSet`1<UnityEngine.Purchasing.ProductDefinition>
struct HashSet_1_t00A61FC12AB18B4C1D249E381790DAEE518920B1;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Purchasing.Models.GooglePurchase>
struct IEnumerable_1_t966BAC51602F8C5C934057BB9A05A4F7224B6672;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t52B1AC8D9E5E1ED28DF6C46A37C9A1B00B394F9D;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Purchasing.Product>
struct IEnumerable_1_tDC86E8238143E448DB6E49715B87B774AB98A3F7;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tE6A65C5E45E33FD7D9849FD0914DE3AD32B68050;
// System.Collections.Generic.IList`1<UnityEngine.Purchasing.ProductDefinition>
struct IList_1_tDC1792FC74233BD232D090860F9B0FBC88301C34;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>
struct KeyCollection_t0043475CBB02FD67894529F3CAA818080A2F7A17;
// System.Collections.Generic.List`1<System.Action`1<System.Boolean>>
struct List_1_t74EFE92A1FFCE19915CF92B949BF2321170FA0B0;
// System.Collections.Generic.List`1<System.Action>
struct List_1_t458734AF850139150AB40DFB2B5D1BCE23178235;
// System.Collections.Generic.List`1<UnityEngine.AndroidJavaClass>
struct List_1_t75EFA6BB9024C1D2BBB00545C10AE41E4E36F73E;
// System.Collections.Generic.List`1<UnityEngine.AndroidJavaObject>
struct List_1_t911FB7A3288EAACB1E70E61FB84793A19DDB716B;
// System.Collections.Generic.List`1<UnityEngine.Purchasing.Models.GooglePurchase>
struct List_1_tC18F59C75A96198914A4AF87DDEBD3D2DFE05E3A;
// System.Collections.Generic.List`1<UnityEngine.Purchasing.LocalizedProductDescription>
struct List_1_tEF25210307D69880128385FA00E5F12705EBC2E6;
// System.Collections.Generic.List`1<UnityEngine.Purchasing.PayoutDefinition>
struct List_1_tA412B3BCF33761A8E1663DFE231E9FB84169A4B5;
// System.Collections.Generic.List`1<UnityEngine.Purchasing.Product>
struct List_1_tD6CD4E5E39E75EE330B0C6DB8A7A0AEE4966D8AA;
// System.Collections.Generic.List`1<UnityEngine.Purchasing.ProductCatalogPayout>
struct List_1_t1BBEA3237CF711106984E540A30F8394337C053D;
// System.Collections.Generic.List`1<UnityEngine.Purchasing.Extension.ProductDescription>
struct List_1_t293A9B62DF9E931D44BF8E69475D79D308B627FF;
// System.Collections.Generic.List`1<UnityEngine.RuntimePlatform>
struct List_1_t88A2029FA6A2D4504CD69AB6983AAE1D77DA972E;
// System.Collections.Generic.List`1<UnityEngine.Purchasing.StoreID>
struct List_1_tC7FFAD7D8654664DECD572AB308809CAA87B7CD5;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Purchasing.ProductDefinition>
struct ReadOnlyCollection_1_tA17CC77D8AB24DD29DF396C7B3CC305302C189C3;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>
struct ValueCollection_tB942A1033B750DCF04FE948413982D120FC69A4E;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Object>[]
struct EntryU5BU5D_tDCA1A62E50C5B5A40FD6F44107088AF42F5671D2;
// System.Int32[][]
struct Int32U5BU5DU5BU5D_t104DBF1B996084AA19567FD32B02EDF88D044FAF;
// UnityEngine.AndroidJavaObject[]
struct AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// UnityEngine.Purchasing.Models.GooglePurchase[]
struct GooglePurchaseU5BU5D_tF512B0DC6955BD8A198C9B201BFDCF5B28DAE479;
// System.Text.RegularExpressions.Group[]
struct GroupU5BU5D_tE125DBFFA979634FDDAEDF77F5EC47134D764AB5;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// UnityEngine.Purchasing.Product[]
struct ProductU5BU5D_t1202CB7487EB88A76294BF6E7F42E297D74B8062;
// UnityEngine.Purchasing.Extension.ProductDescription[]
struct ProductDescriptionU5BU5D_t2A77BC327A51622FB3EB0927656D980A1A10EB79;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// System.UInt32[]
struct UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF;
// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E;
// System.Reflection.Assembly
struct Assembly_t;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// System.Text.RegularExpressions.Capture
struct Capture_t048191E7E0D3177DCD8610E4968075AB41FB91D6;
// System.Text.RegularExpressions.CaptureCollection
struct CaptureCollection_t40C06BBACB56CDD5F84860FDC1B0C3D8F160DCF9;
// UnityEngine.Purchasing.CloudCatalogImpl
struct CloudCatalogImpl_t9C2302B12131A65642B2A79FB427DFE4BC07555C;
// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// UnityEngine.Purchasing.EventQueue
struct EventQueue_t6C188E8890A58403E459A3324D685A5328893D6E;
// UnityEngine.GlobalJavaObjectRef
struct GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289;
// UnityEngine.Purchasing.Models.GoogleBillingResult
struct GoogleBillingResult_t7A633E3EF045BC4657A02A94719F1C5A138AEF03;
// UnityEngine.Purchasing.GoogleFetchPurchases
struct GoogleFetchPurchases_tD61A91BFCD91338392F66A52275CA3D78F2840BD;
// UnityEngine.Purchasing.GoogleFinishTransactionService
struct GoogleFinishTransactionService_t27140F1A1D2F1ED6D6A48709F4C7ED82F59F5BCA;
// UnityEngine.Purchasing.GooglePlayStoreRetrieveProductsService
struct GooglePlayStoreRetrieveProductsService_t7F583191AD884C7619CC313AEC29AC049DC4C6BC;
// UnityEngine.Purchasing.Models.GooglePurchase
struct GooglePurchase_tC4FC6BF44D795D5CD95AE000036679F32908721D;
// UnityEngine.Purchasing.Models.GooglePurchaseResult
struct GooglePurchaseResult_t64D9114C2A0E5A7F17657FFA483286C5BF31FCB9;
// UnityEngine.Purchasing.GooglePurchaseService
struct GooglePurchaseService_tDA2297B0DD64F816D878B18CB456CAF9717835BC;
// UnityEngine.Purchasing.GoogleQueryPurchasesService
struct GoogleQueryPurchasesService_t54ECE1F3869C7C8A6CC6F43CA78470160D96ED3B;
// System.Text.RegularExpressions.Group
struct Group_t0B987F132503F2672BC66FCDD21EA8A6EB484883;
// System.Text.RegularExpressions.GroupCollection
struct GroupCollection_tAA9CA4E93B1A9D6B7199EE25AEB32922E72AA556;
// System.Collections.Hashtable
struct Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC;
// UnityEngine.Purchasing.IAsyncWebUtil
struct IAsyncWebUtil_tA0D5FCC41EB96DA1B7C5642C114AC45844F65B76;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// UnityEngine.Purchasing.Interfaces.IGoogleBillingClient
struct IGoogleBillingClient_t2F61E52F880CE5727738B2918996CEE49913880C;
// UnityEngine.Purchasing.IGoogleCachedQuerySkuDetailsService
struct IGoogleCachedQuerySkuDetailsService_t4F7788981ADF1F4BDA6C450EF828D8704AE41BBC;
// UnityEngine.Purchasing.IGoogleFetchPurchases
struct IGoogleFetchPurchases_tE93BA4F77CF1153A252BC4405A9B204D2D5350A6;
// UnityEngine.Purchasing.IGooglePlayConfigurationInternal
struct IGooglePlayConfigurationInternal_tD5334E401ECFCD790B51EC813A67F134409037C0;
// UnityEngine.Purchasing.IGooglePlayStoreFinishTransactionService
struct IGooglePlayStoreFinishTransactionService_tB88AE70B274C8446914BA4AA091666042D718808;
// UnityEngine.Purchasing.Interfaces.IGooglePlayStoreService
struct IGooglePlayStoreService_t4F6CD3A7B484CC618DC16710FF7E65AA2A5471A7;
// UnityEngine.Purchasing.Interfaces.IGooglePurchaseCallback
struct IGooglePurchaseCallback_tF572AEE2451FD6E5B6B966366E2ADE7B17D40A7B;
// UnityEngine.Purchasing.Interfaces.IGoogleQueryPurchasesService
struct IGoogleQueryPurchasesService_t4BCC3384AB44BC387F7349A0F3F58ECCF512E2B9;
// UnityEngine.ILogger
struct ILogger_t25627AC5B51863702868D31972297B7D633B4583;
// UnityEngine.Purchasing.INativeStore
struct INativeStore_t6A2307166DFCEFE4F61714DFAF42A231759E9851;
// UnityEngine.Purchasing.INativeStoreProvider
struct INativeStoreProvider_t82BBF516CDF9E0AF2FF8488ED0CFA71F1207C783;
// UnityEngine.Purchasing.INativeUDPStore
struct INativeUDPStore_tBEDB9A06199F713C1A02FA49086EB0D8BF40FFBA;
// UnityEngine.Purchasing.Extension.IPurchasingBinder
struct IPurchasingBinder_t55347A5ACE1DB3892EEB13D922FD591E238B75E1;
// UnityEngine.Purchasing.Interfaces.IQuerySkuDetailsService
struct IQuerySkuDetailsService_t0189931432E793E2898B5C65B8007699C59206A4;
// UnityEngine.Purchasing.Extension.IStore
struct IStore_tCEF0F12ABAEB669C05EFD4FA40A31BAAC6F4B51E;
// UnityEngine.Purchasing.Extension.IStoreCallback
struct IStoreCallback_t3176FA3F472DF5F252CDB5D87E60B2538A44C05F;
// Uniject.IUtil
struct IUtil_t6D8EF68B604857A8398E5FEF4F042B1CC1EDEC40;
// UnityEngine.Purchasing.LocalizedProductDescription
struct LocalizedProductDescription_t084306637A67ABEF5D8FDA53F200729CCE4C5DE8;
// System.Text.RegularExpressions.Match
struct Match_t8CC0A47F766954F17AD4D1C1597754C8F576464B;
// System.Text.RegularExpressions.MatchEvaluator
struct MatchEvaluator_tF5A86B09324F457929EC459E991709F1A12ADD1D;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// UnityEngine.Purchasing.Price
struct Price_t835C5FA25FC499E8D35900CFDE3CB59C0E0B79A4;
// UnityEngine.Purchasing.Product
struct Product_t8D04681E6E43F5FBB6065B70408B9B0F13B5797E;
// UnityEngine.Purchasing.ProductCatalogItem
struct ProductCatalogItem_t43F0A9F572DE7B1BF46049724A05F9C4C0111280;
// UnityEngine.Purchasing.ProductDefinition
struct ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572;
// UnityEngine.Purchasing.Extension.ProductDescription
struct ProductDescription_t9F14611B4DB2B1E0DAE69236C5C50FE41DDE6C75;
// UnityEngine.Purchasing.ProductMetadata
struct ProductMetadata_tAA2AADD58CE3B832532B471EA80FEE323EB9BF02;
// UnityEngine.Purchasing.ProfileData
struct ProfileData_tDB4F1DECDD2FF8129293C54B6AD46C020C852DCD;
// UnityEngine.Purchasing.Extension.PurchaseFailureDescription
struct PurchaseFailureDescription_tF5204FF61912DF603166BB79C4A10BA5727FBFD8;
// UnityEngine.Purchasing.QuerySkuDetailsService
struct QuerySkuDetailsService_t877F4FEBFAEEDAE6761E1AF7C0FEDB6C5CEF12B1;
// System.Text.RegularExpressions.Regex
struct Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// UnityEngine.Purchasing.ScriptingStoreCallback
struct ScriptingStoreCallback_t201741301803D50F8E0881C5805639CE2F7CB288;
// UnityEngine.Purchasing.StandardPurchasingModule
struct StandardPurchasingModule_t46866896DA828EA4F1EBF9C38C5E3B89FF1E91B6;
// UnityEngine.Purchasing.StoreCatalogImpl
struct StoreCatalogImpl_t96567FD0C4B258150C9CF5FA51D45D25D6AC27FA;
// System.String
struct String_t;
// System.Type
struct Type_t;
// UnityEngine.Purchasing.UDPImpl
struct UDPImpl_t10D6EBBCE4EF9B6215CB108BDF04F75E404277F1;
// UnityEngine.Purchasing.Extension.UnityUtil
struct UnityUtil_t889EAFBFB8290CE278044818482339ED03EA4172;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013;
// UnityEngine.Purchasing.Default.WinProductDescription
struct WinProductDescription_tA1CEDA6F11485CE9F301415C989ECF6A3A8B4829;
// UnityEngine.Purchasing.WinRTStore
struct WinRTStore_t8CDB879BD9F0D28D831A5A89912DCD4966B95326;
// System.Reflection.Assembly/ResolveEventHolder
struct ResolveEventHolder_tA37081FAEBE21D83D216225B4489BA8A37B4E13C;
// UnityEngine.Purchasing.GoogleCachedQuerySkuDetailsService/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_t8B96ADC9CAF8E16784D14AB085C48B73C5219E18;
// UnityEngine.Purchasing.GoogleCachedQuerySkuDetailsService/<>c__DisplayClass4_0
struct U3CU3Ec__DisplayClass4_0_t68BB8B698F47C5C9A54079921D92A7CFF92C8ED0;
// UnityEngine.Purchasing.GoogleFetchPurchases/<>c
struct U3CU3Ec_t8CF44C733C2519A840682FA299C0CA1477C017EB;
// UnityEngine.Purchasing.GoogleFetchPurchases/<>c__DisplayClass6_0
struct U3CU3Ec__DisplayClass6_0_t781F434AB149FECCB6A8076380C33604CADA4501;
// UnityEngine.Purchasing.GoogleFinishTransactionService/<>c__DisplayClass3_0
struct U3CU3Ec__DisplayClass3_0_t3BF37E4D30BE12133B2741139D83ABB561318025;
// UnityEngine.Purchasing.GoogleFinishTransactionService/<>c__DisplayClass4_0
struct U3CU3Ec__DisplayClass4_0_t6345A418534D6DA6A3412796CF288FF96408AF96;
// UnityEngine.Purchasing.GooglePlayStoreExtensions/<>c__DisplayClass9_0
struct U3CU3Ec__DisplayClass9_0_t10F6B900F6EEC9A86793B5D2C2422947E0527021;
// UnityEngine.Purchasing.GooglePlayStoreRetrieveProductsService/<>c__DisplayClass6_0
struct U3CU3Ec__DisplayClass6_0_t78B37EDE769328EC0E183945C9A747D234180D40;
// UnityEngine.Purchasing.GooglePlayStoreRetrieveProductsService/<>c__DisplayClass8_0
struct U3CU3Ec__DisplayClass8_0_t219B79B462F00643C2538E406391C3F55FFD1B53;
// UnityEngine.Purchasing.Utils.GooglePurchaseHelper/<>c__DisplayClass0_0
struct U3CU3Ec__DisplayClass0_0_t7A126D437A23AC83ECEB81C7BB02610E74C19281;
// UnityEngine.Purchasing.GooglePurchaseService/<>c__DisplayClass4_0
struct U3CU3Ec__DisplayClass4_0_tDB423946076B881717411AF2DF97399068B486BF;
// UnityEngine.Purchasing.GoogleQueryPurchasesService/<>c__DisplayClass3_0
struct U3CU3Ec__DisplayClass3_0_t476F14BFD47890861A2F6B75F95E9072EA5176DB;
// UnityEngine.Purchasing.GoogleQueryPurchasesService/<>c__DisplayClass3_1
struct U3CU3Ec__DisplayClass3_1_t9A31BB7393D6B9CFC983953329FD0B70D0487AF3;
// UnityEngine.Purchasing.LocalizedProductDescription/<>c
struct U3CU3Ec_t4E93A11683C5669A4E6B91ABFD5CC9B31E30929E;
// UnityEngine.Purchasing.ProductCatalog/<>c
struct U3CU3Ec_t4BE94DF0E8BD1264DB13776C15A26EA265675AE0;
// UnityEngine.Purchasing.QuerySkuDetailsService/<>c
struct U3CU3Ec_tA145211B409C518BC8732858C266386A65B28D3A;
// UnityEngine.Purchasing.QuerySkuDetailsService/<>c__DisplayClass12_0
struct U3CU3Ec__DisplayClass12_0_t34642B8313D61FFB3DC025660F2334AE41F37A03;
// UnityEngine.Purchasing.QuerySkuDetailsService/<>c__DisplayClass16_0
struct U3CU3Ec__DisplayClass16_0_t01D65697847275ABE80BA8CB4F7E5D425E30EFA8;
// UnityEngine.Purchasing.ScriptingStoreCallback/<>c__DisplayClass10_0
struct U3CU3Ec__DisplayClass10_0_tF466D8FB2F0D0AAA38E7FB5BEB1CEF41E57F96C2;
// UnityEngine.Purchasing.ScriptingStoreCallback/<>c__DisplayClass5_0
struct U3CU3Ec__DisplayClass5_0_t859087A14AE95FD9CA3137ED6A5AD2B5AD954E2D;
// UnityEngine.Purchasing.ScriptingStoreCallback/<>c__DisplayClass6_0
struct U3CU3Ec__DisplayClass6_0_t35E59837B7A8D9A9033DF940B833CA8E375F5974;
// UnityEngine.Purchasing.ScriptingStoreCallback/<>c__DisplayClass7_0
struct U3CU3Ec__DisplayClass7_0_t807EC72F490C70CEB518B7C7199B43D6E9AA54F1;
// UnityEngine.Purchasing.ScriptingStoreCallback/<>c__DisplayClass8_0
struct U3CU3Ec__DisplayClass8_0_tC875F56D08FF4FFE51B8B881279B402786BA4210;
// UnityEngine.Purchasing.StandardPurchasingModule/MicrosoftConfiguration
struct MicrosoftConfiguration_t72E7005BD172865A7745C2935D2880DEFA88317D;
// UnityEngine.Purchasing.StandardPurchasingModule/StoreInstance
struct StoreInstance_t7777C1EA2116BC0443B2557EC19229DD2BFAFDBA;
// UnityEngine.Purchasing.UDPImpl/<>c__DisplayClass10_0
struct U3CU3Ec__DisplayClass10_0_tB18ED9C2044158C2044A084B4D6829E404E0F236;
// UnityEngine.Purchasing.UDPImpl/<>c__DisplayClass11_0
struct U3CU3Ec__DisplayClass11_0_tA52647570260163D1D5F8C1FDA00B24D12D032FA;
// UnityEngine.Purchasing.UDPReflectionUtils/<>c__DisplayClass6_0
struct U3CU3Ec__DisplayClass6_0_tFC02CD6F9A7EFE0BD5EE8356D40FD5373E0DC90D;
// UnityEngine.Purchasing.UIFakeStore/<>c
struct U3CU3Ec_t4C01EB1EC5B633A6C269CEF322D5F130DD02C372;
// UnityEngine.Purchasing.Extension.UnityUtil/<DelayedCoroutine>d__48
struct U3CDelayedCoroutineU3Ed__48_tC4749091BA348052BE31023A7D2F5000281F024C;
// UnityEngine.Purchasing.WinRTStore/<>c
struct U3CU3Ec_t114F9247D6420894D3A5B1652CCBE81140258A1D;

IL2CPP_EXTERN_C RuntimeClass* Action_1_tE42BD9F1180F09C4A76A988DB2ABFE78413236E1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t966BAC51602F8C5C934057BB9A05A4F7224B6672_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t093D7098941DA2C2D107B1D33E81BF0C22E60D10_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IGoogleBillingClient_t2F61E52F880CE5727738B2918996CEE49913880C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ILogger_t25627AC5B51863702868D31972297B7D633B4583_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* INativeUDPStore_tBEDB9A06199F713C1A02FA49086EB0D8BF40FFBA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IStoreCallback_t3176FA3F472DF5F252CDB5D87E60B2538A44C05F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PurchaseFailureDescription_tF5204FF61912DF603166BB79C4A10BA5727FBFD8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PurchaseFailureReason_t92D34AB6DC07828C5204898759640EDFB9336BA5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass3_1_t9A31BB7393D6B9CFC983953329FD0B70D0487AF3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t114F9247D6420894D3A5B1652CCBE81140258A1D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t4BE94DF0E8BD1264DB13776C15A26EA265675AE0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t4C01EB1EC5B633A6C269CEF322D5F130DD02C372_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t4E93A11683C5669A4E6B91ABFD5CC9B31E30929E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t8CF44C733C2519A840682FA299C0CA1477C017EB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tA145211B409C518BC8732858C266386A65B28D3A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WinProductDescription_tA1CEDA6F11485CE9F301415C989ECF6A3A8B4829_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0E62453B16F3139996684F414345A0A54FA64728;
IL2CPP_EXTERN_C String_t* _stringLiteral1A569D2EAEB9C57AE0D180CFA9396A30C0267A44;
IL2CPP_EXTERN_C String_t* _stringLiteral1F129F58A8DCA2BAC1980E37CE73EDC57F778345;
IL2CPP_EXTERN_C String_t* _stringLiteral283A5E2C7FF2F98F76268C8CFB12CA428D08EF99;
IL2CPP_EXTERN_C String_t* _stringLiteral3BA59C4AA7C2F6DD8728F78A4194DD324111ABC1;
IL2CPP_EXTERN_C String_t* _stringLiteral4B410F5F43A4714AE6474DB2282523C7FBE75CD1;
IL2CPP_EXTERN_C String_t* _stringLiteral5D54E959817188DBAD9E65FA3DB55F06B70F5E3C;
IL2CPP_EXTERN_C String_t* _stringLiteral6102B784A4463F5BB7820485F8B488B85D030E83;
IL2CPP_EXTERN_C String_t* _stringLiteral74320907E0EFDCA8532E8CBD2C1A2910BB8C42D7;
IL2CPP_EXTERN_C String_t* _stringLiteral7FF9A5D883AC2EEA2F31FEECA02D6C53D5F533B1;
IL2CPP_EXTERN_C String_t* _stringLiteral86FADB31129B6F40C720A97600D69389EA3567E3;
IL2CPP_EXTERN_C String_t* _stringLiteral8C99461589CBC42FE28D0A29D20F63D0EE7E6E00;
IL2CPP_EXTERN_C String_t* _stringLiteral9783048DDA4A8100EAD15B60BE4922DE458E77F8;
IL2CPP_EXTERN_C String_t* _stringLiteralC0FB8B944A767E1AACE82F930D95E69ED912ADAD;
IL2CPP_EXTERN_C String_t* _stringLiteralC4FD5B06A6B7174802B6D991C7560C98FB781820;
IL2CPP_EXTERN_C String_t* _stringLiteralD07477ECD3017EFC4D04A75EB58245BE024730D9;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralF70186B9E93B040BE74228E43B2D0DFEECC9C509;
IL2CPP_EXTERN_C String_t* _stringLiteralFCA74A9060DDEE6A3ECAE73E6AB96086770BE7E2;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_m012CAFE53B000741A27D5B8DCA44D334403A2590_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_m94B1D693386EA0BD3C636939BDCE375EDEF91A04_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_mFBAC4A7CADCDF3E6A6D0CEA223DC4F858FD7DC1A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisString_t_mE0E9BE21A1938D675DA63B376682D54E3B36AF0E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisRuntimeObject_m002765312BF306B1B3B5BFAB9550C0A2A1820CDA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m3C1B28325435E61FFAD431E314EABF915B79A55E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mCD0C2F0325B7677B9BC340A60AA3FB9C7A88FF63_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m012F321188703DCCB5C4F99C5A5AA2FA31A98144_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Where_TisGooglePurchase_tC4FC6BF44D795D5CD95AE000036679F32908721D_m433146C0349EB11DEB6509DD7D51E7801FB8FB19_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CDelayedCoroutineU3Ed__48_System_Collections_IEnumerator_Reset_m89C455992E8BC0F988D97894649B211833E2A406_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass3_1_U3CQueryPurchasesU3Eb__1_mBFC73B663DCC26ACC14A8F17A74F04C9290BDC0A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* PurchaseFailureReason_t92D34AB6DC07828C5204898759640EDFB9336BA5_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


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


// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4  : public RuntimeObject
{
public:

public:
};

struct EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4_StaticFields
{
public:
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4_StaticFields, ___Value_0)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_Value_0() const { return ___Value_0; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Value_0), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.AndroidJavaObject>
struct List_1_t911FB7A3288EAACB1E70E61FB84793A19DDB716B  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t911FB7A3288EAACB1E70E61FB84793A19DDB716B, ____items_1)); }
	inline AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120* get__items_1() const { return ____items_1; }
	inline AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t911FB7A3288EAACB1E70E61FB84793A19DDB716B, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t911FB7A3288EAACB1E70E61FB84793A19DDB716B, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t911FB7A3288EAACB1E70E61FB84793A19DDB716B, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t911FB7A3288EAACB1E70E61FB84793A19DDB716B_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t911FB7A3288EAACB1E70E61FB84793A19DDB716B_StaticFields, ____emptyArray_5)); }
	inline AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120* get__emptyArray_5() const { return ____emptyArray_5; }
	inline AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Purchasing.Models.GooglePurchase>
struct List_1_tC18F59C75A96198914A4AF87DDEBD3D2DFE05E3A  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	GooglePurchaseU5BU5D_tF512B0DC6955BD8A198C9B201BFDCF5B28DAE479* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tC18F59C75A96198914A4AF87DDEBD3D2DFE05E3A, ____items_1)); }
	inline GooglePurchaseU5BU5D_tF512B0DC6955BD8A198C9B201BFDCF5B28DAE479* get__items_1() const { return ____items_1; }
	inline GooglePurchaseU5BU5D_tF512B0DC6955BD8A198C9B201BFDCF5B28DAE479** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(GooglePurchaseU5BU5D_tF512B0DC6955BD8A198C9B201BFDCF5B28DAE479* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tC18F59C75A96198914A4AF87DDEBD3D2DFE05E3A, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tC18F59C75A96198914A4AF87DDEBD3D2DFE05E3A, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tC18F59C75A96198914A4AF87DDEBD3D2DFE05E3A, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tC18F59C75A96198914A4AF87DDEBD3D2DFE05E3A_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	GooglePurchaseU5BU5D_tF512B0DC6955BD8A198C9B201BFDCF5B28DAE479* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tC18F59C75A96198914A4AF87DDEBD3D2DFE05E3A_StaticFields, ____emptyArray_5)); }
	inline GooglePurchaseU5BU5D_tF512B0DC6955BD8A198C9B201BFDCF5B28DAE479* get__emptyArray_5() const { return ____emptyArray_5; }
	inline GooglePurchaseU5BU5D_tF512B0DC6955BD8A198C9B201BFDCF5B28DAE479** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(GooglePurchaseU5BU5D_tF512B0DC6955BD8A198C9B201BFDCF5B28DAE479* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Purchasing.Product>
struct List_1_tD6CD4E5E39E75EE330B0C6DB8A7A0AEE4966D8AA  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ProductU5BU5D_t1202CB7487EB88A76294BF6E7F42E297D74B8062* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tD6CD4E5E39E75EE330B0C6DB8A7A0AEE4966D8AA, ____items_1)); }
	inline ProductU5BU5D_t1202CB7487EB88A76294BF6E7F42E297D74B8062* get__items_1() const { return ____items_1; }
	inline ProductU5BU5D_t1202CB7487EB88A76294BF6E7F42E297D74B8062** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ProductU5BU5D_t1202CB7487EB88A76294BF6E7F42E297D74B8062* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tD6CD4E5E39E75EE330B0C6DB8A7A0AEE4966D8AA, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tD6CD4E5E39E75EE330B0C6DB8A7A0AEE4966D8AA, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tD6CD4E5E39E75EE330B0C6DB8A7A0AEE4966D8AA, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tD6CD4E5E39E75EE330B0C6DB8A7A0AEE4966D8AA_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ProductU5BU5D_t1202CB7487EB88A76294BF6E7F42E297D74B8062* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tD6CD4E5E39E75EE330B0C6DB8A7A0AEE4966D8AA_StaticFields, ____emptyArray_5)); }
	inline ProductU5BU5D_t1202CB7487EB88A76294BF6E7F42E297D74B8062* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ProductU5BU5D_t1202CB7487EB88A76294BF6E7F42E297D74B8062** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ProductU5BU5D_t1202CB7487EB88A76294BF6E7F42E297D74B8062* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Purchasing.Extension.ProductDescription>
struct List_1_t293A9B62DF9E931D44BF8E69475D79D308B627FF  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ProductDescriptionU5BU5D_t2A77BC327A51622FB3EB0927656D980A1A10EB79* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t293A9B62DF9E931D44BF8E69475D79D308B627FF, ____items_1)); }
	inline ProductDescriptionU5BU5D_t2A77BC327A51622FB3EB0927656D980A1A10EB79* get__items_1() const { return ____items_1; }
	inline ProductDescriptionU5BU5D_t2A77BC327A51622FB3EB0927656D980A1A10EB79** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ProductDescriptionU5BU5D_t2A77BC327A51622FB3EB0927656D980A1A10EB79* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t293A9B62DF9E931D44BF8E69475D79D308B627FF, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t293A9B62DF9E931D44BF8E69475D79D308B627FF, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t293A9B62DF9E931D44BF8E69475D79D308B627FF, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t293A9B62DF9E931D44BF8E69475D79D308B627FF_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ProductDescriptionU5BU5D_t2A77BC327A51622FB3EB0927656D980A1A10EB79* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t293A9B62DF9E931D44BF8E69475D79D308B627FF_StaticFields, ____emptyArray_5)); }
	inline ProductDescriptionU5BU5D_t2A77BC327A51622FB3EB0927656D980A1A10EB79* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ProductDescriptionU5BU5D_t2A77BC327A51622FB3EB0927656D980A1A10EB79** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ProductDescriptionU5BU5D_t2A77BC327A51622FB3EB0927656D980A1A10EB79* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Purchasing.ProductDefinition>
struct ReadOnlyCollection_1_tA17CC77D8AB24DD29DF396C7B3CC305302C189C3  : public RuntimeObject
{
public:
	// System.Collections.Generic.IList`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1::list
	RuntimeObject* ___list_0;
	// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1::_syncRoot
	RuntimeObject * ____syncRoot_1;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(ReadOnlyCollection_1_tA17CC77D8AB24DD29DF396C7B3CC305302C189C3, ___list_0)); }
	inline RuntimeObject* get_list_0() const { return ___list_0; }
	inline RuntimeObject** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(RuntimeObject* value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_1() { return static_cast<int32_t>(offsetof(ReadOnlyCollection_1_tA17CC77D8AB24DD29DF396C7B3CC305302C189C3, ____syncRoot_1)); }
	inline RuntimeObject * get__syncRoot_1() const { return ____syncRoot_1; }
	inline RuntimeObject ** get_address_of__syncRoot_1() { return &____syncRoot_1; }
	inline void set__syncRoot_1(RuntimeObject * value)
	{
		____syncRoot_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_1), (void*)value);
	}
};


// UnityEngine.Purchasing.Extension.AbstractPurchasingModule
struct AbstractPurchasingModule_tE97233CECF61E1D47FE937203B395835774FBB04  : public RuntimeObject
{
public:
	// UnityEngine.Purchasing.Extension.IPurchasingBinder UnityEngine.Purchasing.Extension.AbstractPurchasingModule::m_Binder
	RuntimeObject* ___m_Binder_0;

public:
	inline static int32_t get_offset_of_m_Binder_0() { return static_cast<int32_t>(offsetof(AbstractPurchasingModule_tE97233CECF61E1D47FE937203B395835774FBB04, ___m_Binder_0)); }
	inline RuntimeObject* get_m_Binder_0() const { return ___m_Binder_0; }
	inline RuntimeObject** get_address_of_m_Binder_0() { return &___m_Binder_0; }
	inline void set_m_Binder_0(RuntimeObject* value)
	{
		___m_Binder_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Binder_0), (void*)value);
	}
};


// UnityEngine.Purchasing.Extension.AbstractStore
struct AbstractStore_tB0FD374A2E9858EB3A2DC721CBA280409F9485C0  : public RuntimeObject
{
public:

public:
};


// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E  : public RuntimeObject
{
public:
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jobject
	GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * ___m_jobject_1;
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jclass
	GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * ___m_jclass_2;

public:
	inline static int32_t get_offset_of_m_jobject_1() { return static_cast<int32_t>(offsetof(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E, ___m_jobject_1)); }
	inline GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * get_m_jobject_1() const { return ___m_jobject_1; }
	inline GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 ** get_address_of_m_jobject_1() { return &___m_jobject_1; }
	inline void set_m_jobject_1(GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * value)
	{
		___m_jobject_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_jobject_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_jclass_2() { return static_cast<int32_t>(offsetof(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E, ___m_jclass_2)); }
	inline GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * get_m_jclass_2() const { return ___m_jclass_2; }
	inline GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 ** get_address_of_m_jclass_2() { return &___m_jclass_2; }
	inline void set_m_jclass_2(GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * value)
	{
		___m_jclass_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_jclass_2), (void*)value);
	}
};

struct AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_StaticFields
{
public:
	// System.Boolean UnityEngine.AndroidJavaObject::enableDebugPrints
	bool ___enableDebugPrints_0;

public:
	inline static int32_t get_offset_of_enableDebugPrints_0() { return static_cast<int32_t>(offsetof(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_StaticFields, ___enableDebugPrints_0)); }
	inline bool get_enableDebugPrints_0() const { return ___enableDebugPrints_0; }
	inline bool* get_address_of_enableDebugPrints_0() { return &___enableDebugPrints_0; }
	inline void set_enableDebugPrints_0(bool value)
	{
		___enableDebugPrints_0 = value;
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Text.RegularExpressions.Capture
struct Capture_t048191E7E0D3177DCD8610E4968075AB41FB91D6  : public RuntimeObject
{
public:
	// System.String System.Text.RegularExpressions.Capture::_text
	String_t* ____text_0;
	// System.Int32 System.Text.RegularExpressions.Capture::_index
	int32_t ____index_1;
	// System.Int32 System.Text.RegularExpressions.Capture::_length
	int32_t ____length_2;

public:
	inline static int32_t get_offset_of__text_0() { return static_cast<int32_t>(offsetof(Capture_t048191E7E0D3177DCD8610E4968075AB41FB91D6, ____text_0)); }
	inline String_t* get__text_0() const { return ____text_0; }
	inline String_t** get_address_of__text_0() { return &____text_0; }
	inline void set__text_0(String_t* value)
	{
		____text_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____text_0), (void*)value);
	}

	inline static int32_t get_offset_of__index_1() { return static_cast<int32_t>(offsetof(Capture_t048191E7E0D3177DCD8610E4968075AB41FB91D6, ____index_1)); }
	inline int32_t get__index_1() const { return ____index_1; }
	inline int32_t* get_address_of__index_1() { return &____index_1; }
	inline void set__index_1(int32_t value)
	{
		____index_1 = value;
	}

	inline static int32_t get_offset_of__length_2() { return static_cast<int32_t>(offsetof(Capture_t048191E7E0D3177DCD8610E4968075AB41FB91D6, ____length_2)); }
	inline int32_t get__length_2() const { return ____length_2; }
	inline int32_t* get_address_of__length_2() { return &____length_2; }
	inline void set__length_2(int32_t value)
	{
		____length_2 = value;
	}
};


// UnityEngine.Purchasing.GoogleFetchPurchases
struct GoogleFetchPurchases_tD61A91BFCD91338392F66A52275CA3D78F2840BD  : public RuntimeObject
{
public:
	// UnityEngine.Purchasing.Interfaces.IGooglePlayStoreService UnityEngine.Purchasing.GoogleFetchPurchases::m_GooglePlayStoreService
	RuntimeObject* ___m_GooglePlayStoreService_0;
	// UnityEngine.Purchasing.IGooglePlayStoreFinishTransactionService UnityEngine.Purchasing.GoogleFetchPurchases::m_TransactionService
	RuntimeObject* ___m_TransactionService_1;
	// UnityEngine.Purchasing.Extension.IStoreCallback UnityEngine.Purchasing.GoogleFetchPurchases::m_StoreCallback
	RuntimeObject* ___m_StoreCallback_2;

public:
	inline static int32_t get_offset_of_m_GooglePlayStoreService_0() { return static_cast<int32_t>(offsetof(GoogleFetchPurchases_tD61A91BFCD91338392F66A52275CA3D78F2840BD, ___m_GooglePlayStoreService_0)); }
	inline RuntimeObject* get_m_GooglePlayStoreService_0() const { return ___m_GooglePlayStoreService_0; }
	inline RuntimeObject** get_address_of_m_GooglePlayStoreService_0() { return &___m_GooglePlayStoreService_0; }
	inline void set_m_GooglePlayStoreService_0(RuntimeObject* value)
	{
		___m_GooglePlayStoreService_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_GooglePlayStoreService_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_TransactionService_1() { return static_cast<int32_t>(offsetof(GoogleFetchPurchases_tD61A91BFCD91338392F66A52275CA3D78F2840BD, ___m_TransactionService_1)); }
	inline RuntimeObject* get_m_TransactionService_1() const { return ___m_TransactionService_1; }
	inline RuntimeObject** get_address_of_m_TransactionService_1() { return &___m_TransactionService_1; }
	inline void set_m_TransactionService_1(RuntimeObject* value)
	{
		___m_TransactionService_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TransactionService_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_StoreCallback_2() { return static_cast<int32_t>(offsetof(GoogleFetchPurchases_tD61A91BFCD91338392F66A52275CA3D78F2840BD, ___m_StoreCallback_2)); }
	inline RuntimeObject* get_m_StoreCallback_2() const { return ___m_StoreCallback_2; }
	inline RuntimeObject** get_address_of_m_StoreCallback_2() { return &___m_StoreCallback_2; }
	inline void set_m_StoreCallback_2(RuntimeObject* value)
	{
		___m_StoreCallback_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_StoreCallback_2), (void*)value);
	}
};


// UnityEngine.Purchasing.GoogleFinishTransactionService
struct GoogleFinishTransactionService_t27140F1A1D2F1ED6D6A48709F4C7ED82F59F5BCA  : public RuntimeObject
{
public:
	// UnityEngine.Purchasing.Interfaces.IGoogleBillingClient UnityEngine.Purchasing.GoogleFinishTransactionService::m_BillingClient
	RuntimeObject* ___m_BillingClient_0;
	// UnityEngine.Purchasing.Interfaces.IGoogleQueryPurchasesService UnityEngine.Purchasing.GoogleFinishTransactionService::m_GoogleQueryPurchasesService
	RuntimeObject* ___m_GoogleQueryPurchasesService_1;

public:
	inline static int32_t get_offset_of_m_BillingClient_0() { return static_cast<int32_t>(offsetof(GoogleFinishTransactionService_t27140F1A1D2F1ED6D6A48709F4C7ED82F59F5BCA, ___m_BillingClient_0)); }
	inline RuntimeObject* get_m_BillingClient_0() const { return ___m_BillingClient_0; }
	inline RuntimeObject** get_address_of_m_BillingClient_0() { return &___m_BillingClient_0; }
	inline void set_m_BillingClient_0(RuntimeObject* value)
	{
		___m_BillingClient_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_BillingClient_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_GoogleQueryPurchasesService_1() { return static_cast<int32_t>(offsetof(GoogleFinishTransactionService_t27140F1A1D2F1ED6D6A48709F4C7ED82F59F5BCA, ___m_GoogleQueryPurchasesService_1)); }
	inline RuntimeObject* get_m_GoogleQueryPurchasesService_1() const { return ___m_GoogleQueryPurchasesService_1; }
	inline RuntimeObject** get_address_of_m_GoogleQueryPurchasesService_1() { return &___m_GoogleQueryPurchasesService_1; }
	inline void set_m_GoogleQueryPurchasesService_1(RuntimeObject* value)
	{
		___m_GoogleQueryPurchasesService_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_GoogleQueryPurchasesService_1), (void*)value);
	}
};


// UnityEngine.Purchasing.GooglePlayStoreRetrieveProductsService
struct GooglePlayStoreRetrieveProductsService_t7F583191AD884C7619CC313AEC29AC049DC4C6BC  : public RuntimeObject
{
public:
	// UnityEngine.Purchasing.Interfaces.IGooglePlayStoreService UnityEngine.Purchasing.GooglePlayStoreRetrieveProductsService::m_GooglePlayStoreService
	RuntimeObject* ___m_GooglePlayStoreService_0;
	// UnityEngine.Purchasing.IGoogleFetchPurchases UnityEngine.Purchasing.GooglePlayStoreRetrieveProductsService::m_GoogleFetchPurchases
	RuntimeObject* ___m_GoogleFetchPurchases_1;
	// UnityEngine.Purchasing.Extension.IStoreCallback UnityEngine.Purchasing.GooglePlayStoreRetrieveProductsService::m_StoreCallback
	RuntimeObject* ___m_StoreCallback_2;
	// UnityEngine.Purchasing.IGooglePlayConfigurationInternal UnityEngine.Purchasing.GooglePlayStoreRetrieveProductsService::m_GooglePlayConfigurationInternal
	RuntimeObject* ___m_GooglePlayConfigurationInternal_3;

public:
	inline static int32_t get_offset_of_m_GooglePlayStoreService_0() { return static_cast<int32_t>(offsetof(GooglePlayStoreRetrieveProductsService_t7F583191AD884C7619CC313AEC29AC049DC4C6BC, ___m_GooglePlayStoreService_0)); }
	inline RuntimeObject* get_m_GooglePlayStoreService_0() const { return ___m_GooglePlayStoreService_0; }
	inline RuntimeObject** get_address_of_m_GooglePlayStoreService_0() { return &___m_GooglePlayStoreService_0; }
	inline void set_m_GooglePlayStoreService_0(RuntimeObject* value)
	{
		___m_GooglePlayStoreService_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_GooglePlayStoreService_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_GoogleFetchPurchases_1() { return static_cast<int32_t>(offsetof(GooglePlayStoreRetrieveProductsService_t7F583191AD884C7619CC313AEC29AC049DC4C6BC, ___m_GoogleFetchPurchases_1)); }
	inline RuntimeObject* get_m_GoogleFetchPurchases_1() const { return ___m_GoogleFetchPurchases_1; }
	inline RuntimeObject** get_address_of_m_GoogleFetchPurchases_1() { return &___m_GoogleFetchPurchases_1; }
	inline void set_m_GoogleFetchPurchases_1(RuntimeObject* value)
	{
		___m_GoogleFetchPurchases_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_GoogleFetchPurchases_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_StoreCallback_2() { return static_cast<int32_t>(offsetof(GooglePlayStoreRetrieveProductsService_t7F583191AD884C7619CC313AEC29AC049DC4C6BC, ___m_StoreCallback_2)); }
	inline RuntimeObject* get_m_StoreCallback_2() const { return ___m_StoreCallback_2; }
	inline RuntimeObject** get_address_of_m_StoreCallback_2() { return &___m_StoreCallback_2; }
	inline void set_m_StoreCallback_2(RuntimeObject* value)
	{
		___m_StoreCallback_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_StoreCallback_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_GooglePlayConfigurationInternal_3() { return static_cast<int32_t>(offsetof(GooglePlayStoreRetrieveProductsService_t7F583191AD884C7619CC313AEC29AC049DC4C6BC, ___m_GooglePlayConfigurationInternal_3)); }
	inline RuntimeObject* get_m_GooglePlayConfigurationInternal_3() const { return ___m_GooglePlayConfigurationInternal_3; }
	inline RuntimeObject** get_address_of_m_GooglePlayConfigurationInternal_3() { return &___m_GooglePlayConfigurationInternal_3; }
	inline void set_m_GooglePlayConfigurationInternal_3(RuntimeObject* value)
	{
		___m_GooglePlayConfigurationInternal_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_GooglePlayConfigurationInternal_3), (void*)value);
	}
};


// UnityEngine.Purchasing.Models.GooglePurchase
struct GooglePurchase_tC4FC6BF44D795D5CD95AE000036679F32908721D  : public RuntimeObject
{
public:
	// UnityEngine.AndroidJavaObject UnityEngine.Purchasing.Models.GooglePurchase::javaPurchase
	AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * ___javaPurchase_0;
	// System.Int32 UnityEngine.Purchasing.Models.GooglePurchase::purchaseState
	int32_t ___purchaseState_1;
	// System.String UnityEngine.Purchasing.Models.GooglePurchase::sku
	String_t* ___sku_2;
	// System.String UnityEngine.Purchasing.Models.GooglePurchase::orderId
	String_t* ___orderId_3;
	// System.String UnityEngine.Purchasing.Models.GooglePurchase::receipt
	String_t* ___receipt_4;
	// System.String UnityEngine.Purchasing.Models.GooglePurchase::signature
	String_t* ___signature_5;
	// System.String UnityEngine.Purchasing.Models.GooglePurchase::originalJson
	String_t* ___originalJson_6;
	// System.String UnityEngine.Purchasing.Models.GooglePurchase::purchaseToken
	String_t* ___purchaseToken_7;

public:
	inline static int32_t get_offset_of_javaPurchase_0() { return static_cast<int32_t>(offsetof(GooglePurchase_tC4FC6BF44D795D5CD95AE000036679F32908721D, ___javaPurchase_0)); }
	inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * get_javaPurchase_0() const { return ___javaPurchase_0; }
	inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E ** get_address_of_javaPurchase_0() { return &___javaPurchase_0; }
	inline void set_javaPurchase_0(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * value)
	{
		___javaPurchase_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___javaPurchase_0), (void*)value);
	}

	inline static int32_t get_offset_of_purchaseState_1() { return static_cast<int32_t>(offsetof(GooglePurchase_tC4FC6BF44D795D5CD95AE000036679F32908721D, ___purchaseState_1)); }
	inline int32_t get_purchaseState_1() const { return ___purchaseState_1; }
	inline int32_t* get_address_of_purchaseState_1() { return &___purchaseState_1; }
	inline void set_purchaseState_1(int32_t value)
	{
		___purchaseState_1 = value;
	}

	inline static int32_t get_offset_of_sku_2() { return static_cast<int32_t>(offsetof(GooglePurchase_tC4FC6BF44D795D5CD95AE000036679F32908721D, ___sku_2)); }
	inline String_t* get_sku_2() const { return ___sku_2; }
	inline String_t** get_address_of_sku_2() { return &___sku_2; }
	inline void set_sku_2(String_t* value)
	{
		___sku_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sku_2), (void*)value);
	}

	inline static int32_t get_offset_of_orderId_3() { return static_cast<int32_t>(offsetof(GooglePurchase_tC4FC6BF44D795D5CD95AE000036679F32908721D, ___orderId_3)); }
	inline String_t* get_orderId_3() const { return ___orderId_3; }
	inline String_t** get_address_of_orderId_3() { return &___orderId_3; }
	inline void set_orderId_3(String_t* value)
	{
		___orderId_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___orderId_3), (void*)value);
	}

	inline static int32_t get_offset_of_receipt_4() { return static_cast<int32_t>(offsetof(GooglePurchase_tC4FC6BF44D795D5CD95AE000036679F32908721D, ___receipt_4)); }
	inline String_t* get_receipt_4() const { return ___receipt_4; }
	inline String_t** get_address_of_receipt_4() { return &___receipt_4; }
	inline void set_receipt_4(String_t* value)
	{
		___receipt_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___receipt_4), (void*)value);
	}

	inline static int32_t get_offset_of_signature_5() { return static_cast<int32_t>(offsetof(GooglePurchase_tC4FC6BF44D795D5CD95AE000036679F32908721D, ___signature_5)); }
	inline String_t* get_signature_5() const { return ___signature_5; }
	inline String_t** get_address_of_signature_5() { return &___signature_5; }
	inline void set_signature_5(String_t* value)
	{
		___signature_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___signature_5), (void*)value);
	}

	inline static int32_t get_offset_of_originalJson_6() { return static_cast<int32_t>(offsetof(GooglePurchase_tC4FC6BF44D795D5CD95AE000036679F32908721D, ___originalJson_6)); }
	inline String_t* get_originalJson_6() const { return ___originalJson_6; }
	inline String_t** get_address_of_originalJson_6() { return &___originalJson_6; }
	inline void set_originalJson_6(String_t* value)
	{
		___originalJson_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___originalJson_6), (void*)value);
	}

	inline static int32_t get_offset_of_purchaseToken_7() { return static_cast<int32_t>(offsetof(GooglePurchase_tC4FC6BF44D795D5CD95AE000036679F32908721D, ___purchaseToken_7)); }
	inline String_t* get_purchaseToken_7() const { return ___purchaseToken_7; }
	inline String_t** get_address_of_purchaseToken_7() { return &___purchaseToken_7; }
	inline void set_purchaseToken_7(String_t* value)
	{
		___purchaseToken_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___purchaseToken_7), (void*)value);
	}
};


// UnityEngine.Purchasing.Models.GooglePurchaseResult
struct GooglePurchaseResult_t64D9114C2A0E5A7F17657FFA483286C5BF31FCB9  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.Purchasing.Models.GooglePurchaseResult::m_ResponseCode
	int32_t ___m_ResponseCode_0;
	// System.Collections.Generic.List`1<UnityEngine.Purchasing.Models.GooglePurchase> UnityEngine.Purchasing.Models.GooglePurchaseResult::m_Purchases
	List_1_tC18F59C75A96198914A4AF87DDEBD3D2DFE05E3A * ___m_Purchases_1;

public:
	inline static int32_t get_offset_of_m_ResponseCode_0() { return static_cast<int32_t>(offsetof(GooglePurchaseResult_t64D9114C2A0E5A7F17657FFA483286C5BF31FCB9, ___m_ResponseCode_0)); }
	inline int32_t get_m_ResponseCode_0() const { return ___m_ResponseCode_0; }
	inline int32_t* get_address_of_m_ResponseCode_0() { return &___m_ResponseCode_0; }
	inline void set_m_ResponseCode_0(int32_t value)
	{
		___m_ResponseCode_0 = value;
	}

	inline static int32_t get_offset_of_m_Purchases_1() { return static_cast<int32_t>(offsetof(GooglePurchaseResult_t64D9114C2A0E5A7F17657FFA483286C5BF31FCB9, ___m_Purchases_1)); }
	inline List_1_tC18F59C75A96198914A4AF87DDEBD3D2DFE05E3A * get_m_Purchases_1() const { return ___m_Purchases_1; }
	inline List_1_tC18F59C75A96198914A4AF87DDEBD3D2DFE05E3A ** get_address_of_m_Purchases_1() { return &___m_Purchases_1; }
	inline void set_m_Purchases_1(List_1_tC18F59C75A96198914A4AF87DDEBD3D2DFE05E3A * value)
	{
		___m_Purchases_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Purchases_1), (void*)value);
	}
};


// UnityEngine.Purchasing.GooglePurchaseService
struct GooglePurchaseService_tDA2297B0DD64F816D878B18CB456CAF9717835BC  : public RuntimeObject
{
public:
	// UnityEngine.Purchasing.Interfaces.IGoogleBillingClient UnityEngine.Purchasing.GooglePurchaseService::m_BillingClient
	RuntimeObject* ___m_BillingClient_0;
	// UnityEngine.Purchasing.Interfaces.IGooglePurchaseCallback UnityEngine.Purchasing.GooglePurchaseService::m_GooglePurchaseCallback
	RuntimeObject* ___m_GooglePurchaseCallback_1;
	// UnityEngine.Purchasing.Interfaces.IQuerySkuDetailsService UnityEngine.Purchasing.GooglePurchaseService::m_QuerySkuDetailsService
	RuntimeObject* ___m_QuerySkuDetailsService_2;

public:
	inline static int32_t get_offset_of_m_BillingClient_0() { return static_cast<int32_t>(offsetof(GooglePurchaseService_tDA2297B0DD64F816D878B18CB456CAF9717835BC, ___m_BillingClient_0)); }
	inline RuntimeObject* get_m_BillingClient_0() const { return ___m_BillingClient_0; }
	inline RuntimeObject** get_address_of_m_BillingClient_0() { return &___m_BillingClient_0; }
	inline void set_m_BillingClient_0(RuntimeObject* value)
	{
		___m_BillingClient_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_BillingClient_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_GooglePurchaseCallback_1() { return static_cast<int32_t>(offsetof(GooglePurchaseService_tDA2297B0DD64F816D878B18CB456CAF9717835BC, ___m_GooglePurchaseCallback_1)); }
	inline RuntimeObject* get_m_GooglePurchaseCallback_1() const { return ___m_GooglePurchaseCallback_1; }
	inline RuntimeObject** get_address_of_m_GooglePurchaseCallback_1() { return &___m_GooglePurchaseCallback_1; }
	inline void set_m_GooglePurchaseCallback_1(RuntimeObject* value)
	{
		___m_GooglePurchaseCallback_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_GooglePurchaseCallback_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_QuerySkuDetailsService_2() { return static_cast<int32_t>(offsetof(GooglePurchaseService_tDA2297B0DD64F816D878B18CB456CAF9717835BC, ___m_QuerySkuDetailsService_2)); }
	inline RuntimeObject* get_m_QuerySkuDetailsService_2() const { return ___m_QuerySkuDetailsService_2; }
	inline RuntimeObject** get_address_of_m_QuerySkuDetailsService_2() { return &___m_QuerySkuDetailsService_2; }
	inline void set_m_QuerySkuDetailsService_2(RuntimeObject* value)
	{
		___m_QuerySkuDetailsService_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_QuerySkuDetailsService_2), (void*)value);
	}
};


// UnityEngine.Purchasing.GoogleQueryPurchasesService
struct GoogleQueryPurchasesService_t54ECE1F3869C7C8A6CC6F43CA78470160D96ED3B  : public RuntimeObject
{
public:
	// UnityEngine.Purchasing.Interfaces.IGoogleBillingClient UnityEngine.Purchasing.GoogleQueryPurchasesService::m_BillingClient
	RuntimeObject* ___m_BillingClient_0;
	// UnityEngine.Purchasing.IGoogleCachedQuerySkuDetailsService UnityEngine.Purchasing.GoogleQueryPurchasesService::m_CachedQuerySkuDetailsService
	RuntimeObject* ___m_CachedQuerySkuDetailsService_1;

public:
	inline static int32_t get_offset_of_m_BillingClient_0() { return static_cast<int32_t>(offsetof(GoogleQueryPurchasesService_t54ECE1F3869C7C8A6CC6F43CA78470160D96ED3B, ___m_BillingClient_0)); }
	inline RuntimeObject* get_m_BillingClient_0() const { return ___m_BillingClient_0; }
	inline RuntimeObject** get_address_of_m_BillingClient_0() { return &___m_BillingClient_0; }
	inline void set_m_BillingClient_0(RuntimeObject* value)
	{
		___m_BillingClient_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_BillingClient_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedQuerySkuDetailsService_1() { return static_cast<int32_t>(offsetof(GoogleQueryPurchasesService_t54ECE1F3869C7C8A6CC6F43CA78470160D96ED3B, ___m_CachedQuerySkuDetailsService_1)); }
	inline RuntimeObject* get_m_CachedQuerySkuDetailsService_1() const { return ___m_CachedQuerySkuDetailsService_1; }
	inline RuntimeObject** get_address_of_m_CachedQuerySkuDetailsService_1() { return &___m_CachedQuerySkuDetailsService_1; }
	inline void set_m_CachedQuerySkuDetailsService_1(RuntimeObject* value)
	{
		___m_CachedQuerySkuDetailsService_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedQuerySkuDetailsService_1), (void*)value);
	}
};


// System.Text.RegularExpressions.GroupCollection
struct GroupCollection_tAA9CA4E93B1A9D6B7199EE25AEB32922E72AA556  : public RuntimeObject
{
public:
	// System.Text.RegularExpressions.Match System.Text.RegularExpressions.GroupCollection::_match
	Match_t8CC0A47F766954F17AD4D1C1597754C8F576464B * ____match_0;
	// System.Collections.Hashtable System.Text.RegularExpressions.GroupCollection::_captureMap
	Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * ____captureMap_1;
	// System.Text.RegularExpressions.Group[] System.Text.RegularExpressions.GroupCollection::_groups
	GroupU5BU5D_tE125DBFFA979634FDDAEDF77F5EC47134D764AB5* ____groups_2;

public:
	inline static int32_t get_offset_of__match_0() { return static_cast<int32_t>(offsetof(GroupCollection_tAA9CA4E93B1A9D6B7199EE25AEB32922E72AA556, ____match_0)); }
	inline Match_t8CC0A47F766954F17AD4D1C1597754C8F576464B * get__match_0() const { return ____match_0; }
	inline Match_t8CC0A47F766954F17AD4D1C1597754C8F576464B ** get_address_of__match_0() { return &____match_0; }
	inline void set__match_0(Match_t8CC0A47F766954F17AD4D1C1597754C8F576464B * value)
	{
		____match_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____match_0), (void*)value);
	}

	inline static int32_t get_offset_of__captureMap_1() { return static_cast<int32_t>(offsetof(GroupCollection_tAA9CA4E93B1A9D6B7199EE25AEB32922E72AA556, ____captureMap_1)); }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * get__captureMap_1() const { return ____captureMap_1; }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC ** get_address_of__captureMap_1() { return &____captureMap_1; }
	inline void set__captureMap_1(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * value)
	{
		____captureMap_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____captureMap_1), (void*)value);
	}

	inline static int32_t get_offset_of__groups_2() { return static_cast<int32_t>(offsetof(GroupCollection_tAA9CA4E93B1A9D6B7199EE25AEB32922E72AA556, ____groups_2)); }
	inline GroupU5BU5D_tE125DBFFA979634FDDAEDF77F5EC47134D764AB5* get__groups_2() const { return ____groups_2; }
	inline GroupU5BU5D_tE125DBFFA979634FDDAEDF77F5EC47134D764AB5** get_address_of__groups_2() { return &____groups_2; }
	inline void set__groups_2(GroupU5BU5D_tE125DBFFA979634FDDAEDF77F5EC47134D764AB5* value)
	{
		____groups_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____groups_2), (void*)value);
	}
};


// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// UnityEngine.Purchasing.Product
struct Product_t8D04681E6E43F5FBB6065B70408B9B0F13B5797E  : public RuntimeObject
{
public:
	// UnityEngine.Purchasing.ProductDefinition UnityEngine.Purchasing.Product::<definition>k__BackingField
	ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572 * ___U3CdefinitionU3Ek__BackingField_0;
	// UnityEngine.Purchasing.ProductMetadata UnityEngine.Purchasing.Product::<metadata>k__BackingField
	ProductMetadata_tAA2AADD58CE3B832532B471EA80FEE323EB9BF02 * ___U3CmetadataU3Ek__BackingField_1;
	// System.Boolean UnityEngine.Purchasing.Product::<availableToPurchase>k__BackingField
	bool ___U3CavailableToPurchaseU3Ek__BackingField_2;
	// System.String UnityEngine.Purchasing.Product::<transactionID>k__BackingField
	String_t* ___U3CtransactionIDU3Ek__BackingField_3;
	// System.String UnityEngine.Purchasing.Product::<receipt>k__BackingField
	String_t* ___U3CreceiptU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CdefinitionU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Product_t8D04681E6E43F5FBB6065B70408B9B0F13B5797E, ___U3CdefinitionU3Ek__BackingField_0)); }
	inline ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572 * get_U3CdefinitionU3Ek__BackingField_0() const { return ___U3CdefinitionU3Ek__BackingField_0; }
	inline ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572 ** get_address_of_U3CdefinitionU3Ek__BackingField_0() { return &___U3CdefinitionU3Ek__BackingField_0; }
	inline void set_U3CdefinitionU3Ek__BackingField_0(ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572 * value)
	{
		___U3CdefinitionU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CdefinitionU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CmetadataU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Product_t8D04681E6E43F5FBB6065B70408B9B0F13B5797E, ___U3CmetadataU3Ek__BackingField_1)); }
	inline ProductMetadata_tAA2AADD58CE3B832532B471EA80FEE323EB9BF02 * get_U3CmetadataU3Ek__BackingField_1() const { return ___U3CmetadataU3Ek__BackingField_1; }
	inline ProductMetadata_tAA2AADD58CE3B832532B471EA80FEE323EB9BF02 ** get_address_of_U3CmetadataU3Ek__BackingField_1() { return &___U3CmetadataU3Ek__BackingField_1; }
	inline void set_U3CmetadataU3Ek__BackingField_1(ProductMetadata_tAA2AADD58CE3B832532B471EA80FEE323EB9BF02 * value)
	{
		___U3CmetadataU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CmetadataU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CavailableToPurchaseU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Product_t8D04681E6E43F5FBB6065B70408B9B0F13B5797E, ___U3CavailableToPurchaseU3Ek__BackingField_2)); }
	inline bool get_U3CavailableToPurchaseU3Ek__BackingField_2() const { return ___U3CavailableToPurchaseU3Ek__BackingField_2; }
	inline bool* get_address_of_U3CavailableToPurchaseU3Ek__BackingField_2() { return &___U3CavailableToPurchaseU3Ek__BackingField_2; }
	inline void set_U3CavailableToPurchaseU3Ek__BackingField_2(bool value)
	{
		___U3CavailableToPurchaseU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CtransactionIDU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Product_t8D04681E6E43F5FBB6065B70408B9B0F13B5797E, ___U3CtransactionIDU3Ek__BackingField_3)); }
	inline String_t* get_U3CtransactionIDU3Ek__BackingField_3() const { return ___U3CtransactionIDU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3CtransactionIDU3Ek__BackingField_3() { return &___U3CtransactionIDU3Ek__BackingField_3; }
	inline void set_U3CtransactionIDU3Ek__BackingField_3(String_t* value)
	{
		___U3CtransactionIDU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtransactionIDU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CreceiptU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Product_t8D04681E6E43F5FBB6065B70408B9B0F13B5797E, ___U3CreceiptU3Ek__BackingField_4)); }
	inline String_t* get_U3CreceiptU3Ek__BackingField_4() const { return ___U3CreceiptU3Ek__BackingField_4; }
	inline String_t** get_address_of_U3CreceiptU3Ek__BackingField_4() { return &___U3CreceiptU3Ek__BackingField_4; }
	inline void set_U3CreceiptU3Ek__BackingField_4(String_t* value)
	{
		___U3CreceiptU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CreceiptU3Ek__BackingField_4), (void*)value);
	}
};


// UnityEngine.Purchasing.QuerySkuDetailsService
struct QuerySkuDetailsService_t877F4FEBFAEEDAE6761E1AF7C0FEDB6C5CEF12B1  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<UnityEngine.AndroidJavaClass> UnityEngine.Purchasing.QuerySkuDetailsService::m_CachedQueriedSku
	List_1_t75EFA6BB9024C1D2BBB00545C10AE41E4E36F73E * ___m_CachedQueriedSku_0;
	// UnityEngine.Purchasing.Interfaces.IGoogleBillingClient UnityEngine.Purchasing.QuerySkuDetailsService::m_BillingClient
	RuntimeObject* ___m_BillingClient_1;
	// UnityEngine.Purchasing.IGoogleCachedQuerySkuDetailsService UnityEngine.Purchasing.QuerySkuDetailsService::m_GoogleCachedQuerySkuDetailsService
	RuntimeObject* ___m_GoogleCachedQuerySkuDetailsService_2;
	// System.Int32 UnityEngine.Purchasing.QuerySkuDetailsService::m_NumberReceivedCallbacks
	int32_t ___m_NumberReceivedCallbacks_3;
	// System.Collections.Generic.List`1<UnityEngine.AndroidJavaObject> UnityEngine.Purchasing.QuerySkuDetailsService::m_QueriedSkuDetails
	List_1_t911FB7A3288EAACB1E70E61FB84793A19DDB716B * ___m_QueriedSkuDetails_4;

public:
	inline static int32_t get_offset_of_m_CachedQueriedSku_0() { return static_cast<int32_t>(offsetof(QuerySkuDetailsService_t877F4FEBFAEEDAE6761E1AF7C0FEDB6C5CEF12B1, ___m_CachedQueriedSku_0)); }
	inline List_1_t75EFA6BB9024C1D2BBB00545C10AE41E4E36F73E * get_m_CachedQueriedSku_0() const { return ___m_CachedQueriedSku_0; }
	inline List_1_t75EFA6BB9024C1D2BBB00545C10AE41E4E36F73E ** get_address_of_m_CachedQueriedSku_0() { return &___m_CachedQueriedSku_0; }
	inline void set_m_CachedQueriedSku_0(List_1_t75EFA6BB9024C1D2BBB00545C10AE41E4E36F73E * value)
	{
		___m_CachedQueriedSku_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedQueriedSku_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_BillingClient_1() { return static_cast<int32_t>(offsetof(QuerySkuDetailsService_t877F4FEBFAEEDAE6761E1AF7C0FEDB6C5CEF12B1, ___m_BillingClient_1)); }
	inline RuntimeObject* get_m_BillingClient_1() const { return ___m_BillingClient_1; }
	inline RuntimeObject** get_address_of_m_BillingClient_1() { return &___m_BillingClient_1; }
	inline void set_m_BillingClient_1(RuntimeObject* value)
	{
		___m_BillingClient_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_BillingClient_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_GoogleCachedQuerySkuDetailsService_2() { return static_cast<int32_t>(offsetof(QuerySkuDetailsService_t877F4FEBFAEEDAE6761E1AF7C0FEDB6C5CEF12B1, ___m_GoogleCachedQuerySkuDetailsService_2)); }
	inline RuntimeObject* get_m_GoogleCachedQuerySkuDetailsService_2() const { return ___m_GoogleCachedQuerySkuDetailsService_2; }
	inline RuntimeObject** get_address_of_m_GoogleCachedQuerySkuDetailsService_2() { return &___m_GoogleCachedQuerySkuDetailsService_2; }
	inline void set_m_GoogleCachedQuerySkuDetailsService_2(RuntimeObject* value)
	{
		___m_GoogleCachedQuerySkuDetailsService_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_GoogleCachedQuerySkuDetailsService_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_NumberReceivedCallbacks_3() { return static_cast<int32_t>(offsetof(QuerySkuDetailsService_t877F4FEBFAEEDAE6761E1AF7C0FEDB6C5CEF12B1, ___m_NumberReceivedCallbacks_3)); }
	inline int32_t get_m_NumberReceivedCallbacks_3() const { return ___m_NumberReceivedCallbacks_3; }
	inline int32_t* get_address_of_m_NumberReceivedCallbacks_3() { return &___m_NumberReceivedCallbacks_3; }
	inline void set_m_NumberReceivedCallbacks_3(int32_t value)
	{
		___m_NumberReceivedCallbacks_3 = value;
	}

	inline static int32_t get_offset_of_m_QueriedSkuDetails_4() { return static_cast<int32_t>(offsetof(QuerySkuDetailsService_t877F4FEBFAEEDAE6761E1AF7C0FEDB6C5CEF12B1, ___m_QueriedSkuDetails_4)); }
	inline List_1_t911FB7A3288EAACB1E70E61FB84793A19DDB716B * get_m_QueriedSkuDetails_4() const { return ___m_QueriedSkuDetails_4; }
	inline List_1_t911FB7A3288EAACB1E70E61FB84793A19DDB716B ** get_address_of_m_QueriedSkuDetails_4() { return &___m_QueriedSkuDetails_4; }
	inline void set_m_QueriedSkuDetails_4(List_1_t911FB7A3288EAACB1E70E61FB84793A19DDB716B * value)
	{
		___m_QueriedSkuDetails_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_QueriedSkuDetails_4), (void*)value);
	}
};


// UnityEngine.Purchasing.ScriptingStoreCallback
struct ScriptingStoreCallback_t201741301803D50F8E0881C5805639CE2F7CB288  : public RuntimeObject
{
public:
	// UnityEngine.Purchasing.Extension.IStoreCallback UnityEngine.Purchasing.ScriptingStoreCallback::m_ForwardTo
	RuntimeObject* ___m_ForwardTo_0;
	// Uniject.IUtil UnityEngine.Purchasing.ScriptingStoreCallback::m_Util
	RuntimeObject* ___m_Util_1;

public:
	inline static int32_t get_offset_of_m_ForwardTo_0() { return static_cast<int32_t>(offsetof(ScriptingStoreCallback_t201741301803D50F8E0881C5805639CE2F7CB288, ___m_ForwardTo_0)); }
	inline RuntimeObject* get_m_ForwardTo_0() const { return ___m_ForwardTo_0; }
	inline RuntimeObject** get_address_of_m_ForwardTo_0() { return &___m_ForwardTo_0; }
	inline void set_m_ForwardTo_0(RuntimeObject* value)
	{
		___m_ForwardTo_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ForwardTo_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Util_1() { return static_cast<int32_t>(offsetof(ScriptingStoreCallback_t201741301803D50F8E0881C5805639CE2F7CB288, ___m_Util_1)); }
	inline RuntimeObject* get_m_Util_1() const { return ___m_Util_1; }
	inline RuntimeObject** get_address_of_m_Util_1() { return &___m_Util_1; }
	inline void set_m_Util_1(RuntimeObject* value)
	{
		___m_Util_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Util_1), (void*)value);
	}
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

// UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
};

// UnityEngine.Purchasing.GoogleCachedQuerySkuDetailsService/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_t8B96ADC9CAF8E16784D14AB085C48B73C5219E18  : public RuntimeObject
{
public:
	// System.String UnityEngine.Purchasing.GoogleCachedQuerySkuDetailsService/<>c__DisplayClass2_0::sku
	String_t* ___sku_0;

public:
	inline static int32_t get_offset_of_sku_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass2_0_t8B96ADC9CAF8E16784D14AB085C48B73C5219E18, ___sku_0)); }
	inline String_t* get_sku_0() const { return ___sku_0; }
	inline String_t** get_address_of_sku_0() { return &___sku_0; }
	inline void set_sku_0(String_t* value)
	{
		___sku_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sku_0), (void*)value);
	}
};


// UnityEngine.Purchasing.GoogleCachedQuerySkuDetailsService/<>c__DisplayClass4_0
struct U3CU3Ec__DisplayClass4_0_t68BB8B698F47C5C9A54079921D92A7CFF92C8ED0  : public RuntimeObject
{
public:
	// System.String UnityEngine.Purchasing.GoogleCachedQuerySkuDetailsService/<>c__DisplayClass4_0::queriedSku
	String_t* ___queriedSku_0;

public:
	inline static int32_t get_offset_of_queriedSku_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass4_0_t68BB8B698F47C5C9A54079921D92A7CFF92C8ED0, ___queriedSku_0)); }
	inline String_t* get_queriedSku_0() const { return ___queriedSku_0; }
	inline String_t** get_address_of_queriedSku_0() { return &___queriedSku_0; }
	inline void set_queriedSku_0(String_t* value)
	{
		___queriedSku_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___queriedSku_0), (void*)value);
	}
};


// UnityEngine.Purchasing.GoogleFetchPurchases/<>c
struct U3CU3Ec_t8CF44C733C2519A840682FA299C0CA1477C017EB  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t8CF44C733C2519A840682FA299C0CA1477C017EB_StaticFields
{
public:
	// UnityEngine.Purchasing.GoogleFetchPurchases/<>c UnityEngine.Purchasing.GoogleFetchPurchases/<>c::<>9
	U3CU3Ec_t8CF44C733C2519A840682FA299C0CA1477C017EB * ___U3CU3E9_0;
	// System.Func`2<UnityEngine.Purchasing.Models.GooglePurchase,System.Boolean> UnityEngine.Purchasing.GoogleFetchPurchases/<>c::<>9__7_0
	Func_2_t02A8DDA5AA2B110AE853BA161253FF2B6FADBF02 * ___U3CU3E9__7_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t8CF44C733C2519A840682FA299C0CA1477C017EB_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t8CF44C733C2519A840682FA299C0CA1477C017EB * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t8CF44C733C2519A840682FA299C0CA1477C017EB ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t8CF44C733C2519A840682FA299C0CA1477C017EB * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__7_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t8CF44C733C2519A840682FA299C0CA1477C017EB_StaticFields, ___U3CU3E9__7_0_1)); }
	inline Func_2_t02A8DDA5AA2B110AE853BA161253FF2B6FADBF02 * get_U3CU3E9__7_0_1() const { return ___U3CU3E9__7_0_1; }
	inline Func_2_t02A8DDA5AA2B110AE853BA161253FF2B6FADBF02 ** get_address_of_U3CU3E9__7_0_1() { return &___U3CU3E9__7_0_1; }
	inline void set_U3CU3E9__7_0_1(Func_2_t02A8DDA5AA2B110AE853BA161253FF2B6FADBF02 * value)
	{
		___U3CU3E9__7_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__7_0_1), (void*)value);
	}
};


// UnityEngine.Purchasing.GoogleFetchPurchases/<>c__DisplayClass6_0
struct U3CU3Ec__DisplayClass6_0_t781F434AB149FECCB6A8076380C33604CADA4501  : public RuntimeObject
{
public:
	// System.Action`1<System.Collections.Generic.List`1<UnityEngine.Purchasing.Product>> UnityEngine.Purchasing.GoogleFetchPurchases/<>c__DisplayClass6_0::onQueryPurchaseSucceed
	Action_1_t5868F85E84D90CF271B4E7863DE1EFA97B473193 * ___onQueryPurchaseSucceed_0;
	// UnityEngine.Purchasing.GoogleFetchPurchases UnityEngine.Purchasing.GoogleFetchPurchases/<>c__DisplayClass6_0::<>4__this
	GoogleFetchPurchases_tD61A91BFCD91338392F66A52275CA3D78F2840BD * ___U3CU3E4__this_1;

public:
	inline static int32_t get_offset_of_onQueryPurchaseSucceed_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass6_0_t781F434AB149FECCB6A8076380C33604CADA4501, ___onQueryPurchaseSucceed_0)); }
	inline Action_1_t5868F85E84D90CF271B4E7863DE1EFA97B473193 * get_onQueryPurchaseSucceed_0() const { return ___onQueryPurchaseSucceed_0; }
	inline Action_1_t5868F85E84D90CF271B4E7863DE1EFA97B473193 ** get_address_of_onQueryPurchaseSucceed_0() { return &___onQueryPurchaseSucceed_0; }
	inline void set_onQueryPurchaseSucceed_0(Action_1_t5868F85E84D90CF271B4E7863DE1EFA97B473193 * value)
	{
		___onQueryPurchaseSucceed_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onQueryPurchaseSucceed_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass6_0_t781F434AB149FECCB6A8076380C33604CADA4501, ___U3CU3E4__this_1)); }
	inline GoogleFetchPurchases_tD61A91BFCD91338392F66A52275CA3D78F2840BD * get_U3CU3E4__this_1() const { return ___U3CU3E4__this_1; }
	inline GoogleFetchPurchases_tD61A91BFCD91338392F66A52275CA3D78F2840BD ** get_address_of_U3CU3E4__this_1() { return &___U3CU3E4__this_1; }
	inline void set_U3CU3E4__this_1(GoogleFetchPurchases_tD61A91BFCD91338392F66A52275CA3D78F2840BD * value)
	{
		___U3CU3E4__this_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_1), (void*)value);
	}
};


// UnityEngine.Purchasing.GoogleFinishTransactionService/<>c__DisplayClass3_0
struct U3CU3Ec__DisplayClass3_0_t3BF37E4D30BE12133B2741139D83ABB561318025  : public RuntimeObject
{
public:
	// UnityEngine.Purchasing.ProductDefinition UnityEngine.Purchasing.GoogleFinishTransactionService/<>c__DisplayClass3_0::product
	ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572 * ___product_0;
	// UnityEngine.Purchasing.GoogleFinishTransactionService UnityEngine.Purchasing.GoogleFinishTransactionService/<>c__DisplayClass3_0::<>4__this
	GoogleFinishTransactionService_t27140F1A1D2F1ED6D6A48709F4C7ED82F59F5BCA * ___U3CU3E4__this_1;
	// System.String UnityEngine.Purchasing.GoogleFinishTransactionService/<>c__DisplayClass3_0::purchaseToken
	String_t* ___purchaseToken_2;
	// System.Action`4<UnityEngine.Purchasing.ProductDefinition,UnityEngine.Purchasing.Models.GooglePurchase,UnityEngine.Purchasing.Models.GoogleBillingResult,System.String> UnityEngine.Purchasing.GoogleFinishTransactionService/<>c__DisplayClass3_0::onConsume
	Action_4_t6B11EA4C8E25C04252AE71EBA2F351ABD22B744A * ___onConsume_3;
	// System.Action`3<UnityEngine.Purchasing.ProductDefinition,UnityEngine.Purchasing.Models.GooglePurchase,UnityEngine.Purchasing.Models.GoogleBillingResult> UnityEngine.Purchasing.GoogleFinishTransactionService/<>c__DisplayClass3_0::onAcknowledge
	Action_3_t0083092190368806A2DB2F1602BADE4C8B060D46 * ___onAcknowledge_4;

public:
	inline static int32_t get_offset_of_product_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass3_0_t3BF37E4D30BE12133B2741139D83ABB561318025, ___product_0)); }
	inline ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572 * get_product_0() const { return ___product_0; }
	inline ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572 ** get_address_of_product_0() { return &___product_0; }
	inline void set_product_0(ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572 * value)
	{
		___product_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___product_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass3_0_t3BF37E4D30BE12133B2741139D83ABB561318025, ___U3CU3E4__this_1)); }
	inline GoogleFinishTransactionService_t27140F1A1D2F1ED6D6A48709F4C7ED82F59F5BCA * get_U3CU3E4__this_1() const { return ___U3CU3E4__this_1; }
	inline GoogleFinishTransactionService_t27140F1A1D2F1ED6D6A48709F4C7ED82F59F5BCA ** get_address_of_U3CU3E4__this_1() { return &___U3CU3E4__this_1; }
	inline void set_U3CU3E4__this_1(GoogleFinishTransactionService_t27140F1A1D2F1ED6D6A48709F4C7ED82F59F5BCA * value)
	{
		___U3CU3E4__this_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_1), (void*)value);
	}

	inline static int32_t get_offset_of_purchaseToken_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass3_0_t3BF37E4D30BE12133B2741139D83ABB561318025, ___purchaseToken_2)); }
	inline String_t* get_purchaseToken_2() const { return ___purchaseToken_2; }
	inline String_t** get_address_of_purchaseToken_2() { return &___purchaseToken_2; }
	inline void set_purchaseToken_2(String_t* value)
	{
		___purchaseToken_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___purchaseToken_2), (void*)value);
	}

	inline static int32_t get_offset_of_onConsume_3() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass3_0_t3BF37E4D30BE12133B2741139D83ABB561318025, ___onConsume_3)); }
	inline Action_4_t6B11EA4C8E25C04252AE71EBA2F351ABD22B744A * get_onConsume_3() const { return ___onConsume_3; }
	inline Action_4_t6B11EA4C8E25C04252AE71EBA2F351ABD22B744A ** get_address_of_onConsume_3() { return &___onConsume_3; }
	inline void set_onConsume_3(Action_4_t6B11EA4C8E25C04252AE71EBA2F351ABD22B744A * value)
	{
		___onConsume_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onConsume_3), (void*)value);
	}

	inline static int32_t get_offset_of_onAcknowledge_4() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass3_0_t3BF37E4D30BE12133B2741139D83ABB561318025, ___onAcknowledge_4)); }
	inline Action_3_t0083092190368806A2DB2F1602BADE4C8B060D46 * get_onAcknowledge_4() const { return ___onAcknowledge_4; }
	inline Action_3_t0083092190368806A2DB2F1602BADE4C8B060D46 ** get_address_of_onAcknowledge_4() { return &___onAcknowledge_4; }
	inline void set_onAcknowledge_4(Action_3_t0083092190368806A2DB2F1602BADE4C8B060D46 * value)
	{
		___onAcknowledge_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onAcknowledge_4), (void*)value);
	}
};


// UnityEngine.Purchasing.GoogleFinishTransactionService/<>c__DisplayClass4_0
struct U3CU3Ec__DisplayClass4_0_t6345A418534D6DA6A3412796CF288FF96408AF96  : public RuntimeObject
{
public:
	// UnityEngine.Purchasing.ProductDefinition UnityEngine.Purchasing.GoogleFinishTransactionService/<>c__DisplayClass4_0::product
	ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572 * ___product_0;

public:
	inline static int32_t get_offset_of_product_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass4_0_t6345A418534D6DA6A3412796CF288FF96408AF96, ___product_0)); }
	inline ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572 * get_product_0() const { return ___product_0; }
	inline ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572 ** get_address_of_product_0() { return &___product_0; }
	inline void set_product_0(ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572 * value)
	{
		___product_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___product_0), (void*)value);
	}
};


// UnityEngine.Purchasing.GooglePlayStoreExtensions/<>c__DisplayClass9_0
struct U3CU3Ec__DisplayClass9_0_t10F6B900F6EEC9A86793B5D2C2422947E0527021  : public RuntimeObject
{
public:
	// System.Action`1<System.Boolean> UnityEngine.Purchasing.GooglePlayStoreExtensions/<>c__DisplayClass9_0::callback
	Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * ___callback_0;

public:
	inline static int32_t get_offset_of_callback_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass9_0_t10F6B900F6EEC9A86793B5D2C2422947E0527021, ___callback_0)); }
	inline Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * get_callback_0() const { return ___callback_0; }
	inline Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 ** get_address_of_callback_0() { return &___callback_0; }
	inline void set_callback_0(Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * value)
	{
		___callback_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callback_0), (void*)value);
	}
};


// UnityEngine.Purchasing.GooglePlayStoreRetrieveProductsService/<>c__DisplayClass6_0
struct U3CU3Ec__DisplayClass6_0_t78B37EDE769328EC0E183945C9A747D234180D40  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Purchasing.Extension.ProductDescription> UnityEngine.Purchasing.GooglePlayStoreRetrieveProductsService/<>c__DisplayClass6_0::retrievedProducts
	List_1_t293A9B62DF9E931D44BF8E69475D79D308B627FF * ___retrievedProducts_0;
	// UnityEngine.Purchasing.GooglePlayStoreRetrieveProductsService UnityEngine.Purchasing.GooglePlayStoreRetrieveProductsService/<>c__DisplayClass6_0::<>4__this
	GooglePlayStoreRetrieveProductsService_t7F583191AD884C7619CC313AEC29AC049DC4C6BC * ___U3CU3E4__this_1;

public:
	inline static int32_t get_offset_of_retrievedProducts_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass6_0_t78B37EDE769328EC0E183945C9A747D234180D40, ___retrievedProducts_0)); }
	inline List_1_t293A9B62DF9E931D44BF8E69475D79D308B627FF * get_retrievedProducts_0() const { return ___retrievedProducts_0; }
	inline List_1_t293A9B62DF9E931D44BF8E69475D79D308B627FF ** get_address_of_retrievedProducts_0() { return &___retrievedProducts_0; }
	inline void set_retrievedProducts_0(List_1_t293A9B62DF9E931D44BF8E69475D79D308B627FF * value)
	{
		___retrievedProducts_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___retrievedProducts_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass6_0_t78B37EDE769328EC0E183945C9A747D234180D40, ___U3CU3E4__this_1)); }
	inline GooglePlayStoreRetrieveProductsService_t7F583191AD884C7619CC313AEC29AC049DC4C6BC * get_U3CU3E4__this_1() const { return ___U3CU3E4__this_1; }
	inline GooglePlayStoreRetrieveProductsService_t7F583191AD884C7619CC313AEC29AC049DC4C6BC ** get_address_of_U3CU3E4__this_1() { return &___U3CU3E4__this_1; }
	inline void set_U3CU3E4__this_1(GooglePlayStoreRetrieveProductsService_t7F583191AD884C7619CC313AEC29AC049DC4C6BC * value)
	{
		___U3CU3E4__this_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_1), (void*)value);
	}
};


// UnityEngine.Purchasing.GooglePlayStoreRetrieveProductsService/<>c__DisplayClass8_0
struct U3CU3Ec__DisplayClass8_0_t219B79B462F00643C2538E406391C3F55FFD1B53  : public RuntimeObject
{
public:
	// UnityEngine.Purchasing.Product UnityEngine.Purchasing.GooglePlayStoreRetrieveProductsService/<>c__DisplayClass8_0::purchaseProduct
	Product_t8D04681E6E43F5FBB6065B70408B9B0F13B5797E * ___purchaseProduct_0;

public:
	inline static int32_t get_offset_of_purchaseProduct_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass8_0_t219B79B462F00643C2538E406391C3F55FFD1B53, ___purchaseProduct_0)); }
	inline Product_t8D04681E6E43F5FBB6065B70408B9B0F13B5797E * get_purchaseProduct_0() const { return ___purchaseProduct_0; }
	inline Product_t8D04681E6E43F5FBB6065B70408B9B0F13B5797E ** get_address_of_purchaseProduct_0() { return &___purchaseProduct_0; }
	inline void set_purchaseProduct_0(Product_t8D04681E6E43F5FBB6065B70408B9B0F13B5797E * value)
	{
		___purchaseProduct_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___purchaseProduct_0), (void*)value);
	}
};


// UnityEngine.Purchasing.Utils.GooglePurchaseHelper/<>c__DisplayClass0_0
struct U3CU3Ec__DisplayClass0_0_t7A126D437A23AC83ECEB81C7BB02610E74C19281  : public RuntimeObject
{
public:
	// System.String UnityEngine.Purchasing.Utils.GooglePurchaseHelper/<>c__DisplayClass0_0::sku
	String_t* ___sku_0;

public:
	inline static int32_t get_offset_of_sku_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass0_0_t7A126D437A23AC83ECEB81C7BB02610E74C19281, ___sku_0)); }
	inline String_t* get_sku_0() const { return ___sku_0; }
	inline String_t** get_address_of_sku_0() { return &___sku_0; }
	inline void set_sku_0(String_t* value)
	{
		___sku_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sku_0), (void*)value);
	}
};


// UnityEngine.Purchasing.GooglePurchaseService/<>c__DisplayClass4_0
struct U3CU3Ec__DisplayClass4_0_tDB423946076B881717411AF2DF97399068B486BF  : public RuntimeObject
{
public:
	// UnityEngine.Purchasing.GooglePurchaseService UnityEngine.Purchasing.GooglePurchaseService/<>c__DisplayClass4_0::<>4__this
	GooglePurchaseService_tDA2297B0DD64F816D878B18CB456CAF9717835BC * ___U3CU3E4__this_0;
	// UnityEngine.Purchasing.ProductDefinition UnityEngine.Purchasing.GooglePurchaseService/<>c__DisplayClass4_0::product
	ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572 * ___product_1;
	// UnityEngine.Purchasing.Product UnityEngine.Purchasing.GooglePurchaseService/<>c__DisplayClass4_0::oldProduct
	Product_t8D04681E6E43F5FBB6065B70408B9B0F13B5797E * ___oldProduct_2;
	// System.Int32 UnityEngine.Purchasing.GooglePurchaseService/<>c__DisplayClass4_0::desiredProrationMode
	int32_t ___desiredProrationMode_3;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass4_0_tDB423946076B881717411AF2DF97399068B486BF, ___U3CU3E4__this_0)); }
	inline GooglePurchaseService_tDA2297B0DD64F816D878B18CB456CAF9717835BC * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline GooglePurchaseService_tDA2297B0DD64F816D878B18CB456CAF9717835BC ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(GooglePurchaseService_tDA2297B0DD64F816D878B18CB456CAF9717835BC * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_product_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass4_0_tDB423946076B881717411AF2DF97399068B486BF, ___product_1)); }
	inline ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572 * get_product_1() const { return ___product_1; }
	inline ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572 ** get_address_of_product_1() { return &___product_1; }
	inline void set_product_1(ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572 * value)
	{
		___product_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___product_1), (void*)value);
	}

	inline static int32_t get_offset_of_oldProduct_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass4_0_tDB423946076B881717411AF2DF97399068B486BF, ___oldProduct_2)); }
	inline Product_t8D04681E6E43F5FBB6065B70408B9B0F13B5797E * get_oldProduct_2() const { return ___oldProduct_2; }
	inline Product_t8D04681E6E43F5FBB6065B70408B9B0F13B5797E ** get_address_of_oldProduct_2() { return &___oldProduct_2; }
	inline void set_oldProduct_2(Product_t8D04681E6E43F5FBB6065B70408B9B0F13B5797E * value)
	{
		___oldProduct_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___oldProduct_2), (void*)value);
	}

	inline static int32_t get_offset_of_desiredProrationMode_3() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass4_0_tDB423946076B881717411AF2DF97399068B486BF, ___desiredProrationMode_3)); }
	inline int32_t get_desiredProrationMode_3() const { return ___desiredProrationMode_3; }
	inline int32_t* get_address_of_desiredProrationMode_3() { return &___desiredProrationMode_3; }
	inline void set_desiredProrationMode_3(int32_t value)
	{
		___desiredProrationMode_3 = value;
	}
};


// UnityEngine.Purchasing.GoogleQueryPurchasesService/<>c__DisplayClass3_0
struct U3CU3Ec__DisplayClass3_0_t476F14BFD47890861A2F6B75F95E9072EA5176DB  : public RuntimeObject
{
public:
	// UnityEngine.Purchasing.GoogleQueryPurchasesService UnityEngine.Purchasing.GoogleQueryPurchasesService/<>c__DisplayClass3_0::<>4__this
	GoogleQueryPurchasesService_t54ECE1F3869C7C8A6CC6F43CA78470160D96ED3B * ___U3CU3E4__this_0;
	// System.Action`1<System.Collections.Generic.List`1<UnityEngine.Purchasing.Models.GooglePurchase>> UnityEngine.Purchasing.GoogleQueryPurchasesService/<>c__DisplayClass3_0::onQueryPurchaseSucceed
	Action_1_tE42BD9F1180F09C4A76A988DB2ABFE78413236E1 * ___onQueryPurchaseSucceed_1;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass3_0_t476F14BFD47890861A2F6B75F95E9072EA5176DB, ___U3CU3E4__this_0)); }
	inline GoogleQueryPurchasesService_t54ECE1F3869C7C8A6CC6F43CA78470160D96ED3B * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline GoogleQueryPurchasesService_t54ECE1F3869C7C8A6CC6F43CA78470160D96ED3B ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(GoogleQueryPurchasesService_t54ECE1F3869C7C8A6CC6F43CA78470160D96ED3B * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_onQueryPurchaseSucceed_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass3_0_t476F14BFD47890861A2F6B75F95E9072EA5176DB, ___onQueryPurchaseSucceed_1)); }
	inline Action_1_tE42BD9F1180F09C4A76A988DB2ABFE78413236E1 * get_onQueryPurchaseSucceed_1() const { return ___onQueryPurchaseSucceed_1; }
	inline Action_1_tE42BD9F1180F09C4A76A988DB2ABFE78413236E1 ** get_address_of_onQueryPurchaseSucceed_1() { return &___onQueryPurchaseSucceed_1; }
	inline void set_onQueryPurchaseSucceed_1(Action_1_tE42BD9F1180F09C4A76A988DB2ABFE78413236E1 * value)
	{
		___onQueryPurchaseSucceed_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onQueryPurchaseSucceed_1), (void*)value);
	}
};


// UnityEngine.Purchasing.GoogleQueryPurchasesService/<>c__DisplayClass3_1
struct U3CU3Ec__DisplayClass3_1_t9A31BB7393D6B9CFC983953329FD0B70D0487AF3  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Purchasing.Models.GooglePurchase> UnityEngine.Purchasing.GoogleQueryPurchasesService/<>c__DisplayClass3_1::googlePurchasesInSubs
	List_1_tC18F59C75A96198914A4AF87DDEBD3D2DFE05E3A * ___googlePurchasesInSubs_0;
	// UnityEngine.Purchasing.GoogleQueryPurchasesService/<>c__DisplayClass3_0 UnityEngine.Purchasing.GoogleQueryPurchasesService/<>c__DisplayClass3_1::CS$<>8__locals1
	U3CU3Ec__DisplayClass3_0_t476F14BFD47890861A2F6B75F95E9072EA5176DB * ___CSU24U3CU3E8__locals1_1;

public:
	inline static int32_t get_offset_of_googlePurchasesInSubs_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass3_1_t9A31BB7393D6B9CFC983953329FD0B70D0487AF3, ___googlePurchasesInSubs_0)); }
	inline List_1_tC18F59C75A96198914A4AF87DDEBD3D2DFE05E3A * get_googlePurchasesInSubs_0() const { return ___googlePurchasesInSubs_0; }
	inline List_1_tC18F59C75A96198914A4AF87DDEBD3D2DFE05E3A ** get_address_of_googlePurchasesInSubs_0() { return &___googlePurchasesInSubs_0; }
	inline void set_googlePurchasesInSubs_0(List_1_tC18F59C75A96198914A4AF87DDEBD3D2DFE05E3A * value)
	{
		___googlePurchasesInSubs_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___googlePurchasesInSubs_0), (void*)value);
	}

	inline static int32_t get_offset_of_CSU24U3CU3E8__locals1_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass3_1_t9A31BB7393D6B9CFC983953329FD0B70D0487AF3, ___CSU24U3CU3E8__locals1_1)); }
	inline U3CU3Ec__DisplayClass3_0_t476F14BFD47890861A2F6B75F95E9072EA5176DB * get_CSU24U3CU3E8__locals1_1() const { return ___CSU24U3CU3E8__locals1_1; }
	inline U3CU3Ec__DisplayClass3_0_t476F14BFD47890861A2F6B75F95E9072EA5176DB ** get_address_of_CSU24U3CU3E8__locals1_1() { return &___CSU24U3CU3E8__locals1_1; }
	inline void set_CSU24U3CU3E8__locals1_1(U3CU3Ec__DisplayClass3_0_t476F14BFD47890861A2F6B75F95E9072EA5176DB * value)
	{
		___CSU24U3CU3E8__locals1_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CSU24U3CU3E8__locals1_1), (void*)value);
	}
};


// UnityEngine.Purchasing.LocalizedProductDescription/<>c
struct U3CU3Ec_t4E93A11683C5669A4E6B91ABFD5CC9B31E30929E  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t4E93A11683C5669A4E6B91ABFD5CC9B31E30929E_StaticFields
{
public:
	// UnityEngine.Purchasing.LocalizedProductDescription/<>c UnityEngine.Purchasing.LocalizedProductDescription/<>c::<>9
	U3CU3Ec_t4E93A11683C5669A4E6B91ABFD5CC9B31E30929E * ___U3CU3E9_0;
	// System.Text.RegularExpressions.MatchEvaluator UnityEngine.Purchasing.LocalizedProductDescription/<>c::<>9__11_0
	MatchEvaluator_tF5A86B09324F457929EC459E991709F1A12ADD1D * ___U3CU3E9__11_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t4E93A11683C5669A4E6B91ABFD5CC9B31E30929E_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t4E93A11683C5669A4E6B91ABFD5CC9B31E30929E * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t4E93A11683C5669A4E6B91ABFD5CC9B31E30929E ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t4E93A11683C5669A4E6B91ABFD5CC9B31E30929E * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__11_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t4E93A11683C5669A4E6B91ABFD5CC9B31E30929E_StaticFields, ___U3CU3E9__11_0_1)); }
	inline MatchEvaluator_tF5A86B09324F457929EC459E991709F1A12ADD1D * get_U3CU3E9__11_0_1() const { return ___U3CU3E9__11_0_1; }
	inline MatchEvaluator_tF5A86B09324F457929EC459E991709F1A12ADD1D ** get_address_of_U3CU3E9__11_0_1() { return &___U3CU3E9__11_0_1; }
	inline void set_U3CU3E9__11_0_1(MatchEvaluator_tF5A86B09324F457929EC459E991709F1A12ADD1D * value)
	{
		___U3CU3E9__11_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__11_0_1), (void*)value);
	}
};


// UnityEngine.Purchasing.ProductCatalog/<>c
struct U3CU3Ec_t4BE94DF0E8BD1264DB13776C15A26EA265675AE0  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t4BE94DF0E8BD1264DB13776C15A26EA265675AE0_StaticFields
{
public:
	// UnityEngine.Purchasing.ProductCatalog/<>c UnityEngine.Purchasing.ProductCatalog/<>c::<>9
	U3CU3Ec_t4BE94DF0E8BD1264DB13776C15A26EA265675AE0 * ___U3CU3E9_0;
	// System.Func`2<UnityEngine.Purchasing.ProductCatalogItem,System.Boolean> UnityEngine.Purchasing.ProductCatalog/<>c::<>9__8_0
	Func_2_t236EEA40DB78747B61EF79F060D053D1BFDB3B12 * ___U3CU3E9__8_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t4BE94DF0E8BD1264DB13776C15A26EA265675AE0_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t4BE94DF0E8BD1264DB13776C15A26EA265675AE0 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t4BE94DF0E8BD1264DB13776C15A26EA265675AE0 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t4BE94DF0E8BD1264DB13776C15A26EA265675AE0 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__8_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t4BE94DF0E8BD1264DB13776C15A26EA265675AE0_StaticFields, ___U3CU3E9__8_0_1)); }
	inline Func_2_t236EEA40DB78747B61EF79F060D053D1BFDB3B12 * get_U3CU3E9__8_0_1() const { return ___U3CU3E9__8_0_1; }
	inline Func_2_t236EEA40DB78747B61EF79F060D053D1BFDB3B12 ** get_address_of_U3CU3E9__8_0_1() { return &___U3CU3E9__8_0_1; }
	inline void set_U3CU3E9__8_0_1(Func_2_t236EEA40DB78747B61EF79F060D053D1BFDB3B12 * value)
	{
		___U3CU3E9__8_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__8_0_1), (void*)value);
	}
};


// UnityEngine.Purchasing.QuerySkuDetailsService/<>c
struct U3CU3Ec_tA145211B409C518BC8732858C266386A65B28D3A  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tA145211B409C518BC8732858C266386A65B28D3A_StaticFields
{
public:
	// UnityEngine.Purchasing.QuerySkuDetailsService/<>c UnityEngine.Purchasing.QuerySkuDetailsService/<>c::<>9
	U3CU3Ec_tA145211B409C518BC8732858C266386A65B28D3A * ___U3CU3E9_0;
	// System.Func`2<UnityEngine.Purchasing.ProductDefinition,System.Boolean> UnityEngine.Purchasing.QuerySkuDetailsService/<>c::<>9__14_0
	Func_2_t2F3D631795CE97DFD1F4F32CA7BA9B506C483851 * ___U3CU3E9__14_0_1;
	// System.Func`2<UnityEngine.Purchasing.ProductDefinition,System.String> UnityEngine.Purchasing.QuerySkuDetailsService/<>c::<>9__14_1
	Func_2_tAB10861D99AA807AE21941AC819229F13C65AE06 * ___U3CU3E9__14_1_2;
	// System.Func`2<UnityEngine.Purchasing.ProductDefinition,System.Boolean> UnityEngine.Purchasing.QuerySkuDetailsService/<>c::<>9__15_0
	Func_2_t2F3D631795CE97DFD1F4F32CA7BA9B506C483851 * ___U3CU3E9__15_0_3;
	// System.Func`2<UnityEngine.Purchasing.ProductDefinition,System.String> UnityEngine.Purchasing.QuerySkuDetailsService/<>c::<>9__15_1
	Func_2_tAB10861D99AA807AE21941AC819229F13C65AE06 * ___U3CU3E9__15_1_4;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tA145211B409C518BC8732858C266386A65B28D3A_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tA145211B409C518BC8732858C266386A65B28D3A * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tA145211B409C518BC8732858C266386A65B28D3A ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tA145211B409C518BC8732858C266386A65B28D3A * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__14_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tA145211B409C518BC8732858C266386A65B28D3A_StaticFields, ___U3CU3E9__14_0_1)); }
	inline Func_2_t2F3D631795CE97DFD1F4F32CA7BA9B506C483851 * get_U3CU3E9__14_0_1() const { return ___U3CU3E9__14_0_1; }
	inline Func_2_t2F3D631795CE97DFD1F4F32CA7BA9B506C483851 ** get_address_of_U3CU3E9__14_0_1() { return &___U3CU3E9__14_0_1; }
	inline void set_U3CU3E9__14_0_1(Func_2_t2F3D631795CE97DFD1F4F32CA7BA9B506C483851 * value)
	{
		___U3CU3E9__14_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__14_0_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__14_1_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_tA145211B409C518BC8732858C266386A65B28D3A_StaticFields, ___U3CU3E9__14_1_2)); }
	inline Func_2_tAB10861D99AA807AE21941AC819229F13C65AE06 * get_U3CU3E9__14_1_2() const { return ___U3CU3E9__14_1_2; }
	inline Func_2_tAB10861D99AA807AE21941AC819229F13C65AE06 ** get_address_of_U3CU3E9__14_1_2() { return &___U3CU3E9__14_1_2; }
	inline void set_U3CU3E9__14_1_2(Func_2_tAB10861D99AA807AE21941AC819229F13C65AE06 * value)
	{
		___U3CU3E9__14_1_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__14_1_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__15_0_3() { return static_cast<int32_t>(offsetof(U3CU3Ec_tA145211B409C518BC8732858C266386A65B28D3A_StaticFields, ___U3CU3E9__15_0_3)); }
	inline Func_2_t2F3D631795CE97DFD1F4F32CA7BA9B506C483851 * get_U3CU3E9__15_0_3() const { return ___U3CU3E9__15_0_3; }
	inline Func_2_t2F3D631795CE97DFD1F4F32CA7BA9B506C483851 ** get_address_of_U3CU3E9__15_0_3() { return &___U3CU3E9__15_0_3; }
	inline void set_U3CU3E9__15_0_3(Func_2_t2F3D631795CE97DFD1F4F32CA7BA9B506C483851 * value)
	{
		___U3CU3E9__15_0_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__15_0_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__15_1_4() { return static_cast<int32_t>(offsetof(U3CU3Ec_tA145211B409C518BC8732858C266386A65B28D3A_StaticFields, ___U3CU3E9__15_1_4)); }
	inline Func_2_tAB10861D99AA807AE21941AC819229F13C65AE06 * get_U3CU3E9__15_1_4() const { return ___U3CU3E9__15_1_4; }
	inline Func_2_tAB10861D99AA807AE21941AC819229F13C65AE06 ** get_address_of_U3CU3E9__15_1_4() { return &___U3CU3E9__15_1_4; }
	inline void set_U3CU3E9__15_1_4(Func_2_tAB10861D99AA807AE21941AC819229F13C65AE06 * value)
	{
		___U3CU3E9__15_1_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__15_1_4), (void*)value);
	}
};


// UnityEngine.Purchasing.QuerySkuDetailsService/<>c__DisplayClass12_0
struct U3CU3Ec__DisplayClass12_0_t34642B8313D61FFB3DC025660F2334AE41F37A03  : public RuntimeObject
{
public:
	// System.Action`1<System.Collections.Generic.List`1<UnityEngine.Purchasing.Extension.ProductDescription>> UnityEngine.Purchasing.QuerySkuDetailsService/<>c__DisplayClass12_0::onSkuDetailsResponse
	Action_1_t762239D56917E8864E53EE1DFBAE23C93B8EF280 * ___onSkuDetailsResponse_0;

public:
	inline static int32_t get_offset_of_onSkuDetailsResponse_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass12_0_t34642B8313D61FFB3DC025660F2334AE41F37A03, ___onSkuDetailsResponse_0)); }
	inline Action_1_t762239D56917E8864E53EE1DFBAE23C93B8EF280 * get_onSkuDetailsResponse_0() const { return ___onSkuDetailsResponse_0; }
	inline Action_1_t762239D56917E8864E53EE1DFBAE23C93B8EF280 ** get_address_of_onSkuDetailsResponse_0() { return &___onSkuDetailsResponse_0; }
	inline void set_onSkuDetailsResponse_0(Action_1_t762239D56917E8864E53EE1DFBAE23C93B8EF280 * value)
	{
		___onSkuDetailsResponse_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onSkuDetailsResponse_0), (void*)value);
	}
};


// UnityEngine.Purchasing.QuerySkuDetailsService/<>c__DisplayClass16_0
struct U3CU3Ec__DisplayClass16_0_t01D65697847275ABE80BA8CB4F7E5D425E30EFA8  : public RuntimeObject
{
public:
	// UnityEngine.Purchasing.QuerySkuDetailsService UnityEngine.Purchasing.QuerySkuDetailsService/<>c__DisplayClass16_0::<>4__this
	QuerySkuDetailsService_t877F4FEBFAEEDAE6761E1AF7C0FEDB6C5CEF12B1 * ___U3CU3E4__this_0;
	// System.Action`1<System.Collections.Generic.List`1<UnityEngine.AndroidJavaObject>> UnityEngine.Purchasing.QuerySkuDetailsService/<>c__DisplayClass16_0::onSkuDetailsResponse
	Action_1_t280D324324436AF42C8D2A05C7B79D2070238EC5 * ___onSkuDetailsResponse_1;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass16_0_t01D65697847275ABE80BA8CB4F7E5D425E30EFA8, ___U3CU3E4__this_0)); }
	inline QuerySkuDetailsService_t877F4FEBFAEEDAE6761E1AF7C0FEDB6C5CEF12B1 * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline QuerySkuDetailsService_t877F4FEBFAEEDAE6761E1AF7C0FEDB6C5CEF12B1 ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(QuerySkuDetailsService_t877F4FEBFAEEDAE6761E1AF7C0FEDB6C5CEF12B1 * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_onSkuDetailsResponse_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass16_0_t01D65697847275ABE80BA8CB4F7E5D425E30EFA8, ___onSkuDetailsResponse_1)); }
	inline Action_1_t280D324324436AF42C8D2A05C7B79D2070238EC5 * get_onSkuDetailsResponse_1() const { return ___onSkuDetailsResponse_1; }
	inline Action_1_t280D324324436AF42C8D2A05C7B79D2070238EC5 ** get_address_of_onSkuDetailsResponse_1() { return &___onSkuDetailsResponse_1; }
	inline void set_onSkuDetailsResponse_1(Action_1_t280D324324436AF42C8D2A05C7B79D2070238EC5 * value)
	{
		___onSkuDetailsResponse_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onSkuDetailsResponse_1), (void*)value);
	}
};


// UnityEngine.Purchasing.ScriptingStoreCallback/<>c__DisplayClass10_0
struct U3CU3Ec__DisplayClass10_0_tF466D8FB2F0D0AAA38E7FB5BEB1CEF41E57F96C2  : public RuntimeObject
{
public:
	// UnityEngine.Purchasing.ScriptingStoreCallback UnityEngine.Purchasing.ScriptingStoreCallback/<>c__DisplayClass10_0::<>4__this
	ScriptingStoreCallback_t201741301803D50F8E0881C5805639CE2F7CB288 * ___U3CU3E4__this_0;
	// UnityEngine.Purchasing.Extension.PurchaseFailureDescription UnityEngine.Purchasing.ScriptingStoreCallback/<>c__DisplayClass10_0::desc
	PurchaseFailureDescription_tF5204FF61912DF603166BB79C4A10BA5727FBFD8 * ___desc_1;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass10_0_tF466D8FB2F0D0AAA38E7FB5BEB1CEF41E57F96C2, ___U3CU3E4__this_0)); }
	inline ScriptingStoreCallback_t201741301803D50F8E0881C5805639CE2F7CB288 * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline ScriptingStoreCallback_t201741301803D50F8E0881C5805639CE2F7CB288 ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(ScriptingStoreCallback_t201741301803D50F8E0881C5805639CE2F7CB288 * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_desc_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass10_0_tF466D8FB2F0D0AAA38E7FB5BEB1CEF41E57F96C2, ___desc_1)); }
	inline PurchaseFailureDescription_tF5204FF61912DF603166BB79C4A10BA5727FBFD8 * get_desc_1() const { return ___desc_1; }
	inline PurchaseFailureDescription_tF5204FF61912DF603166BB79C4A10BA5727FBFD8 ** get_address_of_desc_1() { return &___desc_1; }
	inline void set_desc_1(PurchaseFailureDescription_tF5204FF61912DF603166BB79C4A10BA5727FBFD8 * value)
	{
		___desc_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___desc_1), (void*)value);
	}
};


// UnityEngine.Purchasing.ScriptingStoreCallback/<>c__DisplayClass6_0
struct U3CU3Ec__DisplayClass6_0_t35E59837B7A8D9A9033DF940B833CA8E375F5974  : public RuntimeObject
{
public:
	// UnityEngine.Purchasing.ScriptingStoreCallback UnityEngine.Purchasing.ScriptingStoreCallback/<>c__DisplayClass6_0::<>4__this
	ScriptingStoreCallback_t201741301803D50F8E0881C5805639CE2F7CB288 * ___U3CU3E4__this_0;
	// System.Collections.Generic.List`1<UnityEngine.Purchasing.Extension.ProductDescription> UnityEngine.Purchasing.ScriptingStoreCallback/<>c__DisplayClass6_0::products
	List_1_t293A9B62DF9E931D44BF8E69475D79D308B627FF * ___products_1;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass6_0_t35E59837B7A8D9A9033DF940B833CA8E375F5974, ___U3CU3E4__this_0)); }
	inline ScriptingStoreCallback_t201741301803D50F8E0881C5805639CE2F7CB288 * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline ScriptingStoreCallback_t201741301803D50F8E0881C5805639CE2F7CB288 ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(ScriptingStoreCallback_t201741301803D50F8E0881C5805639CE2F7CB288 * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_products_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass6_0_t35E59837B7A8D9A9033DF940B833CA8E375F5974, ___products_1)); }
	inline List_1_t293A9B62DF9E931D44BF8E69475D79D308B627FF * get_products_1() const { return ___products_1; }
	inline List_1_t293A9B62DF9E931D44BF8E69475D79D308B627FF ** get_address_of_products_1() { return &___products_1; }
	inline void set_products_1(List_1_t293A9B62DF9E931D44BF8E69475D79D308B627FF * value)
	{
		___products_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___products_1), (void*)value);
	}
};


// UnityEngine.Purchasing.ScriptingStoreCallback/<>c__DisplayClass7_0
struct U3CU3Ec__DisplayClass7_0_t807EC72F490C70CEB518B7C7199B43D6E9AA54F1  : public RuntimeObject
{
public:
	// UnityEngine.Purchasing.ScriptingStoreCallback UnityEngine.Purchasing.ScriptingStoreCallback/<>c__DisplayClass7_0::<>4__this
	ScriptingStoreCallback_t201741301803D50F8E0881C5805639CE2F7CB288 * ___U3CU3E4__this_0;
	// System.String UnityEngine.Purchasing.ScriptingStoreCallback/<>c__DisplayClass7_0::id
	String_t* ___id_1;
	// System.String UnityEngine.Purchasing.ScriptingStoreCallback/<>c__DisplayClass7_0::receipt
	String_t* ___receipt_2;
	// System.String UnityEngine.Purchasing.ScriptingStoreCallback/<>c__DisplayClass7_0::transactionID
	String_t* ___transactionID_3;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass7_0_t807EC72F490C70CEB518B7C7199B43D6E9AA54F1, ___U3CU3E4__this_0)); }
	inline ScriptingStoreCallback_t201741301803D50F8E0881C5805639CE2F7CB288 * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline ScriptingStoreCallback_t201741301803D50F8E0881C5805639CE2F7CB288 ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(ScriptingStoreCallback_t201741301803D50F8E0881C5805639CE2F7CB288 * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_id_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass7_0_t807EC72F490C70CEB518B7C7199B43D6E9AA54F1, ___id_1)); }
	inline String_t* get_id_1() const { return ___id_1; }
	inline String_t** get_address_of_id_1() { return &___id_1; }
	inline void set_id_1(String_t* value)
	{
		___id_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___id_1), (void*)value);
	}

	inline static int32_t get_offset_of_receipt_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass7_0_t807EC72F490C70CEB518B7C7199B43D6E9AA54F1, ___receipt_2)); }
	inline String_t* get_receipt_2() const { return ___receipt_2; }
	inline String_t** get_address_of_receipt_2() { return &___receipt_2; }
	inline void set_receipt_2(String_t* value)
	{
		___receipt_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___receipt_2), (void*)value);
	}

	inline static int32_t get_offset_of_transactionID_3() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass7_0_t807EC72F490C70CEB518B7C7199B43D6E9AA54F1, ___transactionID_3)); }
	inline String_t* get_transactionID_3() const { return ___transactionID_3; }
	inline String_t** get_address_of_transactionID_3() { return &___transactionID_3; }
	inline void set_transactionID_3(String_t* value)
	{
		___transactionID_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___transactionID_3), (void*)value);
	}
};


// UnityEngine.Purchasing.ScriptingStoreCallback/<>c__DisplayClass8_0
struct U3CU3Ec__DisplayClass8_0_tC875F56D08FF4FFE51B8B881279B402786BA4210  : public RuntimeObject
{
public:
	// UnityEngine.Purchasing.ScriptingStoreCallback UnityEngine.Purchasing.ScriptingStoreCallback/<>c__DisplayClass8_0::<>4__this
	ScriptingStoreCallback_t201741301803D50F8E0881C5805639CE2F7CB288 * ___U3CU3E4__this_0;
	// System.Collections.Generic.List`1<UnityEngine.Purchasing.Product> UnityEngine.Purchasing.ScriptingStoreCallback/<>c__DisplayClass8_0::purchasedProducts
	List_1_tD6CD4E5E39E75EE330B0C6DB8A7A0AEE4966D8AA * ___purchasedProducts_1;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass8_0_tC875F56D08FF4FFE51B8B881279B402786BA4210, ___U3CU3E4__this_0)); }
	inline ScriptingStoreCallback_t201741301803D50F8E0881C5805639CE2F7CB288 * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline ScriptingStoreCallback_t201741301803D50F8E0881C5805639CE2F7CB288 ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(ScriptingStoreCallback_t201741301803D50F8E0881C5805639CE2F7CB288 * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_purchasedProducts_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass8_0_tC875F56D08FF4FFE51B8B881279B402786BA4210, ___purchasedProducts_1)); }
	inline List_1_tD6CD4E5E39E75EE330B0C6DB8A7A0AEE4966D8AA * get_purchasedProducts_1() const { return ___purchasedProducts_1; }
	inline List_1_tD6CD4E5E39E75EE330B0C6DB8A7A0AEE4966D8AA ** get_address_of_purchasedProducts_1() { return &___purchasedProducts_1; }
	inline void set_purchasedProducts_1(List_1_tD6CD4E5E39E75EE330B0C6DB8A7A0AEE4966D8AA * value)
	{
		___purchasedProducts_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___purchasedProducts_1), (void*)value);
	}
};


// UnityEngine.Purchasing.StandardPurchasingModule/MicrosoftConfiguration
struct MicrosoftConfiguration_t72E7005BD172865A7745C2935D2880DEFA88317D  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.Purchasing.StandardPurchasingModule/MicrosoftConfiguration::useMock
	bool ___useMock_0;
	// UnityEngine.Purchasing.StandardPurchasingModule UnityEngine.Purchasing.StandardPurchasingModule/MicrosoftConfiguration::module
	StandardPurchasingModule_t46866896DA828EA4F1EBF9C38C5E3B89FF1E91B6 * ___module_1;

public:
	inline static int32_t get_offset_of_useMock_0() { return static_cast<int32_t>(offsetof(MicrosoftConfiguration_t72E7005BD172865A7745C2935D2880DEFA88317D, ___useMock_0)); }
	inline bool get_useMock_0() const { return ___useMock_0; }
	inline bool* get_address_of_useMock_0() { return &___useMock_0; }
	inline void set_useMock_0(bool value)
	{
		___useMock_0 = value;
	}

	inline static int32_t get_offset_of_module_1() { return static_cast<int32_t>(offsetof(MicrosoftConfiguration_t72E7005BD172865A7745C2935D2880DEFA88317D, ___module_1)); }
	inline StandardPurchasingModule_t46866896DA828EA4F1EBF9C38C5E3B89FF1E91B6 * get_module_1() const { return ___module_1; }
	inline StandardPurchasingModule_t46866896DA828EA4F1EBF9C38C5E3B89FF1E91B6 ** get_address_of_module_1() { return &___module_1; }
	inline void set_module_1(StandardPurchasingModule_t46866896DA828EA4F1EBF9C38C5E3B89FF1E91B6 * value)
	{
		___module_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___module_1), (void*)value);
	}
};


// UnityEngine.Purchasing.StandardPurchasingModule/StoreInstance
struct StoreInstance_t7777C1EA2116BC0443B2557EC19229DD2BFAFDBA  : public RuntimeObject
{
public:
	// System.String UnityEngine.Purchasing.StandardPurchasingModule/StoreInstance::<storeName>k__BackingField
	String_t* ___U3CstoreNameU3Ek__BackingField_0;
	// UnityEngine.Purchasing.Extension.IStore UnityEngine.Purchasing.StandardPurchasingModule/StoreInstance::<instance>k__BackingField
	RuntimeObject* ___U3CinstanceU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CstoreNameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(StoreInstance_t7777C1EA2116BC0443B2557EC19229DD2BFAFDBA, ___U3CstoreNameU3Ek__BackingField_0)); }
	inline String_t* get_U3CstoreNameU3Ek__BackingField_0() const { return ___U3CstoreNameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CstoreNameU3Ek__BackingField_0() { return &___U3CstoreNameU3Ek__BackingField_0; }
	inline void set_U3CstoreNameU3Ek__BackingField_0(String_t* value)
	{
		___U3CstoreNameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CstoreNameU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CinstanceU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(StoreInstance_t7777C1EA2116BC0443B2557EC19229DD2BFAFDBA, ___U3CinstanceU3Ek__BackingField_1)); }
	inline RuntimeObject* get_U3CinstanceU3Ek__BackingField_1() const { return ___U3CinstanceU3Ek__BackingField_1; }
	inline RuntimeObject** get_address_of_U3CinstanceU3Ek__BackingField_1() { return &___U3CinstanceU3Ek__BackingField_1; }
	inline void set_U3CinstanceU3Ek__BackingField_1(RuntimeObject* value)
	{
		___U3CinstanceU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CinstanceU3Ek__BackingField_1), (void*)value);
	}
};


// UnityEngine.Purchasing.UDPImpl/<>c__DisplayClass10_0
struct U3CU3Ec__DisplayClass10_0_tB18ED9C2044158C2044A084B4D6829E404E0F236  : public RuntimeObject
{
public:
	// UnityEngine.Purchasing.UDPImpl UnityEngine.Purchasing.UDPImpl/<>c__DisplayClass10_0::<>4__this
	UDPImpl_t10D6EBBCE4EF9B6215CB108BDF04F75E404277F1 * ___U3CU3E4__this_0;
	// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Purchasing.ProductDefinition> UnityEngine.Purchasing.UDPImpl/<>c__DisplayClass10_0::products
	ReadOnlyCollection_1_tA17CC77D8AB24DD29DF396C7B3CC305302C189C3 * ___products_1;
	// System.Action`2<System.Boolean,System.String> UnityEngine.Purchasing.UDPImpl/<>c__DisplayClass10_0::retrieveCallback
	Action_2_t88E033566C44CCAAB72BD2C7604420B260FD3BF3 * ___retrieveCallback_2;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass10_0_tB18ED9C2044158C2044A084B4D6829E404E0F236, ___U3CU3E4__this_0)); }
	inline UDPImpl_t10D6EBBCE4EF9B6215CB108BDF04F75E404277F1 * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline UDPImpl_t10D6EBBCE4EF9B6215CB108BDF04F75E404277F1 ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(UDPImpl_t10D6EBBCE4EF9B6215CB108BDF04F75E404277F1 * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_products_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass10_0_tB18ED9C2044158C2044A084B4D6829E404E0F236, ___products_1)); }
	inline ReadOnlyCollection_1_tA17CC77D8AB24DD29DF396C7B3CC305302C189C3 * get_products_1() const { return ___products_1; }
	inline ReadOnlyCollection_1_tA17CC77D8AB24DD29DF396C7B3CC305302C189C3 ** get_address_of_products_1() { return &___products_1; }
	inline void set_products_1(ReadOnlyCollection_1_tA17CC77D8AB24DD29DF396C7B3CC305302C189C3 * value)
	{
		___products_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___products_1), (void*)value);
	}

	inline static int32_t get_offset_of_retrieveCallback_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass10_0_tB18ED9C2044158C2044A084B4D6829E404E0F236, ___retrieveCallback_2)); }
	inline Action_2_t88E033566C44CCAAB72BD2C7604420B260FD3BF3 * get_retrieveCallback_2() const { return ___retrieveCallback_2; }
	inline Action_2_t88E033566C44CCAAB72BD2C7604420B260FD3BF3 ** get_address_of_retrieveCallback_2() { return &___retrieveCallback_2; }
	inline void set_retrieveCallback_2(Action_2_t88E033566C44CCAAB72BD2C7604420B260FD3BF3 * value)
	{
		___retrieveCallback_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___retrieveCallback_2), (void*)value);
	}
};


// UnityEngine.Purchasing.UDPImpl/<>c__DisplayClass11_0
struct U3CU3Ec__DisplayClass11_0_tA52647570260163D1D5F8C1FDA00B24D12D032FA  : public RuntimeObject
{
public:
	// UnityEngine.Purchasing.ProductDefinition UnityEngine.Purchasing.UDPImpl/<>c__DisplayClass11_0::product
	ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572 * ___product_0;
	// UnityEngine.Purchasing.UDPImpl UnityEngine.Purchasing.UDPImpl/<>c__DisplayClass11_0::<>4__this
	UDPImpl_t10D6EBBCE4EF9B6215CB108BDF04F75E404277F1 * ___U3CU3E4__this_1;

public:
	inline static int32_t get_offset_of_product_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass11_0_tA52647570260163D1D5F8C1FDA00B24D12D032FA, ___product_0)); }
	inline ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572 * get_product_0() const { return ___product_0; }
	inline ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572 ** get_address_of_product_0() { return &___product_0; }
	inline void set_product_0(ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572 * value)
	{
		___product_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___product_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass11_0_tA52647570260163D1D5F8C1FDA00B24D12D032FA, ___U3CU3E4__this_1)); }
	inline UDPImpl_t10D6EBBCE4EF9B6215CB108BDF04F75E404277F1 * get_U3CU3E4__this_1() const { return ___U3CU3E4__this_1; }
	inline UDPImpl_t10D6EBBCE4EF9B6215CB108BDF04F75E404277F1 ** get_address_of_U3CU3E4__this_1() { return &___U3CU3E4__this_1; }
	inline void set_U3CU3E4__this_1(UDPImpl_t10D6EBBCE4EF9B6215CB108BDF04F75E404277F1 * value)
	{
		___U3CU3E4__this_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_1), (void*)value);
	}
};


// UnityEngine.Purchasing.UDPReflectionUtils/<>c__DisplayClass6_0
struct U3CU3Ec__DisplayClass6_0_tFC02CD6F9A7EFE0BD5EE8356D40FD5373E0DC90D  : public RuntimeObject
{
public:
	// System.Reflection.Assembly UnityEngine.Purchasing.UDPReflectionUtils/<>c__DisplayClass6_0::assembly
	Assembly_t * ___assembly_0;

public:
	inline static int32_t get_offset_of_assembly_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass6_0_tFC02CD6F9A7EFE0BD5EE8356D40FD5373E0DC90D, ___assembly_0)); }
	inline Assembly_t * get_assembly_0() const { return ___assembly_0; }
	inline Assembly_t ** get_address_of_assembly_0() { return &___assembly_0; }
	inline void set_assembly_0(Assembly_t * value)
	{
		___assembly_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___assembly_0), (void*)value);
	}
};


// UnityEngine.Purchasing.UIFakeStore/<>c
struct U3CU3Ec_t4C01EB1EC5B633A6C269CEF322D5F130DD02C372  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t4C01EB1EC5B633A6C269CEF322D5F130DD02C372_StaticFields
{
public:
	// UnityEngine.Purchasing.UIFakeStore/<>c UnityEngine.Purchasing.UIFakeStore/<>c::<>9
	U3CU3Ec_t4C01EB1EC5B633A6C269CEF322D5F130DD02C372 * ___U3CU3E9_0;
	// System.Func`2<UnityEngine.Purchasing.ProductDefinition,System.String> UnityEngine.Purchasing.UIFakeStore/<>c::<>9__20_0
	Func_2_tAB10861D99AA807AE21941AC819229F13C65AE06 * ___U3CU3E9__20_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t4C01EB1EC5B633A6C269CEF322D5F130DD02C372_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t4C01EB1EC5B633A6C269CEF322D5F130DD02C372 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t4C01EB1EC5B633A6C269CEF322D5F130DD02C372 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t4C01EB1EC5B633A6C269CEF322D5F130DD02C372 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__20_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t4C01EB1EC5B633A6C269CEF322D5F130DD02C372_StaticFields, ___U3CU3E9__20_0_1)); }
	inline Func_2_tAB10861D99AA807AE21941AC819229F13C65AE06 * get_U3CU3E9__20_0_1() const { return ___U3CU3E9__20_0_1; }
	inline Func_2_tAB10861D99AA807AE21941AC819229F13C65AE06 ** get_address_of_U3CU3E9__20_0_1() { return &___U3CU3E9__20_0_1; }
	inline void set_U3CU3E9__20_0_1(Func_2_tAB10861D99AA807AE21941AC819229F13C65AE06 * value)
	{
		___U3CU3E9__20_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__20_0_1), (void*)value);
	}
};


// UnityEngine.Purchasing.Extension.UnityUtil/<DelayedCoroutine>d__48
struct U3CDelayedCoroutineU3Ed__48_tC4749091BA348052BE31023A7D2F5000281F024C  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.Purchasing.Extension.UnityUtil/<DelayedCoroutine>d__48::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object UnityEngine.Purchasing.Extension.UnityUtil/<DelayedCoroutine>d__48::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.Int32 UnityEngine.Purchasing.Extension.UnityUtil/<DelayedCoroutine>d__48::delay
	int32_t ___delay_2;
	// UnityEngine.Purchasing.Extension.UnityUtil UnityEngine.Purchasing.Extension.UnityUtil/<DelayedCoroutine>d__48::<>4__this
	UnityUtil_t889EAFBFB8290CE278044818482339ED03EA4172 * ___U3CU3E4__this_3;
	// System.Collections.IEnumerator UnityEngine.Purchasing.Extension.UnityUtil/<DelayedCoroutine>d__48::coroutine
	RuntimeObject* ___coroutine_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CDelayedCoroutineU3Ed__48_tC4749091BA348052BE31023A7D2F5000281F024C, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CDelayedCoroutineU3Ed__48_tC4749091BA348052BE31023A7D2F5000281F024C, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_delay_2() { return static_cast<int32_t>(offsetof(U3CDelayedCoroutineU3Ed__48_tC4749091BA348052BE31023A7D2F5000281F024C, ___delay_2)); }
	inline int32_t get_delay_2() const { return ___delay_2; }
	inline int32_t* get_address_of_delay_2() { return &___delay_2; }
	inline void set_delay_2(int32_t value)
	{
		___delay_2 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CDelayedCoroutineU3Ed__48_tC4749091BA348052BE31023A7D2F5000281F024C, ___U3CU3E4__this_3)); }
	inline UnityUtil_t889EAFBFB8290CE278044818482339ED03EA4172 * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline UnityUtil_t889EAFBFB8290CE278044818482339ED03EA4172 ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(UnityUtil_t889EAFBFB8290CE278044818482339ED03EA4172 * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}

	inline static int32_t get_offset_of_coroutine_4() { return static_cast<int32_t>(offsetof(U3CDelayedCoroutineU3Ed__48_tC4749091BA348052BE31023A7D2F5000281F024C, ___coroutine_4)); }
	inline RuntimeObject* get_coroutine_4() const { return ___coroutine_4; }
	inline RuntimeObject** get_address_of_coroutine_4() { return &___coroutine_4; }
	inline void set_coroutine_4(RuntimeObject* value)
	{
		___coroutine_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___coroutine_4), (void*)value);
	}
};


// UnityEngine.Purchasing.WinRTStore/<>c
struct U3CU3Ec_t114F9247D6420894D3A5B1652CCBE81140258A1D  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t114F9247D6420894D3A5B1652CCBE81140258A1D_StaticFields
{
public:
	// UnityEngine.Purchasing.WinRTStore/<>c UnityEngine.Purchasing.WinRTStore/<>c::<>9
	U3CU3Ec_t114F9247D6420894D3A5B1652CCBE81140258A1D * ___U3CU3E9_0;
	// System.Func`2<UnityEngine.Purchasing.ProductDefinition,System.Boolean> UnityEngine.Purchasing.WinRTStore/<>c::<>9__8_0
	Func_2_t2F3D631795CE97DFD1F4F32CA7BA9B506C483851 * ___U3CU3E9__8_0_1;
	// System.Func`2<UnityEngine.Purchasing.ProductDefinition,UnityEngine.Purchasing.Default.WinProductDescription> UnityEngine.Purchasing.WinRTStore/<>c::<>9__8_1
	Func_2_t26F79FEEAFC83C364423428EC9E72457BDC04366 * ___U3CU3E9__8_1_2;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t114F9247D6420894D3A5B1652CCBE81140258A1D_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t114F9247D6420894D3A5B1652CCBE81140258A1D * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t114F9247D6420894D3A5B1652CCBE81140258A1D ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t114F9247D6420894D3A5B1652CCBE81140258A1D * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__8_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t114F9247D6420894D3A5B1652CCBE81140258A1D_StaticFields, ___U3CU3E9__8_0_1)); }
	inline Func_2_t2F3D631795CE97DFD1F4F32CA7BA9B506C483851 * get_U3CU3E9__8_0_1() const { return ___U3CU3E9__8_0_1; }
	inline Func_2_t2F3D631795CE97DFD1F4F32CA7BA9B506C483851 ** get_address_of_U3CU3E9__8_0_1() { return &___U3CU3E9__8_0_1; }
	inline void set_U3CU3E9__8_0_1(Func_2_t2F3D631795CE97DFD1F4F32CA7BA9B506C483851 * value)
	{
		___U3CU3E9__8_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__8_0_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__8_1_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_t114F9247D6420894D3A5B1652CCBE81140258A1D_StaticFields, ___U3CU3E9__8_1_2)); }
	inline Func_2_t26F79FEEAFC83C364423428EC9E72457BDC04366 * get_U3CU3E9__8_1_2() const { return ___U3CU3E9__8_1_2; }
	inline Func_2_t26F79FEEAFC83C364423428EC9E72457BDC04366 ** get_address_of_U3CU3E9__8_1_2() { return &___U3CU3E9__8_1_2; }
	inline void set_U3CU3E9__8_1_2(Func_2_t26F79FEEAFC83C364423428EC9E72457BDC04366 * value)
	{
		___U3CU3E9__8_1_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__8_1_2), (void*)value);
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

// System.Text.RegularExpressions.Group
struct Group_t0B987F132503F2672BC66FCDD21EA8A6EB484883  : public Capture_t048191E7E0D3177DCD8610E4968075AB41FB91D6
{
public:
	// System.Int32[] System.Text.RegularExpressions.Group::_caps
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____caps_4;
	// System.Int32 System.Text.RegularExpressions.Group::_capcount
	int32_t ____capcount_5;
	// System.Text.RegularExpressions.CaptureCollection System.Text.RegularExpressions.Group::_capcoll
	CaptureCollection_t40C06BBACB56CDD5F84860FDC1B0C3D8F160DCF9 * ____capcoll_6;
	// System.String System.Text.RegularExpressions.Group::_name
	String_t* ____name_7;

public:
	inline static int32_t get_offset_of__caps_4() { return static_cast<int32_t>(offsetof(Group_t0B987F132503F2672BC66FCDD21EA8A6EB484883, ____caps_4)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__caps_4() const { return ____caps_4; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__caps_4() { return &____caps_4; }
	inline void set__caps_4(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		____caps_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____caps_4), (void*)value);
	}

	inline static int32_t get_offset_of__capcount_5() { return static_cast<int32_t>(offsetof(Group_t0B987F132503F2672BC66FCDD21EA8A6EB484883, ____capcount_5)); }
	inline int32_t get__capcount_5() const { return ____capcount_5; }
	inline int32_t* get_address_of__capcount_5() { return &____capcount_5; }
	inline void set__capcount_5(int32_t value)
	{
		____capcount_5 = value;
	}

	inline static int32_t get_offset_of__capcoll_6() { return static_cast<int32_t>(offsetof(Group_t0B987F132503F2672BC66FCDD21EA8A6EB484883, ____capcoll_6)); }
	inline CaptureCollection_t40C06BBACB56CDD5F84860FDC1B0C3D8F160DCF9 * get__capcoll_6() const { return ____capcoll_6; }
	inline CaptureCollection_t40C06BBACB56CDD5F84860FDC1B0C3D8F160DCF9 ** get_address_of__capcoll_6() { return &____capcoll_6; }
	inline void set__capcoll_6(CaptureCollection_t40C06BBACB56CDD5F84860FDC1B0C3D8F160DCF9 * value)
	{
		____capcoll_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____capcoll_6), (void*)value);
	}

	inline static int32_t get_offset_of__name_7() { return static_cast<int32_t>(offsetof(Group_t0B987F132503F2672BC66FCDD21EA8A6EB484883, ____name_7)); }
	inline String_t* get__name_7() const { return ____name_7; }
	inline String_t** get_address_of__name_7() { return &____name_7; }
	inline void set__name_7(String_t* value)
	{
		____name_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____name_7), (void*)value);
	}
};

struct Group_t0B987F132503F2672BC66FCDD21EA8A6EB484883_StaticFields
{
public:
	// System.Text.RegularExpressions.Group System.Text.RegularExpressions.Group::_emptygroup
	Group_t0B987F132503F2672BC66FCDD21EA8A6EB484883 * ____emptygroup_3;

public:
	inline static int32_t get_offset_of__emptygroup_3() { return static_cast<int32_t>(offsetof(Group_t0B987F132503F2672BC66FCDD21EA8A6EB484883_StaticFields, ____emptygroup_3)); }
	inline Group_t0B987F132503F2672BC66FCDD21EA8A6EB484883 * get__emptygroup_3() const { return ____emptygroup_3; }
	inline Group_t0B987F132503F2672BC66FCDD21EA8A6EB484883 ** get_address_of__emptygroup_3() { return &____emptygroup_3; }
	inline void set__emptygroup_3(Group_t0B987F132503F2672BC66FCDD21EA8A6EB484883 * value)
	{
		____emptygroup_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptygroup_3), (void*)value);
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


// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;

public:
	inline static int32_t get_offset_of_m_Seconds_0() { return static_cast<int32_t>(offsetof(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013, ___m_Seconds_0)); }
	inline float get_m_Seconds_0() const { return ___m_Seconds_0; }
	inline float* get_address_of_m_Seconds_0() { return &___m_Seconds_0; }
	inline void set_m_Seconds_0(float value)
	{
		___m_Seconds_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	float ___m_Seconds_0;
};

// UnityEngine.Purchasing.AppStore
struct AppStore_t0DC87570FC5B5AA50F2B2BFF4860C452BE702904 
{
public:
	// System.Int32 UnityEngine.Purchasing.AppStore::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AppStore_t0DC87570FC5B5AA50F2B2BFF4860C452BE702904, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Reflection.Assembly
struct Assembly_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Reflection.Assembly::_mono_assembly
	intptr_t ____mono_assembly_0;
	// System.Reflection.Assembly/ResolveEventHolder System.Reflection.Assembly::resolve_event_holder
	ResolveEventHolder_tA37081FAEBE21D83D216225B4489BA8A37B4E13C * ___resolve_event_holder_1;
	// System.Object System.Reflection.Assembly::_evidence
	RuntimeObject * ____evidence_2;
	// System.Object System.Reflection.Assembly::_minimum
	RuntimeObject * ____minimum_3;
	// System.Object System.Reflection.Assembly::_optional
	RuntimeObject * ____optional_4;
	// System.Object System.Reflection.Assembly::_refuse
	RuntimeObject * ____refuse_5;
	// System.Object System.Reflection.Assembly::_granted
	RuntimeObject * ____granted_6;
	// System.Object System.Reflection.Assembly::_denied
	RuntimeObject * ____denied_7;
	// System.Boolean System.Reflection.Assembly::fromByteArray
	bool ___fromByteArray_8;
	// System.String System.Reflection.Assembly::assemblyName
	String_t* ___assemblyName_9;

public:
	inline static int32_t get_offset_of__mono_assembly_0() { return static_cast<int32_t>(offsetof(Assembly_t, ____mono_assembly_0)); }
	inline intptr_t get__mono_assembly_0() const { return ____mono_assembly_0; }
	inline intptr_t* get_address_of__mono_assembly_0() { return &____mono_assembly_0; }
	inline void set__mono_assembly_0(intptr_t value)
	{
		____mono_assembly_0 = value;
	}

	inline static int32_t get_offset_of_resolve_event_holder_1() { return static_cast<int32_t>(offsetof(Assembly_t, ___resolve_event_holder_1)); }
	inline ResolveEventHolder_tA37081FAEBE21D83D216225B4489BA8A37B4E13C * get_resolve_event_holder_1() const { return ___resolve_event_holder_1; }
	inline ResolveEventHolder_tA37081FAEBE21D83D216225B4489BA8A37B4E13C ** get_address_of_resolve_event_holder_1() { return &___resolve_event_holder_1; }
	inline void set_resolve_event_holder_1(ResolveEventHolder_tA37081FAEBE21D83D216225B4489BA8A37B4E13C * value)
	{
		___resolve_event_holder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___resolve_event_holder_1), (void*)value);
	}

	inline static int32_t get_offset_of__evidence_2() { return static_cast<int32_t>(offsetof(Assembly_t, ____evidence_2)); }
	inline RuntimeObject * get__evidence_2() const { return ____evidence_2; }
	inline RuntimeObject ** get_address_of__evidence_2() { return &____evidence_2; }
	inline void set__evidence_2(RuntimeObject * value)
	{
		____evidence_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____evidence_2), (void*)value);
	}

	inline static int32_t get_offset_of__minimum_3() { return static_cast<int32_t>(offsetof(Assembly_t, ____minimum_3)); }
	inline RuntimeObject * get__minimum_3() const { return ____minimum_3; }
	inline RuntimeObject ** get_address_of__minimum_3() { return &____minimum_3; }
	inline void set__minimum_3(RuntimeObject * value)
	{
		____minimum_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____minimum_3), (void*)value);
	}

	inline static int32_t get_offset_of__optional_4() { return static_cast<int32_t>(offsetof(Assembly_t, ____optional_4)); }
	inline RuntimeObject * get__optional_4() const { return ____optional_4; }
	inline RuntimeObject ** get_address_of__optional_4() { return &____optional_4; }
	inline void set__optional_4(RuntimeObject * value)
	{
		____optional_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____optional_4), (void*)value);
	}

	inline static int32_t get_offset_of__refuse_5() { return static_cast<int32_t>(offsetof(Assembly_t, ____refuse_5)); }
	inline RuntimeObject * get__refuse_5() const { return ____refuse_5; }
	inline RuntimeObject ** get_address_of__refuse_5() { return &____refuse_5; }
	inline void set__refuse_5(RuntimeObject * value)
	{
		____refuse_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____refuse_5), (void*)value);
	}

	inline static int32_t get_offset_of__granted_6() { return static_cast<int32_t>(offsetof(Assembly_t, ____granted_6)); }
	inline RuntimeObject * get__granted_6() const { return ____granted_6; }
	inline RuntimeObject ** get_address_of__granted_6() { return &____granted_6; }
	inline void set__granted_6(RuntimeObject * value)
	{
		____granted_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____granted_6), (void*)value);
	}

	inline static int32_t get_offset_of__denied_7() { return static_cast<int32_t>(offsetof(Assembly_t, ____denied_7)); }
	inline RuntimeObject * get__denied_7() const { return ____denied_7; }
	inline RuntimeObject ** get_address_of__denied_7() { return &____denied_7; }
	inline void set__denied_7(RuntimeObject * value)
	{
		____denied_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____denied_7), (void*)value);
	}

	inline static int32_t get_offset_of_fromByteArray_8() { return static_cast<int32_t>(offsetof(Assembly_t, ___fromByteArray_8)); }
	inline bool get_fromByteArray_8() const { return ___fromByteArray_8; }
	inline bool* get_address_of_fromByteArray_8() { return &___fromByteArray_8; }
	inline void set_fromByteArray_8(bool value)
	{
		___fromByteArray_8 = value;
	}

	inline static int32_t get_offset_of_assemblyName_9() { return static_cast<int32_t>(offsetof(Assembly_t, ___assemblyName_9)); }
	inline String_t* get_assemblyName_9() const { return ___assemblyName_9; }
	inline String_t** get_address_of_assemblyName_9() { return &___assemblyName_9; }
	inline void set_assemblyName_9(String_t* value)
	{
		___assemblyName_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___assemblyName_9), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Reflection.Assembly
struct Assembly_t_marshaled_pinvoke
{
	intptr_t ____mono_assembly_0;
	ResolveEventHolder_tA37081FAEBE21D83D216225B4489BA8A37B4E13C * ___resolve_event_holder_1;
	Il2CppIUnknown* ____evidence_2;
	Il2CppIUnknown* ____minimum_3;
	Il2CppIUnknown* ____optional_4;
	Il2CppIUnknown* ____refuse_5;
	Il2CppIUnknown* ____granted_6;
	Il2CppIUnknown* ____denied_7;
	int32_t ___fromByteArray_8;
	char* ___assemblyName_9;
};
// Native definition for COM marshalling of System.Reflection.Assembly
struct Assembly_t_marshaled_com
{
	intptr_t ____mono_assembly_0;
	ResolveEventHolder_tA37081FAEBE21D83D216225B4489BA8A37B4E13C * ___resolve_event_holder_1;
	Il2CppIUnknown* ____evidence_2;
	Il2CppIUnknown* ____minimum_3;
	Il2CppIUnknown* ____optional_4;
	Il2CppIUnknown* ____refuse_5;
	Il2CppIUnknown* ____granted_6;
	Il2CppIUnknown* ____denied_7;
	int32_t ___fromByteArray_8;
	Il2CppChar* ___assemblyName_9;
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


// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	intptr_t ___m_Ptr_0;
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

// UnityEngine.Purchasing.FakeStoreUIMode
struct FakeStoreUIMode_tE679DB350441225A22E631E8E8ADBB8B6C74C2F8 
{
public:
	// System.Int32 UnityEngine.Purchasing.FakeStoreUIMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FakeStoreUIMode_tE679DB350441225A22E631E8E8ADBB8B6C74C2F8, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Purchasing.InitializationFailureReason
struct InitializationFailureReason_t63D9BE9105494C8AB7836A61F07115B84654837B 
{
public:
	// System.Int32 UnityEngine.Purchasing.InitializationFailureReason::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InitializationFailureReason_t63D9BE9105494C8AB7836A61F07115B84654837B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.LogType
struct LogType_tF490DBF8368BD4EBA703B2824CB76A853820F773 
{
public:
	// System.Int32 UnityEngine.LogType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LogType_tF490DBF8368BD4EBA703B2824CB76A853820F773, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Text.RegularExpressions.Match
struct Match_t8CC0A47F766954F17AD4D1C1597754C8F576464B  : public Group_t0B987F132503F2672BC66FCDD21EA8A6EB484883
{
public:
	// System.Text.RegularExpressions.GroupCollection System.Text.RegularExpressions.Match::_groupcoll
	GroupCollection_tAA9CA4E93B1A9D6B7199EE25AEB32922E72AA556 * ____groupcoll_9;
	// System.Text.RegularExpressions.Regex System.Text.RegularExpressions.Match::_regex
	Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * ____regex_10;
	// System.Int32 System.Text.RegularExpressions.Match::_textbeg
	int32_t ____textbeg_11;
	// System.Int32 System.Text.RegularExpressions.Match::_textpos
	int32_t ____textpos_12;
	// System.Int32 System.Text.RegularExpressions.Match::_textend
	int32_t ____textend_13;
	// System.Int32 System.Text.RegularExpressions.Match::_textstart
	int32_t ____textstart_14;
	// System.Int32[][] System.Text.RegularExpressions.Match::_matches
	Int32U5BU5DU5BU5D_t104DBF1B996084AA19567FD32B02EDF88D044FAF* ____matches_15;
	// System.Int32[] System.Text.RegularExpressions.Match::_matchcount
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____matchcount_16;
	// System.Boolean System.Text.RegularExpressions.Match::_balancing
	bool ____balancing_17;

public:
	inline static int32_t get_offset_of__groupcoll_9() { return static_cast<int32_t>(offsetof(Match_t8CC0A47F766954F17AD4D1C1597754C8F576464B, ____groupcoll_9)); }
	inline GroupCollection_tAA9CA4E93B1A9D6B7199EE25AEB32922E72AA556 * get__groupcoll_9() const { return ____groupcoll_9; }
	inline GroupCollection_tAA9CA4E93B1A9D6B7199EE25AEB32922E72AA556 ** get_address_of__groupcoll_9() { return &____groupcoll_9; }
	inline void set__groupcoll_9(GroupCollection_tAA9CA4E93B1A9D6B7199EE25AEB32922E72AA556 * value)
	{
		____groupcoll_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____groupcoll_9), (void*)value);
	}

	inline static int32_t get_offset_of__regex_10() { return static_cast<int32_t>(offsetof(Match_t8CC0A47F766954F17AD4D1C1597754C8F576464B, ____regex_10)); }
	inline Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * get__regex_10() const { return ____regex_10; }
	inline Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F ** get_address_of__regex_10() { return &____regex_10; }
	inline void set__regex_10(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * value)
	{
		____regex_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____regex_10), (void*)value);
	}

	inline static int32_t get_offset_of__textbeg_11() { return static_cast<int32_t>(offsetof(Match_t8CC0A47F766954F17AD4D1C1597754C8F576464B, ____textbeg_11)); }
	inline int32_t get__textbeg_11() const { return ____textbeg_11; }
	inline int32_t* get_address_of__textbeg_11() { return &____textbeg_11; }
	inline void set__textbeg_11(int32_t value)
	{
		____textbeg_11 = value;
	}

	inline static int32_t get_offset_of__textpos_12() { return static_cast<int32_t>(offsetof(Match_t8CC0A47F766954F17AD4D1C1597754C8F576464B, ____textpos_12)); }
	inline int32_t get__textpos_12() const { return ____textpos_12; }
	inline int32_t* get_address_of__textpos_12() { return &____textpos_12; }
	inline void set__textpos_12(int32_t value)
	{
		____textpos_12 = value;
	}

	inline static int32_t get_offset_of__textend_13() { return static_cast<int32_t>(offsetof(Match_t8CC0A47F766954F17AD4D1C1597754C8F576464B, ____textend_13)); }
	inline int32_t get__textend_13() const { return ____textend_13; }
	inline int32_t* get_address_of__textend_13() { return &____textend_13; }
	inline void set__textend_13(int32_t value)
	{
		____textend_13 = value;
	}

	inline static int32_t get_offset_of__textstart_14() { return static_cast<int32_t>(offsetof(Match_t8CC0A47F766954F17AD4D1C1597754C8F576464B, ____textstart_14)); }
	inline int32_t get__textstart_14() const { return ____textstart_14; }
	inline int32_t* get_address_of__textstart_14() { return &____textstart_14; }
	inline void set__textstart_14(int32_t value)
	{
		____textstart_14 = value;
	}

	inline static int32_t get_offset_of__matches_15() { return static_cast<int32_t>(offsetof(Match_t8CC0A47F766954F17AD4D1C1597754C8F576464B, ____matches_15)); }
	inline Int32U5BU5DU5BU5D_t104DBF1B996084AA19567FD32B02EDF88D044FAF* get__matches_15() const { return ____matches_15; }
	inline Int32U5BU5DU5BU5D_t104DBF1B996084AA19567FD32B02EDF88D044FAF** get_address_of__matches_15() { return &____matches_15; }
	inline void set__matches_15(Int32U5BU5DU5BU5D_t104DBF1B996084AA19567FD32B02EDF88D044FAF* value)
	{
		____matches_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____matches_15), (void*)value);
	}

	inline static int32_t get_offset_of__matchcount_16() { return static_cast<int32_t>(offsetof(Match_t8CC0A47F766954F17AD4D1C1597754C8F576464B, ____matchcount_16)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__matchcount_16() const { return ____matchcount_16; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__matchcount_16() { return &____matchcount_16; }
	inline void set__matchcount_16(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		____matchcount_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____matchcount_16), (void*)value);
	}

	inline static int32_t get_offset_of__balancing_17() { return static_cast<int32_t>(offsetof(Match_t8CC0A47F766954F17AD4D1C1597754C8F576464B, ____balancing_17)); }
	inline bool get__balancing_17() const { return ____balancing_17; }
	inline bool* get_address_of__balancing_17() { return &____balancing_17; }
	inline void set__balancing_17(bool value)
	{
		____balancing_17 = value;
	}
};

struct Match_t8CC0A47F766954F17AD4D1C1597754C8F576464B_StaticFields
{
public:
	// System.Text.RegularExpressions.Match System.Text.RegularExpressions.Match::_empty
	Match_t8CC0A47F766954F17AD4D1C1597754C8F576464B * ____empty_8;

public:
	inline static int32_t get_offset_of__empty_8() { return static_cast<int32_t>(offsetof(Match_t8CC0A47F766954F17AD4D1C1597754C8F576464B_StaticFields, ____empty_8)); }
	inline Match_t8CC0A47F766954F17AD4D1C1597754C8F576464B * get__empty_8() const { return ____empty_8; }
	inline Match_t8CC0A47F766954F17AD4D1C1597754C8F576464B ** get_address_of__empty_8() { return &____empty_8; }
	inline void set__empty_8(Match_t8CC0A47F766954F17AD4D1C1597754C8F576464B * value)
	{
		____empty_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____empty_8), (void*)value);
	}
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

// UnityEngine.Purchasing.ProductType
struct ProductType_tBF332314E0B8C2094184DDA4751FDB3518A79D5A 
{
public:
	// System.Int32 UnityEngine.Purchasing.ProductType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ProductType_tBF332314E0B8C2094184DDA4751FDB3518A79D5A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Purchasing.PurchaseFailureReason
struct PurchaseFailureReason_t92D34AB6DC07828C5204898759640EDFB9336BA5 
{
public:
	// System.Int32 UnityEngine.Purchasing.PurchaseFailureReason::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PurchaseFailureReason_t92D34AB6DC07828C5204898759640EDFB9336BA5, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
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


// UnityEngine.Purchasing.StoreSpecificPurchaseErrorCode
struct StoreSpecificPurchaseErrorCode_t7BF6EC79694664A957BAAC28379CA3920FBE2B53 
{
public:
	// System.Int32 UnityEngine.Purchasing.StoreSpecificPurchaseErrorCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StoreSpecificPurchaseErrorCode_t7BF6EC79694664A957BAAC28379CA3920FBE2B53, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Purchasing.Default.WinProductDescription
struct WinProductDescription_tA1CEDA6F11485CE9F301415C989ECF6A3A8B4829  : public RuntimeObject
{
public:
	// System.String UnityEngine.Purchasing.Default.WinProductDescription::<platformSpecificID>k__BackingField
	String_t* ___U3CplatformSpecificIDU3Ek__BackingField_0;
	// System.String UnityEngine.Purchasing.Default.WinProductDescription::<price>k__BackingField
	String_t* ___U3CpriceU3Ek__BackingField_1;
	// System.String UnityEngine.Purchasing.Default.WinProductDescription::<title>k__BackingField
	String_t* ___U3CtitleU3Ek__BackingField_2;
	// System.String UnityEngine.Purchasing.Default.WinProductDescription::<description>k__BackingField
	String_t* ___U3CdescriptionU3Ek__BackingField_3;
	// System.String UnityEngine.Purchasing.Default.WinProductDescription::<ISOCurrencyCode>k__BackingField
	String_t* ___U3CISOCurrencyCodeU3Ek__BackingField_4;
	// System.Decimal UnityEngine.Purchasing.Default.WinProductDescription::<priceDecimal>k__BackingField
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___U3CpriceDecimalU3Ek__BackingField_5;
	// System.String UnityEngine.Purchasing.Default.WinProductDescription::<receipt>k__BackingField
	String_t* ___U3CreceiptU3Ek__BackingField_6;
	// System.String UnityEngine.Purchasing.Default.WinProductDescription::<transactionID>k__BackingField
	String_t* ___U3CtransactionIDU3Ek__BackingField_7;
	// System.Boolean UnityEngine.Purchasing.Default.WinProductDescription::<consumable>k__BackingField
	bool ___U3CconsumableU3Ek__BackingField_8;

public:
	inline static int32_t get_offset_of_U3CplatformSpecificIDU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(WinProductDescription_tA1CEDA6F11485CE9F301415C989ECF6A3A8B4829, ___U3CplatformSpecificIDU3Ek__BackingField_0)); }
	inline String_t* get_U3CplatformSpecificIDU3Ek__BackingField_0() const { return ___U3CplatformSpecificIDU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CplatformSpecificIDU3Ek__BackingField_0() { return &___U3CplatformSpecificIDU3Ek__BackingField_0; }
	inline void set_U3CplatformSpecificIDU3Ek__BackingField_0(String_t* value)
	{
		___U3CplatformSpecificIDU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CplatformSpecificIDU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpriceU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(WinProductDescription_tA1CEDA6F11485CE9F301415C989ECF6A3A8B4829, ___U3CpriceU3Ek__BackingField_1)); }
	inline String_t* get_U3CpriceU3Ek__BackingField_1() const { return ___U3CpriceU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CpriceU3Ek__BackingField_1() { return &___U3CpriceU3Ek__BackingField_1; }
	inline void set_U3CpriceU3Ek__BackingField_1(String_t* value)
	{
		___U3CpriceU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpriceU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CtitleU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(WinProductDescription_tA1CEDA6F11485CE9F301415C989ECF6A3A8B4829, ___U3CtitleU3Ek__BackingField_2)); }
	inline String_t* get_U3CtitleU3Ek__BackingField_2() const { return ___U3CtitleU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CtitleU3Ek__BackingField_2() { return &___U3CtitleU3Ek__BackingField_2; }
	inline void set_U3CtitleU3Ek__BackingField_2(String_t* value)
	{
		___U3CtitleU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtitleU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdescriptionU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(WinProductDescription_tA1CEDA6F11485CE9F301415C989ECF6A3A8B4829, ___U3CdescriptionU3Ek__BackingField_3)); }
	inline String_t* get_U3CdescriptionU3Ek__BackingField_3() const { return ___U3CdescriptionU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3CdescriptionU3Ek__BackingField_3() { return &___U3CdescriptionU3Ek__BackingField_3; }
	inline void set_U3CdescriptionU3Ek__BackingField_3(String_t* value)
	{
		___U3CdescriptionU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CdescriptionU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CISOCurrencyCodeU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(WinProductDescription_tA1CEDA6F11485CE9F301415C989ECF6A3A8B4829, ___U3CISOCurrencyCodeU3Ek__BackingField_4)); }
	inline String_t* get_U3CISOCurrencyCodeU3Ek__BackingField_4() const { return ___U3CISOCurrencyCodeU3Ek__BackingField_4; }
	inline String_t** get_address_of_U3CISOCurrencyCodeU3Ek__BackingField_4() { return &___U3CISOCurrencyCodeU3Ek__BackingField_4; }
	inline void set_U3CISOCurrencyCodeU3Ek__BackingField_4(String_t* value)
	{
		___U3CISOCurrencyCodeU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CISOCurrencyCodeU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpriceDecimalU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(WinProductDescription_tA1CEDA6F11485CE9F301415C989ECF6A3A8B4829, ___U3CpriceDecimalU3Ek__BackingField_5)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_U3CpriceDecimalU3Ek__BackingField_5() const { return ___U3CpriceDecimalU3Ek__BackingField_5; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_U3CpriceDecimalU3Ek__BackingField_5() { return &___U3CpriceDecimalU3Ek__BackingField_5; }
	inline void set_U3CpriceDecimalU3Ek__BackingField_5(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___U3CpriceDecimalU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CreceiptU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(WinProductDescription_tA1CEDA6F11485CE9F301415C989ECF6A3A8B4829, ___U3CreceiptU3Ek__BackingField_6)); }
	inline String_t* get_U3CreceiptU3Ek__BackingField_6() const { return ___U3CreceiptU3Ek__BackingField_6; }
	inline String_t** get_address_of_U3CreceiptU3Ek__BackingField_6() { return &___U3CreceiptU3Ek__BackingField_6; }
	inline void set_U3CreceiptU3Ek__BackingField_6(String_t* value)
	{
		___U3CreceiptU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CreceiptU3Ek__BackingField_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CtransactionIDU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(WinProductDescription_tA1CEDA6F11485CE9F301415C989ECF6A3A8B4829, ___U3CtransactionIDU3Ek__BackingField_7)); }
	inline String_t* get_U3CtransactionIDU3Ek__BackingField_7() const { return ___U3CtransactionIDU3Ek__BackingField_7; }
	inline String_t** get_address_of_U3CtransactionIDU3Ek__BackingField_7() { return &___U3CtransactionIDU3Ek__BackingField_7; }
	inline void set_U3CtransactionIDU3Ek__BackingField_7(String_t* value)
	{
		___U3CtransactionIDU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtransactionIDU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CconsumableU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(WinProductDescription_tA1CEDA6F11485CE9F301415C989ECF6A3A8B4829, ___U3CconsumableU3Ek__BackingField_8)); }
	inline bool get_U3CconsumableU3Ek__BackingField_8() const { return ___U3CconsumableU3Ek__BackingField_8; }
	inline bool* get_address_of_U3CconsumableU3Ek__BackingField_8() { return &___U3CconsumableU3Ek__BackingField_8; }
	inline void set_U3CconsumableU3Ek__BackingField_8(bool value)
	{
		___U3CconsumableU3Ek__BackingField_8 = value;
	}
};


// UnityEngine.Purchasing.FakeStore/DialogType
struct DialogType_t33C5033ED3F1B629A22625494FF40A5684F9CAAD 
{
public:
	// System.Int32 UnityEngine.Purchasing.FakeStore/DialogType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DialogType_t33C5033ED3F1B629A22625494FF40A5684F9CAAD, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Purchasing.ProductCatalogPayout/ProductCatalogPayoutType
struct ProductCatalogPayoutType_t1B46CE852AFDF40E8E7A682CBCBB2D0FD9BDAF55 
{
public:
	// System.Int32 UnityEngine.Purchasing.ProductCatalogPayout/ProductCatalogPayoutType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ProductCatalogPayoutType_t1B46CE852AFDF40E8E7A682CBCBB2D0FD9BDAF55, ___value___2)); }
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


// UnityEngine.Purchasing.JSONStore
struct JSONStore_tE5F9992486087BC106BD9B47F9B371AF218E400B  : public AbstractStore_tB0FD374A2E9858EB3A2DC721CBA280409F9485C0
{
public:
	// UnityEngine.Purchasing.StoreCatalogImpl UnityEngine.Purchasing.JSONStore::m_managedStore
	StoreCatalogImpl_t96567FD0C4B258150C9CF5FA51D45D25D6AC27FA * ___m_managedStore_0;
	// UnityEngine.Purchasing.Extension.IStoreCallback UnityEngine.Purchasing.JSONStore::unity
	RuntimeObject* ___unity_1;
	// UnityEngine.Purchasing.INativeStore UnityEngine.Purchasing.JSONStore::store
	RuntimeObject* ___store_2;
	// System.Boolean UnityEngine.Purchasing.JSONStore::isManagedStoreEnabled
	bool ___isManagedStoreEnabled_3;
	// UnityEngine.Purchasing.ProfileData UnityEngine.Purchasing.JSONStore::m_profileData
	ProfileData_tDB4F1DECDD2FF8129293C54B6AD46C020C852DCD * ___m_profileData_4;
	// UnityEngine.Purchasing.StandardPurchasingModule UnityEngine.Purchasing.JSONStore::m_Module
	StandardPurchasingModule_t46866896DA828EA4F1EBF9C38C5E3B89FF1E91B6 * ___m_Module_5;
	// System.Collections.Generic.HashSet`1<UnityEngine.Purchasing.ProductDefinition> UnityEngine.Purchasing.JSONStore::m_BuilderProducts
	HashSet_1_t00A61FC12AB18B4C1D249E381790DAEE518920B1 * ___m_BuilderProducts_6;
	// UnityEngine.ILogger UnityEngine.Purchasing.JSONStore::m_Logger
	RuntimeObject* ___m_Logger_7;
	// UnityEngine.Purchasing.EventQueue UnityEngine.Purchasing.JSONStore::m_EventQueue
	EventQueue_t6C188E8890A58403E459A3324D685A5328893D6E * ___m_EventQueue_8;
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> UnityEngine.Purchasing.JSONStore::promoPayload
	Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * ___promoPayload_9;
	// System.Boolean UnityEngine.Purchasing.JSONStore::catalogDisabled
	bool ___catalogDisabled_10;
	// System.Boolean UnityEngine.Purchasing.JSONStore::eventsDisabled
	bool ___eventsDisabled_11;
	// System.String UnityEngine.Purchasing.JSONStore::iapBaseUrl
	String_t* ___iapBaseUrl_12;
	// System.String UnityEngine.Purchasing.JSONStore::eventBaseUrl
	String_t* ___eventBaseUrl_13;
	// UnityEngine.Purchasing.Extension.PurchaseFailureDescription UnityEngine.Purchasing.JSONStore::lastPurchaseFailureDescription
	PurchaseFailureDescription_tF5204FF61912DF603166BB79C4A10BA5727FBFD8 * ___lastPurchaseFailureDescription_14;
	// UnityEngine.Purchasing.StoreSpecificPurchaseErrorCode UnityEngine.Purchasing.JSONStore::_lastPurchaseErrorCode
	int32_t ____lastPurchaseErrorCode_15;
	// System.String UnityEngine.Purchasing.JSONStore::m_persistentDataPath
	String_t* ___m_persistentDataPath_16;
	// System.String UnityEngine.Purchasing.JSONStore::kStoreSpecificErrorCodeKey
	String_t* ___kStoreSpecificErrorCodeKey_17;

public:
	inline static int32_t get_offset_of_m_managedStore_0() { return static_cast<int32_t>(offsetof(JSONStore_tE5F9992486087BC106BD9B47F9B371AF218E400B, ___m_managedStore_0)); }
	inline StoreCatalogImpl_t96567FD0C4B258150C9CF5FA51D45D25D6AC27FA * get_m_managedStore_0() const { return ___m_managedStore_0; }
	inline StoreCatalogImpl_t96567FD0C4B258150C9CF5FA51D45D25D6AC27FA ** get_address_of_m_managedStore_0() { return &___m_managedStore_0; }
	inline void set_m_managedStore_0(StoreCatalogImpl_t96567FD0C4B258150C9CF5FA51D45D25D6AC27FA * value)
	{
		___m_managedStore_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_managedStore_0), (void*)value);
	}

	inline static int32_t get_offset_of_unity_1() { return static_cast<int32_t>(offsetof(JSONStore_tE5F9992486087BC106BD9B47F9B371AF218E400B, ___unity_1)); }
	inline RuntimeObject* get_unity_1() const { return ___unity_1; }
	inline RuntimeObject** get_address_of_unity_1() { return &___unity_1; }
	inline void set_unity_1(RuntimeObject* value)
	{
		___unity_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unity_1), (void*)value);
	}

	inline static int32_t get_offset_of_store_2() { return static_cast<int32_t>(offsetof(JSONStore_tE5F9992486087BC106BD9B47F9B371AF218E400B, ___store_2)); }
	inline RuntimeObject* get_store_2() const { return ___store_2; }
	inline RuntimeObject** get_address_of_store_2() { return &___store_2; }
	inline void set_store_2(RuntimeObject* value)
	{
		___store_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___store_2), (void*)value);
	}

	inline static int32_t get_offset_of_isManagedStoreEnabled_3() { return static_cast<int32_t>(offsetof(JSONStore_tE5F9992486087BC106BD9B47F9B371AF218E400B, ___isManagedStoreEnabled_3)); }
	inline bool get_isManagedStoreEnabled_3() const { return ___isManagedStoreEnabled_3; }
	inline bool* get_address_of_isManagedStoreEnabled_3() { return &___isManagedStoreEnabled_3; }
	inline void set_isManagedStoreEnabled_3(bool value)
	{
		___isManagedStoreEnabled_3 = value;
	}

	inline static int32_t get_offset_of_m_profileData_4() { return static_cast<int32_t>(offsetof(JSONStore_tE5F9992486087BC106BD9B47F9B371AF218E400B, ___m_profileData_4)); }
	inline ProfileData_tDB4F1DECDD2FF8129293C54B6AD46C020C852DCD * get_m_profileData_4() const { return ___m_profileData_4; }
	inline ProfileData_tDB4F1DECDD2FF8129293C54B6AD46C020C852DCD ** get_address_of_m_profileData_4() { return &___m_profileData_4; }
	inline void set_m_profileData_4(ProfileData_tDB4F1DECDD2FF8129293C54B6AD46C020C852DCD * value)
	{
		___m_profileData_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_profileData_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_Module_5() { return static_cast<int32_t>(offsetof(JSONStore_tE5F9992486087BC106BD9B47F9B371AF218E400B, ___m_Module_5)); }
	inline StandardPurchasingModule_t46866896DA828EA4F1EBF9C38C5E3B89FF1E91B6 * get_m_Module_5() const { return ___m_Module_5; }
	inline StandardPurchasingModule_t46866896DA828EA4F1EBF9C38C5E3B89FF1E91B6 ** get_address_of_m_Module_5() { return &___m_Module_5; }
	inline void set_m_Module_5(StandardPurchasingModule_t46866896DA828EA4F1EBF9C38C5E3B89FF1E91B6 * value)
	{
		___m_Module_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Module_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_BuilderProducts_6() { return static_cast<int32_t>(offsetof(JSONStore_tE5F9992486087BC106BD9B47F9B371AF218E400B, ___m_BuilderProducts_6)); }
	inline HashSet_1_t00A61FC12AB18B4C1D249E381790DAEE518920B1 * get_m_BuilderProducts_6() const { return ___m_BuilderProducts_6; }
	inline HashSet_1_t00A61FC12AB18B4C1D249E381790DAEE518920B1 ** get_address_of_m_BuilderProducts_6() { return &___m_BuilderProducts_6; }
	inline void set_m_BuilderProducts_6(HashSet_1_t00A61FC12AB18B4C1D249E381790DAEE518920B1 * value)
	{
		___m_BuilderProducts_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_BuilderProducts_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Logger_7() { return static_cast<int32_t>(offsetof(JSONStore_tE5F9992486087BC106BD9B47F9B371AF218E400B, ___m_Logger_7)); }
	inline RuntimeObject* get_m_Logger_7() const { return ___m_Logger_7; }
	inline RuntimeObject** get_address_of_m_Logger_7() { return &___m_Logger_7; }
	inline void set_m_Logger_7(RuntimeObject* value)
	{
		___m_Logger_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Logger_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_EventQueue_8() { return static_cast<int32_t>(offsetof(JSONStore_tE5F9992486087BC106BD9B47F9B371AF218E400B, ___m_EventQueue_8)); }
	inline EventQueue_t6C188E8890A58403E459A3324D685A5328893D6E * get_m_EventQueue_8() const { return ___m_EventQueue_8; }
	inline EventQueue_t6C188E8890A58403E459A3324D685A5328893D6E ** get_address_of_m_EventQueue_8() { return &___m_EventQueue_8; }
	inline void set_m_EventQueue_8(EventQueue_t6C188E8890A58403E459A3324D685A5328893D6E * value)
	{
		___m_EventQueue_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_EventQueue_8), (void*)value);
	}

	inline static int32_t get_offset_of_promoPayload_9() { return static_cast<int32_t>(offsetof(JSONStore_tE5F9992486087BC106BD9B47F9B371AF218E400B, ___promoPayload_9)); }
	inline Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * get_promoPayload_9() const { return ___promoPayload_9; }
	inline Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 ** get_address_of_promoPayload_9() { return &___promoPayload_9; }
	inline void set_promoPayload_9(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * value)
	{
		___promoPayload_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___promoPayload_9), (void*)value);
	}

	inline static int32_t get_offset_of_catalogDisabled_10() { return static_cast<int32_t>(offsetof(JSONStore_tE5F9992486087BC106BD9B47F9B371AF218E400B, ___catalogDisabled_10)); }
	inline bool get_catalogDisabled_10() const { return ___catalogDisabled_10; }
	inline bool* get_address_of_catalogDisabled_10() { return &___catalogDisabled_10; }
	inline void set_catalogDisabled_10(bool value)
	{
		___catalogDisabled_10 = value;
	}

	inline static int32_t get_offset_of_eventsDisabled_11() { return static_cast<int32_t>(offsetof(JSONStore_tE5F9992486087BC106BD9B47F9B371AF218E400B, ___eventsDisabled_11)); }
	inline bool get_eventsDisabled_11() const { return ___eventsDisabled_11; }
	inline bool* get_address_of_eventsDisabled_11() { return &___eventsDisabled_11; }
	inline void set_eventsDisabled_11(bool value)
	{
		___eventsDisabled_11 = value;
	}

	inline static int32_t get_offset_of_iapBaseUrl_12() { return static_cast<int32_t>(offsetof(JSONStore_tE5F9992486087BC106BD9B47F9B371AF218E400B, ___iapBaseUrl_12)); }
	inline String_t* get_iapBaseUrl_12() const { return ___iapBaseUrl_12; }
	inline String_t** get_address_of_iapBaseUrl_12() { return &___iapBaseUrl_12; }
	inline void set_iapBaseUrl_12(String_t* value)
	{
		___iapBaseUrl_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___iapBaseUrl_12), (void*)value);
	}

	inline static int32_t get_offset_of_eventBaseUrl_13() { return static_cast<int32_t>(offsetof(JSONStore_tE5F9992486087BC106BD9B47F9B371AF218E400B, ___eventBaseUrl_13)); }
	inline String_t* get_eventBaseUrl_13() const { return ___eventBaseUrl_13; }
	inline String_t** get_address_of_eventBaseUrl_13() { return &___eventBaseUrl_13; }
	inline void set_eventBaseUrl_13(String_t* value)
	{
		___eventBaseUrl_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___eventBaseUrl_13), (void*)value);
	}

	inline static int32_t get_offset_of_lastPurchaseFailureDescription_14() { return static_cast<int32_t>(offsetof(JSONStore_tE5F9992486087BC106BD9B47F9B371AF218E400B, ___lastPurchaseFailureDescription_14)); }
	inline PurchaseFailureDescription_tF5204FF61912DF603166BB79C4A10BA5727FBFD8 * get_lastPurchaseFailureDescription_14() const { return ___lastPurchaseFailureDescription_14; }
	inline PurchaseFailureDescription_tF5204FF61912DF603166BB79C4A10BA5727FBFD8 ** get_address_of_lastPurchaseFailureDescription_14() { return &___lastPurchaseFailureDescription_14; }
	inline void set_lastPurchaseFailureDescription_14(PurchaseFailureDescription_tF5204FF61912DF603166BB79C4A10BA5727FBFD8 * value)
	{
		___lastPurchaseFailureDescription_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lastPurchaseFailureDescription_14), (void*)value);
	}

	inline static int32_t get_offset_of__lastPurchaseErrorCode_15() { return static_cast<int32_t>(offsetof(JSONStore_tE5F9992486087BC106BD9B47F9B371AF218E400B, ____lastPurchaseErrorCode_15)); }
	inline int32_t get__lastPurchaseErrorCode_15() const { return ____lastPurchaseErrorCode_15; }
	inline int32_t* get_address_of__lastPurchaseErrorCode_15() { return &____lastPurchaseErrorCode_15; }
	inline void set__lastPurchaseErrorCode_15(int32_t value)
	{
		____lastPurchaseErrorCode_15 = value;
	}

	inline static int32_t get_offset_of_m_persistentDataPath_16() { return static_cast<int32_t>(offsetof(JSONStore_tE5F9992486087BC106BD9B47F9B371AF218E400B, ___m_persistentDataPath_16)); }
	inline String_t* get_m_persistentDataPath_16() const { return ___m_persistentDataPath_16; }
	inline String_t** get_address_of_m_persistentDataPath_16() { return &___m_persistentDataPath_16; }
	inline void set_m_persistentDataPath_16(String_t* value)
	{
		___m_persistentDataPath_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_persistentDataPath_16), (void*)value);
	}

	inline static int32_t get_offset_of_kStoreSpecificErrorCodeKey_17() { return static_cast<int32_t>(offsetof(JSONStore_tE5F9992486087BC106BD9B47F9B371AF218E400B, ___kStoreSpecificErrorCodeKey_17)); }
	inline String_t* get_kStoreSpecificErrorCodeKey_17() const { return ___kStoreSpecificErrorCodeKey_17; }
	inline String_t** get_address_of_kStoreSpecificErrorCodeKey_17() { return &___kStoreSpecificErrorCodeKey_17; }
	inline void set_kStoreSpecificErrorCodeKey_17(String_t* value)
	{
		___kStoreSpecificErrorCodeKey_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___kStoreSpecificErrorCodeKey_17), (void*)value);
	}
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

// UnityEngine.Purchasing.ProductCatalogItem
struct ProductCatalogItem_t43F0A9F572DE7B1BF46049724A05F9C4C0111280  : public RuntimeObject
{
public:
	// System.String UnityEngine.Purchasing.ProductCatalogItem::id
	String_t* ___id_0;
	// UnityEngine.Purchasing.ProductType UnityEngine.Purchasing.ProductCatalogItem::type
	int32_t ___type_1;
	// System.Collections.Generic.List`1<UnityEngine.Purchasing.StoreID> UnityEngine.Purchasing.ProductCatalogItem::storeIDs
	List_1_tC7FFAD7D8654664DECD572AB308809CAA87B7CD5 * ___storeIDs_2;
	// UnityEngine.Purchasing.LocalizedProductDescription UnityEngine.Purchasing.ProductCatalogItem::defaultDescription
	LocalizedProductDescription_t084306637A67ABEF5D8FDA53F200729CCE4C5DE8 * ___defaultDescription_3;
	// UnityEngine.Purchasing.Price UnityEngine.Purchasing.ProductCatalogItem::googlePrice
	Price_t835C5FA25FC499E8D35900CFDE3CB59C0E0B79A4 * ___googlePrice_4;
	// System.Collections.Generic.List`1<UnityEngine.Purchasing.LocalizedProductDescription> UnityEngine.Purchasing.ProductCatalogItem::descriptions
	List_1_tEF25210307D69880128385FA00E5F12705EBC2E6 * ___descriptions_5;
	// UnityEngine.Purchasing.Price UnityEngine.Purchasing.ProductCatalogItem::udpPrice
	Price_t835C5FA25FC499E8D35900CFDE3CB59C0E0B79A4 * ___udpPrice_6;
	// System.Collections.Generic.List`1<UnityEngine.Purchasing.ProductCatalogPayout> UnityEngine.Purchasing.ProductCatalogItem::payouts
	List_1_t1BBEA3237CF711106984E540A30F8394337C053D * ___payouts_7;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(ProductCatalogItem_t43F0A9F572DE7B1BF46049724A05F9C4C0111280, ___id_0)); }
	inline String_t* get_id_0() const { return ___id_0; }
	inline String_t** get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(String_t* value)
	{
		___id_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___id_0), (void*)value);
	}

	inline static int32_t get_offset_of_type_1() { return static_cast<int32_t>(offsetof(ProductCatalogItem_t43F0A9F572DE7B1BF46049724A05F9C4C0111280, ___type_1)); }
	inline int32_t get_type_1() const { return ___type_1; }
	inline int32_t* get_address_of_type_1() { return &___type_1; }
	inline void set_type_1(int32_t value)
	{
		___type_1 = value;
	}

	inline static int32_t get_offset_of_storeIDs_2() { return static_cast<int32_t>(offsetof(ProductCatalogItem_t43F0A9F572DE7B1BF46049724A05F9C4C0111280, ___storeIDs_2)); }
	inline List_1_tC7FFAD7D8654664DECD572AB308809CAA87B7CD5 * get_storeIDs_2() const { return ___storeIDs_2; }
	inline List_1_tC7FFAD7D8654664DECD572AB308809CAA87B7CD5 ** get_address_of_storeIDs_2() { return &___storeIDs_2; }
	inline void set_storeIDs_2(List_1_tC7FFAD7D8654664DECD572AB308809CAA87B7CD5 * value)
	{
		___storeIDs_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___storeIDs_2), (void*)value);
	}

	inline static int32_t get_offset_of_defaultDescription_3() { return static_cast<int32_t>(offsetof(ProductCatalogItem_t43F0A9F572DE7B1BF46049724A05F9C4C0111280, ___defaultDescription_3)); }
	inline LocalizedProductDescription_t084306637A67ABEF5D8FDA53F200729CCE4C5DE8 * get_defaultDescription_3() const { return ___defaultDescription_3; }
	inline LocalizedProductDescription_t084306637A67ABEF5D8FDA53F200729CCE4C5DE8 ** get_address_of_defaultDescription_3() { return &___defaultDescription_3; }
	inline void set_defaultDescription_3(LocalizedProductDescription_t084306637A67ABEF5D8FDA53F200729CCE4C5DE8 * value)
	{
		___defaultDescription_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultDescription_3), (void*)value);
	}

	inline static int32_t get_offset_of_googlePrice_4() { return static_cast<int32_t>(offsetof(ProductCatalogItem_t43F0A9F572DE7B1BF46049724A05F9C4C0111280, ___googlePrice_4)); }
	inline Price_t835C5FA25FC499E8D35900CFDE3CB59C0E0B79A4 * get_googlePrice_4() const { return ___googlePrice_4; }
	inline Price_t835C5FA25FC499E8D35900CFDE3CB59C0E0B79A4 ** get_address_of_googlePrice_4() { return &___googlePrice_4; }
	inline void set_googlePrice_4(Price_t835C5FA25FC499E8D35900CFDE3CB59C0E0B79A4 * value)
	{
		___googlePrice_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___googlePrice_4), (void*)value);
	}

	inline static int32_t get_offset_of_descriptions_5() { return static_cast<int32_t>(offsetof(ProductCatalogItem_t43F0A9F572DE7B1BF46049724A05F9C4C0111280, ___descriptions_5)); }
	inline List_1_tEF25210307D69880128385FA00E5F12705EBC2E6 * get_descriptions_5() const { return ___descriptions_5; }
	inline List_1_tEF25210307D69880128385FA00E5F12705EBC2E6 ** get_address_of_descriptions_5() { return &___descriptions_5; }
	inline void set_descriptions_5(List_1_tEF25210307D69880128385FA00E5F12705EBC2E6 * value)
	{
		___descriptions_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___descriptions_5), (void*)value);
	}

	inline static int32_t get_offset_of_udpPrice_6() { return static_cast<int32_t>(offsetof(ProductCatalogItem_t43F0A9F572DE7B1BF46049724A05F9C4C0111280, ___udpPrice_6)); }
	inline Price_t835C5FA25FC499E8D35900CFDE3CB59C0E0B79A4 * get_udpPrice_6() const { return ___udpPrice_6; }
	inline Price_t835C5FA25FC499E8D35900CFDE3CB59C0E0B79A4 ** get_address_of_udpPrice_6() { return &___udpPrice_6; }
	inline void set_udpPrice_6(Price_t835C5FA25FC499E8D35900CFDE3CB59C0E0B79A4 * value)
	{
		___udpPrice_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___udpPrice_6), (void*)value);
	}

	inline static int32_t get_offset_of_payouts_7() { return static_cast<int32_t>(offsetof(ProductCatalogItem_t43F0A9F572DE7B1BF46049724A05F9C4C0111280, ___payouts_7)); }
	inline List_1_t1BBEA3237CF711106984E540A30F8394337C053D * get_payouts_7() const { return ___payouts_7; }
	inline List_1_t1BBEA3237CF711106984E540A30F8394337C053D ** get_address_of_payouts_7() { return &___payouts_7; }
	inline void set_payouts_7(List_1_t1BBEA3237CF711106984E540A30F8394337C053D * value)
	{
		___payouts_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___payouts_7), (void*)value);
	}
};


// UnityEngine.Purchasing.ProductDefinition
struct ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572  : public RuntimeObject
{
public:
	// System.String UnityEngine.Purchasing.ProductDefinition::<id>k__BackingField
	String_t* ___U3CidU3Ek__BackingField_0;
	// System.String UnityEngine.Purchasing.ProductDefinition::<storeSpecificId>k__BackingField
	String_t* ___U3CstoreSpecificIdU3Ek__BackingField_1;
	// UnityEngine.Purchasing.ProductType UnityEngine.Purchasing.ProductDefinition::<type>k__BackingField
	int32_t ___U3CtypeU3Ek__BackingField_2;
	// System.Boolean UnityEngine.Purchasing.ProductDefinition::<enabled>k__BackingField
	bool ___U3CenabledU3Ek__BackingField_3;
	// System.Collections.Generic.List`1<UnityEngine.Purchasing.PayoutDefinition> UnityEngine.Purchasing.ProductDefinition::m_Payouts
	List_1_tA412B3BCF33761A8E1663DFE231E9FB84169A4B5 * ___m_Payouts_4;

public:
	inline static int32_t get_offset_of_U3CidU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572, ___U3CidU3Ek__BackingField_0)); }
	inline String_t* get_U3CidU3Ek__BackingField_0() const { return ___U3CidU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CidU3Ek__BackingField_0() { return &___U3CidU3Ek__BackingField_0; }
	inline void set_U3CidU3Ek__BackingField_0(String_t* value)
	{
		___U3CidU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CidU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CstoreSpecificIdU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572, ___U3CstoreSpecificIdU3Ek__BackingField_1)); }
	inline String_t* get_U3CstoreSpecificIdU3Ek__BackingField_1() const { return ___U3CstoreSpecificIdU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CstoreSpecificIdU3Ek__BackingField_1() { return &___U3CstoreSpecificIdU3Ek__BackingField_1; }
	inline void set_U3CstoreSpecificIdU3Ek__BackingField_1(String_t* value)
	{
		___U3CstoreSpecificIdU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CstoreSpecificIdU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CtypeU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572, ___U3CtypeU3Ek__BackingField_2)); }
	inline int32_t get_U3CtypeU3Ek__BackingField_2() const { return ___U3CtypeU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CtypeU3Ek__BackingField_2() { return &___U3CtypeU3Ek__BackingField_2; }
	inline void set_U3CtypeU3Ek__BackingField_2(int32_t value)
	{
		___U3CtypeU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CenabledU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572, ___U3CenabledU3Ek__BackingField_3)); }
	inline bool get_U3CenabledU3Ek__BackingField_3() const { return ___U3CenabledU3Ek__BackingField_3; }
	inline bool* get_address_of_U3CenabledU3Ek__BackingField_3() { return &___U3CenabledU3Ek__BackingField_3; }
	inline void set_U3CenabledU3Ek__BackingField_3(bool value)
	{
		___U3CenabledU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_m_Payouts_4() { return static_cast<int32_t>(offsetof(ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572, ___m_Payouts_4)); }
	inline List_1_tA412B3BCF33761A8E1663DFE231E9FB84169A4B5 * get_m_Payouts_4() const { return ___m_Payouts_4; }
	inline List_1_tA412B3BCF33761A8E1663DFE231E9FB84169A4B5 ** get_address_of_m_Payouts_4() { return &___m_Payouts_4; }
	inline void set_m_Payouts_4(List_1_tA412B3BCF33761A8E1663DFE231E9FB84169A4B5 * value)
	{
		___m_Payouts_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Payouts_4), (void*)value);
	}
};


// UnityEngine.Purchasing.Extension.ProductDescription
struct ProductDescription_t9F14611B4DB2B1E0DAE69236C5C50FE41DDE6C75  : public RuntimeObject
{
public:
	// System.String UnityEngine.Purchasing.Extension.ProductDescription::<storeSpecificId>k__BackingField
	String_t* ___U3CstoreSpecificIdU3Ek__BackingField_0;
	// UnityEngine.Purchasing.ProductType UnityEngine.Purchasing.Extension.ProductDescription::type
	int32_t ___type_1;
	// UnityEngine.Purchasing.ProductMetadata UnityEngine.Purchasing.Extension.ProductDescription::<metadata>k__BackingField
	ProductMetadata_tAA2AADD58CE3B832532B471EA80FEE323EB9BF02 * ___U3CmetadataU3Ek__BackingField_2;
	// System.String UnityEngine.Purchasing.Extension.ProductDescription::<receipt>k__BackingField
	String_t* ___U3CreceiptU3Ek__BackingField_3;
	// System.String UnityEngine.Purchasing.Extension.ProductDescription::<transactionId>k__BackingField
	String_t* ___U3CtransactionIdU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CstoreSpecificIdU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ProductDescription_t9F14611B4DB2B1E0DAE69236C5C50FE41DDE6C75, ___U3CstoreSpecificIdU3Ek__BackingField_0)); }
	inline String_t* get_U3CstoreSpecificIdU3Ek__BackingField_0() const { return ___U3CstoreSpecificIdU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CstoreSpecificIdU3Ek__BackingField_0() { return &___U3CstoreSpecificIdU3Ek__BackingField_0; }
	inline void set_U3CstoreSpecificIdU3Ek__BackingField_0(String_t* value)
	{
		___U3CstoreSpecificIdU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CstoreSpecificIdU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_type_1() { return static_cast<int32_t>(offsetof(ProductDescription_t9F14611B4DB2B1E0DAE69236C5C50FE41DDE6C75, ___type_1)); }
	inline int32_t get_type_1() const { return ___type_1; }
	inline int32_t* get_address_of_type_1() { return &___type_1; }
	inline void set_type_1(int32_t value)
	{
		___type_1 = value;
	}

	inline static int32_t get_offset_of_U3CmetadataU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(ProductDescription_t9F14611B4DB2B1E0DAE69236C5C50FE41DDE6C75, ___U3CmetadataU3Ek__BackingField_2)); }
	inline ProductMetadata_tAA2AADD58CE3B832532B471EA80FEE323EB9BF02 * get_U3CmetadataU3Ek__BackingField_2() const { return ___U3CmetadataU3Ek__BackingField_2; }
	inline ProductMetadata_tAA2AADD58CE3B832532B471EA80FEE323EB9BF02 ** get_address_of_U3CmetadataU3Ek__BackingField_2() { return &___U3CmetadataU3Ek__BackingField_2; }
	inline void set_U3CmetadataU3Ek__BackingField_2(ProductMetadata_tAA2AADD58CE3B832532B471EA80FEE323EB9BF02 * value)
	{
		___U3CmetadataU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CmetadataU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CreceiptU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ProductDescription_t9F14611B4DB2B1E0DAE69236C5C50FE41DDE6C75, ___U3CreceiptU3Ek__BackingField_3)); }
	inline String_t* get_U3CreceiptU3Ek__BackingField_3() const { return ___U3CreceiptU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3CreceiptU3Ek__BackingField_3() { return &___U3CreceiptU3Ek__BackingField_3; }
	inline void set_U3CreceiptU3Ek__BackingField_3(String_t* value)
	{
		___U3CreceiptU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CreceiptU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CtransactionIdU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(ProductDescription_t9F14611B4DB2B1E0DAE69236C5C50FE41DDE6C75, ___U3CtransactionIdU3Ek__BackingField_4)); }
	inline String_t* get_U3CtransactionIdU3Ek__BackingField_4() const { return ___U3CtransactionIdU3Ek__BackingField_4; }
	inline String_t** get_address_of_U3CtransactionIdU3Ek__BackingField_4() { return &___U3CtransactionIdU3Ek__BackingField_4; }
	inline void set_U3CtransactionIdU3Ek__BackingField_4(String_t* value)
	{
		___U3CtransactionIdU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtransactionIdU3Ek__BackingField_4), (void*)value);
	}
};


// UnityEngine.Purchasing.Extension.PurchaseFailureDescription
struct PurchaseFailureDescription_tF5204FF61912DF603166BB79C4A10BA5727FBFD8  : public RuntimeObject
{
public:
	// System.String UnityEngine.Purchasing.Extension.PurchaseFailureDescription::<productId>k__BackingField
	String_t* ___U3CproductIdU3Ek__BackingField_0;
	// UnityEngine.Purchasing.PurchaseFailureReason UnityEngine.Purchasing.Extension.PurchaseFailureDescription::<reason>k__BackingField
	int32_t ___U3CreasonU3Ek__BackingField_1;
	// System.String UnityEngine.Purchasing.Extension.PurchaseFailureDescription::<message>k__BackingField
	String_t* ___U3CmessageU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CproductIdU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(PurchaseFailureDescription_tF5204FF61912DF603166BB79C4A10BA5727FBFD8, ___U3CproductIdU3Ek__BackingField_0)); }
	inline String_t* get_U3CproductIdU3Ek__BackingField_0() const { return ___U3CproductIdU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CproductIdU3Ek__BackingField_0() { return &___U3CproductIdU3Ek__BackingField_0; }
	inline void set_U3CproductIdU3Ek__BackingField_0(String_t* value)
	{
		___U3CproductIdU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CproductIdU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CreasonU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(PurchaseFailureDescription_tF5204FF61912DF603166BB79C4A10BA5727FBFD8, ___U3CreasonU3Ek__BackingField_1)); }
	inline int32_t get_U3CreasonU3Ek__BackingField_1() const { return ___U3CreasonU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CreasonU3Ek__BackingField_1() { return &___U3CreasonU3Ek__BackingField_1; }
	inline void set_U3CreasonU3Ek__BackingField_1(int32_t value)
	{
		___U3CreasonU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CmessageU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(PurchaseFailureDescription_tF5204FF61912DF603166BB79C4A10BA5727FBFD8, ___U3CmessageU3Ek__BackingField_2)); }
	inline String_t* get_U3CmessageU3Ek__BackingField_2() const { return ___U3CmessageU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CmessageU3Ek__BackingField_2() { return &___U3CmessageU3Ek__BackingField_2; }
	inline void set_U3CmessageU3Ek__BackingField_2(String_t* value)
	{
		___U3CmessageU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CmessageU3Ek__BackingField_2), (void*)value);
	}
};


// UnityEngine.Purchasing.StandardPurchasingModule
struct StandardPurchasingModule_t46866896DA828EA4F1EBF9C38C5E3B89FF1E91B6  : public AbstractPurchasingModule_tE97233CECF61E1D47FE937203B395835774FBB04
{
public:
	// System.String UnityEngine.Purchasing.StandardPurchasingModule::k_Version
	String_t* ___k_Version_1;
	// UnityEngine.Purchasing.AppStore UnityEngine.Purchasing.StandardPurchasingModule::m_AppStorePlatform
	int32_t ___m_AppStorePlatform_2;
	// UnityEngine.Purchasing.INativeStoreProvider UnityEngine.Purchasing.StandardPurchasingModule::m_NativeStoreProvider
	RuntimeObject* ___m_NativeStoreProvider_3;
	// UnityEngine.RuntimePlatform UnityEngine.Purchasing.StandardPurchasingModule::m_RuntimePlatform
	int32_t ___m_RuntimePlatform_4;
	// System.Boolean UnityEngine.Purchasing.StandardPurchasingModule::m_UseCloudCatalog
	bool ___m_UseCloudCatalog_5;
	// System.String UnityEngine.Purchasing.StandardPurchasingModule::<m_persistentDataPath>k__BackingField
	String_t* ___U3Cm_persistentDataPathU3Ek__BackingField_6;
	// Uniject.IUtil UnityEngine.Purchasing.StandardPurchasingModule::<util>k__BackingField
	RuntimeObject* ___U3CutilU3Ek__BackingField_8;
	// UnityEngine.ILogger UnityEngine.Purchasing.StandardPurchasingModule::<logger>k__BackingField
	RuntimeObject* ___U3CloggerU3Ek__BackingField_9;
	// UnityEngine.Purchasing.IAsyncWebUtil UnityEngine.Purchasing.StandardPurchasingModule::<webUtil>k__BackingField
	RuntimeObject* ___U3CwebUtilU3Ek__BackingField_10;
	// UnityEngine.Purchasing.StandardPurchasingModule/StoreInstance UnityEngine.Purchasing.StandardPurchasingModule::<storeInstance>k__BackingField
	StoreInstance_t7777C1EA2116BC0443B2557EC19229DD2BFAFDBA * ___U3CstoreInstanceU3Ek__BackingField_11;
	// UnityEngine.Purchasing.CloudCatalogImpl UnityEngine.Purchasing.StandardPurchasingModule::m_CloudCatalog
	CloudCatalogImpl_t9C2302B12131A65642B2A79FB427DFE4BC07555C * ___m_CloudCatalog_13;
	// UnityEngine.Purchasing.FakeStoreUIMode UnityEngine.Purchasing.StandardPurchasingModule::<useFakeStoreUIMode>k__BackingField
	int32_t ___U3CuseFakeStoreUIModeU3Ek__BackingField_14;
	// System.Boolean UnityEngine.Purchasing.StandardPurchasingModule::<useFakeStoreAlways>k__BackingField
	bool ___U3CuseFakeStoreAlwaysU3Ek__BackingField_15;
	// UnityEngine.Purchasing.WinRTStore UnityEngine.Purchasing.StandardPurchasingModule::windowsStore
	WinRTStore_t8CDB879BD9F0D28D831A5A89912DCD4966B95326 * ___windowsStore_16;

public:
	inline static int32_t get_offset_of_k_Version_1() { return static_cast<int32_t>(offsetof(StandardPurchasingModule_t46866896DA828EA4F1EBF9C38C5E3B89FF1E91B6, ___k_Version_1)); }
	inline String_t* get_k_Version_1() const { return ___k_Version_1; }
	inline String_t** get_address_of_k_Version_1() { return &___k_Version_1; }
	inline void set_k_Version_1(String_t* value)
	{
		___k_Version_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___k_Version_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_AppStorePlatform_2() { return static_cast<int32_t>(offsetof(StandardPurchasingModule_t46866896DA828EA4F1EBF9C38C5E3B89FF1E91B6, ___m_AppStorePlatform_2)); }
	inline int32_t get_m_AppStorePlatform_2() const { return ___m_AppStorePlatform_2; }
	inline int32_t* get_address_of_m_AppStorePlatform_2() { return &___m_AppStorePlatform_2; }
	inline void set_m_AppStorePlatform_2(int32_t value)
	{
		___m_AppStorePlatform_2 = value;
	}

	inline static int32_t get_offset_of_m_NativeStoreProvider_3() { return static_cast<int32_t>(offsetof(StandardPurchasingModule_t46866896DA828EA4F1EBF9C38C5E3B89FF1E91B6, ___m_NativeStoreProvider_3)); }
	inline RuntimeObject* get_m_NativeStoreProvider_3() const { return ___m_NativeStoreProvider_3; }
	inline RuntimeObject** get_address_of_m_NativeStoreProvider_3() { return &___m_NativeStoreProvider_3; }
	inline void set_m_NativeStoreProvider_3(RuntimeObject* value)
	{
		___m_NativeStoreProvider_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_NativeStoreProvider_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_RuntimePlatform_4() { return static_cast<int32_t>(offsetof(StandardPurchasingModule_t46866896DA828EA4F1EBF9C38C5E3B89FF1E91B6, ___m_RuntimePlatform_4)); }
	inline int32_t get_m_RuntimePlatform_4() const { return ___m_RuntimePlatform_4; }
	inline int32_t* get_address_of_m_RuntimePlatform_4() { return &___m_RuntimePlatform_4; }
	inline void set_m_RuntimePlatform_4(int32_t value)
	{
		___m_RuntimePlatform_4 = value;
	}

	inline static int32_t get_offset_of_m_UseCloudCatalog_5() { return static_cast<int32_t>(offsetof(StandardPurchasingModule_t46866896DA828EA4F1EBF9C38C5E3B89FF1E91B6, ___m_UseCloudCatalog_5)); }
	inline bool get_m_UseCloudCatalog_5() const { return ___m_UseCloudCatalog_5; }
	inline bool* get_address_of_m_UseCloudCatalog_5() { return &___m_UseCloudCatalog_5; }
	inline void set_m_UseCloudCatalog_5(bool value)
	{
		___m_UseCloudCatalog_5 = value;
	}

	inline static int32_t get_offset_of_U3Cm_persistentDataPathU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(StandardPurchasingModule_t46866896DA828EA4F1EBF9C38C5E3B89FF1E91B6, ___U3Cm_persistentDataPathU3Ek__BackingField_6)); }
	inline String_t* get_U3Cm_persistentDataPathU3Ek__BackingField_6() const { return ___U3Cm_persistentDataPathU3Ek__BackingField_6; }
	inline String_t** get_address_of_U3Cm_persistentDataPathU3Ek__BackingField_6() { return &___U3Cm_persistentDataPathU3Ek__BackingField_6; }
	inline void set_U3Cm_persistentDataPathU3Ek__BackingField_6(String_t* value)
	{
		___U3Cm_persistentDataPathU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3Cm_persistentDataPathU3Ek__BackingField_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CutilU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(StandardPurchasingModule_t46866896DA828EA4F1EBF9C38C5E3B89FF1E91B6, ___U3CutilU3Ek__BackingField_8)); }
	inline RuntimeObject* get_U3CutilU3Ek__BackingField_8() const { return ___U3CutilU3Ek__BackingField_8; }
	inline RuntimeObject** get_address_of_U3CutilU3Ek__BackingField_8() { return &___U3CutilU3Ek__BackingField_8; }
	inline void set_U3CutilU3Ek__BackingField_8(RuntimeObject* value)
	{
		___U3CutilU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CutilU3Ek__BackingField_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3CloggerU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(StandardPurchasingModule_t46866896DA828EA4F1EBF9C38C5E3B89FF1E91B6, ___U3CloggerU3Ek__BackingField_9)); }
	inline RuntimeObject* get_U3CloggerU3Ek__BackingField_9() const { return ___U3CloggerU3Ek__BackingField_9; }
	inline RuntimeObject** get_address_of_U3CloggerU3Ek__BackingField_9() { return &___U3CloggerU3Ek__BackingField_9; }
	inline void set_U3CloggerU3Ek__BackingField_9(RuntimeObject* value)
	{
		___U3CloggerU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CloggerU3Ek__BackingField_9), (void*)value);
	}

	inline static int32_t get_offset_of_U3CwebUtilU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(StandardPurchasingModule_t46866896DA828EA4F1EBF9C38C5E3B89FF1E91B6, ___U3CwebUtilU3Ek__BackingField_10)); }
	inline RuntimeObject* get_U3CwebUtilU3Ek__BackingField_10() const { return ___U3CwebUtilU3Ek__BackingField_10; }
	inline RuntimeObject** get_address_of_U3CwebUtilU3Ek__BackingField_10() { return &___U3CwebUtilU3Ek__BackingField_10; }
	inline void set_U3CwebUtilU3Ek__BackingField_10(RuntimeObject* value)
	{
		___U3CwebUtilU3Ek__BackingField_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CwebUtilU3Ek__BackingField_10), (void*)value);
	}

	inline static int32_t get_offset_of_U3CstoreInstanceU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(StandardPurchasingModule_t46866896DA828EA4F1EBF9C38C5E3B89FF1E91B6, ___U3CstoreInstanceU3Ek__BackingField_11)); }
	inline StoreInstance_t7777C1EA2116BC0443B2557EC19229DD2BFAFDBA * get_U3CstoreInstanceU3Ek__BackingField_11() const { return ___U3CstoreInstanceU3Ek__BackingField_11; }
	inline StoreInstance_t7777C1EA2116BC0443B2557EC19229DD2BFAFDBA ** get_address_of_U3CstoreInstanceU3Ek__BackingField_11() { return &___U3CstoreInstanceU3Ek__BackingField_11; }
	inline void set_U3CstoreInstanceU3Ek__BackingField_11(StoreInstance_t7777C1EA2116BC0443B2557EC19229DD2BFAFDBA * value)
	{
		___U3CstoreInstanceU3Ek__BackingField_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CstoreInstanceU3Ek__BackingField_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_CloudCatalog_13() { return static_cast<int32_t>(offsetof(StandardPurchasingModule_t46866896DA828EA4F1EBF9C38C5E3B89FF1E91B6, ___m_CloudCatalog_13)); }
	inline CloudCatalogImpl_t9C2302B12131A65642B2A79FB427DFE4BC07555C * get_m_CloudCatalog_13() const { return ___m_CloudCatalog_13; }
	inline CloudCatalogImpl_t9C2302B12131A65642B2A79FB427DFE4BC07555C ** get_address_of_m_CloudCatalog_13() { return &___m_CloudCatalog_13; }
	inline void set_m_CloudCatalog_13(CloudCatalogImpl_t9C2302B12131A65642B2A79FB427DFE4BC07555C * value)
	{
		___m_CloudCatalog_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CloudCatalog_13), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseFakeStoreUIModeU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(StandardPurchasingModule_t46866896DA828EA4F1EBF9C38C5E3B89FF1E91B6, ___U3CuseFakeStoreUIModeU3Ek__BackingField_14)); }
	inline int32_t get_U3CuseFakeStoreUIModeU3Ek__BackingField_14() const { return ___U3CuseFakeStoreUIModeU3Ek__BackingField_14; }
	inline int32_t* get_address_of_U3CuseFakeStoreUIModeU3Ek__BackingField_14() { return &___U3CuseFakeStoreUIModeU3Ek__BackingField_14; }
	inline void set_U3CuseFakeStoreUIModeU3Ek__BackingField_14(int32_t value)
	{
		___U3CuseFakeStoreUIModeU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_U3CuseFakeStoreAlwaysU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(StandardPurchasingModule_t46866896DA828EA4F1EBF9C38C5E3B89FF1E91B6, ___U3CuseFakeStoreAlwaysU3Ek__BackingField_15)); }
	inline bool get_U3CuseFakeStoreAlwaysU3Ek__BackingField_15() const { return ___U3CuseFakeStoreAlwaysU3Ek__BackingField_15; }
	inline bool* get_address_of_U3CuseFakeStoreAlwaysU3Ek__BackingField_15() { return &___U3CuseFakeStoreAlwaysU3Ek__BackingField_15; }
	inline void set_U3CuseFakeStoreAlwaysU3Ek__BackingField_15(bool value)
	{
		___U3CuseFakeStoreAlwaysU3Ek__BackingField_15 = value;
	}

	inline static int32_t get_offset_of_windowsStore_16() { return static_cast<int32_t>(offsetof(StandardPurchasingModule_t46866896DA828EA4F1EBF9C38C5E3B89FF1E91B6, ___windowsStore_16)); }
	inline WinRTStore_t8CDB879BD9F0D28D831A5A89912DCD4966B95326 * get_windowsStore_16() const { return ___windowsStore_16; }
	inline WinRTStore_t8CDB879BD9F0D28D831A5A89912DCD4966B95326 ** get_address_of_windowsStore_16() { return &___windowsStore_16; }
	inline void set_windowsStore_16(WinRTStore_t8CDB879BD9F0D28D831A5A89912DCD4966B95326 * value)
	{
		___windowsStore_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___windowsStore_16), (void*)value);
	}
};

struct StandardPurchasingModule_t46866896DA828EA4F1EBF9C38C5E3B89FF1E91B6_StaticFields
{
public:
	// UnityEngine.Purchasing.StandardPurchasingModule UnityEngine.Purchasing.StandardPurchasingModule::ModuleInstance
	StandardPurchasingModule_t46866896DA828EA4F1EBF9C38C5E3B89FF1E91B6 * ___ModuleInstance_7;
	// System.Collections.Generic.Dictionary`2<UnityEngine.Purchasing.AppStore,System.String> UnityEngine.Purchasing.StandardPurchasingModule::AndroidStoreNameMap
	Dictionary_2_t44560DF978B3A19D443806371A881CDCB3BB0308 * ___AndroidStoreNameMap_12;

public:
	inline static int32_t get_offset_of_ModuleInstance_7() { return static_cast<int32_t>(offsetof(StandardPurchasingModule_t46866896DA828EA4F1EBF9C38C5E3B89FF1E91B6_StaticFields, ___ModuleInstance_7)); }
	inline StandardPurchasingModule_t46866896DA828EA4F1EBF9C38C5E3B89FF1E91B6 * get_ModuleInstance_7() const { return ___ModuleInstance_7; }
	inline StandardPurchasingModule_t46866896DA828EA4F1EBF9C38C5E3B89FF1E91B6 ** get_address_of_ModuleInstance_7() { return &___ModuleInstance_7; }
	inline void set_ModuleInstance_7(StandardPurchasingModule_t46866896DA828EA4F1EBF9C38C5E3B89FF1E91B6 * value)
	{
		___ModuleInstance_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ModuleInstance_7), (void*)value);
	}

	inline static int32_t get_offset_of_AndroidStoreNameMap_12() { return static_cast<int32_t>(offsetof(StandardPurchasingModule_t46866896DA828EA4F1EBF9C38C5E3B89FF1E91B6_StaticFields, ___AndroidStoreNameMap_12)); }
	inline Dictionary_2_t44560DF978B3A19D443806371A881CDCB3BB0308 * get_AndroidStoreNameMap_12() const { return ___AndroidStoreNameMap_12; }
	inline Dictionary_2_t44560DF978B3A19D443806371A881CDCB3BB0308 ** get_address_of_AndroidStoreNameMap_12() { return &___AndroidStoreNameMap_12; }
	inline void set_AndroidStoreNameMap_12(Dictionary_2_t44560DF978B3A19D443806371A881CDCB3BB0308 * value)
	{
		___AndroidStoreNameMap_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AndroidStoreNameMap_12), (void*)value);
	}
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


// UnityEngine.Purchasing.ScriptingStoreCallback/<>c__DisplayClass5_0
struct U3CU3Ec__DisplayClass5_0_t859087A14AE95FD9CA3137ED6A5AD2B5AD954E2D  : public RuntimeObject
{
public:
	// UnityEngine.Purchasing.ScriptingStoreCallback UnityEngine.Purchasing.ScriptingStoreCallback/<>c__DisplayClass5_0::<>4__this
	ScriptingStoreCallback_t201741301803D50F8E0881C5805639CE2F7CB288 * ___U3CU3E4__this_0;
	// UnityEngine.Purchasing.InitializationFailureReason UnityEngine.Purchasing.ScriptingStoreCallback/<>c__DisplayClass5_0::reason
	int32_t ___reason_1;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass5_0_t859087A14AE95FD9CA3137ED6A5AD2B5AD954E2D, ___U3CU3E4__this_0)); }
	inline ScriptingStoreCallback_t201741301803D50F8E0881C5805639CE2F7CB288 * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline ScriptingStoreCallback_t201741301803D50F8E0881C5805639CE2F7CB288 ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(ScriptingStoreCallback_t201741301803D50F8E0881C5805639CE2F7CB288 * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_reason_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass5_0_t859087A14AE95FD9CA3137ED6A5AD2B5AD954E2D, ___reason_1)); }
	inline int32_t get_reason_1() const { return ___reason_1; }
	inline int32_t* get_address_of_reason_1() { return &___reason_1; }
	inline void set_reason_1(int32_t value)
	{
		___reason_1 = value;
	}
};


// System.Action`1<System.Collections.Generic.List`1<UnityEngine.AndroidJavaObject>>
struct Action_1_t280D324324436AF42C8D2A05C7B79D2070238EC5  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<System.Collections.Generic.List`1<UnityEngine.Purchasing.Models.GooglePurchase>>
struct Action_1_tE42BD9F1180F09C4A76A988DB2ABFE78413236E1  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<System.Collections.Generic.List`1<UnityEngine.Purchasing.Product>>
struct Action_1_t5868F85E84D90CF271B4E7863DE1EFA97B473193  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<System.Collections.Generic.List`1<UnityEngine.Purchasing.Extension.ProductDescription>>
struct Action_1_t762239D56917E8864E53EE1DFBAE23C93B8EF280  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<System.Boolean>
struct Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<UnityEngine.Purchasing.Product>
struct Action_1_tA1980BF879FC3C2BEF14A6B79268F3DBBB7EB865  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`2<System.Boolean,System.String>
struct Action_2_t88E033566C44CCAAB72BD2C7604420B260FD3BF3  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`3<UnityEngine.Purchasing.ProductDefinition,UnityEngine.Purchasing.Models.GooglePurchase,UnityEngine.Purchasing.Models.GoogleBillingResult>
struct Action_3_t0083092190368806A2DB2F1602BADE4C8B060D46  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`4<UnityEngine.Purchasing.ProductDefinition,UnityEngine.Purchasing.Models.GooglePurchase,UnityEngine.Purchasing.Models.GoogleBillingResult,System.String>
struct Action_4_t6B11EA4C8E25C04252AE71EBA2F351ABD22B744A  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<UnityEngine.Purchasing.Models.GooglePurchase,System.Boolean>
struct Func_2_t02A8DDA5AA2B110AE853BA161253FF2B6FADBF02  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// UnityEngine.Purchasing.UDPImpl
struct UDPImpl_t10D6EBBCE4EF9B6215CB108BDF04F75E404277F1  : public JSONStore_tE5F9992486087BC106BD9B47F9B371AF218E400B
{
public:
	// UnityEngine.Purchasing.INativeUDPStore UnityEngine.Purchasing.UDPImpl::m_Bindings
	RuntimeObject* ___m_Bindings_18;
	// System.Object UnityEngine.Purchasing.UDPImpl::m_UserInfo
	RuntimeObject * ___m_UserInfo_19;
	// System.String UnityEngine.Purchasing.UDPImpl::m_LastInitError
	String_t* ___m_LastInitError_20;
	// System.Boolean UnityEngine.Purchasing.UDPImpl::m_Initialized
	bool ___m_Initialized_21;
	// System.Action`1<UnityEngine.Purchasing.Product> UnityEngine.Purchasing.UDPImpl::m_DeferredCallback
	Action_1_tA1980BF879FC3C2BEF14A6B79268F3DBBB7EB865 * ___m_DeferredCallback_22;

public:
	inline static int32_t get_offset_of_m_Bindings_18() { return static_cast<int32_t>(offsetof(UDPImpl_t10D6EBBCE4EF9B6215CB108BDF04F75E404277F1, ___m_Bindings_18)); }
	inline RuntimeObject* get_m_Bindings_18() const { return ___m_Bindings_18; }
	inline RuntimeObject** get_address_of_m_Bindings_18() { return &___m_Bindings_18; }
	inline void set_m_Bindings_18(RuntimeObject* value)
	{
		___m_Bindings_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Bindings_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_UserInfo_19() { return static_cast<int32_t>(offsetof(UDPImpl_t10D6EBBCE4EF9B6215CB108BDF04F75E404277F1, ___m_UserInfo_19)); }
	inline RuntimeObject * get_m_UserInfo_19() const { return ___m_UserInfo_19; }
	inline RuntimeObject ** get_address_of_m_UserInfo_19() { return &___m_UserInfo_19; }
	inline void set_m_UserInfo_19(RuntimeObject * value)
	{
		___m_UserInfo_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_UserInfo_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_LastInitError_20() { return static_cast<int32_t>(offsetof(UDPImpl_t10D6EBBCE4EF9B6215CB108BDF04F75E404277F1, ___m_LastInitError_20)); }
	inline String_t* get_m_LastInitError_20() const { return ___m_LastInitError_20; }
	inline String_t** get_address_of_m_LastInitError_20() { return &___m_LastInitError_20; }
	inline void set_m_LastInitError_20(String_t* value)
	{
		___m_LastInitError_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LastInitError_20), (void*)value);
	}

	inline static int32_t get_offset_of_m_Initialized_21() { return static_cast<int32_t>(offsetof(UDPImpl_t10D6EBBCE4EF9B6215CB108BDF04F75E404277F1, ___m_Initialized_21)); }
	inline bool get_m_Initialized_21() const { return ___m_Initialized_21; }
	inline bool* get_address_of_m_Initialized_21() { return &___m_Initialized_21; }
	inline void set_m_Initialized_21(bool value)
	{
		___m_Initialized_21 = value;
	}

	inline static int32_t get_offset_of_m_DeferredCallback_22() { return static_cast<int32_t>(offsetof(UDPImpl_t10D6EBBCE4EF9B6215CB108BDF04F75E404277F1, ___m_DeferredCallback_22)); }
	inline Action_1_tA1980BF879FC3C2BEF14A6B79268F3DBBB7EB865 * get_m_DeferredCallback_22() const { return ___m_DeferredCallback_22; }
	inline Action_1_tA1980BF879FC3C2BEF14A6B79268F3DBBB7EB865 ** get_address_of_m_DeferredCallback_22() { return &___m_DeferredCallback_22; }
	inline void set_m_DeferredCallback_22(Action_1_tA1980BF879FC3C2BEF14A6B79268F3DBBB7EB865 * value)
	{
		___m_DeferredCallback_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DeferredCallback_22), (void*)value);
	}
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.Purchasing.Extension.UnityUtil
struct UnityUtil_t889EAFBFB8290CE278044818482339ED03EA4172  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Collections.Generic.List`1<System.Action`1<System.Boolean>> UnityEngine.Purchasing.Extension.UnityUtil::pauseListeners
	List_1_t74EFE92A1FFCE19915CF92B949BF2321170FA0B0 * ___pauseListeners_7;

public:
	inline static int32_t get_offset_of_pauseListeners_7() { return static_cast<int32_t>(offsetof(UnityUtil_t889EAFBFB8290CE278044818482339ED03EA4172, ___pauseListeners_7)); }
	inline List_1_t74EFE92A1FFCE19915CF92B949BF2321170FA0B0 * get_pauseListeners_7() const { return ___pauseListeners_7; }
	inline List_1_t74EFE92A1FFCE19915CF92B949BF2321170FA0B0 ** get_address_of_pauseListeners_7() { return &___pauseListeners_7; }
	inline void set_pauseListeners_7(List_1_t74EFE92A1FFCE19915CF92B949BF2321170FA0B0 * value)
	{
		___pauseListeners_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pauseListeners_7), (void*)value);
	}
};

struct UnityUtil_t889EAFBFB8290CE278044818482339ED03EA4172_StaticFields
{
public:
	// System.Collections.Generic.List`1<System.Action> UnityEngine.Purchasing.Extension.UnityUtil::s_Callbacks
	List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * ___s_Callbacks_4;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) UnityEngine.Purchasing.Extension.UnityUtil::s_CallbacksPending
	bool ___s_CallbacksPending_5;
	// System.Collections.Generic.List`1<UnityEngine.RuntimePlatform> UnityEngine.Purchasing.Extension.UnityUtil::s_PcControlledPlatforms
	List_1_t88A2029FA6A2D4504CD69AB6983AAE1D77DA972E * ___s_PcControlledPlatforms_6;

public:
	inline static int32_t get_offset_of_s_Callbacks_4() { return static_cast<int32_t>(offsetof(UnityUtil_t889EAFBFB8290CE278044818482339ED03EA4172_StaticFields, ___s_Callbacks_4)); }
	inline List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * get_s_Callbacks_4() const { return ___s_Callbacks_4; }
	inline List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 ** get_address_of_s_Callbacks_4() { return &___s_Callbacks_4; }
	inline void set_s_Callbacks_4(List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * value)
	{
		___s_Callbacks_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Callbacks_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_CallbacksPending_5() { return static_cast<int32_t>(offsetof(UnityUtil_t889EAFBFB8290CE278044818482339ED03EA4172_StaticFields, ___s_CallbacksPending_5)); }
	inline bool get_s_CallbacksPending_5() const { return ___s_CallbacksPending_5; }
	inline bool* get_address_of_s_CallbacksPending_5() { return &___s_CallbacksPending_5; }
	inline void set_s_CallbacksPending_5(bool value)
	{
		___s_CallbacksPending_5 = value;
	}

	inline static int32_t get_offset_of_s_PcControlledPlatforms_6() { return static_cast<int32_t>(offsetof(UnityUtil_t889EAFBFB8290CE278044818482339ED03EA4172_StaticFields, ___s_PcControlledPlatforms_6)); }
	inline List_1_t88A2029FA6A2D4504CD69AB6983AAE1D77DA972E * get_s_PcControlledPlatforms_6() const { return ___s_PcControlledPlatforms_6; }
	inline List_1_t88A2029FA6A2D4504CD69AB6983AAE1D77DA972E ** get_address_of_s_PcControlledPlatforms_6() { return &___s_PcControlledPlatforms_6; }
	inline void set_s_PcControlledPlatforms_6(List_1_t88A2029FA6A2D4504CD69AB6983AAE1D77DA972E * value)
	{
		___s_PcControlledPlatforms_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_PcControlledPlatforms_6), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// !!0[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Array_Empty_TisRuntimeObject_m002765312BF306B1B3B5BFAB9550C0A2A1820CDA_gshared_inline (const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::Call<System.Object>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * AndroidJavaObject_Call_TisRuntimeObject_mA29DAB68E237E5B36D5A9DFD2231EB14C7A234D9_gshared (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_mAAE01A16F138CEC8E1965D322EFB6A7045FE76F2_gshared (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Where<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Where_TisRuntimeObject_mD8AE6780E78249FC87B2344E09D130624E70D7DA_gshared (RuntimeObject* ___source0, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate1, const RuntimeMethod* method);
// System.Void System.Action`1<System.Boolean>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_m94B1D693386EA0BD3C636939BDCE375EDEF91A04_gshared (Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * __this, bool ___obj0, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_mCABABA5D0FA017D2D54BE4FA6256C51518274116_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mA8F31A10EE1129768E13ACC4DC847B05EAD2A055_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Dictionary_2_get_Item_mF3BA34126DA8AFA32D1E5285D842C5955C698F0D_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// !!0[] System.Array::Empty<System.Object>()
inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Array_Empty_TisRuntimeObject_m002765312BF306B1B3B5BFAB9550C0A2A1820CDA_inline (const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_m002765312BF306B1B3B5BFAB9550C0A2A1820CDA_gshared_inline)(method);
}
// !!0 UnityEngine.AndroidJavaObject::Call<System.String>(System.String,System.Object[])
inline String_t* AndroidJavaObject_Call_TisString_t_mE0E9BE21A1938D675DA63B376682D54E3B36AF0E (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method)
{
	return ((  String_t* (*) (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *, String_t*, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, const RuntimeMethod*))AndroidJavaObject_Call_TisRuntimeObject_mA29DAB68E237E5B36D5A9DFD2231EB14C7A234D9_gshared)(__this, ___methodName0, ___args1, method);
}
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.GoogleFetchPurchases/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mE280D5BE4AA8A1CA2E772B978174C33C21B3D4B6 (U3CU3Ec_t8CF44C733C2519A840682FA299C0CA1477C017EB * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1<UnityEngine.Purchasing.Product> UnityEngine.Purchasing.GoogleFetchPurchases::FillProductsWithPurchases(System.Collections.Generic.IEnumerable`1<UnityEngine.Purchasing.Models.GooglePurchase>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tD6CD4E5E39E75EE330B0C6DB8A7A0AEE4966D8AA * GoogleFetchPurchases_FillProductsWithPurchases_m0892BAACC4CA9092B159C4C4544DDBD543CE4917 (GoogleFetchPurchases_tD61A91BFCD91338392F66A52275CA3D78F2840BD * __this, RuntimeObject* ___purchases0, const RuntimeMethod* method);
// System.Void System.Action`1<System.Collections.Generic.List`1<UnityEngine.Purchasing.Product>>::Invoke(!0)
inline void Action_1_Invoke_m012CAFE53B000741A27D5B8DCA44D334403A2590 (Action_1_t5868F85E84D90CF271B4E7863DE1EFA97B473193 * __this, List_1_tD6CD4E5E39E75EE330B0C6DB8A7A0AEE4966D8AA * ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t5868F85E84D90CF271B4E7863DE1EFA97B473193 *, List_1_tD6CD4E5E39E75EE330B0C6DB8A7A0AEE4966D8AA *, const RuntimeMethod*))Action_1_Invoke_mAAE01A16F138CEC8E1965D322EFB6A7045FE76F2_gshared)(__this, ___obj0, method);
}
// System.Func`2<UnityEngine.Purchasing.Models.GooglePurchase,System.Boolean> UnityEngine.Purchasing.GoogleFinishTransactionService::PurchaseToFinishTransaction(UnityEngine.Purchasing.ProductDefinition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Func_2_t02A8DDA5AA2B110AE853BA161253FF2B6FADBF02 * GoogleFinishTransactionService_PurchaseToFinishTransaction_mFB29F884DA7D791F16E8276ABBBD75D98712E8DC (ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572 * ___product0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Where<UnityEngine.Purchasing.Models.GooglePurchase>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,System.Boolean>)
inline RuntimeObject* Enumerable_Where_TisGooglePurchase_tC4FC6BF44D795D5CD95AE000036679F32908721D_m433146C0349EB11DEB6509DD7D51E7801FB8FB19 (RuntimeObject* ___source0, Func_2_t02A8DDA5AA2B110AE853BA161253FF2B6FADBF02 * ___predicate1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t02A8DDA5AA2B110AE853BA161253FF2B6FADBF02 *, const RuntimeMethod*))Enumerable_Where_TisRuntimeObject_mD8AE6780E78249FC87B2344E09D130624E70D7DA_gshared)(___source0, ___predicate1, method);
}
// UnityEngine.Purchasing.ProductType UnityEngine.Purchasing.ProductDefinition::get_type()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ProductDefinition_get_type_m54E16B91196F7553460DEFE3701E9867F126AB42_inline (ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572 * __this, const RuntimeMethod* method);
// System.String UnityEngine.Purchasing.ProductDefinition::get_storeSpecificId()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ProductDefinition_get_storeSpecificId_m32204A00FC4A55334ABC8336509E4B57A6CD50B6_inline (ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<System.Boolean>::Invoke(!0)
inline void Action_1_Invoke_m94B1D693386EA0BD3C636939BDCE375EDEF91A04 (Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * __this, bool ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 *, bool, const RuntimeMethod*))Action_1_Invoke_m94B1D693386EA0BD3C636939BDCE375EDEF91A04_gshared)(__this, ___obj0, method);
}
// System.Collections.Generic.List`1<UnityEngine.Purchasing.Extension.ProductDescription> UnityEngine.Purchasing.GooglePlayStoreRetrieveProductsService::MakePurchasesIntoProducts(System.Collections.Generic.List`1<UnityEngine.Purchasing.Extension.ProductDescription>,System.Collections.Generic.IEnumerable`1<UnityEngine.Purchasing.Product>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t293A9B62DF9E931D44BF8E69475D79D308B627FF * GooglePlayStoreRetrieveProductsService_MakePurchasesIntoProducts_mD5AF44BA05D9EF7452116DA7ADF12C932E7A10B6 (List_1_t293A9B62DF9E931D44BF8E69475D79D308B627FF * ___retrievedProducts0, RuntimeObject* ___purchaseProducts1, const RuntimeMethod* method);
// System.String UnityEngine.Purchasing.Extension.ProductDescription::get_storeSpecificId()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ProductDescription_get_storeSpecificId_m805EE28C57C25664093C7F5C2FB24EAADFEAFB09_inline (ProductDescription_t9F14611B4DB2B1E0DAE69236C5C50FE41DDE6C75 * __this, const RuntimeMethod* method);
// UnityEngine.Purchasing.ProductDefinition UnityEngine.Purchasing.Product::get_definition()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572 * Product_get_definition_m0311B165A3BC6AF59A28AE4D75A220DDFDAA7182_inline (Product_t8D04681E6E43F5FBB6065B70408B9B0F13B5797E * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.GooglePurchaseService::OnQuerySkuDetailsResponse(System.Collections.Generic.List`1<UnityEngine.AndroidJavaObject>,UnityEngine.Purchasing.ProductDefinition,UnityEngine.Purchasing.Product,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GooglePurchaseService_OnQuerySkuDetailsResponse_m671E137346348FFE10A808267F5938D33986B6F2 (GooglePurchaseService_tDA2297B0DD64F816D878B18CB456CAF9717835BC * __this, List_1_t911FB7A3288EAACB1E70E61FB84793A19DDB716B * ___skus0, ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572 * ___productToBuy1, Product_t8D04681E6E43F5FBB6065B70408B9B0F13B5797E * ___oldProduct2, int32_t ___desiredProrationMode3, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.GoogleQueryPurchasesService/<>c__DisplayClass3_1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_1__ctor_m33C53116EE81A1014B87ECF0D68088F75E74A923 (U3CU3Ec__DisplayClass3_1_t9A31BB7393D6B9CFC983953329FD0B70D0487AF3 * __this, const RuntimeMethod* method);
// System.String UnityEngine.Purchasing.Models.GoogleSkuTypeEnum::InApp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GoogleSkuTypeEnum_InApp_m92A61D0EFCDA5CF1F0D41C554904B812598083E9 (const RuntimeMethod* method);
// UnityEngine.Purchasing.Models.GooglePurchaseResult UnityEngine.Purchasing.GoogleQueryPurchasesService::QueryPurchasesWithSkuType(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GooglePurchaseResult_t64D9114C2A0E5A7F17657FFA483286C5BF31FCB9 * GoogleQueryPurchasesService_QueryPurchasesWithSkuType_m98305080466C20FC525C6380C0D4436B5729BA0F (GoogleQueryPurchasesService_t54ECE1F3869C7C8A6CC6F43CA78470160D96ED3B * __this, String_t* ___skuType0, const RuntimeMethod* method);
// System.Void System.Action`1<System.Collections.Generic.List`1<UnityEngine.Purchasing.Models.GooglePurchase>>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mFBAC4A7CADCDF3E6A6D0CEA223DC4F858FD7DC1A (Action_1_tE42BD9F1180F09C4A76A988DB2ABFE78413236E1 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tE42BD9F1180F09C4A76A988DB2ABFE78413236E1 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.Purchasing.GoogleQueryPurchasesService::HandleGooglePurchaseResult(UnityEngine.Purchasing.Models.GooglePurchaseResult,System.Action`1<System.Collections.Generic.List`1<UnityEngine.Purchasing.Models.GooglePurchase>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleQueryPurchasesService_HandleGooglePurchaseResult_mA934976076D6691F765C9EBF8DD1A6DE68B63677 (GoogleQueryPurchasesService_t54ECE1F3869C7C8A6CC6F43CA78470160D96ED3B * __this, GooglePurchaseResult_t64D9114C2A0E5A7F17657FFA483286C5BF31FCB9 * ___purchaseResult0, Action_1_tE42BD9F1180F09C4A76A988DB2ABFE78413236E1 * ___onPurchaseResult1, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.GoogleQueryPurchasesService::HandleOnQueryPurchaseReceived(System.Action`1<System.Collections.Generic.List`1<UnityEngine.Purchasing.Models.GooglePurchase>>,System.Collections.Generic.List`1<UnityEngine.Purchasing.Models.GooglePurchase>,System.Collections.Generic.List`1<UnityEngine.Purchasing.Models.GooglePurchase>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleQueryPurchasesService_HandleOnQueryPurchaseReceived_m1FEF8A60E3F4333BDE916791C05318EF44B3FFEE (Action_1_tE42BD9F1180F09C4A76A988DB2ABFE78413236E1 * ___onQueryPurchaseSucceed0, List_1_tC18F59C75A96198914A4AF87DDEBD3D2DFE05E3A * ___googlePurchasesInSubs1, List_1_tC18F59C75A96198914A4AF87DDEBD3D2DFE05E3A * ___googlePurchasesInApps2, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.LocalizedProductDescription/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mCEB3DE7B859E584D62C4BDA6C2AF6B572DB0F376 (U3CU3Ec_t4E93A11683C5669A4E6B91ABFD5CC9B31E30929E * __this, const RuntimeMethod* method);
// System.Text.RegularExpressions.Group System.Text.RegularExpressions.GroupCollection::get_Item(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Group_t0B987F132503F2672BC66FCDD21EA8A6EB484883 * GroupCollection_get_Item_m58F451BF6490EB64CA9C1A05844A790967166A6D (GroupCollection_tAA9CA4E93B1A9D6B7199EE25AEB32922E72AA556 * __this, String_t* ___groupname0, const RuntimeMethod* method);
// System.String System.Text.RegularExpressions.Capture::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Capture_get_Value_mC5CAABA66AC24C90CE1A6FE7EE93AD4A926E4D5A (Capture_t048191E7E0D3177DCD8610E4968075AB41FB91D6 * __this, const RuntimeMethod* method);
// System.Int32 System.Int32::Parse(System.String,System.Globalization.NumberStyles)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_Parse_mE2DF841397B10B947C6729D5B811D0C25D211A56 (String_t* ___s0, int32_t ___style1, const RuntimeMethod* method);
// System.String System.Char::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Char_ToString_mE0DE433463C56FD30A4F0A50539553B17147C2F8 (Il2CppChar* __this, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.ProductCatalog/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m49A6673CEF550904F5C2BB8F10CF4307D270F65C (U3CU3Ec_t4BE94DF0E8BD1264DB13776C15A26EA265675AE0 * __this, const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C (String_t* ___value0, const RuntimeMethod* method);
// System.String System.String::Trim()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Trim_m3FEC641D7046124B7F381701903B50B5171DE0A2 (String_t* __this, const RuntimeMethod* method);
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.QuerySkuDetailsService/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m918FF893432FD5BD42B525D6736BE2CA16861DB7 (U3CU3Ec_tA145211B409C518BC8732858C266386A65B28D3A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Utils.SkuDetailsConverter::ConvertOnQuerySkuDetailsResponse(System.Collections.Generic.List`1<UnityEngine.AndroidJavaObject>,System.Action`1<System.Collections.Generic.List`1<UnityEngine.Purchasing.Extension.ProductDescription>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkuDetailsConverter_ConvertOnQuerySkuDetailsResponse_m28DB8058E57D4304C4FC52E9B6FA56EB8E936F24 (List_1_t911FB7A3288EAACB1E70E61FB84793A19DDB716B * ___skus0, Action_1_t762239D56917E8864E53EE1DFBAE23C93B8EF280 * ___onProductsReceived1, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.QuerySkuDetailsService::ConsolidateOnSkuDetailsReceived(UnityEngine.AndroidJavaObject,UnityEngine.AndroidJavaObject,System.Action`1<System.Collections.Generic.List`1<UnityEngine.AndroidJavaObject>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuerySkuDetailsService_ConsolidateOnSkuDetailsReceived_mE0D34DA4A0C040339373D332C692D276C579EE0E (QuerySkuDetailsService_t877F4FEBFAEEDAE6761E1AF7C0FEDB6C5CEF12B1 * __this, AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * ___javaBillingResult0, AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * ___skuDetails1, Action_1_t280D324324436AF42C8D2A05C7B79D2070238EC5 * ___onSkuDetailsResponse2, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.StandardPurchasingModule::UseMockWindowsStore(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StandardPurchasingModule_UseMockWindowsStore_m8DF9674BF88011A3C888A4730559ABAD71970C90 (StandardPurchasingModule_t46866896DA828EA4F1EBF9C38C5E3B89FF1E91B6 * __this, bool ___value0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2<System.String,System.Object> UnityEngine.Purchasing.MiniJSON.MiniJsonExtensions::HashtableFromJson(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * MiniJsonExtensions_HashtableFromJson_mF62FD90708401AEC2F5E00953A70C0238EAF6D10 (String_t* ___json0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::ContainsKey(!0)
inline bool Dictionary_2_ContainsKey_m3C1B28325435E61FFAD431E314EABF915B79A55E (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_mCABABA5D0FA017D2D54BE4FA6256C51518274116_gshared)(__this, ___key0, method);
}
// System.Type UnityEngine.Purchasing.UserInfoInterface::GetClassType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * UserInfoInterface_GetClassType_mB701D105CEF8B249596C7E3C89F5EC4305870FA9 (const RuntimeMethod* method);
// System.Boolean System.Type::op_Inequality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Inequality_m6DDC5E923203A79BF505F9275B694AD3FAA36DB0 (Type_t * ___left0, Type_t * ___right1, const RuntimeMethod* method);
// System.Object System.Activator::CreateInstance(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Activator_CreateInstance_m1BACAB5F4FBF138CCCB537DDCB0683A2AC064295 (Type_t * ___type0, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.UDPImpl::DictionaryToStringProperty(System.Collections.Generic.Dictionary`2<System.String,System.Object>,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UDPImpl_DictionaryToStringProperty_m13F9AB77048F8D075E9AAC1D1DD0406475BA2767 (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * ___dic0, RuntimeObject * ___info1, const RuntimeMethod* method);
// System.String UnityEngine.Purchasing.MiniJSON.MiniJsonExtensions::GetString(System.Collections.Generic.Dictionary`2<System.String,System.Object>,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MiniJsonExtensions_GetString_m47B48C267428E4CDA3D2A88B85C5BF6F7DFC1FEC (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * ___dic0, String_t* ___key1, String_t* ___defaultValue2, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_m012F321188703DCCB5C4F99C5A5AA2FA31A98144 (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * __this, String_t* ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *, String_t*, RuntimeObject *, const RuntimeMethod*))Dictionary_2_set_Item_mA8F31A10EE1129768E13ACC4DC847B05EAD2A055_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.String::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D (String_t* __this, String_t* ___value0, const RuntimeMethod* method);
// System.String UnityEngine.Purchasing.MiniJSON.MiniJsonExtensions::toJson(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MiniJsonExtensions_toJson_m99A5F4BE1C27D0D36F94D05BB282755D94836771 (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * ___obj0, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Item(!0)
inline RuntimeObject * Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_mF3BA34126DA8AFA32D1E5285D842C5955C698F0D_gshared)(__this, ___key0, method);
}
// System.Int32 System.Convert::ToInt32(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Convert_ToInt32_mFFEDED67681E3EC8705BCA890BBC206514431B4A (RuntimeObject * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.UDPImpl::OnPurchaseDeferred(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UDPImpl_OnPurchaseDeferred_mA86F125DC2AEADE2B9ED1E820810C3CEB1DBE7D7 (UDPImpl_t10D6EBBCE4EF9B6215CB108BDF04F75E404277F1 * __this, String_t* ___productId0, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// System.Object System.Enum::Parse(System.Type,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Enum_Parse_m6601224637A9CF40F77358805956C2EE757EAF68 (Type_t * ___enumType0, String_t* ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::.ctor()
inline void Dictionary_2__ctor_mCD0C2F0325B7677B9BC340A60AA3FB9C7A88FF63 (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *, const RuntimeMethod*))Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared)(__this, method);
}
// System.Void UnityEngine.Purchasing.Extension.PurchaseFailureDescription::.ctor(System.String,UnityEngine.Purchasing.PurchaseFailureReason,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PurchaseFailureDescription__ctor_m82E2FF9C0415A1D1001A8C0F80016441A08140D5 (PurchaseFailureDescription_tF5204FF61912DF603166BB79C4A10BA5727FBFD8 * __this, String_t* ___productId0, int32_t ___reason1, String_t* ___message2, const RuntimeMethod* method);
// System.Boolean System.String::StartsWith(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_StartsWith_mDE2FF98CAFFD13F88EDEB6C40158DDF840BFCF12 (String_t* __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.UIFakeStore/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m23C15A3F8354919E9739152CF9ADA508304A6F20 (U3CU3Ec_t4C01EB1EC5B633A6C269CEF322D5F130DD02C372 * __this, const RuntimeMethod* method);
// System.String UnityEngine.Purchasing.ProductDefinition::get_id()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ProductDefinition_get_id_m36316F5B3DCDF8110AF71C3F6E3F0E28AFC831E8_inline (ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4 (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * __this, float ___seconds0, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, RuntimeObject* ___routine0, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.WinRTStore/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mA06C6FA2819A9B484B8560E97F64FD2D1E8C1223 (U3CU3Ec_t114F9247D6420894D3A5B1652CCBE81140258A1D * __this, const RuntimeMethod* method);
// System.Void System.Decimal::.ctor(System.Int32,System.Int32,System.Int32,System.Boolean,System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Decimal__ctor_mB9DFF414FB23863B982F9D863D6E57867995C7F3 (Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * __this, int32_t ___lo0, int32_t ___mid1, int32_t ___hi2, bool ___isNegative3, uint8_t ___scale4, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Default.WinProductDescription::.ctor(System.String,System.String,System.String,System.String,System.String,System.Decimal,System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WinProductDescription__ctor_m9255456F4AA2925A63870208AF1D7166DE90CAF9 (WinProductDescription_tA1CEDA6F11485CE9F301415C989ECF6A3A8B4829 * __this, String_t* ___id0, String_t* ___price1, String_t* ___title2, String_t* ___description3, String_t* ___isoCode4, Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___priceD5, String_t* ___receipt6, String_t* ___transactionId7, bool ___consumable8, const RuntimeMethod* method);
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
// System.Void UnityEngine.Purchasing.GoogleCachedQuerySkuDetailsService/<>c__DisplayClass2_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0__ctor_m5053E96039947A302C4689D056C35B05B05BF4F8 (U3CU3Ec__DisplayClass2_0_t8B96ADC9CAF8E16784D14AB085C48B73C5219E18 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.Purchasing.GoogleCachedQuerySkuDetailsService/<>c__DisplayClass2_0::<ContainsSku>b__0(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass2_0_U3CContainsSkuU3Eb__0_mD79ECA9D72420C995BD964346E930D94BDEB31E6 (U3CU3Ec__DisplayClass2_0_t8B96ADC9CAF8E16784D14AB085C48B73C5219E18 * __this, AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * ___skuDetails0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisString_t_mE0E9BE21A1938D675DA63B376682D54E3B36AF0E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m002765312BF306B1B3B5BFAB9550C0A2A1820CDA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1A569D2EAEB9C57AE0D180CFA9396A30C0267A44);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return m_CachedQueriedSkus.Any(skuDetails => skuDetails.Call<string>("getSku") == sku);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_0 = ___skuDetails0;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1;
		L_1 = Array_Empty_TisRuntimeObject_m002765312BF306B1B3B5BFAB9550C0A2A1820CDA_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m002765312BF306B1B3B5BFAB9550C0A2A1820CDA_RuntimeMethod_var);
		String_t* L_2;
		L_2 = AndroidJavaObject_Call_TisString_t_mE0E9BE21A1938D675DA63B376682D54E3B36AF0E(L_0, _stringLiteral1A569D2EAEB9C57AE0D180CFA9396A30C0267A44, L_1, /*hidden argument*/AndroidJavaObject_Call_TisString_t_mE0E9BE21A1938D675DA63B376682D54E3B36AF0E_RuntimeMethod_var);
		String_t* L_3 = __this->get_sku_0();
		bool L_4;
		L_4 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_2, L_3, /*hidden argument*/NULL);
		return L_4;
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
// System.Void UnityEngine.Purchasing.GoogleCachedQuerySkuDetailsService/<>c__DisplayClass4_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0__ctor_m6C65463A55863B9A25A50C4446131A9A3D8B1180 (U3CU3Ec__DisplayClass4_0_t68BB8B698F47C5C9A54079921D92A7CFF92C8ED0 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.Purchasing.GoogleCachedQuerySkuDetailsService/<>c__DisplayClass4_0::<UpdateCachedQueriedSku>b__0(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass4_0_U3CUpdateCachedQueriedSkuU3Eb__0_m74B5E9460D633B600E3CA67489A51E16D69625F9 (U3CU3Ec__DisplayClass4_0_t68BB8B698F47C5C9A54079921D92A7CFF92C8ED0 * __this, AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * ___skuDetails0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisString_t_mE0E9BE21A1938D675DA63B376682D54E3B36AF0E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m002765312BF306B1B3B5BFAB9550C0A2A1820CDA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1A569D2EAEB9C57AE0D180CFA9396A30C0267A44);
		s_Il2CppMethodInitialized = true;
	}
	{
		// .FirstOrDefault(skuDetails => skuDetails.Call<string>("getSku") == queriedSku);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_0 = ___skuDetails0;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1;
		L_1 = Array_Empty_TisRuntimeObject_m002765312BF306B1B3B5BFAB9550C0A2A1820CDA_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m002765312BF306B1B3B5BFAB9550C0A2A1820CDA_RuntimeMethod_var);
		String_t* L_2;
		L_2 = AndroidJavaObject_Call_TisString_t_mE0E9BE21A1938D675DA63B376682D54E3B36AF0E(L_0, _stringLiteral1A569D2EAEB9C57AE0D180CFA9396A30C0267A44, L_1, /*hidden argument*/AndroidJavaObject_Call_TisString_t_mE0E9BE21A1938D675DA63B376682D54E3B36AF0E_RuntimeMethod_var);
		String_t* L_3 = __this->get_queriedSku_0();
		bool L_4;
		L_4 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_2, L_3, /*hidden argument*/NULL);
		return L_4;
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
// System.Void UnityEngine.Purchasing.GoogleFetchPurchases/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mFA21743189085BBB0D553F80C2C87FCB756AFF2A (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t8CF44C733C2519A840682FA299C0CA1477C017EB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t8CF44C733C2519A840682FA299C0CA1477C017EB * L_0 = (U3CU3Ec_t8CF44C733C2519A840682FA299C0CA1477C017EB *)il2cpp_codegen_object_new(U3CU3Ec_t8CF44C733C2519A840682FA299C0CA1477C017EB_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mE280D5BE4AA8A1CA2E772B978174C33C21B3D4B6(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t8CF44C733C2519A840682FA299C0CA1477C017EB_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t8CF44C733C2519A840682FA299C0CA1477C017EB_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void UnityEngine.Purchasing.GoogleFetchPurchases/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mE280D5BE4AA8A1CA2E772B978174C33C21B3D4B6 (U3CU3Ec_t8CF44C733C2519A840682FA299C0CA1477C017EB * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.Purchasing.GoogleFetchPurchases/<>c::<FillProductsWithPurchases>b__7_0(UnityEngine.Purchasing.Models.GooglePurchase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CFillProductsWithPurchasesU3Eb__7_0_mD5B0BE61924BF75FBAD65FF6B62E46E78426F885 (U3CU3Ec_t8CF44C733C2519A840682FA299C0CA1477C017EB * __this, GooglePurchase_tC4FC6BF44D795D5CD95AE000036679F32908721D * ___purchase0, const RuntimeMethod* method)
{
	{
		// foreach (var purchase in purchases.Where(purchase => purchase != null).ToList())
		GooglePurchase_tC4FC6BF44D795D5CD95AE000036679F32908721D * L_0 = ___purchase0;
		return (bool)((!(((RuntimeObject*)(GooglePurchase_tC4FC6BF44D795D5CD95AE000036679F32908721D *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
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
// System.Void UnityEngine.Purchasing.GoogleFetchPurchases/<>c__DisplayClass6_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass6_0__ctor_m9C028A379BEA7F78B0EA3A329E92E7435DF39338 (U3CU3Ec__DisplayClass6_0_t781F434AB149FECCB6A8076380C33604CADA4501 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.GoogleFetchPurchases/<>c__DisplayClass6_0::<FetchPurchases>b__0(System.Collections.Generic.List`1<UnityEngine.Purchasing.Models.GooglePurchase>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass6_0_U3CFetchPurchasesU3Eb__0_mDCC07128F58E14877CB7773CA31601AC286BB5BE (U3CU3Ec__DisplayClass6_0_t781F434AB149FECCB6A8076380C33604CADA4501 * __this, List_1_tC18F59C75A96198914A4AF87DDEBD3D2DFE05E3A * ___googlePurchases0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_m012CAFE53B000741A27D5B8DCA44D334403A2590_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// onQueryPurchaseSucceed(FillProductsWithPurchases(googlePurchases));
		Action_1_t5868F85E84D90CF271B4E7863DE1EFA97B473193 * L_0 = __this->get_onQueryPurchaseSucceed_0();
		GoogleFetchPurchases_tD61A91BFCD91338392F66A52275CA3D78F2840BD * L_1 = __this->get_U3CU3E4__this_1();
		List_1_tC18F59C75A96198914A4AF87DDEBD3D2DFE05E3A * L_2 = ___googlePurchases0;
		List_1_tD6CD4E5E39E75EE330B0C6DB8A7A0AEE4966D8AA * L_3;
		L_3 = GoogleFetchPurchases_FillProductsWithPurchases_m0892BAACC4CA9092B159C4C4544DDBD543CE4917(L_1, L_2, /*hidden argument*/NULL);
		Action_1_Invoke_m012CAFE53B000741A27D5B8DCA44D334403A2590(L_0, L_3, /*hidden argument*/Action_1_Invoke_m012CAFE53B000741A27D5B8DCA44D334403A2590_RuntimeMethod_var);
		// });
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
// System.Void UnityEngine.Purchasing.GoogleFinishTransactionService/<>c__DisplayClass3_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0__ctor_m0599D44EA81F6AD23A3994D3AC4734B91344EC0A (U3CU3Ec__DisplayClass3_0_t3BF37E4D30BE12133B2741139D83ABB561318025 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.GoogleFinishTransactionService/<>c__DisplayClass3_0::<FinishTransaction>b__0(System.Collections.Generic.List`1<UnityEngine.Purchasing.Models.GooglePurchase>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0_U3CFinishTransactionU3Eb__0_m8D5D3C9381F3462C5DC19DCB946153FF251C8322 (U3CU3Ec__DisplayClass3_0_t3BF37E4D30BE12133B2741139D83ABB561318025 * __this, List_1_tC18F59C75A96198914A4AF87DDEBD3D2DFE05E3A * ___purchases0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Where_TisGooglePurchase_tC4FC6BF44D795D5CD95AE000036679F32908721D_m433146C0349EB11DEB6509DD7D51E7801FB8FB19_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t966BAC51602F8C5C934057BB9A05A4F7224B6672_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t093D7098941DA2C2D107B1D33E81BF0C22E60D10_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IGoogleBillingClient_t2F61E52F880CE5727738B2918996CEE49913880C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	GooglePurchase_tC4FC6BF44D795D5CD95AE000036679F32908721D * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// foreach (var purchase in purchases.Where(PurchaseToFinishTransaction(product)))
		List_1_tC18F59C75A96198914A4AF87DDEBD3D2DFE05E3A * L_0 = ___purchases0;
		ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572 * L_1 = __this->get_product_0();
		Func_2_t02A8DDA5AA2B110AE853BA161253FF2B6FADBF02 * L_2;
		L_2 = GoogleFinishTransactionService_PurchaseToFinishTransaction_mFB29F884DA7D791F16E8276ABBBD75D98712E8DC(L_1, /*hidden argument*/NULL);
		RuntimeObject* L_3;
		L_3 = Enumerable_Where_TisGooglePurchase_tC4FC6BF44D795D5CD95AE000036679F32908721D_m433146C0349EB11DEB6509DD7D51E7801FB8FB19(L_0, L_2, /*hidden argument*/Enumerable_Where_TisGooglePurchase_tC4FC6BF44D795D5CD95AE000036679F32908721D_m433146C0349EB11DEB6509DD7D51E7801FB8FB19_RuntimeMethod_var);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<UnityEngine.Purchasing.Models.GooglePurchase>::GetEnumerator() */, IEnumerable_1_t966BAC51602F8C5C934057BB9A05A4F7224B6672_il2cpp_TypeInfo_var, L_3);
		V_0 = L_4;
	}

IL_0017:
	try
	{// begin try (depth: 1)
		{
			goto IL_007d;
		}

IL_0019:
		{
			// foreach (var purchase in purchases.Where(PurchaseToFinishTransaction(product)))
			RuntimeObject* L_5 = V_0;
			GooglePurchase_tC4FC6BF44D795D5CD95AE000036679F32908721D * L_6;
			L_6 = InterfaceFuncInvoker0< GooglePurchase_tC4FC6BF44D795D5CD95AE000036679F32908721D * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<UnityEngine.Purchasing.Models.GooglePurchase>::get_Current() */, IEnumerator_1_t093D7098941DA2C2D107B1D33E81BF0C22E60D10_il2cpp_TypeInfo_var, L_5);
			V_1 = L_6;
			// if (product.type == ProductType.Consumable)
			ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572 * L_7 = __this->get_product_0();
			int32_t L_8;
			L_8 = ProductDefinition_get_type_m54E16B91196F7553460DEFE3701E9867F126AB42_inline(L_7, /*hidden argument*/NULL);
			if (L_8)
			{
				goto IL_0052;
			}
		}

IL_002d:
		{
			// m_BillingClient.ConsumeAsync(purchaseToken, product, purchase, onConsume);
			GoogleFinishTransactionService_t27140F1A1D2F1ED6D6A48709F4C7ED82F59F5BCA * L_9 = __this->get_U3CU3E4__this_1();
			RuntimeObject* L_10 = L_9->get_m_BillingClient_0();
			String_t* L_11 = __this->get_purchaseToken_2();
			ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572 * L_12 = __this->get_product_0();
			GooglePurchase_tC4FC6BF44D795D5CD95AE000036679F32908721D * L_13 = V_1;
			Action_4_t6B11EA4C8E25C04252AE71EBA2F351ABD22B744A * L_14 = __this->get_onConsume_3();
			InterfaceActionInvoker4< String_t*, ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572 *, GooglePurchase_tC4FC6BF44D795D5CD95AE000036679F32908721D *, Action_4_t6B11EA4C8E25C04252AE71EBA2F351ABD22B744A * >::Invoke(4 /* System.Void UnityEngine.Purchasing.Interfaces.IGoogleBillingClient::ConsumeAsync(System.String,UnityEngine.Purchasing.ProductDefinition,UnityEngine.Purchasing.Models.GooglePurchase,System.Action`4<UnityEngine.Purchasing.ProductDefinition,UnityEngine.Purchasing.Models.GooglePurchase,UnityEngine.Purchasing.Models.GoogleBillingResult,System.String>) */, IGoogleBillingClient_t2F61E52F880CE5727738B2918996CEE49913880C_il2cpp_TypeInfo_var, L_10, L_11, L_12, L_13, L_14);
			// }
			goto IL_007d;
		}

IL_0052:
		{
			// else if (!purchase.IsAcknowledged())
			GooglePurchase_tC4FC6BF44D795D5CD95AE000036679F32908721D * L_15 = V_1;
			bool L_16;
			L_16 = VirtualFuncInvoker0< bool >::Invoke(4 /* System.Boolean UnityEngine.Purchasing.Models.GooglePurchase::IsAcknowledged() */, L_15);
			if (L_16)
			{
				goto IL_007d;
			}
		}

IL_005a:
		{
			// m_BillingClient.AcknowledgePurchase(purchaseToken, product, purchase, onAcknowledge);
			GoogleFinishTransactionService_t27140F1A1D2F1ED6D6A48709F4C7ED82F59F5BCA * L_17 = __this->get_U3CU3E4__this_1();
			RuntimeObject* L_18 = L_17->get_m_BillingClient_0();
			String_t* L_19 = __this->get_purchaseToken_2();
			ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572 * L_20 = __this->get_product_0();
			GooglePurchase_tC4FC6BF44D795D5CD95AE000036679F32908721D * L_21 = V_1;
			Action_3_t0083092190368806A2DB2F1602BADE4C8B060D46 * L_22 = __this->get_onAcknowledge_4();
			InterfaceActionInvoker4< String_t*, ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572 *, GooglePurchase_tC4FC6BF44D795D5CD95AE000036679F32908721D *, Action_3_t0083092190368806A2DB2F1602BADE4C8B060D46 * >::Invoke(5 /* System.Void UnityEngine.Purchasing.Interfaces.IGoogleBillingClient::AcknowledgePurchase(System.String,UnityEngine.Purchasing.ProductDefinition,UnityEngine.Purchasing.Models.GooglePurchase,System.Action`3<UnityEngine.Purchasing.ProductDefinition,UnityEngine.Purchasing.Models.GooglePurchase,UnityEngine.Purchasing.Models.GoogleBillingResult>) */, IGoogleBillingClient_t2F61E52F880CE5727738B2918996CEE49913880C_il2cpp_TypeInfo_var, L_18, L_19, L_20, L_21, L_22);
		}

IL_007d:
		{
			// foreach (var purchase in purchases.Where(PurchaseToFinishTransaction(product)))
			RuntimeObject* L_23 = V_0;
			bool L_24;
			L_24 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_23);
			if (L_24)
			{
				goto IL_0019;
			}
		}

IL_0085:
		{
			IL2CPP_LEAVE(0x91, FINALLY_0087);
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0087;
	}

FINALLY_0087:
	{// begin finally (depth: 1)
		{
			RuntimeObject* L_25 = V_0;
			if (!L_25)
			{
				goto IL_0090;
			}
		}

IL_008a:
		{
			RuntimeObject* L_26 = V_0;
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_26);
		}

IL_0090:
		{
			IL2CPP_END_FINALLY(135)
		}
	}// end finally (depth: 1)
	IL2CPP_CLEANUP(135)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x91, IL_0091)
	}

IL_0091:
	{
		// });
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
// System.Void UnityEngine.Purchasing.GoogleFinishTransactionService/<>c__DisplayClass4_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0__ctor_m3C5BEFED225A9F76F48427C6B414AC3896C39C42 (U3CU3Ec__DisplayClass4_0_t6345A418534D6DA6A3412796CF288FF96408AF96 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.Purchasing.GoogleFinishTransactionService/<>c__DisplayClass4_0::<PurchaseToFinishTransaction>b__0(UnityEngine.Purchasing.Models.GooglePurchase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass4_0_U3CPurchaseToFinishTransactionU3Eb__0_m4C233DEFDC9615671A29596680C20A7D4D5B07BD (U3CU3Ec__DisplayClass4_0_t6345A418534D6DA6A3412796CF288FF96408AF96 * __this, GooglePurchase_tC4FC6BF44D795D5CD95AE000036679F32908721D * ___purchase0, const RuntimeMethod* method)
{
	{
		// return purchase => purchase != null && purchase.sku == product.storeSpecificId && purchase.IsPurchased();
		GooglePurchase_tC4FC6BF44D795D5CD95AE000036679F32908721D * L_0 = ___purchase0;
		if (!L_0)
		{
			goto IL_0022;
		}
	}
	{
		GooglePurchase_tC4FC6BF44D795D5CD95AE000036679F32908721D * L_1 = ___purchase0;
		String_t* L_2 = L_1->get_sku_2();
		ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572 * L_3 = __this->get_product_0();
		String_t* L_4;
		L_4 = ProductDefinition_get_storeSpecificId_m32204A00FC4A55334ABC8336509E4B57A6CD50B6_inline(L_3, /*hidden argument*/NULL);
		bool L_5;
		L_5 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_2, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0022;
		}
	}
	{
		GooglePurchase_tC4FC6BF44D795D5CD95AE000036679F32908721D * L_6 = ___purchase0;
		bool L_7;
		L_7 = VirtualFuncInvoker0< bool >::Invoke(5 /* System.Boolean UnityEngine.Purchasing.Models.GooglePurchase::IsPurchased() */, L_6);
		return L_7;
	}

IL_0022:
	{
		return (bool)0;
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
// System.Void UnityEngine.Purchasing.GooglePlayStoreExtensions/<>c__DisplayClass9_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass9_0__ctor_m1320726B5729F7F7868C9970500C3C08327DE7E8 (U3CU3Ec__DisplayClass9_0_t10F6B900F6EEC9A86793B5D2C2422947E0527021 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.GooglePlayStoreExtensions/<>c__DisplayClass9_0::<RestoreTransactions>b__0(System.Collections.Generic.List`1<UnityEngine.Purchasing.Models.GooglePurchase>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass9_0_U3CRestoreTransactionsU3Eb__0_m3652D9B46A5671BD13C8FF7CA44CBBB30E3BB94A (U3CU3Ec__DisplayClass9_0_t10F6B900F6EEC9A86793B5D2C2422947E0527021 * __this, List_1_tC18F59C75A96198914A4AF87DDEBD3D2DFE05E3A * ___purchase0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_m94B1D693386EA0BD3C636939BDCE375EDEF91A04_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (purchase != null)
		List_1_tC18F59C75A96198914A4AF87DDEBD3D2DFE05E3A * L_0 = ___purchase0;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		// callback(true);
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_1 = __this->get_callback_0();
		Action_1_Invoke_m94B1D693386EA0BD3C636939BDCE375EDEF91A04(L_1, (bool)1, /*hidden argument*/Action_1_Invoke_m94B1D693386EA0BD3C636939BDCE375EDEF91A04_RuntimeMethod_var);
	}

IL_000f:
	{
		// });
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
// System.Void UnityEngine.Purchasing.GooglePlayStoreRetrieveProductsService/<>c__DisplayClass6_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass6_0__ctor_mB0BBD98227DC68954A0B31BE0401BF3026EFBA8A (U3CU3Ec__DisplayClass6_0_t78B37EDE769328EC0E183945C9A747D234180D40 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.GooglePlayStoreRetrieveProductsService/<>c__DisplayClass6_0::<RetrieveProducts>b__2(System.Collections.Generic.List`1<UnityEngine.Purchasing.Product>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass6_0_U3CRetrieveProductsU3Eb__2_m98E55D0BF485F89DD1FCBEBDD20F6D380C286EB7 (U3CU3Ec__DisplayClass6_0_t78B37EDE769328EC0E183945C9A747D234180D40 * __this, List_1_tD6CD4E5E39E75EE330B0C6DB8A7A0AEE4966D8AA * ___purchaseProducts0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStoreCallback_t3176FA3F472DF5F252CDB5D87E60B2538A44C05F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t293A9B62DF9E931D44BF8E69475D79D308B627FF * V_0 = NULL;
	{
		// var mergedProducts = MakePurchasesIntoProducts(retrievedProducts, purchaseProducts);
		List_1_t293A9B62DF9E931D44BF8E69475D79D308B627FF * L_0 = __this->get_retrievedProducts_0();
		List_1_tD6CD4E5E39E75EE330B0C6DB8A7A0AEE4966D8AA * L_1 = ___purchaseProducts0;
		List_1_t293A9B62DF9E931D44BF8E69475D79D308B627FF * L_2;
		L_2 = GooglePlayStoreRetrieveProductsService_MakePurchasesIntoProducts_mD5AF44BA05D9EF7452116DA7ADF12C932E7A10B6(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// m_StoreCallback.OnProductsRetrieved(mergedProducts);
		GooglePlayStoreRetrieveProductsService_t7F583191AD884C7619CC313AEC29AC049DC4C6BC * L_3 = __this->get_U3CU3E4__this_1();
		RuntimeObject* L_4 = L_3->get_m_StoreCallback_2();
		List_1_t293A9B62DF9E931D44BF8E69475D79D308B627FF * L_5 = V_0;
		InterfaceActionInvoker1< List_1_t293A9B62DF9E931D44BF8E69475D79D308B627FF * >::Invoke(2 /* System.Void UnityEngine.Purchasing.Extension.IStoreCallback::OnProductsRetrieved(System.Collections.Generic.List`1<UnityEngine.Purchasing.Extension.ProductDescription>) */, IStoreCallback_t3176FA3F472DF5F252CDB5D87E60B2538A44C05F_il2cpp_TypeInfo_var, L_4, L_5);
		// });
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
// System.Void UnityEngine.Purchasing.GooglePlayStoreRetrieveProductsService/<>c__DisplayClass8_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass8_0__ctor_m22FFB481B4D934BAB68075FDAF1140A2F4A59EAA (U3CU3Ec__DisplayClass8_0_t219B79B462F00643C2538E406391C3F55FFD1B53 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.Purchasing.GooglePlayStoreRetrieveProductsService/<>c__DisplayClass8_0::<MakePurchasesIntoProducts>b__0(UnityEngine.Purchasing.Extension.ProductDescription)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass8_0_U3CMakePurchasesIntoProductsU3Eb__0_m09A0C021473109E6D7BDCA3873D9890789190F43 (U3CU3Ec__DisplayClass8_0_t219B79B462F00643C2538E406391C3F55FFD1B53 * __this, ProductDescription_t9F14611B4DB2B1E0DAE69236C5C50FE41DDE6C75 * ___product0, const RuntimeMethod* method)
{
	{
		// var retrievedProductIndex = updatedProducts.FindLastIndex(product => product.storeSpecificId == purchaseProduct.definition.storeSpecificId);
		ProductDescription_t9F14611B4DB2B1E0DAE69236C5C50FE41DDE6C75 * L_0 = ___product0;
		String_t* L_1;
		L_1 = ProductDescription_get_storeSpecificId_m805EE28C57C25664093C7F5C2FB24EAADFEAFB09_inline(L_0, /*hidden argument*/NULL);
		Product_t8D04681E6E43F5FBB6065B70408B9B0F13B5797E * L_2 = __this->get_purchaseProduct_0();
		ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572 * L_3;
		L_3 = Product_get_definition_m0311B165A3BC6AF59A28AE4D75A220DDFDAA7182_inline(L_2, /*hidden argument*/NULL);
		String_t* L_4;
		L_4 = ProductDefinition_get_storeSpecificId_m32204A00FC4A55334ABC8336509E4B57A6CD50B6_inline(L_3, /*hidden argument*/NULL);
		bool L_5;
		L_5 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_1, L_4, /*hidden argument*/NULL);
		return L_5;
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
// System.Void UnityEngine.Purchasing.Utils.GooglePurchaseHelper/<>c__DisplayClass0_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass0_0__ctor_m17779068792D725C79FF3400001D05457729965C (U3CU3Ec__DisplayClass0_0_t7A126D437A23AC83ECEB81C7BB02610E74C19281 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.Purchasing.Utils.GooglePurchaseHelper/<>c__DisplayClass0_0::<MakeGooglePurchase>b__0(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass0_0_U3CMakeGooglePurchaseU3Eb__0_m1279E23377E4FD08B33EAFDFAF341AFEAD367642 (U3CU3Ec__DisplayClass0_0_t7A126D437A23AC83ECEB81C7BB02610E74C19281 * __this, AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * ___skuDetailJavaObject0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisString_t_mE0E9BE21A1938D675DA63B376682D54E3B36AF0E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m002765312BF306B1B3B5BFAB9550C0A2A1820CDA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1A569D2EAEB9C57AE0D180CFA9396A30C0267A44);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// var skuDetailsSku = skuDetailJavaObject.Call<string>("getSku");
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_0 = ___skuDetailJavaObject0;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1;
		L_1 = Array_Empty_TisRuntimeObject_m002765312BF306B1B3B5BFAB9550C0A2A1820CDA_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m002765312BF306B1B3B5BFAB9550C0A2A1820CDA_RuntimeMethod_var);
		String_t* L_2;
		L_2 = AndroidJavaObject_Call_TisString_t_mE0E9BE21A1938D675DA63B376682D54E3B36AF0E(L_0, _stringLiteral1A569D2EAEB9C57AE0D180CFA9396A30C0267A44, L_1, /*hidden argument*/AndroidJavaObject_Call_TisString_t_mE0E9BE21A1938D675DA63B376682D54E3B36AF0E_RuntimeMethod_var);
		V_0 = L_2;
		// return sku == skuDetailsSku;
		String_t* L_3 = __this->get_sku_0();
		String_t* L_4 = V_0;
		bool L_5;
		L_5 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_3, L_4, /*hidden argument*/NULL);
		return L_5;
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
// System.Void UnityEngine.Purchasing.GooglePurchaseService/<>c__DisplayClass4_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0__ctor_m960F2337A57DB84210FD504DD29F821CAFD59304 (U3CU3Ec__DisplayClass4_0_tDB423946076B881717411AF2DF97399068B486BF * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.GooglePurchaseService/<>c__DisplayClass4_0::<Purchase>b__0(System.Collections.Generic.List`1<UnityEngine.AndroidJavaObject>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0_U3CPurchaseU3Eb__0_mCF85F67E6F1FBD53415A3BDE2A6B2D7281B38441 (U3CU3Ec__DisplayClass4_0_tDB423946076B881717411AF2DF97399068B486BF * __this, List_1_t911FB7A3288EAACB1E70E61FB84793A19DDB716B * ___skus0, const RuntimeMethod* method)
{
	{
		// OnQuerySkuDetailsResponse(skus, product, oldProduct, desiredProrationMode);
		GooglePurchaseService_tDA2297B0DD64F816D878B18CB456CAF9717835BC * L_0 = __this->get_U3CU3E4__this_0();
		List_1_t911FB7A3288EAACB1E70E61FB84793A19DDB716B * L_1 = ___skus0;
		ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572 * L_2 = __this->get_product_1();
		Product_t8D04681E6E43F5FBB6065B70408B9B0F13B5797E * L_3 = __this->get_oldProduct_2();
		int32_t L_4 = __this->get_desiredProrationMode_3();
		GooglePurchaseService_OnQuerySkuDetailsResponse_m671E137346348FFE10A808267F5938D33986B6F2(L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		// });
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
// System.Void UnityEngine.Purchasing.GoogleQueryPurchasesService/<>c__DisplayClass3_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0__ctor_m8D03C704EF44B9559CDBEB033DE1885035A95ABF (U3CU3Ec__DisplayClass3_0_t476F14BFD47890861A2F6B75F95E9072EA5176DB * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.GoogleQueryPurchasesService/<>c__DisplayClass3_0::<QueryPurchases>b__0(System.Collections.Generic.List`1<UnityEngine.Purchasing.Models.GooglePurchase>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0_U3CQueryPurchasesU3Eb__0_mEB10BCBE87442D41878620A11341967A0D9778C6 (U3CU3Ec__DisplayClass3_0_t476F14BFD47890861A2F6B75F95E9072EA5176DB * __this, List_1_tC18F59C75A96198914A4AF87DDEBD3D2DFE05E3A * ___googlePurchasesInSubs0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_mFBAC4A7CADCDF3E6A6D0CEA223DC4F858FD7DC1A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tE42BD9F1180F09C4A76A988DB2ABFE78413236E1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass3_1_U3CQueryPurchasesU3Eb__1_mBFC73B663DCC26ACC14A8F17A74F04C9290BDC0A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass3_1_t9A31BB7393D6B9CFC983953329FD0B70D0487AF3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass3_1_t9A31BB7393D6B9CFC983953329FD0B70D0487AF3 * V_0 = NULL;
	{
		U3CU3Ec__DisplayClass3_1_t9A31BB7393D6B9CFC983953329FD0B70D0487AF3 * L_0 = (U3CU3Ec__DisplayClass3_1_t9A31BB7393D6B9CFC983953329FD0B70D0487AF3 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass3_1_t9A31BB7393D6B9CFC983953329FD0B70D0487AF3_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass3_1__ctor_m33C53116EE81A1014B87ECF0D68088F75E74A923(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass3_1_t9A31BB7393D6B9CFC983953329FD0B70D0487AF3 * L_1 = V_0;
		L_1->set_CSU24U3CU3E8__locals1_1(__this);
		U3CU3Ec__DisplayClass3_1_t9A31BB7393D6B9CFC983953329FD0B70D0487AF3 * L_2 = V_0;
		List_1_tC18F59C75A96198914A4AF87DDEBD3D2DFE05E3A * L_3 = ___googlePurchasesInSubs0;
		L_2->set_googlePurchasesInSubs_0(L_3);
		// HandleGooglePurchaseResult(QueryPurchasesWithSkuType(GoogleSkuTypeEnum.InApp()), googlePurchasesInApps =>
		// {
		//     HandleOnQueryPurchaseReceived(onQueryPurchaseSucceed, googlePurchasesInSubs, googlePurchasesInApps);
		// });
		GoogleQueryPurchasesService_t54ECE1F3869C7C8A6CC6F43CA78470160D96ED3B * L_4 = __this->get_U3CU3E4__this_0();
		GoogleQueryPurchasesService_t54ECE1F3869C7C8A6CC6F43CA78470160D96ED3B * L_5 = __this->get_U3CU3E4__this_0();
		String_t* L_6;
		L_6 = GoogleSkuTypeEnum_InApp_m92A61D0EFCDA5CF1F0D41C554904B812598083E9(/*hidden argument*/NULL);
		GooglePurchaseResult_t64D9114C2A0E5A7F17657FFA483286C5BF31FCB9 * L_7;
		L_7 = GoogleQueryPurchasesService_QueryPurchasesWithSkuType_m98305080466C20FC525C6380C0D4436B5729BA0F(L_5, L_6, /*hidden argument*/NULL);
		U3CU3Ec__DisplayClass3_1_t9A31BB7393D6B9CFC983953329FD0B70D0487AF3 * L_8 = V_0;
		Action_1_tE42BD9F1180F09C4A76A988DB2ABFE78413236E1 * L_9 = (Action_1_tE42BD9F1180F09C4A76A988DB2ABFE78413236E1 *)il2cpp_codegen_object_new(Action_1_tE42BD9F1180F09C4A76A988DB2ABFE78413236E1_il2cpp_TypeInfo_var);
		Action_1__ctor_mFBAC4A7CADCDF3E6A6D0CEA223DC4F858FD7DC1A(L_9, L_8, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass3_1_U3CQueryPurchasesU3Eb__1_mBFC73B663DCC26ACC14A8F17A74F04C9290BDC0A_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_mFBAC4A7CADCDF3E6A6D0CEA223DC4F858FD7DC1A_RuntimeMethod_var);
		GoogleQueryPurchasesService_HandleGooglePurchaseResult_mA934976076D6691F765C9EBF8DD1A6DE68B63677(L_4, L_7, L_9, /*hidden argument*/NULL);
		// });
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
// System.Void UnityEngine.Purchasing.GoogleQueryPurchasesService/<>c__DisplayClass3_1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_1__ctor_m33C53116EE81A1014B87ECF0D68088F75E74A923 (U3CU3Ec__DisplayClass3_1_t9A31BB7393D6B9CFC983953329FD0B70D0487AF3 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.GoogleQueryPurchasesService/<>c__DisplayClass3_1::<QueryPurchases>b__1(System.Collections.Generic.List`1<UnityEngine.Purchasing.Models.GooglePurchase>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_1_U3CQueryPurchasesU3Eb__1_mBFC73B663DCC26ACC14A8F17A74F04C9290BDC0A (U3CU3Ec__DisplayClass3_1_t9A31BB7393D6B9CFC983953329FD0B70D0487AF3 * __this, List_1_tC18F59C75A96198914A4AF87DDEBD3D2DFE05E3A * ___googlePurchasesInApps0, const RuntimeMethod* method)
{
	{
		// HandleOnQueryPurchaseReceived(onQueryPurchaseSucceed, googlePurchasesInSubs, googlePurchasesInApps);
		U3CU3Ec__DisplayClass3_0_t476F14BFD47890861A2F6B75F95E9072EA5176DB * L_0 = __this->get_CSU24U3CU3E8__locals1_1();
		Action_1_tE42BD9F1180F09C4A76A988DB2ABFE78413236E1 * L_1 = L_0->get_onQueryPurchaseSucceed_1();
		List_1_tC18F59C75A96198914A4AF87DDEBD3D2DFE05E3A * L_2 = __this->get_googlePurchasesInSubs_0();
		List_1_tC18F59C75A96198914A4AF87DDEBD3D2DFE05E3A * L_3 = ___googlePurchasesInApps0;
		GoogleQueryPurchasesService_HandleOnQueryPurchaseReceived_m1FEF8A60E3F4333BDE916791C05318EF44B3FFEE(L_1, L_2, L_3, /*hidden argument*/NULL);
		// });
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
// System.Void UnityEngine.Purchasing.LocalizedProductDescription/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mA5D0607DC1E374DA367CF241CCF3372E46886285 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t4E93A11683C5669A4E6B91ABFD5CC9B31E30929E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t4E93A11683C5669A4E6B91ABFD5CC9B31E30929E * L_0 = (U3CU3Ec_t4E93A11683C5669A4E6B91ABFD5CC9B31E30929E *)il2cpp_codegen_object_new(U3CU3Ec_t4E93A11683C5669A4E6B91ABFD5CC9B31E30929E_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mCEB3DE7B859E584D62C4BDA6C2AF6B572DB0F376(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t4E93A11683C5669A4E6B91ABFD5CC9B31E30929E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4E93A11683C5669A4E6B91ABFD5CC9B31E30929E_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void UnityEngine.Purchasing.LocalizedProductDescription/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mCEB3DE7B859E584D62C4BDA6C2AF6B572DB0F376 (U3CU3Ec_t4E93A11683C5669A4E6B91ABFD5CC9B31E30929E * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String UnityEngine.Purchasing.LocalizedProductDescription/<>c::<DecodeNonLatinCharacters>b__11_0(System.Text.RegularExpressions.Match)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CDecodeNonLatinCharactersU3Eb__11_0_m1A6DDA6048345F33586FBFDE89F9D478E8903B56 (U3CU3Ec_t4E93A11683C5669A4E6B91ABFD5CC9B31E30929E * __this, Match_t8CC0A47F766954F17AD4D1C1597754C8F576464B * ___m0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86FADB31129B6F40C720A97600D69389EA3567E3);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar V_0 = 0x0;
	{
		// return ((char)int.Parse(m.Groups["Value"].Value, NumberStyles.HexNumber)).ToString();
		Match_t8CC0A47F766954F17AD4D1C1597754C8F576464B * L_0 = ___m0;
		GroupCollection_tAA9CA4E93B1A9D6B7199EE25AEB32922E72AA556 * L_1;
		L_1 = VirtualFuncInvoker0< GroupCollection_tAA9CA4E93B1A9D6B7199EE25AEB32922E72AA556 * >::Invoke(5 /* System.Text.RegularExpressions.GroupCollection System.Text.RegularExpressions.Match::get_Groups() */, L_0);
		Group_t0B987F132503F2672BC66FCDD21EA8A6EB484883 * L_2;
		L_2 = GroupCollection_get_Item_m58F451BF6490EB64CA9C1A05844A790967166A6D(L_1, _stringLiteral86FADB31129B6F40C720A97600D69389EA3567E3, /*hidden argument*/NULL);
		String_t* L_3;
		L_3 = Capture_get_Value_mC5CAABA66AC24C90CE1A6FE7EE93AD4A926E4D5A(L_2, /*hidden argument*/NULL);
		int32_t L_4;
		L_4 = Int32_Parse_mE2DF841397B10B947C6729D5B811D0C25D211A56(L_3, ((int32_t)515), /*hidden argument*/NULL);
		V_0 = ((int32_t)((uint16_t)L_4));
		String_t* L_5;
		L_5 = Char_ToString_mE0DE433463C56FD30A4F0A50539553B17147C2F8((Il2CppChar*)(&V_0), /*hidden argument*/NULL);
		return L_5;
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
// System.Void UnityEngine.Purchasing.ProductCatalog/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m8D091C7A194572786F2FA9AFE024E913A3C04ABB (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t4BE94DF0E8BD1264DB13776C15A26EA265675AE0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t4BE94DF0E8BD1264DB13776C15A26EA265675AE0 * L_0 = (U3CU3Ec_t4BE94DF0E8BD1264DB13776C15A26EA265675AE0 *)il2cpp_codegen_object_new(U3CU3Ec_t4BE94DF0E8BD1264DB13776C15A26EA265675AE0_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m49A6673CEF550904F5C2BB8F10CF4307D270F65C(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t4BE94DF0E8BD1264DB13776C15A26EA265675AE0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4BE94DF0E8BD1264DB13776C15A26EA265675AE0_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void UnityEngine.Purchasing.ProductCatalog/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m49A6673CEF550904F5C2BB8F10CF4307D270F65C (U3CU3Ec_t4BE94DF0E8BD1264DB13776C15A26EA265675AE0 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.Purchasing.ProductCatalog/<>c::<get_allValidProducts>b__8_0(UnityEngine.Purchasing.ProductCatalogItem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3Cget_allValidProductsU3Eb__8_0_m5A4A7C7EDF95F26D3F0DA5002E310685F04D9648 (U3CU3Ec_t4BE94DF0E8BD1264DB13776C15A26EA265675AE0 * __this, ProductCatalogItem_t43F0A9F572DE7B1BF46049724A05F9C4C0111280 * ___x0, const RuntimeMethod* method)
{
	{
		// return products.Where(x => (!string.IsNullOrEmpty(x.id) && x.id.Trim().Length != 0 )).ToList();
		ProductCatalogItem_t43F0A9F572DE7B1BF46049724A05F9C4C0111280 * L_0 = ___x0;
		String_t* L_1 = L_0->get_id_0();
		bool L_2;
		L_2 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0021;
		}
	}
	{
		ProductCatalogItem_t43F0A9F572DE7B1BF46049724A05F9C4C0111280 * L_3 = ___x0;
		String_t* L_4 = L_3->get_id_0();
		String_t* L_5;
		L_5 = String_Trim_m3FEC641D7046124B7F381701903B50B5171DE0A2(L_4, /*hidden argument*/NULL);
		int32_t L_6;
		L_6 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_5, /*hidden argument*/NULL);
		return (bool)((!(((uint32_t)L_6) <= ((uint32_t)0)))? 1 : 0);
	}

IL_0021:
	{
		return (bool)0;
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
// System.Void UnityEngine.Purchasing.QuerySkuDetailsService/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m6ED041E2163E13C39E98A7F614B1616A73ED410F (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tA145211B409C518BC8732858C266386A65B28D3A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tA145211B409C518BC8732858C266386A65B28D3A * L_0 = (U3CU3Ec_tA145211B409C518BC8732858C266386A65B28D3A *)il2cpp_codegen_object_new(U3CU3Ec_tA145211B409C518BC8732858C266386A65B28D3A_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m918FF893432FD5BD42B525D6736BE2CA16861DB7(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tA145211B409C518BC8732858C266386A65B28D3A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tA145211B409C518BC8732858C266386A65B28D3A_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void UnityEngine.Purchasing.QuerySkuDetailsService/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m918FF893432FD5BD42B525D6736BE2CA16861DB7 (U3CU3Ec_tA145211B409C518BC8732858C266386A65B28D3A * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.Purchasing.QuerySkuDetailsService/<>c::<QueryInAppsAsync>b__14_0(UnityEngine.Purchasing.ProductDefinition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CQueryInAppsAsyncU3Eb__14_0_mEA24F7E69DA05B389E9130C521B2B8C24DB2F5F9 (U3CU3Ec_tA145211B409C518BC8732858C266386A65B28D3A * __this, ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572 * ___product0, const RuntimeMethod* method)
{
	{
		// .Where(product => product.type != ProductType.Subscription)
		ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572 * L_0 = ___product0;
		int32_t L_1;
		L_1 = ProductDefinition_get_type_m54E16B91196F7553460DEFE3701E9867F126AB42_inline(L_0, /*hidden argument*/NULL);
		return (bool)((((int32_t)((((int32_t)L_1) == ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.String UnityEngine.Purchasing.QuerySkuDetailsService/<>c::<QueryInAppsAsync>b__14_1(UnityEngine.Purchasing.ProductDefinition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CQueryInAppsAsyncU3Eb__14_1_m1BC5B563C3A22864307D910C6CB3B96774B1F886 (U3CU3Ec_tA145211B409C518BC8732858C266386A65B28D3A * __this, ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572 * ___product0, const RuntimeMethod* method)
{
	{
		// .Select(product => product.storeSpecificId)
		ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572 * L_0 = ___product0;
		String_t* L_1;
		L_1 = ProductDefinition_get_storeSpecificId_m32204A00FC4A55334ABC8336509E4B57A6CD50B6_inline(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean UnityEngine.Purchasing.QuerySkuDetailsService/<>c::<QuerySubsAsync>b__15_0(UnityEngine.Purchasing.ProductDefinition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CQuerySubsAsyncU3Eb__15_0_mA426BB205AD35FD89B5742FB71B2E44436166533 (U3CU3Ec_tA145211B409C518BC8732858C266386A65B28D3A * __this, ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572 * ___product0, const RuntimeMethod* method)
{
	{
		// .Where(product => product.type == ProductType.Subscription)
		ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572 * L_0 = ___product0;
		int32_t L_1;
		L_1 = ProductDefinition_get_type_m54E16B91196F7553460DEFE3701E9867F126AB42_inline(L_0, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_1) == ((int32_t)2))? 1 : 0);
	}
}
// System.String UnityEngine.Purchasing.QuerySkuDetailsService/<>c::<QuerySubsAsync>b__15_1(UnityEngine.Purchasing.ProductDefinition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CQuerySubsAsyncU3Eb__15_1_mC9B816F8BE857A8929FAA7417B6BBCB37D6AD0DA (U3CU3Ec_tA145211B409C518BC8732858C266386A65B28D3A * __this, ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572 * ___product0, const RuntimeMethod* method)
{
	{
		// .Select(product => product.storeSpecificId)
		ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572 * L_0 = ___product0;
		String_t* L_1;
		L_1 = ProductDefinition_get_storeSpecificId_m32204A00FC4A55334ABC8336509E4B57A6CD50B6_inline(L_0, /*hidden argument*/NULL);
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
// System.Void UnityEngine.Purchasing.QuerySkuDetailsService/<>c__DisplayClass12_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass12_0__ctor_mBA75AC783781E496930ACDB4960C5E8109428001 (U3CU3Ec__DisplayClass12_0_t34642B8313D61FFB3DC025660F2334AE41F37A03 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.QuerySkuDetailsService/<>c__DisplayClass12_0::<QueryAsyncSku>b__0(System.Collections.Generic.List`1<UnityEngine.AndroidJavaObject>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass12_0_U3CQueryAsyncSkuU3Eb__0_m35483DD0CC7787971211B2135D0A3DE5357BEA6F (U3CU3Ec__DisplayClass12_0_t34642B8313D61FFB3DC025660F2334AE41F37A03 * __this, List_1_t911FB7A3288EAACB1E70E61FB84793A19DDB716B * ___skus0, const RuntimeMethod* method)
{
	{
		// skus => SkuDetailsConverter.ConvertOnQuerySkuDetailsResponse(skus, onSkuDetailsResponse));
		List_1_t911FB7A3288EAACB1E70E61FB84793A19DDB716B * L_0 = ___skus0;
		Action_1_t762239D56917E8864E53EE1DFBAE23C93B8EF280 * L_1 = __this->get_onSkuDetailsResponse_0();
		SkuDetailsConverter_ConvertOnQuerySkuDetailsResponse_m28DB8058E57D4304C4FC52E9B6FA56EB8E936F24(L_0, L_1, /*hidden argument*/NULL);
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
// System.Void UnityEngine.Purchasing.QuerySkuDetailsService/<>c__DisplayClass16_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass16_0__ctor_m83DD46F21388B83B076106E036EE487576505166 (U3CU3Ec__DisplayClass16_0_t01D65697847275ABE80BA8CB4F7E5D425E30EFA8 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.QuerySkuDetailsService/<>c__DisplayClass16_0::<QuerySkuDetails>b__0(UnityEngine.AndroidJavaObject,UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass16_0_U3CQuerySkuDetailsU3Eb__0_mA442EE1154F9E4D736462D61EEB419E5320849B5 (U3CU3Ec__DisplayClass16_0_t01D65697847275ABE80BA8CB4F7E5D425E30EFA8 * __this, AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * ___billingResult0, AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * ___skuDetails1, const RuntimeMethod* method)
{
	{
		// SkuDetailsResponseListener listener = new SkuDetailsResponseListener((billingResult, skuDetails) => ConsolidateOnSkuDetailsReceived(billingResult, skuDetails, onSkuDetailsResponse));
		QuerySkuDetailsService_t877F4FEBFAEEDAE6761E1AF7C0FEDB6C5CEF12B1 * L_0 = __this->get_U3CU3E4__this_0();
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_1 = ___billingResult0;
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_2 = ___skuDetails1;
		Action_1_t280D324324436AF42C8D2A05C7B79D2070238EC5 * L_3 = __this->get_onSkuDetailsResponse_1();
		QuerySkuDetailsService_ConsolidateOnSkuDetailsReceived_mE0D34DA4A0C040339373D332C692D276C579EE0E(L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
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
// System.Void UnityEngine.Purchasing.ScriptingStoreCallback/<>c__DisplayClass10_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass10_0__ctor_m9895E323A289491FBEE0EA42510E436129CA3D10 (U3CU3Ec__DisplayClass10_0_tF466D8FB2F0D0AAA38E7FB5BEB1CEF41E57F96C2 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.ScriptingStoreCallback/<>c__DisplayClass10_0::<OnPurchaseFailed>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass10_0_U3COnPurchaseFailedU3Eb__0_mBE10D27448D86D1DF29068D7F4EFA452774A9500 (U3CU3Ec__DisplayClass10_0_tF466D8FB2F0D0AAA38E7FB5BEB1CEF41E57F96C2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStoreCallback_t3176FA3F472DF5F252CDB5D87E60B2538A44C05F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Util.RunOnMainThread(() => m_ForwardTo.OnPurchaseFailed(desc));
		ScriptingStoreCallback_t201741301803D50F8E0881C5805639CE2F7CB288 * L_0 = __this->get_U3CU3E4__this_0();
		RuntimeObject* L_1 = L_0->get_m_ForwardTo_0();
		PurchaseFailureDescription_tF5204FF61912DF603166BB79C4A10BA5727FBFD8 * L_2 = __this->get_desc_1();
		InterfaceActionInvoker1< PurchaseFailureDescription_tF5204FF61912DF603166BB79C4A10BA5727FBFD8 * >::Invoke(5 /* System.Void UnityEngine.Purchasing.Extension.IStoreCallback::OnPurchaseFailed(UnityEngine.Purchasing.Extension.PurchaseFailureDescription) */, IStoreCallback_t3176FA3F472DF5F252CDB5D87E60B2538A44C05F_il2cpp_TypeInfo_var, L_1, L_2);
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
// System.Void UnityEngine.Purchasing.ScriptingStoreCallback/<>c__DisplayClass5_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0__ctor_mE387727259F6D2F543A8608F8DC32C0915B6FD91 (U3CU3Ec__DisplayClass5_0_t859087A14AE95FD9CA3137ED6A5AD2B5AD954E2D * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.ScriptingStoreCallback/<>c__DisplayClass5_0::<OnSetupFailed>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0_U3COnSetupFailedU3Eb__0_m705B8933ED8A2EC47BC25DB243F1D5036F95294A (U3CU3Ec__DisplayClass5_0_t859087A14AE95FD9CA3137ED6A5AD2B5AD954E2D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStoreCallback_t3176FA3F472DF5F252CDB5D87E60B2538A44C05F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Util.RunOnMainThread(() => m_ForwardTo.OnSetupFailed(reason));
		ScriptingStoreCallback_t201741301803D50F8E0881C5805639CE2F7CB288 * L_0 = __this->get_U3CU3E4__this_0();
		RuntimeObject* L_1 = L_0->get_m_ForwardTo_0();
		int32_t L_2 = __this->get_reason_1();
		InterfaceActionInvoker1< int32_t >::Invoke(1 /* System.Void UnityEngine.Purchasing.Extension.IStoreCallback::OnSetupFailed(UnityEngine.Purchasing.InitializationFailureReason) */, IStoreCallback_t3176FA3F472DF5F252CDB5D87E60B2538A44C05F_il2cpp_TypeInfo_var, L_1, L_2);
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
// System.Void UnityEngine.Purchasing.ScriptingStoreCallback/<>c__DisplayClass6_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass6_0__ctor_m55269682A6C13B3546D9A803190ACD0BCB5924FD (U3CU3Ec__DisplayClass6_0_t35E59837B7A8D9A9033DF940B833CA8E375F5974 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.ScriptingStoreCallback/<>c__DisplayClass6_0::<OnProductsRetrieved>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass6_0_U3COnProductsRetrievedU3Eb__0_m57C2AEE412D3B934991BE315D5EADBE38633CDE5 (U3CU3Ec__DisplayClass6_0_t35E59837B7A8D9A9033DF940B833CA8E375F5974 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStoreCallback_t3176FA3F472DF5F252CDB5D87E60B2538A44C05F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Util.RunOnMainThread(() => m_ForwardTo.OnProductsRetrieved(products));
		ScriptingStoreCallback_t201741301803D50F8E0881C5805639CE2F7CB288 * L_0 = __this->get_U3CU3E4__this_0();
		RuntimeObject* L_1 = L_0->get_m_ForwardTo_0();
		List_1_t293A9B62DF9E931D44BF8E69475D79D308B627FF * L_2 = __this->get_products_1();
		InterfaceActionInvoker1< List_1_t293A9B62DF9E931D44BF8E69475D79D308B627FF * >::Invoke(2 /* System.Void UnityEngine.Purchasing.Extension.IStoreCallback::OnProductsRetrieved(System.Collections.Generic.List`1<UnityEngine.Purchasing.Extension.ProductDescription>) */, IStoreCallback_t3176FA3F472DF5F252CDB5D87E60B2538A44C05F_il2cpp_TypeInfo_var, L_1, L_2);
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
// System.Void UnityEngine.Purchasing.ScriptingStoreCallback/<>c__DisplayClass7_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass7_0__ctor_mF34A36B5B6EB5A1C31CE9448D9328C62878B0F23 (U3CU3Ec__DisplayClass7_0_t807EC72F490C70CEB518B7C7199B43D6E9AA54F1 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.ScriptingStoreCallback/<>c__DisplayClass7_0::<OnPurchaseSucceeded>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass7_0_U3COnPurchaseSucceededU3Eb__0_m474A5CEDE4D23CC99C2B96258C4D41EBC8C3AED4 (U3CU3Ec__DisplayClass7_0_t807EC72F490C70CEB518B7C7199B43D6E9AA54F1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStoreCallback_t3176FA3F472DF5F252CDB5D87E60B2538A44C05F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Util.RunOnMainThread (() => m_ForwardTo.OnPurchaseSucceeded (id, receipt, transactionID));
		ScriptingStoreCallback_t201741301803D50F8E0881C5805639CE2F7CB288 * L_0 = __this->get_U3CU3E4__this_0();
		RuntimeObject* L_1 = L_0->get_m_ForwardTo_0();
		String_t* L_2 = __this->get_id_1();
		String_t* L_3 = __this->get_receipt_2();
		String_t* L_4 = __this->get_transactionID_3();
		InterfaceActionInvoker3< String_t*, String_t*, String_t* >::Invoke(3 /* System.Void UnityEngine.Purchasing.Extension.IStoreCallback::OnPurchaseSucceeded(System.String,System.String,System.String) */, IStoreCallback_t3176FA3F472DF5F252CDB5D87E60B2538A44C05F_il2cpp_TypeInfo_var, L_1, L_2, L_3, L_4);
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
// System.Void UnityEngine.Purchasing.ScriptingStoreCallback/<>c__DisplayClass8_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass8_0__ctor_m926BD1FDC6A3CA1333EF84D4DC3B9D67A4E0CB98 (U3CU3Ec__DisplayClass8_0_tC875F56D08FF4FFE51B8B881279B402786BA4210 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.ScriptingStoreCallback/<>c__DisplayClass8_0::<OnAllPurchasesRetrieved>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass8_0_U3COnAllPurchasesRetrievedU3Eb__0_mE447E547703A6D633F9259704B48D24C5F0AC806 (U3CU3Ec__DisplayClass8_0_tC875F56D08FF4FFE51B8B881279B402786BA4210 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStoreCallback_t3176FA3F472DF5F252CDB5D87E60B2538A44C05F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Util.RunOnMainThread(() => m_ForwardTo.OnAllPurchasesRetrieved(purchasedProducts));
		ScriptingStoreCallback_t201741301803D50F8E0881C5805639CE2F7CB288 * L_0 = __this->get_U3CU3E4__this_0();
		RuntimeObject* L_1 = L_0->get_m_ForwardTo_0();
		List_1_tD6CD4E5E39E75EE330B0C6DB8A7A0AEE4966D8AA * L_2 = __this->get_purchasedProducts_1();
		InterfaceActionInvoker1< List_1_tD6CD4E5E39E75EE330B0C6DB8A7A0AEE4966D8AA * >::Invoke(4 /* System.Void UnityEngine.Purchasing.Extension.IStoreCallback::OnAllPurchasesRetrieved(System.Collections.Generic.List`1<UnityEngine.Purchasing.Product>) */, IStoreCallback_t3176FA3F472DF5F252CDB5D87E60B2538A44C05F_il2cpp_TypeInfo_var, L_1, L_2);
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
// System.Void UnityEngine.Purchasing.StandardPurchasingModule/MicrosoftConfiguration::.ctor(UnityEngine.Purchasing.StandardPurchasingModule)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MicrosoftConfiguration__ctor_m2C2AE79B7E5D9829EC31FA6C6DDF7134290F9873 (MicrosoftConfiguration_t72E7005BD172865A7745C2935D2880DEFA88317D * __this, StandardPurchasingModule_t46866896DA828EA4F1EBF9C38C5E3B89FF1E91B6 * ___module0, const RuntimeMethod* method)
{
	{
		// public MicrosoftConfiguration (StandardPurchasingModule module)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this.module = module;
		StandardPurchasingModule_t46866896DA828EA4F1EBF9C38C5E3B89FF1E91B6 * L_0 = ___module0;
		__this->set_module_1(L_0);
		// }
		return;
	}
}
// System.Void UnityEngine.Purchasing.StandardPurchasingModule/MicrosoftConfiguration::set_useMockBillingSystem(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MicrosoftConfiguration_set_useMockBillingSystem_m847B488F54D28B4D931D7A150E2D73FC403EE1F0 (MicrosoftConfiguration_t72E7005BD172865A7745C2935D2880DEFA88317D * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// module.UseMockWindowsStore (value);
		StandardPurchasingModule_t46866896DA828EA4F1EBF9C38C5E3B89FF1E91B6 * L_0 = __this->get_module_1();
		bool L_1 = ___value0;
		StandardPurchasingModule_UseMockWindowsStore_m8DF9674BF88011A3C888A4730559ABAD71970C90(L_0, L_1, /*hidden argument*/NULL);
		// useMock = value;
		bool L_2 = ___value0;
		__this->set_useMock_0(L_2);
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
// System.String UnityEngine.Purchasing.StandardPurchasingModule/StoreInstance::get_storeName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StoreInstance_get_storeName_m7A7F2EE1CD7F22AA77086D0C9A5ED0B667305204 (StoreInstance_t7777C1EA2116BC0443B2557EC19229DD2BFAFDBA * __this, const RuntimeMethod* method)
{
	{
		// internal string storeName { get; }
		String_t* L_0 = __this->get_U3CstoreNameU3Ek__BackingField_0();
		return L_0;
	}
}
// UnityEngine.Purchasing.Extension.IStore UnityEngine.Purchasing.StandardPurchasingModule/StoreInstance::get_instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StoreInstance_get_instance_m72B030056C3098C02181F2B6C38034DA5AB560B4 (StoreInstance_t7777C1EA2116BC0443B2557EC19229DD2BFAFDBA * __this, const RuntimeMethod* method)
{
	{
		// internal IStore instance { get; }
		RuntimeObject* L_0 = __this->get_U3CinstanceU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void UnityEngine.Purchasing.StandardPurchasingModule/StoreInstance::.ctor(System.String,UnityEngine.Purchasing.Extension.IStore)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StoreInstance__ctor_mC359EB778980CBA12E43762487819602B38C0C4D (StoreInstance_t7777C1EA2116BC0443B2557EC19229DD2BFAFDBA * __this, String_t* ___name0, RuntimeObject* ___instance1, const RuntimeMethod* method)
{
	{
		// internal StoreInstance (string name, IStore instance)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this.storeName = name;
		String_t* L_0 = ___name0;
		__this->set_U3CstoreNameU3Ek__BackingField_0(L_0);
		// this.instance = instance;
		RuntimeObject* L_1 = ___instance1;
		__this->set_U3CinstanceU3Ek__BackingField_1(L_1);
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
// System.Void UnityEngine.Purchasing.UDPImpl/<>c__DisplayClass10_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass10_0__ctor_m9D28909E1010465C2CF9BD9F5211B6400D36E0F0 (U3CU3Ec__DisplayClass10_0_tB18ED9C2044158C2044A084B4D6829E404E0F236 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.UDPImpl/<>c__DisplayClass10_0::<RetrieveProducts>b__0(System.Boolean,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass10_0_U3CRetrieveProductsU3Eb__0_m5D9089565F70BF79D2B684F2C37ACFB3AAFEB4CB (U3CU3Ec__DisplayClass10_0_tB18ED9C2044158C2044A084B4D6829E404E0F236 * __this, bool ___success0, String_t* ___json1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILogger_t25627AC5B51863702868D31972297B7D633B4583_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1F129F58A8DCA2BAC1980E37CE73EDC57F778345);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF70186B9E93B040BE74228E43B2D0DFEECC9C509);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (success && !string.IsNullOrEmpty(json))
		bool L_0 = ___success0;
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		String_t* L_1 = ___json1;
		bool L_2;
		L_2 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		// OnProductsRetrieved(json);
		UDPImpl_t10D6EBBCE4EF9B6215CB108BDF04F75E404277F1 * L_3 = __this->get_U3CU3E4__this_0();
		String_t* L_4 = ___json1;
		VirtualActionInvoker1< String_t* >::Invoke(17 /* System.Void UnityEngine.Purchasing.JSONStore::OnProductsRetrieved(System.String) */, L_3, L_4);
		// }
		return;
	}

IL_0018:
	{
		// m_Logger.LogWarning("Unity IAP", "RetrieveProducts failed: " + json);
		UDPImpl_t10D6EBBCE4EF9B6215CB108BDF04F75E404277F1 * L_5 = __this->get_U3CU3E4__this_0();
		RuntimeObject* L_6 = ((JSONStore_tE5F9992486087BC106BD9B47F9B371AF218E400B *)L_5)->get_m_Logger_7();
		String_t* L_7 = ___json1;
		String_t* L_8;
		L_8 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral1F129F58A8DCA2BAC1980E37CE73EDC57F778345, L_7, /*hidden argument*/NULL);
		InterfaceActionInvoker2< String_t*, RuntimeObject * >::Invoke(5 /* System.Void UnityEngine.ILogger::LogWarning(System.String,System.Object) */, ILogger_t25627AC5B51863702868D31972297B7D633B4583_il2cpp_TypeInfo_var, L_6, _stringLiteralF70186B9E93B040BE74228E43B2D0DFEECC9C509, L_8);
		// };
		return;
	}
}
// System.Void UnityEngine.Purchasing.UDPImpl/<>c__DisplayClass10_0::<RetrieveProducts>b__1(System.Boolean,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass10_0_U3CRetrieveProductsU3Eb__1_m0199708B45BF6016375EA675869338846634D033 (U3CU3Ec__DisplayClass10_0_tB18ED9C2044158C2044A084B4D6829E404E0F236 * __this, bool ___success0, String_t* ___message1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m3C1B28325435E61FFAD431E314EABF915B79A55E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&INativeUDPStore_tBEDB9A06199F713C1A02FA49086EB0D8BF40FFBA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStoreCallback_t3176FA3F472DF5F252CDB5D87E60B2538A44C05F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7FF9A5D883AC2EEA2F31FEECA02D6C53D5F533B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * V_0 = NULL;
	Type_t * V_1 = NULL;
	{
		// m_LastInitError = "";
		UDPImpl_t10D6EBBCE4EF9B6215CB108BDF04F75E404277F1 * L_0 = __this->get_U3CU3E4__this_0();
		L_0->set_m_LastInitError_20(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// m_UserInfo = null;
		UDPImpl_t10D6EBBCE4EF9B6215CB108BDF04F75E404277F1 * L_1 = __this->get_U3CU3E4__this_0();
		L_1->set_m_UserInfo_19(NULL);
		// if (success)
		bool L_2 = ___success0;
		if (!L_2)
		{
			goto IL_0095;
		}
	}
	{
		// if (!string.IsNullOrEmpty(message))
		String_t* L_3 = ___message1;
		bool L_4;
		L_4 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_006c;
		}
	}
	{
		// var dic = message.HashtableFromJson();
		String_t* L_5 = ___message1;
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_6;
		L_6 = MiniJsonExtensions_HashtableFromJson_mF62FD90708401AEC2F5E00953A70C0238EAF6D10(L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		// if (dic.ContainsKey("Channel"))
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_7 = V_0;
		bool L_8;
		L_8 = Dictionary_2_ContainsKey_m3C1B28325435E61FFAD431E314EABF915B79A55E(L_7, _stringLiteral7FF9A5D883AC2EEA2F31FEECA02D6C53D5F533B1, /*hidden argument*/Dictionary_2_ContainsKey_m3C1B28325435E61FFAD431E314EABF915B79A55E_RuntimeMethod_var);
		if (!L_8)
		{
			goto IL_006c;
		}
	}
	{
		// Type udpUserInfo = UserInfoInterface.GetClassType();
		Type_t * L_9;
		L_9 = UserInfoInterface_GetClassType_mB701D105CEF8B249596C7E3C89F5EC4305870FA9(/*hidden argument*/NULL);
		V_1 = L_9;
		// if (udpUserInfo != null)
		Type_t * L_10 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Type_op_Inequality_m6DDC5E923203A79BF505F9275B694AD3FAA36DB0(L_10, (Type_t *)NULL, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_006c;
		}
	}
	{
		// m_UserInfo = Activator.CreateInstance(udpUserInfo);
		UDPImpl_t10D6EBBCE4EF9B6215CB108BDF04F75E404277F1 * L_12 = __this->get_U3CU3E4__this_0();
		Type_t * L_13 = V_1;
		RuntimeObject * L_14;
		L_14 = Activator_CreateInstance_m1BACAB5F4FBF138CCCB537DDCB0683A2AC064295(L_13, /*hidden argument*/NULL);
		L_12->set_m_UserInfo_19(L_14);
		// DictionaryToStringProperty(dic, m_UserInfo);
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_15 = V_0;
		UDPImpl_t10D6EBBCE4EF9B6215CB108BDF04F75E404277F1 * L_16 = __this->get_U3CU3E4__this_0();
		RuntimeObject * L_17 = L_16->get_m_UserInfo_19();
		UDPImpl_DictionaryToStringProperty_m13F9AB77048F8D075E9AAC1D1DD0406475BA2767(L_15, L_17, /*hidden argument*/NULL);
	}

IL_006c:
	{
		// m_Initialized = true;
		UDPImpl_t10D6EBBCE4EF9B6215CB108BDF04F75E404277F1 * L_18 = __this->get_U3CU3E4__this_0();
		L_18->set_m_Initialized_21((bool)1);
		// m_Bindings.RetrieveProducts(products, retrieveCallback);
		UDPImpl_t10D6EBBCE4EF9B6215CB108BDF04F75E404277F1 * L_19 = __this->get_U3CU3E4__this_0();
		RuntimeObject* L_20 = L_19->get_m_Bindings_18();
		ReadOnlyCollection_1_tA17CC77D8AB24DD29DF396C7B3CC305302C189C3 * L_21 = __this->get_products_1();
		Action_2_t88E033566C44CCAAB72BD2C7604420B260FD3BF3 * L_22 = __this->get_retrieveCallback_2();
		InterfaceActionInvoker2< ReadOnlyCollection_1_tA17CC77D8AB24DD29DF396C7B3CC305302C189C3 *, Action_2_t88E033566C44CCAAB72BD2C7604420B260FD3BF3 * >::Invoke(2 /* System.Void UnityEngine.Purchasing.INativeUDPStore::RetrieveProducts(System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Purchasing.ProductDefinition>,System.Action`2<System.Boolean,System.String>) */, INativeUDPStore_tBEDB9A06199F713C1A02FA49086EB0D8BF40FFBA_il2cpp_TypeInfo_var, L_20, L_21, L_22);
		// }
		return;
	}

IL_0095:
	{
		// m_LastInitError = message;
		UDPImpl_t10D6EBBCE4EF9B6215CB108BDF04F75E404277F1 * L_23 = __this->get_U3CU3E4__this_0();
		String_t* L_24 = ___message1;
		L_23->set_m_LastInitError_20(L_24);
		// unity.OnSetupFailed(InitializationFailureReason.AppNotKnown);
		UDPImpl_t10D6EBBCE4EF9B6215CB108BDF04F75E404277F1 * L_25 = __this->get_U3CU3E4__this_0();
		RuntimeObject* L_26 = ((JSONStore_tE5F9992486087BC106BD9B47F9B371AF218E400B *)L_25)->get_unity_1();
		InterfaceActionInvoker1< int32_t >::Invoke(1 /* System.Void UnityEngine.Purchasing.Extension.IStoreCallback::OnSetupFailed(UnityEngine.Purchasing.InitializationFailureReason) */, IStoreCallback_t3176FA3F472DF5F252CDB5D87E60B2538A44C05F_il2cpp_TypeInfo_var, L_26, 2);
		// });
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
// System.Void UnityEngine.Purchasing.UDPImpl/<>c__DisplayClass11_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass11_0__ctor_m8AF81BE0D6CF6B7BA1E6B16DEAE7D42E86D401EE (U3CU3Ec__DisplayClass11_0_tA52647570260163D1D5F8C1FDA00B24D12D032FA * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.UDPImpl/<>c__DisplayClass11_0::<Purchase>b__0(System.Boolean,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass11_0_U3CPurchaseU3Eb__0_mCD1D93ED4F3650F7F8D36DF786D7C88E271F28AA (U3CU3Ec__DisplayClass11_0_tA52647570260163D1D5F8C1FDA00B24D12D032FA * __this, bool ___success0, String_t* ___message1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m3C1B28325435E61FFAD431E314EABF915B79A55E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mCD0C2F0325B7677B9BC340A60AA3FB9C7A88FF63_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m012F321188703DCCB5C4F99C5A5AA2FA31A98144_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILogger_t25627AC5B51863702868D31972297B7D633B4583_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStoreCallback_t3176FA3F472DF5F252CDB5D87E60B2538A44C05F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PurchaseFailureDescription_tF5204FF61912DF603166BB79C4A10BA5727FBFD8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PurchaseFailureReason_t92D34AB6DC07828C5204898759640EDFB9336BA5_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PurchaseFailureReason_t92D34AB6DC07828C5204898759640EDFB9336BA5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0E62453B16F3139996684F414345A0A54FA64728);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3BA59C4AA7C2F6DD8728F78A4194DD324111ABC1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B410F5F43A4714AE6474DB2282523C7FBE75CD1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5D54E959817188DBAD9E65FA3DB55F06B70F5E3C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6102B784A4463F5BB7820485F8B488B85D030E83);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9783048DDA4A8100EAD15B60BE4922DE458E77F8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC4FD5B06A6B7174802B6D991C7560C98FB781820);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD07477ECD3017EFC4D04A75EB58245BE024730D9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFCA74A9060DDEE6A3ECAE73E6AB96086770BE7E2);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * V_0 = NULL;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	int32_t V_4 = 0;
	String_t* V_5 = NULL;
	Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * V_6 = NULL;
	PurchaseFailureDescription_tF5204FF61912DF603166BB79C4A10BA5727FBFD8 * V_7 = NULL;
	{
		// var dic = message.HashtableFromJson();
		String_t* L_0 = ___message1;
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_1;
		L_1 = MiniJsonExtensions_HashtableFromJson_mF62FD90708401AEC2F5E00953A70C0238EAF6D10(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// if (success)
		bool L_2 = ___success0;
		if (!L_2)
		{
			goto IL_00bd;
		}
	}
	{
		// var transactionId = dic.GetString("GameOrderId");
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_3 = V_0;
		String_t* L_4;
		L_4 = MiniJsonExtensions_GetString_m47B48C267428E4CDA3D2A88B85C5BF6F7DFC1FEC(L_3, _stringLiteralD07477ECD3017EFC4D04A75EB58245BE024730D9, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		V_1 = L_4;
		// var storeSpecificId = dic.GetString("ProductId");
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_5 = V_0;
		String_t* L_6;
		L_6 = MiniJsonExtensions_GetString_m47B48C267428E4CDA3D2A88B85C5BF6F7DFC1FEC(L_5, _stringLiteral0E62453B16F3139996684F414345A0A54FA64728, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		V_2 = L_6;
		// if (!string.IsNullOrEmpty(transactionId))
		String_t* L_7 = V_1;
		bool L_8;
		L_8 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_7, /*hidden argument*/NULL);
		if (L_8)
		{
			goto IL_0043;
		}
	}
	{
		// dic["transactionId"] = transactionId;
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_9 = V_0;
		String_t* L_10 = V_1;
		Dictionary_2_set_Item_m012F321188703DCCB5C4F99C5A5AA2FA31A98144(L_9, _stringLiteral4B410F5F43A4714AE6474DB2282523C7FBE75CD1, L_10, /*hidden argument*/Dictionary_2_set_Item_m012F321188703DCCB5C4F99C5A5AA2FA31A98144_RuntimeMethod_var);
	}

IL_0043:
	{
		// if (!string.IsNullOrEmpty(storeSpecificId))
		String_t* L_11 = V_2;
		bool L_12;
		L_12 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_11, /*hidden argument*/NULL);
		if (L_12)
		{
			goto IL_0057;
		}
	}
	{
		// dic["storeSpecificId"] = storeSpecificId;
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_13 = V_0;
		String_t* L_14 = V_2;
		Dictionary_2_set_Item_m012F321188703DCCB5C4F99C5A5AA2FA31A98144(L_13, _stringLiteralC4FD5B06A6B7174802B6D991C7560C98FB781820, L_14, /*hidden argument*/Dictionary_2_set_Item_m012F321188703DCCB5C4F99C5A5AA2FA31A98144_RuntimeMethod_var);
	}

IL_0057:
	{
		// if (!product.storeSpecificId.Equals(storeSpecificId))
		ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572 * L_15 = __this->get_product_0();
		String_t* L_16;
		L_16 = ProductDefinition_get_storeSpecificId_m32204A00FC4A55334ABC8336509E4B57A6CD50B6_inline(L_15, /*hidden argument*/NULL);
		String_t* L_17 = V_2;
		bool L_18;
		L_18 = String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D(L_16, L_17, /*hidden argument*/NULL);
		if (L_18)
		{
			goto IL_0098;
		}
	}
	{
		// m_Logger.LogFormat(LogType.Error,
		//     "UDPImpl received mismatching product Id for purchase. Expected {0}, received {1}",
		//     product.storeSpecificId, storeSpecificId);
		UDPImpl_t10D6EBBCE4EF9B6215CB108BDF04F75E404277F1 * L_19 = __this->get_U3CU3E4__this_1();
		RuntimeObject* L_20 = ((JSONStore_tE5F9992486087BC106BD9B47F9B371AF218E400B *)L_19)->get_m_Logger_7();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_21 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_22 = L_21;
		ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572 * L_23 = __this->get_product_0();
		String_t* L_24;
		L_24 = ProductDefinition_get_storeSpecificId_m32204A00FC4A55334ABC8336509E4B57A6CD50B6_inline(L_23, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_22, L_24);
		(L_22)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_24);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_25 = L_22;
		String_t* L_26 = V_2;
		ArrayElementTypeCheck (L_25, L_26);
		(L_25)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_26);
		InterfaceActionInvoker3< int32_t, String_t*, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* >::Invoke(7 /* System.Void UnityEngine.ILogger::LogFormat(UnityEngine.LogType,System.String,System.Object[]) */, ILogger_t25627AC5B51863702868D31972297B7D633B4583_il2cpp_TypeInfo_var, L_20, 0, _stringLiteral9783048DDA4A8100EAD15B60BE4922DE458E77F8, L_25);
	}

IL_0098:
	{
		// var data = dic.toJson();
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_27 = V_0;
		String_t* L_28;
		L_28 = MiniJsonExtensions_toJson_m99A5F4BE1C27D0D36F94D05BB282755D94836771(L_27, /*hidden argument*/NULL);
		V_3 = L_28;
		// unity.OnPurchaseSucceeded(product.storeSpecificId, data, transactionId);
		UDPImpl_t10D6EBBCE4EF9B6215CB108BDF04F75E404277F1 * L_29 = __this->get_U3CU3E4__this_1();
		RuntimeObject* L_30 = ((JSONStore_tE5F9992486087BC106BD9B47F9B371AF218E400B *)L_29)->get_unity_1();
		ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572 * L_31 = __this->get_product_0();
		String_t* L_32;
		L_32 = ProductDefinition_get_storeSpecificId_m32204A00FC4A55334ABC8336509E4B57A6CD50B6_inline(L_31, /*hidden argument*/NULL);
		String_t* L_33 = V_3;
		String_t* L_34 = V_1;
		InterfaceActionInvoker3< String_t*, String_t*, String_t* >::Invoke(3 /* System.Void UnityEngine.Purchasing.Extension.IStoreCallback::OnPurchaseSucceeded(System.String,System.String,System.String) */, IStoreCallback_t3176FA3F472DF5F252CDB5D87E60B2538A44C05F_il2cpp_TypeInfo_var, L_30, L_32, L_33, L_34);
		// }
		return;
	}

IL_00bd:
	{
		// if (dic.ContainsKey(k_Errorcode) && Convert.ToInt32(dic[k_Errorcode]) == PURCHASE_PENDING_CODE)
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_35 = V_0;
		bool L_36;
		L_36 = Dictionary_2_ContainsKey_m3C1B28325435E61FFAD431E314EABF915B79A55E(L_35, _stringLiteral3BA59C4AA7C2F6DD8728F78A4194DD324111ABC1, /*hidden argument*/Dictionary_2_ContainsKey_m3C1B28325435E61FFAD431E314EABF915B79A55E_RuntimeMethod_var);
		if (!L_36)
		{
			goto IL_0105;
		}
	}
	{
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_37 = V_0;
		RuntimeObject * L_38;
		L_38 = Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D(L_37, _stringLiteral3BA59C4AA7C2F6DD8728F78A4194DD324111ABC1, /*hidden argument*/Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		int32_t L_39;
		L_39 = Convert_ToInt32_mFFEDED67681E3EC8705BCA890BBC206514431B4A(L_38, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_39) == ((uint32_t)((int32_t)-303)))))
		{
			goto IL_0105;
		}
	}
	{
		// if (null != m_DeferredCallback)
		UDPImpl_t10D6EBBCE4EF9B6215CB108BDF04F75E404277F1 * L_40 = __this->get_U3CU3E4__this_1();
		Action_1_tA1980BF879FC3C2BEF14A6B79268F3DBBB7EB865 * L_41 = L_40->get_m_DeferredCallback_22();
		if (!L_41)
		{
			goto IL_0104;
		}
	}
	{
		// OnPurchaseDeferred(product.storeSpecificId);
		UDPImpl_t10D6EBBCE4EF9B6215CB108BDF04F75E404277F1 * L_42 = __this->get_U3CU3E4__this_1();
		ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572 * L_43 = __this->get_product_0();
		String_t* L_44;
		L_44 = ProductDefinition_get_storeSpecificId_m32204A00FC4A55334ABC8336509E4B57A6CD50B6_inline(L_43, /*hidden argument*/NULL);
		UDPImpl_OnPurchaseDeferred_mA86F125DC2AEADE2B9ED1E820810C3CEB1DBE7D7(L_42, L_44, /*hidden argument*/NULL);
	}

IL_0104:
	{
		// return;
		return;
	}

IL_0105:
	{
		// PurchaseFailureReason reason = (PurchaseFailureReason) Enum.Parse(typeof(PurchaseFailureReason),
		//     k_Unknown);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_45 = { reinterpret_cast<intptr_t> (PurchaseFailureReason_t92D34AB6DC07828C5204898759640EDFB9336BA5_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_46;
		L_46 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_45, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var);
		RuntimeObject * L_47;
		L_47 = Enum_Parse_m6601224637A9CF40F77358805956C2EE757EAF68(L_46, _stringLiteral5D54E959817188DBAD9E65FA3DB55F06B70F5E3C, /*hidden argument*/NULL);
		V_4 = ((*(int32_t*)((int32_t*)UnBox(L_47, PurchaseFailureReason_t92D34AB6DC07828C5204898759640EDFB9336BA5_il2cpp_TypeInfo_var))));
		// var reasonString = reason.ToString();
		RuntimeObject * L_48 = Box(PurchaseFailureReason_t92D34AB6DC07828C5204898759640EDFB9336BA5_il2cpp_TypeInfo_var, (&V_4));
		String_t* L_49;
		L_49 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_48);
		V_4 = *(int32_t*)UnBox(L_48);
		V_5 = L_49;
		// var errDic = new Dictionary<string, object> {["error"] = reasonString};
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_50 = (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *)il2cpp_codegen_object_new(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mCD0C2F0325B7677B9BC340A60AA3FB9C7A88FF63(L_50, /*hidden argument*/Dictionary_2__ctor_mCD0C2F0325B7677B9BC340A60AA3FB9C7A88FF63_RuntimeMethod_var);
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_51 = L_50;
		String_t* L_52 = V_5;
		Dictionary_2_set_Item_m012F321188703DCCB5C4F99C5A5AA2FA31A98144(L_51, _stringLiteralFCA74A9060DDEE6A3ECAE73E6AB96086770BE7E2, L_52, /*hidden argument*/Dictionary_2_set_Item_m012F321188703DCCB5C4F99C5A5AA2FA31A98144_RuntimeMethod_var);
		V_6 = L_51;
		// if (dic.ContainsKey("purchaseInfo"))
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_53 = V_0;
		bool L_54;
		L_54 = Dictionary_2_ContainsKey_m3C1B28325435E61FFAD431E314EABF915B79A55E(L_53, _stringLiteral6102B784A4463F5BB7820485F8B488B85D030E83, /*hidden argument*/Dictionary_2_ContainsKey_m3C1B28325435E61FFAD431E314EABF915B79A55E_RuntimeMethod_var);
		if (!L_54)
		{
			goto IL_0167;
		}
	}
	{
		// errDic["purchaseInfo"] = dic["purchaseInfo"];
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_55 = V_6;
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_56 = V_0;
		RuntimeObject * L_57;
		L_57 = Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D(L_56, _stringLiteral6102B784A4463F5BB7820485F8B488B85D030E83, /*hidden argument*/Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D_RuntimeMethod_var);
		Dictionary_2_set_Item_m012F321188703DCCB5C4F99C5A5AA2FA31A98144(L_55, _stringLiteral6102B784A4463F5BB7820485F8B488B85D030E83, L_57, /*hidden argument*/Dictionary_2_set_Item_m012F321188703DCCB5C4F99C5A5AA2FA31A98144_RuntimeMethod_var);
	}

IL_0167:
	{
		// var errData = errDic.toJson();
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_58 = V_6;
		String_t* L_59;
		L_59 = MiniJsonExtensions_toJson_m99A5F4BE1C27D0D36F94D05BB282755D94836771(L_58, /*hidden argument*/NULL);
		// var pfd = new PurchaseFailureDescription(product.storeSpecificId, reason, message);
		ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572 * L_60 = __this->get_product_0();
		String_t* L_61;
		L_61 = ProductDefinition_get_storeSpecificId_m32204A00FC4A55334ABC8336509E4B57A6CD50B6_inline(L_60, /*hidden argument*/NULL);
		int32_t L_62 = V_4;
		String_t* L_63 = ___message1;
		PurchaseFailureDescription_tF5204FF61912DF603166BB79C4A10BA5727FBFD8 * L_64 = (PurchaseFailureDescription_tF5204FF61912DF603166BB79C4A10BA5727FBFD8 *)il2cpp_codegen_object_new(PurchaseFailureDescription_tF5204FF61912DF603166BB79C4A10BA5727FBFD8_il2cpp_TypeInfo_var);
		PurchaseFailureDescription__ctor_m82E2FF9C0415A1D1001A8C0F80016441A08140D5(L_64, L_61, L_62, L_63, /*hidden argument*/NULL);
		V_7 = L_64;
		// unity.OnPurchaseFailed(pfd);
		UDPImpl_t10D6EBBCE4EF9B6215CB108BDF04F75E404277F1 * L_65 = __this->get_U3CU3E4__this_1();
		RuntimeObject* L_66 = ((JSONStore_tE5F9992486087BC106BD9B47F9B371AF218E400B *)L_65)->get_unity_1();
		PurchaseFailureDescription_tF5204FF61912DF603166BB79C4A10BA5727FBFD8 * L_67 = V_7;
		InterfaceActionInvoker1< PurchaseFailureDescription_tF5204FF61912DF603166BB79C4A10BA5727FBFD8 * >::Invoke(5 /* System.Void UnityEngine.Purchasing.Extension.IStoreCallback::OnPurchaseFailed(UnityEngine.Purchasing.Extension.PurchaseFailureDescription) */, IStoreCallback_t3176FA3F472DF5F252CDB5D87E60B2538A44C05F_il2cpp_TypeInfo_var, L_66, L_67);
		// }, developerPayload);
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
// System.Void UnityEngine.Purchasing.UDPReflectionUtils/<>c__DisplayClass6_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass6_0__ctor_mC661124F0973651F39A475CA357FA3E5D91A1599 (U3CU3Ec__DisplayClass6_0_tFC02CD6F9A7EFE0BD5EE8356D40FD5373E0DC90D * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.Purchasing.UDPReflectionUtils/<>c__DisplayClass6_0::<GetTypeByName>b__0(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass6_0_U3CGetTypeByNameU3Eb__0_mAF4F9E30DC6488CBCEB0F9830F9393B0000DBB90 (U3CU3Ec__DisplayClass6_0_tFC02CD6F9A7EFE0BD5EE8356D40FD5373E0DC90D * __this, String_t* ___x0, const RuntimeMethod* method)
{
	{
		// if (Array.Exists(k_whiteListedAssemblies, x => assembly.FullName.StartsWith(x)))
		Assembly_t * L_0 = __this->get_assembly_0();
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.Assembly::get_FullName() */, L_0);
		String_t* L_2 = ___x0;
		bool L_3;
		L_3 = String_StartsWith_mDE2FF98CAFFD13F88EDEB6C40158DDF840BFCF12(L_1, L_2, /*hidden argument*/NULL);
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
// System.Void UnityEngine.Purchasing.UIFakeStore/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m6D8979D59E6F585AF09B0297D4E94680B98C07EB (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t4C01EB1EC5B633A6C269CEF322D5F130DD02C372_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t4C01EB1EC5B633A6C269CEF322D5F130DD02C372 * L_0 = (U3CU3Ec_t4C01EB1EC5B633A6C269CEF322D5F130DD02C372 *)il2cpp_codegen_object_new(U3CU3Ec_t4C01EB1EC5B633A6C269CEF322D5F130DD02C372_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m23C15A3F8354919E9739152CF9ADA508304A6F20(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t4C01EB1EC5B633A6C269CEF322D5F130DD02C372_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4C01EB1EC5B633A6C269CEF322D5F130DD02C372_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void UnityEngine.Purchasing.UIFakeStore/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m23C15A3F8354919E9739152CF9ADA508304A6F20 (U3CU3Ec_t4C01EB1EC5B633A6C269CEF322D5F130DD02C372 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String UnityEngine.Purchasing.UIFakeStore/<>c::<CreateRetrieveProductsQuestion>b__20_0(UnityEngine.Purchasing.ProductDefinition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CCreateRetrieveProductsQuestionU3Eb__20_0_m6EF18D9572970CAEC1DE7239C90269C7227B3F03 (U3CU3Ec_t4C01EB1EC5B633A6C269CEF322D5F130DD02C372 * __this, ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572 * ___pid0, const RuntimeMethod* method)
{
	{
		// title += string.Join(", ", definitions.Take(RetrieveProductsDescriptionCount).Select(pid => pid.id).ToArray());
		ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572 * L_0 = ___pid0;
		String_t* L_1;
		L_1 = ProductDefinition_get_id_m36316F5B3DCDF8110AF71C3F6E3F0E28AFC831E8_inline(L_0, /*hidden argument*/NULL);
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
// System.Void UnityEngine.Purchasing.Extension.UnityUtil/<DelayedCoroutine>d__48::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDelayedCoroutineU3Ed__48__ctor_mCA7240CCDB552FFD4F6F22501E8D496F2B1110FF (U3CDelayedCoroutineU3Ed__48_tC4749091BA348052BE31023A7D2F5000281F024C * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void UnityEngine.Purchasing.Extension.UnityUtil/<DelayedCoroutine>d__48::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDelayedCoroutineU3Ed__48_System_IDisposable_Dispose_m09D0EB5286F9AAE96CBE6D94E3FF7F9FE076F638 (U3CDelayedCoroutineU3Ed__48_tC4749091BA348052BE31023A7D2F5000281F024C * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean UnityEngine.Purchasing.Extension.UnityUtil/<DelayedCoroutine>d__48::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CDelayedCoroutineU3Ed__48_MoveNext_mFDAC216FC6D4C280BB6939EB4755F94BC513CA8F (U3CDelayedCoroutineU3Ed__48_tC4749091BA348052BE31023A7D2F5000281F024C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	UnityUtil_t889EAFBFB8290CE278044818482339ED03EA4172 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		UnityUtil_t889EAFBFB8290CE278044818482339ED03EA4172 * L_1 = __this->get_U3CU3E4__this_3();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0039;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return new WaitForSeconds(delay);
		int32_t L_4 = __this->get_delay_2();
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_5 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_5, ((float)((float)L_4)), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_5);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0039:
	{
		__this->set_U3CU3E1__state_0((-1));
		// StartCoroutine(coroutine);
		UnityUtil_t889EAFBFB8290CE278044818482339ED03EA4172 * L_6 = V_1;
		RuntimeObject* L_7 = __this->get_coroutine_4();
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_8;
		L_8 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(L_6, L_7, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object UnityEngine.Purchasing.Extension.UnityUtil/<DelayedCoroutine>d__48::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CDelayedCoroutineU3Ed__48_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m6B80CAC790FB28E868113F0982289D017AC9DD82 (U3CDelayedCoroutineU3Ed__48_tC4749091BA348052BE31023A7D2F5000281F024C * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void UnityEngine.Purchasing.Extension.UnityUtil/<DelayedCoroutine>d__48::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDelayedCoroutineU3Ed__48_System_Collections_IEnumerator_Reset_m89C455992E8BC0F988D97894649B211833E2A406 (U3CDelayedCoroutineU3Ed__48_tC4749091BA348052BE31023A7D2F5000281F024C * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CDelayedCoroutineU3Ed__48_System_Collections_IEnumerator_Reset_m89C455992E8BC0F988D97894649B211833E2A406_RuntimeMethod_var)));
	}
}
// System.Object UnityEngine.Purchasing.Extension.UnityUtil/<DelayedCoroutine>d__48::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CDelayedCoroutineU3Ed__48_System_Collections_IEnumerator_get_Current_m034F0433A3F327BD88FCD115D4D645FC187A3C1D (U3CDelayedCoroutineU3Ed__48_tC4749091BA348052BE31023A7D2F5000281F024C * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void UnityEngine.Purchasing.WinRTStore/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mD2B80949D14EEF36931F6934374DE094C4904F33 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t114F9247D6420894D3A5B1652CCBE81140258A1D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t114F9247D6420894D3A5B1652CCBE81140258A1D * L_0 = (U3CU3Ec_t114F9247D6420894D3A5B1652CCBE81140258A1D *)il2cpp_codegen_object_new(U3CU3Ec_t114F9247D6420894D3A5B1652CCBE81140258A1D_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mA06C6FA2819A9B484B8560E97F64FD2D1E8C1223(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t114F9247D6420894D3A5B1652CCBE81140258A1D_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t114F9247D6420894D3A5B1652CCBE81140258A1D_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void UnityEngine.Purchasing.WinRTStore/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mA06C6FA2819A9B484B8560E97F64FD2D1E8C1223 (U3CU3Ec_t114F9247D6420894D3A5B1652CCBE81140258A1D * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.Purchasing.WinRTStore/<>c::<RetrieveProducts>b__8_0(UnityEngine.Purchasing.ProductDefinition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CRetrieveProductsU3Eb__8_0_m4BB06CE83E9F7A6CA273C9378B8D95079A39652B (U3CU3Ec_t114F9247D6420894D3A5B1652CCBE81140258A1D * __this, ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572 * ___def0, const RuntimeMethod* method)
{
	{
		// where def.type != ProductType.Subscription
		ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572 * L_0 = ___def0;
		int32_t L_1;
		L_1 = ProductDefinition_get_type_m54E16B91196F7553460DEFE3701E9867F126AB42_inline(L_0, /*hidden argument*/NULL);
		return (bool)((((int32_t)((((int32_t)L_1) == ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// UnityEngine.Purchasing.Default.WinProductDescription UnityEngine.Purchasing.WinRTStore/<>c::<RetrieveProducts>b__8_1(UnityEngine.Purchasing.ProductDefinition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WinProductDescription_tA1CEDA6F11485CE9F301415C989ECF6A3A8B4829 * U3CU3Ec_U3CRetrieveProductsU3Eb__8_1_m39F67050779E7FED3B6DB386FAFB220B909CF4FD (U3CU3Ec_t114F9247D6420894D3A5B1652CCBE81140258A1D * __this, ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572 * ___def0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WinProductDescription_tA1CEDA6F11485CE9F301415C989ECF6A3A8B4829_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral283A5E2C7FF2F98F76268C8CFB12CA428D08EF99);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral74320907E0EFDCA8532E8CBD2C1A2910BB8C42D7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C99461589CBC42FE28D0A29D20F63D0EE7E6E00);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC0FB8B944A767E1AACE82F930D95E69ED912ADAD);
		s_Il2CppMethodInitialized = true;
	}
	{
		// select new WinProductDescription(
		//     def.storeSpecificId, "$0.01",
		//     "Fake title - " + def.storeSpecificId,
		//     "Fake description - " + def.storeSpecificId,
		//     "USD", 0.01m, null, null, def.type == ProductType.Consumable);
		ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572 * L_0 = ___def0;
		String_t* L_1;
		L_1 = ProductDefinition_get_storeSpecificId_m32204A00FC4A55334ABC8336509E4B57A6CD50B6_inline(L_0, /*hidden argument*/NULL);
		ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572 * L_2 = ___def0;
		String_t* L_3;
		L_3 = ProductDefinition_get_storeSpecificId_m32204A00FC4A55334ABC8336509E4B57A6CD50B6_inline(L_2, /*hidden argument*/NULL);
		String_t* L_4;
		L_4 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral8C99461589CBC42FE28D0A29D20F63D0EE7E6E00, L_3, /*hidden argument*/NULL);
		ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572 * L_5 = ___def0;
		String_t* L_6;
		L_6 = ProductDefinition_get_storeSpecificId_m32204A00FC4A55334ABC8336509E4B57A6CD50B6_inline(L_5, /*hidden argument*/NULL);
		String_t* L_7;
		L_7 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral74320907E0EFDCA8532E8CBD2C1A2910BB8C42D7, L_6, /*hidden argument*/NULL);
		Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Decimal__ctor_mB9DFF414FB23863B982F9D863D6E57867995C7F3((&L_8), 1, 0, 0, (bool)0, (uint8_t)2, /*hidden argument*/NULL);
		ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572 * L_9 = ___def0;
		int32_t L_10;
		L_10 = ProductDefinition_get_type_m54E16B91196F7553460DEFE3701E9867F126AB42_inline(L_9, /*hidden argument*/NULL);
		WinProductDescription_tA1CEDA6F11485CE9F301415C989ECF6A3A8B4829 * L_11 = (WinProductDescription_tA1CEDA6F11485CE9F301415C989ECF6A3A8B4829 *)il2cpp_codegen_object_new(WinProductDescription_tA1CEDA6F11485CE9F301415C989ECF6A3A8B4829_il2cpp_TypeInfo_var);
		WinProductDescription__ctor_m9255456F4AA2925A63870208AF1D7166DE90CAF9(L_11, L_1, _stringLiteral283A5E2C7FF2F98F76268C8CFB12CA428D08EF99, L_4, L_7, _stringLiteralC0FB8B944A767E1AACE82F930D95E69ED912ADAD, L_8, (String_t*)NULL, (String_t*)NULL, (bool)((((int32_t)L_10) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
		return L_11;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ProductDefinition_get_type_m54E16B91196F7553460DEFE3701E9867F126AB42_inline (ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572 * __this, const RuntimeMethod* method)
{
	{
		// public ProductType type { get; private set; }
		int32_t L_0 = __this->get_U3CtypeU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ProductDefinition_get_storeSpecificId_m32204A00FC4A55334ABC8336509E4B57A6CD50B6_inline (ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572 * __this, const RuntimeMethod* method)
{
	{
		// public string storeSpecificId { get; private set; }
		String_t* L_0 = __this->get_U3CstoreSpecificIdU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ProductDescription_get_storeSpecificId_m805EE28C57C25664093C7F5C2FB24EAADFEAFB09_inline (ProductDescription_t9F14611B4DB2B1E0DAE69236C5C50FE41DDE6C75 * __this, const RuntimeMethod* method)
{
	{
		// public string storeSpecificId { get; private set; }
		String_t* L_0 = __this->get_U3CstoreSpecificIdU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572 * Product_get_definition_m0311B165A3BC6AF59A28AE4D75A220DDFDAA7182_inline (Product_t8D04681E6E43F5FBB6065B70408B9B0F13B5797E * __this, const RuntimeMethod* method)
{
	{
		// public ProductDefinition definition { get; private set; }
		ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572 * L_0 = __this->get_U3CdefinitionU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_stringLength_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ProductDefinition_get_id_m36316F5B3DCDF8110AF71C3F6E3F0E28AFC831E8_inline (ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572 * __this, const RuntimeMethod* method)
{
	{
		// public string id { get; private set; }
		String_t* L_0 = __this->get_U3CidU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Array_Empty_TisRuntimeObject_m002765312BF306B1B3B5BFAB9550C0A2A1820CDA_gshared_inline (const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = ((EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Value_0();
		return (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_0;
	}
}
