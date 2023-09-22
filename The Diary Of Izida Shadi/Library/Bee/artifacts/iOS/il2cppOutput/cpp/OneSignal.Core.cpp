#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


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
template <typename T1, typename T2>
struct VirtualActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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

struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
struct Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A;
struct Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3;
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
struct Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28;
struct Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710;
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
struct IEnumerable_1_t6686595E4CB7AC210F0EF075F7B1DD4A21D3902B;
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
struct KeyCollection_tE66790F09E854C19C7F612BEAD203AE626E90A36;
struct List_1_tBD3D5DE492DB6E8472E966342E2BE6A082F6D4F7;
struct List_1_tC08D2F537F1A02BE216FE66A2D75BA6E87EB2005;
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
struct ValueCollection_tC9D91E8A3198E40EA339059703AB10DFC9F5CC2E;
struct EntryU5BU5D_t233BB24ED01E2D8D65B0651D54B8E3AD125CAF96;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct ActionButton_tAD39CFA7201CA72B52F90C9C5B345303E8B27FB7;
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
struct BackgroundImageLayout_tEE5FC51BCCA47E42652B792F502732AF97FDFCF8;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B;
struct CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B;
struct CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
struct DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A;
struct Delegate_t;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct EmailSubscriptionState_t251F184AA5FCD234E408E944706746C462F5ED01;
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IFormatProvider_tC202922D43BFF3525109ABF3FB79625F5646AB52;
struct IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D;
struct InAppMessage_t85CAE1C81FC1D740C4A122EFF7F31F1151A0E557;
struct InAppMessageAction_t2A5FC86EC22BE2BDB88E867CECA230BD82B486AB;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct MethodInfo_t;
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
struct Notification_t3808BD470562B2AE1AA323243E38420CC3C4A24F;
struct NotificationAction_t75C59DEDCC238B13AB8901FA6884DD20BDF1DC99;
struct NotificationOpenedResult_t8500E9CDC10B9FCC6082DD66B86D9AD123BBAD01;
struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472;
struct OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85;
struct OneSignalBehaviour_t984420F12C8E067001F23C636606C6B3A395AFD7;
struct PushSubscriptionState_tCC90B16EE861FADF35E5D4164A486E98EA96A635;
struct SMSSubscriptionState_t5C7EA40BB7CC39EC26BA103E18EDC9E0215E39BC;
struct SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E;
struct String_t;
struct StringBuilder_t;
struct StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8;
struct SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0;
struct TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4;
struct TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7;
struct Type_t;
struct UnitySourceGeneratedAssemblyMonoScriptTypes_v1_t985C407E0DB44FB5B181A1522D4068698F4217B5;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct Parser_t6F2C17AE4B45A0B404D1881D47B2AA8B2981D38C;
struct Serializer_t99E9F0C039FC8B46E85C6D18EDBE2EFC68781CF5;
struct InAppMessageActionDelegate_t05B28B99EFCF8F671A51AD30444F5A734F68D7B8;
struct InAppMessageLifecycleDelegate_tB98F345C7348E657B42CADA1F47C02EC01B32CFF;
struct NotificationActionDelegate_t0506036A22EDF3F41306BDBE188F5B4F7F29596D;
struct NotificationWillShowDelegate_tEBF8F8CF9A7B25750FBBFC55CB8FDD55F4379758;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Parser_t6F2C17AE4B45A0B404D1881D47B2AA8B2981D38C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SDKDebug_tF8D13EFEF2CFB61B0862388919A7481BBED893B6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Serializer_t99E9F0C039FC8B46E85C6D18EDBE2EFC68781CF5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityMainThreadDispatch_t2791D12B08651D1F1325AA78B06CFAA969DF7A12_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t68EADE0982F5CF901DB9BA9225CA67C75FF4A249____2DDCD326D9811498521DF6497E4E81DFD803D41072EF2C4286292F4BA80764DE_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t68EADE0982F5CF901DB9BA9225CA67C75FF4A249____85496355B38E37139D29F7D7C8AC1FDEDCC36604C92491AAAE12837772BDC64A_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral2C3D4826D5236B3C9A914C5CE2E3D8CEA48AC7CE;
IL2CPP_EXTERN_C String_t* _stringLiteral526C999F139627F5A148FB7032812E83F8AEFC82;
IL2CPP_EXTERN_C String_t* _stringLiteral5962E944D7340CE47999BF097B4AFD70C1501FB9;
IL2CPP_EXTERN_C String_t* _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174;
IL2CPP_EXTERN_C String_t* _stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB;
IL2CPP_EXTERN_C String_t* _stringLiteral785F17F45C331C415D0A7458E6AAC36966399C51;
IL2CPP_EXTERN_C String_t* _stringLiteral7F3238CD8C342B06FB9AB185C610175C84625462;
IL2CPP_EXTERN_C String_t* _stringLiteral848E5ED630B3142F565DD995C6E8D30187ED33CD;
IL2CPP_EXTERN_C String_t* _stringLiteral84C1E07F84B6E7BDCC02A904AFEC3BBD2CAE6EAA;
IL2CPP_EXTERN_C String_t* _stringLiteral8DC762363E16C7B48A45F7AD0379382854A5AAC7;
IL2CPP_EXTERN_C String_t* _stringLiteral91F7E6F20B6646D90CD184646336FEFB5B3FCC2F;
IL2CPP_EXTERN_C String_t* _stringLiteral94672909F51EA6867CBD4D94D2F92A0929C2009E;
IL2CPP_EXTERN_C String_t* _stringLiteral96543F8F77145E5AC7E750ACB2170E74A8B3377A;
IL2CPP_EXTERN_C String_t* _stringLiteralA7C3FCA8C63E127B542B38A5CA5E3FEEDDD1B122;
IL2CPP_EXTERN_C String_t* _stringLiteralB78F235D4291950A7D101307609C259F3E1F033F;
IL2CPP_EXTERN_C String_t* _stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2;
IL2CPP_EXTERN_C String_t* _stringLiteralBFB5DAA5265160CE753212EA77C3196536EF9342;
IL2CPP_EXTERN_C String_t* _stringLiteralDA666908BB15F4E1D2649752EC5DCBD0D5C64699;
IL2CPP_EXTERN_C String_t* _stringLiteralE727BF366E3CC855B808D806440542BF7152AF19;
IL2CPP_EXTERN_C String_t* _stringLiteralF18840F490E42D3CE48CDCBF47229C1C240F8ABE;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m7CCA97075B48AFB2B97E5A072B94BC7679374341_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_First_TisType_t_m22B99E5DC993C761AE0CB9632BA5749F27E1E074_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReflectionHelpers_FindAllAssignableTypes_TisOneSignal_t314CE4D3704637587AA437654E7AE245275B8A85_m81EA6181DA97D554BEE7ADD4C1CCD66FB43849AF_RuntimeMethod_var;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct U3CModuleU3E_t68C32C04644151B6D2857B11559C9F0880906353 
{
};
struct Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t233BB24ED01E2D8D65B0651D54B8E3AD125CAF96* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_tE66790F09E854C19C7F612BEAD203AE626E90A36* ____keys;
	ValueCollection_tC9D91E8A3198E40EA339059703AB10DFC9F5CC2E* ____values;
	RuntimeObject* ____syncRoot;
};
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct U3CPrivateImplementationDetailsU3E_t68EADE0982F5CF901DB9BA9225CA67C75FF4A249  : public RuntimeObject
{
};
struct ActionButton_tAD39CFA7201CA72B52F90C9C5B345303E8B27FB7  : public RuntimeObject
{
	String_t* ___id;
	String_t* ___text;
	String_t* ___icon;
};
struct BackgroundImageLayout_tEE5FC51BCCA47E42652B792F502732AF97FDFCF8  : public RuntimeObject
{
	String_t* ___image;
	String_t* ___titleTextColor;
	String_t* ___bodyTextColor;
};
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0  : public RuntimeObject
{
	bool ___m_isReadOnly;
	int32_t ___cultureID;
	int32_t ___parent_lcid;
	int32_t ___datetime_index;
	int32_t ___number_index;
	int32_t ___default_calendar_type;
	bool ___m_useUserOverride;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo;
	String_t* ___m_name;
	String_t* ___englishname;
	String_t* ___nativename;
	String_t* ___iso3lang;
	String_t* ___iso2lang;
	String_t* ___win3lang;
	String_t* ___territory;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___native_calendar_names;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo;
	void* ___textinfo_data;
	int32_t ___m_dataItem;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___parent_culture;
	bool ___constructed;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___cached_serialized_form;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D* ___m_cultureData;
	bool ___m_isInherited;
};
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke
{
	int32_t ___m_isReadOnly;
	int32_t ___cultureID;
	int32_t ___parent_lcid;
	int32_t ___datetime_index;
	int32_t ___number_index;
	int32_t ___default_calendar_type;
	int32_t ___m_useUserOverride;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo;
	char* ___m_name;
	char* ___englishname;
	char* ___nativename;
	char* ___iso3lang;
	char* ___iso2lang;
	char* ___win3lang;
	char* ___territory;
	char** ___native_calendar_names;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo;
	void* ___textinfo_data;
	int32_t ___m_dataItem;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke* ___parent_culture;
	int32_t ___constructed;
	Il2CppSafeArray* ___cached_serialized_form;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke* ___m_cultureData;
	int32_t ___m_isInherited;
};
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com
{
	int32_t ___m_isReadOnly;
	int32_t ___cultureID;
	int32_t ___parent_lcid;
	int32_t ___datetime_index;
	int32_t ___number_index;
	int32_t ___default_calendar_type;
	int32_t ___m_useUserOverride;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo;
	Il2CppChar* ___m_name;
	Il2CppChar* ___englishname;
	Il2CppChar* ___nativename;
	Il2CppChar* ___iso3lang;
	Il2CppChar* ___iso2lang;
	Il2CppChar* ___win3lang;
	Il2CppChar* ___territory;
	Il2CppChar** ___native_calendar_names;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo;
	void* ___textinfo_data;
	int32_t ___m_dataItem;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com* ___parent_culture;
	int32_t ___constructed;
	Il2CppSafeArray* ___cached_serialized_form;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com* ___m_cultureData;
	int32_t ___m_isInherited;
};
struct EmailSubscriptionState_t251F184AA5FCD234E408E944706746C462F5ED01  : public RuntimeObject
{
	String_t* ___emailUserId;
	bool ___isSubscribed;
	String_t* ___emailAddress;
};
struct InAppMessage_t85CAE1C81FC1D740C4A122EFF7F31F1151A0E557  : public RuntimeObject
{
	String_t* ___messageId;
};
struct InAppMessageAction_t2A5FC86EC22BE2BDB88E867CECA230BD82B486AB  : public RuntimeObject
{
	String_t* ___clickName;
	String_t* ___clickUrl;
	bool ___firstClick;
	bool ___closesMessage;
	String_t* ___click_name;
	String_t* ___click_url;
	bool ___first_click;
	bool ___closes_message;
};
struct Json_tCC41D098E71C9750C8C409790108D1635F2D3BFC  : public RuntimeObject
{
};
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE  : public RuntimeObject
{
	RuntimeObject* ____identity;
};
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity;
};
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	Il2CppIUnknown* ____identity;
};
struct MemberInfo_t  : public RuntimeObject
{
};
struct Notification_t3808BD470562B2AE1AA323243E38420CC3C4A24F  : public RuntimeObject
{
	String_t* ___notificationId;
	String_t* ___templateName;
	String_t* ___templateId;
	String_t* ___title;
	String_t* ___body;
	String_t* ___launchURL;
	String_t* ___sound;
	String_t* ___collapseId;
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___additionalData;
	List_1_tBD3D5DE492DB6E8472E966342E2BE6A082F6D4F7* ___actionButtons;
	String_t* ___rawPayload;
	int32_t ___androidNotificationId;
	String_t* ___smallIcon;
	String_t* ___largeIcon;
	String_t* ___bigPicture;
	String_t* ___smallIconAccentColor;
	String_t* ___ledColor;
	int32_t ___lockScreenVisibility;
	String_t* ___groupKey;
	String_t* ___groupMessage;
	String_t* ___fromProjectNumber;
	int32_t ___priority;
	List_1_tC08D2F537F1A02BE216FE66A2D75BA6E87EB2005* ___groupedNotifications;
	BackgroundImageLayout_tEE5FC51BCCA47E42652B792F502732AF97FDFCF8* ___backgroundImageLayout;
	String_t* ___subtitle;
	bool ___contentAvailable;
	bool ___mutableContent;
	String_t* ___category;
	int32_t ___badge;
	int32_t ___badgeIncrement;
	String_t* ___threadId;
	double ___relevanceScore;
	String_t* ___interruptionLevel;
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___attachments;
};
struct NotificationAction_t75C59DEDCC238B13AB8901FA6884DD20BDF1DC99  : public RuntimeObject
{
	String_t* ___actionID;
	int32_t ___type;
};
struct NotificationOpenedResult_t8500E9CDC10B9FCC6082DD66B86D9AD123BBAD01  : public RuntimeObject
{
	NotificationAction_t75C59DEDCC238B13AB8901FA6884DD20BDF1DC99* ___action;
	Notification_t3808BD470562B2AE1AA323243E38420CC3C4A24F* ___notification;
};
struct OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85  : public RuntimeObject
{
	int32_t ____logLevel;
	int32_t ____alertLevel;
};
struct PushSubscriptionState_tCC90B16EE861FADF35E5D4164A486E98EA96A635  : public RuntimeObject
{
	String_t* ___userId;
	bool ___isSubscribed;
	String_t* ___pushToken;
	bool ___isPushDisabled;
};
struct ReflectionHelpers_t8B5D5000145D2CF5596CF272724D4A7A324AE0F0  : public RuntimeObject
{
};
struct SDKDebug_tF8D13EFEF2CFB61B0862388919A7481BBED893B6  : public RuntimeObject
{
};
struct SMSSubscriptionState_t5C7EA40BB7CC39EC26BA103E18EDC9E0215E39BC  : public RuntimeObject
{
	String_t* ___smsUserId;
	bool ___isSubscribed;
	String_t* ___smsNumber;
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
};
struct StringBuilder_t  : public RuntimeObject
{
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_ChunkChars;
	StringBuilder_t* ___m_ChunkPrevious;
	int32_t ___m_ChunkLength;
	int32_t ___m_ChunkOffset;
	int32_t ___m_MaxCapacity;
};
struct SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0  : public RuntimeObject
{
	int32_t ____props;
};
struct UnityMainThreadDispatch_t2791D12B08651D1F1325AA78B06CFAA969DF7A12  : public RuntimeObject
{
};
struct UnitySourceGeneratedAssemblyMonoScriptTypes_v1_t985C407E0DB44FB5B181A1522D4068698F4217B5  : public RuntimeObject
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
struct Parser_t6F2C17AE4B45A0B404D1881D47B2AA8B2981D38C  : public RuntimeObject
{
	StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8* ___json;
};
struct Serializer_t99E9F0C039FC8B46E85C6D18EDBE2EFC68781CF5  : public RuntimeObject
{
	StringBuilder_t* ___builder;
	bool ___humanReadable;
	int32_t ___indentSpaces;
	int32_t ___indentLevel;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	uint8_t ___m_value;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	Il2CppChar ___m_value;
};
struct Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___flags;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___flags_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___hi_OffsetPadding[4];
			int32_t ___hi;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___hi_OffsetPadding_forAlignmentOnly[4];
			int32_t ___hi_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___lo_OffsetPadding[8];
			int32_t ___lo;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___lo_OffsetPadding_forAlignmentOnly[8];
			int32_t ___lo_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___mid_OffsetPadding[12];
			int32_t ___mid;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___mid_OffsetPadding_forAlignmentOnly[12];
			int32_t ___mid_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ulomidLE_OffsetPadding[8];
			uint64_t ___ulomidLE;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ulomidLE_OffsetPadding_forAlignmentOnly[8];
			uint64_t ___ulomidLE_forAlignmentOnly;
		};
	};
};
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	double ___m_value;
};
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175 
{
	int16_t ___m_value;
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	int64_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5 
{
	int8_t ___m_value;
};
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	float ___m_value;
};
struct TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
};
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	uint16_t ___m_value;
};
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	uint32_t ___m_value;
};
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	uint64_t ___m_value;
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
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D1424_t992B538D262FB88D9963FCC6988ADC8421245D36 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D1424_t992B538D262FB88D9963FCC6988ADC8421245D36__padding[1424];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D636_t0B6F9D6B043CED4DE17F188A090FD3C6C6F9BB6C 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D636_t0B6F9D6B043CED4DE17F188A090FD3C6C6F9BB6C__padding[636];
	};
};
#pragma pack(pop, tp)
struct MonoScriptData_t15CCC9F91FAD32913F53B75784C94CD8EDA85CB9 
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___FilePathsData;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___TypesData;
	int32_t ___TotalTypes;
	int32_t ___TotalFiles;
	bool ___IsEditorOnly;
};
struct MonoScriptData_t15CCC9F91FAD32913F53B75784C94CD8EDA85CB9_marshaled_pinvoke
{
	Il2CppSafeArray* ___FilePathsData;
	Il2CppSafeArray* ___TypesData;
	int32_t ___TotalTypes;
	int32_t ___TotalFiles;
	int32_t ___IsEditorOnly;
};
struct MonoScriptData_t15CCC9F91FAD32913F53B75784C94CD8EDA85CB9_marshaled_com
{
	Il2CppSafeArray* ___FilePathsData;
	Il2CppSafeArray* ___TypesData;
	int32_t ___TotalTypes;
	int32_t ___TotalFiles;
	int32_t ___IsEditorOnly;
};
struct Delegate_t  : public RuntimeObject
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	RuntimeObject* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	bool ___method_is_virtual;
};
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
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
struct RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 
{
	intptr_t ___value;
};
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value;
};
struct StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8  : public TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7
{
	String_t* ____s;
	int32_t ____pos;
	int32_t ____length;
};
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct MulticastDelegate_t  : public Delegate_t
{
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates;
};
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates;
};
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates;
};
struct Type_t  : public MemberInfo_t
{
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl;
};
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87  : public MulticastDelegate_t
{
};
struct Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A  : public MulticastDelegate_t
{
};
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};
struct SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E  : public MulticastDelegate_t
{
};
struct InAppMessageActionDelegate_t05B28B99EFCF8F671A51AD30444F5A734F68D7B8  : public MulticastDelegate_t
{
};
struct InAppMessageLifecycleDelegate_tB98F345C7348E657B42CADA1F47C02EC01B32CFF  : public MulticastDelegate_t
{
};
struct NotificationActionDelegate_t0506036A22EDF3F41306BDBE188F5B4F7F29596D  : public MulticastDelegate_t
{
};
struct NotificationWillShowDelegate_tEBF8F8CF9A7B25750FBBFC55CB8FDD55F4379758  : public MulticastDelegate_t
{
};
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ___m_CancellationTokenSource;
};
struct OneSignalBehaviour_t984420F12C8E067001F23C636606C6B3A395AFD7  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	String_t* ___AppId;
	int32_t ___LogLevel;
	int32_t ___AlertLevel;
	bool ___RequireUserConsent;
	bool ___ShareLocation;
};
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray;
};
struct U3CPrivateImplementationDetailsU3E_t68EADE0982F5CF901DB9BA9225CA67C75FF4A249_StaticFields
{
	__StaticArrayInitTypeSizeU3D636_t0B6F9D6B043CED4DE17F188A090FD3C6C6F9BB6C ___2DDCD326D9811498521DF6497E4E81DFD803D41072EF2C4286292F4BA80764DE;
	__StaticArrayInitTypeSizeU3D1424_t992B538D262FB88D9963FCC6988ADC8421245D36 ___85496355B38E37139D29F7D7C8AC1FDEDCC36604C92491AAAE12837772BDC64A;
};
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_StaticFields
{
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___invariant_culture_info;
	RuntimeObject* ___shared_table_lock;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___default_current_culture;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentUICulture;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentCulture;
	Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3* ___shared_by_number;
	Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28* ___shared_by_name;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_UserPreferredCultureInfoInAppX;
	bool ___IsTaiwanSku;
};
struct OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85_StaticFields
{
	String_t* ___U3CAppIdU3Ek__BackingField;
	bool ___U3CDidInitializeU3Ek__BackingField;
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___OnInitialize;
	OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85* ____default;
};
struct SDKDebug_tF8D13EFEF2CFB61B0862388919A7481BBED893B6_StaticFields
{
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___LogIntercept;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___WarnIntercept;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___ErrorIntercept;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0_StaticFields
{
	Type_t* ___s_cachedPreparedType1;
	Type_t* ___s_cachedPreparedType2;
	Type_t* ___s_cachedPreparedType3;
	Type_t* ___s_cachedPreparedType4;
	Type_t* ___s_cachedPreparedType5;
};
struct UnityMainThreadDispatch_t2791D12B08651D1F1325AA78B06CFAA969DF7A12_StaticFields
{
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* ____context;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1;
};
struct Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_StaticFields
{
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___Zero;
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___One;
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___MinusOne;
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___MaxValue;
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___MinValue;
};
struct IntPtr_t_StaticFields
{
	intptr_t ___Zero;
};
struct TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7_StaticFields
{
	TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7* ___Null;
};
struct Type_t_StaticFields
{
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder;
	Il2CppChar ___Delimiter;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes;
	RuntimeObject* ___Missing;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB  : public RuntimeArray
{
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

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
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReflectionHelpers_FindAllAssignableTypes_TisRuntimeObject_m0B0DADD391410251C9D562B58989F6358C9EF093_gshared (String_t* ___0_assemblyFilter, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_First_TisRuntimeObject_mEFECF1B8C3201589C5AF34176DCBF8DD926642D6_gshared (RuntimeObject* ___0_source, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B (RuntimeArray* ___0_array, RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 ___1_fldHandle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85* OneSignal__getDefaultInstance_m849C6811959C6FDA6953AD987EA80B119CC09584 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00 (Delegate_t* ___0_a, Delegate_t* ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3 (Delegate_t* ___0_source, Delegate_t* ___1_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OneSignal_set_AppId_mA7AFE519FA396A621BAED79D13C63854ADE77F7F_inline (String_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OneSignal_set_DidInitialize_m8EFFB9C9D7E997672E5EA5309160463F7961C634_inline (bool ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* OneSignal_get_AppId_mE3F51B18F55331DD5DAA72C6652E0E1EB99A12A3_inline (const RuntimeMethod* method) ;
inline void Action_1_Invoke_m690438AAE38F9762172E3AE0A33D0B42ACD35790_inline (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* __this, String_t* ___0_obj, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*, String_t*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___0_obj, method);
}
inline RuntimeObject* ReflectionHelpers_FindAllAssignableTypes_TisOneSignal_t314CE4D3704637587AA437654E7AE245275B8A85_m81EA6181DA97D554BEE7ADD4C1CCD66FB43849AF (String_t* ___0_assemblyFilter, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (String_t*, const RuntimeMethod*))ReflectionHelpers_FindAllAssignableTypes_TisRuntimeObject_m0B0DADD391410251C9D562B58989F6358C9EF093_gshared)(___0_assemblyFilter, method);
}
inline Type_t* Enumerable_First_TisType_t_m22B99E5DC993C761AE0CB9632BA5749F27E1E074 (RuntimeObject* ___0_source, const RuntimeMethod* method)
{
	return ((  Type_t* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_First_TisRuntimeObject_mEFECF1B8C3201589C5AF34176DCBF8DD926642D6_gshared)(___0_source, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Activator_CreateInstance_mFF030428C64FDDFACC74DFAC97388A1C628BFBCF (Type_t* ___0_type, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SDKDebug_Info_mA53892F1FD743FCD6BE8013A10EE8AEBEA51EFBE (String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85* OneSignal_get_Default_m30ACD9671BB02F331AB116FBF747392E96B73EC4 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Parser_Parse_m49285B0BD066EBA61990D9DBAA900AD380E05E15 (String_t* ___0_jsonString, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Serializer_MakeSerialization_m58B5B1531741F5A9143E9B0B70807331BEBA61CA (RuntimeObject* ___0_obj, bool ___1_humanReadable, int32_t ___2_indentSpaces, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Char_IsWhiteSpace_m02AEC6EA19513CAFC6882CFCA54C45794D2B5924 (Il2CppChar ___0_c, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_IndexOf_mE21E78F35EF4A7768E385A72814C88D22B689966 (String_t* __this, Il2CppChar ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringReader__ctor_m72556EC1062F49E05CF41B0825AC7FA2DB2A81C0 (StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8* __this, String_t* ___0_s, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Parser__ctor_m9BE59139F16DFAC491D3A03DCB162B051070807C (Parser_t6F2C17AE4B45A0B404D1881D47B2AA8B2981D38C* __this, String_t* ___0_jsonString, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Parser_ParseValue_m1B7E05DCE0B6435C7679A4878A0371B990764B41 (Parser_t6F2C17AE4B45A0B404D1881D47B2AA8B2981D38C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextReader_Dispose_mDCB332EFA06970A9CC7EC4596FCC5220B9512616 (TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7* __this, const RuntimeMethod* method) ;
inline void Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9 (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Parser_get_NextToken_mE11FFDBF97BAC9AD22EE729FD0D55364388325D6 (Parser_t6F2C17AE4B45A0B404D1881D47B2AA8B2981D38C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Parser_ParseString_mB3FF8B4C52AF5BC6279CE7DD5FD058B874E0078B (Parser_t6F2C17AE4B45A0B404D1881D47B2AA8B2981D38C* __this, const RuntimeMethod* method) ;
inline void Dictionary_2_set_Item_m7CCA97075B48AFB2B97E5A072B94BC7679374341 (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* __this, String_t* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*, String_t*, RuntimeObject*, const RuntimeMethod*))Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared)(__this, ___0_key, ___1_value, method);
}
inline void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690 (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Parser_ParseByToken_mC26F86B5A9BB6DC7A8F419619B74B628F3C9F738 (Parser_t6F2C17AE4B45A0B404D1881D47B2AA8B2981D38C* __this, int32_t ___0_token, const RuntimeMethod* method) ;
inline void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Parser_ParseNumber_m2C0B8EAD7D8ED45A37E1FB2ACD5E7A8212A2C714 (Parser_t6F2C17AE4B45A0B404D1881D47B2AA8B2981D38C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* Parser_ParseObject_mC129607C90BA628D70512884CD7410E92EC7493D (Parser_t6F2C17AE4B45A0B404D1881D47B2AA8B2981D38C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* Parser_ParseArray_m91F6F3E6E84BA32CF62544967F412C86A6C940F1 (Parser_t6F2C17AE4B45A0B404D1881D47B2AA8B2981D38C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D (StringBuilder_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar Parser_get_NextChar_mB5FC1831EF72916E114ECA94FBCB3D8CA1056ACF (Parser_t6F2C17AE4B45A0B404D1881D47B2AA8B2981D38C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1 (StringBuilder_t* __this, Il2CppChar ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_CreateString_mFBC28D2E3EB87D497F7E702E4FFAD65F635E44DF (String_t* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___0_val, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Convert_ToInt32_mD1B3AFBDA26E52D0382434804364FEF8BA241FB4 (String_t* ___0_value, int32_t ___1_fromBase, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Parser_get_NextWord_m523714E46B1A48A04432D11FF5FC181B9CEE638C (Parser_t6F2C17AE4B45A0B404D1881D47B2AA8B2981D38C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Int64_TryParse_m64CEDECE4C3F16B715CA1057801018B2957AE0E3 (String_t* ___0_s, int32_t ___1_style, RuntimeObject* ___2_provider, int64_t* ___3_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Double_TryParse_m1D39DC22A45BC9A576B9D9130600BFD3CB6DA382 (String_t* ___0_s, int32_t ___1_style, RuntimeObject* ___2_provider, double* ___3_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar Parser_get_PeekChar_mA1D0A3B252CDD78BEA07DB4E6F898C66F71A7571 (Parser_t6F2C17AE4B45A0B404D1881D47B2AA8B2981D38C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar Convert_ToChar_mF1B1B205DDEFDE52251235514E7DAFCAB37D1F24 (int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Parser_IsWordBreak_m9D8592F6FB2502FC2B225C42DB7AC1160D8F9BE3 (Il2CppChar ___0_c, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Parser_EatWhitespace_mD5146E17EF15AFE2DF0C64426301D1EE6513C0A3 (Parser_t6F2C17AE4B45A0B404D1881D47B2AA8B2981D38C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer__ctor_m99E1E12C48B39230E7488D02026BF2572D0792DF (Serializer_t99E9F0C039FC8B46E85C6D18EDBE2EFC68781CF5* __this, bool ___0_humanReadable, int32_t ___1_indentSpaces, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeValue_m05F48CBD03A0580F94083F0EC60ACC24025F9847 (Serializer_t99E9F0C039FC8B46E85C6D18EDBE2EFC68781CF5* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D (StringBuilder_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeString_mDC5E9C2B126BF45E499655700E82D80929FA3511 (Serializer_t99E9F0C039FC8B46E85C6D18EDBE2EFC68781CF5* __this, String_t* ___0_str, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeArray_m9D612F968FC32957BBCEA48C7554FB8B73CE6021 (Serializer_t99E9F0C039FC8B46E85C6D18EDBE2EFC68781CF5* __this, RuntimeObject* ___0_anArray, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeObject_m752864D4085775CF21F8A9866C857DCC72614491 (Serializer_t99E9F0C039FC8B46E85C6D18EDBE2EFC68781CF5* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_CreateString_mAA0705B41B390BDB42F67894B9B67C956814C71B (String_t* __this, Il2CppChar ___0_c, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeOther_mFFB73E1A04876CD6A2625EDD360AAC8B30DF155A (Serializer_t99E9F0C039FC8B46E85C6D18EDBE2EFC68781CF5* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_AppendLine_m3BC704C4E6A8531027D8C9287D0AB2AA0188AC4E (StringBuilder_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_mE20F6CD28FC8E8C9FD65987DBD32E6087CCE1CF3 (StringBuilder_t* __this, Il2CppChar ___0_value, int32_t ___1_repeatCount, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_AppendNewLineFunc_m1C3D039E09D1EBB75C8E5016A7754802E882CF26 (Serializer_t99E9F0C039FC8B46E85C6D18EDBE2EFC68781CF5* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* String_ToCharArray_m0699A92AA3E744229EF29CB9D943C47DF4FE5B46 (String_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Convert_ToInt32_mDBBE9318A7CCE1560974CE93F5BFED9931CF0052 (Il2CppChar ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m967AECC237535C552A97A80C7875E31B98496CA9 (int32_t* __this, String_t* ___0_format, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_mF468A56B3A746EFD805E0604EE7A2873DA157ADE (float* __this, String_t* ___0_format, RuntimeObject* ___1_provider, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m3A7D629DAA5E0E36B8A617A911E34F79AF84AE63 (StringBuilder_t* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Convert_ToDouble_m86FF4F837721833186E883102C056A35F0860EB0 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Double_ToString_m7E3930DDFB35B1919FE538A246A59C3FC62AF789 (double* __this, String_t* ___0_format, RuntimeObject* ___1_provider, const RuntimeMethod* method) ;
inline void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, RuntimeObject*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___0_obj, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SDKDebug__formatMessage_m1231997542F440F8185068DC5EF9B2ED6DE00C1A (String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* SynchronizationContext_get_Current_m8DE6D3020745B7955249A2470A23EC0ECBB02A82 (const RuntimeMethod* method) ;
inline void List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4 (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4_gshared)(__this, ___0_item, method);
}
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MonoScriptData_t15CCC9F91FAD32913F53B75784C94CD8EDA85CB9 UnitySourceGeneratedAssemblyMonoScriptTypes_v1_Get_mBD1233AA75A9758F25475536046BBBF0A78F0C60 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t68EADE0982F5CF901DB9BA9225CA67C75FF4A249____2DDCD326D9811498521DF6497E4E81DFD803D41072EF2C4286292F4BA80764DE_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t68EADE0982F5CF901DB9BA9225CA67C75FF4A249____85496355B38E37139D29F7D7C8AC1FDEDCC36604C92491AAAE12837772BDC64A_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MonoScriptData_t15CCC9F91FAD32913F53B75784C94CD8EDA85CB9 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(MonoScriptData_t15CCC9F91FAD32913F53B75784C94CD8EDA85CB9));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)1424));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = L_0;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t68EADE0982F5CF901DB9BA9225CA67C75FF4A249____85496355B38E37139D29F7D7C8AC1FDEDCC36604C92491AAAE12837772BDC64A_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_1, L_2, NULL);
		(&V_0)->___FilePathsData = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___FilePathsData), (void*)L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)636));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = L_3;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_5 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t68EADE0982F5CF901DB9BA9225CA67C75FF4A249____2DDCD326D9811498521DF6497E4E81DFD803D41072EF2C4286292F4BA80764DE_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_4, L_5, NULL);
		(&V_0)->___TypesData = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___TypesData), (void*)L_4);
		(&V_0)->___TotalFiles = ((int32_t)15);
		(&V_0)->___TotalTypes = ((int32_t)19);
		(&V_0)->___IsEditorOnly = (bool)0;
		MonoScriptData_t15CCC9F91FAD32913F53B75784C94CD8EDA85CB9 L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitySourceGeneratedAssemblyMonoScriptTypes_v1__ctor_mBD2C95D2CEAADDDB16EF1992853E328B925AEC65 (UnitySourceGeneratedAssemblyMonoScriptTypes_v1_t985C407E0DB44FB5B181A1522D4068698F4217B5* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
IL2CPP_EXTERN_C void MonoScriptData_t15CCC9F91FAD32913F53B75784C94CD8EDA85CB9_marshal_pinvoke(const MonoScriptData_t15CCC9F91FAD32913F53B75784C94CD8EDA85CB9& unmarshaled, MonoScriptData_t15CCC9F91FAD32913F53B75784C94CD8EDA85CB9_marshaled_pinvoke& marshaled)
{
	marshaled.___FilePathsData = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.___FilePathsData);
	marshaled.___TypesData = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.___TypesData);
	marshaled.___TotalTypes = unmarshaled.___TotalTypes;
	marshaled.___TotalFiles = unmarshaled.___TotalFiles;
	marshaled.___IsEditorOnly = static_cast<int32_t>(unmarshaled.___IsEditorOnly);
}
IL2CPP_EXTERN_C void MonoScriptData_t15CCC9F91FAD32913F53B75784C94CD8EDA85CB9_marshal_pinvoke_back(const MonoScriptData_t15CCC9F91FAD32913F53B75784C94CD8EDA85CB9_marshaled_pinvoke& marshaled, MonoScriptData_t15CCC9F91FAD32913F53B75784C94CD8EDA85CB9& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	unmarshaled.___FilePathsData = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___FilePathsData);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___FilePathsData), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___FilePathsData));
	unmarshaled.___TypesData = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___TypesData);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___TypesData), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___TypesData));
	int32_t unmarshaledTotalTypes_temp_2 = 0;
	unmarshaledTotalTypes_temp_2 = marshaled.___TotalTypes;
	unmarshaled.___TotalTypes = unmarshaledTotalTypes_temp_2;
	int32_t unmarshaledTotalFiles_temp_3 = 0;
	unmarshaledTotalFiles_temp_3 = marshaled.___TotalFiles;
	unmarshaled.___TotalFiles = unmarshaledTotalFiles_temp_3;
	bool unmarshaledIsEditorOnly_temp_4 = false;
	unmarshaledIsEditorOnly_temp_4 = static_cast<bool>(marshaled.___IsEditorOnly);
	unmarshaled.___IsEditorOnly = unmarshaledIsEditorOnly_temp_4;
}
IL2CPP_EXTERN_C void MonoScriptData_t15CCC9F91FAD32913F53B75784C94CD8EDA85CB9_marshal_pinvoke_cleanup(MonoScriptData_t15CCC9F91FAD32913F53B75784C94CD8EDA85CB9_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_com_destroy_safe_array(marshaled.___FilePathsData);
	marshaled.___FilePathsData = NULL;
	il2cpp_codegen_com_destroy_safe_array(marshaled.___TypesData);
	marshaled.___TypesData = NULL;
}
IL2CPP_EXTERN_C void MonoScriptData_t15CCC9F91FAD32913F53B75784C94CD8EDA85CB9_marshal_com(const MonoScriptData_t15CCC9F91FAD32913F53B75784C94CD8EDA85CB9& unmarshaled, MonoScriptData_t15CCC9F91FAD32913F53B75784C94CD8EDA85CB9_marshaled_com& marshaled)
{
	marshaled.___FilePathsData = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.___FilePathsData);
	marshaled.___TypesData = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.___TypesData);
	marshaled.___TotalTypes = unmarshaled.___TotalTypes;
	marshaled.___TotalFiles = unmarshaled.___TotalFiles;
	marshaled.___IsEditorOnly = static_cast<int32_t>(unmarshaled.___IsEditorOnly);
}
IL2CPP_EXTERN_C void MonoScriptData_t15CCC9F91FAD32913F53B75784C94CD8EDA85CB9_marshal_com_back(const MonoScriptData_t15CCC9F91FAD32913F53B75784C94CD8EDA85CB9_marshaled_com& marshaled, MonoScriptData_t15CCC9F91FAD32913F53B75784C94CD8EDA85CB9& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	unmarshaled.___FilePathsData = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___FilePathsData);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___FilePathsData), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___FilePathsData));
	unmarshaled.___TypesData = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___TypesData);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___TypesData), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___TypesData));
	int32_t unmarshaledTotalTypes_temp_2 = 0;
	unmarshaledTotalTypes_temp_2 = marshaled.___TotalTypes;
	unmarshaled.___TotalTypes = unmarshaledTotalTypes_temp_2;
	int32_t unmarshaledTotalFiles_temp_3 = 0;
	unmarshaledTotalFiles_temp_3 = marshaled.___TotalFiles;
	unmarshaled.___TotalFiles = unmarshaledTotalFiles_temp_3;
	bool unmarshaledIsEditorOnly_temp_4 = false;
	unmarshaledIsEditorOnly_temp_4 = static_cast<bool>(marshaled.___IsEditorOnly);
	unmarshaled.___IsEditorOnly = unmarshaledIsEditorOnly_temp_4;
}
IL2CPP_EXTERN_C void MonoScriptData_t15CCC9F91FAD32913F53B75784C94CD8EDA85CB9_marshal_com_cleanup(MonoScriptData_t15CCC9F91FAD32913F53B75784C94CD8EDA85CB9_marshaled_com& marshaled)
{
	il2cpp_codegen_com_destroy_safe_array(marshaled.___FilePathsData);
	marshaled.___FilePathsData = NULL;
	il2cpp_codegen_com_destroy_safe_array(marshaled.___TypesData);
	marshaled.___TypesData = NULL;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EmailSubscriptionState__ctor_m8D51A71CE9F558E5BFFBA6E255A592AE3B010E35 (EmailSubscriptionState_t251F184AA5FCD234E408E944706746C462F5ED01* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InAppMessage__ctor_m4E1D29570F3BE1D3FB0CFFDFA38A0D247621F524 (InAppMessage_t85CAE1C81FC1D740C4A122EFF7F31F1151A0E557* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InAppMessageAction_OnBeforeSerialize_m025FB732E4FD5351F5DCAC4657A831B965B7F5A6 (InAppMessageAction_t2A5FC86EC22BE2BDB88E867CECA230BD82B486AB* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InAppMessageAction_OnAfterDeserialize_mD11F71307FA76BE4D3389E8279E0F2C64F116F34 (InAppMessageAction_t2A5FC86EC22BE2BDB88E867CECA230BD82B486AB* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___click_name;
		__this->___clickName = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___clickName), (void*)L_0);
		String_t* L_1 = __this->___click_url;
		__this->___clickUrl = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___clickUrl), (void*)L_1);
		bool L_2 = __this->___first_click;
		__this->___firstClick = L_2;
		bool L_3 = __this->___closes_message;
		__this->___closesMessage = L_3;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InAppMessageAction__ctor_m6E236F034D28D6669DE24ECD4470C6507D9F93A6 (InAppMessageAction_t2A5FC86EC22BE2BDB88E867CECA230BD82B486AB* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionButton__ctor_mEB9403A992891320FFF3E1AA744F784DF2E8D426 (ActionButton_tAD39CFA7201CA72B52F90C9C5B345303E8B27FB7* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BackgroundImageLayout__ctor_m7EFD1A5889EA10264B3B285D1BC1BADC6D8D4D10 (BackgroundImageLayout_tEE5FC51BCCA47E42652B792F502732AF97FDFCF8* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Notification__ctor_mA5090CDD38836D26AFDEB00E1C099C14A0482579 (Notification_t3808BD470562B2AE1AA323243E38420CC3C4A24F* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotificationAction__ctor_mAA54CD01853DB91D9A6721922A3C5A07ADE6660A (NotificationAction_t75C59DEDCC238B13AB8901FA6884DD20BDF1DC99* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotificationOpenedResult__ctor_mB10B54426A370622B293AFE0AD0DD3EB5AFDD667 (NotificationOpenedResult_t8500E9CDC10B9FCC6082DD66B86D9AD123BBAD01* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PushSubscriptionState__ctor_m1772F14184CC1B7937B27C0CE9D0B3E260F44503 (PushSubscriptionState_tCC90B16EE861FADF35E5D4164A486E98EA96A635* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SMSSubscriptionState__ctor_m8863E786D65256D104A54B820CB28089B86E2C07 (SMSSubscriptionState_t5C7EA40BB7CC39EC26BA103E18EDC9E0215E39BC* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85* OneSignal_get_Default_m30ACD9671BB02F331AB116FBF747392E96B73EC4 (const RuntimeMethod* method) 
{
	{
		OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85* L_0;
		L_0 = OneSignal__getDefaultInstance_m849C6811959C6FDA6953AD987EA80B119CC09584(NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneSignal_set_Default_m26C62F9861FF4EAAAE90D75E36E8F5DC0BABD138 (OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral94672909F51EA6867CBD4D94D2F92A0929C2009E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral96543F8F77145E5AC7E750ACB2170E74A8B3377A);
		s_Il2CppMethodInitialized = true;
	}
	{
		OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85* L_0 = ___0_value;
		NullCheck(L_0);
		Type_t* L_1;
		L_1 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_0, NULL);
		String_t* L_2;
		L_2 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral94672909F51EA6867CBD4D94D2F92A0929C2009E, L_1, _stringLiteral96543F8F77145E5AC7E750ACB2170E74A8B3377A, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_2, NULL);
		OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85* L_3 = ___0_value;
		((OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85_il2cpp_TypeInfo_var))->____default = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85_il2cpp_TypeInfo_var))->____default), (void*)L_3);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* OneSignal_get_AppId_mE3F51B18F55331DD5DAA72C6652E0E1EB99A12A3 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ((OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85_il2cpp_TypeInfo_var))->___U3CAppIdU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneSignal_set_AppId_mA7AFE519FA396A621BAED79D13C63854ADE77F7F (String_t* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_value;
		((OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85_il2cpp_TypeInfo_var))->___U3CAppIdU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85_il2cpp_TypeInfo_var))->___U3CAppIdU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OneSignal_get_DidInitialize_mBD975801E862BD290960CE766AC76A19F3E2225E (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ((OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85_il2cpp_TypeInfo_var))->___U3CDidInitializeU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneSignal_set_DidInitialize_m8EFFB9C9D7E997672E5EA5309160463F7961C634 (bool ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ___0_value;
		((OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85_il2cpp_TypeInfo_var))->___U3CDidInitializeU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneSignal_add_OnInitialize_m3335E7F05B20B0DF9A5B06E0CBD22A9BCF6CB9EC (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* V_0 = NULL;
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* V_1 = NULL;
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* V_2 = NULL;
	{
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_0 = ((OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85_il2cpp_TypeInfo_var))->___OnInitialize;
		V_0 = L_0;
	}

IL_0006:
	{
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_1 = V_0;
		V_1 = L_1;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_2 = V_1;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)Castclass((RuntimeObject*)L_4, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var));
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_5 = V_2;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_6 = V_1;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*>((&((OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85_il2cpp_TypeInfo_var))->___OnInitialize), L_5, L_6);
		V_0 = L_7;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_8 = V_0;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)L_8) == ((RuntimeObject*)(Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneSignal_remove_OnInitialize_m3B078C7A154DE3958C4050C6AF9AF21043AC951E (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* V_0 = NULL;
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* V_1 = NULL;
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* V_2 = NULL;
	{
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_0 = ((OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85_il2cpp_TypeInfo_var))->___OnInitialize;
		V_0 = L_0;
	}

IL_0006:
	{
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_1 = V_0;
		V_1 = L_1;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_2 = V_1;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)Castclass((RuntimeObject*)L_4, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var));
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_5 = V_2;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_6 = V_1;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*>((&((OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85_il2cpp_TypeInfo_var))->___OnInitialize), L_5, L_6);
		V_0 = L_7;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_8 = V_0;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)L_8) == ((RuntimeObject*)(Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneSignal__completedInit_m891E343A785F50C38EAAB885C56487FC5B4E0F9A (String_t* ___0_appId, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* G_B2_0 = NULL;
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* G_B1_0 = NULL;
	{
		String_t* L_0 = ___0_appId;
		OneSignal_set_AppId_mA7AFE519FA396A621BAED79D13C63854ADE77F7F_inline(L_0, NULL);
		OneSignal_set_DidInitialize_m8EFFB9C9D7E997672E5EA5309160463F7961C634_inline((bool)1, NULL);
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_1 = ((OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85_il2cpp_TypeInfo_var))->___OnInitialize;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_2 = L_1;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0016;
		}
		G_B1_0 = L_2;
	}
	{
		return;
	}

IL_0016:
	{
		String_t* L_3;
		L_3 = OneSignal_get_AppId_mE3F51B18F55331DD5DAA72C6652E0E1EB99A12A3_inline(NULL);
		NullCheck(G_B2_0);
		Action_1_Invoke_m690438AAE38F9762172E3AE0A33D0B42ACD35790_inline(G_B2_0, L_3, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85* OneSignal__getDefaultInstance_m849C6811959C6FDA6953AD987EA80B119CC09584 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_First_TisType_t_m22B99E5DC993C761AE0CB9632BA5749F27E1E074_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionHelpers_FindAllAssignableTypes_TisOneSignal_t314CE4D3704637587AA437654E7AE245275B8A85_m81EA6181DA97D554BEE7ADD4C1CCD66FB43849AF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral526C999F139627F5A148FB7032812E83F8AEFC82);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8DC762363E16C7B48A45F7AD0379382854A5AAC7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral91F7E6F20B6646D90CD184646336FEFB5B3FCC2F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral96543F8F77145E5AC7E750ACB2170E74A8B3377A);
		s_Il2CppMethodInitialized = true;
	}
	OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85* V_0 = NULL;
	{
		OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85* L_0 = ((OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85_il2cpp_TypeInfo_var))->____default;
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85* L_1 = ((OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85_il2cpp_TypeInfo_var))->____default;
		return L_1;
	}

IL_000d:
	{
		RuntimeObject* L_2;
		L_2 = ReflectionHelpers_FindAllAssignableTypes_TisOneSignal_t314CE4D3704637587AA437654E7AE245275B8A85_m81EA6181DA97D554BEE7ADD4C1CCD66FB43849AF(_stringLiteral91F7E6F20B6646D90CD184646336FEFB5B3FCC2F, ReflectionHelpers_FindAllAssignableTypes_TisOneSignal_t314CE4D3704637587AA437654E7AE245275B8A85_m81EA6181DA97D554BEE7ADD4C1CCD66FB43849AF_RuntimeMethod_var);
		Type_t* L_3;
		L_3 = Enumerable_First_TisType_t_m22B99E5DC993C761AE0CB9632BA5749F27E1E074(L_2, Enumerable_First_TisType_t_m22B99E5DC993C761AE0CB9632BA5749F27E1E074_RuntimeMethod_var);
		RuntimeObject* L_4;
		L_4 = Activator_CreateInstance_mFF030428C64FDDFACC74DFAC97388A1C628BFBCF(L_3, NULL);
		V_0 = ((OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85*)IsInstClass((RuntimeObject*)L_4, OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85_il2cpp_TypeInfo_var));
		OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85* L_5 = V_0;
		if (!L_5)
		{
			goto IL_004c;
		}
	}
	{
		OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85* L_6 = V_0;
		((OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85_il2cpp_TypeInfo_var))->____default = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&((OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85_il2cpp_TypeInfo_var))->____default), (void*)L_6);
		OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85* L_7 = V_0;
		NullCheck(L_7);
		Type_t* L_8;
		L_8 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_7, NULL);
		String_t* L_9;
		L_9 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral8DC762363E16C7B48A45F7AD0379382854A5AAC7, L_8, _stringLiteral96543F8F77145E5AC7E750ACB2170E74A8B3377A, NULL);
		SDKDebug_Info_mA53892F1FD743FCD6BE8013A10EE8AEBEA51EFBE(L_9, NULL);
		goto IL_0056;
	}

IL_004c:
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral526C999F139627F5A148FB7032812E83F8AEFC82, NULL);
	}

IL_0056:
	{
		OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85* L_10 = ((OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85_il2cpp_TypeInfo_var))->____default;
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneSignal__ctor_m182500A027110E66DD2443D6E8A22C96AA03F9DB (OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85* __this, const RuntimeMethod* method) 
{
	{
		__this->____logLevel = 1;
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
Notification_t3808BD470562B2AE1AA323243E38420CC3C4A24F* NotificationWillShowDelegate_Invoke_m865EF82C9367CD6E54E00BF49361A40DF1BED4D4_Multicast(NotificationWillShowDelegate_tEBF8F8CF9A7B25750FBBFC55CB8FDD55F4379758* __this, Notification_t3808BD470562B2AE1AA323243E38420CC3C4A24F* ___0_notification, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	Notification_t3808BD470562B2AE1AA323243E38420CC3C4A24F* retVal = NULL;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		NotificationWillShowDelegate_tEBF8F8CF9A7B25750FBBFC55CB8FDD55F4379758* currentDelegate = reinterpret_cast<NotificationWillShowDelegate_tEBF8F8CF9A7B25750FBBFC55CB8FDD55F4379758*>(delegatesToInvoke[i]);
		typedef Notification_t3808BD470562B2AE1AA323243E38420CC3C4A24F* (*FunctionPointerType) (RuntimeObject*, Notification_t3808BD470562B2AE1AA323243E38420CC3C4A24F*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_notification, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
	return retVal;
}
Notification_t3808BD470562B2AE1AA323243E38420CC3C4A24F* NotificationWillShowDelegate_Invoke_m865EF82C9367CD6E54E00BF49361A40DF1BED4D4_OpenInst(NotificationWillShowDelegate_tEBF8F8CF9A7B25750FBBFC55CB8FDD55F4379758* __this, Notification_t3808BD470562B2AE1AA323243E38420CC3C4A24F* ___0_notification, const RuntimeMethod* method)
{
	NullCheck(___0_notification);
	typedef Notification_t3808BD470562B2AE1AA323243E38420CC3C4A24F* (*FunctionPointerType) (Notification_t3808BD470562B2AE1AA323243E38420CC3C4A24F*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr)(___0_notification, method);
}
Notification_t3808BD470562B2AE1AA323243E38420CC3C4A24F* NotificationWillShowDelegate_Invoke_m865EF82C9367CD6E54E00BF49361A40DF1BED4D4_OpenStatic(NotificationWillShowDelegate_tEBF8F8CF9A7B25750FBBFC55CB8FDD55F4379758* __this, Notification_t3808BD470562B2AE1AA323243E38420CC3C4A24F* ___0_notification, const RuntimeMethod* method)
{
	typedef Notification_t3808BD470562B2AE1AA323243E38420CC3C4A24F* (*FunctionPointerType) (Notification_t3808BD470562B2AE1AA323243E38420CC3C4A24F*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr)(___0_notification, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotificationWillShowDelegate__ctor_m8DEE6C41B02776A21A042F416981705000627B68 (NotificationWillShowDelegate_tEBF8F8CF9A7B25750FBBFC55CB8FDD55F4379758* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&NotificationWillShowDelegate_Invoke_m865EF82C9367CD6E54E00BF49361A40DF1BED4D4_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			__this->___invoke_impl = (intptr_t)&NotificationWillShowDelegate_Invoke_m865EF82C9367CD6E54E00BF49361A40DF1BED4D4_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl = __this->___method_ptr;
			__this->___method_code = (intptr_t)__this->___m_target;
		}
	}
	__this->___extra_arg = (intptr_t)&NotificationWillShowDelegate_Invoke_m865EF82C9367CD6E54E00BF49361A40DF1BED4D4_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Notification_t3808BD470562B2AE1AA323243E38420CC3C4A24F* NotificationWillShowDelegate_Invoke_m865EF82C9367CD6E54E00BF49361A40DF1BED4D4 (NotificationWillShowDelegate_tEBF8F8CF9A7B25750FBBFC55CB8FDD55F4379758* __this, Notification_t3808BD470562B2AE1AA323243E38420CC3C4A24F* ___0_notification, const RuntimeMethod* method) 
{
	typedef Notification_t3808BD470562B2AE1AA323243E38420CC3C4A24F* (*FunctionPointerType) (RuntimeObject*, Notification_t3808BD470562B2AE1AA323243E38420CC3C4A24F*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_notification, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NotificationWillShowDelegate_BeginInvoke_m41C6CD8E93AB34E42C80632D83245CFD0FDBFD99 (NotificationWillShowDelegate_tEBF8F8CF9A7B25750FBBFC55CB8FDD55F4379758* __this, Notification_t3808BD470562B2AE1AA323243E38420CC3C4A24F* ___0_notification, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___0_notification;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Notification_t3808BD470562B2AE1AA323243E38420CC3C4A24F* NotificationWillShowDelegate_EndInvoke_mD4CE56260AE75927F8B7DEBE5DD4FE54ECEADBA9 (NotificationWillShowDelegate_tEBF8F8CF9A7B25750FBBFC55CB8FDD55F4379758* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
	return (Notification_t3808BD470562B2AE1AA323243E38420CC3C4A24F*)__result;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void NotificationActionDelegate_Invoke_m356D618DF09032EA7F1D5EA127E91E900EEAE6A7_Multicast(NotificationActionDelegate_t0506036A22EDF3F41306BDBE188F5B4F7F29596D* __this, NotificationOpenedResult_t8500E9CDC10B9FCC6082DD66B86D9AD123BBAD01* ___0_result, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		NotificationActionDelegate_t0506036A22EDF3F41306BDBE188F5B4F7F29596D* currentDelegate = reinterpret_cast<NotificationActionDelegate_t0506036A22EDF3F41306BDBE188F5B4F7F29596D*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, NotificationOpenedResult_t8500E9CDC10B9FCC6082DD66B86D9AD123BBAD01*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_result, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void NotificationActionDelegate_Invoke_m356D618DF09032EA7F1D5EA127E91E900EEAE6A7_OpenInst(NotificationActionDelegate_t0506036A22EDF3F41306BDBE188F5B4F7F29596D* __this, NotificationOpenedResult_t8500E9CDC10B9FCC6082DD66B86D9AD123BBAD01* ___0_result, const RuntimeMethod* method)
{
	NullCheck(___0_result);
	typedef void (*FunctionPointerType) (NotificationOpenedResult_t8500E9CDC10B9FCC6082DD66B86D9AD123BBAD01*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_result, method);
}
void NotificationActionDelegate_Invoke_m356D618DF09032EA7F1D5EA127E91E900EEAE6A7_OpenStatic(NotificationActionDelegate_t0506036A22EDF3F41306BDBE188F5B4F7F29596D* __this, NotificationOpenedResult_t8500E9CDC10B9FCC6082DD66B86D9AD123BBAD01* ___0_result, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (NotificationOpenedResult_t8500E9CDC10B9FCC6082DD66B86D9AD123BBAD01*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_result, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotificationActionDelegate__ctor_m408F5A9D3FDB19D0D9C832ACA6218A31E01D5E3C (NotificationActionDelegate_t0506036A22EDF3F41306BDBE188F5B4F7F29596D* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&NotificationActionDelegate_Invoke_m356D618DF09032EA7F1D5EA127E91E900EEAE6A7_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			__this->___invoke_impl = (intptr_t)&NotificationActionDelegate_Invoke_m356D618DF09032EA7F1D5EA127E91E900EEAE6A7_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl = __this->___method_ptr;
			__this->___method_code = (intptr_t)__this->___m_target;
		}
	}
	__this->___extra_arg = (intptr_t)&NotificationActionDelegate_Invoke_m356D618DF09032EA7F1D5EA127E91E900EEAE6A7_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotificationActionDelegate_Invoke_m356D618DF09032EA7F1D5EA127E91E900EEAE6A7 (NotificationActionDelegate_t0506036A22EDF3F41306BDBE188F5B4F7F29596D* __this, NotificationOpenedResult_t8500E9CDC10B9FCC6082DD66B86D9AD123BBAD01* ___0_result, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, NotificationOpenedResult_t8500E9CDC10B9FCC6082DD66B86D9AD123BBAD01*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_result, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NotificationActionDelegate_BeginInvoke_m7D2C6E38308DF0EB3747CA40B5DBC87F49EE8332 (NotificationActionDelegate_t0506036A22EDF3F41306BDBE188F5B4F7F29596D* __this, NotificationOpenedResult_t8500E9CDC10B9FCC6082DD66B86D9AD123BBAD01* ___0_result, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___0_result;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotificationActionDelegate_EndInvoke_mCBC8DD0FCAEA7248D2B78E1434611FD60588D9EB (NotificationActionDelegate_t0506036A22EDF3F41306BDBE188F5B4F7F29596D* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void InAppMessageLifecycleDelegate_Invoke_mDCCCBF256F623C00CEA3E933A5FD074FA1507989_Multicast(InAppMessageLifecycleDelegate_tB98F345C7348E657B42CADA1F47C02EC01B32CFF* __this, InAppMessage_t85CAE1C81FC1D740C4A122EFF7F31F1151A0E557* ___0_message, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		InAppMessageLifecycleDelegate_tB98F345C7348E657B42CADA1F47C02EC01B32CFF* currentDelegate = reinterpret_cast<InAppMessageLifecycleDelegate_tB98F345C7348E657B42CADA1F47C02EC01B32CFF*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, InAppMessage_t85CAE1C81FC1D740C4A122EFF7F31F1151A0E557*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_message, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void InAppMessageLifecycleDelegate_Invoke_mDCCCBF256F623C00CEA3E933A5FD074FA1507989_OpenInst(InAppMessageLifecycleDelegate_tB98F345C7348E657B42CADA1F47C02EC01B32CFF* __this, InAppMessage_t85CAE1C81FC1D740C4A122EFF7F31F1151A0E557* ___0_message, const RuntimeMethod* method)
{
	NullCheck(___0_message);
	typedef void (*FunctionPointerType) (InAppMessage_t85CAE1C81FC1D740C4A122EFF7F31F1151A0E557*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_message, method);
}
void InAppMessageLifecycleDelegate_Invoke_mDCCCBF256F623C00CEA3E933A5FD074FA1507989_OpenStatic(InAppMessageLifecycleDelegate_tB98F345C7348E657B42CADA1F47C02EC01B32CFF* __this, InAppMessage_t85CAE1C81FC1D740C4A122EFF7F31F1151A0E557* ___0_message, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (InAppMessage_t85CAE1C81FC1D740C4A122EFF7F31F1151A0E557*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_message, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InAppMessageLifecycleDelegate__ctor_mE43EDDA4DEB69661B8A715F0C9B3DB86EFAC58EF (InAppMessageLifecycleDelegate_tB98F345C7348E657B42CADA1F47C02EC01B32CFF* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&InAppMessageLifecycleDelegate_Invoke_mDCCCBF256F623C00CEA3E933A5FD074FA1507989_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			__this->___invoke_impl = (intptr_t)&InAppMessageLifecycleDelegate_Invoke_mDCCCBF256F623C00CEA3E933A5FD074FA1507989_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl = __this->___method_ptr;
			__this->___method_code = (intptr_t)__this->___m_target;
		}
	}
	__this->___extra_arg = (intptr_t)&InAppMessageLifecycleDelegate_Invoke_mDCCCBF256F623C00CEA3E933A5FD074FA1507989_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InAppMessageLifecycleDelegate_Invoke_mDCCCBF256F623C00CEA3E933A5FD074FA1507989 (InAppMessageLifecycleDelegate_tB98F345C7348E657B42CADA1F47C02EC01B32CFF* __this, InAppMessage_t85CAE1C81FC1D740C4A122EFF7F31F1151A0E557* ___0_message, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, InAppMessage_t85CAE1C81FC1D740C4A122EFF7F31F1151A0E557*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_message, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InAppMessageLifecycleDelegate_BeginInvoke_m700E9AECBA0143D085E3AB46A431082BEF310233 (InAppMessageLifecycleDelegate_tB98F345C7348E657B42CADA1F47C02EC01B32CFF* __this, InAppMessage_t85CAE1C81FC1D740C4A122EFF7F31F1151A0E557* ___0_message, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___0_message;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InAppMessageLifecycleDelegate_EndInvoke_m8B97651C120C52C1BF6FA9C98EC1009429C72FC2 (InAppMessageLifecycleDelegate_tB98F345C7348E657B42CADA1F47C02EC01B32CFF* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void InAppMessageActionDelegate_Invoke_m77062EEFFB8FB6E3060388D30CBDBC5DD1B334A2_Multicast(InAppMessageActionDelegate_t05B28B99EFCF8F671A51AD30444F5A734F68D7B8* __this, InAppMessageAction_t2A5FC86EC22BE2BDB88E867CECA230BD82B486AB* ___0_action, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		InAppMessageActionDelegate_t05B28B99EFCF8F671A51AD30444F5A734F68D7B8* currentDelegate = reinterpret_cast<InAppMessageActionDelegate_t05B28B99EFCF8F671A51AD30444F5A734F68D7B8*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, InAppMessageAction_t2A5FC86EC22BE2BDB88E867CECA230BD82B486AB*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_action, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void InAppMessageActionDelegate_Invoke_m77062EEFFB8FB6E3060388D30CBDBC5DD1B334A2_OpenInst(InAppMessageActionDelegate_t05B28B99EFCF8F671A51AD30444F5A734F68D7B8* __this, InAppMessageAction_t2A5FC86EC22BE2BDB88E867CECA230BD82B486AB* ___0_action, const RuntimeMethod* method)
{
	NullCheck(___0_action);
	typedef void (*FunctionPointerType) (InAppMessageAction_t2A5FC86EC22BE2BDB88E867CECA230BD82B486AB*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_action, method);
}
void InAppMessageActionDelegate_Invoke_m77062EEFFB8FB6E3060388D30CBDBC5DD1B334A2_OpenStatic(InAppMessageActionDelegate_t05B28B99EFCF8F671A51AD30444F5A734F68D7B8* __this, InAppMessageAction_t2A5FC86EC22BE2BDB88E867CECA230BD82B486AB* ___0_action, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (InAppMessageAction_t2A5FC86EC22BE2BDB88E867CECA230BD82B486AB*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_action, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InAppMessageActionDelegate__ctor_m5A77E086CC360AD6369972267DCBEB50CE147E84 (InAppMessageActionDelegate_t05B28B99EFCF8F671A51AD30444F5A734F68D7B8* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&InAppMessageActionDelegate_Invoke_m77062EEFFB8FB6E3060388D30CBDBC5DD1B334A2_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			__this->___invoke_impl = (intptr_t)&InAppMessageActionDelegate_Invoke_m77062EEFFB8FB6E3060388D30CBDBC5DD1B334A2_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl = __this->___method_ptr;
			__this->___method_code = (intptr_t)__this->___m_target;
		}
	}
	__this->___extra_arg = (intptr_t)&InAppMessageActionDelegate_Invoke_m77062EEFFB8FB6E3060388D30CBDBC5DD1B334A2_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InAppMessageActionDelegate_Invoke_m77062EEFFB8FB6E3060388D30CBDBC5DD1B334A2 (InAppMessageActionDelegate_t05B28B99EFCF8F671A51AD30444F5A734F68D7B8* __this, InAppMessageAction_t2A5FC86EC22BE2BDB88E867CECA230BD82B486AB* ___0_action, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, InAppMessageAction_t2A5FC86EC22BE2BDB88E867CECA230BD82B486AB*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_action, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InAppMessageActionDelegate_BeginInvoke_mD60B5535B898DDA10115E1CE0FCDC7B4766CE1B8 (InAppMessageActionDelegate_t05B28B99EFCF8F671A51AD30444F5A734F68D7B8* __this, InAppMessageAction_t2A5FC86EC22BE2BDB88E867CECA230BD82B486AB* ___0_action, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___0_action;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InAppMessageActionDelegate_EndInvoke_m9C1369ABCDD73C63DF221708789ED1C1D48A04A1 (InAppMessageActionDelegate_t05B28B99EFCF8F671A51AD30444F5A734F68D7B8* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneSignalBehaviour_Start_mD43BDABE484924BE18E2533D414CF14BE822D668 (OneSignalBehaviour_t984420F12C8E067001F23C636606C6B3A395AFD7* __this, const RuntimeMethod* method) 
{
	{
		OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85* L_0;
		L_0 = OneSignal_get_Default_m30ACD9671BB02F331AB116FBF747392E96B73EC4(NULL);
		int32_t L_1 = __this->___LogLevel;
		NullCheck(L_0);
		VirtualActionInvoker1< int32_t >::Invoke(27, L_0, L_1);
		OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85* L_2;
		L_2 = OneSignal_get_Default_m30ACD9671BB02F331AB116FBF747392E96B73EC4(NULL);
		int32_t L_3 = __this->___AlertLevel;
		NullCheck(L_2);
		VirtualActionInvoker1< int32_t >::Invoke(29, L_2, L_3);
		OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85* L_4;
		L_4 = OneSignal_get_Default_m30ACD9671BB02F331AB116FBF747392E96B73EC4(NULL);
		bool L_5 = __this->___RequireUserConsent;
		NullCheck(L_4);
		VirtualActionInvoker1< bool >::Invoke(33, L_4, L_5);
		OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85* L_6;
		L_6 = OneSignal_get_Default_m30ACD9671BB02F331AB116FBF747392E96B73EC4(NULL);
		bool L_7 = __this->___ShareLocation;
		NullCheck(L_6);
		VirtualActionInvoker1< bool >::Invoke(67, L_6, L_7);
		OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85* L_8;
		L_8 = OneSignal_get_Default_m30ACD9671BB02F331AB116FBF747392E96B73EC4(NULL);
		String_t* L_9 = __this->___AppId;
		NullCheck(L_8);
		VirtualActionInvoker1< String_t* >::Invoke(35, L_8, L_9);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneSignalBehaviour__ctor_mC493B1BE2CD99B4C7CDD5CEDCB93E3D0C484040F (OneSignalBehaviour_t984420F12C8E067001F23C636606C6B3A395AFD7* __this, const RuntimeMethod* method) 
{
	{
		__this->___LogLevel = 3;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Json_Deserialize_mF4067D3E8C01190CACA3166B8D9EF7E9A109259A (String_t* ___0_json, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_json;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return NULL;
	}

IL_0005:
	{
		String_t* L_1 = ___0_json;
		RuntimeObject* L_2;
		L_2 = Parser_Parse_m49285B0BD066EBA61990D9DBAA900AD380E05E15(L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Json_Serialize_m35E0717344D0105ACDDFDCE3BDB49792D100EB81 (RuntimeObject* ___0_obj, bool ___1_humanReadable, int32_t ___2_indentSpaces, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_obj;
		bool L_1 = ___1_humanReadable;
		int32_t L_2 = ___2_indentSpaces;
		String_t* L_3;
		L_3 = Serializer_MakeSerialization_m58B5B1531741F5A9143E9B0B70807331BEBA61CA(L_0, L_1, L_2, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Parser_IsWordBreak_m9D8592F6FB2502FC2B225C42DB7AC1160D8F9BE3 (Il2CppChar ___0_c, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral84C1E07F84B6E7BDCC02A904AFEC3BBD2CAE6EAA);
		s_Il2CppMethodInitialized = true;
	}
	{
		Il2CppChar L_0 = ___0_c;
		il2cpp_codegen_runtime_class_init_inline(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Char_IsWhiteSpace_m02AEC6EA19513CAFC6882CFCA54C45794D2B5924(L_0, NULL);
		if (L_1)
		{
			goto IL_001a;
		}
	}
	{
		Il2CppChar L_2 = ___0_c;
		NullCheck(_stringLiteral84C1E07F84B6E7BDCC02A904AFEC3BBD2CAE6EAA);
		int32_t L_3;
		L_3 = String_IndexOf_mE21E78F35EF4A7768E385A72814C88D22B689966(_stringLiteral84C1E07F84B6E7BDCC02A904AFEC3BBD2CAE6EAA, L_2, NULL);
		return (bool)((((int32_t)((((int32_t)L_3) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_001a:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Parser__ctor_m9BE59139F16DFAC491D3A03DCB162B051070807C (Parser_t6F2C17AE4B45A0B404D1881D47B2AA8B2981D38C* __this, String_t* ___0_jsonString, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		String_t* L_0 = ___0_jsonString;
		StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8* L_1 = (StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8*)il2cpp_codegen_object_new(StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8_il2cpp_TypeInfo_var);
		StringReader__ctor_m72556EC1062F49E05CF41B0825AC7FA2DB2A81C0(L_1, L_0, NULL);
		__this->___json = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___json), (void*)L_1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Parser_Parse_m49285B0BD066EBA61990D9DBAA900AD380E05E15 (String_t* ___0_jsonString, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Parser_t6F2C17AE4B45A0B404D1881D47B2AA8B2981D38C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Parser_t6F2C17AE4B45A0B404D1881D47B2AA8B2981D38C* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		String_t* L_0 = ___0_jsonString;
		Parser_t6F2C17AE4B45A0B404D1881D47B2AA8B2981D38C* L_1 = (Parser_t6F2C17AE4B45A0B404D1881D47B2AA8B2981D38C*)il2cpp_codegen_object_new(Parser_t6F2C17AE4B45A0B404D1881D47B2AA8B2981D38C_il2cpp_TypeInfo_var);
		Parser__ctor_m9BE59139F16DFAC491D3A03DCB162B051070807C(L_1, L_0, NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0010:
			{
				{
					Parser_t6F2C17AE4B45A0B404D1881D47B2AA8B2981D38C* L_2 = V_0;
					if (!L_2)
					{
						goto IL_0019;
					}
				}
				{
					Parser_t6F2C17AE4B45A0B404D1881D47B2AA8B2981D38C* L_3 = V_0;
					NullCheck(L_3);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_3);
				}

IL_0019:
				{
					return;
				}
			}
		});
		try
		{
			Parser_t6F2C17AE4B45A0B404D1881D47B2AA8B2981D38C* L_4 = V_0;
			NullCheck(L_4);
			RuntimeObject* L_5;
			L_5 = Parser_ParseValue_m1B7E05DCE0B6435C7679A4878A0371B990764B41(L_4, NULL);
			V_1 = L_5;
			goto IL_001a;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_001a:
	{
		RuntimeObject* L_6 = V_1;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Parser_Dispose_mC393F1F7B2BE6DAD7B54A9B07175D06683004616 (Parser_t6F2C17AE4B45A0B404D1881D47B2AA8B2981D38C* __this, const RuntimeMethod* method) 
{
	{
		StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8* L_0 = __this->___json;
		NullCheck(L_0);
		TextReader_Dispose_mDCB332EFA06970A9CC7EC4596FCC5220B9512616(L_0, NULL);
		__this->___json = (StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___json), (void*)(StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8*)NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* Parser_ParseObject_mC129607C90BA628D70512884CD7410E92EC7493D (Parser_t6F2C17AE4B45A0B404D1881D47B2AA8B2981D38C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m7CCA97075B48AFB2B97E5A072B94BC7679374341_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* V_0 = NULL;
	String_t* V_1 = NULL;
	int32_t V_2 = 0;
	{
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_0 = (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*)il2cpp_codegen_object_new(Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9(L_0, Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var);
		V_0 = L_0;
		StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8* L_1 = __this->___json;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(7, L_1);
	}

IL_0012:
	{
		int32_t L_3;
		L_3 = Parser_get_NextToken_mE11FFDBF97BAC9AD22EE729FD0D55364388325D6(__this, NULL);
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
		return (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*)NULL;
	}

IL_0028:
	{
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_7 = V_0;
		return L_7;
	}

IL_002a:
	{
		String_t* L_8;
		L_8 = Parser_ParseString_mB3FF8B4C52AF5BC6279CE7DD5FD058B874E0078B(__this, NULL);
		V_1 = L_8;
		String_t* L_9 = V_1;
		if (L_9)
		{
			goto IL_0036;
		}
	}
	{
		return (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*)NULL;
	}

IL_0036:
	{
		int32_t L_10;
		L_10 = Parser_get_NextToken_mE11FFDBF97BAC9AD22EE729FD0D55364388325D6(__this, NULL);
		if ((((int32_t)L_10) == ((int32_t)5)))
		{
			goto IL_0041;
		}
	}
	{
		return (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*)NULL;
	}

IL_0041:
	{
		StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8* L_11 = __this->___json;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = VirtualFuncInvoker0< int32_t >::Invoke(7, L_11);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_13 = V_0;
		String_t* L_14 = V_1;
		RuntimeObject* L_15;
		L_15 = Parser_ParseValue_m1B7E05DCE0B6435C7679A4878A0371B990764B41(__this, NULL);
		NullCheck(L_13);
		Dictionary_2_set_Item_m7CCA97075B48AFB2B97E5A072B94BC7679374341(L_13, L_14, L_15, Dictionary_2_set_Item_m7CCA97075B48AFB2B97E5A072B94BC7679374341_RuntimeMethod_var);
		goto IL_0012;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* Parser_ParseArray_m91F6F3E6E84BA32CF62544967F412C86A6C940F1 (Parser_t6F2C17AE4B45A0B404D1881D47B2AA8B2981D38C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_0 = (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*)il2cpp_codegen_object_new(List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_il2cpp_TypeInfo_var);
		List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690(L_0, List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_RuntimeMethod_var);
		V_0 = L_0;
		StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8* L_1 = __this->___json;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(7, L_1);
		V_1 = (bool)1;
		goto IL_003f;
	}

IL_0016:
	{
		int32_t L_3;
		L_3 = Parser_get_NextToken_mE11FFDBF97BAC9AD22EE729FD0D55364388325D6(__this, NULL);
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
		return (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*)NULL;
	}

IL_002c:
	{
		V_1 = (bool)0;
		goto IL_003f;
	}

IL_0030:
	{
		int32_t L_7 = V_2;
		RuntimeObject* L_8;
		L_8 = Parser_ParseByToken_mC26F86B5A9BB6DC7A8F419619B74B628F3C9F738(__this, L_7, NULL);
		V_3 = L_8;
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_9 = V_0;
		RuntimeObject* L_10 = V_3;
		NullCheck(L_9);
		List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_inline(L_9, L_10, List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_RuntimeMethod_var);
	}

IL_003f:
	{
		bool L_11 = V_1;
		if (L_11)
		{
			goto IL_0016;
		}
	}
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_12 = V_0;
		return L_12;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Parser_ParseValue_m1B7E05DCE0B6435C7679A4878A0371B990764B41 (Parser_t6F2C17AE4B45A0B404D1881D47B2AA8B2981D38C* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = Parser_get_NextToken_mE11FFDBF97BAC9AD22EE729FD0D55364388325D6(__this, NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		RuntimeObject* L_2;
		L_2 = Parser_ParseByToken_mC26F86B5A9BB6DC7A8F419619B74B628F3C9F738(__this, L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Parser_ParseByToken_mC26F86B5A9BB6DC7A8F419619B74B628F3C9F738 (Parser_t6F2C17AE4B45A0B404D1881D47B2AA8B2981D38C* __this, int32_t ___0_token, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___0_token;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_0, 1)))
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
		String_t* L_1;
		L_1 = Parser_ParseString_mB3FF8B4C52AF5BC6279CE7DD5FD058B874E0078B(__this, NULL);
		return L_1;
	}

IL_003d:
	{
		RuntimeObject* L_2;
		L_2 = Parser_ParseNumber_m2C0B8EAD7D8ED45A37E1FB2ACD5E7A8212A2C714(__this, NULL);
		return L_2;
	}

IL_0044:
	{
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_3;
		L_3 = Parser_ParseObject_mC129607C90BA628D70512884CD7410E92EC7493D(__this, NULL);
		return L_3;
	}

IL_004b:
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_4;
		L_4 = Parser_ParseArray_m91F6F3E6E84BA32CF62544967F412C86A6C940F1(__this, NULL);
		return L_4;
	}

IL_0052:
	{
		bool L_5 = ((bool)1);
		RuntimeObject* L_6 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}

IL_0059:
	{
		bool L_7 = ((bool)0);
		RuntimeObject* L_8 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_7);
		return L_8;
	}

IL_0060:
	{
		return NULL;
	}

IL_0062:
	{
		return NULL;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Parser_ParseString_mB3FF8B4C52AF5BC6279CE7DD5FD058B874E0078B (Parser_t6F2C17AE4B45A0B404D1881D47B2AA8B2981D38C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	Il2CppChar V_1 = 0x0;
	bool V_2 = false;
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* V_3 = NULL;
	int32_t V_4 = 0;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8* L_1 = __this->___json;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(7, L_1);
		V_2 = (bool)1;
		goto IL_013d;
	}

IL_0019:
	{
		StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8* L_3 = __this->___json;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = VirtualFuncInvoker0< int32_t >::Invoke(6, L_3);
		if ((((int32_t)L_4) == ((int32_t)(-1))))
		{
			goto IL_0143;
		}
	}
	{
		Il2CppChar L_5;
		L_5 = Parser_get_NextChar_mB5FC1831EF72916E114ECA94FBCB3D8CA1056ACF(__this, NULL);
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
		V_2 = (bool)0;
		goto IL_013d;
	}

IL_0047:
	{
		StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8* L_8 = __this->___json;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = VirtualFuncInvoker0< int32_t >::Invoke(6, L_8);
		if ((!(((uint32_t)L_9) == ((uint32_t)(-1)))))
		{
			goto IL_005c;
		}
	}
	{
		V_2 = (bool)0;
		goto IL_013d;
	}

IL_005c:
	{
		Il2CppChar L_10;
		L_10 = Parser_get_NextChar_mB5FC1831EF72916E114ECA94FBCB3D8CA1056ACF(__this, NULL);
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
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_19, ((int32_t)114))))
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
		StringBuilder_t* L_20 = V_0;
		Il2CppChar L_21 = V_1;
		NullCheck(L_20);
		StringBuilder_t* L_22;
		L_22 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_20, L_21, NULL);
		goto IL_013d;
	}

IL_00bd:
	{
		StringBuilder_t* L_23 = V_0;
		NullCheck(L_23);
		StringBuilder_t* L_24;
		L_24 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_23, 8, NULL);
		goto IL_013d;
	}

IL_00c7:
	{
		StringBuilder_t* L_25 = V_0;
		NullCheck(L_25);
		StringBuilder_t* L_26;
		L_26 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_25, ((int32_t)12), NULL);
		goto IL_013d;
	}

IL_00d2:
	{
		StringBuilder_t* L_27 = V_0;
		NullCheck(L_27);
		StringBuilder_t* L_28;
		L_28 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_27, ((int32_t)10), NULL);
		goto IL_013d;
	}

IL_00dd:
	{
		StringBuilder_t* L_29 = V_0;
		NullCheck(L_29);
		StringBuilder_t* L_30;
		L_30 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_29, ((int32_t)13), NULL);
		goto IL_013d;
	}

IL_00e8:
	{
		StringBuilder_t* L_31 = V_0;
		NullCheck(L_31);
		StringBuilder_t* L_32;
		L_32 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_31, ((int32_t)9), NULL);
		goto IL_013d;
	}

IL_00f3:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_33 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)4);
		V_3 = L_33;
		V_4 = 0;
		goto IL_010f;
	}

IL_00ff:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_34 = V_3;
		int32_t L_35 = V_4;
		Il2CppChar L_36;
		L_36 = Parser_get_NextChar_mB5FC1831EF72916E114ECA94FBCB3D8CA1056ACF(__this, NULL);
		NullCheck(L_34);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(L_35), (Il2CppChar)L_36);
		int32_t L_37 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_37, 1));
	}

IL_010f:
	{
		int32_t L_38 = V_4;
		if ((((int32_t)L_38) < ((int32_t)4)))
		{
			goto IL_00ff;
		}
	}
	{
		StringBuilder_t* L_39 = V_0;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_40 = V_3;
		String_t* L_41;
		L_41 = String_CreateString_mFBC28D2E3EB87D497F7E702E4FFAD65F635E44DF(NULL, L_40, NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		int32_t L_42;
		L_42 = Convert_ToInt32_mD1B3AFBDA26E52D0382434804364FEF8BA241FB4(L_41, ((int32_t)16), NULL);
		NullCheck(L_39);
		StringBuilder_t* L_43;
		L_43 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_39, ((int32_t)(uint16_t)L_42), NULL);
		goto IL_013d;
	}

IL_012b:
	{
		StringBuilder_t* L_44 = V_0;
		Il2CppChar L_45 = V_1;
		NullCheck(L_44);
		StringBuilder_t* L_46;
		L_46 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_44, L_45, NULL);
		goto IL_013d;
	}

IL_0135:
	{
		StringBuilder_t* L_47 = V_0;
		Il2CppChar L_48 = V_1;
		NullCheck(L_47);
		StringBuilder_t* L_49;
		L_49 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_47, L_48, NULL);
	}

IL_013d:
	{
		bool L_50 = V_2;
		if (L_50)
		{
			goto IL_0019;
		}
	}

IL_0143:
	{
		StringBuilder_t* L_51 = V_0;
		NullCheck(L_51);
		String_t* L_52;
		L_52 = VirtualFuncInvoker0< String_t* >::Invoke(3, L_51);
		return L_52;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Parser_ParseNumber_m2C0B8EAD7D8ED45A37E1FB2ACD5E7A8212A2C714 (Parser_t6F2C17AE4B45A0B404D1881D47B2AA8B2981D38C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	double V_1 = 0.0;
	int64_t V_2 = 0;
	{
		String_t* L_0;
		L_0 = Parser_get_NextWord_m523714E46B1A48A04432D11FF5FC181B9CEE638C(__this, NULL);
		V_0 = L_0;
		String_t* L_1 = V_0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = String_IndexOf_mE21E78F35EF4A7768E385A72814C88D22B689966(L_1, ((int32_t)46), NULL);
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_0042;
		}
	}
	{
		String_t* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = String_IndexOf_mE21E78F35EF4A7768E385A72814C88D22B689966(L_3, ((int32_t)69), NULL);
		if ((!(((uint32_t)L_4) == ((uint32_t)(-1)))))
		{
			goto IL_0042;
		}
	}
	{
		String_t* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = String_IndexOf_mE21E78F35EF4A7768E385A72814C88D22B689966(L_5, ((int32_t)101), NULL);
		if ((!(((uint32_t)L_6) == ((uint32_t)(-1)))))
		{
			goto IL_0042;
		}
	}
	{
		String_t* L_7 = V_0;
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_8;
		L_8 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		bool L_9;
		L_9 = Int64_TryParse_m64CEDECE4C3F16B715CA1057801018B2957AE0E3(L_7, ((int32_t)511), L_8, (&V_2), NULL);
		int64_t L_10 = V_2;
		int64_t L_11 = L_10;
		RuntimeObject* L_12 = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &L_11);
		return L_12;
	}

IL_0042:
	{
		String_t* L_13 = V_0;
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_14;
		L_14 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		bool L_15;
		L_15 = Double_TryParse_m1D39DC22A45BC9A576B9D9130600BFD3CB6DA382(L_13, ((int32_t)511), L_14, (&V_1), NULL);
		double L_16 = V_1;
		double L_17 = L_16;
		RuntimeObject* L_18 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_17);
		return L_18;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Parser_EatWhitespace_mD5146E17EF15AFE2DF0C64426301D1EE6513C0A3 (Parser_t6F2C17AE4B45A0B404D1881D47B2AA8B2981D38C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		goto IL_001c;
	}

IL_0002:
	{
		StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8* L_0 = __this->___json;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(7, L_0);
		StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8* L_2 = __this->___json;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = VirtualFuncInvoker0< int32_t >::Invoke(6, L_2);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_0029;
		}
	}

IL_001c:
	{
		Il2CppChar L_4;
		L_4 = Parser_get_PeekChar_mA1D0A3B252CDD78BEA07DB4E6F898C66F71A7571(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Char_IsWhiteSpace_m02AEC6EA19513CAFC6882CFCA54C45794D2B5924(L_4, NULL);
		if (L_5)
		{
			goto IL_0002;
		}
	}

IL_0029:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar Parser_get_PeekChar_mA1D0A3B252CDD78BEA07DB4E6F898C66F71A7571 (Parser_t6F2C17AE4B45A0B404D1881D47B2AA8B2981D38C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8* L_0 = __this->___json;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(6, L_0);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		Il2CppChar L_2;
		L_2 = Convert_ToChar_mF1B1B205DDEFDE52251235514E7DAFCAB37D1F24(L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar Parser_get_NextChar_mB5FC1831EF72916E114ECA94FBCB3D8CA1056ACF (Parser_t6F2C17AE4B45A0B404D1881D47B2AA8B2981D38C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8* L_0 = __this->___json;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(7, L_0);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		Il2CppChar L_2;
		L_2 = Convert_ToChar_mF1B1B205DDEFDE52251235514E7DAFCAB37D1F24(L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Parser_get_NextWord_m523714E46B1A48A04432D11FF5FC181B9CEE638C (Parser_t6F2C17AE4B45A0B404D1881D47B2AA8B2981D38C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		goto IL_0023;
	}

IL_0008:
	{
		StringBuilder_t* L_1 = V_0;
		Il2CppChar L_2;
		L_2 = Parser_get_NextChar_mB5FC1831EF72916E114ECA94FBCB3D8CA1056ACF(__this, NULL);
		NullCheck(L_1);
		StringBuilder_t* L_3;
		L_3 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_1, L_2, NULL);
		StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8* L_4 = __this->___json;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = VirtualFuncInvoker0< int32_t >::Invoke(6, L_4);
		if ((((int32_t)L_5) == ((int32_t)(-1))))
		{
			goto IL_0030;
		}
	}

IL_0023:
	{
		Il2CppChar L_6;
		L_6 = Parser_get_PeekChar_mA1D0A3B252CDD78BEA07DB4E6F898C66F71A7571(__this, NULL);
		bool L_7;
		L_7 = Parser_IsWordBreak_m9D8592F6FB2502FC2B225C42DB7AC1160D8F9BE3(L_6, NULL);
		if (!L_7)
		{
			goto IL_0008;
		}
	}

IL_0030:
	{
		StringBuilder_t* L_8 = V_0;
		NullCheck(L_8);
		String_t* L_9;
		L_9 = VirtualFuncInvoker0< String_t* >::Invoke(3, L_8);
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Parser_get_NextToken_mE11FFDBF97BAC9AD22EE729FD0D55364388325D6 (Parser_t6F2C17AE4B45A0B404D1881D47B2AA8B2981D38C* __this, const RuntimeMethod* method) 
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
		Parser_EatWhitespace_mD5146E17EF15AFE2DF0C64426301D1EE6513C0A3(__this, NULL);
		StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8* L_0 = __this->___json;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(6, L_0);
		if ((!(((uint32_t)L_1) == ((uint32_t)(-1)))))
		{
			goto IL_0016;
		}
	}
	{
		return (int32_t)(0);
	}

IL_0016:
	{
		Il2CppChar L_2;
		L_2 = Parser_get_PeekChar_mA1D0A3B252CDD78BEA07DB4E6F898C66F71A7571(__this, NULL);
		V_0 = L_2;
		Il2CppChar L_3 = V_0;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)91)))))
		{
			goto IL_0096;
		}
	}
	{
		Il2CppChar L_4 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_4, ((int32_t)34))))
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
		return (int32_t)(1);
	}

IL_00a9:
	{
		StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8* L_9 = __this->___json;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = VirtualFuncInvoker0< int32_t >::Invoke(7, L_9);
		return (int32_t)(2);
	}

IL_00b7:
	{
		return (int32_t)(3);
	}

IL_00b9:
	{
		StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8* L_11 = __this->___json;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = VirtualFuncInvoker0< int32_t >::Invoke(7, L_11);
		return (int32_t)(4);
	}

IL_00c7:
	{
		StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8* L_13 = __this->___json;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = VirtualFuncInvoker0< int32_t >::Invoke(7, L_13);
		return (int32_t)(6);
	}

IL_00d5:
	{
		return (int32_t)(7);
	}

IL_00d7:
	{
		return (int32_t)(5);
	}

IL_00d9:
	{
		return (int32_t)(8);
	}

IL_00db:
	{
		String_t* L_15;
		L_15 = Parser_get_NextWord_m523714E46B1A48A04432D11FF5FC181B9CEE638C(__this, NULL);
		V_1 = L_15;
		String_t* L_16 = V_1;
		bool L_17;
		L_17 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_16, _stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB, NULL);
		if (L_17)
		{
			goto IL_010b;
		}
	}
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2, NULL);
		if (L_19)
		{
			goto IL_010e;
		}
	}
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174, NULL);
		if (L_21)
		{
			goto IL_0111;
		}
	}
	{
		goto IL_0114;
	}

IL_010b:
	{
		return (int32_t)(((int32_t)10));
	}

IL_010e:
	{
		return (int32_t)(((int32_t)9));
	}

IL_0111:
	{
		return (int32_t)(((int32_t)11));
	}

IL_0114:
	{
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer__ctor_m99E1E12C48B39230E7488D02026BF2572D0792DF (Serializer_t99E9F0C039FC8B46E85C6D18EDBE2EFC68781CF5* __this, bool ___0_humanReadable, int32_t ___1_indentSpaces, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		__this->___builder = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___builder), (void*)L_0);
		bool L_1 = ___0_humanReadable;
		__this->___humanReadable = L_1;
		int32_t L_2 = ___1_indentSpaces;
		__this->___indentSpaces = L_2;
		__this->___indentLevel = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Serializer_MakeSerialization_m58B5B1531741F5A9143E9B0B70807331BEBA61CA (RuntimeObject* ___0_obj, bool ___1_humanReadable, int32_t ___2_indentSpaces, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Serializer_t99E9F0C039FC8B46E85C6D18EDBE2EFC68781CF5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ___1_humanReadable;
		int32_t L_1 = ___2_indentSpaces;
		Serializer_t99E9F0C039FC8B46E85C6D18EDBE2EFC68781CF5* L_2 = (Serializer_t99E9F0C039FC8B46E85C6D18EDBE2EFC68781CF5*)il2cpp_codegen_object_new(Serializer_t99E9F0C039FC8B46E85C6D18EDBE2EFC68781CF5_il2cpp_TypeInfo_var);
		Serializer__ctor_m99E1E12C48B39230E7488D02026BF2572D0792DF(L_2, L_0, L_1, NULL);
		Serializer_t99E9F0C039FC8B46E85C6D18EDBE2EFC68781CF5* L_3 = L_2;
		RuntimeObject* L_4 = ___0_obj;
		NullCheck(L_3);
		Serializer_SerializeValue_m05F48CBD03A0580F94083F0EC60ACC24025F9847(L_3, L_4, NULL);
		NullCheck(L_3);
		StringBuilder_t* L_5 = L_3->___builder;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = VirtualFuncInvoker0< String_t* >::Invoke(3, L_5);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeValue_m05F48CBD03A0580F94083F0EC60ACC24025F9847 (Serializer_t99E9F0C039FC8B46E85C6D18EDBE2EFC68781CF5* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	String_t* V_2 = NULL;
	StringBuilder_t* G_B7_0 = NULL;
	StringBuilder_t* G_B6_0 = NULL;
	String_t* G_B8_0 = NULL;
	StringBuilder_t* G_B8_1 = NULL;
	{
		RuntimeObject* L_0 = ___0_value;
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		StringBuilder_t* L_1 = __this->___builder;
		NullCheck(L_1);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_1, _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174, NULL);
		return;
	}

IL_0015:
	{
		RuntimeObject* L_3 = ___0_value;
		String_t* L_4 = ((String_t*)IsInstSealed((RuntimeObject*)L_3, String_t_il2cpp_TypeInfo_var));
		V_2 = L_4;
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		String_t* L_5 = V_2;
		Serializer_SerializeString_mDC5E9C2B126BF45E499655700E82D80929FA3511(__this, L_5, NULL);
		return;
	}

IL_0027:
	{
		RuntimeObject* L_6 = ___0_value;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_6, Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var)))
		{
			goto IL_0050;
		}
	}
	{
		StringBuilder_t* L_7 = __this->___builder;
		RuntimeObject* L_8 = ___0_value;
		if (((*(bool*)((bool*)(bool*)UnBox(L_8, Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var)))))
		{
			G_B7_0 = L_7;
			goto IL_0044;
		}
		G_B6_0 = L_7;
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
		StringBuilder_t* L_9;
		L_9 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(G_B8_1, G_B8_0, NULL);
		return;
	}

IL_0050:
	{
		RuntimeObject* L_10 = ___0_value;
		RuntimeObject* L_11 = ((RuntimeObject*)IsInst((RuntimeObject*)L_10, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var));
		V_0 = L_11;
		if (!L_11)
		{
			goto IL_0062;
		}
	}
	{
		RuntimeObject* L_12 = V_0;
		Serializer_SerializeArray_m9D612F968FC32957BBCEA48C7554FB8B73CE6021(__this, L_12, NULL);
		return;
	}

IL_0062:
	{
		RuntimeObject* L_13 = ___0_value;
		RuntimeObject* L_14 = ((RuntimeObject*)IsInst((RuntimeObject*)L_13, IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var));
		V_1 = L_14;
		if (!L_14)
		{
			goto IL_0074;
		}
	}
	{
		RuntimeObject* L_15 = V_1;
		Serializer_SerializeObject_m752864D4085775CF21F8A9866C857DCC72614491(__this, L_15, NULL);
		return;
	}

IL_0074:
	{
		RuntimeObject* L_16 = ___0_value;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_16, Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var)))
		{
			goto IL_008f;
		}
	}
	{
		RuntimeObject* L_17 = ___0_value;
		String_t* L_18;
		L_18 = String_CreateString_mAA0705B41B390BDB42F67894B9B67C956814C71B(NULL, ((*(Il2CppChar*)((Il2CppChar*)(Il2CppChar*)UnBox(L_17, Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var)))), 1, NULL);
		Serializer_SerializeString_mDC5E9C2B126BF45E499655700E82D80929FA3511(__this, L_18, NULL);
		return;
	}

IL_008f:
	{
		RuntimeObject* L_19 = ___0_value;
		Serializer_SerializeOther_mFFB73E1A04876CD6A2625EDD360AAC8B30DF155A(__this, L_19, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_AppendNewLineFunc_m1C3D039E09D1EBB75C8E5016A7754802E882CF26 (Serializer_t99E9F0C039FC8B46E85C6D18EDBE2EFC68781CF5* __this, const RuntimeMethod* method) 
{
	{
		StringBuilder_t* L_0 = __this->___builder;
		NullCheck(L_0);
		StringBuilder_t* L_1;
		L_1 = StringBuilder_AppendLine_m3BC704C4E6A8531027D8C9287D0AB2AA0188AC4E(L_0, NULL);
		StringBuilder_t* L_2 = __this->___builder;
		int32_t L_3 = __this->___indentSpaces;
		int32_t L_4 = __this->___indentLevel;
		NullCheck(L_2);
		StringBuilder_t* L_5;
		L_5 = StringBuilder_Append_mE20F6CD28FC8E8C9FD65987DBD32E6087CCE1CF3(L_2, ((int32_t)32), ((int32_t)il2cpp_codegen_multiply(L_3, L_4)), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeObject_m752864D4085775CF21F8A9866C857DCC72614491 (Serializer_t99E9F0C039FC8B46E85C6D18EDBE2EFC68781CF5* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	{
		V_0 = (bool)1;
		StringBuilder_t* L_0 = __this->___builder;
		NullCheck(L_0);
		StringBuilder_t* L_1;
		L_1 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_0, ((int32_t)123), NULL);
		int32_t L_2 = __this->___indentLevel;
		__this->___indentLevel = ((int32_t)il2cpp_codegen_add(L_2, 1));
		RuntimeObject* L_3 = ___0_obj;
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1, IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var, L_3);
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var, L_4);
		V_1 = L_5;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00ab:
			{
				{
					RuntimeObject* L_6 = V_1;
					V_3 = ((RuntimeObject*)IsInst((RuntimeObject*)L_6, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_7 = V_3;
					if (!L_7)
					{
						goto IL_00bb;
					}
				}
				{
					RuntimeObject* L_8 = V_3;
					NullCheck(L_8);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_8);
				}

IL_00bb:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00a1_1;
			}

IL_002c_1:
			{
				RuntimeObject* L_9 = V_1;
				NullCheck(L_9);
				RuntimeObject* L_10;
				L_10 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_9);
				V_2 = L_10;
				bool L_11 = V_0;
				if (!L_11)
				{
					goto IL_0046_1;
				}
			}
			{
				bool L_12 = __this->___humanReadable;
				if (!L_12)
				{
					goto IL_0062_1;
				}
			}
			{
				Serializer_AppendNewLineFunc_m1C3D039E09D1EBB75C8E5016A7754802E882CF26(__this, NULL);
				goto IL_0062_1;
			}

IL_0046_1:
			{
				StringBuilder_t* L_13 = __this->___builder;
				NullCheck(L_13);
				StringBuilder_t* L_14;
				L_14 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_13, ((int32_t)44), NULL);
				bool L_15 = __this->___humanReadable;
				if (!L_15)
				{
					goto IL_0062_1;
				}
			}
			{
				Serializer_AppendNewLineFunc_m1C3D039E09D1EBB75C8E5016A7754802E882CF26(__this, NULL);
			}

IL_0062_1:
			{
				RuntimeObject* L_16 = V_2;
				NullCheck(L_16);
				String_t* L_17;
				L_17 = VirtualFuncInvoker0< String_t* >::Invoke(3, L_16);
				Serializer_SerializeString_mDC5E9C2B126BF45E499655700E82D80929FA3511(__this, L_17, NULL);
				StringBuilder_t* L_18 = __this->___builder;
				NullCheck(L_18);
				StringBuilder_t* L_19;
				L_19 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_18, ((int32_t)58), NULL);
				bool L_20 = __this->___humanReadable;
				if (!L_20)
				{
					goto IL_0092_1;
				}
			}
			{
				StringBuilder_t* L_21 = __this->___builder;
				NullCheck(L_21);
				StringBuilder_t* L_22;
				L_22 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_21, ((int32_t)32), NULL);
			}

IL_0092_1:
			{
				RuntimeObject* L_23 = ___0_obj;
				RuntimeObject* L_24 = V_2;
				NullCheck(L_23);
				RuntimeObject* L_25;
				L_25 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0, IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var, L_23, L_24);
				Serializer_SerializeValue_m05F48CBD03A0580F94083F0EC60ACC24025F9847(__this, L_25, NULL);
				V_0 = (bool)0;
			}

IL_00a1_1:
			{
				RuntimeObject* L_26 = V_1;
				NullCheck(L_26);
				bool L_27;
				L_27 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_26);
				if (L_27)
				{
					goto IL_002c_1;
				}
			}
			{
				goto IL_00bc;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00bc:
	{
		int32_t L_28 = __this->___indentLevel;
		__this->___indentLevel = ((int32_t)il2cpp_codegen_subtract(L_28, 1));
		bool L_29 = __this->___humanReadable;
		if (!L_29)
		{
			goto IL_00e1;
		}
	}
	{
		RuntimeObject* L_30 = ___0_obj;
		NullCheck(L_30);
		int32_t L_31;
		L_31 = InterfaceFuncInvoker0< int32_t >::Invoke(0, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, L_30);
		if ((((int32_t)L_31) <= ((int32_t)0)))
		{
			goto IL_00e1;
		}
	}
	{
		Serializer_AppendNewLineFunc_m1C3D039E09D1EBB75C8E5016A7754802E882CF26(__this, NULL);
	}

IL_00e1:
	{
		StringBuilder_t* L_32 = __this->___builder;
		NullCheck(L_32);
		StringBuilder_t* L_33;
		L_33 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_32, ((int32_t)125), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeArray_m9D612F968FC32957BBCEA48C7554FB8B73CE6021 (Serializer_t99E9F0C039FC8B46E85C6D18EDBE2EFC68781CF5* __this, RuntimeObject* ___0_anArray, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	{
		StringBuilder_t* L_0 = __this->___builder;
		NullCheck(L_0);
		StringBuilder_t* L_1;
		L_1 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_0, ((int32_t)91), NULL);
		int32_t L_2 = __this->___indentLevel;
		__this->___indentLevel = ((int32_t)il2cpp_codegen_add(L_2, 1));
		V_0 = (bool)1;
		V_1 = 0;
		goto IL_0066;
	}

IL_0022:
	{
		RuntimeObject* L_3 = ___0_anArray;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		RuntimeObject* L_5;
		L_5 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, L_3, L_4);
		V_2 = L_5;
		bool L_6 = V_0;
		if (!L_6)
		{
			goto IL_003d;
		}
	}
	{
		bool L_7 = __this->___humanReadable;
		if (!L_7)
		{
			goto IL_0059;
		}
	}
	{
		Serializer_AppendNewLineFunc_m1C3D039E09D1EBB75C8E5016A7754802E882CF26(__this, NULL);
		goto IL_0059;
	}

IL_003d:
	{
		StringBuilder_t* L_8 = __this->___builder;
		NullCheck(L_8);
		StringBuilder_t* L_9;
		L_9 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_8, ((int32_t)44), NULL);
		bool L_10 = __this->___humanReadable;
		if (!L_10)
		{
			goto IL_0059;
		}
	}
	{
		Serializer_AppendNewLineFunc_m1C3D039E09D1EBB75C8E5016A7754802E882CF26(__this, NULL);
	}

IL_0059:
	{
		RuntimeObject* L_11 = V_2;
		Serializer_SerializeValue_m05F48CBD03A0580F94083F0EC60ACC24025F9847(__this, L_11, NULL);
		V_0 = (bool)0;
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0066:
	{
		int32_t L_13 = V_1;
		RuntimeObject* L_14 = ___0_anArray;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = InterfaceFuncInvoker0< int32_t >::Invoke(0, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, L_14);
		if ((((int32_t)L_13) < ((int32_t)L_15)))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_16 = __this->___indentLevel;
		__this->___indentLevel = ((int32_t)il2cpp_codegen_subtract(L_16, 1));
		bool L_17 = __this->___humanReadable;
		if (!L_17)
		{
			goto IL_0094;
		}
	}
	{
		RuntimeObject* L_18 = ___0_anArray;
		NullCheck(L_18);
		int32_t L_19;
		L_19 = InterfaceFuncInvoker0< int32_t >::Invoke(0, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, L_18);
		if ((((int32_t)L_19) <= ((int32_t)0)))
		{
			goto IL_0094;
		}
	}
	{
		Serializer_AppendNewLineFunc_m1C3D039E09D1EBB75C8E5016A7754802E882CF26(__this, NULL);
	}

IL_0094:
	{
		StringBuilder_t* L_20 = __this->___builder;
		NullCheck(L_20);
		StringBuilder_t* L_21;
		L_21 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_20, ((int32_t)93), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeString_mDC5E9C2B126BF45E499655700E82D80929FA3511 (Serializer_t99E9F0C039FC8B46E85C6D18EDBE2EFC68781CF5* __this, String_t* ___0_str, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
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
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* V_0 = NULL;
	int32_t V_1 = 0;
	Il2CppChar V_2 = 0x0;
	int32_t V_3 = 0;
	{
		StringBuilder_t* L_0 = __this->___builder;
		NullCheck(L_0);
		StringBuilder_t* L_1;
		L_1 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_0, ((int32_t)34), NULL);
		String_t* L_2 = ___0_str;
		NullCheck(L_2);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_3;
		L_3 = String_ToCharArray_m0699A92AA3E744229EF29CB9D943C47DF4FE5B46(L_2, NULL);
		V_0 = L_3;
		V_1 = 0;
		goto IL_012d;
	}

IL_001c:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_4 = V_0;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		uint16_t L_7 = (uint16_t)(L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_2 = L_7;
		Il2CppChar L_8 = V_2;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_8, 8)))
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
		StringBuilder_t* L_11 = __this->___builder;
		NullCheck(L_11);
		StringBuilder_t* L_12;
		L_12 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_11, _stringLiteral848E5ED630B3142F565DD995C6E8D30187ED33CD, NULL);
		goto IL_0129;
	}

IL_0065:
	{
		StringBuilder_t* L_13 = __this->___builder;
		NullCheck(L_13);
		StringBuilder_t* L_14;
		L_14 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_13, _stringLiteralF18840F490E42D3CE48CDCBF47229C1C240F8ABE, NULL);
		goto IL_0129;
	}

IL_007b:
	{
		StringBuilder_t* L_15 = __this->___builder;
		NullCheck(L_15);
		StringBuilder_t* L_16;
		L_16 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_15, _stringLiteral5962E944D7340CE47999BF097B4AFD70C1501FB9, NULL);
		goto IL_0129;
	}

IL_0091:
	{
		StringBuilder_t* L_17 = __this->___builder;
		NullCheck(L_17);
		StringBuilder_t* L_18;
		L_18 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_17, _stringLiteralA7C3FCA8C63E127B542B38A5CA5E3FEEDDD1B122, NULL);
		goto IL_0129;
	}

IL_00a7:
	{
		StringBuilder_t* L_19 = __this->___builder;
		NullCheck(L_19);
		StringBuilder_t* L_20;
		L_20 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_19, _stringLiteral785F17F45C331C415D0A7458E6AAC36966399C51, NULL);
		goto IL_0129;
	}

IL_00ba:
	{
		StringBuilder_t* L_21 = __this->___builder;
		NullCheck(L_21);
		StringBuilder_t* L_22;
		L_22 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_21, _stringLiteralB78F235D4291950A7D101307609C259F3E1F033F, NULL);
		goto IL_0129;
	}

IL_00cd:
	{
		StringBuilder_t* L_23 = __this->___builder;
		NullCheck(L_23);
		StringBuilder_t* L_24;
		L_24 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_23, _stringLiteral7F3238CD8C342B06FB9AB185C610175C84625462, NULL);
		goto IL_0129;
	}

IL_00e0:
	{
		Il2CppChar L_25 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		int32_t L_26;
		L_26 = Convert_ToInt32_mDBBE9318A7CCE1560974CE93F5BFED9931CF0052(L_25, NULL);
		V_3 = L_26;
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
		StringBuilder_t* L_29 = __this->___builder;
		Il2CppChar L_30 = V_2;
		NullCheck(L_29);
		StringBuilder_t* L_31;
		L_31 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_29, L_30, NULL);
		goto IL_0129;
	}

IL_0100:
	{
		StringBuilder_t* L_32 = __this->___builder;
		NullCheck(L_32);
		StringBuilder_t* L_33;
		L_33 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_32, _stringLiteralDA666908BB15F4E1D2649752EC5DCBD0D5C64699, NULL);
		StringBuilder_t* L_34 = __this->___builder;
		String_t* L_35;
		L_35 = Int32_ToString_m967AECC237535C552A97A80C7875E31B98496CA9((&V_3), _stringLiteralE727BF366E3CC855B808D806440542BF7152AF19, NULL);
		NullCheck(L_34);
		StringBuilder_t* L_36;
		L_36 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_34, L_35, NULL);
	}

IL_0129:
	{
		int32_t L_37 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_37, 1));
	}

IL_012d:
	{
		int32_t L_38 = V_1;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_39 = V_0;
		NullCheck(L_39);
		if ((((int32_t)L_38) < ((int32_t)((int32_t)(((RuntimeArray*)L_39)->max_length)))))
		{
			goto IL_001c;
		}
	}
	{
		StringBuilder_t* L_40 = __this->___builder;
		NullCheck(L_40);
		StringBuilder_t* L_41;
		L_41 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_40, ((int32_t)34), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeOther_mFFB73E1A04876CD6A2625EDD360AAC8B30DF155A (Serializer_t99E9F0C039FC8B46E85C6D18EDBE2EFC68781CF5* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2C3D4826D5236B3C9A914C5CE2E3D8CEA48AC7CE);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	double V_1 = 0.0;
	{
		RuntimeObject* L_0 = ___0_value;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var)))
		{
			goto IL_002d;
		}
	}
	{
		StringBuilder_t* L_1 = __this->___builder;
		RuntimeObject* L_2 = ___0_value;
		V_0 = ((*(float*)((float*)(float*)UnBox(L_2, Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var))));
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_3;
		L_3 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		String_t* L_4;
		L_4 = Single_ToString_mF468A56B3A746EFD805E0604EE7A2873DA157ADE((&V_0), _stringLiteral2C3D4826D5236B3C9A914C5CE2E3D8CEA48AC7CE, L_3, NULL);
		NullCheck(L_1);
		StringBuilder_t* L_5;
		L_5 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_1, L_4, NULL);
		return;
	}

IL_002d:
	{
		RuntimeObject* L_6 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_6, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)))
		{
			goto IL_006d;
		}
	}
	{
		RuntimeObject* L_7 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_7, UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var)))
		{
			goto IL_006d;
		}
	}
	{
		RuntimeObject* L_8 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_8, Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var)))
		{
			goto IL_006d;
		}
	}
	{
		RuntimeObject* L_9 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_9, SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var)))
		{
			goto IL_006d;
		}
	}
	{
		RuntimeObject* L_10 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_10, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var)))
		{
			goto IL_006d;
		}
	}
	{
		RuntimeObject* L_11 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_11, Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var)))
		{
			goto IL_006d;
		}
	}
	{
		RuntimeObject* L_12 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_12, UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var)))
		{
			goto IL_006d;
		}
	}
	{
		RuntimeObject* L_13 = ___0_value;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_13, UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var)))
		{
			goto IL_007b;
		}
	}

IL_006d:
	{
		StringBuilder_t* L_14 = __this->___builder;
		RuntimeObject* L_15 = ___0_value;
		NullCheck(L_14);
		StringBuilder_t* L_16;
		L_16 = StringBuilder_Append_m3A7D629DAA5E0E36B8A617A911E34F79AF84AE63(L_14, L_15, NULL);
		return;
	}

IL_007b:
	{
		RuntimeObject* L_17 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_17, Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}
	{
		RuntimeObject* L_18 = ___0_value;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_18, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var)))
		{
			goto IL_00b0;
		}
	}

IL_008b:
	{
		StringBuilder_t* L_19 = __this->___builder;
		RuntimeObject* L_20 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		double L_21;
		L_21 = Convert_ToDouble_m86FF4F837721833186E883102C056A35F0860EB0(L_20, NULL);
		V_1 = L_21;
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_22;
		L_22 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		String_t* L_23;
		L_23 = Double_ToString_m7E3930DDFB35B1919FE538A246A59C3FC62AF789((&V_1), _stringLiteral2C3D4826D5236B3C9A914C5CE2E3D8CEA48AC7CE, L_22, NULL);
		NullCheck(L_19);
		StringBuilder_t* L_24;
		L_24 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_19, L_23, NULL);
		return;
	}

IL_00b0:
	{
		RuntimeObject* L_25 = ___0_value;
		NullCheck(L_25);
		String_t* L_26;
		L_26 = VirtualFuncInvoker0< String_t* >::Invoke(3, L_25);
		Serializer_SerializeString_mDC5E9C2B126BF45E499655700E82D80929FA3511(__this, L_26, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SDKDebug_add_LogIntercept_mA141393EAA236D040DA9E613635EAFB701B93574 (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SDKDebug_tF8D13EFEF2CFB61B0862388919A7481BBED893B6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* V_0 = NULL;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* V_1 = NULL;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* V_2 = NULL;
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_0 = ((SDKDebug_tF8D13EFEF2CFB61B0862388919A7481BBED893B6_StaticFields*)il2cpp_codegen_static_fields_for(SDKDebug_tF8D13EFEF2CFB61B0862388919A7481BBED893B6_il2cpp_TypeInfo_var))->___LogIntercept;
		V_0 = L_0;
	}

IL_0006:
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_1 = V_0;
		V_1 = L_1;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_2 = V_1;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)Castclass((RuntimeObject*)L_4, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var));
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_5 = V_2;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_6 = V_1;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*>((&((SDKDebug_tF8D13EFEF2CFB61B0862388919A7481BBED893B6_StaticFields*)il2cpp_codegen_static_fields_for(SDKDebug_tF8D13EFEF2CFB61B0862388919A7481BBED893B6_il2cpp_TypeInfo_var))->___LogIntercept), L_5, L_6);
		V_0 = L_7;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_8 = V_0;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)L_8) == ((RuntimeObject*)(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SDKDebug_remove_LogIntercept_m48A3CCEF560C95BA5112E805296329289032205F (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SDKDebug_tF8D13EFEF2CFB61B0862388919A7481BBED893B6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* V_0 = NULL;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* V_1 = NULL;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* V_2 = NULL;
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_0 = ((SDKDebug_tF8D13EFEF2CFB61B0862388919A7481BBED893B6_StaticFields*)il2cpp_codegen_static_fields_for(SDKDebug_tF8D13EFEF2CFB61B0862388919A7481BBED893B6_il2cpp_TypeInfo_var))->___LogIntercept;
		V_0 = L_0;
	}

IL_0006:
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_1 = V_0;
		V_1 = L_1;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_2 = V_1;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)Castclass((RuntimeObject*)L_4, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var));
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_5 = V_2;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_6 = V_1;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*>((&((SDKDebug_tF8D13EFEF2CFB61B0862388919A7481BBED893B6_StaticFields*)il2cpp_codegen_static_fields_for(SDKDebug_tF8D13EFEF2CFB61B0862388919A7481BBED893B6_il2cpp_TypeInfo_var))->___LogIntercept), L_5, L_6);
		V_0 = L_7;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_8 = V_0;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)L_8) == ((RuntimeObject*)(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SDKDebug_add_WarnIntercept_mBDC605D0EF0AD607FE9240697E44A49189E434DE (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SDKDebug_tF8D13EFEF2CFB61B0862388919A7481BBED893B6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* V_0 = NULL;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* V_1 = NULL;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* V_2 = NULL;
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_0 = ((SDKDebug_tF8D13EFEF2CFB61B0862388919A7481BBED893B6_StaticFields*)il2cpp_codegen_static_fields_for(SDKDebug_tF8D13EFEF2CFB61B0862388919A7481BBED893B6_il2cpp_TypeInfo_var))->___WarnIntercept;
		V_0 = L_0;
	}

IL_0006:
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_1 = V_0;
		V_1 = L_1;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_2 = V_1;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)Castclass((RuntimeObject*)L_4, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var));
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_5 = V_2;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_6 = V_1;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*>((&((SDKDebug_tF8D13EFEF2CFB61B0862388919A7481BBED893B6_StaticFields*)il2cpp_codegen_static_fields_for(SDKDebug_tF8D13EFEF2CFB61B0862388919A7481BBED893B6_il2cpp_TypeInfo_var))->___WarnIntercept), L_5, L_6);
		V_0 = L_7;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_8 = V_0;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)L_8) == ((RuntimeObject*)(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SDKDebug_remove_WarnIntercept_mB1724838BF0011755CAD8C2863E061D5A941213C (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SDKDebug_tF8D13EFEF2CFB61B0862388919A7481BBED893B6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* V_0 = NULL;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* V_1 = NULL;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* V_2 = NULL;
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_0 = ((SDKDebug_tF8D13EFEF2CFB61B0862388919A7481BBED893B6_StaticFields*)il2cpp_codegen_static_fields_for(SDKDebug_tF8D13EFEF2CFB61B0862388919A7481BBED893B6_il2cpp_TypeInfo_var))->___WarnIntercept;
		V_0 = L_0;
	}

IL_0006:
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_1 = V_0;
		V_1 = L_1;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_2 = V_1;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)Castclass((RuntimeObject*)L_4, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var));
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_5 = V_2;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_6 = V_1;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*>((&((SDKDebug_tF8D13EFEF2CFB61B0862388919A7481BBED893B6_StaticFields*)il2cpp_codegen_static_fields_for(SDKDebug_tF8D13EFEF2CFB61B0862388919A7481BBED893B6_il2cpp_TypeInfo_var))->___WarnIntercept), L_5, L_6);
		V_0 = L_7;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_8 = V_0;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)L_8) == ((RuntimeObject*)(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SDKDebug_add_ErrorIntercept_mC9F90CAB645197C073EC1799055CEEAD2C6A8683 (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SDKDebug_tF8D13EFEF2CFB61B0862388919A7481BBED893B6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* V_0 = NULL;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* V_1 = NULL;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* V_2 = NULL;
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_0 = ((SDKDebug_tF8D13EFEF2CFB61B0862388919A7481BBED893B6_StaticFields*)il2cpp_codegen_static_fields_for(SDKDebug_tF8D13EFEF2CFB61B0862388919A7481BBED893B6_il2cpp_TypeInfo_var))->___ErrorIntercept;
		V_0 = L_0;
	}

IL_0006:
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_1 = V_0;
		V_1 = L_1;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_2 = V_1;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)Castclass((RuntimeObject*)L_4, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var));
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_5 = V_2;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_6 = V_1;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*>((&((SDKDebug_tF8D13EFEF2CFB61B0862388919A7481BBED893B6_StaticFields*)il2cpp_codegen_static_fields_for(SDKDebug_tF8D13EFEF2CFB61B0862388919A7481BBED893B6_il2cpp_TypeInfo_var))->___ErrorIntercept), L_5, L_6);
		V_0 = L_7;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_8 = V_0;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)L_8) == ((RuntimeObject*)(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SDKDebug_remove_ErrorIntercept_m45F2DD9A21631818D63411A2AC438D3AED08B7AE (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SDKDebug_tF8D13EFEF2CFB61B0862388919A7481BBED893B6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* V_0 = NULL;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* V_1 = NULL;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* V_2 = NULL;
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_0 = ((SDKDebug_tF8D13EFEF2CFB61B0862388919A7481BBED893B6_StaticFields*)il2cpp_codegen_static_fields_for(SDKDebug_tF8D13EFEF2CFB61B0862388919A7481BBED893B6_il2cpp_TypeInfo_var))->___ErrorIntercept;
		V_0 = L_0;
	}

IL_0006:
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_1 = V_0;
		V_1 = L_1;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_2 = V_1;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)Castclass((RuntimeObject*)L_4, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var));
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_5 = V_2;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_6 = V_1;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*>((&((SDKDebug_tF8D13EFEF2CFB61B0862388919A7481BBED893B6_StaticFields*)il2cpp_codegen_static_fields_for(SDKDebug_tF8D13EFEF2CFB61B0862388919A7481BBED893B6_il2cpp_TypeInfo_var))->___ErrorIntercept), L_5, L_6);
		V_0 = L_7;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_8 = V_0;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)L_8) == ((RuntimeObject*)(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SDKDebug_Info_mA53892F1FD743FCD6BE8013A10EE8AEBEA51EFBE (String_t* ___0_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SDKDebug_tF8D13EFEF2CFB61B0862388919A7481BBED893B6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_0 = ((SDKDebug_tF8D13EFEF2CFB61B0862388919A7481BBED893B6_StaticFields*)il2cpp_codegen_static_fields_for(SDKDebug_tF8D13EFEF2CFB61B0862388919A7481BBED893B6_il2cpp_TypeInfo_var))->___LogIntercept;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_1 = ((SDKDebug_tF8D13EFEF2CFB61B0862388919A7481BBED893B6_StaticFields*)il2cpp_codegen_static_fields_for(SDKDebug_tF8D13EFEF2CFB61B0862388919A7481BBED893B6_il2cpp_TypeInfo_var))->___LogIntercept;
		String_t* L_2 = ___0_message;
		NullCheck(L_1);
		Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_inline(L_1, L_2, NULL);
		return;
	}

IL_0013:
	{
		OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85* L_3;
		L_3 = OneSignal_get_Default_m30ACD9671BB02F331AB116FBF747392E96B73EC4(NULL);
		NullCheck(L_3);
		int32_t L_4;
		L_4 = VirtualFuncInvoker0< int32_t >::Invoke(26, L_3);
		if ((((int32_t)L_4) < ((int32_t)4)))
		{
			goto IL_002b;
		}
	}
	{
		String_t* L_5 = ___0_message;
		String_t* L_6;
		L_6 = SDKDebug__formatMessage_m1231997542F440F8185068DC5EF9B2ED6DE00C1A(L_5, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_6, NULL);
	}

IL_002b:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SDKDebug_Warn_m9AE7B374D90E802C34A3C31DCF5C1BAB49C6BDD2 (String_t* ___0_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SDKDebug_tF8D13EFEF2CFB61B0862388919A7481BBED893B6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_0 = ((SDKDebug_tF8D13EFEF2CFB61B0862388919A7481BBED893B6_StaticFields*)il2cpp_codegen_static_fields_for(SDKDebug_tF8D13EFEF2CFB61B0862388919A7481BBED893B6_il2cpp_TypeInfo_var))->___WarnIntercept;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_1 = ((SDKDebug_tF8D13EFEF2CFB61B0862388919A7481BBED893B6_StaticFields*)il2cpp_codegen_static_fields_for(SDKDebug_tF8D13EFEF2CFB61B0862388919A7481BBED893B6_il2cpp_TypeInfo_var))->___WarnIntercept;
		String_t* L_2 = ___0_message;
		NullCheck(L_1);
		Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_inline(L_1, L_2, NULL);
		return;
	}

IL_0013:
	{
		OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85* L_3;
		L_3 = OneSignal_get_Default_m30ACD9671BB02F331AB116FBF747392E96B73EC4(NULL);
		NullCheck(L_3);
		int32_t L_4;
		L_4 = VirtualFuncInvoker0< int32_t >::Invoke(26, L_3);
		if ((((int32_t)L_4) < ((int32_t)3)))
		{
			goto IL_002b;
		}
	}
	{
		String_t* L_5 = ___0_message;
		String_t* L_6;
		L_6 = SDKDebug__formatMessage_m1231997542F440F8185068DC5EF9B2ED6DE00C1A(L_5, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(L_6, NULL);
	}

IL_002b:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SDKDebug_Error_mB646BF74F637F6456573041AE8C7351F07BFB867 (String_t* ___0_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SDKDebug_tF8D13EFEF2CFB61B0862388919A7481BBED893B6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_0 = ((SDKDebug_tF8D13EFEF2CFB61B0862388919A7481BBED893B6_StaticFields*)il2cpp_codegen_static_fields_for(SDKDebug_tF8D13EFEF2CFB61B0862388919A7481BBED893B6_il2cpp_TypeInfo_var))->___ErrorIntercept;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_1 = ((SDKDebug_tF8D13EFEF2CFB61B0862388919A7481BBED893B6_StaticFields*)il2cpp_codegen_static_fields_for(SDKDebug_tF8D13EFEF2CFB61B0862388919A7481BBED893B6_il2cpp_TypeInfo_var))->___ErrorIntercept;
		String_t* L_2 = ___0_message;
		NullCheck(L_1);
		Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_inline(L_1, L_2, NULL);
		return;
	}

IL_0013:
	{
		OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85* L_3;
		L_3 = OneSignal_get_Default_m30ACD9671BB02F331AB116FBF747392E96B73EC4(NULL);
		NullCheck(L_3);
		int32_t L_4;
		L_4 = VirtualFuncInvoker0< int32_t >::Invoke(26, L_3);
		if ((((int32_t)L_4) < ((int32_t)2)))
		{
			goto IL_002b;
		}
	}
	{
		String_t* L_5 = ___0_message;
		String_t* L_6;
		L_6 = SDKDebug__formatMessage_m1231997542F440F8185068DC5EF9B2ED6DE00C1A(L_5, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_6, NULL);
	}

IL_002b:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SDKDebug__formatMessage_m1231997542F440F8185068DC5EF9B2ED6DE00C1A (String_t* ___0_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBFB5DAA5265160CE753212EA77C3196536EF9342);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_message;
		String_t* L_1;
		L_1 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralBFB5DAA5265160CE753212EA77C3196536EF9342, L_0, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMainThreadDispatch_Send_mD724C3333BC0BF58B2A8256E466D8F32231CF76F (SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* ___0_callback, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityMainThreadDispatch_t2791D12B08651D1F1325AA78B06CFAA969DF7A12_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_0 = ((UnityMainThreadDispatch_t2791D12B08651D1F1325AA78B06CFAA969DF7A12_StaticFields*)il2cpp_codegen_static_fields_for(UnityMainThreadDispatch_t2791D12B08651D1F1325AA78B06CFAA969DF7A12_il2cpp_TypeInfo_var))->____context;
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_1 = ___0_callback;
		NullCheck(L_0);
		VirtualActionInvoker2< SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E*, RuntimeObject* >::Invoke(4, L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMainThreadDispatch_Post_m142E52EBFF48DC316B6D09D0485FB1C432214C42 (SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* ___0_callback, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityMainThreadDispatch_t2791D12B08651D1F1325AA78B06CFAA969DF7A12_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_0 = ((UnityMainThreadDispatch_t2791D12B08651D1F1325AA78B06CFAA969DF7A12_StaticFields*)il2cpp_codegen_static_fields_for(UnityMainThreadDispatch_t2791D12B08651D1F1325AA78B06CFAA969DF7A12_il2cpp_TypeInfo_var))->____context;
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_1 = ___0_callback;
		NullCheck(L_0);
		VirtualActionInvoker2< SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E*, RuntimeObject* >::Invoke(5, L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMainThreadDispatch__initialize_m4E19ED351179F0D3BA1096740320718AC7481243 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityMainThreadDispatch_t2791D12B08651D1F1325AA78B06CFAA969DF7A12_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* G_B2_0 = NULL;
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* G_B1_0 = NULL;
	{
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_0 = ((UnityMainThreadDispatch_t2791D12B08651D1F1325AA78B06CFAA969DF7A12_StaticFields*)il2cpp_codegen_static_fields_for(UnityMainThreadDispatch_t2791D12B08651D1F1325AA78B06CFAA969DF7A12_il2cpp_TypeInfo_var))->____context;
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000e;
		}
		G_B1_0 = L_1;
	}
	{
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_2;
		L_2 = SynchronizationContext_get_Current_m8DE6D3020745B7955249A2470A23EC0ECBB02A82(NULL);
		G_B2_0 = L_2;
	}

IL_000e:
	{
		((UnityMainThreadDispatch_t2791D12B08651D1F1325AA78B06CFAA969DF7A12_StaticFields*)il2cpp_codegen_static_fields_for(UnityMainThreadDispatch_t2791D12B08651D1F1325AA78B06CFAA969DF7A12_il2cpp_TypeInfo_var))->____context = G_B2_0;
		Il2CppCodeGenWriteBarrier((void**)(&((UnityMainThreadDispatch_t2791D12B08651D1F1325AA78B06CFAA969DF7A12_StaticFields*)il2cpp_codegen_static_fields_for(UnityMainThreadDispatch_t2791D12B08651D1F1325AA78B06CFAA969DF7A12_il2cpp_TypeInfo_var))->____context), (void*)G_B2_0);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OneSignal_set_AppId_mA7AFE519FA396A621BAED79D13C63854ADE77F7F_inline (String_t* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_value;
		((OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85_il2cpp_TypeInfo_var))->___U3CAppIdU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85_il2cpp_TypeInfo_var))->___U3CAppIdU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OneSignal_set_DidInitialize_m8EFFB9C9D7E997672E5EA5309160463F7961C634_inline (bool ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ___0_value;
		((OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85_il2cpp_TypeInfo_var))->___U3CDidInitializeU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* OneSignal_get_AppId_mE3F51B18F55331DD5DAA72C6652E0E1EB99A12A3_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ((OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85_il2cpp_TypeInfo_var))->___U3CAppIdU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___0_item;
		List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return;
	}
}
