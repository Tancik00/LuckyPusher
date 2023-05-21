#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.Void IOneSignalPlatform::Init()
// 0x00000002 System.Void IOneSignalPlatform::RegisterForPushNotifications()
// 0x00000003 System.Void IOneSignalPlatform::PromptForPushNotificationsWithUserResponse()
// 0x00000004 System.Void IOneSignalPlatform::SendTag(System.String,System.String)
// 0x00000005 System.Void IOneSignalPlatform::SendTags(System.Collections.Generic.IDictionary`2<System.String,System.String>)
// 0x00000006 System.Void IOneSignalPlatform::GetTags(System.String)
// 0x00000007 System.Void IOneSignalPlatform::DeleteTag(System.String)
// 0x00000008 System.Void IOneSignalPlatform::DeleteTags(System.Collections.Generic.IList`1<System.String>)
// 0x00000009 System.Void IOneSignalPlatform::IdsAvailable(System.String)
// 0x0000000A System.Void IOneSignalPlatform::SetSubscription(System.Boolean)
// 0x0000000B System.Void IOneSignalPlatform::PostNotification(System.String,System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
// 0x0000000C System.Void IOneSignalPlatform::SyncHashedEmail(System.String)
// 0x0000000D System.Void IOneSignalPlatform::PromptLocation()
// 0x0000000E System.Void IOneSignalPlatform::SetLocationShared(System.Boolean)
// 0x0000000F System.Void IOneSignalPlatform::SetEmail(System.String,System.String,System.String)
// 0x00000010 System.Void IOneSignalPlatform::SetEmail(System.String,System.String,System.String,System.String)
// 0x00000011 System.Void IOneSignalPlatform::LogoutEmail(System.String,System.String)
// 0x00000012 System.Void IOneSignalPlatform::SetInFocusDisplaying(OneSignal/OSInFocusDisplayOption)
// 0x00000013 System.Void IOneSignalPlatform::UserDidProvideConsent(System.Boolean)
// 0x00000014 System.Boolean IOneSignalPlatform::UserProvidedConsent()
// 0x00000015 System.Void IOneSignalPlatform::SetExternalUserId(System.String,System.String)
// 0x00000016 System.Void IOneSignalPlatform::SetExternalUserId(System.String,System.String,System.String,System.String)
// 0x00000017 System.Void IOneSignalPlatform::RemoveExternalUserId(System.String)
// 0x00000018 System.Void IOneSignalPlatform::AddPermissionObserver()
// 0x00000019 System.Void IOneSignalPlatform::RemovePermissionObserver()
// 0x0000001A System.Void IOneSignalPlatform::AddSubscriptionObserver()
// 0x0000001B System.Void IOneSignalPlatform::RemoveSubscriptionObserver()
// 0x0000001C System.Void IOneSignalPlatform::AddEmailSubscriptionObserver()
// 0x0000001D System.Void IOneSignalPlatform::RemoveEmailSubscriptionObserver()
// 0x0000001E OSPermissionSubscriptionState IOneSignalPlatform::GetPermissionSubscriptionState()
// 0x0000001F System.Void IOneSignalPlatform::AddTrigger(System.String,System.Object)
// 0x00000020 System.Void IOneSignalPlatform::AddTriggers(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
// 0x00000021 System.Void IOneSignalPlatform::RemoveTriggerForKey(System.String)
// 0x00000022 System.Void IOneSignalPlatform::RemoveTriggersForKeys(System.Collections.Generic.IList`1<System.String>)
// 0x00000023 System.Object IOneSignalPlatform::GetTriggerValueForKey(System.String)
// 0x00000024 System.Void IOneSignalPlatform::PauseInAppMessages(System.Boolean)
// 0x00000025 System.Void IOneSignalPlatform::EnableVibrate(System.Boolean)
// 0x00000026 System.Void IOneSignalPlatform::EnableSound(System.Boolean)
// 0x00000027 System.Void IOneSignalPlatform::ClearOneSignalNotifications()
// 0x00000028 System.Void IOneSignalPlatform::SendOutcome(System.String,System.String)
// 0x00000029 System.Void IOneSignalPlatform::SendUniqueOutcome(System.String,System.String)
// 0x0000002A System.Void IOneSignalPlatform::SendOutcomeWithValue(System.String,System.String,System.Single)
// 0x0000002B OSPermissionStateChanges IOneSignalPlatform::ParseOSPermissionStateChanges(System.String)
// 0x0000002C OSSubscriptionStateChanges IOneSignalPlatform::ParseOSSubscriptionStateChanges(System.String)
// 0x0000002D OSEmailSubscriptionStateChanges IOneSignalPlatform::ParseOSEmailSubscriptionStateChanges(System.String)
// 0x0000002E System.Void OneSignal::add_permissionObserver(OneSignal/PermissionObservable)
extern void OneSignal_add_permissionObserver_m2F2F4236334C0FBF0E85C34108E55849B9D5CF57 (void);
// 0x0000002F System.Void OneSignal::remove_permissionObserver(OneSignal/PermissionObservable)
extern void OneSignal_remove_permissionObserver_mC2CA2A2BA58DE4DBEFAAE657C114510864D0698F (void);
// 0x00000030 System.Void OneSignal::addPermissionObserver()
extern void OneSignal_addPermissionObserver_mF94547770851AD11FD794CC04296CE10AFB8172D (void);
// 0x00000031 System.Void OneSignal::add_subscriptionObserver(OneSignal/SubscriptionObservable)
extern void OneSignal_add_subscriptionObserver_mEF3E333F71419EC5F43DCC36437FBFDB0F93F6AE (void);
// 0x00000032 System.Void OneSignal::remove_subscriptionObserver(OneSignal/SubscriptionObservable)
extern void OneSignal_remove_subscriptionObserver_m72108111E14D7B9F4C968F3FC6F00F8383B44B87 (void);
// 0x00000033 System.Void OneSignal::addSubscriptionObserver()
extern void OneSignal_addSubscriptionObserver_m89CFADF08E893A5699A2A55B6F7BC9B67A1E952F (void);
// 0x00000034 System.Void OneSignal::add_emailSubscriptionObserver(OneSignal/EmailSubscriptionObservable)
extern void OneSignal_add_emailSubscriptionObserver_mEB3B1F0F56234DBD4AF53096BE3674FC04E42F4C (void);
// 0x00000035 System.Void OneSignal::remove_emailSubscriptionObserver(OneSignal/EmailSubscriptionObservable)
extern void OneSignal_remove_emailSubscriptionObserver_mF717E63D4E5CC4AA9CEF5281412451B757BB7B45 (void);
// 0x00000036 System.Void OneSignal::addEmailSubscriptionObserver()
extern void OneSignal_addEmailSubscriptionObserver_mA2659A7A57140EEC0D257A0F6B336A3886F1A2BF (void);
// 0x00000037 OneSignal/UnityBuilder OneSignal::StartInit(System.String,System.String)
extern void OneSignal_StartInit_mCE355FA4323A4ED21EF56D72469CE02D3F59EEA7 (void);
// 0x00000038 System.Void OneSignal::RegisterPlatform(IOneSignalPlatform)
extern void OneSignal_RegisterPlatform_m234A03E0BC37C49B0967D5EA1C5A1CC4DB730D4C (void);
// 0x00000039 System.Void OneSignal::LogDebug(System.String)
extern void OneSignal_LogDebug_mCC268EBDC2B876D27A2FB9CF66A6E50BAC6FD6C0 (void);
// 0x0000003A System.Void OneSignal::Init()
extern void OneSignal_Init_m756C1C4D540B10908DD87EDC00BB106549112B0F (void);
// 0x0000003B OneSignal/OSInFocusDisplayOption OneSignal::get_inFocusDisplayType()
extern void OneSignal_get_inFocusDisplayType_mE0666C0E7CE43F153D2A26E2AFD11F0FB5F17B69 (void);
// 0x0000003C System.Void OneSignal::set_inFocusDisplayType(OneSignal/OSInFocusDisplayOption)
extern void OneSignal_set_inFocusDisplayType_m084C9176B6C93E57100FC5848CA97BC720A4A633 (void);
// 0x0000003D System.Void OneSignal::SetLogLevel(OneSignal/LOG_LEVEL,OneSignal/LOG_LEVEL)
extern void OneSignal_SetLogLevel_m9324491D9B1DDEDD181453B17B1AA273DF915F3E (void);
// 0x0000003E System.Void OneSignal::SetLocationShared(System.Boolean)
extern void OneSignal_SetLocationShared_m98084A0239B29EABECD6BCAA07AEFF2202130D20 (void);
// 0x0000003F System.Void OneSignal::SendTag(System.String,System.String)
extern void OneSignal_SendTag_m1C5D597F997EBD115F2B901037CBFB4EFC4040E4 (void);
// 0x00000040 System.Void OneSignal::SendTags(System.Collections.Generic.Dictionary`2<System.String,System.String>)
extern void OneSignal_SendTags_mCE5CDE6089CB368FC0C303F7DC4E30F1EBCDEE42 (void);
// 0x00000041 System.Void OneSignal::GetTags()
extern void OneSignal_GetTags_mC74C2D43B42A874852FBEF1A0FD13FED54CD8E7D (void);
// 0x00000042 System.Void OneSignal::GetTags(OneSignal/TagsReceived)
extern void OneSignal_GetTags_m8B00BCE7E1F8AADE551D52F7A0BCB6C0F9F639B0 (void);
// 0x00000043 System.Void OneSignal::DeleteTag(System.String)
extern void OneSignal_DeleteTag_m94ABCEEC21B47C29B878A59E80AFE735D78A3D77 (void);
// 0x00000044 System.Void OneSignal::DeleteTags(System.Collections.Generic.IList`1<System.String>)
extern void OneSignal_DeleteTags_m2BF0EB88A6CB6977DF32513D137DC8DDF307CD1C (void);
// 0x00000045 System.Void OneSignal::RegisterForPushNotifications()
extern void OneSignal_RegisterForPushNotifications_mB9EB3EEAC02944FECD02D5C7AA3569AE67670202 (void);
// 0x00000046 System.Void OneSignal::PromptForPushNotificationsWithUserResponse(OneSignal/PromptForPushNotificationsUserResponse)
extern void OneSignal_PromptForPushNotificationsWithUserResponse_mD80A75BB8F4387BCC612397BC3E0C7E8BEE1F566 (void);
// 0x00000047 System.Void OneSignal::IdsAvailable()
extern void OneSignal_IdsAvailable_m6600F642D4A9C99CCEEE2290104D9F24AD51AE55 (void);
// 0x00000048 System.Void OneSignal::IdsAvailable(OneSignal/IdsAvailableCallback)
extern void OneSignal_IdsAvailable_m07CE6AC8351316D2D505A57911195084F07BE242 (void);
// 0x00000049 System.Void OneSignal::EnableVibrate(System.Boolean)
extern void OneSignal_EnableVibrate_mD9484E8707D0802C58FF654EB698DB939F2FD4C5 (void);
// 0x0000004A System.Void OneSignal::EnableSound(System.Boolean)
extern void OneSignal_EnableSound_m5AF4E3FC2A6D0774F1D192D8CFD60AD5682422E3 (void);
// 0x0000004B System.Void OneSignal::ClearOneSignalNotifications()
extern void OneSignal_ClearOneSignalNotifications_m4A11A801404B3551FE3D66CD9B0FE5C0A5C1430C (void);
// 0x0000004C System.Void OneSignal::SetSubscription(System.Boolean)
extern void OneSignal_SetSubscription_m02346B7CABDFF30191286C1C1F1CB2207D91C27F (void);
// 0x0000004D System.Void OneSignal::SetEmail(System.String)
extern void OneSignal_SetEmail_m9D6036B52EC04B63633F2246A63BBA62935EF431 (void);
// 0x0000004E System.Void OneSignal::SetEmail(System.String,OneSignal/OnSetEmailSuccess,OneSignal/OnSetEmailFailure)
extern void OneSignal_SetEmail_mDB63B941D34E857DA3E339F2380DD2154B8A5346 (void);
// 0x0000004F System.Void OneSignal::SetEmail(System.String,System.String)
extern void OneSignal_SetEmail_mFC2BADD5E33EF210F18A5924A577DD87C70F141F (void);
// 0x00000050 System.Void OneSignal::SetEmail(System.String,System.String,OneSignal/OnSetEmailSuccess,OneSignal/OnSetEmailFailure)
extern void OneSignal_SetEmail_mF118BB08E84801FFE6BAF038600AF60BB01C6F33 (void);
// 0x00000051 System.Void OneSignal::LogoutEmail()
extern void OneSignal_LogoutEmail_mAD57C11F270D50127675660BBFD4FFF91A4B075B (void);
// 0x00000052 System.Void OneSignal::LogoutEmail(OneSignal/OnLogoutEmailSuccess,OneSignal/OnLogoutEmailFailure)
extern void OneSignal_LogoutEmail_mA0E3DAD95867CF703269C5C66018E5718841535F (void);
// 0x00000053 System.Void OneSignal::PostNotification(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern void OneSignal_PostNotification_m409B352B00D71524060D6B8D198931F2B4A97C6E (void);
// 0x00000054 System.Void OneSignal::PostNotification(System.Collections.Generic.Dictionary`2<System.String,System.Object>,OneSignal/OnPostNotificationSuccess,OneSignal/OnPostNotificationFailure)
extern void OneSignal_PostNotification_m8F6EA72A155F841DD46CAD506780BF5BD48186D4 (void);
// 0x00000055 System.Void OneSignal::SyncHashedEmail(System.String)
extern void OneSignal_SyncHashedEmail_mDD8C55E8545AD4F8294A2A3D7B91AF8AC2A009E3 (void);
// 0x00000056 System.Void OneSignal::PromptLocation()
extern void OneSignal_PromptLocation_m3F0FB69A3557999E3C897CC90358D5984596974C (void);
// 0x00000057 OSPermissionSubscriptionState OneSignal::GetPermissionSubscriptionState()
extern void OneSignal_GetPermissionSubscriptionState_m196DD43D7ADBA4EC7910A28AC98EC4283638D705 (void);
// 0x00000058 System.Void OneSignal::UserDidProvideConsent(System.Boolean)
extern void OneSignal_UserDidProvideConsent_mE38B5FA35EC4B213EF56A331A19AF0237464EF4E (void);
// 0x00000059 System.Boolean OneSignal::UserProvidedConsent()
extern void OneSignal_UserProvidedConsent_m11C4DE224081FCD055D3BBEB968F69A345CB7294 (void);
// 0x0000005A System.Void OneSignal::SetRequiresUserPrivacyConsent(System.Boolean)
extern void OneSignal_SetRequiresUserPrivacyConsent_mA21F8EBF20F191CCC49E41AD22972EABB459BD1C (void);
// 0x0000005B System.Void OneSignal::SetExternalUserId(System.String)
extern void OneSignal_SetExternalUserId_mB27AC7D0A5BDD424089DDEDBE1403763E86B36D7 (void);
// 0x0000005C System.Void OneSignal::SetExternalUserId(System.String,OneSignal/OnExternalUserIdUpdateCompletion)
extern void OneSignal_SetExternalUserId_m5B2F48672A5A215CA9AD6B04DCE2CE9FE607CDE3 (void);
// 0x0000005D System.Void OneSignal::SetExternalUserId(System.String,System.String,OneSignal/OnExternalUserIdUpdateCompletion,OneSignal/OnExternalUserIdUpdateCompletionFailure)
extern void OneSignal_SetExternalUserId_mC35359D2A1F14271D0FFA213F1ADD7E623B39FD0 (void);
// 0x0000005E System.Void OneSignal::RemoveExternalUserId()
extern void OneSignal_RemoveExternalUserId_mE9298EC2DA19B7830BE40394FC38654871327D80 (void);
// 0x0000005F System.Void OneSignal::RemoveExternalUserId(OneSignal/OnExternalUserIdUpdateCompletion)
extern void OneSignal_RemoveExternalUserId_mD73A51037F2E62C084259F547C3841AC9544C5E2 (void);
// 0x00000060 System.Void OneSignal::AddTrigger(System.String,System.Object)
extern void OneSignal_AddTrigger_mBAE1FAD885BA3FEB0D10CEDACC5FC37A7465EB18 (void);
// 0x00000061 System.Void OneSignal::AddTriggers(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern void OneSignal_AddTriggers_mA03F35E669AF74E62B3CF849788060B544232D91 (void);
// 0x00000062 System.Void OneSignal::RemoveTriggerForKey(System.String)
extern void OneSignal_RemoveTriggerForKey_m02A11CF3613CF6DC2C863465CC40ABF2D0519872 (void);
// 0x00000063 System.Void OneSignal::RemoveTriggersForKeys(System.Collections.Generic.IList`1<System.String>)
extern void OneSignal_RemoveTriggersForKeys_mD1837A85C2CDB70C74EAB2D7FDB10BFC5BCEE579 (void);
// 0x00000064 System.Object OneSignal::GetTriggerValueForKey(System.String)
extern void OneSignal_GetTriggerValueForKey_mA92E59B666D00C9DC1940C62FDFB39131C8A8272 (void);
// 0x00000065 System.Void OneSignal::PauseInAppMessages(System.Boolean)
extern void OneSignal_PauseInAppMessages_mD7C3888E14FF3D48BD577DA87410ECD768E04D0F (void);
// 0x00000066 System.Void OneSignal::SendOutcome(System.String)
extern void OneSignal_SendOutcome_mB7426D016FCA81DD2C525F157DDBC51F2A7DA846 (void);
// 0x00000067 System.Void OneSignal::SendOutcome(System.String,OneSignal/OnSendOutcomeSuccess)
extern void OneSignal_SendOutcome_m911BCB79171A7A7494396248A578B74014CBC6FF (void);
// 0x00000068 System.Void OneSignal::SendUniqueOutcome(System.String)
extern void OneSignal_SendUniqueOutcome_m157008ED8BAF318262FCD739F9E26815B89CF000 (void);
// 0x00000069 System.Void OneSignal::SendUniqueOutcome(System.String,OneSignal/OnSendOutcomeSuccess)
extern void OneSignal_SendUniqueOutcome_m578BD42BB28905D2417CFB3F0CE5BFD49A700244 (void);
// 0x0000006A System.Void OneSignal::SendOutcomeWithValue(System.String,System.Single)
extern void OneSignal_SendOutcomeWithValue_mF89CDC5120ABE578C0E08BD751EB8E377EDC7B3B (void);
// 0x0000006B System.Void OneSignal::SendOutcomeWithValue(System.String,System.Single,OneSignal/OnSendOutcomeSuccess)
extern void OneSignal_SendOutcomeWithValue_mFE5BCC3868F5E0782E2ADBFBFA387062A5D6D977 (void);
// 0x0000006C OSNotification OneSignal::DictionaryToNotification(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern void OneSignal_DictionaryToNotification_mE2E37E68961355812CDA6FA5D0025B5370CAD9CB (void);
// 0x0000006D System.Void OneSignal::onPushNotificationReceived(System.String)
extern void OneSignal_onPushNotificationReceived_mFCA783622D0D5C77EC6FAEEE2E665F479EB35049 (void);
// 0x0000006E System.Void OneSignal::onPushNotificationOpened(System.String)
extern void OneSignal_onPushNotificationOpened_mAD98C86D226B01E4031F850A73139C10929B7026 (void);
// 0x0000006F System.Void OneSignal::onIdsAvailable(System.String)
extern void OneSignal_onIdsAvailable_mD7EECC2A7C7A2158B662AB206AD7783488B524A2 (void);
// 0x00000070 System.Void OneSignal::onTagsReceived(System.String)
extern void OneSignal_onTagsReceived_m18993620E5598A3CC6752DEDB218B90A40041AAB (void);
// 0x00000071 System.Void OneSignal::onPostNotificationSuccess(System.String)
extern void OneSignal_onPostNotificationSuccess_mD9A78715025AED27A30C0E1A5481AEEC6DB77FDC (void);
// 0x00000072 System.Void OneSignal::onPostNotificationFailed(System.String)
extern void OneSignal_onPostNotificationFailed_mDC0AEB66201658B5FD2389B5EB688B9501B548BB (void);
// 0x00000073 System.Void OneSignal::onExternalUserIdUpdateCompletion(System.String)
extern void OneSignal_onExternalUserIdUpdateCompletion_m5AF831D28B8792BF3FA6F5B0E024C03BC726EB0C (void);
// 0x00000074 System.Void OneSignal::onSetEmailSuccess(System.String)
extern void OneSignal_onSetEmailSuccess_mE1392F54A63AFDF75DDA9038C30CE6D8284C9705 (void);
// 0x00000075 System.Void OneSignal::onSetEmailFailure(System.String)
extern void OneSignal_onSetEmailFailure_mF758E142632AE59BDBF4D66C49E8404837188E07 (void);
// 0x00000076 System.Void OneSignal::onLogoutEmailSuccess(System.String)
extern void OneSignal_onLogoutEmailSuccess_mFAB276E591F9710E745E21691C4BCA81AFBB99E6 (void);
// 0x00000077 System.Void OneSignal::onLogoutEmailFailure(System.String)
extern void OneSignal_onLogoutEmailFailure_m45F82C231E566E9A27D32E4B06B858A8BC036039 (void);
// 0x00000078 System.Void OneSignal::onSendOutcomeSuccess(System.String)
extern void OneSignal_onSendOutcomeSuccess_m1D02FAE7D613DCEEF8E61F0792DCEF40AFD2C5F4 (void);
// 0x00000079 System.Void OneSignal::onOSPermissionChanged(System.String)
extern void OneSignal_onOSPermissionChanged_m0FE4E135E2AB5F3E3EFD81A32611DC99B8F23279 (void);
// 0x0000007A System.Void OneSignal::onOSSubscriptionChanged(System.String)
extern void OneSignal_onOSSubscriptionChanged_m06B493BB2C90CF03DB24219CAB79B133F8F55DFD (void);
// 0x0000007B System.Void OneSignal::onOSEmailSubscriptionChanged(System.String)
extern void OneSignal_onOSEmailSubscriptionChanged_m2F6F1CCEB4E7CF5BE68A007A67C78C63157CEEFF (void);
// 0x0000007C System.Void OneSignal::onPromptForPushNotificationsWithUserResponse(System.String)
extern void OneSignal_onPromptForPushNotificationsWithUserResponse_mEA025C7C3ACCBBD2BE7560378EDC3A074A823B0E (void);
// 0x0000007D System.Void OneSignal::onInAppMessageClicked(System.String)
extern void OneSignal_onInAppMessageClicked_mDCE2937FB83BCAB69CAEE59CCF22E15C005E71A7 (void);
// 0x0000007E System.Boolean OneSignal::isValidDelegate(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern void OneSignal_isValidDelegate_m6E92E6BD705588CB1BCCE46C57AE3956E9D340B5 (void);
// 0x0000007F System.Boolean OneSignal::isValidSuccessFailureDelegate(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern void OneSignal_isValidSuccessFailureDelegate_m45DCD71D2555940A8605074102FCBFC669A4E83E (void);
// 0x00000080 System.Void OneSignal::.ctor()
extern void OneSignal__ctor_m801417B63426639B5914424B29208D4D6015B061 (void);
// 0x00000081 System.Void OneSignal::.cctor()
extern void OneSignal__cctor_mAADE56D96D1D52BEC9E490B7DB71931810B66094 (void);
// 0x00000082 System.Void OneSignal/NotificationReceived::.ctor(System.Object,System.IntPtr)
extern void NotificationReceived__ctor_m26939E166DA703D362C8526DFDBA04C37D584ED1 (void);
// 0x00000083 System.Void OneSignal/NotificationReceived::Invoke(OSNotification)
extern void NotificationReceived_Invoke_m5C7278BB32535EEDD14D95287192CF05DB0FC156 (void);
// 0x00000084 System.Void OneSignal/OnExternalUserIdUpdateCompletion::.ctor(System.Object,System.IntPtr)
extern void OnExternalUserIdUpdateCompletion__ctor_m79ABE4E111F775A80E4BAF8FF210150401B6511D (void);
// 0x00000085 System.Void OneSignal/OnExternalUserIdUpdateCompletion::Invoke(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern void OnExternalUserIdUpdateCompletion_Invoke_mE9FBD8E1231DB6B2C9418A4CBC46CA2D6FA99B6B (void);
// 0x00000086 System.Void OneSignal/OnExternalUserIdUpdateCompletionFailure::.ctor(System.Object,System.IntPtr)
extern void OnExternalUserIdUpdateCompletionFailure__ctor_m9DD9E8FDA2C491C738C5473AD63E132B8E200A1C (void);
// 0x00000087 System.Void OneSignal/OnExternalUserIdUpdateCompletionFailure::Invoke(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern void OnExternalUserIdUpdateCompletionFailure_Invoke_mB8BE22FB158894DC243E347ABB1CDB5B80E4CFB3 (void);
// 0x00000088 System.Void OneSignal/OnSetEmailSuccess::.ctor(System.Object,System.IntPtr)
extern void OnSetEmailSuccess__ctor_mD18EC284F506911FCD8EA2F0EE2A5BC01AD17D3F (void);
// 0x00000089 System.Void OneSignal/OnSetEmailSuccess::Invoke()
extern void OnSetEmailSuccess_Invoke_m77F99D61CA68EA36709DBF7125C94692118D4C62 (void);
// 0x0000008A System.Void OneSignal/OnSetEmailFailure::.ctor(System.Object,System.IntPtr)
extern void OnSetEmailFailure__ctor_m74548167D2B299EB82C35F1F6E3A42D657D95C1B (void);
// 0x0000008B System.Void OneSignal/OnSetEmailFailure::Invoke(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern void OnSetEmailFailure_Invoke_mB49471E694DA5104BC76980F4C8C5639798527F9 (void);
// 0x0000008C System.Void OneSignal/OnLogoutEmailSuccess::.ctor(System.Object,System.IntPtr)
extern void OnLogoutEmailSuccess__ctor_m5CFAE4CF4900024D0C97E229F1F2F58AF1F7FE11 (void);
// 0x0000008D System.Void OneSignal/OnLogoutEmailSuccess::Invoke()
extern void OnLogoutEmailSuccess_Invoke_m1249F522E9ACB6C6AEB1E0A650126D2E76A2E5FD (void);
// 0x0000008E System.Void OneSignal/OnLogoutEmailFailure::.ctor(System.Object,System.IntPtr)
extern void OnLogoutEmailFailure__ctor_mEBB0DC590B07FC2C9AADEACE95DC7A5E7709184A (void);
// 0x0000008F System.Void OneSignal/OnLogoutEmailFailure::Invoke(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern void OnLogoutEmailFailure_Invoke_m5433108F92A3791222E6C178AD2F6B92F0E6BCCA (void);
// 0x00000090 System.Void OneSignal/OnSendOutcomeSuccess::.ctor(System.Object,System.IntPtr)
extern void OnSendOutcomeSuccess__ctor_m554F5443E2A9680B9CCEE53062EEC668F9256913 (void);
// 0x00000091 System.Void OneSignal/OnSendOutcomeSuccess::Invoke(OSOutcomeEvent)
extern void OnSendOutcomeSuccess_Invoke_mA05B4A944D533EBBA32B0EB4ED8EBA632B47F5DE (void);
// 0x00000092 System.Void OneSignal/NotificationOpened::.ctor(System.Object,System.IntPtr)
extern void NotificationOpened__ctor_mC79F95BC7C9A3A2BDDBEAB20D2361924BDEBF124 (void);
// 0x00000093 System.Void OneSignal/NotificationOpened::Invoke(OSNotificationOpenedResult)
extern void NotificationOpened_Invoke_m59A3350E8B2917932D9183162DA3C32998E56416 (void);
// 0x00000094 System.Void OneSignal/InAppMessageClicked::.ctor(System.Object,System.IntPtr)
extern void InAppMessageClicked__ctor_m3252D848D868D3FE5E3156D716E2963342AEB7B5 (void);
// 0x00000095 System.Void OneSignal/InAppMessageClicked::Invoke(OSInAppMessageAction)
extern void InAppMessageClicked_Invoke_m66291C067D0E1521F8343E8ADC337ACB49CBD88E (void);
// 0x00000096 System.Void OneSignal/IdsAvailableCallback::.ctor(System.Object,System.IntPtr)
extern void IdsAvailableCallback__ctor_m71D5E40CEC5D26B5DD74C5E07CBF9792E0D5637D (void);
// 0x00000097 System.Void OneSignal/IdsAvailableCallback::Invoke(System.String,System.String)
extern void IdsAvailableCallback_Invoke_mE0E2A2CC4C3E5B5CDBF8CACEA82129388941186C (void);
// 0x00000098 System.Void OneSignal/TagsReceived::.ctor(System.Object,System.IntPtr)
extern void TagsReceived__ctor_mF6EC62262B4715EF38513460952DB11AC141E3C3 (void);
// 0x00000099 System.Void OneSignal/TagsReceived::Invoke(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern void TagsReceived_Invoke_m8FC2051A4C71C2FC59BF7791F2F4F4817324F6CE (void);
// 0x0000009A System.Void OneSignal/PromptForPushNotificationsUserResponse::.ctor(System.Object,System.IntPtr)
extern void PromptForPushNotificationsUserResponse__ctor_m48A40C88BD96CDFEC9C99C4319D1ACA2FE75FD94 (void);
// 0x0000009B System.Void OneSignal/PromptForPushNotificationsUserResponse::Invoke(System.Boolean)
extern void PromptForPushNotificationsUserResponse_Invoke_mAB662FD998CF5BC2A5B565F794F3FED2EDF8A622 (void);
// 0x0000009C System.Void OneSignal/OnPostNotificationSuccess::.ctor(System.Object,System.IntPtr)
extern void OnPostNotificationSuccess__ctor_mF74778FA8E1FD78FF66740AF8D9CC2182CEEB2BF (void);
// 0x0000009D System.Void OneSignal/OnPostNotificationSuccess::Invoke(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern void OnPostNotificationSuccess_Invoke_mC4E45D5B1D9E50AAB4CA72796F9E52FAD2817D93 (void);
// 0x0000009E System.Void OneSignal/OnPostNotificationFailure::.ctor(System.Object,System.IntPtr)
extern void OnPostNotificationFailure__ctor_m1BF93A8732046FBA52C46B45836BC2CB426109C3 (void);
// 0x0000009F System.Void OneSignal/OnPostNotificationFailure::Invoke(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern void OnPostNotificationFailure_Invoke_mCFEFAB9AB63633AD5BC9D31FC1A402BC8E821133 (void);
// 0x000000A0 System.Void OneSignal/PermissionObservable::.ctor(System.Object,System.IntPtr)
extern void PermissionObservable__ctor_mD54147678F4093EA4B4D24952BBD1B9E5E21E932 (void);
// 0x000000A1 System.Void OneSignal/PermissionObservable::Invoke(OSPermissionStateChanges)
extern void PermissionObservable_Invoke_m7AE7C99E2B8A793B0D60ECA41D4E59D8CC426E33 (void);
// 0x000000A2 System.Void OneSignal/SubscriptionObservable::.ctor(System.Object,System.IntPtr)
extern void SubscriptionObservable__ctor_m8ECFF54EA2FBA93379986097721FABF7838547A0 (void);
// 0x000000A3 System.Void OneSignal/SubscriptionObservable::Invoke(OSSubscriptionStateChanges)
extern void SubscriptionObservable_Invoke_mA5DABD1A12E6A7502F4E0BBDBB87B944A25ADC79 (void);
// 0x000000A4 System.Void OneSignal/EmailSubscriptionObservable::.ctor(System.Object,System.IntPtr)
extern void EmailSubscriptionObservable__ctor_mB179BF2540A04B27D46E5F7FD354481CE0826457 (void);
// 0x000000A5 System.Void OneSignal/EmailSubscriptionObservable::Invoke(OSEmailSubscriptionStateChanges)
extern void EmailSubscriptionObservable_Invoke_m475D1FD8E0E1FD296C7E6E188E23D1654FFA6146 (void);
// 0x000000A6 System.Void OneSignal/UnityBuilder::.ctor()
extern void UnityBuilder__ctor_m725634C7F0B07CC4E671B1F1394760E11168EB0C (void);
// 0x000000A7 OneSignalSettings OneSignalSettings::get_Instance()
extern void OneSignalSettings_get_Instance_mDCEA4F3B9EBB5CD5F3F11C3634CA5B91FFFA1DFB (void);
// 0x000000A8 System.Void OneSignalSettings::SaveToAssetDatabase()
extern void OneSignalSettings_SaveToAssetDatabase_mB01414C7361153704EE1300A467BC2CD7E05FA8C (void);
// 0x000000A9 System.Void OneSignalSettings::.ctor()
extern void OneSignalSettings__ctor_mB82C7D67D8B3CDE25AAB50367F7E163E8670531D (void);
// 0x000000AA System.Void OneSignalSettings::.cctor()
extern void OneSignalSettings__cctor_m8923DC1A4DC9A307004299602A252EA66081D7B3 (void);
// 0x000000AB System.String OneSignalUnityUtils::GetNewGuid()
extern void OneSignalUnityUtils_GetNewGuid_mE98FB8FC6067F7DA8AF1C46C9DA028581C037814 (void);
// 0x000000AC System.Void OSInAppMessageAction::.ctor()
extern void OSInAppMessageAction__ctor_m39592287776905704BF2D003AFBBFD345EAA08FB (void);
// 0x000000AD System.Void OSNotification::.ctor()
extern void OSNotification__ctor_m6E1749773FF3F7979E219FF4BEAD8927DA7FDB03 (void);
// 0x000000AE System.Void OSNotificationAction::.ctor()
extern void OSNotificationAction__ctor_m4B01FC919A0E58BACBF960E24B968C4AA926941A (void);
// 0x000000AF System.Void OSNotificationOpenedResult::.ctor()
extern void OSNotificationOpenedResult__ctor_m6B1E36689167D0D75F60E3E62DC3C5D3A3ABB998 (void);
// 0x000000B0 System.Void OSNotificationPayload::.ctor()
extern void OSNotificationPayload__ctor_m0D83B11E3E859EE3DA9004AF697FCFAB451A9D8A (void);
// 0x000000B1 System.Void OSOutcomeEvent::.ctor()
extern void OSOutcomeEvent__ctor_m360584AB1C080E514D051EC88EB8C1AD499C9D48 (void);
// 0x000000B2 System.Void OSOutcomeEvent::.ctor(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern void OSOutcomeEvent__ctor_mB222B71F5172E1E97E05D7D9294D531241CCE18A (void);
// 0x000000B3 OSOutcomeEvent/OSSession OSOutcomeEvent::SessionFromString(System.String)
extern void OSOutcomeEvent_SessionFromString_m52C6706CD3E9689F188DDD625AB39B35C5B7D713 (void);
// 0x000000B4 System.Object Json::Deserialize(System.String)
extern void Json_Deserialize_m4F6ECB958C77AF596B8666DDF7B41BAF2F0FCE10 (void);
// 0x000000B5 System.Boolean Json/Parser::IsWordBreak(System.Char)
extern void Parser_IsWordBreak_mC565924147B4E1D11FB080EDD82622BDF66C53AF (void);
// 0x000000B6 System.Void Json/Parser::.ctor(System.String)
extern void Parser__ctor_m0D974AD82CE8E7310882721F293E4972E5CD8090 (void);
// 0x000000B7 System.Object Json/Parser::Parse(System.String)
extern void Parser_Parse_m59C9400B0758A82184794D7A39B43372E3AC4C32 (void);
// 0x000000B8 System.Void Json/Parser::Dispose()
extern void Parser_Dispose_mD588BA3ED107251119D509FE3372D1136DB5B440 (void);
// 0x000000B9 System.Collections.Generic.Dictionary`2<System.String,System.Object> Json/Parser::ParseObject()
extern void Parser_ParseObject_mBE726F3D8ADB6336205E86F5EEE8BDA4EE03D1EB (void);
// 0x000000BA System.Collections.Generic.List`1<System.Object> Json/Parser::ParseArray()
extern void Parser_ParseArray_m16D44CA2E64AE8965E4ED1DBCE459E3997B06F20 (void);
// 0x000000BB System.Object Json/Parser::ParseValue()
extern void Parser_ParseValue_mAE33A6DD3A48C5E0FE040821ECBFD5AECF0D86B1 (void);
// 0x000000BC System.Object Json/Parser::ParseByToken(Json/Parser/TOKEN)
extern void Parser_ParseByToken_mE3D63D087A28F7BC97785DD4DDF40FC2E4FEDD5C (void);
// 0x000000BD System.String Json/Parser::ParseString()
extern void Parser_ParseString_mBE6784E1D3B5C0C99A9DC467C0813CC99D07665E (void);
// 0x000000BE System.Object Json/Parser::ParseNumber()
extern void Parser_ParseNumber_m83A4A664E4C1C1279C792484EE6A76DC663DBEBE (void);
// 0x000000BF System.Void Json/Parser::EatWhitespace()
extern void Parser_EatWhitespace_mFD1B9AD7B2D5F43B8FBC1259F8619BEB268CC13D (void);
// 0x000000C0 System.Char Json/Parser::get_PeekChar()
extern void Parser_get_PeekChar_mFA891FD35F5C092EC8ECE479F5F7C777AB06C70D (void);
// 0x000000C1 System.Char Json/Parser::get_NextChar()
extern void Parser_get_NextChar_mB85A1AC0571ED1AD9552464133635AE07C0DCDD7 (void);
// 0x000000C2 System.String Json/Parser::get_NextWord()
extern void Parser_get_NextWord_mE9D819CD9304F00733AC020146515F035E2706E9 (void);
// 0x000000C3 Json/Parser/TOKEN Json/Parser::get_NextToken()
extern void Parser_get_NextToken_m934F15CF28460A3EB6DA4AF7944C7A0B38408F11 (void);
static Il2CppMethodPointer s_methodPointers[195] = 
{
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	OneSignal_add_permissionObserver_m2F2F4236334C0FBF0E85C34108E55849B9D5CF57,
	OneSignal_remove_permissionObserver_mC2CA2A2BA58DE4DBEFAAE657C114510864D0698F,
	OneSignal_addPermissionObserver_mF94547770851AD11FD794CC04296CE10AFB8172D,
	OneSignal_add_subscriptionObserver_mEF3E333F71419EC5F43DCC36437FBFDB0F93F6AE,
	OneSignal_remove_subscriptionObserver_m72108111E14D7B9F4C968F3FC6F00F8383B44B87,
	OneSignal_addSubscriptionObserver_m89CFADF08E893A5699A2A55B6F7BC9B67A1E952F,
	OneSignal_add_emailSubscriptionObserver_mEB3B1F0F56234DBD4AF53096BE3674FC04E42F4C,
	OneSignal_remove_emailSubscriptionObserver_mF717E63D4E5CC4AA9CEF5281412451B757BB7B45,
	OneSignal_addEmailSubscriptionObserver_mA2659A7A57140EEC0D257A0F6B336A3886F1A2BF,
	OneSignal_StartInit_mCE355FA4323A4ED21EF56D72469CE02D3F59EEA7,
	OneSignal_RegisterPlatform_m234A03E0BC37C49B0967D5EA1C5A1CC4DB730D4C,
	OneSignal_LogDebug_mCC268EBDC2B876D27A2FB9CF66A6E50BAC6FD6C0,
	OneSignal_Init_m756C1C4D540B10908DD87EDC00BB106549112B0F,
	OneSignal_get_inFocusDisplayType_mE0666C0E7CE43F153D2A26E2AFD11F0FB5F17B69,
	OneSignal_set_inFocusDisplayType_m084C9176B6C93E57100FC5848CA97BC720A4A633,
	OneSignal_SetLogLevel_m9324491D9B1DDEDD181453B17B1AA273DF915F3E,
	OneSignal_SetLocationShared_m98084A0239B29EABECD6BCAA07AEFF2202130D20,
	OneSignal_SendTag_m1C5D597F997EBD115F2B901037CBFB4EFC4040E4,
	OneSignal_SendTags_mCE5CDE6089CB368FC0C303F7DC4E30F1EBCDEE42,
	OneSignal_GetTags_mC74C2D43B42A874852FBEF1A0FD13FED54CD8E7D,
	OneSignal_GetTags_m8B00BCE7E1F8AADE551D52F7A0BCB6C0F9F639B0,
	OneSignal_DeleteTag_m94ABCEEC21B47C29B878A59E80AFE735D78A3D77,
	OneSignal_DeleteTags_m2BF0EB88A6CB6977DF32513D137DC8DDF307CD1C,
	OneSignal_RegisterForPushNotifications_mB9EB3EEAC02944FECD02D5C7AA3569AE67670202,
	OneSignal_PromptForPushNotificationsWithUserResponse_mD80A75BB8F4387BCC612397BC3E0C7E8BEE1F566,
	OneSignal_IdsAvailable_m6600F642D4A9C99CCEEE2290104D9F24AD51AE55,
	OneSignal_IdsAvailable_m07CE6AC8351316D2D505A57911195084F07BE242,
	OneSignal_EnableVibrate_mD9484E8707D0802C58FF654EB698DB939F2FD4C5,
	OneSignal_EnableSound_m5AF4E3FC2A6D0774F1D192D8CFD60AD5682422E3,
	OneSignal_ClearOneSignalNotifications_m4A11A801404B3551FE3D66CD9B0FE5C0A5C1430C,
	OneSignal_SetSubscription_m02346B7CABDFF30191286C1C1F1CB2207D91C27F,
	OneSignal_SetEmail_m9D6036B52EC04B63633F2246A63BBA62935EF431,
	OneSignal_SetEmail_mDB63B941D34E857DA3E339F2380DD2154B8A5346,
	OneSignal_SetEmail_mFC2BADD5E33EF210F18A5924A577DD87C70F141F,
	OneSignal_SetEmail_mF118BB08E84801FFE6BAF038600AF60BB01C6F33,
	OneSignal_LogoutEmail_mAD57C11F270D50127675660BBFD4FFF91A4B075B,
	OneSignal_LogoutEmail_mA0E3DAD95867CF703269C5C66018E5718841535F,
	OneSignal_PostNotification_m409B352B00D71524060D6B8D198931F2B4A97C6E,
	OneSignal_PostNotification_m8F6EA72A155F841DD46CAD506780BF5BD48186D4,
	OneSignal_SyncHashedEmail_mDD8C55E8545AD4F8294A2A3D7B91AF8AC2A009E3,
	OneSignal_PromptLocation_m3F0FB69A3557999E3C897CC90358D5984596974C,
	OneSignal_GetPermissionSubscriptionState_m196DD43D7ADBA4EC7910A28AC98EC4283638D705,
	OneSignal_UserDidProvideConsent_mE38B5FA35EC4B213EF56A331A19AF0237464EF4E,
	OneSignal_UserProvidedConsent_m11C4DE224081FCD055D3BBEB968F69A345CB7294,
	OneSignal_SetRequiresUserPrivacyConsent_mA21F8EBF20F191CCC49E41AD22972EABB459BD1C,
	OneSignal_SetExternalUserId_mB27AC7D0A5BDD424089DDEDBE1403763E86B36D7,
	OneSignal_SetExternalUserId_m5B2F48672A5A215CA9AD6B04DCE2CE9FE607CDE3,
	OneSignal_SetExternalUserId_mC35359D2A1F14271D0FFA213F1ADD7E623B39FD0,
	OneSignal_RemoveExternalUserId_mE9298EC2DA19B7830BE40394FC38654871327D80,
	OneSignal_RemoveExternalUserId_mD73A51037F2E62C084259F547C3841AC9544C5E2,
	OneSignal_AddTrigger_mBAE1FAD885BA3FEB0D10CEDACC5FC37A7465EB18,
	OneSignal_AddTriggers_mA03F35E669AF74E62B3CF849788060B544232D91,
	OneSignal_RemoveTriggerForKey_m02A11CF3613CF6DC2C863465CC40ABF2D0519872,
	OneSignal_RemoveTriggersForKeys_mD1837A85C2CDB70C74EAB2D7FDB10BFC5BCEE579,
	OneSignal_GetTriggerValueForKey_mA92E59B666D00C9DC1940C62FDFB39131C8A8272,
	OneSignal_PauseInAppMessages_mD7C3888E14FF3D48BD577DA87410ECD768E04D0F,
	OneSignal_SendOutcome_mB7426D016FCA81DD2C525F157DDBC51F2A7DA846,
	OneSignal_SendOutcome_m911BCB79171A7A7494396248A578B74014CBC6FF,
	OneSignal_SendUniqueOutcome_m157008ED8BAF318262FCD739F9E26815B89CF000,
	OneSignal_SendUniqueOutcome_m578BD42BB28905D2417CFB3F0CE5BFD49A700244,
	OneSignal_SendOutcomeWithValue_mF89CDC5120ABE578C0E08BD751EB8E377EDC7B3B,
	OneSignal_SendOutcomeWithValue_mFE5BCC3868F5E0782E2ADBFBFA387062A5D6D977,
	OneSignal_DictionaryToNotification_mE2E37E68961355812CDA6FA5D0025B5370CAD9CB,
	OneSignal_onPushNotificationReceived_mFCA783622D0D5C77EC6FAEEE2E665F479EB35049,
	OneSignal_onPushNotificationOpened_mAD98C86D226B01E4031F850A73139C10929B7026,
	OneSignal_onIdsAvailable_mD7EECC2A7C7A2158B662AB206AD7783488B524A2,
	OneSignal_onTagsReceived_m18993620E5598A3CC6752DEDB218B90A40041AAB,
	OneSignal_onPostNotificationSuccess_mD9A78715025AED27A30C0E1A5481AEEC6DB77FDC,
	OneSignal_onPostNotificationFailed_mDC0AEB66201658B5FD2389B5EB688B9501B548BB,
	OneSignal_onExternalUserIdUpdateCompletion_m5AF831D28B8792BF3FA6F5B0E024C03BC726EB0C,
	OneSignal_onSetEmailSuccess_mE1392F54A63AFDF75DDA9038C30CE6D8284C9705,
	OneSignal_onSetEmailFailure_mF758E142632AE59BDBF4D66C49E8404837188E07,
	OneSignal_onLogoutEmailSuccess_mFAB276E591F9710E745E21691C4BCA81AFBB99E6,
	OneSignal_onLogoutEmailFailure_m45F82C231E566E9A27D32E4B06B858A8BC036039,
	OneSignal_onSendOutcomeSuccess_m1D02FAE7D613DCEEF8E61F0792DCEF40AFD2C5F4,
	OneSignal_onOSPermissionChanged_m0FE4E135E2AB5F3E3EFD81A32611DC99B8F23279,
	OneSignal_onOSSubscriptionChanged_m06B493BB2C90CF03DB24219CAB79B133F8F55DFD,
	OneSignal_onOSEmailSubscriptionChanged_m2F6F1CCEB4E7CF5BE68A007A67C78C63157CEEFF,
	OneSignal_onPromptForPushNotificationsWithUserResponse_mEA025C7C3ACCBBD2BE7560378EDC3A074A823B0E,
	OneSignal_onInAppMessageClicked_mDCE2937FB83BCAB69CAEE59CCF22E15C005E71A7,
	OneSignal_isValidDelegate_m6E92E6BD705588CB1BCCE46C57AE3956E9D340B5,
	OneSignal_isValidSuccessFailureDelegate_m45DCD71D2555940A8605074102FCBFC669A4E83E,
	OneSignal__ctor_m801417B63426639B5914424B29208D4D6015B061,
	OneSignal__cctor_mAADE56D96D1D52BEC9E490B7DB71931810B66094,
	NotificationReceived__ctor_m26939E166DA703D362C8526DFDBA04C37D584ED1,
	NotificationReceived_Invoke_m5C7278BB32535EEDD14D95287192CF05DB0FC156,
	OnExternalUserIdUpdateCompletion__ctor_m79ABE4E111F775A80E4BAF8FF210150401B6511D,
	OnExternalUserIdUpdateCompletion_Invoke_mE9FBD8E1231DB6B2C9418A4CBC46CA2D6FA99B6B,
	OnExternalUserIdUpdateCompletionFailure__ctor_m9DD9E8FDA2C491C738C5473AD63E132B8E200A1C,
	OnExternalUserIdUpdateCompletionFailure_Invoke_mB8BE22FB158894DC243E347ABB1CDB5B80E4CFB3,
	OnSetEmailSuccess__ctor_mD18EC284F506911FCD8EA2F0EE2A5BC01AD17D3F,
	OnSetEmailSuccess_Invoke_m77F99D61CA68EA36709DBF7125C94692118D4C62,
	OnSetEmailFailure__ctor_m74548167D2B299EB82C35F1F6E3A42D657D95C1B,
	OnSetEmailFailure_Invoke_mB49471E694DA5104BC76980F4C8C5639798527F9,
	OnLogoutEmailSuccess__ctor_m5CFAE4CF4900024D0C97E229F1F2F58AF1F7FE11,
	OnLogoutEmailSuccess_Invoke_m1249F522E9ACB6C6AEB1E0A650126D2E76A2E5FD,
	OnLogoutEmailFailure__ctor_mEBB0DC590B07FC2C9AADEACE95DC7A5E7709184A,
	OnLogoutEmailFailure_Invoke_m5433108F92A3791222E6C178AD2F6B92F0E6BCCA,
	OnSendOutcomeSuccess__ctor_m554F5443E2A9680B9CCEE53062EEC668F9256913,
	OnSendOutcomeSuccess_Invoke_mA05B4A944D533EBBA32B0EB4ED8EBA632B47F5DE,
	NotificationOpened__ctor_mC79F95BC7C9A3A2BDDBEAB20D2361924BDEBF124,
	NotificationOpened_Invoke_m59A3350E8B2917932D9183162DA3C32998E56416,
	InAppMessageClicked__ctor_m3252D848D868D3FE5E3156D716E2963342AEB7B5,
	InAppMessageClicked_Invoke_m66291C067D0E1521F8343E8ADC337ACB49CBD88E,
	IdsAvailableCallback__ctor_m71D5E40CEC5D26B5DD74C5E07CBF9792E0D5637D,
	IdsAvailableCallback_Invoke_mE0E2A2CC4C3E5B5CDBF8CACEA82129388941186C,
	TagsReceived__ctor_mF6EC62262B4715EF38513460952DB11AC141E3C3,
	TagsReceived_Invoke_m8FC2051A4C71C2FC59BF7791F2F4F4817324F6CE,
	PromptForPushNotificationsUserResponse__ctor_m48A40C88BD96CDFEC9C99C4319D1ACA2FE75FD94,
	PromptForPushNotificationsUserResponse_Invoke_mAB662FD998CF5BC2A5B565F794F3FED2EDF8A622,
	OnPostNotificationSuccess__ctor_mF74778FA8E1FD78FF66740AF8D9CC2182CEEB2BF,
	OnPostNotificationSuccess_Invoke_mC4E45D5B1D9E50AAB4CA72796F9E52FAD2817D93,
	OnPostNotificationFailure__ctor_m1BF93A8732046FBA52C46B45836BC2CB426109C3,
	OnPostNotificationFailure_Invoke_mCFEFAB9AB63633AD5BC9D31FC1A402BC8E821133,
	PermissionObservable__ctor_mD54147678F4093EA4B4D24952BBD1B9E5E21E932,
	PermissionObservable_Invoke_m7AE7C99E2B8A793B0D60ECA41D4E59D8CC426E33,
	SubscriptionObservable__ctor_m8ECFF54EA2FBA93379986097721FABF7838547A0,
	SubscriptionObservable_Invoke_mA5DABD1A12E6A7502F4E0BBDBB87B944A25ADC79,
	EmailSubscriptionObservable__ctor_mB179BF2540A04B27D46E5F7FD354481CE0826457,
	EmailSubscriptionObservable_Invoke_m475D1FD8E0E1FD296C7E6E188E23D1654FFA6146,
	UnityBuilder__ctor_m725634C7F0B07CC4E671B1F1394760E11168EB0C,
	OneSignalSettings_get_Instance_mDCEA4F3B9EBB5CD5F3F11C3634CA5B91FFFA1DFB,
	OneSignalSettings_SaveToAssetDatabase_mB01414C7361153704EE1300A467BC2CD7E05FA8C,
	OneSignalSettings__ctor_mB82C7D67D8B3CDE25AAB50367F7E163E8670531D,
	OneSignalSettings__cctor_m8923DC1A4DC9A307004299602A252EA66081D7B3,
	OneSignalUnityUtils_GetNewGuid_mE98FB8FC6067F7DA8AF1C46C9DA028581C037814,
	OSInAppMessageAction__ctor_m39592287776905704BF2D003AFBBFD345EAA08FB,
	OSNotification__ctor_m6E1749773FF3F7979E219FF4BEAD8927DA7FDB03,
	OSNotificationAction__ctor_m4B01FC919A0E58BACBF960E24B968C4AA926941A,
	OSNotificationOpenedResult__ctor_m6B1E36689167D0D75F60E3E62DC3C5D3A3ABB998,
	OSNotificationPayload__ctor_m0D83B11E3E859EE3DA9004AF697FCFAB451A9D8A,
	OSOutcomeEvent__ctor_m360584AB1C080E514D051EC88EB8C1AD499C9D48,
	OSOutcomeEvent__ctor_mB222B71F5172E1E97E05D7D9294D531241CCE18A,
	OSOutcomeEvent_SessionFromString_m52C6706CD3E9689F188DDD625AB39B35C5B7D713,
	Json_Deserialize_m4F6ECB958C77AF596B8666DDF7B41BAF2F0FCE10,
	Parser_IsWordBreak_mC565924147B4E1D11FB080EDD82622BDF66C53AF,
	Parser__ctor_m0D974AD82CE8E7310882721F293E4972E5CD8090,
	Parser_Parse_m59C9400B0758A82184794D7A39B43372E3AC4C32,
	Parser_Dispose_mD588BA3ED107251119D509FE3372D1136DB5B440,
	Parser_ParseObject_mBE726F3D8ADB6336205E86F5EEE8BDA4EE03D1EB,
	Parser_ParseArray_m16D44CA2E64AE8965E4ED1DBCE459E3997B06F20,
	Parser_ParseValue_mAE33A6DD3A48C5E0FE040821ECBFD5AECF0D86B1,
	Parser_ParseByToken_mE3D63D087A28F7BC97785DD4DDF40FC2E4FEDD5C,
	Parser_ParseString_mBE6784E1D3B5C0C99A9DC467C0813CC99D07665E,
	Parser_ParseNumber_m83A4A664E4C1C1279C792484EE6A76DC663DBEBE,
	Parser_EatWhitespace_mFD1B9AD7B2D5F43B8FBC1259F8619BEB268CC13D,
	Parser_get_PeekChar_mFA891FD35F5C092EC8ECE479F5F7C777AB06C70D,
	Parser_get_NextChar_mB85A1AC0571ED1AD9552464133635AE07C0DCDD7,
	Parser_get_NextWord_mE9D819CD9304F00733AC020146515F035E2706E9,
	Parser_get_NextToken_m934F15CF28460A3EB6DA4AF7944C7A0B38408F11,
};
static const int32_t s_InvokerIndices[195] = 
{
	2078,
	2078,
	2078,
	963,
	1681,
	1681,
	1681,
	1681,
	1681,
	1701,
	557,
	1681,
	2078,
	1701,
	557,
	367,
	963,
	1670,
	1701,
	2042,
	963,
	367,
	1681,
	2078,
	2078,
	2078,
	2078,
	2078,
	2078,
	2019,
	963,
	1681,
	1681,
	1681,
	1284,
	1701,
	1701,
	1701,
	2078,
	963,
	963,
	559,
	1284,
	1284,
	1284,
	3263,
	3263,
	3309,
	3263,
	3263,
	3309,
	3263,
	3263,
	3309,
	2900,
	3263,
	3263,
	3309,
	3287,
	3259,
	3038,
	3265,
	3060,
	3263,
	3309,
	3263,
	3263,
	3263,
	3309,
	3263,
	3309,
	3263,
	3265,
	3265,
	3309,
	3265,
	3263,
	2796,
	3060,
	2567,
	3309,
	3060,
	3263,
	2796,
	3263,
	3309,
	3293,
	3265,
	3300,
	3265,
	3263,
	3060,
	2567,
	3309,
	3263,
	3060,
	3263,
	3263,
	3263,
	3194,
	3265,
	3263,
	3060,
	3263,
	3060,
	3064,
	2802,
	1284,
	1681,
	1681,
	1681,
	1681,
	1681,
	1681,
	1681,
	1681,
	1681,
	1681,
	1681,
	1681,
	1681,
	1681,
	1681,
	1681,
	1681,
	1440,
	1440,
	2078,
	3309,
	962,
	1681,
	962,
	1681,
	962,
	1681,
	962,
	2078,
	962,
	1681,
	962,
	2078,
	962,
	1681,
	962,
	1681,
	962,
	1681,
	962,
	1681,
	962,
	963,
	962,
	1681,
	962,
	1701,
	962,
	1681,
	962,
	1681,
	962,
	1681,
	962,
	1681,
	962,
	1681,
	2078,
	3293,
	2078,
	2078,
	3309,
	3293,
	2078,
	2078,
	2078,
	2078,
	2078,
	2078,
	1681,
	1197,
	3194,
	3216,
	1681,
	3194,
	2078,
	2019,
	2019,
	2019,
	1281,
	2019,
	2019,
	2078,
	2005,
	2005,
	2019,
	2006,
};
extern const CustomAttributesCacheGenerator g_OneSignal_Core_AttributeGenerators[];
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_OneSignal_Core_CodeGenModule;
const Il2CppCodeGenModule g_OneSignal_Core_CodeGenModule = 
{
	"OneSignal.Core.dll",
	195,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	0,
	NULL,
	0,
	NULL,
	0,
	NULL,
	NULL,
	g_OneSignal_Core_AttributeGenerators,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
