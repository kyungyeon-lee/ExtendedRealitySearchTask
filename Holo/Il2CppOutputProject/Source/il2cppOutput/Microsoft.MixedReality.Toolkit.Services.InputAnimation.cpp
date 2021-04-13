﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
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

// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer,System.UInt32>
struct Dictionary_2_tB877F46A6C20A56DEA8ED6DC3E004A3171647E3B;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8;
// System.Collections.Generic.Dictionary`2<System.Int32Enum,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>
struct Dictionary_2_tAFEDE3C9AA32099A79643638296C906CB91D1ED1;
// System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Object>
struct Dictionary_2_t7E8D40B461AB586AEA5DD75D8354C4913EEB1337;
// System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>
struct Dictionary_2_tABC45B7C67E921F533EBEF222CFE2B891AA1E098;
// System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Input.InputAnimation/PoseCurves>
struct Dictionary_2_tF3976454D4ACA03F9E231469CB7AA87B3D4745B0;
// System.Func`1<Microsoft.MixedReality.Toolkit.Input.InputAnimation>
struct Func_1_tB0603EAA5A40D7E49AB43A40191F152B2BABFE2D;
// System.Func`1<System.Object>
struct Func_1_t807CEE610086E24A0167BAA97A64062016E09D49;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<Microsoft.MixedReality.Toolkit.Input.InputAnimation>>
struct Func_2_t60234BEFF912B17E5B854081B3E154E746B06B84;
// System.Collections.Generic.IEnumerable`1<UnityEngine.AnimationCurve>
struct IEnumerable_1_tD13D2D64E568FB0AB0AC501FB0D1F1DF895D81A3;
// System.Collections.Generic.IEnumerator`1<UnityEngine.AnimationCurve>
struct IEnumerator_1_t9F362DF58E8D36C35D0707AEAABC831BC4C60796;
// System.Collections.Generic.IEnumerator`1<Microsoft.MixedReality.Toolkit.Input.InputRecordingBuffer/Keyframe>
struct IEnumerator_1_t8BDEE2CC264A0B305BB010E90D0BADB1A42FD86F;
// System.Collections.Generic.IEqualityComparer`1<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint>
struct IEqualityComparer_1_tF9B48F7120BFB759EE9353FBE3691618B52BFE91;
// System.Collections.Generic.Dictionary`2/KeyCollection<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>
struct KeyCollection_t95E65C50A8C48FB1D823F12AABED5C739471D39D;
// System.Collections.Generic.Dictionary`2/KeyCollection<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Input.InputAnimation/PoseCurves>
struct KeyCollection_t0ACD9E8A608189FB269275D328F414B9C0A73920;
// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Input.InputAnimationMarker>
struct List_1_tAAD05033EDA4EAF37AE770A3EDAB1B555706FEFD;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Predicate`1<System.Object>
struct Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD;
// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64;
// System.Collections.Generic.Queue`1<Microsoft.MixedReality.Toolkit.Input.InputRecordingBuffer/Keyframe>
struct Queue_1_t6983AF29DC5F881F3157AC042F9F24494864A613;
// System.Threading.Tasks.TaskFactory`1<Microsoft.MixedReality.Toolkit.Input.InputAnimation>
struct TaskFactory_1_tC5773A7F5FB0315235DABE4696D4D0ABF288DE0D;
// System.Threading.Tasks.Task`1<Microsoft.MixedReality.Toolkit.Input.InputAnimation>
struct Task_1_tB231B84F8F2E5D004D7EE56C7AC413E80914BC74;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32Enum,System.Object>
struct ValueCollection_t5373BD128F5AE1EA1689DBC1D1B58C837368E16A;
// System.Collections.Generic.Dictionary`2/ValueCollection<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>
struct ValueCollection_t402005AD43CDEE0693B9204BFA8489BA470A2141;
// System.Collections.Generic.Dictionary`2/ValueCollection<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Input.InputAnimation/PoseCurves>
struct ValueCollection_tD80A9007D68EC421B749FEFB42D345EAA73519FE;
// System.Collections.Generic.Dictionary`2/Entry<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>[]
struct EntryU5BU5D_tABAADCF1CFD8ABE04EA395A1D01AD03D12675182;
// System.Collections.Generic.Dictionary`2/Entry<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Input.InputAnimation/PoseCurves>[]
struct EntryU5BU5D_tCEABD67DDA3A87458B5F60A1D5F51911A28A576B;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// Microsoft.MixedReality.Toolkit.Input.InputAnimationMarker[]
struct InputAnimationMarkerU5BU5D_t77B9CD8438EC2FE6B3BDEBD810EFE1F6F2DAB5ED;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// UnityEngine.Keyframe[]
struct KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager/PointerConfig[]
struct PointerConfigU5BU5D_t17182F245D18BDE8E16CCF14BC0FF2793EF9B08E;
// Microsoft.MixedReality.Toolkit.Input.InputRecordingBuffer/Keyframe[]
struct KeyframeU5BU5D_tC28319B4E960745A5C7B5780CBB7864F7550377F;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// UnityEngine.AnimationCurve
struct AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile
struct BaseMixedRealityProfile_tC5DBD7146B1E1D467DE81BA1EAB45133408A59E1;
// Microsoft.MixedReality.Toolkit.BaseService
struct BaseService_tF2C2512816D1D0EE872AC911E3BAF7F9E5A44C16;
// System.IO.BinaryReader
struct BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128;
// System.IO.BinaryWriter
struct BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// System.Threading.ContextCallback
struct ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B;
// System.Text.Decoder
struct Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.Text.Encoder
struct Encoder_t5095F24D3B1D0F70D08762B980731B9F1ADEE56A;
// System.Text.Encoding
struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827;
// System.Exception
struct Exception_t;
// System.IO.FileStream
struct FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_tAE063F84A60E1058FCA4E3EA9F555D3462641F7D;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityEyeGazeProvider
struct IMixedRealityEyeGazeProvider_tA854FE94B4C220F8742E193148C51A8C30744627;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityHand
struct IMixedRealityHand_tB96854B832897326062BFD0375B083FC175A47BB;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem
struct IMixedRealityInputSystem_t0EDEF390D5E8DB56C2251E372228BADDA9F6CF24;
// Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar
struct IMixedRealityServiceRegistrar_t81B35976BCAABB86634D8CAB6C5EBECE36D65D3A;
// Microsoft.MixedReality.Toolkit.Input.InputAnimation
struct InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534;
// Microsoft.MixedReality.Toolkit.Input.InputAnimationMarker
struct InputAnimationMarker_t4807C7C71F5EAE69A38D8AFBDC85B6FD4F25C376;
// Microsoft.MixedReality.Toolkit.Input.InputRecordingBuffer
struct InputRecordingBuffer_tA6CEDA373266AD73D32A749E89D2D87FD6635E4F;
// Microsoft.MixedReality.Toolkit.Input.InputRecordingService
struct InputRecordingService_tA847B98505BE7064D6751CD73492550FE4A2338B;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputRecordingProfile
struct MixedRealityInputRecordingProfile_t56C7B027300F96474C48A61DF0A7EFAA8E41EA91;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping
struct MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// Microsoft.Win32.SafeHandles.SafeFileHandle
struct SafeFileHandle_tC77A9860A03C31DC46AD2C08EC10EACDC3B7A662;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385;
// System.Threading.Tasks.StackGuard
struct StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D;
// System.IO.Stream
struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB;
// System.String
struct String_t;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// System.Type
struct Type_t;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D;
// Microsoft.MixedReality.Toolkit.Input.InputAnimation/<>c__DisplayClass50_0
struct U3CU3Ec__DisplayClass50_0_t08F1F4C926CDEC2D77202D77B7C64F0B4D3B20B5;
// Microsoft.MixedReality.Toolkit.Input.InputAnimation/<GetAllAnimationCurves>d__60
struct U3CGetAllAnimationCurvesU3Ed__60_tABFAAE907711737282276C10EB4C546A49E1D0C4;
// Microsoft.MixedReality.Toolkit.Input.InputAnimation/PoseCurves
struct PoseCurves_t14269C65E2E6B6A532EF4AC78324976DF2587501;
// Microsoft.MixedReality.Toolkit.Input.InputAnimation/RayCurves
struct RayCurves_tE200BC10F2980B31D68E54E46BB6EB32508F5604;
// Microsoft.MixedReality.Toolkit.Input.InputRecordingBuffer/Keyframe
struct Keyframe_tB3167A15EF7CB57AA5C8498D640C6254A16F5B3F;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0;

IL2CPP_EXTERN_C RuntimeClass* Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncTaskMethodBuilder_1_tF3202EB14A45BB67CE82B3124E365B8DEFF9BF80_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CoreServices_tB5CDABAF57AEFF02EB99AEC0144C51C89D980A26_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tABC45B7C67E921F533EBEF222CFE2B891AA1E098_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tF3976454D4ACA03F9E231469CB7AA87B3D4745B0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enumerator_t68B017BFDF640B5A9938D0FD1BEAE9B802896902_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_tB0603EAA5A40D7E49AB43A40191F152B2BABFE2D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_tD13D2D64E568FB0AB0AC501FB0D1F1DF895D81A3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t8BDEE2CC264A0B305BB010E90D0BADB1A42FD86F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t9F362DF58E8D36C35D0707AEAABC831BC4C60796_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityController_t5BA6263C4B870B16D3E72209A7E762A0DB89DE16_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityEyeGazeProvider_tA854FE94B4C220F8742E193148C51A8C30744627_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityHand_tB96854B832897326062BFD0375B083FC175A47BB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityInputSystem_t0EDEF390D5E8DB56C2251E372228BADDA9F6CF24_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InputAnimationMarker_t4807C7C71F5EAE69A38D8AFBDC85B6FD4F25C376_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InputAnimationSerializationUtils_tBF0CF9A1A3138FAC30FF8F17528259A9C7A31560_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InputRecordingBuffer_tA6CEDA373266AD73D32A749E89D2D87FD6635E4F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InputRecordingService_tA847B98505BE7064D6751CD73492550FE4A2338B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Keyframe_tB3167A15EF7CB57AA5C8498D640C6254A16F5B3F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tAAD05033EDA4EAF37AE770A3EDAB1B555706FEFD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MixedRealityInputRecordingProfile_t56C7B027300F96474C48A61DF0A7EFAA8E41EA91_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PoseCurves_t14269C65E2E6B6A532EF4AC78324976DF2587501_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Queue_1_t6983AF29DC5F881F3157AC042F9F24494864A613_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RayCurves_tE200BC10F2980B31D68E54E46BB6EB32508F5604_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TrackedHandJointU5BU5D_tFA1152B947AB07ACF1DFE43B4A96139E3340B76F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CGetAllAnimationCurvesU3Ed__60_tABFAAE907711737282276C10EB4C546A49E1D0C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass50_0_t08F1F4C926CDEC2D77202D77B7C64F0B4D3B20B5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral06265567ED5B353F62334C6ED834095E8F3DA213;
IL2CPP_EXTERN_C String_t* _stringLiteral07F96E76E35E18FF6CE65A73E42CD0652022C014;
IL2CPP_EXTERN_C String_t* _stringLiteral10D826E55CA66B177C3CA8E6D951B2AAC0D06ADC;
IL2CPP_EXTERN_C String_t* _stringLiteral2C1AA484EA907D9AF79CB68FD3615B8BA6AFA10B;
IL2CPP_EXTERN_C String_t* _stringLiteral2C71071781ACA763255B49C62BBF32A19A63C633;
IL2CPP_EXTERN_C String_t* _stringLiteral2F30A225B0E18CECF032D8CBEBC2F77FFC6A9B2B;
IL2CPP_EXTERN_C String_t* _stringLiteral845601714FB132030B7585887918D078E9CE2267;
IL2CPP_EXTERN_C String_t* _stringLiteralD1B4A550FE7439DE4FDA569B91A4624B59B45E5B;
IL2CPP_EXTERN_C String_t* _stringLiteralD98EEFA57F0D44C301E0D9E2C28732491D85C1C5;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tF2BE961DAB576F8235B3EAB1BEE2B129DBB64946_TisU3CFromStreamAsyncU3Ed__50_t0BAABAB4A343E3F573925043CD5CA6AE4597B105_m58493BDEF4A6C3F4B4F122B6CF9D508148FD8439_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Create_m0922E4F71FBE68393EFE1CB2DF6B0CC1E8750311_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetException_m3483106EB75F67C47745F99FE942FB5DED5C8CBC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetResult_m4DBC215CEA1BEB17872ECEF25586C634F1CC2B1F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetStateMachine_m33CD0EF551559886D61544398F8BBB9D271B711D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Start_TisU3CFromStreamAsyncU3Ed__50_t0BAABAB4A343E3F573925043CD5CA6AE4597B105_m930F216CA1D8F5030881615AC47D2A6200A0339D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_get_Task_m8EE8D2BE14C6B9E58020C428066962B1CBC1D617_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m4EDC557BB444444293757D2606B103B6AFAD82DC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mBABE943B5031B118F97BF59E84A11816B6039FB1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m9CC878FE7F12DF8B4C25C62C80A68ECAC784E0C0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_mA86A48F1F8E01B36CF0D80C36B3C67755D6D00BE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m6402146F3FF0E69515A75BAC03F56D27ECABE563_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mEBA54D53782CDC8695416345EA43239C678D9804_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Values_m96235BF869B2ECF2B290BDD4F6D7B022FFF0A12D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m76A593F013DC32969E61C317E654D6760B4D1E8A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mE6C2E4D4F02A516C58A877AB592B442E4B745D72_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m53C61470937E0B112AF53FDAEEF861A3534696FB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m578FD92B67B741D322B93809002331AF35670FF0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m1277D43589A00582FC8007628E3520223E1F2F61_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mFB5CC68B705B48844631C1360EF6CB6ED7199C3F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_1__ctor_mAA1A3929916574EE561C7F2CDE37EC73B53254AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputAnimationSerializationUtils_ReadHeader_mD6A04D247F935A880FBFC506C3F3496E054AF66E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m79968F703F97E8C1B850A74C6BF7581665CB1507_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m6C1D207CF0E996831A7606C1AB9209509C843BF7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m2F49E6477919ABC49651A226799364621C80EE19_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m5347526F2143EC38B80D32DED1B6DB92D805C670_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m7B5C118BF4B6FA8874F6370190A0C2F001CA54CF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_set_Capacity_mF2BC1ADE2A9619E4BE410FC1014BA5999FCF02D6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_GetValueOrDefault_mB4CE6E77EC85DD762FDA6C24F96EBC2A75E28546_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m32EB6B5DB3EA9B62B49C29C367AFAD991AC2A53A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m9D7EBA0DE2F89A891507EC35157C70FC4DC81184_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_m7897F8E6F5E7968B14AEE7B3B5719B6B3CE4292C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_mBC700ACC6A8110AF4C3911F6866195856CADA20F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Clear_m5D53E24BE1FF59818BED534E8EB9F5BBCA0D8390_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Dequeue_m46868C1E95A0FA17E63EEC454067A5C0FFC7E46F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Enqueue_m31E9400DB21C3E0CC8349B2C7566D6D4869D4F9E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_GetEnumerator_m205EE33811A2CEA16A8A4B86B1798421FDD01127_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Peek_mB3153BAE9034B20254393FA4C73FA78C0F27A401_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1__ctor_mEE9F113DA333DE72BB526E682C731DA547CA37E1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_get_Count_mD86B9C3F43E36831A4BBD81862C08D02E776CB6C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_GetResult_m19BF9AC201BF1F535D3E2D2912CDAE39A91AA335_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_m9711AC9172AB7AD4384188CB1A852A50279D976C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_GetAwaiter_m5E744BD98B186A9A56DBF2A7680F2FBABE1DF413_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_Run_TisInputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534_m99D2DCD3A6DAD2C11427B66A4B48AE3079782374_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGetAllAnimationCurvesU3Ed__60_System_Collections_IEnumerator_Reset_m36EB10FC3F960C1139BDDED85B7CF563D4707A82_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass50_0_U3CFromStreamAsyncU3Eb__0_mCA8652CFD02F2DEAC4C03D654D917F7BD8FB898D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueCollection_GetEnumerator_m7C12538788587A8F4DA13E1467AA2C2E38C1066C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* TrackedHandJoint_tFDADC49BA87BC6CBE390A69B0CC80925BAA37FD6_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC;
struct MixedRealityInteractionMappingU5BU5D_tCD44540A965834E27292C207E9BB647B895CB2E7;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
struct TrackedHandJointU5BU5D_tFA1152B947AB07ACF1DFE43B4A96139E3340B76F;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_tA3CA6CD8769499EDB008A59A9D1FB9346F35A98F 
{
public:

public:
};


// System.Object


// System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>
struct  Dictionary_2_tABC45B7C67E921F533EBEF222CFE2B891AA1E098  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tABAADCF1CFD8ABE04EA395A1D01AD03D12675182* ___entries_1;
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
	KeyCollection_t95E65C50A8C48FB1D823F12AABED5C739471D39D * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t402005AD43CDEE0693B9204BFA8489BA470A2141 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tABC45B7C67E921F533EBEF222CFE2B891AA1E098, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tABC45B7C67E921F533EBEF222CFE2B891AA1E098, ___entries_1)); }
	inline EntryU5BU5D_tABAADCF1CFD8ABE04EA395A1D01AD03D12675182* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tABAADCF1CFD8ABE04EA395A1D01AD03D12675182** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tABAADCF1CFD8ABE04EA395A1D01AD03D12675182* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tABC45B7C67E921F533EBEF222CFE2B891AA1E098, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tABC45B7C67E921F533EBEF222CFE2B891AA1E098, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tABC45B7C67E921F533EBEF222CFE2B891AA1E098, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tABC45B7C67E921F533EBEF222CFE2B891AA1E098, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tABC45B7C67E921F533EBEF222CFE2B891AA1E098, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tABC45B7C67E921F533EBEF222CFE2B891AA1E098, ___keys_7)); }
	inline KeyCollection_t95E65C50A8C48FB1D823F12AABED5C739471D39D * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t95E65C50A8C48FB1D823F12AABED5C739471D39D ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t95E65C50A8C48FB1D823F12AABED5C739471D39D * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tABC45B7C67E921F533EBEF222CFE2B891AA1E098, ___values_8)); }
	inline ValueCollection_t402005AD43CDEE0693B9204BFA8489BA470A2141 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t402005AD43CDEE0693B9204BFA8489BA470A2141 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t402005AD43CDEE0693B9204BFA8489BA470A2141 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tABC45B7C67E921F533EBEF222CFE2B891AA1E098, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Input.InputAnimation/PoseCurves>
struct  Dictionary_2_tF3976454D4ACA03F9E231469CB7AA87B3D4745B0  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tCEABD67DDA3A87458B5F60A1D5F51911A28A576B* ___entries_1;
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
	KeyCollection_t0ACD9E8A608189FB269275D328F414B9C0A73920 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tD80A9007D68EC421B749FEFB42D345EAA73519FE * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tF3976454D4ACA03F9E231469CB7AA87B3D4745B0, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tF3976454D4ACA03F9E231469CB7AA87B3D4745B0, ___entries_1)); }
	inline EntryU5BU5D_tCEABD67DDA3A87458B5F60A1D5F51911A28A576B* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tCEABD67DDA3A87458B5F60A1D5F51911A28A576B** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tCEABD67DDA3A87458B5F60A1D5F51911A28A576B* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tF3976454D4ACA03F9E231469CB7AA87B3D4745B0, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tF3976454D4ACA03F9E231469CB7AA87B3D4745B0, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tF3976454D4ACA03F9E231469CB7AA87B3D4745B0, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tF3976454D4ACA03F9E231469CB7AA87B3D4745B0, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tF3976454D4ACA03F9E231469CB7AA87B3D4745B0, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tF3976454D4ACA03F9E231469CB7AA87B3D4745B0, ___keys_7)); }
	inline KeyCollection_t0ACD9E8A608189FB269275D328F414B9C0A73920 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t0ACD9E8A608189FB269275D328F414B9C0A73920 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t0ACD9E8A608189FB269275D328F414B9C0A73920 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tF3976454D4ACA03F9E231469CB7AA87B3D4745B0, ___values_8)); }
	inline ValueCollection_tD80A9007D68EC421B749FEFB42D345EAA73519FE * get_values_8() const { return ___values_8; }
	inline ValueCollection_tD80A9007D68EC421B749FEFB42D345EAA73519FE ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tD80A9007D68EC421B749FEFB42D345EAA73519FE * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tF3976454D4ACA03F9E231469CB7AA87B3D4745B0, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Input.InputAnimationMarker>
struct  List_1_tAAD05033EDA4EAF37AE770A3EDAB1B555706FEFD  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	InputAnimationMarkerU5BU5D_t77B9CD8438EC2FE6B3BDEBD810EFE1F6F2DAB5ED* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tAAD05033EDA4EAF37AE770A3EDAB1B555706FEFD, ____items_1)); }
	inline InputAnimationMarkerU5BU5D_t77B9CD8438EC2FE6B3BDEBD810EFE1F6F2DAB5ED* get__items_1() const { return ____items_1; }
	inline InputAnimationMarkerU5BU5D_t77B9CD8438EC2FE6B3BDEBD810EFE1F6F2DAB5ED** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(InputAnimationMarkerU5BU5D_t77B9CD8438EC2FE6B3BDEBD810EFE1F6F2DAB5ED* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tAAD05033EDA4EAF37AE770A3EDAB1B555706FEFD, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tAAD05033EDA4EAF37AE770A3EDAB1B555706FEFD, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tAAD05033EDA4EAF37AE770A3EDAB1B555706FEFD, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tAAD05033EDA4EAF37AE770A3EDAB1B555706FEFD_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	InputAnimationMarkerU5BU5D_t77B9CD8438EC2FE6B3BDEBD810EFE1F6F2DAB5ED* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tAAD05033EDA4EAF37AE770A3EDAB1B555706FEFD_StaticFields, ____emptyArray_5)); }
	inline InputAnimationMarkerU5BU5D_t77B9CD8438EC2FE6B3BDEBD810EFE1F6F2DAB5ED* get__emptyArray_5() const { return ____emptyArray_5; }
	inline InputAnimationMarkerU5BU5D_t77B9CD8438EC2FE6B3BDEBD810EFE1F6F2DAB5ED** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(InputAnimationMarkerU5BU5D_t77B9CD8438EC2FE6B3BDEBD810EFE1F6F2DAB5ED* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct  List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5  : public RuntimeObject
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


// System.Collections.Generic.Queue`1<System.Object>
struct  Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Queue`1::_array
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;
	// System.Object System.Collections.Generic.Queue`1::_syncRoot
	RuntimeObject * ____syncRoot_5;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64, ____array_0)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__array_0() const { return ____array_0; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__head_1() { return static_cast<int32_t>(offsetof(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64, ____head_1)); }
	inline int32_t get__head_1() const { return ____head_1; }
	inline int32_t* get_address_of__head_1() { return &____head_1; }
	inline void set__head_1(int32_t value)
	{
		____head_1 = value;
	}

	inline static int32_t get_offset_of__tail_2() { return static_cast<int32_t>(offsetof(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64, ____tail_2)); }
	inline int32_t get__tail_2() const { return ____tail_2; }
	inline int32_t* get_address_of__tail_2() { return &____tail_2; }
	inline void set__tail_2(int32_t value)
	{
		____tail_2 = value;
	}

	inline static int32_t get_offset_of__size_3() { return static_cast<int32_t>(offsetof(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64, ____size_3)); }
	inline int32_t get__size_3() const { return ____size_3; }
	inline int32_t* get_address_of__size_3() { return &____size_3; }
	inline void set__size_3(int32_t value)
	{
		____size_3 = value;
	}

	inline static int32_t get_offset_of__version_4() { return static_cast<int32_t>(offsetof(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64, ____version_4)); }
	inline int32_t get__version_4() const { return ____version_4; }
	inline int32_t* get_address_of__version_4() { return &____version_4; }
	inline void set__version_4(int32_t value)
	{
		____version_4 = value;
	}

	inline static int32_t get_offset_of__syncRoot_5() { return static_cast<int32_t>(offsetof(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64, ____syncRoot_5)); }
	inline RuntimeObject * get__syncRoot_5() const { return ____syncRoot_5; }
	inline RuntimeObject ** get_address_of__syncRoot_5() { return &____syncRoot_5; }
	inline void set__syncRoot_5(RuntimeObject * value)
	{
		____syncRoot_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_5), (void*)value);
	}
};


// System.Collections.Generic.Queue`1<Microsoft.MixedReality.Toolkit.Input.InputRecordingBuffer/Keyframe>
struct  Queue_1_t6983AF29DC5F881F3157AC042F9F24494864A613  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Queue`1::_array
	KeyframeU5BU5D_tC28319B4E960745A5C7B5780CBB7864F7550377F* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;
	// System.Object System.Collections.Generic.Queue`1::_syncRoot
	RuntimeObject * ____syncRoot_5;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Queue_1_t6983AF29DC5F881F3157AC042F9F24494864A613, ____array_0)); }
	inline KeyframeU5BU5D_tC28319B4E960745A5C7B5780CBB7864F7550377F* get__array_0() const { return ____array_0; }
	inline KeyframeU5BU5D_tC28319B4E960745A5C7B5780CBB7864F7550377F** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(KeyframeU5BU5D_tC28319B4E960745A5C7B5780CBB7864F7550377F* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__head_1() { return static_cast<int32_t>(offsetof(Queue_1_t6983AF29DC5F881F3157AC042F9F24494864A613, ____head_1)); }
	inline int32_t get__head_1() const { return ____head_1; }
	inline int32_t* get_address_of__head_1() { return &____head_1; }
	inline void set__head_1(int32_t value)
	{
		____head_1 = value;
	}

	inline static int32_t get_offset_of__tail_2() { return static_cast<int32_t>(offsetof(Queue_1_t6983AF29DC5F881F3157AC042F9F24494864A613, ____tail_2)); }
	inline int32_t get__tail_2() const { return ____tail_2; }
	inline int32_t* get_address_of__tail_2() { return &____tail_2; }
	inline void set__tail_2(int32_t value)
	{
		____tail_2 = value;
	}

	inline static int32_t get_offset_of__size_3() { return static_cast<int32_t>(offsetof(Queue_1_t6983AF29DC5F881F3157AC042F9F24494864A613, ____size_3)); }
	inline int32_t get__size_3() const { return ____size_3; }
	inline int32_t* get_address_of__size_3() { return &____size_3; }
	inline void set__size_3(int32_t value)
	{
		____size_3 = value;
	}

	inline static int32_t get_offset_of__version_4() { return static_cast<int32_t>(offsetof(Queue_1_t6983AF29DC5F881F3157AC042F9F24494864A613, ____version_4)); }
	inline int32_t get__version_4() const { return ____version_4; }
	inline int32_t* get_address_of__version_4() { return &____version_4; }
	inline void set__version_4(int32_t value)
	{
		____version_4 = value;
	}

	inline static int32_t get_offset_of__syncRoot_5() { return static_cast<int32_t>(offsetof(Queue_1_t6983AF29DC5F881F3157AC042F9F24494864A613, ____syncRoot_5)); }
	inline RuntimeObject * get__syncRoot_5() const { return ____syncRoot_5; }
	inline RuntimeObject ** get_address_of__syncRoot_5() { return &____syncRoot_5; }
	inline void set__syncRoot_5(RuntimeObject * value)
	{
		____syncRoot_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_5), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2/ValueCollection<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Input.InputAnimation/PoseCurves>
struct  ValueCollection_tD80A9007D68EC421B749FEFB42D345EAA73519FE  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::dictionary
	Dictionary_2_tF3976454D4ACA03F9E231469CB7AA87B3D4745B0 * ___dictionary_0;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(ValueCollection_tD80A9007D68EC421B749FEFB42D345EAA73519FE, ___dictionary_0)); }
	inline Dictionary_2_tF3976454D4ACA03F9E231469CB7AA87B3D4745B0 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_tF3976454D4ACA03F9E231469CB7AA87B3D4745B0 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_tF3976454D4ACA03F9E231469CB7AA87B3D4745B0 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.IO.BinaryReader
struct  BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128  : public RuntimeObject
{
public:
	// System.IO.Stream System.IO.BinaryReader::m_stream
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___m_stream_0;
	// System.Byte[] System.IO.BinaryReader::m_buffer
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___m_buffer_1;
	// System.Text.Decoder System.IO.BinaryReader::m_decoder
	Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370 * ___m_decoder_2;
	// System.Byte[] System.IO.BinaryReader::m_charBytes
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___m_charBytes_3;
	// System.Char[] System.IO.BinaryReader::m_singleChar
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___m_singleChar_4;
	// System.Char[] System.IO.BinaryReader::m_charBuffer
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___m_charBuffer_5;
	// System.Int32 System.IO.BinaryReader::m_maxCharsSize
	int32_t ___m_maxCharsSize_6;
	// System.Boolean System.IO.BinaryReader::m_2BytesPerChar
	bool ___m_2BytesPerChar_7;
	// System.Boolean System.IO.BinaryReader::m_isMemoryStream
	bool ___m_isMemoryStream_8;
	// System.Boolean System.IO.BinaryReader::m_leaveOpen
	bool ___m_leaveOpen_9;

public:
	inline static int32_t get_offset_of_m_stream_0() { return static_cast<int32_t>(offsetof(BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128, ___m_stream_0)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get_m_stream_0() const { return ___m_stream_0; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of_m_stream_0() { return &___m_stream_0; }
	inline void set_m_stream_0(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		___m_stream_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_stream_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_buffer_1() { return static_cast<int32_t>(offsetof(BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128, ___m_buffer_1)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_m_buffer_1() const { return ___m_buffer_1; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_m_buffer_1() { return &___m_buffer_1; }
	inline void set_m_buffer_1(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___m_buffer_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_buffer_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_decoder_2() { return static_cast<int32_t>(offsetof(BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128, ___m_decoder_2)); }
	inline Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370 * get_m_decoder_2() const { return ___m_decoder_2; }
	inline Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370 ** get_address_of_m_decoder_2() { return &___m_decoder_2; }
	inline void set_m_decoder_2(Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370 * value)
	{
		___m_decoder_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_decoder_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_charBytes_3() { return static_cast<int32_t>(offsetof(BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128, ___m_charBytes_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_m_charBytes_3() const { return ___m_charBytes_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_m_charBytes_3() { return &___m_charBytes_3; }
	inline void set_m_charBytes_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___m_charBytes_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_charBytes_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_singleChar_4() { return static_cast<int32_t>(offsetof(BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128, ___m_singleChar_4)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_m_singleChar_4() const { return ___m_singleChar_4; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_m_singleChar_4() { return &___m_singleChar_4; }
	inline void set_m_singleChar_4(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___m_singleChar_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_singleChar_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_charBuffer_5() { return static_cast<int32_t>(offsetof(BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128, ___m_charBuffer_5)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_m_charBuffer_5() const { return ___m_charBuffer_5; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_m_charBuffer_5() { return &___m_charBuffer_5; }
	inline void set_m_charBuffer_5(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___m_charBuffer_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_charBuffer_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_maxCharsSize_6() { return static_cast<int32_t>(offsetof(BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128, ___m_maxCharsSize_6)); }
	inline int32_t get_m_maxCharsSize_6() const { return ___m_maxCharsSize_6; }
	inline int32_t* get_address_of_m_maxCharsSize_6() { return &___m_maxCharsSize_6; }
	inline void set_m_maxCharsSize_6(int32_t value)
	{
		___m_maxCharsSize_6 = value;
	}

	inline static int32_t get_offset_of_m_2BytesPerChar_7() { return static_cast<int32_t>(offsetof(BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128, ___m_2BytesPerChar_7)); }
	inline bool get_m_2BytesPerChar_7() const { return ___m_2BytesPerChar_7; }
	inline bool* get_address_of_m_2BytesPerChar_7() { return &___m_2BytesPerChar_7; }
	inline void set_m_2BytesPerChar_7(bool value)
	{
		___m_2BytesPerChar_7 = value;
	}

	inline static int32_t get_offset_of_m_isMemoryStream_8() { return static_cast<int32_t>(offsetof(BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128, ___m_isMemoryStream_8)); }
	inline bool get_m_isMemoryStream_8() const { return ___m_isMemoryStream_8; }
	inline bool* get_address_of_m_isMemoryStream_8() { return &___m_isMemoryStream_8; }
	inline void set_m_isMemoryStream_8(bool value)
	{
		___m_isMemoryStream_8 = value;
	}

	inline static int32_t get_offset_of_m_leaveOpen_9() { return static_cast<int32_t>(offsetof(BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128, ___m_leaveOpen_9)); }
	inline bool get_m_leaveOpen_9() const { return ___m_leaveOpen_9; }
	inline bool* get_address_of_m_leaveOpen_9() { return &___m_leaveOpen_9; }
	inline void set_m_leaveOpen_9(bool value)
	{
		___m_leaveOpen_9 = value;
	}
};


// System.IO.BinaryWriter
struct  BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F  : public RuntimeObject
{
public:
	// System.IO.Stream System.IO.BinaryWriter::OutStream
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___OutStream_1;
	// System.Byte[] System.IO.BinaryWriter::_buffer
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____buffer_2;
	// System.Text.Encoding System.IO.BinaryWriter::_encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ____encoding_3;
	// System.Text.Encoder System.IO.BinaryWriter::_encoder
	Encoder_t5095F24D3B1D0F70D08762B980731B9F1ADEE56A * ____encoder_4;
	// System.Boolean System.IO.BinaryWriter::_leaveOpen
	bool ____leaveOpen_5;
	// System.Byte[] System.IO.BinaryWriter::_largeByteBuffer
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____largeByteBuffer_6;
	// System.Int32 System.IO.BinaryWriter::_maxChars
	int32_t ____maxChars_7;

public:
	inline static int32_t get_offset_of_OutStream_1() { return static_cast<int32_t>(offsetof(BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F, ___OutStream_1)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get_OutStream_1() const { return ___OutStream_1; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of_OutStream_1() { return &___OutStream_1; }
	inline void set_OutStream_1(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		___OutStream_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OutStream_1), (void*)value);
	}

	inline static int32_t get_offset_of__buffer_2() { return static_cast<int32_t>(offsetof(BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F, ____buffer_2)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get__buffer_2() const { return ____buffer_2; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of__buffer_2() { return &____buffer_2; }
	inline void set__buffer_2(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		____buffer_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buffer_2), (void*)value);
	}

	inline static int32_t get_offset_of__encoding_3() { return static_cast<int32_t>(offsetof(BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F, ____encoding_3)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get__encoding_3() const { return ____encoding_3; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of__encoding_3() { return &____encoding_3; }
	inline void set__encoding_3(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		____encoding_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____encoding_3), (void*)value);
	}

	inline static int32_t get_offset_of__encoder_4() { return static_cast<int32_t>(offsetof(BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F, ____encoder_4)); }
	inline Encoder_t5095F24D3B1D0F70D08762B980731B9F1ADEE56A * get__encoder_4() const { return ____encoder_4; }
	inline Encoder_t5095F24D3B1D0F70D08762B980731B9F1ADEE56A ** get_address_of__encoder_4() { return &____encoder_4; }
	inline void set__encoder_4(Encoder_t5095F24D3B1D0F70D08762B980731B9F1ADEE56A * value)
	{
		____encoder_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____encoder_4), (void*)value);
	}

	inline static int32_t get_offset_of__leaveOpen_5() { return static_cast<int32_t>(offsetof(BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F, ____leaveOpen_5)); }
	inline bool get__leaveOpen_5() const { return ____leaveOpen_5; }
	inline bool* get_address_of__leaveOpen_5() { return &____leaveOpen_5; }
	inline void set__leaveOpen_5(bool value)
	{
		____leaveOpen_5 = value;
	}

	inline static int32_t get_offset_of__largeByteBuffer_6() { return static_cast<int32_t>(offsetof(BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F, ____largeByteBuffer_6)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get__largeByteBuffer_6() const { return ____largeByteBuffer_6; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of__largeByteBuffer_6() { return &____largeByteBuffer_6; }
	inline void set__largeByteBuffer_6(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		____largeByteBuffer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____largeByteBuffer_6), (void*)value);
	}

	inline static int32_t get_offset_of__maxChars_7() { return static_cast<int32_t>(offsetof(BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F, ____maxChars_7)); }
	inline int32_t get__maxChars_7() const { return ____maxChars_7; }
	inline int32_t* get_address_of__maxChars_7() { return &____maxChars_7; }
	inline void set__maxChars_7(int32_t value)
	{
		____maxChars_7 = value;
	}
};

struct BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F_StaticFields
{
public:
	// System.IO.BinaryWriter System.IO.BinaryWriter::Null
	BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F * ___Null_0;

public:
	inline static int32_t get_offset_of_Null_0() { return static_cast<int32_t>(offsetof(BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F_StaticFields, ___Null_0)); }
	inline BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F * get_Null_0() const { return ___Null_0; }
	inline BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F ** get_address_of_Null_0() { return &___Null_0; }
	inline void set_Null_0(BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F * value)
	{
		___Null_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_0), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Input.InputAnimation
struct  InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534  : public RuntimeObject
{
public:
	// System.Single Microsoft.MixedReality.Toolkit.Input.InputAnimation::duration
	float ___duration_1;
	// UnityEngine.AnimationCurve Microsoft.MixedReality.Toolkit.Input.InputAnimation::handTrackedCurveLeft
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___handTrackedCurveLeft_2;
	// UnityEngine.AnimationCurve Microsoft.MixedReality.Toolkit.Input.InputAnimation::handTrackedCurveRight
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___handTrackedCurveRight_3;
	// UnityEngine.AnimationCurve Microsoft.MixedReality.Toolkit.Input.InputAnimation::handPinchCurveLeft
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___handPinchCurveLeft_4;
	// UnityEngine.AnimationCurve Microsoft.MixedReality.Toolkit.Input.InputAnimation::handPinchCurveRight
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___handPinchCurveRight_5;
	// System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Input.InputAnimation/PoseCurves> Microsoft.MixedReality.Toolkit.Input.InputAnimation::handJointCurvesLeft
	Dictionary_2_tF3976454D4ACA03F9E231469CB7AA87B3D4745B0 * ___handJointCurvesLeft_6;
	// System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Input.InputAnimation/PoseCurves> Microsoft.MixedReality.Toolkit.Input.InputAnimation::handJointCurvesRight
	Dictionary_2_tF3976454D4ACA03F9E231469CB7AA87B3D4745B0 * ___handJointCurvesRight_7;
	// Microsoft.MixedReality.Toolkit.Input.InputAnimation/PoseCurves Microsoft.MixedReality.Toolkit.Input.InputAnimation::cameraCurves
	PoseCurves_t14269C65E2E6B6A532EF4AC78324976DF2587501 * ___cameraCurves_8;
	// Microsoft.MixedReality.Toolkit.Input.InputAnimation/RayCurves Microsoft.MixedReality.Toolkit.Input.InputAnimation::gazeCurves
	RayCurves_tE200BC10F2980B31D68E54E46BB6EB32508F5604 * ___gazeCurves_9;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.InputAnimation::<HasHandData>k__BackingField
	bool ___U3CHasHandDataU3Ek__BackingField_10;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.InputAnimation::<HasCameraPose>k__BackingField
	bool ___U3CHasCameraPoseU3Ek__BackingField_11;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.InputAnimation::<HasEyeGaze>k__BackingField
	bool ___U3CHasEyeGazeU3Ek__BackingField_12;
	// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Input.InputAnimationMarker> Microsoft.MixedReality.Toolkit.Input.InputAnimation::markers
	List_1_tAAD05033EDA4EAF37AE770A3EDAB1B555706FEFD * ___markers_13;

public:
	inline static int32_t get_offset_of_duration_1() { return static_cast<int32_t>(offsetof(InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534, ___duration_1)); }
	inline float get_duration_1() const { return ___duration_1; }
	inline float* get_address_of_duration_1() { return &___duration_1; }
	inline void set_duration_1(float value)
	{
		___duration_1 = value;
	}

	inline static int32_t get_offset_of_handTrackedCurveLeft_2() { return static_cast<int32_t>(offsetof(InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534, ___handTrackedCurveLeft_2)); }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * get_handTrackedCurveLeft_2() const { return ___handTrackedCurveLeft_2; }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** get_address_of_handTrackedCurveLeft_2() { return &___handTrackedCurveLeft_2; }
	inline void set_handTrackedCurveLeft_2(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * value)
	{
		___handTrackedCurveLeft_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handTrackedCurveLeft_2), (void*)value);
	}

	inline static int32_t get_offset_of_handTrackedCurveRight_3() { return static_cast<int32_t>(offsetof(InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534, ___handTrackedCurveRight_3)); }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * get_handTrackedCurveRight_3() const { return ___handTrackedCurveRight_3; }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** get_address_of_handTrackedCurveRight_3() { return &___handTrackedCurveRight_3; }
	inline void set_handTrackedCurveRight_3(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * value)
	{
		___handTrackedCurveRight_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handTrackedCurveRight_3), (void*)value);
	}

	inline static int32_t get_offset_of_handPinchCurveLeft_4() { return static_cast<int32_t>(offsetof(InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534, ___handPinchCurveLeft_4)); }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * get_handPinchCurveLeft_4() const { return ___handPinchCurveLeft_4; }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** get_address_of_handPinchCurveLeft_4() { return &___handPinchCurveLeft_4; }
	inline void set_handPinchCurveLeft_4(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * value)
	{
		___handPinchCurveLeft_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handPinchCurveLeft_4), (void*)value);
	}

	inline static int32_t get_offset_of_handPinchCurveRight_5() { return static_cast<int32_t>(offsetof(InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534, ___handPinchCurveRight_5)); }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * get_handPinchCurveRight_5() const { return ___handPinchCurveRight_5; }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** get_address_of_handPinchCurveRight_5() { return &___handPinchCurveRight_5; }
	inline void set_handPinchCurveRight_5(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * value)
	{
		___handPinchCurveRight_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handPinchCurveRight_5), (void*)value);
	}

	inline static int32_t get_offset_of_handJointCurvesLeft_6() { return static_cast<int32_t>(offsetof(InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534, ___handJointCurvesLeft_6)); }
	inline Dictionary_2_tF3976454D4ACA03F9E231469CB7AA87B3D4745B0 * get_handJointCurvesLeft_6() const { return ___handJointCurvesLeft_6; }
	inline Dictionary_2_tF3976454D4ACA03F9E231469CB7AA87B3D4745B0 ** get_address_of_handJointCurvesLeft_6() { return &___handJointCurvesLeft_6; }
	inline void set_handJointCurvesLeft_6(Dictionary_2_tF3976454D4ACA03F9E231469CB7AA87B3D4745B0 * value)
	{
		___handJointCurvesLeft_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handJointCurvesLeft_6), (void*)value);
	}

	inline static int32_t get_offset_of_handJointCurvesRight_7() { return static_cast<int32_t>(offsetof(InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534, ___handJointCurvesRight_7)); }
	inline Dictionary_2_tF3976454D4ACA03F9E231469CB7AA87B3D4745B0 * get_handJointCurvesRight_7() const { return ___handJointCurvesRight_7; }
	inline Dictionary_2_tF3976454D4ACA03F9E231469CB7AA87B3D4745B0 ** get_address_of_handJointCurvesRight_7() { return &___handJointCurvesRight_7; }
	inline void set_handJointCurvesRight_7(Dictionary_2_tF3976454D4ACA03F9E231469CB7AA87B3D4745B0 * value)
	{
		___handJointCurvesRight_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handJointCurvesRight_7), (void*)value);
	}

	inline static int32_t get_offset_of_cameraCurves_8() { return static_cast<int32_t>(offsetof(InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534, ___cameraCurves_8)); }
	inline PoseCurves_t14269C65E2E6B6A532EF4AC78324976DF2587501 * get_cameraCurves_8() const { return ___cameraCurves_8; }
	inline PoseCurves_t14269C65E2E6B6A532EF4AC78324976DF2587501 ** get_address_of_cameraCurves_8() { return &___cameraCurves_8; }
	inline void set_cameraCurves_8(PoseCurves_t14269C65E2E6B6A532EF4AC78324976DF2587501 * value)
	{
		___cameraCurves_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cameraCurves_8), (void*)value);
	}

	inline static int32_t get_offset_of_gazeCurves_9() { return static_cast<int32_t>(offsetof(InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534, ___gazeCurves_9)); }
	inline RayCurves_tE200BC10F2980B31D68E54E46BB6EB32508F5604 * get_gazeCurves_9() const { return ___gazeCurves_9; }
	inline RayCurves_tE200BC10F2980B31D68E54E46BB6EB32508F5604 ** get_address_of_gazeCurves_9() { return &___gazeCurves_9; }
	inline void set_gazeCurves_9(RayCurves_tE200BC10F2980B31D68E54E46BB6EB32508F5604 * value)
	{
		___gazeCurves_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gazeCurves_9), (void*)value);
	}

	inline static int32_t get_offset_of_U3CHasHandDataU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534, ___U3CHasHandDataU3Ek__BackingField_10)); }
	inline bool get_U3CHasHandDataU3Ek__BackingField_10() const { return ___U3CHasHandDataU3Ek__BackingField_10; }
	inline bool* get_address_of_U3CHasHandDataU3Ek__BackingField_10() { return &___U3CHasHandDataU3Ek__BackingField_10; }
	inline void set_U3CHasHandDataU3Ek__BackingField_10(bool value)
	{
		___U3CHasHandDataU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_U3CHasCameraPoseU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534, ___U3CHasCameraPoseU3Ek__BackingField_11)); }
	inline bool get_U3CHasCameraPoseU3Ek__BackingField_11() const { return ___U3CHasCameraPoseU3Ek__BackingField_11; }
	inline bool* get_address_of_U3CHasCameraPoseU3Ek__BackingField_11() { return &___U3CHasCameraPoseU3Ek__BackingField_11; }
	inline void set_U3CHasCameraPoseU3Ek__BackingField_11(bool value)
	{
		___U3CHasCameraPoseU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_U3CHasEyeGazeU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534, ___U3CHasEyeGazeU3Ek__BackingField_12)); }
	inline bool get_U3CHasEyeGazeU3Ek__BackingField_12() const { return ___U3CHasEyeGazeU3Ek__BackingField_12; }
	inline bool* get_address_of_U3CHasEyeGazeU3Ek__BackingField_12() { return &___U3CHasEyeGazeU3Ek__BackingField_12; }
	inline void set_U3CHasEyeGazeU3Ek__BackingField_12(bool value)
	{
		___U3CHasEyeGazeU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_markers_13() { return static_cast<int32_t>(offsetof(InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534, ___markers_13)); }
	inline List_1_tAAD05033EDA4EAF37AE770A3EDAB1B555706FEFD * get_markers_13() const { return ___markers_13; }
	inline List_1_tAAD05033EDA4EAF37AE770A3EDAB1B555706FEFD ** get_address_of_markers_13() { return &___markers_13; }
	inline void set_markers_13(List_1_tAAD05033EDA4EAF37AE770A3EDAB1B555706FEFD * value)
	{
		___markers_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___markers_13), (void*)value);
	}
};

struct InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534_StaticFields
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.InputAnimation::jointCount
	int32_t ___jointCount_0;

public:
	inline static int32_t get_offset_of_jointCount_0() { return static_cast<int32_t>(offsetof(InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534_StaticFields, ___jointCount_0)); }
	inline int32_t get_jointCount_0() const { return ___jointCount_0; }
	inline int32_t* get_address_of_jointCount_0() { return &___jointCount_0; }
	inline void set_jointCount_0(int32_t value)
	{
		___jointCount_0 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.InputAnimationMarker
struct  InputAnimationMarker_t4807C7C71F5EAE69A38D8AFBDC85B6FD4F25C376  : public RuntimeObject
{
public:
	// System.Single Microsoft.MixedReality.Toolkit.Input.InputAnimationMarker::time
	float ___time_0;
	// System.String Microsoft.MixedReality.Toolkit.Input.InputAnimationMarker::name
	String_t* ___name_1;

public:
	inline static int32_t get_offset_of_time_0() { return static_cast<int32_t>(offsetof(InputAnimationMarker_t4807C7C71F5EAE69A38D8AFBDC85B6FD4F25C376, ___time_0)); }
	inline float get_time_0() const { return ___time_0; }
	inline float* get_address_of_time_0() { return &___time_0; }
	inline void set_time_0(float value)
	{
		___time_0 = value;
	}

	inline static int32_t get_offset_of_name_1() { return static_cast<int32_t>(offsetof(InputAnimationMarker_t4807C7C71F5EAE69A38D8AFBDC85B6FD4F25C376, ___name_1)); }
	inline String_t* get_name_1() const { return ___name_1; }
	inline String_t** get_address_of_name_1() { return &___name_1; }
	inline void set_name_1(String_t* value)
	{
		___name_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_1), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Input.InputAnimationSerializationUtils
struct  InputAnimationSerializationUtils_tBF0CF9A1A3138FAC30FF8F17528259A9C7A31560  : public RuntimeObject
{
public:

public:
};

struct InputAnimationSerializationUtils_tBF0CF9A1A3138FAC30FF8F17528259A9C7A31560_StaticFields
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.InputAnimationSerializationUtils::jointCount
	int32_t ___jointCount_0;

public:
	inline static int32_t get_offset_of_jointCount_0() { return static_cast<int32_t>(offsetof(InputAnimationSerializationUtils_tBF0CF9A1A3138FAC30FF8F17528259A9C7A31560_StaticFields, ___jointCount_0)); }
	inline int32_t get_jointCount_0() const { return ___jointCount_0; }
	inline int32_t* get_address_of_jointCount_0() { return &___jointCount_0; }
	inline void set_jointCount_0(int32_t value)
	{
		___jointCount_0 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.InputRecordingBuffer
struct  InputRecordingBuffer_tA6CEDA373266AD73D32A749E89D2D87FD6635E4F  : public RuntimeObject
{
public:
	// Microsoft.MixedReality.Toolkit.Input.InputRecordingBuffer/Keyframe Microsoft.MixedReality.Toolkit.Input.InputRecordingBuffer::currentKeyframe
	Keyframe_tB3167A15EF7CB57AA5C8498D640C6254A16F5B3F * ___currentKeyframe_0;
	// System.Collections.Generic.Queue`1<Microsoft.MixedReality.Toolkit.Input.InputRecordingBuffer/Keyframe> Microsoft.MixedReality.Toolkit.Input.InputRecordingBuffer::keyframes
	Queue_1_t6983AF29DC5F881F3157AC042F9F24494864A613 * ___keyframes_1;

public:
	inline static int32_t get_offset_of_currentKeyframe_0() { return static_cast<int32_t>(offsetof(InputRecordingBuffer_tA6CEDA373266AD73D32A749E89D2D87FD6635E4F, ___currentKeyframe_0)); }
	inline Keyframe_tB3167A15EF7CB57AA5C8498D640C6254A16F5B3F * get_currentKeyframe_0() const { return ___currentKeyframe_0; }
	inline Keyframe_tB3167A15EF7CB57AA5C8498D640C6254A16F5B3F ** get_address_of_currentKeyframe_0() { return &___currentKeyframe_0; }
	inline void set_currentKeyframe_0(Keyframe_tB3167A15EF7CB57AA5C8498D640C6254A16F5B3F * value)
	{
		___currentKeyframe_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentKeyframe_0), (void*)value);
	}

	inline static int32_t get_offset_of_keyframes_1() { return static_cast<int32_t>(offsetof(InputRecordingBuffer_tA6CEDA373266AD73D32A749E89D2D87FD6635E4F, ___keyframes_1)); }
	inline Queue_1_t6983AF29DC5F881F3157AC042F9F24494864A613 * get_keyframes_1() const { return ___keyframes_1; }
	inline Queue_1_t6983AF29DC5F881F3157AC042F9F24494864A613 ** get_address_of_keyframes_1() { return &___keyframes_1; }
	inline void set_keyframes_1(Queue_1_t6983AF29DC5F881F3157AC042F9F24494864A613 * value)
	{
		___keyframes_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keyframes_1), (void*)value);
	}
};


// System.MarshalByRefObject
struct  MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8  : public RuntimeObject
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
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// System.String
struct  String_t  : public RuntimeObject
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
struct  ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
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

// Microsoft.MixedReality.Toolkit.Input.InputAnimation/<>c__DisplayClass50_0
struct  U3CU3Ec__DisplayClass50_0_t08F1F4C926CDEC2D77202D77B7C64F0B4D3B20B5  : public RuntimeObject
{
public:
	// System.IO.Stream Microsoft.MixedReality.Toolkit.Input.InputAnimation/<>c__DisplayClass50_0::stream
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___stream_0;

public:
	inline static int32_t get_offset_of_stream_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass50_0_t08F1F4C926CDEC2D77202D77B7C64F0B4D3B20B5, ___stream_0)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get_stream_0() const { return ___stream_0; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of_stream_0() { return &___stream_0; }
	inline void set_stream_0(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		___stream_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stream_0), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Input.InputAnimation/PoseCurves
struct  PoseCurves_t14269C65E2E6B6A532EF4AC78324976DF2587501  : public RuntimeObject
{
public:
	// UnityEngine.AnimationCurve Microsoft.MixedReality.Toolkit.Input.InputAnimation/PoseCurves::PositionX
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___PositionX_0;
	// UnityEngine.AnimationCurve Microsoft.MixedReality.Toolkit.Input.InputAnimation/PoseCurves::PositionY
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___PositionY_1;
	// UnityEngine.AnimationCurve Microsoft.MixedReality.Toolkit.Input.InputAnimation/PoseCurves::PositionZ
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___PositionZ_2;
	// UnityEngine.AnimationCurve Microsoft.MixedReality.Toolkit.Input.InputAnimation/PoseCurves::RotationX
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___RotationX_3;
	// UnityEngine.AnimationCurve Microsoft.MixedReality.Toolkit.Input.InputAnimation/PoseCurves::RotationY
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___RotationY_4;
	// UnityEngine.AnimationCurve Microsoft.MixedReality.Toolkit.Input.InputAnimation/PoseCurves::RotationZ
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___RotationZ_5;
	// UnityEngine.AnimationCurve Microsoft.MixedReality.Toolkit.Input.InputAnimation/PoseCurves::RotationW
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___RotationW_6;

public:
	inline static int32_t get_offset_of_PositionX_0() { return static_cast<int32_t>(offsetof(PoseCurves_t14269C65E2E6B6A532EF4AC78324976DF2587501, ___PositionX_0)); }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * get_PositionX_0() const { return ___PositionX_0; }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** get_address_of_PositionX_0() { return &___PositionX_0; }
	inline void set_PositionX_0(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * value)
	{
		___PositionX_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PositionX_0), (void*)value);
	}

	inline static int32_t get_offset_of_PositionY_1() { return static_cast<int32_t>(offsetof(PoseCurves_t14269C65E2E6B6A532EF4AC78324976DF2587501, ___PositionY_1)); }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * get_PositionY_1() const { return ___PositionY_1; }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** get_address_of_PositionY_1() { return &___PositionY_1; }
	inline void set_PositionY_1(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * value)
	{
		___PositionY_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PositionY_1), (void*)value);
	}

	inline static int32_t get_offset_of_PositionZ_2() { return static_cast<int32_t>(offsetof(PoseCurves_t14269C65E2E6B6A532EF4AC78324976DF2587501, ___PositionZ_2)); }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * get_PositionZ_2() const { return ___PositionZ_2; }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** get_address_of_PositionZ_2() { return &___PositionZ_2; }
	inline void set_PositionZ_2(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * value)
	{
		___PositionZ_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PositionZ_2), (void*)value);
	}

	inline static int32_t get_offset_of_RotationX_3() { return static_cast<int32_t>(offsetof(PoseCurves_t14269C65E2E6B6A532EF4AC78324976DF2587501, ___RotationX_3)); }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * get_RotationX_3() const { return ___RotationX_3; }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** get_address_of_RotationX_3() { return &___RotationX_3; }
	inline void set_RotationX_3(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * value)
	{
		___RotationX_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RotationX_3), (void*)value);
	}

	inline static int32_t get_offset_of_RotationY_4() { return static_cast<int32_t>(offsetof(PoseCurves_t14269C65E2E6B6A532EF4AC78324976DF2587501, ___RotationY_4)); }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * get_RotationY_4() const { return ___RotationY_4; }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** get_address_of_RotationY_4() { return &___RotationY_4; }
	inline void set_RotationY_4(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * value)
	{
		___RotationY_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RotationY_4), (void*)value);
	}

	inline static int32_t get_offset_of_RotationZ_5() { return static_cast<int32_t>(offsetof(PoseCurves_t14269C65E2E6B6A532EF4AC78324976DF2587501, ___RotationZ_5)); }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * get_RotationZ_5() const { return ___RotationZ_5; }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** get_address_of_RotationZ_5() { return &___RotationZ_5; }
	inline void set_RotationZ_5(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * value)
	{
		___RotationZ_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RotationZ_5), (void*)value);
	}

	inline static int32_t get_offset_of_RotationW_6() { return static_cast<int32_t>(offsetof(PoseCurves_t14269C65E2E6B6A532EF4AC78324976DF2587501, ___RotationW_6)); }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * get_RotationW_6() const { return ___RotationW_6; }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** get_address_of_RotationW_6() { return &___RotationW_6; }
	inline void set_RotationW_6(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * value)
	{
		___RotationW_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RotationW_6), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Input.InputAnimation/RayCurves
struct  RayCurves_tE200BC10F2980B31D68E54E46BB6EB32508F5604  : public RuntimeObject
{
public:
	// UnityEngine.AnimationCurve Microsoft.MixedReality.Toolkit.Input.InputAnimation/RayCurves::OriginX
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___OriginX_0;
	// UnityEngine.AnimationCurve Microsoft.MixedReality.Toolkit.Input.InputAnimation/RayCurves::OriginY
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___OriginY_1;
	// UnityEngine.AnimationCurve Microsoft.MixedReality.Toolkit.Input.InputAnimation/RayCurves::OriginZ
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___OriginZ_2;
	// UnityEngine.AnimationCurve Microsoft.MixedReality.Toolkit.Input.InputAnimation/RayCurves::DirectionX
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___DirectionX_3;
	// UnityEngine.AnimationCurve Microsoft.MixedReality.Toolkit.Input.InputAnimation/RayCurves::DirectionY
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___DirectionY_4;
	// UnityEngine.AnimationCurve Microsoft.MixedReality.Toolkit.Input.InputAnimation/RayCurves::DirectionZ
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___DirectionZ_5;

public:
	inline static int32_t get_offset_of_OriginX_0() { return static_cast<int32_t>(offsetof(RayCurves_tE200BC10F2980B31D68E54E46BB6EB32508F5604, ___OriginX_0)); }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * get_OriginX_0() const { return ___OriginX_0; }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** get_address_of_OriginX_0() { return &___OriginX_0; }
	inline void set_OriginX_0(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * value)
	{
		___OriginX_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OriginX_0), (void*)value);
	}

	inline static int32_t get_offset_of_OriginY_1() { return static_cast<int32_t>(offsetof(RayCurves_tE200BC10F2980B31D68E54E46BB6EB32508F5604, ___OriginY_1)); }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * get_OriginY_1() const { return ___OriginY_1; }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** get_address_of_OriginY_1() { return &___OriginY_1; }
	inline void set_OriginY_1(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * value)
	{
		___OriginY_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OriginY_1), (void*)value);
	}

	inline static int32_t get_offset_of_OriginZ_2() { return static_cast<int32_t>(offsetof(RayCurves_tE200BC10F2980B31D68E54E46BB6EB32508F5604, ___OriginZ_2)); }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * get_OriginZ_2() const { return ___OriginZ_2; }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** get_address_of_OriginZ_2() { return &___OriginZ_2; }
	inline void set_OriginZ_2(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * value)
	{
		___OriginZ_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OriginZ_2), (void*)value);
	}

	inline static int32_t get_offset_of_DirectionX_3() { return static_cast<int32_t>(offsetof(RayCurves_tE200BC10F2980B31D68E54E46BB6EB32508F5604, ___DirectionX_3)); }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * get_DirectionX_3() const { return ___DirectionX_3; }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** get_address_of_DirectionX_3() { return &___DirectionX_3; }
	inline void set_DirectionX_3(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * value)
	{
		___DirectionX_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DirectionX_3), (void*)value);
	}

	inline static int32_t get_offset_of_DirectionY_4() { return static_cast<int32_t>(offsetof(RayCurves_tE200BC10F2980B31D68E54E46BB6EB32508F5604, ___DirectionY_4)); }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * get_DirectionY_4() const { return ___DirectionY_4; }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** get_address_of_DirectionY_4() { return &___DirectionY_4; }
	inline void set_DirectionY_4(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * value)
	{
		___DirectionY_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DirectionY_4), (void*)value);
	}

	inline static int32_t get_offset_of_DirectionZ_5() { return static_cast<int32_t>(offsetof(RayCurves_tE200BC10F2980B31D68E54E46BB6EB32508F5604, ___DirectionZ_5)); }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * get_DirectionZ_5() const { return ___DirectionZ_5; }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** get_address_of_DirectionZ_5() { return &___DirectionZ_5; }
	inline void set_DirectionZ_5(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * value)
	{
		___DirectionZ_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DirectionZ_5), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<Microsoft.MixedReality.Toolkit.Input.InputAnimationMarker>
struct  Enumerator_t168CFCE1DDFF36FEA9351886E61D43566EBDF0C3 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_tAAD05033EDA4EAF37AE770A3EDAB1B555706FEFD * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	InputAnimationMarker_t4807C7C71F5EAE69A38D8AFBDC85B6FD4F25C376 * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t168CFCE1DDFF36FEA9351886E61D43566EBDF0C3, ___list_0)); }
	inline List_1_tAAD05033EDA4EAF37AE770A3EDAB1B555706FEFD * get_list_0() const { return ___list_0; }
	inline List_1_tAAD05033EDA4EAF37AE770A3EDAB1B555706FEFD ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_tAAD05033EDA4EAF37AE770A3EDAB1B555706FEFD * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t168CFCE1DDFF36FEA9351886E61D43566EBDF0C3, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t168CFCE1DDFF36FEA9351886E61D43566EBDF0C3, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t168CFCE1DDFF36FEA9351886E61D43566EBDF0C3, ___current_3)); }
	inline InputAnimationMarker_t4807C7C71F5EAE69A38D8AFBDC85B6FD4F25C376 * get_current_3() const { return ___current_3; }
	inline InputAnimationMarker_t4807C7C71F5EAE69A38D8AFBDC85B6FD4F25C376 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(InputAnimationMarker_t4807C7C71F5EAE69A38D8AFBDC85B6FD4F25C376 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<System.Object>
struct  Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 
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


// System.Collections.Generic.Queue`1/Enumerator<System.Object>
struct  Enumerator_t7AA6AE94A0D53334AA15EFC74FE63FF525189B8C 
{
public:
	// System.Collections.Generic.Queue`1<T> System.Collections.Generic.Queue`1/Enumerator::_q
	Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * ____q_0;
	// System.Int32 System.Collections.Generic.Queue`1/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Queue`1/Enumerator::_index
	int32_t ____index_2;
	// T System.Collections.Generic.Queue`1/Enumerator::_currentElement
	RuntimeObject * ____currentElement_3;

public:
	inline static int32_t get_offset_of__q_0() { return static_cast<int32_t>(offsetof(Enumerator_t7AA6AE94A0D53334AA15EFC74FE63FF525189B8C, ____q_0)); }
	inline Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * get__q_0() const { return ____q_0; }
	inline Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 ** get_address_of__q_0() { return &____q_0; }
	inline void set__q_0(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * value)
	{
		____q_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____q_0), (void*)value);
	}

	inline static int32_t get_offset_of__version_1() { return static_cast<int32_t>(offsetof(Enumerator_t7AA6AE94A0D53334AA15EFC74FE63FF525189B8C, ____version_1)); }
	inline int32_t get__version_1() const { return ____version_1; }
	inline int32_t* get_address_of__version_1() { return &____version_1; }
	inline void set__version_1(int32_t value)
	{
		____version_1 = value;
	}

	inline static int32_t get_offset_of__index_2() { return static_cast<int32_t>(offsetof(Enumerator_t7AA6AE94A0D53334AA15EFC74FE63FF525189B8C, ____index_2)); }
	inline int32_t get__index_2() const { return ____index_2; }
	inline int32_t* get_address_of__index_2() { return &____index_2; }
	inline void set__index_2(int32_t value)
	{
		____index_2 = value;
	}

	inline static int32_t get_offset_of__currentElement_3() { return static_cast<int32_t>(offsetof(Enumerator_t7AA6AE94A0D53334AA15EFC74FE63FF525189B8C, ____currentElement_3)); }
	inline RuntimeObject * get__currentElement_3() const { return ____currentElement_3; }
	inline RuntimeObject ** get_address_of__currentElement_3() { return &____currentElement_3; }
	inline void set__currentElement_3(RuntimeObject * value)
	{
		____currentElement_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____currentElement_3), (void*)value);
	}
};


// System.Collections.Generic.Queue`1/Enumerator<Microsoft.MixedReality.Toolkit.Input.InputRecordingBuffer/Keyframe>
struct  Enumerator_t68B017BFDF640B5A9938D0FD1BEAE9B802896902 
{
public:
	// System.Collections.Generic.Queue`1<T> System.Collections.Generic.Queue`1/Enumerator::_q
	Queue_1_t6983AF29DC5F881F3157AC042F9F24494864A613 * ____q_0;
	// System.Int32 System.Collections.Generic.Queue`1/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Queue`1/Enumerator::_index
	int32_t ____index_2;
	// T System.Collections.Generic.Queue`1/Enumerator::_currentElement
	Keyframe_tB3167A15EF7CB57AA5C8498D640C6254A16F5B3F * ____currentElement_3;

public:
	inline static int32_t get_offset_of__q_0() { return static_cast<int32_t>(offsetof(Enumerator_t68B017BFDF640B5A9938D0FD1BEAE9B802896902, ____q_0)); }
	inline Queue_1_t6983AF29DC5F881F3157AC042F9F24494864A613 * get__q_0() const { return ____q_0; }
	inline Queue_1_t6983AF29DC5F881F3157AC042F9F24494864A613 ** get_address_of__q_0() { return &____q_0; }
	inline void set__q_0(Queue_1_t6983AF29DC5F881F3157AC042F9F24494864A613 * value)
	{
		____q_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____q_0), (void*)value);
	}

	inline static int32_t get_offset_of__version_1() { return static_cast<int32_t>(offsetof(Enumerator_t68B017BFDF640B5A9938D0FD1BEAE9B802896902, ____version_1)); }
	inline int32_t get__version_1() const { return ____version_1; }
	inline int32_t* get_address_of__version_1() { return &____version_1; }
	inline void set__version_1(int32_t value)
	{
		____version_1 = value;
	}

	inline static int32_t get_offset_of__index_2() { return static_cast<int32_t>(offsetof(Enumerator_t68B017BFDF640B5A9938D0FD1BEAE9B802896902, ____index_2)); }
	inline int32_t get__index_2() const { return ____index_2; }
	inline int32_t* get_address_of__index_2() { return &____index_2; }
	inline void set__index_2(int32_t value)
	{
		____index_2 = value;
	}

	inline static int32_t get_offset_of__currentElement_3() { return static_cast<int32_t>(offsetof(Enumerator_t68B017BFDF640B5A9938D0FD1BEAE9B802896902, ____currentElement_3)); }
	inline Keyframe_tB3167A15EF7CB57AA5C8498D640C6254A16F5B3F * get__currentElement_3() const { return ____currentElement_3; }
	inline Keyframe_tB3167A15EF7CB57AA5C8498D640C6254A16F5B3F ** get_address_of__currentElement_3() { return &____currentElement_3; }
	inline void set__currentElement_3(Keyframe_tB3167A15EF7CB57AA5C8498D640C6254A16F5B3F * value)
	{
		____currentElement_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____currentElement_3), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32Enum,System.Object>
struct  Enumerator_tEA3EEAFB01FCAEC65CD249CE8B28073BA94302C2 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::dictionary
	Dictionary_2_t7E8D40B461AB586AEA5DD75D8354C4913EEB1337 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::version
	int32_t ___version_2;
	// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::currentValue
	RuntimeObject * ___currentValue_3;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_tEA3EEAFB01FCAEC65CD249CE8B28073BA94302C2, ___dictionary_0)); }
	inline Dictionary_2_t7E8D40B461AB586AEA5DD75D8354C4913EEB1337 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t7E8D40B461AB586AEA5DD75D8354C4913EEB1337 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t7E8D40B461AB586AEA5DD75D8354C4913EEB1337 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tEA3EEAFB01FCAEC65CD249CE8B28073BA94302C2, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tEA3EEAFB01FCAEC65CD249CE8B28073BA94302C2, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_currentValue_3() { return static_cast<int32_t>(offsetof(Enumerator_tEA3EEAFB01FCAEC65CD249CE8B28073BA94302C2, ___currentValue_3)); }
	inline RuntimeObject * get_currentValue_3() const { return ___currentValue_3; }
	inline RuntimeObject ** get_address_of_currentValue_3() { return &___currentValue_3; }
	inline void set_currentValue_3(RuntimeObject * value)
	{
		___currentValue_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentValue_3), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Input.InputAnimation/PoseCurves>
struct  Enumerator_t6359D50CF0EE93ACDDC59D9FCAE8F0DD31D8DE50 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::dictionary
	Dictionary_2_tF3976454D4ACA03F9E231469CB7AA87B3D4745B0 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::version
	int32_t ___version_2;
	// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::currentValue
	PoseCurves_t14269C65E2E6B6A532EF4AC78324976DF2587501 * ___currentValue_3;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t6359D50CF0EE93ACDDC59D9FCAE8F0DD31D8DE50, ___dictionary_0)); }
	inline Dictionary_2_tF3976454D4ACA03F9E231469CB7AA87B3D4745B0 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_tF3976454D4ACA03F9E231469CB7AA87B3D4745B0 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_tF3976454D4ACA03F9E231469CB7AA87B3D4745B0 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t6359D50CF0EE93ACDDC59D9FCAE8F0DD31D8DE50, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t6359D50CF0EE93ACDDC59D9FCAE8F0DD31D8DE50, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_currentValue_3() { return static_cast<int32_t>(offsetof(Enumerator_t6359D50CF0EE93ACDDC59D9FCAE8F0DD31D8DE50, ___currentValue_3)); }
	inline PoseCurves_t14269C65E2E6B6A532EF4AC78324976DF2587501 * get_currentValue_3() const { return ___currentValue_3; }
	inline PoseCurves_t14269C65E2E6B6A532EF4AC78324976DF2587501 ** get_address_of_currentValue_3() { return &___currentValue_3; }
	inline void set_currentValue_3(PoseCurves_t14269C65E2E6B6A532EF4AC78324976DF2587501 * value)
	{
		___currentValue_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentValue_3), (void*)value);
	}
};


// System.Nullable`1<System.Boolean>
struct  Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 
{
public:
	// T System.Nullable`1::value
	bool ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3, ___value_0)); }
	inline bool get_value_0() const { return ___value_0; }
	inline bool* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(bool value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<System.Int32>
struct  Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<System.Single>
struct  Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A 
{
public:
	// T System.Nullable`1::value
	float ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A, ___value_0)); }
	inline float get_value_0() const { return ___value_0; }
	inline float* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(float value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Runtime.CompilerServices.TaskAwaiter`1<Microsoft.MixedReality.Toolkit.Input.InputAnimation>
struct  TaskAwaiter_1_tF2BE961DAB576F8235B3EAB1BEE2B129DBB64946 
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_tB231B84F8F2E5D004D7EE56C7AC413E80914BC74 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskAwaiter_1_tF2BE961DAB576F8235B3EAB1BEE2B129DBB64946, ___m_task_0)); }
	inline Task_1_tB231B84F8F2E5D004D7EE56C7AC413E80914BC74 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_tB231B84F8F2E5D004D7EE56C7AC413E80914BC74 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_tB231B84F8F2E5D004D7EE56C7AC413E80914BC74 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}
};


// System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>
struct  TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE 
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE, ___m_task_0)); }
	inline Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}
};


// System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct  AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 
{
public:
	// System.Runtime.CompilerServices.IAsyncStateMachine System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_stateMachine
	RuntimeObject* ___m_stateMachine_0;
	// System.Action System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_defaultContextAction
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___m_defaultContextAction_1;

public:
	inline static int32_t get_offset_of_m_stateMachine_0() { return static_cast<int32_t>(offsetof(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34, ___m_stateMachine_0)); }
	inline RuntimeObject* get_m_stateMachine_0() const { return ___m_stateMachine_0; }
	inline RuntimeObject** get_address_of_m_stateMachine_0() { return &___m_stateMachine_0; }
	inline void set_m_stateMachine_0(RuntimeObject* value)
	{
		___m_stateMachine_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_stateMachine_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_defaultContextAction_1() { return static_cast<int32_t>(offsetof(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34, ___m_defaultContextAction_1)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_m_defaultContextAction_1() const { return ___m_defaultContextAction_1; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_m_defaultContextAction_1() { return &___m_defaultContextAction_1; }
	inline void set_m_defaultContextAction_1(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___m_defaultContextAction_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_defaultContextAction_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34_marshaled_pinvoke
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34_marshaled_com
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};

// System.Boolean
struct  Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
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


// System.DateTime
struct  DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 
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


// System.Enum
struct  Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
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

// System.Int32
struct  Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
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
struct  Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3 
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
struct  IntPtr_t 
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


// UnityEngine.Keyframe
struct  Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F 
{
public:
	// System.Single UnityEngine.Keyframe::m_Time
	float ___m_Time_0;
	// System.Single UnityEngine.Keyframe::m_Value
	float ___m_Value_1;
	// System.Single UnityEngine.Keyframe::m_InTangent
	float ___m_InTangent_2;
	// System.Single UnityEngine.Keyframe::m_OutTangent
	float ___m_OutTangent_3;
	// System.Int32 UnityEngine.Keyframe::m_WeightedMode
	int32_t ___m_WeightedMode_4;
	// System.Single UnityEngine.Keyframe::m_InWeight
	float ___m_InWeight_5;
	// System.Single UnityEngine.Keyframe::m_OutWeight
	float ___m_OutWeight_6;

public:
	inline static int32_t get_offset_of_m_Time_0() { return static_cast<int32_t>(offsetof(Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F, ___m_Time_0)); }
	inline float get_m_Time_0() const { return ___m_Time_0; }
	inline float* get_address_of_m_Time_0() { return &___m_Time_0; }
	inline void set_m_Time_0(float value)
	{
		___m_Time_0 = value;
	}

	inline static int32_t get_offset_of_m_Value_1() { return static_cast<int32_t>(offsetof(Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F, ___m_Value_1)); }
	inline float get_m_Value_1() const { return ___m_Value_1; }
	inline float* get_address_of_m_Value_1() { return &___m_Value_1; }
	inline void set_m_Value_1(float value)
	{
		___m_Value_1 = value;
	}

	inline static int32_t get_offset_of_m_InTangent_2() { return static_cast<int32_t>(offsetof(Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F, ___m_InTangent_2)); }
	inline float get_m_InTangent_2() const { return ___m_InTangent_2; }
	inline float* get_address_of_m_InTangent_2() { return &___m_InTangent_2; }
	inline void set_m_InTangent_2(float value)
	{
		___m_InTangent_2 = value;
	}

	inline static int32_t get_offset_of_m_OutTangent_3() { return static_cast<int32_t>(offsetof(Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F, ___m_OutTangent_3)); }
	inline float get_m_OutTangent_3() const { return ___m_OutTangent_3; }
	inline float* get_address_of_m_OutTangent_3() { return &___m_OutTangent_3; }
	inline void set_m_OutTangent_3(float value)
	{
		___m_OutTangent_3 = value;
	}

	inline static int32_t get_offset_of_m_WeightedMode_4() { return static_cast<int32_t>(offsetof(Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F, ___m_WeightedMode_4)); }
	inline int32_t get_m_WeightedMode_4() const { return ___m_WeightedMode_4; }
	inline int32_t* get_address_of_m_WeightedMode_4() { return &___m_WeightedMode_4; }
	inline void set_m_WeightedMode_4(int32_t value)
	{
		___m_WeightedMode_4 = value;
	}

	inline static int32_t get_offset_of_m_InWeight_5() { return static_cast<int32_t>(offsetof(Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F, ___m_InWeight_5)); }
	inline float get_m_InWeight_5() const { return ___m_InWeight_5; }
	inline float* get_address_of_m_InWeight_5() { return &___m_InWeight_5; }
	inline void set_m_InWeight_5(float value)
	{
		___m_InWeight_5 = value;
	}

	inline static int32_t get_offset_of_m_OutWeight_6() { return static_cast<int32_t>(offsetof(Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F, ___m_OutWeight_6)); }
	inline float get_m_OutWeight_6() const { return ___m_OutWeight_6; }
	inline float* get_address_of_m_OutWeight_6() { return &___m_OutWeight_6; }
	inline void set_m_OutWeight_6(float value)
	{
		___m_OutWeight_6 = value;
	}
};


// UnityEngine.Quaternion
struct  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___identityQuaternion_4 = value;
	}
};


// System.Single
struct  Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
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


// System.IO.Stream
struct  Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:
	// System.IO.Stream/ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * ____activeReadWriteTask_2;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * ____asyncActiveSemaphore_3;

public:
	inline static int32_t get_offset_of__activeReadWriteTask_2() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB, ____activeReadWriteTask_2)); }
	inline ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * get__activeReadWriteTask_2() const { return ____activeReadWriteTask_2; }
	inline ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 ** get_address_of__activeReadWriteTask_2() { return &____activeReadWriteTask_2; }
	inline void set__activeReadWriteTask_2(ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * value)
	{
		____activeReadWriteTask_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____activeReadWriteTask_2), (void*)value);
	}

	inline static int32_t get_offset_of__asyncActiveSemaphore_3() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB, ____asyncActiveSemaphore_3)); }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * get__asyncActiveSemaphore_3() const { return ____asyncActiveSemaphore_3; }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 ** get_address_of__asyncActiveSemaphore_3() { return &____asyncActiveSemaphore_3; }
	inline void set__asyncActiveSemaphore_3(SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * value)
	{
		____asyncActiveSemaphore_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____asyncActiveSemaphore_3), (void*)value);
	}
};

struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB_StaticFields
{
public:
	// System.IO.Stream System.IO.Stream::Null
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___Null_1;

public:
	inline static int32_t get_offset_of_Null_1() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB_StaticFields, ___Null_1)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get_Null_1() const { return ___Null_1; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of_Null_1() { return &___Null_1; }
	inline void set_Null_1(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		___Null_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_1), (void*)value);
	}
};


// UnityEngine.Vector2
struct  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// System.Void
struct  Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
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


// Microsoft.MixedReality.Toolkit.Input.InputAnimation/<>c__DisplayClass71_0
struct  U3CU3Ec__DisplayClass71_0_tB8844843F079F21090643D261C6084F55D933677 
{
public:
	// UnityEngine.AnimationCurve Microsoft.MixedReality.Toolkit.Input.InputAnimation/<>c__DisplayClass71_0::inCurveX
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___inCurveX_0;
	// UnityEngine.AnimationCurve Microsoft.MixedReality.Toolkit.Input.InputAnimation/<>c__DisplayClass71_0::inCurveY
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___inCurveY_1;
	// UnityEngine.AnimationCurve Microsoft.MixedReality.Toolkit.Input.InputAnimation/<>c__DisplayClass71_0::inCurveZ
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___inCurveZ_2;
	// System.Single Microsoft.MixedReality.Toolkit.Input.InputAnimation/<>c__DisplayClass71_0::sqrThreshold
	float ___sqrThreshold_3;
	// UnityEngine.AnimationCurve Microsoft.MixedReality.Toolkit.Input.InputAnimation/<>c__DisplayClass71_0::outCurveX
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___outCurveX_4;
	// UnityEngine.AnimationCurve Microsoft.MixedReality.Toolkit.Input.InputAnimation/<>c__DisplayClass71_0::outCurveY
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___outCurveY_5;
	// UnityEngine.AnimationCurve Microsoft.MixedReality.Toolkit.Input.InputAnimation/<>c__DisplayClass71_0::outCurveZ
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___outCurveZ_6;

public:
	inline static int32_t get_offset_of_inCurveX_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass71_0_tB8844843F079F21090643D261C6084F55D933677, ___inCurveX_0)); }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * get_inCurveX_0() const { return ___inCurveX_0; }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** get_address_of_inCurveX_0() { return &___inCurveX_0; }
	inline void set_inCurveX_0(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * value)
	{
		___inCurveX_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inCurveX_0), (void*)value);
	}

	inline static int32_t get_offset_of_inCurveY_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass71_0_tB8844843F079F21090643D261C6084F55D933677, ___inCurveY_1)); }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * get_inCurveY_1() const { return ___inCurveY_1; }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** get_address_of_inCurveY_1() { return &___inCurveY_1; }
	inline void set_inCurveY_1(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * value)
	{
		___inCurveY_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inCurveY_1), (void*)value);
	}

	inline static int32_t get_offset_of_inCurveZ_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass71_0_tB8844843F079F21090643D261C6084F55D933677, ___inCurveZ_2)); }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * get_inCurveZ_2() const { return ___inCurveZ_2; }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** get_address_of_inCurveZ_2() { return &___inCurveZ_2; }
	inline void set_inCurveZ_2(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * value)
	{
		___inCurveZ_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inCurveZ_2), (void*)value);
	}

	inline static int32_t get_offset_of_sqrThreshold_3() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass71_0_tB8844843F079F21090643D261C6084F55D933677, ___sqrThreshold_3)); }
	inline float get_sqrThreshold_3() const { return ___sqrThreshold_3; }
	inline float* get_address_of_sqrThreshold_3() { return &___sqrThreshold_3; }
	inline void set_sqrThreshold_3(float value)
	{
		___sqrThreshold_3 = value;
	}

	inline static int32_t get_offset_of_outCurveX_4() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass71_0_tB8844843F079F21090643D261C6084F55D933677, ___outCurveX_4)); }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * get_outCurveX_4() const { return ___outCurveX_4; }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** get_address_of_outCurveX_4() { return &___outCurveX_4; }
	inline void set_outCurveX_4(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * value)
	{
		___outCurveX_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___outCurveX_4), (void*)value);
	}

	inline static int32_t get_offset_of_outCurveY_5() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass71_0_tB8844843F079F21090643D261C6084F55D933677, ___outCurveY_5)); }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * get_outCurveY_5() const { return ___outCurveY_5; }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** get_address_of_outCurveY_5() { return &___outCurveY_5; }
	inline void set_outCurveY_5(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * value)
	{
		___outCurveY_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___outCurveY_5), (void*)value);
	}

	inline static int32_t get_offset_of_outCurveZ_6() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass71_0_tB8844843F079F21090643D261C6084F55D933677, ___outCurveZ_6)); }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * get_outCurveZ_6() const { return ___outCurveZ_6; }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** get_address_of_outCurveZ_6() { return &___outCurveZ_6; }
	inline void set_outCurveZ_6(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * value)
	{
		___outCurveZ_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___outCurveZ_6), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Input.InputAnimation/<>c__DisplayClass72_0
struct  U3CU3Ec__DisplayClass72_0_t86C7C5FDF8A191F3176A7AD9E5052C7FCCF17343 
{
public:
	// UnityEngine.AnimationCurve Microsoft.MixedReality.Toolkit.Input.InputAnimation/<>c__DisplayClass72_0::inCurveX
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___inCurveX_0;
	// UnityEngine.AnimationCurve Microsoft.MixedReality.Toolkit.Input.InputAnimation/<>c__DisplayClass72_0::inCurveY
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___inCurveY_1;
	// UnityEngine.AnimationCurve Microsoft.MixedReality.Toolkit.Input.InputAnimation/<>c__DisplayClass72_0::inCurveZ
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___inCurveZ_2;
	// System.Single Microsoft.MixedReality.Toolkit.Input.InputAnimation/<>c__DisplayClass72_0::cosThreshold
	float ___cosThreshold_3;
	// UnityEngine.AnimationCurve Microsoft.MixedReality.Toolkit.Input.InputAnimation/<>c__DisplayClass72_0::outCurveX
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___outCurveX_4;
	// UnityEngine.AnimationCurve Microsoft.MixedReality.Toolkit.Input.InputAnimation/<>c__DisplayClass72_0::outCurveY
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___outCurveY_5;
	// UnityEngine.AnimationCurve Microsoft.MixedReality.Toolkit.Input.InputAnimation/<>c__DisplayClass72_0::outCurveZ
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___outCurveZ_6;

public:
	inline static int32_t get_offset_of_inCurveX_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass72_0_t86C7C5FDF8A191F3176A7AD9E5052C7FCCF17343, ___inCurveX_0)); }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * get_inCurveX_0() const { return ___inCurveX_0; }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** get_address_of_inCurveX_0() { return &___inCurveX_0; }
	inline void set_inCurveX_0(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * value)
	{
		___inCurveX_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inCurveX_0), (void*)value);
	}

	inline static int32_t get_offset_of_inCurveY_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass72_0_t86C7C5FDF8A191F3176A7AD9E5052C7FCCF17343, ___inCurveY_1)); }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * get_inCurveY_1() const { return ___inCurveY_1; }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** get_address_of_inCurveY_1() { return &___inCurveY_1; }
	inline void set_inCurveY_1(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * value)
	{
		___inCurveY_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inCurveY_1), (void*)value);
	}

	inline static int32_t get_offset_of_inCurveZ_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass72_0_t86C7C5FDF8A191F3176A7AD9E5052C7FCCF17343, ___inCurveZ_2)); }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * get_inCurveZ_2() const { return ___inCurveZ_2; }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** get_address_of_inCurveZ_2() { return &___inCurveZ_2; }
	inline void set_inCurveZ_2(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * value)
	{
		___inCurveZ_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inCurveZ_2), (void*)value);
	}

	inline static int32_t get_offset_of_cosThreshold_3() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass72_0_t86C7C5FDF8A191F3176A7AD9E5052C7FCCF17343, ___cosThreshold_3)); }
	inline float get_cosThreshold_3() const { return ___cosThreshold_3; }
	inline float* get_address_of_cosThreshold_3() { return &___cosThreshold_3; }
	inline void set_cosThreshold_3(float value)
	{
		___cosThreshold_3 = value;
	}

	inline static int32_t get_offset_of_outCurveX_4() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass72_0_t86C7C5FDF8A191F3176A7AD9E5052C7FCCF17343, ___outCurveX_4)); }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * get_outCurveX_4() const { return ___outCurveX_4; }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** get_address_of_outCurveX_4() { return &___outCurveX_4; }
	inline void set_outCurveX_4(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * value)
	{
		___outCurveX_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___outCurveX_4), (void*)value);
	}

	inline static int32_t get_offset_of_outCurveY_5() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass72_0_t86C7C5FDF8A191F3176A7AD9E5052C7FCCF17343, ___outCurveY_5)); }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * get_outCurveY_5() const { return ___outCurveY_5; }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** get_address_of_outCurveY_5() { return &___outCurveY_5; }
	inline void set_outCurveY_5(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * value)
	{
		___outCurveY_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___outCurveY_5), (void*)value);
	}

	inline static int32_t get_offset_of_outCurveZ_6() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass72_0_t86C7C5FDF8A191F3176A7AD9E5052C7FCCF17343, ___outCurveZ_6)); }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * get_outCurveZ_6() const { return ___outCurveZ_6; }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** get_address_of_outCurveZ_6() { return &___outCurveZ_6; }
	inline void set_outCurveZ_6(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * value)
	{
		___outCurveZ_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___outCurveZ_6), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Input.InputAnimation/<>c__DisplayClass73_0
struct  U3CU3Ec__DisplayClass73_0_tA9EDB2D4E6569D8D39993A6304B9396566B6F89C 
{
public:
	// UnityEngine.AnimationCurve Microsoft.MixedReality.Toolkit.Input.InputAnimation/<>c__DisplayClass73_0::inCurveX
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___inCurveX_0;
	// UnityEngine.AnimationCurve Microsoft.MixedReality.Toolkit.Input.InputAnimation/<>c__DisplayClass73_0::inCurveY
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___inCurveY_1;
	// UnityEngine.AnimationCurve Microsoft.MixedReality.Toolkit.Input.InputAnimation/<>c__DisplayClass73_0::inCurveZ
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___inCurveZ_2;
	// UnityEngine.AnimationCurve Microsoft.MixedReality.Toolkit.Input.InputAnimation/<>c__DisplayClass73_0::inCurveW
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___inCurveW_3;
	// System.Single Microsoft.MixedReality.Toolkit.Input.InputAnimation/<>c__DisplayClass73_0::compThreshold
	float ___compThreshold_4;
	// UnityEngine.AnimationCurve Microsoft.MixedReality.Toolkit.Input.InputAnimation/<>c__DisplayClass73_0::outCurveX
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___outCurveX_5;
	// UnityEngine.AnimationCurve Microsoft.MixedReality.Toolkit.Input.InputAnimation/<>c__DisplayClass73_0::outCurveY
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___outCurveY_6;
	// UnityEngine.AnimationCurve Microsoft.MixedReality.Toolkit.Input.InputAnimation/<>c__DisplayClass73_0::outCurveZ
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___outCurveZ_7;

public:
	inline static int32_t get_offset_of_inCurveX_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass73_0_tA9EDB2D4E6569D8D39993A6304B9396566B6F89C, ___inCurveX_0)); }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * get_inCurveX_0() const { return ___inCurveX_0; }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** get_address_of_inCurveX_0() { return &___inCurveX_0; }
	inline void set_inCurveX_0(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * value)
	{
		___inCurveX_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inCurveX_0), (void*)value);
	}

	inline static int32_t get_offset_of_inCurveY_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass73_0_tA9EDB2D4E6569D8D39993A6304B9396566B6F89C, ___inCurveY_1)); }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * get_inCurveY_1() const { return ___inCurveY_1; }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** get_address_of_inCurveY_1() { return &___inCurveY_1; }
	inline void set_inCurveY_1(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * value)
	{
		___inCurveY_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inCurveY_1), (void*)value);
	}

	inline static int32_t get_offset_of_inCurveZ_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass73_0_tA9EDB2D4E6569D8D39993A6304B9396566B6F89C, ___inCurveZ_2)); }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * get_inCurveZ_2() const { return ___inCurveZ_2; }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** get_address_of_inCurveZ_2() { return &___inCurveZ_2; }
	inline void set_inCurveZ_2(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * value)
	{
		___inCurveZ_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inCurveZ_2), (void*)value);
	}

	inline static int32_t get_offset_of_inCurveW_3() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass73_0_tA9EDB2D4E6569D8D39993A6304B9396566B6F89C, ___inCurveW_3)); }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * get_inCurveW_3() const { return ___inCurveW_3; }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** get_address_of_inCurveW_3() { return &___inCurveW_3; }
	inline void set_inCurveW_3(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * value)
	{
		___inCurveW_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inCurveW_3), (void*)value);
	}

	inline static int32_t get_offset_of_compThreshold_4() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass73_0_tA9EDB2D4E6569D8D39993A6304B9396566B6F89C, ___compThreshold_4)); }
	inline float get_compThreshold_4() const { return ___compThreshold_4; }
	inline float* get_address_of_compThreshold_4() { return &___compThreshold_4; }
	inline void set_compThreshold_4(float value)
	{
		___compThreshold_4 = value;
	}

	inline static int32_t get_offset_of_outCurveX_5() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass73_0_tA9EDB2D4E6569D8D39993A6304B9396566B6F89C, ___outCurveX_5)); }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * get_outCurveX_5() const { return ___outCurveX_5; }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** get_address_of_outCurveX_5() { return &___outCurveX_5; }
	inline void set_outCurveX_5(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * value)
	{
		___outCurveX_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___outCurveX_5), (void*)value);
	}

	inline static int32_t get_offset_of_outCurveY_6() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass73_0_tA9EDB2D4E6569D8D39993A6304B9396566B6F89C, ___outCurveY_6)); }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * get_outCurveY_6() const { return ___outCurveY_6; }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** get_address_of_outCurveY_6() { return &___outCurveY_6; }
	inline void set_outCurveY_6(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * value)
	{
		___outCurveY_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___outCurveY_6), (void*)value);
	}

	inline static int32_t get_offset_of_outCurveZ_7() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass73_0_tA9EDB2D4E6569D8D39993A6304B9396566B6F89C, ___outCurveZ_7)); }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * get_outCurveZ_7() const { return ___outCurveZ_7; }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** get_address_of_outCurveZ_7() { return &___outCurveZ_7; }
	inline void set_outCurveZ_7(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * value)
	{
		___outCurveZ_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___outCurveZ_7), (void*)value);
	}
};


// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Microsoft.MixedReality.Toolkit.Input.InputAnimation>
struct  AsyncTaskMethodBuilder_1_tF3202EB14A45BB67CE82B3124E365B8DEFF9BF80 
{
public:
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_tB231B84F8F2E5D004D7EE56C7AC413E80914BC74 * ___m_task_2;

public:
	inline static int32_t get_offset_of_m_coreState_1() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_tF3202EB14A45BB67CE82B3124E365B8DEFF9BF80, ___m_coreState_1)); }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  get_m_coreState_1() const { return ___m_coreState_1; }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 * get_address_of_m_coreState_1() { return &___m_coreState_1; }
	inline void set_m_coreState_1(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  value)
	{
		___m_coreState_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_task_2() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_tF3202EB14A45BB67CE82B3124E365B8DEFF9BF80, ___m_task_2)); }
	inline Task_1_tB231B84F8F2E5D004D7EE56C7AC413E80914BC74 * get_m_task_2() const { return ___m_task_2; }
	inline Task_1_tB231B84F8F2E5D004D7EE56C7AC413E80914BC74 ** get_address_of_m_task_2() { return &___m_task_2; }
	inline void set_m_task_2(Task_1_tB231B84F8F2E5D004D7EE56C7AC413E80914BC74 * value)
	{
		___m_task_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_2), (void*)value);
	}
};

struct AsyncTaskMethodBuilder_1_tF3202EB14A45BB67CE82B3124E365B8DEFF9BF80_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_tB231B84F8F2E5D004D7EE56C7AC413E80914BC74 * ___s_defaultResultTask_0;

public:
	inline static int32_t get_offset_of_s_defaultResultTask_0() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_tF3202EB14A45BB67CE82B3124E365B8DEFF9BF80_StaticFields, ___s_defaultResultTask_0)); }
	inline Task_1_tB231B84F8F2E5D004D7EE56C7AC413E80914BC74 * get_s_defaultResultTask_0() const { return ___s_defaultResultTask_0; }
	inline Task_1_tB231B84F8F2E5D004D7EE56C7AC413E80914BC74 ** get_address_of_s_defaultResultTask_0() { return &___s_defaultResultTask_0; }
	inline void set_s_defaultResultTask_0(Task_1_tB231B84F8F2E5D004D7EE56C7AC413E80914BC74 * value)
	{
		___s_defaultResultTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_defaultResultTask_0), (void*)value);
	}
};


// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>
struct  AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020 
{
public:
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * ___m_task_2;

public:
	inline static int32_t get_offset_of_m_coreState_1() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020, ___m_coreState_1)); }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  get_m_coreState_1() const { return ___m_coreState_1; }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 * get_address_of_m_coreState_1() { return &___m_coreState_1; }
	inline void set_m_coreState_1(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  value)
	{
		___m_coreState_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_task_2() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020, ___m_task_2)); }
	inline Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * get_m_task_2() const { return ___m_task_2; }
	inline Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 ** get_address_of_m_task_2() { return &___m_task_2; }
	inline void set_m_task_2(Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * value)
	{
		___m_task_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_2), (void*)value);
	}
};

struct AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * ___s_defaultResultTask_0;

public:
	inline static int32_t get_offset_of_s_defaultResultTask_0() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020_StaticFields, ___s_defaultResultTask_0)); }
	inline Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * get_s_defaultResultTask_0() const { return ___s_defaultResultTask_0; }
	inline Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 ** get_address_of_s_defaultResultTask_0() { return &___s_defaultResultTask_0; }
	inline void set_s_defaultResultTask_0(Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * value)
	{
		___s_defaultResultTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_defaultResultTask_0), (void*)value);
	}
};


// UnityEngine.AnimationCurve
struct  AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.AnimationCurve::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// Microsoft.MixedReality.Toolkit.Utilities.AxisType
struct  AxisType_tFA382360CBEDF34BB549410E81A1B1D1FA76A459 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.AxisType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AxisType_tFA382360CBEDF34BB549410E81A1B1D1FA76A459, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.BaseService
struct  BaseService_tF2C2512816D1D0EE872AC911E3BAF7F9E5A44C16  : public RuntimeObject
{
public:
	// System.String Microsoft.MixedReality.Toolkit.BaseService::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_1;
	// System.UInt32 Microsoft.MixedReality.Toolkit.BaseService::<Priority>k__BackingField
	uint32_t ___U3CPriorityU3Ek__BackingField_2;
	// Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile Microsoft.MixedReality.Toolkit.BaseService::<ConfigurationProfile>k__BackingField
	BaseMixedRealityProfile_tC5DBD7146B1E1D467DE81BA1EAB45133408A59E1 * ___U3CConfigurationProfileU3Ek__BackingField_3;
	// System.Nullable`1<System.Boolean> Microsoft.MixedReality.Toolkit.BaseService::isInitialized
	Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  ___isInitialized_4;
	// System.Nullable`1<System.Boolean> Microsoft.MixedReality.Toolkit.BaseService::isEnabled
	Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  ___isEnabled_5;
	// System.Nullable`1<System.Boolean> Microsoft.MixedReality.Toolkit.BaseService::isMarkedDestroyed
	Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  ___isMarkedDestroyed_6;
	// System.Boolean Microsoft.MixedReality.Toolkit.BaseService::disposed
	bool ___disposed_7;

public:
	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(BaseService_tF2C2512816D1D0EE872AC911E3BAF7F9E5A44C16, ___U3CNameU3Ek__BackingField_1)); }
	inline String_t* get_U3CNameU3Ek__BackingField_1() const { return ___U3CNameU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_1() { return &___U3CNameU3Ek__BackingField_1; }
	inline void set_U3CNameU3Ek__BackingField_1(String_t* value)
	{
		___U3CNameU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNameU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPriorityU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(BaseService_tF2C2512816D1D0EE872AC911E3BAF7F9E5A44C16, ___U3CPriorityU3Ek__BackingField_2)); }
	inline uint32_t get_U3CPriorityU3Ek__BackingField_2() const { return ___U3CPriorityU3Ek__BackingField_2; }
	inline uint32_t* get_address_of_U3CPriorityU3Ek__BackingField_2() { return &___U3CPriorityU3Ek__BackingField_2; }
	inline void set_U3CPriorityU3Ek__BackingField_2(uint32_t value)
	{
		___U3CPriorityU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CConfigurationProfileU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(BaseService_tF2C2512816D1D0EE872AC911E3BAF7F9E5A44C16, ___U3CConfigurationProfileU3Ek__BackingField_3)); }
	inline BaseMixedRealityProfile_tC5DBD7146B1E1D467DE81BA1EAB45133408A59E1 * get_U3CConfigurationProfileU3Ek__BackingField_3() const { return ___U3CConfigurationProfileU3Ek__BackingField_3; }
	inline BaseMixedRealityProfile_tC5DBD7146B1E1D467DE81BA1EAB45133408A59E1 ** get_address_of_U3CConfigurationProfileU3Ek__BackingField_3() { return &___U3CConfigurationProfileU3Ek__BackingField_3; }
	inline void set_U3CConfigurationProfileU3Ek__BackingField_3(BaseMixedRealityProfile_tC5DBD7146B1E1D467DE81BA1EAB45133408A59E1 * value)
	{
		___U3CConfigurationProfileU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CConfigurationProfileU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_isInitialized_4() { return static_cast<int32_t>(offsetof(BaseService_tF2C2512816D1D0EE872AC911E3BAF7F9E5A44C16, ___isInitialized_4)); }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  get_isInitialized_4() const { return ___isInitialized_4; }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 * get_address_of_isInitialized_4() { return &___isInitialized_4; }
	inline void set_isInitialized_4(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  value)
	{
		___isInitialized_4 = value;
	}

	inline static int32_t get_offset_of_isEnabled_5() { return static_cast<int32_t>(offsetof(BaseService_tF2C2512816D1D0EE872AC911E3BAF7F9E5A44C16, ___isEnabled_5)); }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  get_isEnabled_5() const { return ___isEnabled_5; }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 * get_address_of_isEnabled_5() { return &___isEnabled_5; }
	inline void set_isEnabled_5(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  value)
	{
		___isEnabled_5 = value;
	}

	inline static int32_t get_offset_of_isMarkedDestroyed_6() { return static_cast<int32_t>(offsetof(BaseService_tF2C2512816D1D0EE872AC911E3BAF7F9E5A44C16, ___isMarkedDestroyed_6)); }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  get_isMarkedDestroyed_6() const { return ___isMarkedDestroyed_6; }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 * get_address_of_isMarkedDestroyed_6() { return &___isMarkedDestroyed_6; }
	inline void set_isMarkedDestroyed_6(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  value)
	{
		___isMarkedDestroyed_6 = value;
	}

	inline static int32_t get_offset_of_disposed_7() { return static_cast<int32_t>(offsetof(BaseService_tF2C2512816D1D0EE872AC911E3BAF7F9E5A44C16, ___disposed_7)); }
	inline bool get_disposed_7() const { return ___disposed_7; }
	inline bool* get_address_of_disposed_7() { return &___disposed_7; }
	inline void set_disposed_7(bool value)
	{
		___disposed_7 = value;
	}
};


// System.Reflection.BindingFlags
struct  BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733 
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
struct  Delegate_t  : public RuntimeObject
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

// Microsoft.MixedReality.Toolkit.Input.DeviceInputType
struct  DeviceInputType_t67840BFEC29D6B484D0950C77E075C4C8C31A74D 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.DeviceInputType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DeviceInputType_t67840BFEC29D6B484D0950C77E075C4C8C31A74D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Exception
struct  Exception_t  : public RuntimeObject
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

// System.IO.FileAccess
struct  FileAccess_t09E176678AB8520C44024354E0DB2F01D40A2F5B 
{
public:
	// System.Int32 System.IO.FileAccess::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FileAccess_t09E176678AB8520C44024354E0DB2F01D40A2F5B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.IO.FileMode
struct  FileMode_t7AB84351F909CC2A0F99B798E50C6E8610994336 
{
public:
	// System.Int32 System.IO.FileMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FileMode_t7AB84351F909CC2A0F99B798E50C6E8610994336, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.Handedness
struct  Handedness_t1B5FD9A7BE51F5D347A4366FD841FBFC26B7BD21 
{
public:
	// System.Byte Microsoft.MixedReality.Toolkit.Utilities.Handedness::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Handedness_t1B5FD9A7BE51F5D347A4366FD841FBFC26B7BD21, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// System.Int32Enum
struct  Int32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C 
{
public:
	// System.Int32 System.Int32Enum::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Int32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.KeyCode
struct  KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4 
{
public:
	// System.Int32 UnityEngine.KeyCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose
struct  MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99 
{
public:
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::position
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position_1;
	// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::rotation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation_2;

public:
	inline static int32_t get_offset_of_position_1() { return static_cast<int32_t>(offsetof(MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99, ___position_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_position_1() const { return ___position_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_position_1() { return &___position_1; }
	inline void set_position_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___position_1 = value;
	}

	inline static int32_t get_offset_of_rotation_2() { return static_cast<int32_t>(offsetof(MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99, ___rotation_2)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_rotation_2() const { return ___rotation_2; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_rotation_2() { return &___rotation_2; }
	inline void set_rotation_2(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___rotation_2 = value;
	}
};

struct MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99_StaticFields
{
public:
	// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::<ZeroIdentity>k__BackingField
	MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99  ___U3CZeroIdentityU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CZeroIdentityU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99_StaticFields, ___U3CZeroIdentityU3Ek__BackingField_0)); }
	inline MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99  get_U3CZeroIdentityU3Ek__BackingField_0() const { return ___U3CZeroIdentityU3Ek__BackingField_0; }
	inline MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99 * get_address_of_U3CZeroIdentityU3Ek__BackingField_0() { return &___U3CZeroIdentityU3Ek__BackingField_0; }
	inline void set_U3CZeroIdentityU3Ek__BackingField_0(MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99  value)
	{
		___U3CZeroIdentityU3Ek__BackingField_0 = value;
	}
};


// UnityEngine.Object
struct  Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
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

// Unity.Profiling.ProfilerMarker
struct  ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 
{
public:
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};


// UnityEngine.Ray
struct  Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 
{
public:
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Direction_1;

public:
	inline static int32_t get_offset_of_m_Origin_0() { return static_cast<int32_t>(offsetof(Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6, ___m_Origin_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Origin_0() const { return ___m_Origin_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Origin_0() { return &___m_Origin_0; }
	inline void set_m_Origin_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Origin_0 = value;
	}

	inline static int32_t get_offset_of_m_Direction_1() { return static_cast<int32_t>(offsetof(Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6, ___m_Direction_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Direction_1() const { return ___m_Direction_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Direction_1() { return &___m_Direction_1; }
	inline void set_m_Direction_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Direction_1 = value;
	}
};


// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 
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


// System.Threading.Tasks.Task
struct  Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60  : public RuntimeObject
{
public:
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_4;
	// System.Object System.Threading.Tasks.Task::m_action
	RuntimeObject * ___m_action_5;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject * ___m_stateObject_6;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * ___m_taskScheduler_7;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_parent_8;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_9;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject * ___m_continuationObject_28;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * ___m_contingentProperties_33;

public:
	inline static int32_t get_offset_of_m_taskId_4() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_taskId_4)); }
	inline int32_t get_m_taskId_4() const { return ___m_taskId_4; }
	inline int32_t* get_address_of_m_taskId_4() { return &___m_taskId_4; }
	inline void set_m_taskId_4(int32_t value)
	{
		___m_taskId_4 = value;
	}

	inline static int32_t get_offset_of_m_action_5() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_action_5)); }
	inline RuntimeObject * get_m_action_5() const { return ___m_action_5; }
	inline RuntimeObject ** get_address_of_m_action_5() { return &___m_action_5; }
	inline void set_m_action_5(RuntimeObject * value)
	{
		___m_action_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_action_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_stateObject_6() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_stateObject_6)); }
	inline RuntimeObject * get_m_stateObject_6() const { return ___m_stateObject_6; }
	inline RuntimeObject ** get_address_of_m_stateObject_6() { return &___m_stateObject_6; }
	inline void set_m_stateObject_6(RuntimeObject * value)
	{
		___m_stateObject_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_stateObject_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_taskScheduler_7() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_taskScheduler_7)); }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * get_m_taskScheduler_7() const { return ___m_taskScheduler_7; }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D ** get_address_of_m_taskScheduler_7() { return &___m_taskScheduler_7; }
	inline void set_m_taskScheduler_7(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * value)
	{
		___m_taskScheduler_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_taskScheduler_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_parent_8() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_parent_8)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_m_parent_8() const { return ___m_parent_8; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_m_parent_8() { return &___m_parent_8; }
	inline void set_m_parent_8(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___m_parent_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_parent_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_stateFlags_9() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_stateFlags_9)); }
	inline int32_t get_m_stateFlags_9() const { return ___m_stateFlags_9; }
	inline int32_t* get_address_of_m_stateFlags_9() { return &___m_stateFlags_9; }
	inline void set_m_stateFlags_9(int32_t value)
	{
		___m_stateFlags_9 = value;
	}

	inline static int32_t get_offset_of_m_continuationObject_28() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_continuationObject_28)); }
	inline RuntimeObject * get_m_continuationObject_28() const { return ___m_continuationObject_28; }
	inline RuntimeObject ** get_address_of_m_continuationObject_28() { return &___m_continuationObject_28; }
	inline void set_m_continuationObject_28(RuntimeObject * value)
	{
		___m_continuationObject_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_continuationObject_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_contingentProperties_33() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_contingentProperties_33)); }
	inline ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * get_m_contingentProperties_33() const { return ___m_contingentProperties_33; }
	inline ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 ** get_address_of_m_contingentProperties_33() { return &___m_contingentProperties_33; }
	inline void set_m_contingentProperties_33(ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * value)
	{
		___m_contingentProperties_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_contingentProperties_33), (void*)value);
	}
};

struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields
{
public:
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_2;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::s_factory
	TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * ___s_factory_3;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject * ___s_taskCompletionSentinel_29;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_30;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * ___s_currentActiveTasks_31;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject * ___s_activeTasksLock_32;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___s_taskCancelCallback_34;
	// System.Func`1<System.Threading.Tasks.Task/ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * ___s_createContingentProperties_35;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::s_completedTask
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___s_completedTask_36;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * ___s_IsExceptionObservedByParentPredicate_37;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * ___s_ecCallback_38;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * ___s_IsTaskContinuationNullPredicate_39;

public:
	inline static int32_t get_offset_of_s_taskIdCounter_2() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskIdCounter_2)); }
	inline int32_t get_s_taskIdCounter_2() const { return ___s_taskIdCounter_2; }
	inline int32_t* get_address_of_s_taskIdCounter_2() { return &___s_taskIdCounter_2; }
	inline void set_s_taskIdCounter_2(int32_t value)
	{
		___s_taskIdCounter_2 = value;
	}

	inline static int32_t get_offset_of_s_factory_3() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_factory_3)); }
	inline TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * get_s_factory_3() const { return ___s_factory_3; }
	inline TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B ** get_address_of_s_factory_3() { return &___s_factory_3; }
	inline void set_s_factory_3(TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * value)
	{
		___s_factory_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_factory_3), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskCompletionSentinel_29() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskCompletionSentinel_29)); }
	inline RuntimeObject * get_s_taskCompletionSentinel_29() const { return ___s_taskCompletionSentinel_29; }
	inline RuntimeObject ** get_address_of_s_taskCompletionSentinel_29() { return &___s_taskCompletionSentinel_29; }
	inline void set_s_taskCompletionSentinel_29(RuntimeObject * value)
	{
		___s_taskCompletionSentinel_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_taskCompletionSentinel_29), (void*)value);
	}

	inline static int32_t get_offset_of_s_asyncDebuggingEnabled_30() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_asyncDebuggingEnabled_30)); }
	inline bool get_s_asyncDebuggingEnabled_30() const { return ___s_asyncDebuggingEnabled_30; }
	inline bool* get_address_of_s_asyncDebuggingEnabled_30() { return &___s_asyncDebuggingEnabled_30; }
	inline void set_s_asyncDebuggingEnabled_30(bool value)
	{
		___s_asyncDebuggingEnabled_30 = value;
	}

	inline static int32_t get_offset_of_s_currentActiveTasks_31() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_currentActiveTasks_31)); }
	inline Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * get_s_currentActiveTasks_31() const { return ___s_currentActiveTasks_31; }
	inline Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 ** get_address_of_s_currentActiveTasks_31() { return &___s_currentActiveTasks_31; }
	inline void set_s_currentActiveTasks_31(Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * value)
	{
		___s_currentActiveTasks_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_currentActiveTasks_31), (void*)value);
	}

	inline static int32_t get_offset_of_s_activeTasksLock_32() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_activeTasksLock_32)); }
	inline RuntimeObject * get_s_activeTasksLock_32() const { return ___s_activeTasksLock_32; }
	inline RuntimeObject ** get_address_of_s_activeTasksLock_32() { return &___s_activeTasksLock_32; }
	inline void set_s_activeTasksLock_32(RuntimeObject * value)
	{
		___s_activeTasksLock_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_activeTasksLock_32), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskCancelCallback_34() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskCancelCallback_34)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_s_taskCancelCallback_34() const { return ___s_taskCancelCallback_34; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_s_taskCancelCallback_34() { return &___s_taskCancelCallback_34; }
	inline void set_s_taskCancelCallback_34(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___s_taskCancelCallback_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_taskCancelCallback_34), (void*)value);
	}

	inline static int32_t get_offset_of_s_createContingentProperties_35() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_createContingentProperties_35)); }
	inline Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * get_s_createContingentProperties_35() const { return ___s_createContingentProperties_35; }
	inline Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B ** get_address_of_s_createContingentProperties_35() { return &___s_createContingentProperties_35; }
	inline void set_s_createContingentProperties_35(Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * value)
	{
		___s_createContingentProperties_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_createContingentProperties_35), (void*)value);
	}

	inline static int32_t get_offset_of_s_completedTask_36() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_completedTask_36)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_s_completedTask_36() const { return ___s_completedTask_36; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_s_completedTask_36() { return &___s_completedTask_36; }
	inline void set_s_completedTask_36(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___s_completedTask_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_completedTask_36), (void*)value);
	}

	inline static int32_t get_offset_of_s_IsExceptionObservedByParentPredicate_37() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_IsExceptionObservedByParentPredicate_37)); }
	inline Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * get_s_IsExceptionObservedByParentPredicate_37() const { return ___s_IsExceptionObservedByParentPredicate_37; }
	inline Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD ** get_address_of_s_IsExceptionObservedByParentPredicate_37() { return &___s_IsExceptionObservedByParentPredicate_37; }
	inline void set_s_IsExceptionObservedByParentPredicate_37(Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * value)
	{
		___s_IsExceptionObservedByParentPredicate_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_IsExceptionObservedByParentPredicate_37), (void*)value);
	}

	inline static int32_t get_offset_of_s_ecCallback_38() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_ecCallback_38)); }
	inline ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * get_s_ecCallback_38() const { return ___s_ecCallback_38; }
	inline ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B ** get_address_of_s_ecCallback_38() { return &___s_ecCallback_38; }
	inline void set_s_ecCallback_38(ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * value)
	{
		___s_ecCallback_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ecCallback_38), (void*)value);
	}

	inline static int32_t get_offset_of_s_IsTaskContinuationNullPredicate_39() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_IsTaskContinuationNullPredicate_39)); }
	inline Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * get_s_IsTaskContinuationNullPredicate_39() const { return ___s_IsTaskContinuationNullPredicate_39; }
	inline Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB ** get_address_of_s_IsTaskContinuationNullPredicate_39() { return &___s_IsTaskContinuationNullPredicate_39; }
	inline void set_s_IsTaskContinuationNullPredicate_39(Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * value)
	{
		___s_IsTaskContinuationNullPredicate_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_IsTaskContinuationNullPredicate_39), (void*)value);
	}
};

struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields
{
public:
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___t_currentTask_0;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * ___t_stackGuard_1;

public:
	inline static int32_t get_offset_of_t_currentTask_0() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields, ___t_currentTask_0)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_t_currentTask_0() const { return ___t_currentTask_0; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_t_currentTask_0() { return &___t_currentTask_0; }
	inline void set_t_currentTask_0(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___t_currentTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_currentTask_0), (void*)value);
	}

	inline static int32_t get_offset_of_t_stackGuard_1() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields, ___t_stackGuard_1)); }
	inline StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * get_t_stackGuard_1() const { return ___t_stackGuard_1; }
	inline StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D ** get_address_of_t_stackGuard_1() { return &___t_stackGuard_1; }
	inline void set_t_stackGuard_1(StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * value)
	{
		___t_stackGuard_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_stackGuard_1), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint
struct  TrackedHandJoint_tFDADC49BA87BC6CBE390A69B0CC80925BAA37FD6 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TrackedHandJoint_tFDADC49BA87BC6CBE390A69B0CC80925BAA37FD6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.TrackingState
struct  TrackingState_tF1797874F4C862EF716DCF9E952F427C7CEA9632 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.TrackingState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TrackingState_tF1797874F4C862EF716DCF9E952F427C7CEA9632, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.WeightedMode
struct  WeightedMode_t2BB71D70C68B28318D2B43BBA96180BB4406FDA7 
{
public:
	// System.Int32 UnityEngine.WeightedMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(WeightedMode_t2BB71D70C68B28318D2B43BBA96180BB4406FDA7, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.WrapMode
struct  WrapMode_t0DF566E32B136795606714DB9A11A3DC170F5468 
{
public:
	// System.Int32 UnityEngine.WrapMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(WrapMode_t0DF566E32B136795606714DB9A11A3DC170F5468, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.InputAnimation/<GetAllAnimationCurves>d__60
struct  U3CGetAllAnimationCurvesU3Ed__60_tABFAAE907711737282276C10EB4C546A49E1D0C4  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.InputAnimation/<GetAllAnimationCurves>d__60::<>1__state
	int32_t ___U3CU3E1__state_0;
	// UnityEngine.AnimationCurve Microsoft.MixedReality.Toolkit.Input.InputAnimation/<GetAllAnimationCurves>d__60::<>2__current
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___U3CU3E2__current_1;
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.InputAnimation/<GetAllAnimationCurves>d__60::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// Microsoft.MixedReality.Toolkit.Input.InputAnimation Microsoft.MixedReality.Toolkit.Input.InputAnimation/<GetAllAnimationCurves>d__60::<>4__this
	InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534 * ___U3CU3E4__this_3;
	// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Input.InputAnimation/PoseCurves> Microsoft.MixedReality.Toolkit.Input.InputAnimation/<GetAllAnimationCurves>d__60::<>7__wrap1
	Enumerator_t6359D50CF0EE93ACDDC59D9FCAE8F0DD31D8DE50  ___U3CU3E7__wrap1_4;
	// Microsoft.MixedReality.Toolkit.Input.InputAnimation/PoseCurves Microsoft.MixedReality.Toolkit.Input.InputAnimation/<GetAllAnimationCurves>d__60::<curves>5__3
	PoseCurves_t14269C65E2E6B6A532EF4AC78324976DF2587501 * ___U3CcurvesU3E5__3_5;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CGetAllAnimationCurvesU3Ed__60_tABFAAE907711737282276C10EB4C546A49E1D0C4, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CGetAllAnimationCurvesU3Ed__60_tABFAAE907711737282276C10EB4C546A49E1D0C4, ___U3CU3E2__current_1)); }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3El__initialThreadId_2() { return static_cast<int32_t>(offsetof(U3CGetAllAnimationCurvesU3Ed__60_tABFAAE907711737282276C10EB4C546A49E1D0C4, ___U3CU3El__initialThreadId_2)); }
	inline int32_t get_U3CU3El__initialThreadId_2() const { return ___U3CU3El__initialThreadId_2; }
	inline int32_t* get_address_of_U3CU3El__initialThreadId_2() { return &___U3CU3El__initialThreadId_2; }
	inline void set_U3CU3El__initialThreadId_2(int32_t value)
	{
		___U3CU3El__initialThreadId_2 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CGetAllAnimationCurvesU3Ed__60_tABFAAE907711737282276C10EB4C546A49E1D0C4, ___U3CU3E4__this_3)); }
	inline InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534 * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534 ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534 * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap1_4() { return static_cast<int32_t>(offsetof(U3CGetAllAnimationCurvesU3Ed__60_tABFAAE907711737282276C10EB4C546A49E1D0C4, ___U3CU3E7__wrap1_4)); }
	inline Enumerator_t6359D50CF0EE93ACDDC59D9FCAE8F0DD31D8DE50  get_U3CU3E7__wrap1_4() const { return ___U3CU3E7__wrap1_4; }
	inline Enumerator_t6359D50CF0EE93ACDDC59D9FCAE8F0DD31D8DE50 * get_address_of_U3CU3E7__wrap1_4() { return &___U3CU3E7__wrap1_4; }
	inline void set_U3CU3E7__wrap1_4(Enumerator_t6359D50CF0EE93ACDDC59D9FCAE8F0DD31D8DE50  value)
	{
		___U3CU3E7__wrap1_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E7__wrap1_4))->___dictionary_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E7__wrap1_4))->___currentValue_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CcurvesU3E5__3_5() { return static_cast<int32_t>(offsetof(U3CGetAllAnimationCurvesU3Ed__60_tABFAAE907711737282276C10EB4C546A49E1D0C4, ___U3CcurvesU3E5__3_5)); }
	inline PoseCurves_t14269C65E2E6B6A532EF4AC78324976DF2587501 * get_U3CcurvesU3E5__3_5() const { return ___U3CcurvesU3E5__3_5; }
	inline PoseCurves_t14269C65E2E6B6A532EF4AC78324976DF2587501 ** get_address_of_U3CcurvesU3E5__3_5() { return &___U3CcurvesU3E5__3_5; }
	inline void set_U3CcurvesU3E5__3_5(PoseCurves_t14269C65E2E6B6A532EF4AC78324976DF2587501 * value)
	{
		___U3CcurvesU3E5__3_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CcurvesU3E5__3_5), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.BaseDataProvider`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem>
struct  BaseDataProvider_1_t3589CFF3526B1A6A8BD790F9940DB1CA28C43A02  : public BaseService_tF2C2512816D1D0EE872AC911E3BAF7F9E5A44C16
{
public:
	// Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar Microsoft.MixedReality.Toolkit.BaseDataProvider`1::<Registrar>k__BackingField
	RuntimeObject* ___U3CRegistrarU3Ek__BackingField_8;
	// T Microsoft.MixedReality.Toolkit.BaseDataProvider`1::<Service>k__BackingField
	RuntimeObject* ___U3CServiceU3Ek__BackingField_9;

public:
	inline static int32_t get_offset_of_U3CRegistrarU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(BaseDataProvider_1_t3589CFF3526B1A6A8BD790F9940DB1CA28C43A02, ___U3CRegistrarU3Ek__BackingField_8)); }
	inline RuntimeObject* get_U3CRegistrarU3Ek__BackingField_8() const { return ___U3CRegistrarU3Ek__BackingField_8; }
	inline RuntimeObject** get_address_of_U3CRegistrarU3Ek__BackingField_8() { return &___U3CRegistrarU3Ek__BackingField_8; }
	inline void set_U3CRegistrarU3Ek__BackingField_8(RuntimeObject* value)
	{
		___U3CRegistrarU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRegistrarU3Ek__BackingField_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3CServiceU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(BaseDataProvider_1_t3589CFF3526B1A6A8BD790F9940DB1CA28C43A02, ___U3CServiceU3Ek__BackingField_9)); }
	inline RuntimeObject* get_U3CServiceU3Ek__BackingField_9() const { return ___U3CServiceU3Ek__BackingField_9; }
	inline RuntimeObject** get_address_of_U3CServiceU3Ek__BackingField_9() { return &___U3CServiceU3Ek__BackingField_9; }
	inline void set_U3CServiceU3Ek__BackingField_9(RuntimeObject* value)
	{
		___U3CServiceU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CServiceU3Ek__BackingField_9), (void*)value);
	}
};


// System.Threading.Tasks.Task`1<Microsoft.MixedReality.Toolkit.Input.InputAnimation>
struct  Task_1_tB231B84F8F2E5D004D7EE56C7AC413E80914BC74  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534 * ___m_result_40;

public:
	inline static int32_t get_offset_of_m_result_40() { return static_cast<int32_t>(offsetof(Task_1_tB231B84F8F2E5D004D7EE56C7AC413E80914BC74, ___m_result_40)); }
	inline InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534 * get_m_result_40() const { return ___m_result_40; }
	inline InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534 ** get_address_of_m_result_40() { return &___m_result_40; }
	inline void set_m_result_40(InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534 * value)
	{
		___m_result_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_result_40), (void*)value);
	}
};

struct Task_1_tB231B84F8F2E5D004D7EE56C7AC413E80914BC74_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_tC5773A7F5FB0315235DABE4696D4D0ABF288DE0D * ___s_Factory_41;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_t60234BEFF912B17E5B854081B3E154E746B06B84 * ___TaskWhenAnyCast_42;

public:
	inline static int32_t get_offset_of_s_Factory_41() { return static_cast<int32_t>(offsetof(Task_1_tB231B84F8F2E5D004D7EE56C7AC413E80914BC74_StaticFields, ___s_Factory_41)); }
	inline TaskFactory_1_tC5773A7F5FB0315235DABE4696D4D0ABF288DE0D * get_s_Factory_41() const { return ___s_Factory_41; }
	inline TaskFactory_1_tC5773A7F5FB0315235DABE4696D4D0ABF288DE0D ** get_address_of_s_Factory_41() { return &___s_Factory_41; }
	inline void set_s_Factory_41(TaskFactory_1_tC5773A7F5FB0315235DABE4696D4D0ABF288DE0D * value)
	{
		___s_Factory_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_41), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_42() { return static_cast<int32_t>(offsetof(Task_1_tB231B84F8F2E5D004D7EE56C7AC413E80914BC74_StaticFields, ___TaskWhenAnyCast_42)); }
	inline Func_2_t60234BEFF912B17E5B854081B3E154E746B06B84 * get_TaskWhenAnyCast_42() const { return ___TaskWhenAnyCast_42; }
	inline Func_2_t60234BEFF912B17E5B854081B3E154E746B06B84 ** get_address_of_TaskWhenAnyCast_42() { return &___TaskWhenAnyCast_42; }
	inline void set_TaskWhenAnyCast_42(Func_2_t60234BEFF912B17E5B854081B3E154E746B06B84 * value)
	{
		___TaskWhenAnyCast_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_42), (void*)value);
	}
};


// UnityEngine.Component
struct  Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.IO.FileStream
struct  FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26  : public Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB
{
public:
	// System.Byte[] System.IO.FileStream::buf
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buf_6;
	// System.String System.IO.FileStream::name
	String_t* ___name_7;
	// Microsoft.Win32.SafeHandles.SafeFileHandle System.IO.FileStream::safeHandle
	SafeFileHandle_tC77A9860A03C31DC46AD2C08EC10EACDC3B7A662 * ___safeHandle_8;
	// System.Boolean System.IO.FileStream::isExposed
	bool ___isExposed_9;
	// System.Int64 System.IO.FileStream::append_startpos
	int64_t ___append_startpos_10;
	// System.IO.FileAccess System.IO.FileStream::access
	int32_t ___access_11;
	// System.Boolean System.IO.FileStream::owner
	bool ___owner_12;
	// System.Boolean System.IO.FileStream::async
	bool ___async_13;
	// System.Boolean System.IO.FileStream::canseek
	bool ___canseek_14;
	// System.Boolean System.IO.FileStream::anonymous
	bool ___anonymous_15;
	// System.Boolean System.IO.FileStream::buf_dirty
	bool ___buf_dirty_16;
	// System.Int32 System.IO.FileStream::buf_size
	int32_t ___buf_size_17;
	// System.Int32 System.IO.FileStream::buf_length
	int32_t ___buf_length_18;
	// System.Int32 System.IO.FileStream::buf_offset
	int32_t ___buf_offset_19;
	// System.Int64 System.IO.FileStream::buf_start
	int64_t ___buf_start_20;

public:
	inline static int32_t get_offset_of_buf_6() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___buf_6)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_buf_6() const { return ___buf_6; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_buf_6() { return &___buf_6; }
	inline void set_buf_6(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___buf_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buf_6), (void*)value);
	}

	inline static int32_t get_offset_of_name_7() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___name_7)); }
	inline String_t* get_name_7() const { return ___name_7; }
	inline String_t** get_address_of_name_7() { return &___name_7; }
	inline void set_name_7(String_t* value)
	{
		___name_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_7), (void*)value);
	}

	inline static int32_t get_offset_of_safeHandle_8() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___safeHandle_8)); }
	inline SafeFileHandle_tC77A9860A03C31DC46AD2C08EC10EACDC3B7A662 * get_safeHandle_8() const { return ___safeHandle_8; }
	inline SafeFileHandle_tC77A9860A03C31DC46AD2C08EC10EACDC3B7A662 ** get_address_of_safeHandle_8() { return &___safeHandle_8; }
	inline void set_safeHandle_8(SafeFileHandle_tC77A9860A03C31DC46AD2C08EC10EACDC3B7A662 * value)
	{
		___safeHandle_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___safeHandle_8), (void*)value);
	}

	inline static int32_t get_offset_of_isExposed_9() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___isExposed_9)); }
	inline bool get_isExposed_9() const { return ___isExposed_9; }
	inline bool* get_address_of_isExposed_9() { return &___isExposed_9; }
	inline void set_isExposed_9(bool value)
	{
		___isExposed_9 = value;
	}

	inline static int32_t get_offset_of_append_startpos_10() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___append_startpos_10)); }
	inline int64_t get_append_startpos_10() const { return ___append_startpos_10; }
	inline int64_t* get_address_of_append_startpos_10() { return &___append_startpos_10; }
	inline void set_append_startpos_10(int64_t value)
	{
		___append_startpos_10 = value;
	}

	inline static int32_t get_offset_of_access_11() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___access_11)); }
	inline int32_t get_access_11() const { return ___access_11; }
	inline int32_t* get_address_of_access_11() { return &___access_11; }
	inline void set_access_11(int32_t value)
	{
		___access_11 = value;
	}

	inline static int32_t get_offset_of_owner_12() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___owner_12)); }
	inline bool get_owner_12() const { return ___owner_12; }
	inline bool* get_address_of_owner_12() { return &___owner_12; }
	inline void set_owner_12(bool value)
	{
		___owner_12 = value;
	}

	inline static int32_t get_offset_of_async_13() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___async_13)); }
	inline bool get_async_13() const { return ___async_13; }
	inline bool* get_address_of_async_13() { return &___async_13; }
	inline void set_async_13(bool value)
	{
		___async_13 = value;
	}

	inline static int32_t get_offset_of_canseek_14() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___canseek_14)); }
	inline bool get_canseek_14() const { return ___canseek_14; }
	inline bool* get_address_of_canseek_14() { return &___canseek_14; }
	inline void set_canseek_14(bool value)
	{
		___canseek_14 = value;
	}

	inline static int32_t get_offset_of_anonymous_15() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___anonymous_15)); }
	inline bool get_anonymous_15() const { return ___anonymous_15; }
	inline bool* get_address_of_anonymous_15() { return &___anonymous_15; }
	inline void set_anonymous_15(bool value)
	{
		___anonymous_15 = value;
	}

	inline static int32_t get_offset_of_buf_dirty_16() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___buf_dirty_16)); }
	inline bool get_buf_dirty_16() const { return ___buf_dirty_16; }
	inline bool* get_address_of_buf_dirty_16() { return &___buf_dirty_16; }
	inline void set_buf_dirty_16(bool value)
	{
		___buf_dirty_16 = value;
	}

	inline static int32_t get_offset_of_buf_size_17() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___buf_size_17)); }
	inline int32_t get_buf_size_17() const { return ___buf_size_17; }
	inline int32_t* get_address_of_buf_size_17() { return &___buf_size_17; }
	inline void set_buf_size_17(int32_t value)
	{
		___buf_size_17 = value;
	}

	inline static int32_t get_offset_of_buf_length_18() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___buf_length_18)); }
	inline int32_t get_buf_length_18() const { return ___buf_length_18; }
	inline int32_t* get_address_of_buf_length_18() { return &___buf_length_18; }
	inline void set_buf_length_18(int32_t value)
	{
		___buf_length_18 = value;
	}

	inline static int32_t get_offset_of_buf_offset_19() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___buf_offset_19)); }
	inline int32_t get_buf_offset_19() const { return ___buf_offset_19; }
	inline int32_t* get_address_of_buf_offset_19() { return &___buf_offset_19; }
	inline void set_buf_offset_19(int32_t value)
	{
		___buf_offset_19 = value;
	}

	inline static int32_t get_offset_of_buf_start_20() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___buf_start_20)); }
	inline int64_t get_buf_start_20() const { return ___buf_start_20; }
	inline int64_t* get_address_of_buf_start_20() { return &___buf_start_20; }
	inline void set_buf_start_20(int64_t value)
	{
		___buf_start_20 = value;
	}
};

struct FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26_StaticFields
{
public:
	// System.Byte[] System.IO.FileStream::buf_recycle
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buf_recycle_4;
	// System.Object System.IO.FileStream::buf_recycle_lock
	RuntimeObject * ___buf_recycle_lock_5;

public:
	inline static int32_t get_offset_of_buf_recycle_4() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26_StaticFields, ___buf_recycle_4)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_buf_recycle_4() const { return ___buf_recycle_4; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_buf_recycle_4() { return &___buf_recycle_4; }
	inline void set_buf_recycle_4(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___buf_recycle_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buf_recycle_4), (void*)value);
	}

	inline static int32_t get_offset_of_buf_recycle_lock_5() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26_StaticFields, ___buf_recycle_lock_5)); }
	inline RuntimeObject * get_buf_recycle_lock_5() const { return ___buf_recycle_lock_5; }
	inline RuntimeObject ** get_address_of_buf_recycle_lock_5() { return &___buf_recycle_lock_5; }
	inline void set_buf_recycle_lock_5(RuntimeObject * value)
	{
		___buf_recycle_lock_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buf_recycle_lock_5), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction
struct  MixedRealityInputAction_tF7F97EE20DEA505B55C4ACFDAE9DB4E9C27D2690 
{
public:
	// System.UInt32 Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::id
	uint32_t ___id_1;
	// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::description
	String_t* ___description_2;
	// Microsoft.MixedReality.Toolkit.Utilities.AxisType Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::axisConstraint
	int32_t ___axisConstraint_3;

public:
	inline static int32_t get_offset_of_id_1() { return static_cast<int32_t>(offsetof(MixedRealityInputAction_tF7F97EE20DEA505B55C4ACFDAE9DB4E9C27D2690, ___id_1)); }
	inline uint32_t get_id_1() const { return ___id_1; }
	inline uint32_t* get_address_of_id_1() { return &___id_1; }
	inline void set_id_1(uint32_t value)
	{
		___id_1 = value;
	}

	inline static int32_t get_offset_of_description_2() { return static_cast<int32_t>(offsetof(MixedRealityInputAction_tF7F97EE20DEA505B55C4ACFDAE9DB4E9C27D2690, ___description_2)); }
	inline String_t* get_description_2() const { return ___description_2; }
	inline String_t** get_address_of_description_2() { return &___description_2; }
	inline void set_description_2(String_t* value)
	{
		___description_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___description_2), (void*)value);
	}

	inline static int32_t get_offset_of_axisConstraint_3() { return static_cast<int32_t>(offsetof(MixedRealityInputAction_tF7F97EE20DEA505B55C4ACFDAE9DB4E9C27D2690, ___axisConstraint_3)); }
	inline int32_t get_axisConstraint_3() const { return ___axisConstraint_3; }
	inline int32_t* get_address_of_axisConstraint_3() { return &___axisConstraint_3; }
	inline void set_axisConstraint_3(int32_t value)
	{
		___axisConstraint_3 = value;
	}
};

struct MixedRealityInputAction_tF7F97EE20DEA505B55C4ACFDAE9DB4E9C27D2690_StaticFields
{
public:
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::<None>k__BackingField
	MixedRealityInputAction_tF7F97EE20DEA505B55C4ACFDAE9DB4E9C27D2690  ___U3CNoneU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CNoneU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(MixedRealityInputAction_tF7F97EE20DEA505B55C4ACFDAE9DB4E9C27D2690_StaticFields, ___U3CNoneU3Ek__BackingField_0)); }
	inline MixedRealityInputAction_tF7F97EE20DEA505B55C4ACFDAE9DB4E9C27D2690  get_U3CNoneU3Ek__BackingField_0() const { return ___U3CNoneU3Ek__BackingField_0; }
	inline MixedRealityInputAction_tF7F97EE20DEA505B55C4ACFDAE9DB4E9C27D2690 * get_address_of_U3CNoneU3Ek__BackingField_0() { return &___U3CNoneU3Ek__BackingField_0; }
	inline void set_U3CNoneU3Ek__BackingField_0(MixedRealityInputAction_tF7F97EE20DEA505B55C4ACFDAE9DB4E9C27D2690  value)
	{
		___U3CNoneU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CNoneU3Ek__BackingField_0))->___description_2), (void*)NULL);
	}
};

// Native definition for P/Invoke marshalling of Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction
struct MixedRealityInputAction_tF7F97EE20DEA505B55C4ACFDAE9DB4E9C27D2690_marshaled_pinvoke
{
	uint32_t ___id_1;
	char* ___description_2;
	int32_t ___axisConstraint_3;
};
// Native definition for COM marshalling of Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction
struct MixedRealityInputAction_tF7F97EE20DEA505B55C4ACFDAE9DB4E9C27D2690_marshaled_com
{
	uint32_t ___id_1;
	Il2CppChar* ___description_2;
	int32_t ___axisConstraint_3;
};

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
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

// UnityEngine.ScriptableObject
struct  ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
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
struct  SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// System.Type
struct  Type_t  : public MemberInfo_t
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


// Microsoft.MixedReality.Toolkit.Input.InputAnimation/<FromStreamAsync>d__50
struct  U3CFromStreamAsyncU3Ed__50_t0BAABAB4A343E3F573925043CD5CA6AE4597B105 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.InputAnimation/<FromStreamAsync>d__50::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Microsoft.MixedReality.Toolkit.Input.InputAnimation> Microsoft.MixedReality.Toolkit.Input.InputAnimation/<FromStreamAsync>d__50::<>t__builder
	AsyncTaskMethodBuilder_1_tF3202EB14A45BB67CE82B3124E365B8DEFF9BF80  ___U3CU3Et__builder_1;
	// System.IO.Stream Microsoft.MixedReality.Toolkit.Input.InputAnimation/<FromStreamAsync>d__50::stream
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___stream_2;
	// System.Action Microsoft.MixedReality.Toolkit.Input.InputAnimation/<FromStreamAsync>d__50::callback
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___callback_3;
	// System.Runtime.CompilerServices.TaskAwaiter`1<Microsoft.MixedReality.Toolkit.Input.InputAnimation> Microsoft.MixedReality.Toolkit.Input.InputAnimation/<FromStreamAsync>d__50::<>u__1
	TaskAwaiter_1_tF2BE961DAB576F8235B3EAB1BEE2B129DBB64946  ___U3CU3Eu__1_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CFromStreamAsyncU3Ed__50_t0BAABAB4A343E3F573925043CD5CA6AE4597B105, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CFromStreamAsyncU3Ed__50_t0BAABAB4A343E3F573925043CD5CA6AE4597B105, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_1_tF3202EB14A45BB67CE82B3124E365B8DEFF9BF80  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_1_tF3202EB14A45BB67CE82B3124E365B8DEFF9BF80 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_1_tF3202EB14A45BB67CE82B3124E365B8DEFF9BF80  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_stream_2() { return static_cast<int32_t>(offsetof(U3CFromStreamAsyncU3Ed__50_t0BAABAB4A343E3F573925043CD5CA6AE4597B105, ___stream_2)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get_stream_2() const { return ___stream_2; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of_stream_2() { return &___stream_2; }
	inline void set_stream_2(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		___stream_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stream_2), (void*)value);
	}

	inline static int32_t get_offset_of_callback_3() { return static_cast<int32_t>(offsetof(U3CFromStreamAsyncU3Ed__50_t0BAABAB4A343E3F573925043CD5CA6AE4597B105, ___callback_3)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_callback_3() const { return ___callback_3; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_callback_3() { return &___callback_3; }
	inline void set_callback_3(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___callback_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callback_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_4() { return static_cast<int32_t>(offsetof(U3CFromStreamAsyncU3Ed__50_t0BAABAB4A343E3F573925043CD5CA6AE4597B105, ___U3CU3Eu__1_4)); }
	inline TaskAwaiter_1_tF2BE961DAB576F8235B3EAB1BEE2B129DBB64946  get_U3CU3Eu__1_4() const { return ___U3CU3Eu__1_4; }
	inline TaskAwaiter_1_tF2BE961DAB576F8235B3EAB1BEE2B129DBB64946 * get_address_of_U3CU3Eu__1_4() { return &___U3CU3Eu__1_4; }
	inline void set_U3CU3Eu__1_4(TaskAwaiter_1_tF2BE961DAB576F8235B3EAB1BEE2B129DBB64946  value)
	{
		___U3CU3Eu__1_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_4))->___m_task_0), (void*)NULL);
	}
};


// Microsoft.MixedReality.Toolkit.Input.InputRecordingBuffer/Keyframe
struct  Keyframe_tB3167A15EF7CB57AA5C8498D640C6254A16F5B3F  : public RuntimeObject
{
public:
	// System.Single Microsoft.MixedReality.Toolkit.Input.InputRecordingBuffer/Keyframe::<Time>k__BackingField
	float ___U3CTimeU3Ek__BackingField_0;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.InputRecordingBuffer/Keyframe::<LeftTracked>k__BackingField
	bool ___U3CLeftTrackedU3Ek__BackingField_1;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.InputRecordingBuffer/Keyframe::<RightTracked>k__BackingField
	bool ___U3CRightTrackedU3Ek__BackingField_2;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.InputRecordingBuffer/Keyframe::<LeftPinch>k__BackingField
	bool ___U3CLeftPinchU3Ek__BackingField_3;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.InputRecordingBuffer/Keyframe::<RightPinch>k__BackingField
	bool ___U3CRightPinchU3Ek__BackingField_4;
	// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.Input.InputRecordingBuffer/Keyframe::<CameraPose>k__BackingField
	MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99  ___U3CCameraPoseU3Ek__BackingField_5;
	// UnityEngine.Ray Microsoft.MixedReality.Toolkit.Input.InputRecordingBuffer/Keyframe::<GazeRay>k__BackingField
	Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  ___U3CGazeRayU3Ek__BackingField_6;
	// System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose> Microsoft.MixedReality.Toolkit.Input.InputRecordingBuffer/Keyframe::<LeftJoints>k__BackingField
	Dictionary_2_tABC45B7C67E921F533EBEF222CFE2B891AA1E098 * ___U3CLeftJointsU3Ek__BackingField_7;
	// System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose> Microsoft.MixedReality.Toolkit.Input.InputRecordingBuffer/Keyframe::<RightJoints>k__BackingField
	Dictionary_2_tABC45B7C67E921F533EBEF222CFE2B891AA1E098 * ___U3CRightJointsU3Ek__BackingField_8;

public:
	inline static int32_t get_offset_of_U3CTimeU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Keyframe_tB3167A15EF7CB57AA5C8498D640C6254A16F5B3F, ___U3CTimeU3Ek__BackingField_0)); }
	inline float get_U3CTimeU3Ek__BackingField_0() const { return ___U3CTimeU3Ek__BackingField_0; }
	inline float* get_address_of_U3CTimeU3Ek__BackingField_0() { return &___U3CTimeU3Ek__BackingField_0; }
	inline void set_U3CTimeU3Ek__BackingField_0(float value)
	{
		___U3CTimeU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CLeftTrackedU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Keyframe_tB3167A15EF7CB57AA5C8498D640C6254A16F5B3F, ___U3CLeftTrackedU3Ek__BackingField_1)); }
	inline bool get_U3CLeftTrackedU3Ek__BackingField_1() const { return ___U3CLeftTrackedU3Ek__BackingField_1; }
	inline bool* get_address_of_U3CLeftTrackedU3Ek__BackingField_1() { return &___U3CLeftTrackedU3Ek__BackingField_1; }
	inline void set_U3CLeftTrackedU3Ek__BackingField_1(bool value)
	{
		___U3CLeftTrackedU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CRightTrackedU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Keyframe_tB3167A15EF7CB57AA5C8498D640C6254A16F5B3F, ___U3CRightTrackedU3Ek__BackingField_2)); }
	inline bool get_U3CRightTrackedU3Ek__BackingField_2() const { return ___U3CRightTrackedU3Ek__BackingField_2; }
	inline bool* get_address_of_U3CRightTrackedU3Ek__BackingField_2() { return &___U3CRightTrackedU3Ek__BackingField_2; }
	inline void set_U3CRightTrackedU3Ek__BackingField_2(bool value)
	{
		___U3CRightTrackedU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CLeftPinchU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Keyframe_tB3167A15EF7CB57AA5C8498D640C6254A16F5B3F, ___U3CLeftPinchU3Ek__BackingField_3)); }
	inline bool get_U3CLeftPinchU3Ek__BackingField_3() const { return ___U3CLeftPinchU3Ek__BackingField_3; }
	inline bool* get_address_of_U3CLeftPinchU3Ek__BackingField_3() { return &___U3CLeftPinchU3Ek__BackingField_3; }
	inline void set_U3CLeftPinchU3Ek__BackingField_3(bool value)
	{
		___U3CLeftPinchU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CRightPinchU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Keyframe_tB3167A15EF7CB57AA5C8498D640C6254A16F5B3F, ___U3CRightPinchU3Ek__BackingField_4)); }
	inline bool get_U3CRightPinchU3Ek__BackingField_4() const { return ___U3CRightPinchU3Ek__BackingField_4; }
	inline bool* get_address_of_U3CRightPinchU3Ek__BackingField_4() { return &___U3CRightPinchU3Ek__BackingField_4; }
	inline void set_U3CRightPinchU3Ek__BackingField_4(bool value)
	{
		___U3CRightPinchU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CCameraPoseU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(Keyframe_tB3167A15EF7CB57AA5C8498D640C6254A16F5B3F, ___U3CCameraPoseU3Ek__BackingField_5)); }
	inline MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99  get_U3CCameraPoseU3Ek__BackingField_5() const { return ___U3CCameraPoseU3Ek__BackingField_5; }
	inline MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99 * get_address_of_U3CCameraPoseU3Ek__BackingField_5() { return &___U3CCameraPoseU3Ek__BackingField_5; }
	inline void set_U3CCameraPoseU3Ek__BackingField_5(MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99  value)
	{
		___U3CCameraPoseU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CGazeRayU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(Keyframe_tB3167A15EF7CB57AA5C8498D640C6254A16F5B3F, ___U3CGazeRayU3Ek__BackingField_6)); }
	inline Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  get_U3CGazeRayU3Ek__BackingField_6() const { return ___U3CGazeRayU3Ek__BackingField_6; }
	inline Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 * get_address_of_U3CGazeRayU3Ek__BackingField_6() { return &___U3CGazeRayU3Ek__BackingField_6; }
	inline void set_U3CGazeRayU3Ek__BackingField_6(Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  value)
	{
		___U3CGazeRayU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CLeftJointsU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(Keyframe_tB3167A15EF7CB57AA5C8498D640C6254A16F5B3F, ___U3CLeftJointsU3Ek__BackingField_7)); }
	inline Dictionary_2_tABC45B7C67E921F533EBEF222CFE2B891AA1E098 * get_U3CLeftJointsU3Ek__BackingField_7() const { return ___U3CLeftJointsU3Ek__BackingField_7; }
	inline Dictionary_2_tABC45B7C67E921F533EBEF222CFE2B891AA1E098 ** get_address_of_U3CLeftJointsU3Ek__BackingField_7() { return &___U3CLeftJointsU3Ek__BackingField_7; }
	inline void set_U3CLeftJointsU3Ek__BackingField_7(Dictionary_2_tABC45B7C67E921F533EBEF222CFE2B891AA1E098 * value)
	{
		___U3CLeftJointsU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CLeftJointsU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CRightJointsU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(Keyframe_tB3167A15EF7CB57AA5C8498D640C6254A16F5B3F, ___U3CRightJointsU3Ek__BackingField_8)); }
	inline Dictionary_2_tABC45B7C67E921F533EBEF222CFE2B891AA1E098 * get_U3CRightJointsU3Ek__BackingField_8() const { return ___U3CRightJointsU3Ek__BackingField_8; }
	inline Dictionary_2_tABC45B7C67E921F533EBEF222CFE2B891AA1E098 ** get_address_of_U3CRightJointsU3Ek__BackingField_8() { return &___U3CRightJointsU3Ek__BackingField_8; }
	inline void set_U3CRightJointsU3Ek__BackingField_8(Dictionary_2_tABC45B7C67E921F533EBEF222CFE2B891AA1E098 * value)
	{
		___U3CRightJointsU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRightJointsU3Ek__BackingField_8), (void*)value);
	}
};


// System.Func`1<Microsoft.MixedReality.Toolkit.Input.InputAnimation>
struct  Func_1_tB0603EAA5A40D7E49AB43A40191F152B2BABFE2D  : public MulticastDelegate_t
{
public:

public:
};


// System.Action
struct  Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6  : public MulticastDelegate_t
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager
struct  BaseInputDeviceManager_t6A4D499FDBD693F4F9D789864B32292DB36568FB  : public BaseDataProvider_1_t3589CFF3526B1A6A8BD790F9940DB1CA28C43A02
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager::enablePointerCache
	bool ___enablePointerCache_10;
	// Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager/PointerConfig[] Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager::pointerConfigurations
	PointerConfigU5BU5D_t17182F245D18BDE8E16CCF14BC0FF2793EF9B08E* ___pointerConfigurations_11;
	// System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer,System.UInt32> Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager::activePointersToConfig
	Dictionary_2_tB877F46A6C20A56DEA8ED6DC3E004A3171647E3B * ___activePointersToConfig_13;

public:
	inline static int32_t get_offset_of_enablePointerCache_10() { return static_cast<int32_t>(offsetof(BaseInputDeviceManager_t6A4D499FDBD693F4F9D789864B32292DB36568FB, ___enablePointerCache_10)); }
	inline bool get_enablePointerCache_10() const { return ___enablePointerCache_10; }
	inline bool* get_address_of_enablePointerCache_10() { return &___enablePointerCache_10; }
	inline void set_enablePointerCache_10(bool value)
	{
		___enablePointerCache_10 = value;
	}

	inline static int32_t get_offset_of_pointerConfigurations_11() { return static_cast<int32_t>(offsetof(BaseInputDeviceManager_t6A4D499FDBD693F4F9D789864B32292DB36568FB, ___pointerConfigurations_11)); }
	inline PointerConfigU5BU5D_t17182F245D18BDE8E16CCF14BC0FF2793EF9B08E* get_pointerConfigurations_11() const { return ___pointerConfigurations_11; }
	inline PointerConfigU5BU5D_t17182F245D18BDE8E16CCF14BC0FF2793EF9B08E** get_address_of_pointerConfigurations_11() { return &___pointerConfigurations_11; }
	inline void set_pointerConfigurations_11(PointerConfigU5BU5D_t17182F245D18BDE8E16CCF14BC0FF2793EF9B08E* value)
	{
		___pointerConfigurations_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pointerConfigurations_11), (void*)value);
	}

	inline static int32_t get_offset_of_activePointersToConfig_13() { return static_cast<int32_t>(offsetof(BaseInputDeviceManager_t6A4D499FDBD693F4F9D789864B32292DB36568FB, ___activePointersToConfig_13)); }
	inline Dictionary_2_tB877F46A6C20A56DEA8ED6DC3E004A3171647E3B * get_activePointersToConfig_13() const { return ___activePointersToConfig_13; }
	inline Dictionary_2_tB877F46A6C20A56DEA8ED6DC3E004A3171647E3B ** get_address_of_activePointersToConfig_13() { return &___activePointersToConfig_13; }
	inline void set_activePointersToConfig_13(Dictionary_2_tB877F46A6C20A56DEA8ED6DC3E004A3171647E3B * value)
	{
		___activePointersToConfig_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___activePointersToConfig_13), (void*)value);
	}
};

struct BaseInputDeviceManager_t6A4D499FDBD693F4F9D789864B32292DB36568FB_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager::RequestPointersPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RequestPointersPerfMarker_12;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager::RecyclePointersPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RecyclePointersPerfMarker_14;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager::CreatePointerPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___CreatePointerPerfMarker_15;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager::CleanActivePointersPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___CleanActivePointersPerfMarker_16;

public:
	inline static int32_t get_offset_of_RequestPointersPerfMarker_12() { return static_cast<int32_t>(offsetof(BaseInputDeviceManager_t6A4D499FDBD693F4F9D789864B32292DB36568FB_StaticFields, ___RequestPointersPerfMarker_12)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RequestPointersPerfMarker_12() const { return ___RequestPointersPerfMarker_12; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RequestPointersPerfMarker_12() { return &___RequestPointersPerfMarker_12; }
	inline void set_RequestPointersPerfMarker_12(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RequestPointersPerfMarker_12 = value;
	}

	inline static int32_t get_offset_of_RecyclePointersPerfMarker_14() { return static_cast<int32_t>(offsetof(BaseInputDeviceManager_t6A4D499FDBD693F4F9D789864B32292DB36568FB_StaticFields, ___RecyclePointersPerfMarker_14)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RecyclePointersPerfMarker_14() const { return ___RecyclePointersPerfMarker_14; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RecyclePointersPerfMarker_14() { return &___RecyclePointersPerfMarker_14; }
	inline void set_RecyclePointersPerfMarker_14(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RecyclePointersPerfMarker_14 = value;
	}

	inline static int32_t get_offset_of_CreatePointerPerfMarker_15() { return static_cast<int32_t>(offsetof(BaseInputDeviceManager_t6A4D499FDBD693F4F9D789864B32292DB36568FB_StaticFields, ___CreatePointerPerfMarker_15)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_CreatePointerPerfMarker_15() const { return ___CreatePointerPerfMarker_15; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_CreatePointerPerfMarker_15() { return &___CreatePointerPerfMarker_15; }
	inline void set_CreatePointerPerfMarker_15(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___CreatePointerPerfMarker_15 = value;
	}

	inline static int32_t get_offset_of_CleanActivePointersPerfMarker_16() { return static_cast<int32_t>(offsetof(BaseInputDeviceManager_t6A4D499FDBD693F4F9D789864B32292DB36568FB_StaticFields, ___CleanActivePointersPerfMarker_16)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_CleanActivePointersPerfMarker_16() const { return ___CleanActivePointersPerfMarker_16; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_CleanActivePointersPerfMarker_16() { return &___CleanActivePointersPerfMarker_16; }
	inline void set_CleanActivePointersPerfMarker_16(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___CleanActivePointersPerfMarker_16 = value;
	}
};


// Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile
struct  BaseMixedRealityProfile_tC5DBD7146B1E1D467DE81BA1EAB45133408A59E1  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile::isCustomProfile
	bool ___isCustomProfile_4;

public:
	inline static int32_t get_offset_of_isCustomProfile_4() { return static_cast<int32_t>(offsetof(BaseMixedRealityProfile_tC5DBD7146B1E1D467DE81BA1EAB45133408A59E1, ___isCustomProfile_4)); }
	inline bool get_isCustomProfile_4() const { return ___isCustomProfile_4; }
	inline bool* get_address_of_isCustomProfile_4() { return &___isCustomProfile_4; }
	inline void set_isCustomProfile_4(bool value)
	{
		___isCustomProfile_4 = value;
	}
};


// UnityEngine.Behaviour
struct  Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// System.IO.IOException
struct  IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:
	// System.String System.IO.IOException::_maybeFullPath
	String_t* ____maybeFullPath_17;

public:
	inline static int32_t get_offset_of__maybeFullPath_17() { return static_cast<int32_t>(offsetof(IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA, ____maybeFullPath_17)); }
	inline String_t* get__maybeFullPath_17() const { return ____maybeFullPath_17; }
	inline String_t** get_address_of__maybeFullPath_17() { return &____maybeFullPath_17; }
	inline void set__maybeFullPath_17(String_t* value)
	{
		____maybeFullPath_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____maybeFullPath_17), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping
struct  MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B  : public RuntimeObject
{
public:
	// System.UInt32 Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::id
	uint32_t ___id_0;
	// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::description
	String_t* ___description_1;
	// Microsoft.MixedReality.Toolkit.Utilities.AxisType Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::axisType
	int32_t ___axisType_2;
	// Microsoft.MixedReality.Toolkit.Input.DeviceInputType Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::inputType
	int32_t ___inputType_3;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::inputAction
	MixedRealityInputAction_tF7F97EE20DEA505B55C4ACFDAE9DB4E9C27D2690  ___inputAction_4;
	// UnityEngine.KeyCode Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::keyCode
	int32_t ___keyCode_5;
	// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::axisCodeX
	String_t* ___axisCodeX_6;
	// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::axisCodeY
	String_t* ___axisCodeY_7;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::invertXAxis
	bool ___invertXAxis_8;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::invertYAxis
	bool ___invertYAxis_9;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::changed
	bool ___changed_10;
	// System.Object Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::rawData
	RuntimeObject * ___rawData_11;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::boolData
	bool ___boolData_12;
	// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::floatData
	float ___floatData_13;
	// UnityEngine.Vector2 Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::vector2Data
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___vector2Data_14;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::positionData
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positionData_15;
	// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::rotationData
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotationData_16;
	// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::poseData
	MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99  ___poseData_17;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B, ___id_0)); }
	inline uint32_t get_id_0() const { return ___id_0; }
	inline uint32_t* get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(uint32_t value)
	{
		___id_0 = value;
	}

	inline static int32_t get_offset_of_description_1() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B, ___description_1)); }
	inline String_t* get_description_1() const { return ___description_1; }
	inline String_t** get_address_of_description_1() { return &___description_1; }
	inline void set_description_1(String_t* value)
	{
		___description_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___description_1), (void*)value);
	}

	inline static int32_t get_offset_of_axisType_2() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B, ___axisType_2)); }
	inline int32_t get_axisType_2() const { return ___axisType_2; }
	inline int32_t* get_address_of_axisType_2() { return &___axisType_2; }
	inline void set_axisType_2(int32_t value)
	{
		___axisType_2 = value;
	}

	inline static int32_t get_offset_of_inputType_3() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B, ___inputType_3)); }
	inline int32_t get_inputType_3() const { return ___inputType_3; }
	inline int32_t* get_address_of_inputType_3() { return &___inputType_3; }
	inline void set_inputType_3(int32_t value)
	{
		___inputType_3 = value;
	}

	inline static int32_t get_offset_of_inputAction_4() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B, ___inputAction_4)); }
	inline MixedRealityInputAction_tF7F97EE20DEA505B55C4ACFDAE9DB4E9C27D2690  get_inputAction_4() const { return ___inputAction_4; }
	inline MixedRealityInputAction_tF7F97EE20DEA505B55C4ACFDAE9DB4E9C27D2690 * get_address_of_inputAction_4() { return &___inputAction_4; }
	inline void set_inputAction_4(MixedRealityInputAction_tF7F97EE20DEA505B55C4ACFDAE9DB4E9C27D2690  value)
	{
		___inputAction_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___inputAction_4))->___description_2), (void*)NULL);
	}

	inline static int32_t get_offset_of_keyCode_5() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B, ___keyCode_5)); }
	inline int32_t get_keyCode_5() const { return ___keyCode_5; }
	inline int32_t* get_address_of_keyCode_5() { return &___keyCode_5; }
	inline void set_keyCode_5(int32_t value)
	{
		___keyCode_5 = value;
	}

	inline static int32_t get_offset_of_axisCodeX_6() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B, ___axisCodeX_6)); }
	inline String_t* get_axisCodeX_6() const { return ___axisCodeX_6; }
	inline String_t** get_address_of_axisCodeX_6() { return &___axisCodeX_6; }
	inline void set_axisCodeX_6(String_t* value)
	{
		___axisCodeX_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___axisCodeX_6), (void*)value);
	}

	inline static int32_t get_offset_of_axisCodeY_7() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B, ___axisCodeY_7)); }
	inline String_t* get_axisCodeY_7() const { return ___axisCodeY_7; }
	inline String_t** get_address_of_axisCodeY_7() { return &___axisCodeY_7; }
	inline void set_axisCodeY_7(String_t* value)
	{
		___axisCodeY_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___axisCodeY_7), (void*)value);
	}

	inline static int32_t get_offset_of_invertXAxis_8() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B, ___invertXAxis_8)); }
	inline bool get_invertXAxis_8() const { return ___invertXAxis_8; }
	inline bool* get_address_of_invertXAxis_8() { return &___invertXAxis_8; }
	inline void set_invertXAxis_8(bool value)
	{
		___invertXAxis_8 = value;
	}

	inline static int32_t get_offset_of_invertYAxis_9() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B, ___invertYAxis_9)); }
	inline bool get_invertYAxis_9() const { return ___invertYAxis_9; }
	inline bool* get_address_of_invertYAxis_9() { return &___invertYAxis_9; }
	inline void set_invertYAxis_9(bool value)
	{
		___invertYAxis_9 = value;
	}

	inline static int32_t get_offset_of_changed_10() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B, ___changed_10)); }
	inline bool get_changed_10() const { return ___changed_10; }
	inline bool* get_address_of_changed_10() { return &___changed_10; }
	inline void set_changed_10(bool value)
	{
		___changed_10 = value;
	}

	inline static int32_t get_offset_of_rawData_11() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B, ___rawData_11)); }
	inline RuntimeObject * get_rawData_11() const { return ___rawData_11; }
	inline RuntimeObject ** get_address_of_rawData_11() { return &___rawData_11; }
	inline void set_rawData_11(RuntimeObject * value)
	{
		___rawData_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rawData_11), (void*)value);
	}

	inline static int32_t get_offset_of_boolData_12() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B, ___boolData_12)); }
	inline bool get_boolData_12() const { return ___boolData_12; }
	inline bool* get_address_of_boolData_12() { return &___boolData_12; }
	inline void set_boolData_12(bool value)
	{
		___boolData_12 = value;
	}

	inline static int32_t get_offset_of_floatData_13() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B, ___floatData_13)); }
	inline float get_floatData_13() const { return ___floatData_13; }
	inline float* get_address_of_floatData_13() { return &___floatData_13; }
	inline void set_floatData_13(float value)
	{
		___floatData_13 = value;
	}

	inline static int32_t get_offset_of_vector2Data_14() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B, ___vector2Data_14)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_vector2Data_14() const { return ___vector2Data_14; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_vector2Data_14() { return &___vector2Data_14; }
	inline void set_vector2Data_14(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___vector2Data_14 = value;
	}

	inline static int32_t get_offset_of_positionData_15() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B, ___positionData_15)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positionData_15() const { return ___positionData_15; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positionData_15() { return &___positionData_15; }
	inline void set_positionData_15(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positionData_15 = value;
	}

	inline static int32_t get_offset_of_rotationData_16() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B, ___rotationData_16)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_rotationData_16() const { return ___rotationData_16; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_rotationData_16() { return &___rotationData_16; }
	inline void set_rotationData_16(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___rotationData_16 = value;
	}

	inline static int32_t get_offset_of_poseData_17() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B, ___poseData_17)); }
	inline MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99  get_poseData_17() const { return ___poseData_17; }
	inline MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99 * get_address_of_poseData_17() { return &___poseData_17; }
	inline void set_poseData_17(MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99  value)
	{
		___poseData_17 = value;
	}
};


// System.NotSupportedException
struct  NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// UnityEngine.Transform
struct  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Camera
struct  Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};

struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreCull_4), (void*)value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreRender_5), (void*)value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPostRender_6), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Input.InputRecordingService
struct  InputRecordingService_tA847B98505BE7064D6751CD73492550FE4A2338B  : public BaseInputDeviceManager_t6A4D499FDBD693F4F9D789864B32292DB36568FB
{
public:
	// System.Action Microsoft.MixedReality.Toolkit.Input.InputRecordingService::OnRecordingStarted
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___OnRecordingStarted_18;
	// System.Action Microsoft.MixedReality.Toolkit.Input.InputRecordingService::OnRecordingStopped
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___OnRecordingStopped_19;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.InputRecordingService::<IsRecording>k__BackingField
	bool ___U3CIsRecordingU3Ek__BackingField_20;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.InputRecordingService::useBufferTimeLimit
	bool ___useBufferTimeLimit_21;
	// System.Single Microsoft.MixedReality.Toolkit.Input.InputRecordingService::recordingBufferTimeLimit
	float ___recordingBufferTimeLimit_22;
	// System.Nullable`1<System.Single> Microsoft.MixedReality.Toolkit.Input.InputRecordingService::unlimitedRecordingStartTime
	Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  ___unlimitedRecordingStartTime_23;
	// System.Single Microsoft.MixedReality.Toolkit.Input.InputRecordingService::<EndTime>k__BackingField
	float ___U3CEndTimeU3Ek__BackingField_24;
	// System.Single Microsoft.MixedReality.Toolkit.Input.InputRecordingService::frameRate
	float ___frameRate_25;
	// System.Single Microsoft.MixedReality.Toolkit.Input.InputRecordingService::frameInterval
	float ___frameInterval_26;
	// System.Single Microsoft.MixedReality.Toolkit.Input.InputRecordingService::nextFrame
	float ___nextFrame_27;
	// Microsoft.MixedReality.Toolkit.Input.InputRecordingBuffer Microsoft.MixedReality.Toolkit.Input.InputRecordingService::recordingBuffer
	InputRecordingBuffer_tA6CEDA373266AD73D32A749E89D2D87FD6635E4F * ___recordingBuffer_28;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityEyeGazeProvider Microsoft.MixedReality.Toolkit.Input.InputRecordingService::eyeGazeProvider
	RuntimeObject* ___eyeGazeProvider_29;

public:
	inline static int32_t get_offset_of_OnRecordingStarted_18() { return static_cast<int32_t>(offsetof(InputRecordingService_tA847B98505BE7064D6751CD73492550FE4A2338B, ___OnRecordingStarted_18)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_OnRecordingStarted_18() const { return ___OnRecordingStarted_18; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_OnRecordingStarted_18() { return &___OnRecordingStarted_18; }
	inline void set_OnRecordingStarted_18(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___OnRecordingStarted_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnRecordingStarted_18), (void*)value);
	}

	inline static int32_t get_offset_of_OnRecordingStopped_19() { return static_cast<int32_t>(offsetof(InputRecordingService_tA847B98505BE7064D6751CD73492550FE4A2338B, ___OnRecordingStopped_19)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_OnRecordingStopped_19() const { return ___OnRecordingStopped_19; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_OnRecordingStopped_19() { return &___OnRecordingStopped_19; }
	inline void set_OnRecordingStopped_19(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___OnRecordingStopped_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnRecordingStopped_19), (void*)value);
	}

	inline static int32_t get_offset_of_U3CIsRecordingU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(InputRecordingService_tA847B98505BE7064D6751CD73492550FE4A2338B, ___U3CIsRecordingU3Ek__BackingField_20)); }
	inline bool get_U3CIsRecordingU3Ek__BackingField_20() const { return ___U3CIsRecordingU3Ek__BackingField_20; }
	inline bool* get_address_of_U3CIsRecordingU3Ek__BackingField_20() { return &___U3CIsRecordingU3Ek__BackingField_20; }
	inline void set_U3CIsRecordingU3Ek__BackingField_20(bool value)
	{
		___U3CIsRecordingU3Ek__BackingField_20 = value;
	}

	inline static int32_t get_offset_of_useBufferTimeLimit_21() { return static_cast<int32_t>(offsetof(InputRecordingService_tA847B98505BE7064D6751CD73492550FE4A2338B, ___useBufferTimeLimit_21)); }
	inline bool get_useBufferTimeLimit_21() const { return ___useBufferTimeLimit_21; }
	inline bool* get_address_of_useBufferTimeLimit_21() { return &___useBufferTimeLimit_21; }
	inline void set_useBufferTimeLimit_21(bool value)
	{
		___useBufferTimeLimit_21 = value;
	}

	inline static int32_t get_offset_of_recordingBufferTimeLimit_22() { return static_cast<int32_t>(offsetof(InputRecordingService_tA847B98505BE7064D6751CD73492550FE4A2338B, ___recordingBufferTimeLimit_22)); }
	inline float get_recordingBufferTimeLimit_22() const { return ___recordingBufferTimeLimit_22; }
	inline float* get_address_of_recordingBufferTimeLimit_22() { return &___recordingBufferTimeLimit_22; }
	inline void set_recordingBufferTimeLimit_22(float value)
	{
		___recordingBufferTimeLimit_22 = value;
	}

	inline static int32_t get_offset_of_unlimitedRecordingStartTime_23() { return static_cast<int32_t>(offsetof(InputRecordingService_tA847B98505BE7064D6751CD73492550FE4A2338B, ___unlimitedRecordingStartTime_23)); }
	inline Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  get_unlimitedRecordingStartTime_23() const { return ___unlimitedRecordingStartTime_23; }
	inline Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A * get_address_of_unlimitedRecordingStartTime_23() { return &___unlimitedRecordingStartTime_23; }
	inline void set_unlimitedRecordingStartTime_23(Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  value)
	{
		___unlimitedRecordingStartTime_23 = value;
	}

	inline static int32_t get_offset_of_U3CEndTimeU3Ek__BackingField_24() { return static_cast<int32_t>(offsetof(InputRecordingService_tA847B98505BE7064D6751CD73492550FE4A2338B, ___U3CEndTimeU3Ek__BackingField_24)); }
	inline float get_U3CEndTimeU3Ek__BackingField_24() const { return ___U3CEndTimeU3Ek__BackingField_24; }
	inline float* get_address_of_U3CEndTimeU3Ek__BackingField_24() { return &___U3CEndTimeU3Ek__BackingField_24; }
	inline void set_U3CEndTimeU3Ek__BackingField_24(float value)
	{
		___U3CEndTimeU3Ek__BackingField_24 = value;
	}

	inline static int32_t get_offset_of_frameRate_25() { return static_cast<int32_t>(offsetof(InputRecordingService_tA847B98505BE7064D6751CD73492550FE4A2338B, ___frameRate_25)); }
	inline float get_frameRate_25() const { return ___frameRate_25; }
	inline float* get_address_of_frameRate_25() { return &___frameRate_25; }
	inline void set_frameRate_25(float value)
	{
		___frameRate_25 = value;
	}

	inline static int32_t get_offset_of_frameInterval_26() { return static_cast<int32_t>(offsetof(InputRecordingService_tA847B98505BE7064D6751CD73492550FE4A2338B, ___frameInterval_26)); }
	inline float get_frameInterval_26() const { return ___frameInterval_26; }
	inline float* get_address_of_frameInterval_26() { return &___frameInterval_26; }
	inline void set_frameInterval_26(float value)
	{
		___frameInterval_26 = value;
	}

	inline static int32_t get_offset_of_nextFrame_27() { return static_cast<int32_t>(offsetof(InputRecordingService_tA847B98505BE7064D6751CD73492550FE4A2338B, ___nextFrame_27)); }
	inline float get_nextFrame_27() const { return ___nextFrame_27; }
	inline float* get_address_of_nextFrame_27() { return &___nextFrame_27; }
	inline void set_nextFrame_27(float value)
	{
		___nextFrame_27 = value;
	}

	inline static int32_t get_offset_of_recordingBuffer_28() { return static_cast<int32_t>(offsetof(InputRecordingService_tA847B98505BE7064D6751CD73492550FE4A2338B, ___recordingBuffer_28)); }
	inline InputRecordingBuffer_tA6CEDA373266AD73D32A749E89D2D87FD6635E4F * get_recordingBuffer_28() const { return ___recordingBuffer_28; }
	inline InputRecordingBuffer_tA6CEDA373266AD73D32A749E89D2D87FD6635E4F ** get_address_of_recordingBuffer_28() { return &___recordingBuffer_28; }
	inline void set_recordingBuffer_28(InputRecordingBuffer_tA6CEDA373266AD73D32A749E89D2D87FD6635E4F * value)
	{
		___recordingBuffer_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___recordingBuffer_28), (void*)value);
	}

	inline static int32_t get_offset_of_eyeGazeProvider_29() { return static_cast<int32_t>(offsetof(InputRecordingService_tA847B98505BE7064D6751CD73492550FE4A2338B, ___eyeGazeProvider_29)); }
	inline RuntimeObject* get_eyeGazeProvider_29() const { return ___eyeGazeProvider_29; }
	inline RuntimeObject** get_address_of_eyeGazeProvider_29() { return &___eyeGazeProvider_29; }
	inline void set_eyeGazeProvider_29(RuntimeObject* value)
	{
		___eyeGazeProvider_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___eyeGazeProvider_29), (void*)value);
	}
};

struct InputRecordingService_tA847B98505BE7064D6751CD73492550FE4A2338B_StaticFields
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.InputRecordingService::jointCount
	int32_t ___jointCount_17;

public:
	inline static int32_t get_offset_of_jointCount_17() { return static_cast<int32_t>(offsetof(InputRecordingService_tA847B98505BE7064D6751CD73492550FE4A2338B_StaticFields, ___jointCount_17)); }
	inline int32_t get_jointCount_17() const { return ___jointCount_17; }
	inline int32_t* get_address_of_jointCount_17() { return &___jointCount_17; }
	inline void set_jointCount_17(int32_t value)
	{
		___jointCount_17 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputRecordingProfile
struct  MixedRealityInputRecordingProfile_t56C7B027300F96474C48A61DF0A7EFAA8E41EA91  : public BaseMixedRealityProfile_tC5DBD7146B1E1D467DE81BA1EAB45133408A59E1
{
public:
	// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInputRecordingProfile::frameRate
	float ___frameRate_5;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInputRecordingProfile::recordHandData
	bool ___recordHandData_6;
	// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInputRecordingProfile::jointPositionThreshold
	float ___jointPositionThreshold_7;
	// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInputRecordingProfile::jointRotationThreshold
	float ___jointRotationThreshold_8;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInputRecordingProfile::recordCameraPose
	bool ___recordCameraPose_9;
	// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInputRecordingProfile::cameraPositionThreshold
	float ___cameraPositionThreshold_10;
	// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInputRecordingProfile::cameraRotationThreshold
	float ___cameraRotationThreshold_11;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInputRecordingProfile::recordEyeGaze
	bool ___recordEyeGaze_12;
	// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInputRecordingProfile::eyeGazeOriginThreshold
	float ___eyeGazeOriginThreshold_13;
	// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInputRecordingProfile::eyeGazeDirectionThreshold
	float ___eyeGazeDirectionThreshold_14;
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.MixedRealityInputRecordingProfile::partitionSize
	int32_t ___partitionSize_15;

public:
	inline static int32_t get_offset_of_frameRate_5() { return static_cast<int32_t>(offsetof(MixedRealityInputRecordingProfile_t56C7B027300F96474C48A61DF0A7EFAA8E41EA91, ___frameRate_5)); }
	inline float get_frameRate_5() const { return ___frameRate_5; }
	inline float* get_address_of_frameRate_5() { return &___frameRate_5; }
	inline void set_frameRate_5(float value)
	{
		___frameRate_5 = value;
	}

	inline static int32_t get_offset_of_recordHandData_6() { return static_cast<int32_t>(offsetof(MixedRealityInputRecordingProfile_t56C7B027300F96474C48A61DF0A7EFAA8E41EA91, ___recordHandData_6)); }
	inline bool get_recordHandData_6() const { return ___recordHandData_6; }
	inline bool* get_address_of_recordHandData_6() { return &___recordHandData_6; }
	inline void set_recordHandData_6(bool value)
	{
		___recordHandData_6 = value;
	}

	inline static int32_t get_offset_of_jointPositionThreshold_7() { return static_cast<int32_t>(offsetof(MixedRealityInputRecordingProfile_t56C7B027300F96474C48A61DF0A7EFAA8E41EA91, ___jointPositionThreshold_7)); }
	inline float get_jointPositionThreshold_7() const { return ___jointPositionThreshold_7; }
	inline float* get_address_of_jointPositionThreshold_7() { return &___jointPositionThreshold_7; }
	inline void set_jointPositionThreshold_7(float value)
	{
		___jointPositionThreshold_7 = value;
	}

	inline static int32_t get_offset_of_jointRotationThreshold_8() { return static_cast<int32_t>(offsetof(MixedRealityInputRecordingProfile_t56C7B027300F96474C48A61DF0A7EFAA8E41EA91, ___jointRotationThreshold_8)); }
	inline float get_jointRotationThreshold_8() const { return ___jointRotationThreshold_8; }
	inline float* get_address_of_jointRotationThreshold_8() { return &___jointRotationThreshold_8; }
	inline void set_jointRotationThreshold_8(float value)
	{
		___jointRotationThreshold_8 = value;
	}

	inline static int32_t get_offset_of_recordCameraPose_9() { return static_cast<int32_t>(offsetof(MixedRealityInputRecordingProfile_t56C7B027300F96474C48A61DF0A7EFAA8E41EA91, ___recordCameraPose_9)); }
	inline bool get_recordCameraPose_9() const { return ___recordCameraPose_9; }
	inline bool* get_address_of_recordCameraPose_9() { return &___recordCameraPose_9; }
	inline void set_recordCameraPose_9(bool value)
	{
		___recordCameraPose_9 = value;
	}

	inline static int32_t get_offset_of_cameraPositionThreshold_10() { return static_cast<int32_t>(offsetof(MixedRealityInputRecordingProfile_t56C7B027300F96474C48A61DF0A7EFAA8E41EA91, ___cameraPositionThreshold_10)); }
	inline float get_cameraPositionThreshold_10() const { return ___cameraPositionThreshold_10; }
	inline float* get_address_of_cameraPositionThreshold_10() { return &___cameraPositionThreshold_10; }
	inline void set_cameraPositionThreshold_10(float value)
	{
		___cameraPositionThreshold_10 = value;
	}

	inline static int32_t get_offset_of_cameraRotationThreshold_11() { return static_cast<int32_t>(offsetof(MixedRealityInputRecordingProfile_t56C7B027300F96474C48A61DF0A7EFAA8E41EA91, ___cameraRotationThreshold_11)); }
	inline float get_cameraRotationThreshold_11() const { return ___cameraRotationThreshold_11; }
	inline float* get_address_of_cameraRotationThreshold_11() { return &___cameraRotationThreshold_11; }
	inline void set_cameraRotationThreshold_11(float value)
	{
		___cameraRotationThreshold_11 = value;
	}

	inline static int32_t get_offset_of_recordEyeGaze_12() { return static_cast<int32_t>(offsetof(MixedRealityInputRecordingProfile_t56C7B027300F96474C48A61DF0A7EFAA8E41EA91, ___recordEyeGaze_12)); }
	inline bool get_recordEyeGaze_12() const { return ___recordEyeGaze_12; }
	inline bool* get_address_of_recordEyeGaze_12() { return &___recordEyeGaze_12; }
	inline void set_recordEyeGaze_12(bool value)
	{
		___recordEyeGaze_12 = value;
	}

	inline static int32_t get_offset_of_eyeGazeOriginThreshold_13() { return static_cast<int32_t>(offsetof(MixedRealityInputRecordingProfile_t56C7B027300F96474C48A61DF0A7EFAA8E41EA91, ___eyeGazeOriginThreshold_13)); }
	inline float get_eyeGazeOriginThreshold_13() const { return ___eyeGazeOriginThreshold_13; }
	inline float* get_address_of_eyeGazeOriginThreshold_13() { return &___eyeGazeOriginThreshold_13; }
	inline void set_eyeGazeOriginThreshold_13(float value)
	{
		___eyeGazeOriginThreshold_13 = value;
	}

	inline static int32_t get_offset_of_eyeGazeDirectionThreshold_14() { return static_cast<int32_t>(offsetof(MixedRealityInputRecordingProfile_t56C7B027300F96474C48A61DF0A7EFAA8E41EA91, ___eyeGazeDirectionThreshold_14)); }
	inline float get_eyeGazeDirectionThreshold_14() const { return ___eyeGazeDirectionThreshold_14; }
	inline float* get_address_of_eyeGazeDirectionThreshold_14() { return &___eyeGazeDirectionThreshold_14; }
	inline void set_eyeGazeDirectionThreshold_14(float value)
	{
		___eyeGazeDirectionThreshold_14 = value;
	}

	inline static int32_t get_offset_of_partitionSize_15() { return static_cast<int32_t>(offsetof(MixedRealityInputRecordingProfile_t56C7B027300F96474C48A61DF0A7EFAA8E41EA91, ___partitionSize_15)); }
	inline int32_t get_partitionSize_15() const { return ___partitionSize_15; }
	inline int32_t* get_address_of_partitionSize_15() { return &___partitionSize_15; }
	inline void set_partitionSize_15(int32_t value)
	{
		___partitionSize_15 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint[]
struct TrackedHandJointU5BU5D_tFA1152B947AB07ACF1DFE43B4A96139E3340B76F  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Keyframe[]
struct KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  m_Items[1];

public:
	inline Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  value)
	{
		m_Items[index] = value;
	}
};
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
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
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[]
struct MixedRealityInteractionMappingU5BU5D_tCD44540A965834E27292C207E9BB647B895CB2E7  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B * m_Items[1];

public:
	inline MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mF42565DC9AD476065ED33869AD6DC710F775F641_gshared (Dictionary_2_t7E8D40B461AB586AEA5DD75D8354C4913EEB1337 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Object>::TryGetValue(!0,!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m527DF4A24FFE4FC2C2B470A538DDA56010F72885_gshared (Dictionary_2_t7E8D40B461AB586AEA5DD75D8354C4913EEB1337 * __this, int32_t ___key0, RuntimeObject ** ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Object>::Add(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mEA7DC2B06A480A5EC7DE49B6E83C2D121D1962EF_gshared (Dictionary_2_t7E8D40B461AB586AEA5DD75D8354C4913EEB1337 * __this, int32_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<!0> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020  AsyncTaskMethodBuilder_1_Create_m9A01E4B2FB83D8B9A71740D85F771F9A2E0DBAC9_gshared (const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::Start<Microsoft.MixedReality.Toolkit.Input.InputAnimation/<FromStreamAsync>d__50>(!!0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_Start_TisU3CFromStreamAsyncU3Ed__50_t0BAABAB4A343E3F573925043CD5CA6AE4597B105_mC49FC4534A15AEAC708FBB6756A56097EBD0CE84_gshared (AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020 * __this, U3CFromStreamAsyncU3Ed__50_t0BAABAB4A343E3F573925043CD5CA6AE4597B105 * ___stateMachine0, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<!0> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::get_Task()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * AsyncTaskMethodBuilder_1_get_Task_m61DEC300353320E428E17DA0D59D61974F4415BB_gshared (AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020 * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/ValueCollection<!0,!1> System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Object>::get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t5373BD128F5AE1EA1689DBC1D1B58C837368E16A * Dictionary_2_get_Values_mCE8DFA32761CC8C69390885B07388FB6B221F055_gshared (Dictionary_2_t7E8D40B461AB586AEA5DD75D8354C4913EEB1337 * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32Enum,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tEA3EEAFB01FCAEC65CD249CE8B28073BA94302C2  ValueCollection_GetEnumerator_m2856AA67C8638FAC317916DD7BB02DE1F4DF2FEA_gshared (ValueCollection_t5373BD128F5AE1EA1689DBC1D1B58C837368E16A * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32Enum,System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m6C2AF5B57480AE0440F937EF9A50D3803ED850EE_gshared_inline (Enumerator_tEA3EEAFB01FCAEC65CD249CE8B28073BA94302C2 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32Enum,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m591CCA2E5BC073733DB11EDEBC6523FF1188D830_gshared (Enumerator_tEA3EEAFB01FCAEC65CD249CE8B28073BA94302C2 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32Enum,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD80EB4F34363556C0DB46455E0B72B89018A4F3C_gshared (Enumerator_tEA3EEAFB01FCAEC65CD249CE8B28073BA94302C2 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32Enum,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>::TryGetValue(!0,!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m8B6D2B3B16F427C0629E5656A3402F1568B990B4_gshared (Dictionary_2_tAFEDE3C9AA32099A79643638296C906CB91D1ED1 * __this, int32_t ___key0, MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99 * ___value1, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::set_Capacity(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Capacity_m7A81900F3492DE11874B0EA9A0E5454F897E3079_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// !0 System.Collections.Generic.Queue`1<System.Object>::Peek()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Queue_1_Peek_mBD3667C0471C6A09AE4D691DD023A9A82D522A83_gshared (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m065613451660A1479E4D6D00878FB7630AFE4E11_gshared (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Clear_m123D9273AFF968BD5C248D721870170B26FBEF6C_gshared (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.Queue`1<System.Object>::Dequeue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Queue_1_Dequeue_mE9A2A69E86A7EDA9FBCEA675542F01A6D8677A14_gshared (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Queue`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_mD618588C9785F06D043BE6AAD0A0B8116B2A77A3_gshared_inline (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>::Add(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m5F64B92A5D9DD2180721ECEADD47812C4AB5F372_gshared (Dictionary_2_tAFEDE3C9AA32099A79643638296C906CB91D1ED1 * __this, int32_t ___key0, MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99  ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<System.Object>::Enqueue(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_mCACF312F04BD04D69E3FBA7D779B5DBF39BB3728_gshared (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Collections.Generic.Queue`1/Enumerator<!0> System.Collections.Generic.Queue`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t7AA6AE94A0D53334AA15EFC74FE63FF525189B8C  Queue_1_GetEnumerator_m93F41D0CCCF0AB82FC589F8E2B9AB6670C8D843F_gshared (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * __this, const RuntimeMethod* method);
// System.Void System.Nullable`1<System.Single>::.ctor(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m32EB6B5DB3EA9B62B49C29C367AFAD991AC2A53A_gshared (Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A * __this, float ___value0, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<System.Single>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m7897F8E6F5E7968B14AEE7B3B5719B6B3CE4292C_gshared_inline (Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A * __this, const RuntimeMethod* method);
// !0 System.Nullable`1<System.Single>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Nullable_1_get_Value_mBC700ACC6A8110AF4C3911F6866195856CADA20F_gshared (Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A * __this, const RuntimeMethod* method);
// System.Void System.Nullable`1<System.Int32>::.ctor(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m9D7EBA0DE2F89A891507EC35157C70FC4DC81184_gshared (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * __this, int32_t ___value0, const RuntimeMethod* method);
// !0 System.Nullable`1<System.Int32>::GetValueOrDefault()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Nullable_1_GetValueOrDefault_mB4CE6E77EC85DD762FDA6C24F96EBC2A75E28546_gshared_inline (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * __this, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<System.Int32>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_gshared_inline (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * __this, const RuntimeMethod* method);
// System.Void System.Func`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_m2A4FE889FB540EA198F7757D17DC2290461E5EE9_gshared (Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<!!0> System.Threading.Tasks.Task::Run<System.Object>(System.Func`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * Task_Run_TisRuntimeObject_mAEE714420C7F5AAD768588A76399EB67779E8729_gshared (Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 * ___function0, const RuntimeMethod* method);
// System.Runtime.CompilerServices.TaskAwaiter`1<!0> System.Threading.Tasks.Task`1<System.Object>::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE  Task_1_GetAwaiter_m4F5B9EF55874E9959CE12E71ADEAC798960F0FE3_gshared (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * __this, const RuntimeMethod* method);
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_1_get_IsCompleted_mEC81351691C5A577A64F3B728036AD979AB3AF94_gshared (TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>,Microsoft.MixedReality.Toolkit.Input.InputAnimation/<FromStreamAsync>d__50>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE_TisU3CFromStreamAsyncU3Ed__50_t0BAABAB4A343E3F573925043CD5CA6AE4597B105_mBEA229577A07E0B637C1388F5B1500C3DF2BEDEF_gshared (AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020 * __this, TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE * ___awaiter0, U3CFromStreamAsyncU3Ed__50_t0BAABAB4A343E3F573925043CD5CA6AE4597B105 * ___stateMachine1, const RuntimeMethod* method);
// !0 System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * TaskAwaiter_1_GetResult_m7703A30E4F4EA17FBA4243DE1BF9412521B2AFDA_gshared (TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetException_m29521EB618E38AF72FF0C4094070C1489F4129B3_gshared (AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020 * __this, Exception_t * ___exception0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetResult(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_m3E4AB12877D4FE377F26708CF6899C49360007FA_gshared (AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020 * __this, RuntimeObject * ___result0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetStateMachine_m736C84D61B4AB2FCD150BD3945C6874471A9224D_gshared (AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m53DA92C371D548DD44E17EAA1EB21BE0CE8B4ED4_gshared (Dictionary_2_tAFEDE3C9AA32099A79643638296C906CB91D1ED1 * __this, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AnimationCurve::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationCurve__ctor_m68D6F819242C539EC522FEAFFEB6F1579767043E (AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Input.InputAnimation/PoseCurves>::.ctor()
inline void Dictionary_2__ctor_m6402146F3FF0E69515A75BAC03F56D27ECABE563 (Dictionary_2_tF3976454D4ACA03F9E231469CB7AA87B3D4745B0 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tF3976454D4ACA03F9E231469CB7AA87B3D4745B0 *, const RuntimeMethod*))Dictionary_2__ctor_mF42565DC9AD476065ED33869AD6DC710F775F641_gshared)(__this, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation/PoseCurves::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PoseCurves__ctor_mAB903C4BE542C0D296D2BD8ED4316E7C56718BE4 (PoseCurves_t14269C65E2E6B6A532EF4AC78324976DF2587501 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation/RayCurves::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RayCurves__ctor_m6B5E5B505F7A60B975EC6BE76D36E7145230B958 (RayCurves_tE200BC10F2980B31D68E54E46BB6EB32508F5604 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Input.InputAnimationMarker>::.ctor()
inline void List_1__ctor_m5347526F2143EC38B80D32DED1B6DB92D805C670 (List_1_tAAD05033EDA4EAF37AE770A3EDAB1B555706FEFD * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tAAD05033EDA4EAF37AE770A3EDAB1B555706FEFD *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void System.IO.BinaryWriter::.ctor(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinaryWriter__ctor_mC6F89939E04734FBEEA375D7E0FF9C042E4AB71A (BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F * __this, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___output0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimationSerializationUtils::WriteHeader(System.IO.BinaryWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAnimationSerializationUtils_WriteHeader_mBD9FFA16D2E0EE3CD72C9FDE89619DC6F5A4FBC6 (BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F * ___writer0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Input.InputAnimation::get_HasCameraPose()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool InputAnimation_get_HasCameraPose_m3A7978ABCB573725268205D06F9F524A2CD72D9A_inline (InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534 * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Input.InputAnimation::get_HasHandData()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool InputAnimation_get_HasHandData_mE585DBE196E292F83610C5810E569A172143D373_inline (InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534 * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Input.InputAnimation::get_HasEyeGaze()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool InputAnimation_get_HasEyeGaze_mF0D54413FEBDD201EA28ACCA9ADC438124EF0A3F_inline (InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation::PoseCurvesToStream(System.IO.BinaryWriter,Microsoft.MixedReality.Toolkit.Input.InputAnimation/PoseCurves,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAnimation_PoseCurvesToStream_m23BA1432A8694B1119FAE05655EA460B2D0F1CE5 (BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F * ___writer0, PoseCurves_t14269C65E2E6B6A532EF4AC78324976DF2587501 * ___curves1, float ___startTime2, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimationSerializationUtils::WriteBoolCurve(System.IO.BinaryWriter,UnityEngine.AnimationCurve,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAnimationSerializationUtils_WriteBoolCurve_m15A0CF2FCE96FB6CB6BB2DD265A0C9B8BB9726F7 (BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F * ___writer0, AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___curve1, float ___startTime2, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Input.InputAnimation/PoseCurves>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_mA86A48F1F8E01B36CF0D80C36B3C67755D6D00BE (Dictionary_2_tF3976454D4ACA03F9E231469CB7AA87B3D4745B0 * __this, int32_t ___key0, PoseCurves_t14269C65E2E6B6A532EF4AC78324976DF2587501 ** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tF3976454D4ACA03F9E231469CB7AA87B3D4745B0 *, int32_t, PoseCurves_t14269C65E2E6B6A532EF4AC78324976DF2587501 **, const RuntimeMethod*))Dictionary_2_TryGetValue_m527DF4A24FFE4FC2C2B470A538DDA56010F72885_gshared)(__this, ___key0, ___value1, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation::RayCurvesToStream(System.IO.BinaryWriter,Microsoft.MixedReality.Toolkit.Input.InputAnimation/RayCurves,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAnimation_RayCurvesToStream_m06D79D4D4A46DE51A1B1A1B66901FA2935648D71 (BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F * ___writer0, RayCurves_tE200BC10F2980B31D68E54E46BB6EB32508F5604 * ___curves1, float ___startTime2, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimationSerializationUtils::WriteMarkerList(System.IO.BinaryWriter,System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Input.InputAnimationMarker>,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAnimationSerializationUtils_WriteMarkerList_m89DD412E5D301D7EE4194A217BE5FEA2E40C733F (BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F * ___writer0, List_1_tAAD05033EDA4EAF37AE770A3EDAB1B555706FEFD * ___markers1, float ___startTime2, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation::EvaluateHandState(System.Single,UnityEngine.AnimationCurve,UnityEngine.AnimationCurve,System.Boolean&,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAnimation_EvaluateHandState_m9711883F0BD5E8B0D8EA711F083534B6D866AC12 (InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534 * __this, float ___time0, AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___trackedCurve1, AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___pinchCurve2, bool* ___isTracked3, bool* ___isPinching4, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::get_ZeroIdentity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99  MixedRealityPose_get_ZeroIdentity_m95D9F3844DD9A90DAEC2046FE9152D721CCF19D2_inline (const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.Input.InputAnimation/PoseCurves::Evaluate(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99  PoseCurves_Evaluate_mA254F9EE38B047676F47A248C4EDB17626E7CE2D (PoseCurves_t14269C65E2E6B6A532EF4AC78324976DF2587501 * __this, float ___time0, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.Input.InputAnimation::EvaluateHandJoint(System.Single,Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Input.InputAnimation/PoseCurves>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99  InputAnimation_EvaluateHandJoint_mF41C24128DA9E920492A1CCBE1117740146DBF19 (InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534 * __this, float ___time0, int32_t ___joint1, Dictionary_2_tF3976454D4ACA03F9E231469CB7AA87B3D4745B0 * ___jointCurves2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_forward_m3082920F8A24AA02E4F542B6771EB0B63A91AC90 (const RuntimeMethod* method);
// System.Void UnityEngine.Ray::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ray__ctor_m75B1F651FF47EE6B887105101B7DA61CBF41F83C (Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___origin0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___direction1, const RuntimeMethod* method);
// UnityEngine.Ray Microsoft.MixedReality.Toolkit.Input.InputAnimation/RayCurves::Evaluate(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  RayCurves_Evaluate_m21DD656F2ECD2B16C12769F1E2B98AD4B24D8BFF (RayCurves_tE200BC10F2980B31D68E54E46BB6EB32508F5604 * __this, float ___time0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAnimation__ctor_m28B0D9BF6E035B158B8E1A48A33862B7DDE1123D (InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534 * __this, const RuntimeMethod* method);
// System.Single Microsoft.MixedReality.Toolkit.Input.InputRecordingBuffer::get_StartTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float InputRecordingBuffer_get_StartTime_m3352753447E86DC9C0C9FBF5D668781AEC63FA78 (InputRecordingBuffer_tA6CEDA373266AD73D32A749E89D2D87FD6635E4F * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInputRecordingProfile::get_RecordHandData()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool MixedRealityInputRecordingProfile_get_RecordHandData_mFD612DB88512A750FF0D12D05DA06E423EB1E384_inline (MixedRealityInputRecordingProfile_t56C7B027300F96474C48A61DF0A7EFAA8E41EA91 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation::set_HasHandData(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void InputAnimation_set_HasHandData_m6D908DF23EF21B692A3FB1C9E41C8F157B1B844E_inline (InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534 * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInputRecordingProfile::get_RecordCameraPose()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool MixedRealityInputRecordingProfile_get_RecordCameraPose_m7BA79D3B22E44E686AA955C56072F7A6716FED72_inline (MixedRealityInputRecordingProfile_t56C7B027300F96474C48A61DF0A7EFAA8E41EA91 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation::set_HasCameraPose(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void InputAnimation_set_HasCameraPose_mCF43237A57330A40150937CD555F8F46A2FABEB1_inline (InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534 * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInputRecordingProfile::get_RecordEyeGaze()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool MixedRealityInputRecordingProfile_get_RecordEyeGaze_m9DA2CB6AF1179E5AA1A466E15292817DF3F61B54_inline (MixedRealityInputRecordingProfile_t56C7B027300F96474C48A61DF0A7EFAA8E41EA91 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation::set_HasEyeGaze(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void InputAnimation_set_HasEyeGaze_m1AA6396ADD8FDA4A8564A76F26E2274BBC650F8D_inline (InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534 * __this, bool ___value0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<Microsoft.MixedReality.Toolkit.Input.InputRecordingBuffer/Keyframe> Microsoft.MixedReality.Toolkit.Input.InputRecordingBuffer::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InputRecordingBuffer_GetEnumerator_m2AB791EA1C66FA0DB04242DA0D062B53A520472E (InputRecordingBuffer_tA6CEDA373266AD73D32A749E89D2D87FD6635E4F * __this, const RuntimeMethod* method);
// System.Single Microsoft.MixedReality.Toolkit.Input.InputRecordingBuffer/Keyframe::get_Time()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Keyframe_get_Time_mA05D121FA2658A8A2C65307A5FE7F95518D4DDDA_inline (Keyframe_tB3167A15EF7CB57AA5C8498D640C6254A16F5B3F * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Input.InputRecordingBuffer/Keyframe::get_LeftTracked()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Keyframe_get_LeftTracked_m06A036923EED4E646B10D9EF8295828572A9F04B_inline (Keyframe_tB3167A15EF7CB57AA5C8498D640C6254A16F5B3F * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation::<FromRecordingBuffer>g__AddBoolKeyIfChanged|48_0(UnityEngine.AnimationCurve,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAnimation_U3CFromRecordingBufferU3Eg__AddBoolKeyIfChangedU7C48_0_m6DD6E7FDFB23A7DCBC45DE3510A1AE9390D5765E (AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___curve0, float ___time1, bool ___value2, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Input.InputRecordingBuffer/Keyframe::get_RightTracked()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Keyframe_get_RightTracked_mA19B3CB09A5A298D8984AF70938194E77B57F4BC_inline (Keyframe_tB3167A15EF7CB57AA5C8498D640C6254A16F5B3F * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Input.InputRecordingBuffer/Keyframe::get_LeftPinch()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Keyframe_get_LeftPinch_m435C11D6968B044F42A375EE28AF3020AD9091DE_inline (Keyframe_tB3167A15EF7CB57AA5C8498D640C6254A16F5B3F * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Input.InputRecordingBuffer/Keyframe::get_RightPinch()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Keyframe_get_RightPinch_mF6869CC9BC0751EFE2B3B527318ACD483E997386_inline (Keyframe_tB3167A15EF7CB57AA5C8498D640C6254A16F5B3F * __this, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// System.Array System.Enum::GetValues(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeArray * Enum_GetValues_m8EEC6B32F297FDB2F7375DC8B197E0E1AB8643BD (Type_t * ___enumType0, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose> Microsoft.MixedReality.Toolkit.Input.InputRecordingBuffer/Keyframe::get_LeftJoints()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Dictionary_2_tABC45B7C67E921F533EBEF222CFE2B891AA1E098 * Keyframe_get_LeftJoints_m82B2A30643E9897737F81EF37C7601C4C6018816_inline (Keyframe_tB3167A15EF7CB57AA5C8498D640C6254A16F5B3F * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation::<FromRecordingBuffer>g__AddJointPoseKeys|48_1(System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Input.InputAnimation/PoseCurves>,System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>,Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAnimation_U3CFromRecordingBufferU3Eg__AddJointPoseKeysU7C48_1_m958AFA63F52583CAF3271470A52628DAB93F494A (Dictionary_2_tF3976454D4ACA03F9E231469CB7AA87B3D4745B0 * ___jointCurves0, Dictionary_2_tABC45B7C67E921F533EBEF222CFE2B891AA1E098 * ___poses1, int32_t ___joint2, float ___time3, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose> Microsoft.MixedReality.Toolkit.Input.InputRecordingBuffer/Keyframe::get_RightJoints()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Dictionary_2_tABC45B7C67E921F533EBEF222CFE2B891AA1E098 * Keyframe_get_RightJoints_mDBD54F5919D9FFE32E616059DA0198099C686006_inline (Keyframe_tB3167A15EF7CB57AA5C8498D640C6254A16F5B3F * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.Input.InputRecordingBuffer/Keyframe::get_CameraPose()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99  Keyframe_get_CameraPose_mF080ABD993EE172F211C241D25B110A85EF9FD41_inline (Keyframe_tB3167A15EF7CB57AA5C8498D640C6254A16F5B3F * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation/PoseCurves::AddKey(System.Single,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PoseCurves_AddKey_mCDBC851FE2A5B7616E44760E106B1FA334919A23 (PoseCurves_t14269C65E2E6B6A532EF4AC78324976DF2587501 * __this, float ___time0, MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99  ___pose1, const RuntimeMethod* method);
// UnityEngine.Ray Microsoft.MixedReality.Toolkit.Input.InputRecordingBuffer/Keyframe::get_GazeRay()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  Keyframe_get_GazeRay_m655743341B0DB5FD8AC0337E45D5A47698FEE0EA_inline (Keyframe_tB3167A15EF7CB57AA5C8498D640C6254A16F5B3F * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation/RayCurves::AddKey(System.Single,UnityEngine.Ray)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RayCurves_AddKey_mAFB13BC4355C99BBA18D4AAD1AB29F1D68B14A4C (RayCurves_tE200BC10F2980B31D68E54E46BB6EB32508F5604 * __this, float ___time0, Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  ___ray1, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation::Optimize(Microsoft.MixedReality.Toolkit.Input.MixedRealityInputRecordingProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAnimation_Optimize_mB952F656C1FDD57F4231434FD3144CD6DA899EA8 (InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534 * __this, MixedRealityInputRecordingProfile_t56C7B027300F96474C48A61DF0A7EFAA8E41EA91 * ___profile0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation::ComputeDuration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAnimation_ComputeDuration_m263C0BC7A120F0DB400694C98E53511C4F46162B (InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534 * __this, const RuntimeMethod* method);
// System.Void System.IO.BinaryReader::.ctor(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinaryReader__ctor_m8D2F966D44EF5BD30D54D94653A831EFDB9C6A60 (BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128 * __this, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___input0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimationSerializationUtils::ReadHeader(System.IO.BinaryReader,System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAnimationSerializationUtils_ReadHeader_mD6A04D247F935A880FBFC506C3F3496E054AF66E (BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128 * ___reader0, int32_t* ___fileVersionMajor1, int32_t* ___fileVersionMinor2, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66 (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation::PoseCurvesFromStream(System.IO.BinaryReader,Microsoft.MixedReality.Toolkit.Input.InputAnimation/PoseCurves,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAnimation_PoseCurvesFromStream_m9A4B6484E477E7437330F0E77192E74AB25BE9F2 (BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128 * ___reader0, PoseCurves_t14269C65E2E6B6A532EF4AC78324976DF2587501 * ___curves1, bool ___readSimple2, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimationSerializationUtils::ReadBoolCurve(System.IO.BinaryReader,UnityEngine.AnimationCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAnimationSerializationUtils_ReadBoolCurve_m085FFC6E15B09C8E7648FF91356151F7FA006240 (BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128 * ___reader0, AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___curve1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Input.InputAnimation/PoseCurves>::Add(!0,!1)
inline void Dictionary_2_Add_mBABE943B5031B118F97BF59E84A11816B6039FB1 (Dictionary_2_tF3976454D4ACA03F9E231469CB7AA87B3D4745B0 * __this, int32_t ___key0, PoseCurves_t14269C65E2E6B6A532EF4AC78324976DF2587501 * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tF3976454D4ACA03F9E231469CB7AA87B3D4745B0 *, int32_t, PoseCurves_t14269C65E2E6B6A532EF4AC78324976DF2587501 *, const RuntimeMethod*))Dictionary_2_Add_mEA7DC2B06A480A5EC7DE49B6E83C2D121D1962EF_gshared)(__this, ___key0, ___value1, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation::RayCurvesFromStream(System.IO.BinaryReader,Microsoft.MixedReality.Toolkit.Input.InputAnimation/RayCurves,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAnimation_RayCurvesFromStream_m4D60874833E1E5B4C12F087B9668F4DD4DD85FE0 (BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128 * ___reader0, RayCurves_tE200BC10F2980B31D68E54E46BB6EB32508F5604 * ___curves1, bool ___readSimple2, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimationSerializationUtils::ReadMarkerList(System.IO.BinaryReader,System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Input.InputAnimationMarker>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAnimationSerializationUtils_ReadMarkerList_m30B0FE2E589012E1705B773388E6DAFE6D7E852C (BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128 * ___reader0, List_1_tAAD05033EDA4EAF37AE770A3EDAB1B555706FEFD * ___markers1, const RuntimeMethod* method);
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<!0> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Microsoft.MixedReality.Toolkit.Input.InputAnimation>::Create()
inline AsyncTaskMethodBuilder_1_tF3202EB14A45BB67CE82B3124E365B8DEFF9BF80  AsyncTaskMethodBuilder_1_Create_m0922E4F71FBE68393EFE1CB2DF6B0CC1E8750311 (const RuntimeMethod* method)
{
	return ((  AsyncTaskMethodBuilder_1_tF3202EB14A45BB67CE82B3124E365B8DEFF9BF80  (*) (const RuntimeMethod*))AsyncTaskMethodBuilder_1_Create_m9A01E4B2FB83D8B9A71740D85F771F9A2E0DBAC9_gshared)(method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Microsoft.MixedReality.Toolkit.Input.InputAnimation>::Start<Microsoft.MixedReality.Toolkit.Input.InputAnimation/<FromStreamAsync>d__50>(!!0&)
inline void AsyncTaskMethodBuilder_1_Start_TisU3CFromStreamAsyncU3Ed__50_t0BAABAB4A343E3F573925043CD5CA6AE4597B105_m930F216CA1D8F5030881615AC47D2A6200A0339D (AsyncTaskMethodBuilder_1_tF3202EB14A45BB67CE82B3124E365B8DEFF9BF80 * __this, U3CFromStreamAsyncU3Ed__50_t0BAABAB4A343E3F573925043CD5CA6AE4597B105 * ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tF3202EB14A45BB67CE82B3124E365B8DEFF9BF80 *, U3CFromStreamAsyncU3Ed__50_t0BAABAB4A343E3F573925043CD5CA6AE4597B105 *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_Start_TisU3CFromStreamAsyncU3Ed__50_t0BAABAB4A343E3F573925043CD5CA6AE4597B105_mC49FC4534A15AEAC708FBB6756A56097EBD0CE84_gshared)(__this, ___stateMachine0, method);
}
// System.Threading.Tasks.Task`1<!0> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Microsoft.MixedReality.Toolkit.Input.InputAnimation>::get_Task()
inline Task_1_tB231B84F8F2E5D004D7EE56C7AC413E80914BC74 * AsyncTaskMethodBuilder_1_get_Task_m8EE8D2BE14C6B9E58020C428066962B1CBC1D617 (AsyncTaskMethodBuilder_1_tF3202EB14A45BB67CE82B3124E365B8DEFF9BF80 * __this, const RuntimeMethod* method)
{
	return ((  Task_1_tB231B84F8F2E5D004D7EE56C7AC413E80914BC74 * (*) (AsyncTaskMethodBuilder_1_tF3202EB14A45BB67CE82B3124E365B8DEFF9BF80 *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_get_Task_m61DEC300353320E428E17DA0D59D61974F4415BB_gshared)(__this, method);
}
// System.Collections.Generic.IEnumerable`1<UnityEngine.AnimationCurve> Microsoft.MixedReality.Toolkit.Input.InputAnimation::GetAllAnimationCurves()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InputAnimation_GetAllAnimationCurves_mBEF016686BD32CB4566977954B7BEDDD7B7F23AA (InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.AnimationCurve::get_length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AnimationCurve_get_length_mB3D0734222EE55DB1389BCB98CCB1324AF8AA4E0 (AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * __this, const RuntimeMethod* method);
// UnityEngine.Keyframe[] UnityEngine.AnimationCurve::get_keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* AnimationCurve_get_keys_m64FA75C0B1F7BCDE123EFB903962B2BD9DD5F321 (AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Keyframe::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Keyframe_get_time_m75EBFDECA329315F6D41A60C0B1291F5BA4039E8 (Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775 (float ___a0, float ___b1, const RuntimeMethod* method);
// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInputRecordingProfile::get_CameraPositionThreshold()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float MixedRealityInputRecordingProfile_get_CameraPositionThreshold_m8240A9C1827186F6D194747E3D77D9C24C7BC41E_inline (MixedRealityInputRecordingProfile_t56C7B027300F96474C48A61DF0A7EFAA8E41EA91 * __this, const RuntimeMethod* method);
// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInputRecordingProfile::get_CameraRotationThreshold()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float MixedRealityInputRecordingProfile_get_CameraRotationThreshold_mE91B9970882A9B83EB05E637C36A1D3F1361F6A9_inline (MixedRealityInputRecordingProfile_t56C7B027300F96474C48A61DF0A7EFAA8E41EA91 * __this, const RuntimeMethod* method);
// System.Int32 Microsoft.MixedReality.Toolkit.Input.MixedRealityInputRecordingProfile::get_PartitionSize()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MixedRealityInputRecordingProfile_get_PartitionSize_mCFA857FFB0CBE37678EF751667040AEB1E84329D_inline (MixedRealityInputRecordingProfile_t56C7B027300F96474C48A61DF0A7EFAA8E41EA91 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation/PoseCurves::Optimize(System.Single,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PoseCurves_Optimize_mF498DB5DEAD66B7E810A400B442273B38089FD44 (PoseCurves_t14269C65E2E6B6A532EF4AC78324976DF2587501 * __this, float ___positionThreshold0, float ___rotationThreshold1, int32_t ___partitionSize2, const RuntimeMethod* method);
// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInputRecordingProfile::get_EyeGazeOriginThreshold()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float MixedRealityInputRecordingProfile_get_EyeGazeOriginThreshold_mB233A67A96A3F58D3A1CD6448A28B89C4E978589_inline (MixedRealityInputRecordingProfile_t56C7B027300F96474C48A61DF0A7EFAA8E41EA91 * __this, const RuntimeMethod* method);
// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInputRecordingProfile::get_EyeGazeDirectionThreshold()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float MixedRealityInputRecordingProfile_get_EyeGazeDirectionThreshold_m817BE12ABBB0A219E23004B30D773761BD3062FD_inline (MixedRealityInputRecordingProfile_t56C7B027300F96474C48A61DF0A7EFAA8E41EA91 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation/RayCurves::Optimize(System.Single,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RayCurves_Optimize_mF8C5DAEEF384426CAD7AAB9B5A6533EF2B6FEDFE (RayCurves_tE200BC10F2980B31D68E54E46BB6EB32508F5604 * __this, float ___originThreshold0, float ___directionThreshold1, int32_t ___partitionSize2, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/ValueCollection<!0,!1> System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Input.InputAnimation/PoseCurves>::get_Values()
inline ValueCollection_tD80A9007D68EC421B749FEFB42D345EAA73519FE * Dictionary_2_get_Values_m96235BF869B2ECF2B290BDD4F6D7B022FFF0A12D (Dictionary_2_tF3976454D4ACA03F9E231469CB7AA87B3D4745B0 * __this, const RuntimeMethod* method)
{
	return ((  ValueCollection_tD80A9007D68EC421B749FEFB42D345EAA73519FE * (*) (Dictionary_2_tF3976454D4ACA03F9E231469CB7AA87B3D4745B0 *, const RuntimeMethod*))Dictionary_2_get_Values_mCE8DFA32761CC8C69390885B07388FB6B221F055_gshared)(__this, method);
}
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2/ValueCollection<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Input.InputAnimation/PoseCurves>::GetEnumerator()
inline Enumerator_t6359D50CF0EE93ACDDC59D9FCAE8F0DD31D8DE50  ValueCollection_GetEnumerator_m7C12538788587A8F4DA13E1467AA2C2E38C1066C (ValueCollection_tD80A9007D68EC421B749FEFB42D345EAA73519FE * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t6359D50CF0EE93ACDDC59D9FCAE8F0DD31D8DE50  (*) (ValueCollection_tD80A9007D68EC421B749FEFB42D345EAA73519FE *, const RuntimeMethod*))ValueCollection_GetEnumerator_m2856AA67C8638FAC317916DD7BB02DE1F4DF2FEA_gshared)(__this, method);
}
// !1 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Input.InputAnimation/PoseCurves>::get_Current()
inline PoseCurves_t14269C65E2E6B6A532EF4AC78324976DF2587501 * Enumerator_get_Current_mFB5CC68B705B48844631C1360EF6CB6ED7199C3F_inline (Enumerator_t6359D50CF0EE93ACDDC59D9FCAE8F0DD31D8DE50 * __this, const RuntimeMethod* method)
{
	return ((  PoseCurves_t14269C65E2E6B6A532EF4AC78324976DF2587501 * (*) (Enumerator_t6359D50CF0EE93ACDDC59D9FCAE8F0DD31D8DE50 *, const RuntimeMethod*))Enumerator_get_Current_m6C2AF5B57480AE0440F937EF9A50D3803ED850EE_gshared_inline)(__this, method);
}
// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInputRecordingProfile::get_JointPositionThreshold()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float MixedRealityInputRecordingProfile_get_JointPositionThreshold_m334C9FBDA90EEEDD15AE647E8F7E225A1194F396_inline (MixedRealityInputRecordingProfile_t56C7B027300F96474C48A61DF0A7EFAA8E41EA91 * __this, const RuntimeMethod* method);
// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInputRecordingProfile::get_JointRotationThreshold()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float MixedRealityInputRecordingProfile_get_JointRotationThreshold_mB2AE3496B2BBB868F22645E466074C313DDBEA9B_inline (MixedRealityInputRecordingProfile_t56C7B027300F96474C48A61DF0A7EFAA8E41EA91 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Input.InputAnimation/PoseCurves>::MoveNext()
inline bool Enumerator_MoveNext_m578FD92B67B741D322B93809002331AF35670FF0 (Enumerator_t6359D50CF0EE93ACDDC59D9FCAE8F0DD31D8DE50 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t6359D50CF0EE93ACDDC59D9FCAE8F0DD31D8DE50 *, const RuntimeMethod*))Enumerator_MoveNext_m591CCA2E5BC073733DB11EDEBC6523FF1188D830_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Input.InputAnimation/PoseCurves>::Dispose()
inline void Enumerator_Dispose_mE6C2E4D4F02A516C58A877AB592B442E4B745D72 (Enumerator_t6359D50CF0EE93ACDDC59D9FCAE8F0DD31D8DE50 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t6359D50CF0EE93ACDDC59D9FCAE8F0DD31D8DE50 *, const RuntimeMethod*))Enumerator_Dispose_mD80EB4F34363556C0DB46455E0B72B89018A4F3C_gshared)(__this, method);
}
// System.Single UnityEngine.AnimationCurve::Evaluate(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AnimationCurve_Evaluate_m1248B5B167F1FFFDC847A08C56B7D63B32311E6A (AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * __this, float ___time0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation/<GetAllAnimationCurves>d__60::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetAllAnimationCurvesU3Ed__60__ctor_m07DDAD234100D6B55213BB5CE9BD361D0501BF22 (U3CGetAllAnimationCurvesU3Ed__60_tABFAAE907711737282276C10EB4C546A49E1D0C4 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void UnityEngine.Keyframe::.ctor(System.Single,System.Single,System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Keyframe__ctor_m4403ADF9353A22925623AA2835E79AB380441107 (Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F * __this, float ___time0, float ___value1, float ___inTangent2, float ___outTangent3, float ___inWeight4, float ___outWeight5, const RuntimeMethod* method);
// System.Void UnityEngine.Keyframe::set_weightedMode(UnityEngine.WeightedMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Keyframe_set_weightedMode_mEFA8BE25D83C1CF4E2D83AD76F6BB34E0435D0B5 (Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Int32 UnityEngine.AnimationCurve::AddKey(UnityEngine.Keyframe)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AnimationCurve_AddKey_m3AEE7259785540EF6A157BA99B3737AC60E30D9A (AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * __this, Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  ___key0, const RuntimeMethod* method);
// System.Int32 UnityEngine.AnimationCurve::AddKey(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AnimationCurve_AddKey_m159FB7119B6BBCD11DDEBCC3ECB782DEBF0FD5C7 (AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * __this, float ___time0, float ___value1, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimationSerializationUtils::WriteFloatCurveSimple(System.IO.BinaryWriter,UnityEngine.AnimationCurve,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAnimationSerializationUtils_WriteFloatCurveSimple_m6E070EBD2AF41C142BF139047F40ED577F5CD763 (BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F * ___writer0, AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___curve1, float ___startTime2, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimationSerializationUtils::ReadFloatCurveSimple(System.IO.BinaryReader,UnityEngine.AnimationCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAnimationSerializationUtils_ReadFloatCurveSimple_m2DB3EA2BCC35088D91687D5090BCF18F02E32431 (BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128 * ___reader0, AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___curve1, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimationSerializationUtils::ReadFloatCurve(System.IO.BinaryReader,UnityEngine.AnimationCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAnimationSerializationUtils_ReadFloatCurve_mAE6393871E98641F773E1DCC3E7234D6C57AD02C (BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128 * ___reader0, AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___curve1, const RuntimeMethod* method);
// UnityEngine.Keyframe UnityEngine.AnimationCurve::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  AnimationCurve_get_Item_mD5F6B4C79C432C9CEADB6D116C07969802D5611A (AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation::<OptimizePositionCurve>g__Recurse|71_0(System.Int32,System.Int32,Microsoft.MixedReality.Toolkit.Input.InputAnimation/<>c__DisplayClass71_0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAnimation_U3COptimizePositionCurveU3Eg__RecurseU7C71_0_mCE7378227CFF97D8540CA6327008C7BF92300991 (int32_t ___start0, int32_t ___end1, U3CU3Ec__DisplayClass71_0_tB8844843F079F21090643D261C6084F55D933677 * p2, const RuntimeMethod* method);
// System.Int32 UnityEngine.Mathf::Min(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mathf_Min_m8038BC2CE141C9AF3ECA2E31B88A9768423B1519 (int32_t ___a0, int32_t ___b1, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation::<OptimizeDirectionCurve>g__Recurse|72_0(System.Int32,System.Int32,Microsoft.MixedReality.Toolkit.Input.InputAnimation/<>c__DisplayClass72_0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAnimation_U3COptimizeDirectionCurveU3Eg__RecurseU7C72_0_m570AF6F317703FF8FE4C48CE49E4FBA311BD8B57 (int32_t ___start0, int32_t ___end1, U3CU3Ec__DisplayClass72_0_t86C7C5FDF8A191F3176A7AD9E5052C7FCCF17343 * p2, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation::<OptimizeRotationCurve>g__Recurse|73_0(System.Int32,System.Int32,Microsoft.MixedReality.Toolkit.Input.InputAnimation/<>c__DisplayClass73_0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAnimation_U3COptimizeRotationCurveU3Eg__RecurseU7C73_0_m3A3E4826B5D48C4E6E761FF18E04183A7668E172 (int32_t ___start0, int32_t ___end1, U3CU3Ec__DisplayClass73_0_tA9EDB2D4E6569D8D39993A6304B9396566B6F89C * p2, const RuntimeMethod* method);
// System.String[] System.Enum::GetNames(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* Enum_GetNames_m49110673091D017F43CF0F5F7AD9B7730306D2E8 (Type_t * ___enumType0, const RuntimeMethod* method);
// System.Single UnityEngine.Keyframe::get_value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Keyframe_get_value_m9D584EA4DFB7D0BE71646F479DFB615EE005C968 (Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation::AddBoolKey(UnityEngine.AnimationCurve,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAnimation_AddBoolKey_mF3C12D6505644FD0313E176656AA6975488CB90F (AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___curve0, float ___time1, bool ___value2, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_m9CC878FE7F12DF8B4C25C62C80A68ECAC784E0C0 (Dictionary_2_tABC45B7C67E921F533EBEF222CFE2B891AA1E098 * __this, int32_t ___key0, MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99 * ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tABC45B7C67E921F533EBEF222CFE2B891AA1E098 *, int32_t, MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99 *, const RuntimeMethod*))Dictionary_2_TryGetValue_m8B6D2B3B16F427C0629E5656A3402F1568B990B4_gshared)(__this, ___key0, ___value1, method);
}
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::InverseLerp(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_InverseLerp_mCD2E6F9ADCFFB40EB7D3086E444DF2C702F9C29B (float ___a0, float ___b1, float ___value2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_Lerp_m8E095584FFA10CF1D3EABCD04F4C83FB82EC5524_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, float ___t2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::get_sqrMagnitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_get_sqrMagnitude_mC567EE6DF411501A8FE1F23A0038862630B88249 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::Dot(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Dot_mD19905B093915BA12852732EA27AA2DBE030D11F_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___lhs0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rhs1, const RuntimeMethod* method);
// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Quaternion__ctor_m564FA9302F5B9DA8BAB97B0A2D86FFE83ACAA421 (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::get_normalized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_get_normalized_m32E57BB637B9A38379421B1C269C299AF3002C94 (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Lerp(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_Lerp_mBFA4C4D2574C8140AA840273D3E6565D66F6F261 (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___a0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___b1, float ___t2, const RuntimeMethod* method);
// System.Single UnityEngine.Quaternion::Dot(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Quaternion_Dot_m7F12C5843352AB2EA687923444CC987D51515F9A (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___a0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___b1, const RuntimeMethod* method);
// System.DateTime System.DateTime::get_UtcNow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  DateTime_get_UtcNow_m761E57F86226DDD94F0A2F4D98F0A8E27C74F090 (const RuntimeMethod* method);
// System.String System.DateTime::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DateTime_ToString_m19ECEFF7BA22ED4425F7562A82A1C2308E934204 (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * __this, String_t* ___format0, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m039737CCD992C5BFC8D16DFD681F5E8786E87FA6 (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, RuntimeObject * ___arg23, const RuntimeMethod* method);
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11 (Exception_t * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.AnimationCurve::set_preWrapMode(UnityEngine.WrapMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationCurve_set_preWrapMode_m39008E29D7419438020138A0DE50999BB89266AF (AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.AnimationCurve::set_postWrapMode(UnityEngine.WrapMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationCurve_set_postWrapMode_mC7079F70E85156F73D8BA2E06840F7E2BEDF8568 (AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Keyframe::set_time(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Keyframe_set_time_mB48C8B14B2346F46A0A4FE27CDD01D163F945CC4 (Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Keyframe::set_value(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Keyframe_set_value_m617DC36870FB4BA758FDEF2497DF958297266E3F (Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Keyframe::set_inTangent(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Keyframe_set_inTangent_m12C08116896BC3E2C632356738D4CBE1D43B37C5 (Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Keyframe::set_outTangent(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Keyframe_set_outTangent_m8754D0F36E7C5470E7FE426171ADD7D77077C275 (Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Keyframe::set_inWeight(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Keyframe_set_inWeight_m844B007DD3D01958CD0EAE45B046EBB1032949B4 (Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Keyframe::set_outWeight(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Keyframe_set_outWeight_m3ED9DD3A892D325FC564FFD0C0AB53A0A7B9913F (Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.AnimationCurve::set_keys(UnityEngine.Keyframe[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationCurve_set_keys_m146468F0FF5228D829489E845C1193B1D83543BF (AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * __this, KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* ___value0, const RuntimeMethod* method);
// UnityEngine.WrapMode UnityEngine.AnimationCurve::get_preWrapMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AnimationCurve_get_preWrapMode_m58B16E24ED209A84A3B2B7D9348F43E3E6776F58 (AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * __this, const RuntimeMethod* method);
// UnityEngine.WrapMode UnityEngine.AnimationCurve::get_postWrapMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AnimationCurve_get_postWrapMode_m5A9698F30F71D1A4D400F1FD67D78FAF3D14B318 (AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Input.InputAnimationMarker>::get_Count()
inline int32_t List_1_get_Count_m7B5C118BF4B6FA8874F6370190A0C2F001CA54CF_inline (List_1_tAAD05033EDA4EAF37AE770A3EDAB1B555706FEFD * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tAAD05033EDA4EAF37AE770A3EDAB1B555706FEFD *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Input.InputAnimationMarker>::GetEnumerator()
inline Enumerator_t168CFCE1DDFF36FEA9351886E61D43566EBDF0C3  List_1_GetEnumerator_m2F49E6477919ABC49651A226799364621C80EE19 (List_1_tAAD05033EDA4EAF37AE770A3EDAB1B555706FEFD * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t168CFCE1DDFF36FEA9351886E61D43566EBDF0C3  (*) (List_1_tAAD05033EDA4EAF37AE770A3EDAB1B555706FEFD *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<Microsoft.MixedReality.Toolkit.Input.InputAnimationMarker>::get_Current()
inline InputAnimationMarker_t4807C7C71F5EAE69A38D8AFBDC85B6FD4F25C376 * Enumerator_get_Current_m1277D43589A00582FC8007628E3520223E1F2F61_inline (Enumerator_t168CFCE1DDFF36FEA9351886E61D43566EBDF0C3 * __this, const RuntimeMethod* method)
{
	return ((  InputAnimationMarker_t4807C7C71F5EAE69A38D8AFBDC85B6FD4F25C376 * (*) (Enumerator_t168CFCE1DDFF36FEA9351886E61D43566EBDF0C3 *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<Microsoft.MixedReality.Toolkit.Input.InputAnimationMarker>::MoveNext()
inline bool Enumerator_MoveNext_m53C61470937E0B112AF53FDAEEF861A3534696FB (Enumerator_t168CFCE1DDFF36FEA9351886E61D43566EBDF0C3 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t168CFCE1DDFF36FEA9351886E61D43566EBDF0C3 *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Microsoft.MixedReality.Toolkit.Input.InputAnimationMarker>::Dispose()
inline void Enumerator_Dispose_m76A593F013DC32969E61C317E654D6760B4D1E8A (Enumerator_t168CFCE1DDFF36FEA9351886E61D43566EBDF0C3 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t168CFCE1DDFF36FEA9351886E61D43566EBDF0C3 *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Input.InputAnimationMarker>::Clear()
inline void List_1_Clear_m6C1D207CF0E996831A7606C1AB9209509C843BF7 (List_1_tAAD05033EDA4EAF37AE770A3EDAB1B555706FEFD * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tAAD05033EDA4EAF37AE770A3EDAB1B555706FEFD *, const RuntimeMethod*))List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Input.InputAnimationMarker>::set_Capacity(System.Int32)
inline void List_1_set_Capacity_mF2BC1ADE2A9619E4BE410FC1014BA5999FCF02D6 (List_1_tAAD05033EDA4EAF37AE770A3EDAB1B555706FEFD * __this, int32_t ___value0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tAAD05033EDA4EAF37AE770A3EDAB1B555706FEFD *, int32_t, const RuntimeMethod*))List_1_set_Capacity_m7A81900F3492DE11874B0EA9A0E5454F897E3079_gshared)(__this, ___value0, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimationMarker::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAnimationMarker__ctor_m245101D8B91457B5A844CC3D3F6422D4D8451029 (InputAnimationMarker_t4807C7C71F5EAE69A38D8AFBDC85B6FD4F25C376 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Input.InputAnimationMarker>::Add(!0)
inline void List_1_Add_m79968F703F97E8C1B850A74C6BF7581665CB1507 (List_1_tAAD05033EDA4EAF37AE770A3EDAB1B555706FEFD * __this, InputAnimationMarker_t4807C7C71F5EAE69A38D8AFBDC85B6FD4F25C376 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tAAD05033EDA4EAF37AE770A3EDAB1B555706FEFD *, InputAnimationMarker_t4807C7C71F5EAE69A38D8AFBDC85B6FD4F25C376 *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// !0 System.Collections.Generic.Queue`1<Microsoft.MixedReality.Toolkit.Input.InputRecordingBuffer/Keyframe>::Peek()
inline Keyframe_tB3167A15EF7CB57AA5C8498D640C6254A16F5B3F * Queue_1_Peek_mB3153BAE9034B20254393FA4C73FA78C0F27A401 (Queue_1_t6983AF29DC5F881F3157AC042F9F24494864A613 * __this, const RuntimeMethod* method)
{
	return ((  Keyframe_tB3167A15EF7CB57AA5C8498D640C6254A16F5B3F * (*) (Queue_1_t6983AF29DC5F881F3157AC042F9F24494864A613 *, const RuntimeMethod*))Queue_1_Peek_mBD3667C0471C6A09AE4D691DD023A9A82D522A83_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Queue`1<Microsoft.MixedReality.Toolkit.Input.InputRecordingBuffer/Keyframe>::.ctor()
inline void Queue_1__ctor_mEE9F113DA333DE72BB526E682C731DA547CA37E1 (Queue_1_t6983AF29DC5F881F3157AC042F9F24494864A613 * __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t6983AF29DC5F881F3157AC042F9F24494864A613 *, const RuntimeMethod*))Queue_1__ctor_m065613451660A1479E4D6D00878FB7630AFE4E11_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Queue`1<Microsoft.MixedReality.Toolkit.Input.InputRecordingBuffer/Keyframe>::Clear()
inline void Queue_1_Clear_m5D53E24BE1FF59818BED534E8EB9F5BBCA0D8390 (Queue_1_t6983AF29DC5F881F3157AC042F9F24494864A613 * __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t6983AF29DC5F881F3157AC042F9F24494864A613 *, const RuntimeMethod*))Queue_1_Clear_m123D9273AFF968BD5C248D721870170B26FBEF6C_gshared)(__this, method);
}
// !0 System.Collections.Generic.Queue`1<Microsoft.MixedReality.Toolkit.Input.InputRecordingBuffer/Keyframe>::Dequeue()
inline Keyframe_tB3167A15EF7CB57AA5C8498D640C6254A16F5B3F * Queue_1_Dequeue_m46868C1E95A0FA17E63EEC454067A5C0FFC7E46F (Queue_1_t6983AF29DC5F881F3157AC042F9F24494864A613 * __this, const RuntimeMethod* method)
{
	return ((  Keyframe_tB3167A15EF7CB57AA5C8498D640C6254A16F5B3F * (*) (Queue_1_t6983AF29DC5F881F3157AC042F9F24494864A613 *, const RuntimeMethod*))Queue_1_Dequeue_mE9A2A69E86A7EDA9FBCEA675542F01A6D8677A14_gshared)(__this, method);
}
// System.Int32 System.Collections.Generic.Queue`1<Microsoft.MixedReality.Toolkit.Input.InputRecordingBuffer/Keyframe>::get_Count()
inline int32_t Queue_1_get_Count_mD86B9C3F43E36831A4BBD81862C08D02E776CB6C_inline (Queue_1_t6983AF29DC5F881F3157AC042F9F24494864A613 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Queue_1_t6983AF29DC5F881F3157AC042F9F24494864A613 *, const RuntimeMethod*))Queue_1_get_Count_mD618588C9785F06D043BE6AAD0A0B8116B2A77A3_gshared_inline)(__this, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputRecordingBuffer/Keyframe::set_CameraPose(Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Keyframe_set_CameraPose_mA7F77373E5B5A27F781CC58234DA8E66C482C7DD_inline (Keyframe_tB3167A15EF7CB57AA5C8498D640C6254A16F5B3F * __this, MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99  ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.InputRecordingBuffer/Keyframe::set_GazeRay(UnityEngine.Ray)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Keyframe_set_GazeRay_m9CA5738D5E4A5423FE33D2971A0F096DF0E2A7F6_inline (Keyframe_tB3167A15EF7CB57AA5C8498D640C6254A16F5B3F * __this, Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.InputRecordingBuffer/Keyframe::set_LeftTracked(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Keyframe_set_LeftTracked_mA7012EE3B00277F37646D2EFFD6E58B89ED22C12_inline (Keyframe_tB3167A15EF7CB57AA5C8498D640C6254A16F5B3F * __this, bool ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.InputRecordingBuffer/Keyframe::set_LeftPinch(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Keyframe_set_LeftPinch_m7DE1DB8481149DB1A6F4FD05E1CFA51EFC0D223C_inline (Keyframe_tB3167A15EF7CB57AA5C8498D640C6254A16F5B3F * __this, bool ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.InputRecordingBuffer/Keyframe::set_RightTracked(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Keyframe_set_RightTracked_m2DDA779BE3AB10359A1139B303D9E1687EF2A91A_inline (Keyframe_tB3167A15EF7CB57AA5C8498D640C6254A16F5B3F * __this, bool ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.InputRecordingBuffer/Keyframe::set_RightPinch(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Keyframe_set_RightPinch_mCD64D00BD5EE182D2DA2F0C3A8893EFD4FCCA219_inline (Keyframe_tB3167A15EF7CB57AA5C8498D640C6254A16F5B3F * __this, bool ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>::Add(!0,!1)
inline void Dictionary_2_Add_m4EDC557BB444444293757D2606B103B6AFAD82DC (Dictionary_2_tABC45B7C67E921F533EBEF222CFE2B891AA1E098 * __this, int32_t ___key0, MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99  ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tABC45B7C67E921F533EBEF222CFE2B891AA1E098 *, int32_t, MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99 , const RuntimeMethod*))Dictionary_2_Add_m5F64B92A5D9DD2180721ECEADD47812C4AB5F372_gshared)(__this, ___key0, ___value1, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputRecordingBuffer/Keyframe::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Keyframe__ctor_m8C29A9724CF8FE98D008BAD7AB0310D6E40CEA1A (Keyframe_tB3167A15EF7CB57AA5C8498D640C6254A16F5B3F * __this, float ___time0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<Microsoft.MixedReality.Toolkit.Input.InputRecordingBuffer/Keyframe>::Enqueue(!0)
inline void Queue_1_Enqueue_m31E9400DB21C3E0CC8349B2C7566D6D4869D4F9E (Queue_1_t6983AF29DC5F881F3157AC042F9F24494864A613 * __this, Keyframe_tB3167A15EF7CB57AA5C8498D640C6254A16F5B3F * ___item0, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t6983AF29DC5F881F3157AC042F9F24494864A613 *, Keyframe_tB3167A15EF7CB57AA5C8498D640C6254A16F5B3F *, const RuntimeMethod*))Queue_1_Enqueue_mCACF312F04BD04D69E3FBA7D779B5DBF39BB3728_gshared)(__this, ___item0, method);
}
// System.Collections.Generic.Queue`1/Enumerator<!0> System.Collections.Generic.Queue`1<Microsoft.MixedReality.Toolkit.Input.InputRecordingBuffer/Keyframe>::GetEnumerator()
inline Enumerator_t68B017BFDF640B5A9938D0FD1BEAE9B802896902  Queue_1_GetEnumerator_m205EE33811A2CEA16A8A4B86B1798421FDD01127 (Queue_1_t6983AF29DC5F881F3157AC042F9F24494864A613 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t68B017BFDF640B5A9938D0FD1BEAE9B802896902  (*) (Queue_1_t6983AF29DC5F881F3157AC042F9F24494864A613 *, const RuntimeMethod*))Queue_1_GetEnumerator_m93F41D0CCCF0AB82FC589F8E2B9AB6670C8D843F_gshared)(__this, method);
}
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55 (Delegate_t * ___a0, Delegate_t * ___b1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4 (Delegate_t * ___source0, Delegate_t * ___value1, const RuntimeMethod* method);
// System.Single Microsoft.MixedReality.Toolkit.Input.InputRecordingService::get_StartTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float InputRecordingService_get_StartTime_mCF3448ECC51DF3103BAA6E93289F9C17A83E011D (InputRecordingService_tA847B98505BE7064D6751CD73492550FE4A2338B * __this, const RuntimeMethod* method);
// System.Void System.Nullable`1<System.Single>::.ctor(!0)
inline void Nullable_1__ctor_m32EB6B5DB3EA9B62B49C29C367AFAD991AC2A53A (Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A * __this, float ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A *, float, const RuntimeMethod*))Nullable_1__ctor_m32EB6B5DB3EA9B62B49C29C367AFAD991AC2A53A_gshared)(__this, ___value0, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputRecordingService::PruneBuffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputRecordingService_PruneBuffer_mD56B955866241876DED757B6A097946CA1711935 (InputRecordingService_tA847B98505BE7064D6751CD73492550FE4A2338B * __this, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<System.Single>::get_HasValue()
inline bool Nullable_1_get_HasValue_m7897F8E6F5E7968B14AEE7B3B5719B6B3CE4292C_inline (Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A *, const RuntimeMethod*))Nullable_1_get_HasValue_m7897F8E6F5E7968B14AEE7B3B5719B6B3CE4292C_gshared_inline)(__this, method);
}
// !0 System.Nullable`1<System.Single>::get_Value()
inline float Nullable_1_get_Value_mBC700ACC6A8110AF4C3911F6866195856CADA20F (Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A * __this, const RuntimeMethod* method)
{
	return ((  float (*) (Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A *, const RuntimeMethod*))Nullable_1_get_Value_mBC700ACC6A8110AF4C3911F6866195856CADA20F_gshared)(__this, method);
}
// System.Single Microsoft.MixedReality.Toolkit.Input.InputRecordingService::get_EndTime()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float InputRecordingService_get_EndTime_mB3DC5B15E5C740E44A8CDAE882D1636B5083B4E5_inline (InputRecordingService_tA847B98505BE7064D6751CD73492550FE4A2338B * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___exists0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.BaseService::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseService_Enable_m0009FE0AE05820A130A513ADFC9CA5E119A00258 (BaseService_tF2C2512816D1D0EE872AC911E3BAF7F9E5A44C16 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.InputRecordingBuffer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputRecordingBuffer__ctor_m71EFC81CFA6AA9548A80AEF42522D2E6897F392C (InputRecordingBuffer_tA6CEDA373266AD73D32A749E89D2D87FD6635E4F * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.BaseService::Disable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseService_Disable_m35061F42654DE06AE5575CE47C32AE43CF9AC0B2 (BaseService_tF2C2512816D1D0EE872AC911E3BAF7F9E5A44C16 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.InputRecordingService::ResetStartTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputRecordingService_ResetStartTime_m54DB931C76EA3CB3DB995B82486F136B28B22B17 (InputRecordingService_tA847B98505BE7064D6751CD73492550FE4A2338B * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem Microsoft.MixedReality.Toolkit.CoreServices::get_InputSystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CoreServices_get_InputSystem_mE61A004642407339A8CC47764036D3BB52C43E8D (const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.InputRecordingService::set_IsRecording(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void InputRecordingService_set_IsRecording_m040D1B2E017C00DB07A388C900E25C34C1FA3C80_inline (InputRecordingService_tA847B98505BE7064D6751CD73492550FE4A2338B * __this, bool ___value0, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputRecordingProfile Microsoft.MixedReality.Toolkit.Input.InputRecordingService::get_InputRecordingProfile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MixedRealityInputRecordingProfile_t56C7B027300F96474C48A61DF0A7EFAA8E41EA91 * InputRecordingService_get_InputRecordingProfile_m1F8BE909EBD3849421D2F6C76FCA44E932D9793E (InputRecordingService_tA847B98505BE7064D6751CD73492550FE4A2338B * __this, const RuntimeMethod* method);
// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInputRecordingProfile::get_FrameRate()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float MixedRealityInputRecordingProfile_get_FrameRate_m073A10D133A0D9B9FB75E9E2EFFDCEAFB6D8A7D0_inline (MixedRealityInputRecordingProfile_t56C7B027300F96474C48A61DF0A7EFAA8E41EA91 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844 (const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Input.InputRecordingService::get_UseBufferTimeLimit()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool InputRecordingService_get_UseBufferTimeLimit_m4042E68CF548455A697C39ABB07DCD491FD11EC7_inline (InputRecordingService_tA847B98505BE7064D6751CD73492550FE4A2338B * __this, const RuntimeMethod* method);
// System.Void System.Action::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Input.InputRecordingService::get_IsRecording()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool InputRecordingService_get_IsRecording_m6B36789EE3D2F8DDAEE0E13FF83A9BE7BAE74FAE_inline (InputRecordingService_tA847B98505BE7064D6751CD73492550FE4A2338B * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.InputRecordingService::set_EndTime(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void InputRecordingService_set_EndTime_mA217B0B7F035D4B0A479D43AEE295CBCB1169370_inline (InputRecordingService_tA847B98505BE7064D6751CD73492550FE4A2338B * __this, float ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.InputRecordingService::RecordKeyframe()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputRecordingService_RecordKeyframe_mF7DFA21FF0E2391F49CB0574A7231AAA304221D0 (InputRecordingService_tA847B98505BE7064D6751CD73492550FE4A2338B * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.InputRecordingBuffer::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputRecordingBuffer_Clear_m6EF61E54A3AB9A96F6C071E6DFDA1875F5CA47FB (InputRecordingBuffer_tA6CEDA373266AD73D32A749E89D2D87FD6635E4F * __this, const RuntimeMethod* method);
// System.String Microsoft.MixedReality.Toolkit.Input.InputAnimationSerializationUtils::GetOutputFilename(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* InputAnimationSerializationUtils_GetOutputFilename_m3D2FE98D8F34FD133CD06ECDCACDA698A54302C7 (String_t* ___baseName0, bool ___appendTimestamp1, const RuntimeMethod* method);
// System.String Microsoft.MixedReality.Toolkit.Input.InputRecordingService::SaveInputAnimation(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* InputRecordingService_SaveInputAnimation_m9A8A1F47F0B896B3B2FF453AED9C91D793DC6060 (InputRecordingService_tA847B98505BE7064D6751CD73492550FE4A2338B * __this, String_t* ___filename0, String_t* ___directory1, const RuntimeMethod* method);
// System.String UnityEngine.Application::get_persistentDataPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_persistentDataPath_mBD9C84D06693A9DEF2D9D2206B59D4BCF8A03463 (const RuntimeMethod* method);
// System.String System.IO.Path::Combine(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_Combine_mC22E47A9BB232F02ED3B6B5F6DD53338D37782EF (String_t* ___path10, String_t* ___path21, const RuntimeMethod* method);
// System.IO.FileStream System.IO.File::Open(System.String,System.IO.FileMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * File_Open_mA9EF74B69D352F396FBD5225BCC3643D8063C002 (String_t* ___path0, int32_t ___mode1, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.InputAnimation Microsoft.MixedReality.Toolkit.Input.InputAnimation::FromRecordingBuffer(Microsoft.MixedReality.Toolkit.Input.InputRecordingBuffer,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputRecordingProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534 * InputAnimation_FromRecordingBuffer_mD3D70E27E73C4FEE4CC86F8D1B66D9297E92969A (InputRecordingBuffer_tA6CEDA373266AD73D32A749E89D2D87FD6635E4F * ___recordingBuffer0, MixedRealityInputRecordingProfile_t56C7B027300F96474C48A61DF0A7EFAA8E41EA91 * ___profile1, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation::ToStream(System.IO.Stream,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAnimation_ToStream_m596DF966C6CCF755E7BDA3410BDB36C286F342FF (InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534 * __this, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___stream0, float ___startTime1, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Int32 Microsoft.MixedReality.Toolkit.Input.InputRecordingBuffer::NewKeyframe(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InputRecordingBuffer_NewKeyframe_mFE7FC5772D9967EAB88AA5B762F2A5713CA25219 (InputRecordingBuffer_tA6CEDA373266AD73D32A749E89D2D87FD6635E4F * __this, float ___time0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.InputRecordingService::RecordInputHandData(Microsoft.MixedReality.Toolkit.Utilities.Handedness)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputRecordingService_RecordInputHandData_m60C0342FE4B72342F156F7FF2D318F2D81A6178E (InputRecordingService_tA847B98505BE7064D6751CD73492550FE4A2338B * __this, uint8_t ___handedness0, const RuntimeMethod* method);
// UnityEngine.Camera Microsoft.MixedReality.Toolkit.Utilities.CameraCache::get_Main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * CameraCache_get_Main_m197C7A2C9D2EAE6AD083908F4CBC07262BDB75E7 (const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::.ctor(UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityPose__ctor_m0722BE081AA8822BC7EE321C14172F2D9B0B2A9D (MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation1, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.InputRecordingBuffer::SetCameraPose(Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputRecordingBuffer_SetCameraPose_mFCB55F38E6817458876440816F17CC3C1EB4D6AB (InputRecordingBuffer_tA6CEDA373266AD73D32A749E89D2D87FD6635E4F * __this, MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99  ___pose0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702 (const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.InputRecordingBuffer::SetGazeRay(UnityEngine.Ray)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputRecordingBuffer_SetGazeRay_m10272880F153255CC6DAE81925119175D764C3C3 (InputRecordingBuffer_tA6CEDA373266AD73D32A749E89D2D87FD6635E4F * __this, Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  ___ray0, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::get_Position()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  MixedRealityPose_get_Position_m8DDC9CD0EA10D6CA2A4F1E20D5DBD1449E02CD86_inline (MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::get_Forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  MixedRealityPose_get_Forward_m7EC272D5FEAC115D9C28CE45CE6053D23E944312 (MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99 * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityHand Microsoft.MixedReality.Toolkit.Input.HandJointUtils::FindHand(Microsoft.MixedReality.Toolkit.Utilities.Handedness)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HandJointUtils_FindHand_mE1A9D02E563B18876CB972C0358A8C540FF6CF64 (uint8_t ___handedness0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.InputRecordingBuffer::SetHandState(Microsoft.MixedReality.Toolkit.Utilities.Handedness,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputRecordingBuffer_SetHandState_m535C643CC8365C86B17E0F5851B9CEAB4145BCDB (InputRecordingBuffer_tA6CEDA373266AD73D32A749E89D2D87FD6635E4F * __this, uint8_t ___handedness0, bool ___tracked1, bool ___pinching2, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.DeviceInputType Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::get_InputType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MixedRealityInteractionMapping_get_InputType_mD4B8174B4A84E3A88D0056FA4550C7B8E9F37462_inline (MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::get_BoolData()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool MixedRealityInteractionMapping_get_BoolData_m5D39EBEE43023C9782742ECC3700D75CD8AF9875_inline (MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B * __this, const RuntimeMethod* method);
// System.Void System.Nullable`1<System.Int32>::.ctor(!0)
inline void Nullable_1__ctor_m9D7EBA0DE2F89A891507EC35157C70FC4DC81184 (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 *, int32_t, const RuntimeMethod*))Nullable_1__ctor_m9D7EBA0DE2F89A891507EC35157C70FC4DC81184_gshared)(__this, ___value0, method);
}
// !0 System.Nullable`1<System.Int32>::GetValueOrDefault()
inline int32_t Nullable_1_GetValueOrDefault_mB4CE6E77EC85DD762FDA6C24F96EBC2A75E28546_inline (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 *, const RuntimeMethod*))Nullable_1_GetValueOrDefault_mB4CE6E77EC85DD762FDA6C24F96EBC2A75E28546_gshared_inline)(__this, method);
}
// System.Boolean System.Nullable`1<System.Int32>::get_HasValue()
inline bool Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_inline (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 *, const RuntimeMethod*))Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_gshared_inline)(__this, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputRecordingBuffer::SetJointPose(Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputRecordingBuffer_SetJointPose_m0F213AE56C8C8F8C6216E829C88B246F2D512DF2 (InputRecordingBuffer_tA6CEDA373266AD73D32A749E89D2D87FD6635E4F * __this, uint8_t ___handedness0, int32_t ___joint1, MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99  ___pose2, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.InputRecordingBuffer::RemoveBeforeTime(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputRecordingBuffer_RemoveBeforeTime_m0C6E71F62E8B91462AA5552F4B1F2865C5BE450F (InputRecordingBuffer_tA6CEDA373266AD73D32A749E89D2D87FD6635E4F * __this, float ___time0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseMixedRealityProfile__ctor_mABE9ABA5C514E086D617682809ED5CA84B6C72DC (BaseMixedRealityProfile_tC5DBD7146B1E1D467DE81BA1EAB45133408A59E1 * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.InputAnimation Microsoft.MixedReality.Toolkit.Input.InputAnimation::FromStream(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534 * InputAnimation_FromStream_m4FDB4487C81F5EF397057832DC89C04A0A962CCC (Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___stream0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation/<>c__DisplayClass50_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass50_0__ctor_m9307C8A0B30C2B5E1A67C53BD73644B43E85EEDE (U3CU3Ec__DisplayClass50_0_t08F1F4C926CDEC2D77202D77B7C64F0B4D3B20B5 * __this, const RuntimeMethod* method);
// System.Void System.Func`1<Microsoft.MixedReality.Toolkit.Input.InputAnimation>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_mAA1A3929916574EE561C7F2CDE37EC73B53254AE (Func_1_tB0603EAA5A40D7E49AB43A40191F152B2BABFE2D * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_1_tB0603EAA5A40D7E49AB43A40191F152B2BABFE2D *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_1__ctor_m2A4FE889FB540EA198F7757D17DC2290461E5EE9_gshared)(__this, ___object0, ___method1, method);
}
// System.Threading.Tasks.Task`1<!!0> System.Threading.Tasks.Task::Run<Microsoft.MixedReality.Toolkit.Input.InputAnimation>(System.Func`1<!!0>)
inline Task_1_tB231B84F8F2E5D004D7EE56C7AC413E80914BC74 * Task_Run_TisInputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534_m99D2DCD3A6DAD2C11427B66A4B48AE3079782374 (Func_1_tB0603EAA5A40D7E49AB43A40191F152B2BABFE2D * ___function0, const RuntimeMethod* method)
{
	return ((  Task_1_tB231B84F8F2E5D004D7EE56C7AC413E80914BC74 * (*) (Func_1_tB0603EAA5A40D7E49AB43A40191F152B2BABFE2D *, const RuntimeMethod*))Task_Run_TisRuntimeObject_mAEE714420C7F5AAD768588A76399EB67779E8729_gshared)(___function0, method);
}
// System.Runtime.CompilerServices.TaskAwaiter`1<!0> System.Threading.Tasks.Task`1<Microsoft.MixedReality.Toolkit.Input.InputAnimation>::GetAwaiter()
inline TaskAwaiter_1_tF2BE961DAB576F8235B3EAB1BEE2B129DBB64946  Task_1_GetAwaiter_m5E744BD98B186A9A56DBF2A7680F2FBABE1DF413 (Task_1_tB231B84F8F2E5D004D7EE56C7AC413E80914BC74 * __this, const RuntimeMethod* method)
{
	return ((  TaskAwaiter_1_tF2BE961DAB576F8235B3EAB1BEE2B129DBB64946  (*) (Task_1_tB231B84F8F2E5D004D7EE56C7AC413E80914BC74 *, const RuntimeMethod*))Task_1_GetAwaiter_m4F5B9EF55874E9959CE12E71ADEAC798960F0FE3_gshared)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<Microsoft.MixedReality.Toolkit.Input.InputAnimation>::get_IsCompleted()
inline bool TaskAwaiter_1_get_IsCompleted_m9711AC9172AB7AD4384188CB1A852A50279D976C (TaskAwaiter_1_tF2BE961DAB576F8235B3EAB1BEE2B129DBB64946 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_tF2BE961DAB576F8235B3EAB1BEE2B129DBB64946 *, const RuntimeMethod*))TaskAwaiter_1_get_IsCompleted_mEC81351691C5A577A64F3B728036AD979AB3AF94_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Microsoft.MixedReality.Toolkit.Input.InputAnimation>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<Microsoft.MixedReality.Toolkit.Input.InputAnimation>,Microsoft.MixedReality.Toolkit.Input.InputAnimation/<FromStreamAsync>d__50>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tF2BE961DAB576F8235B3EAB1BEE2B129DBB64946_TisU3CFromStreamAsyncU3Ed__50_t0BAABAB4A343E3F573925043CD5CA6AE4597B105_m58493BDEF4A6C3F4B4F122B6CF9D508148FD8439 (AsyncTaskMethodBuilder_1_tF3202EB14A45BB67CE82B3124E365B8DEFF9BF80 * __this, TaskAwaiter_1_tF2BE961DAB576F8235B3EAB1BEE2B129DBB64946 * ___awaiter0, U3CFromStreamAsyncU3Ed__50_t0BAABAB4A343E3F573925043CD5CA6AE4597B105 * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tF3202EB14A45BB67CE82B3124E365B8DEFF9BF80 *, TaskAwaiter_1_tF2BE961DAB576F8235B3EAB1BEE2B129DBB64946 *, U3CFromStreamAsyncU3Ed__50_t0BAABAB4A343E3F573925043CD5CA6AE4597B105 *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE_TisU3CFromStreamAsyncU3Ed__50_t0BAABAB4A343E3F573925043CD5CA6AE4597B105_mBEA229577A07E0B637C1388F5B1500C3DF2BEDEF_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// !0 System.Runtime.CompilerServices.TaskAwaiter`1<Microsoft.MixedReality.Toolkit.Input.InputAnimation>::GetResult()
inline InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534 * TaskAwaiter_1_GetResult_m19BF9AC201BF1F535D3E2D2912CDAE39A91AA335 (TaskAwaiter_1_tF2BE961DAB576F8235B3EAB1BEE2B129DBB64946 * __this, const RuntimeMethod* method)
{
	return ((  InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534 * (*) (TaskAwaiter_1_tF2BE961DAB576F8235B3EAB1BEE2B129DBB64946 *, const RuntimeMethod*))TaskAwaiter_1_GetResult_m7703A30E4F4EA17FBA4243DE1BF9412521B2AFDA_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Microsoft.MixedReality.Toolkit.Input.InputAnimation>::SetException(System.Exception)
inline void AsyncTaskMethodBuilder_1_SetException_m3483106EB75F67C47745F99FE942FB5DED5C8CBC (AsyncTaskMethodBuilder_1_tF3202EB14A45BB67CE82B3124E365B8DEFF9BF80 * __this, Exception_t * ___exception0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tF3202EB14A45BB67CE82B3124E365B8DEFF9BF80 *, Exception_t *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetException_m29521EB618E38AF72FF0C4094070C1489F4129B3_gshared)(__this, ___exception0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Microsoft.MixedReality.Toolkit.Input.InputAnimation>::SetResult(!0)
inline void AsyncTaskMethodBuilder_1_SetResult_m4DBC215CEA1BEB17872ECEF25586C634F1CC2B1F (AsyncTaskMethodBuilder_1_tF3202EB14A45BB67CE82B3124E365B8DEFF9BF80 * __this, InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534 * ___result0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tF3202EB14A45BB67CE82B3124E365B8DEFF9BF80 *, InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534 *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetResult_m3E4AB12877D4FE377F26708CF6899C49360007FA_gshared)(__this, ___result0, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation/<FromStreamAsync>d__50::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFromStreamAsyncU3Ed__50_MoveNext_m9CEBD203C4A893138FAE7CE745BE8D8FBEC6AFAC (U3CFromStreamAsyncU3Ed__50_t0BAABAB4A343E3F573925043CD5CA6AE4597B105 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Microsoft.MixedReality.Toolkit.Input.InputAnimation>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
inline void AsyncTaskMethodBuilder_1_SetStateMachine_m33CD0EF551559886D61544398F8BBB9D271B711D (AsyncTaskMethodBuilder_1_tF3202EB14A45BB67CE82B3124E365B8DEFF9BF80 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tF3202EB14A45BB67CE82B3124E365B8DEFF9BF80 *, RuntimeObject*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetStateMachine_m736C84D61B4AB2FCD150BD3945C6874471A9224D_gshared)(__this, ___stateMachine0, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation/<FromStreamAsync>d__50::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFromStreamAsyncU3Ed__50_SetStateMachine_mE24194826612C172D23BF3DEFB86A5CD2AAEC164 (U3CFromStreamAsyncU3Ed__50_t0BAABAB4A343E3F573925043CD5CA6AE4597B105 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Int32 System.Environment::get_CurrentManagedThreadId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D (const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation/<GetAllAnimationCurves>d__60::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetAllAnimationCurvesU3Ed__60_U3CU3Em__Finally1_m1FEDD9A8B4391A5E98297F17B023BAA189753D7F (U3CGetAllAnimationCurvesU3Ed__60_tABFAAE907711737282276C10EB4C546A49E1D0C4 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation/<GetAllAnimationCurves>d__60::<>m__Finally2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetAllAnimationCurvesU3Ed__60_U3CU3Em__Finally2_mF86439DFD02659E5DFF5A2B7A760DFD8F76601D2 (U3CGetAllAnimationCurvesU3Ed__60_tABFAAE907711737282276C10EB4C546A49E1D0C4 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation/<GetAllAnimationCurves>d__60::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetAllAnimationCurvesU3Ed__60_System_IDisposable_Dispose_m18BBD68682EC79BEB1FA11DC041B0DD2B2F24459 (U3CGetAllAnimationCurvesU3Ed__60_tABFAAE907711737282276C10EB4C546A49E1D0C4 * __this, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<UnityEngine.AnimationCurve> Microsoft.MixedReality.Toolkit.Input.InputAnimation/<GetAllAnimationCurves>d__60::System.Collections.Generic.IEnumerable<UnityEngine.AnimationCurve>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetAllAnimationCurvesU3Ed__60_System_Collections_Generic_IEnumerableU3CUnityEngine_AnimationCurveU3E_GetEnumerator_m7D58C802D0F700C17DF12DE1064D39513A21F806 (U3CGetAllAnimationCurvesU3Ed__60_tABFAAE907711737282276C10EB4C546A49E1D0C4 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation::AddFloatKey(UnityEngine.AnimationCurve,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAnimation_AddFloatKey_m3B59676DEBAEA5A18DB74BA79548CE942528555E (AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___curve0, float ___time1, float ___value2, const RuntimeMethod* method);
// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::get_Rotation()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  MixedRealityPose_get_Rotation_mB4E8D3A137342387D99494B4A52255B2D9029EF9_inline (MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation::OptimizePositionCurve(UnityEngine.AnimationCurve&,UnityEngine.AnimationCurve&,UnityEngine.AnimationCurve&,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAnimation_OptimizePositionCurve_mD3E72D31BD1D2BBF108362A65BBCA96641E39975 (AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** ___curveX0, AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** ___curveY1, AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** ___curveZ2, float ___threshold3, int32_t ___partitionSize4, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation::OptimizeRotationCurve(UnityEngine.AnimationCurve&,UnityEngine.AnimationCurve&,UnityEngine.AnimationCurve&,UnityEngine.AnimationCurve&,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAnimation_OptimizeRotationCurve_mC170C6AB83A9C159AB6BA2BE2F0FE2D18791DDA4 (AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** ___curveX0, AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** ___curveY1, AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** ___curveZ2, AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** ___curveW3, float ___threshold4, int32_t ___partitionSize5, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::set_Position(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MixedRealityPose_set_Position_m773EB94276F208A7BA4555B67A819F3E47BB72B6_inline (MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::set_Rotation(UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MixedRealityPose_set_Rotation_m880A6F5D3947A513E13FEDE089FE7C677A58B27D_inline (MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99 * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Quaternion::Normalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Quaternion_Normalize_m080BED4941351BFF772A60536F934A4740FC6818 (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Ray::get_origin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Ray_get_origin_m0C1B2BFF99CDF5231AC29AC031C161F55B53C1D0 (Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation::AddVectorKey(UnityEngine.AnimationCurve,UnityEngine.AnimationCurve,UnityEngine.AnimationCurve,System.Single,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAnimation_AddVectorKey_m8387C163CFE8BD0E554DD6ECF6C9D7BC77C33FA4 (AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___curveX0, AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___curveY1, AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___curveZ2, float ___time3, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___vector4, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Ray::get_direction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Ray_get_direction_m2B31F86F19B64474A901B28D3808011AE7A13EFC (Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation::OptimizeDirectionCurve(UnityEngine.AnimationCurve&,UnityEngine.AnimationCurve&,UnityEngine.AnimationCurve&,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAnimation_OptimizeDirectionCurve_m0F698E9A530A3239F9E340156C05114B083079E7 (AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** ___curveX0, AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** ___curveY1, AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** ___curveZ2, float ___threshold3, int32_t ___partitionSize4, const RuntimeMethod* method);
// System.Void UnityEngine.Ray::set_origin(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ray_set_origin_m6EDD9381A16F5BD022A7DCBFE63D38C8A3E91B51 (Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Ray::set_direction(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ray_set_direction_mDA9E058A81EA8D21BCD222A4729F66071FDDAFE3 (Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::Normalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3_Normalize_m2258C159121FC81954C301DEE631BC24FCEDE780 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.InputRecordingBuffer/Keyframe::set_Time(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Keyframe_set_Time_mA0E61576B73CE605C55A9FAA5B5AB1AD9405FE03_inline (Keyframe_tB3167A15EF7CB57AA5C8498D640C6254A16F5B3F * __this, float ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>::.ctor()
inline void Dictionary_2__ctor_mEBA54D53782CDC8695416345EA43239C678D9804 (Dictionary_2_tABC45B7C67E921F533EBEF222CFE2B891AA1E098 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tABC45B7C67E921F533EBEF222CFE2B891AA1E098 *, const RuntimeMethod*))Dictionary_2__ctor_m53DA92C371D548DD44E17EAA1EB21BE0CE8B4ED4_gshared)(__this, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputRecordingBuffer/Keyframe::set_LeftJoints(System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Keyframe_set_LeftJoints_mBCA7CCA1A68A724C3171365638C5D26B12BEDB11_inline (Keyframe_tB3167A15EF7CB57AA5C8498D640C6254A16F5B3F * __this, Dictionary_2_tABC45B7C67E921F533EBEF222CFE2B891AA1E098 * ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.InputRecordingBuffer/Keyframe::set_RightJoints(System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Keyframe_set_RightJoints_mC5C6E03184499B6524886D6081CF9B5BD7FF4AFD_inline (Keyframe_tB3167A15EF7CB57AA5C8498D640C6254A16F5B3F * __this, Dictionary_2_tABC45B7C67E921F533EBEF222CFE2B891AA1E098 * ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C (float ___value0, const RuntimeMethod* method);
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
// System.Single Microsoft.MixedReality.Toolkit.Input.InputAnimation::get_Duration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float InputAnimation_get_Duration_mBDCF186E526D1AA62EF8559B42A764D61AEB216D (InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534 * __this, const RuntimeMethod* method)
{
	{
		// public float Duration => duration;
		float L_0 = __this->get_duration_1();
		return L_0;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Input.InputAnimation::get_HasHandData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputAnimation_get_HasHandData_mE585DBE196E292F83610C5810E569A172143D373 (InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534 * __this, const RuntimeMethod* method)
{
	{
		// public bool HasHandData { get; private set; } = false;
		bool L_0 = __this->get_U3CHasHandDataU3Ek__BackingField_10();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation::set_HasHandData(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAnimation_set_HasHandData_m6D908DF23EF21B692A3FB1C9E41C8F157B1B844E (InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool HasHandData { get; private set; } = false;
		bool L_0 = ___value0;
		__this->set_U3CHasHandDataU3Ek__BackingField_10(L_0);
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Input.InputAnimation::get_HasCameraPose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputAnimation_get_HasCameraPose_m3A7978ABCB573725268205D06F9F524A2CD72D9A (InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534 * __this, const RuntimeMethod* method)
{
	{
		// public bool HasCameraPose { get; private set; } = false;
		bool L_0 = __this->get_U3CHasCameraPoseU3Ek__BackingField_11();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation::set_HasCameraPose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAnimation_set_HasCameraPose_mCF43237A57330A40150937CD555F8F46A2FABEB1 (InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool HasCameraPose { get; private set; } = false;
		bool L_0 = ___value0;
		__this->set_U3CHasCameraPoseU3Ek__BackingField_11(L_0);
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Input.InputAnimation::get_HasEyeGaze()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputAnimation_get_HasEyeGaze_mF0D54413FEBDD201EA28ACCA9ADC438124EF0A3F (InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534 * __this, const RuntimeMethod* method)
{
	{
		// public bool HasEyeGaze { get; private set; } = false;
		bool L_0 = __this->get_U3CHasEyeGazeU3Ek__BackingField_12();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation::set_HasEyeGaze(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAnimation_set_HasEyeGaze_m1AA6396ADD8FDA4A8564A76F26E2274BBC650F8D (InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool HasEyeGaze { get; private set; } = false;
		bool L_0 = ___value0;
		__this->set_U3CHasEyeGazeU3Ek__BackingField_12(L_0);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAnimation__ctor_m28B0D9BF6E035B158B8E1A48A33862B7DDE1123D (InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m6402146F3FF0E69515A75BAC03F56D27ECABE563_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tF3976454D4ACA03F9E231469CB7AA87B3D4745B0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m5347526F2143EC38B80D32DED1B6DB92D805C670_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tAAD05033EDA4EAF37AE770A3EDAB1B555706FEFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PoseCurves_t14269C65E2E6B6A532EF4AC78324976DF2587501_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RayCurves_tE200BC10F2980B31D68E54E46BB6EB32508F5604_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public InputAnimation()
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// handTrackedCurveLeft = new AnimationCurve();
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_0 = (AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 *)il2cpp_codegen_object_new(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_il2cpp_TypeInfo_var);
		AnimationCurve__ctor_m68D6F819242C539EC522FEAFFEB6F1579767043E(L_0, /*hidden argument*/NULL);
		__this->set_handTrackedCurveLeft_2(L_0);
		// handTrackedCurveRight = new AnimationCurve();
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_1 = (AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 *)il2cpp_codegen_object_new(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_il2cpp_TypeInfo_var);
		AnimationCurve__ctor_m68D6F819242C539EC522FEAFFEB6F1579767043E(L_1, /*hidden argument*/NULL);
		__this->set_handTrackedCurveRight_3(L_1);
		// handPinchCurveLeft = new AnimationCurve();
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_2 = (AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 *)il2cpp_codegen_object_new(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_il2cpp_TypeInfo_var);
		AnimationCurve__ctor_m68D6F819242C539EC522FEAFFEB6F1579767043E(L_2, /*hidden argument*/NULL);
		__this->set_handPinchCurveLeft_4(L_2);
		// handPinchCurveRight = new AnimationCurve();
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_3 = (AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 *)il2cpp_codegen_object_new(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_il2cpp_TypeInfo_var);
		AnimationCurve__ctor_m68D6F819242C539EC522FEAFFEB6F1579767043E(L_3, /*hidden argument*/NULL);
		__this->set_handPinchCurveRight_5(L_3);
		// handJointCurvesLeft = new Dictionary<TrackedHandJoint, PoseCurves>();
		Dictionary_2_tF3976454D4ACA03F9E231469CB7AA87B3D4745B0 * L_4 = (Dictionary_2_tF3976454D4ACA03F9E231469CB7AA87B3D4745B0 *)il2cpp_codegen_object_new(Dictionary_2_tF3976454D4ACA03F9E231469CB7AA87B3D4745B0_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m6402146F3FF0E69515A75BAC03F56D27ECABE563(L_4, /*hidden argument*/Dictionary_2__ctor_m6402146F3FF0E69515A75BAC03F56D27ECABE563_RuntimeMethod_var);
		__this->set_handJointCurvesLeft_6(L_4);
		// handJointCurvesRight = new Dictionary<TrackedHandJoint, PoseCurves>();
		Dictionary_2_tF3976454D4ACA03F9E231469CB7AA87B3D4745B0 * L_5 = (Dictionary_2_tF3976454D4ACA03F9E231469CB7AA87B3D4745B0 *)il2cpp_codegen_object_new(Dictionary_2_tF3976454D4ACA03F9E231469CB7AA87B3D4745B0_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m6402146F3FF0E69515A75BAC03F56D27ECABE563(L_5, /*hidden argument*/Dictionary_2__ctor_m6402146F3FF0E69515A75BAC03F56D27ECABE563_RuntimeMethod_var);
		__this->set_handJointCurvesRight_7(L_5);
		// cameraCurves = new PoseCurves();
		PoseCurves_t14269C65E2E6B6A532EF4AC78324976DF2587501 * L_6 = (PoseCurves_t14269C65E2E6B6A532EF4AC78324976DF2587501 *)il2cpp_codegen_object_new(PoseCurves_t14269C65E2E6B6A532EF4AC78324976DF2587501_il2cpp_TypeInfo_var);
		PoseCurves__ctor_mAB903C4BE542C0D296D2BD8ED4316E7C56718BE4(L_6, /*hidden argument*/NULL);
		__this->set_cameraCurves_8(L_6);
		// gazeCurves = new RayCurves();
		RayCurves_tE200BC10F2980B31D68E54E46BB6EB32508F5604 * L_7 = (RayCurves_tE200BC10F2980B31D68E54E46BB6EB32508F5604 *)il2cpp_codegen_object_new(RayCurves_tE200BC10F2980B31D68E54E46BB6EB32508F5604_il2cpp_TypeInfo_var);
		RayCurves__ctor_m6B5E5B505F7A60B975EC6BE76D36E7145230B958(L_7, /*hidden argument*/NULL);
		__this->set_gazeCurves_9(L_7);
		// markers = new List<InputAnimationMarker>();
		List_1_tAAD05033EDA4EAF37AE770A3EDAB1B555706FEFD * L_8 = (List_1_tAAD05033EDA4EAF37AE770A3EDAB1B555706FEFD *)il2cpp_codegen_object_new(List_1_tAAD05033EDA4EAF37AE770A3EDAB1B555706FEFD_il2cpp_TypeInfo_var);
		List_1__ctor_m5347526F2143EC38B80D32DED1B6DB92D805C670(L_8, /*hidden argument*/List_1__ctor_m5347526F2143EC38B80D32DED1B6DB92D805C670_RuntimeMethod_var);
		__this->set_markers_13(L_8);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation::ToStream(System.IO.Stream,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAnimation_ToStream_m596DF966C6CCF755E7BDA3410BDB36C286F342FF (InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534 * __this, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___stream0, float ___startTime1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mA86A48F1F8E01B36CF0D80C36B3C67755D6D00BE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputAnimationSerializationUtils_tBF0CF9A1A3138FAC30FF8F17528259A9C7A31560_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PoseCurves_t14269C65E2E6B6A532EF4AC78324976DF2587501_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F * V_0 = NULL;
	PoseCurves_t14269C65E2E6B6A532EF4AC78324976DF2587501 * V_1 = NULL;
	int32_t V_2 = 0;
	PoseCurves_t14269C65E2E6B6A532EF4AC78324976DF2587501 * V_3 = NULL;
	int32_t V_4 = 0;
	PoseCurves_t14269C65E2E6B6A532EF4AC78324976DF2587501 * V_5 = NULL;
	{
		// var writer = new BinaryWriter(stream);
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_0 = ___stream0;
		BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F * L_1 = (BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F *)il2cpp_codegen_object_new(BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F_il2cpp_TypeInfo_var);
		BinaryWriter__ctor_mC6F89939E04734FBEEA375D7E0FF9C042E4AB71A(L_1, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// InputAnimationSerializationUtils.WriteHeader(writer);
		BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InputAnimationSerializationUtils_tBF0CF9A1A3138FAC30FF8F17528259A9C7A31560_il2cpp_TypeInfo_var);
		InputAnimationSerializationUtils_WriteHeader_mBD9FFA16D2E0EE3CD72C9FDE89619DC6F5A4FBC6(L_2, /*hidden argument*/NULL);
		// writer.Write(HasCameraPose);
		BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F * L_3 = V_0;
		bool L_4;
		L_4 = InputAnimation_get_HasCameraPose_m3A7978ABCB573725268205D06F9F524A2CD72D9A_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		VirtActionInvoker1< bool >::Invoke(7 /* System.Void System.IO.BinaryWriter::Write(System.Boolean) */, L_3, L_4);
		// writer.Write(HasHandData);
		BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F * L_5 = V_0;
		bool L_6;
		L_6 = InputAnimation_get_HasHandData_mE585DBE196E292F83610C5810E569A172143D373_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		VirtActionInvoker1< bool >::Invoke(7 /* System.Void System.IO.BinaryWriter::Write(System.Boolean) */, L_5, L_6);
		// writer.Write(HasEyeGaze);
		BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F * L_7 = V_0;
		bool L_8;
		L_8 = InputAnimation_get_HasEyeGaze_mF0D54413FEBDD201EA28ACCA9ADC438124EF0A3F_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		VirtActionInvoker1< bool >::Invoke(7 /* System.Void System.IO.BinaryWriter::Write(System.Boolean) */, L_7, L_8);
		// var defaultCurves = new PoseCurves();
		PoseCurves_t14269C65E2E6B6A532EF4AC78324976DF2587501 * L_9 = (PoseCurves_t14269C65E2E6B6A532EF4AC78324976DF2587501 *)il2cpp_codegen_object_new(PoseCurves_t14269C65E2E6B6A532EF4AC78324976DF2587501_il2cpp_TypeInfo_var);
		PoseCurves__ctor_mAB903C4BE542C0D296D2BD8ED4316E7C56718BE4(L_9, /*hidden argument*/NULL);
		V_1 = L_9;
		// if (HasCameraPose)
		bool L_10;
		L_10 = InputAnimation_get_HasCameraPose_m3A7978ABCB573725268205D06F9F524A2CD72D9A_inline(__this, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_004c;
		}
	}
	{
		// PoseCurvesToStream(writer, cameraCurves, startTime);
		BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F * L_11 = V_0;
		PoseCurves_t14269C65E2E6B6A532EF4AC78324976DF2587501 * L_12 = __this->get_cameraCurves_8();
		float L_13 = ___startTime1;
		IL2CPP_RUNTIME_CLASS_INIT(InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534_il2cpp_TypeInfo_var);
		InputAnimation_PoseCurvesToStream_m23BA1432A8694B1119FAE05655EA460B2D0F1CE5(L_11, L_12, L_13, /*hidden argument*/NULL);
	}

IL_004c:
	{
		// if (HasHandData)
		bool L_14;
		L_14 = InputAnimation_get_HasHandData_mE585DBE196E292F83610C5810E569A172143D373_inline(__this, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_00e6;
		}
	}
	{
		// InputAnimationSerializationUtils.WriteBoolCurve(writer, handTrackedCurveLeft, startTime);
		BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F * L_15 = V_0;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_16 = __this->get_handTrackedCurveLeft_2();
		float L_17 = ___startTime1;
		IL2CPP_RUNTIME_CLASS_INIT(InputAnimationSerializationUtils_tBF0CF9A1A3138FAC30FF8F17528259A9C7A31560_il2cpp_TypeInfo_var);
		InputAnimationSerializationUtils_WriteBoolCurve_m15A0CF2FCE96FB6CB6BB2DD265A0C9B8BB9726F7(L_15, L_16, L_17, /*hidden argument*/NULL);
		// InputAnimationSerializationUtils.WriteBoolCurve(writer, handTrackedCurveRight, startTime);
		BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F * L_18 = V_0;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_19 = __this->get_handTrackedCurveRight_3();
		float L_20 = ___startTime1;
		InputAnimationSerializationUtils_WriteBoolCurve_m15A0CF2FCE96FB6CB6BB2DD265A0C9B8BB9726F7(L_18, L_19, L_20, /*hidden argument*/NULL);
		// InputAnimationSerializationUtils.WriteBoolCurve(writer, handPinchCurveLeft, startTime);
		BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F * L_21 = V_0;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_22 = __this->get_handPinchCurveLeft_4();
		float L_23 = ___startTime1;
		InputAnimationSerializationUtils_WriteBoolCurve_m15A0CF2FCE96FB6CB6BB2DD265A0C9B8BB9726F7(L_21, L_22, L_23, /*hidden argument*/NULL);
		// InputAnimationSerializationUtils.WriteBoolCurve(writer, handPinchCurveRight, startTime);
		BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F * L_24 = V_0;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_25 = __this->get_handPinchCurveRight_5();
		float L_26 = ___startTime1;
		InputAnimationSerializationUtils_WriteBoolCurve_m15A0CF2FCE96FB6CB6BB2DD265A0C9B8BB9726F7(L_24, L_25, L_26, /*hidden argument*/NULL);
		// for (int i = 0; i < jointCount; ++i)
		V_2 = 0;
		goto IL_00ad;
	}

IL_008f:
	{
		// if (!handJointCurvesLeft.TryGetValue((TrackedHandJoint)i, out var curves))
		Dictionary_2_tF3976454D4ACA03F9E231469CB7AA87B3D4745B0 * L_27 = __this->get_handJointCurvesLeft_6();
		int32_t L_28 = V_2;
		NullCheck(L_27);
		bool L_29;
		L_29 = Dictionary_2_TryGetValue_mA86A48F1F8E01B36CF0D80C36B3C67755D6D00BE(L_27, L_28, (PoseCurves_t14269C65E2E6B6A532EF4AC78324976DF2587501 **)(&V_3), /*hidden argument*/Dictionary_2_TryGetValue_mA86A48F1F8E01B36CF0D80C36B3C67755D6D00BE_RuntimeMethod_var);
		if (L_29)
		{
			goto IL_00a1;
		}
	}
	{
		// curves = defaultCurves;
		PoseCurves_t14269C65E2E6B6A532EF4AC78324976DF2587501 * L_30 = V_1;
		V_3 = L_30;
	}

IL_00a1:
	{
		// PoseCurvesToStream(writer, curves, startTime);
		BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F * L_31 = V_0;
		PoseCurves_t14269C65E2E6B6A532EF4AC78324976DF2587501 * L_32 = V_3;
		float L_33 = ___startTime1;
		IL2CPP_RUNTIME_CLASS_INIT(InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534_il2cpp_TypeInfo_var);
		InputAnimation_PoseCurvesToStream_m23BA1432A8694B1119FAE05655EA460B2D0F1CE5(L_31, L_32, L_33, /*hidden argument*/NULL);
		// for (int i = 0; i < jointCount; ++i)
		int32_t L_34 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_34, (int32_t)1));
	}

IL_00ad:
	{
		// for (int i = 0; i < jointCount; ++i)
		int32_t L_35 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534_il2cpp_TypeInfo_var);
		int32_t L_36 = ((InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534_StaticFields*)il2cpp_codegen_static_fields_for(InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534_il2cpp_TypeInfo_var))->get_jointCount_0();
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_008f;
		}
	}
	{
		// for (int i = 0; i < jointCount; ++i)
		V_4 = 0;
		goto IL_00dd;
	}

IL_00ba:
	{
		// if (!handJointCurvesRight.TryGetValue((TrackedHandJoint)i, out var curves))
		Dictionary_2_tF3976454D4ACA03F9E231469CB7AA87B3D4745B0 * L_37 = __this->get_handJointCurvesRight_7();
		int32_t L_38 = V_4;
		NullCheck(L_37);
		bool L_39;
		L_39 = Dictionary_2_TryGetValue_mA86A48F1F8E01B36CF0D80C36B3C67755D6D00BE(L_37, L_38, (PoseCurves_t14269C65E2E6B6A532EF4AC78324976DF2587501 **)(&V_5), /*hidden argument*/Dictionary_2_TryGetValue_mA86A48F1F8E01B36CF0D80C36B3C67755D6D00BE_RuntimeMethod_var);
		if (L_39)
		{
			goto IL_00ce;
		}
	}
	{
		// curves = defaultCurves;
		PoseCurves_t14269C65E2E6B6A532EF4AC78324976DF2587501 * L_40 = V_1;
		V_5 = L_40;
	}

IL_00ce:
	{
		// PoseCurvesToStream(writer, curves, startTime);
		BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F * L_41 = V_0;
		PoseCurves_t14269C65E2E6B6A532EF4AC78324976DF2587501 * L_42 = V_5;
		float L_43 = ___startTime1;
		IL2CPP_RUNTIME_CLASS_INIT(InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534_il2cpp_TypeInfo_var);
		InputAnimation_PoseCurvesToStream_m23BA1432A8694B1119FAE05655EA460B2D0F1CE5(L_41, L_42, L_43, /*hidden argument*/NULL);
		// for (int i = 0; i < jointCount; ++i)
		int32_t L_44 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_44, (int32_t)1));
	}

IL_00dd:
	{
		// for (int i = 0; i < jointCount; ++i)
		int32_t L_45 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534_il2cpp_TypeInfo_var);
		int32_t L_46 = ((InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534_StaticFields*)il2cpp_codegen_static_fields_for(InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534_il2cpp_TypeInfo_var))->get_jointCount_0();
		if ((((int32_t)L_45) < ((int32_t)L_46)))
		{
			goto IL_00ba;
		}
	}

IL_00e6:
	{
		// if (HasEyeGaze)
		bool L_47;
		L_47 = InputAnimation_get_HasEyeGaze_mF0D54413FEBDD201EA28ACCA9ADC438124EF0A3F_inline(__this, /*hidden argument*/NULL);
		if (!L_47)
		{
			goto IL_00fb;
		}
	}
	{
		// RayCurvesToStream(writer, gazeCurves, startTime);
		BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F * L_48 = V_0;
		RayCurves_tE200BC10F2980B31D68E54E46BB6EB32508F5604 * L_49 = __this->get_gazeCurves_9();
		float L_50 = ___startTime1;
		IL2CPP_RUNTIME_CLASS_INIT(InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534_il2cpp_TypeInfo_var);
		InputAnimation_RayCurvesToStream_m06D79D4D4A46DE51A1B1A1B66901FA2935648D71(L_48, L_49, L_50, /*hidden argument*/NULL);
	}

IL_00fb:
	{
		// InputAnimationSerializationUtils.WriteMarkerList(writer, markers, startTime);
		BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F * L_51 = V_0;
		List_1_tAAD05033EDA4EAF37AE770A3EDAB1B555706FEFD * L_52 = __this->get_markers_13();
		float L_53 = ___startTime1;
		IL2CPP_RUNTIME_CLASS_INIT(InputAnimationSerializationUtils_tBF0CF9A1A3138FAC30FF8F17528259A9C7A31560_il2cpp_TypeInfo_var);
		InputAnimationSerializationUtils_WriteMarkerList_m89DD412E5D301D7EE4194A217BE5FEA2E40C733F(L_51, L_52, L_53, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation::EvaluateHandState(System.Single,Microsoft.MixedReality.Toolkit.Utilities.Handedness,System.Boolean&,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAnimation_EvaluateHandState_mD45293CBCAB085A307AA3254D0DBD72B4242B0A2 (InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534 * __this, float ___time0, uint8_t ___handedness1, bool* ___isTracked2, bool* ___isPinching3, const RuntimeMethod* method)
{
	{
		// if (!HasHandData)
		bool L_0;
		L_0 = InputAnimation_get_HasHandData_mE585DBE196E292F83610C5810E569A172143D373_inline(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		// isTracked = false;
		bool* L_1 = ___isTracked2;
		*((int8_t*)L_1) = (int8_t)0;
		// isPinching = false;
		bool* L_2 = ___isPinching3;
		*((int8_t*)L_2) = (int8_t)0;
	}

IL_000f:
	{
		// if (handedness == Handedness.Left)
		uint8_t L_3 = ___handedness1;
		if ((!(((uint32_t)L_3) == ((uint32_t)1))))
		{
			goto IL_002a;
		}
	}
	{
		// EvaluateHandState(time, handTrackedCurveLeft, handPinchCurveLeft, out isTracked, out isPinching);
		float L_4 = ___time0;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_5 = __this->get_handTrackedCurveLeft_2();
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_6 = __this->get_handPinchCurveLeft_4();
		bool* L_7 = ___isTracked2;
		bool* L_8 = ___isPinching3;
		InputAnimation_EvaluateHandState_m9711883F0BD5E8B0D8EA711F083534B6D866AC12(__this, L_4, L_5, L_6, (bool*)L_7, (bool*)L_8, /*hidden argument*/NULL);
		// }
		return;
	}

IL_002a:
	{
		// else if (handedness == Handedness.Right)
		uint8_t L_9 = ___handedness1;
		if ((!(((uint32_t)L_9) == ((uint32_t)2))))
		{
			goto IL_0045;
		}
	}
	{
		// EvaluateHandState(time, handTrackedCurveRight, handPinchCurveRight, out isTracked, out isPinching);
		float L_10 = ___time0;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_11 = __this->get_handTrackedCurveRight_3();
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_12 = __this->get_handPinchCurveRight_5();
		bool* L_13 = ___isTracked2;
		bool* L_14 = ___isPinching3;
		InputAnimation_EvaluateHandState_m9711883F0BD5E8B0D8EA711F083534B6D866AC12(__this, L_10, L_11, L_12, (bool*)L_13, (bool*)L_14, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0045:
	{
		// isTracked = false;
		bool* L_15 = ___isTracked2;
		*((int8_t*)L_15) = (int8_t)0;
		// isPinching = false;
		bool* L_16 = ___isPinching3;
		*((int8_t*)L_16) = (int8_t)0;
		// }
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.Input.InputAnimation::EvaluateCameraPose(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99  InputAnimation_EvaluateCameraPose_m26AFCECECEDEBAEFC4F4F74FD62961ADB9006DD0 (InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534 * __this, float ___time0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!HasCameraPose)
		bool L_0;
		L_0 = InputAnimation_get_HasCameraPose_m3A7978ABCB573725268205D06F9F524A2CD72D9A_inline(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// return MixedRealityPose.ZeroIdentity;
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99_il2cpp_TypeInfo_var);
		MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99  L_1;
		L_1 = MixedRealityPose_get_ZeroIdentity_m95D9F3844DD9A90DAEC2046FE9152D721CCF19D2_inline(/*hidden argument*/NULL);
		return L_1;
	}

IL_000e:
	{
		// return cameraCurves.Evaluate(time);
		PoseCurves_t14269C65E2E6B6A532EF4AC78324976DF2587501 * L_2 = __this->get_cameraCurves_8();
		float L_3 = ___time0;
		NullCheck(L_2);
		MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99  L_4;
		L_4 = PoseCurves_Evaluate_mA254F9EE38B047676F47A248C4EDB17626E7CE2D(L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.Input.InputAnimation::EvaluateHandJoint(System.Single,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99  InputAnimation_EvaluateHandJoint_m16261ED7504A771F1B8FBB2E66DCB7D9B402312A (InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534 * __this, float ___time0, uint8_t ___handedness1, int32_t ___joint2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!HasHandData)
		bool L_0;
		L_0 = InputAnimation_get_HasHandData_mE585DBE196E292F83610C5810E569A172143D373_inline(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// return MixedRealityPose.ZeroIdentity;
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99_il2cpp_TypeInfo_var);
		MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99  L_1;
		L_1 = MixedRealityPose_get_ZeroIdentity_m95D9F3844DD9A90DAEC2046FE9152D721CCF19D2_inline(/*hidden argument*/NULL);
		return L_1;
	}

IL_000e:
	{
		// if (handedness == Handedness.Left)
		uint8_t L_2 = ___handedness1;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_0021;
		}
	}
	{
		// return EvaluateHandJoint(time, joint, handJointCurvesLeft);
		float L_3 = ___time0;
		int32_t L_4 = ___joint2;
		Dictionary_2_tF3976454D4ACA03F9E231469CB7AA87B3D4745B0 * L_5 = __this->get_handJointCurvesLeft_6();
		MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99  L_6;
		L_6 = InputAnimation_EvaluateHandJoint_mF41C24128DA9E920492A1CCBE1117740146DBF19(__this, L_3, L_4, L_5, /*hidden argument*/NULL);
		return L_6;
	}

IL_0021:
	{
		// else if (handedness == Handedness.Right)
		uint8_t L_7 = ___handedness1;
		if ((!(((uint32_t)L_7) == ((uint32_t)2))))
		{
			goto IL_0034;
		}
	}
	{
		// return EvaluateHandJoint(time, joint, handJointCurvesRight);
		float L_8 = ___time0;
		int32_t L_9 = ___joint2;
		Dictionary_2_tF3976454D4ACA03F9E231469CB7AA87B3D4745B0 * L_10 = __this->get_handJointCurvesRight_7();
		MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99  L_11;
		L_11 = InputAnimation_EvaluateHandJoint_mF41C24128DA9E920492A1CCBE1117740146DBF19(__this, L_8, L_9, L_10, /*hidden argument*/NULL);
		return L_11;
	}

IL_0034:
	{
		// return MixedRealityPose.ZeroIdentity;
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99_il2cpp_TypeInfo_var);
		MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99  L_12;
		L_12 = MixedRealityPose_get_ZeroIdentity_m95D9F3844DD9A90DAEC2046FE9152D721CCF19D2_inline(/*hidden argument*/NULL);
		return L_12;
	}
}
// UnityEngine.Ray Microsoft.MixedReality.Toolkit.Input.InputAnimation::EvaluateEyeGaze(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  InputAnimation_EvaluateEyeGaze_m4485F18BAE843825751D58DC6B90D43963A9D67C (InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534 * __this, float ___time0, const RuntimeMethod* method)
{
	{
		// if (!HasEyeGaze)
		bool L_0;
		L_0 = InputAnimation_get_HasEyeGaze_mF0D54413FEBDD201EA28ACCA9ADC438124EF0A3F_inline(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		// return new Ray(Vector3.zero, Vector3.forward);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Vector3_get_forward_m3082920F8A24AA02E4F542B6771EB0B63A91AC90(/*hidden argument*/NULL);
		Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  L_3;
		memset((&L_3), 0, sizeof(L_3));
		Ray__ctor_m75B1F651FF47EE6B887105101B7DA61CBF41F83C((&L_3), L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}

IL_0018:
	{
		// return gazeCurves.Evaluate(time);
		RayCurves_tE200BC10F2980B31D68E54E46BB6EB32508F5604 * L_4 = __this->get_gazeCurves_9();
		float L_5 = ___time0;
		NullCheck(L_4);
		Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  L_6;
		L_6 = RayCurves_Evaluate_m21DD656F2ECD2B16C12769F1E2B98AD4B24D8BFF(L_4, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// Microsoft.MixedReality.Toolkit.Input.InputAnimation Microsoft.MixedReality.Toolkit.Input.InputAnimation::FromRecordingBuffer(Microsoft.MixedReality.Toolkit.Input.InputRecordingBuffer,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputRecordingProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534 * InputAnimation_FromRecordingBuffer_mD3D70E27E73C4FEE4CC86F8D1B66D9297E92969A (InputRecordingBuffer_tA6CEDA373266AD73D32A749E89D2D87FD6635E4F * ___recordingBuffer0, MixedRealityInputRecordingProfile_t56C7B027300F96474C48A61DF0A7EFAA8E41EA91 * ___profile1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t8BDEE2CC264A0B305BB010E90D0BADB1A42FD86F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackedHandJointU5BU5D_tFA1152B947AB07ACF1DFE43B4A96139E3340B76F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackedHandJoint_tFDADC49BA87BC6CBE390A69B0CC80925BAA37FD6_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534 * V_0 = NULL;
	float V_1 = 0.0f;
	RuntimeObject* V_2 = NULL;
	Keyframe_tB3167A15EF7CB57AA5C8498D640C6254A16F5B3F * V_3 = NULL;
	float V_4 = 0.0f;
	TrackedHandJointU5BU5D_tFA1152B947AB07ACF1DFE43B4A96139E3340B76F* V_5 = NULL;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// var animation = new InputAnimation();
		InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534 * L_0 = (InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534 *)il2cpp_codegen_object_new(InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534_il2cpp_TypeInfo_var);
		InputAnimation__ctor_m28B0D9BF6E035B158B8E1A48A33862B7DDE1123D(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		// float startTime = recordingBuffer.StartTime;
		InputRecordingBuffer_tA6CEDA373266AD73D32A749E89D2D87FD6635E4F * L_1 = ___recordingBuffer0;
		NullCheck(L_1);
		float L_2;
		L_2 = InputRecordingBuffer_get_StartTime_m3352753447E86DC9C0C9FBF5D668781AEC63FA78(L_1, /*hidden argument*/NULL);
		V_1 = L_2;
		// animation.HasHandData = profile.RecordHandData;
		InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534 * L_3 = V_0;
		MixedRealityInputRecordingProfile_t56C7B027300F96474C48A61DF0A7EFAA8E41EA91 * L_4 = ___profile1;
		NullCheck(L_4);
		bool L_5;
		L_5 = MixedRealityInputRecordingProfile_get_RecordHandData_mFD612DB88512A750FF0D12D05DA06E423EB1E384_inline(L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		InputAnimation_set_HasHandData_m6D908DF23EF21B692A3FB1C9E41C8F157B1B844E_inline(L_3, L_5, /*hidden argument*/NULL);
		// animation.HasCameraPose = profile.RecordCameraPose;
		InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534 * L_6 = V_0;
		MixedRealityInputRecordingProfile_t56C7B027300F96474C48A61DF0A7EFAA8E41EA91 * L_7 = ___profile1;
		NullCheck(L_7);
		bool L_8;
		L_8 = MixedRealityInputRecordingProfile_get_RecordCameraPose_m7BA79D3B22E44E686AA955C56072F7A6716FED72_inline(L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		InputAnimation_set_HasCameraPose_mCF43237A57330A40150937CD555F8F46A2FABEB1_inline(L_6, L_8, /*hidden argument*/NULL);
		// animation.HasEyeGaze = profile.RecordEyeGaze;
		InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534 * L_9 = V_0;
		MixedRealityInputRecordingProfile_t56C7B027300F96474C48A61DF0A7EFAA8E41EA91 * L_10 = ___profile1;
		NullCheck(L_10);
		bool L_11;
		L_11 = MixedRealityInputRecordingProfile_get_RecordEyeGaze_m9DA2CB6AF1179E5AA1A466E15292817DF3F61B54_inline(L_10, /*hidden argument*/NULL);
		NullCheck(L_9);
		InputAnimation_set_HasEyeGaze_m1AA6396ADD8FDA4A8564A76F26E2274BBC650F8D_inline(L_9, L_11, /*hidden argument*/NULL);
		// foreach (var keyframe in recordingBuffer)
		InputRecordingBuffer_tA6CEDA373266AD73D32A749E89D2D87FD6635E4F * L_12 = ___recordingBuffer0;
		NullCheck(L_12);
		RuntimeObject* L_13;
		L_13 = InputRecordingBuffer_GetEnumerator_m2AB791EA1C66FA0DB04242DA0D062B53A520472E(L_12, /*hidden argument*/NULL);
		V_2 = L_13;
	}

IL_0038:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0135;
		}

IL_003d:
		{
			// foreach (var keyframe in recordingBuffer)
			RuntimeObject* L_14 = V_2;
			NullCheck(L_14);
			Keyframe_tB3167A15EF7CB57AA5C8498D640C6254A16F5B3F * L_15;
			L_15 = InterfaceFuncInvoker0< Keyframe_tB3167A15EF7CB57AA5C8498D640C6254A16F5B3F * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Microsoft.MixedReality.Toolkit.Input.InputRecordingBuffer/Keyframe>::get_Current() */, IEnumerator_1_t8BDEE2CC264A0B305BB010E90D0BADB1A42FD86F_il2cpp_TypeInfo_var, L_14);
			V_3 = L_15;
			// float localTime = keyframe.Time - startTime;
			Keyframe_tB3167A15EF7CB57AA5C8498D640C6254A16F5B3F * L_16 = V_3;
			NullCheck(L_16);
			float L_17;
			L_17 = Keyframe_get_Time_mA05D121FA2658A8A2C65307A5FE7F95518D4DDDA_inline(L_16, /*hidden argument*/NULL);
			float L_18 = V_1;
			V_4 = ((float)il2cpp_codegen_subtract((float)L_17, (float)L_18));
			// if (profile.RecordHandData)
			MixedRealityInputRecordingProfile_t56C7B027300F96474C48A61DF0A7EFAA8E41EA91 * L_19 = ___profile1;
			NullCheck(L_19);
			bool L_20;
			L_20 = MixedRealityInputRecordingProfile_get_RecordHandData_mFD612DB88512A750FF0D12D05DA06E423EB1E384_inline(L_19, /*hidden argument*/NULL);
			if (!L_20)
			{
				goto IL_00ff;
			}
		}

IL_0059:
		{
			// AddBoolKeyIfChanged(animation.handTrackedCurveLeft, localTime, keyframe.LeftTracked);
			InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534 * L_21 = V_0;
			NullCheck(L_21);
			AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_22 = L_21->get_handTrackedCurveLeft_2();
			float L_23 = V_4;
			Keyframe_tB3167A15EF7CB57AA5C8498D640C6254A16F5B3F * L_24 = V_3;
			NullCheck(L_24);
			bool L_25;
			L_25 = Keyframe_get_LeftTracked_m06A036923EED4E646B10D9EF8295828572A9F04B_inline(L_24, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534_il2cpp_TypeInfo_var);
			InputAnimation_U3CFromRecordingBufferU3Eg__AddBoolKeyIfChangedU7C48_0_m6DD6E7FDFB23A7DCBC45DE3510A1AE9390D5765E(L_22, L_23, L_25, /*hidden argument*/NULL);
			// AddBoolKeyIfChanged(animation.handTrackedCurveRight, localTime, keyframe.RightTracked);
			InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534 * L_26 = V_0;
			NullCheck(L_26);
			AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_27 = L_26->get_handTrackedCurveRight_3();
			float L_28 = V_4;
			Keyframe_tB3167A15EF7CB57AA5C8498D640C6254A16F5B3F * L_29 = V_3;
			NullCheck(L_29);
			bool L_30;
			L_30 = Keyframe_get_RightTracked_mA19B3CB09A5A298D8984AF70938194E77B57F4BC_inline(L_29, /*hidden argument*/NULL);
			InputAnimation_U3CFromRecordingBufferU3Eg__AddBoolKeyIfChangedU7C48_0_m6DD6E7FDFB23A7DCBC45DE3510A1AE9390D5765E(L_27, L_28, L_30, /*hidden argument*/NULL);
			// AddBoolKeyIfChanged(animation.handPinchCurveLeft, localTime, keyframe.LeftPinch);
			InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534 * L_31 = V_0;
			NullCheck(L_31);
			AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_32 = L_31->get_handPinchCurveLeft_4();
			float L_33 = V_4;
			Keyframe_tB3167A15EF7CB57AA5C8498D640C6254A16F5B3F * L_34 = V_3;
			NullCheck(L_34);
			bool L_35;
			L_35 = Keyframe_get_LeftPinch_m435C11D6968B044F42A375EE28AF3020AD9091DE_inline(L_34, /*hidden argument*/NULL);
			InputAnimation_U3CFromRecordingBufferU3Eg__AddBoolKeyIfChangedU7C48_0_m6DD6E7FDFB23A7DCBC45DE3510A1AE9390D5765E(L_32, L_33, L_35, /*hidden argument*/NULL);
			// AddBoolKeyIfChanged(animation.handPinchCurveRight, localTime, keyframe.RightPinch);
			InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534 * L_36 = V_0;
			NullCheck(L_36);
			AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_37 = L_36->get_handPinchCurveRight_5();
			float L_38 = V_4;
			Keyframe_tB3167A15EF7CB57AA5C8498D640C6254A16F5B3F * L_39 = V_3;
			NullCheck(L_39);
			bool L_40;
			L_40 = Keyframe_get_RightPinch_mF6869CC9BC0751EFE2B3B527318ACD483E997386_inline(L_39, /*hidden argument*/NULL);
			InputAnimation_U3CFromRecordingBufferU3Eg__AddBoolKeyIfChangedU7C48_0_m6DD6E7FDFB23A7DCBC45DE3510A1AE9390D5765E(L_37, L_38, L_40, /*hidden argument*/NULL);
			// foreach (var joint in (TrackedHandJoint[]) Enum.GetValues(typeof(TrackedHandJoint)))
			RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_41 = { reinterpret_cast<intptr_t> (TrackedHandJoint_tFDADC49BA87BC6CBE390A69B0CC80925BAA37FD6_0_0_0_var) };
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_42;
			L_42 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_41, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var);
			RuntimeArray * L_43;
			L_43 = Enum_GetValues_m8EEC6B32F297FDB2F7375DC8B197E0E1AB8643BD(L_42, /*hidden argument*/NULL);
			V_5 = ((TrackedHandJointU5BU5D_tFA1152B947AB07ACF1DFE43B4A96139E3340B76F*)Castclass((RuntimeObject*)L_43, TrackedHandJointU5BU5D_tFA1152B947AB07ACF1DFE43B4A96139E3340B76F_il2cpp_TypeInfo_var));
			V_6 = 0;
			goto IL_00f7;
		}

IL_00c0:
		{
			// foreach (var joint in (TrackedHandJoint[]) Enum.GetValues(typeof(TrackedHandJoint)))
			TrackedHandJointU5BU5D_tFA1152B947AB07ACF1DFE43B4A96139E3340B76F* L_44 = V_5;
			int32_t L_45 = V_6;
			NullCheck(L_44);
			int32_t L_46 = L_45;
			int32_t L_47 = (int32_t)(L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_46));
			V_7 = L_47;
			// AddJointPoseKeys(animation.handJointCurvesLeft, keyframe.LeftJoints, joint, localTime);
			InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534 * L_48 = V_0;
			NullCheck(L_48);
			Dictionary_2_tF3976454D4ACA03F9E231469CB7AA87B3D4745B0 * L_49 = L_48->get_handJointCurvesLeft_6();
			Keyframe_tB3167A15EF7CB57AA5C8498D640C6254A16F5B3F * L_50 = V_3;
			NullCheck(L_50);
			Dictionary_2_tABC45B7C67E921F533EBEF222CFE2B891AA1E098 * L_51;
			L_51 = Keyframe_get_LeftJoints_m82B2A30643E9897737F81EF37C7601C4C6018816_inline(L_50, /*hidden argument*/NULL);
			int32_t L_52 = V_7;
			float L_53 = V_4;
			IL2CPP_RUNTIME_CLASS_INIT(InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534_il2cpp_TypeInfo_var);
			InputAnimation_U3CFromRecordingBufferU3Eg__AddJointPoseKeysU7C48_1_m958AFA63F52583CAF3271470A52628DAB93F494A(L_49, L_51, L_52, L_53, /*hidden argument*/NULL);
			// AddJointPoseKeys(animation.handJointCurvesRight, keyframe.RightJoints, joint, localTime);
			InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534 * L_54 = V_0;
			NullCheck(L_54);
			Dictionary_2_tF3976454D4ACA03F9E231469CB7AA87B3D4745B0 * L_55 = L_54->get_handJointCurvesRight_7();
			Keyframe_tB3167A15EF7CB57AA5C8498D640C6254A16F5B3F * L_56 = V_3;
			NullCheck(L_56);
			Dictionary_2_tABC45B7C67E921F533EBEF222CFE2B891AA1E098 * L_57;
			L_57 = Keyframe_get_RightJoints_mDBD54F5919D9FFE32E616059DA0198099C686006_inline(L_56, /*hidden argument*/NULL);
			int32_t L_58 = V_7;
			float L_59 = V_4;
			InputAnimation_U3CFromRecordingBufferU3Eg__AddJointPoseKeysU7C48_1_m958AFA63F52583CAF3271470A52628DAB93F494A(L_55, L_57, L_58, L_59, /*hidden argument*/NULL);
			int32_t L_60 = V_6;
			V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_60, (int32_t)1));
		}

IL_00f7:
		{
			// foreach (var joint in (TrackedHandJoint[]) Enum.GetValues(typeof(TrackedHandJoint)))
			int32_t L_61 = V_6;
			TrackedHandJointU5BU5D_tFA1152B947AB07ACF1DFE43B4A96139E3340B76F* L_62 = V_5;
			NullCheck(L_62);
			if ((((int32_t)L_61) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_62)->max_length))))))
			{
				goto IL_00c0;
			}
		}

IL_00ff:
		{
			// if (profile.RecordCameraPose)
			MixedRealityInputRecordingProfile_t56C7B027300F96474C48A61DF0A7EFAA8E41EA91 * L_63 = ___profile1;
			NullCheck(L_63);
			bool L_64;
			L_64 = MixedRealityInputRecordingProfile_get_RecordCameraPose_m7BA79D3B22E44E686AA955C56072F7A6716FED72_inline(L_63, /*hidden argument*/NULL);
			if (!L_64)
			{
				goto IL_011a;
			}
		}

IL_0107:
		{
			// animation.cameraCurves.AddKey(localTime, keyframe.CameraPose);
			InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534 * L_65 = V_0;
			NullCheck(L_65);
			PoseCurves_t14269C65E2E6B6A532EF4AC78324976DF2587501 * L_66 = L_65->get_cameraCurves_8();
			float L_67 = V_4;
			Keyframe_tB3167A15EF7CB57AA5C8498D640C6254A16F5B3F * L_68 = V_3;
			NullCheck(L_68);
			MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99  L_69;
			L_69 = Keyframe_get_CameraPose_mF080ABD993EE172F211C241D25B110A85EF9FD41_inline(L_68, /*hidden argument*/NULL);
			NullCheck(L_66);
			PoseCurves_AddKey_mCDBC851FE2A5B7616E44760E106B1FA334919A23(L_66, L_67, L_69, /*hidden argument*/NULL);
		}

IL_011a:
		{
			// if (profile.RecordEyeGaze)
			MixedRealityInputRecordingProfile_t56C7B027300F96474C48A61DF0A7EFAA8E41EA91 * L_70 = ___profile1;
			NullCheck(L_70);
			bool L_71;
			L_71 = MixedRealityInputRecordingProfile_get_RecordEyeGaze_m9DA2CB6AF1179E5AA1A466E15292817DF3F61B54_inline(L_70, /*hidden argument*/NULL);
			if (!L_71)
			{
				goto IL_0135;
			}
		}

IL_0122:
		{
			// animation.gazeCurves.AddKey(localTime, keyframe.GazeRay);
			InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534 * L_72 = V_0;
			NullCheck(L_72);
			RayCurves_tE200BC10F2980B31D68E54E46BB6EB32508F5604 * L_73 = L_72->get_gazeCurves_9();
			float L_74 = V_4;
			Keyframe_tB3167A15EF7CB57AA5C8498D640C6254A16F5B3F * L_75 = V_3;
			NullCheck(L_75);
			Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  L_76;
			L_76 = Keyframe_get_GazeRay_m655743341B0DB5FD8AC0337E45D5A47698FEE0EA_inline(L_75, /*hidden argument*/NULL);
			NullCheck(L_73);
			RayCurves_AddKey_mAFB13BC4355C99BBA18D4AAD1AB29F1D68B14A4C(L_73, L_74, L_76, /*hidden argument*/NULL);
		}

IL_0135:
		{
			// foreach (var keyframe in recordingBuffer)
			RuntimeObject* L_77 = V_2;
			NullCheck(L_77);
			bool L_78;
			L_78 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_77);
			if (L_78)
			{
				goto IL_003d;
			}
		}

IL_0140:
		{
			IL2CPP_LEAVE(0x14C, FINALLY_0142);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0142;
	}

FINALLY_0142:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_79 = V_2;
			if (!L_79)
			{
				goto IL_014b;
			}
		}

IL_0145:
		{
			RuntimeObject* L_80 = V_2;
			NullCheck(L_80);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_80);
		}

IL_014b:
		{
			IL2CPP_END_FINALLY(322)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(322)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x14C, IL_014c)
	}

IL_014c:
	{
		// animation.Optimize(profile);
		InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534 * L_81 = V_0;
		MixedRealityInputRecordingProfile_t56C7B027300F96474C48A61DF0A7EFAA8E41EA91 * L_82 = ___profile1;
		NullCheck(L_81);
		InputAnimation_Optimize_mB952F656C1FDD57F4231434FD3144CD6DA899EA8(L_81, L_82, /*hidden argument*/NULL);
		// animation.ComputeDuration();
		InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534 * L_83 = V_0;
		NullCheck(L_83);
		InputAnimation_ComputeDuration_m263C0BC7A120F0DB400694C98E53511C4F46162B(L_83, /*hidden argument*/NULL);
		// return animation;
		InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534 * L_84 = V_0;
		return L_84;
	}
}
// Microsoft.MixedReality.Toolkit.Input.InputAnimation Microsoft.MixedReality.Toolkit.Input.InputAnimation::FromStream(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534 * InputAnimation_FromStream_m4FDB4487C81F5EF397057832DC89C04A0A962CCC (Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___stream0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mBABE943B5031B118F97BF59E84A11816B6039FB1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mA86A48F1F8E01B36CF0D80C36B3C67755D6D00BE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputAnimationSerializationUtils_tBF0CF9A1A3138FAC30FF8F17528259A9C7A31560_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PoseCurves_t14269C65E2E6B6A532EF4AC78324976DF2587501_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2C1AA484EA907D9AF79CB68FD3615B8BA6AFA10B);
		s_Il2CppMethodInitialized = true;
	}
	InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534 * V_0 = NULL;
	BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128 * V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	bool V_6 = false;
	int32_t V_7 = 0;
	PoseCurves_t14269C65E2E6B6A532EF4AC78324976DF2587501 * V_8 = NULL;
	int32_t V_9 = 0;
	PoseCurves_t14269C65E2E6B6A532EF4AC78324976DF2587501 * V_10 = NULL;
	int32_t G_B9_0 = 0;
	{
		// var animation = new InputAnimation();
		InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534 * L_0 = (InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534 *)il2cpp_codegen_object_new(InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534_il2cpp_TypeInfo_var);
		InputAnimation__ctor_m28B0D9BF6E035B158B8E1A48A33862B7DDE1123D(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		// var reader = new BinaryReader(stream);
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_1 = ___stream0;
		BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128 * L_2 = (BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128 *)il2cpp_codegen_object_new(BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128_il2cpp_TypeInfo_var);
		BinaryReader__ctor_m8D2F966D44EF5BD30D54D94653A831EFDB9C6A60(L_2, L_1, /*hidden argument*/NULL);
		V_1 = L_2;
		// InputAnimationSerializationUtils.ReadHeader(reader, out int versionMajor, out int versionMinor);
		BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128 * L_3 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InputAnimationSerializationUtils_tBF0CF9A1A3138FAC30FF8F17528259A9C7A31560_il2cpp_TypeInfo_var);
		InputAnimationSerializationUtils_ReadHeader_mD6A04D247F935A880FBFC506C3F3496E054AF66E(L_3, (int32_t*)(&V_2), (int32_t*)(&V_3), /*hidden argument*/NULL);
		// int latestVersionMajor = InputAnimationSerializationUtils.VersionMajor;
		V_4 = 1;
		// int latestVersionMinor = InputAnimationSerializationUtils.VersionMinor;
		V_5 = 1;
		// if (versionMajor > latestVersionMajor || versionMajor == latestVersionMajor && versionMinor > latestVersionMinor)
		int32_t L_4 = V_2;
		int32_t L_5 = V_4;
		if ((((int32_t)L_4) > ((int32_t)L_5)))
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_6 = V_2;
		int32_t L_7 = V_4;
		if ((!(((uint32_t)L_6) == ((uint32_t)L_7))))
		{
			goto IL_004b;
		}
	}
	{
		int32_t L_8 = V_3;
		int32_t L_9 = V_5;
		if ((((int32_t)L_8) <= ((int32_t)L_9)))
		{
			goto IL_004b;
		}
	}

IL_002c:
	{
		// Debug.LogError($"Only version {latestVersionMajor}.{latestVersionMinor} and earlier of input animation file format is supported.");
		int32_t L_10 = V_4;
		int32_t L_11 = L_10;
		RuntimeObject * L_12 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_11);
		int32_t L_13 = V_5;
		int32_t L_14 = L_13;
		RuntimeObject * L_15 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_14);
		String_t* L_16;
		L_16 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66(_stringLiteral2C1AA484EA907D9AF79CB68FD3615B8BA6AFA10B, L_12, L_15, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(L_16, /*hidden argument*/NULL);
		// return animation;
		InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534 * L_17 = V_0;
		return L_17;
	}

IL_004b:
	{
		// bool useNewFormat = versionMajor > 1 || versionMajor == 1 && versionMinor >= 1;
		int32_t L_18 = V_2;
		if ((((int32_t)L_18) > ((int32_t)1)))
		{
			goto IL_005f;
		}
	}
	{
		int32_t L_19 = V_2;
		if ((!(((uint32_t)L_19) == ((uint32_t)1))))
		{
			goto IL_005c;
		}
	}
	{
		int32_t L_20 = V_3;
		G_B9_0 = ((((int32_t)((((int32_t)L_20) < ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0060;
	}

IL_005c:
	{
		G_B9_0 = 0;
		goto IL_0060;
	}

IL_005f:
	{
		G_B9_0 = 1;
	}

IL_0060:
	{
		V_6 = (bool)G_B9_0;
		// if (useNewFormat)
		bool L_21 = V_6;
		if (!L_21)
		{
			goto IL_008c;
		}
	}
	{
		// animation.HasCameraPose = reader.ReadBoolean();
		InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534 * L_22 = V_0;
		BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128 * L_23 = V_1;
		NullCheck(L_23);
		bool L_24;
		L_24 = VirtFuncInvoker0< bool >::Invoke(9 /* System.Boolean System.IO.BinaryReader::ReadBoolean() */, L_23);
		NullCheck(L_22);
		InputAnimation_set_HasCameraPose_mCF43237A57330A40150937CD555F8F46A2FABEB1_inline(L_22, L_24, /*hidden argument*/NULL);
		// animation.HasHandData = reader.ReadBoolean();
		InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534 * L_25 = V_0;
		BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128 * L_26 = V_1;
		NullCheck(L_26);
		bool L_27;
		L_27 = VirtFuncInvoker0< bool >::Invoke(9 /* System.Boolean System.IO.BinaryReader::ReadBoolean() */, L_26);
		NullCheck(L_25);
		InputAnimation_set_HasHandData_m6D908DF23EF21B692A3FB1C9E41C8F157B1B844E_inline(L_25, L_27, /*hidden argument*/NULL);
		// animation.HasEyeGaze = reader.ReadBoolean();
		InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534 * L_28 = V_0;
		BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128 * L_29 = V_1;
		NullCheck(L_29);
		bool L_30;
		L_30 = VirtFuncInvoker0< bool >::Invoke(9 /* System.Boolean System.IO.BinaryReader::ReadBoolean() */, L_29);
		NullCheck(L_28);
		InputAnimation_set_HasEyeGaze_m1AA6396ADD8FDA4A8564A76F26E2274BBC650F8D_inline(L_28, L_30, /*hidden argument*/NULL);
		// }
		goto IL_00a1;
	}

IL_008c:
	{
		// animation.HasCameraPose = true;
		InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534 * L_31 = V_0;
		NullCheck(L_31);
		InputAnimation_set_HasCameraPose_mCF43237A57330A40150937CD555F8F46A2FABEB1_inline(L_31, (bool)1, /*hidden argument*/NULL);
		// animation.HasHandData = true;
		InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534 * L_32 = V_0;
		NullCheck(L_32);
		InputAnimation_set_HasHandData_m6D908DF23EF21B692A3FB1C9E41C8F157B1B844E_inline(L_32, (bool)1, /*hidden argument*/NULL);
		// animation.HasEyeGaze = false;
		InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534 * L_33 = V_0;
		NullCheck(L_33);
		InputAnimation_set_HasEyeGaze_m1AA6396ADD8FDA4A8564A76F26E2274BBC650F8D_inline(L_33, (bool)0, /*hidden argument*/NULL);
	}

IL_00a1:
	{
		// if (animation.HasCameraPose)
		InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534 * L_34 = V_0;
		NullCheck(L_34);
		bool L_35;
		L_35 = InputAnimation_get_HasCameraPose_m3A7978ABCB573725268205D06F9F524A2CD72D9A_inline(L_34, /*hidden argument*/NULL);
		if (!L_35)
		{
			goto IL_00b7;
		}
	}
	{
		// PoseCurvesFromStream(reader, animation.cameraCurves, useNewFormat);
		BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128 * L_36 = V_1;
		InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534 * L_37 = V_0;
		NullCheck(L_37);
		PoseCurves_t14269C65E2E6B6A532EF4AC78324976DF2587501 * L_38 = L_37->get_cameraCurves_8();
		bool L_39 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534_il2cpp_TypeInfo_var);
		InputAnimation_PoseCurvesFromStream_m9A4B6484E477E7437330F0E77192E74AB25BE9F2(L_36, L_38, L_39, /*hidden argument*/NULL);
	}

IL_00b7:
	{
		// if (animation.HasHandData)
		InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534 * L_40 = V_0;
		NullCheck(L_40);
		bool L_41;
		L_41 = InputAnimation_get_HasHandData_mE585DBE196E292F83610C5810E569A172143D373_inline(L_40, /*hidden argument*/NULL);
		if (!L_41)
		{
			goto IL_017c;
		}
	}
	{
		// InputAnimationSerializationUtils.ReadBoolCurve(reader, animation.handTrackedCurveLeft);
		BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128 * L_42 = V_1;
		InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534 * L_43 = V_0;
		NullCheck(L_43);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_44 = L_43->get_handTrackedCurveLeft_2();
		IL2CPP_RUNTIME_CLASS_INIT(InputAnimationSerializationUtils_tBF0CF9A1A3138FAC30FF8F17528259A9C7A31560_il2cpp_TypeInfo_var);
		InputAnimationSerializationUtils_ReadBoolCurve_m085FFC6E15B09C8E7648FF91356151F7FA006240(L_42, L_44, /*hidden argument*/NULL);
		// InputAnimationSerializationUtils.ReadBoolCurve(reader, animation.handTrackedCurveRight);
		BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128 * L_45 = V_1;
		InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534 * L_46 = V_0;
		NullCheck(L_46);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_47 = L_46->get_handTrackedCurveRight_3();
		InputAnimationSerializationUtils_ReadBoolCurve_m085FFC6E15B09C8E7648FF91356151F7FA006240(L_45, L_47, /*hidden argument*/NULL);
		// InputAnimationSerializationUtils.ReadBoolCurve(reader, animation.handPinchCurveLeft);
		BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128 * L_48 = V_1;
		InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534 * L_49 = V_0;
		NullCheck(L_49);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_50 = L_49->get_handPinchCurveLeft_4();
		InputAnimationSerializationUtils_ReadBoolCurve_m085FFC6E15B09C8E7648FF91356151F7FA006240(L_48, L_50, /*hidden argument*/NULL);
		// InputAnimationSerializationUtils.ReadBoolCurve(reader, animation.handPinchCurveRight);
		BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128 * L_51 = V_1;
		InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534 * L_52 = V_0;
		NullCheck(L_52);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_53 = L_52->get_handPinchCurveRight_5();
		InputAnimationSerializationUtils_ReadBoolCurve_m085FFC6E15B09C8E7648FF91356151F7FA006240(L_51, L_53, /*hidden argument*/NULL);
		// for (int i = 0; i < jointCount; ++i)
		V_7 = 0;
		goto IL_012e;
	}

IL_00f7:
	{
		// if (!animation.handJointCurvesLeft.TryGetValue((TrackedHandJoint) i, out var curves))
		InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534 * L_54 = V_0;
		NullCheck(L_54);
		Dictionary_2_tF3976454D4ACA03F9E231469CB7AA87B3D4745B0 * L_55 = L_54->get_handJointCurvesLeft_6();
		int32_t L_56 = V_7;
		NullCheck(L_55);
		bool L_57;
		L_57 = Dictionary_2_TryGetValue_mA86A48F1F8E01B36CF0D80C36B3C67755D6D00BE(L_55, L_56, (PoseCurves_t14269C65E2E6B6A532EF4AC78324976DF2587501 **)(&V_8), /*hidden argument*/Dictionary_2_TryGetValue_mA86A48F1F8E01B36CF0D80C36B3C67755D6D00BE_RuntimeMethod_var);
		if (L_57)
		{
			goto IL_011e;
		}
	}
	{
		// curves = new PoseCurves();
		PoseCurves_t14269C65E2E6B6A532EF4AC78324976DF2587501 * L_58 = (PoseCurves_t14269C65E2E6B6A532EF4AC78324976DF2587501 *)il2cpp_codegen_object_new(PoseCurves_t14269C65E2E6B6A532EF4AC78324976DF2587501_il2cpp_TypeInfo_var);
		PoseCurves__ctor_mAB903C4BE542C0D296D2BD8ED4316E7C56718BE4(L_58, /*hidden argument*/NULL);
		V_8 = L_58;
		// animation.handJointCurvesLeft.Add((TrackedHandJoint) i, curves);
		InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534 * L_59 = V_0;
		NullCheck(L_59);
		Dictionary_2_tF3976454D4ACA03F9E231469CB7AA87B3D4745B0 * L_60 = L_59->get_handJointCurvesLeft_6();
		int32_t L_61 = V_7;
		PoseCurves_t14269C65E2E6B6A532EF4AC78324976DF2587501 * L_62 = V_8;
		NullCheck(L_60);
		Dictionary_2_Add_mBABE943B5031B118F97BF59E84A11816B6039FB1(L_60, L_61, L_62, /*hidden argument*/Dictionary_2_Add_mBABE943B5031B118F97BF59E84A11816B6039FB1_RuntimeMethod_var);
	}

IL_011e:
	{
		// PoseCurvesFromStream(reader, curves, useNewFormat);
		BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128 * L_63 = V_1;
		PoseCurves_t14269C65E2E6B6A532EF4AC78324976DF2587501 * L_64 = V_8;
		bool L_65 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534_il2cpp_TypeInfo_var);
		InputAnimation_PoseCurvesFromStream_m9A4B6484E477E7437330F0E77192E74AB25BE9F2(L_63, L_64, L_65, /*hidden argument*/NULL);
		// for (int i = 0; i < jointCount; ++i)
		int32_t L_66 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_66, (int32_t)1));
	}

IL_012e:
	{
		// for (int i = 0; i < jointCount; ++i)
		int32_t L_67 = V_7;
		IL2CPP_RUNTIME_CLASS_INIT(InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534_il2cpp_TypeInfo_var);
		int32_t L_68 = ((InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534_StaticFields*)il2cpp_codegen_static_fields_for(InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534_il2cpp_TypeInfo_var))->get_jointCount_0();
		if ((((int32_t)L_67) < ((int32_t)L_68)))
		{
			goto IL_00f7;
		}
	}
	{
		// for (int i = 0; i < jointCount; ++i)
		V_9 = 0;
		goto IL_0173;
	}

IL_013c:
	{
		// if (!animation.handJointCurvesRight.TryGetValue(key: (TrackedHandJoint) i, out var curves))
		InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534 * L_69 = V_0;
		NullCheck(L_69);
		Dictionary_2_tF3976454D4ACA03F9E231469CB7AA87B3D4745B0 * L_70 = L_69->get_handJointCurvesRight_7();
		int32_t L_71 = V_9;
		NullCheck(L_70);
		bool L_72;
		L_72 = Dictionary_2_TryGetValue_mA86A48F1F8E01B36CF0D80C36B3C67755D6D00BE(L_70, L_71, (PoseCurves_t14269C65E2E6B6A532EF4AC78324976DF2587501 **)(&V_10), /*hidden argument*/Dictionary_2_TryGetValue_mA86A48F1F8E01B36CF0D80C36B3C67755D6D00BE_RuntimeMethod_var);
		if (L_72)
		{
			goto IL_0163;
		}
	}
	{
		// curves = new PoseCurves();
		PoseCurves_t14269C65E2E6B6A532EF4AC78324976DF2587501 * L_73 = (PoseCurves_t14269C65E2E6B6A532EF4AC78324976DF2587501 *)il2cpp_codegen_object_new(PoseCurves_t14269C65E2E6B6A532EF4AC78324976DF2587501_il2cpp_TypeInfo_var);
		PoseCurves__ctor_mAB903C4BE542C0D296D2BD8ED4316E7C56718BE4(L_73, /*hidden argument*/NULL);
		V_10 = L_73;
		// animation.handJointCurvesRight.Add((TrackedHandJoint) i, curves);
		InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534 * L_74 = V_0;
		NullCheck(L_74);
		Dictionary_2_tF3976454D4ACA03F9E231469CB7AA87B3D4745B0 * L_75 = L_74->get_handJointCurvesRight_7();
		int32_t L_76 = V_9;
		PoseCurves_t14269C65E2E6B6A532EF4AC78324976DF2587501 * L_77 = V_10;
		NullCheck(L_75);
		Dictionary_2_Add_mBABE943B5031B118F97BF59E84A11816B6039FB1(L_75, L_76, L_77, /*hidden argument*/Dictionary_2_Add_mBABE943B5031B118F97BF59E84A11816B6039FB1_RuntimeMethod_var);
	}

IL_0163:
	{
		// PoseCurvesFromStream(reader, curves, useNewFormat);
		BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128 * L_78 = V_1;
		PoseCurves_t14269C65E2E6B6A532EF4AC78324976DF2587501 * L_79 = V_10;
		bool L_80 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534_il2cpp_TypeInfo_var);
		InputAnimation_PoseCurvesFromStream_m9A4B6484E477E7437330F0E77192E74AB25BE9F2(L_78, L_79, L_80, /*hidden argument*/NULL);
		// for (int i = 0; i < jointCount; ++i)
		int32_t L_81 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_81, (int32_t)1));
	}

IL_0173:
	{
		// for (int i = 0; i < jointCount; ++i)
		int32_t L_82 = V_9;
		IL2CPP_RUNTIME_CLASS_INIT(InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534_il2cpp_TypeInfo_var);
		int32_t L_83 = ((InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534_StaticFields*)il2cpp_codegen_static_fields_for(InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534_il2cpp_TypeInfo_var))->get_jointCount_0();
		if ((((int32_t)L_82) < ((int32_t)L_83)))
		{
			goto IL_013c;
		}
	}

IL_017c:
	{
		// if (animation.HasEyeGaze)
		InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534 * L_84 = V_0;
		NullCheck(L_84);
		bool L_85;
		L_85 = InputAnimation_get_HasEyeGaze_mF0D54413FEBDD201EA28ACCA9ADC438124EF0A3F_inline(L_84, /*hidden argument*/NULL);
		if (!L_85)
		{
			goto IL_0192;
		}
	}
	{
		// RayCurvesFromStream(reader, animation.gazeCurves, useNewFormat);
		BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128 * L_86 = V_1;
		InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534 * L_87 = V_0;
		NullCheck(L_87);
		RayCurves_tE200BC10F2980B31D68E54E46BB6EB32508F5604 * L_88 = L_87->get_gazeCurves_9();
		bool L_89 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534_il2cpp_TypeInfo_var);
		InputAnimation_RayCurvesFromStream_m4D60874833E1E5B4C12F087B9668F4DD4DD85FE0(L_86, L_88, L_89, /*hidden argument*/NULL);
	}

IL_0192:
	{
		// InputAnimationSerializationUtils.ReadMarkerList(reader, animation.markers);
		BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128 * L_90 = V_1;
		InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534 * L_91 = V_0;
		NullCheck(L_91);
		List_1_tAAD05033EDA4EAF37AE770A3EDAB1B555706FEFD * L_92 = L_91->get_markers_13();
		IL2CPP_RUNTIME_CLASS_INIT(InputAnimationSerializationUtils_tBF0CF9A1A3138FAC30FF8F17528259A9C7A31560_il2cpp_TypeInfo_var);
		InputAnimationSerializationUtils_ReadMarkerList_m30B0FE2E589012E1705B773388E6DAFE6D7E852C(L_90, L_92, /*hidden argument*/NULL);
		// animation.ComputeDuration();
		InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534 * L_93 = V_0;
		NullCheck(L_93);
		InputAnimation_ComputeDuration_m263C0BC7A120F0DB400694C98E53511C4F46162B(L_93, /*hidden argument*/NULL);
		// return animation;
		InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534 * L_94 = V_0;
		return L_94;
	}
}
// System.Threading.Tasks.Task`1<Microsoft.MixedReality.Toolkit.Input.InputAnimation> Microsoft.MixedReality.Toolkit.Input.InputAnimation::FromStreamAsync(System.IO.Stream,System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tB231B84F8F2E5D004D7EE56C7AC413E80914BC74 * InputAnimation_FromStreamAsync_m0608DCABFDDFFEFA24A172C4462F6A3321711923 (Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___stream0, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___callback1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Create_m0922E4F71FBE68393EFE1CB2DF6B0CC1E8750311_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Start_TisU3CFromStreamAsyncU3Ed__50_t0BAABAB4A343E3F573925043CD5CA6AE4597B105_m930F216CA1D8F5030881615AC47D2A6200A0339D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_get_Task_m8EE8D2BE14C6B9E58020C428066962B1CBC1D617_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_tF3202EB14A45BB67CE82B3124E365B8DEFF9BF80_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CFromStreamAsyncU3Ed__50_t0BAABAB4A343E3F573925043CD5CA6AE4597B105  V_0;
	memset((&V_0), 0, sizeof(V_0));
	AsyncTaskMethodBuilder_1_tF3202EB14A45BB67CE82B3124E365B8DEFF9BF80  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_0 = ___stream0;
		(&V_0)->set_stream_2(L_0);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = ___callback1;
		(&V_0)->set_callback_3(L_1);
		IL2CPP_RUNTIME_CLASS_INIT(AsyncTaskMethodBuilder_1_tF3202EB14A45BB67CE82B3124E365B8DEFF9BF80_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_1_tF3202EB14A45BB67CE82B3124E365B8DEFF9BF80  L_2;
		L_2 = AsyncTaskMethodBuilder_1_Create_m0922E4F71FBE68393EFE1CB2DF6B0CC1E8750311(/*hidden argument*/AsyncTaskMethodBuilder_1_Create_m0922E4F71FBE68393EFE1CB2DF6B0CC1E8750311_RuntimeMethod_var);
		(&V_0)->set_U3CU3Et__builder_1(L_2);
		(&V_0)->set_U3CU3E1__state_0((-1));
		U3CFromStreamAsyncU3Ed__50_t0BAABAB4A343E3F573925043CD5CA6AE4597B105  L_3 = V_0;
		AsyncTaskMethodBuilder_1_tF3202EB14A45BB67CE82B3124E365B8DEFF9BF80  L_4 = L_3.get_U3CU3Et__builder_1();
		V_1 = L_4;
		AsyncTaskMethodBuilder_1_Start_TisU3CFromStreamAsyncU3Ed__50_t0BAABAB4A343E3F573925043CD5CA6AE4597B105_m930F216CA1D8F5030881615AC47D2A6200A0339D((AsyncTaskMethodBuilder_1_tF3202EB14A45BB67CE82B3124E365B8DEFF9BF80 *)(&V_1), (U3CFromStreamAsyncU3Ed__50_t0BAABAB4A343E3F573925043CD5CA6AE4597B105 *)(&V_0), /*hidden argument*/AsyncTaskMethodBuilder_1_Start_TisU3CFromStreamAsyncU3Ed__50_t0BAABAB4A343E3F573925043CD5CA6AE4597B105_m930F216CA1D8F5030881615AC47D2A6200A0339D_RuntimeMethod_var);
		AsyncTaskMethodBuilder_1_tF3202EB14A45BB67CE82B3124E365B8DEFF9BF80 * L_5 = (&V_0)->get_address_of_U3CU3Et__builder_1();
		Task_1_tB231B84F8F2E5D004D7EE56C7AC413E80914BC74 * L_6;
		L_6 = AsyncTaskMethodBuilder_1_get_Task_m8EE8D2BE14C6B9E58020C428066962B1CBC1D617((AsyncTaskMethodBuilder_1_tF3202EB14A45BB67CE82B3124E365B8DEFF9BF80 *)L_5, /*hidden argument*/AsyncTaskMethodBuilder_1_get_Task_m8EE8D2BE14C6B9E58020C428066962B1CBC1D617_RuntimeMethod_var);
		return L_6;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation::ComputeDuration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAnimation_ComputeDuration_m263C0BC7A120F0DB400694C98E53511C4F46162B (InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tD13D2D64E568FB0AB0AC501FB0D1F1DF895D81A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t9F362DF58E8D36C35D0707AEAABC831BC4C60796_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * V_1 = NULL;
	float V_2 = 0.0f;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	float G_B5_0 = 0.0f;
	{
		// duration = 0.0f;
		__this->set_duration_1((0.0f));
		// foreach (var curve in GetAllAnimationCurves())
		RuntimeObject* L_0;
		L_0 = InputAnimation_GetAllAnimationCurves_mBEF016686BD32CB4566977954B7BEDDD7B7F23AA(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<UnityEngine.AnimationCurve>::GetEnumerator() */, IEnumerable_1_tD13D2D64E568FB0AB0AC501FB0D1F1DF895D81A3_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
	}

IL_0017:
	try
	{ // begin try (depth: 1)
		{
			goto IL_005b;
		}

IL_0019:
		{
			// foreach (var curve in GetAllAnimationCurves())
			RuntimeObject* L_2 = V_0;
			NullCheck(L_2);
			AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_3;
			L_3 = InterfaceFuncInvoker0< AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<UnityEngine.AnimationCurve>::get_Current() */, IEnumerator_1_t9F362DF58E8D36C35D0707AEAABC831BC4C60796_il2cpp_TypeInfo_var, L_2);
			V_1 = L_3;
			// float curveDuration = (curve.length > 0 ? curve.keys[curve.length - 1].time : 0.0f);
			AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_4 = V_1;
			NullCheck(L_4);
			int32_t L_5;
			L_5 = AnimationCurve_get_length_mB3D0734222EE55DB1389BCB98CCB1324AF8AA4E0(L_4, /*hidden argument*/NULL);
			if ((((int32_t)L_5) > ((int32_t)0)))
			{
				goto IL_0030;
			}
		}

IL_0029:
		{
			G_B5_0 = (0.0f);
			goto IL_0048;
		}

IL_0030:
		{
			AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_6 = V_1;
			NullCheck(L_6);
			KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_7;
			L_7 = AnimationCurve_get_keys_m64FA75C0B1F7BCDE123EFB903962B2BD9DD5F321(L_6, /*hidden argument*/NULL);
			AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_8 = V_1;
			NullCheck(L_8);
			int32_t L_9;
			L_9 = AnimationCurve_get_length_mB3D0734222EE55DB1389BCB98CCB1324AF8AA4E0(L_8, /*hidden argument*/NULL);
			NullCheck(L_7);
			float L_10;
			L_10 = Keyframe_get_time_m75EBFDECA329315F6D41A60C0B1291F5BA4039E8((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract((int32_t)L_9, (int32_t)1))))), /*hidden argument*/NULL);
			G_B5_0 = L_10;
		}

IL_0048:
		{
			V_2 = G_B5_0;
			// duration = Mathf.Max(duration, curveDuration);
			float L_11 = __this->get_duration_1();
			float L_12 = V_2;
			float L_13;
			L_13 = Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775(L_11, L_12, /*hidden argument*/NULL);
			__this->set_duration_1(L_13);
		}

IL_005b:
		{
			// foreach (var curve in GetAllAnimationCurves())
			RuntimeObject* L_14 = V_0;
			NullCheck(L_14);
			bool L_15;
			L_15 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_14);
			if (L_15)
			{
				goto IL_0019;
			}
		}

IL_0063:
		{
			IL2CPP_LEAVE(0x6F, FINALLY_0065);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0065;
	}

FINALLY_0065:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_16 = V_0;
			if (!L_16)
			{
				goto IL_006e;
			}
		}

IL_0068:
		{
			RuntimeObject* L_17 = V_0;
			NullCheck(L_17);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_17);
		}

IL_006e:
		{
			IL2CPP_END_FINALLY(101)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(101)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x6F, IL_006f)
	}

IL_006f:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation::Optimize(Microsoft.MixedReality.Toolkit.Input.MixedRealityInputRecordingProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAnimation_Optimize_mB952F656C1FDD57F4231434FD3144CD6DA899EA8 (InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534 * __this, MixedRealityInputRecordingProfile_t56C7B027300F96474C48A61DF0A7EFAA8E41EA91 * ___profile0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Values_m96235BF869B2ECF2B290BDD4F6D7B022FFF0A12D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mE6C2E4D4F02A516C58A877AB592B442E4B745D72_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m578FD92B67B741D322B93809002331AF35670FF0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mFB5CC68B705B48844631C1360EF6CB6ED7199C3F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueCollection_GetEnumerator_m7C12538788587A8F4DA13E1467AA2C2E38C1066C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t6359D50CF0EE93ACDDC59D9FCAE8F0DD31D8DE50  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		// if (profile.RecordCameraPose)
		MixedRealityInputRecordingProfile_t56C7B027300F96474C48A61DF0A7EFAA8E41EA91 * L_0 = ___profile0;
		NullCheck(L_0);
		bool L_1;
		L_1 = MixedRealityInputRecordingProfile_get_RecordCameraPose_m7BA79D3B22E44E686AA955C56072F7A6716FED72_inline(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		// cameraCurves.Optimize(profile.CameraPositionThreshold, profile.CameraRotationThreshold, profile.PartitionSize);
		PoseCurves_t14269C65E2E6B6A532EF4AC78324976DF2587501 * L_2 = __this->get_cameraCurves_8();
		MixedRealityInputRecordingProfile_t56C7B027300F96474C48A61DF0A7EFAA8E41EA91 * L_3 = ___profile0;
		NullCheck(L_3);
		float L_4;
		L_4 = MixedRealityInputRecordingProfile_get_CameraPositionThreshold_m8240A9C1827186F6D194747E3D77D9C24C7BC41E_inline(L_3, /*hidden argument*/NULL);
		MixedRealityInputRecordingProfile_t56C7B027300F96474C48A61DF0A7EFAA8E41EA91 * L_5 = ___profile0;
		NullCheck(L_5);
		float L_6;
		L_6 = MixedRealityInputRecordingProfile_get_CameraRotationThreshold_mE91B9970882A9B83EB05E637C36A1D3F1361F6A9_inline(L_5, /*hidden argument*/NULL);
		MixedRealityInputRecordingProfile_t56C7B027300F96474C48A61DF0A7EFAA8E41EA91 * L_7 = ___profile0;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = MixedRealityInputRecordingProfile_get_PartitionSize_mCFA857FFB0CBE37678EF751667040AEB1E84329D_inline(L_7, /*hidden argument*/NULL);
		NullCheck(L_2);
		PoseCurves_Optimize_mF498DB5DEAD66B7E810A400B442273B38089FD44(L_2, L_4, L_6, L_8, /*hidden argument*/NULL);
	}

IL_0025:
	{
		// if (profile.RecordEyeGaze)
		MixedRealityInputRecordingProfile_t56C7B027300F96474C48A61DF0A7EFAA8E41EA91 * L_9 = ___profile0;
		NullCheck(L_9);
		bool L_10;
		L_10 = MixedRealityInputRecordingProfile_get_RecordEyeGaze_m9DA2CB6AF1179E5AA1A466E15292817DF3F61B54_inline(L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_004a;
		}
	}
	{
		// gazeCurves.Optimize(profile.EyeGazeOriginThreshold, profile.EyeGazeDirectionThreshold, profile.PartitionSize);
		RayCurves_tE200BC10F2980B31D68E54E46BB6EB32508F5604 * L_11 = __this->get_gazeCurves_9();
		MixedRealityInputRecordingProfile_t56C7B027300F96474C48A61DF0A7EFAA8E41EA91 * L_12 = ___profile0;
		NullCheck(L_12);
		float L_13;
		L_13 = MixedRealityInputRecordingProfile_get_EyeGazeOriginThreshold_mB233A67A96A3F58D3A1CD6448A28B89C4E978589_inline(L_12, /*hidden argument*/NULL);
		MixedRealityInputRecordingProfile_t56C7B027300F96474C48A61DF0A7EFAA8E41EA91 * L_14 = ___profile0;
		NullCheck(L_14);
		float L_15;
		L_15 = MixedRealityInputRecordingProfile_get_EyeGazeDirectionThreshold_m817BE12ABBB0A219E23004B30D773761BD3062FD_inline(L_14, /*hidden argument*/NULL);
		MixedRealityInputRecordingProfile_t56C7B027300F96474C48A61DF0A7EFAA8E41EA91 * L_16 = ___profile0;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = MixedRealityInputRecordingProfile_get_PartitionSize_mCFA857FFB0CBE37678EF751667040AEB1E84329D_inline(L_16, /*hidden argument*/NULL);
		NullCheck(L_11);
		RayCurves_Optimize_mF8C5DAEEF384426CAD7AAB9B5A6533EF2B6FEDFE(L_11, L_13, L_15, L_17, /*hidden argument*/NULL);
	}

IL_004a:
	{
		// if (profile.RecordHandData)
		MixedRealityInputRecordingProfile_t56C7B027300F96474C48A61DF0A7EFAA8E41EA91 * L_18 = ___profile0;
		NullCheck(L_18);
		bool L_19;
		L_19 = MixedRealityInputRecordingProfile_get_RecordHandData_mFD612DB88512A750FF0D12D05DA06E423EB1E384_inline(L_18, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_00e9;
		}
	}
	{
		// foreach (var poseCurves in handJointCurvesLeft.Values)
		Dictionary_2_tF3976454D4ACA03F9E231469CB7AA87B3D4745B0 * L_20 = __this->get_handJointCurvesLeft_6();
		NullCheck(L_20);
		ValueCollection_tD80A9007D68EC421B749FEFB42D345EAA73519FE * L_21;
		L_21 = Dictionary_2_get_Values_m96235BF869B2ECF2B290BDD4F6D7B022FFF0A12D(L_20, /*hidden argument*/Dictionary_2_get_Values_m96235BF869B2ECF2B290BDD4F6D7B022FFF0A12D_RuntimeMethod_var);
		NullCheck(L_21);
		Enumerator_t6359D50CF0EE93ACDDC59D9FCAE8F0DD31D8DE50  L_22;
		L_22 = ValueCollection_GetEnumerator_m7C12538788587A8F4DA13E1467AA2C2E38C1066C(L_21, /*hidden argument*/ValueCollection_GetEnumerator_m7C12538788587A8F4DA13E1467AA2C2E38C1066C_RuntimeMethod_var);
		V_0 = L_22;
	}

IL_0066:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0086;
		}

IL_0068:
		{
			// foreach (var poseCurves in handJointCurvesLeft.Values)
			PoseCurves_t14269C65E2E6B6A532EF4AC78324976DF2587501 * L_23;
			L_23 = Enumerator_get_Current_mFB5CC68B705B48844631C1360EF6CB6ED7199C3F_inline((Enumerator_t6359D50CF0EE93ACDDC59D9FCAE8F0DD31D8DE50 *)(&V_0), /*hidden argument*/Enumerator_get_Current_mFB5CC68B705B48844631C1360EF6CB6ED7199C3F_RuntimeMethod_var);
			// poseCurves.Optimize(profile.JointPositionThreshold, profile.JointRotationThreshold, profile.PartitionSize);
			MixedRealityInputRecordingProfile_t56C7B027300F96474C48A61DF0A7EFAA8E41EA91 * L_24 = ___profile0;
			NullCheck(L_24);
			float L_25;
			L_25 = MixedRealityInputRecordingProfile_get_JointPositionThreshold_m334C9FBDA90EEEDD15AE647E8F7E225A1194F396_inline(L_24, /*hidden argument*/NULL);
			MixedRealityInputRecordingProfile_t56C7B027300F96474C48A61DF0A7EFAA8E41EA91 * L_26 = ___profile0;
			NullCheck(L_26);
			float L_27;
			L_27 = MixedRealityInputRecordingProfile_get_JointRotationThreshold_mB2AE3496B2BBB868F22645E466074C313DDBEA9B_inline(L_26, /*hidden argument*/NULL);
			MixedRealityInputRecordingProfile_t56C7B027300F96474C48A61DF0A7EFAA8E41EA91 * L_28 = ___profile0;
			NullCheck(L_28);
			int32_t L_29;
			L_29 = MixedRealityInputRecordingProfile_get_PartitionSize_mCFA857FFB0CBE37678EF751667040AEB1E84329D_inline(L_28, /*hidden argument*/NULL);
			NullCheck(L_23);
			PoseCurves_Optimize_mF498DB5DEAD66B7E810A400B442273B38089FD44(L_23, L_25, L_27, L_29, /*hidden argument*/NULL);
		}

IL_0086:
		{
			// foreach (var poseCurves in handJointCurvesLeft.Values)
			bool L_30;
			L_30 = Enumerator_MoveNext_m578FD92B67B741D322B93809002331AF35670FF0((Enumerator_t6359D50CF0EE93ACDDC59D9FCAE8F0DD31D8DE50 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_m578FD92B67B741D322B93809002331AF35670FF0_RuntimeMethod_var);
			if (L_30)
			{
				goto IL_0068;
			}
		}

IL_008f:
		{
			IL2CPP_LEAVE(0x9F, FINALLY_0091);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0091;
	}

FINALLY_0091:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mE6C2E4D4F02A516C58A877AB592B442E4B745D72((Enumerator_t6359D50CF0EE93ACDDC59D9FCAE8F0DD31D8DE50 *)(&V_0), /*hidden argument*/Enumerator_Dispose_mE6C2E4D4F02A516C58A877AB592B442E4B745D72_RuntimeMethod_var);
		IL2CPP_END_FINALLY(145)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(145)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x9F, IL_009f)
	}

IL_009f:
	{
		// foreach (var poseCurves in handJointCurvesRight.Values)
		Dictionary_2_tF3976454D4ACA03F9E231469CB7AA87B3D4745B0 * L_31 = __this->get_handJointCurvesRight_7();
		NullCheck(L_31);
		ValueCollection_tD80A9007D68EC421B749FEFB42D345EAA73519FE * L_32;
		L_32 = Dictionary_2_get_Values_m96235BF869B2ECF2B290BDD4F6D7B022FFF0A12D(L_31, /*hidden argument*/Dictionary_2_get_Values_m96235BF869B2ECF2B290BDD4F6D7B022FFF0A12D_RuntimeMethod_var);
		NullCheck(L_32);
		Enumerator_t6359D50CF0EE93ACDDC59D9FCAE8F0DD31D8DE50  L_33;
		L_33 = ValueCollection_GetEnumerator_m7C12538788587A8F4DA13E1467AA2C2E38C1066C(L_32, /*hidden argument*/ValueCollection_GetEnumerator_m7C12538788587A8F4DA13E1467AA2C2E38C1066C_RuntimeMethod_var);
		V_0 = L_33;
	}

IL_00b0:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00d0;
		}

IL_00b2:
		{
			// foreach (var poseCurves in handJointCurvesRight.Values)
			PoseCurves_t14269C65E2E6B6A532EF4AC78324976DF2587501 * L_34;
			L_34 = Enumerator_get_Current_mFB5CC68B705B48844631C1360EF6CB6ED7199C3F_inline((Enumerator_t6359D50CF0EE93ACDDC59D9FCAE8F0DD31D8DE50 *)(&V_0), /*hidden argument*/Enumerator_get_Current_mFB5CC68B705B48844631C1360EF6CB6ED7199C3F_RuntimeMethod_var);
			// poseCurves.Optimize(profile.JointPositionThreshold, profile.JointRotationThreshold, profile.PartitionSize);
			MixedRealityInputRecordingProfile_t56C7B027300F96474C48A61DF0A7EFAA8E41EA91 * L_35 = ___profile0;
			NullCheck(L_35);
			float L_36;
			L_36 = MixedRealityInputRecordingProfile_get_JointPositionThreshold_m334C9FBDA90EEEDD15AE647E8F7E225A1194F396_inline(L_35, /*hidden argument*/NULL);
			MixedRealityInputRecordingProfile_t56C7B027300F96474C48A61DF0A7EFAA8E41EA91 * L_37 = ___profile0;
			NullCheck(L_37);
			float L_38;
			L_38 = MixedRealityInputRecordingProfile_get_JointRotationThreshold_mB2AE3496B2BBB868F22645E466074C313DDBEA9B_inline(L_37, /*hidden argument*/NULL);
			MixedRealityInputRecordingProfile_t56C7B027300F96474C48A61DF0A7EFAA8E41EA91 * L_39 = ___profile0;
			NullCheck(L_39);
			int32_t L_40;
			L_40 = MixedRealityInputRecordingProfile_get_PartitionSize_mCFA857FFB0CBE37678EF751667040AEB1E84329D_inline(L_39, /*hidden argument*/NULL);
			NullCheck(L_34);
			PoseCurves_Optimize_mF498DB5DEAD66B7E810A400B442273B38089FD44(L_34, L_36, L_38, L_40, /*hidden argument*/NULL);
		}

IL_00d0:
		{
			// foreach (var poseCurves in handJointCurvesRight.Values)
			bool L_41;
			L_41 = Enumerator_MoveNext_m578FD92B67B741D322B93809002331AF35670FF0((Enumerator_t6359D50CF0EE93ACDDC59D9FCAE8F0DD31D8DE50 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_m578FD92B67B741D322B93809002331AF35670FF0_RuntimeMethod_var);
			if (L_41)
			{
				goto IL_00b2;
			}
		}

IL_00d9:
		{
			IL2CPP_LEAVE(0xE9, FINALLY_00db);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00db;
	}

FINALLY_00db:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mE6C2E4D4F02A516C58A877AB592B442E4B745D72((Enumerator_t6359D50CF0EE93ACDDC59D9FCAE8F0DD31D8DE50 *)(&V_0), /*hidden argument*/Enumerator_Dispose_mE6C2E4D4F02A516C58A877AB592B442E4B745D72_RuntimeMethod_var);
		IL2CPP_END_FINALLY(219)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(219)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xE9, IL_00e9)
	}

IL_00e9:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation::EvaluateHandState(System.Single,UnityEngine.AnimationCurve,UnityEngine.AnimationCurve,System.Boolean&,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAnimation_EvaluateHandState_m9711883F0BD5E8B0D8EA711F083534B6D866AC12 (InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534 * __this, float ___time0, AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___trackedCurve1, AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___pinchCurve2, bool* ___isTracked3, bool* ___isPinching4, const RuntimeMethod* method)
{
	{
		// isTracked = (trackedCurve.Evaluate(time) > 0.5f);
		bool* L_0 = ___isTracked3;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_1 = ___trackedCurve1;
		float L_2 = ___time0;
		NullCheck(L_1);
		float L_3;
		L_3 = AnimationCurve_Evaluate_m1248B5B167F1FFFDC847A08C56B7D63B32311E6A(L_1, L_2, /*hidden argument*/NULL);
		*((int8_t*)L_0) = (int8_t)((((float)L_3) > ((float)(0.5f)))? 1 : 0);
		// isPinching = (pinchCurve.Evaluate(time) > 0.5f);
		bool* L_4 = ___isPinching4;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_5 = ___pinchCurve2;
		float L_6 = ___time0;
		NullCheck(L_5);
		float L_7;
		L_7 = AnimationCurve_Evaluate_m1248B5B167F1FFFDC847A08C56B7D63B32311E6A(L_5, L_6, /*hidden argument*/NULL);
		*((int8_t*)L_4) = (int8_t)((((float)L_7) > ((float)(0.5f)))? 1 : 0);
		// }
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.Input.InputAnimation::EvaluateHandJoint(System.Single,Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Input.InputAnimation/PoseCurves>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99  InputAnimation_EvaluateHandJoint_mF41C24128DA9E920492A1CCBE1117740146DBF19 (InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534 * __this, float ___time0, int32_t ___joint1, Dictionary_2_tF3976454D4ACA03F9E231469CB7AA87B3D4745B0 * ___jointCurves2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mA86A48F1F8E01B36CF0D80C36B3C67755D6D00BE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PoseCurves_t14269C65E2E6B6A532EF4AC78324976DF2587501 * V_0 = NULL;
	{
		// if (jointCurves.TryGetValue(joint, out var curves))
		Dictionary_2_tF3976454D4ACA03F9E231469CB7AA87B3D4745B0 * L_0 = ___jointCurves2;
		int32_t L_1 = ___joint1;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_TryGetValue_mA86A48F1F8E01B36CF0D80C36B3C67755D6D00BE(L_0, L_1, (PoseCurves_t14269C65E2E6B6A532EF4AC78324976DF2587501 **)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_mA86A48F1F8E01B36CF0D80C36B3C67755D6D00BE_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0013;
		}
	}
	{
		// return curves.Evaluate(time);
		PoseCurves_t14269C65E2E6B6A532EF4AC78324976DF2587501 * L_3 = V_0;
		float L_4 = ___time0;
		NullCheck(L_3);
		MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99  L_5;
		L_5 = PoseCurves_Evaluate_mA254F9EE38B047676F47A248C4EDB17626E7CE2D(L_3, L_4, /*hidden argument*/NULL);
		return L_5;
	}

IL_0013:
	{
		// return MixedRealityPose.ZeroIdentity;
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99_il2cpp_TypeInfo_var);
		MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99  L_6;
		L_6 = MixedRealityPose_get_ZeroIdentity_m95D9F3844DD9A90DAEC2046FE9152D721CCF19D2_inline(/*hidden argument*/NULL);
		return L_6;
	}
}
// System.Collections.Generic.IEnumerable`1<UnityEngine.AnimationCurve> Microsoft.MixedReality.Toolkit.Input.InputAnimation::GetAllAnimationCurves()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InputAnimation_GetAllAnimationCurves_mBEF016686BD32CB4566977954B7BEDDD7B7F23AA (InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CGetAllAnimationCurvesU3Ed__60_tABFAAE907711737282276C10EB4C546A49E1D0C4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CGetAllAnimationCurvesU3Ed__60_tABFAAE907711737282276C10EB4C546A49E1D0C4 * L_0 = (U3CGetAllAnimationCurvesU3Ed__60_tABFAAE907711737282276C10EB4C546A49E1D0C4 *)il2cpp_codegen_object_new(U3CGetAllAnimationCurvesU3Ed__60_tABFAAE907711737282276C10EB4C546A49E1D0C4_il2cpp_TypeInfo_var);
		U3CGetAllAnimationCurvesU3Ed__60__ctor_m07DDAD234100D6B55213BB5CE9BD361D0501BF22(L_0, ((int32_t)-2), /*hidden argument*/NULL);
		U3CGetAllAnimationCurvesU3Ed__60_tABFAAE907711737282276C10EB4C546A49E1D0C4 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_3(__this);
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation::AddBoolKey(UnityEngine.AnimationCurve,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAnimation_AddBoolKey_mF3C12D6505644FD0313E176656AA6975488CB90F (AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___curve0, float ___time1, bool ___value2, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  V_1;
	memset((&V_1), 0, sizeof(V_1));
	float G_B3_0 = 0.0f;
	{
		// float fvalue = value ? 1.0f : 0.0f;
		bool L_0 = ___value2;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		G_B3_0 = (0.0f);
		goto IL_000f;
	}

IL_000a:
	{
		G_B3_0 = (1.0f);
	}

IL_000f:
	{
		V_0 = G_B3_0;
		// var keyframe = new Keyframe(time, fvalue, 0.0f, 0.0f, 0.0f, BoolOutWeight);
		float L_1 = ___time1;
		float L_2 = V_0;
		Keyframe__ctor_m4403ADF9353A22925623AA2835E79AB380441107((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)(&V_1), L_1, L_2, (0.0f), (0.0f), (0.0f), (1000000.0f), /*hidden argument*/NULL);
		// keyframe.weightedMode = WeightedMode.Both;
		Keyframe_set_weightedMode_mEFA8BE25D83C1CF4E2D83AD76F6BB34E0435D0B5((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)(&V_1), 3, /*hidden argument*/NULL);
		// curve.AddKey(keyframe);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_3 = ___curve0;
		Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  L_4 = V_1;
		NullCheck(L_3);
		int32_t L_5;
		L_5 = AnimationCurve_AddKey_m3AEE7259785540EF6A157BA99B3737AC60E30D9A(L_3, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation::AddFloatKey(UnityEngine.AnimationCurve,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAnimation_AddFloatKey_m3B59676DEBAEA5A18DB74BA79548CE942528555E (AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___curve0, float ___time1, float ___value2, const RuntimeMethod* method)
{
	Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var keyframe = new Keyframe(time, value, 0.0f, 0.0f, 0.0f, 0.0f);
		float L_0 = ___time1;
		float L_1 = ___value2;
		Keyframe__ctor_m4403ADF9353A22925623AA2835E79AB380441107((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)(&V_0), L_0, L_1, (0.0f), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		// keyframe.weightedMode = WeightedMode.Both;
		Keyframe_set_weightedMode_mEFA8BE25D83C1CF4E2D83AD76F6BB34E0435D0B5((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)(&V_0), 3, /*hidden argument*/NULL);
		// curve.AddKey(keyframe);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_2 = ___curve0;
		Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  L_3 = V_0;
		NullCheck(L_2);
		int32_t L_4;
		L_4 = AnimationCurve_AddKey_m3AEE7259785540EF6A157BA99B3737AC60E30D9A(L_2, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation::AddVectorKey(UnityEngine.AnimationCurve,UnityEngine.AnimationCurve,UnityEngine.AnimationCurve,System.Single,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAnimation_AddVectorKey_m8387C163CFE8BD0E554DD6ECF6C9D7BC77C33FA4 (AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___curveX0, AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___curveY1, AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___curveZ2, float ___time3, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___vector4, const RuntimeMethod* method)
{
	{
		// curveX.AddKey(time, vector.x);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_0 = ___curveX0;
		float L_1 = ___time3;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___vector4;
		float L_3 = L_2.get_x_2();
		NullCheck(L_0);
		int32_t L_4;
		L_4 = AnimationCurve_AddKey_m159FB7119B6BBCD11DDEBCC3ECB782DEBF0FD5C7(L_0, L_1, L_3, /*hidden argument*/NULL);
		// curveY.AddKey(time, vector.y);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_5 = ___curveY1;
		float L_6 = ___time3;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = ___vector4;
		float L_8 = L_7.get_y_3();
		NullCheck(L_5);
		int32_t L_9;
		L_9 = AnimationCurve_AddKey_m159FB7119B6BBCD11DDEBCC3ECB782DEBF0FD5C7(L_5, L_6, L_8, /*hidden argument*/NULL);
		// curveZ.AddKey(time, vector.z);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_10 = ___curveZ2;
		float L_11 = ___time3;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12 = ___vector4;
		float L_13 = L_12.get_z_4();
		NullCheck(L_10);
		int32_t L_14;
		L_14 = AnimationCurve_AddKey_m159FB7119B6BBCD11DDEBCC3ECB782DEBF0FD5C7(L_10, L_11, L_13, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation::PoseCurvesToStream(System.IO.BinaryWriter,Microsoft.MixedReality.Toolkit.Input.InputAnimation/PoseCurves,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAnimation_PoseCurvesToStream_m23BA1432A8694B1119FAE05655EA460B2D0F1CE5 (BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F * ___writer0, PoseCurves_t14269C65E2E6B6A532EF4AC78324976DF2587501 * ___curves1, float ___startTime2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputAnimationSerializationUtils_tBF0CF9A1A3138FAC30FF8F17528259A9C7A31560_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// InputAnimationSerializationUtils.WriteFloatCurveSimple(writer, curves.PositionX, startTime);
		BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F * L_0 = ___writer0;
		PoseCurves_t14269C65E2E6B6A532EF4AC78324976DF2587501 * L_1 = ___curves1;
		NullCheck(L_1);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_2 = L_1->get_PositionX_0();
		float L_3 = ___startTime2;
		IL2CPP_RUNTIME_CLASS_INIT(InputAnimationSerializationUtils_tBF0CF9A1A3138FAC30FF8F17528259A9C7A31560_il2cpp_TypeInfo_var);
		InputAnimationSerializationUtils_WriteFloatCurveSimple_m6E070EBD2AF41C142BF139047F40ED577F5CD763(L_0, L_2, L_3, /*hidden argument*/NULL);
		// InputAnimationSerializationUtils.WriteFloatCurveSimple(writer, curves.PositionY, startTime);
		BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F * L_4 = ___writer0;
		PoseCurves_t14269C65E2E6B6A532EF4AC78324976DF2587501 * L_5 = ___curves1;
		NullCheck(L_5);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_6 = L_5->get_PositionY_1();
		float L_7 = ___startTime2;
		InputAnimationSerializationUtils_WriteFloatCurveSimple_m6E070EBD2AF41C142BF139047F40ED577F5CD763(L_4, L_6, L_7, /*hidden argument*/NULL);
		// InputAnimationSerializationUtils.WriteFloatCurveSimple(writer, curves.PositionZ, startTime);
		BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F * L_8 = ___writer0;
		PoseCurves_t14269C65E2E6B6A532EF4AC78324976DF2587501 * L_9 = ___curves1;
		NullCheck(L_9);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_10 = L_9->get_PositionZ_2();
		float L_11 = ___startTime2;
		InputAnimationSerializationUtils_WriteFloatCurveSimple_m6E070EBD2AF41C142BF139047F40ED577F5CD763(L_8, L_10, L_11, /*hidden argument*/NULL);
		// InputAnimationSerializationUtils.WriteFloatCurveSimple(writer, curves.RotationX, startTime);
		BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F * L_12 = ___writer0;
		PoseCurves_t14269C65E2E6B6A532EF4AC78324976DF2587501 * L_13 = ___curves1;
		NullCheck(L_13);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_14 = L_13->get_RotationX_3();
		float L_15 = ___startTime2;
		InputAnimationSerializationUtils_WriteFloatCurveSimple_m6E070EBD2AF41C142BF139047F40ED577F5CD763(L_12, L_14, L_15, /*hidden argument*/NULL);
		// InputAnimationSerializationUtils.WriteFloatCurveSimple(writer, curves.RotationY, startTime);
		BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F * L_16 = ___writer0;
		PoseCurves_t14269C65E2E6B6A532EF4AC78324976DF2587501 * L_17 = ___curves1;
		NullCheck(L_17);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_18 = L_17->get_RotationY_4();
		float L_19 = ___startTime2;
		InputAnimationSerializationUtils_WriteFloatCurveSimple_m6E070EBD2AF41C142BF139047F40ED577F5CD763(L_16, L_18, L_19, /*hidden argument*/NULL);
		// InputAnimationSerializationUtils.WriteFloatCurveSimple(writer, curves.RotationZ, startTime);
		BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F * L_20 = ___writer0;
		PoseCurves_t14269C65E2E6B6A532EF4AC78324976DF2587501 * L_21 = ___curves1;
		NullCheck(L_21);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_22 = L_21->get_RotationZ_5();
		float L_23 = ___startTime2;
		InputAnimationSerializationUtils_WriteFloatCurveSimple_m6E070EBD2AF41C142BF139047F40ED577F5CD763(L_20, L_22, L_23, /*hidden argument*/NULL);
		// InputAnimationSerializationUtils.WriteFloatCurveSimple(writer, curves.RotationW, startTime);
		BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F * L_24 = ___writer0;
		PoseCurves_t14269C65E2E6B6A532EF4AC78324976DF2587501 * L_25 = ___curves1;
		NullCheck(L_25);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_26 = L_25->get_RotationW_6();
		float L_27 = ___startTime2;
		InputAnimationSerializationUtils_WriteFloatCurveSimple_m6E070EBD2AF41C142BF139047F40ED577F5CD763(L_24, L_26, L_27, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation::PoseCurvesFromStream(System.IO.BinaryReader,Microsoft.MixedReality.Toolkit.Input.InputAnimation/PoseCurves,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAnimation_PoseCurvesFromStream_m9A4B6484E477E7437330F0E77192E74AB25BE9F2 (BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128 * ___reader0, PoseCurves_t14269C65E2E6B6A532EF4AC78324976DF2587501 * ___curves1, bool ___readSimple2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputAnimationSerializationUtils_tBF0CF9A1A3138FAC30FF8F17528259A9C7A31560_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (readSimple)
		bool L_0 = ___readSimple2;
		if (!L_0)
		{
			goto IL_0058;
		}
	}
	{
		// InputAnimationSerializationUtils.ReadFloatCurveSimple(reader, curves.PositionX);
		BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128 * L_1 = ___reader0;
		PoseCurves_t14269C65E2E6B6A532EF4AC78324976DF2587501 * L_2 = ___curves1;
		NullCheck(L_2);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_3 = L_2->get_PositionX_0();
		IL2CPP_RUNTIME_CLASS_INIT(InputAnimationSerializationUtils_tBF0CF9A1A3138FAC30FF8F17528259A9C7A31560_il2cpp_TypeInfo_var);
		InputAnimationSerializationUtils_ReadFloatCurveSimple_m2DB3EA2BCC35088D91687D5090BCF18F02E32431(L_1, L_3, /*hidden argument*/NULL);
		// InputAnimationSerializationUtils.ReadFloatCurveSimple(reader, curves.PositionY);
		BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128 * L_4 = ___reader0;
		PoseCurves_t14269C65E2E6B6A532EF4AC78324976DF2587501 * L_5 = ___curves1;
		NullCheck(L_5);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_6 = L_5->get_PositionY_1();
		InputAnimationSerializationUtils_ReadFloatCurveSimple_m2DB3EA2BCC35088D91687D5090BCF18F02E32431(L_4, L_6, /*hidden argument*/NULL);
		// InputAnimationSerializationUtils.ReadFloatCurveSimple(reader, curves.PositionZ);
		BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128 * L_7 = ___reader0;
		PoseCurves_t14269C65E2E6B6A532EF4AC78324976DF2587501 * L_8 = ___curves1;
		NullCheck(L_8);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_9 = L_8->get_PositionZ_2();
		InputAnimationSerializationUtils_ReadFloatCurveSimple_m2DB3EA2BCC35088D91687D5090BCF18F02E32431(L_7, L_9, /*hidden argument*/NULL);
		// InputAnimationSerializationUtils.ReadFloatCurveSimple(reader, curves.RotationX);
		BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128 * L_10 = ___reader0;
		PoseCurves_t14269C65E2E6B6A532EF4AC78324976DF2587501 * L_11 = ___curves1;
		NullCheck(L_11);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_12 = L_11->get_RotationX_3();
		InputAnimationSerializationUtils_ReadFloatCurveSimple_m2DB3EA2BCC35088D91687D5090BCF18F02E32431(L_10, L_12, /*hidden argument*/NULL);
		// InputAnimationSerializationUtils.ReadFloatCurveSimple(reader, curves.RotationY);
		BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128 * L_13 = ___reader0;
		PoseCurves_t14269C65E2E6B6A532EF4AC78324976DF2587501 * L_14 = ___curves1;
		NullCheck(L_14);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_15 = L_14->get_RotationY_4();
		InputAnimationSerializationUtils_ReadFloatCurveSimple_m2DB3EA2BCC35088D91687D5090BCF18F02E32431(L_13, L_15, /*hidden argument*/NULL);
		// InputAnimationSerializationUtils.ReadFloatCurveSimple(reader, curves.RotationZ);
		BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128 * L_16 = ___reader0;
		PoseCurves_t14269C65E2E6B6A532EF4AC78324976DF2587501 * L_17 = ___curves1;
		NullCheck(L_17);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_18 = L_17->get_RotationZ_5();
		InputAnimationSerializationUtils_ReadFloatCurveSimple_m2DB3EA2BCC35088D91687D5090BCF18F02E32431(L_16, L_18, /*hidden argument*/NULL);
		// InputAnimationSerializationUtils.ReadFloatCurveSimple(reader, curves.RotationW);
		BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128 * L_19 = ___reader0;
		PoseCurves_t14269C65E2E6B6A532EF4AC78324976DF2587501 * L_20 = ___curves1;
		NullCheck(L_20);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_21 = L_20->get_RotationW_6();
		InputAnimationSerializationUtils_ReadFloatCurveSimple_m2DB3EA2BCC35088D91687D5090BCF18F02E32431(L_19, L_21, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0058:
	{
		// InputAnimationSerializationUtils.ReadFloatCurve(reader, curves.PositionX);
		BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128 * L_22 = ___reader0;
		PoseCurves_t14269C65E2E6B6A532EF4AC78324976DF2587501 * L_23 = ___curves1;
		NullCheck(L_23);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_24 = L_23->get_PositionX_0();
		IL2CPP_RUNTIME_CLASS_INIT(InputAnimationSerializationUtils_tBF0CF9A1A3138FAC30FF8F17528259A9C7A31560_il2cpp_TypeInfo_var);
		InputAnimationSerializationUtils_ReadFloatCurve_mAE6393871E98641F773E1DCC3E7234D6C57AD02C(L_22, L_24, /*hidden argument*/NULL);
		// InputAnimationSerializationUtils.ReadFloatCurve(reader, curves.PositionY);
		BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128 * L_25 = ___reader0;
		PoseCurves_t14269C65E2E6B6A532EF4AC78324976DF2587501 * L_26 = ___curves1;
		NullCheck(L_26);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_27 = L_26->get_PositionY_1();
		InputAnimationSerializationUtils_ReadFloatCurve_mAE6393871E98641F773E1DCC3E7234D6C57AD02C(L_25, L_27, /*hidden argument*/NULL);
		// InputAnimationSerializationUtils.ReadFloatCurve(reader, curves.PositionZ);
		BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128 * L_28 = ___reader0;
		PoseCurves_t14269C65E2E6B6A532EF4AC78324976DF2587501 * L_29 = ___curves1;
		NullCheck(L_29);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_30 = L_29->get_PositionZ_2();
		InputAnimationSerializationUtils_ReadFloatCurve_mAE6393871E98641F773E1DCC3E7234D6C57AD02C(L_28, L_30, /*hidden argument*/NULL);
		// InputAnimationSerializationUtils.ReadFloatCurve(reader, curves.RotationX);
		BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128 * L_31 = ___reader0;
		PoseCurves_t14269C65E2E6B6A532EF4AC78324976DF2587501 * L_32 = ___curves1;
		NullCheck(L_32);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_33 = L_32->get_RotationX_3();
		InputAnimationSerializationUtils_ReadFloatCurve_mAE6393871E98641F773E1DCC3E7234D6C57AD02C(L_31, L_33, /*hidden argument*/NULL);
		// InputAnimationSerializationUtils.ReadFloatCurve(reader, curves.RotationY);
		BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128 * L_34 = ___reader0;
		PoseCurves_t14269C65E2E6B6A532EF4AC78324976DF2587501 * L_35 = ___curves1;
		NullCheck(L_35);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_36 = L_35->get_RotationY_4();
		InputAnimationSerializationUtils_ReadFloatCurve_mAE6393871E98641F773E1DCC3E7234D6C57AD02C(L_34, L_36, /*hidden argument*/NULL);
		// InputAnimationSerializationUtils.ReadFloatCurve(reader, curves.RotationZ);
		BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128 * L_37 = ___reader0;
		PoseCurves_t14269C65E2E6B6A532EF4AC78324976DF2587501 * L_38 = ___curves1;
		NullCheck(L_38);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_39 = L_38->get_RotationZ_5();
		InputAnimationSerializationUtils_ReadFloatCurve_mAE6393871E98641F773E1DCC3E7234D6C57AD02C(L_37, L_39, /*hidden argument*/NULL);
		// InputAnimationSerializationUtils.ReadFloatCurve(reader, curves.RotationW);
		BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128 * L_40 = ___reader0;
		PoseCurves_t14269C65E2E6B6A532EF4AC78324976DF2587501 * L_41 = ___curves1;
		NullCheck(L_41);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_42 = L_41->get_RotationW_6();
		InputAnimationSerializationUtils_ReadFloatCurve_mAE6393871E98641F773E1DCC3E7234D6C57AD02C(L_40, L_42, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation::RayCurvesToStream(System.IO.BinaryWriter,Microsoft.MixedReality.Toolkit.Input.InputAnimation/RayCurves,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAnimation_RayCurvesToStream_m06D79D4D4A46DE51A1B1A1B66901FA2935648D71 (BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F * ___writer0, RayCurves_tE200BC10F2980B31D68E54E46BB6EB32508F5604 * ___curves1, float ___startTime2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputAnimationSerializationUtils_tBF0CF9A1A3138FAC30FF8F17528259A9C7A31560_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// InputAnimationSerializationUtils.WriteFloatCurveSimple(writer, curves.OriginX, startTime);
		BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F * L_0 = ___writer0;
		RayCurves_tE200BC10F2980B31D68E54E46BB6EB32508F5604 * L_1 = ___curves1;
		NullCheck(L_1);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_2 = L_1->get_OriginX_0();
		float L_3 = ___startTime2;
		IL2CPP_RUNTIME_CLASS_INIT(InputAnimationSerializationUtils_tBF0CF9A1A3138FAC30FF8F17528259A9C7A31560_il2cpp_TypeInfo_var);
		InputAnimationSerializationUtils_WriteFloatCurveSimple_m6E070EBD2AF41C142BF139047F40ED577F5CD763(L_0, L_2, L_3, /*hidden argument*/NULL);
		// InputAnimationSerializationUtils.WriteFloatCurveSimple(writer, curves.OriginY, startTime);
		BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F * L_4 = ___writer0;
		RayCurves_tE200BC10F2980B31D68E54E46BB6EB32508F5604 * L_5 = ___curves1;
		NullCheck(L_5);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_6 = L_5->get_OriginY_1();
		float L_7 = ___startTime2;
		InputAnimationSerializationUtils_WriteFloatCurveSimple_m6E070EBD2AF41C142BF139047F40ED577F5CD763(L_4, L_6, L_7, /*hidden argument*/NULL);
		// InputAnimationSerializationUtils.WriteFloatCurveSimple(writer, curves.OriginZ, startTime);
		BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F * L_8 = ___writer0;
		RayCurves_tE200BC10F2980B31D68E54E46BB6EB32508F5604 * L_9 = ___curves1;
		NullCheck(L_9);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_10 = L_9->get_OriginZ_2();
		float L_11 = ___startTime2;
		InputAnimationSerializationUtils_WriteFloatCurveSimple_m6E070EBD2AF41C142BF139047F40ED577F5CD763(L_8, L_10, L_11, /*hidden argument*/NULL);
		// InputAnimationSerializationUtils.WriteFloatCurveSimple(writer, curves.DirectionX, startTime);
		BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F * L_12 = ___writer0;
		RayCurves_tE200BC10F2980B31D68E54E46BB6EB32508F5604 * L_13 = ___curves1;
		NullCheck(L_13);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_14 = L_13->get_DirectionX_3();
		float L_15 = ___startTime2;
		InputAnimationSerializationUtils_WriteFloatCurveSimple_m6E070EBD2AF41C142BF139047F40ED577F5CD763(L_12, L_14, L_15, /*hidden argument*/NULL);
		// InputAnimationSerializationUtils.WriteFloatCurveSimple(writer, curves.DirectionY, startTime);
		BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F * L_16 = ___writer0;
		RayCurves_tE200BC10F2980B31D68E54E46BB6EB32508F5604 * L_17 = ___curves1;
		NullCheck(L_17);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_18 = L_17->get_DirectionY_4();
		float L_19 = ___startTime2;
		InputAnimationSerializationUtils_WriteFloatCurveSimple_m6E070EBD2AF41C142BF139047F40ED577F5CD763(L_16, L_18, L_19, /*hidden argument*/NULL);
		// InputAnimationSerializationUtils.WriteFloatCurveSimple(writer, curves.DirectionZ, startTime);
		BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F * L_20 = ___writer0;
		RayCurves_tE200BC10F2980B31D68E54E46BB6EB32508F5604 * L_21 = ___curves1;
		NullCheck(L_21);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_22 = L_21->get_DirectionZ_5();
		float L_23 = ___startTime2;
		InputAnimationSerializationUtils_WriteFloatCurveSimple_m6E070EBD2AF41C142BF139047F40ED577F5CD763(L_20, L_22, L_23, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation::RayCurvesFromStream(System.IO.BinaryReader,Microsoft.MixedReality.Toolkit.Input.InputAnimation/RayCurves,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAnimation_RayCurvesFromStream_m4D60874833E1E5B4C12F087B9668F4DD4DD85FE0 (BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128 * ___reader0, RayCurves_tE200BC10F2980B31D68E54E46BB6EB32508F5604 * ___curves1, bool ___readSimple2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputAnimationSerializationUtils_tBF0CF9A1A3138FAC30FF8F17528259A9C7A31560_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (readSimple)
		bool L_0 = ___readSimple2;
		if (!L_0)
		{
			goto IL_004c;
		}
	}
	{
		// InputAnimationSerializationUtils.ReadFloatCurveSimple(reader, curves.OriginX);
		BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128 * L_1 = ___reader0;
		RayCurves_tE200BC10F2980B31D68E54E46BB6EB32508F5604 * L_2 = ___curves1;
		NullCheck(L_2);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_3 = L_2->get_OriginX_0();
		IL2CPP_RUNTIME_CLASS_INIT(InputAnimationSerializationUtils_tBF0CF9A1A3138FAC30FF8F17528259A9C7A31560_il2cpp_TypeInfo_var);
		InputAnimationSerializationUtils_ReadFloatCurveSimple_m2DB3EA2BCC35088D91687D5090BCF18F02E32431(L_1, L_3, /*hidden argument*/NULL);
		// InputAnimationSerializationUtils.ReadFloatCurveSimple(reader, curves.OriginY);
		BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128 * L_4 = ___reader0;
		RayCurves_tE200BC10F2980B31D68E54E46BB6EB32508F5604 * L_5 = ___curves1;
		NullCheck(L_5);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_6 = L_5->get_OriginY_1();
		InputAnimationSerializationUtils_ReadFloatCurveSimple_m2DB3EA2BCC35088D91687D5090BCF18F02E32431(L_4, L_6, /*hidden argument*/NULL);
		// InputAnimationSerializationUtils.ReadFloatCurveSimple(reader, curves.OriginZ);
		BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128 * L_7 = ___reader0;
		RayCurves_tE200BC10F2980B31D68E54E46BB6EB32508F5604 * L_8 = ___curves1;
		NullCheck(L_8);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_9 = L_8->get_OriginZ_2();
		InputAnimationSerializationUtils_ReadFloatCurveSimple_m2DB3EA2BCC35088D91687D5090BCF18F02E32431(L_7, L_9, /*hidden argument*/NULL);
		// InputAnimationSerializationUtils.ReadFloatCurveSimple(reader, curves.DirectionX);
		BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128 * L_10 = ___reader0;
		RayCurves_tE200BC10F2980B31D68E54E46BB6EB32508F5604 * L_11 = ___curves1;
		NullCheck(L_11);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_12 = L_11->get_DirectionX_3();
		InputAnimationSerializationUtils_ReadFloatCurveSimple_m2DB3EA2BCC35088D91687D5090BCF18F02E32431(L_10, L_12, /*hidden argument*/NULL);
		// InputAnimationSerializationUtils.ReadFloatCurveSimple(reader, curves.DirectionY);
		BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128 * L_13 = ___reader0;
		RayCurves_tE200BC10F2980B31D68E54E46BB6EB32508F5604 * L_14 = ___curves1;
		NullCheck(L_14);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_15 = L_14->get_DirectionY_4();
		InputAnimationSerializationUtils_ReadFloatCurveSimple_m2DB3EA2BCC35088D91687D5090BCF18F02E32431(L_13, L_15, /*hidden argument*/NULL);
		// InputAnimationSerializationUtils.ReadFloatCurveSimple(reader, curves.DirectionZ);
		BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128 * L_16 = ___reader0;
		RayCurves_tE200BC10F2980B31D68E54E46BB6EB32508F5604 * L_17 = ___curves1;
		NullCheck(L_17);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_18 = L_17->get_DirectionZ_5();
		InputAnimationSerializationUtils_ReadFloatCurveSimple_m2DB3EA2BCC35088D91687D5090BCF18F02E32431(L_16, L_18, /*hidden argument*/NULL);
		// }
		return;
	}

IL_004c:
	{
		// InputAnimationSerializationUtils.ReadFloatCurve(reader, curves.OriginX);
		BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128 * L_19 = ___reader0;
		RayCurves_tE200BC10F2980B31D68E54E46BB6EB32508F5604 * L_20 = ___curves1;
		NullCheck(L_20);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_21 = L_20->get_OriginX_0();
		IL2CPP_RUNTIME_CLASS_INIT(InputAnimationSerializationUtils_tBF0CF9A1A3138FAC30FF8F17528259A9C7A31560_il2cpp_TypeInfo_var);
		InputAnimationSerializationUtils_ReadFloatCurve_mAE6393871E98641F773E1DCC3E7234D6C57AD02C(L_19, L_21, /*hidden argument*/NULL);
		// InputAnimationSerializationUtils.ReadFloatCurve(reader, curves.OriginY);
		BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128 * L_22 = ___reader0;
		RayCurves_tE200BC10F2980B31D68E54E46BB6EB32508F5604 * L_23 = ___curves1;
		NullCheck(L_23);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_24 = L_23->get_OriginY_1();
		InputAnimationSerializationUtils_ReadFloatCurve_mAE6393871E98641F773E1DCC3E7234D6C57AD02C(L_22, L_24, /*hidden argument*/NULL);
		// InputAnimationSerializationUtils.ReadFloatCurve(reader, curves.OriginZ);
		BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128 * L_25 = ___reader0;
		RayCurves_tE200BC10F2980B31D68E54E46BB6EB32508F5604 * L_26 = ___curves1;
		NullCheck(L_26);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_27 = L_26->get_OriginZ_2();
		InputAnimationSerializationUtils_ReadFloatCurve_mAE6393871E98641F773E1DCC3E7234D6C57AD02C(L_25, L_27, /*hidden argument*/NULL);
		// InputAnimationSerializationUtils.ReadFloatCurve(reader, curves.DirectionX);
		BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128 * L_28 = ___reader0;
		RayCurves_tE200BC10F2980B31D68E54E46BB6EB32508F5604 * L_29 = ___curves1;
		NullCheck(L_29);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_30 = L_29->get_DirectionX_3();
		InputAnimationSerializationUtils_ReadFloatCurve_mAE6393871E98641F773E1DCC3E7234D6C57AD02C(L_28, L_30, /*hidden argument*/NULL);
		// InputAnimationSerializationUtils.ReadFloatCurve(reader, curves.DirectionY);
		BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128 * L_31 = ___reader0;
		RayCurves_tE200BC10F2980B31D68E54E46BB6EB32508F5604 * L_32 = ___curves1;
		NullCheck(L_32);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_33 = L_32->get_DirectionY_4();
		InputAnimationSerializationUtils_ReadFloatCurve_mAE6393871E98641F773E1DCC3E7234D6C57AD02C(L_31, L_33, /*hidden argument*/NULL);
		// InputAnimationSerializationUtils.ReadFloatCurve(reader, curves.DirectionZ);
		BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128 * L_34 = ___reader0;
		RayCurves_tE200BC10F2980B31D68E54E46BB6EB32508F5604 * L_35 = ___curves1;
		NullCheck(L_35);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_36 = L_35->get_DirectionZ_5();
		InputAnimationSerializationUtils_ReadFloatCurve_mAE6393871E98641F773E1DCC3E7234D6C57AD02C(L_34, L_36, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation::OptimizePositionCurve(UnityEngine.AnimationCurve&,UnityEngine.AnimationCurve&,UnityEngine.AnimationCurve&,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAnimation_OptimizePositionCurve_mD3E72D31BD1D2BBF108362A65BBCA96641E39975 (AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** ___curveX0, AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** ___curveY1, AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** ___curveZ2, float ___threshold3, int32_t ___partitionSize4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass71_0_tB8844843F079F21090643D261C6084F55D933677  V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// float sqrThreshold = threshold * threshold;
		float L_0 = ___threshold3;
		float L_1 = ___threshold3;
		(&V_0)->set_sqrThreshold_3(((float)il2cpp_codegen_multiply((float)L_0, (float)L_1)));
		// var inCurveX = curveX;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** L_2 = ___curveX0;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_3 = *((AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 **)L_2);
		(&V_0)->set_inCurveX_0(L_3);
		// var inCurveY = curveY;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** L_4 = ___curveY1;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_5 = *((AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 **)L_4);
		(&V_0)->set_inCurveY_1(L_5);
		// var inCurveZ = curveZ;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** L_6 = ___curveZ2;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_7 = *((AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 **)L_6);
		(&V_0)->set_inCurveZ_2(L_7);
		// var outCurveX = new AnimationCurve();
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_8 = (AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 *)il2cpp_codegen_object_new(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_il2cpp_TypeInfo_var);
		AnimationCurve__ctor_m68D6F819242C539EC522FEAFFEB6F1579767043E(L_8, /*hidden argument*/NULL);
		(&V_0)->set_outCurveX_4(L_8);
		// var outCurveY = new AnimationCurve();
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_9 = (AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 *)il2cpp_codegen_object_new(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_il2cpp_TypeInfo_var);
		AnimationCurve__ctor_m68D6F819242C539EC522FEAFFEB6F1579767043E(L_9, /*hidden argument*/NULL);
		(&V_0)->set_outCurveY_5(L_9);
		// var outCurveZ = new AnimationCurve();
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_10 = (AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 *)il2cpp_codegen_object_new(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_il2cpp_TypeInfo_var);
		AnimationCurve__ctor_m68D6F819242C539EC522FEAFFEB6F1579767043E(L_10, /*hidden argument*/NULL);
		(&V_0)->set_outCurveZ_6(L_10);
		// outCurveX.AddKey(curveX[0]);
		U3CU3Ec__DisplayClass71_0_tB8844843F079F21090643D261C6084F55D933677  L_11 = V_0;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_12 = L_11.get_outCurveX_4();
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** L_13 = ___curveX0;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_14 = *((AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 **)L_13);
		NullCheck(L_14);
		Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  L_15;
		L_15 = AnimationCurve_get_Item_mD5F6B4C79C432C9CEADB6D116C07969802D5611A(L_14, 0, /*hidden argument*/NULL);
		NullCheck(L_12);
		int32_t L_16;
		L_16 = AnimationCurve_AddKey_m3AEE7259785540EF6A157BA99B3737AC60E30D9A(L_12, L_15, /*hidden argument*/NULL);
		// outCurveY.AddKey(curveY[0]);
		U3CU3Ec__DisplayClass71_0_tB8844843F079F21090643D261C6084F55D933677  L_17 = V_0;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_18 = L_17.get_outCurveY_5();
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** L_19 = ___curveY1;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_20 = *((AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 **)L_19);
		NullCheck(L_20);
		Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  L_21;
		L_21 = AnimationCurve_get_Item_mD5F6B4C79C432C9CEADB6D116C07969802D5611A(L_20, 0, /*hidden argument*/NULL);
		NullCheck(L_18);
		int32_t L_22;
		L_22 = AnimationCurve_AddKey_m3AEE7259785540EF6A157BA99B3737AC60E30D9A(L_18, L_21, /*hidden argument*/NULL);
		// outCurveZ.AddKey(curveZ[0]);
		U3CU3Ec__DisplayClass71_0_tB8844843F079F21090643D261C6084F55D933677  L_23 = V_0;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_24 = L_23.get_outCurveZ_6();
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** L_25 = ___curveZ2;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_26 = *((AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 **)L_25);
		NullCheck(L_26);
		Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  L_27;
		L_27 = AnimationCurve_get_Item_mD5F6B4C79C432C9CEADB6D116C07969802D5611A(L_26, 0, /*hidden argument*/NULL);
		NullCheck(L_24);
		int32_t L_28;
		L_28 = AnimationCurve_AddKey_m3AEE7259785540EF6A157BA99B3737AC60E30D9A(L_24, L_27, /*hidden argument*/NULL);
		// if (partitionSize == 0)
		int32_t L_29 = ___partitionSize4;
		if (L_29)
		{
			goto IL_00f0;
		}
	}
	{
		// Recurse(0, curveX.length - 1);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** L_30 = ___curveX0;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_31 = *((AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 **)L_30);
		NullCheck(L_31);
		int32_t L_32;
		L_32 = AnimationCurve_get_length_mB3D0734222EE55DB1389BCB98CCB1324AF8AA4E0(L_31, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534_il2cpp_TypeInfo_var);
		InputAnimation_U3COptimizePositionCurveU3Eg__RecurseU7C71_0_mCE7378227CFF97D8540CA6327008C7BF92300991(0, ((int32_t)il2cpp_codegen_subtract((int32_t)L_32, (int32_t)1)), (U3CU3Ec__DisplayClass71_0_tB8844843F079F21090643D261C6084F55D933677 *)(&V_0), /*hidden argument*/NULL);
		// outCurveX.AddKey(curveX[curveX.length - 1]);
		U3CU3Ec__DisplayClass71_0_tB8844843F079F21090643D261C6084F55D933677  L_33 = V_0;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_34 = L_33.get_outCurveX_4();
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** L_35 = ___curveX0;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_36 = *((AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 **)L_35);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** L_37 = ___curveX0;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_38 = *((AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 **)L_37);
		NullCheck(L_38);
		int32_t L_39;
		L_39 = AnimationCurve_get_length_mB3D0734222EE55DB1389BCB98CCB1324AF8AA4E0(L_38, /*hidden argument*/NULL);
		NullCheck(L_36);
		Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  L_40;
		L_40 = AnimationCurve_get_Item_mD5F6B4C79C432C9CEADB6D116C07969802D5611A(L_36, ((int32_t)il2cpp_codegen_subtract((int32_t)L_39, (int32_t)1)), /*hidden argument*/NULL);
		NullCheck(L_34);
		int32_t L_41;
		L_41 = AnimationCurve_AddKey_m3AEE7259785540EF6A157BA99B3737AC60E30D9A(L_34, L_40, /*hidden argument*/NULL);
		// outCurveY.AddKey(curveY[curveY.length - 1]);
		U3CU3Ec__DisplayClass71_0_tB8844843F079F21090643D261C6084F55D933677  L_42 = V_0;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_43 = L_42.get_outCurveY_5();
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** L_44 = ___curveY1;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_45 = *((AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 **)L_44);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** L_46 = ___curveY1;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_47 = *((AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 **)L_46);
		NullCheck(L_47);
		int32_t L_48;
		L_48 = AnimationCurve_get_length_mB3D0734222EE55DB1389BCB98CCB1324AF8AA4E0(L_47, /*hidden argument*/NULL);
		NullCheck(L_45);
		Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  L_49;
		L_49 = AnimationCurve_get_Item_mD5F6B4C79C432C9CEADB6D116C07969802D5611A(L_45, ((int32_t)il2cpp_codegen_subtract((int32_t)L_48, (int32_t)1)), /*hidden argument*/NULL);
		NullCheck(L_43);
		int32_t L_50;
		L_50 = AnimationCurve_AddKey_m3AEE7259785540EF6A157BA99B3737AC60E30D9A(L_43, L_49, /*hidden argument*/NULL);
		// outCurveZ.AddKey(curveZ[curveZ.length - 1]);
		U3CU3Ec__DisplayClass71_0_tB8844843F079F21090643D261C6084F55D933677  L_51 = V_0;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_52 = L_51.get_outCurveZ_6();
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** L_53 = ___curveZ2;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_54 = *((AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 **)L_53);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** L_55 = ___curveZ2;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_56 = *((AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 **)L_55);
		NullCheck(L_56);
		int32_t L_57;
		L_57 = AnimationCurve_get_length_mB3D0734222EE55DB1389BCB98CCB1324AF8AA4E0(L_56, /*hidden argument*/NULL);
		NullCheck(L_54);
		Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  L_58;
		L_58 = AnimationCurve_get_Item_mD5F6B4C79C432C9CEADB6D116C07969802D5611A(L_54, ((int32_t)il2cpp_codegen_subtract((int32_t)L_57, (int32_t)1)), /*hidden argument*/NULL);
		NullCheck(L_52);
		int32_t L_59;
		L_59 = AnimationCurve_AddKey_m3AEE7259785540EF6A157BA99B3737AC60E30D9A(L_52, L_58, /*hidden argument*/NULL);
		// }
		goto IL_0161;
	}

IL_00f0:
	{
		// for (int i = 0, j = partitionSize; i < curveX.length - partitionSize; i += partitionSize, j = Mathf.Min(j + partitionSize, curveX.length - 1))
		V_1 = 0;
		// for (int i = 0, j = partitionSize; i < curveX.length - partitionSize; i += partitionSize, j = Mathf.Min(j + partitionSize, curveX.length - 1))
		int32_t L_60 = ___partitionSize4;
		V_2 = L_60;
		goto IL_0154;
	}

IL_00f7:
	{
		// Recurse(i, j);
		int32_t L_61 = V_1;
		int32_t L_62 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534_il2cpp_TypeInfo_var);
		InputAnimation_U3COptimizePositionCurveU3Eg__RecurseU7C71_0_mCE7378227CFF97D8540CA6327008C7BF92300991(L_61, L_62, (U3CU3Ec__DisplayClass71_0_tB8844843F079F21090643D261C6084F55D933677 *)(&V_0), /*hidden argument*/NULL);
		// outCurveX.AddKey(curveX[j]);
		U3CU3Ec__DisplayClass71_0_tB8844843F079F21090643D261C6084F55D933677  L_63 = V_0;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_64 = L_63.get_outCurveX_4();
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** L_65 = ___curveX0;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_66 = *((AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 **)L_65);
		int32_t L_67 = V_2;
		NullCheck(L_66);
		Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  L_68;
		L_68 = AnimationCurve_get_Item_mD5F6B4C79C432C9CEADB6D116C07969802D5611A(L_66, L_67, /*hidden argument*/NULL);
		NullCheck(L_64);
		int32_t L_69;
		L_69 = AnimationCurve_AddKey_m3AEE7259785540EF6A157BA99B3737AC60E30D9A(L_64, L_68, /*hidden argument*/NULL);
		// outCurveY.AddKey(curveY[j]);
		U3CU3Ec__DisplayClass71_0_tB8844843F079F21090643D261C6084F55D933677  L_70 = V_0;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_71 = L_70.get_outCurveY_5();
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** L_72 = ___curveY1;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_73 = *((AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 **)L_72);
		int32_t L_74 = V_2;
		NullCheck(L_73);
		Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  L_75;
		L_75 = AnimationCurve_get_Item_mD5F6B4C79C432C9CEADB6D116C07969802D5611A(L_73, L_74, /*hidden argument*/NULL);
		NullCheck(L_71);
		int32_t L_76;
		L_76 = AnimationCurve_AddKey_m3AEE7259785540EF6A157BA99B3737AC60E30D9A(L_71, L_75, /*hidden argument*/NULL);
		// outCurveZ.AddKey(curveZ[j]);
		U3CU3Ec__DisplayClass71_0_tB8844843F079F21090643D261C6084F55D933677  L_77 = V_0;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_78 = L_77.get_outCurveZ_6();
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** L_79 = ___curveZ2;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_80 = *((AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 **)L_79);
		int32_t L_81 = V_2;
		NullCheck(L_80);
		Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  L_82;
		L_82 = AnimationCurve_get_Item_mD5F6B4C79C432C9CEADB6D116C07969802D5611A(L_80, L_81, /*hidden argument*/NULL);
		NullCheck(L_78);
		int32_t L_83;
		L_83 = AnimationCurve_AddKey_m3AEE7259785540EF6A157BA99B3737AC60E30D9A(L_78, L_82, /*hidden argument*/NULL);
		// for (int i = 0, j = partitionSize; i < curveX.length - partitionSize; i += partitionSize, j = Mathf.Min(j + partitionSize, curveX.length - 1))
		int32_t L_84 = V_1;
		int32_t L_85 = ___partitionSize4;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_84, (int32_t)L_85));
		// for (int i = 0, j = partitionSize; i < curveX.length - partitionSize; i += partitionSize, j = Mathf.Min(j + partitionSize, curveX.length - 1))
		int32_t L_86 = V_2;
		int32_t L_87 = ___partitionSize4;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** L_88 = ___curveX0;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_89 = *((AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 **)L_88);
		NullCheck(L_89);
		int32_t L_90;
		L_90 = AnimationCurve_get_length_mB3D0734222EE55DB1389BCB98CCB1324AF8AA4E0(L_89, /*hidden argument*/NULL);
		int32_t L_91;
		L_91 = Mathf_Min_m8038BC2CE141C9AF3ECA2E31B88A9768423B1519(((int32_t)il2cpp_codegen_add((int32_t)L_86, (int32_t)L_87)), ((int32_t)il2cpp_codegen_subtract((int32_t)L_90, (int32_t)1)), /*hidden argument*/NULL);
		V_2 = L_91;
	}

IL_0154:
	{
		// for (int i = 0, j = partitionSize; i < curveX.length - partitionSize; i += partitionSize, j = Mathf.Min(j + partitionSize, curveX.length - 1))
		int32_t L_92 = V_1;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** L_93 = ___curveX0;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_94 = *((AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 **)L_93);
		NullCheck(L_94);
		int32_t L_95;
		L_95 = AnimationCurve_get_length_mB3D0734222EE55DB1389BCB98CCB1324AF8AA4E0(L_94, /*hidden argument*/NULL);
		int32_t L_96 = ___partitionSize4;
		if ((((int32_t)L_92) < ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_95, (int32_t)L_96)))))
		{
			goto IL_00f7;
		}
	}

IL_0161:
	{
		// curveX = outCurveX;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** L_97 = ___curveX0;
		U3CU3Ec__DisplayClass71_0_tB8844843F079F21090643D261C6084F55D933677  L_98 = V_0;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_99 = L_98.get_outCurveX_4();
		*((RuntimeObject **)L_97) = (RuntimeObject *)L_99;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_97, (void*)(RuntimeObject *)L_99);
		// curveY = outCurveY;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** L_100 = ___curveY1;
		U3CU3Ec__DisplayClass71_0_tB8844843F079F21090643D261C6084F55D933677  L_101 = V_0;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_102 = L_101.get_outCurveY_5();
		*((RuntimeObject **)L_100) = (RuntimeObject *)L_102;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_100, (void*)(RuntimeObject *)L_102);
		// curveZ = outCurveZ;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** L_103 = ___curveZ2;
		U3CU3Ec__DisplayClass71_0_tB8844843F079F21090643D261C6084F55D933677  L_104 = V_0;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_105 = L_104.get_outCurveZ_6();
		*((RuntimeObject **)L_103) = (RuntimeObject *)L_105;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_103, (void*)(RuntimeObject *)L_105);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation::OptimizeDirectionCurve(UnityEngine.AnimationCurve&,UnityEngine.AnimationCurve&,UnityEngine.AnimationCurve&,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAnimation_OptimizeDirectionCurve_m0F698E9A530A3239F9E340156C05114B083079E7 (AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** ___curveX0, AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** ___curveY1, AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** ___curveZ2, float ___threshold3, int32_t ___partitionSize4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass72_0_t86C7C5FDF8A191F3176A7AD9E5052C7FCCF17343  V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// float cosThreshold = Mathf.Cos(threshold * Mathf.PI / 180f);
		float L_0 = ___threshold3;
		float L_1;
		L_1 = cosf(((float)((float)((float)il2cpp_codegen_multiply((float)L_0, (float)(3.14159274f)))/(float)(180.0f))));
		(&V_0)->set_cosThreshold_3(L_1);
		// var inCurveX = curveX;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** L_2 = ___curveX0;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_3 = *((AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 **)L_2);
		(&V_0)->set_inCurveX_0(L_3);
		// var inCurveY = curveY;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** L_4 = ___curveY1;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_5 = *((AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 **)L_4);
		(&V_0)->set_inCurveY_1(L_5);
		// var inCurveZ = curveZ;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** L_6 = ___curveZ2;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_7 = *((AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 **)L_6);
		(&V_0)->set_inCurveZ_2(L_7);
		// var outCurveX = new AnimationCurve();
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_8 = (AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 *)il2cpp_codegen_object_new(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_il2cpp_TypeInfo_var);
		AnimationCurve__ctor_m68D6F819242C539EC522FEAFFEB6F1579767043E(L_8, /*hidden argument*/NULL);
		(&V_0)->set_outCurveX_4(L_8);
		// var outCurveY = new AnimationCurve();
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_9 = (AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 *)il2cpp_codegen_object_new(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_il2cpp_TypeInfo_var);
		AnimationCurve__ctor_m68D6F819242C539EC522FEAFFEB6F1579767043E(L_9, /*hidden argument*/NULL);
		(&V_0)->set_outCurveY_5(L_9);
		// var outCurveZ = new AnimationCurve();
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_10 = (AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 *)il2cpp_codegen_object_new(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_il2cpp_TypeInfo_var);
		AnimationCurve__ctor_m68D6F819242C539EC522FEAFFEB6F1579767043E(L_10, /*hidden argument*/NULL);
		(&V_0)->set_outCurveZ_6(L_10);
		// outCurveX.AddKey(curveX[0]);
		U3CU3Ec__DisplayClass72_0_t86C7C5FDF8A191F3176A7AD9E5052C7FCCF17343  L_11 = V_0;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_12 = L_11.get_outCurveX_4();
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** L_13 = ___curveX0;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_14 = *((AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 **)L_13);
		NullCheck(L_14);
		Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  L_15;
		L_15 = AnimationCurve_get_Item_mD5F6B4C79C432C9CEADB6D116C07969802D5611A(L_14, 0, /*hidden argument*/NULL);
		NullCheck(L_12);
		int32_t L_16;
		L_16 = AnimationCurve_AddKey_m3AEE7259785540EF6A157BA99B3737AC60E30D9A(L_12, L_15, /*hidden argument*/NULL);
		// outCurveY.AddKey(curveY[0]);
		U3CU3Ec__DisplayClass72_0_t86C7C5FDF8A191F3176A7AD9E5052C7FCCF17343  L_17 = V_0;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_18 = L_17.get_outCurveY_5();
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** L_19 = ___curveY1;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_20 = *((AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 **)L_19);
		NullCheck(L_20);
		Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  L_21;
		L_21 = AnimationCurve_get_Item_mD5F6B4C79C432C9CEADB6D116C07969802D5611A(L_20, 0, /*hidden argument*/NULL);
		NullCheck(L_18);
		int32_t L_22;
		L_22 = AnimationCurve_AddKey_m3AEE7259785540EF6A157BA99B3737AC60E30D9A(L_18, L_21, /*hidden argument*/NULL);
		// outCurveZ.AddKey(curveZ[0]);
		U3CU3Ec__DisplayClass72_0_t86C7C5FDF8A191F3176A7AD9E5052C7FCCF17343  L_23 = V_0;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_24 = L_23.get_outCurveZ_6();
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** L_25 = ___curveZ2;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_26 = *((AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 **)L_25);
		NullCheck(L_26);
		Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  L_27;
		L_27 = AnimationCurve_get_Item_mD5F6B4C79C432C9CEADB6D116C07969802D5611A(L_26, 0, /*hidden argument*/NULL);
		NullCheck(L_24);
		int32_t L_28;
		L_28 = AnimationCurve_AddKey_m3AEE7259785540EF6A157BA99B3737AC60E30D9A(L_24, L_27, /*hidden argument*/NULL);
		// if (partitionSize == 0)
		int32_t L_29 = ___partitionSize4;
		if (L_29)
		{
			goto IL_00ff;
		}
	}
	{
		// Recurse(0, curveX.length - 1);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** L_30 = ___curveX0;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_31 = *((AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 **)L_30);
		NullCheck(L_31);
		int32_t L_32;
		L_32 = AnimationCurve_get_length_mB3D0734222EE55DB1389BCB98CCB1324AF8AA4E0(L_31, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534_il2cpp_TypeInfo_var);
		InputAnimation_U3COptimizeDirectionCurveU3Eg__RecurseU7C72_0_m570AF6F317703FF8FE4C48CE49E4FBA311BD8B57(0, ((int32_t)il2cpp_codegen_subtract((int32_t)L_32, (int32_t)1)), (U3CU3Ec__DisplayClass72_0_t86C7C5FDF8A191F3176A7AD9E5052C7FCCF17343 *)(&V_0), /*hidden argument*/NULL);
		// outCurveX.AddKey(curveX[curveX.length - 1]);
		U3CU3Ec__DisplayClass72_0_t86C7C5FDF8A191F3176A7AD9E5052C7FCCF17343  L_33 = V_0;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_34 = L_33.get_outCurveX_4();
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** L_35 = ___curveX0;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_36 = *((AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 **)L_35);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** L_37 = ___curveX0;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_38 = *((AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 **)L_37);
		NullCheck(L_38);
		int32_t L_39;
		L_39 = AnimationCurve_get_length_mB3D0734222EE55DB1389BCB98CCB1324AF8AA4E0(L_38, /*hidden argument*/NULL);
		NullCheck(L_36);
		Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  L_40;
		L_40 = AnimationCurve_get_Item_mD5F6B4C79C432C9CEADB6D116C07969802D5611A(L_36, ((int32_t)il2cpp_codegen_subtract((int32_t)L_39, (int32_t)1)), /*hidden argument*/NULL);
		NullCheck(L_34);
		int32_t L_41;
		L_41 = AnimationCurve_AddKey_m3AEE7259785540EF6A157BA99B3737AC60E30D9A(L_34, L_40, /*hidden argument*/NULL);
		// outCurveY.AddKey(curveY[curveY.length - 1]);
		U3CU3Ec__DisplayClass72_0_t86C7C5FDF8A191F3176A7AD9E5052C7FCCF17343  L_42 = V_0;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_43 = L_42.get_outCurveY_5();
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** L_44 = ___curveY1;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_45 = *((AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 **)L_44);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** L_46 = ___curveY1;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_47 = *((AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 **)L_46);
		NullCheck(L_47);
		int32_t L_48;
		L_48 = AnimationCurve_get_length_mB3D0734222EE55DB1389BCB98CCB1324AF8AA4E0(L_47, /*hidden argument*/NULL);
		NullCheck(L_45);
		Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  L_49;
		L_49 = AnimationCurve_get_Item_mD5F6B4C79C432C9CEADB6D116C07969802D5611A(L_45, ((int32_t)il2cpp_codegen_subtract((int32_t)L_48, (int32_t)1)), /*hidden argument*/NULL);
		NullCheck(L_43);
		int32_t L_50;
		L_50 = AnimationCurve_AddKey_m3AEE7259785540EF6A157BA99B3737AC60E30D9A(L_43, L_49, /*hidden argument*/NULL);
		// outCurveZ.AddKey(curveZ[curveZ.length - 1]);
		U3CU3Ec__DisplayClass72_0_t86C7C5FDF8A191F3176A7AD9E5052C7FCCF17343  L_51 = V_0;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_52 = L_51.get_outCurveZ_6();
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** L_53 = ___curveZ2;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_54 = *((AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 **)L_53);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** L_55 = ___curveZ2;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_56 = *((AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 **)L_55);
		NullCheck(L_56);
		int32_t L_57;
		L_57 = AnimationCurve_get_length_mB3D0734222EE55DB1389BCB98CCB1324AF8AA4E0(L_56, /*hidden argument*/NULL);
		NullCheck(L_54);
		Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  L_58;
		L_58 = AnimationCurve_get_Item_mD5F6B4C79C432C9CEADB6D116C07969802D5611A(L_54, ((int32_t)il2cpp_codegen_subtract((int32_t)L_57, (int32_t)1)), /*hidden argument*/NULL);
		NullCheck(L_52);
		int32_t L_59;
		L_59 = AnimationCurve_AddKey_m3AEE7259785540EF6A157BA99B3737AC60E30D9A(L_52, L_58, /*hidden argument*/NULL);
		// }
		goto IL_0170;
	}

IL_00ff:
	{
		// for (int i = 0, j = partitionSize; i < curveX.length - partitionSize; i += partitionSize, j = Mathf.Min(j + partitionSize, curveX.length - 1))
		V_1 = 0;
		// for (int i = 0, j = partitionSize; i < curveX.length - partitionSize; i += partitionSize, j = Mathf.Min(j + partitionSize, curveX.length - 1))
		int32_t L_60 = ___partitionSize4;
		V_2 = L_60;
		goto IL_0163;
	}

IL_0106:
	{
		// Recurse(i, j);
		int32_t L_61 = V_1;
		int32_t L_62 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534_il2cpp_TypeInfo_var);
		InputAnimation_U3COptimizeDirectionCurveU3Eg__RecurseU7C72_0_m570AF6F317703FF8FE4C48CE49E4FBA311BD8B57(L_61, L_62, (U3CU3Ec__DisplayClass72_0_t86C7C5FDF8A191F3176A7AD9E5052C7FCCF17343 *)(&V_0), /*hidden argument*/NULL);
		// outCurveX.AddKey(curveX[j]);
		U3CU3Ec__DisplayClass72_0_t86C7C5FDF8A191F3176A7AD9E5052C7FCCF17343  L_63 = V_0;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_64 = L_63.get_outCurveX_4();
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** L_65 = ___curveX0;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_66 = *((AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 **)L_65);
		int32_t L_67 = V_2;
		NullCheck(L_66);
		Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  L_68;
		L_68 = AnimationCurve_get_Item_mD5F6B4C79C432C9CEADB6D116C07969802D5611A(L_66, L_67, /*hidden argument*/NULL);
		NullCheck(L_64);
		int32_t L_69;
		L_69 = AnimationCurve_AddKey_m3AEE7259785540EF6A157BA99B3737AC60E30D9A(L_64, L_68, /*hidden argument*/NULL);
		// outCurveY.AddKey(curveY[j]);
		U3CU3Ec__DisplayClass72_0_t86C7C5FDF8A191F3176A7AD9E5052C7FCCF17343  L_70 = V_0;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_71 = L_70.get_outCurveY_5();
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** L_72 = ___curveY1;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_73 = *((AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 **)L_72);
		int32_t L_74 = V_2;
		NullCheck(L_73);
		Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  L_75;
		L_75 = AnimationCurve_get_Item_mD5F6B4C79C432C9CEADB6D116C07969802D5611A(L_73, L_74, /*hidden argument*/NULL);
		NullCheck(L_71);
		int32_t L_76;
		L_76 = AnimationCurve_AddKey_m3AEE7259785540EF6A157BA99B3737AC60E30D9A(L_71, L_75, /*hidden argument*/NULL);
		// outCurveZ.AddKey(curveZ[j]);
		U3CU3Ec__DisplayClass72_0_t86C7C5FDF8A191F3176A7AD9E5052C7FCCF17343  L_77 = V_0;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_78 = L_77.get_outCurveZ_6();
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** L_79 = ___curveZ2;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_80 = *((AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 **)L_79);
		int32_t L_81 = V_2;
		NullCheck(L_80);
		Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  L_82;
		L_82 = AnimationCurve_get_Item_mD5F6B4C79C432C9CEADB6D116C07969802D5611A(L_80, L_81, /*hidden argument*/NULL);
		NullCheck(L_78);
		int32_t L_83;
		L_83 = AnimationCurve_AddKey_m3AEE7259785540EF6A157BA99B3737AC60E30D9A(L_78, L_82, /*hidden argument*/NULL);
		// for (int i = 0, j = partitionSize; i < curveX.length - partitionSize; i += partitionSize, j = Mathf.Min(j + partitionSize, curveX.length - 1))
		int32_t L_84 = V_1;
		int32_t L_85 = ___partitionSize4;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_84, (int32_t)L_85));
		// for (int i = 0, j = partitionSize; i < curveX.length - partitionSize; i += partitionSize, j = Mathf.Min(j + partitionSize, curveX.length - 1))
		int32_t L_86 = V_2;
		int32_t L_87 = ___partitionSize4;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** L_88 = ___curveX0;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_89 = *((AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 **)L_88);
		NullCheck(L_89);
		int32_t L_90;
		L_90 = AnimationCurve_get_length_mB3D0734222EE55DB1389BCB98CCB1324AF8AA4E0(L_89, /*hidden argument*/NULL);
		int32_t L_91;
		L_91 = Mathf_Min_m8038BC2CE141C9AF3ECA2E31B88A9768423B1519(((int32_t)il2cpp_codegen_add((int32_t)L_86, (int32_t)L_87)), ((int32_t)il2cpp_codegen_subtract((int32_t)L_90, (int32_t)1)), /*hidden argument*/NULL);
		V_2 = L_91;
	}

IL_0163:
	{
		// for (int i = 0, j = partitionSize; i < curveX.length - partitionSize; i += partitionSize, j = Mathf.Min(j + partitionSize, curveX.length - 1))
		int32_t L_92 = V_1;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** L_93 = ___curveX0;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_94 = *((AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 **)L_93);
		NullCheck(L_94);
		int32_t L_95;
		L_95 = AnimationCurve_get_length_mB3D0734222EE55DB1389BCB98CCB1324AF8AA4E0(L_94, /*hidden argument*/NULL);
		int32_t L_96 = ___partitionSize4;
		if ((((int32_t)L_92) < ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_95, (int32_t)L_96)))))
		{
			goto IL_0106;
		}
	}

IL_0170:
	{
		// curveX = outCurveX;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** L_97 = ___curveX0;
		U3CU3Ec__DisplayClass72_0_t86C7C5FDF8A191F3176A7AD9E5052C7FCCF17343  L_98 = V_0;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_99 = L_98.get_outCurveX_4();
		*((RuntimeObject **)L_97) = (RuntimeObject *)L_99;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_97, (void*)(RuntimeObject *)L_99);
		// curveY = outCurveY;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** L_100 = ___curveY1;
		U3CU3Ec__DisplayClass72_0_t86C7C5FDF8A191F3176A7AD9E5052C7FCCF17343  L_101 = V_0;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_102 = L_101.get_outCurveY_5();
		*((RuntimeObject **)L_100) = (RuntimeObject *)L_102;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_100, (void*)(RuntimeObject *)L_102);
		// curveZ = outCurveZ;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** L_103 = ___curveZ2;
		U3CU3Ec__DisplayClass72_0_t86C7C5FDF8A191F3176A7AD9E5052C7FCCF17343  L_104 = V_0;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_105 = L_104.get_outCurveZ_6();
		*((RuntimeObject **)L_103) = (RuntimeObject *)L_105;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_103, (void*)(RuntimeObject *)L_105);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation::OptimizeRotationCurve(UnityEngine.AnimationCurve&,UnityEngine.AnimationCurve&,UnityEngine.AnimationCurve&,UnityEngine.AnimationCurve&,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAnimation_OptimizeRotationCurve_mC170C6AB83A9C159AB6BA2BE2F0FE2D18791DDA4 (AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** ___curveX0, AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** ___curveY1, AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** ___curveZ2, AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** ___curveW3, float ___threshold4, int32_t ___partitionSize5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass73_0_tA9EDB2D4E6569D8D39993A6304B9396566B6F89C  V_0;
	memset((&V_0), 0, sizeof(V_0));
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		// float compThreshold = Mathf.Sqrt((Mathf.Cos(threshold * Mathf.PI / 180f) + 1f) / 2f);
		float L_0 = ___threshold4;
		float L_1;
		L_1 = cosf(((float)((float)((float)il2cpp_codegen_multiply((float)L_0, (float)(3.14159274f)))/(float)(180.0f))));
		float L_2;
		L_2 = sqrtf(((float)((float)((float)il2cpp_codegen_add((float)L_1, (float)(1.0f)))/(float)(2.0f))));
		(&V_0)->set_compThreshold_4(L_2);
		// var inCurveX = curveX;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** L_3 = ___curveX0;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_4 = *((AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 **)L_3);
		(&V_0)->set_inCurveX_0(L_4);
		// var inCurveY = curveY;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** L_5 = ___curveY1;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_6 = *((AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 **)L_5);
		(&V_0)->set_inCurveY_1(L_6);
		// var inCurveZ = curveZ;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** L_7 = ___curveZ2;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_8 = *((AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 **)L_7);
		(&V_0)->set_inCurveZ_2(L_8);
		// var inCurveW = curveW;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** L_9 = ___curveW3;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_10 = *((AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 **)L_9);
		(&V_0)->set_inCurveW_3(L_10);
		// var outCurveX = new AnimationCurve();
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_11 = (AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 *)il2cpp_codegen_object_new(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_il2cpp_TypeInfo_var);
		AnimationCurve__ctor_m68D6F819242C539EC522FEAFFEB6F1579767043E(L_11, /*hidden argument*/NULL);
		(&V_0)->set_outCurveX_5(L_11);
		// var outCurveY = new AnimationCurve();
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_12 = (AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 *)il2cpp_codegen_object_new(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_il2cpp_TypeInfo_var);
		AnimationCurve__ctor_m68D6F819242C539EC522FEAFFEB6F1579767043E(L_12, /*hidden argument*/NULL);
		(&V_0)->set_outCurveY_6(L_12);
		// var outCurveZ = new AnimationCurve();
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_13 = (AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 *)il2cpp_codegen_object_new(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_il2cpp_TypeInfo_var);
		AnimationCurve__ctor_m68D6F819242C539EC522FEAFFEB6F1579767043E(L_13, /*hidden argument*/NULL);
		(&V_0)->set_outCurveZ_7(L_13);
		// var outCurveW = new AnimationCurve();
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_14 = (AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 *)il2cpp_codegen_object_new(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_il2cpp_TypeInfo_var);
		AnimationCurve__ctor_m68D6F819242C539EC522FEAFFEB6F1579767043E(L_14, /*hidden argument*/NULL);
		V_1 = L_14;
		// outCurveX.AddKey(curveX[0]);
		U3CU3Ec__DisplayClass73_0_tA9EDB2D4E6569D8D39993A6304B9396566B6F89C  L_15 = V_0;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_16 = L_15.get_outCurveX_5();
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** L_17 = ___curveX0;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_18 = *((AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 **)L_17);
		NullCheck(L_18);
		Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  L_19;
		L_19 = AnimationCurve_get_Item_mD5F6B4C79C432C9CEADB6D116C07969802D5611A(L_18, 0, /*hidden argument*/NULL);
		NullCheck(L_16);
		int32_t L_20;
		L_20 = AnimationCurve_AddKey_m3AEE7259785540EF6A157BA99B3737AC60E30D9A(L_16, L_19, /*hidden argument*/NULL);
		// outCurveY.AddKey(curveY[0]);
		U3CU3Ec__DisplayClass73_0_tA9EDB2D4E6569D8D39993A6304B9396566B6F89C  L_21 = V_0;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_22 = L_21.get_outCurveY_6();
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** L_23 = ___curveY1;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_24 = *((AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 **)L_23);
		NullCheck(L_24);
		Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  L_25;
		L_25 = AnimationCurve_get_Item_mD5F6B4C79C432C9CEADB6D116C07969802D5611A(L_24, 0, /*hidden argument*/NULL);
		NullCheck(L_22);
		int32_t L_26;
		L_26 = AnimationCurve_AddKey_m3AEE7259785540EF6A157BA99B3737AC60E30D9A(L_22, L_25, /*hidden argument*/NULL);
		// outCurveZ.AddKey(curveZ[0]);
		U3CU3Ec__DisplayClass73_0_tA9EDB2D4E6569D8D39993A6304B9396566B6F89C  L_27 = V_0;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_28 = L_27.get_outCurveZ_7();
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** L_29 = ___curveZ2;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_30 = *((AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 **)L_29);
		NullCheck(L_30);
		Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  L_31;
		L_31 = AnimationCurve_get_Item_mD5F6B4C79C432C9CEADB6D116C07969802D5611A(L_30, 0, /*hidden argument*/NULL);
		NullCheck(L_28);
		int32_t L_32;
		L_32 = AnimationCurve_AddKey_m3AEE7259785540EF6A157BA99B3737AC60E30D9A(L_28, L_31, /*hidden argument*/NULL);
		// outCurveW.AddKey(curveW[0]);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_33 = V_1;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** L_34 = ___curveW3;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_35 = *((AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 **)L_34);
		NullCheck(L_35);
		Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  L_36;
		L_36 = AnimationCurve_get_Item_mD5F6B4C79C432C9CEADB6D116C07969802D5611A(L_35, 0, /*hidden argument*/NULL);
		NullCheck(L_33);
		int32_t L_37;
		L_37 = AnimationCurve_AddKey_m3AEE7259785540EF6A157BA99B3737AC60E30D9A(L_33, L_36, /*hidden argument*/NULL);
		// if (partitionSize == 0)
		int32_t L_38 = ___partitionSize5;
		if (L_38)
		{
			goto IL_014c;
		}
	}
	{
		// Recurse(0, curveX.length - 1);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** L_39 = ___curveX0;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_40 = *((AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 **)L_39);
		NullCheck(L_40);
		int32_t L_41;
		L_41 = AnimationCurve_get_length_mB3D0734222EE55DB1389BCB98CCB1324AF8AA4E0(L_40, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534_il2cpp_TypeInfo_var);
		InputAnimation_U3COptimizeRotationCurveU3Eg__RecurseU7C73_0_m3A3E4826B5D48C4E6E761FF18E04183A7668E172(0, ((int32_t)il2cpp_codegen_subtract((int32_t)L_41, (int32_t)1)), (U3CU3Ec__DisplayClass73_0_tA9EDB2D4E6569D8D39993A6304B9396566B6F89C *)(&V_0), /*hidden argument*/NULL);
		// outCurveX.AddKey(curveX[curveX.length - 1]);
		U3CU3Ec__DisplayClass73_0_tA9EDB2D4E6569D8D39993A6304B9396566B6F89C  L_42 = V_0;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_43 = L_42.get_outCurveX_5();
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** L_44 = ___curveX0;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_45 = *((AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 **)L_44);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** L_46 = ___curveX0;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_47 = *((AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 **)L_46);
		NullCheck(L_47);
		int32_t L_48;
		L_48 = AnimationCurve_get_length_mB3D0734222EE55DB1389BCB98CCB1324AF8AA4E0(L_47, /*hidden argument*/NULL);
		NullCheck(L_45);
		Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  L_49;
		L_49 = AnimationCurve_get_Item_mD5F6B4C79C432C9CEADB6D116C07969802D5611A(L_45, ((int32_t)il2cpp_codegen_subtract((int32_t)L_48, (int32_t)1)), /*hidden argument*/NULL);
		NullCheck(L_43);
		int32_t L_50;
		L_50 = AnimationCurve_AddKey_m3AEE7259785540EF6A157BA99B3737AC60E30D9A(L_43, L_49, /*hidden argument*/NULL);
		// outCurveY.AddKey(curveY[curveY.length - 1]);
		U3CU3Ec__DisplayClass73_0_tA9EDB2D4E6569D8D39993A6304B9396566B6F89C  L_51 = V_0;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_52 = L_51.get_outCurveY_6();
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** L_53 = ___curveY1;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_54 = *((AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 **)L_53);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** L_55 = ___curveY1;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_56 = *((AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 **)L_55);
		NullCheck(L_56);
		int32_t L_57;
		L_57 = AnimationCurve_get_length_mB3D0734222EE55DB1389BCB98CCB1324AF8AA4E0(L_56, /*hidden argument*/NULL);
		NullCheck(L_54);
		Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  L_58;
		L_58 = AnimationCurve_get_Item_mD5F6B4C79C432C9CEADB6D116C07969802D5611A(L_54, ((int32_t)il2cpp_codegen_subtract((int32_t)L_57, (int32_t)1)), /*hidden argument*/NULL);
		NullCheck(L_52);
		int32_t L_59;
		L_59 = AnimationCurve_AddKey_m3AEE7259785540EF6A157BA99B3737AC60E30D9A(L_52, L_58, /*hidden argument*/NULL);
		// outCurveZ.AddKey(curveZ[curveZ.length - 1]);
		U3CU3Ec__DisplayClass73_0_tA9EDB2D4E6569D8D39993A6304B9396566B6F89C  L_60 = V_0;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_61 = L_60.get_outCurveZ_7();
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** L_62 = ___curveZ2;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_63 = *((AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 **)L_62);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** L_64 = ___curveZ2;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_65 = *((AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 **)L_64);
		NullCheck(L_65);
		int32_t L_66;
		L_66 = AnimationCurve_get_length_mB3D0734222EE55DB1389BCB98CCB1324AF8AA4E0(L_65, /*hidden argument*/NULL);
		NullCheck(L_63);
		Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  L_67;
		L_67 = AnimationCurve_get_Item_mD5F6B4C79C432C9CEADB6D116C07969802D5611A(L_63, ((int32_t)il2cpp_codegen_subtract((int32_t)L_66, (int32_t)1)), /*hidden argument*/NULL);
		NullCheck(L_61);
		int32_t L_68;
		L_68 = AnimationCurve_AddKey_m3AEE7259785540EF6A157BA99B3737AC60E30D9A(L_61, L_67, /*hidden argument*/NULL);
		// outCurveW.AddKey(curveZ[curveW.length - 1]);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_69 = V_1;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** L_70 = ___curveZ2;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_71 = *((AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 **)L_70);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** L_72 = ___curveW3;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_73 = *((AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 **)L_72);
		NullCheck(L_73);
		int32_t L_74;
		L_74 = AnimationCurve_get_length_mB3D0734222EE55DB1389BCB98CCB1324AF8AA4E0(L_73, /*hidden argument*/NULL);
		NullCheck(L_71);
		Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  L_75;
		L_75 = AnimationCurve_get_Item_mD5F6B4C79C432C9CEADB6D116C07969802D5611A(L_71, ((int32_t)il2cpp_codegen_subtract((int32_t)L_74, (int32_t)1)), /*hidden argument*/NULL);
		NullCheck(L_69);
		int32_t L_76;
		L_76 = AnimationCurve_AddKey_m3AEE7259785540EF6A157BA99B3737AC60E30D9A(L_69, L_75, /*hidden argument*/NULL);
		// }
		goto IL_01d1;
	}

IL_014c:
	{
		// for (int i = 0, j = partitionSize; i < curveX.length - partitionSize; i += partitionSize, j = Mathf.Min(j + partitionSize, curveX.length - 1))
		V_2 = 0;
		// for (int i = 0, j = partitionSize; i < curveX.length - partitionSize; i += partitionSize, j = Mathf.Min(j + partitionSize, curveX.length - 1))
		int32_t L_77 = ___partitionSize5;
		V_3 = L_77;
		goto IL_01c4;
	}

IL_0153:
	{
		// Recurse(i, j);
		int32_t L_78 = V_2;
		int32_t L_79 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534_il2cpp_TypeInfo_var);
		InputAnimation_U3COptimizeRotationCurveU3Eg__RecurseU7C73_0_m3A3E4826B5D48C4E6E761FF18E04183A7668E172(L_78, L_79, (U3CU3Ec__DisplayClass73_0_tA9EDB2D4E6569D8D39993A6304B9396566B6F89C *)(&V_0), /*hidden argument*/NULL);
		// outCurveX.AddKey(curveX[j]);
		U3CU3Ec__DisplayClass73_0_tA9EDB2D4E6569D8D39993A6304B9396566B6F89C  L_80 = V_0;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_81 = L_80.get_outCurveX_5();
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** L_82 = ___curveX0;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_83 = *((AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 **)L_82);
		int32_t L_84 = V_3;
		NullCheck(L_83);
		Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  L_85;
		L_85 = AnimationCurve_get_Item_mD5F6B4C79C432C9CEADB6D116C07969802D5611A(L_83, L_84, /*hidden argument*/NULL);
		NullCheck(L_81);
		int32_t L_86;
		L_86 = AnimationCurve_AddKey_m3AEE7259785540EF6A157BA99B3737AC60E30D9A(L_81, L_85, /*hidden argument*/NULL);
		// outCurveY.AddKey(curveY[j]);
		U3CU3Ec__DisplayClass73_0_tA9EDB2D4E6569D8D39993A6304B9396566B6F89C  L_87 = V_0;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_88 = L_87.get_outCurveY_6();
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** L_89 = ___curveY1;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_90 = *((AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 **)L_89);
		int32_t L_91 = V_3;
		NullCheck(L_90);
		Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  L_92;
		L_92 = AnimationCurve_get_Item_mD5F6B4C79C432C9CEADB6D116C07969802D5611A(L_90, L_91, /*hidden argument*/NULL);
		NullCheck(L_88);
		int32_t L_93;
		L_93 = AnimationCurve_AddKey_m3AEE7259785540EF6A157BA99B3737AC60E30D9A(L_88, L_92, /*hidden argument*/NULL);
		// outCurveZ.AddKey(curveZ[j]);
		U3CU3Ec__DisplayClass73_0_tA9EDB2D4E6569D8D39993A6304B9396566B6F89C  L_94 = V_0;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_95 = L_94.get_outCurveZ_7();
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** L_96 = ___curveZ2;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_97 = *((AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 **)L_96);
		int32_t L_98 = V_3;
		NullCheck(L_97);
		Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  L_99;
		L_99 = AnimationCurve_get_Item_mD5F6B4C79C432C9CEADB6D116C07969802D5611A(L_97, L_98, /*hidden argument*/NULL);
		NullCheck(L_95);
		int32_t L_100;
		L_100 = AnimationCurve_AddKey_m3AEE7259785540EF6A157BA99B3737AC60E30D9A(L_95, L_99, /*hidden argument*/NULL);
		// outCurveZ.AddKey(curveW[j]);
		U3CU3Ec__DisplayClass73_0_tA9EDB2D4E6569D8D39993A6304B9396566B6F89C  L_101 = V_0;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_102 = L_101.get_outCurveZ_7();
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** L_103 = ___curveW3;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_104 = *((AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 **)L_103);
		int32_t L_105 = V_3;
		NullCheck(L_104);
		Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  L_106;
		L_106 = AnimationCurve_get_Item_mD5F6B4C79C432C9CEADB6D116C07969802D5611A(L_104, L_105, /*hidden argument*/NULL);
		NullCheck(L_102);
		int32_t L_107;
		L_107 = AnimationCurve_AddKey_m3AEE7259785540EF6A157BA99B3737AC60E30D9A(L_102, L_106, /*hidden argument*/NULL);
		// for (int i = 0, j = partitionSize; i < curveX.length - partitionSize; i += partitionSize, j = Mathf.Min(j + partitionSize, curveX.length - 1))
		int32_t L_108 = V_2;
		int32_t L_109 = ___partitionSize5;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_108, (int32_t)L_109));
		// for (int i = 0, j = partitionSize; i < curveX.length - partitionSize; i += partitionSize, j = Mathf.Min(j + partitionSize, curveX.length - 1))
		int32_t L_110 = V_3;
		int32_t L_111 = ___partitionSize5;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** L_112 = ___curveX0;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_113 = *((AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 **)L_112);
		NullCheck(L_113);
		int32_t L_114;
		L_114 = AnimationCurve_get_length_mB3D0734222EE55DB1389BCB98CCB1324AF8AA4E0(L_113, /*hidden argument*/NULL);
		int32_t L_115;
		L_115 = Mathf_Min_m8038BC2CE141C9AF3ECA2E31B88A9768423B1519(((int32_t)il2cpp_codegen_add((int32_t)L_110, (int32_t)L_111)), ((int32_t)il2cpp_codegen_subtract((int32_t)L_114, (int32_t)1)), /*hidden argument*/NULL);
		V_3 = L_115;
	}

IL_01c4:
	{
		// for (int i = 0, j = partitionSize; i < curveX.length - partitionSize; i += partitionSize, j = Mathf.Min(j + partitionSize, curveX.length - 1))
		int32_t L_116 = V_2;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** L_117 = ___curveX0;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_118 = *((AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 **)L_117);
		NullCheck(L_118);
		int32_t L_119;
		L_119 = AnimationCurve_get_length_mB3D0734222EE55DB1389BCB98CCB1324AF8AA4E0(L_118, /*hidden argument*/NULL);
		int32_t L_120 = ___partitionSize5;
		if ((((int32_t)L_116) < ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_119, (int32_t)L_120)))))
		{
			goto IL_0153;
		}
	}

IL_01d1:
	{
		// curveX = outCurveX;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** L_121 = ___curveX0;
		U3CU3Ec__DisplayClass73_0_tA9EDB2D4E6569D8D39993A6304B9396566B6F89C  L_122 = V_0;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_123 = L_122.get_outCurveX_5();
		*((RuntimeObject **)L_121) = (RuntimeObject *)L_123;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_121, (void*)(RuntimeObject *)L_123);
		// curveY = outCurveY;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** L_124 = ___curveY1;
		U3CU3Ec__DisplayClass73_0_tA9EDB2D4E6569D8D39993A6304B9396566B6F89C  L_125 = V_0;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_126 = L_125.get_outCurveY_6();
		*((RuntimeObject **)L_124) = (RuntimeObject *)L_126;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_124, (void*)(RuntimeObject *)L_126);
		// curveZ = outCurveZ;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** L_127 = ___curveZ2;
		U3CU3Ec__DisplayClass73_0_tA9EDB2D4E6569D8D39993A6304B9396566B6F89C  L_128 = V_0;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_129 = L_128.get_outCurveZ_7();
		*((RuntimeObject **)L_127) = (RuntimeObject *)L_129;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_127, (void*)(RuntimeObject *)L_129);
		// curveW = outCurveW;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** L_130 = ___curveW3;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_131 = V_1;
		*((RuntimeObject **)L_130) = (RuntimeObject *)L_131;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_130, (void*)(RuntimeObject *)L_131);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAnimation__cctor_mB24DDDC2A3379AB78A153BEE0E185BA9F8351BCB (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackedHandJoint_tFDADC49BA87BC6CBE390A69B0CC80925BAA37FD6_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected static readonly int jointCount = Enum.GetNames(typeof(TrackedHandJoint)).Length;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (TrackedHandJoint_tFDADC49BA87BC6CBE390A69B0CC80925BAA37FD6_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_2;
		L_2 = Enum_GetNames_m49110673091D017F43CF0F5F7AD9B7730306D2E8(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		((InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534_StaticFields*)il2cpp_codegen_static_fields_for(InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534_il2cpp_TypeInfo_var))->set_jointCount_0(((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))));
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation::<FromRecordingBuffer>g__AddBoolKeyIfChanged|48_0(UnityEngine.AnimationCurve,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAnimation_U3CFromRecordingBufferU3Eg__AddBoolKeyIfChangedU7C48_0_m6DD6E7FDFB23A7DCBC45DE3510A1AE9390D5765E (AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___curve0, float ___time1, bool ___value2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (curve.length > 0 && (curve[curve.length - 1].value > 0.5f) == value)
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_0 = ___curve0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = AnimationCurve_get_length_mB3D0734222EE55DB1389BCB98CCB1324AF8AA4E0(L_0, /*hidden argument*/NULL);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_002a;
		}
	}
	{
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_2 = ___curve0;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_3 = ___curve0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = AnimationCurve_get_length_mB3D0734222EE55DB1389BCB98CCB1324AF8AA4E0(L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  L_5;
		L_5 = AnimationCurve_get_Item_mD5F6B4C79C432C9CEADB6D116C07969802D5611A(L_2, ((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)1)), /*hidden argument*/NULL);
		V_0 = L_5;
		float L_6;
		L_6 = Keyframe_get_value_m9D584EA4DFB7D0BE71646F479DFB615EE005C968((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)(&V_0), /*hidden argument*/NULL);
		bool L_7 = ___value2;
		if ((!(((uint32_t)((((float)L_6) > ((float)(0.5f)))? 1 : 0)) == ((uint32_t)L_7))))
		{
			goto IL_002a;
		}
	}
	{
		// return;
		return;
	}

IL_002a:
	{
		// AddBoolKey(curve, time, value);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_8 = ___curve0;
		float L_9 = ___time1;
		bool L_10 = ___value2;
		IL2CPP_RUNTIME_CLASS_INIT(InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534_il2cpp_TypeInfo_var);
		InputAnimation_AddBoolKey_mF3C12D6505644FD0313E176656AA6975488CB90F(L_8, L_9, L_10, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation::<FromRecordingBuffer>g__AddJointPoseKeys|48_1(System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Input.InputAnimation/PoseCurves>,System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>,Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAnimation_U3CFromRecordingBufferU3Eg__AddJointPoseKeysU7C48_1_m958AFA63F52583CAF3271470A52628DAB93F494A (Dictionary_2_tF3976454D4ACA03F9E231469CB7AA87B3D4745B0 * ___jointCurves0, Dictionary_2_tABC45B7C67E921F533EBEF222CFE2B891AA1E098 * ___poses1, int32_t ___joint2, float ___time3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mBABE943B5031B118F97BF59E84A11816B6039FB1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m9CC878FE7F12DF8B4C25C62C80A68ECAC784E0C0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mA86A48F1F8E01B36CF0D80C36B3C67755D6D00BE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PoseCurves_t14269C65E2E6B6A532EF4AC78324976DF2587501_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99  V_0;
	memset((&V_0), 0, sizeof(V_0));
	PoseCurves_t14269C65E2E6B6A532EF4AC78324976DF2587501 * V_1 = NULL;
	{
		// if (!poses.TryGetValue(joint, out var pose))
		Dictionary_2_tABC45B7C67E921F533EBEF222CFE2B891AA1E098 * L_0 = ___poses1;
		int32_t L_1 = ___joint2;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_TryGetValue_m9CC878FE7F12DF8B4C25C62C80A68ECAC784E0C0(L_0, L_1, (MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99 *)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m9CC878FE7F12DF8B4C25C62C80A68ECAC784E0C0_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_000c;
		}
	}
	{
		// return;
		return;
	}

IL_000c:
	{
		// if (!jointCurves.TryGetValue(joint, out var curves))
		Dictionary_2_tF3976454D4ACA03F9E231469CB7AA87B3D4745B0 * L_3 = ___jointCurves0;
		int32_t L_4 = ___joint2;
		NullCheck(L_3);
		bool L_5;
		L_5 = Dictionary_2_TryGetValue_mA86A48F1F8E01B36CF0D80C36B3C67755D6D00BE(L_3, L_4, (PoseCurves_t14269C65E2E6B6A532EF4AC78324976DF2587501 **)(&V_1), /*hidden argument*/Dictionary_2_TryGetValue_mA86A48F1F8E01B36CF0D80C36B3C67755D6D00BE_RuntimeMethod_var);
		if (L_5)
		{
			goto IL_0025;
		}
	}
	{
		// curves = new PoseCurves();
		PoseCurves_t14269C65E2E6B6A532EF4AC78324976DF2587501 * L_6 = (PoseCurves_t14269C65E2E6B6A532EF4AC78324976DF2587501 *)il2cpp_codegen_object_new(PoseCurves_t14269C65E2E6B6A532EF4AC78324976DF2587501_il2cpp_TypeInfo_var);
		PoseCurves__ctor_mAB903C4BE542C0D296D2BD8ED4316E7C56718BE4(L_6, /*hidden argument*/NULL);
		V_1 = L_6;
		// jointCurves.Add(joint, curves);
		Dictionary_2_tF3976454D4ACA03F9E231469CB7AA87B3D4745B0 * L_7 = ___jointCurves0;
		int32_t L_8 = ___joint2;
		PoseCurves_t14269C65E2E6B6A532EF4AC78324976DF2587501 * L_9 = V_1;
		NullCheck(L_7);
		Dictionary_2_Add_mBABE943B5031B118F97BF59E84A11816B6039FB1(L_7, L_8, L_9, /*hidden argument*/Dictionary_2_Add_mBABE943B5031B118F97BF59E84A11816B6039FB1_RuntimeMethod_var);
	}

IL_0025:
	{
		// curves.AddKey(time, pose);
		PoseCurves_t14269C65E2E6B6A532EF4AC78324976DF2587501 * L_10 = V_1;
		float L_11 = ___time3;
		MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99  L_12 = V_0;
		NullCheck(L_10);
		PoseCurves_AddKey_mCDBC851FE2A5B7616E44760E106B1FA334919A23(L_10, L_11, L_12, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation::<OptimizePositionCurve>g__Recurse|71_0(System.Int32,System.Int32,Microsoft.MixedReality.Toolkit.Input.InputAnimation/<>c__DisplayClass71_0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAnimation_U3COptimizePositionCurveU3Eg__RecurseU7C71_0_mCE7378227CFF97D8540CA6327008C7BF92300991 (int32_t ___start0, int32_t ___end1, U3CU3Ec__DisplayClass71_0_tB8844843F079F21090643D261C6084F55D933677 * p2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_4;
	memset((&V_4), 0, sizeof(V_4));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_5;
	memset((&V_5), 0, sizeof(V_5));
	Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  V_6;
	memset((&V_6), 0, sizeof(V_6));
	int32_t V_7 = 0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_8;
	memset((&V_8), 0, sizeof(V_8));
	float V_9 = 0.0f;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_10;
	memset((&V_10), 0, sizeof(V_10));
	{
		// if (start + 1 >= end - 1)
		int32_t L_0 = ___start0;
		int32_t L_1 = ___end1;
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)1))) < ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)1)))))
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
		// int bestIndex = -1;
		V_0 = (-1);
		// float bestDistance = 0f;
		V_1 = (0.0f);
		// float startTime = inCurveX[start].time;
		U3CU3Ec__DisplayClass71_0_tB8844843F079F21090643D261C6084F55D933677 * L_2 = p2;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_3 = L_2->get_inCurveX_0();
		int32_t L_4 = ___start0;
		NullCheck(L_3);
		Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  L_5;
		L_5 = AnimationCurve_get_Item_mD5F6B4C79C432C9CEADB6D116C07969802D5611A(L_3, L_4, /*hidden argument*/NULL);
		V_6 = L_5;
		float L_6;
		L_6 = Keyframe_get_time_m75EBFDECA329315F6D41A60C0B1291F5BA4039E8((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)(&V_6), /*hidden argument*/NULL);
		V_2 = L_6;
		// float endTime = inCurveX[end].time;
		U3CU3Ec__DisplayClass71_0_tB8844843F079F21090643D261C6084F55D933677 * L_7 = p2;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_8 = L_7->get_inCurveX_0();
		int32_t L_9 = ___end1;
		NullCheck(L_8);
		Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  L_10;
		L_10 = AnimationCurve_get_Item_mD5F6B4C79C432C9CEADB6D116C07969802D5611A(L_8, L_9, /*hidden argument*/NULL);
		V_6 = L_10;
		float L_11;
		L_11 = Keyframe_get_time_m75EBFDECA329315F6D41A60C0B1291F5BA4039E8((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)(&V_6), /*hidden argument*/NULL);
		V_3 = L_11;
		// var startPosition = new Vector3(inCurveX[start].value, inCurveY[start].value, inCurveZ[start].value);
		U3CU3Ec__DisplayClass71_0_tB8844843F079F21090643D261C6084F55D933677 * L_12 = p2;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_13 = L_12->get_inCurveX_0();
		int32_t L_14 = ___start0;
		NullCheck(L_13);
		Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  L_15;
		L_15 = AnimationCurve_get_Item_mD5F6B4C79C432C9CEADB6D116C07969802D5611A(L_13, L_14, /*hidden argument*/NULL);
		V_6 = L_15;
		float L_16;
		L_16 = Keyframe_get_value_m9D584EA4DFB7D0BE71646F479DFB615EE005C968((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)(&V_6), /*hidden argument*/NULL);
		U3CU3Ec__DisplayClass71_0_tB8844843F079F21090643D261C6084F55D933677 * L_17 = p2;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_18 = L_17->get_inCurveY_1();
		int32_t L_19 = ___start0;
		NullCheck(L_18);
		Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  L_20;
		L_20 = AnimationCurve_get_Item_mD5F6B4C79C432C9CEADB6D116C07969802D5611A(L_18, L_19, /*hidden argument*/NULL);
		V_6 = L_20;
		float L_21;
		L_21 = Keyframe_get_value_m9D584EA4DFB7D0BE71646F479DFB615EE005C968((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)(&V_6), /*hidden argument*/NULL);
		U3CU3Ec__DisplayClass71_0_tB8844843F079F21090643D261C6084F55D933677 * L_22 = p2;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_23 = L_22->get_inCurveZ_2();
		int32_t L_24 = ___start0;
		NullCheck(L_23);
		Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  L_25;
		L_25 = AnimationCurve_get_Item_mD5F6B4C79C432C9CEADB6D116C07969802D5611A(L_23, L_24, /*hidden argument*/NULL);
		V_6 = L_25;
		float L_26;
		L_26 = Keyframe_get_value_m9D584EA4DFB7D0BE71646F479DFB615EE005C968((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)(&V_6), /*hidden argument*/NULL);
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_4), L_16, L_21, L_26, /*hidden argument*/NULL);
		// var endPosition = new Vector3(inCurveX[end].value, inCurveY[end].value, inCurveZ[end].value);
		U3CU3Ec__DisplayClass71_0_tB8844843F079F21090643D261C6084F55D933677 * L_27 = p2;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_28 = L_27->get_inCurveX_0();
		int32_t L_29 = ___end1;
		NullCheck(L_28);
		Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  L_30;
		L_30 = AnimationCurve_get_Item_mD5F6B4C79C432C9CEADB6D116C07969802D5611A(L_28, L_29, /*hidden argument*/NULL);
		V_6 = L_30;
		float L_31;
		L_31 = Keyframe_get_value_m9D584EA4DFB7D0BE71646F479DFB615EE005C968((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)(&V_6), /*hidden argument*/NULL);
		U3CU3Ec__DisplayClass71_0_tB8844843F079F21090643D261C6084F55D933677 * L_32 = p2;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_33 = L_32->get_inCurveY_1();
		int32_t L_34 = ___end1;
		NullCheck(L_33);
		Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  L_35;
		L_35 = AnimationCurve_get_Item_mD5F6B4C79C432C9CEADB6D116C07969802D5611A(L_33, L_34, /*hidden argument*/NULL);
		V_6 = L_35;
		float L_36;
		L_36 = Keyframe_get_value_m9D584EA4DFB7D0BE71646F479DFB615EE005C968((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)(&V_6), /*hidden argument*/NULL);
		U3CU3Ec__DisplayClass71_0_tB8844843F079F21090643D261C6084F55D933677 * L_37 = p2;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_38 = L_37->get_inCurveZ_2();
		int32_t L_39 = ___end1;
		NullCheck(L_38);
		Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  L_40;
		L_40 = AnimationCurve_get_Item_mD5F6B4C79C432C9CEADB6D116C07969802D5611A(L_38, L_39, /*hidden argument*/NULL);
		V_6 = L_40;
		float L_41;
		L_41 = Keyframe_get_value_m9D584EA4DFB7D0BE71646F479DFB615EE005C968((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)(&V_6), /*hidden argument*/NULL);
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_5), L_31, L_36, L_41, /*hidden argument*/NULL);
		// for (int i = start + 1; i <= end - 1; i++)
		int32_t L_42 = ___start0;
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_42, (int32_t)1));
		goto IL_0165;
	}

IL_00d3:
	{
		// var position = new Vector3(inCurveX[i].value, inCurveY[i].value, inCurveZ[i].value);
		U3CU3Ec__DisplayClass71_0_tB8844843F079F21090643D261C6084F55D933677 * L_43 = p2;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_44 = L_43->get_inCurveX_0();
		int32_t L_45 = V_7;
		NullCheck(L_44);
		Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  L_46;
		L_46 = AnimationCurve_get_Item_mD5F6B4C79C432C9CEADB6D116C07969802D5611A(L_44, L_45, /*hidden argument*/NULL);
		V_6 = L_46;
		float L_47;
		L_47 = Keyframe_get_value_m9D584EA4DFB7D0BE71646F479DFB615EE005C968((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)(&V_6), /*hidden argument*/NULL);
		U3CU3Ec__DisplayClass71_0_tB8844843F079F21090643D261C6084F55D933677 * L_48 = p2;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_49 = L_48->get_inCurveY_1();
		int32_t L_50 = V_7;
		NullCheck(L_49);
		Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  L_51;
		L_51 = AnimationCurve_get_Item_mD5F6B4C79C432C9CEADB6D116C07969802D5611A(L_49, L_50, /*hidden argument*/NULL);
		V_6 = L_51;
		float L_52;
		L_52 = Keyframe_get_value_m9D584EA4DFB7D0BE71646F479DFB615EE005C968((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)(&V_6), /*hidden argument*/NULL);
		U3CU3Ec__DisplayClass71_0_tB8844843F079F21090643D261C6084F55D933677 * L_53 = p2;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_54 = L_53->get_inCurveZ_2();
		int32_t L_55 = V_7;
		NullCheck(L_54);
		Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  L_56;
		L_56 = AnimationCurve_get_Item_mD5F6B4C79C432C9CEADB6D116C07969802D5611A(L_54, L_55, /*hidden argument*/NULL);
		V_6 = L_56;
		float L_57;
		L_57 = Keyframe_get_value_m9D584EA4DFB7D0BE71646F479DFB615EE005C968((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)(&V_6), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_58;
		memset((&L_58), 0, sizeof(L_58));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_58), L_47, L_52, L_57, /*hidden argument*/NULL);
		// var interp = Vector3.Lerp(startPosition, endPosition, Mathf.InverseLerp(startTime, endTime, inCurveX[i].time));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_59 = V_4;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_60 = V_5;
		float L_61 = V_2;
		float L_62 = V_3;
		U3CU3Ec__DisplayClass71_0_tB8844843F079F21090643D261C6084F55D933677 * L_63 = p2;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_64 = L_63->get_inCurveX_0();
		int32_t L_65 = V_7;
		NullCheck(L_64);
		Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  L_66;
		L_66 = AnimationCurve_get_Item_mD5F6B4C79C432C9CEADB6D116C07969802D5611A(L_64, L_65, /*hidden argument*/NULL);
		V_6 = L_66;
		float L_67;
		L_67 = Keyframe_get_time_m75EBFDECA329315F6D41A60C0B1291F5BA4039E8((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)(&V_6), /*hidden argument*/NULL);
		float L_68;
		L_68 = Mathf_InverseLerp_mCD2E6F9ADCFFB40EB7D3086E444DF2C702F9C29B(L_61, L_62, L_67, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_69;
		L_69 = Vector3_Lerp_m8E095584FFA10CF1D3EABCD04F4C83FB82EC5524_inline(L_59, L_60, L_68, /*hidden argument*/NULL);
		V_8 = L_69;
		// float distance = (position - interp).sqrMagnitude;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_70 = V_8;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_71;
		L_71 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_58, L_70, /*hidden argument*/NULL);
		V_10 = L_71;
		float L_72;
		L_72 = Vector3_get_sqrMagnitude_mC567EE6DF411501A8FE1F23A0038862630B88249((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_10), /*hidden argument*/NULL);
		V_9 = L_72;
		// if (distance > bestDistance)
		float L_73 = V_9;
		float L_74 = V_1;
		if ((!(((float)L_73) > ((float)L_74))))
		{
			goto IL_015f;
		}
	}
	{
		// bestIndex = i;
		int32_t L_75 = V_7;
		V_0 = L_75;
		// bestDistance = distance;
		float L_76 = V_9;
		V_1 = L_76;
	}

IL_015f:
	{
		// for (int i = start + 1; i <= end - 1; i++)
		int32_t L_77 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_77, (int32_t)1));
	}

IL_0165:
	{
		// for (int i = start + 1; i <= end - 1; i++)
		int32_t L_78 = V_7;
		int32_t L_79 = ___end1;
		if ((((int32_t)L_78) <= ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_79, (int32_t)1)))))
		{
			goto IL_00d3;
		}
	}
	{
		// if (bestDistance < sqrThreshold || bestIndex < 0)
		float L_80 = V_1;
		U3CU3Ec__DisplayClass71_0_tB8844843F079F21090643D261C6084F55D933677 * L_81 = p2;
		float L_82 = L_81->get_sqrThreshold_3();
		if ((((float)L_80) < ((float)L_82)))
		{
			goto IL_017c;
		}
	}
	{
		int32_t L_83 = V_0;
		if ((((int32_t)L_83) >= ((int32_t)0)))
		{
			goto IL_017d;
		}
	}

IL_017c:
	{
		// return;
		return;
	}

IL_017d:
	{
		// outCurveX.AddKey(inCurveX[bestIndex]);
		U3CU3Ec__DisplayClass71_0_tB8844843F079F21090643D261C6084F55D933677 * L_84 = p2;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_85 = L_84->get_outCurveX_4();
		U3CU3Ec__DisplayClass71_0_tB8844843F079F21090643D261C6084F55D933677 * L_86 = p2;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_87 = L_86->get_inCurveX_0();
		int32_t L_88 = V_0;
		NullCheck(L_87);
		Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  L_89;
		L_89 = AnimationCurve_get_Item_mD5F6B4C79C432C9CEADB6D116C07969802D5611A(L_87, L_88, /*hidden argument*/NULL);
		NullCheck(L_85);
		int32_t L_90;
		L_90 = AnimationCurve_AddKey_m3AEE7259785540EF6A157BA99B3737AC60E30D9A(L_85, L_89, /*hidden argument*/NULL);
		// outCurveY.AddKey(inCurveY[bestIndex]);
		U3CU3Ec__DisplayClass71_0_tB8844843F079F21090643D261C6084F55D933677 * L_91 = p2;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_92 = L_91->get_outCurveY_5();
		U3CU3Ec__DisplayClass71_0_tB8844843F079F21090643D261C6084F55D933677 * L_93 = p2;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_94 = L_93->get_inCurveY_1();
		int32_t L_95 = V_0;
		NullCheck(L_94);
		Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  L_96;
		L_96 = AnimationCurve_get_Item_mD5F6B4C79C432C9CEADB6D116C07969802D5611A(L_94, L_95, /*hidden argument*/NULL);
		NullCheck(L_92);
		int32_t L_97;
		L_97 = AnimationCurve_AddKey_m3AEE7259785540EF6A157BA99B3737AC60E30D9A(L_92, L_96, /*hidden argument*/NULL);
		// outCurveZ.AddKey(inCurveZ[bestIndex]);
		U3CU3Ec__DisplayClass71_0_tB8844843F079F21090643D261C6084F55D933677 * L_98 = p2;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_99 = L_98->get_outCurveZ_6();
		U3CU3Ec__DisplayClass71_0_tB8844843F079F21090643D261C6084F55D933677 * L_100 = p2;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_101 = L_100->get_inCurveZ_2();
		int32_t L_102 = V_0;
		NullCheck(L_101);
		Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  L_103;
		L_103 = AnimationCurve_get_Item_mD5F6B4C79C432C9CEADB6D116C07969802D5611A(L_101, L_102, /*hidden argument*/NULL);
		NullCheck(L_99);
		int32_t L_104;
		L_104 = AnimationCurve_AddKey_m3AEE7259785540EF6A157BA99B3737AC60E30D9A(L_99, L_103, /*hidden argument*/NULL);
		// Recurse(start, bestIndex);
		int32_t L_105 = ___start0;
		int32_t L_106 = V_0;
		U3CU3Ec__DisplayClass71_0_tB8844843F079F21090643D261C6084F55D933677 * L_107 = p2;
		IL2CPP_RUNTIME_CLASS_INIT(InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534_il2cpp_TypeInfo_var);
		InputAnimation_U3COptimizePositionCurveU3Eg__RecurseU7C71_0_mCE7378227CFF97D8540CA6327008C7BF92300991(L_105, L_106, (U3CU3Ec__DisplayClass71_0_tB8844843F079F21090643D261C6084F55D933677 *)L_107, /*hidden argument*/NULL);
		// Recurse(bestIndex, end);
		int32_t L_108 = V_0;
		int32_t L_109 = ___end1;
		U3CU3Ec__DisplayClass71_0_tB8844843F079F21090643D261C6084F55D933677 * L_110 = p2;
		InputAnimation_U3COptimizePositionCurveU3Eg__RecurseU7C71_0_mCE7378227CFF97D8540CA6327008C7BF92300991(L_108, L_109, (U3CU3Ec__DisplayClass71_0_tB8844843F079F21090643D261C6084F55D933677 *)L_110, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation::<OptimizeDirectionCurve>g__Recurse|72_0(System.Int32,System.Int32,Microsoft.MixedReality.Toolkit.Input.InputAnimation/<>c__DisplayClass72_0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAnimation_U3COptimizeDirectionCurveU3Eg__RecurseU7C72_0_m570AF6F317703FF8FE4C48CE49E4FBA311BD8B57 (int32_t ___start0, int32_t ___end1, U3CU3Ec__DisplayClass72_0_t86C7C5FDF8A191F3176A7AD9E5052C7FCCF17343 * p2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_4;
	memset((&V_4), 0, sizeof(V_4));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_5;
	memset((&V_5), 0, sizeof(V_5));
	Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  V_6;
	memset((&V_6), 0, sizeof(V_6));
	int32_t V_7 = 0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_8;
	memset((&V_8), 0, sizeof(V_8));
	float V_9 = 0.0f;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_10;
	memset((&V_10), 0, sizeof(V_10));
	{
		// if (start + 1 >= end - 1)
		int32_t L_0 = ___start0;
		int32_t L_1 = ___end1;
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)1))) < ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)1)))))
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
		// int bestIndex = -1;
		V_0 = (-1);
		// float bestDot = 1f;
		V_1 = (1.0f);
		// float startTime = inCurveX[start].time;
		U3CU3Ec__DisplayClass72_0_t86C7C5FDF8A191F3176A7AD9E5052C7FCCF17343 * L_2 = p2;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_3 = L_2->get_inCurveX_0();
		int32_t L_4 = ___start0;
		NullCheck(L_3);
		Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  L_5;
		L_5 = AnimationCurve_get_Item_mD5F6B4C79C432C9CEADB6D116C07969802D5611A(L_3, L_4, /*hidden argument*/NULL);
		V_6 = L_5;
		float L_6;
		L_6 = Keyframe_get_time_m75EBFDECA329315F6D41A60C0B1291F5BA4039E8((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)(&V_6), /*hidden argument*/NULL);
		V_2 = L_6;
		// float endTime = inCurveX[end].time;
		U3CU3Ec__DisplayClass72_0_t86C7C5FDF8A191F3176A7AD9E5052C7FCCF17343 * L_7 = p2;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_8 = L_7->get_inCurveX_0();
		int32_t L_9 = ___end1;
		NullCheck(L_8);
		Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  L_10;
		L_10 = AnimationCurve_get_Item_mD5F6B4C79C432C9CEADB6D116C07969802D5611A(L_8, L_9, /*hidden argument*/NULL);
		V_6 = L_10;
		float L_11;
		L_11 = Keyframe_get_time_m75EBFDECA329315F6D41A60C0B1291F5BA4039E8((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)(&V_6), /*hidden argument*/NULL);
		V_3 = L_11;
		// var startPosition = new Vector3(inCurveX[start].value, inCurveY[start].value, inCurveZ[start].value);
		U3CU3Ec__DisplayClass72_0_t86C7C5FDF8A191F3176A7AD9E5052C7FCCF17343 * L_12 = p2;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_13 = L_12->get_inCurveX_0();
		int32_t L_14 = ___start0;
		NullCheck(L_13);
		Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  L_15;
		L_15 = AnimationCurve_get_Item_mD5F6B4C79C432C9CEADB6D116C07969802D5611A(L_13, L_14, /*hidden argument*/NULL);
		V_6 = L_15;
		float L_16;
		L_16 = Keyframe_get_value_m9D584EA4DFB7D0BE71646F479DFB615EE005C968((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)(&V_6), /*hidden argument*/NULL);
		U3CU3Ec__DisplayClass72_0_t86C7C5FDF8A191F3176A7AD9E5052C7FCCF17343 * L_17 = p2;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_18 = L_17->get_inCurveY_1();
		int32_t L_19 = ___start0;
		NullCheck(L_18);
		Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  L_20;
		L_20 = AnimationCurve_get_Item_mD5F6B4C79C432C9CEADB6D116C07969802D5611A(L_18, L_19, /*hidden argument*/NULL);
		V_6 = L_20;
		float L_21;
		L_21 = Keyframe_get_value_m9D584EA4DFB7D0BE71646F479DFB615EE005C968((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)(&V_6), /*hidden argument*/NULL);
		U3CU3Ec__DisplayClass72_0_t86C7C5FDF8A191F3176A7AD9E5052C7FCCF17343 * L_22 = p2;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_23 = L_22->get_inCurveZ_2();
		int32_t L_24 = ___start0;
		NullCheck(L_23);
		Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  L_25;
		L_25 = AnimationCurve_get_Item_mD5F6B4C79C432C9CEADB6D116C07969802D5611A(L_23, L_24, /*hidden argument*/NULL);
		V_6 = L_25;
		float L_26;
		L_26 = Keyframe_get_value_m9D584EA4DFB7D0BE71646F479DFB615EE005C968((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)(&V_6), /*hidden argument*/NULL);
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_4), L_16, L_21, L_26, /*hidden argument*/NULL);
		// var endPosition = new Vector3(inCurveX[end].value, inCurveY[end].value, inCurveZ[end].value);
		U3CU3Ec__DisplayClass72_0_t86C7C5FDF8A191F3176A7AD9E5052C7FCCF17343 * L_27 = p2;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_28 = L_27->get_inCurveX_0();
		int32_t L_29 = ___end1;
		NullCheck(L_28);
		Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  L_30;
		L_30 = AnimationCurve_get_Item_mD5F6B4C79C432C9CEADB6D116C07969802D5611A(L_28, L_29, /*hidden argument*/NULL);
		V_6 = L_30;
		float L_31;
		L_31 = Keyframe_get_value_m9D584EA4DFB7D0BE71646F479DFB615EE005C968((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)(&V_6), /*hidden argument*/NULL);
		U3CU3Ec__DisplayClass72_0_t86C7C5FDF8A191F3176A7AD9E5052C7FCCF17343 * L_32 = p2;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_33 = L_32->get_inCurveY_1();
		int32_t L_34 = ___end1;
		NullCheck(L_33);
		Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  L_35;
		L_35 = AnimationCurve_get_Item_mD5F6B4C79C432C9CEADB6D116C07969802D5611A(L_33, L_34, /*hidden argument*/NULL);
		V_6 = L_35;
		float L_36;
		L_36 = Keyframe_get_value_m9D584EA4DFB7D0BE71646F479DFB615EE005C968((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)(&V_6), /*hidden argument*/NULL);
		U3CU3Ec__DisplayClass72_0_t86C7C5FDF8A191F3176A7AD9E5052C7FCCF17343 * L_37 = p2;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_38 = L_37->get_inCurveZ_2();
		int32_t L_39 = ___end1;
		NullCheck(L_38);
		Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  L_40;
		L_40 = AnimationCurve_get_Item_mD5F6B4C79C432C9CEADB6D116C07969802D5611A(L_38, L_39, /*hidden argument*/NULL);
		V_6 = L_40;
		float L_41;
		L_41 = Keyframe_get_value_m9D584EA4DFB7D0BE71646F479DFB615EE005C968((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)(&V_6), /*hidden argument*/NULL);
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_5), L_31, L_36, L_41, /*hidden argument*/NULL);
		// for (int i = start + 1; i <= end - 1; i++)
		int32_t L_42 = ___start0;
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_42, (int32_t)1));
		goto IL_0165;
	}

IL_00d3:
	{
		// var position = new Vector3(inCurveX[i].value, inCurveY[i].value, inCurveZ[i].value);
		U3CU3Ec__DisplayClass72_0_t86C7C5FDF8A191F3176A7AD9E5052C7FCCF17343 * L_43 = p2;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_44 = L_43->get_inCurveX_0();
		int32_t L_45 = V_7;
		NullCheck(L_44);
		Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  L_46;
		L_46 = AnimationCurve_get_Item_mD5F6B4C79C432C9CEADB6D116C07969802D5611A(L_44, L_45, /*hidden argument*/NULL);
		V_6 = L_46;
		float L_47;
		L_47 = Keyframe_get_value_m9D584EA4DFB7D0BE71646F479DFB615EE005C968((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)(&V_6), /*hidden argument*/NULL);
		U3CU3Ec__DisplayClass72_0_t86C7C5FDF8A191F3176A7AD9E5052C7FCCF17343 * L_48 = p2;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_49 = L_48->get_inCurveY_1();
		int32_t L_50 = V_7;
		NullCheck(L_49);
		Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  L_51;
		L_51 = AnimationCurve_get_Item_mD5F6B4C79C432C9CEADB6D116C07969802D5611A(L_49, L_50, /*hidden argument*/NULL);
		V_6 = L_51;
		float L_52;
		L_52 = Keyframe_get_value_m9D584EA4DFB7D0BE71646F479DFB615EE005C968((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)(&V_6), /*hidden argument*/NULL);
		U3CU3Ec__DisplayClass72_0_t86C7C5FDF8A191F3176A7AD9E5052C7FCCF17343 * L_53 = p2;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_54 = L_53->get_inCurveZ_2();
		int32_t L_55 = V_7;
		NullCheck(L_54);
		Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  L_56;
		L_56 = AnimationCurve_get_Item_mD5F6B4C79C432C9CEADB6D116C07969802D5611A(L_54, L_55, /*hidden argument*/NULL);
		V_6 = L_56;
		float L_57;
		L_57 = Keyframe_get_value_m9D584EA4DFB7D0BE71646F479DFB615EE005C968((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)(&V_6), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_58;
		memset((&L_58), 0, sizeof(L_58));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_58), L_47, L_52, L_57, /*hidden argument*/NULL);
		// var interp = Vector3.Lerp(startPosition, endPosition, Mathf.InverseLerp(startTime, endTime, inCurveX[i].time)).normalized;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_59 = V_4;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_60 = V_5;
		float L_61 = V_2;
		float L_62 = V_3;
		U3CU3Ec__DisplayClass72_0_t86C7C5FDF8A191F3176A7AD9E5052C7FCCF17343 * L_63 = p2;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_64 = L_63->get_inCurveX_0();
		int32_t L_65 = V_7;
		NullCheck(L_64);
		Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  L_66;
		L_66 = AnimationCurve_get_Item_mD5F6B4C79C432C9CEADB6D116C07969802D5611A(L_64, L_65, /*hidden argument*/NULL);
		V_6 = L_66;
		float L_67;
		L_67 = Keyframe_get_time_m75EBFDECA329315F6D41A60C0B1291F5BA4039E8((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)(&V_6), /*hidden argument*/NULL);
		float L_68;
		L_68 = Mathf_InverseLerp_mCD2E6F9ADCFFB40EB7D3086E444DF2C702F9C29B(L_61, L_62, L_67, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_69;
		L_69 = Vector3_Lerp_m8E095584FFA10CF1D3EABCD04F4C83FB82EC5524_inline(L_59, L_60, L_68, /*hidden argument*/NULL);
		V_10 = L_69;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_70;
		L_70 = Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_10), /*hidden argument*/NULL);
		V_8 = L_70;
		// float dot = Vector3.Dot(position, interp);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_71 = V_8;
		float L_72;
		L_72 = Vector3_Dot_mD19905B093915BA12852732EA27AA2DBE030D11F_inline(L_58, L_71, /*hidden argument*/NULL);
		V_9 = L_72;
		// if (dot < bestDot)
		float L_73 = V_9;
		float L_74 = V_1;
		if ((!(((float)L_73) < ((float)L_74))))
		{
			goto IL_015f;
		}
	}
	{
		// bestIndex = i;
		int32_t L_75 = V_7;
		V_0 = L_75;
		// bestDot = dot;
		float L_76 = V_9;
		V_1 = L_76;
	}

IL_015f:
	{
		// for (int i = start + 1; i <= end - 1; i++)
		int32_t L_77 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_77, (int32_t)1));
	}

IL_0165:
	{
		// for (int i = start + 1; i <= end - 1; i++)
		int32_t L_78 = V_7;
		int32_t L_79 = ___end1;
		if ((((int32_t)L_78) <= ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_79, (int32_t)1)))))
		{
			goto IL_00d3;
		}
	}
	{
		// if (bestDot > cosThreshold || bestIndex < 0)
		float L_80 = V_1;
		U3CU3Ec__DisplayClass72_0_t86C7C5FDF8A191F3176A7AD9E5052C7FCCF17343 * L_81 = p2;
		float L_82 = L_81->get_cosThreshold_3();
		if ((((float)L_80) > ((float)L_82)))
		{
			goto IL_017c;
		}
	}
	{
		int32_t L_83 = V_0;
		if ((((int32_t)L_83) >= ((int32_t)0)))
		{
			goto IL_017d;
		}
	}

IL_017c:
	{
		// return;
		return;
	}

IL_017d:
	{
		// outCurveX.AddKey(inCurveX[bestIndex]);
		U3CU3Ec__DisplayClass72_0_t86C7C5FDF8A191F3176A7AD9E5052C7FCCF17343 * L_84 = p2;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_85 = L_84->get_outCurveX_4();
		U3CU3Ec__DisplayClass72_0_t86C7C5FDF8A191F3176A7AD9E5052C7FCCF17343 * L_86 = p2;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_87 = L_86->get_inCurveX_0();
		int32_t L_88 = V_0;
		NullCheck(L_87);
		Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  L_89;
		L_89 = AnimationCurve_get_Item_mD5F6B4C79C432C9CEADB6D116C07969802D5611A(L_87, L_88, /*hidden argument*/NULL);
		NullCheck(L_85);
		int32_t L_90;
		L_90 = AnimationCurve_AddKey_m3AEE7259785540EF6A157BA99B3737AC60E30D9A(L_85, L_89, /*hidden argument*/NULL);
		// outCurveY.AddKey(inCurveY[bestIndex]);
		U3CU3Ec__DisplayClass72_0_t86C7C5FDF8A191F3176A7AD9E5052C7FCCF17343 * L_91 = p2;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_92 = L_91->get_outCurveY_5();
		U3CU3Ec__DisplayClass72_0_t86C7C5FDF8A191F3176A7AD9E5052C7FCCF17343 * L_93 = p2;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_94 = L_93->get_inCurveY_1();
		int32_t L_95 = V_0;
		NullCheck(L_94);
		Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  L_96;
		L_96 = AnimationCurve_get_Item_mD5F6B4C79C432C9CEADB6D116C07969802D5611A(L_94, L_95, /*hidden argument*/NULL);
		NullCheck(L_92);
		int32_t L_97;
		L_97 = AnimationCurve_AddKey_m3AEE7259785540EF6A157BA99B3737AC60E30D9A(L_92, L_96, /*hidden argument*/NULL);
		// outCurveZ.AddKey(inCurveZ[bestIndex]);
		U3CU3Ec__DisplayClass72_0_t86C7C5FDF8A191F3176A7AD9E5052C7FCCF17343 * L_98 = p2;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_99 = L_98->get_outCurveZ_6();
		U3CU3Ec__DisplayClass72_0_t86C7C5FDF8A191F3176A7AD9E5052C7FCCF17343 * L_100 = p2;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_101 = L_100->get_inCurveZ_2();
		int32_t L_102 = V_0;
		NullCheck(L_101);
		Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  L_103;
		L_103 = AnimationCurve_get_Item_mD5F6B4C79C432C9CEADB6D116C07969802D5611A(L_101, L_102, /*hidden argument*/NULL);
		NullCheck(L_99);
		int32_t L_104;
		L_104 = AnimationCurve_AddKey_m3AEE7259785540EF6A157BA99B3737AC60E30D9A(L_99, L_103, /*hidden argument*/NULL);
		// Recurse(start, bestIndex);
		int32_t L_105 = ___start0;
		int32_t L_106 = V_0;
		U3CU3Ec__DisplayClass72_0_t86C7C5FDF8A191F3176A7AD9E5052C7FCCF17343 * L_107 = p2;
		IL2CPP_RUNTIME_CLASS_INIT(InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534_il2cpp_TypeInfo_var);
		InputAnimation_U3COptimizeDirectionCurveU3Eg__RecurseU7C72_0_m570AF6F317703FF8FE4C48CE49E4FBA311BD8B57(L_105, L_106, (U3CU3Ec__DisplayClass72_0_t86C7C5FDF8A191F3176A7AD9E5052C7FCCF17343 *)L_107, /*hidden argument*/NULL);
		// Recurse(bestIndex, end);
		int32_t L_108 = V_0;
		int32_t L_109 = ___end1;
		U3CU3Ec__DisplayClass72_0_t86C7C5FDF8A191F3176A7AD9E5052C7FCCF17343 * L_110 = p2;
		InputAnimation_U3COptimizeDirectionCurveU3Eg__RecurseU7C72_0_m570AF6F317703FF8FE4C48CE49E4FBA311BD8B57(L_108, L_109, (U3CU3Ec__DisplayClass72_0_t86C7C5FDF8A191F3176A7AD9E5052C7FCCF17343 *)L_110, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation::<OptimizeRotationCurve>g__Recurse|73_0(System.Int32,System.Int32,Microsoft.MixedReality.Toolkit.Input.InputAnimation/<>c__DisplayClass73_0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAnimation_U3COptimizeRotationCurveU3Eg__RecurseU7C73_0_m3A3E4826B5D48C4E6E761FF18E04183A7668E172 (int32_t ___start0, int32_t ___end1, U3CU3Ec__DisplayClass73_0_tA9EDB2D4E6569D8D39993A6304B9396566B6F89C * p2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  V_4;
	memset((&V_4), 0, sizeof(V_4));
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  V_5;
	memset((&V_5), 0, sizeof(V_5));
	Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  V_6;
	memset((&V_6), 0, sizeof(V_6));
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  V_7;
	memset((&V_7), 0, sizeof(V_7));
	int32_t V_8 = 0;
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  V_9;
	memset((&V_9), 0, sizeof(V_9));
	float V_10 = 0.0f;
	{
		// if (start + 1 >= end - 1)
		int32_t L_0 = ___start0;
		int32_t L_1 = ___end1;
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)1))) < ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)1)))))
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
		// int bestIndex = -1;
		V_0 = (-1);
		// float bestDot = 1f;
		V_1 = (1.0f);
		// float startTime = inCurveX[start].time;
		U3CU3Ec__DisplayClass73_0_tA9EDB2D4E6569D8D39993A6304B9396566B6F89C * L_2 = p2;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_3 = L_2->get_inCurveX_0();
		int32_t L_4 = ___start0;
		NullCheck(L_3);
		Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  L_5;
		L_5 = AnimationCurve_get_Item_mD5F6B4C79C432C9CEADB6D116C07969802D5611A(L_3, L_4, /*hidden argument*/NULL);
		V_6 = L_5;
		float L_6;
		L_6 = Keyframe_get_time_m75EBFDECA329315F6D41A60C0B1291F5BA4039E8((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)(&V_6), /*hidden argument*/NULL);
		V_2 = L_6;
		// float endTime = inCurveX[end].time;
		U3CU3Ec__DisplayClass73_0_tA9EDB2D4E6569D8D39993A6304B9396566B6F89C * L_7 = p2;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_8 = L_7->get_inCurveX_0();
		int32_t L_9 = ___end1;
		NullCheck(L_8);
		Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  L_10;
		L_10 = AnimationCurve_get_Item_mD5F6B4C79C432C9CEADB6D116C07969802D5611A(L_8, L_9, /*hidden argument*/NULL);
		V_6 = L_10;
		float L_11;
		L_11 = Keyframe_get_time_m75EBFDECA329315F6D41A60C0B1291F5BA4039E8((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)(&V_6), /*hidden argument*/NULL);
		V_3 = L_11;
		// var startRotation = new Quaternion(inCurveX[start].value, inCurveY[start].value, inCurveZ[start].value, inCurveW[start].value).normalized;
		U3CU3Ec__DisplayClass73_0_tA9EDB2D4E6569D8D39993A6304B9396566B6F89C * L_12 = p2;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_13 = L_12->get_inCurveX_0();
		int32_t L_14 = ___start0;
		NullCheck(L_13);
		Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  L_15;
		L_15 = AnimationCurve_get_Item_mD5F6B4C79C432C9CEADB6D116C07969802D5611A(L_13, L_14, /*hidden argument*/NULL);
		V_6 = L_15;
		float L_16;
		L_16 = Keyframe_get_value_m9D584EA4DFB7D0BE71646F479DFB615EE005C968((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)(&V_6), /*hidden argument*/NULL);
		U3CU3Ec__DisplayClass73_0_tA9EDB2D4E6569D8D39993A6304B9396566B6F89C * L_17 = p2;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_18 = L_17->get_inCurveY_1();
		int32_t L_19 = ___start0;
		NullCheck(L_18);
		Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  L_20;
		L_20 = AnimationCurve_get_Item_mD5F6B4C79C432C9CEADB6D116C07969802D5611A(L_18, L_19, /*hidden argument*/NULL);
		V_6 = L_20;
		float L_21;
		L_21 = Keyframe_get_value_m9D584EA4DFB7D0BE71646F479DFB615EE005C968((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)(&V_6), /*hidden argument*/NULL);
		U3CU3Ec__DisplayClass73_0_tA9EDB2D4E6569D8D39993A6304B9396566B6F89C * L_22 = p2;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_23 = L_22->get_inCurveZ_2();
		int32_t L_24 = ___start0;
		NullCheck(L_23);
		Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  L_25;
		L_25 = AnimationCurve_get_Item_mD5F6B4C79C432C9CEADB6D116C07969802D5611A(L_23, L_24, /*hidden argument*/NULL);
		V_6 = L_25;
		float L_26;
		L_26 = Keyframe_get_value_m9D584EA4DFB7D0BE71646F479DFB615EE005C968((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)(&V_6), /*hidden argument*/NULL);
		U3CU3Ec__DisplayClass73_0_tA9EDB2D4E6569D8D39993A6304B9396566B6F89C * L_27 = p2;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_28 = L_27->get_inCurveW_3();
		int32_t L_29 = ___start0;
		NullCheck(L_28);
		Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  L_30;
		L_30 = AnimationCurve_get_Item_mD5F6B4C79C432C9CEADB6D116C07969802D5611A(L_28, L_29, /*hidden argument*/NULL);
		V_6 = L_30;
		float L_31;
		L_31 = Keyframe_get_value_m9D584EA4DFB7D0BE71646F479DFB615EE005C968((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)(&V_6), /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_32;
		memset((&L_32), 0, sizeof(L_32));
		Quaternion__ctor_m564FA9302F5B9DA8BAB97B0A2D86FFE83ACAA421((&L_32), L_16, L_21, L_26, L_31, /*hidden argument*/NULL);
		V_7 = L_32;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_33;
		L_33 = Quaternion_get_normalized_m32E57BB637B9A38379421B1C269C299AF3002C94((Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)(&V_7), /*hidden argument*/NULL);
		V_4 = L_33;
		// var endRotation = new Quaternion(inCurveX[end].value, inCurveY[end].value, inCurveZ[end].value, inCurveW[end].value).normalized;
		U3CU3Ec__DisplayClass73_0_tA9EDB2D4E6569D8D39993A6304B9396566B6F89C * L_34 = p2;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_35 = L_34->get_inCurveX_0();
		int32_t L_36 = ___end1;
		NullCheck(L_35);
		Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  L_37;
		L_37 = AnimationCurve_get_Item_mD5F6B4C79C432C9CEADB6D116C07969802D5611A(L_35, L_36, /*hidden argument*/NULL);
		V_6 = L_37;
		float L_38;
		L_38 = Keyframe_get_value_m9D584EA4DFB7D0BE71646F479DFB615EE005C968((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)(&V_6), /*hidden argument*/NULL);
		U3CU3Ec__DisplayClass73_0_tA9EDB2D4E6569D8D39993A6304B9396566B6F89C * L_39 = p2;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_40 = L_39->get_inCurveY_1();
		int32_t L_41 = ___end1;
		NullCheck(L_40);
		Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  L_42;
		L_42 = AnimationCurve_get_Item_mD5F6B4C79C432C9CEADB6D116C07969802D5611A(L_40, L_41, /*hidden argument*/NULL);
		V_6 = L_42;
		float L_43;
		L_43 = Keyframe_get_value_m9D584EA4DFB7D0BE71646F479DFB615EE005C968((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)(&V_6), /*hidden argument*/NULL);
		U3CU3Ec__DisplayClass73_0_tA9EDB2D4E6569D8D39993A6304B9396566B6F89C * L_44 = p2;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_45 = L_44->get_inCurveZ_2();
		int32_t L_46 = ___end1;
		NullCheck(L_45);
		Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  L_47;
		L_47 = AnimationCurve_get_Item_mD5F6B4C79C432C9CEADB6D116C07969802D5611A(L_45, L_46, /*hidden argument*/NULL);
		V_6 = L_47;
		float L_48;
		L_48 = Keyframe_get_value_m9D584EA4DFB7D0BE71646F479DFB615EE005C968((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)(&V_6), /*hidden argument*/NULL);
		U3CU3Ec__DisplayClass73_0_tA9EDB2D4E6569D8D39993A6304B9396566B6F89C * L_49 = p2;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_50 = L_49->get_inCurveW_3();
		int32_t L_51 = ___end1;
		NullCheck(L_50);
		Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  L_52;
		L_52 = AnimationCurve_get_Item_mD5F6B4C79C432C9CEADB6D116C07969802D5611A(L_50, L_51, /*hidden argument*/NULL);
		V_6 = L_52;
		float L_53;
		L_53 = Keyframe_get_value_m9D584EA4DFB7D0BE71646F479DFB615EE005C968((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)(&V_6), /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_54;
		memset((&L_54), 0, sizeof(L_54));
		Quaternion__ctor_m564FA9302F5B9DA8BAB97B0A2D86FFE83ACAA421((&L_54), L_38, L_43, L_48, L_53, /*hidden argument*/NULL);
		V_7 = L_54;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_55;
		L_55 = Quaternion_get_normalized_m32E57BB637B9A38379421B1C269C299AF3002C94((Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)(&V_7), /*hidden argument*/NULL);
		V_5 = L_55;
		// for (int i = start + 1; i <= end - 1; i++)
		int32_t L_56 = ___start0;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_56, (int32_t)1));
		goto IL_01b7;
	}

IL_010f:
	{
		// var rotation = new Quaternion(inCurveX[i].value, inCurveY[i].value, inCurveZ[i].value, inCurveW[i].value).normalized;
		U3CU3Ec__DisplayClass73_0_tA9EDB2D4E6569D8D39993A6304B9396566B6F89C * L_57 = p2;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_58 = L_57->get_inCurveX_0();
		int32_t L_59 = V_8;
		NullCheck(L_58);
		Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  L_60;
		L_60 = AnimationCurve_get_Item_mD5F6B4C79C432C9CEADB6D116C07969802D5611A(L_58, L_59, /*hidden argument*/NULL);
		V_6 = L_60;
		float L_61;
		L_61 = Keyframe_get_value_m9D584EA4DFB7D0BE71646F479DFB615EE005C968((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)(&V_6), /*hidden argument*/NULL);
		U3CU3Ec__DisplayClass73_0_tA9EDB2D4E6569D8D39993A6304B9396566B6F89C * L_62 = p2;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_63 = L_62->get_inCurveY_1();
		int32_t L_64 = V_8;
		NullCheck(L_63);
		Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  L_65;
		L_65 = AnimationCurve_get_Item_mD5F6B4C79C432C9CEADB6D116C07969802D5611A(L_63, L_64, /*hidden argument*/NULL);
		V_6 = L_65;
		float L_66;
		L_66 = Keyframe_get_value_m9D584EA4DFB7D0BE71646F479DFB615EE005C968((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)(&V_6), /*hidden argument*/NULL);
		U3CU3Ec__DisplayClass73_0_tA9EDB2D4E6569D8D39993A6304B9396566B6F89C * L_67 = p2;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_68 = L_67->get_inCurveZ_2();
		int32_t L_69 = V_8;
		NullCheck(L_68);
		Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  L_70;
		L_70 = AnimationCurve_get_Item_mD5F6B4C79C432C9CEADB6D116C07969802D5611A(L_68, L_69, /*hidden argument*/NULL);
		V_6 = L_70;
		float L_71;
		L_71 = Keyframe_get_value_m9D584EA4DFB7D0BE71646F479DFB615EE005C968((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)(&V_6), /*hidden argument*/NULL);
		U3CU3Ec__DisplayClass73_0_tA9EDB2D4E6569D8D39993A6304B9396566B6F89C * L_72 = p2;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_73 = L_72->get_inCurveW_3();
		int32_t L_74 = V_8;
		NullCheck(L_73);
		Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  L_75;
		L_75 = AnimationCurve_get_Item_mD5F6B4C79C432C9CEADB6D116C07969802D5611A(L_73, L_74, /*hidden argument*/NULL);
		V_6 = L_75;
		float L_76;
		L_76 = Keyframe_get_value_m9D584EA4DFB7D0BE71646F479DFB615EE005C968((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)(&V_6), /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_77;
		memset((&L_77), 0, sizeof(L_77));
		Quaternion__ctor_m564FA9302F5B9DA8BAB97B0A2D86FFE83ACAA421((&L_77), L_61, L_66, L_71, L_76, /*hidden argument*/NULL);
		V_7 = L_77;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_78;
		L_78 = Quaternion_get_normalized_m32E57BB637B9A38379421B1C269C299AF3002C94((Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)(&V_7), /*hidden argument*/NULL);
		// var interp = Quaternion.Lerp(startRotation, endRotation, Mathf.InverseLerp(startTime, endTime, inCurveX[i].time));
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_79 = V_4;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_80 = V_5;
		float L_81 = V_2;
		float L_82 = V_3;
		U3CU3Ec__DisplayClass73_0_tA9EDB2D4E6569D8D39993A6304B9396566B6F89C * L_83 = p2;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_84 = L_83->get_inCurveX_0();
		int32_t L_85 = V_8;
		NullCheck(L_84);
		Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  L_86;
		L_86 = AnimationCurve_get_Item_mD5F6B4C79C432C9CEADB6D116C07969802D5611A(L_84, L_85, /*hidden argument*/NULL);
		V_6 = L_86;
		float L_87;
		L_87 = Keyframe_get_time_m75EBFDECA329315F6D41A60C0B1291F5BA4039E8((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)(&V_6), /*hidden argument*/NULL);
		float L_88;
		L_88 = Mathf_InverseLerp_mCD2E6F9ADCFFB40EB7D3086E444DF2C702F9C29B(L_81, L_82, L_87, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_89;
		L_89 = Quaternion_Lerp_mBFA4C4D2574C8140AA840273D3E6565D66F6F261(L_79, L_80, L_88, /*hidden argument*/NULL);
		V_9 = L_89;
		// float dot = Quaternion.Dot(rotation, interp);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_90 = V_9;
		float L_91;
		L_91 = Quaternion_Dot_m7F12C5843352AB2EA687923444CC987D51515F9A(L_78, L_90, /*hidden argument*/NULL);
		V_10 = L_91;
		// if (dot < bestDot)
		float L_92 = V_10;
		float L_93 = V_1;
		if ((!(((float)L_92) < ((float)L_93))))
		{
			goto IL_01b1;
		}
	}
	{
		// bestIndex = i;
		int32_t L_94 = V_8;
		V_0 = L_94;
		// bestDot = dot;
		float L_95 = V_10;
		V_1 = L_95;
	}

IL_01b1:
	{
		// for (int i = start + 1; i <= end - 1; i++)
		int32_t L_96 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_96, (int32_t)1));
	}

IL_01b7:
	{
		// for (int i = start + 1; i <= end - 1; i++)
		int32_t L_97 = V_8;
		int32_t L_98 = ___end1;
		if ((((int32_t)L_97) <= ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_98, (int32_t)1)))))
		{
			goto IL_010f;
		}
	}
	{
		// if (bestDot > compThreshold || bestIndex < 0)
		float L_99 = V_1;
		U3CU3Ec__DisplayClass73_0_tA9EDB2D4E6569D8D39993A6304B9396566B6F89C * L_100 = p2;
		float L_101 = L_100->get_compThreshold_4();
		if ((((float)L_99) > ((float)L_101)))
		{
			goto IL_01ce;
		}
	}
	{
		int32_t L_102 = V_0;
		if ((((int32_t)L_102) >= ((int32_t)0)))
		{
			goto IL_01cf;
		}
	}

IL_01ce:
	{
		// return;
		return;
	}

IL_01cf:
	{
		// outCurveX.AddKey(inCurveX[bestIndex]);
		U3CU3Ec__DisplayClass73_0_tA9EDB2D4E6569D8D39993A6304B9396566B6F89C * L_103 = p2;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_104 = L_103->get_outCurveX_5();
		U3CU3Ec__DisplayClass73_0_tA9EDB2D4E6569D8D39993A6304B9396566B6F89C * L_105 = p2;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_106 = L_105->get_inCurveX_0();
		int32_t L_107 = V_0;
		NullCheck(L_106);
		Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  L_108;
		L_108 = AnimationCurve_get_Item_mD5F6B4C79C432C9CEADB6D116C07969802D5611A(L_106, L_107, /*hidden argument*/NULL);
		NullCheck(L_104);
		int32_t L_109;
		L_109 = AnimationCurve_AddKey_m3AEE7259785540EF6A157BA99B3737AC60E30D9A(L_104, L_108, /*hidden argument*/NULL);
		// outCurveY.AddKey(inCurveY[bestIndex]);
		U3CU3Ec__DisplayClass73_0_tA9EDB2D4E6569D8D39993A6304B9396566B6F89C * L_110 = p2;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_111 = L_110->get_outCurveY_6();
		U3CU3Ec__DisplayClass73_0_tA9EDB2D4E6569D8D39993A6304B9396566B6F89C * L_112 = p2;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_113 = L_112->get_inCurveY_1();
		int32_t L_114 = V_0;
		NullCheck(L_113);
		Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  L_115;
		L_115 = AnimationCurve_get_Item_mD5F6B4C79C432C9CEADB6D116C07969802D5611A(L_113, L_114, /*hidden argument*/NULL);
		NullCheck(L_111);
		int32_t L_116;
		L_116 = AnimationCurve_AddKey_m3AEE7259785540EF6A157BA99B3737AC60E30D9A(L_111, L_115, /*hidden argument*/NULL);
		// outCurveZ.AddKey(inCurveZ[bestIndex]);
		U3CU3Ec__DisplayClass73_0_tA9EDB2D4E6569D8D39993A6304B9396566B6F89C * L_117 = p2;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_118 = L_117->get_outCurveZ_7();
		U3CU3Ec__DisplayClass73_0_tA9EDB2D4E6569D8D39993A6304B9396566B6F89C * L_119 = p2;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_120 = L_119->get_inCurveZ_2();
		int32_t L_121 = V_0;
		NullCheck(L_120);
		Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  L_122;
		L_122 = AnimationCurve_get_Item_mD5F6B4C79C432C9CEADB6D116C07969802D5611A(L_120, L_121, /*hidden argument*/NULL);
		NullCheck(L_118);
		int32_t L_123;
		L_123 = AnimationCurve_AddKey_m3AEE7259785540EF6A157BA99B3737AC60E30D9A(L_118, L_122, /*hidden argument*/NULL);
		// Recurse(start, bestIndex);
		int32_t L_124 = ___start0;
		int32_t L_125 = V_0;
		U3CU3Ec__DisplayClass73_0_tA9EDB2D4E6569D8D39993A6304B9396566B6F89C * L_126 = p2;
		IL2CPP_RUNTIME_CLASS_INIT(InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534_il2cpp_TypeInfo_var);
		InputAnimation_U3COptimizeRotationCurveU3Eg__RecurseU7C73_0_m3A3E4826B5D48C4E6E761FF18E04183A7668E172(L_124, L_125, (U3CU3Ec__DisplayClass73_0_tA9EDB2D4E6569D8D39993A6304B9396566B6F89C *)L_126, /*hidden argument*/NULL);
		// Recurse(bestIndex, end);
		int32_t L_127 = V_0;
		int32_t L_128 = ___end1;
		U3CU3Ec__DisplayClass73_0_tA9EDB2D4E6569D8D39993A6304B9396566B6F89C * L_129 = p2;
		InputAnimation_U3COptimizeRotationCurveU3Eg__RecurseU7C73_0_m3A3E4826B5D48C4E6E761FF18E04183A7668E172(L_127, L_128, (U3CU3Ec__DisplayClass73_0_tA9EDB2D4E6569D8D39993A6304B9396566B6F89C *)L_129, /*hidden argument*/NULL);
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
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimationMarker::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAnimationMarker__ctor_m245101D8B91457B5A844CC3D3F6422D4D8451029 (InputAnimationMarker_t4807C7C71F5EAE69A38D8AFBDC85B6FD4F25C376 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string name = "";
		__this->set_name_1(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
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
// System.String Microsoft.MixedReality.Toolkit.Input.InputAnimationSerializationUtils::GetOutputFilename(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* InputAnimationSerializationUtils_GetOutputFilename_m3D2FE98D8F34FD133CD06ECDCACDA698A54302C7 (String_t* ___baseName0, bool ___appendTimestamp1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral845601714FB132030B7585887918D078E9CE2267);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD1B4A550FE7439DE4FDA569B91A4624B59B45E5B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD98EEFA57F0D44C301E0D9E2C28732491D85C1C5);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (appendTimestamp)
		bool L_0 = ___appendTimestamp1;
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		// filename = String.Format("{0}-{1}.{2}", baseName, DateTime.UtcNow.ToString("yyyyMMdd-HHmmss"), InputAnimationSerializationUtils.Extension);
		String_t* L_1 = ___baseName0;
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_2;
		L_2 = DateTime_get_UtcNow_m761E57F86226DDD94F0A2F4D98F0A8E27C74F090(/*hidden argument*/NULL);
		V_1 = L_2;
		String_t* L_3;
		L_3 = DateTime_ToString_m19ECEFF7BA22ED4425F7562A82A1C2308E934204((DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 *)(&V_1), _stringLiteral845601714FB132030B7585887918D078E9CE2267, /*hidden argument*/NULL);
		String_t* L_4;
		L_4 = String_Format_m039737CCD992C5BFC8D16DFD681F5E8786E87FA6(_stringLiteralD98EEFA57F0D44C301E0D9E2C28732491D85C1C5, L_1, L_3, _stringLiteralD1B4A550FE7439DE4FDA569B91A4624B59B45E5B, /*hidden argument*/NULL);
		V_0 = L_4;
		// }
		goto IL_002a;
	}

IL_0028:
	{
		// filename = baseName;
		String_t* L_5 = ___baseName0;
		V_0 = L_5;
	}

IL_002a:
	{
		// return filename;
		String_t* L_6 = V_0;
		return L_6;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimationSerializationUtils::WriteHeader(System.IO.BinaryWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAnimationSerializationUtils_WriteHeader_mBD9FFA16D2E0EE3CD72C9FDE89619DC6F5A4FBC6 (BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F * ___writer0, const RuntimeMethod* method)
{
	{
		// writer.Write(Magic);
		BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F * L_0 = ___writer0;
		NullCheck(L_0);
		VirtActionInvoker1< int64_t >::Invoke(18 /* System.Void System.IO.BinaryWriter::Write(System.Int64) */, L_0, ((int64_t)7678548776933278406LL));
		// writer.Write(VersionMajor);
		BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F * L_1 = ___writer0;
		NullCheck(L_1);
		VirtActionInvoker1< int32_t >::Invoke(16 /* System.Void System.IO.BinaryWriter::Write(System.Int32) */, L_1, 1);
		// writer.Write(VersionMinor);
		BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F * L_2 = ___writer0;
		NullCheck(L_2);
		VirtActionInvoker1< int32_t >::Invoke(16 /* System.Void System.IO.BinaryWriter::Write(System.Int32) */, L_2, 1);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimationSerializationUtils::ReadHeader(System.IO.BinaryReader,System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAnimationSerializationUtils_ReadHeader_mD6A04D247F935A880FBFC506C3F3496E054AF66E (BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128 * ___reader0, int32_t* ___fileVersionMajor1, int32_t* ___fileVersionMinor2, const RuntimeMethod* method)
{
	{
		// long fileMagic = reader.ReadInt64();
		BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128 * L_0 = ___reader0;
		NullCheck(L_0);
		int64_t L_1;
		L_1 = VirtFuncInvoker0< int64_t >::Invoke(17 /* System.Int64 System.IO.BinaryReader::ReadInt64() */, L_0);
		// if (fileMagic != Magic)
		if ((((int64_t)L_1) == ((int64_t)((int64_t)7678548776933278406LL))))
		{
			goto IL_001c;
		}
	}
	{
		// throw new Exception("File is not an input animation file");
		Exception_t * L_2 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral07F96E76E35E18FF6CE65A73E42CD0652022C014)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InputAnimationSerializationUtils_ReadHeader_mD6A04D247F935A880FBFC506C3F3496E054AF66E_RuntimeMethod_var)));
	}

IL_001c:
	{
		// fileVersionMajor = reader.ReadInt32();
		int32_t* L_3 = ___fileVersionMajor1;
		BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128 * L_4 = ___reader0;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = VirtFuncInvoker0< int32_t >::Invoke(15 /* System.Int32 System.IO.BinaryReader::ReadInt32() */, L_4);
		*((int32_t*)L_3) = (int32_t)L_5;
		// fileVersionMinor = reader.ReadInt32();
		int32_t* L_6 = ___fileVersionMinor2;
		BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128 * L_7 = ___reader0;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = VirtFuncInvoker0< int32_t >::Invoke(15 /* System.Int32 System.IO.BinaryReader::ReadInt32() */, L_7);
		*((int32_t*)L_6) = (int32_t)L_8;
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimationSerializationUtils::ReadFloatCurve(System.IO.BinaryReader,UnityEngine.AnimationCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAnimationSerializationUtils_ReadFloatCurve_mAE6393871E98641F773E1DCC3E7234D6C57AD02C (BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128 * ___reader0, AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___curve1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* V_1 = NULL;
	int32_t V_2 = 0;
	{
		// curve.preWrapMode = (WrapMode)reader.ReadInt32();
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_0 = ___curve1;
		BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128 * L_1 = ___reader0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = VirtFuncInvoker0< int32_t >::Invoke(15 /* System.Int32 System.IO.BinaryReader::ReadInt32() */, L_1);
		NullCheck(L_0);
		AnimationCurve_set_preWrapMode_m39008E29D7419438020138A0DE50999BB89266AF(L_0, L_2, /*hidden argument*/NULL);
		// curve.postWrapMode = (WrapMode)reader.ReadInt32();
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_3 = ___curve1;
		BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128 * L_4 = ___reader0;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = VirtFuncInvoker0< int32_t >::Invoke(15 /* System.Int32 System.IO.BinaryReader::ReadInt32() */, L_4);
		NullCheck(L_3);
		AnimationCurve_set_postWrapMode_mC7079F70E85156F73D8BA2E06840F7E2BEDF8568(L_3, L_5, /*hidden argument*/NULL);
		// int keyframeCount = reader.ReadInt32();
		BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128 * L_6 = ___reader0;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = VirtFuncInvoker0< int32_t >::Invoke(15 /* System.Int32 System.IO.BinaryReader::ReadInt32() */, L_6);
		V_0 = L_7;
		// Keyframe[] keys = new Keyframe[keyframeCount];
		int32_t L_8 = V_0;
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_9 = (KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC*)(KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC*)SZArrayNew(KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC_il2cpp_TypeInfo_var, (uint32_t)L_8);
		V_1 = L_9;
		// for (int i = 0; i < keyframeCount; ++i)
		V_2 = 0;
		goto IL_00af;
	}

IL_002d:
	{
		// keys[i].time = reader.ReadSingle();
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_10 = V_1;
		int32_t L_11 = V_2;
		NullCheck(L_10);
		BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128 * L_12 = ___reader0;
		NullCheck(L_12);
		float L_13;
		L_13 = VirtFuncInvoker0< float >::Invoke(19 /* System.Single System.IO.BinaryReader::ReadSingle() */, L_12);
		Keyframe_set_time_mB48C8B14B2346F46A0A4FE27CDD01D163F945CC4((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11))), L_13, /*hidden argument*/NULL);
		// keys[i].value = reader.ReadSingle();
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128 * L_16 = ___reader0;
		NullCheck(L_16);
		float L_17;
		L_17 = VirtFuncInvoker0< float >::Invoke(19 /* System.Single System.IO.BinaryReader::ReadSingle() */, L_16);
		Keyframe_set_value_m617DC36870FB4BA758FDEF2497DF958297266E3F((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15))), L_17, /*hidden argument*/NULL);
		// keys[i].inTangent = reader.ReadSingle();
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_18 = V_1;
		int32_t L_19 = V_2;
		NullCheck(L_18);
		BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128 * L_20 = ___reader0;
		NullCheck(L_20);
		float L_21;
		L_21 = VirtFuncInvoker0< float >::Invoke(19 /* System.Single System.IO.BinaryReader::ReadSingle() */, L_20);
		Keyframe_set_inTangent_m12C08116896BC3E2C632356738D4CBE1D43B37C5((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)((L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_19))), L_21, /*hidden argument*/NULL);
		// keys[i].outTangent = reader.ReadSingle();
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_22 = V_1;
		int32_t L_23 = V_2;
		NullCheck(L_22);
		BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128 * L_24 = ___reader0;
		NullCheck(L_24);
		float L_25;
		L_25 = VirtFuncInvoker0< float >::Invoke(19 /* System.Single System.IO.BinaryReader::ReadSingle() */, L_24);
		Keyframe_set_outTangent_m8754D0F36E7C5470E7FE426171ADD7D77077C275((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23))), L_25, /*hidden argument*/NULL);
		// keys[i].inWeight = reader.ReadSingle();
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_26 = V_1;
		int32_t L_27 = V_2;
		NullCheck(L_26);
		BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128 * L_28 = ___reader0;
		NullCheck(L_28);
		float L_29;
		L_29 = VirtFuncInvoker0< float >::Invoke(19 /* System.Single System.IO.BinaryReader::ReadSingle() */, L_28);
		Keyframe_set_inWeight_m844B007DD3D01958CD0EAE45B046EBB1032949B4((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)((L_26)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_27))), L_29, /*hidden argument*/NULL);
		// keys[i].outWeight = reader.ReadSingle();
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_30 = V_1;
		int32_t L_31 = V_2;
		NullCheck(L_30);
		BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128 * L_32 = ___reader0;
		NullCheck(L_32);
		float L_33;
		L_33 = VirtFuncInvoker0< float >::Invoke(19 /* System.Single System.IO.BinaryReader::ReadSingle() */, L_32);
		Keyframe_set_outWeight_m3ED9DD3A892D325FC564FFD0C0AB53A0A7B9913F((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)((L_30)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_31))), L_33, /*hidden argument*/NULL);
		// keys[i].weightedMode = (WeightedMode)reader.ReadInt32();
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_34 = V_1;
		int32_t L_35 = V_2;
		NullCheck(L_34);
		BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128 * L_36 = ___reader0;
		NullCheck(L_36);
		int32_t L_37;
		L_37 = VirtFuncInvoker0< int32_t >::Invoke(15 /* System.Int32 System.IO.BinaryReader::ReadInt32() */, L_36);
		Keyframe_set_weightedMode_mEFA8BE25D83C1CF4E2D83AD76F6BB34E0435D0B5((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35))), L_37, /*hidden argument*/NULL);
		// for (int i = 0; i < keyframeCount; ++i)
		int32_t L_38 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_38, (int32_t)1));
	}

IL_00af:
	{
		// for (int i = 0; i < keyframeCount; ++i)
		int32_t L_39 = V_2;
		int32_t L_40 = V_0;
		if ((((int32_t)L_39) < ((int32_t)L_40)))
		{
			goto IL_002d;
		}
	}
	{
		// curve.keys = keys;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_41 = ___curve1;
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_42 = V_1;
		NullCheck(L_41);
		AnimationCurve_set_keys_m146468F0FF5228D829489E845C1193B1D83543BF(L_41, L_42, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimationSerializationUtils::WriteBoolCurve(System.IO.BinaryWriter,UnityEngine.AnimationCurve,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAnimationSerializationUtils_WriteBoolCurve_m15A0CF2FCE96FB6CB6BB2DD265A0C9B8BB9726F7 (BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F * ___writer0, AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___curve1, float ___startTime2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// writer.Write((int)curve.preWrapMode);
		BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F * L_0 = ___writer0;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_1 = ___curve1;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = AnimationCurve_get_preWrapMode_m58B16E24ED209A84A3B2B7D9348F43E3E6776F58(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker1< int32_t >::Invoke(16 /* System.Void System.IO.BinaryWriter::Write(System.Int32) */, L_0, L_2);
		// writer.Write((int)curve.postWrapMode);
		BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F * L_3 = ___writer0;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_4 = ___curve1;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = AnimationCurve_get_postWrapMode_m5A9698F30F71D1A4D400F1FD67D78FAF3D14B318(L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		VirtActionInvoker1< int32_t >::Invoke(16 /* System.Void System.IO.BinaryWriter::Write(System.Int32) */, L_3, L_5);
		// writer.Write(curve.length);
		BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F * L_6 = ___writer0;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_7 = ___curve1;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = AnimationCurve_get_length_mB3D0734222EE55DB1389BCB98CCB1324AF8AA4E0(L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		VirtActionInvoker1< int32_t >::Invoke(16 /* System.Void System.IO.BinaryWriter::Write(System.Int32) */, L_6, L_8);
		// for (int i = 0; i < curve.length; ++i)
		V_0 = 0;
		goto IL_0055;
	}

IL_0028:
	{
		// var keyframe = curve.keys[i];
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_9 = ___curve1;
		NullCheck(L_9);
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_10;
		L_10 = AnimationCurve_get_keys_m64FA75C0B1F7BCDE123EFB903962B2BD9DD5F321(L_9, /*hidden argument*/NULL);
		int32_t L_11 = V_0;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_1 = L_13;
		// writer.Write(keyframe.time - startTime);
		BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F * L_14 = ___writer0;
		float L_15;
		L_15 = Keyframe_get_time_m75EBFDECA329315F6D41A60C0B1291F5BA4039E8((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)(&V_1), /*hidden argument*/NULL);
		float L_16 = ___startTime2;
		NullCheck(L_14);
		VirtActionInvoker1< float >::Invoke(20 /* System.Void System.IO.BinaryWriter::Write(System.Single) */, L_14, ((float)il2cpp_codegen_subtract((float)L_15, (float)L_16)));
		// writer.Write(keyframe.value);
		BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F * L_17 = ___writer0;
		float L_18;
		L_18 = Keyframe_get_value_m9D584EA4DFB7D0BE71646F479DFB615EE005C968((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)(&V_1), /*hidden argument*/NULL);
		NullCheck(L_17);
		VirtActionInvoker1< float >::Invoke(20 /* System.Void System.IO.BinaryWriter::Write(System.Single) */, L_17, L_18);
		// for (int i = 0; i < curve.length; ++i)
		int32_t L_19 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)1));
	}

IL_0055:
	{
		// for (int i = 0; i < curve.length; ++i)
		int32_t L_20 = V_0;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_21 = ___curve1;
		NullCheck(L_21);
		int32_t L_22;
		L_22 = AnimationCurve_get_length_mB3D0734222EE55DB1389BCB98CCB1324AF8AA4E0(L_21, /*hidden argument*/NULL);
		if ((((int32_t)L_20) < ((int32_t)L_22)))
		{
			goto IL_0028;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimationSerializationUtils::ReadBoolCurve(System.IO.BinaryReader,UnityEngine.AnimationCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAnimationSerializationUtils_ReadBoolCurve_m085FFC6E15B09C8E7648FF91356151F7FA006240 (BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128 * ___reader0, AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___curve1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* V_1 = NULL;
	int32_t V_2 = 0;
	{
		// curve.preWrapMode = (WrapMode)reader.ReadInt32();
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_0 = ___curve1;
		BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128 * L_1 = ___reader0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = VirtFuncInvoker0< int32_t >::Invoke(15 /* System.Int32 System.IO.BinaryReader::ReadInt32() */, L_1);
		NullCheck(L_0);
		AnimationCurve_set_preWrapMode_m39008E29D7419438020138A0DE50999BB89266AF(L_0, L_2, /*hidden argument*/NULL);
		// curve.postWrapMode = (WrapMode)reader.ReadInt32();
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_3 = ___curve1;
		BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128 * L_4 = ___reader0;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = VirtFuncInvoker0< int32_t >::Invoke(15 /* System.Int32 System.IO.BinaryReader::ReadInt32() */, L_4);
		NullCheck(L_3);
		AnimationCurve_set_postWrapMode_mC7079F70E85156F73D8BA2E06840F7E2BEDF8568(L_3, L_5, /*hidden argument*/NULL);
		// int keyframeCount = reader.ReadInt32();
		BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128 * L_6 = ___reader0;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = VirtFuncInvoker0< int32_t >::Invoke(15 /* System.Int32 System.IO.BinaryReader::ReadInt32() */, L_6);
		V_0 = L_7;
		// Keyframe[] keys = new Keyframe[keyframeCount];
		int32_t L_8 = V_0;
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_9 = (KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC*)(KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC*)SZArrayNew(KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC_il2cpp_TypeInfo_var, (uint32_t)L_8);
		V_1 = L_9;
		// for (int i = 0; i < keyframeCount; ++i)
		V_2 = 0;
		goto IL_0070;
	}

IL_002a:
	{
		// keys[i].time = reader.ReadSingle();
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_10 = V_1;
		int32_t L_11 = V_2;
		NullCheck(L_10);
		BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128 * L_12 = ___reader0;
		NullCheck(L_12);
		float L_13;
		L_13 = VirtFuncInvoker0< float >::Invoke(19 /* System.Single System.IO.BinaryReader::ReadSingle() */, L_12);
		Keyframe_set_time_mB48C8B14B2346F46A0A4FE27CDD01D163F945CC4((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11))), L_13, /*hidden argument*/NULL);
		// keys[i].value = reader.ReadSingle();
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128 * L_16 = ___reader0;
		NullCheck(L_16);
		float L_17;
		L_17 = VirtFuncInvoker0< float >::Invoke(19 /* System.Single System.IO.BinaryReader::ReadSingle() */, L_16);
		Keyframe_set_value_m617DC36870FB4BA758FDEF2497DF958297266E3F((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15))), L_17, /*hidden argument*/NULL);
		// keys[i].outWeight = 1.0e6f;
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_18 = V_1;
		int32_t L_19 = V_2;
		NullCheck(L_18);
		Keyframe_set_outWeight_m3ED9DD3A892D325FC564FFD0C0AB53A0A7B9913F((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)((L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_19))), (1000000.0f), /*hidden argument*/NULL);
		// keys[i].weightedMode = WeightedMode.Both;
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_20 = V_1;
		int32_t L_21 = V_2;
		NullCheck(L_20);
		Keyframe_set_weightedMode_mEFA8BE25D83C1CF4E2D83AD76F6BB34E0435D0B5((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21))), 3, /*hidden argument*/NULL);
		// for (int i = 0; i < keyframeCount; ++i)
		int32_t L_22 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)1));
	}

IL_0070:
	{
		// for (int i = 0; i < keyframeCount; ++i)
		int32_t L_23 = V_2;
		int32_t L_24 = V_0;
		if ((((int32_t)L_23) < ((int32_t)L_24)))
		{
			goto IL_002a;
		}
	}
	{
		// curve.keys = keys;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_25 = ___curve1;
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_26 = V_1;
		NullCheck(L_25);
		AnimationCurve_set_keys_m146468F0FF5228D829489E845C1193B1D83543BF(L_25, L_26, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimationSerializationUtils::WriteFloatCurveSimple(System.IO.BinaryWriter,UnityEngine.AnimationCurve,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAnimationSerializationUtils_WriteFloatCurveSimple_m6E070EBD2AF41C142BF139047F40ED577F5CD763 (BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F * ___writer0, AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___curve1, float ___startTime2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// writer.Write((int)curve.preWrapMode);
		BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F * L_0 = ___writer0;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_1 = ___curve1;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = AnimationCurve_get_preWrapMode_m58B16E24ED209A84A3B2B7D9348F43E3E6776F58(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker1< int32_t >::Invoke(16 /* System.Void System.IO.BinaryWriter::Write(System.Int32) */, L_0, L_2);
		// writer.Write((int)curve.postWrapMode);
		BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F * L_3 = ___writer0;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_4 = ___curve1;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = AnimationCurve_get_postWrapMode_m5A9698F30F71D1A4D400F1FD67D78FAF3D14B318(L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		VirtActionInvoker1< int32_t >::Invoke(16 /* System.Void System.IO.BinaryWriter::Write(System.Int32) */, L_3, L_5);
		// writer.Write(curve.length);
		BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F * L_6 = ___writer0;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_7 = ___curve1;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = AnimationCurve_get_length_mB3D0734222EE55DB1389BCB98CCB1324AF8AA4E0(L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		VirtActionInvoker1< int32_t >::Invoke(16 /* System.Void System.IO.BinaryWriter::Write(System.Int32) */, L_6, L_8);
		// for (int i = 0; i < curve.length; ++i)
		V_0 = 0;
		goto IL_0055;
	}

IL_0028:
	{
		// var keyframe = curve.keys[i];
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_9 = ___curve1;
		NullCheck(L_9);
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_10;
		L_10 = AnimationCurve_get_keys_m64FA75C0B1F7BCDE123EFB903962B2BD9DD5F321(L_9, /*hidden argument*/NULL);
		int32_t L_11 = V_0;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_1 = L_13;
		// writer.Write(keyframe.time - startTime);
		BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F * L_14 = ___writer0;
		float L_15;
		L_15 = Keyframe_get_time_m75EBFDECA329315F6D41A60C0B1291F5BA4039E8((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)(&V_1), /*hidden argument*/NULL);
		float L_16 = ___startTime2;
		NullCheck(L_14);
		VirtActionInvoker1< float >::Invoke(20 /* System.Void System.IO.BinaryWriter::Write(System.Single) */, L_14, ((float)il2cpp_codegen_subtract((float)L_15, (float)L_16)));
		// writer.Write(keyframe.value);
		BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F * L_17 = ___writer0;
		float L_18;
		L_18 = Keyframe_get_value_m9D584EA4DFB7D0BE71646F479DFB615EE005C968((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)(&V_1), /*hidden argument*/NULL);
		NullCheck(L_17);
		VirtActionInvoker1< float >::Invoke(20 /* System.Void System.IO.BinaryWriter::Write(System.Single) */, L_17, L_18);
		// for (int i = 0; i < curve.length; ++i)
		int32_t L_19 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)1));
	}

IL_0055:
	{
		// for (int i = 0; i < curve.length; ++i)
		int32_t L_20 = V_0;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_21 = ___curve1;
		NullCheck(L_21);
		int32_t L_22;
		L_22 = AnimationCurve_get_length_mB3D0734222EE55DB1389BCB98CCB1324AF8AA4E0(L_21, /*hidden argument*/NULL);
		if ((((int32_t)L_20) < ((int32_t)L_22)))
		{
			goto IL_0028;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimationSerializationUtils::ReadFloatCurveSimple(System.IO.BinaryReader,UnityEngine.AnimationCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAnimationSerializationUtils_ReadFloatCurveSimple_m2DB3EA2BCC35088D91687D5090BCF18F02E32431 (BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128 * ___reader0, AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___curve1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* V_1 = NULL;
	int32_t V_2 = 0;
	{
		// curve.preWrapMode = (WrapMode)reader.ReadInt32();
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_0 = ___curve1;
		BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128 * L_1 = ___reader0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = VirtFuncInvoker0< int32_t >::Invoke(15 /* System.Int32 System.IO.BinaryReader::ReadInt32() */, L_1);
		NullCheck(L_0);
		AnimationCurve_set_preWrapMode_m39008E29D7419438020138A0DE50999BB89266AF(L_0, L_2, /*hidden argument*/NULL);
		// curve.postWrapMode = (WrapMode)reader.ReadInt32();
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_3 = ___curve1;
		BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128 * L_4 = ___reader0;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = VirtFuncInvoker0< int32_t >::Invoke(15 /* System.Int32 System.IO.BinaryReader::ReadInt32() */, L_4);
		NullCheck(L_3);
		AnimationCurve_set_postWrapMode_mC7079F70E85156F73D8BA2E06840F7E2BEDF8568(L_3, L_5, /*hidden argument*/NULL);
		// int keyframeCount = reader.ReadInt32();
		BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128 * L_6 = ___reader0;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = VirtFuncInvoker0< int32_t >::Invoke(15 /* System.Int32 System.IO.BinaryReader::ReadInt32() */, L_6);
		V_0 = L_7;
		// Keyframe[] keys = new Keyframe[keyframeCount];
		int32_t L_8 = V_0;
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_9 = (KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC*)(KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC*)SZArrayNew(KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC_il2cpp_TypeInfo_var, (uint32_t)L_8);
		V_1 = L_9;
		// for (int i = 0; i < keyframeCount; ++i)
		V_2 = 0;
		goto IL_005f;
	}

IL_002a:
	{
		// keys[i].time = reader.ReadSingle();
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_10 = V_1;
		int32_t L_11 = V_2;
		NullCheck(L_10);
		BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128 * L_12 = ___reader0;
		NullCheck(L_12);
		float L_13;
		L_13 = VirtFuncInvoker0< float >::Invoke(19 /* System.Single System.IO.BinaryReader::ReadSingle() */, L_12);
		Keyframe_set_time_mB48C8B14B2346F46A0A4FE27CDD01D163F945CC4((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11))), L_13, /*hidden argument*/NULL);
		// keys[i].value = reader.ReadSingle();
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128 * L_16 = ___reader0;
		NullCheck(L_16);
		float L_17;
		L_17 = VirtFuncInvoker0< float >::Invoke(19 /* System.Single System.IO.BinaryReader::ReadSingle() */, L_16);
		Keyframe_set_value_m617DC36870FB4BA758FDEF2497DF958297266E3F((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15))), L_17, /*hidden argument*/NULL);
		// keys[i].weightedMode = WeightedMode.Both;
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_18 = V_1;
		int32_t L_19 = V_2;
		NullCheck(L_18);
		Keyframe_set_weightedMode_mEFA8BE25D83C1CF4E2D83AD76F6BB34E0435D0B5((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)((L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_19))), 3, /*hidden argument*/NULL);
		// for (int i = 0; i < keyframeCount; ++i)
		int32_t L_20 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1));
	}

IL_005f:
	{
		// for (int i = 0; i < keyframeCount; ++i)
		int32_t L_21 = V_2;
		int32_t L_22 = V_0;
		if ((((int32_t)L_21) < ((int32_t)L_22)))
		{
			goto IL_002a;
		}
	}
	{
		// curve.keys = keys;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_23 = ___curve1;
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_24 = V_1;
		NullCheck(L_23);
		AnimationCurve_set_keys_m146468F0FF5228D829489E845C1193B1D83543BF(L_23, L_24, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimationSerializationUtils::WriteMarkerList(System.IO.BinaryWriter,System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Input.InputAnimationMarker>,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAnimationSerializationUtils_WriteMarkerList_m89DD412E5D301D7EE4194A217BE5FEA2E40C733F (BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F * ___writer0, List_1_tAAD05033EDA4EAF37AE770A3EDAB1B555706FEFD * ___markers1, float ___startTime2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m76A593F013DC32969E61C317E654D6760B4D1E8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m53C61470937E0B112AF53FDAEEF861A3534696FB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m1277D43589A00582FC8007628E3520223E1F2F61_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m2F49E6477919ABC49651A226799364621C80EE19_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m7B5C118BF4B6FA8874F6370190A0C2F001CA54CF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t168CFCE1DDFF36FEA9351886E61D43566EBDF0C3  V_0;
	memset((&V_0), 0, sizeof(V_0));
	InputAnimationMarker_t4807C7C71F5EAE69A38D8AFBDC85B6FD4F25C376 * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// writer.Write(markers.Count);
		BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F * L_0 = ___writer0;
		List_1_tAAD05033EDA4EAF37AE770A3EDAB1B555706FEFD * L_1 = ___markers1;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = List_1_get_Count_m7B5C118BF4B6FA8874F6370190A0C2F001CA54CF_inline(L_1, /*hidden argument*/List_1_get_Count_m7B5C118BF4B6FA8874F6370190A0C2F001CA54CF_RuntimeMethod_var);
		NullCheck(L_0);
		VirtActionInvoker1< int32_t >::Invoke(16 /* System.Void System.IO.BinaryWriter::Write(System.Int32) */, L_0, L_2);
		// foreach (var marker in markers)
		List_1_tAAD05033EDA4EAF37AE770A3EDAB1B555706FEFD * L_3 = ___markers1;
		NullCheck(L_3);
		Enumerator_t168CFCE1DDFF36FEA9351886E61D43566EBDF0C3  L_4;
		L_4 = List_1_GetEnumerator_m2F49E6477919ABC49651A226799364621C80EE19(L_3, /*hidden argument*/List_1_GetEnumerator_m2F49E6477919ABC49651A226799364621C80EE19_RuntimeMethod_var);
		V_0 = L_4;
	}

IL_0013:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0037;
		}

IL_0015:
		{
			// foreach (var marker in markers)
			InputAnimationMarker_t4807C7C71F5EAE69A38D8AFBDC85B6FD4F25C376 * L_5;
			L_5 = Enumerator_get_Current_m1277D43589A00582FC8007628E3520223E1F2F61_inline((Enumerator_t168CFCE1DDFF36FEA9351886E61D43566EBDF0C3 *)(&V_0), /*hidden argument*/Enumerator_get_Current_m1277D43589A00582FC8007628E3520223E1F2F61_RuntimeMethod_var);
			V_1 = L_5;
			// writer.Write(marker.time - startTime);
			BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F * L_6 = ___writer0;
			InputAnimationMarker_t4807C7C71F5EAE69A38D8AFBDC85B6FD4F25C376 * L_7 = V_1;
			NullCheck(L_7);
			float L_8 = L_7->get_time_0();
			float L_9 = ___startTime2;
			NullCheck(L_6);
			VirtActionInvoker1< float >::Invoke(20 /* System.Void System.IO.BinaryWriter::Write(System.Single) */, L_6, ((float)il2cpp_codegen_subtract((float)L_8, (float)L_9)));
			// writer.Write(marker.name);
			BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F * L_10 = ___writer0;
			InputAnimationMarker_t4807C7C71F5EAE69A38D8AFBDC85B6FD4F25C376 * L_11 = V_1;
			NullCheck(L_11);
			String_t* L_12 = L_11->get_name_1();
			NullCheck(L_10);
			VirtActionInvoker1< String_t* >::Invoke(21 /* System.Void System.IO.BinaryWriter::Write(System.String) */, L_10, L_12);
		}

IL_0037:
		{
			// foreach (var marker in markers)
			bool L_13;
			L_13 = Enumerator_MoveNext_m53C61470937E0B112AF53FDAEEF861A3534696FB((Enumerator_t168CFCE1DDFF36FEA9351886E61D43566EBDF0C3 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_m53C61470937E0B112AF53FDAEEF861A3534696FB_RuntimeMethod_var);
			if (L_13)
			{
				goto IL_0015;
			}
		}

IL_0040:
		{
			IL2CPP_LEAVE(0x50, FINALLY_0042);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0042;
	}

FINALLY_0042:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m76A593F013DC32969E61C317E654D6760B4D1E8A((Enumerator_t168CFCE1DDFF36FEA9351886E61D43566EBDF0C3 *)(&V_0), /*hidden argument*/Enumerator_Dispose_m76A593F013DC32969E61C317E654D6760B4D1E8A_RuntimeMethod_var);
		IL2CPP_END_FINALLY(66)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(66)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x50, IL_0050)
	}

IL_0050:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimationSerializationUtils::ReadMarkerList(System.IO.BinaryReader,System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Input.InputAnimationMarker>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAnimationSerializationUtils_ReadMarkerList_m30B0FE2E589012E1705B773388E6DAFE6D7E852C (BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128 * ___reader0, List_1_tAAD05033EDA4EAF37AE770A3EDAB1B555706FEFD * ___markers1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputAnimationMarker_t4807C7C71F5EAE69A38D8AFBDC85B6FD4F25C376_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m79968F703F97E8C1B850A74C6BF7581665CB1507_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m6C1D207CF0E996831A7606C1AB9209509C843BF7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_set_Capacity_mF2BC1ADE2A9619E4BE410FC1014BA5999FCF02D6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	InputAnimationMarker_t4807C7C71F5EAE69A38D8AFBDC85B6FD4F25C376 * V_2 = NULL;
	{
		// markers.Clear();
		List_1_tAAD05033EDA4EAF37AE770A3EDAB1B555706FEFD * L_0 = ___markers1;
		NullCheck(L_0);
		List_1_Clear_m6C1D207CF0E996831A7606C1AB9209509C843BF7(L_0, /*hidden argument*/List_1_Clear_m6C1D207CF0E996831A7606C1AB9209509C843BF7_RuntimeMethod_var);
		// int count = reader.ReadInt32();
		BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128 * L_1 = ___reader0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = VirtFuncInvoker0< int32_t >::Invoke(15 /* System.Int32 System.IO.BinaryReader::ReadInt32() */, L_1);
		V_0 = L_2;
		// markers.Capacity = count;
		List_1_tAAD05033EDA4EAF37AE770A3EDAB1B555706FEFD * L_3 = ___markers1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		List_1_set_Capacity_mF2BC1ADE2A9619E4BE410FC1014BA5999FCF02D6(L_3, L_4, /*hidden argument*/List_1_set_Capacity_mF2BC1ADE2A9619E4BE410FC1014BA5999FCF02D6_RuntimeMethod_var);
		// for (int i = 0; i < count; ++i)
		V_1 = 0;
		goto IL_0041;
	}

IL_0018:
	{
		// var marker = new InputAnimationMarker();
		InputAnimationMarker_t4807C7C71F5EAE69A38D8AFBDC85B6FD4F25C376 * L_5 = (InputAnimationMarker_t4807C7C71F5EAE69A38D8AFBDC85B6FD4F25C376 *)il2cpp_codegen_object_new(InputAnimationMarker_t4807C7C71F5EAE69A38D8AFBDC85B6FD4F25C376_il2cpp_TypeInfo_var);
		InputAnimationMarker__ctor_m245101D8B91457B5A844CC3D3F6422D4D8451029(L_5, /*hidden argument*/NULL);
		V_2 = L_5;
		// marker.time = reader.ReadSingle();
		InputAnimationMarker_t4807C7C71F5EAE69A38D8AFBDC85B6FD4F25C376 * L_6 = V_2;
		BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128 * L_7 = ___reader0;
		NullCheck(L_7);
		float L_8;
		L_8 = VirtFuncInvoker0< float >::Invoke(19 /* System.Single System.IO.BinaryReader::ReadSingle() */, L_7);
		NullCheck(L_6);
		L_6->set_time_0(L_8);
		// marker.name = reader.ReadString();
		InputAnimationMarker_t4807C7C71F5EAE69A38D8AFBDC85B6FD4F25C376 * L_9 = V_2;
		BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128 * L_10 = ___reader0;
		NullCheck(L_10);
		String_t* L_11;
		L_11 = VirtFuncInvoker0< String_t* >::Invoke(22 /* System.String System.IO.BinaryReader::ReadString() */, L_10);
		NullCheck(L_9);
		L_9->set_name_1(L_11);
		// markers.Add(marker);
		List_1_tAAD05033EDA4EAF37AE770A3EDAB1B555706FEFD * L_12 = ___markers1;
		InputAnimationMarker_t4807C7C71F5EAE69A38D8AFBDC85B6FD4F25C376 * L_13 = V_2;
		NullCheck(L_12);
		List_1_Add_m79968F703F97E8C1B850A74C6BF7581665CB1507(L_12, L_13, /*hidden argument*/List_1_Add_m79968F703F97E8C1B850A74C6BF7581665CB1507_RuntimeMethod_var);
		// for (int i = 0; i < count; ++i)
		int32_t L_14 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
	}

IL_0041:
	{
		// for (int i = 0; i < count; ++i)
		int32_t L_15 = V_1;
		int32_t L_16 = V_0;
		if ((((int32_t)L_15) < ((int32_t)L_16)))
		{
			goto IL_0018;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimationSerializationUtils::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAnimationSerializationUtils__cctor_mEEA9832E28C0012A7B54FDFAB2D732AE649A00BD (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputAnimationSerializationUtils_tBF0CF9A1A3138FAC30FF8F17528259A9C7A31560_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackedHandJoint_tFDADC49BA87BC6CBE390A69B0CC80925BAA37FD6_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly int jointCount = Enum.GetNames(typeof(TrackedHandJoint)).Length;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (TrackedHandJoint_tFDADC49BA87BC6CBE390A69B0CC80925BAA37FD6_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_2;
		L_2 = Enum_GetNames_m49110673091D017F43CF0F5F7AD9B7730306D2E8(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		((InputAnimationSerializationUtils_tBF0CF9A1A3138FAC30FF8F17528259A9C7A31560_StaticFields*)il2cpp_codegen_static_fields_for(InputAnimationSerializationUtils_tBF0CF9A1A3138FAC30FF8F17528259A9C7A31560_il2cpp_TypeInfo_var))->set_jointCount_0(((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))));
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
// System.Single Microsoft.MixedReality.Toolkit.Input.InputRecordingBuffer::get_StartTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float InputRecordingBuffer_get_StartTime_m3352753447E86DC9C0C9FBF5D668781AEC63FA78 (InputRecordingBuffer_tA6CEDA373266AD73D32A749E89D2D87FD6635E4F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Peek_mB3153BAE9034B20254393FA4C73FA78C0F27A401_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public float StartTime => keyframes.Peek().Time;
		Queue_1_t6983AF29DC5F881F3157AC042F9F24494864A613 * L_0 = __this->get_keyframes_1();
		NullCheck(L_0);
		Keyframe_tB3167A15EF7CB57AA5C8498D640C6254A16F5B3F * L_1;
		L_1 = Queue_1_Peek_mB3153BAE9034B20254393FA4C73FA78C0F27A401(L_0, /*hidden argument*/Queue_1_Peek_mB3153BAE9034B20254393FA4C73FA78C0F27A401_RuntimeMethod_var);
		NullCheck(L_1);
		float L_2;
		L_2 = Keyframe_get_Time_mA05D121FA2658A8A2C65307A5FE7F95518D4DDDA_inline(L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputRecordingBuffer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputRecordingBuffer__ctor_m71EFC81CFA6AA9548A80AEF42522D2E6897F392C (InputRecordingBuffer_tA6CEDA373266AD73D32A749E89D2D87FD6635E4F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1__ctor_mEE9F113DA333DE72BB526E682C731DA547CA37E1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_t6983AF29DC5F881F3157AC042F9F24494864A613_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public InputRecordingBuffer() => keyframes = new Queue<Keyframe>();
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// public InputRecordingBuffer() => keyframes = new Queue<Keyframe>();
		Queue_1_t6983AF29DC5F881F3157AC042F9F24494864A613 * L_0 = (Queue_1_t6983AF29DC5F881F3157AC042F9F24494864A613 *)il2cpp_codegen_object_new(Queue_1_t6983AF29DC5F881F3157AC042F9F24494864A613_il2cpp_TypeInfo_var);
		Queue_1__ctor_mEE9F113DA333DE72BB526E682C731DA547CA37E1(L_0, /*hidden argument*/Queue_1__ctor_mEE9F113DA333DE72BB526E682C731DA547CA37E1_RuntimeMethod_var);
		__this->set_keyframes_1(L_0);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputRecordingBuffer::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputRecordingBuffer_Clear_m6EF61E54A3AB9A96F6C071E6DFDA1875F5CA47FB (InputRecordingBuffer_tA6CEDA373266AD73D32A749E89D2D87FD6635E4F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Clear_m5D53E24BE1FF59818BED534E8EB9F5BBCA0D8390_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// keyframes.Clear();
		Queue_1_t6983AF29DC5F881F3157AC042F9F24494864A613 * L_0 = __this->get_keyframes_1();
		NullCheck(L_0);
		Queue_1_Clear_m5D53E24BE1FF59818BED534E8EB9F5BBCA0D8390(L_0, /*hidden argument*/Queue_1_Clear_m5D53E24BE1FF59818BED534E8EB9F5BBCA0D8390_RuntimeMethod_var);
		// currentKeyframe = null;
		__this->set_currentKeyframe_0((Keyframe_tB3167A15EF7CB57AA5C8498D640C6254A16F5B3F *)NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputRecordingBuffer::RemoveBeforeTime(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputRecordingBuffer_RemoveBeforeTime_m0C6E71F62E8B91462AA5552F4B1F2865C5BE450F (InputRecordingBuffer_tA6CEDA373266AD73D32A749E89D2D87FD6635E4F * __this, float ___time0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Dequeue_m46868C1E95A0FA17E63EEC454067A5C0FFC7E46F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Peek_mB3153BAE9034B20254393FA4C73FA78C0F27A401_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_get_Count_mD86B9C3F43E36831A4BBD81862C08D02E776CB6C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		goto IL_000e;
	}

IL_0002:
	{
		// keyframes.Dequeue();
		Queue_1_t6983AF29DC5F881F3157AC042F9F24494864A613 * L_0 = __this->get_keyframes_1();
		NullCheck(L_0);
		Keyframe_tB3167A15EF7CB57AA5C8498D640C6254A16F5B3F * L_1;
		L_1 = Queue_1_Dequeue_m46868C1E95A0FA17E63EEC454067A5C0FFC7E46F(L_0, /*hidden argument*/Queue_1_Dequeue_m46868C1E95A0FA17E63EEC454067A5C0FFC7E46F_RuntimeMethod_var);
	}

IL_000e:
	{
		// while (keyframes.Count > 0 && keyframes.Peek().Time < time)
		Queue_1_t6983AF29DC5F881F3157AC042F9F24494864A613 * L_2 = __this->get_keyframes_1();
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Queue_1_get_Count_mD86B9C3F43E36831A4BBD81862C08D02E776CB6C_inline(L_2, /*hidden argument*/Queue_1_get_Count_mD86B9C3F43E36831A4BBD81862C08D02E776CB6C_RuntimeMethod_var);
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_002f;
		}
	}
	{
		Queue_1_t6983AF29DC5F881F3157AC042F9F24494864A613 * L_4 = __this->get_keyframes_1();
		NullCheck(L_4);
		Keyframe_tB3167A15EF7CB57AA5C8498D640C6254A16F5B3F * L_5;
		L_5 = Queue_1_Peek_mB3153BAE9034B20254393FA4C73FA78C0F27A401(L_4, /*hidden argument*/Queue_1_Peek_mB3153BAE9034B20254393FA4C73FA78C0F27A401_RuntimeMethod_var);
		NullCheck(L_5);
		float L_6;
		L_6 = Keyframe_get_Time_mA05D121FA2658A8A2C65307A5FE7F95518D4DDDA_inline(L_5, /*hidden argument*/NULL);
		float L_7 = ___time0;
		if ((((float)L_6) < ((float)L_7)))
		{
			goto IL_0002;
		}
	}

IL_002f:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputRecordingBuffer::SetCameraPose(Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputRecordingBuffer_SetCameraPose_mFCB55F38E6817458876440816F17CC3C1EB4D6AB (InputRecordingBuffer_tA6CEDA373266AD73D32A749E89D2D87FD6635E4F * __this, MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99  ___pose0, const RuntimeMethod* method)
{
	{
		// public void SetCameraPose(MixedRealityPose pose) => currentKeyframe.CameraPose = pose;
		Keyframe_tB3167A15EF7CB57AA5C8498D640C6254A16F5B3F * L_0 = __this->get_currentKeyframe_0();
		MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99  L_1 = ___pose0;
		NullCheck(L_0);
		Keyframe_set_CameraPose_mA7F77373E5B5A27F781CC58234DA8E66C482C7DD_inline(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputRecordingBuffer::SetGazeRay(UnityEngine.Ray)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputRecordingBuffer_SetGazeRay_m10272880F153255CC6DAE81925119175D764C3C3 (InputRecordingBuffer_tA6CEDA373266AD73D32A749E89D2D87FD6635E4F * __this, Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  ___ray0, const RuntimeMethod* method)
{
	{
		// public void SetGazeRay(Ray ray) => currentKeyframe.GazeRay = ray;
		Keyframe_tB3167A15EF7CB57AA5C8498D640C6254A16F5B3F * L_0 = __this->get_currentKeyframe_0();
		Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  L_1 = ___ray0;
		NullCheck(L_0);
		Keyframe_set_GazeRay_m9CA5738D5E4A5423FE33D2971A0F096DF0E2A7F6_inline(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputRecordingBuffer::SetHandState(Microsoft.MixedReality.Toolkit.Utilities.Handedness,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputRecordingBuffer_SetHandState_m535C643CC8365C86B17E0F5851B9CEAB4145BCDB (InputRecordingBuffer_tA6CEDA373266AD73D32A749E89D2D87FD6635E4F * __this, uint8_t ___handedness0, bool ___tracked1, bool ___pinching2, const RuntimeMethod* method)
{
	{
		// if (handedness == Handedness.Left)
		uint8_t L_0 = ___handedness0;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_001d;
		}
	}
	{
		// currentKeyframe.LeftTracked = tracked;
		Keyframe_tB3167A15EF7CB57AA5C8498D640C6254A16F5B3F * L_1 = __this->get_currentKeyframe_0();
		bool L_2 = ___tracked1;
		NullCheck(L_1);
		Keyframe_set_LeftTracked_mA7012EE3B00277F37646D2EFFD6E58B89ED22C12_inline(L_1, L_2, /*hidden argument*/NULL);
		// currentKeyframe.LeftPinch = pinching;
		Keyframe_tB3167A15EF7CB57AA5C8498D640C6254A16F5B3F * L_3 = __this->get_currentKeyframe_0();
		bool L_4 = ___pinching2;
		NullCheck(L_3);
		Keyframe_set_LeftPinch_m7DE1DB8481149DB1A6F4FD05E1CFA51EFC0D223C_inline(L_3, L_4, /*hidden argument*/NULL);
		// }
		return;
	}

IL_001d:
	{
		// currentKeyframe.RightTracked = tracked;
		Keyframe_tB3167A15EF7CB57AA5C8498D640C6254A16F5B3F * L_5 = __this->get_currentKeyframe_0();
		bool L_6 = ___tracked1;
		NullCheck(L_5);
		Keyframe_set_RightTracked_m2DDA779BE3AB10359A1139B303D9E1687EF2A91A_inline(L_5, L_6, /*hidden argument*/NULL);
		// currentKeyframe.RightPinch = pinching;
		Keyframe_tB3167A15EF7CB57AA5C8498D640C6254A16F5B3F * L_7 = __this->get_currentKeyframe_0();
		bool L_8 = ___pinching2;
		NullCheck(L_7);
		Keyframe_set_RightPinch_mCD64D00BD5EE182D2DA2F0C3A8893EFD4FCCA219_inline(L_7, L_8, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputRecordingBuffer::SetJointPose(Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputRecordingBuffer_SetJointPose_m0F213AE56C8C8F8C6216E829C88B246F2D512DF2 (InputRecordingBuffer_tA6CEDA373266AD73D32A749E89D2D87FD6635E4F * __this, uint8_t ___handedness0, int32_t ___joint1, MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99  ___pose2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m4EDC557BB444444293757D2606B103B6AFAD82DC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (handedness == Handedness.Left)
		uint8_t L_0 = ___handedness0;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0017;
		}
	}
	{
		// currentKeyframe.LeftJoints.Add(joint, pose);
		Keyframe_tB3167A15EF7CB57AA5C8498D640C6254A16F5B3F * L_1 = __this->get_currentKeyframe_0();
		NullCheck(L_1);
		Dictionary_2_tABC45B7C67E921F533EBEF222CFE2B891AA1E098 * L_2;
		L_2 = Keyframe_get_LeftJoints_m82B2A30643E9897737F81EF37C7601C4C6018816_inline(L_1, /*hidden argument*/NULL);
		int32_t L_3 = ___joint1;
		MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99  L_4 = ___pose2;
		NullCheck(L_2);
		Dictionary_2_Add_m4EDC557BB444444293757D2606B103B6AFAD82DC(L_2, L_3, L_4, /*hidden argument*/Dictionary_2_Add_m4EDC557BB444444293757D2606B103B6AFAD82DC_RuntimeMethod_var);
		// }
		return;
	}

IL_0017:
	{
		// currentKeyframe.RightJoints.Add(joint, pose);
		Keyframe_tB3167A15EF7CB57AA5C8498D640C6254A16F5B3F * L_5 = __this->get_currentKeyframe_0();
		NullCheck(L_5);
		Dictionary_2_tABC45B7C67E921F533EBEF222CFE2B891AA1E098 * L_6;
		L_6 = Keyframe_get_RightJoints_mDBD54F5919D9FFE32E616059DA0198099C686006_inline(L_5, /*hidden argument*/NULL);
		int32_t L_7 = ___joint1;
		MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99  L_8 = ___pose2;
		NullCheck(L_6);
		Dictionary_2_Add_m4EDC557BB444444293757D2606B103B6AFAD82DC(L_6, L_7, L_8, /*hidden argument*/Dictionary_2_Add_m4EDC557BB444444293757D2606B103B6AFAD82DC_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Int32 Microsoft.MixedReality.Toolkit.Input.InputRecordingBuffer::NewKeyframe(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InputRecordingBuffer_NewKeyframe_mFE7FC5772D9967EAB88AA5B762F2A5713CA25219 (InputRecordingBuffer_tA6CEDA373266AD73D32A749E89D2D87FD6635E4F * __this, float ___time0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Keyframe_tB3167A15EF7CB57AA5C8498D640C6254A16F5B3F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Enqueue_m31E9400DB21C3E0CC8349B2C7566D6D4869D4F9E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_get_Count_mD86B9C3F43E36831A4BBD81862C08D02E776CB6C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// currentKeyframe = new Keyframe(time);
		float L_0 = ___time0;
		Keyframe_tB3167A15EF7CB57AA5C8498D640C6254A16F5B3F * L_1 = (Keyframe_tB3167A15EF7CB57AA5C8498D640C6254A16F5B3F *)il2cpp_codegen_object_new(Keyframe_tB3167A15EF7CB57AA5C8498D640C6254A16F5B3F_il2cpp_TypeInfo_var);
		Keyframe__ctor_m8C29A9724CF8FE98D008BAD7AB0310D6E40CEA1A(L_1, L_0, /*hidden argument*/NULL);
		__this->set_currentKeyframe_0(L_1);
		// keyframes.Enqueue(currentKeyframe);
		Queue_1_t6983AF29DC5F881F3157AC042F9F24494864A613 * L_2 = __this->get_keyframes_1();
		Keyframe_tB3167A15EF7CB57AA5C8498D640C6254A16F5B3F * L_3 = __this->get_currentKeyframe_0();
		NullCheck(L_2);
		Queue_1_Enqueue_m31E9400DB21C3E0CC8349B2C7566D6D4869D4F9E(L_2, L_3, /*hidden argument*/Queue_1_Enqueue_m31E9400DB21C3E0CC8349B2C7566D6D4869D4F9E_RuntimeMethod_var);
		// return keyframes.Count - 1;
		Queue_1_t6983AF29DC5F881F3157AC042F9F24494864A613 * L_4 = __this->get_keyframes_1();
		NullCheck(L_4);
		int32_t L_5;
		L_5 = Queue_1_get_Count_mD86B9C3F43E36831A4BBD81862C08D02E776CB6C_inline(L_4, /*hidden argument*/Queue_1_get_Count_mD86B9C3F43E36831A4BBD81862C08D02E776CB6C_RuntimeMethod_var);
		return ((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)1));
	}
}
// System.Collections.Generic.IEnumerator`1<Microsoft.MixedReality.Toolkit.Input.InputRecordingBuffer/Keyframe> Microsoft.MixedReality.Toolkit.Input.InputRecordingBuffer::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InputRecordingBuffer_GetEnumerator_m2AB791EA1C66FA0DB04242DA0D062B53A520472E (InputRecordingBuffer_tA6CEDA373266AD73D32A749E89D2D87FD6635E4F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_t68B017BFDF640B5A9938D0FD1BEAE9B802896902_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_GetEnumerator_m205EE33811A2CEA16A8A4B86B1798421FDD01127_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public IEnumerator<Keyframe> GetEnumerator() => keyframes.GetEnumerator();
		Queue_1_t6983AF29DC5F881F3157AC042F9F24494864A613 * L_0 = __this->get_keyframes_1();
		NullCheck(L_0);
		Enumerator_t68B017BFDF640B5A9938D0FD1BEAE9B802896902  L_1;
		L_1 = Queue_1_GetEnumerator_m205EE33811A2CEA16A8A4B86B1798421FDD01127(L_0, /*hidden argument*/Queue_1_GetEnumerator_m205EE33811A2CEA16A8A4B86B1798421FDD01127_RuntimeMethod_var);
		Enumerator_t68B017BFDF640B5A9938D0FD1BEAE9B802896902  L_2 = L_1;
		RuntimeObject * L_3 = Box(Enumerator_t68B017BFDF640B5A9938D0FD1BEAE9B802896902_il2cpp_TypeInfo_var, &L_2);
		return (RuntimeObject*)L_3;
	}
}
// System.Collections.IEnumerator Microsoft.MixedReality.Toolkit.Input.InputRecordingBuffer::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InputRecordingBuffer_System_Collections_IEnumerable_GetEnumerator_m8FCF1FF00B2216C76A0597CA7046567F61A3E220 (InputRecordingBuffer_tA6CEDA373266AD73D32A749E89D2D87FD6635E4F * __this, const RuntimeMethod* method)
{
	{
		// IEnumerator IEnumerable.GetEnumerator() => GetEnumerator();
		RuntimeObject* L_0;
		L_0 = InputRecordingBuffer_GetEnumerator_m2AB791EA1C66FA0DB04242DA0D062B53A520472E(__this, /*hidden argument*/NULL);
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
// System.Void Microsoft.MixedReality.Toolkit.Input.InputRecordingService::add_OnRecordingStarted(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputRecordingService_add_OnRecordingStarted_m84BED90BBCDFB785AB20FB82E18D9F255E534894 (InputRecordingService_tA847B98505BE7064D6751CD73492550FE4A2338B * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_1 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_2 = NULL;
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = __this->get_OnRecordingStarted_18();
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = V_0;
		V_1 = L_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_2 = V_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)CastclassSealed((RuntimeObject*)L_4, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var));
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** L_5 = __this->get_address_of_OnRecordingStarted_18();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_6 = V_2;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_7 = V_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *>((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 **)L_5, L_6, L_7);
		V_0 = L_8;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_9 = V_0;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_9) == ((RuntimeObject*)(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputRecordingService::remove_OnRecordingStarted(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputRecordingService_remove_OnRecordingStarted_m4D5AE4D484DC02C3191F723A74AE687A72DE7476 (InputRecordingService_tA847B98505BE7064D6751CD73492550FE4A2338B * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_1 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_2 = NULL;
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = __this->get_OnRecordingStarted_18();
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = V_0;
		V_1 = L_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_2 = V_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)CastclassSealed((RuntimeObject*)L_4, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var));
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** L_5 = __this->get_address_of_OnRecordingStarted_18();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_6 = V_2;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_7 = V_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *>((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 **)L_5, L_6, L_7);
		V_0 = L_8;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_9 = V_0;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_9) == ((RuntimeObject*)(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputRecordingService::add_OnRecordingStopped(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputRecordingService_add_OnRecordingStopped_m252A29DCEB3C69DDE23CFE502E7DFB65CFA4A9BF (InputRecordingService_tA847B98505BE7064D6751CD73492550FE4A2338B * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_1 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_2 = NULL;
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = __this->get_OnRecordingStopped_19();
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = V_0;
		V_1 = L_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_2 = V_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)CastclassSealed((RuntimeObject*)L_4, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var));
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** L_5 = __this->get_address_of_OnRecordingStopped_19();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_6 = V_2;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_7 = V_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *>((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 **)L_5, L_6, L_7);
		V_0 = L_8;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_9 = V_0;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_9) == ((RuntimeObject*)(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputRecordingService::remove_OnRecordingStopped(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputRecordingService_remove_OnRecordingStopped_m9EF4B3AFD29E9772862E70CBF4649926B0A9B657 (InputRecordingService_tA847B98505BE7064D6751CD73492550FE4A2338B * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_1 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_2 = NULL;
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = __this->get_OnRecordingStopped_19();
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = V_0;
		V_1 = L_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_2 = V_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)CastclassSealed((RuntimeObject*)L_4, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var));
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** L_5 = __this->get_address_of_OnRecordingStopped_19();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_6 = V_2;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_7 = V_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *>((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 **)L_5, L_6, L_7);
		V_0 = L_8;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_9 = V_0;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_9) == ((RuntimeObject*)(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Input.InputRecordingService::get_IsRecording()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputRecordingService_get_IsRecording_m6B36789EE3D2F8DDAEE0E13FF83A9BE7BAE74FAE (InputRecordingService_tA847B98505BE7064D6751CD73492550FE4A2338B * __this, const RuntimeMethod* method)
{
	{
		// public bool IsRecording { get; private set; } = false;
		bool L_0 = __this->get_U3CIsRecordingU3Ek__BackingField_20();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputRecordingService::set_IsRecording(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputRecordingService_set_IsRecording_m040D1B2E017C00DB07A388C900E25C34C1FA3C80 (InputRecordingService_tA847B98505BE7064D6751CD73492550FE4A2338B * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool IsRecording { get; private set; } = false;
		bool L_0 = ___value0;
		__this->set_U3CIsRecordingU3Ek__BackingField_20(L_0);
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Input.InputRecordingService::get_UseBufferTimeLimit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputRecordingService_get_UseBufferTimeLimit_m4042E68CF548455A697C39ABB07DCD491FD11EC7 (InputRecordingService_tA847B98505BE7064D6751CD73492550FE4A2338B * __this, const RuntimeMethod* method)
{
	{
		// get { return useBufferTimeLimit; }
		bool L_0 = __this->get_useBufferTimeLimit_21();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputRecordingService::set_UseBufferTimeLimit(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputRecordingService_set_UseBufferTimeLimit_mCEBE3995FFC8F02DE7D6983EDB0A91A7FE8AB73B (InputRecordingService_tA847B98505BE7064D6751CD73492550FE4A2338B * __this, bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m32EB6B5DB3EA9B62B49C29C367AFAD991AC2A53A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (useBufferTimeLimit && !value)
		bool L_0 = __this->get_useBufferTimeLimit_21();
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		bool L_1 = ___value0;
		if (L_1)
		{
			goto IL_001c;
		}
	}
	{
		// unlimitedRecordingStartTime = StartTime;
		float L_2;
		L_2 = InputRecordingService_get_StartTime_mCF3448ECC51DF3103BAA6E93289F9C17A83E011D(__this, /*hidden argument*/NULL);
		Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  L_3;
		memset((&L_3), 0, sizeof(L_3));
		Nullable_1__ctor_m32EB6B5DB3EA9B62B49C29C367AFAD991AC2A53A((&L_3), L_2, /*hidden argument*/Nullable_1__ctor_m32EB6B5DB3EA9B62B49C29C367AFAD991AC2A53A_RuntimeMethod_var);
		__this->set_unlimitedRecordingStartTime_23(L_3);
	}

IL_001c:
	{
		// useBufferTimeLimit = value;
		bool L_4 = ___value0;
		__this->set_useBufferTimeLimit_21(L_4);
		// if (useBufferTimeLimit)
		bool L_5 = __this->get_useBufferTimeLimit_21();
		if (!L_5)
		{
			goto IL_0031;
		}
	}
	{
		// PruneBuffer();
		InputRecordingService_PruneBuffer_mD56B955866241876DED757B6A097946CA1711935(__this, /*hidden argument*/NULL);
	}

IL_0031:
	{
		// }
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Input.InputRecordingService::get_StartTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float InputRecordingService_get_StartTime_mCF3448ECC51DF3103BAA6E93289F9C17A83E011D (InputRecordingService_tA847B98505BE7064D6751CD73492550FE4A2338B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m7897F8E6F5E7968B14AEE7B3B5719B6B3CE4292C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_mBC700ACC6A8110AF4C3911F6866195856CADA20F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (unlimitedRecordingStartTime.HasValue)
		Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A * L_0 = __this->get_address_of_unlimitedRecordingStartTime_23();
		bool L_1;
		L_1 = Nullable_1_get_HasValue_m7897F8E6F5E7968B14AEE7B3B5719B6B3CE4292C_inline((Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A *)L_0, /*hidden argument*/Nullable_1_get_HasValue_m7897F8E6F5E7968B14AEE7B3B5719B6B3CE4292C_RuntimeMethod_var);
		if (!L_1)
		{
			goto IL_003f;
		}
	}
	{
		// if (useBufferTimeLimit)
		bool L_2 = __this->get_useBufferTimeLimit_21();
		if (!L_2)
		{
			goto IL_0033;
		}
	}
	{
		// return Mathf.Max(unlimitedRecordingStartTime.Value, EndTime - recordingBufferTimeLimit);
		Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A * L_3 = __this->get_address_of_unlimitedRecordingStartTime_23();
		float L_4;
		L_4 = Nullable_1_get_Value_mBC700ACC6A8110AF4C3911F6866195856CADA20F((Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A *)L_3, /*hidden argument*/Nullable_1_get_Value_mBC700ACC6A8110AF4C3911F6866195856CADA20F_RuntimeMethod_var);
		float L_5;
		L_5 = InputRecordingService_get_EndTime_mB3DC5B15E5C740E44A8CDAE882D1636B5083B4E5_inline(__this, /*hidden argument*/NULL);
		float L_6 = __this->get_recordingBufferTimeLimit_22();
		float L_7;
		L_7 = Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775(L_4, ((float)il2cpp_codegen_subtract((float)L_5, (float)L_6)), /*hidden argument*/NULL);
		return L_7;
	}

IL_0033:
	{
		// return unlimitedRecordingStartTime.Value;
		Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A * L_8 = __this->get_address_of_unlimitedRecordingStartTime_23();
		float L_9;
		L_9 = Nullable_1_get_Value_mBC700ACC6A8110AF4C3911F6866195856CADA20F((Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A *)L_8, /*hidden argument*/Nullable_1_get_Value_mBC700ACC6A8110AF4C3911F6866195856CADA20F_RuntimeMethod_var);
		return L_9;
	}

IL_003f:
	{
		// return EndTime;
		float L_10;
		L_10 = InputRecordingService_get_EndTime_mB3DC5B15E5C740E44A8CDAE882D1636B5083B4E5_inline(__this, /*hidden argument*/NULL);
		return L_10;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Input.InputRecordingService::get_EndTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float InputRecordingService_get_EndTime_mB3DC5B15E5C740E44A8CDAE882D1636B5083B4E5 (InputRecordingService_tA847B98505BE7064D6751CD73492550FE4A2338B * __this, const RuntimeMethod* method)
{
	{
		// public float EndTime { get; private set; }
		float L_0 = __this->get_U3CEndTimeU3Ek__BackingField_24();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputRecordingService::set_EndTime(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputRecordingService_set_EndTime_mA217B0B7F035D4B0A479D43AEE295CBCB1169370 (InputRecordingService_tA847B98505BE7064D6751CD73492550FE4A2338B * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float EndTime { get; private set; }
		float L_0 = ___value0;
		__this->set_U3CEndTimeU3Ek__BackingField_24(L_0);
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputRecordingProfile Microsoft.MixedReality.Toolkit.Input.InputRecordingService::get_InputRecordingProfile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MixedRealityInputRecordingProfile_t56C7B027300F96474C48A61DF0A7EFAA8E41EA91 * InputRecordingService_get_InputRecordingProfile_m1F8BE909EBD3849421D2F6C76FCA44E932D9793E (InputRecordingService_tA847B98505BE7064D6751CD73492550FE4A2338B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealityInputRecordingProfile_t56C7B027300F96474C48A61DF0A7EFAA8E41EA91_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F30A225B0E18CECF032D8CBEBC2F77FFC6A9B2B);
		s_Il2CppMethodInitialized = true;
	}
	MixedRealityInputRecordingProfile_t56C7B027300F96474C48A61DF0A7EFAA8E41EA91 * G_B2_0 = NULL;
	MixedRealityInputRecordingProfile_t56C7B027300F96474C48A61DF0A7EFAA8E41EA91 * G_B1_0 = NULL;
	{
		// var profile = ConfigurationProfile as MixedRealityInputRecordingProfile;
		BaseMixedRealityProfile_tC5DBD7146B1E1D467DE81BA1EAB45133408A59E1 * L_0;
		L_0 = VirtFuncInvoker0< BaseMixedRealityProfile_tC5DBD7146B1E1D467DE81BA1EAB45133408A59E1 * >::Invoke(22 /* Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile Microsoft.MixedReality.Toolkit.BaseService::get_ConfigurationProfile() */, __this);
		// if (!profile)
		MixedRealityInputRecordingProfile_t56C7B027300F96474C48A61DF0A7EFAA8E41EA91 * L_1 = ((MixedRealityInputRecordingProfile_t56C7B027300F96474C48A61DF0A7EFAA8E41EA91 *)IsInstClass((RuntimeObject*)L_0, MixedRealityInputRecordingProfile_t56C7B027300F96474C48A61DF0A7EFAA8E41EA91_il2cpp_TypeInfo_var));
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_1, /*hidden argument*/NULL);
		G_B1_0 = L_1;
		if (L_2)
		{
			G_B2_0 = L_1;
			goto IL_001d;
		}
	}
	{
		// Debug.LogError("Profile for Input Recording Service must be a MixedRealityInputRecordingProfile");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(_stringLiteral2F30A225B0E18CECF032D8CBEBC2F77FFC6A9B2B, /*hidden argument*/NULL);
		G_B2_0 = G_B1_0;
	}

IL_001d:
	{
		// return profile;
		return G_B2_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputRecordingService::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputRecordingService_Enable_mF17ECAE45E3503F21D7E67AD1A137A2559F33950 (InputRecordingService_tA847B98505BE7064D6751CD73492550FE4A2338B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputRecordingBuffer_tA6CEDA373266AD73D32A749E89D2D87FD6635E4F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.Enable();
		BaseService_Enable_m0009FE0AE05820A130A513ADFC9CA5E119A00258(__this, /*hidden argument*/NULL);
		// recordingBuffer = new InputRecordingBuffer();
		InputRecordingBuffer_tA6CEDA373266AD73D32A749E89D2D87FD6635E4F * L_0 = (InputRecordingBuffer_tA6CEDA373266AD73D32A749E89D2D87FD6635E4F *)il2cpp_codegen_object_new(InputRecordingBuffer_tA6CEDA373266AD73D32A749E89D2D87FD6635E4F_il2cpp_TypeInfo_var);
		InputRecordingBuffer__ctor_m71EFC81CFA6AA9548A80AEF42522D2E6897F392C(L_0, /*hidden argument*/NULL);
		__this->set_recordingBuffer_28(L_0);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputRecordingService::Disable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputRecordingService_Disable_m3F0D85350FCA33E87A7A26B5D5AAED2643336E60 (InputRecordingService_tA847B98505BE7064D6751CD73492550FE4A2338B * __this, const RuntimeMethod* method)
{
	{
		// base.Disable();
		BaseService_Disable_m35061F42654DE06AE5575CE47C32AE43CF9AC0B2(__this, /*hidden argument*/NULL);
		// recordingBuffer = null;
		__this->set_recordingBuffer_28((InputRecordingBuffer_tA6CEDA373266AD73D32A749E89D2D87FD6635E4F *)NULL);
		// ResetStartTime();
		InputRecordingService_ResetStartTime_m54DB931C76EA3CB3DB995B82486F136B28B22B17(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputRecordingService::StartRecording()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputRecordingService_StartRecording_m05D7626A675B9C42900590944D52483E40714DF6 (InputRecordingService_tA847B98505BE7064D6751CD73492550FE4A2338B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreServices_tB5CDABAF57AEFF02EB99AEC0144C51C89D980A26_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityInputSystem_t0EDEF390D5E8DB56C2251E372228BADDA9F6CF24_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m32EB6B5DB3EA9B62B49C29C367AFAD991AC2A53A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m7897F8E6F5E7968B14AEE7B3B5719B6B3CE4292C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B6_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B5_0 = NULL;
	{
		// eyeGazeProvider = CoreServices.InputSystem.EyeGazeProvider;
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_tB5CDABAF57AEFF02EB99AEC0144C51C89D980A26_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = CoreServices_get_InputSystem_mE61A004642407339A8CC47764036D3BB52C43E8D(/*hidden argument*/NULL);
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(10 /* Microsoft.MixedReality.Toolkit.Input.IMixedRealityEyeGazeProvider Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::get_EyeGazeProvider() */, IMixedRealityInputSystem_t0EDEF390D5E8DB56C2251E372228BADDA9F6CF24_il2cpp_TypeInfo_var, L_0);
		__this->set_eyeGazeProvider_29(L_1);
		// IsRecording = true;
		InputRecordingService_set_IsRecording_m040D1B2E017C00DB07A388C900E25C34C1FA3C80_inline(__this, (bool)1, /*hidden argument*/NULL);
		// frameRate = InputRecordingProfile.FrameRate;
		MixedRealityInputRecordingProfile_t56C7B027300F96474C48A61DF0A7EFAA8E41EA91 * L_2;
		L_2 = InputRecordingService_get_InputRecordingProfile_m1F8BE909EBD3849421D2F6C76FCA44E932D9793E(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		float L_3;
		L_3 = MixedRealityInputRecordingProfile_get_FrameRate_m073A10D133A0D9B9FB75E9E2EFFDCEAFB6D8A7D0_inline(L_2, /*hidden argument*/NULL);
		__this->set_frameRate_25(L_3);
		// frameInterval = 1f / frameRate;
		float L_4 = __this->get_frameRate_25();
		__this->set_frameInterval_26(((float)((float)(1.0f)/(float)L_4)));
		// nextFrame = Time.time + frameInterval;
		float L_5;
		L_5 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		float L_6 = __this->get_frameInterval_26();
		__this->set_nextFrame_27(((float)il2cpp_codegen_add((float)L_5, (float)L_6)));
		// if (UseBufferTimeLimit)
		bool L_7;
		L_7 = InputRecordingService_get_UseBufferTimeLimit_m4042E68CF548455A697C39ABB07DCD491FD11EC7_inline(__this, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_005a;
		}
	}
	{
		// PruneBuffer();
		InputRecordingService_PruneBuffer_mD56B955866241876DED757B6A097946CA1711935(__this, /*hidden argument*/NULL);
	}

IL_005a:
	{
		// if (!unlimitedRecordingStartTime.HasValue)
		Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A * L_8 = __this->get_address_of_unlimitedRecordingStartTime_23();
		bool L_9;
		L_9 = Nullable_1_get_HasValue_m7897F8E6F5E7968B14AEE7B3B5719B6B3CE4292C_inline((Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A *)L_8, /*hidden argument*/Nullable_1_get_HasValue_m7897F8E6F5E7968B14AEE7B3B5719B6B3CE4292C_RuntimeMethod_var);
		if (L_9)
		{
			goto IL_0077;
		}
	}
	{
		// unlimitedRecordingStartTime = Time.time;
		float L_10;
		L_10 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  L_11;
		memset((&L_11), 0, sizeof(L_11));
		Nullable_1__ctor_m32EB6B5DB3EA9B62B49C29C367AFAD991AC2A53A((&L_11), L_10, /*hidden argument*/Nullable_1__ctor_m32EB6B5DB3EA9B62B49C29C367AFAD991AC2A53A_RuntimeMethod_var);
		__this->set_unlimitedRecordingStartTime_23(L_11);
	}

IL_0077:
	{
		// OnRecordingStarted?.Invoke();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_12 = __this->get_OnRecordingStarted_18();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_13 = L_12;
		G_B5_0 = L_13;
		if (L_13)
		{
			G_B6_0 = L_13;
			goto IL_0082;
		}
	}
	{
		return;
	}

IL_0082:
	{
		NullCheck(G_B6_0);
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(G_B6_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputRecordingService::StopRecording()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputRecordingService_StopRecording_m76C44E83A3BE4D1814C462836AA8D0B26E68E78E (InputRecordingService_tA847B98505BE7064D6751CD73492550FE4A2338B * __this, const RuntimeMethod* method)
{
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B2_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B1_0 = NULL;
	{
		// IsRecording = false;
		InputRecordingService_set_IsRecording_m040D1B2E017C00DB07A388C900E25C34C1FA3C80_inline(__this, (bool)0, /*hidden argument*/NULL);
		// OnRecordingStopped?.Invoke();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = __this->get_OnRecordingStopped_19();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		NullCheck(G_B2_0);
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(G_B2_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputRecordingService::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputRecordingService_LateUpdate_m512B1CACD6AD5BEFC64ED371E3726F8A6D04F8A9 (InputRecordingService_tA847B98505BE7064D6751CD73492550FE4A2338B * __this, const RuntimeMethod* method)
{
	{
		// if (IsEnabled && IsRecording && Time.time > nextFrame)
		bool L_0;
		L_0 = VirtFuncInvoker0< bool >::Invoke(33 /* System.Boolean Microsoft.MixedReality.Toolkit.BaseService::get_IsEnabled() */, __this);
		if (!L_0)
		{
			goto IL_006e;
		}
	}
	{
		bool L_1;
		L_1 = InputRecordingService_get_IsRecording_m6B36789EE3D2F8DDAEE0E13FF83A9BE7BAE74FAE_inline(__this, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_006e;
		}
	}
	{
		float L_2;
		L_2 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		float L_3 = __this->get_nextFrame_27();
		if ((!(((float)L_2) > ((float)L_3))))
		{
			goto IL_006e;
		}
	}
	{
		// EndTime = Time.time;
		float L_4;
		L_4 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		InputRecordingService_set_EndTime_mA217B0B7F035D4B0A479D43AEE295CBCB1169370_inline(__this, L_4, /*hidden argument*/NULL);
		// nextFrame += frameInterval * (Mathf.Floor((Time.time - nextFrame) * frameRate) + 1f);
		float L_5 = __this->get_nextFrame_27();
		float L_6 = __this->get_frameInterval_26();
		float L_7;
		L_7 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		float L_8 = __this->get_nextFrame_27();
		float L_9 = __this->get_frameRate_25();
		float L_10;
		L_10 = floorf(((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_7, (float)L_8)), (float)L_9)));
		__this->set_nextFrame_27(((float)il2cpp_codegen_add((float)L_5, (float)((float)il2cpp_codegen_multiply((float)L_6, (float)((float)il2cpp_codegen_add((float)L_10, (float)(1.0f))))))));
		// if (UseBufferTimeLimit)
		bool L_11;
		L_11 = InputRecordingService_get_UseBufferTimeLimit_m4042E68CF548455A697C39ABB07DCD491FD11EC7_inline(__this, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0068;
		}
	}
	{
		// PruneBuffer();
		InputRecordingService_PruneBuffer_mD56B955866241876DED757B6A097946CA1711935(__this, /*hidden argument*/NULL);
	}

IL_0068:
	{
		// RecordKeyframe();
		InputRecordingService_RecordKeyframe_mF7DFA21FF0E2391F49CB0574A7231AAA304221D0(__this, /*hidden argument*/NULL);
	}

IL_006e:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputRecordingService::DiscardRecordedInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputRecordingService_DiscardRecordedInput_m76F63F8F3EB93999A7278D86CD3D0897168CE44C (InputRecordingService_tA847B98505BE7064D6751CD73492550FE4A2338B * __this, const RuntimeMethod* method)
{
	{
		// if (IsEnabled)
		bool L_0;
		L_0 = VirtFuncInvoker0< bool >::Invoke(33 /* System.Boolean Microsoft.MixedReality.Toolkit.BaseService::get_IsEnabled() */, __this);
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		// recordingBuffer.Clear();
		InputRecordingBuffer_tA6CEDA373266AD73D32A749E89D2D87FD6635E4F * L_1 = __this->get_recordingBuffer_28();
		NullCheck(L_1);
		InputRecordingBuffer_Clear_m6EF61E54A3AB9A96F6C071E6DFDA1875F5CA47FB(L_1, /*hidden argument*/NULL);
		// ResetStartTime();
		InputRecordingService_ResetStartTime_m54DB931C76EA3CB3DB995B82486F136B28B22B17(__this, /*hidden argument*/NULL);
	}

IL_0019:
	{
		// }
		return;
	}
}
// System.String Microsoft.MixedReality.Toolkit.Input.InputRecordingService::SaveInputAnimation(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* InputRecordingService_SaveInputAnimation_m0722CA5AEC0861CDFFF1458A9770539F66AB8F3F (InputRecordingService_tA847B98505BE7064D6751CD73492550FE4A2338B * __this, String_t* ___directory0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputAnimationSerializationUtils_tBF0CF9A1A3138FAC30FF8F17528259A9C7A31560_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral06265567ED5B353F62334C6ED834095E8F3DA213);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string SaveInputAnimation(string directory = null) => SaveInputAnimation(InputAnimationSerializationUtils.GetOutputFilename(), directory);
		IL2CPP_RUNTIME_CLASS_INIT(InputAnimationSerializationUtils_tBF0CF9A1A3138FAC30FF8F17528259A9C7A31560_il2cpp_TypeInfo_var);
		String_t* L_0;
		L_0 = InputAnimationSerializationUtils_GetOutputFilename_m3D2FE98D8F34FD133CD06ECDCACDA698A54302C7(_stringLiteral06265567ED5B353F62334C6ED834095E8F3DA213, (bool)1, /*hidden argument*/NULL);
		String_t* L_1 = ___directory0;
		String_t* L_2;
		L_2 = InputRecordingService_SaveInputAnimation_m9A8A1F47F0B896B3B2FF453AED9C91D793DC6060(__this, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.String Microsoft.MixedReality.Toolkit.Input.InputRecordingService::SaveInputAnimation(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* InputRecordingService_SaveInputAnimation_m9A8A1F47F0B896B3B2FF453AED9C91D793DC6060 (InputRecordingService_tA847B98505BE7064D6751CD73492550FE4A2338B * __this, String_t* ___filename0, String_t* ___directory1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral10D826E55CA66B177C3CA8E6D951B2AAC0D06ADC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2C71071781ACA763255B49C62BBF32A19A63C633);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * V_1 = NULL;
	String_t* V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	String_t* G_B3_0 = NULL;
	String_t* G_B2_0 = NULL;
	{
		// if (IsEnabled)
		bool L_0;
		L_0 = VirtFuncInvoker0< bool >::Invoke(33 /* System.Boolean Microsoft.MixedReality.Toolkit.BaseService::get_IsEnabled() */, __this);
		if (!L_0)
		{
			goto IL_0079;
		}
	}
	{
		// string path = Path.Combine(directory ?? Application.persistentDataPath, filename);
		String_t* L_1 = ___directory1;
		String_t* L_2 = L_1;
		G_B2_0 = L_2;
		if (L_2)
		{
			G_B3_0 = L_2;
			goto IL_0012;
		}
	}
	{
		String_t* L_3;
		L_3 = Application_get_persistentDataPath_mBD9C84D06693A9DEF2D9D2206B59D4BCF8A03463(/*hidden argument*/NULL);
		G_B3_0 = L_3;
	}

IL_0012:
	{
		String_t* L_4 = ___filename0;
		IL2CPP_RUNTIME_CLASS_INIT(Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
		String_t* L_5;
		L_5 = Path_Combine_mC22E47A9BB232F02ED3B6B5F6DD53338D37782EF(G_B3_0, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
	}

IL_0019:
	try
	{ // begin try (depth: 1)
		{
			// using (Stream fileStream = File.Open(path, FileMode.Create))
			String_t* L_6 = V_0;
			FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * L_7;
			L_7 = File_Open_mA9EF74B69D352F396FBD5225BCC3643D8063C002(L_6, 2, /*hidden argument*/NULL);
			V_1 = L_7;
		}

IL_0021:
		try
		{ // begin try (depth: 2)
			// PruneBuffer();
			InputRecordingService_PruneBuffer_mD56B955866241876DED757B6A097946CA1711935(__this, /*hidden argument*/NULL);
			// var animation = InputAnimation.FromRecordingBuffer(recordingBuffer, InputRecordingProfile);
			InputRecordingBuffer_tA6CEDA373266AD73D32A749E89D2D87FD6635E4F * L_8 = __this->get_recordingBuffer_28();
			MixedRealityInputRecordingProfile_t56C7B027300F96474C48A61DF0A7EFAA8E41EA91 * L_9;
			L_9 = InputRecordingService_get_InputRecordingProfile_m1F8BE909EBD3849421D2F6C76FCA44E932D9793E(__this, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534_il2cpp_TypeInfo_var);
			InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534 * L_10;
			L_10 = InputAnimation_FromRecordingBuffer_mD3D70E27E73C4FEE4CC86F8D1B66D9297E92969A(L_8, L_9, /*hidden argument*/NULL);
			// Debug.Log($"Recording buffer saved to animation");
			IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
			Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral10D826E55CA66B177C3CA8E6D951B2AAC0D06ADC, /*hidden argument*/NULL);
			// animation.ToStream(fileStream, 0f);
			Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_11 = V_1;
			NullCheck(L_10);
			InputAnimation_ToStream_m596DF966C6CCF755E7BDA3410BDB36C286F342FF(L_10, L_11, (0.0f), /*hidden argument*/NULL);
			// Debug.Log($"Recorded input animation exported to {path}");
			String_t* L_12 = V_0;
			String_t* L_13;
			L_13 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral2C71071781ACA763255B49C62BBF32A19A63C633, L_12, /*hidden argument*/NULL);
			Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_13, /*hidden argument*/NULL);
			// }
			IL2CPP_LEAVE(0x69, FINALLY_005f);
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_005f;
		}

FINALLY_005f:
		{ // begin finally (depth: 2)
			{
				Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_14 = V_1;
				if (!L_14)
				{
					goto IL_0068;
				}
			}

IL_0062:
			{
				Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_15 = V_1;
				NullCheck(L_15);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_15);
			}

IL_0068:
			{
				IL2CPP_END_FINALLY(95)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(95)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_JUMP_TBL(0x69, IL_0069)
		}

IL_0069:
		{
			// return path;
			String_t* L_16 = V_0;
			V_2 = L_16;
			goto IL_007f;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_006d;
		}
		throw e;
	}

CATCH_006d:
	{ // begin catch(System.IO.IOException)
		// Debug.LogWarning(ex.Message);
		NullCheck(((IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA *)IL2CPP_GET_ACTIVE_EXCEPTION(IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA *)));
		String_t* L_17;
		L_17 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, ((IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA *)IL2CPP_GET_ACTIVE_EXCEPTION(IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA *)));
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var)));
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(L_17, /*hidden argument*/NULL);
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0079;
	} // end catch (depth: 1)

IL_0079:
	{
		// return "";
		return _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
	}

IL_007f:
	{
		// }
		String_t* L_18 = V_2;
		return L_18;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputRecordingService::ResetStartTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputRecordingService_ResetStartTime_m54DB931C76EA3CB3DB995B82486F136B28B22B17 (InputRecordingService_tA847B98505BE7064D6751CD73492550FE4A2338B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m32EB6B5DB3EA9B62B49C29C367AFAD991AC2A53A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (IsRecording)
		bool L_0;
		L_0 = InputRecordingService_get_IsRecording_m6B36789EE3D2F8DDAEE0E13FF83A9BE7BAE74FAE_inline(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		// unlimitedRecordingStartTime = Time.time;
		float L_1;
		L_1 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  L_2;
		memset((&L_2), 0, sizeof(L_2));
		Nullable_1__ctor_m32EB6B5DB3EA9B62B49C29C367AFAD991AC2A53A((&L_2), L_1, /*hidden argument*/Nullable_1__ctor_m32EB6B5DB3EA9B62B49C29C367AFAD991AC2A53A_RuntimeMethod_var);
		__this->set_unlimitedRecordingStartTime_23(L_2);
		// }
		return;
	}

IL_0019:
	{
		// unlimitedRecordingStartTime = null;
		Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A * L_3 = __this->get_address_of_unlimitedRecordingStartTime_23();
		il2cpp_codegen_initobj(L_3, sizeof(Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A ));
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputRecordingService::RecordKeyframe()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputRecordingService_RecordKeyframe_mF7DFA21FF0E2391F49CB0574A7231AAA304221D0 (InputRecordingService_tA847B98505BE7064D6751CD73492550FE4A2338B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityEyeGazeProvider_tA854FE94B4C220F8742E193148C51A8C30744627_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99  V_1;
	memset((&V_1), 0, sizeof(V_1));
	MixedRealityInputRecordingProfile_t56C7B027300F96474C48A61DF0A7EFAA8E41EA91 * G_B2_0 = NULL;
	MixedRealityInputRecordingProfile_t56C7B027300F96474C48A61DF0A7EFAA8E41EA91 * G_B1_0 = NULL;
	MixedRealityInputRecordingProfile_t56C7B027300F96474C48A61DF0A7EFAA8E41EA91 * G_B5_0 = NULL;
	MixedRealityInputRecordingProfile_t56C7B027300F96474C48A61DF0A7EFAA8E41EA91 * G_B3_0 = NULL;
	MixedRealityInputRecordingProfile_t56C7B027300F96474C48A61DF0A7EFAA8E41EA91 * G_B4_0 = NULL;
	MixedRealityInputRecordingProfile_t56C7B027300F96474C48A61DF0A7EFAA8E41EA91 * G_B6_0 = NULL;
	{
		// float time = Time.time;
		float L_0;
		L_0 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		V_0 = L_0;
		// var profile = InputRecordingProfile;
		MixedRealityInputRecordingProfile_t56C7B027300F96474C48A61DF0A7EFAA8E41EA91 * L_1;
		L_1 = InputRecordingService_get_InputRecordingProfile_m1F8BE909EBD3849421D2F6C76FCA44E932D9793E(__this, /*hidden argument*/NULL);
		// recordingBuffer.NewKeyframe(time);
		InputRecordingBuffer_tA6CEDA373266AD73D32A749E89D2D87FD6635E4F * L_2 = __this->get_recordingBuffer_28();
		float L_3 = V_0;
		NullCheck(L_2);
		int32_t L_4;
		L_4 = InputRecordingBuffer_NewKeyframe_mFE7FC5772D9967EAB88AA5B762F2A5713CA25219(L_2, L_3, /*hidden argument*/NULL);
		// if (profile.RecordHandData)
		MixedRealityInputRecordingProfile_t56C7B027300F96474C48A61DF0A7EFAA8E41EA91 * L_5 = L_1;
		NullCheck(L_5);
		bool L_6;
		L_6 = MixedRealityInputRecordingProfile_get_RecordHandData_mFD612DB88512A750FF0D12D05DA06E423EB1E384_inline(L_5, /*hidden argument*/NULL);
		G_B1_0 = L_5;
		if (!L_6)
		{
			G_B2_0 = L_5;
			goto IL_002f;
		}
	}
	{
		// RecordInputHandData(Handedness.Left);
		InputRecordingService_RecordInputHandData_m60C0342FE4B72342F156F7FF2D318F2D81A6178E(__this, 1, /*hidden argument*/NULL);
		// RecordInputHandData(Handedness.Right);
		InputRecordingService_RecordInputHandData_m60C0342FE4B72342F156F7FF2D318F2D81A6178E(__this, 2, /*hidden argument*/NULL);
		G_B2_0 = G_B1_0;
	}

IL_002f:
	{
		// if (profile.RecordCameraPose && CameraCache.Main)
		MixedRealityInputRecordingProfile_t56C7B027300F96474C48A61DF0A7EFAA8E41EA91 * L_7 = G_B2_0;
		NullCheck(L_7);
		bool L_8;
		L_8 = MixedRealityInputRecordingProfile_get_RecordCameraPose_m7BA79D3B22E44E686AA955C56072F7A6716FED72_inline(L_7, /*hidden argument*/NULL);
		G_B3_0 = L_7;
		if (!L_8)
		{
			G_B5_0 = L_7;
			goto IL_0076;
		}
	}
	{
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_9;
		L_9 = CameraCache_get_Main_m197C7A2C9D2EAE6AD083908F4CBC07262BDB75E7(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_9, /*hidden argument*/NULL);
		G_B4_0 = G_B3_0;
		if (!L_10)
		{
			G_B5_0 = G_B3_0;
			goto IL_0076;
		}
	}
	{
		// cameraPose = new MixedRealityPose(CameraCache.Main.transform.position, CameraCache.Main.transform.rotation);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_11;
		L_11 = CameraCache_get_Main_m197C7A2C9D2EAE6AD083908F4CBC07262BDB75E7(/*hidden argument*/NULL);
		NullCheck(L_11);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12;
		L_12 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_11, /*hidden argument*/NULL);
		NullCheck(L_12);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		L_13 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_12, /*hidden argument*/NULL);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_14;
		L_14 = CameraCache_get_Main_m197C7A2C9D2EAE6AD083908F4CBC07262BDB75E7(/*hidden argument*/NULL);
		NullCheck(L_14);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_15;
		L_15 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_14, /*hidden argument*/NULL);
		NullCheck(L_15);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_16;
		L_16 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_15, /*hidden argument*/NULL);
		MixedRealityPose__ctor_m0722BE081AA8822BC7EE321C14172F2D9B0B2A9D((MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99 *)(&V_1), L_13, L_16, /*hidden argument*/NULL);
		// recordingBuffer.SetCameraPose(cameraPose);
		InputRecordingBuffer_tA6CEDA373266AD73D32A749E89D2D87FD6635E4F * L_17 = __this->get_recordingBuffer_28();
		MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99  L_18 = V_1;
		NullCheck(L_17);
		InputRecordingBuffer_SetCameraPose_mFCB55F38E6817458876440816F17CC3C1EB4D6AB(L_17, L_18, /*hidden argument*/NULL);
		// }
		G_B6_0 = G_B4_0;
		goto IL_0087;
	}

IL_0076:
	{
		// cameraPose = new MixedRealityPose(Vector3.zero, Quaternion.identity);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19;
		L_19 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_20;
		L_20 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		MixedRealityPose__ctor_m0722BE081AA8822BC7EE321C14172F2D9B0B2A9D((MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99 *)(&V_1), L_19, L_20, /*hidden argument*/NULL);
		G_B6_0 = G_B5_0;
	}

IL_0087:
	{
		// if (profile.RecordEyeGaze)
		NullCheck(G_B6_0);
		bool L_21;
		L_21 = MixedRealityInputRecordingProfile_get_RecordEyeGaze_m9DA2CB6AF1179E5AA1A466E15292817DF3F61B54_inline(G_B6_0, /*hidden argument*/NULL);
		if (!L_21)
		{
			goto IL_00cb;
		}
	}
	{
		// if (eyeGazeProvider != null)
		RuntimeObject* L_22 = __this->get_eyeGazeProvider_29();
		if (!L_22)
		{
			goto IL_00ad;
		}
	}
	{
		// recordingBuffer.SetGazeRay(eyeGazeProvider.LatestEyeGaze);
		InputRecordingBuffer_tA6CEDA373266AD73D32A749E89D2D87FD6635E4F * L_23 = __this->get_recordingBuffer_28();
		RuntimeObject* L_24 = __this->get_eyeGazeProvider_29();
		NullCheck(L_24);
		Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  L_25;
		L_25 = InterfaceFuncInvoker0< Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  >::Invoke(3 /* UnityEngine.Ray Microsoft.MixedReality.Toolkit.Input.IMixedRealityEyeGazeProvider::get_LatestEyeGaze() */, IMixedRealityEyeGazeProvider_tA854FE94B4C220F8742E193148C51A8C30744627_il2cpp_TypeInfo_var, L_24);
		NullCheck(L_23);
		InputRecordingBuffer_SetGazeRay_m10272880F153255CC6DAE81925119175D764C3C3(L_23, L_25, /*hidden argument*/NULL);
		// }
		return;
	}

IL_00ad:
	{
		// recordingBuffer.SetGazeRay(new Ray(cameraPose.Position, cameraPose.Forward));
		InputRecordingBuffer_tA6CEDA373266AD73D32A749E89D2D87FD6635E4F * L_26 = __this->get_recordingBuffer_28();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_27;
		L_27 = MixedRealityPose_get_Position_m8DDC9CD0EA10D6CA2A4F1E20D5DBD1449E02CD86_inline((MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99 *)(&V_1), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_28;
		L_28 = MixedRealityPose_get_Forward_m7EC272D5FEAC115D9C28CE45CE6053D23E944312((MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99 *)(&V_1), /*hidden argument*/NULL);
		Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  L_29;
		memset((&L_29), 0, sizeof(L_29));
		Ray__ctor_m75B1F651FF47EE6B887105101B7DA61CBF41F83C((&L_29), L_27, L_28, /*hidden argument*/NULL);
		NullCheck(L_26);
		InputRecordingBuffer_SetGazeRay_m10272880F153255CC6DAE81925119175D764C3C3(L_26, L_29, /*hidden argument*/NULL);
	}

IL_00cb:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputRecordingService::RecordInputHandData(Microsoft.MixedReality.Toolkit.Utilities.Handedness)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputRecordingService_RecordInputHandData_m60C0342FE4B72342F156F7FF2D318F2D81A6178E (InputRecordingService_tA847B98505BE7064D6751CD73492550FE4A2338B * __this, uint8_t ___handedness0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityController_t5BA6263C4B870B16D3E72209A7E762A0DB89DE16_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityHand_tB96854B832897326062BFD0375B083FC175A47BB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputRecordingService_tA847B98505BE7064D6751CD73492550FE4A2338B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_GetValueOrDefault_mB4CE6E77EC85DD762FDA6C24F96EBC2A75E28546_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m9D7EBA0DE2F89A891507EC35157C70FC4DC81184_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	int32_t V_3 = 0;
	MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B * V_4 = NULL;
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  V_5;
	memset((&V_5), 0, sizeof(V_5));
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  V_6;
	memset((&V_6), 0, sizeof(V_6));
	int32_t V_7 = 0;
	MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99  V_8;
	memset((&V_8), 0, sizeof(V_8));
	MixedRealityInteractionMappingU5BU5D_tCD44540A965834E27292C207E9BB647B895CB2E7* G_B8_0 = NULL;
	int32_t G_B8_1 = 0;
	MixedRealityInteractionMappingU5BU5D_tCD44540A965834E27292C207E9BB647B895CB2E7* G_B7_0 = NULL;
	int32_t G_B7_1 = 0;
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  G_B9_0;
	memset((&G_B9_0), 0, sizeof(G_B9_0));
	int32_t G_B9_1 = 0;
	{
		// float time = Time.time;
		float L_0;
		L_0 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		// var profile = InputRecordingProfile;
		MixedRealityInputRecordingProfile_t56C7B027300F96474C48A61DF0A7EFAA8E41EA91 * L_1;
		L_1 = InputRecordingService_get_InputRecordingProfile_m1F8BE909EBD3849421D2F6C76FCA44E932D9793E(__this, /*hidden argument*/NULL);
		// var hand = HandJointUtils.FindHand(handedness);
		uint8_t L_2 = ___handedness0;
		RuntimeObject* L_3;
		L_3 = HandJointUtils_FindHand_mE1A9D02E563B18876CB972C0358A8C540FF6CF64(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		// if (hand == null)
		RuntimeObject* L_4 = V_0;
		if (L_4)
		{
			goto IL_0026;
		}
	}
	{
		// recordingBuffer.SetHandState(handedness, false, false);
		InputRecordingBuffer_tA6CEDA373266AD73D32A749E89D2D87FD6635E4F * L_5 = __this->get_recordingBuffer_28();
		uint8_t L_6 = ___handedness0;
		NullCheck(L_5);
		InputRecordingBuffer_SetHandState_m535C643CC8365C86B17E0F5851B9CEAB4145BCDB(L_5, L_6, (bool)0, (bool)0, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_0026:
	{
		// bool isTracked = (hand.TrackingState == TrackingState.Tracked);
		RuntimeObject* L_7 = V_0;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* Microsoft.MixedReality.Toolkit.TrackingState Microsoft.MixedReality.Toolkit.Input.IMixedRealityController::get_TrackingState() */, IMixedRealityController_t5BA6263C4B870B16D3E72209A7E762A0DB89DE16_il2cpp_TypeInfo_var, L_7);
		V_1 = (bool)((((int32_t)L_8) == ((int32_t)2))? 1 : 0);
		// bool isPinching = false;
		V_2 = (bool)0;
		// for (int i = 0; i < hand.Interactions?.Length; i++)
		V_3 = 0;
		goto IL_0057;
	}

IL_0036:
	{
		// var interaction = hand.Interactions[i];
		RuntimeObject* L_9 = V_0;
		NullCheck(L_9);
		MixedRealityInteractionMappingU5BU5D_tCD44540A965834E27292C207E9BB647B895CB2E7* L_10;
		L_10 = InterfaceFuncInvoker0< MixedRealityInteractionMappingU5BU5D_tCD44540A965834E27292C207E9BB647B895CB2E7* >::Invoke(9 /* Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[] Microsoft.MixedReality.Toolkit.Input.IMixedRealityController::get_Interactions() */, IMixedRealityController_t5BA6263C4B870B16D3E72209A7E762A0DB89DE16_il2cpp_TypeInfo_var, L_9);
		int32_t L_11 = V_3;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B * L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_4 = L_13;
		// switch (interaction.InputType)
		MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B * L_14 = V_4;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = MixedRealityInteractionMapping_get_InputType_mD4B8174B4A84E3A88D0056FA4550C7B8E9F37462_inline(L_14, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_15) == ((uint32_t)((int32_t)25)))))
		{
			goto IL_0053;
		}
	}
	{
		// isPinching = interaction.BoolData;
		MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B * L_16 = V_4;
		NullCheck(L_16);
		bool L_17;
		L_17 = MixedRealityInteractionMapping_get_BoolData_m5D39EBEE43023C9782742ECC3700D75CD8AF9875_inline(L_16, /*hidden argument*/NULL);
		V_2 = L_17;
	}

IL_0053:
	{
		// for (int i = 0; i < hand.Interactions?.Length; i++)
		int32_t L_18 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1));
	}

IL_0057:
	{
		// for (int i = 0; i < hand.Interactions?.Length; i++)
		int32_t L_19 = V_3;
		RuntimeObject* L_20 = V_0;
		NullCheck(L_20);
		MixedRealityInteractionMappingU5BU5D_tCD44540A965834E27292C207E9BB647B895CB2E7* L_21;
		L_21 = InterfaceFuncInvoker0< MixedRealityInteractionMappingU5BU5D_tCD44540A965834E27292C207E9BB647B895CB2E7* >::Invoke(9 /* Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[] Microsoft.MixedReality.Toolkit.Input.IMixedRealityController::get_Interactions() */, IMixedRealityController_t5BA6263C4B870B16D3E72209A7E762A0DB89DE16_il2cpp_TypeInfo_var, L_20);
		MixedRealityInteractionMappingU5BU5D_tCD44540A965834E27292C207E9BB647B895CB2E7* L_22 = L_21;
		G_B7_0 = L_22;
		G_B7_1 = L_19;
		if (L_22)
		{
			G_B8_0 = L_22;
			G_B8_1 = L_19;
			goto IL_006e;
		}
	}
	{
		il2cpp_codegen_initobj((&V_6), sizeof(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 ));
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_23 = V_6;
		G_B9_0 = L_23;
		G_B9_1 = G_B7_1;
		goto IL_0075;
	}

IL_006e:
	{
		NullCheck(G_B8_0);
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_24;
		memset((&L_24), 0, sizeof(L_24));
		Nullable_1__ctor_m9D7EBA0DE2F89A891507EC35157C70FC4DC81184((&L_24), ((int32_t)((int32_t)(((RuntimeArray*)G_B8_0)->max_length))), /*hidden argument*/Nullable_1__ctor_m9D7EBA0DE2F89A891507EC35157C70FC4DC81184_RuntimeMethod_var);
		G_B9_0 = L_24;
		G_B9_1 = G_B8_1;
	}

IL_0075:
	{
		V_5 = G_B9_0;
		int32_t L_25;
		L_25 = Nullable_1_GetValueOrDefault_mB4CE6E77EC85DD762FDA6C24F96EBC2A75E28546_inline((Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 *)(&V_5), /*hidden argument*/Nullable_1_GetValueOrDefault_mB4CE6E77EC85DD762FDA6C24F96EBC2A75E28546_RuntimeMethod_var);
		bool L_26;
		L_26 = Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_inline((Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 *)(&V_5), /*hidden argument*/Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_RuntimeMethod_var);
		if (((int32_t)((int32_t)((((int32_t)G_B9_1) < ((int32_t)L_25))? 1 : 0)&(int32_t)L_26)))
		{
			goto IL_0036;
		}
	}
	{
		// recordingBuffer.SetHandState(handedness, isTracked, isPinching);
		InputRecordingBuffer_tA6CEDA373266AD73D32A749E89D2D87FD6635E4F * L_27 = __this->get_recordingBuffer_28();
		uint8_t L_28 = ___handedness0;
		bool L_29 = V_1;
		bool L_30 = V_2;
		NullCheck(L_27);
		InputRecordingBuffer_SetHandState_m535C643CC8365C86B17E0F5851B9CEAB4145BCDB(L_27, L_28, L_29, L_30, /*hidden argument*/NULL);
		// if (isTracked)
		bool L_31 = V_1;
		if (!L_31)
		{
			goto IL_00cb;
		}
	}
	{
		// for (int i = 0; i < jointCount; ++i)
		V_7 = 0;
		goto IL_00c2;
	}

IL_00a0:
	{
		// if (hand.TryGetJoint((TrackedHandJoint)i, out MixedRealityPose jointPose))
		RuntimeObject* L_32 = V_0;
		int32_t L_33 = V_7;
		NullCheck(L_32);
		bool L_34;
		L_34 = InterfaceFuncInvoker2< bool, int32_t, MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99 * >::Invoke(0 /* System.Boolean Microsoft.MixedReality.Toolkit.Input.IMixedRealityHand::TryGetJoint(Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose&) */, IMixedRealityHand_tB96854B832897326062BFD0375B083FC175A47BB_il2cpp_TypeInfo_var, L_32, L_33, (MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99 *)(&V_8));
		if (!L_34)
		{
			goto IL_00bc;
		}
	}
	{
		// recordingBuffer.SetJointPose(handedness, (TrackedHandJoint)i, jointPose);
		InputRecordingBuffer_tA6CEDA373266AD73D32A749E89D2D87FD6635E4F * L_35 = __this->get_recordingBuffer_28();
		uint8_t L_36 = ___handedness0;
		int32_t L_37 = V_7;
		MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99  L_38 = V_8;
		NullCheck(L_35);
		InputRecordingBuffer_SetJointPose_m0F213AE56C8C8F8C6216E829C88B246F2D512DF2(L_35, L_36, L_37, L_38, /*hidden argument*/NULL);
	}

IL_00bc:
	{
		// for (int i = 0; i < jointCount; ++i)
		int32_t L_39 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_39, (int32_t)1));
	}

IL_00c2:
	{
		// for (int i = 0; i < jointCount; ++i)
		int32_t L_40 = V_7;
		IL2CPP_RUNTIME_CLASS_INIT(InputRecordingService_tA847B98505BE7064D6751CD73492550FE4A2338B_il2cpp_TypeInfo_var);
		int32_t L_41 = ((InputRecordingService_tA847B98505BE7064D6751CD73492550FE4A2338B_StaticFields*)il2cpp_codegen_static_fields_for(InputRecordingService_tA847B98505BE7064D6751CD73492550FE4A2338B_il2cpp_TypeInfo_var))->get_jointCount_17();
		if ((((int32_t)L_40) < ((int32_t)L_41)))
		{
			goto IL_00a0;
		}
	}

IL_00cb:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputRecordingService::PruneBuffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputRecordingService_PruneBuffer_mD56B955866241876DED757B6A097946CA1711935 (InputRecordingService_tA847B98505BE7064D6751CD73492550FE4A2338B * __this, const RuntimeMethod* method)
{
	{
		// recordingBuffer.RemoveBeforeTime(StartTime);
		InputRecordingBuffer_tA6CEDA373266AD73D32A749E89D2D87FD6635E4F * L_0 = __this->get_recordingBuffer_28();
		float L_1;
		L_1 = InputRecordingService_get_StartTime_mCF3448ECC51DF3103BAA6E93289F9C17A83E011D(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		InputRecordingBuffer_RemoveBeforeTime_m0C6E71F62E8B91462AA5552F4B1F2865C5BE450F(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputRecordingService::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputRecordingService__cctor_mE38BE59AB7C494B91517ECF6AE0C1F81C167A5ED (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputRecordingService_tA847B98505BE7064D6751CD73492550FE4A2338B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackedHandJoint_tFDADC49BA87BC6CBE390A69B0CC80925BAA37FD6_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly int jointCount = Enum.GetNames(typeof(TrackedHandJoint)).Length;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (TrackedHandJoint_tFDADC49BA87BC6CBE390A69B0CC80925BAA37FD6_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_2;
		L_2 = Enum_GetNames_m49110673091D017F43CF0F5F7AD9B7730306D2E8(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		((InputRecordingService_tA847B98505BE7064D6751CD73492550FE4A2338B_StaticFields*)il2cpp_codegen_static_fields_for(InputRecordingService_tA847B98505BE7064D6751CD73492550FE4A2338B_il2cpp_TypeInfo_var))->set_jointCount_17(((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))));
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
// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInputRecordingProfile::get_FrameRate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MixedRealityInputRecordingProfile_get_FrameRate_m073A10D133A0D9B9FB75E9E2EFFDCEAFB6D8A7D0 (MixedRealityInputRecordingProfile_t56C7B027300F96474C48A61DF0A7EFAA8E41EA91 * __this, const RuntimeMethod* method)
{
	{
		// public float FrameRate => frameRate;
		float L_0 = __this->get_frameRate_5();
		return L_0;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInputRecordingProfile::get_RecordHandData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MixedRealityInputRecordingProfile_get_RecordHandData_mFD612DB88512A750FF0D12D05DA06E423EB1E384 (MixedRealityInputRecordingProfile_t56C7B027300F96474C48A61DF0A7EFAA8E41EA91 * __this, const RuntimeMethod* method)
{
	{
		// public bool RecordHandData => recordHandData;
		bool L_0 = __this->get_recordHandData_6();
		return L_0;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInputRecordingProfile::get_JointPositionThreshold()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MixedRealityInputRecordingProfile_get_JointPositionThreshold_m334C9FBDA90EEEDD15AE647E8F7E225A1194F396 (MixedRealityInputRecordingProfile_t56C7B027300F96474C48A61DF0A7EFAA8E41EA91 * __this, const RuntimeMethod* method)
{
	{
		// public float JointPositionThreshold => jointPositionThreshold;
		float L_0 = __this->get_jointPositionThreshold_7();
		return L_0;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInputRecordingProfile::get_JointRotationThreshold()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MixedRealityInputRecordingProfile_get_JointRotationThreshold_mB2AE3496B2BBB868F22645E466074C313DDBEA9B (MixedRealityInputRecordingProfile_t56C7B027300F96474C48A61DF0A7EFAA8E41EA91 * __this, const RuntimeMethod* method)
{
	{
		// public float JointRotationThreshold => jointRotationThreshold;
		float L_0 = __this->get_jointRotationThreshold_8();
		return L_0;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInputRecordingProfile::get_RecordCameraPose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MixedRealityInputRecordingProfile_get_RecordCameraPose_m7BA79D3B22E44E686AA955C56072F7A6716FED72 (MixedRealityInputRecordingProfile_t56C7B027300F96474C48A61DF0A7EFAA8E41EA91 * __this, const RuntimeMethod* method)
{
	{
		// public bool RecordCameraPose => recordCameraPose;
		bool L_0 = __this->get_recordCameraPose_9();
		return L_0;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInputRecordingProfile::get_CameraPositionThreshold()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MixedRealityInputRecordingProfile_get_CameraPositionThreshold_m8240A9C1827186F6D194747E3D77D9C24C7BC41E (MixedRealityInputRecordingProfile_t56C7B027300F96474C48A61DF0A7EFAA8E41EA91 * __this, const RuntimeMethod* method)
{
	{
		// public float CameraPositionThreshold => cameraPositionThreshold;
		float L_0 = __this->get_cameraPositionThreshold_10();
		return L_0;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInputRecordingProfile::get_CameraRotationThreshold()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MixedRealityInputRecordingProfile_get_CameraRotationThreshold_mE91B9970882A9B83EB05E637C36A1D3F1361F6A9 (MixedRealityInputRecordingProfile_t56C7B027300F96474C48A61DF0A7EFAA8E41EA91 * __this, const RuntimeMethod* method)
{
	{
		// public float CameraRotationThreshold => cameraRotationThreshold;
		float L_0 = __this->get_cameraRotationThreshold_11();
		return L_0;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInputRecordingProfile::get_RecordEyeGaze()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MixedRealityInputRecordingProfile_get_RecordEyeGaze_m9DA2CB6AF1179E5AA1A466E15292817DF3F61B54 (MixedRealityInputRecordingProfile_t56C7B027300F96474C48A61DF0A7EFAA8E41EA91 * __this, const RuntimeMethod* method)
{
	{
		// public bool RecordEyeGaze => recordEyeGaze;
		bool L_0 = __this->get_recordEyeGaze_12();
		return L_0;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInputRecordingProfile::get_EyeGazeOriginThreshold()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MixedRealityInputRecordingProfile_get_EyeGazeOriginThreshold_mB233A67A96A3F58D3A1CD6448A28B89C4E978589 (MixedRealityInputRecordingProfile_t56C7B027300F96474C48A61DF0A7EFAA8E41EA91 * __this, const RuntimeMethod* method)
{
	{
		// public float EyeGazeOriginThreshold => eyeGazeOriginThreshold;
		float L_0 = __this->get_eyeGazeOriginThreshold_13();
		return L_0;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInputRecordingProfile::get_EyeGazeDirectionThreshold()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MixedRealityInputRecordingProfile_get_EyeGazeDirectionThreshold_m817BE12ABBB0A219E23004B30D773761BD3062FD (MixedRealityInputRecordingProfile_t56C7B027300F96474C48A61DF0A7EFAA8E41EA91 * __this, const RuntimeMethod* method)
{
	{
		// public float EyeGazeDirectionThreshold => eyeGazeDirectionThreshold;
		float L_0 = __this->get_eyeGazeDirectionThreshold_14();
		return L_0;
	}
}
// System.Int32 Microsoft.MixedReality.Toolkit.Input.MixedRealityInputRecordingProfile::get_PartitionSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MixedRealityInputRecordingProfile_get_PartitionSize_mCFA857FFB0CBE37678EF751667040AEB1E84329D (MixedRealityInputRecordingProfile_t56C7B027300F96474C48A61DF0A7EFAA8E41EA91 * __this, const RuntimeMethod* method)
{
	{
		// public int PartitionSize => partitionSize;
		int32_t L_0 = __this->get_partitionSize_15();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputRecordingProfile::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityInputRecordingProfile__ctor_mA556B947E9D58537C70FEC8A4989C15899B17521 (MixedRealityInputRecordingProfile_t56C7B027300F96474C48A61DF0A7EFAA8E41EA91 * __this, const RuntimeMethod* method)
{
	{
		// private float frameRate = 60f;
		__this->set_frameRate_5((60.0f));
		// private bool recordHandData = true;
		__this->set_recordHandData_6((bool)1);
		// private float jointPositionThreshold = 0.001f;
		__this->set_jointPositionThreshold_7((0.00100000005f));
		// private float jointRotationThreshold = 0.2f;
		__this->set_jointRotationThreshold_8((0.200000003f));
		// private bool recordCameraPose = true;
		__this->set_recordCameraPose_9((bool)1);
		// private float cameraPositionThreshold = 0.002f;
		__this->set_cameraPositionThreshold_10((0.00200000009f));
		// private float cameraRotationThreshold = 0.2f;
		__this->set_cameraRotationThreshold_11((0.200000003f));
		// private bool recordEyeGaze = true;
		__this->set_recordEyeGaze_12((bool)1);
		// private float eyeGazeOriginThreshold = 0.002f;
		__this->set_eyeGazeOriginThreshold_13((0.00200000009f));
		// private float eyeGazeDirectionThreshold = 0.2f;
		__this->set_eyeGazeDirectionThreshold_14((0.200000003f));
		// private int partitionSize = 32;
		__this->set_partitionSize_15(((int32_t)32));
		BaseMixedRealityProfile__ctor_mABE9ABA5C514E086D617682809ED5CA84B6C72DC(__this, /*hidden argument*/NULL);
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
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation/<>c__DisplayClass50_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass50_0__ctor_m9307C8A0B30C2B5E1A67C53BD73644B43E85EEDE (U3CU3Ec__DisplayClass50_0_t08F1F4C926CDEC2D77202D77B7C64F0B4D3B20B5 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Input.InputAnimation Microsoft.MixedReality.Toolkit.Input.InputAnimation/<>c__DisplayClass50_0::<FromStreamAsync>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534 * U3CU3Ec__DisplayClass50_0_U3CFromStreamAsyncU3Eb__0_mCA8652CFD02F2DEAC4C03D654D917F7BD8FB898D (U3CU3Ec__DisplayClass50_0_t08F1F4C926CDEC2D77202D77B7C64F0B4D3B20B5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var result = await Task.Run(() => FromStream(stream));
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_0 = __this->get_stream_0();
		IL2CPP_RUNTIME_CLASS_INIT(InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534_il2cpp_TypeInfo_var);
		InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534 * L_1;
		L_1 = InputAnimation_FromStream_m4FDB4487C81F5EF397057832DC89C04A0A962CCC(L_0, /*hidden argument*/NULL);
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
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation/<FromStreamAsync>d__50::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFromStreamAsyncU3Ed__50_MoveNext_m9CEBD203C4A893138FAE7CE745BE8D8FBEC6AFAC (U3CFromStreamAsyncU3Ed__50_t0BAABAB4A343E3F573925043CD5CA6AE4597B105 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tF2BE961DAB576F8235B3EAB1BEE2B129DBB64946_TisU3CFromStreamAsyncU3Ed__50_t0BAABAB4A343E3F573925043CD5CA6AE4597B105_m58493BDEF4A6C3F4B4F122B6CF9D508148FD8439_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetResult_m4DBC215CEA1BEB17872ECEF25586C634F1CC2B1F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1__ctor_mAA1A3929916574EE561C7F2CDE37EC73B53254AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_tB0603EAA5A40D7E49AB43A40191F152B2BABFE2D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_m19BF9AC201BF1F535D3E2D2912CDAE39A91AA335_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_m9711AC9172AB7AD4384188CB1A852A50279D976C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_m5E744BD98B186A9A56DBF2A7680F2FBABE1DF413_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_Run_TisInputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534_m99D2DCD3A6DAD2C11427B66A4B48AE3079782374_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass50_0_U3CFromStreamAsyncU3Eb__0_mCA8652CFD02F2DEAC4C03D654D917F7BD8FB898D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass50_0_t08F1F4C926CDEC2D77202D77B7C64F0B4D3B20B5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534 * V_1 = NULL;
	TaskAwaiter_1_tF2BE961DAB576F8235B3EAB1BEE2B129DBB64946  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t * V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B7_0 = NULL;
	InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534 * G_B7_1 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B6_0 = NULL;
	InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534 * G_B6_1 = NULL;
	InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534 * G_B8_0 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_005a;
			}
		}

IL_000a:
		{
			U3CU3Ec__DisplayClass50_0_t08F1F4C926CDEC2D77202D77B7C64F0B4D3B20B5 * L_2 = (U3CU3Ec__DisplayClass50_0_t08F1F4C926CDEC2D77202D77B7C64F0B4D3B20B5 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass50_0_t08F1F4C926CDEC2D77202D77B7C64F0B4D3B20B5_il2cpp_TypeInfo_var);
			U3CU3Ec__DisplayClass50_0__ctor_m9307C8A0B30C2B5E1A67C53BD73644B43E85EEDE(L_2, /*hidden argument*/NULL);
			U3CU3Ec__DisplayClass50_0_t08F1F4C926CDEC2D77202D77B7C64F0B4D3B20B5 * L_3 = L_2;
			Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_4 = __this->get_stream_2();
			NullCheck(L_3);
			L_3->set_stream_0(L_4);
			// var result = await Task.Run(() => FromStream(stream));
			Func_1_tB0603EAA5A40D7E49AB43A40191F152B2BABFE2D * L_5 = (Func_1_tB0603EAA5A40D7E49AB43A40191F152B2BABFE2D *)il2cpp_codegen_object_new(Func_1_tB0603EAA5A40D7E49AB43A40191F152B2BABFE2D_il2cpp_TypeInfo_var);
			Func_1__ctor_mAA1A3929916574EE561C7F2CDE37EC73B53254AE(L_5, L_3, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass50_0_U3CFromStreamAsyncU3Eb__0_mCA8652CFD02F2DEAC4C03D654D917F7BD8FB898D_RuntimeMethod_var), /*hidden argument*/Func_1__ctor_mAA1A3929916574EE561C7F2CDE37EC73B53254AE_RuntimeMethod_var);
			IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
			Task_1_tB231B84F8F2E5D004D7EE56C7AC413E80914BC74 * L_6;
			L_6 = Task_Run_TisInputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534_m99D2DCD3A6DAD2C11427B66A4B48AE3079782374(L_5, /*hidden argument*/Task_Run_TisInputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534_m99D2DCD3A6DAD2C11427B66A4B48AE3079782374_RuntimeMethod_var);
			NullCheck(L_6);
			TaskAwaiter_1_tF2BE961DAB576F8235B3EAB1BEE2B129DBB64946  L_7;
			L_7 = Task_1_GetAwaiter_m5E744BD98B186A9A56DBF2A7680F2FBABE1DF413(L_6, /*hidden argument*/Task_1_GetAwaiter_m5E744BD98B186A9A56DBF2A7680F2FBABE1DF413_RuntimeMethod_var);
			V_2 = L_7;
			bool L_8;
			L_8 = TaskAwaiter_1_get_IsCompleted_m9711AC9172AB7AD4384188CB1A852A50279D976C((TaskAwaiter_1_tF2BE961DAB576F8235B3EAB1BEE2B129DBB64946 *)(&V_2), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_m9711AC9172AB7AD4384188CB1A852A50279D976C_RuntimeMethod_var);
			if (L_8)
			{
				goto IL_0076;
			}
		}

IL_003a:
		{
			int32_t L_9 = 0;
			V_0 = L_9;
			__this->set_U3CU3E1__state_0(L_9);
			TaskAwaiter_1_tF2BE961DAB576F8235B3EAB1BEE2B129DBB64946  L_10 = V_2;
			__this->set_U3CU3Eu__1_4(L_10);
			AsyncTaskMethodBuilder_1_tF3202EB14A45BB67CE82B3124E365B8DEFF9BF80 * L_11 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tF2BE961DAB576F8235B3EAB1BEE2B129DBB64946_TisU3CFromStreamAsyncU3Ed__50_t0BAABAB4A343E3F573925043CD5CA6AE4597B105_m58493BDEF4A6C3F4B4F122B6CF9D508148FD8439((AsyncTaskMethodBuilder_1_tF3202EB14A45BB67CE82B3124E365B8DEFF9BF80 *)L_11, (TaskAwaiter_1_tF2BE961DAB576F8235B3EAB1BEE2B129DBB64946 *)(&V_2), (U3CFromStreamAsyncU3Ed__50_t0BAABAB4A343E3F573925043CD5CA6AE4597B105 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tF2BE961DAB576F8235B3EAB1BEE2B129DBB64946_TisU3CFromStreamAsyncU3Ed__50_t0BAABAB4A343E3F573925043CD5CA6AE4597B105_m58493BDEF4A6C3F4B4F122B6CF9D508148FD8439_RuntimeMethod_var);
			goto IL_00bc;
		}

IL_005a:
		{
			TaskAwaiter_1_tF2BE961DAB576F8235B3EAB1BEE2B129DBB64946  L_12 = __this->get_U3CU3Eu__1_4();
			V_2 = L_12;
			TaskAwaiter_1_tF2BE961DAB576F8235B3EAB1BEE2B129DBB64946 * L_13 = __this->get_address_of_U3CU3Eu__1_4();
			il2cpp_codegen_initobj(L_13, sizeof(TaskAwaiter_1_tF2BE961DAB576F8235B3EAB1BEE2B129DBB64946 ));
			int32_t L_14 = (-1);
			V_0 = L_14;
			__this->set_U3CU3E1__state_0(L_14);
		}

IL_0076:
		{
			InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534 * L_15;
			L_15 = TaskAwaiter_1_GetResult_m19BF9AC201BF1F535D3E2D2912CDAE39A91AA335((TaskAwaiter_1_tF2BE961DAB576F8235B3EAB1BEE2B129DBB64946 *)(&V_2), /*hidden argument*/TaskAwaiter_1_GetResult_m19BF9AC201BF1F535D3E2D2912CDAE39A91AA335_RuntimeMethod_var);
			// callback?.Invoke();
			Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_16 = __this->get_callback_3();
			Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_17 = L_16;
			G_B6_0 = L_17;
			G_B6_1 = L_15;
			if (L_17)
			{
				G_B7_0 = L_17;
				G_B7_1 = L_15;
				goto IL_0089;
			}
		}

IL_0086:
		{
			G_B8_0 = G_B6_1;
			goto IL_008e;
		}

IL_0089:
		{
			NullCheck(G_B7_0);
			Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(G_B7_0, /*hidden argument*/NULL);
			G_B8_0 = G_B7_1;
		}

IL_008e:
		{
			// return result;
			V_1 = G_B8_0;
			goto IL_00a8;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0091;
		}
		throw e;
	}

CATCH_0091:
	{ // begin catch(System.Exception)
		V_3 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_1_tF3202EB14A45BB67CE82B3124E365B8DEFF9BF80 * L_18 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_19 = V_3;
		AsyncTaskMethodBuilder_1_SetException_m3483106EB75F67C47745F99FE942FB5DED5C8CBC((AsyncTaskMethodBuilder_1_tF3202EB14A45BB67CE82B3124E365B8DEFF9BF80 *)L_18, L_19, /*hidden argument*/((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_SetException_m3483106EB75F67C47745F99FE942FB5DED5C8CBC_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00bc;
	} // end catch (depth: 1)

IL_00a8:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_1_tF3202EB14A45BB67CE82B3124E365B8DEFF9BF80 * L_20 = __this->get_address_of_U3CU3Et__builder_1();
		InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534 * L_21 = V_1;
		AsyncTaskMethodBuilder_1_SetResult_m4DBC215CEA1BEB17872ECEF25586C634F1CC2B1F((AsyncTaskMethodBuilder_1_tF3202EB14A45BB67CE82B3124E365B8DEFF9BF80 *)L_20, L_21, /*hidden argument*/AsyncTaskMethodBuilder_1_SetResult_m4DBC215CEA1BEB17872ECEF25586C634F1CC2B1F_RuntimeMethod_var);
	}

IL_00bc:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CFromStreamAsyncU3Ed__50_MoveNext_m9CEBD203C4A893138FAE7CE745BE8D8FBEC6AFAC_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CFromStreamAsyncU3Ed__50_t0BAABAB4A343E3F573925043CD5CA6AE4597B105 * _thisAdjusted = reinterpret_cast<U3CFromStreamAsyncU3Ed__50_t0BAABAB4A343E3F573925043CD5CA6AE4597B105 *>(__this + _offset);
	U3CFromStreamAsyncU3Ed__50_MoveNext_m9CEBD203C4A893138FAE7CE745BE8D8FBEC6AFAC(_thisAdjusted, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation/<FromStreamAsync>d__50::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFromStreamAsyncU3Ed__50_SetStateMachine_mE24194826612C172D23BF3DEFB86A5CD2AAEC164 (U3CFromStreamAsyncU3Ed__50_t0BAABAB4A343E3F573925043CD5CA6AE4597B105 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetStateMachine_m33CD0EF551559886D61544398F8BBB9D271B711D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_tF3202EB14A45BB67CE82B3124E365B8DEFF9BF80 * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_1_SetStateMachine_m33CD0EF551559886D61544398F8BBB9D271B711D((AsyncTaskMethodBuilder_1_tF3202EB14A45BB67CE82B3124E365B8DEFF9BF80 *)L_0, L_1, /*hidden argument*/AsyncTaskMethodBuilder_1_SetStateMachine_m33CD0EF551559886D61544398F8BBB9D271B711D_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CFromStreamAsyncU3Ed__50_SetStateMachine_mE24194826612C172D23BF3DEFB86A5CD2AAEC164_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CFromStreamAsyncU3Ed__50_t0BAABAB4A343E3F573925043CD5CA6AE4597B105 * _thisAdjusted = reinterpret_cast<U3CFromStreamAsyncU3Ed__50_t0BAABAB4A343E3F573925043CD5CA6AE4597B105 *>(__this + _offset);
	U3CFromStreamAsyncU3Ed__50_SetStateMachine_mE24194826612C172D23BF3DEFB86A5CD2AAEC164(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation/<GetAllAnimationCurves>d__60::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetAllAnimationCurvesU3Ed__60__ctor_m07DDAD234100D6B55213BB5CE9BD361D0501BF22 (U3CGetAllAnimationCurvesU3Ed__60_tABFAAE907711737282276C10EB4C546A49E1D0C4 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		int32_t L_1;
		L_1 = Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D(/*hidden argument*/NULL);
		__this->set_U3CU3El__initialThreadId_2(L_1);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation/<GetAllAnimationCurves>d__60::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetAllAnimationCurvesU3Ed__60_System_IDisposable_Dispose_m18BBD68682EC79BEB1FA11DC041B0DD2B2F24459 (U3CGetAllAnimationCurvesU3Ed__60_tABFAAE907711737282276C10EB4C546A49E1D0C4 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)((int32_t)-4))))
		{
			case 0:
			{
				goto IL_0077;
			}
			case 1:
			{
				goto IL_006d;
			}
			case 2:
			{
				goto IL_0081;
			}
			case 3:
			{
				goto IL_0081;
			}
			case 4:
			{
				goto IL_0081;
			}
			case 5:
			{
				goto IL_0081;
			}
			case 6:
			{
				goto IL_0081;
			}
			case 7:
			{
				goto IL_0081;
			}
			case 8:
			{
				goto IL_0081;
			}
			case 9:
			{
				goto IL_006d;
			}
			case 10:
			{
				goto IL_006d;
			}
			case 11:
			{
				goto IL_006d;
			}
			case 12:
			{
				goto IL_006d;
			}
			case 13:
			{
				goto IL_006d;
			}
			case 14:
			{
				goto IL_006d;
			}
			case 15:
			{
				goto IL_006d;
			}
			case 16:
			{
				goto IL_0077;
			}
			case 17:
			{
				goto IL_0077;
			}
			case 18:
			{
				goto IL_0077;
			}
			case 19:
			{
				goto IL_0077;
			}
			case 20:
			{
				goto IL_0077;
			}
			case 21:
			{
				goto IL_0077;
			}
			case 22:
			{
				goto IL_0077;
			}
		}
	}
	{
		return;
	}

IL_006d:
	{
	}

IL_006e:
	try
	{ // begin try (depth: 1)
		IL2CPP_LEAVE(0x81, FINALLY_0070);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0070;
	}

FINALLY_0070:
	{ // begin finally (depth: 1)
		U3CGetAllAnimationCurvesU3Ed__60_U3CU3Em__Finally1_m1FEDD9A8B4391A5E98297F17B023BAA189753D7F(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(112)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(112)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x81, IL_0081)
	}

IL_0077:
	{
	}

IL_0078:
	try
	{ // begin try (depth: 1)
		IL2CPP_LEAVE(0x81, FINALLY_007a);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_007a;
	}

FINALLY_007a:
	{ // begin finally (depth: 1)
		U3CGetAllAnimationCurvesU3Ed__60_U3CU3Em__Finally2_mF86439DFD02659E5DFF5A2B7A760DFD8F76601D2(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(122)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(122)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x81, IL_0081)
	}

IL_0081:
	{
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Input.InputAnimation/<GetAllAnimationCurves>d__60::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGetAllAnimationCurvesU3Ed__60_MoveNext_m13D8ECD3889823AE7982F3E67D54BC4FAF5B552A (U3CGetAllAnimationCurvesU3Ed__60_tABFAAE907711737282276C10EB4C546A49E1D0C4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Values_m96235BF869B2ECF2B290BDD4F6D7B022FFF0A12D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m578FD92B67B741D322B93809002331AF35670FF0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mFB5CC68B705B48844631C1360EF6CB6ED7199C3F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueCollection_GetEnumerator_m7C12538788587A8F4DA13E1467AA2C2E38C1066C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534 * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 33> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_0 = __this->get_U3CU3E1__state_0();
			V_1 = L_0;
			InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534 * L_1 = __this->get_U3CU3E4__this_3();
			V_2 = L_1;
			int32_t L_2 = V_1;
			switch (L_2)
			{
				case 0:
				{
					goto IL_009b;
				}
				case 1:
				{
					goto IL_00bc;
				}
				case 2:
				{
					goto IL_00dd;
				}
				case 3:
				{
					goto IL_00fe;
				}
				case 4:
				{
					goto IL_011f;
				}
				case 5:
				{
					goto IL_0179;
				}
				case 6:
				{
					goto IL_01a0;
				}
				case 7:
				{
					goto IL_01c7;
				}
				case 8:
				{
					goto IL_01ee;
				}
				case 9:
				{
					goto IL_0216;
				}
				case 10:
				{
					goto IL_023e;
				}
				case 11:
				{
					goto IL_0266;
				}
				case 12:
				{
					goto IL_02eb;
				}
				case 13:
				{
					goto IL_0313;
				}
				case 14:
				{
					goto IL_033b;
				}
				case 15:
				{
					goto IL_0363;
				}
				case 16:
				{
					goto IL_038b;
				}
				case 17:
				{
					goto IL_03b3;
				}
				case 18:
				{
					goto IL_03db;
				}
				case 19:
				{
					goto IL_042c;
				}
				case 20:
				{
					goto IL_0453;
				}
				case 21:
				{
					goto IL_047a;
				}
				case 22:
				{
					goto IL_04a1;
				}
				case 23:
				{
					goto IL_04c8;
				}
				case 24:
				{
					goto IL_04ef;
				}
				case 25:
				{
					goto IL_0516;
				}
				case 26:
				{
					goto IL_053d;
				}
				case 27:
				{
					goto IL_0564;
				}
				case 28:
				{
					goto IL_0588;
				}
				case 29:
				{
					goto IL_05ac;
				}
				case 30:
				{
					goto IL_05d0;
				}
				case 31:
				{
					goto IL_05f4;
				}
			}
		}

IL_0094:
		{
			V_0 = (bool)0;
			goto IL_0606;
		}

IL_009b:
		{
			__this->set_U3CU3E1__state_0((-1));
			// yield return handTrackedCurveLeft;
			InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534 * L_3 = V_2;
			NullCheck(L_3);
			AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_4 = L_3->get_handTrackedCurveLeft_2();
			__this->set_U3CU3E2__current_1(L_4);
			__this->set_U3CU3E1__state_0(1);
			V_0 = (bool)1;
			goto IL_0606;
		}

IL_00bc:
		{
			__this->set_U3CU3E1__state_0((-1));
			// yield return handTrackedCurveRight;
			InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534 * L_5 = V_2;
			NullCheck(L_5);
			AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_6 = L_5->get_handTrackedCurveRight_3();
			__this->set_U3CU3E2__current_1(L_6);
			__this->set_U3CU3E1__state_0(2);
			V_0 = (bool)1;
			goto IL_0606;
		}

IL_00dd:
		{
			__this->set_U3CU3E1__state_0((-1));
			// yield return handPinchCurveLeft;
			InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534 * L_7 = V_2;
			NullCheck(L_7);
			AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_8 = L_7->get_handPinchCurveLeft_4();
			__this->set_U3CU3E2__current_1(L_8);
			__this->set_U3CU3E1__state_0(3);
			V_0 = (bool)1;
			goto IL_0606;
		}

IL_00fe:
		{
			__this->set_U3CU3E1__state_0((-1));
			// yield return handPinchCurveRight;
			InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534 * L_9 = V_2;
			NullCheck(L_9);
			AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_10 = L_9->get_handPinchCurveRight_5();
			__this->set_U3CU3E2__current_1(L_10);
			__this->set_U3CU3E1__state_0(4);
			V_0 = (bool)1;
			goto IL_0606;
		}

IL_011f:
		{
			__this->set_U3CU3E1__state_0((-1));
			// foreach (var curves in handJointCurvesLeft.Values)
			InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534 * L_11 = V_2;
			NullCheck(L_11);
			Dictionary_2_tF3976454D4ACA03F9E231469CB7AA87B3D4745B0 * L_12 = L_11->get_handJointCurvesLeft_6();
			NullCheck(L_12);
			ValueCollection_tD80A9007D68EC421B749FEFB42D345EAA73519FE * L_13;
			L_13 = Dictionary_2_get_Values_m96235BF869B2ECF2B290BDD4F6D7B022FFF0A12D(L_12, /*hidden argument*/Dictionary_2_get_Values_m96235BF869B2ECF2B290BDD4F6D7B022FFF0A12D_RuntimeMethod_var);
			NullCheck(L_13);
			Enumerator_t6359D50CF0EE93ACDDC59D9FCAE8F0DD31D8DE50  L_14;
			L_14 = ValueCollection_GetEnumerator_m7C12538788587A8F4DA13E1467AA2C2E38C1066C(L_13, /*hidden argument*/ValueCollection_GetEnumerator_m7C12538788587A8F4DA13E1467AA2C2E38C1066C_RuntimeMethod_var);
			__this->set_U3CU3E7__wrap1_4(L_14);
			__this->set_U3CU3E1__state_0(((int32_t)-3));
			goto IL_0275;
		}

IL_0149:
		{
			// foreach (var curves in handJointCurvesLeft.Values)
			Enumerator_t6359D50CF0EE93ACDDC59D9FCAE8F0DD31D8DE50 * L_15 = __this->get_address_of_U3CU3E7__wrap1_4();
			PoseCurves_t14269C65E2E6B6A532EF4AC78324976DF2587501 * L_16;
			L_16 = Enumerator_get_Current_mFB5CC68B705B48844631C1360EF6CB6ED7199C3F_inline((Enumerator_t6359D50CF0EE93ACDDC59D9FCAE8F0DD31D8DE50 *)L_15, /*hidden argument*/Enumerator_get_Current_mFB5CC68B705B48844631C1360EF6CB6ED7199C3F_RuntimeMethod_var);
			__this->set_U3CcurvesU3E5__3_5(L_16);
			// yield return curves.PositionX;
			PoseCurves_t14269C65E2E6B6A532EF4AC78324976DF2587501 * L_17 = __this->get_U3CcurvesU3E5__3_5();
			NullCheck(L_17);
			AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_18 = L_17->get_PositionX_0();
			__this->set_U3CU3E2__current_1(L_18);
			__this->set_U3CU3E1__state_0(5);
			V_0 = (bool)1;
			goto IL_0606;
		}

IL_0179:
		{
			__this->set_U3CU3E1__state_0(((int32_t)-3));
			// yield return curves.PositionY;
			PoseCurves_t14269C65E2E6B6A532EF4AC78324976DF2587501 * L_19 = __this->get_U3CcurvesU3E5__3_5();
			NullCheck(L_19);
			AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_20 = L_19->get_PositionY_1();
			__this->set_U3CU3E2__current_1(L_20);
			__this->set_U3CU3E1__state_0(6);
			V_0 = (bool)1;
			goto IL_0606;
		}

IL_01a0:
		{
			__this->set_U3CU3E1__state_0(((int32_t)-3));
			// yield return curves.PositionZ;
			PoseCurves_t14269C65E2E6B6A532EF4AC78324976DF2587501 * L_21 = __this->get_U3CcurvesU3E5__3_5();
			NullCheck(L_21);
			AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_22 = L_21->get_PositionZ_2();
			__this->set_U3CU3E2__current_1(L_22);
			__this->set_U3CU3E1__state_0(7);
			V_0 = (bool)1;
			goto IL_0606;
		}

IL_01c7:
		{
			__this->set_U3CU3E1__state_0(((int32_t)-3));
			// yield return curves.RotationX;
			PoseCurves_t14269C65E2E6B6A532EF4AC78324976DF2587501 * L_23 = __this->get_U3CcurvesU3E5__3_5();
			NullCheck(L_23);
			AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_24 = L_23->get_RotationX_3();
			__this->set_U3CU3E2__current_1(L_24);
			__this->set_U3CU3E1__state_0(8);
			V_0 = (bool)1;
			goto IL_0606;
		}

IL_01ee:
		{
			__this->set_U3CU3E1__state_0(((int32_t)-3));
			// yield return curves.RotationY;
			PoseCurves_t14269C65E2E6B6A532EF4AC78324976DF2587501 * L_25 = __this->get_U3CcurvesU3E5__3_5();
			NullCheck(L_25);
			AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_26 = L_25->get_RotationY_4();
			__this->set_U3CU3E2__current_1(L_26);
			__this->set_U3CU3E1__state_0(((int32_t)9));
			V_0 = (bool)1;
			goto IL_0606;
		}

IL_0216:
		{
			__this->set_U3CU3E1__state_0(((int32_t)-3));
			// yield return curves.RotationZ;
			PoseCurves_t14269C65E2E6B6A532EF4AC78324976DF2587501 * L_27 = __this->get_U3CcurvesU3E5__3_5();
			NullCheck(L_27);
			AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_28 = L_27->get_RotationZ_5();
			__this->set_U3CU3E2__current_1(L_28);
			__this->set_U3CU3E1__state_0(((int32_t)10));
			V_0 = (bool)1;
			goto IL_0606;
		}

IL_023e:
		{
			__this->set_U3CU3E1__state_0(((int32_t)-3));
			// yield return curves.RotationW;
			PoseCurves_t14269C65E2E6B6A532EF4AC78324976DF2587501 * L_29 = __this->get_U3CcurvesU3E5__3_5();
			NullCheck(L_29);
			AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_30 = L_29->get_RotationW_6();
			__this->set_U3CU3E2__current_1(L_30);
			__this->set_U3CU3E1__state_0(((int32_t)11));
			V_0 = (bool)1;
			goto IL_0606;
		}

IL_0266:
		{
			__this->set_U3CU3E1__state_0(((int32_t)-3));
			// }
			__this->set_U3CcurvesU3E5__3_5((PoseCurves_t14269C65E2E6B6A532EF4AC78324976DF2587501 *)NULL);
		}

IL_0275:
		{
			// foreach (var curves in handJointCurvesLeft.Values)
			Enumerator_t6359D50CF0EE93ACDDC59D9FCAE8F0DD31D8DE50 * L_31 = __this->get_address_of_U3CU3E7__wrap1_4();
			bool L_32;
			L_32 = Enumerator_MoveNext_m578FD92B67B741D322B93809002331AF35670FF0((Enumerator_t6359D50CF0EE93ACDDC59D9FCAE8F0DD31D8DE50 *)L_31, /*hidden argument*/Enumerator_MoveNext_m578FD92B67B741D322B93809002331AF35670FF0_RuntimeMethod_var);
			if (L_32)
			{
				goto IL_0149;
			}
		}

IL_0285:
		{
			U3CGetAllAnimationCurvesU3Ed__60_U3CU3Em__Finally1_m1FEDD9A8B4391A5E98297F17B023BAA189753D7F(__this, /*hidden argument*/NULL);
			Enumerator_t6359D50CF0EE93ACDDC59D9FCAE8F0DD31D8DE50 * L_33 = __this->get_address_of_U3CU3E7__wrap1_4();
			il2cpp_codegen_initobj(L_33, sizeof(Enumerator_t6359D50CF0EE93ACDDC59D9FCAE8F0DD31D8DE50 ));
			// foreach (var curves in handJointCurvesRight.Values)
			InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534 * L_34 = V_2;
			NullCheck(L_34);
			Dictionary_2_tF3976454D4ACA03F9E231469CB7AA87B3D4745B0 * L_35 = L_34->get_handJointCurvesRight_7();
			NullCheck(L_35);
			ValueCollection_tD80A9007D68EC421B749FEFB42D345EAA73519FE * L_36;
			L_36 = Dictionary_2_get_Values_m96235BF869B2ECF2B290BDD4F6D7B022FFF0A12D(L_35, /*hidden argument*/Dictionary_2_get_Values_m96235BF869B2ECF2B290BDD4F6D7B022FFF0A12D_RuntimeMethod_var);
			NullCheck(L_36);
			Enumerator_t6359D50CF0EE93ACDDC59D9FCAE8F0DD31D8DE50  L_37;
			L_37 = ValueCollection_GetEnumerator_m7C12538788587A8F4DA13E1467AA2C2E38C1066C(L_36, /*hidden argument*/ValueCollection_GetEnumerator_m7C12538788587A8F4DA13E1467AA2C2E38C1066C_RuntimeMethod_var);
			__this->set_U3CU3E7__wrap1_4(L_37);
			__this->set_U3CU3E1__state_0(((int32_t)-4));
			goto IL_03ea;
		}

IL_02ba:
		{
			// foreach (var curves in handJointCurvesRight.Values)
			Enumerator_t6359D50CF0EE93ACDDC59D9FCAE8F0DD31D8DE50 * L_38 = __this->get_address_of_U3CU3E7__wrap1_4();
			PoseCurves_t14269C65E2E6B6A532EF4AC78324976DF2587501 * L_39;
			L_39 = Enumerator_get_Current_mFB5CC68B705B48844631C1360EF6CB6ED7199C3F_inline((Enumerator_t6359D50CF0EE93ACDDC59D9FCAE8F0DD31D8DE50 *)L_38, /*hidden argument*/Enumerator_get_Current_mFB5CC68B705B48844631C1360EF6CB6ED7199C3F_RuntimeMethod_var);
			__this->set_U3CcurvesU3E5__3_5(L_39);
			// yield return curves.PositionX;
			PoseCurves_t14269C65E2E6B6A532EF4AC78324976DF2587501 * L_40 = __this->get_U3CcurvesU3E5__3_5();
			NullCheck(L_40);
			AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_41 = L_40->get_PositionX_0();
			__this->set_U3CU3E2__current_1(L_41);
			__this->set_U3CU3E1__state_0(((int32_t)12));
			V_0 = (bool)1;
			goto IL_0606;
		}

IL_02eb:
		{
			__this->set_U3CU3E1__state_0(((int32_t)-4));
			// yield return curves.PositionY;
			PoseCurves_t14269C65E2E6B6A532EF4AC78324976DF2587501 * L_42 = __this->get_U3CcurvesU3E5__3_5();
			NullCheck(L_42);
			AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_43 = L_42->get_PositionY_1();
			__this->set_U3CU3E2__current_1(L_43);
			__this->set_U3CU3E1__state_0(((int32_t)13));
			V_0 = (bool)1;
			goto IL_0606;
		}

IL_0313:
		{
			__this->set_U3CU3E1__state_0(((int32_t)-4));
			// yield return curves.PositionZ;
			PoseCurves_t14269C65E2E6B6A532EF4AC78324976DF2587501 * L_44 = __this->get_U3CcurvesU3E5__3_5();
			NullCheck(L_44);
			AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_45 = L_44->get_PositionZ_2();
			__this->set_U3CU3E2__current_1(L_45);
			__this->set_U3CU3E1__state_0(((int32_t)14));
			V_0 = (bool)1;
			goto IL_0606;
		}

IL_033b:
		{
			__this->set_U3CU3E1__state_0(((int32_t)-4));
			// yield return curves.RotationX;
			PoseCurves_t14269C65E2E6B6A532EF4AC78324976DF2587501 * L_46 = __this->get_U3CcurvesU3E5__3_5();
			NullCheck(L_46);
			AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_47 = L_46->get_RotationX_3();
			__this->set_U3CU3E2__current_1(L_47);
			__this->set_U3CU3E1__state_0(((int32_t)15));
			V_0 = (bool)1;
			goto IL_0606;
		}

IL_0363:
		{
			__this->set_U3CU3E1__state_0(((int32_t)-4));
			// yield return curves.RotationY;
			PoseCurves_t14269C65E2E6B6A532EF4AC78324976DF2587501 * L_48 = __this->get_U3CcurvesU3E5__3_5();
			NullCheck(L_48);
			AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_49 = L_48->get_RotationY_4();
			__this->set_U3CU3E2__current_1(L_49);
			__this->set_U3CU3E1__state_0(((int32_t)16));
			V_0 = (bool)1;
			goto IL_0606;
		}

IL_038b:
		{
			__this->set_U3CU3E1__state_0(((int32_t)-4));
			// yield return curves.RotationZ;
			PoseCurves_t14269C65E2E6B6A532EF4AC78324976DF2587501 * L_50 = __this->get_U3CcurvesU3E5__3_5();
			NullCheck(L_50);
			AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_51 = L_50->get_RotationZ_5();
			__this->set_U3CU3E2__current_1(L_51);
			__this->set_U3CU3E1__state_0(((int32_t)17));
			V_0 = (bool)1;
			goto IL_0606;
		}

IL_03b3:
		{
			__this->set_U3CU3E1__state_0(((int32_t)-4));
			// yield return curves.RotationW;
			PoseCurves_t14269C65E2E6B6A532EF4AC78324976DF2587501 * L_52 = __this->get_U3CcurvesU3E5__3_5();
			NullCheck(L_52);
			AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_53 = L_52->get_RotationW_6();
			__this->set_U3CU3E2__current_1(L_53);
			__this->set_U3CU3E1__state_0(((int32_t)18));
			V_0 = (bool)1;
			goto IL_0606;
		}

IL_03db:
		{
			__this->set_U3CU3E1__state_0(((int32_t)-4));
			// }
			__this->set_U3CcurvesU3E5__3_5((PoseCurves_t14269C65E2E6B6A532EF4AC78324976DF2587501 *)NULL);
		}

IL_03ea:
		{
			// foreach (var curves in handJointCurvesRight.Values)
			Enumerator_t6359D50CF0EE93ACDDC59D9FCAE8F0DD31D8DE50 * L_54 = __this->get_address_of_U3CU3E7__wrap1_4();
			bool L_55;
			L_55 = Enumerator_MoveNext_m578FD92B67B741D322B93809002331AF35670FF0((Enumerator_t6359D50CF0EE93ACDDC59D9FCAE8F0DD31D8DE50 *)L_54, /*hidden argument*/Enumerator_MoveNext_m578FD92B67B741D322B93809002331AF35670FF0_RuntimeMethod_var);
			if (L_55)
			{
				goto IL_02ba;
			}
		}

IL_03fa:
		{
			U3CGetAllAnimationCurvesU3Ed__60_U3CU3Em__Finally2_mF86439DFD02659E5DFF5A2B7A760DFD8F76601D2(__this, /*hidden argument*/NULL);
			Enumerator_t6359D50CF0EE93ACDDC59D9FCAE8F0DD31D8DE50 * L_56 = __this->get_address_of_U3CU3E7__wrap1_4();
			il2cpp_codegen_initobj(L_56, sizeof(Enumerator_t6359D50CF0EE93ACDDC59D9FCAE8F0DD31D8DE50 ));
			// yield return cameraCurves.PositionX;
			InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534 * L_57 = V_2;
			NullCheck(L_57);
			PoseCurves_t14269C65E2E6B6A532EF4AC78324976DF2587501 * L_58 = L_57->get_cameraCurves_8();
			NullCheck(L_58);
			AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_59 = L_58->get_PositionX_0();
			__this->set_U3CU3E2__current_1(L_59);
			__this->set_U3CU3E1__state_0(((int32_t)19));
			V_0 = (bool)1;
			goto IL_0606;
		}

IL_042c:
		{
			__this->set_U3CU3E1__state_0((-1));
			// yield return cameraCurves.PositionY;
			InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534 * L_60 = V_2;
			NullCheck(L_60);
			PoseCurves_t14269C65E2E6B6A532EF4AC78324976DF2587501 * L_61 = L_60->get_cameraCurves_8();
			NullCheck(L_61);
			AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_62 = L_61->get_PositionY_1();
			__this->set_U3CU3E2__current_1(L_62);
			__this->set_U3CU3E1__state_0(((int32_t)20));
			V_0 = (bool)1;
			goto IL_0606;
		}

IL_0453:
		{
			__this->set_U3CU3E1__state_0((-1));
			// yield return cameraCurves.PositionZ;
			InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534 * L_63 = V_2;
			NullCheck(L_63);
			PoseCurves_t14269C65E2E6B6A532EF4AC78324976DF2587501 * L_64 = L_63->get_cameraCurves_8();
			NullCheck(L_64);
			AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_65 = L_64->get_PositionZ_2();
			__this->set_U3CU3E2__current_1(L_65);
			__this->set_U3CU3E1__state_0(((int32_t)21));
			V_0 = (bool)1;
			goto IL_0606;
		}

IL_047a:
		{
			__this->set_U3CU3E1__state_0((-1));
			// yield return cameraCurves.RotationX;
			InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534 * L_66 = V_2;
			NullCheck(L_66);
			PoseCurves_t14269C65E2E6B6A532EF4AC78324976DF2587501 * L_67 = L_66->get_cameraCurves_8();
			NullCheck(L_67);
			AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_68 = L_67->get_RotationX_3();
			__this->set_U3CU3E2__current_1(L_68);
			__this->set_U3CU3E1__state_0(((int32_t)22));
			V_0 = (bool)1;
			goto IL_0606;
		}

IL_04a1:
		{
			__this->set_U3CU3E1__state_0((-1));
			// yield return cameraCurves.RotationY;
			InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534 * L_69 = V_2;
			NullCheck(L_69);
			PoseCurves_t14269C65E2E6B6A532EF4AC78324976DF2587501 * L_70 = L_69->get_cameraCurves_8();
			NullCheck(L_70);
			AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_71 = L_70->get_RotationY_4();
			__this->set_U3CU3E2__current_1(L_71);
			__this->set_U3CU3E1__state_0(((int32_t)23));
			V_0 = (bool)1;
			goto IL_0606;
		}

IL_04c8:
		{
			__this->set_U3CU3E1__state_0((-1));
			// yield return cameraCurves.RotationZ;
			InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534 * L_72 = V_2;
			NullCheck(L_72);
			PoseCurves_t14269C65E2E6B6A532EF4AC78324976DF2587501 * L_73 = L_72->get_cameraCurves_8();
			NullCheck(L_73);
			AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_74 = L_73->get_RotationZ_5();
			__this->set_U3CU3E2__current_1(L_74);
			__this->set_U3CU3E1__state_0(((int32_t)24));
			V_0 = (bool)1;
			goto IL_0606;
		}

IL_04ef:
		{
			__this->set_U3CU3E1__state_0((-1));
			// yield return cameraCurves.RotationW;
			InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534 * L_75 = V_2;
			NullCheck(L_75);
			PoseCurves_t14269C65E2E6B6A532EF4AC78324976DF2587501 * L_76 = L_75->get_cameraCurves_8();
			NullCheck(L_76);
			AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_77 = L_76->get_RotationW_6();
			__this->set_U3CU3E2__current_1(L_77);
			__this->set_U3CU3E1__state_0(((int32_t)25));
			V_0 = (bool)1;
			goto IL_0606;
		}

IL_0516:
		{
			__this->set_U3CU3E1__state_0((-1));
			// yield return gazeCurves.OriginX;
			InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534 * L_78 = V_2;
			NullCheck(L_78);
			RayCurves_tE200BC10F2980B31D68E54E46BB6EB32508F5604 * L_79 = L_78->get_gazeCurves_9();
			NullCheck(L_79);
			AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_80 = L_79->get_OriginX_0();
			__this->set_U3CU3E2__current_1(L_80);
			__this->set_U3CU3E1__state_0(((int32_t)26));
			V_0 = (bool)1;
			goto IL_0606;
		}

IL_053d:
		{
			__this->set_U3CU3E1__state_0((-1));
			// yield return gazeCurves.OriginY;
			InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534 * L_81 = V_2;
			NullCheck(L_81);
			RayCurves_tE200BC10F2980B31D68E54E46BB6EB32508F5604 * L_82 = L_81->get_gazeCurves_9();
			NullCheck(L_82);
			AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_83 = L_82->get_OriginY_1();
			__this->set_U3CU3E2__current_1(L_83);
			__this->set_U3CU3E1__state_0(((int32_t)27));
			V_0 = (bool)1;
			goto IL_0606;
		}

IL_0564:
		{
			__this->set_U3CU3E1__state_0((-1));
			// yield return gazeCurves.OriginZ;
			InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534 * L_84 = V_2;
			NullCheck(L_84);
			RayCurves_tE200BC10F2980B31D68E54E46BB6EB32508F5604 * L_85 = L_84->get_gazeCurves_9();
			NullCheck(L_85);
			AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_86 = L_85->get_OriginZ_2();
			__this->set_U3CU3E2__current_1(L_86);
			__this->set_U3CU3E1__state_0(((int32_t)28));
			V_0 = (bool)1;
			goto IL_0606;
		}

IL_0588:
		{
			__this->set_U3CU3E1__state_0((-1));
			// yield return gazeCurves.DirectionX;
			InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534 * L_87 = V_2;
			NullCheck(L_87);
			RayCurves_tE200BC10F2980B31D68E54E46BB6EB32508F5604 * L_88 = L_87->get_gazeCurves_9();
			NullCheck(L_88);
			AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_89 = L_88->get_DirectionX_3();
			__this->set_U3CU3E2__current_1(L_89);
			__this->set_U3CU3E1__state_0(((int32_t)29));
			V_0 = (bool)1;
			goto IL_0606;
		}

IL_05ac:
		{
			__this->set_U3CU3E1__state_0((-1));
			// yield return gazeCurves.DirectionY;
			InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534 * L_90 = V_2;
			NullCheck(L_90);
			RayCurves_tE200BC10F2980B31D68E54E46BB6EB32508F5604 * L_91 = L_90->get_gazeCurves_9();
			NullCheck(L_91);
			AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_92 = L_91->get_DirectionY_4();
			__this->set_U3CU3E2__current_1(L_92);
			__this->set_U3CU3E1__state_0(((int32_t)30));
			V_0 = (bool)1;
			goto IL_0606;
		}

IL_05d0:
		{
			__this->set_U3CU3E1__state_0((-1));
			// yield return gazeCurves.DirectionZ;
			InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534 * L_93 = V_2;
			NullCheck(L_93);
			RayCurves_tE200BC10F2980B31D68E54E46BB6EB32508F5604 * L_94 = L_93->get_gazeCurves_9();
			NullCheck(L_94);
			AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_95 = L_94->get_DirectionZ_5();
			__this->set_U3CU3E2__current_1(L_95);
			__this->set_U3CU3E1__state_0(((int32_t)31));
			V_0 = (bool)1;
			goto IL_0606;
		}

IL_05f4:
		{
			__this->set_U3CU3E1__state_0((-1));
			// }
			V_0 = (bool)0;
			goto IL_0606;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FAULT_05ff;
	}

FAULT_05ff:
	{ // begin fault (depth: 1)
		U3CGetAllAnimationCurvesU3Ed__60_System_IDisposable_Dispose_m18BBD68682EC79BEB1FA11DC041B0DD2B2F24459(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(1535)
	} // end fault
	IL2CPP_CLEANUP(1535)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0606:
	{
		bool L_96 = V_0;
		return L_96;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation/<GetAllAnimationCurves>d__60::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetAllAnimationCurvesU3Ed__60_U3CU3Em__Finally1_m1FEDD9A8B4391A5E98297F17B023BAA189753D7F (U3CGetAllAnimationCurvesU3Ed__60_tABFAAE907711737282276C10EB4C546A49E1D0C4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mE6C2E4D4F02A516C58A877AB592B442E4B745D72_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_U3CU3E1__state_0((-1));
		Enumerator_t6359D50CF0EE93ACDDC59D9FCAE8F0DD31D8DE50 * L_0 = __this->get_address_of_U3CU3E7__wrap1_4();
		Enumerator_Dispose_mE6C2E4D4F02A516C58A877AB592B442E4B745D72((Enumerator_t6359D50CF0EE93ACDDC59D9FCAE8F0DD31D8DE50 *)L_0, /*hidden argument*/Enumerator_Dispose_mE6C2E4D4F02A516C58A877AB592B442E4B745D72_RuntimeMethod_var);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation/<GetAllAnimationCurves>d__60::<>m__Finally2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetAllAnimationCurvesU3Ed__60_U3CU3Em__Finally2_mF86439DFD02659E5DFF5A2B7A760DFD8F76601D2 (U3CGetAllAnimationCurvesU3Ed__60_tABFAAE907711737282276C10EB4C546A49E1D0C4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mE6C2E4D4F02A516C58A877AB592B442E4B745D72_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_U3CU3E1__state_0((-1));
		Enumerator_t6359D50CF0EE93ACDDC59D9FCAE8F0DD31D8DE50 * L_0 = __this->get_address_of_U3CU3E7__wrap1_4();
		Enumerator_Dispose_mE6C2E4D4F02A516C58A877AB592B442E4B745D72((Enumerator_t6359D50CF0EE93ACDDC59D9FCAE8F0DD31D8DE50 *)L_0, /*hidden argument*/Enumerator_Dispose_mE6C2E4D4F02A516C58A877AB592B442E4B745D72_RuntimeMethod_var);
		return;
	}
}
// UnityEngine.AnimationCurve Microsoft.MixedReality.Toolkit.Input.InputAnimation/<GetAllAnimationCurves>d__60::System.Collections.Generic.IEnumerator<UnityEngine.AnimationCurve>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * U3CGetAllAnimationCurvesU3Ed__60_System_Collections_Generic_IEnumeratorU3CUnityEngine_AnimationCurveU3E_get_Current_mAB8E76EB9D29EB054F9D233B6944B2C78CE08133 (U3CGetAllAnimationCurvesU3Ed__60_tABFAAE907711737282276C10EB4C546A49E1D0C4 * __this, const RuntimeMethod* method)
{
	{
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation/<GetAllAnimationCurves>d__60::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetAllAnimationCurvesU3Ed__60_System_Collections_IEnumerator_Reset_m36EB10FC3F960C1139BDDED85B7CF563D4707A82 (U3CGetAllAnimationCurvesU3Ed__60_tABFAAE907711737282276C10EB4C546A49E1D0C4 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CGetAllAnimationCurvesU3Ed__60_System_Collections_IEnumerator_Reset_m36EB10FC3F960C1139BDDED85B7CF563D4707A82_RuntimeMethod_var)));
	}
}
// System.Object Microsoft.MixedReality.Toolkit.Input.InputAnimation/<GetAllAnimationCurves>d__60::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CGetAllAnimationCurvesU3Ed__60_System_Collections_IEnumerator_get_Current_mEC2DDF9AE9D691A606AAFABB110B86CE01D05C89 (U3CGetAllAnimationCurvesU3Ed__60_tABFAAE907711737282276C10EB4C546A49E1D0C4 * __this, const RuntimeMethod* method)
{
	{
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<UnityEngine.AnimationCurve> Microsoft.MixedReality.Toolkit.Input.InputAnimation/<GetAllAnimationCurves>d__60::System.Collections.Generic.IEnumerable<UnityEngine.AnimationCurve>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetAllAnimationCurvesU3Ed__60_System_Collections_Generic_IEnumerableU3CUnityEngine_AnimationCurveU3E_GetEnumerator_m7D58C802D0F700C17DF12DE1064D39513A21F806 (U3CGetAllAnimationCurvesU3Ed__60_tABFAAE907711737282276C10EB4C546A49E1D0C4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CGetAllAnimationCurvesU3Ed__60_tABFAAE907711737282276C10EB4C546A49E1D0C4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CGetAllAnimationCurvesU3Ed__60_tABFAAE907711737282276C10EB4C546A49E1D0C4 * V_0 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_1 = __this->get_U3CU3El__initialThreadId_2();
		int32_t L_2;
		L_2 = Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		__this->set_U3CU3E1__state_0(0);
		V_0 = __this;
		goto IL_0035;
	}

IL_0022:
	{
		U3CGetAllAnimationCurvesU3Ed__60_tABFAAE907711737282276C10EB4C546A49E1D0C4 * L_3 = (U3CGetAllAnimationCurvesU3Ed__60_tABFAAE907711737282276C10EB4C546A49E1D0C4 *)il2cpp_codegen_object_new(U3CGetAllAnimationCurvesU3Ed__60_tABFAAE907711737282276C10EB4C546A49E1D0C4_il2cpp_TypeInfo_var);
		U3CGetAllAnimationCurvesU3Ed__60__ctor_m07DDAD234100D6B55213BB5CE9BD361D0501BF22(L_3, 0, /*hidden argument*/NULL);
		V_0 = L_3;
		U3CGetAllAnimationCurvesU3Ed__60_tABFAAE907711737282276C10EB4C546A49E1D0C4 * L_4 = V_0;
		InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534 * L_5 = __this->get_U3CU3E4__this_3();
		NullCheck(L_4);
		L_4->set_U3CU3E4__this_3(L_5);
	}

IL_0035:
	{
		U3CGetAllAnimationCurvesU3Ed__60_tABFAAE907711737282276C10EB4C546A49E1D0C4 * L_6 = V_0;
		return L_6;
	}
}
// System.Collections.IEnumerator Microsoft.MixedReality.Toolkit.Input.InputAnimation/<GetAllAnimationCurves>d__60::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetAllAnimationCurvesU3Ed__60_System_Collections_IEnumerable_GetEnumerator_m104D97E1ABED55279CBB5B115BC967F611CCA2A7 (U3CGetAllAnimationCurvesU3Ed__60_tABFAAE907711737282276C10EB4C546A49E1D0C4 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0;
		L_0 = U3CGetAllAnimationCurvesU3Ed__60_System_Collections_Generic_IEnumerableU3CUnityEngine_AnimationCurveU3E_GetEnumerator_m7D58C802D0F700C17DF12DE1064D39513A21F806(__this, /*hidden argument*/NULL);
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
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation/PoseCurves::AddKey(System.Single,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PoseCurves_AddKey_mCDBC851FE2A5B7616E44760E106B1FA334919A23 (PoseCurves_t14269C65E2E6B6A532EF4AC78324976DF2587501 * __this, float ___time0, MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99  ___pose1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AddFloatKey(PositionX, time, pose.Position.x);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_0 = __this->get_PositionX_0();
		float L_1 = ___time0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = MixedRealityPose_get_Position_m8DDC9CD0EA10D6CA2A4F1E20D5DBD1449E02CD86_inline((MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99 *)(&___pose1), /*hidden argument*/NULL);
		float L_3 = L_2.get_x_2();
		IL2CPP_RUNTIME_CLASS_INIT(InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534_il2cpp_TypeInfo_var);
		InputAnimation_AddFloatKey_m3B59676DEBAEA5A18DB74BA79548CE942528555E(L_0, L_1, L_3, /*hidden argument*/NULL);
		// AddFloatKey(PositionY, time, pose.Position.y);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_4 = __this->get_PositionY_1();
		float L_5 = ___time0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = MixedRealityPose_get_Position_m8DDC9CD0EA10D6CA2A4F1E20D5DBD1449E02CD86_inline((MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99 *)(&___pose1), /*hidden argument*/NULL);
		float L_7 = L_6.get_y_3();
		InputAnimation_AddFloatKey_m3B59676DEBAEA5A18DB74BA79548CE942528555E(L_4, L_5, L_7, /*hidden argument*/NULL);
		// AddFloatKey(PositionZ, time, pose.Position.z);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_8 = __this->get_PositionZ_2();
		float L_9 = ___time0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		L_10 = MixedRealityPose_get_Position_m8DDC9CD0EA10D6CA2A4F1E20D5DBD1449E02CD86_inline((MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99 *)(&___pose1), /*hidden argument*/NULL);
		float L_11 = L_10.get_z_4();
		InputAnimation_AddFloatKey_m3B59676DEBAEA5A18DB74BA79548CE942528555E(L_8, L_9, L_11, /*hidden argument*/NULL);
		// AddFloatKey(RotationX, time, pose.Rotation.x);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_12 = __this->get_RotationX_3();
		float L_13 = ___time0;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_14;
		L_14 = MixedRealityPose_get_Rotation_mB4E8D3A137342387D99494B4A52255B2D9029EF9_inline((MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99 *)(&___pose1), /*hidden argument*/NULL);
		float L_15 = L_14.get_x_0();
		InputAnimation_AddFloatKey_m3B59676DEBAEA5A18DB74BA79548CE942528555E(L_12, L_13, L_15, /*hidden argument*/NULL);
		// AddFloatKey(RotationY, time, pose.Rotation.y);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_16 = __this->get_RotationY_4();
		float L_17 = ___time0;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_18;
		L_18 = MixedRealityPose_get_Rotation_mB4E8D3A137342387D99494B4A52255B2D9029EF9_inline((MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99 *)(&___pose1), /*hidden argument*/NULL);
		float L_19 = L_18.get_y_1();
		InputAnimation_AddFloatKey_m3B59676DEBAEA5A18DB74BA79548CE942528555E(L_16, L_17, L_19, /*hidden argument*/NULL);
		// AddFloatKey(RotationZ, time, pose.Rotation.z);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_20 = __this->get_RotationZ_5();
		float L_21 = ___time0;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_22;
		L_22 = MixedRealityPose_get_Rotation_mB4E8D3A137342387D99494B4A52255B2D9029EF9_inline((MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99 *)(&___pose1), /*hidden argument*/NULL);
		float L_23 = L_22.get_z_2();
		InputAnimation_AddFloatKey_m3B59676DEBAEA5A18DB74BA79548CE942528555E(L_20, L_21, L_23, /*hidden argument*/NULL);
		// AddFloatKey(RotationW, time, pose.Rotation.w);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_24 = __this->get_RotationW_6();
		float L_25 = ___time0;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_26;
		L_26 = MixedRealityPose_get_Rotation_mB4E8D3A137342387D99494B4A52255B2D9029EF9_inline((MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99 *)(&___pose1), /*hidden argument*/NULL);
		float L_27 = L_26.get_w_3();
		InputAnimation_AddFloatKey_m3B59676DEBAEA5A18DB74BA79548CE942528555E(L_24, L_25, L_27, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation/PoseCurves::Optimize(System.Single,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PoseCurves_Optimize_mF498DB5DEAD66B7E810A400B442273B38089FD44 (PoseCurves_t14269C65E2E6B6A532EF4AC78324976DF2587501 * __this, float ___positionThreshold0, float ___rotationThreshold1, int32_t ___partitionSize2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// OptimizePositionCurve(ref PositionX, ref PositionY, ref PositionZ, positionThreshold, partitionSize);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** L_0 = __this->get_address_of_PositionX_0();
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** L_1 = __this->get_address_of_PositionY_1();
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** L_2 = __this->get_address_of_PositionZ_2();
		float L_3 = ___positionThreshold0;
		int32_t L_4 = ___partitionSize2;
		IL2CPP_RUNTIME_CLASS_INIT(InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534_il2cpp_TypeInfo_var);
		InputAnimation_OptimizePositionCurve_mD3E72D31BD1D2BBF108362A65BBCA96641E39975((AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 **)L_0, (AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 **)L_1, (AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 **)L_2, L_3, L_4, /*hidden argument*/NULL);
		// OptimizeRotationCurve(ref RotationX, ref RotationY, ref RotationZ, ref RotationW, rotationThreshold, partitionSize);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** L_5 = __this->get_address_of_RotationX_3();
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** L_6 = __this->get_address_of_RotationY_4();
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** L_7 = __this->get_address_of_RotationZ_5();
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** L_8 = __this->get_address_of_RotationW_6();
		float L_9 = ___rotationThreshold1;
		int32_t L_10 = ___partitionSize2;
		InputAnimation_OptimizeRotationCurve_mC170C6AB83A9C159AB6BA2BE2F0FE2D18791DDA4((AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 **)L_5, (AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 **)L_6, (AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 **)L_7, (AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 **)L_8, L_9, L_10, /*hidden argument*/NULL);
		// }
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.Input.InputAnimation/PoseCurves::Evaluate(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99  PoseCurves_Evaluate_mA254F9EE38B047676F47A248C4EDB17626E7CE2D (PoseCurves_t14269C65E2E6B6A532EF4AC78324976DF2587501 * __this, float ___time0, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99  V_7;
	memset((&V_7), 0, sizeof(V_7));
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  V_8;
	memset((&V_8), 0, sizeof(V_8));
	{
		// float px = PositionX.Evaluate(time);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_0 = __this->get_PositionX_0();
		float L_1 = ___time0;
		NullCheck(L_0);
		float L_2;
		L_2 = AnimationCurve_Evaluate_m1248B5B167F1FFFDC847A08C56B7D63B32311E6A(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// float py = PositionY.Evaluate(time);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_3 = __this->get_PositionY_1();
		float L_4 = ___time0;
		NullCheck(L_3);
		float L_5;
		L_5 = AnimationCurve_Evaluate_m1248B5B167F1FFFDC847A08C56B7D63B32311E6A(L_3, L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		// float pz = PositionZ.Evaluate(time);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_6 = __this->get_PositionZ_2();
		float L_7 = ___time0;
		NullCheck(L_6);
		float L_8;
		L_8 = AnimationCurve_Evaluate_m1248B5B167F1FFFDC847A08C56B7D63B32311E6A(L_6, L_7, /*hidden argument*/NULL);
		V_2 = L_8;
		// float rx = RotationX.Evaluate(time);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_9 = __this->get_RotationX_3();
		float L_10 = ___time0;
		NullCheck(L_9);
		float L_11;
		L_11 = AnimationCurve_Evaluate_m1248B5B167F1FFFDC847A08C56B7D63B32311E6A(L_9, L_10, /*hidden argument*/NULL);
		V_3 = L_11;
		// float ry = RotationY.Evaluate(time);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_12 = __this->get_RotationY_4();
		float L_13 = ___time0;
		NullCheck(L_12);
		float L_14;
		L_14 = AnimationCurve_Evaluate_m1248B5B167F1FFFDC847A08C56B7D63B32311E6A(L_12, L_13, /*hidden argument*/NULL);
		V_4 = L_14;
		// float rz = RotationZ.Evaluate(time);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_15 = __this->get_RotationZ_5();
		float L_16 = ___time0;
		NullCheck(L_15);
		float L_17;
		L_17 = AnimationCurve_Evaluate_m1248B5B167F1FFFDC847A08C56B7D63B32311E6A(L_15, L_16, /*hidden argument*/NULL);
		V_5 = L_17;
		// float rw = RotationW.Evaluate(time);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_18 = __this->get_RotationW_6();
		float L_19 = ___time0;
		NullCheck(L_18);
		float L_20;
		L_20 = AnimationCurve_Evaluate_m1248B5B167F1FFFDC847A08C56B7D63B32311E6A(L_18, L_19, /*hidden argument*/NULL);
		V_6 = L_20;
		// var pose = new MixedRealityPose();
		il2cpp_codegen_initobj((&V_7), sizeof(MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99 ));
		// pose.Position = new Vector3(px, py, pz);
		float L_21 = V_0;
		float L_22 = V_1;
		float L_23 = V_2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24;
		memset((&L_24), 0, sizeof(L_24));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_24), L_21, L_22, L_23, /*hidden argument*/NULL);
		MixedRealityPose_set_Position_m773EB94276F208A7BA4555B67A819F3E47BB72B6_inline((MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99 *)(&V_7), L_24, /*hidden argument*/NULL);
		// pose.Rotation = new Quaternion(rx, ry, rz, rw);
		float L_25 = V_3;
		float L_26 = V_4;
		float L_27 = V_5;
		float L_28 = V_6;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_29;
		memset((&L_29), 0, sizeof(L_29));
		Quaternion__ctor_m564FA9302F5B9DA8BAB97B0A2D86FFE83ACAA421((&L_29), L_25, L_26, L_27, L_28, /*hidden argument*/NULL);
		MixedRealityPose_set_Rotation_m880A6F5D3947A513E13FEDE089FE7C677A58B27D_inline((MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99 *)(&V_7), L_29, /*hidden argument*/NULL);
		// pose.Rotation.Normalize();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_30;
		L_30 = MixedRealityPose_get_Rotation_mB4E8D3A137342387D99494B4A52255B2D9029EF9_inline((MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99 *)(&V_7), /*hidden argument*/NULL);
		V_8 = L_30;
		Quaternion_Normalize_m080BED4941351BFF772A60536F934A4740FC6818((Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)(&V_8), /*hidden argument*/NULL);
		// return pose;
		MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99  L_31 = V_7;
		return L_31;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation/PoseCurves::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PoseCurves__ctor_mAB903C4BE542C0D296D2BD8ED4316E7C56718BE4 (PoseCurves_t14269C65E2E6B6A532EF4AC78324976DF2587501 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public AnimationCurve PositionX = new AnimationCurve();
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_0 = (AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 *)il2cpp_codegen_object_new(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_il2cpp_TypeInfo_var);
		AnimationCurve__ctor_m68D6F819242C539EC522FEAFFEB6F1579767043E(L_0, /*hidden argument*/NULL);
		__this->set_PositionX_0(L_0);
		// public AnimationCurve PositionY = new AnimationCurve();
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_1 = (AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 *)il2cpp_codegen_object_new(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_il2cpp_TypeInfo_var);
		AnimationCurve__ctor_m68D6F819242C539EC522FEAFFEB6F1579767043E(L_1, /*hidden argument*/NULL);
		__this->set_PositionY_1(L_1);
		// public AnimationCurve PositionZ = new AnimationCurve();
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_2 = (AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 *)il2cpp_codegen_object_new(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_il2cpp_TypeInfo_var);
		AnimationCurve__ctor_m68D6F819242C539EC522FEAFFEB6F1579767043E(L_2, /*hidden argument*/NULL);
		__this->set_PositionZ_2(L_2);
		// public AnimationCurve RotationX = new AnimationCurve();
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_3 = (AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 *)il2cpp_codegen_object_new(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_il2cpp_TypeInfo_var);
		AnimationCurve__ctor_m68D6F819242C539EC522FEAFFEB6F1579767043E(L_3, /*hidden argument*/NULL);
		__this->set_RotationX_3(L_3);
		// public AnimationCurve RotationY = new AnimationCurve();
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_4 = (AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 *)il2cpp_codegen_object_new(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_il2cpp_TypeInfo_var);
		AnimationCurve__ctor_m68D6F819242C539EC522FEAFFEB6F1579767043E(L_4, /*hidden argument*/NULL);
		__this->set_RotationY_4(L_4);
		// public AnimationCurve RotationZ = new AnimationCurve();
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_5 = (AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 *)il2cpp_codegen_object_new(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_il2cpp_TypeInfo_var);
		AnimationCurve__ctor_m68D6F819242C539EC522FEAFFEB6F1579767043E(L_5, /*hidden argument*/NULL);
		__this->set_RotationZ_5(L_5);
		// public AnimationCurve RotationW = new AnimationCurve();
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_6 = (AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 *)il2cpp_codegen_object_new(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_il2cpp_TypeInfo_var);
		AnimationCurve__ctor_m68D6F819242C539EC522FEAFFEB6F1579767043E(L_6, /*hidden argument*/NULL);
		__this->set_RotationW_6(L_6);
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
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation/RayCurves::AddKey(System.Single,UnityEngine.Ray)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RayCurves_AddKey_mAFB13BC4355C99BBA18D4AAD1AB29F1D68B14A4C (RayCurves_tE200BC10F2980B31D68E54E46BB6EB32508F5604 * __this, float ___time0, Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  ___ray1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AddVectorKey(OriginX, OriginY, OriginZ, time, ray.origin);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_0 = __this->get_OriginX_0();
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_1 = __this->get_OriginY_1();
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_2 = __this->get_OriginZ_2();
		float L_3 = ___time0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Ray_get_origin_m0C1B2BFF99CDF5231AC29AC031C161F55B53C1D0((Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 *)(&___ray1), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534_il2cpp_TypeInfo_var);
		InputAnimation_AddVectorKey_m8387C163CFE8BD0E554DD6ECF6C9D7BC77C33FA4(L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		// AddVectorKey(DirectionX, DirectionY, DirectionZ, time, ray.direction);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_5 = __this->get_DirectionX_3();
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_6 = __this->get_DirectionY_4();
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_7 = __this->get_DirectionZ_5();
		float L_8 = ___time0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Ray_get_direction_m2B31F86F19B64474A901B28D3808011AE7A13EFC((Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 *)(&___ray1), /*hidden argument*/NULL);
		InputAnimation_AddVectorKey_m8387C163CFE8BD0E554DD6ECF6C9D7BC77C33FA4(L_5, L_6, L_7, L_8, L_9, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation/RayCurves::Optimize(System.Single,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RayCurves_Optimize_mF8C5DAEEF384426CAD7AAB9B5A6533EF2B6FEDFE (RayCurves_tE200BC10F2980B31D68E54E46BB6EB32508F5604 * __this, float ___originThreshold0, float ___directionThreshold1, int32_t ___partitionSize2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// OptimizePositionCurve(ref OriginX, ref OriginY, ref OriginZ, originThreshold, partitionSize);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** L_0 = __this->get_address_of_OriginX_0();
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** L_1 = __this->get_address_of_OriginY_1();
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** L_2 = __this->get_address_of_OriginZ_2();
		float L_3 = ___originThreshold0;
		int32_t L_4 = ___partitionSize2;
		IL2CPP_RUNTIME_CLASS_INIT(InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534_il2cpp_TypeInfo_var);
		InputAnimation_OptimizePositionCurve_mD3E72D31BD1D2BBF108362A65BBCA96641E39975((AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 **)L_0, (AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 **)L_1, (AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 **)L_2, L_3, L_4, /*hidden argument*/NULL);
		// OptimizeDirectionCurve(ref DirectionX, ref DirectionY, ref DirectionZ, directionThreshold, partitionSize);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** L_5 = __this->get_address_of_DirectionX_3();
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** L_6 = __this->get_address_of_DirectionY_4();
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** L_7 = __this->get_address_of_DirectionZ_5();
		float L_8 = ___directionThreshold1;
		int32_t L_9 = ___partitionSize2;
		InputAnimation_OptimizeDirectionCurve_m0F698E9A530A3239F9E340156C05114B083079E7((AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 **)L_5, (AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 **)L_6, (AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 **)L_7, L_8, L_9, /*hidden argument*/NULL);
		// }
		return;
	}
}
// UnityEngine.Ray Microsoft.MixedReality.Toolkit.Input.InputAnimation/RayCurves::Evaluate(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  RayCurves_Evaluate_m21DD656F2ECD2B16C12769F1E2B98AD4B24D8BFF (RayCurves_tE200BC10F2980B31D68E54E46BB6EB32508F5604 * __this, float ___time0, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  V_6;
	memset((&V_6), 0, sizeof(V_6));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_7;
	memset((&V_7), 0, sizeof(V_7));
	{
		// float ox = OriginX.Evaluate(time);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_0 = __this->get_OriginX_0();
		float L_1 = ___time0;
		NullCheck(L_0);
		float L_2;
		L_2 = AnimationCurve_Evaluate_m1248B5B167F1FFFDC847A08C56B7D63B32311E6A(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// float oy = OriginY.Evaluate(time);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_3 = __this->get_OriginY_1();
		float L_4 = ___time0;
		NullCheck(L_3);
		float L_5;
		L_5 = AnimationCurve_Evaluate_m1248B5B167F1FFFDC847A08C56B7D63B32311E6A(L_3, L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		// float oz = OriginZ.Evaluate(time);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_6 = __this->get_OriginZ_2();
		float L_7 = ___time0;
		NullCheck(L_6);
		float L_8;
		L_8 = AnimationCurve_Evaluate_m1248B5B167F1FFFDC847A08C56B7D63B32311E6A(L_6, L_7, /*hidden argument*/NULL);
		V_2 = L_8;
		// float dx = DirectionX.Evaluate(time);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_9 = __this->get_DirectionX_3();
		float L_10 = ___time0;
		NullCheck(L_9);
		float L_11;
		L_11 = AnimationCurve_Evaluate_m1248B5B167F1FFFDC847A08C56B7D63B32311E6A(L_9, L_10, /*hidden argument*/NULL);
		V_3 = L_11;
		// float dy = DirectionY.Evaluate(time);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_12 = __this->get_DirectionY_4();
		float L_13 = ___time0;
		NullCheck(L_12);
		float L_14;
		L_14 = AnimationCurve_Evaluate_m1248B5B167F1FFFDC847A08C56B7D63B32311E6A(L_12, L_13, /*hidden argument*/NULL);
		V_4 = L_14;
		// float dz = DirectionZ.Evaluate(time);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_15 = __this->get_DirectionZ_5();
		float L_16 = ___time0;
		NullCheck(L_15);
		float L_17;
		L_17 = AnimationCurve_Evaluate_m1248B5B167F1FFFDC847A08C56B7D63B32311E6A(L_15, L_16, /*hidden argument*/NULL);
		V_5 = L_17;
		// var ray = new Ray();
		il2cpp_codegen_initobj((&V_6), sizeof(Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 ));
		// ray.origin = new Vector3(ox, oy, oz);
		float L_18 = V_0;
		float L_19 = V_1;
		float L_20 = V_2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21;
		memset((&L_21), 0, sizeof(L_21));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_21), L_18, L_19, L_20, /*hidden argument*/NULL);
		Ray_set_origin_m6EDD9381A16F5BD022A7DCBFE63D38C8A3E91B51((Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 *)(&V_6), L_21, /*hidden argument*/NULL);
		// ray.direction = new Vector3(dx, dy, dz);
		float L_22 = V_3;
		float L_23 = V_4;
		float L_24 = V_5;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_25;
		memset((&L_25), 0, sizeof(L_25));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_25), L_22, L_23, L_24, /*hidden argument*/NULL);
		Ray_set_direction_mDA9E058A81EA8D21BCD222A4729F66071FDDAFE3((Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 *)(&V_6), L_25, /*hidden argument*/NULL);
		// ray.direction.Normalize();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_26;
		L_26 = Ray_get_direction_m2B31F86F19B64474A901B28D3808011AE7A13EFC((Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 *)(&V_6), /*hidden argument*/NULL);
		V_7 = L_26;
		Vector3_Normalize_m2258C159121FC81954C301DEE631BC24FCEDE780((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_7), /*hidden argument*/NULL);
		// return ray;
		Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  L_27 = V_6;
		return L_27;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation/RayCurves::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RayCurves__ctor_m6B5E5B505F7A60B975EC6BE76D36E7145230B958 (RayCurves_tE200BC10F2980B31D68E54E46BB6EB32508F5604 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public AnimationCurve OriginX = new AnimationCurve();
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_0 = (AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 *)il2cpp_codegen_object_new(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_il2cpp_TypeInfo_var);
		AnimationCurve__ctor_m68D6F819242C539EC522FEAFFEB6F1579767043E(L_0, /*hidden argument*/NULL);
		__this->set_OriginX_0(L_0);
		// public AnimationCurve OriginY = new AnimationCurve();
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_1 = (AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 *)il2cpp_codegen_object_new(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_il2cpp_TypeInfo_var);
		AnimationCurve__ctor_m68D6F819242C539EC522FEAFFEB6F1579767043E(L_1, /*hidden argument*/NULL);
		__this->set_OriginY_1(L_1);
		// public AnimationCurve OriginZ = new AnimationCurve();
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_2 = (AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 *)il2cpp_codegen_object_new(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_il2cpp_TypeInfo_var);
		AnimationCurve__ctor_m68D6F819242C539EC522FEAFFEB6F1579767043E(L_2, /*hidden argument*/NULL);
		__this->set_OriginZ_2(L_2);
		// public AnimationCurve DirectionX = new AnimationCurve();
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_3 = (AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 *)il2cpp_codegen_object_new(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_il2cpp_TypeInfo_var);
		AnimationCurve__ctor_m68D6F819242C539EC522FEAFFEB6F1579767043E(L_3, /*hidden argument*/NULL);
		__this->set_DirectionX_3(L_3);
		// public AnimationCurve DirectionY = new AnimationCurve();
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_4 = (AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 *)il2cpp_codegen_object_new(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_il2cpp_TypeInfo_var);
		AnimationCurve__ctor_m68D6F819242C539EC522FEAFFEB6F1579767043E(L_4, /*hidden argument*/NULL);
		__this->set_DirectionY_4(L_4);
		// public AnimationCurve DirectionZ = new AnimationCurve();
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_5 = (AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 *)il2cpp_codegen_object_new(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_il2cpp_TypeInfo_var);
		AnimationCurve__ctor_m68D6F819242C539EC522FEAFFEB6F1579767043E(L_5, /*hidden argument*/NULL);
		__this->set_DirectionZ_5(L_5);
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
// System.Single Microsoft.MixedReality.Toolkit.Input.InputRecordingBuffer/Keyframe::get_Time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Keyframe_get_Time_mA05D121FA2658A8A2C65307A5FE7F95518D4DDDA (Keyframe_tB3167A15EF7CB57AA5C8498D640C6254A16F5B3F * __this, const RuntimeMethod* method)
{
	{
		// public float Time { get; set; }
		float L_0 = __this->get_U3CTimeU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputRecordingBuffer/Keyframe::set_Time(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Keyframe_set_Time_mA0E61576B73CE605C55A9FAA5B5AB1AD9405FE03 (Keyframe_tB3167A15EF7CB57AA5C8498D640C6254A16F5B3F * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float Time { get; set; }
		float L_0 = ___value0;
		__this->set_U3CTimeU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Input.InputRecordingBuffer/Keyframe::get_LeftTracked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Keyframe_get_LeftTracked_m06A036923EED4E646B10D9EF8295828572A9F04B (Keyframe_tB3167A15EF7CB57AA5C8498D640C6254A16F5B3F * __this, const RuntimeMethod* method)
{
	{
		// public bool LeftTracked { get; set; }
		bool L_0 = __this->get_U3CLeftTrackedU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputRecordingBuffer/Keyframe::set_LeftTracked(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Keyframe_set_LeftTracked_mA7012EE3B00277F37646D2EFFD6E58B89ED22C12 (Keyframe_tB3167A15EF7CB57AA5C8498D640C6254A16F5B3F * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool LeftTracked { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CLeftTrackedU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Input.InputRecordingBuffer/Keyframe::get_RightTracked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Keyframe_get_RightTracked_mA19B3CB09A5A298D8984AF70938194E77B57F4BC (Keyframe_tB3167A15EF7CB57AA5C8498D640C6254A16F5B3F * __this, const RuntimeMethod* method)
{
	{
		// public bool RightTracked { get; set; }
		bool L_0 = __this->get_U3CRightTrackedU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputRecordingBuffer/Keyframe::set_RightTracked(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Keyframe_set_RightTracked_m2DDA779BE3AB10359A1139B303D9E1687EF2A91A (Keyframe_tB3167A15EF7CB57AA5C8498D640C6254A16F5B3F * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool RightTracked { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CRightTrackedU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Input.InputRecordingBuffer/Keyframe::get_LeftPinch()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Keyframe_get_LeftPinch_m435C11D6968B044F42A375EE28AF3020AD9091DE (Keyframe_tB3167A15EF7CB57AA5C8498D640C6254A16F5B3F * __this, const RuntimeMethod* method)
{
	{
		// public bool LeftPinch { get; set; }
		bool L_0 = __this->get_U3CLeftPinchU3Ek__BackingField_3();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputRecordingBuffer/Keyframe::set_LeftPinch(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Keyframe_set_LeftPinch_m7DE1DB8481149DB1A6F4FD05E1CFA51EFC0D223C (Keyframe_tB3167A15EF7CB57AA5C8498D640C6254A16F5B3F * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool LeftPinch { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CLeftPinchU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Input.InputRecordingBuffer/Keyframe::get_RightPinch()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Keyframe_get_RightPinch_mF6869CC9BC0751EFE2B3B527318ACD483E997386 (Keyframe_tB3167A15EF7CB57AA5C8498D640C6254A16F5B3F * __this, const RuntimeMethod* method)
{
	{
		// public bool RightPinch { get; set; }
		bool L_0 = __this->get_U3CRightPinchU3Ek__BackingField_4();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputRecordingBuffer/Keyframe::set_RightPinch(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Keyframe_set_RightPinch_mCD64D00BD5EE182D2DA2F0C3A8893EFD4FCCA219 (Keyframe_tB3167A15EF7CB57AA5C8498D640C6254A16F5B3F * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool RightPinch { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CRightPinchU3Ek__BackingField_4(L_0);
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.Input.InputRecordingBuffer/Keyframe::get_CameraPose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99  Keyframe_get_CameraPose_mF080ABD993EE172F211C241D25B110A85EF9FD41 (Keyframe_tB3167A15EF7CB57AA5C8498D640C6254A16F5B3F * __this, const RuntimeMethod* method)
{
	{
		// public MixedRealityPose CameraPose { get; set; }
		MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99  L_0 = __this->get_U3CCameraPoseU3Ek__BackingField_5();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputRecordingBuffer/Keyframe::set_CameraPose(Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Keyframe_set_CameraPose_mA7F77373E5B5A27F781CC58234DA8E66C482C7DD (Keyframe_tB3167A15EF7CB57AA5C8498D640C6254A16F5B3F * __this, MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99  ___value0, const RuntimeMethod* method)
{
	{
		// public MixedRealityPose CameraPose { get; set; }
		MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99  L_0 = ___value0;
		__this->set_U3CCameraPoseU3Ek__BackingField_5(L_0);
		return;
	}
}
// UnityEngine.Ray Microsoft.MixedReality.Toolkit.Input.InputRecordingBuffer/Keyframe::get_GazeRay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  Keyframe_get_GazeRay_m655743341B0DB5FD8AC0337E45D5A47698FEE0EA (Keyframe_tB3167A15EF7CB57AA5C8498D640C6254A16F5B3F * __this, const RuntimeMethod* method)
{
	{
		// public Ray GazeRay { get; set; }
		Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  L_0 = __this->get_U3CGazeRayU3Ek__BackingField_6();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputRecordingBuffer/Keyframe::set_GazeRay(UnityEngine.Ray)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Keyframe_set_GazeRay_m9CA5738D5E4A5423FE33D2971A0F096DF0E2A7F6 (Keyframe_tB3167A15EF7CB57AA5C8498D640C6254A16F5B3F * __this, Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  ___value0, const RuntimeMethod* method)
{
	{
		// public Ray GazeRay { get; set; }
		Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  L_0 = ___value0;
		__this->set_U3CGazeRayU3Ek__BackingField_6(L_0);
		return;
	}
}
// System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose> Microsoft.MixedReality.Toolkit.Input.InputRecordingBuffer/Keyframe::get_LeftJoints()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_tABC45B7C67E921F533EBEF222CFE2B891AA1E098 * Keyframe_get_LeftJoints_m82B2A30643E9897737F81EF37C7601C4C6018816 (Keyframe_tB3167A15EF7CB57AA5C8498D640C6254A16F5B3F * __this, const RuntimeMethod* method)
{
	{
		// public Dictionary<TrackedHandJoint, MixedRealityPose> LeftJoints { get; set; }
		Dictionary_2_tABC45B7C67E921F533EBEF222CFE2B891AA1E098 * L_0 = __this->get_U3CLeftJointsU3Ek__BackingField_7();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputRecordingBuffer/Keyframe::set_LeftJoints(System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Keyframe_set_LeftJoints_mBCA7CCA1A68A724C3171365638C5D26B12BEDB11 (Keyframe_tB3167A15EF7CB57AA5C8498D640C6254A16F5B3F * __this, Dictionary_2_tABC45B7C67E921F533EBEF222CFE2B891AA1E098 * ___value0, const RuntimeMethod* method)
{
	{
		// public Dictionary<TrackedHandJoint, MixedRealityPose> LeftJoints { get; set; }
		Dictionary_2_tABC45B7C67E921F533EBEF222CFE2B891AA1E098 * L_0 = ___value0;
		__this->set_U3CLeftJointsU3Ek__BackingField_7(L_0);
		return;
	}
}
// System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose> Microsoft.MixedReality.Toolkit.Input.InputRecordingBuffer/Keyframe::get_RightJoints()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_tABC45B7C67E921F533EBEF222CFE2B891AA1E098 * Keyframe_get_RightJoints_mDBD54F5919D9FFE32E616059DA0198099C686006 (Keyframe_tB3167A15EF7CB57AA5C8498D640C6254A16F5B3F * __this, const RuntimeMethod* method)
{
	{
		// public Dictionary<TrackedHandJoint, MixedRealityPose> RightJoints { get; set; }
		Dictionary_2_tABC45B7C67E921F533EBEF222CFE2B891AA1E098 * L_0 = __this->get_U3CRightJointsU3Ek__BackingField_8();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputRecordingBuffer/Keyframe::set_RightJoints(System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Keyframe_set_RightJoints_mC5C6E03184499B6524886D6081CF9B5BD7FF4AFD (Keyframe_tB3167A15EF7CB57AA5C8498D640C6254A16F5B3F * __this, Dictionary_2_tABC45B7C67E921F533EBEF222CFE2B891AA1E098 * ___value0, const RuntimeMethod* method)
{
	{
		// public Dictionary<TrackedHandJoint, MixedRealityPose> RightJoints { get; set; }
		Dictionary_2_tABC45B7C67E921F533EBEF222CFE2B891AA1E098 * L_0 = ___value0;
		__this->set_U3CRightJointsU3Ek__BackingField_8(L_0);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputRecordingBuffer/Keyframe::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Keyframe__ctor_m8C29A9724CF8FE98D008BAD7AB0310D6E40CEA1A (Keyframe_tB3167A15EF7CB57AA5C8498D640C6254A16F5B3F * __this, float ___time0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mEBA54D53782CDC8695416345EA43239C678D9804_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tABC45B7C67E921F533EBEF222CFE2B891AA1E098_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Keyframe(float time)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// Time = time;
		float L_0 = ___time0;
		Keyframe_set_Time_mA0E61576B73CE605C55A9FAA5B5AB1AD9405FE03_inline(__this, L_0, /*hidden argument*/NULL);
		// LeftJoints = new Dictionary<TrackedHandJoint, MixedRealityPose>();
		Dictionary_2_tABC45B7C67E921F533EBEF222CFE2B891AA1E098 * L_1 = (Dictionary_2_tABC45B7C67E921F533EBEF222CFE2B891AA1E098 *)il2cpp_codegen_object_new(Dictionary_2_tABC45B7C67E921F533EBEF222CFE2B891AA1E098_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mEBA54D53782CDC8695416345EA43239C678D9804(L_1, /*hidden argument*/Dictionary_2__ctor_mEBA54D53782CDC8695416345EA43239C678D9804_RuntimeMethod_var);
		Keyframe_set_LeftJoints_mBCA7CCA1A68A724C3171365638C5D26B12BEDB11_inline(__this, L_1, /*hidden argument*/NULL);
		// RightJoints = new Dictionary<TrackedHandJoint, MixedRealityPose>();
		Dictionary_2_tABC45B7C67E921F533EBEF222CFE2B891AA1E098 * L_2 = (Dictionary_2_tABC45B7C67E921F533EBEF222CFE2B891AA1E098 *)il2cpp_codegen_object_new(Dictionary_2_tABC45B7C67E921F533EBEF222CFE2B891AA1E098_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mEBA54D53782CDC8695416345EA43239C678D9804(L_2, /*hidden argument*/Dictionary_2__ctor_mEBA54D53782CDC8695416345EA43239C678D9804_RuntimeMethod_var);
		Keyframe_set_RightJoints_mC5C6E03184499B6524886D6081CF9B5BD7FF4AFD_inline(__this, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool InputAnimation_get_HasCameraPose_m3A7978ABCB573725268205D06F9F524A2CD72D9A_inline (InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534 * __this, const RuntimeMethod* method)
{
	{
		// public bool HasCameraPose { get; private set; } = false;
		bool L_0 = __this->get_U3CHasCameraPoseU3Ek__BackingField_11();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool InputAnimation_get_HasHandData_mE585DBE196E292F83610C5810E569A172143D373_inline (InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534 * __this, const RuntimeMethod* method)
{
	{
		// public bool HasHandData { get; private set; } = false;
		bool L_0 = __this->get_U3CHasHandDataU3Ek__BackingField_10();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool InputAnimation_get_HasEyeGaze_mF0D54413FEBDD201EA28ACCA9ADC438124EF0A3F_inline (InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534 * __this, const RuntimeMethod* method)
{
	{
		// public bool HasEyeGaze { get; private set; } = false;
		bool L_0 = __this->get_U3CHasEyeGazeU3Ek__BackingField_12();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99  MixedRealityPose_get_ZeroIdentity_m95D9F3844DD9A90DAEC2046FE9152D721CCF19D2_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static MixedRealityPose ZeroIdentity { get; } = new MixedRealityPose(Vector3.zero, Quaternion.identity);
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99_il2cpp_TypeInfo_var);
		MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99  L_0 = ((MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99_il2cpp_TypeInfo_var))->get_U3CZeroIdentityU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool MixedRealityInputRecordingProfile_get_RecordHandData_mFD612DB88512A750FF0D12D05DA06E423EB1E384_inline (MixedRealityInputRecordingProfile_t56C7B027300F96474C48A61DF0A7EFAA8E41EA91 * __this, const RuntimeMethod* method)
{
	{
		// public bool RecordHandData => recordHandData;
		bool L_0 = __this->get_recordHandData_6();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void InputAnimation_set_HasHandData_m6D908DF23EF21B692A3FB1C9E41C8F157B1B844E_inline (InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool HasHandData { get; private set; } = false;
		bool L_0 = ___value0;
		__this->set_U3CHasHandDataU3Ek__BackingField_10(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool MixedRealityInputRecordingProfile_get_RecordCameraPose_m7BA79D3B22E44E686AA955C56072F7A6716FED72_inline (MixedRealityInputRecordingProfile_t56C7B027300F96474C48A61DF0A7EFAA8E41EA91 * __this, const RuntimeMethod* method)
{
	{
		// public bool RecordCameraPose => recordCameraPose;
		bool L_0 = __this->get_recordCameraPose_9();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void InputAnimation_set_HasCameraPose_mCF43237A57330A40150937CD555F8F46A2FABEB1_inline (InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool HasCameraPose { get; private set; } = false;
		bool L_0 = ___value0;
		__this->set_U3CHasCameraPoseU3Ek__BackingField_11(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool MixedRealityInputRecordingProfile_get_RecordEyeGaze_m9DA2CB6AF1179E5AA1A466E15292817DF3F61B54_inline (MixedRealityInputRecordingProfile_t56C7B027300F96474C48A61DF0A7EFAA8E41EA91 * __this, const RuntimeMethod* method)
{
	{
		// public bool RecordEyeGaze => recordEyeGaze;
		bool L_0 = __this->get_recordEyeGaze_12();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void InputAnimation_set_HasEyeGaze_m1AA6396ADD8FDA4A8564A76F26E2274BBC650F8D_inline (InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool HasEyeGaze { get; private set; } = false;
		bool L_0 = ___value0;
		__this->set_U3CHasEyeGazeU3Ek__BackingField_12(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Keyframe_get_Time_mA05D121FA2658A8A2C65307A5FE7F95518D4DDDA_inline (Keyframe_tB3167A15EF7CB57AA5C8498D640C6254A16F5B3F * __this, const RuntimeMethod* method)
{
	{
		// public float Time { get; set; }
		float L_0 = __this->get_U3CTimeU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Keyframe_get_LeftTracked_m06A036923EED4E646B10D9EF8295828572A9F04B_inline (Keyframe_tB3167A15EF7CB57AA5C8498D640C6254A16F5B3F * __this, const RuntimeMethod* method)
{
	{
		// public bool LeftTracked { get; set; }
		bool L_0 = __this->get_U3CLeftTrackedU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Keyframe_get_RightTracked_mA19B3CB09A5A298D8984AF70938194E77B57F4BC_inline (Keyframe_tB3167A15EF7CB57AA5C8498D640C6254A16F5B3F * __this, const RuntimeMethod* method)
{
	{
		// public bool RightTracked { get; set; }
		bool L_0 = __this->get_U3CRightTrackedU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Keyframe_get_LeftPinch_m435C11D6968B044F42A375EE28AF3020AD9091DE_inline (Keyframe_tB3167A15EF7CB57AA5C8498D640C6254A16F5B3F * __this, const RuntimeMethod* method)
{
	{
		// public bool LeftPinch { get; set; }
		bool L_0 = __this->get_U3CLeftPinchU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Keyframe_get_RightPinch_mF6869CC9BC0751EFE2B3B527318ACD483E997386_inline (Keyframe_tB3167A15EF7CB57AA5C8498D640C6254A16F5B3F * __this, const RuntimeMethod* method)
{
	{
		// public bool RightPinch { get; set; }
		bool L_0 = __this->get_U3CRightPinchU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Dictionary_2_tABC45B7C67E921F533EBEF222CFE2B891AA1E098 * Keyframe_get_LeftJoints_m82B2A30643E9897737F81EF37C7601C4C6018816_inline (Keyframe_tB3167A15EF7CB57AA5C8498D640C6254A16F5B3F * __this, const RuntimeMethod* method)
{
	{
		// public Dictionary<TrackedHandJoint, MixedRealityPose> LeftJoints { get; set; }
		Dictionary_2_tABC45B7C67E921F533EBEF222CFE2B891AA1E098 * L_0 = __this->get_U3CLeftJointsU3Ek__BackingField_7();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Dictionary_2_tABC45B7C67E921F533EBEF222CFE2B891AA1E098 * Keyframe_get_RightJoints_mDBD54F5919D9FFE32E616059DA0198099C686006_inline (Keyframe_tB3167A15EF7CB57AA5C8498D640C6254A16F5B3F * __this, const RuntimeMethod* method)
{
	{
		// public Dictionary<TrackedHandJoint, MixedRealityPose> RightJoints { get; set; }
		Dictionary_2_tABC45B7C67E921F533EBEF222CFE2B891AA1E098 * L_0 = __this->get_U3CRightJointsU3Ek__BackingField_8();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99  Keyframe_get_CameraPose_mF080ABD993EE172F211C241D25B110A85EF9FD41_inline (Keyframe_tB3167A15EF7CB57AA5C8498D640C6254A16F5B3F * __this, const RuntimeMethod* method)
{
	{
		// public MixedRealityPose CameraPose { get; set; }
		MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99  L_0 = __this->get_U3CCameraPoseU3Ek__BackingField_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  Keyframe_get_GazeRay_m655743341B0DB5FD8AC0337E45D5A47698FEE0EA_inline (Keyframe_tB3167A15EF7CB57AA5C8498D640C6254A16F5B3F * __this, const RuntimeMethod* method)
{
	{
		// public Ray GazeRay { get; set; }
		Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  L_0 = __this->get_U3CGazeRayU3Ek__BackingField_6();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float MixedRealityInputRecordingProfile_get_CameraPositionThreshold_m8240A9C1827186F6D194747E3D77D9C24C7BC41E_inline (MixedRealityInputRecordingProfile_t56C7B027300F96474C48A61DF0A7EFAA8E41EA91 * __this, const RuntimeMethod* method)
{
	{
		// public float CameraPositionThreshold => cameraPositionThreshold;
		float L_0 = __this->get_cameraPositionThreshold_10();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float MixedRealityInputRecordingProfile_get_CameraRotationThreshold_mE91B9970882A9B83EB05E637C36A1D3F1361F6A9_inline (MixedRealityInputRecordingProfile_t56C7B027300F96474C48A61DF0A7EFAA8E41EA91 * __this, const RuntimeMethod* method)
{
	{
		// public float CameraRotationThreshold => cameraRotationThreshold;
		float L_0 = __this->get_cameraRotationThreshold_11();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MixedRealityInputRecordingProfile_get_PartitionSize_mCFA857FFB0CBE37678EF751667040AEB1E84329D_inline (MixedRealityInputRecordingProfile_t56C7B027300F96474C48A61DF0A7EFAA8E41EA91 * __this, const RuntimeMethod* method)
{
	{
		// public int PartitionSize => partitionSize;
		int32_t L_0 = __this->get_partitionSize_15();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float MixedRealityInputRecordingProfile_get_EyeGazeOriginThreshold_mB233A67A96A3F58D3A1CD6448A28B89C4E978589_inline (MixedRealityInputRecordingProfile_t56C7B027300F96474C48A61DF0A7EFAA8E41EA91 * __this, const RuntimeMethod* method)
{
	{
		// public float EyeGazeOriginThreshold => eyeGazeOriginThreshold;
		float L_0 = __this->get_eyeGazeOriginThreshold_13();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float MixedRealityInputRecordingProfile_get_EyeGazeDirectionThreshold_m817BE12ABBB0A219E23004B30D773761BD3062FD_inline (MixedRealityInputRecordingProfile_t56C7B027300F96474C48A61DF0A7EFAA8E41EA91 * __this, const RuntimeMethod* method)
{
	{
		// public float EyeGazeDirectionThreshold => eyeGazeDirectionThreshold;
		float L_0 = __this->get_eyeGazeDirectionThreshold_14();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float MixedRealityInputRecordingProfile_get_JointPositionThreshold_m334C9FBDA90EEEDD15AE647E8F7E225A1194F396_inline (MixedRealityInputRecordingProfile_t56C7B027300F96474C48A61DF0A7EFAA8E41EA91 * __this, const RuntimeMethod* method)
{
	{
		// public float JointPositionThreshold => jointPositionThreshold;
		float L_0 = __this->get_jointPositionThreshold_7();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float MixedRealityInputRecordingProfile_get_JointRotationThreshold_mB2AE3496B2BBB868F22645E466074C313DDBEA9B_inline (MixedRealityInputRecordingProfile_t56C7B027300F96474C48A61DF0A7EFAA8E41EA91 * __this, const RuntimeMethod* method)
{
	{
		// public float JointRotationThreshold => jointRotationThreshold;
		float L_0 = __this->get_jointRotationThreshold_8();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		float L_2 = ___z2;
		__this->set_z_4(L_2);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_Lerp_m8E095584FFA10CF1D3EABCD04F4C83FB82EC5524_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, float ___t2, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___t2;
		float L_1;
		L_1 = Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C(L_0, /*hidden argument*/NULL);
		___t2 = L_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___a0;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___b1;
		float L_5 = L_4.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a0;
		float L_7 = L_6.get_x_2();
		float L_8 = ___t2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9 = ___a0;
		float L_10 = L_9.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11 = ___b1;
		float L_12 = L_11.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = ___a0;
		float L_14 = L_13.get_y_3();
		float L_15 = ___t2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16 = ___a0;
		float L_17 = L_16.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18 = ___b1;
		float L_19 = L_18.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20 = ___a0;
		float L_21 = L_20.get_z_4();
		float L_22 = ___t2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_23), ((float)il2cpp_codegen_add((float)L_3, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)), (float)L_8)))), ((float)il2cpp_codegen_add((float)L_10, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_12, (float)L_14)), (float)L_15)))), ((float)il2cpp_codegen_add((float)L_17, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_19, (float)L_21)), (float)L_22)))), /*hidden argument*/NULL);
		V_0 = L_23;
		goto IL_0053;
	}

IL_0053:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24 = V_0;
		return L_24;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_subtract((float)L_1, (float)L_3)), ((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)), ((float)il2cpp_codegen_subtract((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Dot_mD19905B093915BA12852732EA27AA2DBE030D11F_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___lhs0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rhs1, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___lhs0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___rhs1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___lhs0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___rhs1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___lhs0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___rhs1;
		float L_11 = L_10.get_z_4();
		V_0 = ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_1, (float)L_3)), (float)((float)il2cpp_codegen_multiply((float)L_5, (float)L_7)))), (float)((float)il2cpp_codegen_multiply((float)L_9, (float)L_11))));
		goto IL_002d;
	}

IL_002d:
	{
		float L_12 = V_0;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Keyframe_set_CameraPose_mA7F77373E5B5A27F781CC58234DA8E66C482C7DD_inline (Keyframe_tB3167A15EF7CB57AA5C8498D640C6254A16F5B3F * __this, MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99  ___value0, const RuntimeMethod* method)
{
	{
		// public MixedRealityPose CameraPose { get; set; }
		MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99  L_0 = ___value0;
		__this->set_U3CCameraPoseU3Ek__BackingField_5(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Keyframe_set_GazeRay_m9CA5738D5E4A5423FE33D2971A0F096DF0E2A7F6_inline (Keyframe_tB3167A15EF7CB57AA5C8498D640C6254A16F5B3F * __this, Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  ___value0, const RuntimeMethod* method)
{
	{
		// public Ray GazeRay { get; set; }
		Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  L_0 = ___value0;
		__this->set_U3CGazeRayU3Ek__BackingField_6(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Keyframe_set_LeftTracked_mA7012EE3B00277F37646D2EFFD6E58B89ED22C12_inline (Keyframe_tB3167A15EF7CB57AA5C8498D640C6254A16F5B3F * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool LeftTracked { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CLeftTrackedU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Keyframe_set_LeftPinch_m7DE1DB8481149DB1A6F4FD05E1CFA51EFC0D223C_inline (Keyframe_tB3167A15EF7CB57AA5C8498D640C6254A16F5B3F * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool LeftPinch { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CLeftPinchU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Keyframe_set_RightTracked_m2DDA779BE3AB10359A1139B303D9E1687EF2A91A_inline (Keyframe_tB3167A15EF7CB57AA5C8498D640C6254A16F5B3F * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool RightTracked { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CRightTrackedU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Keyframe_set_RightPinch_mCD64D00BD5EE182D2DA2F0C3A8893EFD4FCCA219_inline (Keyframe_tB3167A15EF7CB57AA5C8498D640C6254A16F5B3F * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool RightPinch { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CRightPinchU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float InputRecordingService_get_EndTime_mB3DC5B15E5C740E44A8CDAE882D1636B5083B4E5_inline (InputRecordingService_tA847B98505BE7064D6751CD73492550FE4A2338B * __this, const RuntimeMethod* method)
{
	{
		// public float EndTime { get; private set; }
		float L_0 = __this->get_U3CEndTimeU3Ek__BackingField_24();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void InputRecordingService_set_IsRecording_m040D1B2E017C00DB07A388C900E25C34C1FA3C80_inline (InputRecordingService_tA847B98505BE7064D6751CD73492550FE4A2338B * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool IsRecording { get; private set; } = false;
		bool L_0 = ___value0;
		__this->set_U3CIsRecordingU3Ek__BackingField_20(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float MixedRealityInputRecordingProfile_get_FrameRate_m073A10D133A0D9B9FB75E9E2EFFDCEAFB6D8A7D0_inline (MixedRealityInputRecordingProfile_t56C7B027300F96474C48A61DF0A7EFAA8E41EA91 * __this, const RuntimeMethod* method)
{
	{
		// public float FrameRate => frameRate;
		float L_0 = __this->get_frameRate_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool InputRecordingService_get_UseBufferTimeLimit_m4042E68CF548455A697C39ABB07DCD491FD11EC7_inline (InputRecordingService_tA847B98505BE7064D6751CD73492550FE4A2338B * __this, const RuntimeMethod* method)
{
	{
		// get { return useBufferTimeLimit; }
		bool L_0 = __this->get_useBufferTimeLimit_21();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool InputRecordingService_get_IsRecording_m6B36789EE3D2F8DDAEE0E13FF83A9BE7BAE74FAE_inline (InputRecordingService_tA847B98505BE7064D6751CD73492550FE4A2338B * __this, const RuntimeMethod* method)
{
	{
		// public bool IsRecording { get; private set; } = false;
		bool L_0 = __this->get_U3CIsRecordingU3Ek__BackingField_20();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void InputRecordingService_set_EndTime_mA217B0B7F035D4B0A479D43AEE295CBCB1169370_inline (InputRecordingService_tA847B98505BE7064D6751CD73492550FE4A2338B * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float EndTime { get; private set; }
		float L_0 = ___value0;
		__this->set_U3CEndTimeU3Ek__BackingField_24(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  MixedRealityPose_get_Position_m8DDC9CD0EA10D6CA2A4F1E20D5DBD1449E02CD86_inline (MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99 * __this, const RuntimeMethod* method)
{
	{
		// public Vector3 Position { get { return position; } set { position = value; } }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = __this->get_position_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MixedRealityInteractionMapping_get_InputType_mD4B8174B4A84E3A88D0056FA4550C7B8E9F37462_inline (MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B * __this, const RuntimeMethod* method)
{
	{
		// public DeviceInputType InputType => inputType;
		int32_t L_0 = __this->get_inputType_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool MixedRealityInteractionMapping_get_BoolData_m5D39EBEE43023C9782742ECC3700D75CD8AF9875_inline (MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B * __this, const RuntimeMethod* method)
{
	{
		// return boolData;
		bool L_0 = __this->get_boolData_12();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  MixedRealityPose_get_Rotation_mB4E8D3A137342387D99494B4A52255B2D9029EF9_inline (MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99 * __this, const RuntimeMethod* method)
{
	{
		// public Quaternion Rotation { get { return rotation; } set { rotation = value; } }
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_0 = __this->get_rotation_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MixedRealityPose_set_Position_m773EB94276F208A7BA4555B67A819F3E47BB72B6_inline (MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3 Position { get { return position; } set { position = value; } }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___value0;
		__this->set_position_1(L_0);
		// public Vector3 Position { get { return position; } set { position = value; } }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MixedRealityPose_set_Rotation_m880A6F5D3947A513E13FEDE089FE7C677A58B27D_inline (MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99 * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___value0, const RuntimeMethod* method)
{
	{
		// public Quaternion Rotation { get { return rotation; } set { rotation = value; } }
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_0 = ___value0;
		__this->set_rotation_2(L_0);
		// public Quaternion Rotation { get { return rotation; } set { rotation = value; } }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Keyframe_set_Time_mA0E61576B73CE605C55A9FAA5B5AB1AD9405FE03_inline (Keyframe_tB3167A15EF7CB57AA5C8498D640C6254A16F5B3F * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float Time { get; set; }
		float L_0 = ___value0;
		__this->set_U3CTimeU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Keyframe_set_LeftJoints_mBCA7CCA1A68A724C3171365638C5D26B12BEDB11_inline (Keyframe_tB3167A15EF7CB57AA5C8498D640C6254A16F5B3F * __this, Dictionary_2_tABC45B7C67E921F533EBEF222CFE2B891AA1E098 * ___value0, const RuntimeMethod* method)
{
	{
		// public Dictionary<TrackedHandJoint, MixedRealityPose> LeftJoints { get; set; }
		Dictionary_2_tABC45B7C67E921F533EBEF222CFE2B891AA1E098 * L_0 = ___value0;
		__this->set_U3CLeftJointsU3Ek__BackingField_7(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Keyframe_set_RightJoints_mC5C6E03184499B6524886D6081CF9B5BD7FF4AFD_inline (Keyframe_tB3167A15EF7CB57AA5C8498D640C6254A16F5B3F * __this, Dictionary_2_tABC45B7C67E921F533EBEF222CFE2B891AA1E098 * ___value0, const RuntimeMethod* method)
{
	{
		// public Dictionary<TrackedHandJoint, MixedRealityPose> RightJoints { get; set; }
		Dictionary_2_tABC45B7C67E921F533EBEF222CFE2B891AA1E098 * L_0 = ___value0;
		__this->set_U3CRightJointsU3Ek__BackingField_8(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m6C2AF5B57480AE0440F937EF9A50D3803ED850EE_gshared_inline (Enumerator_tEA3EEAFB01FCAEC65CD249CE8B28073BA94302C2 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_currentValue_3();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_mD618588C9785F06D043BE6AAD0A0B8116B2A77A3_gshared_inline (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_3();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m7897F8E6F5E7968B14AEE7B3B5719B6B3CE4292C_gshared_inline (Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = (bool)__this->get_has_value_1();
		return (bool)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Nullable_1_GetValueOrDefault_mB4CE6E77EC85DD762FDA6C24F96EBC2A75E28546_gshared_inline (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_value_0();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_gshared_inline (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = (bool)__this->get_has_value_1();
		return (bool)L_0;
	}
}
