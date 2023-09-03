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
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// System.Action`1<TMPro.TMP_TextInfo>
struct Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1;
// System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>
struct Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180;
// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset>
struct Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C;
// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset>
struct Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Material>
struct IEnumerable_1_tB8C86BD783ADA156CF66B9AF8F1FB3B64D57CE5C;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<UnityEngine.Material>
struct List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>[]
struct Action_1U5BU5D_tB846E6FE2326CCD34124D1E5D70117C9D33DEE76;
// TMPro.TMP_TextProcessingStack`1<System.Int32>[]
struct TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2;
// UnityEngine.AudioClip[]
struct AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.Color32[]
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
// System.Decimal[]
struct DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615;
// TMPro.FontWeight[]
struct FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// TMPro.HighlightState[]
struct HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622;
// TMPro.HorizontalAlignmentOptions[]
struct HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658;
// UnityEngine.InputSystem.InputBinding[]
struct InputBindingU5BU5D_t7E47E87B9CAE12B6F6A0659008B425C58D84BB57;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
// TMPro.MaterialReference[]
struct MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.Renderer[]
struct RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A;
// TMPro.RichTextTagAttribute[]
struct RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// TMPro.TMP_CharacterInfo[]
struct TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99;
// TMPro.TMP_ColorGradient[]
struct TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A;
// UnityEngine.Transform[]
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// TMPro.WordWrapState[]
struct WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9;
// TMPro.TMP_Text/UnicodeChar[]
struct UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883;
// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// UnityEngine.BoxCollider
struct BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.CharacterController
struct CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// Dialog
struct Dialog_t1A3474C8E604C61E022BDF82747C68A6C1E11972;
// DissolveExample.DissolveChilds
struct DissolveChilds_tC16822F79C07B08A6B7D228996B7C0401DC4A43B;
// DissolveExample.DissolveOffest
struct DissolveOffest_t58BE2EF3E07A9135019B79095490CEF133FBE2A1;
// DragRace
struct DragRace_tA94C72E0C0B97E94EF6299F951A0CABB84B5540D;
// EnemyLaserPool
struct EnemyLaserPool_tC3240DD04A54AEEC93E7726C11279D724093A2A6;
// ExplosionSound
struct ExplosionSound_tC439A81B758F51D2E359F70467555D360A378C31;
// FirstEnemyWaves
struct FirstEnemyWaves_tE6ACB0E7BDFB9A613D5BE71C47A36DC1BD18194C;
// DissolveExample.Follow
struct Follow_tE6475B5CD0C62D440F04CD07886CADE8556E5BEB;
// GameEvents
struct GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// GameOver
struct GameOver_tC0D72A03377DA58EE60B10DE7838DBDC0A75798D;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// TMPro.ITextPreprocessor
struct ITextPreprocessor_tDBB49C8B68D7B80E8D233B9D9666C43981EFAAB9;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// UnityEngine.InputSystem.InputAction
struct InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD;
// UnityEngine.InputSystem.InputActionMap
struct InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09;
// UnityEngine.InputSystem.InputActionReference
struct InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1;
// UnityEngine.UI.LayoutElement
struct LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// MotorcycleGun
struct MotorcycleGun_t85CAF3DA6871B6EE5AD5F24F587E7719CF169A1F;
// MotorcycleTakeoff
struct MotorcycleTakeoff_tAC47DC8F5A468CF6B428AB65A25CD2FEC94BBE32;
// MoveMotercycle
struct MoveMotercycle_t74DD318610089E92DB3704A7CD3807583741019C;
// MoveRoad
struct MoveRoad_t74517ABB7841065BF051268E60421CE6BF92B857;
// MoveTitle
struct MoveTitle_t68969922F613C9E241AF79026327034029E17EAD;
// MoveTutorial
struct MoveTutorial_t3CFCE84409CA3525A54DA9F9C20D336FA6DB5CC4;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// OculusMenu
struct OculusMenu_t92A4173A3172F5126A52293139863A0485C88FFE;
// UnityEngine.ParticleSystem
struct ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1;
// PauseMenu
struct PauseMenu_t36539DEACE8377BD498A235C80769301799E1985;
// PickupTruckMove
struct PickupTruckMove_t192C398DB3DB07F42AD05CCBFD5595E58ED446EA;
// PickupTruckShockwave
struct PickupTruckShockwave_tDD1BEEB515EEF99045636F815F6E0A7D1C203505;
// PlayerHealth
struct PlayerHealth_tE7421738BA48E6A6C90760303B818641DDFAE263;
// PlayerMoveTutorial
struct PlayerMoveTutorial_tEC7F7151F284331252160E45E31ACE5300DD81B8;
// QuitGame
struct QuitGame_t9B04082D189C45AA569B5B3A60EB86A52CE0EADD;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// Restart
struct Restart_t123AB8241FB07FFA868B2C6C56FDA2638364FF4A;
// DissolveExample.Rotator
struct Rotator_tE132C1593185E5BED33BA041401344E57D5F4D6D;
// DissolveExample.RotatorDissolveDir
struct RotatorDissolveDir_t012E005A8E17EFFFAEA418A5D7271205E6860066;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// SecondEnemyWave
struct SecondEnemyWave_tB3A59368AF2A748087DA422C26ED304D3C276E5A;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// ShakeObject
struct ShakeObject_t08A5B892F3093E888A2496382BA495104AB2F04A;
// Shockwave
struct Shockwave_tC2C18694478C183122A90581C50910096885443B;
// ShootRicket
struct ShootRicket_tEB742549214BCF01523A0ECC274C3EAC141234FE;
// UnityEngine.UI.Slider
struct Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F;
// SpawnConstruction
struct SpawnConstruction_t86BC35D0E205283696846C4497F7FFD23CCA6206;
// SpawnTraffic
struct SpawnTraffic_tA357F58BD23DB5299CEBA8931A293F803C153C84;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// StartGame
struct StartGame_t90AD9E5EF32F94D01D593C5340B2CCAD86A98E07;
// System.String
struct String_t;
// TMPro.TMP_Character
struct TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35;
// TMPro.TMP_ColorGradient
struct TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB;
// TMPro.TMP_FontAsset
struct TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160;
// TMPro.TMP_SpriteAnimator
struct TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4;
// TMPro.TMP_SpriteAsset
struct TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39;
// TMPro.TMP_Style
struct TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C;
// TMPro.TMP_StyleSheet
struct TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859;
// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9;
// TMPro.TMP_TextElement
struct TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5;
// TMPro.TMP_TextInfo
struct TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D;
// TakeDownBoss
struct TakeDownBoss_tADD32F2E240D31F8ED81489EF0B78769AA5D4B6B;
// TankBullet
struct TankBullet_t5BB5DC60FCD23BF60489A4772CC4678400F0F7AA;
// TankEnemy
struct TankEnemy_t2BA2128FB51203FB3CB6466ACB4E0B0EB4ECDF25;
// TankRocket
struct TankRocket_t57A087C214C0E6EF25EFA51BFA52F7A50F34780D;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// ThirdEnemyWave
struct ThirdEnemyWave_tD04A8825C0EC6C1883168EE7A0C72DC93A124812;
// TrailerCrash
struct TrailerCrash_t92F5B84A7733A9B5C98E41BD7C9346E3ED732CF1;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// Truck
struct Truck_tC25075F97163DDBB2CD8FED02BFCA45D53F94454;
// TruckEnemy
struct TruckEnemy_t5A18267E64F9717056134EAC0BFEADD9957507A5;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3;
// WeaveThroughContruction
struct WeaveThroughContruction_t5CE2DE6D36EB5B8331783F2F7FD1884B9D8178C2;
// UnityEngine.XR.Interaction.Toolkit.XRBaseController
struct XRBaseController_t44C1BB30A7E1D279DD2508F34D3352B33A9AD60C;
// UnityEngine.XR.Interaction.Toolkit.XRControllerState
struct XRControllerState_tC34C40CB942A51408D8799940A87A6AD87218B50;
// tank
struct tank_t47FB66C52AAA5F596D92FD00F8948CF0A9870D95;
// trailer
struct trailer_tBCF57821A83158F03BE7057729DD3880F544BD69;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// MotorcycleTakeoff/<MoveRoads>d__12
struct U3CMoveRoadsU3Ed__12_t4A3422038C6E22696DD48D96A9A21C36B8154832;
// UnityEngine.UI.Slider/SliderEvent
struct SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555;

IL2CPP_EXTERN_C RuntimeClass* List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CMoveRoadsU3Ed__12_t4A3422038C6E22696DD48D96A9A21C36B8154832_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral092CD1D94124CED41142F34B5287CFB1EF843118;
IL2CPP_EXTERN_C String_t* _stringLiteral0C5DE4875C6043C4954B55D5BB6BB91E1E80B514;
IL2CPP_EXTERN_C String_t* _stringLiteral11A9ADB6CA2334383218C6A39C8BC8F23CE6821F;
IL2CPP_EXTERN_C String_t* _stringLiteral1552B448D676757A7912349B2193037A3020FA54;
IL2CPP_EXTERN_C String_t* _stringLiteral18D373BF5292FA733D7177C9B62A5D1B0917F00B;
IL2CPP_EXTERN_C String_t* _stringLiteral23AD9577FFFAD525C0FE9C92CC6DC8E665B589A5;
IL2CPP_EXTERN_C String_t* _stringLiteral3C6D0409D92CB23F0C005C52F4A6D1EC0D005062;
IL2CPP_EXTERN_C String_t* _stringLiteral4A89023BFBBA6BBE51099E18BBFD2D772EFC062D;
IL2CPP_EXTERN_C String_t* _stringLiteral55E7FF1059C586902360E3CBE8E0AE2CCE9A60D7;
IL2CPP_EXTERN_C String_t* _stringLiteral58C152450A7FC5A41AE5FCDAC969EE8296CC5CAE;
IL2CPP_EXTERN_C String_t* _stringLiteral691183E5526890FF7EBB0444FB84BD9AE22C7041;
IL2CPP_EXTERN_C String_t* _stringLiteral74B0130CA9C6A8877D6B7AAD2782E425C6EB7440;
IL2CPP_EXTERN_C String_t* _stringLiteral7598EFBF4A029BF0B3B286271D8C3B865F7A66FA;
IL2CPP_EXTERN_C String_t* _stringLiteral8820648669D92CC693A9E55EF8530591D3134766;
IL2CPP_EXTERN_C String_t* _stringLiteralA12C13441E908B46D0E8552680587F5595D959F4;
IL2CPP_EXTERN_C String_t* _stringLiteralA1B3A4AFA5858091E5AF1C62D06F4B9A2048469A;
IL2CPP_EXTERN_C String_t* _stringLiteralB0C4C7CD841974DEAC964A4A08FC4C81BEF07C4F;
IL2CPP_EXTERN_C String_t* _stringLiteralB7C91DAF57DF50693F71F34FCC989852A5EED7CD;
IL2CPP_EXTERN_C String_t* _stringLiteralBDC5E1C13D7CFEEBC452B255C1F0E6E438D88E53;
IL2CPP_EXTERN_C String_t* _stringLiteralBF9836BA7665CCE7BF53FD569665EF2D03B9DF1D;
IL2CPP_EXTERN_C String_t* _stringLiteralC8A527D9F2BE30181294916024788A882529CDAC;
IL2CPP_EXTERN_C String_t* _stringLiteralD5D089244D2AF3D858FF9D8AA8608F11F0CC129E;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDB8363CFEB8377FB94C68434E9FDBD34E3E0985C;
IL2CPP_EXTERN_C String_t* _stringLiteralE514EA69204FCFA704553F654C6072C58C720EAF;
IL2CPP_EXTERN_C String_t* _stringLiteralEE90124D9F1D9E375655D02D0DA0523793E696F4;
IL2CPP_EXTERN_C String_t* _stringLiteralF7E015892461F998777AAFE13781FA77EB87DD4D;
IL2CPP_EXTERN_C String_t* _stringLiteralF9069C149DC47D93EE551A25A091EE74D6D03702;
IL2CPP_EXTERN_C String_t* _stringLiteralFD5DA0567B0642790467E84445CBBF046817C259;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisBoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23_m59698092F1230C6FB7F40D0F58F643A931A732D7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisPlayerHealth_tE7421738BA48E6A6C90760303B818641DDFAE263_mF6FA39268341969F2360DEF6F96AE7E0333F13DB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentsInChildren_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m35AC34F858BD2F34770712CD020AA0518D9409C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponents_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC739FB09ACDAADE9300E9D1FDBF591D2022B1963_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisMoveRoad_t74517ABB7841065BF051268E60421CE6BF92B857_m968F0054483460BC8E3B8D96D3CE5FDEACF3D747_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisTankBullet_t5BB5DC60FCD23BF60489A4772CC4678400F0F7AA_m6AC26BF562278ABECCC5A0D04F030A21C463C358_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputAction_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m8D02BA85303ABD48D9963369E106B0C83A393FBF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_AddRange_mACF0CBFB5107412F825BB12F5FC93699031073AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m38500C20418699AEC04B1946434E06EC96FB4B1C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m48BBB83C5F748E6E6FF0731C3682092DEA6A7173_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m70F5CFC2DEA9332B78C5ADC0EE1CE1B7465B1456_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CMoveRoadsU3Ed__12_System_Collections_IEnumerator_Reset_mF16C18FBE421AD0D84028789BDC9AF3D6884A7C8_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
struct RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A;
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.Material>
struct List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA  : public RuntimeObject
{
};
struct Il2CppArrayBounds;

// MA_Toolbox.Utils.MA_StringUtils
struct MA_StringUtils_t92EBE19945F1C7C74AFA326330CFAFC8D718B79A  : public RuntimeObject
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

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
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

// MotorcycleTakeoff/<MoveRoads>d__12
struct U3CMoveRoadsU3Ed__12_t4A3422038C6E22696DD48D96A9A21C36B8154832  : public RuntimeObject
{
	// System.Int32 MotorcycleTakeoff/<MoveRoads>d__12::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object MotorcycleTakeoff/<MoveRoads>d__12::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// MotorcycleTakeoff MotorcycleTakeoff/<MoveRoads>d__12::<>4__this
	MotorcycleTakeoff_tAC47DC8F5A468CF6B428AB65A25CD2FEC94BBE32* ___U3CU3E4__this_2;
};

// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>>
struct InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B 
{
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	Action_1U5BU5D_tB846E6FE2326CCD34124D1E5D70117C9D33DEE76* ___additionalValues_2;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight>
struct TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions>
struct TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Int32>
struct TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Single>
struct TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	float ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient>
struct TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// UnityEngine.Color32
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// UnityEngine.DrivenRectTransformTracker
struct DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 
{
	union
	{
		struct
		{
		};
		uint8_t DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1__padding[1];
	};
};

// UnityEngine.InputSystem.InputActionProperty
struct InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD 
{
	// System.Boolean UnityEngine.InputSystem.InputActionProperty::m_UseReference
	bool ___m_UseReference_0;
	// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.InputActionProperty::m_Action
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___m_Action_1;
	// UnityEngine.InputSystem.InputActionReference UnityEngine.InputSystem.InputActionProperty::m_Reference
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___m_Reference_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputActionProperty
struct InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD_marshaled_pinvoke
{
	int32_t ___m_UseReference_0;
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___m_Action_1;
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___m_Reference_2;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputActionProperty
struct InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD_marshaled_com
{
	int32_t ___m_UseReference_0;
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___m_Action_1;
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___m_Reference_2;
};

// UnityEngine.InputSystem.InputBinding
struct InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5 
{
	// System.String UnityEngine.InputSystem.InputBinding::m_Name
	String_t* ___m_Name_2;
	// System.String UnityEngine.InputSystem.InputBinding::m_Id
	String_t* ___m_Id_3;
	// System.String UnityEngine.InputSystem.InputBinding::m_Path
	String_t* ___m_Path_4;
	// System.String UnityEngine.InputSystem.InputBinding::m_Interactions
	String_t* ___m_Interactions_5;
	// System.String UnityEngine.InputSystem.InputBinding::m_Processors
	String_t* ___m_Processors_6;
	// System.String UnityEngine.InputSystem.InputBinding::m_Groups
	String_t* ___m_Groups_7;
	// System.String UnityEngine.InputSystem.InputBinding::m_Action
	String_t* ___m_Action_8;
	// UnityEngine.InputSystem.InputBinding/Flags UnityEngine.InputSystem.InputBinding::m_Flags
	int32_t ___m_Flags_9;
	// System.String UnityEngine.InputSystem.InputBinding::m_OverridePath
	String_t* ___m_OverridePath_10;
	// System.String UnityEngine.InputSystem.InputBinding::m_OverrideInteractions
	String_t* ___m_OverrideInteractions_11;
	// System.String UnityEngine.InputSystem.InputBinding::m_OverrideProcessors
	String_t* ___m_OverrideProcessors_12;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputBinding
struct InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5_marshaled_pinvoke
{
	char* ___m_Name_2;
	char* ___m_Id_3;
	char* ___m_Path_4;
	char* ___m_Interactions_5;
	char* ___m_Processors_6;
	char* ___m_Groups_7;
	char* ___m_Action_8;
	int32_t ___m_Flags_9;
	char* ___m_OverridePath_10;
	char* ___m_OverrideInteractions_11;
	char* ___m_OverrideProcessors_12;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputBinding
struct InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5_marshaled_com
{
	Il2CppChar* ___m_Name_2;
	Il2CppChar* ___m_Id_3;
	Il2CppChar* ___m_Path_4;
	Il2CppChar* ___m_Interactions_5;
	Il2CppChar* ___m_Processors_6;
	Il2CppChar* ___m_Groups_7;
	Il2CppChar* ___m_Action_8;
	int32_t ___m_Flags_9;
	Il2CppChar* ___m_OverridePath_10;
	Il2CppChar* ___m_OverrideInteractions_11;
	Il2CppChar* ___m_OverrideProcessors_12;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// UnityEngine.XR.Interaction.Toolkit.InteractionState
struct InteractionState_tA1AFAB17758E43BA3F654BEAD6A61A05992003AB 
{
	// System.Single UnityEngine.XR.Interaction.Toolkit.InteractionState::m_Value
	float ___m_Value_0;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.InteractionState::m_Active
	bool ___m_Active_1;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.InteractionState::m_ActivatedThisFrame
	bool ___m_ActivatedThisFrame_2;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.InteractionState::m_DeactivatedThisFrame
	bool ___m_DeactivatedThisFrame_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.Interaction.Toolkit.InteractionState
struct InteractionState_tA1AFAB17758E43BA3F654BEAD6A61A05992003AB_marshaled_pinvoke
{
	float ___m_Value_0;
	int32_t ___m_Active_1;
	int32_t ___m_ActivatedThisFrame_2;
	int32_t ___m_DeactivatedThisFrame_3;
};
// Native definition for COM marshalling of UnityEngine.XR.Interaction.Toolkit.InteractionState
struct InteractionState_tA1AFAB17758E43BA3F654BEAD6A61A05992003AB_marshaled_com
{
	float ___m_Value_0;
	int32_t ___m_Active_1;
	int32_t ___m_ActivatedThisFrame_2;
	int32_t ___m_DeactivatedThisFrame_3;
};

// TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B 
{
	// System.Int32 TMPro.MaterialReference::index
	int32_t ___index_0;
	// TMPro.TMP_FontAsset TMPro.MaterialReference::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// TMPro.TMP_SpriteAsset TMPro.MaterialReference::spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	// UnityEngine.Material TMPro.MaterialReference::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	// System.Boolean TMPro.MaterialReference::isDefaultMaterial
	bool ___isDefaultMaterial_4;
	// System.Boolean TMPro.MaterialReference::isFallbackMaterial
	bool ___isFallbackMaterial_5;
	// UnityEngine.Material TMPro.MaterialReference::fallbackMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	// System.Single TMPro.MaterialReference::padding
	float ___padding_7;
	// System.Int32 TMPro.MaterialReference::referenceCount
	int32_t ___referenceCount_8;
};
// Native definition for P/Invoke marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_pinvoke
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};
// Native definition for COM marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_com
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
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
};

struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix_17;
};

// UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C 
{
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.SceneManagement.Scene
struct Scene_tA1DC762B79745EB5140F054C884855B922318356 
{
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD 
{
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_pinvoke
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_com
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};

// TMPro.TMP_FontStyleStack
struct TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC 
{
	// System.Byte TMPro.TMP_FontStyleStack::bold
	uint8_t ___bold_0;
	// System.Byte TMPro.TMP_FontStyleStack::italic
	uint8_t ___italic_1;
	// System.Byte TMPro.TMP_FontStyleStack::underline
	uint8_t ___underline_2;
	// System.Byte TMPro.TMP_FontStyleStack::strikethrough
	uint8_t ___strikethrough_3;
	// System.Byte TMPro.TMP_FontStyleStack::highlight
	uint8_t ___highlight_4;
	// System.Byte TMPro.TMP_FontStyleStack::superscript
	uint8_t ___superscript_5;
	// System.Byte TMPro.TMP_FontStyleStack::subscript
	uint8_t ___subscript_6;
	// System.Byte TMPro.TMP_FontStyleStack::uppercase
	uint8_t ___uppercase_7;
	// System.Byte TMPro.TMP_FontStyleStack::lowercase
	uint8_t ___lowercase_8;
	// System.Byte TMPro.TMP_FontStyleStack::smallcaps
	uint8_t ___smallcaps_9;
};

// TMPro.TMP_Offset
struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 
{
	// System.Single TMPro.TMP_Offset::m_Left
	float ___m_Left_0;
	// System.Single TMPro.TMP_Offset::m_Right
	float ___m_Right_1;
	// System.Single TMPro.TMP_Offset::m_Top
	float ___m_Top_2;
	// System.Single TMPro.TMP_Offset::m_Bottom
	float ___m_Bottom_3;
};

struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6_StaticFields
{
	// TMPro.TMP_Offset TMPro.TMP_Offset::k_ZeroOffset
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___k_ZeroOffset_4;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
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

// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	float ___m_Seconds_0;
};

// TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 
{
	// TMPro.TMP_Character TMPro.TMP_Text/SpecialCharacter::character
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	// TMPro.TMP_FontAsset TMPro.TMP_Text/SpecialCharacter::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// UnityEngine.Material TMPro.TMP_Text/SpecialCharacter::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	// System.Int32 TMPro.TMP_Text/SpecialCharacter::materialIndex
	int32_t ___materialIndex_3;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_pinvoke
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};
// Native definition for COM marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_com
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};

// TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 
{
	// System.UInt32[] TMPro.TMP_Text/TextBackingContainer::m_Array
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___m_Array_0;
	// System.Int32 TMPro.TMP_Text/TextBackingContainer::m_Count
	int32_t ___m_Count_1;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_pinvoke
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};
// Native definition for COM marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_com
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};

// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>>
struct CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 
{
	// System.Boolean UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CannotMutateCallbacksArray
	bool ___m_CannotMutateCallbacksArray_0;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_Callbacks
	InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B ___m_Callbacks_1;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CallbacksToAdd
	InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B ___m_CallbacksToAdd_2;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CallbacksToRemove
	InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B ___m_CallbacksToRemove_3;
};

// System.Nullable`1<UnityEngine.InputSystem.InputBinding>
struct Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5 ___value_1;
};

// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32>
struct TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference>
struct TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 
{
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;
};

struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11_StaticFields
{
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___defaultColorBlock_7;
};

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
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

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
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

// TMPro.Extents
struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 
{
	// UnityEngine.Vector2 TMPro.Extents::min
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___min_2;
	// UnityEngine.Vector2 TMPro.Extents::max
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___max_3;
};

struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8_StaticFields
{
	// TMPro.Extents TMPro.Extents::zero
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___zero_0;
	// TMPro.Extents TMPro.Extents::uninitialized
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___uninitialized_1;
};

// TMPro.HighlightState
struct HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B 
{
	// UnityEngine.Color32 TMPro.HighlightState::color
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_0;
	// TMPro.TMP_Offset TMPro.HighlightState::padding
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___padding_1;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
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

// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;
};

// TMPro.VertexGradient
struct VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F 
{
	// UnityEngine.Color TMPro.VertexGradient::topLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topLeft_0;
	// UnityEngine.Color TMPro.VertexGradient::topRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topRight_1;
	// UnityEngine.Color TMPro.VertexGradient::bottomLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomLeft_2;
	// UnityEngine.Color TMPro.VertexGradient::bottomRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomRight_3;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState>
struct TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.InputSystem.InputAction
struct InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD  : public RuntimeObject
{
	// System.String UnityEngine.InputSystem.InputAction::m_Name
	String_t* ___m_Name_0;
	// UnityEngine.InputSystem.InputActionType UnityEngine.InputSystem.InputAction::m_Type
	int32_t ___m_Type_1;
	// System.String UnityEngine.InputSystem.InputAction::m_ExpectedControlType
	String_t* ___m_ExpectedControlType_2;
	// System.String UnityEngine.InputSystem.InputAction::m_Id
	String_t* ___m_Id_3;
	// System.String UnityEngine.InputSystem.InputAction::m_Processors
	String_t* ___m_Processors_4;
	// System.String UnityEngine.InputSystem.InputAction::m_Interactions
	String_t* ___m_Interactions_5;
	// UnityEngine.InputSystem.InputBinding[] UnityEngine.InputSystem.InputAction::m_SingletonActionBindings
	InputBindingU5BU5D_t7E47E87B9CAE12B6F6A0659008B425C58D84BB57* ___m_SingletonActionBindings_6;
	// UnityEngine.InputSystem.InputAction/ActionFlags UnityEngine.InputSystem.InputAction::m_Flags
	int32_t ___m_Flags_7;
	// System.Nullable`1<UnityEngine.InputSystem.InputBinding> UnityEngine.InputSystem.InputAction::m_BindingMask
	Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 ___m_BindingMask_8;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_BindingsStartIndex
	int32_t ___m_BindingsStartIndex_9;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_BindingsCount
	int32_t ___m_BindingsCount_10;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_ControlStartIndex
	int32_t ___m_ControlStartIndex_11;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_ControlCount
	int32_t ___m_ControlCount_12;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_ActionIndexInState
	int32_t ___m_ActionIndexInState_13;
	// UnityEngine.InputSystem.InputActionMap UnityEngine.InputSystem.InputAction::m_ActionMap
	InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* ___m_ActionMap_14;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>> UnityEngine.InputSystem.InputAction::m_OnStarted
	CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 ___m_OnStarted_15;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>> UnityEngine.InputSystem.InputAction::m_OnCanceled
	CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 ___m_OnCanceled_16;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>> UnityEngine.InputSystem.InputAction::m_OnPerformed
	CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 ___m_OnPerformed_17;
};

// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// TMPro.TMP_LineInfo
struct TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 
{
	// System.Int32 TMPro.TMP_LineInfo::controlCharacterCount
	int32_t ___controlCharacterCount_0;
	// System.Int32 TMPro.TMP_LineInfo::characterCount
	int32_t ___characterCount_1;
	// System.Int32 TMPro.TMP_LineInfo::visibleCharacterCount
	int32_t ___visibleCharacterCount_2;
	// System.Int32 TMPro.TMP_LineInfo::spaceCount
	int32_t ___spaceCount_3;
	// System.Int32 TMPro.TMP_LineInfo::wordCount
	int32_t ___wordCount_4;
	// System.Int32 TMPro.TMP_LineInfo::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.TMP_LineInfo::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.TMP_LineInfo::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.TMP_LineInfo::lastVisibleCharacterIndex
	int32_t ___lastVisibleCharacterIndex_8;
	// System.Single TMPro.TMP_LineInfo::length
	float ___length_9;
	// System.Single TMPro.TMP_LineInfo::lineHeight
	float ___lineHeight_10;
	// System.Single TMPro.TMP_LineInfo::ascender
	float ___ascender_11;
	// System.Single TMPro.TMP_LineInfo::baseline
	float ___baseline_12;
	// System.Single TMPro.TMP_LineInfo::descender
	float ___descender_13;
	// System.Single TMPro.TMP_LineInfo::maxAdvance
	float ___maxAdvance_14;
	// System.Single TMPro.TMP_LineInfo::width
	float ___width_15;
	// System.Single TMPro.TMP_LineInfo::marginLeft
	float ___marginLeft_16;
	// System.Single TMPro.TMP_LineInfo::marginRight
	float ___marginRight_17;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_LineInfo::alignment
	int32_t ___alignment_18;
	// TMPro.Extents TMPro.TMP_LineInfo::lineExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___lineExtents_19;
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.ParticleSystem
struct ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A 
{
	// System.Int32 TMPro.WordWrapState::previous_WordBreak
	int32_t ___previous_WordBreak_0;
	// System.Int32 TMPro.WordWrapState::total_CharacterCount
	int32_t ___total_CharacterCount_1;
	// System.Int32 TMPro.WordWrapState::visible_CharacterCount
	int32_t ___visible_CharacterCount_2;
	// System.Int32 TMPro.WordWrapState::visible_SpriteCount
	int32_t ___visible_SpriteCount_3;
	// System.Int32 TMPro.WordWrapState::visible_LinkCount
	int32_t ___visible_LinkCount_4;
	// System.Int32 TMPro.WordWrapState::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.WordWrapState::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.WordWrapState::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.WordWrapState::lastVisibleCharIndex
	int32_t ___lastVisibleCharIndex_8;
	// System.Int32 TMPro.WordWrapState::lineNumber
	int32_t ___lineNumber_9;
	// System.Single TMPro.WordWrapState::maxCapHeight
	float ___maxCapHeight_10;
	// System.Single TMPro.WordWrapState::maxAscender
	float ___maxAscender_11;
	// System.Single TMPro.WordWrapState::maxDescender
	float ___maxDescender_12;
	// System.Single TMPro.WordWrapState::startOfLineAscender
	float ___startOfLineAscender_13;
	// System.Single TMPro.WordWrapState::maxLineAscender
	float ___maxLineAscender_14;
	// System.Single TMPro.WordWrapState::maxLineDescender
	float ___maxLineDescender_15;
	// System.Single TMPro.WordWrapState::pageAscender
	float ___pageAscender_16;
	// TMPro.HorizontalAlignmentOptions TMPro.WordWrapState::horizontalAlignment
	int32_t ___horizontalAlignment_17;
	// System.Single TMPro.WordWrapState::marginLeft
	float ___marginLeft_18;
	// System.Single TMPro.WordWrapState::marginRight
	float ___marginRight_19;
	// System.Single TMPro.WordWrapState::xAdvance
	float ___xAdvance_20;
	// System.Single TMPro.WordWrapState::preferredWidth
	float ___preferredWidth_21;
	// System.Single TMPro.WordWrapState::preferredHeight
	float ___preferredHeight_22;
	// System.Single TMPro.WordWrapState::previousLineScale
	float ___previousLineScale_23;
	// System.Int32 TMPro.WordWrapState::wordCount
	int32_t ___wordCount_24;
	// TMPro.FontStyles TMPro.WordWrapState::fontStyle
	int32_t ___fontStyle_25;
	// System.Int32 TMPro.WordWrapState::italicAngle
	int32_t ___italicAngle_26;
	// System.Single TMPro.WordWrapState::fontScaleMultiplier
	float ___fontScaleMultiplier_27;
	// System.Single TMPro.WordWrapState::currentFontSize
	float ___currentFontSize_28;
	// System.Single TMPro.WordWrapState::baselineOffset
	float ___baselineOffset_29;
	// System.Single TMPro.WordWrapState::lineOffset
	float ___lineOffset_30;
	// System.Boolean TMPro.WordWrapState::isDrivenLineSpacing
	bool ___isDrivenLineSpacing_31;
	// System.Single TMPro.WordWrapState::glyphHorizontalAdvanceAdjustment
	float ___glyphHorizontalAdvanceAdjustment_32;
	// System.Single TMPro.WordWrapState::cSpace
	float ___cSpace_33;
	// System.Single TMPro.WordWrapState::mSpace
	float ___mSpace_34;
	// TMPro.TMP_TextInfo TMPro.WordWrapState::textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	// TMPro.TMP_LineInfo TMPro.WordWrapState::lineInfo
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	// UnityEngine.Color32 TMPro.WordWrapState::vertexColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	// UnityEngine.Color32 TMPro.WordWrapState::underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	// UnityEngine.Color32 TMPro.WordWrapState::strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	// UnityEngine.Color32 TMPro.WordWrapState::highlightColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	// TMPro.TMP_FontStyleStack TMPro.WordWrapState::basicStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::italicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::highlightColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.WordWrapState::highlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.WordWrapState::colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.WordWrapState::fontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::styleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::baselineStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.WordWrapState::materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.WordWrapState::lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	// System.Int32 TMPro.WordWrapState::spriteAnimationID
	int32_t ___spriteAnimationID_57;
	// TMPro.TMP_FontAsset TMPro.WordWrapState::currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	// TMPro.TMP_SpriteAsset TMPro.WordWrapState::currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	// UnityEngine.Material TMPro.WordWrapState::currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	// System.Int32 TMPro.WordWrapState::currentMaterialIndex
	int32_t ___currentMaterialIndex_61;
	// TMPro.Extents TMPro.WordWrapState::meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	// System.Boolean TMPro.WordWrapState::tagNoParsing
	bool ___tagNoParsing_63;
	// System.Boolean TMPro.WordWrapState::isNonBreakingSpace
	bool ___isNonBreakingSpace_64;
};
// Native definition for P/Invoke marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_pinvoke
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};
// Native definition for COM marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_com
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState>
struct TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.AudioBehaviour
struct AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.BoxCollider
struct BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23  : public Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76
{
};

// UnityEngine.CharacterController
struct CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A  : public Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299  : public AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941
{
};

// Dialog
struct Dialog_t1A3474C8E604C61E022BDF82747C68A6C1E11972  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Animator Dialog::femalePortraitAnimator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___femalePortraitAnimator_4;
	// UnityEngine.AudioSource Dialog::femaleAudioSource
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___femaleAudioSource_5;
	// UnityEngine.AudioClip[] Dialog::audioClips
	AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* ___audioClips_6;
	// System.Boolean Dialog::audioPlaying
	bool ___audioPlaying_7;
};

// DissolveExample.DissolveChilds
struct DissolveChilds_tC16822F79C07B08A6B7D228996B7C0401DC4A43B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Collections.Generic.List`1<UnityEngine.Material> DissolveExample.DissolveChilds::materials
	List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B* ___materials_4;
};

// DissolveExample.DissolveOffest
struct DissolveOffest_t58BE2EF3E07A9135019B79095490CEF133FBE2A1  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Collections.Generic.List`1<UnityEngine.Material> DissolveExample.DissolveOffest::materials
	List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B* ___materials_4;
	// System.Boolean DissolveExample.DissolveOffest::PingPong
	bool ___PingPong_5;
};

// DragRace
struct DragRace_tA94C72E0C0B97E94EF6299F951A0CABB84B5540D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject DragRace::shifter
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___shifter_4;
	// UnityEngine.GameObject DragRace::speedometer
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___speedometer_5;
	// UnityEngine.InputSystem.InputActionProperty DragRace::rightGripButton
	InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD ___rightGripButton_6;
	// System.Boolean DragRace::rightGripButtonPushed
	bool ___rightGripButtonPushed_7;
	// UnityEngine.InputSystem.InputActionProperty DragRace::leftGripButton
	InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD ___leftGripButton_8;
	// System.Boolean DragRace::leftGripButtonPushed
	bool ___leftGripButtonPushed_9;
	// UnityEngine.Animator DragRace::shifterAnimator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___shifterAnimator_10;
	// System.Boolean DragRace::inSuccessArea
	bool ___inSuccessArea_11;
	// System.Int32 DragRace::gear
	int32_t ___gear_12;
	// UnityEngine.GameObject DragRace::successText
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___successText_13;
	// UnityEngine.GameObject DragRace::failText
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___failText_14;
	// System.Boolean DragRace::atStartingPosition
	bool ___atStartingPosition_15;
	// UnityEngine.GameObject DragRace::player
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___player_16;
	// System.Single DragRace::playerSpeed
	float ___playerSpeed_17;
	// UnityEngine.Vector3 DragRace::startingDestination
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___startingDestination_18;
	// MoveMotercycle DragRace::moveMotercycleScript
	MoveMotercycle_t74DD318610089E92DB3704A7CD3807583741019C* ___moveMotercycleScript_19;
	// MotorcycleGun DragRace::motorcycleGunScript
	MotorcycleGun_t85CAF3DA6871B6EE5AD5F24F587E7719CF169A1F* ___motorcycleGunScript_20;
	// Dialog DragRace::dialogScript
	Dialog_t1A3474C8E604C61E022BDF82747C68A6C1E11972* ___dialogScript_21;
	// UnityEngine.GameObject DragRace::autopilotText
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___autopilotText_22;
	// UnityEngine.GameObject DragRace::boss
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___boss_23;
	// System.Boolean DragRace::moveBoss
	bool ___moveBoss_24;
	// System.Single DragRace::bossSpeed
	float ___bossSpeed_25;
	// UnityEngine.Vector3 DragRace::bossDestination
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___bossDestination_26;
	// System.Boolean DragRace::canPushGripButton
	bool ___canPushGripButton_27;
	// UnityEngine.GameObject[] DragRace::roads
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___roads_28;
	// UnityEngine.AudioSource DragRace::boost
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___boost_29;
	// UnityEngine.AudioSource DragRace::failedBoost
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___failedBoost_30;
	// TakeDownBoss DragRace::takeDownBossScript
	TakeDownBoss_tADD32F2E240D31F8ED81489EF0B78769AA5D4B6B* ___takeDownBossScript_31;
	// UnityEngine.Animator DragRace::motorcycleAnimator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___motorcycleAnimator_32;
};

// ExplosionSound
struct ExplosionSound_tC439A81B758F51D2E359F70467555D360A378C31  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.AudioSource ExplosionSound::explosionAudio
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___explosionAudio_4;
};

// FirstEnemyWaves
struct FirstEnemyWaves_tE6ACB0E7BDFB9A613D5BE71C47A36DC1BD18194C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject FirstEnemyWaves::boss
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___boss_4;
	// UnityEngine.Vector3 FirstEnemyWaves::bossDestination
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___bossDestination_5;
	// System.Single FirstEnemyWaves::bossSpeed
	float ___bossSpeed_6;
	// System.Boolean FirstEnemyWaves::bossAtDestination
	bool ___bossAtDestination_7;
	// UnityEngine.GameObject[] FirstEnemyWaves::enemies
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___enemies_8;
	// System.Int32 FirstEnemyWaves::enemiesIndex
	int32_t ___enemiesIndex_9;
	// Dialog FirstEnemyWaves::dialogScript
	Dialog_t1A3474C8E604C61E022BDF82747C68A6C1E11972* ___dialogScript_10;
	// MotorcycleGun FirstEnemyWaves::motorcycleGunScript
	MotorcycleGun_t85CAF3DA6871B6EE5AD5F24F587E7719CF169A1F* ___motorcycleGunScript_11;
	// System.Int32 FirstEnemyWaves::enemiesKilled
	int32_t ___enemiesKilled_12;
	// SpawnTraffic FirstEnemyWaves::spawnTrafficScript
	SpawnTraffic_tA357F58BD23DB5299CEBA8931A293F803C153C84* ___spawnTrafficScript_13;
};

// DissolveExample.Follow
struct Follow_tE6475B5CD0C62D440F04CD07886CADE8556E5BEB  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single DissolveExample.Follow::speed
	float ___speed_4;
	// System.Single DissolveExample.Follow::height
	float ___height_5;
	// UnityEngine.Vector3 DissolveExample.Follow::pos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos_6;
};

// GameEvents
struct GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject[] GameEvents::motorcycleEmemiesNormalShot
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___motorcycleEmemiesNormalShot_4;
	// UnityEngine.GameObject GameEvents::motorcycleEmemiesSpreadShot
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___motorcycleEmemiesSpreadShot_5;
	// System.Int32 GameEvents::enemiesKilled
	int32_t ___enemiesKilled_6;
};

// GameOver
struct GameOver_tC0D72A03377DA58EE60B10DE7838DBDC0A75798D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Dialog GameOver::dialogScript
	Dialog_t1A3474C8E604C61E022BDF82747C68A6C1E11972* ___dialogScript_4;
	// TMPro.TMP_Text GameOver::missionComplete
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___missionComplete_5;
	// TMPro.TMP_Text GameOver::damageTaken
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___damageTaken_6;
	// TMPro.TMP_Text GameOver::hitsTaken
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___hitsTaken_7;
	// PlayerHealth GameOver::playerHealthScript
	PlayerHealth_tE7421738BA48E6A6C90760303B818641DDFAE263* ___playerHealthScript_8;
	// UnityEngine.GameObject GameOver::background
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___background_9;
	// UnityEngine.GameObject GameOver::buttons
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___buttons_10;
	// UnityEngine.GameObject GameOver::LeftraycastHand
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___LeftraycastHand_11;
	// UnityEngine.GameObject GameOver::rightraycastHand
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___rightraycastHand_12;
	// PauseMenu GameOver::pauseMenuScript
	PauseMenu_t36539DEACE8377BD498A235C80769301799E1985* ___pauseMenuScript_13;
};

// MotorcycleGun
struct MotorcycleGun_t85CAF3DA6871B6EE5AD5F24F587E7719CF169A1F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.XR.Interaction.Toolkit.XRBaseController MotorcycleGun::rightController
	XRBaseController_t44C1BB30A7E1D279DD2508F34D3352B33A9AD60C* ___rightController_4;
	// UnityEngine.XR.Interaction.Toolkit.XRBaseController MotorcycleGun::leftController
	XRBaseController_t44C1BB30A7E1D279DD2508F34D3352B33A9AD60C* ___leftController_5;
	// UnityEngine.InputSystem.InputActionProperty MotorcycleGun::rightTrigger
	InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD ___rightTrigger_6;
	// UnityEngine.InputSystem.InputActionProperty MotorcycleGun::leftTrigger
	InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD ___leftTrigger_7;
	// System.Boolean MotorcycleGun::triggerPressed
	bool ___triggerPressed_8;
	// UnityEngine.AudioSource MotorcycleGun::gunShot
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___gunShot_9;
	// UnityEngine.GameObject[] MotorcycleGun::lasers
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___lasers_10;
	// System.Int32 MotorcycleGun::laserIndex
	int32_t ___laserIndex_11;
	// UnityEngine.Transform MotorcycleGun::laserSpawnPoint
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___laserSpawnPoint_12;
	// UnityEngine.Transform MotorcycleGun::laserSpawnPoint2
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___laserSpawnPoint2_13;
	// System.Single MotorcycleGun::rateOfFire
	float ___rateOfFire_14;
	// System.Single MotorcycleGun::timer
	float ___timer_15;
	// System.Boolean MotorcycleGun::canShoot
	bool ___canShoot_16;
	// System.Boolean MotorcycleGun::passedTutorial
	bool ___passedTutorial_17;
};

// MotorcycleTakeoff
struct MotorcycleTakeoff_tAC47DC8F5A468CF6B428AB65A25CD2FEC94BBE32  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.AudioSource MotorcycleTakeoff::engineBoom
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___engineBoom_4;
	// UnityEngine.AudioSource MotorcycleTakeoff::backgroundMusic
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___backgroundMusic_5;
	// System.Boolean MotorcycleTakeoff::audioClipIsPlaying
	bool ___audioClipIsPlaying_6;
	// MoveRoad MotorcycleTakeoff::moveRoadScript1
	MoveRoad_t74517ABB7841065BF051268E60421CE6BF92B857* ___moveRoadScript1_7;
	// MoveRoad MotorcycleTakeoff::moveRoadScript2
	MoveRoad_t74517ABB7841065BF051268E60421CE6BF92B857* ___moveRoadScript2_8;
	// MoveRoad MotorcycleTakeoff::moveRoadScript3
	MoveRoad_t74517ABB7841065BF051268E60421CE6BF92B857* ___moveRoadScript3_9;
	// MoveRoad MotorcycleTakeoff::moveRoadScript4
	MoveRoad_t74517ABB7841065BF051268E60421CE6BF92B857* ___moveRoadScript4_10;
	// MoveTitle MotorcycleTakeoff::moveTitleScript
	MoveTitle_t68969922F613C9E241AF79026327034029E17EAD* ___moveTitleScript_11;
	// UnityEngine.GameObject MotorcycleTakeoff::fastDust
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___fastDust_12;
	// Dialog MotorcycleTakeoff::dialogScript
	Dialog_t1A3474C8E604C61E022BDF82747C68A6C1E11972* ___dialogScript_13;
	// UnityEngine.GameObject MotorcycleTakeoff::bossOnMotorcycle
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___bossOnMotorcycle_14;
};

// MoveMotercycle
struct MoveMotercycle_t74DD318610089E92DB3704A7CD3807583741019C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.CharacterController MoveMotercycle::controller
	CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* ___controller_4;
	// UnityEngine.InputSystem.InputActionProperty MoveMotercycle::moveStick
	InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD ___moveStick_5;
	// System.Single MoveMotercycle::playerSpeed
	float ___playerSpeed_6;
	// UnityEngine.Animator MoveMotercycle::motorcycleAnimator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___motorcycleAnimator_7;
	// UnityEngine.Animator MoveMotercycle::cameraOffset
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___cameraOffset_8;
	// System.Boolean MoveMotercycle::canMove
	bool ___canMove_9;
	// System.Boolean MoveMotercycle::sliding
	bool ___sliding_10;
	// UnityEngine.ParticleSystem MoveMotercycle::sparks
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___sparks_11;
	// MotorcycleGun MoveMotercycle::motorcycleGunScript
	MotorcycleGun_t85CAF3DA6871B6EE5AD5F24F587E7719CF169A1F* ___motorcycleGunScript_12;
	// UnityEngine.AudioSource MoveMotercycle::slidingAudio
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___slidingAudio_13;
};

// MoveRoad
struct MoveRoad_t74517ABB7841065BF051268E60421CE6BF92B857  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single MoveRoad::speed
	float ___speed_4;
	// UnityEngine.GameObject MoveRoad::nextRoad
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___nextRoad_5;
	// System.Single MoveRoad::zAxisToTriggerMove
	float ___zAxisToTriggerMove_6;
	// System.Single MoveRoad::lengthOfRoad
	float ___lengthOfRoad_7;
};

// MoveTitle
struct MoveTitle_t68969922F613C9E241AF79026327034029E17EAD  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single MoveTitle::speed
	float ___speed_4;
};

// MoveTutorial
struct MoveTutorial_t3CFCE84409CA3525A54DA9F9C20D336FA6DB5CC4  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Dialog MoveTutorial::dialogScript
	Dialog_t1A3474C8E604C61E022BDF82747C68A6C1E11972* ___dialogScript_4;
};

// OculusMenu
struct OculusMenu_t92A4173A3172F5126A52293139863A0485C88FFE  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean OculusMenu::_paused
	bool ____paused_4;
};

// PauseMenu
struct PauseMenu_t36539DEACE8377BD498A235C80769301799E1985  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.InputSystem.InputActionProperty PauseMenu::leftMenuButton
	InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD ___leftMenuButton_4;
	// System.Boolean PauseMenu::paused
	bool ___paused_5;
	// System.Boolean PauseMenu::menuButtonPressed
	bool ___menuButtonPressed_6;
	// UnityEngine.GameObject PauseMenu::pauseMenu
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___pauseMenu_7;
	// UnityEngine.Transform PauseMenu::playerLocation
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___playerLocation_8;
	// UnityEngine.GameObject PauseMenu::leftRaycastHand
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___leftRaycastHand_9;
	// UnityEngine.GameObject PauseMenu::righttRaycastHand
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___righttRaycastHand_10;
};

// PickupTruckMove
struct PickupTruckMove_t192C398DB3DB07F42AD05CCBFD5595E58ED446EA  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single PickupTruckMove::timer
	float ___timer_4;
	// System.Single PickupTruckMove::timeToGetToDestination
	float ___timeToGetToDestination_5;
	// Truck PickupTruckMove::truckScript
	Truck_tC25075F97163DDBB2CD8FED02BFCA45D53F94454* ___truckScript_6;
	// TruckEnemy PickupTruckMove::truckEnemyScript
	TruckEnemy_t5A18267E64F9717056134EAC0BFEADD9957507A5* ___truckEnemyScript_7;
};

// PickupTruckShockwave
struct PickupTruckShockwave_tDD1BEEB515EEF99045636F815F6E0A7D1C203505  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean PickupTruckShockwave::movingToStartPosition
	bool ___movingToStartPosition_4;
	// UnityEngine.Transform PickupTruckShockwave::startingPosition
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___startingPosition_5;
	// System.Single PickupTruckShockwave::truckSpeed
	float ___truckSpeed_6;
	// UnityEngine.Transform PickupTruckShockwave::destination
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___destination_7;
	// System.Boolean PickupTruckShockwave::startShooting
	bool ___startShooting_8;
	// UnityEngine.GameObject PickupTruckShockwave::laser
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___laser_9;
	// System.Single PickupTruckShockwave::rotateSpeed
	float ___rotateSpeed_10;
	// System.Boolean PickupTruckShockwave::moveLaserLeft
	bool ___moveLaserLeft_11;
	// System.Int32 PickupTruckShockwave::health
	int32_t ___health_12;
	// UnityEngine.ParticleSystem PickupTruckShockwave::smoke
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___smoke_13;
	// UnityEngine.ParticleSystem PickupTruckShockwave::fire
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___fire_14;
	// UnityEngine.GameObject PickupTruckShockwave::explosion
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___explosion_15;
	// UnityEngine.Animator PickupTruckShockwave::truckAnimator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___truckAnimator_16;
	// UnityEngine.Animator PickupTruckShockwave::TruckEnemyAnimator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___TruckEnemyAnimator_17;
	// UnityEngine.UI.Slider PickupTruckShockwave::healthbarSlider
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___healthbarSlider_18;
};

// PlayerHealth
struct PlayerHealth_tE7421738BA48E6A6C90760303B818641DDFAE263  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 PlayerHealth::health
	int32_t ___health_4;
	// UnityEngine.BoxCollider PlayerHealth::motorcycleCollider
	BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* ___motorcycleCollider_5;
	// UnityEngine.GameObject PlayerHealth::damageIndicator
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___damageIndicator_6;
	// UnityEngine.AudioSource PlayerHealth::playerHit
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___playerHit_7;
	// MotorcycleGun PlayerHealth::motorcycleGunScript
	MotorcycleGun_t85CAF3DA6871B6EE5AD5F24F587E7719CF169A1F* ___motorcycleGunScript_8;
	// System.Int32 PlayerHealth::timesHit
	int32_t ___timesHit_9;
};

// PlayerMoveTutorial
struct PlayerMoveTutorial_tEC7F7151F284331252160E45E31ACE5300DD81B8  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Dialog PlayerMoveTutorial::dialogScript
	Dialog_t1A3474C8E604C61E022BDF82747C68A6C1E11972* ___dialogScript_4;
	// MoveMotercycle PlayerMoveTutorial::moveMotercycleScript
	MoveMotercycle_t74DD318610089E92DB3704A7CD3807583741019C* ___moveMotercycleScript_5;
	// UnityEngine.Transform PlayerMoveTutorial::player
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___player_6;
	// UnityEngine.Vector3 PlayerMoveTutorial::playerStartingPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___playerStartingPosition_7;
	// System.Boolean PlayerMoveTutorial::playerMoved
	bool ___playerMoved_8;
	// System.Boolean PlayerMoveTutorial::playerSlide
	bool ___playerSlide_9;
	// SpawnConstruction PlayerMoveTutorial::spawnConstructionScript
	SpawnConstruction_t86BC35D0E205283696846C4497F7FFD23CCA6206* ___spawnConstructionScript_10;
};

// QuitGame
struct QuitGame_t9B04082D189C45AA569B5B3A60EB86A52CE0EADD  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Restart
struct Restart_t123AB8241FB07FFA868B2C6C56FDA2638364FF4A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// DissolveExample.Rotator
struct Rotator_tE132C1593185E5BED33BA041401344E57D5F4D6D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single DissolveExample.Rotator::Speed
	float ___Speed_4;
};

// DissolveExample.RotatorDissolveDir
struct RotatorDissolveDir_t012E005A8E17EFFFAEA418A5D7271205E6860066  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Vector3 DissolveExample.RotatorDissolveDir::Speed
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___Speed_4;
	// System.Collections.Generic.List`1<UnityEngine.Material> DissolveExample.RotatorDissolveDir::materials
	List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B* ___materials_5;
};

// SecondEnemyWave
struct SecondEnemyWave_tB3A59368AF2A748087DA422C26ED304D3C276E5A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Dialog SecondEnemyWave::dialogScript
	Dialog_t1A3474C8E604C61E022BDF82747C68A6C1E11972* ___dialogScript_4;
	// UnityEngine.GameObject SecondEnemyWave::machineGunTruck
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___machineGunTruck_5;
	// UnityEngine.GameObject SecondEnemyWave::shockwaveTruck
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___shockwaveTruck_6;
	// System.Boolean SecondEnemyWave::firstEnemySpawned
	bool ___firstEnemySpawned_7;
	// System.Boolean SecondEnemyWave::firstEnemyKilled
	bool ___firstEnemyKilled_8;
	// System.Boolean SecondEnemyWave::secondEnemySpawned
	bool ___secondEnemySpawned_9;
	// UnityEngine.GameObject SecondEnemyWave::trailer
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___trailer_10;
};

// ShakeObject
struct ShakeObject_t08A5B892F3093E888A2496382BA495104AB2F04A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform ShakeObject::camTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___camTransform_4;
	// System.Single ShakeObject::shakeDuration
	float ___shakeDuration_5;
	// System.Single ShakeObject::shakeAmount
	float ___shakeAmount_6;
	// System.Single ShakeObject::decreaseFactor
	float ___decreaseFactor_7;
	// UnityEngine.Vector3 ShakeObject::originalPos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___originalPos_8;
};

// Shockwave
struct Shockwave_tC2C18694478C183122A90581C50910096885443B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single Shockwave::timer
	float ___timer_4;
	// System.Single Shockwave::timeToGetToDestination
	float ___timeToGetToDestination_5;
	// System.Single Shockwave::shockwaveSpeed
	float ___shockwaveSpeed_6;
	// System.Single Shockwave::timeBeforeBulletDisabled
	float ___timeBeforeBulletDisabled_7;
};

// ShootRicket
struct ShootRicket_tEB742549214BCF01523A0ECC274C3EAC141234FE  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject[] ShootRicket::rockets
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___rockets_4;
	// UnityEngine.GameObject[] ShootRicket::redCircles
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___redCircles_5;
	// System.Int32 ShootRicket::rocketsIndex
	int32_t ___rocketsIndex_6;
	// System.Single ShootRicket::timer
	float ___timer_7;
	// System.Single ShootRicket::timeBetweenShots
	float ___timeBetweenShots_8;
	// System.Single ShootRicket::xAxisPosition
	float ___xAxisPosition_9;
	// System.Single ShootRicket::disableScriptTimer
	float ___disableScriptTimer_10;
	// TrailerCrash ShootRicket::trailerCrashScript
	TrailerCrash_t92F5B84A7733A9B5C98E41BD7C9346E3ED732CF1* ___trailerCrashScript_11;
	// Dialog ShootRicket::DialogScript
	Dialog_t1A3474C8E604C61E022BDF82747C68A6C1E11972* ___DialogScript_12;
	// System.Boolean ShootRicket::playMidpointAudio
	bool ___playMidpointAudio_13;
};

// SpawnConstruction
struct SpawnConstruction_t86BC35D0E205283696846C4497F7FFD23CCA6206  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject[] SpawnConstruction::barricades
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___barricades_4;
	// UnityEngine.GameObject[] SpawnConstruction::concreteBlocks
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___concreteBlocks_5;
	// UnityEngine.Transform[] SpawnConstruction::barricadeSpawnPoints
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* ___barricadeSpawnPoints_6;
	// UnityEngine.Transform[] SpawnConstruction::concreteBlockSpawnPoints
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* ___concreteBlockSpawnPoints_7;
	// System.Int32 SpawnConstruction::barricadesIndex
	int32_t ___barricadesIndex_8;
	// System.Int32 SpawnConstruction::concreteBlocksIndex
	int32_t ___concreteBlocksIndex_9;
	// System.Single SpawnConstruction::timer
	float ___timer_10;
	// System.Single SpawnConstruction::timeBetweenBarricadeLines
	float ___timeBetweenBarricadeLines_11;
	// UnityEngine.GameObject SpawnConstruction::constructionText
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___constructionText_12;
	// WeaveThroughContruction SpawnConstruction::weaveThroughContructionScript
	WeaveThroughContruction_t5CE2DE6D36EB5B8331783F2F7FD1884B9D8178C2* ___weaveThroughContructionScript_13;
	// System.Int32 SpawnConstruction::barricadesPickedIndex
	int32_t ___barricadesPickedIndex_14;
	// FirstEnemyWaves SpawnConstruction::firstEnemyWavesScript
	FirstEnemyWaves_tE6ACB0E7BDFB9A613D5BE71C47A36DC1BD18194C* ___firstEnemyWavesScript_15;
	// Dialog SpawnConstruction::dialogScript
	Dialog_t1A3474C8E604C61E022BDF82747C68A6C1E11972* ___dialogScript_16;
};

// SpawnTraffic
struct SpawnTraffic_tA357F58BD23DB5299CEBA8931A293F803C153C84  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject SpawnTraffic::car
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___car_4;
	// UnityEngine.Transform[] SpawnTraffic::lanes
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* ___lanes_5;
	// System.Single SpawnTraffic::timer
	float ___timer_6;
	// System.Int32 SpawnTraffic::laneToSpawnCarIn
	int32_t ___laneToSpawnCarIn_7;
	// System.Int32 SpawnTraffic::prevLane
	int32_t ___prevLane_8;
	// System.Int32 SpawnTraffic::prevLane2
	int32_t ___prevLane2_9;
	// UnityEngine.GameObject[] SpawnTraffic::cars
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___cars_10;
	// System.Int32 SpawnTraffic::carsIndex
	int32_t ___carsIndex_11;
	// System.Int32 SpawnTraffic::numberOfCarsPerRow
	int32_t ___numberOfCarsPerRow_12;
	// Dialog SpawnTraffic::dialogScript
	Dialog_t1A3474C8E604C61E022BDF82747C68A6C1E11972* ___dialogScript_13;
	// System.Boolean SpawnTraffic::stopSpawningCars
	bool ___stopSpawningCars_14;
	// SecondEnemyWave SpawnTraffic::secondEnemyWaveScript
	SecondEnemyWave_tB3A59368AF2A748087DA422C26ED304D3C276E5A* ___secondEnemyWaveScript_15;
	// UnityEngine.AudioSource SpawnTraffic::trafficAudio
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___trafficAudio_16;
};

// StartGame
struct StartGame_t90AD9E5EF32F94D01D593C5340B2CCAD86A98E07  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.XR.Interaction.Toolkit.XRBaseController StartGame::leftController
	XRBaseController_t44C1BB30A7E1D279DD2508F34D3352B33A9AD60C* ___leftController_4;
	// UnityEngine.XR.Interaction.Toolkit.XRBaseController StartGame::rightController
	XRBaseController_t44C1BB30A7E1D279DD2508F34D3352B33A9AD60C* ___rightController_5;
	// UnityEngine.InputSystem.InputActionProperty StartGame::leftGrip
	InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD ___leftGrip_6;
	// UnityEngine.InputSystem.InputActionProperty StartGame::rightGrip
	InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD ___rightGrip_7;
	// System.Single StartGame::hapticStrength
	float ___hapticStrength_8;
	// UnityEngine.AudioSource StartGame::engineRev
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___engineRev_9;
	// System.Boolean StartGame::audioClipIsPlaying
	bool ___audioClipIsPlaying_10;
	// ShakeObject StartGame::shakeObject
	ShakeObject_t08A5B892F3093E888A2496382BA495104AB2F04A* ___shakeObject_11;
	// System.Single StartGame::timer
	float ___timer_12;
	// Dialog StartGame::DialogScript
	Dialog_t1A3474C8E604C61E022BDF82747C68A6C1E11972* ___DialogScript_13;
	// MotorcycleTakeoff StartGame::motorcycleTakeoffScript
	MotorcycleTakeoff_tAC47DC8F5A468CF6B428AB65A25CD2FEC94BBE32* ___motorcycleTakeoffScript_14;
	// UnityEngine.GameObject StartGame::slowDust
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___slowDust_15;
	// UnityEngine.AudioSource StartGame::oncomingTrafficAudio
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___oncomingTrafficAudio_16;
};

// TakeDownBoss
struct TakeDownBoss_tADD32F2E240D31F8ED81489EF0B78769AA5D4B6B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.InputSystem.InputActionProperty TakeDownBoss::moveStick
	InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD ___moveStick_4;
	// UnityEngine.Animator TakeDownBoss::motorcycleAnimator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___motorcycleAnimator_5;
	// UnityEngine.Animator TakeDownBoss::cameraOffset
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___cameraOffset_6;
	// System.Boolean TakeDownBoss::canSlide
	bool ___canSlide_7;
	// UnityEngine.GameObject TakeDownBoss::boss
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___boss_8;
	// System.Single TakeDownBoss::bossSpeed
	float ___bossSpeed_9;
	// UnityEngine.Vector3 TakeDownBoss::bossdestination
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___bossdestination_10;
	// System.Boolean TakeDownBoss::movingBoss1
	bool ___movingBoss1_11;
	// System.Boolean TakeDownBoss::movingBoss2
	bool ___movingBoss2_12;
	// UnityEngine.Animator TakeDownBoss::bossBikeAnimation
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___bossBikeAnimation_13;
	// UnityEngine.Animator TakeDownBoss::bossAnimation
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___bossAnimation_14;
	// UnityEngine.GameObject TakeDownBoss::bossEnemy
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___bossEnemy_15;
	// UnityEngine.GameObject[] TakeDownBoss::roads
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___roads_16;
	// Dialog TakeDownBoss::dialogScript
	Dialog_t1A3474C8E604C61E022BDF82747C68A6C1E11972* ___dialogScript_17;
	// GameOver TakeDownBoss::gameOverScript
	GameOver_tC0D72A03377DA58EE60B10DE7838DBDC0A75798D* ___gameOverScript_18;
	// UnityEngine.XR.Interaction.Toolkit.XRBaseController TakeDownBoss::rightController
	XRBaseController_t44C1BB30A7E1D279DD2508F34D3352B33A9AD60C* ___rightController_19;
	// UnityEngine.XR.Interaction.Toolkit.XRBaseController TakeDownBoss::leftController
	XRBaseController_t44C1BB30A7E1D279DD2508F34D3352B33A9AD60C* ___leftController_20;
	// UnityEngine.AudioSource TakeDownBoss::slidingAudio
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___slidingAudio_21;
	// UnityEngine.GameObject TakeDownBoss::slowDust
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___slowDust_22;
	// UnityEngine.GameObject TakeDownBoss::fastDust
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___fastDust_23;
};

// TankBullet
struct TankBullet_t5BB5DC60FCD23BF60489A4772CC4678400F0F7AA  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single TankBullet::bulletSpeed
	float ___bulletSpeed_4;
};

// TankEnemy
struct TankEnemy_t2BA2128FB51203FB3CB6466ACB4E0B0EB4ECDF25  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single TankEnemy::tankSpeed
	float ___tankSpeed_4;
	// UnityEngine.Transform TankEnemy::startPosition
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___startPosition_5;
	// System.Boolean TankEnemy::atStartingPosition
	bool ___atStartingPosition_6;
	// System.Boolean TankEnemy::shootAttack1A
	bool ___shootAttack1A_7;
	// UnityEngine.Transform TankEnemy::bulletSpawnPoint
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___bulletSpawnPoint_8;
	// UnityEngine.GameObject[] TankEnemy::bullets
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___bullets_9;
	// System.Int32 TankEnemy::bulletsIndex
	int32_t ___bulletsIndex_10;
	// System.Single TankEnemy::timer
	float ___timer_11;
	// System.Int32 TankEnemy::bulletsShot
	int32_t ___bulletsShot_12;
	// System.Boolean TankEnemy::shootAttack1B
	bool ___shootAttack1B_13;
	// System.Int32 TankEnemy::shootAttackRounds
	int32_t ___shootAttackRounds_14;
	// UnityEngine.GameObject[] TankEnemy::rocketExplosions
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___rocketExplosions_15;
	// UnityEngine.GameObject[] TankEnemy::rockets
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___rockets_16;
	// System.Int32 TankEnemy::rocketsIndex
	int32_t ___rocketsIndex_17;
	// System.Boolean TankEnemy::rocketAttack
	bool ___rocketAttack_18;
	// System.Int32 TankEnemy::lastRandomNumber
	int32_t ___lastRandomNumber_19;
	// System.Int32 TankEnemy::randomNumber
	int32_t ___randomNumber_20;
	// System.Boolean TankEnemy::shootAttack3
	bool ___shootAttack3_21;
	// System.Boolean TankEnemy::shootAttack3A
	bool ___shootAttack3A_22;
	// System.Boolean TankEnemy::shootAttack3B
	bool ___shootAttack3B_23;
	// System.Int32 TankEnemy::health
	int32_t ___health_24;
	// UnityEngine.ParticleSystem TankEnemy::smoke
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___smoke_25;
	// UnityEngine.ParticleSystem TankEnemy::fire
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___fire_26;
	// UnityEngine.GameObject TankEnemy::explosion
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___explosion_27;
	// UnityEngine.BoxCollider TankEnemy::boxCollider
	BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* ___boxCollider_28;
	// UnityEngine.UI.Slider TankEnemy::healthbarSlider
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___healthbarSlider_29;
};

// TankRocket
struct TankRocket_t57A087C214C0E6EF25EFA51BFA52F7A50F34780D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform TankRocket::spawnPosition
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___spawnPosition_4;
	// System.Single TankRocket::rocketSpeed
	float ___rocketSpeed_5;
};

// ThirdEnemyWave
struct ThirdEnemyWave_tD04A8825C0EC6C1883168EE7A0C72DC93A124812  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Dialog ThirdEnemyWave::dialogScript
	Dialog_t1A3474C8E604C61E022BDF82747C68A6C1E11972* ___dialogScript_4;
	// UnityEngine.GameObject ThirdEnemyWave::machinegunTruck
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___machinegunTruck_5;
	// UnityEngine.GameObject ThirdEnemyWave::shockwaveTruck
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___shockwaveTruck_6;
	// UnityEngine.GameObject ThirdEnemyWave::tank
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___tank_7;
	// UnityEngine.GameObject ThirdEnemyWave::leftBikeEnemy
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___leftBikeEnemy_8;
	// UnityEngine.GameObject ThirdEnemyWave::rightBikeEnemy
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___rightBikeEnemy_9;
	// System.Boolean ThirdEnemyWave::firstWaveSpawned
	bool ___firstWaveSpawned_10;
	// System.Boolean ThirdEnemyWave::firstWaveKilled
	bool ___firstWaveKilled_11;
	// System.Boolean ThirdEnemyWave::secondWaveSpawned
	bool ___secondWaveSpawned_12;
	// System.Boolean ThirdEnemyWave::secondWaveKilled
	bool ___secondWaveKilled_13;
	// System.Boolean ThirdEnemyWave::tankspawned
	bool ___tankspawned_14;
	// DragRace ThirdEnemyWave::dragRaceScript
	DragRace_tA94C72E0C0B97E94EF6299F951A0CABB84B5540D* ___dragRaceScript_15;
	// UnityEngine.BoxCollider ThirdEnemyWave::playerBoxCollider
	BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* ___playerBoxCollider_16;
};

// Truck
struct Truck_tC25075F97163DDBB2CD8FED02BFCA45D53F94454  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 Truck::health
	int32_t ___health_4;
	// UnityEngine.ParticleSystem Truck::smoke
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___smoke_5;
	// UnityEngine.ParticleSystem Truck::fire
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___fire_6;
	// UnityEngine.GameObject Truck::explosion
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___explosion_7;
	// UnityEngine.Animator Truck::truckAnimator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___truckAnimator_8;
	// TruckEnemy Truck::truckEnemyScript
	TruckEnemy_t5A18267E64F9717056134EAC0BFEADD9957507A5* ___truckEnemyScript_9;
	// UnityEngine.Animator Truck::TruckEnemyAnimator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___TruckEnemyAnimator_10;
	// PickupTruckMove Truck::pickupTruckMoveScript
	PickupTruckMove_t192C398DB3DB07F42AD05CCBFD5595E58ED446EA* ___pickupTruckMoveScript_11;
	// UnityEngine.UI.Slider Truck::healthbarSlider
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___healthbarSlider_12;
};

// TruckEnemy
struct TruckEnemy_t5A18267E64F9717056134EAC0BFEADD9957507A5  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// EnemyLaserPool TruckEnemy::enemyLaserPoolScript
	EnemyLaserPool_tC3240DD04A54AEEC93E7726C11279D724093A2A6* ___enemyLaserPoolScript_4;
	// UnityEngine.Transform TruckEnemy::bulletSpawnPoint
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___bulletSpawnPoint_5;
	// System.Single TruckEnemy::timer
	float ___timer_6;
	// UnityEngine.Transform TruckEnemy::shootTarget
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___shootTarget_7;
	// System.Single TruckEnemy::speed
	float ___speed_8;
	// UnityEngine.Vector3 TruckEnemy::position1
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1_9;
	// UnityEngine.Vector3 TruckEnemy::position2
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position2_10;
	// UnityEngine.Vector3 TruckEnemy::moveToPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___moveToPosition_11;
	// UnityEngine.GameObject[] TruckEnemy::bullets
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___bullets_12;
	// System.Int32 TruckEnemy::bulletsIndex
	int32_t ___bulletsIndex_13;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.XR.Interaction.Toolkit.XRBaseController
struct XRBaseController_t44C1BB30A7E1D279DD2508F34D3352B33A9AD60C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.XR.Interaction.Toolkit.XRBaseController/UpdateType UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_UpdateTrackingType
	int32_t ___m_UpdateTrackingType_4;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_EnableInputTracking
	bool ___m_EnableInputTracking_5;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_EnableInputActions
	bool ___m_EnableInputActions_6;
	// UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_ModelPrefab
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_ModelPrefab_7;
	// UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_ModelParent
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_ModelParent_8;
	// UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_Model
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_Model_9;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_AnimateModel
	bool ___m_AnimateModel_10;
	// System.String UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_ModelSelectTransition
	String_t* ___m_ModelSelectTransition_11;
	// System.String UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_ModelDeSelectTransition
	String_t* ___m_ModelDeSelectTransition_12;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_HideControllerModel
	bool ___m_HideControllerModel_13;
	// UnityEngine.XR.Interaction.Toolkit.InteractionState UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_SelectInteractionState
	InteractionState_tA1AFAB17758E43BA3F654BEAD6A61A05992003AB ___m_SelectInteractionState_14;
	// UnityEngine.XR.Interaction.Toolkit.InteractionState UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_ActivateInteractionState
	InteractionState_tA1AFAB17758E43BA3F654BEAD6A61A05992003AB ___m_ActivateInteractionState_15;
	// UnityEngine.XR.Interaction.Toolkit.InteractionState UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_UIPressInteractionState
	InteractionState_tA1AFAB17758E43BA3F654BEAD6A61A05992003AB ___m_UIPressInteractionState_16;
	// UnityEngine.XR.Interaction.Toolkit.XRControllerState UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_ControllerState
	XRControllerState_tC34C40CB942A51408D8799940A87A6AD87218B50* ___m_ControllerState_17;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_CreateControllerState
	bool ___m_CreateControllerState_18;
	// UnityEngine.Animator UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_ModelAnimator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___m_ModelAnimator_19;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_HasWarnedAnimatorMissing
	bool ___m_HasWarnedAnimatorMissing_20;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_PerformSetup
	bool ___m_PerformSetup_21;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseController::<anchorControlDeadzone>k__BackingField
	float ___U3CanchorControlDeadzoneU3Ek__BackingField_22;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseController::<anchorControlOffAxisDeadzone>k__BackingField
	float ___U3CanchorControlOffAxisDeadzoneU3Ek__BackingField_23;
};

// tank
struct tank_t47FB66C52AAA5F596D92FD00F8948CF0A9870D95  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject[] tank::tankBullets
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___tankBullets_4;
	// UnityEngine.Transform tank::bulletSpawnPoint
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___bulletSpawnPoint_5;
	// UnityEngine.Transform[] tank::firstLine
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* ___firstLine_6;
	// System.Single tank::timer
	float ___timer_7;
	// System.Boolean tank::shootAttack
	bool ___shootAttack_8;
	// System.Boolean tank::doneSpawningLine
	bool ___doneSpawningLine_9;
	// System.Int32 tank::spawnRow
	int32_t ___spawnRow_10;
	// System.Int32 tank::startOfIndex
	int32_t ___startOfIndex_11;
	// System.Int32 tank::endOfIndex
	int32_t ___endOfIndex_12;
	// System.Single tank::tankSpeed
	float ___tankSpeed_13;
	// UnityEngine.Vector3 tank::destination
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___destination_14;
	// UnityEngine.Vector3 tank::leftXBound
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftXBound_15;
	// UnityEngine.Vector3 tank::rightXBound
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightXBound_16;
	// UnityEngine.Vector3 tank::preMoveToPlayerPos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___preMoveToPlayerPos_17;
	// System.Boolean tank::movingSideways
	bool ___movingSideways_18;
	// System.Boolean tank::moveTowardsPlayer
	bool ___moveTowardsPlayer_19;
	// System.Boolean tank::moveAwayPlayer
	bool ___moveAwayPlayer_20;
	// System.Single tank::timeUntilChargePlayer
	float ___timeUntilChargePlayer_21;
	// System.Int32 tank::health
	int32_t ___health_22;
	// System.Boolean tank::moveAttack
	bool ___moveAttack_23;
	// System.Boolean tank::switchToMoveAttackInProgress
	bool ___switchToMoveAttackInProgress_24;
	// UnityEngine.Vector3 tank::endPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___endPosition_25;
	// System.Boolean tank::movingToStartPosition
	bool ___movingToStartPosition_26;
	// UnityEngine.GameObject tank::explosion
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___explosion_27;
};

// trailer
struct trailer_tBCF57821A83158F03BE7057729DD3880F544BD69  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single trailer::speed
	float ___speed_4;
	// ShootRicket trailer::shootRicketScript
	ShootRicket_tEB742549214BCF01523A0ECC274C3EAC141234FE* ___shootRicketScript_5;
	// Dialog trailer::DialogScript
	Dialog_t1A3474C8E604C61E022BDF82747C68A6C1E11972* ___DialogScript_6;
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTargetCache
	bool ___m_RaycastTargetCache_11;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_12;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_13;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_14;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_15;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_16;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_19;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_20;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_23;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_24;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_25;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_26;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_21;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_22;
};

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074* ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35* ___m_CanvasGroupCache_19;
};

struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712_StaticFields
{
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_27;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_28;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_31;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_32;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_33;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_34;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_35;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_36;
};

// UnityEngine.UI.Slider
struct Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_FillRect_20;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_HandleRect_21;
	// UnityEngine.UI.Slider/Direction UnityEngine.UI.Slider::m_Direction
	int32_t ___m_Direction_22;
	// System.Single UnityEngine.UI.Slider::m_MinValue
	float ___m_MinValue_23;
	// System.Single UnityEngine.UI.Slider::m_MaxValue
	float ___m_MaxValue_24;
	// System.Boolean UnityEngine.UI.Slider::m_WholeNumbers
	bool ___m_WholeNumbers_25;
	// System.Single UnityEngine.UI.Slider::m_Value
	float ___m_Value_26;
	// UnityEngine.UI.Slider/SliderEvent UnityEngine.UI.Slider::m_OnValueChanged
	SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555* ___m_OnValueChanged_27;
	// UnityEngine.UI.Image UnityEngine.UI.Slider::m_FillImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___m_FillImage_28;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_FillTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_FillTransform_29;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillContainerRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_FillContainerRect_30;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_HandleTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_HandleTransform_31;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleContainerRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_HandleContainerRect_32;
	// UnityEngine.Vector2 UnityEngine.UI.Slider::m_Offset
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Offset_33;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.Slider::m_Tracker
	DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 ___m_Tracker_34;
	// System.Boolean UnityEngine.UI.Slider::m_DelayedUpdateVisuals
	bool ___m_DelayedUpdateVisuals_35;
};

// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// System.String TMPro.TMP_Text::m_text
	String_t* ___m_text_37;
	// System.Boolean TMPro.TMP_Text::m_IsTextBackingStringDirty
	bool ___m_IsTextBackingStringDirty_38;
	// TMPro.ITextPreprocessor TMPro.TMP_Text::m_TextPreprocessor
	RuntimeObject* ___m_TextPreprocessor_39;
	// System.Boolean TMPro.TMP_Text::m_isRightToLeft
	bool ___m_isRightToLeft_40;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_fontAsset_41;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_currentFontAsset_42;
	// System.Boolean TMPro.TMP_Text::m_isSDFShader
	bool ___m_isSDFShader_43;
	// UnityEngine.Material TMPro.TMP_Text::m_sharedMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_sharedMaterial_44;
	// UnityEngine.Material TMPro.TMP_Text::m_currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_currentMaterial_45;
	// System.Int32 TMPro.TMP_Text::m_currentMaterialIndex
	int32_t ___m_currentMaterialIndex_49;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontSharedMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontSharedMaterials_50;
	// UnityEngine.Material TMPro.TMP_Text::m_fontMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_fontMaterial_51;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontMaterials_52;
	// System.Boolean TMPro.TMP_Text::m_isMaterialDirty
	bool ___m_isMaterialDirty_53;
	// UnityEngine.Color32 TMPro.TMP_Text::m_fontColor32
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_fontColor32_54;
	// UnityEngine.Color TMPro.TMP_Text::m_fontColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_fontColor_55;
	// UnityEngine.Color32 TMPro.TMP_Text::m_underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_underlineColor_57;
	// UnityEngine.Color32 TMPro.TMP_Text::m_strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_strikethroughColor_58;
	// System.Boolean TMPro.TMP_Text::m_enableVertexGradient
	bool ___m_enableVertexGradient_59;
	// TMPro.ColorMode TMPro.TMP_Text::m_colorMode
	int32_t ___m_colorMode_60;
	// TMPro.VertexGradient TMPro.TMP_Text::m_fontColorGradient
	VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F ___m_fontColorGradient_61;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_fontColorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_fontColorGradientPreset_62;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_spriteAsset_63;
	// System.Boolean TMPro.TMP_Text::m_tintAllSprites
	bool ___m_tintAllSprites_64;
	// System.Boolean TMPro.TMP_Text::m_tintSprite
	bool ___m_tintSprite_65;
	// UnityEngine.Color32 TMPro.TMP_Text::m_spriteColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_spriteColor_66;
	// TMPro.TMP_StyleSheet TMPro.TMP_Text::m_StyleSheet
	TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859* ___m_StyleSheet_67;
	// TMPro.TMP_Style TMPro.TMP_Text::m_TextStyle
	TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C* ___m_TextStyle_68;
	// System.Int32 TMPro.TMP_Text::m_TextStyleHashCode
	int32_t ___m_TextStyleHashCode_69;
	// System.Boolean TMPro.TMP_Text::m_overrideHtmlColors
	bool ___m_overrideHtmlColors_70;
	// UnityEngine.Color32 TMPro.TMP_Text::m_faceColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_faceColor_71;
	// UnityEngine.Color32 TMPro.TMP_Text::m_outlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_outlineColor_72;
	// System.Single TMPro.TMP_Text::m_outlineWidth
	float ___m_outlineWidth_73;
	// System.Single TMPro.TMP_Text::m_fontSize
	float ___m_fontSize_74;
	// System.Single TMPro.TMP_Text::m_currentFontSize
	float ___m_currentFontSize_75;
	// System.Single TMPro.TMP_Text::m_fontSizeBase
	float ___m_fontSizeBase_76;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_sizeStack_77;
	// TMPro.FontWeight TMPro.TMP_Text::m_fontWeight
	int32_t ___m_fontWeight_78;
	// TMPro.FontWeight TMPro.TMP_Text::m_FontWeightInternal
	int32_t ___m_FontWeightInternal_79;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.TMP_Text::m_FontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___m_FontWeightStack_80;
	// System.Boolean TMPro.TMP_Text::m_enableAutoSizing
	bool ___m_enableAutoSizing_81;
	// System.Single TMPro.TMP_Text::m_maxFontSize
	float ___m_maxFontSize_82;
	// System.Single TMPro.TMP_Text::m_minFontSize
	float ___m_minFontSize_83;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeIterationCount
	int32_t ___m_AutoSizeIterationCount_84;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeMaxIterationCount
	int32_t ___m_AutoSizeMaxIterationCount_85;
	// System.Boolean TMPro.TMP_Text::m_IsAutoSizePointSizeSet
	bool ___m_IsAutoSizePointSizeSet_86;
	// System.Single TMPro.TMP_Text::m_fontSizeMin
	float ___m_fontSizeMin_87;
	// System.Single TMPro.TMP_Text::m_fontSizeMax
	float ___m_fontSizeMax_88;
	// TMPro.FontStyles TMPro.TMP_Text::m_fontStyle
	int32_t ___m_fontStyle_89;
	// TMPro.FontStyles TMPro.TMP_Text::m_FontStyleInternal
	int32_t ___m_FontStyleInternal_90;
	// TMPro.TMP_FontStyleStack TMPro.TMP_Text::m_fontStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___m_fontStyleStack_91;
	// System.Boolean TMPro.TMP_Text::m_isUsingBold
	bool ___m_isUsingBold_92;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_HorizontalAlignment
	int32_t ___m_HorizontalAlignment_93;
	// TMPro.VerticalAlignmentOptions TMPro.TMP_Text::m_VerticalAlignment
	int32_t ___m_VerticalAlignment_94;
	// TMPro.TextAlignmentOptions TMPro.TMP_Text::m_textAlignment
	int32_t ___m_textAlignment_95;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_lineJustification
	int32_t ___m_lineJustification_96;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.TMP_Text::m_lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___m_lineJustificationStack_97;
	// UnityEngine.Vector3[] TMPro.TMP_Text::m_textContainerLocalCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_textContainerLocalCorners_98;
	// System.Single TMPro.TMP_Text::m_characterSpacing
	float ___m_characterSpacing_99;
	// System.Single TMPro.TMP_Text::m_cSpacing
	float ___m_cSpacing_100;
	// System.Single TMPro.TMP_Text::m_monoSpacing
	float ___m_monoSpacing_101;
	// System.Single TMPro.TMP_Text::m_wordSpacing
	float ___m_wordSpacing_102;
	// System.Single TMPro.TMP_Text::m_lineSpacing
	float ___m_lineSpacing_103;
	// System.Single TMPro.TMP_Text::m_lineSpacingDelta
	float ___m_lineSpacingDelta_104;
	// System.Single TMPro.TMP_Text::m_lineHeight
	float ___m_lineHeight_105;
	// System.Boolean TMPro.TMP_Text::m_IsDrivenLineSpacing
	bool ___m_IsDrivenLineSpacing_106;
	// System.Single TMPro.TMP_Text::m_lineSpacingMax
	float ___m_lineSpacingMax_107;
	// System.Single TMPro.TMP_Text::m_paragraphSpacing
	float ___m_paragraphSpacing_108;
	// System.Single TMPro.TMP_Text::m_charWidthMaxAdj
	float ___m_charWidthMaxAdj_109;
	// System.Single TMPro.TMP_Text::m_charWidthAdjDelta
	float ___m_charWidthAdjDelta_110;
	// System.Boolean TMPro.TMP_Text::m_enableWordWrapping
	bool ___m_enableWordWrapping_111;
	// System.Boolean TMPro.TMP_Text::m_isCharacterWrappingEnabled
	bool ___m_isCharacterWrappingEnabled_112;
	// System.Boolean TMPro.TMP_Text::m_isNonBreakingSpace
	bool ___m_isNonBreakingSpace_113;
	// System.Boolean TMPro.TMP_Text::m_isIgnoringAlignment
	bool ___m_isIgnoringAlignment_114;
	// System.Single TMPro.TMP_Text::m_wordWrappingRatios
	float ___m_wordWrappingRatios_115;
	// TMPro.TextOverflowModes TMPro.TMP_Text::m_overflowMode
	int32_t ___m_overflowMode_116;
	// System.Int32 TMPro.TMP_Text::m_firstOverflowCharacterIndex
	int32_t ___m_firstOverflowCharacterIndex_117;
	// TMPro.TMP_Text TMPro.TMP_Text::m_linkedTextComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_linkedTextComponent_118;
	// TMPro.TMP_Text TMPro.TMP_Text::parentLinkedComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___parentLinkedComponent_119;
	// System.Boolean TMPro.TMP_Text::m_isTextTruncated
	bool ___m_isTextTruncated_120;
	// System.Boolean TMPro.TMP_Text::m_enableKerning
	bool ___m_enableKerning_121;
	// System.Single TMPro.TMP_Text::m_GlyphHorizontalAdvanceAdjustment
	float ___m_GlyphHorizontalAdvanceAdjustment_122;
	// System.Boolean TMPro.TMP_Text::m_enableExtraPadding
	bool ___m_enableExtraPadding_123;
	// System.Boolean TMPro.TMP_Text::checkPaddingRequired
	bool ___checkPaddingRequired_124;
	// System.Boolean TMPro.TMP_Text::m_isRichText
	bool ___m_isRichText_125;
	// System.Boolean TMPro.TMP_Text::m_parseCtrlCharacters
	bool ___m_parseCtrlCharacters_126;
	// System.Boolean TMPro.TMP_Text::m_isOverlay
	bool ___m_isOverlay_127;
	// System.Boolean TMPro.TMP_Text::m_isOrthographic
	bool ___m_isOrthographic_128;
	// System.Boolean TMPro.TMP_Text::m_isCullingEnabled
	bool ___m_isCullingEnabled_129;
	// System.Boolean TMPro.TMP_Text::m_isMaskingEnabled
	bool ___m_isMaskingEnabled_130;
	// System.Boolean TMPro.TMP_Text::isMaskUpdateRequired
	bool ___isMaskUpdateRequired_131;
	// System.Boolean TMPro.TMP_Text::m_ignoreCulling
	bool ___m_ignoreCulling_132;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_horizontalMapping
	int32_t ___m_horizontalMapping_133;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_verticalMapping
	int32_t ___m_verticalMapping_134;
	// System.Single TMPro.TMP_Text::m_uvLineOffset
	float ___m_uvLineOffset_135;
	// TMPro.TextRenderFlags TMPro.TMP_Text::m_renderMode
	int32_t ___m_renderMode_136;
	// TMPro.VertexSortingOrder TMPro.TMP_Text::m_geometrySortingOrder
	int32_t ___m_geometrySortingOrder_137;
	// System.Boolean TMPro.TMP_Text::m_IsTextObjectScaleStatic
	bool ___m_IsTextObjectScaleStatic_138;
	// System.Boolean TMPro.TMP_Text::m_VertexBufferAutoSizeReduction
	bool ___m_VertexBufferAutoSizeReduction_139;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacter
	int32_t ___m_firstVisibleCharacter_140;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleCharacters
	int32_t ___m_maxVisibleCharacters_141;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleWords
	int32_t ___m_maxVisibleWords_142;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleLines
	int32_t ___m_maxVisibleLines_143;
	// System.Boolean TMPro.TMP_Text::m_useMaxVisibleDescender
	bool ___m_useMaxVisibleDescender_144;
	// System.Int32 TMPro.TMP_Text::m_pageToDisplay
	int32_t ___m_pageToDisplay_145;
	// System.Boolean TMPro.TMP_Text::m_isNewPage
	bool ___m_isNewPage_146;
	// UnityEngine.Vector4 TMPro.TMP_Text::m_margin
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_margin_147;
	// System.Single TMPro.TMP_Text::m_marginLeft
	float ___m_marginLeft_148;
	// System.Single TMPro.TMP_Text::m_marginRight
	float ___m_marginRight_149;
	// System.Single TMPro.TMP_Text::m_marginWidth
	float ___m_marginWidth_150;
	// System.Single TMPro.TMP_Text::m_marginHeight
	float ___m_marginHeight_151;
	// System.Single TMPro.TMP_Text::m_width
	float ___m_width_152;
	// TMPro.TMP_TextInfo TMPro.TMP_Text::m_textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___m_textInfo_153;
	// System.Boolean TMPro.TMP_Text::m_havePropertiesChanged
	bool ___m_havePropertiesChanged_154;
	// System.Boolean TMPro.TMP_Text::m_isUsingLegacyAnimationComponent
	bool ___m_isUsingLegacyAnimationComponent_155;
	// UnityEngine.Transform TMPro.TMP_Text::m_transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_transform_156;
	// UnityEngine.RectTransform TMPro.TMP_Text::m_rectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_rectTransform_157;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousRectTransformSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousRectTransformSize_158;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousPivotPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousPivotPosition_159;
	// System.Boolean TMPro.TMP_Text::<autoSizeTextContainer>k__BackingField
	bool ___U3CautoSizeTextContainerU3Ek__BackingField_160;
	// System.Boolean TMPro.TMP_Text::m_autoSizeTextContainer
	bool ___m_autoSizeTextContainer_161;
	// UnityEngine.Mesh TMPro.TMP_Text::m_mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_mesh_162;
	// System.Boolean TMPro.TMP_Text::m_isVolumetricText
	bool ___m_isVolumetricText_163;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TMP_Text::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_166;
	// TMPro.TMP_SpriteAnimator TMPro.TMP_Text::m_spriteAnimator
	TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4* ___m_spriteAnimator_167;
	// System.Single TMPro.TMP_Text::m_flexibleHeight
	float ___m_flexibleHeight_168;
	// System.Single TMPro.TMP_Text::m_flexibleWidth
	float ___m_flexibleWidth_169;
	// System.Single TMPro.TMP_Text::m_minWidth
	float ___m_minWidth_170;
	// System.Single TMPro.TMP_Text::m_minHeight
	float ___m_minHeight_171;
	// System.Single TMPro.TMP_Text::m_maxWidth
	float ___m_maxWidth_172;
	// System.Single TMPro.TMP_Text::m_maxHeight
	float ___m_maxHeight_173;
	// UnityEngine.UI.LayoutElement TMPro.TMP_Text::m_LayoutElement
	LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A* ___m_LayoutElement_174;
	// System.Single TMPro.TMP_Text::m_preferredWidth
	float ___m_preferredWidth_175;
	// System.Single TMPro.TMP_Text::m_renderedWidth
	float ___m_renderedWidth_176;
	// System.Boolean TMPro.TMP_Text::m_isPreferredWidthDirty
	bool ___m_isPreferredWidthDirty_177;
	// System.Single TMPro.TMP_Text::m_preferredHeight
	float ___m_preferredHeight_178;
	// System.Single TMPro.TMP_Text::m_renderedHeight
	float ___m_renderedHeight_179;
	// System.Boolean TMPro.TMP_Text::m_isPreferredHeightDirty
	bool ___m_isPreferredHeightDirty_180;
	// System.Boolean TMPro.TMP_Text::m_isCalculatingPreferredValues
	bool ___m_isCalculatingPreferredValues_181;
	// System.Int32 TMPro.TMP_Text::m_layoutPriority
	int32_t ___m_layoutPriority_182;
	// System.Boolean TMPro.TMP_Text::m_isLayoutDirty
	bool ___m_isLayoutDirty_183;
	// System.Boolean TMPro.TMP_Text::m_isAwake
	bool ___m_isAwake_184;
	// System.Boolean TMPro.TMP_Text::m_isWaitingOnResourceLoad
	bool ___m_isWaitingOnResourceLoad_185;
	// TMPro.TMP_Text/TextInputSources TMPro.TMP_Text::m_inputSource
	int32_t ___m_inputSource_186;
	// System.Single TMPro.TMP_Text::m_fontScaleMultiplier
	float ___m_fontScaleMultiplier_187;
	// System.Single TMPro.TMP_Text::tag_LineIndent
	float ___tag_LineIndent_191;
	// System.Single TMPro.TMP_Text::tag_Indent
	float ___tag_Indent_192;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_indentStack_193;
	// System.Boolean TMPro.TMP_Text::tag_NoParsing
	bool ___tag_NoParsing_194;
	// System.Boolean TMPro.TMP_Text::m_isParsingText
	bool ___m_isParsingText_195;
	// UnityEngine.Matrix4x4 TMPro.TMP_Text::m_FXMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_FXMatrix_196;
	// System.Boolean TMPro.TMP_Text::m_isFXMatrixSet
	bool ___m_isFXMatrixSet_197;
	// TMPro.TMP_Text/UnicodeChar[] TMPro.TMP_Text::m_TextProcessingArray
	UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5* ___m_TextProcessingArray_198;
	// System.Int32 TMPro.TMP_Text::m_InternalTextProcessingArraySize
	int32_t ___m_InternalTextProcessingArraySize_199;
	// TMPro.TMP_CharacterInfo[] TMPro.TMP_Text::m_internalCharacterInfo
	TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* ___m_internalCharacterInfo_200;
	// System.Int32 TMPro.TMP_Text::m_totalCharacterCount
	int32_t ___m_totalCharacterCount_201;
	// System.Int32 TMPro.TMP_Text::m_characterCount
	int32_t ___m_characterCount_208;
	// System.Int32 TMPro.TMP_Text::m_firstCharacterOfLine
	int32_t ___m_firstCharacterOfLine_209;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacterOfLine
	int32_t ___m_firstVisibleCharacterOfLine_210;
	// System.Int32 TMPro.TMP_Text::m_lastCharacterOfLine
	int32_t ___m_lastCharacterOfLine_211;
	// System.Int32 TMPro.TMP_Text::m_lastVisibleCharacterOfLine
	int32_t ___m_lastVisibleCharacterOfLine_212;
	// System.Int32 TMPro.TMP_Text::m_lineNumber
	int32_t ___m_lineNumber_213;
	// System.Int32 TMPro.TMP_Text::m_lineVisibleCharacterCount
	int32_t ___m_lineVisibleCharacterCount_214;
	// System.Int32 TMPro.TMP_Text::m_pageNumber
	int32_t ___m_pageNumber_215;
	// System.Single TMPro.TMP_Text::m_PageAscender
	float ___m_PageAscender_216;
	// System.Single TMPro.TMP_Text::m_maxTextAscender
	float ___m_maxTextAscender_217;
	// System.Single TMPro.TMP_Text::m_maxCapHeight
	float ___m_maxCapHeight_218;
	// System.Single TMPro.TMP_Text::m_ElementAscender
	float ___m_ElementAscender_219;
	// System.Single TMPro.TMP_Text::m_ElementDescender
	float ___m_ElementDescender_220;
	// System.Single TMPro.TMP_Text::m_maxLineAscender
	float ___m_maxLineAscender_221;
	// System.Single TMPro.TMP_Text::m_maxLineDescender
	float ___m_maxLineDescender_222;
	// System.Single TMPro.TMP_Text::m_startOfLineAscender
	float ___m_startOfLineAscender_223;
	// System.Single TMPro.TMP_Text::m_startOfLineDescender
	float ___m_startOfLineDescender_224;
	// System.Single TMPro.TMP_Text::m_lineOffset
	float ___m_lineOffset_225;
	// TMPro.Extents TMPro.TMP_Text::m_meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___m_meshExtents_226;
	// UnityEngine.Color32 TMPro.TMP_Text::m_htmlColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_htmlColor_227;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_colorStack_228;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_underlineColorStack_229;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_strikethroughColorStack_230;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.TMP_Text::m_HighlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___m_HighlightStateStack_231;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_colorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_colorGradientPreset_232;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.TMP_Text::m_colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___m_colorGradientStack_233;
	// System.Boolean TMPro.TMP_Text::m_colorGradientPresetIsTinted
	bool ___m_colorGradientPresetIsTinted_234;
	// System.Single TMPro.TMP_Text::m_tabSpacing
	float ___m_tabSpacing_235;
	// System.Single TMPro.TMP_Text::m_spacing
	float ___m_spacing_236;
	// TMPro.TMP_TextProcessingStack`1<System.Int32>[] TMPro.TMP_Text::m_TextStyleStacks
	TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2* ___m_TextStyleStacks_237;
	// System.Int32 TMPro.TMP_Text::m_TextStyleStackDepth
	int32_t ___m_TextStyleStackDepth_238;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_ItalicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_ItalicAngleStack_239;
	// System.Int32 TMPro.TMP_Text::m_ItalicAngle
	int32_t ___m_ItalicAngle_240;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_actionStack_241;
	// System.Single TMPro.TMP_Text::m_padding
	float ___m_padding_242;
	// System.Single TMPro.TMP_Text::m_baselineOffset
	float ___m_baselineOffset_243;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_baselineOffsetStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_baselineOffsetStack_244;
	// System.Single TMPro.TMP_Text::m_xAdvance
	float ___m_xAdvance_245;
	// TMPro.TMP_TextElementType TMPro.TMP_Text::m_textElementType
	int32_t ___m_textElementType_246;
	// TMPro.TMP_TextElement TMPro.TMP_Text::m_cached_TextElement
	TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5* ___m_cached_TextElement_247;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Ellipsis
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Ellipsis_248;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Underline
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Underline_249;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_defaultSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_defaultSpriteAsset_250;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_currentSpriteAsset_251;
	// System.Int32 TMPro.TMP_Text::m_spriteCount
	int32_t ___m_spriteCount_252;
	// System.Int32 TMPro.TMP_Text::m_spriteIndex
	int32_t ___m_spriteIndex_253;
	// System.Int32 TMPro.TMP_Text::m_spriteAnimationID
	int32_t ___m_spriteAnimationID_254;
	// System.Boolean TMPro.TMP_Text::m_ignoreActiveState
	bool ___m_ignoreActiveState_257;
	// TMPro.TMP_Text/TextBackingContainer TMPro.TMP_Text::m_TextBackingArray
	TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 ___m_TextBackingArray_258;
	// System.Decimal[] TMPro.TMP_Text::k_Power
	DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615* ___k_Power_259;
};

struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_StaticFields
{
	// TMPro.MaterialReference[] TMPro.TMP_Text::m_materialReferences
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___m_materialReferences_46;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> TMPro.TMP_Text::m_materialReferenceIndexLookup
	Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ___m_materialReferenceIndexLookup_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.TMP_Text::m_materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___m_materialReferenceStack_48;
	// UnityEngine.Color32 TMPro.TMP_Text::s_colorWhite
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___s_colorWhite_56;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset> TMPro.TMP_Text::OnFontAssetRequest
	Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C* ___OnFontAssetRequest_164;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset> TMPro.TMP_Text::OnSpriteAssetRequest
	Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5* ___OnSpriteAssetRequest_165;
	// System.Char[] TMPro.TMP_Text::m_htmlTag
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_htmlTag_188;
	// TMPro.RichTextTagAttribute[] TMPro.TMP_Text::m_xmlAttribute
	RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D* ___m_xmlAttribute_189;
	// System.Single[] TMPro.TMP_Text::m_attributeParameterValues
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___m_attributeParameterValues_190;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedWordWrapState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedWordWrapState_202;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLineState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLineState_203;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedEllipsisState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedEllipsisState_204;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLastValidState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLastValidState_205;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedSoftLineBreakState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedSoftLineBreakState_206;
	// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState> TMPro.TMP_Text::m_EllipsisInsertionCandidateStack
	TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F ___m_EllipsisInsertionCandidateStack_207;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_ParseTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseTextMarker_255;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_InsertNewLineMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_InsertNewLineMarker_256;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargePositiveVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargePositiveVector2_260;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargeNegativeVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargeNegativeVector2_261;
	// System.Single TMPro.TMP_Text::k_LargePositiveFloat
	float ___k_LargePositiveFloat_262;
	// System.Single TMPro.TMP_Text::k_LargeNegativeFloat
	float ___k_LargeNegativeFloat_263;
	// System.Int32 TMPro.TMP_Text::k_LargePositiveInt
	int32_t ___k_LargePositiveInt_264;
	// System.Int32 TMPro.TMP_Text::k_LargeNegativeInt
	int32_t ___k_LargeNegativeInt_265;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF  : public RuntimeArray
{
	ALIGN_FIELD (8) GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* m_Items[1];

	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Transform[]
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24  : public RuntimeArray
{
	ALIGN_FIELD (8) Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* m_Items[1];

	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Renderer[]
struct RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A  : public RuntimeArray
{
	ALIGN_FIELD (8) Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* m_Items[1];

	inline Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D  : public RuntimeArray
{
	ALIGN_FIELD (8) Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* m_Items[1];

	inline Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// TValue UnityEngine.InputSystem.InputAction::ReadValue<UnityEngine.Vector2>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 InputAction_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m8D02BA85303ABD48D9963369E106B0C83A393FBF_gshared (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// TValue UnityEngine.InputSystem.InputAction::ReadValue<System.Single>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B_gshared (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T[] UnityEngine.Component::GetComponentsInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Component_GetComponentsInChildren_TisRuntimeObject_m1F5B6FC0689B07D4FAAC0C605D9B2933A9B32543_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddRange_m1F76B300133150E6046C5FED00E88B5DE0A02E17_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___collection0, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T[] UnityEngine.Component::GetComponents<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Component_GetComponents_TisRuntimeObject_m35447B0B07F9C06A1AF846E482EC6FEB09D2436F_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;

// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.InputActionProperty::get_action()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* InputActionProperty_get_action_mABF2197D9CC6586E5DFB0481CF9C1B2586F41A47 (InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD* __this, const RuntimeMethod* method) ;
// TValue UnityEngine.InputSystem.InputAction::ReadValue<UnityEngine.Vector2>()
inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 InputAction_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m8D02BA85303ABD48D9963369E106B0C83A393FBF (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, const RuntimeMethod* method)
{
	return ((  Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 (*) (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD*, const RuntimeMethod*))InputAction_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m8D02BA85303ABD48D9963369E106B0C83A393FBF_gshared)(__this, method);
}
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.CollisionFlags UnityEngine.CharacterController::Move(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CharacterController_Move_mE3F7AC1B4A2D6955980811C088B68ED3A31D2DA4 (CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___motion0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetFloat_m10C78733FAFC7AFEDBDACC48B7C66D3A35A0A7FE (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___name0, float ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::Play(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_Play_m0F6A9F84B2E256E644D56C34A7A9BD622CB00FF9 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___stateName0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::StopPlayback()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_StopPlayback_mCC18E6452A6FC5F7BA622F2A7619848CF875B8D0 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Stop_m318F17F17A147C77FF6E0A5A7A6BE057DB90F537 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSystem_Play_mD943E601BFE16CB9BB5D1F5E6AED5C36F5F11EF5 (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSystem_Stop_m2D8D4967496EF0F5BFEF679C49A9E65A9646C423 (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::MoveTowards(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_MoveTowards_m0363264647799F3173AC37F8E819F98298249B08_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___current0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___target1, float ___maxDistanceDelta2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector3::op_Equality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Equality_mCDCBB8D2EDC3D3BF20F31A25ACB34705D352B479_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::LookAt(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_LookAt_mA8567593181FD78BBDC2AF29AD99F93BDB2976B2 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___target0, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::SetPositionAndRotation(UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetPositionAndRotation_m418859BF59086EEAA084FFD6F258A43FAB408F5A (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation1, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.BoxCollider>()
inline BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* Component_GetComponent_TisBoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23_m59698092F1230C6FB7F40D0F58F643A931A732D7 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.Collider::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collider_set_enabled_m8D5C3B5047592D227A52560FC9723D176E209F70 (Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, bool ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(System.Single,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline (float ___d0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_m2A308205498AFEEA3DF784B1C86E4F7C126CA2EE (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___eulers0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::get_eulerAngles()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_down()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_down_mF62B2AE7C5AC31EAC9CB62797C7190C90A7A8599_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetBool(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___name0, bool ___value1, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Component::CompareTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Component_CompareTag_mE6F8897E84F12DF12D302FFC4D58204D51096FC5 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, String_t* ___tag0, const RuntimeMethod* method) ;
// System.Void PickupTruckShockwave::Hit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PickupTruckShockwave_Hit_m8767A46C37988C85ED83C99BC40809A0995C99FA (PickupTruckShockwave_tDD1BEEB515EEF99045636F815F6E0A7D1C203505* __this, const RuntimeMethod* method) ;
// System.Void Truck::Hit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Truck_Hit_mD5EB53055E3D18A8099216A80F29E4081B8F940B (Truck_tC25075F97163DDBB2CD8FED02BFCA45D53F94454* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<PlayerHealth>()
inline PlayerHealth_tE7421738BA48E6A6C90760303B818641DDFAE263* Component_GetComponent_TisPlayerHealth_tE7421738BA48E6A6C90760303B818641DDFAE263_mF6FA39268341969F2360DEF6F96AE7E0333F13DB (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  PlayerHealth_tE7421738BA48E6A6C90760303B818641DDFAE263* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void PlayerHealth::Hit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerHealth_Hit_mB2F7F292A4E8B3309B884569BFA457CB68FC6944 (PlayerHealth_tE7421738BA48E6A6C90760303B818641DDFAE263* __this, const RuntimeMethod* method) ;
// System.Void Dialog::PlayDialog(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dialog_PlayDialog_m85FEFB4AA86923BB70879607AAC1E773A1B03351 (Dialog_t1A3474C8E604C61E022BDF82747C68A6C1E11972* __this, int32_t ___audioClipsIndex0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::Invoke(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, String_t* ___methodName0, float ___time1, const RuntimeMethod* method) ;
// System.Void FirstEnemyWaves::MoveBossPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirstEnemyWaves_MoveBossPosition_m3CCF5A2148DC3FA49494DE429598E6C42F4652CD (FirstEnemyWaves_tE6ACB0E7BDFB9A613D5BE71C47A36DC1BD18194C* __this, const RuntimeMethod* method) ;
// System.Void GameEvents::SpawnFirstEnemy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEvents_SpawnFirstEnemy_m66FC71185A7505F1E273729E4170B62A8AB361D0 (GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0* __this, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.Void TMPro.TMP_Text::SetText(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TMP_Text_SetText_m848189C290727009A95A00E432B66DFB2F2C3454 (TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* __this, String_t* ___sourceText0, bool ___syncTextInputBox1, const RuntimeMethod* method) ;
// System.Collections.IEnumerator MotorcycleTakeoff::MoveRoads()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MotorcycleTakeoff_MoveRoads_m132F301873176ACF502AE07B106473593E30AFAE (MotorcycleTakeoff_tAC47DC8F5A468CF6B428AB65A25CD2FEC94BBE32* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.AudioSource::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioSource_get_isPlaying_mC203303F2F7146B2C056CB47B9391463FDF408FC (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// System.Void MotorcycleTakeoff/<MoveRoads>d__12::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMoveRoadsU3Ed__12__ctor_m86566B0A77DB1A9BDFD775CB0277A260EF5C72A5 (U3CMoveRoadsU3Ed__12_t4A3422038C6E22696DD48D96A9A21C36B8154832* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* __this, float ___seconds0, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Void OculusMenu::Pause(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusMenu_Pause_m4D897D2EBB4943C3178074B37E4F3BD49A55FFDD (OculusMenu_t92A4173A3172F5126A52293139863A0485C88FFE* __this, bool ___pauseStatus0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Time::set_timeScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331 (float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioListener::set_pause(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioListener_set_pause_m4D52C9FFC6B10B0F281329FA0FB3CE2C64894F33 (bool ___value0, const RuntimeMethod* method) ;
// TValue UnityEngine.InputSystem.InputAction::ReadValue<System.Single>()
inline float InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, const RuntimeMethod* method)
{
	return ((  float (*) (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD*, const RuntimeMethod*))InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B_gshared)(__this, method);
}
// System.Void PauseMenu::PausedMenu()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseMenu_PausedMenu_m0DECC4FEB0F6FA452A38DED9F8F8D1EBECB4BFC6 (PauseMenu_t36539DEACE8377BD498A235C80769301799E1985* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Application::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_Quit_mE304382DB9A6455C2A474C8F364C7387F37E9281 (const RuntimeMethod* method) ;
// UnityEngine.SceneManagement.Scene UnityEngine.SceneManagement.SceneManager::GetActiveScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_tA1DC762B79745EB5140F054C884855B922318356 SceneManager_GetActiveScene_m0B320EC4302F51A71495D1CCD1A0FF9C2ED1FDC8 (const RuntimeMethod* method) ;
// System.String UnityEngine.SceneManagement.Scene::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Scene_get_name_m3C818DFA663E159274DAD823B780C7616C5E2A8C (Scene_tA1DC762B79745EB5140F054C884855B922318356* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E (String_t* ___sceneName0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GameObject::get_activeSelf()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void TakeDownBoss::SlideIntoBoss()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TakeDownBoss_SlideIntoBoss_m34BCB3284D332C6BF58BCEFE3FFFC385233D68EB (TakeDownBoss_tADD32F2E240D31F8ED81489EF0B78769AA5D4B6B* __this, const RuntimeMethod* method) ;
// System.Void TakeDownBoss::MoveBoss1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TakeDownBoss_MoveBoss1_m41005F84F722DC657C4B82F1F05F2B9D383B5C7B (TakeDownBoss_tADD32F2E240D31F8ED81489EF0B78769AA5D4B6B* __this, const RuntimeMethod* method) ;
// System.Void TakeDownBoss::MoveBoss2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TakeDownBoss_MoveBoss2_mA1EDFAEDE8289B333DDA22F146B265B83E362648 (TakeDownBoss_tADD32F2E240D31F8ED81489EF0B78769AA5D4B6B* __this, const RuntimeMethod* method) ;
// System.Void TakeDownBoss::ChangeRoadSpeed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TakeDownBoss_ChangeRoadSpeed_m38663AACAC1CC123FAD6062A4EBF753ECF62007C (TakeDownBoss_tADD32F2E240D31F8ED81489EF0B78769AA5D4B6B* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<MoveRoad>()
inline MoveRoad_t74517ABB7841065BF051268E60421CE6BF92B857* GameObject_GetComponent_TisMoveRoad_t74517ABB7841065BF051268E60421CE6BF92B857_m968F0054483460BC8E3B8D96D3CE5FDEACF3D747 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  MoveRoad_t74517ABB7841065BF051268E60421CE6BF92B857* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494 (float ___minInclusive0, float ___maxInclusive1, const RuntimeMethod* method) ;
// System.Void tank::moveToStartingPositiob()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tank_moveToStartingPositiob_mA6A33E866CA9D41D6CC73927BFA50D312B4801FC (tank_t47FB66C52AAA5F596D92FD00F8948CF0A9870D95* __this, const RuntimeMethod* method) ;
// System.Void tank::spawnFirstLine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tank_spawnFirstLine_mA7E82981AF42EE36E23B6A37B7C0DCFEF059F791 (tank_t47FB66C52AAA5F596D92FD00F8948CF0A9870D95* __this, const RuntimeMethod* method) ;
// System.Void tank::switchToMoveAttack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tank_switchToMoveAttack_m875A5F8086FEA1DB2D7B3FA93800B1B86BD7A216 (tank_t47FB66C52AAA5F596D92FD00F8948CF0A9870D95* __this, const RuntimeMethod* method) ;
// System.Void tank::TankMoving()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tank_TankMoving_m81EBD7DDCEF566FB557FD03FE32CA6629D2A226B (tank_t47FB66C52AAA5F596D92FD00F8948CF0A9870D95* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<TankBullet>()
inline TankBullet_t5BB5DC60FCD23BF60489A4772CC4678400F0F7AA* GameObject_GetComponent_TisTankBullet_t5BB5DC60FCD23BF60489A4772CC4678400F0F7AA_m6AC26BF562278ABECCC5A0D04F030A21C463C358 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  TankBullet_t5BB5DC60FCD23BF60489A4772CC4678400F0F7AA* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.String UnityEngine.Component::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Component_get_tag_m7561A81116CAB82B8A459E934662BFC2039FB7EF (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Void tank::Hit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tank_Hit_m5082DBA5945880A4E85DB01331686363BA7710A0 (tank_t47FB66C52AAA5F596D92FD00F8948CF0A9870D95* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_back()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_back_mCA5A84170E8DE5CE38C0551B4CCAD647BF215E57_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Translate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Translate_m018D015E89C8CB743C54A21B4A1C5202EBF6297A (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___translation0, const RuntimeMethod* method) ;
// System.Void TankEnemy::moveToStartingPositiob()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TankEnemy_moveToStartingPositiob_mA106C668D6E4A486686785A19467A31A187BB48A (TankEnemy_t2BA2128FB51203FB3CB6466ACB4E0B0EB4ECDF25* __this, const RuntimeMethod* method) ;
// System.Void TankEnemy::ShootingAttack1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TankEnemy_ShootingAttack1_m8D7F32635105736C39AE0921CB335848D88D9495 (TankEnemy_t2BA2128FB51203FB3CB6466ACB4E0B0EB4ECDF25* __this, const RuntimeMethod* method) ;
// System.Void TankEnemy::ShootingAttack2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TankEnemy_ShootingAttack2_mAC2E71A8D987662C19540A0F3E9DADEA04E06D1A (TankEnemy_t2BA2128FB51203FB3CB6466ACB4E0B0EB4ECDF25* __this, const RuntimeMethod* method) ;
// System.Void TankEnemy::RocketAttack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TankEnemy_RocketAttack_m7857F9C5D07201405930130199FE33B4B454CA0E (TankEnemy_t2BA2128FB51203FB3CB6466ACB4E0B0EB4ECDF25* __this, const RuntimeMethod* method) ;
// System.Void TankEnemy::ShootingAttack3()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TankEnemy_ShootingAttack3_mBB0CE41560E9038CB16AFA9FEFAAA0C7EBBBD2EB (TankEnemy_t2BA2128FB51203FB3CB6466ACB4E0B0EB4ECDF25* __this, const RuntimeMethod* method) ;
// System.Void TankEnemy::ShootingAttack4()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TankEnemy_ShootingAttack4_mC5D44BF16A2D54FC7DF58323F4A54717BB4F1F98 (TankEnemy_t2BA2128FB51203FB3CB6466ACB4E0B0EB4ECDF25* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_eulerAngles(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_eulerAngles_m9F0BC484A7915A51FAB87230644229B75BACA004 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_eulerAngles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// System.Void TankEnemy::SpawnBullet()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TankEnemy_SpawnBullet_m5B55757CBEE7CC48511A7FC38844B44B5BAB0765 (TankEnemy_t2BA2128FB51203FB3CB6466ACB4E0B0EB4ECDF25* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68 (int32_t ___minInclusive0, int32_t ___maxExclusive1, const RuntimeMethod* method) ;
// System.Void TankEnemy::Hit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TankEnemy_Hit_m2EF05D129D8456FA3915451F686F1B0B18978047 (TankEnemy_t2BA2128FB51203FB3CB6466ACB4E0B0EB4ECDF25* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_left()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_left_m8C1116485A9E689760AEE1142F5977852278B7E1_inline (const RuntimeMethod* method) ;
// T[] UnityEngine.Component::GetComponentsInChildren<UnityEngine.Renderer>()
inline RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* Component_GetComponentsInChildren_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m35AC34F858BD2F34770712CD020AA0518D9409C7 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_m1F5B6FC0689B07D4FAAC0C605D9B2933A9B32543_gshared)(__this, method);
}
// UnityEngine.Material[] UnityEngine.Renderer::get_materials()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* Renderer_get_materials_m43D33328432700524EAEAB093C67AE5689976118 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Material>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
inline void List_1_AddRange_mACF0CBFB5107412F825BB12F5FC93699031073AA (List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B* __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B*, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_m1F76B300133150E6046C5FED00E88B5DE0A02E17_gshared)(__this, ___collection0, method);
}
// System.Void DissolveExample.DissolveChilds::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DissolveChilds_Start_m9A68E8F17141B80CE6DE9AE1CA8EF67EFF2C39EE (DissolveChilds_tC16822F79C07B08A6B7D228996B7C0401DC4A43B* __this, const RuntimeMethod* method) ;
// System.Void DissolveExample.DissolveChilds::SetValue(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DissolveChilds_SetValue_mEC8995E07CAE20F41B86FD38648CE5883EEE46EE (DissolveChilds_tC16822F79C07B08A6B7D228996B7C0401DC4A43B* __this, float ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B (const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::PingPong(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_PingPong_mB1D6A10F386CE1EEA99DB69486DDA6DA531D799D_inline (float ___t0, float ___length1, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.Material>::get_Item(System.Int32)
inline Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* List_1_get_Item_m70F5CFC2DEA9332B78C5ADC0EE1CE1B7465B1456 (List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* (*) (List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Void UnityEngine.Material::SetFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___name0, float ___value1, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Material>::get_Count()
inline int32_t List_1_get_Count_m48BBB83C5F748E6E6FF0731C3682092DEA6A7173_inline (List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Material>::.ctor()
inline void List_1__ctor_m38500C20418699AEC04B1946434E06EC96FB4B1C (List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// T[] UnityEngine.Component::GetComponents<UnityEngine.Renderer>()
inline RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* Component_GetComponents_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC739FB09ACDAADE9300E9D1FDBF591D2022B1963 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponents_TisRuntimeObject_m35447B0B07F9C06A1AF846E482EC6FEB09D2436F_gshared)(__this, method);
}
// System.Void DissolveExample.DissolveOffest::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DissolveOffest_Start_mD3D37F15EDD7A6FDF9D8B91B20B4DDF278C637B9 (DissolveOffest_t58BE2EF3E07A9135019B79095490CEF133FBE2A1* __this, const RuntimeMethod* method) ;
// System.Void DissolveExample.DissolveOffest::SetValue(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DissolveOffest_SetValue_m584529CED1F9B399AB7BEF9FE5A7936F1532B98C (DissolveOffest_t58BE2EF3E07A9135019B79095490CEF133FBE2A1* __this, float ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2 (int32_t ___key0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector4::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetVector(System.String,UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___name0, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___value1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_right()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_m35B44707FE16FF8015D519D8C162C0B4A85D6D1F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___axis0, float ___angle1, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Renderer>()
inline Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.Vector4 UnityEngine.Material::GetVector(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Material_GetVector_mA2011D4DA2CC58003AE90DBF0802CF5EE31B014D (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___name0, const RuntimeMethod* method) ;
// UnityEngine.Vector4 UnityEngine.Vector4::op_Addition(UnityEngine.Vector4,UnityEngine.Vector4)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_op_Addition_m471A0C9B30316933F8CE430F17A7F8806ECA3EB9_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___a0, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___b1, const RuntimeMethod* method) ;
// System.Char MA_Toolbox.Utils.MA_StringUtils::RandomAlphabetChar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar MA_StringUtils_RandomAlphabetChar_m6EF686DB1FC70797DD6A2D7EE144B187CC31B96E (const RuntimeMethod* method) ;
// System.String System.Char::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Char_ToString_m2A308731F9577C06AF3C0901234E2EAC8327410C (Il2CppChar* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___index0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::Internal_ToEulerRad(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_Internal_ToEulerRad_m5BD0EEC543120C320DC77FCCDFD2CE2E6BD3F1A8 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::Internal_MakePositive(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_Internal_MakePositive_m73E2D01920CB0DFE661A55022C129E8617F0C9A8 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Repeat(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Repeat_m6F1560A163481BB311D685294E1B463C3E4EB3BA_inline (float ___t0, float ___length1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MoveMotercycle::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveMotercycle_Update_mEA50AB9865B8ADE5214CD48DC740DBE743DDF6A2 (MoveMotercycle_t74DD318610089E92DB3704A7CD3807583741019C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputAction_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m8D02BA85303ABD48D9963369E106B0C83A393FBF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA1B3A4AFA5858091E5AF1C62D06F4B9A2048469A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDB8363CFEB8377FB94C68434E9FDBD34E3E0985C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9069C149DC47D93EE551A25A091EE74D6D03702);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// Vector2 xAxisValue = moveStick.action.ReadValue<Vector2>();
		InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD* L_0 = (&__this->___moveStick_5);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_1;
		L_1 = InputActionProperty_get_action_mABF2197D9CC6586E5DFB0481CF9C1B2586F41A47(L_0, NULL);
		NullCheck(L_1);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = InputAction_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m8D02BA85303ABD48D9963369E106B0C83A393FBF(L_1, InputAction_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m8D02BA85303ABD48D9963369E106B0C83A393FBF_RuntimeMethod_var);
		V_0 = L_2;
		// if (canMove)
		bool L_3 = __this->___canMove_9;
		if (!L_3)
		{
			goto IL_0068;
		}
	}
	{
		// Vector3 move = new Vector3(xAxisValue.x, 0, 0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = V_0;
		float L_5 = L_4.___x_0;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_1), L_5, (0.0f), (0.0f), NULL);
		// controller.Move(move * Time.deltaTime * playerSpeed);
		CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* L_6 = __this->___controller_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_1;
		float L_8;
		L_8 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_7, L_8, NULL);
		float L_10 = __this->___playerSpeed_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_9, L_10, NULL);
		NullCheck(L_6);
		int32_t L_12;
		L_12 = CharacterController_Move_mE3F7AC1B4A2D6955980811C088B68ED3A31D2DA4(L_6, L_11, NULL);
		// motorcycleAnimator.SetFloat("Move Stick", xAxisValue.x);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_13 = __this->___motorcycleAnimator_7;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14 = V_0;
		float L_15 = L_14.___x_0;
		NullCheck(L_13);
		Animator_SetFloat_m10C78733FAFC7AFEDBDACC48B7C66D3A35A0A7FE(L_13, _stringLiteralDB8363CFEB8377FB94C68434E9FDBD34E3E0985C, L_15, NULL);
	}

IL_0068:
	{
		// if (xAxisValue.y < -.9 && !sliding)
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16 = V_0;
		float L_17 = L_16.___y_1;
		if ((!(((double)((double)L_17)) < ((double)(-0.90000000000000002)))))
		{
			goto IL_00c7;
		}
	}
	{
		bool L_18 = __this->___sliding_10;
		if (L_18)
		{
			goto IL_00c7;
		}
	}
	{
		// canMove = false;
		__this->___canMove_9 = (bool)0;
		// sliding = true;
		__this->___sliding_10 = (bool)1;
		// motorcycleAnimator.Play("Motorcycle Slide");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_19 = __this->___motorcycleAnimator_7;
		NullCheck(L_19);
		Animator_Play_m0F6A9F84B2E256E644D56C34A7A9BD622CB00FF9(L_19, _stringLiteralA1B3A4AFA5858091E5AF1C62D06F4B9A2048469A, NULL);
		// cameraOffset.Play("Sliding");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_20 = __this->___cameraOffset_8;
		NullCheck(L_20);
		Animator_Play_m0F6A9F84B2E256E644D56C34A7A9BD622CB00FF9(L_20, _stringLiteralF9069C149DC47D93EE551A25A091EE74D6D03702, NULL);
		// motorcycleGunScript.canShoot = false;
		MotorcycleGun_t85CAF3DA6871B6EE5AD5F24F587E7719CF169A1F* L_21 = __this->___motorcycleGunScript_12;
		NullCheck(L_21);
		L_21->___canShoot_16 = (bool)0;
		// slidingAudio.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_22 = __this->___slidingAudio_13;
		NullCheck(L_22);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_22, NULL);
	}

IL_00c7:
	{
		// }
		return;
	}
}
// System.Void MoveMotercycle::FinishedSliding()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveMotercycle_FinishedSliding_mA2A274877997B219EE6BD41906BBAAAD14B16F6F (MoveMotercycle_t74DD318610089E92DB3704A7CD3807583741019C* __this, const RuntimeMethod* method) 
{
	{
		// motorcycleAnimator.StopPlayback();
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = __this->___motorcycleAnimator_7;
		NullCheck(L_0);
		Animator_StopPlayback_mCC18E6452A6FC5F7BA622F2A7619848CF875B8D0(L_0, NULL);
		// canMove = true;
		__this->___canMove_9 = (bool)1;
		// sliding = false;
		__this->___sliding_10 = (bool)0;
		// motorcycleGunScript.canShoot = true;
		MotorcycleGun_t85CAF3DA6871B6EE5AD5F24F587E7719CF169A1F* L_1 = __this->___motorcycleGunScript_12;
		NullCheck(L_1);
		L_1->___canShoot_16 = (bool)1;
		// slidingAudio.Stop();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_2 = __this->___slidingAudio_13;
		NullCheck(L_2);
		AudioSource_Stop_m318F17F17A147C77FF6E0A5A7A6BE057DB90F537(L_2, NULL);
		// }
		return;
	}
}
// System.Void MoveMotercycle::PlaySparks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveMotercycle_PlaySparks_m5338FC25D1D86838214B73D76D9D38DA14FA8397 (MoveMotercycle_t74DD318610089E92DB3704A7CD3807583741019C* __this, const RuntimeMethod* method) 
{
	{
		// sparks.Play();
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_0 = __this->___sparks_11;
		NullCheck(L_0);
		ParticleSystem_Play_mD943E601BFE16CB9BB5D1F5E6AED5C36F5F11EF5(L_0, NULL);
		// }
		return;
	}
}
// System.Void MoveMotercycle::StopSparks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveMotercycle_StopSparks_mEEE18CE31CDA37042A1321E458B7F19D74457433 (MoveMotercycle_t74DD318610089E92DB3704A7CD3807583741019C* __this, const RuntimeMethod* method) 
{
	{
		// sparks.Stop();
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_0 = __this->___sparks_11;
		NullCheck(L_0);
		ParticleSystem_Stop_m2D8D4967496EF0F5BFEF679C49A9E65A9646C423(L_0, NULL);
		// }
		return;
	}
}
// System.Void MoveMotercycle::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveMotercycle__ctor_m47715C81DC249850DBE286212101409C4E88592A (MoveMotercycle_t74DD318610089E92DB3704A7CD3807583741019C* __this, const RuntimeMethod* method) 
{
	{
		// public float playerSpeed = 5.0f;
		__this->___playerSpeed_6 = (5.0f);
		// private bool canMove = true;
		__this->___canMove_9 = (bool)1;
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
// System.Void TruckEnemy::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TruckEnemy_Update_m6EB6DF186BA2A86376B9C68101BB7A7C2D567335 (TruckEnemy_t5A18267E64F9717056134EAC0BFEADD9957507A5* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// timer += Time.deltaTime;
		float L_0 = __this->___timer_6;
		float L_1;
		L_1 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___timer_6 = ((float)il2cpp_codegen_add(L_0, L_1));
		// var step = speed * Time.deltaTime;
		float L_2 = __this->___speed_8;
		float L_3;
		L_3 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		V_0 = ((float)il2cpp_codegen_multiply(L_2, L_3));
		// shootTarget.position = Vector3.MoveTowards(shootTarget.position, moveToPosition, step);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = __this->___shootTarget_7;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = __this->___shootTarget_7;
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = __this->___moveToPosition_11;
		float L_8 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_MoveTowards_m0363264647799F3173AC37F8E819F98298249B08_inline(L_6, L_7, L_8, NULL);
		NullCheck(L_4);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_4, L_9, NULL);
		// if (Vector3.Distance(shootTarget.position, moveToPosition) < 0.001f)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10 = __this->___shootTarget_7;
		NullCheck(L_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_10, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = __this->___moveToPosition_11;
		float L_13;
		L_13 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_11, L_12, NULL);
		if ((!(((float)L_13) < ((float)(0.00100000005f)))))
		{
			goto IL_008b;
		}
	}
	{
		// if (moveToPosition == position1)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = __this->___moveToPosition_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = __this->___position1_9;
		bool L_16;
		L_16 = Vector3_op_Equality_mCDCBB8D2EDC3D3BF20F31A25ACB34705D352B479_inline(L_14, L_15, NULL);
		if (!L_16)
		{
			goto IL_007f;
		}
	}
	{
		// moveToPosition = position2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = __this->___position2_10;
		__this->___moveToPosition_11 = L_17;
		goto IL_008b;
	}

IL_007f:
	{
		// moveToPosition = position1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = __this->___position1_9;
		__this->___moveToPosition_11 = L_18;
	}

IL_008b:
	{
		// bulletSpawnPoint.transform.LookAt(shootTarget);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19 = __this->___bulletSpawnPoint_5;
		NullCheck(L_19);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20;
		L_20 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_19, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21 = __this->___shootTarget_7;
		NullCheck(L_20);
		Transform_LookAt_mA8567593181FD78BBDC2AF29AD99F93BDB2976B2(L_20, L_21, NULL);
		// if (timer >= .25f)
		float L_22 = __this->___timer_6;
		if ((!(((float)L_22) >= ((float)(0.25f)))))
		{
			goto IL_011e;
		}
	}
	{
		// bullets[bulletsIndex].transform.SetPositionAndRotation(bulletSpawnPoint.position, bulletSpawnPoint.rotation);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_23 = __this->___bullets_12;
		int32_t L_24 = __this->___bulletsIndex_13;
		NullCheck(L_23);
		int32_t L_25 = L_24;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_26 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		NullCheck(L_26);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27;
		L_27 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_26, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_28 = __this->___bulletSpawnPoint_5;
		NullCheck(L_28);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		L_29 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_28, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_30 = __this->___bulletSpawnPoint_5;
		NullCheck(L_30);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_31;
		L_31 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_30, NULL);
		NullCheck(L_27);
		Transform_SetPositionAndRotation_m418859BF59086EEAA084FFD6F258A43FAB408F5A(L_27, L_29, L_31, NULL);
		// bullets[bulletsIndex].SetActive(true);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_32 = __this->___bullets_12;
		int32_t L_33 = __this->___bulletsIndex_13;
		NullCheck(L_32);
		int32_t L_34 = L_33;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_35 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		NullCheck(L_35);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_35, (bool)1, NULL);
		// bulletsIndex++;
		int32_t L_36 = __this->___bulletsIndex_13;
		__this->___bulletsIndex_13 = ((int32_t)il2cpp_codegen_add(L_36, 1));
		// if (bulletsIndex >= bullets.Length)
		int32_t L_37 = __this->___bulletsIndex_13;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_38 = __this->___bullets_12;
		NullCheck(L_38);
		if ((((int32_t)L_37) < ((int32_t)((int32_t)(((RuntimeArray*)L_38)->max_length)))))
		{
			goto IL_0113;
		}
	}
	{
		// bulletsIndex = 0;
		__this->___bulletsIndex_13 = 0;
	}

IL_0113:
	{
		// timer = 0;
		__this->___timer_6 = (0.0f);
	}

IL_011e:
	{
		// }
		return;
	}
}
// System.Void TruckEnemy::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TruckEnemy__ctor_m00546B3D294150F6D15D3719D4E7D60043A95492 (TruckEnemy_t5A18267E64F9717056134EAC0BFEADD9957507A5* __this, const RuntimeMethod* method) 
{
	{
		// private Vector3 position1 = new(3, .47f, -35.64f);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_0), (3.0f), (0.469999999f), (-35.6399994f), /*hidden argument*/NULL);
		__this->___position1_9 = L_0;
		// private Vector3 position2 = new(30, .47f, -35.64f);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_1), (30.0f), (0.469999999f), (-35.6399994f), /*hidden argument*/NULL);
		__this->___position2_10 = L_1;
		// private Vector3 moveToPosition = new(3, .47f, -35.64f);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_2), (3.0f), (0.469999999f), (-35.6399994f), /*hidden argument*/NULL);
		__this->___moveToPosition_11 = L_2;
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
// System.Void PickupTruckMove::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PickupTruckMove_OnEnable_mBB7906F253CC54157D6FC72F42DC2C6F65F737F6 (PickupTruckMove_t192C398DB3DB07F42AD05CCBFD5595E58ED446EA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisBoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23_m59698092F1230C6FB7F40D0F58F643A931A732D7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// transform.SetPositionAndRotation(new Vector3(16.41f, 1.31f, -76), Quaternion.Euler(0,0,0));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_1), (16.4099998f), (1.30999994f), (-76.0f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2;
		L_2 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((0.0f), (0.0f), (0.0f), NULL);
		NullCheck(L_0);
		Transform_SetPositionAndRotation_m418859BF59086EEAA084FFD6F258A43FAB408F5A(L_0, L_1, L_2, NULL);
		// GetComponent<BoxCollider>().enabled = false;
		BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* L_3;
		L_3 = Component_GetComponent_TisBoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23_m59698092F1230C6FB7F40D0F58F643A931A732D7(__this, Component_GetComponent_TisBoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23_m59698092F1230C6FB7F40D0F58F643A931A732D7_RuntimeMethod_var);
		NullCheck(L_3);
		Collider_set_enabled_m8D5C3B5047592D227A52560FC9723D176E209F70(L_3, (bool)0, NULL);
		// timer = 0;
		__this->___timer_4 = (0.0f);
		// }
		return;
	}
}
// System.Void PickupTruckMove::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PickupTruckMove_Update_mBDB7CC3C58904F240158BC58F5B1749CF55ECED9 (PickupTruckMove_t192C398DB3DB07F42AD05CCBFD5595E58ED446EA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisBoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23_m59698092F1230C6FB7F40D0F58F643A931A732D7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// timer += Time.deltaTime;
		float L_0 = __this->___timer_4;
		float L_1;
		L_1 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___timer_4 = ((float)il2cpp_codegen_add(L_0, L_1));
		// transform.position = new Vector3(16.41f, 1.31f, Mathf.Lerp(-76, -6.54f, timer/timeToGetToDestination));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		float L_3 = __this->___timer_4;
		float L_4 = __this->___timeToGetToDestination_5;
		float L_5;
		L_5 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline((-76.0f), (-6.53999996f), ((float)(L_3/L_4)), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_6), (16.4099998f), (1.30999994f), L_5, /*hidden argument*/NULL);
		NullCheck(L_2);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_2, L_6, NULL);
		// if (timer >= timeToGetToDestination)
		float L_7 = __this->___timer_4;
		float L_8 = __this->___timeToGetToDestination_5;
		if ((!(((float)L_7) >= ((float)L_8))))
		{
			goto IL_0081;
		}
	}
	{
		// this.enabled = false;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(__this, (bool)0, NULL);
		// truckScript.enabled = true;
		Truck_tC25075F97163DDBB2CD8FED02BFCA45D53F94454* L_9 = __this->___truckScript_6;
		NullCheck(L_9);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_9, (bool)1, NULL);
		// truckEnemyScript.enabled = true;
		TruckEnemy_t5A18267E64F9717056134EAC0BFEADD9957507A5* L_10 = __this->___truckEnemyScript_7;
		NullCheck(L_10);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_10, (bool)1, NULL);
		// GetComponent<BoxCollider>().enabled = true;
		BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* L_11;
		L_11 = Component_GetComponent_TisBoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23_m59698092F1230C6FB7F40D0F58F643A931A732D7(__this, Component_GetComponent_TisBoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23_m59698092F1230C6FB7F40D0F58F643A931A732D7_RuntimeMethod_var);
		NullCheck(L_11);
		Collider_set_enabled_m8D5C3B5047592D227A52560FC9723D176E209F70(L_11, (bool)1, NULL);
	}

IL_0081:
	{
		// }
		return;
	}
}
// System.Void PickupTruckMove::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PickupTruckMove__ctor_mD9DF75D608D0B17C6BA0BF18EC09AA6EA16D0945 (PickupTruckMove_t192C398DB3DB07F42AD05CCBFD5595E58ED446EA* __this, const RuntimeMethod* method) 
{
	{
		// private float timeToGetToDestination = 1.5f;
		__this->___timeToGetToDestination_5 = (1.5f);
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
// System.Void PickupTruckShockwave::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PickupTruckShockwave_OnEnable_m99423BF55CD6F2DD8D04E0A0F2510A3B819A70D1 (PickupTruckShockwave_tDD1BEEB515EEF99045636F815F6E0A7D1C203505* __this, const RuntimeMethod* method) 
{
	{
		// transform.position = startingPosition.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = __this->___startingPosition_5;
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		NullCheck(L_0);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_0, L_2, NULL);
		// movingToStartPosition = true;
		__this->___movingToStartPosition_4 = (bool)1;
		// startShooting = false;
		__this->___startShooting_8 = (bool)0;
		// moveLaserLeft = true;
		__this->___moveLaserLeft_11 = (bool)1;
		// health = 60;
		__this->___health_12 = ((int32_t)60);
		// transform.SetPositionAndRotation(new Vector3(16.41f, 1.31f, -76), Quaternion.Euler(0,0,0));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_4), (16.4099998f), (1.30999994f), (-76.0f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((0.0f), (0.0f), (0.0f), NULL);
		NullCheck(L_3);
		Transform_SetPositionAndRotation_m418859BF59086EEAA084FFD6F258A43FAB408F5A(L_3, L_4, L_5, NULL);
		// healthbarSlider.value = health;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_6 = __this->___healthbarSlider_18;
		int32_t L_7 = __this->___health_12;
		NullCheck(L_6);
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_6, ((float)L_7));
		// healthbarSlider.enabled = true;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_8 = __this->___healthbarSlider_18;
		NullCheck(L_8);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_8, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void PickupTruckShockwave::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PickupTruckShockwave_Update_m9BBF0A978D2593819EEC2A0A179EBD6DC170FB09 (PickupTruckShockwave_tDD1BEEB515EEF99045636F815F6E0A7D1C203505* __this, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (movingToStartPosition)
		bool L_0 = __this->___movingToStartPosition_4;
		if (!L_0)
		{
			goto IL_0076;
		}
	}
	{
		// transform.position = Vector3.MoveTowards(transform.position, destination.position, truckSpeed * Time.deltaTime);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = __this->___destination_7;
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		float L_6 = __this->___truckSpeed_6;
		float L_7;
		L_7 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_MoveTowards_m0363264647799F3173AC37F8E819F98298249B08_inline(L_3, L_5, ((float)il2cpp_codegen_multiply(L_6, L_7)), NULL);
		NullCheck(L_1);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_1, L_8, NULL);
		// if (Vector3.Distance(transform.position, destination.position) < 0.1f)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_9, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11 = __this->___destination_7;
		NullCheck(L_11);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_11, NULL);
		float L_13;
		L_13 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_10, L_12, NULL);
		if ((!(((float)L_13) < ((float)(0.100000001f)))))
		{
			goto IL_0076;
		}
	}
	{
		// movingToStartPosition = false;
		__this->___movingToStartPosition_4 = (bool)0;
		// startShooting = true;
		__this->___startShooting_8 = (bool)1;
		// laser.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = __this->___laser_9;
		NullCheck(L_14);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_14, (bool)1, NULL);
	}

IL_0076:
	{
		// if (startShooting)
		bool L_15 = __this->___startShooting_8;
		if (!L_15)
		{
			goto IL_0133;
		}
	}
	{
		// if (moveLaserLeft)
		bool L_16 = __this->___moveLaserLeft_11;
		if (!L_16)
		{
			goto IL_00da;
		}
	}
	{
		// laser.transform.Rotate(rotateSpeed * Time.deltaTime * Vector3.up);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17 = __this->___laser_9;
		NullCheck(L_17);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18;
		L_18 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_17, NULL);
		float L_19 = __this->___rotateSpeed_10;
		float L_20;
		L_20 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(((float)il2cpp_codegen_multiply(L_19, L_20)), L_21, NULL);
		NullCheck(L_18);
		Transform_Rotate_m2A308205498AFEEA3DF784B1C86E4F7C126CA2EE(L_18, L_22, NULL);
		// if (laser.transform.rotation.eulerAngles.y >= 210)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23 = __this->___laser_9;
		NullCheck(L_23);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24;
		L_24 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_23, NULL);
		NullCheck(L_24);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_25;
		L_25 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_24, NULL);
		V_0 = L_25;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline((&V_0), NULL);
		float L_27 = L_26.___y_3;
		if ((!(((float)L_27) >= ((float)(210.0f)))))
		{
			goto IL_00da;
		}
	}
	{
		// moveLaserLeft = false;
		__this->___moveLaserLeft_11 = (bool)0;
	}

IL_00da:
	{
		// if (!moveLaserLeft)
		bool L_28 = __this->___moveLaserLeft_11;
		if (L_28)
		{
			goto IL_0133;
		}
	}
	{
		// laser.transform.Rotate(rotateSpeed * Time.deltaTime * Vector3.down);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_29 = __this->___laser_9;
		NullCheck(L_29);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_30;
		L_30 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_29, NULL);
		float L_31 = __this->___rotateSpeed_10;
		float L_32;
		L_32 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33;
		L_33 = Vector3_get_down_mF62B2AE7C5AC31EAC9CB62797C7190C90A7A8599_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34;
		L_34 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(((float)il2cpp_codegen_multiply(L_31, L_32)), L_33, NULL);
		NullCheck(L_30);
		Transform_Rotate_m2A308205498AFEEA3DF784B1C86E4F7C126CA2EE(L_30, L_34, NULL);
		// if (laser.transform.rotation.eulerAngles.y <= 150)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_35 = __this->___laser_9;
		NullCheck(L_35);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_36;
		L_36 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_35, NULL);
		NullCheck(L_36);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_37;
		L_37 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_36, NULL);
		V_0 = L_37;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38;
		L_38 = Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline((&V_0), NULL);
		float L_39 = L_38.___y_3;
		if ((!(((float)L_39) <= ((float)(150.0f)))))
		{
			goto IL_0133;
		}
	}
	{
		// moveLaserLeft = true;
		__this->___moveLaserLeft_11 = (bool)1;
	}

IL_0133:
	{
		// }
		return;
	}
}
// System.Void PickupTruckShockwave::Hit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PickupTruckShockwave_Hit_m8767A46C37988C85ED83C99BC40809A0995C99FA (PickupTruckShockwave_tDD1BEEB515EEF99045636F815F6E0A7D1C203505* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD5D089244D2AF3D858FF9D8AA8608F11F0CC129E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// health--;
		int32_t L_0 = __this->___health_12;
		__this->___health_12 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		// healthbarSlider.value = health;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_1 = __this->___healthbarSlider_18;
		int32_t L_2 = __this->___health_12;
		NullCheck(L_1);
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_1, ((float)L_2));
		// if (health < 40 && health > 20)
		int32_t L_3 = __this->___health_12;
		if ((((int32_t)L_3) >= ((int32_t)((int32_t)40))))
		{
			goto IL_003f;
		}
	}
	{
		int32_t L_4 = __this->___health_12;
		if ((((int32_t)L_4) <= ((int32_t)((int32_t)20))))
		{
			goto IL_003f;
		}
	}
	{
		// smoke.Play();
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_5 = __this->___smoke_13;
		NullCheck(L_5);
		ParticleSystem_Play_mD943E601BFE16CB9BB5D1F5E6AED5C36F5F11EF5(L_5, NULL);
	}

IL_003f:
	{
		// if (health <= 20 && health > 0)
		int32_t L_6 = __this->___health_12;
		if ((((int32_t)L_6) > ((int32_t)((int32_t)20))))
		{
			goto IL_0068;
		}
	}
	{
		int32_t L_7 = __this->___health_12;
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_0068;
		}
	}
	{
		// smoke.Stop();
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_8 = __this->___smoke_13;
		NullCheck(L_8);
		ParticleSystem_Stop_m2D8D4967496EF0F5BFEF679C49A9E65A9646C423(L_8, NULL);
		// fire.Play();
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_9 = __this->___fire_14;
		NullCheck(L_9);
		ParticleSystem_Play_mD943E601BFE16CB9BB5D1F5E6AED5C36F5F11EF5(L_9, NULL);
	}

IL_0068:
	{
		// if(health <= 0)
		int32_t L_10 = __this->___health_12;
		if ((((int32_t)L_10) > ((int32_t)0)))
		{
			goto IL_009a;
		}
	}
	{
		// laser.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = __this->___laser_9;
		NullCheck(L_11);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_11, (bool)0, NULL);
		// TruckEnemyAnimator.SetBool("Fall", true);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_12 = __this->___TruckEnemyAnimator_17;
		NullCheck(L_12);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_12, _stringLiteralD5D089244D2AF3D858FF9D8AA8608F11F0CC129E, (bool)1, NULL);
		// truckAnimator.enabled = true;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_13 = __this->___truckAnimator_16;
		NullCheck(L_13);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_13, (bool)1, NULL);
	}

IL_009a:
	{
		// }
		return;
	}
}
// System.Void PickupTruckShockwave::BlowUpTruck()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PickupTruckShockwave_BlowUpTruck_m5EE31356678BF3F6163079FC34249AF0F73494E7 (PickupTruckShockwave_tDD1BEEB515EEF99045636F815F6E0A7D1C203505* __this, const RuntimeMethod* method) 
{
	{
		// fire.Stop();
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_0 = __this->___fire_14;
		NullCheck(L_0);
		ParticleSystem_Stop_m2D8D4967496EF0F5BFEF679C49A9E65A9646C423(L_0, NULL);
		// explosion.transform.position = transform.position;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___explosion_15;
		NullCheck(L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_1, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		NullCheck(L_2);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_2, L_4, NULL);
		// explosion.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___explosion_15;
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)1, NULL);
		// gameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_6);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_6, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void PickupTruckShockwave::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PickupTruckShockwave_OnTriggerEnter_mDA2F5256BF6EF86B798D5DA29F1E18F92FC5E728 (PickupTruckShockwave_tDD1BEEB515EEF99045636F815F6E0A7D1C203505* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral55E7FF1059C586902360E3CBE8E0AE2CCE9A60D7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.CompareTag("Player Laser"))
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___other0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Component_CompareTag_mE6F8897E84F12DF12D302FFC4D58204D51096FC5(L_0, _stringLiteral55E7FF1059C586902360E3CBE8E0AE2CCE9A60D7, NULL);
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		// Hit();
		PickupTruckShockwave_Hit_m8767A46C37988C85ED83C99BC40809A0995C99FA(__this, NULL);
		// other.gameObject.SetActive(false);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_2 = ___other0;
		NullCheck(L_2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_2, NULL);
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)0, NULL);
	}

IL_001f:
	{
		// }
		return;
	}
}
// System.Void PickupTruckShockwave::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PickupTruckShockwave_OnDisable_m3A0556C27A721B2081465A89C4A531D0C63AD1FB (PickupTruckShockwave_tDD1BEEB515EEF99045636F815F6E0A7D1C203505* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD5D089244D2AF3D858FF9D8AA8608F11F0CC129E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// TruckEnemyAnimator.SetBool("Fall", false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = __this->___TruckEnemyAnimator_17;
		NullCheck(L_0);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_0, _stringLiteralD5D089244D2AF3D858FF9D8AA8608F11F0CC129E, (bool)0, NULL);
		// truckAnimator.enabled = false;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_1 = __this->___truckAnimator_16;
		NullCheck(L_1);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_1, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void PickupTruckShockwave::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PickupTruckShockwave__ctor_m7CE09243048FFAC9F3B4C880B1E7750F86E87102 (PickupTruckShockwave_tDD1BEEB515EEF99045636F815F6E0A7D1C203505* __this, const RuntimeMethod* method) 
{
	{
		// private float truckSpeed = 30;
		__this->___truckSpeed_6 = (30.0f);
		// private bool moveLaserLeft = true;
		__this->___moveLaserLeft_11 = (bool)1;
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
// System.Void Truck::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Truck_OnEnable_mC3AD942DB47A145DBCEAB749FCC353A438E98DD0 (Truck_tC25075F97163DDBB2CD8FED02BFCA45D53F94454* __this, const RuntimeMethod* method) 
{
	{
		// health = 60;
		__this->___health_4 = ((int32_t)60);
		// healthbarSlider.value = health;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_0 = __this->___healthbarSlider_12;
		int32_t L_1 = __this->___health_4;
		NullCheck(L_0);
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_0, ((float)L_1));
		// healthbarSlider.enabled = true;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_2 = __this->___healthbarSlider_12;
		NullCheck(L_2);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_2, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void Truck::Hit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Truck_Hit_mD5EB53055E3D18A8099216A80F29E4081B8F940B (Truck_tC25075F97163DDBB2CD8FED02BFCA45D53F94454* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD5D089244D2AF3D858FF9D8AA8608F11F0CC129E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// health--;
		int32_t L_0 = __this->___health_4;
		__this->___health_4 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		// healthbarSlider.value = health;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_1 = __this->___healthbarSlider_12;
		int32_t L_2 = __this->___health_4;
		NullCheck(L_1);
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_1, ((float)L_2));
		// if (health < 40 && health > 20)
		int32_t L_3 = __this->___health_4;
		if ((((int32_t)L_3) >= ((int32_t)((int32_t)40))))
		{
			goto IL_003f;
		}
	}
	{
		int32_t L_4 = __this->___health_4;
		if ((((int32_t)L_4) <= ((int32_t)((int32_t)20))))
		{
			goto IL_003f;
		}
	}
	{
		// smoke.Play();
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_5 = __this->___smoke_5;
		NullCheck(L_5);
		ParticleSystem_Play_mD943E601BFE16CB9BB5D1F5E6AED5C36F5F11EF5(L_5, NULL);
	}

IL_003f:
	{
		// if (health <= 20 && health > 0)
		int32_t L_6 = __this->___health_4;
		if ((((int32_t)L_6) > ((int32_t)((int32_t)20))))
		{
			goto IL_0068;
		}
	}
	{
		int32_t L_7 = __this->___health_4;
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_0068;
		}
	}
	{
		// smoke.Stop();
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_8 = __this->___smoke_5;
		NullCheck(L_8);
		ParticleSystem_Stop_m2D8D4967496EF0F5BFEF679C49A9E65A9646C423(L_8, NULL);
		// fire.Play();
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_9 = __this->___fire_6;
		NullCheck(L_9);
		ParticleSystem_Play_mD943E601BFE16CB9BB5D1F5E6AED5C36F5F11EF5(L_9, NULL);
	}

IL_0068:
	{
		// if(health <= 0)
		int32_t L_10 = __this->___health_4;
		if ((((int32_t)L_10) > ((int32_t)0)))
		{
			goto IL_009a;
		}
	}
	{
		// TruckEnemyAnimator.SetBool("Fall", true);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_11 = __this->___TruckEnemyAnimator_10;
		NullCheck(L_11);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_11, _stringLiteralD5D089244D2AF3D858FF9D8AA8608F11F0CC129E, (bool)1, NULL);
		// truckEnemyScript.enabled = false;
		TruckEnemy_t5A18267E64F9717056134EAC0BFEADD9957507A5* L_12 = __this->___truckEnemyScript_9;
		NullCheck(L_12);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_12, (bool)0, NULL);
		// truckAnimator.enabled = true;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_13 = __this->___truckAnimator_8;
		NullCheck(L_13);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_13, (bool)1, NULL);
	}

IL_009a:
	{
		// }
		return;
	}
}
// System.Void Truck::BlowUpTruck()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Truck_BlowUpTruck_mFDADAADF12E65F300C39374AF1D0C5077B3E0BB7 (Truck_tC25075F97163DDBB2CD8FED02BFCA45D53F94454* __this, const RuntimeMethod* method) 
{
	{
		// fire.Stop();
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_0 = __this->___fire_6;
		NullCheck(L_0);
		ParticleSystem_Stop_m2D8D4967496EF0F5BFEF679C49A9E65A9646C423(L_0, NULL);
		// explosion.transform.position = transform.position;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___explosion_7;
		NullCheck(L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_1, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		NullCheck(L_2);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_2, L_4, NULL);
		// explosion.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___explosion_7;
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)1, NULL);
		// gameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_6);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_6, (bool)0, NULL);
		// this.enabled = false;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(__this, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void Truck::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Truck_OnTriggerEnter_m973EDAFEA2446AD584BC05115E3C78EEC9877FA2 (Truck_tC25075F97163DDBB2CD8FED02BFCA45D53F94454* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral55E7FF1059C586902360E3CBE8E0AE2CCE9A60D7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.CompareTag("Player Laser"))
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___other0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Component_CompareTag_mE6F8897E84F12DF12D302FFC4D58204D51096FC5(L_0, _stringLiteral55E7FF1059C586902360E3CBE8E0AE2CCE9A60D7, NULL);
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		// Hit();
		Truck_Hit_mD5EB53055E3D18A8099216A80F29E4081B8F940B(__this, NULL);
		// other.gameObject.SetActive(false);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_2 = ___other0;
		NullCheck(L_2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_2, NULL);
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)0, NULL);
	}

IL_001f:
	{
		// }
		return;
	}
}
// System.Void Truck::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Truck_OnDisable_m635BBE9AE8B12688BC6ADA5CD2D302F978597286 (Truck_tC25075F97163DDBB2CD8FED02BFCA45D53F94454* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD5D089244D2AF3D858FF9D8AA8608F11F0CC129E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// TruckEnemyAnimator.SetBool("Fall", false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = __this->___TruckEnemyAnimator_10;
		NullCheck(L_0);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_0, _stringLiteralD5D089244D2AF3D858FF9D8AA8608F11F0CC129E, (bool)0, NULL);
		// truckAnimator.enabled = false;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_1 = __this->___truckAnimator_8;
		NullCheck(L_1);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_1, (bool)0, NULL);
		// pickupTruckMoveScript.enabled = true;
		PickupTruckMove_t192C398DB3DB07F42AD05CCBFD5595E58ED446EA* L_2 = __this->___pickupTruckMoveScript_11;
		NullCheck(L_2);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_2, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void Truck::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Truck__ctor_m18D36D18E0772F5011DC146A958F41E31A25773C (Truck_tC25075F97163DDBB2CD8FED02BFCA45D53F94454* __this, const RuntimeMethod* method) 
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
// System.Void Shockwave::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Shockwave_OnEnable_m3641AAF341388EDF2510E19ED6E644258D5BD865 (Shockwave_tC2C18694478C183122A90581C50910096885443B* __this, const RuntimeMethod* method) 
{
	{
		// timer = 0;
		__this->___timer_4 = (0.0f);
		// transform.localScale = new Vector3(0,0,0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_1), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void Shockwave::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Shockwave_Update_m5B28E832AB0573A38E3BA70C12A16B3A102A4D85 (Shockwave_tC2C18694478C183122A90581C50910096885443B* __this, const RuntimeMethod* method) 
{
	{
		// timer += Time.deltaTime;
		float L_0 = __this->___timer_4;
		float L_1;
		L_1 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___timer_4 = ((float)il2cpp_codegen_add(L_0, L_1));
		// transform.localScale = new Vector3(Mathf.Lerp(0, 26, timer/1f), Mathf.Lerp(0, 2, timer/1f), Mathf.Lerp(0, 1, timer/1f));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		float L_3 = __this->___timer_4;
		float L_4;
		L_4 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline((0.0f), (26.0f), ((float)(L_3/(1.0f))), NULL);
		float L_5 = __this->___timer_4;
		float L_6;
		L_6 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline((0.0f), (2.0f), ((float)(L_5/(1.0f))), NULL);
		float L_7 = __this->___timer_4;
		float L_8;
		L_8 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline((0.0f), (1.0f), ((float)(L_7/(1.0f))), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), L_4, L_6, L_8, /*hidden argument*/NULL);
		NullCheck(L_2);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_2, L_9, NULL);
		// if (timer >= 3)
		float L_10 = __this->___timer_4;
		if ((!(((float)L_10) >= ((float)(3.0f)))))
		{
			goto IL_008c;
		}
	}
	{
		// gameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11;
		L_11 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_11);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_11, (bool)0, NULL);
	}

IL_008c:
	{
		// }
		return;
	}
}
// System.Void Shockwave::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Shockwave_OnTriggerEnter_m76FA2106033D73A2E884C9A66909693E97AD679A (Shockwave_tC2C18694478C183122A90581C50910096885443B* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisPlayerHealth_tE7421738BA48E6A6C90760303B818641DDFAE263_mF6FA39268341969F2360DEF6F96AE7E0333F13DB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral23AD9577FFFAD525C0FE9C92CC6DC8E665B589A5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral55E7FF1059C586902360E3CBE8E0AE2CCE9A60D7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.CompareTag("Motorcycle"))
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___other0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Component_CompareTag_mE6F8897E84F12DF12D302FFC4D58204D51096FC5(L_0, _stringLiteral23AD9577FFFAD525C0FE9C92CC6DC8E665B589A5, NULL);
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		// other.GetComponent<PlayerHealth>().Hit();
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_2 = ___other0;
		NullCheck(L_2);
		PlayerHealth_tE7421738BA48E6A6C90760303B818641DDFAE263* L_3;
		L_3 = Component_GetComponent_TisPlayerHealth_tE7421738BA48E6A6C90760303B818641DDFAE263_mF6FA39268341969F2360DEF6F96AE7E0333F13DB(L_2, Component_GetComponent_TisPlayerHealth_tE7421738BA48E6A6C90760303B818641DDFAE263_mF6FA39268341969F2360DEF6F96AE7E0333F13DB_RuntimeMethod_var);
		NullCheck(L_3);
		PlayerHealth_Hit_mB2F7F292A4E8B3309B884569BFA457CB68FC6944(L_3, NULL);
		// gameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_4);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)0, NULL);
	}

IL_0024:
	{
		// if (other.CompareTag("Player Laser"))
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_5 = ___other0;
		NullCheck(L_5);
		bool L_6;
		L_6 = Component_CompareTag_mE6F8897E84F12DF12D302FFC4D58204D51096FC5(L_5, _stringLiteral55E7FF1059C586902360E3CBE8E0AE2CCE9A60D7, NULL);
		if (!L_6)
		{
			goto IL_003d;
		}
	}
	{
		// other.gameObject.SetActive(false);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_7 = ___other0;
		NullCheck(L_7);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_7, NULL);
		NullCheck(L_8);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_8, (bool)0, NULL);
	}

IL_003d:
	{
		// }
		return;
	}
}
// System.Void Shockwave::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Shockwave__ctor_m696D95F833C711B142435E56ECFAF6353F74D48E (Shockwave_tC2C18694478C183122A90581C50910096885443B* __this, const RuntimeMethod* method) 
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
// System.Void ExplosionSound::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExplosionSound_OnEnable_m9B0F7DE6C6A01C7CAFFE5F2B8711F830D22F04A1 (ExplosionSound_tC439A81B758F51D2E359F70467555D360A378C31* __this, const RuntimeMethod* method) 
{
	{
		// explosionAudio.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->___explosionAudio_4;
		NullCheck(L_0);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_0, NULL);
		// }
		return;
	}
}
// System.Void ExplosionSound::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExplosionSound__ctor_m166D658B9D2A68094AB5E04C7EBE173D41BE95E9 (ExplosionSound_tC439A81B758F51D2E359F70467555D360A378C31* __this, const RuntimeMethod* method) 
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
// System.Void FirstEnemyWaves::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirstEnemyWaves_Start_m434AD9269B4FEBDE64F71186C9F1D776270E38C0 (FirstEnemyWaves_tE6ACB0E7BDFB9A613D5BE71C47A36DC1BD18194C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBDC5E1C13D7CFEEBC452B255C1F0E6E438D88E53);
		s_Il2CppMethodInitialized = true;
	}
	{
		// dialogScript.PlayDialog(6);
		Dialog_t1A3474C8E604C61E022BDF82747C68A6C1E11972* L_0 = __this->___dialogScript_10;
		NullCheck(L_0);
		Dialog_PlayDialog_m85FEFB4AA86923BB70879607AAC1E773A1B03351(L_0, 6, NULL);
		// motorcycleGunScript.enabled = true;
		MotorcycleGun_t85CAF3DA6871B6EE5AD5F24F587E7719CF169A1F* L_1 = __this->___motorcycleGunScript_11;
		NullCheck(L_1);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_1, (bool)1, NULL);
		// motorcycleGunScript.canShoot = true;
		MotorcycleGun_t85CAF3DA6871B6EE5AD5F24F587E7719CF169A1F* L_2 = __this->___motorcycleGunScript_11;
		NullCheck(L_2);
		L_2->___canShoot_16 = (bool)1;
		// Invoke("SpawnFirstEnemy", 2.5f);
		MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB(__this, _stringLiteralBDC5E1C13D7CFEEBC452B255C1F0E6E438D88E53, (2.5f), NULL);
		// }
		return;
	}
}
// System.Void FirstEnemyWaves::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirstEnemyWaves_Update_m83817E634BDB2767BE0B8E5ABDFD6D44FEF626A5 (FirstEnemyWaves_tE6ACB0E7BDFB9A613D5BE71C47A36DC1BD18194C* __this, const RuntimeMethod* method) 
{
	{
		// MoveBossPosition();
		FirstEnemyWaves_MoveBossPosition_m3CCF5A2148DC3FA49494DE429598E6C42F4652CD(__this, NULL);
		// }
		return;
	}
}
// System.Void FirstEnemyWaves::MoveBossPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirstEnemyWaves_MoveBossPosition_m3CCF5A2148DC3FA49494DE429598E6C42F4652CD (FirstEnemyWaves_tE6ACB0E7BDFB9A613D5BE71C47A36DC1BD18194C* __this, const RuntimeMethod* method) 
{
	{
		// if (!bossAtDestination)
		bool L_0 = __this->___bossAtDestination_7;
		if (L_0)
		{
			goto IL_0068;
		}
	}
	{
		// boss.transform.position = Vector3.MoveTowards(boss.transform.position, bossDestination, bossSpeed * Time.deltaTime);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___boss_4;
		NullCheck(L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_1, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___boss_4;
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_3, NULL);
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = __this->___bossDestination_5;
		float L_7 = __this->___bossSpeed_6;
		float L_8;
		L_8 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_MoveTowards_m0363264647799F3173AC37F8E819F98298249B08_inline(L_5, L_6, ((float)il2cpp_codegen_multiply(L_7, L_8)), NULL);
		NullCheck(L_2);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_2, L_9, NULL);
		// if (Vector3.Distance(boss.transform.position, bossDestination) < 0.1f)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = __this->___boss_4;
		NullCheck(L_10);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_10, NULL);
		NullCheck(L_11);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_11, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = __this->___bossDestination_5;
		float L_14;
		L_14 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_12, L_13, NULL);
		if ((!(((float)L_14) < ((float)(0.100000001f)))))
		{
			goto IL_0068;
		}
	}
	{
		// bossAtDestination = true;
		__this->___bossAtDestination_7 = (bool)1;
	}

IL_0068:
	{
		// }
		return;
	}
}
// System.Void FirstEnemyWaves::SpawnFirstEnemy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirstEnemyWaves_SpawnFirstEnemy_mD1C1A1480525CB070F7AB2AD7CDE03B296471DB2 (FirstEnemyWaves_tE6ACB0E7BDFB9A613D5BE71C47A36DC1BD18194C* __this, const RuntimeMethod* method) 
{
	{
		// enemies[0].SetActive(true);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0 = __this->___enemies_8;
		NullCheck(L_0);
		int32_t L_1 = 0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void FirstEnemyWaves::EnemyKilled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirstEnemyWaves_EnemyKilled_m7616F51CA5EAD05F98FFE899208CBCC6F646700C (FirstEnemyWaves_tE6ACB0E7BDFB9A613D5BE71C47A36DC1BD18194C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral691183E5526890FF7EBB0444FB84BD9AE22C7041);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB7C91DAF57DF50693F71F34FCC989852A5EED7CD);
		s_Il2CppMethodInitialized = true;
	}
	{
		// enemiesKilled++;
		int32_t L_0 = __this->___enemiesKilled_12;
		__this->___enemiesKilled_12 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		// if(enemiesKilled == 1)
		int32_t L_1 = __this->___enemiesKilled_12;
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_0035;
		}
	}
	{
		// enemies[1].SetActive(true);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_2 = __this->___enemies_8;
		NullCheck(L_2);
		int32_t L_3 = 1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		NullCheck(L_4);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)1, NULL);
		// Invoke(nameof(SpawnRightMotorcycleEnemy), 0.5f);
		MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB(__this, _stringLiteral691183E5526890FF7EBB0444FB84BD9AE22C7041, (0.5f), NULL);
	}

IL_0035:
	{
		// if(enemiesKilled == 3)
		int32_t L_5 = __this->___enemiesKilled_12;
		if ((!(((uint32_t)L_5) == ((uint32_t)3))))
		{
			goto IL_0078;
		}
	}
	{
		// dialogScript.PlayDialog(7);
		Dialog_t1A3474C8E604C61E022BDF82747C68A6C1E11972* L_6 = __this->___dialogScript_10;
		NullCheck(L_6);
		Dialog_PlayDialog_m85FEFB4AA86923BB70879607AAC1E773A1B03351(L_6, 7, NULL);
		// enemies[0].SetActive(true);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_7 = __this->___enemies_8;
		NullCheck(L_7);
		int32_t L_8 = 0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_9);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_9, (bool)1, NULL);
		// Invoke(nameof(SpawnLeftMotorcycleEnemy), 0.5f);
		MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB(__this, _stringLiteralB7C91DAF57DF50693F71F34FCC989852A5EED7CD, (0.5f), NULL);
		// Invoke(nameof(SpawnRightMotorcycleEnemy), 1f);
		MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB(__this, _stringLiteral691183E5526890FF7EBB0444FB84BD9AE22C7041, (1.0f), NULL);
	}

IL_0078:
	{
		// if(enemiesKilled == 6)
		int32_t L_10 = __this->___enemiesKilled_12;
		if ((!(((uint32_t)L_10) == ((uint32_t)6))))
		{
			goto IL_0094;
		}
	}
	{
		// this.enabled = false;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(__this, (bool)0, NULL);
		// spawnTrafficScript.enabled = true;
		SpawnTraffic_tA357F58BD23DB5299CEBA8931A293F803C153C84* L_11 = __this->___spawnTrafficScript_13;
		NullCheck(L_11);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_11, (bool)1, NULL);
	}

IL_0094:
	{
		// }
		return;
	}
}
// System.Void FirstEnemyWaves::SpawnLeftMotorcycleEnemy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirstEnemyWaves_SpawnLeftMotorcycleEnemy_m10F3B1956DBD3EC262C352B89FED5073E602D976 (FirstEnemyWaves_tE6ACB0E7BDFB9A613D5BE71C47A36DC1BD18194C* __this, const RuntimeMethod* method) 
{
	{
		// enemies[1].SetActive(true);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0 = __this->___enemies_8;
		NullCheck(L_0);
		int32_t L_1 = 1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void FirstEnemyWaves::SpawnRightMotorcycleEnemy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirstEnemyWaves_SpawnRightMotorcycleEnemy_m941A53BD3ED7137300CEE6580482EF9D5644FBBE (FirstEnemyWaves_tE6ACB0E7BDFB9A613D5BE71C47A36DC1BD18194C* __this, const RuntimeMethod* method) 
{
	{
		// enemies[2].SetActive(true);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0 = __this->___enemies_8;
		NullCheck(L_0);
		int32_t L_1 = 2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void FirstEnemyWaves::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirstEnemyWaves__ctor_m7263982AD84D40CAC3BA00BCF4B4E89C148D0508 (FirstEnemyWaves_tE6ACB0E7BDFB9A613D5BE71C47A36DC1BD18194C* __this, const RuntimeMethod* method) 
{
	{
		// private Vector3 bossDestination = new Vector3(16.50f, 0,355);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_0), (16.5f), (0.0f), (355.0f), /*hidden argument*/NULL);
		__this->___bossDestination_5 = L_0;
		// private float bossSpeed = 35;
		__this->___bossSpeed_6 = (35.0f);
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
// System.Void GameEvents::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEvents_Start_mEAE63124CDC589FAE00183D5E2D23AA80A62D9A8 (GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0* __this, const RuntimeMethod* method) 
{
	{
		// SpawnFirstEnemy();
		GameEvents_SpawnFirstEnemy_m66FC71185A7505F1E273729E4170B62A8AB361D0(__this, NULL);
		// }
		return;
	}
}
// System.Void GameEvents::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEvents_Update_mE1A823A97568A7A567F248EAD9DD320EA081DA23 (GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void GameEvents::SpawnFirstEnemy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEvents_SpawnFirstEnemy_m66FC71185A7505F1E273729E4170B62A8AB361D0 (GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0* __this, const RuntimeMethod* method) 
{
	{
		// motorcycleEmemiesSpreadShot.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___motorcycleEmemiesSpreadShot_5;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void GameEvents::EnemyKilled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEvents_EnemyKilled_m6C308CD59D52E1BD53B21C7AF3832FD26BD79156 (GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral691183E5526890FF7EBB0444FB84BD9AE22C7041);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB7C91DAF57DF50693F71F34FCC989852A5EED7CD);
		s_Il2CppMethodInitialized = true;
	}
	{
		// enemiesKilled++;
		int32_t L_0 = __this->___enemiesKilled_6;
		__this->___enemiesKilled_6 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		// if(enemiesKilled == 1)
		int32_t L_1 = __this->___enemiesKilled_6;
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_0035;
		}
	}
	{
		// motorcycleEmemiesNormalShot[0].SetActive(true);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_2 = __this->___motorcycleEmemiesNormalShot_4;
		NullCheck(L_2);
		int32_t L_3 = 0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		NullCheck(L_4);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)1, NULL);
		// Invoke(nameof(SpawnRightMotorcycleEnemy), 0.5f);
		MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB(__this, _stringLiteral691183E5526890FF7EBB0444FB84BD9AE22C7041, (0.5f), NULL);
	}

IL_0035:
	{
		// if(enemiesKilled == 3)
		int32_t L_5 = __this->___enemiesKilled_6;
		if ((!(((uint32_t)L_5) == ((uint32_t)3))))
		{
			goto IL_006a;
		}
	}
	{
		// motorcycleEmemiesSpreadShot.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___motorcycleEmemiesSpreadShot_5;
		NullCheck(L_6);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_6, (bool)1, NULL);
		// Invoke(nameof(SpawnLeftMotorcycleEnemy), 0.5f);
		MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB(__this, _stringLiteralB7C91DAF57DF50693F71F34FCC989852A5EED7CD, (0.5f), NULL);
		// Invoke(nameof(SpawnRightMotorcycleEnemy), 1f);
		MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB(__this, _stringLiteral691183E5526890FF7EBB0444FB84BD9AE22C7041, (1.0f), NULL);
	}

IL_006a:
	{
		// }
		return;
	}
}
// System.Void GameEvents::SpawnLeftMotorcycleEnemy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEvents_SpawnLeftMotorcycleEnemy_mCAE0B3959B75F3DAFA96838453B347E40D67E05E (GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0* __this, const RuntimeMethod* method) 
{
	{
		// motorcycleEmemiesNormalShot[0].SetActive(true);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0 = __this->___motorcycleEmemiesNormalShot_4;
		NullCheck(L_0);
		int32_t L_1 = 0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void GameEvents::SpawnRightMotorcycleEnemy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEvents_SpawnRightMotorcycleEnemy_mDBB4D55E555D7EF81433ACBEA13D416C93EF4120 (GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0* __this, const RuntimeMethod* method) 
{
	{
		// motorcycleEmemiesNormalShot[1].SetActive(true);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0 = __this->___motorcycleEmemiesNormalShot_4;
		NullCheck(L_0);
		int32_t L_1 = 1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void GameEvents::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEvents__ctor_mB4B47DA5529A1F0FC3524DCE716EF264ACDF650E (GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0* __this, const RuntimeMethod* method) 
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
// System.Void GameOver::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameOver_Start_m69F2EA72A4C2B7A2292169AECAEE630860C57B89 (GameOver_tC0D72A03377DA58EE60B10DE7838DBDC0A75798D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral11A9ADB6CA2334383218C6A39C8BC8F23CE6821F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8820648669D92CC693A9E55EF8530591D3134766);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFD5DA0567B0642790467E84445CBBF046817C259);
		s_Il2CppMethodInitialized = true;
	}
	{
		// pauseMenuScript.enabled = false;
		PauseMenu_t36539DEACE8377BD498A235C80769301799E1985* L_0 = __this->___pauseMenuScript_13;
		NullCheck(L_0);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_0, (bool)0, NULL);
		// dialogScript.PlayDialog(19);
		Dialog_t1A3474C8E604C61E022BDF82747C68A6C1E11972* L_1 = __this->___dialogScript_4;
		NullCheck(L_1);
		Dialog_PlayDialog_m85FEFB4AA86923BB70879607AAC1E773A1B03351(L_1, ((int32_t)19), NULL);
		// Invoke("MissionCompleteText", 3f);
		MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB(__this, _stringLiteralFD5DA0567B0642790467E84445CBBF046817C259, (3.0f), NULL);
		// Invoke("PostStats", 3.5f);
		MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB(__this, _stringLiteral8820648669D92CC693A9E55EF8530591D3134766, (3.5f), NULL);
		// Invoke("EnableButtons", 4f);
		MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB(__this, _stringLiteral11A9ADB6CA2334383218C6A39C8BC8F23CE6821F, (4.0f), NULL);
		// }
		return;
	}
}
// System.Void GameOver::MissionCompleteText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameOver_MissionCompleteText_m64A076159C2303D50971A9B26CF43846080A4C6E (GameOver_tC0D72A03377DA58EE60B10DE7838DBDC0A75798D* __this, const RuntimeMethod* method) 
{
	{
		// background.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___background_9;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// missionComplete.enabled = true;
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_1 = __this->___missionComplete_5;
		NullCheck(L_1);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_1, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void GameOver::PostStats()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameOver_PostStats_mA09869B4E7054DA7391C1A9A7F322FBCD675DED0 (GameOver_tC0D72A03377DA58EE60B10DE7838DBDC0A75798D* __this, const RuntimeMethod* method) 
{
	{
		// damageTaken.enabled = true;
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_0 = __this->___damageTaken_6;
		NullCheck(L_0);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_0, (bool)1, NULL);
		// hitsTaken.SetText(playerHealthScript.timesHit.ToString());
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_1 = __this->___hitsTaken_7;
		PlayerHealth_tE7421738BA48E6A6C90760303B818641DDFAE263* L_2 = __this->___playerHealthScript_8;
		NullCheck(L_2);
		int32_t* L_3 = (&L_2->___timesHit_9);
		String_t* L_4;
		L_4 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_3, NULL);
		NullCheck(L_1);
		TMP_Text_SetText_m848189C290727009A95A00E432B66DFB2F2C3454(L_1, L_4, (bool)1, NULL);
		// hitsTaken.enabled = true;
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_5 = __this->___hitsTaken_7;
		NullCheck(L_5);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_5, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void GameOver::EnableButtons()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameOver_EnableButtons_m0929485AA8FAD049B49D88D0D9C735E13A49BCA2 (GameOver_tC0D72A03377DA58EE60B10DE7838DBDC0A75798D* __this, const RuntimeMethod* method) 
{
	{
		// buttons.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___buttons_10;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// LeftraycastHand.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___LeftraycastHand_11;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)1, NULL);
		// rightraycastHand.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___rightraycastHand_12;
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void GameOver::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameOver__ctor_m2D4239F9C4BCE2EBFD1D1D6FAFEBAD05F65399B2 (GameOver_tC0D72A03377DA58EE60B10DE7838DBDC0A75798D* __this, const RuntimeMethod* method) 
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
// System.Void MotorcycleTakeoff::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MotorcycleTakeoff_Update_mAF1E24C1BFDF122FBBA07EE6458A395FF317AFB2 (MotorcycleTakeoff_tAC47DC8F5A468CF6B428AB65A25CD2FEC94BBE32* __this, const RuntimeMethod* method) 
{
	{
		// if(!audioClipIsPlaying) {
		bool L_0 = __this->___audioClipIsPlaying_6;
		if (L_0)
		{
			goto IL_0032;
		}
	}
	{
		// StartCoroutine(MoveRoads());
		RuntimeObject* L_1;
		L_1 = MotorcycleTakeoff_MoveRoads_m132F301873176ACF502AE07B106473593E30AFAE(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_2;
		L_2 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_1, NULL);
		// engineBoom.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_3 = __this->___engineBoom_4;
		NullCheck(L_3);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_3, NULL);
		// backgroundMusic.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_4 = __this->___backgroundMusic_5;
		NullCheck(L_4);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_4, NULL);
		// audioClipIsPlaying = true;
		__this->___audioClipIsPlaying_6 = (bool)1;
	}

IL_0032:
	{
		// if(audioClipIsPlaying && !engineBoom.isPlaying) {
		bool L_5 = __this->___audioClipIsPlaying_6;
		if (!L_5)
		{
			goto IL_004e;
		}
	}
	{
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_6 = __this->___engineBoom_4;
		NullCheck(L_6);
		bool L_7;
		L_7 = AudioSource_get_isPlaying_mC203303F2F7146B2C056CB47B9391463FDF408FC(L_6, NULL);
		if (L_7)
		{
			goto IL_004e;
		}
	}
	{
		// this.enabled = false;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(__this, (bool)0, NULL);
	}

IL_004e:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator MotorcycleTakeoff::MoveRoads()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MotorcycleTakeoff_MoveRoads_m132F301873176ACF502AE07B106473593E30AFAE (MotorcycleTakeoff_tAC47DC8F5A468CF6B428AB65A25CD2FEC94BBE32* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CMoveRoadsU3Ed__12_t4A3422038C6E22696DD48D96A9A21C36B8154832_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CMoveRoadsU3Ed__12_t4A3422038C6E22696DD48D96A9A21C36B8154832* L_0 = (U3CMoveRoadsU3Ed__12_t4A3422038C6E22696DD48D96A9A21C36B8154832*)il2cpp_codegen_object_new(U3CMoveRoadsU3Ed__12_t4A3422038C6E22696DD48D96A9A21C36B8154832_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CMoveRoadsU3Ed__12__ctor_m86566B0A77DB1A9BDFD775CB0277A260EF5C72A5(L_0, 0, NULL);
		U3CMoveRoadsU3Ed__12_t4A3422038C6E22696DD48D96A9A21C36B8154832* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void MotorcycleTakeoff::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MotorcycleTakeoff__ctor_mE8C5A0BE9E742A84CAFA8EF38314C4AA096F4011 (MotorcycleTakeoff_tAC47DC8F5A468CF6B428AB65A25CD2FEC94BBE32* __this, const RuntimeMethod* method) 
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
// System.Void MotorcycleTakeoff/<MoveRoads>d__12::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMoveRoadsU3Ed__12__ctor_m86566B0A77DB1A9BDFD775CB0277A260EF5C72A5 (U3CMoveRoadsU3Ed__12_t4A3422038C6E22696DD48D96A9A21C36B8154832* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void MotorcycleTakeoff/<MoveRoads>d__12::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMoveRoadsU3Ed__12_System_IDisposable_Dispose_mD34948B94417F854BFC4987812838726A99EB976 (U3CMoveRoadsU3Ed__12_t4A3422038C6E22696DD48D96A9A21C36B8154832* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean MotorcycleTakeoff/<MoveRoads>d__12::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CMoveRoadsU3Ed__12_MoveNext_m928725D348991B02A76ED747E8D325E81709599F (U3CMoveRoadsU3Ed__12_t4A3422038C6E22696DD48D96A9A21C36B8154832* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	MotorcycleTakeoff_tAC47DC8F5A468CF6B428AB65A25CD2FEC94BBE32* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		MotorcycleTakeoff_tAC47DC8F5A468CF6B428AB65A25CD2FEC94BBE32* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_0042;
			}
			case 2:
			{
				goto IL_00aa;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitForSeconds(0.5f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_3 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_3, (0.5f), NULL);
		__this->___U3CU3E2__current_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_3);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0042:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// moveRoadScript1.enabled = true;
		MotorcycleTakeoff_tAC47DC8F5A468CF6B428AB65A25CD2FEC94BBE32* L_4 = V_1;
		NullCheck(L_4);
		MoveRoad_t74517ABB7841065BF051268E60421CE6BF92B857* L_5 = L_4->___moveRoadScript1_7;
		NullCheck(L_5);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_5, (bool)1, NULL);
		// moveRoadScript2.enabled = true;
		MotorcycleTakeoff_tAC47DC8F5A468CF6B428AB65A25CD2FEC94BBE32* L_6 = V_1;
		NullCheck(L_6);
		MoveRoad_t74517ABB7841065BF051268E60421CE6BF92B857* L_7 = L_6->___moveRoadScript2_8;
		NullCheck(L_7);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_7, (bool)1, NULL);
		// moveRoadScript3.enabled = true;
		MotorcycleTakeoff_tAC47DC8F5A468CF6B428AB65A25CD2FEC94BBE32* L_8 = V_1;
		NullCheck(L_8);
		MoveRoad_t74517ABB7841065BF051268E60421CE6BF92B857* L_9 = L_8->___moveRoadScript3_9;
		NullCheck(L_9);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_9, (bool)1, NULL);
		// moveRoadScript4.enabled = true;
		MotorcycleTakeoff_tAC47DC8F5A468CF6B428AB65A25CD2FEC94BBE32* L_10 = V_1;
		NullCheck(L_10);
		MoveRoad_t74517ABB7841065BF051268E60421CE6BF92B857* L_11 = L_10->___moveRoadScript4_10;
		NullCheck(L_11);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_11, (bool)1, NULL);
		// fastDust.SetActive(true);
		MotorcycleTakeoff_tAC47DC8F5A468CF6B428AB65A25CD2FEC94BBE32* L_12 = V_1;
		NullCheck(L_12);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = L_12->___fastDust_12;
		NullCheck(L_13);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_13, (bool)1, NULL);
		// moveTitleScript.enabled = true;
		MotorcycleTakeoff_tAC47DC8F5A468CF6B428AB65A25CD2FEC94BBE32* L_14 = V_1;
		NullCheck(L_14);
		MoveTitle_t68969922F613C9E241AF79026327034029E17EAD* L_15 = L_14->___moveTitleScript_11;
		NullCheck(L_15);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_15, (bool)1, NULL);
		// yield return new WaitForSeconds(3f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_16 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_16, (3.0f), NULL);
		__this->___U3CU3E2__current_1 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_16);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_00aa:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// dialogScript.PlayDialog(1);
		MotorcycleTakeoff_tAC47DC8F5A468CF6B428AB65A25CD2FEC94BBE32* L_17 = V_1;
		NullCheck(L_17);
		Dialog_t1A3474C8E604C61E022BDF82747C68A6C1E11972* L_18 = L_17->___dialogScript_13;
		NullCheck(L_18);
		Dialog_PlayDialog_m85FEFB4AA86923BB70879607AAC1E773A1B03351(L_18, 1, NULL);
		// bossOnMotorcycle.SetActive(true);
		MotorcycleTakeoff_tAC47DC8F5A468CF6B428AB65A25CD2FEC94BBE32* L_19 = V_1;
		NullCheck(L_19);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20 = L_19->___bossOnMotorcycle_14;
		NullCheck(L_20);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_20, (bool)1, NULL);
		// }
		return (bool)0;
	}
}
// System.Object MotorcycleTakeoff/<MoveRoads>d__12::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CMoveRoadsU3Ed__12_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mAA3604BCF29220EE7F16859A730188D8F9CD85E9 (U3CMoveRoadsU3Ed__12_t4A3422038C6E22696DD48D96A9A21C36B8154832* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void MotorcycleTakeoff/<MoveRoads>d__12::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMoveRoadsU3Ed__12_System_Collections_IEnumerator_Reset_mF16C18FBE421AD0D84028789BDC9AF3D6884A7C8 (U3CMoveRoadsU3Ed__12_t4A3422038C6E22696DD48D96A9A21C36B8154832* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CMoveRoadsU3Ed__12_System_Collections_IEnumerator_Reset_mF16C18FBE421AD0D84028789BDC9AF3D6884A7C8_RuntimeMethod_var)));
	}
}
// System.Object MotorcycleTakeoff/<MoveRoads>d__12::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CMoveRoadsU3Ed__12_System_Collections_IEnumerator_get_Current_m9474EF4EA857C2C28F143610FA9D30504938A884 (U3CMoveRoadsU3Ed__12_t4A3422038C6E22696DD48D96A9A21C36B8154832* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void MoveTutorial::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveTutorial_Start_mFFD7F2ACA02B2FF26AB4CCFC8394FFDA54A8FFE5 (MoveTutorial_t3CFCE84409CA3525A54DA9F9C20D336FA6DB5CC4* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void MoveTutorial::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveTutorial_Update_m811F624E63DBDB060A3A496378B6DB54915A8860 (MoveTutorial_t3CFCE84409CA3525A54DA9F9C20D336FA6DB5CC4* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void MoveTutorial::HowToMove()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveTutorial_HowToMove_m170603F88A4B490762A65E67807022483FC79E37 (MoveTutorial_t3CFCE84409CA3525A54DA9F9C20D336FA6DB5CC4* __this, const RuntimeMethod* method) 
{
	{
		// dialogScript.PlayDialog(2);
		Dialog_t1A3474C8E604C61E022BDF82747C68A6C1E11972* L_0 = __this->___dialogScript_4;
		NullCheck(L_0);
		Dialog_PlayDialog_m85FEFB4AA86923BB70879607AAC1E773A1B03351(L_0, 2, NULL);
		// }
		return;
	}
}
// System.Void MoveTutorial::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveTutorial__ctor_mB9CAA23F10952A064061132279A3D5E08077F486 (MoveTutorial_t3CFCE84409CA3525A54DA9F9C20D336FA6DB5CC4* __this, const RuntimeMethod* method) 
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
// System.Void OculusMenu::PauseON()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusMenu_PauseON_mA6B225C4ABC21A5FD357EA90E98E1F3EABECCDE8 (OculusMenu_t92A4173A3172F5126A52293139863A0485C88FFE* __this, const RuntimeMethod* method) 
{
	{
		// [ContextMenu("Pause ON")]  private void PauseON() => Pause(true);
		OculusMenu_Pause_m4D897D2EBB4943C3178074B37E4F3BD49A55FFDD(__this, (bool)1, NULL);
		return;
	}
}
// System.Void OculusMenu::PauseOFF()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusMenu_PauseOFF_m2F9BD2DC0DEB3EDFD1D443C1F7E2CD2195BAB0E1 (OculusMenu_t92A4173A3172F5126A52293139863A0485C88FFE* __this, const RuntimeMethod* method) 
{
	{
		// [ContextMenu("Pause OFF")] private void PauseOFF() => Pause(false);
		OculusMenu_Pause_m4D897D2EBB4943C3178074B37E4F3BD49A55FFDD(__this, (bool)0, NULL);
		return;
	}
}
// System.Void OculusMenu::OnApplicationPause(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusMenu_OnApplicationPause_m1D00E172B4E1D08DD2A33DB9E932C32B3160DBBF (OculusMenu_t92A4173A3172F5126A52293139863A0485C88FFE* __this, bool ___pauseStatus0, const RuntimeMethod* method) 
{
	{
		// Pause(pauseStatus);
		bool L_0 = ___pauseStatus0;
		OculusMenu_Pause_m4D897D2EBB4943C3178074B37E4F3BD49A55FFDD(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void OculusMenu::OnApplicationFocus(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusMenu_OnApplicationFocus_mA8FE7C0B515B04F52319863379E87238603AFC17 (OculusMenu_t92A4173A3172F5126A52293139863A0485C88FFE* __this, bool ___hasFocus0, const RuntimeMethod* method) 
{
	{
		// Pause(!hasFocus);
		bool L_0 = ___hasFocus0;
		OculusMenu_Pause_m4D897D2EBB4943C3178074B37E4F3BD49A55FFDD(__this, (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0), NULL);
		// }
		return;
	}
}
// System.Void OculusMenu::Pause(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusMenu_Pause_m4D897D2EBB4943C3178074B37E4F3BD49A55FFDD (OculusMenu_t92A4173A3172F5126A52293139863A0485C88FFE* __this, bool ___pauseStatus0, const RuntimeMethod* method) 
{
	{
		// if (pauseStatus == true)
		bool L_0 = ___pauseStatus0;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		// Time.timeScale = 0;
		Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331((0.0f), NULL);
		// AudioListener.pause = true;
		AudioListener_set_pause_m4D52C9FFC6B10B0F281329FA0FB3CE2C64894F33((bool)1, NULL);
		goto IL_0025;
	}

IL_0015:
	{
		// Time.timeScale = 1;
		Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331((1.0f), NULL);
		// AudioListener.pause = false;
		AudioListener_set_pause_m4D52C9FFC6B10B0F281329FA0FB3CE2C64894F33((bool)0, NULL);
	}

IL_0025:
	{
		// _paused = pauseStatus;
		bool L_1 = ___pauseStatus0;
		__this->____paused_4 = L_1;
		// }
		return;
	}
}
// System.Void OculusMenu::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusMenu__ctor_m0883BE5B8A8E91A6B594C2959E2BA5B82B01B10C (OculusMenu_t92A4173A3172F5126A52293139863A0485C88FFE* __this, const RuntimeMethod* method) 
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
// System.Void PauseMenu::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseMenu_Update_m5097E74BFD4385B73BA9EF7198886DCEC7DF9A83 (PauseMenu_t36539DEACE8377BD498A235C80769301799E1985* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// float leftMenuValue = leftMenuButton.action.ReadValue<float>();
		InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD* L_0 = (&__this->___leftMenuButton_4);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_1;
		L_1 = InputActionProperty_get_action_mABF2197D9CC6586E5DFB0481CF9C1B2586F41A47(L_0, NULL);
		NullCheck(L_1);
		float L_2;
		L_2 = InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B(L_1, InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B_RuntimeMethod_var);
		V_0 = L_2;
		// if (!menuButtonPressed && leftMenuValue > .5)
		bool L_3 = __this->___menuButtonPressed_6;
		if (L_3)
		{
			goto IL_0033;
		}
	}
	{
		float L_4 = V_0;
		if ((!(((double)((double)L_4)) > ((double)(0.5)))))
		{
			goto IL_0033;
		}
	}
	{
		// PausedMenu();
		PauseMenu_PausedMenu_m0DECC4FEB0F6FA452A38DED9F8F8D1EBECB4BFC6(__this, NULL);
		// menuButtonPressed = true;
		__this->___menuButtonPressed_6 = (bool)1;
	}

IL_0033:
	{
		// if (leftMenuValue == 0)
		float L_5 = V_0;
		if ((!(((float)L_5) == ((float)(0.0f)))))
		{
			goto IL_0042;
		}
	}
	{
		// menuButtonPressed = false;
		__this->___menuButtonPressed_6 = (bool)0;
	}

IL_0042:
	{
		// }
		return;
	}
}
// System.Void PauseMenu::PausedMenu()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseMenu_PausedMenu_m0DECC4FEB0F6FA452A38DED9F8F8D1EBECB4BFC6 (PauseMenu_t36539DEACE8377BD498A235C80769301799E1985* __this, const RuntimeMethod* method) 
{
	{
		// paused = !paused;
		bool L_0 = __this->___paused_5;
		__this->___paused_5 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		// if (paused)
		bool L_1 = __this->___paused_5;
		if (!L_1)
		{
			goto IL_009d;
		}
	}
	{
		// pauseMenu.transform.position = new Vector3(playerLocation.position.x, pauseMenu.transform.position.y, pauseMenu.transform.position.z);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___pauseMenu_7;
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_2, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = __this->___playerLocation_8;
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		float L_6 = L_5.___x_2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = __this->___pauseMenu_7;
		NullCheck(L_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_7, NULL);
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_8, NULL);
		float L_10 = L_9.___y_3;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = __this->___pauseMenu_7;
		NullCheck(L_11);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_11, NULL);
		NullCheck(L_12);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_12, NULL);
		float L_14 = L_13.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		memset((&L_15), 0, sizeof(L_15));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_15), L_6, L_10, L_14, /*hidden argument*/NULL);
		NullCheck(L_3);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_3, L_15, NULL);
		// AudioListener.pause = true;
		AudioListener_set_pause_m4D52C9FFC6B10B0F281329FA0FB3CE2C64894F33((bool)1, NULL);
		// leftRaycastHand.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16 = __this->___leftRaycastHand_9;
		NullCheck(L_16);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_16, (bool)1, NULL);
		// righttRaycastHand.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17 = __this->___righttRaycastHand_10;
		NullCheck(L_17);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_17, (bool)1, NULL);
		// Time.timeScale = 0;
		Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331((0.0f), NULL);
		// pauseMenu.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18 = __this->___pauseMenu_7;
		NullCheck(L_18);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_18, (bool)1, NULL);
	}

IL_009d:
	{
		// if (!paused)
		bool L_19 = __this->___paused_5;
		if (L_19)
		{
			goto IL_00d9;
		}
	}
	{
		// pauseMenu.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20 = __this->___pauseMenu_7;
		NullCheck(L_20);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_20, (bool)0, NULL);
		// leftRaycastHand.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21 = __this->___leftRaycastHand_9;
		NullCheck(L_21);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_21, (bool)0, NULL);
		// righttRaycastHand.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22 = __this->___righttRaycastHand_10;
		NullCheck(L_22);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_22, (bool)0, NULL);
		// AudioListener.pause = false;
		AudioListener_set_pause_m4D52C9FFC6B10B0F281329FA0FB3CE2C64894F33((bool)0, NULL);
		// Time.timeScale = 1;
		Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331((1.0f), NULL);
	}

IL_00d9:
	{
		// }
		return;
	}
}
// System.Void PauseMenu::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseMenu__ctor_m81B0E020DC5008DA4D414200BAAF7122B430D826 (PauseMenu_t36539DEACE8377BD498A235C80769301799E1985* __this, const RuntimeMethod* method) 
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
// System.Void PlayerMoveTutorial::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMoveTutorial_Start_mF0CEB26763A969EC60BFF43895FE5F2E91F84241 (PlayerMoveTutorial_tEC7F7151F284331252160E45E31ACE5300DD81B8* __this, const RuntimeMethod* method) 
{
	{
		// playerStartingPosition = player.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___player_6;
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		__this->___playerStartingPosition_7 = L_1;
		// moveMotercycleScript.enabled = true;
		MoveMotercycle_t74DD318610089E92DB3704A7CD3807583741019C* L_2 = __this->___moveMotercycleScript_5;
		NullCheck(L_2);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_2, (bool)1, NULL);
		// dialogScript.PlayDialog(2);
		Dialog_t1A3474C8E604C61E022BDF82747C68A6C1E11972* L_3 = __this->___dialogScript_4;
		NullCheck(L_3);
		Dialog_PlayDialog_m85FEFB4AA86923BB70879607AAC1E773A1B03351(L_3, 2, NULL);
		// }
		return;
	}
}
// System.Void PlayerMoveTutorial::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMoveTutorial_Update_mA0C32093CBC662B8614D11564DF4CF7E384061D9 (PlayerMoveTutorial_tEC7F7151F284331252160E45E31ACE5300DD81B8* __this, const RuntimeMethod* method) 
{
	{
		// if (!playerMoved)
		bool L_0 = __this->___playerMoved_8;
		if (L_0)
		{
			goto IL_0038;
		}
	}
	{
		// if (Vector3.Distance(player.position, playerStartingPosition) > 2f)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = __this->___player_6;
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = __this->___playerStartingPosition_7;
		float L_4;
		L_4 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_2, L_3, NULL);
		if ((!(((float)L_4) > ((float)(2.0f)))))
		{
			goto IL_0038;
		}
	}
	{
		// dialogScript.PlayDialog(3);
		Dialog_t1A3474C8E604C61E022BDF82747C68A6C1E11972* L_5 = __this->___dialogScript_4;
		NullCheck(L_5);
		Dialog_PlayDialog_m85FEFB4AA86923BB70879607AAC1E773A1B03351(L_5, 3, NULL);
		// playerMoved = true;
		__this->___playerMoved_8 = (bool)1;
	}

IL_0038:
	{
		// if(playerMoved && !playerSlide)
		bool L_6 = __this->___playerMoved_8;
		if (!L_6)
		{
			goto IL_007b;
		}
	}
	{
		bool L_7 = __this->___playerSlide_9;
		if (L_7)
		{
			goto IL_007b;
		}
	}
	{
		// if (moveMotercycleScript.sliding == true)
		MoveMotercycle_t74DD318610089E92DB3704A7CD3807583741019C* L_8 = __this->___moveMotercycleScript_5;
		NullCheck(L_8);
		bool L_9 = L_8->___sliding_10;
		if (!L_9)
		{
			goto IL_007b;
		}
	}
	{
		// playerSlide = true;
		__this->___playerSlide_9 = (bool)1;
		// dialogScript.PlayDialog(4);
		Dialog_t1A3474C8E604C61E022BDF82747C68A6C1E11972* L_10 = __this->___dialogScript_4;
		NullCheck(L_10);
		Dialog_PlayDialog_m85FEFB4AA86923BB70879607AAC1E773A1B03351(L_10, 4, NULL);
		// spawnConstructionScript.enabled = true;
		SpawnConstruction_t86BC35D0E205283696846C4497F7FFD23CCA6206* L_11 = __this->___spawnConstructionScript_10;
		NullCheck(L_11);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_11, (bool)1, NULL);
		// this.enabled = false;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(__this, (bool)0, NULL);
	}

IL_007b:
	{
		// }
		return;
	}
}
// System.Void PlayerMoveTutorial::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMoveTutorial__ctor_m3161A8F93BE2C33FFA838DF8D4043A25A8AD5D7B (PlayerMoveTutorial_tEC7F7151F284331252160E45E31ACE5300DD81B8* __this, const RuntimeMethod* method) 
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
// System.Void QuitGame::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuitGame_Quit_mB3D610FAAD3F2CB2CA82FE90C5645A7D02E237EC (QuitGame_t9B04082D189C45AA569B5B3A60EB86A52CE0EADD* __this, const RuntimeMethod* method) 
{
	{
		// Application.Quit();
		Application_Quit_mE304382DB9A6455C2A474C8F364C7387F37E9281(NULL);
		// }
		return;
	}
}
// System.Void QuitGame::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuitGame__ctor_m33EF586CADC312B694613ABE4EC72575701B4CE9 (QuitGame_t9B04082D189C45AA569B5B3A60EB86A52CE0EADD* __this, const RuntimeMethod* method) 
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
// System.Void Restart::RestartLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Restart_RestartLevel_mBE2C3B5B37C55A7CC4761980B00C8950BA1CC57A (Restart_t123AB8241FB07FFA868B2C6C56FDA2638364FF4A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Scene_tA1DC762B79745EB5140F054C884855B922318356 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// SceneManager.LoadScene(SceneManager.GetActiveScene().name);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_0;
		L_0 = SceneManager_GetActiveScene_m0B320EC4302F51A71495D1CCD1A0FF9C2ED1FDC8(NULL);
		V_0 = L_0;
		String_t* L_1;
		L_1 = Scene_get_name_m3C818DFA663E159274DAD823B780C7616C5E2A8C((&V_0), NULL);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(L_1, NULL);
		// AudioListener.pause = false;
		AudioListener_set_pause_m4D52C9FFC6B10B0F281329FA0FB3CE2C64894F33((bool)0, NULL);
		// Time.timeScale = 1;
		Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331((1.0f), NULL);
		// }
		return;
	}
}
// System.Void Restart::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Restart__ctor_m93B334B8C5F5E8202069056D44EDC3CC903B2CBB (Restart_t123AB8241FB07FFA868B2C6C56FDA2638364FF4A* __this, const RuntimeMethod* method) 
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
// System.Void SecondEnemyWave::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SecondEnemyWave_Start_m589AA3E4BD2BC33BF14E9D8866021DD60BAAFBD4 (SecondEnemyWave_tB3A59368AF2A748087DA422C26ED304D3C276E5A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC8A527D9F2BE30181294916024788A882529CDAC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// dialogScript.PlayDialog(9);
		Dialog_t1A3474C8E604C61E022BDF82747C68A6C1E11972* L_0 = __this->___dialogScript_4;
		NullCheck(L_0);
		Dialog_PlayDialog_m85FEFB4AA86923BB70879607AAC1E773A1B03351(L_0, ((int32_t)9), NULL);
		// Invoke("SpawnMachineGunTruck", 1.5f);
		MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB(__this, _stringLiteralC8A527D9F2BE30181294916024788A882529CDAC, (1.5f), NULL);
		// }
		return;
	}
}
// System.Void SecondEnemyWave::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SecondEnemyWave_Update_mA1ABC65E59470FC2D4204284ACD6984C1FBD82B0 (SecondEnemyWave_tB3A59368AF2A748087DA422C26ED304D3C276E5A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral18D373BF5292FA733D7177C9B62A5D1B0917F00B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (firstEnemySpawned && machineGunTruck.activeSelf == false && !firstEnemyKilled)
		bool L_0 = __this->___firstEnemySpawned_7;
		if (!L_0)
		{
			goto IL_0041;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___machineGunTruck_5;
		NullCheck(L_1);
		bool L_2;
		L_2 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_1, NULL);
		if (L_2)
		{
			goto IL_0041;
		}
	}
	{
		bool L_3 = __this->___firstEnemyKilled_8;
		if (L_3)
		{
			goto IL_0041;
		}
	}
	{
		// firstEnemyKilled = true;
		__this->___firstEnemyKilled_8 = (bool)1;
		// dialogScript.PlayDialog(10);
		Dialog_t1A3474C8E604C61E022BDF82747C68A6C1E11972* L_4 = __this->___dialogScript_4;
		NullCheck(L_4);
		Dialog_PlayDialog_m85FEFB4AA86923BB70879607AAC1E773A1B03351(L_4, ((int32_t)10), NULL);
		// Invoke("SpawnShockwaveTruck", 1.5f);
		MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB(__this, _stringLiteral18D373BF5292FA733D7177C9B62A5D1B0917F00B, (1.5f), NULL);
	}

IL_0041:
	{
		// if (secondEnemySpawned && shockwaveTruck.activeSelf == false)
		bool L_5 = __this->___secondEnemySpawned_9;
		if (!L_5)
		{
			goto IL_0069;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___shockwaveTruck_6;
		NullCheck(L_6);
		bool L_7;
		L_7 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_6, NULL);
		if (L_7)
		{
			goto IL_0069;
		}
	}
	{
		// this.enabled = false;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(__this, (bool)0, NULL);
		// trailer.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = __this->___trailer_10;
		NullCheck(L_8);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_8, (bool)1, NULL);
	}

IL_0069:
	{
		// }
		return;
	}
}
// System.Void SecondEnemyWave::SpawnMachineGunTruck()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SecondEnemyWave_SpawnMachineGunTruck_m672D5461765FAB4CD16B06A971CA5ED49DBD88D7 (SecondEnemyWave_tB3A59368AF2A748087DA422C26ED304D3C276E5A* __this, const RuntimeMethod* method) 
{
	{
		// machineGunTruck.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___machineGunTruck_5;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// firstEnemySpawned = true;
		__this->___firstEnemySpawned_7 = (bool)1;
		// }
		return;
	}
}
// System.Void SecondEnemyWave::SpawnShockwaveTruck()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SecondEnemyWave_SpawnShockwaveTruck_m9147839282EC7A30882EADF9A643DF133878E826 (SecondEnemyWave_tB3A59368AF2A748087DA422C26ED304D3C276E5A* __this, const RuntimeMethod* method) 
{
	{
		// shockwaveTruck.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___shockwaveTruck_6;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// secondEnemySpawned = true;
		__this->___secondEnemySpawned_9 = (bool)1;
		// }
		return;
	}
}
// System.Void SecondEnemyWave::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SecondEnemyWave__ctor_mEFEBC2452F53BD9340503B5B836865020470E296 (SecondEnemyWave_tB3A59368AF2A748087DA422C26ED304D3C276E5A* __this, const RuntimeMethod* method) 
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
// System.Void StartGame::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartGame_Update_m06A902B9146FBC1E742ACDA338F6343203094A80 (StartGame_t90AD9E5EF32F94D01D593C5340B2CCAD86A98E07* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float G_B2_0 = 0.0f;
	float G_B1_0 = 0.0f;
	{
		// float leftGripValue = leftGrip.action.ReadValue<float>();
		InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD* L_0 = (&__this->___leftGrip_6);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_1;
		L_1 = InputActionProperty_get_action_mABF2197D9CC6586E5DFB0481CF9C1B2586F41A47(L_0, NULL);
		NullCheck(L_1);
		float L_2;
		L_2 = InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B(L_1, InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B_RuntimeMethod_var);
		// float rightGripValue = rightGrip.action.ReadValue<float>();
		InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD* L_3 = (&__this->___rightGrip_7);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_4;
		L_4 = InputActionProperty_get_action_mABF2197D9CC6586E5DFB0481CF9C1B2586F41A47(L_3, NULL);
		NullCheck(L_4);
		float L_5;
		L_5 = InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B(L_4, InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B_RuntimeMethod_var);
		V_0 = L_5;
		// timer += Time.deltaTime;
		float L_6 = __this->___timer_12;
		float L_7;
		L_7 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___timer_12 = ((float)il2cpp_codegen_add(L_6, L_7));
		// if (timer >= 10)
		float L_8 = __this->___timer_12;
		G_B1_0 = L_2;
		if ((!(((float)L_8) >= ((float)(10.0f)))))
		{
			G_B2_0 = L_2;
			goto IL_0057;
		}
	}
	{
		// DialogScript.PlayDialog(0);
		Dialog_t1A3474C8E604C61E022BDF82747C68A6C1E11972* L_9 = __this->___DialogScript_13;
		NullCheck(L_9);
		Dialog_PlayDialog_m85FEFB4AA86923BB70879607AAC1E773A1B03351(L_9, 0, NULL);
		// timer = 0;
		__this->___timer_12 = (0.0f);
		G_B2_0 = G_B1_0;
	}

IL_0057:
	{
		// if (leftGripValue >= 0.5f && rightGripValue >= 0.5f)
		if ((!(((float)G_B2_0) >= ((float)(0.5f)))))
		{
			goto IL_00b3;
		}
	}
	{
		float L_10 = V_0;
		if ((!(((float)L_10) >= ((float)(0.5f)))))
		{
			goto IL_00b3;
		}
	}
	{
		// if (!audioClipIsPlaying)
		bool L_11 = __this->___audioClipIsPlaying_10;
		if (L_11)
		{
			goto IL_00b3;
		}
	}
	{
		// DialogScript.femaleAudioSource.Stop();
		Dialog_t1A3474C8E604C61E022BDF82747C68A6C1E11972* L_12 = __this->___DialogScript_13;
		NullCheck(L_12);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_13 = L_12->___femaleAudioSource_5;
		NullCheck(L_13);
		AudioSource_Stop_m318F17F17A147C77FF6E0A5A7A6BE057DB90F537(L_13, NULL);
		// timer = 0;
		__this->___timer_12 = (0.0f);
		// slowDust.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = __this->___slowDust_15;
		NullCheck(L_14);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_14, (bool)0, NULL);
		// audioClipIsPlaying = true;
		__this->___audioClipIsPlaying_10 = (bool)1;
		// engineRev.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_15 = __this->___engineRev_9;
		NullCheck(L_15);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_15, NULL);
		// shakeObject.enabled = true;
		ShakeObject_t08A5B892F3093E888A2496382BA495104AB2F04A* L_16 = __this->___shakeObject_11;
		NullCheck(L_16);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_16, (bool)1, NULL);
	}

IL_00b3:
	{
		// if (engineRev.isPlaying)
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_17 = __this->___engineRev_9;
		NullCheck(L_17);
		bool L_18;
		L_18 = AudioSource_get_isPlaying_mC203303F2F7146B2C056CB47B9391463FDF408FC(L_17, NULL);
		if (!L_18)
		{
			goto IL_0106;
		}
	}
	{
		// hapticStrength += Time.deltaTime / 5;
		float L_19 = __this->___hapticStrength_8;
		float L_20;
		L_20 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___hapticStrength_8 = ((float)il2cpp_codegen_add(L_19, ((float)(L_20/(5.0f)))));
		// leftController.SendHapticImpulse(hapticStrength, 0.1f);
		XRBaseController_t44C1BB30A7E1D279DD2508F34D3352B33A9AD60C* L_21 = __this->___leftController_4;
		float L_22 = __this->___hapticStrength_8;
		NullCheck(L_21);
		bool L_23;
		L_23 = VirtualFuncInvoker2< bool, float, float >::Invoke(14 /* System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseController::SendHapticImpulse(System.Single,System.Single) */, L_21, L_22, (0.100000001f));
		// rightController.SendHapticImpulse(hapticStrength, 0.1f);
		XRBaseController_t44C1BB30A7E1D279DD2508F34D3352B33A9AD60C* L_24 = __this->___rightController_5;
		float L_25 = __this->___hapticStrength_8;
		NullCheck(L_24);
		bool L_26;
		L_26 = VirtualFuncInvoker2< bool, float, float >::Invoke(14 /* System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseController::SendHapticImpulse(System.Single,System.Single) */, L_24, L_25, (0.100000001f));
	}

IL_0106:
	{
		// if (!engineRev.isPlaying && audioClipIsPlaying)
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_27 = __this->___engineRev_9;
		NullCheck(L_27);
		bool L_28;
		L_28 = AudioSource_get_isPlaying_mC203303F2F7146B2C056CB47B9391463FDF408FC(L_27, NULL);
		if (L_28)
		{
			goto IL_0139;
		}
	}
	{
		bool L_29 = __this->___audioClipIsPlaying_10;
		if (!L_29)
		{
			goto IL_0139;
		}
	}
	{
		// motorcycleTakeoffScript.enabled = true;
		MotorcycleTakeoff_tAC47DC8F5A468CF6B428AB65A25CD2FEC94BBE32* L_30 = __this->___motorcycleTakeoffScript_14;
		NullCheck(L_30);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_30, (bool)1, NULL);
		// this.enabled = false;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(__this, (bool)0, NULL);
		// oncomingTrafficAudio.Stop();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_31 = __this->___oncomingTrafficAudio_16;
		NullCheck(L_31);
		AudioSource_Stop_m318F17F17A147C77FF6E0A5A7A6BE057DB90F537(L_31, NULL);
	}

IL_0139:
	{
		// }
		return;
	}
}
// System.Void StartGame::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartGame__ctor_mCE51A8179D9D10D4F741CDAB63ED2DA16C00B797 (StartGame_t90AD9E5EF32F94D01D593C5340B2CCAD86A98E07* __this, const RuntimeMethod* method) 
{
	{
		// private float timer = 5;
		__this->___timer_12 = (5.0f);
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
// System.Void TakeDownBoss::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TakeDownBoss_Start_m6E2F2B9B3297BA3C5274D6E7CB590B695F63DBD6 (TakeDownBoss_tADD32F2E240D31F8ED81489EF0B78769AA5D4B6B* __this, const RuntimeMethod* method) 
{
	{
		// dialogScript.PlayDialog(18);
		Dialog_t1A3474C8E604C61E022BDF82747C68A6C1E11972* L_0 = __this->___dialogScript_17;
		NullCheck(L_0);
		Dialog_PlayDialog_m85FEFB4AA86923BB70879607AAC1E773A1B03351(L_0, ((int32_t)18), NULL);
		// }
		return;
	}
}
// System.Void TakeDownBoss::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TakeDownBoss_Update_m7C9CD4347A2EA6E06A12600915A117B92076EE65 (TakeDownBoss_tADD32F2E240D31F8ED81489EF0B78769AA5D4B6B* __this, const RuntimeMethod* method) 
{
	{
		// if (canSlide)
		bool L_0 = __this->___canSlide_7;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		// SlideIntoBoss();
		TakeDownBoss_SlideIntoBoss_m34BCB3284D332C6BF58BCEFE3FFFC385233D68EB(__this, NULL);
	}

IL_000e:
	{
		// if (movingBoss1)
		bool L_1 = __this->___movingBoss1_11;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		// MoveBoss1();
		TakeDownBoss_MoveBoss1_m41005F84F722DC657C4B82F1F05F2B9D383B5C7B(__this, NULL);
	}

IL_001c:
	{
		// if(movingBoss2)
		bool L_2 = __this->___movingBoss2_12;
		if (!L_2)
		{
			goto IL_002a;
		}
	}
	{
		// MoveBoss2();
		TakeDownBoss_MoveBoss2_mA1EDFAEDE8289B333DDA22F146B265B83E362648(__this, NULL);
	}

IL_002a:
	{
		// }
		return;
	}
}
// System.Void TakeDownBoss::SlideIntoBoss()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TakeDownBoss_SlideIntoBoss_m34BCB3284D332C6BF58BCEFE3FFFC385233D68EB (TakeDownBoss_tADD32F2E240D31F8ED81489EF0B78769AA5D4B6B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputAction_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m8D02BA85303ABD48D9963369E106B0C83A393FBF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA1B3A4AFA5858091E5AF1C62D06F4B9A2048469A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9069C149DC47D93EE551A25A091EE74D6D03702);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Vector2 xAxisValue = moveStick.action.ReadValue<Vector2>();
		InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD* L_0 = (&__this->___moveStick_4);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_1;
		L_1 = InputActionProperty_get_action_mABF2197D9CC6586E5DFB0481CF9C1B2586F41A47(L_0, NULL);
		NullCheck(L_1);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = InputAction_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m8D02BA85303ABD48D9963369E106B0C83A393FBF(L_1, InputAction_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m8D02BA85303ABD48D9963369E106B0C83A393FBF_RuntimeMethod_var);
		// if (xAxisValue.y < -.7)
		float L_3 = L_2.___y_1;
		if ((!(((double)((double)L_3)) < ((double)(-0.69999999999999996)))))
		{
			goto IL_005a;
		}
	}
	{
		// canSlide = false;
		__this->___canSlide_7 = (bool)0;
		// movingBoss1 = true;
		__this->___movingBoss1_11 = (bool)1;
		// motorcycleAnimator.Play("Motorcycle Slide");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_4 = __this->___motorcycleAnimator_5;
		NullCheck(L_4);
		Animator_Play_m0F6A9F84B2E256E644D56C34A7A9BD622CB00FF9(L_4, _stringLiteralA1B3A4AFA5858091E5AF1C62D06F4B9A2048469A, NULL);
		// cameraOffset.Play("Sliding");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_5 = __this->___cameraOffset_6;
		NullCheck(L_5);
		Animator_Play_m0F6A9F84B2E256E644D56C34A7A9BD622CB00FF9(L_5, _stringLiteralF9069C149DC47D93EE551A25A091EE74D6D03702, NULL);
		// slidingAudio.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_6 = __this->___slidingAudio_21;
		NullCheck(L_6);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_6, NULL);
	}

IL_005a:
	{
		// }
		return;
	}
}
// System.Void TakeDownBoss::MoveBoss1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TakeDownBoss_MoveBoss1_m41005F84F722DC657C4B82F1F05F2B9D383B5C7B (TakeDownBoss_tADD32F2E240D31F8ED81489EF0B78769AA5D4B6B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C5DE4875C6043C4954B55D5BB6BB91E1E80B514);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7598EFBF4A029BF0B3B286271D8C3B865F7A66FA);
		s_Il2CppMethodInitialized = true;
	}
	{
		// boss.transform.position = Vector3.MoveTowards(boss.transform.position, bossdestination, bossSpeed * Time.deltaTime);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___boss_8;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___boss_8;
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_2, NULL);
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = __this->___bossdestination_10;
		float L_6 = __this->___bossSpeed_9;
		float L_7;
		L_7 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_MoveTowards_m0363264647799F3173AC37F8E819F98298249B08_inline(L_4, L_5, ((float)il2cpp_codegen_multiply(L_6, L_7)), NULL);
		NullCheck(L_1);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_1, L_8, NULL);
		// if (Vector3.Distance(boss.transform.position, bossdestination) < 0.1f)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = __this->___boss_8;
		NullCheck(L_9);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_9, NULL);
		NullCheck(L_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_10, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = __this->___bossdestination_10;
		float L_13;
		L_13 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_11, L_12, NULL);
		if ((!(((float)L_13) < ((float)(0.100000001f)))))
		{
			goto IL_00d8;
		}
	}
	{
		// movingBoss1 = false;
		__this->___movingBoss1_11 = (bool)0;
		// movingBoss2 = true;
		__this->___movingBoss2_12 = (bool)1;
		// bossBikeAnimation.Play("fall");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_14 = __this->___bossBikeAnimation_13;
		NullCheck(L_14);
		Animator_Play_m0F6A9F84B2E256E644D56C34A7A9BD622CB00FF9(L_14, _stringLiteral7598EFBF4A029BF0B3B286271D8C3B865F7A66FA, NULL);
		// bossdestination = new Vector3(16.3f, 0, 0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		memset((&L_15), 0, sizeof(L_15));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_15), (16.2999992f), (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->___bossdestination_10 = L_15;
		// bossSpeed = 1;
		__this->___bossSpeed_9 = (1.0f);
		// Invoke("BossFallAnimation", 2);
		MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB(__this, _stringLiteral0C5DE4875C6043C4954B55D5BB6BB91E1E80B514, (2.0f), NULL);
		// rightController.SendHapticImpulse(0.9f, 0.5f);
		XRBaseController_t44C1BB30A7E1D279DD2508F34D3352B33A9AD60C* L_16 = __this->___rightController_19;
		NullCheck(L_16);
		bool L_17;
		L_17 = VirtualFuncInvoker2< bool, float, float >::Invoke(14 /* System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseController::SendHapticImpulse(System.Single,System.Single) */, L_16, (0.899999976f), (0.5f));
		// leftController.SendHapticImpulse(0.9f, 0.5f);
		XRBaseController_t44C1BB30A7E1D279DD2508F34D3352B33A9AD60C* L_18 = __this->___leftController_20;
		NullCheck(L_18);
		bool L_19;
		L_19 = VirtualFuncInvoker2< bool, float, float >::Invoke(14 /* System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseController::SendHapticImpulse(System.Single,System.Single) */, L_18, (0.899999976f), (0.5f));
	}

IL_00d8:
	{
		// }
		return;
	}
}
// System.Void TakeDownBoss::MoveBoss2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TakeDownBoss_MoveBoss2_mA1EDFAEDE8289B333DDA22F146B265B83E362648 (TakeDownBoss_tADD32F2E240D31F8ED81489EF0B78769AA5D4B6B* __this, const RuntimeMethod* method) 
{
	{
		// boss.transform.position = Vector3.MoveTowards(boss.transform.position, bossdestination, bossSpeed * Time.deltaTime);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___boss_8;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___boss_8;
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_2, NULL);
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = __this->___bossdestination_10;
		float L_6 = __this->___bossSpeed_9;
		float L_7;
		L_7 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_MoveTowards_m0363264647799F3173AC37F8E819F98298249B08_inline(L_4, L_5, ((float)il2cpp_codegen_multiply(L_6, L_7)), NULL);
		NullCheck(L_1);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_1, L_8, NULL);
		// if (Vector3.Distance(boss.transform.position, bossdestination) < 0.1f)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = __this->___boss_8;
		NullCheck(L_9);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_9, NULL);
		NullCheck(L_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_10, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = __this->___bossdestination_10;
		float L_13;
		L_13 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_11, L_12, NULL);
		if ((!(((float)L_13) < ((float)(0.100000001f)))))
		{
			goto IL_0060;
		}
	}
	{
		// movingBoss2 = false;
		__this->___movingBoss2_12 = (bool)0;
	}

IL_0060:
	{
		// }
		return;
	}
}
// System.Void TakeDownBoss::BossFallAnimation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TakeDownBoss_BossFallAnimation_m5BAF4B76D11B06E341BB61FF86EE5EA9655ED2FC (TakeDownBoss_tADD32F2E240D31F8ED81489EF0B78769AA5D4B6B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF9836BA7665CCE7BF53FD569665EF2D03B9DF1D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// bossSpeed = 25;
		__this->___bossSpeed_9 = (25.0f);
		// ChangeRoadSpeed();
		TakeDownBoss_ChangeRoadSpeed_m38663AACAC1CC123FAD6062A4EBF753ECF62007C(__this, NULL);
		// Invoke("DisableScript", 1.5f);
		MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB(__this, _stringLiteralBF9836BA7665CCE7BF53FD569665EF2D03B9DF1D, (1.5f), NULL);
		// slowDust.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___slowDust_22;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// fastDust.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___fastDust_23;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void TakeDownBoss::BossRoll()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TakeDownBoss_BossRoll_mA31C1CC874FFCDEC944CD092A5DAA4D94F2888D2 (TakeDownBoss_tADD32F2E240D31F8ED81489EF0B78769AA5D4B6B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA12C13441E908B46D0E8552680587F5595D959F4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// bossAnimation.Play("Roll");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = __this->___bossAnimation_14;
		NullCheck(L_0);
		Animator_Play_m0F6A9F84B2E256E644D56C34A7A9BD622CB00FF9(L_0, _stringLiteralA12C13441E908B46D0E8552680587F5595D959F4, NULL);
		// }
		return;
	}
}
// System.Void TakeDownBoss::ChangeRoadSpeed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TakeDownBoss_ChangeRoadSpeed_m38663AACAC1CC123FAD6062A4EBF753ECF62007C (TakeDownBoss_tADD32F2E240D31F8ED81489EF0B78769AA5D4B6B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisMoveRoad_t74517ABB7841065BF051268E60421CE6BF92B857_m968F0054483460BC8E3B8D96D3CE5FDEACF3D747_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// foreach (GameObject road in roads)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0 = __this->___roads_16;
		V_0 = L_0;
		V_1 = 0;
		goto IL_0021;
	}

IL_000b:
	{
		// foreach (GameObject road in roads)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		// road.GetComponent<MoveRoad>().speed = 0;
		NullCheck(L_4);
		MoveRoad_t74517ABB7841065BF051268E60421CE6BF92B857* L_5;
		L_5 = GameObject_GetComponent_TisMoveRoad_t74517ABB7841065BF051268E60421CE6BF92B857_m968F0054483460BC8E3B8D96D3CE5FDEACF3D747(L_4, GameObject_GetComponent_TisMoveRoad_t74517ABB7841065BF051268E60421CE6BF92B857_m968F0054483460BC8E3B8D96D3CE5FDEACF3D747_RuntimeMethod_var);
		NullCheck(L_5);
		L_5->___speed_4 = (0.0f);
		int32_t L_6 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_0021:
	{
		// foreach (GameObject road in roads)
		int32_t L_7 = V_1;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_8 = V_0;
		NullCheck(L_8);
		if ((((int32_t)L_7) < ((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length)))))
		{
			goto IL_000b;
		}
	}
	{
		// }
		return;
	}
}
// System.Void TakeDownBoss::DisableScript()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TakeDownBoss_DisableScript_m24D662496C4B93253EF9EB31C8F77EFE6001021D (TakeDownBoss_tADD32F2E240D31F8ED81489EF0B78769AA5D4B6B* __this, const RuntimeMethod* method) 
{
	{
		// this.enabled = false;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(__this, (bool)0, NULL);
		// gameOverScript.enabled = true;
		GameOver_tC0D72A03377DA58EE60B10DE7838DBDC0A75798D* L_0 = __this->___gameOverScript_18;
		NullCheck(L_0);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_0, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void TakeDownBoss::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TakeDownBoss__ctor_m4AC15FD04C0FAC5C1E37FB56B69FCF643B21F601 (TakeDownBoss_tADD32F2E240D31F8ED81489EF0B78769AA5D4B6B* __this, const RuntimeMethod* method) 
{
	{
		// private bool canSlide = true;
		__this->___canSlide_7 = (bool)1;
		// private Vector3 bossdestination = new Vector3(16.3f, 0, -34.2f);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_0), (16.2999992f), (0.0f), (-34.2000008f), /*hidden argument*/NULL);
		__this->___bossdestination_10 = L_0;
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
// System.Void ThirdEnemyWave::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdEnemyWave_Start_m4F918DAB363020B0533EB4CD423F3146EC926671 (ThirdEnemyWave_tD04A8825C0EC6C1883168EE7A0C72DC93A124812* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEE90124D9F1D9E375655D02D0DA0523793E696F4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// dialogScript.PlayDialog(14);
		Dialog_t1A3474C8E604C61E022BDF82747C68A6C1E11972* L_0 = __this->___dialogScript_4;
		NullCheck(L_0);
		Dialog_PlayDialog_m85FEFB4AA86923BB70879607AAC1E773A1B03351(L_0, ((int32_t)14), NULL);
		// Invoke("SpawnFirstWave", 2.5f);
		MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB(__this, _stringLiteralEE90124D9F1D9E375655D02D0DA0523793E696F4, (2.5f), NULL);
		// }
		return;
	}
}
// System.Void ThirdEnemyWave::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdEnemyWave_Update_m3D1465677D5BE66E73ED01812B960212033095F9 (ThirdEnemyWave_tD04A8825C0EC6C1883168EE7A0C72DC93A124812* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C6D0409D92CB23F0C005C52F4A6D1EC0D005062);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE514EA69204FCFA704553F654C6072C58C720EAF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!firstWaveKilled && firstWaveSpawned)
		bool L_0 = __this->___firstWaveKilled_11;
		if (L_0)
		{
			goto IL_004e;
		}
	}
	{
		bool L_1 = __this->___firstWaveSpawned_10;
		if (!L_1)
		{
			goto IL_004e;
		}
	}
	{
		// if (leftBikeEnemy.activeSelf == false && rightBikeEnemy.activeSelf == false)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___leftBikeEnemy_8;
		NullCheck(L_2);
		bool L_3;
		L_3 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_2, NULL);
		if (L_3)
		{
			goto IL_004e;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___rightBikeEnemy_9;
		NullCheck(L_4);
		bool L_5;
		L_5 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_4, NULL);
		if (L_5)
		{
			goto IL_004e;
		}
	}
	{
		// firstWaveKilled = true;
		__this->___firstWaveKilled_11 = (bool)1;
		// dialogScript.PlayDialog(15);
		Dialog_t1A3474C8E604C61E022BDF82747C68A6C1E11972* L_6 = __this->___dialogScript_4;
		NullCheck(L_6);
		Dialog_PlayDialog_m85FEFB4AA86923BB70879607AAC1E773A1B03351(L_6, ((int32_t)15), NULL);
		// Invoke("SpawnSecondWave", 2);
		MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB(__this, _stringLiteral3C6D0409D92CB23F0C005C52F4A6D1EC0D005062, (2.0f), NULL);
	}

IL_004e:
	{
		// if (!secondWaveKilled && secondWaveSpawned)
		bool L_7 = __this->___secondWaveKilled_13;
		if (L_7)
		{
			goto IL_00a9;
		}
	}
	{
		bool L_8 = __this->___secondWaveSpawned_12;
		if (!L_8)
		{
			goto IL_00a9;
		}
	}
	{
		// if (machinegunTruck.activeSelf == false && leftBikeEnemy.activeSelf == false && rightBikeEnemy.activeSelf == false)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = __this->___machinegunTruck_5;
		NullCheck(L_9);
		bool L_10;
		L_10 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_9, NULL);
		if (L_10)
		{
			goto IL_00a9;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = __this->___leftBikeEnemy_8;
		NullCheck(L_11);
		bool L_12;
		L_12 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_11, NULL);
		if (L_12)
		{
			goto IL_00a9;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = __this->___rightBikeEnemy_9;
		NullCheck(L_13);
		bool L_14;
		L_14 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_13, NULL);
		if (L_14)
		{
			goto IL_00a9;
		}
	}
	{
		// secondWaveKilled = true;
		__this->___secondWaveKilled_13 = (bool)1;
		// dialogScript.PlayDialog(16);
		Dialog_t1A3474C8E604C61E022BDF82747C68A6C1E11972* L_15 = __this->___dialogScript_4;
		NullCheck(L_15);
		Dialog_PlayDialog_m85FEFB4AA86923BB70879607AAC1E773A1B03351(L_15, ((int32_t)16), NULL);
		// Invoke("SpawnTank", 1.5f);
		MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB(__this, _stringLiteralE514EA69204FCFA704553F654C6072C58C720EAF, (1.5f), NULL);
	}

IL_00a9:
	{
		// if (tankspawned)
		bool L_16 = __this->___tankspawned_14;
		if (!L_16)
		{
			goto IL_00dd;
		}
	}
	{
		// if (tank.activeSelf == false)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17 = __this->___tank_7;
		NullCheck(L_17);
		bool L_18;
		L_18 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_17, NULL);
		if (L_18)
		{
			goto IL_00dd;
		}
	}
	{
		// this.enabled = false;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(__this, (bool)0, NULL);
		// dragRaceScript.enabled = true;
		DragRace_tA94C72E0C0B97E94EF6299F951A0CABB84B5540D* L_19 = __this->___dragRaceScript_15;
		NullCheck(L_19);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_19, (bool)1, NULL);
		// playerBoxCollider.enabled = false;
		BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* L_20 = __this->___playerBoxCollider_16;
		NullCheck(L_20);
		Collider_set_enabled_m8D5C3B5047592D227A52560FC9723D176E209F70(L_20, (bool)0, NULL);
	}

IL_00dd:
	{
		// }
		return;
	}
}
// System.Void ThirdEnemyWave::SpawnFirstWave()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdEnemyWave_SpawnFirstWave_m802B4CD6381AE8E4AECB6C0EBB69F7AD948EB3BE (ThirdEnemyWave_tD04A8825C0EC6C1883168EE7A0C72DC93A124812* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB0C4C7CD841974DEAC964A4A08FC4C81BEF07C4F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// leftBikeEnemy.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___leftBikeEnemy_8;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// Invoke("SpawnRightBikeEnemy", .37f);
		MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB(__this, _stringLiteralB0C4C7CD841974DEAC964A4A08FC4C81BEF07C4F, (0.370000005f), NULL);
		// firstWaveSpawned = true;
		__this->___firstWaveSpawned_10 = (bool)1;
		// }
		return;
	}
}
// System.Void ThirdEnemyWave::SpawnSecondWave()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdEnemyWave_SpawnSecondWave_mE0E57B213C535EF1563C04C9EE91BD6B8572C48B (ThirdEnemyWave_tD04A8825C0EC6C1883168EE7A0C72DC93A124812* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB0C4C7CD841974DEAC964A4A08FC4C81BEF07C4F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF7E015892461F998777AAFE13781FA77EB87DD4D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// machinegunTruck.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___machinegunTruck_5;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// Invoke("SpawnLeftBikeEnemy", .5f);
		MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB(__this, _stringLiteralF7E015892461F998777AAFE13781FA77EB87DD4D, (0.5f), NULL);
		// Invoke("SpawnRightBikeEnemy", .87f);
		MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB(__this, _stringLiteralB0C4C7CD841974DEAC964A4A08FC4C81BEF07C4F, (0.870000005f), NULL);
		// secondWaveSpawned = true;
		__this->___secondWaveSpawned_12 = (bool)1;
		// }
		return;
	}
}
// System.Void ThirdEnemyWave::SpawnTank()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdEnemyWave_SpawnTank_m788BC06CC2EA641D3A4DA64AD66441C78ACFE209 (ThirdEnemyWave_tD04A8825C0EC6C1883168EE7A0C72DC93A124812* __this, const RuntimeMethod* method) 
{
	{
		// tank.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___tank_7;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// tankspawned = true;
		__this->___tankspawned_14 = (bool)1;
		// }
		return;
	}
}
// System.Void ThirdEnemyWave::SpawnLeftBikeEnemy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdEnemyWave_SpawnLeftBikeEnemy_m15C9779C4209ADF81C7CE326D8514B4C9742673E (ThirdEnemyWave_tD04A8825C0EC6C1883168EE7A0C72DC93A124812* __this, const RuntimeMethod* method) 
{
	{
		// leftBikeEnemy.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___leftBikeEnemy_8;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void ThirdEnemyWave::SpawnRightBikeEnemy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdEnemyWave_SpawnRightBikeEnemy_mA2C07AD2DA28BCB82EDD9480EFE5490A3F306D84 (ThirdEnemyWave_tD04A8825C0EC6C1883168EE7A0C72DC93A124812* __this, const RuntimeMethod* method) 
{
	{
		// rightBikeEnemy.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___rightBikeEnemy_9;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void ThirdEnemyWave::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdEnemyWave__ctor_m3901954AC7ED0EED33E60949F7A76FC7447D387D (ThirdEnemyWave_tD04A8825C0EC6C1883168EE7A0C72DC93A124812* __this, const RuntimeMethod* method) 
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
// System.Void tank::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tank_Start_m4ADDD6BC6D984221AB32F247938916E1539D4B28 (tank_t47FB66C52AAA5F596D92FD00F8948CF0A9870D95* __this, const RuntimeMethod* method) 
{
	{
		// timeUntilChargePlayer = Random.Range(3f, 6f);
		float L_0;
		L_0 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494((3.0f), (6.0f), NULL);
		__this->___timeUntilChargePlayer_21 = L_0;
		// }
		return;
	}
}
// System.Void tank::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tank_Update_m89D9A5C749E1B6F18C369272BC25AFAFF17828C2 (tank_t47FB66C52AAA5F596D92FD00F8948CF0A9870D95* __this, const RuntimeMethod* method) 
{
	{
		// timer += Time.deltaTime;
		float L_0 = __this->___timer_7;
		float L_1;
		L_1 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___timer_7 = ((float)il2cpp_codegen_add(L_0, L_1));
		// if (movingToStartPosition)
		bool L_2 = __this->___movingToStartPosition_26;
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		// moveToStartingPositiob();
		tank_moveToStartingPositiob_mA6A33E866CA9D41D6CC73927BFA50D312B4801FC(__this, NULL);
	}

IL_0020:
	{
		// if (shootAttack)
		bool L_3 = __this->___shootAttack_8;
		if (!L_3)
		{
			goto IL_002e;
		}
	}
	{
		// spawnFirstLine();
		tank_spawnFirstLine_mA7E82981AF42EE36E23B6A37B7C0DCFEF059F791(__this, NULL);
	}

IL_002e:
	{
		// if (switchToMoveAttackInProgress)
		bool L_4 = __this->___switchToMoveAttackInProgress_24;
		if (!L_4)
		{
			goto IL_003c;
		}
	}
	{
		// switchToMoveAttack();
		tank_switchToMoveAttack_m875A5F8086FEA1DB2D7B3FA93800B1B86BD7A216(__this, NULL);
	}

IL_003c:
	{
		// if (moveAttack)
		bool L_5 = __this->___moveAttack_23;
		if (!L_5)
		{
			goto IL_004a;
		}
	}
	{
		// TankMoving();
		tank_TankMoving_m81EBD7DDCEF566FB557FD03FE32CA6629D2A226B(__this, NULL);
	}

IL_004a:
	{
		// }
		return;
	}
}
// System.Void tank::spawnFirstLine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tank_spawnFirstLine_mA7E82981AF42EE36E23B6A37B7C0DCFEF059F791 (tank_t47FB66C52AAA5F596D92FD00F8948CF0A9870D95* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisTankBullet_t5BB5DC60FCD23BF60489A4772CC4678400F0F7AA_m6AC26BF562278ABECCC5A0D04F030A21C463C358_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// if (!doneSpawningLine)
		bool L_0 = __this->___doneSpawningLine_9;
		if (L_0)
		{
			goto IL_0033;
		}
	}
	{
		// for (int i = startOfIndex; i < endOfIndex; i++)
		int32_t L_1 = __this->___startOfIndex_11;
		V_0 = L_1;
		goto IL_002a;
	}

IL_0011:
	{
		// tankBullets[i].SetActive(true);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_2 = __this->___tankBullets_4;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)1, NULL);
		// doneSpawningLine = true;
		__this->___doneSpawningLine_9 = (bool)1;
		// for (int i = startOfIndex; i < endOfIndex; i++)
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_002a:
	{
		// for (int i = startOfIndex; i < endOfIndex; i++)
		int32_t L_7 = V_0;
		int32_t L_8 = __this->___endOfIndex_12;
		if ((((int32_t)L_7) < ((int32_t)L_8)))
		{
			goto IL_0011;
		}
	}

IL_0033:
	{
		// for (int i = startOfIndex; i < endOfIndex; i++)
		int32_t L_9 = __this->___startOfIndex_11;
		V_1 = L_9;
		goto IL_00f3;
	}

IL_003f:
	{
		// tankBullets[i].transform.position = new Vector3(Mathf.Lerp(bulletSpawnPoint.position.x, firstLine[i].position.x, timer / 2), Mathf.Lerp(bulletSpawnPoint.position.y, firstLine[i].position.y, timer / 2), Mathf.Lerp(bulletSpawnPoint.position.z, firstLine[i].position.z, timer / 2));
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_10 = __this->___tankBullets_4;
		int32_t L_11 = V_1;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		NullCheck(L_13);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_13, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15 = __this->___bulletSpawnPoint_5;
		NullCheck(L_15);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_15, NULL);
		float L_17 = L_16.___x_2;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_18 = __this->___firstLine_6;
		int32_t L_19 = V_1;
		NullCheck(L_18);
		int32_t L_20 = L_19;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		NullCheck(L_21);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_21, NULL);
		float L_23 = L_22.___x_2;
		float L_24 = __this->___timer_7;
		float L_25;
		L_25 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline(L_17, L_23, ((float)(L_24/(2.0f))), NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_26 = __this->___bulletSpawnPoint_5;
		NullCheck(L_26);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_26, NULL);
		float L_28 = L_27.___y_3;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_29 = __this->___firstLine_6;
		int32_t L_30 = V_1;
		NullCheck(L_29);
		int32_t L_31 = L_30;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_32 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		NullCheck(L_32);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33;
		L_33 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_32, NULL);
		float L_34 = L_33.___y_3;
		float L_35 = __this->___timer_7;
		float L_36;
		L_36 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline(L_28, L_34, ((float)(L_35/(2.0f))), NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_37 = __this->___bulletSpawnPoint_5;
		NullCheck(L_37);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38;
		L_38 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_37, NULL);
		float L_39 = L_38.___z_4;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_40 = __this->___firstLine_6;
		int32_t L_41 = V_1;
		NullCheck(L_40);
		int32_t L_42 = L_41;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_43 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		NullCheck(L_43);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_44;
		L_44 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_43, NULL);
		float L_45 = L_44.___z_4;
		float L_46 = __this->___timer_7;
		float L_47;
		L_47 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline(L_39, L_45, ((float)(L_46/(2.0f))), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_48;
		memset((&L_48), 0, sizeof(L_48));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_48), L_25, L_36, L_47, /*hidden argument*/NULL);
		NullCheck(L_14);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_14, L_48, NULL);
		// for (int i = startOfIndex; i < endOfIndex; i++)
		int32_t L_49 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_49, 1));
	}

IL_00f3:
	{
		// for (int i = startOfIndex; i < endOfIndex; i++)
		int32_t L_50 = V_1;
		int32_t L_51 = __this->___endOfIndex_12;
		if ((((int32_t)L_50) < ((int32_t)L_51)))
		{
			goto IL_003f;
		}
	}
	{
		// if (timer >= 2)
		float L_52 = __this->___timer_7;
		if ((!(((float)L_52) >= ((float)(2.0f)))))
		{
			goto IL_0199;
		}
	}
	{
		// for (int i = startOfIndex; i < endOfIndex; i++)
		int32_t L_53 = __this->___startOfIndex_11;
		V_2 = L_53;
		goto IL_012f;
	}

IL_0118:
	{
		// tankBullets[i].GetComponent<TankBullet>().enabled = true;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_54 = __this->___tankBullets_4;
		int32_t L_55 = V_2;
		NullCheck(L_54);
		int32_t L_56 = L_55;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_57 = (L_54)->GetAt(static_cast<il2cpp_array_size_t>(L_56));
		NullCheck(L_57);
		TankBullet_t5BB5DC60FCD23BF60489A4772CC4678400F0F7AA* L_58;
		L_58 = GameObject_GetComponent_TisTankBullet_t5BB5DC60FCD23BF60489A4772CC4678400F0F7AA_m6AC26BF562278ABECCC5A0D04F030A21C463C358(L_57, GameObject_GetComponent_TisTankBullet_t5BB5DC60FCD23BF60489A4772CC4678400F0F7AA_m6AC26BF562278ABECCC5A0D04F030A21C463C358_RuntimeMethod_var);
		NullCheck(L_58);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_58, (bool)1, NULL);
		// for (int i = startOfIndex; i < endOfIndex; i++)
		int32_t L_59 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_59, 1));
	}

IL_012f:
	{
		// for (int i = startOfIndex; i < endOfIndex; i++)
		int32_t L_60 = V_2;
		int32_t L_61 = __this->___endOfIndex_12;
		if ((((int32_t)L_60) < ((int32_t)L_61)))
		{
			goto IL_0118;
		}
	}
	{
		// if (spawnRow < 5)
		int32_t L_62 = __this->___spawnRow_10;
		if ((((int32_t)L_62) >= ((int32_t)5)))
		{
			goto IL_0180;
		}
	}
	{
		// timer = 0;
		__this->___timer_7 = (0.0f);
		// doneSpawningLine = false;
		__this->___doneSpawningLine_9 = (bool)0;
		// spawnRow++;
		int32_t L_63 = __this->___spawnRow_10;
		__this->___spawnRow_10 = ((int32_t)il2cpp_codegen_add(L_63, 1));
		// startOfIndex += 14;
		int32_t L_64 = __this->___startOfIndex_11;
		__this->___startOfIndex_11 = ((int32_t)il2cpp_codegen_add(L_64, ((int32_t)14)));
		// endOfIndex += 14;
		int32_t L_65 = __this->___endOfIndex_12;
		__this->___endOfIndex_12 = ((int32_t)il2cpp_codegen_add(L_65, ((int32_t)14)));
		return;
	}

IL_0180:
	{
		// shootAttack = false;
		__this->___shootAttack_8 = (bool)0;
		// switchToMoveAttackInProgress = true;
		__this->___switchToMoveAttackInProgress_24 = (bool)1;
		// timer = 0;
		__this->___timer_7 = (0.0f);
	}

IL_0199:
	{
		// }
		return;
	}
}
// System.Void tank::switchToMoveAttack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tank_switchToMoveAttack_m875A5F8086FEA1DB2D7B3FA93800B1B86BD7A216 (tank_t47FB66C52AAA5F596D92FD00F8948CF0A9870D95* __this, const RuntimeMethod* method) 
{
	{
		// if (timer >= 12)
		float L_0 = __this->___timer_7;
		if ((!(((float)L_0) >= ((float)(12.0f)))))
		{
			goto IL_0026;
		}
	}
	{
		// switchToMoveAttackInProgress = false;
		__this->___switchToMoveAttackInProgress_24 = (bool)0;
		// moveAttack = true;
		__this->___moveAttack_23 = (bool)1;
		// timer = 0;
		__this->___timer_7 = (0.0f);
	}

IL_0026:
	{
		// }
		return;
	}
}
// System.Void tank::TankMoving()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tank_TankMoving_m81EBD7DDCEF566FB557FD03FE32CA6629D2A226B (tank_t47FB66C52AAA5F596D92FD00F8948CF0A9870D95* __this, const RuntimeMethod* method) 
{
	tank_t47FB66C52AAA5F596D92FD00F8948CF0A9870D95* G_B4_0 = NULL;
	tank_t47FB66C52AAA5F596D92FD00F8948CF0A9870D95* G_B3_0 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B5_0;
	memset((&G_B5_0), 0, sizeof(G_B5_0));
	tank_t47FB66C52AAA5F596D92FD00F8948CF0A9870D95* G_B5_1 = NULL;
	{
		// transform.position = Vector3.MoveTowards(transform.position, destination, tankSpeed * Time.deltaTime);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = __this->___destination_14;
		float L_4 = __this->___tankSpeed_13;
		float L_5;
		L_5 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_MoveTowards_m0363264647799F3173AC37F8E819F98298249B08_inline(L_2, L_3, ((float)il2cpp_codegen_multiply(L_4, L_5)), NULL);
		NullCheck(L_0);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_0, L_6, NULL);
		// if (movingSideways)
		bool L_7 = __this->___movingSideways_18;
		if (!L_7)
		{
			goto IL_00b1;
		}
	}
	{
		// tankSpeed = 30;
		__this->___tankSpeed_13 = (30.0f);
		// if (Vector3.Distance(transform.position, destination) < 0.1f)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_8, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = __this->___destination_14;
		float L_11;
		L_11 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_9, L_10, NULL);
		if ((!(((float)L_11) < ((float)(0.100000001f)))))
		{
			goto IL_0084;
		}
	}
	{
		// destination = (destination == leftXBound) ? rightXBound : leftXBound;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = __this->___destination_14;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = __this->___leftXBound_15;
		bool L_14;
		L_14 = Vector3_op_Equality_mCDCBB8D2EDC3D3BF20F31A25ACB34705D352B479_inline(L_12, L_13, NULL);
		G_B3_0 = __this;
		if (L_14)
		{
			G_B4_0 = __this;
			goto IL_0079;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = __this->___leftXBound_15;
		G_B5_0 = L_15;
		G_B5_1 = G_B3_0;
		goto IL_007f;
	}

IL_0079:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = __this->___rightXBound_16;
		G_B5_0 = L_16;
		G_B5_1 = G_B4_0;
	}

IL_007f:
	{
		NullCheck(G_B5_1);
		G_B5_1->___destination_14 = G_B5_0;
	}

IL_0084:
	{
		// if (timer >= timeUntilChargePlayer)
		float L_17 = __this->___timer_7;
		float L_18 = __this->___timeUntilChargePlayer_21;
		if ((!(((float)L_17) >= ((float)L_18))))
		{
			goto IL_00b1;
		}
	}
	{
		// preMoveToPlayerPos = transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19;
		L_19 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_19);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_19, NULL);
		__this->___preMoveToPlayerPos_17 = L_20;
		// movingSideways = false;
		__this->___movingSideways_18 = (bool)0;
		// moveTowardsPlayer = true;
		__this->___moveTowardsPlayer_19 = (bool)1;
	}

IL_00b1:
	{
		// if (moveTowardsPlayer)
		bool L_21 = __this->___moveTowardsPlayer_19;
		if (!L_21)
		{
			goto IL_0152;
		}
	}
	{
		// tankSpeed = 35;
		__this->___tankSpeed_13 = (35.0f);
		// destination = new Vector3(transform.position.x, transform.position.y, -30f);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22;
		L_22 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_22);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_22, NULL);
		float L_24 = L_23.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_25;
		L_25 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_25);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_25, NULL);
		float L_27 = L_26.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		memset((&L_28), 0, sizeof(L_28));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_28), L_24, L_27, (-30.0f), /*hidden argument*/NULL);
		__this->___destination_14 = L_28;
		// if (Vector3.Distance(transform.position, new Vector3(transform.position.x, transform.position.y, -30f)) < 0.1f)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_29;
		L_29 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_29);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
		L_30 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_29, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_31;
		L_31 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_31);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32;
		L_32 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_31, NULL);
		float L_33 = L_32.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_34;
		L_34 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_34);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35;
		L_35 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_34, NULL);
		float L_36 = L_35.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37;
		memset((&L_37), 0, sizeof(L_37));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_37), L_33, L_36, (-30.0f), /*hidden argument*/NULL);
		float L_38;
		L_38 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_30, L_37, NULL);
		if ((!(((float)L_38) < ((float)(0.100000001f)))))
		{
			goto IL_0152;
		}
	}
	{
		// destination = preMoveToPlayerPos;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39 = __this->___preMoveToPlayerPos_17;
		__this->___destination_14 = L_39;
		// moveAwayPlayer = true;
		__this->___moveAwayPlayer_20 = (bool)1;
		// moveTowardsPlayer = false;
		__this->___moveTowardsPlayer_19 = (bool)0;
	}

IL_0152:
	{
		// if (moveAwayPlayer)
		bool L_40 = __this->___moveAwayPlayer_20;
		if (!L_40)
		{
			goto IL_019b;
		}
	}
	{
		// tankSpeed = 35;
		__this->___tankSpeed_13 = (35.0f);
		// if (Vector3.Distance(transform.position, preMoveToPlayerPos) < 0.1f)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_41;
		L_41 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_41);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42;
		L_42 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_41, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43 = __this->___preMoveToPlayerPos_17;
		float L_44;
		L_44 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_42, L_43, NULL);
		if ((!(((float)L_44) < ((float)(0.100000001f)))))
		{
			goto IL_019b;
		}
	}
	{
		// movingSideways = true;
		__this->___movingSideways_18 = (bool)1;
		// moveAwayPlayer = false;
		__this->___moveAwayPlayer_20 = (bool)0;
		// timer = 0;
		__this->___timer_7 = (0.0f);
	}

IL_019b:
	{
		// }
		return;
	}
}
// System.Void tank::moveToStartingPositiob()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tank_moveToStartingPositiob_mA6A33E866CA9D41D6CC73927BFA50D312B4801FC (tank_t47FB66C52AAA5F596D92FD00F8948CF0A9870D95* __this, const RuntimeMethod* method) 
{
	{
		// tankSpeed = 150;
		__this->___tankSpeed_13 = (150.0f);
		// transform.position = Vector3.MoveTowards(transform.position, endPosition, tankSpeed * Time.deltaTime);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = __this->___endPosition_25;
		float L_4 = __this->___tankSpeed_13;
		float L_5;
		L_5 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_MoveTowards_m0363264647799F3173AC37F8E819F98298249B08_inline(L_2, L_3, ((float)il2cpp_codegen_multiply(L_4, L_5)), NULL);
		NullCheck(L_0);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_0, L_6, NULL);
		// if (Vector3.Distance(transform.position, endPosition) < 0.1f)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_7, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = __this->___endPosition_25;
		float L_10;
		L_10 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_8, L_9, NULL);
		if ((!(((float)L_10) < ((float)(0.100000001f)))))
		{
			goto IL_006e;
		}
	}
	{
		// tankSpeed = 35;
		__this->___tankSpeed_13 = (35.0f);
		// movingToStartPosition = false;
		__this->___movingToStartPosition_26 = (bool)0;
		// shootAttack = true;
		__this->___shootAttack_8 = (bool)1;
	}

IL_006e:
	{
		// }
		return;
	}
}
// System.Void tank::Hit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tank_Hit_m5082DBA5945880A4E85DB01331686363BA7710A0 (tank_t47FB66C52AAA5F596D92FD00F8948CF0A9870D95* __this, const RuntimeMethod* method) 
{
	{
		// health--;
		int32_t L_0 = __this->___health_22;
		__this->___health_22 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		// if (health <= 0)
		int32_t L_1 = __this->___health_22;
		if ((((int32_t)L_1) > ((int32_t)0)))
		{
			goto IL_004a;
		}
	}
	{
		// explosion.transform.position = transform.position;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___explosion_27;
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_2, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		NullCheck(L_3);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_3, L_5, NULL);
		// explosion.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___explosion_27;
		NullCheck(L_6);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_6, (bool)1, NULL);
		// gameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_7);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_7, (bool)0, NULL);
	}

IL_004a:
	{
		// }
		return;
	}
}
// System.Void tank::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tank_OnTriggerEnter_m26822D55A1C9C9FFB8A342B90540C60A0F65BF93 (tank_t47FB66C52AAA5F596D92FD00F8948CF0A9870D95* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisPlayerHealth_tE7421738BA48E6A6C90760303B818641DDFAE263_mF6FA39268341969F2360DEF6F96AE7E0333F13DB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral23AD9577FFFAD525C0FE9C92CC6DC8E665B589A5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral55E7FF1059C586902360E3CBE8E0AE2CCE9A60D7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.tag == "Player Laser")
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___other0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Component_get_tag_m7561A81116CAB82B8A459E934662BFC2039FB7EF(L_0, NULL);
		bool L_2;
		L_2 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_1, _stringLiteral55E7FF1059C586902360E3CBE8E0AE2CCE9A60D7, NULL);
		if (!L_2)
		{
			goto IL_0024;
		}
	}
	{
		// Hit();
		tank_Hit_m5082DBA5945880A4E85DB01331686363BA7710A0(__this, NULL);
		// other.gameObject.SetActive(false);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_3 = ___other0;
		NullCheck(L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_3, NULL);
		NullCheck(L_4);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)0, NULL);
	}

IL_0024:
	{
		// if (other.tag == "Motorcycle")
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_5 = ___other0;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = Component_get_tag_m7561A81116CAB82B8A459E934662BFC2039FB7EF(L_5, NULL);
		bool L_7;
		L_7 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_6, _stringLiteral23AD9577FFFAD525C0FE9C92CC6DC8E665B589A5, NULL);
		if (!L_7)
		{
			goto IL_0041;
		}
	}
	{
		// other.GetComponent<PlayerHealth>().Hit();
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_8 = ___other0;
		NullCheck(L_8);
		PlayerHealth_tE7421738BA48E6A6C90760303B818641DDFAE263* L_9;
		L_9 = Component_GetComponent_TisPlayerHealth_tE7421738BA48E6A6C90760303B818641DDFAE263_mF6FA39268341969F2360DEF6F96AE7E0333F13DB(L_8, Component_GetComponent_TisPlayerHealth_tE7421738BA48E6A6C90760303B818641DDFAE263_mF6FA39268341969F2360DEF6F96AE7E0333F13DB_RuntimeMethod_var);
		NullCheck(L_9);
		PlayerHealth_Hit_mB2F7F292A4E8B3309B884569BFA457CB68FC6944(L_9, NULL);
	}

IL_0041:
	{
		// }
		return;
	}
}
// System.Void tank::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tank__ctor_m3AA447E231630DA5DD94793A890621E46ACC6324 (tank_t47FB66C52AAA5F596D92FD00F8948CF0A9870D95* __this, const RuntimeMethod* method) 
{
	{
		// private int endOfIndex = 14;
		__this->___endOfIndex_12 = ((int32_t)14);
		// private Vector3 destination = new Vector3(9.5f, -0.36f, 0.92f);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_0), (9.5f), (-0.360000014f), (0.920000017f), /*hidden argument*/NULL);
		__this->___destination_14 = L_0;
		// private Vector3 leftXBound = new Vector3(9.5f, -0.36f, 0.92f);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_1), (9.5f), (-0.360000014f), (0.920000017f), /*hidden argument*/NULL);
		__this->___leftXBound_15 = L_1;
		// private Vector3 rightXBound = new Vector3(27.5f, -0.36f, 0.92f);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_2), (27.5f), (-0.360000014f), (0.920000017f), /*hidden argument*/NULL);
		__this->___rightXBound_16 = L_2;
		// private bool movingSideways = true;
		__this->___movingSideways_18 = (bool)1;
		// private Vector3 endPosition = new Vector3(18.5f, -0.36f, .92f);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_3), (18.5f), (-0.360000014f), (0.920000017f), /*hidden argument*/NULL);
		__this->___endPosition_25 = L_3;
		// private bool movingToStartPosition = true;
		__this->___movingToStartPosition_26 = (bool)1;
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
// System.Void TankBullet::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TankBullet_Start_mBD0128251C4E9242FCB36AA267F8258BD5BA63BA (TankBullet_t5BB5DC60FCD23BF60489A4772CC4678400F0F7AA* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void TankBullet::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TankBullet_Update_m3E73D4410D0DD223CB25D5AF805659E96F8AB616 (TankBullet_t5BB5DC60FCD23BF60489A4772CC4678400F0F7AA* __this, const RuntimeMethod* method) 
{
	{
		// transform.Translate(Vector3.back * bulletSpeed * Time.deltaTime);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_back_mCA5A84170E8DE5CE38C0551B4CCAD647BF215E57_inline(NULL);
		float L_2 = __this->___bulletSpeed_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_1, L_2, NULL);
		float L_4;
		L_4 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_3, L_4, NULL);
		NullCheck(L_0);
		Transform_Translate_m018D015E89C8CB743C54A21B4A1C5202EBF6297A(L_0, L_5, NULL);
		// if (transform.position.z <= -50)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_6, NULL);
		float L_8 = L_7.___z_4;
		if ((!(((float)L_8) <= ((float)(-50.0f)))))
		{
			goto IL_0048;
		}
	}
	{
		// gameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_9);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_9, (bool)0, NULL);
	}

IL_0048:
	{
		// }
		return;
	}
}
// System.Void TankBullet::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TankBullet_OnTriggerEnter_m33746271393909056C9B48534B1DEFE61B195D02 (TankBullet_t5BB5DC60FCD23BF60489A4772CC4678400F0F7AA* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisPlayerHealth_tE7421738BA48E6A6C90760303B818641DDFAE263_mF6FA39268341969F2360DEF6F96AE7E0333F13DB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral23AD9577FFFAD525C0FE9C92CC6DC8E665B589A5);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.tag == "Motorcycle")
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___other0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Component_get_tag_m7561A81116CAB82B8A459E934662BFC2039FB7EF(L_0, NULL);
		bool L_2;
		L_2 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_1, _stringLiteral23AD9577FFFAD525C0FE9C92CC6DC8E665B589A5, NULL);
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		// other.GetComponent<PlayerHealth>().Hit();
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_3 = ___other0;
		NullCheck(L_3);
		PlayerHealth_tE7421738BA48E6A6C90760303B818641DDFAE263* L_4;
		L_4 = Component_GetComponent_TisPlayerHealth_tE7421738BA48E6A6C90760303B818641DDFAE263_mF6FA39268341969F2360DEF6F96AE7E0333F13DB(L_3, Component_GetComponent_TisPlayerHealth_tE7421738BA48E6A6C90760303B818641DDFAE263_mF6FA39268341969F2360DEF6F96AE7E0333F13DB_RuntimeMethod_var);
		NullCheck(L_4);
		PlayerHealth_Hit_mB2F7F292A4E8B3309B884569BFA457CB68FC6944(L_4, NULL);
	}

IL_001d:
	{
		// }
		return;
	}
}
// System.Void TankBullet::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TankBullet__ctor_m4D2544DF38F44E761391A8E790740BC08E7317EF (TankBullet_t5BB5DC60FCD23BF60489A4772CC4678400F0F7AA* __this, const RuntimeMethod* method) 
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
// System.Void TankEnemy::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TankEnemy_Update_m05C74914033CE26A4FAA84C314929D3B76914868 (TankEnemy_t2BA2128FB51203FB3CB6466ACB4E0B0EB4ECDF25* __this, const RuntimeMethod* method) 
{
	{
		// if (!atStartingPosition)
		bool L_0 = __this->___atStartingPosition_6;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// moveToStartingPositiob();
		TankEnemy_moveToStartingPositiob_mA106C668D6E4A486686785A19467A31A187BB48A(__this, NULL);
	}

IL_000e:
	{
		// if (shootAttack1A)
		bool L_1 = __this->___shootAttack1A_7;
		if (!L_1)
		{
			goto IL_0064;
		}
	}
	{
		// timer += Time.deltaTime;
		float L_2 = __this->___timer_11;
		float L_3;
		L_3 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___timer_11 = ((float)il2cpp_codegen_add(L_2, L_3));
		// if (timer > .1f)
		float L_4 = __this->___timer_11;
		if ((!(((float)L_4) > ((float)(0.100000001f)))))
		{
			goto IL_003b;
		}
	}
	{
		// ShootingAttack1();
		TankEnemy_ShootingAttack1_m8D7F32635105736C39AE0921CB335848D88D9495(__this, NULL);
	}

IL_003b:
	{
		// if (bulletsShot > 8)
		int32_t L_5 = __this->___bulletsShot_12;
		if ((((int32_t)L_5) <= ((int32_t)8)))
		{
			goto IL_0064;
		}
	}
	{
		// shootAttack1A = false;
		__this->___shootAttack1A_7 = (bool)0;
		// timer = -.2f;
		__this->___timer_11 = (-0.200000003f);
		// bulletsShot = 0;
		__this->___bulletsShot_12 = 0;
		// shootAttack1B = true;
		__this->___shootAttack1B_13 = (bool)1;
	}

IL_0064:
	{
		// if (shootAttack1B)
		bool L_6 = __this->___shootAttack1B_13;
		if (!L_6)
		{
			goto IL_00fd;
		}
	}
	{
		// timer += Time.deltaTime;
		float L_7 = __this->___timer_11;
		float L_8;
		L_8 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___timer_11 = ((float)il2cpp_codegen_add(L_7, L_8));
		// if (timer > .1f)
		float L_9 = __this->___timer_11;
		if ((!(((float)L_9) > ((float)(0.100000001f)))))
		{
			goto IL_0094;
		}
	}
	{
		// ShootingAttack2();
		TankEnemy_ShootingAttack2_mAC2E71A8D987662C19540A0F3E9DADEA04E06D1A(__this, NULL);
	}

IL_0094:
	{
		// if (bulletsShot > 8)
		int32_t L_10 = __this->___bulletsShot_12;
		if ((((int32_t)L_10) <= ((int32_t)8)))
		{
			goto IL_00fd;
		}
	}
	{
		// if (shootAttackRounds < 2)
		int32_t L_11 = __this->___shootAttackRounds_14;
		if ((((int32_t)L_11) >= ((int32_t)2)))
		{
			goto IL_00d6;
		}
	}
	{
		// shootAttack1B = false;
		__this->___shootAttack1B_13 = (bool)0;
		// shootAttack1A = true;
		__this->___shootAttack1A_7 = (bool)1;
		// timer = -.2f;
		__this->___timer_11 = (-0.200000003f);
		// bulletsShot = 0;
		__this->___bulletsShot_12 = 0;
		// shootAttackRounds++;
		int32_t L_12 = __this->___shootAttackRounds_14;
		__this->___shootAttackRounds_14 = ((int32_t)il2cpp_codegen_add(L_12, 1));
		goto IL_00fd;
	}

IL_00d6:
	{
		// shootAttack1B = false;
		__this->___shootAttack1B_13 = (bool)0;
		// timer = 0;
		__this->___timer_11 = (0.0f);
		// bulletsShot = 0;
		__this->___bulletsShot_12 = 0;
		// shootAttackRounds = 0;
		__this->___shootAttackRounds_14 = 0;
		// rocketAttack = true;
		__this->___rocketAttack_18 = (bool)1;
	}

IL_00fd:
	{
		// if(rocketAttack)
		bool L_13 = __this->___rocketAttack_18;
		if (!L_13)
		{
			goto IL_0153;
		}
	}
	{
		// timer += Time.deltaTime;
		float L_14 = __this->___timer_11;
		float L_15;
		L_15 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___timer_11 = ((float)il2cpp_codegen_add(L_14, L_15));
		// if (timer > 2.8f)
		float L_16 = __this->___timer_11;
		if ((!(((float)L_16) > ((float)(2.79999995f)))))
		{
			goto IL_012a;
		}
	}
	{
		// RocketAttack();
		TankEnemy_RocketAttack_m7857F9C5D07201405930130199FE33B4B454CA0E(__this, NULL);
	}

IL_012a:
	{
		// if (shootAttackRounds > 4)
		int32_t L_17 = __this->___shootAttackRounds_14;
		if ((((int32_t)L_17) <= ((int32_t)4)))
		{
			goto IL_0153;
		}
	}
	{
		// rocketAttack = false;
		__this->___rocketAttack_18 = (bool)0;
		// timer = -2.8f;
		__this->___timer_11 = (-2.79999995f);
		// shootAttackRounds = 0;
		__this->___shootAttackRounds_14 = 0;
		// shootAttack3 = true;
		__this->___shootAttack3_21 = (bool)1;
	}

IL_0153:
	{
		// if (shootAttack3)
		bool L_18 = __this->___shootAttack3_21;
		if (!L_18)
		{
			goto IL_020f;
		}
	}
	{
		// timer += Time.deltaTime;
		float L_19 = __this->___timer_11;
		float L_20;
		L_20 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___timer_11 = ((float)il2cpp_codegen_add(L_19, L_20));
		// if (timer > .4)
		float L_21 = __this->___timer_11;
		if ((!(((double)((double)L_21)) > ((double)(0.40000000000000002)))))
		{
			goto IL_019e;
		}
	}
	{
		// if (!shootAttack3A)
		bool L_22 = __this->___shootAttack3A_22;
		if (L_22)
		{
			goto IL_019e;
		}
	}
	{
		// ShootingAttack3();
		TankEnemy_ShootingAttack3_mBB0CE41560E9038CB16AFA9FEFAAA0C7EBBBD2EB(__this, NULL);
		// shootAttack3A = true;
		__this->___shootAttack3A_22 = (bool)1;
		// shootAttack3B = false;
		__this->___shootAttack3B_23 = (bool)0;
	}

IL_019e:
	{
		// if (timer > .8)
		float L_23 = __this->___timer_11;
		if ((!(((double)((double)L_23)) > ((double)(0.80000000000000004)))))
		{
			goto IL_01e5;
		}
	}
	{
		// if (!shootAttack3B)
		bool L_24 = __this->___shootAttack3B_23;
		if (L_24)
		{
			goto IL_01e5;
		}
	}
	{
		// ShootingAttack4();
		TankEnemy_ShootingAttack4_mC5D44BF16A2D54FC7DF58323F4A54717BB4F1F98(__this, NULL);
		// shootAttack3B = true;
		__this->___shootAttack3B_23 = (bool)1;
		// shootAttack3A = false;
		__this->___shootAttack3A_22 = (bool)0;
		// timer = 0;
		__this->___timer_11 = (0.0f);
		// shootAttackRounds++;
		int32_t L_25 = __this->___shootAttackRounds_14;
		__this->___shootAttackRounds_14 = ((int32_t)il2cpp_codegen_add(L_25, 1));
	}

IL_01e5:
	{
		// if (shootAttackRounds > 10)
		int32_t L_26 = __this->___shootAttackRounds_14;
		if ((((int32_t)L_26) <= ((int32_t)((int32_t)10))))
		{
			goto IL_020f;
		}
	}
	{
		// shootAttack3 = false;
		__this->___shootAttack3_21 = (bool)0;
		// shootAttack1A = true;
		__this->___shootAttack1A_7 = (bool)1;
		// timer = -2;
		__this->___timer_11 = (-2.0f);
		// shootAttackRounds = 0;
		__this->___shootAttackRounds_14 = 0;
	}

IL_020f:
	{
		// }
		return;
	}
}
// System.Void TankEnemy::moveToStartingPositiob()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TankEnemy_moveToStartingPositiob_mA106C668D6E4A486686785A19467A31A187BB48A (TankEnemy_t2BA2128FB51203FB3CB6466ACB4E0B0EB4ECDF25* __this, const RuntimeMethod* method) 
{
	{
		// transform.position = Vector3.MoveTowards(transform.position, startPosition.position, tankSpeed * Time.deltaTime);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = __this->___startPosition_5;
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		float L_5 = __this->___tankSpeed_4;
		float L_6;
		L_6 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_MoveTowards_m0363264647799F3173AC37F8E819F98298249B08_inline(L_2, L_4, ((float)il2cpp_codegen_multiply(L_5, L_6)), NULL);
		NullCheck(L_0);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_0, L_7, NULL);
		// if (Vector3.Distance(transform.position, startPosition.position) < 0.1f)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_8, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10 = __this->___startPosition_5;
		NullCheck(L_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_10, NULL);
		float L_12;
		L_12 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_9, L_11, NULL);
		if ((!(((float)L_12) < ((float)(0.100000001f)))))
		{
			goto IL_006e;
		}
	}
	{
		// atStartingPosition = true;
		__this->___atStartingPosition_6 = (bool)1;
		// shootAttack1A = true;
		__this->___shootAttack1A_7 = (bool)1;
		// boxCollider.enabled = true;
		BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* L_13 = __this->___boxCollider_28;
		NullCheck(L_13);
		Collider_set_enabled_m8D5C3B5047592D227A52560FC9723D176E209F70(L_13, (bool)1, NULL);
	}

IL_006e:
	{
		// }
		return;
	}
}
// System.Void TankEnemy::ShootingAttack1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TankEnemy_ShootingAttack1_m8D7F32635105736C39AE0921CB335848D88D9495 (TankEnemy_t2BA2128FB51203FB3CB6466ACB4E0B0EB4ECDF25* __this, const RuntimeMethod* method) 
{
	{
		// bulletSpawnPoint.transform.eulerAngles = new Vector3(-1, -10, 0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___bulletSpawnPoint_8;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_2), (-1.0f), (-10.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_set_eulerAngles_m9F0BC484A7915A51FAB87230644229B75BACA004(L_1, L_2, NULL);
		// bullets[bulletsIndex].transform.rotation = Quaternion.Euler(bulletSpawnPoint.transform.eulerAngles.x, bulletSpawnPoint.transform.eulerAngles.y, bulletSpawnPoint.transform.eulerAngles.z);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_3 = __this->___bullets_9;
		int32_t L_4 = __this->___bulletsIndex_10;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_6, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8 = __this->___bulletSpawnPoint_8;
		NullCheck(L_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_8, NULL);
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_9, NULL);
		float L_11 = L_10.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12 = __this->___bulletSpawnPoint_8;
		NullCheck(L_12);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_12, NULL);
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_13, NULL);
		float L_15 = L_14.___y_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16 = __this->___bulletSpawnPoint_8;
		NullCheck(L_16);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_16, NULL);
		NullCheck(L_17);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_17, NULL);
		float L_19 = L_18.___z_4;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_20;
		L_20 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline(L_11, L_15, L_19, NULL);
		NullCheck(L_7);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_7, L_20, NULL);
		// bullets[bulletsIndex].transform.position = bulletSpawnPoint.transform.position;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_21 = __this->___bullets_9;
		int32_t L_22 = __this->___bulletsIndex_10;
		NullCheck(L_21);
		int32_t L_23 = L_22;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		NullCheck(L_24);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_25;
		L_25 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_24, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_26 = __this->___bulletSpawnPoint_8;
		NullCheck(L_26);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27;
		L_27 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_26, NULL);
		NullCheck(L_27);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_27, NULL);
		NullCheck(L_25);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_25, L_28, NULL);
		// SpawnBullet();
		TankEnemy_SpawnBullet_m5B55757CBEE7CC48511A7FC38844B44B5BAB0765(__this, NULL);
		// bulletSpawnPoint.transform.eulerAngles = new Vector3(-1, -5, 0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_29 = __this->___bulletSpawnPoint_8;
		NullCheck(L_29);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_30;
		L_30 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_29, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
		memset((&L_31), 0, sizeof(L_31));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_31), (-1.0f), (-5.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_30);
		Transform_set_eulerAngles_m9F0BC484A7915A51FAB87230644229B75BACA004(L_30, L_31, NULL);
		// bullets[bulletsIndex].transform.rotation = Quaternion.Euler(bulletSpawnPoint.transform.eulerAngles.x, bulletSpawnPoint.transform.eulerAngles.y, bulletSpawnPoint.transform.eulerAngles.z);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_32 = __this->___bullets_9;
		int32_t L_33 = __this->___bulletsIndex_10;
		NullCheck(L_32);
		int32_t L_34 = L_33;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_35 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		NullCheck(L_35);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_36;
		L_36 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_35, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_37 = __this->___bulletSpawnPoint_8;
		NullCheck(L_37);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_38;
		L_38 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_37, NULL);
		NullCheck(L_38);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39;
		L_39 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_38, NULL);
		float L_40 = L_39.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_41 = __this->___bulletSpawnPoint_8;
		NullCheck(L_41);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_42;
		L_42 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_41, NULL);
		NullCheck(L_42);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43;
		L_43 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_42, NULL);
		float L_44 = L_43.___y_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_45 = __this->___bulletSpawnPoint_8;
		NullCheck(L_45);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_46;
		L_46 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_45, NULL);
		NullCheck(L_46);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47;
		L_47 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_46, NULL);
		float L_48 = L_47.___z_4;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_49;
		L_49 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline(L_40, L_44, L_48, NULL);
		NullCheck(L_36);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_36, L_49, NULL);
		// bullets[bulletsIndex].transform.position = bulletSpawnPoint.transform.position;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_50 = __this->___bullets_9;
		int32_t L_51 = __this->___bulletsIndex_10;
		NullCheck(L_50);
		int32_t L_52 = L_51;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_53 = (L_50)->GetAt(static_cast<il2cpp_array_size_t>(L_52));
		NullCheck(L_53);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_54;
		L_54 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_53, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_55 = __this->___bulletSpawnPoint_8;
		NullCheck(L_55);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_56;
		L_56 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_55, NULL);
		NullCheck(L_56);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_57;
		L_57 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_56, NULL);
		NullCheck(L_54);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_54, L_57, NULL);
		// SpawnBullet();
		TankEnemy_SpawnBullet_m5B55757CBEE7CC48511A7FC38844B44B5BAB0765(__this, NULL);
		// bulletSpawnPoint.transform.eulerAngles = new Vector3(-1, 0, 0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_58 = __this->___bulletSpawnPoint_8;
		NullCheck(L_58);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_59;
		L_59 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_58, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_60;
		memset((&L_60), 0, sizeof(L_60));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_60), (-1.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_59);
		Transform_set_eulerAngles_m9F0BC484A7915A51FAB87230644229B75BACA004(L_59, L_60, NULL);
		// bullets[bulletsIndex].transform.rotation = Quaternion.Euler(bulletSpawnPoint.transform.eulerAngles.x, bulletSpawnPoint.transform.eulerAngles.y, bulletSpawnPoint.transform.eulerAngles.z);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_61 = __this->___bullets_9;
		int32_t L_62 = __this->___bulletsIndex_10;
		NullCheck(L_61);
		int32_t L_63 = L_62;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_64 = (L_61)->GetAt(static_cast<il2cpp_array_size_t>(L_63));
		NullCheck(L_64);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_65;
		L_65 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_64, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_66 = __this->___bulletSpawnPoint_8;
		NullCheck(L_66);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_67;
		L_67 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_66, NULL);
		NullCheck(L_67);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_68;
		L_68 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_67, NULL);
		float L_69 = L_68.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_70 = __this->___bulletSpawnPoint_8;
		NullCheck(L_70);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_71;
		L_71 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_70, NULL);
		NullCheck(L_71);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_72;
		L_72 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_71, NULL);
		float L_73 = L_72.___y_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_74 = __this->___bulletSpawnPoint_8;
		NullCheck(L_74);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_75;
		L_75 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_74, NULL);
		NullCheck(L_75);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_76;
		L_76 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_75, NULL);
		float L_77 = L_76.___z_4;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_78;
		L_78 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline(L_69, L_73, L_77, NULL);
		NullCheck(L_65);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_65, L_78, NULL);
		// bullets[bulletsIndex].transform.position = bulletSpawnPoint.transform.position;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_79 = __this->___bullets_9;
		int32_t L_80 = __this->___bulletsIndex_10;
		NullCheck(L_79);
		int32_t L_81 = L_80;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_82 = (L_79)->GetAt(static_cast<il2cpp_array_size_t>(L_81));
		NullCheck(L_82);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_83;
		L_83 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_82, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_84 = __this->___bulletSpawnPoint_8;
		NullCheck(L_84);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_85;
		L_85 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_84, NULL);
		NullCheck(L_85);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_86;
		L_86 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_85, NULL);
		NullCheck(L_83);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_83, L_86, NULL);
		// SpawnBullet();
		TankEnemy_SpawnBullet_m5B55757CBEE7CC48511A7FC38844B44B5BAB0765(__this, NULL);
		// bulletSpawnPoint.transform.eulerAngles = new Vector3(-1, 5, 0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_87 = __this->___bulletSpawnPoint_8;
		NullCheck(L_87);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_88;
		L_88 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_87, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_89;
		memset((&L_89), 0, sizeof(L_89));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_89), (-1.0f), (5.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_88);
		Transform_set_eulerAngles_m9F0BC484A7915A51FAB87230644229B75BACA004(L_88, L_89, NULL);
		// bullets[bulletsIndex].transform.rotation = Quaternion.Euler(bulletSpawnPoint.transform.eulerAngles.x, bulletSpawnPoint.transform.eulerAngles.y, bulletSpawnPoint.transform.eulerAngles.z);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_90 = __this->___bullets_9;
		int32_t L_91 = __this->___bulletsIndex_10;
		NullCheck(L_90);
		int32_t L_92 = L_91;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_93 = (L_90)->GetAt(static_cast<il2cpp_array_size_t>(L_92));
		NullCheck(L_93);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_94;
		L_94 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_93, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_95 = __this->___bulletSpawnPoint_8;
		NullCheck(L_95);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_96;
		L_96 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_95, NULL);
		NullCheck(L_96);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_97;
		L_97 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_96, NULL);
		float L_98 = L_97.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_99 = __this->___bulletSpawnPoint_8;
		NullCheck(L_99);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_100;
		L_100 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_99, NULL);
		NullCheck(L_100);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_101;
		L_101 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_100, NULL);
		float L_102 = L_101.___y_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_103 = __this->___bulletSpawnPoint_8;
		NullCheck(L_103);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_104;
		L_104 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_103, NULL);
		NullCheck(L_104);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_105;
		L_105 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_104, NULL);
		float L_106 = L_105.___z_4;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_107;
		L_107 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline(L_98, L_102, L_106, NULL);
		NullCheck(L_94);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_94, L_107, NULL);
		// bullets[bulletsIndex].transform.position = bulletSpawnPoint.transform.position;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_108 = __this->___bullets_9;
		int32_t L_109 = __this->___bulletsIndex_10;
		NullCheck(L_108);
		int32_t L_110 = L_109;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_111 = (L_108)->GetAt(static_cast<il2cpp_array_size_t>(L_110));
		NullCheck(L_111);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_112;
		L_112 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_111, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_113 = __this->___bulletSpawnPoint_8;
		NullCheck(L_113);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_114;
		L_114 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_113, NULL);
		NullCheck(L_114);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_115;
		L_115 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_114, NULL);
		NullCheck(L_112);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_112, L_115, NULL);
		// SpawnBullet();
		TankEnemy_SpawnBullet_m5B55757CBEE7CC48511A7FC38844B44B5BAB0765(__this, NULL);
		// bulletSpawnPoint.transform.eulerAngles = new Vector3(-1, 10, 0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_116 = __this->___bulletSpawnPoint_8;
		NullCheck(L_116);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_117;
		L_117 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_116, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_118;
		memset((&L_118), 0, sizeof(L_118));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_118), (-1.0f), (10.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_117);
		Transform_set_eulerAngles_m9F0BC484A7915A51FAB87230644229B75BACA004(L_117, L_118, NULL);
		// bullets[bulletsIndex].transform.rotation = Quaternion.Euler(bulletSpawnPoint.transform.eulerAngles.x, bulletSpawnPoint.transform.eulerAngles.y, bulletSpawnPoint.transform.eulerAngles.z);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_119 = __this->___bullets_9;
		int32_t L_120 = __this->___bulletsIndex_10;
		NullCheck(L_119);
		int32_t L_121 = L_120;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_122 = (L_119)->GetAt(static_cast<il2cpp_array_size_t>(L_121));
		NullCheck(L_122);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_123;
		L_123 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_122, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_124 = __this->___bulletSpawnPoint_8;
		NullCheck(L_124);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_125;
		L_125 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_124, NULL);
		NullCheck(L_125);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_126;
		L_126 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_125, NULL);
		float L_127 = L_126.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_128 = __this->___bulletSpawnPoint_8;
		NullCheck(L_128);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_129;
		L_129 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_128, NULL);
		NullCheck(L_129);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_130;
		L_130 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_129, NULL);
		float L_131 = L_130.___y_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_132 = __this->___bulletSpawnPoint_8;
		NullCheck(L_132);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_133;
		L_133 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_132, NULL);
		NullCheck(L_133);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_134;
		L_134 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_133, NULL);
		float L_135 = L_134.___z_4;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_136;
		L_136 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline(L_127, L_131, L_135, NULL);
		NullCheck(L_123);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_123, L_136, NULL);
		// bullets[bulletsIndex].transform.position = bulletSpawnPoint.transform.position;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_137 = __this->___bullets_9;
		int32_t L_138 = __this->___bulletsIndex_10;
		NullCheck(L_137);
		int32_t L_139 = L_138;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_140 = (L_137)->GetAt(static_cast<il2cpp_array_size_t>(L_139));
		NullCheck(L_140);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_141;
		L_141 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_140, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_142 = __this->___bulletSpawnPoint_8;
		NullCheck(L_142);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_143;
		L_143 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_142, NULL);
		NullCheck(L_143);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_144;
		L_144 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_143, NULL);
		NullCheck(L_141);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_141, L_144, NULL);
		// SpawnBullet();
		TankEnemy_SpawnBullet_m5B55757CBEE7CC48511A7FC38844B44B5BAB0765(__this, NULL);
		// bulletsShot++;
		int32_t L_145 = __this->___bulletsShot_12;
		__this->___bulletsShot_12 = ((int32_t)il2cpp_codegen_add(L_145, 1));
		// timer = 0;
		__this->___timer_11 = (0.0f);
		// }
		return;
	}
}
// System.Void TankEnemy::ShootingAttack2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TankEnemy_ShootingAttack2_mAC2E71A8D987662C19540A0F3E9DADEA04E06D1A (TankEnemy_t2BA2128FB51203FB3CB6466ACB4E0B0EB4ECDF25* __this, const RuntimeMethod* method) 
{
	{
		// bulletSpawnPoint.transform.eulerAngles = new Vector3(-1, -12.5f, 0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___bulletSpawnPoint_8;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_2), (-1.0f), (-12.5f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_set_eulerAngles_m9F0BC484A7915A51FAB87230644229B75BACA004(L_1, L_2, NULL);
		// bullets[bulletsIndex].transform.rotation = Quaternion.Euler(bulletSpawnPoint.transform.eulerAngles.x, bulletSpawnPoint.transform.eulerAngles.y, bulletSpawnPoint.transform.eulerAngles.z);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_3 = __this->___bullets_9;
		int32_t L_4 = __this->___bulletsIndex_10;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_6, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8 = __this->___bulletSpawnPoint_8;
		NullCheck(L_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_8, NULL);
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_9, NULL);
		float L_11 = L_10.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12 = __this->___bulletSpawnPoint_8;
		NullCheck(L_12);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_12, NULL);
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_13, NULL);
		float L_15 = L_14.___y_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16 = __this->___bulletSpawnPoint_8;
		NullCheck(L_16);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_16, NULL);
		NullCheck(L_17);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_17, NULL);
		float L_19 = L_18.___z_4;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_20;
		L_20 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline(L_11, L_15, L_19, NULL);
		NullCheck(L_7);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_7, L_20, NULL);
		// bullets[bulletsIndex].transform.position = bulletSpawnPoint.transform.position;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_21 = __this->___bullets_9;
		int32_t L_22 = __this->___bulletsIndex_10;
		NullCheck(L_21);
		int32_t L_23 = L_22;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		NullCheck(L_24);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_25;
		L_25 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_24, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_26 = __this->___bulletSpawnPoint_8;
		NullCheck(L_26);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27;
		L_27 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_26, NULL);
		NullCheck(L_27);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_27, NULL);
		NullCheck(L_25);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_25, L_28, NULL);
		// SpawnBullet();
		TankEnemy_SpawnBullet_m5B55757CBEE7CC48511A7FC38844B44B5BAB0765(__this, NULL);
		// bulletSpawnPoint.transform.eulerAngles = new Vector3(-1, -7.5f, 0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_29 = __this->___bulletSpawnPoint_8;
		NullCheck(L_29);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_30;
		L_30 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_29, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
		memset((&L_31), 0, sizeof(L_31));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_31), (-1.0f), (-7.5f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_30);
		Transform_set_eulerAngles_m9F0BC484A7915A51FAB87230644229B75BACA004(L_30, L_31, NULL);
		// bullets[bulletsIndex].transform.rotation = Quaternion.Euler(bulletSpawnPoint.transform.eulerAngles.x, bulletSpawnPoint.transform.eulerAngles.y, bulletSpawnPoint.transform.eulerAngles.z);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_32 = __this->___bullets_9;
		int32_t L_33 = __this->___bulletsIndex_10;
		NullCheck(L_32);
		int32_t L_34 = L_33;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_35 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		NullCheck(L_35);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_36;
		L_36 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_35, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_37 = __this->___bulletSpawnPoint_8;
		NullCheck(L_37);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_38;
		L_38 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_37, NULL);
		NullCheck(L_38);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39;
		L_39 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_38, NULL);
		float L_40 = L_39.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_41 = __this->___bulletSpawnPoint_8;
		NullCheck(L_41);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_42;
		L_42 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_41, NULL);
		NullCheck(L_42);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43;
		L_43 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_42, NULL);
		float L_44 = L_43.___y_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_45 = __this->___bulletSpawnPoint_8;
		NullCheck(L_45);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_46;
		L_46 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_45, NULL);
		NullCheck(L_46);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47;
		L_47 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_46, NULL);
		float L_48 = L_47.___z_4;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_49;
		L_49 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline(L_40, L_44, L_48, NULL);
		NullCheck(L_36);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_36, L_49, NULL);
		// bullets[bulletsIndex].transform.position = bulletSpawnPoint.transform.position;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_50 = __this->___bullets_9;
		int32_t L_51 = __this->___bulletsIndex_10;
		NullCheck(L_50);
		int32_t L_52 = L_51;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_53 = (L_50)->GetAt(static_cast<il2cpp_array_size_t>(L_52));
		NullCheck(L_53);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_54;
		L_54 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_53, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_55 = __this->___bulletSpawnPoint_8;
		NullCheck(L_55);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_56;
		L_56 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_55, NULL);
		NullCheck(L_56);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_57;
		L_57 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_56, NULL);
		NullCheck(L_54);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_54, L_57, NULL);
		// SpawnBullet();
		TankEnemy_SpawnBullet_m5B55757CBEE7CC48511A7FC38844B44B5BAB0765(__this, NULL);
		// bulletSpawnPoint.transform.eulerAngles = new Vector3(-1, -2.5f, 0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_58 = __this->___bulletSpawnPoint_8;
		NullCheck(L_58);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_59;
		L_59 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_58, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_60;
		memset((&L_60), 0, sizeof(L_60));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_60), (-1.0f), (-2.5f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_59);
		Transform_set_eulerAngles_m9F0BC484A7915A51FAB87230644229B75BACA004(L_59, L_60, NULL);
		// bullets[bulletsIndex].transform.rotation = Quaternion.Euler(bulletSpawnPoint.transform.eulerAngles.x, bulletSpawnPoint.transform.eulerAngles.y, bulletSpawnPoint.transform.eulerAngles.z);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_61 = __this->___bullets_9;
		int32_t L_62 = __this->___bulletsIndex_10;
		NullCheck(L_61);
		int32_t L_63 = L_62;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_64 = (L_61)->GetAt(static_cast<il2cpp_array_size_t>(L_63));
		NullCheck(L_64);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_65;
		L_65 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_64, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_66 = __this->___bulletSpawnPoint_8;
		NullCheck(L_66);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_67;
		L_67 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_66, NULL);
		NullCheck(L_67);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_68;
		L_68 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_67, NULL);
		float L_69 = L_68.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_70 = __this->___bulletSpawnPoint_8;
		NullCheck(L_70);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_71;
		L_71 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_70, NULL);
		NullCheck(L_71);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_72;
		L_72 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_71, NULL);
		float L_73 = L_72.___y_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_74 = __this->___bulletSpawnPoint_8;
		NullCheck(L_74);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_75;
		L_75 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_74, NULL);
		NullCheck(L_75);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_76;
		L_76 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_75, NULL);
		float L_77 = L_76.___z_4;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_78;
		L_78 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline(L_69, L_73, L_77, NULL);
		NullCheck(L_65);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_65, L_78, NULL);
		// bullets[bulletsIndex].transform.position = bulletSpawnPoint.transform.position;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_79 = __this->___bullets_9;
		int32_t L_80 = __this->___bulletsIndex_10;
		NullCheck(L_79);
		int32_t L_81 = L_80;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_82 = (L_79)->GetAt(static_cast<il2cpp_array_size_t>(L_81));
		NullCheck(L_82);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_83;
		L_83 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_82, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_84 = __this->___bulletSpawnPoint_8;
		NullCheck(L_84);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_85;
		L_85 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_84, NULL);
		NullCheck(L_85);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_86;
		L_86 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_85, NULL);
		NullCheck(L_83);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_83, L_86, NULL);
		// SpawnBullet();
		TankEnemy_SpawnBullet_m5B55757CBEE7CC48511A7FC38844B44B5BAB0765(__this, NULL);
		// bulletSpawnPoint.transform.eulerAngles = new Vector3(-1, 2.5f, 0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_87 = __this->___bulletSpawnPoint_8;
		NullCheck(L_87);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_88;
		L_88 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_87, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_89;
		memset((&L_89), 0, sizeof(L_89));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_89), (-1.0f), (2.5f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_88);
		Transform_set_eulerAngles_m9F0BC484A7915A51FAB87230644229B75BACA004(L_88, L_89, NULL);
		// bullets[bulletsIndex].transform.rotation = Quaternion.Euler(bulletSpawnPoint.transform.eulerAngles.x, bulletSpawnPoint.transform.eulerAngles.y, bulletSpawnPoint.transform.eulerAngles.z);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_90 = __this->___bullets_9;
		int32_t L_91 = __this->___bulletsIndex_10;
		NullCheck(L_90);
		int32_t L_92 = L_91;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_93 = (L_90)->GetAt(static_cast<il2cpp_array_size_t>(L_92));
		NullCheck(L_93);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_94;
		L_94 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_93, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_95 = __this->___bulletSpawnPoint_8;
		NullCheck(L_95);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_96;
		L_96 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_95, NULL);
		NullCheck(L_96);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_97;
		L_97 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_96, NULL);
		float L_98 = L_97.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_99 = __this->___bulletSpawnPoint_8;
		NullCheck(L_99);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_100;
		L_100 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_99, NULL);
		NullCheck(L_100);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_101;
		L_101 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_100, NULL);
		float L_102 = L_101.___y_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_103 = __this->___bulletSpawnPoint_8;
		NullCheck(L_103);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_104;
		L_104 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_103, NULL);
		NullCheck(L_104);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_105;
		L_105 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_104, NULL);
		float L_106 = L_105.___z_4;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_107;
		L_107 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline(L_98, L_102, L_106, NULL);
		NullCheck(L_94);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_94, L_107, NULL);
		// bullets[bulletsIndex].transform.position = bulletSpawnPoint.transform.position;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_108 = __this->___bullets_9;
		int32_t L_109 = __this->___bulletsIndex_10;
		NullCheck(L_108);
		int32_t L_110 = L_109;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_111 = (L_108)->GetAt(static_cast<il2cpp_array_size_t>(L_110));
		NullCheck(L_111);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_112;
		L_112 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_111, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_113 = __this->___bulletSpawnPoint_8;
		NullCheck(L_113);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_114;
		L_114 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_113, NULL);
		NullCheck(L_114);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_115;
		L_115 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_114, NULL);
		NullCheck(L_112);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_112, L_115, NULL);
		// SpawnBullet();
		TankEnemy_SpawnBullet_m5B55757CBEE7CC48511A7FC38844B44B5BAB0765(__this, NULL);
		// bulletSpawnPoint.transform.eulerAngles = new Vector3(-1, 7.5f, 0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_116 = __this->___bulletSpawnPoint_8;
		NullCheck(L_116);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_117;
		L_117 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_116, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_118;
		memset((&L_118), 0, sizeof(L_118));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_118), (-1.0f), (7.5f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_117);
		Transform_set_eulerAngles_m9F0BC484A7915A51FAB87230644229B75BACA004(L_117, L_118, NULL);
		// bullets[bulletsIndex].transform.rotation = Quaternion.Euler(bulletSpawnPoint.transform.eulerAngles.x, bulletSpawnPoint.transform.eulerAngles.y, bulletSpawnPoint.transform.eulerAngles.z);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_119 = __this->___bullets_9;
		int32_t L_120 = __this->___bulletsIndex_10;
		NullCheck(L_119);
		int32_t L_121 = L_120;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_122 = (L_119)->GetAt(static_cast<il2cpp_array_size_t>(L_121));
		NullCheck(L_122);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_123;
		L_123 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_122, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_124 = __this->___bulletSpawnPoint_8;
		NullCheck(L_124);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_125;
		L_125 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_124, NULL);
		NullCheck(L_125);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_126;
		L_126 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_125, NULL);
		float L_127 = L_126.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_128 = __this->___bulletSpawnPoint_8;
		NullCheck(L_128);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_129;
		L_129 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_128, NULL);
		NullCheck(L_129);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_130;
		L_130 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_129, NULL);
		float L_131 = L_130.___y_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_132 = __this->___bulletSpawnPoint_8;
		NullCheck(L_132);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_133;
		L_133 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_132, NULL);
		NullCheck(L_133);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_134;
		L_134 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_133, NULL);
		float L_135 = L_134.___z_4;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_136;
		L_136 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline(L_127, L_131, L_135, NULL);
		NullCheck(L_123);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_123, L_136, NULL);
		// bullets[bulletsIndex].transform.position = bulletSpawnPoint.transform.position;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_137 = __this->___bullets_9;
		int32_t L_138 = __this->___bulletsIndex_10;
		NullCheck(L_137);
		int32_t L_139 = L_138;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_140 = (L_137)->GetAt(static_cast<il2cpp_array_size_t>(L_139));
		NullCheck(L_140);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_141;
		L_141 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_140, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_142 = __this->___bulletSpawnPoint_8;
		NullCheck(L_142);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_143;
		L_143 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_142, NULL);
		NullCheck(L_143);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_144;
		L_144 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_143, NULL);
		NullCheck(L_141);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_141, L_144, NULL);
		// SpawnBullet();
		TankEnemy_SpawnBullet_m5B55757CBEE7CC48511A7FC38844B44B5BAB0765(__this, NULL);
		// bulletSpawnPoint.transform.eulerAngles = new Vector3(-1, 12.5f, 0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_145 = __this->___bulletSpawnPoint_8;
		NullCheck(L_145);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_146;
		L_146 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_145, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_147;
		memset((&L_147), 0, sizeof(L_147));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_147), (-1.0f), (12.5f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_146);
		Transform_set_eulerAngles_m9F0BC484A7915A51FAB87230644229B75BACA004(L_146, L_147, NULL);
		// bullets[bulletsIndex].transform.rotation = Quaternion.Euler(bulletSpawnPoint.transform.eulerAngles.x, bulletSpawnPoint.transform.eulerAngles.y, bulletSpawnPoint.transform.eulerAngles.z);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_148 = __this->___bullets_9;
		int32_t L_149 = __this->___bulletsIndex_10;
		NullCheck(L_148);
		int32_t L_150 = L_149;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_151 = (L_148)->GetAt(static_cast<il2cpp_array_size_t>(L_150));
		NullCheck(L_151);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_152;
		L_152 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_151, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_153 = __this->___bulletSpawnPoint_8;
		NullCheck(L_153);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_154;
		L_154 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_153, NULL);
		NullCheck(L_154);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_155;
		L_155 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_154, NULL);
		float L_156 = L_155.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_157 = __this->___bulletSpawnPoint_8;
		NullCheck(L_157);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_158;
		L_158 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_157, NULL);
		NullCheck(L_158);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_159;
		L_159 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_158, NULL);
		float L_160 = L_159.___y_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_161 = __this->___bulletSpawnPoint_8;
		NullCheck(L_161);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_162;
		L_162 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_161, NULL);
		NullCheck(L_162);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_163;
		L_163 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_162, NULL);
		float L_164 = L_163.___z_4;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_165;
		L_165 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline(L_156, L_160, L_164, NULL);
		NullCheck(L_152);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_152, L_165, NULL);
		// bullets[bulletsIndex].transform.position = bulletSpawnPoint.transform.position;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_166 = __this->___bullets_9;
		int32_t L_167 = __this->___bulletsIndex_10;
		NullCheck(L_166);
		int32_t L_168 = L_167;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_169 = (L_166)->GetAt(static_cast<il2cpp_array_size_t>(L_168));
		NullCheck(L_169);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_170;
		L_170 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_169, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_171 = __this->___bulletSpawnPoint_8;
		NullCheck(L_171);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_172;
		L_172 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_171, NULL);
		NullCheck(L_172);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_173;
		L_173 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_172, NULL);
		NullCheck(L_170);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_170, L_173, NULL);
		// SpawnBullet();
		TankEnemy_SpawnBullet_m5B55757CBEE7CC48511A7FC38844B44B5BAB0765(__this, NULL);
		// bulletsShot++;
		int32_t L_174 = __this->___bulletsShot_12;
		__this->___bulletsShot_12 = ((int32_t)il2cpp_codegen_add(L_174, 1));
		// timer = 0;
		__this->___timer_11 = (0.0f);
		// }
		return;
	}
}
// System.Void TankEnemy::RocketAttack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TankEnemy_RocketAttack_m7857F9C5D07201405930130199FE33B4B454CA0E (TankEnemy_t2BA2128FB51203FB3CB6466ACB4E0B0EB4ECDF25* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		goto IL_000f;
	}

IL_0002:
	{
		// randomNumber = Random.Range(0,5);
		int32_t L_0;
		L_0 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(0, 5, NULL);
		__this->___randomNumber_20 = L_0;
	}

IL_000f:
	{
		// while (lastRandomNumber == randomNumber)
		int32_t L_1 = __this->___lastRandomNumber_19;
		int32_t L_2 = __this->___randomNumber_20;
		if ((((int32_t)L_1) == ((int32_t)L_2)))
		{
			goto IL_0002;
		}
	}
	{
		// lastRandomNumber = randomNumber;
		int32_t L_3 = __this->___randomNumber_20;
		__this->___lastRandomNumber_19 = L_3;
		// for (int i = 0; i < 5; i++)
		V_0 = 0;
		goto IL_0056;
	}

IL_002d:
	{
		// if (randomNumber != i)
		int32_t L_4 = __this->___randomNumber_20;
		int32_t L_5 = V_0;
		if ((((int32_t)L_4) == ((int32_t)L_5)))
		{
			goto IL_0052;
		}
	}
	{
		// rocketExplosions[i].SetActive(true);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_6 = __this->___rocketExplosions_15;
		int32_t L_7 = V_0;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_9);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_9, (bool)1, NULL);
		// rockets[i].SetActive(true);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_10 = __this->___rockets_16;
		int32_t L_11 = V_0;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		NullCheck(L_13);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_13, (bool)1, NULL);
	}

IL_0052:
	{
		// for (int i = 0; i < 5; i++)
		int32_t L_14 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_0056:
	{
		// for (int i = 0; i < 5; i++)
		int32_t L_15 = V_0;
		if ((((int32_t)L_15) < ((int32_t)5)))
		{
			goto IL_002d;
		}
	}
	{
		// timer = 0;
		__this->___timer_11 = (0.0f);
		// shootAttackRounds++;
		int32_t L_16 = __this->___shootAttackRounds_14;
		__this->___shootAttackRounds_14 = ((int32_t)il2cpp_codegen_add(L_16, 1));
		// }
		return;
	}
}
// System.Void TankEnemy::ShootingAttack3()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TankEnemy_ShootingAttack3_mBB0CE41560E9038CB16AFA9FEFAAA0C7EBBBD2EB (TankEnemy_t2BA2128FB51203FB3CB6466ACB4E0B0EB4ECDF25* __this, const RuntimeMethod* method) 
{
	{
		// bulletSpawnPoint.transform.eulerAngles = new Vector3(-1, 0, 0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___bulletSpawnPoint_8;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_2), (-1.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_set_eulerAngles_m9F0BC484A7915A51FAB87230644229B75BACA004(L_1, L_2, NULL);
		// bullets[bulletsIndex].transform.rotation = Quaternion.Euler(bulletSpawnPoint.transform.eulerAngles.x, bulletSpawnPoint.transform.eulerAngles.y, bulletSpawnPoint.transform.eulerAngles.z);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_3 = __this->___bullets_9;
		int32_t L_4 = __this->___bulletsIndex_10;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_6, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8 = __this->___bulletSpawnPoint_8;
		NullCheck(L_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_8, NULL);
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_9, NULL);
		float L_11 = L_10.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12 = __this->___bulletSpawnPoint_8;
		NullCheck(L_12);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_12, NULL);
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_13, NULL);
		float L_15 = L_14.___y_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16 = __this->___bulletSpawnPoint_8;
		NullCheck(L_16);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_16, NULL);
		NullCheck(L_17);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_17, NULL);
		float L_19 = L_18.___z_4;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_20;
		L_20 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline(L_11, L_15, L_19, NULL);
		NullCheck(L_7);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_7, L_20, NULL);
		// bullets[bulletsIndex].transform.position = new Vector3(bulletSpawnPoint.transform.position.x-12.5f, bulletSpawnPoint.transform.position.y, bulletSpawnPoint.transform.position.z);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_21 = __this->___bullets_9;
		int32_t L_22 = __this->___bulletsIndex_10;
		NullCheck(L_21);
		int32_t L_23 = L_22;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		NullCheck(L_24);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_25;
		L_25 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_24, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_26 = __this->___bulletSpawnPoint_8;
		NullCheck(L_26);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27;
		L_27 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_26, NULL);
		NullCheck(L_27);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_27, NULL);
		float L_29 = L_28.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_30 = __this->___bulletSpawnPoint_8;
		NullCheck(L_30);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_31;
		L_31 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_30, NULL);
		NullCheck(L_31);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32;
		L_32 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_31, NULL);
		float L_33 = L_32.___y_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_34 = __this->___bulletSpawnPoint_8;
		NullCheck(L_34);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_35;
		L_35 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_34, NULL);
		NullCheck(L_35);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36;
		L_36 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_35, NULL);
		float L_37 = L_36.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38;
		memset((&L_38), 0, sizeof(L_38));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_38), ((float)il2cpp_codegen_subtract(L_29, (12.5f))), L_33, L_37, /*hidden argument*/NULL);
		NullCheck(L_25);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_25, L_38, NULL);
		// SpawnBullet();
		TankEnemy_SpawnBullet_m5B55757CBEE7CC48511A7FC38844B44B5BAB0765(__this, NULL);
		// bulletSpawnPoint.transform.eulerAngles = new Vector3(-1, 0, 0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_39 = __this->___bulletSpawnPoint_8;
		NullCheck(L_39);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_40;
		L_40 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_39, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41;
		memset((&L_41), 0, sizeof(L_41));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_41), (-1.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_40);
		Transform_set_eulerAngles_m9F0BC484A7915A51FAB87230644229B75BACA004(L_40, L_41, NULL);
		// bullets[bulletsIndex].transform.rotation = Quaternion.Euler(bulletSpawnPoint.transform.eulerAngles.x, bulletSpawnPoint.transform.eulerAngles.y, bulletSpawnPoint.transform.eulerAngles.z);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_42 = __this->___bullets_9;
		int32_t L_43 = __this->___bulletsIndex_10;
		NullCheck(L_42);
		int32_t L_44 = L_43;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_45 = (L_42)->GetAt(static_cast<il2cpp_array_size_t>(L_44));
		NullCheck(L_45);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_46;
		L_46 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_45, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_47 = __this->___bulletSpawnPoint_8;
		NullCheck(L_47);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_48;
		L_48 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_47, NULL);
		NullCheck(L_48);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_49;
		L_49 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_48, NULL);
		float L_50 = L_49.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_51 = __this->___bulletSpawnPoint_8;
		NullCheck(L_51);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_52;
		L_52 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_51, NULL);
		NullCheck(L_52);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_53;
		L_53 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_52, NULL);
		float L_54 = L_53.___y_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_55 = __this->___bulletSpawnPoint_8;
		NullCheck(L_55);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_56;
		L_56 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_55, NULL);
		NullCheck(L_56);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_57;
		L_57 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_56, NULL);
		float L_58 = L_57.___z_4;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_59;
		L_59 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline(L_50, L_54, L_58, NULL);
		NullCheck(L_46);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_46, L_59, NULL);
		// bullets[bulletsIndex].transform.position = new Vector3(bulletSpawnPoint.transform.position.x-10, bulletSpawnPoint.transform.position.y, bulletSpawnPoint.transform.position.z);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_60 = __this->___bullets_9;
		int32_t L_61 = __this->___bulletsIndex_10;
		NullCheck(L_60);
		int32_t L_62 = L_61;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_63 = (L_60)->GetAt(static_cast<il2cpp_array_size_t>(L_62));
		NullCheck(L_63);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_64;
		L_64 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_63, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_65 = __this->___bulletSpawnPoint_8;
		NullCheck(L_65);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_66;
		L_66 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_65, NULL);
		NullCheck(L_66);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_67;
		L_67 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_66, NULL);
		float L_68 = L_67.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_69 = __this->___bulletSpawnPoint_8;
		NullCheck(L_69);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_70;
		L_70 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_69, NULL);
		NullCheck(L_70);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_71;
		L_71 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_70, NULL);
		float L_72 = L_71.___y_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_73 = __this->___bulletSpawnPoint_8;
		NullCheck(L_73);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_74;
		L_74 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_73, NULL);
		NullCheck(L_74);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_75;
		L_75 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_74, NULL);
		float L_76 = L_75.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_77;
		memset((&L_77), 0, sizeof(L_77));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_77), ((float)il2cpp_codegen_subtract(L_68, (10.0f))), L_72, L_76, /*hidden argument*/NULL);
		NullCheck(L_64);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_64, L_77, NULL);
		// SpawnBullet();
		TankEnemy_SpawnBullet_m5B55757CBEE7CC48511A7FC38844B44B5BAB0765(__this, NULL);
		// bulletSpawnPoint.transform.eulerAngles = new Vector3(-1, 0, 0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_78 = __this->___bulletSpawnPoint_8;
		NullCheck(L_78);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_79;
		L_79 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_78, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_80;
		memset((&L_80), 0, sizeof(L_80));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_80), (-1.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_79);
		Transform_set_eulerAngles_m9F0BC484A7915A51FAB87230644229B75BACA004(L_79, L_80, NULL);
		// bullets[bulletsIndex].transform.rotation = Quaternion.Euler(bulletSpawnPoint.transform.eulerAngles.x, bulletSpawnPoint.transform.eulerAngles.y, bulletSpawnPoint.transform.eulerAngles.z);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_81 = __this->___bullets_9;
		int32_t L_82 = __this->___bulletsIndex_10;
		NullCheck(L_81);
		int32_t L_83 = L_82;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_84 = (L_81)->GetAt(static_cast<il2cpp_array_size_t>(L_83));
		NullCheck(L_84);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_85;
		L_85 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_84, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_86 = __this->___bulletSpawnPoint_8;
		NullCheck(L_86);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_87;
		L_87 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_86, NULL);
		NullCheck(L_87);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_88;
		L_88 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_87, NULL);
		float L_89 = L_88.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_90 = __this->___bulletSpawnPoint_8;
		NullCheck(L_90);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_91;
		L_91 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_90, NULL);
		NullCheck(L_91);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_92;
		L_92 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_91, NULL);
		float L_93 = L_92.___y_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_94 = __this->___bulletSpawnPoint_8;
		NullCheck(L_94);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_95;
		L_95 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_94, NULL);
		NullCheck(L_95);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_96;
		L_96 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_95, NULL);
		float L_97 = L_96.___z_4;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_98;
		L_98 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline(L_89, L_93, L_97, NULL);
		NullCheck(L_85);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_85, L_98, NULL);
		// bullets[bulletsIndex].transform.position = new Vector3(bulletSpawnPoint.transform.position.x-7.5f, bulletSpawnPoint.transform.position.y, bulletSpawnPoint.transform.position.z);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_99 = __this->___bullets_9;
		int32_t L_100 = __this->___bulletsIndex_10;
		NullCheck(L_99);
		int32_t L_101 = L_100;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_102 = (L_99)->GetAt(static_cast<il2cpp_array_size_t>(L_101));
		NullCheck(L_102);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_103;
		L_103 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_102, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_104 = __this->___bulletSpawnPoint_8;
		NullCheck(L_104);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_105;
		L_105 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_104, NULL);
		NullCheck(L_105);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_106;
		L_106 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_105, NULL);
		float L_107 = L_106.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_108 = __this->___bulletSpawnPoint_8;
		NullCheck(L_108);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_109;
		L_109 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_108, NULL);
		NullCheck(L_109);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_110;
		L_110 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_109, NULL);
		float L_111 = L_110.___y_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_112 = __this->___bulletSpawnPoint_8;
		NullCheck(L_112);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_113;
		L_113 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_112, NULL);
		NullCheck(L_113);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_114;
		L_114 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_113, NULL);
		float L_115 = L_114.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_116;
		memset((&L_116), 0, sizeof(L_116));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_116), ((float)il2cpp_codegen_subtract(L_107, (7.5f))), L_111, L_115, /*hidden argument*/NULL);
		NullCheck(L_103);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_103, L_116, NULL);
		// SpawnBullet();
		TankEnemy_SpawnBullet_m5B55757CBEE7CC48511A7FC38844B44B5BAB0765(__this, NULL);
		// bulletSpawnPoint.transform.eulerAngles = new Vector3(-1, 0, 0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_117 = __this->___bulletSpawnPoint_8;
		NullCheck(L_117);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_118;
		L_118 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_117, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_119;
		memset((&L_119), 0, sizeof(L_119));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_119), (-1.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_118);
		Transform_set_eulerAngles_m9F0BC484A7915A51FAB87230644229B75BACA004(L_118, L_119, NULL);
		// bullets[bulletsIndex].transform.rotation = Quaternion.Euler(bulletSpawnPoint.transform.eulerAngles.x, bulletSpawnPoint.transform.eulerAngles.y, bulletSpawnPoint.transform.eulerAngles.z);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_120 = __this->___bullets_9;
		int32_t L_121 = __this->___bulletsIndex_10;
		NullCheck(L_120);
		int32_t L_122 = L_121;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_123 = (L_120)->GetAt(static_cast<il2cpp_array_size_t>(L_122));
		NullCheck(L_123);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_124;
		L_124 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_123, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_125 = __this->___bulletSpawnPoint_8;
		NullCheck(L_125);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_126;
		L_126 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_125, NULL);
		NullCheck(L_126);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_127;
		L_127 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_126, NULL);
		float L_128 = L_127.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_129 = __this->___bulletSpawnPoint_8;
		NullCheck(L_129);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_130;
		L_130 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_129, NULL);
		NullCheck(L_130);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_131;
		L_131 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_130, NULL);
		float L_132 = L_131.___y_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_133 = __this->___bulletSpawnPoint_8;
		NullCheck(L_133);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_134;
		L_134 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_133, NULL);
		NullCheck(L_134);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_135;
		L_135 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_134, NULL);
		float L_136 = L_135.___z_4;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_137;
		L_137 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline(L_128, L_132, L_136, NULL);
		NullCheck(L_124);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_124, L_137, NULL);
		// bullets[bulletsIndex].transform.position = new Vector3(bulletSpawnPoint.transform.position.x-5, bulletSpawnPoint.transform.position.y, bulletSpawnPoint.transform.position.z);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_138 = __this->___bullets_9;
		int32_t L_139 = __this->___bulletsIndex_10;
		NullCheck(L_138);
		int32_t L_140 = L_139;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_141 = (L_138)->GetAt(static_cast<il2cpp_array_size_t>(L_140));
		NullCheck(L_141);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_142;
		L_142 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_141, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_143 = __this->___bulletSpawnPoint_8;
		NullCheck(L_143);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_144;
		L_144 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_143, NULL);
		NullCheck(L_144);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_145;
		L_145 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_144, NULL);
		float L_146 = L_145.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_147 = __this->___bulletSpawnPoint_8;
		NullCheck(L_147);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_148;
		L_148 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_147, NULL);
		NullCheck(L_148);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_149;
		L_149 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_148, NULL);
		float L_150 = L_149.___y_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_151 = __this->___bulletSpawnPoint_8;
		NullCheck(L_151);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_152;
		L_152 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_151, NULL);
		NullCheck(L_152);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_153;
		L_153 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_152, NULL);
		float L_154 = L_153.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_155;
		memset((&L_155), 0, sizeof(L_155));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_155), ((float)il2cpp_codegen_subtract(L_146, (5.0f))), L_150, L_154, /*hidden argument*/NULL);
		NullCheck(L_142);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_142, L_155, NULL);
		// SpawnBullet();
		TankEnemy_SpawnBullet_m5B55757CBEE7CC48511A7FC38844B44B5BAB0765(__this, NULL);
		// bulletSpawnPoint.transform.eulerAngles = new Vector3(-1, 0, 0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_156 = __this->___bulletSpawnPoint_8;
		NullCheck(L_156);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_157;
		L_157 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_156, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_158;
		memset((&L_158), 0, sizeof(L_158));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_158), (-1.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_157);
		Transform_set_eulerAngles_m9F0BC484A7915A51FAB87230644229B75BACA004(L_157, L_158, NULL);
		// bullets[bulletsIndex].transform.rotation = Quaternion.Euler(bulletSpawnPoint.transform.eulerAngles.x, bulletSpawnPoint.transform.eulerAngles.y, bulletSpawnPoint.transform.eulerAngles.z);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_159 = __this->___bullets_9;
		int32_t L_160 = __this->___bulletsIndex_10;
		NullCheck(L_159);
		int32_t L_161 = L_160;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_162 = (L_159)->GetAt(static_cast<il2cpp_array_size_t>(L_161));
		NullCheck(L_162);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_163;
		L_163 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_162, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_164 = __this->___bulletSpawnPoint_8;
		NullCheck(L_164);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_165;
		L_165 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_164, NULL);
		NullCheck(L_165);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_166;
		L_166 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_165, NULL);
		float L_167 = L_166.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_168 = __this->___bulletSpawnPoint_8;
		NullCheck(L_168);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_169;
		L_169 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_168, NULL);
		NullCheck(L_169);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_170;
		L_170 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_169, NULL);
		float L_171 = L_170.___y_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_172 = __this->___bulletSpawnPoint_8;
		NullCheck(L_172);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_173;
		L_173 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_172, NULL);
		NullCheck(L_173);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_174;
		L_174 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_173, NULL);
		float L_175 = L_174.___z_4;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_176;
		L_176 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline(L_167, L_171, L_175, NULL);
		NullCheck(L_163);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_163, L_176, NULL);
		// bullets[bulletsIndex].transform.position = new Vector3(bulletSpawnPoint.transform.position.x-2.5f, bulletSpawnPoint.transform.position.y, bulletSpawnPoint.transform.position.z);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_177 = __this->___bullets_9;
		int32_t L_178 = __this->___bulletsIndex_10;
		NullCheck(L_177);
		int32_t L_179 = L_178;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_180 = (L_177)->GetAt(static_cast<il2cpp_array_size_t>(L_179));
		NullCheck(L_180);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_181;
		L_181 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_180, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_182 = __this->___bulletSpawnPoint_8;
		NullCheck(L_182);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_183;
		L_183 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_182, NULL);
		NullCheck(L_183);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_184;
		L_184 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_183, NULL);
		float L_185 = L_184.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_186 = __this->___bulletSpawnPoint_8;
		NullCheck(L_186);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_187;
		L_187 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_186, NULL);
		NullCheck(L_187);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_188;
		L_188 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_187, NULL);
		float L_189 = L_188.___y_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_190 = __this->___bulletSpawnPoint_8;
		NullCheck(L_190);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_191;
		L_191 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_190, NULL);
		NullCheck(L_191);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_192;
		L_192 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_191, NULL);
		float L_193 = L_192.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_194;
		memset((&L_194), 0, sizeof(L_194));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_194), ((float)il2cpp_codegen_subtract(L_185, (2.5f))), L_189, L_193, /*hidden argument*/NULL);
		NullCheck(L_181);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_181, L_194, NULL);
		// SpawnBullet();
		TankEnemy_SpawnBullet_m5B55757CBEE7CC48511A7FC38844B44B5BAB0765(__this, NULL);
		// bulletSpawnPoint.transform.eulerAngles = new Vector3(-1, 0, 0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_195 = __this->___bulletSpawnPoint_8;
		NullCheck(L_195);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_196;
		L_196 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_195, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_197;
		memset((&L_197), 0, sizeof(L_197));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_197), (-1.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_196);
		Transform_set_eulerAngles_m9F0BC484A7915A51FAB87230644229B75BACA004(L_196, L_197, NULL);
		// bullets[bulletsIndex].transform.rotation = Quaternion.Euler(bulletSpawnPoint.transform.eulerAngles.x, bulletSpawnPoint.transform.eulerAngles.y, bulletSpawnPoint.transform.eulerAngles.z);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_198 = __this->___bullets_9;
		int32_t L_199 = __this->___bulletsIndex_10;
		NullCheck(L_198);
		int32_t L_200 = L_199;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_201 = (L_198)->GetAt(static_cast<il2cpp_array_size_t>(L_200));
		NullCheck(L_201);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_202;
		L_202 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_201, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_203 = __this->___bulletSpawnPoint_8;
		NullCheck(L_203);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_204;
		L_204 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_203, NULL);
		NullCheck(L_204);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_205;
		L_205 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_204, NULL);
		float L_206 = L_205.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_207 = __this->___bulletSpawnPoint_8;
		NullCheck(L_207);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_208;
		L_208 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_207, NULL);
		NullCheck(L_208);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_209;
		L_209 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_208, NULL);
		float L_210 = L_209.___y_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_211 = __this->___bulletSpawnPoint_8;
		NullCheck(L_211);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_212;
		L_212 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_211, NULL);
		NullCheck(L_212);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_213;
		L_213 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_212, NULL);
		float L_214 = L_213.___z_4;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_215;
		L_215 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline(L_206, L_210, L_214, NULL);
		NullCheck(L_202);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_202, L_215, NULL);
		// bullets[bulletsIndex].transform.position = new Vector3(bulletSpawnPoint.transform.position.x, bulletSpawnPoint.transform.position.y, bulletSpawnPoint.transform.position.z);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_216 = __this->___bullets_9;
		int32_t L_217 = __this->___bulletsIndex_10;
		NullCheck(L_216);
		int32_t L_218 = L_217;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_219 = (L_216)->GetAt(static_cast<il2cpp_array_size_t>(L_218));
		NullCheck(L_219);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_220;
		L_220 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_219, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_221 = __this->___bulletSpawnPoint_8;
		NullCheck(L_221);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_222;
		L_222 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_221, NULL);
		NullCheck(L_222);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_223;
		L_223 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_222, NULL);
		float L_224 = L_223.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_225 = __this->___bulletSpawnPoint_8;
		NullCheck(L_225);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_226;
		L_226 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_225, NULL);
		NullCheck(L_226);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_227;
		L_227 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_226, NULL);
		float L_228 = L_227.___y_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_229 = __this->___bulletSpawnPoint_8;
		NullCheck(L_229);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_230;
		L_230 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_229, NULL);
		NullCheck(L_230);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_231;
		L_231 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_230, NULL);
		float L_232 = L_231.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_233;
		memset((&L_233), 0, sizeof(L_233));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_233), L_224, L_228, L_232, /*hidden argument*/NULL);
		NullCheck(L_220);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_220, L_233, NULL);
		// SpawnBullet();
		TankEnemy_SpawnBullet_m5B55757CBEE7CC48511A7FC38844B44B5BAB0765(__this, NULL);
		// bulletSpawnPoint.transform.eulerAngles = new Vector3(-1, 0, 0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_234 = __this->___bulletSpawnPoint_8;
		NullCheck(L_234);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_235;
		L_235 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_234, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_236;
		memset((&L_236), 0, sizeof(L_236));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_236), (-1.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_235);
		Transform_set_eulerAngles_m9F0BC484A7915A51FAB87230644229B75BACA004(L_235, L_236, NULL);
		// bullets[bulletsIndex].transform.rotation = Quaternion.Euler(bulletSpawnPoint.transform.eulerAngles.x, bulletSpawnPoint.transform.eulerAngles.y, bulletSpawnPoint.transform.eulerAngles.z);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_237 = __this->___bullets_9;
		int32_t L_238 = __this->___bulletsIndex_10;
		NullCheck(L_237);
		int32_t L_239 = L_238;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_240 = (L_237)->GetAt(static_cast<il2cpp_array_size_t>(L_239));
		NullCheck(L_240);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_241;
		L_241 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_240, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_242 = __this->___bulletSpawnPoint_8;
		NullCheck(L_242);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_243;
		L_243 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_242, NULL);
		NullCheck(L_243);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_244;
		L_244 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_243, NULL);
		float L_245 = L_244.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_246 = __this->___bulletSpawnPoint_8;
		NullCheck(L_246);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_247;
		L_247 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_246, NULL);
		NullCheck(L_247);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_248;
		L_248 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_247, NULL);
		float L_249 = L_248.___y_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_250 = __this->___bulletSpawnPoint_8;
		NullCheck(L_250);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_251;
		L_251 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_250, NULL);
		NullCheck(L_251);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_252;
		L_252 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_251, NULL);
		float L_253 = L_252.___z_4;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_254;
		L_254 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline(L_245, L_249, L_253, NULL);
		NullCheck(L_241);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_241, L_254, NULL);
		// bullets[bulletsIndex].transform.position = new Vector3(bulletSpawnPoint.transform.position.x+2.5f, bulletSpawnPoint.transform.position.y, bulletSpawnPoint.transform.position.z);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_255 = __this->___bullets_9;
		int32_t L_256 = __this->___bulletsIndex_10;
		NullCheck(L_255);
		int32_t L_257 = L_256;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_258 = (L_255)->GetAt(static_cast<il2cpp_array_size_t>(L_257));
		NullCheck(L_258);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_259;
		L_259 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_258, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_260 = __this->___bulletSpawnPoint_8;
		NullCheck(L_260);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_261;
		L_261 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_260, NULL);
		NullCheck(L_261);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_262;
		L_262 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_261, NULL);
		float L_263 = L_262.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_264 = __this->___bulletSpawnPoint_8;
		NullCheck(L_264);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_265;
		L_265 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_264, NULL);
		NullCheck(L_265);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_266;
		L_266 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_265, NULL);
		float L_267 = L_266.___y_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_268 = __this->___bulletSpawnPoint_8;
		NullCheck(L_268);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_269;
		L_269 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_268, NULL);
		NullCheck(L_269);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_270;
		L_270 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_269, NULL);
		float L_271 = L_270.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_272;
		memset((&L_272), 0, sizeof(L_272));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_272), ((float)il2cpp_codegen_add(L_263, (2.5f))), L_267, L_271, /*hidden argument*/NULL);
		NullCheck(L_259);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_259, L_272, NULL);
		// SpawnBullet();
		TankEnemy_SpawnBullet_m5B55757CBEE7CC48511A7FC38844B44B5BAB0765(__this, NULL);
		// bulletSpawnPoint.transform.eulerAngles = new Vector3(-1, 0, 0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_273 = __this->___bulletSpawnPoint_8;
		NullCheck(L_273);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_274;
		L_274 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_273, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_275;
		memset((&L_275), 0, sizeof(L_275));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_275), (-1.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_274);
		Transform_set_eulerAngles_m9F0BC484A7915A51FAB87230644229B75BACA004(L_274, L_275, NULL);
		// bullets[bulletsIndex].transform.rotation = Quaternion.Euler(bulletSpawnPoint.transform.eulerAngles.x, bulletSpawnPoint.transform.eulerAngles.y, bulletSpawnPoint.transform.eulerAngles.z);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_276 = __this->___bullets_9;
		int32_t L_277 = __this->___bulletsIndex_10;
		NullCheck(L_276);
		int32_t L_278 = L_277;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_279 = (L_276)->GetAt(static_cast<il2cpp_array_size_t>(L_278));
		NullCheck(L_279);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_280;
		L_280 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_279, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_281 = __this->___bulletSpawnPoint_8;
		NullCheck(L_281);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_282;
		L_282 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_281, NULL);
		NullCheck(L_282);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_283;
		L_283 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_282, NULL);
		float L_284 = L_283.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_285 = __this->___bulletSpawnPoint_8;
		NullCheck(L_285);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_286;
		L_286 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_285, NULL);
		NullCheck(L_286);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_287;
		L_287 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_286, NULL);
		float L_288 = L_287.___y_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_289 = __this->___bulletSpawnPoint_8;
		NullCheck(L_289);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_290;
		L_290 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_289, NULL);
		NullCheck(L_290);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_291;
		L_291 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_290, NULL);
		float L_292 = L_291.___z_4;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_293;
		L_293 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline(L_284, L_288, L_292, NULL);
		NullCheck(L_280);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_280, L_293, NULL);
		// bullets[bulletsIndex].transform.position = new Vector3(bulletSpawnPoint.transform.position.x+5, bulletSpawnPoint.transform.position.y, bulletSpawnPoint.transform.position.z);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_294 = __this->___bullets_9;
		int32_t L_295 = __this->___bulletsIndex_10;
		NullCheck(L_294);
		int32_t L_296 = L_295;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_297 = (L_294)->GetAt(static_cast<il2cpp_array_size_t>(L_296));
		NullCheck(L_297);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_298;
		L_298 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_297, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_299 = __this->___bulletSpawnPoint_8;
		NullCheck(L_299);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_300;
		L_300 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_299, NULL);
		NullCheck(L_300);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_301;
		L_301 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_300, NULL);
		float L_302 = L_301.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_303 = __this->___bulletSpawnPoint_8;
		NullCheck(L_303);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_304;
		L_304 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_303, NULL);
		NullCheck(L_304);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_305;
		L_305 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_304, NULL);
		float L_306 = L_305.___y_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_307 = __this->___bulletSpawnPoint_8;
		NullCheck(L_307);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_308;
		L_308 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_307, NULL);
		NullCheck(L_308);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_309;
		L_309 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_308, NULL);
		float L_310 = L_309.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_311;
		memset((&L_311), 0, sizeof(L_311));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_311), ((float)il2cpp_codegen_add(L_302, (5.0f))), L_306, L_310, /*hidden argument*/NULL);
		NullCheck(L_298);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_298, L_311, NULL);
		// SpawnBullet();
		TankEnemy_SpawnBullet_m5B55757CBEE7CC48511A7FC38844B44B5BAB0765(__this, NULL);
		// bulletSpawnPoint.transform.eulerAngles = new Vector3(-1, 0, 0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_312 = __this->___bulletSpawnPoint_8;
		NullCheck(L_312);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_313;
		L_313 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_312, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_314;
		memset((&L_314), 0, sizeof(L_314));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_314), (-1.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_313);
		Transform_set_eulerAngles_m9F0BC484A7915A51FAB87230644229B75BACA004(L_313, L_314, NULL);
		// bullets[bulletsIndex].transform.rotation = Quaternion.Euler(bulletSpawnPoint.transform.eulerAngles.x, bulletSpawnPoint.transform.eulerAngles.y, bulletSpawnPoint.transform.eulerAngles.z);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_315 = __this->___bullets_9;
		int32_t L_316 = __this->___bulletsIndex_10;
		NullCheck(L_315);
		int32_t L_317 = L_316;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_318 = (L_315)->GetAt(static_cast<il2cpp_array_size_t>(L_317));
		NullCheck(L_318);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_319;
		L_319 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_318, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_320 = __this->___bulletSpawnPoint_8;
		NullCheck(L_320);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_321;
		L_321 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_320, NULL);
		NullCheck(L_321);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_322;
		L_322 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_321, NULL);
		float L_323 = L_322.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_324 = __this->___bulletSpawnPoint_8;
		NullCheck(L_324);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_325;
		L_325 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_324, NULL);
		NullCheck(L_325);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_326;
		L_326 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_325, NULL);
		float L_327 = L_326.___y_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_328 = __this->___bulletSpawnPoint_8;
		NullCheck(L_328);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_329;
		L_329 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_328, NULL);
		NullCheck(L_329);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_330;
		L_330 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_329, NULL);
		float L_331 = L_330.___z_4;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_332;
		L_332 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline(L_323, L_327, L_331, NULL);
		NullCheck(L_319);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_319, L_332, NULL);
		// bullets[bulletsIndex].transform.position = new Vector3(bulletSpawnPoint.transform.position.x+7.5f, bulletSpawnPoint.transform.position.y, bulletSpawnPoint.transform.position.z);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_333 = __this->___bullets_9;
		int32_t L_334 = __this->___bulletsIndex_10;
		NullCheck(L_333);
		int32_t L_335 = L_334;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_336 = (L_333)->GetAt(static_cast<il2cpp_array_size_t>(L_335));
		NullCheck(L_336);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_337;
		L_337 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_336, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_338 = __this->___bulletSpawnPoint_8;
		NullCheck(L_338);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_339;
		L_339 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_338, NULL);
		NullCheck(L_339);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_340;
		L_340 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_339, NULL);
		float L_341 = L_340.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_342 = __this->___bulletSpawnPoint_8;
		NullCheck(L_342);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_343;
		L_343 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_342, NULL);
		NullCheck(L_343);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_344;
		L_344 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_343, NULL);
		float L_345 = L_344.___y_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_346 = __this->___bulletSpawnPoint_8;
		NullCheck(L_346);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_347;
		L_347 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_346, NULL);
		NullCheck(L_347);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_348;
		L_348 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_347, NULL);
		float L_349 = L_348.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_350;
		memset((&L_350), 0, sizeof(L_350));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_350), ((float)il2cpp_codegen_add(L_341, (7.5f))), L_345, L_349, /*hidden argument*/NULL);
		NullCheck(L_337);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_337, L_350, NULL);
		// SpawnBullet();
		TankEnemy_SpawnBullet_m5B55757CBEE7CC48511A7FC38844B44B5BAB0765(__this, NULL);
		// bulletSpawnPoint.transform.eulerAngles = new Vector3(-1, 0, 0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_351 = __this->___bulletSpawnPoint_8;
		NullCheck(L_351);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_352;
		L_352 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_351, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_353;
		memset((&L_353), 0, sizeof(L_353));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_353), (-1.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_352);
		Transform_set_eulerAngles_m9F0BC484A7915A51FAB87230644229B75BACA004(L_352, L_353, NULL);
		// bullets[bulletsIndex].transform.rotation = Quaternion.Euler(bulletSpawnPoint.transform.eulerAngles.x, bulletSpawnPoint.transform.eulerAngles.y, bulletSpawnPoint.transform.eulerAngles.z);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_354 = __this->___bullets_9;
		int32_t L_355 = __this->___bulletsIndex_10;
		NullCheck(L_354);
		int32_t L_356 = L_355;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_357 = (L_354)->GetAt(static_cast<il2cpp_array_size_t>(L_356));
		NullCheck(L_357);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_358;
		L_358 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_357, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_359 = __this->___bulletSpawnPoint_8;
		NullCheck(L_359);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_360;
		L_360 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_359, NULL);
		NullCheck(L_360);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_361;
		L_361 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_360, NULL);
		float L_362 = L_361.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_363 = __this->___bulletSpawnPoint_8;
		NullCheck(L_363);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_364;
		L_364 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_363, NULL);
		NullCheck(L_364);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_365;
		L_365 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_364, NULL);
		float L_366 = L_365.___y_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_367 = __this->___bulletSpawnPoint_8;
		NullCheck(L_367);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_368;
		L_368 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_367, NULL);
		NullCheck(L_368);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_369;
		L_369 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_368, NULL);
		float L_370 = L_369.___z_4;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_371;
		L_371 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline(L_362, L_366, L_370, NULL);
		NullCheck(L_358);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_358, L_371, NULL);
		// bullets[bulletsIndex].transform.position = new Vector3(bulletSpawnPoint.transform.position.x+10, bulletSpawnPoint.transform.position.y, bulletSpawnPoint.transform.position.z);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_372 = __this->___bullets_9;
		int32_t L_373 = __this->___bulletsIndex_10;
		NullCheck(L_372);
		int32_t L_374 = L_373;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_375 = (L_372)->GetAt(static_cast<il2cpp_array_size_t>(L_374));
		NullCheck(L_375);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_376;
		L_376 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_375, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_377 = __this->___bulletSpawnPoint_8;
		NullCheck(L_377);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_378;
		L_378 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_377, NULL);
		NullCheck(L_378);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_379;
		L_379 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_378, NULL);
		float L_380 = L_379.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_381 = __this->___bulletSpawnPoint_8;
		NullCheck(L_381);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_382;
		L_382 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_381, NULL);
		NullCheck(L_382);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_383;
		L_383 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_382, NULL);
		float L_384 = L_383.___y_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_385 = __this->___bulletSpawnPoint_8;
		NullCheck(L_385);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_386;
		L_386 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_385, NULL);
		NullCheck(L_386);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_387;
		L_387 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_386, NULL);
		float L_388 = L_387.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_389;
		memset((&L_389), 0, sizeof(L_389));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_389), ((float)il2cpp_codegen_add(L_380, (10.0f))), L_384, L_388, /*hidden argument*/NULL);
		NullCheck(L_376);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_376, L_389, NULL);
		// SpawnBullet();
		TankEnemy_SpawnBullet_m5B55757CBEE7CC48511A7FC38844B44B5BAB0765(__this, NULL);
		// bulletSpawnPoint.transform.eulerAngles = new Vector3(-1, 0, 0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_390 = __this->___bulletSpawnPoint_8;
		NullCheck(L_390);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_391;
		L_391 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_390, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_392;
		memset((&L_392), 0, sizeof(L_392));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_392), (-1.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_391);
		Transform_set_eulerAngles_m9F0BC484A7915A51FAB87230644229B75BACA004(L_391, L_392, NULL);
		// bullets[bulletsIndex].transform.rotation = Quaternion.Euler(bulletSpawnPoint.transform.eulerAngles.x, bulletSpawnPoint.transform.eulerAngles.y, bulletSpawnPoint.transform.eulerAngles.z);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_393 = __this->___bullets_9;
		int32_t L_394 = __this->___bulletsIndex_10;
		NullCheck(L_393);
		int32_t L_395 = L_394;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_396 = (L_393)->GetAt(static_cast<il2cpp_array_size_t>(L_395));
		NullCheck(L_396);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_397;
		L_397 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_396, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_398 = __this->___bulletSpawnPoint_8;
		NullCheck(L_398);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_399;
		L_399 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_398, NULL);
		NullCheck(L_399);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_400;
		L_400 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_399, NULL);
		float L_401 = L_400.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_402 = __this->___bulletSpawnPoint_8;
		NullCheck(L_402);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_403;
		L_403 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_402, NULL);
		NullCheck(L_403);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_404;
		L_404 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_403, NULL);
		float L_405 = L_404.___y_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_406 = __this->___bulletSpawnPoint_8;
		NullCheck(L_406);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_407;
		L_407 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_406, NULL);
		NullCheck(L_407);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_408;
		L_408 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_407, NULL);
		float L_409 = L_408.___z_4;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_410;
		L_410 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline(L_401, L_405, L_409, NULL);
		NullCheck(L_397);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_397, L_410, NULL);
		// bullets[bulletsIndex].transform.position = new Vector3(bulletSpawnPoint.transform.position.x+12.5f, bulletSpawnPoint.transform.position.y, bulletSpawnPoint.transform.position.z);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_411 = __this->___bullets_9;
		int32_t L_412 = __this->___bulletsIndex_10;
		NullCheck(L_411);
		int32_t L_413 = L_412;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_414 = (L_411)->GetAt(static_cast<il2cpp_array_size_t>(L_413));
		NullCheck(L_414);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_415;
		L_415 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_414, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_416 = __this->___bulletSpawnPoint_8;
		NullCheck(L_416);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_417;
		L_417 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_416, NULL);
		NullCheck(L_417);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_418;
		L_418 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_417, NULL);
		float L_419 = L_418.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_420 = __this->___bulletSpawnPoint_8;
		NullCheck(L_420);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_421;
		L_421 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_420, NULL);
		NullCheck(L_421);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_422;
		L_422 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_421, NULL);
		float L_423 = L_422.___y_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_424 = __this->___bulletSpawnPoint_8;
		NullCheck(L_424);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_425;
		L_425 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_424, NULL);
		NullCheck(L_425);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_426;
		L_426 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_425, NULL);
		float L_427 = L_426.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_428;
		memset((&L_428), 0, sizeof(L_428));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_428), ((float)il2cpp_codegen_add(L_419, (12.5f))), L_423, L_427, /*hidden argument*/NULL);
		NullCheck(L_415);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_415, L_428, NULL);
		// SpawnBullet();
		TankEnemy_SpawnBullet_m5B55757CBEE7CC48511A7FC38844B44B5BAB0765(__this, NULL);
		// }
		return;
	}
}
// System.Void TankEnemy::ShootingAttack4()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TankEnemy_ShootingAttack4_mC5D44BF16A2D54FC7DF58323F4A54717BB4F1F98 (TankEnemy_t2BA2128FB51203FB3CB6466ACB4E0B0EB4ECDF25* __this, const RuntimeMethod* method) 
{
	{
		// bulletSpawnPoint.transform.eulerAngles = new Vector3(-1, 0, 0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___bulletSpawnPoint_8;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_2), (-1.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_set_eulerAngles_m9F0BC484A7915A51FAB87230644229B75BACA004(L_1, L_2, NULL);
		// bullets[bulletsIndex].transform.rotation = Quaternion.Euler(bulletSpawnPoint.transform.eulerAngles.x, bulletSpawnPoint.transform.eulerAngles.y, bulletSpawnPoint.transform.eulerAngles.z);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_3 = __this->___bullets_9;
		int32_t L_4 = __this->___bulletsIndex_10;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_6, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8 = __this->___bulletSpawnPoint_8;
		NullCheck(L_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_8, NULL);
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_9, NULL);
		float L_11 = L_10.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12 = __this->___bulletSpawnPoint_8;
		NullCheck(L_12);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_12, NULL);
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_13, NULL);
		float L_15 = L_14.___y_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16 = __this->___bulletSpawnPoint_8;
		NullCheck(L_16);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_16, NULL);
		NullCheck(L_17);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_17, NULL);
		float L_19 = L_18.___z_4;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_20;
		L_20 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline(L_11, L_15, L_19, NULL);
		NullCheck(L_7);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_7, L_20, NULL);
		// bullets[bulletsIndex].transform.position = new Vector3(bulletSpawnPoint.transform.position.x-11.5f, bulletSpawnPoint.transform.position.y, bulletSpawnPoint.transform.position.z);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_21 = __this->___bullets_9;
		int32_t L_22 = __this->___bulletsIndex_10;
		NullCheck(L_21);
		int32_t L_23 = L_22;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		NullCheck(L_24);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_25;
		L_25 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_24, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_26 = __this->___bulletSpawnPoint_8;
		NullCheck(L_26);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27;
		L_27 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_26, NULL);
		NullCheck(L_27);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_27, NULL);
		float L_29 = L_28.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_30 = __this->___bulletSpawnPoint_8;
		NullCheck(L_30);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_31;
		L_31 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_30, NULL);
		NullCheck(L_31);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32;
		L_32 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_31, NULL);
		float L_33 = L_32.___y_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_34 = __this->___bulletSpawnPoint_8;
		NullCheck(L_34);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_35;
		L_35 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_34, NULL);
		NullCheck(L_35);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36;
		L_36 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_35, NULL);
		float L_37 = L_36.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38;
		memset((&L_38), 0, sizeof(L_38));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_38), ((float)il2cpp_codegen_subtract(L_29, (11.5f))), L_33, L_37, /*hidden argument*/NULL);
		NullCheck(L_25);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_25, L_38, NULL);
		// SpawnBullet();
		TankEnemy_SpawnBullet_m5B55757CBEE7CC48511A7FC38844B44B5BAB0765(__this, NULL);
		// bulletSpawnPoint.transform.eulerAngles = new Vector3(-1, 0, 0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_39 = __this->___bulletSpawnPoint_8;
		NullCheck(L_39);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_40;
		L_40 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_39, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41;
		memset((&L_41), 0, sizeof(L_41));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_41), (-1.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_40);
		Transform_set_eulerAngles_m9F0BC484A7915A51FAB87230644229B75BACA004(L_40, L_41, NULL);
		// bullets[bulletsIndex].transform.rotation = Quaternion.Euler(bulletSpawnPoint.transform.eulerAngles.x, bulletSpawnPoint.transform.eulerAngles.y, bulletSpawnPoint.transform.eulerAngles.z);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_42 = __this->___bullets_9;
		int32_t L_43 = __this->___bulletsIndex_10;
		NullCheck(L_42);
		int32_t L_44 = L_43;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_45 = (L_42)->GetAt(static_cast<il2cpp_array_size_t>(L_44));
		NullCheck(L_45);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_46;
		L_46 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_45, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_47 = __this->___bulletSpawnPoint_8;
		NullCheck(L_47);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_48;
		L_48 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_47, NULL);
		NullCheck(L_48);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_49;
		L_49 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_48, NULL);
		float L_50 = L_49.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_51 = __this->___bulletSpawnPoint_8;
		NullCheck(L_51);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_52;
		L_52 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_51, NULL);
		NullCheck(L_52);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_53;
		L_53 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_52, NULL);
		float L_54 = L_53.___y_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_55 = __this->___bulletSpawnPoint_8;
		NullCheck(L_55);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_56;
		L_56 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_55, NULL);
		NullCheck(L_56);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_57;
		L_57 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_56, NULL);
		float L_58 = L_57.___z_4;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_59;
		L_59 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline(L_50, L_54, L_58, NULL);
		NullCheck(L_46);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_46, L_59, NULL);
		// bullets[bulletsIndex].transform.position = new Vector3(bulletSpawnPoint.transform.position.x-8.75f, bulletSpawnPoint.transform.position.y, bulletSpawnPoint.transform.position.z);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_60 = __this->___bullets_9;
		int32_t L_61 = __this->___bulletsIndex_10;
		NullCheck(L_60);
		int32_t L_62 = L_61;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_63 = (L_60)->GetAt(static_cast<il2cpp_array_size_t>(L_62));
		NullCheck(L_63);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_64;
		L_64 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_63, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_65 = __this->___bulletSpawnPoint_8;
		NullCheck(L_65);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_66;
		L_66 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_65, NULL);
		NullCheck(L_66);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_67;
		L_67 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_66, NULL);
		float L_68 = L_67.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_69 = __this->___bulletSpawnPoint_8;
		NullCheck(L_69);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_70;
		L_70 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_69, NULL);
		NullCheck(L_70);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_71;
		L_71 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_70, NULL);
		float L_72 = L_71.___y_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_73 = __this->___bulletSpawnPoint_8;
		NullCheck(L_73);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_74;
		L_74 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_73, NULL);
		NullCheck(L_74);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_75;
		L_75 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_74, NULL);
		float L_76 = L_75.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_77;
		memset((&L_77), 0, sizeof(L_77));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_77), ((float)il2cpp_codegen_subtract(L_68, (8.75f))), L_72, L_76, /*hidden argument*/NULL);
		NullCheck(L_64);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_64, L_77, NULL);
		// SpawnBullet();
		TankEnemy_SpawnBullet_m5B55757CBEE7CC48511A7FC38844B44B5BAB0765(__this, NULL);
		// bulletSpawnPoint.transform.eulerAngles = new Vector3(-1, 0, 0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_78 = __this->___bulletSpawnPoint_8;
		NullCheck(L_78);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_79;
		L_79 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_78, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_80;
		memset((&L_80), 0, sizeof(L_80));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_80), (-1.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_79);
		Transform_set_eulerAngles_m9F0BC484A7915A51FAB87230644229B75BACA004(L_79, L_80, NULL);
		// bullets[bulletsIndex].transform.rotation = Quaternion.Euler(bulletSpawnPoint.transform.eulerAngles.x, bulletSpawnPoint.transform.eulerAngles.y, bulletSpawnPoint.transform.eulerAngles.z);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_81 = __this->___bullets_9;
		int32_t L_82 = __this->___bulletsIndex_10;
		NullCheck(L_81);
		int32_t L_83 = L_82;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_84 = (L_81)->GetAt(static_cast<il2cpp_array_size_t>(L_83));
		NullCheck(L_84);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_85;
		L_85 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_84, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_86 = __this->___bulletSpawnPoint_8;
		NullCheck(L_86);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_87;
		L_87 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_86, NULL);
		NullCheck(L_87);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_88;
		L_88 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_87, NULL);
		float L_89 = L_88.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_90 = __this->___bulletSpawnPoint_8;
		NullCheck(L_90);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_91;
		L_91 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_90, NULL);
		NullCheck(L_91);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_92;
		L_92 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_91, NULL);
		float L_93 = L_92.___y_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_94 = __this->___bulletSpawnPoint_8;
		NullCheck(L_94);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_95;
		L_95 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_94, NULL);
		NullCheck(L_95);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_96;
		L_96 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_95, NULL);
		float L_97 = L_96.___z_4;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_98;
		L_98 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline(L_89, L_93, L_97, NULL);
		NullCheck(L_85);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_85, L_98, NULL);
		// bullets[bulletsIndex].transform.position = new Vector3(bulletSpawnPoint.transform.position.x-6.25f, bulletSpawnPoint.transform.position.y, bulletSpawnPoint.transform.position.z);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_99 = __this->___bullets_9;
		int32_t L_100 = __this->___bulletsIndex_10;
		NullCheck(L_99);
		int32_t L_101 = L_100;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_102 = (L_99)->GetAt(static_cast<il2cpp_array_size_t>(L_101));
		NullCheck(L_102);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_103;
		L_103 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_102, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_104 = __this->___bulletSpawnPoint_8;
		NullCheck(L_104);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_105;
		L_105 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_104, NULL);
		NullCheck(L_105);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_106;
		L_106 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_105, NULL);
		float L_107 = L_106.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_108 = __this->___bulletSpawnPoint_8;
		NullCheck(L_108);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_109;
		L_109 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_108, NULL);
		NullCheck(L_109);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_110;
		L_110 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_109, NULL);
		float L_111 = L_110.___y_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_112 = __this->___bulletSpawnPoint_8;
		NullCheck(L_112);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_113;
		L_113 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_112, NULL);
		NullCheck(L_113);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_114;
		L_114 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_113, NULL);
		float L_115 = L_114.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_116;
		memset((&L_116), 0, sizeof(L_116));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_116), ((float)il2cpp_codegen_subtract(L_107, (6.25f))), L_111, L_115, /*hidden argument*/NULL);
		NullCheck(L_103);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_103, L_116, NULL);
		// SpawnBullet();
		TankEnemy_SpawnBullet_m5B55757CBEE7CC48511A7FC38844B44B5BAB0765(__this, NULL);
		// bulletSpawnPoint.transform.eulerAngles = new Vector3(-1, 0, 0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_117 = __this->___bulletSpawnPoint_8;
		NullCheck(L_117);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_118;
		L_118 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_117, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_119;
		memset((&L_119), 0, sizeof(L_119));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_119), (-1.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_118);
		Transform_set_eulerAngles_m9F0BC484A7915A51FAB87230644229B75BACA004(L_118, L_119, NULL);
		// bullets[bulletsIndex].transform.rotation = Quaternion.Euler(bulletSpawnPoint.transform.eulerAngles.x, bulletSpawnPoint.transform.eulerAngles.y, bulletSpawnPoint.transform.eulerAngles.z);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_120 = __this->___bullets_9;
		int32_t L_121 = __this->___bulletsIndex_10;
		NullCheck(L_120);
		int32_t L_122 = L_121;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_123 = (L_120)->GetAt(static_cast<il2cpp_array_size_t>(L_122));
		NullCheck(L_123);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_124;
		L_124 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_123, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_125 = __this->___bulletSpawnPoint_8;
		NullCheck(L_125);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_126;
		L_126 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_125, NULL);
		NullCheck(L_126);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_127;
		L_127 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_126, NULL);
		float L_128 = L_127.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_129 = __this->___bulletSpawnPoint_8;
		NullCheck(L_129);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_130;
		L_130 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_129, NULL);
		NullCheck(L_130);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_131;
		L_131 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_130, NULL);
		float L_132 = L_131.___y_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_133 = __this->___bulletSpawnPoint_8;
		NullCheck(L_133);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_134;
		L_134 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_133, NULL);
		NullCheck(L_134);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_135;
		L_135 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_134, NULL);
		float L_136 = L_135.___z_4;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_137;
		L_137 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline(L_128, L_132, L_136, NULL);
		NullCheck(L_124);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_124, L_137, NULL);
		// bullets[bulletsIndex].transform.position = new Vector3(bulletSpawnPoint.transform.position.x-3.75f, bulletSpawnPoint.transform.position.y, bulletSpawnPoint.transform.position.z);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_138 = __this->___bullets_9;
		int32_t L_139 = __this->___bulletsIndex_10;
		NullCheck(L_138);
		int32_t L_140 = L_139;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_141 = (L_138)->GetAt(static_cast<il2cpp_array_size_t>(L_140));
		NullCheck(L_141);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_142;
		L_142 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_141, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_143 = __this->___bulletSpawnPoint_8;
		NullCheck(L_143);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_144;
		L_144 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_143, NULL);
		NullCheck(L_144);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_145;
		L_145 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_144, NULL);
		float L_146 = L_145.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_147 = __this->___bulletSpawnPoint_8;
		NullCheck(L_147);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_148;
		L_148 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_147, NULL);
		NullCheck(L_148);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_149;
		L_149 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_148, NULL);
		float L_150 = L_149.___y_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_151 = __this->___bulletSpawnPoint_8;
		NullCheck(L_151);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_152;
		L_152 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_151, NULL);
		NullCheck(L_152);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_153;
		L_153 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_152, NULL);
		float L_154 = L_153.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_155;
		memset((&L_155), 0, sizeof(L_155));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_155), ((float)il2cpp_codegen_subtract(L_146, (3.75f))), L_150, L_154, /*hidden argument*/NULL);
		NullCheck(L_142);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_142, L_155, NULL);
		// SpawnBullet();
		TankEnemy_SpawnBullet_m5B55757CBEE7CC48511A7FC38844B44B5BAB0765(__this, NULL);
		// bulletSpawnPoint.transform.eulerAngles = new Vector3(-1, 0, 0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_156 = __this->___bulletSpawnPoint_8;
		NullCheck(L_156);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_157;
		L_157 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_156, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_158;
		memset((&L_158), 0, sizeof(L_158));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_158), (-1.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_157);
		Transform_set_eulerAngles_m9F0BC484A7915A51FAB87230644229B75BACA004(L_157, L_158, NULL);
		// bullets[bulletsIndex].transform.rotation = Quaternion.Euler(bulletSpawnPoint.transform.eulerAngles.x, bulletSpawnPoint.transform.eulerAngles.y, bulletSpawnPoint.transform.eulerAngles.z);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_159 = __this->___bullets_9;
		int32_t L_160 = __this->___bulletsIndex_10;
		NullCheck(L_159);
		int32_t L_161 = L_160;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_162 = (L_159)->GetAt(static_cast<il2cpp_array_size_t>(L_161));
		NullCheck(L_162);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_163;
		L_163 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_162, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_164 = __this->___bulletSpawnPoint_8;
		NullCheck(L_164);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_165;
		L_165 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_164, NULL);
		NullCheck(L_165);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_166;
		L_166 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_165, NULL);
		float L_167 = L_166.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_168 = __this->___bulletSpawnPoint_8;
		NullCheck(L_168);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_169;
		L_169 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_168, NULL);
		NullCheck(L_169);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_170;
		L_170 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_169, NULL);
		float L_171 = L_170.___y_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_172 = __this->___bulletSpawnPoint_8;
		NullCheck(L_172);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_173;
		L_173 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_172, NULL);
		NullCheck(L_173);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_174;
		L_174 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_173, NULL);
		float L_175 = L_174.___z_4;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_176;
		L_176 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline(L_167, L_171, L_175, NULL);
		NullCheck(L_163);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_163, L_176, NULL);
		// bullets[bulletsIndex].transform.position = new Vector3(bulletSpawnPoint.transform.position.x-1.25f, bulletSpawnPoint.transform.position.y, bulletSpawnPoint.transform.position.z);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_177 = __this->___bullets_9;
		int32_t L_178 = __this->___bulletsIndex_10;
		NullCheck(L_177);
		int32_t L_179 = L_178;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_180 = (L_177)->GetAt(static_cast<il2cpp_array_size_t>(L_179));
		NullCheck(L_180);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_181;
		L_181 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_180, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_182 = __this->___bulletSpawnPoint_8;
		NullCheck(L_182);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_183;
		L_183 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_182, NULL);
		NullCheck(L_183);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_184;
		L_184 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_183, NULL);
		float L_185 = L_184.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_186 = __this->___bulletSpawnPoint_8;
		NullCheck(L_186);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_187;
		L_187 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_186, NULL);
		NullCheck(L_187);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_188;
		L_188 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_187, NULL);
		float L_189 = L_188.___y_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_190 = __this->___bulletSpawnPoint_8;
		NullCheck(L_190);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_191;
		L_191 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_190, NULL);
		NullCheck(L_191);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_192;
		L_192 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_191, NULL);
		float L_193 = L_192.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_194;
		memset((&L_194), 0, sizeof(L_194));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_194), ((float)il2cpp_codegen_subtract(L_185, (1.25f))), L_189, L_193, /*hidden argument*/NULL);
		NullCheck(L_181);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_181, L_194, NULL);
		// SpawnBullet();
		TankEnemy_SpawnBullet_m5B55757CBEE7CC48511A7FC38844B44B5BAB0765(__this, NULL);
		// bulletSpawnPoint.transform.eulerAngles = new Vector3(-1, 0, 0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_195 = __this->___bulletSpawnPoint_8;
		NullCheck(L_195);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_196;
		L_196 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_195, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_197;
		memset((&L_197), 0, sizeof(L_197));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_197), (-1.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_196);
		Transform_set_eulerAngles_m9F0BC484A7915A51FAB87230644229B75BACA004(L_196, L_197, NULL);
		// bullets[bulletsIndex].transform.rotation = Quaternion.Euler(bulletSpawnPoint.transform.eulerAngles.x, bulletSpawnPoint.transform.eulerAngles.y, bulletSpawnPoint.transform.eulerAngles.z);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_198 = __this->___bullets_9;
		int32_t L_199 = __this->___bulletsIndex_10;
		NullCheck(L_198);
		int32_t L_200 = L_199;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_201 = (L_198)->GetAt(static_cast<il2cpp_array_size_t>(L_200));
		NullCheck(L_201);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_202;
		L_202 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_201, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_203 = __this->___bulletSpawnPoint_8;
		NullCheck(L_203);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_204;
		L_204 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_203, NULL);
		NullCheck(L_204);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_205;
		L_205 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_204, NULL);
		float L_206 = L_205.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_207 = __this->___bulletSpawnPoint_8;
		NullCheck(L_207);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_208;
		L_208 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_207, NULL);
		NullCheck(L_208);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_209;
		L_209 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_208, NULL);
		float L_210 = L_209.___y_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_211 = __this->___bulletSpawnPoint_8;
		NullCheck(L_211);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_212;
		L_212 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_211, NULL);
		NullCheck(L_212);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_213;
		L_213 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_212, NULL);
		float L_214 = L_213.___z_4;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_215;
		L_215 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline(L_206, L_210, L_214, NULL);
		NullCheck(L_202);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_202, L_215, NULL);
		// bullets[bulletsIndex].transform.position = new Vector3(bulletSpawnPoint.transform.position.x+1.25f, bulletSpawnPoint.transform.position.y, bulletSpawnPoint.transform.position.z);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_216 = __this->___bullets_9;
		int32_t L_217 = __this->___bulletsIndex_10;
		NullCheck(L_216);
		int32_t L_218 = L_217;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_219 = (L_216)->GetAt(static_cast<il2cpp_array_size_t>(L_218));
		NullCheck(L_219);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_220;
		L_220 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_219, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_221 = __this->___bulletSpawnPoint_8;
		NullCheck(L_221);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_222;
		L_222 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_221, NULL);
		NullCheck(L_222);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_223;
		L_223 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_222, NULL);
		float L_224 = L_223.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_225 = __this->___bulletSpawnPoint_8;
		NullCheck(L_225);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_226;
		L_226 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_225, NULL);
		NullCheck(L_226);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_227;
		L_227 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_226, NULL);
		float L_228 = L_227.___y_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_229 = __this->___bulletSpawnPoint_8;
		NullCheck(L_229);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_230;
		L_230 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_229, NULL);
		NullCheck(L_230);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_231;
		L_231 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_230, NULL);
		float L_232 = L_231.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_233;
		memset((&L_233), 0, sizeof(L_233));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_233), ((float)il2cpp_codegen_add(L_224, (1.25f))), L_228, L_232, /*hidden argument*/NULL);
		NullCheck(L_220);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_220, L_233, NULL);
		// SpawnBullet();
		TankEnemy_SpawnBullet_m5B55757CBEE7CC48511A7FC38844B44B5BAB0765(__this, NULL);
		// bulletSpawnPoint.transform.eulerAngles = new Vector3(-1, 0, 0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_234 = __this->___bulletSpawnPoint_8;
		NullCheck(L_234);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_235;
		L_235 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_234, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_236;
		memset((&L_236), 0, sizeof(L_236));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_236), (-1.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_235);
		Transform_set_eulerAngles_m9F0BC484A7915A51FAB87230644229B75BACA004(L_235, L_236, NULL);
		// bullets[bulletsIndex].transform.rotation = Quaternion.Euler(bulletSpawnPoint.transform.eulerAngles.x, bulletSpawnPoint.transform.eulerAngles.y, bulletSpawnPoint.transform.eulerAngles.z);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_237 = __this->___bullets_9;
		int32_t L_238 = __this->___bulletsIndex_10;
		NullCheck(L_237);
		int32_t L_239 = L_238;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_240 = (L_237)->GetAt(static_cast<il2cpp_array_size_t>(L_239));
		NullCheck(L_240);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_241;
		L_241 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_240, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_242 = __this->___bulletSpawnPoint_8;
		NullCheck(L_242);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_243;
		L_243 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_242, NULL);
		NullCheck(L_243);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_244;
		L_244 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_243, NULL);
		float L_245 = L_244.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_246 = __this->___bulletSpawnPoint_8;
		NullCheck(L_246);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_247;
		L_247 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_246, NULL);
		NullCheck(L_247);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_248;
		L_248 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_247, NULL);
		float L_249 = L_248.___y_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_250 = __this->___bulletSpawnPoint_8;
		NullCheck(L_250);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_251;
		L_251 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_250, NULL);
		NullCheck(L_251);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_252;
		L_252 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_251, NULL);
		float L_253 = L_252.___z_4;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_254;
		L_254 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline(L_245, L_249, L_253, NULL);
		NullCheck(L_241);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_241, L_254, NULL);
		// bullets[bulletsIndex].transform.position = new Vector3(bulletSpawnPoint.transform.position.x+3.75f, bulletSpawnPoint.transform.position.y, bulletSpawnPoint.transform.position.z);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_255 = __this->___bullets_9;
		int32_t L_256 = __this->___bulletsIndex_10;
		NullCheck(L_255);
		int32_t L_257 = L_256;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_258 = (L_255)->GetAt(static_cast<il2cpp_array_size_t>(L_257));
		NullCheck(L_258);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_259;
		L_259 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_258, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_260 = __this->___bulletSpawnPoint_8;
		NullCheck(L_260);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_261;
		L_261 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_260, NULL);
		NullCheck(L_261);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_262;
		L_262 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_261, NULL);
		float L_263 = L_262.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_264 = __this->___bulletSpawnPoint_8;
		NullCheck(L_264);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_265;
		L_265 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_264, NULL);
		NullCheck(L_265);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_266;
		L_266 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_265, NULL);
		float L_267 = L_266.___y_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_268 = __this->___bulletSpawnPoint_8;
		NullCheck(L_268);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_269;
		L_269 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_268, NULL);
		NullCheck(L_269);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_270;
		L_270 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_269, NULL);
		float L_271 = L_270.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_272;
		memset((&L_272), 0, sizeof(L_272));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_272), ((float)il2cpp_codegen_add(L_263, (3.75f))), L_267, L_271, /*hidden argument*/NULL);
		NullCheck(L_259);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_259, L_272, NULL);
		// SpawnBullet();
		TankEnemy_SpawnBullet_m5B55757CBEE7CC48511A7FC38844B44B5BAB0765(__this, NULL);
		// bulletSpawnPoint.transform.eulerAngles = new Vector3(-1, 0, 0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_273 = __this->___bulletSpawnPoint_8;
		NullCheck(L_273);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_274;
		L_274 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_273, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_275;
		memset((&L_275), 0, sizeof(L_275));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_275), (-1.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_274);
		Transform_set_eulerAngles_m9F0BC484A7915A51FAB87230644229B75BACA004(L_274, L_275, NULL);
		// bullets[bulletsIndex].transform.rotation = Quaternion.Euler(bulletSpawnPoint.transform.eulerAngles.x, bulletSpawnPoint.transform.eulerAngles.y, bulletSpawnPoint.transform.eulerAngles.z);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_276 = __this->___bullets_9;
		int32_t L_277 = __this->___bulletsIndex_10;
		NullCheck(L_276);
		int32_t L_278 = L_277;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_279 = (L_276)->GetAt(static_cast<il2cpp_array_size_t>(L_278));
		NullCheck(L_279);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_280;
		L_280 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_279, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_281 = __this->___bulletSpawnPoint_8;
		NullCheck(L_281);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_282;
		L_282 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_281, NULL);
		NullCheck(L_282);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_283;
		L_283 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_282, NULL);
		float L_284 = L_283.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_285 = __this->___bulletSpawnPoint_8;
		NullCheck(L_285);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_286;
		L_286 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_285, NULL);
		NullCheck(L_286);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_287;
		L_287 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_286, NULL);
		float L_288 = L_287.___y_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_289 = __this->___bulletSpawnPoint_8;
		NullCheck(L_289);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_290;
		L_290 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_289, NULL);
		NullCheck(L_290);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_291;
		L_291 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_290, NULL);
		float L_292 = L_291.___z_4;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_293;
		L_293 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline(L_284, L_288, L_292, NULL);
		NullCheck(L_280);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_280, L_293, NULL);
		// bullets[bulletsIndex].transform.position = new Vector3(bulletSpawnPoint.transform.position.x+6.25f, bulletSpawnPoint.transform.position.y, bulletSpawnPoint.transform.position.z);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_294 = __this->___bullets_9;
		int32_t L_295 = __this->___bulletsIndex_10;
		NullCheck(L_294);
		int32_t L_296 = L_295;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_297 = (L_294)->GetAt(static_cast<il2cpp_array_size_t>(L_296));
		NullCheck(L_297);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_298;
		L_298 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_297, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_299 = __this->___bulletSpawnPoint_8;
		NullCheck(L_299);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_300;
		L_300 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_299, NULL);
		NullCheck(L_300);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_301;
		L_301 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_300, NULL);
		float L_302 = L_301.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_303 = __this->___bulletSpawnPoint_8;
		NullCheck(L_303);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_304;
		L_304 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_303, NULL);
		NullCheck(L_304);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_305;
		L_305 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_304, NULL);
		float L_306 = L_305.___y_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_307 = __this->___bulletSpawnPoint_8;
		NullCheck(L_307);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_308;
		L_308 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_307, NULL);
		NullCheck(L_308);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_309;
		L_309 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_308, NULL);
		float L_310 = L_309.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_311;
		memset((&L_311), 0, sizeof(L_311));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_311), ((float)il2cpp_codegen_add(L_302, (6.25f))), L_306, L_310, /*hidden argument*/NULL);
		NullCheck(L_298);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_298, L_311, NULL);
		// SpawnBullet();
		TankEnemy_SpawnBullet_m5B55757CBEE7CC48511A7FC38844B44B5BAB0765(__this, NULL);
		// bulletSpawnPoint.transform.eulerAngles = new Vector3(-1, 0, 0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_312 = __this->___bulletSpawnPoint_8;
		NullCheck(L_312);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_313;
		L_313 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_312, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_314;
		memset((&L_314), 0, sizeof(L_314));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_314), (-1.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_313);
		Transform_set_eulerAngles_m9F0BC484A7915A51FAB87230644229B75BACA004(L_313, L_314, NULL);
		// bullets[bulletsIndex].transform.rotation = Quaternion.Euler(bulletSpawnPoint.transform.eulerAngles.x, bulletSpawnPoint.transform.eulerAngles.y, bulletSpawnPoint.transform.eulerAngles.z);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_315 = __this->___bullets_9;
		int32_t L_316 = __this->___bulletsIndex_10;
		NullCheck(L_315);
		int32_t L_317 = L_316;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_318 = (L_315)->GetAt(static_cast<il2cpp_array_size_t>(L_317));
		NullCheck(L_318);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_319;
		L_319 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_318, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_320 = __this->___bulletSpawnPoint_8;
		NullCheck(L_320);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_321;
		L_321 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_320, NULL);
		NullCheck(L_321);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_322;
		L_322 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_321, NULL);
		float L_323 = L_322.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_324 = __this->___bulletSpawnPoint_8;
		NullCheck(L_324);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_325;
		L_325 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_324, NULL);
		NullCheck(L_325);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_326;
		L_326 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_325, NULL);
		float L_327 = L_326.___y_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_328 = __this->___bulletSpawnPoint_8;
		NullCheck(L_328);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_329;
		L_329 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_328, NULL);
		NullCheck(L_329);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_330;
		L_330 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_329, NULL);
		float L_331 = L_330.___z_4;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_332;
		L_332 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline(L_323, L_327, L_331, NULL);
		NullCheck(L_319);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_319, L_332, NULL);
		// bullets[bulletsIndex].transform.position = new Vector3(bulletSpawnPoint.transform.position.x+8.75f, bulletSpawnPoint.transform.position.y, bulletSpawnPoint.transform.position.z);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_333 = __this->___bullets_9;
		int32_t L_334 = __this->___bulletsIndex_10;
		NullCheck(L_333);
		int32_t L_335 = L_334;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_336 = (L_333)->GetAt(static_cast<il2cpp_array_size_t>(L_335));
		NullCheck(L_336);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_337;
		L_337 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_336, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_338 = __this->___bulletSpawnPoint_8;
		NullCheck(L_338);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_339;
		L_339 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_338, NULL);
		NullCheck(L_339);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_340;
		L_340 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_339, NULL);
		float L_341 = L_340.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_342 = __this->___bulletSpawnPoint_8;
		NullCheck(L_342);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_343;
		L_343 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_342, NULL);
		NullCheck(L_343);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_344;
		L_344 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_343, NULL);
		float L_345 = L_344.___y_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_346 = __this->___bulletSpawnPoint_8;
		NullCheck(L_346);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_347;
		L_347 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_346, NULL);
		NullCheck(L_347);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_348;
		L_348 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_347, NULL);
		float L_349 = L_348.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_350;
		memset((&L_350), 0, sizeof(L_350));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_350), ((float)il2cpp_codegen_add(L_341, (8.75f))), L_345, L_349, /*hidden argument*/NULL);
		NullCheck(L_337);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_337, L_350, NULL);
		// SpawnBullet();
		TankEnemy_SpawnBullet_m5B55757CBEE7CC48511A7FC38844B44B5BAB0765(__this, NULL);
		// bulletSpawnPoint.transform.eulerAngles = new Vector3(-1, 0, 0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_351 = __this->___bulletSpawnPoint_8;
		NullCheck(L_351);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_352;
		L_352 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_351, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_353;
		memset((&L_353), 0, sizeof(L_353));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_353), (-1.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_352);
		Transform_set_eulerAngles_m9F0BC484A7915A51FAB87230644229B75BACA004(L_352, L_353, NULL);
		// bullets[bulletsIndex].transform.rotation = Quaternion.Euler(bulletSpawnPoint.transform.eulerAngles.x, bulletSpawnPoint.transform.eulerAngles.y, bulletSpawnPoint.transform.eulerAngles.z);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_354 = __this->___bullets_9;
		int32_t L_355 = __this->___bulletsIndex_10;
		NullCheck(L_354);
		int32_t L_356 = L_355;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_357 = (L_354)->GetAt(static_cast<il2cpp_array_size_t>(L_356));
		NullCheck(L_357);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_358;
		L_358 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_357, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_359 = __this->___bulletSpawnPoint_8;
		NullCheck(L_359);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_360;
		L_360 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_359, NULL);
		NullCheck(L_360);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_361;
		L_361 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_360, NULL);
		float L_362 = L_361.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_363 = __this->___bulletSpawnPoint_8;
		NullCheck(L_363);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_364;
		L_364 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_363, NULL);
		NullCheck(L_364);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_365;
		L_365 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_364, NULL);
		float L_366 = L_365.___y_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_367 = __this->___bulletSpawnPoint_8;
		NullCheck(L_367);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_368;
		L_368 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_367, NULL);
		NullCheck(L_368);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_369;
		L_369 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_368, NULL);
		float L_370 = L_369.___z_4;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_371;
		L_371 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline(L_362, L_366, L_370, NULL);
		NullCheck(L_358);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_358, L_371, NULL);
		// bullets[bulletsIndex].transform.position = new Vector3(bulletSpawnPoint.transform.position.x+11.5f, bulletSpawnPoint.transform.position.y, bulletSpawnPoint.transform.position.z);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_372 = __this->___bullets_9;
		int32_t L_373 = __this->___bulletsIndex_10;
		NullCheck(L_372);
		int32_t L_374 = L_373;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_375 = (L_372)->GetAt(static_cast<il2cpp_array_size_t>(L_374));
		NullCheck(L_375);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_376;
		L_376 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_375, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_377 = __this->___bulletSpawnPoint_8;
		NullCheck(L_377);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_378;
		L_378 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_377, NULL);
		NullCheck(L_378);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_379;
		L_379 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_378, NULL);
		float L_380 = L_379.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_381 = __this->___bulletSpawnPoint_8;
		NullCheck(L_381);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_382;
		L_382 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_381, NULL);
		NullCheck(L_382);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_383;
		L_383 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_382, NULL);
		float L_384 = L_383.___y_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_385 = __this->___bulletSpawnPoint_8;
		NullCheck(L_385);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_386;
		L_386 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_385, NULL);
		NullCheck(L_386);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_387;
		L_387 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_386, NULL);
		float L_388 = L_387.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_389;
		memset((&L_389), 0, sizeof(L_389));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_389), ((float)il2cpp_codegen_add(L_380, (11.5f))), L_384, L_388, /*hidden argument*/NULL);
		NullCheck(L_376);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_376, L_389, NULL);
		// SpawnBullet();
		TankEnemy_SpawnBullet_m5B55757CBEE7CC48511A7FC38844B44B5BAB0765(__this, NULL);
		// }
		return;
	}
}
// System.Void TankEnemy::SpawnBullet()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TankEnemy_SpawnBullet_m5B55757CBEE7CC48511A7FC38844B44B5BAB0765 (TankEnemy_t2BA2128FB51203FB3CB6466ACB4E0B0EB4ECDF25* __this, const RuntimeMethod* method) 
{
	{
		// bullets[bulletsIndex].SetActive(true);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0 = __this->___bullets_9;
		int32_t L_1 = __this->___bulletsIndex_10;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)1, NULL);
		// bulletsIndex++;
		int32_t L_4 = __this->___bulletsIndex_10;
		__this->___bulletsIndex_10 = ((int32_t)il2cpp_codegen_add(L_4, 1));
		// if (bulletsIndex >= bullets.Length)
		int32_t L_5 = __this->___bulletsIndex_10;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_6 = __this->___bullets_9;
		NullCheck(L_6);
		if ((((int32_t)L_5) < ((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length)))))
		{
			goto IL_0038;
		}
	}
	{
		// bulletsIndex = 0;
		__this->___bulletsIndex_10 = 0;
	}

IL_0038:
	{
		// }
		return;
	}
}
// System.Void TankEnemy::Hit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TankEnemy_Hit_m2EF05D129D8456FA3915451F686F1B0B18978047 (TankEnemy_t2BA2128FB51203FB3CB6466ACB4E0B0EB4ECDF25* __this, const RuntimeMethod* method) 
{
	{
		// health--;
		int32_t L_0 = __this->___health_24;
		__this->___health_24 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		// healthbarSlider.value = health;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_1 = __this->___healthbarSlider_29;
		int32_t L_2 = __this->___health_24;
		NullCheck(L_1);
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_1, ((float)L_2));
		// if (health < 200 && health > 100)
		int32_t L_3 = __this->___health_24;
		if ((((int32_t)L_3) >= ((int32_t)((int32_t)200))))
		{
			goto IL_0042;
		}
	}
	{
		int32_t L_4 = __this->___health_24;
		if ((((int32_t)L_4) <= ((int32_t)((int32_t)100))))
		{
			goto IL_0042;
		}
	}
	{
		// smoke.Play();
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_5 = __this->___smoke_25;
		NullCheck(L_5);
		ParticleSystem_Play_mD943E601BFE16CB9BB5D1F5E6AED5C36F5F11EF5(L_5, NULL);
	}

IL_0042:
	{
		// if (health <= 100 && health > 0)
		int32_t L_6 = __this->___health_24;
		if ((((int32_t)L_6) > ((int32_t)((int32_t)100))))
		{
			goto IL_006b;
		}
	}
	{
		int32_t L_7 = __this->___health_24;
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_006b;
		}
	}
	{
		// smoke.Stop();
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_8 = __this->___smoke_25;
		NullCheck(L_8);
		ParticleSystem_Stop_m2D8D4967496EF0F5BFEF679C49A9E65A9646C423(L_8, NULL);
		// fire.Play();
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_9 = __this->___fire_26;
		NullCheck(L_9);
		ParticleSystem_Play_mD943E601BFE16CB9BB5D1F5E6AED5C36F5F11EF5(L_9, NULL);
	}

IL_006b:
	{
		// if(health <= 0)
		int32_t L_10 = __this->___health_24;
		if ((((int32_t)L_10) > ((int32_t)0)))
		{
			goto IL_00b2;
		}
	}
	{
		// fire.Stop();
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_11 = __this->___fire_26;
		NullCheck(L_11);
		ParticleSystem_Stop_m2D8D4967496EF0F5BFEF679C49A9E65A9646C423(L_11, NULL);
		// explosion.transform.position = transform.position;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = __this->___explosion_27;
		NullCheck(L_12);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_12, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_14);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_14, NULL);
		NullCheck(L_13);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_13, L_15, NULL);
		// explosion.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16 = __this->___explosion_27;
		NullCheck(L_16);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_16, (bool)1, NULL);
		// gameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17;
		L_17 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_17);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_17, (bool)0, NULL);
	}

IL_00b2:
	{
		// }
		return;
	}
}
// System.Void TankEnemy::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TankEnemy_OnTriggerEnter_m8F77CEFC8AF45DB16337850F303FECA2EAE18F71 (TankEnemy_t2BA2128FB51203FB3CB6466ACB4E0B0EB4ECDF25* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral55E7FF1059C586902360E3CBE8E0AE2CCE9A60D7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.CompareTag("Player Laser"))
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___other0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Component_CompareTag_mE6F8897E84F12DF12D302FFC4D58204D51096FC5(L_0, _stringLiteral55E7FF1059C586902360E3CBE8E0AE2CCE9A60D7, NULL);
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		// Hit();
		TankEnemy_Hit_m2EF05D129D8456FA3915451F686F1B0B18978047(__this, NULL);
		// other.gameObject.SetActive(false);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_2 = ___other0;
		NullCheck(L_2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_2, NULL);
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)0, NULL);
	}

IL_001f:
	{
		// }
		return;
	}
}
// System.Void TankEnemy::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TankEnemy__ctor_m1CE5D99E4B74142B838ACA647E9F023FD310ACE8 (TankEnemy_t2BA2128FB51203FB3CB6466ACB4E0B0EB4ECDF25* __this, const RuntimeMethod* method) 
{
	{
		// private int lastRandomNumber = 2;
		__this->___lastRandomNumber_19 = 2;
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
// System.Void TankRocket::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TankRocket_Update_mD8B73BA5B84D78A558F1D307D873167EA2687600 (TankRocket_t57A087C214C0E6EF25EFA51BFA52F7A50F34780D* __this, const RuntimeMethod* method) 
{
	{
		// transform.position = Vector3.MoveTowards(transform.position, spawnPosition.position, rocketSpeed * Time.deltaTime);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = __this->___spawnPosition_4;
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		float L_5 = __this->___rocketSpeed_5;
		float L_6;
		L_6 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_MoveTowards_m0363264647799F3173AC37F8E819F98298249B08_inline(L_2, L_4, ((float)il2cpp_codegen_multiply(L_5, L_6)), NULL);
		NullCheck(L_0);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_0, L_7, NULL);
		// if (Vector3.Distance(transform.position, spawnPosition.position) < 0.1f)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_8, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10 = __this->___spawnPosition_4;
		NullCheck(L_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_10, NULL);
		float L_12;
		L_12 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_9, L_11, NULL);
		if ((!(((float)L_12) < ((float)(0.100000001f)))))
		{
			goto IL_0060;
		}
	}
	{
		// gameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13;
		L_13 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_13);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_13, (bool)0, NULL);
	}

IL_0060:
	{
		// }
		return;
	}
}
// System.Void TankRocket::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TankRocket__ctor_m126C6CF9ACDB9210A8F2695A6C7CDC84094BFE64 (TankRocket_t57A087C214C0E6EF25EFA51BFA52F7A50F34780D* __this, const RuntimeMethod* method) 
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
// System.Void trailer::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void trailer_OnEnable_m3CFFDBD564AB1CDDF69617F3569F95D57D5EF174 (trailer_tBCF57821A83158F03BE7057729DD3880F544BD69* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4A89023BFBBA6BBE51099E18BBFD2D772EFC062D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// transform.position = new Vector3(7.86f, -0.1f, 370);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_1), (7.86000013f), (-0.100000001f), (370.0f), /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_0, L_1, NULL);
		// transform.eulerAngles = new Vector3(0, 270, 0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_3), (0.0f), (270.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_2);
		Transform_set_eulerAngles_m9F0BC484A7915A51FAB87230644229B75BACA004(L_2, L_3, NULL);
		// speed = 80;
		__this->___speed_4 = (80.0f);
		// Invoke("PlayDialog", 1.5f);
		MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB(__this, _stringLiteral4A89023BFBBA6BBE51099E18BBFD2D772EFC062D, (1.5f), NULL);
		// }
		return;
	}
}
// System.Void trailer::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void trailer_Update_mB066272035C7899E1BA65E8598F5E5EA8CD918B4 (trailer_tBCF57821A83158F03BE7057729DD3880F544BD69* __this, const RuntimeMethod* method) 
{
	{
		// transform.Translate(Vector3.left * speed * Time.deltaTime);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_left_m8C1116485A9E689760AEE1142F5977852278B7E1_inline(NULL);
		float L_2 = __this->___speed_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_1, L_2, NULL);
		float L_4;
		L_4 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_3, L_4, NULL);
		NullCheck(L_0);
		Transform_Translate_m018D015E89C8CB743C54A21B4A1C5202EBF6297A(L_0, L_5, NULL);
		// if (transform.position.z <= 124)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_6, NULL);
		float L_8 = L_7.___z_4;
		if ((!(((float)L_8) <= ((float)(124.0f)))))
		{
			goto IL_005a;
		}
	}
	{
		// speed = 0;
		__this->___speed_4 = (0.0f);
		// this.enabled = false;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(__this, (bool)0, NULL);
		// shootRicketScript.enabled = true;
		ShootRicket_tEB742549214BCF01523A0ECC274C3EAC141234FE* L_9 = __this->___shootRicketScript_5;
		NullCheck(L_9);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_9, (bool)1, NULL);
	}

IL_005a:
	{
		// }
		return;
	}
}
// System.Void trailer::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void trailer_OnTriggerEnter_m0D8AD8FF9CF19D52E91E39B49F277057AAE30DA8 (trailer_tBCF57821A83158F03BE7057729DD3880F544BD69* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisPlayerHealth_tE7421738BA48E6A6C90760303B818641DDFAE263_mF6FA39268341969F2360DEF6F96AE7E0333F13DB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral23AD9577FFFAD525C0FE9C92CC6DC8E665B589A5);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.tag == "Motorcycle")
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___other0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Component_get_tag_m7561A81116CAB82B8A459E934662BFC2039FB7EF(L_0, NULL);
		bool L_2;
		L_2 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_1, _stringLiteral23AD9577FFFAD525C0FE9C92CC6DC8E665B589A5, NULL);
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		// other.GetComponent<PlayerHealth>().Hit();
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_3 = ___other0;
		NullCheck(L_3);
		PlayerHealth_tE7421738BA48E6A6C90760303B818641DDFAE263* L_4;
		L_4 = Component_GetComponent_TisPlayerHealth_tE7421738BA48E6A6C90760303B818641DDFAE263_mF6FA39268341969F2360DEF6F96AE7E0333F13DB(L_3, Component_GetComponent_TisPlayerHealth_tE7421738BA48E6A6C90760303B818641DDFAE263_mF6FA39268341969F2360DEF6F96AE7E0333F13DB_RuntimeMethod_var);
		NullCheck(L_4);
		PlayerHealth_Hit_mB2F7F292A4E8B3309B884569BFA457CB68FC6944(L_4, NULL);
	}

IL_001d:
	{
		// }
		return;
	}
}
// System.Void trailer::PlayDialog()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void trailer_PlayDialog_mC71D344D05540097C028935FFCBBA5F82FED3C57 (trailer_tBCF57821A83158F03BE7057729DD3880F544BD69* __this, const RuntimeMethod* method) 
{
	{
		// DialogScript.PlayDialog(11);
		Dialog_t1A3474C8E604C61E022BDF82747C68A6C1E11972* L_0 = __this->___DialogScript_6;
		NullCheck(L_0);
		Dialog_PlayDialog_m85FEFB4AA86923BB70879607AAC1E773A1B03351(L_0, ((int32_t)11), NULL);
		// }
		return;
	}
}
// System.Void trailer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void trailer__ctor_m71A45BD687BEFF7932B64C34A2368BF958C0B057 (trailer_tBCF57821A83158F03BE7057729DD3880F544BD69* __this, const RuntimeMethod* method) 
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
// System.Void DissolveExample.DissolveChilds::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DissolveChilds_Start_m9A68E8F17141B80CE6DE9AE1CA8EF67EFF2C39EE (DissolveChilds_tC16822F79C07B08A6B7D228996B7C0401DC4A43B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentsInChildren_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m35AC34F858BD2F34770712CD020AA0518D9409C7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_mACF0CBFB5107412F825BB12F5FC93699031073AA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// var renders = GetComponentsInChildren<Renderer>();
		RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* L_0;
		L_0 = Component_GetComponentsInChildren_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m35AC34F858BD2F34770712CD020AA0518D9409C7(__this, Component_GetComponentsInChildren_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m35AC34F858BD2F34770712CD020AA0518D9409C7_RuntimeMethod_var);
		V_0 = L_0;
		// for (int i = 0; i < renders.Length; i++)
		V_1 = 0;
		goto IL_0022;
	}

IL_000b:
	{
		// materials.AddRange(renders[i].materials);
		List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B* L_1 = __this->___materials_4;
		RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(L_5);
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_6;
		L_6 = Renderer_get_materials_m43D33328432700524EAEAB093C67AE5689976118(L_5, NULL);
		NullCheck(L_1);
		List_1_AddRange_mACF0CBFB5107412F825BB12F5FC93699031073AA(L_1, (RuntimeObject*)L_6, List_1_AddRange_mACF0CBFB5107412F825BB12F5FC93699031073AA_RuntimeMethod_var);
		// for (int i = 0; i < renders.Length; i++)
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_0022:
	{
		// for (int i = 0; i < renders.Length; i++)
		int32_t L_8 = V_1;
		RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* L_9 = V_0;
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length)))))
		{
			goto IL_000b;
		}
	}
	{
		// }
		return;
	}
}
// System.Void DissolveExample.DissolveChilds::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DissolveChilds_Reset_m616D7891217F3197CAAF132C97C2BE8F0236C70C (DissolveChilds_tC16822F79C07B08A6B7D228996B7C0401DC4A43B* __this, const RuntimeMethod* method) 
{
	{
		// Start();
		DissolveChilds_Start_m9A68E8F17141B80CE6DE9AE1CA8EF67EFF2C39EE(__this, NULL);
		// SetValue(0);
		DissolveChilds_SetValue_mEC8995E07CAE20F41B86FD38648CE5883EEE46EE(__this, (0.0f), NULL);
		// }
		return;
	}
}
// System.Void DissolveExample.DissolveChilds::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DissolveChilds_Update_m28AB983B07DDC5CA7118485073F44B8DE5B9B634 (DissolveChilds_tC16822F79C07B08A6B7D228996B7C0401DC4A43B* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// var value = Mathf.PingPong(Time.time * 0.5f, 1f);
		float L_0;
		L_0 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_1;
		L_1 = Mathf_PingPong_mB1D6A10F386CE1EEA99DB69486DDA6DA531D799D_inline(((float)il2cpp_codegen_multiply(L_0, (0.5f))), (1.0f), NULL);
		V_0 = L_1;
		// SetValue(value);
		float L_2 = V_0;
		DissolveChilds_SetValue_mEC8995E07CAE20F41B86FD38648CE5883EEE46EE(__this, L_2, NULL);
		// }
		return;
	}
}
// System.Void DissolveExample.DissolveChilds::SetValue(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DissolveChilds_SetValue_mEC8995E07CAE20F41B86FD38648CE5883EEE46EE (DissolveChilds_tC16822F79C07B08A6B7D228996B7C0401DC4A43B* __this, float ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m48BBB83C5F748E6E6FF0731C3682092DEA6A7173_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m70F5CFC2DEA9332B78C5ADC0EE1CE1B7465B1456_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1552B448D676757A7912349B2193037A3020FA54);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < materials.Count; i++)
		V_0 = 0;
		goto IL_001f;
	}

IL_0004:
	{
		// materials[i].SetFloat("_Dissolve", value);
		List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B* L_0 = __this->___materials_4;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2;
		L_2 = List_1_get_Item_m70F5CFC2DEA9332B78C5ADC0EE1CE1B7465B1456(L_0, L_1, List_1_get_Item_m70F5CFC2DEA9332B78C5ADC0EE1CE1B7465B1456_RuntimeMethod_var);
		float L_3 = ___value0;
		NullCheck(L_2);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_2, _stringLiteral1552B448D676757A7912349B2193037A3020FA54, L_3, NULL);
		// for (int i = 0; i < materials.Count; i++)
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_4, 1));
	}

IL_001f:
	{
		// for (int i = 0; i < materials.Count; i++)
		int32_t L_5 = V_0;
		List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B* L_6 = __this->___materials_4;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = List_1_get_Count_m48BBB83C5F748E6E6FF0731C3682092DEA6A7173_inline(L_6, List_1_get_Count_m48BBB83C5F748E6E6FF0731C3682092DEA6A7173_RuntimeMethod_var);
		if ((((int32_t)L_5) < ((int32_t)L_7)))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void DissolveExample.DissolveChilds::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DissolveChilds__ctor_m755B552B02CBAB73E20A3990454545CB54B4F720 (DissolveChilds_tC16822F79C07B08A6B7D228996B7C0401DC4A43B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m38500C20418699AEC04B1946434E06EC96FB4B1C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// List<Material> materials = new List<Material>();
		List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B* L_0 = (List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B*)il2cpp_codegen_object_new(List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m38500C20418699AEC04B1946434E06EC96FB4B1C(L_0, List_1__ctor_m38500C20418699AEC04B1946434E06EC96FB4B1C_RuntimeMethod_var);
		__this->___materials_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___materials_4), (void*)L_0);
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
// System.Void DissolveExample.DissolveOffest::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DissolveOffest_Start_mD3D37F15EDD7A6FDF9D8B91B20B4DDF278C637B9 (DissolveOffest_t58BE2EF3E07A9135019B79095490CEF133FBE2A1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponents_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC739FB09ACDAADE9300E9D1FDBF591D2022B1963_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_mACF0CBFB5107412F825BB12F5FC93699031073AA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// var renders = GetComponents<Renderer>();
		RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* L_0;
		L_0 = Component_GetComponents_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC739FB09ACDAADE9300E9D1FDBF591D2022B1963(__this, Component_GetComponents_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC739FB09ACDAADE9300E9D1FDBF591D2022B1963_RuntimeMethod_var);
		V_0 = L_0;
		// for (int i = 0; i < renders.Length; i++)
		V_1 = 0;
		goto IL_0022;
	}

IL_000b:
	{
		// materials.AddRange(renders[i].materials);
		List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B* L_1 = __this->___materials_4;
		RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(L_5);
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_6;
		L_6 = Renderer_get_materials_m43D33328432700524EAEAB093C67AE5689976118(L_5, NULL);
		NullCheck(L_1);
		List_1_AddRange_mACF0CBFB5107412F825BB12F5FC93699031073AA(L_1, (RuntimeObject*)L_6, List_1_AddRange_mACF0CBFB5107412F825BB12F5FC93699031073AA_RuntimeMethod_var);
		// for (int i = 0; i < renders.Length; i++)
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_0022:
	{
		// for (int i = 0; i < renders.Length; i++)
		int32_t L_8 = V_1;
		RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* L_9 = V_0;
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length)))))
		{
			goto IL_000b;
		}
	}
	{
		// }
		return;
	}
}
// System.Void DissolveExample.DissolveOffest::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DissolveOffest_Reset_m4EAC770B237ADD553A6A2DA05B7F1B23CA9279C2 (DissolveOffest_t58BE2EF3E07A9135019B79095490CEF133FBE2A1* __this, const RuntimeMethod* method) 
{
	{
		// Start();
		DissolveOffest_Start_mD3D37F15EDD7A6FDF9D8B91B20B4DDF278C637B9(__this, NULL);
		// SetValue(0);
		DissolveOffest_SetValue_m584529CED1F9B399AB7BEF9FE5A7936F1532B98C(__this, (0.0f), NULL);
		// }
		return;
	}
}
// System.Void DissolveExample.DissolveOffest::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DissolveOffest_Update_mE6C29FFE8C6E5BD43098E1FD9DAAFF7C3CF7FFAB (DissolveOffest_t58BE2EF3E07A9135019B79095490CEF133FBE2A1* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// if (Input.GetKeyDown(KeyCode.I))
		bool L_0;
		L_0 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)105), NULL);
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		// PingPong = true;
		__this->___PingPong_5 = (bool)1;
	}

IL_0010:
	{
		// if (PingPong)
		bool L_1 = __this->___PingPong_5;
		if (!L_1)
		{
			goto IL_003d;
		}
	}
	{
		// var value = Mathf.PingPong(Time.time * 0.5f, 1.6f);
		float L_2;
		L_2 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_3;
		L_3 = Mathf_PingPong_mB1D6A10F386CE1EEA99DB69486DDA6DA531D799D_inline(((float)il2cpp_codegen_multiply(L_2, (0.5f))), (1.60000002f), NULL);
		V_0 = L_3;
		// value -= 0.5f;
		float L_4 = V_0;
		V_0 = ((float)il2cpp_codegen_subtract(L_4, (0.5f)));
		// SetValue(value);
		float L_5 = V_0;
		DissolveOffest_SetValue_m584529CED1F9B399AB7BEF9FE5A7936F1532B98C(__this, L_5, NULL);
	}

IL_003d:
	{
		// }
		return;
	}
}
// System.Void DissolveExample.DissolveOffest::SetValue(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DissolveOffest_SetValue_m584529CED1F9B399AB7BEF9FE5A7936F1532B98C (DissolveOffest_t58BE2EF3E07A9135019B79095490CEF133FBE2A1* __this, float ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m48BBB83C5F748E6E6FF0731C3682092DEA6A7173_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m70F5CFC2DEA9332B78C5ADC0EE1CE1B7465B1456_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral092CD1D94124CED41142F34B5287CFB1EF843118);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < materials.Count; i++)
		V_0 = 0;
		goto IL_0033;
	}

IL_0004:
	{
		// materials[i].SetVector("_DissolveOffest", new Vector4(0f,value,0f,0f));
		List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B* L_0 = __this->___materials_4;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2;
		L_2 = List_1_get_Item_m70F5CFC2DEA9332B78C5ADC0EE1CE1B7465B1456(L_0, L_1, List_1_get_Item_m70F5CFC2DEA9332B78C5ADC0EE1CE1B7465B1456_RuntimeMethod_var);
		float L_3 = ___value0;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_4), (0.0f), L_3, (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_2);
		Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1(L_2, _stringLiteral092CD1D94124CED41142F34B5287CFB1EF843118, L_4, NULL);
		// for (int i = 0; i < materials.Count; i++)
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0033:
	{
		// for (int i = 0; i < materials.Count; i++)
		int32_t L_6 = V_0;
		List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B* L_7 = __this->___materials_4;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = List_1_get_Count_m48BBB83C5F748E6E6FF0731C3682092DEA6A7173_inline(L_7, List_1_get_Count_m48BBB83C5F748E6E6FF0731C3682092DEA6A7173_RuntimeMethod_var);
		if ((((int32_t)L_6) < ((int32_t)L_8)))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void DissolveExample.DissolveOffest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DissolveOffest__ctor_m776E957B0B8ED8472D707B9DAA7FEBCFEA7073DF (DissolveOffest_t58BE2EF3E07A9135019B79095490CEF133FBE2A1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m38500C20418699AEC04B1946434E06EC96FB4B1C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// List<Material> materials = new List<Material>();
		List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B* L_0 = (List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B*)il2cpp_codegen_object_new(List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m38500C20418699AEC04B1946434E06EC96FB4B1C(L_0, List_1__ctor_m38500C20418699AEC04B1946434E06EC96FB4B1C_RuntimeMethod_var);
		__this->___materials_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___materials_4), (void*)L_0);
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
// System.Void DissolveExample.Follow::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Follow_Start_m2762BFD537C9D8ED573B38AD5315FA9BC7488DA0 (Follow_tE6475B5CD0C62D440F04CD07886CADE8556E5BEB* __this, const RuntimeMethod* method) 
{
	{
		// pos = transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		__this->___pos_6 = L_1;
		// }
		return;
	}
}
// System.Void DissolveExample.Follow::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Follow_Update_mF052E75C337F7257DED7A8560A5938DBC792BA3A (Follow_tE6475B5CD0C62D440F04CD07886CADE8556E5BEB* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// var value = Mathf.PingPong(Time.time * speed, height);
		float L_0;
		L_0 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_1 = __this->___speed_4;
		float L_2 = __this->___height_5;
		float L_3;
		L_3 = Mathf_PingPong_mB1D6A10F386CE1EEA99DB69486DDA6DA531D799D_inline(((float)il2cpp_codegen_multiply(L_0, L_1)), L_2, NULL);
		V_0 = L_3;
		// transform.position = (pos + value * Vector3.up);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = __this->___pos_6;
		float L_6 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(L_6, L_7, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_5, L_8, NULL);
		NullCheck(L_4);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_4, L_9, NULL);
		// }
		return;
	}
}
// System.Void DissolveExample.Follow::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Follow__ctor_m7B1E958788B1986FF4D4B3F2032AF6183B2C880E (Follow_tE6475B5CD0C62D440F04CD07886CADE8556E5BEB* __this, const RuntimeMethod* method) 
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
// System.Void DissolveExample.Rotator::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rotator_Update_m9DDA9277A65F7A2D995390BD4EA59C44354728BD (Rotator_tE132C1593185E5BED33BA041401344E57D5F4D6D* __this, const RuntimeMethod* method) 
{
	{
		// transform.Rotate(Vector3.right, Speed * Time.deltaTime);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline(NULL);
		float L_2 = __this->___Speed_4;
		float L_3;
		L_3 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		NullCheck(L_0);
		Transform_Rotate_m35B44707FE16FF8015D519D8C162C0B4A85D6D1F(L_0, L_1, ((float)il2cpp_codegen_multiply(L_2, L_3)), NULL);
		// }
		return;
	}
}
// System.Void DissolveExample.Rotator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rotator__ctor_mCCAFDDFF8B63156C42492D5EC82FE9AA1E7F1ADC (Rotator_tE132C1593185E5BED33BA041401344E57D5F4D6D* __this, const RuntimeMethod* method) 
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
// System.Void DissolveExample.RotatorDissolveDir::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RotatorDissolveDir_Start_mD510A21A43A09CB7E5353B9ADB7D60C7FD7E36D4 (RotatorDissolveDir_t012E005A8E17EFFFAEA418A5D7271205E6860066* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_mACF0CBFB5107412F825BB12F5FC93699031073AA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// materials.AddRange(GetComponent<Renderer>().materials);
		List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B* L_0 = __this->___materials_5;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_1;
		L_1 = Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8(__this, Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		NullCheck(L_1);
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_2;
		L_2 = Renderer_get_materials_m43D33328432700524EAEAB093C67AE5689976118(L_1, NULL);
		NullCheck(L_0);
		List_1_AddRange_mACF0CBFB5107412F825BB12F5FC93699031073AA(L_0, (RuntimeObject*)L_2, List_1_AddRange_mACF0CBFB5107412F825BB12F5FC93699031073AA_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void DissolveExample.RotatorDissolveDir::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RotatorDissolveDir_Update_mFA7922B597905CB50E592288EC31066B0CB9956B (RotatorDissolveDir_t012E005A8E17EFFFAEA418A5D7271205E6860066* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m48BBB83C5F748E6E6FF0731C3682092DEA6A7173_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m70F5CFC2DEA9332B78C5ADC0EE1CE1B7465B1456_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral74B0130CA9C6A8877D6B7AAD2782E425C6EB7440);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// for (int i = 0; i < materials.Count; i++)
		V_0 = 0;
		goto IL_006a;
	}

IL_0004:
	{
		// var value = materials[i].GetVector("_DissolveDirection");
		List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B* L_0 = __this->___materials_5;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2;
		L_2 = List_1_get_Item_m70F5CFC2DEA9332B78C5ADC0EE1CE1B7465B1456(L_0, L_1, List_1_get_Item_m70F5CFC2DEA9332B78C5ADC0EE1CE1B7465B1456_RuntimeMethod_var);
		NullCheck(L_2);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_3;
		L_3 = Material_GetVector_mA2011D4DA2CC58003AE90DBF0802CF5EE31B014D(L_2, _stringLiteral74B0130CA9C6A8877D6B7AAD2782E425C6EB7440, NULL);
		V_1 = L_3;
		// var delta = Speed * Time.deltaTime;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = __this->___Speed_4;
		float L_5;
		L_5 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_4, L_5, NULL);
		V_2 = L_6;
		// value += new Vector4(delta.x,delta.y,delta.z,0f);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_7 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_2;
		float L_9 = L_8.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_2;
		float L_11 = L_10.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = V_2;
		float L_13 = L_12.___z_4;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_14;
		memset((&L_14), 0, sizeof(L_14));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_14), L_9, L_11, L_13, (0.0f), /*hidden argument*/NULL);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_15;
		L_15 = Vector4_op_Addition_m471A0C9B30316933F8CE430F17A7F8806ECA3EB9_inline(L_7, L_14, NULL);
		V_1 = L_15;
		// materials[i].SetVector("_DissolveDirection", value);
		List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B* L_16 = __this->___materials_5;
		int32_t L_17 = V_0;
		NullCheck(L_16);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_18;
		L_18 = List_1_get_Item_m70F5CFC2DEA9332B78C5ADC0EE1CE1B7465B1456(L_16, L_17, List_1_get_Item_m70F5CFC2DEA9332B78C5ADC0EE1CE1B7465B1456_RuntimeMethod_var);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_19 = V_1;
		NullCheck(L_18);
		Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1(L_18, _stringLiteral74B0130CA9C6A8877D6B7AAD2782E425C6EB7440, L_19, NULL);
		// for (int i = 0; i < materials.Count; i++)
		int32_t L_20 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_006a:
	{
		// for (int i = 0; i < materials.Count; i++)
		int32_t L_21 = V_0;
		List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B* L_22 = __this->___materials_5;
		NullCheck(L_22);
		int32_t L_23;
		L_23 = List_1_get_Count_m48BBB83C5F748E6E6FF0731C3682092DEA6A7173_inline(L_22, List_1_get_Count_m48BBB83C5F748E6E6FF0731C3682092DEA6A7173_RuntimeMethod_var);
		if ((((int32_t)L_21) < ((int32_t)L_23)))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void DissolveExample.RotatorDissolveDir::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RotatorDissolveDir__ctor_mBC08EDE3294D619AA7E6F16F0078EE5C1780B8B8 (RotatorDissolveDir_t012E005A8E17EFFFAEA418A5D7271205E6860066* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m38500C20418699AEC04B1946434E06EC96FB4B1C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// List<Material> materials = new List<Material>();
		List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B* L_0 = (List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B*)il2cpp_codegen_object_new(List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m38500C20418699AEC04B1946434E06EC96FB4B1C(L_0, List_1__ctor_m38500C20418699AEC04B1946434E06EC96FB4B1C_RuntimeMethod_var);
		__this->___materials_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___materials_5), (void*)L_0);
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
// System.String MA_Toolbox.Utils.MA_StringUtils::RandomAlphabetString(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MA_StringUtils_RandomAlphabetString_m758EEF4E12DCEF8B09555C108F543FB2E442DB4B (int32_t ___length0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	Il2CppChar V_2 = 0x0;
	{
		// string s = "";
		V_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		// for (int i = 0; i < length; i++)
		V_1 = 0;
		goto IL_0022;
	}

IL_000a:
	{
		// s += RandomAlphabetChar();
		String_t* L_0 = V_0;
		Il2CppChar L_1;
		L_1 = MA_StringUtils_RandomAlphabetChar_m6EF686DB1FC70797DD6A2D7EE144B187CC31B96E(NULL);
		V_2 = L_1;
		String_t* L_2;
		L_2 = Char_ToString_m2A308731F9577C06AF3C0901234E2EAC8327410C((&V_2), NULL);
		String_t* L_3;
		L_3 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_0, L_2, NULL);
		V_0 = L_3;
		// for (int i = 0; i < length; i++)
		int32_t L_4 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_4, 1));
	}

IL_0022:
	{
		// for (int i = 0; i < length; i++)
		int32_t L_5 = V_1;
		int32_t L_6 = ___length0;
		if ((((int32_t)L_5) < ((int32_t)L_6)))
		{
			goto IL_000a;
		}
	}
	{
		// return s;
		String_t* L_7 = V_0;
		return L_7;
	}
}
// System.Char MA_Toolbox.Utils.MA_StringUtils::RandomAlphabetChar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar MA_StringUtils_RandomAlphabetChar_m6EF686DB1FC70797DD6A2D7EE144B187CC31B96E (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral58C152450A7FC5A41AE5FCDAC969EE8296CC5CAE);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return ALPHABET[Random.Range(0, ALPHABET.Length)];
		NullCheck(_stringLiteral58C152450A7FC5A41AE5FCDAC969EE8296CC5CAE);
		int32_t L_0;
		L_0 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(_stringLiteral58C152450A7FC5A41AE5FCDAC969EE8296CC5CAE, NULL);
		int32_t L_1;
		L_1 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(0, L_0, NULL);
		NullCheck(_stringLiteral58C152450A7FC5A41AE5FCDAC969EE8296CC5CAE);
		Il2CppChar L_2;
		L_2 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(_stringLiteral58C152450A7FC5A41AE5FCDAC969EE8296CC5CAE, L_1, NULL);
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
// System.UInt32 <PrivateImplementationDetails>::ComputeStringHash(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U3CPrivateImplementationDetailsU3E_ComputeStringHash_m6EA1F233618497AEFF8902A5EDFA24C74E2F2876 (String_t* ___s0, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		String_t* L_0 = ___s0;
		if (!L_0)
		{
			goto IL_002a;
		}
	}
	{
		V_0 = ((int32_t)-2128831035);
		V_1 = 0;
		goto IL_0021;
	}

IL_000d:
	{
		String_t* L_1 = ___s0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		Il2CppChar L_3;
		L_3 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_1, L_2, NULL);
		uint32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_multiply(((int32_t)((int32_t)L_3^(int32_t)L_4)), ((int32_t)16777619)));
		int32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0021:
	{
		int32_t L_6 = V_1;
		String_t* L_7 = ___s0;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_7, NULL);
		if ((((int32_t)L_6) < ((int32_t)L_8)))
		{
			goto IL_000d;
		}
	}

IL_002a:
	{
		uint32_t L_9 = V_0;
		return L_9;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_MoveTowards_m0363264647799F3173AC37F8E819F98298249B08_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___current0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___target1, float ___maxDistanceDelta2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	bool V_5 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_6;
	memset((&V_6), 0, sizeof(V_6));
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___target1;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___current0;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___target1;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___current0;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___target1;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___current0;
		float L_11 = L_10.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		V_3 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))));
		float L_18 = V_3;
		if ((((float)L_18) == ((float)(0.0f))))
		{
			goto IL_0055;
		}
	}
	{
		float L_19 = ___maxDistanceDelta2;
		if ((!(((float)L_19) >= ((float)(0.0f)))))
		{
			goto IL_0052;
		}
	}
	{
		float L_20 = V_3;
		float L_21 = ___maxDistanceDelta2;
		float L_22 = ___maxDistanceDelta2;
		G_B4_0 = ((((int32_t)((!(((float)L_20) <= ((float)((float)il2cpp_codegen_multiply(L_21, L_22)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0053;
	}

IL_0052:
	{
		G_B4_0 = 0;
	}

IL_0053:
	{
		G_B6_0 = G_B4_0;
		goto IL_0056;
	}

IL_0055:
	{
		G_B6_0 = 1;
	}

IL_0056:
	{
		V_5 = (bool)G_B6_0;
		bool L_23 = V_5;
		if (!L_23)
		{
			goto IL_0061;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = ___target1;
		V_6 = L_24;
		goto IL_009b;
	}

IL_0061:
	{
		float L_25 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_26;
		L_26 = sqrt(((double)L_25));
		V_4 = ((float)L_26);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = ___current0;
		float L_28 = L_27.___x_2;
		float L_29 = V_0;
		float L_30 = V_4;
		float L_31 = ___maxDistanceDelta2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32 = ___current0;
		float L_33 = L_32.___y_3;
		float L_34 = V_1;
		float L_35 = V_4;
		float L_36 = ___maxDistanceDelta2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37 = ___current0;
		float L_38 = L_37.___z_4;
		float L_39 = V_2;
		float L_40 = V_4;
		float L_41 = ___maxDistanceDelta2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42;
		memset((&L_42), 0, sizeof(L_42));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_42), ((float)il2cpp_codegen_add(L_28, ((float)il2cpp_codegen_multiply(((float)(L_29/L_30)), L_31)))), ((float)il2cpp_codegen_add(L_33, ((float)il2cpp_codegen_multiply(((float)(L_34/L_35)), L_36)))), ((float)il2cpp_codegen_add(L_38, ((float)il2cpp_codegen_multiply(((float)(L_39/L_40)), L_41)))), /*hidden argument*/NULL);
		V_6 = L_42;
		goto IL_009b;
	}

IL_009b:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43 = V_6;
		return L_43;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_18;
		L_18 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))))));
		V_3 = ((float)L_18);
		goto IL_0040;
	}

IL_0040:
	{
		float L_19 = V_3;
		return L_19;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Equality_mCDCBB8D2EDC3D3BF20F31A25ACB34705D352B479_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	bool V_4 = false;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___lhs0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___rhs1;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___lhs0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___rhs1;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___lhs0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___rhs1;
		float L_11 = L_10.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		V_3 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))));
		float L_18 = V_3;
		V_4 = (bool)((((float)L_18) < ((float)(9.99999944E-11f)))? 1 : 0);
		goto IL_0043;
	}

IL_0043:
	{
		bool L_19 = V_4;
		return L_19;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___x0;
		float L_1 = ___y1;
		float L_2 = ___z2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_3), L_0, L_1, L_2, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_3, (0.0174532924f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E(L_4, NULL);
		V_0 = L_5;
		goto IL_001b;
	}

IL_001b:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		float L_2 = ___a0;
		float L_3 = ___t2;
		float L_4;
		L_4 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_3, NULL);
		V_0 = ((float)il2cpp_codegen_add(L_0, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_1, L_2)), L_4))));
		goto IL_0010;
	}

IL_0010:
	{
		float L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___upVector_7;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline (float ___d0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a1;
		float L_1 = L_0.___x_2;
		float L_2 = ___d0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a1;
		float L_4 = L_3.___y_3;
		float L_5 = ___d0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a1;
		float L_7 = L_6.___z_4;
		float L_8 = ___d0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = (*(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)__this);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Quaternion_Internal_ToEulerRad_m5BD0EEC543120C320DC77FCCDFD2CE2E6BD3F1A8(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_1, (57.2957802f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Quaternion_Internal_MakePositive_m73E2D01920CB0DFE661A55022C129E8617F0C9A8(L_2, NULL);
		V_0 = L_3;
		goto IL_001e;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_down_mF62B2AE7C5AC31EAC9CB62797C7190C90A7A8599_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___downVector_8;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_back_mCA5A84170E8DE5CE38C0551B4CCAD647BF215E57_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___backVector_12;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_left_m8C1116485A9E689760AEE1142F5977852278B7E1_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___leftVector_9;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_PingPong_mB1D6A10F386CE1EEA99DB69486DDA6DA531D799D_inline (float ___t0, float ___length1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___t0;
		float L_1 = ___length1;
		float L_2;
		L_2 = Mathf_Repeat_m6F1560A163481BB311D685294E1B463C3E4EB3BA_inline(L_0, ((float)il2cpp_codegen_multiply(L_1, (2.0f))), NULL);
		___t0 = L_2;
		float L_3 = ___length1;
		float L_4 = ___t0;
		float L_5 = ___length1;
		float L_6;
		L_6 = fabsf(((float)il2cpp_codegen_subtract(L_4, L_5)));
		V_0 = ((float)il2cpp_codegen_subtract(L_3, L_6));
		goto IL_001d;
	}

IL_001d:
	{
		float L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_1 = L_0;
		float L_1 = ___y1;
		__this->___y_2 = L_1;
		float L_2 = ___z2;
		__this->___z_3 = L_2;
		float L_3 = ___w3;
		__this->___w_4 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___rightVector_10;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_op_Addition_m471A0C9B30316933F8CE430F17A7F8806ECA3EB9_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___a0, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___b1, const RuntimeMethod* method) 
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0 = ___a0;
		float L_1 = L_0.___x_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_2 = ___b1;
		float L_3 = L_2.___x_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_4 = ___a0;
		float L_5 = L_4.___y_2;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_6 = ___b1;
		float L_7 = L_6.___y_2;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_8 = ___a0;
		float L_9 = L_8.___z_3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_10 = ___b1;
		float L_11 = L_10.___z_3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_12 = ___a0;
		float L_13 = L_12.___w_4;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_14 = ___b1;
		float L_15 = L_14.___w_4;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_16;
		memset((&L_16), 0, sizeof(L_16));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_16), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), ((float)il2cpp_codegen_add(L_13, L_15)), /*hidden argument*/NULL);
		V_0 = L_16;
		goto IL_003d;
	}

IL_003d:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_17 = V_0;
		return L_17;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___value0;
		V_0 = (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (0.0f);
		goto IL_002d;
	}

IL_0015:
	{
		float L_2 = ___value0;
		V_2 = (bool)((((float)L_2) > ((float)(1.0f)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		V_1 = (1.0f);
		goto IL_002d;
	}

IL_0029:
	{
		float L_4 = ___value0;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Repeat_m6F1560A163481BB311D685294E1B463C3E4EB3BA_inline (float ___t0, float ___length1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___t0;
		float L_1 = ___t0;
		float L_2 = ___length1;
		float L_3;
		L_3 = floorf(((float)(L_1/L_2)));
		float L_4 = ___length1;
		float L_5 = ___length1;
		float L_6;
		L_6 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(((float)il2cpp_codegen_subtract(L_0, ((float)il2cpp_codegen_multiply(L_3, L_4)))), (0.0f), L_5, NULL);
		V_0 = L_6;
		goto IL_001b;
	}

IL_001b:
	{
		float L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	float V_2 = 0.0f;
	{
		float L_0 = ___value0;
		float L_1 = ___min1;
		V_0 = (bool)((((float)L_0) < ((float)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		float L_3 = ___min1;
		___value0 = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		float L_4 = ___value0;
		float L_5 = ___max2;
		V_1 = (bool)((((float)L_4) > ((float)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		float L_7 = ___max2;
		___value0 = L_7;
	}

IL_0019:
	{
		float L_8 = ___value0;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		float L_9 = V_2;
		return L_9;
	}
}
