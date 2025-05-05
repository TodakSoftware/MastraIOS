extern "C" void RegisterStaticallyLinkedModulesGranular()
{
	void RegisterModule_SharedInternals();
	RegisterModule_SharedInternals();

	void RegisterModule_Core();
	RegisterModule_Core();

	void RegisterModule_AI();
	RegisterModule_AI();

	void RegisterModule_AndroidJNI();
	RegisterModule_AndroidJNI();

	void RegisterModule_Animation();
	RegisterModule_Animation();

	void RegisterModule_HotReload();
	RegisterModule_HotReload();

	void RegisterModule_AssetBundle();
	RegisterModule_AssetBundle();

	void RegisterModule_Audio();
	RegisterModule_Audio();

	void RegisterModule_Director();
	RegisterModule_Director();

	void RegisterModule_GameCenter();
	RegisterModule_GameCenter();

	void RegisterModule_GraphicsStateCollectionSerializer();
	RegisterModule_GraphicsStateCollectionSerializer();

	void RegisterModule_HierarchyCore();
	RegisterModule_HierarchyCore();

	void RegisterModule_ImageConversion();
	RegisterModule_ImageConversion();

	void RegisterModule_Input();
	RegisterModule_Input();

	void RegisterModule_InputLegacy();
	RegisterModule_InputLegacy();

	void RegisterModule_InputForUI();
	RegisterModule_InputForUI();

	void RegisterModule_JSONSerialize();
	RegisterModule_JSONSerialize();

	void RegisterModule_CrashReporting();
	RegisterModule_CrashReporting();

	void RegisterModule_IMGUI();
	RegisterModule_IMGUI();

	void RegisterModule_ParticleSystem();
	RegisterModule_ParticleSystem();

	void RegisterModule_PerformanceReporting();
	RegisterModule_PerformanceReporting();

	void RegisterModule_Physics();
	RegisterModule_Physics();

	void RegisterModule_Physics2D();
	RegisterModule_Physics2D();

	void RegisterModule_Properties();
	RegisterModule_Properties();

	void RegisterModule_RuntimeInitializeOnLoadManagerInitializer();
	RegisterModule_RuntimeInitializeOnLoadManagerInitializer();

	void RegisterModule_ScreenCapture();
	RegisterModule_ScreenCapture();

	void RegisterModule_Subsystems();
	RegisterModule_Subsystems();

	void RegisterModule_TLS();
	RegisterModule_TLS();

	void RegisterModule_Terrain();
	RegisterModule_Terrain();

	void RegisterModule_TextRendering();
	RegisterModule_TextRendering();

	void RegisterModule_TextCoreFontEngine();
	RegisterModule_TextCoreFontEngine();

	void RegisterModule_TextCoreTextEngine();
	RegisterModule_TextCoreTextEngine();

	void RegisterModule_UI();
	RegisterModule_UI();

	void RegisterModule_UIElements();
	RegisterModule_UIElements();

	void RegisterModule_Umbra();
	RegisterModule_Umbra();

	void RegisterModule_UnityAnalyticsCommon();
	RegisterModule_UnityAnalyticsCommon();

	void RegisterModule_UnityConnect();
	RegisterModule_UnityConnect();

	void RegisterModule_UnityWebRequest();
	RegisterModule_UnityWebRequest();

	void RegisterModule_UnityAnalytics();
	RegisterModule_UnityAnalytics();

	void RegisterModule_UnityWebRequestAssetBundle();
	RegisterModule_UnityWebRequestAssetBundle();

	void RegisterModule_UnityWebRequestTexture();
	RegisterModule_UnityWebRequestTexture();

	void RegisterModule_VFX();
	RegisterModule_VFX();

	void RegisterModule_VR();
	RegisterModule_VR();

	void RegisterModule_Video();
	RegisterModule_Video();

	void RegisterModule_XR();
	RegisterModule_XR();

}

template <typename T> void RegisterUnityClass(const char*);
template <typename T> void RegisterStrippedType(int, const char*, const char*);

void InvokeRegisterStaticallyLinkedModuleClasses()
{
	// Do nothing (we're in stripping mode)
}

class NavMeshAgent; template <> void RegisterUnityClass<NavMeshAgent>(const char*);
class NavMeshData; template <> void RegisterUnityClass<NavMeshData>(const char*);
class NavMeshObstacle; template <> void RegisterUnityClass<NavMeshObstacle>(const char*);
class NavMeshProjectSettings; template <> void RegisterUnityClass<NavMeshProjectSettings>(const char*);
class NavMeshSettings; template <> void RegisterUnityClass<NavMeshSettings>(const char*);
class Animation; template <> void RegisterUnityClass<Animation>(const char*);
class AnimationClip; template <> void RegisterUnityClass<AnimationClip>(const char*);
class Animator; template <> void RegisterUnityClass<Animator>(const char*);
class AnimatorController; template <> void RegisterUnityClass<AnimatorController>(const char*);
class AnimatorOverrideController; template <> void RegisterUnityClass<AnimatorOverrideController>(const char*);
class Avatar; template <> void RegisterUnityClass<Avatar>(const char*);
class AvatarMask; template <> void RegisterUnityClass<AvatarMask>(const char*);
class Behaviour; template <> void RegisterUnityClass<Behaviour>(const char*);
class IConstraint; template <> void RegisterUnityClass<IConstraint>(const char*);
class Motion; template <> void RegisterUnityClass<Motion>(const char*);
class ParentConstraint; template <> void RegisterUnityClass<ParentConstraint>(const char*);
class RuntimeAnimatorController; template <> void RegisterUnityClass<RuntimeAnimatorController>(const char*);
class AssetBundle; template <> void RegisterUnityClass<AssetBundle>(const char*);
class AudioBehaviour; template <> void RegisterUnityClass<AudioBehaviour>(const char*);
class AudioClip; template <> void RegisterUnityClass<AudioClip>(const char*);
class AudioListener; template <> void RegisterUnityClass<AudioListener>(const char*);
class AudioManager; template <> void RegisterUnityClass<AudioManager>(const char*);
class AudioMixer; template <> void RegisterUnityClass<AudioMixer>(const char*);
class AudioMixerGroup; template <> void RegisterUnityClass<AudioMixerGroup>(const char*);
class AudioMixerSnapshot; template <> void RegisterUnityClass<AudioMixerSnapshot>(const char*);
class AudioResource; template <> void RegisterUnityClass<AudioResource>(const char*);
class AudioSource; template <> void RegisterUnityClass<AudioSource>(const char*);
class SampleClip; template <> void RegisterUnityClass<SampleClip>(const char*);
class BuildSettings; template <> void RegisterUnityClass<BuildSettings>(const char*);
class Camera; template <> void RegisterUnityClass<Camera>(const char*);
namespace Unity { class Component; } template <> void RegisterUnityClass<Unity::Component>(const char*);
class ComputeShader; template <> void RegisterUnityClass<ComputeShader>(const char*);
class Cubemap; template <> void RegisterUnityClass<Cubemap>(const char*);
class CubemapArray; template <> void RegisterUnityClass<CubemapArray>(const char*);
class DelayedCallManager; template <> void RegisterUnityClass<DelayedCallManager>(const char*);
class EditorExtension; template <> void RegisterUnityClass<EditorExtension>(const char*);
class Flare; template <> void RegisterUnityClass<Flare>(const char*);
class GameManager; template <> void RegisterUnityClass<GameManager>(const char*);
class GameObject; template <> void RegisterUnityClass<GameObject>(const char*);
class GlobalGameManager; template <> void RegisterUnityClass<GlobalGameManager>(const char*);
class GraphicsSettings; template <> void RegisterUnityClass<GraphicsSettings>(const char*);
class InputManager; template <> void RegisterUnityClass<InputManager>(const char*);
class LODGroup; template <> void RegisterUnityClass<LODGroup>(const char*);
class LevelGameManager; template <> void RegisterUnityClass<LevelGameManager>(const char*);
class Light; template <> void RegisterUnityClass<Light>(const char*);
class LightProbeProxyVolume; template <> void RegisterUnityClass<LightProbeProxyVolume>(const char*);
class LightProbes; template <> void RegisterUnityClass<LightProbes>(const char*);
class LightingSettings; template <> void RegisterUnityClass<LightingSettings>(const char*);
class LightmapSettings; template <> void RegisterUnityClass<LightmapSettings>(const char*);
class LineRenderer; template <> void RegisterUnityClass<LineRenderer>(const char*);
class LowerResBlitTexture; template <> void RegisterUnityClass<LowerResBlitTexture>(const char*);
class Material; template <> void RegisterUnityClass<Material>(const char*);
class Mesh; template <> void RegisterUnityClass<Mesh>(const char*);
class MeshFilter; template <> void RegisterUnityClass<MeshFilter>(const char*);
class MeshRenderer; template <> void RegisterUnityClass<MeshRenderer>(const char*);
class MonoBehaviour; template <> void RegisterUnityClass<MonoBehaviour>(const char*);
class MonoManager; template <> void RegisterUnityClass<MonoManager>(const char*);
class MonoScript; template <> void RegisterUnityClass<MonoScript>(const char*);
class NamedObject; template <> void RegisterUnityClass<NamedObject>(const char*);
class Object; template <> void RegisterUnityClass<Object>(const char*);
class PlayerSettings; template <> void RegisterUnityClass<PlayerSettings>(const char*);
class PreloadData; template <> void RegisterUnityClass<PreloadData>(const char*);
class Projector; template <> void RegisterUnityClass<Projector>(const char*);
class QualitySettings; template <> void RegisterUnityClass<QualitySettings>(const char*);
class RayTracingShader; template <> void RegisterUnityClass<RayTracingShader>(const char*);
namespace UI { class RectTransform; } template <> void RegisterUnityClass<UI::RectTransform>(const char*);
class ReflectionProbe; template <> void RegisterUnityClass<ReflectionProbe>(const char*);
class RenderSettings; template <> void RegisterUnityClass<RenderSettings>(const char*);
class RenderTexture; template <> void RegisterUnityClass<RenderTexture>(const char*);
class Renderer; template <> void RegisterUnityClass<Renderer>(const char*);
class ResourceManager; template <> void RegisterUnityClass<ResourceManager>(const char*);
class RuntimeInitializeOnLoadManager; template <> void RegisterUnityClass<RuntimeInitializeOnLoadManager>(const char*);
class Shader; template <> void RegisterUnityClass<Shader>(const char*);
class ShaderNameRegistry; template <> void RegisterUnityClass<ShaderNameRegistry>(const char*);
class SkinnedMeshRenderer; template <> void RegisterUnityClass<SkinnedMeshRenderer>(const char*);
class Skybox; template <> void RegisterUnityClass<Skybox>(const char*);
class SortingGroup; template <> void RegisterUnityClass<SortingGroup>(const char*);
class Sprite; template <> void RegisterUnityClass<Sprite>(const char*);
class SpriteAtlas; template <> void RegisterUnityClass<SpriteAtlas>(const char*);
class SpriteRenderer; template <> void RegisterUnityClass<SpriteRenderer>(const char*);
class TagManager; template <> void RegisterUnityClass<TagManager>(const char*);
class TextAsset; template <> void RegisterUnityClass<TextAsset>(const char*);
class Texture; template <> void RegisterUnityClass<Texture>(const char*);
class Texture2D; template <> void RegisterUnityClass<Texture2D>(const char*);
class Texture2DArray; template <> void RegisterUnityClass<Texture2DArray>(const char*);
class Texture3D; template <> void RegisterUnityClass<Texture3D>(const char*);
class TimeManager; template <> void RegisterUnityClass<TimeManager>(const char*);
class TrailRenderer; template <> void RegisterUnityClass<TrailRenderer>(const char*);
class Transform; template <> void RegisterUnityClass<Transform>(const char*);
class PlayableDirector; template <> void RegisterUnityClass<PlayableDirector>(const char*);
class ParticleSystem; template <> void RegisterUnityClass<ParticleSystem>(const char*);
class ParticleSystemRenderer; template <> void RegisterUnityClass<ParticleSystemRenderer>(const char*);
class BoxCollider; template <> void RegisterUnityClass<BoxCollider>(const char*);
class CapsuleCollider; template <> void RegisterUnityClass<CapsuleCollider>(const char*);
class CharacterController; template <> void RegisterUnityClass<CharacterController>(const char*);
class Collider; template <> void RegisterUnityClass<Collider>(const char*);
namespace Unity { class FixedJoint; } template <> void RegisterUnityClass<Unity::FixedJoint>(const char*);
namespace Unity { class Joint; } template <> void RegisterUnityClass<Unity::Joint>(const char*);
class MeshCollider; template <> void RegisterUnityClass<MeshCollider>(const char*);
class PhysicsManager; template <> void RegisterUnityClass<PhysicsManager>(const char*);
class PhysicsMaterial; template <> void RegisterUnityClass<PhysicsMaterial>(const char*);
class Rigidbody; template <> void RegisterUnityClass<Rigidbody>(const char*);
class SphereCollider; template <> void RegisterUnityClass<SphereCollider>(const char*);
class AnchoredJoint2D; template <> void RegisterUnityClass<AnchoredJoint2D>(const char*);
class BoxCollider2D; template <> void RegisterUnityClass<BoxCollider2D>(const char*);
class CapsuleCollider2D; template <> void RegisterUnityClass<CapsuleCollider2D>(const char*);
class CircleCollider2D; template <> void RegisterUnityClass<CircleCollider2D>(const char*);
class Collider2D; template <> void RegisterUnityClass<Collider2D>(const char*);
class CompositeCollider2D; template <> void RegisterUnityClass<CompositeCollider2D>(const char*);
class FixedJoint2D; template <> void RegisterUnityClass<FixedJoint2D>(const char*);
class Joint2D; template <> void RegisterUnityClass<Joint2D>(const char*);
class Physics2DSettings; template <> void RegisterUnityClass<Physics2DSettings>(const char*);
class PolygonCollider2D; template <> void RegisterUnityClass<PolygonCollider2D>(const char*);
class Rigidbody2D; template <> void RegisterUnityClass<Rigidbody2D>(const char*);
class Terrain; template <> void RegisterUnityClass<Terrain>(const char*);
class TerrainData; template <> void RegisterUnityClass<TerrainData>(const char*);
namespace TextRendering { class Font; } template <> void RegisterUnityClass<TextRendering::Font>(const char*);
namespace TextRenderingPrivate { class TextMesh; } template <> void RegisterUnityClass<TextRenderingPrivate::TextMesh>(const char*);
namespace UI { class Canvas; } template <> void RegisterUnityClass<UI::Canvas>(const char*);
namespace UI { class CanvasGroup; } template <> void RegisterUnityClass<UI::CanvasGroup>(const char*);
namespace UI { class CanvasRenderer; } template <> void RegisterUnityClass<UI::CanvasRenderer>(const char*);
class UIRenderer; template <> void RegisterUnityClass<UIRenderer>(const char*);
class OcclusionCullingData; template <> void RegisterUnityClass<OcclusionCullingData>(const char*);
class OcclusionCullingSettings; template <> void RegisterUnityClass<OcclusionCullingSettings>(const char*);
class UnityConnectSettings; template <> void RegisterUnityClass<UnityConnectSettings>(const char*);
class VFXManager; template <> void RegisterUnityClass<VFXManager>(const char*);
class VisualEffect; template <> void RegisterUnityClass<VisualEffect>(const char*);
class VisualEffectAsset; template <> void RegisterUnityClass<VisualEffectAsset>(const char*);
class VisualEffectObject; template <> void RegisterUnityClass<VisualEffectObject>(const char*);
class VideoClip; template <> void RegisterUnityClass<VideoClip>(const char*);
class VideoPlayer; template <> void RegisterUnityClass<VideoPlayer>(const char*);

void RegisterAllClasses()
{
void RegisterBuiltinTypes();
RegisterBuiltinTypes();
	//Total: 131 non stripped classes
	//0. NavMeshAgent
	RegisterUnityClass<NavMeshAgent>("AI");
	//1. NavMeshData
	RegisterUnityClass<NavMeshData>("AI");
	//2. NavMeshObstacle
	RegisterUnityClass<NavMeshObstacle>("AI");
	//3. NavMeshProjectSettings
	RegisterUnityClass<NavMeshProjectSettings>("AI");
	//4. NavMeshSettings
	RegisterUnityClass<NavMeshSettings>("AI");
	//5. Animation
	RegisterUnityClass<Animation>("Animation");
	//6. AnimationClip
	RegisterUnityClass<AnimationClip>("Animation");
	//7. Animator
	RegisterUnityClass<Animator>("Animation");
	//8. AnimatorController
	RegisterUnityClass<AnimatorController>("Animation");
	//9. AnimatorOverrideController
	RegisterUnityClass<AnimatorOverrideController>("Animation");
	//10. Avatar
	RegisterUnityClass<Avatar>("Animation");
	//11. AvatarMask
	RegisterUnityClass<AvatarMask>("Animation");
	//12. Behaviour
	RegisterUnityClass<Behaviour>("Core");
	//13. IConstraint
	RegisterUnityClass<IConstraint>("Animation");
	//14. Motion
	RegisterUnityClass<Motion>("Animation");
	//15. ParentConstraint
	RegisterUnityClass<ParentConstraint>("Animation");
	//16. RuntimeAnimatorController
	RegisterUnityClass<RuntimeAnimatorController>("Animation");
	//17. AssetBundle
	RegisterUnityClass<AssetBundle>("AssetBundle");
	//18. AudioBehaviour
	RegisterUnityClass<AudioBehaviour>("Audio");
	//19. AudioClip
	RegisterUnityClass<AudioClip>("Audio");
	//20. AudioListener
	RegisterUnityClass<AudioListener>("Audio");
	//21. AudioManager
	RegisterUnityClass<AudioManager>("Audio");
	//22. AudioMixer
	RegisterUnityClass<AudioMixer>("Audio");
	//23. AudioMixerGroup
	RegisterUnityClass<AudioMixerGroup>("Audio");
	//24. AudioMixerSnapshot
	RegisterUnityClass<AudioMixerSnapshot>("Audio");
	//25. AudioResource
	RegisterUnityClass<AudioResource>("Audio");
	//26. AudioSource
	RegisterUnityClass<AudioSource>("Audio");
	//27. SampleClip
	RegisterUnityClass<SampleClip>("Audio");
	//28. BuildSettings
	RegisterUnityClass<BuildSettings>("Core");
	//29. Camera
	RegisterUnityClass<Camera>("Core");
	//30. Component
	RegisterUnityClass<Unity::Component>("Core");
	//31. ComputeShader
	RegisterUnityClass<ComputeShader>("Core");
	//32. Cubemap
	RegisterUnityClass<Cubemap>("Core");
	//33. CubemapArray
	RegisterUnityClass<CubemapArray>("Core");
	//34. DelayedCallManager
	RegisterUnityClass<DelayedCallManager>("Core");
	//35. EditorExtension
	RegisterUnityClass<EditorExtension>("Core");
	//36. Flare
	RegisterUnityClass<Flare>("Core");
	//37. GameManager
	RegisterUnityClass<GameManager>("Core");
	//38. GameObject
	RegisterUnityClass<GameObject>("Core");
	//39. GlobalGameManager
	RegisterUnityClass<GlobalGameManager>("Core");
	//40. GraphicsSettings
	RegisterUnityClass<GraphicsSettings>("Core");
	//41. InputManager
	RegisterUnityClass<InputManager>("Core");
	//42. LODGroup
	RegisterUnityClass<LODGroup>("Core");
	//43. LevelGameManager
	RegisterUnityClass<LevelGameManager>("Core");
	//44. Light
	RegisterUnityClass<Light>("Core");
	//45. LightProbeProxyVolume
	RegisterUnityClass<LightProbeProxyVolume>("Core");
	//46. LightProbes
	RegisterUnityClass<LightProbes>("Core");
	//47. LightingSettings
	RegisterUnityClass<LightingSettings>("Core");
	//48. LightmapSettings
	RegisterUnityClass<LightmapSettings>("Core");
	//49. LineRenderer
	RegisterUnityClass<LineRenderer>("Core");
	//50. LowerResBlitTexture
	RegisterUnityClass<LowerResBlitTexture>("Core");
	//51. Material
	RegisterUnityClass<Material>("Core");
	//52. Mesh
	RegisterUnityClass<Mesh>("Core");
	//53. MeshFilter
	RegisterUnityClass<MeshFilter>("Core");
	//54. MeshRenderer
	RegisterUnityClass<MeshRenderer>("Core");
	//55. MonoBehaviour
	RegisterUnityClass<MonoBehaviour>("Core");
	//56. MonoManager
	RegisterUnityClass<MonoManager>("Core");
	//57. MonoScript
	RegisterUnityClass<MonoScript>("Core");
	//58. NamedObject
	RegisterUnityClass<NamedObject>("Core");
	//59. Object
	//Skipping Object
	//60. PlayerSettings
	RegisterUnityClass<PlayerSettings>("Core");
	//61. PreloadData
	RegisterUnityClass<PreloadData>("Core");
	//62. Projector
	RegisterUnityClass<Projector>("Core");
	//63. QualitySettings
	RegisterUnityClass<QualitySettings>("Core");
	//64. RayTracingShader
	RegisterUnityClass<RayTracingShader>("Core");
	//65. RectTransform
	RegisterUnityClass<UI::RectTransform>("Core");
	//66. ReflectionProbe
	RegisterUnityClass<ReflectionProbe>("Core");
	//67. RenderSettings
	RegisterUnityClass<RenderSettings>("Core");
	//68. RenderTexture
	RegisterUnityClass<RenderTexture>("Core");
	//69. Renderer
	RegisterUnityClass<Renderer>("Core");
	//70. ResourceManager
	RegisterUnityClass<ResourceManager>("Core");
	//71. RuntimeInitializeOnLoadManager
	RegisterUnityClass<RuntimeInitializeOnLoadManager>("Core");
	//72. Shader
	RegisterUnityClass<Shader>("Core");
	//73. ShaderNameRegistry
	RegisterUnityClass<ShaderNameRegistry>("Core");
	//74. SkinnedMeshRenderer
	RegisterUnityClass<SkinnedMeshRenderer>("Core");
	//75. Skybox
	RegisterUnityClass<Skybox>("Core");
	//76. SortingGroup
	RegisterUnityClass<SortingGroup>("Core");
	//77. Sprite
	RegisterUnityClass<Sprite>("Core");
	//78. SpriteAtlas
	RegisterUnityClass<SpriteAtlas>("Core");
	//79. SpriteRenderer
	RegisterUnityClass<SpriteRenderer>("Core");
	//80. TagManager
	RegisterUnityClass<TagManager>("Core");
	//81. TextAsset
	RegisterUnityClass<TextAsset>("Core");
	//82. Texture
	RegisterUnityClass<Texture>("Core");
	//83. Texture2D
	RegisterUnityClass<Texture2D>("Core");
	//84. Texture2DArray
	RegisterUnityClass<Texture2DArray>("Core");
	//85. Texture3D
	RegisterUnityClass<Texture3D>("Core");
	//86. TimeManager
	RegisterUnityClass<TimeManager>("Core");
	//87. TrailRenderer
	RegisterUnityClass<TrailRenderer>("Core");
	//88. Transform
	RegisterUnityClass<Transform>("Core");
	//89. PlayableDirector
	RegisterUnityClass<PlayableDirector>("Director");
	//90. ParticleSystem
	RegisterUnityClass<ParticleSystem>("ParticleSystem");
	//91. ParticleSystemRenderer
	RegisterUnityClass<ParticleSystemRenderer>("ParticleSystem");
	//92. BoxCollider
	RegisterUnityClass<BoxCollider>("Physics");
	//93. CapsuleCollider
	RegisterUnityClass<CapsuleCollider>("Physics");
	//94. CharacterController
	RegisterUnityClass<CharacterController>("Physics");
	//95. Collider
	RegisterUnityClass<Collider>("Physics");
	//96. FixedJoint
	RegisterUnityClass<Unity::FixedJoint>("Physics");
	//97. Joint
	RegisterUnityClass<Unity::Joint>("Physics");
	//98. MeshCollider
	RegisterUnityClass<MeshCollider>("Physics");
	//99. PhysicsManager
	RegisterUnityClass<PhysicsManager>("Physics");
	//100. PhysicsMaterial
	RegisterUnityClass<PhysicsMaterial>("Physics");
	//101. Rigidbody
	RegisterUnityClass<Rigidbody>("Physics");
	//102. SphereCollider
	RegisterUnityClass<SphereCollider>("Physics");
	//103. AnchoredJoint2D
	RegisterUnityClass<AnchoredJoint2D>("Physics2D");
	//104. BoxCollider2D
	RegisterUnityClass<BoxCollider2D>("Physics2D");
	//105. CapsuleCollider2D
	RegisterUnityClass<CapsuleCollider2D>("Physics2D");
	//106. CircleCollider2D
	RegisterUnityClass<CircleCollider2D>("Physics2D");
	//107. Collider2D
	RegisterUnityClass<Collider2D>("Physics2D");
	//108. CompositeCollider2D
	RegisterUnityClass<CompositeCollider2D>("Physics2D");
	//109. FixedJoint2D
	RegisterUnityClass<FixedJoint2D>("Physics2D");
	//110. Joint2D
	RegisterUnityClass<Joint2D>("Physics2D");
	//111. Physics2DSettings
	RegisterUnityClass<Physics2DSettings>("Physics2D");
	//112. PolygonCollider2D
	RegisterUnityClass<PolygonCollider2D>("Physics2D");
	//113. Rigidbody2D
	RegisterUnityClass<Rigidbody2D>("Physics2D");
	//114. Terrain
	RegisterUnityClass<Terrain>("Terrain");
	//115. TerrainData
	RegisterUnityClass<TerrainData>("Terrain");
	//116. Font
	RegisterUnityClass<TextRendering::Font>("TextRendering");
	//117. TextMesh
	RegisterUnityClass<TextRenderingPrivate::TextMesh>("TextRendering");
	//118. Canvas
	RegisterUnityClass<UI::Canvas>("UI");
	//119. CanvasGroup
	RegisterUnityClass<UI::CanvasGroup>("UI");
	//120. CanvasRenderer
	RegisterUnityClass<UI::CanvasRenderer>("UI");
	//121. UIRenderer
	RegisterUnityClass<UIRenderer>("UIElements");
	//122. OcclusionCullingData
	RegisterUnityClass<OcclusionCullingData>("Umbra");
	//123. OcclusionCullingSettings
	RegisterUnityClass<OcclusionCullingSettings>("Umbra");
	//124. UnityConnectSettings
	RegisterUnityClass<UnityConnectSettings>("UnityConnect");
	//125. VFXManager
	RegisterUnityClass<VFXManager>("VFX");
	//126. VisualEffect
	RegisterUnityClass<VisualEffect>("VFX");
	//127. VisualEffectAsset
	RegisterUnityClass<VisualEffectAsset>("VFX");
	//128. VisualEffectObject
	RegisterUnityClass<VisualEffectObject>("VFX");
	//129. VideoClip
	RegisterUnityClass<VideoClip>("Video");
	//130. VideoPlayer
	RegisterUnityClass<VideoPlayer>("Video");

}
