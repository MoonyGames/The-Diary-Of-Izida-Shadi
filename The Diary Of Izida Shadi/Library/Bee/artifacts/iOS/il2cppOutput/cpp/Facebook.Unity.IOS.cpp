#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

struct IDictionary_2_t51DBA2F8AFDC8E5CC588729B12034B8C4D30B0AF;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct AuthenticationToken_t925F4C42BE7D08897D579F0A55D5682704237B8C;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IOSWrapper_t9D301EEF5592CFE824873A1C6C491423D21D93B7;
struct Profile_t80D50211DC9ED35561A8B96A45C9C79AF07E5CF7;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct String_t;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* AuthenticationToken_t925F4C42BE7D08897D579F0A55D5682704237B8C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_2_t51DBA2F8AFDC8E5CC588729B12034B8C4D30B0AF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Profile_t80D50211DC9ED35561A8B96A45C9C79AF07E5CF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral51921D99887DD5ED233F87333EF648AE91A8BF7C;
IL2CPP_EXTERN_C String_t* _stringLiteral678830C5836DCD590137DA23DA474CD589366649;
IL2CPP_EXTERN_C String_t* _stringLiteral81861CA7BE722F39376AE14F09BA19F73DB86EBF;
IL2CPP_EXTERN_C String_t* _stringLiteral84BD1476CFD81DB95A69E18C0BD3E1DE29BD872F;
IL2CPP_EXTERN_C String_t* _stringLiteral864CC40A200813B9284307874D1D3C8ACD06DE8C;
IL2CPP_EXTERN_C String_t* _stringLiteralCA1511AE7356E5E0E5B6B5905112292E8DF67CB2;
IL2CPP_EXTERN_C String_t* _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F;
IL2CPP_EXTERN_C String_t* _stringLiteralDFB4E90A95CCF1967874568BF14CC0DD2FBA9D0D;
IL2CPP_EXTERN_C String_t* _stringLiteralF7F2EA94F25E42499DF1BBEA8E07B2BB10492332;
IL2CPP_EXTERN_C String_t* _stringLiteralFB93E07C14A0B1974E643326E4D9D107C343190E;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct U3CModuleU3E_tDF3F712C9B12C7E769403819A8325A62B3009310 
{
};
struct AuthenticationToken_t925F4C42BE7D08897D579F0A55D5682704237B8C  : public RuntimeObject
{
	String_t* ___U3CTokenStringU3Ek__BackingField;
	String_t* ___U3CNonceU3Ek__BackingField;
};
struct IOSWrapper_t9D301EEF5592CFE824873A1C6C491423D21D93B7  : public RuntimeObject
{
};
struct Profile_t80D50211DC9ED35561A8B96A45C9C79AF07E5CF7  : public RuntimeObject
{
	String_t* ___U3CUserIDU3Ek__BackingField;
	String_t* ___U3CFirstNameU3Ek__BackingField;
	String_t* ___U3CMiddleNameU3Ek__BackingField;
	String_t* ___U3CLastNameU3Ek__BackingField;
	String_t* ___U3CNameU3Ek__BackingField;
	String_t* ___U3CEmailU3Ek__BackingField;
	String_t* ___U3CImageURLU3Ek__BackingField;
	String_t* ___U3CLinkURLU3Ek__BackingField;
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
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	double ___m_value;
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
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
struct Exception_t  : public RuntimeObject
{
	String_t* ____className;
	String_t* ____message;
	RuntimeObject* ____data;
	Exception_t* ____innerException;
	String_t* ____helpURL;
	RuntimeObject* ____stackTrace;
	String_t* ____stackTraceString;
	String_t* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	RuntimeObject* ____dynamicMethods;
	int32_t ____HResult;
	String_t* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_pinvoke
{
	char* ____className;
	char* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_pinvoke* ____innerException;
	char* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	char* ____stackTraceString;
	char* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	char* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className;
	Il2CppChar* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_com* ____innerException;
	Il2CppChar* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	Il2CppChar* ____stackTraceString;
	Il2CppChar* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	Il2CppChar* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
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
struct Exception_t_StaticFields
{
	RuntimeObject* ___s_EDILock;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};



IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWrapper_IOSFBInit_m838A4505F5D733379585536CAF8B9BCA6162ADDE (String_t* ___0_appId, bool ___1_frictionlessRequests, String_t* ___2_urlSuffix, String_t* ___3_unityUserAgentSuffix, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWrapper_IOSFBLoginWithTrackingPreference_m701FFF9F59A1A14A5E0EE66C1F823739D1EB2E87 (int32_t ___0_requestId, String_t* ___1_scope, String_t* ___2_tracking, String_t* ___3_nonce, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWrapper_IOSFBLogInWithReadPermissions_mB34691C78017933D761916FBA182A385D9FD053F (int32_t ___0_requestId, String_t* ___1_scope, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWrapper_IOSFBLogInWithPublishPermissions_mCD422E67B3765FE511CF009D6B7461A71E6B42CC (int32_t ___0_requestId, String_t* ___1_scope, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWrapper_IOSFBLogOut_mB4504C644CC515891ED55400F8BCA945D4A220F2 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWrapper_IOSFBSetPushNotificationsDeviceTokenString_mB7702CD4D0A937EAE145EE3A1D2D3F1E3DDBF20F (String_t* ___0_token, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWrapper_IOSFBSetShareDialogMode_m1976399FBB502613CF61A5253BA06F30775050B1 (int32_t ___0_mode, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWrapper_IOSFBShareLink_m070589B9AC5DF13F55C1149931C5757144FCC8AE (int32_t ___0_requestId, String_t* ___1_contentURL, String_t* ___2_contentTitle, String_t* ___3_contentDescription, String_t* ___4_photoURL, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWrapper_IOSFBFeedShare_m8F971CA853871325A5EB03C17BF096AFD4B6E55B (int32_t ___0_requestId, String_t* ___1_toId, String_t* ___2_link, String_t* ___3_linkName, String_t* ___4_linkCaption, String_t* ___5_linkDescription, String_t* ___6_picture, String_t* ___7_mediaSource, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWrapper_IOSFBAppRequest_m3D3375FA27CD097455F0CE514F74856039086517 (int32_t ___0_requestId, String_t* ___1_message, String_t* ___2_actionType, String_t* ___3_objectId, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___4_to, int32_t ___5_toLength, String_t* ___6_filters, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___7_excludeIds, int32_t ___8_excludeIdsLength, bool ___9_hasMaxRecipients, int32_t ___10_maxRecipients, String_t* ___11_data, String_t* ___12_title, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWrapper_IOSFBOpenGamingServicesFriendFinder_m70B856B87DF5C636A1CD0B510E06468C74B4B962 (int32_t ___0_requestID, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWrapper_IOSFBAppEventsActivateApp_m1AD14BA6261EB488D70C384403F1D9FD14ADA3B1 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWrapper_IOSFBAppEventsLogEvent_mE19C47E6EA68B9066709213EAEF7CF75EA1DFE93 (String_t* ___0_logEvent, double ___1_valueToSum, int32_t ___2_numParams, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___3_paramKeys, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___4_paramVals, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWrapper_IOSFBAppEventsLogPurchase_m142BD978E0BC2239CCA31849718B5876EF97AAC9 (double ___0_logPurchase, String_t* ___1_currency, int32_t ___2_numParams, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___3_paramKeys, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___4_paramVals, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWrapper_IOSFBAppEventsSetLimitEventUsage_mBBF2B67C40305C8467F4DF1AF624C73BD806CF7F (bool ___0_limitEventUsage, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWrapper_IOSFBAutoLogAppEventsEnabled_m1712974AAF544BB464751466332FB77DE94D7D32 (bool ___0_autoLogAppEventsEnabled, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWrapper_IOSFBAdvertiserIDCollectionEnabled_m080CBD49F7710BEDCEA8669CA75C547DEA831713 (bool ___0_advertiserIDCollectionEnabledID, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IOSWrapper_IOSFBAdvertiserTrackingEnabled_m68235B6D17023A9803533429F708C9B49A3B71ED (bool ___0_advertiserTrackingEnabled, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWrapper_IOSFBGetAppLink_mC9FCD7EA67112E36A5AA014A7237418353BBEA73 (int32_t ___0_requestID, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* IOSWrapper_IOSFBSdkVersion_mA0987144389AC4F69AF5B3985C70CF37BDB6ACD4 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWrapper_IOSFBSetUserID_mA9B7607A431365C4F781D275E60147A7DE76463E (String_t* ___0_userID, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* IOSWrapper_IOSFBGetUserID_m710C789FADEA07E41A824B054083C5F0BB5803ED (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWrapper_IOSFBUpdateUserProperties_m494DCFEF0F484141CDA72186748DE38BC841D637 (int32_t ___0_numParams, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___1_paramKeys, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___2_paramVals, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWrapper_IOSFBSetDataProcessingOptions_m31D5EB099BE8AA8AFB86E6C38545A6551FFEE291 (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_options, int32_t ___1_numOptions, int32_t ___2_country, int32_t ___3_state, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* IOSWrapper_IOSFBCurrentAuthenticationToken_m8AB2AEFC600EF331B2B79734849F026580E64F08 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Utilities_ParseStringDictionaryFromString_mC44A9B19967AC7A42BD9038BFB475AC8700A8AB5 (String_t* ___0_input, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationToken__ctor_mA58DD7EA8924303C420A2A0451E2E2339B1793EC (AuthenticationToken_t925F4C42BE7D08897D579F0A55D5682704237B8C* __this, String_t* ___0_tokenString, String_t* ___1_nonce, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* IOSWrapper_IOSFBCurrentProfile_mE372B7D01BE1E15248EA959CD32F291F23632A20 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Profile__ctor_mDCD27BEE3ADCA8D1D6EE0216F6EF22023D96E84F (Profile_t80D50211DC9ED35561A8B96A45C9C79AF07E5CF7* __this, String_t* ___0_userID, String_t* ___1_firstName, String_t* ___2_middleName, String_t* ___3_lastName, String_t* ___4_name, String_t* ___5_email, String_t* ___6_imageURL, String_t* ___7_linkURL, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWrapper_IOSFBUploadImageToMediaLibrary_m9C45F2A2B0DF4138B0C57E37EF4B48C7DFFAF10C (int32_t ___0_requestID, String_t* ___1_caption, String_t* ___2_imageUri, bool ___3_shouldLaunchMediaDialog, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWrapper_IOSFBUploadVideoToMediaLibrary_mEE5CD00E5A2757F7B3E5F1F8B77B550F47EF906F (int32_t ___0_requestID, String_t* ___1_caption, String_t* ___2_videoUri, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWrapper_IOSFBFetchDeferredAppLink_mF91A4ACE5AD44690E38B44BEEC2B09AB9E2FB1A3 (int32_t ___0_requestID, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWrapper_IOSFBRefreshCurrentAccessToken_m3492C4148F576370C44A9EEEDA5992190641E25C (int32_t ___0_requestID, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C void DEFAULT_CALL IOSFBInit(char*, int32_t, char*, char*);
IL2CPP_EXTERN_C void DEFAULT_CALL IOSFBLogInWithReadPermissions(int32_t, char*);
IL2CPP_EXTERN_C void DEFAULT_CALL IOSFBLoginWithTrackingPreference(int32_t, char*, char*, char*);
IL2CPP_EXTERN_C void DEFAULT_CALL IOSFBLogInWithPublishPermissions(int32_t, char*);
IL2CPP_EXTERN_C void DEFAULT_CALL IOSFBLogOut();
IL2CPP_EXTERN_C void DEFAULT_CALL IOSFBSetPushNotificationsDeviceTokenString(char*);
IL2CPP_EXTERN_C void DEFAULT_CALL IOSFBSetShareDialogMode(int32_t);
IL2CPP_EXTERN_C void DEFAULT_CALL IOSFBShareLink(int32_t, char*, char*, char*, char*);
IL2CPP_EXTERN_C void DEFAULT_CALL IOSFBFeedShare(int32_t, char*, char*, char*, char*, char*, char*, char*);
IL2CPP_EXTERN_C void DEFAULT_CALL IOSFBAppRequest(int32_t, char*, char*, char*, char**, int32_t, char*, char**, int32_t, int32_t, int32_t, char*, char*);
IL2CPP_EXTERN_C void DEFAULT_CALL IOSFBAppEventsActivateApp();
IL2CPP_EXTERN_C void DEFAULT_CALL IOSFBAppEventsLogEvent(char*, double, int32_t, char**, char**);
IL2CPP_EXTERN_C void DEFAULT_CALL IOSFBAppEventsLogPurchase(double, char*, int32_t, char**, char**);
IL2CPP_EXTERN_C void DEFAULT_CALL IOSFBAppEventsSetLimitEventUsage(int32_t);
IL2CPP_EXTERN_C void DEFAULT_CALL IOSFBAutoLogAppEventsEnabled(int32_t);
IL2CPP_EXTERN_C void DEFAULT_CALL IOSFBAdvertiserIDCollectionEnabled(int32_t);
IL2CPP_EXTERN_C int32_t DEFAULT_CALL IOSFBAdvertiserTrackingEnabled(int32_t);
IL2CPP_EXTERN_C void DEFAULT_CALL IOSFBGetAppLink(int32_t);
IL2CPP_EXTERN_C char* DEFAULT_CALL IOSFBSdkVersion();
IL2CPP_EXTERN_C void DEFAULT_CALL IOSFBFetchDeferredAppLink(int32_t);
IL2CPP_EXTERN_C void DEFAULT_CALL IOSFBRefreshCurrentAccessToken(int32_t);
IL2CPP_EXTERN_C void DEFAULT_CALL IOSFBSetUserID(char*);
IL2CPP_EXTERN_C void DEFAULT_CALL IOSFBOpenGamingServicesFriendFinder(int32_t);
IL2CPP_EXTERN_C void DEFAULT_CALL IOSFBUploadImageToMediaLibrary(int32_t, char*, char*, int32_t);
IL2CPP_EXTERN_C void DEFAULT_CALL IOSFBUploadVideoToMediaLibrary(int32_t, char*, char*);
IL2CPP_EXTERN_C char* DEFAULT_CALL IOSFBGetUserID();
IL2CPP_EXTERN_C void DEFAULT_CALL IOSFBSetDataProcessingOptions(char**, int32_t, int32_t, int32_t);
IL2CPP_EXTERN_C void DEFAULT_CALL IOSFBUpdateUserProperties(int32_t, char**, char**);
IL2CPP_EXTERN_C char* DEFAULT_CALL IOSFBCurrentAuthenticationToken();
IL2CPP_EXTERN_C char* DEFAULT_CALL IOSFBCurrentProfile();
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWrapper_Init_m4C9C44EF91B27E93CD96E325DEC43512DCBD76F8 (IOSWrapper_t9D301EEF5592CFE824873A1C6C491423D21D93B7* __this, String_t* ___0_appId, bool ___1_frictionlessRequests, String_t* ___2_urlSuffix, String_t* ___3_unityUserAgentSuffix, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_appId;
		bool L_1 = ___1_frictionlessRequests;
		String_t* L_2 = ___2_urlSuffix;
		String_t* L_3 = ___3_unityUserAgentSuffix;
		IOSWrapper_IOSFBInit_m838A4505F5D733379585536CAF8B9BCA6162ADDE(L_0, L_1, L_2, L_3, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWrapper_LoginWithTrackingPreference_m288F211613DC218CE2A58288BA73552D3EB59DCE (IOSWrapper_t9D301EEF5592CFE824873A1C6C491423D21D93B7* __this, int32_t ___0_requestId, String_t* ___1_scope, String_t* ___2_tracking, String_t* ___3_nonce, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_requestId;
		String_t* L_1 = ___1_scope;
		String_t* L_2 = ___2_tracking;
		String_t* L_3 = ___3_nonce;
		IOSWrapper_IOSFBLoginWithTrackingPreference_m701FFF9F59A1A14A5E0EE66C1F823739D1EB2E87(L_0, L_1, L_2, L_3, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWrapper_LogInWithReadPermissions_m3D335EF95F749274F83D0FD20B59BCF5095EFE70 (IOSWrapper_t9D301EEF5592CFE824873A1C6C491423D21D93B7* __this, int32_t ___0_requestId, String_t* ___1_scope, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_requestId;
		String_t* L_1 = ___1_scope;
		IOSWrapper_IOSFBLogInWithReadPermissions_mB34691C78017933D761916FBA182A385D9FD053F(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWrapper_LogInWithPublishPermissions_m9DAF9557AD6C42DCF2FB1F8EE2BDCC9FC2DBCDF7 (IOSWrapper_t9D301EEF5592CFE824873A1C6C491423D21D93B7* __this, int32_t ___0_requestId, String_t* ___1_scope, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_requestId;
		String_t* L_1 = ___1_scope;
		IOSWrapper_IOSFBLogInWithPublishPermissions_mCD422E67B3765FE511CF009D6B7461A71E6B42CC(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWrapper_LogOut_m67FFB90622E00A6269723C7A947922BA557D6878 (IOSWrapper_t9D301EEF5592CFE824873A1C6C491423D21D93B7* __this, const RuntimeMethod* method) 
{
	{
		IOSWrapper_IOSFBLogOut_mB4504C644CC515891ED55400F8BCA945D4A220F2(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWrapper_SetPushNotificationsDeviceTokenString_m11C7729325ED7F3A0EA95A38FE10D9EED7708E29 (IOSWrapper_t9D301EEF5592CFE824873A1C6C491423D21D93B7* __this, String_t* ___0_token, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_token;
		IOSWrapper_IOSFBSetPushNotificationsDeviceTokenString_mB7702CD4D0A937EAE145EE3A1D2D3F1E3DDBF20F(L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWrapper_SetShareDialogMode_mB03360C723338B674180378A26E8F1EFDFE2177F (IOSWrapper_t9D301EEF5592CFE824873A1C6C491423D21D93B7* __this, int32_t ___0_mode, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_mode;
		IOSWrapper_IOSFBSetShareDialogMode_m1976399FBB502613CF61A5253BA06F30775050B1(L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWrapper_ShareLink_mD4AF94BB22A1127A9BCB4230427F5FA1AD9CAF79 (IOSWrapper_t9D301EEF5592CFE824873A1C6C491423D21D93B7* __this, int32_t ___0_requestId, String_t* ___1_contentURL, String_t* ___2_contentTitle, String_t* ___3_contentDescription, String_t* ___4_photoURL, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_requestId;
		String_t* L_1 = ___1_contentURL;
		String_t* L_2 = ___2_contentTitle;
		String_t* L_3 = ___3_contentDescription;
		String_t* L_4 = ___4_photoURL;
		IOSWrapper_IOSFBShareLink_m070589B9AC5DF13F55C1149931C5757144FCC8AE(L_0, L_1, L_2, L_3, L_4, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWrapper_FeedShare_mEE5079EB1CF3D3C09B2761CB3C06D33E22504BEB (IOSWrapper_t9D301EEF5592CFE824873A1C6C491423D21D93B7* __this, int32_t ___0_requestId, String_t* ___1_toId, String_t* ___2_link, String_t* ___3_linkName, String_t* ___4_linkCaption, String_t* ___5_linkDescription, String_t* ___6_picture, String_t* ___7_mediaSource, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_requestId;
		String_t* L_1 = ___1_toId;
		String_t* L_2 = ___2_link;
		String_t* L_3 = ___3_linkName;
		String_t* L_4 = ___4_linkCaption;
		String_t* L_5 = ___5_linkDescription;
		String_t* L_6 = ___6_picture;
		String_t* L_7 = ___7_mediaSource;
		IOSWrapper_IOSFBFeedShare_m8F971CA853871325A5EB03C17BF096AFD4B6E55B(L_0, L_1, L_2, L_3, L_4, L_5, L_6, L_7, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWrapper_AppRequest_mE2ED60F489D161478AEBD01BA83FEA329477023F (IOSWrapper_t9D301EEF5592CFE824873A1C6C491423D21D93B7* __this, int32_t ___0_requestId, String_t* ___1_message, String_t* ___2_actionType, String_t* ___3_objectId, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___4_to, int32_t ___5_toLength, String_t* ___6_filters, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___7_excludeIds, int32_t ___8_excludeIdsLength, bool ___9_hasMaxRecipients, int32_t ___10_maxRecipients, String_t* ___11_data, String_t* ___12_title, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_requestId;
		String_t* L_1 = ___1_message;
		String_t* L_2 = ___2_actionType;
		String_t* L_3 = ___3_objectId;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = ___4_to;
		int32_t L_5 = ___5_toLength;
		String_t* L_6 = ___6_filters;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = ___7_excludeIds;
		int32_t L_8 = ___8_excludeIdsLength;
		bool L_9 = ___9_hasMaxRecipients;
		int32_t L_10 = ___10_maxRecipients;
		String_t* L_11 = ___11_data;
		String_t* L_12 = ___12_title;
		IOSWrapper_IOSFBAppRequest_m3D3375FA27CD097455F0CE514F74856039086517(L_0, L_1, L_2, L_3, L_4, L_5, L_6, L_7, L_8, L_9, L_10, L_11, L_12, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWrapper_OpenFriendFinderDialog_m15E925A856097A3C9C2846ABE35A771037D67E22 (IOSWrapper_t9D301EEF5592CFE824873A1C6C491423D21D93B7* __this, int32_t ___0_requestId, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_requestId;
		IOSWrapper_IOSFBOpenGamingServicesFriendFinder_m70B856B87DF5C636A1CD0B510E06468C74B4B962(L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWrapper_FBAppEventsActivateApp_mF184ADFDFED02CF0E84BA3082CCE0F632075E907 (IOSWrapper_t9D301EEF5592CFE824873A1C6C491423D21D93B7* __this, const RuntimeMethod* method) 
{
	{
		IOSWrapper_IOSFBAppEventsActivateApp_m1AD14BA6261EB488D70C384403F1D9FD14ADA3B1(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWrapper_LogAppEvent_m39C771B4E495F66A1D9314A78DAEF6CA5EB13AB0 (IOSWrapper_t9D301EEF5592CFE824873A1C6C491423D21D93B7* __this, String_t* ___0_logEvent, double ___1_valueToSum, int32_t ___2_numParams, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___3_paramKeys, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___4_paramVals, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_logEvent;
		double L_1 = ___1_valueToSum;
		int32_t L_2 = ___2_numParams;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = ___3_paramKeys;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = ___4_paramVals;
		IOSWrapper_IOSFBAppEventsLogEvent_mE19C47E6EA68B9066709213EAEF7CF75EA1DFE93(L_0, L_1, L_2, L_3, L_4, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWrapper_LogPurchaseAppEvent_m5A70AE55D72140A5FAA55D3FEDAD0BB6B59FCD73 (IOSWrapper_t9D301EEF5592CFE824873A1C6C491423D21D93B7* __this, double ___0_logPurchase, String_t* ___1_currency, int32_t ___2_numParams, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___3_paramKeys, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___4_paramVals, const RuntimeMethod* method) 
{
	{
		double L_0 = ___0_logPurchase;
		String_t* L_1 = ___1_currency;
		int32_t L_2 = ___2_numParams;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = ___3_paramKeys;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = ___4_paramVals;
		IOSWrapper_IOSFBAppEventsLogPurchase_m142BD978E0BC2239CCA31849718B5876EF97AAC9(L_0, L_1, L_2, L_3, L_4, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWrapper_FBAppEventsSetLimitEventUsage_mC2F1B049CD6AB38814E8AB387071FBE40ED7C879 (IOSWrapper_t9D301EEF5592CFE824873A1C6C491423D21D93B7* __this, bool ___0_limitEventUsage, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_limitEventUsage;
		IOSWrapper_IOSFBAppEventsSetLimitEventUsage_mBBF2B67C40305C8467F4DF1AF624C73BD806CF7F(L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWrapper_FBAutoLogAppEventsEnabled_mD94221CBCAEC74ED3B5AD37D4C8780B25D5E58FB (IOSWrapper_t9D301EEF5592CFE824873A1C6C491423D21D93B7* __this, bool ___0_autoLogAppEventsEnabled, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_autoLogAppEventsEnabled;
		IOSWrapper_IOSFBAutoLogAppEventsEnabled_m1712974AAF544BB464751466332FB77DE94D7D32(L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWrapper_FBAdvertiserIDCollectionEnabled_m88D77F948ECD2C3EB1CF478B6183EA109D6834AA (IOSWrapper_t9D301EEF5592CFE824873A1C6C491423D21D93B7* __this, bool ___0_advertiserIDCollectionEnabled, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_advertiserIDCollectionEnabled;
		IOSWrapper_IOSFBAdvertiserIDCollectionEnabled_m080CBD49F7710BEDCEA8669CA75C547DEA831713(L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IOSWrapper_FBAdvertiserTrackingEnabled_mC56467C91D02CD9BC8693DF0A02D1D39F96D94F4 (IOSWrapper_t9D301EEF5592CFE824873A1C6C491423D21D93B7* __this, bool ___0_advertiserTrackingEnabled, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_advertiserTrackingEnabled;
		bool L_1;
		L_1 = IOSWrapper_IOSFBAdvertiserTrackingEnabled_m68235B6D17023A9803533429F708C9B49A3B71ED(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWrapper_GetAppLink_mFEA955568C65C67FD788FFAF41F2825D9F3C8C08 (IOSWrapper_t9D301EEF5592CFE824873A1C6C491423D21D93B7* __this, int32_t ___0_requestId, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_requestId;
		IOSWrapper_IOSFBGetAppLink_mC9FCD7EA67112E36A5AA014A7237418353BBEA73(L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* IOSWrapper_FBSdkVersion_m78397508A84BD0759B3DA30739CAF606F2E20022 (IOSWrapper_t9D301EEF5592CFE824873A1C6C491423D21D93B7* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0;
		L_0 = IOSWrapper_IOSFBSdkVersion_mA0987144389AC4F69AF5B3985C70CF37BDB6ACD4(NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWrapper_FBSetUserID_m3F4BF3A50226802185025AB536604A862A2FD2EE (IOSWrapper_t9D301EEF5592CFE824873A1C6C491423D21D93B7* __this, String_t* ___0_userID, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_userID;
		IOSWrapper_IOSFBSetUserID_mA9B7607A431365C4F781D275E60147A7DE76463E(L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* IOSWrapper_FBGetUserID_m33A356BD7888D4B1621EC199B1A75742214C3A7E (IOSWrapper_t9D301EEF5592CFE824873A1C6C491423D21D93B7* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0;
		L_0 = IOSWrapper_IOSFBGetUserID_m710C789FADEA07E41A824B054083C5F0BB5803ED(NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWrapper_UpdateUserProperties_mA716386C09C482E7067FB937BA6F6CEE70DC5C8B (IOSWrapper_t9D301EEF5592CFE824873A1C6C491423D21D93B7* __this, int32_t ___0_numParams, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___1_paramKeys, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___2_paramVals, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_numParams;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = ___1_paramKeys;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = ___2_paramVals;
		IOSWrapper_IOSFBUpdateUserProperties_m494DCFEF0F484141CDA72186748DE38BC841D637(L_0, L_1, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWrapper_SetDataProcessingOptions_m6A17AF337BAF81CC5B1CB30A76A4538DE7A193B3 (IOSWrapper_t9D301EEF5592CFE824873A1C6C491423D21D93B7* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_options, int32_t ___1_country, int32_t ___2_state, const RuntimeMethod* method) 
{
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = ___0_options;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = ___0_options;
		NullCheck(L_1);
		int32_t L_2 = ___1_country;
		int32_t L_3 = ___2_state;
		IOSWrapper_IOSFBSetDataProcessingOptions_m31D5EB099BE8AA8AFB86E6C38545A6551FFEE291(L_0, ((int32_t)(((RuntimeArray*)L_1)->max_length)), L_2, L_3, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AuthenticationToken_t925F4C42BE7D08897D579F0A55D5682704237B8C* IOSWrapper_CurrentAuthenticationToken_m4DF690AB38748425E8C28A05C0EB5A8EDF254D31 (IOSWrapper_t9D301EEF5592CFE824873A1C6C491423D21D93B7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthenticationToken_t925F4C42BE7D08897D579F0A55D5682704237B8C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t51DBA2F8AFDC8E5CC588729B12034B8C4D30B0AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDFB4E90A95CCF1967874568BF14CC0DD2FBA9D0D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB93E07C14A0B1974E643326E4D9D107C343190E);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	AuthenticationToken_t925F4C42BE7D08897D579F0A55D5682704237B8C* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		String_t* L_0;
		L_0 = IOSWrapper_IOSFBCurrentAuthenticationToken_m8AB2AEFC600EF331B2B79734849F026580E64F08(NULL);
		V_0 = L_0;
		String_t* L_1 = V_0;
		bool L_2;
		L_2 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_1, NULL);
		if (!L_2)
		{
			goto IL_0010;
		}
	}
	{
		return (AuthenticationToken_t925F4C42BE7D08897D579F0A55D5682704237B8C*)NULL;
	}

IL_0010:
	{
	}
	try
	{
		String_t* L_3 = V_0;
		RuntimeObject* L_4;
		L_4 = Utilities_ParseStringDictionaryFromString_mC44A9B19967AC7A42BD9038BFB475AC8700A8AB5(L_3, NULL);
		RuntimeObject* L_5 = L_4;
		NullCheck(L_5);
		bool L_6;
		L_6 = InterfaceFuncInvoker2< bool, String_t*, String_t** >::Invoke(6, IDictionary_2_t51DBA2F8AFDC8E5CC588729B12034B8C4D30B0AF_il2cpp_TypeInfo_var, L_5, _stringLiteralDFB4E90A95CCF1967874568BF14CC0DD2FBA9D0D, (&V_1));
		NullCheck(L_5);
		bool L_7;
		L_7 = InterfaceFuncInvoker2< bool, String_t*, String_t** >::Invoke(6, IDictionary_2_t51DBA2F8AFDC8E5CC588729B12034B8C4D30B0AF_il2cpp_TypeInfo_var, L_5, _stringLiteralFB93E07C14A0B1974E643326E4D9D107C343190E, (&V_2));
		String_t* L_8 = V_1;
		String_t* L_9 = V_2;
		AuthenticationToken_t925F4C42BE7D08897D579F0A55D5682704237B8C* L_10 = (AuthenticationToken_t925F4C42BE7D08897D579F0A55D5682704237B8C*)il2cpp_codegen_object_new(AuthenticationToken_t925F4C42BE7D08897D579F0A55D5682704237B8C_il2cpp_TypeInfo_var);
		AuthenticationToken__ctor_mA58DD7EA8924303C420A2A0451E2E2339B1793EC(L_10, L_8, L_9, NULL);
		V_3 = L_10;
		goto IL_0041;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{
		V_3 = (AuthenticationToken_t925F4C42BE7D08897D579F0A55D5682704237B8C*)NULL;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0041;
	}

IL_0041:
	{
		AuthenticationToken_t925F4C42BE7D08897D579F0A55D5682704237B8C* L_11 = V_3;
		return L_11;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Profile_t80D50211DC9ED35561A8B96A45C9C79AF07E5CF7* IOSWrapper_CurrentProfile_m8B45D0A2BD6090B82130E1BA75799D354FE0808B (IOSWrapper_t9D301EEF5592CFE824873A1C6C491423D21D93B7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t51DBA2F8AFDC8E5CC588729B12034B8C4D30B0AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Profile_t80D50211DC9ED35561A8B96A45C9C79AF07E5CF7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral51921D99887DD5ED233F87333EF648AE91A8BF7C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral678830C5836DCD590137DA23DA474CD589366649);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral81861CA7BE722F39376AE14F09BA19F73DB86EBF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral84BD1476CFD81DB95A69E18C0BD3E1DE29BD872F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral864CC40A200813B9284307874D1D3C8ACD06DE8C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCA1511AE7356E5E0E5B6B5905112292E8DF67CB2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF7F2EA94F25E42499DF1BBEA8E07B2BB10492332);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	String_t* V_4 = NULL;
	String_t* V_5 = NULL;
	String_t* V_6 = NULL;
	String_t* V_7 = NULL;
	String_t* V_8 = NULL;
	Profile_t80D50211DC9ED35561A8B96A45C9C79AF07E5CF7* V_9 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		String_t* L_0;
		L_0 = IOSWrapper_IOSFBCurrentProfile_mE372B7D01BE1E15248EA959CD32F291F23632A20(NULL);
		V_0 = L_0;
		String_t* L_1 = V_0;
		bool L_2;
		L_2 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_1, NULL);
		if (!L_2)
		{
			goto IL_0010;
		}
	}
	{
		return (Profile_t80D50211DC9ED35561A8B96A45C9C79AF07E5CF7*)NULL;
	}

IL_0010:
	{
	}
	try
	{
		String_t* L_3 = V_0;
		RuntimeObject* L_4;
		L_4 = Utilities_ParseStringDictionaryFromString_mC44A9B19967AC7A42BD9038BFB475AC8700A8AB5(L_3, NULL);
		RuntimeObject* L_5 = L_4;
		NullCheck(L_5);
		bool L_6;
		L_6 = InterfaceFuncInvoker2< bool, String_t*, String_t** >::Invoke(6, IDictionary_2_t51DBA2F8AFDC8E5CC588729B12034B8C4D30B0AF_il2cpp_TypeInfo_var, L_5, _stringLiteralF7F2EA94F25E42499DF1BBEA8E07B2BB10492332, (&V_1));
		RuntimeObject* L_7 = L_5;
		NullCheck(L_7);
		bool L_8;
		L_8 = InterfaceFuncInvoker2< bool, String_t*, String_t** >::Invoke(6, IDictionary_2_t51DBA2F8AFDC8E5CC588729B12034B8C4D30B0AF_il2cpp_TypeInfo_var, L_7, _stringLiteralCA1511AE7356E5E0E5B6B5905112292E8DF67CB2, (&V_2));
		RuntimeObject* L_9 = L_7;
		NullCheck(L_9);
		bool L_10;
		L_10 = InterfaceFuncInvoker2< bool, String_t*, String_t** >::Invoke(6, IDictionary_2_t51DBA2F8AFDC8E5CC588729B12034B8C4D30B0AF_il2cpp_TypeInfo_var, L_9, _stringLiteral864CC40A200813B9284307874D1D3C8ACD06DE8C, (&V_3));
		RuntimeObject* L_11 = L_9;
		NullCheck(L_11);
		bool L_12;
		L_12 = InterfaceFuncInvoker2< bool, String_t*, String_t** >::Invoke(6, IDictionary_2_t51DBA2F8AFDC8E5CC588729B12034B8C4D30B0AF_il2cpp_TypeInfo_var, L_11, _stringLiteral678830C5836DCD590137DA23DA474CD589366649, (&V_4));
		RuntimeObject* L_13 = L_11;
		NullCheck(L_13);
		bool L_14;
		L_14 = InterfaceFuncInvoker2< bool, String_t*, String_t** >::Invoke(6, IDictionary_2_t51DBA2F8AFDC8E5CC588729B12034B8C4D30B0AF_il2cpp_TypeInfo_var, L_13, _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F, (&V_5));
		RuntimeObject* L_15 = L_13;
		NullCheck(L_15);
		bool L_16;
		L_16 = InterfaceFuncInvoker2< bool, String_t*, String_t** >::Invoke(6, IDictionary_2_t51DBA2F8AFDC8E5CC588729B12034B8C4D30B0AF_il2cpp_TypeInfo_var, L_15, _stringLiteral51921D99887DD5ED233F87333EF648AE91A8BF7C, (&V_6));
		RuntimeObject* L_17 = L_15;
		NullCheck(L_17);
		bool L_18;
		L_18 = InterfaceFuncInvoker2< bool, String_t*, String_t** >::Invoke(6, IDictionary_2_t51DBA2F8AFDC8E5CC588729B12034B8C4D30B0AF_il2cpp_TypeInfo_var, L_17, _stringLiteral84BD1476CFD81DB95A69E18C0BD3E1DE29BD872F, (&V_7));
		NullCheck(L_17);
		bool L_19;
		L_19 = InterfaceFuncInvoker2< bool, String_t*, String_t** >::Invoke(6, IDictionary_2_t51DBA2F8AFDC8E5CC588729B12034B8C4D30B0AF_il2cpp_TypeInfo_var, L_17, _stringLiteral81861CA7BE722F39376AE14F09BA19F73DB86EBF, (&V_8));
		String_t* L_20 = V_1;
		String_t* L_21 = V_2;
		String_t* L_22 = V_3;
		String_t* L_23 = V_4;
		String_t* L_24 = V_5;
		String_t* L_25 = V_6;
		String_t* L_26 = V_7;
		String_t* L_27 = V_8;
		Profile_t80D50211DC9ED35561A8B96A45C9C79AF07E5CF7* L_28 = (Profile_t80D50211DC9ED35561A8B96A45C9C79AF07E5CF7*)il2cpp_codegen_object_new(Profile_t80D50211DC9ED35561A8B96A45C9C79AF07E5CF7_il2cpp_TypeInfo_var);
		Profile__ctor_mDCD27BEE3ADCA8D1D6EE0216F6EF22023D96E84F(L_28, L_20, L_21, L_22, L_23, L_24, L_25, L_26, L_27, NULL);
		V_9 = L_28;
		goto IL_00a2;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_009c;
		}
		throw e;
	}

CATCH_009c:
	{
		V_9 = (Profile_t80D50211DC9ED35561A8B96A45C9C79AF07E5CF7*)NULL;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00a2;
	}

IL_00a2:
	{
		Profile_t80D50211DC9ED35561A8B96A45C9C79AF07E5CF7* L_29 = V_9;
		return L_29;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWrapper_UploadImageToMediaLibrary_m448E4E4650C7A0AE1678EF6A24B415385F144C75 (IOSWrapper_t9D301EEF5592CFE824873A1C6C491423D21D93B7* __this, int32_t ___0_requestId, String_t* ___1_caption, String_t* ___2_imageUri, bool ___3_shouldLaunchMediaDialog, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_requestId;
		String_t* L_1 = ___1_caption;
		String_t* L_2 = ___2_imageUri;
		bool L_3 = ___3_shouldLaunchMediaDialog;
		IOSWrapper_IOSFBUploadImageToMediaLibrary_m9C45F2A2B0DF4138B0C57E37EF4B48C7DFFAF10C(L_0, L_1, L_2, L_3, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWrapper_UploadVideoToMediaLibrary_m013EC28EEB804911C5C0950DBAE2E2163E078087 (IOSWrapper_t9D301EEF5592CFE824873A1C6C491423D21D93B7* __this, int32_t ___0_requestId, String_t* ___1_caption, String_t* ___2_videoUri, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_requestId;
		String_t* L_1 = ___1_caption;
		String_t* L_2 = ___2_videoUri;
		IOSWrapper_IOSFBUploadVideoToMediaLibrary_mEE5CD00E5A2757F7B3E5F1F8B77B550F47EF906F(L_0, L_1, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWrapper_FetchDeferredAppLink_m8C284B4FAED517AE8A4537476E2DF822BF164AF1 (IOSWrapper_t9D301EEF5592CFE824873A1C6C491423D21D93B7* __this, int32_t ___0_requestId, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_requestId;
		IOSWrapper_IOSFBFetchDeferredAppLink_mF91A4ACE5AD44690E38B44BEEC2B09AB9E2FB1A3(L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWrapper_RefreshCurrentAccessToken_mB4836C566267D5CDC6ED912D264082EF9A81A7B5 (IOSWrapper_t9D301EEF5592CFE824873A1C6C491423D21D93B7* __this, int32_t ___0_requestId, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_requestId;
		IOSWrapper_IOSFBRefreshCurrentAccessToken_m3492C4148F576370C44A9EEEDA5992190641E25C(L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWrapper_IOSFBInit_m838A4505F5D733379585536CAF8B9BCA6162ADDE (String_t* ___0_appId, bool ___1_frictionlessRequests, String_t* ___2_urlSuffix, String_t* ___3_unityUserAgentSuffix, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, int32_t, char*, char*);

	char* ____0_appId_marshaled = NULL;
	____0_appId_marshaled = il2cpp_codegen_marshal_string(___0_appId);

	char* ____2_urlSuffix_marshaled = NULL;
	____2_urlSuffix_marshaled = il2cpp_codegen_marshal_string(___2_urlSuffix);

	char* ____3_unityUserAgentSuffix_marshaled = NULL;
	____3_unityUserAgentSuffix_marshaled = il2cpp_codegen_marshal_string(___3_unityUserAgentSuffix);

	reinterpret_cast<PInvokeFunc>(IOSFBInit)(____0_appId_marshaled, static_cast<int32_t>(___1_frictionlessRequests), ____2_urlSuffix_marshaled, ____3_unityUserAgentSuffix_marshaled);

	il2cpp_codegen_marshal_free(____0_appId_marshaled);
	____0_appId_marshaled = NULL;

	il2cpp_codegen_marshal_free(____2_urlSuffix_marshaled);
	____2_urlSuffix_marshaled = NULL;

	il2cpp_codegen_marshal_free(____3_unityUserAgentSuffix_marshaled);
	____3_unityUserAgentSuffix_marshaled = NULL;

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWrapper_IOSFBLogInWithReadPermissions_mB34691C78017933D761916FBA182A385D9FD053F (int32_t ___0_requestId, String_t* ___1_scope, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t, char*);

	char* ____1_scope_marshaled = NULL;
	____1_scope_marshaled = il2cpp_codegen_marshal_string(___1_scope);

	reinterpret_cast<PInvokeFunc>(IOSFBLogInWithReadPermissions)(___0_requestId, ____1_scope_marshaled);

	il2cpp_codegen_marshal_free(____1_scope_marshaled);
	____1_scope_marshaled = NULL;

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWrapper_IOSFBLoginWithTrackingPreference_m701FFF9F59A1A14A5E0EE66C1F823739D1EB2E87 (int32_t ___0_requestId, String_t* ___1_scope, String_t* ___2_tracking, String_t* ___3_nonce, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t, char*, char*, char*);

	char* ____1_scope_marshaled = NULL;
	____1_scope_marshaled = il2cpp_codegen_marshal_string(___1_scope);

	char* ____2_tracking_marshaled = NULL;
	____2_tracking_marshaled = il2cpp_codegen_marshal_string(___2_tracking);

	char* ____3_nonce_marshaled = NULL;
	____3_nonce_marshaled = il2cpp_codegen_marshal_string(___3_nonce);

	reinterpret_cast<PInvokeFunc>(IOSFBLoginWithTrackingPreference)(___0_requestId, ____1_scope_marshaled, ____2_tracking_marshaled, ____3_nonce_marshaled);

	il2cpp_codegen_marshal_free(____1_scope_marshaled);
	____1_scope_marshaled = NULL;

	il2cpp_codegen_marshal_free(____2_tracking_marshaled);
	____2_tracking_marshaled = NULL;

	il2cpp_codegen_marshal_free(____3_nonce_marshaled);
	____3_nonce_marshaled = NULL;

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWrapper_IOSFBLogInWithPublishPermissions_mCD422E67B3765FE511CF009D6B7461A71E6B42CC (int32_t ___0_requestId, String_t* ___1_scope, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t, char*);

	char* ____1_scope_marshaled = NULL;
	____1_scope_marshaled = il2cpp_codegen_marshal_string(___1_scope);

	reinterpret_cast<PInvokeFunc>(IOSFBLogInWithPublishPermissions)(___0_requestId, ____1_scope_marshaled);

	il2cpp_codegen_marshal_free(____1_scope_marshaled);
	____1_scope_marshaled = NULL;

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWrapper_IOSFBLogOut_mB4504C644CC515891ED55400F8BCA945D4A220F2 (const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	reinterpret_cast<PInvokeFunc>(IOSFBLogOut)();

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWrapper_IOSFBSetPushNotificationsDeviceTokenString_mB7702CD4D0A937EAE145EE3A1D2D3F1E3DDBF20F (String_t* ___0_token, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);

	char* ____0_token_marshaled = NULL;
	____0_token_marshaled = il2cpp_codegen_marshal_string(___0_token);

	reinterpret_cast<PInvokeFunc>(IOSFBSetPushNotificationsDeviceTokenString)(____0_token_marshaled);

	il2cpp_codegen_marshal_free(____0_token_marshaled);
	____0_token_marshaled = NULL;

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWrapper_IOSFBSetShareDialogMode_m1976399FBB502613CF61A5253BA06F30775050B1 (int32_t ___0_mode, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);

	reinterpret_cast<PInvokeFunc>(IOSFBSetShareDialogMode)(___0_mode);

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWrapper_IOSFBShareLink_m070589B9AC5DF13F55C1149931C5757144FCC8AE (int32_t ___0_requestId, String_t* ___1_contentURL, String_t* ___2_contentTitle, String_t* ___3_contentDescription, String_t* ___4_photoURL, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t, char*, char*, char*, char*);

	char* ____1_contentURL_marshaled = NULL;
	____1_contentURL_marshaled = il2cpp_codegen_marshal_string(___1_contentURL);

	char* ____2_contentTitle_marshaled = NULL;
	____2_contentTitle_marshaled = il2cpp_codegen_marshal_string(___2_contentTitle);

	char* ____3_contentDescription_marshaled = NULL;
	____3_contentDescription_marshaled = il2cpp_codegen_marshal_string(___3_contentDescription);

	char* ____4_photoURL_marshaled = NULL;
	____4_photoURL_marshaled = il2cpp_codegen_marshal_string(___4_photoURL);

	reinterpret_cast<PInvokeFunc>(IOSFBShareLink)(___0_requestId, ____1_contentURL_marshaled, ____2_contentTitle_marshaled, ____3_contentDescription_marshaled, ____4_photoURL_marshaled);

	il2cpp_codegen_marshal_free(____1_contentURL_marshaled);
	____1_contentURL_marshaled = NULL;

	il2cpp_codegen_marshal_free(____2_contentTitle_marshaled);
	____2_contentTitle_marshaled = NULL;

	il2cpp_codegen_marshal_free(____3_contentDescription_marshaled);
	____3_contentDescription_marshaled = NULL;

	il2cpp_codegen_marshal_free(____4_photoURL_marshaled);
	____4_photoURL_marshaled = NULL;

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWrapper_IOSFBFeedShare_m8F971CA853871325A5EB03C17BF096AFD4B6E55B (int32_t ___0_requestId, String_t* ___1_toId, String_t* ___2_link, String_t* ___3_linkName, String_t* ___4_linkCaption, String_t* ___5_linkDescription, String_t* ___6_picture, String_t* ___7_mediaSource, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t, char*, char*, char*, char*, char*, char*, char*);

	char* ____1_toId_marshaled = NULL;
	____1_toId_marshaled = il2cpp_codegen_marshal_string(___1_toId);

	char* ____2_link_marshaled = NULL;
	____2_link_marshaled = il2cpp_codegen_marshal_string(___2_link);

	char* ____3_linkName_marshaled = NULL;
	____3_linkName_marshaled = il2cpp_codegen_marshal_string(___3_linkName);

	char* ____4_linkCaption_marshaled = NULL;
	____4_linkCaption_marshaled = il2cpp_codegen_marshal_string(___4_linkCaption);

	char* ____5_linkDescription_marshaled = NULL;
	____5_linkDescription_marshaled = il2cpp_codegen_marshal_string(___5_linkDescription);

	char* ____6_picture_marshaled = NULL;
	____6_picture_marshaled = il2cpp_codegen_marshal_string(___6_picture);

	char* ____7_mediaSource_marshaled = NULL;
	____7_mediaSource_marshaled = il2cpp_codegen_marshal_string(___7_mediaSource);

	reinterpret_cast<PInvokeFunc>(IOSFBFeedShare)(___0_requestId, ____1_toId_marshaled, ____2_link_marshaled, ____3_linkName_marshaled, ____4_linkCaption_marshaled, ____5_linkDescription_marshaled, ____6_picture_marshaled, ____7_mediaSource_marshaled);

	il2cpp_codegen_marshal_free(____1_toId_marshaled);
	____1_toId_marshaled = NULL;

	il2cpp_codegen_marshal_free(____2_link_marshaled);
	____2_link_marshaled = NULL;

	il2cpp_codegen_marshal_free(____3_linkName_marshaled);
	____3_linkName_marshaled = NULL;

	il2cpp_codegen_marshal_free(____4_linkCaption_marshaled);
	____4_linkCaption_marshaled = NULL;

	il2cpp_codegen_marshal_free(____5_linkDescription_marshaled);
	____5_linkDescription_marshaled = NULL;

	il2cpp_codegen_marshal_free(____6_picture_marshaled);
	____6_picture_marshaled = NULL;

	il2cpp_codegen_marshal_free(____7_mediaSource_marshaled);
	____7_mediaSource_marshaled = NULL;

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWrapper_IOSFBAppRequest_m3D3375FA27CD097455F0CE514F74856039086517 (int32_t ___0_requestId, String_t* ___1_message, String_t* ___2_actionType, String_t* ___3_objectId, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___4_to, int32_t ___5_toLength, String_t* ___6_filters, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___7_excludeIds, int32_t ___8_excludeIdsLength, bool ___9_hasMaxRecipients, int32_t ___10_maxRecipients, String_t* ___11_data, String_t* ___12_title, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t, char*, char*, char*, char**, int32_t, char*, char**, int32_t, int32_t, int32_t, char*, char*);

	char* ____1_message_marshaled = NULL;
	____1_message_marshaled = il2cpp_codegen_marshal_string(___1_message);

	char* ____2_actionType_marshaled = NULL;
	____2_actionType_marshaled = il2cpp_codegen_marshal_string(___2_actionType);

	char* ____3_objectId_marshaled = NULL;
	____3_objectId_marshaled = il2cpp_codegen_marshal_string(___3_objectId);

	char** ____4_to_marshaled = NULL;
	if (___4_to != NULL)
	{
		il2cpp_array_size_t ____4_to_Length = (___4_to)->max_length;
		____4_to_marshaled = il2cpp_codegen_marshal_allocate_array<char*>(____4_to_Length + 1);
		(____4_to_marshaled)[____4_to_Length] = NULL;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(____4_to_Length); i++)
		{
			(____4_to_marshaled)[i] = il2cpp_codegen_marshal_string((___4_to)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)));
		}
	}
	else
	{
		____4_to_marshaled = NULL;
	}

	char* ____6_filters_marshaled = NULL;
	____6_filters_marshaled = il2cpp_codegen_marshal_string(___6_filters);

	char** ____7_excludeIds_marshaled = NULL;
	if (___7_excludeIds != NULL)
	{
		il2cpp_array_size_t ____7_excludeIds_Length = (___7_excludeIds)->max_length;
		____7_excludeIds_marshaled = il2cpp_codegen_marshal_allocate_array<char*>(____7_excludeIds_Length + 1);
		(____7_excludeIds_marshaled)[____7_excludeIds_Length] = NULL;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(____7_excludeIds_Length); i++)
		{
			(____7_excludeIds_marshaled)[i] = il2cpp_codegen_marshal_string((___7_excludeIds)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)));
		}
	}
	else
	{
		____7_excludeIds_marshaled = NULL;
	}

	char* ____11_data_marshaled = NULL;
	____11_data_marshaled = il2cpp_codegen_marshal_string(___11_data);

	char* ____12_title_marshaled = NULL;
	____12_title_marshaled = il2cpp_codegen_marshal_string(___12_title);

	reinterpret_cast<PInvokeFunc>(IOSFBAppRequest)(___0_requestId, ____1_message_marshaled, ____2_actionType_marshaled, ____3_objectId_marshaled, ____4_to_marshaled, ___5_toLength, ____6_filters_marshaled, ____7_excludeIds_marshaled, ___8_excludeIdsLength, static_cast<int32_t>(___9_hasMaxRecipients), ___10_maxRecipients, ____11_data_marshaled, ____12_title_marshaled);

	il2cpp_codegen_marshal_free(____1_message_marshaled);
	____1_message_marshaled = NULL;

	il2cpp_codegen_marshal_free(____2_actionType_marshaled);
	____2_actionType_marshaled = NULL;

	il2cpp_codegen_marshal_free(____3_objectId_marshaled);
	____3_objectId_marshaled = NULL;

	if (____4_to_marshaled != NULL)
	{
		const il2cpp_array_size_t ____4_to_marshaled_CleanupLoopCount = (___4_to != NULL) ? (___4_to)->max_length : 0;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(____4_to_marshaled_CleanupLoopCount); i++)
		{
			il2cpp_codegen_marshal_free((____4_to_marshaled)[i]);
			(____4_to_marshaled)[i] = NULL;
		}
		il2cpp_codegen_marshal_free(____4_to_marshaled);
		____4_to_marshaled = NULL;
	}

	il2cpp_codegen_marshal_free(____6_filters_marshaled);
	____6_filters_marshaled = NULL;

	if (____7_excludeIds_marshaled != NULL)
	{
		const il2cpp_array_size_t ____7_excludeIds_marshaled_CleanupLoopCount = (___7_excludeIds != NULL) ? (___7_excludeIds)->max_length : 0;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(____7_excludeIds_marshaled_CleanupLoopCount); i++)
		{
			il2cpp_codegen_marshal_free((____7_excludeIds_marshaled)[i]);
			(____7_excludeIds_marshaled)[i] = NULL;
		}
		il2cpp_codegen_marshal_free(____7_excludeIds_marshaled);
		____7_excludeIds_marshaled = NULL;
	}

	il2cpp_codegen_marshal_free(____11_data_marshaled);
	____11_data_marshaled = NULL;

	il2cpp_codegen_marshal_free(____12_title_marshaled);
	____12_title_marshaled = NULL;

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWrapper_IOSFBAppEventsActivateApp_m1AD14BA6261EB488D70C384403F1D9FD14ADA3B1 (const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	reinterpret_cast<PInvokeFunc>(IOSFBAppEventsActivateApp)();

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWrapper_IOSFBAppEventsLogEvent_mE19C47E6EA68B9066709213EAEF7CF75EA1DFE93 (String_t* ___0_logEvent, double ___1_valueToSum, int32_t ___2_numParams, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___3_paramKeys, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___4_paramVals, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, double, int32_t, char**, char**);

	char* ____0_logEvent_marshaled = NULL;
	____0_logEvent_marshaled = il2cpp_codegen_marshal_string(___0_logEvent);

	char** ____3_paramKeys_marshaled = NULL;
	if (___3_paramKeys != NULL)
	{
		il2cpp_array_size_t ____3_paramKeys_Length = (___3_paramKeys)->max_length;
		____3_paramKeys_marshaled = il2cpp_codegen_marshal_allocate_array<char*>(____3_paramKeys_Length + 1);
		(____3_paramKeys_marshaled)[____3_paramKeys_Length] = NULL;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(____3_paramKeys_Length); i++)
		{
			(____3_paramKeys_marshaled)[i] = il2cpp_codegen_marshal_string((___3_paramKeys)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)));
		}
	}
	else
	{
		____3_paramKeys_marshaled = NULL;
	}

	char** ____4_paramVals_marshaled = NULL;
	if (___4_paramVals != NULL)
	{
		il2cpp_array_size_t ____4_paramVals_Length = (___4_paramVals)->max_length;
		____4_paramVals_marshaled = il2cpp_codegen_marshal_allocate_array<char*>(____4_paramVals_Length + 1);
		(____4_paramVals_marshaled)[____4_paramVals_Length] = NULL;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(____4_paramVals_Length); i++)
		{
			(____4_paramVals_marshaled)[i] = il2cpp_codegen_marshal_string((___4_paramVals)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)));
		}
	}
	else
	{
		____4_paramVals_marshaled = NULL;
	}

	reinterpret_cast<PInvokeFunc>(IOSFBAppEventsLogEvent)(____0_logEvent_marshaled, ___1_valueToSum, ___2_numParams, ____3_paramKeys_marshaled, ____4_paramVals_marshaled);

	il2cpp_codegen_marshal_free(____0_logEvent_marshaled);
	____0_logEvent_marshaled = NULL;

	if (____3_paramKeys_marshaled != NULL)
	{
		const il2cpp_array_size_t ____3_paramKeys_marshaled_CleanupLoopCount = (___3_paramKeys != NULL) ? (___3_paramKeys)->max_length : 0;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(____3_paramKeys_marshaled_CleanupLoopCount); i++)
		{
			il2cpp_codegen_marshal_free((____3_paramKeys_marshaled)[i]);
			(____3_paramKeys_marshaled)[i] = NULL;
		}
		il2cpp_codegen_marshal_free(____3_paramKeys_marshaled);
		____3_paramKeys_marshaled = NULL;
	}

	if (____4_paramVals_marshaled != NULL)
	{
		const il2cpp_array_size_t ____4_paramVals_marshaled_CleanupLoopCount = (___4_paramVals != NULL) ? (___4_paramVals)->max_length : 0;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(____4_paramVals_marshaled_CleanupLoopCount); i++)
		{
			il2cpp_codegen_marshal_free((____4_paramVals_marshaled)[i]);
			(____4_paramVals_marshaled)[i] = NULL;
		}
		il2cpp_codegen_marshal_free(____4_paramVals_marshaled);
		____4_paramVals_marshaled = NULL;
	}

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWrapper_IOSFBAppEventsLogPurchase_m142BD978E0BC2239CCA31849718B5876EF97AAC9 (double ___0_logPurchase, String_t* ___1_currency, int32_t ___2_numParams, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___3_paramKeys, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___4_paramVals, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (double, char*, int32_t, char**, char**);

	char* ____1_currency_marshaled = NULL;
	____1_currency_marshaled = il2cpp_codegen_marshal_string(___1_currency);

	char** ____3_paramKeys_marshaled = NULL;
	if (___3_paramKeys != NULL)
	{
		il2cpp_array_size_t ____3_paramKeys_Length = (___3_paramKeys)->max_length;
		____3_paramKeys_marshaled = il2cpp_codegen_marshal_allocate_array<char*>(____3_paramKeys_Length + 1);
		(____3_paramKeys_marshaled)[____3_paramKeys_Length] = NULL;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(____3_paramKeys_Length); i++)
		{
			(____3_paramKeys_marshaled)[i] = il2cpp_codegen_marshal_string((___3_paramKeys)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)));
		}
	}
	else
	{
		____3_paramKeys_marshaled = NULL;
	}

	char** ____4_paramVals_marshaled = NULL;
	if (___4_paramVals != NULL)
	{
		il2cpp_array_size_t ____4_paramVals_Length = (___4_paramVals)->max_length;
		____4_paramVals_marshaled = il2cpp_codegen_marshal_allocate_array<char*>(____4_paramVals_Length + 1);
		(____4_paramVals_marshaled)[____4_paramVals_Length] = NULL;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(____4_paramVals_Length); i++)
		{
			(____4_paramVals_marshaled)[i] = il2cpp_codegen_marshal_string((___4_paramVals)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)));
		}
	}
	else
	{
		____4_paramVals_marshaled = NULL;
	}

	reinterpret_cast<PInvokeFunc>(IOSFBAppEventsLogPurchase)(___0_logPurchase, ____1_currency_marshaled, ___2_numParams, ____3_paramKeys_marshaled, ____4_paramVals_marshaled);

	il2cpp_codegen_marshal_free(____1_currency_marshaled);
	____1_currency_marshaled = NULL;

	if (____3_paramKeys_marshaled != NULL)
	{
		const il2cpp_array_size_t ____3_paramKeys_marshaled_CleanupLoopCount = (___3_paramKeys != NULL) ? (___3_paramKeys)->max_length : 0;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(____3_paramKeys_marshaled_CleanupLoopCount); i++)
		{
			il2cpp_codegen_marshal_free((____3_paramKeys_marshaled)[i]);
			(____3_paramKeys_marshaled)[i] = NULL;
		}
		il2cpp_codegen_marshal_free(____3_paramKeys_marshaled);
		____3_paramKeys_marshaled = NULL;
	}

	if (____4_paramVals_marshaled != NULL)
	{
		const il2cpp_array_size_t ____4_paramVals_marshaled_CleanupLoopCount = (___4_paramVals != NULL) ? (___4_paramVals)->max_length : 0;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(____4_paramVals_marshaled_CleanupLoopCount); i++)
		{
			il2cpp_codegen_marshal_free((____4_paramVals_marshaled)[i]);
			(____4_paramVals_marshaled)[i] = NULL;
		}
		il2cpp_codegen_marshal_free(____4_paramVals_marshaled);
		____4_paramVals_marshaled = NULL;
	}

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWrapper_IOSFBAppEventsSetLimitEventUsage_mBBF2B67C40305C8467F4DF1AF624C73BD806CF7F (bool ___0_limitEventUsage, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);

	reinterpret_cast<PInvokeFunc>(IOSFBAppEventsSetLimitEventUsage)(static_cast<int32_t>(___0_limitEventUsage));

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWrapper_IOSFBAutoLogAppEventsEnabled_m1712974AAF544BB464751466332FB77DE94D7D32 (bool ___0_autoLogAppEventsEnabled, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);

	reinterpret_cast<PInvokeFunc>(IOSFBAutoLogAppEventsEnabled)(static_cast<int32_t>(___0_autoLogAppEventsEnabled));

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWrapper_IOSFBAdvertiserIDCollectionEnabled_m080CBD49F7710BEDCEA8669CA75C547DEA831713 (bool ___0_advertiserIDCollectionEnabledID, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);

	reinterpret_cast<PInvokeFunc>(IOSFBAdvertiserIDCollectionEnabled)(static_cast<int32_t>(___0_advertiserIDCollectionEnabledID));

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IOSWrapper_IOSFBAdvertiserTrackingEnabled_m68235B6D17023A9803533429F708C9B49A3B71ED (bool ___0_advertiserTrackingEnabled, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t);

	int32_t returnValue = reinterpret_cast<PInvokeFunc>(IOSFBAdvertiserTrackingEnabled)(static_cast<int32_t>(___0_advertiserTrackingEnabled));

	return static_cast<bool>(returnValue);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWrapper_IOSFBGetAppLink_mC9FCD7EA67112E36A5AA014A7237418353BBEA73 (int32_t ___0_requestID, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);

	reinterpret_cast<PInvokeFunc>(IOSFBGetAppLink)(___0_requestID);

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* IOSWrapper_IOSFBSdkVersion_mA0987144389AC4F69AF5B3985C70CF37BDB6ACD4 (const RuntimeMethod* method) 
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) ();

	char* returnValue = reinterpret_cast<PInvokeFunc>(IOSFBSdkVersion)();

	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWrapper_IOSFBFetchDeferredAppLink_mF91A4ACE5AD44690E38B44BEEC2B09AB9E2FB1A3 (int32_t ___0_requestID, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);

	reinterpret_cast<PInvokeFunc>(IOSFBFetchDeferredAppLink)(___0_requestID);

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWrapper_IOSFBRefreshCurrentAccessToken_m3492C4148F576370C44A9EEEDA5992190641E25C (int32_t ___0_requestID, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);

	reinterpret_cast<PInvokeFunc>(IOSFBRefreshCurrentAccessToken)(___0_requestID);

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWrapper_IOSFBSetUserID_mA9B7607A431365C4F781D275E60147A7DE76463E (String_t* ___0_userID, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);

	char* ____0_userID_marshaled = NULL;
	____0_userID_marshaled = il2cpp_codegen_marshal_string(___0_userID);

	reinterpret_cast<PInvokeFunc>(IOSFBSetUserID)(____0_userID_marshaled);

	il2cpp_codegen_marshal_free(____0_userID_marshaled);
	____0_userID_marshaled = NULL;

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWrapper_IOSFBOpenGamingServicesFriendFinder_m70B856B87DF5C636A1CD0B510E06468C74B4B962 (int32_t ___0_requestID, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);

	reinterpret_cast<PInvokeFunc>(IOSFBOpenGamingServicesFriendFinder)(___0_requestID);

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWrapper_IOSFBUploadImageToMediaLibrary_m9C45F2A2B0DF4138B0C57E37EF4B48C7DFFAF10C (int32_t ___0_requestID, String_t* ___1_caption, String_t* ___2_imageUri, bool ___3_shouldLaunchMediaDialog, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t, char*, char*, int32_t);

	char* ____1_caption_marshaled = NULL;
	____1_caption_marshaled = il2cpp_codegen_marshal_string(___1_caption);

	char* ____2_imageUri_marshaled = NULL;
	____2_imageUri_marshaled = il2cpp_codegen_marshal_string(___2_imageUri);

	reinterpret_cast<PInvokeFunc>(IOSFBUploadImageToMediaLibrary)(___0_requestID, ____1_caption_marshaled, ____2_imageUri_marshaled, static_cast<int32_t>(___3_shouldLaunchMediaDialog));

	il2cpp_codegen_marshal_free(____1_caption_marshaled);
	____1_caption_marshaled = NULL;

	il2cpp_codegen_marshal_free(____2_imageUri_marshaled);
	____2_imageUri_marshaled = NULL;

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWrapper_IOSFBUploadVideoToMediaLibrary_mEE5CD00E5A2757F7B3E5F1F8B77B550F47EF906F (int32_t ___0_requestID, String_t* ___1_caption, String_t* ___2_videoUri, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t, char*, char*);

	char* ____1_caption_marshaled = NULL;
	____1_caption_marshaled = il2cpp_codegen_marshal_string(___1_caption);

	char* ____2_videoUri_marshaled = NULL;
	____2_videoUri_marshaled = il2cpp_codegen_marshal_string(___2_videoUri);

	reinterpret_cast<PInvokeFunc>(IOSFBUploadVideoToMediaLibrary)(___0_requestID, ____1_caption_marshaled, ____2_videoUri_marshaled);

	il2cpp_codegen_marshal_free(____1_caption_marshaled);
	____1_caption_marshaled = NULL;

	il2cpp_codegen_marshal_free(____2_videoUri_marshaled);
	____2_videoUri_marshaled = NULL;

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* IOSWrapper_IOSFBGetUserID_m710C789FADEA07E41A824B054083C5F0BB5803ED (const RuntimeMethod* method) 
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) ();

	char* returnValue = reinterpret_cast<PInvokeFunc>(IOSFBGetUserID)();

	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWrapper_IOSFBSetDataProcessingOptions_m31D5EB099BE8AA8AFB86E6C38545A6551FFEE291 (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_options, int32_t ___1_numOptions, int32_t ___2_country, int32_t ___3_state, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char**, int32_t, int32_t, int32_t);

	char** ____0_options_marshaled = NULL;
	if (___0_options != NULL)
	{
		il2cpp_array_size_t ____0_options_Length = (___0_options)->max_length;
		____0_options_marshaled = il2cpp_codegen_marshal_allocate_array<char*>(____0_options_Length + 1);
		(____0_options_marshaled)[____0_options_Length] = NULL;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(____0_options_Length); i++)
		{
			(____0_options_marshaled)[i] = il2cpp_codegen_marshal_string((___0_options)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)));
		}
	}
	else
	{
		____0_options_marshaled = NULL;
	}

	reinterpret_cast<PInvokeFunc>(IOSFBSetDataProcessingOptions)(____0_options_marshaled, ___1_numOptions, ___2_country, ___3_state);

	if (____0_options_marshaled != NULL)
	{
		const il2cpp_array_size_t ____0_options_marshaled_CleanupLoopCount = (___0_options != NULL) ? (___0_options)->max_length : 0;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(____0_options_marshaled_CleanupLoopCount); i++)
		{
			il2cpp_codegen_marshal_free((____0_options_marshaled)[i]);
			(____0_options_marshaled)[i] = NULL;
		}
		il2cpp_codegen_marshal_free(____0_options_marshaled);
		____0_options_marshaled = NULL;
	}

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWrapper_IOSFBUpdateUserProperties_m494DCFEF0F484141CDA72186748DE38BC841D637 (int32_t ___0_numParams, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___1_paramKeys, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___2_paramVals, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t, char**, char**);

	char** ____1_paramKeys_marshaled = NULL;
	if (___1_paramKeys != NULL)
	{
		il2cpp_array_size_t ____1_paramKeys_Length = (___1_paramKeys)->max_length;
		____1_paramKeys_marshaled = il2cpp_codegen_marshal_allocate_array<char*>(____1_paramKeys_Length + 1);
		(____1_paramKeys_marshaled)[____1_paramKeys_Length] = NULL;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(____1_paramKeys_Length); i++)
		{
			(____1_paramKeys_marshaled)[i] = il2cpp_codegen_marshal_string((___1_paramKeys)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)));
		}
	}
	else
	{
		____1_paramKeys_marshaled = NULL;
	}

	char** ____2_paramVals_marshaled = NULL;
	if (___2_paramVals != NULL)
	{
		il2cpp_array_size_t ____2_paramVals_Length = (___2_paramVals)->max_length;
		____2_paramVals_marshaled = il2cpp_codegen_marshal_allocate_array<char*>(____2_paramVals_Length + 1);
		(____2_paramVals_marshaled)[____2_paramVals_Length] = NULL;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(____2_paramVals_Length); i++)
		{
			(____2_paramVals_marshaled)[i] = il2cpp_codegen_marshal_string((___2_paramVals)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)));
		}
	}
	else
	{
		____2_paramVals_marshaled = NULL;
	}

	reinterpret_cast<PInvokeFunc>(IOSFBUpdateUserProperties)(___0_numParams, ____1_paramKeys_marshaled, ____2_paramVals_marshaled);

	if (____1_paramKeys_marshaled != NULL)
	{
		const il2cpp_array_size_t ____1_paramKeys_marshaled_CleanupLoopCount = (___1_paramKeys != NULL) ? (___1_paramKeys)->max_length : 0;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(____1_paramKeys_marshaled_CleanupLoopCount); i++)
		{
			il2cpp_codegen_marshal_free((____1_paramKeys_marshaled)[i]);
			(____1_paramKeys_marshaled)[i] = NULL;
		}
		il2cpp_codegen_marshal_free(____1_paramKeys_marshaled);
		____1_paramKeys_marshaled = NULL;
	}

	if (____2_paramVals_marshaled != NULL)
	{
		const il2cpp_array_size_t ____2_paramVals_marshaled_CleanupLoopCount = (___2_paramVals != NULL) ? (___2_paramVals)->max_length : 0;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(____2_paramVals_marshaled_CleanupLoopCount); i++)
		{
			il2cpp_codegen_marshal_free((____2_paramVals_marshaled)[i]);
			(____2_paramVals_marshaled)[i] = NULL;
		}
		il2cpp_codegen_marshal_free(____2_paramVals_marshaled);
		____2_paramVals_marshaled = NULL;
	}

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* IOSWrapper_IOSFBCurrentAuthenticationToken_m8AB2AEFC600EF331B2B79734849F026580E64F08 (const RuntimeMethod* method) 
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) ();

	char* returnValue = reinterpret_cast<PInvokeFunc>(IOSFBCurrentAuthenticationToken)();

	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* IOSWrapper_IOSFBCurrentProfile_mE372B7D01BE1E15248EA959CD32F291F23632A20 (const RuntimeMethod* method) 
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) ();

	char* returnValue = reinterpret_cast<PInvokeFunc>(IOSFBCurrentProfile)();

	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWrapper__ctor_m90A1A1EEE44BA86080399670A18C6CA6DFB169F7 (IOSWrapper_t9D301EEF5592CFE824873A1C6C491423D21D93B7* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
