#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


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
struct InvokerActionInvoker1
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1)
	{
		void* params[1] = { &p1 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2)
	{
		void* params[2] = { p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2* p2)
	{
		void* params[2] = { &p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3;
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3* p3)
	{
		void* params[3] = { p1, &p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28;
// System.Func`1<System.Object>
struct Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4;
// System.Func`1<System.String>
struct Func_1_t367387BB2C476D3F32DB12161B5FDC128DC3231C;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED;
// System.Threading.Tasks.TaskCompletionSource`1<System.Int32Enum>
struct TaskCompletionSource_1_tF8DA32849B904AE4F51ECAF6C6D7FA080481A35A;
// System.Threading.Tasks.TaskCompletionSource`1<NativeGallery/Permission>
struct TaskCompletionSource_1_tA40684670E345C5786526437707F448A78DD4DC2;
// System.Threading.Tasks.Task`1<System.Int32Enum>
struct Task_1_t8DED34447688BFCF5112B0D05D5A80CED94E4BFB;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2;
// System.Threading.Tasks.Task`1<System.String>
struct Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0;
// System.Threading.Tasks.Task`1<UnityEngine.Texture2D>
struct Task_1_t95921EB64E237ACD28589D64B693C652268F225E;
// System.Threading.Tasks.Task`1<NativeGallery/Permission>
struct Task_1_t5C89128A5298F29B41DC7B2DA6CCB578F49EFBC8;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C;
// System.Globalization.Calendar
struct Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B;
// UnityEngine.Networking.CertificateHandler
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804;
// System.Globalization.CompareInfo
struct CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// System.Threading.ContextCallback
struct ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007;
// System.Globalization.CultureData
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D;
// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.IO.DirectoryInfo
struct DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2;
// UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB;
// System.Exception
struct Exception_t;
// System.IO.FileNotFoundException
struct FileNotFoundException_t17F1B49AD996E4A60C87C7ADC9D3A25EB5808A9A;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_t0680C7F905C553076B552D5A1A6E39E2F0F36AA2;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.IFormatProvider
struct IFormatProvider_tC202922D43BFF3525109ABF3FB79625F5646AB52;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// NativeGalleryNamespace.NGMediaReceiveCallbackiOS
struct NGMediaReceiveCallbackiOS_tD90DF712E9D1B5AE35D625194DB2E09EABAD0280;
// NativeGalleryNamespace.NGMediaSaveCallbackiOS
struct NGMediaSaveCallbackiOS_t31F72978BB8FB757F7580EABA2D1EDFEAE2E87B9;
// NativeGalleryNamespace.NGPermissionCallbackiOS
struct NGPermissionCallbackiOS_t966C11FC5C548BAB341244C5EB5AC30D800DA565;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.RenderTexture
struct RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Threading.SendOrPostCallback
struct SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E;
// System.Threading.Tasks.StackGuard
struct StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352;
// System.String
struct String_t;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E;
// System.Globalization.TextInfo
struct TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4;
// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F;
// UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C;
// UnityEngine.Networking.UploadHandler
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6;
// System.Uri
struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// System.Threading.WaitCallback
struct WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3;
// NativeGallery/<>c__DisplayClass33_0
struct U3CU3Ec__DisplayClass33_0_t232C3A72571561AE5A8AD8E34F2BD240999EE360;
// NativeGallery/<>c__DisplayClass34_0
struct U3CU3Ec__DisplayClass34_0_t7CEBF1C5F25C154499ED0F3F3834C55E0EF7BD59;
// NativeGallery/<>c__DisplayClass68_0
struct U3CU3Ec__DisplayClass68_0_t5FD6F0E0A673166A71D913C59D9368908630AA35;
// NativeGallery/<>c__DisplayClass70_0
struct U3CU3Ec__DisplayClass70_0_tEAF0E75379345E2943DD1EAF374045A9484E6B88;
// NativeGallery/MediaPickCallback
struct MediaPickCallback_tC207F6F3EEE18F64B03E23D5C9FA8C79517A5EB6;
// NativeGallery/MediaPickMultipleCallback
struct MediaPickMultipleCallback_t717A5D378751E2CACB53E6BA25386FF8DB41627B;
// NativeGallery/MediaSaveCallback
struct MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D;
// NativeGallery/PermissionCallback
struct PermissionCallback_t43E69EC9D59F3ADAC411FBE19A499BCB840180D4;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncTaskMethodBuilder_1_t05B41371EF0E362ABCB54C56063FAA1E00C69A8F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FileNotFoundException_t17F1B49AD996E4A60C87C7ADC9D3A25EB5808A9A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_t367387BB2C476D3F32DB12161B5FDC128DC3231C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NGMediaReceiveCallbackiOS_tD90DF712E9D1B5AE35D625194DB2E09EABAD0280_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NGMediaSaveCallbackiOS_t31F72978BB8FB757F7580EABA2D1EDFEAE2E87B9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NGPermissionCallbackiOS_t966C11FC5C548BAB341244C5EB5AC30D800DA565_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NativeGallery_t5E55EACA16F196F4214E0A3AB3A39B5CF555EB0B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PermissionCallback_t43E69EC9D59F3ADAC411FBE19A499BCB840180D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Permission_t3F3DCD2A60B865EED3451B39DB6A376E75C8F831_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TaskCompletionSource_1_tA40684670E345C5786526437707F448A78DD4DC2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass33_0_t232C3A72571561AE5A8AD8E34F2BD240999EE360_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass34_0_t7CEBF1C5F25C154499ED0F3F3834C55E0EF7BD59_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass68_0_t5FD6F0E0A673166A71D913C59D9368908630AA35_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass70_0_tEAF0E75379345E2943DD1EAF374045A9484E6B88_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityException_tA1EC1E95ADE689CF6EB7FAFF77C160AE1F559067_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0365E1814018F9007D2AF7114C462B24D8928C59;
IL2CPP_EXTERN_C String_t* _stringLiteral04309E09A3FA7B4409871040A25A32799050D487;
IL2CPP_EXTERN_C String_t* _stringLiteral0A79B0229EB4F27A4505CE75160E9133E944F111;
IL2CPP_EXTERN_C String_t* _stringLiteral0CA4721FC9D82D780671DE2AB61257837402697D;
IL2CPP_EXTERN_C String_t* _stringLiteral1256BD059A8D156C0578EF505C83E5862F0EFCD2;
IL2CPP_EXTERN_C String_t* _stringLiteral15332598528DB5F9A0B9473BE7DCE0BB1F8DCAA7;
IL2CPP_EXTERN_C String_t* _stringLiteral18B82B6B7DC4FE1988BA61A3784D1768F6C925DF;
IL2CPP_EXTERN_C String_t* _stringLiteral1DA1565418493517EA4A1928E378AD0548A223E7;
IL2CPP_EXTERN_C String_t* _stringLiteral218F5A08519088A96BE3C1074984C53EA49F1CCA;
IL2CPP_EXTERN_C String_t* _stringLiteral23DF9991B71463C240582D176E347E7E47AEFF5A;
IL2CPP_EXTERN_C String_t* _stringLiteral30F7CAA3903ABC311FB9B0881B8937BE76A5526D;
IL2CPP_EXTERN_C String_t* _stringLiteral30F8B1D027E92AF30A25606539C4A0E635BF0BBB;
IL2CPP_EXTERN_C String_t* _stringLiteral3E96C9BB1B953A85290371E8CE7BB3F3ABB307CC;
IL2CPP_EXTERN_C String_t* _stringLiteral491B4D9271839F0BD63211437BF7CEE5B2C6ADE9;
IL2CPP_EXTERN_C String_t* _stringLiteral4B9B40AAD718882F5C0B95FE844E4AA92BD49C42;
IL2CPP_EXTERN_C String_t* _stringLiteral75E05143EB132AAA8A22B48813DB8E6047380821;
IL2CPP_EXTERN_C String_t* _stringLiteral76F1B85647641622FD867CE16AF6C584C5081BD4;
IL2CPP_EXTERN_C String_t* _stringLiteral7BB4B5568C63748C896DED09B403F2FC4F274E91;
IL2CPP_EXTERN_C String_t* _stringLiteral7E90946BC7628636C60D094F905E96CD1360A930;
IL2CPP_EXTERN_C String_t* _stringLiteral7F7876094B3FA10965A88A7D08B74EA3DC22CAE9;
IL2CPP_EXTERN_C String_t* _stringLiteral87811B8AF8DB46597B9C0A6BEAE14238FC7C81FF;
IL2CPP_EXTERN_C String_t* _stringLiteral985B72B30ECE05DD4EF5FE142CEE0FB8BF53A98C;
IL2CPP_EXTERN_C String_t* _stringLiteralA15C898F015A9B0BC3268E8883CD03008A56DE26;
IL2CPP_EXTERN_C String_t* _stringLiteralAF0174D5142A8DAD18DDD4423E7AFDBBC3687A8B;
IL2CPP_EXTERN_C String_t* _stringLiteralAFF4AA19F30B5DC5A240F413D92917103536F1AD;
IL2CPP_EXTERN_C String_t* _stringLiteralB04FF65BF5CEF7336F7FBA4624393E214FB7EB08;
IL2CPP_EXTERN_C String_t* _stringLiteralCB4507437E3E619ECBAD84410155675EBEB3DB3F;
IL2CPP_EXTERN_C String_t* _stringLiteralCFA0E830C16EC57623615165EA8FBC2817BACCCF;
IL2CPP_EXTERN_C String_t* _stringLiteralD4E22C84D059FC69AA54802023A8B68B6F4F4C7E;
IL2CPP_EXTERN_C String_t* _stringLiteralE3287997374A5B6321B447152239EBE224279EB6;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6_TisU3CGetVideoThumbnailAsyncU3Ed__70_tD8ECB30B418EDA30010B6ACFFD3C1F8BE2BA7060_mC961E23C1370FCAB8534533C73F741BAC448A546_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6_TisU3CLoadImageAtPathAsyncU3Ed__68_t6B30763C817CF0D323D6D6333BDCEC374A300CC4_m1A1DC59029FA7642073FDFD35BB465C74749C6BB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t6D65E8305E8A65AA4939559CBC191F5C2238F74B_TisU3CGetVideoThumbnailAsyncU3Ed__70_tD8ECB30B418EDA30010B6ACFFD3C1F8BE2BA7060_mBAB0B46E65418BA50DC13CB1A80075AEF6944C11_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisYieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A_TisU3CLoadImageAtPathAsyncU3Ed__68_t6B30763C817CF0D323D6D6333BDCEC374A300CC4_m86352FE7512D5B2CA00EBBAE87873A639192675A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Create_mEBDA40894C43C50AA47346AC784F528C9CA1ABD4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetException_m1697D9F7BF9D11383EDE12CEE54A18AC24A7786B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetResult_mAB04B95B4490AB6E1FCB475391576D15606A2688_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetStateMachine_m0ECA1B3B604CFFB8A5DE544E2A0A0025BFE6B6FD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Start_TisU3CGetVideoThumbnailAsyncU3Ed__70_tD8ECB30B418EDA30010B6ACFFD3C1F8BE2BA7060_m5ED6CB236201185BED7B2886CC6838FB48D2541E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Start_TisU3CLoadImageAtPathAsyncU3Ed__68_t6B30763C817CF0D323D6D6333BDCEC374A300CC4_m56B5776DAE2E64CCFC7B971A4DB5685D10733F62_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_get_Task_mC842CA788344F6A0EAB9EFDE97E0FAC79368245E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisNGMediaReceiveCallbackiOS_tD90DF712E9D1B5AE35D625194DB2E09EABAD0280_m5E174F21F5B691FDA1720B5AF8D4C1866F2B1547_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisNGMediaSaveCallbackiOS_t31F72978BB8FB757F7580EABA2D1EDFEAE2E87B9_mFDB8D8B0F5D4B621A2434FDD88597D027AA91F23_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisNGPermissionCallbackiOS_t966C11FC5C548BAB341244C5EB5AC30D800DA565_mC93D2316465EF7CE745199E63FF2479A6A74ABD4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeGallery_GetImageProperties_mD9D7562C327369A4FEE99EF08D2A0F6A1BEE0376_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeGallery_GetVideoProperties_mE39CF69BF80843823CDC1B153B29B38413804E95_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeGallery_LoadImageAtPath_m62187A34B7B063FBEFFD7E200DEC2332313A56AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeGallery_SaveImageToGallery_mF141267D9981DE0618B1A3BF29B96D1C8BF5D711_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeGallery_SaveToGallery_mAD9820FA0C518D117A499DC5D99BF99D240C4454_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeGallery_SaveToGallery_mC512FADA8F0312FA131B768E103068CD34B83240_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_GetResult_m82A392802A854576DC9525B87B0053B56201ABB9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_GetResult_mE4B8867B0D8DAA1317AD64FE09FBD26E825A654C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_m77FF413EE49A5859C0BC111104448D64F3C01911_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_mE207C5509602B0BB59366E53CED6CC9B10A1F8A8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1_SetResult_m5DC5B682780071790E0376414253BFEDEC4942D8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1__ctor_mE2CE066FBB5CD986B6EC9B8B287E263E3FE0E824_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1_get_Task_m278F89B2C2B247D13AD0C344238EDDC7999402CA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_GetAwaiter_m7727657658441E9D4CE9D3F8B532F9D65CB9CE1F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_GetAwaiter_m88AFED53B032F7EDDB6F9746699970B9FFFC992C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_Run_TisString_t_mDC4F0FD46A6DD4FE57DE5788DEF07F7F277821C3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CLoadImageAtPathAsyncU3Ed__68_MoveNext_mA505FA18AF54BE2929AF74A6293411934E8F4427_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass33_0_U3CRequestPermissionAsyncU3Eb__0_m17B2413EE4C5C1964F01640BDB1B05175C27D444_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass34_0_U3CRequestPermissionAsyncU3Eb__0_mC0C631823789775F59071AC2DF83A1608EB2E7DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass68_0_U3CLoadImageAtPathAsyncU3Eb__0_mA2B43C5867AB2CA514B04A7A5E9BE2F6A099502C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass70_0_U3CGetVideoThumbnailAsyncU3Eb__0_mA90DE7E588B844F4F288C4D300390A05BB7FC30F_RuntimeMethod_var;
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_com;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_com;
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_pinvoke;
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_com;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tF014A065BC76D0FEB5B12ABB99A95712F7EFC69A 
{
};

// System.Threading.Tasks.TaskCompletionSource`1<System.Int32Enum>
struct TaskCompletionSource_1_tF8DA32849B904AE4F51ECAF6C6D7FA080481A35A  : public RuntimeObject
{
	// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1::_task
	Task_1_t8DED34447688BFCF5112B0D05D5A80CED94E4BFB* ____task_0;
};

// System.Threading.Tasks.TaskCompletionSource`1<NativeGallery/Permission>
struct TaskCompletionSource_1_tA40684670E345C5786526437707F448A78DD4DC2  : public RuntimeObject
{
	// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1::_task
	Task_1_t5C89128A5298F29B41DC7B2DA6CCB578F49EFBC8* ____task_0;
};

// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0  : public RuntimeObject
{
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
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::dateTimeInfo
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::textInfo
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
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
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___native_calendar_names_20;
	// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::compareInfo
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	// System.Void* System.Globalization.CultureInfo::textinfo_data
	void* ___textinfo_data_22;
	// System.Int32 System.Globalization.CultureInfo::m_dataItem
	int32_t ___m_dataItem_23;
	// System.Globalization.Calendar System.Globalization.CultureInfo::calendar
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::parent_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___parent_culture_25;
	// System.Boolean System.Globalization.CultureInfo::constructed
	bool ___constructed_26;
	// System.Byte[] System.Globalization.CultureInfo::cached_serialized_form
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___cached_serialized_form_27;
	// System.Globalization.CultureData System.Globalization.CultureInfo::m_cultureData
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D* ___m_cultureData_28;
	// System.Boolean System.Globalization.CultureInfo::m_isInherited
	bool ___m_isInherited_29;
};
// Native definition for P/Invoke marshalling of System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	char* ___m_name_13;
	char* ___englishname_14;
	char* ___nativename_15;
	char* ___iso3lang_16;
	char* ___iso2lang_17;
	char* ___win3lang_18;
	char* ___territory_19;
	char** ___native_calendar_names_20;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};
// Native definition for COM marshalling of System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	Il2CppChar* ___m_name_13;
	Il2CppChar* ___englishname_14;
	Il2CppChar* ___nativename_15;
	Il2CppChar* ___iso3lang_16;
	Il2CppChar* ___iso2lang_17;
	Il2CppChar* ___win3lang_18;
	Il2CppChar* ___territory_19;
	Il2CppChar** ___native_calendar_names_20;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};

// System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE  : public RuntimeObject
{
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject* ____identity_0;
};
// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// NativeGallery
struct NativeGallery_t5E55EACA16F196F4214E0A3AB3A39B5CF555EB0B  : public RuntimeObject
{
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572  : public RuntimeObject
{
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_1;
	// System.Delegate System.Threading.Tasks.Task::m_action
	Delegate_t* ___m_action_2;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject* ___m_stateObject_3;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___m_taskScheduler_4;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_parent_5;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_6;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject* ___m_continuationObject_7;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540* ___m_contingentProperties_10;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// NativeGallery/<>c__DisplayClass33_0
struct U3CU3Ec__DisplayClass33_0_t232C3A72571561AE5A8AD8E34F2BD240999EE360  : public RuntimeObject
{
	// NativeGallery/PermissionCallback NativeGallery/<>c__DisplayClass33_0::callback
	PermissionCallback_t43E69EC9D59F3ADAC411FBE19A499BCB840180D4* ___callback_0;
};

// NativeGallery/<>c__DisplayClass34_0
struct U3CU3Ec__DisplayClass34_0_t7CEBF1C5F25C154499ED0F3F3834C55E0EF7BD59  : public RuntimeObject
{
	// System.Threading.Tasks.TaskCompletionSource`1<NativeGallery/Permission> NativeGallery/<>c__DisplayClass34_0::tcs
	TaskCompletionSource_1_tA40684670E345C5786526437707F448A78DD4DC2* ___tcs_0;
};

// NativeGallery/<>c__DisplayClass68_0
struct U3CU3Ec__DisplayClass68_0_t5FD6F0E0A673166A71D913C59D9368908630AA35  : public RuntimeObject
{
	// System.String NativeGallery/<>c__DisplayClass68_0::imagePath
	String_t* ___imagePath_0;
	// System.String NativeGallery/<>c__DisplayClass68_0::temporaryImagePath
	String_t* ___temporaryImagePath_1;
	// System.Int32 NativeGallery/<>c__DisplayClass68_0::maxSize
	int32_t ___maxSize_2;
};

// NativeGallery/<>c__DisplayClass70_0
struct U3CU3Ec__DisplayClass70_0_tEAF0E75379345E2943DD1EAF374045A9484E6B88  : public RuntimeObject
{
	// System.String NativeGallery/<>c__DisplayClass70_0::videoPath
	String_t* ___videoPath_0;
	// System.String NativeGallery/<>c__DisplayClass70_0::temporaryImagePath
	String_t* ___temporaryImagePath_1;
	// System.Int32 NativeGallery/<>c__DisplayClass70_0::maxSize
	int32_t ___maxSize_2;
	// System.Double NativeGallery/<>c__DisplayClass70_0::captureTimeInSeconds
	double ___captureTimeInSeconds_3;
};

// System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>
struct TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA 
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* ___m_task_0;
};

// System.Runtime.CompilerServices.TaskAwaiter`1<System.String>
struct TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6 
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* ___m_task_0;
};

// System.Runtime.CompilerServices.TaskAwaiter`1<UnityEngine.Texture2D>
struct TaskAwaiter_1_t6D65E8305E8A65AA4939559CBC191F5C2238F74B 
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t95921EB64E237ACD28589D64B693C652268F225E* ___m_task_0;
};

// System.Threading.Tasks.Task`1<System.Int32Enum>
struct Task_1_t8DED34447688BFCF5112B0D05D5A80CED94E4BFB  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	int32_t ___m_result_22;
};

// System.Threading.Tasks.Task`1<System.String>
struct Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	String_t* ___m_result_22;
};

// System.Threading.Tasks.Task`1<UnityEngine.Texture2D>
struct Task_1_t95921EB64E237ACD28589D64B693C652268F225E  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___m_result_22;
};

// System.Threading.Tasks.Task`1<NativeGallery/Permission>
struct Task_1_t5C89128A5298F29B41DC7B2DA6CCB578F49EFBC8  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	int32_t ___m_result_22;
};

// System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF 
{
	// System.Runtime.CompilerServices.IAsyncStateMachine System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_stateMachine
	RuntimeObject* ___m_stateMachine_0;
	// System.Action System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_defaultContextAction
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___m_defaultContextAction_1;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_pinvoke
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_com
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.Void
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

// System.Runtime.CompilerServices.YieldAwaitable
struct YieldAwaitable_tFEA898DB9022A953958C3CF531E1477D135D3DAB 
{
	union
	{
		struct
		{
		};
		uint8_t YieldAwaitable_tFEA898DB9022A953958C3CF531E1477D135D3DAB__padding[1];
	};
};

// NativeGallery/ImageProperties
struct ImageProperties_t7C971D51A4992A01CD205754169B919B56696F59 
{
	// System.Int32 NativeGallery/ImageProperties::width
	int32_t ___width_0;
	// System.Int32 NativeGallery/ImageProperties::height
	int32_t ___height_1;
	// System.String NativeGallery/ImageProperties::mimeType
	String_t* ___mimeType_2;
	// NativeGallery/ImageOrientation NativeGallery/ImageProperties::orientation
	int32_t ___orientation_3;
};
// Native definition for P/Invoke marshalling of NativeGallery/ImageProperties
struct ImageProperties_t7C971D51A4992A01CD205754169B919B56696F59_marshaled_pinvoke
{
	int32_t ___width_0;
	int32_t ___height_1;
	char* ___mimeType_2;
	int32_t ___orientation_3;
};
// Native definition for COM marshalling of NativeGallery/ImageProperties
struct ImageProperties_t7C971D51A4992A01CD205754169B919B56696F59_marshaled_com
{
	int32_t ___width_0;
	int32_t ___height_1;
	Il2CppChar* ___mimeType_2;
	int32_t ___orientation_3;
};

// NativeGallery/VideoProperties
struct VideoProperties_t11DD7C4EACACE50EA3D710F3E2595A68B17103A5 
{
	// System.Int32 NativeGallery/VideoProperties::width
	int32_t ___width_0;
	// System.Int32 NativeGallery/VideoProperties::height
	int32_t ___height_1;
	// System.Int64 NativeGallery/VideoProperties::duration
	int64_t ___duration_2;
	// System.Single NativeGallery/VideoProperties::rotation
	float ___rotation_3;
};

// System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter
struct YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A 
{
	union
	{
		struct
		{
		};
		uint8_t YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A__padding[1];
	};
};

// Interop/Sys/FileStatus
struct FileStatus_tCB96EDE0D0F945F685B9BBED6DBF0731207458C2 
{
	// Interop/Sys/FileStatusFlags Interop/Sys/FileStatus::Flags
	int32_t ___Flags_0;
	// System.Int32 Interop/Sys/FileStatus::Mode
	int32_t ___Mode_1;
	// System.UInt32 Interop/Sys/FileStatus::Uid
	uint32_t ___Uid_2;
	// System.UInt32 Interop/Sys/FileStatus::Gid
	uint32_t ___Gid_3;
	// System.Int64 Interop/Sys/FileStatus::Size
	int64_t ___Size_4;
	// System.Int64 Interop/Sys/FileStatus::ATime
	int64_t ___ATime_5;
	// System.Int64 Interop/Sys/FileStatus::ATimeNsec
	int64_t ___ATimeNsec_6;
	// System.Int64 Interop/Sys/FileStatus::MTime
	int64_t ___MTime_7;
	// System.Int64 Interop/Sys/FileStatus::MTimeNsec
	int64_t ___MTimeNsec_8;
	// System.Int64 Interop/Sys/FileStatus::CTime
	int64_t ___CTime_9;
	// System.Int64 Interop/Sys/FileStatus::CTimeNsec
	int64_t ___CTimeNsec_10;
	// System.Int64 Interop/Sys/FileStatus::BirthTime
	int64_t ___BirthTime_11;
	// System.Int64 Interop/Sys/FileStatus::BirthTimeNsec
	int64_t ___BirthTimeNsec_12;
	// System.Int64 Interop/Sys/FileStatus::Dev
	int64_t ___Dev_13;
	// System.Int64 Interop/Sys/FileStatus::Ino
	int64_t ___Ino_14;
	// System.UInt32 Interop/Sys/FileStatus::UserFlags
	uint32_t ___UserFlags_15;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>
struct AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0 
{
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* ___m_task_2;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<UnityEngine.Texture2D>
struct AsyncTaskMethodBuilder_1_t05B41371EF0E362ABCB54C56063FAA1E00C69A8F 
{
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t95921EB64E237ACD28589D64B693C652268F225E* ___m_task_2;
};

// UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.AsyncOperation::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Action`1<UnityEngine.AsyncOperation> UnityEngine.AsyncOperation::m_completeCallback
	Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB* ___m_completeCallback_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
// Native definition for COM marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};

// UnityEngine.Networking.CertificateHandler
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Networking.CertificateHandler::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	intptr_t ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Networking.DownloadHandler::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// System.IO.FileStatus
struct FileStatus_tABB5F252F1E597EC95E9041035DC424EF66712A5 
{
	// Interop/Sys/FileStatus System.IO.FileStatus::_fileStatus
	FileStatus_tCB96EDE0D0F945F685B9BBED6DBF0731207458C2 ____fileStatus_0;
	// System.Int32 System.IO.FileStatus::_fileStatusInitialized
	int32_t ____fileStatusInitialized_1;
	// System.Boolean System.IO.FileStatus::<InitiallyDirectory>k__BackingField
	bool ___U3CInitiallyDirectoryU3Ek__BackingField_2;
	// System.Boolean System.IO.FileStatus::_isDirectory
	bool ____isDirectory_3;
	// System.Boolean System.IO.FileStatus::_exists
	bool ____exists_4;
};
// Native definition for P/Invoke marshalling of System.IO.FileStatus
struct FileStatus_tABB5F252F1E597EC95E9041035DC424EF66712A5_marshaled_pinvoke
{
	FileStatus_tCB96EDE0D0F945F685B9BBED6DBF0731207458C2 ____fileStatus_0;
	int32_t ____fileStatusInitialized_1;
	int32_t ___U3CInitiallyDirectoryU3Ek__BackingField_2;
	int32_t ____isDirectory_3;
	int32_t ____exists_4;
};
// Native definition for COM marshalling of System.IO.FileStatus
struct FileStatus_tABB5F252F1E597EC95E9041035DC424EF66712A5_marshaled_com
{
	FileStatus_tCB96EDE0D0F945F685B9BBED6DBF0731207458C2 ____fileStatus_0;
	int32_t ____fileStatusInitialized_1;
	int32_t ___U3CInitiallyDirectoryU3Ek__BackingField_2;
	int32_t ____isDirectory_3;
	int32_t ____exists_4;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Networking.UploadHandler
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Networking.UploadHandler::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.UploadHandler
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.UploadHandler
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.IO.FileSystemInfo
struct FileSystemInfo_tE3063B9229F46B05A5F6D018C8C4CA510104E8E9  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.IO.FileStatus System.IO.FileSystemInfo::_fileStatus
	FileStatus_tABB5F252F1E597EC95E9041035DC424EF66712A5 ____fileStatus_1;
	// System.String System.IO.FileSystemInfo::FullPath
	String_t* ___FullPath_2;
	// System.String System.IO.FileSystemInfo::OriginalPath
	String_t* ___OriginalPath_3;
	// System.String System.IO.FileSystemInfo::_name
	String_t* ____name_4;
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.UnityException
struct UnityException_tA1EC1E95ADE689CF6EB7FAFF77C160AE1F559067  : public Exception_t
{
};

// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Networking.UnityWebRequest::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.Networking.DownloadHandler UnityEngine.Networking.UnityWebRequest::m_DownloadHandler
	DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* ___m_DownloadHandler_1;
	// UnityEngine.Networking.UploadHandler UnityEngine.Networking.UnityWebRequest::m_UploadHandler
	UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6* ___m_UploadHandler_2;
	// UnityEngine.Networking.CertificateHandler UnityEngine.Networking.UnityWebRequest::m_CertificateHandler
	CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804* ___m_CertificateHandler_3;
	// System.Uri UnityEngine.Networking.UnityWebRequest::m_Uri
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___m_Uri_4;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeCertificateHandlerOnDispose>k__BackingField
	bool ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeDownloadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeUploadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_pinvoke ___m_DownloadHandler_1;
	UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_pinvoke ___m_UploadHandler_2;
	CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_pinvoke ___m_CertificateHandler_3;
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___m_Uri_4;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;
};
// Native definition for COM marshalling of UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_com
{
	intptr_t ___m_Ptr_0;
	DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com* ___m_DownloadHandler_1;
	UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_com* ___m_UploadHandler_2;
	CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_com* ___m_CertificateHandler_3;
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___m_Uri_4;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;
};

// UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C  : public AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C
{
	// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequestAsyncOperation::<webRequest>k__BackingField
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___U3CwebRequestU3Ek__BackingField_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C_marshaled_pinvoke : public AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_pinvoke
{
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_pinvoke* ___U3CwebRequestU3Ek__BackingField_2;
};
// Native definition for COM marshalling of UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C_marshaled_com : public AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_com
{
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_com* ___U3CwebRequestU3Ek__BackingField_2;
};

// NativeGallery/<GetVideoThumbnailAsync>d__70
struct U3CGetVideoThumbnailAsyncU3Ed__70_tD8ECB30B418EDA30010B6ACFFD3C1F8BE2BA7060 
{
	// System.Int32 NativeGallery/<GetVideoThumbnailAsync>d__70::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<UnityEngine.Texture2D> NativeGallery/<GetVideoThumbnailAsync>d__70::<>t__builder
	AsyncTaskMethodBuilder_1_t05B41371EF0E362ABCB54C56063FAA1E00C69A8F ___U3CU3Et__builder_1;
	// System.String NativeGallery/<GetVideoThumbnailAsync>d__70::videoPath
	String_t* ___videoPath_2;
	// System.Int32 NativeGallery/<GetVideoThumbnailAsync>d__70::maxSize
	int32_t ___maxSize_3;
	// System.Double NativeGallery/<GetVideoThumbnailAsync>d__70::captureTimeInSeconds
	double ___captureTimeInSeconds_4;
	// NativeGallery/<>c__DisplayClass70_0 NativeGallery/<GetVideoThumbnailAsync>d__70::<>8__1
	U3CU3Ec__DisplayClass70_0_tEAF0E75379345E2943DD1EAF374045A9484E6B88* ___U3CU3E8__1_5;
	// System.Boolean NativeGallery/<GetVideoThumbnailAsync>d__70::markTextureNonReadable
	bool ___markTextureNonReadable_6;
	// System.Runtime.CompilerServices.TaskAwaiter`1<System.String> NativeGallery/<GetVideoThumbnailAsync>d__70::<>u__1
	TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6 ___U3CU3Eu__1_7;
	// System.Runtime.CompilerServices.TaskAwaiter`1<UnityEngine.Texture2D> NativeGallery/<GetVideoThumbnailAsync>d__70::<>u__2
	TaskAwaiter_1_t6D65E8305E8A65AA4939559CBC191F5C2238F74B ___U3CU3Eu__2_8;
};

// NativeGallery/<LoadImageAtPathAsync>d__68
struct U3CLoadImageAtPathAsyncU3Ed__68_t6B30763C817CF0D323D6D6333BDCEC374A300CC4 
{
	// System.Int32 NativeGallery/<LoadImageAtPathAsync>d__68::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<UnityEngine.Texture2D> NativeGallery/<LoadImageAtPathAsync>d__68::<>t__builder
	AsyncTaskMethodBuilder_1_t05B41371EF0E362ABCB54C56063FAA1E00C69A8F ___U3CU3Et__builder_1;
	// System.String NativeGallery/<LoadImageAtPathAsync>d__68::imagePath
	String_t* ___imagePath_2;
	// System.Int32 NativeGallery/<LoadImageAtPathAsync>d__68::maxSize
	int32_t ___maxSize_3;
	// System.Boolean NativeGallery/<LoadImageAtPathAsync>d__68::markTextureNonReadable
	bool ___markTextureNonReadable_4;
	// NativeGallery/<>c__DisplayClass68_0 NativeGallery/<LoadImageAtPathAsync>d__68::<>8__1
	U3CU3Ec__DisplayClass68_0_t5FD6F0E0A673166A71D913C59D9368908630AA35* ___U3CU3E8__1_5;
	// System.String NativeGallery/<LoadImageAtPathAsync>d__68::<loadPath>5__2
	String_t* ___U3CloadPathU3E5__2_6;
	// UnityEngine.Texture2D NativeGallery/<LoadImageAtPathAsync>d__68::<result>5__3
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___U3CresultU3E5__3_7;
	// System.Runtime.CompilerServices.TaskAwaiter`1<System.String> NativeGallery/<LoadImageAtPathAsync>d__68::<>u__1
	TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6 ___U3CU3Eu__1_8;
	// UnityEngine.Networking.UnityWebRequest NativeGallery/<LoadImageAtPathAsync>d__68::<www>5__4
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___U3CwwwU3E5__4_9;
	// UnityEngine.Networking.UnityWebRequestAsyncOperation NativeGallery/<LoadImageAtPathAsync>d__68::<asyncOperation>5__5
	UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* ___U3CasyncOperationU3E5__5_10;
	// System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter NativeGallery/<LoadImageAtPathAsync>d__68::<>u__2
	YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A ___U3CU3Eu__2_11;
};

// System.Func`1<System.String>
struct Func_1_t367387BB2C476D3F32DB12161B5FDC128DC3231C  : public MulticastDelegate_t
{
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.IO.DirectoryInfo
struct DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2  : public FileSystemInfo_tE3063B9229F46B05A5F6D018C8C4CA510104E8E9
{
};

// System.IO.IOException
struct IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.RenderTexture
struct RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};

// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};

// NativeGallery/MediaPickCallback
struct MediaPickCallback_tC207F6F3EEE18F64B03E23D5C9FA8C79517A5EB6  : public MulticastDelegate_t
{
};

// NativeGallery/MediaPickMultipleCallback
struct MediaPickMultipleCallback_t717A5D378751E2CACB53E6BA25386FF8DB41627B  : public MulticastDelegate_t
{
};

// NativeGallery/MediaSaveCallback
struct MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D  : public MulticastDelegate_t
{
};

// NativeGallery/PermissionCallback
struct PermissionCallback_t43E69EC9D59F3ADAC411FBE19A499BCB840180D4  : public MulticastDelegate_t
{
};

// System.IO.FileNotFoundException
struct FileNotFoundException_t17F1B49AD996E4A60C87C7ADC9D3A25EB5808A9A  : public IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910
{
	// System.String System.IO.FileNotFoundException::<FileName>k__BackingField
	String_t* ___U3CFileNameU3Ek__BackingField_18;
	// System.String System.IO.FileNotFoundException::<FusionLog>k__BackingField
	String_t* ___U3CFusionLogU3Ek__BackingField_19;
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// NativeGalleryNamespace.NGMediaReceiveCallbackiOS
struct NGMediaReceiveCallbackiOS_tD90DF712E9D1B5AE35D625194DB2E09EABAD0280  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// NativeGallery/MediaPickCallback NativeGalleryNamespace.NGMediaReceiveCallbackiOS::callback
	MediaPickCallback_tC207F6F3EEE18F64B03E23D5C9FA8C79517A5EB6* ___callback_5;
	// NativeGallery/MediaPickMultipleCallback NativeGalleryNamespace.NGMediaReceiveCallbackiOS::callbackMultiple
	MediaPickMultipleCallback_t717A5D378751E2CACB53E6BA25386FF8DB41627B* ___callbackMultiple_6;
	// System.Single NativeGalleryNamespace.NGMediaReceiveCallbackiOS::nextBusyCheckTime
	float ___nextBusyCheckTime_7;
};

// NativeGalleryNamespace.NGMediaSaveCallbackiOS
struct NGMediaSaveCallbackiOS_t31F72978BB8FB757F7580EABA2D1EDFEAE2E87B9  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// NativeGallery/MediaSaveCallback NativeGalleryNamespace.NGMediaSaveCallbackiOS::callback
	MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D* ___callback_5;
};

// NativeGalleryNamespace.NGPermissionCallbackiOS
struct NGPermissionCallbackiOS_t966C11FC5C548BAB341244C5EB5AC30D800DA565  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// NativeGallery/PermissionCallback NativeGalleryNamespace.NGPermissionCallbackiOS::callback
	PermissionCallback_t43E69EC9D59F3ADAC411FBE19A499BCB840180D4* ___callback_5;
};

// <Module>

// <Module>

// System.Threading.Tasks.TaskCompletionSource`1<System.Int32Enum>

// System.Threading.Tasks.TaskCompletionSource`1<System.Int32Enum>

// System.Threading.Tasks.TaskCompletionSource`1<NativeGallery/Permission>

// System.Threading.Tasks.TaskCompletionSource`1<NativeGallery/Permission>

// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_StaticFields
{
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::invariant_culture_info
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___invariant_culture_info_0;
	// System.Object System.Globalization.CultureInfo::shared_table_lock
	RuntimeObject* ___shared_table_lock_1;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::default_current_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___default_current_culture_2;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentUICulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentUICulture_34;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentCulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentCulture_35;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_number
	Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3* ___shared_by_number_36;
	// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_name
	Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28* ___shared_by_name_37;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::s_UserPreferredCultureInfoInAppX
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_UserPreferredCultureInfoInAppX_38;
	// System.Boolean System.Globalization.CultureInfo::IsTaiwanSku
	bool ___IsTaiwanSku_39;
};

// System.Globalization.CultureInfo

// NativeGallery
struct NativeGallery_t5E55EACA16F196F4214E0A3AB3A39B5CF555EB0B_StaticFields
{
	// System.String NativeGallery::m_temporaryImagePath
	String_t* ___m_temporaryImagePath_0;
	// System.String NativeGallery::m_selectedMediaPath
	String_t* ___m_selectedMediaPath_1;
};

// NativeGallery

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// NativeGallery/<>c__DisplayClass33_0

// NativeGallery/<>c__DisplayClass33_0

// NativeGallery/<>c__DisplayClass34_0

// NativeGallery/<>c__DisplayClass34_0

// NativeGallery/<>c__DisplayClass68_0

// NativeGallery/<>c__DisplayClass68_0

// NativeGallery/<>c__DisplayClass70_0

// NativeGallery/<>c__DisplayClass70_0

// System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>

// System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>

// System.Runtime.CompilerServices.TaskAwaiter`1<System.String>

// System.Runtime.CompilerServices.TaskAwaiter`1<System.String>

// System.Runtime.CompilerServices.TaskAwaiter`1<UnityEngine.Texture2D>

// System.Runtime.CompilerServices.TaskAwaiter`1<UnityEngine.Texture2D>

// System.Threading.Tasks.Task`1<System.Int32Enum>

// System.Threading.Tasks.Task`1<System.Int32Enum>

// System.Threading.Tasks.Task`1<System.String>

// System.Threading.Tasks.Task`1<System.String>

// System.Threading.Tasks.Task`1<UnityEngine.Texture2D>

// System.Threading.Tasks.Task`1<UnityEngine.Texture2D>

// System.Threading.Tasks.Task`1<NativeGallery/Permission>

// System.Threading.Tasks.Task`1<NativeGallery/Permission>

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Byte

// System.Byte

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// System.Char

// System.Double

// System.Double

// System.Int32

// System.Int32

// System.Int64

// System.Int64

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// UnityEngine.Rect

// UnityEngine.Rect

// System.Single

// System.Single

// System.Void

// System.Void

// System.Runtime.CompilerServices.YieldAwaitable

// System.Runtime.CompilerServices.YieldAwaitable

// NativeGallery/ImageProperties

// NativeGallery/ImageProperties

// NativeGallery/VideoProperties

// NativeGallery/VideoProperties

// System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter
struct YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A_StaticFields
{
	// System.Threading.WaitCallback System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter::s_waitCallbackRunAction
	WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3* ___s_waitCallbackRunAction_0;
	// System.Threading.SendOrPostCallback System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter::s_sendOrPostCallbackRunAction
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* ___s_sendOrPostCallbackRunAction_1;
};

// System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>
struct AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0_StaticFields
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* ___s_defaultResultTask_0;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<UnityEngine.Texture2D>
struct AsyncTaskMethodBuilder_1_t05B41371EF0E362ABCB54C56063FAA1E00C69A8F_StaticFields
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t95921EB64E237ACD28589D64B693C652268F225E* ___s_defaultResultTask_0;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<UnityEngine.Texture2D>

// UnityEngine.AsyncOperation

// UnityEngine.AsyncOperation

// System.Delegate

// System.Delegate

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// UnityEngine.Component

// UnityEngine.Component

// UnityEngine.GameObject

// UnityEngine.GameObject

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_StaticFields
{
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;
};

// UnityEngine.Texture

// UnityEngine.UnityException

// UnityEngine.UnityException

// UnityEngine.Networking.UnityWebRequest

// UnityEngine.Networking.UnityWebRequest

// UnityEngine.Networking.UnityWebRequestAsyncOperation

// UnityEngine.Networking.UnityWebRequestAsyncOperation

// NativeGallery/<GetVideoThumbnailAsync>d__70

// NativeGallery/<GetVideoThumbnailAsync>d__70

// NativeGallery/<LoadImageAtPathAsync>d__68

// NativeGallery/<LoadImageAtPathAsync>d__68

// System.Func`1<System.String>

// System.Func`1<System.String>

// System.ArgumentException

// System.ArgumentException

// System.AsyncCallback

// System.AsyncCallback

// System.IO.DirectoryInfo

// System.IO.DirectoryInfo

// UnityEngine.RenderTexture

// UnityEngine.RenderTexture

// UnityEngine.Texture2D

// UnityEngine.Texture2D

// NativeGallery/MediaPickCallback

// NativeGallery/MediaPickCallback

// NativeGallery/MediaPickMultipleCallback

// NativeGallery/MediaPickMultipleCallback

// NativeGallery/MediaSaveCallback

// NativeGallery/MediaSaveCallback

// NativeGallery/PermissionCallback

// NativeGallery/PermissionCallback

// System.IO.FileNotFoundException

// System.IO.FileNotFoundException

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// NativeGalleryNamespace.NGMediaReceiveCallbackiOS
struct NGMediaReceiveCallbackiOS_tD90DF712E9D1B5AE35D625194DB2E09EABAD0280_StaticFields
{
	// NativeGalleryNamespace.NGMediaReceiveCallbackiOS NativeGalleryNamespace.NGMediaReceiveCallbackiOS::instance
	NGMediaReceiveCallbackiOS_tD90DF712E9D1B5AE35D625194DB2E09EABAD0280* ___instance_4;
	// System.Boolean NativeGalleryNamespace.NGMediaReceiveCallbackiOS::<IsBusy>k__BackingField
	bool ___U3CIsBusyU3Ek__BackingField_8;
};

// NativeGalleryNamespace.NGMediaReceiveCallbackiOS

// NativeGalleryNamespace.NGMediaSaveCallbackiOS
struct NGMediaSaveCallbackiOS_t31F72978BB8FB757F7580EABA2D1EDFEAE2E87B9_StaticFields
{
	// NativeGalleryNamespace.NGMediaSaveCallbackiOS NativeGalleryNamespace.NGMediaSaveCallbackiOS::instance
	NGMediaSaveCallbackiOS_t31F72978BB8FB757F7580EABA2D1EDFEAE2E87B9* ___instance_4;
};

// NativeGalleryNamespace.NGMediaSaveCallbackiOS

// NativeGalleryNamespace.NGPermissionCallbackiOS
struct NGPermissionCallbackiOS_t966C11FC5C548BAB341244C5EB5AC30D800DA565_StaticFields
{
	// NativeGalleryNamespace.NGPermissionCallbackiOS NativeGalleryNamespace.NGPermissionCallbackiOS::instance
	NGPermissionCallbackiOS_t966C11FC5C548BAB341244C5EB5AC30D800DA565* ___instance_4;
};

// NativeGalleryNamespace.NGPermissionCallbackiOS
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Byte[]
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
// System.String[]
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
// System.Delegate[]
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


// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int32Enum>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskCompletionSource_1__ctor_m9FD8C5F5BF7CC119D6FF330BA42C60284DB47E65_gshared (TaskCompletionSource_1_tF8DA32849B904AE4F51ECAF6C6D7FA080481A35A* __this, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1<System.Int32Enum>::get_Task()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Task_1_t8DED34447688BFCF5112B0D05D5A80CED94E4BFB* TaskCompletionSource_1_get_Task_mB4A2FF75AC28BB6E3B7A55129E9CD347E5F06FDC_gshared_inline (TaskCompletionSource_1_tF8DA32849B904AE4F51ECAF6C6D7FA080481A35A* __this, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0 AsyncTaskMethodBuilder_1_Create_m6A59453D00C0143F178809ADFD98C90E8C291ABB_gshared (const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::Start<NativeGallery/<LoadImageAtPathAsync>d__68>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_Start_TisU3CLoadImageAtPathAsyncU3Ed__68_t6B30763C817CF0D323D6D6333BDCEC374A300CC4_m92D380992686AE708C380C1E983DABC9D238EC87_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, U3CLoadImageAtPathAsyncU3Ed__68_t6B30763C817CF0D323D6D6333BDCEC374A300CC4* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::get_Task()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* AsyncTaskMethodBuilder_1_get_Task_mEA092EC6F1324A9D694CF6056FA8583F2A2BDC89_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::Start<NativeGallery/<GetVideoThumbnailAsync>d__70>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_Start_TisU3CGetVideoThumbnailAsyncU3Ed__70_tD8ECB30B418EDA30010B6ACFFD3C1F8BE2BA7060_m459E0C2A9457A8C9449C40BC4B223F9D13F1559A_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, U3CGetVideoThumbnailAsyncU3Ed__70_tD8ECB30B418EDA30010B6ACFFD3C1F8BE2BA7060* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int32Enum>::SetResult(TResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskCompletionSource_1_SetResult_m9AEEE70A249C411C5DE39635EF35DAF9D5FAF458_gshared (TaskCompletionSource_1_tF8DA32849B904AE4F51ECAF6C6D7FA080481A35A* __this, int32_t ___0_result, const RuntimeMethod* method) ;
// System.Void System.Func`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_m663374A863E492A515BE9626B6F0E444991834E8_gshared (Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.Task::Run<System.Object>(System.Func`1<TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* Task_Run_TisRuntimeObject_m030003C532BA57F9193CA5BED8F832043B5758E8_gshared (Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* ___0_function, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult> System.Threading.Tasks.Task`1<System.Object>::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA Task_1_GetAwaiter_mD80ED263BF3F1F8DBDBD177BA3401A0AAAFA38E3_gshared (Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* __this, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_1_get_IsCompleted_mEEBB09E26F4165A0F864D92E1890CFCD2C8CFD54_gshared (TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>,NativeGallery/<LoadImageAtPathAsync>d__68>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CLoadImageAtPathAsyncU3Ed__68_t6B30763C817CF0D323D6D6333BDCEC374A300CC4_mED0C8B3FF95230B5EBF663B9BB286A920F4B80C5_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* ___0_awaiter, U3CLoadImageAtPathAsyncU3Ed__68_t6B30763C817CF0D323D6D6333BDCEC374A300CC4* ___1_stateMachine, const RuntimeMethod* method) ;
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TaskAwaiter_1_GetResult_mA4A8A1F43A456B40DDA251D00026C60919AED85B_gshared (TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter,NativeGallery/<LoadImageAtPathAsync>d__68>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisYieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A_TisU3CLoadImageAtPathAsyncU3Ed__68_t6B30763C817CF0D323D6D6333BDCEC374A300CC4_mD7D3E9E455861A3B9B9279F7B5CE6CF8A7306730_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A* ___0_awaiter, U3CLoadImageAtPathAsyncU3Ed__68_t6B30763C817CF0D323D6D6333BDCEC374A300CC4* ___1_stateMachine, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetException_mC2F74B26F5303F9F960965220E2866D777F1A5C6_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, Exception_t* ___0_exception, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetResult(TResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_m0D83195F995F9825D7A6DCDC3835D6917C43B5A6_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetStateMachine_m3BE54983634ABF5BE05200C7894AD0F9F20BDD65_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>,NativeGallery/<GetVideoThumbnailAsync>d__70>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CGetVideoThumbnailAsyncU3Ed__70_tD8ECB30B418EDA30010B6ACFFD3C1F8BE2BA7060_mD6E14A8F4491965E1C3764ACC9A7CD8CF1EDD9B9_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* ___0_awaiter, U3CGetVideoThumbnailAsyncU3Ed__70_tD8ECB30B418EDA30010B6ACFFD3C1F8BE2BA7060* ___1_stateMachine, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;

// System.String UnityEngine.Application::get_temporaryCachePath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_temporaryCachePath_mE4483A939988E69570C19F8B31AB9FB17B0FD97D (const RuntimeMethod* method) ;
// System.String System.IO.Path::Combine(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_Combine_m1ADAC05CDA2D1D61B172DF65A81E86592696BEAE (String_t* ___0_path1, String_t* ___1_path2, const RuntimeMethod* method) ;
// System.IO.DirectoryInfo System.IO.Directory::CreateDirectory(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* Directory_CreateDirectory_m16EC5CE8561A997C6635E06DC24C77590F29D94F (String_t* ___0_path, const RuntimeMethod* method) ;
// System.Int32 NativeGallery::_NativeGallery_CheckPermission(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery__NativeGallery_CheckPermission_m8F24C444BE681983ED5B4F90B1E48EFDA53771BE (int32_t ___0_readPermission, int32_t ___1_permissionFreeMode, const RuntimeMethod* method) ;
// NativeGallery/Permission NativeGallery::ProcessPermission(NativeGallery/Permission)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_ProcessPermission_m3F58F5B053D477F86A94386CECBE2B138AA407F2 (int32_t ___0_permission, const RuntimeMethod* method) ;
// NativeGallery/Permission NativeGallery::CheckPermission(NativeGallery/PermissionType,NativeGallery/MediaType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_CheckPermission_m11F20257C849D8E3E02D7B8095A672825AADAA84 (int32_t ___0_permissionType, int32_t ___1_mediaTypes, const RuntimeMethod* method) ;
// System.Int32 NativeGallery::_NativeGallery_RequestPermission(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery__NativeGallery_RequestPermission_mB1FD15B2DE256B8D6729A59D1924D0ECBF5E650A (int32_t ___0_readPermission, int32_t ___1_permissionFreeMode, int32_t ___2_asyncMode, const RuntimeMethod* method) ;
// System.Void NativeGallery/<>c__DisplayClass33_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass33_0__ctor_m9E7AB845CD89107E6D3BC0E9F4F0852D3C5FF3C9 (U3CU3Ec__DisplayClass33_0_t232C3A72571561AE5A8AD8E34F2BD240999EE360* __this, const RuntimeMethod* method) ;
// System.Void NativeGallery/PermissionCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PermissionCallback__ctor_mBD077D6A9E8984D7DF933B1BB0C704832503A8E2 (PermissionCallback_t43E69EC9D59F3ADAC411FBE19A499BCB840180D4* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void NativeGalleryNamespace.NGPermissionCallbackiOS::Initialize(NativeGallery/PermissionCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NGPermissionCallbackiOS_Initialize_m524E1B648EBBF449C62B026E9661BEECD01F98EC (PermissionCallback_t43E69EC9D59F3ADAC411FBE19A499BCB840180D4* ___0_callback, const RuntimeMethod* method) ;
// System.Void NativeGallery/<>c__DisplayClass34_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass34_0__ctor_mE59E28BA217AB598C7FF19F21CC8A85690F43100 (U3CU3Ec__DisplayClass34_0_t7CEBF1C5F25C154499ED0F3F3834C55E0EF7BD59* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<NativeGallery/Permission>::.ctor()
inline void TaskCompletionSource_1__ctor_mE2CE066FBB5CD986B6EC9B8B287E263E3FE0E824 (TaskCompletionSource_1_tA40684670E345C5786526437707F448A78DD4DC2* __this, const RuntimeMethod* method)
{
	((  void (*) (TaskCompletionSource_1_tA40684670E345C5786526437707F448A78DD4DC2*, const RuntimeMethod*))TaskCompletionSource_1__ctor_m9FD8C5F5BF7CC119D6FF330BA42C60284DB47E65_gshared)(__this, method);
}
// System.Void NativeGallery::RequestPermissionAsync(NativeGallery/PermissionCallback,NativeGallery/PermissionType,NativeGallery/MediaType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeGallery_RequestPermissionAsync_m8125D5CD784CEA0E035B81BC769C573AE5BDE800 (PermissionCallback_t43E69EC9D59F3ADAC411FBE19A499BCB840180D4* ___0_callback, int32_t ___1_permissionType, int32_t ___2_mediaTypes, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1<NativeGallery/Permission>::get_Task()
inline Task_1_t5C89128A5298F29B41DC7B2DA6CCB578F49EFBC8* TaskCompletionSource_1_get_Task_m278F89B2C2B247D13AD0C344238EDDC7999402CA_inline (TaskCompletionSource_1_tA40684670E345C5786526437707F448A78DD4DC2* __this, const RuntimeMethod* method)
{
	return ((  Task_1_t5C89128A5298F29B41DC7B2DA6CCB578F49EFBC8* (*) (TaskCompletionSource_1_tA40684670E345C5786526437707F448A78DD4DC2*, const RuntimeMethod*))TaskCompletionSource_1_get_Task_mB4A2FF75AC28BB6E3B7A55129E9CD347E5F06FDC_gshared_inline)(__this, method);
}
// System.Boolean NativeGallery::IsMediaPickerBusy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeGallery_IsMediaPickerBusy_m08C8520C94ABF511EA6E7F48E63697CA7857BAAD (const RuntimeMethod* method) ;
// System.Void NativeGallery::_NativeGallery_ShowLimitedLibraryPicker()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeGallery__NativeGallery_ShowLimitedLibraryPicker_mDDD75C25681DE5A64D5DA209EE6FE598E06CBC53 (const RuntimeMethod* method) ;
// System.Int32 NativeGallery::_NativeGallery_CanOpenSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery__NativeGallery_CanOpenSettings_m7FBFCF2BACD869F08492AA9E7F9A3FF7A7802BEF (const RuntimeMethod* method) ;
// System.Void NativeGallery::_NativeGallery_OpenSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeGallery__NativeGallery_OpenSettings_m40F43B7E9C7F141C5BDAC5B8FCD1600A20A7B280 (const RuntimeMethod* method) ;
// NativeGallery/Permission NativeGallery::SaveToGallery(System.Byte[],System.String,System.String,NativeGallery/MediaType,NativeGallery/MediaSaveCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_SaveToGallery_mAD9820FA0C518D117A499DC5D99BF99D240C4454 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_mediaBytes, String_t* ___1_album, String_t* ___2_filename, int32_t ___3_mediaType, MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D* ___4_callback, const RuntimeMethod* method) ;
// NativeGallery/Permission NativeGallery::SaveToGallery(System.String,System.String,System.String,NativeGallery/MediaType,NativeGallery/MediaSaveCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_SaveToGallery_mC512FADA8F0312FA131B768E103068CD34B83240 (String_t* ___0_existingMediaPath, String_t* ___1_album, String_t* ___2_filename, int32_t ___3_mediaType, MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D* ___4_callback, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Boolean System.String::EndsWith(System.String,System.StringComparison)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_EndsWith_m5E5D307CA6AEB7C08CE782B4693B19D07ADC9075 (String_t* __this, String_t* ___0_value, int32_t ___1_comparisonType, const RuntimeMethod* method) ;
// System.Byte[] NativeGallery::GetTextureBytes(UnityEngine.Texture2D,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* NativeGallery_GetTextureBytes_mB475FDFD6E1FBEAA043E1190CC5B4172EE3536EF (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___0_texture, bool ___1_isJpeg, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
// System.Int32 NativeGallery::_NativeGallery_CanPickMultipleMedia()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery__NativeGallery_CanPickMultipleMedia_m6BC29185A573FCDEE17DF2796BDA64BDB383F6B4 (const RuntimeMethod* method) ;
// NativeGallery/Permission NativeGallery::GetMediaFromGallery(NativeGallery/MediaPickCallback,NativeGallery/MediaType,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_GetMediaFromGallery_mE04A8BFF146401DA572B17485B97A88D11A509E1 (MediaPickCallback_tC207F6F3EEE18F64B03E23D5C9FA8C79517A5EB6* ___0_callback, int32_t ___1_mediaType, String_t* ___2_mime, String_t* ___3_title, const RuntimeMethod* method) ;
// NativeGallery/Permission NativeGallery::GetMultipleMediaFromGallery(NativeGallery/MediaPickMultipleCallback,NativeGallery/MediaType,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_GetMultipleMediaFromGallery_mA60A18D80705ACD41BBACC5DB898F2BA758DF35C (MediaPickMultipleCallback_t717A5D378751E2CACB53E6BA25386FF8DB41627B* ___0_callback, int32_t ___1_mediaType, String_t* ___2_mime, String_t* ___3_title, const RuntimeMethod* method) ;
// System.Boolean NativeGalleryNamespace.NGMediaReceiveCallbackiOS::get_IsBusy()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool NGMediaReceiveCallbackiOS_get_IsBusy_mBD81A0B09C4B317F2CB308B31C7855AD835475E7_inline (const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___0_value, const RuntimeMethod* method) ;
// System.String System.IO.Path::GetExtension(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_GetExtension_m6FEAA9E14451BFD210B9D1AEC2430C813F570FE5 (String_t* ___0_path, const RuntimeMethod* method) ;
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Substring(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472 (String_t* __this, int32_t ___0_startIndex, const RuntimeMethod* method) ;
// System.String System.String::ToLowerInvariant()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_ToLowerInvariant_mBE32C93DE27C5353FEA3FA654FC1DDBE3D0EB0F2 (String_t* __this, const RuntimeMethod* method) ;
// System.Int32 NativeGallery::_NativeGallery_GetMediaTypeFromExtension(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery__NativeGallery_GetMediaTypeFromExtension_m7F12FB0D63E6C746D2E68A5B1D720EB134E43028 (String_t* ___0_extension, const RuntimeMethod* method) ;
// NativeGallery/Permission NativeGallery::RequestPermission(NativeGallery/PermissionType,NativeGallery/MediaType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_RequestPermission_mB2F20A17757755EB1B2C3F171DCD5944A4CF1706 (int32_t ___0_permissionType, int32_t ___1_mediaTypes, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.String NativeGallery::GetTemporarySavePath(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NativeGallery_GetTemporarySavePath_m2057630E0A0206CEEC5C908A37470E49A0D70E60 (String_t* ___0_filename, const RuntimeMethod* method) ;
// System.Void System.IO.File::WriteAllBytes(System.String,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void File_WriteAllBytes_mC491031DA14AA9B591F62D6AD0181D090E081077 (String_t* ___0_path, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_bytes, const RuntimeMethod* method) ;
// System.Void NativeGallery::SaveToGalleryInternal(System.String,System.String,NativeGallery/MediaType,NativeGallery/MediaSaveCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeGallery_SaveToGalleryInternal_m7E98DD903D33ED3D5E3036C256CE09CC0422359E (String_t* ___0_path, String_t* ___1_album, int32_t ___2_mediaType, MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D* ___3_callback, const RuntimeMethod* method) ;
// System.Boolean System.IO.File::Exists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool File_Exists_m95E329ABBE3EAD6750FE1989BBA6884457136D4A (String_t* ___0_path, const RuntimeMethod* method) ;
// System.Void System.IO.FileNotFoundException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileNotFoundException__ctor_mA8C9C93DB8C5B96D6B5E59B2AE07154F265FB1A1 (FileNotFoundException_t17F1B49AD996E4A60C87C7ADC9D3A25EB5808A9A* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void System.IO.File::Copy(System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void File_Copy_m3798F05909C43D7EA26130D51D0A15CFCBE7458A (String_t* ___0_sourceFileName, String_t* ___1_destFileName, bool ___2_overwrite, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Void NativeGallery/MediaSaveCallback::Invoke(System.Boolean,System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MediaSaveCallback_Invoke_mD97247E7132D61D5D8C1E3063FEF0C09205E925C_inline (MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D* __this, bool ___0_success, String_t* ___1_path, const RuntimeMethod* method) ;
// System.String System.IO.Path::GetFileName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_GetFileName_mB1A8CE314EE250B06E3D33142315E2BD3A75D1D6 (String_t* ___0_path, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Void NativeGalleryNamespace.NGMediaSaveCallbackiOS::Initialize(NativeGallery/MediaSaveCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NGMediaSaveCallbackiOS_Initialize_m59AB586285AA39B43E75AE2B93F15AFBA49FA312 (MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D* ___0_callback, const RuntimeMethod* method) ;
// System.Void NativeGallery::_NativeGallery_ImageWriteToAlbum(System.String,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeGallery__NativeGallery_ImageWriteToAlbum_m70C256937DE0CBF5527D6ACE107176FF21298F90 (String_t* ___0_path, String_t* ___1_album, int32_t ___2_permissionFreeMode, const RuntimeMethod* method) ;
// System.Void NativeGallery::_NativeGallery_VideoWriteToAlbum(System.String,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeGallery__NativeGallery_VideoWriteToAlbum_mB5BCA8550DB8EC4054454DECCE2A8D211662EFBD (String_t* ___0_path, String_t* ___1_album, int32_t ___2_permissionFreeMode, const RuntimeMethod* method) ;
// System.String UnityEngine.Application::get_persistentDataPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_persistentDataPath_mC58BD3E1A20732E0A536491DBCAE6505B1624399 (const RuntimeMethod* method) ;
// System.String System.IO.Path::GetFileNameWithoutExtension(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_GetFileNameWithoutExtension_m2D14CCBAB9C60DC8D32C2443CCE3D34644822FAF (String_t* ___0_path, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9DF47FC6E1F8341012CA3FF02993D372AA7A96C9 (RuntimeObject* ___0_arg0, RuntimeObject* ___1_arg1, RuntimeObject* ___2_arg2, const RuntimeMethod* method) ;
// System.Void NativeGallery/MediaPickCallback::Invoke(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MediaPickCallback_Invoke_m25F1FD61CF9FE4C835CD3298D790CBB61691BC4E_inline (MediaPickCallback_tC207F6F3EEE18F64B03E23D5C9FA8C79517A5EB6* __this, String_t* ___0_path, const RuntimeMethod* method) ;
// System.Void NativeGalleryNamespace.NGMediaReceiveCallbackiOS::Initialize(NativeGallery/MediaPickCallback,NativeGallery/MediaPickMultipleCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NGMediaReceiveCallbackiOS_Initialize_m4FED174803F7A702EC9D42B9852078AF352658E8 (MediaPickCallback_tC207F6F3EEE18F64B03E23D5C9FA8C79517A5EB6* ___0_callback, MediaPickMultipleCallback_t717A5D378751E2CACB53E6BA25386FF8DB41627B* ___1_callbackMultiple, const RuntimeMethod* method) ;
// System.String NativeGallery::get_SelectedMediaPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NativeGallery_get_SelectedMediaPath_mBB0C7C91D1B7ED7D8D2F457B86432E2D7AA7A19F (const RuntimeMethod* method) ;
// System.Void NativeGallery::_NativeGallery_PickMedia(System.String,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeGallery__NativeGallery_PickMedia_m98B3BC86CBFDA5E35959B10DF6F52AEE1FE185DC (String_t* ___0_mediaSavePath, int32_t ___1_mediaType, int32_t ___2_permissionFreeMode, int32_t ___3_selectionLimit, const RuntimeMethod* method) ;
// System.Boolean NativeGallery::CanSelectMultipleFilesFromGallery()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeGallery_CanSelectMultipleFilesFromGallery_m8B64B58699A6EEB502428C3444FBFEE702E63997 (const RuntimeMethod* method) ;
// System.Void NativeGallery/MediaPickMultipleCallback::Invoke(System.String[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MediaPickMultipleCallback_Invoke_m5FE7D489E8659411C7E24DB7E892B439C9990F3D_inline (MediaPickMultipleCallback_t717A5D378751E2CACB53E6BA25386FF8DB41627B* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_paths, const RuntimeMethod* method) ;
// System.Byte[] UnityEngine.ImageConversion::EncodeToPNG(UnityEngine.Texture2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ImageConversion_EncodeToPNG_m0804AD31B83C653AEBB234F6CC31A02D4FA7C945 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___0_tex, const RuntimeMethod* method) ;
// System.Byte[] UnityEngine.ImageConversion::EncodeToJPG(UnityEngine.Texture2D,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ImageConversion_EncodeToJPG_mD0307B5DFF32A3FF39488E97B467F11AFE501F6F (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___0_tex, int32_t ___1_quality, const RuntimeMethod* method) ;
// System.Byte[] NativeGallery::GetTextureBytesFromCopy(UnityEngine.Texture2D,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* NativeGallery_GetTextureBytesFromCopy_m23C31F7FB9D56BD6144EA7D15230E0718D84DED7 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___0_texture, bool ___1_isJpeg, const RuntimeMethod* method) ;
// UnityEngine.RenderTexture UnityEngine.RenderTexture::GetTemporary(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* RenderTexture_GetTemporary_m82379FD4C767A36F0677CAF4E68319EAE16ADF7F (int32_t ___0_width, int32_t ___1_height, const RuntimeMethod* method) ;
// UnityEngine.RenderTexture UnityEngine.RenderTexture::get_active()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* RenderTexture_get_active_mA4434B3E79DEF2C01CAE0A53061598B16443C9E7 (const RuntimeMethod* method) ;
// System.Void UnityEngine.RenderTexture::set_active(UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture_set_active_m5EE8E2327EF9B306C1425014CC34C41A8384E7AB (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.RenderTexture::ReleaseTemporary(UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture_ReleaseTemporary_mEEF2C1990196FF06FDD0DC190928AD3A023EBDD2 (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___0_temp, const RuntimeMethod* method) ;
// System.Void UnityEngine.Graphics::Blit(UnityEngine.Texture,UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Graphics_Blit_m8D99E16B74C7D3C8F79F4F142C59DB6B38114504 (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___0_source, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___1_dest, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D__ctor_mECF60A9EC0638EC353C02C8E99B6B465D23BE917 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, int32_t ___0_width, int32_t ___1_height, int32_t ___2_textureFormat, bool ___3_mipChain, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___0_x, float ___1_y, float ___2_width, float ___3_height, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::ReadPixels(UnityEngine.Rect,System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_ReadPixels_m7483DB211233F02E46418E9A6077487925F0024C (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___0_source, int32_t ___1_destX, int32_t ___2_destY, bool ___3_recalculateMipMaps, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::Apply(System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_Apply_m36EE27E6F1BF7FB8C70A1D749DC4EE249810AA3A (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, bool ___0_updateMipmaps, bool ___1_makeNoLongerReadable, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogException_mAB3F4DC7297ED8FBB49DAA718B70E59A6B0171B0 (Exception_t* ___0_exception, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DestroyImmediate_m6336EBC83591A5DB64EC70C92132824C6E258705 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_obj, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.SystemInfo::get_maxTextureSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SystemInfo_get_maxTextureSize_mEE557C09643222591C6F4D3F561D7A60CD403991 (const RuntimeMethod* method) ;
// System.String NativeGallery::get_TemporaryImagePath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NativeGallery_get_TemporaryImagePath_m05418FC4CC85508CDAE30BEDCC344C85884E1BF8 (const RuntimeMethod* method) ;
// System.String NativeGallery::_NativeGallery_LoadImageAtPath(System.String,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NativeGallery__NativeGallery_LoadImageAtPath_m307F352849636A1E1D1E46202B8F5A3EFB5F1744 (String_t* ___0_path, String_t* ___1_temporaryFilePath, int32_t ___2_maxSize, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D__ctor_mC3F84195D1DCEFC0536B3FBD40A8F8E865A4F32A (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, int32_t ___0_width, int32_t ___1_height, int32_t ___2_textureFormat, bool ___3_mipChain, bool ___4_linear, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
// System.Void System.IO.File::Delete(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void File_Delete_mE29829DA504F3E1B8BCB78F21E2862C9ED7EC386 (String_t* ___0_path, const RuntimeMethod* method) ;
// System.Byte[] System.IO.File::ReadAllBytes(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* File_ReadAllBytes_m704CBBA3F130C94F5A3E0BE2A93D9E9D79DC3E24 (String_t* ___0_path, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.ImageConversion::LoadImage(UnityEngine.Texture2D,System.Byte[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ImageConversion_LoadImage_m292ADCEED268A0A0AAD532BAB8D1710CF0FC8AEF (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___0_tex, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_data, bool ___2_markNonReadable, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<UnityEngine.Texture2D>::Create()
inline AsyncTaskMethodBuilder_1_t05B41371EF0E362ABCB54C56063FAA1E00C69A8F AsyncTaskMethodBuilder_1_Create_mEBDA40894C43C50AA47346AC784F528C9CA1ABD4 (const RuntimeMethod* method)
{
	return ((  AsyncTaskMethodBuilder_1_t05B41371EF0E362ABCB54C56063FAA1E00C69A8F (*) (const RuntimeMethod*))AsyncTaskMethodBuilder_1_Create_m6A59453D00C0143F178809ADFD98C90E8C291ABB_gshared)(method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<UnityEngine.Texture2D>::Start<NativeGallery/<LoadImageAtPathAsync>d__68>(TStateMachine&)
inline void AsyncTaskMethodBuilder_1_Start_TisU3CLoadImageAtPathAsyncU3Ed__68_t6B30763C817CF0D323D6D6333BDCEC374A300CC4_m56B5776DAE2E64CCFC7B971A4DB5685D10733F62 (AsyncTaskMethodBuilder_1_t05B41371EF0E362ABCB54C56063FAA1E00C69A8F* __this, U3CLoadImageAtPathAsyncU3Ed__68_t6B30763C817CF0D323D6D6333BDCEC374A300CC4* ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t05B41371EF0E362ABCB54C56063FAA1E00C69A8F*, U3CLoadImageAtPathAsyncU3Ed__68_t6B30763C817CF0D323D6D6333BDCEC374A300CC4*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_Start_TisU3CLoadImageAtPathAsyncU3Ed__68_t6B30763C817CF0D323D6D6333BDCEC374A300CC4_m92D380992686AE708C380C1E983DABC9D238EC87_gshared)(__this, ___0_stateMachine, method);
}
// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<UnityEngine.Texture2D>::get_Task()
inline Task_1_t95921EB64E237ACD28589D64B693C652268F225E* AsyncTaskMethodBuilder_1_get_Task_mC842CA788344F6A0EAB9EFDE97E0FAC79368245E (AsyncTaskMethodBuilder_1_t05B41371EF0E362ABCB54C56063FAA1E00C69A8F* __this, const RuntimeMethod* method)
{
	return ((  Task_1_t95921EB64E237ACD28589D64B693C652268F225E* (*) (AsyncTaskMethodBuilder_1_t05B41371EF0E362ABCB54C56063FAA1E00C69A8F*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_get_Task_mEA092EC6F1324A9D694CF6056FA8583F2A2BDC89_gshared)(__this, method);
}
// System.String NativeGallery::_NativeGallery_GetVideoThumbnail(System.String,System.String,System.Int32,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NativeGallery__NativeGallery_GetVideoThumbnail_m83B768DF2FA15147F6938AD36A29DE5ED18C0707 (String_t* ___0_path, String_t* ___1_thumbnailSavePath, int32_t ___2_maxSize, double ___3_captureTimeInSeconds, const RuntimeMethod* method) ;
// UnityEngine.Texture2D NativeGallery::LoadImageAtPath(System.String,System.Int32,System.Boolean,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* NativeGallery_LoadImageAtPath_m62187A34B7B063FBEFFD7E200DEC2332313A56AE (String_t* ___0_imagePath, int32_t ___1_maxSize, bool ___2_markTextureNonReadable, bool ___3_generateMipmaps, bool ___4_linearColorSpace, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<UnityEngine.Texture2D>::Start<NativeGallery/<GetVideoThumbnailAsync>d__70>(TStateMachine&)
inline void AsyncTaskMethodBuilder_1_Start_TisU3CGetVideoThumbnailAsyncU3Ed__70_tD8ECB30B418EDA30010B6ACFFD3C1F8BE2BA7060_m5ED6CB236201185BED7B2886CC6838FB48D2541E (AsyncTaskMethodBuilder_1_t05B41371EF0E362ABCB54C56063FAA1E00C69A8F* __this, U3CGetVideoThumbnailAsyncU3Ed__70_tD8ECB30B418EDA30010B6ACFFD3C1F8BE2BA7060* ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t05B41371EF0E362ABCB54C56063FAA1E00C69A8F*, U3CGetVideoThumbnailAsyncU3Ed__70_tD8ECB30B418EDA30010B6ACFFD3C1F8BE2BA7060*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_Start_TisU3CGetVideoThumbnailAsyncU3Ed__70_tD8ECB30B418EDA30010B6ACFFD3C1F8BE2BA7060_m459E0C2A9457A8C9449C40BC4B223F9D13F1559A_gshared)(__this, ___0_stateMachine, method);
}
// System.String NativeGallery::_NativeGallery_GetImageProperties(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NativeGallery__NativeGallery_GetImageProperties_mD2BBA09FAEB28B07C78B81C3A0AD3159B631AB52 (String_t* ___0_path, const RuntimeMethod* method) ;
// System.String[] System.String::Split(System.Char,System.StringSplitOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* String_Split_m9530B73D02054692283BF35C3A27C8F2230946F4 (String_t* __this, Il2CppChar ___0_separator, int32_t ___1_options, const RuntimeMethod* method) ;
// System.String System.String::Trim()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5 (String_t* __this, const RuntimeMethod* method) ;
// System.Boolean System.Int32::TryParse(System.String,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Int32_TryParse_mC928DE2FEC1C35ED5298BDDCA9868076E94B8A21 (String_t* ___0_s, int32_t* ___1_result, const RuntimeMethod* method) ;
// System.Void NativeGallery/ImageProperties::.ctor(System.Int32,System.Int32,System.String,NativeGallery/ImageOrientation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageProperties__ctor_m544A791184FB701B39531F6E5CB3C023856797E3 (ImageProperties_t7C971D51A4992A01CD205754169B919B56696F59* __this, int32_t ___0_width, int32_t ___1_height, String_t* ___2_mimeType, int32_t ___3_orientation, const RuntimeMethod* method) ;
// System.String NativeGallery::_NativeGallery_GetVideoProperties(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NativeGallery__NativeGallery_GetVideoProperties_mB575DF63954F28F125784B45734E8124CB2B050B (String_t* ___0_path, const RuntimeMethod* method) ;
// System.Boolean System.Int64::TryParse(System.String,System.Int64&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Int64_TryParse_m3FC0128C89CC2331239FC2A0A749BF33455F03D2 (String_t* ___0_s, int64_t* ___1_result, const RuntimeMethod* method) ;
// System.String System.String::Replace(System.Char,System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Replace_m86403DC5F422D8D5E1CFAAF255B103CB807EDAAF (String_t* __this, Il2CppChar ___0_oldChar, Il2CppChar ___1_newChar, const RuntimeMethod* method) ;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6 (const RuntimeMethod* method) ;
// System.Boolean System.Single::TryParse(System.String,System.Globalization.NumberStyles,System.IFormatProvider,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Single_TryParse_mFB8CC32F0016FBB6EFCB97953CF3515767EB6431 (String_t* ___0_s, int32_t ___1_style, RuntimeObject* ___2_provider, float* ___3_result, const RuntimeMethod* method) ;
// System.Void NativeGallery/VideoProperties::.ctor(System.Int32,System.Int32,System.Int64,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoProperties__ctor_mF5D60E1ACB2B90A080BDB94C6362E49F835B2BFD (VideoProperties_t11DD7C4EACACE50EA3D710F3E2595A68B17103A5* __this, int32_t ___0_width, int32_t ___1_height, int64_t ___2_duration, float ___3_rotation, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void NativeGallery/PermissionCallback::Invoke(NativeGallery/Permission)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PermissionCallback_Invoke_mDFCBF3C4C5BFC95CBDC25A75169BA876EE76BB40_inline (PermissionCallback_t43E69EC9D59F3ADAC411FBE19A499BCB840180D4* __this, int32_t ___0_permission, const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<NativeGallery/Permission>::SetResult(TResult)
inline void TaskCompletionSource_1_SetResult_m5DC5B682780071790E0376414253BFEDEC4942D8 (TaskCompletionSource_1_tA40684670E345C5786526437707F448A78DD4DC2* __this, int32_t ___0_result, const RuntimeMethod* method)
{
	((  void (*) (TaskCompletionSource_1_tA40684670E345C5786526437707F448A78DD4DC2*, int32_t, const RuntimeMethod*))TaskCompletionSource_1_SetResult_m9AEEE70A249C411C5DE39635EF35DAF9D5FAF458_gshared)(__this, ___0_result, method);
}
// System.Void NativeGallery/<>c__DisplayClass68_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass68_0__ctor_m269B76D05990CFE4BB835A505ED98CA8D44E3488 (U3CU3Ec__DisplayClass68_0_t5FD6F0E0A673166A71D913C59D9368908630AA35* __this, const RuntimeMethod* method) ;
// System.Void System.Func`1<System.String>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_m27A68E928C1D9158EAAD261086B9BC424339327B (Func_1_t367387BB2C476D3F32DB12161B5FDC128DC3231C* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t367387BB2C476D3F32DB12161B5FDC128DC3231C*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_1__ctor_m663374A863E492A515BE9626B6F0E444991834E8_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.Task::Run<System.String>(System.Func`1<TResult>)
inline Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* Task_Run_TisString_t_mDC4F0FD46A6DD4FE57DE5788DEF07F7F277821C3 (Func_1_t367387BB2C476D3F32DB12161B5FDC128DC3231C* ___0_function, const RuntimeMethod* method)
{
	return ((  Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* (*) (Func_1_t367387BB2C476D3F32DB12161B5FDC128DC3231C*, const RuntimeMethod*))Task_Run_TisRuntimeObject_m030003C532BA57F9193CA5BED8F832043B5758E8_gshared)(___0_function, method);
}
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult> System.Threading.Tasks.Task`1<System.String>::GetAwaiter()
inline TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6 Task_1_GetAwaiter_m7727657658441E9D4CE9D3F8B532F9D65CB9CE1F (Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* __this, const RuntimeMethod* method)
{
	return ((  TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6 (*) (Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0*, const RuntimeMethod*))Task_1_GetAwaiter_mD80ED263BF3F1F8DBDBD177BA3401A0AAAFA38E3_gshared)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.String>::get_IsCompleted()
inline bool TaskAwaiter_1_get_IsCompleted_mE207C5509602B0BB59366E53CED6CC9B10A1F8A8 (TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6*, const RuntimeMethod*))TaskAwaiter_1_get_IsCompleted_mEEBB09E26F4165A0F864D92E1890CFCD2C8CFD54_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<UnityEngine.Texture2D>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.String>,NativeGallery/<LoadImageAtPathAsync>d__68>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6_TisU3CLoadImageAtPathAsyncU3Ed__68_t6B30763C817CF0D323D6D6333BDCEC374A300CC4_m1A1DC59029FA7642073FDFD35BB465C74749C6BB (AsyncTaskMethodBuilder_1_t05B41371EF0E362ABCB54C56063FAA1E00C69A8F* __this, TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6* ___0_awaiter, U3CLoadImageAtPathAsyncU3Ed__68_t6B30763C817CF0D323D6D6333BDCEC374A300CC4* ___1_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t05B41371EF0E362ABCB54C56063FAA1E00C69A8F*, TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6*, U3CLoadImageAtPathAsyncU3Ed__68_t6B30763C817CF0D323D6D6333BDCEC374A300CC4*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CLoadImageAtPathAsyncU3Ed__68_t6B30763C817CF0D323D6D6333BDCEC374A300CC4_mED0C8B3FF95230B5EBF663B9BB286A920F4B80C5_gshared)(__this, ___0_awaiter, ___1_stateMachine, method);
}
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<System.String>::GetResult()
inline String_t* TaskAwaiter_1_GetResult_m82A392802A854576DC9525B87B0053B56201ABB9 (TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6*, const RuntimeMethod*))TaskAwaiter_1_GetResult_mA4A8A1F43A456B40DDA251D00026C60919AED85B_gshared)(__this, method);
}
// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequestTexture::GetTexture(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* UnityWebRequestTexture_GetTexture_m45F855106C834021AC0DFA25FE31BA14C42693CA (String_t* ___0_uri, bool ___1_nonReadable, const RuntimeMethod* method) ;
// UnityEngine.Networking.UnityWebRequestAsyncOperation UnityEngine.Networking.UnityWebRequest::SendWebRequest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* UnityWebRequest_SendWebRequest_mA3CD13983BAA5074A0640EDD661B1E46E6DB6C13 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.YieldAwaitable System.Threading.Tasks.Task::Yield()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR YieldAwaitable_tFEA898DB9022A953958C3CF531E1477D135D3DAB Task_Yield_m27EE257EF53788244C5B2E874C514C24C693F9B1 (const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter System.Runtime.CompilerServices.YieldAwaitable::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A YieldAwaitable_GetAwaiter_m359A05B8C1B9F3F1E9CAE29AD231C0987718DE5E (YieldAwaitable_tFEA898DB9022A953958C3CF531E1477D135D3DAB* __this, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool YieldAwaiter_get_IsCompleted_m783B6E67654FDBF490A65AC59972AF6B985A9286 (YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<UnityEngine.Texture2D>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter,NativeGallery/<LoadImageAtPathAsync>d__68>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisYieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A_TisU3CLoadImageAtPathAsyncU3Ed__68_t6B30763C817CF0D323D6D6333BDCEC374A300CC4_m86352FE7512D5B2CA00EBBAE87873A639192675A (AsyncTaskMethodBuilder_1_t05B41371EF0E362ABCB54C56063FAA1E00C69A8F* __this, YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A* ___0_awaiter, U3CLoadImageAtPathAsyncU3Ed__68_t6B30763C817CF0D323D6D6333BDCEC374A300CC4* ___1_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t05B41371EF0E362ABCB54C56063FAA1E00C69A8F*, YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A*, U3CLoadImageAtPathAsyncU3Ed__68_t6B30763C817CF0D323D6D6333BDCEC374A300CC4*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisYieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A_TisU3CLoadImageAtPathAsyncU3Ed__68_t6B30763C817CF0D323D6D6333BDCEC374A300CC4_mD7D3E9E455861A3B9B9279F7B5CE6CF8A7306730_gshared)(__this, ___0_awaiter, ___1_stateMachine, method);
}
// System.Void System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YieldAwaiter_GetResult_m83C9B35D4BBEB09AC5B560912436454D69794F07 (YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.AsyncOperation::get_isDone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AsyncOperation_get_isDone_m68A0682777E2132FC033182E9F50303566AA354D (AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* __this, const RuntimeMethod* method) ;
// UnityEngine.Networking.UnityWebRequest/Result UnityEngine.Networking.UnityWebRequest::get_result()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityWebRequest_get_result_mEF83848C5FCFB5E307CE4B57E42BF02FC9AED449 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Networking.UnityWebRequest::get_error()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityWebRequest_get_error_m20A5D813ED59118B7AA1D1E2EB5250178B1F5B6F (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// UnityEngine.Texture2D UnityEngine.Networking.DownloadHandlerTexture::GetContent(UnityEngine.Networking.UnityWebRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* DownloadHandlerTexture_GetContent_m86BC88F58305A1B21C21CE7D82658197932EFB18 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___0_www, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_exists, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<UnityEngine.Texture2D>::SetException(System.Exception)
inline void AsyncTaskMethodBuilder_1_SetException_m1697D9F7BF9D11383EDE12CEE54A18AC24A7786B (AsyncTaskMethodBuilder_1_t05B41371EF0E362ABCB54C56063FAA1E00C69A8F* __this, Exception_t* ___0_exception, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t05B41371EF0E362ABCB54C56063FAA1E00C69A8F*, Exception_t*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetException_mC2F74B26F5303F9F960965220E2866D777F1A5C6_gshared)(__this, ___0_exception, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<UnityEngine.Texture2D>::SetResult(TResult)
inline void AsyncTaskMethodBuilder_1_SetResult_mAB04B95B4490AB6E1FCB475391576D15606A2688 (AsyncTaskMethodBuilder_1_t05B41371EF0E362ABCB54C56063FAA1E00C69A8F* __this, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___0_result, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t05B41371EF0E362ABCB54C56063FAA1E00C69A8F*, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetResult_m0D83195F995F9825D7A6DCDC3835D6917C43B5A6_gshared)(__this, ___0_result, method);
}
// System.Void NativeGallery/<LoadImageAtPathAsync>d__68::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadImageAtPathAsyncU3Ed__68_MoveNext_mA505FA18AF54BE2929AF74A6293411934E8F4427 (U3CLoadImageAtPathAsyncU3Ed__68_t6B30763C817CF0D323D6D6333BDCEC374A300CC4* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<UnityEngine.Texture2D>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
inline void AsyncTaskMethodBuilder_1_SetStateMachine_m0ECA1B3B604CFFB8A5DE544E2A0A0025BFE6B6FD (AsyncTaskMethodBuilder_1_t05B41371EF0E362ABCB54C56063FAA1E00C69A8F* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t05B41371EF0E362ABCB54C56063FAA1E00C69A8F*, RuntimeObject*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetStateMachine_m3BE54983634ABF5BE05200C7894AD0F9F20BDD65_gshared)(__this, ___0_stateMachine, method);
}
// System.Void NativeGallery/<LoadImageAtPathAsync>d__68::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadImageAtPathAsyncU3Ed__68_SetStateMachine_m3BF4EA39271DFE60DA83A1814BF88342F0FF7D3F (U3CLoadImageAtPathAsyncU3Ed__68_t6B30763C817CF0D323D6D6333BDCEC374A300CC4* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Void NativeGallery/<>c__DisplayClass70_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass70_0__ctor_mFF24444EC20282423DE51690E701BF91DB4762A9 (U3CU3Ec__DisplayClass70_0_tEAF0E75379345E2943DD1EAF374045A9484E6B88* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<UnityEngine.Texture2D>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.String>,NativeGallery/<GetVideoThumbnailAsync>d__70>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6_TisU3CGetVideoThumbnailAsyncU3Ed__70_tD8ECB30B418EDA30010B6ACFFD3C1F8BE2BA7060_mC961E23C1370FCAB8534533C73F741BAC448A546 (AsyncTaskMethodBuilder_1_t05B41371EF0E362ABCB54C56063FAA1E00C69A8F* __this, TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6* ___0_awaiter, U3CGetVideoThumbnailAsyncU3Ed__70_tD8ECB30B418EDA30010B6ACFFD3C1F8BE2BA7060* ___1_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t05B41371EF0E362ABCB54C56063FAA1E00C69A8F*, TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6*, U3CGetVideoThumbnailAsyncU3Ed__70_tD8ECB30B418EDA30010B6ACFFD3C1F8BE2BA7060*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CGetVideoThumbnailAsyncU3Ed__70_tD8ECB30B418EDA30010B6ACFFD3C1F8BE2BA7060_mD6E14A8F4491965E1C3764ACC9A7CD8CF1EDD9B9_gshared)(__this, ___0_awaiter, ___1_stateMachine, method);
}
// System.Threading.Tasks.Task`1<UnityEngine.Texture2D> NativeGallery::LoadImageAtPathAsync(System.String,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t95921EB64E237ACD28589D64B693C652268F225E* NativeGallery_LoadImageAtPathAsync_m5927E93A68C0EFA80CE2ED62FCDA3FAF6089134A (String_t* ___0_imagePath, int32_t ___1_maxSize, bool ___2_markTextureNonReadable, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult> System.Threading.Tasks.Task`1<UnityEngine.Texture2D>::GetAwaiter()
inline TaskAwaiter_1_t6D65E8305E8A65AA4939559CBC191F5C2238F74B Task_1_GetAwaiter_m88AFED53B032F7EDDB6F9746699970B9FFFC992C (Task_1_t95921EB64E237ACD28589D64B693C652268F225E* __this, const RuntimeMethod* method)
{
	return ((  TaskAwaiter_1_t6D65E8305E8A65AA4939559CBC191F5C2238F74B (*) (Task_1_t95921EB64E237ACD28589D64B693C652268F225E*, const RuntimeMethod*))Task_1_GetAwaiter_mD80ED263BF3F1F8DBDBD177BA3401A0AAAFA38E3_gshared)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<UnityEngine.Texture2D>::get_IsCompleted()
inline bool TaskAwaiter_1_get_IsCompleted_m77FF413EE49A5859C0BC111104448D64F3C01911 (TaskAwaiter_1_t6D65E8305E8A65AA4939559CBC191F5C2238F74B* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_t6D65E8305E8A65AA4939559CBC191F5C2238F74B*, const RuntimeMethod*))TaskAwaiter_1_get_IsCompleted_mEEBB09E26F4165A0F864D92E1890CFCD2C8CFD54_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<UnityEngine.Texture2D>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<UnityEngine.Texture2D>,NativeGallery/<GetVideoThumbnailAsync>d__70>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t6D65E8305E8A65AA4939559CBC191F5C2238F74B_TisU3CGetVideoThumbnailAsyncU3Ed__70_tD8ECB30B418EDA30010B6ACFFD3C1F8BE2BA7060_mBAB0B46E65418BA50DC13CB1A80075AEF6944C11 (AsyncTaskMethodBuilder_1_t05B41371EF0E362ABCB54C56063FAA1E00C69A8F* __this, TaskAwaiter_1_t6D65E8305E8A65AA4939559CBC191F5C2238F74B* ___0_awaiter, U3CGetVideoThumbnailAsyncU3Ed__70_tD8ECB30B418EDA30010B6ACFFD3C1F8BE2BA7060* ___1_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t05B41371EF0E362ABCB54C56063FAA1E00C69A8F*, TaskAwaiter_1_t6D65E8305E8A65AA4939559CBC191F5C2238F74B*, U3CGetVideoThumbnailAsyncU3Ed__70_tD8ECB30B418EDA30010B6ACFFD3C1F8BE2BA7060*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CGetVideoThumbnailAsyncU3Ed__70_tD8ECB30B418EDA30010B6ACFFD3C1F8BE2BA7060_mD6E14A8F4491965E1C3764ACC9A7CD8CF1EDD9B9_gshared)(__this, ___0_awaiter, ___1_stateMachine, method);
}
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<UnityEngine.Texture2D>::GetResult()
inline Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* TaskAwaiter_1_GetResult_mE4B8867B0D8DAA1317AD64FE09FBD26E825A654C (TaskAwaiter_1_t6D65E8305E8A65AA4939559CBC191F5C2238F74B* __this, const RuntimeMethod* method)
{
	return ((  Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* (*) (TaskAwaiter_1_t6D65E8305E8A65AA4939559CBC191F5C2238F74B*, const RuntimeMethod*))TaskAwaiter_1_GetResult_mA4A8A1F43A456B40DDA251D00026C60919AED85B_gshared)(__this, method);
}
// System.Void NativeGallery/<GetVideoThumbnailAsync>d__70::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetVideoThumbnailAsyncU3Ed__70_MoveNext_mCA0E0A5FD73D368A6A45CA302A8C77C9E2B6E11D (U3CGetVideoThumbnailAsyncU3Ed__70_tD8ECB30B418EDA30010B6ACFFD3C1F8BE2BA7060* __this, const RuntimeMethod* method) ;
// System.Void NativeGallery/<GetVideoThumbnailAsync>d__70::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetVideoThumbnailAsyncU3Ed__70_SetStateMachine_m700D6B8BC652C0BC9A140570947B00200C1EA352 (U3CGetVideoThumbnailAsyncU3Ed__70_tD8ECB30B418EDA30010B6ACFFD3C1F8BE2BA7060* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<NativeGalleryNamespace.NGMediaReceiveCallbackiOS>()
inline NGMediaReceiveCallbackiOS_tD90DF712E9D1B5AE35D625194DB2E09EABAD0280* GameObject_AddComponent_TisNGMediaReceiveCallbackiOS_tD90DF712E9D1B5AE35D625194DB2E09EABAD0280_m5E174F21F5B691FDA1720B5AF8D4C1866F2B1547 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  NGMediaReceiveCallbackiOS_tD90DF712E9D1B5AE35D625194DB2E09EABAD0280* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_target, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_realtimeSinceStartup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_realtimeSinceStartup_m73B3CB73175D79A44333D59BB70F9EDE55EC9510 (const RuntimeMethod* method) ;
// System.Void NativeGalleryNamespace.NGMediaReceiveCallbackiOS::set_IsBusy(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NGMediaReceiveCallbackiOS_set_IsBusy_mCAED428338143B723D506CCB819AE1A2B10D1452_inline (bool ___0_value, const RuntimeMethod* method) ;
// System.Int32 NativeGalleryNamespace.NGMediaReceiveCallbackiOS::_NativeGallery_IsMediaPickerBusy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NGMediaReceiveCallbackiOS__NativeGallery_IsMediaPickerBusy_mE7055F9A1C42F9AE65B5899035AD5752B84F4FA8 (const RuntimeMethod* method) ;
// System.String[] NativeGalleryNamespace.NGMediaReceiveCallbackiOS::SplitPaths(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* NGMediaReceiveCallbackiOS_SplitPaths_mCE4253E500919FECD0EB9B8ACA40F66305247E2B (NGMediaReceiveCallbackiOS_tD90DF712E9D1B5AE35D625194DB2E09EABAD0280* __this, String_t* ___0_paths, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<NativeGalleryNamespace.NGMediaSaveCallbackiOS>()
inline NGMediaSaveCallbackiOS_t31F72978BB8FB757F7580EABA2D1EDFEAE2E87B9* GameObject_AddComponent_TisNGMediaSaveCallbackiOS_t31F72978BB8FB757F7580EABA2D1EDFEAE2E87B9_mFDB8D8B0F5D4B621A2434FDD88597D027AA91F23 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  NGMediaSaveCallbackiOS_t31F72978BB8FB757F7580EABA2D1EDFEAE2E87B9* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// T UnityEngine.GameObject::AddComponent<NativeGalleryNamespace.NGPermissionCallbackiOS>()
inline NGPermissionCallbackiOS_t966C11FC5C548BAB341244C5EB5AC30D800DA565* GameObject_AddComponent_TisNGPermissionCallbackiOS_t966C11FC5C548BAB341244C5EB5AC30D800DA565_mC93D2316465EF7CE745199E63FF2479A6A74ABD4 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  NGPermissionCallbackiOS_t966C11FC5C548BAB341244C5EB5AC30D800DA565* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Int32 System.Int32::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_Parse_m273CA1A9C7717C99641291A95C543711C0202AF0 (String_t* ___0_s, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C int32_t DEFAULT_CALL _NativeGallery_CheckPermission(int32_t, int32_t);
IL2CPP_EXTERN_C int32_t DEFAULT_CALL _NativeGallery_RequestPermission(int32_t, int32_t, int32_t);
IL2CPP_EXTERN_C void DEFAULT_CALL _NativeGallery_ShowLimitedLibraryPicker();
IL2CPP_EXTERN_C int32_t DEFAULT_CALL _NativeGallery_CanOpenSettings();
IL2CPP_EXTERN_C void DEFAULT_CALL _NativeGallery_OpenSettings();
IL2CPP_EXTERN_C int32_t DEFAULT_CALL _NativeGallery_CanPickMultipleMedia();
IL2CPP_EXTERN_C int32_t DEFAULT_CALL _NativeGallery_GetMediaTypeFromExtension(char*);
IL2CPP_EXTERN_C void DEFAULT_CALL _NativeGallery_ImageWriteToAlbum(char*, char*, int32_t);
IL2CPP_EXTERN_C void DEFAULT_CALL _NativeGallery_VideoWriteToAlbum(char*, char*, int32_t);
IL2CPP_EXTERN_C void DEFAULT_CALL _NativeGallery_PickMedia(char*, int32_t, int32_t, int32_t);
IL2CPP_EXTERN_C char* DEFAULT_CALL _NativeGallery_GetImageProperties(char*);
IL2CPP_EXTERN_C char* DEFAULT_CALL _NativeGallery_GetVideoProperties(char*);
IL2CPP_EXTERN_C char* DEFAULT_CALL _NativeGallery_GetVideoThumbnail(char*, char*, int32_t, double);
IL2CPP_EXTERN_C char* DEFAULT_CALL _NativeGallery_LoadImageAtPath(char*, char*, int32_t);
IL2CPP_EXTERN_C int32_t DEFAULT_CALL _NativeGallery_IsMediaPickerBusy();
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
// System.Int32 NativeGallery::_NativeGallery_CheckPermission(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery__NativeGallery_CheckPermission_m8F24C444BE681983ED5B4F90B1E48EFDA53771BE (int32_t ___0_readPermission, int32_t ___1_permissionFreeMode, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t, int32_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(_NativeGallery_CheckPermission)(___0_readPermission, ___1_permissionFreeMode);

	return returnValue;
}
// System.Int32 NativeGallery::_NativeGallery_RequestPermission(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery__NativeGallery_RequestPermission_mB1FD15B2DE256B8D6729A59D1924D0ECBF5E650A (int32_t ___0_readPermission, int32_t ___1_permissionFreeMode, int32_t ___2_asyncMode, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t, int32_t, int32_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(_NativeGallery_RequestPermission)(___0_readPermission, ___1_permissionFreeMode, ___2_asyncMode);

	return returnValue;
}
// System.Void NativeGallery::_NativeGallery_ShowLimitedLibraryPicker()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeGallery__NativeGallery_ShowLimitedLibraryPicker_mDDD75C25681DE5A64D5DA209EE6FE598E06CBC53 (const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_NativeGallery_ShowLimitedLibraryPicker)();

}
// System.Int32 NativeGallery::_NativeGallery_CanOpenSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery__NativeGallery_CanOpenSettings_m7FBFCF2BACD869F08492AA9E7F9A3FF7A7802BEF (const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(_NativeGallery_CanOpenSettings)();

	return returnValue;
}
// System.Void NativeGallery::_NativeGallery_OpenSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeGallery__NativeGallery_OpenSettings_m40F43B7E9C7F141C5BDAC5B8FCD1600A20A7B280 (const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_NativeGallery_OpenSettings)();

}
// System.Int32 NativeGallery::_NativeGallery_CanPickMultipleMedia()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery__NativeGallery_CanPickMultipleMedia_m6BC29185A573FCDEE17DF2796BDA64BDB383F6B4 (const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(_NativeGallery_CanPickMultipleMedia)();

	return returnValue;
}
// System.Int32 NativeGallery::_NativeGallery_GetMediaTypeFromExtension(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery__NativeGallery_GetMediaTypeFromExtension_m7F12FB0D63E6C746D2E68A5B1D720EB134E43028 (String_t* ___0_extension, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter '___0_extension' to native representation
	char* ____0_extension_marshaled = NULL;
	____0_extension_marshaled = il2cpp_codegen_marshal_string(___0_extension);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(_NativeGallery_GetMediaTypeFromExtension)(____0_extension_marshaled);

	// Marshaling cleanup of parameter '___0_extension' native representation
	il2cpp_codegen_marshal_free(____0_extension_marshaled);
	____0_extension_marshaled = NULL;

	return returnValue;
}
// System.Void NativeGallery::_NativeGallery_ImageWriteToAlbum(System.String,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeGallery__NativeGallery_ImageWriteToAlbum_m70C256937DE0CBF5527D6ACE107176FF21298F90 (String_t* ___0_path, String_t* ___1_album, int32_t ___2_permissionFreeMode, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, char*, int32_t);

	// Marshaling of parameter '___0_path' to native representation
	char* ____0_path_marshaled = NULL;
	____0_path_marshaled = il2cpp_codegen_marshal_string(___0_path);

	// Marshaling of parameter '___1_album' to native representation
	char* ____1_album_marshaled = NULL;
	____1_album_marshaled = il2cpp_codegen_marshal_string(___1_album);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_NativeGallery_ImageWriteToAlbum)(____0_path_marshaled, ____1_album_marshaled, ___2_permissionFreeMode);

	// Marshaling cleanup of parameter '___0_path' native representation
	il2cpp_codegen_marshal_free(____0_path_marshaled);
	____0_path_marshaled = NULL;

	// Marshaling cleanup of parameter '___1_album' native representation
	il2cpp_codegen_marshal_free(____1_album_marshaled);
	____1_album_marshaled = NULL;

}
// System.Void NativeGallery::_NativeGallery_VideoWriteToAlbum(System.String,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeGallery__NativeGallery_VideoWriteToAlbum_mB5BCA8550DB8EC4054454DECCE2A8D211662EFBD (String_t* ___0_path, String_t* ___1_album, int32_t ___2_permissionFreeMode, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, char*, int32_t);

	// Marshaling of parameter '___0_path' to native representation
	char* ____0_path_marshaled = NULL;
	____0_path_marshaled = il2cpp_codegen_marshal_string(___0_path);

	// Marshaling of parameter '___1_album' to native representation
	char* ____1_album_marshaled = NULL;
	____1_album_marshaled = il2cpp_codegen_marshal_string(___1_album);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_NativeGallery_VideoWriteToAlbum)(____0_path_marshaled, ____1_album_marshaled, ___2_permissionFreeMode);

	// Marshaling cleanup of parameter '___0_path' native representation
	il2cpp_codegen_marshal_free(____0_path_marshaled);
	____0_path_marshaled = NULL;

	// Marshaling cleanup of parameter '___1_album' native representation
	il2cpp_codegen_marshal_free(____1_album_marshaled);
	____1_album_marshaled = NULL;

}
// System.Void NativeGallery::_NativeGallery_PickMedia(System.String,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeGallery__NativeGallery_PickMedia_m98B3BC86CBFDA5E35959B10DF6F52AEE1FE185DC (String_t* ___0_mediaSavePath, int32_t ___1_mediaType, int32_t ___2_permissionFreeMode, int32_t ___3_selectionLimit, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, int32_t, int32_t, int32_t);

	// Marshaling of parameter '___0_mediaSavePath' to native representation
	char* ____0_mediaSavePath_marshaled = NULL;
	____0_mediaSavePath_marshaled = il2cpp_codegen_marshal_string(___0_mediaSavePath);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_NativeGallery_PickMedia)(____0_mediaSavePath_marshaled, ___1_mediaType, ___2_permissionFreeMode, ___3_selectionLimit);

	// Marshaling cleanup of parameter '___0_mediaSavePath' native representation
	il2cpp_codegen_marshal_free(____0_mediaSavePath_marshaled);
	____0_mediaSavePath_marshaled = NULL;

}
// System.String NativeGallery::_NativeGallery_GetImageProperties(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NativeGallery__NativeGallery_GetImageProperties_mD2BBA09FAEB28B07C78B81C3A0AD3159B631AB52 (String_t* ___0_path, const RuntimeMethod* method) 
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter '___0_path' to native representation
	char* ____0_path_marshaled = NULL;
	____0_path_marshaled = il2cpp_codegen_marshal_string(___0_path);

	// Native function invocation
	char* returnValue = reinterpret_cast<PInvokeFunc>(_NativeGallery_GetImageProperties)(____0_path_marshaled);

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	// Marshaling cleanup of parameter '___0_path' native representation
	il2cpp_codegen_marshal_free(____0_path_marshaled);
	____0_path_marshaled = NULL;

	return _returnValue_unmarshaled;
}
// System.String NativeGallery::_NativeGallery_GetVideoProperties(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NativeGallery__NativeGallery_GetVideoProperties_mB575DF63954F28F125784B45734E8124CB2B050B (String_t* ___0_path, const RuntimeMethod* method) 
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter '___0_path' to native representation
	char* ____0_path_marshaled = NULL;
	____0_path_marshaled = il2cpp_codegen_marshal_string(___0_path);

	// Native function invocation
	char* returnValue = reinterpret_cast<PInvokeFunc>(_NativeGallery_GetVideoProperties)(____0_path_marshaled);

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	// Marshaling cleanup of parameter '___0_path' native representation
	il2cpp_codegen_marshal_free(____0_path_marshaled);
	____0_path_marshaled = NULL;

	return _returnValue_unmarshaled;
}
// System.String NativeGallery::_NativeGallery_GetVideoThumbnail(System.String,System.String,System.Int32,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NativeGallery__NativeGallery_GetVideoThumbnail_m83B768DF2FA15147F6938AD36A29DE5ED18C0707 (String_t* ___0_path, String_t* ___1_thumbnailSavePath, int32_t ___2_maxSize, double ___3_captureTimeInSeconds, const RuntimeMethod* method) 
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) (char*, char*, int32_t, double);

	// Marshaling of parameter '___0_path' to native representation
	char* ____0_path_marshaled = NULL;
	____0_path_marshaled = il2cpp_codegen_marshal_string(___0_path);

	// Marshaling of parameter '___1_thumbnailSavePath' to native representation
	char* ____1_thumbnailSavePath_marshaled = NULL;
	____1_thumbnailSavePath_marshaled = il2cpp_codegen_marshal_string(___1_thumbnailSavePath);

	// Native function invocation
	char* returnValue = reinterpret_cast<PInvokeFunc>(_NativeGallery_GetVideoThumbnail)(____0_path_marshaled, ____1_thumbnailSavePath_marshaled, ___2_maxSize, ___3_captureTimeInSeconds);

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	// Marshaling cleanup of parameter '___0_path' native representation
	il2cpp_codegen_marshal_free(____0_path_marshaled);
	____0_path_marshaled = NULL;

	// Marshaling cleanup of parameter '___1_thumbnailSavePath' native representation
	il2cpp_codegen_marshal_free(____1_thumbnailSavePath_marshaled);
	____1_thumbnailSavePath_marshaled = NULL;

	return _returnValue_unmarshaled;
}
// System.String NativeGallery::_NativeGallery_LoadImageAtPath(System.String,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NativeGallery__NativeGallery_LoadImageAtPath_m307F352849636A1E1D1E46202B8F5A3EFB5F1744 (String_t* ___0_path, String_t* ___1_temporaryFilePath, int32_t ___2_maxSize, const RuntimeMethod* method) 
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) (char*, char*, int32_t);

	// Marshaling of parameter '___0_path' to native representation
	char* ____0_path_marshaled = NULL;
	____0_path_marshaled = il2cpp_codegen_marshal_string(___0_path);

	// Marshaling of parameter '___1_temporaryFilePath' to native representation
	char* ____1_temporaryFilePath_marshaled = NULL;
	____1_temporaryFilePath_marshaled = il2cpp_codegen_marshal_string(___1_temporaryFilePath);

	// Native function invocation
	char* returnValue = reinterpret_cast<PInvokeFunc>(_NativeGallery_LoadImageAtPath)(____0_path_marshaled, ____1_temporaryFilePath_marshaled, ___2_maxSize);

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	// Marshaling cleanup of parameter '___0_path' native representation
	il2cpp_codegen_marshal_free(____0_path_marshaled);
	____0_path_marshaled = NULL;

	// Marshaling cleanup of parameter '___1_temporaryFilePath' native representation
	il2cpp_codegen_marshal_free(____1_temporaryFilePath_marshaled);
	____1_temporaryFilePath_marshaled = NULL;

	return _returnValue_unmarshaled;
}
// System.String NativeGallery::get_TemporaryImagePath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NativeGallery_get_TemporaryImagePath_m05418FC4CC85508CDAE30BEDCC344C85884E1BF8 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeGallery_t5E55EACA16F196F4214E0A3AB3A39B5CF555EB0B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1256BD059A8D156C0578EF505C83E5862F0EFCD2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if( m_temporaryImagePath == null )
		String_t* L_0 = ((NativeGallery_t5E55EACA16F196F4214E0A3AB3A39B5CF555EB0B_StaticFields*)il2cpp_codegen_static_fields_for(NativeGallery_t5E55EACA16F196F4214E0A3AB3A39B5CF555EB0B_il2cpp_TypeInfo_var))->___m_temporaryImagePath_0;
		if (L_0)
		{
			goto IL_0026;
		}
	}
	{
		// m_temporaryImagePath = Path.Combine( Application.temporaryCachePath, "tmpImg" );
		String_t* L_1;
		L_1 = Application_get_temporaryCachePath_mE4483A939988E69570C19F8B31AB9FB17B0FD97D(NULL);
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = Path_Combine_m1ADAC05CDA2D1D61B172DF65A81E86592696BEAE(L_1, _stringLiteral1256BD059A8D156C0578EF505C83E5862F0EFCD2, NULL);
		((NativeGallery_t5E55EACA16F196F4214E0A3AB3A39B5CF555EB0B_StaticFields*)il2cpp_codegen_static_fields_for(NativeGallery_t5E55EACA16F196F4214E0A3AB3A39B5CF555EB0B_il2cpp_TypeInfo_var))->___m_temporaryImagePath_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((NativeGallery_t5E55EACA16F196F4214E0A3AB3A39B5CF555EB0B_StaticFields*)il2cpp_codegen_static_fields_for(NativeGallery_t5E55EACA16F196F4214E0A3AB3A39B5CF555EB0B_il2cpp_TypeInfo_var))->___m_temporaryImagePath_0), (void*)L_2);
		// Directory.CreateDirectory( Application.temporaryCachePath );
		String_t* L_3;
		L_3 = Application_get_temporaryCachePath_mE4483A939988E69570C19F8B31AB9FB17B0FD97D(NULL);
		DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* L_4;
		L_4 = Directory_CreateDirectory_m16EC5CE8561A997C6635E06DC24C77590F29D94F(L_3, NULL);
	}

IL_0026:
	{
		// return m_temporaryImagePath;
		String_t* L_5 = ((NativeGallery_t5E55EACA16F196F4214E0A3AB3A39B5CF555EB0B_StaticFields*)il2cpp_codegen_static_fields_for(NativeGallery_t5E55EACA16F196F4214E0A3AB3A39B5CF555EB0B_il2cpp_TypeInfo_var))->___m_temporaryImagePath_0;
		return L_5;
	}
}
// System.String NativeGallery::get_SelectedMediaPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NativeGallery_get_SelectedMediaPath_mBB0C7C91D1B7ED7D8D2F457B86432E2D7AA7A19F (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeGallery_t5E55EACA16F196F4214E0A3AB3A39B5CF555EB0B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF0174D5142A8DAD18DDD4423E7AFDBBC3687A8B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if( m_selectedMediaPath == null )
		String_t* L_0 = ((NativeGallery_t5E55EACA16F196F4214E0A3AB3A39B5CF555EB0B_StaticFields*)il2cpp_codegen_static_fields_for(NativeGallery_t5E55EACA16F196F4214E0A3AB3A39B5CF555EB0B_il2cpp_TypeInfo_var))->___m_selectedMediaPath_1;
		if (L_0)
		{
			goto IL_0026;
		}
	}
	{
		// m_selectedMediaPath = Path.Combine( Application.temporaryCachePath, "pickedMedia" );
		String_t* L_1;
		L_1 = Application_get_temporaryCachePath_mE4483A939988E69570C19F8B31AB9FB17B0FD97D(NULL);
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = Path_Combine_m1ADAC05CDA2D1D61B172DF65A81E86592696BEAE(L_1, _stringLiteralAF0174D5142A8DAD18DDD4423E7AFDBBC3687A8B, NULL);
		((NativeGallery_t5E55EACA16F196F4214E0A3AB3A39B5CF555EB0B_StaticFields*)il2cpp_codegen_static_fields_for(NativeGallery_t5E55EACA16F196F4214E0A3AB3A39B5CF555EB0B_il2cpp_TypeInfo_var))->___m_selectedMediaPath_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((NativeGallery_t5E55EACA16F196F4214E0A3AB3A39B5CF555EB0B_StaticFields*)il2cpp_codegen_static_fields_for(NativeGallery_t5E55EACA16F196F4214E0A3AB3A39B5CF555EB0B_il2cpp_TypeInfo_var))->___m_selectedMediaPath_1), (void*)L_2);
		// Directory.CreateDirectory( Application.temporaryCachePath );
		String_t* L_3;
		L_3 = Application_get_temporaryCachePath_mE4483A939988E69570C19F8B31AB9FB17B0FD97D(NULL);
		DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* L_4;
		L_4 = Directory_CreateDirectory_m16EC5CE8561A997C6635E06DC24C77590F29D94F(L_3, NULL);
	}

IL_0026:
	{
		// return m_selectedMediaPath;
		String_t* L_5 = ((NativeGallery_t5E55EACA16F196F4214E0A3AB3A39B5CF555EB0B_StaticFields*)il2cpp_codegen_static_fields_for(NativeGallery_t5E55EACA16F196F4214E0A3AB3A39B5CF555EB0B_il2cpp_TypeInfo_var))->___m_selectedMediaPath_1;
		return L_5;
	}
}
// NativeGallery/Permission NativeGallery::CheckPermission(NativeGallery/PermissionType,NativeGallery/MediaType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_CheckPermission_m11F20257C849D8E3E02D7B8095A672825AADAA84 (int32_t ___0_permissionType, int32_t ___1_mediaTypes, const RuntimeMethod* method) 
{
	int32_t G_B3_0 = 0;
	{
		// return ProcessPermission( (Permission) _NativeGallery_CheckPermission( permissionType == PermissionType.Read ? 1 : 0, PermissionFreeMode ? 1 : 0 ) );
		int32_t L_0 = ___0_permissionType;
		if (!L_0)
		{
			goto IL_0006;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_0007;
	}

IL_0006:
	{
		G_B3_0 = 1;
	}

IL_0007:
	{
		int32_t L_1;
		L_1 = NativeGallery__NativeGallery_CheckPermission_m8F24C444BE681983ED5B4F90B1E48EFDA53771BE(G_B3_0, 1, NULL);
		int32_t L_2;
		L_2 = NativeGallery_ProcessPermission_m3F58F5B053D477F86A94386CECBE2B138AA407F2(L_1, NULL);
		return L_2;
	}
}
// NativeGallery/Permission NativeGallery::RequestPermission(NativeGallery/PermissionType,NativeGallery/MediaType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_RequestPermission_mB2F20A17757755EB1B2C3F171DCD5944A4CF1706 (int32_t ___0_permissionType, int32_t ___1_mediaTypes, const RuntimeMethod* method) 
{
	int32_t G_B5_0 = 0;
	{
		// if( CheckPermission( permissionType, mediaTypes ) == Permission.Granted )
		int32_t L_0 = ___0_permissionType;
		int32_t L_1 = ___1_mediaTypes;
		int32_t L_2;
		L_2 = NativeGallery_CheckPermission_m11F20257C849D8E3E02D7B8095A672825AADAA84(L_0, L_1, NULL);
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_000c;
		}
	}
	{
		// return Permission.Granted;
		return (int32_t)(1);
	}

IL_000c:
	{
		// return ProcessPermission( (Permission) _NativeGallery_RequestPermission( permissionType == PermissionType.Read ? 1 : 0, PermissionFreeMode ? 1 : 0, 0 ) );
		int32_t L_3 = ___0_permissionType;
		if (!L_3)
		{
			goto IL_0012;
		}
	}
	{
		G_B5_0 = 0;
		goto IL_0013;
	}

IL_0012:
	{
		G_B5_0 = 1;
	}

IL_0013:
	{
		int32_t L_4;
		L_4 = NativeGallery__NativeGallery_RequestPermission_mB1FD15B2DE256B8D6729A59D1924D0ECBF5E650A(G_B5_0, 1, 0, NULL);
		int32_t L_5;
		L_5 = NativeGallery_ProcessPermission_m3F58F5B053D477F86A94386CECBE2B138AA407F2(L_4, NULL);
		return L_5;
	}
}
// System.Void NativeGallery::RequestPermissionAsync(NativeGallery/PermissionCallback,NativeGallery/PermissionType,NativeGallery/MediaType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeGallery_RequestPermissionAsync_m8125D5CD784CEA0E035B81BC769C573AE5BDE800 (PermissionCallback_t43E69EC9D59F3ADAC411FBE19A499BCB840180D4* ___0_callback, int32_t ___1_permissionType, int32_t ___2_mediaTypes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PermissionCallback_t43E69EC9D59F3ADAC411FBE19A499BCB840180D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass33_0_U3CRequestPermissionAsyncU3Eb__0_m17B2413EE4C5C1964F01640BDB1B05175C27D444_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass33_0_t232C3A72571561AE5A8AD8E34F2BD240999EE360_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B3_0 = 0;
	{
		U3CU3Ec__DisplayClass33_0_t232C3A72571561AE5A8AD8E34F2BD240999EE360* L_0 = (U3CU3Ec__DisplayClass33_0_t232C3A72571561AE5A8AD8E34F2BD240999EE360*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass33_0_t232C3A72571561AE5A8AD8E34F2BD240999EE360_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass33_0__ctor_m9E7AB845CD89107E6D3BC0E9F4F0852D3C5FF3C9(L_0, NULL);
		U3CU3Ec__DisplayClass33_0_t232C3A72571561AE5A8AD8E34F2BD240999EE360* L_1 = L_0;
		PermissionCallback_t43E69EC9D59F3ADAC411FBE19A499BCB840180D4* L_2 = ___0_callback;
		NullCheck(L_1);
		L_1->___callback_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___callback_0), (void*)L_2);
		// NGPermissionCallbackiOS.Initialize( ( result ) => callback( ProcessPermission( result ) ) );
		PermissionCallback_t43E69EC9D59F3ADAC411FBE19A499BCB840180D4* L_3 = (PermissionCallback_t43E69EC9D59F3ADAC411FBE19A499BCB840180D4*)il2cpp_codegen_object_new(PermissionCallback_t43E69EC9D59F3ADAC411FBE19A499BCB840180D4_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		PermissionCallback__ctor_mBD077D6A9E8984D7DF933B1BB0C704832503A8E2(L_3, L_1, (intptr_t)((void*)U3CU3Ec__DisplayClass33_0_U3CRequestPermissionAsyncU3Eb__0_m17B2413EE4C5C1964F01640BDB1B05175C27D444_RuntimeMethod_var), NULL);
		NGPermissionCallbackiOS_Initialize_m524E1B648EBBF449C62B026E9661BEECD01F98EC(L_3, NULL);
		// _NativeGallery_RequestPermission( permissionType == PermissionType.Read ? 1 : 0, PermissionFreeMode ? 1 : 0, 1 );
		int32_t L_4 = ___1_permissionType;
		if (!L_4)
		{
			goto IL_0022;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_0023;
	}

IL_0022:
	{
		G_B3_0 = 1;
	}

IL_0023:
	{
		int32_t L_5;
		L_5 = NativeGallery__NativeGallery_RequestPermission_mB1FD15B2DE256B8D6729A59D1924D0ECBF5E650A(G_B3_0, 1, 1, NULL);
		// }
		return;
	}
}
// System.Threading.Tasks.Task`1<NativeGallery/Permission> NativeGallery::RequestPermissionAsync(NativeGallery/PermissionType,NativeGallery/MediaType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t5C89128A5298F29B41DC7B2DA6CCB578F49EFBC8* NativeGallery_RequestPermissionAsync_m3A8EC71785D2A093DC9477FDADE0BF3E2A35E047 (int32_t ___0_permissionType, int32_t ___1_mediaTypes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PermissionCallback_t43E69EC9D59F3ADAC411FBE19A499BCB840180D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1__ctor_mE2CE066FBB5CD986B6EC9B8B287E263E3FE0E824_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_get_Task_m278F89B2C2B247D13AD0C344238EDDC7999402CA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_tA40684670E345C5786526437707F448A78DD4DC2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass34_0_U3CRequestPermissionAsyncU3Eb__0_mC0C631823789775F59071AC2DF83A1608EB2E7DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass34_0_t7CEBF1C5F25C154499ED0F3F3834C55E0EF7BD59_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec__DisplayClass34_0_t7CEBF1C5F25C154499ED0F3F3834C55E0EF7BD59* L_0 = (U3CU3Ec__DisplayClass34_0_t7CEBF1C5F25C154499ED0F3F3834C55E0EF7BD59*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass34_0_t7CEBF1C5F25C154499ED0F3F3834C55E0EF7BD59_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass34_0__ctor_mE59E28BA217AB598C7FF19F21CC8A85690F43100(L_0, NULL);
		// TaskCompletionSource<Permission> tcs = new TaskCompletionSource<Permission>();
		U3CU3Ec__DisplayClass34_0_t7CEBF1C5F25C154499ED0F3F3834C55E0EF7BD59* L_1 = L_0;
		TaskCompletionSource_1_tA40684670E345C5786526437707F448A78DD4DC2* L_2 = (TaskCompletionSource_1_tA40684670E345C5786526437707F448A78DD4DC2*)il2cpp_codegen_object_new(TaskCompletionSource_1_tA40684670E345C5786526437707F448A78DD4DC2_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		TaskCompletionSource_1__ctor_mE2CE066FBB5CD986B6EC9B8B287E263E3FE0E824(L_2, TaskCompletionSource_1__ctor_mE2CE066FBB5CD986B6EC9B8B287E263E3FE0E824_RuntimeMethod_var);
		NullCheck(L_1);
		L_1->___tcs_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___tcs_0), (void*)L_2);
		// RequestPermissionAsync( ( permission ) => tcs.SetResult( permission ), permissionType, mediaTypes );
		U3CU3Ec__DisplayClass34_0_t7CEBF1C5F25C154499ED0F3F3834C55E0EF7BD59* L_3 = L_1;
		PermissionCallback_t43E69EC9D59F3ADAC411FBE19A499BCB840180D4* L_4 = (PermissionCallback_t43E69EC9D59F3ADAC411FBE19A499BCB840180D4*)il2cpp_codegen_object_new(PermissionCallback_t43E69EC9D59F3ADAC411FBE19A499BCB840180D4_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		PermissionCallback__ctor_mBD077D6A9E8984D7DF933B1BB0C704832503A8E2(L_4, L_3, (intptr_t)((void*)U3CU3Ec__DisplayClass34_0_U3CRequestPermissionAsyncU3Eb__0_mC0C631823789775F59071AC2DF83A1608EB2E7DD_RuntimeMethod_var), NULL);
		int32_t L_5 = ___0_permissionType;
		int32_t L_6 = ___1_mediaTypes;
		NativeGallery_RequestPermissionAsync_m8125D5CD784CEA0E035B81BC769C573AE5BDE800(L_4, L_5, L_6, NULL);
		// return tcs.Task;
		NullCheck(L_3);
		TaskCompletionSource_1_tA40684670E345C5786526437707F448A78DD4DC2* L_7 = L_3->___tcs_0;
		NullCheck(L_7);
		Task_1_t5C89128A5298F29B41DC7B2DA6CCB578F49EFBC8* L_8;
		L_8 = TaskCompletionSource_1_get_Task_m278F89B2C2B247D13AD0C344238EDDC7999402CA_inline(L_7, TaskCompletionSource_1_get_Task_m278F89B2C2B247D13AD0C344238EDDC7999402CA_RuntimeMethod_var);
		return L_8;
	}
}
// NativeGallery/Permission NativeGallery::ProcessPermission(NativeGallery/Permission)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_ProcessPermission_m3F58F5B053D477F86A94386CECBE2B138AA407F2 (int32_t ___0_permission, const RuntimeMethod* method) 
{
	{
		// return ( PermissionFreeMode && (int) permission == 3 ) ? Permission.Granted : permission;
		int32_t L_0 = ___0_permission;
		if ((((int32_t)L_0) == ((int32_t)3)))
		{
			goto IL_0006;
		}
	}
	{
		int32_t L_1 = ___0_permission;
		return L_1;
	}

IL_0006:
	{
		return (int32_t)(1);
	}
}
// System.Void NativeGallery::TryExtendLimitedAccessPermission()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeGallery_TryExtendLimitedAccessPermission_mDAC7C73A2003140F4BAEA45D337879E8D635A7CF (const RuntimeMethod* method) 
{
	{
		// if( IsMediaPickerBusy() )
		bool L_0;
		L_0 = NativeGallery_IsMediaPickerBusy_m08C8520C94ABF511EA6E7F48E63697CA7857BAAD(NULL);
		if (!L_0)
		{
			goto IL_0008;
		}
	}
	{
		// return;
		return;
	}

IL_0008:
	{
		// _NativeGallery_ShowLimitedLibraryPicker();
		NativeGallery__NativeGallery_ShowLimitedLibraryPicker_mDDD75C25681DE5A64D5DA209EE6FE598E06CBC53(NULL);
		// }
		return;
	}
}
// System.Boolean NativeGallery::CanOpenSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeGallery_CanOpenSettings_mB480A4B0E4AA86054713BA82021DBE8EF846CB2B (const RuntimeMethod* method) 
{
	{
		// return _NativeGallery_CanOpenSettings() == 1;
		int32_t L_0;
		L_0 = NativeGallery__NativeGallery_CanOpenSettings_m7FBFCF2BACD869F08492AA9E7F9A3FF7A7802BEF(NULL);
		return (bool)((((int32_t)L_0) == ((int32_t)1))? 1 : 0);
	}
}
// System.Void NativeGallery::OpenSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeGallery_OpenSettings_mC3C5C5092A5C8F1E25548FC6B5F0684753541A98 (const RuntimeMethod* method) 
{
	{
		// _NativeGallery_OpenSettings();
		NativeGallery__NativeGallery_OpenSettings_m40F43B7E9C7F141C5BDAC5B8FCD1600A20A7B280(NULL);
		// }
		return;
	}
}
// NativeGallery/Permission NativeGallery::SaveImageToGallery(System.Byte[],System.String,System.String,NativeGallery/MediaSaveCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_SaveImageToGallery_m2AF3D2C35694767051735B811A2DE73E48141A9C (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_mediaBytes, String_t* ___1_album, String_t* ___2_filename, MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D* ___3_callback, const RuntimeMethod* method) 
{
	{
		// return SaveToGallery( mediaBytes, album, filename, MediaType.Image, callback );
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_mediaBytes;
		String_t* L_1 = ___1_album;
		String_t* L_2 = ___2_filename;
		MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D* L_3 = ___3_callback;
		int32_t L_4;
		L_4 = NativeGallery_SaveToGallery_mAD9820FA0C518D117A499DC5D99BF99D240C4454(L_0, L_1, L_2, 1, L_3, NULL);
		return L_4;
	}
}
// NativeGallery/Permission NativeGallery::SaveImageToGallery(System.String,System.String,System.String,NativeGallery/MediaSaveCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_SaveImageToGallery_m00EE9B0042E36A283C925D51F1211B9F649DB746 (String_t* ___0_existingMediaPath, String_t* ___1_album, String_t* ___2_filename, MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D* ___3_callback, const RuntimeMethod* method) 
{
	{
		// return SaveToGallery( existingMediaPath, album, filename, MediaType.Image, callback );
		String_t* L_0 = ___0_existingMediaPath;
		String_t* L_1 = ___1_album;
		String_t* L_2 = ___2_filename;
		MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D* L_3 = ___3_callback;
		int32_t L_4;
		L_4 = NativeGallery_SaveToGallery_mC512FADA8F0312FA131B768E103068CD34B83240(L_0, L_1, L_2, 1, L_3, NULL);
		return L_4;
	}
}
// NativeGallery/Permission NativeGallery::SaveImageToGallery(UnityEngine.Texture2D,System.String,System.String,NativeGallery/MediaSaveCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_SaveImageToGallery_mF141267D9981DE0618B1A3BF29B96D1C8BF5D711 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___0_image, String_t* ___1_album, String_t* ___2_filename, MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D* ___3_callback, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral23DF9991B71463C240582D176E347E7E47AEFF5A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B9B40AAD718882F5C0B95FE844E4AA92BD49C42);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA15C898F015A9B0BC3268E8883CD03008A56DE26);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if( image == null )
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_0 = ___0_image;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// throw new ArgumentException( "Parameter 'image' is null!" );
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_2 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral15332598528DB5F9A0B9473BE7DCE0BB1F8DCAA7)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NativeGallery_SaveImageToGallery_mF141267D9981DE0618B1A3BF29B96D1C8BF5D711_RuntimeMethod_var)));
	}

IL_0014:
	{
		// if( filename.EndsWith( ".jpeg", StringComparison.OrdinalIgnoreCase ) || filename.EndsWith( ".jpg", StringComparison.OrdinalIgnoreCase ) )
		String_t* L_3 = ___2_filename;
		NullCheck(L_3);
		bool L_4;
		L_4 = String_EndsWith_m5E5D307CA6AEB7C08CE782B4693B19D07ADC9075(L_3, _stringLiteral4B9B40AAD718882F5C0B95FE844E4AA92BD49C42, 5, NULL);
		if (L_4)
		{
			goto IL_0030;
		}
	}
	{
		String_t* L_5 = ___2_filename;
		NullCheck(L_5);
		bool L_6;
		L_6 = String_EndsWith_m5E5D307CA6AEB7C08CE782B4693B19D07ADC9075(L_5, _stringLiteral23DF9991B71463C240582D176E347E7E47AEFF5A, 5, NULL);
		if (!L_6)
		{
			goto IL_0041;
		}
	}

IL_0030:
	{
		// return SaveToGallery( GetTextureBytes( image, true ), album, filename, MediaType.Image, callback );
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_7 = ___0_image;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8;
		L_8 = NativeGallery_GetTextureBytes_mB475FDFD6E1FBEAA043E1190CC5B4172EE3536EF(L_7, (bool)1, NULL);
		String_t* L_9 = ___1_album;
		String_t* L_10 = ___2_filename;
		MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D* L_11 = ___3_callback;
		int32_t L_12;
		L_12 = NativeGallery_SaveToGallery_mAD9820FA0C518D117A499DC5D99BF99D240C4454(L_8, L_9, L_10, 1, L_11, NULL);
		return L_12;
	}

IL_0041:
	{
		// else if( filename.EndsWith( ".png", StringComparison.OrdinalIgnoreCase ) )
		String_t* L_13 = ___2_filename;
		NullCheck(L_13);
		bool L_14;
		L_14 = String_EndsWith_m5E5D307CA6AEB7C08CE782B4693B19D07ADC9075(L_13, _stringLiteralA15C898F015A9B0BC3268E8883CD03008A56DE26, 5, NULL);
		if (!L_14)
		{
			goto IL_0060;
		}
	}
	{
		// return SaveToGallery( GetTextureBytes( image, false ), album, filename, MediaType.Image, callback );
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_15 = ___0_image;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16;
		L_16 = NativeGallery_GetTextureBytes_mB475FDFD6E1FBEAA043E1190CC5B4172EE3536EF(L_15, (bool)0, NULL);
		String_t* L_17 = ___1_album;
		String_t* L_18 = ___2_filename;
		MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D* L_19 = ___3_callback;
		int32_t L_20;
		L_20 = NativeGallery_SaveToGallery_mAD9820FA0C518D117A499DC5D99BF99D240C4454(L_16, L_17, L_18, 1, L_19, NULL);
		return L_20;
	}

IL_0060:
	{
		// return SaveToGallery( GetTextureBytes( image, false ), album, filename + ".png", MediaType.Image, callback );
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_21 = ___0_image;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22;
		L_22 = NativeGallery_GetTextureBytes_mB475FDFD6E1FBEAA043E1190CC5B4172EE3536EF(L_21, (bool)0, NULL);
		String_t* L_23 = ___1_album;
		String_t* L_24 = ___2_filename;
		String_t* L_25;
		L_25 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_24, _stringLiteralA15C898F015A9B0BC3268E8883CD03008A56DE26, NULL);
		MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D* L_26 = ___3_callback;
		int32_t L_27;
		L_27 = NativeGallery_SaveToGallery_mAD9820FA0C518D117A499DC5D99BF99D240C4454(L_22, L_23, L_25, 1, L_26, NULL);
		return L_27;
	}
}
// NativeGallery/Permission NativeGallery::SaveVideoToGallery(System.Byte[],System.String,System.String,NativeGallery/MediaSaveCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_SaveVideoToGallery_m6E8834DA9847B65AB58366743E32F828B24BEE05 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_mediaBytes, String_t* ___1_album, String_t* ___2_filename, MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D* ___3_callback, const RuntimeMethod* method) 
{
	{
		// return SaveToGallery( mediaBytes, album, filename, MediaType.Video, callback );
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_mediaBytes;
		String_t* L_1 = ___1_album;
		String_t* L_2 = ___2_filename;
		MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D* L_3 = ___3_callback;
		int32_t L_4;
		L_4 = NativeGallery_SaveToGallery_mAD9820FA0C518D117A499DC5D99BF99D240C4454(L_0, L_1, L_2, 2, L_3, NULL);
		return L_4;
	}
}
// NativeGallery/Permission NativeGallery::SaveVideoToGallery(System.String,System.String,System.String,NativeGallery/MediaSaveCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_SaveVideoToGallery_m170EBCAA3C3128904E6E6C5F0397BD6E040352F6 (String_t* ___0_existingMediaPath, String_t* ___1_album, String_t* ___2_filename, MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D* ___3_callback, const RuntimeMethod* method) 
{
	{
		// return SaveToGallery( existingMediaPath, album, filename, MediaType.Video, callback );
		String_t* L_0 = ___0_existingMediaPath;
		String_t* L_1 = ___1_album;
		String_t* L_2 = ___2_filename;
		MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D* L_3 = ___3_callback;
		int32_t L_4;
		L_4 = NativeGallery_SaveToGallery_mC512FADA8F0312FA131B768E103068CD34B83240(L_0, L_1, L_2, 2, L_3, NULL);
		return L_4;
	}
}
// NativeGallery/Permission NativeGallery::SaveAudioToGallery(System.Byte[],System.String,System.String,NativeGallery/MediaSaveCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_SaveAudioToGallery_m98B698674CCE8A1B9FB847E69A0AB20229C29416 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_mediaBytes, String_t* ___1_album, String_t* ___2_filename, MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D* ___3_callback, const RuntimeMethod* method) 
{
	{
		// return SaveToGallery( mediaBytes, album, filename, MediaType.Audio, callback );
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_mediaBytes;
		String_t* L_1 = ___1_album;
		String_t* L_2 = ___2_filename;
		MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D* L_3 = ___3_callback;
		int32_t L_4;
		L_4 = NativeGallery_SaveToGallery_mAD9820FA0C518D117A499DC5D99BF99D240C4454(L_0, L_1, L_2, 4, L_3, NULL);
		return L_4;
	}
}
// NativeGallery/Permission NativeGallery::SaveAudioToGallery(System.String,System.String,System.String,NativeGallery/MediaSaveCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_SaveAudioToGallery_m992C5F625CA1D657F05B415BE227A99E5C6B2A9F (String_t* ___0_existingMediaPath, String_t* ___1_album, String_t* ___2_filename, MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D* ___3_callback, const RuntimeMethod* method) 
{
	{
		// return SaveToGallery( existingMediaPath, album, filename, MediaType.Audio, callback );
		String_t* L_0 = ___0_existingMediaPath;
		String_t* L_1 = ___1_album;
		String_t* L_2 = ___2_filename;
		MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D* L_3 = ___3_callback;
		int32_t L_4;
		L_4 = NativeGallery_SaveToGallery_mC512FADA8F0312FA131B768E103068CD34B83240(L_0, L_1, L_2, 4, L_3, NULL);
		return L_4;
	}
}
// System.Boolean NativeGallery::CanSelectMultipleFilesFromGallery()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeGallery_CanSelectMultipleFilesFromGallery_m8B64B58699A6EEB502428C3444FBFEE702E63997 (const RuntimeMethod* method) 
{
	{
		// return _NativeGallery_CanPickMultipleMedia() == 1;
		int32_t L_0;
		L_0 = NativeGallery__NativeGallery_CanPickMultipleMedia_m6BC29185A573FCDEE17DF2796BDA64BDB383F6B4(NULL);
		return (bool)((((int32_t)L_0) == ((int32_t)1))? 1 : 0);
	}
}
// System.Boolean NativeGallery::CanSelectMultipleMediaTypesFromGallery()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeGallery_CanSelectMultipleMediaTypesFromGallery_m285088023ECD53F60EB6C0848FC2C74C6B93FAB2 (const RuntimeMethod* method) 
{
	{
		// return true;
		return (bool)1;
	}
}
// NativeGallery/Permission NativeGallery::GetImageFromGallery(NativeGallery/MediaPickCallback,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_GetImageFromGallery_m046CBE10C42FBF23C2C265CDA6BBE14534A1BE19 (MediaPickCallback_tC207F6F3EEE18F64B03E23D5C9FA8C79517A5EB6* ___0_callback, String_t* ___1_title, String_t* ___2_mime, const RuntimeMethod* method) 
{
	{
		// return GetMediaFromGallery( callback, MediaType.Image, mime, title );
		MediaPickCallback_tC207F6F3EEE18F64B03E23D5C9FA8C79517A5EB6* L_0 = ___0_callback;
		String_t* L_1 = ___2_mime;
		String_t* L_2 = ___1_title;
		int32_t L_3;
		L_3 = NativeGallery_GetMediaFromGallery_mE04A8BFF146401DA572B17485B97A88D11A509E1(L_0, 1, L_1, L_2, NULL);
		return L_3;
	}
}
// NativeGallery/Permission NativeGallery::GetVideoFromGallery(NativeGallery/MediaPickCallback,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_GetVideoFromGallery_mCB867EFB787DDF037FA7CE37116297E4D6BE6C93 (MediaPickCallback_tC207F6F3EEE18F64B03E23D5C9FA8C79517A5EB6* ___0_callback, String_t* ___1_title, String_t* ___2_mime, const RuntimeMethod* method) 
{
	{
		// return GetMediaFromGallery( callback, MediaType.Video, mime, title );
		MediaPickCallback_tC207F6F3EEE18F64B03E23D5C9FA8C79517A5EB6* L_0 = ___0_callback;
		String_t* L_1 = ___2_mime;
		String_t* L_2 = ___1_title;
		int32_t L_3;
		L_3 = NativeGallery_GetMediaFromGallery_mE04A8BFF146401DA572B17485B97A88D11A509E1(L_0, 2, L_1, L_2, NULL);
		return L_3;
	}
}
// NativeGallery/Permission NativeGallery::GetAudioFromGallery(NativeGallery/MediaPickCallback,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_GetAudioFromGallery_m52427EDF876CCD6CA3023D3701418FE889BDC361 (MediaPickCallback_tC207F6F3EEE18F64B03E23D5C9FA8C79517A5EB6* ___0_callback, String_t* ___1_title, String_t* ___2_mime, const RuntimeMethod* method) 
{
	{
		// return GetMediaFromGallery( callback, MediaType.Audio, mime, title );
		MediaPickCallback_tC207F6F3EEE18F64B03E23D5C9FA8C79517A5EB6* L_0 = ___0_callback;
		String_t* L_1 = ___2_mime;
		String_t* L_2 = ___1_title;
		int32_t L_3;
		L_3 = NativeGallery_GetMediaFromGallery_mE04A8BFF146401DA572B17485B97A88D11A509E1(L_0, 4, L_1, L_2, NULL);
		return L_3;
	}
}
// NativeGallery/Permission NativeGallery::GetMixedMediaFromGallery(NativeGallery/MediaPickCallback,NativeGallery/MediaType,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_GetMixedMediaFromGallery_m1D09D42F1CC363166CCD8B30DC51F2DADBFCED0F (MediaPickCallback_tC207F6F3EEE18F64B03E23D5C9FA8C79517A5EB6* ___0_callback, int32_t ___1_mediaTypes, String_t* ___2_title, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87811B8AF8DB46597B9C0A6BEAE14238FC7C81FF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return GetMediaFromGallery( callback, mediaTypes, "*/*", title );
		MediaPickCallback_tC207F6F3EEE18F64B03E23D5C9FA8C79517A5EB6* L_0 = ___0_callback;
		int32_t L_1 = ___1_mediaTypes;
		String_t* L_2 = ___2_title;
		int32_t L_3;
		L_3 = NativeGallery_GetMediaFromGallery_mE04A8BFF146401DA572B17485B97A88D11A509E1(L_0, L_1, _stringLiteral87811B8AF8DB46597B9C0A6BEAE14238FC7C81FF, L_2, NULL);
		return L_3;
	}
}
// NativeGallery/Permission NativeGallery::GetImagesFromGallery(NativeGallery/MediaPickMultipleCallback,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_GetImagesFromGallery_m0173A98B4E42DF72287C48216792CCBBA5D322BB (MediaPickMultipleCallback_t717A5D378751E2CACB53E6BA25386FF8DB41627B* ___0_callback, String_t* ___1_title, String_t* ___2_mime, const RuntimeMethod* method) 
{
	{
		// return GetMultipleMediaFromGallery( callback, MediaType.Image, mime, title );
		MediaPickMultipleCallback_t717A5D378751E2CACB53E6BA25386FF8DB41627B* L_0 = ___0_callback;
		String_t* L_1 = ___2_mime;
		String_t* L_2 = ___1_title;
		int32_t L_3;
		L_3 = NativeGallery_GetMultipleMediaFromGallery_mA60A18D80705ACD41BBACC5DB898F2BA758DF35C(L_0, 1, L_1, L_2, NULL);
		return L_3;
	}
}
// NativeGallery/Permission NativeGallery::GetVideosFromGallery(NativeGallery/MediaPickMultipleCallback,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_GetVideosFromGallery_m47FC2D6059067CE6538C69255B58EA4C20CC6D41 (MediaPickMultipleCallback_t717A5D378751E2CACB53E6BA25386FF8DB41627B* ___0_callback, String_t* ___1_title, String_t* ___2_mime, const RuntimeMethod* method) 
{
	{
		// return GetMultipleMediaFromGallery( callback, MediaType.Video, mime, title );
		MediaPickMultipleCallback_t717A5D378751E2CACB53E6BA25386FF8DB41627B* L_0 = ___0_callback;
		String_t* L_1 = ___2_mime;
		String_t* L_2 = ___1_title;
		int32_t L_3;
		L_3 = NativeGallery_GetMultipleMediaFromGallery_mA60A18D80705ACD41BBACC5DB898F2BA758DF35C(L_0, 2, L_1, L_2, NULL);
		return L_3;
	}
}
// NativeGallery/Permission NativeGallery::GetAudiosFromGallery(NativeGallery/MediaPickMultipleCallback,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_GetAudiosFromGallery_mCC57680119F1432F730E068E2AE173E01CE4AD6E (MediaPickMultipleCallback_t717A5D378751E2CACB53E6BA25386FF8DB41627B* ___0_callback, String_t* ___1_title, String_t* ___2_mime, const RuntimeMethod* method) 
{
	{
		// return GetMultipleMediaFromGallery( callback, MediaType.Audio, mime, title );
		MediaPickMultipleCallback_t717A5D378751E2CACB53E6BA25386FF8DB41627B* L_0 = ___0_callback;
		String_t* L_1 = ___2_mime;
		String_t* L_2 = ___1_title;
		int32_t L_3;
		L_3 = NativeGallery_GetMultipleMediaFromGallery_mA60A18D80705ACD41BBACC5DB898F2BA758DF35C(L_0, 4, L_1, L_2, NULL);
		return L_3;
	}
}
// NativeGallery/Permission NativeGallery::GetMixedMediasFromGallery(NativeGallery/MediaPickMultipleCallback,NativeGallery/MediaType,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_GetMixedMediasFromGallery_m5958D8BFBC304CA77FCEC85AE32F028B7862481C (MediaPickMultipleCallback_t717A5D378751E2CACB53E6BA25386FF8DB41627B* ___0_callback, int32_t ___1_mediaTypes, String_t* ___2_title, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87811B8AF8DB46597B9C0A6BEAE14238FC7C81FF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return GetMultipleMediaFromGallery( callback, mediaTypes, "*/*", title );
		MediaPickMultipleCallback_t717A5D378751E2CACB53E6BA25386FF8DB41627B* L_0 = ___0_callback;
		int32_t L_1 = ___1_mediaTypes;
		String_t* L_2 = ___2_title;
		int32_t L_3;
		L_3 = NativeGallery_GetMultipleMediaFromGallery_mA60A18D80705ACD41BBACC5DB898F2BA758DF35C(L_0, L_1, _stringLiteral87811B8AF8DB46597B9C0A6BEAE14238FC7C81FF, L_2, NULL);
		return L_3;
	}
}
// System.Boolean NativeGallery::IsMediaPickerBusy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeGallery_IsMediaPickerBusy_m08C8520C94ABF511EA6E7F48E63697CA7857BAAD (const RuntimeMethod* method) 
{
	{
		// return NGMediaReceiveCallbackiOS.IsBusy;
		bool L_0;
		L_0 = NGMediaReceiveCallbackiOS_get_IsBusy_mBD81A0B09C4B317F2CB308B31C7855AD835475E7_inline(NULL);
		return L_0;
	}
}
// NativeGallery/MediaType NativeGallery::GetMediaTypeOfFile(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_GetMediaTypeOfFile_m2B9362DA4D77A54A20CE8CBCAA066451592390CF (String_t* ___0_path, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// if( string.IsNullOrEmpty( path ) )
		String_t* L_0 = ___0_path;
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
		if (!L_1)
		{
			goto IL_000a;
		}
	}
	{
		// return (MediaType) 0;
		return (int32_t)(0);
	}

IL_000a:
	{
		// string extension = Path.GetExtension( path );
		String_t* L_2 = ___0_path;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_3;
		L_3 = Path_GetExtension_m6FEAA9E14451BFD210B9D1AEC2430C813F570FE5(L_2, NULL);
		V_0 = L_3;
		// if( string.IsNullOrEmpty( extension ) )
		String_t* L_4 = V_0;
		bool L_5;
		L_5 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_4, NULL);
		if (!L_5)
		{
			goto IL_001b;
		}
	}
	{
		// return (MediaType) 0;
		return (int32_t)(0);
	}

IL_001b:
	{
		// if( extension[0] == '.' )
		String_t* L_6 = V_0;
		NullCheck(L_6);
		Il2CppChar L_7;
		L_7 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_6, 0, NULL);
		if ((!(((uint32_t)L_7) == ((uint32_t)((int32_t)46)))))
		{
			goto IL_0039;
		}
	}
	{
		// if( extension.Length == 1 )
		String_t* L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_8, NULL);
		if ((!(((uint32_t)L_9) == ((uint32_t)1))))
		{
			goto IL_0031;
		}
	}
	{
		// return (MediaType) 0;
		return (int32_t)(0);
	}

IL_0031:
	{
		// extension = extension.Substring( 1 );
		String_t* L_10 = V_0;
		NullCheck(L_10);
		String_t* L_11;
		L_11 = String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472(L_10, 1, NULL);
		V_0 = L_11;
	}

IL_0039:
	{
		// return (MediaType) _NativeGallery_GetMediaTypeFromExtension( extension.ToLowerInvariant() );
		String_t* L_12 = V_0;
		NullCheck(L_12);
		String_t* L_13;
		L_13 = String_ToLowerInvariant_mBE32C93DE27C5353FEA3FA654FC1DDBE3D0EB0F2(L_12, NULL);
		int32_t L_14;
		L_14 = NativeGallery__NativeGallery_GetMediaTypeFromExtension_m7F12FB0D63E6C746D2E68A5B1D720EB134E43028(L_13, NULL);
		return (int32_t)(L_14);
	}
}
// NativeGallery/Permission NativeGallery::SaveToGallery(System.Byte[],System.String,System.String,NativeGallery/MediaType,NativeGallery/MediaSaveCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_SaveToGallery_mAD9820FA0C518D117A499DC5D99BF99D240C4454 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_mediaBytes, String_t* ___1_album, String_t* ___2_filename, int32_t ___3_mediaType, MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D* ___4_callback, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1DA1565418493517EA4A1928E378AD0548A223E7);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B13_0 = 0;
	int32_t G_B1_0 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	int32_t G_B5_0 = 0;
	int32_t G_B7_0 = 0;
	int32_t G_B9_0 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B10_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B11_0 = 0;
	{
		// Permission result = RequestPermission( PermissionType.Write, mediaType );
		int32_t L_0 = ___3_mediaType;
		int32_t L_1;
		L_1 = NativeGallery_RequestPermission_mB2F20A17757755EB1B2C3F171DCD5944A4CF1706(1, L_0, NULL);
		// if( result == Permission.Granted )
		int32_t L_2 = L_1;
		G_B1_0 = L_2;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			G_B13_0 = L_2;
			goto IL_0076;
		}
	}
	{
		// if( mediaBytes == null || mediaBytes.Length == 0 )
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___0_mediaBytes;
		G_B2_0 = G_B1_0;
		if (!L_3)
		{
			G_B3_0 = G_B1_0;
			goto IL_0012;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___0_mediaBytes;
		NullCheck(L_4);
		G_B3_0 = G_B2_0;
		if ((((RuntimeArray*)L_4)->max_length))
		{
			G_B4_0 = G_B2_0;
			goto IL_001d;
		}
	}

IL_0012:
	{
		// throw new ArgumentException( "Parameter 'mediaBytes' is null or empty!" );
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_5 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7BB4B5568C63748C896DED09B403F2FC4F274E91)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NativeGallery_SaveToGallery_mAD9820FA0C518D117A499DC5D99BF99D240C4454_RuntimeMethod_var)));
	}

IL_001d:
	{
		// if( album == null || album.Length == 0 )
		String_t* L_6 = ___1_album;
		G_B5_0 = G_B4_0;
		if (!L_6)
		{
			G_B6_0 = G_B4_0;
			goto IL_0028;
		}
	}
	{
		String_t* L_7 = ___1_album;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_7, NULL);
		G_B6_0 = G_B5_0;
		if (L_8)
		{
			G_B7_0 = G_B5_0;
			goto IL_0033;
		}
	}

IL_0028:
	{
		// throw new ArgumentException( "Parameter 'album' is null or empty!" );
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_9 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_9);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral30F8B1D027E92AF30A25606539C4A0E635BF0BBB)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NativeGallery_SaveToGallery_mAD9820FA0C518D117A499DC5D99BF99D240C4454_RuntimeMethod_var)));
	}

IL_0033:
	{
		// if( filename == null || filename.Length == 0 )
		String_t* L_10 = ___2_filename;
		G_B8_0 = G_B7_0;
		if (!L_10)
		{
			G_B9_0 = G_B7_0;
			goto IL_003e;
		}
	}
	{
		String_t* L_11 = ___2_filename;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_11, NULL);
		G_B9_0 = G_B8_0;
		if (L_12)
		{
			G_B10_0 = G_B8_0;
			goto IL_0049;
		}
	}

IL_003e:
	{
		// throw new ArgumentException( "Parameter 'filename' is null or empty!" );
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_13 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_13);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_13, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral30F7CAA3903ABC311FB9B0881B8937BE76A5526D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NativeGallery_SaveToGallery_mAD9820FA0C518D117A499DC5D99BF99D240C4454_RuntimeMethod_var)));
	}

IL_0049:
	{
		// if( string.IsNullOrEmpty( Path.GetExtension( filename ) ) )
		String_t* L_14 = ___2_filename;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_15;
		L_15 = Path_GetExtension_m6FEAA9E14451BFD210B9D1AEC2430C813F570FE5(L_14, NULL);
		bool L_16;
		L_16 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_15, NULL);
		G_B11_0 = G_B10_0;
		if (!L_16)
		{
			G_B12_0 = G_B10_0;
			goto IL_0060;
		}
	}
	{
		// Debug.LogWarning( "'filename' doesn't have an extension, this might result in unexpected behaviour!" );
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteral1DA1565418493517EA4A1928E378AD0548A223E7, NULL);
		G_B12_0 = G_B11_0;
	}

IL_0060:
	{
		// string path = GetTemporarySavePath( filename );
		String_t* L_17 = ___2_filename;
		String_t* L_18;
		L_18 = NativeGallery_GetTemporarySavePath_m2057630E0A0206CEEC5C908A37470E49A0D70E60(L_17, NULL);
		// File.WriteAllBytes( path, mediaBytes );
		String_t* L_19 = L_18;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = ___0_mediaBytes;
		File_WriteAllBytes_mC491031DA14AA9B591F62D6AD0181D090E081077(L_19, L_20, NULL);
		// SaveToGalleryInternal( path, album, mediaType, callback );
		String_t* L_21 = ___1_album;
		int32_t L_22 = ___3_mediaType;
		MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D* L_23 = ___4_callback;
		NativeGallery_SaveToGalleryInternal_m7E98DD903D33ED3D5E3036C256CE09CC0422359E(L_19, L_21, L_22, L_23, NULL);
		G_B13_0 = G_B12_0;
	}

IL_0076:
	{
		// return result;
		return G_B13_0;
	}
}
// NativeGallery/Permission NativeGallery::SaveToGallery(System.String,System.String,System.String,NativeGallery/MediaType,NativeGallery/MediaSaveCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_SaveToGallery_mC512FADA8F0312FA131B768E103068CD34B83240 (String_t* ___0_existingMediaPath, String_t* ___1_album, String_t* ___2_filename, int32_t ___3_mediaType, MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D* ___4_callback, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1DA1565418493517EA4A1928E378AD0548A223E7);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	int32_t G_B14_0 = 0;
	int32_t G_B1_0 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B5_0 = 0;
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B7_0 = 0;
	int32_t G_B9_0 = 0;
	int32_t G_B13_0 = 0;
	int32_t G_B10_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B11_0 = 0;
	{
		// Permission result = RequestPermission( PermissionType.Write, mediaType );
		int32_t L_0 = ___3_mediaType;
		int32_t L_1;
		L_1 = NativeGallery_RequestPermission_mB2F20A17757755EB1B2C3F171DCD5944A4CF1706(1, L_0, NULL);
		// if( result == Permission.Granted )
		int32_t L_2 = L_1;
		G_B1_0 = L_2;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			G_B14_0 = L_2;
			goto IL_009d;
		}
	}
	{
		// if( !File.Exists( existingMediaPath ) )
		String_t* L_3 = ___0_existingMediaPath;
		bool L_4;
		L_4 = File_Exists_m95E329ABBE3EAD6750FE1989BBA6884457136D4A(L_3, NULL);
		G_B2_0 = G_B1_0;
		if (L_4)
		{
			G_B3_0 = G_B1_0;
			goto IL_0027;
		}
	}
	{
		// throw new FileNotFoundException( "File not found at " + existingMediaPath );
		String_t* L_5 = ___0_existingMediaPath;
		String_t* L_6;
		L_6 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral491B4D9271839F0BD63211437BF7CEE5B2C6ADE9)), L_5, NULL);
		FileNotFoundException_t17F1B49AD996E4A60C87C7ADC9D3A25EB5808A9A* L_7 = (FileNotFoundException_t17F1B49AD996E4A60C87C7ADC9D3A25EB5808A9A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FileNotFoundException_t17F1B49AD996E4A60C87C7ADC9D3A25EB5808A9A_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		FileNotFoundException__ctor_mA8C9C93DB8C5B96D6B5E59B2AE07154F265FB1A1(L_7, L_6, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NativeGallery_SaveToGallery_mC512FADA8F0312FA131B768E103068CD34B83240_RuntimeMethod_var)));
	}

IL_0027:
	{
		// if( album == null || album.Length == 0 )
		String_t* L_8 = ___1_album;
		G_B4_0 = G_B3_0;
		if (!L_8)
		{
			G_B5_0 = G_B3_0;
			goto IL_0032;
		}
	}
	{
		String_t* L_9 = ___1_album;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_9, NULL);
		G_B5_0 = G_B4_0;
		if (L_10)
		{
			G_B6_0 = G_B4_0;
			goto IL_003d;
		}
	}

IL_0032:
	{
		// throw new ArgumentException( "Parameter 'album' is null or empty!" );
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_11 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_11);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_11, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral30F8B1D027E92AF30A25606539C4A0E635BF0BBB)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NativeGallery_SaveToGallery_mC512FADA8F0312FA131B768E103068CD34B83240_RuntimeMethod_var)));
	}

IL_003d:
	{
		// if( filename == null || filename.Length == 0 )
		String_t* L_12 = ___2_filename;
		G_B7_0 = G_B6_0;
		if (!L_12)
		{
			G_B8_0 = G_B6_0;
			goto IL_0048;
		}
	}
	{
		String_t* L_13 = ___2_filename;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_13, NULL);
		G_B8_0 = G_B7_0;
		if (L_14)
		{
			G_B9_0 = G_B7_0;
			goto IL_0053;
		}
	}

IL_0048:
	{
		// throw new ArgumentException( "Parameter 'filename' is null or empty!" );
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_15 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_15);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral30F7CAA3903ABC311FB9B0881B8937BE76A5526D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NativeGallery_SaveToGallery_mC512FADA8F0312FA131B768E103068CD34B83240_RuntimeMethod_var)));
	}

IL_0053:
	{
		// if( string.IsNullOrEmpty( Path.GetExtension( filename ) ) )
		String_t* L_16 = ___2_filename;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_17;
		L_17 = Path_GetExtension_m6FEAA9E14451BFD210B9D1AEC2430C813F570FE5(L_16, NULL);
		bool L_18;
		L_18 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_17, NULL);
		G_B10_0 = G_B9_0;
		if (!L_18)
		{
			G_B13_0 = G_B9_0;
			goto IL_0084;
		}
	}
	{
		// string originalExtension = Path.GetExtension( existingMediaPath );
		String_t* L_19 = ___0_existingMediaPath;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_20;
		L_20 = Path_GetExtension_m6FEAA9E14451BFD210B9D1AEC2430C813F570FE5(L_19, NULL);
		V_1 = L_20;
		// if( string.IsNullOrEmpty( originalExtension ) )
		String_t* L_21 = V_1;
		bool L_22;
		L_22 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_21, NULL);
		G_B11_0 = G_B10_0;
		if (!L_22)
		{
			G_B12_0 = G_B10_0;
			goto IL_007b;
		}
	}
	{
		// Debug.LogWarning( "'filename' doesn't have an extension, this might result in unexpected behaviour!" );
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteral1DA1565418493517EA4A1928E378AD0548A223E7, NULL);
		G_B13_0 = G_B11_0;
		goto IL_0084;
	}

IL_007b:
	{
		// filename += originalExtension;
		String_t* L_23 = ___2_filename;
		String_t* L_24 = V_1;
		String_t* L_25;
		L_25 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_23, L_24, NULL);
		___2_filename = L_25;
		G_B13_0 = G_B12_0;
	}

IL_0084:
	{
		// string path = GetTemporarySavePath( filename );
		String_t* L_26 = ___2_filename;
		String_t* L_27;
		L_27 = NativeGallery_GetTemporarySavePath_m2057630E0A0206CEEC5C908A37470E49A0D70E60(L_26, NULL);
		V_0 = L_27;
		// File.Copy( existingMediaPath, path, true );
		String_t* L_28 = ___0_existingMediaPath;
		String_t* L_29 = V_0;
		File_Copy_m3798F05909C43D7EA26130D51D0A15CFCBE7458A(L_28, L_29, (bool)1, NULL);
		// SaveToGalleryInternal( path, album, mediaType, callback );
		String_t* L_30 = V_0;
		String_t* L_31 = ___1_album;
		int32_t L_32 = ___3_mediaType;
		MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D* L_33 = ___4_callback;
		NativeGallery_SaveToGalleryInternal_m7E98DD903D33ED3D5E3036C256CE09CC0422359E(L_30, L_31, L_32, L_33, NULL);
		G_B14_0 = G_B13_0;
	}

IL_009d:
	{
		// return result;
		return G_B14_0;
	}
}
// System.Void NativeGallery::SaveToGalleryInternal(System.String,System.String,NativeGallery/MediaType,NativeGallery/MediaSaveCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeGallery_SaveToGalleryInternal_m7E98DD903D33ED3D5E3036C256CE09CC0422359E (String_t* ___0_path, String_t* ___1_album, int32_t ___2_mediaType, MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D* ___3_callback, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0365E1814018F9007D2AF7114C462B24D8928C59);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4E22C84D059FC69AA54802023A8B68B6F4F4C7E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if( mediaType == MediaType.Audio )
		int32_t L_0 = ___2_mediaType;
		if ((!(((uint32_t)L_0) == ((uint32_t)4))))
		{
			goto IL_001a;
		}
	}
	{
		// Debug.LogError( "Saving audio files is not supported on iOS" );
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteralD4E22C84D059FC69AA54802023A8B68B6F4F4C7E, NULL);
		// if( callback != null )
		MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D* L_1 = ___3_callback;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// callback( false, null );
		MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D* L_2 = ___3_callback;
		NullCheck(L_2);
		MediaSaveCallback_Invoke_mD97247E7132D61D5D8C1E3063FEF0C09205E925C_inline(L_2, (bool)0, (String_t*)NULL, NULL);
	}

IL_0019:
	{
		// return;
		return;
	}

IL_001a:
	{
		// Debug.Log( "Saving to Pictures: " + Path.GetFileName( path ) );
		String_t* L_3 = ___0_path;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_4;
		L_4 = Path_GetFileName_mB1A8CE314EE250B06E3D33142315E2BD3A75D1D6(L_3, NULL);
		String_t* L_5;
		L_5 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral0365E1814018F9007D2AF7114C462B24D8928C59, L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_5, NULL);
		// NGMediaSaveCallbackiOS.Initialize( callback );
		MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D* L_6 = ___3_callback;
		NGMediaSaveCallbackiOS_Initialize_m59AB586285AA39B43E75AE2B93F15AFBA49FA312(L_6, NULL);
		// if( mediaType == MediaType.Image )
		int32_t L_7 = ___2_mediaType;
		if ((!(((uint32_t)L_7) == ((uint32_t)1))))
		{
			goto IL_0042;
		}
	}
	{
		// _NativeGallery_ImageWriteToAlbum( path, album, PermissionFreeMode ? 1 : 0 );
		String_t* L_8 = ___0_path;
		String_t* L_9 = ___1_album;
		NativeGallery__NativeGallery_ImageWriteToAlbum_m70C256937DE0CBF5527D6ACE107176FF21298F90(L_8, L_9, 1, NULL);
		return;
	}

IL_0042:
	{
		// else if( mediaType == MediaType.Video )
		int32_t L_10 = ___2_mediaType;
		if ((!(((uint32_t)L_10) == ((uint32_t)2))))
		{
			goto IL_004e;
		}
	}
	{
		// _NativeGallery_VideoWriteToAlbum( path, album, PermissionFreeMode ? 1 : 0 );
		String_t* L_11 = ___0_path;
		String_t* L_12 = ___1_album;
		NativeGallery__NativeGallery_VideoWriteToAlbum_mB5BCA8550DB8EC4054454DECCE2A8D211662EFBD(L_11, L_12, 1, NULL);
	}

IL_004e:
	{
		// }
		return;
	}
}
// System.String NativeGallery::GetTemporarySavePath(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NativeGallery_GetTemporarySavePath_m2057630E0A0206CEEC5C908A37470E49A0D70E60 (String_t* ___0_filename, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCFA0E830C16EC57623615165EA8FBC2817BACCCF);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	int32_t V_2 = 0;
	String_t* V_3 = NULL;
	String_t* V_4 = NULL;
	{
		// string saveDir = Path.Combine( Application.persistentDataPath, "NGallery" );
		String_t* L_0;
		L_0 = Application_get_persistentDataPath_mC58BD3E1A20732E0A536491DBCAE6505B1624399(NULL);
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = Path_Combine_m1ADAC05CDA2D1D61B172DF65A81E86592696BEAE(L_0, _stringLiteralCFA0E830C16EC57623615165EA8FBC2817BACCCF, NULL);
		V_0 = L_1;
		// Directory.CreateDirectory( saveDir );
		String_t* L_2 = V_0;
		DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* L_3;
		L_3 = Directory_CreateDirectory_m16EC5CE8561A997C6635E06DC24C77590F29D94F(L_2, NULL);
		// string path = Path.Combine( saveDir, filename );
		String_t* L_4 = V_0;
		String_t* L_5 = ___0_filename;
		String_t* L_6;
		L_6 = Path_Combine_m1ADAC05CDA2D1D61B172DF65A81E86592696BEAE(L_4, L_5, NULL);
		V_1 = L_6;
		// if( File.Exists( path ) )
		String_t* L_7 = V_1;
		bool L_8;
		L_8 = File_Exists_m95E329ABBE3EAD6750FE1989BBA6884457136D4A(L_7, NULL);
		if (!L_8)
		{
			goto IL_0059;
		}
	}
	{
		// int fileIndex = 0;
		V_2 = 0;
		// string filenameWithoutExtension = Path.GetFileNameWithoutExtension( filename );
		String_t* L_9 = ___0_filename;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_10;
		L_10 = Path_GetFileNameWithoutExtension_m2D14CCBAB9C60DC8D32C2443CCE3D34644822FAF(L_9, NULL);
		V_3 = L_10;
		// string extension = Path.GetExtension( filename );
		String_t* L_11 = ___0_filename;
		String_t* L_12;
		L_12 = Path_GetExtension_m6FEAA9E14451BFD210B9D1AEC2430C813F570FE5(L_11, NULL);
		V_4 = L_12;
	}

IL_0038:
	{
		// path = Path.Combine( saveDir, string.Concat( filenameWithoutExtension, ++fileIndex, extension ) );
		String_t* L_13 = V_0;
		String_t* L_14 = V_3;
		int32_t L_15 = V_2;
		int32_t L_16 = ((int32_t)il2cpp_codegen_add(L_15, 1));
		V_2 = L_16;
		int32_t L_17 = L_16;
		RuntimeObject* L_18 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_17);
		String_t* L_19 = V_4;
		String_t* L_20;
		L_20 = String_Concat_m9DF47FC6E1F8341012CA3FF02993D372AA7A96C9(L_14, L_18, L_19, NULL);
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_21;
		L_21 = Path_Combine_m1ADAC05CDA2D1D61B172DF65A81E86592696BEAE(L_13, L_20, NULL);
		V_1 = L_21;
		// } while( File.Exists( path ) );
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = File_Exists_m95E329ABBE3EAD6750FE1989BBA6884457136D4A(L_22, NULL);
		if (L_23)
		{
			goto IL_0038;
		}
	}

IL_0059:
	{
		// return path;
		String_t* L_24 = V_1;
		return L_24;
	}
}
// NativeGallery/Permission NativeGallery::GetMediaFromGallery(NativeGallery/MediaPickCallback,NativeGallery/MediaType,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_GetMediaFromGallery_mE04A8BFF146401DA572B17485B97A88D11A509E1 (MediaPickCallback_tC207F6F3EEE18F64B03E23D5C9FA8C79517A5EB6* ___0_callback, int32_t ___1_mediaType, String_t* ___2_mime, String_t* ___3_title, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB04FF65BF5CEF7336F7FBA4624393E214FB7EB08);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B6_0 = 0;
	int32_t G_B1_0 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B5_0 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B4_0 = 0;
	{
		// Permission result = RequestPermission( PermissionType.Read, mediaType );
		int32_t L_0 = ___1_mediaType;
		int32_t L_1;
		L_1 = NativeGallery_RequestPermission_mB2F20A17757755EB1B2C3F171DCD5944A4CF1706(0, L_0, NULL);
		// if( result == Permission.Granted && !IsMediaPickerBusy() )
		int32_t L_2 = L_1;
		G_B1_0 = L_2;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			G_B6_0 = L_2;
			goto IL_0042;
		}
	}
	{
		bool L_3;
		L_3 = NativeGallery_IsMediaPickerBusy_m08C8520C94ABF511EA6E7F48E63697CA7857BAAD(NULL);
		G_B2_0 = G_B1_0;
		if (L_3)
		{
			G_B6_0 = G_B1_0;
			goto IL_0042;
		}
	}
	{
		// if( mediaType == MediaType.Audio )
		int32_t L_4 = ___1_mediaType;
		G_B3_0 = G_B2_0;
		if ((!(((uint32_t)L_4) == ((uint32_t)4))))
		{
			G_B5_0 = G_B2_0;
			goto IL_002b;
		}
	}
	{
		// Debug.LogError( "Picking audio files is not supported on iOS" );
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteralB04FF65BF5CEF7336F7FBA4624393E214FB7EB08, NULL);
		// if( callback != null ) // Selecting audio files is not supported on iOS
		MediaPickCallback_tC207F6F3EEE18F64B03E23D5C9FA8C79517A5EB6* L_5 = ___0_callback;
		G_B4_0 = G_B3_0;
		if (!L_5)
		{
			G_B6_0 = G_B3_0;
			goto IL_0042;
		}
	}
	{
		// callback( null );
		MediaPickCallback_tC207F6F3EEE18F64B03E23D5C9FA8C79517A5EB6* L_6 = ___0_callback;
		NullCheck(L_6);
		MediaPickCallback_Invoke_m25F1FD61CF9FE4C835CD3298D790CBB61691BC4E_inline(L_6, (String_t*)NULL, NULL);
		return G_B4_0;
	}

IL_002b:
	{
		// NGMediaReceiveCallbackiOS.Initialize( callback, null );
		MediaPickCallback_tC207F6F3EEE18F64B03E23D5C9FA8C79517A5EB6* L_7 = ___0_callback;
		NGMediaReceiveCallbackiOS_Initialize_m4FED174803F7A702EC9D42B9852078AF352658E8(L_7, (MediaPickMultipleCallback_t717A5D378751E2CACB53E6BA25386FF8DB41627B*)NULL, NULL);
		// _NativeGallery_PickMedia( SelectedMediaPath, (int) ( mediaType & ~MediaType.Audio ), PermissionFreeMode ? 1 : 0, 1 );
		String_t* L_8;
		L_8 = NativeGallery_get_SelectedMediaPath_mBB0C7C91D1B7ED7D8D2F457B86432E2D7AA7A19F(NULL);
		int32_t L_9 = ___1_mediaType;
		NativeGallery__NativeGallery_PickMedia_m98B3BC86CBFDA5E35959B10DF6F52AEE1FE185DC(L_8, ((int32_t)((int32_t)L_9&((int32_t)-5))), 1, 1, NULL);
		G_B6_0 = G_B5_0;
	}

IL_0042:
	{
		// return result;
		return G_B6_0;
	}
}
// NativeGallery/Permission NativeGallery::GetMultipleMediaFromGallery(NativeGallery/MediaPickMultipleCallback,NativeGallery/MediaType,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_GetMultipleMediaFromGallery_mA60A18D80705ACD41BBACC5DB898F2BA758DF35C (MediaPickMultipleCallback_t717A5D378751E2CACB53E6BA25386FF8DB41627B* ___0_callback, int32_t ___1_mediaType, String_t* ___2_mime, String_t* ___3_title, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB04FF65BF5CEF7336F7FBA4624393E214FB7EB08);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B9_0 = 0;
	int32_t G_B1_0 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B7_0 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B6_0 = 0;
	int32_t G_B4_0 = 0;
	int32_t G_B5_0 = 0;
	int32_t G_B8_0 = 0;
	{
		// Permission result = RequestPermission( PermissionType.Read, mediaType );
		int32_t L_0 = ___1_mediaType;
		int32_t L_1;
		L_1 = NativeGallery_RequestPermission_mB2F20A17757755EB1B2C3F171DCD5944A4CF1706(0, L_0, NULL);
		// if( result == Permission.Granted && !IsMediaPickerBusy() )
		int32_t L_2 = L_1;
		G_B1_0 = L_2;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			G_B9_0 = L_2;
			goto IL_0054;
		}
	}
	{
		bool L_3;
		L_3 = NativeGallery_IsMediaPickerBusy_m08C8520C94ABF511EA6E7F48E63697CA7857BAAD(NULL);
		G_B2_0 = G_B1_0;
		if (L_3)
		{
			G_B9_0 = G_B1_0;
			goto IL_0054;
		}
	}
	{
		// if( CanSelectMultipleFilesFromGallery() )
		bool L_4;
		L_4 = NativeGallery_CanSelectMultipleFilesFromGallery_m8B64B58699A6EEB502428C3444FBFEE702E63997(NULL);
		G_B3_0 = G_B2_0;
		if (!L_4)
		{
			G_B7_0 = G_B2_0;
			goto IL_004a;
		}
	}
	{
		// if( mediaType == MediaType.Audio )
		int32_t L_5 = ___1_mediaType;
		G_B4_0 = G_B3_0;
		if ((!(((uint32_t)L_5) == ((uint32_t)4))))
		{
			G_B6_0 = G_B3_0;
			goto IL_0032;
		}
	}
	{
		// Debug.LogError( "Picking audio files is not supported on iOS" );
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteralB04FF65BF5CEF7336F7FBA4624393E214FB7EB08, NULL);
		// if( callback != null ) // Selecting audio files is not supported on iOS
		MediaPickMultipleCallback_t717A5D378751E2CACB53E6BA25386FF8DB41627B* L_6 = ___0_callback;
		G_B5_0 = G_B4_0;
		if (!L_6)
		{
			G_B9_0 = G_B4_0;
			goto IL_0054;
		}
	}
	{
		// callback( null );
		MediaPickMultipleCallback_t717A5D378751E2CACB53E6BA25386FF8DB41627B* L_7 = ___0_callback;
		NullCheck(L_7);
		MediaPickMultipleCallback_Invoke_m5FE7D489E8659411C7E24DB7E892B439C9990F3D_inline(L_7, (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)NULL, NULL);
		return G_B5_0;
	}

IL_0032:
	{
		// NGMediaReceiveCallbackiOS.Initialize( null, callback );
		MediaPickMultipleCallback_t717A5D378751E2CACB53E6BA25386FF8DB41627B* L_8 = ___0_callback;
		NGMediaReceiveCallbackiOS_Initialize_m4FED174803F7A702EC9D42B9852078AF352658E8((MediaPickCallback_tC207F6F3EEE18F64B03E23D5C9FA8C79517A5EB6*)NULL, L_8, NULL);
		// _NativeGallery_PickMedia( SelectedMediaPath, (int) ( mediaType & ~MediaType.Audio ), PermissionFreeMode ? 1 : 0, 0 );
		String_t* L_9;
		L_9 = NativeGallery_get_SelectedMediaPath_mBB0C7C91D1B7ED7D8D2F457B86432E2D7AA7A19F(NULL);
		int32_t L_10 = ___1_mediaType;
		NativeGallery__NativeGallery_PickMedia_m98B3BC86CBFDA5E35959B10DF6F52AEE1FE185DC(L_9, ((int32_t)((int32_t)L_10&((int32_t)-5))), 1, 0, NULL);
		return G_B6_0;
	}

IL_004a:
	{
		// else if( callback != null )
		MediaPickMultipleCallback_t717A5D378751E2CACB53E6BA25386FF8DB41627B* L_11 = ___0_callback;
		G_B8_0 = G_B7_0;
		if (!L_11)
		{
			G_B9_0 = G_B7_0;
			goto IL_0054;
		}
	}
	{
		// callback( null );
		MediaPickMultipleCallback_t717A5D378751E2CACB53E6BA25386FF8DB41627B* L_12 = ___0_callback;
		NullCheck(L_12);
		MediaPickMultipleCallback_Invoke_m5FE7D489E8659411C7E24DB7E892B439C9990F3D_inline(L_12, (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)NULL, NULL);
		G_B9_0 = G_B8_0;
	}

IL_0054:
	{
		// return result;
		return G_B9_0;
	}
}
// System.Byte[] NativeGallery::GetTextureBytes(UnityEngine.Texture2D,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* NativeGallery_GetTextureBytes_mB475FDFD6E1FBEAA043E1190CC5B4172EE3536EF (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___0_texture, bool ___1_isJpeg, const RuntimeMethod* method) 
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B3_0 = NULL;
	try
	{// begin try (depth: 1)
		{
			// return isJpeg ? texture.EncodeToJPG( 100 ) : texture.EncodeToPNG();
			bool L_0 = ___1_isJpeg;
			if (L_0)
			{
				goto IL_000b_1;
			}
		}
		{
			Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_1 = ___0_texture;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
			L_2 = ImageConversion_EncodeToPNG_m0804AD31B83C653AEBB234F6CC31A02D4FA7C945(L_1, NULL);
			G_B3_0 = L_2;
			goto IL_0013_1;
		}

IL_000b_1:
		{
			Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_3 = ___0_texture;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4;
			L_4 = ImageConversion_EncodeToJPG_mD0307B5DFF32A3FF39488E97B467F11AFE501F6F(L_3, ((int32_t)100), NULL);
			G_B3_0 = L_4;
		}

IL_0013_1:
		{
			V_0 = G_B3_0;
			goto IL_002c;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnityException_tA1EC1E95ADE689CF6EB7FAFF77C160AE1F559067_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0016;
		}
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0021;
		}
		throw e;
	}

CATCH_0016:
	{// begin catch(UnityEngine.UnityException)
		// catch( UnityException )
		// return GetTextureBytesFromCopy( texture, isJpeg );
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_5 = ___0_texture;
		bool L_6 = ___1_isJpeg;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7;
		L_7 = NativeGallery_GetTextureBytesFromCopy_m23C31F7FB9D56BD6144EA7D15230E0718D84DED7(L_5, L_6, NULL);
		V_0 = L_7;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_002c;
	}// end catch (depth: 1)

CATCH_0021:
	{// begin catch(System.ArgumentException)
		// catch( ArgumentException )
		// return GetTextureBytesFromCopy( texture, isJpeg );
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_8 = ___0_texture;
		bool L_9 = ___1_isJpeg;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10;
		L_10 = NativeGallery_GetTextureBytesFromCopy_m23C31F7FB9D56BD6144EA7D15230E0718D84DED7(L_8, L_9, NULL);
		V_0 = L_10;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_002c;
	}// end catch (depth: 1)

IL_002c:
	{
		// }
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = V_0;
		return L_11;
	}
}
// System.Byte[] NativeGallery::GetTextureBytesFromCopy(UnityEngine.Texture2D,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* NativeGallery_GetTextureBytesFromCopy_m23C31F7FB9D56BD6144EA7D15230E0718D84DED7 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___0_texture, bool ___1_isJpeg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F7876094B3FA10965A88A7D08B74EA3DC22CAE9);
		s_Il2CppMethodInitialized = true;
	}
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* V_0 = NULL;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* V_1 = NULL;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* V_2 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B3_0 = 0;
	int32_t G_B3_1 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B2_1 = 0;
	int32_t G_B4_0 = 0;
	int32_t G_B4_1 = 0;
	int32_t G_B4_2 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B11_0 = NULL;
	{
		// Debug.LogWarning( "Saving non-readable textures is slower than saving readable textures" );
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteral7F7876094B3FA10965A88A7D08B74EA3DC22CAE9, NULL);
		// Texture2D sourceTexReadable = null;
		V_0 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)NULL;
		// RenderTexture rt = RenderTexture.GetTemporary( texture.width, texture.height );
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_0 = ___0_texture;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_width() */, L_0);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_2 = ___0_texture;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 UnityEngine.Texture::get_height() */, L_2);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_4;
		L_4 = RenderTexture_GetTemporary_m82379FD4C767A36F0677CAF4E68319EAE16ADF7F(L_1, L_3, NULL);
		V_1 = L_4;
		// RenderTexture activeRT = RenderTexture.active;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_5;
		L_5 = RenderTexture_get_active_mA4434B3E79DEF2C01CAE0A53061598B16443C9E7(NULL);
		V_2 = L_5;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_008a:
			{// begin finally (depth: 1)
				// RenderTexture.active = activeRT;
				RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_6 = V_2;
				RenderTexture_set_active_m5EE8E2327EF9B306C1425014CC34C41A8384E7AB(L_6, NULL);
				// RenderTexture.ReleaseTemporary( rt );
				RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_7 = V_1;
				RenderTexture_ReleaseTemporary_mEEF2C1990196FF06FDD0DC190928AD3A023EBDD2(L_7, NULL);
				// }
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			try
			{// begin try (depth: 2)
				{
					// Graphics.Blit( texture, rt );
					Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_8 = ___0_texture;
					RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_9 = V_1;
					il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
					Graphics_Blit_m8D99E16B74C7D3C8F79F4F142C59DB6B38114504(L_8, L_9, NULL);
					// RenderTexture.active = rt;
					RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_10 = V_1;
					RenderTexture_set_active_m5EE8E2327EF9B306C1425014CC34C41A8384E7AB(L_10, NULL);
					// sourceTexReadable = new Texture2D( texture.width, texture.height, isJpeg ? TextureFormat.RGB24 : TextureFormat.RGBA32, false );
					Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_11 = ___0_texture;
					NullCheck(L_11);
					int32_t L_12;
					L_12 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_width() */, L_11);
					Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_13 = ___0_texture;
					NullCheck(L_13);
					int32_t L_14;
					L_14 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 UnityEngine.Texture::get_height() */, L_13);
					bool L_15 = ___1_isJpeg;
					G_B2_0 = L_14;
					G_B2_1 = L_12;
					if (L_15)
					{
						G_B3_0 = L_14;
						G_B3_1 = L_12;
						goto IL_0043_2;
					}
				}
				{
					G_B4_0 = 4;
					G_B4_1 = G_B2_0;
					G_B4_2 = G_B2_1;
					goto IL_0044_2;
				}

IL_0043_2:
				{
					G_B4_0 = 3;
					G_B4_1 = G_B3_0;
					G_B4_2 = G_B3_1;
				}

IL_0044_2:
				{
					Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_16 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)il2cpp_codegen_object_new(Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
					NullCheck(L_16);
					Texture2D__ctor_mECF60A9EC0638EC353C02C8E99B6B465D23BE917(L_16, G_B4_2, G_B4_1, G_B4_0, (bool)0, NULL);
					V_0 = L_16;
					// sourceTexReadable.ReadPixels( new Rect( 0, 0, texture.width, texture.height ), 0, 0, false );
					Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_17 = V_0;
					Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_18 = ___0_texture;
					NullCheck(L_18);
					int32_t L_19;
					L_19 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_width() */, L_18);
					Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_20 = ___0_texture;
					NullCheck(L_20);
					int32_t L_21;
					L_21 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 UnityEngine.Texture::get_height() */, L_20);
					Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_22;
					memset((&L_22), 0, sizeof(L_22));
					Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_22), (0.0f), (0.0f), ((float)L_19), ((float)L_21), /*hidden argument*/NULL);
					NullCheck(L_17);
					Texture2D_ReadPixels_m7483DB211233F02E46418E9A6077487925F0024C(L_17, L_22, 0, 0, (bool)0, NULL);
					// sourceTexReadable.Apply( false, false );
					Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_23 = V_0;
					NullCheck(L_23);
					Texture2D_Apply_m36EE27E6F1BF7FB8C70A1D749DC4EE249810AA3A(L_23, (bool)0, (bool)0, NULL);
					// }
					goto IL_0097;
				}
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_007b_1;
				}
				throw e;
			}

CATCH_007b_1:
			{// begin catch(System.Exception)
				// Debug.LogException( e );
				il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
				Debug_LogException_mAB3F4DC7297ED8FBB49DAA718B70E59A6B0171B0(((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*)), NULL);
				// Object.DestroyImmediate( sourceTexReadable );
				Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_24 = V_0;
				il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)));
				Object_DestroyImmediate_m6336EBC83591A5DB64EC70C92132824C6E258705(L_24, NULL);
				// return null;
				V_3 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
				IL2CPP_POP_ACTIVE_EXCEPTION();
				goto IL_00be;
			}// end catch (depth: 2)
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0097:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00b7:
			{// begin finally (depth: 1)
				// Object.DestroyImmediate( sourceTexReadable );
				Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_25 = V_0;
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				Object_DestroyImmediate_m6336EBC83591A5DB64EC70C92132824C6E258705(L_25, NULL);
				// }
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			try
			{// begin try (depth: 2)
				{
					// return isJpeg ? sourceTexReadable.EncodeToJPG( 100 ) : sourceTexReadable.EncodeToPNG();
					bool L_26 = ___1_isJpeg;
					if (L_26)
					{
						goto IL_00a3_2;
					}
				}
				{
					Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_27 = V_0;
					ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_28;
					L_28 = ImageConversion_EncodeToPNG_m0804AD31B83C653AEBB234F6CC31A02D4FA7C945(L_27, NULL);
					G_B11_0 = L_28;
					goto IL_00ab_2;
				}

IL_00a3_2:
				{
					Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_29 = V_0;
					ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_30;
					L_30 = ImageConversion_EncodeToJPG_mD0307B5DFF32A3FF39488E97B467F11AFE501F6F(L_29, ((int32_t)100), NULL);
					G_B11_0 = L_30;
				}

IL_00ab_2:
				{
					V_3 = G_B11_0;
					goto IL_00be;
				}
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_00ae_1;
				}
				throw e;
			}

CATCH_00ae_1:
			{// begin catch(System.Exception)
				// Debug.LogException( e );
				il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
				Debug_LogException_mAB3F4DC7297ED8FBB49DAA718B70E59A6B0171B0(((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*)), NULL);
				// return null;
				V_3 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
				IL2CPP_POP_ACTIVE_EXCEPTION();
				goto IL_00be;
			}// end catch (depth: 2)
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00be:
	{
		// }
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_31 = V_3;
		return L_31;
	}
}
// UnityEngine.Texture2D NativeGallery::LoadImageAtPath(System.String,System.Int32,System.Boolean,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* NativeGallery_LoadImageAtPath_m62187A34B7B063FBEFFD7E200DEC2332313A56AE (String_t* ___0_imagePath, int32_t ___1_maxSize, bool ___2_markTextureNonReadable, bool ___3_generateMipmaps, bool ___4_linearColorSpace, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral23DF9991B71463C240582D176E347E7E47AEFF5A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B9B40AAD718882F5C0B95FE844E4AA92BD49C42);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral76F1B85647641622FD867CE16AF6C584C5081BD4);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	int32_t V_2 = 0;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* V_3 = NULL;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B10_0 = 0;
	{
		// if( string.IsNullOrEmpty( imagePath ) )
		String_t* L_0 = ___0_imagePath;
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// throw new ArgumentException( "Parameter 'imagePath' is null or empty!" );
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_2 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral18B82B6B7DC4FE1988BA61A3784D1768F6C925DF)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NativeGallery_LoadImageAtPath_m62187A34B7B063FBEFFD7E200DEC2332313A56AE_RuntimeMethod_var)));
	}

IL_0013:
	{
		// if( !File.Exists( imagePath ) )
		String_t* L_3 = ___0_imagePath;
		bool L_4;
		L_4 = File_Exists_m95E329ABBE3EAD6750FE1989BBA6884457136D4A(L_3, NULL);
		if (L_4)
		{
			goto IL_002c;
		}
	}
	{
		// throw new FileNotFoundException( "File not found at " + imagePath );
		String_t* L_5 = ___0_imagePath;
		String_t* L_6;
		L_6 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral491B4D9271839F0BD63211437BF7CEE5B2C6ADE9)), L_5, NULL);
		FileNotFoundException_t17F1B49AD996E4A60C87C7ADC9D3A25EB5808A9A* L_7 = (FileNotFoundException_t17F1B49AD996E4A60C87C7ADC9D3A25EB5808A9A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FileNotFoundException_t17F1B49AD996E4A60C87C7ADC9D3A25EB5808A9A_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		FileNotFoundException__ctor_mA8C9C93DB8C5B96D6B5E59B2AE07154F265FB1A1(L_7, L_6, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NativeGallery_LoadImageAtPath_m62187A34B7B063FBEFFD7E200DEC2332313A56AE_RuntimeMethod_var)));
	}

IL_002c:
	{
		// if( maxSize <= 0 )
		int32_t L_8 = ___1_maxSize;
		if ((((int32_t)L_8) > ((int32_t)0)))
		{
			goto IL_0037;
		}
	}
	{
		// maxSize = SystemInfo.maxTextureSize;
		int32_t L_9;
		L_9 = SystemInfo_get_maxTextureSize_mEE557C09643222591C6F4D3F561D7A60CD403991(NULL);
		___1_maxSize = L_9;
	}

IL_0037:
	{
		// string loadPath = _NativeGallery_LoadImageAtPath( imagePath, TemporaryImagePath, maxSize );
		String_t* L_10 = ___0_imagePath;
		String_t* L_11;
		L_11 = NativeGallery_get_TemporaryImagePath_m05418FC4CC85508CDAE30BEDCC344C85884E1BF8(NULL);
		int32_t L_12 = ___1_maxSize;
		String_t* L_13;
		L_13 = NativeGallery__NativeGallery_LoadImageAtPath_m307F352849636A1E1D1E46202B8F5A3EFB5F1744(L_10, L_11, L_12, NULL);
		V_0 = L_13;
		// string extension = Path.GetExtension( imagePath ).ToLowerInvariant();
		String_t* L_14 = ___0_imagePath;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_15;
		L_15 = Path_GetExtension_m6FEAA9E14451BFD210B9D1AEC2430C813F570FE5(L_14, NULL);
		NullCheck(L_15);
		String_t* L_16;
		L_16 = String_ToLowerInvariant_mBE32C93DE27C5353FEA3FA654FC1DDBE3D0EB0F2(L_15, NULL);
		V_1 = L_16;
		// TextureFormat format = ( extension == ".jpg" || extension == ".jpeg" ) ? TextureFormat.RGB24 : TextureFormat.RGBA32;
		String_t* L_17 = V_1;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteral23DF9991B71463C240582D176E347E7E47AEFF5A, NULL);
		if (L_18)
		{
			goto IL_006d;
		}
	}
	{
		String_t* L_19 = V_1;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteral4B9B40AAD718882F5C0B95FE844E4AA92BD49C42, NULL);
		if (L_20)
		{
			goto IL_006d;
		}
	}
	{
		G_B10_0 = 4;
		goto IL_006e;
	}

IL_006d:
	{
		G_B10_0 = 3;
	}

IL_006e:
	{
		V_2 = G_B10_0;
		// Texture2D result = new Texture2D( 2, 2, format, generateMipmaps, linearColorSpace );
		int32_t L_21 = V_2;
		bool L_22 = ___3_generateMipmaps;
		bool L_23 = ___4_linearColorSpace;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_24 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)il2cpp_codegen_object_new(Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		NullCheck(L_24);
		Texture2D__ctor_mC3F84195D1DCEFC0536B3FBD40A8F8E865A4F32A(L_24, 2, 2, L_21, L_22, L_23, NULL);
		V_3 = L_24;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00b7:
			{// begin finally (depth: 1)
				{
					// if( loadPath != imagePath )
					String_t* L_25 = V_0;
					String_t* L_26 = ___0_imagePath;
					bool L_27;
					L_27 = String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6(L_25, L_26, NULL);
					if (!L_27)
					{
						goto IL_00cb;
					}
				}
				try
				{// begin try (depth: 2)
					// File.Delete( loadPath );
					String_t* L_28 = V_0;
					File_Delete_mE29829DA504F3E1B8BCB78F21E2862C9ED7EC386(L_28, NULL);
					// }
					goto IL_00cb;
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
					{
						IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
						goto CATCH_00c8;
					}
					throw e;
				}

CATCH_00c8:
				{// begin catch(System.Object)
					// catch { }
					// catch { }
					IL2CPP_POP_ACTIVE_EXCEPTION();
					goto IL_00cb;
				}// end catch (depth: 2)

IL_00cb:
				{
					// }
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			try
			{// begin try (depth: 2)
				{
					// if( !result.LoadImage( File.ReadAllBytes( loadPath ), markTextureNonReadable ) )
					Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_29 = V_3;
					String_t* L_30 = V_0;
					ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_31;
					L_31 = File_ReadAllBytes_m704CBBA3F130C94F5A3E0BE2A93D9E9D79DC3E24(L_30, NULL);
					bool L_32 = ___2_markTextureNonReadable;
					bool L_33;
					L_33 = ImageConversion_LoadImage_m292ADCEED268A0A0AAD532BAB8D1710CF0FC8AEF(L_29, L_31, L_32, NULL);
					if (L_33)
					{
						goto IL_00a5_2;
					}
				}
				{
					// Debug.LogWarning( "Couldn't load image at path: " + loadPath );
					String_t* L_34 = V_0;
					String_t* L_35;
					L_35 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral76F1B85647641622FD867CE16AF6C584C5081BD4, L_34, NULL);
					il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
					Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(L_35, NULL);
					// Object.DestroyImmediate( result );
					Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_36 = V_3;
					il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
					Object_DestroyImmediate_m6336EBC83591A5DB64EC70C92132824C6E258705(L_36, NULL);
					// return null;
					V_4 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)NULL;
					goto IL_00ce;
				}

IL_00a5_2:
				{
					// }
					goto IL_00cc;
				}
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_00a7_1;
				}
				throw e;
			}

CATCH_00a7_1:
			{// begin catch(System.Exception)
				// Debug.LogException( e );
				il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
				Debug_LogException_mAB3F4DC7297ED8FBB49DAA718B70E59A6B0171B0(((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*)), NULL);
				// Object.DestroyImmediate( result );
				Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_37 = V_3;
				il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)));
				Object_DestroyImmediate_m6336EBC83591A5DB64EC70C92132824C6E258705(L_37, NULL);
				// return null;
				V_4 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)NULL;
				IL2CPP_POP_ACTIVE_EXCEPTION();
				goto IL_00ce;
			}// end catch (depth: 2)
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00cc:
	{
		// return result;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_38 = V_3;
		return L_38;
	}

IL_00ce:
	{
		// }
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_39 = V_4;
		return L_39;
	}
}
// System.Threading.Tasks.Task`1<UnityEngine.Texture2D> NativeGallery::LoadImageAtPathAsync(System.String,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t95921EB64E237ACD28589D64B693C652268F225E* NativeGallery_LoadImageAtPathAsync_m5927E93A68C0EFA80CE2ED62FCDA3FAF6089134A (String_t* ___0_imagePath, int32_t ___1_maxSize, bool ___2_markTextureNonReadable, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Create_mEBDA40894C43C50AA47346AC784F528C9CA1ABD4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Start_TisU3CLoadImageAtPathAsyncU3Ed__68_t6B30763C817CF0D323D6D6333BDCEC374A300CC4_m56B5776DAE2E64CCFC7B971A4DB5685D10733F62_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_get_Task_mC842CA788344F6A0EAB9EFDE97E0FAC79368245E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_t05B41371EF0E362ABCB54C56063FAA1E00C69A8F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CLoadImageAtPathAsyncU3Ed__68_t6B30763C817CF0D323D6D6333BDCEC374A300CC4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_1_t05B41371EF0E362ABCB54C56063FAA1E00C69A8F_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_1_t05B41371EF0E362ABCB54C56063FAA1E00C69A8F L_0;
		L_0 = AsyncTaskMethodBuilder_1_Create_mEBDA40894C43C50AA47346AC784F528C9CA1ABD4(AsyncTaskMethodBuilder_1_Create_mEBDA40894C43C50AA47346AC784F528C9CA1ABD4_RuntimeMethod_var);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
		String_t* L_1 = ___0_imagePath;
		(&V_0)->___imagePath_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___imagePath_2), (void*)L_1);
		int32_t L_2 = ___1_maxSize;
		(&V_0)->___maxSize_3 = L_2;
		bool L_3 = ___2_markTextureNonReadable;
		(&V_0)->___markTextureNonReadable_4 = L_3;
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncTaskMethodBuilder_1_t05B41371EF0E362ABCB54C56063FAA1E00C69A8F* L_4 = (AsyncTaskMethodBuilder_1_t05B41371EF0E362ABCB54C56063FAA1E00C69A8F*)(&(&V_0)->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_1_Start_TisU3CLoadImageAtPathAsyncU3Ed__68_t6B30763C817CF0D323D6D6333BDCEC374A300CC4_m56B5776DAE2E64CCFC7B971A4DB5685D10733F62(L_4, (&V_0), AsyncTaskMethodBuilder_1_Start_TisU3CLoadImageAtPathAsyncU3Ed__68_t6B30763C817CF0D323D6D6333BDCEC374A300CC4_m56B5776DAE2E64CCFC7B971A4DB5685D10733F62_RuntimeMethod_var);
		AsyncTaskMethodBuilder_1_t05B41371EF0E362ABCB54C56063FAA1E00C69A8F* L_5 = (AsyncTaskMethodBuilder_1_t05B41371EF0E362ABCB54C56063FAA1E00C69A8F*)(&(&V_0)->___U3CU3Et__builder_1);
		Task_1_t95921EB64E237ACD28589D64B693C652268F225E* L_6;
		L_6 = AsyncTaskMethodBuilder_1_get_Task_mC842CA788344F6A0EAB9EFDE97E0FAC79368245E(L_5, AsyncTaskMethodBuilder_1_get_Task_mC842CA788344F6A0EAB9EFDE97E0FAC79368245E_RuntimeMethod_var);
		return L_6;
	}
}
// UnityEngine.Texture2D NativeGallery::GetVideoThumbnail(System.String,System.Int32,System.Double,System.Boolean,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* NativeGallery_GetVideoThumbnail_m6D508C9C4809F558BAB746AC8F307AEEB4BDC499 (String_t* ___0_videoPath, int32_t ___1_maxSize, double ___2_captureTimeInSeconds, bool ___3_markTextureNonReadable, bool ___4_generateMipmaps, bool ___5_linearColorSpace, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA15C898F015A9B0BC3268E8883CD03008A56DE26);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// if( maxSize <= 0 )
		int32_t L_0 = ___1_maxSize;
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_000b;
		}
	}
	{
		// maxSize = SystemInfo.maxTextureSize;
		int32_t L_1;
		L_1 = SystemInfo_get_maxTextureSize_mEE557C09643222591C6F4D3F561D7A60CD403991(NULL);
		___1_maxSize = L_1;
	}

IL_000b:
	{
		// string thumbnailPath = _NativeGallery_GetVideoThumbnail( videoPath, TemporaryImagePath + ".png", maxSize, captureTimeInSeconds );
		String_t* L_2 = ___0_videoPath;
		String_t* L_3;
		L_3 = NativeGallery_get_TemporaryImagePath_m05418FC4CC85508CDAE30BEDCC344C85884E1BF8(NULL);
		String_t* L_4;
		L_4 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_3, _stringLiteralA15C898F015A9B0BC3268E8883CD03008A56DE26, NULL);
		int32_t L_5 = ___1_maxSize;
		double L_6 = ___2_captureTimeInSeconds;
		String_t* L_7;
		L_7 = NativeGallery__NativeGallery_GetVideoThumbnail_m83B768DF2FA15147F6938AD36A29DE5ED18C0707(L_2, L_4, L_5, L_6, NULL);
		V_0 = L_7;
		// if( !string.IsNullOrEmpty( thumbnailPath ) )
		String_t* L_8 = V_0;
		bool L_9;
		L_9 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_8, NULL);
		if (L_9)
		{
			goto IL_0038;
		}
	}
	{
		// return LoadImageAtPath( thumbnailPath, maxSize, markTextureNonReadable, generateMipmaps, linearColorSpace );
		String_t* L_10 = V_0;
		int32_t L_11 = ___1_maxSize;
		bool L_12 = ___3_markTextureNonReadable;
		bool L_13 = ___4_generateMipmaps;
		bool L_14 = ___5_linearColorSpace;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_15;
		L_15 = NativeGallery_LoadImageAtPath_m62187A34B7B063FBEFFD7E200DEC2332313A56AE(L_10, L_11, L_12, L_13, L_14, NULL);
		return L_15;
	}

IL_0038:
	{
		// return null;
		return (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)NULL;
	}
}
// System.Threading.Tasks.Task`1<UnityEngine.Texture2D> NativeGallery::GetVideoThumbnailAsync(System.String,System.Int32,System.Double,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t95921EB64E237ACD28589D64B693C652268F225E* NativeGallery_GetVideoThumbnailAsync_mE047B654A91780110E44E61B9C7FDE2B58F536C7 (String_t* ___0_videoPath, int32_t ___1_maxSize, double ___2_captureTimeInSeconds, bool ___3_markTextureNonReadable, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Create_mEBDA40894C43C50AA47346AC784F528C9CA1ABD4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Start_TisU3CGetVideoThumbnailAsyncU3Ed__70_tD8ECB30B418EDA30010B6ACFFD3C1F8BE2BA7060_m5ED6CB236201185BED7B2886CC6838FB48D2541E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_get_Task_mC842CA788344F6A0EAB9EFDE97E0FAC79368245E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_t05B41371EF0E362ABCB54C56063FAA1E00C69A8F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CGetVideoThumbnailAsyncU3Ed__70_tD8ECB30B418EDA30010B6ACFFD3C1F8BE2BA7060 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_1_t05B41371EF0E362ABCB54C56063FAA1E00C69A8F_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_1_t05B41371EF0E362ABCB54C56063FAA1E00C69A8F L_0;
		L_0 = AsyncTaskMethodBuilder_1_Create_mEBDA40894C43C50AA47346AC784F528C9CA1ABD4(AsyncTaskMethodBuilder_1_Create_mEBDA40894C43C50AA47346AC784F528C9CA1ABD4_RuntimeMethod_var);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
		String_t* L_1 = ___0_videoPath;
		(&V_0)->___videoPath_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___videoPath_2), (void*)L_1);
		int32_t L_2 = ___1_maxSize;
		(&V_0)->___maxSize_3 = L_2;
		double L_3 = ___2_captureTimeInSeconds;
		(&V_0)->___captureTimeInSeconds_4 = L_3;
		bool L_4 = ___3_markTextureNonReadable;
		(&V_0)->___markTextureNonReadable_6 = L_4;
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncTaskMethodBuilder_1_t05B41371EF0E362ABCB54C56063FAA1E00C69A8F* L_5 = (AsyncTaskMethodBuilder_1_t05B41371EF0E362ABCB54C56063FAA1E00C69A8F*)(&(&V_0)->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_1_Start_TisU3CGetVideoThumbnailAsyncU3Ed__70_tD8ECB30B418EDA30010B6ACFFD3C1F8BE2BA7060_m5ED6CB236201185BED7B2886CC6838FB48D2541E(L_5, (&V_0), AsyncTaskMethodBuilder_1_Start_TisU3CGetVideoThumbnailAsyncU3Ed__70_tD8ECB30B418EDA30010B6ACFFD3C1F8BE2BA7060_m5ED6CB236201185BED7B2886CC6838FB48D2541E_RuntimeMethod_var);
		AsyncTaskMethodBuilder_1_t05B41371EF0E362ABCB54C56063FAA1E00C69A8F* L_6 = (AsyncTaskMethodBuilder_1_t05B41371EF0E362ABCB54C56063FAA1E00C69A8F*)(&(&V_0)->___U3CU3Et__builder_1);
		Task_1_t95921EB64E237ACD28589D64B693C652268F225E* L_7;
		L_7 = AsyncTaskMethodBuilder_1_get_Task_mC842CA788344F6A0EAB9EFDE97E0FAC79368245E(L_6, AsyncTaskMethodBuilder_1_get_Task_mC842CA788344F6A0EAB9EFDE97E0FAC79368245E_RuntimeMethod_var);
		return L_7;
	}
}
// NativeGallery/ImageProperties NativeGallery::GetImageProperties(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ImageProperties_t7C971D51A4992A01CD205754169B919B56696F59 NativeGallery_GetImageProperties_mD9D7562C327369A4FEE99EF08D2A0F6A1BEE0376 (String_t* ___0_imagePath, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0CA4721FC9D82D780671DE2AB61257837402697D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral23DF9991B71463C240582D176E347E7E47AEFF5A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3E96C9BB1B953A85290371E8CE7BB3F3ABB307CC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B9B40AAD718882F5C0B95FE844E4AA92BD49C42);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral75E05143EB132AAA8A22B48813DB8E6047380821);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral985B72B30ECE05DD4EF5FE142CEE0FB8BF53A98C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA15C898F015A9B0BC3268E8883CD03008A56DE26);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAFF4AA19F30B5DC5A240F413D92917103536F1AD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCB4507437E3E619ECBAD84410155675EBEB3DB3F);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	String_t* V_3 = NULL;
	int32_t V_4 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_5 = NULL;
	int32_t V_6 = 0;
	String_t* V_7 = NULL;
	{
		// if( !File.Exists( imagePath ) )
		String_t* L_0 = ___0_imagePath;
		bool L_1;
		L_1 = File_Exists_m95E329ABBE3EAD6750FE1989BBA6884457136D4A(L_0, NULL);
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		// throw new FileNotFoundException( "File not found at " + imagePath );
		String_t* L_2 = ___0_imagePath;
		String_t* L_3;
		L_3 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral491B4D9271839F0BD63211437BF7CEE5B2C6ADE9)), L_2, NULL);
		FileNotFoundException_t17F1B49AD996E4A60C87C7ADC9D3A25EB5808A9A* L_4 = (FileNotFoundException_t17F1B49AD996E4A60C87C7ADC9D3A25EB5808A9A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FileNotFoundException_t17F1B49AD996E4A60C87C7ADC9D3A25EB5808A9A_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		FileNotFoundException__ctor_mA8C9C93DB8C5B96D6B5E59B2AE07154F265FB1A1(L_4, L_3, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NativeGallery_GetImageProperties_mD9D7562C327369A4FEE99EF08D2A0F6A1BEE0376_RuntimeMethod_var)));
	}

IL_0019:
	{
		// string value = _NativeGallery_GetImageProperties( imagePath );
		String_t* L_5 = ___0_imagePath;
		String_t* L_6;
		L_6 = NativeGallery__NativeGallery_GetImageProperties_mD2BBA09FAEB28B07C78B81C3A0AD3159B631AB52(L_5, NULL);
		V_0 = L_6;
		// int width = 0, height = 0;
		V_1 = 0;
		// int width = 0, height = 0;
		V_2 = 0;
		// string mimeType = null;
		V_3 = (String_t*)NULL;
		// ImageOrientation orientation = ImageOrientation.Unknown;
		V_4 = (-1);
		// if( !string.IsNullOrEmpty( value ) )
		String_t* L_7 = V_0;
		bool L_8;
		L_8 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_7, NULL);
		if (L_8)
		{
			goto IL_0115;
		}
	}
	{
		// string[] properties = value.Split( '>' );
		String_t* L_9 = V_0;
		NullCheck(L_9);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10;
		L_10 = String_Split_m9530B73D02054692283BF35C3A27C8F2230946F4(L_9, ((int32_t)62), 0, NULL);
		V_5 = L_10;
		// if( properties != null && properties.Length >= 4 )
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = V_5;
		if (!L_11)
		{
			goto IL_0115;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = V_5;
		NullCheck(L_12);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length))) < ((int32_t)4)))
		{
			goto IL_0115;
		}
	}
	{
		// if( !int.TryParse( properties[0].Trim(), out width ) )
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = V_5;
		NullCheck(L_13);
		int32_t L_14 = 0;
		String_t* L_15 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		NullCheck(L_15);
		String_t* L_16;
		L_16 = String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5(L_15, NULL);
		bool L_17;
		L_17 = Int32_TryParse_mC928DE2FEC1C35ED5298BDDCA9868076E94B8A21(L_16, (&V_1), NULL);
		if (L_17)
		{
			goto IL_0064;
		}
	}
	{
		// width = 0;
		V_1 = 0;
	}

IL_0064:
	{
		// if( !int.TryParse( properties[1].Trim(), out height ) )
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_18 = V_5;
		NullCheck(L_18);
		int32_t L_19 = 1;
		String_t* L_20 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		NullCheck(L_20);
		String_t* L_21;
		L_21 = String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5(L_20, NULL);
		bool L_22;
		L_22 = Int32_TryParse_mC928DE2FEC1C35ED5298BDDCA9868076E94B8A21(L_21, (&V_2), NULL);
		if (L_22)
		{
			goto IL_0078;
		}
	}
	{
		// height = 0;
		V_2 = 0;
	}

IL_0078:
	{
		// mimeType = properties[2].Trim();
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_23 = V_5;
		NullCheck(L_23);
		int32_t L_24 = 2;
		String_t* L_25 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		NullCheck(L_25);
		String_t* L_26;
		L_26 = String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5(L_25, NULL);
		V_3 = L_26;
		// if( mimeType.Length == 0 )
		String_t* L_27 = V_3;
		NullCheck(L_27);
		int32_t L_28;
		L_28 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_27, NULL);
		if (L_28)
		{
			goto IL_00ff;
		}
	}
	{
		// string extension = Path.GetExtension( imagePath ).ToLowerInvariant();
		String_t* L_29 = ___0_imagePath;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_30;
		L_30 = Path_GetExtension_m6FEAA9E14451BFD210B9D1AEC2430C813F570FE5(L_29, NULL);
		NullCheck(L_30);
		String_t* L_31;
		L_31 = String_ToLowerInvariant_mBE32C93DE27C5353FEA3FA654FC1DDBE3D0EB0F2(L_30, NULL);
		V_7 = L_31;
		// if( extension == ".png" )
		String_t* L_32 = V_7;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteralA15C898F015A9B0BC3268E8883CD03008A56DE26, NULL);
		if (!L_33)
		{
			goto IL_00ad;
		}
	}
	{
		// mimeType = "image/png";
		V_3 = _stringLiteral75E05143EB132AAA8A22B48813DB8E6047380821;
		goto IL_00ff;
	}

IL_00ad:
	{
		// else if( extension == ".jpg" || extension == ".jpeg" )
		String_t* L_34 = V_7;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteral23DF9991B71463C240582D176E347E7E47AEFF5A, NULL);
		if (L_35)
		{
			goto IL_00c9;
		}
	}
	{
		String_t* L_36 = V_7;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteral4B9B40AAD718882F5C0B95FE844E4AA92BD49C42, NULL);
		if (!L_37)
		{
			goto IL_00d1;
		}
	}

IL_00c9:
	{
		// mimeType = "image/jpeg";
		V_3 = _stringLiteral3E96C9BB1B953A85290371E8CE7BB3F3ABB307CC;
		goto IL_00ff;
	}

IL_00d1:
	{
		// else if( extension == ".gif" )
		String_t* L_38 = V_7;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteral0CA4721FC9D82D780671DE2AB61257837402697D, NULL);
		if (!L_39)
		{
			goto IL_00e7;
		}
	}
	{
		// mimeType = "image/gif";
		V_3 = _stringLiteralAFF4AA19F30B5DC5A240F413D92917103536F1AD;
		goto IL_00ff;
	}

IL_00e7:
	{
		// else if( extension == ".bmp" )
		String_t* L_40 = V_7;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteral985B72B30ECE05DD4EF5FE142CEE0FB8BF53A98C, NULL);
		if (!L_41)
		{
			goto IL_00fd;
		}
	}
	{
		// mimeType = "image/bmp";
		V_3 = _stringLiteralCB4507437E3E619ECBAD84410155675EBEB3DB3F;
		goto IL_00ff;
	}

IL_00fd:
	{
		// mimeType = null;
		V_3 = (String_t*)NULL;
	}

IL_00ff:
	{
		// if( int.TryParse( properties[3].Trim(), out orientationInt ) )
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_42 = V_5;
		NullCheck(L_42);
		int32_t L_43 = 3;
		String_t* L_44 = (L_42)->GetAt(static_cast<il2cpp_array_size_t>(L_43));
		NullCheck(L_44);
		String_t* L_45;
		L_45 = String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5(L_44, NULL);
		bool L_46;
		L_46 = Int32_TryParse_mC928DE2FEC1C35ED5298BDDCA9868076E94B8A21(L_45, (&V_6), NULL);
		if (!L_46)
		{
			goto IL_0115;
		}
	}
	{
		// orientation = (ImageOrientation) orientationInt;
		int32_t L_47 = V_6;
		V_4 = L_47;
	}

IL_0115:
	{
		// return new ImageProperties( width, height, mimeType, orientation );
		int32_t L_48 = V_1;
		int32_t L_49 = V_2;
		String_t* L_50 = V_3;
		int32_t L_51 = V_4;
		ImageProperties_t7C971D51A4992A01CD205754169B919B56696F59 L_52;
		memset((&L_52), 0, sizeof(L_52));
		ImageProperties__ctor_m544A791184FB701B39531F6E5CB3C023856797E3((&L_52), L_48, L_49, L_50, L_51, /*hidden argument*/NULL);
		return L_52;
	}
}
// NativeGallery/VideoProperties NativeGallery::GetVideoProperties(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VideoProperties_t11DD7C4EACACE50EA3D710F3E2595A68B17103A5 NativeGallery_GetVideoProperties_mE39CF69BF80843823CDC1B153B29B38413804E95 (String_t* ___0_videoPath, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int64_t V_3 = 0;
	float V_4 = 0.0f;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_5 = NULL;
	{
		// if( !File.Exists( videoPath ) )
		String_t* L_0 = ___0_videoPath;
		bool L_1;
		L_1 = File_Exists_m95E329ABBE3EAD6750FE1989BBA6884457136D4A(L_0, NULL);
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		// throw new FileNotFoundException( "File not found at " + videoPath );
		String_t* L_2 = ___0_videoPath;
		String_t* L_3;
		L_3 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral491B4D9271839F0BD63211437BF7CEE5B2C6ADE9)), L_2, NULL);
		FileNotFoundException_t17F1B49AD996E4A60C87C7ADC9D3A25EB5808A9A* L_4 = (FileNotFoundException_t17F1B49AD996E4A60C87C7ADC9D3A25EB5808A9A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FileNotFoundException_t17F1B49AD996E4A60C87C7ADC9D3A25EB5808A9A_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		FileNotFoundException__ctor_mA8C9C93DB8C5B96D6B5E59B2AE07154F265FB1A1(L_4, L_3, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NativeGallery_GetVideoProperties_mE39CF69BF80843823CDC1B153B29B38413804E95_RuntimeMethod_var)));
	}

IL_0019:
	{
		// string value = _NativeGallery_GetVideoProperties( videoPath );
		String_t* L_5 = ___0_videoPath;
		String_t* L_6;
		L_6 = NativeGallery__NativeGallery_GetVideoProperties_mB575DF63954F28F125784B45734E8124CB2B050B(L_5, NULL);
		V_0 = L_6;
		// int width = 0, height = 0;
		V_1 = 0;
		// int width = 0, height = 0;
		V_2 = 0;
		// long duration = 0L;
		V_3 = ((int64_t)0);
		// float rotation = 0f;
		V_4 = (0.0f);
		// if( !string.IsNullOrEmpty( value ) )
		String_t* L_7 = V_0;
		bool L_8;
		L_8 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_7, NULL);
		if (L_8)
		{
			goto IL_00b5;
		}
	}
	{
		// string[] properties = value.Split( '>' );
		String_t* L_9 = V_0;
		NullCheck(L_9);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10;
		L_10 = String_Split_m9530B73D02054692283BF35C3A27C8F2230946F4(L_9, ((int32_t)62), 0, NULL);
		V_5 = L_10;
		// if( properties != null && properties.Length >= 4 )
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = V_5;
		if (!L_11)
		{
			goto IL_00b5;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = V_5;
		NullCheck(L_12);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length))) < ((int32_t)4)))
		{
			goto IL_00b5;
		}
	}
	{
		// if( !int.TryParse( properties[0].Trim(), out width ) )
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = V_5;
		NullCheck(L_13);
		int32_t L_14 = 0;
		String_t* L_15 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		NullCheck(L_15);
		String_t* L_16;
		L_16 = String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5(L_15, NULL);
		bool L_17;
		L_17 = Int32_TryParse_mC928DE2FEC1C35ED5298BDDCA9868076E94B8A21(L_16, (&V_1), NULL);
		if (L_17)
		{
			goto IL_0060;
		}
	}
	{
		// width = 0;
		V_1 = 0;
	}

IL_0060:
	{
		// if( !int.TryParse( properties[1].Trim(), out height ) )
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_18 = V_5;
		NullCheck(L_18);
		int32_t L_19 = 1;
		String_t* L_20 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		NullCheck(L_20);
		String_t* L_21;
		L_21 = String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5(L_20, NULL);
		bool L_22;
		L_22 = Int32_TryParse_mC928DE2FEC1C35ED5298BDDCA9868076E94B8A21(L_21, (&V_2), NULL);
		if (L_22)
		{
			goto IL_0074;
		}
	}
	{
		// height = 0;
		V_2 = 0;
	}

IL_0074:
	{
		// if( !long.TryParse( properties[2].Trim(), out duration ) )
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_23 = V_5;
		NullCheck(L_23);
		int32_t L_24 = 2;
		String_t* L_25 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		NullCheck(L_25);
		String_t* L_26;
		L_26 = String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5(L_25, NULL);
		bool L_27;
		L_27 = Int64_TryParse_m3FC0128C89CC2331239FC2A0A749BF33455F03D2(L_26, (&V_3), NULL);
		if (L_27)
		{
			goto IL_0089;
		}
	}
	{
		// duration = 0L;
		V_3 = ((int64_t)0);
	}

IL_0089:
	{
		// if( !float.TryParse( properties[3].Trim().Replace( ',', '.' ), NumberStyles.Float, CultureInfo.InvariantCulture, out rotation ) )
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_28 = V_5;
		NullCheck(L_28);
		int32_t L_29 = 3;
		String_t* L_30 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		NullCheck(L_30);
		String_t* L_31;
		L_31 = String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5(L_30, NULL);
		NullCheck(L_31);
		String_t* L_32;
		L_32 = String_Replace_m86403DC5F422D8D5E1CFAAF255B103CB807EDAAF(L_31, ((int32_t)44), ((int32_t)46), NULL);
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_33;
		L_33 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		bool L_34;
		L_34 = Single_TryParse_mFB8CC32F0016FBB6EFCB97953CF3515767EB6431(L_32, ((int32_t)167), L_33, (&V_4), NULL);
		if (L_34)
		{
			goto IL_00b5;
		}
	}
	{
		// rotation = 0f;
		V_4 = (0.0f);
	}

IL_00b5:
	{
		// if( rotation == -90f )
		float L_35 = V_4;
		if ((!(((float)L_35) == ((float)(-90.0f)))))
		{
			goto IL_00c5;
		}
	}
	{
		// rotation = 270f;
		V_4 = (270.0f);
	}

IL_00c5:
	{
		// return new VideoProperties( width, height, duration, rotation );
		int32_t L_36 = V_1;
		int32_t L_37 = V_2;
		int64_t L_38 = V_3;
		float L_39 = V_4;
		VideoProperties_t11DD7C4EACACE50EA3D710F3E2595A68B17103A5 L_40;
		memset((&L_40), 0, sizeof(L_40));
		VideoProperties__ctor_mF5D60E1ACB2B90A080BDB94C6362E49F835B2BFD((&L_40), L_36, L_37, L_38, L_39, /*hidden argument*/NULL);
		return L_40;
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
// Conversion methods for marshalling of: NativeGallery/ImageProperties
IL2CPP_EXTERN_C void ImageProperties_t7C971D51A4992A01CD205754169B919B56696F59_marshal_pinvoke(const ImageProperties_t7C971D51A4992A01CD205754169B919B56696F59& unmarshaled, ImageProperties_t7C971D51A4992A01CD205754169B919B56696F59_marshaled_pinvoke& marshaled)
{
	marshaled.___width_0 = unmarshaled.___width_0;
	marshaled.___height_1 = unmarshaled.___height_1;
	marshaled.___mimeType_2 = il2cpp_codegen_marshal_string(unmarshaled.___mimeType_2);
	marshaled.___orientation_3 = unmarshaled.___orientation_3;
}
IL2CPP_EXTERN_C void ImageProperties_t7C971D51A4992A01CD205754169B919B56696F59_marshal_pinvoke_back(const ImageProperties_t7C971D51A4992A01CD205754169B919B56696F59_marshaled_pinvoke& marshaled, ImageProperties_t7C971D51A4992A01CD205754169B919B56696F59& unmarshaled)
{
	int32_t unmarshaledwidth_temp_0 = 0;
	unmarshaledwidth_temp_0 = marshaled.___width_0;
	unmarshaled.___width_0 = unmarshaledwidth_temp_0;
	int32_t unmarshaledheight_temp_1 = 0;
	unmarshaledheight_temp_1 = marshaled.___height_1;
	unmarshaled.___height_1 = unmarshaledheight_temp_1;
	unmarshaled.___mimeType_2 = il2cpp_codegen_marshal_string_result(marshaled.___mimeType_2);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___mimeType_2), (void*)il2cpp_codegen_marshal_string_result(marshaled.___mimeType_2));
	int32_t unmarshaledorientation_temp_3 = 0;
	unmarshaledorientation_temp_3 = marshaled.___orientation_3;
	unmarshaled.___orientation_3 = unmarshaledorientation_temp_3;
}
// Conversion method for clean up from marshalling of: NativeGallery/ImageProperties
IL2CPP_EXTERN_C void ImageProperties_t7C971D51A4992A01CD205754169B919B56696F59_marshal_pinvoke_cleanup(ImageProperties_t7C971D51A4992A01CD205754169B919B56696F59_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___mimeType_2);
	marshaled.___mimeType_2 = NULL;
}
// Conversion methods for marshalling of: NativeGallery/ImageProperties
IL2CPP_EXTERN_C void ImageProperties_t7C971D51A4992A01CD205754169B919B56696F59_marshal_com(const ImageProperties_t7C971D51A4992A01CD205754169B919B56696F59& unmarshaled, ImageProperties_t7C971D51A4992A01CD205754169B919B56696F59_marshaled_com& marshaled)
{
	marshaled.___width_0 = unmarshaled.___width_0;
	marshaled.___height_1 = unmarshaled.___height_1;
	marshaled.___mimeType_2 = il2cpp_codegen_marshal_bstring(unmarshaled.___mimeType_2);
	marshaled.___orientation_3 = unmarshaled.___orientation_3;
}
IL2CPP_EXTERN_C void ImageProperties_t7C971D51A4992A01CD205754169B919B56696F59_marshal_com_back(const ImageProperties_t7C971D51A4992A01CD205754169B919B56696F59_marshaled_com& marshaled, ImageProperties_t7C971D51A4992A01CD205754169B919B56696F59& unmarshaled)
{
	int32_t unmarshaledwidth_temp_0 = 0;
	unmarshaledwidth_temp_0 = marshaled.___width_0;
	unmarshaled.___width_0 = unmarshaledwidth_temp_0;
	int32_t unmarshaledheight_temp_1 = 0;
	unmarshaledheight_temp_1 = marshaled.___height_1;
	unmarshaled.___height_1 = unmarshaledheight_temp_1;
	unmarshaled.___mimeType_2 = il2cpp_codegen_marshal_bstring_result(marshaled.___mimeType_2);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___mimeType_2), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___mimeType_2));
	int32_t unmarshaledorientation_temp_3 = 0;
	unmarshaledorientation_temp_3 = marshaled.___orientation_3;
	unmarshaled.___orientation_3 = unmarshaledorientation_temp_3;
}
// Conversion method for clean up from marshalling of: NativeGallery/ImageProperties
IL2CPP_EXTERN_C void ImageProperties_t7C971D51A4992A01CD205754169B919B56696F59_marshal_com_cleanup(ImageProperties_t7C971D51A4992A01CD205754169B919B56696F59_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___mimeType_2);
	marshaled.___mimeType_2 = NULL;
}
// System.Void NativeGallery/ImageProperties::.ctor(System.Int32,System.Int32,System.String,NativeGallery/ImageOrientation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageProperties__ctor_m544A791184FB701B39531F6E5CB3C023856797E3 (ImageProperties_t7C971D51A4992A01CD205754169B919B56696F59* __this, int32_t ___0_width, int32_t ___1_height, String_t* ___2_mimeType, int32_t ___3_orientation, const RuntimeMethod* method) 
{
	{
		// this.width = width;
		int32_t L_0 = ___0_width;
		__this->___width_0 = L_0;
		// this.height = height;
		int32_t L_1 = ___1_height;
		__this->___height_1 = L_1;
		// this.mimeType = mimeType;
		String_t* L_2 = ___2_mimeType;
		__this->___mimeType_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mimeType_2), (void*)L_2);
		// this.orientation = orientation;
		int32_t L_3 = ___3_orientation;
		__this->___orientation_3 = L_3;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ImageProperties__ctor_m544A791184FB701B39531F6E5CB3C023856797E3_AdjustorThunk (RuntimeObject* __this, int32_t ___0_width, int32_t ___1_height, String_t* ___2_mimeType, int32_t ___3_orientation, const RuntimeMethod* method)
{
	ImageProperties_t7C971D51A4992A01CD205754169B919B56696F59* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ImageProperties_t7C971D51A4992A01CD205754169B919B56696F59*>(__this + _offset);
	ImageProperties__ctor_m544A791184FB701B39531F6E5CB3C023856797E3(_thisAdjusted, ___0_width, ___1_height, ___2_mimeType, ___3_orientation, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void NativeGallery/VideoProperties::.ctor(System.Int32,System.Int32,System.Int64,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoProperties__ctor_mF5D60E1ACB2B90A080BDB94C6362E49F835B2BFD (VideoProperties_t11DD7C4EACACE50EA3D710F3E2595A68B17103A5* __this, int32_t ___0_width, int32_t ___1_height, int64_t ___2_duration, float ___3_rotation, const RuntimeMethod* method) 
{
	{
		// this.width = width;
		int32_t L_0 = ___0_width;
		__this->___width_0 = L_0;
		// this.height = height;
		int32_t L_1 = ___1_height;
		__this->___height_1 = L_1;
		// this.duration = duration;
		int64_t L_2 = ___2_duration;
		__this->___duration_2 = L_2;
		// this.rotation = rotation;
		float L_3 = ___3_rotation;
		__this->___rotation_3 = L_3;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void VideoProperties__ctor_mF5D60E1ACB2B90A080BDB94C6362E49F835B2BFD_AdjustorThunk (RuntimeObject* __this, int32_t ___0_width, int32_t ___1_height, int64_t ___2_duration, float ___3_rotation, const RuntimeMethod* method)
{
	VideoProperties_t11DD7C4EACACE50EA3D710F3E2595A68B17103A5* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<VideoProperties_t11DD7C4EACACE50EA3D710F3E2595A68B17103A5*>(__this + _offset);
	VideoProperties__ctor_mF5D60E1ACB2B90A080BDB94C6362E49F835B2BFD(_thisAdjusted, ___0_width, ___1_height, ___2_duration, ___3_rotation, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void PermissionCallback_Invoke_mDFCBF3C4C5BFC95CBDC25A75169BA876EE76BB40_Multicast(PermissionCallback_t43E69EC9D59F3ADAC411FBE19A499BCB840180D4* __this, int32_t ___0_permission, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		PermissionCallback_t43E69EC9D59F3ADAC411FBE19A499BCB840180D4* currentDelegate = reinterpret_cast<PermissionCallback_t43E69EC9D59F3ADAC411FBE19A499BCB840180D4*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_permission, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void PermissionCallback_Invoke_mDFCBF3C4C5BFC95CBDC25A75169BA876EE76BB40_OpenInst(PermissionCallback_t43E69EC9D59F3ADAC411FBE19A499BCB840180D4* __this, int32_t ___0_permission, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_permission, method);
}
void PermissionCallback_Invoke_mDFCBF3C4C5BFC95CBDC25A75169BA876EE76BB40_OpenStatic(PermissionCallback_t43E69EC9D59F3ADAC411FBE19A499BCB840180D4* __this, int32_t ___0_permission, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_permission, method);
}
void PermissionCallback_Invoke_mDFCBF3C4C5BFC95CBDC25A75169BA876EE76BB40_OpenStaticInvoker(PermissionCallback_t43E69EC9D59F3ADAC411FBE19A499BCB840180D4* __this, int32_t ___0_permission, const RuntimeMethod* method)
{
	InvokerActionInvoker1< int32_t >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_permission);
}
void PermissionCallback_Invoke_mDFCBF3C4C5BFC95CBDC25A75169BA876EE76BB40_ClosedStaticInvoker(PermissionCallback_t43E69EC9D59F3ADAC411FBE19A499BCB840180D4* __this, int32_t ___0_permission, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, int32_t >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_permission);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_PermissionCallback_t43E69EC9D59F3ADAC411FBE19A499BCB840180D4 (PermissionCallback_t43E69EC9D59F3ADAC411FBE19A499BCB840180D4* __this, int32_t ___0_permission, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___0_permission);

}
// System.Void NativeGallery/PermissionCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PermissionCallback__ctor_mBD077D6A9E8984D7DF933B1BB0C704832503A8E2 (PermissionCallback_t43E69EC9D59F3ADAC411FBE19A499BCB840180D4* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = (intptr_t)il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&PermissionCallback_Invoke_mDFCBF3C4C5BFC95CBDC25A75169BA876EE76BB40_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&PermissionCallback_Invoke_mDFCBF3C4C5BFC95CBDC25A75169BA876EE76BB40_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&PermissionCallback_Invoke_mDFCBF3C4C5BFC95CBDC25A75169BA876EE76BB40_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = __this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = __this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&PermissionCallback_Invoke_mDFCBF3C4C5BFC95CBDC25A75169BA876EE76BB40_Multicast;
}
// System.Void NativeGallery/PermissionCallback::Invoke(NativeGallery/Permission)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PermissionCallback_Invoke_mDFCBF3C4C5BFC95CBDC25A75169BA876EE76BB40 (PermissionCallback_t43E69EC9D59F3ADAC411FBE19A499BCB840180D4* __this, int32_t ___0_permission, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_permission, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult NativeGallery/PermissionCallback::BeginInvoke(NativeGallery/Permission,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PermissionCallback_BeginInvoke_m3C5989D51B318954F82FE4EBA6CF6C383840B95D (PermissionCallback_t43E69EC9D59F3ADAC411FBE19A499BCB840180D4* __this, int32_t ___0_permission, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Permission_t3F3DCD2A60B865EED3451B39DB6A376E75C8F831_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Permission_t3F3DCD2A60B865EED3451B39DB6A376E75C8F831_il2cpp_TypeInfo_var, &___0_permission);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
// System.Void NativeGallery/PermissionCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PermissionCallback_EndInvoke_m81AA5F8C453BC17C80D33C20E734962BA8DF30EA (PermissionCallback_t43E69EC9D59F3ADAC411FBE19A499BCB840180D4* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
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
void MediaSaveCallback_Invoke_mD97247E7132D61D5D8C1E3063FEF0C09205E925C_Multicast(MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D* __this, bool ___0_success, String_t* ___1_path, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D* currentDelegate = reinterpret_cast<MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, bool, String_t*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_success, ___1_path, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void MediaSaveCallback_Invoke_mD97247E7132D61D5D8C1E3063FEF0C09205E925C_OpenInst(MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D* __this, bool ___0_success, String_t* ___1_path, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (bool, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_success, ___1_path, method);
}
void MediaSaveCallback_Invoke_mD97247E7132D61D5D8C1E3063FEF0C09205E925C_OpenStatic(MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D* __this, bool ___0_success, String_t* ___1_path, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (bool, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_success, ___1_path, method);
}
void MediaSaveCallback_Invoke_mD97247E7132D61D5D8C1E3063FEF0C09205E925C_OpenStaticInvoker(MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D* __this, bool ___0_success, String_t* ___1_path, const RuntimeMethod* method)
{
	InvokerActionInvoker2< bool, String_t* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_success, ___1_path);
}
void MediaSaveCallback_Invoke_mD97247E7132D61D5D8C1E3063FEF0C09205E925C_ClosedStaticInvoker(MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D* __this, bool ___0_success, String_t* ___1_path, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, bool, String_t* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_success, ___1_path);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D (MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D* __this, bool ___0_success, String_t* ___1_path, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t, char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___1_path' to native representation
	char* ____1_path_marshaled = NULL;
	____1_path_marshaled = il2cpp_codegen_marshal_string(___1_path);

	// Native function invocation
	il2cppPInvokeFunc(static_cast<int32_t>(___0_success), ____1_path_marshaled);

	// Marshaling cleanup of parameter '___1_path' native representation
	il2cpp_codegen_marshal_free(____1_path_marshaled);
	____1_path_marshaled = NULL;

}
// System.Void NativeGallery/MediaSaveCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MediaSaveCallback__ctor_mC807D0DC716FCEACAB7FC85AD2916F702D92E5EF (MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = (intptr_t)il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&MediaSaveCallback_Invoke_mD97247E7132D61D5D8C1E3063FEF0C09205E925C_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&MediaSaveCallback_Invoke_mD97247E7132D61D5D8C1E3063FEF0C09205E925C_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&MediaSaveCallback_Invoke_mD97247E7132D61D5D8C1E3063FEF0C09205E925C_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = __this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = __this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&MediaSaveCallback_Invoke_mD97247E7132D61D5D8C1E3063FEF0C09205E925C_Multicast;
}
// System.Void NativeGallery/MediaSaveCallback::Invoke(System.Boolean,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MediaSaveCallback_Invoke_mD97247E7132D61D5D8C1E3063FEF0C09205E925C (MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D* __this, bool ___0_success, String_t* ___1_path, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, bool, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_success, ___1_path, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult NativeGallery/MediaSaveCallback::BeginInvoke(System.Boolean,System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MediaSaveCallback_BeginInvoke_m43DF1543431C55DFD9BCFF30017FA4F4FC2BEB72 (MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D* __this, bool ___0_success, String_t* ___1_path, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___2_callback, RuntimeObject* ___3_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &___0_success);
	__d_args[1] = ___1_path;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___2_callback, (RuntimeObject*)___3_object);
}
// System.Void NativeGallery/MediaSaveCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MediaSaveCallback_EndInvoke_mE988BF2B3A6EBA13C068BF8BAAFF8B9C2E4298BE (MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
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
void MediaPickCallback_Invoke_m25F1FD61CF9FE4C835CD3298D790CBB61691BC4E_Multicast(MediaPickCallback_tC207F6F3EEE18F64B03E23D5C9FA8C79517A5EB6* __this, String_t* ___0_path, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		MediaPickCallback_tC207F6F3EEE18F64B03E23D5C9FA8C79517A5EB6* currentDelegate = reinterpret_cast<MediaPickCallback_tC207F6F3EEE18F64B03E23D5C9FA8C79517A5EB6*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_path, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void MediaPickCallback_Invoke_m25F1FD61CF9FE4C835CD3298D790CBB61691BC4E_OpenInst(MediaPickCallback_tC207F6F3EEE18F64B03E23D5C9FA8C79517A5EB6* __this, String_t* ___0_path, const RuntimeMethod* method)
{
	NullCheck(___0_path);
	typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_path, method);
}
void MediaPickCallback_Invoke_m25F1FD61CF9FE4C835CD3298D790CBB61691BC4E_OpenStatic(MediaPickCallback_tC207F6F3EEE18F64B03E23D5C9FA8C79517A5EB6* __this, String_t* ___0_path, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_path, method);
}
void MediaPickCallback_Invoke_m25F1FD61CF9FE4C835CD3298D790CBB61691BC4E_OpenStaticInvoker(MediaPickCallback_tC207F6F3EEE18F64B03E23D5C9FA8C79517A5EB6* __this, String_t* ___0_path, const RuntimeMethod* method)
{
	InvokerActionInvoker1< String_t* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_path);
}
void MediaPickCallback_Invoke_m25F1FD61CF9FE4C835CD3298D790CBB61691BC4E_ClosedStaticInvoker(MediaPickCallback_tC207F6F3EEE18F64B03E23D5C9FA8C79517A5EB6* __this, String_t* ___0_path, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, String_t* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_path);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_MediaPickCallback_tC207F6F3EEE18F64B03E23D5C9FA8C79517A5EB6 (MediaPickCallback_tC207F6F3EEE18F64B03E23D5C9FA8C79517A5EB6* __this, String_t* ___0_path, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___0_path' to native representation
	char* ____0_path_marshaled = NULL;
	____0_path_marshaled = il2cpp_codegen_marshal_string(___0_path);

	// Native function invocation
	il2cppPInvokeFunc(____0_path_marshaled);

	// Marshaling cleanup of parameter '___0_path' native representation
	il2cpp_codegen_marshal_free(____0_path_marshaled);
	____0_path_marshaled = NULL;

}
// System.Void NativeGallery/MediaPickCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MediaPickCallback__ctor_m6772B2B8FB0ED8FC367118012A390E247874EA4D (MediaPickCallback_tC207F6F3EEE18F64B03E23D5C9FA8C79517A5EB6* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = (intptr_t)il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&MediaPickCallback_Invoke_m25F1FD61CF9FE4C835CD3298D790CBB61691BC4E_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&MediaPickCallback_Invoke_m25F1FD61CF9FE4C835CD3298D790CBB61691BC4E_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&MediaPickCallback_Invoke_m25F1FD61CF9FE4C835CD3298D790CBB61691BC4E_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = __this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&MediaPickCallback_Invoke_m25F1FD61CF9FE4C835CD3298D790CBB61691BC4E_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = __this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&MediaPickCallback_Invoke_m25F1FD61CF9FE4C835CD3298D790CBB61691BC4E_Multicast;
}
// System.Void NativeGallery/MediaPickCallback::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MediaPickCallback_Invoke_m25F1FD61CF9FE4C835CD3298D790CBB61691BC4E (MediaPickCallback_tC207F6F3EEE18F64B03E23D5C9FA8C79517A5EB6* __this, String_t* ___0_path, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_path, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult NativeGallery/MediaPickCallback::BeginInvoke(System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MediaPickCallback_BeginInvoke_m722D25075399F4136F7A72DEB486B16E6979F072 (MediaPickCallback_tC207F6F3EEE18F64B03E23D5C9FA8C79517A5EB6* __this, String_t* ___0_path, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___0_path;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
// System.Void NativeGallery/MediaPickCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MediaPickCallback_EndInvoke_m789929E1A570D84F6AE2F20FB722F42CC027E97D (MediaPickCallback_tC207F6F3EEE18F64B03E23D5C9FA8C79517A5EB6* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
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
void MediaPickMultipleCallback_Invoke_m5FE7D489E8659411C7E24DB7E892B439C9990F3D_Multicast(MediaPickMultipleCallback_t717A5D378751E2CACB53E6BA25386FF8DB41627B* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_paths, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		MediaPickMultipleCallback_t717A5D378751E2CACB53E6BA25386FF8DB41627B* currentDelegate = reinterpret_cast<MediaPickMultipleCallback_t717A5D378751E2CACB53E6BA25386FF8DB41627B*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_paths, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void MediaPickMultipleCallback_Invoke_m5FE7D489E8659411C7E24DB7E892B439C9990F3D_OpenInst(MediaPickMultipleCallback_t717A5D378751E2CACB53E6BA25386FF8DB41627B* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_paths, const RuntimeMethod* method)
{
	NullCheck(___0_paths);
	typedef void (*FunctionPointerType) (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_paths, method);
}
void MediaPickMultipleCallback_Invoke_m5FE7D489E8659411C7E24DB7E892B439C9990F3D_OpenStatic(MediaPickMultipleCallback_t717A5D378751E2CACB53E6BA25386FF8DB41627B* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_paths, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_paths, method);
}
void MediaPickMultipleCallback_Invoke_m5FE7D489E8659411C7E24DB7E892B439C9990F3D_OpenStaticInvoker(MediaPickMultipleCallback_t717A5D378751E2CACB53E6BA25386FF8DB41627B* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_paths, const RuntimeMethod* method)
{
	InvokerActionInvoker1< StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_paths);
}
void MediaPickMultipleCallback_Invoke_m5FE7D489E8659411C7E24DB7E892B439C9990F3D_ClosedStaticInvoker(MediaPickMultipleCallback_t717A5D378751E2CACB53E6BA25386FF8DB41627B* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_paths, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_paths);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_MediaPickMultipleCallback_t717A5D378751E2CACB53E6BA25386FF8DB41627B (MediaPickMultipleCallback_t717A5D378751E2CACB53E6BA25386FF8DB41627B* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_paths, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char**);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___0_paths' to native representation
	char** ____0_paths_marshaled = NULL;
	if (___0_paths != NULL)
	{
		il2cpp_array_size_t ____0_paths_Length = (___0_paths)->max_length;
		____0_paths_marshaled = il2cpp_codegen_marshal_allocate_array<char*>(____0_paths_Length + 1);
		(____0_paths_marshaled)[____0_paths_Length] = NULL;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(____0_paths_Length); i++)
		{
			(____0_paths_marshaled)[i] = il2cpp_codegen_marshal_string((___0_paths)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)));
		}
	}
	else
	{
		____0_paths_marshaled = NULL;
	}

	// Native function invocation
	il2cppPInvokeFunc(____0_paths_marshaled);

	// Marshaling cleanup of parameter '___0_paths' native representation
	if (____0_paths_marshaled != NULL)
	{
		const il2cpp_array_size_t ____0_paths_marshaled_CleanupLoopCount = (___0_paths != NULL) ? (___0_paths)->max_length : 0;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(____0_paths_marshaled_CleanupLoopCount); i++)
		{
			il2cpp_codegen_marshal_free((____0_paths_marshaled)[i]);
			(____0_paths_marshaled)[i] = NULL;
		}
		il2cpp_codegen_marshal_free(____0_paths_marshaled);
		____0_paths_marshaled = NULL;
	}

}
// System.Void NativeGallery/MediaPickMultipleCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MediaPickMultipleCallback__ctor_m51B26CBD435D26A6CC44DFA51D2C58D74D6F1CE9 (MediaPickMultipleCallback_t717A5D378751E2CACB53E6BA25386FF8DB41627B* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = (intptr_t)il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&MediaPickMultipleCallback_Invoke_m5FE7D489E8659411C7E24DB7E892B439C9990F3D_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&MediaPickMultipleCallback_Invoke_m5FE7D489E8659411C7E24DB7E892B439C9990F3D_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&MediaPickMultipleCallback_Invoke_m5FE7D489E8659411C7E24DB7E892B439C9990F3D_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = __this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&MediaPickMultipleCallback_Invoke_m5FE7D489E8659411C7E24DB7E892B439C9990F3D_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = __this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&MediaPickMultipleCallback_Invoke_m5FE7D489E8659411C7E24DB7E892B439C9990F3D_Multicast;
}
// System.Void NativeGallery/MediaPickMultipleCallback::Invoke(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MediaPickMultipleCallback_Invoke_m5FE7D489E8659411C7E24DB7E892B439C9990F3D (MediaPickMultipleCallback_t717A5D378751E2CACB53E6BA25386FF8DB41627B* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_paths, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_paths, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult NativeGallery/MediaPickMultipleCallback::BeginInvoke(System.String[],System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MediaPickMultipleCallback_BeginInvoke_m6321A0529E97A8616F70F36CC82830AD8B1A38C9 (MediaPickMultipleCallback_t717A5D378751E2CACB53E6BA25386FF8DB41627B* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_paths, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___0_paths;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
// System.Void NativeGallery/MediaPickMultipleCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MediaPickMultipleCallback_EndInvoke_m52B699AF968CA46D70F40ED0B433D9FE577753EF (MediaPickMultipleCallback_t717A5D378751E2CACB53E6BA25386FF8DB41627B* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
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
// System.Void NativeGallery/<>c__DisplayClass33_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass33_0__ctor_m9E7AB845CD89107E6D3BC0E9F4F0852D3C5FF3C9 (U3CU3Ec__DisplayClass33_0_t232C3A72571561AE5A8AD8E34F2BD240999EE360* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void NativeGallery/<>c__DisplayClass33_0::<RequestPermissionAsync>b__0(NativeGallery/Permission)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass33_0_U3CRequestPermissionAsyncU3Eb__0_m17B2413EE4C5C1964F01640BDB1B05175C27D444 (U3CU3Ec__DisplayClass33_0_t232C3A72571561AE5A8AD8E34F2BD240999EE360* __this, int32_t ___0_result, const RuntimeMethod* method) 
{
	{
		// NGPermissionCallbackiOS.Initialize( ( result ) => callback( ProcessPermission( result ) ) );
		PermissionCallback_t43E69EC9D59F3ADAC411FBE19A499BCB840180D4* L_0 = __this->___callback_0;
		int32_t L_1 = ___0_result;
		int32_t L_2;
		L_2 = NativeGallery_ProcessPermission_m3F58F5B053D477F86A94386CECBE2B138AA407F2(L_1, NULL);
		NullCheck(L_0);
		PermissionCallback_Invoke_mDFCBF3C4C5BFC95CBDC25A75169BA876EE76BB40_inline(L_0, L_2, NULL);
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
// System.Void NativeGallery/<>c__DisplayClass34_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass34_0__ctor_mE59E28BA217AB598C7FF19F21CC8A85690F43100 (U3CU3Ec__DisplayClass34_0_t7CEBF1C5F25C154499ED0F3F3834C55E0EF7BD59* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void NativeGallery/<>c__DisplayClass34_0::<RequestPermissionAsync>b__0(NativeGallery/Permission)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass34_0_U3CRequestPermissionAsyncU3Eb__0_mC0C631823789775F59071AC2DF83A1608EB2E7DD (U3CU3Ec__DisplayClass34_0_t7CEBF1C5F25C154499ED0F3F3834C55E0EF7BD59* __this, int32_t ___0_permission, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_SetResult_m5DC5B682780071790E0376414253BFEDEC4942D8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// RequestPermissionAsync( ( permission ) => tcs.SetResult( permission ), permissionType, mediaTypes );
		TaskCompletionSource_1_tA40684670E345C5786526437707F448A78DD4DC2* L_0 = __this->___tcs_0;
		int32_t L_1 = ___0_permission;
		NullCheck(L_0);
		TaskCompletionSource_1_SetResult_m5DC5B682780071790E0376414253BFEDEC4942D8(L_0, L_1, TaskCompletionSource_1_SetResult_m5DC5B682780071790E0376414253BFEDEC4942D8_RuntimeMethod_var);
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
// System.Void NativeGallery/<>c__DisplayClass68_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass68_0__ctor_m269B76D05990CFE4BB835A505ED98CA8D44E3488 (U3CU3Ec__DisplayClass68_0_t5FD6F0E0A673166A71D913C59D9368908630AA35* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.String NativeGallery/<>c__DisplayClass68_0::<LoadImageAtPathAsync>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec__DisplayClass68_0_U3CLoadImageAtPathAsyncU3Eb__0_mA2B43C5867AB2CA514B04A7A5E9BE2F6A099502C (U3CU3Ec__DisplayClass68_0_t5FD6F0E0A673166A71D913C59D9368908630AA35* __this, const RuntimeMethod* method) 
{
	{
		// string loadPath = await Task.Run( () => _NativeGallery_LoadImageAtPath( imagePath, temporaryImagePath, maxSize ) );
		String_t* L_0 = __this->___imagePath_0;
		String_t* L_1 = __this->___temporaryImagePath_1;
		int32_t L_2 = __this->___maxSize_2;
		String_t* L_3;
		L_3 = NativeGallery__NativeGallery_LoadImageAtPath_m307F352849636A1E1D1E46202B8F5A3EFB5F1744(L_0, L_1, L_2, NULL);
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
// System.Void NativeGallery/<LoadImageAtPathAsync>d__68::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadImageAtPathAsyncU3Ed__68_MoveNext_mA505FA18AF54BE2929AF74A6293411934E8F4427 (U3CLoadImageAtPathAsyncU3Ed__68_t6B30763C817CF0D323D6D6333BDCEC374A300CC4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6_TisU3CLoadImageAtPathAsyncU3Ed__68_t6B30763C817CF0D323D6D6333BDCEC374A300CC4_m1A1DC59029FA7642073FDFD35BB465C74749C6BB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisYieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A_TisU3CLoadImageAtPathAsyncU3Ed__68_t6B30763C817CF0D323D6D6333BDCEC374A300CC4_m86352FE7512D5B2CA00EBBAE87873A639192675A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetResult_mAB04B95B4490AB6E1FCB475391576D15606A2688_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t367387BB2C476D3F32DB12161B5FDC128DC3231C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_m82A392802A854576DC9525B87B0053B56201ABB9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_mE207C5509602B0BB59366E53CED6CC9B10A1F8A8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_m7727657658441E9D4CE9D3F8B532F9D65CB9CE1F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_Run_TisString_t_mDC4F0FD46A6DD4FE57DE5788DEF07F7F277821C3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass68_0_U3CLoadImageAtPathAsyncU3Eb__0_mA2B43C5867AB2CA514B04A7A5E9BE2F6A099502C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass68_0_t5FD6F0E0A673166A71D913C59D9368908630AA35_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral218F5A08519088A96BE3C1074984C53EA49F1CCA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral23DF9991B71463C240582D176E347E7E47AEFF5A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B9B40AAD718882F5C0B95FE844E4AA92BD49C42);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral76F1B85647641622FD867CE16AF6C584C5081BD4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE3287997374A5B6321B447152239EBE224279EB6);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* V_1 = NULL;
	String_t* V_2 = NULL;
	TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6 V_3;
	memset((&V_3), 0, sizeof(V_3));
	YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A V_4;
	memset((&V_4), 0, sizeof(V_4));
	YieldAwaitable_tFEA898DB9022A953958C3CF531E1477D135D3DAB V_5;
	memset((&V_5), 0, sizeof(V_5));
	String_t* V_6 = NULL;
	int32_t V_7 = 0;
	Exception_t* V_8 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	int32_t G_B34_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_0101_1;
			}
		}
		{
			int32_t L_2 = V_0;
			if ((((int32_t)L_2) == ((int32_t)1)))
			{
				goto IL_0154_1;
			}
		}
		{
			U3CU3Ec__DisplayClass68_0_t5FD6F0E0A673166A71D913C59D9368908630AA35* L_3 = (U3CU3Ec__DisplayClass68_0_t5FD6F0E0A673166A71D913C59D9368908630AA35*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass68_0_t5FD6F0E0A673166A71D913C59D9368908630AA35_il2cpp_TypeInfo_var);
			NullCheck(L_3);
			U3CU3Ec__DisplayClass68_0__ctor_m269B76D05990CFE4BB835A505ED98CA8D44E3488(L_3, NULL);
			__this->___U3CU3E8__1_5 = L_3;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E8__1_5), (void*)L_3);
			U3CU3Ec__DisplayClass68_0_t5FD6F0E0A673166A71D913C59D9368908630AA35* L_4 = __this->___U3CU3E8__1_5;
			String_t* L_5 = __this->___imagePath_2;
			NullCheck(L_4);
			L_4->___imagePath_0 = L_5;
			Il2CppCodeGenWriteBarrier((void**)(&L_4->___imagePath_0), (void*)L_5);
			U3CU3Ec__DisplayClass68_0_t5FD6F0E0A673166A71D913C59D9368908630AA35* L_6 = __this->___U3CU3E8__1_5;
			int32_t L_7 = __this->___maxSize_3;
			NullCheck(L_6);
			L_6->___maxSize_2 = L_7;
			// if( string.IsNullOrEmpty( imagePath ) )
			U3CU3Ec__DisplayClass68_0_t5FD6F0E0A673166A71D913C59D9368908630AA35* L_8 = __this->___U3CU3E8__1_5;
			NullCheck(L_8);
			String_t* L_9 = L_8->___imagePath_0;
			bool L_10;
			L_10 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_9, NULL);
			if (!L_10)
			{
				goto IL_005e_1;
			}
		}
		{
			// throw new ArgumentException( "Parameter 'imagePath' is null or empty!" );
			ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_11 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
			NullCheck(L_11);
			ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_11, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral18B82B6B7DC4FE1988BA61A3784D1768F6C925DF)), NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CLoadImageAtPathAsyncU3Ed__68_MoveNext_mA505FA18AF54BE2929AF74A6293411934E8F4427_RuntimeMethod_var)));
		}

IL_005e_1:
		{
			// if( !File.Exists( imagePath ) )
			U3CU3Ec__DisplayClass68_0_t5FD6F0E0A673166A71D913C59D9368908630AA35* L_12 = __this->___U3CU3E8__1_5;
			NullCheck(L_12);
			String_t* L_13 = L_12->___imagePath_0;
			bool L_14;
			L_14 = File_Exists_m95E329ABBE3EAD6750FE1989BBA6884457136D4A(L_13, NULL);
			if (L_14)
			{
				goto IL_008b_1;
			}
		}
		{
			// throw new FileNotFoundException( "File not found at " + imagePath );
			U3CU3Ec__DisplayClass68_0_t5FD6F0E0A673166A71D913C59D9368908630AA35* L_15 = __this->___U3CU3E8__1_5;
			NullCheck(L_15);
			String_t* L_16 = L_15->___imagePath_0;
			String_t* L_17;
			L_17 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral491B4D9271839F0BD63211437BF7CEE5B2C6ADE9)), L_16, NULL);
			FileNotFoundException_t17F1B49AD996E4A60C87C7ADC9D3A25EB5808A9A* L_18 = (FileNotFoundException_t17F1B49AD996E4A60C87C7ADC9D3A25EB5808A9A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FileNotFoundException_t17F1B49AD996E4A60C87C7ADC9D3A25EB5808A9A_il2cpp_TypeInfo_var)));
			NullCheck(L_18);
			FileNotFoundException__ctor_mA8C9C93DB8C5B96D6B5E59B2AE07154F265FB1A1(L_18, L_17, NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_18, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CLoadImageAtPathAsyncU3Ed__68_MoveNext_mA505FA18AF54BE2929AF74A6293411934E8F4427_RuntimeMethod_var)));
		}

IL_008b_1:
		{
			// if( maxSize <= 0 )
			U3CU3Ec__DisplayClass68_0_t5FD6F0E0A673166A71D913C59D9368908630AA35* L_19 = __this->___U3CU3E8__1_5;
			NullCheck(L_19);
			int32_t L_20 = L_19->___maxSize_2;
			if ((((int32_t)L_20) > ((int32_t)0)))
			{
				goto IL_00a9_1;
			}
		}
		{
			// maxSize = SystemInfo.maxTextureSize;
			U3CU3Ec__DisplayClass68_0_t5FD6F0E0A673166A71D913C59D9368908630AA35* L_21 = __this->___U3CU3E8__1_5;
			int32_t L_22;
			L_22 = SystemInfo_get_maxTextureSize_mEE557C09643222591C6F4D3F561D7A60CD403991(NULL);
			NullCheck(L_21);
			L_21->___maxSize_2 = L_22;
		}

IL_00a9_1:
		{
			// string temporaryImagePath = TemporaryImagePath; // Must be accessed from main thread
			U3CU3Ec__DisplayClass68_0_t5FD6F0E0A673166A71D913C59D9368908630AA35* L_23 = __this->___U3CU3E8__1_5;
			String_t* L_24;
			L_24 = NativeGallery_get_TemporaryImagePath_m05418FC4CC85508CDAE30BEDCC344C85884E1BF8(NULL);
			NullCheck(L_23);
			L_23->___temporaryImagePath_1 = L_24;
			Il2CppCodeGenWriteBarrier((void**)(&L_23->___temporaryImagePath_1), (void*)L_24);
			// string loadPath = await Task.Run( () => _NativeGallery_LoadImageAtPath( imagePath, temporaryImagePath, maxSize ) );
			U3CU3Ec__DisplayClass68_0_t5FD6F0E0A673166A71D913C59D9368908630AA35* L_25 = __this->___U3CU3E8__1_5;
			Func_1_t367387BB2C476D3F32DB12161B5FDC128DC3231C* L_26 = (Func_1_t367387BB2C476D3F32DB12161B5FDC128DC3231C*)il2cpp_codegen_object_new(Func_1_t367387BB2C476D3F32DB12161B5FDC128DC3231C_il2cpp_TypeInfo_var);
			NullCheck(L_26);
			Func_1__ctor_m27A68E928C1D9158EAAD261086B9BC424339327B(L_26, L_25, (intptr_t)((void*)U3CU3Ec__DisplayClass68_0_U3CLoadImageAtPathAsyncU3Eb__0_mA2B43C5867AB2CA514B04A7A5E9BE2F6A099502C_RuntimeMethod_var), NULL);
			il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
			Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* L_27;
			L_27 = Task_Run_TisString_t_mDC4F0FD46A6DD4FE57DE5788DEF07F7F277821C3(L_26, Task_Run_TisString_t_mDC4F0FD46A6DD4FE57DE5788DEF07F7F277821C3_RuntimeMethod_var);
			NullCheck(L_27);
			TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6 L_28;
			L_28 = Task_1_GetAwaiter_m7727657658441E9D4CE9D3F8B532F9D65CB9CE1F(L_27, Task_1_GetAwaiter_m7727657658441E9D4CE9D3F8B532F9D65CB9CE1F_RuntimeMethod_var);
			V_3 = L_28;
			bool L_29;
			L_29 = TaskAwaiter_1_get_IsCompleted_mE207C5509602B0BB59366E53CED6CC9B10A1F8A8((&V_3), TaskAwaiter_1_get_IsCompleted_mE207C5509602B0BB59366E53CED6CC9B10A1F8A8_RuntimeMethod_var);
			if (L_29)
			{
				goto IL_011d_1;
			}
		}
		{
			int32_t L_30 = 0;
			V_0 = L_30;
			__this->___U3CU3E1__state_0 = L_30;
			TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6 L_31 = V_3;
			__this->___U3CU3Eu__1_8 = L_31;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_8))->___m_task_0), (void*)NULL);
			AsyncTaskMethodBuilder_1_t05B41371EF0E362ABCB54C56063FAA1E00C69A8F* L_32 = (AsyncTaskMethodBuilder_1_t05B41371EF0E362ABCB54C56063FAA1E00C69A8F*)(&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6_TisU3CLoadImageAtPathAsyncU3Ed__68_t6B30763C817CF0D323D6D6333BDCEC374A300CC4_m1A1DC59029FA7642073FDFD35BB465C74749C6BB(L_32, (&V_3), __this, AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6_TisU3CLoadImageAtPathAsyncU3Ed__68_t6B30763C817CF0D323D6D6333BDCEC374A300CC4_m1A1DC59029FA7642073FDFD35BB465C74749C6BB_RuntimeMethod_var);
			goto IL_037e;
		}

IL_0101_1:
		{
			TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6 L_33 = __this->___U3CU3Eu__1_8;
			V_3 = L_33;
			TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6* L_34 = (TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6*)(&__this->___U3CU3Eu__1_8);
			il2cpp_codegen_initobj(L_34, sizeof(TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6));
			int32_t L_35 = (-1);
			V_0 = L_35;
			__this->___U3CU3E1__state_0 = L_35;
		}

IL_011d_1:
		{
			String_t* L_36;
			L_36 = TaskAwaiter_1_GetResult_m82A392802A854576DC9525B87B0053B56201ABB9((&V_3), TaskAwaiter_1_GetResult_m82A392802A854576DC9525B87B0053B56201ABB9_RuntimeMethod_var);
			V_2 = L_36;
			String_t* L_37 = V_2;
			__this->___U3CloadPathU3E5__2_6 = L_37;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CloadPathU3E5__2_6), (void*)L_37);
			// Texture2D result = null;
			__this->___U3CresultU3E5__3_7 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CresultU3E5__3_7), (void*)(Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)NULL);
			// using( UnityWebRequest www = UnityWebRequestTexture.GetTexture( "file://" + loadPath, markTextureNonReadable ) )
			String_t* L_38 = __this->___U3CloadPathU3E5__2_6;
			String_t* L_39;
			L_39 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral218F5A08519088A96BE3C1074984C53EA49F1CCA, L_38, NULL);
			bool L_40 = __this->___markTextureNonReadable_4;
			UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_41;
			L_41 = UnityWebRequestTexture_GetTexture_m45F855106C834021AC0DFA25FE31BA14C42693CA(L_39, L_40, NULL);
			__this->___U3CwwwU3E5__4_9 = L_41;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CwwwU3E5__4_9), (void*)L_41);
		}

IL_0154_1:
		{
		}
		{
			auto __finallyBlock = il2cpp::utils::Finally([&]
			{

FINALLY_021e_1:
				{// begin finally (depth: 2)
					{
						int32_t L_42 = V_0;
						if ((((int32_t)L_42) >= ((int32_t)0)))
						{
							goto IL_0235_1;
						}
					}
					{
						UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_43 = __this->___U3CwwwU3E5__4_9;
						if (!L_43)
						{
							goto IL_0235_1;
						}
					}
					{
						UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_44 = __this->___U3CwwwU3E5__4_9;
						NullCheck(L_44);
						InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_44);
					}

IL_0235_1:
					{
						return;
					}
				}// end finally (depth: 2)
			});
			try
			{// begin try (depth: 2)
				{
					int32_t L_45 = V_0;
					if ((((int32_t)L_45) == ((int32_t)1)))
					{
						goto IL_01a9_2;
					}
				}
				{
					// UnityWebRequestAsyncOperation asyncOperation = www.SendWebRequest();
					UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_46 = __this->___U3CwwwU3E5__4_9;
					NullCheck(L_46);
					UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* L_47;
					L_47 = UnityWebRequest_SendWebRequest_mA3CD13983BAA5074A0640EDD661B1E46E6DB6C13(L_46, NULL);
					__this->___U3CasyncOperationU3E5__5_10 = L_47;
					Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CasyncOperationU3E5__5_10), (void*)L_47);
					goto IL_01cd_2;
				}

IL_016c_2:
				{
					// await Task.Yield();
					il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
					YieldAwaitable_tFEA898DB9022A953958C3CF531E1477D135D3DAB L_48;
					L_48 = Task_Yield_m27EE257EF53788244C5B2E874C514C24C693F9B1(NULL);
					V_5 = L_48;
					YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A L_49;
					L_49 = YieldAwaitable_GetAwaiter_m359A05B8C1B9F3F1E9CAE29AD231C0987718DE5E((&V_5), NULL);
					V_4 = L_49;
					bool L_50;
					L_50 = YieldAwaiter_get_IsCompleted_m783B6E67654FDBF490A65AC59972AF6B985A9286((&V_4), NULL);
					if (L_50)
					{
						goto IL_01c6_2;
					}
				}
				{
					int32_t L_51 = 1;
					V_0 = L_51;
					__this->___U3CU3E1__state_0 = L_51;
					YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A L_52 = V_4;
					__this->___U3CU3Eu__2_11 = L_52;
					AsyncTaskMethodBuilder_1_t05B41371EF0E362ABCB54C56063FAA1E00C69A8F* L_53 = (AsyncTaskMethodBuilder_1_t05B41371EF0E362ABCB54C56063FAA1E00C69A8F*)(&__this->___U3CU3Et__builder_1);
					AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisYieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A_TisU3CLoadImageAtPathAsyncU3Ed__68_t6B30763C817CF0D323D6D6333BDCEC374A300CC4_m86352FE7512D5B2CA00EBBAE87873A639192675A(L_53, (&V_4), __this, AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisYieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A_TisU3CLoadImageAtPathAsyncU3Ed__68_t6B30763C817CF0D323D6D6333BDCEC374A300CC4_m86352FE7512D5B2CA00EBBAE87873A639192675A_RuntimeMethod_var);
					goto IL_037e;
				}

IL_01a9_2:
				{
					YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A L_54 = __this->___U3CU3Eu__2_11;
					V_4 = L_54;
					YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A* L_55 = (YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A*)(&__this->___U3CU3Eu__2_11);
					il2cpp_codegen_initobj(L_55, sizeof(YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A));
					int32_t L_56 = (-1);
					V_0 = L_56;
					__this->___U3CU3E1__state_0 = L_56;
				}

IL_01c6_2:
				{
					YieldAwaiter_GetResult_m83C9B35D4BBEB09AC5B560912436454D69794F07((&V_4), NULL);
				}

IL_01cd_2:
				{
					// while( !asyncOperation.isDone )
					UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* L_57 = __this->___U3CasyncOperationU3E5__5_10;
					NullCheck(L_57);
					bool L_58;
					L_58 = AsyncOperation_get_isDone_m68A0682777E2132FC033182E9F50303566AA354D(L_57, NULL);
					if (!L_58)
					{
						goto IL_016c_2;
					}
				}
				{
					// if( www.result != UnityWebRequest.Result.Success )
					UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_59 = __this->___U3CwwwU3E5__4_9;
					NullCheck(L_59);
					int32_t L_60;
					L_60 = UnityWebRequest_get_result_mEF83848C5FCFB5E307CE4B57E42BF02FC9AED449(L_59, NULL);
					if ((((int32_t)L_60) == ((int32_t)1)))
					{
						goto IL_0204_2;
					}
				}
				{
					// Debug.LogWarning( "Couldn't use UnityWebRequest to load image, falling back to LoadImage: " + www.error );
					UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_61 = __this->___U3CwwwU3E5__4_9;
					NullCheck(L_61);
					String_t* L_62;
					L_62 = UnityWebRequest_get_error_m20A5D813ED59118B7AA1D1E2EB5250178B1F5B6F(L_61, NULL);
					String_t* L_63;
					L_63 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralE3287997374A5B6321B447152239EBE224279EB6, L_62, NULL);
					il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
					Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(L_63, NULL);
					goto IL_0215_2;
				}

IL_0204_2:
				{
					// result = DownloadHandlerTexture.GetContent( www );
					UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_64 = __this->___U3CwwwU3E5__4_9;
					Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_65;
					L_65 = DownloadHandlerTexture_GetContent_m86BC88F58305A1B21C21CE7D82658197932EFB18(L_64, NULL);
					__this->___U3CresultU3E5__3_7 = L_65;
					Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CresultU3E5__3_7), (void*)L_65);
				}

IL_0215_2:
				{
					// }
					__this->___U3CasyncOperationU3E5__5_10 = (UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C*)NULL;
					Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CasyncOperationU3E5__5_10), (void*)(UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C*)NULL);
					goto IL_0236_1;
				}
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				__finallyBlock.StoreException(e.ex);
			}
		}

IL_0236_1:
		{
			__this->___U3CwwwU3E5__4_9 = (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F*)NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CwwwU3E5__4_9), (void*)(UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F*)NULL);
			// if( !result ) // Fallback to Texture2D.LoadImage if something goes wrong
			Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_66 = __this->___U3CresultU3E5__3_7;
			il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
			bool L_67;
			L_67 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_66, NULL);
			if (L_67)
			{
				goto IL_031e_1;
			}
		}
		{
			// string extension = Path.GetExtension( imagePath ).ToLowerInvariant();
			U3CU3Ec__DisplayClass68_0_t5FD6F0E0A673166A71D913C59D9368908630AA35* L_68 = __this->___U3CU3E8__1_5;
			NullCheck(L_68);
			String_t* L_69 = L_68->___imagePath_0;
			il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
			String_t* L_70;
			L_70 = Path_GetExtension_m6FEAA9E14451BFD210B9D1AEC2430C813F570FE5(L_69, NULL);
			NullCheck(L_70);
			String_t* L_71;
			L_71 = String_ToLowerInvariant_mBE32C93DE27C5353FEA3FA654FC1DDBE3D0EB0F2(L_70, NULL);
			V_6 = L_71;
			// TextureFormat format = ( extension == ".jpg" || extension == ".jpeg" ) ? TextureFormat.RGB24 : TextureFormat.RGBA32;
			String_t* L_72 = V_6;
			bool L_73;
			L_73 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_72, _stringLiteral23DF9991B71463C240582D176E347E7E47AEFF5A, NULL);
			if (L_73)
			{
				goto IL_0283_1;
			}
		}
		{
			String_t* L_74 = V_6;
			bool L_75;
			L_75 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_74, _stringLiteral4B9B40AAD718882F5C0B95FE844E4AA92BD49C42, NULL);
			if (L_75)
			{
				goto IL_0283_1;
			}
		}
		{
			G_B34_0 = 4;
			goto IL_0284_1;
		}

IL_0283_1:
		{
			G_B34_0 = 3;
		}

IL_0284_1:
		{
			V_7 = G_B34_0;
			// result = new Texture2D( 2, 2, format, true, false );
			int32_t L_76 = V_7;
			Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_77 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)il2cpp_codegen_object_new(Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
			NullCheck(L_77);
			Texture2D__ctor_mC3F84195D1DCEFC0536B3FBD40A8F8E865A4F32A(L_77, 2, 2, L_76, (bool)1, (bool)0, NULL);
			__this->___U3CresultU3E5__3_7 = L_77;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CresultU3E5__3_7), (void*)L_77);
		}
		{
			auto __finallyBlock = il2cpp::utils::Finally([&]
			{

FINALLY_02f1_1:
				{// begin finally (depth: 2)
					{
						int32_t L_78 = V_0;
						if ((((int32_t)L_78) >= ((int32_t)0)))
						{
							goto IL_031d_1;
						}
					}
					{
						// if( loadPath != imagePath )
						String_t* L_79 = __this->___U3CloadPathU3E5__2_6;
						U3CU3Ec__DisplayClass68_0_t5FD6F0E0A673166A71D913C59D9368908630AA35* L_80 = __this->___U3CU3E8__1_5;
						NullCheck(L_80);
						String_t* L_81 = L_80->___imagePath_0;
						bool L_82;
						L_82 = String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6(L_79, L_81, NULL);
						if (!L_82)
						{
							goto IL_031d_1;
						}
					}
					try
					{// begin try (depth: 3)
						// File.Delete( loadPath );
						String_t* L_83 = __this->___U3CloadPathU3E5__2_6;
						File_Delete_mE29829DA504F3E1B8BCB78F21E2862C9ED7EC386(L_83, NULL);
						// }
						goto IL_031d_1;
					}// end try (depth: 3)
					catch(Il2CppExceptionWrapper& e)
					{
						if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
						{
							IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
							goto CATCH_031a_1;
						}
						throw e;
					}

CATCH_031a_1:
					{// begin catch(System.Object)
						// catch { }
						// catch { }
						IL2CPP_POP_ACTIVE_EXCEPTION();
						goto IL_031d_1;
					}// end catch (depth: 3)

IL_031d_1:
					{
						return;
					}
				}// end finally (depth: 2)
			});
			try
			{// begin try (depth: 2)
				try
				{// begin try (depth: 3)
					{
						// if( !result.LoadImage( File.ReadAllBytes( loadPath ), markTextureNonReadable ) )
						Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_84 = __this->___U3CresultU3E5__3_7;
						String_t* L_85 = __this->___U3CloadPathU3E5__2_6;
						ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_86;
						L_86 = File_ReadAllBytes_m704CBBA3F130C94F5A3E0BE2A93D9E9D79DC3E24(L_85, NULL);
						bool L_87 = __this->___markTextureNonReadable_4;
						bool L_88;
						L_88 = ImageConversion_LoadImage_m292ADCEED268A0A0AAD532BAB8D1710CF0FC8AEF(L_84, L_86, L_87, NULL);
						if (L_88)
						{
							goto IL_02d9_3;
						}
					}
					{
						// Debug.LogWarning( "Couldn't load image at path: " + loadPath );
						String_t* L_89 = __this->___U3CloadPathU3E5__2_6;
						String_t* L_90;
						L_90 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral76F1B85647641622FD867CE16AF6C584C5081BD4, L_89, NULL);
						il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
						Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(L_90, NULL);
						// Object.DestroyImmediate( result );
						Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_91 = __this->___U3CresultU3E5__3_7;
						il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
						Object_DestroyImmediate_m6336EBC83591A5DB64EC70C92132824C6E258705(L_91, NULL);
						// return null;
						V_1 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)NULL;
						goto IL_0355;
					}

IL_02d9_3:
					{
						// }
						goto IL_02ef_2;
					}
				}// end try (depth: 3)
				catch(Il2CppExceptionWrapper& e)
				{
					if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
					{
						IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
						goto CATCH_02db_2;
					}
					throw e;
				}

CATCH_02db_2:
				{// begin catch(System.Exception)
					// Debug.LogException( e );
					il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
					Debug_LogException_mAB3F4DC7297ED8FBB49DAA718B70E59A6B0171B0(((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*)), NULL);
					// Object.DestroyImmediate( result );
					Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_92 = __this->___U3CresultU3E5__3_7;
					il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)));
					Object_DestroyImmediate_m6336EBC83591A5DB64EC70C92132824C6E258705(L_92, NULL);
					// return null;
					V_1 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)NULL;
					IL2CPP_POP_ACTIVE_EXCEPTION();
					goto IL_0355;
				}// end catch (depth: 3)

IL_02ef_2:
				{
					goto IL_031e_1;
				}
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				__finallyBlock.StoreException(e.ex);
			}
		}

IL_031e_1:
		{
			// return result;
			Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_93 = __this->___U3CresultU3E5__3_7;
			V_1 = L_93;
			goto IL_0355;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0327;
		}
		throw e;
	}

CATCH_0327:
	{// begin catch(System.Exception)
		V_8 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CU3E8__1_5 = (U3CU3Ec__DisplayClass68_0_t5FD6F0E0A673166A71D913C59D9368908630AA35*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E8__1_5), (void*)(U3CU3Ec__DisplayClass68_0_t5FD6F0E0A673166A71D913C59D9368908630AA35*)NULL);
		__this->___U3CloadPathU3E5__2_6 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CloadPathU3E5__2_6), (void*)(String_t*)NULL);
		__this->___U3CresultU3E5__3_7 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CresultU3E5__3_7), (void*)(Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)NULL);
		AsyncTaskMethodBuilder_1_t05B41371EF0E362ABCB54C56063FAA1E00C69A8F* L_94 = (AsyncTaskMethodBuilder_1_t05B41371EF0E362ABCB54C56063FAA1E00C69A8F*)(&__this->___U3CU3Et__builder_1);
		Exception_t* L_95 = V_8;
		AsyncTaskMethodBuilder_1_SetException_m1697D9F7BF9D11383EDE12CEE54A18AC24A7786B(L_94, L_95, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_SetException_m1697D9F7BF9D11383EDE12CEE54A18AC24A7786B_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_037e;
	}// end catch (depth: 1)

IL_0355:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CU3E8__1_5 = (U3CU3Ec__DisplayClass68_0_t5FD6F0E0A673166A71D913C59D9368908630AA35*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E8__1_5), (void*)(U3CU3Ec__DisplayClass68_0_t5FD6F0E0A673166A71D913C59D9368908630AA35*)NULL);
		__this->___U3CloadPathU3E5__2_6 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CloadPathU3E5__2_6), (void*)(String_t*)NULL);
		__this->___U3CresultU3E5__3_7 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CresultU3E5__3_7), (void*)(Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)NULL);
		AsyncTaskMethodBuilder_1_t05B41371EF0E362ABCB54C56063FAA1E00C69A8F* L_96 = (AsyncTaskMethodBuilder_1_t05B41371EF0E362ABCB54C56063FAA1E00C69A8F*)(&__this->___U3CU3Et__builder_1);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_97 = V_1;
		AsyncTaskMethodBuilder_1_SetResult_mAB04B95B4490AB6E1FCB475391576D15606A2688(L_96, L_97, AsyncTaskMethodBuilder_1_SetResult_mAB04B95B4490AB6E1FCB475391576D15606A2688_RuntimeMethod_var);
	}

IL_037e:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CLoadImageAtPathAsyncU3Ed__68_MoveNext_mA505FA18AF54BE2929AF74A6293411934E8F4427_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CLoadImageAtPathAsyncU3Ed__68_t6B30763C817CF0D323D6D6333BDCEC374A300CC4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CLoadImageAtPathAsyncU3Ed__68_t6B30763C817CF0D323D6D6333BDCEC374A300CC4*>(__this + _offset);
	U3CLoadImageAtPathAsyncU3Ed__68_MoveNext_mA505FA18AF54BE2929AF74A6293411934E8F4427(_thisAdjusted, method);
}
// System.Void NativeGallery/<LoadImageAtPathAsync>d__68::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadImageAtPathAsyncU3Ed__68_SetStateMachine_m3BF4EA39271DFE60DA83A1814BF88342F0FF7D3F (U3CLoadImageAtPathAsyncU3Ed__68_t6B30763C817CF0D323D6D6333BDCEC374A300CC4* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetStateMachine_m0ECA1B3B604CFFB8A5DE544E2A0A0025BFE6B6FD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_t05B41371EF0E362ABCB54C56063FAA1E00C69A8F* L_0 = (AsyncTaskMethodBuilder_1_t05B41371EF0E362ABCB54C56063FAA1E00C69A8F*)(&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___0_stateMachine;
		AsyncTaskMethodBuilder_1_SetStateMachine_m0ECA1B3B604CFFB8A5DE544E2A0A0025BFE6B6FD(L_0, L_1, AsyncTaskMethodBuilder_1_SetStateMachine_m0ECA1B3B604CFFB8A5DE544E2A0A0025BFE6B6FD_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CLoadImageAtPathAsyncU3Ed__68_SetStateMachine_m3BF4EA39271DFE60DA83A1814BF88342F0FF7D3F_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	U3CLoadImageAtPathAsyncU3Ed__68_t6B30763C817CF0D323D6D6333BDCEC374A300CC4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CLoadImageAtPathAsyncU3Ed__68_t6B30763C817CF0D323D6D6333BDCEC374A300CC4*>(__this + _offset);
	U3CLoadImageAtPathAsyncU3Ed__68_SetStateMachine_m3BF4EA39271DFE60DA83A1814BF88342F0FF7D3F(_thisAdjusted, ___0_stateMachine, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void NativeGallery/<>c__DisplayClass70_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass70_0__ctor_mFF24444EC20282423DE51690E701BF91DB4762A9 (U3CU3Ec__DisplayClass70_0_tEAF0E75379345E2943DD1EAF374045A9484E6B88* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.String NativeGallery/<>c__DisplayClass70_0::<GetVideoThumbnailAsync>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec__DisplayClass70_0_U3CGetVideoThumbnailAsyncU3Eb__0_mA90DE7E588B844F4F288C4D300390A05BB7FC30F (U3CU3Ec__DisplayClass70_0_tEAF0E75379345E2943DD1EAF374045A9484E6B88* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA15C898F015A9B0BC3268E8883CD03008A56DE26);
		s_Il2CppMethodInitialized = true;
	}
	{
		// string thumbnailPath = await Task.Run( () => _NativeGallery_GetVideoThumbnail( videoPath, temporaryImagePath + ".png", maxSize, captureTimeInSeconds ) );
		String_t* L_0 = __this->___videoPath_0;
		String_t* L_1 = __this->___temporaryImagePath_1;
		String_t* L_2;
		L_2 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_1, _stringLiteralA15C898F015A9B0BC3268E8883CD03008A56DE26, NULL);
		int32_t L_3 = __this->___maxSize_2;
		double L_4 = __this->___captureTimeInSeconds_3;
		String_t* L_5;
		L_5 = NativeGallery__NativeGallery_GetVideoThumbnail_m83B768DF2FA15147F6938AD36A29DE5ED18C0707(L_0, L_2, L_3, L_4, NULL);
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
// System.Void NativeGallery/<GetVideoThumbnailAsync>d__70::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetVideoThumbnailAsyncU3Ed__70_MoveNext_mCA0E0A5FD73D368A6A45CA302A8C77C9E2B6E11D (U3CGetVideoThumbnailAsyncU3Ed__70_tD8ECB30B418EDA30010B6ACFFD3C1F8BE2BA7060* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6_TisU3CGetVideoThumbnailAsyncU3Ed__70_tD8ECB30B418EDA30010B6ACFFD3C1F8BE2BA7060_mC961E23C1370FCAB8534533C73F741BAC448A546_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t6D65E8305E8A65AA4939559CBC191F5C2238F74B_TisU3CGetVideoThumbnailAsyncU3Ed__70_tD8ECB30B418EDA30010B6ACFFD3C1F8BE2BA7060_mBAB0B46E65418BA50DC13CB1A80075AEF6944C11_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetResult_mAB04B95B4490AB6E1FCB475391576D15606A2688_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t367387BB2C476D3F32DB12161B5FDC128DC3231C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_m82A392802A854576DC9525B87B0053B56201ABB9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_mE4B8867B0D8DAA1317AD64FE09FBD26E825A654C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_m77FF413EE49A5859C0BC111104448D64F3C01911_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_mE207C5509602B0BB59366E53CED6CC9B10A1F8A8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_m7727657658441E9D4CE9D3F8B532F9D65CB9CE1F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_m88AFED53B032F7EDDB6F9746699970B9FFFC992C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_Run_TisString_t_mDC4F0FD46A6DD4FE57DE5788DEF07F7F277821C3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass70_0_U3CGetVideoThumbnailAsyncU3Eb__0_mA90DE7E588B844F4F288C4D300390A05BB7FC30F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass70_0_tEAF0E75379345E2943DD1EAF374045A9484E6B88_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* V_1 = NULL;
	String_t* V_2 = NULL;
	TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6 V_3;
	memset((&V_3), 0, sizeof(V_3));
	TaskAwaiter_1_t6D65E8305E8A65AA4939559CBC191F5C2238F74B V_4;
	memset((&V_4), 0, sizeof(V_4));
	Exception_t* V_5 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_00c8_1;
			}
		}
		{
			int32_t L_2 = V_0;
			if ((((int32_t)L_2) == ((int32_t)1)))
			{
				goto IL_013c_1;
			}
		}
		{
			U3CU3Ec__DisplayClass70_0_tEAF0E75379345E2943DD1EAF374045A9484E6B88* L_3 = (U3CU3Ec__DisplayClass70_0_tEAF0E75379345E2943DD1EAF374045A9484E6B88*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass70_0_tEAF0E75379345E2943DD1EAF374045A9484E6B88_il2cpp_TypeInfo_var);
			NullCheck(L_3);
			U3CU3Ec__DisplayClass70_0__ctor_mFF24444EC20282423DE51690E701BF91DB4762A9(L_3, NULL);
			__this->___U3CU3E8__1_5 = L_3;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E8__1_5), (void*)L_3);
			U3CU3Ec__DisplayClass70_0_tEAF0E75379345E2943DD1EAF374045A9484E6B88* L_4 = __this->___U3CU3E8__1_5;
			String_t* L_5 = __this->___videoPath_2;
			NullCheck(L_4);
			L_4->___videoPath_0 = L_5;
			Il2CppCodeGenWriteBarrier((void**)(&L_4->___videoPath_0), (void*)L_5);
			U3CU3Ec__DisplayClass70_0_tEAF0E75379345E2943DD1EAF374045A9484E6B88* L_6 = __this->___U3CU3E8__1_5;
			int32_t L_7 = __this->___maxSize_3;
			NullCheck(L_6);
			L_6->___maxSize_2 = L_7;
			U3CU3Ec__DisplayClass70_0_tEAF0E75379345E2943DD1EAF374045A9484E6B88* L_8 = __this->___U3CU3E8__1_5;
			double L_9 = __this->___captureTimeInSeconds_4;
			NullCheck(L_8);
			L_8->___captureTimeInSeconds_3 = L_9;
			// if( maxSize <= 0 )
			U3CU3Ec__DisplayClass70_0_tEAF0E75379345E2943DD1EAF374045A9484E6B88* L_10 = __this->___U3CU3E8__1_5;
			NullCheck(L_10);
			int32_t L_11 = L_10->___maxSize_2;
			if ((((int32_t)L_11) > ((int32_t)0)))
			{
				goto IL_0070_1;
			}
		}
		{
			// maxSize = SystemInfo.maxTextureSize;
			U3CU3Ec__DisplayClass70_0_tEAF0E75379345E2943DD1EAF374045A9484E6B88* L_12 = __this->___U3CU3E8__1_5;
			int32_t L_13;
			L_13 = SystemInfo_get_maxTextureSize_mEE557C09643222591C6F4D3F561D7A60CD403991(NULL);
			NullCheck(L_12);
			L_12->___maxSize_2 = L_13;
		}

IL_0070_1:
		{
			// string temporaryImagePath = TemporaryImagePath; // Must be accessed from main thread
			U3CU3Ec__DisplayClass70_0_tEAF0E75379345E2943DD1EAF374045A9484E6B88* L_14 = __this->___U3CU3E8__1_5;
			String_t* L_15;
			L_15 = NativeGallery_get_TemporaryImagePath_m05418FC4CC85508CDAE30BEDCC344C85884E1BF8(NULL);
			NullCheck(L_14);
			L_14->___temporaryImagePath_1 = L_15;
			Il2CppCodeGenWriteBarrier((void**)(&L_14->___temporaryImagePath_1), (void*)L_15);
			// string thumbnailPath = await Task.Run( () => _NativeGallery_GetVideoThumbnail( videoPath, temporaryImagePath + ".png", maxSize, captureTimeInSeconds ) );
			U3CU3Ec__DisplayClass70_0_tEAF0E75379345E2943DD1EAF374045A9484E6B88* L_16 = __this->___U3CU3E8__1_5;
			Func_1_t367387BB2C476D3F32DB12161B5FDC128DC3231C* L_17 = (Func_1_t367387BB2C476D3F32DB12161B5FDC128DC3231C*)il2cpp_codegen_object_new(Func_1_t367387BB2C476D3F32DB12161B5FDC128DC3231C_il2cpp_TypeInfo_var);
			NullCheck(L_17);
			Func_1__ctor_m27A68E928C1D9158EAAD261086B9BC424339327B(L_17, L_16, (intptr_t)((void*)U3CU3Ec__DisplayClass70_0_U3CGetVideoThumbnailAsyncU3Eb__0_mA90DE7E588B844F4F288C4D300390A05BB7FC30F_RuntimeMethod_var), NULL);
			il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
			Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* L_18;
			L_18 = Task_Run_TisString_t_mDC4F0FD46A6DD4FE57DE5788DEF07F7F277821C3(L_17, Task_Run_TisString_t_mDC4F0FD46A6DD4FE57DE5788DEF07F7F277821C3_RuntimeMethod_var);
			NullCheck(L_18);
			TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6 L_19;
			L_19 = Task_1_GetAwaiter_m7727657658441E9D4CE9D3F8B532F9D65CB9CE1F(L_18, Task_1_GetAwaiter_m7727657658441E9D4CE9D3F8B532F9D65CB9CE1F_RuntimeMethod_var);
			V_3 = L_19;
			bool L_20;
			L_20 = TaskAwaiter_1_get_IsCompleted_mE207C5509602B0BB59366E53CED6CC9B10A1F8A8((&V_3), TaskAwaiter_1_get_IsCompleted_mE207C5509602B0BB59366E53CED6CC9B10A1F8A8_RuntimeMethod_var);
			if (L_20)
			{
				goto IL_00e4_1;
			}
		}
		{
			int32_t L_21 = 0;
			V_0 = L_21;
			__this->___U3CU3E1__state_0 = L_21;
			TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6 L_22 = V_3;
			__this->___U3CU3Eu__1_7 = L_22;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_7))->___m_task_0), (void*)NULL);
			AsyncTaskMethodBuilder_1_t05B41371EF0E362ABCB54C56063FAA1E00C69A8F* L_23 = (AsyncTaskMethodBuilder_1_t05B41371EF0E362ABCB54C56063FAA1E00C69A8F*)(&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6_TisU3CGetVideoThumbnailAsyncU3Ed__70_tD8ECB30B418EDA30010B6ACFFD3C1F8BE2BA7060_mC961E23C1370FCAB8534533C73F741BAC448A546(L_23, (&V_3), __this, AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6_TisU3CGetVideoThumbnailAsyncU3Ed__70_tD8ECB30B418EDA30010B6ACFFD3C1F8BE2BA7060_mC961E23C1370FCAB8534533C73F741BAC448A546_RuntimeMethod_var);
			goto IL_01a2;
		}

IL_00c8_1:
		{
			TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6 L_24 = __this->___U3CU3Eu__1_7;
			V_3 = L_24;
			TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6* L_25 = (TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6*)(&__this->___U3CU3Eu__1_7);
			il2cpp_codegen_initobj(L_25, sizeof(TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6));
			int32_t L_26 = (-1);
			V_0 = L_26;
			__this->___U3CU3E1__state_0 = L_26;
		}

IL_00e4_1:
		{
			String_t* L_27;
			L_27 = TaskAwaiter_1_GetResult_m82A392802A854576DC9525B87B0053B56201ABB9((&V_3), TaskAwaiter_1_GetResult_m82A392802A854576DC9525B87B0053B56201ABB9_RuntimeMethod_var);
			V_2 = L_27;
			// if( !string.IsNullOrEmpty( thumbnailPath ) )
			String_t* L_28 = V_2;
			bool L_29;
			L_29 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_28, NULL);
			if (L_29)
			{
				goto IL_0163_1;
			}
		}
		{
			// return await LoadImageAtPathAsync( thumbnailPath, maxSize, markTextureNonReadable );
			String_t* L_30 = V_2;
			U3CU3Ec__DisplayClass70_0_tEAF0E75379345E2943DD1EAF374045A9484E6B88* L_31 = __this->___U3CU3E8__1_5;
			NullCheck(L_31);
			int32_t L_32 = L_31->___maxSize_2;
			bool L_33 = __this->___markTextureNonReadable_6;
			Task_1_t95921EB64E237ACD28589D64B693C652268F225E* L_34;
			L_34 = NativeGallery_LoadImageAtPathAsync_m5927E93A68C0EFA80CE2ED62FCDA3FAF6089134A(L_30, L_32, L_33, NULL);
			NullCheck(L_34);
			TaskAwaiter_1_t6D65E8305E8A65AA4939559CBC191F5C2238F74B L_35;
			L_35 = Task_1_GetAwaiter_m88AFED53B032F7EDDB6F9746699970B9FFFC992C(L_34, Task_1_GetAwaiter_m88AFED53B032F7EDDB6F9746699970B9FFFC992C_RuntimeMethod_var);
			V_4 = L_35;
			bool L_36;
			L_36 = TaskAwaiter_1_get_IsCompleted_m77FF413EE49A5859C0BC111104448D64F3C01911((&V_4), TaskAwaiter_1_get_IsCompleted_m77FF413EE49A5859C0BC111104448D64F3C01911_RuntimeMethod_var);
			if (L_36)
			{
				goto IL_0159_1;
			}
		}
		{
			int32_t L_37 = 1;
			V_0 = L_37;
			__this->___U3CU3E1__state_0 = L_37;
			TaskAwaiter_1_t6D65E8305E8A65AA4939559CBC191F5C2238F74B L_38 = V_4;
			__this->___U3CU3Eu__2_8 = L_38;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__2_8))->___m_task_0), (void*)NULL);
			AsyncTaskMethodBuilder_1_t05B41371EF0E362ABCB54C56063FAA1E00C69A8F* L_39 = (AsyncTaskMethodBuilder_1_t05B41371EF0E362ABCB54C56063FAA1E00C69A8F*)(&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t6D65E8305E8A65AA4939559CBC191F5C2238F74B_TisU3CGetVideoThumbnailAsyncU3Ed__70_tD8ECB30B418EDA30010B6ACFFD3C1F8BE2BA7060_mBAB0B46E65418BA50DC13CB1A80075AEF6944C11(L_39, (&V_4), __this, AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t6D65E8305E8A65AA4939559CBC191F5C2238F74B_TisU3CGetVideoThumbnailAsyncU3Ed__70_tD8ECB30B418EDA30010B6ACFFD3C1F8BE2BA7060_mBAB0B46E65418BA50DC13CB1A80075AEF6944C11_RuntimeMethod_var);
			goto IL_01a2;
		}

IL_013c_1:
		{
			TaskAwaiter_1_t6D65E8305E8A65AA4939559CBC191F5C2238F74B L_40 = __this->___U3CU3Eu__2_8;
			V_4 = L_40;
			TaskAwaiter_1_t6D65E8305E8A65AA4939559CBC191F5C2238F74B* L_41 = (TaskAwaiter_1_t6D65E8305E8A65AA4939559CBC191F5C2238F74B*)(&__this->___U3CU3Eu__2_8);
			il2cpp_codegen_initobj(L_41, sizeof(TaskAwaiter_1_t6D65E8305E8A65AA4939559CBC191F5C2238F74B));
			int32_t L_42 = (-1);
			V_0 = L_42;
			__this->___U3CU3E1__state_0 = L_42;
		}

IL_0159_1:
		{
			Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_43;
			L_43 = TaskAwaiter_1_GetResult_mE4B8867B0D8DAA1317AD64FE09FBD26E825A654C((&V_4), TaskAwaiter_1_GetResult_mE4B8867B0D8DAA1317AD64FE09FBD26E825A654C_RuntimeMethod_var);
			V_1 = L_43;
			goto IL_0187;
		}

IL_0163_1:
		{
			// return null;
			V_1 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)NULL;
			goto IL_0187;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0167;
		}
		throw e;
	}

CATCH_0167:
	{// begin catch(System.Exception)
		V_5 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CU3E8__1_5 = (U3CU3Ec__DisplayClass70_0_tEAF0E75379345E2943DD1EAF374045A9484E6B88*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E8__1_5), (void*)(U3CU3Ec__DisplayClass70_0_tEAF0E75379345E2943DD1EAF374045A9484E6B88*)NULL);
		AsyncTaskMethodBuilder_1_t05B41371EF0E362ABCB54C56063FAA1E00C69A8F* L_44 = (AsyncTaskMethodBuilder_1_t05B41371EF0E362ABCB54C56063FAA1E00C69A8F*)(&__this->___U3CU3Et__builder_1);
		Exception_t* L_45 = V_5;
		AsyncTaskMethodBuilder_1_SetException_m1697D9F7BF9D11383EDE12CEE54A18AC24A7786B(L_44, L_45, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_SetException_m1697D9F7BF9D11383EDE12CEE54A18AC24A7786B_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_01a2;
	}// end catch (depth: 1)

IL_0187:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CU3E8__1_5 = (U3CU3Ec__DisplayClass70_0_tEAF0E75379345E2943DD1EAF374045A9484E6B88*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E8__1_5), (void*)(U3CU3Ec__DisplayClass70_0_tEAF0E75379345E2943DD1EAF374045A9484E6B88*)NULL);
		AsyncTaskMethodBuilder_1_t05B41371EF0E362ABCB54C56063FAA1E00C69A8F* L_46 = (AsyncTaskMethodBuilder_1_t05B41371EF0E362ABCB54C56063FAA1E00C69A8F*)(&__this->___U3CU3Et__builder_1);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_47 = V_1;
		AsyncTaskMethodBuilder_1_SetResult_mAB04B95B4490AB6E1FCB475391576D15606A2688(L_46, L_47, AsyncTaskMethodBuilder_1_SetResult_mAB04B95B4490AB6E1FCB475391576D15606A2688_RuntimeMethod_var);
	}

IL_01a2:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CGetVideoThumbnailAsyncU3Ed__70_MoveNext_mCA0E0A5FD73D368A6A45CA302A8C77C9E2B6E11D_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CGetVideoThumbnailAsyncU3Ed__70_tD8ECB30B418EDA30010B6ACFFD3C1F8BE2BA7060* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CGetVideoThumbnailAsyncU3Ed__70_tD8ECB30B418EDA30010B6ACFFD3C1F8BE2BA7060*>(__this + _offset);
	U3CGetVideoThumbnailAsyncU3Ed__70_MoveNext_mCA0E0A5FD73D368A6A45CA302A8C77C9E2B6E11D(_thisAdjusted, method);
}
// System.Void NativeGallery/<GetVideoThumbnailAsync>d__70::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetVideoThumbnailAsyncU3Ed__70_SetStateMachine_m700D6B8BC652C0BC9A140570947B00200C1EA352 (U3CGetVideoThumbnailAsyncU3Ed__70_tD8ECB30B418EDA30010B6ACFFD3C1F8BE2BA7060* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetStateMachine_m0ECA1B3B604CFFB8A5DE544E2A0A0025BFE6B6FD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_t05B41371EF0E362ABCB54C56063FAA1E00C69A8F* L_0 = (AsyncTaskMethodBuilder_1_t05B41371EF0E362ABCB54C56063FAA1E00C69A8F*)(&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___0_stateMachine;
		AsyncTaskMethodBuilder_1_SetStateMachine_m0ECA1B3B604CFFB8A5DE544E2A0A0025BFE6B6FD(L_0, L_1, AsyncTaskMethodBuilder_1_SetStateMachine_m0ECA1B3B604CFFB8A5DE544E2A0A0025BFE6B6FD_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CGetVideoThumbnailAsyncU3Ed__70_SetStateMachine_m700D6B8BC652C0BC9A140570947B00200C1EA352_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	U3CGetVideoThumbnailAsyncU3Ed__70_tD8ECB30B418EDA30010B6ACFFD3C1F8BE2BA7060* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CGetVideoThumbnailAsyncU3Ed__70_tD8ECB30B418EDA30010B6ACFFD3C1F8BE2BA7060*>(__this + _offset);
	U3CGetVideoThumbnailAsyncU3Ed__70_SetStateMachine_m700D6B8BC652C0BC9A140570947B00200C1EA352(_thisAdjusted, ___0_stateMachine, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean NativeGalleryNamespace.NGMediaReceiveCallbackiOS::get_IsBusy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NGMediaReceiveCallbackiOS_get_IsBusy_mBD81A0B09C4B317F2CB308B31C7855AD835475E7 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NGMediaReceiveCallbackiOS_tD90DF712E9D1B5AE35D625194DB2E09EABAD0280_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static bool IsBusy { get; private set; }
		bool L_0 = ((NGMediaReceiveCallbackiOS_tD90DF712E9D1B5AE35D625194DB2E09EABAD0280_StaticFields*)il2cpp_codegen_static_fields_for(NGMediaReceiveCallbackiOS_tD90DF712E9D1B5AE35D625194DB2E09EABAD0280_il2cpp_TypeInfo_var))->___U3CIsBusyU3Ek__BackingField_8;
		return L_0;
	}
}
// System.Void NativeGalleryNamespace.NGMediaReceiveCallbackiOS::set_IsBusy(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NGMediaReceiveCallbackiOS_set_IsBusy_mCAED428338143B723D506CCB819AE1A2B10D1452 (bool ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NGMediaReceiveCallbackiOS_tD90DF712E9D1B5AE35D625194DB2E09EABAD0280_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static bool IsBusy { get; private set; }
		bool L_0 = ___0_value;
		((NGMediaReceiveCallbackiOS_tD90DF712E9D1B5AE35D625194DB2E09EABAD0280_StaticFields*)il2cpp_codegen_static_fields_for(NGMediaReceiveCallbackiOS_tD90DF712E9D1B5AE35D625194DB2E09EABAD0280_il2cpp_TypeInfo_var))->___U3CIsBusyU3Ek__BackingField_8 = L_0;
		return;
	}
}
// System.Int32 NativeGalleryNamespace.NGMediaReceiveCallbackiOS::_NativeGallery_IsMediaPickerBusy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NGMediaReceiveCallbackiOS__NativeGallery_IsMediaPickerBusy_mE7055F9A1C42F9AE65B5899035AD5752B84F4FA8 (const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(_NativeGallery_IsMediaPickerBusy)();

	return returnValue;
}
// System.Void NativeGalleryNamespace.NGMediaReceiveCallbackiOS::Initialize(NativeGallery/MediaPickCallback,NativeGallery/MediaPickMultipleCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NGMediaReceiveCallbackiOS_Initialize_m4FED174803F7A702EC9D42B9852078AF352658E8 (MediaPickCallback_tC207F6F3EEE18F64B03E23D5C9FA8C79517A5EB6* ___0_callback, MediaPickMultipleCallback_t717A5D378751E2CACB53E6BA25386FF8DB41627B* ___1_callbackMultiple, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisNGMediaReceiveCallbackiOS_tD90DF712E9D1B5AE35D625194DB2E09EABAD0280_m5E174F21F5B691FDA1720B5AF8D4C1866F2B1547_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NGMediaReceiveCallbackiOS_tD90DF712E9D1B5AE35D625194DB2E09EABAD0280_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7E90946BC7628636C60D094F905E96CD1360A930);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if( IsBusy )
		bool L_0;
		L_0 = NGMediaReceiveCallbackiOS_get_IsBusy_mBD81A0B09C4B317F2CB308B31C7855AD835475E7_inline(NULL);
		if (!L_0)
		{
			goto IL_0008;
		}
	}
	{
		// return;
		return;
	}

IL_0008:
	{
		// if( instance == null )
		NGMediaReceiveCallbackiOS_tD90DF712E9D1B5AE35D625194DB2E09EABAD0280* L_1 = ((NGMediaReceiveCallbackiOS_tD90DF712E9D1B5AE35D625194DB2E09EABAD0280_StaticFields*)il2cpp_codegen_static_fields_for(NGMediaReceiveCallbackiOS_tD90DF712E9D1B5AE35D625194DB2E09EABAD0280_il2cpp_TypeInfo_var))->___instance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_0038;
		}
	}
	{
		// instance = new GameObject( "NGMediaReceiveCallbackiOS" ).AddComponent<NGMediaReceiveCallbackiOS>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_3, _stringLiteral7E90946BC7628636C60D094F905E96CD1360A930, NULL);
		NullCheck(L_3);
		NGMediaReceiveCallbackiOS_tD90DF712E9D1B5AE35D625194DB2E09EABAD0280* L_4;
		L_4 = GameObject_AddComponent_TisNGMediaReceiveCallbackiOS_tD90DF712E9D1B5AE35D625194DB2E09EABAD0280_m5E174F21F5B691FDA1720B5AF8D4C1866F2B1547(L_3, GameObject_AddComponent_TisNGMediaReceiveCallbackiOS_tD90DF712E9D1B5AE35D625194DB2E09EABAD0280_m5E174F21F5B691FDA1720B5AF8D4C1866F2B1547_RuntimeMethod_var);
		((NGMediaReceiveCallbackiOS_tD90DF712E9D1B5AE35D625194DB2E09EABAD0280_StaticFields*)il2cpp_codegen_static_fields_for(NGMediaReceiveCallbackiOS_tD90DF712E9D1B5AE35D625194DB2E09EABAD0280_il2cpp_TypeInfo_var))->___instance_4 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((NGMediaReceiveCallbackiOS_tD90DF712E9D1B5AE35D625194DB2E09EABAD0280_StaticFields*)il2cpp_codegen_static_fields_for(NGMediaReceiveCallbackiOS_tD90DF712E9D1B5AE35D625194DB2E09EABAD0280_il2cpp_TypeInfo_var))->___instance_4), (void*)L_4);
		// DontDestroyOnLoad( instance.gameObject );
		NGMediaReceiveCallbackiOS_tD90DF712E9D1B5AE35D625194DB2E09EABAD0280* L_5 = ((NGMediaReceiveCallbackiOS_tD90DF712E9D1B5AE35D625194DB2E09EABAD0280_StaticFields*)il2cpp_codegen_static_fields_for(NGMediaReceiveCallbackiOS_tD90DF712E9D1B5AE35D625194DB2E09EABAD0280_il2cpp_TypeInfo_var))->___instance_4;
		NullCheck(L_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_5, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7(L_6, NULL);
	}

IL_0038:
	{
		// instance.callback = callback;
		NGMediaReceiveCallbackiOS_tD90DF712E9D1B5AE35D625194DB2E09EABAD0280* L_7 = ((NGMediaReceiveCallbackiOS_tD90DF712E9D1B5AE35D625194DB2E09EABAD0280_StaticFields*)il2cpp_codegen_static_fields_for(NGMediaReceiveCallbackiOS_tD90DF712E9D1B5AE35D625194DB2E09EABAD0280_il2cpp_TypeInfo_var))->___instance_4;
		MediaPickCallback_tC207F6F3EEE18F64B03E23D5C9FA8C79517A5EB6* L_8 = ___0_callback;
		NullCheck(L_7);
		L_7->___callback_5 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&L_7->___callback_5), (void*)L_8);
		// instance.callbackMultiple = callbackMultiple;
		NGMediaReceiveCallbackiOS_tD90DF712E9D1B5AE35D625194DB2E09EABAD0280* L_9 = ((NGMediaReceiveCallbackiOS_tD90DF712E9D1B5AE35D625194DB2E09EABAD0280_StaticFields*)il2cpp_codegen_static_fields_for(NGMediaReceiveCallbackiOS_tD90DF712E9D1B5AE35D625194DB2E09EABAD0280_il2cpp_TypeInfo_var))->___instance_4;
		MediaPickMultipleCallback_t717A5D378751E2CACB53E6BA25386FF8DB41627B* L_10 = ___1_callbackMultiple;
		NullCheck(L_9);
		L_9->___callbackMultiple_6 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&L_9->___callbackMultiple_6), (void*)L_10);
		// instance.nextBusyCheckTime = Time.realtimeSinceStartup + 1f;
		NGMediaReceiveCallbackiOS_tD90DF712E9D1B5AE35D625194DB2E09EABAD0280* L_11 = ((NGMediaReceiveCallbackiOS_tD90DF712E9D1B5AE35D625194DB2E09EABAD0280_StaticFields*)il2cpp_codegen_static_fields_for(NGMediaReceiveCallbackiOS_tD90DF712E9D1B5AE35D625194DB2E09EABAD0280_il2cpp_TypeInfo_var))->___instance_4;
		float L_12;
		L_12 = Time_get_realtimeSinceStartup_m73B3CB73175D79A44333D59BB70F9EDE55EC9510(NULL);
		NullCheck(L_11);
		L_11->___nextBusyCheckTime_7 = ((float)il2cpp_codegen_add(L_12, (1.0f)));
		// IsBusy = true;
		NGMediaReceiveCallbackiOS_set_IsBusy_mCAED428338143B723D506CCB819AE1A2B10D1452_inline((bool)1, NULL);
		// }
		return;
	}
}
// System.Void NativeGalleryNamespace.NGMediaReceiveCallbackiOS::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NGMediaReceiveCallbackiOS_Update_mFC36FE20A450A54FF9C691A2FB85DB1F2D8E22A6 (NGMediaReceiveCallbackiOS_tD90DF712E9D1B5AE35D625194DB2E09EABAD0280* __this, const RuntimeMethod* method) 
{
	MediaPickCallback_tC207F6F3EEE18F64B03E23D5C9FA8C79517A5EB6* V_0 = NULL;
	MediaPickMultipleCallback_t717A5D378751E2CACB53E6BA25386FF8DB41627B* V_1 = NULL;
	{
		// if( IsBusy )
		bool L_0;
		L_0 = NGMediaReceiveCallbackiOS_get_IsBusy_mBD81A0B09C4B317F2CB308B31C7855AD835475E7_inline(NULL);
		if (!L_0)
		{
			goto IL_0062;
		}
	}
	{
		// if( Time.realtimeSinceStartup >= nextBusyCheckTime )
		float L_1;
		L_1 = Time_get_realtimeSinceStartup_m73B3CB73175D79A44333D59BB70F9EDE55EC9510(NULL);
		float L_2 = __this->___nextBusyCheckTime_7;
		if ((!(((float)L_1) >= ((float)L_2))))
		{
			goto IL_0062;
		}
	}
	{
		// nextBusyCheckTime = Time.realtimeSinceStartup + 1f;
		float L_3;
		L_3 = Time_get_realtimeSinceStartup_m73B3CB73175D79A44333D59BB70F9EDE55EC9510(NULL);
		__this->___nextBusyCheckTime_7 = ((float)il2cpp_codegen_add(L_3, (1.0f)));
		// if( _NativeGallery_IsMediaPickerBusy() == 0 )
		int32_t L_4;
		L_4 = NGMediaReceiveCallbackiOS__NativeGallery_IsMediaPickerBusy_mE7055F9A1C42F9AE65B5899035AD5752B84F4FA8(NULL);
		if (L_4)
		{
			goto IL_0062;
		}
	}
	{
		// IsBusy = false;
		NGMediaReceiveCallbackiOS_set_IsBusy_mCAED428338143B723D506CCB819AE1A2B10D1452_inline((bool)0, NULL);
		// NativeGallery.MediaPickCallback _callback = callback;
		MediaPickCallback_tC207F6F3EEE18F64B03E23D5C9FA8C79517A5EB6* L_5 = __this->___callback_5;
		V_0 = L_5;
		// callback = null;
		__this->___callback_5 = (MediaPickCallback_tC207F6F3EEE18F64B03E23D5C9FA8C79517A5EB6*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___callback_5), (void*)(MediaPickCallback_tC207F6F3EEE18F64B03E23D5C9FA8C79517A5EB6*)NULL);
		// NativeGallery.MediaPickMultipleCallback _callbackMultiple = callbackMultiple;
		MediaPickMultipleCallback_t717A5D378751E2CACB53E6BA25386FF8DB41627B* L_6 = __this->___callbackMultiple_6;
		V_1 = L_6;
		// callbackMultiple = null;
		__this->___callbackMultiple_6 = (MediaPickMultipleCallback_t717A5D378751E2CACB53E6BA25386FF8DB41627B*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___callbackMultiple_6), (void*)(MediaPickMultipleCallback_t717A5D378751E2CACB53E6BA25386FF8DB41627B*)NULL);
		// if( _callback != null )
		MediaPickCallback_tC207F6F3EEE18F64B03E23D5C9FA8C79517A5EB6* L_7 = V_0;
		if (!L_7)
		{
			goto IL_0058;
		}
	}
	{
		// _callback( null );
		MediaPickCallback_tC207F6F3EEE18F64B03E23D5C9FA8C79517A5EB6* L_8 = V_0;
		NullCheck(L_8);
		MediaPickCallback_Invoke_m25F1FD61CF9FE4C835CD3298D790CBB61691BC4E_inline(L_8, (String_t*)NULL, NULL);
	}

IL_0058:
	{
		// if( _callbackMultiple != null )
		MediaPickMultipleCallback_t717A5D378751E2CACB53E6BA25386FF8DB41627B* L_9 = V_1;
		if (!L_9)
		{
			goto IL_0062;
		}
	}
	{
		// _callbackMultiple( null );
		MediaPickMultipleCallback_t717A5D378751E2CACB53E6BA25386FF8DB41627B* L_10 = V_1;
		NullCheck(L_10);
		MediaPickMultipleCallback_Invoke_m5FE7D489E8659411C7E24DB7E892B439C9990F3D_inline(L_10, (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)NULL, NULL);
	}

IL_0062:
	{
		// }
		return;
	}
}
// System.Void NativeGalleryNamespace.NGMediaReceiveCallbackiOS::OnMediaReceived(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NGMediaReceiveCallbackiOS_OnMediaReceived_mDE9B1F66958CE1103DD9F924957FAC01131FE560 (NGMediaReceiveCallbackiOS_tD90DF712E9D1B5AE35D625194DB2E09EABAD0280* __this, String_t* ___0_path, const RuntimeMethod* method) 
{
	MediaPickCallback_tC207F6F3EEE18F64B03E23D5C9FA8C79517A5EB6* V_0 = NULL;
	{
		// IsBusy = false;
		NGMediaReceiveCallbackiOS_set_IsBusy_mCAED428338143B723D506CCB819AE1A2B10D1452_inline((bool)0, NULL);
		// if( string.IsNullOrEmpty( path ) )
		String_t* L_0 = ___0_path;
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		// path = null;
		___0_path = (String_t*)NULL;
	}

IL_0011:
	{
		// NativeGallery.MediaPickCallback _callback = callback;
		MediaPickCallback_tC207F6F3EEE18F64B03E23D5C9FA8C79517A5EB6* L_2 = __this->___callback_5;
		V_0 = L_2;
		// callback = null;
		__this->___callback_5 = (MediaPickCallback_tC207F6F3EEE18F64B03E23D5C9FA8C79517A5EB6*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___callback_5), (void*)(MediaPickCallback_tC207F6F3EEE18F64B03E23D5C9FA8C79517A5EB6*)NULL);
		// if( _callback != null )
		MediaPickCallback_tC207F6F3EEE18F64B03E23D5C9FA8C79517A5EB6* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		// _callback( path );
		MediaPickCallback_tC207F6F3EEE18F64B03E23D5C9FA8C79517A5EB6* L_4 = V_0;
		String_t* L_5 = ___0_path;
		NullCheck(L_4);
		MediaPickCallback_Invoke_m25F1FD61CF9FE4C835CD3298D790CBB61691BC4E_inline(L_4, L_5, NULL);
	}

IL_0029:
	{
		// }
		return;
	}
}
// System.Void NativeGalleryNamespace.NGMediaReceiveCallbackiOS::OnMultipleMediaReceived(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NGMediaReceiveCallbackiOS_OnMultipleMediaReceived_m978EBD4153C6206985E10872D954603A8FEAAE09 (NGMediaReceiveCallbackiOS_tD90DF712E9D1B5AE35D625194DB2E09EABAD0280* __this, String_t* ___0_paths, const RuntimeMethod* method) 
{
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_0 = NULL;
	MediaPickMultipleCallback_t717A5D378751E2CACB53E6BA25386FF8DB41627B* V_1 = NULL;
	{
		// IsBusy = false;
		NGMediaReceiveCallbackiOS_set_IsBusy_mCAED428338143B723D506CCB819AE1A2B10D1452_inline((bool)0, NULL);
		// string[] _paths = SplitPaths( paths );
		String_t* L_0 = ___0_paths;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1;
		L_1 = NGMediaReceiveCallbackiOS_SplitPaths_mCE4253E500919FECD0EB9B8ACA40F66305247E2B(__this, L_0, NULL);
		V_0 = L_1;
		// if( _paths != null && _paths.Length == 0 )
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = V_0;
		NullCheck(L_3);
		if ((((RuntimeArray*)L_3)->max_length))
		{
			goto IL_0017;
		}
	}
	{
		// _paths = null;
		V_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)NULL;
	}

IL_0017:
	{
		// NativeGallery.MediaPickMultipleCallback _callbackMultiple = callbackMultiple;
		MediaPickMultipleCallback_t717A5D378751E2CACB53E6BA25386FF8DB41627B* L_4 = __this->___callbackMultiple_6;
		V_1 = L_4;
		// callbackMultiple = null;
		__this->___callbackMultiple_6 = (MediaPickMultipleCallback_t717A5D378751E2CACB53E6BA25386FF8DB41627B*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___callbackMultiple_6), (void*)(MediaPickMultipleCallback_t717A5D378751E2CACB53E6BA25386FF8DB41627B*)NULL);
		// if( _callbackMultiple != null )
		MediaPickMultipleCallback_t717A5D378751E2CACB53E6BA25386FF8DB41627B* L_5 = V_1;
		if (!L_5)
		{
			goto IL_002f;
		}
	}
	{
		// _callbackMultiple( _paths );
		MediaPickMultipleCallback_t717A5D378751E2CACB53E6BA25386FF8DB41627B* L_6 = V_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = V_0;
		NullCheck(L_6);
		MediaPickMultipleCallback_Invoke_m5FE7D489E8659411C7E24DB7E892B439C9990F3D_inline(L_6, L_7, NULL);
	}

IL_002f:
	{
		// }
		return;
	}
}
// System.String[] NativeGalleryNamespace.NGMediaReceiveCallbackiOS::SplitPaths(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* NGMediaReceiveCallbackiOS_SplitPaths_mCE4253E500919FECD0EB9B8ACA40F66305247E2B (NGMediaReceiveCallbackiOS_tD90DF712E9D1B5AE35D625194DB2E09EABAD0280* __this, String_t* ___0_paths, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_0 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		// string[] result = null;
		V_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)NULL;
		// if( !string.IsNullOrEmpty( paths ) )
		String_t* L_0 = ___0_paths;
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
		if (L_1)
		{
			goto IL_007f;
		}
	}
	{
		// string[] pathsSplit = paths.Split( '>' );
		String_t* L_2 = ___0_paths;
		NullCheck(L_2);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3;
		L_3 = String_Split_m9530B73D02054692283BF35C3A27C8F2230946F4(L_2, ((int32_t)62), 0, NULL);
		V_1 = L_3;
		// int validPathCount = 0;
		V_2 = 0;
		// for( int i = 0; i < pathsSplit.Length; i++ )
		V_3 = 0;
		goto IL_002c;
	}

IL_001a:
	{
		// if( !string.IsNullOrEmpty( pathsSplit[i] ) )
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = V_1;
		int32_t L_5 = V_3;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		String_t* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		bool L_8;
		L_8 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_7, NULL);
		if (L_8)
		{
			goto IL_0028;
		}
	}
	{
		// validPathCount++;
		int32_t L_9 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0028:
	{
		// for( int i = 0; i < pathsSplit.Length; i++ )
		int32_t L_10 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_002c:
	{
		// for( int i = 0; i < pathsSplit.Length; i++ )
		int32_t L_11 = V_3;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = V_1;
		NullCheck(L_12);
		if ((((int32_t)L_11) < ((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length)))))
		{
			goto IL_001a;
		}
	}
	{
		// if( validPathCount == 0 )
		int32_t L_13 = V_2;
		if (L_13)
		{
			goto IL_003e;
		}
	}
	{
		// pathsSplit = new string[0];
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)0);
		V_1 = L_14;
		goto IL_007d;
	}

IL_003e:
	{
		// else if( validPathCount != pathsSplit.Length )
		int32_t L_15 = V_2;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16 = V_1;
		NullCheck(L_16);
		if ((((int32_t)L_15) == ((int32_t)((int32_t)(((RuntimeArray*)L_16)->max_length)))))
		{
			goto IL_007d;
		}
	}
	{
		// string[] validPaths = new string[validPathCount];
		int32_t L_17 = V_2;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_18 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)L_17);
		V_4 = L_18;
		// for( int i = 0, j = 0; i < pathsSplit.Length; i++ )
		V_5 = 0;
		// for( int i = 0, j = 0; i < pathsSplit.Length; i++ )
		V_6 = 0;
		goto IL_0073;
	}

IL_0054:
	{
		// if( !string.IsNullOrEmpty( pathsSplit[i] ) )
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_19 = V_1;
		int32_t L_20 = V_5;
		NullCheck(L_19);
		int32_t L_21 = L_20;
		String_t* L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		bool L_23;
		L_23 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_22, NULL);
		if (L_23)
		{
			goto IL_006d;
		}
	}
	{
		// validPaths[j++] = pathsSplit[i];
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_24 = V_4;
		int32_t L_25 = V_6;
		int32_t L_26 = L_25;
		V_6 = ((int32_t)il2cpp_codegen_add(L_26, 1));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_27 = V_1;
		int32_t L_28 = V_5;
		NullCheck(L_27);
		int32_t L_29 = L_28;
		String_t* L_30 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, L_30);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(L_26), (String_t*)L_30);
	}

IL_006d:
	{
		// for( int i = 0, j = 0; i < pathsSplit.Length; i++ )
		int32_t L_31 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_31, 1));
	}

IL_0073:
	{
		// for( int i = 0, j = 0; i < pathsSplit.Length; i++ )
		int32_t L_32 = V_5;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_33 = V_1;
		NullCheck(L_33);
		if ((((int32_t)L_32) < ((int32_t)((int32_t)(((RuntimeArray*)L_33)->max_length)))))
		{
			goto IL_0054;
		}
	}
	{
		// pathsSplit = validPaths;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_34 = V_4;
		V_1 = L_34;
	}

IL_007d:
	{
		// result = pathsSplit;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_35 = V_1;
		V_0 = L_35;
	}

IL_007f:
	{
		// return result;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_36 = V_0;
		return L_36;
	}
}
// System.Void NativeGalleryNamespace.NGMediaReceiveCallbackiOS::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NGMediaReceiveCallbackiOS__ctor_m4D70D6592553882BDA384E884B17FAA0C27515C6 (NGMediaReceiveCallbackiOS_tD90DF712E9D1B5AE35D625194DB2E09EABAD0280* __this, const RuntimeMethod* method) 
{
	{
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
// System.Void NativeGalleryNamespace.NGMediaSaveCallbackiOS::Initialize(NativeGallery/MediaSaveCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NGMediaSaveCallbackiOS_Initialize_m59AB586285AA39B43E75AE2B93F15AFBA49FA312 (MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D* ___0_callback, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisNGMediaSaveCallbackiOS_t31F72978BB8FB757F7580EABA2D1EDFEAE2E87B9_mFDB8D8B0F5D4B621A2434FDD88597D027AA91F23_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NGMediaSaveCallbackiOS_t31F72978BB8FB757F7580EABA2D1EDFEAE2E87B9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0A79B0229EB4F27A4505CE75160E9133E944F111);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if( instance == null )
		NGMediaSaveCallbackiOS_t31F72978BB8FB757F7580EABA2D1EDFEAE2E87B9* L_0 = ((NGMediaSaveCallbackiOS_t31F72978BB8FB757F7580EABA2D1EDFEAE2E87B9_StaticFields*)il2cpp_codegen_static_fields_for(NGMediaSaveCallbackiOS_t31F72978BB8FB757F7580EABA2D1EDFEAE2E87B9_il2cpp_TypeInfo_var))->___instance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0032;
		}
	}
	{
		// instance = new GameObject( "NGMediaSaveCallbackiOS" ).AddComponent<NGMediaSaveCallbackiOS>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_2, _stringLiteral0A79B0229EB4F27A4505CE75160E9133E944F111, NULL);
		NullCheck(L_2);
		NGMediaSaveCallbackiOS_t31F72978BB8FB757F7580EABA2D1EDFEAE2E87B9* L_3;
		L_3 = GameObject_AddComponent_TisNGMediaSaveCallbackiOS_t31F72978BB8FB757F7580EABA2D1EDFEAE2E87B9_mFDB8D8B0F5D4B621A2434FDD88597D027AA91F23(L_2, GameObject_AddComponent_TisNGMediaSaveCallbackiOS_t31F72978BB8FB757F7580EABA2D1EDFEAE2E87B9_mFDB8D8B0F5D4B621A2434FDD88597D027AA91F23_RuntimeMethod_var);
		((NGMediaSaveCallbackiOS_t31F72978BB8FB757F7580EABA2D1EDFEAE2E87B9_StaticFields*)il2cpp_codegen_static_fields_for(NGMediaSaveCallbackiOS_t31F72978BB8FB757F7580EABA2D1EDFEAE2E87B9_il2cpp_TypeInfo_var))->___instance_4 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((NGMediaSaveCallbackiOS_t31F72978BB8FB757F7580EABA2D1EDFEAE2E87B9_StaticFields*)il2cpp_codegen_static_fields_for(NGMediaSaveCallbackiOS_t31F72978BB8FB757F7580EABA2D1EDFEAE2E87B9_il2cpp_TypeInfo_var))->___instance_4), (void*)L_3);
		// DontDestroyOnLoad( instance.gameObject );
		NGMediaSaveCallbackiOS_t31F72978BB8FB757F7580EABA2D1EDFEAE2E87B9* L_4 = ((NGMediaSaveCallbackiOS_t31F72978BB8FB757F7580EABA2D1EDFEAE2E87B9_StaticFields*)il2cpp_codegen_static_fields_for(NGMediaSaveCallbackiOS_t31F72978BB8FB757F7580EABA2D1EDFEAE2E87B9_il2cpp_TypeInfo_var))->___instance_4;
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7(L_5, NULL);
		goto IL_004f;
	}

IL_0032:
	{
		// else if( instance.callback != null )
		NGMediaSaveCallbackiOS_t31F72978BB8FB757F7580EABA2D1EDFEAE2E87B9* L_6 = ((NGMediaSaveCallbackiOS_t31F72978BB8FB757F7580EABA2D1EDFEAE2E87B9_StaticFields*)il2cpp_codegen_static_fields_for(NGMediaSaveCallbackiOS_t31F72978BB8FB757F7580EABA2D1EDFEAE2E87B9_il2cpp_TypeInfo_var))->___instance_4;
		NullCheck(L_6);
		MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D* L_7 = L_6->___callback_5;
		if (!L_7)
		{
			goto IL_004f;
		}
	}
	{
		// instance.callback( false, null );
		NGMediaSaveCallbackiOS_t31F72978BB8FB757F7580EABA2D1EDFEAE2E87B9* L_8 = ((NGMediaSaveCallbackiOS_t31F72978BB8FB757F7580EABA2D1EDFEAE2E87B9_StaticFields*)il2cpp_codegen_static_fields_for(NGMediaSaveCallbackiOS_t31F72978BB8FB757F7580EABA2D1EDFEAE2E87B9_il2cpp_TypeInfo_var))->___instance_4;
		NullCheck(L_8);
		MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D* L_9 = L_8->___callback_5;
		NullCheck(L_9);
		MediaSaveCallback_Invoke_mD97247E7132D61D5D8C1E3063FEF0C09205E925C_inline(L_9, (bool)0, (String_t*)NULL, NULL);
	}

IL_004f:
	{
		// instance.callback = callback;
		NGMediaSaveCallbackiOS_t31F72978BB8FB757F7580EABA2D1EDFEAE2E87B9* L_10 = ((NGMediaSaveCallbackiOS_t31F72978BB8FB757F7580EABA2D1EDFEAE2E87B9_StaticFields*)il2cpp_codegen_static_fields_for(NGMediaSaveCallbackiOS_t31F72978BB8FB757F7580EABA2D1EDFEAE2E87B9_il2cpp_TypeInfo_var))->___instance_4;
		MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D* L_11 = ___0_callback;
		NullCheck(L_10);
		L_10->___callback_5 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&L_10->___callback_5), (void*)L_11);
		// }
		return;
	}
}
// System.Void NativeGalleryNamespace.NGMediaSaveCallbackiOS::OnMediaSaveCompleted(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NGMediaSaveCallbackiOS_OnMediaSaveCompleted_m90E6DFF9418ADF8F12894EB328D02A832DE2CB44 (NGMediaSaveCallbackiOS_t31F72978BB8FB757F7580EABA2D1EDFEAE2E87B9* __this, String_t* ___0_message, const RuntimeMethod* method) 
{
	MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D* V_0 = NULL;
	{
		// NativeGallery.MediaSaveCallback _callback = callback;
		MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D* L_0 = __this->___callback_5;
		V_0 = L_0;
		// callback = null;
		__this->___callback_5 = (MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___callback_5), (void*)(MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D*)NULL);
		// if( _callback != null )
		MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// _callback( true, null );
		MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D* L_2 = V_0;
		NullCheck(L_2);
		MediaSaveCallback_Invoke_mD97247E7132D61D5D8C1E3063FEF0C09205E925C_inline(L_2, (bool)1, (String_t*)NULL, NULL);
	}

IL_0019:
	{
		// }
		return;
	}
}
// System.Void NativeGalleryNamespace.NGMediaSaveCallbackiOS::OnMediaSaveFailed(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NGMediaSaveCallbackiOS_OnMediaSaveFailed_mE81BDC65F8159F6CE0EEAD4D78415F6C1F84918C (NGMediaSaveCallbackiOS_t31F72978BB8FB757F7580EABA2D1EDFEAE2E87B9* __this, String_t* ___0_error, const RuntimeMethod* method) 
{
	MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D* V_0 = NULL;
	{
		// NativeGallery.MediaSaveCallback _callback = callback;
		MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D* L_0 = __this->___callback_5;
		V_0 = L_0;
		// callback = null;
		__this->___callback_5 = (MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___callback_5), (void*)(MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D*)NULL);
		// if( _callback != null )
		MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// _callback( false, null );
		MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D* L_2 = V_0;
		NullCheck(L_2);
		MediaSaveCallback_Invoke_mD97247E7132D61D5D8C1E3063FEF0C09205E925C_inline(L_2, (bool)0, (String_t*)NULL, NULL);
	}

IL_0019:
	{
		// }
		return;
	}
}
// System.Void NativeGalleryNamespace.NGMediaSaveCallbackiOS::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NGMediaSaveCallbackiOS__ctor_mBAC62B3A8CFA91057F5BB4C94D531D61DC5D1883 (NGMediaSaveCallbackiOS_t31F72978BB8FB757F7580EABA2D1EDFEAE2E87B9* __this, const RuntimeMethod* method) 
{
	{
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
// System.Void NativeGalleryNamespace.NGPermissionCallbackiOS::Initialize(NativeGallery/PermissionCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NGPermissionCallbackiOS_Initialize_m524E1B648EBBF449C62B026E9661BEECD01F98EC (PermissionCallback_t43E69EC9D59F3ADAC411FBE19A499BCB840180D4* ___0_callback, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisNGPermissionCallbackiOS_t966C11FC5C548BAB341244C5EB5AC30D800DA565_mC93D2316465EF7CE745199E63FF2479A6A74ABD4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NGPermissionCallbackiOS_t966C11FC5C548BAB341244C5EB5AC30D800DA565_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral04309E09A3FA7B4409871040A25A32799050D487);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if( instance == null )
		NGPermissionCallbackiOS_t966C11FC5C548BAB341244C5EB5AC30D800DA565* L_0 = ((NGPermissionCallbackiOS_t966C11FC5C548BAB341244C5EB5AC30D800DA565_StaticFields*)il2cpp_codegen_static_fields_for(NGPermissionCallbackiOS_t966C11FC5C548BAB341244C5EB5AC30D800DA565_il2cpp_TypeInfo_var))->___instance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0032;
		}
	}
	{
		// instance = new GameObject( "NGPermissionCallbackiOS" ).AddComponent<NGPermissionCallbackiOS>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_2, _stringLiteral04309E09A3FA7B4409871040A25A32799050D487, NULL);
		NullCheck(L_2);
		NGPermissionCallbackiOS_t966C11FC5C548BAB341244C5EB5AC30D800DA565* L_3;
		L_3 = GameObject_AddComponent_TisNGPermissionCallbackiOS_t966C11FC5C548BAB341244C5EB5AC30D800DA565_mC93D2316465EF7CE745199E63FF2479A6A74ABD4(L_2, GameObject_AddComponent_TisNGPermissionCallbackiOS_t966C11FC5C548BAB341244C5EB5AC30D800DA565_mC93D2316465EF7CE745199E63FF2479A6A74ABD4_RuntimeMethod_var);
		((NGPermissionCallbackiOS_t966C11FC5C548BAB341244C5EB5AC30D800DA565_StaticFields*)il2cpp_codegen_static_fields_for(NGPermissionCallbackiOS_t966C11FC5C548BAB341244C5EB5AC30D800DA565_il2cpp_TypeInfo_var))->___instance_4 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((NGPermissionCallbackiOS_t966C11FC5C548BAB341244C5EB5AC30D800DA565_StaticFields*)il2cpp_codegen_static_fields_for(NGPermissionCallbackiOS_t966C11FC5C548BAB341244C5EB5AC30D800DA565_il2cpp_TypeInfo_var))->___instance_4), (void*)L_3);
		// DontDestroyOnLoad( instance.gameObject );
		NGPermissionCallbackiOS_t966C11FC5C548BAB341244C5EB5AC30D800DA565* L_4 = ((NGPermissionCallbackiOS_t966C11FC5C548BAB341244C5EB5AC30D800DA565_StaticFields*)il2cpp_codegen_static_fields_for(NGPermissionCallbackiOS_t966C11FC5C548BAB341244C5EB5AC30D800DA565_il2cpp_TypeInfo_var))->___instance_4;
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7(L_5, NULL);
		goto IL_004e;
	}

IL_0032:
	{
		// else if( instance.callback != null )
		NGPermissionCallbackiOS_t966C11FC5C548BAB341244C5EB5AC30D800DA565* L_6 = ((NGPermissionCallbackiOS_t966C11FC5C548BAB341244C5EB5AC30D800DA565_StaticFields*)il2cpp_codegen_static_fields_for(NGPermissionCallbackiOS_t966C11FC5C548BAB341244C5EB5AC30D800DA565_il2cpp_TypeInfo_var))->___instance_4;
		NullCheck(L_6);
		PermissionCallback_t43E69EC9D59F3ADAC411FBE19A499BCB840180D4* L_7 = L_6->___callback_5;
		if (!L_7)
		{
			goto IL_004e;
		}
	}
	{
		// instance.callback( NativeGallery.Permission.ShouldAsk );
		NGPermissionCallbackiOS_t966C11FC5C548BAB341244C5EB5AC30D800DA565* L_8 = ((NGPermissionCallbackiOS_t966C11FC5C548BAB341244C5EB5AC30D800DA565_StaticFields*)il2cpp_codegen_static_fields_for(NGPermissionCallbackiOS_t966C11FC5C548BAB341244C5EB5AC30D800DA565_il2cpp_TypeInfo_var))->___instance_4;
		NullCheck(L_8);
		PermissionCallback_t43E69EC9D59F3ADAC411FBE19A499BCB840180D4* L_9 = L_8->___callback_5;
		NullCheck(L_9);
		PermissionCallback_Invoke_mDFCBF3C4C5BFC95CBDC25A75169BA876EE76BB40_inline(L_9, 2, NULL);
	}

IL_004e:
	{
		// instance.callback = callback;
		NGPermissionCallbackiOS_t966C11FC5C548BAB341244C5EB5AC30D800DA565* L_10 = ((NGPermissionCallbackiOS_t966C11FC5C548BAB341244C5EB5AC30D800DA565_StaticFields*)il2cpp_codegen_static_fields_for(NGPermissionCallbackiOS_t966C11FC5C548BAB341244C5EB5AC30D800DA565_il2cpp_TypeInfo_var))->___instance_4;
		PermissionCallback_t43E69EC9D59F3ADAC411FBE19A499BCB840180D4* L_11 = ___0_callback;
		NullCheck(L_10);
		L_10->___callback_5 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&L_10->___callback_5), (void*)L_11);
		// }
		return;
	}
}
// System.Void NativeGalleryNamespace.NGPermissionCallbackiOS::OnPermissionRequested(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NGPermissionCallbackiOS_OnPermissionRequested_m832B99CE23D4D2A1BBEA78EF7659F5DE7A98E451 (NGPermissionCallbackiOS_t966C11FC5C548BAB341244C5EB5AC30D800DA565* __this, String_t* ___0_message, const RuntimeMethod* method) 
{
	PermissionCallback_t43E69EC9D59F3ADAC411FBE19A499BCB840180D4* V_0 = NULL;
	{
		// NativeGallery.PermissionCallback _callback = callback;
		PermissionCallback_t43E69EC9D59F3ADAC411FBE19A499BCB840180D4* L_0 = __this->___callback_5;
		V_0 = L_0;
		// callback = null;
		__this->___callback_5 = (PermissionCallback_t43E69EC9D59F3ADAC411FBE19A499BCB840180D4*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___callback_5), (void*)(PermissionCallback_t43E69EC9D59F3ADAC411FBE19A499BCB840180D4*)NULL);
		// if( _callback != null )
		PermissionCallback_t43E69EC9D59F3ADAC411FBE19A499BCB840180D4* L_1 = V_0;
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		// _callback( (NativeGallery.Permission) int.Parse( message ) );
		PermissionCallback_t43E69EC9D59F3ADAC411FBE19A499BCB840180D4* L_2 = V_0;
		String_t* L_3 = ___0_message;
		int32_t L_4;
		L_4 = Int32_Parse_m273CA1A9C7717C99641291A95C543711C0202AF0(L_3, NULL);
		NullCheck(L_2);
		PermissionCallback_Invoke_mDFCBF3C4C5BFC95CBDC25A75169BA876EE76BB40_inline(L_2, L_4, NULL);
	}

IL_001d:
	{
		// }
		return;
	}
}
// System.Void NativeGalleryNamespace.NGPermissionCallbackiOS::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NGPermissionCallbackiOS__ctor_m50DAE52F26ED31EBDF86E33F0055D2D1CE74EA47 (NGPermissionCallbackiOS_t966C11FC5C548BAB341244C5EB5AC30D800DA565* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool NGMediaReceiveCallbackiOS_get_IsBusy_mBD81A0B09C4B317F2CB308B31C7855AD835475E7_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NGMediaReceiveCallbackiOS_tD90DF712E9D1B5AE35D625194DB2E09EABAD0280_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static bool IsBusy { get; private set; }
		bool L_0 = ((NGMediaReceiveCallbackiOS_tD90DF712E9D1B5AE35D625194DB2E09EABAD0280_StaticFields*)il2cpp_codegen_static_fields_for(NGMediaReceiveCallbackiOS_tD90DF712E9D1B5AE35D625194DB2E09EABAD0280_il2cpp_TypeInfo_var))->___U3CIsBusyU3Ek__BackingField_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MediaSaveCallback_Invoke_mD97247E7132D61D5D8C1E3063FEF0C09205E925C_inline (MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D* __this, bool ___0_success, String_t* ___1_path, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, bool, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_success, ___1_path, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MediaPickCallback_Invoke_m25F1FD61CF9FE4C835CD3298D790CBB61691BC4E_inline (MediaPickCallback_tC207F6F3EEE18F64B03E23D5C9FA8C79517A5EB6* __this, String_t* ___0_path, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_path, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MediaPickMultipleCallback_Invoke_m5FE7D489E8659411C7E24DB7E892B439C9990F3D_inline (MediaPickMultipleCallback_t717A5D378751E2CACB53E6BA25386FF8DB41627B* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_paths, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_paths, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PermissionCallback_Invoke_mDFCBF3C4C5BFC95CBDC25A75169BA876EE76BB40_inline (PermissionCallback_t43E69EC9D59F3ADAC411FBE19A499BCB840180D4* __this, int32_t ___0_permission, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_permission, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NGMediaReceiveCallbackiOS_set_IsBusy_mCAED428338143B723D506CCB819AE1A2B10D1452_inline (bool ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NGMediaReceiveCallbackiOS_tD90DF712E9D1B5AE35D625194DB2E09EABAD0280_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static bool IsBusy { get; private set; }
		bool L_0 = ___0_value;
		((NGMediaReceiveCallbackiOS_tD90DF712E9D1B5AE35D625194DB2E09EABAD0280_StaticFields*)il2cpp_codegen_static_fields_for(NGMediaReceiveCallbackiOS_tD90DF712E9D1B5AE35D625194DB2E09EABAD0280_il2cpp_TypeInfo_var))->___U3CIsBusyU3Ek__BackingField_8 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Task_1_t8DED34447688BFCF5112B0D05D5A80CED94E4BFB* TaskCompletionSource_1_get_Task_mB4A2FF75AC28BB6E3B7A55129E9CD347E5F06FDC_gshared_inline (TaskCompletionSource_1_tF8DA32849B904AE4F51ECAF6C6D7FA080481A35A* __this, const RuntimeMethod* method) 
{
	{
		Task_1_t8DED34447688BFCF5112B0D05D5A80CED94E4BFB* L_0 = __this->____task_0;
		return L_0;
	}
}
