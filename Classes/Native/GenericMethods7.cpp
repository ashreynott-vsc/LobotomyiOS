#include "il2cpp-config.h"

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
template <typename R, typename T1>
struct GenericInterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t2059959053;
// System.Func`3<System.Nullable`1<System.Int64>,System.Object,System.Nullable`1<System.Int64>>
struct Func_3_t1794333537;
// System.Func`3<System.Nullable`1<System.Single>,System.Object,System.Nullable`1<System.Single>>
struct Func_3_t2424329933;
// System.Func`3<System.Object,System.Object,System.Object>
struct Func_3_t3398609381;
// System.Func`2<System.Object,System.Object>
struct Func_2_t2447130374;
// System.ArgumentNullException
struct ArgumentNullException_t1615371798;
// System.String
struct String_t;
// System.Linq.IQueryable`1<System.Object>
struct IQueryable_1_t509446239;
// System.Linq.Expressions.Expression`1<System.Func`3<System.Object,System.Object,System.Object>>
struct Expression_1_t3384637588;
// System.Linq.Expressions.Expression`1<System.Func`2<System.Object,System.Object>>
struct Expression_1_t2433158581;
// System.Type
struct Type_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Reflection.MethodBase
struct MethodBase_t;
// System.Type[]
struct TypeU5BU5D_t3940880105;
// System.Linq.Expressions.ConstantExpression
struct ConstantExpression_t3613654278;
// System.Linq.Expressions.UnaryExpression
struct UnaryExpression_t3914580921;
// System.Linq.Expressions.Expression
struct Expression_t1588164026;
// System.Linq.Expressions.Expression[]
struct ExpressionU5BU5D_t2266720799;
// System.Linq.QueryableEnumerable`1<System.Object>
struct QueryableEnumerable_1_t2952042478;
// System.Linq.Expressions.ParameterExpression
struct ParameterExpression_t1118422084;
// System.InvalidOperationException
struct InvalidOperationException_t56020091;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_t777629997;
// System.Func`2<System.Object,System.Boolean>
struct Func_2_t3759279471;
// System.Func`3<System.Object,System.Object,System.Boolean>
struct Func_3_t415791182;
// System.Linq.Expressions.Expression`1<System.Func`2<System.Object,System.Boolean>>
struct Expression_1_t3745307678;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>[]
struct KeyValuePair_2U5BU5D_t3014208436;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>
struct IEnumerable_1_t4122198114;
// System.Object[]
struct ObjectU5BU5D_t2843939325;
// System.Collections.Generic.IEnumerable`1<System.Decimal>
struct IEnumerable_1_t1928112269;
// System.Func`3<System.Decimal,System.Decimal,System.Decimal>
struct Func_3_t3801552229;
// System.Collections.Generic.IEnumerable`1<System.Double>
struct IEnumerable_1_t3869485548;
// System.Func`3<System.Double,System.Double,System.Double>
struct Func_3_t1810338832;
// System.Collections.Generic.IEnumerable`1<System.Int32>
struct IEnumerable_1_t1930798642;
// System.Func`3<System.Int32,System.Int32,System.Int32>
struct Func_3_t3344861838;
// System.Collections.Generic.IEnumerable`1<System.Int64>
struct IEnumerable_1_t2716420193;
// System.Func`3<System.Int64,System.Int64,System.Int64>
struct Func_3_t3175904329;
// System.Func`3<System.Object,System.Decimal,System.Decimal>
struct Func_3_t1567933413;
// System.Func`3<System.Object,System.Double,System.Double>
struct Func_3_t1482559369;
// System.Func`3<System.Object,System.Int32,System.Int32>
struct Func_3_t810756017;
// System.Func`3<System.Object,System.Int64,System.Int64>
struct Func_3_t3770304021;
// System.Func`3<System.Object,System.Single,System.Single>
struct Func_3_t316741917;
// System.Collections.Generic.IEnumerable`1<System.Single>
struct IEnumerable_1_t377119663;
// System.Func`3<System.Single,System.Single,System.Single>
struct Func_3_t2691639151;
// UnityEngine.GameObject
struct GameObject_t1113636619;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t3903027533;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>
struct EventFunction_1_t1764640198;
// System.Collections.Generic.IList`1<UnityEngine.Transform>
struct IList_1_t1120718408;
// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t777473367;
// UnityEngine.Transform
struct Transform_t3600365921;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t257213610;
// UnityEngine.Component
struct Component_t1923634451;
// UnityEngine.Object
struct Object_t631007953;
// System.Collections.Generic.Comparer`1<System.Object>
struct Comparer_1_t284893750;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerEnterHandler>
struct EventFunction_1_t3995630009;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerExitHandler>
struct EventFunction_1_t2867327688;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerDownHandler>
struct EventFunction_1_t64614563;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerUpHandler>
struct EventFunction_1_t3256600500;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerClickHandler>
struct EventFunction_1_t3111972472;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IInitializePotentialDragHandler>
struct EventFunction_1_t3587542510;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IBeginDragHandler>
struct EventFunction_1_t1977848392;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDragHandler>
struct EventFunction_1_t972960537;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IEndDragHandler>
struct EventFunction_1_t3277009892;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDropHandler>
struct EventFunction_1_t2311673543;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IScrollHandler>
struct EventFunction_1_t2886331738;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IUpdateSelectedHandler>
struct EventFunction_1_t2950825503;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ISelectHandler>
struct EventFunction_1_t955952873;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDeselectHandler>
struct EventFunction_1_t3373214253;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IMoveHandler>
struct EventFunction_1_t3912835512;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ISubmitHandler>
struct EventFunction_1_t1475332338;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ICancelHandler>
struct EventFunction_1_t2658898854;
// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>
struct ObjectPool_1_t231414508;
// UnityEngine.Transform[]
struct TransformU5BU5D_t807237628;
// System.Func`3<System.Nullable`1<System.Int32>,System.Nullable`1<System.Int32>,System.Nullable`1<System.Int32>>
struct Func_3_t3369341848;
// System.Func`3<System.Nullable`1<System.Int64>,System.Nullable`1<System.Int64>,System.Nullable`1<System.Int64>>
struct Func_3_t3200384339;
// System.Func`3<System.Nullable`1<System.Double>,System.Nullable`1<System.Double>,System.Nullable`1<System.Double>>
struct Func_3_t1834818842;
// System.Func`3<System.Nullable`1<System.Single>,System.Nullable`1<System.Single>,System.Nullable`1<System.Single>>
struct Func_3_t2716119161;
// System.Func`3<System.Nullable`1<System.Decimal>,System.Nullable`1<System.Decimal>,System.Nullable`1<System.Decimal>>
struct Func_3_t3826032239;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Void
struct Void_t1185182177;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t1003666588;
// System.DelegateData
struct DelegateData_t1677132599;
// System.Reflection.MemberFilter
struct MemberFilter_t426314064;
// System.Func`2<System.Linq.Expressions.Expression,System.Type>
struct Func_2_t1273750444;
// System.Func`2<System.Linq.Expressions.ParameterExpression,System.Type>
struct Func_2_t1420191674;
// System.Action`1<System.Reflection.FieldInfo>
struct Action_1_t59202884;
// System.Action`1<System.Reflection.PropertyInfo>
struct Action_1_t859809546;
// System.Func`2<System.Reflection.FieldInfo,System.Type>
struct Func_2_t4148147921;
// System.Func`2<System.Reflection.PropertyInfo,System.Type>
struct Func_2_t468852531;
// System.Func`2<System.Type,System.Boolean>
struct Func_2_t561252955;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.AsyncCallback
struct AsyncCallback_t3962456242;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ParameterExpression>
struct ReadOnlyCollection_1_t2330998371;

extern RuntimeClass* IEnumerator_t1853284238_il2cpp_TypeInfo_var;
extern RuntimeClass* IDisposable_t3640265483_il2cpp_TypeInfo_var;
extern const uint32_t Enumerable_SumNullable_TisRuntimeObject_TisNullable_1_t1164162090_m3330937784_MetadataUsageId;
extern const uint32_t Enumerable_SumNullable_TisRuntimeObject_TisNullable_1_t3119828856_m2803470048_MetadataUsageId;
extern const uint32_t Enumerable_SumNullable_TisRuntimeObject_TisRuntimeObject_m447531663_MetadataUsageId;
extern RuntimeClass* ArgumentNullException_t1615371798_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Enumerable_Aggregate_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_m487105434_RuntimeMethod_var;
extern String_t* _stringLiteral787905828;
extern const uint32_t Enumerable_Aggregate_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_m487105434_MetadataUsageId;
extern RuntimeClass* IQueryable_t2875280540_il2cpp_TypeInfo_var;
extern RuntimeClass* TypeU5BU5D_t3940880105_il2cpp_TypeInfo_var;
extern RuntimeClass* Type_t_il2cpp_TypeInfo_var;
extern RuntimeClass* ExpressionU5BU5D_t2266720799_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Queryable_Aggregate_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_m4232466060_RuntimeMethod_var;
extern const uint32_t Queryable_Aggregate_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_m4232466060_MetadataUsageId;
extern const RuntimeMethod* Queryable_Max_TisRuntimeObject_TisRuntimeObject_m3449966624_RuntimeMethod_var;
extern const uint32_t Queryable_Max_TisRuntimeObject_TisRuntimeObject_m3449966624_MetadataUsageId;
extern const RuntimeMethod* Queryable_Min_TisRuntimeObject_TisRuntimeObject_m1180807981_RuntimeMethod_var;
extern const uint32_t Queryable_Min_TisRuntimeObject_TisRuntimeObject_m1180807981_MetadataUsageId;
extern RuntimeClass* ParameterExpressionU5BU5D_t2413162029_il2cpp_TypeInfo_var;
extern const uint32_t QueryableEnumerable_1_Execute_TisBoolean_t97287965_m3520319996_MetadataUsageId;
extern const uint32_t QueryableEnumerable_1_Execute_TisDecimal_t2948259380_m2768354779_MetadataUsageId;
extern const uint32_t QueryableEnumerable_1_Execute_TisDouble_t594665363_m75784671_MetadataUsageId;
extern const uint32_t QueryableEnumerable_1_Execute_TisInt32_t2950945753_m1224328557_MetadataUsageId;
extern const uint32_t QueryableEnumerable_1_Execute_TisInt64_t3736567304_m1574847071_MetadataUsageId;
extern const uint32_t QueryableEnumerable_1_Execute_TisNullable_1_t375854166_m2898739788_MetadataUsageId;
extern const uint32_t QueryableEnumerable_1_Execute_TisNullable_1_t2317227445_m4137812720_MetadataUsageId;
extern const uint32_t QueryableEnumerable_1_Execute_TisNullable_1_t378540539_m3140269918_MetadataUsageId;
extern const uint32_t QueryableEnumerable_1_Execute_TisNullable_1_t1164162090_m3387925999_MetadataUsageId;
extern const uint32_t QueryableEnumerable_1_Execute_TisNullable_1_t3119828856_m1090192689_MetadataUsageId;
extern const uint32_t QueryableEnumerable_1_Execute_TisRuntimeObject_m3179243312_MetadataUsageId;
extern const uint32_t QueryableEnumerable_1_Execute_TisSingle_t1397266774_m3283743587_MetadataUsageId;
extern const uint32_t Queryable_Execute_TisInt32_t2950945753_TisRuntimeObject_m3877567083_MetadataUsageId;
extern const uint32_t Queryable_Execute_TisInt64_t3736567304_TisRuntimeObject_m977574818_MetadataUsageId;
extern const uint32_t Queryable_Execute_TisRuntimeObject_TisRuntimeObject_m529963124_MetadataUsageId;
extern RuntimeClass* InvalidOperationException_t56020091_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Enumerable_Aggregate_TisRuntimeObject_m2525715370_RuntimeMethod_var;
extern String_t* _stringLiteral875828457;
extern const uint32_t Enumerable_Aggregate_TisRuntimeObject_m2525715370_MetadataUsageId;
extern RuntimeClass* ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Enumerable_ElementAt_TisRuntimeObject_m2021996717_RuntimeMethod_var;
extern const uint32_t Enumerable_ElementAt_TisRuntimeObject_m2021996717_MetadataUsageId;
extern const RuntimeMethod* Enumerable_ElementAt_TisRuntimeObject_m1482474722_RuntimeMethod_var;
extern const uint32_t Enumerable_ElementAt_TisRuntimeObject_m1482474722_MetadataUsageId;
extern const RuntimeMethod* Enumerable_First_TisRuntimeObject_m4173419911_RuntimeMethod_var;
extern const uint32_t Enumerable_First_TisRuntimeObject_m4173419911_MetadataUsageId;
extern const RuntimeMethod* Enumerable_First_TisRuntimeObject_m2925268555_RuntimeMethod_var;
extern const uint32_t Enumerable_First_TisRuntimeObject_m2925268555_MetadataUsageId;
extern const uint32_t Enumerable_FirstOrDefault_TisRuntimeObject_m21753924_MetadataUsageId;
extern const RuntimeMethod* Enumerable_IterateNonNullable_TisRuntimeObject_m4289357107_RuntimeMethod_var;
extern const uint32_t Enumerable_IterateNonNullable_TisRuntimeObject_m4289357107_MetadataUsageId;
extern const uint32_t Enumerable_IterateNullable_TisRuntimeObject_m2347612260_MetadataUsageId;
extern const RuntimeMethod* Enumerable_Last_TisRuntimeObject_m3977869702_RuntimeMethod_var;
extern const uint32_t Enumerable_Last_TisRuntimeObject_m3977869702_MetadataUsageId;
extern const RuntimeMethod* Enumerable_Last_TisRuntimeObject_m191782855_RuntimeMethod_var;
extern const uint32_t Enumerable_Last_TisRuntimeObject_m191782855_MetadataUsageId;
extern const uint32_t Enumerable_LastOrDefault_TisRuntimeObject_m4188501139_MetadataUsageId;
extern const RuntimeMethod* Enumerable_Single_TisRuntimeObject_m3050605623_RuntimeMethod_var;
extern const uint32_t Enumerable_Single_TisRuntimeObject_m3050605623_MetadataUsageId;
extern const RuntimeMethod* Enumerable_Single_TisRuntimeObject_m1146889774_RuntimeMethod_var;
extern const uint32_t Enumerable_Single_TisRuntimeObject_m1146889774_MetadataUsageId;
extern const RuntimeMethod* Enumerable_SingleOrDefault_TisRuntimeObject_m3432536092_RuntimeMethod_var;
extern const uint32_t Enumerable_SingleOrDefault_TisRuntimeObject_m3432536092_MetadataUsageId;
extern const RuntimeMethod* Queryable_Aggregate_TisRuntimeObject_m2057389622_RuntimeMethod_var;
extern const uint32_t Queryable_Aggregate_TisRuntimeObject_m2057389622_MetadataUsageId;
extern RuntimeClass* Int32_t2950945753_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Queryable_ElementAt_TisRuntimeObject_m2496200849_RuntimeMethod_var;
extern const uint32_t Queryable_ElementAt_TisRuntimeObject_m2496200849_MetadataUsageId;
extern const RuntimeMethod* Queryable_ElementAtOrDefault_TisRuntimeObject_m868883000_RuntimeMethod_var;
extern const uint32_t Queryable_ElementAtOrDefault_TisRuntimeObject_m868883000_MetadataUsageId;
extern const RuntimeMethod* Queryable_First_TisRuntimeObject_m3889068409_RuntimeMethod_var;
extern const uint32_t Queryable_First_TisRuntimeObject_m3889068409_MetadataUsageId;
extern const RuntimeMethod* Queryable_First_TisRuntimeObject_m2228996224_RuntimeMethod_var;
extern const uint32_t Queryable_First_TisRuntimeObject_m2228996224_MetadataUsageId;
extern const RuntimeMethod* Queryable_FirstOrDefault_TisRuntimeObject_m424282597_RuntimeMethod_var;
extern const uint32_t Queryable_FirstOrDefault_TisRuntimeObject_m424282597_MetadataUsageId;
extern const RuntimeMethod* Queryable_FirstOrDefault_TisRuntimeObject_m1000070085_RuntimeMethod_var;
extern const uint32_t Queryable_FirstOrDefault_TisRuntimeObject_m1000070085_MetadataUsageId;
extern const RuntimeMethod* Queryable_Last_TisRuntimeObject_m2960285214_RuntimeMethod_var;
extern const uint32_t Queryable_Last_TisRuntimeObject_m2960285214_MetadataUsageId;
extern const RuntimeMethod* Queryable_Last_TisRuntimeObject_m3573577223_RuntimeMethod_var;
extern const uint32_t Queryable_Last_TisRuntimeObject_m3573577223_MetadataUsageId;
extern const RuntimeMethod* Queryable_LastOrDefault_TisRuntimeObject_m1794473812_RuntimeMethod_var;
extern const uint32_t Queryable_LastOrDefault_TisRuntimeObject_m1794473812_MetadataUsageId;
extern const RuntimeMethod* Queryable_LastOrDefault_TisRuntimeObject_m450969091_RuntimeMethod_var;
extern const uint32_t Queryable_LastOrDefault_TisRuntimeObject_m450969091_MetadataUsageId;
extern const RuntimeMethod* Queryable_Max_TisRuntimeObject_m1625076762_RuntimeMethod_var;
extern const uint32_t Queryable_Max_TisRuntimeObject_m1625076762_MetadataUsageId;
extern const RuntimeMethod* Queryable_Min_TisRuntimeObject_m4205125250_RuntimeMethod_var;
extern const uint32_t Queryable_Min_TisRuntimeObject_m4205125250_MetadataUsageId;
extern const RuntimeMethod* Queryable_Single_TisRuntimeObject_m2971268297_RuntimeMethod_var;
extern const uint32_t Queryable_Single_TisRuntimeObject_m2971268297_MetadataUsageId;
extern const RuntimeMethod* Queryable_Single_TisRuntimeObject_m401722898_RuntimeMethod_var;
extern const uint32_t Queryable_Single_TisRuntimeObject_m401722898_MetadataUsageId;
extern const RuntimeMethod* Queryable_SingleOrDefault_TisRuntimeObject_m508682141_RuntimeMethod_var;
extern const uint32_t Queryable_SingleOrDefault_TisRuntimeObject_m508682141_MetadataUsageId;
extern const RuntimeMethod* Queryable_SingleOrDefault_TisRuntimeObject_m554078806_RuntimeMethod_var;
extern const uint32_t Queryable_SingleOrDefault_TisRuntimeObject_m554078806_MetadataUsageId;
extern const RuntimeMethod* Enumerable_Iterate_TisDecimal_t2948259380_TisDecimal_t2948259380_m1713962709_RuntimeMethod_var;
extern const uint32_t Enumerable_Iterate_TisDecimal_t2948259380_TisDecimal_t2948259380_m1713962709_MetadataUsageId;
extern const RuntimeMethod* Enumerable_Iterate_TisDouble_t594665363_TisDouble_t594665363_m766260074_RuntimeMethod_var;
extern const uint32_t Enumerable_Iterate_TisDouble_t594665363_TisDouble_t594665363_m766260074_MetadataUsageId;
extern const RuntimeMethod* Enumerable_Iterate_TisInt32_t2950945753_TisInt32_t2950945753_m127518401_RuntimeMethod_var;
extern const uint32_t Enumerable_Iterate_TisInt32_t2950945753_TisInt32_t2950945753_m127518401_MetadataUsageId;
extern const RuntimeMethod* Enumerable_Iterate_TisInt64_t3736567304_TisInt64_t3736567304_m4193806083_RuntimeMethod_var;
extern const uint32_t Enumerable_Iterate_TisInt64_t3736567304_TisInt64_t3736567304_m4193806083_MetadataUsageId;
extern const RuntimeMethod* Enumerable_Iterate_TisRuntimeObject_TisDecimal_t2948259380_m3609497430_RuntimeMethod_var;
extern const uint32_t Enumerable_Iterate_TisRuntimeObject_TisDecimal_t2948259380_m3609497430_MetadataUsageId;
extern const RuntimeMethod* Enumerable_Iterate_TisRuntimeObject_TisDouble_t594665363_m1462891860_RuntimeMethod_var;
extern const uint32_t Enumerable_Iterate_TisRuntimeObject_TisDouble_t594665363_m1462891860_MetadataUsageId;
extern const RuntimeMethod* Enumerable_Iterate_TisRuntimeObject_TisInt32_t2950945753_m240499088_RuntimeMethod_var;
extern const uint32_t Enumerable_Iterate_TisRuntimeObject_TisInt32_t2950945753_m240499088_MetadataUsageId;
extern const RuntimeMethod* Enumerable_Iterate_TisRuntimeObject_TisInt64_t3736567304_m1052674644_RuntimeMethod_var;
extern const uint32_t Enumerable_Iterate_TisRuntimeObject_TisInt64_t3736567304_m1052674644_MetadataUsageId;
extern const RuntimeMethod* Enumerable_Iterate_TisRuntimeObject_TisRuntimeObject_m1507113580_RuntimeMethod_var;
extern const uint32_t Enumerable_Iterate_TisRuntimeObject_TisRuntimeObject_m1507113580_MetadataUsageId;
extern const RuntimeMethod* Enumerable_Iterate_TisRuntimeObject_TisSingle_t1397266774_m1074757268_RuntimeMethod_var;
extern const uint32_t Enumerable_Iterate_TisRuntimeObject_TisSingle_t1397266774_m1074757268_MetadataUsageId;
extern const RuntimeMethod* Enumerable_Iterate_TisSingle_t1397266774_TisSingle_t1397266774_m1827094913_RuntimeMethod_var;
extern const uint32_t Enumerable_Iterate_TisSingle_t1397266774_TisSingle_t1397266774_m1827094913_MetadataUsageId;
extern RuntimeClass* ExecuteEvents_t3484638744_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1_get_Item_m3022113929_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m3787308655_RuntimeMethod_var;
extern const uint32_t ExecuteEvents_ExecuteHierarchy_TisRuntimeObject_m3266560969_MetadataUsageId;
extern RuntimeClass* Object_t631007953_il2cpp_TypeInfo_var;
extern const uint32_t ExecuteEvents_GetEventHandler_TisRuntimeObject_m3687647312_MetadataUsageId;

struct TypeU5BU5D_t3940880105;
struct ExpressionU5BU5D_t2266720799;
struct ParameterExpressionU5BU5D_t2413162029;
struct KeyValuePair_2U5BU5D_t3014208436;
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
#ifndef COMPARER_1_T284893750_H
#define COMPARER_1_T284893750_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Comparer`1<System.Object>
struct  Comparer_1_t284893750  : public RuntimeObject
{
public:

public:
};

struct Comparer_1_t284893750_StaticFields
{
public:
	// System.Collections.Generic.Comparer`1<T> System.Collections.Generic.Comparer`1::_default
	Comparer_1_t284893750 * ____default_0;

public:
	inline static int32_t get_offset_of__default_0() { return static_cast<int32_t>(offsetof(Comparer_1_t284893750_StaticFields, ____default_0)); }
	inline Comparer_1_t284893750 * get__default_0() const { return ____default_0; }
	inline Comparer_1_t284893750 ** get_address_of__default_0() { return &____default_0; }
	inline void set__default_0(Comparer_1_t284893750 * value)
	{
		____default_0 = value;
		Il2CppCodeGenWriteBarrier((&____default_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPARER_1_T284893750_H
#ifndef U3CMINU3EC__ANONSTOREY2E_1_T2343074724_H
#define U3CMINU3EC__ANONSTOREY2E_1_T2343074724_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Enumerable/<Min>c__AnonStorey2E`1<System.Object>
struct  U3CMinU3Ec__AnonStorey2E_1_t2343074724  : public RuntimeObject
{
public:
	// System.Collections.Generic.Comparer`1<TSource> System.Linq.Enumerable/<Min>c__AnonStorey2E`1::comparer
	Comparer_1_t284893750 * ___comparer_0;

public:
	inline static int32_t get_offset_of_comparer_0() { return static_cast<int32_t>(offsetof(U3CMinU3Ec__AnonStorey2E_1_t2343074724, ___comparer_0)); }
	inline Comparer_1_t284893750 * get_comparer_0() const { return ___comparer_0; }
	inline Comparer_1_t284893750 ** get_address_of_comparer_0() { return &___comparer_0; }
	inline void set_comparer_0(Comparer_1_t284893750 * value)
	{
		___comparer_0 = value;
		Il2CppCodeGenWriteBarrier((&___comparer_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMINU3EC__ANONSTOREY2E_1_T2343074724_H
#ifndef LIST_1_T2319452671_H
#define LIST_1_T2319452671_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>
struct  List_1_t2319452671  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	KeyValuePair_2U5BU5D_t3014208436* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t2319452671, ____items_1)); }
	inline KeyValuePair_2U5BU5D_t3014208436* get__items_1() const { return ____items_1; }
	inline KeyValuePair_2U5BU5D_t3014208436** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(KeyValuePair_2U5BU5D_t3014208436* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t2319452671, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t2319452671, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t2319452671_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	KeyValuePair_2U5BU5D_t3014208436* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t2319452671_StaticFields, ___EmptyArray_4)); }
	inline KeyValuePair_2U5BU5D_t3014208436* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline KeyValuePair_2U5BU5D_t3014208436** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(KeyValuePair_2U5BU5D_t3014208436* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T2319452671_H
#ifndef EXCEPTION_T_H
#define EXCEPTION_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.IntPtr[] System.Exception::trace_ips
	IntPtrU5BU5D_t4013366056* ___trace_ips_0;
	// System.Exception System.Exception::inner_exception
	Exception_t * ___inner_exception_1;
	// System.String System.Exception::message
	String_t* ___message_2;
	// System.String System.Exception::help_link
	String_t* ___help_link_3;
	// System.String System.Exception::class_name
	String_t* ___class_name_4;
	// System.String System.Exception::stack_trace
	String_t* ___stack_trace_5;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_6;
	// System.Int32 System.Exception::remote_stack_index
	int32_t ___remote_stack_index_7;
	// System.Int32 System.Exception::hresult
	int32_t ___hresult_8;
	// System.String System.Exception::source
	String_t* ___source_9;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_10;

public:
	inline static int32_t get_offset_of_trace_ips_0() { return static_cast<int32_t>(offsetof(Exception_t, ___trace_ips_0)); }
	inline IntPtrU5BU5D_t4013366056* get_trace_ips_0() const { return ___trace_ips_0; }
	inline IntPtrU5BU5D_t4013366056** get_address_of_trace_ips_0() { return &___trace_ips_0; }
	inline void set_trace_ips_0(IntPtrU5BU5D_t4013366056* value)
	{
		___trace_ips_0 = value;
		Il2CppCodeGenWriteBarrier((&___trace_ips_0), value);
	}

	inline static int32_t get_offset_of_inner_exception_1() { return static_cast<int32_t>(offsetof(Exception_t, ___inner_exception_1)); }
	inline Exception_t * get_inner_exception_1() const { return ___inner_exception_1; }
	inline Exception_t ** get_address_of_inner_exception_1() { return &___inner_exception_1; }
	inline void set_inner_exception_1(Exception_t * value)
	{
		___inner_exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___inner_exception_1), value);
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(Exception_t, ___message_2)); }
	inline String_t* get_message_2() const { return ___message_2; }
	inline String_t** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(String_t* value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier((&___message_2), value);
	}

	inline static int32_t get_offset_of_help_link_3() { return static_cast<int32_t>(offsetof(Exception_t, ___help_link_3)); }
	inline String_t* get_help_link_3() const { return ___help_link_3; }
	inline String_t** get_address_of_help_link_3() { return &___help_link_3; }
	inline void set_help_link_3(String_t* value)
	{
		___help_link_3 = value;
		Il2CppCodeGenWriteBarrier((&___help_link_3), value);
	}

	inline static int32_t get_offset_of_class_name_4() { return static_cast<int32_t>(offsetof(Exception_t, ___class_name_4)); }
	inline String_t* get_class_name_4() const { return ___class_name_4; }
	inline String_t** get_address_of_class_name_4() { return &___class_name_4; }
	inline void set_class_name_4(String_t* value)
	{
		___class_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___class_name_4), value);
	}

	inline static int32_t get_offset_of_stack_trace_5() { return static_cast<int32_t>(offsetof(Exception_t, ___stack_trace_5)); }
	inline String_t* get_stack_trace_5() const { return ___stack_trace_5; }
	inline String_t** get_address_of_stack_trace_5() { return &___stack_trace_5; }
	inline void set_stack_trace_5(String_t* value)
	{
		___stack_trace_5 = value;
		Il2CppCodeGenWriteBarrier((&___stack_trace_5), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_6() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_6)); }
	inline String_t* get__remoteStackTraceString_6() const { return ____remoteStackTraceString_6; }
	inline String_t** get_address_of__remoteStackTraceString_6() { return &____remoteStackTraceString_6; }
	inline void set__remoteStackTraceString_6(String_t* value)
	{
		____remoteStackTraceString_6 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_6), value);
	}

	inline static int32_t get_offset_of_remote_stack_index_7() { return static_cast<int32_t>(offsetof(Exception_t, ___remote_stack_index_7)); }
	inline int32_t get_remote_stack_index_7() const { return ___remote_stack_index_7; }
	inline int32_t* get_address_of_remote_stack_index_7() { return &___remote_stack_index_7; }
	inline void set_remote_stack_index_7(int32_t value)
	{
		___remote_stack_index_7 = value;
	}

	inline static int32_t get_offset_of_hresult_8() { return static_cast<int32_t>(offsetof(Exception_t, ___hresult_8)); }
	inline int32_t get_hresult_8() const { return ___hresult_8; }
	inline int32_t* get_address_of_hresult_8() { return &___hresult_8; }
	inline void set_hresult_8(int32_t value)
	{
		___hresult_8 = value;
	}

	inline static int32_t get_offset_of_source_9() { return static_cast<int32_t>(offsetof(Exception_t, ___source_9)); }
	inline String_t* get_source_9() const { return ___source_9; }
	inline String_t** get_address_of_source_9() { return &___source_9; }
	inline void set_source_9(String_t* value)
	{
		___source_9 = value;
		Il2CppCodeGenWriteBarrier((&___source_9), value);
	}

	inline static int32_t get_offset_of__data_10() { return static_cast<int32_t>(offsetof(Exception_t, ____data_10)); }
	inline RuntimeObject* get__data_10() const { return ____data_10; }
	inline RuntimeObject** get_address_of__data_10() { return &____data_10; }
	inline void set__data_10(RuntimeObject* value)
	{
		____data_10 = value;
		Il2CppCodeGenWriteBarrier((&____data_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXCEPTION_T_H
#ifndef U3CMAXU3EC__ANONSTOREY28_1_T1231863791_H
#define U3CMAXU3EC__ANONSTOREY28_1_T1231863791_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Enumerable/<Max>c__AnonStorey28`1<System.Object>
struct  U3CMaxU3Ec__AnonStorey28_1_t1231863791  : public RuntimeObject
{
public:
	// System.Collections.Generic.Comparer`1<TSource> System.Linq.Enumerable/<Max>c__AnonStorey28`1::comparer
	Comparer_1_t284893750 * ___comparer_0;

public:
	inline static int32_t get_offset_of_comparer_0() { return static_cast<int32_t>(offsetof(U3CMaxU3Ec__AnonStorey28_1_t1231863791, ___comparer_0)); }
	inline Comparer_1_t284893750 * get_comparer_0() const { return ___comparer_0; }
	inline Comparer_1_t284893750 ** get_address_of_comparer_0() { return &___comparer_0; }
	inline void set_comparer_0(Comparer_1_t284893750 * value)
	{
		___comparer_0 = value;
		Il2CppCodeGenWriteBarrier((&___comparer_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMAXU3EC__ANONSTOREY28_1_T1231863791_H
#ifndef QUERYABLEENUMERABLE_1_T2952042478_H
#define QUERYABLEENUMERABLE_1_T2952042478_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.QueryableEnumerable`1<System.Object>
struct  QueryableEnumerable_1_t2952042478  : public RuntimeObject
{
public:
	// System.Linq.Expressions.Expression System.Linq.QueryableEnumerable`1::expression
	Expression_t1588164026 * ___expression_0;
	// System.Collections.Generic.IEnumerable`1<TElement> System.Linq.QueryableEnumerable`1::enumerable
	RuntimeObject* ___enumerable_1;

public:
	inline static int32_t get_offset_of_expression_0() { return static_cast<int32_t>(offsetof(QueryableEnumerable_1_t2952042478, ___expression_0)); }
	inline Expression_t1588164026 * get_expression_0() const { return ___expression_0; }
	inline Expression_t1588164026 ** get_address_of_expression_0() { return &___expression_0; }
	inline void set_expression_0(Expression_t1588164026 * value)
	{
		___expression_0 = value;
		Il2CppCodeGenWriteBarrier((&___expression_0), value);
	}

	inline static int32_t get_offset_of_enumerable_1() { return static_cast<int32_t>(offsetof(QueryableEnumerable_1_t2952042478, ___enumerable_1)); }
	inline RuntimeObject* get_enumerable_1() const { return ___enumerable_1; }
	inline RuntimeObject** get_address_of_enumerable_1() { return &___enumerable_1; }
	inline void set_enumerable_1(RuntimeObject* value)
	{
		___enumerable_1 = value;
		Il2CppCodeGenWriteBarrier((&___enumerable_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUERYABLEENUMERABLE_1_T2952042478_H
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
#ifndef MEMBERINFO_T_H
#define MEMBERINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERINFO_T_H
#ifndef ABSTRACTEVENTDATA_T4171500731_H
#define ABSTRACTEVENTDATA_T4171500731_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.AbstractEventData
struct  AbstractEventData_t4171500731  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;

public:
	inline static int32_t get_offset_of_m_Used_0() { return static_cast<int32_t>(offsetof(AbstractEventData_t4171500731, ___m_Used_0)); }
	inline bool get_m_Used_0() const { return ___m_Used_0; }
	inline bool* get_address_of_m_Used_0() { return &___m_Used_0; }
	inline void set_m_Used_0(bool value)
	{
		___m_Used_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ABSTRACTEVENTDATA_T4171500731_H
#ifndef LIST_1_T257213610_H
#define LIST_1_T257213610_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.Object>
struct  List_1_t257213610  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t2843939325* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t257213610, ____items_1)); }
	inline ObjectU5BU5D_t2843939325* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_t2843939325** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_t2843939325* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t257213610, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t257213610, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t257213610_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	ObjectU5BU5D_t2843939325* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t257213610_StaticFields, ___EmptyArray_4)); }
	inline ObjectU5BU5D_t2843939325* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline ObjectU5BU5D_t2843939325** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(ObjectU5BU5D_t2843939325* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T257213610_H
#ifndef EXECUTEEVENTS_T3484638744_H
#define EXECUTEEVENTS_T3484638744_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.ExecuteEvents
struct  ExecuteEvents_t3484638744  : public RuntimeObject
{
public:

public:
};

struct ExecuteEvents_t3484638744_StaticFields
{
public:
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerEnterHandler> UnityEngine.EventSystems.ExecuteEvents::s_PointerEnterHandler
	EventFunction_1_t3995630009 * ___s_PointerEnterHandler_0;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerExitHandler> UnityEngine.EventSystems.ExecuteEvents::s_PointerExitHandler
	EventFunction_1_t2867327688 * ___s_PointerExitHandler_1;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerDownHandler> UnityEngine.EventSystems.ExecuteEvents::s_PointerDownHandler
	EventFunction_1_t64614563 * ___s_PointerDownHandler_2;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerUpHandler> UnityEngine.EventSystems.ExecuteEvents::s_PointerUpHandler
	EventFunction_1_t3256600500 * ___s_PointerUpHandler_3;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerClickHandler> UnityEngine.EventSystems.ExecuteEvents::s_PointerClickHandler
	EventFunction_1_t3111972472 * ___s_PointerClickHandler_4;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IInitializePotentialDragHandler> UnityEngine.EventSystems.ExecuteEvents::s_InitializePotentialDragHandler
	EventFunction_1_t3587542510 * ___s_InitializePotentialDragHandler_5;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IBeginDragHandler> UnityEngine.EventSystems.ExecuteEvents::s_BeginDragHandler
	EventFunction_1_t1977848392 * ___s_BeginDragHandler_6;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDragHandler> UnityEngine.EventSystems.ExecuteEvents::s_DragHandler
	EventFunction_1_t972960537 * ___s_DragHandler_7;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IEndDragHandler> UnityEngine.EventSystems.ExecuteEvents::s_EndDragHandler
	EventFunction_1_t3277009892 * ___s_EndDragHandler_8;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDropHandler> UnityEngine.EventSystems.ExecuteEvents::s_DropHandler
	EventFunction_1_t2311673543 * ___s_DropHandler_9;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IScrollHandler> UnityEngine.EventSystems.ExecuteEvents::s_ScrollHandler
	EventFunction_1_t2886331738 * ___s_ScrollHandler_10;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IUpdateSelectedHandler> UnityEngine.EventSystems.ExecuteEvents::s_UpdateSelectedHandler
	EventFunction_1_t2950825503 * ___s_UpdateSelectedHandler_11;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ISelectHandler> UnityEngine.EventSystems.ExecuteEvents::s_SelectHandler
	EventFunction_1_t955952873 * ___s_SelectHandler_12;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDeselectHandler> UnityEngine.EventSystems.ExecuteEvents::s_DeselectHandler
	EventFunction_1_t3373214253 * ___s_DeselectHandler_13;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IMoveHandler> UnityEngine.EventSystems.ExecuteEvents::s_MoveHandler
	EventFunction_1_t3912835512 * ___s_MoveHandler_14;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ISubmitHandler> UnityEngine.EventSystems.ExecuteEvents::s_SubmitHandler
	EventFunction_1_t1475332338 * ___s_SubmitHandler_15;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ICancelHandler> UnityEngine.EventSystems.ExecuteEvents::s_CancelHandler
	EventFunction_1_t2658898854 * ___s_CancelHandler_16;
	// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>> UnityEngine.EventSystems.ExecuteEvents::s_HandlerListPool
	ObjectPool_1_t231414508 * ___s_HandlerListPool_17;
	// System.Collections.Generic.List`1<UnityEngine.Transform> UnityEngine.EventSystems.ExecuteEvents::s_InternalTransformList
	List_1_t777473367 * ___s_InternalTransformList_18;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerEnterHandler> UnityEngine.EventSystems.ExecuteEvents::<>f__mg$cache0
	EventFunction_1_t3995630009 * ___U3CU3Ef__mgU24cache0_19;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerExitHandler> UnityEngine.EventSystems.ExecuteEvents::<>f__mg$cache1
	EventFunction_1_t2867327688 * ___U3CU3Ef__mgU24cache1_20;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerDownHandler> UnityEngine.EventSystems.ExecuteEvents::<>f__mg$cache2
	EventFunction_1_t64614563 * ___U3CU3Ef__mgU24cache2_21;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerUpHandler> UnityEngine.EventSystems.ExecuteEvents::<>f__mg$cache3
	EventFunction_1_t3256600500 * ___U3CU3Ef__mgU24cache3_22;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerClickHandler> UnityEngine.EventSystems.ExecuteEvents::<>f__mg$cache4
	EventFunction_1_t3111972472 * ___U3CU3Ef__mgU24cache4_23;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IInitializePotentialDragHandler> UnityEngine.EventSystems.ExecuteEvents::<>f__mg$cache5
	EventFunction_1_t3587542510 * ___U3CU3Ef__mgU24cache5_24;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IBeginDragHandler> UnityEngine.EventSystems.ExecuteEvents::<>f__mg$cache6
	EventFunction_1_t1977848392 * ___U3CU3Ef__mgU24cache6_25;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDragHandler> UnityEngine.EventSystems.ExecuteEvents::<>f__mg$cache7
	EventFunction_1_t972960537 * ___U3CU3Ef__mgU24cache7_26;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IEndDragHandler> UnityEngine.EventSystems.ExecuteEvents::<>f__mg$cache8
	EventFunction_1_t3277009892 * ___U3CU3Ef__mgU24cache8_27;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDropHandler> UnityEngine.EventSystems.ExecuteEvents::<>f__mg$cache9
	EventFunction_1_t2311673543 * ___U3CU3Ef__mgU24cache9_28;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IScrollHandler> UnityEngine.EventSystems.ExecuteEvents::<>f__mg$cacheA
	EventFunction_1_t2886331738 * ___U3CU3Ef__mgU24cacheA_29;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IUpdateSelectedHandler> UnityEngine.EventSystems.ExecuteEvents::<>f__mg$cacheB
	EventFunction_1_t2950825503 * ___U3CU3Ef__mgU24cacheB_30;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ISelectHandler> UnityEngine.EventSystems.ExecuteEvents::<>f__mg$cacheC
	EventFunction_1_t955952873 * ___U3CU3Ef__mgU24cacheC_31;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDeselectHandler> UnityEngine.EventSystems.ExecuteEvents::<>f__mg$cacheD
	EventFunction_1_t3373214253 * ___U3CU3Ef__mgU24cacheD_32;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IMoveHandler> UnityEngine.EventSystems.ExecuteEvents::<>f__mg$cacheE
	EventFunction_1_t3912835512 * ___U3CU3Ef__mgU24cacheE_33;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ISubmitHandler> UnityEngine.EventSystems.ExecuteEvents::<>f__mg$cacheF
	EventFunction_1_t1475332338 * ___U3CU3Ef__mgU24cacheF_34;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ICancelHandler> UnityEngine.EventSystems.ExecuteEvents::<>f__mg$cache10
	EventFunction_1_t2658898854 * ___U3CU3Ef__mgU24cache10_35;

public:
	inline static int32_t get_offset_of_s_PointerEnterHandler_0() { return static_cast<int32_t>(offsetof(ExecuteEvents_t3484638744_StaticFields, ___s_PointerEnterHandler_0)); }
	inline EventFunction_1_t3995630009 * get_s_PointerEnterHandler_0() const { return ___s_PointerEnterHandler_0; }
	inline EventFunction_1_t3995630009 ** get_address_of_s_PointerEnterHandler_0() { return &___s_PointerEnterHandler_0; }
	inline void set_s_PointerEnterHandler_0(EventFunction_1_t3995630009 * value)
	{
		___s_PointerEnterHandler_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_PointerEnterHandler_0), value);
	}

	inline static int32_t get_offset_of_s_PointerExitHandler_1() { return static_cast<int32_t>(offsetof(ExecuteEvents_t3484638744_StaticFields, ___s_PointerExitHandler_1)); }
	inline EventFunction_1_t2867327688 * get_s_PointerExitHandler_1() const { return ___s_PointerExitHandler_1; }
	inline EventFunction_1_t2867327688 ** get_address_of_s_PointerExitHandler_1() { return &___s_PointerExitHandler_1; }
	inline void set_s_PointerExitHandler_1(EventFunction_1_t2867327688 * value)
	{
		___s_PointerExitHandler_1 = value;
		Il2CppCodeGenWriteBarrier((&___s_PointerExitHandler_1), value);
	}

	inline static int32_t get_offset_of_s_PointerDownHandler_2() { return static_cast<int32_t>(offsetof(ExecuteEvents_t3484638744_StaticFields, ___s_PointerDownHandler_2)); }
	inline EventFunction_1_t64614563 * get_s_PointerDownHandler_2() const { return ___s_PointerDownHandler_2; }
	inline EventFunction_1_t64614563 ** get_address_of_s_PointerDownHandler_2() { return &___s_PointerDownHandler_2; }
	inline void set_s_PointerDownHandler_2(EventFunction_1_t64614563 * value)
	{
		___s_PointerDownHandler_2 = value;
		Il2CppCodeGenWriteBarrier((&___s_PointerDownHandler_2), value);
	}

	inline static int32_t get_offset_of_s_PointerUpHandler_3() { return static_cast<int32_t>(offsetof(ExecuteEvents_t3484638744_StaticFields, ___s_PointerUpHandler_3)); }
	inline EventFunction_1_t3256600500 * get_s_PointerUpHandler_3() const { return ___s_PointerUpHandler_3; }
	inline EventFunction_1_t3256600500 ** get_address_of_s_PointerUpHandler_3() { return &___s_PointerUpHandler_3; }
	inline void set_s_PointerUpHandler_3(EventFunction_1_t3256600500 * value)
	{
		___s_PointerUpHandler_3 = value;
		Il2CppCodeGenWriteBarrier((&___s_PointerUpHandler_3), value);
	}

	inline static int32_t get_offset_of_s_PointerClickHandler_4() { return static_cast<int32_t>(offsetof(ExecuteEvents_t3484638744_StaticFields, ___s_PointerClickHandler_4)); }
	inline EventFunction_1_t3111972472 * get_s_PointerClickHandler_4() const { return ___s_PointerClickHandler_4; }
	inline EventFunction_1_t3111972472 ** get_address_of_s_PointerClickHandler_4() { return &___s_PointerClickHandler_4; }
	inline void set_s_PointerClickHandler_4(EventFunction_1_t3111972472 * value)
	{
		___s_PointerClickHandler_4 = value;
		Il2CppCodeGenWriteBarrier((&___s_PointerClickHandler_4), value);
	}

	inline static int32_t get_offset_of_s_InitializePotentialDragHandler_5() { return static_cast<int32_t>(offsetof(ExecuteEvents_t3484638744_StaticFields, ___s_InitializePotentialDragHandler_5)); }
	inline EventFunction_1_t3587542510 * get_s_InitializePotentialDragHandler_5() const { return ___s_InitializePotentialDragHandler_5; }
	inline EventFunction_1_t3587542510 ** get_address_of_s_InitializePotentialDragHandler_5() { return &___s_InitializePotentialDragHandler_5; }
	inline void set_s_InitializePotentialDragHandler_5(EventFunction_1_t3587542510 * value)
	{
		___s_InitializePotentialDragHandler_5 = value;
		Il2CppCodeGenWriteBarrier((&___s_InitializePotentialDragHandler_5), value);
	}

	inline static int32_t get_offset_of_s_BeginDragHandler_6() { return static_cast<int32_t>(offsetof(ExecuteEvents_t3484638744_StaticFields, ___s_BeginDragHandler_6)); }
	inline EventFunction_1_t1977848392 * get_s_BeginDragHandler_6() const { return ___s_BeginDragHandler_6; }
	inline EventFunction_1_t1977848392 ** get_address_of_s_BeginDragHandler_6() { return &___s_BeginDragHandler_6; }
	inline void set_s_BeginDragHandler_6(EventFunction_1_t1977848392 * value)
	{
		___s_BeginDragHandler_6 = value;
		Il2CppCodeGenWriteBarrier((&___s_BeginDragHandler_6), value);
	}

	inline static int32_t get_offset_of_s_DragHandler_7() { return static_cast<int32_t>(offsetof(ExecuteEvents_t3484638744_StaticFields, ___s_DragHandler_7)); }
	inline EventFunction_1_t972960537 * get_s_DragHandler_7() const { return ___s_DragHandler_7; }
	inline EventFunction_1_t972960537 ** get_address_of_s_DragHandler_7() { return &___s_DragHandler_7; }
	inline void set_s_DragHandler_7(EventFunction_1_t972960537 * value)
	{
		___s_DragHandler_7 = value;
		Il2CppCodeGenWriteBarrier((&___s_DragHandler_7), value);
	}

	inline static int32_t get_offset_of_s_EndDragHandler_8() { return static_cast<int32_t>(offsetof(ExecuteEvents_t3484638744_StaticFields, ___s_EndDragHandler_8)); }
	inline EventFunction_1_t3277009892 * get_s_EndDragHandler_8() const { return ___s_EndDragHandler_8; }
	inline EventFunction_1_t3277009892 ** get_address_of_s_EndDragHandler_8() { return &___s_EndDragHandler_8; }
	inline void set_s_EndDragHandler_8(EventFunction_1_t3277009892 * value)
	{
		___s_EndDragHandler_8 = value;
		Il2CppCodeGenWriteBarrier((&___s_EndDragHandler_8), value);
	}

	inline static int32_t get_offset_of_s_DropHandler_9() { return static_cast<int32_t>(offsetof(ExecuteEvents_t3484638744_StaticFields, ___s_DropHandler_9)); }
	inline EventFunction_1_t2311673543 * get_s_DropHandler_9() const { return ___s_DropHandler_9; }
	inline EventFunction_1_t2311673543 ** get_address_of_s_DropHandler_9() { return &___s_DropHandler_9; }
	inline void set_s_DropHandler_9(EventFunction_1_t2311673543 * value)
	{
		___s_DropHandler_9 = value;
		Il2CppCodeGenWriteBarrier((&___s_DropHandler_9), value);
	}

	inline static int32_t get_offset_of_s_ScrollHandler_10() { return static_cast<int32_t>(offsetof(ExecuteEvents_t3484638744_StaticFields, ___s_ScrollHandler_10)); }
	inline EventFunction_1_t2886331738 * get_s_ScrollHandler_10() const { return ___s_ScrollHandler_10; }
	inline EventFunction_1_t2886331738 ** get_address_of_s_ScrollHandler_10() { return &___s_ScrollHandler_10; }
	inline void set_s_ScrollHandler_10(EventFunction_1_t2886331738 * value)
	{
		___s_ScrollHandler_10 = value;
		Il2CppCodeGenWriteBarrier((&___s_ScrollHandler_10), value);
	}

	inline static int32_t get_offset_of_s_UpdateSelectedHandler_11() { return static_cast<int32_t>(offsetof(ExecuteEvents_t3484638744_StaticFields, ___s_UpdateSelectedHandler_11)); }
	inline EventFunction_1_t2950825503 * get_s_UpdateSelectedHandler_11() const { return ___s_UpdateSelectedHandler_11; }
	inline EventFunction_1_t2950825503 ** get_address_of_s_UpdateSelectedHandler_11() { return &___s_UpdateSelectedHandler_11; }
	inline void set_s_UpdateSelectedHandler_11(EventFunction_1_t2950825503 * value)
	{
		___s_UpdateSelectedHandler_11 = value;
		Il2CppCodeGenWriteBarrier((&___s_UpdateSelectedHandler_11), value);
	}

	inline static int32_t get_offset_of_s_SelectHandler_12() { return static_cast<int32_t>(offsetof(ExecuteEvents_t3484638744_StaticFields, ___s_SelectHandler_12)); }
	inline EventFunction_1_t955952873 * get_s_SelectHandler_12() const { return ___s_SelectHandler_12; }
	inline EventFunction_1_t955952873 ** get_address_of_s_SelectHandler_12() { return &___s_SelectHandler_12; }
	inline void set_s_SelectHandler_12(EventFunction_1_t955952873 * value)
	{
		___s_SelectHandler_12 = value;
		Il2CppCodeGenWriteBarrier((&___s_SelectHandler_12), value);
	}

	inline static int32_t get_offset_of_s_DeselectHandler_13() { return static_cast<int32_t>(offsetof(ExecuteEvents_t3484638744_StaticFields, ___s_DeselectHandler_13)); }
	inline EventFunction_1_t3373214253 * get_s_DeselectHandler_13() const { return ___s_DeselectHandler_13; }
	inline EventFunction_1_t3373214253 ** get_address_of_s_DeselectHandler_13() { return &___s_DeselectHandler_13; }
	inline void set_s_DeselectHandler_13(EventFunction_1_t3373214253 * value)
	{
		___s_DeselectHandler_13 = value;
		Il2CppCodeGenWriteBarrier((&___s_DeselectHandler_13), value);
	}

	inline static int32_t get_offset_of_s_MoveHandler_14() { return static_cast<int32_t>(offsetof(ExecuteEvents_t3484638744_StaticFields, ___s_MoveHandler_14)); }
	inline EventFunction_1_t3912835512 * get_s_MoveHandler_14() const { return ___s_MoveHandler_14; }
	inline EventFunction_1_t3912835512 ** get_address_of_s_MoveHandler_14() { return &___s_MoveHandler_14; }
	inline void set_s_MoveHandler_14(EventFunction_1_t3912835512 * value)
	{
		___s_MoveHandler_14 = value;
		Il2CppCodeGenWriteBarrier((&___s_MoveHandler_14), value);
	}

	inline static int32_t get_offset_of_s_SubmitHandler_15() { return static_cast<int32_t>(offsetof(ExecuteEvents_t3484638744_StaticFields, ___s_SubmitHandler_15)); }
	inline EventFunction_1_t1475332338 * get_s_SubmitHandler_15() const { return ___s_SubmitHandler_15; }
	inline EventFunction_1_t1475332338 ** get_address_of_s_SubmitHandler_15() { return &___s_SubmitHandler_15; }
	inline void set_s_SubmitHandler_15(EventFunction_1_t1475332338 * value)
	{
		___s_SubmitHandler_15 = value;
		Il2CppCodeGenWriteBarrier((&___s_SubmitHandler_15), value);
	}

	inline static int32_t get_offset_of_s_CancelHandler_16() { return static_cast<int32_t>(offsetof(ExecuteEvents_t3484638744_StaticFields, ___s_CancelHandler_16)); }
	inline EventFunction_1_t2658898854 * get_s_CancelHandler_16() const { return ___s_CancelHandler_16; }
	inline EventFunction_1_t2658898854 ** get_address_of_s_CancelHandler_16() { return &___s_CancelHandler_16; }
	inline void set_s_CancelHandler_16(EventFunction_1_t2658898854 * value)
	{
		___s_CancelHandler_16 = value;
		Il2CppCodeGenWriteBarrier((&___s_CancelHandler_16), value);
	}

	inline static int32_t get_offset_of_s_HandlerListPool_17() { return static_cast<int32_t>(offsetof(ExecuteEvents_t3484638744_StaticFields, ___s_HandlerListPool_17)); }
	inline ObjectPool_1_t231414508 * get_s_HandlerListPool_17() const { return ___s_HandlerListPool_17; }
	inline ObjectPool_1_t231414508 ** get_address_of_s_HandlerListPool_17() { return &___s_HandlerListPool_17; }
	inline void set_s_HandlerListPool_17(ObjectPool_1_t231414508 * value)
	{
		___s_HandlerListPool_17 = value;
		Il2CppCodeGenWriteBarrier((&___s_HandlerListPool_17), value);
	}

	inline static int32_t get_offset_of_s_InternalTransformList_18() { return static_cast<int32_t>(offsetof(ExecuteEvents_t3484638744_StaticFields, ___s_InternalTransformList_18)); }
	inline List_1_t777473367 * get_s_InternalTransformList_18() const { return ___s_InternalTransformList_18; }
	inline List_1_t777473367 ** get_address_of_s_InternalTransformList_18() { return &___s_InternalTransformList_18; }
	inline void set_s_InternalTransformList_18(List_1_t777473367 * value)
	{
		___s_InternalTransformList_18 = value;
		Il2CppCodeGenWriteBarrier((&___s_InternalTransformList_18), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_19() { return static_cast<int32_t>(offsetof(ExecuteEvents_t3484638744_StaticFields, ___U3CU3Ef__mgU24cache0_19)); }
	inline EventFunction_1_t3995630009 * get_U3CU3Ef__mgU24cache0_19() const { return ___U3CU3Ef__mgU24cache0_19; }
	inline EventFunction_1_t3995630009 ** get_address_of_U3CU3Ef__mgU24cache0_19() { return &___U3CU3Ef__mgU24cache0_19; }
	inline void set_U3CU3Ef__mgU24cache0_19(EventFunction_1_t3995630009 * value)
	{
		___U3CU3Ef__mgU24cache0_19 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache0_19), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache1_20() { return static_cast<int32_t>(offsetof(ExecuteEvents_t3484638744_StaticFields, ___U3CU3Ef__mgU24cache1_20)); }
	inline EventFunction_1_t2867327688 * get_U3CU3Ef__mgU24cache1_20() const { return ___U3CU3Ef__mgU24cache1_20; }
	inline EventFunction_1_t2867327688 ** get_address_of_U3CU3Ef__mgU24cache1_20() { return &___U3CU3Ef__mgU24cache1_20; }
	inline void set_U3CU3Ef__mgU24cache1_20(EventFunction_1_t2867327688 * value)
	{
		___U3CU3Ef__mgU24cache1_20 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache1_20), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache2_21() { return static_cast<int32_t>(offsetof(ExecuteEvents_t3484638744_StaticFields, ___U3CU3Ef__mgU24cache2_21)); }
	inline EventFunction_1_t64614563 * get_U3CU3Ef__mgU24cache2_21() const { return ___U3CU3Ef__mgU24cache2_21; }
	inline EventFunction_1_t64614563 ** get_address_of_U3CU3Ef__mgU24cache2_21() { return &___U3CU3Ef__mgU24cache2_21; }
	inline void set_U3CU3Ef__mgU24cache2_21(EventFunction_1_t64614563 * value)
	{
		___U3CU3Ef__mgU24cache2_21 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache2_21), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache3_22() { return static_cast<int32_t>(offsetof(ExecuteEvents_t3484638744_StaticFields, ___U3CU3Ef__mgU24cache3_22)); }
	inline EventFunction_1_t3256600500 * get_U3CU3Ef__mgU24cache3_22() const { return ___U3CU3Ef__mgU24cache3_22; }
	inline EventFunction_1_t3256600500 ** get_address_of_U3CU3Ef__mgU24cache3_22() { return &___U3CU3Ef__mgU24cache3_22; }
	inline void set_U3CU3Ef__mgU24cache3_22(EventFunction_1_t3256600500 * value)
	{
		___U3CU3Ef__mgU24cache3_22 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache3_22), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache4_23() { return static_cast<int32_t>(offsetof(ExecuteEvents_t3484638744_StaticFields, ___U3CU3Ef__mgU24cache4_23)); }
	inline EventFunction_1_t3111972472 * get_U3CU3Ef__mgU24cache4_23() const { return ___U3CU3Ef__mgU24cache4_23; }
	inline EventFunction_1_t3111972472 ** get_address_of_U3CU3Ef__mgU24cache4_23() { return &___U3CU3Ef__mgU24cache4_23; }
	inline void set_U3CU3Ef__mgU24cache4_23(EventFunction_1_t3111972472 * value)
	{
		___U3CU3Ef__mgU24cache4_23 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache4_23), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache5_24() { return static_cast<int32_t>(offsetof(ExecuteEvents_t3484638744_StaticFields, ___U3CU3Ef__mgU24cache5_24)); }
	inline EventFunction_1_t3587542510 * get_U3CU3Ef__mgU24cache5_24() const { return ___U3CU3Ef__mgU24cache5_24; }
	inline EventFunction_1_t3587542510 ** get_address_of_U3CU3Ef__mgU24cache5_24() { return &___U3CU3Ef__mgU24cache5_24; }
	inline void set_U3CU3Ef__mgU24cache5_24(EventFunction_1_t3587542510 * value)
	{
		___U3CU3Ef__mgU24cache5_24 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache5_24), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache6_25() { return static_cast<int32_t>(offsetof(ExecuteEvents_t3484638744_StaticFields, ___U3CU3Ef__mgU24cache6_25)); }
	inline EventFunction_1_t1977848392 * get_U3CU3Ef__mgU24cache6_25() const { return ___U3CU3Ef__mgU24cache6_25; }
	inline EventFunction_1_t1977848392 ** get_address_of_U3CU3Ef__mgU24cache6_25() { return &___U3CU3Ef__mgU24cache6_25; }
	inline void set_U3CU3Ef__mgU24cache6_25(EventFunction_1_t1977848392 * value)
	{
		___U3CU3Ef__mgU24cache6_25 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache6_25), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache7_26() { return static_cast<int32_t>(offsetof(ExecuteEvents_t3484638744_StaticFields, ___U3CU3Ef__mgU24cache7_26)); }
	inline EventFunction_1_t972960537 * get_U3CU3Ef__mgU24cache7_26() const { return ___U3CU3Ef__mgU24cache7_26; }
	inline EventFunction_1_t972960537 ** get_address_of_U3CU3Ef__mgU24cache7_26() { return &___U3CU3Ef__mgU24cache7_26; }
	inline void set_U3CU3Ef__mgU24cache7_26(EventFunction_1_t972960537 * value)
	{
		___U3CU3Ef__mgU24cache7_26 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache7_26), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache8_27() { return static_cast<int32_t>(offsetof(ExecuteEvents_t3484638744_StaticFields, ___U3CU3Ef__mgU24cache8_27)); }
	inline EventFunction_1_t3277009892 * get_U3CU3Ef__mgU24cache8_27() const { return ___U3CU3Ef__mgU24cache8_27; }
	inline EventFunction_1_t3277009892 ** get_address_of_U3CU3Ef__mgU24cache8_27() { return &___U3CU3Ef__mgU24cache8_27; }
	inline void set_U3CU3Ef__mgU24cache8_27(EventFunction_1_t3277009892 * value)
	{
		___U3CU3Ef__mgU24cache8_27 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache8_27), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache9_28() { return static_cast<int32_t>(offsetof(ExecuteEvents_t3484638744_StaticFields, ___U3CU3Ef__mgU24cache9_28)); }
	inline EventFunction_1_t2311673543 * get_U3CU3Ef__mgU24cache9_28() const { return ___U3CU3Ef__mgU24cache9_28; }
	inline EventFunction_1_t2311673543 ** get_address_of_U3CU3Ef__mgU24cache9_28() { return &___U3CU3Ef__mgU24cache9_28; }
	inline void set_U3CU3Ef__mgU24cache9_28(EventFunction_1_t2311673543 * value)
	{
		___U3CU3Ef__mgU24cache9_28 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache9_28), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cacheA_29() { return static_cast<int32_t>(offsetof(ExecuteEvents_t3484638744_StaticFields, ___U3CU3Ef__mgU24cacheA_29)); }
	inline EventFunction_1_t2886331738 * get_U3CU3Ef__mgU24cacheA_29() const { return ___U3CU3Ef__mgU24cacheA_29; }
	inline EventFunction_1_t2886331738 ** get_address_of_U3CU3Ef__mgU24cacheA_29() { return &___U3CU3Ef__mgU24cacheA_29; }
	inline void set_U3CU3Ef__mgU24cacheA_29(EventFunction_1_t2886331738 * value)
	{
		___U3CU3Ef__mgU24cacheA_29 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cacheA_29), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cacheB_30() { return static_cast<int32_t>(offsetof(ExecuteEvents_t3484638744_StaticFields, ___U3CU3Ef__mgU24cacheB_30)); }
	inline EventFunction_1_t2950825503 * get_U3CU3Ef__mgU24cacheB_30() const { return ___U3CU3Ef__mgU24cacheB_30; }
	inline EventFunction_1_t2950825503 ** get_address_of_U3CU3Ef__mgU24cacheB_30() { return &___U3CU3Ef__mgU24cacheB_30; }
	inline void set_U3CU3Ef__mgU24cacheB_30(EventFunction_1_t2950825503 * value)
	{
		___U3CU3Ef__mgU24cacheB_30 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cacheB_30), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cacheC_31() { return static_cast<int32_t>(offsetof(ExecuteEvents_t3484638744_StaticFields, ___U3CU3Ef__mgU24cacheC_31)); }
	inline EventFunction_1_t955952873 * get_U3CU3Ef__mgU24cacheC_31() const { return ___U3CU3Ef__mgU24cacheC_31; }
	inline EventFunction_1_t955952873 ** get_address_of_U3CU3Ef__mgU24cacheC_31() { return &___U3CU3Ef__mgU24cacheC_31; }
	inline void set_U3CU3Ef__mgU24cacheC_31(EventFunction_1_t955952873 * value)
	{
		___U3CU3Ef__mgU24cacheC_31 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cacheC_31), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cacheD_32() { return static_cast<int32_t>(offsetof(ExecuteEvents_t3484638744_StaticFields, ___U3CU3Ef__mgU24cacheD_32)); }
	inline EventFunction_1_t3373214253 * get_U3CU3Ef__mgU24cacheD_32() const { return ___U3CU3Ef__mgU24cacheD_32; }
	inline EventFunction_1_t3373214253 ** get_address_of_U3CU3Ef__mgU24cacheD_32() { return &___U3CU3Ef__mgU24cacheD_32; }
	inline void set_U3CU3Ef__mgU24cacheD_32(EventFunction_1_t3373214253 * value)
	{
		___U3CU3Ef__mgU24cacheD_32 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cacheD_32), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cacheE_33() { return static_cast<int32_t>(offsetof(ExecuteEvents_t3484638744_StaticFields, ___U3CU3Ef__mgU24cacheE_33)); }
	inline EventFunction_1_t3912835512 * get_U3CU3Ef__mgU24cacheE_33() const { return ___U3CU3Ef__mgU24cacheE_33; }
	inline EventFunction_1_t3912835512 ** get_address_of_U3CU3Ef__mgU24cacheE_33() { return &___U3CU3Ef__mgU24cacheE_33; }
	inline void set_U3CU3Ef__mgU24cacheE_33(EventFunction_1_t3912835512 * value)
	{
		___U3CU3Ef__mgU24cacheE_33 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cacheE_33), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cacheF_34() { return static_cast<int32_t>(offsetof(ExecuteEvents_t3484638744_StaticFields, ___U3CU3Ef__mgU24cacheF_34)); }
	inline EventFunction_1_t1475332338 * get_U3CU3Ef__mgU24cacheF_34() const { return ___U3CU3Ef__mgU24cacheF_34; }
	inline EventFunction_1_t1475332338 ** get_address_of_U3CU3Ef__mgU24cacheF_34() { return &___U3CU3Ef__mgU24cacheF_34; }
	inline void set_U3CU3Ef__mgU24cacheF_34(EventFunction_1_t1475332338 * value)
	{
		___U3CU3Ef__mgU24cacheF_34 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cacheF_34), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache10_35() { return static_cast<int32_t>(offsetof(ExecuteEvents_t3484638744_StaticFields, ___U3CU3Ef__mgU24cache10_35)); }
	inline EventFunction_1_t2658898854 * get_U3CU3Ef__mgU24cache10_35() const { return ___U3CU3Ef__mgU24cache10_35; }
	inline EventFunction_1_t2658898854 ** get_address_of_U3CU3Ef__mgU24cache10_35() { return &___U3CU3Ef__mgU24cache10_35; }
	inline void set_U3CU3Ef__mgU24cache10_35(EventFunction_1_t2658898854 * value)
	{
		___U3CU3Ef__mgU24cache10_35 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache10_35), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXECUTEEVENTS_T3484638744_H
#ifndef LIST_1_T777473367_H
#define LIST_1_T777473367_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.Transform>
struct  List_1_t777473367  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	TransformU5BU5D_t807237628* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t777473367, ____items_1)); }
	inline TransformU5BU5D_t807237628* get__items_1() const { return ____items_1; }
	inline TransformU5BU5D_t807237628** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(TransformU5BU5D_t807237628* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t777473367, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t777473367, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t777473367_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	TransformU5BU5D_t807237628* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t777473367_StaticFields, ___EmptyArray_4)); }
	inline TransformU5BU5D_t807237628* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline TransformU5BU5D_t807237628** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(TransformU5BU5D_t807237628* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T777473367_H
#ifndef ENUMERABLE_T538148348_H
#define ENUMERABLE_T538148348_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Enumerable
struct  Enumerable_t538148348  : public RuntimeObject
{
public:

public:
};

struct Enumerable_t538148348_StaticFields
{
public:
	// System.Func`3<System.Int32,System.Int32,System.Int32> System.Linq.Enumerable::<>f__am$cache0
	Func_3_t3344861838 * ___U3CU3Ef__amU24cache0_0;
	// System.Func`3<System.Int64,System.Int64,System.Int64> System.Linq.Enumerable::<>f__am$cache1
	Func_3_t3175904329 * ___U3CU3Ef__amU24cache1_1;
	// System.Func`3<System.Double,System.Double,System.Double> System.Linq.Enumerable::<>f__am$cache2
	Func_3_t1810338832 * ___U3CU3Ef__amU24cache2_2;
	// System.Func`3<System.Single,System.Single,System.Single> System.Linq.Enumerable::<>f__am$cache3
	Func_3_t2691639151 * ___U3CU3Ef__amU24cache3_3;
	// System.Func`3<System.Decimal,System.Decimal,System.Decimal> System.Linq.Enumerable::<>f__am$cache4
	Func_3_t3801552229 * ___U3CU3Ef__amU24cache4_4;
	// System.Func`3<System.Int32,System.Int32,System.Int32> System.Linq.Enumerable::<>f__am$cache5
	Func_3_t3344861838 * ___U3CU3Ef__amU24cache5_5;
	// System.Func`3<System.Int64,System.Int64,System.Int64> System.Linq.Enumerable::<>f__am$cache6
	Func_3_t3175904329 * ___U3CU3Ef__amU24cache6_6;
	// System.Func`3<System.Double,System.Double,System.Double> System.Linq.Enumerable::<>f__am$cache7
	Func_3_t1810338832 * ___U3CU3Ef__amU24cache7_7;
	// System.Func`3<System.Single,System.Single,System.Single> System.Linq.Enumerable::<>f__am$cache8
	Func_3_t2691639151 * ___U3CU3Ef__amU24cache8_8;
	// System.Func`3<System.Decimal,System.Decimal,System.Decimal> System.Linq.Enumerable::<>f__am$cache9
	Func_3_t3801552229 * ___U3CU3Ef__amU24cache9_9;
	// System.Func`3<System.Int32,System.Int32,System.Int32> System.Linq.Enumerable::<>f__am$cacheA
	Func_3_t3344861838 * ___U3CU3Ef__amU24cacheA_10;
	// System.Func`3<System.Int64,System.Int64,System.Int64> System.Linq.Enumerable::<>f__am$cacheB
	Func_3_t3175904329 * ___U3CU3Ef__amU24cacheB_11;
	// System.Func`3<System.Double,System.Double,System.Double> System.Linq.Enumerable::<>f__am$cacheC
	Func_3_t1810338832 * ___U3CU3Ef__amU24cacheC_12;
	// System.Func`3<System.Single,System.Single,System.Single> System.Linq.Enumerable::<>f__am$cacheD
	Func_3_t2691639151 * ___U3CU3Ef__amU24cacheD_13;
	// System.Func`3<System.Decimal,System.Decimal,System.Decimal> System.Linq.Enumerable::<>f__am$cacheE
	Func_3_t3801552229 * ___U3CU3Ef__amU24cacheE_14;
	// System.Func`3<System.Int32,System.Int32,System.Int32> System.Linq.Enumerable::<>f__am$cacheF
	Func_3_t3344861838 * ___U3CU3Ef__amU24cacheF_15;
	// System.Func`3<System.Int64,System.Int64,System.Int64> System.Linq.Enumerable::<>f__am$cache10
	Func_3_t3175904329 * ___U3CU3Ef__amU24cache10_16;
	// System.Func`3<System.Double,System.Double,System.Double> System.Linq.Enumerable::<>f__am$cache11
	Func_3_t1810338832 * ___U3CU3Ef__amU24cache11_17;
	// System.Func`3<System.Single,System.Single,System.Single> System.Linq.Enumerable::<>f__am$cache12
	Func_3_t2691639151 * ___U3CU3Ef__amU24cache12_18;
	// System.Func`3<System.Decimal,System.Decimal,System.Decimal> System.Linq.Enumerable::<>f__am$cache13
	Func_3_t3801552229 * ___U3CU3Ef__amU24cache13_19;
	// System.Func`3<System.Int32,System.Int32,System.Int32> System.Linq.Enumerable::<>f__am$cache14
	Func_3_t3344861838 * ___U3CU3Ef__amU24cache14_20;
	// System.Func`3<System.Nullable`1<System.Int32>,System.Nullable`1<System.Int32>,System.Nullable`1<System.Int32>> System.Linq.Enumerable::<>f__am$cache15
	Func_3_t3369341848 * ___U3CU3Ef__amU24cache15_21;
	// System.Func`3<System.Int64,System.Int64,System.Int64> System.Linq.Enumerable::<>f__am$cache16
	Func_3_t3175904329 * ___U3CU3Ef__amU24cache16_22;
	// System.Func`3<System.Nullable`1<System.Int64>,System.Nullable`1<System.Int64>,System.Nullable`1<System.Int64>> System.Linq.Enumerable::<>f__am$cache17
	Func_3_t3200384339 * ___U3CU3Ef__amU24cache17_23;
	// System.Func`3<System.Double,System.Double,System.Double> System.Linq.Enumerable::<>f__am$cache18
	Func_3_t1810338832 * ___U3CU3Ef__amU24cache18_24;
	// System.Func`3<System.Nullable`1<System.Double>,System.Nullable`1<System.Double>,System.Nullable`1<System.Double>> System.Linq.Enumerable::<>f__am$cache19
	Func_3_t1834818842 * ___U3CU3Ef__amU24cache19_25;
	// System.Func`3<System.Single,System.Single,System.Single> System.Linq.Enumerable::<>f__am$cache1A
	Func_3_t2691639151 * ___U3CU3Ef__amU24cache1A_26;
	// System.Func`3<System.Nullable`1<System.Single>,System.Nullable`1<System.Single>,System.Nullable`1<System.Single>> System.Linq.Enumerable::<>f__am$cache1B
	Func_3_t2716119161 * ___U3CU3Ef__amU24cache1B_27;
	// System.Func`3<System.Decimal,System.Decimal,System.Decimal> System.Linq.Enumerable::<>f__am$cache1C
	Func_3_t3801552229 * ___U3CU3Ef__amU24cache1C_28;
	// System.Func`3<System.Nullable`1<System.Decimal>,System.Nullable`1<System.Decimal>,System.Nullable`1<System.Decimal>> System.Linq.Enumerable::<>f__am$cache1D
	Func_3_t3826032239 * ___U3CU3Ef__amU24cache1D_29;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_0() { return static_cast<int32_t>(offsetof(Enumerable_t538148348_StaticFields, ___U3CU3Ef__amU24cache0_0)); }
	inline Func_3_t3344861838 * get_U3CU3Ef__amU24cache0_0() const { return ___U3CU3Ef__amU24cache0_0; }
	inline Func_3_t3344861838 ** get_address_of_U3CU3Ef__amU24cache0_0() { return &___U3CU3Ef__amU24cache0_0; }
	inline void set_U3CU3Ef__amU24cache0_0(Func_3_t3344861838 * value)
	{
		___U3CU3Ef__amU24cache0_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache0_0), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1_1() { return static_cast<int32_t>(offsetof(Enumerable_t538148348_StaticFields, ___U3CU3Ef__amU24cache1_1)); }
	inline Func_3_t3175904329 * get_U3CU3Ef__amU24cache1_1() const { return ___U3CU3Ef__amU24cache1_1; }
	inline Func_3_t3175904329 ** get_address_of_U3CU3Ef__amU24cache1_1() { return &___U3CU3Ef__amU24cache1_1; }
	inline void set_U3CU3Ef__amU24cache1_1(Func_3_t3175904329 * value)
	{
		___U3CU3Ef__amU24cache1_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache1_1), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache2_2() { return static_cast<int32_t>(offsetof(Enumerable_t538148348_StaticFields, ___U3CU3Ef__amU24cache2_2)); }
	inline Func_3_t1810338832 * get_U3CU3Ef__amU24cache2_2() const { return ___U3CU3Ef__amU24cache2_2; }
	inline Func_3_t1810338832 ** get_address_of_U3CU3Ef__amU24cache2_2() { return &___U3CU3Ef__amU24cache2_2; }
	inline void set_U3CU3Ef__amU24cache2_2(Func_3_t1810338832 * value)
	{
		___U3CU3Ef__amU24cache2_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache2_2), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache3_3() { return static_cast<int32_t>(offsetof(Enumerable_t538148348_StaticFields, ___U3CU3Ef__amU24cache3_3)); }
	inline Func_3_t2691639151 * get_U3CU3Ef__amU24cache3_3() const { return ___U3CU3Ef__amU24cache3_3; }
	inline Func_3_t2691639151 ** get_address_of_U3CU3Ef__amU24cache3_3() { return &___U3CU3Ef__amU24cache3_3; }
	inline void set_U3CU3Ef__amU24cache3_3(Func_3_t2691639151 * value)
	{
		___U3CU3Ef__amU24cache3_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache3_3), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache4_4() { return static_cast<int32_t>(offsetof(Enumerable_t538148348_StaticFields, ___U3CU3Ef__amU24cache4_4)); }
	inline Func_3_t3801552229 * get_U3CU3Ef__amU24cache4_4() const { return ___U3CU3Ef__amU24cache4_4; }
	inline Func_3_t3801552229 ** get_address_of_U3CU3Ef__amU24cache4_4() { return &___U3CU3Ef__amU24cache4_4; }
	inline void set_U3CU3Ef__amU24cache4_4(Func_3_t3801552229 * value)
	{
		___U3CU3Ef__amU24cache4_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache4_4), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache5_5() { return static_cast<int32_t>(offsetof(Enumerable_t538148348_StaticFields, ___U3CU3Ef__amU24cache5_5)); }
	inline Func_3_t3344861838 * get_U3CU3Ef__amU24cache5_5() const { return ___U3CU3Ef__amU24cache5_5; }
	inline Func_3_t3344861838 ** get_address_of_U3CU3Ef__amU24cache5_5() { return &___U3CU3Ef__amU24cache5_5; }
	inline void set_U3CU3Ef__amU24cache5_5(Func_3_t3344861838 * value)
	{
		___U3CU3Ef__amU24cache5_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache5_5), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache6_6() { return static_cast<int32_t>(offsetof(Enumerable_t538148348_StaticFields, ___U3CU3Ef__amU24cache6_6)); }
	inline Func_3_t3175904329 * get_U3CU3Ef__amU24cache6_6() const { return ___U3CU3Ef__amU24cache6_6; }
	inline Func_3_t3175904329 ** get_address_of_U3CU3Ef__amU24cache6_6() { return &___U3CU3Ef__amU24cache6_6; }
	inline void set_U3CU3Ef__amU24cache6_6(Func_3_t3175904329 * value)
	{
		___U3CU3Ef__amU24cache6_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache6_6), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache7_7() { return static_cast<int32_t>(offsetof(Enumerable_t538148348_StaticFields, ___U3CU3Ef__amU24cache7_7)); }
	inline Func_3_t1810338832 * get_U3CU3Ef__amU24cache7_7() const { return ___U3CU3Ef__amU24cache7_7; }
	inline Func_3_t1810338832 ** get_address_of_U3CU3Ef__amU24cache7_7() { return &___U3CU3Ef__amU24cache7_7; }
	inline void set_U3CU3Ef__amU24cache7_7(Func_3_t1810338832 * value)
	{
		___U3CU3Ef__amU24cache7_7 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache7_7), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache8_8() { return static_cast<int32_t>(offsetof(Enumerable_t538148348_StaticFields, ___U3CU3Ef__amU24cache8_8)); }
	inline Func_3_t2691639151 * get_U3CU3Ef__amU24cache8_8() const { return ___U3CU3Ef__amU24cache8_8; }
	inline Func_3_t2691639151 ** get_address_of_U3CU3Ef__amU24cache8_8() { return &___U3CU3Ef__amU24cache8_8; }
	inline void set_U3CU3Ef__amU24cache8_8(Func_3_t2691639151 * value)
	{
		___U3CU3Ef__amU24cache8_8 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache8_8), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache9_9() { return static_cast<int32_t>(offsetof(Enumerable_t538148348_StaticFields, ___U3CU3Ef__amU24cache9_9)); }
	inline Func_3_t3801552229 * get_U3CU3Ef__amU24cache9_9() const { return ___U3CU3Ef__amU24cache9_9; }
	inline Func_3_t3801552229 ** get_address_of_U3CU3Ef__amU24cache9_9() { return &___U3CU3Ef__amU24cache9_9; }
	inline void set_U3CU3Ef__amU24cache9_9(Func_3_t3801552229 * value)
	{
		___U3CU3Ef__amU24cache9_9 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache9_9), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheA_10() { return static_cast<int32_t>(offsetof(Enumerable_t538148348_StaticFields, ___U3CU3Ef__amU24cacheA_10)); }
	inline Func_3_t3344861838 * get_U3CU3Ef__amU24cacheA_10() const { return ___U3CU3Ef__amU24cacheA_10; }
	inline Func_3_t3344861838 ** get_address_of_U3CU3Ef__amU24cacheA_10() { return &___U3CU3Ef__amU24cacheA_10; }
	inline void set_U3CU3Ef__amU24cacheA_10(Func_3_t3344861838 * value)
	{
		___U3CU3Ef__amU24cacheA_10 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheA_10), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_11() { return static_cast<int32_t>(offsetof(Enumerable_t538148348_StaticFields, ___U3CU3Ef__amU24cacheB_11)); }
	inline Func_3_t3175904329 * get_U3CU3Ef__amU24cacheB_11() const { return ___U3CU3Ef__amU24cacheB_11; }
	inline Func_3_t3175904329 ** get_address_of_U3CU3Ef__amU24cacheB_11() { return &___U3CU3Ef__amU24cacheB_11; }
	inline void set_U3CU3Ef__amU24cacheB_11(Func_3_t3175904329 * value)
	{
		___U3CU3Ef__amU24cacheB_11 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_11), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheC_12() { return static_cast<int32_t>(offsetof(Enumerable_t538148348_StaticFields, ___U3CU3Ef__amU24cacheC_12)); }
	inline Func_3_t1810338832 * get_U3CU3Ef__amU24cacheC_12() const { return ___U3CU3Ef__amU24cacheC_12; }
	inline Func_3_t1810338832 ** get_address_of_U3CU3Ef__amU24cacheC_12() { return &___U3CU3Ef__amU24cacheC_12; }
	inline void set_U3CU3Ef__amU24cacheC_12(Func_3_t1810338832 * value)
	{
		___U3CU3Ef__amU24cacheC_12 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheC_12), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheD_13() { return static_cast<int32_t>(offsetof(Enumerable_t538148348_StaticFields, ___U3CU3Ef__amU24cacheD_13)); }
	inline Func_3_t2691639151 * get_U3CU3Ef__amU24cacheD_13() const { return ___U3CU3Ef__amU24cacheD_13; }
	inline Func_3_t2691639151 ** get_address_of_U3CU3Ef__amU24cacheD_13() { return &___U3CU3Ef__amU24cacheD_13; }
	inline void set_U3CU3Ef__amU24cacheD_13(Func_3_t2691639151 * value)
	{
		___U3CU3Ef__amU24cacheD_13 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheD_13), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheE_14() { return static_cast<int32_t>(offsetof(Enumerable_t538148348_StaticFields, ___U3CU3Ef__amU24cacheE_14)); }
	inline Func_3_t3801552229 * get_U3CU3Ef__amU24cacheE_14() const { return ___U3CU3Ef__amU24cacheE_14; }
	inline Func_3_t3801552229 ** get_address_of_U3CU3Ef__amU24cacheE_14() { return &___U3CU3Ef__amU24cacheE_14; }
	inline void set_U3CU3Ef__amU24cacheE_14(Func_3_t3801552229 * value)
	{
		___U3CU3Ef__amU24cacheE_14 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheE_14), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheF_15() { return static_cast<int32_t>(offsetof(Enumerable_t538148348_StaticFields, ___U3CU3Ef__amU24cacheF_15)); }
	inline Func_3_t3344861838 * get_U3CU3Ef__amU24cacheF_15() const { return ___U3CU3Ef__amU24cacheF_15; }
	inline Func_3_t3344861838 ** get_address_of_U3CU3Ef__amU24cacheF_15() { return &___U3CU3Ef__amU24cacheF_15; }
	inline void set_U3CU3Ef__amU24cacheF_15(Func_3_t3344861838 * value)
	{
		___U3CU3Ef__amU24cacheF_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheF_15), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache10_16() { return static_cast<int32_t>(offsetof(Enumerable_t538148348_StaticFields, ___U3CU3Ef__amU24cache10_16)); }
	inline Func_3_t3175904329 * get_U3CU3Ef__amU24cache10_16() const { return ___U3CU3Ef__amU24cache10_16; }
	inline Func_3_t3175904329 ** get_address_of_U3CU3Ef__amU24cache10_16() { return &___U3CU3Ef__amU24cache10_16; }
	inline void set_U3CU3Ef__amU24cache10_16(Func_3_t3175904329 * value)
	{
		___U3CU3Ef__amU24cache10_16 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache10_16), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache11_17() { return static_cast<int32_t>(offsetof(Enumerable_t538148348_StaticFields, ___U3CU3Ef__amU24cache11_17)); }
	inline Func_3_t1810338832 * get_U3CU3Ef__amU24cache11_17() const { return ___U3CU3Ef__amU24cache11_17; }
	inline Func_3_t1810338832 ** get_address_of_U3CU3Ef__amU24cache11_17() { return &___U3CU3Ef__amU24cache11_17; }
	inline void set_U3CU3Ef__amU24cache11_17(Func_3_t1810338832 * value)
	{
		___U3CU3Ef__amU24cache11_17 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache11_17), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache12_18() { return static_cast<int32_t>(offsetof(Enumerable_t538148348_StaticFields, ___U3CU3Ef__amU24cache12_18)); }
	inline Func_3_t2691639151 * get_U3CU3Ef__amU24cache12_18() const { return ___U3CU3Ef__amU24cache12_18; }
	inline Func_3_t2691639151 ** get_address_of_U3CU3Ef__amU24cache12_18() { return &___U3CU3Ef__amU24cache12_18; }
	inline void set_U3CU3Ef__amU24cache12_18(Func_3_t2691639151 * value)
	{
		___U3CU3Ef__amU24cache12_18 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache12_18), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache13_19() { return static_cast<int32_t>(offsetof(Enumerable_t538148348_StaticFields, ___U3CU3Ef__amU24cache13_19)); }
	inline Func_3_t3801552229 * get_U3CU3Ef__amU24cache13_19() const { return ___U3CU3Ef__amU24cache13_19; }
	inline Func_3_t3801552229 ** get_address_of_U3CU3Ef__amU24cache13_19() { return &___U3CU3Ef__amU24cache13_19; }
	inline void set_U3CU3Ef__amU24cache13_19(Func_3_t3801552229 * value)
	{
		___U3CU3Ef__amU24cache13_19 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache13_19), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache14_20() { return static_cast<int32_t>(offsetof(Enumerable_t538148348_StaticFields, ___U3CU3Ef__amU24cache14_20)); }
	inline Func_3_t3344861838 * get_U3CU3Ef__amU24cache14_20() const { return ___U3CU3Ef__amU24cache14_20; }
	inline Func_3_t3344861838 ** get_address_of_U3CU3Ef__amU24cache14_20() { return &___U3CU3Ef__amU24cache14_20; }
	inline void set_U3CU3Ef__amU24cache14_20(Func_3_t3344861838 * value)
	{
		___U3CU3Ef__amU24cache14_20 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache14_20), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache15_21() { return static_cast<int32_t>(offsetof(Enumerable_t538148348_StaticFields, ___U3CU3Ef__amU24cache15_21)); }
	inline Func_3_t3369341848 * get_U3CU3Ef__amU24cache15_21() const { return ___U3CU3Ef__amU24cache15_21; }
	inline Func_3_t3369341848 ** get_address_of_U3CU3Ef__amU24cache15_21() { return &___U3CU3Ef__amU24cache15_21; }
	inline void set_U3CU3Ef__amU24cache15_21(Func_3_t3369341848 * value)
	{
		___U3CU3Ef__amU24cache15_21 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache15_21), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache16_22() { return static_cast<int32_t>(offsetof(Enumerable_t538148348_StaticFields, ___U3CU3Ef__amU24cache16_22)); }
	inline Func_3_t3175904329 * get_U3CU3Ef__amU24cache16_22() const { return ___U3CU3Ef__amU24cache16_22; }
	inline Func_3_t3175904329 ** get_address_of_U3CU3Ef__amU24cache16_22() { return &___U3CU3Ef__amU24cache16_22; }
	inline void set_U3CU3Ef__amU24cache16_22(Func_3_t3175904329 * value)
	{
		___U3CU3Ef__amU24cache16_22 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache16_22), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache17_23() { return static_cast<int32_t>(offsetof(Enumerable_t538148348_StaticFields, ___U3CU3Ef__amU24cache17_23)); }
	inline Func_3_t3200384339 * get_U3CU3Ef__amU24cache17_23() const { return ___U3CU3Ef__amU24cache17_23; }
	inline Func_3_t3200384339 ** get_address_of_U3CU3Ef__amU24cache17_23() { return &___U3CU3Ef__amU24cache17_23; }
	inline void set_U3CU3Ef__amU24cache17_23(Func_3_t3200384339 * value)
	{
		___U3CU3Ef__amU24cache17_23 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache17_23), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache18_24() { return static_cast<int32_t>(offsetof(Enumerable_t538148348_StaticFields, ___U3CU3Ef__amU24cache18_24)); }
	inline Func_3_t1810338832 * get_U3CU3Ef__amU24cache18_24() const { return ___U3CU3Ef__amU24cache18_24; }
	inline Func_3_t1810338832 ** get_address_of_U3CU3Ef__amU24cache18_24() { return &___U3CU3Ef__amU24cache18_24; }
	inline void set_U3CU3Ef__amU24cache18_24(Func_3_t1810338832 * value)
	{
		___U3CU3Ef__amU24cache18_24 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache18_24), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache19_25() { return static_cast<int32_t>(offsetof(Enumerable_t538148348_StaticFields, ___U3CU3Ef__amU24cache19_25)); }
	inline Func_3_t1834818842 * get_U3CU3Ef__amU24cache19_25() const { return ___U3CU3Ef__amU24cache19_25; }
	inline Func_3_t1834818842 ** get_address_of_U3CU3Ef__amU24cache19_25() { return &___U3CU3Ef__amU24cache19_25; }
	inline void set_U3CU3Ef__amU24cache19_25(Func_3_t1834818842 * value)
	{
		___U3CU3Ef__amU24cache19_25 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache19_25), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1A_26() { return static_cast<int32_t>(offsetof(Enumerable_t538148348_StaticFields, ___U3CU3Ef__amU24cache1A_26)); }
	inline Func_3_t2691639151 * get_U3CU3Ef__amU24cache1A_26() const { return ___U3CU3Ef__amU24cache1A_26; }
	inline Func_3_t2691639151 ** get_address_of_U3CU3Ef__amU24cache1A_26() { return &___U3CU3Ef__amU24cache1A_26; }
	inline void set_U3CU3Ef__amU24cache1A_26(Func_3_t2691639151 * value)
	{
		___U3CU3Ef__amU24cache1A_26 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache1A_26), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1B_27() { return static_cast<int32_t>(offsetof(Enumerable_t538148348_StaticFields, ___U3CU3Ef__amU24cache1B_27)); }
	inline Func_3_t2716119161 * get_U3CU3Ef__amU24cache1B_27() const { return ___U3CU3Ef__amU24cache1B_27; }
	inline Func_3_t2716119161 ** get_address_of_U3CU3Ef__amU24cache1B_27() { return &___U3CU3Ef__amU24cache1B_27; }
	inline void set_U3CU3Ef__amU24cache1B_27(Func_3_t2716119161 * value)
	{
		___U3CU3Ef__amU24cache1B_27 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache1B_27), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1C_28() { return static_cast<int32_t>(offsetof(Enumerable_t538148348_StaticFields, ___U3CU3Ef__amU24cache1C_28)); }
	inline Func_3_t3801552229 * get_U3CU3Ef__amU24cache1C_28() const { return ___U3CU3Ef__amU24cache1C_28; }
	inline Func_3_t3801552229 ** get_address_of_U3CU3Ef__amU24cache1C_28() { return &___U3CU3Ef__amU24cache1C_28; }
	inline void set_U3CU3Ef__amU24cache1C_28(Func_3_t3801552229 * value)
	{
		___U3CU3Ef__amU24cache1C_28 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache1C_28), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1D_29() { return static_cast<int32_t>(offsetof(Enumerable_t538148348_StaticFields, ___U3CU3Ef__amU24cache1D_29)); }
	inline Func_3_t3826032239 * get_U3CU3Ef__amU24cache1D_29() const { return ___U3CU3Ef__amU24cache1D_29; }
	inline Func_3_t3826032239 ** get_address_of_U3CU3Ef__amU24cache1D_29() { return &___U3CU3Ef__amU24cache1D_29; }
	inline void set_U3CU3Ef__amU24cache1D_29(Func_3_t3826032239 * value)
	{
		___U3CU3Ef__amU24cache1D_29 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache1D_29), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERABLE_T538148348_H
#ifndef QUERYABLE_T614340421_H
#define QUERYABLE_T614340421_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Queryable
struct  Queryable_t614340421  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUERYABLE_T614340421_H
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
#ifndef SYSTEMEXCEPTION_T176217640_H
#define SYSTEMEXCEPTION_T176217640_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t176217640  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T176217640_H
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
#ifndef NULLABLE_1_T378540539_H
#define NULLABLE_1_T378540539_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Nullable`1<System.Int32>
struct  Nullable_1_t378540539 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t378540539, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t378540539, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLABLE_1_T378540539_H
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
#ifndef NULLABLE_1_T3119828856_H
#define NULLABLE_1_T3119828856_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Nullable`1<System.Single>
struct  Nullable_1_t3119828856 
{
public:
	// T System.Nullable`1::value
	float ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t3119828856, ___value_0)); }
	inline float get_value_0() const { return ___value_0; }
	inline float* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(float value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t3119828856, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLABLE_1_T3119828856_H
#ifndef KEYVALUEPAIR_2_T847377929_H
#define KEYVALUEPAIR_2_T847377929_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>
struct  KeyValuePair_2_t847377929 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	float ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t847377929, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t847377929, ___value_1)); }
	inline float get_value_1() const { return ___value_1; }
	inline float* get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(float value)
	{
		___value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T847377929_H
#ifndef NULLABLE_1_T2317227445_H
#define NULLABLE_1_T2317227445_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Nullable`1<System.Double>
struct  Nullable_1_t2317227445 
{
public:
	// T System.Nullable`1::value
	double ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t2317227445, ___value_0)); }
	inline double get_value_0() const { return ___value_0; }
	inline double* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(double value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t2317227445, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLABLE_1_T2317227445_H
#ifndef NULLABLE_1_T1164162090_H
#define NULLABLE_1_T1164162090_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Nullable`1<System.Int64>
struct  Nullable_1_t1164162090 
{
public:
	// T System.Nullable`1::value
	int64_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t1164162090, ___value_0)); }
	inline int64_t get_value_0() const { return ___value_0; }
	inline int64_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int64_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t1164162090, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLABLE_1_T1164162090_H
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
#ifndef BASEEVENTDATA_T3903027533_H
#define BASEEVENTDATA_T3903027533_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.BaseEventData
struct  BaseEventData_t3903027533  : public AbstractEventData_t4171500731
{
public:
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseEventData::m_EventSystem
	EventSystem_t1003666588 * ___m_EventSystem_1;

public:
	inline static int32_t get_offset_of_m_EventSystem_1() { return static_cast<int32_t>(offsetof(BaseEventData_t3903027533, ___m_EventSystem_1)); }
	inline EventSystem_t1003666588 * get_m_EventSystem_1() const { return ___m_EventSystem_1; }
	inline EventSystem_t1003666588 ** get_address_of_m_EventSystem_1() { return &___m_EventSystem_1; }
	inline void set_m_EventSystem_1(EventSystem_t1003666588 * value)
	{
		___m_EventSystem_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_EventSystem_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASEEVENTDATA_T3903027533_H
#ifndef METHODBASE_T_H
#define METHODBASE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MethodBase
struct  MethodBase_t  : public MemberInfo_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // METHODBASE_T_H
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
#ifndef DECIMAL_T2948259380_H
#define DECIMAL_T2948259380_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Decimal
struct  Decimal_t2948259380 
{
public:
	// System.UInt32 System.Decimal::flags
	uint32_t ___flags_5;
	// System.UInt32 System.Decimal::hi
	uint32_t ___hi_6;
	// System.UInt32 System.Decimal::lo
	uint32_t ___lo_7;
	// System.UInt32 System.Decimal::mid
	uint32_t ___mid_8;

public:
	inline static int32_t get_offset_of_flags_5() { return static_cast<int32_t>(offsetof(Decimal_t2948259380, ___flags_5)); }
	inline uint32_t get_flags_5() const { return ___flags_5; }
	inline uint32_t* get_address_of_flags_5() { return &___flags_5; }
	inline void set_flags_5(uint32_t value)
	{
		___flags_5 = value;
	}

	inline static int32_t get_offset_of_hi_6() { return static_cast<int32_t>(offsetof(Decimal_t2948259380, ___hi_6)); }
	inline uint32_t get_hi_6() const { return ___hi_6; }
	inline uint32_t* get_address_of_hi_6() { return &___hi_6; }
	inline void set_hi_6(uint32_t value)
	{
		___hi_6 = value;
	}

	inline static int32_t get_offset_of_lo_7() { return static_cast<int32_t>(offsetof(Decimal_t2948259380, ___lo_7)); }
	inline uint32_t get_lo_7() const { return ___lo_7; }
	inline uint32_t* get_address_of_lo_7() { return &___lo_7; }
	inline void set_lo_7(uint32_t value)
	{
		___lo_7 = value;
	}

	inline static int32_t get_offset_of_mid_8() { return static_cast<int32_t>(offsetof(Decimal_t2948259380, ___mid_8)); }
	inline uint32_t get_mid_8() const { return ___mid_8; }
	inline uint32_t* get_address_of_mid_8() { return &___mid_8; }
	inline void set_mid_8(uint32_t value)
	{
		___mid_8 = value;
	}
};

struct Decimal_t2948259380_StaticFields
{
public:
	// System.Decimal System.Decimal::MinValue
	Decimal_t2948259380  ___MinValue_0;
	// System.Decimal System.Decimal::MaxValue
	Decimal_t2948259380  ___MaxValue_1;
	// System.Decimal System.Decimal::MinusOne
	Decimal_t2948259380  ___MinusOne_2;
	// System.Decimal System.Decimal::One
	Decimal_t2948259380  ___One_3;
	// System.Decimal System.Decimal::MaxValueDiv10
	Decimal_t2948259380  ___MaxValueDiv10_4;

public:
	inline static int32_t get_offset_of_MinValue_0() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___MinValue_0)); }
	inline Decimal_t2948259380  get_MinValue_0() const { return ___MinValue_0; }
	inline Decimal_t2948259380 * get_address_of_MinValue_0() { return &___MinValue_0; }
	inline void set_MinValue_0(Decimal_t2948259380  value)
	{
		___MinValue_0 = value;
	}

	inline static int32_t get_offset_of_MaxValue_1() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___MaxValue_1)); }
	inline Decimal_t2948259380  get_MaxValue_1() const { return ___MaxValue_1; }
	inline Decimal_t2948259380 * get_address_of_MaxValue_1() { return &___MaxValue_1; }
	inline void set_MaxValue_1(Decimal_t2948259380  value)
	{
		___MaxValue_1 = value;
	}

	inline static int32_t get_offset_of_MinusOne_2() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___MinusOne_2)); }
	inline Decimal_t2948259380  get_MinusOne_2() const { return ___MinusOne_2; }
	inline Decimal_t2948259380 * get_address_of_MinusOne_2() { return &___MinusOne_2; }
	inline void set_MinusOne_2(Decimal_t2948259380  value)
	{
		___MinusOne_2 = value;
	}

	inline static int32_t get_offset_of_One_3() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___One_3)); }
	inline Decimal_t2948259380  get_One_3() const { return ___One_3; }
	inline Decimal_t2948259380 * get_address_of_One_3() { return &___One_3; }
	inline void set_One_3(Decimal_t2948259380  value)
	{
		___One_3 = value;
	}

	inline static int32_t get_offset_of_MaxValueDiv10_4() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___MaxValueDiv10_4)); }
	inline Decimal_t2948259380  get_MaxValueDiv10_4() const { return ___MaxValueDiv10_4; }
	inline Decimal_t2948259380 * get_address_of_MaxValueDiv10_4() { return &___MaxValueDiv10_4; }
	inline void set_MaxValueDiv10_4(Decimal_t2948259380  value)
	{
		___MaxValueDiv10_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECIMAL_T2948259380_H
#ifndef METHODINFO_T_H
#define METHODINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MethodInfo
struct  MethodInfo_t  : public MethodBase_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // METHODINFO_T_H
#ifndef ARGUMENTEXCEPTION_T132251570_H
#define ARGUMENTEXCEPTION_T132251570_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentException
struct  ArgumentException_t132251570  : public SystemException_t176217640
{
public:
	// System.String System.ArgumentException::param_name
	String_t* ___param_name_12;

public:
	inline static int32_t get_offset_of_param_name_12() { return static_cast<int32_t>(offsetof(ArgumentException_t132251570, ___param_name_12)); }
	inline String_t* get_param_name_12() const { return ___param_name_12; }
	inline String_t** get_address_of_param_name_12() { return &___param_name_12; }
	inline void set_param_name_12(String_t* value)
	{
		___param_name_12 = value;
		Il2CppCodeGenWriteBarrier((&___param_name_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTEXCEPTION_T132251570_H
#ifndef NULLABLE_1_T375854166_H
#define NULLABLE_1_T375854166_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Nullable`1<System.Decimal>
struct  Nullable_1_t375854166 
{
public:
	// T System.Nullable`1::value
	Decimal_t2948259380  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t375854166, ___value_0)); }
	inline Decimal_t2948259380  get_value_0() const { return ___value_0; }
	inline Decimal_t2948259380 * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(Decimal_t2948259380  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t375854166, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLABLE_1_T375854166_H
#ifndef INVALIDOPERATIONEXCEPTION_T56020091_H
#define INVALIDOPERATIONEXCEPTION_T56020091_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.InvalidOperationException
struct  InvalidOperationException_t56020091  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVALIDOPERATIONEXCEPTION_T56020091_H
#ifndef FALLBACK_T3495999270_H
#define FALLBACK_T3495999270_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Enumerable/Fallback
struct  Fallback_t3495999270 
{
public:
	// System.Int32 System.Linq.Enumerable/Fallback::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Fallback_t3495999270, ___value___1)); }
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
#endif // FALLBACK_T3495999270_H
#ifndef RUNTIMETYPEHANDLE_T3027515415_H
#define RUNTIMETYPEHANDLE_T3027515415_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_t3027515415 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t3027515415, ___value_0)); }
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
#endif // RUNTIMETYPEHANDLE_T3027515415_H
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
#ifndef EXPRESSIONTYPE_T2886294549_H
#define EXPRESSIONTYPE_T2886294549_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.ExpressionType
struct  ExpressionType_t2886294549 
{
public:
	// System.Int32 System.Linq.Expressions.ExpressionType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ExpressionType_t2886294549, ___value___1)); }
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
#endif // EXPRESSIONTYPE_T2886294549_H
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
#ifndef BINDINGFLAGS_T2721792723_H
#define BINDINGFLAGS_T2721792723_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.BindingFlags
struct  BindingFlags_t2721792723 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(BindingFlags_t2721792723, ___value___1)); }
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
#endif // BINDINGFLAGS_T2721792723_H
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
#ifndef ARGUMENTNULLEXCEPTION_T1615371798_H
#define ARGUMENTNULLEXCEPTION_T1615371798_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentNullException
struct  ArgumentNullException_t1615371798  : public ArgumentException_t132251570
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTNULLEXCEPTION_T1615371798_H
#ifndef ARGUMENTOUTOFRANGEEXCEPTION_T777629997_H
#define ARGUMENTOUTOFRANGEEXCEPTION_T777629997_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentOutOfRangeException
struct  ArgumentOutOfRangeException_t777629997  : public ArgumentException_t132251570
{
public:
	// System.Object System.ArgumentOutOfRangeException::actual_value
	RuntimeObject * ___actual_value_13;

public:
	inline static int32_t get_offset_of_actual_value_13() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_t777629997, ___actual_value_13)); }
	inline RuntimeObject * get_actual_value_13() const { return ___actual_value_13; }
	inline RuntimeObject ** get_address_of_actual_value_13() { return &___actual_value_13; }
	inline void set_actual_value_13(RuntimeObject * value)
	{
		___actual_value_13 = value;
		Il2CppCodeGenWriteBarrier((&___actual_value_13), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTOUTOFRANGEEXCEPTION_T777629997_H
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
#ifndef TYPE_T_H
#define TYPE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t3027515415  ____impl_1;

public:
	inline static int32_t get_offset_of__impl_1() { return static_cast<int32_t>(offsetof(Type_t, ____impl_1)); }
	inline RuntimeTypeHandle_t3027515415  get__impl_1() const { return ____impl_1; }
	inline RuntimeTypeHandle_t3027515415 * get_address_of__impl_1() { return &____impl_1; }
	inline void set__impl_1(RuntimeTypeHandle_t3027515415  value)
	{
		____impl_1 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_2;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t3940880105* ___EmptyTypes_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t426314064 * ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t426314064 * ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t426314064 * ___FilterNameIgnoreCase_6;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_7;

public:
	inline static int32_t get_offset_of_Delimiter_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_2)); }
	inline Il2CppChar get_Delimiter_2() const { return ___Delimiter_2; }
	inline Il2CppChar* get_address_of_Delimiter_2() { return &___Delimiter_2; }
	inline void set_Delimiter_2(Il2CppChar value)
	{
		___Delimiter_2 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_3)); }
	inline TypeU5BU5D_t3940880105* get_EmptyTypes_3() const { return ___EmptyTypes_3; }
	inline TypeU5BU5D_t3940880105** get_address_of_EmptyTypes_3() { return &___EmptyTypes_3; }
	inline void set_EmptyTypes_3(TypeU5BU5D_t3940880105* value)
	{
		___EmptyTypes_3 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyTypes_3), value);
	}

	inline static int32_t get_offset_of_FilterAttribute_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_4)); }
	inline MemberFilter_t426314064 * get_FilterAttribute_4() const { return ___FilterAttribute_4; }
	inline MemberFilter_t426314064 ** get_address_of_FilterAttribute_4() { return &___FilterAttribute_4; }
	inline void set_FilterAttribute_4(MemberFilter_t426314064 * value)
	{
		___FilterAttribute_4 = value;
		Il2CppCodeGenWriteBarrier((&___FilterAttribute_4), value);
	}

	inline static int32_t get_offset_of_FilterName_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_5)); }
	inline MemberFilter_t426314064 * get_FilterName_5() const { return ___FilterName_5; }
	inline MemberFilter_t426314064 ** get_address_of_FilterName_5() { return &___FilterName_5; }
	inline void set_FilterName_5(MemberFilter_t426314064 * value)
	{
		___FilterName_5 = value;
		Il2CppCodeGenWriteBarrier((&___FilterName_5), value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_6)); }
	inline MemberFilter_t426314064 * get_FilterNameIgnoreCase_6() const { return ___FilterNameIgnoreCase_6; }
	inline MemberFilter_t426314064 ** get_address_of_FilterNameIgnoreCase_6() { return &___FilterNameIgnoreCase_6; }
	inline void set_FilterNameIgnoreCase_6(MemberFilter_t426314064 * value)
	{
		___FilterNameIgnoreCase_6 = value;
		Il2CppCodeGenWriteBarrier((&___FilterNameIgnoreCase_6), value);
	}

	inline static int32_t get_offset_of_Missing_7() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_7)); }
	inline RuntimeObject * get_Missing_7() const { return ___Missing_7; }
	inline RuntimeObject ** get_address_of_Missing_7() { return &___Missing_7; }
	inline void set_Missing_7(RuntimeObject * value)
	{
		___Missing_7 = value;
		Il2CppCodeGenWriteBarrier((&___Missing_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPE_T_H
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
#ifndef EXPRESSION_T1588164026_H
#define EXPRESSION_T1588164026_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.Expression
struct  Expression_t1588164026  : public RuntimeObject
{
public:
	// System.Linq.Expressions.ExpressionType System.Linq.Expressions.Expression::node_type
	int32_t ___node_type_6;
	// System.Type System.Linq.Expressions.Expression::type
	Type_t * ___type_7;

public:
	inline static int32_t get_offset_of_node_type_6() { return static_cast<int32_t>(offsetof(Expression_t1588164026, ___node_type_6)); }
	inline int32_t get_node_type_6() const { return ___node_type_6; }
	inline int32_t* get_address_of_node_type_6() { return &___node_type_6; }
	inline void set_node_type_6(int32_t value)
	{
		___node_type_6 = value;
	}

	inline static int32_t get_offset_of_type_7() { return static_cast<int32_t>(offsetof(Expression_t1588164026, ___type_7)); }
	inline Type_t * get_type_7() const { return ___type_7; }
	inline Type_t ** get_address_of_type_7() { return &___type_7; }
	inline void set_type_7(Type_t * value)
	{
		___type_7 = value;
		Il2CppCodeGenWriteBarrier((&___type_7), value);
	}
};

struct Expression_t1588164026_StaticFields
{
public:
	// System.Func`2<System.Linq.Expressions.Expression,System.Type> System.Linq.Expressions.Expression::<>f__am$cache2
	Func_2_t1273750444 * ___U3CU3Ef__amU24cache2_8;
	// System.Func`2<System.Linq.Expressions.ParameterExpression,System.Type> System.Linq.Expressions.Expression::<>f__am$cache3
	Func_2_t1420191674 * ___U3CU3Ef__amU24cache3_9;
	// System.Action`1<System.Reflection.FieldInfo> System.Linq.Expressions.Expression::<>f__am$cache4
	Action_1_t59202884 * ___U3CU3Ef__amU24cache4_10;
	// System.Action`1<System.Reflection.PropertyInfo> System.Linq.Expressions.Expression::<>f__am$cache5
	Action_1_t859809546 * ___U3CU3Ef__amU24cache5_11;
	// System.Func`2<System.Reflection.FieldInfo,System.Type> System.Linq.Expressions.Expression::<>f__am$cache6
	Func_2_t4148147921 * ___U3CU3Ef__amU24cache6_12;
	// System.Func`2<System.Reflection.PropertyInfo,System.Type> System.Linq.Expressions.Expression::<>f__am$cache7
	Func_2_t468852531 * ___U3CU3Ef__amU24cache7_13;
	// System.Func`2<System.Type,System.Boolean> System.Linq.Expressions.Expression::<>f__am$cache8
	Func_2_t561252955 * ___U3CU3Ef__amU24cache8_14;
	// System.Func`2<System.Type,System.Boolean> System.Linq.Expressions.Expression::<>f__am$cache9
	Func_2_t561252955 * ___U3CU3Ef__amU24cache9_15;
	// System.Func`2<System.Type,System.Boolean> System.Linq.Expressions.Expression::<>f__am$cacheA
	Func_2_t561252955 * ___U3CU3Ef__amU24cacheA_16;
	// System.Func`2<System.Type,System.Boolean> System.Linq.Expressions.Expression::<>f__am$cacheB
	Func_2_t561252955 * ___U3CU3Ef__amU24cacheB_17;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache2_8() { return static_cast<int32_t>(offsetof(Expression_t1588164026_StaticFields, ___U3CU3Ef__amU24cache2_8)); }
	inline Func_2_t1273750444 * get_U3CU3Ef__amU24cache2_8() const { return ___U3CU3Ef__amU24cache2_8; }
	inline Func_2_t1273750444 ** get_address_of_U3CU3Ef__amU24cache2_8() { return &___U3CU3Ef__amU24cache2_8; }
	inline void set_U3CU3Ef__amU24cache2_8(Func_2_t1273750444 * value)
	{
		___U3CU3Ef__amU24cache2_8 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache2_8), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache3_9() { return static_cast<int32_t>(offsetof(Expression_t1588164026_StaticFields, ___U3CU3Ef__amU24cache3_9)); }
	inline Func_2_t1420191674 * get_U3CU3Ef__amU24cache3_9() const { return ___U3CU3Ef__amU24cache3_9; }
	inline Func_2_t1420191674 ** get_address_of_U3CU3Ef__amU24cache3_9() { return &___U3CU3Ef__amU24cache3_9; }
	inline void set_U3CU3Ef__amU24cache3_9(Func_2_t1420191674 * value)
	{
		___U3CU3Ef__amU24cache3_9 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache3_9), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache4_10() { return static_cast<int32_t>(offsetof(Expression_t1588164026_StaticFields, ___U3CU3Ef__amU24cache4_10)); }
	inline Action_1_t59202884 * get_U3CU3Ef__amU24cache4_10() const { return ___U3CU3Ef__amU24cache4_10; }
	inline Action_1_t59202884 ** get_address_of_U3CU3Ef__amU24cache4_10() { return &___U3CU3Ef__amU24cache4_10; }
	inline void set_U3CU3Ef__amU24cache4_10(Action_1_t59202884 * value)
	{
		___U3CU3Ef__amU24cache4_10 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache4_10), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache5_11() { return static_cast<int32_t>(offsetof(Expression_t1588164026_StaticFields, ___U3CU3Ef__amU24cache5_11)); }
	inline Action_1_t859809546 * get_U3CU3Ef__amU24cache5_11() const { return ___U3CU3Ef__amU24cache5_11; }
	inline Action_1_t859809546 ** get_address_of_U3CU3Ef__amU24cache5_11() { return &___U3CU3Ef__amU24cache5_11; }
	inline void set_U3CU3Ef__amU24cache5_11(Action_1_t859809546 * value)
	{
		___U3CU3Ef__amU24cache5_11 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache5_11), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache6_12() { return static_cast<int32_t>(offsetof(Expression_t1588164026_StaticFields, ___U3CU3Ef__amU24cache6_12)); }
	inline Func_2_t4148147921 * get_U3CU3Ef__amU24cache6_12() const { return ___U3CU3Ef__amU24cache6_12; }
	inline Func_2_t4148147921 ** get_address_of_U3CU3Ef__amU24cache6_12() { return &___U3CU3Ef__amU24cache6_12; }
	inline void set_U3CU3Ef__amU24cache6_12(Func_2_t4148147921 * value)
	{
		___U3CU3Ef__amU24cache6_12 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache6_12), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache7_13() { return static_cast<int32_t>(offsetof(Expression_t1588164026_StaticFields, ___U3CU3Ef__amU24cache7_13)); }
	inline Func_2_t468852531 * get_U3CU3Ef__amU24cache7_13() const { return ___U3CU3Ef__amU24cache7_13; }
	inline Func_2_t468852531 ** get_address_of_U3CU3Ef__amU24cache7_13() { return &___U3CU3Ef__amU24cache7_13; }
	inline void set_U3CU3Ef__amU24cache7_13(Func_2_t468852531 * value)
	{
		___U3CU3Ef__amU24cache7_13 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache7_13), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache8_14() { return static_cast<int32_t>(offsetof(Expression_t1588164026_StaticFields, ___U3CU3Ef__amU24cache8_14)); }
	inline Func_2_t561252955 * get_U3CU3Ef__amU24cache8_14() const { return ___U3CU3Ef__amU24cache8_14; }
	inline Func_2_t561252955 ** get_address_of_U3CU3Ef__amU24cache8_14() { return &___U3CU3Ef__amU24cache8_14; }
	inline void set_U3CU3Ef__amU24cache8_14(Func_2_t561252955 * value)
	{
		___U3CU3Ef__amU24cache8_14 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache8_14), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache9_15() { return static_cast<int32_t>(offsetof(Expression_t1588164026_StaticFields, ___U3CU3Ef__amU24cache9_15)); }
	inline Func_2_t561252955 * get_U3CU3Ef__amU24cache9_15() const { return ___U3CU3Ef__amU24cache9_15; }
	inline Func_2_t561252955 ** get_address_of_U3CU3Ef__amU24cache9_15() { return &___U3CU3Ef__amU24cache9_15; }
	inline void set_U3CU3Ef__amU24cache9_15(Func_2_t561252955 * value)
	{
		___U3CU3Ef__amU24cache9_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache9_15), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheA_16() { return static_cast<int32_t>(offsetof(Expression_t1588164026_StaticFields, ___U3CU3Ef__amU24cacheA_16)); }
	inline Func_2_t561252955 * get_U3CU3Ef__amU24cacheA_16() const { return ___U3CU3Ef__amU24cacheA_16; }
	inline Func_2_t561252955 ** get_address_of_U3CU3Ef__amU24cacheA_16() { return &___U3CU3Ef__amU24cacheA_16; }
	inline void set_U3CU3Ef__amU24cacheA_16(Func_2_t561252955 * value)
	{
		___U3CU3Ef__amU24cacheA_16 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheA_16), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_17() { return static_cast<int32_t>(offsetof(Expression_t1588164026_StaticFields, ___U3CU3Ef__amU24cacheB_17)); }
	inline Func_2_t561252955 * get_U3CU3Ef__amU24cacheB_17() const { return ___U3CU3Ef__amU24cacheB_17; }
	inline Func_2_t561252955 ** get_address_of_U3CU3Ef__amU24cacheB_17() { return &___U3CU3Ef__amU24cacheB_17; }
	inline void set_U3CU3Ef__amU24cacheB_17(Func_2_t561252955 * value)
	{
		___U3CU3Ef__amU24cacheB_17 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_17), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXPRESSION_T1588164026_H
#ifndef FUNC_3_T316741917_H
#define FUNC_3_T316741917_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Func`3<System.Object,System.Single,System.Single>
struct  Func_3_t316741917  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FUNC_3_T316741917_H
#ifndef FUNC_1_T827013421_H
#define FUNC_1_T827013421_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Func`1<System.Single>
struct  Func_1_t827013421  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FUNC_1_T827013421_H
#ifndef FUNC_3_T3175904329_H
#define FUNC_3_T3175904329_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Func`3<System.Int64,System.Int64,System.Int64>
struct  Func_3_t3175904329  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FUNC_3_T3175904329_H
#ifndef FUNC_3_T2691639151_H
#define FUNC_3_T2691639151_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Func`3<System.Single,System.Single,System.Single>
struct  Func_3_t2691639151  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FUNC_3_T2691639151_H
#ifndef FUNC_3_T2424329933_H
#define FUNC_3_T2424329933_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Func`3<System.Nullable`1<System.Single>,System.Object,System.Nullable`1<System.Single>>
struct  Func_3_t2424329933  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FUNC_3_T2424329933_H
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
#ifndef FUNC_3_T3770304021_H
#define FUNC_3_T3770304021_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Func`3<System.Object,System.Int64,System.Int64>
struct  Func_3_t3770304021  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FUNC_3_T3770304021_H
#ifndef FUNC_3_T1482559369_H
#define FUNC_3_T1482559369_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Func`3<System.Object,System.Double,System.Double>
struct  Func_3_t1482559369  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FUNC_3_T1482559369_H
#ifndef FUNC_3_T1567933413_H
#define FUNC_3_T1567933413_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Func`3<System.Object,System.Decimal,System.Decimal>
struct  Func_3_t1567933413  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FUNC_3_T1567933413_H
#ifndef FUNC_3_T3344861838_H
#define FUNC_3_T3344861838_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Func`3<System.Int32,System.Int32,System.Int32>
struct  Func_3_t3344861838  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FUNC_3_T3344861838_H
#ifndef FUNC_3_T3801552229_H
#define FUNC_3_T3801552229_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Func`3<System.Decimal,System.Decimal,System.Decimal>
struct  Func_3_t3801552229  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FUNC_3_T3801552229_H
#ifndef EVENTFUNCTION_1_T1764640198_H
#define EVENTFUNCTION_1_T1764640198_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>
struct  EventFunction_1_t1764640198  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTFUNCTION_1_T1764640198_H
#ifndef FUNC_3_T1810338832_H
#define FUNC_3_T1810338832_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Func`3<System.Double,System.Double,System.Double>
struct  Func_3_t1810338832  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FUNC_3_T1810338832_H
#ifndef FUNC_3_T810756017_H
#define FUNC_3_T810756017_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Func`3<System.Object,System.Int32,System.Int32>
struct  Func_3_t810756017  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FUNC_3_T810756017_H
#ifndef FUNC_3_T3398609381_H
#define FUNC_3_T3398609381_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Func`3<System.Object,System.Object,System.Object>
struct  Func_3_t3398609381  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FUNC_3_T3398609381_H
#ifndef FUNC_1_T2380692400_H
#define FUNC_1_T2380692400_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Func`1<System.Int32>
struct  Func_1_t2380692400  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FUNC_1_T2380692400_H
#ifndef FUNC_1_T24412010_H
#define FUNC_1_T24412010_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Func`1<System.Double>
struct  Func_1_t24412010  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FUNC_1_T24412010_H
#ifndef FUNC_1_T4100568109_H
#define FUNC_1_T4100568109_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Func`1<System.Nullable`1<System.Decimal>>
struct  Func_1_t4100568109  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FUNC_1_T4100568109_H
#ifndef FUNC_1_T3166313951_H
#define FUNC_1_T3166313951_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Func`1<System.Int64>
struct  Func_1_t3166313951  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FUNC_1_T3166313951_H
#ifndef FUNC_1_T2378006027_H
#define FUNC_1_T2378006027_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Func`1<System.Decimal>
struct  Func_1_t2378006027  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FUNC_1_T2378006027_H
#ifndef UNARYEXPRESSION_T3914580921_H
#define UNARYEXPRESSION_T3914580921_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.UnaryExpression
struct  UnaryExpression_t3914580921  : public Expression_t1588164026
{
public:
	// System.Linq.Expressions.Expression System.Linq.Expressions.UnaryExpression::operand
	Expression_t1588164026 * ___operand_18;
	// System.Reflection.MethodInfo System.Linq.Expressions.UnaryExpression::method
	MethodInfo_t * ___method_19;
	// System.Boolean System.Linq.Expressions.UnaryExpression::is_lifted
	bool ___is_lifted_20;

public:
	inline static int32_t get_offset_of_operand_18() { return static_cast<int32_t>(offsetof(UnaryExpression_t3914580921, ___operand_18)); }
	inline Expression_t1588164026 * get_operand_18() const { return ___operand_18; }
	inline Expression_t1588164026 ** get_address_of_operand_18() { return &___operand_18; }
	inline void set_operand_18(Expression_t1588164026 * value)
	{
		___operand_18 = value;
		Il2CppCodeGenWriteBarrier((&___operand_18), value);
	}

	inline static int32_t get_offset_of_method_19() { return static_cast<int32_t>(offsetof(UnaryExpression_t3914580921, ___method_19)); }
	inline MethodInfo_t * get_method_19() const { return ___method_19; }
	inline MethodInfo_t ** get_address_of_method_19() { return &___method_19; }
	inline void set_method_19(MethodInfo_t * value)
	{
		___method_19 = value;
		Il2CppCodeGenWriteBarrier((&___method_19), value);
	}

	inline static int32_t get_offset_of_is_lifted_20() { return static_cast<int32_t>(offsetof(UnaryExpression_t3914580921, ___is_lifted_20)); }
	inline bool get_is_lifted_20() const { return ___is_lifted_20; }
	inline bool* get_address_of_is_lifted_20() { return &___is_lifted_20; }
	inline void set_is_lifted_20(bool value)
	{
		___is_lifted_20 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNARYEXPRESSION_T3914580921_H
#ifndef CONSTANTEXPRESSION_T3613654278_H
#define CONSTANTEXPRESSION_T3613654278_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.ConstantExpression
struct  ConstantExpression_t3613654278  : public Expression_t1588164026
{
public:
	// System.Object System.Linq.Expressions.ConstantExpression::value
	RuntimeObject * ___value_18;

public:
	inline static int32_t get_offset_of_value_18() { return static_cast<int32_t>(offsetof(ConstantExpression_t3613654278, ___value_18)); }
	inline RuntimeObject * get_value_18() const { return ___value_18; }
	inline RuntimeObject ** get_address_of_value_18() { return &___value_18; }
	inline void set_value_18(RuntimeObject * value)
	{
		___value_18 = value;
		Il2CppCodeGenWriteBarrier((&___value_18), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONSTANTEXPRESSION_T3613654278_H
#ifndef FUNC_1_T3822001908_H
#define FUNC_1_T3822001908_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Func`1<System.Boolean>
struct  Func_1_t3822001908  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FUNC_1_T3822001908_H
#ifndef PARAMETEREXPRESSION_T1118422084_H
#define PARAMETEREXPRESSION_T1118422084_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.ParameterExpression
struct  ParameterExpression_t1118422084  : public Expression_t1588164026
{
public:
	// System.String System.Linq.Expressions.ParameterExpression::name
	String_t* ___name_18;

public:
	inline static int32_t get_offset_of_name_18() { return static_cast<int32_t>(offsetof(ParameterExpression_t1118422084, ___name_18)); }
	inline String_t* get_name_18() const { return ___name_18; }
	inline String_t** get_address_of_name_18() { return &___name_18; }
	inline void set_name_18(String_t* value)
	{
		___name_18 = value;
		Il2CppCodeGenWriteBarrier((&___name_18), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARAMETEREXPRESSION_T1118422084_H
#ifndef FUNC_1_T1746974092_H
#define FUNC_1_T1746974092_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Func`1<System.Nullable`1<System.Double>>
struct  Func_1_t1746974092  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FUNC_1_T1746974092_H
#ifndef FUNC_2_T3759279471_H
#define FUNC_2_T3759279471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Func`2<System.Object,System.Boolean>
struct  Func_2_t3759279471  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FUNC_2_T3759279471_H
#ifndef FUNC_3_T1794333537_H
#define FUNC_3_T1794333537_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Func`3<System.Nullable`1<System.Int64>,System.Object,System.Nullable`1<System.Int64>>
struct  Func_3_t1794333537  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FUNC_3_T1794333537_H
#ifndef FUNC_2_T2447130374_H
#define FUNC_2_T2447130374_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Func`2<System.Object,System.Object>
struct  Func_2_t2447130374  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FUNC_2_T2447130374_H
#ifndef FUNC_3_T415791182_H
#define FUNC_3_T415791182_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Func`3<System.Object,System.Object,System.Boolean>
struct  Func_3_t415791182  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FUNC_3_T415791182_H
#ifndef FUNC_1_T2509852811_H
#define FUNC_1_T2509852811_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Func`1<System.Object>
struct  Func_1_t2509852811  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FUNC_1_T2509852811_H
#ifndef FUNC_1_T4103254482_H
#define FUNC_1_T4103254482_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Func`1<System.Nullable`1<System.Int32>>
struct  Func_1_t4103254482  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FUNC_1_T4103254482_H
#ifndef LAMBDAEXPRESSION_T3131094331_H
#define LAMBDAEXPRESSION_T3131094331_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.LambdaExpression
struct  LambdaExpression_t3131094331  : public Expression_t1588164026
{
public:
	// System.Linq.Expressions.Expression System.Linq.Expressions.LambdaExpression::body
	Expression_t1588164026 * ___body_18;
	// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ParameterExpression> System.Linq.Expressions.LambdaExpression::parameters
	ReadOnlyCollection_1_t2330998371 * ___parameters_19;

public:
	inline static int32_t get_offset_of_body_18() { return static_cast<int32_t>(offsetof(LambdaExpression_t3131094331, ___body_18)); }
	inline Expression_t1588164026 * get_body_18() const { return ___body_18; }
	inline Expression_t1588164026 ** get_address_of_body_18() { return &___body_18; }
	inline void set_body_18(Expression_t1588164026 * value)
	{
		___body_18 = value;
		Il2CppCodeGenWriteBarrier((&___body_18), value);
	}

	inline static int32_t get_offset_of_parameters_19() { return static_cast<int32_t>(offsetof(LambdaExpression_t3131094331, ___parameters_19)); }
	inline ReadOnlyCollection_1_t2330998371 * get_parameters_19() const { return ___parameters_19; }
	inline ReadOnlyCollection_1_t2330998371 ** get_address_of_parameters_19() { return &___parameters_19; }
	inline void set_parameters_19(ReadOnlyCollection_1_t2330998371 * value)
	{
		___parameters_19 = value;
		Il2CppCodeGenWriteBarrier((&___parameters_19), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LAMBDAEXPRESSION_T3131094331_H
#ifndef FUNC_1_T2549575503_H
#define FUNC_1_T2549575503_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Func`1<System.Nullable`1<System.Single>>
struct  Func_1_t2549575503  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FUNC_1_T2549575503_H
#ifndef FUNC_1_T593908737_H
#define FUNC_1_T593908737_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Func`1<System.Nullable`1<System.Int64>>
struct  Func_1_t593908737  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FUNC_1_T593908737_H
#ifndef EXPRESSION_1_T2535603710_H
#define EXPRESSION_1_T2535603710_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.Expression`1<System.Func`1<System.Nullable`1<System.Single>>>
struct  Expression_1_t2535603710  : public LambdaExpression_t3131094331
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXPRESSION_1_T2535603710_H
#ifndef EXPRESSION_1_T2366720607_H
#define EXPRESSION_1_T2366720607_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.Expression`1<System.Func`1<System.Int32>>
struct  Expression_1_t2366720607  : public LambdaExpression_t3131094331
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXPRESSION_1_T2366720607_H
#ifndef EXPRESSION_1_T3152342158_H
#define EXPRESSION_1_T3152342158_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.Expression`1<System.Func`1<System.Int64>>
struct  Expression_1_t3152342158  : public LambdaExpression_t3131094331
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXPRESSION_1_T3152342158_H
#ifndef EXPRESSION_1_T4086596316_H
#define EXPRESSION_1_T4086596316_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.Expression`1<System.Func`1<System.Nullable`1<System.Decimal>>>
struct  Expression_1_t4086596316  : public LambdaExpression_t3131094331
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXPRESSION_1_T4086596316_H
#ifndef EXPRESSION_1_T10440217_H
#define EXPRESSION_1_T10440217_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.Expression`1<System.Func`1<System.Double>>
struct  Expression_1_t10440217  : public LambdaExpression_t3131094331
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXPRESSION_1_T10440217_H
#ifndef EXPRESSION_1_T2433158581_H
#define EXPRESSION_1_T2433158581_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.Expression`1<System.Func`2<System.Object,System.Object>>
struct  Expression_1_t2433158581  : public LambdaExpression_t3131094331
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXPRESSION_1_T2433158581_H
#ifndef EXPRESSION_1_T3808030115_H
#define EXPRESSION_1_T3808030115_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.Expression`1<System.Func`1<System.Boolean>>
struct  Expression_1_t3808030115  : public LambdaExpression_t3131094331
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXPRESSION_1_T3808030115_H
#ifndef EXPRESSION_1_T2364034234_H
#define EXPRESSION_1_T2364034234_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.Expression`1<System.Func`1<System.Decimal>>
struct  Expression_1_t2364034234  : public LambdaExpression_t3131094331
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXPRESSION_1_T2364034234_H
#ifndef EXPRESSION_1_T813041628_H
#define EXPRESSION_1_T813041628_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.Expression`1<System.Func`1<System.Single>>
struct  Expression_1_t813041628  : public LambdaExpression_t3131094331
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXPRESSION_1_T813041628_H
#ifndef EXPRESSION_1_T3384637588_H
#define EXPRESSION_1_T3384637588_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.Expression`1<System.Func`3<System.Object,System.Object,System.Object>>
struct  Expression_1_t3384637588  : public LambdaExpression_t3131094331
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXPRESSION_1_T3384637588_H
#ifndef EXPRESSION_1_T3745307678_H
#define EXPRESSION_1_T3745307678_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.Expression`1<System.Func`2<System.Object,System.Boolean>>
struct  Expression_1_t3745307678  : public LambdaExpression_t3131094331
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXPRESSION_1_T3745307678_H
#ifndef EXPRESSION_1_T2495881018_H
#define EXPRESSION_1_T2495881018_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.Expression`1<System.Func`1<System.Object>>
struct  Expression_1_t2495881018  : public LambdaExpression_t3131094331
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXPRESSION_1_T2495881018_H
#ifndef EXPRESSION_1_T1733002299_H
#define EXPRESSION_1_T1733002299_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.Expression`1<System.Func`1<System.Nullable`1<System.Double>>>
struct  Expression_1_t1733002299  : public LambdaExpression_t3131094331
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXPRESSION_1_T1733002299_H
#ifndef EXPRESSION_1_T4089282689_H
#define EXPRESSION_1_T4089282689_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.Expression`1<System.Func`1<System.Nullable`1<System.Int32>>>
struct  Expression_1_t4089282689  : public LambdaExpression_t3131094331
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXPRESSION_1_T4089282689_H
#ifndef EXPRESSION_1_T579936944_H
#define EXPRESSION_1_T579936944_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.Expression`1<System.Func`1<System.Nullable`1<System.Int64>>>
struct  Expression_1_t579936944  : public LambdaExpression_t3131094331
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXPRESSION_1_T579936944_H
// System.Type[]
struct TypeU5BU5D_t3940880105  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Type_t * m_Items[1];

public:
	inline Type_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Type_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Type_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Type_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Type_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Type_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Linq.Expressions.Expression[]
struct ExpressionU5BU5D_t2266720799  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Expression_t1588164026 * m_Items[1];

public:
	inline Expression_t1588164026 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Expression_t1588164026 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Expression_t1588164026 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Expression_t1588164026 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Expression_t1588164026 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Expression_t1588164026 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Linq.Expressions.ParameterExpression[]
struct ParameterExpressionU5BU5D_t2413162029  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ParameterExpression_t1118422084 * m_Items[1];

public:
	inline ParameterExpression_t1118422084 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ParameterExpression_t1118422084 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ParameterExpression_t1118422084 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline ParameterExpression_t1118422084 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ParameterExpression_t1118422084 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ParameterExpression_t1118422084 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>[]
struct KeyValuePair_2U5BU5D_t3014208436  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) KeyValuePair_2_t847377929  m_Items[1];

public:
	inline KeyValuePair_2_t847377929  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_t847377929 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_t847377929  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline KeyValuePair_2_t847377929  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_t847377929 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_t847377929  value)
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


// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_m2287542950_gshared (List_1_t257213610 * __this, int32_t p0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
extern "C" IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m2934127733_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);

// System.Void System.Linq.Check::SourceAndFunc(System.Object,System.Object)
extern "C" IL2CPP_METHOD_ATTR void Check_SourceAndFunc_m1489824209 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___source0, RuntimeObject * ___func1, const RuntimeMethod* method);
// System.Void System.ArgumentNullException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m1170824041 (ArgumentNullException_t1615371798 * __this, String_t* p0, const RuntimeMethod* method);
// System.Void System.Linq.Check::SourceAndSelector(System.Object,System.Object)
extern "C" IL2CPP_METHOD_ATTR void Check_SourceAndSelector_m4013530551 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___source0, RuntimeObject * ___selector1, const RuntimeMethod* method);
// System.Void System.Linq.Check::SourceAndFuncAndSelector(System.Object,System.Object,System.Object)
extern "C" IL2CPP_METHOD_ATTR void Check_SourceAndFuncAndSelector_m4072574892 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___source0, RuntimeObject * ___func1, RuntimeObject * ___selector2, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
extern "C" IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m1620074514 (RuntimeObject * __this /* static, unused */, RuntimeTypeHandle_t3027515415  p0, const RuntimeMethod* method);
// System.Reflection.MethodInfo System.Linq.Queryable::MakeGeneric(System.Reflection.MethodBase,System.Type[])
extern "C" IL2CPP_METHOD_ATTR MethodInfo_t * Queryable_MakeGeneric_m238132717 (RuntimeObject * __this /* static, unused */, MethodBase_t * ___method0, TypeU5BU5D_t3940880105* ___parameters1, const RuntimeMethod* method);
// System.Linq.Expressions.ConstantExpression System.Linq.Expressions.Expression::Constant(System.Object)
extern "C" IL2CPP_METHOD_ATTR ConstantExpression_t3613654278 * Expression_Constant_m3269986673 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___value0, const RuntimeMethod* method);
// System.Linq.Expressions.UnaryExpression System.Linq.Expressions.Expression::Quote(System.Linq.Expressions.Expression)
extern "C" IL2CPP_METHOD_ATTR UnaryExpression_t3914580921 * Expression_Quote_m2632568450 (RuntimeObject * __this /* static, unused */, Expression_t1588164026 * ___expression0, const RuntimeMethod* method);
// System.Linq.Expressions.Expression System.Linq.Queryable::StaticCall(System.Reflection.MethodInfo,System.Linq.Expressions.Expression[])
extern "C" IL2CPP_METHOD_ATTR Expression_t1588164026 * Queryable_StaticCall_m1277226490 (RuntimeObject * __this /* static, unused */, MethodInfo_t * ___method0, ExpressionU5BU5D_t2266720799* ___expressions1, const RuntimeMethod* method);
// System.Void System.Linq.Check::Source(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Check_Source_m4098695967 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___source0, const RuntimeMethod* method);
// System.Void System.InvalidOperationException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_m237278729 (InvalidOperationException_t56020091 * __this, String_t* p0, const RuntimeMethod* method);
// System.Void System.ArgumentOutOfRangeException::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_m2047740448 (ArgumentOutOfRangeException_t777629997 * __this, const RuntimeMethod* method);
// System.Void System.InvalidOperationException::.ctor()
extern "C" IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_m2734335978 (InvalidOperationException_t56020091 * __this, const RuntimeMethod* method);
// System.Void System.Linq.Check::SourceAndPredicate(System.Object,System.Object)
extern "C" IL2CPP_METHOD_ATTR void Check_SourceAndPredicate_m2332465641 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___source0, RuntimeObject * ___predicate1, const RuntimeMethod* method);
// System.Void UnityEngine.EventSystems.ExecuteEvents::GetEventChain(UnityEngine.GameObject,System.Collections.Generic.IList`1<UnityEngine.Transform>)
extern "C" IL2CPP_METHOD_ATTR void ExecuteEvents_GetEventChain_m2404658789 (RuntimeObject * __this /* static, unused */, GameObject_t1113636619 * ___root0, RuntimeObject* ___eventChain1, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.Transform>::get_Item(System.Int32)
#define List_1_get_Item_m3022113929(__this, p0, method) ((  Transform_t3600365921 * (*) (List_1_t777473367 *, int32_t, const RuntimeMethod*))List_1_get_Item_m2287542950_gshared)(__this, p0, method)
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
extern "C" IL2CPP_METHOD_ATTR GameObject_t1113636619 * Component_get_gameObject_m442555142 (Component_t1923634451 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Transform>::get_Count()
#define List_1_get_Count_m3787308655(__this, method) ((  int32_t (*) (List_1_t777473367 *, const RuntimeMethod*))List_1_get_Count_m2934127733_gshared)(__this, method)
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR bool Object_op_Equality_m1810815630 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, Object_t631007953 * p1, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
extern "C" IL2CPP_METHOD_ATTR Transform_t3600365921 * GameObject_get_transform_m1369836730 (GameObject_t1113636619 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Transform::get_parent()
extern "C" IL2CPP_METHOD_ATTR Transform_t3600365921 * Transform_get_parent_m835071599 (Transform_t3600365921 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4071470834 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, Object_t631007953 * p1, const RuntimeMethod* method);
// TR System.Linq.Enumerable::SumNullable<System.Object,System.Nullable`1<System.Int64>>(System.Collections.Generic.IEnumerable`1<TA>,TR,System.Func`3<TR,TA,TR>)
extern "C" IL2CPP_METHOD_ATTR Nullable_1_t1164162090  Enumerable_SumNullable_TisRuntimeObject_TisNullable_1_t1164162090_m3330937784_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* ___source0, Nullable_1_t1164162090  ___zero1, Func_3_t1794333537 * ___selector2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Enumerable_SumNullable_TisRuntimeObject_TisNullable_1_t1164162090_m3330937784_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_t1164162090  V_0;
	memset(&V_0, 0, sizeof(V_0));
	RuntimeObject * V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Nullable_1_t1164162090  L_0 = ___zero1;
		V_0 = (Nullable_1_t1164162090 )L_0;
		RuntimeObject* L_1 = ___source0;
		NullCheck((RuntimeObject*)L_1);
		RuntimeObject* L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Object>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_1);
		V_2 = (RuntimeObject*)L_2;
	}

IL_0009:
	try
	{ // begin try (depth: 1)
		{
			goto IL_001e;
		}

IL_000e:
		{
			RuntimeObject* L_3 = V_2;
			NullCheck((RuntimeObject*)L_3);
			RuntimeObject * L_4 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Object>::get_Current() */, IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (RuntimeObject*)L_3);
			V_1 = (RuntimeObject *)L_4;
			Func_3_t1794333537 * L_5 = ___selector2;
			Nullable_1_t1164162090  L_6 = V_0;
			RuntimeObject * L_7 = V_1;
			NullCheck((Func_3_t1794333537 *)L_5);
			Nullable_1_t1164162090  L_8 = ((  Nullable_1_t1164162090  (*) (Func_3_t1794333537 *, Nullable_1_t1164162090 , RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((Func_3_t1794333537 *)L_5, (Nullable_1_t1164162090 )L_6, (RuntimeObject *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
			V_0 = (Nullable_1_t1164162090 )L_8;
		}

IL_001e:
		{
			RuntimeObject* L_9 = V_2;
			NullCheck((RuntimeObject*)L_9);
			bool L_10 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, (RuntimeObject*)L_9);
			if (L_10)
			{
				goto IL_000e;
			}
		}

IL_0029:
		{
			IL2CPP_LEAVE(0x39, FINALLY_002e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_002e;
	}

FINALLY_002e:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_11 = V_2;
			if (L_11)
			{
				goto IL_0032;
			}
		}

IL_0031:
		{
			IL2CPP_END_FINALLY(46)
		}

IL_0032:
		{
			RuntimeObject* L_12 = V_2;
			NullCheck((RuntimeObject*)L_12);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, (RuntimeObject*)L_12);
			IL2CPP_END_FINALLY(46)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(46)
	{
		IL2CPP_JUMP_TBL(0x39, IL_0039)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0039:
	{
		Nullable_1_t1164162090  L_13 = V_0;
		return L_13;
	}
}
// TR System.Linq.Enumerable::SumNullable<System.Object,System.Nullable`1<System.Single>>(System.Collections.Generic.IEnumerable`1<TA>,TR,System.Func`3<TR,TA,TR>)
extern "C" IL2CPP_METHOD_ATTR Nullable_1_t3119828856  Enumerable_SumNullable_TisRuntimeObject_TisNullable_1_t3119828856_m2803470048_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* ___source0, Nullable_1_t3119828856  ___zero1, Func_3_t2424329933 * ___selector2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Enumerable_SumNullable_TisRuntimeObject_TisNullable_1_t3119828856_m2803470048_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_t3119828856  V_0;
	memset(&V_0, 0, sizeof(V_0));
	RuntimeObject * V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Nullable_1_t3119828856  L_0 = ___zero1;
		V_0 = (Nullable_1_t3119828856 )L_0;
		RuntimeObject* L_1 = ___source0;
		NullCheck((RuntimeObject*)L_1);
		RuntimeObject* L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Object>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_1);
		V_2 = (RuntimeObject*)L_2;
	}

IL_0009:
	try
	{ // begin try (depth: 1)
		{
			goto IL_001e;
		}

IL_000e:
		{
			RuntimeObject* L_3 = V_2;
			NullCheck((RuntimeObject*)L_3);
			RuntimeObject * L_4 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Object>::get_Current() */, IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (RuntimeObject*)L_3);
			V_1 = (RuntimeObject *)L_4;
			Func_3_t2424329933 * L_5 = ___selector2;
			Nullable_1_t3119828856  L_6 = V_0;
			RuntimeObject * L_7 = V_1;
			NullCheck((Func_3_t2424329933 *)L_5);
			Nullable_1_t3119828856  L_8 = ((  Nullable_1_t3119828856  (*) (Func_3_t2424329933 *, Nullable_1_t3119828856 , RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((Func_3_t2424329933 *)L_5, (Nullable_1_t3119828856 )L_6, (RuntimeObject *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
			V_0 = (Nullable_1_t3119828856 )L_8;
		}

IL_001e:
		{
			RuntimeObject* L_9 = V_2;
			NullCheck((RuntimeObject*)L_9);
			bool L_10 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, (RuntimeObject*)L_9);
			if (L_10)
			{
				goto IL_000e;
			}
		}

IL_0029:
		{
			IL2CPP_LEAVE(0x39, FINALLY_002e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_002e;
	}

FINALLY_002e:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_11 = V_2;
			if (L_11)
			{
				goto IL_0032;
			}
		}

IL_0031:
		{
			IL2CPP_END_FINALLY(46)
		}

IL_0032:
		{
			RuntimeObject* L_12 = V_2;
			NullCheck((RuntimeObject*)L_12);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, (RuntimeObject*)L_12);
			IL2CPP_END_FINALLY(46)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(46)
	{
		IL2CPP_JUMP_TBL(0x39, IL_0039)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0039:
	{
		Nullable_1_t3119828856  L_13 = V_0;
		return L_13;
	}
}
// TR System.Linq.Enumerable::SumNullable<System.Object,System.Object>(System.Collections.Generic.IEnumerable`1<TA>,TR,System.Func`3<TR,TA,TR>)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Enumerable_SumNullable_TisRuntimeObject_TisRuntimeObject_m447531663_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* ___source0, RuntimeObject * ___zero1, Func_3_t3398609381 * ___selector2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Enumerable_SumNullable_TisRuntimeObject_TisRuntimeObject_m447531663_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		RuntimeObject * L_0 = ___zero1;
		V_0 = (RuntimeObject *)L_0;
		RuntimeObject* L_1 = ___source0;
		NullCheck((RuntimeObject*)L_1);
		RuntimeObject* L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Object>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_1);
		V_2 = (RuntimeObject*)L_2;
	}

IL_0009:
	try
	{ // begin try (depth: 1)
		{
			goto IL_001e;
		}

IL_000e:
		{
			RuntimeObject* L_3 = V_2;
			NullCheck((RuntimeObject*)L_3);
			RuntimeObject * L_4 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Object>::get_Current() */, IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (RuntimeObject*)L_3);
			V_1 = (RuntimeObject *)L_4;
			Func_3_t3398609381 * L_5 = ___selector2;
			RuntimeObject * L_6 = V_0;
			RuntimeObject * L_7 = V_1;
			NullCheck((Func_3_t3398609381 *)L_5);
			RuntimeObject * L_8 = ((  RuntimeObject * (*) (Func_3_t3398609381 *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((Func_3_t3398609381 *)L_5, (RuntimeObject *)L_6, (RuntimeObject *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
			V_0 = (RuntimeObject *)L_8;
		}

IL_001e:
		{
			RuntimeObject* L_9 = V_2;
			NullCheck((RuntimeObject*)L_9);
			bool L_10 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, (RuntimeObject*)L_9);
			if (L_10)
			{
				goto IL_000e;
			}
		}

IL_0029:
		{
			IL2CPP_LEAVE(0x39, FINALLY_002e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_002e;
	}

FINALLY_002e:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_11 = V_2;
			if (L_11)
			{
				goto IL_0032;
			}
		}

IL_0031:
		{
			IL2CPP_END_FINALLY(46)
		}

IL_0032:
		{
			RuntimeObject* L_12 = V_2;
			NullCheck((RuntimeObject*)L_12);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, (RuntimeObject*)L_12);
			IL2CPP_END_FINALLY(46)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(46)
	{
		IL2CPP_JUMP_TBL(0x39, IL_0039)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0039:
	{
		RuntimeObject * L_13 = V_0;
		return L_13;
	}
}
// TResult System.Linq.Enumerable::Aggregate<System.Object,System.Object,System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,TAccumulate,System.Func`3<TAccumulate,TSource,TAccumulate>,System.Func`2<TAccumulate,TResult>)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Enumerable_Aggregate_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_m487105434_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* ___source0, RuntimeObject * ___seed1, Func_3_t3398609381 * ___func2, Func_2_t2447130374 * ___resultSelector3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Enumerable_Aggregate_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_m487105434_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		RuntimeObject* L_0 = ___source0;
		Func_3_t3398609381 * L_1 = ___func2;
		Check_SourceAndFunc_m1489824209(NULL /*static, unused*/, (RuntimeObject *)L_0, (RuntimeObject *)L_1, /*hidden argument*/NULL);
		Func_2_t2447130374 * L_2 = ___resultSelector3;
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_3 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_3, (String_t*)_stringLiteral787905828, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3,Enumerable_Aggregate_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_m487105434_RuntimeMethod_var);
	}

IL_0018:
	{
		RuntimeObject * L_4 = ___seed1;
		V_0 = (RuntimeObject *)L_4;
		RuntimeObject* L_5 = ___source0;
		NullCheck((RuntimeObject*)L_5);
		RuntimeObject* L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Object>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_5);
		V_2 = (RuntimeObject*)L_6;
	}

IL_0021:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0036;
		}

IL_0026:
		{
			RuntimeObject* L_7 = V_2;
			NullCheck((RuntimeObject*)L_7);
			RuntimeObject * L_8 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Object>::get_Current() */, IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (RuntimeObject*)L_7);
			V_1 = (RuntimeObject *)L_8;
			Func_3_t3398609381 * L_9 = ___func2;
			RuntimeObject * L_10 = V_0;
			RuntimeObject * L_11 = V_1;
			NullCheck((Func_3_t3398609381 *)L_9);
			RuntimeObject * L_12 = ((  RuntimeObject * (*) (Func_3_t3398609381 *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((Func_3_t3398609381 *)L_9, (RuntimeObject *)L_10, (RuntimeObject *)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
			V_0 = (RuntimeObject *)L_12;
		}

IL_0036:
		{
			RuntimeObject* L_13 = V_2;
			NullCheck((RuntimeObject*)L_13);
			bool L_14 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, (RuntimeObject*)L_13);
			if (L_14)
			{
				goto IL_0026;
			}
		}

IL_0041:
		{
			IL2CPP_LEAVE(0x51, FINALLY_0046);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0046;
	}

FINALLY_0046:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_15 = V_2;
			if (L_15)
			{
				goto IL_004a;
			}
		}

IL_0049:
		{
			IL2CPP_END_FINALLY(70)
		}

IL_004a:
		{
			RuntimeObject* L_16 = V_2;
			NullCheck((RuntimeObject*)L_16);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, (RuntimeObject*)L_16);
			IL2CPP_END_FINALLY(70)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(70)
	{
		IL2CPP_JUMP_TBL(0x51, IL_0051)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0051:
	{
		Func_2_t2447130374 * L_17 = ___resultSelector3;
		RuntimeObject * L_18 = V_0;
		NullCheck((Func_2_t2447130374 *)L_17);
		RuntimeObject * L_19 = ((  RuntimeObject * (*) (Func_2_t2447130374 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3)->methodPointer)((Func_2_t2447130374 *)L_17, (RuntimeObject *)L_18, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3));
		return L_19;
	}
}
// TResult System.Linq.Enumerable::Max<System.Object,System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Enumerable_Max_TisRuntimeObject_TisRuntimeObject_m105652463_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* ___source0, Func_2_t2447130374 * ___selector1, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___source0;
		Func_2_t2447130374 * L_1 = ___selector1;
		Check_SourceAndSelector_m4013530551(NULL /*static, unused*/, (RuntimeObject *)L_0, (RuntimeObject *)L_1, /*hidden argument*/NULL);
		RuntimeObject* L_2 = ___source0;
		Func_2_t2447130374 * L_3 = ___selector1;
		RuntimeObject* L_4 = ((  RuntimeObject* (*) (RuntimeObject * /* static, unused */, RuntimeObject*, Func_2_t2447130374 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(NULL /*static, unused*/, (RuntimeObject*)L_2, (Func_2_t2447130374 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		RuntimeObject * L_5 = ((  RuntimeObject * (*) (RuntimeObject * /* static, unused */, RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(NULL /*static, unused*/, (RuntimeObject*)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_5;
	}
}
// TResult System.Linq.Enumerable::Min<System.Object,System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Enumerable_Min_TisRuntimeObject_TisRuntimeObject_m1319241706_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* ___source0, Func_2_t2447130374 * ___selector1, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___source0;
		Func_2_t2447130374 * L_1 = ___selector1;
		Check_SourceAndSelector_m4013530551(NULL /*static, unused*/, (RuntimeObject *)L_0, (RuntimeObject *)L_1, /*hidden argument*/NULL);
		RuntimeObject* L_2 = ___source0;
		Func_2_t2447130374 * L_3 = ___selector1;
		RuntimeObject* L_4 = ((  RuntimeObject* (*) (RuntimeObject * /* static, unused */, RuntimeObject*, Func_2_t2447130374 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(NULL /*static, unused*/, (RuntimeObject*)L_2, (Func_2_t2447130374 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		RuntimeObject * L_5 = ((  RuntimeObject * (*) (RuntimeObject * /* static, unused */, RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(NULL /*static, unused*/, (RuntimeObject*)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_5;
	}
}
// TResult System.Linq.Queryable::Aggregate<System.Object,System.Object,System.Object>(System.Linq.IQueryable`1<TSource>,TAccumulate,System.Linq.Expressions.Expression`1<System.Func`3<TAccumulate,TSource,TAccumulate>>,System.Linq.Expressions.Expression`1<System.Func`2<TAccumulate,TResult>>)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Queryable_Aggregate_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_m4232466060_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* ___source0, RuntimeObject * ___seed1, Expression_1_t3384637588 * ___func2, Expression_1_t2433158581 * ___selector3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Queryable_Aggregate_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_m4232466060_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___source0;
		Expression_1_t3384637588 * L_1 = ___func2;
		Expression_1_t2433158581 * L_2 = ___selector3;
		Check_SourceAndFuncAndSelector_m4072574892(NULL /*static, unused*/, (RuntimeObject *)L_0, (RuntimeObject *)L_1, (RuntimeObject *)L_2, /*hidden argument*/NULL);
		RuntimeObject* L_3 = ___source0;
		NullCheck((RuntimeObject*)L_3);
		RuntimeObject* L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2 /* System.Linq.IQueryProvider System.Linq.IQueryable::get_Provider() */, IQueryable_t2875280540_il2cpp_TypeInfo_var, (RuntimeObject*)L_3);
		MethodBase_t * L_5 = il2cpp_codegen_get_method_object(Queryable_Aggregate_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_m4232466060_RuntimeMethod_var);
		TypeU5BU5D_t3940880105* L_6 = (TypeU5BU5D_t3940880105*)((TypeU5BU5D_t3940880105*)SZArrayNew(TypeU5BU5D_t3940880105_il2cpp_TypeInfo_var, (uint32_t)3));
		RuntimeTypeHandle_t3027515415  L_7 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_8 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_8);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_8);
		TypeU5BU5D_t3940880105* L_9 = (TypeU5BU5D_t3940880105*)L_6;
		RuntimeTypeHandle_t3027515415  L_10 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 1)) };
		Type_t * L_11 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_10, /*hidden argument*/NULL);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_11);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(1), (Type_t *)L_11);
		TypeU5BU5D_t3940880105* L_12 = (TypeU5BU5D_t3940880105*)L_9;
		RuntimeTypeHandle_t3027515415  L_13 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 2)) };
		Type_t * L_14 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_13, /*hidden argument*/NULL);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_14);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(2), (Type_t *)L_14);
		MethodInfo_t * L_15 = Queryable_MakeGeneric_m238132717(NULL /*static, unused*/, (MethodBase_t *)L_5, (TypeU5BU5D_t3940880105*)L_12, /*hidden argument*/NULL);
		ExpressionU5BU5D_t2266720799* L_16 = (ExpressionU5BU5D_t2266720799*)((ExpressionU5BU5D_t2266720799*)SZArrayNew(ExpressionU5BU5D_t2266720799_il2cpp_TypeInfo_var, (uint32_t)4));
		RuntimeObject* L_17 = ___source0;
		NullCheck((RuntimeObject*)L_17);
		Expression_t1588164026 * L_18 = InterfaceFuncInvoker0< Expression_t1588164026 * >::Invoke(1 /* System.Linq.Expressions.Expression System.Linq.IQueryable::get_Expression() */, IQueryable_t2875280540_il2cpp_TypeInfo_var, (RuntimeObject*)L_17);
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, L_18);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(0), (Expression_t1588164026 *)L_18);
		ExpressionU5BU5D_t2266720799* L_19 = (ExpressionU5BU5D_t2266720799*)L_16;
		RuntimeObject * L_20 = ___seed1;
		ConstantExpression_t3613654278 * L_21 = Expression_Constant_m3269986673(NULL /*static, unused*/, (RuntimeObject *)L_20, /*hidden argument*/NULL);
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, L_21);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(1), (Expression_t1588164026 *)L_21);
		ExpressionU5BU5D_t2266720799* L_22 = (ExpressionU5BU5D_t2266720799*)L_19;
		Expression_1_t3384637588 * L_23 = ___func2;
		UnaryExpression_t3914580921 * L_24 = Expression_Quote_m2632568450(NULL /*static, unused*/, (Expression_t1588164026 *)L_23, /*hidden argument*/NULL);
		NullCheck(L_22);
		ArrayElementTypeCheck (L_22, L_24);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(2), (Expression_t1588164026 *)L_24);
		ExpressionU5BU5D_t2266720799* L_25 = (ExpressionU5BU5D_t2266720799*)L_22;
		Expression_1_t2433158581 * L_26 = ___selector3;
		UnaryExpression_t3914580921 * L_27 = Expression_Quote_m2632568450(NULL /*static, unused*/, (Expression_t1588164026 *)L_26, /*hidden argument*/NULL);
		NullCheck(L_25);
		ArrayElementTypeCheck (L_25, L_27);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(3), (Expression_t1588164026 *)L_27);
		Expression_t1588164026 * L_28 = Queryable_StaticCall_m1277226490(NULL /*static, unused*/, (MethodInfo_t *)L_15, (ExpressionU5BU5D_t2266720799*)L_25, /*hidden argument*/NULL);
		NullCheck((RuntimeObject*)L_4);
		RuntimeObject * L_29 = GenericInterfaceFuncInvoker1< RuntimeObject *, Expression_t1588164026 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4), (RuntimeObject*)L_4, (Expression_t1588164026 *)L_28);
		return L_29;
	}
}
// TResult System.Linq.Queryable::Max<System.Object,System.Object>(System.Linq.IQueryable`1<TSource>,System.Linq.Expressions.Expression`1<System.Func`2<TSource,TResult>>)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Queryable_Max_TisRuntimeObject_TisRuntimeObject_m3449966624_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* ___source0, Expression_1_t2433158581 * ___selector1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Queryable_Max_TisRuntimeObject_TisRuntimeObject_m3449966624_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___source0;
		Check_Source_m4098695967(NULL /*static, unused*/, (RuntimeObject *)L_0, /*hidden argument*/NULL);
		RuntimeObject* L_1 = ___source0;
		NullCheck((RuntimeObject*)L_1);
		RuntimeObject* L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2 /* System.Linq.IQueryProvider System.Linq.IQueryable::get_Provider() */, IQueryable_t2875280540_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
		MethodBase_t * L_3 = il2cpp_codegen_get_method_object(Queryable_Max_TisRuntimeObject_TisRuntimeObject_m3449966624_RuntimeMethod_var);
		TypeU5BU5D_t3940880105* L_4 = (TypeU5BU5D_t3940880105*)((TypeU5BU5D_t3940880105*)SZArrayNew(TypeU5BU5D_t3940880105_il2cpp_TypeInfo_var, (uint32_t)2));
		RuntimeTypeHandle_t3027515415  L_5 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_6 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_6);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_6);
		TypeU5BU5D_t3940880105* L_7 = (TypeU5BU5D_t3940880105*)L_4;
		RuntimeTypeHandle_t3027515415  L_8 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 1)) };
		Type_t * L_9 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_8, /*hidden argument*/NULL);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_9);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(1), (Type_t *)L_9);
		MethodInfo_t * L_10 = Queryable_MakeGeneric_m238132717(NULL /*static, unused*/, (MethodBase_t *)L_3, (TypeU5BU5D_t3940880105*)L_7, /*hidden argument*/NULL);
		ExpressionU5BU5D_t2266720799* L_11 = (ExpressionU5BU5D_t2266720799*)((ExpressionU5BU5D_t2266720799*)SZArrayNew(ExpressionU5BU5D_t2266720799_il2cpp_TypeInfo_var, (uint32_t)2));
		RuntimeObject* L_12 = ___source0;
		NullCheck((RuntimeObject*)L_12);
		Expression_t1588164026 * L_13 = InterfaceFuncInvoker0< Expression_t1588164026 * >::Invoke(1 /* System.Linq.Expressions.Expression System.Linq.IQueryable::get_Expression() */, IQueryable_t2875280540_il2cpp_TypeInfo_var, (RuntimeObject*)L_12);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_13);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(0), (Expression_t1588164026 *)L_13);
		ExpressionU5BU5D_t2266720799* L_14 = (ExpressionU5BU5D_t2266720799*)L_11;
		Expression_1_t2433158581 * L_15 = ___selector1;
		UnaryExpression_t3914580921 * L_16 = Expression_Quote_m2632568450(NULL /*static, unused*/, (Expression_t1588164026 *)L_15, /*hidden argument*/NULL);
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_16);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(1), (Expression_t1588164026 *)L_16);
		Expression_t1588164026 * L_17 = Queryable_StaticCall_m1277226490(NULL /*static, unused*/, (MethodInfo_t *)L_10, (ExpressionU5BU5D_t2266720799*)L_14, /*hidden argument*/NULL);
		NullCheck((RuntimeObject*)L_2);
		RuntimeObject * L_18 = GenericInterfaceFuncInvoker1< RuntimeObject *, Expression_t1588164026 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2), (RuntimeObject*)L_2, (Expression_t1588164026 *)L_17);
		return L_18;
	}
}
// TResult System.Linq.Queryable::Min<System.Object,System.Object>(System.Linq.IQueryable`1<TSource>,System.Linq.Expressions.Expression`1<System.Func`2<TSource,TResult>>)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Queryable_Min_TisRuntimeObject_TisRuntimeObject_m1180807981_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* ___source0, Expression_1_t2433158581 * ___selector1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Queryable_Min_TisRuntimeObject_TisRuntimeObject_m1180807981_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___source0;
		Expression_1_t2433158581 * L_1 = ___selector1;
		Check_SourceAndSelector_m4013530551(NULL /*static, unused*/, (RuntimeObject *)L_0, (RuntimeObject *)L_1, /*hidden argument*/NULL);
		RuntimeObject* L_2 = ___source0;
		NullCheck((RuntimeObject*)L_2);
		RuntimeObject* L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2 /* System.Linq.IQueryProvider System.Linq.IQueryable::get_Provider() */, IQueryable_t2875280540_il2cpp_TypeInfo_var, (RuntimeObject*)L_2);
		MethodBase_t * L_4 = il2cpp_codegen_get_method_object(Queryable_Min_TisRuntimeObject_TisRuntimeObject_m1180807981_RuntimeMethod_var);
		TypeU5BU5D_t3940880105* L_5 = (TypeU5BU5D_t3940880105*)((TypeU5BU5D_t3940880105*)SZArrayNew(TypeU5BU5D_t3940880105_il2cpp_TypeInfo_var, (uint32_t)2));
		RuntimeTypeHandle_t3027515415  L_6 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_7 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_6, /*hidden argument*/NULL);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_7);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_7);
		TypeU5BU5D_t3940880105* L_8 = (TypeU5BU5D_t3940880105*)L_5;
		RuntimeTypeHandle_t3027515415  L_9 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 1)) };
		Type_t * L_10 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_9, /*hidden argument*/NULL);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_10);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(1), (Type_t *)L_10);
		MethodInfo_t * L_11 = Queryable_MakeGeneric_m238132717(NULL /*static, unused*/, (MethodBase_t *)L_4, (TypeU5BU5D_t3940880105*)L_8, /*hidden argument*/NULL);
		ExpressionU5BU5D_t2266720799* L_12 = (ExpressionU5BU5D_t2266720799*)((ExpressionU5BU5D_t2266720799*)SZArrayNew(ExpressionU5BU5D_t2266720799_il2cpp_TypeInfo_var, (uint32_t)2));
		RuntimeObject* L_13 = ___source0;
		NullCheck((RuntimeObject*)L_13);
		Expression_t1588164026 * L_14 = InterfaceFuncInvoker0< Expression_t1588164026 * >::Invoke(1 /* System.Linq.Expressions.Expression System.Linq.IQueryable::get_Expression() */, IQueryable_t2875280540_il2cpp_TypeInfo_var, (RuntimeObject*)L_13);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_14);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(0), (Expression_t1588164026 *)L_14);
		ExpressionU5BU5D_t2266720799* L_15 = (ExpressionU5BU5D_t2266720799*)L_12;
		Expression_1_t2433158581 * L_16 = ___selector1;
		UnaryExpression_t3914580921 * L_17 = Expression_Quote_m2632568450(NULL /*static, unused*/, (Expression_t1588164026 *)L_16, /*hidden argument*/NULL);
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_17);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(1), (Expression_t1588164026 *)L_17);
		Expression_t1588164026 * L_18 = Queryable_StaticCall_m1277226490(NULL /*static, unused*/, (MethodInfo_t *)L_11, (ExpressionU5BU5D_t2266720799*)L_15, /*hidden argument*/NULL);
		NullCheck((RuntimeObject*)L_3);
		RuntimeObject * L_19 = GenericInterfaceFuncInvoker1< RuntimeObject *, Expression_t1588164026 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2), (RuntimeObject*)L_3, (Expression_t1588164026 *)L_18);
		return L_19;
	}
}
// TResult System.Linq.QueryableEnumerable`1<System.Object>::Execute<System.Boolean>(System.Linq.Expressions.Expression)
extern "C" IL2CPP_METHOD_ATTR bool QueryableEnumerable_1_Execute_TisBoolean_t97287965_m3520319996_gshared (QueryableEnumerable_1_t2952042478 * __this, Expression_t1588164026 * ___expression0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (QueryableEnumerable_1_Execute_TisBoolean_t97287965_m3520319996_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Expression_1_t3808030115 * V_0 = NULL;
	{
		Expression_t1588164026 * L_0 = ___expression0;
		Expression_t1588164026 * L_1 = ((  Expression_t1588164026 * (*) (RuntimeObject * /* static, unused */, Expression_t1588164026 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 4)->methodPointer)(NULL /*static, unused*/, (Expression_t1588164026 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 4));
		Expression_1_t3808030115 * L_2 = ((  Expression_1_t3808030115 * (*) (RuntimeObject * /* static, unused */, Expression_t1588164026 *, ParameterExpressionU5BU5D_t2413162029*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(NULL /*static, unused*/, (Expression_t1588164026 *)L_1, (ParameterExpressionU5BU5D_t2413162029*)((ParameterExpressionU5BU5D_t2413162029*)SZArrayNew(ParameterExpressionU5BU5D_t2413162029_il2cpp_TypeInfo_var, (uint32_t)0)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_0 = (Expression_1_t3808030115 *)L_2;
		Expression_1_t3808030115 * L_3 = V_0;
		NullCheck((Expression_1_t3808030115 *)L_3);
		Func_1_t3822001908 * L_4 = ((  Func_1_t3822001908 * (*) (Expression_1_t3808030115 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Expression_1_t3808030115 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		NullCheck((Func_1_t3822001908 *)L_4);
		bool L_5 = ((  bool (*) (Func_1_t3822001908 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((Func_1_t3822001908 *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		return L_5;
	}
}
// TResult System.Linq.QueryableEnumerable`1<System.Object>::Execute<System.Decimal>(System.Linq.Expressions.Expression)
extern "C" IL2CPP_METHOD_ATTR Decimal_t2948259380  QueryableEnumerable_1_Execute_TisDecimal_t2948259380_m2768354779_gshared (QueryableEnumerable_1_t2952042478 * __this, Expression_t1588164026 * ___expression0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (QueryableEnumerable_1_Execute_TisDecimal_t2948259380_m2768354779_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Expression_1_t2364034234 * V_0 = NULL;
	{
		Expression_t1588164026 * L_0 = ___expression0;
		Expression_t1588164026 * L_1 = ((  Expression_t1588164026 * (*) (RuntimeObject * /* static, unused */, Expression_t1588164026 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 4)->methodPointer)(NULL /*static, unused*/, (Expression_t1588164026 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 4));
		Expression_1_t2364034234 * L_2 = ((  Expression_1_t2364034234 * (*) (RuntimeObject * /* static, unused */, Expression_t1588164026 *, ParameterExpressionU5BU5D_t2413162029*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(NULL /*static, unused*/, (Expression_t1588164026 *)L_1, (ParameterExpressionU5BU5D_t2413162029*)((ParameterExpressionU5BU5D_t2413162029*)SZArrayNew(ParameterExpressionU5BU5D_t2413162029_il2cpp_TypeInfo_var, (uint32_t)0)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_0 = (Expression_1_t2364034234 *)L_2;
		Expression_1_t2364034234 * L_3 = V_0;
		NullCheck((Expression_1_t2364034234 *)L_3);
		Func_1_t2378006027 * L_4 = ((  Func_1_t2378006027 * (*) (Expression_1_t2364034234 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Expression_1_t2364034234 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		NullCheck((Func_1_t2378006027 *)L_4);
		Decimal_t2948259380  L_5 = ((  Decimal_t2948259380  (*) (Func_1_t2378006027 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((Func_1_t2378006027 *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		return L_5;
	}
}
// TResult System.Linq.QueryableEnumerable`1<System.Object>::Execute<System.Double>(System.Linq.Expressions.Expression)
extern "C" IL2CPP_METHOD_ATTR double QueryableEnumerable_1_Execute_TisDouble_t594665363_m75784671_gshared (QueryableEnumerable_1_t2952042478 * __this, Expression_t1588164026 * ___expression0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (QueryableEnumerable_1_Execute_TisDouble_t594665363_m75784671_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Expression_1_t10440217 * V_0 = NULL;
	{
		Expression_t1588164026 * L_0 = ___expression0;
		Expression_t1588164026 * L_1 = ((  Expression_t1588164026 * (*) (RuntimeObject * /* static, unused */, Expression_t1588164026 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 4)->methodPointer)(NULL /*static, unused*/, (Expression_t1588164026 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 4));
		Expression_1_t10440217 * L_2 = ((  Expression_1_t10440217 * (*) (RuntimeObject * /* static, unused */, Expression_t1588164026 *, ParameterExpressionU5BU5D_t2413162029*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(NULL /*static, unused*/, (Expression_t1588164026 *)L_1, (ParameterExpressionU5BU5D_t2413162029*)((ParameterExpressionU5BU5D_t2413162029*)SZArrayNew(ParameterExpressionU5BU5D_t2413162029_il2cpp_TypeInfo_var, (uint32_t)0)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_0 = (Expression_1_t10440217 *)L_2;
		Expression_1_t10440217 * L_3 = V_0;
		NullCheck((Expression_1_t10440217 *)L_3);
		Func_1_t24412010 * L_4 = ((  Func_1_t24412010 * (*) (Expression_1_t10440217 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Expression_1_t10440217 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		NullCheck((Func_1_t24412010 *)L_4);
		double L_5 = ((  double (*) (Func_1_t24412010 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((Func_1_t24412010 *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		return L_5;
	}
}
// TResult System.Linq.QueryableEnumerable`1<System.Object>::Execute<System.Int32>(System.Linq.Expressions.Expression)
extern "C" IL2CPP_METHOD_ATTR int32_t QueryableEnumerable_1_Execute_TisInt32_t2950945753_m1224328557_gshared (QueryableEnumerable_1_t2952042478 * __this, Expression_t1588164026 * ___expression0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (QueryableEnumerable_1_Execute_TisInt32_t2950945753_m1224328557_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Expression_1_t2366720607 * V_0 = NULL;
	{
		Expression_t1588164026 * L_0 = ___expression0;
		Expression_t1588164026 * L_1 = ((  Expression_t1588164026 * (*) (RuntimeObject * /* static, unused */, Expression_t1588164026 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 4)->methodPointer)(NULL /*static, unused*/, (Expression_t1588164026 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 4));
		Expression_1_t2366720607 * L_2 = ((  Expression_1_t2366720607 * (*) (RuntimeObject * /* static, unused */, Expression_t1588164026 *, ParameterExpressionU5BU5D_t2413162029*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(NULL /*static, unused*/, (Expression_t1588164026 *)L_1, (ParameterExpressionU5BU5D_t2413162029*)((ParameterExpressionU5BU5D_t2413162029*)SZArrayNew(ParameterExpressionU5BU5D_t2413162029_il2cpp_TypeInfo_var, (uint32_t)0)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_0 = (Expression_1_t2366720607 *)L_2;
		Expression_1_t2366720607 * L_3 = V_0;
		NullCheck((Expression_1_t2366720607 *)L_3);
		Func_1_t2380692400 * L_4 = ((  Func_1_t2380692400 * (*) (Expression_1_t2366720607 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Expression_1_t2366720607 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		NullCheck((Func_1_t2380692400 *)L_4);
		int32_t L_5 = ((  int32_t (*) (Func_1_t2380692400 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((Func_1_t2380692400 *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		return L_5;
	}
}
// TResult System.Linq.QueryableEnumerable`1<System.Object>::Execute<System.Int64>(System.Linq.Expressions.Expression)
extern "C" IL2CPP_METHOD_ATTR int64_t QueryableEnumerable_1_Execute_TisInt64_t3736567304_m1574847071_gshared (QueryableEnumerable_1_t2952042478 * __this, Expression_t1588164026 * ___expression0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (QueryableEnumerable_1_Execute_TisInt64_t3736567304_m1574847071_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Expression_1_t3152342158 * V_0 = NULL;
	{
		Expression_t1588164026 * L_0 = ___expression0;
		Expression_t1588164026 * L_1 = ((  Expression_t1588164026 * (*) (RuntimeObject * /* static, unused */, Expression_t1588164026 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 4)->methodPointer)(NULL /*static, unused*/, (Expression_t1588164026 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 4));
		Expression_1_t3152342158 * L_2 = ((  Expression_1_t3152342158 * (*) (RuntimeObject * /* static, unused */, Expression_t1588164026 *, ParameterExpressionU5BU5D_t2413162029*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(NULL /*static, unused*/, (Expression_t1588164026 *)L_1, (ParameterExpressionU5BU5D_t2413162029*)((ParameterExpressionU5BU5D_t2413162029*)SZArrayNew(ParameterExpressionU5BU5D_t2413162029_il2cpp_TypeInfo_var, (uint32_t)0)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_0 = (Expression_1_t3152342158 *)L_2;
		Expression_1_t3152342158 * L_3 = V_0;
		NullCheck((Expression_1_t3152342158 *)L_3);
		Func_1_t3166313951 * L_4 = ((  Func_1_t3166313951 * (*) (Expression_1_t3152342158 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Expression_1_t3152342158 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		NullCheck((Func_1_t3166313951 *)L_4);
		int64_t L_5 = ((  int64_t (*) (Func_1_t3166313951 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((Func_1_t3166313951 *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		return L_5;
	}
}
// TResult System.Linq.QueryableEnumerable`1<System.Object>::Execute<System.Nullable`1<System.Decimal>>(System.Linq.Expressions.Expression)
extern "C" IL2CPP_METHOD_ATTR Nullable_1_t375854166  QueryableEnumerable_1_Execute_TisNullable_1_t375854166_m2898739788_gshared (QueryableEnumerable_1_t2952042478 * __this, Expression_t1588164026 * ___expression0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (QueryableEnumerable_1_Execute_TisNullable_1_t375854166_m2898739788_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Expression_1_t4086596316 * V_0 = NULL;
	{
		Expression_t1588164026 * L_0 = ___expression0;
		Expression_t1588164026 * L_1 = ((  Expression_t1588164026 * (*) (RuntimeObject * /* static, unused */, Expression_t1588164026 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 4)->methodPointer)(NULL /*static, unused*/, (Expression_t1588164026 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 4));
		Expression_1_t4086596316 * L_2 = ((  Expression_1_t4086596316 * (*) (RuntimeObject * /* static, unused */, Expression_t1588164026 *, ParameterExpressionU5BU5D_t2413162029*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(NULL /*static, unused*/, (Expression_t1588164026 *)L_1, (ParameterExpressionU5BU5D_t2413162029*)((ParameterExpressionU5BU5D_t2413162029*)SZArrayNew(ParameterExpressionU5BU5D_t2413162029_il2cpp_TypeInfo_var, (uint32_t)0)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_0 = (Expression_1_t4086596316 *)L_2;
		Expression_1_t4086596316 * L_3 = V_0;
		NullCheck((Expression_1_t4086596316 *)L_3);
		Func_1_t4100568109 * L_4 = ((  Func_1_t4100568109 * (*) (Expression_1_t4086596316 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Expression_1_t4086596316 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		NullCheck((Func_1_t4100568109 *)L_4);
		Nullable_1_t375854166  L_5 = ((  Nullable_1_t375854166  (*) (Func_1_t4100568109 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((Func_1_t4100568109 *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		return L_5;
	}
}
// TResult System.Linq.QueryableEnumerable`1<System.Object>::Execute<System.Nullable`1<System.Double>>(System.Linq.Expressions.Expression)
extern "C" IL2CPP_METHOD_ATTR Nullable_1_t2317227445  QueryableEnumerable_1_Execute_TisNullable_1_t2317227445_m4137812720_gshared (QueryableEnumerable_1_t2952042478 * __this, Expression_t1588164026 * ___expression0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (QueryableEnumerable_1_Execute_TisNullable_1_t2317227445_m4137812720_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Expression_1_t1733002299 * V_0 = NULL;
	{
		Expression_t1588164026 * L_0 = ___expression0;
		Expression_t1588164026 * L_1 = ((  Expression_t1588164026 * (*) (RuntimeObject * /* static, unused */, Expression_t1588164026 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 4)->methodPointer)(NULL /*static, unused*/, (Expression_t1588164026 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 4));
		Expression_1_t1733002299 * L_2 = ((  Expression_1_t1733002299 * (*) (RuntimeObject * /* static, unused */, Expression_t1588164026 *, ParameterExpressionU5BU5D_t2413162029*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(NULL /*static, unused*/, (Expression_t1588164026 *)L_1, (ParameterExpressionU5BU5D_t2413162029*)((ParameterExpressionU5BU5D_t2413162029*)SZArrayNew(ParameterExpressionU5BU5D_t2413162029_il2cpp_TypeInfo_var, (uint32_t)0)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_0 = (Expression_1_t1733002299 *)L_2;
		Expression_1_t1733002299 * L_3 = V_0;
		NullCheck((Expression_1_t1733002299 *)L_3);
		Func_1_t1746974092 * L_4 = ((  Func_1_t1746974092 * (*) (Expression_1_t1733002299 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Expression_1_t1733002299 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		NullCheck((Func_1_t1746974092 *)L_4);
		Nullable_1_t2317227445  L_5 = ((  Nullable_1_t2317227445  (*) (Func_1_t1746974092 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((Func_1_t1746974092 *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		return L_5;
	}
}
// TResult System.Linq.QueryableEnumerable`1<System.Object>::Execute<System.Nullable`1<System.Int32>>(System.Linq.Expressions.Expression)
extern "C" IL2CPP_METHOD_ATTR Nullable_1_t378540539  QueryableEnumerable_1_Execute_TisNullable_1_t378540539_m3140269918_gshared (QueryableEnumerable_1_t2952042478 * __this, Expression_t1588164026 * ___expression0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (QueryableEnumerable_1_Execute_TisNullable_1_t378540539_m3140269918_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Expression_1_t4089282689 * V_0 = NULL;
	{
		Expression_t1588164026 * L_0 = ___expression0;
		Expression_t1588164026 * L_1 = ((  Expression_t1588164026 * (*) (RuntimeObject * /* static, unused */, Expression_t1588164026 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 4)->methodPointer)(NULL /*static, unused*/, (Expression_t1588164026 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 4));
		Expression_1_t4089282689 * L_2 = ((  Expression_1_t4089282689 * (*) (RuntimeObject * /* static, unused */, Expression_t1588164026 *, ParameterExpressionU5BU5D_t2413162029*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(NULL /*static, unused*/, (Expression_t1588164026 *)L_1, (ParameterExpressionU5BU5D_t2413162029*)((ParameterExpressionU5BU5D_t2413162029*)SZArrayNew(ParameterExpressionU5BU5D_t2413162029_il2cpp_TypeInfo_var, (uint32_t)0)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_0 = (Expression_1_t4089282689 *)L_2;
		Expression_1_t4089282689 * L_3 = V_0;
		NullCheck((Expression_1_t4089282689 *)L_3);
		Func_1_t4103254482 * L_4 = ((  Func_1_t4103254482 * (*) (Expression_1_t4089282689 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Expression_1_t4089282689 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		NullCheck((Func_1_t4103254482 *)L_4);
		Nullable_1_t378540539  L_5 = ((  Nullable_1_t378540539  (*) (Func_1_t4103254482 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((Func_1_t4103254482 *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		return L_5;
	}
}
// TResult System.Linq.QueryableEnumerable`1<System.Object>::Execute<System.Nullable`1<System.Int64>>(System.Linq.Expressions.Expression)
extern "C" IL2CPP_METHOD_ATTR Nullable_1_t1164162090  QueryableEnumerable_1_Execute_TisNullable_1_t1164162090_m3387925999_gshared (QueryableEnumerable_1_t2952042478 * __this, Expression_t1588164026 * ___expression0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (QueryableEnumerable_1_Execute_TisNullable_1_t1164162090_m3387925999_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Expression_1_t579936944 * V_0 = NULL;
	{
		Expression_t1588164026 * L_0 = ___expression0;
		Expression_t1588164026 * L_1 = ((  Expression_t1588164026 * (*) (RuntimeObject * /* static, unused */, Expression_t1588164026 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 4)->methodPointer)(NULL /*static, unused*/, (Expression_t1588164026 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 4));
		Expression_1_t579936944 * L_2 = ((  Expression_1_t579936944 * (*) (RuntimeObject * /* static, unused */, Expression_t1588164026 *, ParameterExpressionU5BU5D_t2413162029*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(NULL /*static, unused*/, (Expression_t1588164026 *)L_1, (ParameterExpressionU5BU5D_t2413162029*)((ParameterExpressionU5BU5D_t2413162029*)SZArrayNew(ParameterExpressionU5BU5D_t2413162029_il2cpp_TypeInfo_var, (uint32_t)0)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_0 = (Expression_1_t579936944 *)L_2;
		Expression_1_t579936944 * L_3 = V_0;
		NullCheck((Expression_1_t579936944 *)L_3);
		Func_1_t593908737 * L_4 = ((  Func_1_t593908737 * (*) (Expression_1_t579936944 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Expression_1_t579936944 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		NullCheck((Func_1_t593908737 *)L_4);
		Nullable_1_t1164162090  L_5 = ((  Nullable_1_t1164162090  (*) (Func_1_t593908737 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((Func_1_t593908737 *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		return L_5;
	}
}
// TResult System.Linq.QueryableEnumerable`1<System.Object>::Execute<System.Nullable`1<System.Single>>(System.Linq.Expressions.Expression)
extern "C" IL2CPP_METHOD_ATTR Nullable_1_t3119828856  QueryableEnumerable_1_Execute_TisNullable_1_t3119828856_m1090192689_gshared (QueryableEnumerable_1_t2952042478 * __this, Expression_t1588164026 * ___expression0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (QueryableEnumerable_1_Execute_TisNullable_1_t3119828856_m1090192689_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Expression_1_t2535603710 * V_0 = NULL;
	{
		Expression_t1588164026 * L_0 = ___expression0;
		Expression_t1588164026 * L_1 = ((  Expression_t1588164026 * (*) (RuntimeObject * /* static, unused */, Expression_t1588164026 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 4)->methodPointer)(NULL /*static, unused*/, (Expression_t1588164026 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 4));
		Expression_1_t2535603710 * L_2 = ((  Expression_1_t2535603710 * (*) (RuntimeObject * /* static, unused */, Expression_t1588164026 *, ParameterExpressionU5BU5D_t2413162029*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(NULL /*static, unused*/, (Expression_t1588164026 *)L_1, (ParameterExpressionU5BU5D_t2413162029*)((ParameterExpressionU5BU5D_t2413162029*)SZArrayNew(ParameterExpressionU5BU5D_t2413162029_il2cpp_TypeInfo_var, (uint32_t)0)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_0 = (Expression_1_t2535603710 *)L_2;
		Expression_1_t2535603710 * L_3 = V_0;
		NullCheck((Expression_1_t2535603710 *)L_3);
		Func_1_t2549575503 * L_4 = ((  Func_1_t2549575503 * (*) (Expression_1_t2535603710 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Expression_1_t2535603710 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		NullCheck((Func_1_t2549575503 *)L_4);
		Nullable_1_t3119828856  L_5 = ((  Nullable_1_t3119828856  (*) (Func_1_t2549575503 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((Func_1_t2549575503 *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		return L_5;
	}
}
// TResult System.Linq.QueryableEnumerable`1<System.Object>::Execute<System.Object>(System.Linq.Expressions.Expression)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * QueryableEnumerable_1_Execute_TisRuntimeObject_m3179243312_gshared (QueryableEnumerable_1_t2952042478 * __this, Expression_t1588164026 * ___expression0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (QueryableEnumerable_1_Execute_TisRuntimeObject_m3179243312_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Expression_1_t2495881018 * V_0 = NULL;
	{
		Expression_t1588164026 * L_0 = ___expression0;
		Expression_t1588164026 * L_1 = ((  Expression_t1588164026 * (*) (RuntimeObject * /* static, unused */, Expression_t1588164026 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 4)->methodPointer)(NULL /*static, unused*/, (Expression_t1588164026 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 4));
		Expression_1_t2495881018 * L_2 = ((  Expression_1_t2495881018 * (*) (RuntimeObject * /* static, unused */, Expression_t1588164026 *, ParameterExpressionU5BU5D_t2413162029*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(NULL /*static, unused*/, (Expression_t1588164026 *)L_1, (ParameterExpressionU5BU5D_t2413162029*)((ParameterExpressionU5BU5D_t2413162029*)SZArrayNew(ParameterExpressionU5BU5D_t2413162029_il2cpp_TypeInfo_var, (uint32_t)0)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_0 = (Expression_1_t2495881018 *)L_2;
		Expression_1_t2495881018 * L_3 = V_0;
		NullCheck((Expression_1_t2495881018 *)L_3);
		Func_1_t2509852811 * L_4 = ((  Func_1_t2509852811 * (*) (Expression_1_t2495881018 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Expression_1_t2495881018 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		NullCheck((Func_1_t2509852811 *)L_4);
		RuntimeObject * L_5 = ((  RuntimeObject * (*) (Func_1_t2509852811 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((Func_1_t2509852811 *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		return L_5;
	}
}
// TResult System.Linq.QueryableEnumerable`1<System.Object>::Execute<System.Single>(System.Linq.Expressions.Expression)
extern "C" IL2CPP_METHOD_ATTR float QueryableEnumerable_1_Execute_TisSingle_t1397266774_m3283743587_gshared (QueryableEnumerable_1_t2952042478 * __this, Expression_t1588164026 * ___expression0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (QueryableEnumerable_1_Execute_TisSingle_t1397266774_m3283743587_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Expression_1_t813041628 * V_0 = NULL;
	{
		Expression_t1588164026 * L_0 = ___expression0;
		Expression_t1588164026 * L_1 = ((  Expression_t1588164026 * (*) (RuntimeObject * /* static, unused */, Expression_t1588164026 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 4)->methodPointer)(NULL /*static, unused*/, (Expression_t1588164026 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 4));
		Expression_1_t813041628 * L_2 = ((  Expression_1_t813041628 * (*) (RuntimeObject * /* static, unused */, Expression_t1588164026 *, ParameterExpressionU5BU5D_t2413162029*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(NULL /*static, unused*/, (Expression_t1588164026 *)L_1, (ParameterExpressionU5BU5D_t2413162029*)((ParameterExpressionU5BU5D_t2413162029*)SZArrayNew(ParameterExpressionU5BU5D_t2413162029_il2cpp_TypeInfo_var, (uint32_t)0)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_0 = (Expression_1_t813041628 *)L_2;
		Expression_1_t813041628 * L_3 = V_0;
		NullCheck((Expression_1_t813041628 *)L_3);
		Func_1_t827013421 * L_4 = ((  Func_1_t827013421 * (*) (Expression_1_t813041628 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Expression_1_t813041628 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		NullCheck((Func_1_t827013421 *)L_4);
		float L_5 = ((  float (*) (Func_1_t827013421 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((Func_1_t827013421 *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		return L_5;
	}
}
// TRet System.Linq.Queryable::Execute<System.Int32,System.Object>(System.Linq.IQueryable`1<TSource>,System.Reflection.MethodBase)
extern "C" IL2CPP_METHOD_ATTR int32_t Queryable_Execute_TisInt32_t2950945753_TisRuntimeObject_m3877567083_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* ___source0, MethodBase_t * ___current1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Queryable_Execute_TisInt32_t2950945753_TisRuntimeObject_m3877567083_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___source0;
		NullCheck((RuntimeObject*)L_0);
		RuntimeObject* L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2 /* System.Linq.IQueryProvider System.Linq.IQueryable::get_Provider() */, IQueryable_t2875280540_il2cpp_TypeInfo_var, (RuntimeObject*)L_0);
		MethodBase_t * L_2 = ___current1;
		TypeU5BU5D_t3940880105* L_3 = (TypeU5BU5D_t3940880105*)((TypeU5BU5D_t3940880105*)SZArrayNew(TypeU5BU5D_t3940880105_il2cpp_TypeInfo_var, (uint32_t)1));
		RuntimeTypeHandle_t3027515415  L_4 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_5);
		MethodInfo_t * L_6 = Queryable_MakeGeneric_m238132717(NULL /*static, unused*/, (MethodBase_t *)L_2, (TypeU5BU5D_t3940880105*)L_3, /*hidden argument*/NULL);
		ExpressionU5BU5D_t2266720799* L_7 = (ExpressionU5BU5D_t2266720799*)((ExpressionU5BU5D_t2266720799*)SZArrayNew(ExpressionU5BU5D_t2266720799_il2cpp_TypeInfo_var, (uint32_t)1));
		RuntimeObject* L_8 = ___source0;
		NullCheck((RuntimeObject*)L_8);
		Expression_t1588164026 * L_9 = InterfaceFuncInvoker0< Expression_t1588164026 * >::Invoke(1 /* System.Linq.Expressions.Expression System.Linq.IQueryable::get_Expression() */, IQueryable_t2875280540_il2cpp_TypeInfo_var, (RuntimeObject*)L_8);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_9);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (Expression_t1588164026 *)L_9);
		Expression_t1588164026 * L_10 = Queryable_StaticCall_m1277226490(NULL /*static, unused*/, (MethodInfo_t *)L_6, (ExpressionU5BU5D_t2266720799*)L_7, /*hidden argument*/NULL);
		NullCheck((RuntimeObject*)L_1);
		int32_t L_11 = GenericInterfaceFuncInvoker1< int32_t, Expression_t1588164026 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1), (RuntimeObject*)L_1, (Expression_t1588164026 *)L_10);
		return L_11;
	}
}
// TRet System.Linq.Queryable::Execute<System.Int64,System.Object>(System.Linq.IQueryable`1<TSource>,System.Reflection.MethodBase)
extern "C" IL2CPP_METHOD_ATTR int64_t Queryable_Execute_TisInt64_t3736567304_TisRuntimeObject_m977574818_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* ___source0, MethodBase_t * ___current1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Queryable_Execute_TisInt64_t3736567304_TisRuntimeObject_m977574818_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___source0;
		NullCheck((RuntimeObject*)L_0);
		RuntimeObject* L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2 /* System.Linq.IQueryProvider System.Linq.IQueryable::get_Provider() */, IQueryable_t2875280540_il2cpp_TypeInfo_var, (RuntimeObject*)L_0);
		MethodBase_t * L_2 = ___current1;
		TypeU5BU5D_t3940880105* L_3 = (TypeU5BU5D_t3940880105*)((TypeU5BU5D_t3940880105*)SZArrayNew(TypeU5BU5D_t3940880105_il2cpp_TypeInfo_var, (uint32_t)1));
		RuntimeTypeHandle_t3027515415  L_4 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_5);
		MethodInfo_t * L_6 = Queryable_MakeGeneric_m238132717(NULL /*static, unused*/, (MethodBase_t *)L_2, (TypeU5BU5D_t3940880105*)L_3, /*hidden argument*/NULL);
		ExpressionU5BU5D_t2266720799* L_7 = (ExpressionU5BU5D_t2266720799*)((ExpressionU5BU5D_t2266720799*)SZArrayNew(ExpressionU5BU5D_t2266720799_il2cpp_TypeInfo_var, (uint32_t)1));
		RuntimeObject* L_8 = ___source0;
		NullCheck((RuntimeObject*)L_8);
		Expression_t1588164026 * L_9 = InterfaceFuncInvoker0< Expression_t1588164026 * >::Invoke(1 /* System.Linq.Expressions.Expression System.Linq.IQueryable::get_Expression() */, IQueryable_t2875280540_il2cpp_TypeInfo_var, (RuntimeObject*)L_8);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_9);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (Expression_t1588164026 *)L_9);
		Expression_t1588164026 * L_10 = Queryable_StaticCall_m1277226490(NULL /*static, unused*/, (MethodInfo_t *)L_6, (ExpressionU5BU5D_t2266720799*)L_7, /*hidden argument*/NULL);
		NullCheck((RuntimeObject*)L_1);
		int64_t L_11 = GenericInterfaceFuncInvoker1< int64_t, Expression_t1588164026 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1), (RuntimeObject*)L_1, (Expression_t1588164026 *)L_10);
		return L_11;
	}
}
// TRet System.Linq.Queryable::Execute<System.Object,System.Object>(System.Linq.IQueryable`1<TSource>,System.Reflection.MethodBase)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Queryable_Execute_TisRuntimeObject_TisRuntimeObject_m529963124_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* ___source0, MethodBase_t * ___current1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Queryable_Execute_TisRuntimeObject_TisRuntimeObject_m529963124_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___source0;
		NullCheck((RuntimeObject*)L_0);
		RuntimeObject* L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2 /* System.Linq.IQueryProvider System.Linq.IQueryable::get_Provider() */, IQueryable_t2875280540_il2cpp_TypeInfo_var, (RuntimeObject*)L_0);
		MethodBase_t * L_2 = ___current1;
		TypeU5BU5D_t3940880105* L_3 = (TypeU5BU5D_t3940880105*)((TypeU5BU5D_t3940880105*)SZArrayNew(TypeU5BU5D_t3940880105_il2cpp_TypeInfo_var, (uint32_t)1));
		RuntimeTypeHandle_t3027515415  L_4 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_5);
		MethodInfo_t * L_6 = Queryable_MakeGeneric_m238132717(NULL /*static, unused*/, (MethodBase_t *)L_2, (TypeU5BU5D_t3940880105*)L_3, /*hidden argument*/NULL);
		ExpressionU5BU5D_t2266720799* L_7 = (ExpressionU5BU5D_t2266720799*)((ExpressionU5BU5D_t2266720799*)SZArrayNew(ExpressionU5BU5D_t2266720799_il2cpp_TypeInfo_var, (uint32_t)1));
		RuntimeObject* L_8 = ___source0;
		NullCheck((RuntimeObject*)L_8);
		Expression_t1588164026 * L_9 = InterfaceFuncInvoker0< Expression_t1588164026 * >::Invoke(1 /* System.Linq.Expressions.Expression System.Linq.IQueryable::get_Expression() */, IQueryable_t2875280540_il2cpp_TypeInfo_var, (RuntimeObject*)L_8);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_9);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (Expression_t1588164026 *)L_9);
		Expression_t1588164026 * L_10 = Queryable_StaticCall_m1277226490(NULL /*static, unused*/, (MethodInfo_t *)L_6, (ExpressionU5BU5D_t2266720799*)L_7, /*hidden argument*/NULL);
		NullCheck((RuntimeObject*)L_1);
		RuntimeObject * L_11 = GenericInterfaceFuncInvoker1< RuntimeObject *, Expression_t1588164026 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1), (RuntimeObject*)L_1, (Expression_t1588164026 *)L_10);
		return L_11;
	}
}
// TSource System.Linq.Enumerable::<ToLookup`2>m__4D<System.Object,System.Object>(TSource)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Enumerable_U3CToLookup_2U3Em__4D_TisRuntimeObject_TisRuntimeObject_m4158411277_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject * ___element0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___element0;
		return L_0;
	}
}
// TSource System.Linq.Enumerable::Aggregate<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`3<TSource,TSource,TSource>)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Enumerable_Aggregate_TisRuntimeObject_m2525715370_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* ___source0, Func_3_t3398609381 * ___func1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Enumerable_Aggregate_TisRuntimeObject_m2525715370_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	RuntimeObject * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		RuntimeObject* L_0 = ___source0;
		Func_3_t3398609381 * L_1 = ___func1;
		Check_SourceAndFunc_m1489824209(NULL /*static, unused*/, (RuntimeObject *)L_0, (RuntimeObject *)L_1, /*hidden argument*/NULL);
		RuntimeObject* L_2 = ___source0;
		NullCheck((RuntimeObject*)L_2);
		RuntimeObject* L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Object>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_2);
		V_0 = (RuntimeObject*)L_3;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			RuntimeObject* L_4 = V_0;
			NullCheck((RuntimeObject*)L_4);
			bool L_5 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, (RuntimeObject*)L_4);
			if (L_5)
			{
				goto IL_0024;
			}
		}

IL_0019:
		{
			InvalidOperationException_t56020091 * L_6 = (InvalidOperationException_t56020091 *)il2cpp_codegen_object_new(InvalidOperationException_t56020091_il2cpp_TypeInfo_var);
			InvalidOperationException__ctor_m237278729(L_6, (String_t*)_stringLiteral875828457, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_6,Enumerable_Aggregate_TisRuntimeObject_m2525715370_RuntimeMethod_var);
		}

IL_0024:
		{
			RuntimeObject* L_7 = V_0;
			NullCheck((RuntimeObject*)L_7);
			RuntimeObject * L_8 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Object>::get_Current() */, IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (RuntimeObject*)L_7);
			V_1 = (RuntimeObject *)L_8;
			goto IL_003e;
		}

IL_0030:
		{
			Func_3_t3398609381 * L_9 = ___func1;
			RuntimeObject * L_10 = V_1;
			RuntimeObject* L_11 = V_0;
			NullCheck((RuntimeObject*)L_11);
			RuntimeObject * L_12 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Object>::get_Current() */, IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (RuntimeObject*)L_11);
			NullCheck((Func_3_t3398609381 *)L_9);
			RuntimeObject * L_13 = ((  RuntimeObject * (*) (Func_3_t3398609381 *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((Func_3_t3398609381 *)L_9, (RuntimeObject *)L_10, (RuntimeObject *)L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
			V_1 = (RuntimeObject *)L_13;
		}

IL_003e:
		{
			RuntimeObject* L_14 = V_0;
			NullCheck((RuntimeObject*)L_14);
			bool L_15 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, (RuntimeObject*)L_14);
			if (L_15)
			{
				goto IL_0030;
			}
		}

IL_0049:
		{
			RuntimeObject * L_16 = V_1;
			V_2 = (RuntimeObject *)L_16;
			IL2CPP_LEAVE(0x62, FINALLY_0055);
		}

IL_0050:
		{
			; // IL_0050: leave IL_0062
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0055;
	}

FINALLY_0055:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_17 = V_0;
			if (!L_17)
			{
				goto IL_0061;
			}
		}

IL_005b:
		{
			RuntimeObject* L_18 = V_0;
			NullCheck((RuntimeObject*)L_18);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, (RuntimeObject*)L_18);
		}

IL_0061:
		{
			IL2CPP_END_FINALLY(85)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(85)
	{
		IL2CPP_JUMP_TBL(0x62, IL_0062)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0062:
	{
		RuntimeObject * L_19 = V_2;
		return L_19;
	}
}
// TSource System.Linq.Enumerable::ElementAt<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Int32)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Enumerable_ElementAt_TisRuntimeObject_m2021996717_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Enumerable_ElementAt_TisRuntimeObject_m2021996717_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___source0;
		Check_Source_m4098695967(NULL /*static, unused*/, (RuntimeObject *)L_0, /*hidden argument*/NULL);
		int32_t L_1 = ___index1;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0013;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m2047740448(L_2, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2,Enumerable_ElementAt_TisRuntimeObject_m2021996717_RuntimeMethod_var);
	}

IL_0013:
	{
		RuntimeObject* L_3 = ___source0;
		V_0 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_3, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		RuntimeObject* L_4 = V_0;
		if (!L_4)
		{
			goto IL_0028;
		}
	}
	{
		RuntimeObject* L_5 = V_0;
		int32_t L_6 = ___index1;
		NullCheck((RuntimeObject*)L_5);
		RuntimeObject * L_7 = InterfaceFuncInvoker1< RuntimeObject *, int32_t >::Invoke(3 /* !0 System.Collections.Generic.IList`1<System.Object>::get_Item(System.Int32) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_5, (int32_t)L_6);
		return L_7;
	}

IL_0028:
	{
		RuntimeObject* L_8 = ___source0;
		int32_t L_9 = ___index1;
		RuntimeObject * L_10 = ((  RuntimeObject * (*) (RuntimeObject * /* static, unused */, RuntimeObject*, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(NULL /*static, unused*/, (RuntimeObject*)L_8, (int32_t)L_9, (int32_t)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_10;
	}
}
// TSource System.Linq.Enumerable::ElementAt<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Int32,System.Linq.Enumerable/Fallback)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Enumerable_ElementAt_TisRuntimeObject_m1482474722_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* ___source0, int32_t ___index1, int32_t ___fallback2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Enumerable_ElementAt_TisRuntimeObject_m1482474722_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	RuntimeObject * V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject * V_3 = NULL;
	RuntimeObject * V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = (int64_t)(((int64_t)((int64_t)0)));
		RuntimeObject* L_0 = ___source0;
		NullCheck((RuntimeObject*)L_0);
		RuntimeObject* L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Object>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_0);
		V_2 = (RuntimeObject*)L_1;
	}

IL_000a:
	try
	{ // begin try (depth: 1)
		{
			goto IL_002a;
		}

IL_000f:
		{
			RuntimeObject* L_2 = V_2;
			NullCheck((RuntimeObject*)L_2);
			RuntimeObject * L_3 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Object>::get_Current() */, IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (RuntimeObject*)L_2);
			V_1 = (RuntimeObject *)L_3;
			int32_t L_4 = ___index1;
			int64_t L_5 = V_0;
			int64_t L_6 = (int64_t)L_5;
			V_0 = (int64_t)((int64_t)il2cpp_codegen_add((int64_t)L_6, (int64_t)(((int64_t)((int64_t)1)))));
			if ((!(((uint64_t)(((int64_t)((int64_t)L_4)))) == ((uint64_t)L_6))))
			{
				goto IL_002a;
			}
		}

IL_0023:
		{
			RuntimeObject * L_7 = V_1;
			V_3 = (RuntimeObject *)L_7;
			IL2CPP_LEAVE(0x5D, FINALLY_003a);
		}

IL_002a:
		{
			RuntimeObject* L_8 = V_2;
			NullCheck((RuntimeObject*)L_8);
			bool L_9 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, (RuntimeObject*)L_8);
			if (L_9)
			{
				goto IL_000f;
			}
		}

IL_0035:
		{
			IL2CPP_LEAVE(0x45, FINALLY_003a);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_003a;
	}

FINALLY_003a:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_10 = V_2;
			if (L_10)
			{
				goto IL_003e;
			}
		}

IL_003d:
		{
			IL2CPP_END_FINALLY(58)
		}

IL_003e:
		{
			RuntimeObject* L_11 = V_2;
			NullCheck((RuntimeObject*)L_11);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, (RuntimeObject*)L_11);
			IL2CPP_END_FINALLY(58)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(58)
	{
		IL2CPP_JUMP_TBL(0x5D, IL_005d)
		IL2CPP_JUMP_TBL(0x45, IL_0045)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0045:
	{
		int32_t L_12 = ___fallback2;
		if ((!(((uint32_t)L_12) == ((uint32_t)1))))
		{
			goto IL_0052;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_13 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m2047740448(L_13, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13,Enumerable_ElementAt_TisRuntimeObject_m1482474722_RuntimeMethod_var);
	}

IL_0052:
	{
		il2cpp_codegen_initobj((&V_4), sizeof(RuntimeObject *));
		RuntimeObject * L_14 = V_4;
		return L_14;
	}

IL_005d:
	{
		RuntimeObject * L_15 = V_3;
		return L_15;
	}
}
// TSource System.Linq.Enumerable::ElementAtOrDefault<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Int32)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Enumerable_ElementAtOrDefault_TisRuntimeObject_m2515750788_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	RuntimeObject* V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	RuntimeObject * V_2 = NULL;
	RuntimeObject * G_B6_0 = NULL;
	{
		RuntimeObject* L_0 = ___source0;
		Check_Source_m4098695967(NULL /*static, unused*/, (RuntimeObject *)L_0, /*hidden argument*/NULL);
		int32_t L_1 = ___index1;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0017;
		}
	}
	{
		il2cpp_codegen_initobj((&V_1), sizeof(RuntimeObject *));
		RuntimeObject * L_2 = V_1;
		return L_2;
	}

IL_0017:
	{
		RuntimeObject* L_3 = ___source0;
		V_0 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_3, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		RuntimeObject* L_4 = V_0;
		if (!L_4)
		{
			goto IL_0046;
		}
	}
	{
		int32_t L_5 = ___index1;
		RuntimeObject* L_6 = V_0;
		NullCheck((RuntimeObject*)L_6);
		int32_t L_7 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Object>::get_Count() */, IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (RuntimeObject*)L_6);
		if ((((int32_t)L_5) >= ((int32_t)L_7)))
		{
			goto IL_003c;
		}
	}
	{
		RuntimeObject* L_8 = V_0;
		int32_t L_9 = ___index1;
		NullCheck((RuntimeObject*)L_8);
		RuntimeObject * L_10 = InterfaceFuncInvoker1< RuntimeObject *, int32_t >::Invoke(3 /* !0 System.Collections.Generic.IList`1<System.Object>::get_Item(System.Int32) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_8, (int32_t)L_9);
		G_B6_0 = L_10;
		goto IL_0045;
	}

IL_003c:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(RuntimeObject *));
		RuntimeObject * L_11 = V_2;
		G_B6_0 = L_11;
	}

IL_0045:
	{
		return G_B6_0;
	}

IL_0046:
	{
		RuntimeObject* L_12 = ___source0;
		int32_t L_13 = ___index1;
		RuntimeObject * L_14 = ((  RuntimeObject * (*) (RuntimeObject * /* static, unused */, RuntimeObject*, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)(NULL /*static, unused*/, (RuntimeObject*)L_12, (int32_t)L_13, (int32_t)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		return L_14;
	}
}
// TSource System.Linq.Enumerable::First<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Enumerable_First_TisRuntimeObject_m4173419911_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* ___source0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Enumerable_First_TisRuntimeObject_m4173419911_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		RuntimeObject* L_0 = ___source0;
		Check_Source_m4098695967(NULL /*static, unused*/, (RuntimeObject *)L_0, /*hidden argument*/NULL);
		RuntimeObject* L_1 = ___source0;
		V_0 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_1, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		RuntimeObject* L_2 = V_0;
		if (!L_2)
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_3 = V_0;
		NullCheck((RuntimeObject*)L_3);
		int32_t L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Object>::get_Count() */, IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (RuntimeObject*)L_3);
		if (!L_4)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeObject* L_5 = V_0;
		NullCheck((RuntimeObject*)L_5);
		RuntimeObject * L_6 = InterfaceFuncInvoker1< RuntimeObject *, int32_t >::Invoke(3 /* !0 System.Collections.Generic.IList`1<System.Object>::get_Item(System.Int32) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_5, (int32_t)0);
		return L_6;
	}

IL_0026:
	{
		InvalidOperationException_t56020091 * L_7 = (InvalidOperationException_t56020091 *)il2cpp_codegen_object_new(InvalidOperationException_t56020091_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m2734335978(L_7, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7,Enumerable_First_TisRuntimeObject_m4173419911_RuntimeMethod_var);
	}

IL_002c:
	{
		RuntimeObject* L_8 = ___source0;
		NullCheck((RuntimeObject*)L_8);
		RuntimeObject* L_9 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Object>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->rgctx_data, 2), (RuntimeObject*)L_8);
		V_1 = (RuntimeObject*)L_9;
	}

IL_0033:
	try
	{ // begin try (depth: 1)
		{
			RuntimeObject* L_10 = V_1;
			NullCheck((RuntimeObject*)L_10);
			bool L_11 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, (RuntimeObject*)L_10);
			if (!L_11)
			{
				goto IL_004a;
			}
		}

IL_003e:
		{
			RuntimeObject* L_12 = V_1;
			NullCheck((RuntimeObject*)L_12);
			RuntimeObject * L_13 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Object>::get_Current() */, IL2CPP_RGCTX_DATA(method->rgctx_data, 3), (RuntimeObject*)L_12);
			V_2 = (RuntimeObject *)L_13;
			IL2CPP_LEAVE(0x62, FINALLY_004f);
		}

IL_004a:
		{
			IL2CPP_LEAVE(0x5C, FINALLY_004f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_004f;
	}

FINALLY_004f:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_14 = V_1;
			if (!L_14)
			{
				goto IL_005b;
			}
		}

IL_0055:
		{
			RuntimeObject* L_15 = V_1;
			NullCheck((RuntimeObject*)L_15);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, (RuntimeObject*)L_15);
		}

IL_005b:
		{
			IL2CPP_END_FINALLY(79)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(79)
	{
		IL2CPP_JUMP_TBL(0x62, IL_0062)
		IL2CPP_JUMP_TBL(0x5C, IL_005c)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_005c:
	{
		InvalidOperationException_t56020091 * L_16 = (InvalidOperationException_t56020091 *)il2cpp_codegen_object_new(InvalidOperationException_t56020091_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m2734335978(L_16, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16,Enumerable_First_TisRuntimeObject_m4173419911_RuntimeMethod_var);
	}

IL_0062:
	{
		RuntimeObject * L_17 = V_2;
		return L_17;
	}
}
// TSource System.Linq.Enumerable::First<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Enumerable_First_TisRuntimeObject_m3271412029_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* ___source0, Func_2_t3759279471 * ___predicate1, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___source0;
		Func_2_t3759279471 * L_1 = ___predicate1;
		Check_SourceAndPredicate_m2332465641(NULL /*static, unused*/, (RuntimeObject *)L_0, (RuntimeObject *)L_1, /*hidden argument*/NULL);
		RuntimeObject* L_2 = ___source0;
		Func_2_t3759279471 * L_3 = ___predicate1;
		RuntimeObject * L_4 = ((  RuntimeObject * (*) (RuntimeObject * /* static, unused */, RuntimeObject*, Func_2_t3759279471 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(NULL /*static, unused*/, (RuntimeObject*)L_2, (Func_2_t3759279471 *)L_3, (int32_t)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return L_4;
	}
}
// TSource System.Linq.Enumerable::First<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Linq.Enumerable/Fallback)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Enumerable_First_TisRuntimeObject_m2925268555_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* ___source0, Func_2_t3759279471 * ___predicate1, int32_t ___fallback2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Enumerable_First_TisRuntimeObject_m2925268555_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject * V_2 = NULL;
	RuntimeObject * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		RuntimeObject* L_0 = ___source0;
		NullCheck((RuntimeObject*)L_0);
		RuntimeObject* L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Object>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_0);
		V_1 = (RuntimeObject*)L_1;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0026;
		}

IL_000c:
		{
			RuntimeObject* L_2 = V_1;
			NullCheck((RuntimeObject*)L_2);
			RuntimeObject * L_3 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Object>::get_Current() */, IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (RuntimeObject*)L_2);
			V_0 = (RuntimeObject *)L_3;
			Func_2_t3759279471 * L_4 = ___predicate1;
			RuntimeObject * L_5 = V_0;
			NullCheck((Func_2_t3759279471 *)L_4);
			bool L_6 = ((  bool (*) (Func_2_t3759279471 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((Func_2_t3759279471 *)L_4, (RuntimeObject *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
			if (!L_6)
			{
				goto IL_0026;
			}
		}

IL_001f:
		{
			RuntimeObject * L_7 = V_0;
			V_2 = (RuntimeObject *)L_7;
			IL2CPP_LEAVE(0x58, FINALLY_0036);
		}

IL_0026:
		{
			RuntimeObject* L_8 = V_1;
			NullCheck((RuntimeObject*)L_8);
			bool L_9 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, (RuntimeObject*)L_8);
			if (L_9)
			{
				goto IL_000c;
			}
		}

IL_0031:
		{
			IL2CPP_LEAVE(0x41, FINALLY_0036);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0036;
	}

FINALLY_0036:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_10 = V_1;
			if (L_10)
			{
				goto IL_003a;
			}
		}

IL_0039:
		{
			IL2CPP_END_FINALLY(54)
		}

IL_003a:
		{
			RuntimeObject* L_11 = V_1;
			NullCheck((RuntimeObject*)L_11);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, (RuntimeObject*)L_11);
			IL2CPP_END_FINALLY(54)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(54)
	{
		IL2CPP_JUMP_TBL(0x58, IL_0058)
		IL2CPP_JUMP_TBL(0x41, IL_0041)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0041:
	{
		int32_t L_12 = ___fallback2;
		if ((!(((uint32_t)L_12) == ((uint32_t)1))))
		{
			goto IL_004e;
		}
	}
	{
		InvalidOperationException_t56020091 * L_13 = (InvalidOperationException_t56020091 *)il2cpp_codegen_object_new(InvalidOperationException_t56020091_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m2734335978(L_13, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13,Enumerable_First_TisRuntimeObject_m2925268555_RuntimeMethod_var);
	}

IL_004e:
	{
		il2cpp_codegen_initobj((&V_3), sizeof(RuntimeObject *));
		RuntimeObject * L_14 = V_3;
		return L_14;
	}

IL_0058:
	{
		RuntimeObject * L_15 = V_2;
		return L_15;
	}
}
// TSource System.Linq.Enumerable::FirstOrDefault<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Enumerable_FirstOrDefault_TisRuntimeObject_m21753924_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* ___source0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Enumerable_FirstOrDefault_TisRuntimeObject_m21753924_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject * V_2 = NULL;
	RuntimeObject * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		RuntimeObject* L_0 = ___source0;
		Check_Source_m4098695967(NULL /*static, unused*/, (RuntimeObject *)L_0, /*hidden argument*/NULL);
		RuntimeObject* L_1 = ___source0;
		NullCheck((RuntimeObject*)L_1);
		RuntimeObject* L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Object>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_1);
		V_1 = (RuntimeObject*)L_2;
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0020;
		}

IL_0012:
		{
			RuntimeObject* L_3 = V_1;
			NullCheck((RuntimeObject*)L_3);
			RuntimeObject * L_4 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Object>::get_Current() */, IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (RuntimeObject*)L_3);
			V_0 = (RuntimeObject *)L_4;
			RuntimeObject * L_5 = V_0;
			V_2 = (RuntimeObject *)L_5;
			IL2CPP_LEAVE(0x45, FINALLY_0030);
		}

IL_0020:
		{
			RuntimeObject* L_6 = V_1;
			NullCheck((RuntimeObject*)L_6);
			bool L_7 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, (RuntimeObject*)L_6);
			if (L_7)
			{
				goto IL_0012;
			}
		}

IL_002b:
		{
			IL2CPP_LEAVE(0x3B, FINALLY_0030);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0030;
	}

FINALLY_0030:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_8 = V_1;
			if (L_8)
			{
				goto IL_0034;
			}
		}

IL_0033:
		{
			IL2CPP_END_FINALLY(48)
		}

IL_0034:
		{
			RuntimeObject* L_9 = V_1;
			NullCheck((RuntimeObject*)L_9);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, (RuntimeObject*)L_9);
			IL2CPP_END_FINALLY(48)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(48)
	{
		IL2CPP_JUMP_TBL(0x45, IL_0045)
		IL2CPP_JUMP_TBL(0x3B, IL_003b)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_003b:
	{
		il2cpp_codegen_initobj((&V_3), sizeof(RuntimeObject *));
		RuntimeObject * L_10 = V_3;
		return L_10;
	}

IL_0045:
	{
		RuntimeObject * L_11 = V_2;
		return L_11;
	}
}
// TSource System.Linq.Enumerable::FirstOrDefault<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Enumerable_FirstOrDefault_TisRuntimeObject_m206649257_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* ___source0, Func_2_t3759279471 * ___predicate1, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___source0;
		Func_2_t3759279471 * L_1 = ___predicate1;
		Check_SourceAndPredicate_m2332465641(NULL /*static, unused*/, (RuntimeObject *)L_0, (RuntimeObject *)L_1, /*hidden argument*/NULL);
		RuntimeObject* L_2 = ___source0;
		Func_2_t3759279471 * L_3 = ___predicate1;
		RuntimeObject * L_4 = ((  RuntimeObject * (*) (RuntimeObject * /* static, unused */, RuntimeObject*, Func_2_t3759279471 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(NULL /*static, unused*/, (RuntimeObject*)L_2, (Func_2_t3759279471 *)L_3, (int32_t)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return L_4;
	}
}
// TSource System.Linq.Enumerable::IterateNonNullable<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`3<TSource,TSource,System.Boolean>)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Enumerable_IterateNonNullable_TisRuntimeObject_m4289357107_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* ___source0, Func_3_t415791182 * ___selector1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Enumerable_IterateNonNullable_TisRuntimeObject_m4289357107_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	bool V_1 = false;
	RuntimeObject * V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	RuntimeObject * V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		il2cpp_codegen_initobj((&V_4), sizeof(RuntimeObject *));
		RuntimeObject * L_0 = V_4;
		V_0 = (RuntimeObject *)L_0;
		V_1 = (bool)1;
		RuntimeObject* L_1 = ___source0;
		NullCheck((RuntimeObject*)L_1);
		RuntimeObject* L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Object>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_1);
		V_3 = (RuntimeObject*)L_2;
	}

IL_0014:
	try
	{ // begin try (depth: 1)
		{
			goto IL_003e;
		}

IL_0019:
		{
			RuntimeObject* L_3 = V_3;
			NullCheck((RuntimeObject*)L_3);
			RuntimeObject * L_4 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Object>::get_Current() */, IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (RuntimeObject*)L_3);
			V_2 = (RuntimeObject *)L_4;
			bool L_5 = V_1;
			if (!L_5)
			{
				goto IL_002f;
			}
		}

IL_0026:
		{
			RuntimeObject * L_6 = V_2;
			V_0 = (RuntimeObject *)L_6;
			V_1 = (bool)0;
			goto IL_003e;
		}

IL_002f:
		{
			Func_3_t415791182 * L_7 = ___selector1;
			RuntimeObject * L_8 = V_2;
			RuntimeObject * L_9 = V_0;
			NullCheck((Func_3_t415791182 *)L_7);
			bool L_10 = ((  bool (*) (Func_3_t415791182 *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((Func_3_t415791182 *)L_7, (RuntimeObject *)L_8, (RuntimeObject *)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
			if (!L_10)
			{
				goto IL_003e;
			}
		}

IL_003c:
		{
			RuntimeObject * L_11 = V_2;
			V_0 = (RuntimeObject *)L_11;
		}

IL_003e:
		{
			RuntimeObject* L_12 = V_3;
			NullCheck((RuntimeObject*)L_12);
			bool L_13 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, (RuntimeObject*)L_12);
			if (L_13)
			{
				goto IL_0019;
			}
		}

IL_0049:
		{
			IL2CPP_LEAVE(0x59, FINALLY_004e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_004e;
	}

FINALLY_004e:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_14 = V_3;
			if (L_14)
			{
				goto IL_0052;
			}
		}

IL_0051:
		{
			IL2CPP_END_FINALLY(78)
		}

IL_0052:
		{
			RuntimeObject* L_15 = V_3;
			NullCheck((RuntimeObject*)L_15);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, (RuntimeObject*)L_15);
			IL2CPP_END_FINALLY(78)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(78)
	{
		IL2CPP_JUMP_TBL(0x59, IL_0059)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0059:
	{
		bool L_16 = V_1;
		if (!L_16)
		{
			goto IL_0065;
		}
	}
	{
		InvalidOperationException_t56020091 * L_17 = (InvalidOperationException_t56020091 *)il2cpp_codegen_object_new(InvalidOperationException_t56020091_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m2734335978(L_17, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17,Enumerable_IterateNonNullable_TisRuntimeObject_m4289357107_RuntimeMethod_var);
	}

IL_0065:
	{
		RuntimeObject * L_18 = V_0;
		return L_18;
	}
}
// TSource System.Linq.Enumerable::IterateNullable<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`3<TSource,TSource,System.Boolean>)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Enumerable_IterateNullable_TisRuntimeObject_m2347612260_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* ___source0, Func_3_t415791182 * ___selector1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Enumerable_IterateNullable_TisRuntimeObject_m2347612260_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		il2cpp_codegen_initobj((&V_3), sizeof(RuntimeObject *));
		RuntimeObject * L_0 = V_3;
		V_0 = (RuntimeObject *)L_0;
		RuntimeObject* L_1 = ___source0;
		NullCheck((RuntimeObject*)L_1);
		RuntimeObject* L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Object>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_1);
		V_2 = (RuntimeObject*)L_2;
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0047;
		}

IL_0016:
		{
			RuntimeObject* L_3 = V_2;
			NullCheck((RuntimeObject*)L_3);
			RuntimeObject * L_4 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Object>::get_Current() */, IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (RuntimeObject*)L_3);
			V_1 = (RuntimeObject *)L_4;
			RuntimeObject * L_5 = V_1;
			if (L_5)
			{
				goto IL_002d;
			}
		}

IL_0028:
		{
			goto IL_0047;
		}

IL_002d:
		{
			RuntimeObject * L_6 = V_0;
			if (!L_6)
			{
				goto IL_0045;
			}
		}

IL_0038:
		{
			Func_3_t415791182 * L_7 = ___selector1;
			RuntimeObject * L_8 = V_1;
			RuntimeObject * L_9 = V_0;
			NullCheck((Func_3_t415791182 *)L_7);
			bool L_10 = ((  bool (*) (Func_3_t415791182 *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3)->methodPointer)((Func_3_t415791182 *)L_7, (RuntimeObject *)L_8, (RuntimeObject *)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3));
			if (!L_10)
			{
				goto IL_0047;
			}
		}

IL_0045:
		{
			RuntimeObject * L_11 = V_1;
			V_0 = (RuntimeObject *)L_11;
		}

IL_0047:
		{
			RuntimeObject* L_12 = V_2;
			NullCheck((RuntimeObject*)L_12);
			bool L_13 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, (RuntimeObject*)L_12);
			if (L_13)
			{
				goto IL_0016;
			}
		}

IL_0052:
		{
			IL2CPP_LEAVE(0x62, FINALLY_0057);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0057;
	}

FINALLY_0057:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_14 = V_2;
			if (L_14)
			{
				goto IL_005b;
			}
		}

IL_005a:
		{
			IL2CPP_END_FINALLY(87)
		}

IL_005b:
		{
			RuntimeObject* L_15 = V_2;
			NullCheck((RuntimeObject*)L_15);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, (RuntimeObject*)L_15);
			IL2CPP_END_FINALLY(87)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(87)
	{
		IL2CPP_JUMP_TBL(0x62, IL_0062)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0062:
	{
		RuntimeObject * L_16 = V_0;
		return L_16;
	}
}
// TSource System.Linq.Enumerable::Last<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Enumerable_Last_TisRuntimeObject_m3977869702_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* ___source0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Enumerable_Last_TisRuntimeObject_m3977869702_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	bool V_2 = false;
	RuntimeObject * V_3 = NULL;
	RuntimeObject * V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	RuntimeObject * V_6 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		RuntimeObject* L_0 = ___source0;
		Check_Source_m4098695967(NULL /*static, unused*/, (RuntimeObject *)L_0, /*hidden argument*/NULL);
		RuntimeObject* L_1 = ___source0;
		V_0 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_1, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		RuntimeObject* L_2 = V_0;
		if (!L_2)
		{
			goto IL_0024;
		}
	}
	{
		RuntimeObject* L_3 = V_0;
		NullCheck((RuntimeObject*)L_3);
		int32_t L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Object>::get_Count() */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		InvalidOperationException_t56020091 * L_5 = (InvalidOperationException_t56020091 *)il2cpp_codegen_object_new(InvalidOperationException_t56020091_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m2734335978(L_5, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5,Enumerable_Last_TisRuntimeObject_m3977869702_RuntimeMethod_var);
	}

IL_0024:
	{
		RuntimeObject* L_6 = ___source0;
		V_1 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_6, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
		RuntimeObject* L_7 = V_1;
		if (!L_7)
		{
			goto IL_0040;
		}
	}
	{
		RuntimeObject* L_8 = V_1;
		RuntimeObject* L_9 = V_1;
		NullCheck((RuntimeObject*)L_9);
		int32_t L_10 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Object>::get_Count() */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_9);
		NullCheck((RuntimeObject*)L_8);
		RuntimeObject * L_11 = InterfaceFuncInvoker1< RuntimeObject *, int32_t >::Invoke(3 /* !0 System.Collections.Generic.IList`1<System.Object>::get_Item(System.Int32) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (RuntimeObject*)L_8, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_10, (int32_t)1)));
		return L_11;
	}

IL_0040:
	{
		V_2 = (bool)1;
		il2cpp_codegen_initobj((&V_6), sizeof(RuntimeObject *));
		RuntimeObject * L_12 = V_6;
		V_3 = (RuntimeObject *)L_12;
		RuntimeObject* L_13 = ___source0;
		NullCheck((RuntimeObject*)L_13);
		RuntimeObject* L_14 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Object>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->rgctx_data, 2), (RuntimeObject*)L_13);
		V_5 = (RuntimeObject*)L_14;
	}

IL_0055:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0068;
		}

IL_005a:
		{
			RuntimeObject* L_15 = V_5;
			NullCheck((RuntimeObject*)L_15);
			RuntimeObject * L_16 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Object>::get_Current() */, IL2CPP_RGCTX_DATA(method->rgctx_data, 3), (RuntimeObject*)L_15);
			V_4 = (RuntimeObject *)L_16;
			RuntimeObject * L_17 = V_4;
			V_3 = (RuntimeObject *)L_17;
			V_2 = (bool)0;
		}

IL_0068:
		{
			RuntimeObject* L_18 = V_5;
			NullCheck((RuntimeObject*)L_18);
			bool L_19 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, (RuntimeObject*)L_18);
			if (L_19)
			{
				goto IL_005a;
			}
		}

IL_0074:
		{
			IL2CPP_LEAVE(0x86, FINALLY_0079);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0079;
	}

FINALLY_0079:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_20 = V_5;
			if (L_20)
			{
				goto IL_007e;
			}
		}

IL_007d:
		{
			IL2CPP_END_FINALLY(121)
		}

IL_007e:
		{
			RuntimeObject* L_21 = V_5;
			NullCheck((RuntimeObject*)L_21);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, (RuntimeObject*)L_21);
			IL2CPP_END_FINALLY(121)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(121)
	{
		IL2CPP_JUMP_TBL(0x86, IL_0086)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0086:
	{
		bool L_22 = V_2;
		if (L_22)
		{
			goto IL_008e;
		}
	}
	{
		RuntimeObject * L_23 = V_3;
		return L_23;
	}

IL_008e:
	{
		InvalidOperationException_t56020091 * L_24 = (InvalidOperationException_t56020091 *)il2cpp_codegen_object_new(InvalidOperationException_t56020091_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m2734335978(L_24, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_24,Enumerable_Last_TisRuntimeObject_m3977869702_RuntimeMethod_var);
	}
}
// TSource System.Linq.Enumerable::Last<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Enumerable_Last_TisRuntimeObject_m3692170661_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* ___source0, Func_2_t3759279471 * ___predicate1, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___source0;
		Func_2_t3759279471 * L_1 = ___predicate1;
		Check_SourceAndPredicate_m2332465641(NULL /*static, unused*/, (RuntimeObject *)L_0, (RuntimeObject *)L_1, /*hidden argument*/NULL);
		RuntimeObject* L_2 = ___source0;
		Func_2_t3759279471 * L_3 = ___predicate1;
		RuntimeObject * L_4 = ((  RuntimeObject * (*) (RuntimeObject * /* static, unused */, RuntimeObject*, Func_2_t3759279471 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(NULL /*static, unused*/, (RuntimeObject*)L_2, (Func_2_t3759279471 *)L_3, (int32_t)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return L_4;
	}
}
// TSource System.Linq.Enumerable::Last<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Linq.Enumerable/Fallback)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Enumerable_Last_TisRuntimeObject_m191782855_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* ___source0, Func_2_t3759279471 * ___predicate1, int32_t ___fallback2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Enumerable_Last_TisRuntimeObject_m191782855_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject * V_1 = NULL;
	RuntimeObject * V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	RuntimeObject * V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = (bool)1;
		il2cpp_codegen_initobj((&V_4), sizeof(RuntimeObject *));
		RuntimeObject * L_0 = V_4;
		V_1 = (RuntimeObject *)L_0;
		RuntimeObject* L_1 = ___source0;
		NullCheck((RuntimeObject*)L_1);
		RuntimeObject* L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Object>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_1);
		V_3 = (RuntimeObject*)L_2;
	}

IL_0014:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0035;
		}

IL_0019:
		{
			RuntimeObject* L_3 = V_3;
			NullCheck((RuntimeObject*)L_3);
			RuntimeObject * L_4 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Object>::get_Current() */, IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (RuntimeObject*)L_3);
			V_2 = (RuntimeObject *)L_4;
			Func_2_t3759279471 * L_5 = ___predicate1;
			RuntimeObject * L_6 = V_2;
			NullCheck((Func_2_t3759279471 *)L_5);
			bool L_7 = ((  bool (*) (Func_2_t3759279471 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((Func_2_t3759279471 *)L_5, (RuntimeObject *)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
			if (L_7)
			{
				goto IL_0031;
			}
		}

IL_002c:
		{
			goto IL_0035;
		}

IL_0031:
		{
			RuntimeObject * L_8 = V_2;
			V_1 = (RuntimeObject *)L_8;
			V_0 = (bool)0;
		}

IL_0035:
		{
			RuntimeObject* L_9 = V_3;
			NullCheck((RuntimeObject*)L_9);
			bool L_10 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, (RuntimeObject*)L_9);
			if (L_10)
			{
				goto IL_0019;
			}
		}

IL_0040:
		{
			IL2CPP_LEAVE(0x50, FINALLY_0045);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0045;
	}

FINALLY_0045:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_11 = V_3;
			if (L_11)
			{
				goto IL_0049;
			}
		}

IL_0048:
		{
			IL2CPP_END_FINALLY(69)
		}

IL_0049:
		{
			RuntimeObject* L_12 = V_3;
			NullCheck((RuntimeObject*)L_12);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, (RuntimeObject*)L_12);
			IL2CPP_END_FINALLY(69)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(69)
	{
		IL2CPP_JUMP_TBL(0x50, IL_0050)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0050:
	{
		bool L_13 = V_0;
		if (L_13)
		{
			goto IL_0058;
		}
	}
	{
		RuntimeObject * L_14 = V_1;
		return L_14;
	}

IL_0058:
	{
		int32_t L_15 = ___fallback2;
		if ((!(((uint32_t)L_15) == ((uint32_t)1))))
		{
			goto IL_0065;
		}
	}
	{
		InvalidOperationException_t56020091 * L_16 = (InvalidOperationException_t56020091 *)il2cpp_codegen_object_new(InvalidOperationException_t56020091_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m2734335978(L_16, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16,Enumerable_Last_TisRuntimeObject_m191782855_RuntimeMethod_var);
	}

IL_0065:
	{
		RuntimeObject * L_17 = V_1;
		return L_17;
	}
}
// TSource System.Linq.Enumerable::LastOrDefault<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Enumerable_LastOrDefault_TisRuntimeObject_m4188501139_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* ___source0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Enumerable_LastOrDefault_TisRuntimeObject_m4188501139_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	RuntimeObject * V_2 = NULL;
	RuntimeObject * V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	RuntimeObject * V_5 = NULL;
	RuntimeObject * V_6 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	RuntimeObject * G_B4_0 = NULL;
	{
		RuntimeObject* L_0 = ___source0;
		Check_Source_m4098695967(NULL /*static, unused*/, (RuntimeObject *)L_0, /*hidden argument*/NULL);
		RuntimeObject* L_1 = ___source0;
		V_0 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_1, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		RuntimeObject* L_2 = V_0;
		if (!L_2)
		{
			goto IL_003d;
		}
	}
	{
		RuntimeObject* L_3 = V_0;
		NullCheck((RuntimeObject*)L_3);
		int32_t L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Object>::get_Count() */, IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (RuntimeObject*)L_3);
		if ((((int32_t)L_4) <= ((int32_t)0)))
		{
			goto IL_0032;
		}
	}
	{
		RuntimeObject* L_5 = V_0;
		RuntimeObject* L_6 = V_0;
		NullCheck((RuntimeObject*)L_6);
		int32_t L_7 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Object>::get_Count() */, IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (RuntimeObject*)L_6);
		NullCheck((RuntimeObject*)L_5);
		RuntimeObject * L_8 = InterfaceFuncInvoker1< RuntimeObject *, int32_t >::Invoke(3 /* !0 System.Collections.Generic.IList`1<System.Object>::get_Item(System.Int32) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_5, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_7, (int32_t)1)));
		G_B4_0 = L_8;
		goto IL_003c;
	}

IL_0032:
	{
		il2cpp_codegen_initobj((&V_5), sizeof(RuntimeObject *));
		RuntimeObject * L_9 = V_5;
		G_B4_0 = L_9;
	}

IL_003c:
	{
		return G_B4_0;
	}

IL_003d:
	{
		V_1 = (bool)1;
		il2cpp_codegen_initobj((&V_6), sizeof(RuntimeObject *));
		RuntimeObject * L_10 = V_6;
		V_2 = (RuntimeObject *)L_10;
		RuntimeObject* L_11 = ___source0;
		NullCheck((RuntimeObject*)L_11);
		RuntimeObject* L_12 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Object>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->rgctx_data, 2), (RuntimeObject*)L_11);
		V_4 = (RuntimeObject*)L_12;
	}

IL_0052:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0063;
		}

IL_0057:
		{
			RuntimeObject* L_13 = V_4;
			NullCheck((RuntimeObject*)L_13);
			RuntimeObject * L_14 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Object>::get_Current() */, IL2CPP_RGCTX_DATA(method->rgctx_data, 3), (RuntimeObject*)L_13);
			V_3 = (RuntimeObject *)L_14;
			RuntimeObject * L_15 = V_3;
			V_2 = (RuntimeObject *)L_15;
			V_1 = (bool)0;
		}

IL_0063:
		{
			RuntimeObject* L_16 = V_4;
			NullCheck((RuntimeObject*)L_16);
			bool L_17 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, (RuntimeObject*)L_16);
			if (L_17)
			{
				goto IL_0057;
			}
		}

IL_006f:
		{
			IL2CPP_LEAVE(0x81, FINALLY_0074);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0074;
	}

FINALLY_0074:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_18 = V_4;
			if (L_18)
			{
				goto IL_0079;
			}
		}

IL_0078:
		{
			IL2CPP_END_FINALLY(116)
		}

IL_0079:
		{
			RuntimeObject* L_19 = V_4;
			NullCheck((RuntimeObject*)L_19);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, (RuntimeObject*)L_19);
			IL2CPP_END_FINALLY(116)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(116)
	{
		IL2CPP_JUMP_TBL(0x81, IL_0081)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0081:
	{
		bool L_20 = V_1;
		if (L_20)
		{
			goto IL_0089;
		}
	}
	{
		RuntimeObject * L_21 = V_2;
		return L_21;
	}

IL_0089:
	{
		RuntimeObject * L_22 = V_2;
		return L_22;
	}
}
// TSource System.Linq.Enumerable::LastOrDefault<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Enumerable_LastOrDefault_TisRuntimeObject_m1254320682_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* ___source0, Func_2_t3759279471 * ___predicate1, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___source0;
		Func_2_t3759279471 * L_1 = ___predicate1;
		Check_SourceAndPredicate_m2332465641(NULL /*static, unused*/, (RuntimeObject *)L_0, (RuntimeObject *)L_1, /*hidden argument*/NULL);
		RuntimeObject* L_2 = ___source0;
		Func_2_t3759279471 * L_3 = ___predicate1;
		RuntimeObject * L_4 = ((  RuntimeObject * (*) (RuntimeObject * /* static, unused */, RuntimeObject*, Func_2_t3759279471 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(NULL /*static, unused*/, (RuntimeObject*)L_2, (Func_2_t3759279471 *)L_3, (int32_t)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return L_4;
	}
}
// TSource System.Linq.Enumerable::Max<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Enumerable_Max_TisRuntimeObject_m1299757399_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* ___source0, const RuntimeMethod* method)
{
	Func_3_t415791182 * V_0 = NULL;
	U3CMaxU3Ec__AnonStorey28_1_t1231863791 * V_1 = NULL;
	RuntimeObject * V_2 = NULL;
	{
		U3CMaxU3Ec__AnonStorey28_1_t1231863791 * L_0 = (U3CMaxU3Ec__AnonStorey28_1_t1231863791 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		((  void (*) (U3CMaxU3Ec__AnonStorey28_1_t1231863791 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_1 = (U3CMaxU3Ec__AnonStorey28_1_t1231863791 *)L_0;
		RuntimeObject* L_1 = ___source0;
		Check_Source_m4098695967(NULL /*static, unused*/, (RuntimeObject *)L_1, /*hidden argument*/NULL);
		U3CMaxU3Ec__AnonStorey28_1_t1231863791 * L_2 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 3));
		Comparer_1_t284893750 * L_3 = ((  Comparer_1_t284893750 * (*) (RuntimeObject * /* static, unused */, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		NullCheck(L_2);
		L_2->set_comparer_0(L_3);
		U3CMaxU3Ec__AnonStorey28_1_t1231863791 * L_4 = V_1;
		intptr_t L_5 = (intptr_t)IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4);
		Func_3_t415791182 * L_6 = (Func_3_t415791182 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 5));
		((  void (*) (Func_3_t415791182 *, RuntimeObject *, intptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6)->methodPointer)(L_6, (RuntimeObject *)L_4, (intptr_t)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6));
		V_0 = (Func_3_t415791182 *)L_6;
		il2cpp_codegen_initobj((&V_2), sizeof(RuntimeObject *));
		RuntimeObject * L_7 = V_2;
		if (L_7)
		{
			goto IL_003f;
		}
	}
	{
		RuntimeObject* L_8 = ___source0;
		Func_3_t415791182 * L_9 = V_0;
		RuntimeObject * L_10 = ((  RuntimeObject * (*) (RuntimeObject * /* static, unused */, RuntimeObject*, Func_3_t415791182 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 8)->methodPointer)(NULL /*static, unused*/, (RuntimeObject*)L_8, (Func_3_t415791182 *)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 8));
		return L_10;
	}

IL_003f:
	{
		RuntimeObject* L_11 = ___source0;
		Func_3_t415791182 * L_12 = V_0;
		RuntimeObject * L_13 = ((  RuntimeObject * (*) (RuntimeObject * /* static, unused */, RuntimeObject*, Func_3_t415791182 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 9)->methodPointer)(NULL /*static, unused*/, (RuntimeObject*)L_11, (Func_3_t415791182 *)L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 9));
		return L_13;
	}
}
// TSource System.Linq.Enumerable::Min<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Enumerable_Min_TisRuntimeObject_m2402851060_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* ___source0, const RuntimeMethod* method)
{
	Func_3_t415791182 * V_0 = NULL;
	U3CMinU3Ec__AnonStorey2E_1_t2343074724 * V_1 = NULL;
	RuntimeObject * V_2 = NULL;
	{
		U3CMinU3Ec__AnonStorey2E_1_t2343074724 * L_0 = (U3CMinU3Ec__AnonStorey2E_1_t2343074724 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		((  void (*) (U3CMinU3Ec__AnonStorey2E_1_t2343074724 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_1 = (U3CMinU3Ec__AnonStorey2E_1_t2343074724 *)L_0;
		RuntimeObject* L_1 = ___source0;
		Check_Source_m4098695967(NULL /*static, unused*/, (RuntimeObject *)L_1, /*hidden argument*/NULL);
		U3CMinU3Ec__AnonStorey2E_1_t2343074724 * L_2 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 3));
		Comparer_1_t284893750 * L_3 = ((  Comparer_1_t284893750 * (*) (RuntimeObject * /* static, unused */, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		NullCheck(L_2);
		L_2->set_comparer_0(L_3);
		U3CMinU3Ec__AnonStorey2E_1_t2343074724 * L_4 = V_1;
		intptr_t L_5 = (intptr_t)IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4);
		Func_3_t415791182 * L_6 = (Func_3_t415791182 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 5));
		((  void (*) (Func_3_t415791182 *, RuntimeObject *, intptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6)->methodPointer)(L_6, (RuntimeObject *)L_4, (intptr_t)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6));
		V_0 = (Func_3_t415791182 *)L_6;
		il2cpp_codegen_initobj((&V_2), sizeof(RuntimeObject *));
		RuntimeObject * L_7 = V_2;
		if (L_7)
		{
			goto IL_003f;
		}
	}
	{
		RuntimeObject* L_8 = ___source0;
		Func_3_t415791182 * L_9 = V_0;
		RuntimeObject * L_10 = ((  RuntimeObject * (*) (RuntimeObject * /* static, unused */, RuntimeObject*, Func_3_t415791182 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 8)->methodPointer)(NULL /*static, unused*/, (RuntimeObject*)L_8, (Func_3_t415791182 *)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 8));
		return L_10;
	}

IL_003f:
	{
		RuntimeObject* L_11 = ___source0;
		Func_3_t415791182 * L_12 = V_0;
		RuntimeObject * L_13 = ((  RuntimeObject * (*) (RuntimeObject * /* static, unused */, RuntimeObject*, Func_3_t415791182 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 9)->methodPointer)(NULL /*static, unused*/, (RuntimeObject*)L_11, (Func_3_t415791182 *)L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 9));
		return L_13;
	}
}
// TSource System.Linq.Enumerable::Single<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Enumerable_Single_TisRuntimeObject_m3050605623_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* ___source0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Enumerable_Single_TisRuntimeObject_m3050605623_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject * V_1 = NULL;
	RuntimeObject * V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	RuntimeObject * V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		RuntimeObject* L_0 = ___source0;
		Check_Source_m4098695967(NULL /*static, unused*/, (RuntimeObject *)L_0, /*hidden argument*/NULL);
		V_0 = (bool)0;
		il2cpp_codegen_initobj((&V_4), sizeof(RuntimeObject *));
		RuntimeObject * L_1 = V_4;
		V_1 = (RuntimeObject *)L_1;
		RuntimeObject* L_2 = ___source0;
		NullCheck((RuntimeObject*)L_2);
		RuntimeObject* L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Object>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_2);
		V_3 = (RuntimeObject*)L_3;
	}

IL_001a:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0036;
		}

IL_001f:
		{
			RuntimeObject* L_4 = V_3;
			NullCheck((RuntimeObject*)L_4);
			RuntimeObject * L_5 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Object>::get_Current() */, IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (RuntimeObject*)L_4);
			V_2 = (RuntimeObject *)L_5;
			bool L_6 = V_0;
			if (!L_6)
			{
				goto IL_0032;
			}
		}

IL_002c:
		{
			InvalidOperationException_t56020091 * L_7 = (InvalidOperationException_t56020091 *)il2cpp_codegen_object_new(InvalidOperationException_t56020091_il2cpp_TypeInfo_var);
			InvalidOperationException__ctor_m2734335978(L_7, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_7,Enumerable_Single_TisRuntimeObject_m3050605623_RuntimeMethod_var);
		}

IL_0032:
		{
			V_0 = (bool)1;
			RuntimeObject * L_8 = V_2;
			V_1 = (RuntimeObject *)L_8;
		}

IL_0036:
		{
			RuntimeObject* L_9 = V_3;
			NullCheck((RuntimeObject*)L_9);
			bool L_10 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, (RuntimeObject*)L_9);
			if (L_10)
			{
				goto IL_001f;
			}
		}

IL_0041:
		{
			IL2CPP_LEAVE(0x51, FINALLY_0046);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0046;
	}

FINALLY_0046:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_11 = V_3;
			if (L_11)
			{
				goto IL_004a;
			}
		}

IL_0049:
		{
			IL2CPP_END_FINALLY(70)
		}

IL_004a:
		{
			RuntimeObject* L_12 = V_3;
			NullCheck((RuntimeObject*)L_12);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, (RuntimeObject*)L_12);
			IL2CPP_END_FINALLY(70)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(70)
	{
		IL2CPP_JUMP_TBL(0x51, IL_0051)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0051:
	{
		bool L_13 = V_0;
		if (L_13)
		{
			goto IL_005d;
		}
	}
	{
		InvalidOperationException_t56020091 * L_14 = (InvalidOperationException_t56020091 *)il2cpp_codegen_object_new(InvalidOperationException_t56020091_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m2734335978(L_14, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14,Enumerable_Single_TisRuntimeObject_m3050605623_RuntimeMethod_var);
	}

IL_005d:
	{
		RuntimeObject * L_15 = V_1;
		return L_15;
	}
}
// TSource System.Linq.Enumerable::Single<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Enumerable_Single_TisRuntimeObject_m17809230_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* ___source0, Func_2_t3759279471 * ___predicate1, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___source0;
		Func_2_t3759279471 * L_1 = ___predicate1;
		Check_SourceAndPredicate_m2332465641(NULL /*static, unused*/, (RuntimeObject *)L_0, (RuntimeObject *)L_1, /*hidden argument*/NULL);
		RuntimeObject* L_2 = ___source0;
		Func_2_t3759279471 * L_3 = ___predicate1;
		RuntimeObject * L_4 = ((  RuntimeObject * (*) (RuntimeObject * /* static, unused */, RuntimeObject*, Func_2_t3759279471 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(NULL /*static, unused*/, (RuntimeObject*)L_2, (Func_2_t3759279471 *)L_3, (int32_t)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return L_4;
	}
}
// TSource System.Linq.Enumerable::Single<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Linq.Enumerable/Fallback)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Enumerable_Single_TisRuntimeObject_m1146889774_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* ___source0, Func_2_t3759279471 * ___predicate1, int32_t ___fallback2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Enumerable_Single_TisRuntimeObject_m1146889774_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject * V_1 = NULL;
	RuntimeObject * V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	RuntimeObject * V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = (bool)0;
		il2cpp_codegen_initobj((&V_4), sizeof(RuntimeObject *));
		RuntimeObject * L_0 = V_4;
		V_1 = (RuntimeObject *)L_0;
		RuntimeObject* L_1 = ___source0;
		NullCheck((RuntimeObject*)L_1);
		RuntimeObject* L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Object>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_1);
		V_3 = (RuntimeObject*)L_2;
	}

IL_0014:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0041;
		}

IL_0019:
		{
			RuntimeObject* L_3 = V_3;
			NullCheck((RuntimeObject*)L_3);
			RuntimeObject * L_4 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Object>::get_Current() */, IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (RuntimeObject*)L_3);
			V_2 = (RuntimeObject *)L_4;
			Func_2_t3759279471 * L_5 = ___predicate1;
			RuntimeObject * L_6 = V_2;
			NullCheck((Func_2_t3759279471 *)L_5);
			bool L_7 = ((  bool (*) (Func_2_t3759279471 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((Func_2_t3759279471 *)L_5, (RuntimeObject *)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
			if (L_7)
			{
				goto IL_0031;
			}
		}

IL_002c:
		{
			goto IL_0041;
		}

IL_0031:
		{
			bool L_8 = V_0;
			if (!L_8)
			{
				goto IL_003d;
			}
		}

IL_0037:
		{
			InvalidOperationException_t56020091 * L_9 = (InvalidOperationException_t56020091 *)il2cpp_codegen_object_new(InvalidOperationException_t56020091_il2cpp_TypeInfo_var);
			InvalidOperationException__ctor_m2734335978(L_9, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_9,Enumerable_Single_TisRuntimeObject_m1146889774_RuntimeMethod_var);
		}

IL_003d:
		{
			V_0 = (bool)1;
			RuntimeObject * L_10 = V_2;
			V_1 = (RuntimeObject *)L_10;
		}

IL_0041:
		{
			RuntimeObject* L_11 = V_3;
			NullCheck((RuntimeObject*)L_11);
			bool L_12 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, (RuntimeObject*)L_11);
			if (L_12)
			{
				goto IL_0019;
			}
		}

IL_004c:
		{
			IL2CPP_LEAVE(0x5C, FINALLY_0051);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0051;
	}

FINALLY_0051:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_13 = V_3;
			if (L_13)
			{
				goto IL_0055;
			}
		}

IL_0054:
		{
			IL2CPP_END_FINALLY(81)
		}

IL_0055:
		{
			RuntimeObject* L_14 = V_3;
			NullCheck((RuntimeObject*)L_14);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, (RuntimeObject*)L_14);
			IL2CPP_END_FINALLY(81)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(81)
	{
		IL2CPP_JUMP_TBL(0x5C, IL_005c)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_005c:
	{
		bool L_15 = V_0;
		if (L_15)
		{
			goto IL_006f;
		}
	}
	{
		int32_t L_16 = ___fallback2;
		if ((!(((uint32_t)L_16) == ((uint32_t)1))))
		{
			goto IL_006f;
		}
	}
	{
		InvalidOperationException_t56020091 * L_17 = (InvalidOperationException_t56020091 *)il2cpp_codegen_object_new(InvalidOperationException_t56020091_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m2734335978(L_17, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17,Enumerable_Single_TisRuntimeObject_m1146889774_RuntimeMethod_var);
	}

IL_006f:
	{
		RuntimeObject * L_18 = V_1;
		return L_18;
	}
}
// TSource System.Linq.Enumerable::SingleOrDefault<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Enumerable_SingleOrDefault_TisRuntimeObject_m3432536092_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* ___source0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Enumerable_SingleOrDefault_TisRuntimeObject_m3432536092_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject * V_1 = NULL;
	RuntimeObject * V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	RuntimeObject * V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		RuntimeObject* L_0 = ___source0;
		Check_Source_m4098695967(NULL /*static, unused*/, (RuntimeObject *)L_0, /*hidden argument*/NULL);
		V_0 = (bool)0;
		il2cpp_codegen_initobj((&V_4), sizeof(RuntimeObject *));
		RuntimeObject * L_1 = V_4;
		V_1 = (RuntimeObject *)L_1;
		RuntimeObject* L_2 = ___source0;
		NullCheck((RuntimeObject*)L_2);
		RuntimeObject* L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Object>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_2);
		V_3 = (RuntimeObject*)L_3;
	}

IL_001a:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0036;
		}

IL_001f:
		{
			RuntimeObject* L_4 = V_3;
			NullCheck((RuntimeObject*)L_4);
			RuntimeObject * L_5 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Object>::get_Current() */, IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (RuntimeObject*)L_4);
			V_2 = (RuntimeObject *)L_5;
			bool L_6 = V_0;
			if (!L_6)
			{
				goto IL_0032;
			}
		}

IL_002c:
		{
			InvalidOperationException_t56020091 * L_7 = (InvalidOperationException_t56020091 *)il2cpp_codegen_object_new(InvalidOperationException_t56020091_il2cpp_TypeInfo_var);
			InvalidOperationException__ctor_m2734335978(L_7, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_7,Enumerable_SingleOrDefault_TisRuntimeObject_m3432536092_RuntimeMethod_var);
		}

IL_0032:
		{
			V_0 = (bool)1;
			RuntimeObject * L_8 = V_2;
			V_1 = (RuntimeObject *)L_8;
		}

IL_0036:
		{
			RuntimeObject* L_9 = V_3;
			NullCheck((RuntimeObject*)L_9);
			bool L_10 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, (RuntimeObject*)L_9);
			if (L_10)
			{
				goto IL_001f;
			}
		}

IL_0041:
		{
			IL2CPP_LEAVE(0x51, FINALLY_0046);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0046;
	}

FINALLY_0046:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_11 = V_3;
			if (L_11)
			{
				goto IL_004a;
			}
		}

IL_0049:
		{
			IL2CPP_END_FINALLY(70)
		}

IL_004a:
		{
			RuntimeObject* L_12 = V_3;
			NullCheck((RuntimeObject*)L_12);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, (RuntimeObject*)L_12);
			IL2CPP_END_FINALLY(70)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(70)
	{
		IL2CPP_JUMP_TBL(0x51, IL_0051)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0051:
	{
		RuntimeObject * L_13 = V_1;
		return L_13;
	}
}
// TSource System.Linq.Enumerable::SingleOrDefault<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Enumerable_SingleOrDefault_TisRuntimeObject_m2673734094_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* ___source0, Func_2_t3759279471 * ___predicate1, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___source0;
		Func_2_t3759279471 * L_1 = ___predicate1;
		Check_SourceAndPredicate_m2332465641(NULL /*static, unused*/, (RuntimeObject *)L_0, (RuntimeObject *)L_1, /*hidden argument*/NULL);
		RuntimeObject* L_2 = ___source0;
		Func_2_t3759279471 * L_3 = ___predicate1;
		RuntimeObject * L_4 = ((  RuntimeObject * (*) (RuntimeObject * /* static, unused */, RuntimeObject*, Func_2_t3759279471 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(NULL /*static, unused*/, (RuntimeObject*)L_2, (Func_2_t3759279471 *)L_3, (int32_t)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return L_4;
	}
}
// TSource System.Linq.Queryable::Aggregate<System.Object>(System.Linq.IQueryable`1<TSource>,System.Linq.Expressions.Expression`1<System.Func`3<TSource,TSource,TSource>>)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Queryable_Aggregate_TisRuntimeObject_m2057389622_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* ___source0, Expression_1_t3384637588 * ___func1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Queryable_Aggregate_TisRuntimeObject_m2057389622_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___source0;
		Expression_1_t3384637588 * L_1 = ___func1;
		Check_SourceAndFunc_m1489824209(NULL /*static, unused*/, (RuntimeObject *)L_0, (RuntimeObject *)L_1, /*hidden argument*/NULL);
		RuntimeObject* L_2 = ___source0;
		NullCheck((RuntimeObject*)L_2);
		RuntimeObject* L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2 /* System.Linq.IQueryProvider System.Linq.IQueryable::get_Provider() */, IQueryable_t2875280540_il2cpp_TypeInfo_var, (RuntimeObject*)L_2);
		MethodBase_t * L_4 = il2cpp_codegen_get_method_object(Queryable_Aggregate_TisRuntimeObject_m2057389622_RuntimeMethod_var);
		TypeU5BU5D_t3940880105* L_5 = (TypeU5BU5D_t3940880105*)((TypeU5BU5D_t3940880105*)SZArrayNew(TypeU5BU5D_t3940880105_il2cpp_TypeInfo_var, (uint32_t)1));
		RuntimeTypeHandle_t3027515415  L_6 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_7 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_6, /*hidden argument*/NULL);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_7);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_7);
		MethodInfo_t * L_8 = Queryable_MakeGeneric_m238132717(NULL /*static, unused*/, (MethodBase_t *)L_4, (TypeU5BU5D_t3940880105*)L_5, /*hidden argument*/NULL);
		ExpressionU5BU5D_t2266720799* L_9 = (ExpressionU5BU5D_t2266720799*)((ExpressionU5BU5D_t2266720799*)SZArrayNew(ExpressionU5BU5D_t2266720799_il2cpp_TypeInfo_var, (uint32_t)2));
		RuntimeObject* L_10 = ___source0;
		NullCheck((RuntimeObject*)L_10);
		Expression_t1588164026 * L_11 = InterfaceFuncInvoker0< Expression_t1588164026 * >::Invoke(1 /* System.Linq.Expressions.Expression System.Linq.IQueryable::get_Expression() */, IQueryable_t2875280540_il2cpp_TypeInfo_var, (RuntimeObject*)L_10);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_11);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(0), (Expression_t1588164026 *)L_11);
		ExpressionU5BU5D_t2266720799* L_12 = (ExpressionU5BU5D_t2266720799*)L_9;
		Expression_1_t3384637588 * L_13 = ___func1;
		UnaryExpression_t3914580921 * L_14 = Expression_Quote_m2632568450(NULL /*static, unused*/, (Expression_t1588164026 *)L_13, /*hidden argument*/NULL);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_14);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(1), (Expression_t1588164026 *)L_14);
		Expression_t1588164026 * L_15 = Queryable_StaticCall_m1277226490(NULL /*static, unused*/, (MethodInfo_t *)L_8, (ExpressionU5BU5D_t2266720799*)L_12, /*hidden argument*/NULL);
		NullCheck((RuntimeObject*)L_3);
		RuntimeObject * L_16 = GenericInterfaceFuncInvoker1< RuntimeObject *, Expression_t1588164026 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1), (RuntimeObject*)L_3, (Expression_t1588164026 *)L_15);
		return L_16;
	}
}
// TSource System.Linq.Queryable::ElementAt<System.Object>(System.Linq.IQueryable`1<TSource>,System.Int32)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Queryable_ElementAt_TisRuntimeObject_m2496200849_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Queryable_ElementAt_TisRuntimeObject_m2496200849_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___source0;
		Check_Source_m4098695967(NULL /*static, unused*/, (RuntimeObject *)L_0, /*hidden argument*/NULL);
		RuntimeObject* L_1 = ___source0;
		NullCheck((RuntimeObject*)L_1);
		RuntimeObject* L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2 /* System.Linq.IQueryProvider System.Linq.IQueryable::get_Provider() */, IQueryable_t2875280540_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
		MethodBase_t * L_3 = il2cpp_codegen_get_method_object(Queryable_ElementAt_TisRuntimeObject_m2496200849_RuntimeMethod_var);
		TypeU5BU5D_t3940880105* L_4 = (TypeU5BU5D_t3940880105*)((TypeU5BU5D_t3940880105*)SZArrayNew(TypeU5BU5D_t3940880105_il2cpp_TypeInfo_var, (uint32_t)1));
		RuntimeTypeHandle_t3027515415  L_5 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_6 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_6);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_6);
		MethodInfo_t * L_7 = Queryable_MakeGeneric_m238132717(NULL /*static, unused*/, (MethodBase_t *)L_3, (TypeU5BU5D_t3940880105*)L_4, /*hidden argument*/NULL);
		ExpressionU5BU5D_t2266720799* L_8 = (ExpressionU5BU5D_t2266720799*)((ExpressionU5BU5D_t2266720799*)SZArrayNew(ExpressionU5BU5D_t2266720799_il2cpp_TypeInfo_var, (uint32_t)2));
		RuntimeObject* L_9 = ___source0;
		NullCheck((RuntimeObject*)L_9);
		Expression_t1588164026 * L_10 = InterfaceFuncInvoker0< Expression_t1588164026 * >::Invoke(1 /* System.Linq.Expressions.Expression System.Linq.IQueryable::get_Expression() */, IQueryable_t2875280540_il2cpp_TypeInfo_var, (RuntimeObject*)L_9);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_10);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(0), (Expression_t1588164026 *)L_10);
		ExpressionU5BU5D_t2266720799* L_11 = (ExpressionU5BU5D_t2266720799*)L_8;
		int32_t L_12 = ___index1;
		int32_t L_13 = L_12;
		RuntimeObject * L_14 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_13);
		ConstantExpression_t3613654278 * L_15 = Expression_Constant_m3269986673(NULL /*static, unused*/, (RuntimeObject *)L_14, /*hidden argument*/NULL);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_15);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(1), (Expression_t1588164026 *)L_15);
		Expression_t1588164026 * L_16 = Queryable_StaticCall_m1277226490(NULL /*static, unused*/, (MethodInfo_t *)L_7, (ExpressionU5BU5D_t2266720799*)L_11, /*hidden argument*/NULL);
		NullCheck((RuntimeObject*)L_2);
		RuntimeObject * L_17 = GenericInterfaceFuncInvoker1< RuntimeObject *, Expression_t1588164026 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1), (RuntimeObject*)L_2, (Expression_t1588164026 *)L_16);
		return L_17;
	}
}
// TSource System.Linq.Queryable::ElementAtOrDefault<System.Object>(System.Linq.IQueryable`1<TSource>,System.Int32)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Queryable_ElementAtOrDefault_TisRuntimeObject_m868883000_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Queryable_ElementAtOrDefault_TisRuntimeObject_m868883000_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___source0;
		Check_Source_m4098695967(NULL /*static, unused*/, (RuntimeObject *)L_0, /*hidden argument*/NULL);
		RuntimeObject* L_1 = ___source0;
		NullCheck((RuntimeObject*)L_1);
		RuntimeObject* L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2 /* System.Linq.IQueryProvider System.Linq.IQueryable::get_Provider() */, IQueryable_t2875280540_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
		MethodBase_t * L_3 = il2cpp_codegen_get_method_object(Queryable_ElementAtOrDefault_TisRuntimeObject_m868883000_RuntimeMethod_var);
		TypeU5BU5D_t3940880105* L_4 = (TypeU5BU5D_t3940880105*)((TypeU5BU5D_t3940880105*)SZArrayNew(TypeU5BU5D_t3940880105_il2cpp_TypeInfo_var, (uint32_t)1));
		RuntimeTypeHandle_t3027515415  L_5 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_6 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_6);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_6);
		MethodInfo_t * L_7 = Queryable_MakeGeneric_m238132717(NULL /*static, unused*/, (MethodBase_t *)L_3, (TypeU5BU5D_t3940880105*)L_4, /*hidden argument*/NULL);
		ExpressionU5BU5D_t2266720799* L_8 = (ExpressionU5BU5D_t2266720799*)((ExpressionU5BU5D_t2266720799*)SZArrayNew(ExpressionU5BU5D_t2266720799_il2cpp_TypeInfo_var, (uint32_t)2));
		RuntimeObject* L_9 = ___source0;
		NullCheck((RuntimeObject*)L_9);
		Expression_t1588164026 * L_10 = InterfaceFuncInvoker0< Expression_t1588164026 * >::Invoke(1 /* System.Linq.Expressions.Expression System.Linq.IQueryable::get_Expression() */, IQueryable_t2875280540_il2cpp_TypeInfo_var, (RuntimeObject*)L_9);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_10);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(0), (Expression_t1588164026 *)L_10);
		ExpressionU5BU5D_t2266720799* L_11 = (ExpressionU5BU5D_t2266720799*)L_8;
		int32_t L_12 = ___index1;
		int32_t L_13 = L_12;
		RuntimeObject * L_14 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_13);
		ConstantExpression_t3613654278 * L_15 = Expression_Constant_m3269986673(NULL /*static, unused*/, (RuntimeObject *)L_14, /*hidden argument*/NULL);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_15);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(1), (Expression_t1588164026 *)L_15);
		Expression_t1588164026 * L_16 = Queryable_StaticCall_m1277226490(NULL /*static, unused*/, (MethodInfo_t *)L_7, (ExpressionU5BU5D_t2266720799*)L_11, /*hidden argument*/NULL);
		NullCheck((RuntimeObject*)L_2);
		RuntimeObject * L_17 = GenericInterfaceFuncInvoker1< RuntimeObject *, Expression_t1588164026 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1), (RuntimeObject*)L_2, (Expression_t1588164026 *)L_16);
		return L_17;
	}
}
// TSource System.Linq.Queryable::First<System.Object>(System.Linq.IQueryable`1<TSource>)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Queryable_First_TisRuntimeObject_m3889068409_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* ___source0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Queryable_First_TisRuntimeObject_m3889068409_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___source0;
		Check_Source_m4098695967(NULL /*static, unused*/, (RuntimeObject *)L_0, /*hidden argument*/NULL);
		RuntimeObject* L_1 = ___source0;
		NullCheck((RuntimeObject*)L_1);
		RuntimeObject* L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2 /* System.Linq.IQueryProvider System.Linq.IQueryable::get_Provider() */, IQueryable_t2875280540_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
		MethodBase_t * L_3 = il2cpp_codegen_get_method_object(Queryable_First_TisRuntimeObject_m3889068409_RuntimeMethod_var);
		TypeU5BU5D_t3940880105* L_4 = (TypeU5BU5D_t3940880105*)((TypeU5BU5D_t3940880105*)SZArrayNew(TypeU5BU5D_t3940880105_il2cpp_TypeInfo_var, (uint32_t)1));
		RuntimeTypeHandle_t3027515415  L_5 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_6 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_6);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_6);
		MethodInfo_t * L_7 = Queryable_MakeGeneric_m238132717(NULL /*static, unused*/, (MethodBase_t *)L_3, (TypeU5BU5D_t3940880105*)L_4, /*hidden argument*/NULL);
		ExpressionU5BU5D_t2266720799* L_8 = (ExpressionU5BU5D_t2266720799*)((ExpressionU5BU5D_t2266720799*)SZArrayNew(ExpressionU5BU5D_t2266720799_il2cpp_TypeInfo_var, (uint32_t)1));
		RuntimeObject* L_9 = ___source0;
		NullCheck((RuntimeObject*)L_9);
		Expression_t1588164026 * L_10 = InterfaceFuncInvoker0< Expression_t1588164026 * >::Invoke(1 /* System.Linq.Expressions.Expression System.Linq.IQueryable::get_Expression() */, IQueryable_t2875280540_il2cpp_TypeInfo_var, (RuntimeObject*)L_9);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_10);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(0), (Expression_t1588164026 *)L_10);
		Expression_t1588164026 * L_11 = Queryable_StaticCall_m1277226490(NULL /*static, unused*/, (MethodInfo_t *)L_7, (ExpressionU5BU5D_t2266720799*)L_8, /*hidden argument*/NULL);
		NullCheck((RuntimeObject*)L_2);
		RuntimeObject * L_12 = GenericInterfaceFuncInvoker1< RuntimeObject *, Expression_t1588164026 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1), (RuntimeObject*)L_2, (Expression_t1588164026 *)L_11);
		return L_12;
	}
}
// TSource System.Linq.Queryable::First<System.Object>(System.Linq.IQueryable`1<TSource>,System.Linq.Expressions.Expression`1<System.Func`2<TSource,System.Boolean>>)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Queryable_First_TisRuntimeObject_m2228996224_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* ___source0, Expression_1_t3745307678 * ___predicate1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Queryable_First_TisRuntimeObject_m2228996224_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___source0;
		Expression_1_t3745307678 * L_1 = ___predicate1;
		Check_SourceAndPredicate_m2332465641(NULL /*static, unused*/, (RuntimeObject *)L_0, (RuntimeObject *)L_1, /*hidden argument*/NULL);
		RuntimeObject* L_2 = ___source0;
		NullCheck((RuntimeObject*)L_2);
		RuntimeObject* L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2 /* System.Linq.IQueryProvider System.Linq.IQueryable::get_Provider() */, IQueryable_t2875280540_il2cpp_TypeInfo_var, (RuntimeObject*)L_2);
		MethodBase_t * L_4 = il2cpp_codegen_get_method_object(Queryable_First_TisRuntimeObject_m2228996224_RuntimeMethod_var);
		TypeU5BU5D_t3940880105* L_5 = (TypeU5BU5D_t3940880105*)((TypeU5BU5D_t3940880105*)SZArrayNew(TypeU5BU5D_t3940880105_il2cpp_TypeInfo_var, (uint32_t)1));
		RuntimeTypeHandle_t3027515415  L_6 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_7 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_6, /*hidden argument*/NULL);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_7);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_7);
		MethodInfo_t * L_8 = Queryable_MakeGeneric_m238132717(NULL /*static, unused*/, (MethodBase_t *)L_4, (TypeU5BU5D_t3940880105*)L_5, /*hidden argument*/NULL);
		ExpressionU5BU5D_t2266720799* L_9 = (ExpressionU5BU5D_t2266720799*)((ExpressionU5BU5D_t2266720799*)SZArrayNew(ExpressionU5BU5D_t2266720799_il2cpp_TypeInfo_var, (uint32_t)2));
		RuntimeObject* L_10 = ___source0;
		NullCheck((RuntimeObject*)L_10);
		Expression_t1588164026 * L_11 = InterfaceFuncInvoker0< Expression_t1588164026 * >::Invoke(1 /* System.Linq.Expressions.Expression System.Linq.IQueryable::get_Expression() */, IQueryable_t2875280540_il2cpp_TypeInfo_var, (RuntimeObject*)L_10);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_11);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(0), (Expression_t1588164026 *)L_11);
		ExpressionU5BU5D_t2266720799* L_12 = (ExpressionU5BU5D_t2266720799*)L_9;
		Expression_1_t3745307678 * L_13 = ___predicate1;
		UnaryExpression_t3914580921 * L_14 = Expression_Quote_m2632568450(NULL /*static, unused*/, (Expression_t1588164026 *)L_13, /*hidden argument*/NULL);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_14);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(1), (Expression_t1588164026 *)L_14);
		Expression_t1588164026 * L_15 = Queryable_StaticCall_m1277226490(NULL /*static, unused*/, (MethodInfo_t *)L_8, (ExpressionU5BU5D_t2266720799*)L_12, /*hidden argument*/NULL);
		NullCheck((RuntimeObject*)L_3);
		RuntimeObject * L_16 = GenericInterfaceFuncInvoker1< RuntimeObject *, Expression_t1588164026 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1), (RuntimeObject*)L_3, (Expression_t1588164026 *)L_15);
		return L_16;
	}
}
// TSource System.Linq.Queryable::FirstOrDefault<System.Object>(System.Linq.IQueryable`1<TSource>)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Queryable_FirstOrDefault_TisRuntimeObject_m424282597_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* ___source0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Queryable_FirstOrDefault_TisRuntimeObject_m424282597_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___source0;
		Check_Source_m4098695967(NULL /*static, unused*/, (RuntimeObject *)L_0, /*hidden argument*/NULL);
		RuntimeObject* L_1 = ___source0;
		NullCheck((RuntimeObject*)L_1);
		RuntimeObject* L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2 /* System.Linq.IQueryProvider System.Linq.IQueryable::get_Provider() */, IQueryable_t2875280540_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
		MethodBase_t * L_3 = il2cpp_codegen_get_method_object(Queryable_FirstOrDefault_TisRuntimeObject_m424282597_RuntimeMethod_var);
		TypeU5BU5D_t3940880105* L_4 = (TypeU5BU5D_t3940880105*)((TypeU5BU5D_t3940880105*)SZArrayNew(TypeU5BU5D_t3940880105_il2cpp_TypeInfo_var, (uint32_t)1));
		RuntimeTypeHandle_t3027515415  L_5 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_6 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_6);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_6);
		MethodInfo_t * L_7 = Queryable_MakeGeneric_m238132717(NULL /*static, unused*/, (MethodBase_t *)L_3, (TypeU5BU5D_t3940880105*)L_4, /*hidden argument*/NULL);
		ExpressionU5BU5D_t2266720799* L_8 = (ExpressionU5BU5D_t2266720799*)((ExpressionU5BU5D_t2266720799*)SZArrayNew(ExpressionU5BU5D_t2266720799_il2cpp_TypeInfo_var, (uint32_t)1));
		RuntimeObject* L_9 = ___source0;
		NullCheck((RuntimeObject*)L_9);
		Expression_t1588164026 * L_10 = InterfaceFuncInvoker0< Expression_t1588164026 * >::Invoke(1 /* System.Linq.Expressions.Expression System.Linq.IQueryable::get_Expression() */, IQueryable_t2875280540_il2cpp_TypeInfo_var, (RuntimeObject*)L_9);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_10);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(0), (Expression_t1588164026 *)L_10);
		Expression_t1588164026 * L_11 = Queryable_StaticCall_m1277226490(NULL /*static, unused*/, (MethodInfo_t *)L_7, (ExpressionU5BU5D_t2266720799*)L_8, /*hidden argument*/NULL);
		NullCheck((RuntimeObject*)L_2);
		RuntimeObject * L_12 = GenericInterfaceFuncInvoker1< RuntimeObject *, Expression_t1588164026 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1), (RuntimeObject*)L_2, (Expression_t1588164026 *)L_11);
		return L_12;
	}
}
// TSource System.Linq.Queryable::FirstOrDefault<System.Object>(System.Linq.IQueryable`1<TSource>,System.Linq.Expressions.Expression`1<System.Func`2<TSource,System.Boolean>>)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Queryable_FirstOrDefault_TisRuntimeObject_m1000070085_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* ___source0, Expression_1_t3745307678 * ___predicate1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Queryable_FirstOrDefault_TisRuntimeObject_m1000070085_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___source0;
		Expression_1_t3745307678 * L_1 = ___predicate1;
		Check_SourceAndPredicate_m2332465641(NULL /*static, unused*/, (RuntimeObject *)L_0, (RuntimeObject *)L_1, /*hidden argument*/NULL);
		RuntimeObject* L_2 = ___source0;
		NullCheck((RuntimeObject*)L_2);
		RuntimeObject* L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2 /* System.Linq.IQueryProvider System.Linq.IQueryable::get_Provider() */, IQueryable_t2875280540_il2cpp_TypeInfo_var, (RuntimeObject*)L_2);
		MethodBase_t * L_4 = il2cpp_codegen_get_method_object(Queryable_FirstOrDefault_TisRuntimeObject_m1000070085_RuntimeMethod_var);
		TypeU5BU5D_t3940880105* L_5 = (TypeU5BU5D_t3940880105*)((TypeU5BU5D_t3940880105*)SZArrayNew(TypeU5BU5D_t3940880105_il2cpp_TypeInfo_var, (uint32_t)1));
		RuntimeTypeHandle_t3027515415  L_6 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_7 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_6, /*hidden argument*/NULL);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_7);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_7);
		MethodInfo_t * L_8 = Queryable_MakeGeneric_m238132717(NULL /*static, unused*/, (MethodBase_t *)L_4, (TypeU5BU5D_t3940880105*)L_5, /*hidden argument*/NULL);
		ExpressionU5BU5D_t2266720799* L_9 = (ExpressionU5BU5D_t2266720799*)((ExpressionU5BU5D_t2266720799*)SZArrayNew(ExpressionU5BU5D_t2266720799_il2cpp_TypeInfo_var, (uint32_t)2));
		RuntimeObject* L_10 = ___source0;
		NullCheck((RuntimeObject*)L_10);
		Expression_t1588164026 * L_11 = InterfaceFuncInvoker0< Expression_t1588164026 * >::Invoke(1 /* System.Linq.Expressions.Expression System.Linq.IQueryable::get_Expression() */, IQueryable_t2875280540_il2cpp_TypeInfo_var, (RuntimeObject*)L_10);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_11);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(0), (Expression_t1588164026 *)L_11);
		ExpressionU5BU5D_t2266720799* L_12 = (ExpressionU5BU5D_t2266720799*)L_9;
		Expression_1_t3745307678 * L_13 = ___predicate1;
		UnaryExpression_t3914580921 * L_14 = Expression_Quote_m2632568450(NULL /*static, unused*/, (Expression_t1588164026 *)L_13, /*hidden argument*/NULL);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_14);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(1), (Expression_t1588164026 *)L_14);
		Expression_t1588164026 * L_15 = Queryable_StaticCall_m1277226490(NULL /*static, unused*/, (MethodInfo_t *)L_8, (ExpressionU5BU5D_t2266720799*)L_12, /*hidden argument*/NULL);
		NullCheck((RuntimeObject*)L_3);
		RuntimeObject * L_16 = GenericInterfaceFuncInvoker1< RuntimeObject *, Expression_t1588164026 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1), (RuntimeObject*)L_3, (Expression_t1588164026 *)L_15);
		return L_16;
	}
}
// TSource System.Linq.Queryable::Last<System.Object>(System.Linq.IQueryable`1<TSource>)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Queryable_Last_TisRuntimeObject_m2960285214_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* ___source0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Queryable_Last_TisRuntimeObject_m2960285214_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___source0;
		Check_Source_m4098695967(NULL /*static, unused*/, (RuntimeObject *)L_0, /*hidden argument*/NULL);
		RuntimeObject* L_1 = ___source0;
		NullCheck((RuntimeObject*)L_1);
		RuntimeObject* L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2 /* System.Linq.IQueryProvider System.Linq.IQueryable::get_Provider() */, IQueryable_t2875280540_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
		MethodBase_t * L_3 = il2cpp_codegen_get_method_object(Queryable_Last_TisRuntimeObject_m2960285214_RuntimeMethod_var);
		TypeU5BU5D_t3940880105* L_4 = (TypeU5BU5D_t3940880105*)((TypeU5BU5D_t3940880105*)SZArrayNew(TypeU5BU5D_t3940880105_il2cpp_TypeInfo_var, (uint32_t)1));
		RuntimeTypeHandle_t3027515415  L_5 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_6 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_6);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_6);
		MethodInfo_t * L_7 = Queryable_MakeGeneric_m238132717(NULL /*static, unused*/, (MethodBase_t *)L_3, (TypeU5BU5D_t3940880105*)L_4, /*hidden argument*/NULL);
		ExpressionU5BU5D_t2266720799* L_8 = (ExpressionU5BU5D_t2266720799*)((ExpressionU5BU5D_t2266720799*)SZArrayNew(ExpressionU5BU5D_t2266720799_il2cpp_TypeInfo_var, (uint32_t)1));
		RuntimeObject* L_9 = ___source0;
		NullCheck((RuntimeObject*)L_9);
		Expression_t1588164026 * L_10 = InterfaceFuncInvoker0< Expression_t1588164026 * >::Invoke(1 /* System.Linq.Expressions.Expression System.Linq.IQueryable::get_Expression() */, IQueryable_t2875280540_il2cpp_TypeInfo_var, (RuntimeObject*)L_9);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_10);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(0), (Expression_t1588164026 *)L_10);
		Expression_t1588164026 * L_11 = Queryable_StaticCall_m1277226490(NULL /*static, unused*/, (MethodInfo_t *)L_7, (ExpressionU5BU5D_t2266720799*)L_8, /*hidden argument*/NULL);
		NullCheck((RuntimeObject*)L_2);
		RuntimeObject * L_12 = GenericInterfaceFuncInvoker1< RuntimeObject *, Expression_t1588164026 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1), (RuntimeObject*)L_2, (Expression_t1588164026 *)L_11);
		return L_12;
	}
}
// TSource System.Linq.Queryable::Last<System.Object>(System.Linq.IQueryable`1<TSource>,System.Linq.Expressions.Expression`1<System.Func`2<TSource,System.Boolean>>)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Queryable_Last_TisRuntimeObject_m3573577223_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* ___source0, Expression_1_t3745307678 * ___predicate1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Queryable_Last_TisRuntimeObject_m3573577223_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___source0;
		Expression_1_t3745307678 * L_1 = ___predicate1;
		Check_SourceAndPredicate_m2332465641(NULL /*static, unused*/, (RuntimeObject *)L_0, (RuntimeObject *)L_1, /*hidden argument*/NULL);
		RuntimeObject* L_2 = ___source0;
		NullCheck((RuntimeObject*)L_2);
		RuntimeObject* L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2 /* System.Linq.IQueryProvider System.Linq.IQueryable::get_Provider() */, IQueryable_t2875280540_il2cpp_TypeInfo_var, (RuntimeObject*)L_2);
		MethodBase_t * L_4 = il2cpp_codegen_get_method_object(Queryable_Last_TisRuntimeObject_m3573577223_RuntimeMethod_var);
		TypeU5BU5D_t3940880105* L_5 = (TypeU5BU5D_t3940880105*)((TypeU5BU5D_t3940880105*)SZArrayNew(TypeU5BU5D_t3940880105_il2cpp_TypeInfo_var, (uint32_t)1));
		RuntimeTypeHandle_t3027515415  L_6 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_7 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_6, /*hidden argument*/NULL);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_7);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_7);
		MethodInfo_t * L_8 = Queryable_MakeGeneric_m238132717(NULL /*static, unused*/, (MethodBase_t *)L_4, (TypeU5BU5D_t3940880105*)L_5, /*hidden argument*/NULL);
		ExpressionU5BU5D_t2266720799* L_9 = (ExpressionU5BU5D_t2266720799*)((ExpressionU5BU5D_t2266720799*)SZArrayNew(ExpressionU5BU5D_t2266720799_il2cpp_TypeInfo_var, (uint32_t)2));
		RuntimeObject* L_10 = ___source0;
		NullCheck((RuntimeObject*)L_10);
		Expression_t1588164026 * L_11 = InterfaceFuncInvoker0< Expression_t1588164026 * >::Invoke(1 /* System.Linq.Expressions.Expression System.Linq.IQueryable::get_Expression() */, IQueryable_t2875280540_il2cpp_TypeInfo_var, (RuntimeObject*)L_10);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_11);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(0), (Expression_t1588164026 *)L_11);
		ExpressionU5BU5D_t2266720799* L_12 = (ExpressionU5BU5D_t2266720799*)L_9;
		Expression_1_t3745307678 * L_13 = ___predicate1;
		UnaryExpression_t3914580921 * L_14 = Expression_Quote_m2632568450(NULL /*static, unused*/, (Expression_t1588164026 *)L_13, /*hidden argument*/NULL);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_14);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(1), (Expression_t1588164026 *)L_14);
		Expression_t1588164026 * L_15 = Queryable_StaticCall_m1277226490(NULL /*static, unused*/, (MethodInfo_t *)L_8, (ExpressionU5BU5D_t2266720799*)L_12, /*hidden argument*/NULL);
		NullCheck((RuntimeObject*)L_3);
		RuntimeObject * L_16 = GenericInterfaceFuncInvoker1< RuntimeObject *, Expression_t1588164026 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1), (RuntimeObject*)L_3, (Expression_t1588164026 *)L_15);
		return L_16;
	}
}
// TSource System.Linq.Queryable::LastOrDefault<System.Object>(System.Linq.IQueryable`1<TSource>)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Queryable_LastOrDefault_TisRuntimeObject_m1794473812_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* ___source0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Queryable_LastOrDefault_TisRuntimeObject_m1794473812_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___source0;
		Check_Source_m4098695967(NULL /*static, unused*/, (RuntimeObject *)L_0, /*hidden argument*/NULL);
		RuntimeObject* L_1 = ___source0;
		NullCheck((RuntimeObject*)L_1);
		RuntimeObject* L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2 /* System.Linq.IQueryProvider System.Linq.IQueryable::get_Provider() */, IQueryable_t2875280540_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
		MethodBase_t * L_3 = il2cpp_codegen_get_method_object(Queryable_LastOrDefault_TisRuntimeObject_m1794473812_RuntimeMethod_var);
		TypeU5BU5D_t3940880105* L_4 = (TypeU5BU5D_t3940880105*)((TypeU5BU5D_t3940880105*)SZArrayNew(TypeU5BU5D_t3940880105_il2cpp_TypeInfo_var, (uint32_t)1));
		RuntimeTypeHandle_t3027515415  L_5 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_6 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_6);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_6);
		MethodInfo_t * L_7 = Queryable_MakeGeneric_m238132717(NULL /*static, unused*/, (MethodBase_t *)L_3, (TypeU5BU5D_t3940880105*)L_4, /*hidden argument*/NULL);
		ExpressionU5BU5D_t2266720799* L_8 = (ExpressionU5BU5D_t2266720799*)((ExpressionU5BU5D_t2266720799*)SZArrayNew(ExpressionU5BU5D_t2266720799_il2cpp_TypeInfo_var, (uint32_t)1));
		RuntimeObject* L_9 = ___source0;
		NullCheck((RuntimeObject*)L_9);
		Expression_t1588164026 * L_10 = InterfaceFuncInvoker0< Expression_t1588164026 * >::Invoke(1 /* System.Linq.Expressions.Expression System.Linq.IQueryable::get_Expression() */, IQueryable_t2875280540_il2cpp_TypeInfo_var, (RuntimeObject*)L_9);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_10);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(0), (Expression_t1588164026 *)L_10);
		Expression_t1588164026 * L_11 = Queryable_StaticCall_m1277226490(NULL /*static, unused*/, (MethodInfo_t *)L_7, (ExpressionU5BU5D_t2266720799*)L_8, /*hidden argument*/NULL);
		NullCheck((RuntimeObject*)L_2);
		RuntimeObject * L_12 = GenericInterfaceFuncInvoker1< RuntimeObject *, Expression_t1588164026 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1), (RuntimeObject*)L_2, (Expression_t1588164026 *)L_11);
		return L_12;
	}
}
// TSource System.Linq.Queryable::LastOrDefault<System.Object>(System.Linq.IQueryable`1<TSource>,System.Linq.Expressions.Expression`1<System.Func`2<TSource,System.Boolean>>)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Queryable_LastOrDefault_TisRuntimeObject_m450969091_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* ___source0, Expression_1_t3745307678 * ___predicate1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Queryable_LastOrDefault_TisRuntimeObject_m450969091_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___source0;
		Expression_1_t3745307678 * L_1 = ___predicate1;
		Check_SourceAndPredicate_m2332465641(NULL /*static, unused*/, (RuntimeObject *)L_0, (RuntimeObject *)L_1, /*hidden argument*/NULL);
		RuntimeObject* L_2 = ___source0;
		NullCheck((RuntimeObject*)L_2);
		RuntimeObject* L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2 /* System.Linq.IQueryProvider System.Linq.IQueryable::get_Provider() */, IQueryable_t2875280540_il2cpp_TypeInfo_var, (RuntimeObject*)L_2);
		MethodBase_t * L_4 = il2cpp_codegen_get_method_object(Queryable_LastOrDefault_TisRuntimeObject_m450969091_RuntimeMethod_var);
		TypeU5BU5D_t3940880105* L_5 = (TypeU5BU5D_t3940880105*)((TypeU5BU5D_t3940880105*)SZArrayNew(TypeU5BU5D_t3940880105_il2cpp_TypeInfo_var, (uint32_t)1));
		RuntimeTypeHandle_t3027515415  L_6 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_7 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_6, /*hidden argument*/NULL);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_7);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_7);
		MethodInfo_t * L_8 = Queryable_MakeGeneric_m238132717(NULL /*static, unused*/, (MethodBase_t *)L_4, (TypeU5BU5D_t3940880105*)L_5, /*hidden argument*/NULL);
		ExpressionU5BU5D_t2266720799* L_9 = (ExpressionU5BU5D_t2266720799*)((ExpressionU5BU5D_t2266720799*)SZArrayNew(ExpressionU5BU5D_t2266720799_il2cpp_TypeInfo_var, (uint32_t)2));
		RuntimeObject* L_10 = ___source0;
		NullCheck((RuntimeObject*)L_10);
		Expression_t1588164026 * L_11 = InterfaceFuncInvoker0< Expression_t1588164026 * >::Invoke(1 /* System.Linq.Expressions.Expression System.Linq.IQueryable::get_Expression() */, IQueryable_t2875280540_il2cpp_TypeInfo_var, (RuntimeObject*)L_10);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_11);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(0), (Expression_t1588164026 *)L_11);
		ExpressionU5BU5D_t2266720799* L_12 = (ExpressionU5BU5D_t2266720799*)L_9;
		Expression_1_t3745307678 * L_13 = ___predicate1;
		UnaryExpression_t3914580921 * L_14 = Expression_Quote_m2632568450(NULL /*static, unused*/, (Expression_t1588164026 *)L_13, /*hidden argument*/NULL);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_14);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(1), (Expression_t1588164026 *)L_14);
		Expression_t1588164026 * L_15 = Queryable_StaticCall_m1277226490(NULL /*static, unused*/, (MethodInfo_t *)L_8, (ExpressionU5BU5D_t2266720799*)L_12, /*hidden argument*/NULL);
		NullCheck((RuntimeObject*)L_3);
		RuntimeObject * L_16 = GenericInterfaceFuncInvoker1< RuntimeObject *, Expression_t1588164026 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1), (RuntimeObject*)L_3, (Expression_t1588164026 *)L_15);
		return L_16;
	}
}
// TSource System.Linq.Queryable::Max<System.Object>(System.Linq.IQueryable`1<TSource>)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Queryable_Max_TisRuntimeObject_m1625076762_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* ___source0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Queryable_Max_TisRuntimeObject_m1625076762_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___source0;
		Check_Source_m4098695967(NULL /*static, unused*/, (RuntimeObject *)L_0, /*hidden argument*/NULL);
		RuntimeObject* L_1 = ___source0;
		NullCheck((RuntimeObject*)L_1);
		RuntimeObject* L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2 /* System.Linq.IQueryProvider System.Linq.IQueryable::get_Provider() */, IQueryable_t2875280540_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
		MethodBase_t * L_3 = il2cpp_codegen_get_method_object(Queryable_Max_TisRuntimeObject_m1625076762_RuntimeMethod_var);
		TypeU5BU5D_t3940880105* L_4 = (TypeU5BU5D_t3940880105*)((TypeU5BU5D_t3940880105*)SZArrayNew(TypeU5BU5D_t3940880105_il2cpp_TypeInfo_var, (uint32_t)1));
		RuntimeTypeHandle_t3027515415  L_5 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_6 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_6);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_6);
		MethodInfo_t * L_7 = Queryable_MakeGeneric_m238132717(NULL /*static, unused*/, (MethodBase_t *)L_3, (TypeU5BU5D_t3940880105*)L_4, /*hidden argument*/NULL);
		ExpressionU5BU5D_t2266720799* L_8 = (ExpressionU5BU5D_t2266720799*)((ExpressionU5BU5D_t2266720799*)SZArrayNew(ExpressionU5BU5D_t2266720799_il2cpp_TypeInfo_var, (uint32_t)1));
		RuntimeObject* L_9 = ___source0;
		NullCheck((RuntimeObject*)L_9);
		Expression_t1588164026 * L_10 = InterfaceFuncInvoker0< Expression_t1588164026 * >::Invoke(1 /* System.Linq.Expressions.Expression System.Linq.IQueryable::get_Expression() */, IQueryable_t2875280540_il2cpp_TypeInfo_var, (RuntimeObject*)L_9);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_10);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(0), (Expression_t1588164026 *)L_10);
		Expression_t1588164026 * L_11 = Queryable_StaticCall_m1277226490(NULL /*static, unused*/, (MethodInfo_t *)L_7, (ExpressionU5BU5D_t2266720799*)L_8, /*hidden argument*/NULL);
		NullCheck((RuntimeObject*)L_2);
		RuntimeObject * L_12 = GenericInterfaceFuncInvoker1< RuntimeObject *, Expression_t1588164026 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1), (RuntimeObject*)L_2, (Expression_t1588164026 *)L_11);
		return L_12;
	}
}
// TSource System.Linq.Queryable::Min<System.Object>(System.Linq.IQueryable`1<TSource>)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Queryable_Min_TisRuntimeObject_m4205125250_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* ___source0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Queryable_Min_TisRuntimeObject_m4205125250_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___source0;
		Check_Source_m4098695967(NULL /*static, unused*/, (RuntimeObject *)L_0, /*hidden argument*/NULL);
		RuntimeObject* L_1 = ___source0;
		NullCheck((RuntimeObject*)L_1);
		RuntimeObject* L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2 /* System.Linq.IQueryProvider System.Linq.IQueryable::get_Provider() */, IQueryable_t2875280540_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
		MethodBase_t * L_3 = il2cpp_codegen_get_method_object(Queryable_Min_TisRuntimeObject_m4205125250_RuntimeMethod_var);
		TypeU5BU5D_t3940880105* L_4 = (TypeU5BU5D_t3940880105*)((TypeU5BU5D_t3940880105*)SZArrayNew(TypeU5BU5D_t3940880105_il2cpp_TypeInfo_var, (uint32_t)1));
		RuntimeTypeHandle_t3027515415  L_5 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_6 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_6);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_6);
		MethodInfo_t * L_7 = Queryable_MakeGeneric_m238132717(NULL /*static, unused*/, (MethodBase_t *)L_3, (TypeU5BU5D_t3940880105*)L_4, /*hidden argument*/NULL);
		ExpressionU5BU5D_t2266720799* L_8 = (ExpressionU5BU5D_t2266720799*)((ExpressionU5BU5D_t2266720799*)SZArrayNew(ExpressionU5BU5D_t2266720799_il2cpp_TypeInfo_var, (uint32_t)1));
		RuntimeObject* L_9 = ___source0;
		NullCheck((RuntimeObject*)L_9);
		Expression_t1588164026 * L_10 = InterfaceFuncInvoker0< Expression_t1588164026 * >::Invoke(1 /* System.Linq.Expressions.Expression System.Linq.IQueryable::get_Expression() */, IQueryable_t2875280540_il2cpp_TypeInfo_var, (RuntimeObject*)L_9);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_10);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(0), (Expression_t1588164026 *)L_10);
		Expression_t1588164026 * L_11 = Queryable_StaticCall_m1277226490(NULL /*static, unused*/, (MethodInfo_t *)L_7, (ExpressionU5BU5D_t2266720799*)L_8, /*hidden argument*/NULL);
		NullCheck((RuntimeObject*)L_2);
		RuntimeObject * L_12 = GenericInterfaceFuncInvoker1< RuntimeObject *, Expression_t1588164026 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1), (RuntimeObject*)L_2, (Expression_t1588164026 *)L_11);
		return L_12;
	}
}
// TSource System.Linq.Queryable::Single<System.Object>(System.Linq.IQueryable`1<TSource>)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Queryable_Single_TisRuntimeObject_m2971268297_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* ___source0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Queryable_Single_TisRuntimeObject_m2971268297_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___source0;
		Check_Source_m4098695967(NULL /*static, unused*/, (RuntimeObject *)L_0, /*hidden argument*/NULL);
		RuntimeObject* L_1 = ___source0;
		NullCheck((RuntimeObject*)L_1);
		RuntimeObject* L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2 /* System.Linq.IQueryProvider System.Linq.IQueryable::get_Provider() */, IQueryable_t2875280540_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
		MethodBase_t * L_3 = il2cpp_codegen_get_method_object(Queryable_Single_TisRuntimeObject_m2971268297_RuntimeMethod_var);
		TypeU5BU5D_t3940880105* L_4 = (TypeU5BU5D_t3940880105*)((TypeU5BU5D_t3940880105*)SZArrayNew(TypeU5BU5D_t3940880105_il2cpp_TypeInfo_var, (uint32_t)1));
		RuntimeTypeHandle_t3027515415  L_5 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_6 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_6);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_6);
		MethodInfo_t * L_7 = Queryable_MakeGeneric_m238132717(NULL /*static, unused*/, (MethodBase_t *)L_3, (TypeU5BU5D_t3940880105*)L_4, /*hidden argument*/NULL);
		ExpressionU5BU5D_t2266720799* L_8 = (ExpressionU5BU5D_t2266720799*)((ExpressionU5BU5D_t2266720799*)SZArrayNew(ExpressionU5BU5D_t2266720799_il2cpp_TypeInfo_var, (uint32_t)1));
		RuntimeObject* L_9 = ___source0;
		NullCheck((RuntimeObject*)L_9);
		Expression_t1588164026 * L_10 = InterfaceFuncInvoker0< Expression_t1588164026 * >::Invoke(1 /* System.Linq.Expressions.Expression System.Linq.IQueryable::get_Expression() */, IQueryable_t2875280540_il2cpp_TypeInfo_var, (RuntimeObject*)L_9);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_10);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(0), (Expression_t1588164026 *)L_10);
		Expression_t1588164026 * L_11 = Queryable_StaticCall_m1277226490(NULL /*static, unused*/, (MethodInfo_t *)L_7, (ExpressionU5BU5D_t2266720799*)L_8, /*hidden argument*/NULL);
		NullCheck((RuntimeObject*)L_2);
		RuntimeObject * L_12 = GenericInterfaceFuncInvoker1< RuntimeObject *, Expression_t1588164026 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1), (RuntimeObject*)L_2, (Expression_t1588164026 *)L_11);
		return L_12;
	}
}
// TSource System.Linq.Queryable::Single<System.Object>(System.Linq.IQueryable`1<TSource>,System.Linq.Expressions.Expression`1<System.Func`2<TSource,System.Boolean>>)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Queryable_Single_TisRuntimeObject_m401722898_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* ___source0, Expression_1_t3745307678 * ___predicate1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Queryable_Single_TisRuntimeObject_m401722898_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___source0;
		Expression_1_t3745307678 * L_1 = ___predicate1;
		Check_SourceAndPredicate_m2332465641(NULL /*static, unused*/, (RuntimeObject *)L_0, (RuntimeObject *)L_1, /*hidden argument*/NULL);
		RuntimeObject* L_2 = ___source0;
		NullCheck((RuntimeObject*)L_2);
		RuntimeObject* L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2 /* System.Linq.IQueryProvider System.Linq.IQueryable::get_Provider() */, IQueryable_t2875280540_il2cpp_TypeInfo_var, (RuntimeObject*)L_2);
		MethodBase_t * L_4 = il2cpp_codegen_get_method_object(Queryable_Single_TisRuntimeObject_m401722898_RuntimeMethod_var);
		TypeU5BU5D_t3940880105* L_5 = (TypeU5BU5D_t3940880105*)((TypeU5BU5D_t3940880105*)SZArrayNew(TypeU5BU5D_t3940880105_il2cpp_TypeInfo_var, (uint32_t)1));
		RuntimeTypeHandle_t3027515415  L_6 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_7 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_6, /*hidden argument*/NULL);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_7);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_7);
		MethodInfo_t * L_8 = Queryable_MakeGeneric_m238132717(NULL /*static, unused*/, (MethodBase_t *)L_4, (TypeU5BU5D_t3940880105*)L_5, /*hidden argument*/NULL);
		ExpressionU5BU5D_t2266720799* L_9 = (ExpressionU5BU5D_t2266720799*)((ExpressionU5BU5D_t2266720799*)SZArrayNew(ExpressionU5BU5D_t2266720799_il2cpp_TypeInfo_var, (uint32_t)2));
		RuntimeObject* L_10 = ___source0;
		NullCheck((RuntimeObject*)L_10);
		Expression_t1588164026 * L_11 = InterfaceFuncInvoker0< Expression_t1588164026 * >::Invoke(1 /* System.Linq.Expressions.Expression System.Linq.IQueryable::get_Expression() */, IQueryable_t2875280540_il2cpp_TypeInfo_var, (RuntimeObject*)L_10);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_11);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(0), (Expression_t1588164026 *)L_11);
		ExpressionU5BU5D_t2266720799* L_12 = (ExpressionU5BU5D_t2266720799*)L_9;
		Expression_1_t3745307678 * L_13 = ___predicate1;
		UnaryExpression_t3914580921 * L_14 = Expression_Quote_m2632568450(NULL /*static, unused*/, (Expression_t1588164026 *)L_13, /*hidden argument*/NULL);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_14);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(1), (Expression_t1588164026 *)L_14);
		Expression_t1588164026 * L_15 = Queryable_StaticCall_m1277226490(NULL /*static, unused*/, (MethodInfo_t *)L_8, (ExpressionU5BU5D_t2266720799*)L_12, /*hidden argument*/NULL);
		NullCheck((RuntimeObject*)L_3);
		RuntimeObject * L_16 = GenericInterfaceFuncInvoker1< RuntimeObject *, Expression_t1588164026 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1), (RuntimeObject*)L_3, (Expression_t1588164026 *)L_15);
		return L_16;
	}
}
// TSource System.Linq.Queryable::SingleOrDefault<System.Object>(System.Linq.IQueryable`1<TSource>)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Queryable_SingleOrDefault_TisRuntimeObject_m508682141_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* ___source0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Queryable_SingleOrDefault_TisRuntimeObject_m508682141_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___source0;
		Check_Source_m4098695967(NULL /*static, unused*/, (RuntimeObject *)L_0, /*hidden argument*/NULL);
		RuntimeObject* L_1 = ___source0;
		NullCheck((RuntimeObject*)L_1);
		RuntimeObject* L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2 /* System.Linq.IQueryProvider System.Linq.IQueryable::get_Provider() */, IQueryable_t2875280540_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
		MethodBase_t * L_3 = il2cpp_codegen_get_method_object(Queryable_SingleOrDefault_TisRuntimeObject_m508682141_RuntimeMethod_var);
		TypeU5BU5D_t3940880105* L_4 = (TypeU5BU5D_t3940880105*)((TypeU5BU5D_t3940880105*)SZArrayNew(TypeU5BU5D_t3940880105_il2cpp_TypeInfo_var, (uint32_t)1));
		RuntimeTypeHandle_t3027515415  L_5 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_6 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_6);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_6);
		MethodInfo_t * L_7 = Queryable_MakeGeneric_m238132717(NULL /*static, unused*/, (MethodBase_t *)L_3, (TypeU5BU5D_t3940880105*)L_4, /*hidden argument*/NULL);
		ExpressionU5BU5D_t2266720799* L_8 = (ExpressionU5BU5D_t2266720799*)((ExpressionU5BU5D_t2266720799*)SZArrayNew(ExpressionU5BU5D_t2266720799_il2cpp_TypeInfo_var, (uint32_t)1));
		RuntimeObject* L_9 = ___source0;
		NullCheck((RuntimeObject*)L_9);
		Expression_t1588164026 * L_10 = InterfaceFuncInvoker0< Expression_t1588164026 * >::Invoke(1 /* System.Linq.Expressions.Expression System.Linq.IQueryable::get_Expression() */, IQueryable_t2875280540_il2cpp_TypeInfo_var, (RuntimeObject*)L_9);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_10);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(0), (Expression_t1588164026 *)L_10);
		Expression_t1588164026 * L_11 = Queryable_StaticCall_m1277226490(NULL /*static, unused*/, (MethodInfo_t *)L_7, (ExpressionU5BU5D_t2266720799*)L_8, /*hidden argument*/NULL);
		NullCheck((RuntimeObject*)L_2);
		RuntimeObject * L_12 = GenericInterfaceFuncInvoker1< RuntimeObject *, Expression_t1588164026 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1), (RuntimeObject*)L_2, (Expression_t1588164026 *)L_11);
		return L_12;
	}
}
// TSource System.Linq.Queryable::SingleOrDefault<System.Object>(System.Linq.IQueryable`1<TSource>,System.Linq.Expressions.Expression`1<System.Func`2<TSource,System.Boolean>>)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Queryable_SingleOrDefault_TisRuntimeObject_m554078806_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* ___source0, Expression_1_t3745307678 * ___predicate1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Queryable_SingleOrDefault_TisRuntimeObject_m554078806_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___source0;
		Expression_1_t3745307678 * L_1 = ___predicate1;
		Check_SourceAndPredicate_m2332465641(NULL /*static, unused*/, (RuntimeObject *)L_0, (RuntimeObject *)L_1, /*hidden argument*/NULL);
		RuntimeObject* L_2 = ___source0;
		NullCheck((RuntimeObject*)L_2);
		RuntimeObject* L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2 /* System.Linq.IQueryProvider System.Linq.IQueryable::get_Provider() */, IQueryable_t2875280540_il2cpp_TypeInfo_var, (RuntimeObject*)L_2);
		MethodBase_t * L_4 = il2cpp_codegen_get_method_object(Queryable_SingleOrDefault_TisRuntimeObject_m554078806_RuntimeMethod_var);
		TypeU5BU5D_t3940880105* L_5 = (TypeU5BU5D_t3940880105*)((TypeU5BU5D_t3940880105*)SZArrayNew(TypeU5BU5D_t3940880105_il2cpp_TypeInfo_var, (uint32_t)1));
		RuntimeTypeHandle_t3027515415  L_6 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_7 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_6, /*hidden argument*/NULL);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_7);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_7);
		MethodInfo_t * L_8 = Queryable_MakeGeneric_m238132717(NULL /*static, unused*/, (MethodBase_t *)L_4, (TypeU5BU5D_t3940880105*)L_5, /*hidden argument*/NULL);
		ExpressionU5BU5D_t2266720799* L_9 = (ExpressionU5BU5D_t2266720799*)((ExpressionU5BU5D_t2266720799*)SZArrayNew(ExpressionU5BU5D_t2266720799_il2cpp_TypeInfo_var, (uint32_t)2));
		RuntimeObject* L_10 = ___source0;
		NullCheck((RuntimeObject*)L_10);
		Expression_t1588164026 * L_11 = InterfaceFuncInvoker0< Expression_t1588164026 * >::Invoke(1 /* System.Linq.Expressions.Expression System.Linq.IQueryable::get_Expression() */, IQueryable_t2875280540_il2cpp_TypeInfo_var, (RuntimeObject*)L_10);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_11);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(0), (Expression_t1588164026 *)L_11);
		ExpressionU5BU5D_t2266720799* L_12 = (ExpressionU5BU5D_t2266720799*)L_9;
		Expression_1_t3745307678 * L_13 = ___predicate1;
		UnaryExpression_t3914580921 * L_14 = Expression_Quote_m2632568450(NULL /*static, unused*/, (Expression_t1588164026 *)L_13, /*hidden argument*/NULL);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_14);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(1), (Expression_t1588164026 *)L_14);
		Expression_t1588164026 * L_15 = Queryable_StaticCall_m1277226490(NULL /*static, unused*/, (MethodInfo_t *)L_8, (ExpressionU5BU5D_t2266720799*)L_12, /*hidden argument*/NULL);
		NullCheck((RuntimeObject*)L_3);
		RuntimeObject * L_16 = GenericInterfaceFuncInvoker1< RuntimeObject *, Expression_t1588164026 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1), (RuntimeObject*)L_3, (Expression_t1588164026 *)L_15);
		return L_16;
	}
}
// TSource[] System.Linq.Enumerable::ToArray<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>(System.Collections.Generic.IEnumerable`1<TSource>)
extern "C" IL2CPP_METHOD_ATTR KeyValuePair_2U5BU5D_t3014208436* Enumerable_ToArray_TisKeyValuePair_2_t847377929_m3945405839_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* ___source0, const RuntimeMethod* method)
{
	RuntimeObject* V_0 = NULL;
	KeyValuePair_2U5BU5D_t3014208436* V_1 = NULL;
	{
		RuntimeObject* L_0 = ___source0;
		Check_Source_m4098695967(NULL /*static, unused*/, (RuntimeObject *)L_0, /*hidden argument*/NULL);
		RuntimeObject* L_1 = ___source0;
		V_0 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_1, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		RuntimeObject* L_2 = V_0;
		if (!L_2)
		{
			goto IL_0029;
		}
	}
	{
		RuntimeObject* L_3 = V_0;
		NullCheck((RuntimeObject*)L_3);
		int32_t L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::get_Count() */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_3);
		V_1 = (KeyValuePair_2U5BU5D_t3014208436*)((KeyValuePair_2U5BU5D_t3014208436*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (uint32_t)L_4));
		RuntimeObject* L_5 = V_0;
		KeyValuePair_2U5BU5D_t3014208436* L_6 = V_1;
		NullCheck((RuntimeObject*)L_5);
		InterfaceActionInvoker2< KeyValuePair_2U5BU5D_t3014208436*, int32_t >::Invoke(5 /* System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::CopyTo(!0[],System.Int32) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_5, (KeyValuePair_2U5BU5D_t3014208436*)L_6, (int32_t)0);
		KeyValuePair_2U5BU5D_t3014208436* L_7 = V_1;
		return L_7;
	}

IL_0029:
	{
		RuntimeObject* L_8 = ___source0;
		List_1_t2319452671 * L_9 = (List_1_t2319452671 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 2));
		((  void (*) (List_1_t2319452671 *, RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3)->methodPointer)(L_9, (RuntimeObject*)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3));
		NullCheck((List_1_t2319452671 *)L_9);
		KeyValuePair_2U5BU5D_t3014208436* L_10 = ((  KeyValuePair_2U5BU5D_t3014208436* (*) (List_1_t2319452671 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4)->methodPointer)((List_1_t2319452671 *)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4));
		return L_10;
	}
}
// TSource[] System.Linq.Enumerable::ToArray<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
extern "C" IL2CPP_METHOD_ATTR ObjectU5BU5D_t2843939325* Enumerable_ToArray_TisRuntimeObject_m2173755481_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* ___source0, const RuntimeMethod* method)
{
	RuntimeObject* V_0 = NULL;
	ObjectU5BU5D_t2843939325* V_1 = NULL;
	{
		RuntimeObject* L_0 = ___source0;
		Check_Source_m4098695967(NULL /*static, unused*/, (RuntimeObject *)L_0, /*hidden argument*/NULL);
		RuntimeObject* L_1 = ___source0;
		V_0 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_1, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		RuntimeObject* L_2 = V_0;
		if (!L_2)
		{
			goto IL_0029;
		}
	}
	{
		RuntimeObject* L_3 = V_0;
		NullCheck((RuntimeObject*)L_3);
		int32_t L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Object>::get_Count() */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_3);
		V_1 = (ObjectU5BU5D_t2843939325*)((ObjectU5BU5D_t2843939325*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (uint32_t)L_4));
		RuntimeObject* L_5 = V_0;
		ObjectU5BU5D_t2843939325* L_6 = V_1;
		NullCheck((RuntimeObject*)L_5);
		InterfaceActionInvoker2< ObjectU5BU5D_t2843939325*, int32_t >::Invoke(5 /* System.Void System.Collections.Generic.ICollection`1<System.Object>::CopyTo(!0[],System.Int32) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_5, (ObjectU5BU5D_t2843939325*)L_6, (int32_t)0);
		ObjectU5BU5D_t2843939325* L_7 = V_1;
		return L_7;
	}

IL_0029:
	{
		RuntimeObject* L_8 = ___source0;
		List_1_t257213610 * L_9 = (List_1_t257213610 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 2));
		((  void (*) (List_1_t257213610 *, RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3)->methodPointer)(L_9, (RuntimeObject*)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3));
		NullCheck((List_1_t257213610 *)L_9);
		ObjectU5BU5D_t2843939325* L_10 = ((  ObjectU5BU5D_t2843939325* (*) (List_1_t257213610 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4)->methodPointer)((List_1_t257213610 *)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4));
		return L_10;
	}
}
// U System.Linq.Enumerable::Iterate<System.Decimal,System.Decimal>(System.Collections.Generic.IEnumerable`1<T>,U,System.Func`3<T,U,U>)
extern "C" IL2CPP_METHOD_ATTR Decimal_t2948259380  Enumerable_Iterate_TisDecimal_t2948259380_TisDecimal_t2948259380_m1713962709_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* ___source0, Decimal_t2948259380  ___initValue1, Func_3_t3801552229 * ___selector2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Enumerable_Iterate_TisDecimal_t2948259380_TisDecimal_t2948259380_m1713962709_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Decimal_t2948259380  V_1;
	memset(&V_1, 0, sizeof(V_1));
	RuntimeObject* V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = (bool)1;
		RuntimeObject* L_0 = ___source0;
		NullCheck((RuntimeObject*)L_0);
		RuntimeObject* L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Decimal>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_0);
		V_2 = (RuntimeObject*)L_1;
	}

IL_0009:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0021;
		}

IL_000e:
		{
			RuntimeObject* L_2 = V_2;
			NullCheck((RuntimeObject*)L_2);
			Decimal_t2948259380  L_3 = InterfaceFuncInvoker0< Decimal_t2948259380  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Decimal>::get_Current() */, IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (RuntimeObject*)L_2);
			V_1 = (Decimal_t2948259380 )L_3;
			Func_3_t3801552229 * L_4 = ___selector2;
			Decimal_t2948259380  L_5 = V_1;
			Decimal_t2948259380  L_6 = ___initValue1;
			NullCheck((Func_3_t3801552229 *)L_4);
			Decimal_t2948259380  L_7 = ((  Decimal_t2948259380  (*) (Func_3_t3801552229 *, Decimal_t2948259380 , Decimal_t2948259380 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((Func_3_t3801552229 *)L_4, (Decimal_t2948259380 )L_5, (Decimal_t2948259380 )L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
			___initValue1 = (Decimal_t2948259380 )L_7;
			V_0 = (bool)0;
		}

IL_0021:
		{
			RuntimeObject* L_8 = V_2;
			NullCheck((RuntimeObject*)L_8);
			bool L_9 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, (RuntimeObject*)L_8);
			if (L_9)
			{
				goto IL_000e;
			}
		}

IL_002c:
		{
			IL2CPP_LEAVE(0x3C, FINALLY_0031);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0031;
	}

FINALLY_0031:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_10 = V_2;
			if (L_10)
			{
				goto IL_0035;
			}
		}

IL_0034:
		{
			IL2CPP_END_FINALLY(49)
		}

IL_0035:
		{
			RuntimeObject* L_11 = V_2;
			NullCheck((RuntimeObject*)L_11);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, (RuntimeObject*)L_11);
			IL2CPP_END_FINALLY(49)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(49)
	{
		IL2CPP_JUMP_TBL(0x3C, IL_003c)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_003c:
	{
		bool L_12 = V_0;
		if (!L_12)
		{
			goto IL_0048;
		}
	}
	{
		InvalidOperationException_t56020091 * L_13 = (InvalidOperationException_t56020091 *)il2cpp_codegen_object_new(InvalidOperationException_t56020091_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m2734335978(L_13, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13,Enumerable_Iterate_TisDecimal_t2948259380_TisDecimal_t2948259380_m1713962709_RuntimeMethod_var);
	}

IL_0048:
	{
		Decimal_t2948259380  L_14 = ___initValue1;
		return L_14;
	}
}
// U System.Linq.Enumerable::Iterate<System.Double,System.Double>(System.Collections.Generic.IEnumerable`1<T>,U,System.Func`3<T,U,U>)
extern "C" IL2CPP_METHOD_ATTR double Enumerable_Iterate_TisDouble_t594665363_TisDouble_t594665363_m766260074_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* ___source0, double ___initValue1, Func_3_t1810338832 * ___selector2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Enumerable_Iterate_TisDouble_t594665363_TisDouble_t594665363_m766260074_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	double V_1 = 0.0;
	RuntimeObject* V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = (bool)1;
		RuntimeObject* L_0 = ___source0;
		NullCheck((RuntimeObject*)L_0);
		RuntimeObject* L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Double>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_0);
		V_2 = (RuntimeObject*)L_1;
	}

IL_0009:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0021;
		}

IL_000e:
		{
			RuntimeObject* L_2 = V_2;
			NullCheck((RuntimeObject*)L_2);
			double L_3 = InterfaceFuncInvoker0< double >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Double>::get_Current() */, IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (RuntimeObject*)L_2);
			V_1 = (double)L_3;
			Func_3_t1810338832 * L_4 = ___selector2;
			double L_5 = V_1;
			double L_6 = ___initValue1;
			NullCheck((Func_3_t1810338832 *)L_4);
			double L_7 = ((  double (*) (Func_3_t1810338832 *, double, double, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((Func_3_t1810338832 *)L_4, (double)L_5, (double)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
			___initValue1 = (double)L_7;
			V_0 = (bool)0;
		}

IL_0021:
		{
			RuntimeObject* L_8 = V_2;
			NullCheck((RuntimeObject*)L_8);
			bool L_9 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, (RuntimeObject*)L_8);
			if (L_9)
			{
				goto IL_000e;
			}
		}

IL_002c:
		{
			IL2CPP_LEAVE(0x3C, FINALLY_0031);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0031;
	}

FINALLY_0031:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_10 = V_2;
			if (L_10)
			{
				goto IL_0035;
			}
		}

IL_0034:
		{
			IL2CPP_END_FINALLY(49)
		}

IL_0035:
		{
			RuntimeObject* L_11 = V_2;
			NullCheck((RuntimeObject*)L_11);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, (RuntimeObject*)L_11);
			IL2CPP_END_FINALLY(49)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(49)
	{
		IL2CPP_JUMP_TBL(0x3C, IL_003c)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_003c:
	{
		bool L_12 = V_0;
		if (!L_12)
		{
			goto IL_0048;
		}
	}
	{
		InvalidOperationException_t56020091 * L_13 = (InvalidOperationException_t56020091 *)il2cpp_codegen_object_new(InvalidOperationException_t56020091_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m2734335978(L_13, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13,Enumerable_Iterate_TisDouble_t594665363_TisDouble_t594665363_m766260074_RuntimeMethod_var);
	}

IL_0048:
	{
		double L_14 = ___initValue1;
		return L_14;
	}
}
// U System.Linq.Enumerable::Iterate<System.Int32,System.Int32>(System.Collections.Generic.IEnumerable`1<T>,U,System.Func`3<T,U,U>)
extern "C" IL2CPP_METHOD_ATTR int32_t Enumerable_Iterate_TisInt32_t2950945753_TisInt32_t2950945753_m127518401_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* ___source0, int32_t ___initValue1, Func_3_t3344861838 * ___selector2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Enumerable_Iterate_TisInt32_t2950945753_TisInt32_t2950945753_m127518401_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = (bool)1;
		RuntimeObject* L_0 = ___source0;
		NullCheck((RuntimeObject*)L_0);
		RuntimeObject* L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Int32>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_0);
		V_2 = (RuntimeObject*)L_1;
	}

IL_0009:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0021;
		}

IL_000e:
		{
			RuntimeObject* L_2 = V_2;
			NullCheck((RuntimeObject*)L_2);
			int32_t L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Int32>::get_Current() */, IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (RuntimeObject*)L_2);
			V_1 = (int32_t)L_3;
			Func_3_t3344861838 * L_4 = ___selector2;
			int32_t L_5 = V_1;
			int32_t L_6 = ___initValue1;
			NullCheck((Func_3_t3344861838 *)L_4);
			int32_t L_7 = ((  int32_t (*) (Func_3_t3344861838 *, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((Func_3_t3344861838 *)L_4, (int32_t)L_5, (int32_t)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
			___initValue1 = (int32_t)L_7;
			V_0 = (bool)0;
		}

IL_0021:
		{
			RuntimeObject* L_8 = V_2;
			NullCheck((RuntimeObject*)L_8);
			bool L_9 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, (RuntimeObject*)L_8);
			if (L_9)
			{
				goto IL_000e;
			}
		}

IL_002c:
		{
			IL2CPP_LEAVE(0x3C, FINALLY_0031);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0031;
	}

FINALLY_0031:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_10 = V_2;
			if (L_10)
			{
				goto IL_0035;
			}
		}

IL_0034:
		{
			IL2CPP_END_FINALLY(49)
		}

IL_0035:
		{
			RuntimeObject* L_11 = V_2;
			NullCheck((RuntimeObject*)L_11);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, (RuntimeObject*)L_11);
			IL2CPP_END_FINALLY(49)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(49)
	{
		IL2CPP_JUMP_TBL(0x3C, IL_003c)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_003c:
	{
		bool L_12 = V_0;
		if (!L_12)
		{
			goto IL_0048;
		}
	}
	{
		InvalidOperationException_t56020091 * L_13 = (InvalidOperationException_t56020091 *)il2cpp_codegen_object_new(InvalidOperationException_t56020091_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m2734335978(L_13, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13,Enumerable_Iterate_TisInt32_t2950945753_TisInt32_t2950945753_m127518401_RuntimeMethod_var);
	}

IL_0048:
	{
		int32_t L_14 = ___initValue1;
		return L_14;
	}
}
// U System.Linq.Enumerable::Iterate<System.Int64,System.Int64>(System.Collections.Generic.IEnumerable`1<T>,U,System.Func`3<T,U,U>)
extern "C" IL2CPP_METHOD_ATTR int64_t Enumerable_Iterate_TisInt64_t3736567304_TisInt64_t3736567304_m4193806083_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* ___source0, int64_t ___initValue1, Func_3_t3175904329 * ___selector2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Enumerable_Iterate_TisInt64_t3736567304_TisInt64_t3736567304_m4193806083_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int64_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = (bool)1;
		RuntimeObject* L_0 = ___source0;
		NullCheck((RuntimeObject*)L_0);
		RuntimeObject* L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Int64>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_0);
		V_2 = (RuntimeObject*)L_1;
	}

IL_0009:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0021;
		}

IL_000e:
		{
			RuntimeObject* L_2 = V_2;
			NullCheck((RuntimeObject*)L_2);
			int64_t L_3 = InterfaceFuncInvoker0< int64_t >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Int64>::get_Current() */, IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (RuntimeObject*)L_2);
			V_1 = (int64_t)L_3;
			Func_3_t3175904329 * L_4 = ___selector2;
			int64_t L_5 = V_1;
			int64_t L_6 = ___initValue1;
			NullCheck((Func_3_t3175904329 *)L_4);
			int64_t L_7 = ((  int64_t (*) (Func_3_t3175904329 *, int64_t, int64_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((Func_3_t3175904329 *)L_4, (int64_t)L_5, (int64_t)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
			___initValue1 = (int64_t)L_7;
			V_0 = (bool)0;
		}

IL_0021:
		{
			RuntimeObject* L_8 = V_2;
			NullCheck((RuntimeObject*)L_8);
			bool L_9 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, (RuntimeObject*)L_8);
			if (L_9)
			{
				goto IL_000e;
			}
		}

IL_002c:
		{
			IL2CPP_LEAVE(0x3C, FINALLY_0031);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0031;
	}

FINALLY_0031:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_10 = V_2;
			if (L_10)
			{
				goto IL_0035;
			}
		}

IL_0034:
		{
			IL2CPP_END_FINALLY(49)
		}

IL_0035:
		{
			RuntimeObject* L_11 = V_2;
			NullCheck((RuntimeObject*)L_11);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, (RuntimeObject*)L_11);
			IL2CPP_END_FINALLY(49)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(49)
	{
		IL2CPP_JUMP_TBL(0x3C, IL_003c)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_003c:
	{
		bool L_12 = V_0;
		if (!L_12)
		{
			goto IL_0048;
		}
	}
	{
		InvalidOperationException_t56020091 * L_13 = (InvalidOperationException_t56020091 *)il2cpp_codegen_object_new(InvalidOperationException_t56020091_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m2734335978(L_13, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13,Enumerable_Iterate_TisInt64_t3736567304_TisInt64_t3736567304_m4193806083_RuntimeMethod_var);
	}

IL_0048:
	{
		int64_t L_14 = ___initValue1;
		return L_14;
	}
}
// U System.Linq.Enumerable::Iterate<System.Object,System.Decimal>(System.Collections.Generic.IEnumerable`1<T>,U,System.Func`3<T,U,U>)
extern "C" IL2CPP_METHOD_ATTR Decimal_t2948259380  Enumerable_Iterate_TisRuntimeObject_TisDecimal_t2948259380_m3609497430_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* ___source0, Decimal_t2948259380  ___initValue1, Func_3_t1567933413 * ___selector2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Enumerable_Iterate_TisRuntimeObject_TisDecimal_t2948259380_m3609497430_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject * V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = (bool)1;
		RuntimeObject* L_0 = ___source0;
		NullCheck((RuntimeObject*)L_0);
		RuntimeObject* L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Object>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_0);
		V_2 = (RuntimeObject*)L_1;
	}

IL_0009:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0021;
		}

IL_000e:
		{
			RuntimeObject* L_2 = V_2;
			NullCheck((RuntimeObject*)L_2);
			RuntimeObject * L_3 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Object>::get_Current() */, IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (RuntimeObject*)L_2);
			V_1 = (RuntimeObject *)L_3;
			Func_3_t1567933413 * L_4 = ___selector2;
			RuntimeObject * L_5 = V_1;
			Decimal_t2948259380  L_6 = ___initValue1;
			NullCheck((Func_3_t1567933413 *)L_4);
			Decimal_t2948259380  L_7 = ((  Decimal_t2948259380  (*) (Func_3_t1567933413 *, RuntimeObject *, Decimal_t2948259380 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((Func_3_t1567933413 *)L_4, (RuntimeObject *)L_5, (Decimal_t2948259380 )L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
			___initValue1 = (Decimal_t2948259380 )L_7;
			V_0 = (bool)0;
		}

IL_0021:
		{
			RuntimeObject* L_8 = V_2;
			NullCheck((RuntimeObject*)L_8);
			bool L_9 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, (RuntimeObject*)L_8);
			if (L_9)
			{
				goto IL_000e;
			}
		}

IL_002c:
		{
			IL2CPP_LEAVE(0x3C, FINALLY_0031);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0031;
	}

FINALLY_0031:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_10 = V_2;
			if (L_10)
			{
				goto IL_0035;
			}
		}

IL_0034:
		{
			IL2CPP_END_FINALLY(49)
		}

IL_0035:
		{
			RuntimeObject* L_11 = V_2;
			NullCheck((RuntimeObject*)L_11);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, (RuntimeObject*)L_11);
			IL2CPP_END_FINALLY(49)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(49)
	{
		IL2CPP_JUMP_TBL(0x3C, IL_003c)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_003c:
	{
		bool L_12 = V_0;
		if (!L_12)
		{
			goto IL_0048;
		}
	}
	{
		InvalidOperationException_t56020091 * L_13 = (InvalidOperationException_t56020091 *)il2cpp_codegen_object_new(InvalidOperationException_t56020091_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m2734335978(L_13, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13,Enumerable_Iterate_TisRuntimeObject_TisDecimal_t2948259380_m3609497430_RuntimeMethod_var);
	}

IL_0048:
	{
		Decimal_t2948259380  L_14 = ___initValue1;
		return L_14;
	}
}
// U System.Linq.Enumerable::Iterate<System.Object,System.Double>(System.Collections.Generic.IEnumerable`1<T>,U,System.Func`3<T,U,U>)
extern "C" IL2CPP_METHOD_ATTR double Enumerable_Iterate_TisRuntimeObject_TisDouble_t594665363_m1462891860_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* ___source0, double ___initValue1, Func_3_t1482559369 * ___selector2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Enumerable_Iterate_TisRuntimeObject_TisDouble_t594665363_m1462891860_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject * V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = (bool)1;
		RuntimeObject* L_0 = ___source0;
		NullCheck((RuntimeObject*)L_0);
		RuntimeObject* L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Object>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_0);
		V_2 = (RuntimeObject*)L_1;
	}

IL_0009:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0021;
		}

IL_000e:
		{
			RuntimeObject* L_2 = V_2;
			NullCheck((RuntimeObject*)L_2);
			RuntimeObject * L_3 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Object>::get_Current() */, IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (RuntimeObject*)L_2);
			V_1 = (RuntimeObject *)L_3;
			Func_3_t1482559369 * L_4 = ___selector2;
			RuntimeObject * L_5 = V_1;
			double L_6 = ___initValue1;
			NullCheck((Func_3_t1482559369 *)L_4);
			double L_7 = ((  double (*) (Func_3_t1482559369 *, RuntimeObject *, double, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((Func_3_t1482559369 *)L_4, (RuntimeObject *)L_5, (double)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
			___initValue1 = (double)L_7;
			V_0 = (bool)0;
		}

IL_0021:
		{
			RuntimeObject* L_8 = V_2;
			NullCheck((RuntimeObject*)L_8);
			bool L_9 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, (RuntimeObject*)L_8);
			if (L_9)
			{
				goto IL_000e;
			}
		}

IL_002c:
		{
			IL2CPP_LEAVE(0x3C, FINALLY_0031);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0031;
	}

FINALLY_0031:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_10 = V_2;
			if (L_10)
			{
				goto IL_0035;
			}
		}

IL_0034:
		{
			IL2CPP_END_FINALLY(49)
		}

IL_0035:
		{
			RuntimeObject* L_11 = V_2;
			NullCheck((RuntimeObject*)L_11);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, (RuntimeObject*)L_11);
			IL2CPP_END_FINALLY(49)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(49)
	{
		IL2CPP_JUMP_TBL(0x3C, IL_003c)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_003c:
	{
		bool L_12 = V_0;
		if (!L_12)
		{
			goto IL_0048;
		}
	}
	{
		InvalidOperationException_t56020091 * L_13 = (InvalidOperationException_t56020091 *)il2cpp_codegen_object_new(InvalidOperationException_t56020091_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m2734335978(L_13, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13,Enumerable_Iterate_TisRuntimeObject_TisDouble_t594665363_m1462891860_RuntimeMethod_var);
	}

IL_0048:
	{
		double L_14 = ___initValue1;
		return L_14;
	}
}
// U System.Linq.Enumerable::Iterate<System.Object,System.Int32>(System.Collections.Generic.IEnumerable`1<T>,U,System.Func`3<T,U,U>)
extern "C" IL2CPP_METHOD_ATTR int32_t Enumerable_Iterate_TisRuntimeObject_TisInt32_t2950945753_m240499088_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* ___source0, int32_t ___initValue1, Func_3_t810756017 * ___selector2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Enumerable_Iterate_TisRuntimeObject_TisInt32_t2950945753_m240499088_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject * V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = (bool)1;
		RuntimeObject* L_0 = ___source0;
		NullCheck((RuntimeObject*)L_0);
		RuntimeObject* L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Object>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_0);
		V_2 = (RuntimeObject*)L_1;
	}

IL_0009:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0021;
		}

IL_000e:
		{
			RuntimeObject* L_2 = V_2;
			NullCheck((RuntimeObject*)L_2);
			RuntimeObject * L_3 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Object>::get_Current() */, IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (RuntimeObject*)L_2);
			V_1 = (RuntimeObject *)L_3;
			Func_3_t810756017 * L_4 = ___selector2;
			RuntimeObject * L_5 = V_1;
			int32_t L_6 = ___initValue1;
			NullCheck((Func_3_t810756017 *)L_4);
			int32_t L_7 = ((  int32_t (*) (Func_3_t810756017 *, RuntimeObject *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((Func_3_t810756017 *)L_4, (RuntimeObject *)L_5, (int32_t)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
			___initValue1 = (int32_t)L_7;
			V_0 = (bool)0;
		}

IL_0021:
		{
			RuntimeObject* L_8 = V_2;
			NullCheck((RuntimeObject*)L_8);
			bool L_9 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, (RuntimeObject*)L_8);
			if (L_9)
			{
				goto IL_000e;
			}
		}

IL_002c:
		{
			IL2CPP_LEAVE(0x3C, FINALLY_0031);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0031;
	}

FINALLY_0031:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_10 = V_2;
			if (L_10)
			{
				goto IL_0035;
			}
		}

IL_0034:
		{
			IL2CPP_END_FINALLY(49)
		}

IL_0035:
		{
			RuntimeObject* L_11 = V_2;
			NullCheck((RuntimeObject*)L_11);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, (RuntimeObject*)L_11);
			IL2CPP_END_FINALLY(49)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(49)
	{
		IL2CPP_JUMP_TBL(0x3C, IL_003c)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_003c:
	{
		bool L_12 = V_0;
		if (!L_12)
		{
			goto IL_0048;
		}
	}
	{
		InvalidOperationException_t56020091 * L_13 = (InvalidOperationException_t56020091 *)il2cpp_codegen_object_new(InvalidOperationException_t56020091_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m2734335978(L_13, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13,Enumerable_Iterate_TisRuntimeObject_TisInt32_t2950945753_m240499088_RuntimeMethod_var);
	}

IL_0048:
	{
		int32_t L_14 = ___initValue1;
		return L_14;
	}
}
// U System.Linq.Enumerable::Iterate<System.Object,System.Int64>(System.Collections.Generic.IEnumerable`1<T>,U,System.Func`3<T,U,U>)
extern "C" IL2CPP_METHOD_ATTR int64_t Enumerable_Iterate_TisRuntimeObject_TisInt64_t3736567304_m1052674644_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* ___source0, int64_t ___initValue1, Func_3_t3770304021 * ___selector2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Enumerable_Iterate_TisRuntimeObject_TisInt64_t3736567304_m1052674644_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject * V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = (bool)1;
		RuntimeObject* L_0 = ___source0;
		NullCheck((RuntimeObject*)L_0);
		RuntimeObject* L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Object>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_0);
		V_2 = (RuntimeObject*)L_1;
	}

IL_0009:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0021;
		}

IL_000e:
		{
			RuntimeObject* L_2 = V_2;
			NullCheck((RuntimeObject*)L_2);
			RuntimeObject * L_3 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Object>::get_Current() */, IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (RuntimeObject*)L_2);
			V_1 = (RuntimeObject *)L_3;
			Func_3_t3770304021 * L_4 = ___selector2;
			RuntimeObject * L_5 = V_1;
			int64_t L_6 = ___initValue1;
			NullCheck((Func_3_t3770304021 *)L_4);
			int64_t L_7 = ((  int64_t (*) (Func_3_t3770304021 *, RuntimeObject *, int64_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((Func_3_t3770304021 *)L_4, (RuntimeObject *)L_5, (int64_t)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
			___initValue1 = (int64_t)L_7;
			V_0 = (bool)0;
		}

IL_0021:
		{
			RuntimeObject* L_8 = V_2;
			NullCheck((RuntimeObject*)L_8);
			bool L_9 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, (RuntimeObject*)L_8);
			if (L_9)
			{
				goto IL_000e;
			}
		}

IL_002c:
		{
			IL2CPP_LEAVE(0x3C, FINALLY_0031);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0031;
	}

FINALLY_0031:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_10 = V_2;
			if (L_10)
			{
				goto IL_0035;
			}
		}

IL_0034:
		{
			IL2CPP_END_FINALLY(49)
		}

IL_0035:
		{
			RuntimeObject* L_11 = V_2;
			NullCheck((RuntimeObject*)L_11);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, (RuntimeObject*)L_11);
			IL2CPP_END_FINALLY(49)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(49)
	{
		IL2CPP_JUMP_TBL(0x3C, IL_003c)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_003c:
	{
		bool L_12 = V_0;
		if (!L_12)
		{
			goto IL_0048;
		}
	}
	{
		InvalidOperationException_t56020091 * L_13 = (InvalidOperationException_t56020091 *)il2cpp_codegen_object_new(InvalidOperationException_t56020091_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m2734335978(L_13, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13,Enumerable_Iterate_TisRuntimeObject_TisInt64_t3736567304_m1052674644_RuntimeMethod_var);
	}

IL_0048:
	{
		int64_t L_14 = ___initValue1;
		return L_14;
	}
}
// U System.Linq.Enumerable::Iterate<System.Object,System.Object>(System.Collections.Generic.IEnumerable`1<T>,U,System.Func`3<T,U,U>)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Enumerable_Iterate_TisRuntimeObject_TisRuntimeObject_m1507113580_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* ___source0, RuntimeObject * ___initValue1, Func_3_t3398609381 * ___selector2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Enumerable_Iterate_TisRuntimeObject_TisRuntimeObject_m1507113580_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject * V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = (bool)1;
		RuntimeObject* L_0 = ___source0;
		NullCheck((RuntimeObject*)L_0);
		RuntimeObject* L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Object>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_0);
		V_2 = (RuntimeObject*)L_1;
	}

IL_0009:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0021;
		}

IL_000e:
		{
			RuntimeObject* L_2 = V_2;
			NullCheck((RuntimeObject*)L_2);
			RuntimeObject * L_3 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Object>::get_Current() */, IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (RuntimeObject*)L_2);
			V_1 = (RuntimeObject *)L_3;
			Func_3_t3398609381 * L_4 = ___selector2;
			RuntimeObject * L_5 = V_1;
			RuntimeObject * L_6 = ___initValue1;
			NullCheck((Func_3_t3398609381 *)L_4);
			RuntimeObject * L_7 = ((  RuntimeObject * (*) (Func_3_t3398609381 *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((Func_3_t3398609381 *)L_4, (RuntimeObject *)L_5, (RuntimeObject *)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
			___initValue1 = (RuntimeObject *)L_7;
			V_0 = (bool)0;
		}

IL_0021:
		{
			RuntimeObject* L_8 = V_2;
			NullCheck((RuntimeObject*)L_8);
			bool L_9 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, (RuntimeObject*)L_8);
			if (L_9)
			{
				goto IL_000e;
			}
		}

IL_002c:
		{
			IL2CPP_LEAVE(0x3C, FINALLY_0031);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0031;
	}

FINALLY_0031:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_10 = V_2;
			if (L_10)
			{
				goto IL_0035;
			}
		}

IL_0034:
		{
			IL2CPP_END_FINALLY(49)
		}

IL_0035:
		{
			RuntimeObject* L_11 = V_2;
			NullCheck((RuntimeObject*)L_11);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, (RuntimeObject*)L_11);
			IL2CPP_END_FINALLY(49)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(49)
	{
		IL2CPP_JUMP_TBL(0x3C, IL_003c)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_003c:
	{
		bool L_12 = V_0;
		if (!L_12)
		{
			goto IL_0048;
		}
	}
	{
		InvalidOperationException_t56020091 * L_13 = (InvalidOperationException_t56020091 *)il2cpp_codegen_object_new(InvalidOperationException_t56020091_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m2734335978(L_13, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13,Enumerable_Iterate_TisRuntimeObject_TisRuntimeObject_m1507113580_RuntimeMethod_var);
	}

IL_0048:
	{
		RuntimeObject * L_14 = ___initValue1;
		return L_14;
	}
}
// U System.Linq.Enumerable::Iterate<System.Object,System.Single>(System.Collections.Generic.IEnumerable`1<T>,U,System.Func`3<T,U,U>)
extern "C" IL2CPP_METHOD_ATTR float Enumerable_Iterate_TisRuntimeObject_TisSingle_t1397266774_m1074757268_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* ___source0, float ___initValue1, Func_3_t316741917 * ___selector2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Enumerable_Iterate_TisRuntimeObject_TisSingle_t1397266774_m1074757268_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject * V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = (bool)1;
		RuntimeObject* L_0 = ___source0;
		NullCheck((RuntimeObject*)L_0);
		RuntimeObject* L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Object>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_0);
		V_2 = (RuntimeObject*)L_1;
	}

IL_0009:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0021;
		}

IL_000e:
		{
			RuntimeObject* L_2 = V_2;
			NullCheck((RuntimeObject*)L_2);
			RuntimeObject * L_3 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Object>::get_Current() */, IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (RuntimeObject*)L_2);
			V_1 = (RuntimeObject *)L_3;
			Func_3_t316741917 * L_4 = ___selector2;
			RuntimeObject * L_5 = V_1;
			float L_6 = ___initValue1;
			NullCheck((Func_3_t316741917 *)L_4);
			float L_7 = ((  float (*) (Func_3_t316741917 *, RuntimeObject *, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((Func_3_t316741917 *)L_4, (RuntimeObject *)L_5, (float)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
			___initValue1 = (float)L_7;
			V_0 = (bool)0;
		}

IL_0021:
		{
			RuntimeObject* L_8 = V_2;
			NullCheck((RuntimeObject*)L_8);
			bool L_9 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, (RuntimeObject*)L_8);
			if (L_9)
			{
				goto IL_000e;
			}
		}

IL_002c:
		{
			IL2CPP_LEAVE(0x3C, FINALLY_0031);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0031;
	}

FINALLY_0031:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_10 = V_2;
			if (L_10)
			{
				goto IL_0035;
			}
		}

IL_0034:
		{
			IL2CPP_END_FINALLY(49)
		}

IL_0035:
		{
			RuntimeObject* L_11 = V_2;
			NullCheck((RuntimeObject*)L_11);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, (RuntimeObject*)L_11);
			IL2CPP_END_FINALLY(49)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(49)
	{
		IL2CPP_JUMP_TBL(0x3C, IL_003c)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_003c:
	{
		bool L_12 = V_0;
		if (!L_12)
		{
			goto IL_0048;
		}
	}
	{
		InvalidOperationException_t56020091 * L_13 = (InvalidOperationException_t56020091 *)il2cpp_codegen_object_new(InvalidOperationException_t56020091_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m2734335978(L_13, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13,Enumerable_Iterate_TisRuntimeObject_TisSingle_t1397266774_m1074757268_RuntimeMethod_var);
	}

IL_0048:
	{
		float L_14 = ___initValue1;
		return L_14;
	}
}
// U System.Linq.Enumerable::Iterate<System.Single,System.Single>(System.Collections.Generic.IEnumerable`1<T>,U,System.Func`3<T,U,U>)
extern "C" IL2CPP_METHOD_ATTR float Enumerable_Iterate_TisSingle_t1397266774_TisSingle_t1397266774_m1827094913_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* ___source0, float ___initValue1, Func_3_t2691639151 * ___selector2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Enumerable_Iterate_TisSingle_t1397266774_TisSingle_t1397266774_m1827094913_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	float V_1 = 0.0f;
	RuntimeObject* V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = (bool)1;
		RuntimeObject* L_0 = ___source0;
		NullCheck((RuntimeObject*)L_0);
		RuntimeObject* L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Single>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_0);
		V_2 = (RuntimeObject*)L_1;
	}

IL_0009:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0021;
		}

IL_000e:
		{
			RuntimeObject* L_2 = V_2;
			NullCheck((RuntimeObject*)L_2);
			float L_3 = InterfaceFuncInvoker0< float >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Single>::get_Current() */, IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (RuntimeObject*)L_2);
			V_1 = (float)L_3;
			Func_3_t2691639151 * L_4 = ___selector2;
			float L_5 = V_1;
			float L_6 = ___initValue1;
			NullCheck((Func_3_t2691639151 *)L_4);
			float L_7 = ((  float (*) (Func_3_t2691639151 *, float, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((Func_3_t2691639151 *)L_4, (float)L_5, (float)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
			___initValue1 = (float)L_7;
			V_0 = (bool)0;
		}

IL_0021:
		{
			RuntimeObject* L_8 = V_2;
			NullCheck((RuntimeObject*)L_8);
			bool L_9 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, (RuntimeObject*)L_8);
			if (L_9)
			{
				goto IL_000e;
			}
		}

IL_002c:
		{
			IL2CPP_LEAVE(0x3C, FINALLY_0031);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0031;
	}

FINALLY_0031:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_10 = V_2;
			if (L_10)
			{
				goto IL_0035;
			}
		}

IL_0034:
		{
			IL2CPP_END_FINALLY(49)
		}

IL_0035:
		{
			RuntimeObject* L_11 = V_2;
			NullCheck((RuntimeObject*)L_11);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, (RuntimeObject*)L_11);
			IL2CPP_END_FINALLY(49)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(49)
	{
		IL2CPP_JUMP_TBL(0x3C, IL_003c)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_003c:
	{
		bool L_12 = V_0;
		if (!L_12)
		{
			goto IL_0048;
		}
	}
	{
		InvalidOperationException_t56020091 * L_13 = (InvalidOperationException_t56020091 *)il2cpp_codegen_object_new(InvalidOperationException_t56020091_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m2734335978(L_13, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13,Enumerable_Iterate_TisSingle_t1397266774_TisSingle_t1397266774_m1827094913_RuntimeMethod_var);
	}

IL_0048:
	{
		float L_14 = ___initValue1;
		return L_14;
	}
}
// UnityEngine.GameObject UnityEngine.EventSystems.ExecuteEvents::ExecuteHierarchy<System.Object>(UnityEngine.GameObject,UnityEngine.EventSystems.BaseEventData,UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<T>)
extern "C" IL2CPP_METHOD_ATTR GameObject_t1113636619 * ExecuteEvents_ExecuteHierarchy_TisRuntimeObject_m3266560969_gshared (RuntimeObject * __this /* static, unused */, GameObject_t1113636619 * ___root0, BaseEventData_t3903027533 * ___eventData1, EventFunction_1_t1764640198 * ___callbackFunction2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExecuteEvents_ExecuteHierarchy_TisRuntimeObject_m3266560969_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Transform_t3600365921 * V_1 = NULL;
	GameObject_t1113636619 * V_2 = NULL;
	{
		GameObject_t1113636619 * L_0 = ___root0;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_t3484638744_il2cpp_TypeInfo_var);
		List_1_t777473367 * L_1 = ((ExecuteEvents_t3484638744_StaticFields*)il2cpp_codegen_static_fields_for(ExecuteEvents_t3484638744_il2cpp_TypeInfo_var))->get_s_InternalTransformList_18();
		ExecuteEvents_GetEventChain_m2404658789(NULL /*static, unused*/, (GameObject_t1113636619 *)L_0, (RuntimeObject*)L_1, /*hidden argument*/NULL);
		V_0 = (int32_t)0;
		goto IL_0043;
	}

IL_0013:
	{
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_t3484638744_il2cpp_TypeInfo_var);
		List_1_t777473367 * L_2 = ((ExecuteEvents_t3484638744_StaticFields*)il2cpp_codegen_static_fields_for(ExecuteEvents_t3484638744_il2cpp_TypeInfo_var))->get_s_InternalTransformList_18();
		int32_t L_3 = V_0;
		NullCheck((List_1_t777473367 *)L_2);
		Transform_t3600365921 * L_4 = List_1_get_Item_m3022113929((List_1_t777473367 *)L_2, (int32_t)L_3, /*hidden argument*/List_1_get_Item_m3022113929_RuntimeMethod_var);
		V_1 = (Transform_t3600365921 *)L_4;
		Transform_t3600365921 * L_5 = V_1;
		NullCheck((Component_t1923634451 *)L_5);
		GameObject_t1113636619 * L_6 = Component_get_gameObject_m442555142((Component_t1923634451 *)L_5, /*hidden argument*/NULL);
		BaseEventData_t3903027533 * L_7 = ___eventData1;
		EventFunction_1_t1764640198 * L_8 = ___callbackFunction2;
		bool L_9 = ((  bool (*) (RuntimeObject * /* static, unused */, GameObject_t1113636619 *, BaseEventData_t3903027533 *, EventFunction_1_t1764640198 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(NULL /*static, unused*/, (GameObject_t1113636619 *)L_6, (BaseEventData_t3903027533 *)L_7, (EventFunction_1_t1764640198 *)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		if (!L_9)
		{
			goto IL_003e;
		}
	}
	{
		Transform_t3600365921 * L_10 = V_1;
		NullCheck((Component_t1923634451 *)L_10);
		GameObject_t1113636619 * L_11 = Component_get_gameObject_m442555142((Component_t1923634451 *)L_10, /*hidden argument*/NULL);
		V_2 = (GameObject_t1113636619 *)L_11;
		goto IL_005a;
	}

IL_003e:
	{
		int32_t L_12 = V_0;
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_0043:
	{
		int32_t L_13 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_t3484638744_il2cpp_TypeInfo_var);
		List_1_t777473367 * L_14 = ((ExecuteEvents_t3484638744_StaticFields*)il2cpp_codegen_static_fields_for(ExecuteEvents_t3484638744_il2cpp_TypeInfo_var))->get_s_InternalTransformList_18();
		NullCheck((List_1_t777473367 *)L_14);
		int32_t L_15 = List_1_get_Count_m3787308655((List_1_t777473367 *)L_14, /*hidden argument*/List_1_get_Count_m3787308655_RuntimeMethod_var);
		if ((((int32_t)L_13) < ((int32_t)L_15)))
		{
			goto IL_0013;
		}
	}
	{
		V_2 = (GameObject_t1113636619 *)NULL;
		goto IL_005a;
	}

IL_005a:
	{
		GameObject_t1113636619 * L_16 = V_2;
		return L_16;
	}
}
// UnityEngine.GameObject UnityEngine.EventSystems.ExecuteEvents::GetEventHandler<System.Object>(UnityEngine.GameObject)
extern "C" IL2CPP_METHOD_ATTR GameObject_t1113636619 * ExecuteEvents_GetEventHandler_TisRuntimeObject_m3687647312_gshared (RuntimeObject * __this /* static, unused */, GameObject_t1113636619 * ___root0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExecuteEvents_GetEventHandler_TisRuntimeObject_m3687647312_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t1113636619 * V_0 = NULL;
	Transform_t3600365921 * V_1 = NULL;
	{
		GameObject_t1113636619 * L_0 = ___root0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_m1810815630(NULL /*static, unused*/, (Object_t631007953 *)L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		V_0 = (GameObject_t1113636619 *)NULL;
		goto IL_0058;
	}

IL_0014:
	{
		GameObject_t1113636619 * L_2 = ___root0;
		NullCheck((GameObject_t1113636619 *)L_2);
		Transform_t3600365921 * L_3 = GameObject_get_transform_m1369836730((GameObject_t1113636619 *)L_2, /*hidden argument*/NULL);
		V_1 = (Transform_t3600365921 *)L_3;
		goto IL_0045;
	}

IL_0020:
	{
		Transform_t3600365921 * L_4 = V_1;
		NullCheck((Component_t1923634451 *)L_4);
		GameObject_t1113636619 * L_5 = Component_get_gameObject_m442555142((Component_t1923634451 *)L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_t3484638744_il2cpp_TypeInfo_var);
		bool L_6 = ((  bool (*) (RuntimeObject * /* static, unused */, GameObject_t1113636619 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(NULL /*static, unused*/, (GameObject_t1113636619 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		if (!L_6)
		{
			goto IL_003d;
		}
	}
	{
		Transform_t3600365921 * L_7 = V_1;
		NullCheck((Component_t1923634451 *)L_7);
		GameObject_t1113636619 * L_8 = Component_get_gameObject_m442555142((Component_t1923634451 *)L_7, /*hidden argument*/NULL);
		V_0 = (GameObject_t1113636619 *)L_8;
		goto IL_0058;
	}

IL_003d:
	{
		Transform_t3600365921 * L_9 = V_1;
		NullCheck((Transform_t3600365921 *)L_9);
		Transform_t3600365921 * L_10 = Transform_get_parent_m835071599((Transform_t3600365921 *)L_9, /*hidden argument*/NULL);
		V_1 = (Transform_t3600365921 *)L_10;
	}

IL_0045:
	{
		Transform_t3600365921 * L_11 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_12 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, (Object_t631007953 *)L_11, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (L_12)
		{
			goto IL_0020;
		}
	}
	{
		V_0 = (GameObject_t1113636619 *)NULL;
		goto IL_0058;
	}

IL_0058:
	{
		GameObject_t1113636619 * L_13 = V_0;
		return L_13;
	}
}
