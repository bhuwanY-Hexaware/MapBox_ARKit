﻿#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

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
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
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

// UnityEngine.XR.iOS.EditorHitTest
struct EditorHitTest_t1253817588;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t3962482529;
// System.String
struct String_t;
// UnityEngine.XR.iOS.UnityARAmbient
struct UnityARAmbient_t2710679068;
// UnityEngine.Component
struct Component_t1923634451;
// UnityEngine.Light
struct Light_t3756812086;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARFrameUpdate
struct ARFrameUpdate_t1157215840;
// UnityEngine.GameObject
struct GameObject_t1113636619;
// UnityEngine.Transform
struct Transform_t3600365921;
// UnityEngine.XR.iOS.UnityARAnchorManager
struct UnityARAnchorManager_t1557554123;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.XR.iOS.ARPlaneAnchorGameObject>
struct Dictionary_2_t1732976114;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t132545152;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARAnchorAdded
struct ARAnchorAdded_t1608557165;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARAnchorUpdated
struct ARAnchorUpdated_t3113222537;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARAnchorRemoved
struct ARAnchorRemoved_t4030593004;
// DontDestroyOnLoad
struct DontDestroyOnLoad_t1456007215;
// UnityEngine.XR.iOS.ARPlaneAnchorGameObject
struct ARPlaneAnchorGameObject_t1947719815;
// UnityEngine.Object
struct Object_t631007953;
// System.Collections.Generic.List`1<UnityEngine.XR.iOS.ARPlaneAnchorGameObject>
struct List_1_t3419794557;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t257213610;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,UnityEngine.XR.iOS.ARPlaneAnchorGameObject>
struct ValueCollection_t3449020432;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
struct ValueCollection_t1848589470;
// System.Collections.Generic.IEnumerable`1<UnityEngine.XR.iOS.ARPlaneAnchorGameObject>
struct IEnumerable_1_t927572704;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t2059959053;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1718750761;
// UnityEngine.XR.iOS.UnityARGeneratePlane
struct UnityARGeneratePlane_t272564669;
// UnityEngine.XR.iOS.UnityARHitTestExample
struct UnityARHitTestExample_t457226377;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface
struct UnityARSessionNativeInterface_t3929719369;
// System.Collections.Generic.List`1<UnityEngine.XR.iOS.ARHitTestResult>
struct List_1_t2751098672;
// UnityEngine.Camera
struct Camera_t4157153871;
// UnityEngine.XR.iOS.UnityARKitControl
struct UnityARKitControl_t1358211756;
// UnityEngine.XR.iOS.UnityARMatrixOps
struct UnityARMatrixOps_t2790111267;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARFrameUpdate
struct internal_ARFrameUpdate_t3254989823;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARSessionFailed
struct ARSessionFailed_t2125002991;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARSessionCallback
struct ARSessionCallback_t3772093212;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARSessionTrackingChanged
struct internal_ARSessionTrackingChanged_t1988849735;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARAnchorAdded
struct internal_ARAnchorAdded_t1565083332;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARAnchorUpdated
struct internal_ARAnchorUpdated_t2645242205;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARAnchorRemoved
struct internal_ARAnchorRemoved_t3371657877;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARUserAnchorAdded
struct internal_ARUserAnchorAdded_t3285282493;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARUserAnchorUpdated
struct internal_ARUserAnchorUpdated_t3964727538;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARUserAnchorRemoved
struct internal_ARUserAnchorRemoved_t386858594;
// System.Delegate
struct Delegate_t1188392813;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARUserAnchorAdded
struct ARUserAnchorAdded_t1851120876;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARUserAnchorUpdated
struct ARUserAnchorUpdated_t4007601678;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARUserAnchorRemoved
struct ARUserAnchorRemoved_t23344545;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARSessionTrackingChanged
struct ARSessionTrackingChanged_t923029411;
// UnityEngine.XR.iOS.ARKitWorldTrackingSessionConfiguration
struct ARKitWorldTrackingSessionConfiguration_t273386347;
// UnityEngine.XR.iOS.ARKitSessionConfiguration
struct ARKitSessionConfiguration_t629136898;
// UnityEngine.XR.iOS.UnityARHitTestResult
struct UnityARHitTestResult_t4176230866;
// System.Single[]
struct SingleU5BU5D_t1444911251;
// UnityEngine.XR.iOS.ARPlaneAnchor
struct ARPlaneAnchor_t2049372221;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.AsyncCallback
struct AsyncCallback_t3962456242;
// UnityEngine.XR.iOS.ARUserAnchor
struct ARUserAnchor_t1406831531;
// UnityEngine.XR.iOS.UnityARUserAnchorComponent
struct UnityARUserAnchorComponent_t969893952;
// UnityEngine.XR.iOS.UnityARUtility
struct UnityARUtility_t2509807446;
// UnityEngine.MeshFilter
struct MeshFilter_t3523625662;
// UnityEngine.XR.iOS.UnityARVideo
struct UnityARVideo_t1146951207;
// UnityEngine.Rendering.CommandBuffer
struct CommandBuffer_t2206337031;
// UnityEngine.Texture
struct Texture_t3661962703;
// UnityEngine.Material
struct Material_t340375123;
// UnityEngine.Texture2D
struct Texture2D_t3840446185;
// UnityEngine.XR.iOS.UnityRemoteVideo
struct UnityRemoteVideo_t705138647;
// System.Byte[]
struct ByteU5BU5D_t4116647657;
// UnityEngine.XR.iOS.ConnectToEditor
struct ConnectToEditor_t595742893;
// UnityPointCloudExample
struct UnityPointCloudExample_t3649008995;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t2585711361;
// System.Runtime.Serialization.Formatters.Binary.BinaryFormatter
struct BinaryFormatter_t3197753202;
// System.IO.MemoryStream
struct MemoryStream_t94973147;
// System.IO.Stream
struct Stream_t1273022909;
// Utils.serializableARKitInit
struct serializableARKitInit_t3885066048;
// Utils.serializableARSessionConfiguration
struct serializableARSessionConfiguration_t1467016906;
// Utils.serializableFromEditorMessage
struct serializableFromEditorMessage_t3245497382;
// Utils.serializablePointCloud
struct serializablePointCloud_t455238287;
// Utils.serializableUnityARCamera
struct serializableUnityARCamera_t4158151215;
// Utils.serializableUnityARMatrix4x4
struct serializableUnityARMatrix4x4_t78255337;
// Utils.SerializableVector4
struct SerializableVector4_t1862640084;
// Utils.serializableUnityARPlaneAnchor
struct serializableUnityARPlaneAnchor_t1446774435;
// System.Text.Encoding
struct Encoding_t1523322056;
// System.Object[]
struct ObjectU5BU5D_t2843939325;
// VectorEntity
struct VectorEntity_t1410759464;
// System.Text.DecoderFallback
struct DecoderFallback_t3123823036;
// System.Text.EncoderFallback
struct EncoderFallback_t1188251036;
// System.Reflection.Assembly
struct Assembly_t;
// System.Int32[]
struct Int32U5BU5D_t385246372;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t964245573;
// System.String[]
struct StringU5BU5D_t1281789340;
// UnityEngine.XR.iOS.ARPlaneAnchorGameObject[]
struct ARPlaneAnchorGameObjectU5BU5D_t2671880574;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t3954782707;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t950877179;
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,UnityEngine.XR.iOS.ARPlaneAnchorGameObject,System.Collections.DictionaryEntry>
struct Transform_1_t1522292290;
// UnityEngine.MeshCollider
struct MeshCollider_t903564387;
// UnityEngine.XR.iOS.ARHitTestResult[]
struct ARHitTestResultU5BU5D_t3623927455;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3328599146;
// UnityEngine.Mesh
struct Mesh_t3648964284;
// UnityEngine.MeshRenderer
struct MeshRenderer_t587009260;
// Mapbox.Unity.MeshGeneration.Data.VectorFeatureUnity
struct VectorFeatureUnity_t1815898701;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Void
struct Void_t1185182177;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t386037858;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t1677132599;
// System.Runtime.Serialization.SerializationBinder
struct SerializationBinder_t274213469;
// System.Runtime.Serialization.ISurrogateSelector
struct ISurrogateSelector_t3040401154;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t190067161;
// UnityEngine.XR.iOS.UnityARSessionRunOption[]
struct UnityARSessionRunOptionU5BU5D_t4225291891;
// UnityEngine.XR.iOS.UnityARAlignment[]
struct UnityARAlignmentU5BU5D_t3682394155;
// UnityEngine.XR.iOS.UnityARPlaneDetection[]
struct UnityARPlaneDetectionU5BU5D_t3458580926;
// UnityEngine.Networking.PlayerConnection.PlayerConnection
struct PlayerConnection_t3081694049;

extern String_t* _stringLiteral837077870;
extern const uint32_t SubMessageIds_get_editorInitARKit_m3913335846_MetadataUsageId;
extern RuntimeClass* ARFrameUpdate_t1157215840_il2cpp_TypeInfo_var;
extern RuntimeClass* UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Component_GetComponent_TisLight_t3756812086_m916313317_RuntimeMethod_var;
extern const RuntimeMethod* UnityARAmbient_UpdateLightEstimation_m2713847691_RuntimeMethod_var;
extern const uint32_t UnityARAmbient_Start_m4109030088_MetadataUsageId;
extern const uint32_t UnityARAmbient_OnDestroy_m3572932530_MetadataUsageId;
extern RuntimeClass* Marshal_t1757017490_il2cpp_TypeInfo_var;
extern const uint32_t UnityARAnchorData_get_identifierStr_m291226870_MetadataUsageId;
extern RuntimeClass* Matrix4x4_t1817901843_il2cpp_TypeInfo_var;
extern const uint32_t UnityARAnchorData_UnityARAnchorDataFromGameObject_m3823544594_MetadataUsageId;
extern RuntimeClass* Dictionary_2_t1732976114_il2cpp_TypeInfo_var;
extern RuntimeClass* ARAnchorAdded_t1608557165_il2cpp_TypeInfo_var;
extern RuntimeClass* ARAnchorUpdated_t3113222537_il2cpp_TypeInfo_var;
extern RuntimeClass* ARAnchorRemoved_t4030593004_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Dictionary_2__ctor_m3092748208_RuntimeMethod_var;
extern const RuntimeMethod* UnityARAnchorManager_AddAnchor_m66833497_RuntimeMethod_var;
extern const RuntimeMethod* UnityARAnchorManager_UpdateAnchor_m2247086537_RuntimeMethod_var;
extern const RuntimeMethod* UnityARAnchorManager_RemoveAnchor_m1214922587_RuntimeMethod_var;
extern const uint32_t UnityARAnchorManager__ctor_m649673493_MetadataUsageId;
extern RuntimeClass* UnityARUtility_t2509807446_il2cpp_TypeInfo_var;
extern RuntimeClass* ARPlaneAnchorGameObject_t1947719815_il2cpp_TypeInfo_var;
extern const RuntimeMethod* GameObject_AddComponent_TisDontDestroyOnLoad_t1456007215_m2687533065_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_Add_m3454172932_RuntimeMethod_var;
extern const uint32_t UnityARAnchorManager_AddAnchor_m66833497_MetadataUsageId;
extern RuntimeClass* Object_t631007953_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Dictionary_2_ContainsKey_m1916439804_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_get_Item_m1821527627_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_Remove_m2181199409_RuntimeMethod_var;
extern const uint32_t UnityARAnchorManager_RemoveAnchor_m1214922587_MetadataUsageId;
extern const RuntimeMethod* Dictionary_2_set_Item_m3421257586_RuntimeMethod_var;
extern const uint32_t UnityARAnchorManager_UpdateAnchor_m2247086537_MetadataUsageId;
extern const RuntimeMethod* List_1_GetEnumerator_m4069702366_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m3675360547_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m3312335886_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_m2589232868_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_Clear_m1470804087_RuntimeMethod_var;
extern const uint32_t UnityARAnchorManager_Destroy_m3879125245_MetadataUsageId;
extern const RuntimeMethod* Dictionary_2_get_Values_m3625351605_RuntimeMethod_var;
extern const RuntimeMethod* Enumerable_ToList_TisARPlaneAnchorGameObject_t1947719815_m6396406_RuntimeMethod_var;
extern const uint32_t UnityARAnchorManager_GetCurrentPlaneAnchors_m3820916150_MetadataUsageId;
extern RuntimeClass* UnityARAnchorManager_t1557554123_il2cpp_TypeInfo_var;
extern const uint32_t UnityARGeneratePlane_Start_m819352378_MetadataUsageId;
extern const RuntimeMethod* List_1_get_Count_m1432341886_RuntimeMethod_var;
extern const uint32_t UnityARGeneratePlane_OnGUI_m324062377_MetadataUsageId;
extern RuntimeClass* Debug_t3317548046_il2cpp_TypeInfo_var;
extern RuntimeClass* Single_t1397266774_il2cpp_TypeInfo_var;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1_get_Count_m2045149193_RuntimeMethod_var;
extern const RuntimeMethod* List_1_GetEnumerator_m537534021_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m2684230689_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m3228882039_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_m2925904114_RuntimeMethod_var;
extern String_t* _stringLiteral223888751;
extern String_t* _stringLiteral94848434;
extern const uint32_t UnityARHitTestExample_HitTestWithResultType_m1112373859_MetadataUsageId;
extern RuntimeClass* Input_t1431474628_il2cpp_TypeInfo_var;
extern RuntimeClass* Vector2_t2156229523_il2cpp_TypeInfo_var;
extern RuntimeClass* ARHitTestResultTypeU5BU5D_t2695410291_il2cpp_TypeInfo_var;
extern RuntimeField* U3CPrivateImplementationDetailsU3E_t3057255371____U24fieldU2D8E7629AD5AF686202B8CB7C014505C432FFE31E6_1_FieldInfo_var;
extern const uint32_t UnityARHitTestExample_Update_m3374199410_MetadataUsageId;
extern RuntimeClass* UnityARSessionRunOptionU5BU5D_t4225291891_il2cpp_TypeInfo_var;
extern RuntimeClass* UnityARAlignmentU5BU5D_t3682394155_il2cpp_TypeInfo_var;
extern RuntimeClass* UnityARPlaneDetectionU5BU5D_t3458580926_il2cpp_TypeInfo_var;
extern const uint32_t UnityARKitControl__ctor_m1406012851_MetadataUsageId;
extern RuntimeClass* GUI_t1624858472_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral3093431772;
extern String_t* _stringLiteral2707270972;
extern String_t* _stringLiteral3279158741;
extern String_t* _stringLiteral1202628600;
extern String_t* _stringLiteral514893628;
extern String_t* _stringLiteral3031800000;
extern String_t* _stringLiteral2791739702;
extern String_t* _stringLiteral1205769173;
extern String_t* _stringLiteral3170031834;
extern String_t* _stringLiteral3670053048;
extern String_t* _stringLiteral3041351855;
extern String_t* _stringLiteral1448827553;
extern String_t* _stringLiteral1828639942;
extern String_t* _stringLiteral921768783;
extern const uint32_t UnityARKitControl_OnGUI_m1112791986_MetadataUsageId;
extern RuntimeClass* Vector4_t3319028937_il2cpp_TypeInfo_var;
extern const uint32_t UnityARMatrixOps_GetPosition_m296874797_MetadataUsageId;
extern RuntimeClass* Mathf_t3464937446_il2cpp_TypeInfo_var;
extern const uint32_t UnityARMatrixOps_QuaternionFromMatrix_m2540065465_MetadataUsageId;
extern RuntimeClass* internal_ARFrameUpdate_t3254989823_il2cpp_TypeInfo_var;
extern RuntimeClass* ARSessionFailed_t2125002991_il2cpp_TypeInfo_var;
extern RuntimeClass* ARSessionCallback_t3772093212_il2cpp_TypeInfo_var;
extern RuntimeClass* internal_ARSessionTrackingChanged_t1988849735_il2cpp_TypeInfo_var;
extern RuntimeClass* internal_ARAnchorAdded_t1565083332_il2cpp_TypeInfo_var;
extern RuntimeClass* internal_ARAnchorUpdated_t2645242205_il2cpp_TypeInfo_var;
extern RuntimeClass* internal_ARAnchorRemoved_t3371657877_il2cpp_TypeInfo_var;
extern RuntimeClass* internal_ARUserAnchorAdded_t3285282493_il2cpp_TypeInfo_var;
extern RuntimeClass* internal_ARUserAnchorUpdated_t3964727538_il2cpp_TypeInfo_var;
extern RuntimeClass* internal_ARUserAnchorRemoved_t386858594_il2cpp_TypeInfo_var;
extern const RuntimeMethod* UnityARSessionNativeInterface__frame_update_m1185891212_RuntimeMethod_var;
extern const RuntimeMethod* UnityARSessionNativeInterface__ar_session_failed_m3752069079_RuntimeMethod_var;
extern const RuntimeMethod* UnityARSessionNativeInterface__ar_session_interrupted_m3485826967_RuntimeMethod_var;
extern const RuntimeMethod* UnityARSessionNativeInterface__ar_session_interruption_ended_m3467125083_RuntimeMethod_var;
extern const RuntimeMethod* UnityARSessionNativeInterface__ar_tracking_changed_m2779841264_RuntimeMethod_var;
extern const RuntimeMethod* UnityARSessionNativeInterface__anchor_added_m2468825111_RuntimeMethod_var;
extern const RuntimeMethod* UnityARSessionNativeInterface__anchor_updated_m1758166972_RuntimeMethod_var;
extern const RuntimeMethod* UnityARSessionNativeInterface__anchor_removed_m124050222_RuntimeMethod_var;
extern const RuntimeMethod* UnityARSessionNativeInterface__user_anchor_added_m3126812148_RuntimeMethod_var;
extern const RuntimeMethod* UnityARSessionNativeInterface__user_anchor_updated_m2680404376_RuntimeMethod_var;
extern const RuntimeMethod* UnityARSessionNativeInterface__user_anchor_removed_m3345544012_RuntimeMethod_var;
extern const uint32_t UnityARSessionNativeInterface__ctor_m1227468240_MetadataUsageId;
extern const uint32_t UnityARSessionNativeInterface_add_ARFrameUpdatedEvent_m3366057771_MetadataUsageId;
extern const uint32_t UnityARSessionNativeInterface_remove_ARFrameUpdatedEvent_m772523965_MetadataUsageId;
extern const uint32_t UnityARSessionNativeInterface_add_ARAnchorAddedEvent_m922239177_MetadataUsageId;
extern const uint32_t UnityARSessionNativeInterface_remove_ARAnchorAddedEvent_m2374006692_MetadataUsageId;
extern const uint32_t UnityARSessionNativeInterface_add_ARAnchorUpdatedEvent_m421321882_MetadataUsageId;
extern const uint32_t UnityARSessionNativeInterface_remove_ARAnchorUpdatedEvent_m4118655981_MetadataUsageId;
extern const uint32_t UnityARSessionNativeInterface_add_ARAnchorRemovedEvent_m3581175116_MetadataUsageId;
extern const uint32_t UnityARSessionNativeInterface_remove_ARAnchorRemovedEvent_m2910582281_MetadataUsageId;
extern RuntimeClass* ARUserAnchorAdded_t1851120876_il2cpp_TypeInfo_var;
extern const uint32_t UnityARSessionNativeInterface_add_ARUserAnchorAddedEvent_m1848350236_MetadataUsageId;
extern const uint32_t UnityARSessionNativeInterface_remove_ARUserAnchorAddedEvent_m1231012938_MetadataUsageId;
extern RuntimeClass* ARUserAnchorUpdated_t4007601678_il2cpp_TypeInfo_var;
extern const uint32_t UnityARSessionNativeInterface_add_ARUserAnchorUpdatedEvent_m3620938119_MetadataUsageId;
extern const uint32_t UnityARSessionNativeInterface_remove_ARUserAnchorUpdatedEvent_m2181757746_MetadataUsageId;
extern RuntimeClass* ARUserAnchorRemoved_t23344545_il2cpp_TypeInfo_var;
extern const uint32_t UnityARSessionNativeInterface_add_ARUserAnchorRemovedEvent_m3520224501_MetadataUsageId;
extern const uint32_t UnityARSessionNativeInterface_remove_ARUserAnchorRemovedEvent_m2042627006_MetadataUsageId;
extern const uint32_t UnityARSessionNativeInterface_add_ARSessionFailedEvent_m3438676870_MetadataUsageId;
extern const uint32_t UnityARSessionNativeInterface_remove_ARSessionFailedEvent_m3961525176_MetadataUsageId;
extern const uint32_t UnityARSessionNativeInterface_add_ARSessionInterruptedEvent_m1341774292_MetadataUsageId;
extern const uint32_t UnityARSessionNativeInterface_remove_ARSessionInterruptedEvent_m3672185323_MetadataUsageId;
extern const uint32_t UnityARSessionNativeInterface_add_ARSessioninterruptionEndedEvent_m2329806717_MetadataUsageId;
extern const uint32_t UnityARSessionNativeInterface_remove_ARSessioninterruptionEndedEvent_m2542669179_MetadataUsageId;
extern RuntimeClass* ARSessionTrackingChanged_t923029411_il2cpp_TypeInfo_var;
extern const uint32_t UnityARSessionNativeInterface_add_ARSessionTrackingChangedEvent_m3513398551_MetadataUsageId;
extern const uint32_t UnityARSessionNativeInterface_remove_ARSessionTrackingChangedEvent_m1677052138_MetadataUsageId;
struct ARKitWorldTrackingSessionConfiguration_t273386347_marshaled_pinvoke;
struct ARKitWorldTrackingSessionConfiguration_t273386347;;
struct ARKitWorldTrackingSessionConfiguration_t273386347_marshaled_pinvoke;;
struct ARKitSessionConfiguration_t629136898_marshaled_pinvoke;
struct ARKitSessionConfiguration_t629136898;;
struct ARKitSessionConfiguration_t629136898_marshaled_pinvoke;;
struct UnityARHitTestResult_t4176230866_marshaled_pinvoke;
struct UnityARHitTestResult_t4176230866;;
struct UnityARHitTestResult_t4176230866_marshaled_pinvoke;;
extern const uint32_t UnityARSessionNativeInterface_GetARSessionNativeInterface_m1118592565_MetadataUsageId;
extern const uint32_t UnityARSessionNativeInterface_GetCameraPose_m3952905780_MetadataUsageId;
extern const uint32_t UnityARSessionNativeInterface_GetCameraProjection_m908752819_MetadataUsageId;
extern const uint32_t UnityARSessionNativeInterface_SetCameraClipPlanes_m252007767_MetadataUsageId;
extern const uint32_t UnityARSessionNativeInterface_SetCapturePixelData_m3385125279_MetadataUsageId;
extern const uint32_t UnityARSessionNativeInterface__frame_update_m1185891212_MetadataUsageId;
extern const uint32_t UnityARSessionNativeInterface__ar_tracking_changed_m2779841264_MetadataUsageId;
extern RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
extern RuntimeClass* SingleU5BU5D_t1444911251_il2cpp_TypeInfo_var;
extern RuntimeClass* Vector3U5BU5D_t1718750761_il2cpp_TypeInfo_var;
extern const uint32_t UnityARSessionNativeInterface_UpdatePointCloudData_m745059285_MetadataUsageId;
extern const uint32_t UnityARSessionNativeInterface_GetPlaneAnchorFromAnchorData_m2570782633_MetadataUsageId;
extern const uint32_t UnityARSessionNativeInterface_GetUserAnchorFromAnchorData_m3565353041_MetadataUsageId;
extern const uint32_t UnityARSessionNativeInterface_GetHitTestResultFromResultData_m657555234_MetadataUsageId;
extern const uint32_t UnityARSessionNativeInterface__anchor_added_m2468825111_MetadataUsageId;
extern const uint32_t UnityARSessionNativeInterface__anchor_updated_m1758166972_MetadataUsageId;
extern const uint32_t UnityARSessionNativeInterface__anchor_removed_m124050222_MetadataUsageId;
extern const uint32_t UnityARSessionNativeInterface__user_anchor_added_m3126812148_MetadataUsageId;
extern const uint32_t UnityARSessionNativeInterface__user_anchor_updated_m2680404376_MetadataUsageId;
extern const uint32_t UnityARSessionNativeInterface__user_anchor_removed_m3345544012_MetadataUsageId;
extern const uint32_t UnityARSessionNativeInterface__ar_session_failed_m3752069079_MetadataUsageId;
extern String_t* _stringLiteral3418950510;
extern const uint32_t UnityARSessionNativeInterface__ar_session_interrupted_m3485826967_MetadataUsageId;
extern String_t* _stringLiteral2932545360;
extern const uint32_t UnityARSessionNativeInterface__ar_session_interruption_ended_m3467125083_MetadataUsageId;
extern const uint32_t UnityARSessionNativeInterface_RunWithConfigAndOptions_m2136170177_MetadataUsageId;
extern const uint32_t UnityARSessionNativeInterface_RunWithConfig_m2250923232_MetadataUsageId;
extern const uint32_t UnityARSessionNativeInterface_RunWithConfigAndOptions_m3338577758_MetadataUsageId;
extern const uint32_t UnityARSessionNativeInterface_RunWithConfig_m2219734809_MetadataUsageId;
extern const uint32_t UnityARSessionNativeInterface_Pause_m777408908_MetadataUsageId;
extern RuntimeClass* List_1_t2751098672_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1__ctor_m3908426868_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m344229034_RuntimeMethod_var;
extern const uint32_t UnityARSessionNativeInterface_HitTest_m4212263537_MetadataUsageId;
extern const uint32_t UnityARSessionNativeInterface_GetARVideoTextureHandles_m1964002027_MetadataUsageId;
extern const uint32_t UnityARSessionNativeInterface_GetARAmbientIntensity_m3197634932_MetadataUsageId;
extern const uint32_t UnityARSessionNativeInterface_GetARTrackingQuality_m3088238929_MetadataUsageId;
extern const uint32_t UnityARSessionNativeInterface_AddUserAnchor_m2992758378_MetadataUsageId;
extern const uint32_t UnityARSessionNativeInterface_RemoveUserAnchor_m1246452311_MetadataUsageId;
struct ARPlaneAnchor_t2049372221_marshaled_pinvoke;
struct ARPlaneAnchor_t2049372221;;
struct ARPlaneAnchor_t2049372221_marshaled_pinvoke;;
extern RuntimeClass* ARPlaneAnchor_t2049372221_il2cpp_TypeInfo_var;
extern const uint32_t ARAnchorAdded_BeginInvoke_m2725108197_MetadataUsageId;
extern const uint32_t ARAnchorRemoved_BeginInvoke_m495283272_MetadataUsageId;
extern const uint32_t ARAnchorUpdated_BeginInvoke_m2773603932_MetadataUsageId;
extern RuntimeClass* UnityARCamera_t2069150450_il2cpp_TypeInfo_var;
extern const uint32_t ARFrameUpdate_BeginInvoke_m1285835900_MetadataUsageId;
extern const uint32_t ARSessionTrackingChanged_BeginInvoke_m3230226342_MetadataUsageId;
struct ARUserAnchor_t1406831531_marshaled_pinvoke;
struct ARUserAnchor_t1406831531;;
struct ARUserAnchor_t1406831531_marshaled_pinvoke;;
extern RuntimeClass* ARUserAnchor_t1406831531_il2cpp_TypeInfo_var;
extern const uint32_t ARUserAnchorAdded_BeginInvoke_m4131496474_MetadataUsageId;
extern const uint32_t ARUserAnchorRemoved_BeginInvoke_m1997264703_MetadataUsageId;
extern const uint32_t ARUserAnchorUpdated_BeginInvoke_m1530922700_MetadataUsageId;
extern RuntimeClass* UnityARAnchorData_t1157236668_il2cpp_TypeInfo_var;
extern const uint32_t internal_ARAnchorAdded_BeginInvoke_m4199645137_MetadataUsageId;
extern const uint32_t internal_ARAnchorRemoved_BeginInvoke_m2416400457_MetadataUsageId;
extern const uint32_t internal_ARAnchorUpdated_BeginInvoke_m3288631253_MetadataUsageId;
extern RuntimeClass* internal_UnityARCamera_t3920739388_il2cpp_TypeInfo_var;
extern const uint32_t internal_ARFrameUpdate_BeginInvoke_m2334992139_MetadataUsageId;
extern const uint32_t internal_ARSessionTrackingChanged_BeginInvoke_m453410478_MetadataUsageId;
extern RuntimeClass* UnityARUserAnchorData_t1976826249_il2cpp_TypeInfo_var;
extern const uint32_t internal_ARUserAnchorAdded_BeginInvoke_m3896873928_MetadataUsageId;
extern const uint32_t internal_ARUserAnchorRemoved_BeginInvoke_m2511948604_MetadataUsageId;
extern const uint32_t internal_ARUserAnchorUpdated_BeginInvoke_m3665399959_MetadataUsageId;
extern const RuntimeMethod* UnityARUserAnchorComponent_GameObjectAnchorUpdated_m1750428080_RuntimeMethod_var;
extern const RuntimeMethod* UnityARUserAnchorComponent_AnchorRemoved_m2099527927_RuntimeMethod_var;
extern const uint32_t UnityARUserAnchorComponent_Awake_m1256671643_MetadataUsageId;
extern const uint32_t UnityARUserAnchorComponent_AnchorRemoved_m2099527927_MetadataUsageId;
extern const uint32_t UnityARUserAnchorComponent_OnDestroy_m1550181455_MetadataUsageId;
extern const uint32_t UnityARUserAnchorData_get_identifierStr_m122781054_MetadataUsageId;
extern const uint32_t UnityARUserAnchorData_UnityARUserAnchorDataFromGameObject_m1971953404_MetadataUsageId;
extern const uint32_t UnityARUtility_InitializePlanePrefab_m2291423040_MetadataUsageId;
extern RuntimeClass* GameObject_t1113636619_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Object_Instantiate_TisGameObject_t1113636619_m4070250708_RuntimeMethod_var;
extern const uint32_t UnityARUtility_CreatePlaneInScene_m2158801296_MetadataUsageId;
extern const RuntimeMethod* GameObject_GetComponentInChildren_TisMeshFilter_t3523625662_m478508368_RuntimeMethod_var;
extern const uint32_t UnityARUtility_UpdatePlaneWithAnchorTransform_m2954036282_MetadataUsageId;
extern const RuntimeMethod* UnityARVideo_UpdateFrame_m3975841991_RuntimeMethod_var;
extern const uint32_t UnityARVideo_Start_m3116293614_MetadataUsageId;
extern RuntimeClass* CommandBuffer_t2206337031_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Component_GetComponent_TisCamera_t4157153871_m1557787507_RuntimeMethod_var;
extern const uint32_t UnityARVideo_InitializeCommandBuffer_m1538546596_MetadataUsageId;
extern const uint32_t UnityARVideo_OnDestroy_m4099270667_MetadataUsageId;
extern String_t* _stringLiteral2313301283;
extern String_t* _stringLiteral3606922194;
extern String_t* _stringLiteral1055189311;
extern const uint32_t UnityARVideo_OnPreRender_m1315675298_MetadataUsageId;
extern const RuntimeMethod* UnityRemoteVideo_UpdateCamera_m873484480_RuntimeMethod_var;
extern const uint32_t UnityRemoteVideo_Start_m768447242_MetadataUsageId;
extern const uint32_t UnityRemoteVideo_UpdateCamera_m873484480_MetadataUsageId;
extern RuntimeClass* ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var;
extern const uint32_t UnityRemoteVideo_InitializeTextures_m1227954273_MetadataUsageId;
extern const uint32_t UnityRemoteVideo_OnDestroy_m2450575749_MetadataUsageId;
extern const uint32_t UnityRemoteVideo_OnPreRender_m1591030712_MetadataUsageId;
extern RuntimeClass* List_1_t2585711361_il2cpp_TypeInfo_var;
extern const RuntimeMethod* UnityPointCloudExample_ARFrameUpdated_m3531421433_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m1424466557_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m2765963565_RuntimeMethod_var;
extern const uint32_t UnityPointCloudExample_Start_m4202814548_MetadataUsageId;
extern const RuntimeMethod* List_1_get_Item_m3743125852_RuntimeMethod_var;
extern const uint32_t UnityPointCloudExample_Update_m3072589646_MetadataUsageId;
extern RuntimeClass* BinaryFormatter_t3197753202_il2cpp_TypeInfo_var;
extern RuntimeClass* MemoryStream_t94973147_il2cpp_TypeInfo_var;
extern RuntimeClass* IDisposable_t3640265483_il2cpp_TypeInfo_var;
extern const uint32_t ObjectSerializationExtension_SerializeToByteArray_m579578536_MetadataUsageId;
extern RuntimeClass* serializableARSessionConfiguration_t1467016906_il2cpp_TypeInfo_var;
extern const uint32_t serializableARSessionConfiguration_op_Implicit_m1556611494_MetadataUsageId;
extern RuntimeClass* BitConverter_t3118986983_il2cpp_TypeInfo_var;
extern RuntimeClass* serializablePointCloud_t455238287_il2cpp_TypeInfo_var;
extern const uint32_t serializablePointCloud_op_Implicit_m463505948_MetadataUsageId;
extern const uint32_t serializablePointCloud_op_Implicit_m1866692932_MetadataUsageId;
extern RuntimeClass* serializableUnityARCamera_t4158151215_il2cpp_TypeInfo_var;
extern const uint32_t serializableUnityARCamera_op_Implicit_m1598722366_MetadataUsageId;
extern RuntimeClass* serializableUnityARMatrix4x4_t78255337_il2cpp_TypeInfo_var;
extern const uint32_t serializableUnityARMatrix4x4_op_Implicit_m3630501456_MetadataUsageId;
extern const uint32_t serializableUnityARMatrix4x4_op_Implicit_m3556108972_MetadataUsageId;
extern RuntimeClass* SerializableVector4_t1862640084_il2cpp_TypeInfo_var;
extern RuntimeClass* Encoding_t1523322056_il2cpp_TypeInfo_var;
extern RuntimeClass* serializableUnityARPlaneAnchor_t1446774435_il2cpp_TypeInfo_var;
extern const uint32_t serializableUnityARPlaneAnchor_op_Implicit_m57666075_MetadataUsageId;
extern const uint32_t serializableUnityARPlaneAnchor_op_Implicit_m217596632_MetadataUsageId;
extern RuntimeClass* ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral1432570861;
extern const uint32_t SerializableVector4_ToString_m70901593_MetadataUsageId;
extern const uint32_t SerializableVector4_op_Implicit_m14360340_MetadataUsageId;
struct Vector3_t3722313464 ;

struct Vector3U5BU5D_t1718750761;
struct ARHitTestResultTypeU5BU5D_t2695410291;
struct UnityARSessionRunOptionU5BU5D_t4225291891;
struct UnityARAlignmentU5BU5D_t3682394155;
struct UnityARPlaneDetectionU5BU5D_t3458580926;
struct SingleU5BU5D_t1444911251;
struct ByteU5BU5D_t4116647657;
struct ObjectU5BU5D_t2843939325;


#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef STREAM_T1273022909_H
#define STREAM_T1273022909_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.Stream
struct  Stream_t1273022909  : public RuntimeObject
{
public:

public:
};

struct Stream_t1273022909_StaticFields
{
public:
	// System.IO.Stream System.IO.Stream::Null
	Stream_t1273022909 * ___Null_0;

public:
	inline static int32_t get_offset_of_Null_0() { return static_cast<int32_t>(offsetof(Stream_t1273022909_StaticFields, ___Null_0)); }
	inline Stream_t1273022909 * get_Null_0() const { return ___Null_0; }
	inline Stream_t1273022909 ** get_address_of_Null_0() { return &___Null_0; }
	inline void set_Null_0(Stream_t1273022909 * value)
	{
		___Null_0 = value;
		Il2CppCodeGenWriteBarrier((&___Null_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STREAM_T1273022909_H
#ifndef UNITYARANCHORMANAGER_T1557554123_H
#define UNITYARANCHORMANAGER_T1557554123_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARAnchorManager
struct  UnityARAnchorManager_t1557554123  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.XR.iOS.ARPlaneAnchorGameObject> UnityEngine.XR.iOS.UnityARAnchorManager::planeAnchorMap
	Dictionary_2_t1732976114 * ___planeAnchorMap_0;

public:
	inline static int32_t get_offset_of_planeAnchorMap_0() { return static_cast<int32_t>(offsetof(UnityARAnchorManager_t1557554123, ___planeAnchorMap_0)); }
	inline Dictionary_2_t1732976114 * get_planeAnchorMap_0() const { return ___planeAnchorMap_0; }
	inline Dictionary_2_t1732976114 ** get_address_of_planeAnchorMap_0() { return &___planeAnchorMap_0; }
	inline void set_planeAnchorMap_0(Dictionary_2_t1732976114 * value)
	{
		___planeAnchorMap_0 = value;
		Il2CppCodeGenWriteBarrier((&___planeAnchorMap_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYARANCHORMANAGER_T1557554123_H
#ifndef SERIALIZABLEPOINTCLOUD_T455238287_H
#define SERIALIZABLEPOINTCLOUD_T455238287_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Utils.serializablePointCloud
struct  serializablePointCloud_t455238287  : public RuntimeObject
{
public:
	// System.Byte[] Utils.serializablePointCloud::pointCloudData
	ByteU5BU5D_t4116647657* ___pointCloudData_0;

public:
	inline static int32_t get_offset_of_pointCloudData_0() { return static_cast<int32_t>(offsetof(serializablePointCloud_t455238287, ___pointCloudData_0)); }
	inline ByteU5BU5D_t4116647657* get_pointCloudData_0() const { return ___pointCloudData_0; }
	inline ByteU5BU5D_t4116647657** get_address_of_pointCloudData_0() { return &___pointCloudData_0; }
	inline void set_pointCloudData_0(ByteU5BU5D_t4116647657* value)
	{
		___pointCloudData_0 = value;
		Il2CppCodeGenWriteBarrier((&___pointCloudData_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZABLEPOINTCLOUD_T455238287_H
#ifndef SERIALIZABLEUNITYARMATRIX4X4_T78255337_H
#define SERIALIZABLEUNITYARMATRIX4X4_T78255337_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Utils.serializableUnityARMatrix4x4
struct  serializableUnityARMatrix4x4_t78255337  : public RuntimeObject
{
public:
	// Utils.SerializableVector4 Utils.serializableUnityARMatrix4x4::column0
	SerializableVector4_t1862640084 * ___column0_0;
	// Utils.SerializableVector4 Utils.serializableUnityARMatrix4x4::column1
	SerializableVector4_t1862640084 * ___column1_1;
	// Utils.SerializableVector4 Utils.serializableUnityARMatrix4x4::column2
	SerializableVector4_t1862640084 * ___column2_2;
	// Utils.SerializableVector4 Utils.serializableUnityARMatrix4x4::column3
	SerializableVector4_t1862640084 * ___column3_3;

public:
	inline static int32_t get_offset_of_column0_0() { return static_cast<int32_t>(offsetof(serializableUnityARMatrix4x4_t78255337, ___column0_0)); }
	inline SerializableVector4_t1862640084 * get_column0_0() const { return ___column0_0; }
	inline SerializableVector4_t1862640084 ** get_address_of_column0_0() { return &___column0_0; }
	inline void set_column0_0(SerializableVector4_t1862640084 * value)
	{
		___column0_0 = value;
		Il2CppCodeGenWriteBarrier((&___column0_0), value);
	}

	inline static int32_t get_offset_of_column1_1() { return static_cast<int32_t>(offsetof(serializableUnityARMatrix4x4_t78255337, ___column1_1)); }
	inline SerializableVector4_t1862640084 * get_column1_1() const { return ___column1_1; }
	inline SerializableVector4_t1862640084 ** get_address_of_column1_1() { return &___column1_1; }
	inline void set_column1_1(SerializableVector4_t1862640084 * value)
	{
		___column1_1 = value;
		Il2CppCodeGenWriteBarrier((&___column1_1), value);
	}

	inline static int32_t get_offset_of_column2_2() { return static_cast<int32_t>(offsetof(serializableUnityARMatrix4x4_t78255337, ___column2_2)); }
	inline SerializableVector4_t1862640084 * get_column2_2() const { return ___column2_2; }
	inline SerializableVector4_t1862640084 ** get_address_of_column2_2() { return &___column2_2; }
	inline void set_column2_2(SerializableVector4_t1862640084 * value)
	{
		___column2_2 = value;
		Il2CppCodeGenWriteBarrier((&___column2_2), value);
	}

	inline static int32_t get_offset_of_column3_3() { return static_cast<int32_t>(offsetof(serializableUnityARMatrix4x4_t78255337, ___column3_3)); }
	inline SerializableVector4_t1862640084 * get_column3_3() const { return ___column3_3; }
	inline SerializableVector4_t1862640084 ** get_address_of_column3_3() { return &___column3_3; }
	inline void set_column3_3(SerializableVector4_t1862640084 * value)
	{
		___column3_3 = value;
		Il2CppCodeGenWriteBarrier((&___column3_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZABLEUNITYARMATRIX4X4_T78255337_H
#ifndef SERIALIZABLEVECTOR4_T1862640084_H
#define SERIALIZABLEVECTOR4_T1862640084_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Utils.SerializableVector4
struct  SerializableVector4_t1862640084  : public RuntimeObject
{
public:
	// System.Single Utils.SerializableVector4::x
	float ___x_0;
	// System.Single Utils.SerializableVector4::y
	float ___y_1;
	// System.Single Utils.SerializableVector4::z
	float ___z_2;
	// System.Single Utils.SerializableVector4::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(SerializableVector4_t1862640084, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(SerializableVector4_t1862640084, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(SerializableVector4_t1862640084, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(SerializableVector4_t1862640084, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZABLEVECTOR4_T1862640084_H
#ifndef ENCODING_T1523322056_H
#define ENCODING_T1523322056_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.Encoding
struct  Encoding_t1523322056  : public RuntimeObject
{
public:
	// System.Int32 System.Text.Encoding::codePage
	int32_t ___codePage_0;
	// System.Int32 System.Text.Encoding::windows_code_page
	int32_t ___windows_code_page_1;
	// System.Boolean System.Text.Encoding::is_readonly
	bool ___is_readonly_2;
	// System.Text.DecoderFallback System.Text.Encoding::decoder_fallback
	DecoderFallback_t3123823036 * ___decoder_fallback_3;
	// System.Text.EncoderFallback System.Text.Encoding::encoder_fallback
	EncoderFallback_t1188251036 * ___encoder_fallback_4;
	// System.String System.Text.Encoding::body_name
	String_t* ___body_name_8;
	// System.String System.Text.Encoding::encoding_name
	String_t* ___encoding_name_9;
	// System.String System.Text.Encoding::header_name
	String_t* ___header_name_10;
	// System.Boolean System.Text.Encoding::is_mail_news_display
	bool ___is_mail_news_display_11;
	// System.Boolean System.Text.Encoding::is_mail_news_save
	bool ___is_mail_news_save_12;
	// System.Boolean System.Text.Encoding::is_browser_save
	bool ___is_browser_save_13;
	// System.Boolean System.Text.Encoding::is_browser_display
	bool ___is_browser_display_14;
	// System.String System.Text.Encoding::web_name
	String_t* ___web_name_15;

public:
	inline static int32_t get_offset_of_codePage_0() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___codePage_0)); }
	inline int32_t get_codePage_0() const { return ___codePage_0; }
	inline int32_t* get_address_of_codePage_0() { return &___codePage_0; }
	inline void set_codePage_0(int32_t value)
	{
		___codePage_0 = value;
	}

	inline static int32_t get_offset_of_windows_code_page_1() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___windows_code_page_1)); }
	inline int32_t get_windows_code_page_1() const { return ___windows_code_page_1; }
	inline int32_t* get_address_of_windows_code_page_1() { return &___windows_code_page_1; }
	inline void set_windows_code_page_1(int32_t value)
	{
		___windows_code_page_1 = value;
	}

	inline static int32_t get_offset_of_is_readonly_2() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___is_readonly_2)); }
	inline bool get_is_readonly_2() const { return ___is_readonly_2; }
	inline bool* get_address_of_is_readonly_2() { return &___is_readonly_2; }
	inline void set_is_readonly_2(bool value)
	{
		___is_readonly_2 = value;
	}

	inline static int32_t get_offset_of_decoder_fallback_3() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___decoder_fallback_3)); }
	inline DecoderFallback_t3123823036 * get_decoder_fallback_3() const { return ___decoder_fallback_3; }
	inline DecoderFallback_t3123823036 ** get_address_of_decoder_fallback_3() { return &___decoder_fallback_3; }
	inline void set_decoder_fallback_3(DecoderFallback_t3123823036 * value)
	{
		___decoder_fallback_3 = value;
		Il2CppCodeGenWriteBarrier((&___decoder_fallback_3), value);
	}

	inline static int32_t get_offset_of_encoder_fallback_4() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___encoder_fallback_4)); }
	inline EncoderFallback_t1188251036 * get_encoder_fallback_4() const { return ___encoder_fallback_4; }
	inline EncoderFallback_t1188251036 ** get_address_of_encoder_fallback_4() { return &___encoder_fallback_4; }
	inline void set_encoder_fallback_4(EncoderFallback_t1188251036 * value)
	{
		___encoder_fallback_4 = value;
		Il2CppCodeGenWriteBarrier((&___encoder_fallback_4), value);
	}

	inline static int32_t get_offset_of_body_name_8() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___body_name_8)); }
	inline String_t* get_body_name_8() const { return ___body_name_8; }
	inline String_t** get_address_of_body_name_8() { return &___body_name_8; }
	inline void set_body_name_8(String_t* value)
	{
		___body_name_8 = value;
		Il2CppCodeGenWriteBarrier((&___body_name_8), value);
	}

	inline static int32_t get_offset_of_encoding_name_9() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___encoding_name_9)); }
	inline String_t* get_encoding_name_9() const { return ___encoding_name_9; }
	inline String_t** get_address_of_encoding_name_9() { return &___encoding_name_9; }
	inline void set_encoding_name_9(String_t* value)
	{
		___encoding_name_9 = value;
		Il2CppCodeGenWriteBarrier((&___encoding_name_9), value);
	}

	inline static int32_t get_offset_of_header_name_10() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___header_name_10)); }
	inline String_t* get_header_name_10() const { return ___header_name_10; }
	inline String_t** get_address_of_header_name_10() { return &___header_name_10; }
	inline void set_header_name_10(String_t* value)
	{
		___header_name_10 = value;
		Il2CppCodeGenWriteBarrier((&___header_name_10), value);
	}

	inline static int32_t get_offset_of_is_mail_news_display_11() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___is_mail_news_display_11)); }
	inline bool get_is_mail_news_display_11() const { return ___is_mail_news_display_11; }
	inline bool* get_address_of_is_mail_news_display_11() { return &___is_mail_news_display_11; }
	inline void set_is_mail_news_display_11(bool value)
	{
		___is_mail_news_display_11 = value;
	}

	inline static int32_t get_offset_of_is_mail_news_save_12() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___is_mail_news_save_12)); }
	inline bool get_is_mail_news_save_12() const { return ___is_mail_news_save_12; }
	inline bool* get_address_of_is_mail_news_save_12() { return &___is_mail_news_save_12; }
	inline void set_is_mail_news_save_12(bool value)
	{
		___is_mail_news_save_12 = value;
	}

	inline static int32_t get_offset_of_is_browser_save_13() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___is_browser_save_13)); }
	inline bool get_is_browser_save_13() const { return ___is_browser_save_13; }
	inline bool* get_address_of_is_browser_save_13() { return &___is_browser_save_13; }
	inline void set_is_browser_save_13(bool value)
	{
		___is_browser_save_13 = value;
	}

	inline static int32_t get_offset_of_is_browser_display_14() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___is_browser_display_14)); }
	inline bool get_is_browser_display_14() const { return ___is_browser_display_14; }
	inline bool* get_address_of_is_browser_display_14() { return &___is_browser_display_14; }
	inline void set_is_browser_display_14(bool value)
	{
		___is_browser_display_14 = value;
	}

	inline static int32_t get_offset_of_web_name_15() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___web_name_15)); }
	inline String_t* get_web_name_15() const { return ___web_name_15; }
	inline String_t** get_address_of_web_name_15() { return &___web_name_15; }
	inline void set_web_name_15(String_t* value)
	{
		___web_name_15 = value;
		Il2CppCodeGenWriteBarrier((&___web_name_15), value);
	}
};

struct Encoding_t1523322056_StaticFields
{
public:
	// System.Reflection.Assembly System.Text.Encoding::i18nAssembly
	Assembly_t * ___i18nAssembly_5;
	// System.Boolean System.Text.Encoding::i18nDisabled
	bool ___i18nDisabled_6;
	// System.Object[] System.Text.Encoding::encodings
	ObjectU5BU5D_t2843939325* ___encodings_7;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_t1523322056 * ___asciiEncoding_16;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianEncoding
	Encoding_t1523322056 * ___bigEndianEncoding_17;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_t1523322056 * ___defaultEncoding_18;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_t1523322056 * ___utf7Encoding_19;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8EncodingWithMarkers
	Encoding_t1523322056 * ___utf8EncodingWithMarkers_20;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8EncodingWithoutMarkers
	Encoding_t1523322056 * ___utf8EncodingWithoutMarkers_21;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_t1523322056 * ___unicodeEncoding_22;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::isoLatin1Encoding
	Encoding_t1523322056 * ___isoLatin1Encoding_23;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8EncodingUnsafe
	Encoding_t1523322056 * ___utf8EncodingUnsafe_24;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_t1523322056 * ___utf32Encoding_25;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUTF32Encoding
	Encoding_t1523322056 * ___bigEndianUTF32Encoding_26;
	// System.Object System.Text.Encoding::lockobj
	RuntimeObject * ___lockobj_27;

public:
	inline static int32_t get_offset_of_i18nAssembly_5() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___i18nAssembly_5)); }
	inline Assembly_t * get_i18nAssembly_5() const { return ___i18nAssembly_5; }
	inline Assembly_t ** get_address_of_i18nAssembly_5() { return &___i18nAssembly_5; }
	inline void set_i18nAssembly_5(Assembly_t * value)
	{
		___i18nAssembly_5 = value;
		Il2CppCodeGenWriteBarrier((&___i18nAssembly_5), value);
	}

	inline static int32_t get_offset_of_i18nDisabled_6() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___i18nDisabled_6)); }
	inline bool get_i18nDisabled_6() const { return ___i18nDisabled_6; }
	inline bool* get_address_of_i18nDisabled_6() { return &___i18nDisabled_6; }
	inline void set_i18nDisabled_6(bool value)
	{
		___i18nDisabled_6 = value;
	}

	inline static int32_t get_offset_of_encodings_7() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___encodings_7)); }
	inline ObjectU5BU5D_t2843939325* get_encodings_7() const { return ___encodings_7; }
	inline ObjectU5BU5D_t2843939325** get_address_of_encodings_7() { return &___encodings_7; }
	inline void set_encodings_7(ObjectU5BU5D_t2843939325* value)
	{
		___encodings_7 = value;
		Il2CppCodeGenWriteBarrier((&___encodings_7), value);
	}

	inline static int32_t get_offset_of_asciiEncoding_16() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___asciiEncoding_16)); }
	inline Encoding_t1523322056 * get_asciiEncoding_16() const { return ___asciiEncoding_16; }
	inline Encoding_t1523322056 ** get_address_of_asciiEncoding_16() { return &___asciiEncoding_16; }
	inline void set_asciiEncoding_16(Encoding_t1523322056 * value)
	{
		___asciiEncoding_16 = value;
		Il2CppCodeGenWriteBarrier((&___asciiEncoding_16), value);
	}

	inline static int32_t get_offset_of_bigEndianEncoding_17() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___bigEndianEncoding_17)); }
	inline Encoding_t1523322056 * get_bigEndianEncoding_17() const { return ___bigEndianEncoding_17; }
	inline Encoding_t1523322056 ** get_address_of_bigEndianEncoding_17() { return &___bigEndianEncoding_17; }
	inline void set_bigEndianEncoding_17(Encoding_t1523322056 * value)
	{
		___bigEndianEncoding_17 = value;
		Il2CppCodeGenWriteBarrier((&___bigEndianEncoding_17), value);
	}

	inline static int32_t get_offset_of_defaultEncoding_18() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___defaultEncoding_18)); }
	inline Encoding_t1523322056 * get_defaultEncoding_18() const { return ___defaultEncoding_18; }
	inline Encoding_t1523322056 ** get_address_of_defaultEncoding_18() { return &___defaultEncoding_18; }
	inline void set_defaultEncoding_18(Encoding_t1523322056 * value)
	{
		___defaultEncoding_18 = value;
		Il2CppCodeGenWriteBarrier((&___defaultEncoding_18), value);
	}

	inline static int32_t get_offset_of_utf7Encoding_19() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___utf7Encoding_19)); }
	inline Encoding_t1523322056 * get_utf7Encoding_19() const { return ___utf7Encoding_19; }
	inline Encoding_t1523322056 ** get_address_of_utf7Encoding_19() { return &___utf7Encoding_19; }
	inline void set_utf7Encoding_19(Encoding_t1523322056 * value)
	{
		___utf7Encoding_19 = value;
		Il2CppCodeGenWriteBarrier((&___utf7Encoding_19), value);
	}

	inline static int32_t get_offset_of_utf8EncodingWithMarkers_20() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___utf8EncodingWithMarkers_20)); }
	inline Encoding_t1523322056 * get_utf8EncodingWithMarkers_20() const { return ___utf8EncodingWithMarkers_20; }
	inline Encoding_t1523322056 ** get_address_of_utf8EncodingWithMarkers_20() { return &___utf8EncodingWithMarkers_20; }
	inline void set_utf8EncodingWithMarkers_20(Encoding_t1523322056 * value)
	{
		___utf8EncodingWithMarkers_20 = value;
		Il2CppCodeGenWriteBarrier((&___utf8EncodingWithMarkers_20), value);
	}

	inline static int32_t get_offset_of_utf8EncodingWithoutMarkers_21() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___utf8EncodingWithoutMarkers_21)); }
	inline Encoding_t1523322056 * get_utf8EncodingWithoutMarkers_21() const { return ___utf8EncodingWithoutMarkers_21; }
	inline Encoding_t1523322056 ** get_address_of_utf8EncodingWithoutMarkers_21() { return &___utf8EncodingWithoutMarkers_21; }
	inline void set_utf8EncodingWithoutMarkers_21(Encoding_t1523322056 * value)
	{
		___utf8EncodingWithoutMarkers_21 = value;
		Il2CppCodeGenWriteBarrier((&___utf8EncodingWithoutMarkers_21), value);
	}

	inline static int32_t get_offset_of_unicodeEncoding_22() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___unicodeEncoding_22)); }
	inline Encoding_t1523322056 * get_unicodeEncoding_22() const { return ___unicodeEncoding_22; }
	inline Encoding_t1523322056 ** get_address_of_unicodeEncoding_22() { return &___unicodeEncoding_22; }
	inline void set_unicodeEncoding_22(Encoding_t1523322056 * value)
	{
		___unicodeEncoding_22 = value;
		Il2CppCodeGenWriteBarrier((&___unicodeEncoding_22), value);
	}

	inline static int32_t get_offset_of_isoLatin1Encoding_23() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___isoLatin1Encoding_23)); }
	inline Encoding_t1523322056 * get_isoLatin1Encoding_23() const { return ___isoLatin1Encoding_23; }
	inline Encoding_t1523322056 ** get_address_of_isoLatin1Encoding_23() { return &___isoLatin1Encoding_23; }
	inline void set_isoLatin1Encoding_23(Encoding_t1523322056 * value)
	{
		___isoLatin1Encoding_23 = value;
		Il2CppCodeGenWriteBarrier((&___isoLatin1Encoding_23), value);
	}

	inline static int32_t get_offset_of_utf8EncodingUnsafe_24() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___utf8EncodingUnsafe_24)); }
	inline Encoding_t1523322056 * get_utf8EncodingUnsafe_24() const { return ___utf8EncodingUnsafe_24; }
	inline Encoding_t1523322056 ** get_address_of_utf8EncodingUnsafe_24() { return &___utf8EncodingUnsafe_24; }
	inline void set_utf8EncodingUnsafe_24(Encoding_t1523322056 * value)
	{
		___utf8EncodingUnsafe_24 = value;
		Il2CppCodeGenWriteBarrier((&___utf8EncodingUnsafe_24), value);
	}

	inline static int32_t get_offset_of_utf32Encoding_25() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___utf32Encoding_25)); }
	inline Encoding_t1523322056 * get_utf32Encoding_25() const { return ___utf32Encoding_25; }
	inline Encoding_t1523322056 ** get_address_of_utf32Encoding_25() { return &___utf32Encoding_25; }
	inline void set_utf32Encoding_25(Encoding_t1523322056 * value)
	{
		___utf32Encoding_25 = value;
		Il2CppCodeGenWriteBarrier((&___utf32Encoding_25), value);
	}

	inline static int32_t get_offset_of_bigEndianUTF32Encoding_26() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___bigEndianUTF32Encoding_26)); }
	inline Encoding_t1523322056 * get_bigEndianUTF32Encoding_26() const { return ___bigEndianUTF32Encoding_26; }
	inline Encoding_t1523322056 ** get_address_of_bigEndianUTF32Encoding_26() { return &___bigEndianUTF32Encoding_26; }
	inline void set_bigEndianUTF32Encoding_26(Encoding_t1523322056 * value)
	{
		___bigEndianUTF32Encoding_26 = value;
		Il2CppCodeGenWriteBarrier((&___bigEndianUTF32Encoding_26), value);
	}

	inline static int32_t get_offset_of_lockobj_27() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___lockobj_27)); }
	inline RuntimeObject * get_lockobj_27() const { return ___lockobj_27; }
	inline RuntimeObject ** get_address_of_lockobj_27() { return &___lockobj_27; }
	inline void set_lockobj_27(RuntimeObject * value)
	{
		___lockobj_27 = value;
		Il2CppCodeGenWriteBarrier((&___lockobj_27), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCODING_T1523322056_H
#ifndef DICTIONARY_2_T1732976114_H
#define DICTIONARY_2_T1732976114_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.XR.iOS.ARPlaneAnchorGameObject>
struct  Dictionary_2_t1732976114  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t385246372* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_t964245573* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	StringU5BU5D_t1281789340* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	ARPlaneAnchorGameObjectU5BU5D_t2671880574* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::hcp
	RuntimeObject* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2::serialization_info
	SerializationInfo_t950877179 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2::generation
	int32_t ___generation_14;

public:
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t1732976114, ___table_4)); }
	inline Int32U5BU5D_t385246372* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t385246372** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t385246372* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t1732976114, ___linkSlots_5)); }
	inline LinkU5BU5D_t964245573* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_t964245573** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_t964245573* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t1732976114, ___keySlots_6)); }
	inline StringU5BU5D_t1281789340* get_keySlots_6() const { return ___keySlots_6; }
	inline StringU5BU5D_t1281789340** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(StringU5BU5D_t1281789340* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t1732976114, ___valueSlots_7)); }
	inline ARPlaneAnchorGameObjectU5BU5D_t2671880574* get_valueSlots_7() const { return ___valueSlots_7; }
	inline ARPlaneAnchorGameObjectU5BU5D_t2671880574** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(ARPlaneAnchorGameObjectU5BU5D_t2671880574* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t1732976114, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t1732976114, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_t1732976114, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_t1732976114, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_t1732976114, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_t1732976114, ___serialization_info_13)); }
	inline SerializationInfo_t950877179 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t950877179 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t950877179 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_t1732976114, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_t1732976114_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t1522292290 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_t1732976114_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_t1522292290 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_t1522292290 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_t1522292290 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T1732976114_H
#ifndef UNITYARMATRIXOPS_T2790111267_H
#define UNITYARMATRIXOPS_T2790111267_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARMatrixOps
struct  UnityARMatrixOps_t2790111267  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYARMATRIXOPS_T2790111267_H
#ifndef UNITYARUTILITY_T2509807446_H
#define UNITYARUTILITY_T2509807446_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARUtility
struct  UnityARUtility_t2509807446  : public RuntimeObject
{
public:
	// UnityEngine.MeshCollider UnityEngine.XR.iOS.UnityARUtility::meshCollider
	MeshCollider_t903564387 * ___meshCollider_0;
	// UnityEngine.MeshFilter UnityEngine.XR.iOS.UnityARUtility::meshFilter
	MeshFilter_t3523625662 * ___meshFilter_1;

public:
	inline static int32_t get_offset_of_meshCollider_0() { return static_cast<int32_t>(offsetof(UnityARUtility_t2509807446, ___meshCollider_0)); }
	inline MeshCollider_t903564387 * get_meshCollider_0() const { return ___meshCollider_0; }
	inline MeshCollider_t903564387 ** get_address_of_meshCollider_0() { return &___meshCollider_0; }
	inline void set_meshCollider_0(MeshCollider_t903564387 * value)
	{
		___meshCollider_0 = value;
		Il2CppCodeGenWriteBarrier((&___meshCollider_0), value);
	}

	inline static int32_t get_offset_of_meshFilter_1() { return static_cast<int32_t>(offsetof(UnityARUtility_t2509807446, ___meshFilter_1)); }
	inline MeshFilter_t3523625662 * get_meshFilter_1() const { return ___meshFilter_1; }
	inline MeshFilter_t3523625662 ** get_address_of_meshFilter_1() { return &___meshFilter_1; }
	inline void set_meshFilter_1(MeshFilter_t3523625662 * value)
	{
		___meshFilter_1 = value;
		Il2CppCodeGenWriteBarrier((&___meshFilter_1), value);
	}
};

struct UnityARUtility_t2509807446_StaticFields
{
public:
	// UnityEngine.GameObject UnityEngine.XR.iOS.UnityARUtility::planePrefab
	GameObject_t1113636619 * ___planePrefab_2;

public:
	inline static int32_t get_offset_of_planePrefab_2() { return static_cast<int32_t>(offsetof(UnityARUtility_t2509807446_StaticFields, ___planePrefab_2)); }
	inline GameObject_t1113636619 * get_planePrefab_2() const { return ___planePrefab_2; }
	inline GameObject_t1113636619 ** get_address_of_planePrefab_2() { return &___planePrefab_2; }
	inline void set_planePrefab_2(GameObject_t1113636619 * value)
	{
		___planePrefab_2 = value;
		Il2CppCodeGenWriteBarrier((&___planePrefab_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYARUTILITY_T2509807446_H
#ifndef LIST_1_T2751098672_H
#define LIST_1_T2751098672_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.XR.iOS.ARHitTestResult>
struct  List_1_t2751098672  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ARHitTestResultU5BU5D_t3623927455* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t2751098672, ____items_1)); }
	inline ARHitTestResultU5BU5D_t3623927455* get__items_1() const { return ____items_1; }
	inline ARHitTestResultU5BU5D_t3623927455** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ARHitTestResultU5BU5D_t3623927455* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t2751098672, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t2751098672, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t2751098672_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	ARHitTestResultU5BU5D_t3623927455* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t2751098672_StaticFields, ___EmptyArray_4)); }
	inline ARHitTestResultU5BU5D_t3623927455* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline ARHitTestResultU5BU5D_t3623927455** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(ARHitTestResultU5BU5D_t3623927455* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T2751098672_H
#ifndef VALUECOLLECTION_T3449020432_H
#define VALUECOLLECTION_T3449020432_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,UnityEngine.XR.iOS.ARPlaneAnchorGameObject>
struct  ValueCollection_t3449020432  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::dictionary
	Dictionary_2_t1732976114 * ___dictionary_0;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(ValueCollection_t3449020432, ___dictionary_0)); }
	inline Dictionary_2_t1732976114 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t1732976114 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t1732976114 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((&___dictionary_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VALUECOLLECTION_T3449020432_H
#ifndef LIST_1_T3419794557_H
#define LIST_1_T3419794557_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.XR.iOS.ARPlaneAnchorGameObject>
struct  List_1_t3419794557  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ARPlaneAnchorGameObjectU5BU5D_t2671880574* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3419794557, ____items_1)); }
	inline ARPlaneAnchorGameObjectU5BU5D_t2671880574* get__items_1() const { return ____items_1; }
	inline ARPlaneAnchorGameObjectU5BU5D_t2671880574** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ARPlaneAnchorGameObjectU5BU5D_t2671880574* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3419794557, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3419794557, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t3419794557_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	ARPlaneAnchorGameObjectU5BU5D_t2671880574* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t3419794557_StaticFields, ___EmptyArray_4)); }
	inline ARPlaneAnchorGameObjectU5BU5D_t2671880574* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline ARPlaneAnchorGameObjectU5BU5D_t2671880574** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(ARPlaneAnchorGameObjectU5BU5D_t2671880574* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T3419794557_H
#ifndef LIST_1_T2585711361_H
#define LIST_1_T2585711361_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct  List_1_t2585711361  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	GameObjectU5BU5D_t3328599146* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t2585711361, ____items_1)); }
	inline GameObjectU5BU5D_t3328599146* get__items_1() const { return ____items_1; }
	inline GameObjectU5BU5D_t3328599146** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(GameObjectU5BU5D_t3328599146* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t2585711361, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t2585711361, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t2585711361_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	GameObjectU5BU5D_t3328599146* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t2585711361_StaticFields, ___EmptyArray_4)); }
	inline GameObjectU5BU5D_t3328599146* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline GameObjectU5BU5D_t3328599146** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(GameObjectU5BU5D_t3328599146* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T2585711361_H
#ifndef OBJECTSERIALIZATIONEXTENSION_T1046383205_H
#define OBJECTSERIALIZATIONEXTENSION_T1046383205_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Utils.ObjectSerializationExtension
struct  ObjectSerializationExtension_t1046383205  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBJECTSERIALIZATIONEXTENSION_T1046383205_H
#ifndef VECTORENTITY_T1410759464_H
#define VECTORENTITY_T1410759464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VectorEntity
struct  VectorEntity_t1410759464  : public RuntimeObject
{
public:
	// UnityEngine.GameObject VectorEntity::GameObject
	GameObject_t1113636619 * ___GameObject_0;
	// UnityEngine.MeshFilter VectorEntity::MeshFilter
	MeshFilter_t3523625662 * ___MeshFilter_1;
	// UnityEngine.Mesh VectorEntity::Mesh
	Mesh_t3648964284 * ___Mesh_2;
	// UnityEngine.MeshRenderer VectorEntity::MeshRenderer
	MeshRenderer_t587009260 * ___MeshRenderer_3;
	// Mapbox.Unity.MeshGeneration.Data.VectorFeatureUnity VectorEntity::Feature
	VectorFeatureUnity_t1815898701 * ___Feature_4;
	// UnityEngine.Transform VectorEntity::Transform
	Transform_t3600365921 * ___Transform_5;

public:
	inline static int32_t get_offset_of_GameObject_0() { return static_cast<int32_t>(offsetof(VectorEntity_t1410759464, ___GameObject_0)); }
	inline GameObject_t1113636619 * get_GameObject_0() const { return ___GameObject_0; }
	inline GameObject_t1113636619 ** get_address_of_GameObject_0() { return &___GameObject_0; }
	inline void set_GameObject_0(GameObject_t1113636619 * value)
	{
		___GameObject_0 = value;
		Il2CppCodeGenWriteBarrier((&___GameObject_0), value);
	}

	inline static int32_t get_offset_of_MeshFilter_1() { return static_cast<int32_t>(offsetof(VectorEntity_t1410759464, ___MeshFilter_1)); }
	inline MeshFilter_t3523625662 * get_MeshFilter_1() const { return ___MeshFilter_1; }
	inline MeshFilter_t3523625662 ** get_address_of_MeshFilter_1() { return &___MeshFilter_1; }
	inline void set_MeshFilter_1(MeshFilter_t3523625662 * value)
	{
		___MeshFilter_1 = value;
		Il2CppCodeGenWriteBarrier((&___MeshFilter_1), value);
	}

	inline static int32_t get_offset_of_Mesh_2() { return static_cast<int32_t>(offsetof(VectorEntity_t1410759464, ___Mesh_2)); }
	inline Mesh_t3648964284 * get_Mesh_2() const { return ___Mesh_2; }
	inline Mesh_t3648964284 ** get_address_of_Mesh_2() { return &___Mesh_2; }
	inline void set_Mesh_2(Mesh_t3648964284 * value)
	{
		___Mesh_2 = value;
		Il2CppCodeGenWriteBarrier((&___Mesh_2), value);
	}

	inline static int32_t get_offset_of_MeshRenderer_3() { return static_cast<int32_t>(offsetof(VectorEntity_t1410759464, ___MeshRenderer_3)); }
	inline MeshRenderer_t587009260 * get_MeshRenderer_3() const { return ___MeshRenderer_3; }
	inline MeshRenderer_t587009260 ** get_address_of_MeshRenderer_3() { return &___MeshRenderer_3; }
	inline void set_MeshRenderer_3(MeshRenderer_t587009260 * value)
	{
		___MeshRenderer_3 = value;
		Il2CppCodeGenWriteBarrier((&___MeshRenderer_3), value);
	}

	inline static int32_t get_offset_of_Feature_4() { return static_cast<int32_t>(offsetof(VectorEntity_t1410759464, ___Feature_4)); }
	inline VectorFeatureUnity_t1815898701 * get_Feature_4() const { return ___Feature_4; }
	inline VectorFeatureUnity_t1815898701 ** get_address_of_Feature_4() { return &___Feature_4; }
	inline void set_Feature_4(VectorFeatureUnity_t1815898701 * value)
	{
		___Feature_4 = value;
		Il2CppCodeGenWriteBarrier((&___Feature_4), value);
	}

	inline static int32_t get_offset_of_Transform_5() { return static_cast<int32_t>(offsetof(VectorEntity_t1410759464, ___Transform_5)); }
	inline Transform_t3600365921 * get_Transform_5() const { return ___Transform_5; }
	inline Transform_t3600365921 ** get_address_of_Transform_5() { return &___Transform_5; }
	inline void set_Transform_5(Transform_t3600365921 * value)
	{
		___Transform_5 = value;
		Il2CppCodeGenWriteBarrier((&___Transform_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTORENTITY_T1410759464_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::length
	int32_t ___length_0;
	// System.Char System.String::start_char
	Il2CppChar ___start_char_1;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(String_t, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_start_char_1() { return static_cast<int32_t>(offsetof(String_t, ___start_char_1)); }
	inline Il2CppChar get_start_char_1() const { return ___start_char_1; }
	inline Il2CppChar* get_address_of_start_char_1() { return &___start_char_1; }
	inline void set_start_char_1(Il2CppChar value)
	{
		___start_char_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_2;
	// System.Char[] System.String::WhiteChars
	CharU5BU5D_t3528271667* ___WhiteChars_3;

public:
	inline static int32_t get_offset_of_Empty_2() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_2)); }
	inline String_t* get_Empty_2() const { return ___Empty_2; }
	inline String_t** get_address_of_Empty_2() { return &___Empty_2; }
	inline void set_Empty_2(String_t* value)
	{
		___Empty_2 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_2), value);
	}

	inline static int32_t get_offset_of_WhiteChars_3() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___WhiteChars_3)); }
	inline CharU5BU5D_t3528271667* get_WhiteChars_3() const { return ___WhiteChars_3; }
	inline CharU5BU5D_t3528271667** get_address_of_WhiteChars_3() { return &___WhiteChars_3; }
	inline void set_WhiteChars_3(CharU5BU5D_t3528271667* value)
	{
		___WhiteChars_3 = value;
		Il2CppCodeGenWriteBarrier((&___WhiteChars_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef SUBMESSAGEIDS_T1008824323_H
#define SUBMESSAGEIDS_T1008824323_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.SubMessageIds
struct  SubMessageIds_t1008824323  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SUBMESSAGEIDS_T1008824323_H
#ifndef VALUETYPE_T3640485471_H
#define VALUETYPE_T3640485471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3640485471  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_com
{
};
#endif // VALUETYPE_T3640485471_H
#ifndef BYTE_T1134296376_H
#define BYTE_T1134296376_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Byte
struct  Byte_t1134296376 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Byte_t1134296376, ___m_value_2)); }
	inline uint8_t get_m_value_2() const { return ___m_value_2; }
	inline uint8_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(uint8_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BYTE_T1134296376_H
#ifndef RECT_T2360479859_H
#define RECT_T2360479859_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rect
struct  Rect_t2360479859 
{
public:
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;

public:
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECT_T2360479859_H
#ifndef ENUMERATOR_T2146457487_H
#define ENUMERATOR_T2146457487_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct  Enumerator_t2146457487 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t257213610 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___l_0)); }
	inline List_1_t257213610 * get_l_0() const { return ___l_0; }
	inline List_1_t257213610 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(List_1_t257213610 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((&___l_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T2146457487_H
#ifndef ENUMERATOR_T1014071138_H
#define ENUMERATOR_T1014071138_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.iOS.ARPlaneAnchorGameObject>
struct  Enumerator_t1014071138 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t3419794557 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	ARPlaneAnchorGameObject_t1947719815 * ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t1014071138, ___l_0)); }
	inline List_1_t3419794557 * get_l_0() const { return ___l_0; }
	inline List_1_t3419794557 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(List_1_t3419794557 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((&___l_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t1014071138, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t1014071138, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t1014071138, ___current_3)); }
	inline ARPlaneAnchorGameObject_t1947719815 * get_current_3() const { return ___current_3; }
	inline ARPlaneAnchorGameObject_t1947719815 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(ARPlaneAnchorGameObject_t1947719815 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T1014071138_H
#ifndef U24ARRAYTYPEU3D24_T2467506693_H
#define U24ARRAYTYPEU3D24_T2467506693_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType=24
#pragma pack(push, tp, 1)
struct  U24ArrayTypeU3D24_t2467506693 
{
public:
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D24_t2467506693__padding[24];
	};

public:
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU3D24_T2467506693_H
#ifndef BOOLEAN_T97287965_H
#define BOOLEAN_T97287965_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t97287965 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Boolean_t97287965, ___m_value_2)); }
	inline bool get_m_value_2() const { return ___m_value_2; }
	inline bool* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(bool value)
	{
		___m_value_2 = value;
	}
};

struct Boolean_t97287965_StaticFields
{
public:
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_0;
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_1;

public:
	inline static int32_t get_offset_of_FalseString_0() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___FalseString_0)); }
	inline String_t* get_FalseString_0() const { return ___FalseString_0; }
	inline String_t** get_address_of_FalseString_0() { return &___FalseString_0; }
	inline void set_FalseString_0(String_t* value)
	{
		___FalseString_0 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_0), value);
	}

	inline static int32_t get_offset_of_TrueString_1() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___TrueString_1)); }
	inline String_t* get_TrueString_1() const { return ___TrueString_1; }
	inline String_t** get_address_of_TrueString_1() { return &___TrueString_1; }
	inline void set_TrueString_1(String_t* value)
	{
		___TrueString_1 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T97287965_H
#ifndef GCHANDLE_T3351438187_H
#define GCHANDLE_T3351438187_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.GCHandle
struct  GCHandle_t3351438187 
{
public:
	// System.Int32 System.Runtime.InteropServices.GCHandle::handle
	int32_t ___handle_0;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(GCHandle_t3351438187, ___handle_0)); }
	inline int32_t get_handle_0() const { return ___handle_0; }
	inline int32_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(int32_t value)
	{
		___handle_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GCHANDLE_T3351438187_H
#ifndef UINT32_T2560061978_H
#define UINT32_T2560061978_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt32
struct  UInt32_t2560061978 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(UInt32_t2560061978, ___m_value_2)); }
	inline uint32_t get_m_value_2() const { return ___m_value_2; }
	inline uint32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(uint32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT32_T2560061978_H
#ifndef VECTOR2_T2156229523_H
#define VECTOR2_T2156229523_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector2
struct  Vector2_t2156229523 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_t2156229523, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_t2156229523, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_t2156229523_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t2156229523  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t2156229523  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t2156229523  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t2156229523  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t2156229523  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t2156229523  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t2156229523  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t2156229523  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___zeroVector_2)); }
	inline Vector2_t2156229523  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_t2156229523 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_t2156229523  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___oneVector_3)); }
	inline Vector2_t2156229523  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_t2156229523 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_t2156229523  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___upVector_4)); }
	inline Vector2_t2156229523  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_t2156229523 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_t2156229523  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___downVector_5)); }
	inline Vector2_t2156229523  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_t2156229523 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_t2156229523  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___leftVector_6)); }
	inline Vector2_t2156229523  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_t2156229523 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_t2156229523  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___rightVector_7)); }
	inline Vector2_t2156229523  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_t2156229523 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_t2156229523  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_t2156229523  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_t2156229523 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_t2156229523  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_t2156229523  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_t2156229523 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_t2156229523  value)
	{
		___negativeInfinityVector_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR2_T2156229523_H
#ifndef VOID_T1185182177_H
#define VOID_T1185182177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t1185182177 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1185182177_H
#ifndef SINGLE_T1397266774_H
#define SINGLE_T1397266774_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_t1397266774 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_7;

public:
	inline static int32_t get_offset_of_m_value_7() { return static_cast<int32_t>(offsetof(Single_t1397266774, ___m_value_7)); }
	inline float get_m_value_7() const { return ___m_value_7; }
	inline float* get_address_of_m_value_7() { return &___m_value_7; }
	inline void set_m_value_7(float value)
	{
		___m_value_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_T1397266774_H
#ifndef DOUBLE_T594665363_H
#define DOUBLE_T594665363_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Double
struct  Double_t594665363 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_13;

public:
	inline static int32_t get_offset_of_m_value_13() { return static_cast<int32_t>(offsetof(Double_t594665363, ___m_value_13)); }
	inline double get_m_value_13() const { return ___m_value_13; }
	inline double* get_address_of_m_value_13() { return &___m_value_13; }
	inline void set_m_value_13(double value)
	{
		___m_value_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DOUBLE_T594665363_H
#ifndef ARPOINT_T499615819_H
#define ARPOINT_T499615819_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.ARPoint
struct  ARPoint_t499615819 
{
public:
	// System.Double UnityEngine.XR.iOS.ARPoint::x
	double ___x_0;
	// System.Double UnityEngine.XR.iOS.ARPoint::y
	double ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(ARPoint_t499615819, ___x_0)); }
	inline double get_x_0() const { return ___x_0; }
	inline double* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(double value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(ARPoint_t499615819, ___y_1)); }
	inline double get_y_1() const { return ___y_1; }
	inline double* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(double value)
	{
		___y_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARPOINT_T499615819_H
#ifndef RESOLUTION_T2487619763_H
#define RESOLUTION_T2487619763_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Resolution
struct  Resolution_t2487619763 
{
public:
	// System.Int32 UnityEngine.Resolution::m_Width
	int32_t ___m_Width_0;
	// System.Int32 UnityEngine.Resolution::m_Height
	int32_t ___m_Height_1;
	// System.Int32 UnityEngine.Resolution::m_RefreshRate
	int32_t ___m_RefreshRate_2;

public:
	inline static int32_t get_offset_of_m_Width_0() { return static_cast<int32_t>(offsetof(Resolution_t2487619763, ___m_Width_0)); }
	inline int32_t get_m_Width_0() const { return ___m_Width_0; }
	inline int32_t* get_address_of_m_Width_0() { return &___m_Width_0; }
	inline void set_m_Width_0(int32_t value)
	{
		___m_Width_0 = value;
	}

	inline static int32_t get_offset_of_m_Height_1() { return static_cast<int32_t>(offsetof(Resolution_t2487619763, ___m_Height_1)); }
	inline int32_t get_m_Height_1() const { return ___m_Height_1; }
	inline int32_t* get_address_of_m_Height_1() { return &___m_Height_1; }
	inline void set_m_Height_1(int32_t value)
	{
		___m_Height_1 = value;
	}

	inline static int32_t get_offset_of_m_RefreshRate_2() { return static_cast<int32_t>(offsetof(Resolution_t2487619763, ___m_RefreshRate_2)); }
	inline int32_t get_m_RefreshRate_2() const { return ___m_RefreshRate_2; }
	inline int32_t* get_address_of_m_RefreshRate_2() { return &___m_RefreshRate_2; }
	inline void set_m_RefreshRate_2(int32_t value)
	{
		___m_RefreshRate_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESOLUTION_T2487619763_H
#ifndef INT32_T2950945753_H
#define INT32_T2950945753_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t2950945753 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int32_t2950945753, ___m_value_2)); }
	inline int32_t get_m_value_2() const { return ___m_value_2; }
	inline int32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T2950945753_H
#ifndef LAYERMASK_T3493934918_H
#define LAYERMASK_T3493934918_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.LayerMask
struct  LayerMask_t3493934918 
{
public:
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;

public:
	inline static int32_t get_offset_of_m_Mask_0() { return static_cast<int32_t>(offsetof(LayerMask_t3493934918, ___m_Mask_0)); }
	inline int32_t get_m_Mask_0() const { return ___m_Mask_0; }
	inline int32_t* get_address_of_m_Mask_0() { return &___m_Mask_0; }
	inline void set_m_Mask_0(int32_t value)
	{
		___m_Mask_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LAYERMASK_T3493934918_H
#ifndef VECTOR3_T3722313464_H
#define VECTOR3_T3722313464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_t3722313464 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_1;
	// System.Single UnityEngine.Vector3::y
	float ___y_2;
	// System.Single UnityEngine.Vector3::z
	float ___z_3;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}
};

struct Vector3_t3722313464_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t3722313464  ___zeroVector_4;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t3722313464  ___oneVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t3722313464  ___upVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t3722313464  ___downVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t3722313464  ___leftVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t3722313464  ___rightVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t3722313464  ___forwardVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t3722313464  ___backVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t3722313464  ___positiveInfinityVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t3722313464  ___negativeInfinityVector_13;

public:
	inline static int32_t get_offset_of_zeroVector_4() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___zeroVector_4)); }
	inline Vector3_t3722313464  get_zeroVector_4() const { return ___zeroVector_4; }
	inline Vector3_t3722313464 * get_address_of_zeroVector_4() { return &___zeroVector_4; }
	inline void set_zeroVector_4(Vector3_t3722313464  value)
	{
		___zeroVector_4 = value;
	}

	inline static int32_t get_offset_of_oneVector_5() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___oneVector_5)); }
	inline Vector3_t3722313464  get_oneVector_5() const { return ___oneVector_5; }
	inline Vector3_t3722313464 * get_address_of_oneVector_5() { return &___oneVector_5; }
	inline void set_oneVector_5(Vector3_t3722313464  value)
	{
		___oneVector_5 = value;
	}

	inline static int32_t get_offset_of_upVector_6() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___upVector_6)); }
	inline Vector3_t3722313464  get_upVector_6() const { return ___upVector_6; }
	inline Vector3_t3722313464 * get_address_of_upVector_6() { return &___upVector_6; }
	inline void set_upVector_6(Vector3_t3722313464  value)
	{
		___upVector_6 = value;
	}

	inline static int32_t get_offset_of_downVector_7() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___downVector_7)); }
	inline Vector3_t3722313464  get_downVector_7() const { return ___downVector_7; }
	inline Vector3_t3722313464 * get_address_of_downVector_7() { return &___downVector_7; }
	inline void set_downVector_7(Vector3_t3722313464  value)
	{
		___downVector_7 = value;
	}

	inline static int32_t get_offset_of_leftVector_8() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___leftVector_8)); }
	inline Vector3_t3722313464  get_leftVector_8() const { return ___leftVector_8; }
	inline Vector3_t3722313464 * get_address_of_leftVector_8() { return &___leftVector_8; }
	inline void set_leftVector_8(Vector3_t3722313464  value)
	{
		___leftVector_8 = value;
	}

	inline static int32_t get_offset_of_rightVector_9() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___rightVector_9)); }
	inline Vector3_t3722313464  get_rightVector_9() const { return ___rightVector_9; }
	inline Vector3_t3722313464 * get_address_of_rightVector_9() { return &___rightVector_9; }
	inline void set_rightVector_9(Vector3_t3722313464  value)
	{
		___rightVector_9 = value;
	}

	inline static int32_t get_offset_of_forwardVector_10() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___forwardVector_10)); }
	inline Vector3_t3722313464  get_forwardVector_10() const { return ___forwardVector_10; }
	inline Vector3_t3722313464 * get_address_of_forwardVector_10() { return &___forwardVector_10; }
	inline void set_forwardVector_10(Vector3_t3722313464  value)
	{
		___forwardVector_10 = value;
	}

	inline static int32_t get_offset_of_backVector_11() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___backVector_11)); }
	inline Vector3_t3722313464  get_backVector_11() const { return ___backVector_11; }
	inline Vector3_t3722313464 * get_address_of_backVector_11() { return &___backVector_11; }
	inline void set_backVector_11(Vector3_t3722313464  value)
	{
		___backVector_11 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_12() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___positiveInfinityVector_12)); }
	inline Vector3_t3722313464  get_positiveInfinityVector_12() const { return ___positiveInfinityVector_12; }
	inline Vector3_t3722313464 * get_address_of_positiveInfinityVector_12() { return &___positiveInfinityVector_12; }
	inline void set_positiveInfinityVector_12(Vector3_t3722313464  value)
	{
		___positiveInfinityVector_12 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___negativeInfinityVector_13)); }
	inline Vector3_t3722313464  get_negativeInfinityVector_13() const { return ___negativeInfinityVector_13; }
	inline Vector3_t3722313464 * get_address_of_negativeInfinityVector_13() { return &___negativeInfinityVector_13; }
	inline void set_negativeInfinityVector_13(Vector3_t3722313464  value)
	{
		___negativeInfinityVector_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_T3722313464_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

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

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef ENUM_T4135868527_H
#define ENUM_T4135868527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t4135868527  : public ValueType_t3640485471
{
public:

public:
};

struct Enum_t4135868527_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t3528271667* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t4135868527_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t3528271667* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t3528271667** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t3528271667* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t4135868527_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t4135868527_marshaled_com
{
};
#endif // ENUM_T4135868527_H
#ifndef QUATERNION_T2301928331_H
#define QUATERNION_T2301928331_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Quaternion
struct  Quaternion_t2301928331 
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
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t2301928331_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t2301928331  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t2301928331  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t2301928331 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t2301928331  value)
	{
		___identityQuaternion_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUATERNION_T2301928331_H
#ifndef VECTOR4_T3319028937_H
#define VECTOR4_T3319028937_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector4
struct  Vector4_t3319028937 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_t3319028937, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_t3319028937, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_t3319028937, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_t3319028937, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_t3319028937_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t3319028937  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t3319028937  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t3319028937  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t3319028937  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_t3319028937_StaticFields, ___zeroVector_5)); }
	inline Vector4_t3319028937  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_t3319028937 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_t3319028937  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_t3319028937_StaticFields, ___oneVector_6)); }
	inline Vector4_t3319028937  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_t3319028937 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_t3319028937  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_t3319028937_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_t3319028937  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_t3319028937 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_t3319028937  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_t3319028937_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_t3319028937  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_t3319028937 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_t3319028937  value)
	{
		___negativeInfinityVector_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR4_T3319028937_H
#ifndef MATRIX4X4_T1817901843_H
#define MATRIX4X4_T1817901843_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Matrix4x4
struct  Matrix4x4_t1817901843 
{
public:
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;

public:
	inline static int32_t get_offset_of_m00_0() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m00_0)); }
	inline float get_m00_0() const { return ___m00_0; }
	inline float* get_address_of_m00_0() { return &___m00_0; }
	inline void set_m00_0(float value)
	{
		___m00_0 = value;
	}

	inline static int32_t get_offset_of_m10_1() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m10_1)); }
	inline float get_m10_1() const { return ___m10_1; }
	inline float* get_address_of_m10_1() { return &___m10_1; }
	inline void set_m10_1(float value)
	{
		___m10_1 = value;
	}

	inline static int32_t get_offset_of_m20_2() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m20_2)); }
	inline float get_m20_2() const { return ___m20_2; }
	inline float* get_address_of_m20_2() { return &___m20_2; }
	inline void set_m20_2(float value)
	{
		___m20_2 = value;
	}

	inline static int32_t get_offset_of_m30_3() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m30_3)); }
	inline float get_m30_3() const { return ___m30_3; }
	inline float* get_address_of_m30_3() { return &___m30_3; }
	inline void set_m30_3(float value)
	{
		___m30_3 = value;
	}

	inline static int32_t get_offset_of_m01_4() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m01_4)); }
	inline float get_m01_4() const { return ___m01_4; }
	inline float* get_address_of_m01_4() { return &___m01_4; }
	inline void set_m01_4(float value)
	{
		___m01_4 = value;
	}

	inline static int32_t get_offset_of_m11_5() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m11_5)); }
	inline float get_m11_5() const { return ___m11_5; }
	inline float* get_address_of_m11_5() { return &___m11_5; }
	inline void set_m11_5(float value)
	{
		___m11_5 = value;
	}

	inline static int32_t get_offset_of_m21_6() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m21_6)); }
	inline float get_m21_6() const { return ___m21_6; }
	inline float* get_address_of_m21_6() { return &___m21_6; }
	inline void set_m21_6(float value)
	{
		___m21_6 = value;
	}

	inline static int32_t get_offset_of_m31_7() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m31_7)); }
	inline float get_m31_7() const { return ___m31_7; }
	inline float* get_address_of_m31_7() { return &___m31_7; }
	inline void set_m31_7(float value)
	{
		___m31_7 = value;
	}

	inline static int32_t get_offset_of_m02_8() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m02_8)); }
	inline float get_m02_8() const { return ___m02_8; }
	inline float* get_address_of_m02_8() { return &___m02_8; }
	inline void set_m02_8(float value)
	{
		___m02_8 = value;
	}

	inline static int32_t get_offset_of_m12_9() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m12_9)); }
	inline float get_m12_9() const { return ___m12_9; }
	inline float* get_address_of_m12_9() { return &___m12_9; }
	inline void set_m12_9(float value)
	{
		___m12_9 = value;
	}

	inline static int32_t get_offset_of_m22_10() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m22_10)); }
	inline float get_m22_10() const { return ___m22_10; }
	inline float* get_address_of_m22_10() { return &___m22_10; }
	inline void set_m22_10(float value)
	{
		___m22_10 = value;
	}

	inline static int32_t get_offset_of_m32_11() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m32_11)); }
	inline float get_m32_11() const { return ___m32_11; }
	inline float* get_address_of_m32_11() { return &___m32_11; }
	inline void set_m32_11(float value)
	{
		___m32_11 = value;
	}

	inline static int32_t get_offset_of_m03_12() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m03_12)); }
	inline float get_m03_12() const { return ___m03_12; }
	inline float* get_address_of_m03_12() { return &___m03_12; }
	inline void set_m03_12(float value)
	{
		___m03_12 = value;
	}

	inline static int32_t get_offset_of_m13_13() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m13_13)); }
	inline float get_m13_13() const { return ___m13_13; }
	inline float* get_address_of_m13_13() { return &___m13_13; }
	inline void set_m13_13(float value)
	{
		___m13_13 = value;
	}

	inline static int32_t get_offset_of_m23_14() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m23_14)); }
	inline float get_m23_14() const { return ___m23_14; }
	inline float* get_address_of_m23_14() { return &___m23_14; }
	inline void set_m23_14(float value)
	{
		___m23_14 = value;
	}

	inline static int32_t get_offset_of_m33_15() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m33_15)); }
	inline float get_m33_15() const { return ___m33_15; }
	inline float* get_address_of_m33_15() { return &___m33_15; }
	inline void set_m33_15(float value)
	{
		___m33_15 = value;
	}
};

struct Matrix4x4_t1817901843_StaticFields
{
public:
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_t1817901843  ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_t1817901843  ___identityMatrix_17;

public:
	inline static int32_t get_offset_of_zeroMatrix_16() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843_StaticFields, ___zeroMatrix_16)); }
	inline Matrix4x4_t1817901843  get_zeroMatrix_16() const { return ___zeroMatrix_16; }
	inline Matrix4x4_t1817901843 * get_address_of_zeroMatrix_16() { return &___zeroMatrix_16; }
	inline void set_zeroMatrix_16(Matrix4x4_t1817901843  value)
	{
		___zeroMatrix_16 = value;
	}

	inline static int32_t get_offset_of_identityMatrix_17() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843_StaticFields, ___identityMatrix_17)); }
	inline Matrix4x4_t1817901843  get_identityMatrix_17() const { return ___identityMatrix_17; }
	inline Matrix4x4_t1817901843 * get_address_of_identityMatrix_17() { return &___identityMatrix_17; }
	inline void set_identityMatrix_17(Matrix4x4_t1817901843  value)
	{
		___identityMatrix_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATRIX4X4_T1817901843_H
#ifndef UNITYARLIGHTESTIMATE_T1498306117_H
#define UNITYARLIGHTESTIMATE_T1498306117_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARLightEstimate
struct  UnityARLightEstimate_t1498306117 
{
public:
	// System.Single UnityEngine.XR.iOS.UnityARLightEstimate::ambientIntensity
	float ___ambientIntensity_0;
	// System.Single UnityEngine.XR.iOS.UnityARLightEstimate::ambientColorTemperature
	float ___ambientColorTemperature_1;

public:
	inline static int32_t get_offset_of_ambientIntensity_0() { return static_cast<int32_t>(offsetof(UnityARLightEstimate_t1498306117, ___ambientIntensity_0)); }
	inline float get_ambientIntensity_0() const { return ___ambientIntensity_0; }
	inline float* get_address_of_ambientIntensity_0() { return &___ambientIntensity_0; }
	inline void set_ambientIntensity_0(float value)
	{
		___ambientIntensity_0 = value;
	}

	inline static int32_t get_offset_of_ambientColorTemperature_1() { return static_cast<int32_t>(offsetof(UnityARLightEstimate_t1498306117, ___ambientColorTemperature_1)); }
	inline float get_ambientColorTemperature_1() const { return ___ambientColorTemperature_1; }
	inline float* get_address_of_ambientColorTemperature_1() { return &___ambientColorTemperature_1; }
	inline void set_ambientColorTemperature_1(float value)
	{
		___ambientColorTemperature_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYARLIGHTESTIMATE_T1498306117_H
#ifndef INT64_T3736567304_H
#define INT64_T3736567304_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int64
struct  Int64_t3736567304 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int64_t3736567304, ___m_value_2)); }
	inline int64_t get_m_value_2() const { return ___m_value_2; }
	inline int64_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int64_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT64_T3736567304_H
#ifndef MEMORYSTREAM_T94973147_H
#define MEMORYSTREAM_T94973147_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.MemoryStream
struct  MemoryStream_t94973147  : public Stream_t1273022909
{
public:
	// System.Boolean System.IO.MemoryStream::canWrite
	bool ___canWrite_1;
	// System.Boolean System.IO.MemoryStream::allowGetBuffer
	bool ___allowGetBuffer_2;
	// System.Int32 System.IO.MemoryStream::capacity
	int32_t ___capacity_3;
	// System.Int32 System.IO.MemoryStream::length
	int32_t ___length_4;
	// System.Byte[] System.IO.MemoryStream::internalBuffer
	ByteU5BU5D_t4116647657* ___internalBuffer_5;
	// System.Int32 System.IO.MemoryStream::initialIndex
	int32_t ___initialIndex_6;
	// System.Boolean System.IO.MemoryStream::expandable
	bool ___expandable_7;
	// System.Boolean System.IO.MemoryStream::streamClosed
	bool ___streamClosed_8;
	// System.Int32 System.IO.MemoryStream::position
	int32_t ___position_9;
	// System.Int32 System.IO.MemoryStream::dirty_bytes
	int32_t ___dirty_bytes_10;

public:
	inline static int32_t get_offset_of_canWrite_1() { return static_cast<int32_t>(offsetof(MemoryStream_t94973147, ___canWrite_1)); }
	inline bool get_canWrite_1() const { return ___canWrite_1; }
	inline bool* get_address_of_canWrite_1() { return &___canWrite_1; }
	inline void set_canWrite_1(bool value)
	{
		___canWrite_1 = value;
	}

	inline static int32_t get_offset_of_allowGetBuffer_2() { return static_cast<int32_t>(offsetof(MemoryStream_t94973147, ___allowGetBuffer_2)); }
	inline bool get_allowGetBuffer_2() const { return ___allowGetBuffer_2; }
	inline bool* get_address_of_allowGetBuffer_2() { return &___allowGetBuffer_2; }
	inline void set_allowGetBuffer_2(bool value)
	{
		___allowGetBuffer_2 = value;
	}

	inline static int32_t get_offset_of_capacity_3() { return static_cast<int32_t>(offsetof(MemoryStream_t94973147, ___capacity_3)); }
	inline int32_t get_capacity_3() const { return ___capacity_3; }
	inline int32_t* get_address_of_capacity_3() { return &___capacity_3; }
	inline void set_capacity_3(int32_t value)
	{
		___capacity_3 = value;
	}

	inline static int32_t get_offset_of_length_4() { return static_cast<int32_t>(offsetof(MemoryStream_t94973147, ___length_4)); }
	inline int32_t get_length_4() const { return ___length_4; }
	inline int32_t* get_address_of_length_4() { return &___length_4; }
	inline void set_length_4(int32_t value)
	{
		___length_4 = value;
	}

	inline static int32_t get_offset_of_internalBuffer_5() { return static_cast<int32_t>(offsetof(MemoryStream_t94973147, ___internalBuffer_5)); }
	inline ByteU5BU5D_t4116647657* get_internalBuffer_5() const { return ___internalBuffer_5; }
	inline ByteU5BU5D_t4116647657** get_address_of_internalBuffer_5() { return &___internalBuffer_5; }
	inline void set_internalBuffer_5(ByteU5BU5D_t4116647657* value)
	{
		___internalBuffer_5 = value;
		Il2CppCodeGenWriteBarrier((&___internalBuffer_5), value);
	}

	inline static int32_t get_offset_of_initialIndex_6() { return static_cast<int32_t>(offsetof(MemoryStream_t94973147, ___initialIndex_6)); }
	inline int32_t get_initialIndex_6() const { return ___initialIndex_6; }
	inline int32_t* get_address_of_initialIndex_6() { return &___initialIndex_6; }
	inline void set_initialIndex_6(int32_t value)
	{
		___initialIndex_6 = value;
	}

	inline static int32_t get_offset_of_expandable_7() { return static_cast<int32_t>(offsetof(MemoryStream_t94973147, ___expandable_7)); }
	inline bool get_expandable_7() const { return ___expandable_7; }
	inline bool* get_address_of_expandable_7() { return &___expandable_7; }
	inline void set_expandable_7(bool value)
	{
		___expandable_7 = value;
	}

	inline static int32_t get_offset_of_streamClosed_8() { return static_cast<int32_t>(offsetof(MemoryStream_t94973147, ___streamClosed_8)); }
	inline bool get_streamClosed_8() const { return ___streamClosed_8; }
	inline bool* get_address_of_streamClosed_8() { return &___streamClosed_8; }
	inline void set_streamClosed_8(bool value)
	{
		___streamClosed_8 = value;
	}

	inline static int32_t get_offset_of_position_9() { return static_cast<int32_t>(offsetof(MemoryStream_t94973147, ___position_9)); }
	inline int32_t get_position_9() const { return ___position_9; }
	inline int32_t* get_address_of_position_9() { return &___position_9; }
	inline void set_position_9(int32_t value)
	{
		___position_9 = value;
	}

	inline static int32_t get_offset_of_dirty_bytes_10() { return static_cast<int32_t>(offsetof(MemoryStream_t94973147, ___dirty_bytes_10)); }
	inline int32_t get_dirty_bytes_10() const { return ___dirty_bytes_10; }
	inline int32_t* get_address_of_dirty_bytes_10() { return &___dirty_bytes_10; }
	inline void set_dirty_bytes_10(int32_t value)
	{
		___dirty_bytes_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMORYSTREAM_T94973147_H
#ifndef GUID_T_H
#define GUID_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Guid
struct  Guid_t 
{
public:
	// System.Int32 System.Guid::_a
	int32_t ____a_0;
	// System.Int16 System.Guid::_b
	int16_t ____b_1;
	// System.Int16 System.Guid::_c
	int16_t ____c_2;
	// System.Byte System.Guid::_d
	uint8_t ____d_3;
	// System.Byte System.Guid::_e
	uint8_t ____e_4;
	// System.Byte System.Guid::_f
	uint8_t ____f_5;
	// System.Byte System.Guid::_g
	uint8_t ____g_6;
	// System.Byte System.Guid::_h
	uint8_t ____h_7;
	// System.Byte System.Guid::_i
	uint8_t ____i_8;
	// System.Byte System.Guid::_j
	uint8_t ____j_9;
	// System.Byte System.Guid::_k
	uint8_t ____k_10;

public:
	inline static int32_t get_offset_of__a_0() { return static_cast<int32_t>(offsetof(Guid_t, ____a_0)); }
	inline int32_t get__a_0() const { return ____a_0; }
	inline int32_t* get_address_of__a_0() { return &____a_0; }
	inline void set__a_0(int32_t value)
	{
		____a_0 = value;
	}

	inline static int32_t get_offset_of__b_1() { return static_cast<int32_t>(offsetof(Guid_t, ____b_1)); }
	inline int16_t get__b_1() const { return ____b_1; }
	inline int16_t* get_address_of__b_1() { return &____b_1; }
	inline void set__b_1(int16_t value)
	{
		____b_1 = value;
	}

	inline static int32_t get_offset_of__c_2() { return static_cast<int32_t>(offsetof(Guid_t, ____c_2)); }
	inline int16_t get__c_2() const { return ____c_2; }
	inline int16_t* get_address_of__c_2() { return &____c_2; }
	inline void set__c_2(int16_t value)
	{
		____c_2 = value;
	}

	inline static int32_t get_offset_of__d_3() { return static_cast<int32_t>(offsetof(Guid_t, ____d_3)); }
	inline uint8_t get__d_3() const { return ____d_3; }
	inline uint8_t* get_address_of__d_3() { return &____d_3; }
	inline void set__d_3(uint8_t value)
	{
		____d_3 = value;
	}

	inline static int32_t get_offset_of__e_4() { return static_cast<int32_t>(offsetof(Guid_t, ____e_4)); }
	inline uint8_t get__e_4() const { return ____e_4; }
	inline uint8_t* get_address_of__e_4() { return &____e_4; }
	inline void set__e_4(uint8_t value)
	{
		____e_4 = value;
	}

	inline static int32_t get_offset_of__f_5() { return static_cast<int32_t>(offsetof(Guid_t, ____f_5)); }
	inline uint8_t get__f_5() const { return ____f_5; }
	inline uint8_t* get_address_of__f_5() { return &____f_5; }
	inline void set__f_5(uint8_t value)
	{
		____f_5 = value;
	}

	inline static int32_t get_offset_of__g_6() { return static_cast<int32_t>(offsetof(Guid_t, ____g_6)); }
	inline uint8_t get__g_6() const { return ____g_6; }
	inline uint8_t* get_address_of__g_6() { return &____g_6; }
	inline void set__g_6(uint8_t value)
	{
		____g_6 = value;
	}

	inline static int32_t get_offset_of__h_7() { return static_cast<int32_t>(offsetof(Guid_t, ____h_7)); }
	inline uint8_t get__h_7() const { return ____h_7; }
	inline uint8_t* get_address_of__h_7() { return &____h_7; }
	inline void set__h_7(uint8_t value)
	{
		____h_7 = value;
	}

	inline static int32_t get_offset_of__i_8() { return static_cast<int32_t>(offsetof(Guid_t, ____i_8)); }
	inline uint8_t get__i_8() const { return ____i_8; }
	inline uint8_t* get_address_of__i_8() { return &____i_8; }
	inline void set__i_8(uint8_t value)
	{
		____i_8 = value;
	}

	inline static int32_t get_offset_of__j_9() { return static_cast<int32_t>(offsetof(Guid_t, ____j_9)); }
	inline uint8_t get__j_9() const { return ____j_9; }
	inline uint8_t* get_address_of__j_9() { return &____j_9; }
	inline void set__j_9(uint8_t value)
	{
		____j_9 = value;
	}

	inline static int32_t get_offset_of__k_10() { return static_cast<int32_t>(offsetof(Guid_t, ____k_10)); }
	inline uint8_t get__k_10() const { return ____k_10; }
	inline uint8_t* get_address_of__k_10() { return &____k_10; }
	inline void set__k_10(uint8_t value)
	{
		____k_10 = value;
	}
};

struct Guid_t_StaticFields
{
public:
	// System.Guid System.Guid::Empty
	Guid_t  ___Empty_11;
	// System.Object System.Guid::_rngAccess
	RuntimeObject * ____rngAccess_12;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_rng
	RandomNumberGenerator_t386037858 * ____rng_13;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_fastRng
	RandomNumberGenerator_t386037858 * ____fastRng_14;

public:
	inline static int32_t get_offset_of_Empty_11() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ___Empty_11)); }
	inline Guid_t  get_Empty_11() const { return ___Empty_11; }
	inline Guid_t * get_address_of_Empty_11() { return &___Empty_11; }
	inline void set_Empty_11(Guid_t  value)
	{
		___Empty_11 = value;
	}

	inline static int32_t get_offset_of__rngAccess_12() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rngAccess_12)); }
	inline RuntimeObject * get__rngAccess_12() const { return ____rngAccess_12; }
	inline RuntimeObject ** get_address_of__rngAccess_12() { return &____rngAccess_12; }
	inline void set__rngAccess_12(RuntimeObject * value)
	{
		____rngAccess_12 = value;
		Il2CppCodeGenWriteBarrier((&____rngAccess_12), value);
	}

	inline static int32_t get_offset_of__rng_13() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rng_13)); }
	inline RandomNumberGenerator_t386037858 * get__rng_13() const { return ____rng_13; }
	inline RandomNumberGenerator_t386037858 ** get_address_of__rng_13() { return &____rng_13; }
	inline void set__rng_13(RandomNumberGenerator_t386037858 * value)
	{
		____rng_13 = value;
		Il2CppCodeGenWriteBarrier((&____rng_13), value);
	}

	inline static int32_t get_offset_of__fastRng_14() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____fastRng_14)); }
	inline RandomNumberGenerator_t386037858 * get__fastRng_14() const { return ____fastRng_14; }
	inline RandomNumberGenerator_t386037858 ** get_address_of__fastRng_14() { return &____fastRng_14; }
	inline void set__fastRng_14(RandomNumberGenerator_t386037858 * value)
	{
		____fastRng_14 = value;
		Il2CppCodeGenWriteBarrier((&____fastRng_14), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUID_T_H
#ifndef ARUSERANCHOR_T1406831531_H
#define ARUSERANCHOR_T1406831531_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.ARUserAnchor
struct  ARUserAnchor_t1406831531 
{
public:
	// System.String UnityEngine.XR.iOS.ARUserAnchor::identifier
	String_t* ___identifier_0;
	// UnityEngine.Matrix4x4 UnityEngine.XR.iOS.ARUserAnchor::transform
	Matrix4x4_t1817901843  ___transform_1;

public:
	inline static int32_t get_offset_of_identifier_0() { return static_cast<int32_t>(offsetof(ARUserAnchor_t1406831531, ___identifier_0)); }
	inline String_t* get_identifier_0() const { return ___identifier_0; }
	inline String_t** get_address_of_identifier_0() { return &___identifier_0; }
	inline void set_identifier_0(String_t* value)
	{
		___identifier_0 = value;
		Il2CppCodeGenWriteBarrier((&___identifier_0), value);
	}

	inline static int32_t get_offset_of_transform_1() { return static_cast<int32_t>(offsetof(ARUserAnchor_t1406831531, ___transform_1)); }
	inline Matrix4x4_t1817901843  get_transform_1() const { return ___transform_1; }
	inline Matrix4x4_t1817901843 * get_address_of_transform_1() { return &___transform_1; }
	inline void set_transform_1(Matrix4x4_t1817901843  value)
	{
		___transform_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.XR.iOS.ARUserAnchor
struct ARUserAnchor_t1406831531_marshaled_pinvoke
{
	char* ___identifier_0;
	Matrix4x4_t1817901843  ___transform_1;
};
// Native definition for COM marshalling of UnityEngine.XR.iOS.ARUserAnchor
struct ARUserAnchor_t1406831531_marshaled_com
{
	Il2CppChar* ___identifier_0;
	Matrix4x4_t1817901843  ___transform_1;
};
#endif // ARUSERANCHOR_T1406831531_H
#ifndef TYPEFILTERLEVEL_T977535029_H
#define TYPEFILTERLEVEL_T977535029_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.Formatters.TypeFilterLevel
struct  TypeFilterLevel_t977535029 
{
public:
	// System.Int32 System.Runtime.Serialization.Formatters.TypeFilterLevel::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TypeFilterLevel_t977535029, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEFILTERLEVEL_T977535029_H
#ifndef ARTEXTUREHANDLES_T852411561_H
#define ARTEXTUREHANDLES_T852411561_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.ARTextureHandles
struct  ARTextureHandles_t852411561 
{
public:
	// System.IntPtr UnityEngine.XR.iOS.ARTextureHandles::textureY
	intptr_t ___textureY_0;
	// System.IntPtr UnityEngine.XR.iOS.ARTextureHandles::textureCbCr
	intptr_t ___textureCbCr_1;

public:
	inline static int32_t get_offset_of_textureY_0() { return static_cast<int32_t>(offsetof(ARTextureHandles_t852411561, ___textureY_0)); }
	inline intptr_t get_textureY_0() const { return ___textureY_0; }
	inline intptr_t* get_address_of_textureY_0() { return &___textureY_0; }
	inline void set_textureY_0(intptr_t value)
	{
		___textureY_0 = value;
	}

	inline static int32_t get_offset_of_textureCbCr_1() { return static_cast<int32_t>(offsetof(ARTextureHandles_t852411561, ___textureCbCr_1)); }
	inline intptr_t get_textureCbCr_1() const { return ___textureCbCr_1; }
	inline intptr_t* get_address_of_textureCbCr_1() { return &___textureCbCr_1; }
	inline void set_textureCbCr_1(intptr_t value)
	{
		___textureCbCr_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARTEXTUREHANDLES_T852411561_H
#ifndef ARPLANEANCHORALIGNMENT_T2311256121_H
#define ARPLANEANCHORALIGNMENT_T2311256121_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.ARPlaneAnchorAlignment
struct  ARPlaneAnchorAlignment_t2311256121 
{
public:
	// System.Int64 UnityEngine.XR.iOS.ARPlaneAnchorAlignment::value__
	int64_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ARPlaneAnchorAlignment_t2311256121, ___value___1)); }
	inline int64_t get_value___1() const { return ___value___1; }
	inline int64_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int64_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARPLANEANCHORALIGNMENT_T2311256121_H
#ifndef DELEGATE_T1188392813_H
#define DELEGATE_T1188392813_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t1188392813  : public RuntimeObject
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
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_5;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_6;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_7;
	// System.DelegateData System.Delegate::data
	DelegateData_t1677132599 * ___data_8;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_method_code_5() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_code_5)); }
	inline intptr_t get_method_code_5() const { return ___method_code_5; }
	inline intptr_t* get_address_of_method_code_5() { return &___method_code_5; }
	inline void set_method_code_5(intptr_t value)
	{
		___method_code_5 = value;
	}

	inline static int32_t get_offset_of_method_info_6() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_info_6)); }
	inline MethodInfo_t * get_method_info_6() const { return ___method_info_6; }
	inline MethodInfo_t ** get_address_of_method_info_6() { return &___method_info_6; }
	inline void set_method_info_6(MethodInfo_t * value)
	{
		___method_info_6 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_6), value);
	}

	inline static int32_t get_offset_of_original_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___original_method_info_7)); }
	inline MethodInfo_t * get_original_method_info_7() const { return ___original_method_info_7; }
	inline MethodInfo_t ** get_address_of_original_method_info_7() { return &___original_method_info_7; }
	inline void set_original_method_info_7(MethodInfo_t * value)
	{
		___original_method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_7), value);
	}

	inline static int32_t get_offset_of_data_8() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___data_8)); }
	inline DelegateData_t1677132599 * get_data_8() const { return ___data_8; }
	inline DelegateData_t1677132599 ** get_address_of_data_8() { return &___data_8; }
	inline void set_data_8(DelegateData_t1677132599 * value)
	{
		___data_8 = value;
		Il2CppCodeGenWriteBarrier((&___data_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATE_T1188392813_H
#ifndef STREAMINGCONTEXTSTATES_T3580100459_H
#define STREAMINGCONTEXTSTATES_T3580100459_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.StreamingContextStates
struct  StreamingContextStates_t3580100459 
{
public:
	// System.Int32 System.Runtime.Serialization.StreamingContextStates::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(StreamingContextStates_t3580100459, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STREAMINGCONTEXTSTATES_T3580100459_H
#ifndef GCHANDLETYPE_T3432586689_H
#define GCHANDLETYPE_T3432586689_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.GCHandleType
struct  GCHandleType_t3432586689 
{
public:
	// System.Int32 System.Runtime.InteropServices.GCHandleType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(GCHandleType_t3432586689, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GCHANDLETYPE_T3432586689_H
#ifndef CUBEMAPFACE_T1358225318_H
#define CUBEMAPFACE_T1358225318_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CubemapFace
struct  CubemapFace_t1358225318 
{
public:
	// System.Int32 UnityEngine.CubemapFace::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CubemapFace_t1358225318, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CUBEMAPFACE_T1358225318_H
#ifndef SERIALIZABLEFROMEDITORMESSAGE_T3245497382_H
#define SERIALIZABLEFROMEDITORMESSAGE_T3245497382_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Utils.serializableFromEditorMessage
struct  serializableFromEditorMessage_t3245497382  : public RuntimeObject
{
public:
	// System.Guid Utils.serializableFromEditorMessage::subMessageId
	Guid_t  ___subMessageId_0;
	// Utils.serializableARKitInit Utils.serializableFromEditorMessage::arkitConfigMsg
	serializableARKitInit_t3885066048 * ___arkitConfigMsg_1;

public:
	inline static int32_t get_offset_of_subMessageId_0() { return static_cast<int32_t>(offsetof(serializableFromEditorMessage_t3245497382, ___subMessageId_0)); }
	inline Guid_t  get_subMessageId_0() const { return ___subMessageId_0; }
	inline Guid_t * get_address_of_subMessageId_0() { return &___subMessageId_0; }
	inline void set_subMessageId_0(Guid_t  value)
	{
		___subMessageId_0 = value;
	}

	inline static int32_t get_offset_of_arkitConfigMsg_1() { return static_cast<int32_t>(offsetof(serializableFromEditorMessage_t3245497382, ___arkitConfigMsg_1)); }
	inline serializableARKitInit_t3885066048 * get_arkitConfigMsg_1() const { return ___arkitConfigMsg_1; }
	inline serializableARKitInit_t3885066048 ** get_address_of_arkitConfigMsg_1() { return &___arkitConfigMsg_1; }
	inline void set_arkitConfigMsg_1(serializableARKitInit_t3885066048 * value)
	{
		___arkitConfigMsg_1 = value;
		Il2CppCodeGenWriteBarrier((&___arkitConfigMsg_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZABLEFROMEDITORMESSAGE_T3245497382_H
#ifndef FORMATTERTYPESTYLE_T3400733584_H
#define FORMATTERTYPESTYLE_T3400733584_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.Formatters.FormatterTypeStyle
struct  FormatterTypeStyle_t3400733584 
{
public:
	// System.Int32 System.Runtime.Serialization.Formatters.FormatterTypeStyle::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(FormatterTypeStyle_t3400733584, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FORMATTERTYPESTYLE_T3400733584_H
#ifndef TOUCHTYPE_T2034578258_H
#define TOUCHTYPE_T2034578258_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TouchType
struct  TouchType_t2034578258 
{
public:
	// System.Int32 UnityEngine.TouchType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TouchType_t2034578258, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TOUCHTYPE_T2034578258_H
#ifndef TEXTUREWRAPMODE_T584250749_H
#define TEXTUREWRAPMODE_T584250749_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TextureWrapMode
struct  TextureWrapMode_t584250749 
{
public:
	// System.Int32 UnityEngine.TextureWrapMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TextureWrapMode_t584250749, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTUREWRAPMODE_T584250749_H
#ifndef FILTERMODE_T3761284007_H
#define FILTERMODE_T3761284007_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.FilterMode
struct  FilterMode_t3761284007 
{
public:
	// System.Int32 UnityEngine.FilterMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(FilterMode_t3761284007, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FILTERMODE_T3761284007_H
#ifndef TEXTUREFORMAT_T2701165832_H
#define TEXTUREFORMAT_T2701165832_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TextureFormat
struct  TextureFormat_t2701165832 
{
public:
	// System.Int32 UnityEngine.TextureFormat::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TextureFormat_t2701165832, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTUREFORMAT_T2701165832_H
#ifndef COMMANDBUFFER_T2206337031_H
#define COMMANDBUFFER_T2206337031_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rendering.CommandBuffer
struct  CommandBuffer_t2206337031  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Rendering.CommandBuffer::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(CommandBuffer_t2206337031, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMMANDBUFFER_T2206337031_H
#ifndef CAMERAEVENT_T2033959522_H
#define CAMERAEVENT_T2033959522_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rendering.CameraEvent
struct  CameraEvent_t2033959522 
{
public:
	// System.Int32 UnityEngine.Rendering.CameraEvent::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CameraEvent_t2033959522, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERAEVENT_T2033959522_H
#ifndef BUILTINRENDERTEXTURETYPE_T2399837169_H
#define BUILTINRENDERTEXTURETYPE_T2399837169_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rendering.BuiltinRenderTextureType
struct  BuiltinRenderTextureType_t2399837169 
{
public:
	// System.Int32 UnityEngine.Rendering.BuiltinRenderTextureType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(BuiltinRenderTextureType_t2399837169, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BUILTINRENDERTEXTURETYPE_T2399837169_H
#ifndef FORMATTERASSEMBLYSTYLE_T868039825_H
#define FORMATTERASSEMBLYSTYLE_T868039825_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.Formatters.FormatterAssemblyStyle
struct  FormatterAssemblyStyle_t868039825 
{
public:
	// System.Int32 System.Runtime.Serialization.Formatters.FormatterAssemblyStyle::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(FormatterAssemblyStyle_t868039825, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FORMATTERASSEMBLYSTYLE_T868039825_H
#ifndef RUNTIMEFIELDHANDLE_T1871169219_H
#define RUNTIMEFIELDHANDLE_T1871169219_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeFieldHandle
struct  RuntimeFieldHandle_t1871169219 
{
public:
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeFieldHandle_t1871169219, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEFIELDHANDLE_T1871169219_H
#ifndef U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T3057255371_H
#define U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T3057255371_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>
struct  U3CPrivateImplementationDetailsU3E_t3057255371  : public RuntimeObject
{
public:

public:
};

struct U3CPrivateImplementationDetailsU3E_t3057255371_StaticFields
{
public:
	// <PrivateImplementationDetails>/$ArrayType=24 <PrivateImplementationDetails>::$field-9365FDAD4BD75AEF9446E0B22483D217BE36E309
	U24ArrayTypeU3D24_t2467506693  ___U24fieldU2D9365FDAD4BD75AEF9446E0B22483D217BE36E309_0;
	// <PrivateImplementationDetails>/$ArrayType=24 <PrivateImplementationDetails>::$field-8E7629AD5AF686202B8CB7C014505C432FFE31E6
	U24ArrayTypeU3D24_t2467506693  ___U24fieldU2D8E7629AD5AF686202B8CB7C014505C432FFE31E6_1;

public:
	inline static int32_t get_offset_of_U24fieldU2D9365FDAD4BD75AEF9446E0B22483D217BE36E309_0() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255371_StaticFields, ___U24fieldU2D9365FDAD4BD75AEF9446E0B22483D217BE36E309_0)); }
	inline U24ArrayTypeU3D24_t2467506693  get_U24fieldU2D9365FDAD4BD75AEF9446E0B22483D217BE36E309_0() const { return ___U24fieldU2D9365FDAD4BD75AEF9446E0B22483D217BE36E309_0; }
	inline U24ArrayTypeU3D24_t2467506693 * get_address_of_U24fieldU2D9365FDAD4BD75AEF9446E0B22483D217BE36E309_0() { return &___U24fieldU2D9365FDAD4BD75AEF9446E0B22483D217BE36E309_0; }
	inline void set_U24fieldU2D9365FDAD4BD75AEF9446E0B22483D217BE36E309_0(U24ArrayTypeU3D24_t2467506693  value)
	{
		___U24fieldU2D9365FDAD4BD75AEF9446E0B22483D217BE36E309_0 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2D8E7629AD5AF686202B8CB7C014505C432FFE31E6_1() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255371_StaticFields, ___U24fieldU2D8E7629AD5AF686202B8CB7C014505C432FFE31E6_1)); }
	inline U24ArrayTypeU3D24_t2467506693  get_U24fieldU2D8E7629AD5AF686202B8CB7C014505C432FFE31E6_1() const { return ___U24fieldU2D8E7629AD5AF686202B8CB7C014505C432FFE31E6_1; }
	inline U24ArrayTypeU3D24_t2467506693 * get_address_of_U24fieldU2D8E7629AD5AF686202B8CB7C014505C432FFE31E6_1() { return &___U24fieldU2D8E7629AD5AF686202B8CB7C014505C432FFE31E6_1; }
	inline void set_U24fieldU2D8E7629AD5AF686202B8CB7C014505C432FFE31E6_1(U24ArrayTypeU3D24_t2467506693  value)
	{
		___U24fieldU2D8E7629AD5AF686202B8CB7C014505C432FFE31E6_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T3057255371_H
#ifndef UNITYVIDEOPARAMS_T4155354995_H
#define UNITYVIDEOPARAMS_T4155354995_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityVideoParams
struct  UnityVideoParams_t4155354995 
{
public:
	// System.Int32 UnityEngine.XR.iOS.UnityVideoParams::yWidth
	int32_t ___yWidth_0;
	// System.Int32 UnityEngine.XR.iOS.UnityVideoParams::yHeight
	int32_t ___yHeight_1;
	// System.Int32 UnityEngine.XR.iOS.UnityVideoParams::screenOrientation
	int32_t ___screenOrientation_2;
	// System.Single UnityEngine.XR.iOS.UnityVideoParams::texCoordScale
	float ___texCoordScale_3;
	// System.IntPtr UnityEngine.XR.iOS.UnityVideoParams::cvPixelBufferPtr
	intptr_t ___cvPixelBufferPtr_4;

public:
	inline static int32_t get_offset_of_yWidth_0() { return static_cast<int32_t>(offsetof(UnityVideoParams_t4155354995, ___yWidth_0)); }
	inline int32_t get_yWidth_0() const { return ___yWidth_0; }
	inline int32_t* get_address_of_yWidth_0() { return &___yWidth_0; }
	inline void set_yWidth_0(int32_t value)
	{
		___yWidth_0 = value;
	}

	inline static int32_t get_offset_of_yHeight_1() { return static_cast<int32_t>(offsetof(UnityVideoParams_t4155354995, ___yHeight_1)); }
	inline int32_t get_yHeight_1() const { return ___yHeight_1; }
	inline int32_t* get_address_of_yHeight_1() { return &___yHeight_1; }
	inline void set_yHeight_1(int32_t value)
	{
		___yHeight_1 = value;
	}

	inline static int32_t get_offset_of_screenOrientation_2() { return static_cast<int32_t>(offsetof(UnityVideoParams_t4155354995, ___screenOrientation_2)); }
	inline int32_t get_screenOrientation_2() const { return ___screenOrientation_2; }
	inline int32_t* get_address_of_screenOrientation_2() { return &___screenOrientation_2; }
	inline void set_screenOrientation_2(int32_t value)
	{
		___screenOrientation_2 = value;
	}

	inline static int32_t get_offset_of_texCoordScale_3() { return static_cast<int32_t>(offsetof(UnityVideoParams_t4155354995, ___texCoordScale_3)); }
	inline float get_texCoordScale_3() const { return ___texCoordScale_3; }
	inline float* get_address_of_texCoordScale_3() { return &___texCoordScale_3; }
	inline void set_texCoordScale_3(float value)
	{
		___texCoordScale_3 = value;
	}

	inline static int32_t get_offset_of_cvPixelBufferPtr_4() { return static_cast<int32_t>(offsetof(UnityVideoParams_t4155354995, ___cvPixelBufferPtr_4)); }
	inline intptr_t get_cvPixelBufferPtr_4() const { return ___cvPixelBufferPtr_4; }
	inline intptr_t* get_address_of_cvPixelBufferPtr_4() { return &___cvPixelBufferPtr_4; }
	inline void set_cvPixelBufferPtr_4(intptr_t value)
	{
		___cvPixelBufferPtr_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYVIDEOPARAMS_T4155354995_H
#ifndef UNITYARMATRIX4X4_T4073345847_H
#define UNITYARMATRIX4X4_T4073345847_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARMatrix4x4
struct  UnityARMatrix4x4_t4073345847 
{
public:
	// UnityEngine.Vector4 UnityEngine.XR.iOS.UnityARMatrix4x4::column0
	Vector4_t3319028937  ___column0_0;
	// UnityEngine.Vector4 UnityEngine.XR.iOS.UnityARMatrix4x4::column1
	Vector4_t3319028937  ___column1_1;
	// UnityEngine.Vector4 UnityEngine.XR.iOS.UnityARMatrix4x4::column2
	Vector4_t3319028937  ___column2_2;
	// UnityEngine.Vector4 UnityEngine.XR.iOS.UnityARMatrix4x4::column3
	Vector4_t3319028937  ___column3_3;

public:
	inline static int32_t get_offset_of_column0_0() { return static_cast<int32_t>(offsetof(UnityARMatrix4x4_t4073345847, ___column0_0)); }
	inline Vector4_t3319028937  get_column0_0() const { return ___column0_0; }
	inline Vector4_t3319028937 * get_address_of_column0_0() { return &___column0_0; }
	inline void set_column0_0(Vector4_t3319028937  value)
	{
		___column0_0 = value;
	}

	inline static int32_t get_offset_of_column1_1() { return static_cast<int32_t>(offsetof(UnityARMatrix4x4_t4073345847, ___column1_1)); }
	inline Vector4_t3319028937  get_column1_1() const { return ___column1_1; }
	inline Vector4_t3319028937 * get_address_of_column1_1() { return &___column1_1; }
	inline void set_column1_1(Vector4_t3319028937  value)
	{
		___column1_1 = value;
	}

	inline static int32_t get_offset_of_column2_2() { return static_cast<int32_t>(offsetof(UnityARMatrix4x4_t4073345847, ___column2_2)); }
	inline Vector4_t3319028937  get_column2_2() const { return ___column2_2; }
	inline Vector4_t3319028937 * get_address_of_column2_2() { return &___column2_2; }
	inline void set_column2_2(Vector4_t3319028937  value)
	{
		___column2_2 = value;
	}

	inline static int32_t get_offset_of_column3_3() { return static_cast<int32_t>(offsetof(UnityARMatrix4x4_t4073345847, ___column3_3)); }
	inline Vector4_t3319028937  get_column3_3() const { return ___column3_3; }
	inline Vector4_t3319028937 * get_address_of_column3_3() { return &___column3_3; }
	inline void set_column3_3(Vector4_t3319028937  value)
	{
		___column3_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYARMATRIX4X4_T4073345847_H
#ifndef ARTRACKINGSTATEREASON_T2348933773_H
#define ARTRACKINGSTATEREASON_T2348933773_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.ARTrackingStateReason
struct  ARTrackingStateReason_t2348933773 
{
public:
	// System.Int32 UnityEngine.XR.iOS.ARTrackingStateReason::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ARTrackingStateReason_t2348933773, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARTRACKINGSTATEREASON_T2348933773_H
#ifndef ARTRACKINGSTATE_T3182235352_H
#define ARTRACKINGSTATE_T3182235352_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.ARTrackingState
struct  ARTrackingState_t3182235352 
{
public:
	// System.Int32 UnityEngine.XR.iOS.ARTrackingState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ARTrackingState_t3182235352, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARTRACKINGSTATE_T3182235352_H
#ifndef TOUCHPHASE_T72348083_H
#define TOUCHPHASE_T72348083_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TouchPhase
struct  TouchPhase_t72348083 
{
public:
	// System.Int32 UnityEngine.TouchPhase::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TouchPhase_t72348083, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TOUCHPHASE_T72348083_H
#ifndef UNITYARPLANEDETECTION_T1367733575_H
#define UNITYARPLANEDETECTION_T1367733575_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARPlaneDetection
struct  UnityARPlaneDetection_t1367733575 
{
public:
	// System.Int32 UnityEngine.XR.iOS.UnityARPlaneDetection::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(UnityARPlaneDetection_t1367733575, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYARPLANEDETECTION_T1367733575_H
#ifndef UNITYARSESSIONRUNOPTION_T942967030_H
#define UNITYARSESSIONRUNOPTION_T942967030_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARSessionRunOption
struct  UnityARSessionRunOption_t942967030 
{
public:
	// System.Int32 UnityEngine.XR.iOS.UnityARSessionRunOption::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(UnityARSessionRunOption_t942967030, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYARSESSIONRUNOPTION_T942967030_H
#ifndef UNITYARALIGNMENT_T3792119710_H
#define UNITYARALIGNMENT_T3792119710_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARAlignment
struct  UnityARAlignment_t3792119710 
{
public:
	// System.Int32 UnityEngine.XR.iOS.UnityARAlignment::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(UnityARAlignment_t3792119710, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYARALIGNMENT_T3792119710_H
#ifndef ARHITTESTRESULTTYPE_T475323638_H
#define ARHITTESTRESULTTYPE_T475323638_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.ARHitTestResultType
struct  ARHitTestResultType_t475323638 
{
public:
	// System.Int64 UnityEngine.XR.iOS.ARHitTestResultType::value__
	int64_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ARHitTestResultType_t475323638, ___value___1)); }
	inline int64_t get_value___1() const { return ___value___1; }
	inline int64_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int64_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARHITTESTRESULTTYPE_T475323638_H
#ifndef OBJECT_T631007953_H
#define OBJECT_T631007953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t631007953  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t631007953, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t631007953_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t631007953_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T631007953_H
#ifndef UNITYARUSERANCHORDATA_T1976826249_H
#define UNITYARUSERANCHORDATA_T1976826249_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARUserAnchorData
struct  UnityARUserAnchorData_t1976826249 
{
public:
	// System.IntPtr UnityEngine.XR.iOS.UnityARUserAnchorData::ptrIdentifier
	intptr_t ___ptrIdentifier_0;
	// UnityEngine.XR.iOS.UnityARMatrix4x4 UnityEngine.XR.iOS.UnityARUserAnchorData::transform
	UnityARMatrix4x4_t4073345847  ___transform_1;

public:
	inline static int32_t get_offset_of_ptrIdentifier_0() { return static_cast<int32_t>(offsetof(UnityARUserAnchorData_t1976826249, ___ptrIdentifier_0)); }
	inline intptr_t get_ptrIdentifier_0() const { return ___ptrIdentifier_0; }
	inline intptr_t* get_address_of_ptrIdentifier_0() { return &___ptrIdentifier_0; }
	inline void set_ptrIdentifier_0(intptr_t value)
	{
		___ptrIdentifier_0 = value;
	}

	inline static int32_t get_offset_of_transform_1() { return static_cast<int32_t>(offsetof(UnityARUserAnchorData_t1976826249, ___transform_1)); }
	inline UnityARMatrix4x4_t4073345847  get_transform_1() const { return ___transform_1; }
	inline UnityARMatrix4x4_t4073345847 * get_address_of_transform_1() { return &___transform_1; }
	inline void set_transform_1(UnityARMatrix4x4_t4073345847  value)
	{
		___transform_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYARUSERANCHORDATA_T1976826249_H
#ifndef ARHITTESTRESULT_T1279023930_H
#define ARHITTESTRESULT_T1279023930_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.ARHitTestResult
struct  ARHitTestResult_t1279023930 
{
public:
	// UnityEngine.XR.iOS.ARHitTestResultType UnityEngine.XR.iOS.ARHitTestResult::type
	int64_t ___type_0;
	// System.Double UnityEngine.XR.iOS.ARHitTestResult::distance
	double ___distance_1;
	// UnityEngine.Matrix4x4 UnityEngine.XR.iOS.ARHitTestResult::localTransform
	Matrix4x4_t1817901843  ___localTransform_2;
	// UnityEngine.Matrix4x4 UnityEngine.XR.iOS.ARHitTestResult::worldTransform
	Matrix4x4_t1817901843  ___worldTransform_3;
	// System.String UnityEngine.XR.iOS.ARHitTestResult::anchorIdentifier
	String_t* ___anchorIdentifier_4;
	// System.Boolean UnityEngine.XR.iOS.ARHitTestResult::isValid
	bool ___isValid_5;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(ARHitTestResult_t1279023930, ___type_0)); }
	inline int64_t get_type_0() const { return ___type_0; }
	inline int64_t* get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(int64_t value)
	{
		___type_0 = value;
	}

	inline static int32_t get_offset_of_distance_1() { return static_cast<int32_t>(offsetof(ARHitTestResult_t1279023930, ___distance_1)); }
	inline double get_distance_1() const { return ___distance_1; }
	inline double* get_address_of_distance_1() { return &___distance_1; }
	inline void set_distance_1(double value)
	{
		___distance_1 = value;
	}

	inline static int32_t get_offset_of_localTransform_2() { return static_cast<int32_t>(offsetof(ARHitTestResult_t1279023930, ___localTransform_2)); }
	inline Matrix4x4_t1817901843  get_localTransform_2() const { return ___localTransform_2; }
	inline Matrix4x4_t1817901843 * get_address_of_localTransform_2() { return &___localTransform_2; }
	inline void set_localTransform_2(Matrix4x4_t1817901843  value)
	{
		___localTransform_2 = value;
	}

	inline static int32_t get_offset_of_worldTransform_3() { return static_cast<int32_t>(offsetof(ARHitTestResult_t1279023930, ___worldTransform_3)); }
	inline Matrix4x4_t1817901843  get_worldTransform_3() const { return ___worldTransform_3; }
	inline Matrix4x4_t1817901843 * get_address_of_worldTransform_3() { return &___worldTransform_3; }
	inline void set_worldTransform_3(Matrix4x4_t1817901843  value)
	{
		___worldTransform_3 = value;
	}

	inline static int32_t get_offset_of_anchorIdentifier_4() { return static_cast<int32_t>(offsetof(ARHitTestResult_t1279023930, ___anchorIdentifier_4)); }
	inline String_t* get_anchorIdentifier_4() const { return ___anchorIdentifier_4; }
	inline String_t** get_address_of_anchorIdentifier_4() { return &___anchorIdentifier_4; }
	inline void set_anchorIdentifier_4(String_t* value)
	{
		___anchorIdentifier_4 = value;
		Il2CppCodeGenWriteBarrier((&___anchorIdentifier_4), value);
	}

	inline static int32_t get_offset_of_isValid_5() { return static_cast<int32_t>(offsetof(ARHitTestResult_t1279023930, ___isValid_5)); }
	inline bool get_isValid_5() const { return ___isValid_5; }
	inline bool* get_address_of_isValid_5() { return &___isValid_5; }
	inline void set_isValid_5(bool value)
	{
		___isValid_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.XR.iOS.ARHitTestResult
struct ARHitTestResult_t1279023930_marshaled_pinvoke
{
	int64_t ___type_0;
	double ___distance_1;
	Matrix4x4_t1817901843  ___localTransform_2;
	Matrix4x4_t1817901843  ___worldTransform_3;
	char* ___anchorIdentifier_4;
	int32_t ___isValid_5;
};
// Native definition for COM marshalling of UnityEngine.XR.iOS.ARHitTestResult
struct ARHitTestResult_t1279023930_marshaled_com
{
	int64_t ___type_0;
	double ___distance_1;
	Matrix4x4_t1817901843  ___localTransform_2;
	Matrix4x4_t1817901843  ___worldTransform_3;
	Il2CppChar* ___anchorIdentifier_4;
	int32_t ___isValid_5;
};
#endif // ARHITTESTRESULT_T1279023930_H
#ifndef MATERIAL_T340375123_H
#define MATERIAL_T340375123_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Material
struct  Material_t340375123  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATERIAL_T340375123_H
#ifndef TEXTURE_T3661962703_H
#define TEXTURE_T3661962703_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Texture
struct  Texture_t3661962703  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTURE_T3661962703_H
#ifndef STREAMINGCONTEXT_T3711869237_H
#define STREAMINGCONTEXT_T3711869237_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.StreamingContext
struct  StreamingContext_t3711869237 
{
public:
	// System.Runtime.Serialization.StreamingContextStates System.Runtime.Serialization.StreamingContext::state
	int32_t ___state_0;
	// System.Object System.Runtime.Serialization.StreamingContext::additional
	RuntimeObject * ___additional_1;

public:
	inline static int32_t get_offset_of_state_0() { return static_cast<int32_t>(offsetof(StreamingContext_t3711869237, ___state_0)); }
	inline int32_t get_state_0() const { return ___state_0; }
	inline int32_t* get_address_of_state_0() { return &___state_0; }
	inline void set_state_0(int32_t value)
	{
		___state_0 = value;
	}

	inline static int32_t get_offset_of_additional_1() { return static_cast<int32_t>(offsetof(StreamingContext_t3711869237, ___additional_1)); }
	inline RuntimeObject * get_additional_1() const { return ___additional_1; }
	inline RuntimeObject ** get_address_of_additional_1() { return &___additional_1; }
	inline void set_additional_1(RuntimeObject * value)
	{
		___additional_1 = value;
		Il2CppCodeGenWriteBarrier((&___additional_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t3711869237_marshaled_pinvoke
{
	int32_t ___state_0;
	Il2CppIUnknown* ___additional_1;
};
// Native definition for COM marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t3711869237_marshaled_com
{
	int32_t ___state_0;
	Il2CppIUnknown* ___additional_1;
};
#endif // STREAMINGCONTEXT_T3711869237_H
#ifndef INTERNAL_UNITYARCAMERA_T3920739388_H
#define INTERNAL_UNITYARCAMERA_T3920739388_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.internal_UnityARCamera
struct  internal_UnityARCamera_t3920739388 
{
public:
	// UnityEngine.XR.iOS.UnityARMatrix4x4 UnityEngine.XR.iOS.internal_UnityARCamera::worldTransform
	UnityARMatrix4x4_t4073345847  ___worldTransform_0;
	// UnityEngine.XR.iOS.UnityARMatrix4x4 UnityEngine.XR.iOS.internal_UnityARCamera::projectionMatrix
	UnityARMatrix4x4_t4073345847  ___projectionMatrix_1;
	// UnityEngine.XR.iOS.ARTrackingState UnityEngine.XR.iOS.internal_UnityARCamera::trackingState
	int32_t ___trackingState_2;
	// UnityEngine.XR.iOS.ARTrackingStateReason UnityEngine.XR.iOS.internal_UnityARCamera::trackingReason
	int32_t ___trackingReason_3;
	// UnityEngine.XR.iOS.UnityVideoParams UnityEngine.XR.iOS.internal_UnityARCamera::videoParams
	UnityVideoParams_t4155354995  ___videoParams_4;
	// UnityEngine.XR.iOS.UnityARLightEstimate UnityEngine.XR.iOS.internal_UnityARCamera::lightEstimation
	UnityARLightEstimate_t1498306117  ___lightEstimation_5;
	// UnityEngine.XR.iOS.UnityARMatrix4x4 UnityEngine.XR.iOS.internal_UnityARCamera::displayTransform
	UnityARMatrix4x4_t4073345847  ___displayTransform_6;
	// System.UInt32 UnityEngine.XR.iOS.internal_UnityARCamera::getPointCloudData
	uint32_t ___getPointCloudData_7;

public:
	inline static int32_t get_offset_of_worldTransform_0() { return static_cast<int32_t>(offsetof(internal_UnityARCamera_t3920739388, ___worldTransform_0)); }
	inline UnityARMatrix4x4_t4073345847  get_worldTransform_0() const { return ___worldTransform_0; }
	inline UnityARMatrix4x4_t4073345847 * get_address_of_worldTransform_0() { return &___worldTransform_0; }
	inline void set_worldTransform_0(UnityARMatrix4x4_t4073345847  value)
	{
		___worldTransform_0 = value;
	}

	inline static int32_t get_offset_of_projectionMatrix_1() { return static_cast<int32_t>(offsetof(internal_UnityARCamera_t3920739388, ___projectionMatrix_1)); }
	inline UnityARMatrix4x4_t4073345847  get_projectionMatrix_1() const { return ___projectionMatrix_1; }
	inline UnityARMatrix4x4_t4073345847 * get_address_of_projectionMatrix_1() { return &___projectionMatrix_1; }
	inline void set_projectionMatrix_1(UnityARMatrix4x4_t4073345847  value)
	{
		___projectionMatrix_1 = value;
	}

	inline static int32_t get_offset_of_trackingState_2() { return static_cast<int32_t>(offsetof(internal_UnityARCamera_t3920739388, ___trackingState_2)); }
	inline int32_t get_trackingState_2() const { return ___trackingState_2; }
	inline int32_t* get_address_of_trackingState_2() { return &___trackingState_2; }
	inline void set_trackingState_2(int32_t value)
	{
		___trackingState_2 = value;
	}

	inline static int32_t get_offset_of_trackingReason_3() { return static_cast<int32_t>(offsetof(internal_UnityARCamera_t3920739388, ___trackingReason_3)); }
	inline int32_t get_trackingReason_3() const { return ___trackingReason_3; }
	inline int32_t* get_address_of_trackingReason_3() { return &___trackingReason_3; }
	inline void set_trackingReason_3(int32_t value)
	{
		___trackingReason_3 = value;
	}

	inline static int32_t get_offset_of_videoParams_4() { return static_cast<int32_t>(offsetof(internal_UnityARCamera_t3920739388, ___videoParams_4)); }
	inline UnityVideoParams_t4155354995  get_videoParams_4() const { return ___videoParams_4; }
	inline UnityVideoParams_t4155354995 * get_address_of_videoParams_4() { return &___videoParams_4; }
	inline void set_videoParams_4(UnityVideoParams_t4155354995  value)
	{
		___videoParams_4 = value;
	}

	inline static int32_t get_offset_of_lightEstimation_5() { return static_cast<int32_t>(offsetof(internal_UnityARCamera_t3920739388, ___lightEstimation_5)); }
	inline UnityARLightEstimate_t1498306117  get_lightEstimation_5() const { return ___lightEstimation_5; }
	inline UnityARLightEstimate_t1498306117 * get_address_of_lightEstimation_5() { return &___lightEstimation_5; }
	inline void set_lightEstimation_5(UnityARLightEstimate_t1498306117  value)
	{
		___lightEstimation_5 = value;
	}

	inline static int32_t get_offset_of_displayTransform_6() { return static_cast<int32_t>(offsetof(internal_UnityARCamera_t3920739388, ___displayTransform_6)); }
	inline UnityARMatrix4x4_t4073345847  get_displayTransform_6() const { return ___displayTransform_6; }
	inline UnityARMatrix4x4_t4073345847 * get_address_of_displayTransform_6() { return &___displayTransform_6; }
	inline void set_displayTransform_6(UnityARMatrix4x4_t4073345847  value)
	{
		___displayTransform_6 = value;
	}

	inline static int32_t get_offset_of_getPointCloudData_7() { return static_cast<int32_t>(offsetof(internal_UnityARCamera_t3920739388, ___getPointCloudData_7)); }
	inline uint32_t get_getPointCloudData_7() const { return ___getPointCloudData_7; }
	inline uint32_t* get_address_of_getPointCloudData_7() { return &___getPointCloudData_7; }
	inline void set_getPointCloudData_7(uint32_t value)
	{
		___getPointCloudData_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERNAL_UNITYARCAMERA_T3920739388_H
#ifndef MULTICASTDELEGATE_T_H
#define MULTICASTDELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t1188392813
{
public:
	// System.MulticastDelegate System.MulticastDelegate::prev
	MulticastDelegate_t * ___prev_9;
	// System.MulticastDelegate System.MulticastDelegate::kpm_next
	MulticastDelegate_t * ___kpm_next_10;

public:
	inline static int32_t get_offset_of_prev_9() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___prev_9)); }
	inline MulticastDelegate_t * get_prev_9() const { return ___prev_9; }
	inline MulticastDelegate_t ** get_address_of_prev_9() { return &___prev_9; }
	inline void set_prev_9(MulticastDelegate_t * value)
	{
		___prev_9 = value;
		Il2CppCodeGenWriteBarrier((&___prev_9), value);
	}

	inline static int32_t get_offset_of_kpm_next_10() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___kpm_next_10)); }
	inline MulticastDelegate_t * get_kpm_next_10() const { return ___kpm_next_10; }
	inline MulticastDelegate_t ** get_address_of_kpm_next_10() { return &___kpm_next_10; }
	inline void set_kpm_next_10(MulticastDelegate_t * value)
	{
		___kpm_next_10 = value;
		Il2CppCodeGenWriteBarrier((&___kpm_next_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTDELEGATE_T_H
#ifndef COMPONENT_T1923634451_H
#define COMPONENT_T1923634451_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t1923634451  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T1923634451_H
#ifndef UNITYARCAMERA_T2069150450_H
#define UNITYARCAMERA_T2069150450_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARCamera
struct  UnityARCamera_t2069150450 
{
public:
	// UnityEngine.XR.iOS.UnityARMatrix4x4 UnityEngine.XR.iOS.UnityARCamera::worldTransform
	UnityARMatrix4x4_t4073345847  ___worldTransform_0;
	// UnityEngine.XR.iOS.UnityARMatrix4x4 UnityEngine.XR.iOS.UnityARCamera::projectionMatrix
	UnityARMatrix4x4_t4073345847  ___projectionMatrix_1;
	// UnityEngine.XR.iOS.ARTrackingState UnityEngine.XR.iOS.UnityARCamera::trackingState
	int32_t ___trackingState_2;
	// UnityEngine.XR.iOS.ARTrackingStateReason UnityEngine.XR.iOS.UnityARCamera::trackingReason
	int32_t ___trackingReason_3;
	// UnityEngine.XR.iOS.UnityVideoParams UnityEngine.XR.iOS.UnityARCamera::videoParams
	UnityVideoParams_t4155354995  ___videoParams_4;
	// UnityEngine.XR.iOS.UnityARLightEstimate UnityEngine.XR.iOS.UnityARCamera::lightEstimation
	UnityARLightEstimate_t1498306117  ___lightEstimation_5;
	// UnityEngine.XR.iOS.UnityARMatrix4x4 UnityEngine.XR.iOS.UnityARCamera::displayTransform
	UnityARMatrix4x4_t4073345847  ___displayTransform_6;
	// UnityEngine.Vector3[] UnityEngine.XR.iOS.UnityARCamera::pointCloudData
	Vector3U5BU5D_t1718750761* ___pointCloudData_7;

public:
	inline static int32_t get_offset_of_worldTransform_0() { return static_cast<int32_t>(offsetof(UnityARCamera_t2069150450, ___worldTransform_0)); }
	inline UnityARMatrix4x4_t4073345847  get_worldTransform_0() const { return ___worldTransform_0; }
	inline UnityARMatrix4x4_t4073345847 * get_address_of_worldTransform_0() { return &___worldTransform_0; }
	inline void set_worldTransform_0(UnityARMatrix4x4_t4073345847  value)
	{
		___worldTransform_0 = value;
	}

	inline static int32_t get_offset_of_projectionMatrix_1() { return static_cast<int32_t>(offsetof(UnityARCamera_t2069150450, ___projectionMatrix_1)); }
	inline UnityARMatrix4x4_t4073345847  get_projectionMatrix_1() const { return ___projectionMatrix_1; }
	inline UnityARMatrix4x4_t4073345847 * get_address_of_projectionMatrix_1() { return &___projectionMatrix_1; }
	inline void set_projectionMatrix_1(UnityARMatrix4x4_t4073345847  value)
	{
		___projectionMatrix_1 = value;
	}

	inline static int32_t get_offset_of_trackingState_2() { return static_cast<int32_t>(offsetof(UnityARCamera_t2069150450, ___trackingState_2)); }
	inline int32_t get_trackingState_2() const { return ___trackingState_2; }
	inline int32_t* get_address_of_trackingState_2() { return &___trackingState_2; }
	inline void set_trackingState_2(int32_t value)
	{
		___trackingState_2 = value;
	}

	inline static int32_t get_offset_of_trackingReason_3() { return static_cast<int32_t>(offsetof(UnityARCamera_t2069150450, ___trackingReason_3)); }
	inline int32_t get_trackingReason_3() const { return ___trackingReason_3; }
	inline int32_t* get_address_of_trackingReason_3() { return &___trackingReason_3; }
	inline void set_trackingReason_3(int32_t value)
	{
		___trackingReason_3 = value;
	}

	inline static int32_t get_offset_of_videoParams_4() { return static_cast<int32_t>(offsetof(UnityARCamera_t2069150450, ___videoParams_4)); }
	inline UnityVideoParams_t4155354995  get_videoParams_4() const { return ___videoParams_4; }
	inline UnityVideoParams_t4155354995 * get_address_of_videoParams_4() { return &___videoParams_4; }
	inline void set_videoParams_4(UnityVideoParams_t4155354995  value)
	{
		___videoParams_4 = value;
	}

	inline static int32_t get_offset_of_lightEstimation_5() { return static_cast<int32_t>(offsetof(UnityARCamera_t2069150450, ___lightEstimation_5)); }
	inline UnityARLightEstimate_t1498306117  get_lightEstimation_5() const { return ___lightEstimation_5; }
	inline UnityARLightEstimate_t1498306117 * get_address_of_lightEstimation_5() { return &___lightEstimation_5; }
	inline void set_lightEstimation_5(UnityARLightEstimate_t1498306117  value)
	{
		___lightEstimation_5 = value;
	}

	inline static int32_t get_offset_of_displayTransform_6() { return static_cast<int32_t>(offsetof(UnityARCamera_t2069150450, ___displayTransform_6)); }
	inline UnityARMatrix4x4_t4073345847  get_displayTransform_6() const { return ___displayTransform_6; }
	inline UnityARMatrix4x4_t4073345847 * get_address_of_displayTransform_6() { return &___displayTransform_6; }
	inline void set_displayTransform_6(UnityARMatrix4x4_t4073345847  value)
	{
		___displayTransform_6 = value;
	}

	inline static int32_t get_offset_of_pointCloudData_7() { return static_cast<int32_t>(offsetof(UnityARCamera_t2069150450, ___pointCloudData_7)); }
	inline Vector3U5BU5D_t1718750761* get_pointCloudData_7() const { return ___pointCloudData_7; }
	inline Vector3U5BU5D_t1718750761** get_address_of_pointCloudData_7() { return &___pointCloudData_7; }
	inline void set_pointCloudData_7(Vector3U5BU5D_t1718750761* value)
	{
		___pointCloudData_7 = value;
		Il2CppCodeGenWriteBarrier((&___pointCloudData_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.XR.iOS.UnityARCamera
struct UnityARCamera_t2069150450_marshaled_pinvoke
{
	UnityARMatrix4x4_t4073345847  ___worldTransform_0;
	UnityARMatrix4x4_t4073345847  ___projectionMatrix_1;
	int32_t ___trackingState_2;
	int32_t ___trackingReason_3;
	UnityVideoParams_t4155354995  ___videoParams_4;
	UnityARLightEstimate_t1498306117  ___lightEstimation_5;
	UnityARMatrix4x4_t4073345847  ___displayTransform_6;
	Vector3_t3722313464 * ___pointCloudData_7;
};
// Native definition for COM marshalling of UnityEngine.XR.iOS.UnityARCamera
struct UnityARCamera_t2069150450_marshaled_com
{
	UnityARMatrix4x4_t4073345847  ___worldTransform_0;
	UnityARMatrix4x4_t4073345847  ___projectionMatrix_1;
	int32_t ___trackingState_2;
	int32_t ___trackingReason_3;
	UnityVideoParams_t4155354995  ___videoParams_4;
	UnityARLightEstimate_t1498306117  ___lightEstimation_5;
	UnityARMatrix4x4_t4073345847  ___displayTransform_6;
	Vector3_t3722313464 * ___pointCloudData_7;
};
#endif // UNITYARCAMERA_T2069150450_H
#ifndef UNITYARANCHORDATA_T1157236668_H
#define UNITYARANCHORDATA_T1157236668_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARAnchorData
struct  UnityARAnchorData_t1157236668 
{
public:
	// System.IntPtr UnityEngine.XR.iOS.UnityARAnchorData::ptrIdentifier
	intptr_t ___ptrIdentifier_0;
	// UnityEngine.XR.iOS.UnityARMatrix4x4 UnityEngine.XR.iOS.UnityARAnchorData::transform
	UnityARMatrix4x4_t4073345847  ___transform_1;
	// UnityEngine.XR.iOS.ARPlaneAnchorAlignment UnityEngine.XR.iOS.UnityARAnchorData::alignment
	int64_t ___alignment_2;
	// UnityEngine.Vector4 UnityEngine.XR.iOS.UnityARAnchorData::center
	Vector4_t3319028937  ___center_3;
	// UnityEngine.Vector4 UnityEngine.XR.iOS.UnityARAnchorData::extent
	Vector4_t3319028937  ___extent_4;

public:
	inline static int32_t get_offset_of_ptrIdentifier_0() { return static_cast<int32_t>(offsetof(UnityARAnchorData_t1157236668, ___ptrIdentifier_0)); }
	inline intptr_t get_ptrIdentifier_0() const { return ___ptrIdentifier_0; }
	inline intptr_t* get_address_of_ptrIdentifier_0() { return &___ptrIdentifier_0; }
	inline void set_ptrIdentifier_0(intptr_t value)
	{
		___ptrIdentifier_0 = value;
	}

	inline static int32_t get_offset_of_transform_1() { return static_cast<int32_t>(offsetof(UnityARAnchorData_t1157236668, ___transform_1)); }
	inline UnityARMatrix4x4_t4073345847  get_transform_1() const { return ___transform_1; }
	inline UnityARMatrix4x4_t4073345847 * get_address_of_transform_1() { return &___transform_1; }
	inline void set_transform_1(UnityARMatrix4x4_t4073345847  value)
	{
		___transform_1 = value;
	}

	inline static int32_t get_offset_of_alignment_2() { return static_cast<int32_t>(offsetof(UnityARAnchorData_t1157236668, ___alignment_2)); }
	inline int64_t get_alignment_2() const { return ___alignment_2; }
	inline int64_t* get_address_of_alignment_2() { return &___alignment_2; }
	inline void set_alignment_2(int64_t value)
	{
		___alignment_2 = value;
	}

	inline static int32_t get_offset_of_center_3() { return static_cast<int32_t>(offsetof(UnityARAnchorData_t1157236668, ___center_3)); }
	inline Vector4_t3319028937  get_center_3() const { return ___center_3; }
	inline Vector4_t3319028937 * get_address_of_center_3() { return &___center_3; }
	inline void set_center_3(Vector4_t3319028937  value)
	{
		___center_3 = value;
	}

	inline static int32_t get_offset_of_extent_4() { return static_cast<int32_t>(offsetof(UnityARAnchorData_t1157236668, ___extent_4)); }
	inline Vector4_t3319028937  get_extent_4() const { return ___extent_4; }
	inline Vector4_t3319028937 * get_address_of_extent_4() { return &___extent_4; }
	inline void set_extent_4(Vector4_t3319028937  value)
	{
		___extent_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYARANCHORDATA_T1157236668_H
#ifndef ARPLANEANCHOR_T2049372221_H
#define ARPLANEANCHOR_T2049372221_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.ARPlaneAnchor
struct  ARPlaneAnchor_t2049372221 
{
public:
	// System.String UnityEngine.XR.iOS.ARPlaneAnchor::identifier
	String_t* ___identifier_0;
	// UnityEngine.Matrix4x4 UnityEngine.XR.iOS.ARPlaneAnchor::transform
	Matrix4x4_t1817901843  ___transform_1;
	// UnityEngine.XR.iOS.ARPlaneAnchorAlignment UnityEngine.XR.iOS.ARPlaneAnchor::alignment
	int64_t ___alignment_2;
	// UnityEngine.Vector3 UnityEngine.XR.iOS.ARPlaneAnchor::center
	Vector3_t3722313464  ___center_3;
	// UnityEngine.Vector3 UnityEngine.XR.iOS.ARPlaneAnchor::extent
	Vector3_t3722313464  ___extent_4;

public:
	inline static int32_t get_offset_of_identifier_0() { return static_cast<int32_t>(offsetof(ARPlaneAnchor_t2049372221, ___identifier_0)); }
	inline String_t* get_identifier_0() const { return ___identifier_0; }
	inline String_t** get_address_of_identifier_0() { return &___identifier_0; }
	inline void set_identifier_0(String_t* value)
	{
		___identifier_0 = value;
		Il2CppCodeGenWriteBarrier((&___identifier_0), value);
	}

	inline static int32_t get_offset_of_transform_1() { return static_cast<int32_t>(offsetof(ARPlaneAnchor_t2049372221, ___transform_1)); }
	inline Matrix4x4_t1817901843  get_transform_1() const { return ___transform_1; }
	inline Matrix4x4_t1817901843 * get_address_of_transform_1() { return &___transform_1; }
	inline void set_transform_1(Matrix4x4_t1817901843  value)
	{
		___transform_1 = value;
	}

	inline static int32_t get_offset_of_alignment_2() { return static_cast<int32_t>(offsetof(ARPlaneAnchor_t2049372221, ___alignment_2)); }
	inline int64_t get_alignment_2() const { return ___alignment_2; }
	inline int64_t* get_address_of_alignment_2() { return &___alignment_2; }
	inline void set_alignment_2(int64_t value)
	{
		___alignment_2 = value;
	}

	inline static int32_t get_offset_of_center_3() { return static_cast<int32_t>(offsetof(ARPlaneAnchor_t2049372221, ___center_3)); }
	inline Vector3_t3722313464  get_center_3() const { return ___center_3; }
	inline Vector3_t3722313464 * get_address_of_center_3() { return &___center_3; }
	inline void set_center_3(Vector3_t3722313464  value)
	{
		___center_3 = value;
	}

	inline static int32_t get_offset_of_extent_4() { return static_cast<int32_t>(offsetof(ARPlaneAnchor_t2049372221, ___extent_4)); }
	inline Vector3_t3722313464  get_extent_4() const { return ___extent_4; }
	inline Vector3_t3722313464 * get_address_of_extent_4() { return &___extent_4; }
	inline void set_extent_4(Vector3_t3722313464  value)
	{
		___extent_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.XR.iOS.ARPlaneAnchor
struct ARPlaneAnchor_t2049372221_marshaled_pinvoke
{
	char* ___identifier_0;
	Matrix4x4_t1817901843  ___transform_1;
	int64_t ___alignment_2;
	Vector3_t3722313464  ___center_3;
	Vector3_t3722313464  ___extent_4;
};
// Native definition for COM marshalling of UnityEngine.XR.iOS.ARPlaneAnchor
struct ARPlaneAnchor_t2049372221_marshaled_com
{
	Il2CppChar* ___identifier_0;
	Matrix4x4_t1817901843  ___transform_1;
	int64_t ___alignment_2;
	Vector3_t3722313464  ___center_3;
	Vector3_t3722313464  ___extent_4;
};
#endif // ARPLANEANCHOR_T2049372221_H
#ifndef SERIALIZABLEARKITINIT_T3885066048_H
#define SERIALIZABLEARKITINIT_T3885066048_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Utils.serializableARKitInit
struct  serializableARKitInit_t3885066048  : public RuntimeObject
{
public:
	// Utils.serializableARSessionConfiguration Utils.serializableARKitInit::config
	serializableARSessionConfiguration_t1467016906 * ___config_0;
	// UnityEngine.XR.iOS.UnityARSessionRunOption Utils.serializableARKitInit::runOption
	int32_t ___runOption_1;

public:
	inline static int32_t get_offset_of_config_0() { return static_cast<int32_t>(offsetof(serializableARKitInit_t3885066048, ___config_0)); }
	inline serializableARSessionConfiguration_t1467016906 * get_config_0() const { return ___config_0; }
	inline serializableARSessionConfiguration_t1467016906 ** get_address_of_config_0() { return &___config_0; }
	inline void set_config_0(serializableARSessionConfiguration_t1467016906 * value)
	{
		___config_0 = value;
		Il2CppCodeGenWriteBarrier((&___config_0), value);
	}

	inline static int32_t get_offset_of_runOption_1() { return static_cast<int32_t>(offsetof(serializableARKitInit_t3885066048, ___runOption_1)); }
	inline int32_t get_runOption_1() const { return ___runOption_1; }
	inline int32_t* get_address_of_runOption_1() { return &___runOption_1; }
	inline void set_runOption_1(int32_t value)
	{
		___runOption_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZABLEARKITINIT_T3885066048_H
#ifndef SERIALIZABLEARSESSIONCONFIGURATION_T1467016906_H
#define SERIALIZABLEARSESSIONCONFIGURATION_T1467016906_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Utils.serializableARSessionConfiguration
struct  serializableARSessionConfiguration_t1467016906  : public RuntimeObject
{
public:
	// UnityEngine.XR.iOS.UnityARAlignment Utils.serializableARSessionConfiguration::alignment
	int32_t ___alignment_0;
	// UnityEngine.XR.iOS.UnityARPlaneDetection Utils.serializableARSessionConfiguration::planeDetection
	int32_t ___planeDetection_1;
	// System.Boolean Utils.serializableARSessionConfiguration::getPointCloudData
	bool ___getPointCloudData_2;
	// System.Boolean Utils.serializableARSessionConfiguration::enableLightEstimation
	bool ___enableLightEstimation_3;

public:
	inline static int32_t get_offset_of_alignment_0() { return static_cast<int32_t>(offsetof(serializableARSessionConfiguration_t1467016906, ___alignment_0)); }
	inline int32_t get_alignment_0() const { return ___alignment_0; }
	inline int32_t* get_address_of_alignment_0() { return &___alignment_0; }
	inline void set_alignment_0(int32_t value)
	{
		___alignment_0 = value;
	}

	inline static int32_t get_offset_of_planeDetection_1() { return static_cast<int32_t>(offsetof(serializableARSessionConfiguration_t1467016906, ___planeDetection_1)); }
	inline int32_t get_planeDetection_1() const { return ___planeDetection_1; }
	inline int32_t* get_address_of_planeDetection_1() { return &___planeDetection_1; }
	inline void set_planeDetection_1(int32_t value)
	{
		___planeDetection_1 = value;
	}

	inline static int32_t get_offset_of_getPointCloudData_2() { return static_cast<int32_t>(offsetof(serializableARSessionConfiguration_t1467016906, ___getPointCloudData_2)); }
	inline bool get_getPointCloudData_2() const { return ___getPointCloudData_2; }
	inline bool* get_address_of_getPointCloudData_2() { return &___getPointCloudData_2; }
	inline void set_getPointCloudData_2(bool value)
	{
		___getPointCloudData_2 = value;
	}

	inline static int32_t get_offset_of_enableLightEstimation_3() { return static_cast<int32_t>(offsetof(serializableARSessionConfiguration_t1467016906, ___enableLightEstimation_3)); }
	inline bool get_enableLightEstimation_3() const { return ___enableLightEstimation_3; }
	inline bool* get_address_of_enableLightEstimation_3() { return &___enableLightEstimation_3; }
	inline void set_enableLightEstimation_3(bool value)
	{
		___enableLightEstimation_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZABLEARSESSIONCONFIGURATION_T1467016906_H
#ifndef SERIALIZABLEUNITYARCAMERA_T4158151215_H
#define SERIALIZABLEUNITYARCAMERA_T4158151215_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Utils.serializableUnityARCamera
struct  serializableUnityARCamera_t4158151215  : public RuntimeObject
{
public:
	// Utils.serializableUnityARMatrix4x4 Utils.serializableUnityARCamera::worldTransform
	serializableUnityARMatrix4x4_t78255337 * ___worldTransform_0;
	// Utils.serializableUnityARMatrix4x4 Utils.serializableUnityARCamera::projectionMatrix
	serializableUnityARMatrix4x4_t78255337 * ___projectionMatrix_1;
	// UnityEngine.XR.iOS.ARTrackingState Utils.serializableUnityARCamera::trackingState
	int32_t ___trackingState_2;
	// UnityEngine.XR.iOS.ARTrackingStateReason Utils.serializableUnityARCamera::trackingReason
	int32_t ___trackingReason_3;
	// UnityEngine.XR.iOS.UnityVideoParams Utils.serializableUnityARCamera::videoParams
	UnityVideoParams_t4155354995  ___videoParams_4;
	// UnityEngine.XR.iOS.UnityARLightEstimate Utils.serializableUnityARCamera::lightEstimation
	UnityARLightEstimate_t1498306117  ___lightEstimation_5;
	// Utils.serializablePointCloud Utils.serializableUnityARCamera::pointCloud
	serializablePointCloud_t455238287 * ___pointCloud_6;
	// Utils.serializableUnityARMatrix4x4 Utils.serializableUnityARCamera::displayTransform
	serializableUnityARMatrix4x4_t78255337 * ___displayTransform_7;

public:
	inline static int32_t get_offset_of_worldTransform_0() { return static_cast<int32_t>(offsetof(serializableUnityARCamera_t4158151215, ___worldTransform_0)); }
	inline serializableUnityARMatrix4x4_t78255337 * get_worldTransform_0() const { return ___worldTransform_0; }
	inline serializableUnityARMatrix4x4_t78255337 ** get_address_of_worldTransform_0() { return &___worldTransform_0; }
	inline void set_worldTransform_0(serializableUnityARMatrix4x4_t78255337 * value)
	{
		___worldTransform_0 = value;
		Il2CppCodeGenWriteBarrier((&___worldTransform_0), value);
	}

	inline static int32_t get_offset_of_projectionMatrix_1() { return static_cast<int32_t>(offsetof(serializableUnityARCamera_t4158151215, ___projectionMatrix_1)); }
	inline serializableUnityARMatrix4x4_t78255337 * get_projectionMatrix_1() const { return ___projectionMatrix_1; }
	inline serializableUnityARMatrix4x4_t78255337 ** get_address_of_projectionMatrix_1() { return &___projectionMatrix_1; }
	inline void set_projectionMatrix_1(serializableUnityARMatrix4x4_t78255337 * value)
	{
		___projectionMatrix_1 = value;
		Il2CppCodeGenWriteBarrier((&___projectionMatrix_1), value);
	}

	inline static int32_t get_offset_of_trackingState_2() { return static_cast<int32_t>(offsetof(serializableUnityARCamera_t4158151215, ___trackingState_2)); }
	inline int32_t get_trackingState_2() const { return ___trackingState_2; }
	inline int32_t* get_address_of_trackingState_2() { return &___trackingState_2; }
	inline void set_trackingState_2(int32_t value)
	{
		___trackingState_2 = value;
	}

	inline static int32_t get_offset_of_trackingReason_3() { return static_cast<int32_t>(offsetof(serializableUnityARCamera_t4158151215, ___trackingReason_3)); }
	inline int32_t get_trackingReason_3() const { return ___trackingReason_3; }
	inline int32_t* get_address_of_trackingReason_3() { return &___trackingReason_3; }
	inline void set_trackingReason_3(int32_t value)
	{
		___trackingReason_3 = value;
	}

	inline static int32_t get_offset_of_videoParams_4() { return static_cast<int32_t>(offsetof(serializableUnityARCamera_t4158151215, ___videoParams_4)); }
	inline UnityVideoParams_t4155354995  get_videoParams_4() const { return ___videoParams_4; }
	inline UnityVideoParams_t4155354995 * get_address_of_videoParams_4() { return &___videoParams_4; }
	inline void set_videoParams_4(UnityVideoParams_t4155354995  value)
	{
		___videoParams_4 = value;
	}

	inline static int32_t get_offset_of_lightEstimation_5() { return static_cast<int32_t>(offsetof(serializableUnityARCamera_t4158151215, ___lightEstimation_5)); }
	inline UnityARLightEstimate_t1498306117  get_lightEstimation_5() const { return ___lightEstimation_5; }
	inline UnityARLightEstimate_t1498306117 * get_address_of_lightEstimation_5() { return &___lightEstimation_5; }
	inline void set_lightEstimation_5(UnityARLightEstimate_t1498306117  value)
	{
		___lightEstimation_5 = value;
	}

	inline static int32_t get_offset_of_pointCloud_6() { return static_cast<int32_t>(offsetof(serializableUnityARCamera_t4158151215, ___pointCloud_6)); }
	inline serializablePointCloud_t455238287 * get_pointCloud_6() const { return ___pointCloud_6; }
	inline serializablePointCloud_t455238287 ** get_address_of_pointCloud_6() { return &___pointCloud_6; }
	inline void set_pointCloud_6(serializablePointCloud_t455238287 * value)
	{
		___pointCloud_6 = value;
		Il2CppCodeGenWriteBarrier((&___pointCloud_6), value);
	}

	inline static int32_t get_offset_of_displayTransform_7() { return static_cast<int32_t>(offsetof(serializableUnityARCamera_t4158151215, ___displayTransform_7)); }
	inline serializableUnityARMatrix4x4_t78255337 * get_displayTransform_7() const { return ___displayTransform_7; }
	inline serializableUnityARMatrix4x4_t78255337 ** get_address_of_displayTransform_7() { return &___displayTransform_7; }
	inline void set_displayTransform_7(serializableUnityARMatrix4x4_t78255337 * value)
	{
		___displayTransform_7 = value;
		Il2CppCodeGenWriteBarrier((&___displayTransform_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZABLEUNITYARCAMERA_T4158151215_H
#ifndef GAMEOBJECT_T1113636619_H
#define GAMEOBJECT_T1113636619_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GameObject
struct  GameObject_t1113636619  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEOBJECT_T1113636619_H
#ifndef SERIALIZABLEUNITYARPLANEANCHOR_T1446774435_H
#define SERIALIZABLEUNITYARPLANEANCHOR_T1446774435_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Utils.serializableUnityARPlaneAnchor
struct  serializableUnityARPlaneAnchor_t1446774435  : public RuntimeObject
{
public:
	// Utils.serializableUnityARMatrix4x4 Utils.serializableUnityARPlaneAnchor::worldTransform
	serializableUnityARMatrix4x4_t78255337 * ___worldTransform_0;
	// Utils.SerializableVector4 Utils.serializableUnityARPlaneAnchor::center
	SerializableVector4_t1862640084 * ___center_1;
	// Utils.SerializableVector4 Utils.serializableUnityARPlaneAnchor::extent
	SerializableVector4_t1862640084 * ___extent_2;
	// UnityEngine.XR.iOS.ARPlaneAnchorAlignment Utils.serializableUnityARPlaneAnchor::planeAlignment
	int64_t ___planeAlignment_3;
	// System.Byte[] Utils.serializableUnityARPlaneAnchor::identifierStr
	ByteU5BU5D_t4116647657* ___identifierStr_4;

public:
	inline static int32_t get_offset_of_worldTransform_0() { return static_cast<int32_t>(offsetof(serializableUnityARPlaneAnchor_t1446774435, ___worldTransform_0)); }
	inline serializableUnityARMatrix4x4_t78255337 * get_worldTransform_0() const { return ___worldTransform_0; }
	inline serializableUnityARMatrix4x4_t78255337 ** get_address_of_worldTransform_0() { return &___worldTransform_0; }
	inline void set_worldTransform_0(serializableUnityARMatrix4x4_t78255337 * value)
	{
		___worldTransform_0 = value;
		Il2CppCodeGenWriteBarrier((&___worldTransform_0), value);
	}

	inline static int32_t get_offset_of_center_1() { return static_cast<int32_t>(offsetof(serializableUnityARPlaneAnchor_t1446774435, ___center_1)); }
	inline SerializableVector4_t1862640084 * get_center_1() const { return ___center_1; }
	inline SerializableVector4_t1862640084 ** get_address_of_center_1() { return &___center_1; }
	inline void set_center_1(SerializableVector4_t1862640084 * value)
	{
		___center_1 = value;
		Il2CppCodeGenWriteBarrier((&___center_1), value);
	}

	inline static int32_t get_offset_of_extent_2() { return static_cast<int32_t>(offsetof(serializableUnityARPlaneAnchor_t1446774435, ___extent_2)); }
	inline SerializableVector4_t1862640084 * get_extent_2() const { return ___extent_2; }
	inline SerializableVector4_t1862640084 ** get_address_of_extent_2() { return &___extent_2; }
	inline void set_extent_2(SerializableVector4_t1862640084 * value)
	{
		___extent_2 = value;
		Il2CppCodeGenWriteBarrier((&___extent_2), value);
	}

	inline static int32_t get_offset_of_planeAlignment_3() { return static_cast<int32_t>(offsetof(serializableUnityARPlaneAnchor_t1446774435, ___planeAlignment_3)); }
	inline int64_t get_planeAlignment_3() const { return ___planeAlignment_3; }
	inline int64_t* get_address_of_planeAlignment_3() { return &___planeAlignment_3; }
	inline void set_planeAlignment_3(int64_t value)
	{
		___planeAlignment_3 = value;
	}

	inline static int32_t get_offset_of_identifierStr_4() { return static_cast<int32_t>(offsetof(serializableUnityARPlaneAnchor_t1446774435, ___identifierStr_4)); }
	inline ByteU5BU5D_t4116647657* get_identifierStr_4() const { return ___identifierStr_4; }
	inline ByteU5BU5D_t4116647657** get_address_of_identifierStr_4() { return &___identifierStr_4; }
	inline void set_identifierStr_4(ByteU5BU5D_t4116647657* value)
	{
		___identifierStr_4 = value;
		Il2CppCodeGenWriteBarrier((&___identifierStr_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZABLEUNITYARPLANEANCHOR_T1446774435_H
#ifndef RENDERTARGETIDENTIFIER_T2079184500_H
#define RENDERTARGETIDENTIFIER_T2079184500_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rendering.RenderTargetIdentifier
struct  RenderTargetIdentifier_t2079184500 
{
public:
	// UnityEngine.Rendering.BuiltinRenderTextureType UnityEngine.Rendering.RenderTargetIdentifier::m_Type
	int32_t ___m_Type_0;
	// System.Int32 UnityEngine.Rendering.RenderTargetIdentifier::m_NameID
	int32_t ___m_NameID_1;
	// System.Int32 UnityEngine.Rendering.RenderTargetIdentifier::m_InstanceID
	int32_t ___m_InstanceID_2;
	// System.IntPtr UnityEngine.Rendering.RenderTargetIdentifier::m_BufferPointer
	intptr_t ___m_BufferPointer_3;
	// System.Int32 UnityEngine.Rendering.RenderTargetIdentifier::m_MipLevel
	int32_t ___m_MipLevel_4;
	// UnityEngine.CubemapFace UnityEngine.Rendering.RenderTargetIdentifier::m_CubeFace
	int32_t ___m_CubeFace_5;
	// System.Int32 UnityEngine.Rendering.RenderTargetIdentifier::m_DepthSlice
	int32_t ___m_DepthSlice_6;

public:
	inline static int32_t get_offset_of_m_Type_0() { return static_cast<int32_t>(offsetof(RenderTargetIdentifier_t2079184500, ___m_Type_0)); }
	inline int32_t get_m_Type_0() const { return ___m_Type_0; }
	inline int32_t* get_address_of_m_Type_0() { return &___m_Type_0; }
	inline void set_m_Type_0(int32_t value)
	{
		___m_Type_0 = value;
	}

	inline static int32_t get_offset_of_m_NameID_1() { return static_cast<int32_t>(offsetof(RenderTargetIdentifier_t2079184500, ___m_NameID_1)); }
	inline int32_t get_m_NameID_1() const { return ___m_NameID_1; }
	inline int32_t* get_address_of_m_NameID_1() { return &___m_NameID_1; }
	inline void set_m_NameID_1(int32_t value)
	{
		___m_NameID_1 = value;
	}

	inline static int32_t get_offset_of_m_InstanceID_2() { return static_cast<int32_t>(offsetof(RenderTargetIdentifier_t2079184500, ___m_InstanceID_2)); }
	inline int32_t get_m_InstanceID_2() const { return ___m_InstanceID_2; }
	inline int32_t* get_address_of_m_InstanceID_2() { return &___m_InstanceID_2; }
	inline void set_m_InstanceID_2(int32_t value)
	{
		___m_InstanceID_2 = value;
	}

	inline static int32_t get_offset_of_m_BufferPointer_3() { return static_cast<int32_t>(offsetof(RenderTargetIdentifier_t2079184500, ___m_BufferPointer_3)); }
	inline intptr_t get_m_BufferPointer_3() const { return ___m_BufferPointer_3; }
	inline intptr_t* get_address_of_m_BufferPointer_3() { return &___m_BufferPointer_3; }
	inline void set_m_BufferPointer_3(intptr_t value)
	{
		___m_BufferPointer_3 = value;
	}

	inline static int32_t get_offset_of_m_MipLevel_4() { return static_cast<int32_t>(offsetof(RenderTargetIdentifier_t2079184500, ___m_MipLevel_4)); }
	inline int32_t get_m_MipLevel_4() const { return ___m_MipLevel_4; }
	inline int32_t* get_address_of_m_MipLevel_4() { return &___m_MipLevel_4; }
	inline void set_m_MipLevel_4(int32_t value)
	{
		___m_MipLevel_4 = value;
	}

	inline static int32_t get_offset_of_m_CubeFace_5() { return static_cast<int32_t>(offsetof(RenderTargetIdentifier_t2079184500, ___m_CubeFace_5)); }
	inline int32_t get_m_CubeFace_5() const { return ___m_CubeFace_5; }
	inline int32_t* get_address_of_m_CubeFace_5() { return &___m_CubeFace_5; }
	inline void set_m_CubeFace_5(int32_t value)
	{
		___m_CubeFace_5 = value;
	}

	inline static int32_t get_offset_of_m_DepthSlice_6() { return static_cast<int32_t>(offsetof(RenderTargetIdentifier_t2079184500, ___m_DepthSlice_6)); }
	inline int32_t get_m_DepthSlice_6() const { return ___m_DepthSlice_6; }
	inline int32_t* get_address_of_m_DepthSlice_6() { return &___m_DepthSlice_6; }
	inline void set_m_DepthSlice_6(int32_t value)
	{
		___m_DepthSlice_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RENDERTARGETIDENTIFIER_T2079184500_H
#ifndef TOUCH_T1921856868_H
#define TOUCH_T1921856868_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Touch
struct  Touch_t1921856868 
{
public:
	// System.Int32 UnityEngine.Touch::m_FingerId
	int32_t ___m_FingerId_0;
	// UnityEngine.Vector2 UnityEngine.Touch::m_Position
	Vector2_t2156229523  ___m_Position_1;
	// UnityEngine.Vector2 UnityEngine.Touch::m_RawPosition
	Vector2_t2156229523  ___m_RawPosition_2;
	// UnityEngine.Vector2 UnityEngine.Touch::m_PositionDelta
	Vector2_t2156229523  ___m_PositionDelta_3;
	// System.Single UnityEngine.Touch::m_TimeDelta
	float ___m_TimeDelta_4;
	// System.Int32 UnityEngine.Touch::m_TapCount
	int32_t ___m_TapCount_5;
	// UnityEngine.TouchPhase UnityEngine.Touch::m_Phase
	int32_t ___m_Phase_6;
	// UnityEngine.TouchType UnityEngine.Touch::m_Type
	int32_t ___m_Type_7;
	// System.Single UnityEngine.Touch::m_Pressure
	float ___m_Pressure_8;
	// System.Single UnityEngine.Touch::m_maximumPossiblePressure
	float ___m_maximumPossiblePressure_9;
	// System.Single UnityEngine.Touch::m_Radius
	float ___m_Radius_10;
	// System.Single UnityEngine.Touch::m_RadiusVariance
	float ___m_RadiusVariance_11;
	// System.Single UnityEngine.Touch::m_AltitudeAngle
	float ___m_AltitudeAngle_12;
	// System.Single UnityEngine.Touch::m_AzimuthAngle
	float ___m_AzimuthAngle_13;

public:
	inline static int32_t get_offset_of_m_FingerId_0() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_FingerId_0)); }
	inline int32_t get_m_FingerId_0() const { return ___m_FingerId_0; }
	inline int32_t* get_address_of_m_FingerId_0() { return &___m_FingerId_0; }
	inline void set_m_FingerId_0(int32_t value)
	{
		___m_FingerId_0 = value;
	}

	inline static int32_t get_offset_of_m_Position_1() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_Position_1)); }
	inline Vector2_t2156229523  get_m_Position_1() const { return ___m_Position_1; }
	inline Vector2_t2156229523 * get_address_of_m_Position_1() { return &___m_Position_1; }
	inline void set_m_Position_1(Vector2_t2156229523  value)
	{
		___m_Position_1 = value;
	}

	inline static int32_t get_offset_of_m_RawPosition_2() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_RawPosition_2)); }
	inline Vector2_t2156229523  get_m_RawPosition_2() const { return ___m_RawPosition_2; }
	inline Vector2_t2156229523 * get_address_of_m_RawPosition_2() { return &___m_RawPosition_2; }
	inline void set_m_RawPosition_2(Vector2_t2156229523  value)
	{
		___m_RawPosition_2 = value;
	}

	inline static int32_t get_offset_of_m_PositionDelta_3() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_PositionDelta_3)); }
	inline Vector2_t2156229523  get_m_PositionDelta_3() const { return ___m_PositionDelta_3; }
	inline Vector2_t2156229523 * get_address_of_m_PositionDelta_3() { return &___m_PositionDelta_3; }
	inline void set_m_PositionDelta_3(Vector2_t2156229523  value)
	{
		___m_PositionDelta_3 = value;
	}

	inline static int32_t get_offset_of_m_TimeDelta_4() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_TimeDelta_4)); }
	inline float get_m_TimeDelta_4() const { return ___m_TimeDelta_4; }
	inline float* get_address_of_m_TimeDelta_4() { return &___m_TimeDelta_4; }
	inline void set_m_TimeDelta_4(float value)
	{
		___m_TimeDelta_4 = value;
	}

	inline static int32_t get_offset_of_m_TapCount_5() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_TapCount_5)); }
	inline int32_t get_m_TapCount_5() const { return ___m_TapCount_5; }
	inline int32_t* get_address_of_m_TapCount_5() { return &___m_TapCount_5; }
	inline void set_m_TapCount_5(int32_t value)
	{
		___m_TapCount_5 = value;
	}

	inline static int32_t get_offset_of_m_Phase_6() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_Phase_6)); }
	inline int32_t get_m_Phase_6() const { return ___m_Phase_6; }
	inline int32_t* get_address_of_m_Phase_6() { return &___m_Phase_6; }
	inline void set_m_Phase_6(int32_t value)
	{
		___m_Phase_6 = value;
	}

	inline static int32_t get_offset_of_m_Type_7() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_Type_7)); }
	inline int32_t get_m_Type_7() const { return ___m_Type_7; }
	inline int32_t* get_address_of_m_Type_7() { return &___m_Type_7; }
	inline void set_m_Type_7(int32_t value)
	{
		___m_Type_7 = value;
	}

	inline static int32_t get_offset_of_m_Pressure_8() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_Pressure_8)); }
	inline float get_m_Pressure_8() const { return ___m_Pressure_8; }
	inline float* get_address_of_m_Pressure_8() { return &___m_Pressure_8; }
	inline void set_m_Pressure_8(float value)
	{
		___m_Pressure_8 = value;
	}

	inline static int32_t get_offset_of_m_maximumPossiblePressure_9() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_maximumPossiblePressure_9)); }
	inline float get_m_maximumPossiblePressure_9() const { return ___m_maximumPossiblePressure_9; }
	inline float* get_address_of_m_maximumPossiblePressure_9() { return &___m_maximumPossiblePressure_9; }
	inline void set_m_maximumPossiblePressure_9(float value)
	{
		___m_maximumPossiblePressure_9 = value;
	}

	inline static int32_t get_offset_of_m_Radius_10() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_Radius_10)); }
	inline float get_m_Radius_10() const { return ___m_Radius_10; }
	inline float* get_address_of_m_Radius_10() { return &___m_Radius_10; }
	inline void set_m_Radius_10(float value)
	{
		___m_Radius_10 = value;
	}

	inline static int32_t get_offset_of_m_RadiusVariance_11() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_RadiusVariance_11)); }
	inline float get_m_RadiusVariance_11() const { return ___m_RadiusVariance_11; }
	inline float* get_address_of_m_RadiusVariance_11() { return &___m_RadiusVariance_11; }
	inline void set_m_RadiusVariance_11(float value)
	{
		___m_RadiusVariance_11 = value;
	}

	inline static int32_t get_offset_of_m_AltitudeAngle_12() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_AltitudeAngle_12)); }
	inline float get_m_AltitudeAngle_12() const { return ___m_AltitudeAngle_12; }
	inline float* get_address_of_m_AltitudeAngle_12() { return &___m_AltitudeAngle_12; }
	inline void set_m_AltitudeAngle_12(float value)
	{
		___m_AltitudeAngle_12 = value;
	}

	inline static int32_t get_offset_of_m_AzimuthAngle_13() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_AzimuthAngle_13)); }
	inline float get_m_AzimuthAngle_13() const { return ___m_AzimuthAngle_13; }
	inline float* get_address_of_m_AzimuthAngle_13() { return &___m_AzimuthAngle_13; }
	inline void set_m_AzimuthAngle_13(float value)
	{
		___m_AzimuthAngle_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TOUCH_T1921856868_H
#ifndef UNITYARHITTESTRESULT_T4176230866_H
#define UNITYARHITTESTRESULT_T4176230866_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARHitTestResult
struct  UnityARHitTestResult_t4176230866 
{
public:
	// UnityEngine.XR.iOS.ARHitTestResultType UnityEngine.XR.iOS.UnityARHitTestResult::type
	int64_t ___type_0;
	// System.Double UnityEngine.XR.iOS.UnityARHitTestResult::distance
	double ___distance_1;
	// UnityEngine.Matrix4x4 UnityEngine.XR.iOS.UnityARHitTestResult::localTransform
	Matrix4x4_t1817901843  ___localTransform_2;
	// UnityEngine.Matrix4x4 UnityEngine.XR.iOS.UnityARHitTestResult::worldTransform
	Matrix4x4_t1817901843  ___worldTransform_3;
	// System.IntPtr UnityEngine.XR.iOS.UnityARHitTestResult::anchor
	intptr_t ___anchor_4;
	// System.Boolean UnityEngine.XR.iOS.UnityARHitTestResult::isValid
	bool ___isValid_5;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(UnityARHitTestResult_t4176230866, ___type_0)); }
	inline int64_t get_type_0() const { return ___type_0; }
	inline int64_t* get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(int64_t value)
	{
		___type_0 = value;
	}

	inline static int32_t get_offset_of_distance_1() { return static_cast<int32_t>(offsetof(UnityARHitTestResult_t4176230866, ___distance_1)); }
	inline double get_distance_1() const { return ___distance_1; }
	inline double* get_address_of_distance_1() { return &___distance_1; }
	inline void set_distance_1(double value)
	{
		___distance_1 = value;
	}

	inline static int32_t get_offset_of_localTransform_2() { return static_cast<int32_t>(offsetof(UnityARHitTestResult_t4176230866, ___localTransform_2)); }
	inline Matrix4x4_t1817901843  get_localTransform_2() const { return ___localTransform_2; }
	inline Matrix4x4_t1817901843 * get_address_of_localTransform_2() { return &___localTransform_2; }
	inline void set_localTransform_2(Matrix4x4_t1817901843  value)
	{
		___localTransform_2 = value;
	}

	inline static int32_t get_offset_of_worldTransform_3() { return static_cast<int32_t>(offsetof(UnityARHitTestResult_t4176230866, ___worldTransform_3)); }
	inline Matrix4x4_t1817901843  get_worldTransform_3() const { return ___worldTransform_3; }
	inline Matrix4x4_t1817901843 * get_address_of_worldTransform_3() { return &___worldTransform_3; }
	inline void set_worldTransform_3(Matrix4x4_t1817901843  value)
	{
		___worldTransform_3 = value;
	}

	inline static int32_t get_offset_of_anchor_4() { return static_cast<int32_t>(offsetof(UnityARHitTestResult_t4176230866, ___anchor_4)); }
	inline intptr_t get_anchor_4() const { return ___anchor_4; }
	inline intptr_t* get_address_of_anchor_4() { return &___anchor_4; }
	inline void set_anchor_4(intptr_t value)
	{
		___anchor_4 = value;
	}

	inline static int32_t get_offset_of_isValid_5() { return static_cast<int32_t>(offsetof(UnityARHitTestResult_t4176230866, ___isValid_5)); }
	inline bool get_isValid_5() const { return ___isValid_5; }
	inline bool* get_address_of_isValid_5() { return &___isValid_5; }
	inline void set_isValid_5(bool value)
	{
		___isValid_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.XR.iOS.UnityARHitTestResult
struct UnityARHitTestResult_t4176230866_marshaled_pinvoke
{
	int64_t ___type_0;
	double ___distance_1;
	Matrix4x4_t1817901843  ___localTransform_2;
	Matrix4x4_t1817901843  ___worldTransform_3;
	intptr_t ___anchor_4;
	int32_t ___isValid_5;
};
// Native definition for COM marshalling of UnityEngine.XR.iOS.UnityARHitTestResult
struct UnityARHitTestResult_t4176230866_marshaled_com
{
	int64_t ___type_0;
	double ___distance_1;
	Matrix4x4_t1817901843  ___localTransform_2;
	Matrix4x4_t1817901843  ___worldTransform_3;
	intptr_t ___anchor_4;
	int32_t ___isValid_5;
};
#endif // UNITYARHITTESTRESULT_T4176230866_H
#ifndef ARKITSESSIONCONFIGURATION_T629136898_H
#define ARKITSESSIONCONFIGURATION_T629136898_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.ARKitSessionConfiguration
struct  ARKitSessionConfiguration_t629136898 
{
public:
	// UnityEngine.XR.iOS.UnityARAlignment UnityEngine.XR.iOS.ARKitSessionConfiguration::alignment
	int32_t ___alignment_0;
	// System.Boolean UnityEngine.XR.iOS.ARKitSessionConfiguration::getPointCloudData
	bool ___getPointCloudData_1;
	// System.Boolean UnityEngine.XR.iOS.ARKitSessionConfiguration::enableLightEstimation
	bool ___enableLightEstimation_2;

public:
	inline static int32_t get_offset_of_alignment_0() { return static_cast<int32_t>(offsetof(ARKitSessionConfiguration_t629136898, ___alignment_0)); }
	inline int32_t get_alignment_0() const { return ___alignment_0; }
	inline int32_t* get_address_of_alignment_0() { return &___alignment_0; }
	inline void set_alignment_0(int32_t value)
	{
		___alignment_0 = value;
	}

	inline static int32_t get_offset_of_getPointCloudData_1() { return static_cast<int32_t>(offsetof(ARKitSessionConfiguration_t629136898, ___getPointCloudData_1)); }
	inline bool get_getPointCloudData_1() const { return ___getPointCloudData_1; }
	inline bool* get_address_of_getPointCloudData_1() { return &___getPointCloudData_1; }
	inline void set_getPointCloudData_1(bool value)
	{
		___getPointCloudData_1 = value;
	}

	inline static int32_t get_offset_of_enableLightEstimation_2() { return static_cast<int32_t>(offsetof(ARKitSessionConfiguration_t629136898, ___enableLightEstimation_2)); }
	inline bool get_enableLightEstimation_2() const { return ___enableLightEstimation_2; }
	inline bool* get_address_of_enableLightEstimation_2() { return &___enableLightEstimation_2; }
	inline void set_enableLightEstimation_2(bool value)
	{
		___enableLightEstimation_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.XR.iOS.ARKitSessionConfiguration
struct ARKitSessionConfiguration_t629136898_marshaled_pinvoke
{
	int32_t ___alignment_0;
	int32_t ___getPointCloudData_1;
	int32_t ___enableLightEstimation_2;
};
// Native definition for COM marshalling of UnityEngine.XR.iOS.ARKitSessionConfiguration
struct ARKitSessionConfiguration_t629136898_marshaled_com
{
	int32_t ___alignment_0;
	int32_t ___getPointCloudData_1;
	int32_t ___enableLightEstimation_2;
};
#endif // ARKITSESSIONCONFIGURATION_T629136898_H
#ifndef ARKITWORLDTRACKINGSESSIONCONFIGURATION_T273386347_H
#define ARKITWORLDTRACKINGSESSIONCONFIGURATION_T273386347_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.ARKitWorldTrackingSessionConfiguration
struct  ARKitWorldTrackingSessionConfiguration_t273386347 
{
public:
	// UnityEngine.XR.iOS.UnityARAlignment UnityEngine.XR.iOS.ARKitWorldTrackingSessionConfiguration::alignment
	int32_t ___alignment_0;
	// UnityEngine.XR.iOS.UnityARPlaneDetection UnityEngine.XR.iOS.ARKitWorldTrackingSessionConfiguration::planeDetection
	int32_t ___planeDetection_1;
	// System.Boolean UnityEngine.XR.iOS.ARKitWorldTrackingSessionConfiguration::getPointCloudData
	bool ___getPointCloudData_2;
	// System.Boolean UnityEngine.XR.iOS.ARKitWorldTrackingSessionConfiguration::enableLightEstimation
	bool ___enableLightEstimation_3;

public:
	inline static int32_t get_offset_of_alignment_0() { return static_cast<int32_t>(offsetof(ARKitWorldTrackingSessionConfiguration_t273386347, ___alignment_0)); }
	inline int32_t get_alignment_0() const { return ___alignment_0; }
	inline int32_t* get_address_of_alignment_0() { return &___alignment_0; }
	inline void set_alignment_0(int32_t value)
	{
		___alignment_0 = value;
	}

	inline static int32_t get_offset_of_planeDetection_1() { return static_cast<int32_t>(offsetof(ARKitWorldTrackingSessionConfiguration_t273386347, ___planeDetection_1)); }
	inline int32_t get_planeDetection_1() const { return ___planeDetection_1; }
	inline int32_t* get_address_of_planeDetection_1() { return &___planeDetection_1; }
	inline void set_planeDetection_1(int32_t value)
	{
		___planeDetection_1 = value;
	}

	inline static int32_t get_offset_of_getPointCloudData_2() { return static_cast<int32_t>(offsetof(ARKitWorldTrackingSessionConfiguration_t273386347, ___getPointCloudData_2)); }
	inline bool get_getPointCloudData_2() const { return ___getPointCloudData_2; }
	inline bool* get_address_of_getPointCloudData_2() { return &___getPointCloudData_2; }
	inline void set_getPointCloudData_2(bool value)
	{
		___getPointCloudData_2 = value;
	}

	inline static int32_t get_offset_of_enableLightEstimation_3() { return static_cast<int32_t>(offsetof(ARKitWorldTrackingSessionConfiguration_t273386347, ___enableLightEstimation_3)); }
	inline bool get_enableLightEstimation_3() const { return ___enableLightEstimation_3; }
	inline bool* get_address_of_enableLightEstimation_3() { return &___enableLightEstimation_3; }
	inline void set_enableLightEstimation_3(bool value)
	{
		___enableLightEstimation_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.XR.iOS.ARKitWorldTrackingSessionConfiguration
struct ARKitWorldTrackingSessionConfiguration_t273386347_marshaled_pinvoke
{
	int32_t ___alignment_0;
	int32_t ___planeDetection_1;
	int32_t ___getPointCloudData_2;
	int32_t ___enableLightEstimation_3;
};
// Native definition for COM marshalling of UnityEngine.XR.iOS.ARKitWorldTrackingSessionConfiguration
struct ARKitWorldTrackingSessionConfiguration_t273386347_marshaled_com
{
	int32_t ___alignment_0;
	int32_t ___planeDetection_1;
	int32_t ___getPointCloudData_2;
	int32_t ___enableLightEstimation_3;
};
#endif // ARKITWORLDTRACKINGSESSIONCONFIGURATION_T273386347_H
#ifndef INTERNAL_ARANCHORREMOVED_T3371657877_H
#define INTERNAL_ARANCHORREMOVED_T3371657877_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARAnchorRemoved
struct  internal_ARAnchorRemoved_t3371657877  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERNAL_ARANCHORREMOVED_T3371657877_H
#ifndef INTERNAL_ARUSERANCHORADDED_T3285282493_H
#define INTERNAL_ARUSERANCHORADDED_T3285282493_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARUserAnchorAdded
struct  internal_ARUserAnchorAdded_t3285282493  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERNAL_ARUSERANCHORADDED_T3285282493_H
#ifndef ARANCHORADDED_T1608557165_H
#define ARANCHORADDED_T1608557165_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARAnchorAdded
struct  ARAnchorAdded_t1608557165  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARANCHORADDED_T1608557165_H
#ifndef INTERNAL_ARUSERANCHORUPDATED_T3964727538_H
#define INTERNAL_ARUSERANCHORUPDATED_T3964727538_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARUserAnchorUpdated
struct  internal_ARUserAnchorUpdated_t3964727538  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERNAL_ARUSERANCHORUPDATED_T3964727538_H
#ifndef INTERNAL_ARUSERANCHORREMOVED_T386858594_H
#define INTERNAL_ARUSERANCHORREMOVED_T386858594_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARUserAnchorRemoved
struct  internal_ARUserAnchorRemoved_t386858594  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERNAL_ARUSERANCHORREMOVED_T386858594_H
#ifndef ARANCHORUPDATED_T3113222537_H
#define ARANCHORUPDATED_T3113222537_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARAnchorUpdated
struct  ARAnchorUpdated_t3113222537  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARANCHORUPDATED_T3113222537_H
#ifndef BINARYFORMATTER_T3197753202_H
#define BINARYFORMATTER_T3197753202_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.Formatters.Binary.BinaryFormatter
struct  BinaryFormatter_t3197753202  : public RuntimeObject
{
public:
	// System.Runtime.Serialization.Formatters.FormatterAssemblyStyle System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::assembly_format
	int32_t ___assembly_format_0;
	// System.Runtime.Serialization.SerializationBinder System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::binder
	SerializationBinder_t274213469 * ___binder_1;
	// System.Runtime.Serialization.StreamingContext System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::context
	StreamingContext_t3711869237  ___context_2;
	// System.Runtime.Serialization.ISurrogateSelector System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::surrogate_selector
	RuntimeObject* ___surrogate_selector_3;
	// System.Runtime.Serialization.Formatters.FormatterTypeStyle System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::type_format
	int32_t ___type_format_4;
	// System.Runtime.Serialization.Formatters.TypeFilterLevel System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::filter_level
	int32_t ___filter_level_5;

public:
	inline static int32_t get_offset_of_assembly_format_0() { return static_cast<int32_t>(offsetof(BinaryFormatter_t3197753202, ___assembly_format_0)); }
	inline int32_t get_assembly_format_0() const { return ___assembly_format_0; }
	inline int32_t* get_address_of_assembly_format_0() { return &___assembly_format_0; }
	inline void set_assembly_format_0(int32_t value)
	{
		___assembly_format_0 = value;
	}

	inline static int32_t get_offset_of_binder_1() { return static_cast<int32_t>(offsetof(BinaryFormatter_t3197753202, ___binder_1)); }
	inline SerializationBinder_t274213469 * get_binder_1() const { return ___binder_1; }
	inline SerializationBinder_t274213469 ** get_address_of_binder_1() { return &___binder_1; }
	inline void set_binder_1(SerializationBinder_t274213469 * value)
	{
		___binder_1 = value;
		Il2CppCodeGenWriteBarrier((&___binder_1), value);
	}

	inline static int32_t get_offset_of_context_2() { return static_cast<int32_t>(offsetof(BinaryFormatter_t3197753202, ___context_2)); }
	inline StreamingContext_t3711869237  get_context_2() const { return ___context_2; }
	inline StreamingContext_t3711869237 * get_address_of_context_2() { return &___context_2; }
	inline void set_context_2(StreamingContext_t3711869237  value)
	{
		___context_2 = value;
	}

	inline static int32_t get_offset_of_surrogate_selector_3() { return static_cast<int32_t>(offsetof(BinaryFormatter_t3197753202, ___surrogate_selector_3)); }
	inline RuntimeObject* get_surrogate_selector_3() const { return ___surrogate_selector_3; }
	inline RuntimeObject** get_address_of_surrogate_selector_3() { return &___surrogate_selector_3; }
	inline void set_surrogate_selector_3(RuntimeObject* value)
	{
		___surrogate_selector_3 = value;
		Il2CppCodeGenWriteBarrier((&___surrogate_selector_3), value);
	}

	inline static int32_t get_offset_of_type_format_4() { return static_cast<int32_t>(offsetof(BinaryFormatter_t3197753202, ___type_format_4)); }
	inline int32_t get_type_format_4() const { return ___type_format_4; }
	inline int32_t* get_address_of_type_format_4() { return &___type_format_4; }
	inline void set_type_format_4(int32_t value)
	{
		___type_format_4 = value;
	}

	inline static int32_t get_offset_of_filter_level_5() { return static_cast<int32_t>(offsetof(BinaryFormatter_t3197753202, ___filter_level_5)); }
	inline int32_t get_filter_level_5() const { return ___filter_level_5; }
	inline int32_t* get_address_of_filter_level_5() { return &___filter_level_5; }
	inline void set_filter_level_5(int32_t value)
	{
		___filter_level_5 = value;
	}
};

struct BinaryFormatter_t3197753202_StaticFields
{
public:
	// System.Runtime.Serialization.ISurrogateSelector System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::<DefaultSurrogateSelector>k__BackingField
	RuntimeObject* ___U3CDefaultSurrogateSelectorU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CDefaultSurrogateSelectorU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(BinaryFormatter_t3197753202_StaticFields, ___U3CDefaultSurrogateSelectorU3Ek__BackingField_6)); }
	inline RuntimeObject* get_U3CDefaultSurrogateSelectorU3Ek__BackingField_6() const { return ___U3CDefaultSurrogateSelectorU3Ek__BackingField_6; }
	inline RuntimeObject** get_address_of_U3CDefaultSurrogateSelectorU3Ek__BackingField_6() { return &___U3CDefaultSurrogateSelectorU3Ek__BackingField_6; }
	inline void set_U3CDefaultSurrogateSelectorU3Ek__BackingField_6(RuntimeObject* value)
	{
		___U3CDefaultSurrogateSelectorU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CDefaultSurrogateSelectorU3Ek__BackingField_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BINARYFORMATTER_T3197753202_H
#ifndef TRANSFORM_T3600365921_H
#define TRANSFORM_T3600365921_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Transform
struct  Transform_t3600365921  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORM_T3600365921_H
#ifndef INTERNAL_ARFRAMEUPDATE_T3254989823_H
#define INTERNAL_ARFRAMEUPDATE_T3254989823_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARFrameUpdate
struct  internal_ARFrameUpdate_t3254989823  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERNAL_ARFRAMEUPDATE_T3254989823_H
#ifndef ARFRAMEUPDATE_T1157215840_H
#define ARFRAMEUPDATE_T1157215840_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARFrameUpdate
struct  ARFrameUpdate_t1157215840  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARFRAMEUPDATE_T1157215840_H
#ifndef BEHAVIOUR_T1437897464_H
#define BEHAVIOUR_T1437897464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t1437897464  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T1437897464_H
#ifndef ARSESSIONFAILED_T2125002991_H
#define ARSESSIONFAILED_T2125002991_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARSessionFailed
struct  ARSessionFailed_t2125002991  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARSESSIONFAILED_T2125002991_H
#ifndef ARSESSIONCALLBACK_T3772093212_H
#define ARSESSIONCALLBACK_T3772093212_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARSessionCallback
struct  ARSessionCallback_t3772093212  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARSESSIONCALLBACK_T3772093212_H
#ifndef INTERNAL_ARSESSIONTRACKINGCHANGED_T1988849735_H
#define INTERNAL_ARSESSIONTRACKINGCHANGED_T1988849735_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARSessionTrackingChanged
struct  internal_ARSessionTrackingChanged_t1988849735  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERNAL_ARSESSIONTRACKINGCHANGED_T1988849735_H
#ifndef INTERNAL_ARANCHORADDED_T1565083332_H
#define INTERNAL_ARANCHORADDED_T1565083332_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARAnchorAdded
struct  internal_ARAnchorAdded_t1565083332  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERNAL_ARANCHORADDED_T1565083332_H
#ifndef INTERNAL_ARANCHORUPDATED_T2645242205_H
#define INTERNAL_ARANCHORUPDATED_T2645242205_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARAnchorUpdated
struct  internal_ARAnchorUpdated_t2645242205  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERNAL_ARANCHORUPDATED_T2645242205_H
#ifndef ARANCHORREMOVED_T4030593004_H
#define ARANCHORREMOVED_T4030593004_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARAnchorRemoved
struct  ARAnchorRemoved_t4030593004  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARANCHORREMOVED_T4030593004_H
#ifndef ARSESSIONTRACKINGCHANGED_T923029411_H
#define ARSESSIONTRACKINGCHANGED_T923029411_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARSessionTrackingChanged
struct  ARSessionTrackingChanged_t923029411  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARSESSIONTRACKINGCHANGED_T923029411_H
#ifndef TEXTURE2D_T3840446185_H
#define TEXTURE2D_T3840446185_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Texture2D
struct  Texture2D_t3840446185  : public Texture_t3661962703
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTURE2D_T3840446185_H
#ifndef ENUMERATOR_T345375253_H
#define ENUMERATOR_T345375253_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.iOS.ARHitTestResult>
struct  Enumerator_t345375253 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t2751098672 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	ARHitTestResult_t1279023930  ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t345375253, ___l_0)); }
	inline List_1_t2751098672 * get_l_0() const { return ___l_0; }
	inline List_1_t2751098672 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(List_1_t2751098672 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((&___l_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t345375253, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t345375253, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t345375253, ___current_3)); }
	inline ARHitTestResult_t1279023930  get_current_3() const { return ___current_3; }
	inline ARHitTestResult_t1279023930 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(ARHitTestResult_t1279023930  value)
	{
		___current_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T345375253_H
#ifndef ARUSERANCHORREMOVED_T23344545_H
#define ARUSERANCHORREMOVED_T23344545_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARUserAnchorRemoved
struct  ARUserAnchorRemoved_t23344545  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARUSERANCHORREMOVED_T23344545_H
#ifndef ARUSERANCHORUPDATED_T4007601678_H
#define ARUSERANCHORUPDATED_T4007601678_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARUserAnchorUpdated
struct  ARUserAnchorUpdated_t4007601678  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARUSERANCHORUPDATED_T4007601678_H
#ifndef ARPLANEANCHORGAMEOBJECT_T1947719815_H
#define ARPLANEANCHORGAMEOBJECT_T1947719815_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.ARPlaneAnchorGameObject
struct  ARPlaneAnchorGameObject_t1947719815  : public RuntimeObject
{
public:
	// UnityEngine.GameObject UnityEngine.XR.iOS.ARPlaneAnchorGameObject::gameObject
	GameObject_t1113636619 * ___gameObject_0;
	// UnityEngine.XR.iOS.ARPlaneAnchor UnityEngine.XR.iOS.ARPlaneAnchorGameObject::planeAnchor
	ARPlaneAnchor_t2049372221  ___planeAnchor_1;

public:
	inline static int32_t get_offset_of_gameObject_0() { return static_cast<int32_t>(offsetof(ARPlaneAnchorGameObject_t1947719815, ___gameObject_0)); }
	inline GameObject_t1113636619 * get_gameObject_0() const { return ___gameObject_0; }
	inline GameObject_t1113636619 ** get_address_of_gameObject_0() { return &___gameObject_0; }
	inline void set_gameObject_0(GameObject_t1113636619 * value)
	{
		___gameObject_0 = value;
		Il2CppCodeGenWriteBarrier((&___gameObject_0), value);
	}

	inline static int32_t get_offset_of_planeAnchor_1() { return static_cast<int32_t>(offsetof(ARPlaneAnchorGameObject_t1947719815, ___planeAnchor_1)); }
	inline ARPlaneAnchor_t2049372221  get_planeAnchor_1() const { return ___planeAnchor_1; }
	inline ARPlaneAnchor_t2049372221 * get_address_of_planeAnchor_1() { return &___planeAnchor_1; }
	inline void set_planeAnchor_1(ARPlaneAnchor_t2049372221  value)
	{
		___planeAnchor_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARPLANEANCHORGAMEOBJECT_T1947719815_H
#ifndef UNITYARSESSIONNATIVEINTERFACE_T3929719369_H
#define UNITYARSESSIONNATIVEINTERFACE_T3929719369_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARSessionNativeInterface
struct  UnityARSessionNativeInterface_t3929719369  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.XR.iOS.UnityARSessionNativeInterface::m_NativeARSession
	intptr_t ___m_NativeARSession_11;

public:
	inline static int32_t get_offset_of_m_NativeARSession_11() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3929719369, ___m_NativeARSession_11)); }
	inline intptr_t get_m_NativeARSession_11() const { return ___m_NativeARSession_11; }
	inline intptr_t* get_address_of_m_NativeARSession_11() { return &___m_NativeARSession_11; }
	inline void set_m_NativeARSession_11(intptr_t value)
	{
		___m_NativeARSession_11 = value;
	}
};

struct UnityARSessionNativeInterface_t3929719369_StaticFields
{
public:
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARFrameUpdate UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARFrameUpdatedEvent
	ARFrameUpdate_t1157215840 * ___ARFrameUpdatedEvent_0;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARAnchorAdded UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARAnchorAddedEvent
	ARAnchorAdded_t1608557165 * ___ARAnchorAddedEvent_1;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARAnchorUpdated UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARAnchorUpdatedEvent
	ARAnchorUpdated_t3113222537 * ___ARAnchorUpdatedEvent_2;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARAnchorRemoved UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARAnchorRemovedEvent
	ARAnchorRemoved_t4030593004 * ___ARAnchorRemovedEvent_3;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARUserAnchorAdded UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARUserAnchorAddedEvent
	ARUserAnchorAdded_t1851120876 * ___ARUserAnchorAddedEvent_4;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARUserAnchorUpdated UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARUserAnchorUpdatedEvent
	ARUserAnchorUpdated_t4007601678 * ___ARUserAnchorUpdatedEvent_5;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARUserAnchorRemoved UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARUserAnchorRemovedEvent
	ARUserAnchorRemoved_t23344545 * ___ARUserAnchorRemovedEvent_6;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARSessionFailed UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARSessionFailedEvent
	ARSessionFailed_t2125002991 * ___ARSessionFailedEvent_7;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARSessionCallback UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARSessionInterruptedEvent
	ARSessionCallback_t3772093212 * ___ARSessionInterruptedEvent_8;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARSessionCallback UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARSessioninterruptionEndedEvent
	ARSessionCallback_t3772093212 * ___ARSessioninterruptionEndedEvent_9;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARSessionTrackingChanged UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARSessionTrackingChangedEvent
	ARSessionTrackingChanged_t923029411 * ___ARSessionTrackingChangedEvent_10;
	// UnityEngine.XR.iOS.UnityARCamera UnityEngine.XR.iOS.UnityARSessionNativeInterface::s_Camera
	UnityARCamera_t2069150450  ___s_Camera_12;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface UnityEngine.XR.iOS.UnityARSessionNativeInterface::s_UnityARSessionNativeInterface
	UnityARSessionNativeInterface_t3929719369 * ___s_UnityARSessionNativeInterface_13;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARFrameUpdate UnityEngine.XR.iOS.UnityARSessionNativeInterface::<>f__mg$cache0
	internal_ARFrameUpdate_t3254989823 * ___U3CU3Ef__mgU24cache0_14;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARSessionFailed UnityEngine.XR.iOS.UnityARSessionNativeInterface::<>f__mg$cache1
	ARSessionFailed_t2125002991 * ___U3CU3Ef__mgU24cache1_15;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARSessionCallback UnityEngine.XR.iOS.UnityARSessionNativeInterface::<>f__mg$cache2
	ARSessionCallback_t3772093212 * ___U3CU3Ef__mgU24cache2_16;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARSessionCallback UnityEngine.XR.iOS.UnityARSessionNativeInterface::<>f__mg$cache3
	ARSessionCallback_t3772093212 * ___U3CU3Ef__mgU24cache3_17;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARSessionTrackingChanged UnityEngine.XR.iOS.UnityARSessionNativeInterface::<>f__mg$cache4
	internal_ARSessionTrackingChanged_t1988849735 * ___U3CU3Ef__mgU24cache4_18;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARAnchorAdded UnityEngine.XR.iOS.UnityARSessionNativeInterface::<>f__mg$cache5
	internal_ARAnchorAdded_t1565083332 * ___U3CU3Ef__mgU24cache5_19;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARAnchorUpdated UnityEngine.XR.iOS.UnityARSessionNativeInterface::<>f__mg$cache6
	internal_ARAnchorUpdated_t2645242205 * ___U3CU3Ef__mgU24cache6_20;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARAnchorRemoved UnityEngine.XR.iOS.UnityARSessionNativeInterface::<>f__mg$cache7
	internal_ARAnchorRemoved_t3371657877 * ___U3CU3Ef__mgU24cache7_21;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARUserAnchorAdded UnityEngine.XR.iOS.UnityARSessionNativeInterface::<>f__mg$cache8
	internal_ARUserAnchorAdded_t3285282493 * ___U3CU3Ef__mgU24cache8_22;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARUserAnchorUpdated UnityEngine.XR.iOS.UnityARSessionNativeInterface::<>f__mg$cache9
	internal_ARUserAnchorUpdated_t3964727538 * ___U3CU3Ef__mgU24cache9_23;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARUserAnchorRemoved UnityEngine.XR.iOS.UnityARSessionNativeInterface::<>f__mg$cacheA
	internal_ARUserAnchorRemoved_t386858594 * ___U3CU3Ef__mgU24cacheA_24;

public:
	inline static int32_t get_offset_of_ARFrameUpdatedEvent_0() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3929719369_StaticFields, ___ARFrameUpdatedEvent_0)); }
	inline ARFrameUpdate_t1157215840 * get_ARFrameUpdatedEvent_0() const { return ___ARFrameUpdatedEvent_0; }
	inline ARFrameUpdate_t1157215840 ** get_address_of_ARFrameUpdatedEvent_0() { return &___ARFrameUpdatedEvent_0; }
	inline void set_ARFrameUpdatedEvent_0(ARFrameUpdate_t1157215840 * value)
	{
		___ARFrameUpdatedEvent_0 = value;
		Il2CppCodeGenWriteBarrier((&___ARFrameUpdatedEvent_0), value);
	}

	inline static int32_t get_offset_of_ARAnchorAddedEvent_1() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3929719369_StaticFields, ___ARAnchorAddedEvent_1)); }
	inline ARAnchorAdded_t1608557165 * get_ARAnchorAddedEvent_1() const { return ___ARAnchorAddedEvent_1; }
	inline ARAnchorAdded_t1608557165 ** get_address_of_ARAnchorAddedEvent_1() { return &___ARAnchorAddedEvent_1; }
	inline void set_ARAnchorAddedEvent_1(ARAnchorAdded_t1608557165 * value)
	{
		___ARAnchorAddedEvent_1 = value;
		Il2CppCodeGenWriteBarrier((&___ARAnchorAddedEvent_1), value);
	}

	inline static int32_t get_offset_of_ARAnchorUpdatedEvent_2() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3929719369_StaticFields, ___ARAnchorUpdatedEvent_2)); }
	inline ARAnchorUpdated_t3113222537 * get_ARAnchorUpdatedEvent_2() const { return ___ARAnchorUpdatedEvent_2; }
	inline ARAnchorUpdated_t3113222537 ** get_address_of_ARAnchorUpdatedEvent_2() { return &___ARAnchorUpdatedEvent_2; }
	inline void set_ARAnchorUpdatedEvent_2(ARAnchorUpdated_t3113222537 * value)
	{
		___ARAnchorUpdatedEvent_2 = value;
		Il2CppCodeGenWriteBarrier((&___ARAnchorUpdatedEvent_2), value);
	}

	inline static int32_t get_offset_of_ARAnchorRemovedEvent_3() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3929719369_StaticFields, ___ARAnchorRemovedEvent_3)); }
	inline ARAnchorRemoved_t4030593004 * get_ARAnchorRemovedEvent_3() const { return ___ARAnchorRemovedEvent_3; }
	inline ARAnchorRemoved_t4030593004 ** get_address_of_ARAnchorRemovedEvent_3() { return &___ARAnchorRemovedEvent_3; }
	inline void set_ARAnchorRemovedEvent_3(ARAnchorRemoved_t4030593004 * value)
	{
		___ARAnchorRemovedEvent_3 = value;
		Il2CppCodeGenWriteBarrier((&___ARAnchorRemovedEvent_3), value);
	}

	inline static int32_t get_offset_of_ARUserAnchorAddedEvent_4() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3929719369_StaticFields, ___ARUserAnchorAddedEvent_4)); }
	inline ARUserAnchorAdded_t1851120876 * get_ARUserAnchorAddedEvent_4() const { return ___ARUserAnchorAddedEvent_4; }
	inline ARUserAnchorAdded_t1851120876 ** get_address_of_ARUserAnchorAddedEvent_4() { return &___ARUserAnchorAddedEvent_4; }
	inline void set_ARUserAnchorAddedEvent_4(ARUserAnchorAdded_t1851120876 * value)
	{
		___ARUserAnchorAddedEvent_4 = value;
		Il2CppCodeGenWriteBarrier((&___ARUserAnchorAddedEvent_4), value);
	}

	inline static int32_t get_offset_of_ARUserAnchorUpdatedEvent_5() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3929719369_StaticFields, ___ARUserAnchorUpdatedEvent_5)); }
	inline ARUserAnchorUpdated_t4007601678 * get_ARUserAnchorUpdatedEvent_5() const { return ___ARUserAnchorUpdatedEvent_5; }
	inline ARUserAnchorUpdated_t4007601678 ** get_address_of_ARUserAnchorUpdatedEvent_5() { return &___ARUserAnchorUpdatedEvent_5; }
	inline void set_ARUserAnchorUpdatedEvent_5(ARUserAnchorUpdated_t4007601678 * value)
	{
		___ARUserAnchorUpdatedEvent_5 = value;
		Il2CppCodeGenWriteBarrier((&___ARUserAnchorUpdatedEvent_5), value);
	}

	inline static int32_t get_offset_of_ARUserAnchorRemovedEvent_6() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3929719369_StaticFields, ___ARUserAnchorRemovedEvent_6)); }
	inline ARUserAnchorRemoved_t23344545 * get_ARUserAnchorRemovedEvent_6() const { return ___ARUserAnchorRemovedEvent_6; }
	inline ARUserAnchorRemoved_t23344545 ** get_address_of_ARUserAnchorRemovedEvent_6() { return &___ARUserAnchorRemovedEvent_6; }
	inline void set_ARUserAnchorRemovedEvent_6(ARUserAnchorRemoved_t23344545 * value)
	{
		___ARUserAnchorRemovedEvent_6 = value;
		Il2CppCodeGenWriteBarrier((&___ARUserAnchorRemovedEvent_6), value);
	}

	inline static int32_t get_offset_of_ARSessionFailedEvent_7() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3929719369_StaticFields, ___ARSessionFailedEvent_7)); }
	inline ARSessionFailed_t2125002991 * get_ARSessionFailedEvent_7() const { return ___ARSessionFailedEvent_7; }
	inline ARSessionFailed_t2125002991 ** get_address_of_ARSessionFailedEvent_7() { return &___ARSessionFailedEvent_7; }
	inline void set_ARSessionFailedEvent_7(ARSessionFailed_t2125002991 * value)
	{
		___ARSessionFailedEvent_7 = value;
		Il2CppCodeGenWriteBarrier((&___ARSessionFailedEvent_7), value);
	}

	inline static int32_t get_offset_of_ARSessionInterruptedEvent_8() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3929719369_StaticFields, ___ARSessionInterruptedEvent_8)); }
	inline ARSessionCallback_t3772093212 * get_ARSessionInterruptedEvent_8() const { return ___ARSessionInterruptedEvent_8; }
	inline ARSessionCallback_t3772093212 ** get_address_of_ARSessionInterruptedEvent_8() { return &___ARSessionInterruptedEvent_8; }
	inline void set_ARSessionInterruptedEvent_8(ARSessionCallback_t3772093212 * value)
	{
		___ARSessionInterruptedEvent_8 = value;
		Il2CppCodeGenWriteBarrier((&___ARSessionInterruptedEvent_8), value);
	}

	inline static int32_t get_offset_of_ARSessioninterruptionEndedEvent_9() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3929719369_StaticFields, ___ARSessioninterruptionEndedEvent_9)); }
	inline ARSessionCallback_t3772093212 * get_ARSessioninterruptionEndedEvent_9() const { return ___ARSessioninterruptionEndedEvent_9; }
	inline ARSessionCallback_t3772093212 ** get_address_of_ARSessioninterruptionEndedEvent_9() { return &___ARSessioninterruptionEndedEvent_9; }
	inline void set_ARSessioninterruptionEndedEvent_9(ARSessionCallback_t3772093212 * value)
	{
		___ARSessioninterruptionEndedEvent_9 = value;
		Il2CppCodeGenWriteBarrier((&___ARSessioninterruptionEndedEvent_9), value);
	}

	inline static int32_t get_offset_of_ARSessionTrackingChangedEvent_10() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3929719369_StaticFields, ___ARSessionTrackingChangedEvent_10)); }
	inline ARSessionTrackingChanged_t923029411 * get_ARSessionTrackingChangedEvent_10() const { return ___ARSessionTrackingChangedEvent_10; }
	inline ARSessionTrackingChanged_t923029411 ** get_address_of_ARSessionTrackingChangedEvent_10() { return &___ARSessionTrackingChangedEvent_10; }
	inline void set_ARSessionTrackingChangedEvent_10(ARSessionTrackingChanged_t923029411 * value)
	{
		___ARSessionTrackingChangedEvent_10 = value;
		Il2CppCodeGenWriteBarrier((&___ARSessionTrackingChangedEvent_10), value);
	}

	inline static int32_t get_offset_of_s_Camera_12() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3929719369_StaticFields, ___s_Camera_12)); }
	inline UnityARCamera_t2069150450  get_s_Camera_12() const { return ___s_Camera_12; }
	inline UnityARCamera_t2069150450 * get_address_of_s_Camera_12() { return &___s_Camera_12; }
	inline void set_s_Camera_12(UnityARCamera_t2069150450  value)
	{
		___s_Camera_12 = value;
	}

	inline static int32_t get_offset_of_s_UnityARSessionNativeInterface_13() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3929719369_StaticFields, ___s_UnityARSessionNativeInterface_13)); }
	inline UnityARSessionNativeInterface_t3929719369 * get_s_UnityARSessionNativeInterface_13() const { return ___s_UnityARSessionNativeInterface_13; }
	inline UnityARSessionNativeInterface_t3929719369 ** get_address_of_s_UnityARSessionNativeInterface_13() { return &___s_UnityARSessionNativeInterface_13; }
	inline void set_s_UnityARSessionNativeInterface_13(UnityARSessionNativeInterface_t3929719369 * value)
	{
		___s_UnityARSessionNativeInterface_13 = value;
		Il2CppCodeGenWriteBarrier((&___s_UnityARSessionNativeInterface_13), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_14() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3929719369_StaticFields, ___U3CU3Ef__mgU24cache0_14)); }
	inline internal_ARFrameUpdate_t3254989823 * get_U3CU3Ef__mgU24cache0_14() const { return ___U3CU3Ef__mgU24cache0_14; }
	inline internal_ARFrameUpdate_t3254989823 ** get_address_of_U3CU3Ef__mgU24cache0_14() { return &___U3CU3Ef__mgU24cache0_14; }
	inline void set_U3CU3Ef__mgU24cache0_14(internal_ARFrameUpdate_t3254989823 * value)
	{
		___U3CU3Ef__mgU24cache0_14 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache0_14), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache1_15() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3929719369_StaticFields, ___U3CU3Ef__mgU24cache1_15)); }
	inline ARSessionFailed_t2125002991 * get_U3CU3Ef__mgU24cache1_15() const { return ___U3CU3Ef__mgU24cache1_15; }
	inline ARSessionFailed_t2125002991 ** get_address_of_U3CU3Ef__mgU24cache1_15() { return &___U3CU3Ef__mgU24cache1_15; }
	inline void set_U3CU3Ef__mgU24cache1_15(ARSessionFailed_t2125002991 * value)
	{
		___U3CU3Ef__mgU24cache1_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache1_15), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache2_16() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3929719369_StaticFields, ___U3CU3Ef__mgU24cache2_16)); }
	inline ARSessionCallback_t3772093212 * get_U3CU3Ef__mgU24cache2_16() const { return ___U3CU3Ef__mgU24cache2_16; }
	inline ARSessionCallback_t3772093212 ** get_address_of_U3CU3Ef__mgU24cache2_16() { return &___U3CU3Ef__mgU24cache2_16; }
	inline void set_U3CU3Ef__mgU24cache2_16(ARSessionCallback_t3772093212 * value)
	{
		___U3CU3Ef__mgU24cache2_16 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache2_16), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache3_17() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3929719369_StaticFields, ___U3CU3Ef__mgU24cache3_17)); }
	inline ARSessionCallback_t3772093212 * get_U3CU3Ef__mgU24cache3_17() const { return ___U3CU3Ef__mgU24cache3_17; }
	inline ARSessionCallback_t3772093212 ** get_address_of_U3CU3Ef__mgU24cache3_17() { return &___U3CU3Ef__mgU24cache3_17; }
	inline void set_U3CU3Ef__mgU24cache3_17(ARSessionCallback_t3772093212 * value)
	{
		___U3CU3Ef__mgU24cache3_17 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache3_17), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache4_18() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3929719369_StaticFields, ___U3CU3Ef__mgU24cache4_18)); }
	inline internal_ARSessionTrackingChanged_t1988849735 * get_U3CU3Ef__mgU24cache4_18() const { return ___U3CU3Ef__mgU24cache4_18; }
	inline internal_ARSessionTrackingChanged_t1988849735 ** get_address_of_U3CU3Ef__mgU24cache4_18() { return &___U3CU3Ef__mgU24cache4_18; }
	inline void set_U3CU3Ef__mgU24cache4_18(internal_ARSessionTrackingChanged_t1988849735 * value)
	{
		___U3CU3Ef__mgU24cache4_18 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache4_18), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache5_19() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3929719369_StaticFields, ___U3CU3Ef__mgU24cache5_19)); }
	inline internal_ARAnchorAdded_t1565083332 * get_U3CU3Ef__mgU24cache5_19() const { return ___U3CU3Ef__mgU24cache5_19; }
	inline internal_ARAnchorAdded_t1565083332 ** get_address_of_U3CU3Ef__mgU24cache5_19() { return &___U3CU3Ef__mgU24cache5_19; }
	inline void set_U3CU3Ef__mgU24cache5_19(internal_ARAnchorAdded_t1565083332 * value)
	{
		___U3CU3Ef__mgU24cache5_19 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache5_19), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache6_20() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3929719369_StaticFields, ___U3CU3Ef__mgU24cache6_20)); }
	inline internal_ARAnchorUpdated_t2645242205 * get_U3CU3Ef__mgU24cache6_20() const { return ___U3CU3Ef__mgU24cache6_20; }
	inline internal_ARAnchorUpdated_t2645242205 ** get_address_of_U3CU3Ef__mgU24cache6_20() { return &___U3CU3Ef__mgU24cache6_20; }
	inline void set_U3CU3Ef__mgU24cache6_20(internal_ARAnchorUpdated_t2645242205 * value)
	{
		___U3CU3Ef__mgU24cache6_20 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache6_20), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache7_21() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3929719369_StaticFields, ___U3CU3Ef__mgU24cache7_21)); }
	inline internal_ARAnchorRemoved_t3371657877 * get_U3CU3Ef__mgU24cache7_21() const { return ___U3CU3Ef__mgU24cache7_21; }
	inline internal_ARAnchorRemoved_t3371657877 ** get_address_of_U3CU3Ef__mgU24cache7_21() { return &___U3CU3Ef__mgU24cache7_21; }
	inline void set_U3CU3Ef__mgU24cache7_21(internal_ARAnchorRemoved_t3371657877 * value)
	{
		___U3CU3Ef__mgU24cache7_21 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache7_21), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache8_22() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3929719369_StaticFields, ___U3CU3Ef__mgU24cache8_22)); }
	inline internal_ARUserAnchorAdded_t3285282493 * get_U3CU3Ef__mgU24cache8_22() const { return ___U3CU3Ef__mgU24cache8_22; }
	inline internal_ARUserAnchorAdded_t3285282493 ** get_address_of_U3CU3Ef__mgU24cache8_22() { return &___U3CU3Ef__mgU24cache8_22; }
	inline void set_U3CU3Ef__mgU24cache8_22(internal_ARUserAnchorAdded_t3285282493 * value)
	{
		___U3CU3Ef__mgU24cache8_22 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache8_22), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache9_23() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3929719369_StaticFields, ___U3CU3Ef__mgU24cache9_23)); }
	inline internal_ARUserAnchorUpdated_t3964727538 * get_U3CU3Ef__mgU24cache9_23() const { return ___U3CU3Ef__mgU24cache9_23; }
	inline internal_ARUserAnchorUpdated_t3964727538 ** get_address_of_U3CU3Ef__mgU24cache9_23() { return &___U3CU3Ef__mgU24cache9_23; }
	inline void set_U3CU3Ef__mgU24cache9_23(internal_ARUserAnchorUpdated_t3964727538 * value)
	{
		___U3CU3Ef__mgU24cache9_23 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache9_23), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cacheA_24() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3929719369_StaticFields, ___U3CU3Ef__mgU24cacheA_24)); }
	inline internal_ARUserAnchorRemoved_t386858594 * get_U3CU3Ef__mgU24cacheA_24() const { return ___U3CU3Ef__mgU24cacheA_24; }
	inline internal_ARUserAnchorRemoved_t386858594 ** get_address_of_U3CU3Ef__mgU24cacheA_24() { return &___U3CU3Ef__mgU24cacheA_24; }
	inline void set_U3CU3Ef__mgU24cacheA_24(internal_ARUserAnchorRemoved_t386858594 * value)
	{
		___U3CU3Ef__mgU24cacheA_24 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cacheA_24), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYARSESSIONNATIVEINTERFACE_T3929719369_H
#ifndef MESHFILTER_T3523625662_H
#define MESHFILTER_T3523625662_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MeshFilter
struct  MeshFilter_t3523625662  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESHFILTER_T3523625662_H
#ifndef ARUSERANCHORADDED_T1851120876_H
#define ARUSERANCHORADDED_T1851120876_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARUserAnchorAdded
struct  ARUserAnchorAdded_t1851120876  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARUSERANCHORADDED_T1851120876_H
#ifndef ASYNCCALLBACK_T3962456242_H
#define ASYNCCALLBACK_T3962456242_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.AsyncCallback
struct  AsyncCallback_t3962456242  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYNCCALLBACK_T3962456242_H
#ifndef MONOBEHAVIOUR_T3962482529_H
#define MONOBEHAVIOUR_T3962482529_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t3962482529  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T3962482529_H
#ifndef LIGHT_T3756812086_H
#define LIGHT_T3756812086_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Light
struct  Light_t3756812086  : public Behaviour_t1437897464
{
public:
	// System.Int32 UnityEngine.Light::m_BakedIndex
	int32_t ___m_BakedIndex_2;

public:
	inline static int32_t get_offset_of_m_BakedIndex_2() { return static_cast<int32_t>(offsetof(Light_t3756812086, ___m_BakedIndex_2)); }
	inline int32_t get_m_BakedIndex_2() const { return ___m_BakedIndex_2; }
	inline int32_t* get_address_of_m_BakedIndex_2() { return &___m_BakedIndex_2; }
	inline void set_m_BakedIndex_2(int32_t value)
	{
		___m_BakedIndex_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIGHT_T3756812086_H
#ifndef CAMERA_T4157153871_H
#define CAMERA_T4157153871_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Camera
struct  Camera_t4157153871  : public Behaviour_t1437897464
{
public:

public:
};

struct Camera_t4157153871_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t190067161 * ___onPreCull_2;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t190067161 * ___onPreRender_3;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t190067161 * ___onPostRender_4;

public:
	inline static int32_t get_offset_of_onPreCull_2() { return static_cast<int32_t>(offsetof(Camera_t4157153871_StaticFields, ___onPreCull_2)); }
	inline CameraCallback_t190067161 * get_onPreCull_2() const { return ___onPreCull_2; }
	inline CameraCallback_t190067161 ** get_address_of_onPreCull_2() { return &___onPreCull_2; }
	inline void set_onPreCull_2(CameraCallback_t190067161 * value)
	{
		___onPreCull_2 = value;
		Il2CppCodeGenWriteBarrier((&___onPreCull_2), value);
	}

	inline static int32_t get_offset_of_onPreRender_3() { return static_cast<int32_t>(offsetof(Camera_t4157153871_StaticFields, ___onPreRender_3)); }
	inline CameraCallback_t190067161 * get_onPreRender_3() const { return ___onPreRender_3; }
	inline CameraCallback_t190067161 ** get_address_of_onPreRender_3() { return &___onPreRender_3; }
	inline void set_onPreRender_3(CameraCallback_t190067161 * value)
	{
		___onPreRender_3 = value;
		Il2CppCodeGenWriteBarrier((&___onPreRender_3), value);
	}

	inline static int32_t get_offset_of_onPostRender_4() { return static_cast<int32_t>(offsetof(Camera_t4157153871_StaticFields, ___onPostRender_4)); }
	inline CameraCallback_t190067161 * get_onPostRender_4() const { return ___onPostRender_4; }
	inline CameraCallback_t190067161 ** get_address_of_onPostRender_4() { return &___onPostRender_4; }
	inline void set_onPostRender_4(CameraCallback_t190067161 * value)
	{
		___onPostRender_4 = value;
		Il2CppCodeGenWriteBarrier((&___onPostRender_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERA_T4157153871_H
#ifndef EDITORHITTEST_T1253817588_H
#define EDITORHITTEST_T1253817588_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.EditorHitTest
struct  EditorHitTest_t1253817588  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Transform UnityEngine.XR.iOS.EditorHitTest::m_HitTransform
	Transform_t3600365921 * ___m_HitTransform_2;
	// System.Single UnityEngine.XR.iOS.EditorHitTest::maxRayDistance
	float ___maxRayDistance_3;
	// UnityEngine.LayerMask UnityEngine.XR.iOS.EditorHitTest::collisionLayerMask
	LayerMask_t3493934918  ___collisionLayerMask_4;

public:
	inline static int32_t get_offset_of_m_HitTransform_2() { return static_cast<int32_t>(offsetof(EditorHitTest_t1253817588, ___m_HitTransform_2)); }
	inline Transform_t3600365921 * get_m_HitTransform_2() const { return ___m_HitTransform_2; }
	inline Transform_t3600365921 ** get_address_of_m_HitTransform_2() { return &___m_HitTransform_2; }
	inline void set_m_HitTransform_2(Transform_t3600365921 * value)
	{
		___m_HitTransform_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_HitTransform_2), value);
	}

	inline static int32_t get_offset_of_maxRayDistance_3() { return static_cast<int32_t>(offsetof(EditorHitTest_t1253817588, ___maxRayDistance_3)); }
	inline float get_maxRayDistance_3() const { return ___maxRayDistance_3; }
	inline float* get_address_of_maxRayDistance_3() { return &___maxRayDistance_3; }
	inline void set_maxRayDistance_3(float value)
	{
		___maxRayDistance_3 = value;
	}

	inline static int32_t get_offset_of_collisionLayerMask_4() { return static_cast<int32_t>(offsetof(EditorHitTest_t1253817588, ___collisionLayerMask_4)); }
	inline LayerMask_t3493934918  get_collisionLayerMask_4() const { return ___collisionLayerMask_4; }
	inline LayerMask_t3493934918 * get_address_of_collisionLayerMask_4() { return &___collisionLayerMask_4; }
	inline void set_collisionLayerMask_4(LayerMask_t3493934918  value)
	{
		___collisionLayerMask_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EDITORHITTEST_T1253817588_H
#ifndef DONTDESTROYONLOAD_T1456007215_H
#define DONTDESTROYONLOAD_T1456007215_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DontDestroyOnLoad
struct  DontDestroyOnLoad_t1456007215  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DONTDESTROYONLOAD_T1456007215_H
#ifndef UNITYARVIDEO_T1146951207_H
#define UNITYARVIDEO_T1146951207_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARVideo
struct  UnityARVideo_t1146951207  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Material UnityEngine.XR.iOS.UnityARVideo::m_ClearMaterial
	Material_t340375123 * ___m_ClearMaterial_2;
	// UnityEngine.Rendering.CommandBuffer UnityEngine.XR.iOS.UnityARVideo::m_VideoCommandBuffer
	CommandBuffer_t2206337031 * ___m_VideoCommandBuffer_3;
	// UnityEngine.Texture2D UnityEngine.XR.iOS.UnityARVideo::_videoTextureY
	Texture2D_t3840446185 * ____videoTextureY_4;
	// UnityEngine.Texture2D UnityEngine.XR.iOS.UnityARVideo::_videoTextureCbCr
	Texture2D_t3840446185 * ____videoTextureCbCr_5;
	// UnityEngine.Matrix4x4 UnityEngine.XR.iOS.UnityARVideo::_displayTransform
	Matrix4x4_t1817901843  ____displayTransform_6;
	// System.Boolean UnityEngine.XR.iOS.UnityARVideo::bCommandBufferInitialized
	bool ___bCommandBufferInitialized_7;

public:
	inline static int32_t get_offset_of_m_ClearMaterial_2() { return static_cast<int32_t>(offsetof(UnityARVideo_t1146951207, ___m_ClearMaterial_2)); }
	inline Material_t340375123 * get_m_ClearMaterial_2() const { return ___m_ClearMaterial_2; }
	inline Material_t340375123 ** get_address_of_m_ClearMaterial_2() { return &___m_ClearMaterial_2; }
	inline void set_m_ClearMaterial_2(Material_t340375123 * value)
	{
		___m_ClearMaterial_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_ClearMaterial_2), value);
	}

	inline static int32_t get_offset_of_m_VideoCommandBuffer_3() { return static_cast<int32_t>(offsetof(UnityARVideo_t1146951207, ___m_VideoCommandBuffer_3)); }
	inline CommandBuffer_t2206337031 * get_m_VideoCommandBuffer_3() const { return ___m_VideoCommandBuffer_3; }
	inline CommandBuffer_t2206337031 ** get_address_of_m_VideoCommandBuffer_3() { return &___m_VideoCommandBuffer_3; }
	inline void set_m_VideoCommandBuffer_3(CommandBuffer_t2206337031 * value)
	{
		___m_VideoCommandBuffer_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_VideoCommandBuffer_3), value);
	}

	inline static int32_t get_offset_of__videoTextureY_4() { return static_cast<int32_t>(offsetof(UnityARVideo_t1146951207, ____videoTextureY_4)); }
	inline Texture2D_t3840446185 * get__videoTextureY_4() const { return ____videoTextureY_4; }
	inline Texture2D_t3840446185 ** get_address_of__videoTextureY_4() { return &____videoTextureY_4; }
	inline void set__videoTextureY_4(Texture2D_t3840446185 * value)
	{
		____videoTextureY_4 = value;
		Il2CppCodeGenWriteBarrier((&____videoTextureY_4), value);
	}

	inline static int32_t get_offset_of__videoTextureCbCr_5() { return static_cast<int32_t>(offsetof(UnityARVideo_t1146951207, ____videoTextureCbCr_5)); }
	inline Texture2D_t3840446185 * get__videoTextureCbCr_5() const { return ____videoTextureCbCr_5; }
	inline Texture2D_t3840446185 ** get_address_of__videoTextureCbCr_5() { return &____videoTextureCbCr_5; }
	inline void set__videoTextureCbCr_5(Texture2D_t3840446185 * value)
	{
		____videoTextureCbCr_5 = value;
		Il2CppCodeGenWriteBarrier((&____videoTextureCbCr_5), value);
	}

	inline static int32_t get_offset_of__displayTransform_6() { return static_cast<int32_t>(offsetof(UnityARVideo_t1146951207, ____displayTransform_6)); }
	inline Matrix4x4_t1817901843  get__displayTransform_6() const { return ____displayTransform_6; }
	inline Matrix4x4_t1817901843 * get_address_of__displayTransform_6() { return &____displayTransform_6; }
	inline void set__displayTransform_6(Matrix4x4_t1817901843  value)
	{
		____displayTransform_6 = value;
	}

	inline static int32_t get_offset_of_bCommandBufferInitialized_7() { return static_cast<int32_t>(offsetof(UnityARVideo_t1146951207, ___bCommandBufferInitialized_7)); }
	inline bool get_bCommandBufferInitialized_7() const { return ___bCommandBufferInitialized_7; }
	inline bool* get_address_of_bCommandBufferInitialized_7() { return &___bCommandBufferInitialized_7; }
	inline void set_bCommandBufferInitialized_7(bool value)
	{
		___bCommandBufferInitialized_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYARVIDEO_T1146951207_H
#ifndef UNITYPOINTCLOUDEXAMPLE_T3649008995_H
#define UNITYPOINTCLOUDEXAMPLE_T3649008995_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityPointCloudExample
struct  UnityPointCloudExample_t3649008995  : public MonoBehaviour_t3962482529
{
public:
	// System.UInt32 UnityPointCloudExample::numPointsToShow
	uint32_t ___numPointsToShow_2;
	// UnityEngine.GameObject UnityPointCloudExample::PointCloudPrefab
	GameObject_t1113636619 * ___PointCloudPrefab_3;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> UnityPointCloudExample::pointCloudObjects
	List_1_t2585711361 * ___pointCloudObjects_4;
	// UnityEngine.Vector3[] UnityPointCloudExample::m_PointCloudData
	Vector3U5BU5D_t1718750761* ___m_PointCloudData_5;

public:
	inline static int32_t get_offset_of_numPointsToShow_2() { return static_cast<int32_t>(offsetof(UnityPointCloudExample_t3649008995, ___numPointsToShow_2)); }
	inline uint32_t get_numPointsToShow_2() const { return ___numPointsToShow_2; }
	inline uint32_t* get_address_of_numPointsToShow_2() { return &___numPointsToShow_2; }
	inline void set_numPointsToShow_2(uint32_t value)
	{
		___numPointsToShow_2 = value;
	}

	inline static int32_t get_offset_of_PointCloudPrefab_3() { return static_cast<int32_t>(offsetof(UnityPointCloudExample_t3649008995, ___PointCloudPrefab_3)); }
	inline GameObject_t1113636619 * get_PointCloudPrefab_3() const { return ___PointCloudPrefab_3; }
	inline GameObject_t1113636619 ** get_address_of_PointCloudPrefab_3() { return &___PointCloudPrefab_3; }
	inline void set_PointCloudPrefab_3(GameObject_t1113636619 * value)
	{
		___PointCloudPrefab_3 = value;
		Il2CppCodeGenWriteBarrier((&___PointCloudPrefab_3), value);
	}

	inline static int32_t get_offset_of_pointCloudObjects_4() { return static_cast<int32_t>(offsetof(UnityPointCloudExample_t3649008995, ___pointCloudObjects_4)); }
	inline List_1_t2585711361 * get_pointCloudObjects_4() const { return ___pointCloudObjects_4; }
	inline List_1_t2585711361 ** get_address_of_pointCloudObjects_4() { return &___pointCloudObjects_4; }
	inline void set_pointCloudObjects_4(List_1_t2585711361 * value)
	{
		___pointCloudObjects_4 = value;
		Il2CppCodeGenWriteBarrier((&___pointCloudObjects_4), value);
	}

	inline static int32_t get_offset_of_m_PointCloudData_5() { return static_cast<int32_t>(offsetof(UnityPointCloudExample_t3649008995, ___m_PointCloudData_5)); }
	inline Vector3U5BU5D_t1718750761* get_m_PointCloudData_5() const { return ___m_PointCloudData_5; }
	inline Vector3U5BU5D_t1718750761** get_address_of_m_PointCloudData_5() { return &___m_PointCloudData_5; }
	inline void set_m_PointCloudData_5(Vector3U5BU5D_t1718750761* value)
	{
		___m_PointCloudData_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_PointCloudData_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYPOINTCLOUDEXAMPLE_T3649008995_H
#ifndef UNITYARKITCONTROL_T1358211756_H
#define UNITYARKITCONTROL_T1358211756_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARKitControl
struct  UnityARKitControl_t1358211756  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.XR.iOS.UnityARSessionRunOption[] UnityEngine.XR.iOS.UnityARKitControl::runOptions
	UnityARSessionRunOptionU5BU5D_t4225291891* ___runOptions_2;
	// UnityEngine.XR.iOS.UnityARAlignment[] UnityEngine.XR.iOS.UnityARKitControl::alignmentOptions
	UnityARAlignmentU5BU5D_t3682394155* ___alignmentOptions_3;
	// UnityEngine.XR.iOS.UnityARPlaneDetection[] UnityEngine.XR.iOS.UnityARKitControl::planeOptions
	UnityARPlaneDetectionU5BU5D_t3458580926* ___planeOptions_4;
	// System.Int32 UnityEngine.XR.iOS.UnityARKitControl::currentOptionIndex
	int32_t ___currentOptionIndex_5;
	// System.Int32 UnityEngine.XR.iOS.UnityARKitControl::currentAlignmentIndex
	int32_t ___currentAlignmentIndex_6;
	// System.Int32 UnityEngine.XR.iOS.UnityARKitControl::currentPlaneIndex
	int32_t ___currentPlaneIndex_7;

public:
	inline static int32_t get_offset_of_runOptions_2() { return static_cast<int32_t>(offsetof(UnityARKitControl_t1358211756, ___runOptions_2)); }
	inline UnityARSessionRunOptionU5BU5D_t4225291891* get_runOptions_2() const { return ___runOptions_2; }
	inline UnityARSessionRunOptionU5BU5D_t4225291891** get_address_of_runOptions_2() { return &___runOptions_2; }
	inline void set_runOptions_2(UnityARSessionRunOptionU5BU5D_t4225291891* value)
	{
		___runOptions_2 = value;
		Il2CppCodeGenWriteBarrier((&___runOptions_2), value);
	}

	inline static int32_t get_offset_of_alignmentOptions_3() { return static_cast<int32_t>(offsetof(UnityARKitControl_t1358211756, ___alignmentOptions_3)); }
	inline UnityARAlignmentU5BU5D_t3682394155* get_alignmentOptions_3() const { return ___alignmentOptions_3; }
	inline UnityARAlignmentU5BU5D_t3682394155** get_address_of_alignmentOptions_3() { return &___alignmentOptions_3; }
	inline void set_alignmentOptions_3(UnityARAlignmentU5BU5D_t3682394155* value)
	{
		___alignmentOptions_3 = value;
		Il2CppCodeGenWriteBarrier((&___alignmentOptions_3), value);
	}

	inline static int32_t get_offset_of_planeOptions_4() { return static_cast<int32_t>(offsetof(UnityARKitControl_t1358211756, ___planeOptions_4)); }
	inline UnityARPlaneDetectionU5BU5D_t3458580926* get_planeOptions_4() const { return ___planeOptions_4; }
	inline UnityARPlaneDetectionU5BU5D_t3458580926** get_address_of_planeOptions_4() { return &___planeOptions_4; }
	inline void set_planeOptions_4(UnityARPlaneDetectionU5BU5D_t3458580926* value)
	{
		___planeOptions_4 = value;
		Il2CppCodeGenWriteBarrier((&___planeOptions_4), value);
	}

	inline static int32_t get_offset_of_currentOptionIndex_5() { return static_cast<int32_t>(offsetof(UnityARKitControl_t1358211756, ___currentOptionIndex_5)); }
	inline int32_t get_currentOptionIndex_5() const { return ___currentOptionIndex_5; }
	inline int32_t* get_address_of_currentOptionIndex_5() { return &___currentOptionIndex_5; }
	inline void set_currentOptionIndex_5(int32_t value)
	{
		___currentOptionIndex_5 = value;
	}

	inline static int32_t get_offset_of_currentAlignmentIndex_6() { return static_cast<int32_t>(offsetof(UnityARKitControl_t1358211756, ___currentAlignmentIndex_6)); }
	inline int32_t get_currentAlignmentIndex_6() const { return ___currentAlignmentIndex_6; }
	inline int32_t* get_address_of_currentAlignmentIndex_6() { return &___currentAlignmentIndex_6; }
	inline void set_currentAlignmentIndex_6(int32_t value)
	{
		___currentAlignmentIndex_6 = value;
	}

	inline static int32_t get_offset_of_currentPlaneIndex_7() { return static_cast<int32_t>(offsetof(UnityARKitControl_t1358211756, ___currentPlaneIndex_7)); }
	inline int32_t get_currentPlaneIndex_7() const { return ___currentPlaneIndex_7; }
	inline int32_t* get_address_of_currentPlaneIndex_7() { return &___currentPlaneIndex_7; }
	inline void set_currentPlaneIndex_7(int32_t value)
	{
		___currentPlaneIndex_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYARKITCONTROL_T1358211756_H
#ifndef UNITYARAMBIENT_T2710679068_H
#define UNITYARAMBIENT_T2710679068_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARAmbient
struct  UnityARAmbient_t2710679068  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Light UnityEngine.XR.iOS.UnityARAmbient::l
	Light_t3756812086 * ___l_2;

public:
	inline static int32_t get_offset_of_l_2() { return static_cast<int32_t>(offsetof(UnityARAmbient_t2710679068, ___l_2)); }
	inline Light_t3756812086 * get_l_2() const { return ___l_2; }
	inline Light_t3756812086 ** get_address_of_l_2() { return &___l_2; }
	inline void set_l_2(Light_t3756812086 * value)
	{
		___l_2 = value;
		Il2CppCodeGenWriteBarrier((&___l_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYARAMBIENT_T2710679068_H
#ifndef CONNECTTOEDITOR_T595742893_H
#define CONNECTTOEDITOR_T595742893_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.ConnectToEditor
struct  ConnectToEditor_t595742893  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Networking.PlayerConnection.PlayerConnection UnityEngine.XR.iOS.ConnectToEditor::playerConnection
	PlayerConnection_t3081694049 * ___playerConnection_2;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface UnityEngine.XR.iOS.ConnectToEditor::m_session
	UnityARSessionNativeInterface_t3929719369 * ___m_session_3;
	// System.Int32 UnityEngine.XR.iOS.ConnectToEditor::editorID
	int32_t ___editorID_4;
	// UnityEngine.Texture2D UnityEngine.XR.iOS.ConnectToEditor::frameBufferTex
	Texture2D_t3840446185 * ___frameBufferTex_5;

public:
	inline static int32_t get_offset_of_playerConnection_2() { return static_cast<int32_t>(offsetof(ConnectToEditor_t595742893, ___playerConnection_2)); }
	inline PlayerConnection_t3081694049 * get_playerConnection_2() const { return ___playerConnection_2; }
	inline PlayerConnection_t3081694049 ** get_address_of_playerConnection_2() { return &___playerConnection_2; }
	inline void set_playerConnection_2(PlayerConnection_t3081694049 * value)
	{
		___playerConnection_2 = value;
		Il2CppCodeGenWriteBarrier((&___playerConnection_2), value);
	}

	inline static int32_t get_offset_of_m_session_3() { return static_cast<int32_t>(offsetof(ConnectToEditor_t595742893, ___m_session_3)); }
	inline UnityARSessionNativeInterface_t3929719369 * get_m_session_3() const { return ___m_session_3; }
	inline UnityARSessionNativeInterface_t3929719369 ** get_address_of_m_session_3() { return &___m_session_3; }
	inline void set_m_session_3(UnityARSessionNativeInterface_t3929719369 * value)
	{
		___m_session_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_session_3), value);
	}

	inline static int32_t get_offset_of_editorID_4() { return static_cast<int32_t>(offsetof(ConnectToEditor_t595742893, ___editorID_4)); }
	inline int32_t get_editorID_4() const { return ___editorID_4; }
	inline int32_t* get_address_of_editorID_4() { return &___editorID_4; }
	inline void set_editorID_4(int32_t value)
	{
		___editorID_4 = value;
	}

	inline static int32_t get_offset_of_frameBufferTex_5() { return static_cast<int32_t>(offsetof(ConnectToEditor_t595742893, ___frameBufferTex_5)); }
	inline Texture2D_t3840446185 * get_frameBufferTex_5() const { return ___frameBufferTex_5; }
	inline Texture2D_t3840446185 ** get_address_of_frameBufferTex_5() { return &___frameBufferTex_5; }
	inline void set_frameBufferTex_5(Texture2D_t3840446185 * value)
	{
		___frameBufferTex_5 = value;
		Il2CppCodeGenWriteBarrier((&___frameBufferTex_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONNECTTOEDITOR_T595742893_H
#ifndef UNITYARUSERANCHORCOMPONENT_T969893952_H
#define UNITYARUSERANCHORCOMPONENT_T969893952_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARUserAnchorComponent
struct  UnityARUserAnchorComponent_t969893952  : public MonoBehaviour_t3962482529
{
public:
	// System.String UnityEngine.XR.iOS.UnityARUserAnchorComponent::m_AnchorId
	String_t* ___m_AnchorId_2;

public:
	inline static int32_t get_offset_of_m_AnchorId_2() { return static_cast<int32_t>(offsetof(UnityARUserAnchorComponent_t969893952, ___m_AnchorId_2)); }
	inline String_t* get_m_AnchorId_2() const { return ___m_AnchorId_2; }
	inline String_t** get_address_of_m_AnchorId_2() { return &___m_AnchorId_2; }
	inline void set_m_AnchorId_2(String_t* value)
	{
		___m_AnchorId_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_AnchorId_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYARUSERANCHORCOMPONENT_T969893952_H
#ifndef UNITYREMOTEVIDEO_T705138647_H
#define UNITYREMOTEVIDEO_T705138647_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityRemoteVideo
struct  UnityRemoteVideo_t705138647  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.XR.iOS.ConnectToEditor UnityEngine.XR.iOS.UnityRemoteVideo::connectToEditor
	ConnectToEditor_t595742893 * ___connectToEditor_2;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface UnityEngine.XR.iOS.UnityRemoteVideo::m_Session
	UnityARSessionNativeInterface_t3929719369 * ___m_Session_3;
	// System.Boolean UnityEngine.XR.iOS.UnityRemoteVideo::bTexturesInitialized
	bool ___bTexturesInitialized_4;
	// System.Int32 UnityEngine.XR.iOS.UnityRemoteVideo::currentFrameIndex
	int32_t ___currentFrameIndex_5;
	// System.Byte[] UnityEngine.XR.iOS.UnityRemoteVideo::m_textureYBytes
	ByteU5BU5D_t4116647657* ___m_textureYBytes_6;
	// System.Byte[] UnityEngine.XR.iOS.UnityRemoteVideo::m_textureUVBytes
	ByteU5BU5D_t4116647657* ___m_textureUVBytes_7;
	// System.Byte[] UnityEngine.XR.iOS.UnityRemoteVideo::m_textureYBytes2
	ByteU5BU5D_t4116647657* ___m_textureYBytes2_8;
	// System.Byte[] UnityEngine.XR.iOS.UnityRemoteVideo::m_textureUVBytes2
	ByteU5BU5D_t4116647657* ___m_textureUVBytes2_9;
	// System.Runtime.InteropServices.GCHandle UnityEngine.XR.iOS.UnityRemoteVideo::m_pinnedYArray
	GCHandle_t3351438187  ___m_pinnedYArray_10;
	// System.Runtime.InteropServices.GCHandle UnityEngine.XR.iOS.UnityRemoteVideo::m_pinnedUVArray
	GCHandle_t3351438187  ___m_pinnedUVArray_11;

public:
	inline static int32_t get_offset_of_connectToEditor_2() { return static_cast<int32_t>(offsetof(UnityRemoteVideo_t705138647, ___connectToEditor_2)); }
	inline ConnectToEditor_t595742893 * get_connectToEditor_2() const { return ___connectToEditor_2; }
	inline ConnectToEditor_t595742893 ** get_address_of_connectToEditor_2() { return &___connectToEditor_2; }
	inline void set_connectToEditor_2(ConnectToEditor_t595742893 * value)
	{
		___connectToEditor_2 = value;
		Il2CppCodeGenWriteBarrier((&___connectToEditor_2), value);
	}

	inline static int32_t get_offset_of_m_Session_3() { return static_cast<int32_t>(offsetof(UnityRemoteVideo_t705138647, ___m_Session_3)); }
	inline UnityARSessionNativeInterface_t3929719369 * get_m_Session_3() const { return ___m_Session_3; }
	inline UnityARSessionNativeInterface_t3929719369 ** get_address_of_m_Session_3() { return &___m_Session_3; }
	inline void set_m_Session_3(UnityARSessionNativeInterface_t3929719369 * value)
	{
		___m_Session_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_Session_3), value);
	}

	inline static int32_t get_offset_of_bTexturesInitialized_4() { return static_cast<int32_t>(offsetof(UnityRemoteVideo_t705138647, ___bTexturesInitialized_4)); }
	inline bool get_bTexturesInitialized_4() const { return ___bTexturesInitialized_4; }
	inline bool* get_address_of_bTexturesInitialized_4() { return &___bTexturesInitialized_4; }
	inline void set_bTexturesInitialized_4(bool value)
	{
		___bTexturesInitialized_4 = value;
	}

	inline static int32_t get_offset_of_currentFrameIndex_5() { return static_cast<int32_t>(offsetof(UnityRemoteVideo_t705138647, ___currentFrameIndex_5)); }
	inline int32_t get_currentFrameIndex_5() const { return ___currentFrameIndex_5; }
	inline int32_t* get_address_of_currentFrameIndex_5() { return &___currentFrameIndex_5; }
	inline void set_currentFrameIndex_5(int32_t value)
	{
		___currentFrameIndex_5 = value;
	}

	inline static int32_t get_offset_of_m_textureYBytes_6() { return static_cast<int32_t>(offsetof(UnityRemoteVideo_t705138647, ___m_textureYBytes_6)); }
	inline ByteU5BU5D_t4116647657* get_m_textureYBytes_6() const { return ___m_textureYBytes_6; }
	inline ByteU5BU5D_t4116647657** get_address_of_m_textureYBytes_6() { return &___m_textureYBytes_6; }
	inline void set_m_textureYBytes_6(ByteU5BU5D_t4116647657* value)
	{
		___m_textureYBytes_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_textureYBytes_6), value);
	}

	inline static int32_t get_offset_of_m_textureUVBytes_7() { return static_cast<int32_t>(offsetof(UnityRemoteVideo_t705138647, ___m_textureUVBytes_7)); }
	inline ByteU5BU5D_t4116647657* get_m_textureUVBytes_7() const { return ___m_textureUVBytes_7; }
	inline ByteU5BU5D_t4116647657** get_address_of_m_textureUVBytes_7() { return &___m_textureUVBytes_7; }
	inline void set_m_textureUVBytes_7(ByteU5BU5D_t4116647657* value)
	{
		___m_textureUVBytes_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_textureUVBytes_7), value);
	}

	inline static int32_t get_offset_of_m_textureYBytes2_8() { return static_cast<int32_t>(offsetof(UnityRemoteVideo_t705138647, ___m_textureYBytes2_8)); }
	inline ByteU5BU5D_t4116647657* get_m_textureYBytes2_8() const { return ___m_textureYBytes2_8; }
	inline ByteU5BU5D_t4116647657** get_address_of_m_textureYBytes2_8() { return &___m_textureYBytes2_8; }
	inline void set_m_textureYBytes2_8(ByteU5BU5D_t4116647657* value)
	{
		___m_textureYBytes2_8 = value;
		Il2CppCodeGenWriteBarrier((&___m_textureYBytes2_8), value);
	}

	inline static int32_t get_offset_of_m_textureUVBytes2_9() { return static_cast<int32_t>(offsetof(UnityRemoteVideo_t705138647, ___m_textureUVBytes2_9)); }
	inline ByteU5BU5D_t4116647657* get_m_textureUVBytes2_9() const { return ___m_textureUVBytes2_9; }
	inline ByteU5BU5D_t4116647657** get_address_of_m_textureUVBytes2_9() { return &___m_textureUVBytes2_9; }
	inline void set_m_textureUVBytes2_9(ByteU5BU5D_t4116647657* value)
	{
		___m_textureUVBytes2_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_textureUVBytes2_9), value);
	}

	inline static int32_t get_offset_of_m_pinnedYArray_10() { return static_cast<int32_t>(offsetof(UnityRemoteVideo_t705138647, ___m_pinnedYArray_10)); }
	inline GCHandle_t3351438187  get_m_pinnedYArray_10() const { return ___m_pinnedYArray_10; }
	inline GCHandle_t3351438187 * get_address_of_m_pinnedYArray_10() { return &___m_pinnedYArray_10; }
	inline void set_m_pinnedYArray_10(GCHandle_t3351438187  value)
	{
		___m_pinnedYArray_10 = value;
	}

	inline static int32_t get_offset_of_m_pinnedUVArray_11() { return static_cast<int32_t>(offsetof(UnityRemoteVideo_t705138647, ___m_pinnedUVArray_11)); }
	inline GCHandle_t3351438187  get_m_pinnedUVArray_11() const { return ___m_pinnedUVArray_11; }
	inline GCHandle_t3351438187 * get_address_of_m_pinnedUVArray_11() { return &___m_pinnedUVArray_11; }
	inline void set_m_pinnedUVArray_11(GCHandle_t3351438187  value)
	{
		___m_pinnedUVArray_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYREMOTEVIDEO_T705138647_H
#ifndef UNITYARGENERATEPLANE_T272564669_H
#define UNITYARGENERATEPLANE_T272564669_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARGeneratePlane
struct  UnityARGeneratePlane_t272564669  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.GameObject UnityEngine.XR.iOS.UnityARGeneratePlane::planePrefab
	GameObject_t1113636619 * ___planePrefab_2;
	// UnityEngine.XR.iOS.UnityARAnchorManager UnityEngine.XR.iOS.UnityARGeneratePlane::unityARAnchorManager
	UnityARAnchorManager_t1557554123 * ___unityARAnchorManager_3;

public:
	inline static int32_t get_offset_of_planePrefab_2() { return static_cast<int32_t>(offsetof(UnityARGeneratePlane_t272564669, ___planePrefab_2)); }
	inline GameObject_t1113636619 * get_planePrefab_2() const { return ___planePrefab_2; }
	inline GameObject_t1113636619 ** get_address_of_planePrefab_2() { return &___planePrefab_2; }
	inline void set_planePrefab_2(GameObject_t1113636619 * value)
	{
		___planePrefab_2 = value;
		Il2CppCodeGenWriteBarrier((&___planePrefab_2), value);
	}

	inline static int32_t get_offset_of_unityARAnchorManager_3() { return static_cast<int32_t>(offsetof(UnityARGeneratePlane_t272564669, ___unityARAnchorManager_3)); }
	inline UnityARAnchorManager_t1557554123 * get_unityARAnchorManager_3() const { return ___unityARAnchorManager_3; }
	inline UnityARAnchorManager_t1557554123 ** get_address_of_unityARAnchorManager_3() { return &___unityARAnchorManager_3; }
	inline void set_unityARAnchorManager_3(UnityARAnchorManager_t1557554123 * value)
	{
		___unityARAnchorManager_3 = value;
		Il2CppCodeGenWriteBarrier((&___unityARAnchorManager_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYARGENERATEPLANE_T272564669_H
#ifndef UNITYARHITTESTEXAMPLE_T457226377_H
#define UNITYARHITTESTEXAMPLE_T457226377_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARHitTestExample
struct  UnityARHitTestExample_t457226377  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Transform UnityEngine.XR.iOS.UnityARHitTestExample::m_HitTransform
	Transform_t3600365921 * ___m_HitTransform_2;

public:
	inline static int32_t get_offset_of_m_HitTransform_2() { return static_cast<int32_t>(offsetof(UnityARHitTestExample_t457226377, ___m_HitTransform_2)); }
	inline Transform_t3600365921 * get_m_HitTransform_2() const { return ___m_HitTransform_2; }
	inline Transform_t3600365921 ** get_address_of_m_HitTransform_2() { return &___m_HitTransform_2; }
	inline void set_m_HitTransform_2(Transform_t3600365921 * value)
	{
		___m_HitTransform_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_HitTransform_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYARHITTESTEXAMPLE_T457226377_H
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1718750761  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector3_t3722313464  m_Items[1];

public:
	inline Vector3_t3722313464  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t3722313464 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t3722313464  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t3722313464  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t3722313464 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t3722313464  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.XR.iOS.ARHitTestResultType[]
struct ARHitTestResultTypeU5BU5D_t2695410291  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int64_t m_Items[1];

public:
	inline int64_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int64_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int64_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int64_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int64_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int64_t value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.XR.iOS.UnityARSessionRunOption[]
struct UnityARSessionRunOptionU5BU5D_t4225291891  : public RuntimeArray
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
// UnityEngine.XR.iOS.UnityARAlignment[]
struct UnityARAlignmentU5BU5D_t3682394155  : public RuntimeArray
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
// UnityEngine.XR.iOS.UnityARPlaneDetection[]
struct UnityARPlaneDetectionU5BU5D_t3458580926  : public RuntimeArray
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
// System.Single[]
struct SingleU5BU5D_t1444911251  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) float m_Items[1];

public:
	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};
// System.Byte[]
struct ByteU5BU5D_t4116647657  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
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
// System.Object[]
struct ObjectU5BU5D_t2843939325  : public RuntimeArray
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
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
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
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};

extern "C" void ARKitWorldTrackingSessionConfiguration_t273386347_marshal_pinvoke(const ARKitWorldTrackingSessionConfiguration_t273386347& unmarshaled, ARKitWorldTrackingSessionConfiguration_t273386347_marshaled_pinvoke& marshaled);
extern "C" void ARKitWorldTrackingSessionConfiguration_t273386347_marshal_pinvoke_back(const ARKitWorldTrackingSessionConfiguration_t273386347_marshaled_pinvoke& marshaled, ARKitWorldTrackingSessionConfiguration_t273386347& unmarshaled);
extern "C" void ARKitWorldTrackingSessionConfiguration_t273386347_marshal_pinvoke_cleanup(ARKitWorldTrackingSessionConfiguration_t273386347_marshaled_pinvoke& marshaled);
extern "C" void ARKitSessionConfiguration_t629136898_marshal_pinvoke(const ARKitSessionConfiguration_t629136898& unmarshaled, ARKitSessionConfiguration_t629136898_marshaled_pinvoke& marshaled);
extern "C" void ARKitSessionConfiguration_t629136898_marshal_pinvoke_back(const ARKitSessionConfiguration_t629136898_marshaled_pinvoke& marshaled, ARKitSessionConfiguration_t629136898& unmarshaled);
extern "C" void ARKitSessionConfiguration_t629136898_marshal_pinvoke_cleanup(ARKitSessionConfiguration_t629136898_marshaled_pinvoke& marshaled);
extern "C" void UnityARHitTestResult_t4176230866_marshal_pinvoke(const UnityARHitTestResult_t4176230866& unmarshaled, UnityARHitTestResult_t4176230866_marshaled_pinvoke& marshaled);
extern "C" void UnityARHitTestResult_t4176230866_marshal_pinvoke_back(const UnityARHitTestResult_t4176230866_marshaled_pinvoke& marshaled, UnityARHitTestResult_t4176230866& unmarshaled);
extern "C" void UnityARHitTestResult_t4176230866_marshal_pinvoke_cleanup(UnityARHitTestResult_t4176230866_marshaled_pinvoke& marshaled);
extern "C" void ARPlaneAnchor_t2049372221_marshal_pinvoke(const ARPlaneAnchor_t2049372221& unmarshaled, ARPlaneAnchor_t2049372221_marshaled_pinvoke& marshaled);
extern "C" void ARPlaneAnchor_t2049372221_marshal_pinvoke_back(const ARPlaneAnchor_t2049372221_marshaled_pinvoke& marshaled, ARPlaneAnchor_t2049372221& unmarshaled);
extern "C" void ARPlaneAnchor_t2049372221_marshal_pinvoke_cleanup(ARPlaneAnchor_t2049372221_marshaled_pinvoke& marshaled);
extern "C" void ARUserAnchor_t1406831531_marshal_pinvoke(const ARUserAnchor_t1406831531& unmarshaled, ARUserAnchor_t1406831531_marshaled_pinvoke& marshaled);
extern "C" void ARUserAnchor_t1406831531_marshal_pinvoke_back(const ARUserAnchor_t1406831531_marshaled_pinvoke& marshaled, ARUserAnchor_t1406831531& unmarshaled);
extern "C" void ARUserAnchor_t1406831531_marshal_pinvoke_cleanup(ARUserAnchor_t1406831531_marshaled_pinvoke& marshaled);

// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C"  RuntimeObject * Component_GetComponent_TisRuntimeObject_m2906321015_gshared (Component_t1923634451 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
extern "C"  void Dictionary_2__ctor_m518943619_gshared (Dictionary_2_t132545152 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
extern "C"  RuntimeObject * GameObject_AddComponent_TisRuntimeObject_m3469369570_gshared (GameObject_t1113636619 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(!0,!1)
extern "C"  void Dictionary_2_Add_m2387223709_gshared (Dictionary_2_t132545152 * __this, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(!0)
extern "C"  bool Dictionary_2_ContainsKey_m2278349286_gshared (Dictionary_2_t132545152 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(!0)
extern "C"  RuntimeObject * Dictionary_2_get_Item_m2714930061_gshared (Dictionary_2_t132545152 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(!0)
extern "C"  bool Dictionary_2_Remove_m1786738978_gshared (Dictionary_2_t132545152 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(!0,!1)
extern "C"  void Dictionary_2_set_Item_m3474379962_gshared (Dictionary_2_t132545152 * __this, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
extern "C"  Enumerator_t2146457487  List_1_GetEnumerator_m2930774921_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
extern "C"  RuntimeObject * Enumerator_get_Current_m470245444_gshared (Enumerator_t2146457487 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
extern "C"  bool Enumerator_MoveNext_m2142368520_gshared (Enumerator_t2146457487 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
extern "C"  void Enumerator_Dispose_m3007748546_gshared (Enumerator_t2146457487 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Clear()
extern "C"  void Dictionary_2_Clear_m1938428402_gshared (Dictionary_2_t132545152 * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/ValueCollection<!0,!1> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Values()
extern "C"  ValueCollection_t1848589470 * Dictionary_2_get_Values_m2492087945_gshared (Dictionary_2_t132545152 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1<!!0> System.Linq.Enumerable::ToList<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
extern "C"  List_1_t257213610 * Enumerable_ToList_TisRuntimeObject_m1319968363_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* p0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
extern "C"  int32_t List_1_get_Count_m2934127733_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.XR.iOS.ARHitTestResult>::get_Count()
extern "C"  int32_t List_1_get_Count_m2045149193_gshared (List_1_t2751098672 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.XR.iOS.ARHitTestResult>::GetEnumerator()
extern "C"  Enumerator_t345375253  List_1_GetEnumerator_m537534021_gshared (List_1_t2751098672 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.iOS.ARHitTestResult>::get_Current()
extern "C"  ARHitTestResult_t1279023930  Enumerator_get_Current_m2684230689_gshared (Enumerator_t345375253 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.iOS.ARHitTestResult>::MoveNext()
extern "C"  bool Enumerator_MoveNext_m3228882039_gshared (Enumerator_t345375253 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.iOS.ARHitTestResult>::Dispose()
extern "C"  void Enumerator_Dispose_m2925904114_gshared (Enumerator_t345375253 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.iOS.ARHitTestResult>::.ctor()
extern "C"  void List_1__ctor_m3908426868_gshared (List_1_t2751098672 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.iOS.ARHitTestResult>::Add(!0)
extern "C"  void List_1_Add_m344229034_gshared (List_1_t2751098672 * __this, ARHitTestResult_t1279023930  p0, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0)
extern "C"  RuntimeObject * Object_Instantiate_TisRuntimeObject_m2446893047_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponentInChildren<System.Object>()
extern "C"  RuntimeObject * GameObject_GetComponentInChildren_TisRuntimeObject_m1513755678_gshared (GameObject_t1113636619 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C"  void List_1__ctor_m2321703786_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
extern "C"  void List_1_Add_m3338814081_gshared (List_1_t257213610 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
extern "C"  RuntimeObject * List_1_get_Item_m2287542950_gshared (List_1_t257213610 * __this, int32_t p0, const RuntimeMethod* method);

// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C"  void MonoBehaviour__ctor_m1579109191 (MonoBehaviour_t3962482529 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Guid::.ctor(System.String)
extern "C"  void Guid__ctor_m2423264394 (Guid_t * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Light>()
#define Component_GetComponent_TisLight_t3756812086_m916313317(__this, method) ((  Light_t3756812086 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method)
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARFrameUpdate::.ctor(System.Object,System.IntPtr)
extern "C"  void ARFrameUpdate__ctor_m3633991724 (ARFrameUpdate_t1157215840 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface::add_ARFrameUpdatedEvent(UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARFrameUpdate)
extern "C"  void UnityARSessionNativeInterface_add_ARFrameUpdatedEvent_m3366057771 (RuntimeObject * __this /* static, unused */, ARFrameUpdate_t1157215840 * ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Light::set_intensity(System.Single)
extern "C"  void Light_set_intensity_m2345549762 (Light_t3756812086 * __this, float p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Light::set_colorTemperature(System.Single)
extern "C"  void Light_set_colorTemperature_m1517762819 (Light_t3756812086 * __this, float p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface::remove_ARFrameUpdatedEvent(UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARFrameUpdate)
extern "C"  void UnityARSessionNativeInterface_remove_ARFrameUpdatedEvent_m772523965 (RuntimeObject * __this /* static, unused */, ARFrameUpdate_t1157215840 * ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.InteropServices.Marshal::PtrToStringAuto(System.IntPtr)
extern "C"  String_t* Marshal_PtrToStringAuto_m3648166035 (RuntimeObject * __this /* static, unused */, intptr_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.XR.iOS.UnityARAnchorData::get_identifierStr()
extern "C"  String_t* UnityARAnchorData_get_identifierStr_m291226870 (UnityARAnchorData_t1157236668 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
extern "C"  Transform_t3600365921 * GameObject_get_transform_m1369836730 (GameObject_t1113636619 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
extern "C"  Vector3_t3722313464  Transform_get_position_m36019626 (Transform_t3600365921 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
extern "C"  Quaternion_t2301928331  Transform_get_rotation_m3502953881 (Transform_t3600365921 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
extern "C"  Vector3_t3722313464  Transform_get_localScale_m129152068 (Transform_t3600365921 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::TRS(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3)
extern "C"  Matrix4x4_t1817901843  Matrix4x4_TRS_m3801934620 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Quaternion_t2301928331  p1, Vector3_t3722313464  p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UnityEngine.Matrix4x4::GetColumn(System.Int32)
extern "C"  Vector4_t3319028937  Matrix4x4_GetColumn_m461504848 (Matrix4x4_t1817901843 * __this, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Object::.ctor()
extern "C"  void Object__ctor_m297566312 (RuntimeObject * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.XR.iOS.ARPlaneAnchorGameObject>::.ctor()
#define Dictionary_2__ctor_m3092748208(__this, method) ((  void (*) (Dictionary_2_t1732976114 *, const RuntimeMethod*))Dictionary_2__ctor_m518943619_gshared)(__this, method)
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARAnchorAdded::.ctor(System.Object,System.IntPtr)
extern "C"  void ARAnchorAdded__ctor_m2575305337 (ARAnchorAdded_t1608557165 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface::add_ARAnchorAddedEvent(UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARAnchorAdded)
extern "C"  void UnityARSessionNativeInterface_add_ARAnchorAddedEvent_m922239177 (RuntimeObject * __this /* static, unused */, ARAnchorAdded_t1608557165 * ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARAnchorUpdated::.ctor(System.Object,System.IntPtr)
extern "C"  void ARAnchorUpdated__ctor_m4197086648 (ARAnchorUpdated_t3113222537 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface::add_ARAnchorUpdatedEvent(UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARAnchorUpdated)
extern "C"  void UnityARSessionNativeInterface_add_ARAnchorUpdatedEvent_m421321882 (RuntimeObject * __this /* static, unused */, ARAnchorUpdated_t3113222537 * ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARAnchorRemoved::.ctor(System.Object,System.IntPtr)
extern "C"  void ARAnchorRemoved__ctor_m498665711 (ARAnchorRemoved_t4030593004 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface::add_ARAnchorRemovedEvent(UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARAnchorRemoved)
extern "C"  void UnityARSessionNativeInterface_add_ARAnchorRemovedEvent_m3581175116 (RuntimeObject * __this /* static, unused */, ARAnchorRemoved_t4030593004 * ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.XR.iOS.UnityARUtility::CreatePlaneInScene(UnityEngine.XR.iOS.ARPlaneAnchor)
extern "C"  GameObject_t1113636619 * UnityARUtility_CreatePlaneInScene_m2158801296 (RuntimeObject * __this /* static, unused */, ARPlaneAnchor_t2049372221  ___arPlaneAnchor0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.GameObject::AddComponent<DontDestroyOnLoad>()
#define GameObject_AddComponent_TisDontDestroyOnLoad_t1456007215_m2687533065(__this, method) ((  DontDestroyOnLoad_t1456007215 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m3469369570_gshared)(__this, method)
// System.Void UnityEngine.XR.iOS.ARPlaneAnchorGameObject::.ctor()
extern "C"  void ARPlaneAnchorGameObject__ctor_m541721435 (ARPlaneAnchorGameObject_t1947719815 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.XR.iOS.ARPlaneAnchorGameObject>::Add(!0,!1)
#define Dictionary_2_Add_m3454172932(__this, p0, p1, method) ((  void (*) (Dictionary_2_t1732976114 *, String_t*, ARPlaneAnchorGameObject_t1947719815 *, const RuntimeMethod*))Dictionary_2_Add_m2387223709_gshared)(__this, p0, p1, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityEngine.XR.iOS.ARPlaneAnchorGameObject>::ContainsKey(!0)
#define Dictionary_2_ContainsKey_m1916439804(__this, p0, method) ((  bool (*) (Dictionary_2_t1732976114 *, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m2278349286_gshared)(__this, p0, method)
// !1 System.Collections.Generic.Dictionary`2<System.String,UnityEngine.XR.iOS.ARPlaneAnchorGameObject>::get_Item(!0)
#define Dictionary_2_get_Item_m1821527627(__this, p0, method) ((  ARPlaneAnchorGameObject_t1947719815 * (*) (Dictionary_2_t1732976114 *, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m2714930061_gshared)(__this, p0, method)
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
extern "C"  void Object_Destroy_m565254235 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityEngine.XR.iOS.ARPlaneAnchorGameObject>::Remove(!0)
#define Dictionary_2_Remove_m2181199409(__this, p0, method) ((  bool (*) (Dictionary_2_t1732976114 *, String_t*, const RuntimeMethod*))Dictionary_2_Remove_m1786738978_gshared)(__this, p0, method)
// UnityEngine.GameObject UnityEngine.XR.iOS.UnityARUtility::UpdatePlaneWithAnchorTransform(UnityEngine.GameObject,UnityEngine.XR.iOS.ARPlaneAnchor)
extern "C"  GameObject_t1113636619 * UnityARUtility_UpdatePlaneWithAnchorTransform_m2954036282 (RuntimeObject * __this /* static, unused */, GameObject_t1113636619 * ___plane0, ARPlaneAnchor_t2049372221  ___arPlaneAnchor1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.XR.iOS.ARPlaneAnchorGameObject>::set_Item(!0,!1)
#define Dictionary_2_set_Item_m3421257586(__this, p0, p1, method) ((  void (*) (Dictionary_2_t1732976114 *, String_t*, ARPlaneAnchorGameObject_t1947719815 *, const RuntimeMethod*))Dictionary_2_set_Item_m3474379962_gshared)(__this, p0, p1, method)
// System.Collections.Generic.List`1<UnityEngine.XR.iOS.ARPlaneAnchorGameObject> UnityEngine.XR.iOS.UnityARAnchorManager::GetCurrentPlaneAnchors()
extern "C"  List_1_t3419794557 * UnityARAnchorManager_GetCurrentPlaneAnchors_m3820916150 (UnityARAnchorManager_t1557554123 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.XR.iOS.ARPlaneAnchorGameObject>::GetEnumerator()
#define List_1_GetEnumerator_m4069702366(__this, method) ((  Enumerator_t1014071138  (*) (List_1_t3419794557 *, const RuntimeMethod*))List_1_GetEnumerator_m2930774921_gshared)(__this, method)
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.iOS.ARPlaneAnchorGameObject>::get_Current()
#define Enumerator_get_Current_m3675360547(__this, method) ((  ARPlaneAnchorGameObject_t1947719815 * (*) (Enumerator_t1014071138 *, const RuntimeMethod*))Enumerator_get_Current_m470245444_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.iOS.ARPlaneAnchorGameObject>::MoveNext()
#define Enumerator_MoveNext_m3312335886(__this, method) ((  bool (*) (Enumerator_t1014071138 *, const RuntimeMethod*))Enumerator_MoveNext_m2142368520_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.iOS.ARPlaneAnchorGameObject>::Dispose()
#define Enumerator_Dispose_m2589232868(__this, method) ((  void (*) (Enumerator_t1014071138 *, const RuntimeMethod*))Enumerator_Dispose_m3007748546_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.XR.iOS.ARPlaneAnchorGameObject>::Clear()
#define Dictionary_2_Clear_m1470804087(__this, method) ((  void (*) (Dictionary_2_t1732976114 *, const RuntimeMethod*))Dictionary_2_Clear_m1938428402_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<!0,!1> System.Collections.Generic.Dictionary`2<System.String,UnityEngine.XR.iOS.ARPlaneAnchorGameObject>::get_Values()
#define Dictionary_2_get_Values_m3625351605(__this, method) ((  ValueCollection_t3449020432 * (*) (Dictionary_2_t1732976114 *, const RuntimeMethod*))Dictionary_2_get_Values_m2492087945_gshared)(__this, method)
// System.Collections.Generic.List`1<!!0> System.Linq.Enumerable::ToList<UnityEngine.XR.iOS.ARPlaneAnchorGameObject>(System.Collections.Generic.IEnumerable`1<!!0>)
#define Enumerable_ToList_TisARPlaneAnchorGameObject_t1947719815_m6396406(__this /* static, unused */, p0, method) ((  List_1_t3419794557 * (*) (RuntimeObject * /* static, unused */, RuntimeObject*, const RuntimeMethod*))Enumerable_ToList_TisRuntimeObject_m1319968363_gshared)(__this /* static, unused */, p0, method)
// System.Void UnityEngine.XR.iOS.UnityARCamera::.ctor(UnityEngine.XR.iOS.UnityARMatrix4x4,UnityEngine.XR.iOS.UnityARMatrix4x4,UnityEngine.XR.iOS.ARTrackingState,UnityEngine.XR.iOS.ARTrackingStateReason,UnityEngine.XR.iOS.UnityVideoParams,UnityEngine.XR.iOS.UnityARLightEstimate,UnityEngine.XR.iOS.UnityARMatrix4x4,UnityEngine.Vector3[])
extern "C"  void UnityARCamera__ctor_m1982929665 (UnityARCamera_t2069150450 * __this, UnityARMatrix4x4_t4073345847  ___wt0, UnityARMatrix4x4_t4073345847  ___pm1, int32_t ___ats2, int32_t ___atsr3, UnityVideoParams_t4155354995  ___uvp4, UnityARLightEstimate_t1498306117  ___lightEst5, UnityARMatrix4x4_t4073345847  ___dt6, Vector3U5BU5D_t1718750761* ___pointCloud7, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.XR.iOS.UnityARAnchorManager::.ctor()
extern "C"  void UnityARAnchorManager__ctor_m649673493 (UnityARAnchorManager_t1557554123 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.XR.iOS.UnityARUtility::InitializePlanePrefab(UnityEngine.GameObject)
extern "C"  void UnityARUtility_InitializePlanePrefab_m2291423040 (RuntimeObject * __this /* static, unused */, GameObject_t1113636619 * ___go0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.XR.iOS.UnityARAnchorManager::Destroy()
extern "C"  void UnityARAnchorManager_Destroy_m3879125245 (UnityARAnchorManager_t1557554123 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.XR.iOS.ARPlaneAnchorGameObject>::get_Count()
#define List_1_get_Count_m1432341886(__this, method) ((  int32_t (*) (List_1_t3419794557 *, const RuntimeMethod*))List_1_get_Count_m2934127733_gshared)(__this, method)
// UnityEngine.XR.iOS.UnityARSessionNativeInterface UnityEngine.XR.iOS.UnityARSessionNativeInterface::GetARSessionNativeInterface()
extern "C"  UnityARSessionNativeInterface_t3929719369 * UnityARSessionNativeInterface_GetARSessionNativeInterface_m1118592565 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityEngine.XR.iOS.ARHitTestResult> UnityEngine.XR.iOS.UnityARSessionNativeInterface::HitTest(UnityEngine.XR.iOS.ARPoint,UnityEngine.XR.iOS.ARHitTestResultType)
extern "C"  List_1_t2751098672 * UnityARSessionNativeInterface_HitTest_m4212263537 (UnityARSessionNativeInterface_t3929719369 * __this, ARPoint_t499615819  ___point0, int64_t ___types1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.XR.iOS.ARHitTestResult>::get_Count()
#define List_1_get_Count_m2045149193(__this, method) ((  int32_t (*) (List_1_t2751098672 *, const RuntimeMethod*))List_1_get_Count_m2045149193_gshared)(__this, method)
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.XR.iOS.ARHitTestResult>::GetEnumerator()
#define List_1_GetEnumerator_m537534021(__this, method) ((  Enumerator_t345375253  (*) (List_1_t2751098672 *, const RuntimeMethod*))List_1_GetEnumerator_m537534021_gshared)(__this, method)
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.iOS.ARHitTestResult>::get_Current()
#define Enumerator_get_Current_m2684230689(__this, method) ((  ARHitTestResult_t1279023930  (*) (Enumerator_t345375253 *, const RuntimeMethod*))Enumerator_get_Current_m2684230689_gshared)(__this, method)
// System.Void UnityEngine.Debug::Log(System.Object)
extern "C"  void Debug_Log_m4051431634 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.XR.iOS.UnityARMatrixOps::GetPosition(UnityEngine.Matrix4x4)
extern "C"  Vector3_t3722313464  UnityARMatrixOps_GetPosition_m296874797 (RuntimeObject * __this /* static, unused */, Matrix4x4_t1817901843  ___matrix0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
extern "C"  void Transform_set_position_m3387557959 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.XR.iOS.UnityARMatrixOps::GetRotation(UnityEngine.Matrix4x4)
extern "C"  Quaternion_t2301928331  UnityARMatrixOps_GetRotation_m1192521266 (RuntimeObject * __this /* static, unused */, Matrix4x4_t1817901843  ___matrix0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
extern "C"  void Transform_set_rotation_m3524318132 (Transform_t3600365921 * __this, Quaternion_t2301928331  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
extern "C"  String_t* String_Format_m3339413201 (RuntimeObject * __this /* static, unused */, String_t* p0, RuntimeObject * p1, RuntimeObject * p2, RuntimeObject * p3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.iOS.ARHitTestResult>::MoveNext()
#define Enumerator_MoveNext_m3228882039(__this, method) ((  bool (*) (Enumerator_t345375253 *, const RuntimeMethod*))Enumerator_MoveNext_m3228882039_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.iOS.ARHitTestResult>::Dispose()
#define Enumerator_Dispose_m2925904114(__this, method) ((  void (*) (Enumerator_t345375253 *, const RuntimeMethod*))Enumerator_Dispose_m2925904114_gshared)(__this, method)
// System.Int32 UnityEngine.Input::get_touchCount()
extern "C"  int32_t Input_get_touchCount_m3403849067 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
extern "C"  bool Object_op_Inequality_m4071470834 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, Object_t631007953 * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Touch UnityEngine.Input::GetTouch(System.Int32)
extern "C"  Touch_t1921856868  Input_GetTouch_m2192712756 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.TouchPhase UnityEngine.Touch::get_phase()
extern "C"  int32_t Touch_get_phase_m214549210 (Touch_t1921856868 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera UnityEngine.Camera::get_main()
extern "C"  Camera_t4157153871 * Camera_get_main_m3643453163 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Touch::get_position()
extern "C"  Vector2_t2156229523  Touch_get_position_m3109777936 (Touch_t1921856868 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
extern "C"  Vector3_t3722313464  Vector2_op_Implicit_m1860157806 (RuntimeObject * __this /* static, unused */, Vector2_t2156229523  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Camera::ScreenToViewportPoint(UnityEngine.Vector3)
extern "C"  Vector3_t3722313464  Camera_ScreenToViewportPoint_m3569032523 (Camera_t4157153871 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
extern "C"  void RuntimeHelpers_InitializeArray_m3117905507 (RuntimeObject * __this /* static, unused */, RuntimeArray * p0, RuntimeFieldHandle_t1871169219  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.XR.iOS.UnityARHitTestExample::HitTestWithResultType(UnityEngine.XR.iOS.ARPoint,UnityEngine.XR.iOS.ARHitTestResultType)
extern "C"  bool UnityARHitTestExample_HitTestWithResultType_m1112373859 (UnityARHitTestExample_t457226377 * __this, ARPoint_t499615819  ___point0, int64_t ___resultTypes1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C"  void Rect__ctor_m2614021312 (Rect_t2360479859 * __this, float p0, float p1, float p2, float p3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::Button(UnityEngine.Rect,System.String)
extern "C"  bool GUI_Button_m1518979886 (RuntimeObject * __this /* static, unused */, Rect_t2360479859  p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface::Pause()
extern "C"  void UnityARSessionNativeInterface_Pause_m777408908 (UnityARSessionNativeInterface_t3929719369 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.XR.iOS.ARKitWorldTrackingSessionConfiguration::.ctor(UnityEngine.XR.iOS.UnityARAlignment,UnityEngine.XR.iOS.UnityARPlaneDetection,System.Boolean,System.Boolean)
extern "C"  void ARKitWorldTrackingSessionConfiguration__ctor_m2019856913 (ARKitWorldTrackingSessionConfiguration_t273386347 * __this, int32_t ___alignment0, int32_t ___planeDetection1, bool ___getPointCloudData2, bool ___enableLightEstimation3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface::RunWithConfigAndOptions(UnityEngine.XR.iOS.ARKitWorldTrackingSessionConfiguration,UnityEngine.XR.iOS.UnityARSessionRunOption)
extern "C"  void UnityARSessionNativeInterface_RunWithConfigAndOptions_m2136170177 (UnityARSessionNativeInterface_t3929719369 * __this, ARKitWorldTrackingSessionConfiguration_t273386347  ___config0, int32_t ___runOptions1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.XR.iOS.ARKitSessionConfiguration::.ctor(UnityEngine.XR.iOS.UnityARAlignment,System.Boolean,System.Boolean)
extern "C"  void ARKitSessionConfiguration__ctor_m1683900731 (ARKitSessionConfiguration_t629136898 * __this, int32_t ___alignment0, bool ___getPointCloudData1, bool ___enableLightEstimation2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface::RunWithConfig(UnityEngine.XR.iOS.ARKitSessionConfiguration)
extern "C"  void UnityARSessionNativeInterface_RunWithConfig_m2219734809 (UnityARSessionNativeInterface_t3929719369 * __this, ARKitSessionConfiguration_t629136898  ___config0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.String,System.String)
extern "C"  String_t* String_Concat_m3937257545 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.XR.iOS.UnityARMatrix4x4::.ctor(UnityEngine.Vector4,UnityEngine.Vector4,UnityEngine.Vector4,UnityEngine.Vector4)
extern "C"  void UnityARMatrix4x4__ctor_m3835909947 (UnityARMatrix4x4_t4073345847 * __this, Vector4_t3319028937  ___c00, Vector4_t3319028937  ___c11, Vector4_t3319028937  ___c22, Vector4_t3319028937  ___c33, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector4::op_Implicit(UnityEngine.Vector4)
extern "C"  Vector3_t3722313464  Vector4_op_Implicit_m1158564884 (RuntimeObject * __this /* static, unused */, Vector4_t3319028937  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.XR.iOS.UnityARMatrixOps::QuaternionFromMatrix(UnityEngine.Matrix4x4)
extern "C"  Quaternion_t2301928331  UnityARMatrixOps_QuaternionFromMatrix_m2540065465 (RuntimeObject * __this /* static, unused */, Matrix4x4_t1817901843  ___m0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Matrix4x4::get_Item(System.Int32,System.Int32)
extern "C"  float Matrix4x4_get_Item_m134152955 (Matrix4x4_t1817901843 * __this, int32_t p0, int32_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
extern "C"  float Mathf_Max_m3146388979 (RuntimeObject * __this /* static, unused */, float p0, float p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::Sign(System.Single)
extern "C"  float Mathf_Sign_m3457838305 (RuntimeObject * __this /* static, unused */, float p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface::_frame_update(UnityEngine.XR.iOS.internal_UnityARCamera)
extern "C"  void UnityARSessionNativeInterface__frame_update_m1185891212 (RuntimeObject * __this /* static, unused */, internal_UnityARCamera_t3920739388  ___camera0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface::_ar_tracking_changed(UnityEngine.XR.iOS.internal_UnityARCamera)
extern "C"  void UnityARSessionNativeInterface__ar_tracking_changed_m2779841264 (RuntimeObject * __this /* static, unused */, internal_UnityARCamera_t3920739388  ___camera0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface::_anchor_added(UnityEngine.XR.iOS.UnityARAnchorData)
extern "C"  void UnityARSessionNativeInterface__anchor_added_m2468825111 (RuntimeObject * __this /* static, unused */, UnityARAnchorData_t1157236668  ___anchor0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface::_anchor_updated(UnityEngine.XR.iOS.UnityARAnchorData)
extern "C"  void UnityARSessionNativeInterface__anchor_updated_m1758166972 (RuntimeObject * __this /* static, unused */, UnityARAnchorData_t1157236668  ___anchor0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface::_anchor_removed(UnityEngine.XR.iOS.UnityARAnchorData)
extern "C"  void UnityARSessionNativeInterface__anchor_removed_m124050222 (RuntimeObject * __this /* static, unused */, UnityARAnchorData_t1157236668  ___anchor0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface::_user_anchor_added(UnityEngine.XR.iOS.UnityARUserAnchorData)
extern "C"  void UnityARSessionNativeInterface__user_anchor_added_m3126812148 (RuntimeObject * __this /* static, unused */, UnityARUserAnchorData_t1976826249  ___anchor0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface::_user_anchor_updated(UnityEngine.XR.iOS.UnityARUserAnchorData)
extern "C"  void UnityARSessionNativeInterface__user_anchor_updated_m2680404376 (RuntimeObject * __this /* static, unused */, UnityARUserAnchorData_t1976826249  ___anchor0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface::_user_anchor_removed(UnityEngine.XR.iOS.UnityARUserAnchorData)
extern "C"  void UnityARSessionNativeInterface__user_anchor_removed_m3345544012 (RuntimeObject * __this /* static, unused */, UnityARUserAnchorData_t1976826249  ___anchor0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface::_ar_session_failed(System.String)
extern "C"  void UnityARSessionNativeInterface__ar_session_failed_m3752069079 (RuntimeObject * __this /* static, unused */, String_t* ___error0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface::_ar_session_interrupted()
extern "C"  void UnityARSessionNativeInterface__ar_session_interrupted_m3485826967 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface::_ar_session_interruption_ended()
extern "C"  void UnityARSessionNativeInterface__ar_session_interruption_ended_m3467125083 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.XR.iOS.UnityARSessionNativeInterface::unity_CreateNativeARSession()
extern "C"  intptr_t UnityARSessionNativeInterface_unity_CreateNativeARSession_m1892455731 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARFrameUpdate::.ctor(System.Object,System.IntPtr)
extern "C"  void internal_ARFrameUpdate__ctor_m2823389890 (internal_ARFrameUpdate_t3254989823 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARSessionFailed::.ctor(System.Object,System.IntPtr)
extern "C"  void ARSessionFailed__ctor_m2525034792 (ARSessionFailed_t2125002991 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARSessionCallback::.ctor(System.Object,System.IntPtr)
extern "C"  void ARSessionCallback__ctor_m1721563304 (ARSessionCallback_t3772093212 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARSessionTrackingChanged::.ctor(System.Object,System.IntPtr)
extern "C"  void internal_ARSessionTrackingChanged__ctor_m3350968246 (internal_ARSessionTrackingChanged_t1988849735 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface::session_SetSessionCallbacks(System.IntPtr,UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARFrameUpdate,UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARSessionFailed,UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARSessionCallback,UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARSessionCallback,UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARSessionTrackingChanged)
extern "C"  void UnityARSessionNativeInterface_session_SetSessionCallbacks_m625576194 (RuntimeObject * __this /* static, unused */, intptr_t ___nativeSession0, internal_ARFrameUpdate_t3254989823 * ___frameCallback1, ARSessionFailed_t2125002991 * ___sessionFailed2, ARSessionCallback_t3772093212 * ___sessionInterrupted3, ARSessionCallback_t3772093212 * ___sessionInterruptionEnded4, internal_ARSessionTrackingChanged_t1988849735 * ___trackingChanged5, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARAnchorAdded::.ctor(System.Object,System.IntPtr)
extern "C"  void internal_ARAnchorAdded__ctor_m274816883 (internal_ARAnchorAdded_t1565083332 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARAnchorUpdated::.ctor(System.Object,System.IntPtr)
extern "C"  void internal_ARAnchorUpdated__ctor_m1065112067 (internal_ARAnchorUpdated_t2645242205 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARAnchorRemoved::.ctor(System.Object,System.IntPtr)
extern "C"  void internal_ARAnchorRemoved__ctor_m3323216282 (internal_ARAnchorRemoved_t3371657877 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface::session_SetPlaneAnchorCallbacks(System.IntPtr,UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARAnchorAdded,UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARAnchorUpdated,UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARAnchorRemoved)
extern "C"  void UnityARSessionNativeInterface_session_SetPlaneAnchorCallbacks_m849333665 (RuntimeObject * __this /* static, unused */, intptr_t ___nativeSession0, internal_ARAnchorAdded_t1565083332 * ___anchorAddedCallback1, internal_ARAnchorUpdated_t2645242205 * ___anchorUpdatedCallback2, internal_ARAnchorRemoved_t3371657877 * ___anchorRemovedCallback3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARUserAnchorAdded::.ctor(System.Object,System.IntPtr)
extern "C"  void internal_ARUserAnchorAdded__ctor_m1954806258 (internal_ARUserAnchorAdded_t3285282493 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARUserAnchorUpdated::.ctor(System.Object,System.IntPtr)
extern "C"  void internal_ARUserAnchorUpdated__ctor_m1485411968 (internal_ARUserAnchorUpdated_t3964727538 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARUserAnchorRemoved::.ctor(System.Object,System.IntPtr)
extern "C"  void internal_ARUserAnchorRemoved__ctor_m3250994366 (internal_ARUserAnchorRemoved_t386858594 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface::session_SetUserAnchorCallbacks(System.IntPtr,UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARUserAnchorAdded,UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARUserAnchorUpdated,UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARUserAnchorRemoved)
extern "C"  void UnityARSessionNativeInterface_session_SetUserAnchorCallbacks_m2655011497 (RuntimeObject * __this /* static, unused */, intptr_t ___nativeSession0, internal_ARUserAnchorAdded_t3285282493 * ___userAnchorAddedCallback1, internal_ARUserAnchorUpdated_t3964727538 * ___userAnchorUpdatedCallback2, internal_ARUserAnchorRemoved_t386858594 * ___userAnchorRemovedCallback3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
extern "C"  Delegate_t1188392813 * Delegate_Combine_m1859655160 (RuntimeObject * __this /* static, unused */, Delegate_t1188392813 * p0, Delegate_t1188392813 * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
extern "C"  Delegate_t1188392813 * Delegate_Remove_m334097152 (RuntimeObject * __this /* static, unused */, Delegate_t1188392813 * p0, Delegate_t1188392813 * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface::.ctor()
extern "C"  void UnityARSessionNativeInterface__ctor_m1227468240 (UnityARSessionNativeInterface_t3929719369 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Matrix4x4::SetColumn(System.Int32,UnityEngine.Vector4)
extern "C"  void Matrix4x4_SetColumn_m2328592759 (Matrix4x4_t1817901843 * __this, int32_t p0, Vector4_t3319028937  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface::SetCameraNearFar(System.Single,System.Single)
extern "C"  void UnityARSessionNativeInterface_SetCameraNearFar_m3141858259 (RuntimeObject * __this /* static, unused */, float ___nearZ0, float ___farZ1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface::CapturePixelData(System.Int32,System.IntPtr,System.IntPtr)
extern "C"  void UnityARSessionNativeInterface_CapturePixelData_m2086582447 (RuntimeObject * __this /* static, unused */, int32_t ___enable0, intptr_t ___pYPixelBytes1, intptr_t ___pUVPixelBytes2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface::UpdatePointCloudData(UnityEngine.XR.iOS.UnityARCamera&)
extern "C"  void UnityARSessionNativeInterface_UpdatePointCloudData_m745059285 (RuntimeObject * __this /* static, unused */, UnityARCamera_t2069150450 * ___camera0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARFrameUpdate::Invoke(UnityEngine.XR.iOS.UnityARCamera)
extern "C"  void ARFrameUpdate_Invoke_m2222676468 (ARFrameUpdate_t1157215840 * __this, UnityARCamera_t2069150450  ___camera0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARSessionTrackingChanged::Invoke(UnityEngine.XR.iOS.UnityARCamera)
extern "C"  void ARSessionTrackingChanged_Invoke_m4139867491 (ARSessionTrackingChanged_t923029411 * __this, UnityARCamera_t2069150450  ___camera0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.XR.iOS.UnityARSessionNativeInterface::GetARPointCloud(System.IntPtr&,System.UInt32&)
extern "C"  bool UnityARSessionNativeInterface_GetARPointCloud_m48288112 (RuntimeObject * __this /* static, unused */, intptr_t* ___verts0, uint32_t* ___vertLength1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.Marshal::Copy(System.IntPtr,System.Single[],System.Int32,System.Int32)
extern "C"  void Marshal_Copy_m2107953215 (RuntimeObject * __this /* static, unused */, intptr_t p0, SingleU5BU5D_t1444911251* p1, int32_t p2, int32_t p3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
extern "C"  void Vector3__ctor_m3353183577 (Vector3_t3722313464 * __this, float p0, float p1, float p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IntPtr::op_Inequality(System.IntPtr,System.IntPtr)
extern "C"  bool IntPtr_op_Inequality_m3063970704 (RuntimeObject * __this /* static, unused */, intptr_t p0, intptr_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.XR.iOS.ARPlaneAnchor UnityEngine.XR.iOS.UnityARSessionNativeInterface::GetPlaneAnchorFromAnchorData(UnityEngine.XR.iOS.UnityARAnchorData)
extern "C"  ARPlaneAnchor_t2049372221  UnityARSessionNativeInterface_GetPlaneAnchorFromAnchorData_m2570782633 (RuntimeObject * __this /* static, unused */, UnityARAnchorData_t1157236668  ___anchor0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARAnchorAdded::Invoke(UnityEngine.XR.iOS.ARPlaneAnchor)
extern "C"  void ARAnchorAdded_Invoke_m3997182965 (ARAnchorAdded_t1608557165 * __this, ARPlaneAnchor_t2049372221  ___anchorData0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARAnchorUpdated::Invoke(UnityEngine.XR.iOS.ARPlaneAnchor)
extern "C"  void ARAnchorUpdated_Invoke_m4060209543 (ARAnchorUpdated_t3113222537 * __this, ARPlaneAnchor_t2049372221  ___anchorData0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARAnchorRemoved::Invoke(UnityEngine.XR.iOS.ARPlaneAnchor)
extern "C"  void ARAnchorRemoved_Invoke_m2507577298 (ARAnchorRemoved_t4030593004 * __this, ARPlaneAnchor_t2049372221  ___anchorData0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.XR.iOS.ARUserAnchor UnityEngine.XR.iOS.UnityARSessionNativeInterface::GetUserAnchorFromAnchorData(UnityEngine.XR.iOS.UnityARUserAnchorData)
extern "C"  ARUserAnchor_t1406831531  UnityARSessionNativeInterface_GetUserAnchorFromAnchorData_m3565353041 (RuntimeObject * __this /* static, unused */, UnityARUserAnchorData_t1976826249  ___anchor0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARUserAnchorAdded::Invoke(UnityEngine.XR.iOS.ARUserAnchor)
extern "C"  void ARUserAnchorAdded_Invoke_m555329492 (ARUserAnchorAdded_t1851120876 * __this, ARUserAnchor_t1406831531  ___anchorData0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARUserAnchorUpdated::Invoke(UnityEngine.XR.iOS.ARUserAnchor)
extern "C"  void ARUserAnchorUpdated_Invoke_m2571719984 (ARUserAnchorUpdated_t4007601678 * __this, ARUserAnchor_t1406831531  ___anchorData0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARUserAnchorRemoved::Invoke(UnityEngine.XR.iOS.ARUserAnchor)
extern "C"  void ARUserAnchorRemoved_Invoke_m460985818 (ARUserAnchorRemoved_t23344545 * __this, ARUserAnchor_t1406831531  ___anchorData0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARSessionFailed::Invoke(System.String)
extern "C"  void ARSessionFailed_Invoke_m4221473546 (ARSessionFailed_t2125002991 * __this, String_t* ___error0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARSessionCallback::Invoke()
extern "C"  void ARSessionCallback_Invoke_m75738571 (ARSessionCallback_t3772093212 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface::StartWorldTrackingSessionWithOptions(System.IntPtr,UnityEngine.XR.iOS.ARKitWorldTrackingSessionConfiguration,UnityEngine.XR.iOS.UnityARSessionRunOption)
extern "C"  void UnityARSessionNativeInterface_StartWorldTrackingSessionWithOptions_m608014144 (RuntimeObject * __this /* static, unused */, intptr_t ___nativeSession0, ARKitWorldTrackingSessionConfiguration_t273386347  ___configuration1, int32_t ___runOptions2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface::StartWorldTrackingSession(System.IntPtr,UnityEngine.XR.iOS.ARKitWorldTrackingSessionConfiguration)
extern "C"  void UnityARSessionNativeInterface_StartWorldTrackingSession_m3386922388 (RuntimeObject * __this /* static, unused */, intptr_t ___nativeSession0, ARKitWorldTrackingSessionConfiguration_t273386347  ___configuration1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface::RunWithConfig(UnityEngine.XR.iOS.ARKitWorldTrackingSessionConfiguration)
extern "C"  void UnityARSessionNativeInterface_RunWithConfig_m2250923232 (UnityARSessionNativeInterface_t3929719369 * __this, ARKitWorldTrackingSessionConfiguration_t273386347  ___config0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface::StartSessionWithOptions(System.IntPtr,UnityEngine.XR.iOS.ARKitSessionConfiguration,UnityEngine.XR.iOS.UnityARSessionRunOption)
extern "C"  void UnityARSessionNativeInterface_StartSessionWithOptions_m2870684486 (RuntimeObject * __this /* static, unused */, intptr_t ___nativeSession0, ARKitSessionConfiguration_t629136898  ___configuration1, int32_t ___runOptions2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface::StartSession(System.IntPtr,UnityEngine.XR.iOS.ARKitSessionConfiguration)
extern "C"  void UnityARSessionNativeInterface_StartSession_m316901060 (RuntimeObject * __this /* static, unused */, intptr_t ___nativeSession0, ARKitSessionConfiguration_t629136898  ___configuration1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface::PauseSession(System.IntPtr)
extern "C"  void UnityARSessionNativeInterface_PauseSession_m1728090040 (RuntimeObject * __this /* static, unused */, intptr_t ___nativeSession0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.XR.iOS.UnityARSessionNativeInterface::HitTest(System.IntPtr,UnityEngine.XR.iOS.ARPoint,UnityEngine.XR.iOS.ARHitTestResultType)
extern "C"  int32_t UnityARSessionNativeInterface_HitTest_m1588561262 (RuntimeObject * __this /* static, unused */, intptr_t ___nativeSession0, ARPoint_t499615819  ___point1, int64_t ___types2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.iOS.ARHitTestResult>::.ctor()
#define List_1__ctor_m3908426868(__this, method) ((  void (*) (List_1_t2751098672 *, const RuntimeMethod*))List_1__ctor_m3908426868_gshared)(__this, method)
// UnityEngine.XR.iOS.UnityARHitTestResult UnityEngine.XR.iOS.UnityARSessionNativeInterface::GetLastHitTestResult(System.Int32)
extern "C"  UnityARHitTestResult_t4176230866  UnityARSessionNativeInterface_GetLastHitTestResult_m1088536205 (RuntimeObject * __this /* static, unused */, int32_t ___index0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.XR.iOS.ARHitTestResult UnityEngine.XR.iOS.UnityARSessionNativeInterface::GetHitTestResultFromResultData(UnityEngine.XR.iOS.UnityARHitTestResult)
extern "C"  ARHitTestResult_t1279023930  UnityARSessionNativeInterface_GetHitTestResultFromResultData_m657555234 (RuntimeObject * __this /* static, unused */, UnityARHitTestResult_t4176230866  ___resultData0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.iOS.ARHitTestResult>::Add(!0)
#define List_1_Add_m344229034(__this, p0, method) ((  void (*) (List_1_t2751098672 *, ARHitTestResult_t1279023930 , const RuntimeMethod*))List_1_Add_m344229034_gshared)(__this, p0, method)
// UnityEngine.XR.iOS.ARTextureHandles UnityEngine.XR.iOS.UnityARSessionNativeInterface::GetVideoTextureHandles()
extern "C"  ARTextureHandles_t852411561  UnityARSessionNativeInterface_GetVideoTextureHandles_m1910050814 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.XR.iOS.UnityARSessionNativeInterface::GetAmbientIntensity()
extern "C"  float UnityARSessionNativeInterface_GetAmbientIntensity_m233148809 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.XR.iOS.UnityARSessionNativeInterface::GetTrackingQuality()
extern "C"  int32_t UnityARSessionNativeInterface_GetTrackingQuality_m4236057654 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.XR.iOS.UnityARUserAnchorData UnityEngine.XR.iOS.UnityARSessionNativeInterface::SessionAddUserAnchor(System.IntPtr,UnityEngine.XR.iOS.UnityARUserAnchorData)
extern "C"  UnityARUserAnchorData_t1976826249  UnityARSessionNativeInterface_SessionAddUserAnchor_m1245253078 (RuntimeObject * __this /* static, unused */, intptr_t ___nativeSession0, UnityARUserAnchorData_t1976826249  ___anchorData1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.XR.iOS.UnityARUserAnchorData UnityEngine.XR.iOS.UnityARUserAnchorData::UnityARUserAnchorDataFromGameObject(UnityEngine.GameObject)
extern "C"  UnityARUserAnchorData_t1976826249  UnityARUserAnchorData_UnityARUserAnchorDataFromGameObject_m1971953404 (RuntimeObject * __this /* static, unused */, GameObject_t1113636619 * ___go0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.XR.iOS.UnityARUserAnchorData UnityEngine.XR.iOS.UnityARSessionNativeInterface::AddUserAnchor(UnityEngine.XR.iOS.UnityARUserAnchorData)
extern "C"  UnityARUserAnchorData_t1976826249  UnityARSessionNativeInterface_AddUserAnchor_m2992758378 (UnityARSessionNativeInterface_t3929719369 * __this, UnityARUserAnchorData_t1976826249  ___anchorData0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface::SessionRemoveUserAnchor(System.IntPtr,System.String)
extern "C"  void UnityARSessionNativeInterface_SessionRemoveUserAnchor_m3291627138 (RuntimeObject * __this /* static, unused */, intptr_t ___nativeSession0, String_t* ___anchorIdentifier1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARAnchorAdded::Invoke(UnityEngine.XR.iOS.UnityARAnchorData)
extern "C"  void internal_ARAnchorAdded_Invoke_m3392910336 (internal_ARAnchorAdded_t1565083332 * __this, UnityARAnchorData_t1157236668  ___anchorData0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARAnchorRemoved::Invoke(UnityEngine.XR.iOS.UnityARAnchorData)
extern "C"  void internal_ARAnchorRemoved_Invoke_m1866298684 (internal_ARAnchorRemoved_t3371657877 * __this, UnityARAnchorData_t1157236668  ___anchorData0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARAnchorUpdated::Invoke(UnityEngine.XR.iOS.UnityARAnchorData)
extern "C"  void internal_ARAnchorUpdated_Invoke_m351385753 (internal_ARAnchorUpdated_t2645242205 * __this, UnityARAnchorData_t1157236668  ___anchorData0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARFrameUpdate::Invoke(UnityEngine.XR.iOS.internal_UnityARCamera)
extern "C"  void internal_ARFrameUpdate_Invoke_m4026855931 (internal_ARFrameUpdate_t3254989823 * __this, internal_UnityARCamera_t3920739388  ___camera0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARSessionTrackingChanged::Invoke(UnityEngine.XR.iOS.internal_UnityARCamera)
extern "C"  void internal_ARSessionTrackingChanged_Invoke_m2960819036 (internal_ARSessionTrackingChanged_t1988849735 * __this, internal_UnityARCamera_t3920739388  ___camera0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARUserAnchorAdded::Invoke(UnityEngine.XR.iOS.UnityARUserAnchorData)
extern "C"  void internal_ARUserAnchorAdded_Invoke_m3060859101 (internal_ARUserAnchorAdded_t3285282493 * __this, UnityARUserAnchorData_t1976826249  ___anchorData0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARUserAnchorRemoved::Invoke(UnityEngine.XR.iOS.UnityARUserAnchorData)
extern "C"  void internal_ARUserAnchorRemoved_Invoke_m1810838433 (internal_ARUserAnchorRemoved_t386858594 * __this, UnityARUserAnchorData_t1976826249  ___anchorData0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARUserAnchorUpdated::Invoke(UnityEngine.XR.iOS.UnityARUserAnchorData)
extern "C"  void internal_ARUserAnchorUpdated_Invoke_m1125450612 (internal_ARUserAnchorUpdated_t3964727538 * __this, UnityARUserAnchorData_t1976826249  ___anchorData0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARUserAnchorUpdated::.ctor(System.Object,System.IntPtr)
extern "C"  void ARUserAnchorUpdated__ctor_m4059084489 (ARUserAnchorUpdated_t4007601678 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface::add_ARUserAnchorUpdatedEvent(UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARUserAnchorUpdated)
extern "C"  void UnityARSessionNativeInterface_add_ARUserAnchorUpdatedEvent_m3620938119 (RuntimeObject * __this /* static, unused */, ARUserAnchorUpdated_t4007601678 * ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARUserAnchorRemoved::.ctor(System.Object,System.IntPtr)
extern "C"  void ARUserAnchorRemoved__ctor_m586540762 (ARUserAnchorRemoved_t23344545 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface::add_ARUserAnchorRemovedEvent(UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARUserAnchorRemoved)
extern "C"  void UnityARSessionNativeInterface_add_ARUserAnchorRemovedEvent_m3520224501 (RuntimeObject * __this /* static, unused */, ARUserAnchorRemoved_t23344545 * ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
extern "C"  GameObject_t1113636619 * Component_get_gameObject_m442555142 (Component_t1923634451 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.XR.iOS.UnityARUserAnchorData UnityEngine.XR.iOS.UnityARSessionNativeInterface::AddUserAnchorFromGameObject(UnityEngine.GameObject)
extern "C"  UnityARUserAnchorData_t1976826249  UnityARSessionNativeInterface_AddUserAnchorFromGameObject_m3087613556 (UnityARSessionNativeInterface_t3929719369 * __this, GameObject_t1113636619 * ___go0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.XR.iOS.UnityARUserAnchorData::get_identifierStr()
extern "C"  String_t* UnityARUserAnchorData_get_identifierStr_m122781054 (UnityARUserAnchorData_t1976826249 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::Equals(System.String)
extern "C"  bool String_Equals_m2270643605 (String_t* __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface::remove_ARUserAnchorUpdatedEvent(UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARUserAnchorUpdated)
extern "C"  void UnityARSessionNativeInterface_remove_ARUserAnchorUpdatedEvent_m2181757746 (RuntimeObject * __this /* static, unused */, ARUserAnchorUpdated_t4007601678 * ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface::remove_ARUserAnchorRemovedEvent(UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARUserAnchorRemoved)
extern "C"  void UnityARSessionNativeInterface_remove_ARUserAnchorRemovedEvent_m2042627006 (RuntimeObject * __this /* static, unused */, ARUserAnchorRemoved_t23344545 * ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface::RemoveUserAnchor(System.String)
extern "C"  void UnityARSessionNativeInterface_RemoveUserAnchor_m1246452311 (UnityARSessionNativeInterface_t3929719369 * __this, String_t* ___anchorIdentifier0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0)
#define Object_Instantiate_TisGameObject_t1113636619_m4070250708(__this /* static, unused */, p0, method) ((  GameObject_t1113636619 * (*) (RuntimeObject * /* static, unused */, GameObject_t1113636619 *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m2446893047_gshared)(__this /* static, unused */, p0, method)
// System.Void UnityEngine.GameObject::.ctor()
extern "C"  void GameObject__ctor_m3707688467 (GameObject_t1113636619 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::set_name(System.String)
extern "C"  void Object_set_name_m291480324 (Object_t631007953 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.GameObject::GetComponentInChildren<UnityEngine.MeshFilter>()
#define GameObject_GetComponentInChildren_TisMeshFilter_t3523625662_m478508368(__this, method) ((  MeshFilter_t3523625662 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponentInChildren_TisRuntimeObject_m1513755678_gshared)(__this, method)
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
extern "C"  void Transform_set_localScale_m3053443106 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
extern "C"  void Transform_set_localPosition_m4128471975 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rendering.CommandBuffer::.ctor()
extern "C"  void CommandBuffer__ctor_m3028411456 (CommandBuffer_t2206337031 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rendering.RenderTargetIdentifier UnityEngine.Rendering.RenderTargetIdentifier::op_Implicit(UnityEngine.Rendering.BuiltinRenderTextureType)
extern "C"  RenderTargetIdentifier_t2079184500  RenderTargetIdentifier_op_Implicit_m2644497587 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rendering.CommandBuffer::Blit(UnityEngine.Texture,UnityEngine.Rendering.RenderTargetIdentifier,UnityEngine.Material)
extern "C"  void CommandBuffer_Blit_m1578015716 (CommandBuffer_t2206337031 * __this, Texture_t3661962703 * p0, RenderTargetIdentifier_t2079184500  p1, Material_t340375123 * p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Camera>()
#define Component_GetComponent_TisCamera_t4157153871_m1557787507(__this, method) ((  Camera_t4157153871 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method)
// System.Void UnityEngine.Camera::AddCommandBuffer(UnityEngine.Rendering.CameraEvent,UnityEngine.Rendering.CommandBuffer)
extern "C"  void Camera_AddCommandBuffer_m1363239337 (Camera_t4157153871 * __this, int32_t p0, CommandBuffer_t2206337031 * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::RemoveCommandBuffer(UnityEngine.Rendering.CameraEvent,UnityEngine.Rendering.CommandBuffer)
extern "C"  void Camera_RemoveCommandBuffer_m773243127 (Camera_t4157153871 * __this, int32_t p0, CommandBuffer_t2206337031 * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.XR.iOS.ARTextureHandles UnityEngine.XR.iOS.UnityARSessionNativeInterface::GetARVideoTextureHandles()
extern "C"  ARTextureHandles_t852411561  UnityARSessionNativeInterface_GetARVideoTextureHandles_m1964002027 (UnityARSessionNativeInterface_t3929719369 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IntPtr::op_Equality(System.IntPtr,System.IntPtr)
extern "C"  bool IntPtr_op_Equality_m408849716 (RuntimeObject * __this /* static, unused */, intptr_t p0, intptr_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.XR.iOS.UnityARVideo::InitializeCommandBuffer()
extern "C"  void UnityARVideo_InitializeCommandBuffer_m1538546596 (UnityARVideo_t1146951207 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Resolution UnityEngine.Screen::get_currentResolution()
extern "C"  Resolution_t2487619763  Screen_get_currentResolution_m1680624610 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
extern "C"  bool Object_op_Equality_m1810815630 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, Object_t631007953 * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Resolution::get_width()
extern "C"  int32_t Resolution_get_width_m400677188 (Resolution_t2487619763 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Resolution::get_height()
extern "C"  int32_t Resolution_get_height_m933996501 (Resolution_t2487619763 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D UnityEngine.Texture2D::CreateExternalTexture(System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean,System.Boolean,System.IntPtr)
extern "C"  Texture2D_t3840446185 * Texture2D_CreateExternalTexture_m2529687473 (RuntimeObject * __this /* static, unused */, int32_t p0, int32_t p1, int32_t p2, bool p3, bool p4, intptr_t p5, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture::set_filterMode(UnityEngine.FilterMode)
extern "C"  void Texture_set_filterMode_m3078068058 (Texture_t3661962703 * __this, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture::set_wrapMode(UnityEngine.TextureWrapMode)
extern "C"  void Texture_set_wrapMode_m587872754 (Texture_t3661962703 * __this, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetTexture(System.String,UnityEngine.Texture)
extern "C"  void Material_SetTexture_m1829349465 (Material_t340375123 * __this, String_t* p0, Texture_t3661962703 * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture2D::UpdateExternalTexture(System.IntPtr)
extern "C"  void Texture2D_UpdateExternalTexture_m2829146467 (Texture2D_t3840446185 * __this, intptr_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetMatrix(System.String,UnityEngine.Matrix4x4)
extern "C"  void Material_SetMatrix_m4094650785 (Material_t340375123 * __this, String_t* p0, Matrix4x4_t1817901843  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.XR.iOS.UnityRemoteVideo::InitializeTextures(UnityEngine.XR.iOS.UnityARCamera)
extern "C"  void UnityRemoteVideo_InitializeTextures_m1227954273 (UnityRemoteVideo_t705138647 * __this, UnityARCamera_t2069150450  ___camera0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Runtime.InteropServices.GCHandle System.Runtime.InteropServices.GCHandle::Alloc(System.Object)
extern "C"  GCHandle_t3351438187  GCHandle_Alloc_m3053200191 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.GCHandle::Free()
extern "C"  void GCHandle_Free_m1457699368 (GCHandle_t3351438187 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Runtime.InteropServices.GCHandle System.Runtime.InteropServices.GCHandle::Alloc(System.Object,System.Runtime.InteropServices.GCHandleType)
extern "C"  GCHandle_t3351438187  GCHandle_Alloc_m3823409740 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, int32_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.Runtime.InteropServices.GCHandle::AddrOfPinnedObject()
extern "C"  intptr_t GCHandle_AddrOfPinnedObject_m3427142301 (GCHandle_t3351438187 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Byte[] UnityEngine.XR.iOS.UnityRemoteVideo::ByteArrayForFrame(System.Int32,System.Byte[],System.Byte[])
extern "C"  ByteU5BU5D_t4116647657* UnityRemoteVideo_ByteArrayForFrame_m1687071501 (UnityRemoteVideo_t705138647 * __this, int32_t ___frame0, ByteU5BU5D_t4116647657* ___array01, ByteU5BU5D_t4116647657* ___array12, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface::SetCapturePixelData(System.Boolean,System.IntPtr,System.IntPtr)
extern "C"  void UnityARSessionNativeInterface_SetCapturePixelData_m3385125279 (UnityARSessionNativeInterface_t3929719369 * __this, bool ___enable0, intptr_t ___pYByteArray1, intptr_t ___pUVByteArray2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Byte[] UnityEngine.XR.iOS.UnityRemoteVideo::YByteArrayForFrame(System.Int32)
extern "C"  ByteU5BU5D_t4116647657* UnityRemoteVideo_YByteArrayForFrame_m3411529770 (UnityRemoteVideo_t705138647 * __this, int32_t ___frame0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.XR.iOS.UnityRemoteVideo::PinByteArray(System.Runtime.InteropServices.GCHandle&,System.Byte[])
extern "C"  intptr_t UnityRemoteVideo_PinByteArray_m562672237 (UnityRemoteVideo_t705138647 * __this, GCHandle_t3351438187 * ___handle0, ByteU5BU5D_t4116647657* ___array1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Byte[] UnityEngine.XR.iOS.UnityRemoteVideo::UVByteArrayForFrame(System.Int32)
extern "C"  ByteU5BU5D_t4116647657* UnityRemoteVideo_UVByteArrayForFrame_m4228667374 (UnityRemoteVideo_t705138647 * __this, int32_t ___frame0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Guid UnityEngine.XR.iOS.ConnectionMessageIds::get_screenCaptureYMsgId()
extern "C"  Guid_t  ConnectionMessageIds_get_screenCaptureYMsgId_m3024188835 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.XR.iOS.ConnectToEditor::SendToEditor(System.Guid,System.Byte[])
extern "C"  void ConnectToEditor_SendToEditor_m2358646039 (ConnectToEditor_t595742893 * __this, Guid_t  ___msgId0, ByteU5BU5D_t4116647657* ___data1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Guid UnityEngine.XR.iOS.ConnectionMessageIds::get_screenCaptureUVMsgId()
extern "C"  Guid_t  ConnectionMessageIds_get_screenCaptureUVMsgId_m596317401 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::.ctor()
#define List_1__ctor_m1424466557(__this, method) ((  void (*) (List_1_t2585711361 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Add(!0)
#define List_1_Add_m2765963565(__this, p0, method) ((  void (*) (List_1_t2585711361 *, GameObject_t1113636619 *, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method)
// UnityEngine.Vector4 UnityEngine.Vector4::op_Implicit(UnityEngine.Vector3)
extern "C"  Vector4_t3319028937  Vector4_op_Implicit_m2966035112 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !0 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Item(System.Int32)
#define List_1_get_Item_m3743125852(__this, p0, method) ((  GameObject_t1113636619 * (*) (List_1_t2585711361 *, int32_t, const RuntimeMethod*))List_1_get_Item_m2287542950_gshared)(__this, p0, method)
// System.Int64 System.Math::Min(System.Int64,System.Int64)
extern "C"  int64_t Math_Min_m2427345610 (RuntimeObject * __this /* static, unused */, int64_t p0, int64_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::.ctor()
extern "C"  void BinaryFormatter__ctor_m971003555 (BinaryFormatter_t3197753202 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.MemoryStream::.ctor()
extern "C"  void MemoryStream__ctor_m2678285228 (MemoryStream_t94973147 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::Serialize(System.IO.Stream,System.Object)
extern "C"  void BinaryFormatter_Serialize_m1744386044 (BinaryFormatter_t3197753202 * __this, Stream_t1273022909 * p0, RuntimeObject * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Utils.serializableARSessionConfiguration::.ctor(UnityEngine.XR.iOS.UnityARAlignment,UnityEngine.XR.iOS.UnityARPlaneDetection,System.Boolean,System.Boolean)
extern "C"  void serializableARSessionConfiguration__ctor_m1685433052 (serializableARSessionConfiguration_t1467016906 * __this, int32_t ___align0, int32_t ___planeDet1, bool ___getPtCloud2, bool ___enableLightEst3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.BitConverter::GetBytes(System.Single)
extern "C"  ByteU5BU5D_t4116647657* BitConverter_GetBytes_m692533364 (RuntimeObject * __this /* static, unused */, float p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Buffer::BlockCopy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
extern "C"  void Buffer_BlockCopy_m2884209081 (RuntimeObject * __this /* static, unused */, RuntimeArray * p0, int32_t p1, RuntimeArray * p2, int32_t p3, int32_t p4, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Utils.serializablePointCloud::.ctor(System.Byte[])
extern "C"  void serializablePointCloud__ctor_m3190919572 (serializablePointCloud_t455238287 * __this, ByteU5BU5D_t4116647657* ___inputPoints0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single System.BitConverter::ToSingle(System.Byte[],System.Int32)
extern "C"  float BitConverter_ToSingle_m2597008633 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* p0, int32_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Utils.serializableUnityARMatrix4x4 Utils.serializableUnityARMatrix4x4::op_Implicit(UnityEngine.XR.iOS.UnityARMatrix4x4)
extern "C"  serializableUnityARMatrix4x4_t78255337 * serializableUnityARMatrix4x4_op_Implicit_m3630501456 (RuntimeObject * __this /* static, unused */, UnityARMatrix4x4_t4073345847  ___rValue0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Utils.serializablePointCloud Utils.serializablePointCloud::op_Implicit(UnityEngine.Vector3[])
extern "C"  serializablePointCloud_t455238287 * serializablePointCloud_op_Implicit_m463505948 (RuntimeObject * __this /* static, unused */, Vector3U5BU5D_t1718750761* ___vecPointCloud0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Utils.serializableUnityARCamera::.ctor(Utils.serializableUnityARMatrix4x4,Utils.serializableUnityARMatrix4x4,UnityEngine.XR.iOS.ARTrackingState,UnityEngine.XR.iOS.ARTrackingStateReason,UnityEngine.XR.iOS.UnityVideoParams,UnityEngine.XR.iOS.UnityARLightEstimate,Utils.serializableUnityARMatrix4x4,Utils.serializablePointCloud)
extern "C"  void serializableUnityARCamera__ctor_m591095561 (serializableUnityARCamera_t4158151215 * __this, serializableUnityARMatrix4x4_t78255337 * ___wt0, serializableUnityARMatrix4x4_t78255337 * ___pm1, int32_t ___ats2, int32_t ___atsr3, UnityVideoParams_t4155354995  ___uvp4, UnityARLightEstimate_t1498306117  ___lightEst5, serializableUnityARMatrix4x4_t78255337 * ___dt6, serializablePointCloud_t455238287 * ___spc7, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.XR.iOS.UnityARMatrix4x4 Utils.serializableUnityARMatrix4x4::op_Implicit(Utils.serializableUnityARMatrix4x4)
extern "C"  UnityARMatrix4x4_t4073345847  serializableUnityARMatrix4x4_op_Implicit_m2311882771 (RuntimeObject * __this /* static, unused */, serializableUnityARMatrix4x4_t78255337 * ___rValue0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3[] Utils.serializablePointCloud::op_Implicit(Utils.serializablePointCloud)
extern "C"  Vector3U5BU5D_t1718750761* serializablePointCloud_op_Implicit_m1866692932 (RuntimeObject * __this /* static, unused */, serializablePointCloud_t455238287 * ___spc0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Utils.SerializableVector4 Utils.SerializableVector4::op_Implicit(UnityEngine.Vector4)
extern "C"  SerializableVector4_t1862640084 * SerializableVector4_op_Implicit_m14360340 (RuntimeObject * __this /* static, unused */, Vector4_t3319028937  ___rValue0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Utils.serializableUnityARMatrix4x4::.ctor(Utils.SerializableVector4,Utils.SerializableVector4,Utils.SerializableVector4,Utils.SerializableVector4)
extern "C"  void serializableUnityARMatrix4x4__ctor_m3496280910 (serializableUnityARMatrix4x4_t78255337 * __this, SerializableVector4_t1862640084 * ___v00, SerializableVector4_t1862640084 * ___v11, SerializableVector4_t1862640084 * ___v22, SerializableVector4_t1862640084 * ___v33, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 Utils.SerializableVector4::op_Implicit(Utils.SerializableVector4)
extern "C"  Vector4_t3319028937  SerializableVector4_op_Implicit_m3519692110 (RuntimeObject * __this /* static, unused */, SerializableVector4_t1862640084 * ___rValue0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Matrix4x4::.ctor(UnityEngine.Vector4,UnityEngine.Vector4,UnityEngine.Vector4,UnityEngine.Vector4)
extern "C"  void Matrix4x4__ctor_m53065545 (Matrix4x4_t1817901843 * __this, Vector4_t3319028937  p0, Vector4_t3319028937  p1, Vector4_t3319028937  p2, Vector4_t3319028937  p3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Utils.serializableUnityARMatrix4x4 Utils.serializableUnityARMatrix4x4::op_Implicit(UnityEngine.Matrix4x4)
extern "C"  serializableUnityARMatrix4x4_t78255337 * serializableUnityARMatrix4x4_op_Implicit_m3556108972 (RuntimeObject * __this /* static, unused */, Matrix4x4_t1817901843  ___rValue0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Utils.SerializableVector4::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C"  void SerializableVector4__ctor_m3231681896 (SerializableVector4_t1862640084 * __this, float ___rX0, float ___rY1, float ___rZ2, float ___rW3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Text.Encoding::get_UTF8()
extern "C"  Encoding_t1523322056 * Encoding_get_UTF8_m1008486739 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Utils.serializableUnityARPlaneAnchor::.ctor(Utils.serializableUnityARMatrix4x4,Utils.SerializableVector4,Utils.SerializableVector4,UnityEngine.XR.iOS.ARPlaneAnchorAlignment,System.Byte[])
extern "C"  void serializableUnityARPlaneAnchor__ctor_m182203902 (serializableUnityARPlaneAnchor_t1446774435 * __this, serializableUnityARMatrix4x4_t78255337 * ___wt0, SerializableVector4_t1862640084 * ___ctr1, SerializableVector4_t1862640084 * ___ext2, int64_t ___apaa3, ByteU5BU5D_t4116647657* ___idstr4, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 Utils.serializableUnityARMatrix4x4::op_Implicit(Utils.serializableUnityARMatrix4x4)
extern "C"  Matrix4x4_t1817901843  serializableUnityARMatrix4x4_op_Implicit_m456506418 (RuntimeObject * __this /* static, unused */, serializableUnityARMatrix4x4_t78255337 * ___rValue0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Format(System.String,System.Object[])
extern "C"  String_t* String_Format_m630303134 (RuntimeObject * __this /* static, unused */, String_t* p0, ObjectU5BU5D_t2843939325* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Vector4::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C"  void Vector4__ctor_m2498754347 (Vector4_t3319028937 * __this, float p0, float p1, float p2, float p3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.iOS.EditorHitTest::.ctor()
extern "C"  void EditorHitTest__ctor_m2080560474 (EditorHitTest_t1253817588 * __this, const RuntimeMethod* method)
{
	{
		__this->set_maxRayDistance_3((30.0f));
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
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
// System.Guid UnityEngine.XR.iOS.SubMessageIds::get_editorInitARKit()
extern "C"  Guid_t  SubMessageIds_get_editorInitARKit_m3913335846 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SubMessageIds_get_editorInitARKit_m3913335846_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Guid_t  L_0;
		memset(&L_0, 0, sizeof(L_0));
		Guid__ctor_m2423264394((&L_0), _stringLiteral837077870, /*hidden argument*/NULL);
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
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.iOS.UnityARAmbient::.ctor()
extern "C"  void UnityARAmbient__ctor_m439537330 (UnityARAmbient_t2710679068 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.iOS.UnityARAmbient::Start()
extern "C"  void UnityARAmbient_Start_m4109030088 (UnityARAmbient_t2710679068 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityARAmbient_Start_m4109030088_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Light_t3756812086 * L_0 = Component_GetComponent_TisLight_t3756812086_m916313317(__this, /*hidden argument*/Component_GetComponent_TisLight_t3756812086_m916313317_RuntimeMethod_var);
		__this->set_l_2(L_0);
		intptr_t L_1 = (intptr_t)UnityARAmbient_UpdateLightEstimation_m2713847691_RuntimeMethod_var;
		ARFrameUpdate_t1157215840 * L_2 = (ARFrameUpdate_t1157215840 *)il2cpp_codegen_object_new(ARFrameUpdate_t1157215840_il2cpp_TypeInfo_var);
		ARFrameUpdate__ctor_m3633991724(L_2, __this, L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var);
		UnityARSessionNativeInterface_add_ARFrameUpdatedEvent_m3366057771(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.iOS.UnityARAmbient::UpdateLightEstimation(UnityEngine.XR.iOS.UnityARCamera)
extern "C"  void UnityARAmbient_UpdateLightEstimation_m2713847691 (UnityARAmbient_t2710679068 * __this, UnityARCamera_t2069150450  ___camera0, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		UnityARLightEstimate_t1498306117 * L_0 = (&___camera0)->get_address_of_lightEstimation_5();
		float L_1 = L_0->get_ambientIntensity_0();
		V_0 = L_1;
		Light_t3756812086 * L_2 = __this->get_l_2();
		float L_3 = V_0;
		NullCheck(L_2);
		Light_set_intensity_m2345549762(L_2, ((float)((float)L_3/(float)(1000.0f))), /*hidden argument*/NULL);
		Light_t3756812086 * L_4 = __this->get_l_2();
		UnityARLightEstimate_t1498306117 * L_5 = (&___camera0)->get_address_of_lightEstimation_5();
		float L_6 = L_5->get_ambientColorTemperature_1();
		NullCheck(L_4);
		Light_set_colorTemperature_m1517762819(L_4, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.iOS.UnityARAmbient::OnDestroy()
extern "C"  void UnityARAmbient_OnDestroy_m3572932530 (UnityARAmbient_t2710679068 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityARAmbient_OnDestroy_m3572932530_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = (intptr_t)UnityARAmbient_UpdateLightEstimation_m2713847691_RuntimeMethod_var;
		ARFrameUpdate_t1157215840 * L_1 = (ARFrameUpdate_t1157215840 *)il2cpp_codegen_object_new(ARFrameUpdate_t1157215840_il2cpp_TypeInfo_var);
		ARFrameUpdate__ctor_m3633991724(L_1, __this, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var);
		UnityARSessionNativeInterface_remove_ARFrameUpdatedEvent_m772523965(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
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
// System.String UnityEngine.XR.iOS.UnityARAnchorData::get_identifierStr()
extern "C"  String_t* UnityARAnchorData_get_identifierStr_m291226870 (UnityARAnchorData_t1157236668 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityARAnchorData_get_identifierStr_m291226870_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = __this->get_ptrIdentifier_0();
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_t1757017490_il2cpp_TypeInfo_var);
		String_t* L_1 = Marshal_PtrToStringAuto_m3648166035(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
extern "C"  String_t* UnityARAnchorData_get_identifierStr_m291226870_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	UnityARAnchorData_t1157236668 * _thisAdjusted = reinterpret_cast<UnityARAnchorData_t1157236668 *>(__this + 1);
	return UnityARAnchorData_get_identifierStr_m291226870(_thisAdjusted, method);
}
// UnityEngine.XR.iOS.UnityARAnchorData UnityEngine.XR.iOS.UnityARAnchorData::UnityARAnchorDataFromGameObject(UnityEngine.GameObject)
extern "C"  UnityARAnchorData_t1157236668  UnityARAnchorData_UnityARAnchorDataFromGameObject_m3823544594 (RuntimeObject * __this /* static, unused */, GameObject_t1113636619 * ___go0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityARAnchorData_UnityARAnchorDataFromGameObject_m3823544594_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Matrix4x4_t1817901843  V_0;
	memset(&V_0, 0, sizeof(V_0));
	UnityARAnchorData_t1157236668  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		GameObject_t1113636619 * L_0 = ___go0;
		NullCheck(L_0);
		Transform_t3600365921 * L_1 = GameObject_get_transform_m1369836730(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t3722313464  L_2 = Transform_get_position_m36019626(L_1, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_3 = ___go0;
		NullCheck(L_3);
		Transform_t3600365921 * L_4 = GameObject_get_transform_m1369836730(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		Quaternion_t2301928331  L_5 = Transform_get_rotation_m3502953881(L_4, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_6 = ___go0;
		NullCheck(L_6);
		Transform_t3600365921 * L_7 = GameObject_get_transform_m1369836730(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		Vector3_t3722313464  L_8 = Transform_get_localScale_m129152068(L_7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Matrix4x4_t1817901843_il2cpp_TypeInfo_var);
		Matrix4x4_t1817901843  L_9 = Matrix4x4_TRS_m3801934620(NULL /*static, unused*/, L_2, L_5, L_8, /*hidden argument*/NULL);
		V_0 = L_9;
		il2cpp_codegen_initobj((&V_1), sizeof(UnityARAnchorData_t1157236668 ));
		UnityARMatrix4x4_t4073345847 * L_10 = (&V_1)->get_address_of_transform_1();
		Vector4_t3319028937  L_11 = Matrix4x4_GetColumn_m461504848((&V_0), 0, /*hidden argument*/NULL);
		L_10->set_column0_0(L_11);
		UnityARMatrix4x4_t4073345847 * L_12 = (&V_1)->get_address_of_transform_1();
		Vector4_t3319028937  L_13 = Matrix4x4_GetColumn_m461504848((&V_0), 1, /*hidden argument*/NULL);
		L_12->set_column1_1(L_13);
		UnityARMatrix4x4_t4073345847 * L_14 = (&V_1)->get_address_of_transform_1();
		Vector4_t3319028937  L_15 = Matrix4x4_GetColumn_m461504848((&V_0), 2, /*hidden argument*/NULL);
		L_14->set_column2_2(L_15);
		UnityARMatrix4x4_t4073345847 * L_16 = (&V_1)->get_address_of_transform_1();
		Vector4_t3319028937  L_17 = Matrix4x4_GetColumn_m461504848((&V_0), 3, /*hidden argument*/NULL);
		L_16->set_column3_3(L_17);
		UnityARAnchorData_t1157236668  L_18 = V_1;
		return L_18;
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
// System.Void UnityEngine.XR.iOS.UnityARAnchorManager::.ctor()
extern "C"  void UnityARAnchorManager__ctor_m649673493 (UnityARAnchorManager_t1557554123 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityARAnchorManager__ctor_m649673493_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		Dictionary_2_t1732976114 * L_0 = (Dictionary_2_t1732976114 *)il2cpp_codegen_object_new(Dictionary_2_t1732976114_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3092748208(L_0, /*hidden argument*/Dictionary_2__ctor_m3092748208_RuntimeMethod_var);
		__this->set_planeAnchorMap_0(L_0);
		intptr_t L_1 = (intptr_t)UnityARAnchorManager_AddAnchor_m66833497_RuntimeMethod_var;
		ARAnchorAdded_t1608557165 * L_2 = (ARAnchorAdded_t1608557165 *)il2cpp_codegen_object_new(ARAnchorAdded_t1608557165_il2cpp_TypeInfo_var);
		ARAnchorAdded__ctor_m2575305337(L_2, __this, L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var);
		UnityARSessionNativeInterface_add_ARAnchorAddedEvent_m922239177(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		intptr_t L_3 = (intptr_t)UnityARAnchorManager_UpdateAnchor_m2247086537_RuntimeMethod_var;
		ARAnchorUpdated_t3113222537 * L_4 = (ARAnchorUpdated_t3113222537 *)il2cpp_codegen_object_new(ARAnchorUpdated_t3113222537_il2cpp_TypeInfo_var);
		ARAnchorUpdated__ctor_m4197086648(L_4, __this, L_3, /*hidden argument*/NULL);
		UnityARSessionNativeInterface_add_ARAnchorUpdatedEvent_m421321882(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		intptr_t L_5 = (intptr_t)UnityARAnchorManager_RemoveAnchor_m1214922587_RuntimeMethod_var;
		ARAnchorRemoved_t4030593004 * L_6 = (ARAnchorRemoved_t4030593004 *)il2cpp_codegen_object_new(ARAnchorRemoved_t4030593004_il2cpp_TypeInfo_var);
		ARAnchorRemoved__ctor_m498665711(L_6, __this, L_5, /*hidden argument*/NULL);
		UnityARSessionNativeInterface_add_ARAnchorRemovedEvent_m3581175116(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.iOS.UnityARAnchorManager::AddAnchor(UnityEngine.XR.iOS.ARPlaneAnchor)
extern "C"  void UnityARAnchorManager_AddAnchor_m66833497 (UnityARAnchorManager_t1557554123 * __this, ARPlaneAnchor_t2049372221  ___arPlaneAnchor0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityARAnchorManager_AddAnchor_m66833497_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t1113636619 * V_0 = NULL;
	ARPlaneAnchorGameObject_t1947719815 * V_1 = NULL;
	{
		ARPlaneAnchor_t2049372221  L_0 = ___arPlaneAnchor0;
		IL2CPP_RUNTIME_CLASS_INIT(UnityARUtility_t2509807446_il2cpp_TypeInfo_var);
		GameObject_t1113636619 * L_1 = UnityARUtility_CreatePlaneInScene_m2158801296(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		GameObject_t1113636619 * L_2 = V_0;
		NullCheck(L_2);
		GameObject_AddComponent_TisDontDestroyOnLoad_t1456007215_m2687533065(L_2, /*hidden argument*/GameObject_AddComponent_TisDontDestroyOnLoad_t1456007215_m2687533065_RuntimeMethod_var);
		ARPlaneAnchorGameObject_t1947719815 * L_3 = (ARPlaneAnchorGameObject_t1947719815 *)il2cpp_codegen_object_new(ARPlaneAnchorGameObject_t1947719815_il2cpp_TypeInfo_var);
		ARPlaneAnchorGameObject__ctor_m541721435(L_3, /*hidden argument*/NULL);
		V_1 = L_3;
		ARPlaneAnchorGameObject_t1947719815 * L_4 = V_1;
		ARPlaneAnchor_t2049372221  L_5 = ___arPlaneAnchor0;
		NullCheck(L_4);
		L_4->set_planeAnchor_1(L_5);
		ARPlaneAnchorGameObject_t1947719815 * L_6 = V_1;
		GameObject_t1113636619 * L_7 = V_0;
		NullCheck(L_6);
		L_6->set_gameObject_0(L_7);
		Dictionary_2_t1732976114 * L_8 = __this->get_planeAnchorMap_0();
		String_t* L_9 = (&___arPlaneAnchor0)->get_identifier_0();
		ARPlaneAnchorGameObject_t1947719815 * L_10 = V_1;
		NullCheck(L_8);
		Dictionary_2_Add_m3454172932(L_8, L_9, L_10, /*hidden argument*/Dictionary_2_Add_m3454172932_RuntimeMethod_var);
		return;
	}
}
// System.Void UnityEngine.XR.iOS.UnityARAnchorManager::RemoveAnchor(UnityEngine.XR.iOS.ARPlaneAnchor)
extern "C"  void UnityARAnchorManager_RemoveAnchor_m1214922587 (UnityARAnchorManager_t1557554123 * __this, ARPlaneAnchor_t2049372221  ___arPlaneAnchor0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityARAnchorManager_RemoveAnchor_m1214922587_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ARPlaneAnchorGameObject_t1947719815 * V_0 = NULL;
	{
		Dictionary_2_t1732976114 * L_0 = __this->get_planeAnchorMap_0();
		String_t* L_1 = (&___arPlaneAnchor0)->get_identifier_0();
		NullCheck(L_0);
		bool L_2 = Dictionary_2_ContainsKey_m1916439804(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_m1916439804_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0048;
		}
	}
	{
		Dictionary_2_t1732976114 * L_3 = __this->get_planeAnchorMap_0();
		String_t* L_4 = (&___arPlaneAnchor0)->get_identifier_0();
		NullCheck(L_3);
		ARPlaneAnchorGameObject_t1947719815 * L_5 = Dictionary_2_get_Item_m1821527627(L_3, L_4, /*hidden argument*/Dictionary_2_get_Item_m1821527627_RuntimeMethod_var);
		V_0 = L_5;
		ARPlaneAnchorGameObject_t1947719815 * L_6 = V_0;
		NullCheck(L_6);
		GameObject_t1113636619 * L_7 = L_6->get_gameObject_0();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_Destroy_m565254235(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		Dictionary_2_t1732976114 * L_8 = __this->get_planeAnchorMap_0();
		String_t* L_9 = (&___arPlaneAnchor0)->get_identifier_0();
		NullCheck(L_8);
		Dictionary_2_Remove_m2181199409(L_8, L_9, /*hidden argument*/Dictionary_2_Remove_m2181199409_RuntimeMethod_var);
	}

IL_0048:
	{
		return;
	}
}
// System.Void UnityEngine.XR.iOS.UnityARAnchorManager::UpdateAnchor(UnityEngine.XR.iOS.ARPlaneAnchor)
extern "C"  void UnityARAnchorManager_UpdateAnchor_m2247086537 (UnityARAnchorManager_t1557554123 * __this, ARPlaneAnchor_t2049372221  ___arPlaneAnchor0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityARAnchorManager_UpdateAnchor_m2247086537_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ARPlaneAnchorGameObject_t1947719815 * V_0 = NULL;
	{
		Dictionary_2_t1732976114 * L_0 = __this->get_planeAnchorMap_0();
		String_t* L_1 = (&___arPlaneAnchor0)->get_identifier_0();
		NullCheck(L_0);
		bool L_2 = Dictionary_2_ContainsKey_m1916439804(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_m1916439804_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0051;
		}
	}
	{
		Dictionary_2_t1732976114 * L_3 = __this->get_planeAnchorMap_0();
		String_t* L_4 = (&___arPlaneAnchor0)->get_identifier_0();
		NullCheck(L_3);
		ARPlaneAnchorGameObject_t1947719815 * L_5 = Dictionary_2_get_Item_m1821527627(L_3, L_4, /*hidden argument*/Dictionary_2_get_Item_m1821527627_RuntimeMethod_var);
		V_0 = L_5;
		ARPlaneAnchorGameObject_t1947719815 * L_6 = V_0;
		NullCheck(L_6);
		GameObject_t1113636619 * L_7 = L_6->get_gameObject_0();
		ARPlaneAnchor_t2049372221  L_8 = ___arPlaneAnchor0;
		IL2CPP_RUNTIME_CLASS_INIT(UnityARUtility_t2509807446_il2cpp_TypeInfo_var);
		UnityARUtility_UpdatePlaneWithAnchorTransform_m2954036282(NULL /*static, unused*/, L_7, L_8, /*hidden argument*/NULL);
		ARPlaneAnchorGameObject_t1947719815 * L_9 = V_0;
		ARPlaneAnchor_t2049372221  L_10 = ___arPlaneAnchor0;
		NullCheck(L_9);
		L_9->set_planeAnchor_1(L_10);
		Dictionary_2_t1732976114 * L_11 = __this->get_planeAnchorMap_0();
		String_t* L_12 = (&___arPlaneAnchor0)->get_identifier_0();
		ARPlaneAnchorGameObject_t1947719815 * L_13 = V_0;
		NullCheck(L_11);
		Dictionary_2_set_Item_m3421257586(L_11, L_12, L_13, /*hidden argument*/Dictionary_2_set_Item_m3421257586_RuntimeMethod_var);
	}

IL_0051:
	{
		return;
	}
}
// System.Void UnityEngine.XR.iOS.UnityARAnchorManager::Destroy()
extern "C"  void UnityARAnchorManager_Destroy_m3879125245 (UnityARAnchorManager_t1557554123 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityARAnchorManager_Destroy_m3879125245_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ARPlaneAnchorGameObject_t1947719815 * V_0 = NULL;
	Enumerator_t1014071138  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		List_1_t3419794557 * L_0 = UnityARAnchorManager_GetCurrentPlaneAnchors_m3820916150(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Enumerator_t1014071138  L_1 = List_1_GetEnumerator_m4069702366(L_0, /*hidden argument*/List_1_GetEnumerator_m4069702366_RuntimeMethod_var);
		V_1 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0024;
		}

IL_0011:
		{
			ARPlaneAnchorGameObject_t1947719815 * L_2 = Enumerator_get_Current_m3675360547((&V_1), /*hidden argument*/Enumerator_get_Current_m3675360547_RuntimeMethod_var);
			V_0 = L_2;
			ARPlaneAnchorGameObject_t1947719815 * L_3 = V_0;
			NullCheck(L_3);
			GameObject_t1113636619 * L_4 = L_3->get_gameObject_0();
			IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
			Object_Destroy_m565254235(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		}

IL_0024:
		{
			bool L_5 = Enumerator_MoveNext_m3312335886((&V_1), /*hidden argument*/Enumerator_MoveNext_m3312335886_RuntimeMethod_var);
			if (L_5)
			{
				goto IL_0011;
			}
		}

IL_0030:
		{
			IL2CPP_LEAVE(0x43, FINALLY_0035);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0035;
	}

FINALLY_0035:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m2589232868((&V_1), /*hidden argument*/Enumerator_Dispose_m2589232868_RuntimeMethod_var);
		IL2CPP_END_FINALLY(53)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(53)
	{
		IL2CPP_JUMP_TBL(0x43, IL_0043)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0043:
	{
		Dictionary_2_t1732976114 * L_6 = __this->get_planeAnchorMap_0();
		NullCheck(L_6);
		Dictionary_2_Clear_m1470804087(L_6, /*hidden argument*/Dictionary_2_Clear_m1470804087_RuntimeMethod_var);
		return;
	}
}
// System.Collections.Generic.List`1<UnityEngine.XR.iOS.ARPlaneAnchorGameObject> UnityEngine.XR.iOS.UnityARAnchorManager::GetCurrentPlaneAnchors()
extern "C"  List_1_t3419794557 * UnityARAnchorManager_GetCurrentPlaneAnchors_m3820916150 (UnityARAnchorManager_t1557554123 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityARAnchorManager_GetCurrentPlaneAnchors_m3820916150_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t1732976114 * L_0 = __this->get_planeAnchorMap_0();
		NullCheck(L_0);
		ValueCollection_t3449020432 * L_1 = Dictionary_2_get_Values_m3625351605(L_0, /*hidden argument*/Dictionary_2_get_Values_m3625351605_RuntimeMethod_var);
		List_1_t3419794557 * L_2 = Enumerable_ToList_TisARPlaneAnchorGameObject_t1947719815_m6396406(NULL /*static, unused*/, L_1, /*hidden argument*/Enumerable_ToList_TisARPlaneAnchorGameObject_t1947719815_m6396406_RuntimeMethod_var);
		return L_2;
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
// Conversion methods for marshalling of: UnityEngine.XR.iOS.UnityARCamera
extern "C" void UnityARCamera_t2069150450_marshal_pinvoke(const UnityARCamera_t2069150450& unmarshaled, UnityARCamera_t2069150450_marshaled_pinvoke& marshaled)
{
	Exception_t* ___pointCloudData_7Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'pointCloudData' of type 'UnityARCamera'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___pointCloudData_7Exception);
}
extern "C" void UnityARCamera_t2069150450_marshal_pinvoke_back(const UnityARCamera_t2069150450_marshaled_pinvoke& marshaled, UnityARCamera_t2069150450& unmarshaled)
{
	Exception_t* ___pointCloudData_7Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'pointCloudData' of type 'UnityARCamera'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___pointCloudData_7Exception);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.iOS.UnityARCamera
extern "C" void UnityARCamera_t2069150450_marshal_pinvoke_cleanup(UnityARCamera_t2069150450_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.XR.iOS.UnityARCamera
extern "C" void UnityARCamera_t2069150450_marshal_com(const UnityARCamera_t2069150450& unmarshaled, UnityARCamera_t2069150450_marshaled_com& marshaled)
{
	Exception_t* ___pointCloudData_7Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'pointCloudData' of type 'UnityARCamera'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___pointCloudData_7Exception);
}
extern "C" void UnityARCamera_t2069150450_marshal_com_back(const UnityARCamera_t2069150450_marshaled_com& marshaled, UnityARCamera_t2069150450& unmarshaled)
{
	Exception_t* ___pointCloudData_7Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'pointCloudData' of type 'UnityARCamera'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___pointCloudData_7Exception);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.iOS.UnityARCamera
extern "C" void UnityARCamera_t2069150450_marshal_com_cleanup(UnityARCamera_t2069150450_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.XR.iOS.UnityARCamera::.ctor(UnityEngine.XR.iOS.UnityARMatrix4x4,UnityEngine.XR.iOS.UnityARMatrix4x4,UnityEngine.XR.iOS.ARTrackingState,UnityEngine.XR.iOS.ARTrackingStateReason,UnityEngine.XR.iOS.UnityVideoParams,UnityEngine.XR.iOS.UnityARLightEstimate,UnityEngine.XR.iOS.UnityARMatrix4x4,UnityEngine.Vector3[])
extern "C"  void UnityARCamera__ctor_m1982929665 (UnityARCamera_t2069150450 * __this, UnityARMatrix4x4_t4073345847  ___wt0, UnityARMatrix4x4_t4073345847  ___pm1, int32_t ___ats2, int32_t ___atsr3, UnityVideoParams_t4155354995  ___uvp4, UnityARLightEstimate_t1498306117  ___lightEst5, UnityARMatrix4x4_t4073345847  ___dt6, Vector3U5BU5D_t1718750761* ___pointCloud7, const RuntimeMethod* method)
{
	{
		UnityARMatrix4x4_t4073345847  L_0 = ___wt0;
		__this->set_worldTransform_0(L_0);
		UnityARMatrix4x4_t4073345847  L_1 = ___pm1;
		__this->set_projectionMatrix_1(L_1);
		int32_t L_2 = ___ats2;
		__this->set_trackingState_2(L_2);
		int32_t L_3 = ___atsr3;
		__this->set_trackingReason_3(L_3);
		UnityVideoParams_t4155354995  L_4 = ___uvp4;
		__this->set_videoParams_4(L_4);
		UnityARLightEstimate_t1498306117  L_5 = ___lightEst5;
		__this->set_lightEstimation_5(L_5);
		UnityARMatrix4x4_t4073345847  L_6 = ___dt6;
		__this->set_displayTransform_6(L_6);
		Vector3U5BU5D_t1718750761* L_7 = ___pointCloud7;
		__this->set_pointCloudData_7(L_7);
		return;
	}
}
extern "C"  void UnityARCamera__ctor_m1982929665_AdjustorThunk (RuntimeObject * __this, UnityARMatrix4x4_t4073345847  ___wt0, UnityARMatrix4x4_t4073345847  ___pm1, int32_t ___ats2, int32_t ___atsr3, UnityVideoParams_t4155354995  ___uvp4, UnityARLightEstimate_t1498306117  ___lightEst5, UnityARMatrix4x4_t4073345847  ___dt6, Vector3U5BU5D_t1718750761* ___pointCloud7, const RuntimeMethod* method)
{
	UnityARCamera_t2069150450 * _thisAdjusted = reinterpret_cast<UnityARCamera_t2069150450 *>(__this + 1);
	UnityARCamera__ctor_m1982929665(_thisAdjusted, ___wt0, ___pm1, ___ats2, ___atsr3, ___uvp4, ___lightEst5, ___dt6, ___pointCloud7, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.iOS.UnityARGeneratePlane::.ctor()
extern "C"  void UnityARGeneratePlane__ctor_m1331836014 (UnityARGeneratePlane_t272564669 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.iOS.UnityARGeneratePlane::Start()
extern "C"  void UnityARGeneratePlane_Start_m819352378 (UnityARGeneratePlane_t272564669 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityARGeneratePlane_Start_m819352378_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityARAnchorManager_t1557554123 * L_0 = (UnityARAnchorManager_t1557554123 *)il2cpp_codegen_object_new(UnityARAnchorManager_t1557554123_il2cpp_TypeInfo_var);
		UnityARAnchorManager__ctor_m649673493(L_0, /*hidden argument*/NULL);
		__this->set_unityARAnchorManager_3(L_0);
		GameObject_t1113636619 * L_1 = __this->get_planePrefab_2();
		IL2CPP_RUNTIME_CLASS_INIT(UnityARUtility_t2509807446_il2cpp_TypeInfo_var);
		UnityARUtility_InitializePlanePrefab_m2291423040(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.iOS.UnityARGeneratePlane::OnDestroy()
extern "C"  void UnityARGeneratePlane_OnDestroy_m2635923381 (UnityARGeneratePlane_t272564669 * __this, const RuntimeMethod* method)
{
	{
		UnityARAnchorManager_t1557554123 * L_0 = __this->get_unityARAnchorManager_3();
		NullCheck(L_0);
		UnityARAnchorManager_Destroy_m3879125245(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.iOS.UnityARGeneratePlane::OnGUI()
extern "C"  void UnityARGeneratePlane_OnGUI_m324062377 (UnityARGeneratePlane_t272564669 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityARGeneratePlane_OnGUI_m324062377_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t3419794557 * V_0 = NULL;
	{
		UnityARAnchorManager_t1557554123 * L_0 = __this->get_unityARAnchorManager_3();
		NullCheck(L_0);
		List_1_t3419794557 * L_1 = UnityARAnchorManager_GetCurrentPlaneAnchors_m3820916150(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		List_1_t3419794557 * L_2 = V_0;
		NullCheck(L_2);
		int32_t L_3 = List_1_get_Count_m1432341886(L_2, /*hidden argument*/List_1_get_Count_m1432341886_RuntimeMethod_var);
		if ((((int32_t)L_3) < ((int32_t)1)))
		{
			goto IL_0018;
		}
	}

IL_0018:
	{
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
// System.Void UnityEngine.XR.iOS.UnityARHitTestExample::.ctor()
extern "C"  void UnityARHitTestExample__ctor_m3724217776 (UnityARHitTestExample_t457226377 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.XR.iOS.UnityARHitTestExample::HitTestWithResultType(UnityEngine.XR.iOS.ARPoint,UnityEngine.XR.iOS.ARHitTestResultType)
extern "C"  bool UnityARHitTestExample_HitTestWithResultType_m1112373859 (UnityARHitTestExample_t457226377 * __this, ARPoint_t499615819  ___point0, int64_t ___resultTypes1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityARHitTestExample_HitTestWithResultType_m1112373859_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t2751098672 * V_0 = NULL;
	ARHitTestResult_t1279023930  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Enumerator_t345375253  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Vector3_t3722313464  V_3;
	memset(&V_3, 0, sizeof(V_3));
	Vector3_t3722313464  V_4;
	memset(&V_4, 0, sizeof(V_4));
	Vector3_t3722313464  V_5;
	memset(&V_5, 0, sizeof(V_5));
	bool V_6 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var);
		UnityARSessionNativeInterface_t3929719369 * L_0 = UnityARSessionNativeInterface_GetARSessionNativeInterface_m1118592565(NULL /*static, unused*/, /*hidden argument*/NULL);
		ARPoint_t499615819  L_1 = ___point0;
		int64_t L_2 = ___resultTypes1;
		NullCheck(L_0);
		List_1_t2751098672 * L_3 = UnityARSessionNativeInterface_HitTest_m4212263537(L_0, L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		List_1_t2751098672 * L_4 = V_0;
		NullCheck(L_4);
		int32_t L_5 = List_1_get_Count_m2045149193(L_4, /*hidden argument*/List_1_get_Count_m2045149193_RuntimeMethod_var);
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_00e5;
		}
	}
	{
		List_1_t2751098672 * L_6 = V_0;
		NullCheck(L_6);
		Enumerator_t345375253  L_7 = List_1_GetEnumerator_m537534021(L_6, /*hidden argument*/List_1_GetEnumerator_m537534021_RuntimeMethod_var);
		V_2 = L_7;
	}

IL_0020:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00c6;
		}

IL_0025:
		{
			ARHitTestResult_t1279023930  L_8 = Enumerator_get_Current_m2684230689((&V_2), /*hidden argument*/Enumerator_get_Current_m2684230689_RuntimeMethod_var);
			V_1 = L_8;
			IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
			Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral223888751, /*hidden argument*/NULL);
			Transform_t3600365921 * L_9 = __this->get_m_HitTransform_2();
			Matrix4x4_t1817901843  L_10 = (&V_1)->get_worldTransform_3();
			Vector3_t3722313464  L_11 = UnityARMatrixOps_GetPosition_m296874797(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
			NullCheck(L_9);
			Transform_set_position_m3387557959(L_9, L_11, /*hidden argument*/NULL);
			Transform_t3600365921 * L_12 = __this->get_m_HitTransform_2();
			Matrix4x4_t1817901843  L_13 = (&V_1)->get_worldTransform_3();
			Quaternion_t2301928331  L_14 = UnityARMatrixOps_GetRotation_m1192521266(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
			NullCheck(L_12);
			Transform_set_rotation_m3524318132(L_12, L_14, /*hidden argument*/NULL);
			Transform_t3600365921 * L_15 = __this->get_m_HitTransform_2();
			NullCheck(L_15);
			Vector3_t3722313464  L_16 = Transform_get_position_m36019626(L_15, /*hidden argument*/NULL);
			V_3 = L_16;
			float L_17 = (&V_3)->get_x_1();
			float L_18 = L_17;
			RuntimeObject * L_19 = Box(Single_t1397266774_il2cpp_TypeInfo_var, &L_18);
			Transform_t3600365921 * L_20 = __this->get_m_HitTransform_2();
			NullCheck(L_20);
			Vector3_t3722313464  L_21 = Transform_get_position_m36019626(L_20, /*hidden argument*/NULL);
			V_4 = L_21;
			float L_22 = (&V_4)->get_y_2();
			float L_23 = L_22;
			RuntimeObject * L_24 = Box(Single_t1397266774_il2cpp_TypeInfo_var, &L_23);
			Transform_t3600365921 * L_25 = __this->get_m_HitTransform_2();
			NullCheck(L_25);
			Vector3_t3722313464  L_26 = Transform_get_position_m36019626(L_25, /*hidden argument*/NULL);
			V_5 = L_26;
			float L_27 = (&V_5)->get_z_3();
			float L_28 = L_27;
			RuntimeObject * L_29 = Box(Single_t1397266774_il2cpp_TypeInfo_var, &L_28);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_30 = String_Format_m3339413201(NULL /*static, unused*/, _stringLiteral94848434, L_19, L_24, L_29, /*hidden argument*/NULL);
			Debug_Log_m4051431634(NULL /*static, unused*/, L_30, /*hidden argument*/NULL);
			V_6 = (bool)1;
			IL2CPP_LEAVE(0xE7, FINALLY_00d7);
		}

IL_00c6:
		{
			bool L_31 = Enumerator_MoveNext_m3228882039((&V_2), /*hidden argument*/Enumerator_MoveNext_m3228882039_RuntimeMethod_var);
			if (L_31)
			{
				goto IL_0025;
			}
		}

IL_00d2:
		{
			IL2CPP_LEAVE(0xE5, FINALLY_00d7);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00d7;
	}

FINALLY_00d7:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m2925904114((&V_2), /*hidden argument*/Enumerator_Dispose_m2925904114_RuntimeMethod_var);
		IL2CPP_END_FINALLY(215)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(215)
	{
		IL2CPP_JUMP_TBL(0xE7, IL_00e7)
		IL2CPP_JUMP_TBL(0xE5, IL_00e5)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00e5:
	{
		return (bool)0;
	}

IL_00e7:
	{
		bool L_32 = V_6;
		return L_32;
	}
}
// System.Void UnityEngine.XR.iOS.UnityARHitTestExample::Update()
extern "C"  void UnityARHitTestExample_Update_m3374199410 (UnityARHitTestExample_t457226377 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityARHitTestExample_Update_m3374199410_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Touch_t1921856868  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	ARPoint_t499615819  V_2;
	memset(&V_2, 0, sizeof(V_2));
	ARPoint_t499615819  V_3;
	memset(&V_3, 0, sizeof(V_3));
	ARHitTestResultTypeU5BU5D_t2695410291* V_4 = NULL;
	int64_t V_5 = 0;
	ARHitTestResultTypeU5BU5D_t2695410291* V_6 = NULL;
	int32_t V_7 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		int32_t L_0 = Input_get_touchCount_m3403849067(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_00c1;
		}
	}
	{
		Transform_t3600365921 * L_1 = __this->get_m_HitTransform_2();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_1, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_00c1;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		Touch_t1921856868  L_3 = Input_GetTouch_m2192712756(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		V_0 = L_3;
		int32_t L_4 = Touch_get_phase_m214549210((&V_0), /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_003c;
		}
	}
	{
		int32_t L_5 = Touch_get_phase_m214549210((&V_0), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_5) == ((uint32_t)1))))
		{
			goto IL_00c1;
		}
	}

IL_003c:
	{
		Camera_t4157153871 * L_6 = Camera_get_main_m3643453163(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector2_t2156229523  L_7 = Touch_get_position_m3109777936((&V_0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_8 = Vector2_op_Implicit_m1860157806(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		Vector3_t3722313464  L_9 = Camera_ScreenToViewportPoint_m3569032523(L_6, L_8, /*hidden argument*/NULL);
		V_1 = L_9;
		il2cpp_codegen_initobj((&V_3), sizeof(ARPoint_t499615819 ));
		float L_10 = (&V_1)->get_x_1();
		(&V_3)->set_x_0((((double)((double)L_10))));
		float L_11 = (&V_1)->get_y_2();
		(&V_3)->set_y_1((((double)((double)L_11))));
		ARPoint_t499615819  L_12 = V_3;
		V_2 = L_12;
		ARHitTestResultTypeU5BU5D_t2695410291* L_13 = ((ARHitTestResultTypeU5BU5D_t2695410291*)SZArrayNew(ARHitTestResultTypeU5BU5D_t2695410291_il2cpp_TypeInfo_var, (uint32_t)3));
		RuntimeFieldHandle_t1871169219  L_14 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t3057255371____U24fieldU2D8E7629AD5AF686202B8CB7C014505C432FFE31E6_1_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m3117905507(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_13, L_14, /*hidden argument*/NULL);
		V_4 = L_13;
		ARHitTestResultTypeU5BU5D_t2695410291* L_15 = V_4;
		V_6 = L_15;
		V_7 = 0;
		goto IL_00b6;
	}

IL_009a:
	{
		ARHitTestResultTypeU5BU5D_t2695410291* L_16 = V_6;
		int32_t L_17 = V_7;
		NullCheck(L_16);
		int32_t L_18 = L_17;
		int64_t L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		V_5 = L_19;
		ARPoint_t499615819  L_20 = V_2;
		int64_t L_21 = V_5;
		bool L_22 = UnityARHitTestExample_HitTestWithResultType_m1112373859(__this, L_20, L_21, /*hidden argument*/NULL);
		if (!L_22)
		{
			goto IL_00b0;
		}
	}
	{
		return;
	}

IL_00b0:
	{
		int32_t L_23 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1));
	}

IL_00b6:
	{
		int32_t L_24 = V_7;
		ARHitTestResultTypeU5BU5D_t2695410291* L_25 = V_6;
		NullCheck(L_25);
		if ((((int32_t)L_24) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_25)->max_length)))))))
		{
			goto IL_009a;
		}
	}

IL_00c1:
	{
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
// Conversion methods for marshalling of: UnityEngine.XR.iOS.UnityARHitTestResult
extern "C" void UnityARHitTestResult_t4176230866_marshal_pinvoke(const UnityARHitTestResult_t4176230866& unmarshaled, UnityARHitTestResult_t4176230866_marshaled_pinvoke& marshaled)
{
	marshaled.___type_0 = unmarshaled.get_type_0();
	marshaled.___distance_1 = unmarshaled.get_distance_1();
	marshaled.___localTransform_2 = unmarshaled.get_localTransform_2();
	marshaled.___worldTransform_3 = unmarshaled.get_worldTransform_3();
	marshaled.___anchor_4 = unmarshaled.get_anchor_4();
	marshaled.___isValid_5 = static_cast<int32_t>(unmarshaled.get_isValid_5());
}
extern "C" void UnityARHitTestResult_t4176230866_marshal_pinvoke_back(const UnityARHitTestResult_t4176230866_marshaled_pinvoke& marshaled, UnityARHitTestResult_t4176230866& unmarshaled)
{
	int64_t unmarshaled_type_temp_0 = 0;
	unmarshaled_type_temp_0 = marshaled.___type_0;
	unmarshaled.set_type_0(unmarshaled_type_temp_0);
	double unmarshaled_distance_temp_1 = 0.0;
	unmarshaled_distance_temp_1 = marshaled.___distance_1;
	unmarshaled.set_distance_1(unmarshaled_distance_temp_1);
	Matrix4x4_t1817901843  unmarshaled_localTransform_temp_2;
	memset(&unmarshaled_localTransform_temp_2, 0, sizeof(unmarshaled_localTransform_temp_2));
	unmarshaled_localTransform_temp_2 = marshaled.___localTransform_2;
	unmarshaled.set_localTransform_2(unmarshaled_localTransform_temp_2);
	Matrix4x4_t1817901843  unmarshaled_worldTransform_temp_3;
	memset(&unmarshaled_worldTransform_temp_3, 0, sizeof(unmarshaled_worldTransform_temp_3));
	unmarshaled_worldTransform_temp_3 = marshaled.___worldTransform_3;
	unmarshaled.set_worldTransform_3(unmarshaled_worldTransform_temp_3);
	intptr_t unmarshaled_anchor_temp_4;
	memset(&unmarshaled_anchor_temp_4, 0, sizeof(unmarshaled_anchor_temp_4));
	unmarshaled_anchor_temp_4 = marshaled.___anchor_4;
	unmarshaled.set_anchor_4(unmarshaled_anchor_temp_4);
	bool unmarshaled_isValid_temp_5 = false;
	unmarshaled_isValid_temp_5 = static_cast<bool>(marshaled.___isValid_5);
	unmarshaled.set_isValid_5(unmarshaled_isValid_temp_5);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.iOS.UnityARHitTestResult
extern "C" void UnityARHitTestResult_t4176230866_marshal_pinvoke_cleanup(UnityARHitTestResult_t4176230866_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.XR.iOS.UnityARHitTestResult
extern "C" void UnityARHitTestResult_t4176230866_marshal_com(const UnityARHitTestResult_t4176230866& unmarshaled, UnityARHitTestResult_t4176230866_marshaled_com& marshaled)
{
	marshaled.___type_0 = unmarshaled.get_type_0();
	marshaled.___distance_1 = unmarshaled.get_distance_1();
	marshaled.___localTransform_2 = unmarshaled.get_localTransform_2();
	marshaled.___worldTransform_3 = unmarshaled.get_worldTransform_3();
	marshaled.___anchor_4 = unmarshaled.get_anchor_4();
	marshaled.___isValid_5 = static_cast<int32_t>(unmarshaled.get_isValid_5());
}
extern "C" void UnityARHitTestResult_t4176230866_marshal_com_back(const UnityARHitTestResult_t4176230866_marshaled_com& marshaled, UnityARHitTestResult_t4176230866& unmarshaled)
{
	int64_t unmarshaled_type_temp_0 = 0;
	unmarshaled_type_temp_0 = marshaled.___type_0;
	unmarshaled.set_type_0(unmarshaled_type_temp_0);
	double unmarshaled_distance_temp_1 = 0.0;
	unmarshaled_distance_temp_1 = marshaled.___distance_1;
	unmarshaled.set_distance_1(unmarshaled_distance_temp_1);
	Matrix4x4_t1817901843  unmarshaled_localTransform_temp_2;
	memset(&unmarshaled_localTransform_temp_2, 0, sizeof(unmarshaled_localTransform_temp_2));
	unmarshaled_localTransform_temp_2 = marshaled.___localTransform_2;
	unmarshaled.set_localTransform_2(unmarshaled_localTransform_temp_2);
	Matrix4x4_t1817901843  unmarshaled_worldTransform_temp_3;
	memset(&unmarshaled_worldTransform_temp_3, 0, sizeof(unmarshaled_worldTransform_temp_3));
	unmarshaled_worldTransform_temp_3 = marshaled.___worldTransform_3;
	unmarshaled.set_worldTransform_3(unmarshaled_worldTransform_temp_3);
	intptr_t unmarshaled_anchor_temp_4;
	memset(&unmarshaled_anchor_temp_4, 0, sizeof(unmarshaled_anchor_temp_4));
	unmarshaled_anchor_temp_4 = marshaled.___anchor_4;
	unmarshaled.set_anchor_4(unmarshaled_anchor_temp_4);
	bool unmarshaled_isValid_temp_5 = false;
	unmarshaled_isValid_temp_5 = static_cast<bool>(marshaled.___isValid_5);
	unmarshaled.set_isValid_5(unmarshaled_isValid_temp_5);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.iOS.UnityARHitTestResult
extern "C" void UnityARHitTestResult_t4176230866_marshal_com_cleanup(UnityARHitTestResult_t4176230866_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.iOS.UnityARKitControl::.ctor()
extern "C"  void UnityARKitControl__ctor_m1406012851 (UnityARKitControl_t1358211756 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityARKitControl__ctor_m1406012851_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_runOptions_2(((UnityARSessionRunOptionU5BU5D_t4225291891*)SZArrayNew(UnityARSessionRunOptionU5BU5D_t4225291891_il2cpp_TypeInfo_var, (uint32_t)4)));
		__this->set_alignmentOptions_3(((UnityARAlignmentU5BU5D_t3682394155*)SZArrayNew(UnityARAlignmentU5BU5D_t3682394155_il2cpp_TypeInfo_var, (uint32_t)3)));
		__this->set_planeOptions_4(((UnityARPlaneDetectionU5BU5D_t3458580926*)SZArrayNew(UnityARPlaneDetectionU5BU5D_t3458580926_il2cpp_TypeInfo_var, (uint32_t)4)));
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.iOS.UnityARKitControl::Start()
extern "C"  void UnityARKitControl_Start_m2727759343 (UnityARKitControl_t1358211756 * __this, const RuntimeMethod* method)
{
	{
		UnityARSessionRunOptionU5BU5D_t4225291891* L_0 = __this->get_runOptions_2();
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)3);
		UnityARSessionRunOptionU5BU5D_t4225291891* L_1 = __this->get_runOptions_2();
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)1);
		UnityARSessionRunOptionU5BU5D_t4225291891* L_2 = __this->get_runOptions_2();
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(2), (int32_t)2);
		UnityARSessionRunOptionU5BU5D_t4225291891* L_3 = __this->get_runOptions_2();
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(3), (int32_t)0);
		UnityARAlignmentU5BU5D_t3682394155* L_4 = __this->get_alignmentOptions_3();
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)2);
		UnityARAlignmentU5BU5D_t3682394155* L_5 = __this->get_alignmentOptions_3();
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)0);
		UnityARAlignmentU5BU5D_t3682394155* L_6 = __this->get_alignmentOptions_3();
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (int32_t)1);
		UnityARPlaneDetectionU5BU5D_t3458580926* L_7 = __this->get_planeOptions_4();
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)1);
		UnityARPlaneDetectionU5BU5D_t3458580926* L_8 = __this->get_planeOptions_4();
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)0);
		return;
	}
}
// System.Void UnityEngine.XR.iOS.UnityARKitControl::Update()
extern "C"  void UnityARKitControl_Update_m2726228173 (UnityARKitControl_t1358211756 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.XR.iOS.UnityARKitControl::OnGUI()
extern "C"  void UnityARKitControl_OnGUI_m1112791986 (UnityARKitControl_t1358211756 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityARKitControl_OnGUI_m1112791986_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ARKitWorldTrackingSessionConfiguration_t273386347  V_0;
	memset(&V_0, 0, sizeof(V_0));
	ARKitSessionConfiguration_t629136898  V_1;
	memset(&V_1, 0, sizeof(V_1));
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	String_t* V_4 = NULL;
	String_t* G_B13_0 = NULL;
	String_t* G_B20_0 = NULL;
	String_t* G_B25_0 = NULL;
	{
		Rect_t2360479859  L_0;
		memset(&L_0, 0, sizeof(L_0));
		Rect__ctor_m2614021312((&L_0), (100.0f), (100.0f), (200.0f), (50.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t1624858472_il2cpp_TypeInfo_var);
		bool L_1 = GUI_Button_m1518979886(NULL /*static, unused*/, L_0, _stringLiteral3093431772, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0032;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var);
		UnityARSessionNativeInterface_t3929719369 * L_2 = UnityARSessionNativeInterface_GetARSessionNativeInterface_m1118592565(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		UnityARSessionNativeInterface_Pause_m777408908(L_2, /*hidden argument*/NULL);
	}

IL_0032:
	{
		Rect_t2360479859  L_3;
		memset(&L_3, 0, sizeof(L_3));
		Rect__ctor_m2614021312((&L_3), (300.0f), (100.0f), (200.0f), (50.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t1624858472_il2cpp_TypeInfo_var);
		bool L_4 = GUI_Button_m1518979886(NULL /*static, unused*/, L_3, _stringLiteral2707270972, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0095;
		}
	}
	{
		UnityARAlignmentU5BU5D_t3682394155* L_5 = __this->get_alignmentOptions_3();
		int32_t L_6 = __this->get_currentAlignmentIndex_6();
		NullCheck(L_5);
		int32_t L_7 = L_6;
		int32_t L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		UnityARPlaneDetectionU5BU5D_t3458580926* L_9 = __this->get_planeOptions_4();
		int32_t L_10 = __this->get_currentPlaneIndex_7();
		NullCheck(L_9);
		int32_t L_11 = L_10;
		int32_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		ARKitWorldTrackingSessionConfiguration__ctor_m2019856913((&V_0), L_8, L_12, (bool)0, (bool)0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var);
		UnityARSessionNativeInterface_t3929719369 * L_13 = UnityARSessionNativeInterface_GetARSessionNativeInterface_m1118592565(NULL /*static, unused*/, /*hidden argument*/NULL);
		ARKitWorldTrackingSessionConfiguration_t273386347  L_14 = V_0;
		UnityARSessionRunOptionU5BU5D_t4225291891* L_15 = __this->get_runOptions_2();
		int32_t L_16 = __this->get_currentOptionIndex_5();
		NullCheck(L_15);
		int32_t L_17 = L_16;
		int32_t L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		NullCheck(L_13);
		UnityARSessionNativeInterface_RunWithConfigAndOptions_m2136170177(L_13, L_14, L_18, /*hidden argument*/NULL);
	}

IL_0095:
	{
		Rect_t2360479859  L_19;
		memset(&L_19, 0, sizeof(L_19));
		Rect__ctor_m2614021312((&L_19), (100.0f), (300.0f), (200.0f), (100.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t1624858472_il2cpp_TypeInfo_var);
		bool L_20 = GUI_Button_m1518979886(NULL /*static, unused*/, L_19, _stringLiteral3279158741, /*hidden argument*/NULL);
		if (!L_20)
		{
			goto IL_00de;
		}
	}
	{
		UnityARAlignmentU5BU5D_t3682394155* L_21 = __this->get_alignmentOptions_3();
		int32_t L_22 = __this->get_currentAlignmentIndex_6();
		NullCheck(L_21);
		int32_t L_23 = L_22;
		int32_t L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		ARKitSessionConfiguration__ctor_m1683900731((&V_1), L_24, (bool)1, (bool)1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var);
		UnityARSessionNativeInterface_t3929719369 * L_25 = UnityARSessionNativeInterface_GetARSessionNativeInterface_m1118592565(NULL /*static, unused*/, /*hidden argument*/NULL);
		ARKitSessionConfiguration_t629136898  L_26 = V_1;
		NullCheck(L_25);
		UnityARSessionNativeInterface_RunWithConfig_m2219734809(L_25, L_26, /*hidden argument*/NULL);
	}

IL_00de:
	{
		int32_t L_27 = __this->get_currentOptionIndex_5();
		if (L_27)
		{
			goto IL_00f3;
		}
	}
	{
		G_B13_0 = _stringLiteral1202628600;
		goto IL_0124;
	}

IL_00f3:
	{
		int32_t L_28 = __this->get_currentOptionIndex_5();
		if ((!(((uint32_t)L_28) == ((uint32_t)1))))
		{
			goto IL_0109;
		}
	}
	{
		G_B13_0 = _stringLiteral514893628;
		goto IL_0124;
	}

IL_0109:
	{
		int32_t L_29 = __this->get_currentOptionIndex_5();
		if ((!(((uint32_t)L_29) == ((uint32_t)2))))
		{
			goto IL_011f;
		}
	}
	{
		G_B13_0 = _stringLiteral3031800000;
		goto IL_0124;
	}

IL_011f:
	{
		G_B13_0 = _stringLiteral2791739702;
	}

IL_0124:
	{
		V_2 = G_B13_0;
		Rect_t2360479859  L_30;
		memset(&L_30, 0, sizeof(L_30));
		Rect__ctor_m2614021312((&L_30), (100.0f), (200.0f), (150.0f), (50.0f), /*hidden argument*/NULL);
		String_t* L_31 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_32 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral1205769173, L_31, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t1624858472_il2cpp_TypeInfo_var);
		bool L_33 = GUI_Button_m1518979886(NULL /*static, unused*/, L_30, L_32, /*hidden argument*/NULL);
		if (!L_33)
		{
			goto IL_0163;
		}
	}
	{
		int32_t L_34 = __this->get_currentOptionIndex_5();
		__this->set_currentOptionIndex_5(((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_34, (int32_t)1))%(int32_t)4)));
	}

IL_0163:
	{
		int32_t L_35 = __this->get_currentAlignmentIndex_6();
		if (L_35)
		{
			goto IL_0178;
		}
	}
	{
		G_B20_0 = _stringLiteral3170031834;
		goto IL_0193;
	}

IL_0178:
	{
		int32_t L_36 = __this->get_currentAlignmentIndex_6();
		if ((!(((uint32_t)L_36) == ((uint32_t)1))))
		{
			goto IL_018e;
		}
	}
	{
		G_B20_0 = _stringLiteral3670053048;
		goto IL_0193;
	}

IL_018e:
	{
		G_B20_0 = _stringLiteral3041351855;
	}

IL_0193:
	{
		V_3 = G_B20_0;
		Rect_t2360479859  L_37;
		memset(&L_37, 0, sizeof(L_37));
		Rect__ctor_m2614021312((&L_37), (300.0f), (200.0f), (150.0f), (50.0f), /*hidden argument*/NULL);
		String_t* L_38 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_39 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral1448827553, L_38, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t1624858472_il2cpp_TypeInfo_var);
		bool L_40 = GUI_Button_m1518979886(NULL /*static, unused*/, L_37, L_39, /*hidden argument*/NULL);
		if (!L_40)
		{
			goto IL_01d2;
		}
	}
	{
		int32_t L_41 = __this->get_currentAlignmentIndex_6();
		__this->set_currentAlignmentIndex_6(((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_41, (int32_t)1))%(int32_t)3)));
	}

IL_01d2:
	{
		int32_t L_42 = __this->get_currentPlaneIndex_7();
		if (L_42)
		{
			goto IL_01e7;
		}
	}
	{
		G_B25_0 = _stringLiteral1828639942;
		goto IL_01ec;
	}

IL_01e7:
	{
		G_B25_0 = _stringLiteral2791739702;
	}

IL_01ec:
	{
		V_4 = G_B25_0;
		Rect_t2360479859  L_43;
		memset(&L_43, 0, sizeof(L_43));
		Rect__ctor_m2614021312((&L_43), (500.0f), (200.0f), (150.0f), (50.0f), /*hidden argument*/NULL);
		String_t* L_44 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_45 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral921768783, L_44, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t1624858472_il2cpp_TypeInfo_var);
		bool L_46 = GUI_Button_m1518979886(NULL /*static, unused*/, L_43, L_45, /*hidden argument*/NULL);
		if (!L_46)
		{
			goto IL_022d;
		}
	}
	{
		int32_t L_47 = __this->get_currentPlaneIndex_7();
		__this->set_currentPlaneIndex_7(((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_47, (int32_t)1))%(int32_t)2)));
	}

IL_022d:
	{
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
// System.Void UnityEngine.XR.iOS.UnityARMatrix4x4::.ctor(UnityEngine.Vector4,UnityEngine.Vector4,UnityEngine.Vector4,UnityEngine.Vector4)
extern "C"  void UnityARMatrix4x4__ctor_m3835909947 (UnityARMatrix4x4_t4073345847 * __this, Vector4_t3319028937  ___c00, Vector4_t3319028937  ___c11, Vector4_t3319028937  ___c22, Vector4_t3319028937  ___c33, const RuntimeMethod* method)
{
	{
		Vector4_t3319028937  L_0 = ___c00;
		__this->set_column0_0(L_0);
		Vector4_t3319028937  L_1 = ___c11;
		__this->set_column1_1(L_1);
		Vector4_t3319028937  L_2 = ___c22;
		__this->set_column2_2(L_2);
		Vector4_t3319028937  L_3 = ___c33;
		__this->set_column3_3(L_3);
		return;
	}
}
extern "C"  void UnityARMatrix4x4__ctor_m3835909947_AdjustorThunk (RuntimeObject * __this, Vector4_t3319028937  ___c00, Vector4_t3319028937  ___c11, Vector4_t3319028937  ___c22, Vector4_t3319028937  ___c33, const RuntimeMethod* method)
{
	UnityARMatrix4x4_t4073345847 * _thisAdjusted = reinterpret_cast<UnityARMatrix4x4_t4073345847 *>(__this + 1);
	UnityARMatrix4x4__ctor_m3835909947(_thisAdjusted, ___c00, ___c11, ___c22, ___c33, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.iOS.UnityARMatrixOps::.ctor()
extern "C"  void UnityARMatrixOps__ctor_m754030179 (UnityARMatrixOps_t2790111267 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector3 UnityEngine.XR.iOS.UnityARMatrixOps::GetPosition(UnityEngine.Matrix4x4)
extern "C"  Vector3_t3722313464  UnityARMatrixOps_GetPosition_m296874797 (RuntimeObject * __this /* static, unused */, Matrix4x4_t1817901843  ___matrix0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityARMatrixOps_GetPosition_m296874797_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Vector4_t3319028937  L_0 = Matrix4x4_GetColumn_m461504848((&___matrix0), 3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector4_t3319028937_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_1 = Vector4_op_Implicit_m1158564884(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		float L_2 = (&V_0)->get_z_3();
		(&V_0)->set_z_3(((-L_2)));
		Vector3_t3722313464  L_3 = V_0;
		return L_3;
	}
}
// UnityEngine.Quaternion UnityEngine.XR.iOS.UnityARMatrixOps::GetRotation(UnityEngine.Matrix4x4)
extern "C"  Quaternion_t2301928331  UnityARMatrixOps_GetRotation_m1192521266 (RuntimeObject * __this /* static, unused */, Matrix4x4_t1817901843  ___matrix0, const RuntimeMethod* method)
{
	Quaternion_t2301928331  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Matrix4x4_t1817901843  L_0 = ___matrix0;
		Quaternion_t2301928331  L_1 = UnityARMatrixOps_QuaternionFromMatrix_m2540065465(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		float L_2 = (&V_0)->get_z_2();
		(&V_0)->set_z_2(((-L_2)));
		float L_3 = (&V_0)->get_w_3();
		(&V_0)->set_w_3(((-L_3)));
		Quaternion_t2301928331  L_4 = V_0;
		return L_4;
	}
}
// UnityEngine.Quaternion UnityEngine.XR.iOS.UnityARMatrixOps::QuaternionFromMatrix(UnityEngine.Matrix4x4)
extern "C"  Quaternion_t2301928331  UnityARMatrixOps_QuaternionFromMatrix_m2540065465 (RuntimeObject * __this /* static, unused */, Matrix4x4_t1817901843  ___m0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityARMatrixOps_QuaternionFromMatrix_m2540065465_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_t2301928331  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Quaternion_t2301928331 ));
		float L_0 = Matrix4x4_get_Item_m134152955((&___m0), 0, 0, /*hidden argument*/NULL);
		float L_1 = Matrix4x4_get_Item_m134152955((&___m0), 1, 1, /*hidden argument*/NULL);
		float L_2 = Matrix4x4_get_Item_m134152955((&___m0), 2, 2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_3 = Mathf_Max_m3146388979(NULL /*static, unused*/, (0.0f), ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)(1.0f), (float)L_0)), (float)L_1)), (float)L_2)), /*hidden argument*/NULL);
		float L_4 = sqrtf(L_3);
		(&V_0)->set_w_3(((float)((float)L_4/(float)(2.0f))));
		float L_5 = Matrix4x4_get_Item_m134152955((&___m0), 0, 0, /*hidden argument*/NULL);
		float L_6 = Matrix4x4_get_Item_m134152955((&___m0), 1, 1, /*hidden argument*/NULL);
		float L_7 = Matrix4x4_get_Item_m134152955((&___m0), 2, 2, /*hidden argument*/NULL);
		float L_8 = Mathf_Max_m3146388979(NULL /*static, unused*/, (0.0f), ((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_add((float)(1.0f), (float)L_5)), (float)L_6)), (float)L_7)), /*hidden argument*/NULL);
		float L_9 = sqrtf(L_8);
		(&V_0)->set_x_0(((float)((float)L_9/(float)(2.0f))));
		float L_10 = Matrix4x4_get_Item_m134152955((&___m0), 0, 0, /*hidden argument*/NULL);
		float L_11 = Matrix4x4_get_Item_m134152955((&___m0), 1, 1, /*hidden argument*/NULL);
		float L_12 = Matrix4x4_get_Item_m134152955((&___m0), 2, 2, /*hidden argument*/NULL);
		float L_13 = Mathf_Max_m3146388979(NULL /*static, unused*/, (0.0f), ((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_10)), (float)L_11)), (float)L_12)), /*hidden argument*/NULL);
		float L_14 = sqrtf(L_13);
		(&V_0)->set_y_1(((float)((float)L_14/(float)(2.0f))));
		float L_15 = Matrix4x4_get_Item_m134152955((&___m0), 0, 0, /*hidden argument*/NULL);
		float L_16 = Matrix4x4_get_Item_m134152955((&___m0), 1, 1, /*hidden argument*/NULL);
		float L_17 = Matrix4x4_get_Item_m134152955((&___m0), 2, 2, /*hidden argument*/NULL);
		float L_18 = Mathf_Max_m3146388979(NULL /*static, unused*/, (0.0f), ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_15)), (float)L_16)), (float)L_17)), /*hidden argument*/NULL);
		float L_19 = sqrtf(L_18);
		(&V_0)->set_z_2(((float)((float)L_19/(float)(2.0f))));
		Quaternion_t2301928331 * L_20 = (&V_0);
		float L_21 = L_20->get_x_0();
		float L_22 = (&V_0)->get_x_0();
		float L_23 = Matrix4x4_get_Item_m134152955((&___m0), 2, 1, /*hidden argument*/NULL);
		float L_24 = Matrix4x4_get_Item_m134152955((&___m0), 1, 2, /*hidden argument*/NULL);
		float L_25 = Mathf_Sign_m3457838305(NULL /*static, unused*/, ((float)il2cpp_codegen_multiply((float)L_22, (float)((float)il2cpp_codegen_subtract((float)L_23, (float)L_24)))), /*hidden argument*/NULL);
		L_20->set_x_0(((float)il2cpp_codegen_multiply((float)L_21, (float)L_25)));
		Quaternion_t2301928331 * L_26 = (&V_0);
		float L_27 = L_26->get_y_1();
		float L_28 = (&V_0)->get_y_1();
		float L_29 = Matrix4x4_get_Item_m134152955((&___m0), 0, 2, /*hidden argument*/NULL);
		float L_30 = Matrix4x4_get_Item_m134152955((&___m0), 2, 0, /*hidden argument*/NULL);
		float L_31 = Mathf_Sign_m3457838305(NULL /*static, unused*/, ((float)il2cpp_codegen_multiply((float)L_28, (float)((float)il2cpp_codegen_subtract((float)L_29, (float)L_30)))), /*hidden argument*/NULL);
		L_26->set_y_1(((float)il2cpp_codegen_multiply((float)L_27, (float)L_31)));
		Quaternion_t2301928331 * L_32 = (&V_0);
		float L_33 = L_32->get_z_2();
		float L_34 = (&V_0)->get_z_2();
		float L_35 = Matrix4x4_get_Item_m134152955((&___m0), 1, 0, /*hidden argument*/NULL);
		float L_36 = Matrix4x4_get_Item_m134152955((&___m0), 0, 1, /*hidden argument*/NULL);
		float L_37 = Mathf_Sign_m3457838305(NULL /*static, unused*/, ((float)il2cpp_codegen_multiply((float)L_34, (float)((float)il2cpp_codegen_subtract((float)L_35, (float)L_36)))), /*hidden argument*/NULL);
		L_32->set_z_2(((float)il2cpp_codegen_multiply((float)L_33, (float)L_37)));
		Quaternion_t2301928331  L_38 = V_0;
		return L_38;
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
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_UnityARSessionNativeInterface__frame_update_m1185891212(internal_UnityARCamera_t3920739388  ___camera0)
{
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Managed method invocation
	UnityARSessionNativeInterface__frame_update_m1185891212(NULL, ___camera0, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_UnityARSessionNativeInterface__ar_tracking_changed_m2779841264(internal_UnityARCamera_t3920739388  ___camera0)
{
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Managed method invocation
	UnityARSessionNativeInterface__ar_tracking_changed_m2779841264(NULL, ___camera0, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_UnityARSessionNativeInterface__anchor_added_m2468825111(UnityARAnchorData_t1157236668  ___anchor0)
{
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Managed method invocation
	UnityARSessionNativeInterface__anchor_added_m2468825111(NULL, ___anchor0, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_UnityARSessionNativeInterface__anchor_updated_m1758166972(UnityARAnchorData_t1157236668  ___anchor0)
{
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Managed method invocation
	UnityARSessionNativeInterface__anchor_updated_m1758166972(NULL, ___anchor0, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_UnityARSessionNativeInterface__anchor_removed_m124050222(UnityARAnchorData_t1157236668  ___anchor0)
{
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Managed method invocation
	UnityARSessionNativeInterface__anchor_removed_m124050222(NULL, ___anchor0, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_UnityARSessionNativeInterface__user_anchor_added_m3126812148(UnityARUserAnchorData_t1976826249  ___anchor0)
{
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Managed method invocation
	UnityARSessionNativeInterface__user_anchor_added_m3126812148(NULL, ___anchor0, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_UnityARSessionNativeInterface__user_anchor_updated_m2680404376(UnityARUserAnchorData_t1976826249  ___anchor0)
{
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Managed method invocation
	UnityARSessionNativeInterface__user_anchor_updated_m2680404376(NULL, ___anchor0, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_UnityARSessionNativeInterface__user_anchor_removed_m3345544012(UnityARUserAnchorData_t1976826249  ___anchor0)
{
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Managed method invocation
	UnityARSessionNativeInterface__user_anchor_removed_m3345544012(NULL, ___anchor0, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_UnityARSessionNativeInterface__ar_session_failed_m3752069079(char* ___error0)
{
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Marshaling of parameter '___error0' to managed representation
	String_t* ____error0_unmarshaled = NULL;
	____error0_unmarshaled = il2cpp_codegen_marshal_string_result(___error0);

	// Managed method invocation
	UnityARSessionNativeInterface__ar_session_failed_m3752069079(NULL, ____error0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_UnityARSessionNativeInterface__ar_session_interrupted_m3485826967()
{
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Managed method invocation
	UnityARSessionNativeInterface__ar_session_interrupted_m3485826967(NULL, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_UnityARSessionNativeInterface__ar_session_interruption_ended_m3467125083()
{
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Managed method invocation
	UnityARSessionNativeInterface__ar_session_interruption_ended_m3467125083(NULL, NULL);

}
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface::.ctor()
extern "C"  void UnityARSessionNativeInterface__ctor_m1227468240 (UnityARSessionNativeInterface_t3929719369 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityARSessionNativeInterface__ctor_m1227468240_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset(&G_B2_0, 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset(&G_B1_0, 0, sizeof(G_B1_0));
	internal_ARFrameUpdate_t3254989823 * G_B4_0 = NULL;
	intptr_t G_B4_1;
	memset(&G_B4_1, 0, sizeof(G_B4_1));
	internal_ARFrameUpdate_t3254989823 * G_B3_0 = NULL;
	intptr_t G_B3_1;
	memset(&G_B3_1, 0, sizeof(G_B3_1));
	ARSessionFailed_t2125002991 * G_B6_0 = NULL;
	internal_ARFrameUpdate_t3254989823 * G_B6_1 = NULL;
	intptr_t G_B6_2;
	memset(&G_B6_2, 0, sizeof(G_B6_2));
	ARSessionFailed_t2125002991 * G_B5_0 = NULL;
	internal_ARFrameUpdate_t3254989823 * G_B5_1 = NULL;
	intptr_t G_B5_2;
	memset(&G_B5_2, 0, sizeof(G_B5_2));
	ARSessionCallback_t3772093212 * G_B8_0 = NULL;
	ARSessionFailed_t2125002991 * G_B8_1 = NULL;
	internal_ARFrameUpdate_t3254989823 * G_B8_2 = NULL;
	intptr_t G_B8_3;
	memset(&G_B8_3, 0, sizeof(G_B8_3));
	ARSessionCallback_t3772093212 * G_B7_0 = NULL;
	ARSessionFailed_t2125002991 * G_B7_1 = NULL;
	internal_ARFrameUpdate_t3254989823 * G_B7_2 = NULL;
	intptr_t G_B7_3;
	memset(&G_B7_3, 0, sizeof(G_B7_3));
	ARSessionCallback_t3772093212 * G_B10_0 = NULL;
	ARSessionCallback_t3772093212 * G_B10_1 = NULL;
	ARSessionFailed_t2125002991 * G_B10_2 = NULL;
	internal_ARFrameUpdate_t3254989823 * G_B10_3 = NULL;
	intptr_t G_B10_4;
	memset(&G_B10_4, 0, sizeof(G_B10_4));
	ARSessionCallback_t3772093212 * G_B9_0 = NULL;
	ARSessionCallback_t3772093212 * G_B9_1 = NULL;
	ARSessionFailed_t2125002991 * G_B9_2 = NULL;
	internal_ARFrameUpdate_t3254989823 * G_B9_3 = NULL;
	intptr_t G_B9_4;
	memset(&G_B9_4, 0, sizeof(G_B9_4));
	intptr_t G_B12_0;
	memset(&G_B12_0, 0, sizeof(G_B12_0));
	intptr_t G_B11_0;
	memset(&G_B11_0, 0, sizeof(G_B11_0));
	internal_ARAnchorAdded_t1565083332 * G_B14_0 = NULL;
	intptr_t G_B14_1;
	memset(&G_B14_1, 0, sizeof(G_B14_1));
	internal_ARAnchorAdded_t1565083332 * G_B13_0 = NULL;
	intptr_t G_B13_1;
	memset(&G_B13_1, 0, sizeof(G_B13_1));
	internal_ARAnchorUpdated_t2645242205 * G_B16_0 = NULL;
	internal_ARAnchorAdded_t1565083332 * G_B16_1 = NULL;
	intptr_t G_B16_2;
	memset(&G_B16_2, 0, sizeof(G_B16_2));
	internal_ARAnchorUpdated_t2645242205 * G_B15_0 = NULL;
	internal_ARAnchorAdded_t1565083332 * G_B15_1 = NULL;
	intptr_t G_B15_2;
	memset(&G_B15_2, 0, sizeof(G_B15_2));
	intptr_t G_B18_0;
	memset(&G_B18_0, 0, sizeof(G_B18_0));
	intptr_t G_B17_0;
	memset(&G_B17_0, 0, sizeof(G_B17_0));
	internal_ARUserAnchorAdded_t3285282493 * G_B20_0 = NULL;
	intptr_t G_B20_1;
	memset(&G_B20_1, 0, sizeof(G_B20_1));
	internal_ARUserAnchorAdded_t3285282493 * G_B19_0 = NULL;
	intptr_t G_B19_1;
	memset(&G_B19_1, 0, sizeof(G_B19_1));
	internal_ARUserAnchorUpdated_t3964727538 * G_B22_0 = NULL;
	internal_ARUserAnchorAdded_t3285282493 * G_B22_1 = NULL;
	intptr_t G_B22_2;
	memset(&G_B22_2, 0, sizeof(G_B22_2));
	internal_ARUserAnchorUpdated_t3964727538 * G_B21_0 = NULL;
	internal_ARUserAnchorAdded_t3285282493 * G_B21_1 = NULL;
	intptr_t G_B21_2;
	memset(&G_B21_2, 0, sizeof(G_B21_2));
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var);
		intptr_t L_0 = UnityARSessionNativeInterface_unity_CreateNativeARSession_m1892455731(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_m_NativeARSession_11(L_0);
		intptr_t L_1 = __this->get_m_NativeARSession_11();
		internal_ARFrameUpdate_t3254989823 * L_2 = ((UnityARSessionNativeInterface_t3929719369_StaticFields*)il2cpp_codegen_static_fields_for(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache0_14();
		G_B1_0 = L_1;
		if (L_2)
		{
			G_B2_0 = L_1;
			goto IL_002f;
		}
	}
	{
		intptr_t L_3 = (intptr_t)UnityARSessionNativeInterface__frame_update_m1185891212_RuntimeMethod_var;
		internal_ARFrameUpdate_t3254989823 * L_4 = (internal_ARFrameUpdate_t3254989823 *)il2cpp_codegen_object_new(internal_ARFrameUpdate_t3254989823_il2cpp_TypeInfo_var);
		internal_ARFrameUpdate__ctor_m2823389890(L_4, NULL, L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var);
		((UnityARSessionNativeInterface_t3929719369_StaticFields*)il2cpp_codegen_static_fields_for(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var))->set_U3CU3Ef__mgU24cache0_14(L_4);
		G_B2_0 = G_B1_0;
	}

IL_002f:
	{
		IL2CPP_RUNTIME_CLASS_INIT(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var);
		internal_ARFrameUpdate_t3254989823 * L_5 = ((UnityARSessionNativeInterface_t3929719369_StaticFields*)il2cpp_codegen_static_fields_for(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache0_14();
		ARSessionFailed_t2125002991 * L_6 = ((UnityARSessionNativeInterface_t3929719369_StaticFields*)il2cpp_codegen_static_fields_for(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache1_15();
		G_B3_0 = L_5;
		G_B3_1 = G_B2_0;
		if (L_6)
		{
			G_B4_0 = L_5;
			G_B4_1 = G_B2_0;
			goto IL_004c;
		}
	}
	{
		intptr_t L_7 = (intptr_t)UnityARSessionNativeInterface__ar_session_failed_m3752069079_RuntimeMethod_var;
		ARSessionFailed_t2125002991 * L_8 = (ARSessionFailed_t2125002991 *)il2cpp_codegen_object_new(ARSessionFailed_t2125002991_il2cpp_TypeInfo_var);
		ARSessionFailed__ctor_m2525034792(L_8, NULL, L_7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var);
		((UnityARSessionNativeInterface_t3929719369_StaticFields*)il2cpp_codegen_static_fields_for(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var))->set_U3CU3Ef__mgU24cache1_15(L_8);
		G_B4_0 = G_B3_0;
		G_B4_1 = G_B3_1;
	}

IL_004c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var);
		ARSessionFailed_t2125002991 * L_9 = ((UnityARSessionNativeInterface_t3929719369_StaticFields*)il2cpp_codegen_static_fields_for(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache1_15();
		ARSessionCallback_t3772093212 * L_10 = ((UnityARSessionNativeInterface_t3929719369_StaticFields*)il2cpp_codegen_static_fields_for(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache2_16();
		G_B5_0 = L_9;
		G_B5_1 = G_B4_0;
		G_B5_2 = G_B4_1;
		if (L_10)
		{
			G_B6_0 = L_9;
			G_B6_1 = G_B4_0;
			G_B6_2 = G_B4_1;
			goto IL_0069;
		}
	}
	{
		intptr_t L_11 = (intptr_t)UnityARSessionNativeInterface__ar_session_interrupted_m3485826967_RuntimeMethod_var;
		ARSessionCallback_t3772093212 * L_12 = (ARSessionCallback_t3772093212 *)il2cpp_codegen_object_new(ARSessionCallback_t3772093212_il2cpp_TypeInfo_var);
		ARSessionCallback__ctor_m1721563304(L_12, NULL, L_11, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var);
		((UnityARSessionNativeInterface_t3929719369_StaticFields*)il2cpp_codegen_static_fields_for(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var))->set_U3CU3Ef__mgU24cache2_16(L_12);
		G_B6_0 = G_B5_0;
		G_B6_1 = G_B5_1;
		G_B6_2 = G_B5_2;
	}

IL_0069:
	{
		IL2CPP_RUNTIME_CLASS_INIT(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var);
		ARSessionCallback_t3772093212 * L_13 = ((UnityARSessionNativeInterface_t3929719369_StaticFields*)il2cpp_codegen_static_fields_for(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache2_16();
		ARSessionCallback_t3772093212 * L_14 = ((UnityARSessionNativeInterface_t3929719369_StaticFields*)il2cpp_codegen_static_fields_for(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache3_17();
		G_B7_0 = L_13;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
		G_B7_3 = G_B6_2;
		if (L_14)
		{
			G_B8_0 = L_13;
			G_B8_1 = G_B6_0;
			G_B8_2 = G_B6_1;
			G_B8_3 = G_B6_2;
			goto IL_0086;
		}
	}
	{
		intptr_t L_15 = (intptr_t)UnityARSessionNativeInterface__ar_session_interruption_ended_m3467125083_RuntimeMethod_var;
		ARSessionCallback_t3772093212 * L_16 = (ARSessionCallback_t3772093212 *)il2cpp_codegen_object_new(ARSessionCallback_t3772093212_il2cpp_TypeInfo_var);
		ARSessionCallback__ctor_m1721563304(L_16, NULL, L_15, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var);
		((UnityARSessionNativeInterface_t3929719369_StaticFields*)il2cpp_codegen_static_fields_for(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var))->set_U3CU3Ef__mgU24cache3_17(L_16);
		G_B8_0 = G_B7_0;
		G_B8_1 = G_B7_1;
		G_B8_2 = G_B7_2;
		G_B8_3 = G_B7_3;
	}

IL_0086:
	{
		IL2CPP_RUNTIME_CLASS_INIT(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var);
		ARSessionCallback_t3772093212 * L_17 = ((UnityARSessionNativeInterface_t3929719369_StaticFields*)il2cpp_codegen_static_fields_for(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache3_17();
		internal_ARSessionTrackingChanged_t1988849735 * L_18 = ((UnityARSessionNativeInterface_t3929719369_StaticFields*)il2cpp_codegen_static_fields_for(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache4_18();
		G_B9_0 = L_17;
		G_B9_1 = G_B8_0;
		G_B9_2 = G_B8_1;
		G_B9_3 = G_B8_2;
		G_B9_4 = G_B8_3;
		if (L_18)
		{
			G_B10_0 = L_17;
			G_B10_1 = G_B8_0;
			G_B10_2 = G_B8_1;
			G_B10_3 = G_B8_2;
			G_B10_4 = G_B8_3;
			goto IL_00a3;
		}
	}
	{
		intptr_t L_19 = (intptr_t)UnityARSessionNativeInterface__ar_tracking_changed_m2779841264_RuntimeMethod_var;
		internal_ARSessionTrackingChanged_t1988849735 * L_20 = (internal_ARSessionTrackingChanged_t1988849735 *)il2cpp_codegen_object_new(internal_ARSessionTrackingChanged_t1988849735_il2cpp_TypeInfo_var);
		internal_ARSessionTrackingChanged__ctor_m3350968246(L_20, NULL, L_19, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var);
		((UnityARSessionNativeInterface_t3929719369_StaticFields*)il2cpp_codegen_static_fields_for(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var))->set_U3CU3Ef__mgU24cache4_18(L_20);
		G_B10_0 = G_B9_0;
		G_B10_1 = G_B9_1;
		G_B10_2 = G_B9_2;
		G_B10_3 = G_B9_3;
		G_B10_4 = G_B9_4;
	}

IL_00a3:
	{
		IL2CPP_RUNTIME_CLASS_INIT(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var);
		internal_ARSessionTrackingChanged_t1988849735 * L_21 = ((UnityARSessionNativeInterface_t3929719369_StaticFields*)il2cpp_codegen_static_fields_for(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache4_18();
		UnityARSessionNativeInterface_session_SetSessionCallbacks_m625576194(NULL /*static, unused*/, G_B10_4, G_B10_3, G_B10_2, G_B10_1, G_B10_0, L_21, /*hidden argument*/NULL);
		intptr_t L_22 = __this->get_m_NativeARSession_11();
		internal_ARAnchorAdded_t1565083332 * L_23 = ((UnityARSessionNativeInterface_t3929719369_StaticFields*)il2cpp_codegen_static_fields_for(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache5_19();
		G_B11_0 = L_22;
		if (L_23)
		{
			G_B12_0 = L_22;
			goto IL_00cb;
		}
	}
	{
		intptr_t L_24 = (intptr_t)UnityARSessionNativeInterface__anchor_added_m2468825111_RuntimeMethod_var;
		internal_ARAnchorAdded_t1565083332 * L_25 = (internal_ARAnchorAdded_t1565083332 *)il2cpp_codegen_object_new(internal_ARAnchorAdded_t1565083332_il2cpp_TypeInfo_var);
		internal_ARAnchorAdded__ctor_m274816883(L_25, NULL, L_24, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var);
		((UnityARSessionNativeInterface_t3929719369_StaticFields*)il2cpp_codegen_static_fields_for(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var))->set_U3CU3Ef__mgU24cache5_19(L_25);
		G_B12_0 = G_B11_0;
	}

IL_00cb:
	{
		IL2CPP_RUNTIME_CLASS_INIT(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var);
		internal_ARAnchorAdded_t1565083332 * L_26 = ((UnityARSessionNativeInterface_t3929719369_StaticFields*)il2cpp_codegen_static_fields_for(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache5_19();
		internal_ARAnchorUpdated_t2645242205 * L_27 = ((UnityARSessionNativeInterface_t3929719369_StaticFields*)il2cpp_codegen_static_fields_for(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache6_20();
		G_B13_0 = L_26;
		G_B13_1 = G_B12_0;
		if (L_27)
		{
			G_B14_0 = L_26;
			G_B14_1 = G_B12_0;
			goto IL_00e8;
		}
	}
	{
		intptr_t L_28 = (intptr_t)UnityARSessionNativeInterface__anchor_updated_m1758166972_RuntimeMethod_var;
		internal_ARAnchorUpdated_t2645242205 * L_29 = (internal_ARAnchorUpdated_t2645242205 *)il2cpp_codegen_object_new(internal_ARAnchorUpdated_t2645242205_il2cpp_TypeInfo_var);
		internal_ARAnchorUpdated__ctor_m1065112067(L_29, NULL, L_28, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var);
		((UnityARSessionNativeInterface_t3929719369_StaticFields*)il2cpp_codegen_static_fields_for(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var))->set_U3CU3Ef__mgU24cache6_20(L_29);
		G_B14_0 = G_B13_0;
		G_B14_1 = G_B13_1;
	}

IL_00e8:
	{
		IL2CPP_RUNTIME_CLASS_INIT(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var);
		internal_ARAnchorUpdated_t2645242205 * L_30 = ((UnityARSessionNativeInterface_t3929719369_StaticFields*)il2cpp_codegen_static_fields_for(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache6_20();
		internal_ARAnchorRemoved_t3371657877 * L_31 = ((UnityARSessionNativeInterface_t3929719369_StaticFields*)il2cpp_codegen_static_fields_for(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache7_21();
		G_B15_0 = L_30;
		G_B15_1 = G_B14_0;
		G_B15_2 = G_B14_1;
		if (L_31)
		{
			G_B16_0 = L_30;
			G_B16_1 = G_B14_0;
			G_B16_2 = G_B14_1;
			goto IL_0105;
		}
	}
	{
		intptr_t L_32 = (intptr_t)UnityARSessionNativeInterface__anchor_removed_m124050222_RuntimeMethod_var;
		internal_ARAnchorRemoved_t3371657877 * L_33 = (internal_ARAnchorRemoved_t3371657877 *)il2cpp_codegen_object_new(internal_ARAnchorRemoved_t3371657877_il2cpp_TypeInfo_var);
		internal_ARAnchorRemoved__ctor_m3323216282(L_33, NULL, L_32, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var);
		((UnityARSessionNativeInterface_t3929719369_StaticFields*)il2cpp_codegen_static_fields_for(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var))->set_U3CU3Ef__mgU24cache7_21(L_33);
		G_B16_0 = G_B15_0;
		G_B16_1 = G_B15_1;
		G_B16_2 = G_B15_2;
	}

IL_0105:
	{
		IL2CPP_RUNTIME_CLASS_INIT(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var);
		internal_ARAnchorRemoved_t3371657877 * L_34 = ((UnityARSessionNativeInterface_t3929719369_StaticFields*)il2cpp_codegen_static_fields_for(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache7_21();
		UnityARSessionNativeInterface_session_SetPlaneAnchorCallbacks_m849333665(NULL /*static, unused*/, G_B16_2, G_B16_1, G_B16_0, L_34, /*hidden argument*/NULL);
		intptr_t L_35 = __this->get_m_NativeARSession_11();
		internal_ARUserAnchorAdded_t3285282493 * L_36 = ((UnityARSessionNativeInterface_t3929719369_StaticFields*)il2cpp_codegen_static_fields_for(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache8_22();
		G_B17_0 = L_35;
		if (L_36)
		{
			G_B18_0 = L_35;
			goto IL_012d;
		}
	}
	{
		intptr_t L_37 = (intptr_t)UnityARSessionNativeInterface__user_anchor_added_m3126812148_RuntimeMethod_var;
		internal_ARUserAnchorAdded_t3285282493 * L_38 = (internal_ARUserAnchorAdded_t3285282493 *)il2cpp_codegen_object_new(internal_ARUserAnchorAdded_t3285282493_il2cpp_TypeInfo_var);
		internal_ARUserAnchorAdded__ctor_m1954806258(L_38, NULL, L_37, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var);
		((UnityARSessionNativeInterface_t3929719369_StaticFields*)il2cpp_codegen_static_fields_for(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var))->set_U3CU3Ef__mgU24cache8_22(L_38);
		G_B18_0 = G_B17_0;
	}

IL_012d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var);
		internal_ARUserAnchorAdded_t3285282493 * L_39 = ((UnityARSessionNativeInterface_t3929719369_StaticFields*)il2cpp_codegen_static_fields_for(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache8_22();
		internal_ARUserAnchorUpdated_t3964727538 * L_40 = ((UnityARSessionNativeInterface_t3929719369_StaticFields*)il2cpp_codegen_static_fields_for(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache9_23();
		G_B19_0 = L_39;
		G_B19_1 = G_B18_0;
		if (L_40)
		{
			G_B20_0 = L_39;
			G_B20_1 = G_B18_0;
			goto IL_014a;
		}
	}
	{
		intptr_t L_41 = (intptr_t)UnityARSessionNativeInterface__user_anchor_updated_m2680404376_RuntimeMethod_var;
		internal_ARUserAnchorUpdated_t3964727538 * L_42 = (internal_ARUserAnchorUpdated_t3964727538 *)il2cpp_codegen_object_new(internal_ARUserAnchorUpdated_t3964727538_il2cpp_TypeInfo_var);
		internal_ARUserAnchorUpdated__ctor_m1485411968(L_42, NULL, L_41, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var);
		((UnityARSessionNativeInterface_t3929719369_StaticFields*)il2cpp_codegen_static_fields_for(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var))->set_U3CU3Ef__mgU24cache9_23(L_42);
		G_B20_0 = G_B19_0;
		G_B20_1 = G_B19_1;
	}

IL_014a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var);
		internal_ARUserAnchorUpdated_t3964727538 * L_43 = ((UnityARSessionNativeInterface_t3929719369_StaticFields*)il2cpp_codegen_static_fields_for(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache9_23();
		internal_ARUserAnchorRemoved_t386858594 * L_44 = ((UnityARSessionNativeInterface_t3929719369_StaticFields*)il2cpp_codegen_static_fields_for(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cacheA_24();
		G_B21_0 = L_43;
		G_B21_1 = G_B20_0;
		G_B21_2 = G_B20_1;
		if (L_44)
		{
			G_B22_0 = L_43;
			G_B22_1 = G_B20_0;
			G_B22_2 = G_B20_1;
			goto IL_0167;
		}
	}
	{
		intptr_t L_45 = (intptr_t)UnityARSessionNativeInterface__user_anchor_removed_m3345544012_RuntimeMethod_var;
		internal_ARUserAnchorRemoved_t386858594 * L_46 = (internal_ARUserAnchorRemoved_t386858594 *)il2cpp_codegen_object_new(internal_ARUserAnchorRemoved_t386858594_il2cpp_TypeInfo_var);
		internal_ARUserAnchorRemoved__ctor_m3250994366(L_46, NULL, L_45, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var);
		((UnityARSessionNativeInterface_t3929719369_StaticFields*)il2cpp_codegen_static_fields_for(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var))->set_U3CU3Ef__mgU24cacheA_24(L_46);
		G_B22_0 = G_B21_0;
		G_B22_1 = G_B21_1;
		G_B22_2 = G_B21_2;
	}

IL_0167:
	{
		IL2CPP_RUNTIME_CLASS_INIT(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var);
		internal_ARUserAnchorRemoved_t386858594 * L_47 = ((UnityARSessionNativeInterface_t3929719369_StaticFields*)il2cpp_codegen_static_fields_for(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cacheA_24();
		UnityARSessionNativeInterface_session_SetUserAnchorCallbacks_m2655011497(NULL /*static, unused*/, G_B22_2, G_B22_1, G_B22_0, L_47, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface::add_ARFrameUpdatedEvent(UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARFrameUpdate)
extern "C"  void UnityARSessionNativeInterface_add_ARFrameUpdatedEvent_m3366057771 (RuntimeObject * __this /* static, unused */, ARFrameUpdate_t1157215840 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityARSessionNativeInterface_add_ARFrameUpdatedEvent_m3366057771_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ARFrameUpdate_t1157215840 * V_0 = NULL;
	ARFrameUpdate_t1157215840 * V_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var);
		ARFrameUpdate_t1157215840 * L_0 = ((UnityARSessionNativeInterface_t3929719369_StaticFields*)il2cpp_codegen_static_fields_for(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var))->get_ARFrameUpdatedEvent_0();
		V_0 = L_0;
	}

IL_0006:
	{
		ARFrameUpdate_t1157215840 * L_1 = V_0;
		V_1 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var);
		ARFrameUpdate_t1157215840 * L_2 = V_1;
		ARFrameUpdate_t1157215840 * L_3 = ___value0;
		Delegate_t1188392813 * L_4 = Delegate_Combine_m1859655160(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		ARFrameUpdate_t1157215840 * L_5 = V_0;
		ARFrameUpdate_t1157215840 * L_6 = InterlockedCompareExchangeImpl<ARFrameUpdate_t1157215840 *>((((UnityARSessionNativeInterface_t3929719369_StaticFields*)il2cpp_codegen_static_fields_for(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var))->get_address_of_ARFrameUpdatedEvent_0()), ((ARFrameUpdate_t1157215840 *)CastclassSealed((RuntimeObject*)L_4, ARFrameUpdate_t1157215840_il2cpp_TypeInfo_var)), L_5);
		V_0 = L_6;
		ARFrameUpdate_t1157215840 * L_7 = V_0;
		ARFrameUpdate_t1157215840 * L_8 = V_1;
		if ((!(((RuntimeObject*)(ARFrameUpdate_t1157215840 *)L_7) == ((RuntimeObject*)(ARFrameUpdate_t1157215840 *)L_8))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface::remove_ARFrameUpdatedEvent(UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARFrameUpdate)
extern "C"  void UnityARSessionNativeInterface_remove_ARFrameUpdatedEvent_m772523965 (RuntimeObject * __this /* static, unused */, ARFrameUpdate_t1157215840 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityARSessionNativeInterface_remove_ARFrameUpdatedEvent_m772523965_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ARFrameUpdate_t1157215840 * V_0 = NULL;
	ARFrameUpdate_t1157215840 * V_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var);
		ARFrameUpdate_t1157215840 * L_0 = ((UnityARSessionNativeInterface_t3929719369_StaticFields*)il2cpp_codegen_static_fields_for(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var))->get_ARFrameUpdatedEvent_0();
		V_0 = L_0;
	}

IL_0006:
	{
		ARFrameUpdate_t1157215840 * L_1 = V_0;
		V_1 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var);
		ARFrameUpdate_t1157215840 * L_2 = V_1;
		ARFrameUpdate_t1157215840 * L_3 = ___value0;
		Delegate_t1188392813 * L_4 = Delegate_Remove_m334097152(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		ARFrameUpdate_t1157215840 * L_5 = V_0;
		ARFrameUpdate_t1157215840 * L_6 = InterlockedCompareExchangeImpl<ARFrameUpdate_t1157215840 *>((((UnityARSessionNativeInterface_t3929719369_StaticFields*)il2cpp_codegen_static_fields_for(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var))->get_address_of_ARFrameUpdatedEvent_0()), ((ARFrameUpdate_t1157215840 *)CastclassSealed((RuntimeObject*)L_4, ARFrameUpdate_t1157215840_il2cpp_TypeInfo_var)), L_5);
		V_0 = L_6;
		ARFrameUpdate_t1157215840 * L_7 = V_0;
		ARFrameUpdate_t1157215840 * L_8 = V_1;
		if ((!(((RuntimeObject*)(ARFrameUpdate_t1157215840 *)L_7) == ((RuntimeObject*)(ARFrameUpdate_t1157215840 *)L_8))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface::add_ARAnchorAddedEvent(UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARAnchorAdded)
extern "C"  void UnityARSessionNativeInterface_add_ARAnchorAddedEvent_m922239177 (RuntimeObject * __this /* static, unused */, ARAnchorAdded_t1608557165 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityARSessionNativeInterface_add_ARAnchorAddedEvent_m922239177_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ARAnchorAdded_t1608557165 * V_0 = NULL;
	ARAnchorAdded_t1608557165 * V_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var);
		ARAnchorAdded_t1608557165 * L_0 = ((UnityARSessionNativeInterface_t3929719369_StaticFields*)il2cpp_codegen_static_fields_for(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var))->get_ARAnchorAddedEvent_1();
		V_0 = L_0;
	}

IL_0006:
	{
		ARAnchorAdded_t1608557165 * L_1 = V_0;
		V_1 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var);
		ARAnchorAdded_t1608557165 * L_2 = V_1;
		ARAnchorAdded_t1608557165 * L_3 = ___value0;
		Delegate_t1188392813 * L_4 = Delegate_Combine_m1859655160(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		ARAnchorAdded_t1608557165 * L_5 = V_0;
		ARAnchorAdded_t1608557165 * L_6 = InterlockedCompareExchangeImpl<ARAnchorAdded_t1608557165 *>((((UnityARSessionNativeInterface_t3929719369_StaticFields*)il2cpp_codegen_static_fields_for(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var))->get_address_of_ARAnchorAddedEvent_1()), ((ARAnchorAdded_t1608557165 *)CastclassSealed((RuntimeObject*)L_4, ARAnchorAdded_t1608557165_il2cpp_TypeInfo_var)), L_5);
		V_0 = L_6;
		ARAnchorAdded_t1608557165 * L_7 = V_0;
		ARAnchorAdded_t1608557165 * L_8 = V_1;
		if ((!(((RuntimeObject*)(ARAnchorAdded_t1608557165 *)L_7) == ((RuntimeObject*)(ARAnchorAdded_t1608557165 *)L_8))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface::remove_ARAnchorAddedEvent(UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARAnchorAdded)
extern "C"  void UnityARSessionNativeInterface_remove_ARAnchorAddedEvent_m2374006692 (RuntimeObject * __this /* static, unused */, ARAnchorAdded_t1608557165 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityARSessionNativeInterface_remove_ARAnchorAddedEvent_m2374006692_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ARAnchorAdded_t1608557165 * V_0 = NULL;
	ARAnchorAdded_t1608557165 * V_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var);
		ARAnchorAdded_t1608557165 * L_0 = ((UnityARSessionNativeInterface_t3929719369_StaticFields*)il2cpp_codegen_static_fields_for(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var))->get_ARAnchorAddedEvent_1();
		V_0 = L_0;
	}

IL_0006:
	{
		ARAnchorAdded_t1608557165 * L_1 = V_0;
		V_1 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var);
		ARAnchorAdded_t1608557165 * L_2 = V_1;
		ARAnchorAdded_t1608557165 * L_3 = ___value0;
		Delegate_t1188392813 * L_4 = Delegate_Remove_m334097152(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		ARAnchorAdded_t1608557165 * L_5 = V_0;
		ARAnchorAdded_t1608557165 * L_6 = InterlockedCompareExchangeImpl<ARAnchorAdded_t1608557165 *>((((UnityARSessionNativeInterface_t3929719369_StaticFields*)il2cpp_codegen_static_fields_for(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var))->get_address_of_ARAnchorAddedEvent_1()), ((ARAnchorAdded_t1608557165 *)CastclassSealed((RuntimeObject*)L_4, ARAnchorAdded_t1608557165_il2cpp_TypeInfo_var)), L_5);
		V_0 = L_6;
		ARAnchorAdded_t1608557165 * L_7 = V_0;
		ARAnchorAdded_t1608557165 * L_8 = V_1;
		if ((!(((RuntimeObject*)(ARAnchorAdded_t1608557165 *)L_7) == ((RuntimeObject*)(ARAnchorAdded_t1608557165 *)L_8))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface::add_ARAnchorUpdatedEvent(UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARAnchorUpdated)
extern "C"  void UnityARSessionNativeInterface_add_ARAnchorUpdatedEvent_m421321882 (RuntimeObject * __this /* static, unused */, ARAnchorUpdated_t3113222537 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityARSessionNativeInterface_add_ARAnchorUpdatedEvent_m421321882_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ARAnchorUpdated_t3113222537 * V_0 = NULL;
	ARAnchorUpdated_t3113222537 * V_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var);
		ARAnchorUpdated_t3113222537 * L_0 = ((UnityARSessionNativeInterface_t3929719369_StaticFields*)il2cpp_codegen_static_fields_for(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var))->get_ARAnchorUpdatedEvent_2();
		V_0 = L_0;
	}

IL_0006:
	{
		ARAnchorUpdated_t3113222537 * L_1 = V_0;
		V_1 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var);
		ARAnchorUpdated_t3113222537 * L_2 = V_1;
		ARAnchorUpdated_t3113222537 * L_3 = ___value0;
		Delegate_t1188392813 * L_4 = Delegate_Combine_m1859655160(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		ARAnchorUpdated_t3113222537 * L_5 = V_0;
		ARAnchorUpdated_t3113222537 * L_6 = InterlockedCompareExchangeImpl<ARAnchorUpdated_t3113222537 *>((((UnityARSessionNativeInterface_t3929719369_StaticFields*)il2cpp_codegen_static_fields_for(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var))->get_address_of_ARAnchorUpdatedEvent_2()), ((ARAnchorUpdated_t3113222537 *)CastclassSealed((RuntimeObject*)L_4, ARAnchorUpdated_t3113222537_il2cpp_TypeInfo_var)), L_5);
		V_0 = L_6;
		ARAnchorUpdated_t3113222537 * L_7 = V_0;
		ARAnchorUpdated_t3113222537 * L_8 = V_1;
		if ((!(((RuntimeObject*)(ARAnchorUpdated_t3113222537 *)L_7) == ((RuntimeObject*)(ARAnchorUpdated_t3113222537 *)L_8))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface::remove_ARAnchorUpdatedEvent(UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARAnchorUpdated)
extern "C"  void UnityARSessionNativeInterface_remove_ARAnchorUpdatedEvent_m4118655981 (RuntimeObject * __this /* static, unused */, ARAnchorUpdated_t3113222537 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityARSessionNativeInterface_remove_ARAnchorUpdatedEvent_m4118655981_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ARAnchorUpdated_t3113222537 * V_0 = NULL;
	ARAnchorUpdated_t3113222537 * V_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var);
		ARAnchorUpdated_t3113222537 * L_0 = ((UnityARSessionNativeInterface_t3929719369_StaticFields*)il2cpp_codegen_static_fields_for(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var))->get_ARAnchorUpdatedEvent_2();
		V_0 = L_0;
	}

IL_0006:
	{
		ARAnchorUpdated_t3113222537 * L_1 = V_0;
		V_1 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var);
		ARAnchorUpdated_t3113222537 * L_2 = V_1;
		ARAnchorUpdated_t3113222537 * L_3 = ___value0;
		Delegate_t1188392813 * L_4 = Delegate_Remove_m334097152(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		ARAnchorUpdated_t3113222537 * L_5 = V_0;
		ARAnchorUpdated_t3113222537 * L_6 = InterlockedCompareExchangeImpl<ARAnchorUpdated_t3113222537 *>((((UnityARSessionNativeInterface_t3929719369_StaticFields*)il2cpp_codegen_static_fields_for(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var))->get_address_of_ARAnchorUpdatedEvent_2()), ((ARAnchorUpdated_t3113222537 *)CastclassSealed((RuntimeObject*)L_4, ARAnchorUpdated_t3113222537_il2cpp_TypeInfo_var)), L_5);
		V_0 = L_6;
		ARAnchorUpdated_t3113222537 * L_7 = V_0;
		ARAnchorUpdated_t3113222537 * L_8 = V_1;
		if ((!(((RuntimeObject*)(ARAnchorUpdated_t3113222537 *)L_7) == ((RuntimeObject*)(ARAnchorUpdated_t3113222537 *)L_8))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface::add_ARAnchorRemovedEvent(UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARAnchorRemoved)
extern "C"  void UnityARSessionNativeInterface_add_ARAnchorRemovedEvent_m3581175116 (RuntimeObject * __this /* static, unused */, ARAnchorRemoved_t4030593004 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityARSessionNativeInterface_add_ARAnchorRemovedEvent_m3581175116_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ARAnchorRemoved_t4030593004 * V_0 = NULL;
	ARAnchorRemoved_t4030593004 * V_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var);
		ARAnchorRemoved_t4030593004 * L_0 = ((UnityARSessionNativeInterface_t3929719369_StaticFields*)il2cpp_codegen_static_fields_for(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var))->get_ARAnchorRemovedEvent_3();
		V_0 = L_0;
	}

IL_0006:
	{
		ARAnchorRemoved_t4030593004 * L_1 = V_0;
		V_1 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var);
		ARAnchorRemoved_t4030593004 * L_2 = V_1;
		ARAnchorRemoved_t4030593004 * L_3 = ___value0;
		Delegate_t1188392813 * L_4 = Delegate_Combine_m1859655160(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		ARAnchorRemoved_t4030593004 * L_5 = V_0;
		ARAnchorRemoved_t4030593004 * L_6 = InterlockedCompareExchangeImpl<ARAnchorRemoved_t4030593004 *>((((UnityARSessionNativeInterface_t3929719369_StaticFields*)il2cpp_codegen_static_fields_for(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var))->get_address_of_ARAnchorRemovedEvent_3()), ((ARAnchorRemoved_t4030593004 *)CastclassSealed((RuntimeObject*)L_4, ARAnchorRemoved_t4030593004_il2cpp_TypeInfo_var)), L_5);
		V_0 = L_6;
		ARAnchorRemoved_t4030593004 * L_7 = V_0;
		ARAnchorRemoved_t4030593004 * L_8 = V_1;
		if ((!(((RuntimeObject*)(ARAnchorRemoved_t4030593004 *)L_7) == ((RuntimeObject*)(ARAnchorRemoved_t4030593004 *)L_8))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface::remove_ARAnchorRemovedEvent(UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARAnchorRemoved)
extern "C"  void UnityARSessionNativeInterface_remove_ARAnchorRemovedEvent_m2910582281 (RuntimeObject * __this /* static, unused */, ARAnchorRemoved_t4030593004 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityARSessionNativeInterface_remove_ARAnchorRemovedEvent_m2910582281_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ARAnchorRemoved_t4030593004 * V_0 = NULL;
	ARAnchorRemoved_t4030593004 * V_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var);
		ARAnchorRemoved_t4030593004 * L_0 = ((UnityARSessionNativeInterface_t3929719369_StaticFields*)il2cpp_codegen_static_fields_for(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var))->get_ARAnchorRemovedEvent_3();
		V_0 = L_0;
	}

IL_0006:
	{
		ARAnchorRemoved_t4030593004 * L_1 = V_0;
		V_1 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var);
		ARAnchorRemoved_t4030593004 * L_2 = V_1;
		ARAnchorRemoved_t4030593004 * L_3 = ___value0;
		Delegate_t1188392813 * L_4 = Delegate_Remove_m334097152(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		ARAnchorRemoved_t4030593004 * L_5 = V_0;
		ARAnchorRemoved_t4030593004 * L_6 = InterlockedCompareExchangeImpl<ARAnchorRemoved_t4030593004 *>((((UnityARSessionNativeInterface_t3929719369_StaticFields*)il2cpp_codegen_static_fields_for(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var))->get_address_of_ARAnchorRemovedEvent_3()), ((ARAnchorRemoved_t4030593004 *)CastclassSealed((RuntimeObject*)L_4, ARAnchorRemoved_t4030593004_il2cpp_TypeInfo_var)), L_5);
		V_0 = L_6;
		ARAnchorRemoved_t4030593004 * L_7 = V_0;
		ARAnchorRemoved_t4030593004 * L_8 = V_1;
		if ((!(((RuntimeObject*)(ARAnchorRemoved_t4030593004 *)L_7) == ((RuntimeObject*)(ARAnchorRemoved_t4030593004 *)L_8))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface::add_ARUserAnchorAddedEvent(UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARUserAnchorAdded)
extern "C"  void UnityARSessionNativeInterface_add_ARUserAnchorAddedEvent_m1848350236 (RuntimeObject * __this /* static, unused */, ARUserAnchorAdded_t1851120876 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityARSessionNativeInterface_add_ARUserAnchorAddedEvent_m1848350236_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ARUserAnchorAdded_t1851120876 * V_0 = NULL;
	ARUserAnchorAdded_t1851120876 * V_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var);
		ARUserAnchorAdded_t1851120876 * L_0 = ((UnityARSessionNativeInterface_t3929719369_StaticFields*)il2cpp_codegen_static_fields_for(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var))->get_ARUserAnchorAddedEvent_4();
		V_0 = L_0;
	}

IL_0006:
	{
		ARUserAnchorAdded_t1851120876 * L_1 = V_0;
		V_1 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var);
		ARUserAnchorAdded_t1851120876 * L_2 = V_1;
		ARUserAnchorAdded_t1851120876 * L_3 = ___value0;
		Delegate_t1188392813 * L_4 = Delegate_Combine_m1859655160(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		ARUserAnchorAdded_t1851120876 * L_5 = V_0;
		ARUserAnchorAdded_t1851120876 * L_6 = InterlockedCompareExchangeImpl<ARUserAnchorAdded_t1851120876 *>((((UnityARSessionNativeInterface_t3929719369_StaticFields*)il2cpp_codegen_static_fields_for(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var))->get_address_of_ARUserAnchorAddedEvent_4()), ((ARUserAnchorAdded_t1851120876 *)CastclassSealed((RuntimeObject*)L_4, ARUserAnchorAdded_t1851120876_il2cpp_TypeInfo_var)), L_5);
		V_0 = L_6;
		ARUserAnchorAdded_t1851120876 * L_7 = V_0;
		ARUserAnchorAdded_t1851120876 * L_8 = V_1;
		if ((!(((RuntimeObject*)(ARUserAnchorAdded_t1851120876 *)L_7) == ((RuntimeObject*)(ARUserAnchorAdded_t1851120876 *)L_8))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface::remove_ARUserAnchorAddedEvent(UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARUserAnchorAdded)
extern "C"  void UnityARSessionNativeInterface_remove_ARUserAnchorAddedEvent_m1231012938 (RuntimeObject * __this /* static, unused */, ARUserAnchorAdded_t1851120876 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityARSessionNativeInterface_remove_ARUserAnchorAddedEvent_m1231012938_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ARUserAnchorAdded_t1851120876 * V_0 = NULL;
	ARUserAnchorAdded_t1851120876 * V_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var);
		ARUserAnchorAdded_t1851120876 * L_0 = ((UnityARSessionNativeInterface_t3929719369_StaticFields*)il2cpp_codegen_static_fields_for(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var))->get_ARUserAnchorAddedEvent_4();
		V_0 = L_0;
	}

IL_0006:
	{
		ARUserAnchorAdded_t1851120876 * L_1 = V_0;
		V_1 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var);
		ARUserAnchorAdded_t1851120876 * L_2 = V_1;
		ARUserAnchorAdded_t1851120876 * L_3 = ___value0;
		Delegate_t1188392813 * L_4 = Delegate_Remove_m334097152(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		ARUserAnchorAdded_t1851120876 * L_5 = V_0;
		ARUserAnchorAdded_t1851120876 * L_6 = InterlockedCompareExchangeImpl<ARUserAnchorAdded_t1851120876 *>((((UnityARSessionNativeInterface_t3929719369_StaticFields*)il2cpp_codegen_static_fields_for(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var))->get_address_of_ARUserAnchorAddedEvent_4()), ((ARUserAnchorAdded_t1851120876 *)CastclassSealed((RuntimeObject*)L_4, ARUserAnchorAdded_t1851120876_il2cpp_TypeInfo_var)), L_5);
		V_0 = L_6;
		ARUserAnchorAdded_t1851120876 * L_7 = V_0;
		ARUserAnchorAdded_t1851120876 * L_8 = V_1;
		if ((!(((RuntimeObject*)(ARUserAnchorAdded_t1851120876 *)L_7) == ((RuntimeObject*)(ARUserAnchorAdded_t1851120876 *)L_8))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface::add_ARUserAnchorUpdatedEvent(UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARUserAnchorUpdated)
extern "C"  void UnityARSessionNativeInterface_add_ARUserAnchorUpdatedEvent_m3620938119 (RuntimeObject * __this /* static, unused */, ARUserAnchorUpdated_t4007601678 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityARSessionNativeInterface_add_ARUserAnchorUpdatedEvent_m3620938119_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ARUserAnchorUpdated_t4007601678 * V_0 = NULL;
	ARUserAnchorUpdated_t4007601678 * V_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var);
		ARUserAnchorUpdated_t4007601678 * L_0 = ((UnityARSessionNativeInterface_t3929719369_StaticFields*)il2cpp_codegen_static_fields_for(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var))->get_ARUserAnchorUpdatedEvent_5();
		V_0 = L_0;
	}

IL_0006:
	{
		ARUserAnchorUpdated_t4007601678 * L_1 = V_0;
		V_1 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var);
		ARUserAnchorUpdated_t4007601678 * L_2 = V_1;
		ARUserAnchorUpdated_t4007601678 * L_3 = ___value0;
		Delegate_t1188392813 * L_4 = Delegate_Combine_m1859655160(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		ARUserAnchorUpdated_t4007601678 * L_5 = V_0;
		ARUserAnchorUpdated_t4007601678 * L_6 = InterlockedCompareExchangeImpl<ARUserAnchorUpdated_t4007601678 *>((((UnityARSessionNativeInterface_t3929719369_StaticFields*)il2cpp_codegen_static_fields_for(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var))->get_address_of_ARUserAnchorUpdatedEvent_5()), ((ARUserAnchorUpdated_t4007601678 *)CastclassSealed((RuntimeObject*)L_4, ARUserAnchorUpdated_t4007601678_il2cpp_TypeInfo_var)), L_5);
		V_0 = L_6;
		ARUserAnchorUpdated_t4007601678 * L_7 = V_0;
		ARUserAnchorUpdated_t4007601678 * L_8 = V_1;
		if ((!(((RuntimeObject*)(ARUserAnchorUpdated_t4007601678 *)L_7) == ((RuntimeObject*)(ARUserAnchorUpdated_t4007601678 *)L_8))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface::remove_ARUserAnchorUpdatedEvent(UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARUserAnchorUpdated)
extern "C"  void UnityARSessionNativeInterface_remove_ARUserAnchorUpdatedEvent_m2181757746 (RuntimeObject * __this /* static, unused */, ARUserAnchorUpdated_t4007601678 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityARSessionNativeInterface_remove_ARUserAnchorUpdatedEvent_m2181757746_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ARUserAnchorUpdated_t4007601678 * V_0 = NULL;
	ARUserAnchorUpdated_t4007601678 * V_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var);
		ARUserAnchorUpdated_t4007601678 * L_0 = ((UnityARSessionNativeInterface_t3929719369_StaticFields*)il2cpp_codegen_static_fields_for(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var))->get_ARUserAnchorUpdatedEvent_5();
		V_0 = L_0;
	}

IL_0006:
	{
		ARUserAnchorUpdated_t4007601678 * L_1 = V_0;
		V_1 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var);
		ARUserAnchorUpdated_t4007601678 * L_2 = V_1;
		ARUserAnchorUpdated_t4007601678 * L_3 = ___value0;
		Delegate_t1188392813 * L_4 = Delegate_Remove_m334097152(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		ARUserAnchorUpdated_t4007601678 * L_5 = V_0;
		ARUserAnchorUpdated_t4007601678 * L_6 = InterlockedCompareExchangeImpl<ARUserAnchorUpdated_t4007601678 *>((((UnityARSessionNativeInterface_t3929719369_StaticFields*)il2cpp_codegen_static_fields_for(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var))->get_address_of_ARUserAnchorUpdatedEvent_5()), ((ARUserAnchorUpdated_t4007601678 *)CastclassSealed((RuntimeObject*)L_4, ARUserAnchorUpdated_t4007601678_il2cpp_TypeInfo_var)), L_5);
		V_0 = L_6;
		ARUserAnchorUpdated_t4007601678 * L_7 = V_0;
		ARUserAnchorUpdated_t4007601678 * L_8 = V_1;
		if ((!(((RuntimeObject*)(ARUserAnchorUpdated_t4007601678 *)L_7) == ((RuntimeObject*)(ARUserAnchorUpdated_t4007601678 *)L_8))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface::add_ARUserAnchorRemovedEvent(UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARUserAnchorRemoved)
extern "C"  void UnityARSessionNativeInterface_add_ARUserAnchorRemovedEvent_m3520224501 (RuntimeObject * __this /* static, unused */, ARUserAnchorRemoved_t23344545 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityARSessionNativeInterface_add_ARUserAnchorRemovedEvent_m3520224501_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ARUserAnchorRemoved_t23344545 * V_0 = NULL;
	ARUserAnchorRemoved_t23344545 * V_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var);
		ARUserAnchorRemoved_t23344545 * L_0 = ((UnityARSessionNativeInterface_t3929719369_StaticFields*)il2cpp_codegen_static_fields_for(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var))->get_ARUserAnchorRemovedEvent_6();
		V_0 = L_0;
	}

IL_0006:
	{
		ARUserAnchorRemoved_t23344545 * L_1 = V_0;
		V_1 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var);
		ARUserAnchorRemoved_t23344545 * L_2 = V_1;
		ARUserAnchorRemoved_t23344545 * L_3 = ___value0;
		Delegate_t1188392813 * L_4 = Delegate_Combine_m1859655160(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		ARUserAnchorRemoved_t23344545 * L_5 = V_0;
		ARUserAnchorRemoved_t23344545 * L_6 = InterlockedCompareExchangeImpl<ARUserAnchorRemoved_t23344545 *>((((UnityARSessionNativeInterface_t3929719369_StaticFields*)il2cpp_codegen_static_fields_for(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var))->get_address_of_ARUserAnchorRemovedEvent_6()), ((ARUserAnchorRemoved_t23344545 *)CastclassSealed((RuntimeObject*)L_4, ARUserAnchorRemoved_t23344545_il2cpp_TypeInfo_var)), L_5);
		V_0 = L_6;
		ARUserAnchorRemoved_t23344545 * L_7 = V_0;
		ARUserAnchorRemoved_t23344545 * L_8 = V_1;
		if ((!(((RuntimeObject*)(ARUserAnchorRemoved_t23344545 *)L_7) == ((RuntimeObject*)(ARUserAnchorRemoved_t23344545 *)L_8))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface::remove_ARUserAnchorRemovedEvent(UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARUserAnchorRemoved)
extern "C"  void UnityARSessionNativeInterface_remove_ARUserAnchorRemovedEvent_m2042627006 (RuntimeObject * __this /* static, unused */, ARUserAnchorRemoved_t23344545 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityARSessionNativeInterface_remove_ARUserAnchorRemovedEvent_m2042627006_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ARUserAnchorRemoved_t23344545 * V_0 = NULL;
	ARUserAnchorRemoved_t23344545 * V_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var);
		ARUserAnchorRemoved_t23344545 * L_0 = ((UnityARSessionNativeInterface_t3929719369_StaticFields*)il2cpp_codegen_static_fields_for(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var))->get_ARUserAnchorRemovedEvent_6();
		V_0 = L_0;
	}

IL_0006:
	{
		ARUserAnchorRemoved_t23344545 * L_1 = V_0;
		V_1 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var);
		ARUserAnchorRemoved_t23344545 * L_2 = V_1;
		ARUserAnchorRemoved_t23344545 * L_3 = ___value0;
		Delegate_t1188392813 * L_4 = Delegate_Remove_m334097152(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		ARUserAnchorRemoved_t23344545 * L_5 = V_0;
		ARUserAnchorRemoved_t23344545 * L_6 = InterlockedCompareExchangeImpl<ARUserAnchorRemoved_t23344545 *>((((UnityARSessionNativeInterface_t3929719369_StaticFields*)il2cpp_codegen_static_fields_for(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var))->get_address_of_ARUserAnchorRemovedEvent_6()), ((ARUserAnchorRemoved_t23344545 *)CastclassSealed((RuntimeObject*)L_4, ARUserAnchorRemoved_t23344545_il2cpp_TypeInfo_var)), L_5);
		V_0 = L_6;
		ARUserAnchorRemoved_t23344545 * L_7 = V_0;
		ARUserAnchorRemoved_t23344545 * L_8 = V_1;
		if ((!(((RuntimeObject*)(ARUserAnchorRemoved_t23344545 *)L_7) == ((RuntimeObject*)(ARUserAnchorRemoved_t23344545 *)L_8))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface::add_ARSessionFailedEvent(UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARSessionFailed)
extern "C"  void UnityARSessionNativeInterface_add_ARSessionFailedEvent_m3438676870 (RuntimeObject * __this /* static, unused */, ARSessionFailed_t2125002991 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityARSessionNativeInterface_add_ARSessionFailedEvent_m3438676870_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ARSessionFailed_t2125002991 * V_0 = NULL;
	ARSessionFailed_t2125002991 * V_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var);
		ARSessionFailed_t2125002991 * L_0 = ((UnityARSessionNativeInterface_t3929719369_StaticFields*)il2cpp_codegen_static_fields_for(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var))->get_ARSessionFailedEvent_7();
		V_0 = L_0;
	}

IL_0006:
	{
		ARSessionFailed_t2125002991 * L_1 = V_0;
		V_1 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var);
		ARSessionFailed_t2125002991 * L_2 = V_1;
		ARSessionFailed_t2125002991 * L_3 = ___value0;
		Delegate_t1188392813 * L_4 = Delegate_Combine_m1859655160(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		ARSessionFailed_t2125002991 * L_5 = V_0;
		ARSessionFailed_t2125002991 * L_6 = InterlockedCompareExchangeImpl<ARSessionFailed_t2125002991 *>((((UnityARSessionNativeInterface_t3929719369_StaticFields*)il2cpp_codegen_static_fields_for(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var))->get_address_of_ARSessionFailedEvent_7()), ((ARSessionFailed_t2125002991 *)CastclassSealed((RuntimeObject*)L_4, ARSessionFailed_t2125002991_il2cpp_TypeInfo_var)), L_5);
		V_0 = L_6;
		ARSessionFailed_t2125002991 * L_7 = V_0;
		ARSessionFailed_t2125002991 * L_8 = V_1;
		if ((!(((RuntimeObject*)(ARSessionFailed_t2125002991 *)L_7) == ((RuntimeObject*)(ARSessionFailed_t2125002991 *)L_8))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface::remove_ARSessionFailedEvent(UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARSessionFailed)
extern "C"  void UnityARSessionNativeInterface_remove_ARSessionFailedEvent_m3961525176 (RuntimeObject * __this /* static, unused */, ARSessionFailed_t2125002991 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityARSessionNativeInterface_remove_ARSessionFailedEvent_m3961525176_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ARSessionFailed_t2125002991 * V_0 = NULL;
	ARSessionFailed_t2125002991 * V_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var);
		ARSessionFailed_t2125002991 * L_0 = ((UnityARSessionNativeInterface_t3929719369_StaticFields*)il2cpp_codegen_static_fields_for(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var))->get_ARSessionFailedEvent_7();
		V_0 = L_0;
	}

IL_0006:
	{
		ARSessionFailed_t2125002991 * L_1 = V_0;
		V_1 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var);
		ARSessionFailed_t2125002991 * L_2 = V_1;
		ARSessionFailed_t2125002991 * L_3 = ___value0;
		Delegate_t1188392813 * L_4 = Delegate_Remove_m334097152(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		ARSessionFailed_t2125002991 * L_5 = V_0;
		ARSessionFailed_t2125002991 * L_6 = InterlockedCompareExchangeImpl<ARSessionFailed_t2125002991 *>((((UnityARSessionNativeInterface_t3929719369_StaticFields*)il2cpp_codegen_static_fields_for(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var))->get_address_of_ARSessionFailedEvent_7()), ((ARSessionFailed_t2125002991 *)CastclassSealed((RuntimeObject*)L_4, ARSessionFailed_t2125002991_il2cpp_TypeInfo_var)), L_5);
		V_0 = L_6;
		ARSessionFailed_t2125002991 * L_7 = V_0;
		ARSessionFailed_t2125002991 * L_8 = V_1;
		if ((!(((RuntimeObject*)(ARSessionFailed_t2125002991 *)L_7) == ((RuntimeObject*)(ARSessionFailed_t2125002991 *)L_8))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface::add_ARSessionInterruptedEvent(UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARSessionCallback)
extern "C"  void UnityARSessionNativeInterface_add_ARSessionInterruptedEvent_m1341774292 (RuntimeObject * __this /* static, unused */, ARSessionCallback_t3772093212 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityARSessionNativeInterface_add_ARSessionInterruptedEvent_m1341774292_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ARSessionCallback_t3772093212 * V_0 = NULL;
	ARSessionCallback_t3772093212 * V_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var);
		ARSessionCallback_t3772093212 * L_0 = ((UnityARSessionNativeInterface_t3929719369_StaticFields*)il2cpp_codegen_static_fields_for(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var))->get_ARSessionInterruptedEvent_8();
		V_0 = L_0;
	}

IL_0006:
	{
		ARSessionCallback_t3772093212 * L_1 = V_0;
		V_1 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var);
		ARSessionCallback_t3772093212 * L_2 = V_1;
		ARSessionCallback_t3772093212 * L_3 = ___value0;
		Delegate_t1188392813 * L_4 = Delegate_Combine_m1859655160(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		ARSessionCallback_t3772093212 * L_5 = V_0;
		ARSessionCallback_t3772093212 * L_6 = InterlockedCompareExchangeImpl<ARSessionCallback_t3772093212 *>((((UnityARSessionNativeInterface_t3929719369_StaticFields*)il2cpp_codegen_static_fields_for(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var))->get_address_of_ARSessionInterruptedEvent_8()), ((ARSessionCallback_t3772093212 *)CastclassSealed((RuntimeObject*)L_4, ARSessionCallback_t3772093212_il2cpp_TypeInfo_var)), L_5);
		V_0 = L_6;
		ARSessionCallback_t3772093212 * L_7 = V_0;
		ARSessionCallback_t3772093212 * L_8 = V_1;
		if ((!(((RuntimeObject*)(ARSessionCallback_t3772093212 *)L_7) == ((RuntimeObject*)(ARSessionCallback_t3772093212 *)L_8))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface::remove_ARSessionInterruptedEvent(UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARSessionCallback)
extern "C"  void UnityARSessionNativeInterface_remove_ARSessionInterruptedEvent_m3672185323 (RuntimeObject * __this /* static, unused */, ARSessionCallback_t3772093212 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityARSessionNativeInterface_remove_ARSessionInterruptedEvent_m3672185323_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ARSessionCallback_t3772093212 * V_0 = NULL;
	ARSessionCallback_t3772093212 * V_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var);
		ARSessionCallback_t3772093212 * L_0 = ((UnityARSessionNativeInterface_t3929719369_StaticFields*)il2cpp_codegen_static_fields_for(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var))->get_ARSessionInterruptedEvent_8();
		V_0 = L_0;
	}

IL_0006:
	{
		ARSessionCallback_t3772093212 * L_1 = V_0;
		V_1 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var);
		ARSessionCallback_t3772093212 * L_2 = V_1;
		ARSessionCallback_t3772093212 * L_3 = ___value0;
		Delegate_t1188392813 * L_4 = Delegate_Remove_m334097152(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		ARSessionCallback_t3772093212 * L_5 = V_0;
		ARSessionCallback_t3772093212 * L_6 = InterlockedCompareExchangeImpl<ARSessionCallback_t3772093212 *>((((UnityARSessionNativeInterface_t3929719369_StaticFields*)il2cpp_codegen_static_fields_for(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var))->get_address_of_ARSessionInterruptedEvent_8()), ((ARSessionCallback_t3772093212 *)CastclassSealed((RuntimeObject*)L_4, ARSessionCallback_t3772093212_il2cpp_TypeInfo_var)), L_5);
		V_0 = L_6;
		ARSessionCallback_t3772093212 * L_7 = V_0;
		ARSessionCallback_t3772093212 * L_8 = V_1;
		if ((!(((RuntimeObject*)(ARSessionCallback_t3772093212 *)L_7) == ((RuntimeObject*)(ARSessionCallback_t3772093212 *)L_8))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface::add_ARSessioninterruptionEndedEvent(UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARSessionCallback)
extern "C"  void UnityARSessionNativeInterface_add_ARSessioninterruptionEndedEvent_m2329806717 (RuntimeObject * __this /* static, unused */, ARSessionCallback_t3772093212 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityARSessionNativeInterface_add_ARSessioninterruptionEndedEvent_m2329806717_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ARSessionCallback_t3772093212 * V_0 = NULL;
	ARSessionCallback_t3772093212 * V_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var);
		ARSessionCallback_t3772093212 * L_0 = ((UnityARSessionNativeInterface_t3929719369_StaticFields*)il2cpp_codegen_static_fields_for(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var))->get_ARSessioninterruptionEndedEvent_9();
		V_0 = L_0;
	}

IL_0006:
	{
		ARSessionCallback_t3772093212 * L_1 = V_0;
		V_1 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var);
		ARSessionCallback_t3772093212 * L_2 = V_1;
		ARSessionCallback_t3772093212 * L_3 = ___value0;
		Delegate_t1188392813 * L_4 = Delegate_Combine_m1859655160(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		ARSessionCallback_t3772093212 * L_5 = V_0;
		ARSessionCallback_t3772093212 * L_6 = InterlockedCompareExchangeImpl<ARSessionCallback_t3772093212 *>((((UnityARSessionNativeInterface_t3929719369_StaticFields*)il2cpp_codegen_static_fields_for(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var))->get_address_of_ARSessioninterruptionEndedEvent_9()), ((ARSessionCallback_t3772093212 *)CastclassSealed((RuntimeObject*)L_4, ARSessionCallback_t3772093212_il2cpp_TypeInfo_var)), L_5);
		V_0 = L_6;
		ARSessionCallback_t3772093212 * L_7 = V_0;
		ARSessionCallback_t3772093212 * L_8 = V_1;
		if ((!(((RuntimeObject*)(ARSessionCallback_t3772093212 *)L_7) == ((RuntimeObject*)(ARSessionCallback_t3772093212 *)L_8))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface::remove_ARSessioninterruptionEndedEvent(UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARSessionCallback)
extern "C"  void UnityARSessionNativeInterface_remove_ARSessioninterruptionEndedEvent_m2542669179 (RuntimeObject * __this /* static, unused */, ARSessionCallback_t3772093212 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityARSessionNativeInterface_remove_ARSessioninterruptionEndedEvent_m2542669179_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ARSessionCallback_t3772093212 * V_0 = NULL;
	ARSessionCallback_t3772093212 * V_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var);
		ARSessionCallback_t3772093212 * L_0 = ((UnityARSessionNativeInterface_t3929719369_StaticFields*)il2cpp_codegen_static_fields_for(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var))->get_ARSessioninterruptionEndedEvent_9();
		V_0 = L_0;
	}

IL_0006:
	{
		ARSessionCallback_t3772093212 * L_1 = V_0;
		V_1 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var);
		ARSessionCallback_t3772093212 * L_2 = V_1;
		ARSessionCallback_t3772093212 * L_3 = ___value0;
		Delegate_t1188392813 * L_4 = Delegate_Remove_m334097152(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		ARSessionCallback_t3772093212 * L_5 = V_0;
		ARSessionCallback_t3772093212 * L_6 = InterlockedCompareExchangeImpl<ARSessionCallback_t3772093212 *>((((UnityARSessionNativeInterface_t3929719369_StaticFields*)il2cpp_codegen_static_fields_for(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var))->get_address_of_ARSessioninterruptionEndedEvent_9()), ((ARSessionCallback_t3772093212 *)CastclassSealed((RuntimeObject*)L_4, ARSessionCallback_t3772093212_il2cpp_TypeInfo_var)), L_5);
		V_0 = L_6;
		ARSessionCallback_t3772093212 * L_7 = V_0;
		ARSessionCallback_t3772093212 * L_8 = V_1;
		if ((!(((RuntimeObject*)(ARSessionCallback_t3772093212 *)L_7) == ((RuntimeObject*)(ARSessionCallback_t3772093212 *)L_8))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface::add_ARSessionTrackingChangedEvent(UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARSessionTrackingChanged)
extern "C"  void UnityARSessionNativeInterface_add_ARSessionTrackingChangedEvent_m3513398551 (RuntimeObject * __this /* static, unused */, ARSessionTrackingChanged_t923029411 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityARSessionNativeInterface_add_ARSessionTrackingChangedEvent_m3513398551_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ARSessionTrackingChanged_t923029411 * V_0 = NULL;
	ARSessionTrackingChanged_t923029411 * V_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var);
		ARSessionTrackingChanged_t923029411 * L_0 = ((UnityARSessionNativeInterface_t3929719369_StaticFields*)il2cpp_codegen_static_fields_for(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var))->get_ARSessionTrackingChangedEvent_10();
		V_0 = L_0;
	}

IL_0006:
	{
		ARSessionTrackingChanged_t923029411 * L_1 = V_0;
		V_1 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var);
		ARSessionTrackingChanged_t923029411 * L_2 = V_1;
		ARSessionTrackingChanged_t923029411 * L_3 = ___value0;
		Delegate_t1188392813 * L_4 = Delegate_Combine_m1859655160(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		ARSessionTrackingChanged_t923029411 * L_5 = V_0;
		ARSessionTrackingChanged_t923029411 * L_6 = InterlockedCompareExchangeImpl<ARSessionTrackingChanged_t923029411 *>((((UnityARSessionNativeInterface_t3929719369_StaticFields*)il2cpp_codegen_static_fields_for(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var))->get_address_of_ARSessionTrackingChangedEvent_10()), ((ARSessionTrackingChanged_t923029411 *)CastclassSealed((RuntimeObject*)L_4, ARSessionTrackingChanged_t923029411_il2cpp_TypeInfo_var)), L_5);
		V_0 = L_6;
		ARSessionTrackingChanged_t923029411 * L_7 = V_0;
		ARSessionTrackingChanged_t923029411 * L_8 = V_1;
		if ((!(((RuntimeObject*)(ARSessionTrackingChanged_t923029411 *)L_7) == ((RuntimeObject*)(ARSessionTrackingChanged_t923029411 *)L_8))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface::remove_ARSessionTrackingChangedEvent(UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARSessionTrackingChanged)
extern "C"  void UnityARSessionNativeInterface_remove_ARSessionTrackingChangedEvent_m1677052138 (RuntimeObject * __this /* static, unused */, ARSessionTrackingChanged_t923029411 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityARSessionNativeInterface_remove_ARSessionTrackingChangedEvent_m1677052138_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ARSessionTrackingChanged_t923029411 * V_0 = NULL;
	ARSessionTrackingChanged_t923029411 * V_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var);
		ARSessionTrackingChanged_t923029411 * L_0 = ((UnityARSessionNativeInterface_t3929719369_StaticFields*)il2cpp_codegen_static_fields_for(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var))->get_ARSessionTrackingChangedEvent_10();
		V_0 = L_0;
	}

IL_0006:
	{
		ARSessionTrackingChanged_t923029411 * L_1 = V_0;
		V_1 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var);
		ARSessionTrackingChanged_t923029411 * L_2 = V_1;
		ARSessionTrackingChanged_t923029411 * L_3 = ___value0;
		Delegate_t1188392813 * L_4 = Delegate_Remove_m334097152(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		ARSessionTrackingChanged_t923029411 * L_5 = V_0;
		ARSessionTrackingChanged_t923029411 * L_6 = InterlockedCompareExchangeImpl<ARSessionTrackingChanged_t923029411 *>((((UnityARSessionNativeInterface_t3929719369_StaticFields*)il2cpp_codegen_static_fields_for(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var))->get_address_of_ARSessionTrackingChangedEvent_10()), ((ARSessionTrackingChanged_t923029411 *)CastclassSealed((RuntimeObject*)L_4, ARSessionTrackingChanged_t923029411_il2cpp_TypeInfo_var)), L_5);
		V_0 = L_6;
		ARSessionTrackingChanged_t923029411 * L_7 = V_0;
		ARSessionTrackingChanged_t923029411 * L_8 = V_1;
		if ((!(((RuntimeObject*)(ARSessionTrackingChanged_t923029411 *)L_7) == ((RuntimeObject*)(ARSessionTrackingChanged_t923029411 *)L_8))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
extern "C" intptr_t DEFAULT_CALL unity_CreateNativeARSession();
// System.IntPtr UnityEngine.XR.iOS.UnityARSessionNativeInterface::unity_CreateNativeARSession()
extern "C"  intptr_t UnityARSessionNativeInterface_unity_CreateNativeARSession_m1892455731 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(unity_CreateNativeARSession)();

	return returnValue;
}
extern "C" void DEFAULT_CALL session_SetSessionCallbacks(intptr_t, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer);
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface::session_SetSessionCallbacks(System.IntPtr,UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARFrameUpdate,UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARSessionFailed,UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARSessionCallback,UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARSessionCallback,UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARSessionTrackingChanged)
extern "C"  void UnityARSessionNativeInterface_session_SetSessionCallbacks_m625576194 (RuntimeObject * __this /* static, unused */, intptr_t ___nativeSession0, internal_ARFrameUpdate_t3254989823 * ___frameCallback1, ARSessionFailed_t2125002991 * ___sessionFailed2, ARSessionCallback_t3772093212 * ___sessionInterrupted3, ARSessionCallback_t3772093212 * ___sessionInterruptionEnded4, internal_ARSessionTrackingChanged_t1988849735 * ___trackingChanged5, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer);

	// Marshaling of parameter '___frameCallback1' to native representation
	Il2CppMethodPointer ____frameCallback1_marshaled = NULL;
	____frameCallback1_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___frameCallback1));

	// Marshaling of parameter '___sessionFailed2' to native representation
	Il2CppMethodPointer ____sessionFailed2_marshaled = NULL;
	____sessionFailed2_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___sessionFailed2));

	// Marshaling of parameter '___sessionInterrupted3' to native representation
	Il2CppMethodPointer ____sessionInterrupted3_marshaled = NULL;
	____sessionInterrupted3_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___sessionInterrupted3));

	// Marshaling of parameter '___sessionInterruptionEnded4' to native representation
	Il2CppMethodPointer ____sessionInterruptionEnded4_marshaled = NULL;
	____sessionInterruptionEnded4_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___sessionInterruptionEnded4));

	// Marshaling of parameter '___trackingChanged5' to native representation
	Il2CppMethodPointer ____trackingChanged5_marshaled = NULL;
	____trackingChanged5_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___trackingChanged5));

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(session_SetSessionCallbacks)(___nativeSession0, ____frameCallback1_marshaled, ____sessionFailed2_marshaled, ____sessionInterrupted3_marshaled, ____sessionInterruptionEnded4_marshaled, ____trackingChanged5_marshaled);

}
extern "C" void DEFAULT_CALL session_SetPlaneAnchorCallbacks(intptr_t, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer);
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface::session_SetPlaneAnchorCallbacks(System.IntPtr,UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARAnchorAdded,UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARAnchorUpdated,UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARAnchorRemoved)
extern "C"  void UnityARSessionNativeInterface_session_SetPlaneAnchorCallbacks_m849333665 (RuntimeObject * __this /* static, unused */, intptr_t ___nativeSession0, internal_ARAnchorAdded_t1565083332 * ___anchorAddedCallback1, internal_ARAnchorUpdated_t2645242205 * ___anchorUpdatedCallback2, internal_ARAnchorRemoved_t3371657877 * ___anchorRemovedCallback3, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer);

	// Marshaling of parameter '___anchorAddedCallback1' to native representation
	Il2CppMethodPointer ____anchorAddedCallback1_marshaled = NULL;
	____anchorAddedCallback1_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___anchorAddedCallback1));

	// Marshaling of parameter '___anchorUpdatedCallback2' to native representation
	Il2CppMethodPointer ____anchorUpdatedCallback2_marshaled = NULL;
	____anchorUpdatedCallback2_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___anchorUpdatedCallback2));

	// Marshaling of parameter '___anchorRemovedCallback3' to native representation
	Il2CppMethodPointer ____anchorRemovedCallback3_marshaled = NULL;
	____anchorRemovedCallback3_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___anchorRemovedCallback3));

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(session_SetPlaneAnchorCallbacks)(___nativeSession0, ____anchorAddedCallback1_marshaled, ____anchorUpdatedCallback2_marshaled, ____anchorRemovedCallback3_marshaled);

}
extern "C" void DEFAULT_CALL session_SetUserAnchorCallbacks(intptr_t, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer);
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface::session_SetUserAnchorCallbacks(System.IntPtr,UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARUserAnchorAdded,UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARUserAnchorUpdated,UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARUserAnchorRemoved)
extern "C"  void UnityARSessionNativeInterface_session_SetUserAnchorCallbacks_m2655011497 (RuntimeObject * __this /* static, unused */, intptr_t ___nativeSession0, internal_ARUserAnchorAdded_t3285282493 * ___userAnchorAddedCallback1, internal_ARUserAnchorUpdated_t3964727538 * ___userAnchorUpdatedCallback2, internal_ARUserAnchorRemoved_t386858594 * ___userAnchorRemovedCallback3, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer);

	// Marshaling of parameter '___userAnchorAddedCallback1' to native representation
	Il2CppMethodPointer ____userAnchorAddedCallback1_marshaled = NULL;
	____userAnchorAddedCallback1_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___userAnchorAddedCallback1));

	// Marshaling of parameter '___userAnchorUpdatedCallback2' to native representation
	Il2CppMethodPointer ____userAnchorUpdatedCallback2_marshaled = NULL;
	____userAnchorUpdatedCallback2_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___userAnchorUpdatedCallback2));

	// Marshaling of parameter '___userAnchorRemovedCallback3' to native representation
	Il2CppMethodPointer ____userAnchorRemovedCallback3_marshaled = NULL;
	____userAnchorRemovedCallback3_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___userAnchorRemovedCallback3));

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(session_SetUserAnchorCallbacks)(___nativeSession0, ____userAnchorAddedCallback1_marshaled, ____userAnchorUpdatedCallback2_marshaled, ____userAnchorRemovedCallback3_marshaled);

}
extern "C" void DEFAULT_CALL StartWorldTrackingSession(intptr_t, ARKitWorldTrackingSessionConfiguration_t273386347_marshaled_pinvoke);
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface::StartWorldTrackingSession(System.IntPtr,UnityEngine.XR.iOS.ARKitWorldTrackingSessionConfiguration)
extern "C"  void UnityARSessionNativeInterface_StartWorldTrackingSession_m3386922388 (RuntimeObject * __this /* static, unused */, intptr_t ___nativeSession0, ARKitWorldTrackingSessionConfiguration_t273386347  ___configuration1, const RuntimeMethod* method)
{


	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, ARKitWorldTrackingSessionConfiguration_t273386347_marshaled_pinvoke);

	// Marshaling of parameter '___configuration1' to native representation
	ARKitWorldTrackingSessionConfiguration_t273386347_marshaled_pinvoke ____configuration1_marshaled = {};
	ARKitWorldTrackingSessionConfiguration_t273386347_marshal_pinvoke(___configuration1, ____configuration1_marshaled);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(StartWorldTrackingSession)(___nativeSession0, ____configuration1_marshaled);

	// Marshaling cleanup of parameter '___configuration1' native representation
	ARKitWorldTrackingSessionConfiguration_t273386347_marshal_pinvoke_cleanup(____configuration1_marshaled);

}
extern "C" void DEFAULT_CALL StartWorldTrackingSessionWithOptions(intptr_t, ARKitWorldTrackingSessionConfiguration_t273386347_marshaled_pinvoke, int32_t);
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface::StartWorldTrackingSessionWithOptions(System.IntPtr,UnityEngine.XR.iOS.ARKitWorldTrackingSessionConfiguration,UnityEngine.XR.iOS.UnityARSessionRunOption)
extern "C"  void UnityARSessionNativeInterface_StartWorldTrackingSessionWithOptions_m608014144 (RuntimeObject * __this /* static, unused */, intptr_t ___nativeSession0, ARKitWorldTrackingSessionConfiguration_t273386347  ___configuration1, int32_t ___runOptions2, const RuntimeMethod* method)
{


	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, ARKitWorldTrackingSessionConfiguration_t273386347_marshaled_pinvoke, int32_t);

	// Marshaling of parameter '___configuration1' to native representation
	ARKitWorldTrackingSessionConfiguration_t273386347_marshaled_pinvoke ____configuration1_marshaled = {};
	ARKitWorldTrackingSessionConfiguration_t273386347_marshal_pinvoke(___configuration1, ____configuration1_marshaled);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(StartWorldTrackingSessionWithOptions)(___nativeSession0, ____configuration1_marshaled, ___runOptions2);

	// Marshaling cleanup of parameter '___configuration1' native representation
	ARKitWorldTrackingSessionConfiguration_t273386347_marshal_pinvoke_cleanup(____configuration1_marshaled);

}
extern "C" void DEFAULT_CALL StartSession(intptr_t, ARKitSessionConfiguration_t629136898_marshaled_pinvoke);
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface::StartSession(System.IntPtr,UnityEngine.XR.iOS.ARKitSessionConfiguration)
extern "C"  void UnityARSessionNativeInterface_StartSession_m316901060 (RuntimeObject * __this /* static, unused */, intptr_t ___nativeSession0, ARKitSessionConfiguration_t629136898  ___configuration1, const RuntimeMethod* method)
{


	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, ARKitSessionConfiguration_t629136898_marshaled_pinvoke);

	// Marshaling of parameter '___configuration1' to native representation
	ARKitSessionConfiguration_t629136898_marshaled_pinvoke ____configuration1_marshaled = {};
	ARKitSessionConfiguration_t629136898_marshal_pinvoke(___configuration1, ____configuration1_marshaled);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(StartSession)(___nativeSession0, ____configuration1_marshaled);

	// Marshaling cleanup of parameter '___configuration1' native representation
	ARKitSessionConfiguration_t629136898_marshal_pinvoke_cleanup(____configuration1_marshaled);

}
extern "C" void DEFAULT_CALL StartSessionWithOptions(intptr_t, ARKitSessionConfiguration_t629136898_marshaled_pinvoke, int32_t);
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface::StartSessionWithOptions(System.IntPtr,UnityEngine.XR.iOS.ARKitSessionConfiguration,UnityEngine.XR.iOS.UnityARSessionRunOption)
extern "C"  void UnityARSessionNativeInterface_StartSessionWithOptions_m2870684486 (RuntimeObject * __this /* static, unused */, intptr_t ___nativeSession0, ARKitSessionConfiguration_t629136898  ___configuration1, int32_t ___runOptions2, const RuntimeMethod* method)
{


	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, ARKitSessionConfiguration_t629136898_marshaled_pinvoke, int32_t);

	// Marshaling of parameter '___configuration1' to native representation
	ARKitSessionConfiguration_t629136898_marshaled_pinvoke ____configuration1_marshaled = {};
	ARKitSessionConfiguration_t629136898_marshal_pinvoke(___configuration1, ____configuration1_marshaled);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(StartSessionWithOptions)(___nativeSession0, ____configuration1_marshaled, ___runOptions2);

	// Marshaling cleanup of parameter '___configuration1' native representation
	ARKitSessionConfiguration_t629136898_marshal_pinvoke_cleanup(____configuration1_marshaled);

}
extern "C" void DEFAULT_CALL PauseSession(intptr_t);
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface::PauseSession(System.IntPtr)
extern "C"  void UnityARSessionNativeInterface_PauseSession_m1728090040 (RuntimeObject * __this /* static, unused */, intptr_t ___nativeSession0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(PauseSession)(___nativeSession0);

}
extern "C" int32_t DEFAULT_CALL HitTest(intptr_t, ARPoint_t499615819 , int64_t);
// System.Int32 UnityEngine.XR.iOS.UnityARSessionNativeInterface::HitTest(System.IntPtr,UnityEngine.XR.iOS.ARPoint,UnityEngine.XR.iOS.ARHitTestResultType)
extern "C"  int32_t UnityARSessionNativeInterface_HitTest_m1588561262 (RuntimeObject * __this /* static, unused */, intptr_t ___nativeSession0, ARPoint_t499615819  ___point1, int64_t ___types2, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, ARPoint_t499615819 , int64_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(HitTest)(___nativeSession0, ___point1, ___types2);

	return returnValue;
}
extern "C" UnityARHitTestResult_t4176230866_marshaled_pinvoke DEFAULT_CALL GetLastHitTestResult(int32_t);
// UnityEngine.XR.iOS.UnityARHitTestResult UnityEngine.XR.iOS.UnityARSessionNativeInterface::GetLastHitTestResult(System.Int32)
extern "C"  UnityARHitTestResult_t4176230866  UnityARSessionNativeInterface_GetLastHitTestResult_m1088536205 (RuntimeObject * __this /* static, unused */, int32_t ___index0, const RuntimeMethod* method)
{


	typedef UnityARHitTestResult_t4176230866_marshaled_pinvoke (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	UnityARHitTestResult_t4176230866_marshaled_pinvoke returnValue = reinterpret_cast<PInvokeFunc>(GetLastHitTestResult)(___index0);

	// Marshaling of return value back from native representation
	UnityARHitTestResult_t4176230866  _returnValue_unmarshaled;
	memset(&_returnValue_unmarshaled, 0, sizeof(_returnValue_unmarshaled));
	UnityARHitTestResult_t4176230866_marshal_pinvoke_back(returnValue, _returnValue_unmarshaled);

	// Marshaling cleanup of return value native representation
	UnityARHitTestResult_t4176230866_marshal_pinvoke_cleanup(returnValue);

	return _returnValue_unmarshaled;
}
extern "C" ARTextureHandles_t852411561  DEFAULT_CALL GetVideoTextureHandles();
// UnityEngine.XR.iOS.ARTextureHandles UnityEngine.XR.iOS.UnityARSessionNativeInterface::GetVideoTextureHandles()
extern "C"  ARTextureHandles_t852411561  UnityARSessionNativeInterface_GetVideoTextureHandles_m1910050814 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef ARTextureHandles_t852411561  (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	ARTextureHandles_t852411561  returnValue = reinterpret_cast<PInvokeFunc>(GetVideoTextureHandles)();

	return returnValue;
}
extern "C" float DEFAULT_CALL GetAmbientIntensity();
// System.Single UnityEngine.XR.iOS.UnityARSessionNativeInterface::GetAmbientIntensity()
extern "C"  float UnityARSessionNativeInterface_GetAmbientIntensity_m233148809 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef float (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	float returnValue = reinterpret_cast<PInvokeFunc>(GetAmbientIntensity)();

	return returnValue;
}
extern "C" int32_t DEFAULT_CALL GetTrackingQuality();
// System.Int32 UnityEngine.XR.iOS.UnityARSessionNativeInterface::GetTrackingQuality()
extern "C"  int32_t UnityARSessionNativeInterface_GetTrackingQuality_m4236057654 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(GetTrackingQuality)();

	return returnValue;
}
extern "C" int32_t DEFAULT_CALL GetARPointCloud(intptr_t*, uint32_t*);
// System.Boolean UnityEngine.XR.iOS.UnityARSessionNativeInterface::GetARPointCloud(System.IntPtr&,System.UInt32&)
extern "C"  bool UnityARSessionNativeInterface_GetARPointCloud_m48288112 (RuntimeObject * __this /* static, unused */, intptr_t* ___verts0, uint32_t* ___vertLength1, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t*, uint32_t*);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(GetARPointCloud)(___verts0, ___vertLength1);

	return static_cast<bool>(returnValue);
}
extern "C" void DEFAULT_CALL SetCameraNearFar(float, float);
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface::SetCameraNearFar(System.Single,System.Single)
extern "C"  void UnityARSessionNativeInterface_SetCameraNearFar_m3141858259 (RuntimeObject * __this /* static, unused */, float ___nearZ0, float ___farZ1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (float, float);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(SetCameraNearFar)(___nearZ0, ___farZ1);

}
extern "C" void DEFAULT_CALL CapturePixelData(int32_t, intptr_t, intptr_t);
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface::CapturePixelData(System.Int32,System.IntPtr,System.IntPtr)
extern "C"  void UnityARSessionNativeInterface_CapturePixelData_m2086582447 (RuntimeObject * __this /* static, unused */, int32_t ___enable0, intptr_t ___pYPixelBytes1, intptr_t ___pUVPixelBytes2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t, intptr_t, intptr_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(CapturePixelData)(___enable0, ___pYPixelBytes1, ___pUVPixelBytes2);

}
extern "C" UnityARUserAnchorData_t1976826249  DEFAULT_CALL SessionAddUserAnchor(intptr_t, UnityARUserAnchorData_t1976826249 );
// UnityEngine.XR.iOS.UnityARUserAnchorData UnityEngine.XR.iOS.UnityARSessionNativeInterface::SessionAddUserAnchor(System.IntPtr,UnityEngine.XR.iOS.UnityARUserAnchorData)
extern "C"  UnityARUserAnchorData_t1976826249  UnityARSessionNativeInterface_SessionAddUserAnchor_m1245253078 (RuntimeObject * __this /* static, unused */, intptr_t ___nativeSession0, UnityARUserAnchorData_t1976826249  ___anchorData1, const RuntimeMethod* method)
{
	typedef UnityARUserAnchorData_t1976826249  (DEFAULT_CALL *PInvokeFunc) (intptr_t, UnityARUserAnchorData_t1976826249 );

	// Native function invocation
	UnityARUserAnchorData_t1976826249  returnValue = reinterpret_cast<PInvokeFunc>(SessionAddUserAnchor)(___nativeSession0, ___anchorData1);

	return returnValue;
}
extern "C" void DEFAULT_CALL SessionRemoveUserAnchor(intptr_t, char*);
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface::SessionRemoveUserAnchor(System.IntPtr,System.String)
extern "C"  void UnityARSessionNativeInterface_SessionRemoveUserAnchor_m3291627138 (RuntimeObject * __this /* static, unused */, intptr_t ___nativeSession0, String_t* ___anchorIdentifier1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, char*);

	// Marshaling of parameter '___anchorIdentifier1' to native representation
	char* ____anchorIdentifier1_marshaled = NULL;
	____anchorIdentifier1_marshaled = il2cpp_codegen_marshal_string(___anchorIdentifier1);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(SessionRemoveUserAnchor)(___nativeSession0, ____anchorIdentifier1_marshaled);

	// Marshaling cleanup of parameter '___anchorIdentifier1' native representation
	il2cpp_codegen_marshal_free(____anchorIdentifier1_marshaled);
	____anchorIdentifier1_marshaled = NULL;

}
// UnityEngine.XR.iOS.UnityARSessionNativeInterface UnityEngine.XR.iOS.UnityARSessionNativeInterface::GetARSessionNativeInterface()
extern "C"  UnityARSessionNativeInterface_t3929719369 * UnityARSessionNativeInterface_GetARSessionNativeInterface_m1118592565 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityARSessionNativeInterface_GetARSessionNativeInterface_m1118592565_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var);
		UnityARSessionNativeInterface_t3929719369 * L_0 = ((UnityARSessionNativeInterface_t3929719369_StaticFields*)il2cpp_codegen_static_fields_for(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var))->get_s_UnityARSessionNativeInterface_13();
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		UnityARSessionNativeInterface_t3929719369 * L_1 = (UnityARSessionNativeInterface_t3929719369 *)il2cpp_codegen_object_new(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var);
		UnityARSessionNativeInterface__ctor_m1227468240(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var);
		((UnityARSessionNativeInterface_t3929719369_StaticFields*)il2cpp_codegen_static_fields_for(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var))->set_s_UnityARSessionNativeInterface_13(L_1);
	}

IL_0014:
	{
		IL2CPP_RUNTIME_CLASS_INIT(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var);
		UnityARSessionNativeInterface_t3929719369 * L_2 = ((UnityARSessionNativeInterface_t3929719369_StaticFields*)il2cpp_codegen_static_fields_for(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var))->get_s_UnityARSessionNativeInterface_13();
		return L_2;
	}
}
// UnityEngine.Matrix4x4 UnityEngine.XR.iOS.UnityARSessionNativeInterface::GetCameraPose()
extern "C"  Matrix4x4_t1817901843  UnityARSessionNativeInterface_GetCameraPose_m3952905780 (UnityARSessionNativeInterface_t3929719369 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityARSessionNativeInterface_GetCameraPose_m3952905780_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Matrix4x4_t1817901843  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Matrix4x4_t1817901843 ));
		IL2CPP_RUNTIME_CLASS_INIT(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var);
		UnityARMatrix4x4_t4073345847 * L_0 = (((UnityARSessionNativeInterface_t3929719369_StaticFields*)il2cpp_codegen_static_fields_for(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var))->get_address_of_s_Camera_12())->get_address_of_worldTransform_0();
		Vector4_t3319028937  L_1 = L_0->get_column0_0();
		Matrix4x4_SetColumn_m2328592759((&V_0), 0, L_1, /*hidden argument*/NULL);
		UnityARMatrix4x4_t4073345847 * L_2 = (((UnityARSessionNativeInterface_t3929719369_StaticFields*)il2cpp_codegen_static_fields_for(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var))->get_address_of_s_Camera_12())->get_address_of_worldTransform_0();
		Vector4_t3319028937  L_3 = L_2->get_column1_1();
		Matrix4x4_SetColumn_m2328592759((&V_0), 1, L_3, /*hidden argument*/NULL);
		UnityARMatrix4x4_t4073345847 * L_4 = (((UnityARSessionNativeInterface_t3929719369_StaticFields*)il2cpp_codegen_static_fields_for(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var))->get_address_of_s_Camera_12())->get_address_of_worldTransform_0();
		Vector4_t3319028937  L_5 = L_4->get_column2_2();
		Matrix4x4_SetColumn_m2328592759((&V_0), 2, L_5, /*hidden argument*/NULL);
		UnityARMatrix4x4_t4073345847 * L_6 = (((UnityARSessionNativeInterface_t3929719369_StaticFields*)il2cpp_codegen_static_fields_for(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var))->get_address_of_s_Camera_12())->get_address_of_worldTransform_0();
		Vector4_t3319028937  L_7 = L_6->get_column3_3();
		Matrix4x4_SetColumn_m2328592759((&V_0), 3, L_7, /*hidden argument*/NULL);
		Matrix4x4_t1817901843  L_8 = V_0;
		return L_8;
	}
}
// UnityEngine.Matrix4x4 UnityEngine.XR.iOS.UnityARSessionNativeInterface::GetCameraProjection()
extern "C"  Matrix4x4_t1817901843  UnityARSessionNativeInterface_GetCameraProjection_m908752819 (UnityARSessionNativeInterface_t3929719369 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityARSessionNativeInterface_GetCameraProjection_m908752819_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Matrix4x4_t1817901843  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Matrix4x4_t1817901843 ));
		IL2CPP_RUNTIME_CLASS_INIT(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var);
		UnityARMatrix4x4_t4073345847 * L_0 = (((UnityARSessionNativeInterface_t3929719369_StaticFields*)il2cpp_codegen_static_fields_for(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var))->get_address_of_s_Camera_12())->get_address_of_projectionMatrix_1();
		Vector4_t3319028937  L_1 = L_0->get_column0_0();
		Matrix4x4_SetColumn_m2328592759((&V_0), 0, L_1, /*hidden argument*/NULL);
		UnityARMatrix4x4_t4073345847 * L_2 = (((UnityARSessionNativeInterface_t3929719369_StaticFields*)il2cpp_codegen_static_fields_for(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var))->get_address_of_s_Camera_12())->get_address_of_projectionMatrix_1();
		Vector4_t3319028937  L_3 = L_2->get_column1_1();
		Matrix4x4_SetColumn_m2328592759((&V_0), 1, L_3, /*hidden argument*/NULL);
		UnityARMatrix4x4_t4073345847 * L_4 = (((UnityARSessionNativeInterface_t3929719369_StaticFields*)il2cpp_codegen_static_fields_for(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var))->get_address_of_s_Camera_12())->get_address_of_projectionMatrix_1();
		Vector4_t3319028937  L_5 = L_4->get_column2_2();
		Matrix4x4_SetColumn_m2328592759((&V_0), 2, L_5, /*hidden argument*/NULL);
		UnityARMatrix4x4_t4073345847 * L_6 = (((UnityARSessionNativeInterface_t3929719369_StaticFields*)il2cpp_codegen_static_fields_for(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var))->get_address_of_s_Camera_12())->get_address_of_projectionMatrix_1();
		Vector4_t3319028937  L_7 = L_6->get_column3_3();
		Matrix4x4_SetColumn_m2328592759((&V_0), 3, L_7, /*hidden argument*/NULL);
		Matrix4x4_t1817901843  L_8 = V_0;
		return L_8;
	}
}
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface::SetCameraClipPlanes(System.Single,System.Single)
extern "C"  void UnityARSessionNativeInterface_SetCameraClipPlanes_m252007767 (UnityARSessionNativeInterface_t3929719369 * __this, float ___nearZ0, float ___farZ1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityARSessionNativeInterface_SetCameraClipPlanes_m252007767_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = ___nearZ0;
		float L_1 = ___farZ1;
		IL2CPP_RUNTIME_CLASS_INIT(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var);
		UnityARSessionNativeInterface_SetCameraNearFar_m3141858259(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface::SetCapturePixelData(System.Boolean,System.IntPtr,System.IntPtr)
extern "C"  void UnityARSessionNativeInterface_SetCapturePixelData_m3385125279 (UnityARSessionNativeInterface_t3929719369 * __this, bool ___enable0, intptr_t ___pYByteArray1, intptr_t ___pUVByteArray2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityARSessionNativeInterface_SetCapturePixelData_m3385125279_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		bool L_0 = ___enable0;
		if (!L_0)
		{
			goto IL_000c;
		}
	}
	{
		G_B3_0 = 1;
		goto IL_000d;
	}

IL_000c:
	{
		G_B3_0 = 0;
	}

IL_000d:
	{
		V_0 = G_B3_0;
		int32_t L_1 = V_0;
		intptr_t L_2 = ___pYByteArray1;
		intptr_t L_3 = ___pUVByteArray2;
		IL2CPP_RUNTIME_CLASS_INIT(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var);
		UnityARSessionNativeInterface_CapturePixelData_m2086582447(NULL /*static, unused*/, L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface::_frame_update(UnityEngine.XR.iOS.internal_UnityARCamera)
extern "C"  void UnityARSessionNativeInterface__frame_update_m1185891212 (RuntimeObject * __this /* static, unused */, internal_UnityARCamera_t3920739388  ___camera0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityARSessionNativeInterface__frame_update_m1185891212_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	UnityARCamera_t2069150450  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(UnityARCamera_t2069150450 ));
		UnityARMatrix4x4_t4073345847  L_0 = (&___camera0)->get_projectionMatrix_1();
		(&V_0)->set_projectionMatrix_1(L_0);
		UnityARMatrix4x4_t4073345847  L_1 = (&___camera0)->get_worldTransform_0();
		(&V_0)->set_worldTransform_0(L_1);
		int32_t L_2 = (&___camera0)->get_trackingState_2();
		(&V_0)->set_trackingState_2(L_2);
		int32_t L_3 = (&___camera0)->get_trackingReason_3();
		(&V_0)->set_trackingReason_3(L_3);
		UnityVideoParams_t4155354995  L_4 = (&___camera0)->get_videoParams_4();
		(&V_0)->set_videoParams_4(L_4);
		UnityARLightEstimate_t1498306117  L_5 = (&___camera0)->get_lightEstimation_5();
		(&V_0)->set_lightEstimation_5(L_5);
		UnityARMatrix4x4_t4073345847  L_6 = (&___camera0)->get_displayTransform_6();
		(&V_0)->set_displayTransform_6(L_6);
		UnityARCamera_t2069150450  L_7 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var);
		((UnityARSessionNativeInterface_t3929719369_StaticFields*)il2cpp_codegen_static_fields_for(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var))->set_s_Camera_12(L_7);
		uint32_t L_8 = (&___camera0)->get_getPointCloudData_7();
		if ((!(((uint32_t)L_8) == ((uint32_t)1))))
		{
			goto IL_0087;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var);
		UnityARSessionNativeInterface_UpdatePointCloudData_m745059285(NULL /*static, unused*/, (((UnityARSessionNativeInterface_t3929719369_StaticFields*)il2cpp_codegen_static_fields_for(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var))->get_address_of_s_Camera_12()), /*hidden argument*/NULL);
	}

IL_0087:
	{
		IL2CPP_RUNTIME_CLASS_INIT(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var);
		ARFrameUpdate_t1157215840 * L_9 = ((UnityARSessionNativeInterface_t3929719369_StaticFields*)il2cpp_codegen_static_fields_for(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var))->get_ARFrameUpdatedEvent_0();
		if (!L_9)
		{
			goto IL_00a0;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var);
		ARFrameUpdate_t1157215840 * L_10 = ((UnityARSessionNativeInterface_t3929719369_StaticFields*)il2cpp_codegen_static_fields_for(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var))->get_ARFrameUpdatedEvent_0();
		UnityARCamera_t2069150450  L_11 = ((UnityARSessionNativeInterface_t3929719369_StaticFields*)il2cpp_codegen_static_fields_for(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var))->get_s_Camera_12();
		NullCheck(L_10);
		ARFrameUpdate_Invoke_m2222676468(L_10, L_11, /*hidden argument*/NULL);
	}

IL_00a0:
	{
		return;
	}
}
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface::_ar_tracking_changed(UnityEngine.XR.iOS.internal_UnityARCamera)
extern "C"  void UnityARSessionNativeInterface__ar_tracking_changed_m2779841264 (RuntimeObject * __this /* static, unused */, internal_UnityARCamera_t3920739388  ___camera0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityARSessionNativeInterface__ar_tracking_changed_m2779841264_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var);
		int32_t L_0 = (&___camera0)->get_trackingState_2();
		(((UnityARSessionNativeInterface_t3929719369_StaticFields*)il2cpp_codegen_static_fields_for(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var))->get_address_of_s_Camera_12())->set_trackingState_2(L_0);
		int32_t L_1 = (&___camera0)->get_trackingReason_3();
		(((UnityARSessionNativeInterface_t3929719369_StaticFields*)il2cpp_codegen_static_fields_for(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var))->get_address_of_s_Camera_12())->set_trackingReason_3(L_1);
		ARSessionTrackingChanged_t923029411 * L_2 = ((UnityARSessionNativeInterface_t3929719369_StaticFields*)il2cpp_codegen_static_fields_for(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var))->get_ARSessionTrackingChangedEvent_10();
		if (!L_2)
		{
			goto IL_003b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var);
		ARSessionTrackingChanged_t923029411 * L_3 = ((UnityARSessionNativeInterface_t3929719369_StaticFields*)il2cpp_codegen_static_fields_for(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var))->get_ARSessionTrackingChangedEvent_10();
		UnityARCamera_t2069150450  L_4 = ((UnityARSessionNativeInterface_t3929719369_StaticFields*)il2cpp_codegen_static_fields_for(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var))->get_s_Camera_12();
		NullCheck(L_3);
		ARSessionTrackingChanged_Invoke_m4139867491(L_3, L_4, /*hidden argument*/NULL);
	}

IL_003b:
	{
		return;
	}
}
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface::UpdatePointCloudData(UnityEngine.XR.iOS.UnityARCamera&)
extern "C"  void UnityARSessionNativeInterface_UpdatePointCloudData_m745059285 (RuntimeObject * __this /* static, unused */, UnityARCamera_t2069150450 * ___camera0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityARSessionNativeInterface_UpdatePointCloudData_m745059285_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset(&V_0, 0, sizeof(V_0));
	uint32_t V_1 = 0;
	bool V_2 = false;
	SingleU5BU5D_t1444911251* V_3 = NULL;
	Vector3U5BU5D_t1718750761* V_4 = NULL;
	int32_t V_5 = 0;
	{
		V_0 = (intptr_t)(0);
		V_1 = 0;
		IL2CPP_RUNTIME_CLASS_INIT(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var);
		bool L_0 = UnityARSessionNativeInterface_GetARPointCloud_m48288112(NULL /*static, unused*/, (&V_0), (&V_1), /*hidden argument*/NULL);
		V_2 = L_0;
		V_3 = (SingleU5BU5D_t1444911251*)NULL;
		bool L_1 = V_2;
		if (!L_1)
		{
			goto IL_00a2;
		}
	}
	{
		uint32_t L_2 = V_1;
		V_3 = ((SingleU5BU5D_t1444911251*)SZArrayNew(SingleU5BU5D_t1444911251_il2cpp_TypeInfo_var, (uint32_t)(((uintptr_t)L_2))));
		intptr_t L_3 = V_0;
		SingleU5BU5D_t1444911251* L_4 = V_3;
		uint32_t L_5 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_t1757017490_il2cpp_TypeInfo_var);
		Marshal_Copy_m2107953215(NULL /*static, unused*/, L_3, L_4, 0, L_5, /*hidden argument*/NULL);
		uint32_t L_6 = V_1;
		V_4 = ((Vector3U5BU5D_t1718750761*)SZArrayNew(Vector3U5BU5D_t1718750761_il2cpp_TypeInfo_var, (uint32_t)(((uintptr_t)((int32_t)((uint32_t)(int32_t)L_6/(uint32_t)(int32_t)4))))));
		V_5 = 0;
		goto IL_0090;
	}

IL_003e:
	{
		Vector3U5BU5D_t1718750761* L_7 = V_4;
		int32_t L_8 = V_5;
		NullCheck(L_7);
		SingleU5BU5D_t1444911251* L_9 = V_3;
		int32_t L_10 = V_5;
		int32_t L_11 = L_10;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
		NullCheck(L_9);
		int32_t L_12 = L_11;
		float L_13 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)((int32_t)L_8/(int32_t)4)))))->set_x_1(L_13);
		Vector3U5BU5D_t1718750761* L_14 = V_4;
		int32_t L_15 = V_5;
		NullCheck(L_14);
		SingleU5BU5D_t1444911251* L_16 = V_3;
		int32_t L_17 = V_5;
		int32_t L_18 = L_17;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1));
		NullCheck(L_16);
		int32_t L_19 = L_18;
		float L_20 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)((int32_t)L_15/(int32_t)4)))))->set_y_2(L_20);
		Vector3U5BU5D_t1718750761* L_21 = V_4;
		int32_t L_22 = V_5;
		NullCheck(L_21);
		SingleU5BU5D_t1444911251* L_23 = V_3;
		int32_t L_24 = V_5;
		int32_t L_25 = L_24;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_25, (int32_t)1));
		NullCheck(L_23);
		int32_t L_26 = L_25;
		float L_27 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		((L_21)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)((int32_t)L_22/(int32_t)4)))))->set_z_3(((-L_27)));
		int32_t L_28 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)1));
	}

IL_0090:
	{
		int32_t L_29 = V_5;
		uint32_t L_30 = V_1;
		if ((((int64_t)(((int64_t)((int64_t)L_29)))) < ((int64_t)(((int64_t)((uint64_t)L_30))))))
		{
			goto IL_003e;
		}
	}
	{
		UnityARCamera_t2069150450 * L_31 = ___camera0;
		Vector3U5BU5D_t1718750761* L_32 = V_4;
		L_31->set_pointCloudData_7(L_32);
	}

IL_00a2:
	{
		return;
	}
}
// UnityEngine.XR.iOS.ARPlaneAnchor UnityEngine.XR.iOS.UnityARSessionNativeInterface::GetPlaneAnchorFromAnchorData(UnityEngine.XR.iOS.UnityARAnchorData)
extern "C"  ARPlaneAnchor_t2049372221  UnityARSessionNativeInterface_GetPlaneAnchorFromAnchorData_m2570782633 (RuntimeObject * __this /* static, unused */, UnityARAnchorData_t1157236668  ___anchor0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityARSessionNativeInterface_GetPlaneAnchorFromAnchorData_m2570782633_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ARPlaneAnchor_t2049372221  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Matrix4x4_t1817901843  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ARPlaneAnchor_t2049372221 ));
		intptr_t L_0 = (&___anchor0)->get_ptrIdentifier_0();
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_t1757017490_il2cpp_TypeInfo_var);
		String_t* L_1 = Marshal_PtrToStringAuto_m3648166035(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		(&V_0)->set_identifier_0(L_1);
		il2cpp_codegen_initobj((&V_1), sizeof(Matrix4x4_t1817901843 ));
		UnityARMatrix4x4_t4073345847 * L_2 = (&___anchor0)->get_address_of_transform_1();
		Vector4_t3319028937  L_3 = L_2->get_column0_0();
		Matrix4x4_SetColumn_m2328592759((&V_1), 0, L_3, /*hidden argument*/NULL);
		UnityARMatrix4x4_t4073345847 * L_4 = (&___anchor0)->get_address_of_transform_1();
		Vector4_t3319028937  L_5 = L_4->get_column1_1();
		Matrix4x4_SetColumn_m2328592759((&V_1), 1, L_5, /*hidden argument*/NULL);
		UnityARMatrix4x4_t4073345847 * L_6 = (&___anchor0)->get_address_of_transform_1();
		Vector4_t3319028937  L_7 = L_6->get_column2_2();
		Matrix4x4_SetColumn_m2328592759((&V_1), 2, L_7, /*hidden argument*/NULL);
		UnityARMatrix4x4_t4073345847 * L_8 = (&___anchor0)->get_address_of_transform_1();
		Vector4_t3319028937  L_9 = L_8->get_column3_3();
		Matrix4x4_SetColumn_m2328592759((&V_1), 3, L_9, /*hidden argument*/NULL);
		Matrix4x4_t1817901843  L_10 = V_1;
		(&V_0)->set_transform_1(L_10);
		int64_t L_11 = (&___anchor0)->get_alignment_2();
		(&V_0)->set_alignment_2(L_11);
		Vector4_t3319028937 * L_12 = (&___anchor0)->get_address_of_center_3();
		float L_13 = L_12->get_x_1();
		Vector4_t3319028937 * L_14 = (&___anchor0)->get_address_of_center_3();
		float L_15 = L_14->get_y_2();
		Vector4_t3319028937 * L_16 = (&___anchor0)->get_address_of_center_3();
		float L_17 = L_16->get_z_3();
		Vector3_t3722313464  L_18;
		memset(&L_18, 0, sizeof(L_18));
		Vector3__ctor_m3353183577((&L_18), L_13, L_15, L_17, /*hidden argument*/NULL);
		(&V_0)->set_center_3(L_18);
		Vector4_t3319028937 * L_19 = (&___anchor0)->get_address_of_extent_4();
		float L_20 = L_19->get_x_1();
		Vector4_t3319028937 * L_21 = (&___anchor0)->get_address_of_extent_4();
		float L_22 = L_21->get_y_2();
		Vector4_t3319028937 * L_23 = (&___anchor0)->get_address_of_extent_4();
		float L_24 = L_23->get_z_3();
		Vector3_t3722313464  L_25;
		memset(&L_25, 0, sizeof(L_25));
		Vector3__ctor_m3353183577((&L_25), L_20, L_22, L_24, /*hidden argument*/NULL);
		(&V_0)->set_extent_4(L_25);
		ARPlaneAnchor_t2049372221  L_26 = V_0;
		return L_26;
	}
}
// UnityEngine.XR.iOS.ARUserAnchor UnityEngine.XR.iOS.UnityARSessionNativeInterface::GetUserAnchorFromAnchorData(UnityEngine.XR.iOS.UnityARUserAnchorData)
extern "C"  ARUserAnchor_t1406831531  UnityARSessionNativeInterface_GetUserAnchorFromAnchorData_m3565353041 (RuntimeObject * __this /* static, unused */, UnityARUserAnchorData_t1976826249  ___anchor0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityARSessionNativeInterface_GetUserAnchorFromAnchorData_m3565353041_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ARUserAnchor_t1406831531  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Matrix4x4_t1817901843  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ARUserAnchor_t1406831531 ));
		intptr_t L_0 = (&___anchor0)->get_ptrIdentifier_0();
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_t1757017490_il2cpp_TypeInfo_var);
		String_t* L_1 = Marshal_PtrToStringAuto_m3648166035(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		(&V_0)->set_identifier_0(L_1);
		il2cpp_codegen_initobj((&V_1), sizeof(Matrix4x4_t1817901843 ));
		UnityARMatrix4x4_t4073345847 * L_2 = (&___anchor0)->get_address_of_transform_1();
		Vector4_t3319028937  L_3 = L_2->get_column0_0();
		Matrix4x4_SetColumn_m2328592759((&V_1), 0, L_3, /*hidden argument*/NULL);
		UnityARMatrix4x4_t4073345847 * L_4 = (&___anchor0)->get_address_of_transform_1();
		Vector4_t3319028937  L_5 = L_4->get_column1_1();
		Matrix4x4_SetColumn_m2328592759((&V_1), 1, L_5, /*hidden argument*/NULL);
		UnityARMatrix4x4_t4073345847 * L_6 = (&___anchor0)->get_address_of_transform_1();
		Vector4_t3319028937  L_7 = L_6->get_column2_2();
		Matrix4x4_SetColumn_m2328592759((&V_1), 2, L_7, /*hidden argument*/NULL);
		UnityARMatrix4x4_t4073345847 * L_8 = (&___anchor0)->get_address_of_transform_1();
		Vector4_t3319028937  L_9 = L_8->get_column3_3();
		Matrix4x4_SetColumn_m2328592759((&V_1), 3, L_9, /*hidden argument*/NULL);
		Matrix4x4_t1817901843  L_10 = V_1;
		(&V_0)->set_transform_1(L_10);
		ARUserAnchor_t1406831531  L_11 = V_0;
		return L_11;
	}
}
// UnityEngine.XR.iOS.ARHitTestResult UnityEngine.XR.iOS.UnityARSessionNativeInterface::GetHitTestResultFromResultData(UnityEngine.XR.iOS.UnityARHitTestResult)
extern "C"  ARHitTestResult_t1279023930  UnityARSessionNativeInterface_GetHitTestResultFromResultData_m657555234 (RuntimeObject * __this /* static, unused */, UnityARHitTestResult_t4176230866  ___resultData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityARSessionNativeInterface_GetHitTestResultFromResultData_m657555234_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ARHitTestResult_t1279023930  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ARHitTestResult_t1279023930 ));
		int64_t L_0 = (&___resultData0)->get_type_0();
		(&V_0)->set_type_0(L_0);
		double L_1 = (&___resultData0)->get_distance_1();
		(&V_0)->set_distance_1(L_1);
		Matrix4x4_t1817901843  L_2 = (&___resultData0)->get_localTransform_2();
		(&V_0)->set_localTransform_2(L_2);
		Matrix4x4_t1817901843  L_3 = (&___resultData0)->get_worldTransform_3();
		(&V_0)->set_worldTransform_3(L_3);
		bool L_4 = (&___resultData0)->get_isValid_5();
		(&V_0)->set_isValid_5(L_4);
		intptr_t L_5 = (&___resultData0)->get_anchor_4();
		bool L_6 = IntPtr_op_Inequality_m3063970704(NULL /*static, unused*/, L_5, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0077;
		}
	}
	{
		intptr_t L_7 = (&___resultData0)->get_anchor_4();
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_t1757017490_il2cpp_TypeInfo_var);
		String_t* L_8 = Marshal_PtrToStringAuto_m3648166035(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		(&V_0)->set_anchorIdentifier_4(L_8);
	}

IL_0077:
	{
		ARHitTestResult_t1279023930  L_9 = V_0;
		return L_9;
	}
}
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface::_anchor_added(UnityEngine.XR.iOS.UnityARAnchorData)
extern "C"  void UnityARSessionNativeInterface__anchor_added_m2468825111 (RuntimeObject * __this /* static, unused */, UnityARAnchorData_t1157236668  ___anchor0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityARSessionNativeInterface__anchor_added_m2468825111_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ARPlaneAnchor_t2049372221  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		IL2CPP_RUNTIME_CLASS_INIT(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var);
		ARAnchorAdded_t1608557165 * L_0 = ((UnityARSessionNativeInterface_t3929719369_StaticFields*)il2cpp_codegen_static_fields_for(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var))->get_ARAnchorAddedEvent_1();
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		UnityARAnchorData_t1157236668  L_1 = ___anchor0;
		IL2CPP_RUNTIME_CLASS_INIT(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var);
		ARPlaneAnchor_t2049372221  L_2 = UnityARSessionNativeInterface_GetPlaneAnchorFromAnchorData_m2570782633(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		ARAnchorAdded_t1608557165 * L_3 = ((UnityARSessionNativeInterface_t3929719369_StaticFields*)il2cpp_codegen_static_fields_for(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var))->get_ARAnchorAddedEvent_1();
		ARPlaneAnchor_t2049372221  L_4 = V_0;
		NullCheck(L_3);
		ARAnchorAdded_Invoke_m3997182965(L_3, L_4, /*hidden argument*/NULL);
	}

IL_001c:
	{
		return;
	}
}
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface::_anchor_updated(UnityEngine.XR.iOS.UnityARAnchorData)
extern "C"  void UnityARSessionNativeInterface__anchor_updated_m1758166972 (RuntimeObject * __this /* static, unused */, UnityARAnchorData_t1157236668  ___anchor0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityARSessionNativeInterface__anchor_updated_m1758166972_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ARPlaneAnchor_t2049372221  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		IL2CPP_RUNTIME_CLASS_INIT(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var);
		ARAnchorUpdated_t3113222537 * L_0 = ((UnityARSessionNativeInterface_t3929719369_StaticFields*)il2cpp_codegen_static_fields_for(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var))->get_ARAnchorUpdatedEvent_2();
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		UnityARAnchorData_t1157236668  L_1 = ___anchor0;
		IL2CPP_RUNTIME_CLASS_INIT(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var);
		ARPlaneAnchor_t2049372221  L_2 = UnityARSessionNativeInterface_GetPlaneAnchorFromAnchorData_m2570782633(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		ARAnchorUpdated_t3113222537 * L_3 = ((UnityARSessionNativeInterface_t3929719369_StaticFields*)il2cpp_codegen_static_fields_for(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var))->get_ARAnchorUpdatedEvent_2();
		ARPlaneAnchor_t2049372221  L_4 = V_0;
		NullCheck(L_3);
		ARAnchorUpdated_Invoke_m4060209543(L_3, L_4, /*hidden argument*/NULL);
	}

IL_001c:
	{
		return;
	}
}
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface::_anchor_removed(UnityEngine.XR.iOS.UnityARAnchorData)
extern "C"  void UnityARSessionNativeInterface__anchor_removed_m124050222 (RuntimeObject * __this /* static, unused */, UnityARAnchorData_t1157236668  ___anchor0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityARSessionNativeInterface__anchor_removed_m124050222_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ARPlaneAnchor_t2049372221  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		IL2CPP_RUNTIME_CLASS_INIT(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var);
		ARAnchorRemoved_t4030593004 * L_0 = ((UnityARSessionNativeInterface_t3929719369_StaticFields*)il2cpp_codegen_static_fields_for(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var))->get_ARAnchorRemovedEvent_3();
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		UnityARAnchorData_t1157236668  L_1 = ___anchor0;
		IL2CPP_RUNTIME_CLASS_INIT(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var);
		ARPlaneAnchor_t2049372221  L_2 = UnityARSessionNativeInterface_GetPlaneAnchorFromAnchorData_m2570782633(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		ARAnchorRemoved_t4030593004 * L_3 = ((UnityARSessionNativeInterface_t3929719369_StaticFields*)il2cpp_codegen_static_fields_for(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var))->get_ARAnchorRemovedEvent_3();
		ARPlaneAnchor_t2049372221  L_4 = V_0;
		NullCheck(L_3);
		ARAnchorRemoved_Invoke_m2507577298(L_3, L_4, /*hidden argument*/NULL);
	}

IL_001c:
	{
		return;
	}
}
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface::_user_anchor_added(UnityEngine.XR.iOS.UnityARUserAnchorData)
extern "C"  void UnityARSessionNativeInterface__user_anchor_added_m3126812148 (RuntimeObject * __this /* static, unused */, UnityARUserAnchorData_t1976826249  ___anchor0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityARSessionNativeInterface__user_anchor_added_m3126812148_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ARUserAnchor_t1406831531  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		IL2CPP_RUNTIME_CLASS_INIT(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var);
		ARUserAnchorAdded_t1851120876 * L_0 = ((UnityARSessionNativeInterface_t3929719369_StaticFields*)il2cpp_codegen_static_fields_for(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var))->get_ARUserAnchorAddedEvent_4();
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		UnityARUserAnchorData_t1976826249  L_1 = ___anchor0;
		IL2CPP_RUNTIME_CLASS_INIT(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var);
		ARUserAnchor_t1406831531  L_2 = UnityARSessionNativeInterface_GetUserAnchorFromAnchorData_m3565353041(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		ARUserAnchorAdded_t1851120876 * L_3 = ((UnityARSessionNativeInterface_t3929719369_StaticFields*)il2cpp_codegen_static_fields_for(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var))->get_ARUserAnchorAddedEvent_4();
		ARUserAnchor_t1406831531  L_4 = V_0;
		NullCheck(L_3);
		ARUserAnchorAdded_Invoke_m555329492(L_3, L_4, /*hidden argument*/NULL);
	}

IL_001c:
	{
		return;
	}
}
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface::_user_anchor_updated(UnityEngine.XR.iOS.UnityARUserAnchorData)
extern "C"  void UnityARSessionNativeInterface__user_anchor_updated_m2680404376 (RuntimeObject * __this /* static, unused */, UnityARUserAnchorData_t1976826249  ___anchor0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityARSessionNativeInterface__user_anchor_updated_m2680404376_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ARUserAnchor_t1406831531  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		IL2CPP_RUNTIME_CLASS_INIT(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var);
		ARUserAnchorUpdated_t4007601678 * L_0 = ((UnityARSessionNativeInterface_t3929719369_StaticFields*)il2cpp_codegen_static_fields_for(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var))->get_ARUserAnchorUpdatedEvent_5();
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		UnityARUserAnchorData_t1976826249  L_1 = ___anchor0;
		IL2CPP_RUNTIME_CLASS_INIT(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var);
		ARUserAnchor_t1406831531  L_2 = UnityARSessionNativeInterface_GetUserAnchorFromAnchorData_m3565353041(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		ARUserAnchorUpdated_t4007601678 * L_3 = ((UnityARSessionNativeInterface_t3929719369_StaticFields*)il2cpp_codegen_static_fields_for(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var))->get_ARUserAnchorUpdatedEvent_5();
		ARUserAnchor_t1406831531  L_4 = V_0;
		NullCheck(L_3);
		ARUserAnchorUpdated_Invoke_m2571719984(L_3, L_4, /*hidden argument*/NULL);
	}

IL_001c:
	{
		return;
	}
}
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface::_user_anchor_removed(UnityEngine.XR.iOS.UnityARUserAnchorData)
extern "C"  void UnityARSessionNativeInterface__user_anchor_removed_m3345544012 (RuntimeObject * __this /* static, unused */, UnityARUserAnchorData_t1976826249  ___anchor0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityARSessionNativeInterface__user_anchor_removed_m3345544012_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ARUserAnchor_t1406831531  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		IL2CPP_RUNTIME_CLASS_INIT(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var);
		ARUserAnchorRemoved_t23344545 * L_0 = ((UnityARSessionNativeInterface_t3929719369_StaticFields*)il2cpp_codegen_static_fields_for(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var))->get_ARUserAnchorRemovedEvent_6();
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		UnityARUserAnchorData_t1976826249  L_1 = ___anchor0;
		IL2CPP_RUNTIME_CLASS_INIT(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var);
		ARUserAnchor_t1406831531  L_2 = UnityARSessionNativeInterface_GetUserAnchorFromAnchorData_m3565353041(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		ARUserAnchorRemoved_t23344545 * L_3 = ((UnityARSessionNativeInterface_t3929719369_StaticFields*)il2cpp_codegen_static_fields_for(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var))->get_ARUserAnchorRemovedEvent_6();
		ARUserAnchor_t1406831531  L_4 = V_0;
		NullCheck(L_3);
		ARUserAnchorRemoved_Invoke_m460985818(L_3, L_4, /*hidden argument*/NULL);
	}

IL_001c:
	{
		return;
	}
}
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface::_ar_session_failed(System.String)
extern "C"  void UnityARSessionNativeInterface__ar_session_failed_m3752069079 (RuntimeObject * __this /* static, unused */, String_t* ___error0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityARSessionNativeInterface__ar_session_failed_m3752069079_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var);
		ARSessionFailed_t2125002991 * L_0 = ((UnityARSessionNativeInterface_t3929719369_StaticFields*)il2cpp_codegen_static_fields_for(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var))->get_ARSessionFailedEvent_7();
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var);
		ARSessionFailed_t2125002991 * L_1 = ((UnityARSessionNativeInterface_t3929719369_StaticFields*)il2cpp_codegen_static_fields_for(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var))->get_ARSessionFailedEvent_7();
		String_t* L_2 = ___error0;
		NullCheck(L_1);
		ARSessionFailed_Invoke_m4221473546(L_1, L_2, /*hidden argument*/NULL);
	}

IL_0015:
	{
		return;
	}
}
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface::_ar_session_interrupted()
extern "C"  void UnityARSessionNativeInterface__ar_session_interrupted_m3485826967 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityARSessionNativeInterface__ar_session_interrupted_m3485826967_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral3418950510, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var);
		ARSessionCallback_t3772093212 * L_0 = ((UnityARSessionNativeInterface_t3929719369_StaticFields*)il2cpp_codegen_static_fields_for(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var))->get_ARSessionInterruptedEvent_8();
		if (!L_0)
		{
			goto IL_001e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var);
		ARSessionCallback_t3772093212 * L_1 = ((UnityARSessionNativeInterface_t3929719369_StaticFields*)il2cpp_codegen_static_fields_for(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var))->get_ARSessionInterruptedEvent_8();
		NullCheck(L_1);
		ARSessionCallback_Invoke_m75738571(L_1, /*hidden argument*/NULL);
	}

IL_001e:
	{
		return;
	}
}
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface::_ar_session_interruption_ended()
extern "C"  void UnityARSessionNativeInterface__ar_session_interruption_ended_m3467125083 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityARSessionNativeInterface__ar_session_interruption_ended_m3467125083_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral2932545360, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var);
		ARSessionCallback_t3772093212 * L_0 = ((UnityARSessionNativeInterface_t3929719369_StaticFields*)il2cpp_codegen_static_fields_for(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var))->get_ARSessioninterruptionEndedEvent_9();
		if (!L_0)
		{
			goto IL_001e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var);
		ARSessionCallback_t3772093212 * L_1 = ((UnityARSessionNativeInterface_t3929719369_StaticFields*)il2cpp_codegen_static_fields_for(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var))->get_ARSessioninterruptionEndedEvent_9();
		NullCheck(L_1);
		ARSessionCallback_Invoke_m75738571(L_1, /*hidden argument*/NULL);
	}

IL_001e:
	{
		return;
	}
}
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface::RunWithConfigAndOptions(UnityEngine.XR.iOS.ARKitWorldTrackingSessionConfiguration,UnityEngine.XR.iOS.UnityARSessionRunOption)
extern "C"  void UnityARSessionNativeInterface_RunWithConfigAndOptions_m2136170177 (UnityARSessionNativeInterface_t3929719369 * __this, ARKitWorldTrackingSessionConfiguration_t273386347  ___config0, int32_t ___runOptions1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityARSessionNativeInterface_RunWithConfigAndOptions_m2136170177_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = __this->get_m_NativeARSession_11();
		ARKitWorldTrackingSessionConfiguration_t273386347  L_1 = ___config0;
		int32_t L_2 = ___runOptions1;
		IL2CPP_RUNTIME_CLASS_INIT(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var);
		UnityARSessionNativeInterface_StartWorldTrackingSessionWithOptions_m608014144(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface::RunWithConfig(UnityEngine.XR.iOS.ARKitWorldTrackingSessionConfiguration)
extern "C"  void UnityARSessionNativeInterface_RunWithConfig_m2250923232 (UnityARSessionNativeInterface_t3929719369 * __this, ARKitWorldTrackingSessionConfiguration_t273386347  ___config0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityARSessionNativeInterface_RunWithConfig_m2250923232_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = __this->get_m_NativeARSession_11();
		ARKitWorldTrackingSessionConfiguration_t273386347  L_1 = ___config0;
		IL2CPP_RUNTIME_CLASS_INIT(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var);
		UnityARSessionNativeInterface_StartWorldTrackingSession_m3386922388(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface::Run()
extern "C"  void UnityARSessionNativeInterface_Run_m1313012711 (UnityARSessionNativeInterface_t3929719369 * __this, const RuntimeMethod* method)
{
	{
		ARKitWorldTrackingSessionConfiguration_t273386347  L_0;
		memset(&L_0, 0, sizeof(L_0));
		ARKitWorldTrackingSessionConfiguration__ctor_m2019856913((&L_0), 0, 1, (bool)0, (bool)0, /*hidden argument*/NULL);
		UnityARSessionNativeInterface_RunWithConfig_m2250923232(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface::RunWithConfigAndOptions(UnityEngine.XR.iOS.ARKitSessionConfiguration,UnityEngine.XR.iOS.UnityARSessionRunOption)
extern "C"  void UnityARSessionNativeInterface_RunWithConfigAndOptions_m3338577758 (UnityARSessionNativeInterface_t3929719369 * __this, ARKitSessionConfiguration_t629136898  ___config0, int32_t ___runOptions1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityARSessionNativeInterface_RunWithConfigAndOptions_m3338577758_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = __this->get_m_NativeARSession_11();
		ARKitSessionConfiguration_t629136898  L_1 = ___config0;
		int32_t L_2 = ___runOptions1;
		IL2CPP_RUNTIME_CLASS_INIT(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var);
		UnityARSessionNativeInterface_StartSessionWithOptions_m2870684486(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface::RunWithConfig(UnityEngine.XR.iOS.ARKitSessionConfiguration)
extern "C"  void UnityARSessionNativeInterface_RunWithConfig_m2219734809 (UnityARSessionNativeInterface_t3929719369 * __this, ARKitSessionConfiguration_t629136898  ___config0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityARSessionNativeInterface_RunWithConfig_m2219734809_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = __this->get_m_NativeARSession_11();
		ARKitSessionConfiguration_t629136898  L_1 = ___config0;
		IL2CPP_RUNTIME_CLASS_INIT(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var);
		UnityARSessionNativeInterface_StartSession_m316901060(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface::Pause()
extern "C"  void UnityARSessionNativeInterface_Pause_m777408908 (UnityARSessionNativeInterface_t3929719369 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityARSessionNativeInterface_Pause_m777408908_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = __this->get_m_NativeARSession_11();
		IL2CPP_RUNTIME_CLASS_INIT(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var);
		UnityARSessionNativeInterface_PauseSession_m1728090040(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.Generic.List`1<UnityEngine.XR.iOS.ARHitTestResult> UnityEngine.XR.iOS.UnityARSessionNativeInterface::HitTest(UnityEngine.XR.iOS.ARPoint,UnityEngine.XR.iOS.ARHitTestResultType)
extern "C"  List_1_t2751098672 * UnityARSessionNativeInterface_HitTest_m4212263537 (UnityARSessionNativeInterface_t3929719369 * __this, ARPoint_t499615819  ___point0, int64_t ___types1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityARSessionNativeInterface_HitTest_m4212263537_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	List_1_t2751098672 * V_1 = NULL;
	int32_t V_2 = 0;
	UnityARHitTestResult_t4176230866  V_3;
	memset(&V_3, 0, sizeof(V_3));
	{
		intptr_t L_0 = __this->get_m_NativeARSession_11();
		ARPoint_t499615819  L_1 = ___point0;
		int64_t L_2 = ___types1;
		IL2CPP_RUNTIME_CLASS_INIT(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var);
		int32_t L_3 = UnityARSessionNativeInterface_HitTest_m1588561262(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		List_1_t2751098672 * L_4 = (List_1_t2751098672 *)il2cpp_codegen_object_new(List_1_t2751098672_il2cpp_TypeInfo_var);
		List_1__ctor_m3908426868(L_4, /*hidden argument*/List_1__ctor_m3908426868_RuntimeMethod_var);
		V_1 = L_4;
		V_2 = 0;
		goto IL_0032;
	}

IL_001b:
	{
		int32_t L_5 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var);
		UnityARHitTestResult_t4176230866  L_6 = UnityARSessionNativeInterface_GetLastHitTestResult_m1088536205(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		V_3 = L_6;
		List_1_t2751098672 * L_7 = V_1;
		UnityARHitTestResult_t4176230866  L_8 = V_3;
		ARHitTestResult_t1279023930  L_9 = UnityARSessionNativeInterface_GetHitTestResultFromResultData_m657555234(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		NullCheck(L_7);
		List_1_Add_m344229034(L_7, L_9, /*hidden argument*/List_1_Add_m344229034_RuntimeMethod_var);
		int32_t L_10 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_0032:
	{
		int32_t L_11 = V_2;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001b;
		}
	}
	{
		List_1_t2751098672 * L_13 = V_1;
		return L_13;
	}
}
// UnityEngine.XR.iOS.ARTextureHandles UnityEngine.XR.iOS.UnityARSessionNativeInterface::GetARVideoTextureHandles()
extern "C"  ARTextureHandles_t852411561  UnityARSessionNativeInterface_GetARVideoTextureHandles_m1964002027 (UnityARSessionNativeInterface_t3929719369 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityARSessionNativeInterface_GetARVideoTextureHandles_m1964002027_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var);
		ARTextureHandles_t852411561  L_0 = UnityARSessionNativeInterface_GetVideoTextureHandles_m1910050814(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Single UnityEngine.XR.iOS.UnityARSessionNativeInterface::GetARAmbientIntensity()
extern "C"  float UnityARSessionNativeInterface_GetARAmbientIntensity_m3197634932 (UnityARSessionNativeInterface_t3929719369 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityARSessionNativeInterface_GetARAmbientIntensity_m3197634932_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var);
		float L_0 = UnityARSessionNativeInterface_GetAmbientIntensity_m233148809(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Int32 UnityEngine.XR.iOS.UnityARSessionNativeInterface::GetARTrackingQuality()
extern "C"  int32_t UnityARSessionNativeInterface_GetARTrackingQuality_m3088238929 (UnityARSessionNativeInterface_t3929719369 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityARSessionNativeInterface_GetARTrackingQuality_m3088238929_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var);
		int32_t L_0 = UnityARSessionNativeInterface_GetTrackingQuality_m4236057654(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.XR.iOS.UnityARUserAnchorData UnityEngine.XR.iOS.UnityARSessionNativeInterface::AddUserAnchor(UnityEngine.XR.iOS.UnityARUserAnchorData)
extern "C"  UnityARUserAnchorData_t1976826249  UnityARSessionNativeInterface_AddUserAnchor_m2992758378 (UnityARSessionNativeInterface_t3929719369 * __this, UnityARUserAnchorData_t1976826249  ___anchorData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityARSessionNativeInterface_AddUserAnchor_m2992758378_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = __this->get_m_NativeARSession_11();
		UnityARUserAnchorData_t1976826249  L_1 = ___anchorData0;
		IL2CPP_RUNTIME_CLASS_INIT(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var);
		UnityARUserAnchorData_t1976826249  L_2 = UnityARSessionNativeInterface_SessionAddUserAnchor_m1245253078(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// UnityEngine.XR.iOS.UnityARUserAnchorData UnityEngine.XR.iOS.UnityARSessionNativeInterface::AddUserAnchorFromGameObject(UnityEngine.GameObject)
extern "C"  UnityARUserAnchorData_t1976826249  UnityARSessionNativeInterface_AddUserAnchorFromGameObject_m3087613556 (UnityARSessionNativeInterface_t3929719369 * __this, GameObject_t1113636619 * ___go0, const RuntimeMethod* method)
{
	UnityARUserAnchorData_t1976826249  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		GameObject_t1113636619 * L_0 = ___go0;
		UnityARUserAnchorData_t1976826249  L_1 = UnityARUserAnchorData_UnityARUserAnchorDataFromGameObject_m1971953404(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		UnityARUserAnchorData_t1976826249  L_2 = UnityARSessionNativeInterface_AddUserAnchor_m2992758378(__this, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		UnityARUserAnchorData_t1976826249  L_3 = V_0;
		return L_3;
	}
}
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface::RemoveUserAnchor(System.String)
extern "C"  void UnityARSessionNativeInterface_RemoveUserAnchor_m1246452311 (UnityARSessionNativeInterface_t3929719369 * __this, String_t* ___anchorIdentifier0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityARSessionNativeInterface_RemoveUserAnchor_m1246452311_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = __this->get_m_NativeARSession_11();
		String_t* L_1 = ___anchorIdentifier0;
		IL2CPP_RUNTIME_CLASS_INIT(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var);
		UnityARSessionNativeInterface_SessionRemoveUserAnchor_m3291627138(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface::.cctor()
extern "C"  void UnityARSessionNativeInterface__cctor_m4184237421 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	{
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
extern "C"  void DelegatePInvokeWrapper_ARAnchorAdded_t1608557165 (ARAnchorAdded_t1608557165 * __this, ARPlaneAnchor_t2049372221  ___anchorData0, const RuntimeMethod* method)
{


	typedef void (STDCALL *PInvokeFunc)(ARPlaneAnchor_t2049372221_marshaled_pinvoke);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___anchorData0' to native representation
	ARPlaneAnchor_t2049372221_marshaled_pinvoke ____anchorData0_marshaled = {};
	ARPlaneAnchor_t2049372221_marshal_pinvoke(___anchorData0, ____anchorData0_marshaled);

	// Native function invocation
	il2cppPInvokeFunc(____anchorData0_marshaled);

	// Marshaling cleanup of parameter '___anchorData0' native representation
	ARPlaneAnchor_t2049372221_marshal_pinvoke_cleanup(____anchorData0_marshaled);

}
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARAnchorAdded::.ctor(System.Object,System.IntPtr)
extern "C"  void ARAnchorAdded__ctor_m2575305337 (ARAnchorAdded_t1608557165 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARAnchorAdded::Invoke(UnityEngine.XR.iOS.ARPlaneAnchor)
extern "C"  void ARAnchorAdded_Invoke_m3997182965 (ARAnchorAdded_t1608557165 * __this, ARPlaneAnchor_t2049372221  ___anchorData0, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		ARAnchorAdded_Invoke_m3997182965((ARAnchorAdded_t1608557165 *)__this->get_prev_9(), ___anchorData0, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// open
			typedef void (*FunctionPointerType) (RuntimeObject *, ARPlaneAnchor_t2049372221 , const RuntimeMethod*);
			((FunctionPointerType)targetMethodPointer)(NULL, ___anchorData0, targetMethod);
		}
		else
		{
			// closed
			typedef void (*FunctionPointerType) (RuntimeObject *, void*, ARPlaneAnchor_t2049372221 , const RuntimeMethod*);
			((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___anchorData0, targetMethod);
		}
	}
	else
	{
		{
			// closed
			typedef void (*FunctionPointerType) (void*, ARPlaneAnchor_t2049372221 , const RuntimeMethod*);
			((FunctionPointerType)targetMethodPointer)(targetThis, ___anchorData0, targetMethod);
		}
	}
}
// System.IAsyncResult UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARAnchorAdded::BeginInvoke(UnityEngine.XR.iOS.ARPlaneAnchor,System.AsyncCallback,System.Object)
extern "C"  RuntimeObject* ARAnchorAdded_BeginInvoke_m2725108197 (ARAnchorAdded_t1608557165 * __this, ARPlaneAnchor_t2049372221  ___anchorData0, AsyncCallback_t3962456242 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARAnchorAdded_BeginInvoke_m2725108197_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(ARPlaneAnchor_t2049372221_il2cpp_TypeInfo_var, &___anchorData0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARAnchorAdded::EndInvoke(System.IAsyncResult)
extern "C"  void ARAnchorAdded_EndInvoke_m1659109961 (ARAnchorAdded_t1608557165 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  void DelegatePInvokeWrapper_ARAnchorRemoved_t4030593004 (ARAnchorRemoved_t4030593004 * __this, ARPlaneAnchor_t2049372221  ___anchorData0, const RuntimeMethod* method)
{


	typedef void (STDCALL *PInvokeFunc)(ARPlaneAnchor_t2049372221_marshaled_pinvoke);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___anchorData0' to native representation
	ARPlaneAnchor_t2049372221_marshaled_pinvoke ____anchorData0_marshaled = {};
	ARPlaneAnchor_t2049372221_marshal_pinvoke(___anchorData0, ____anchorData0_marshaled);

	// Native function invocation
	il2cppPInvokeFunc(____anchorData0_marshaled);

	// Marshaling cleanup of parameter '___anchorData0' native representation
	ARPlaneAnchor_t2049372221_marshal_pinvoke_cleanup(____anchorData0_marshaled);

}
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARAnchorRemoved::.ctor(System.Object,System.IntPtr)
extern "C"  void ARAnchorRemoved__ctor_m498665711 (ARAnchorRemoved_t4030593004 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARAnchorRemoved::Invoke(UnityEngine.XR.iOS.ARPlaneAnchor)
extern "C"  void ARAnchorRemoved_Invoke_m2507577298 (ARAnchorRemoved_t4030593004 * __this, ARPlaneAnchor_t2049372221  ___anchorData0, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		ARAnchorRemoved_Invoke_m2507577298((ARAnchorRemoved_t4030593004 *)__this->get_prev_9(), ___anchorData0, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// open
			typedef void (*FunctionPointerType) (RuntimeObject *, ARPlaneAnchor_t2049372221 , const RuntimeMethod*);
			((FunctionPointerType)targetMethodPointer)(NULL, ___anchorData0, targetMethod);
		}
		else
		{
			// closed
			typedef void (*FunctionPointerType) (RuntimeObject *, void*, ARPlaneAnchor_t2049372221 , const RuntimeMethod*);
			((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___anchorData0, targetMethod);
		}
	}
	else
	{
		{
			// closed
			typedef void (*FunctionPointerType) (void*, ARPlaneAnchor_t2049372221 , const RuntimeMethod*);
			((FunctionPointerType)targetMethodPointer)(targetThis, ___anchorData0, targetMethod);
		}
	}
}
// System.IAsyncResult UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARAnchorRemoved::BeginInvoke(UnityEngine.XR.iOS.ARPlaneAnchor,System.AsyncCallback,System.Object)
extern "C"  RuntimeObject* ARAnchorRemoved_BeginInvoke_m495283272 (ARAnchorRemoved_t4030593004 * __this, ARPlaneAnchor_t2049372221  ___anchorData0, AsyncCallback_t3962456242 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARAnchorRemoved_BeginInvoke_m495283272_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(ARPlaneAnchor_t2049372221_il2cpp_TypeInfo_var, &___anchorData0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARAnchorRemoved::EndInvoke(System.IAsyncResult)
extern "C"  void ARAnchorRemoved_EndInvoke_m271550196 (ARAnchorRemoved_t4030593004 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  void DelegatePInvokeWrapper_ARAnchorUpdated_t3113222537 (ARAnchorUpdated_t3113222537 * __this, ARPlaneAnchor_t2049372221  ___anchorData0, const RuntimeMethod* method)
{


	typedef void (STDCALL *PInvokeFunc)(ARPlaneAnchor_t2049372221_marshaled_pinvoke);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___anchorData0' to native representation
	ARPlaneAnchor_t2049372221_marshaled_pinvoke ____anchorData0_marshaled = {};
	ARPlaneAnchor_t2049372221_marshal_pinvoke(___anchorData0, ____anchorData0_marshaled);

	// Native function invocation
	il2cppPInvokeFunc(____anchorData0_marshaled);

	// Marshaling cleanup of parameter '___anchorData0' native representation
	ARPlaneAnchor_t2049372221_marshal_pinvoke_cleanup(____anchorData0_marshaled);

}
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARAnchorUpdated::.ctor(System.Object,System.IntPtr)
extern "C"  void ARAnchorUpdated__ctor_m4197086648 (ARAnchorUpdated_t3113222537 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARAnchorUpdated::Invoke(UnityEngine.XR.iOS.ARPlaneAnchor)
extern "C"  void ARAnchorUpdated_Invoke_m4060209543 (ARAnchorUpdated_t3113222537 * __this, ARPlaneAnchor_t2049372221  ___anchorData0, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		ARAnchorUpdated_Invoke_m4060209543((ARAnchorUpdated_t3113222537 *)__this->get_prev_9(), ___anchorData0, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// open
			typedef void (*FunctionPointerType) (RuntimeObject *, ARPlaneAnchor_t2049372221 , const RuntimeMethod*);
			((FunctionPointerType)targetMethodPointer)(NULL, ___anchorData0, targetMethod);
		}
		else
		{
			// closed
			typedef void (*FunctionPointerType) (RuntimeObject *, void*, ARPlaneAnchor_t2049372221 , const RuntimeMethod*);
			((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___anchorData0, targetMethod);
		}
	}
	else
	{
		{
			// closed
			typedef void (*FunctionPointerType) (void*, ARPlaneAnchor_t2049372221 , const RuntimeMethod*);
			((FunctionPointerType)targetMethodPointer)(targetThis, ___anchorData0, targetMethod);
		}
	}
}
// System.IAsyncResult UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARAnchorUpdated::BeginInvoke(UnityEngine.XR.iOS.ARPlaneAnchor,System.AsyncCallback,System.Object)
extern "C"  RuntimeObject* ARAnchorUpdated_BeginInvoke_m2773603932 (ARAnchorUpdated_t3113222537 * __this, ARPlaneAnchor_t2049372221  ___anchorData0, AsyncCallback_t3962456242 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARAnchorUpdated_BeginInvoke_m2773603932_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(ARPlaneAnchor_t2049372221_il2cpp_TypeInfo_var, &___anchorData0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARAnchorUpdated::EndInvoke(System.IAsyncResult)
extern "C"  void ARAnchorUpdated_EndInvoke_m3227110389 (ARAnchorUpdated_t3113222537 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARFrameUpdate::.ctor(System.Object,System.IntPtr)
extern "C"  void ARFrameUpdate__ctor_m3633991724 (ARFrameUpdate_t1157215840 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARFrameUpdate::Invoke(UnityEngine.XR.iOS.UnityARCamera)
extern "C"  void ARFrameUpdate_Invoke_m2222676468 (ARFrameUpdate_t1157215840 * __this, UnityARCamera_t2069150450  ___camera0, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		ARFrameUpdate_Invoke_m2222676468((ARFrameUpdate_t1157215840 *)__this->get_prev_9(), ___camera0, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// open
			typedef void (*FunctionPointerType) (RuntimeObject *, UnityARCamera_t2069150450 , const RuntimeMethod*);
			((FunctionPointerType)targetMethodPointer)(NULL, ___camera0, targetMethod);
		}
		else
		{
			// closed
			typedef void (*FunctionPointerType) (RuntimeObject *, void*, UnityARCamera_t2069150450 , const RuntimeMethod*);
			((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___camera0, targetMethod);
		}
	}
	else
	{
		{
			// closed
			typedef void (*FunctionPointerType) (void*, UnityARCamera_t2069150450 , const RuntimeMethod*);
			((FunctionPointerType)targetMethodPointer)(targetThis, ___camera0, targetMethod);
		}
	}
}
// System.IAsyncResult UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARFrameUpdate::BeginInvoke(UnityEngine.XR.iOS.UnityARCamera,System.AsyncCallback,System.Object)
extern "C"  RuntimeObject* ARFrameUpdate_BeginInvoke_m1285835900 (ARFrameUpdate_t1157215840 * __this, UnityARCamera_t2069150450  ___camera0, AsyncCallback_t3962456242 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARFrameUpdate_BeginInvoke_m1285835900_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(UnityARCamera_t2069150450_il2cpp_TypeInfo_var, &___camera0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARFrameUpdate::EndInvoke(System.IAsyncResult)
extern "C"  void ARFrameUpdate_EndInvoke_m3103104593 (ARFrameUpdate_t1157215840 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  void DelegatePInvokeWrapper_ARSessionCallback_t3772093212 (ARSessionCallback_t3772093212 * __this, const RuntimeMethod* method)
{
	typedef void (STDCALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARSessionCallback::.ctor(System.Object,System.IntPtr)
extern "C"  void ARSessionCallback__ctor_m1721563304 (ARSessionCallback_t3772093212 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARSessionCallback::Invoke()
extern "C"  void ARSessionCallback_Invoke_m75738571 (ARSessionCallback_t3772093212 * __this, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		ARSessionCallback_Invoke_m75738571((ARSessionCallback_t3772093212 *)__this->get_prev_9(), method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 0)
		{
			// open
			typedef void (*FunctionPointerType) (RuntimeObject *, const RuntimeMethod*);
			((FunctionPointerType)targetMethodPointer)(NULL, targetMethod);
		}
		else
		{
			// closed
			typedef void (*FunctionPointerType) (RuntimeObject *, void*, const RuntimeMethod*);
			((FunctionPointerType)targetMethodPointer)(NULL, targetThis, targetMethod);
		}
	}
	else
	{
		{
			// closed
			typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
			((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
		}
	}
}
// System.IAsyncResult UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARSessionCallback::BeginInvoke(System.AsyncCallback,System.Object)
extern "C"  RuntimeObject* ARSessionCallback_BeginInvoke_m3583497996 (ARSessionCallback_t3772093212 * __this, AsyncCallback_t3962456242 * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);
}
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARSessionCallback::EndInvoke(System.IAsyncResult)
extern "C"  void ARSessionCallback_EndInvoke_m2992524101 (ARSessionCallback_t3772093212 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  void DelegatePInvokeWrapper_ARSessionFailed_t2125002991 (ARSessionFailed_t2125002991 * __this, String_t* ___error0, const RuntimeMethod* method)
{
	typedef void (STDCALL *PInvokeFunc)(char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___error0' to native representation
	char* ____error0_marshaled = NULL;
	____error0_marshaled = il2cpp_codegen_marshal_string(___error0);

	// Native function invocation
	il2cppPInvokeFunc(____error0_marshaled);

	// Marshaling cleanup of parameter '___error0' native representation
	il2cpp_codegen_marshal_free(____error0_marshaled);
	____error0_marshaled = NULL;

}
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARSessionFailed::.ctor(System.Object,System.IntPtr)
extern "C"  void ARSessionFailed__ctor_m2525034792 (ARSessionFailed_t2125002991 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARSessionFailed::Invoke(System.String)
extern "C"  void ARSessionFailed_Invoke_m4221473546 (ARSessionFailed_t2125002991 * __this, String_t* ___error0, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		ARSessionFailed_Invoke_m4221473546((ARSessionFailed_t2125002991 *)__this->get_prev_9(), ___error0, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// open
			typedef void (*FunctionPointerType) (RuntimeObject *, String_t*, const RuntimeMethod*);
			((FunctionPointerType)targetMethodPointer)(NULL, ___error0, targetMethod);
		}
		else
		{
			// closed
			typedef void (*FunctionPointerType) (RuntimeObject *, void*, String_t*, const RuntimeMethod*);
			((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___error0, targetMethod);
		}
	}
	else
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// closed
			typedef void (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
			((FunctionPointerType)targetMethodPointer)(targetThis, ___error0, targetMethod);
		}
		else
		{
			// open
			typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
			((FunctionPointerType)targetMethodPointer)(___error0, targetMethod);
		}
	}
}
// System.IAsyncResult UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARSessionFailed::BeginInvoke(System.String,System.AsyncCallback,System.Object)
extern "C"  RuntimeObject* ARSessionFailed_BeginInvoke_m2689286745 (ARSessionFailed_t2125002991 * __this, String_t* ___error0, AsyncCallback_t3962456242 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___error0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARSessionFailed::EndInvoke(System.IAsyncResult)
extern "C"  void ARSessionFailed_EndInvoke_m3590783759 (ARSessionFailed_t2125002991 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARSessionTrackingChanged::.ctor(System.Object,System.IntPtr)
extern "C"  void ARSessionTrackingChanged__ctor_m1089589162 (ARSessionTrackingChanged_t923029411 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARSessionTrackingChanged::Invoke(UnityEngine.XR.iOS.UnityARCamera)
extern "C"  void ARSessionTrackingChanged_Invoke_m4139867491 (ARSessionTrackingChanged_t923029411 * __this, UnityARCamera_t2069150450  ___camera0, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		ARSessionTrackingChanged_Invoke_m4139867491((ARSessionTrackingChanged_t923029411 *)__this->get_prev_9(), ___camera0, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// open
			typedef void (*FunctionPointerType) (RuntimeObject *, UnityARCamera_t2069150450 , const RuntimeMethod*);
			((FunctionPointerType)targetMethodPointer)(NULL, ___camera0, targetMethod);
		}
		else
		{
			// closed
			typedef void (*FunctionPointerType) (RuntimeObject *, void*, UnityARCamera_t2069150450 , const RuntimeMethod*);
			((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___camera0, targetMethod);
		}
	}
	else
	{
		{
			// closed
			typedef void (*FunctionPointerType) (void*, UnityARCamera_t2069150450 , const RuntimeMethod*);
			((FunctionPointerType)targetMethodPointer)(targetThis, ___camera0, targetMethod);
		}
	}
}
// System.IAsyncResult UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARSessionTrackingChanged::BeginInvoke(UnityEngine.XR.iOS.UnityARCamera,System.AsyncCallback,System.Object)
extern "C"  RuntimeObject* ARSessionTrackingChanged_BeginInvoke_m3230226342 (ARSessionTrackingChanged_t923029411 * __this, UnityARCamera_t2069150450  ___camera0, AsyncCallback_t3962456242 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARSessionTrackingChanged_BeginInvoke_m3230226342_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(UnityARCamera_t2069150450_il2cpp_TypeInfo_var, &___camera0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARSessionTrackingChanged::EndInvoke(System.IAsyncResult)
extern "C"  void ARSessionTrackingChanged_EndInvoke_m1705581440 (ARSessionTrackingChanged_t923029411 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  void DelegatePInvokeWrapper_ARUserAnchorAdded_t1851120876 (ARUserAnchorAdded_t1851120876 * __this, ARUserAnchor_t1406831531  ___anchorData0, const RuntimeMethod* method)
{


	typedef void (STDCALL *PInvokeFunc)(ARUserAnchor_t1406831531_marshaled_pinvoke);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___anchorData0' to native representation
	ARUserAnchor_t1406831531_marshaled_pinvoke ____anchorData0_marshaled = {};
	ARUserAnchor_t1406831531_marshal_pinvoke(___anchorData0, ____anchorData0_marshaled);

	// Native function invocation
	il2cppPInvokeFunc(____anchorData0_marshaled);

	// Marshaling cleanup of parameter '___anchorData0' native representation
	ARUserAnchor_t1406831531_marshal_pinvoke_cleanup(____anchorData0_marshaled);

}
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARUserAnchorAdded::.ctor(System.Object,System.IntPtr)
extern "C"  void ARUserAnchorAdded__ctor_m456065574 (ARUserAnchorAdded_t1851120876 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARUserAnchorAdded::Invoke(UnityEngine.XR.iOS.ARUserAnchor)
extern "C"  void ARUserAnchorAdded_Invoke_m555329492 (ARUserAnchorAdded_t1851120876 * __this, ARUserAnchor_t1406831531  ___anchorData0, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		ARUserAnchorAdded_Invoke_m555329492((ARUserAnchorAdded_t1851120876 *)__this->get_prev_9(), ___anchorData0, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// open
			typedef void (*FunctionPointerType) (RuntimeObject *, ARUserAnchor_t1406831531 , const RuntimeMethod*);
			((FunctionPointerType)targetMethodPointer)(NULL, ___anchorData0, targetMethod);
		}
		else
		{
			// closed
			typedef void (*FunctionPointerType) (RuntimeObject *, void*, ARUserAnchor_t1406831531 , const RuntimeMethod*);
			((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___anchorData0, targetMethod);
		}
	}
	else
	{
		{
			// closed
			typedef void (*FunctionPointerType) (void*, ARUserAnchor_t1406831531 , const RuntimeMethod*);
			((FunctionPointerType)targetMethodPointer)(targetThis, ___anchorData0, targetMethod);
		}
	}
}
// System.IAsyncResult UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARUserAnchorAdded::BeginInvoke(UnityEngine.XR.iOS.ARUserAnchor,System.AsyncCallback,System.Object)
extern "C"  RuntimeObject* ARUserAnchorAdded_BeginInvoke_m4131496474 (ARUserAnchorAdded_t1851120876 * __this, ARUserAnchor_t1406831531  ___anchorData0, AsyncCallback_t3962456242 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARUserAnchorAdded_BeginInvoke_m4131496474_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(ARUserAnchor_t1406831531_il2cpp_TypeInfo_var, &___anchorData0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARUserAnchorAdded::EndInvoke(System.IAsyncResult)
extern "C"  void ARUserAnchorAdded_EndInvoke_m2977675665 (ARUserAnchorAdded_t1851120876 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  void DelegatePInvokeWrapper_ARUserAnchorRemoved_t23344545 (ARUserAnchorRemoved_t23344545 * __this, ARUserAnchor_t1406831531  ___anchorData0, const RuntimeMethod* method)
{


	typedef void (STDCALL *PInvokeFunc)(ARUserAnchor_t1406831531_marshaled_pinvoke);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___anchorData0' to native representation
	ARUserAnchor_t1406831531_marshaled_pinvoke ____anchorData0_marshaled = {};
	ARUserAnchor_t1406831531_marshal_pinvoke(___anchorData0, ____anchorData0_marshaled);

	// Native function invocation
	il2cppPInvokeFunc(____anchorData0_marshaled);

	// Marshaling cleanup of parameter '___anchorData0' native representation
	ARUserAnchor_t1406831531_marshal_pinvoke_cleanup(____anchorData0_marshaled);

}
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARUserAnchorRemoved::.ctor(System.Object,System.IntPtr)
extern "C"  void ARUserAnchorRemoved__ctor_m586540762 (ARUserAnchorRemoved_t23344545 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARUserAnchorRemoved::Invoke(UnityEngine.XR.iOS.ARUserAnchor)
extern "C"  void ARUserAnchorRemoved_Invoke_m460985818 (ARUserAnchorRemoved_t23344545 * __this, ARUserAnchor_t1406831531  ___anchorData0, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		ARUserAnchorRemoved_Invoke_m460985818((ARUserAnchorRemoved_t23344545 *)__this->get_prev_9(), ___anchorData0, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// open
			typedef void (*FunctionPointerType) (RuntimeObject *, ARUserAnchor_t1406831531 , const RuntimeMethod*);
			((FunctionPointerType)targetMethodPointer)(NULL, ___anchorData0, targetMethod);
		}
		else
		{
			// closed
			typedef void (*FunctionPointerType) (RuntimeObject *, void*, ARUserAnchor_t1406831531 , const RuntimeMethod*);
			((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___anchorData0, targetMethod);
		}
	}
	else
	{
		{
			// closed
			typedef void (*FunctionPointerType) (void*, ARUserAnchor_t1406831531 , const RuntimeMethod*);
			((FunctionPointerType)targetMethodPointer)(targetThis, ___anchorData0, targetMethod);
		}
	}
}
// System.IAsyncResult UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARUserAnchorRemoved::BeginInvoke(UnityEngine.XR.iOS.ARUserAnchor,System.AsyncCallback,System.Object)
extern "C"  RuntimeObject* ARUserAnchorRemoved_BeginInvoke_m1997264703 (ARUserAnchorRemoved_t23344545 * __this, ARUserAnchor_t1406831531  ___anchorData0, AsyncCallback_t3962456242 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARUserAnchorRemoved_BeginInvoke_m1997264703_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(ARUserAnchor_t1406831531_il2cpp_TypeInfo_var, &___anchorData0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARUserAnchorRemoved::EndInvoke(System.IAsyncResult)
extern "C"  void ARUserAnchorRemoved_EndInvoke_m1217075522 (ARUserAnchorRemoved_t23344545 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  void DelegatePInvokeWrapper_ARUserAnchorUpdated_t4007601678 (ARUserAnchorUpdated_t4007601678 * __this, ARUserAnchor_t1406831531  ___anchorData0, const RuntimeMethod* method)
{


	typedef void (STDCALL *PInvokeFunc)(ARUserAnchor_t1406831531_marshaled_pinvoke);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___anchorData0' to native representation
	ARUserAnchor_t1406831531_marshaled_pinvoke ____anchorData0_marshaled = {};
	ARUserAnchor_t1406831531_marshal_pinvoke(___anchorData0, ____anchorData0_marshaled);

	// Native function invocation
	il2cppPInvokeFunc(____anchorData0_marshaled);

	// Marshaling cleanup of parameter '___anchorData0' native representation
	ARUserAnchor_t1406831531_marshal_pinvoke_cleanup(____anchorData0_marshaled);

}
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARUserAnchorUpdated::.ctor(System.Object,System.IntPtr)
extern "C"  void ARUserAnchorUpdated__ctor_m4059084489 (ARUserAnchorUpdated_t4007601678 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARUserAnchorUpdated::Invoke(UnityEngine.XR.iOS.ARUserAnchor)
extern "C"  void ARUserAnchorUpdated_Invoke_m2571719984 (ARUserAnchorUpdated_t4007601678 * __this, ARUserAnchor_t1406831531  ___anchorData0, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		ARUserAnchorUpdated_Invoke_m2571719984((ARUserAnchorUpdated_t4007601678 *)__this->get_prev_9(), ___anchorData0, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// open
			typedef void (*FunctionPointerType) (RuntimeObject *, ARUserAnchor_t1406831531 , const RuntimeMethod*);
			((FunctionPointerType)targetMethodPointer)(NULL, ___anchorData0, targetMethod);
		}
		else
		{
			// closed
			typedef void (*FunctionPointerType) (RuntimeObject *, void*, ARUserAnchor_t1406831531 , const RuntimeMethod*);
			((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___anchorData0, targetMethod);
		}
	}
	else
	{
		{
			// closed
			typedef void (*FunctionPointerType) (void*, ARUserAnchor_t1406831531 , const RuntimeMethod*);
			((FunctionPointerType)targetMethodPointer)(targetThis, ___anchorData0, targetMethod);
		}
	}
}
// System.IAsyncResult UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARUserAnchorUpdated::BeginInvoke(UnityEngine.XR.iOS.ARUserAnchor,System.AsyncCallback,System.Object)
extern "C"  RuntimeObject* ARUserAnchorUpdated_BeginInvoke_m1530922700 (ARUserAnchorUpdated_t4007601678 * __this, ARUserAnchor_t1406831531  ___anchorData0, AsyncCallback_t3962456242 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARUserAnchorUpdated_BeginInvoke_m1530922700_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(ARUserAnchor_t1406831531_il2cpp_TypeInfo_var, &___anchorData0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARUserAnchorUpdated::EndInvoke(System.IAsyncResult)
extern "C"  void ARUserAnchorUpdated_EndInvoke_m4259755685 (ARUserAnchorUpdated_t4007601678 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  void DelegatePInvokeWrapper_internal_ARAnchorAdded_t1565083332 (internal_ARAnchorAdded_t1565083332 * __this, UnityARAnchorData_t1157236668  ___anchorData0, const RuntimeMethod* method)
{
	typedef void (STDCALL *PInvokeFunc)(UnityARAnchorData_t1157236668 );
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___anchorData0);

}
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARAnchorAdded::.ctor(System.Object,System.IntPtr)
extern "C"  void internal_ARAnchorAdded__ctor_m274816883 (internal_ARAnchorAdded_t1565083332 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARAnchorAdded::Invoke(UnityEngine.XR.iOS.UnityARAnchorData)
extern "C"  void internal_ARAnchorAdded_Invoke_m3392910336 (internal_ARAnchorAdded_t1565083332 * __this, UnityARAnchorData_t1157236668  ___anchorData0, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		internal_ARAnchorAdded_Invoke_m3392910336((internal_ARAnchorAdded_t1565083332 *)__this->get_prev_9(), ___anchorData0, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// open
			typedef void (*FunctionPointerType) (RuntimeObject *, UnityARAnchorData_t1157236668 , const RuntimeMethod*);
			((FunctionPointerType)targetMethodPointer)(NULL, ___anchorData0, targetMethod);
		}
		else
		{
			// closed
			typedef void (*FunctionPointerType) (RuntimeObject *, void*, UnityARAnchorData_t1157236668 , const RuntimeMethod*);
			((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___anchorData0, targetMethod);
		}
	}
	else
	{
		{
			// closed
			typedef void (*FunctionPointerType) (void*, UnityARAnchorData_t1157236668 , const RuntimeMethod*);
			((FunctionPointerType)targetMethodPointer)(targetThis, ___anchorData0, targetMethod);
		}
	}
}
// System.IAsyncResult UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARAnchorAdded::BeginInvoke(UnityEngine.XR.iOS.UnityARAnchorData,System.AsyncCallback,System.Object)
extern "C"  RuntimeObject* internal_ARAnchorAdded_BeginInvoke_m4199645137 (internal_ARAnchorAdded_t1565083332 * __this, UnityARAnchorData_t1157236668  ___anchorData0, AsyncCallback_t3962456242 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (internal_ARAnchorAdded_BeginInvoke_m4199645137_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(UnityARAnchorData_t1157236668_il2cpp_TypeInfo_var, &___anchorData0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARAnchorAdded::EndInvoke(System.IAsyncResult)
extern "C"  void internal_ARAnchorAdded_EndInvoke_m3739984561 (internal_ARAnchorAdded_t1565083332 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  void DelegatePInvokeWrapper_internal_ARAnchorRemoved_t3371657877 (internal_ARAnchorRemoved_t3371657877 * __this, UnityARAnchorData_t1157236668  ___anchorData0, const RuntimeMethod* method)
{
	typedef void (STDCALL *PInvokeFunc)(UnityARAnchorData_t1157236668 );
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___anchorData0);

}
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARAnchorRemoved::.ctor(System.Object,System.IntPtr)
extern "C"  void internal_ARAnchorRemoved__ctor_m3323216282 (internal_ARAnchorRemoved_t3371657877 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARAnchorRemoved::Invoke(UnityEngine.XR.iOS.UnityARAnchorData)
extern "C"  void internal_ARAnchorRemoved_Invoke_m1866298684 (internal_ARAnchorRemoved_t3371657877 * __this, UnityARAnchorData_t1157236668  ___anchorData0, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		internal_ARAnchorRemoved_Invoke_m1866298684((internal_ARAnchorRemoved_t3371657877 *)__this->get_prev_9(), ___anchorData0, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// open
			typedef void (*FunctionPointerType) (RuntimeObject *, UnityARAnchorData_t1157236668 , const RuntimeMethod*);
			((FunctionPointerType)targetMethodPointer)(NULL, ___anchorData0, targetMethod);
		}
		else
		{
			// closed
			typedef void (*FunctionPointerType) (RuntimeObject *, void*, UnityARAnchorData_t1157236668 , const RuntimeMethod*);
			((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___anchorData0, targetMethod);
		}
	}
	else
	{
		{
			// closed
			typedef void (*FunctionPointerType) (void*, UnityARAnchorData_t1157236668 , const RuntimeMethod*);
			((FunctionPointerType)targetMethodPointer)(targetThis, ___anchorData0, targetMethod);
		}
	}
}
// System.IAsyncResult UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARAnchorRemoved::BeginInvoke(UnityEngine.XR.iOS.UnityARAnchorData,System.AsyncCallback,System.Object)
extern "C"  RuntimeObject* internal_ARAnchorRemoved_BeginInvoke_m2416400457 (internal_ARAnchorRemoved_t3371657877 * __this, UnityARAnchorData_t1157236668  ___anchorData0, AsyncCallback_t3962456242 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (internal_ARAnchorRemoved_BeginInvoke_m2416400457_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(UnityARAnchorData_t1157236668_il2cpp_TypeInfo_var, &___anchorData0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARAnchorRemoved::EndInvoke(System.IAsyncResult)
extern "C"  void internal_ARAnchorRemoved_EndInvoke_m3457463466 (internal_ARAnchorRemoved_t3371657877 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  void DelegatePInvokeWrapper_internal_ARAnchorUpdated_t2645242205 (internal_ARAnchorUpdated_t2645242205 * __this, UnityARAnchorData_t1157236668  ___anchorData0, const RuntimeMethod* method)
{
	typedef void (STDCALL *PInvokeFunc)(UnityARAnchorData_t1157236668 );
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___anchorData0);

}
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARAnchorUpdated::.ctor(System.Object,System.IntPtr)
extern "C"  void internal_ARAnchorUpdated__ctor_m1065112067 (internal_ARAnchorUpdated_t2645242205 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARAnchorUpdated::Invoke(UnityEngine.XR.iOS.UnityARAnchorData)
extern "C"  void internal_ARAnchorUpdated_Invoke_m351385753 (internal_ARAnchorUpdated_t2645242205 * __this, UnityARAnchorData_t1157236668  ___anchorData0, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		internal_ARAnchorUpdated_Invoke_m351385753((internal_ARAnchorUpdated_t2645242205 *)__this->get_prev_9(), ___anchorData0, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// open
			typedef void (*FunctionPointerType) (RuntimeObject *, UnityARAnchorData_t1157236668 , const RuntimeMethod*);
			((FunctionPointerType)targetMethodPointer)(NULL, ___anchorData0, targetMethod);
		}
		else
		{
			// closed
			typedef void (*FunctionPointerType) (RuntimeObject *, void*, UnityARAnchorData_t1157236668 , const RuntimeMethod*);
			((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___anchorData0, targetMethod);
		}
	}
	else
	{
		{
			// closed
			typedef void (*FunctionPointerType) (void*, UnityARAnchorData_t1157236668 , const RuntimeMethod*);
			((FunctionPointerType)targetMethodPointer)(targetThis, ___anchorData0, targetMethod);
		}
	}
}
// System.IAsyncResult UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARAnchorUpdated::BeginInvoke(UnityEngine.XR.iOS.UnityARAnchorData,System.AsyncCallback,System.Object)
extern "C"  RuntimeObject* internal_ARAnchorUpdated_BeginInvoke_m3288631253 (internal_ARAnchorUpdated_t2645242205 * __this, UnityARAnchorData_t1157236668  ___anchorData0, AsyncCallback_t3962456242 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (internal_ARAnchorUpdated_BeginInvoke_m3288631253_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(UnityARAnchorData_t1157236668_il2cpp_TypeInfo_var, &___anchorData0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARAnchorUpdated::EndInvoke(System.IAsyncResult)
extern "C"  void internal_ARAnchorUpdated_EndInvoke_m3829388073 (internal_ARAnchorUpdated_t2645242205 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  void DelegatePInvokeWrapper_internal_ARFrameUpdate_t3254989823 (internal_ARFrameUpdate_t3254989823 * __this, internal_UnityARCamera_t3920739388  ___camera0, const RuntimeMethod* method)
{
	typedef void (STDCALL *PInvokeFunc)(internal_UnityARCamera_t3920739388 );
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___camera0);

}
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARFrameUpdate::.ctor(System.Object,System.IntPtr)
extern "C"  void internal_ARFrameUpdate__ctor_m2823389890 (internal_ARFrameUpdate_t3254989823 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARFrameUpdate::Invoke(UnityEngine.XR.iOS.internal_UnityARCamera)
extern "C"  void internal_ARFrameUpdate_Invoke_m4026855931 (internal_ARFrameUpdate_t3254989823 * __this, internal_UnityARCamera_t3920739388  ___camera0, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		internal_ARFrameUpdate_Invoke_m4026855931((internal_ARFrameUpdate_t3254989823 *)__this->get_prev_9(), ___camera0, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// open
			typedef void (*FunctionPointerType) (RuntimeObject *, internal_UnityARCamera_t3920739388 , const RuntimeMethod*);
			((FunctionPointerType)targetMethodPointer)(NULL, ___camera0, targetMethod);
		}
		else
		{
			// closed
			typedef void (*FunctionPointerType) (RuntimeObject *, void*, internal_UnityARCamera_t3920739388 , const RuntimeMethod*);
			((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___camera0, targetMethod);
		}
	}
	else
	{
		{
			// closed
			typedef void (*FunctionPointerType) (void*, internal_UnityARCamera_t3920739388 , const RuntimeMethod*);
			((FunctionPointerType)targetMethodPointer)(targetThis, ___camera0, targetMethod);
		}
	}
}
// System.IAsyncResult UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARFrameUpdate::BeginInvoke(UnityEngine.XR.iOS.internal_UnityARCamera,System.AsyncCallback,System.Object)
extern "C"  RuntimeObject* internal_ARFrameUpdate_BeginInvoke_m2334992139 (internal_ARFrameUpdate_t3254989823 * __this, internal_UnityARCamera_t3920739388  ___camera0, AsyncCallback_t3962456242 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (internal_ARFrameUpdate_BeginInvoke_m2334992139_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(internal_UnityARCamera_t3920739388_il2cpp_TypeInfo_var, &___camera0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARFrameUpdate::EndInvoke(System.IAsyncResult)
extern "C"  void internal_ARFrameUpdate_EndInvoke_m1285402019 (internal_ARFrameUpdate_t3254989823 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  void DelegatePInvokeWrapper_internal_ARSessionTrackingChanged_t1988849735 (internal_ARSessionTrackingChanged_t1988849735 * __this, internal_UnityARCamera_t3920739388  ___camera0, const RuntimeMethod* method)
{
	typedef void (STDCALL *PInvokeFunc)(internal_UnityARCamera_t3920739388 );
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___camera0);

}
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARSessionTrackingChanged::.ctor(System.Object,System.IntPtr)
extern "C"  void internal_ARSessionTrackingChanged__ctor_m3350968246 (internal_ARSessionTrackingChanged_t1988849735 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARSessionTrackingChanged::Invoke(UnityEngine.XR.iOS.internal_UnityARCamera)
extern "C"  void internal_ARSessionTrackingChanged_Invoke_m2960819036 (internal_ARSessionTrackingChanged_t1988849735 * __this, internal_UnityARCamera_t3920739388  ___camera0, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		internal_ARSessionTrackingChanged_Invoke_m2960819036((internal_ARSessionTrackingChanged_t1988849735 *)__this->get_prev_9(), ___camera0, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// open
			typedef void (*FunctionPointerType) (RuntimeObject *, internal_UnityARCamera_t3920739388 , const RuntimeMethod*);
			((FunctionPointerType)targetMethodPointer)(NULL, ___camera0, targetMethod);
		}
		else
		{
			// closed
			typedef void (*FunctionPointerType) (RuntimeObject *, void*, internal_UnityARCamera_t3920739388 , const RuntimeMethod*);
			((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___camera0, targetMethod);
		}
	}
	else
	{
		{
			// closed
			typedef void (*FunctionPointerType) (void*, internal_UnityARCamera_t3920739388 , const RuntimeMethod*);
			((FunctionPointerType)targetMethodPointer)(targetThis, ___camera0, targetMethod);
		}
	}
}
// System.IAsyncResult UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARSessionTrackingChanged::BeginInvoke(UnityEngine.XR.iOS.internal_UnityARCamera,System.AsyncCallback,System.Object)
extern "C"  RuntimeObject* internal_ARSessionTrackingChanged_BeginInvoke_m453410478 (internal_ARSessionTrackingChanged_t1988849735 * __this, internal_UnityARCamera_t3920739388  ___camera0, AsyncCallback_t3962456242 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (internal_ARSessionTrackingChanged_BeginInvoke_m453410478_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(internal_UnityARCamera_t3920739388_il2cpp_TypeInfo_var, &___camera0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARSessionTrackingChanged::EndInvoke(System.IAsyncResult)
extern "C"  void internal_ARSessionTrackingChanged_EndInvoke_m905534625 (internal_ARSessionTrackingChanged_t1988849735 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  void DelegatePInvokeWrapper_internal_ARUserAnchorAdded_t3285282493 (internal_ARUserAnchorAdded_t3285282493 * __this, UnityARUserAnchorData_t1976826249  ___anchorData0, const RuntimeMethod* method)
{
	typedef void (STDCALL *PInvokeFunc)(UnityARUserAnchorData_t1976826249 );
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___anchorData0);

}
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARUserAnchorAdded::.ctor(System.Object,System.IntPtr)
extern "C"  void internal_ARUserAnchorAdded__ctor_m1954806258 (internal_ARUserAnchorAdded_t3285282493 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARUserAnchorAdded::Invoke(UnityEngine.XR.iOS.UnityARUserAnchorData)
extern "C"  void internal_ARUserAnchorAdded_Invoke_m3060859101 (internal_ARUserAnchorAdded_t3285282493 * __this, UnityARUserAnchorData_t1976826249  ___anchorData0, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		internal_ARUserAnchorAdded_Invoke_m3060859101((internal_ARUserAnchorAdded_t3285282493 *)__this->get_prev_9(), ___anchorData0, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// open
			typedef void (*FunctionPointerType) (RuntimeObject *, UnityARUserAnchorData_t1976826249 , const RuntimeMethod*);
			((FunctionPointerType)targetMethodPointer)(NULL, ___anchorData0, targetMethod);
		}
		else
		{
			// closed
			typedef void (*FunctionPointerType) (RuntimeObject *, void*, UnityARUserAnchorData_t1976826249 , const RuntimeMethod*);
			((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___anchorData0, targetMethod);
		}
	}
	else
	{
		{
			// closed
			typedef void (*FunctionPointerType) (void*, UnityARUserAnchorData_t1976826249 , const RuntimeMethod*);
			((FunctionPointerType)targetMethodPointer)(targetThis, ___anchorData0, targetMethod);
		}
	}
}
// System.IAsyncResult UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARUserAnchorAdded::BeginInvoke(UnityEngine.XR.iOS.UnityARUserAnchorData,System.AsyncCallback,System.Object)
extern "C"  RuntimeObject* internal_ARUserAnchorAdded_BeginInvoke_m3896873928 (internal_ARUserAnchorAdded_t3285282493 * __this, UnityARUserAnchorData_t1976826249  ___anchorData0, AsyncCallback_t3962456242 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (internal_ARUserAnchorAdded_BeginInvoke_m3896873928_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(UnityARUserAnchorData_t1976826249_il2cpp_TypeInfo_var, &___anchorData0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARUserAnchorAdded::EndInvoke(System.IAsyncResult)
extern "C"  void internal_ARUserAnchorAdded_EndInvoke_m1612333521 (internal_ARUserAnchorAdded_t3285282493 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  void DelegatePInvokeWrapper_internal_ARUserAnchorRemoved_t386858594 (internal_ARUserAnchorRemoved_t386858594 * __this, UnityARUserAnchorData_t1976826249  ___anchorData0, const RuntimeMethod* method)
{
	typedef void (STDCALL *PInvokeFunc)(UnityARUserAnchorData_t1976826249 );
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___anchorData0);

}
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARUserAnchorRemoved::.ctor(System.Object,System.IntPtr)
extern "C"  void internal_ARUserAnchorRemoved__ctor_m3250994366 (internal_ARUserAnchorRemoved_t386858594 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARUserAnchorRemoved::Invoke(UnityEngine.XR.iOS.UnityARUserAnchorData)
extern "C"  void internal_ARUserAnchorRemoved_Invoke_m1810838433 (internal_ARUserAnchorRemoved_t386858594 * __this, UnityARUserAnchorData_t1976826249  ___anchorData0, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		internal_ARUserAnchorRemoved_Invoke_m1810838433((internal_ARUserAnchorRemoved_t386858594 *)__this->get_prev_9(), ___anchorData0, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// open
			typedef void (*FunctionPointerType) (RuntimeObject *, UnityARUserAnchorData_t1976826249 , const RuntimeMethod*);
			((FunctionPointerType)targetMethodPointer)(NULL, ___anchorData0, targetMethod);
		}
		else
		{
			// closed
			typedef void (*FunctionPointerType) (RuntimeObject *, void*, UnityARUserAnchorData_t1976826249 , const RuntimeMethod*);
			((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___anchorData0, targetMethod);
		}
	}
	else
	{
		{
			// closed
			typedef void (*FunctionPointerType) (void*, UnityARUserAnchorData_t1976826249 , const RuntimeMethod*);
			((FunctionPointerType)targetMethodPointer)(targetThis, ___anchorData0, targetMethod);
		}
	}
}
// System.IAsyncResult UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARUserAnchorRemoved::BeginInvoke(UnityEngine.XR.iOS.UnityARUserAnchorData,System.AsyncCallback,System.Object)
extern "C"  RuntimeObject* internal_ARUserAnchorRemoved_BeginInvoke_m2511948604 (internal_ARUserAnchorRemoved_t386858594 * __this, UnityARUserAnchorData_t1976826249  ___anchorData0, AsyncCallback_t3962456242 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (internal_ARUserAnchorRemoved_BeginInvoke_m2511948604_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(UnityARUserAnchorData_t1976826249_il2cpp_TypeInfo_var, &___anchorData0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARUserAnchorRemoved::EndInvoke(System.IAsyncResult)
extern "C"  void internal_ARUserAnchorRemoved_EndInvoke_m1427522325 (internal_ARUserAnchorRemoved_t386858594 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  void DelegatePInvokeWrapper_internal_ARUserAnchorUpdated_t3964727538 (internal_ARUserAnchorUpdated_t3964727538 * __this, UnityARUserAnchorData_t1976826249  ___anchorData0, const RuntimeMethod* method)
{
	typedef void (STDCALL *PInvokeFunc)(UnityARUserAnchorData_t1976826249 );
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___anchorData0);

}
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARUserAnchorUpdated::.ctor(System.Object,System.IntPtr)
extern "C"  void internal_ARUserAnchorUpdated__ctor_m1485411968 (internal_ARUserAnchorUpdated_t3964727538 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARUserAnchorUpdated::Invoke(UnityEngine.XR.iOS.UnityARUserAnchorData)
extern "C"  void internal_ARUserAnchorUpdated_Invoke_m1125450612 (internal_ARUserAnchorUpdated_t3964727538 * __this, UnityARUserAnchorData_t1976826249  ___anchorData0, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		internal_ARUserAnchorUpdated_Invoke_m1125450612((internal_ARUserAnchorUpdated_t3964727538 *)__this->get_prev_9(), ___anchorData0, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// open
			typedef void (*FunctionPointerType) (RuntimeObject *, UnityARUserAnchorData_t1976826249 , const RuntimeMethod*);
			((FunctionPointerType)targetMethodPointer)(NULL, ___anchorData0, targetMethod);
		}
		else
		{
			// closed
			typedef void (*FunctionPointerType) (RuntimeObject *, void*, UnityARUserAnchorData_t1976826249 , const RuntimeMethod*);
			((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___anchorData0, targetMethod);
		}
	}
	else
	{
		{
			// closed
			typedef void (*FunctionPointerType) (void*, UnityARUserAnchorData_t1976826249 , const RuntimeMethod*);
			((FunctionPointerType)targetMethodPointer)(targetThis, ___anchorData0, targetMethod);
		}
	}
}
// System.IAsyncResult UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARUserAnchorUpdated::BeginInvoke(UnityEngine.XR.iOS.UnityARUserAnchorData,System.AsyncCallback,System.Object)
extern "C"  RuntimeObject* internal_ARUserAnchorUpdated_BeginInvoke_m3665399959 (internal_ARUserAnchorUpdated_t3964727538 * __this, UnityARUserAnchorData_t1976826249  ___anchorData0, AsyncCallback_t3962456242 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (internal_ARUserAnchorUpdated_BeginInvoke_m3665399959_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(UnityARUserAnchorData_t1976826249_il2cpp_TypeInfo_var, &___anchorData0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARUserAnchorUpdated::EndInvoke(System.IAsyncResult)
extern "C"  void internal_ARUserAnchorUpdated_EndInvoke_m1479927878 (internal_ARUserAnchorUpdated_t3964727538 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
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
// System.Void UnityEngine.XR.iOS.UnityARUserAnchorComponent::.ctor()
extern "C"  void UnityARUserAnchorComponent__ctor_m446199219 (UnityARUserAnchorComponent_t969893952 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String UnityEngine.XR.iOS.UnityARUserAnchorComponent::get_AnchorId()
extern "C"  String_t* UnityARUserAnchorComponent_get_AnchorId_m2938657237 (UnityARUserAnchorComponent_t969893952 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_m_AnchorId_2();
		return L_0;
	}
}
// System.Void UnityEngine.XR.iOS.UnityARUserAnchorComponent::Awake()
extern "C"  void UnityARUserAnchorComponent_Awake_m1256671643 (UnityARUserAnchorComponent_t969893952 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityARUserAnchorComponent_Awake_m1256671643_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	UnityARUserAnchorData_t1976826249  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		intptr_t L_0 = (intptr_t)UnityARUserAnchorComponent_GameObjectAnchorUpdated_m1750428080_RuntimeMethod_var;
		ARUserAnchorUpdated_t4007601678 * L_1 = (ARUserAnchorUpdated_t4007601678 *)il2cpp_codegen_object_new(ARUserAnchorUpdated_t4007601678_il2cpp_TypeInfo_var);
		ARUserAnchorUpdated__ctor_m4059084489(L_1, __this, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var);
		UnityARSessionNativeInterface_add_ARUserAnchorUpdatedEvent_m3620938119(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		intptr_t L_2 = (intptr_t)UnityARUserAnchorComponent_AnchorRemoved_m2099527927_RuntimeMethod_var;
		ARUserAnchorRemoved_t23344545 * L_3 = (ARUserAnchorRemoved_t23344545 *)il2cpp_codegen_object_new(ARUserAnchorRemoved_t23344545_il2cpp_TypeInfo_var);
		ARUserAnchorRemoved__ctor_m586540762(L_3, __this, L_2, /*hidden argument*/NULL);
		UnityARSessionNativeInterface_add_ARUserAnchorRemovedEvent_m3520224501(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		UnityARSessionNativeInterface_t3929719369 * L_4 = UnityARSessionNativeInterface_GetARSessionNativeInterface_m1118592565(NULL /*static, unused*/, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_5 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		UnityARUserAnchorData_t1976826249  L_6 = UnityARSessionNativeInterface_AddUserAnchorFromGameObject_m3087613556(L_4, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		String_t* L_7 = UnityARUserAnchorData_get_identifierStr_m122781054((&V_0), /*hidden argument*/NULL);
		__this->set_m_AnchorId_2(L_7);
		return;
	}
}
// System.Void UnityEngine.XR.iOS.UnityARUserAnchorComponent::Start()
extern "C"  void UnityARUserAnchorComponent_Start_m756554043 (UnityARUserAnchorComponent_t969893952 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.XR.iOS.UnityARUserAnchorComponent::AnchorRemoved(UnityEngine.XR.iOS.ARUserAnchor)
extern "C"  void UnityARUserAnchorComponent_AnchorRemoved_m2099527927 (UnityARUserAnchorComponent_t969893952 * __this, ARUserAnchor_t1406831531  ___anchor0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityARUserAnchorComponent_AnchorRemoved_m2099527927_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = (&___anchor0)->get_identifier_0();
		String_t* L_1 = __this->get_m_AnchorId_2();
		NullCheck(L_0);
		bool L_2 = String_Equals_m2270643605(L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		GameObject_t1113636619 * L_3 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_Destroy_m565254235(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
	}

IL_0022:
	{
		return;
	}
}
// System.Void UnityEngine.XR.iOS.UnityARUserAnchorComponent::OnDestroy()
extern "C"  void UnityARUserAnchorComponent_OnDestroy_m1550181455 (UnityARUserAnchorComponent_t969893952 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityARUserAnchorComponent_OnDestroy_m1550181455_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = (intptr_t)UnityARUserAnchorComponent_GameObjectAnchorUpdated_m1750428080_RuntimeMethod_var;
		ARUserAnchorUpdated_t4007601678 * L_1 = (ARUserAnchorUpdated_t4007601678 *)il2cpp_codegen_object_new(ARUserAnchorUpdated_t4007601678_il2cpp_TypeInfo_var);
		ARUserAnchorUpdated__ctor_m4059084489(L_1, __this, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var);
		UnityARSessionNativeInterface_remove_ARUserAnchorUpdatedEvent_m2181757746(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		intptr_t L_2 = (intptr_t)UnityARUserAnchorComponent_AnchorRemoved_m2099527927_RuntimeMethod_var;
		ARUserAnchorRemoved_t23344545 * L_3 = (ARUserAnchorRemoved_t23344545 *)il2cpp_codegen_object_new(ARUserAnchorRemoved_t23344545_il2cpp_TypeInfo_var);
		ARUserAnchorRemoved__ctor_m586540762(L_3, __this, L_2, /*hidden argument*/NULL);
		UnityARSessionNativeInterface_remove_ARUserAnchorRemovedEvent_m2042627006(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		UnityARSessionNativeInterface_t3929719369 * L_4 = UnityARSessionNativeInterface_GetARSessionNativeInterface_m1118592565(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_5 = __this->get_m_AnchorId_2();
		NullCheck(L_4);
		UnityARSessionNativeInterface_RemoveUserAnchor_m1246452311(L_4, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.iOS.UnityARUserAnchorComponent::GameObjectAnchorUpdated(UnityEngine.XR.iOS.ARUserAnchor)
extern "C"  void UnityARUserAnchorComponent_GameObjectAnchorUpdated_m1750428080 (UnityARUserAnchorComponent_t969893952 * __this, ARUserAnchor_t1406831531  ___anchor0, const RuntimeMethod* method)
{
	{
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
// System.String UnityEngine.XR.iOS.UnityARUserAnchorData::get_identifierStr()
extern "C"  String_t* UnityARUserAnchorData_get_identifierStr_m122781054 (UnityARUserAnchorData_t1976826249 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityARUserAnchorData_get_identifierStr_m122781054_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = __this->get_ptrIdentifier_0();
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_t1757017490_il2cpp_TypeInfo_var);
		String_t* L_1 = Marshal_PtrToStringAuto_m3648166035(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
extern "C"  String_t* UnityARUserAnchorData_get_identifierStr_m122781054_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	UnityARUserAnchorData_t1976826249 * _thisAdjusted = reinterpret_cast<UnityARUserAnchorData_t1976826249 *>(__this + 1);
	return UnityARUserAnchorData_get_identifierStr_m122781054(_thisAdjusted, method);
}
// UnityEngine.XR.iOS.UnityARUserAnchorData UnityEngine.XR.iOS.UnityARUserAnchorData::UnityARUserAnchorDataFromGameObject(UnityEngine.GameObject)
extern "C"  UnityARUserAnchorData_t1976826249  UnityARUserAnchorData_UnityARUserAnchorDataFromGameObject_m1971953404 (RuntimeObject * __this /* static, unused */, GameObject_t1113636619 * ___go0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityARUserAnchorData_UnityARUserAnchorDataFromGameObject_m1971953404_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Matrix4x4_t1817901843  V_0;
	memset(&V_0, 0, sizeof(V_0));
	UnityARUserAnchorData_t1976826249  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		GameObject_t1113636619 * L_0 = ___go0;
		NullCheck(L_0);
		Transform_t3600365921 * L_1 = GameObject_get_transform_m1369836730(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t3722313464  L_2 = Transform_get_position_m36019626(L_1, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_3 = ___go0;
		NullCheck(L_3);
		Transform_t3600365921 * L_4 = GameObject_get_transform_m1369836730(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		Quaternion_t2301928331  L_5 = Transform_get_rotation_m3502953881(L_4, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_6 = ___go0;
		NullCheck(L_6);
		Transform_t3600365921 * L_7 = GameObject_get_transform_m1369836730(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		Vector3_t3722313464  L_8 = Transform_get_localScale_m129152068(L_7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Matrix4x4_t1817901843_il2cpp_TypeInfo_var);
		Matrix4x4_t1817901843  L_9 = Matrix4x4_TRS_m3801934620(NULL /*static, unused*/, L_2, L_5, L_8, /*hidden argument*/NULL);
		V_0 = L_9;
		il2cpp_codegen_initobj((&V_1), sizeof(UnityARUserAnchorData_t1976826249 ));
		UnityARMatrix4x4_t4073345847 * L_10 = (&V_1)->get_address_of_transform_1();
		Vector4_t3319028937  L_11 = Matrix4x4_GetColumn_m461504848((&V_0), 0, /*hidden argument*/NULL);
		L_10->set_column0_0(L_11);
		UnityARMatrix4x4_t4073345847 * L_12 = (&V_1)->get_address_of_transform_1();
		Vector4_t3319028937  L_13 = Matrix4x4_GetColumn_m461504848((&V_0), 1, /*hidden argument*/NULL);
		L_12->set_column1_1(L_13);
		UnityARMatrix4x4_t4073345847 * L_14 = (&V_1)->get_address_of_transform_1();
		Vector4_t3319028937  L_15 = Matrix4x4_GetColumn_m461504848((&V_0), 2, /*hidden argument*/NULL);
		L_14->set_column2_2(L_15);
		UnityARMatrix4x4_t4073345847 * L_16 = (&V_1)->get_address_of_transform_1();
		Vector4_t3319028937  L_17 = Matrix4x4_GetColumn_m461504848((&V_0), 3, /*hidden argument*/NULL);
		L_16->set_column3_3(L_17);
		UnityARUserAnchorData_t1976826249  L_18 = V_1;
		return L_18;
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
// System.Void UnityEngine.XR.iOS.UnityARUtility::.ctor()
extern "C"  void UnityARUtility__ctor_m2741473109 (UnityARUtility_t2509807446 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.iOS.UnityARUtility::InitializePlanePrefab(UnityEngine.GameObject)
extern "C"  void UnityARUtility_InitializePlanePrefab_m2291423040 (RuntimeObject * __this /* static, unused */, GameObject_t1113636619 * ___go0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityARUtility_InitializePlanePrefab_m2291423040_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_t1113636619 * L_0 = ___go0;
		IL2CPP_RUNTIME_CLASS_INIT(UnityARUtility_t2509807446_il2cpp_TypeInfo_var);
		((UnityARUtility_t2509807446_StaticFields*)il2cpp_codegen_static_fields_for(UnityARUtility_t2509807446_il2cpp_TypeInfo_var))->set_planePrefab_2(L_0);
		return;
	}
}
// UnityEngine.GameObject UnityEngine.XR.iOS.UnityARUtility::CreatePlaneInScene(UnityEngine.XR.iOS.ARPlaneAnchor)
extern "C"  GameObject_t1113636619 * UnityARUtility_CreatePlaneInScene_m2158801296 (RuntimeObject * __this /* static, unused */, ARPlaneAnchor_t2049372221  ___arPlaneAnchor0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityARUtility_CreatePlaneInScene_m2158801296_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t1113636619 * V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(UnityARUtility_t2509807446_il2cpp_TypeInfo_var);
		GameObject_t1113636619 * L_0 = ((UnityARUtility_t2509807446_StaticFields*)il2cpp_codegen_static_fields_for(UnityARUtility_t2509807446_il2cpp_TypeInfo_var))->get_planePrefab_2();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(UnityARUtility_t2509807446_il2cpp_TypeInfo_var);
		GameObject_t1113636619 * L_2 = ((UnityARUtility_t2509807446_StaticFields*)il2cpp_codegen_static_fields_for(UnityARUtility_t2509807446_il2cpp_TypeInfo_var))->get_planePrefab_2();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		GameObject_t1113636619 * L_3 = Object_Instantiate_TisGameObject_t1113636619_m4070250708(NULL /*static, unused*/, L_2, /*hidden argument*/Object_Instantiate_TisGameObject_t1113636619_m4070250708_RuntimeMethod_var);
		V_0 = L_3;
		goto IL_0026;
	}

IL_0020:
	{
		GameObject_t1113636619 * L_4 = (GameObject_t1113636619 *)il2cpp_codegen_object_new(GameObject_t1113636619_il2cpp_TypeInfo_var);
		GameObject__ctor_m3707688467(L_4, /*hidden argument*/NULL);
		V_0 = L_4;
	}

IL_0026:
	{
		GameObject_t1113636619 * L_5 = V_0;
		String_t* L_6 = (&___arPlaneAnchor0)->get_identifier_0();
		NullCheck(L_5);
		Object_set_name_m291480324(L_5, L_6, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_7 = V_0;
		ARPlaneAnchor_t2049372221  L_8 = ___arPlaneAnchor0;
		IL2CPP_RUNTIME_CLASS_INIT(UnityARUtility_t2509807446_il2cpp_TypeInfo_var);
		GameObject_t1113636619 * L_9 = UnityARUtility_UpdatePlaneWithAnchorTransform_m2954036282(NULL /*static, unused*/, L_7, L_8, /*hidden argument*/NULL);
		return L_9;
	}
}
// UnityEngine.GameObject UnityEngine.XR.iOS.UnityARUtility::UpdatePlaneWithAnchorTransform(UnityEngine.GameObject,UnityEngine.XR.iOS.ARPlaneAnchor)
extern "C"  GameObject_t1113636619 * UnityARUtility_UpdatePlaneWithAnchorTransform_m2954036282 (RuntimeObject * __this /* static, unused */, GameObject_t1113636619 * ___plane0, ARPlaneAnchor_t2049372221  ___arPlaneAnchor1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityARUtility_UpdatePlaneWithAnchorTransform_m2954036282_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MeshFilter_t3523625662 * V_0 = NULL;
	{
		GameObject_t1113636619 * L_0 = ___plane0;
		NullCheck(L_0);
		Transform_t3600365921 * L_1 = GameObject_get_transform_m1369836730(L_0, /*hidden argument*/NULL);
		Matrix4x4_t1817901843  L_2 = (&___arPlaneAnchor1)->get_transform_1();
		Vector3_t3722313464  L_3 = UnityARMatrixOps_GetPosition_m296874797(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_set_position_m3387557959(L_1, L_3, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_4 = ___plane0;
		NullCheck(L_4);
		Transform_t3600365921 * L_5 = GameObject_get_transform_m1369836730(L_4, /*hidden argument*/NULL);
		Matrix4x4_t1817901843  L_6 = (&___arPlaneAnchor1)->get_transform_1();
		Quaternion_t2301928331  L_7 = UnityARMatrixOps_GetRotation_m1192521266(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		NullCheck(L_5);
		Transform_set_rotation_m3524318132(L_5, L_7, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_8 = ___plane0;
		NullCheck(L_8);
		MeshFilter_t3523625662 * L_9 = GameObject_GetComponentInChildren_TisMeshFilter_t3523625662_m478508368(L_8, /*hidden argument*/GameObject_GetComponentInChildren_TisMeshFilter_t3523625662_m478508368_RuntimeMethod_var);
		V_0 = L_9;
		MeshFilter_t3523625662 * L_10 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_11 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_10, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_00c6;
		}
	}
	{
		MeshFilter_t3523625662 * L_12 = V_0;
		NullCheck(L_12);
		GameObject_t1113636619 * L_13 = Component_get_gameObject_m442555142(L_12, /*hidden argument*/NULL);
		NullCheck(L_13);
		Transform_t3600365921 * L_14 = GameObject_get_transform_m1369836730(L_13, /*hidden argument*/NULL);
		Vector3_t3722313464 * L_15 = (&___arPlaneAnchor1)->get_address_of_extent_4();
		float L_16 = L_15->get_x_1();
		Vector3_t3722313464 * L_17 = (&___arPlaneAnchor1)->get_address_of_extent_4();
		float L_18 = L_17->get_y_2();
		Vector3_t3722313464 * L_19 = (&___arPlaneAnchor1)->get_address_of_extent_4();
		float L_20 = L_19->get_z_3();
		Vector3_t3722313464  L_21;
		memset(&L_21, 0, sizeof(L_21));
		Vector3__ctor_m3353183577((&L_21), ((float)il2cpp_codegen_multiply((float)L_16, (float)(0.1f))), ((float)il2cpp_codegen_multiply((float)L_18, (float)(0.1f))), ((float)il2cpp_codegen_multiply((float)L_20, (float)(0.1f))), /*hidden argument*/NULL);
		NullCheck(L_14);
		Transform_set_localScale_m3053443106(L_14, L_21, /*hidden argument*/NULL);
		MeshFilter_t3523625662 * L_22 = V_0;
		NullCheck(L_22);
		GameObject_t1113636619 * L_23 = Component_get_gameObject_m442555142(L_22, /*hidden argument*/NULL);
		NullCheck(L_23);
		Transform_t3600365921 * L_24 = GameObject_get_transform_m1369836730(L_23, /*hidden argument*/NULL);
		Vector3_t3722313464 * L_25 = (&___arPlaneAnchor1)->get_address_of_center_3();
		float L_26 = L_25->get_x_1();
		Vector3_t3722313464 * L_27 = (&___arPlaneAnchor1)->get_address_of_center_3();
		float L_28 = L_27->get_y_2();
		Vector3_t3722313464 * L_29 = (&___arPlaneAnchor1)->get_address_of_center_3();
		float L_30 = L_29->get_z_3();
		Vector3_t3722313464  L_31;
		memset(&L_31, 0, sizeof(L_31));
		Vector3__ctor_m3353183577((&L_31), L_26, L_28, ((-L_30)), /*hidden argument*/NULL);
		NullCheck(L_24);
		Transform_set_localPosition_m4128471975(L_24, L_31, /*hidden argument*/NULL);
	}

IL_00c6:
	{
		GameObject_t1113636619 * L_32 = ___plane0;
		return L_32;
	}
}
// System.Void UnityEngine.XR.iOS.UnityARUtility::.cctor()
extern "C"  void UnityARUtility__cctor_m3742647908 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	{
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
// System.Void UnityEngine.XR.iOS.UnityARVideo::.ctor()
extern "C"  void UnityARVideo__ctor_m1829799440 (UnityARVideo_t1146951207 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.iOS.UnityARVideo::Start()
extern "C"  void UnityARVideo_Start_m3116293614 (UnityARVideo_t1146951207 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityARVideo_Start_m3116293614_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = (intptr_t)UnityARVideo_UpdateFrame_m3975841991_RuntimeMethod_var;
		ARFrameUpdate_t1157215840 * L_1 = (ARFrameUpdate_t1157215840 *)il2cpp_codegen_object_new(ARFrameUpdate_t1157215840_il2cpp_TypeInfo_var);
		ARFrameUpdate__ctor_m3633991724(L_1, __this, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var);
		UnityARSessionNativeInterface_add_ARFrameUpdatedEvent_m3366057771(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		__this->set_bCommandBufferInitialized_7((bool)0);
		return;
	}
}
// System.Void UnityEngine.XR.iOS.UnityARVideo::UpdateFrame(UnityEngine.XR.iOS.UnityARCamera)
extern "C"  void UnityARVideo_UpdateFrame_m3975841991 (UnityARVideo_t1146951207 * __this, UnityARCamera_t2069150450  ___cam0, const RuntimeMethod* method)
{
	Matrix4x4_t1817901843  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Matrix4x4_t1817901843 ));
		Matrix4x4_t1817901843  L_0 = V_0;
		__this->set__displayTransform_6(L_0);
		Matrix4x4_t1817901843 * L_1 = __this->get_address_of__displayTransform_6();
		UnityARMatrix4x4_t4073345847 * L_2 = (&___cam0)->get_address_of_displayTransform_6();
		Vector4_t3319028937  L_3 = L_2->get_column0_0();
		Matrix4x4_SetColumn_m2328592759(L_1, 0, L_3, /*hidden argument*/NULL);
		Matrix4x4_t1817901843 * L_4 = __this->get_address_of__displayTransform_6();
		UnityARMatrix4x4_t4073345847 * L_5 = (&___cam0)->get_address_of_displayTransform_6();
		Vector4_t3319028937  L_6 = L_5->get_column1_1();
		Matrix4x4_SetColumn_m2328592759(L_4, 1, L_6, /*hidden argument*/NULL);
		Matrix4x4_t1817901843 * L_7 = __this->get_address_of__displayTransform_6();
		UnityARMatrix4x4_t4073345847 * L_8 = (&___cam0)->get_address_of_displayTransform_6();
		Vector4_t3319028937  L_9 = L_8->get_column2_2();
		Matrix4x4_SetColumn_m2328592759(L_7, 2, L_9, /*hidden argument*/NULL);
		Matrix4x4_t1817901843 * L_10 = __this->get_address_of__displayTransform_6();
		UnityARMatrix4x4_t4073345847 * L_11 = (&___cam0)->get_address_of_displayTransform_6();
		Vector4_t3319028937  L_12 = L_11->get_column3_3();
		Matrix4x4_SetColumn_m2328592759(L_10, 3, L_12, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.iOS.UnityARVideo::InitializeCommandBuffer()
extern "C"  void UnityARVideo_InitializeCommandBuffer_m1538546596 (UnityARVideo_t1146951207 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityARVideo_InitializeCommandBuffer_m1538546596_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		CommandBuffer_t2206337031 * L_0 = (CommandBuffer_t2206337031 *)il2cpp_codegen_object_new(CommandBuffer_t2206337031_il2cpp_TypeInfo_var);
		CommandBuffer__ctor_m3028411456(L_0, /*hidden argument*/NULL);
		__this->set_m_VideoCommandBuffer_3(L_0);
		CommandBuffer_t2206337031 * L_1 = __this->get_m_VideoCommandBuffer_3();
		RenderTargetIdentifier_t2079184500  L_2 = RenderTargetIdentifier_op_Implicit_m2644497587(NULL /*static, unused*/, 1, /*hidden argument*/NULL);
		Material_t340375123 * L_3 = __this->get_m_ClearMaterial_2();
		NullCheck(L_1);
		CommandBuffer_Blit_m1578015716(L_1, (Texture_t3661962703 *)NULL, L_2, L_3, /*hidden argument*/NULL);
		Camera_t4157153871 * L_4 = Component_GetComponent_TisCamera_t4157153871_m1557787507(__this, /*hidden argument*/Component_GetComponent_TisCamera_t4157153871_m1557787507_RuntimeMethod_var);
		CommandBuffer_t2206337031 * L_5 = __this->get_m_VideoCommandBuffer_3();
		NullCheck(L_4);
		Camera_AddCommandBuffer_m1363239337(L_4, ((int32_t)10), L_5, /*hidden argument*/NULL);
		__this->set_bCommandBufferInitialized_7((bool)1);
		return;
	}
}
// System.Void UnityEngine.XR.iOS.UnityARVideo::OnDestroy()
extern "C"  void UnityARVideo_OnDestroy_m4099270667 (UnityARVideo_t1146951207 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityARVideo_OnDestroy_m4099270667_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Camera_t4157153871 * L_0 = Component_GetComponent_TisCamera_t4157153871_m1557787507(__this, /*hidden argument*/Component_GetComponent_TisCamera_t4157153871_m1557787507_RuntimeMethod_var);
		CommandBuffer_t2206337031 * L_1 = __this->get_m_VideoCommandBuffer_3();
		NullCheck(L_0);
		Camera_RemoveCommandBuffer_m773243127(L_0, ((int32_t)10), L_1, /*hidden argument*/NULL);
		intptr_t L_2 = (intptr_t)UnityARVideo_UpdateFrame_m3975841991_RuntimeMethod_var;
		ARFrameUpdate_t1157215840 * L_3 = (ARFrameUpdate_t1157215840 *)il2cpp_codegen_object_new(ARFrameUpdate_t1157215840_il2cpp_TypeInfo_var);
		ARFrameUpdate__ctor_m3633991724(L_3, __this, L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var);
		UnityARSessionNativeInterface_remove_ARFrameUpdatedEvent_m772523965(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		__this->set_bCommandBufferInitialized_7((bool)0);
		return;
	}
}
// System.Void UnityEngine.XR.iOS.UnityARVideo::OnPreRender()
extern "C"  void UnityARVideo_OnPreRender_m1315675298 (UnityARVideo_t1146951207 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityARVideo_OnPreRender_m1315675298_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ARTextureHandles_t852411561  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Resolution_t2487619763  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		IL2CPP_RUNTIME_CLASS_INIT(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var);
		UnityARSessionNativeInterface_t3929719369 * L_0 = UnityARSessionNativeInterface_GetARSessionNativeInterface_m1118592565(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		ARTextureHandles_t852411561  L_1 = UnityARSessionNativeInterface_GetARVideoTextureHandles_m1964002027(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		intptr_t L_2 = (&V_0)->get_textureY_0();
		bool L_3 = IntPtr_op_Equality_m408849716(NULL /*static, unused*/, L_2, (intptr_t)(0), /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0037;
		}
	}
	{
		intptr_t L_4 = (&V_0)->get_textureCbCr_1();
		bool L_5 = IntPtr_op_Equality_m408849716(NULL /*static, unused*/, L_4, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0038;
		}
	}

IL_0037:
	{
		return;
	}

IL_0038:
	{
		bool L_6 = __this->get_bCommandBufferInitialized_7();
		if (L_6)
		{
			goto IL_0049;
		}
	}
	{
		UnityARVideo_InitializeCommandBuffer_m1538546596(__this, /*hidden argument*/NULL);
	}

IL_0049:
	{
		Resolution_t2487619763  L_7 = Screen_get_currentResolution_m1680624610(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_1 = L_7;
		Texture2D_t3840446185 * L_8 = __this->get__videoTextureY_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_9 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_8, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_00b2;
		}
	}
	{
		int32_t L_10 = Resolution_get_width_m400677188((&V_1), /*hidden argument*/NULL);
		int32_t L_11 = Resolution_get_height_m933996501((&V_1), /*hidden argument*/NULL);
		intptr_t L_12 = (&V_0)->get_textureY_0();
		Texture2D_t3840446185 * L_13 = Texture2D_CreateExternalTexture_m2529687473(NULL /*static, unused*/, L_10, L_11, ((int32_t)63), (bool)0, (bool)0, L_12, /*hidden argument*/NULL);
		__this->set__videoTextureY_4(L_13);
		Texture2D_t3840446185 * L_14 = __this->get__videoTextureY_4();
		NullCheck(L_14);
		Texture_set_filterMode_m3078068058(L_14, 1, /*hidden argument*/NULL);
		Texture2D_t3840446185 * L_15 = __this->get__videoTextureY_4();
		NullCheck(L_15);
		Texture_set_wrapMode_m587872754(L_15, 0, /*hidden argument*/NULL);
		Material_t340375123 * L_16 = __this->get_m_ClearMaterial_2();
		Texture2D_t3840446185 * L_17 = __this->get__videoTextureY_4();
		NullCheck(L_16);
		Material_SetTexture_m1829349465(L_16, _stringLiteral2313301283, L_17, /*hidden argument*/NULL);
	}

IL_00b2:
	{
		Texture2D_t3840446185 * L_18 = __this->get__videoTextureCbCr_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_19 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_18, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_0115;
		}
	}
	{
		int32_t L_20 = Resolution_get_width_m400677188((&V_1), /*hidden argument*/NULL);
		int32_t L_21 = Resolution_get_height_m933996501((&V_1), /*hidden argument*/NULL);
		intptr_t L_22 = (&V_0)->get_textureCbCr_1();
		Texture2D_t3840446185 * L_23 = Texture2D_CreateExternalTexture_m2529687473(NULL /*static, unused*/, L_20, L_21, ((int32_t)62), (bool)0, (bool)0, L_22, /*hidden argument*/NULL);
		__this->set__videoTextureCbCr_5(L_23);
		Texture2D_t3840446185 * L_24 = __this->get__videoTextureCbCr_5();
		NullCheck(L_24);
		Texture_set_filterMode_m3078068058(L_24, 1, /*hidden argument*/NULL);
		Texture2D_t3840446185 * L_25 = __this->get__videoTextureCbCr_5();
		NullCheck(L_25);
		Texture_set_wrapMode_m587872754(L_25, 0, /*hidden argument*/NULL);
		Material_t340375123 * L_26 = __this->get_m_ClearMaterial_2();
		Texture2D_t3840446185 * L_27 = __this->get__videoTextureCbCr_5();
		NullCheck(L_26);
		Material_SetTexture_m1829349465(L_26, _stringLiteral3606922194, L_27, /*hidden argument*/NULL);
	}

IL_0115:
	{
		Texture2D_t3840446185 * L_28 = __this->get__videoTextureY_4();
		intptr_t L_29 = (&V_0)->get_textureY_0();
		NullCheck(L_28);
		Texture2D_UpdateExternalTexture_m2829146467(L_28, L_29, /*hidden argument*/NULL);
		Texture2D_t3840446185 * L_30 = __this->get__videoTextureCbCr_5();
		intptr_t L_31 = (&V_0)->get_textureCbCr_1();
		NullCheck(L_30);
		Texture2D_UpdateExternalTexture_m2829146467(L_30, L_31, /*hidden argument*/NULL);
		Material_t340375123 * L_32 = __this->get_m_ClearMaterial_2();
		Matrix4x4_t1817901843  L_33 = __this->get__displayTransform_6();
		NullCheck(L_32);
		Material_SetMatrix_m4094650785(L_32, _stringLiteral1055189311, L_33, /*hidden argument*/NULL);
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
// System.Void UnityEngine.XR.iOS.UnityRemoteVideo::.ctor()
extern "C"  void UnityRemoteVideo__ctor_m1516762280 (UnityRemoteVideo_t705138647 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.iOS.UnityRemoteVideo::Start()
extern "C"  void UnityRemoteVideo_Start_m768447242 (UnityRemoteVideo_t705138647 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityRemoteVideo_Start_m768447242_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var);
		UnityARSessionNativeInterface_t3929719369 * L_0 = UnityARSessionNativeInterface_GetARSessionNativeInterface_m1118592565(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_m_Session_3(L_0);
		intptr_t L_1 = (intptr_t)UnityRemoteVideo_UpdateCamera_m873484480_RuntimeMethod_var;
		ARFrameUpdate_t1157215840 * L_2 = (ARFrameUpdate_t1157215840 *)il2cpp_codegen_object_new(ARFrameUpdate_t1157215840_il2cpp_TypeInfo_var);
		ARFrameUpdate__ctor_m3633991724(L_2, __this, L_1, /*hidden argument*/NULL);
		UnityARSessionNativeInterface_add_ARFrameUpdatedEvent_m3366057771(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		__this->set_currentFrameIndex_5(0);
		__this->set_bTexturesInitialized_4((bool)0);
		return;
	}
}
// System.Void UnityEngine.XR.iOS.UnityRemoteVideo::UpdateCamera(UnityEngine.XR.iOS.UnityARCamera)
extern "C"  void UnityRemoteVideo_UpdateCamera_m873484480 (UnityRemoteVideo_t705138647 * __this, UnityARCamera_t2069150450  ___camera0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityRemoteVideo_UpdateCamera_m873484480_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->get_bTexturesInitialized_4();
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		UnityARCamera_t2069150450  L_1 = ___camera0;
		UnityRemoteVideo_InitializeTextures_m1227954273(__this, L_1, /*hidden argument*/NULL);
	}

IL_0012:
	{
		intptr_t L_2 = (intptr_t)UnityRemoteVideo_UpdateCamera_m873484480_RuntimeMethod_var;
		ARFrameUpdate_t1157215840 * L_3 = (ARFrameUpdate_t1157215840 *)il2cpp_codegen_object_new(ARFrameUpdate_t1157215840_il2cpp_TypeInfo_var);
		ARFrameUpdate__ctor_m3633991724(L_3, __this, L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var);
		UnityARSessionNativeInterface_remove_ARFrameUpdatedEvent_m772523965(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.iOS.UnityRemoteVideo::InitializeTextures(UnityEngine.XR.iOS.UnityARCamera)
extern "C"  void UnityRemoteVideo_InitializeTextures_m1227954273 (UnityRemoteVideo_t705138647 * __this, UnityARCamera_t2069150450  ___camera0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityRemoteVideo_InitializeTextures_m1227954273_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		UnityVideoParams_t4155354995 * L_0 = (&___camera0)->get_address_of_videoParams_4();
		int32_t L_1 = L_0->get_yWidth_0();
		UnityVideoParams_t4155354995 * L_2 = (&___camera0)->get_address_of_videoParams_4();
		int32_t L_3 = L_2->get_yHeight_1();
		V_0 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_1, (int32_t)L_3));
		UnityVideoParams_t4155354995 * L_4 = (&___camera0)->get_address_of_videoParams_4();
		int32_t L_5 = L_4->get_yWidth_0();
		UnityVideoParams_t4155354995 * L_6 = (&___camera0)->get_address_of_videoParams_4();
		int32_t L_7 = L_6->get_yHeight_1();
		V_1 = ((int32_t)((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_5, (int32_t)L_7))/(int32_t)2));
		int32_t L_8 = V_0;
		__this->set_m_textureYBytes_6(((ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)L_8)));
		int32_t L_9 = V_1;
		__this->set_m_textureUVBytes_7(((ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)L_9)));
		int32_t L_10 = V_0;
		__this->set_m_textureYBytes2_8(((ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)L_10)));
		int32_t L_11 = V_1;
		__this->set_m_textureUVBytes2_9(((ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)L_11)));
		ByteU5BU5D_t4116647657* L_12 = __this->get_m_textureYBytes_6();
		GCHandle_t3351438187  L_13 = GCHandle_Alloc_m3053200191(NULL /*static, unused*/, (RuntimeObject *)(RuntimeObject *)L_12, /*hidden argument*/NULL);
		__this->set_m_pinnedYArray_10(L_13);
		ByteU5BU5D_t4116647657* L_14 = __this->get_m_textureUVBytes_7();
		GCHandle_t3351438187  L_15 = GCHandle_Alloc_m3053200191(NULL /*static, unused*/, (RuntimeObject *)(RuntimeObject *)L_14, /*hidden argument*/NULL);
		__this->set_m_pinnedUVArray_11(L_15);
		__this->set_bTexturesInitialized_4((bool)1);
		return;
	}
}
// System.IntPtr UnityEngine.XR.iOS.UnityRemoteVideo::PinByteArray(System.Runtime.InteropServices.GCHandle&,System.Byte[])
extern "C"  intptr_t UnityRemoteVideo_PinByteArray_m562672237 (UnityRemoteVideo_t705138647 * __this, GCHandle_t3351438187 * ___handle0, ByteU5BU5D_t4116647657* ___array1, const RuntimeMethod* method)
{
	{
		GCHandle_t3351438187 * L_0 = ___handle0;
		GCHandle_Free_m1457699368(L_0, /*hidden argument*/NULL);
		GCHandle_t3351438187 * L_1 = ___handle0;
		ByteU5BU5D_t4116647657* L_2 = ___array1;
		GCHandle_t3351438187  L_3 = GCHandle_Alloc_m3823409740(NULL /*static, unused*/, (RuntimeObject *)(RuntimeObject *)L_2, 3, /*hidden argument*/NULL);
		*(GCHandle_t3351438187 *)L_1 = L_3;
		GCHandle_t3351438187 * L_4 = ___handle0;
		intptr_t L_5 = GCHandle_AddrOfPinnedObject_m3427142301(L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Byte[] UnityEngine.XR.iOS.UnityRemoteVideo::ByteArrayForFrame(System.Int32,System.Byte[],System.Byte[])
extern "C"  ByteU5BU5D_t4116647657* UnityRemoteVideo_ByteArrayForFrame_m1687071501 (UnityRemoteVideo_t705138647 * __this, int32_t ___frame0, ByteU5BU5D_t4116647657* ___array01, ByteU5BU5D_t4116647657* ___array12, const RuntimeMethod* method)
{
	ByteU5BU5D_t4116647657* G_B3_0 = NULL;
	{
		int32_t L_0 = ___frame0;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_000d;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_1 = ___array12;
		G_B3_0 = L_1;
		goto IL_000e;
	}

IL_000d:
	{
		ByteU5BU5D_t4116647657* L_2 = ___array01;
		G_B3_0 = L_2;
	}

IL_000e:
	{
		return G_B3_0;
	}
}
// System.Byte[] UnityEngine.XR.iOS.UnityRemoteVideo::YByteArrayForFrame(System.Int32)
extern "C"  ByteU5BU5D_t4116647657* UnityRemoteVideo_YByteArrayForFrame_m3411529770 (UnityRemoteVideo_t705138647 * __this, int32_t ___frame0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___frame0;
		ByteU5BU5D_t4116647657* L_1 = __this->get_m_textureYBytes_6();
		ByteU5BU5D_t4116647657* L_2 = __this->get_m_textureYBytes2_8();
		ByteU5BU5D_t4116647657* L_3 = UnityRemoteVideo_ByteArrayForFrame_m1687071501(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Byte[] UnityEngine.XR.iOS.UnityRemoteVideo::UVByteArrayForFrame(System.Int32)
extern "C"  ByteU5BU5D_t4116647657* UnityRemoteVideo_UVByteArrayForFrame_m4228667374 (UnityRemoteVideo_t705138647 * __this, int32_t ___frame0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___frame0;
		ByteU5BU5D_t4116647657* L_1 = __this->get_m_textureUVBytes_7();
		ByteU5BU5D_t4116647657* L_2 = __this->get_m_textureUVBytes2_9();
		ByteU5BU5D_t4116647657* L_3 = UnityRemoteVideo_ByteArrayForFrame_m1687071501(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Void UnityEngine.XR.iOS.UnityRemoteVideo::OnDestroy()
extern "C"  void UnityRemoteVideo_OnDestroy_m2450575749 (UnityRemoteVideo_t705138647 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityRemoteVideo_OnDestroy_m2450575749_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityARSessionNativeInterface_t3929719369 * L_0 = __this->get_m_Session_3();
		NullCheck(L_0);
		UnityARSessionNativeInterface_SetCapturePixelData_m3385125279(L_0, (bool)0, (intptr_t)(0), (intptr_t)(0), /*hidden argument*/NULL);
		GCHandle_t3351438187 * L_1 = __this->get_address_of_m_pinnedYArray_10();
		GCHandle_Free_m1457699368(L_1, /*hidden argument*/NULL);
		GCHandle_t3351438187 * L_2 = __this->get_address_of_m_pinnedUVArray_11();
		GCHandle_Free_m1457699368(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.iOS.UnityRemoteVideo::OnPreRender()
extern "C"  void UnityRemoteVideo_OnPreRender_m1591030712 (UnityRemoteVideo_t705138647 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityRemoteVideo_OnPreRender_m1591030712_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ARTextureHandles_t852411561  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Resolution_t2487619763  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		UnityARSessionNativeInterface_t3929719369 * L_0 = __this->get_m_Session_3();
		NullCheck(L_0);
		ARTextureHandles_t852411561  L_1 = UnityARSessionNativeInterface_GetARVideoTextureHandles_m1964002027(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		intptr_t L_2 = (&V_0)->get_textureY_0();
		bool L_3 = IntPtr_op_Equality_m408849716(NULL /*static, unused*/, L_2, (intptr_t)(0), /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0038;
		}
	}
	{
		intptr_t L_4 = (&V_0)->get_textureCbCr_1();
		bool L_5 = IntPtr_op_Equality_m408849716(NULL /*static, unused*/, L_4, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0039;
		}
	}

IL_0038:
	{
		return;
	}

IL_0039:
	{
		bool L_6 = __this->get_bTexturesInitialized_4();
		if (L_6)
		{
			goto IL_0045;
		}
	}
	{
		return;
	}

IL_0045:
	{
		int32_t L_7 = __this->get_currentFrameIndex_5();
		__this->set_currentFrameIndex_5(((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1))%(int32_t)2)));
		Resolution_t2487619763  L_8 = Screen_get_currentResolution_m1680624610(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_1 = L_8;
		UnityARSessionNativeInterface_t3929719369 * L_9 = __this->get_m_Session_3();
		GCHandle_t3351438187 * L_10 = __this->get_address_of_m_pinnedYArray_10();
		int32_t L_11 = __this->get_currentFrameIndex_5();
		ByteU5BU5D_t4116647657* L_12 = UnityRemoteVideo_YByteArrayForFrame_m3411529770(__this, L_11, /*hidden argument*/NULL);
		intptr_t L_13 = UnityRemoteVideo_PinByteArray_m562672237(__this, L_10, L_12, /*hidden argument*/NULL);
		GCHandle_t3351438187 * L_14 = __this->get_address_of_m_pinnedUVArray_11();
		int32_t L_15 = __this->get_currentFrameIndex_5();
		ByteU5BU5D_t4116647657* L_16 = UnityRemoteVideo_UVByteArrayForFrame_m4228667374(__this, L_15, /*hidden argument*/NULL);
		intptr_t L_17 = UnityRemoteVideo_PinByteArray_m562672237(__this, L_14, L_16, /*hidden argument*/NULL);
		NullCheck(L_9);
		UnityARSessionNativeInterface_SetCapturePixelData_m3385125279(L_9, (bool)1, L_13, L_17, /*hidden argument*/NULL);
		ConnectToEditor_t595742893 * L_18 = __this->get_connectToEditor_2();
		Guid_t  L_19 = ConnectionMessageIds_get_screenCaptureYMsgId_m3024188835(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_20 = __this->get_currentFrameIndex_5();
		ByteU5BU5D_t4116647657* L_21 = UnityRemoteVideo_YByteArrayForFrame_m3411529770(__this, ((int32_t)il2cpp_codegen_subtract((int32_t)1, (int32_t)L_20)), /*hidden argument*/NULL);
		NullCheck(L_18);
		ConnectToEditor_SendToEditor_m2358646039(L_18, L_19, L_21, /*hidden argument*/NULL);
		ConnectToEditor_t595742893 * L_22 = __this->get_connectToEditor_2();
		Guid_t  L_23 = ConnectionMessageIds_get_screenCaptureUVMsgId_m596317401(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_24 = __this->get_currentFrameIndex_5();
		ByteU5BU5D_t4116647657* L_25 = UnityRemoteVideo_UVByteArrayForFrame_m4228667374(__this, ((int32_t)il2cpp_codegen_subtract((int32_t)1, (int32_t)L_24)), /*hidden argument*/NULL);
		NullCheck(L_22);
		ConnectToEditor_SendToEditor_m2358646039(L_22, L_23, L_25, /*hidden argument*/NULL);
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
// System.Void UnityPointCloudExample::.ctor()
extern "C"  void UnityPointCloudExample__ctor_m3444243678 (UnityPointCloudExample_t3649008995 * __this, const RuntimeMethod* method)
{
	{
		__this->set_numPointsToShow_2(((int32_t)100));
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityPointCloudExample::Start()
extern "C"  void UnityPointCloudExample_Start_m4202814548 (UnityPointCloudExample_t3649008995 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityPointCloudExample_Start_m4202814548_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		intptr_t L_0 = (intptr_t)UnityPointCloudExample_ARFrameUpdated_m3531421433_RuntimeMethod_var;
		ARFrameUpdate_t1157215840 * L_1 = (ARFrameUpdate_t1157215840 *)il2cpp_codegen_object_new(ARFrameUpdate_t1157215840_il2cpp_TypeInfo_var);
		ARFrameUpdate__ctor_m3633991724(L_1, __this, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var);
		UnityARSessionNativeInterface_add_ARFrameUpdatedEvent_m3366057771(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_2 = __this->get_PointCloudPrefab_3();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_2, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_005c;
		}
	}
	{
		List_1_t2585711361 * L_4 = (List_1_t2585711361 *)il2cpp_codegen_object_new(List_1_t2585711361_il2cpp_TypeInfo_var);
		List_1__ctor_m1424466557(L_4, /*hidden argument*/List_1__ctor_m1424466557_RuntimeMethod_var);
		__this->set_pointCloudObjects_4(L_4);
		V_0 = 0;
		goto IL_004e;
	}

IL_0034:
	{
		List_1_t2585711361 * L_5 = __this->get_pointCloudObjects_4();
		GameObject_t1113636619 * L_6 = __this->get_PointCloudPrefab_3();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		GameObject_t1113636619 * L_7 = Object_Instantiate_TisGameObject_t1113636619_m4070250708(NULL /*static, unused*/, L_6, /*hidden argument*/Object_Instantiate_TisGameObject_t1113636619_m4070250708_RuntimeMethod_var);
		NullCheck(L_5);
		List_1_Add_m2765963565(L_5, L_7, /*hidden argument*/List_1_Add_m2765963565_RuntimeMethod_var);
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_004e:
	{
		int32_t L_9 = V_0;
		uint32_t L_10 = __this->get_numPointsToShow_2();
		if ((((int64_t)(((int64_t)((int64_t)L_9)))) < ((int64_t)(((int64_t)((uint64_t)L_10))))))
		{
			goto IL_0034;
		}
	}

IL_005c:
	{
		return;
	}
}
// System.Void UnityPointCloudExample::ARFrameUpdated(UnityEngine.XR.iOS.UnityARCamera)
extern "C"  void UnityPointCloudExample_ARFrameUpdated_m3531421433 (UnityPointCloudExample_t3649008995 * __this, UnityARCamera_t2069150450  ___camera0, const RuntimeMethod* method)
{
	{
		Vector3U5BU5D_t1718750761* L_0 = (&___camera0)->get_pointCloudData_7();
		__this->set_m_PointCloudData_5(L_0);
		return;
	}
}
// System.Void UnityPointCloudExample::Update()
extern "C"  void UnityPointCloudExample_Update_m3072589646 (UnityPointCloudExample_t3649008995 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityPointCloudExample_Update_m3072589646_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Vector4_t3319028937  V_1;
	memset(&V_1, 0, sizeof(V_1));
	GameObject_t1113636619 * V_2 = NULL;
	{
		GameObject_t1113636619 * L_0 = __this->get_PointCloudPrefab_3();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_008c;
		}
	}
	{
		Vector3U5BU5D_t1718750761* L_2 = __this->get_m_PointCloudData_5();
		if (!L_2)
		{
			goto IL_008c;
		}
	}
	{
		V_0 = 0;
		goto IL_0070;
	}

IL_0023:
	{
		Vector3U5BU5D_t1718750761* L_3 = __this->get_m_PointCloudData_5();
		int32_t L_4 = V_0;
		NullCheck(L_3);
		IL2CPP_RUNTIME_CLASS_INIT(Vector4_t3319028937_il2cpp_TypeInfo_var);
		Vector4_t3319028937  L_5 = Vector4_op_Implicit_m2966035112(NULL /*static, unused*/, (*(Vector3_t3722313464 *)((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))), /*hidden argument*/NULL);
		V_1 = L_5;
		List_1_t2585711361 * L_6 = __this->get_pointCloudObjects_4();
		int32_t L_7 = V_0;
		NullCheck(L_6);
		GameObject_t1113636619 * L_8 = List_1_get_Item_m3743125852(L_6, L_7, /*hidden argument*/List_1_get_Item_m3743125852_RuntimeMethod_var);
		V_2 = L_8;
		GameObject_t1113636619 * L_9 = V_2;
		NullCheck(L_9);
		Transform_t3600365921 * L_10 = GameObject_get_transform_m1369836730(L_9, /*hidden argument*/NULL);
		float L_11 = (&V_1)->get_x_1();
		float L_12 = (&V_1)->get_y_2();
		float L_13 = (&V_1)->get_z_3();
		Vector3_t3722313464  L_14;
		memset(&L_14, 0, sizeof(L_14));
		Vector3__ctor_m3353183577((&L_14), L_11, L_12, L_13, /*hidden argument*/NULL);
		NullCheck(L_10);
		Transform_set_position_m3387557959(L_10, L_14, /*hidden argument*/NULL);
		int32_t L_15 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_0070:
	{
		int32_t L_16 = V_0;
		Vector3U5BU5D_t1718750761* L_17 = __this->get_m_PointCloudData_5();
		NullCheck(L_17);
		uint32_t L_18 = __this->get_numPointsToShow_2();
		int64_t L_19 = Math_Min_m2427345610(NULL /*static, unused*/, (((int64_t)((int64_t)(((int32_t)((int32_t)(((RuntimeArray *)L_17)->max_length))))))), (((int64_t)((uint64_t)L_18))), /*hidden argument*/NULL);
		if ((((int64_t)(((int64_t)((int64_t)L_16)))) < ((int64_t)L_19)))
		{
			goto IL_0023;
		}
	}

IL_008c:
	{
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
// System.Byte[] Utils.ObjectSerializationExtension::SerializeToByteArray(System.Object)
extern "C"  ByteU5BU5D_t4116647657* ObjectSerializationExtension_SerializeToByteArray_m579578536 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ObjectSerializationExtension_SerializeToByteArray_m579578536_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	BinaryFormatter_t3197753202 * V_0 = NULL;
	MemoryStream_t94973147 * V_1 = NULL;
	ByteU5BU5D_t4116647657* V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		RuntimeObject * L_0 = ___obj0;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		return (ByteU5BU5D_t4116647657*)NULL;
	}

IL_0008:
	{
		BinaryFormatter_t3197753202 * L_1 = (BinaryFormatter_t3197753202 *)il2cpp_codegen_object_new(BinaryFormatter_t3197753202_il2cpp_TypeInfo_var);
		BinaryFormatter__ctor_m971003555(L_1, /*hidden argument*/NULL);
		V_0 = L_1;
		MemoryStream_t94973147 * L_2 = (MemoryStream_t94973147 *)il2cpp_codegen_object_new(MemoryStream_t94973147_il2cpp_TypeInfo_var);
		MemoryStream__ctor_m2678285228(L_2, /*hidden argument*/NULL);
		V_1 = L_2;
	}

IL_0014:
	try
	{ // begin try (depth: 1)
		BinaryFormatter_t3197753202 * L_3 = V_0;
		MemoryStream_t94973147 * L_4 = V_1;
		RuntimeObject * L_5 = ___obj0;
		NullCheck(L_3);
		BinaryFormatter_Serialize_m1744386044(L_3, L_4, L_5, /*hidden argument*/NULL);
		MemoryStream_t94973147 * L_6 = V_1;
		NullCheck(L_6);
		ByteU5BU5D_t4116647657* L_7 = VirtFuncInvoker0< ByteU5BU5D_t4116647657* >::Invoke(28 /* System.Byte[] System.IO.MemoryStream::ToArray() */, L_6);
		V_2 = L_7;
		IL2CPP_LEAVE(0x35, FINALLY_0028);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0028;
	}

FINALLY_0028:
	{ // begin finally (depth: 1)
		{
			MemoryStream_t94973147 * L_8 = V_1;
			if (!L_8)
			{
				goto IL_0034;
			}
		}

IL_002e:
		{
			MemoryStream_t94973147 * L_9 = V_1;
			NullCheck(L_9);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_9);
		}

IL_0034:
		{
			IL2CPP_END_FINALLY(40)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(40)
	{
		IL2CPP_JUMP_TBL(0x35, IL_0035)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0035:
	{
		ByteU5BU5D_t4116647657* L_10 = V_2;
		return L_10;
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
// System.Void Utils.serializableARKitInit::.ctor(Utils.serializableARSessionConfiguration,UnityEngine.XR.iOS.UnityARSessionRunOption)
extern "C"  void serializableARKitInit__ctor_m2106601498 (serializableARKitInit_t3885066048 * __this, serializableARSessionConfiguration_t1467016906 * ___cfg0, int32_t ___option1, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		serializableARSessionConfiguration_t1467016906 * L_0 = ___cfg0;
		__this->set_config_0(L_0);
		int32_t L_1 = ___option1;
		__this->set_runOption_1(L_1);
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
// System.Void Utils.serializableARSessionConfiguration::.ctor(UnityEngine.XR.iOS.UnityARAlignment,UnityEngine.XR.iOS.UnityARPlaneDetection,System.Boolean,System.Boolean)
extern "C"  void serializableARSessionConfiguration__ctor_m1685433052 (serializableARSessionConfiguration_t1467016906 * __this, int32_t ___align0, int32_t ___planeDet1, bool ___getPtCloud2, bool ___enableLightEst3, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___align0;
		__this->set_alignment_0(L_0);
		int32_t L_1 = ___planeDet1;
		__this->set_planeDetection_1(L_1);
		bool L_2 = ___getPtCloud2;
		__this->set_getPointCloudData_2(L_2);
		bool L_3 = ___enableLightEst3;
		__this->set_enableLightEstimation_3(L_3);
		return;
	}
}
// Utils.serializableARSessionConfiguration Utils.serializableARSessionConfiguration::op_Implicit(UnityEngine.XR.iOS.ARKitWorldTrackingSessionConfiguration)
extern "C"  serializableARSessionConfiguration_t1467016906 * serializableARSessionConfiguration_op_Implicit_m1556611494 (RuntimeObject * __this /* static, unused */, ARKitWorldTrackingSessionConfiguration_t273386347  ___awtsc0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (serializableARSessionConfiguration_op_Implicit_m1556611494_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = (&___awtsc0)->get_alignment_0();
		int32_t L_1 = (&___awtsc0)->get_planeDetection_1();
		bool L_2 = (&___awtsc0)->get_getPointCloudData_2();
		bool L_3 = (&___awtsc0)->get_enableLightEstimation_3();
		serializableARSessionConfiguration_t1467016906 * L_4 = (serializableARSessionConfiguration_t1467016906 *)il2cpp_codegen_object_new(serializableARSessionConfiguration_t1467016906_il2cpp_TypeInfo_var);
		serializableARSessionConfiguration__ctor_m1685433052(L_4, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// UnityEngine.XR.iOS.ARKitWorldTrackingSessionConfiguration Utils.serializableARSessionConfiguration::op_Implicit(Utils.serializableARSessionConfiguration)
extern "C"  ARKitWorldTrackingSessionConfiguration_t273386347  serializableARSessionConfiguration_op_Implicit_m1847618679 (RuntimeObject * __this /* static, unused */, serializableARSessionConfiguration_t1467016906 * ___sasc0, const RuntimeMethod* method)
{
	{
		serializableARSessionConfiguration_t1467016906 * L_0 = ___sasc0;
		NullCheck(L_0);
		int32_t L_1 = L_0->get_alignment_0();
		serializableARSessionConfiguration_t1467016906 * L_2 = ___sasc0;
		NullCheck(L_2);
		int32_t L_3 = L_2->get_planeDetection_1();
		serializableARSessionConfiguration_t1467016906 * L_4 = ___sasc0;
		NullCheck(L_4);
		bool L_5 = L_4->get_getPointCloudData_2();
		serializableARSessionConfiguration_t1467016906 * L_6 = ___sasc0;
		NullCheck(L_6);
		bool L_7 = L_6->get_enableLightEstimation_3();
		ARKitWorldTrackingSessionConfiguration_t273386347  L_8;
		memset(&L_8, 0, sizeof(L_8));
		ARKitWorldTrackingSessionConfiguration__ctor_m2019856913((&L_8), L_1, L_3, L_5, L_7, /*hidden argument*/NULL);
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
// System.Void Utils.serializableFromEditorMessage::.ctor()
extern "C"  void serializableFromEditorMessage__ctor_m2220754625 (serializableFromEditorMessage_t3245497382 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
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
// System.Void Utils.serializablePointCloud::.ctor(System.Byte[])
extern "C"  void serializablePointCloud__ctor_m3190919572 (serializablePointCloud_t455238287 * __this, ByteU5BU5D_t4116647657* ___inputPoints0, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_0 = ___inputPoints0;
		__this->set_pointCloudData_0(L_0);
		return;
	}
}
// Utils.serializablePointCloud Utils.serializablePointCloud::op_Implicit(UnityEngine.Vector3[])
extern "C"  serializablePointCloud_t455238287 * serializablePointCloud_op_Implicit_m463505948 (RuntimeObject * __this /* static, unused */, Vector3U5BU5D_t1718750761* ___vecPointCloud0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (serializablePointCloud_op_Implicit_m463505948_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_t4116647657* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		Vector3U5BU5D_t1718750761* L_0 = ___vecPointCloud0;
		if (!L_0)
		{
			goto IL_008a;
		}
	}
	{
		Vector3U5BU5D_t1718750761* L_1 = ___vecPointCloud0;
		NullCheck(L_1);
		V_0 = ((ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_1)->max_length)))), (int32_t)4)), (int32_t)3))));
		V_1 = 0;
		goto IL_007a;
	}

IL_001a:
	{
		int32_t L_2 = V_1;
		V_2 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_2, (int32_t)3));
		Vector3U5BU5D_t1718750761* L_3 = ___vecPointCloud0;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		float L_5 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->get_x_1();
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_t3118986983_il2cpp_TypeInfo_var);
		ByteU5BU5D_t4116647657* L_6 = BitConverter_GetBytes_m692533364(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_7 = V_0;
		int32_t L_8 = V_2;
		Buffer_BlockCopy_m2884209081(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_6, 0, (RuntimeArray *)(RuntimeArray *)L_7, ((int32_t)il2cpp_codegen_multiply((int32_t)L_8, (int32_t)4)), 4, /*hidden argument*/NULL);
		Vector3U5BU5D_t1718750761* L_9 = ___vecPointCloud0;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		float L_11 = ((L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10)))->get_y_2();
		ByteU5BU5D_t4116647657* L_12 = BitConverter_GetBytes_m692533364(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_13 = V_0;
		int32_t L_14 = V_2;
		Buffer_BlockCopy_m2884209081(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_12, 0, (RuntimeArray *)(RuntimeArray *)L_13, ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1)), (int32_t)4)), 4, /*hidden argument*/NULL);
		Vector3U5BU5D_t1718750761* L_15 = ___vecPointCloud0;
		int32_t L_16 = V_1;
		NullCheck(L_15);
		float L_17 = ((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->get_z_3();
		ByteU5BU5D_t4116647657* L_18 = BitConverter_GetBytes_m692533364(NULL /*static, unused*/, L_17, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_19 = V_0;
		int32_t L_20 = V_2;
		Buffer_BlockCopy_m2884209081(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_18, 0, (RuntimeArray *)(RuntimeArray *)L_19, ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)2)), (int32_t)4)), 4, /*hidden argument*/NULL);
		int32_t L_21 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)1));
	}

IL_007a:
	{
		int32_t L_22 = V_1;
		Vector3U5BU5D_t1718750761* L_23 = ___vecPointCloud0;
		NullCheck(L_23);
		if ((((int32_t)L_22) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_23)->max_length)))))))
		{
			goto IL_001a;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_24 = V_0;
		serializablePointCloud_t455238287 * L_25 = (serializablePointCloud_t455238287 *)il2cpp_codegen_object_new(serializablePointCloud_t455238287_il2cpp_TypeInfo_var);
		serializablePointCloud__ctor_m3190919572(L_25, L_24, /*hidden argument*/NULL);
		return L_25;
	}

IL_008a:
	{
		serializablePointCloud_t455238287 * L_26 = (serializablePointCloud_t455238287 *)il2cpp_codegen_object_new(serializablePointCloud_t455238287_il2cpp_TypeInfo_var);
		serializablePointCloud__ctor_m3190919572(L_26, (ByteU5BU5D_t4116647657*)(ByteU5BU5D_t4116647657*)NULL, /*hidden argument*/NULL);
		return L_26;
	}
}
// UnityEngine.Vector3[] Utils.serializablePointCloud::op_Implicit(Utils.serializablePointCloud)
extern "C"  Vector3U5BU5D_t1718750761* serializablePointCloud_op_Implicit_m1866692932 (RuntimeObject * __this /* static, unused */, serializablePointCloud_t455238287 * ___spc0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (serializablePointCloud_op_Implicit_m1866692932_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Vector3U5BU5D_t1718750761* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		serializablePointCloud_t455238287 * L_0 = ___spc0;
		NullCheck(L_0);
		ByteU5BU5D_t4116647657* L_1 = L_0->get_pointCloudData_0();
		if (!L_1)
		{
			goto IL_0088;
		}
	}
	{
		serializablePointCloud_t455238287 * L_2 = ___spc0;
		NullCheck(L_2);
		ByteU5BU5D_t4116647657* L_3 = L_2->get_pointCloudData_0();
		NullCheck(L_3);
		V_0 = ((int32_t)((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_3)->max_length))))/(int32_t)((int32_t)12)));
		int32_t L_4 = V_0;
		V_1 = ((Vector3U5BU5D_t1718750761*)SZArrayNew(Vector3U5BU5D_t1718750761_il2cpp_TypeInfo_var, (uint32_t)L_4));
		V_2 = 0;
		goto IL_007f;
	}

IL_0025:
	{
		int32_t L_5 = V_2;
		V_3 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_5, (int32_t)3));
		Vector3U5BU5D_t1718750761* L_6 = V_1;
		int32_t L_7 = V_2;
		NullCheck(L_6);
		serializablePointCloud_t455238287 * L_8 = ___spc0;
		NullCheck(L_8);
		ByteU5BU5D_t4116647657* L_9 = L_8->get_pointCloudData_0();
		int32_t L_10 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_t3118986983_il2cpp_TypeInfo_var);
		float L_11 = BitConverter_ToSingle_m2597008633(NULL /*static, unused*/, L_9, ((int32_t)il2cpp_codegen_multiply((int32_t)L_10, (int32_t)4)), /*hidden argument*/NULL);
		((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)))->set_x_1(L_11);
		Vector3U5BU5D_t1718750761* L_12 = V_1;
		int32_t L_13 = V_2;
		NullCheck(L_12);
		serializablePointCloud_t455238287 * L_14 = ___spc0;
		NullCheck(L_14);
		ByteU5BU5D_t4116647657* L_15 = L_14->get_pointCloudData_0();
		int32_t L_16 = V_3;
		float L_17 = BitConverter_ToSingle_m2597008633(NULL /*static, unused*/, L_15, ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1)), (int32_t)4)), /*hidden argument*/NULL);
		((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->set_y_2(L_17);
		Vector3U5BU5D_t1718750761* L_18 = V_1;
		int32_t L_19 = V_2;
		NullCheck(L_18);
		serializablePointCloud_t455238287 * L_20 = ___spc0;
		NullCheck(L_20);
		ByteU5BU5D_t4116647657* L_21 = L_20->get_pointCloudData_0();
		int32_t L_22 = V_3;
		float L_23 = BitConverter_ToSingle_m2597008633(NULL /*static, unused*/, L_21, ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)2)), (int32_t)4)), /*hidden argument*/NULL);
		((L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_19)))->set_z_3(L_23);
		int32_t L_24 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)1));
	}

IL_007f:
	{
		int32_t L_25 = V_2;
		int32_t L_26 = V_0;
		if ((((int32_t)L_25) < ((int32_t)L_26)))
		{
			goto IL_0025;
		}
	}
	{
		Vector3U5BU5D_t1718750761* L_27 = V_1;
		return L_27;
	}

IL_0088:
	{
		return (Vector3U5BU5D_t1718750761*)NULL;
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
// System.Void Utils.serializableUnityARCamera::.ctor(Utils.serializableUnityARMatrix4x4,Utils.serializableUnityARMatrix4x4,UnityEngine.XR.iOS.ARTrackingState,UnityEngine.XR.iOS.ARTrackingStateReason,UnityEngine.XR.iOS.UnityVideoParams,UnityEngine.XR.iOS.UnityARLightEstimate,Utils.serializableUnityARMatrix4x4,Utils.serializablePointCloud)
extern "C"  void serializableUnityARCamera__ctor_m591095561 (serializableUnityARCamera_t4158151215 * __this, serializableUnityARMatrix4x4_t78255337 * ___wt0, serializableUnityARMatrix4x4_t78255337 * ___pm1, int32_t ___ats2, int32_t ___atsr3, UnityVideoParams_t4155354995  ___uvp4, UnityARLightEstimate_t1498306117  ___lightEst5, serializableUnityARMatrix4x4_t78255337 * ___dt6, serializablePointCloud_t455238287 * ___spc7, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		serializableUnityARMatrix4x4_t78255337 * L_0 = ___wt0;
		__this->set_worldTransform_0(L_0);
		serializableUnityARMatrix4x4_t78255337 * L_1 = ___pm1;
		__this->set_projectionMatrix_1(L_1);
		int32_t L_2 = ___ats2;
		__this->set_trackingState_2(L_2);
		int32_t L_3 = ___atsr3;
		__this->set_trackingReason_3(L_3);
		UnityVideoParams_t4155354995  L_4 = ___uvp4;
		__this->set_videoParams_4(L_4);
		UnityARLightEstimate_t1498306117  L_5 = ___lightEst5;
		__this->set_lightEstimation_5(L_5);
		serializableUnityARMatrix4x4_t78255337 * L_6 = ___dt6;
		__this->set_displayTransform_7(L_6);
		serializablePointCloud_t455238287 * L_7 = ___spc7;
		__this->set_pointCloud_6(L_7);
		return;
	}
}
// Utils.serializableUnityARCamera Utils.serializableUnityARCamera::op_Implicit(UnityEngine.XR.iOS.UnityARCamera)
extern "C"  serializableUnityARCamera_t4158151215 * serializableUnityARCamera_op_Implicit_m1598722366 (RuntimeObject * __this /* static, unused */, UnityARCamera_t2069150450  ___rValue0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (serializableUnityARCamera_op_Implicit_m1598722366_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityARMatrix4x4_t4073345847  L_0 = (&___rValue0)->get_worldTransform_0();
		serializableUnityARMatrix4x4_t78255337 * L_1 = serializableUnityARMatrix4x4_op_Implicit_m3630501456(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		UnityARMatrix4x4_t4073345847  L_2 = (&___rValue0)->get_projectionMatrix_1();
		serializableUnityARMatrix4x4_t78255337 * L_3 = serializableUnityARMatrix4x4_op_Implicit_m3630501456(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		int32_t L_4 = (&___rValue0)->get_trackingState_2();
		int32_t L_5 = (&___rValue0)->get_trackingReason_3();
		UnityVideoParams_t4155354995  L_6 = (&___rValue0)->get_videoParams_4();
		UnityARLightEstimate_t1498306117  L_7 = (&___rValue0)->get_lightEstimation_5();
		UnityARMatrix4x4_t4073345847  L_8 = (&___rValue0)->get_displayTransform_6();
		serializableUnityARMatrix4x4_t78255337 * L_9 = serializableUnityARMatrix4x4_op_Implicit_m3630501456(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		Vector3U5BU5D_t1718750761* L_10 = (&___rValue0)->get_pointCloudData_7();
		serializablePointCloud_t455238287 * L_11 = serializablePointCloud_op_Implicit_m463505948(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		serializableUnityARCamera_t4158151215 * L_12 = (serializableUnityARCamera_t4158151215 *)il2cpp_codegen_object_new(serializableUnityARCamera_t4158151215_il2cpp_TypeInfo_var);
		serializableUnityARCamera__ctor_m591095561(L_12, L_1, L_3, L_4, L_5, L_6, L_7, L_9, L_11, /*hidden argument*/NULL);
		return L_12;
	}
}
// UnityEngine.XR.iOS.UnityARCamera Utils.serializableUnityARCamera::op_Implicit(Utils.serializableUnityARCamera)
extern "C"  UnityARCamera_t2069150450  serializableUnityARCamera_op_Implicit_m2839687167 (RuntimeObject * __this /* static, unused */, serializableUnityARCamera_t4158151215 * ___rValue0, const RuntimeMethod* method)
{
	{
		serializableUnityARCamera_t4158151215 * L_0 = ___rValue0;
		NullCheck(L_0);
		serializableUnityARMatrix4x4_t78255337 * L_1 = L_0->get_worldTransform_0();
		UnityARMatrix4x4_t4073345847  L_2 = serializableUnityARMatrix4x4_op_Implicit_m2311882771(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		serializableUnityARCamera_t4158151215 * L_3 = ___rValue0;
		NullCheck(L_3);
		serializableUnityARMatrix4x4_t78255337 * L_4 = L_3->get_projectionMatrix_1();
		UnityARMatrix4x4_t4073345847  L_5 = serializableUnityARMatrix4x4_op_Implicit_m2311882771(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		serializableUnityARCamera_t4158151215 * L_6 = ___rValue0;
		NullCheck(L_6);
		int32_t L_7 = L_6->get_trackingState_2();
		serializableUnityARCamera_t4158151215 * L_8 = ___rValue0;
		NullCheck(L_8);
		int32_t L_9 = L_8->get_trackingReason_3();
		serializableUnityARCamera_t4158151215 * L_10 = ___rValue0;
		NullCheck(L_10);
		UnityVideoParams_t4155354995  L_11 = L_10->get_videoParams_4();
		serializableUnityARCamera_t4158151215 * L_12 = ___rValue0;
		NullCheck(L_12);
		UnityARLightEstimate_t1498306117  L_13 = L_12->get_lightEstimation_5();
		serializableUnityARCamera_t4158151215 * L_14 = ___rValue0;
		NullCheck(L_14);
		serializableUnityARMatrix4x4_t78255337 * L_15 = L_14->get_displayTransform_7();
		UnityARMatrix4x4_t4073345847  L_16 = serializableUnityARMatrix4x4_op_Implicit_m2311882771(NULL /*static, unused*/, L_15, /*hidden argument*/NULL);
		serializableUnityARCamera_t4158151215 * L_17 = ___rValue0;
		NullCheck(L_17);
		serializablePointCloud_t455238287 * L_18 = L_17->get_pointCloud_6();
		Vector3U5BU5D_t1718750761* L_19 = serializablePointCloud_op_Implicit_m1866692932(NULL /*static, unused*/, L_18, /*hidden argument*/NULL);
		UnityARCamera_t2069150450  L_20;
		memset(&L_20, 0, sizeof(L_20));
		UnityARCamera__ctor_m1982929665((&L_20), L_2, L_5, L_7, L_9, L_11, L_13, L_16, L_19, /*hidden argument*/NULL);
		return L_20;
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
// System.Void Utils.serializableUnityARMatrix4x4::.ctor(Utils.SerializableVector4,Utils.SerializableVector4,Utils.SerializableVector4,Utils.SerializableVector4)
extern "C"  void serializableUnityARMatrix4x4__ctor_m3496280910 (serializableUnityARMatrix4x4_t78255337 * __this, SerializableVector4_t1862640084 * ___v00, SerializableVector4_t1862640084 * ___v11, SerializableVector4_t1862640084 * ___v22, SerializableVector4_t1862640084 * ___v33, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		SerializableVector4_t1862640084 * L_0 = ___v00;
		__this->set_column0_0(L_0);
		SerializableVector4_t1862640084 * L_1 = ___v11;
		__this->set_column1_1(L_1);
		SerializableVector4_t1862640084 * L_2 = ___v22;
		__this->set_column2_2(L_2);
		SerializableVector4_t1862640084 * L_3 = ___v33;
		__this->set_column3_3(L_3);
		return;
	}
}
// Utils.serializableUnityARMatrix4x4 Utils.serializableUnityARMatrix4x4::op_Implicit(UnityEngine.XR.iOS.UnityARMatrix4x4)
extern "C"  serializableUnityARMatrix4x4_t78255337 * serializableUnityARMatrix4x4_op_Implicit_m3630501456 (RuntimeObject * __this /* static, unused */, UnityARMatrix4x4_t4073345847  ___rValue0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (serializableUnityARMatrix4x4_op_Implicit_m3630501456_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Vector4_t3319028937  L_0 = (&___rValue0)->get_column0_0();
		SerializableVector4_t1862640084 * L_1 = SerializableVector4_op_Implicit_m14360340(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		Vector4_t3319028937  L_2 = (&___rValue0)->get_column1_1();
		SerializableVector4_t1862640084 * L_3 = SerializableVector4_op_Implicit_m14360340(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		Vector4_t3319028937  L_4 = (&___rValue0)->get_column2_2();
		SerializableVector4_t1862640084 * L_5 = SerializableVector4_op_Implicit_m14360340(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		Vector4_t3319028937  L_6 = (&___rValue0)->get_column3_3();
		SerializableVector4_t1862640084 * L_7 = SerializableVector4_op_Implicit_m14360340(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		serializableUnityARMatrix4x4_t78255337 * L_8 = (serializableUnityARMatrix4x4_t78255337 *)il2cpp_codegen_object_new(serializableUnityARMatrix4x4_t78255337_il2cpp_TypeInfo_var);
		serializableUnityARMatrix4x4__ctor_m3496280910(L_8, L_1, L_3, L_5, L_7, /*hidden argument*/NULL);
		return L_8;
	}
}
// UnityEngine.XR.iOS.UnityARMatrix4x4 Utils.serializableUnityARMatrix4x4::op_Implicit(Utils.serializableUnityARMatrix4x4)
extern "C"  UnityARMatrix4x4_t4073345847  serializableUnityARMatrix4x4_op_Implicit_m2311882771 (RuntimeObject * __this /* static, unused */, serializableUnityARMatrix4x4_t78255337 * ___rValue0, const RuntimeMethod* method)
{
	{
		serializableUnityARMatrix4x4_t78255337 * L_0 = ___rValue0;
		NullCheck(L_0);
		SerializableVector4_t1862640084 * L_1 = L_0->get_column0_0();
		Vector4_t3319028937  L_2 = SerializableVector4_op_Implicit_m3519692110(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		serializableUnityARMatrix4x4_t78255337 * L_3 = ___rValue0;
		NullCheck(L_3);
		SerializableVector4_t1862640084 * L_4 = L_3->get_column1_1();
		Vector4_t3319028937  L_5 = SerializableVector4_op_Implicit_m3519692110(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		serializableUnityARMatrix4x4_t78255337 * L_6 = ___rValue0;
		NullCheck(L_6);
		SerializableVector4_t1862640084 * L_7 = L_6->get_column2_2();
		Vector4_t3319028937  L_8 = SerializableVector4_op_Implicit_m3519692110(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		serializableUnityARMatrix4x4_t78255337 * L_9 = ___rValue0;
		NullCheck(L_9);
		SerializableVector4_t1862640084 * L_10 = L_9->get_column3_3();
		Vector4_t3319028937  L_11 = SerializableVector4_op_Implicit_m3519692110(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		UnityARMatrix4x4_t4073345847  L_12;
		memset(&L_12, 0, sizeof(L_12));
		UnityARMatrix4x4__ctor_m3835909947((&L_12), L_2, L_5, L_8, L_11, /*hidden argument*/NULL);
		return L_12;
	}
}
// Utils.serializableUnityARMatrix4x4 Utils.serializableUnityARMatrix4x4::op_Implicit(UnityEngine.Matrix4x4)
extern "C"  serializableUnityARMatrix4x4_t78255337 * serializableUnityARMatrix4x4_op_Implicit_m3556108972 (RuntimeObject * __this /* static, unused */, Matrix4x4_t1817901843  ___rValue0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (serializableUnityARMatrix4x4_op_Implicit_m3556108972_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Vector4_t3319028937  L_0 = Matrix4x4_GetColumn_m461504848((&___rValue0), 0, /*hidden argument*/NULL);
		SerializableVector4_t1862640084 * L_1 = SerializableVector4_op_Implicit_m14360340(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		Vector4_t3319028937  L_2 = Matrix4x4_GetColumn_m461504848((&___rValue0), 1, /*hidden argument*/NULL);
		SerializableVector4_t1862640084 * L_3 = SerializableVector4_op_Implicit_m14360340(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		Vector4_t3319028937  L_4 = Matrix4x4_GetColumn_m461504848((&___rValue0), 2, /*hidden argument*/NULL);
		SerializableVector4_t1862640084 * L_5 = SerializableVector4_op_Implicit_m14360340(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		Vector4_t3319028937  L_6 = Matrix4x4_GetColumn_m461504848((&___rValue0), 3, /*hidden argument*/NULL);
		SerializableVector4_t1862640084 * L_7 = SerializableVector4_op_Implicit_m14360340(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		serializableUnityARMatrix4x4_t78255337 * L_8 = (serializableUnityARMatrix4x4_t78255337 *)il2cpp_codegen_object_new(serializableUnityARMatrix4x4_t78255337_il2cpp_TypeInfo_var);
		serializableUnityARMatrix4x4__ctor_m3496280910(L_8, L_1, L_3, L_5, L_7, /*hidden argument*/NULL);
		return L_8;
	}
}
// UnityEngine.Matrix4x4 Utils.serializableUnityARMatrix4x4::op_Implicit(Utils.serializableUnityARMatrix4x4)
extern "C"  Matrix4x4_t1817901843  serializableUnityARMatrix4x4_op_Implicit_m456506418 (RuntimeObject * __this /* static, unused */, serializableUnityARMatrix4x4_t78255337 * ___rValue0, const RuntimeMethod* method)
{
	{
		serializableUnityARMatrix4x4_t78255337 * L_0 = ___rValue0;
		NullCheck(L_0);
		SerializableVector4_t1862640084 * L_1 = L_0->get_column0_0();
		Vector4_t3319028937  L_2 = SerializableVector4_op_Implicit_m3519692110(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		serializableUnityARMatrix4x4_t78255337 * L_3 = ___rValue0;
		NullCheck(L_3);
		SerializableVector4_t1862640084 * L_4 = L_3->get_column1_1();
		Vector4_t3319028937  L_5 = SerializableVector4_op_Implicit_m3519692110(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		serializableUnityARMatrix4x4_t78255337 * L_6 = ___rValue0;
		NullCheck(L_6);
		SerializableVector4_t1862640084 * L_7 = L_6->get_column2_2();
		Vector4_t3319028937  L_8 = SerializableVector4_op_Implicit_m3519692110(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		serializableUnityARMatrix4x4_t78255337 * L_9 = ___rValue0;
		NullCheck(L_9);
		SerializableVector4_t1862640084 * L_10 = L_9->get_column3_3();
		Vector4_t3319028937  L_11 = SerializableVector4_op_Implicit_m3519692110(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		Matrix4x4_t1817901843  L_12;
		memset(&L_12, 0, sizeof(L_12));
		Matrix4x4__ctor_m53065545((&L_12), L_2, L_5, L_8, L_11, /*hidden argument*/NULL);
		return L_12;
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
// System.Void Utils.serializableUnityARPlaneAnchor::.ctor(Utils.serializableUnityARMatrix4x4,Utils.SerializableVector4,Utils.SerializableVector4,UnityEngine.XR.iOS.ARPlaneAnchorAlignment,System.Byte[])
extern "C"  void serializableUnityARPlaneAnchor__ctor_m182203902 (serializableUnityARPlaneAnchor_t1446774435 * __this, serializableUnityARMatrix4x4_t78255337 * ___wt0, SerializableVector4_t1862640084 * ___ctr1, SerializableVector4_t1862640084 * ___ext2, int64_t ___apaa3, ByteU5BU5D_t4116647657* ___idstr4, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		serializableUnityARMatrix4x4_t78255337 * L_0 = ___wt0;
		__this->set_worldTransform_0(L_0);
		SerializableVector4_t1862640084 * L_1 = ___ctr1;
		__this->set_center_1(L_1);
		SerializableVector4_t1862640084 * L_2 = ___ext2;
		__this->set_extent_2(L_2);
		int64_t L_3 = ___apaa3;
		__this->set_planeAlignment_3(L_3);
		ByteU5BU5D_t4116647657* L_4 = ___idstr4;
		__this->set_identifierStr_4(L_4);
		return;
	}
}
// Utils.serializableUnityARPlaneAnchor Utils.serializableUnityARPlaneAnchor::op_Implicit(UnityEngine.XR.iOS.ARPlaneAnchor)
extern "C"  serializableUnityARPlaneAnchor_t1446774435 * serializableUnityARPlaneAnchor_op_Implicit_m57666075 (RuntimeObject * __this /* static, unused */, ARPlaneAnchor_t2049372221  ___rValue0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (serializableUnityARPlaneAnchor_op_Implicit_m57666075_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	serializableUnityARMatrix4x4_t78255337 * V_0 = NULL;
	SerializableVector4_t1862640084 * V_1 = NULL;
	SerializableVector4_t1862640084 * V_2 = NULL;
	ByteU5BU5D_t4116647657* V_3 = NULL;
	{
		Matrix4x4_t1817901843  L_0 = (&___rValue0)->get_transform_1();
		serializableUnityARMatrix4x4_t78255337 * L_1 = serializableUnityARMatrix4x4_op_Implicit_m3556108972(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		Vector3_t3722313464 * L_2 = (&___rValue0)->get_address_of_center_3();
		float L_3 = L_2->get_x_1();
		Vector3_t3722313464 * L_4 = (&___rValue0)->get_address_of_center_3();
		float L_5 = L_4->get_y_2();
		Vector3_t3722313464 * L_6 = (&___rValue0)->get_address_of_center_3();
		float L_7 = L_6->get_z_3();
		SerializableVector4_t1862640084 * L_8 = (SerializableVector4_t1862640084 *)il2cpp_codegen_object_new(SerializableVector4_t1862640084_il2cpp_TypeInfo_var);
		SerializableVector4__ctor_m3231681896(L_8, L_3, L_5, L_7, (1.0f), /*hidden argument*/NULL);
		V_1 = L_8;
		Vector3_t3722313464 * L_9 = (&___rValue0)->get_address_of_extent_4();
		float L_10 = L_9->get_x_1();
		Vector3_t3722313464 * L_11 = (&___rValue0)->get_address_of_extent_4();
		float L_12 = L_11->get_y_2();
		Vector3_t3722313464 * L_13 = (&___rValue0)->get_address_of_extent_4();
		float L_14 = L_13->get_z_3();
		SerializableVector4_t1862640084 * L_15 = (SerializableVector4_t1862640084 *)il2cpp_codegen_object_new(SerializableVector4_t1862640084_il2cpp_TypeInfo_var);
		SerializableVector4__ctor_m3231681896(L_15, L_10, L_12, L_14, (1.0f), /*hidden argument*/NULL);
		V_2 = L_15;
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t1523322056_il2cpp_TypeInfo_var);
		Encoding_t1523322056 * L_16 = Encoding_get_UTF8_m1008486739(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_17 = (&___rValue0)->get_identifier_0();
		NullCheck(L_16);
		ByteU5BU5D_t4116647657* L_18 = VirtFuncInvoker1< ByteU5BU5D_t4116647657*, String_t* >::Invoke(10 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_16, L_17);
		V_3 = L_18;
		serializableUnityARMatrix4x4_t78255337 * L_19 = V_0;
		SerializableVector4_t1862640084 * L_20 = V_1;
		SerializableVector4_t1862640084 * L_21 = V_2;
		int64_t L_22 = (&___rValue0)->get_alignment_2();
		ByteU5BU5D_t4116647657* L_23 = V_3;
		serializableUnityARPlaneAnchor_t1446774435 * L_24 = (serializableUnityARPlaneAnchor_t1446774435 *)il2cpp_codegen_object_new(serializableUnityARPlaneAnchor_t1446774435_il2cpp_TypeInfo_var);
		serializableUnityARPlaneAnchor__ctor_m182203902(L_24, L_19, L_20, L_21, L_22, L_23, /*hidden argument*/NULL);
		return L_24;
	}
}
// UnityEngine.XR.iOS.ARPlaneAnchor Utils.serializableUnityARPlaneAnchor::op_Implicit(Utils.serializableUnityARPlaneAnchor)
extern "C"  ARPlaneAnchor_t2049372221  serializableUnityARPlaneAnchor_op_Implicit_m217596632 (RuntimeObject * __this /* static, unused */, serializableUnityARPlaneAnchor_t1446774435 * ___rValue0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (serializableUnityARPlaneAnchor_op_Implicit_m217596632_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ARPlaneAnchor_t2049372221  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t1523322056_il2cpp_TypeInfo_var);
		Encoding_t1523322056 * L_0 = Encoding_get_UTF8_m1008486739(NULL /*static, unused*/, /*hidden argument*/NULL);
		serializableUnityARPlaneAnchor_t1446774435 * L_1 = ___rValue0;
		NullCheck(L_1);
		ByteU5BU5D_t4116647657* L_2 = L_1->get_identifierStr_4();
		NullCheck(L_0);
		String_t* L_3 = VirtFuncInvoker1< String_t*, ByteU5BU5D_t4116647657* >::Invoke(23 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_0, L_2);
		(&V_0)->set_identifier_0(L_3);
		serializableUnityARPlaneAnchor_t1446774435 * L_4 = ___rValue0;
		NullCheck(L_4);
		SerializableVector4_t1862640084 * L_5 = L_4->get_center_1();
		NullCheck(L_5);
		float L_6 = L_5->get_x_0();
		serializableUnityARPlaneAnchor_t1446774435 * L_7 = ___rValue0;
		NullCheck(L_7);
		SerializableVector4_t1862640084 * L_8 = L_7->get_center_1();
		NullCheck(L_8);
		float L_9 = L_8->get_y_1();
		serializableUnityARPlaneAnchor_t1446774435 * L_10 = ___rValue0;
		NullCheck(L_10);
		SerializableVector4_t1862640084 * L_11 = L_10->get_center_1();
		NullCheck(L_11);
		float L_12 = L_11->get_z_2();
		Vector3_t3722313464  L_13;
		memset(&L_13, 0, sizeof(L_13));
		Vector3__ctor_m3353183577((&L_13), L_6, L_9, L_12, /*hidden argument*/NULL);
		(&V_0)->set_center_3(L_13);
		serializableUnityARPlaneAnchor_t1446774435 * L_14 = ___rValue0;
		NullCheck(L_14);
		SerializableVector4_t1862640084 * L_15 = L_14->get_extent_2();
		NullCheck(L_15);
		float L_16 = L_15->get_x_0();
		serializableUnityARPlaneAnchor_t1446774435 * L_17 = ___rValue0;
		NullCheck(L_17);
		SerializableVector4_t1862640084 * L_18 = L_17->get_extent_2();
		NullCheck(L_18);
		float L_19 = L_18->get_y_1();
		serializableUnityARPlaneAnchor_t1446774435 * L_20 = ___rValue0;
		NullCheck(L_20);
		SerializableVector4_t1862640084 * L_21 = L_20->get_extent_2();
		NullCheck(L_21);
		float L_22 = L_21->get_z_2();
		Vector3_t3722313464  L_23;
		memset(&L_23, 0, sizeof(L_23));
		Vector3__ctor_m3353183577((&L_23), L_16, L_19, L_22, /*hidden argument*/NULL);
		(&V_0)->set_extent_4(L_23);
		serializableUnityARPlaneAnchor_t1446774435 * L_24 = ___rValue0;
		NullCheck(L_24);
		int64_t L_25 = L_24->get_planeAlignment_3();
		(&V_0)->set_alignment_2(L_25);
		serializableUnityARPlaneAnchor_t1446774435 * L_26 = ___rValue0;
		NullCheck(L_26);
		serializableUnityARMatrix4x4_t78255337 * L_27 = L_26->get_worldTransform_0();
		Matrix4x4_t1817901843  L_28 = serializableUnityARMatrix4x4_op_Implicit_m456506418(NULL /*static, unused*/, L_27, /*hidden argument*/NULL);
		(&V_0)->set_transform_1(L_28);
		ARPlaneAnchor_t2049372221  L_29 = V_0;
		return L_29;
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
// System.Void Utils.SerializableVector4::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C"  void SerializableVector4__ctor_m3231681896 (SerializableVector4_t1862640084 * __this, float ___rX0, float ___rY1, float ___rZ2, float ___rW3, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		float L_0 = ___rX0;
		__this->set_x_0(L_0);
		float L_1 = ___rY1;
		__this->set_y_1(L_1);
		float L_2 = ___rZ2;
		__this->set_z_2(L_2);
		float L_3 = ___rW3;
		__this->set_w_3(L_3);
		return;
	}
}
// System.String Utils.SerializableVector4::ToString()
extern "C"  String_t* SerializableVector4_ToString_m70901593 (SerializableVector4_t1862640084 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SerializableVector4_ToString_m70901593_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_t2843939325* L_0 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)4));
		float L_1 = __this->get_x_0();
		float L_2 = L_1;
		RuntimeObject * L_3 = Box(Single_t1397266774_il2cpp_TypeInfo_var, &L_2);
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, L_3);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		ObjectU5BU5D_t2843939325* L_4 = L_0;
		float L_5 = __this->get_y_1();
		float L_6 = L_5;
		RuntimeObject * L_7 = Box(Single_t1397266774_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_7);
		ObjectU5BU5D_t2843939325* L_8 = L_4;
		float L_9 = __this->get_z_2();
		float L_10 = L_9;
		RuntimeObject * L_11 = Box(Single_t1397266774_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_11);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_11);
		ObjectU5BU5D_t2843939325* L_12 = L_8;
		float L_13 = __this->get_w_3();
		float L_14 = L_13;
		RuntimeObject * L_15 = Box(Single_t1397266774_il2cpp_TypeInfo_var, &L_14);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_15);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_15);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_16 = String_Format_m630303134(NULL /*static, unused*/, _stringLiteral1432570861, L_12, /*hidden argument*/NULL);
		return L_16;
	}
}
// UnityEngine.Vector4 Utils.SerializableVector4::op_Implicit(Utils.SerializableVector4)
extern "C"  Vector4_t3319028937  SerializableVector4_op_Implicit_m3519692110 (RuntimeObject * __this /* static, unused */, SerializableVector4_t1862640084 * ___rValue0, const RuntimeMethod* method)
{
	{
		SerializableVector4_t1862640084 * L_0 = ___rValue0;
		NullCheck(L_0);
		float L_1 = L_0->get_x_0();
		SerializableVector4_t1862640084 * L_2 = ___rValue0;
		NullCheck(L_2);
		float L_3 = L_2->get_y_1();
		SerializableVector4_t1862640084 * L_4 = ___rValue0;
		NullCheck(L_4);
		float L_5 = L_4->get_z_2();
		SerializableVector4_t1862640084 * L_6 = ___rValue0;
		NullCheck(L_6);
		float L_7 = L_6->get_w_3();
		Vector4_t3319028937  L_8;
		memset(&L_8, 0, sizeof(L_8));
		Vector4__ctor_m2498754347((&L_8), L_1, L_3, L_5, L_7, /*hidden argument*/NULL);
		return L_8;
	}
}
// Utils.SerializableVector4 Utils.SerializableVector4::op_Implicit(UnityEngine.Vector4)
extern "C"  SerializableVector4_t1862640084 * SerializableVector4_op_Implicit_m14360340 (RuntimeObject * __this /* static, unused */, Vector4_t3319028937  ___rValue0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SerializableVector4_op_Implicit_m14360340_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = (&___rValue0)->get_x_1();
		float L_1 = (&___rValue0)->get_y_2();
		float L_2 = (&___rValue0)->get_z_3();
		float L_3 = (&___rValue0)->get_w_4();
		SerializableVector4_t1862640084 * L_4 = (SerializableVector4_t1862640084 *)il2cpp_codegen_object_new(SerializableVector4_t1862640084_il2cpp_TypeInfo_var);
		SerializableVector4__ctor_m3231681896(L_4, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
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
// System.Void VectorEntity::.ctor()
extern "C"  void VectorEntity__ctor_m2699539899 (VectorEntity_t1410759464 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
