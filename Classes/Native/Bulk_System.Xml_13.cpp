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
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
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
template <typename R, typename T1, typename T2>
struct VirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct VirtFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericVirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
struct GenericInterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Xml.XPath.XPathNavigator/<EnumerateChildren>c__Iterator1
struct U3CEnumerateChildrenU3Ec__Iterator1_t1970726095;
// System.Collections.IEnumerator
struct IEnumerator_t1853284238;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t3512676632;
// System.String
struct String_t;
// System.NotSupportedException
struct NotSupportedException_t1314879016;
// System.Xml.XPath.XPathNavigator/EnumerableIterator
struct EnumerableIterator_t1590428576;
// System.Collections.IEnumerable
struct IEnumerable_t1941168011;
// System.Xml.XPath.XPathNodeIterator
struct XPathNodeIterator_t3667290188;
// System.Xml.XPath.XPathNavigator
struct XPathNavigator_t787956054;
// System.Xml.XPath.XPathNavigatorComparer
struct XPathNavigatorComparer_t2421573191;
// System.Xml.XPath.XPathNodeIterator/<GetEnumerator>c__Iterator2
struct U3CGetEnumeratorU3Ec__Iterator2_t90454087;
// System.Xml.XPath.XPathNumericFunction
struct XPathNumericFunction_t307051317;
// System.Xml.XPath.FunctionArguments
struct FunctionArguments_t3573450773;
// System.Xml.XPath.XPathFunction
struct XPathFunction_t857746608;
// System.Xml.XPath.XPathSortElement
struct XPathSortElement_t4237073177;
// System.Xml.XPath.XPathSorter
struct XPathSorter_t36376808;
// System.Collections.IComparer
struct IComparer_t1540313114;
// System.Xml.XPath.Expression
struct Expression_t1452783009;
// System.Xml.XPath.XPathSorter/XPathNumberComparer
struct XPathNumberComparer_t6863540;
// System.Xml.XPath.XPathSorter/XPathTextComparer
struct XPathTextComparer_t2075334572;
// System.Xml.XPath.CompiledExpression
struct CompiledExpression_t4018285681;
// Mono.Xml.XPath.XPathParser
struct XPathParser_t4136515887;
// System.Xml.XPath.XPathException
struct XPathException_t2107611652;
// System.Xml.XPath.BaseIterator
struct BaseIterator_t4168896842;
// System.Globalization.CultureInfo
struct CultureInfo_t4157843068;
// System.Xml.XPath.XPathSorters
struct XPathSorters_t698127628;
// System.Collections.ArrayList
struct ArrayList_t2718874744;
// System.Xml.XPath.XPathSorter[]
struct XPathSorterU5BU5D_t4263134841;
// System.Xml.IXmlNamespaceResolver
struct IXmlNamespaceResolver_t535375154;
// System.Xml.XPath.ListIterator
struct ListIterator_t3066609410;
// System.Collections.IList
struct IList_t2094931216;
// System.Xml.XQueryConvert
struct XQueryConvert_t2841811029;
// System.Byte[]
struct ByteU5BU5D_t4116647657;
// System.Xml.Xsl.NoOperationDebugger
struct NoOperationDebugger_t2873281971;
// System.Xml.Xsl.XsltContext
struct XsltContext_t2039362735;
// System.Xml.Xsl.SimpleXsltDebugger
struct SimpleXsltDebugger_t937136423;
// System.Type
struct Type_t;
// System.Xml.Xsl.XslCompiledTransform
struct XslCompiledTransform_t1831779368;
// System.Xml.XmlWriterSettings
struct XmlWriterSettings_t3314986516;
// System.IO.FileStream
struct FileStream_t4292183065;
// System.Xml.XPath.XPathDocument
struct XPathDocument_t1673143697;
// System.Xml.XPath.IXPathNavigable
struct IXPathNavigable_t2716156786;
// System.Xml.Xsl.XsltArgumentList
struct XsltArgumentList_t741251601;
// System.IO.Stream
struct Stream_t1273022909;
// System.Xml.XmlWriter
struct XmlWriter_t127905479;
// System.IO.TextWriter
struct TextWriter_t3478189236;
// System.Xml.XmlReader
struct XmlReader_t3121518892;
// System.Xml.XmlResolver
struct XmlResolver_t626023767;
// System.Xml.Xsl.XsltException
struct XsltException_t1876063340;
// System.Exception
struct Exception_t;
// Mono.Xml.Xsl.CompiledStylesheet
struct CompiledStylesheet_t759457236;
// System.Collections.Hashtable
struct Hashtable_t1853889766;
// Mono.Xml.Xsl.GenericOutputter
struct GenericOutputter_t1694878872;
// System.Text.Encoding
struct Encoding_t1523322056;
// Mono.Xml.Xsl.XslTransformProcessor
struct XslTransformProcessor_t3405861191;
// Mono.Xml.Xsl.Outputter
struct Outputter_t889105973;
// Mono.Xml.Xsl.XslOutput
struct XslOutput_t472631936;
// System.IO.StreamWriter
struct StreamWriter_t1266378904;
// System.Xml.XmlUrlResolver
struct XmlUrlResolver_t817895037;
// System.Xml.XmlTextReader
struct XmlTextReader_t4233384356;
// System.Xml.XmlValidatingReader
struct XmlValidatingReader_t1719295192;
// System.Xml.Xsl.XsltSettings
struct XsltSettings_t3615464394;
// Mono.Xml.Xsl.Compiler
struct Compiler_t485846590;
// System.Security.Policy.Evidence
struct Evidence_t2008144148;
// System.Xml.Xsl.XsltMessageEncounteredEventHandler
struct XsltMessageEncounteredEventHandler_t414593873;
// System.Delegate
struct Delegate_t1188392813;
// System.ArgumentException
struct ArgumentException_t132251570;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t2760654312;
// System.Xml.Xsl.XsltCompileException
struct XsltCompileException_t1322447047;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t950877179;
// System.Xml.NameTable
struct NameTable_t3178203267;
// System.Xml.XmlNamespaceManager
struct XmlNamespaceManager_t418790500;
// System.Xml.XmlNameTable
struct XmlNameTable_t71772148;
// System.Xml.Xsl.IXsltContextVariable
struct IXsltContextVariable_t1240308286;
// System.Xml.Xsl.IXsltContextFunction
struct IXsltContextFunction_t969044578;
// System.Xml.XPath.XPathResultType[]
struct XPathResultTypeU5BU5D_t1515527577;
// System.SystemException
struct SystemException_t176217640;
// System.IFormatProvider
struct IFormatProvider_t2518567562;
// System.Object[]
struct ObjectU5BU5D_t2843939325;
// System.Xml.Xsl.XsltMessageEncounteredEventArgs
struct XsltMessageEncounteredEventArgs_t1348681757;
// System.EventArgs
struct EventArgs_t3591816995;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.AsyncCallback
struct AsyncCallback_t3962456242;
// System.Xml.Xsl.XslTransform
struct XslTransform_t2320758400;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t2736202052;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t3384741;
// System.IO.MemoryStream
struct MemoryStream_t94973147;
// System.Xml.XmlTextWriter
struct XmlTextWriter_t2114213153;
// System.Xml.XmlParserContext
struct XmlParserContext_t2544895291;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Xml.XmlReaderBinarySupport
struct XmlReaderBinarySupport_t1809665003;
// System.Xml.XmlReaderSettings
struct XmlReaderSettings_t2186285234;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Text.DecoderFallback
struct DecoderFallback_t3123823036;
// System.Text.EncoderFallback
struct EncoderFallback_t1188251036;
// System.Reflection.Assembly
struct Assembly_t;
// Mono.Xml.Xsl.XslStylesheet
struct XslStylesheet_t113441946;
// Mono.Xml.Xsl.MSXslScriptManager
struct MSXslScriptManager_t4018040365;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// System.Collections.Hashtable/Slot[]
struct SlotU5BU5D_t2994659099;
// System.Int32[]
struct Int32U5BU5D_t385246372;
// System.Collections.Hashtable/HashKeys
struct HashKeys_t1568156503;
// System.Collections.Hashtable/HashValues
struct HashValues_t618387445;
// System.Collections.IHashCodeProvider
struct IHashCodeProvider_t267601189;
// System.Collections.IEqualityComparer
struct IEqualityComparer_t1493878338;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t964245573;
// System.String[]
struct StringU5BU5D_t1281789340;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t3954782707;
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int32,System.Collections.DictionaryEntry>
struct Transform_1_t3530625384;
// System.Xml.XmlNamespaceManager/NsDecl[]
struct NsDeclU5BU5D_t2116608150;
// System.Xml.XmlNamespaceManager/NsScope[]
struct NsScopeU5BU5D_t382374428;
// Mono.Xml.Xsl.XsltDebuggerWrapper
struct XsltDebuggerWrapper_t4148725768;
// System.Collections.Stack
struct Stack_t2329662280;
// Mono.Xml.Xsl.XsltCompiledContext
struct XsltCompiledContext_t2295645487;
// System.Uri/UriScheme[]
struct UriSchemeU5BU5D_t2082808316;
// System.UriParser
struct UriParser_t3890150400;
// System.Runtime.Serialization.IFormatterConverter
struct IFormatterConverter_t2171992254;
// Mono.Xml.Xsl.XsltPatternParser
struct XsltPatternParser_t433897766;
// Mono.Xml.Xsl.VariableScope
struct VariableScope_t3522028429;
// System.Xml.Xsl.IStaticXsltContext
struct IStaticXsltContext_t1496336571;
// Mono.Xml.XPath.yydebug.yyDebug
struct yyDebug_t2316493473;
// System.Int16[]
struct Int16U5BU5D_t3686840178;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t435877138;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t2405853701;
// System.Globalization.TextInfo
struct TextInfo_t3810425522;
// System.Globalization.CompareInfo
struct CompareInfo_t1092934962;
// System.Globalization.Calendar[]
struct CalendarU5BU5D_t3985046076;
// System.Globalization.Calendar
struct Calendar_t1661121569;
// System.Int32
struct Int32_t2950945753;
// System.Void
struct Void_t1185182177;
// System.Net.ICredentials
struct ICredentials_t725721261;
// Mono.Xml2.XmlTextReader
struct XmlTextReader_t3455035481;
// System.Collections.Generic.Stack`1<System.String>
struct Stack_1_t2690840144;
// System.Xml.NameTable/Entry[]
struct EntryU5BU5D_t491982174;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t1677132599;
// Mono.Xml.Xsl.Emitter
struct Emitter_t942443340;
// Mono.Xml.Xsl.Attribute[]
struct AttributeU5BU5D_t4194715064;
// System.Collections.Specialized.ListDictionary
struct ListDictionary_t1624492310;
// System.Type[]
struct TypeU5BU5D_t3940880105;
// System.Reflection.MemberFilter
struct MemberFilter_t426314064;
// System.Xml.XmlQualifiedName[]
struct XmlQualifiedNameU5BU5D_t1471530361;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t1729680289;
// System.Xml.Schema.XmlSchemaCollection
struct XmlSchemaCollection_t3610399789;
// Mono.Xml.DTDValidatingReader
struct DTDValidatingReader_t3946379043;
// Mono.Xml.IHasXmlSchemaInfo
struct IHasXmlSchemaInfo_t74872415;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t791314227;
// System.IO.StringWriter
struct StringWriter_t802263757;
// System.Xml.XmlTextWriter/XmlNodeInfo[]
struct XmlNodeInfoU5BU5D_t431163322;

extern RuntimeClass* U3CEnumerateChildrenU3Ec__Iterator1_t1970726095_il2cpp_TypeInfo_var;
extern const uint32_t U3CEnumerateChildrenU3Ec__Iterator1_System_Collections_Generic_IEnumerableU3CobjectU3E_GetEnumerator_m2784775865_MetadataUsageId;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern const uint32_t U3CEnumerateChildrenU3Ec__Iterator1_MoveNext_m2840526773_MetadataUsageId;
extern RuntimeClass* NotSupportedException_t1314879016_il2cpp_TypeInfo_var;
extern const RuntimeMethod* U3CEnumerateChildrenU3Ec__Iterator1_Reset_m3639600308_RuntimeMethod_var;
extern const uint32_t U3CEnumerateChildrenU3Ec__Iterator1_Reset_m3639600308_MetadataUsageId;
extern RuntimeClass* EnumerableIterator_t1590428576_il2cpp_TypeInfo_var;
extern const uint32_t EnumerableIterator_Clone_m1053335037_MetadataUsageId;
extern RuntimeClass* IEnumerable_t1941168011_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerator_t1853284238_il2cpp_TypeInfo_var;
extern const uint32_t EnumerableIterator_MoveNext_m1390725293_MetadataUsageId;
extern RuntimeClass* XPathNavigator_t787956054_il2cpp_TypeInfo_var;
extern const uint32_t EnumerableIterator_get_Current_m2416282970_MetadataUsageId;
extern RuntimeClass* XPathNavigatorComparer_t2421573191_il2cpp_TypeInfo_var;
extern const uint32_t XPathNavigatorComparer__cctor_m3115965016_MetadataUsageId;
extern const uint32_t XPathNavigatorComparer_System_Collections_IEqualityComparer_Equals_m4007475784_MetadataUsageId;
extern const uint32_t XPathNavigatorComparer_Compare_m812493843_MetadataUsageId;
extern RuntimeClass* U3CGetEnumeratorU3Ec__Iterator2_t90454087_il2cpp_TypeInfo_var;
extern const uint32_t XPathNodeIterator_GetEnumerator_m117094251_MetadataUsageId;
extern const RuntimeMethod* U3CGetEnumeratorU3Ec__Iterator2_Reset_m3606261836_RuntimeMethod_var;
extern const uint32_t U3CGetEnumeratorU3Ec__Iterator2_Reset_m3606261836_MetadataUsageId;
extern RuntimeClass* Double_t594665363_il2cpp_TypeInfo_var;
extern const uint32_t XPathNumericFunction_get_StaticValue_m673646255_MetadataUsageId;
extern RuntimeClass* XPathNumberComparer_t6863540_il2cpp_TypeInfo_var;
extern RuntimeClass* XPathTextComparer_t2075334572_il2cpp_TypeInfo_var;
extern const uint32_t XPathSorter__ctor_m1849939766_MetadataUsageId;
extern RuntimeClass* CompiledExpression_t4018285681_il2cpp_TypeInfo_var;
extern RuntimeClass* XPathParser_t4136515887_il2cpp_TypeInfo_var;
extern RuntimeClass* XPathException_t2107611652_il2cpp_TypeInfo_var;
extern const RuntimeMethod* XPathSorter_ExpressionFromObject_m606255708_RuntimeMethod_var;
extern String_t* _stringLiteral3252873007;
extern const uint32_t XPathSorter_ExpressionFromObject_m606255708_MetadataUsageId;
extern const uint32_t XPathSorter_Evaluate_m2305850354_MetadataUsageId;
extern RuntimeClass* IComparer_t1540313114_il2cpp_TypeInfo_var;
extern const uint32_t XPathSorter_Compare_m1410690161_MetadataUsageId;
extern const uint32_t XPathNumberComparer_System_Collections_IComparer_Compare_m3857931383_MetadataUsageId;
extern RuntimeClass* CultureInfo_t4157843068_il2cpp_TypeInfo_var;
extern const uint32_t XPathTextComparer__ctor_m1758171726_MetadataUsageId;
extern const uint32_t XPathTextComparer_System_Collections_IComparer_Compare_m2816827614_MetadataUsageId;
extern RuntimeClass* ArrayList_t2718874744_il2cpp_TypeInfo_var;
extern const uint32_t XPathSorters__ctor_m2528397853_MetadataUsageId;
extern RuntimeClass* XPathSortElement_t4237073177_il2cpp_TypeInfo_var;
extern RuntimeClass* XPathSorter_t36376808_il2cpp_TypeInfo_var;
extern const uint32_t XPathSorters_System_Collections_IComparer_Compare_m3602250543_MetadataUsageId;
extern const uint32_t XPathSorters_Add_m1233257773_MetadataUsageId;
extern const uint32_t XPathSorters_Add_m2795344906_MetadataUsageId;
extern RuntimeClass* ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var;
extern const uint32_t XPathSorters_ToSortElementList_m992101952_MetadataUsageId;
extern RuntimeClass* XPathNavigatorU5BU5D_t3671675027_il2cpp_TypeInfo_var;
extern RuntimeClass* ListIterator_t3066609410_il2cpp_TypeInfo_var;
extern const uint32_t XPathSorters_Sort_m148301611_MetadataUsageId;
extern RuntimeClass* Convert_t2465617642_il2cpp_TypeInfo_var;
extern RuntimeClass* XmlConvert_t1981561327_il2cpp_TypeInfo_var;
extern const uint32_t XQueryConvert_Base64BinaryToHexBinary_m1076450049_MetadataUsageId;
extern const uint32_t XQueryConvert_Base64BinaryToString_m1560532516_MetadataUsageId;
extern const uint32_t XQueryConvert_BooleanToDecimal_m3250283024_MetadataUsageId;
extern const uint32_t XQueryConvert_BooleanToDouble_m3264703653_MetadataUsageId;
extern const uint32_t XQueryConvert_BooleanToFloat_m1333230503_MetadataUsageId;
extern const uint32_t XQueryConvert_BooleanToInt_m923205647_MetadataUsageId;
extern const uint32_t XQueryConvert_BooleanToInteger_m1475222156_MetadataUsageId;
extern String_t* _stringLiteral4002445229;
extern String_t* _stringLiteral3875954633;
extern const uint32_t XQueryConvert_BooleanToString_m1246398600_MetadataUsageId;
extern const uint32_t XQueryConvert_DateToString_m1111763387_MetadataUsageId;
extern const uint32_t XQueryConvert_DateTimeToString_m3419669089_MetadataUsageId;
extern const uint32_t XQueryConvert_DayTimeDurationToDuration_m2511886778_MetadataUsageId;
extern RuntimeClass* Decimal_t2948259380_il2cpp_TypeInfo_var;
extern const uint32_t XQueryConvert_DecimalToBoolean_m1434077073_MetadataUsageId;
extern const uint32_t XQueryConvert_DecimalToDouble_m1986311801_MetadataUsageId;
extern const uint32_t XQueryConvert_DecimalToFloat_m3515441337_MetadataUsageId;
extern const uint32_t XQueryConvert_DecimalToInt_m850401348_MetadataUsageId;
extern const uint32_t XQueryConvert_DecimalToInteger_m433136421_MetadataUsageId;
extern const uint32_t XQueryConvert_DecimalToString_m603199621_MetadataUsageId;
extern const uint32_t XQueryConvert_DoubleToDecimal_m2263709119_MetadataUsageId;
extern const uint32_t XQueryConvert_DoubleToFloat_m3277774460_MetadataUsageId;
extern const uint32_t XQueryConvert_DoubleToInt_m1008191687_MetadataUsageId;
extern const uint32_t XQueryConvert_DoubleToInteger_m1961635078_MetadataUsageId;
extern const uint32_t XQueryConvert_DoubleToString_m3397435802_MetadataUsageId;
extern const uint32_t XQueryConvert_DurationToDayTimeDuration_m1262223862_MetadataUsageId;
extern const uint32_t XQueryConvert_DurationToString_m858995430_MetadataUsageId;
extern const uint32_t XQueryConvert_DurationToYearMonthDuration_m1289867814_MetadataUsageId;
extern const uint32_t XQueryConvert_FloatToDecimal_m2851574299_MetadataUsageId;
extern const uint32_t XQueryConvert_FloatToDouble_m1056356666_MetadataUsageId;
extern const uint32_t XQueryConvert_FloatToInt_m1276914392_MetadataUsageId;
extern const uint32_t XQueryConvert_FloatToInteger_m2026094839_MetadataUsageId;
extern const uint32_t XQueryConvert_FloatToString_m18943831_MetadataUsageId;
extern RuntimeClass* TimeSpan_t881159249_il2cpp_TypeInfo_var;
extern const uint32_t XQueryConvert_GDayToString_m3590589383_MetadataUsageId;
extern const uint32_t XQueryConvert_GMonthDayToString_m3341681722_MetadataUsageId;
extern const uint32_t XQueryConvert_GMonthToString_m96669560_MetadataUsageId;
extern const uint32_t XQueryConvert_GYearMonthToString_m2000814436_MetadataUsageId;
extern const uint32_t XQueryConvert_GYearToString_m737655434_MetadataUsageId;
extern const uint32_t XQueryConvert_HexBinaryToString_m3184488723_MetadataUsageId;
extern const uint32_t XQueryConvert_IntegerToDecimal_m145995142_MetadataUsageId;
extern const uint32_t XQueryConvert_IntegerToDouble_m3919208762_MetadataUsageId;
extern const uint32_t XQueryConvert_IntegerToFloat_m4060428780_MetadataUsageId;
extern const uint32_t XQueryConvert_IntegerToInt_m3303545509_MetadataUsageId;
extern const uint32_t XQueryConvert_IntegerToString_m438592566_MetadataUsageId;
extern const uint32_t XQueryConvert_IntToDecimal_m1441294476_MetadataUsageId;
extern const uint32_t XQueryConvert_IntToDouble_m328705259_MetadataUsageId;
extern const uint32_t XQueryConvert_IntToFloat_m1973973305_MetadataUsageId;
extern const uint32_t XQueryConvert_IntToString_m3128239816_MetadataUsageId;
extern const uint32_t XQueryConvert_NonNegativeIntegerToString_m3470626339_MetadataUsageId;
extern const uint32_t XQueryConvert_NonPositiveIntegerToString_m3142498018_MetadataUsageId;
extern String_t* _stringLiteral135540524;
extern const uint32_t XQueryConvert_TimeToString_m1625545776_MetadataUsageId;
extern const uint32_t XQueryConvert_YearMonthDurationToDuration_m1651035387_MetadataUsageId;
extern const uint32_t XQueryConvert_StringToBase64Binary_m3063741055_MetadataUsageId;
extern const uint32_t XQueryConvert_StringToBoolean_m1546556753_MetadataUsageId;
extern const uint32_t XQueryConvert_StringToDate_m2182784307_MetadataUsageId;
extern const uint32_t XQueryConvert_StringToDateTime_m2390548143_MetadataUsageId;
extern const uint32_t XQueryConvert_StringToDayTimeDuration_m1300131547_MetadataUsageId;
extern const uint32_t XQueryConvert_StringToDecimal_m4290158632_MetadataUsageId;
extern const uint32_t XQueryConvert_StringToDouble_m2283484990_MetadataUsageId;
extern const uint32_t XQueryConvert_StringToDuration_m2041646225_MetadataUsageId;
extern const uint32_t XQueryConvert_StringToFloat_m3895254224_MetadataUsageId;
extern const uint32_t XQueryConvert_StringToGDay_m3863825363_MetadataUsageId;
extern const uint32_t XQueryConvert_StringToGMonth_m2816959826_MetadataUsageId;
extern const uint32_t XQueryConvert_StringToGMonthDay_m2325808560_MetadataUsageId;
extern const uint32_t XQueryConvert_StringToGYear_m1734580589_MetadataUsageId;
extern const uint32_t XQueryConvert_StringToGYearMonth_m2272193914_MetadataUsageId;
extern const uint32_t XQueryConvert_StringToHexBinary_m2817305050_MetadataUsageId;
extern const uint32_t XQueryConvert_StringToInt_m1486500011_MetadataUsageId;
extern const uint32_t XQueryConvert_StringToInteger_m2833755124_MetadataUsageId;
extern const uint32_t XQueryConvert_StringToNonNegativeInteger_m1728677293_MetadataUsageId;
extern const uint32_t XQueryConvert_StringToNonPositiveInteger_m2043609473_MetadataUsageId;
extern const uint32_t XQueryConvert_StringToTime_m1148168159_MetadataUsageId;
extern const uint32_t XQueryConvert_StringToUnsignedInt_m2500577595_MetadataUsageId;
extern const uint32_t XQueryConvert_StringToUnsignedLong_m35177115_MetadataUsageId;
extern const uint32_t XQueryConvert_StringToUnsignedShort_m428057413_MetadataUsageId;
extern const uint32_t XQueryConvert_StringToYearMonthDuration_m1747272231_MetadataUsageId;
extern RuntimeClass* Console_t3208230065_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral2753931770;
extern const uint32_t SimpleXsltDebugger_OnCompile_m97699206_MetadataUsageId;
extern String_t* _stringLiteral434176978;
extern String_t* _stringLiteral985931992;
extern const uint32_t SimpleXsltDebugger_OnExecute_m1306735706_MetadataUsageId;
extern RuntimeClass* IXmlLineInfo_t2353988607_il2cpp_TypeInfo_var;
extern RuntimeClass* Int32_t2950945753_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral2594472939;
extern const uint32_t SimpleXsltDebugger_PrintXPathNavigator_m3059154787_MetadataUsageId;
extern RuntimeClass* XmlWriterSettings_t3314986516_il2cpp_TypeInfo_var;
extern RuntimeClass* NoOperationDebugger_t2873281971_il2cpp_TypeInfo_var;
extern const uint32_t XslCompiledTransform__ctor_m758478083_MetadataUsageId;
extern RuntimeClass* XPathDocument_t1673143697_il2cpp_TypeInfo_var;
extern RuntimeClass* IDisposable_t3640265483_il2cpp_TypeInfo_var;
extern const uint32_t XslCompiledTransform_Transform_m3681608_MetadataUsageId;
extern const uint32_t XslCompiledTransform_Transform_m1218573648_MetadataUsageId;
extern const uint32_t XslCompiledTransform_Transform_m281984698_MetadataUsageId;
extern const uint32_t XslCompiledTransform_Transform_m421172798_MetadataUsageId;
extern const uint32_t XslCompiledTransform_Transform_m1435012811_MetadataUsageId;
extern const uint32_t XslCompiledTransform_Transform_m745111606_MetadataUsageId;
extern RuntimeClass* IXPathNavigable_t2716156786_il2cpp_TypeInfo_var;
extern const uint32_t XslCompiledTransform_Transform_m4009940777_MetadataUsageId;
extern const uint32_t XslCompiledTransform_Transform_m393856666_MetadataUsageId;
extern const uint32_t XslCompiledTransform_Transform_m606404611_MetadataUsageId;
extern const uint32_t XslCompiledTransform_Transform_m2784886948_MetadataUsageId;
extern RuntimeClass* XsltException_t1876063340_il2cpp_TypeInfo_var;
extern RuntimeClass* GenericOutputter_t1694878872_il2cpp_TypeInfo_var;
extern RuntimeClass* XslTransformProcessor_t3405861191_il2cpp_TypeInfo_var;
extern const RuntimeMethod* XslCompiledTransform_Transform_m1013616809_RuntimeMethod_var;
extern String_t* _stringLiteral1764791452;
extern const uint32_t XslCompiledTransform_Transform_m1013616809_MetadataUsageId;
extern RuntimeClass* XslOutput_t472631936_il2cpp_TypeInfo_var;
extern RuntimeClass* StreamWriter_t1266378904_il2cpp_TypeInfo_var;
extern const uint32_t XslCompiledTransform_Transform_m4274984391_MetadataUsageId;
extern const RuntimeMethod* XslCompiledTransform_Transform_m3052639314_RuntimeMethod_var;
extern const uint32_t XslCompiledTransform_Transform_m3052639314_MetadataUsageId;
extern const RuntimeType* Stream_t1273022909_0_0_0_var;
extern RuntimeClass* XmlUrlResolver_t817895037_il2cpp_TypeInfo_var;
extern RuntimeClass* Type_t_il2cpp_TypeInfo_var;
extern RuntimeClass* Stream_t1273022909_il2cpp_TypeInfo_var;
extern RuntimeClass* XmlTextReader_t4233384356_il2cpp_TypeInfo_var;
extern RuntimeClass* XmlValidatingReader_t1719295192_il2cpp_TypeInfo_var;
extern const uint32_t XslCompiledTransform_GetXmlReader_m1245545288_MetadataUsageId;
extern const uint32_t XslCompiledTransform_Load_m3048941411_MetadataUsageId;
extern const uint32_t XslCompiledTransform_Load_m4286844072_MetadataUsageId;
extern const uint32_t XslCompiledTransform_Load_m1782824559_MetadataUsageId;
extern const uint32_t XslCompiledTransform_Load_m2431283482_MetadataUsageId;
extern const uint32_t XslCompiledTransform_Load_m2156443391_MetadataUsageId;
extern RuntimeClass* Compiler_t485846590_il2cpp_TypeInfo_var;
extern const uint32_t XslCompiledTransform_Load_m1324717055_MetadataUsageId;
extern RuntimeClass* Hashtable_t1853889766_il2cpp_TypeInfo_var;
extern const uint32_t XsltArgumentList__ctor_m612655310_MetadataUsageId;
extern RuntimeClass* XsltMessageEncounteredEventHandler_t414593873_il2cpp_TypeInfo_var;
extern const uint32_t XsltArgumentList_add_XsltMessageEncountered_m894901439_MetadataUsageId;
extern const uint32_t XsltArgumentList_remove_XsltMessageEncountered_m3261078315_MetadataUsageId;
extern RuntimeClass* ArgumentException_t132251570_il2cpp_TypeInfo_var;
extern const RuntimeMethod* XsltArgumentList_AddExtensionObject_m1235730489_RuntimeMethod_var;
extern String_t* _stringLiteral121233265;
extern String_t* _stringLiteral2111856551;
extern String_t* _stringLiteral2324369574;
extern String_t* _stringLiteral3150211581;
extern const uint32_t XsltArgumentList_AddExtensionObject_m1235730489_MetadataUsageId;
extern RuntimeClass* XmlQualifiedName_t2760654312_il2cpp_TypeInfo_var;
extern const RuntimeMethod* XsltArgumentList_AddParam_m2716690738_RuntimeMethod_var;
extern String_t* _stringLiteral2967628286;
extern String_t* _stringLiteral4077025863;
extern const uint32_t XsltArgumentList_AddParam_m2716690738_MetadataUsageId;
extern const RuntimeMethod* XsltArgumentList_GetParam_m3573250394_RuntimeMethod_var;
extern const uint32_t XsltArgumentList_GetParam_m3573250394_MetadataUsageId;
extern const uint32_t XsltArgumentList_RemoveParam_m3662225844_MetadataUsageId;
extern RuntimeClass* Boolean_t97287965_il2cpp_TypeInfo_var;
extern RuntimeClass* XPathNodeIterator_t3667290188_il2cpp_TypeInfo_var;
extern RuntimeClass* Int16_t2552820387_il2cpp_TypeInfo_var;
extern RuntimeClass* UInt16_t2177724958_il2cpp_TypeInfo_var;
extern RuntimeClass* Int64_t3736567304_il2cpp_TypeInfo_var;
extern RuntimeClass* UInt64_t4134040092_il2cpp_TypeInfo_var;
extern RuntimeClass* Single_t1397266774_il2cpp_TypeInfo_var;
extern const uint32_t XsltArgumentList_ValidateParam_m2717540126_MetadataUsageId;
extern String_t* _stringLiteral3279002317;
extern String_t* _stringLiteral3482964702;
extern String_t* _stringLiteral3195681598;
extern const uint32_t XsltCompileException__ctor_m3121015145_MetadataUsageId;
extern RuntimeClass* NameTable_t3178203267_il2cpp_TypeInfo_var;
extern const uint32_t XsltContext__ctor_m3056385392_MetadataUsageId;
extern const uint32_t XsltException__ctor_m1857825485_MetadataUsageId;
extern String_t* _stringLiteral628085470;
extern const uint32_t XsltException__ctor_m2928735883_MetadataUsageId;
extern String_t* _stringLiteral3165237107;
extern String_t* _stringLiteral2894530008;
extern String_t* _stringLiteral1785022704;
extern String_t* _stringLiteral2703330669;
extern const uint32_t XsltException__ctor_m4227114572_MetadataUsageId;
extern const uint32_t XsltException__ctor_m978028932_MetadataUsageId;
extern String_t* _stringLiteral3639890932;
extern const uint32_t XsltException_CreateMessage_m4042504401_MetadataUsageId;
extern const uint32_t XsltException_CreateMessage_m1566675326_MetadataUsageId;
extern const uint32_t XsltException_get_Message_m2060362262_MetadataUsageId;
extern const uint32_t XsltException_GetObjectData_m1382619486_MetadataUsageId;
extern const uint32_t XsltException_AddTemplateFrame_m3446307439_MetadataUsageId;
extern RuntimeClass* EventArgs_t3591816995_il2cpp_TypeInfo_var;
extern const uint32_t XsltMessageEncounteredEventArgs__ctor_m3523293355_MetadataUsageId;
extern RuntimeClass* XslTransform_t2320758400_il2cpp_TypeInfo_var;
extern const uint32_t XslTransform__ctor_m250494130_MetadataUsageId;
extern const uint32_t XslTransform__ctor_m1423564942_MetadataUsageId;
extern RuntimeClass* Dictionary_2_t2736202052_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Dictionary_2__ctor_m2392909825_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_Add_m282647386_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_TryGetValue_m1013208020_RuntimeMethod_var;
extern String_t* _stringLiteral1144791547;
extern String_t* _stringLiteral1965492014;
extern String_t* _stringLiteral818087719;
extern String_t* _stringLiteral95342995;
extern const uint32_t XslTransform__cctor_m1675380197_MetadataUsageId;
extern RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
extern RuntimeClass* SimpleXsltDebugger_t937136423_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral1822802014;
extern String_t* _stringLiteral754964184;
extern const uint32_t XslTransform_GetDefaultDebugger_m2336972937_MetadataUsageId;
extern const uint32_t XslTransform_Transform_m3696627812_MetadataUsageId;
extern const uint32_t XslTransform_Transform_m898090491_MetadataUsageId;
extern RuntimeClass* MemoryStream_t94973147_il2cpp_TypeInfo_var;
extern RuntimeClass* XmlTextWriter_t2114213153_il2cpp_TypeInfo_var;
extern const uint32_t XslTransform_Transform_m209782705_MetadataUsageId;
extern const uint32_t XslTransform_Transform_m4214542599_MetadataUsageId;
extern const uint32_t XslTransform_Transform_m2245597697_MetadataUsageId;
extern const uint32_t XslTransform_Transform_m3198606506_MetadataUsageId;
extern const uint32_t XslTransform_Transform_m2259576944_MetadataUsageId;
extern const uint32_t XslTransform_Transform_m1149417995_MetadataUsageId;
extern const uint32_t XslTransform_Transform_m1584402363_MetadataUsageId;
extern const RuntimeMethod* XslTransform_Transform_m3669272905_RuntimeMethod_var;
extern const uint32_t XslTransform_Transform_m3669272905_MetadataUsageId;
extern const uint32_t XslTransform_Transform_m471343747_MetadataUsageId;
extern const RuntimeMethod* XslTransform_Transform_m2990866288_RuntimeMethod_var;
extern const uint32_t XslTransform_Transform_m2990866288_MetadataUsageId;
extern RuntimeClass* FileStream_t4292183065_il2cpp_TypeInfo_var;
extern const uint32_t XslTransform_Transform_m1032190196_MetadataUsageId;
extern const uint32_t XslTransform_Load_m3882090966_MetadataUsageId;
extern const uint32_t XslTransform_Load_m1092902637_MetadataUsageId;
extern const uint32_t XslTransform_Load_m2876062051_MetadataUsageId;
extern const uint32_t XslTransform_Load_m3760997482_MetadataUsageId;
extern const uint32_t XslTransform_Load_m3491484097_MetadataUsageId;
extern const uint32_t XslTransform_Load_m2788296096_MetadataUsageId;
extern RuntimeClass* XsltSettings_t3615464394_il2cpp_TypeInfo_var;
extern const uint32_t XsltSettings__cctor_m1345135331_MetadataUsageId;
extern const uint32_t XsltSettings_get_Default_m220706120_MetadataUsageId;
extern const uint32_t XsltSettings_get_TrustedXslt_m1993617110_MetadataUsageId;

struct ObjectU5BU5D_t2843939325;
struct XPathSorterU5BU5D_t4263134841;
struct XPathNavigatorU5BU5D_t3671675027;
struct ByteU5BU5D_t4116647657;
struct XPathResultTypeU5BU5D_t1515527577;


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
#ifndef XMLRESOLVER_T626023767_H
#define XMLRESOLVER_T626023767_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlResolver
struct  XmlResolver_t626023767  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLRESOLVER_T626023767_H
#ifndef XMLREADER_T3121518892_H
#define XMLREADER_T3121518892_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlReader
struct  XmlReader_t3121518892  : public RuntimeObject
{
public:
	// System.Text.StringBuilder System.Xml.XmlReader::readStringBuffer
	StringBuilder_t * ___readStringBuffer_0;
	// System.Xml.XmlReaderBinarySupport System.Xml.XmlReader::binary
	XmlReaderBinarySupport_t1809665003 * ___binary_1;
	// System.Xml.XmlReaderSettings System.Xml.XmlReader::settings
	XmlReaderSettings_t2186285234 * ___settings_2;

public:
	inline static int32_t get_offset_of_readStringBuffer_0() { return static_cast<int32_t>(offsetof(XmlReader_t3121518892, ___readStringBuffer_0)); }
	inline StringBuilder_t * get_readStringBuffer_0() const { return ___readStringBuffer_0; }
	inline StringBuilder_t ** get_address_of_readStringBuffer_0() { return &___readStringBuffer_0; }
	inline void set_readStringBuffer_0(StringBuilder_t * value)
	{
		___readStringBuffer_0 = value;
		Il2CppCodeGenWriteBarrier((&___readStringBuffer_0), value);
	}

	inline static int32_t get_offset_of_binary_1() { return static_cast<int32_t>(offsetof(XmlReader_t3121518892, ___binary_1)); }
	inline XmlReaderBinarySupport_t1809665003 * get_binary_1() const { return ___binary_1; }
	inline XmlReaderBinarySupport_t1809665003 ** get_address_of_binary_1() { return &___binary_1; }
	inline void set_binary_1(XmlReaderBinarySupport_t1809665003 * value)
	{
		___binary_1 = value;
		Il2CppCodeGenWriteBarrier((&___binary_1), value);
	}

	inline static int32_t get_offset_of_settings_2() { return static_cast<int32_t>(offsetof(XmlReader_t3121518892, ___settings_2)); }
	inline XmlReaderSettings_t2186285234 * get_settings_2() const { return ___settings_2; }
	inline XmlReaderSettings_t2186285234 ** get_address_of_settings_2() { return &___settings_2; }
	inline void set_settings_2(XmlReaderSettings_t2186285234 * value)
	{
		___settings_2 = value;
		Il2CppCodeGenWriteBarrier((&___settings_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLREADER_T3121518892_H
#ifndef XMLWRITER_T127905479_H
#define XMLWRITER_T127905479_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlWriter
struct  XmlWriter_t127905479  : public RuntimeObject
{
public:
	// System.Xml.XmlWriterSettings System.Xml.XmlWriter::settings
	XmlWriterSettings_t3314986516 * ___settings_0;

public:
	inline static int32_t get_offset_of_settings_0() { return static_cast<int32_t>(offsetof(XmlWriter_t127905479, ___settings_0)); }
	inline XmlWriterSettings_t3314986516 * get_settings_0() const { return ___settings_0; }
	inline XmlWriterSettings_t3314986516 ** get_address_of_settings_0() { return &___settings_0; }
	inline void set_settings_0(XmlWriterSettings_t3314986516 * value)
	{
		___settings_0 = value;
		Il2CppCodeGenWriteBarrier((&___settings_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLWRITER_T127905479_H
#ifndef TEXTWRITER_T3478189236_H
#define TEXTWRITER_T3478189236_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.TextWriter
struct  TextWriter_t3478189236  : public RuntimeObject
{
public:
	// System.Char[] System.IO.TextWriter::CoreNewLine
	CharU5BU5D_t3528271667* ___CoreNewLine_0;
	// System.IFormatProvider System.IO.TextWriter::internalFormatProvider
	RuntimeObject* ___internalFormatProvider_1;

public:
	inline static int32_t get_offset_of_CoreNewLine_0() { return static_cast<int32_t>(offsetof(TextWriter_t3478189236, ___CoreNewLine_0)); }
	inline CharU5BU5D_t3528271667* get_CoreNewLine_0() const { return ___CoreNewLine_0; }
	inline CharU5BU5D_t3528271667** get_address_of_CoreNewLine_0() { return &___CoreNewLine_0; }
	inline void set_CoreNewLine_0(CharU5BU5D_t3528271667* value)
	{
		___CoreNewLine_0 = value;
		Il2CppCodeGenWriteBarrier((&___CoreNewLine_0), value);
	}

	inline static int32_t get_offset_of_internalFormatProvider_1() { return static_cast<int32_t>(offsetof(TextWriter_t3478189236, ___internalFormatProvider_1)); }
	inline RuntimeObject* get_internalFormatProvider_1() const { return ___internalFormatProvider_1; }
	inline RuntimeObject** get_address_of_internalFormatProvider_1() { return &___internalFormatProvider_1; }
	inline void set_internalFormatProvider_1(RuntimeObject* value)
	{
		___internalFormatProvider_1 = value;
		Il2CppCodeGenWriteBarrier((&___internalFormatProvider_1), value);
	}
};

struct TextWriter_t3478189236_StaticFields
{
public:
	// System.IO.TextWriter System.IO.TextWriter::Null
	TextWriter_t3478189236 * ___Null_2;

public:
	inline static int32_t get_offset_of_Null_2() { return static_cast<int32_t>(offsetof(TextWriter_t3478189236_StaticFields, ___Null_2)); }
	inline TextWriter_t3478189236 * get_Null_2() const { return ___Null_2; }
	inline TextWriter_t3478189236 ** get_address_of_Null_2() { return &___Null_2; }
	inline void set_Null_2(TextWriter_t3478189236 * value)
	{
		___Null_2 = value;
		Il2CppCodeGenWriteBarrier((&___Null_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTWRITER_T3478189236_H
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
#ifndef COMPILEDSTYLESHEET_T759457236_H
#define COMPILEDSTYLESHEET_T759457236_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Xml.Xsl.CompiledStylesheet
struct  CompiledStylesheet_t759457236  : public RuntimeObject
{
public:
	// Mono.Xml.Xsl.XslStylesheet Mono.Xml.Xsl.CompiledStylesheet::style
	XslStylesheet_t113441946 * ___style_0;
	// System.Collections.Hashtable Mono.Xml.Xsl.CompiledStylesheet::globalVariables
	Hashtable_t1853889766 * ___globalVariables_1;
	// System.Collections.Hashtable Mono.Xml.Xsl.CompiledStylesheet::attrSets
	Hashtable_t1853889766 * ___attrSets_2;
	// System.Xml.XmlNamespaceManager Mono.Xml.Xsl.CompiledStylesheet::nsMgr
	XmlNamespaceManager_t418790500 * ___nsMgr_3;
	// System.Collections.Hashtable Mono.Xml.Xsl.CompiledStylesheet::keys
	Hashtable_t1853889766 * ___keys_4;
	// System.Collections.Hashtable Mono.Xml.Xsl.CompiledStylesheet::outputs
	Hashtable_t1853889766 * ___outputs_5;
	// System.Collections.Hashtable Mono.Xml.Xsl.CompiledStylesheet::decimalFormats
	Hashtable_t1853889766 * ___decimalFormats_6;
	// Mono.Xml.Xsl.MSXslScriptManager Mono.Xml.Xsl.CompiledStylesheet::msScripts
	MSXslScriptManager_t4018040365 * ___msScripts_7;

public:
	inline static int32_t get_offset_of_style_0() { return static_cast<int32_t>(offsetof(CompiledStylesheet_t759457236, ___style_0)); }
	inline XslStylesheet_t113441946 * get_style_0() const { return ___style_0; }
	inline XslStylesheet_t113441946 ** get_address_of_style_0() { return &___style_0; }
	inline void set_style_0(XslStylesheet_t113441946 * value)
	{
		___style_0 = value;
		Il2CppCodeGenWriteBarrier((&___style_0), value);
	}

	inline static int32_t get_offset_of_globalVariables_1() { return static_cast<int32_t>(offsetof(CompiledStylesheet_t759457236, ___globalVariables_1)); }
	inline Hashtable_t1853889766 * get_globalVariables_1() const { return ___globalVariables_1; }
	inline Hashtable_t1853889766 ** get_address_of_globalVariables_1() { return &___globalVariables_1; }
	inline void set_globalVariables_1(Hashtable_t1853889766 * value)
	{
		___globalVariables_1 = value;
		Il2CppCodeGenWriteBarrier((&___globalVariables_1), value);
	}

	inline static int32_t get_offset_of_attrSets_2() { return static_cast<int32_t>(offsetof(CompiledStylesheet_t759457236, ___attrSets_2)); }
	inline Hashtable_t1853889766 * get_attrSets_2() const { return ___attrSets_2; }
	inline Hashtable_t1853889766 ** get_address_of_attrSets_2() { return &___attrSets_2; }
	inline void set_attrSets_2(Hashtable_t1853889766 * value)
	{
		___attrSets_2 = value;
		Il2CppCodeGenWriteBarrier((&___attrSets_2), value);
	}

	inline static int32_t get_offset_of_nsMgr_3() { return static_cast<int32_t>(offsetof(CompiledStylesheet_t759457236, ___nsMgr_3)); }
	inline XmlNamespaceManager_t418790500 * get_nsMgr_3() const { return ___nsMgr_3; }
	inline XmlNamespaceManager_t418790500 ** get_address_of_nsMgr_3() { return &___nsMgr_3; }
	inline void set_nsMgr_3(XmlNamespaceManager_t418790500 * value)
	{
		___nsMgr_3 = value;
		Il2CppCodeGenWriteBarrier((&___nsMgr_3), value);
	}

	inline static int32_t get_offset_of_keys_4() { return static_cast<int32_t>(offsetof(CompiledStylesheet_t759457236, ___keys_4)); }
	inline Hashtable_t1853889766 * get_keys_4() const { return ___keys_4; }
	inline Hashtable_t1853889766 ** get_address_of_keys_4() { return &___keys_4; }
	inline void set_keys_4(Hashtable_t1853889766 * value)
	{
		___keys_4 = value;
		Il2CppCodeGenWriteBarrier((&___keys_4), value);
	}

	inline static int32_t get_offset_of_outputs_5() { return static_cast<int32_t>(offsetof(CompiledStylesheet_t759457236, ___outputs_5)); }
	inline Hashtable_t1853889766 * get_outputs_5() const { return ___outputs_5; }
	inline Hashtable_t1853889766 ** get_address_of_outputs_5() { return &___outputs_5; }
	inline void set_outputs_5(Hashtable_t1853889766 * value)
	{
		___outputs_5 = value;
		Il2CppCodeGenWriteBarrier((&___outputs_5), value);
	}

	inline static int32_t get_offset_of_decimalFormats_6() { return static_cast<int32_t>(offsetof(CompiledStylesheet_t759457236, ___decimalFormats_6)); }
	inline Hashtable_t1853889766 * get_decimalFormats_6() const { return ___decimalFormats_6; }
	inline Hashtable_t1853889766 ** get_address_of_decimalFormats_6() { return &___decimalFormats_6; }
	inline void set_decimalFormats_6(Hashtable_t1853889766 * value)
	{
		___decimalFormats_6 = value;
		Il2CppCodeGenWriteBarrier((&___decimalFormats_6), value);
	}

	inline static int32_t get_offset_of_msScripts_7() { return static_cast<int32_t>(offsetof(CompiledStylesheet_t759457236, ___msScripts_7)); }
	inline MSXslScriptManager_t4018040365 * get_msScripts_7() const { return ___msScripts_7; }
	inline MSXslScriptManager_t4018040365 ** get_address_of_msScripts_7() { return &___msScripts_7; }
	inline void set_msScripts_7(MSXslScriptManager_t4018040365 * value)
	{
		___msScripts_7 = value;
		Il2CppCodeGenWriteBarrier((&___msScripts_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPILEDSTYLESHEET_T759457236_H
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
#ifndef HASHTABLE_T1853889766_H
#define HASHTABLE_T1853889766_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Hashtable
struct  Hashtable_t1853889766  : public RuntimeObject
{
public:
	// System.Int32 System.Collections.Hashtable::inUse
	int32_t ___inUse_1;
	// System.Int32 System.Collections.Hashtable::modificationCount
	int32_t ___modificationCount_2;
	// System.Single System.Collections.Hashtable::loadFactor
	float ___loadFactor_3;
	// System.Collections.Hashtable/Slot[] System.Collections.Hashtable::table
	SlotU5BU5D_t2994659099* ___table_4;
	// System.Int32[] System.Collections.Hashtable::hashes
	Int32U5BU5D_t385246372* ___hashes_5;
	// System.Int32 System.Collections.Hashtable::threshold
	int32_t ___threshold_6;
	// System.Collections.Hashtable/HashKeys System.Collections.Hashtable::hashKeys
	HashKeys_t1568156503 * ___hashKeys_7;
	// System.Collections.Hashtable/HashValues System.Collections.Hashtable::hashValues
	HashValues_t618387445 * ___hashValues_8;
	// System.Collections.IHashCodeProvider System.Collections.Hashtable::hcpRef
	RuntimeObject* ___hcpRef_9;
	// System.Collections.IComparer System.Collections.Hashtable::comparerRef
	RuntimeObject* ___comparerRef_10;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Hashtable::serializationInfo
	SerializationInfo_t950877179 * ___serializationInfo_11;
	// System.Collections.IEqualityComparer System.Collections.Hashtable::equalityComparer
	RuntimeObject* ___equalityComparer_12;

public:
	inline static int32_t get_offset_of_inUse_1() { return static_cast<int32_t>(offsetof(Hashtable_t1853889766, ___inUse_1)); }
	inline int32_t get_inUse_1() const { return ___inUse_1; }
	inline int32_t* get_address_of_inUse_1() { return &___inUse_1; }
	inline void set_inUse_1(int32_t value)
	{
		___inUse_1 = value;
	}

	inline static int32_t get_offset_of_modificationCount_2() { return static_cast<int32_t>(offsetof(Hashtable_t1853889766, ___modificationCount_2)); }
	inline int32_t get_modificationCount_2() const { return ___modificationCount_2; }
	inline int32_t* get_address_of_modificationCount_2() { return &___modificationCount_2; }
	inline void set_modificationCount_2(int32_t value)
	{
		___modificationCount_2 = value;
	}

	inline static int32_t get_offset_of_loadFactor_3() { return static_cast<int32_t>(offsetof(Hashtable_t1853889766, ___loadFactor_3)); }
	inline float get_loadFactor_3() const { return ___loadFactor_3; }
	inline float* get_address_of_loadFactor_3() { return &___loadFactor_3; }
	inline void set_loadFactor_3(float value)
	{
		___loadFactor_3 = value;
	}

	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Hashtable_t1853889766, ___table_4)); }
	inline SlotU5BU5D_t2994659099* get_table_4() const { return ___table_4; }
	inline SlotU5BU5D_t2994659099** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(SlotU5BU5D_t2994659099* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_hashes_5() { return static_cast<int32_t>(offsetof(Hashtable_t1853889766, ___hashes_5)); }
	inline Int32U5BU5D_t385246372* get_hashes_5() const { return ___hashes_5; }
	inline Int32U5BU5D_t385246372** get_address_of_hashes_5() { return &___hashes_5; }
	inline void set_hashes_5(Int32U5BU5D_t385246372* value)
	{
		___hashes_5 = value;
		Il2CppCodeGenWriteBarrier((&___hashes_5), value);
	}

	inline static int32_t get_offset_of_threshold_6() { return static_cast<int32_t>(offsetof(Hashtable_t1853889766, ___threshold_6)); }
	inline int32_t get_threshold_6() const { return ___threshold_6; }
	inline int32_t* get_address_of_threshold_6() { return &___threshold_6; }
	inline void set_threshold_6(int32_t value)
	{
		___threshold_6 = value;
	}

	inline static int32_t get_offset_of_hashKeys_7() { return static_cast<int32_t>(offsetof(Hashtable_t1853889766, ___hashKeys_7)); }
	inline HashKeys_t1568156503 * get_hashKeys_7() const { return ___hashKeys_7; }
	inline HashKeys_t1568156503 ** get_address_of_hashKeys_7() { return &___hashKeys_7; }
	inline void set_hashKeys_7(HashKeys_t1568156503 * value)
	{
		___hashKeys_7 = value;
		Il2CppCodeGenWriteBarrier((&___hashKeys_7), value);
	}

	inline static int32_t get_offset_of_hashValues_8() { return static_cast<int32_t>(offsetof(Hashtable_t1853889766, ___hashValues_8)); }
	inline HashValues_t618387445 * get_hashValues_8() const { return ___hashValues_8; }
	inline HashValues_t618387445 ** get_address_of_hashValues_8() { return &___hashValues_8; }
	inline void set_hashValues_8(HashValues_t618387445 * value)
	{
		___hashValues_8 = value;
		Il2CppCodeGenWriteBarrier((&___hashValues_8), value);
	}

	inline static int32_t get_offset_of_hcpRef_9() { return static_cast<int32_t>(offsetof(Hashtable_t1853889766, ___hcpRef_9)); }
	inline RuntimeObject* get_hcpRef_9() const { return ___hcpRef_9; }
	inline RuntimeObject** get_address_of_hcpRef_9() { return &___hcpRef_9; }
	inline void set_hcpRef_9(RuntimeObject* value)
	{
		___hcpRef_9 = value;
		Il2CppCodeGenWriteBarrier((&___hcpRef_9), value);
	}

	inline static int32_t get_offset_of_comparerRef_10() { return static_cast<int32_t>(offsetof(Hashtable_t1853889766, ___comparerRef_10)); }
	inline RuntimeObject* get_comparerRef_10() const { return ___comparerRef_10; }
	inline RuntimeObject** get_address_of_comparerRef_10() { return &___comparerRef_10; }
	inline void set_comparerRef_10(RuntimeObject* value)
	{
		___comparerRef_10 = value;
		Il2CppCodeGenWriteBarrier((&___comparerRef_10), value);
	}

	inline static int32_t get_offset_of_serializationInfo_11() { return static_cast<int32_t>(offsetof(Hashtable_t1853889766, ___serializationInfo_11)); }
	inline SerializationInfo_t950877179 * get_serializationInfo_11() const { return ___serializationInfo_11; }
	inline SerializationInfo_t950877179 ** get_address_of_serializationInfo_11() { return &___serializationInfo_11; }
	inline void set_serializationInfo_11(SerializationInfo_t950877179 * value)
	{
		___serializationInfo_11 = value;
		Il2CppCodeGenWriteBarrier((&___serializationInfo_11), value);
	}

	inline static int32_t get_offset_of_equalityComparer_12() { return static_cast<int32_t>(offsetof(Hashtable_t1853889766, ___equalityComparer_12)); }
	inline RuntimeObject* get_equalityComparer_12() const { return ___equalityComparer_12; }
	inline RuntimeObject** get_address_of_equalityComparer_12() { return &___equalityComparer_12; }
	inline void set_equalityComparer_12(RuntimeObject* value)
	{
		___equalityComparer_12 = value;
		Il2CppCodeGenWriteBarrier((&___equalityComparer_12), value);
	}
};

struct Hashtable_t1853889766_StaticFields
{
public:
	// System.Int32[] System.Collections.Hashtable::primeTbl
	Int32U5BU5D_t385246372* ___primeTbl_13;

public:
	inline static int32_t get_offset_of_primeTbl_13() { return static_cast<int32_t>(offsetof(Hashtable_t1853889766_StaticFields, ___primeTbl_13)); }
	inline Int32U5BU5D_t385246372* get_primeTbl_13() const { return ___primeTbl_13; }
	inline Int32U5BU5D_t385246372** get_address_of_primeTbl_13() { return &___primeTbl_13; }
	inline void set_primeTbl_13(Int32U5BU5D_t385246372* value)
	{
		___primeTbl_13 = value;
		Il2CppCodeGenWriteBarrier((&___primeTbl_13), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HASHTABLE_T1853889766_H
#ifndef NOOPERATIONDEBUGGER_T2873281971_H
#define NOOPERATIONDEBUGGER_T2873281971_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Xsl.NoOperationDebugger
struct  NoOperationDebugger_t2873281971  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NOOPERATIONDEBUGGER_T2873281971_H
#ifndef SIMPLEXSLTDEBUGGER_T937136423_H
#define SIMPLEXSLTDEBUGGER_T937136423_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Xsl.SimpleXsltDebugger
struct  SimpleXsltDebugger_t937136423  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SIMPLEXSLTDEBUGGER_T937136423_H
#ifndef ARRAYLIST_T2718874744_H
#define ARRAYLIST_T2718874744_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.ArrayList
struct  ArrayList_t2718874744  : public RuntimeObject
{
public:
	// System.Int32 System.Collections.ArrayList::_size
	int32_t ____size_1;
	// System.Object[] System.Collections.ArrayList::_items
	ObjectU5BU5D_t2843939325* ____items_2;
	// System.Int32 System.Collections.ArrayList::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__size_1() { return static_cast<int32_t>(offsetof(ArrayList_t2718874744, ____size_1)); }
	inline int32_t get__size_1() const { return ____size_1; }
	inline int32_t* get_address_of__size_1() { return &____size_1; }
	inline void set__size_1(int32_t value)
	{
		____size_1 = value;
	}

	inline static int32_t get_offset_of__items_2() { return static_cast<int32_t>(offsetof(ArrayList_t2718874744, ____items_2)); }
	inline ObjectU5BU5D_t2843939325* get__items_2() const { return ____items_2; }
	inline ObjectU5BU5D_t2843939325** get_address_of__items_2() { return &____items_2; }
	inline void set__items_2(ObjectU5BU5D_t2843939325* value)
	{
		____items_2 = value;
		Il2CppCodeGenWriteBarrier((&____items_2), value);
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(ArrayList_t2718874744, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct ArrayList_t2718874744_StaticFields
{
public:
	// System.Object[] System.Collections.ArrayList::EmptyArray
	ObjectU5BU5D_t2843939325* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(ArrayList_t2718874744_StaticFields, ___EmptyArray_4)); }
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
#endif // ARRAYLIST_T2718874744_H
#ifndef XQUERYCONVERT_T2841811029_H
#define XQUERYCONVERT_T2841811029_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XQueryConvert
struct  XQueryConvert_t2841811029  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XQUERYCONVERT_T2841811029_H
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
#ifndef XPATHDOCUMENT_T1673143697_H
#define XPATHDOCUMENT_T1673143697_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.XPathDocument
struct  XPathDocument_t1673143697  : public RuntimeObject
{
public:
	// System.Xml.XPath.IXPathNavigable System.Xml.XPath.XPathDocument::document
	RuntimeObject* ___document_0;

public:
	inline static int32_t get_offset_of_document_0() { return static_cast<int32_t>(offsetof(XPathDocument_t1673143697, ___document_0)); }
	inline RuntimeObject* get_document_0() const { return ___document_0; }
	inline RuntimeObject** get_address_of_document_0() { return &___document_0; }
	inline void set_document_0(RuntimeObject* value)
	{
		___document_0 = value;
		Il2CppCodeGenWriteBarrier((&___document_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XPATHDOCUMENT_T1673143697_H
#ifndef XSLCOMPILEDTRANSFORM_T1831779368_H
#define XSLCOMPILEDTRANSFORM_T1831779368_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Xsl.XslCompiledTransform
struct  XslCompiledTransform_t1831779368  : public RuntimeObject
{
public:
	// System.Boolean System.Xml.Xsl.XslCompiledTransform::enable_debug
	bool ___enable_debug_0;
	// System.Object System.Xml.Xsl.XslCompiledTransform::debugger
	RuntimeObject * ___debugger_1;
	// Mono.Xml.Xsl.CompiledStylesheet System.Xml.Xsl.XslCompiledTransform::s
	CompiledStylesheet_t759457236 * ___s_2;
	// System.Xml.XmlWriterSettings System.Xml.Xsl.XslCompiledTransform::output_settings
	XmlWriterSettings_t3314986516 * ___output_settings_3;

public:
	inline static int32_t get_offset_of_enable_debug_0() { return static_cast<int32_t>(offsetof(XslCompiledTransform_t1831779368, ___enable_debug_0)); }
	inline bool get_enable_debug_0() const { return ___enable_debug_0; }
	inline bool* get_address_of_enable_debug_0() { return &___enable_debug_0; }
	inline void set_enable_debug_0(bool value)
	{
		___enable_debug_0 = value;
	}

	inline static int32_t get_offset_of_debugger_1() { return static_cast<int32_t>(offsetof(XslCompiledTransform_t1831779368, ___debugger_1)); }
	inline RuntimeObject * get_debugger_1() const { return ___debugger_1; }
	inline RuntimeObject ** get_address_of_debugger_1() { return &___debugger_1; }
	inline void set_debugger_1(RuntimeObject * value)
	{
		___debugger_1 = value;
		Il2CppCodeGenWriteBarrier((&___debugger_1), value);
	}

	inline static int32_t get_offset_of_s_2() { return static_cast<int32_t>(offsetof(XslCompiledTransform_t1831779368, ___s_2)); }
	inline CompiledStylesheet_t759457236 * get_s_2() const { return ___s_2; }
	inline CompiledStylesheet_t759457236 ** get_address_of_s_2() { return &___s_2; }
	inline void set_s_2(CompiledStylesheet_t759457236 * value)
	{
		___s_2 = value;
		Il2CppCodeGenWriteBarrier((&___s_2), value);
	}

	inline static int32_t get_offset_of_output_settings_3() { return static_cast<int32_t>(offsetof(XslCompiledTransform_t1831779368, ___output_settings_3)); }
	inline XmlWriterSettings_t3314986516 * get_output_settings_3() const { return ___output_settings_3; }
	inline XmlWriterSettings_t3314986516 ** get_address_of_output_settings_3() { return &___output_settings_3; }
	inline void set_output_settings_3(XmlWriterSettings_t3314986516 * value)
	{
		___output_settings_3 = value;
		Il2CppCodeGenWriteBarrier((&___output_settings_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XSLCOMPILEDTRANSFORM_T1831779368_H
#ifndef XSLTARGUMENTLIST_T741251601_H
#define XSLTARGUMENTLIST_T741251601_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Xsl.XsltArgumentList
struct  XsltArgumentList_t741251601  : public RuntimeObject
{
public:
	// System.Collections.Hashtable System.Xml.Xsl.XsltArgumentList::extensionObjects
	Hashtable_t1853889766 * ___extensionObjects_0;
	// System.Collections.Hashtable System.Xml.Xsl.XsltArgumentList::parameters
	Hashtable_t1853889766 * ___parameters_1;
	// System.Xml.Xsl.XsltMessageEncounteredEventHandler System.Xml.Xsl.XsltArgumentList::XsltMessageEncountered
	XsltMessageEncounteredEventHandler_t414593873 * ___XsltMessageEncountered_2;

public:
	inline static int32_t get_offset_of_extensionObjects_0() { return static_cast<int32_t>(offsetof(XsltArgumentList_t741251601, ___extensionObjects_0)); }
	inline Hashtable_t1853889766 * get_extensionObjects_0() const { return ___extensionObjects_0; }
	inline Hashtable_t1853889766 ** get_address_of_extensionObjects_0() { return &___extensionObjects_0; }
	inline void set_extensionObjects_0(Hashtable_t1853889766 * value)
	{
		___extensionObjects_0 = value;
		Il2CppCodeGenWriteBarrier((&___extensionObjects_0), value);
	}

	inline static int32_t get_offset_of_parameters_1() { return static_cast<int32_t>(offsetof(XsltArgumentList_t741251601, ___parameters_1)); }
	inline Hashtable_t1853889766 * get_parameters_1() const { return ___parameters_1; }
	inline Hashtable_t1853889766 ** get_address_of_parameters_1() { return &___parameters_1; }
	inline void set_parameters_1(Hashtable_t1853889766 * value)
	{
		___parameters_1 = value;
		Il2CppCodeGenWriteBarrier((&___parameters_1), value);
	}

	inline static int32_t get_offset_of_XsltMessageEncountered_2() { return static_cast<int32_t>(offsetof(XsltArgumentList_t741251601, ___XsltMessageEncountered_2)); }
	inline XsltMessageEncounteredEventHandler_t414593873 * get_XsltMessageEncountered_2() const { return ___XsltMessageEncountered_2; }
	inline XsltMessageEncounteredEventHandler_t414593873 ** get_address_of_XsltMessageEncountered_2() { return &___XsltMessageEncountered_2; }
	inline void set_XsltMessageEncountered_2(XsltMessageEncounteredEventHandler_t414593873 * value)
	{
		___XsltMessageEncountered_2 = value;
		Il2CppCodeGenWriteBarrier((&___XsltMessageEncountered_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XSLTARGUMENTLIST_T741251601_H
#ifndef OUTPUTTER_T889105973_H
#define OUTPUTTER_T889105973_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Xml.Xsl.Outputter
struct  Outputter_t889105973  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OUTPUTTER_T889105973_H
#ifndef XSLTRANSFORM_T2320758400_H
#define XSLTRANSFORM_T2320758400_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Xsl.XslTransform
struct  XslTransform_t2320758400  : public RuntimeObject
{
public:
	// System.Object System.Xml.Xsl.XslTransform::debugger
	RuntimeObject * ___debugger_2;
	// Mono.Xml.Xsl.CompiledStylesheet System.Xml.Xsl.XslTransform::s
	CompiledStylesheet_t759457236 * ___s_3;
	// System.Xml.XmlResolver System.Xml.Xsl.XslTransform::xmlResolver
	XmlResolver_t626023767 * ___xmlResolver_4;

public:
	inline static int32_t get_offset_of_debugger_2() { return static_cast<int32_t>(offsetof(XslTransform_t2320758400, ___debugger_2)); }
	inline RuntimeObject * get_debugger_2() const { return ___debugger_2; }
	inline RuntimeObject ** get_address_of_debugger_2() { return &___debugger_2; }
	inline void set_debugger_2(RuntimeObject * value)
	{
		___debugger_2 = value;
		Il2CppCodeGenWriteBarrier((&___debugger_2), value);
	}

	inline static int32_t get_offset_of_s_3() { return static_cast<int32_t>(offsetof(XslTransform_t2320758400, ___s_3)); }
	inline CompiledStylesheet_t759457236 * get_s_3() const { return ___s_3; }
	inline CompiledStylesheet_t759457236 ** get_address_of_s_3() { return &___s_3; }
	inline void set_s_3(CompiledStylesheet_t759457236 * value)
	{
		___s_3 = value;
		Il2CppCodeGenWriteBarrier((&___s_3), value);
	}

	inline static int32_t get_offset_of_xmlResolver_4() { return static_cast<int32_t>(offsetof(XslTransform_t2320758400, ___xmlResolver_4)); }
	inline XmlResolver_t626023767 * get_xmlResolver_4() const { return ___xmlResolver_4; }
	inline XmlResolver_t626023767 ** get_address_of_xmlResolver_4() { return &___xmlResolver_4; }
	inline void set_xmlResolver_4(XmlResolver_t626023767 * value)
	{
		___xmlResolver_4 = value;
		Il2CppCodeGenWriteBarrier((&___xmlResolver_4), value);
	}
};

struct XslTransform_t2320758400_StaticFields
{
public:
	// System.Boolean System.Xml.Xsl.XslTransform::TemplateStackFrameError
	bool ___TemplateStackFrameError_0;
	// System.IO.TextWriter System.Xml.Xsl.XslTransform::TemplateStackFrameOutput
	TextWriter_t3478189236 * ___TemplateStackFrameOutput_1;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Xml.Xsl.XslTransform::<>f__switch$map42
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map42_5;

public:
	inline static int32_t get_offset_of_TemplateStackFrameError_0() { return static_cast<int32_t>(offsetof(XslTransform_t2320758400_StaticFields, ___TemplateStackFrameError_0)); }
	inline bool get_TemplateStackFrameError_0() const { return ___TemplateStackFrameError_0; }
	inline bool* get_address_of_TemplateStackFrameError_0() { return &___TemplateStackFrameError_0; }
	inline void set_TemplateStackFrameError_0(bool value)
	{
		___TemplateStackFrameError_0 = value;
	}

	inline static int32_t get_offset_of_TemplateStackFrameOutput_1() { return static_cast<int32_t>(offsetof(XslTransform_t2320758400_StaticFields, ___TemplateStackFrameOutput_1)); }
	inline TextWriter_t3478189236 * get_TemplateStackFrameOutput_1() const { return ___TemplateStackFrameOutput_1; }
	inline TextWriter_t3478189236 ** get_address_of_TemplateStackFrameOutput_1() { return &___TemplateStackFrameOutput_1; }
	inline void set_TemplateStackFrameOutput_1(TextWriter_t3478189236 * value)
	{
		___TemplateStackFrameOutput_1 = value;
		Il2CppCodeGenWriteBarrier((&___TemplateStackFrameOutput_1), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map42_5() { return static_cast<int32_t>(offsetof(XslTransform_t2320758400_StaticFields, ___U3CU3Ef__switchU24map42_5)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map42_5() const { return ___U3CU3Ef__switchU24map42_5; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map42_5() { return &___U3CU3Ef__switchU24map42_5; }
	inline void set_U3CU3Ef__switchU24map42_5(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map42_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map42_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XSLTRANSFORM_T2320758400_H
#ifndef DICTIONARY_2_T2736202052_H
#define DICTIONARY_2_T2736202052_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct  Dictionary_2_t2736202052  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t385246372* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_t964245573* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	StringU5BU5D_t1281789340* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	Int32U5BU5D_t385246372* ___valueSlots_7;
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
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t2736202052, ___table_4)); }
	inline Int32U5BU5D_t385246372* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t385246372** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t385246372* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t2736202052, ___linkSlots_5)); }
	inline LinkU5BU5D_t964245573* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_t964245573** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_t964245573* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t2736202052, ___keySlots_6)); }
	inline StringU5BU5D_t1281789340* get_keySlots_6() const { return ___keySlots_6; }
	inline StringU5BU5D_t1281789340** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(StringU5BU5D_t1281789340* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t2736202052, ___valueSlots_7)); }
	inline Int32U5BU5D_t385246372* get_valueSlots_7() const { return ___valueSlots_7; }
	inline Int32U5BU5D_t385246372** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(Int32U5BU5D_t385246372* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t2736202052, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t2736202052, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_t2736202052, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_t2736202052, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_t2736202052, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_t2736202052, ___serialization_info_13)); }
	inline SerializationInfo_t950877179 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t950877179 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t950877179 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_t2736202052, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_t2736202052_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t3530625384 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_t2736202052_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_t3530625384 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_t3530625384 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_t3530625384 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T2736202052_H
#ifndef XMLNAMESPACEMANAGER_T418790500_H
#define XMLNAMESPACEMANAGER_T418790500_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlNamespaceManager
struct  XmlNamespaceManager_t418790500  : public RuntimeObject
{
public:
	// System.Xml.XmlNamespaceManager/NsDecl[] System.Xml.XmlNamespaceManager::decls
	NsDeclU5BU5D_t2116608150* ___decls_4;
	// System.Int32 System.Xml.XmlNamespaceManager::declPos
	int32_t ___declPos_5;
	// System.Xml.XmlNamespaceManager/NsScope[] System.Xml.XmlNamespaceManager::scopes
	NsScopeU5BU5D_t382374428* ___scopes_6;
	// System.Int32 System.Xml.XmlNamespaceManager::scopePos
	int32_t ___scopePos_7;
	// System.String System.Xml.XmlNamespaceManager::defaultNamespace
	String_t* ___defaultNamespace_8;
	// System.Int32 System.Xml.XmlNamespaceManager::count
	int32_t ___count_9;
	// System.Xml.XmlNameTable System.Xml.XmlNamespaceManager::nameTable
	XmlNameTable_t71772148 * ___nameTable_10;
	// System.Boolean System.Xml.XmlNamespaceManager::internalAtomizedNames
	bool ___internalAtomizedNames_11;

public:
	inline static int32_t get_offset_of_decls_4() { return static_cast<int32_t>(offsetof(XmlNamespaceManager_t418790500, ___decls_4)); }
	inline NsDeclU5BU5D_t2116608150* get_decls_4() const { return ___decls_4; }
	inline NsDeclU5BU5D_t2116608150** get_address_of_decls_4() { return &___decls_4; }
	inline void set_decls_4(NsDeclU5BU5D_t2116608150* value)
	{
		___decls_4 = value;
		Il2CppCodeGenWriteBarrier((&___decls_4), value);
	}

	inline static int32_t get_offset_of_declPos_5() { return static_cast<int32_t>(offsetof(XmlNamespaceManager_t418790500, ___declPos_5)); }
	inline int32_t get_declPos_5() const { return ___declPos_5; }
	inline int32_t* get_address_of_declPos_5() { return &___declPos_5; }
	inline void set_declPos_5(int32_t value)
	{
		___declPos_5 = value;
	}

	inline static int32_t get_offset_of_scopes_6() { return static_cast<int32_t>(offsetof(XmlNamespaceManager_t418790500, ___scopes_6)); }
	inline NsScopeU5BU5D_t382374428* get_scopes_6() const { return ___scopes_6; }
	inline NsScopeU5BU5D_t382374428** get_address_of_scopes_6() { return &___scopes_6; }
	inline void set_scopes_6(NsScopeU5BU5D_t382374428* value)
	{
		___scopes_6 = value;
		Il2CppCodeGenWriteBarrier((&___scopes_6), value);
	}

	inline static int32_t get_offset_of_scopePos_7() { return static_cast<int32_t>(offsetof(XmlNamespaceManager_t418790500, ___scopePos_7)); }
	inline int32_t get_scopePos_7() const { return ___scopePos_7; }
	inline int32_t* get_address_of_scopePos_7() { return &___scopePos_7; }
	inline void set_scopePos_7(int32_t value)
	{
		___scopePos_7 = value;
	}

	inline static int32_t get_offset_of_defaultNamespace_8() { return static_cast<int32_t>(offsetof(XmlNamespaceManager_t418790500, ___defaultNamespace_8)); }
	inline String_t* get_defaultNamespace_8() const { return ___defaultNamespace_8; }
	inline String_t** get_address_of_defaultNamespace_8() { return &___defaultNamespace_8; }
	inline void set_defaultNamespace_8(String_t* value)
	{
		___defaultNamespace_8 = value;
		Il2CppCodeGenWriteBarrier((&___defaultNamespace_8), value);
	}

	inline static int32_t get_offset_of_count_9() { return static_cast<int32_t>(offsetof(XmlNamespaceManager_t418790500, ___count_9)); }
	inline int32_t get_count_9() const { return ___count_9; }
	inline int32_t* get_address_of_count_9() { return &___count_9; }
	inline void set_count_9(int32_t value)
	{
		___count_9 = value;
	}

	inline static int32_t get_offset_of_nameTable_10() { return static_cast<int32_t>(offsetof(XmlNamespaceManager_t418790500, ___nameTable_10)); }
	inline XmlNameTable_t71772148 * get_nameTable_10() const { return ___nameTable_10; }
	inline XmlNameTable_t71772148 ** get_address_of_nameTable_10() { return &___nameTable_10; }
	inline void set_nameTable_10(XmlNameTable_t71772148 * value)
	{
		___nameTable_10 = value;
		Il2CppCodeGenWriteBarrier((&___nameTable_10), value);
	}

	inline static int32_t get_offset_of_internalAtomizedNames_11() { return static_cast<int32_t>(offsetof(XmlNamespaceManager_t418790500, ___internalAtomizedNames_11)); }
	inline bool get_internalAtomizedNames_11() const { return ___internalAtomizedNames_11; }
	inline bool* get_address_of_internalAtomizedNames_11() { return &___internalAtomizedNames_11; }
	inline void set_internalAtomizedNames_11(bool value)
	{
		___internalAtomizedNames_11 = value;
	}
};

struct XmlNamespaceManager_t418790500_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Xml.XmlNamespaceManager::<>f__switch$map28
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map28_12;

public:
	inline static int32_t get_offset_of_U3CU3Ef__switchU24map28_12() { return static_cast<int32_t>(offsetof(XmlNamespaceManager_t418790500_StaticFields, ___U3CU3Ef__switchU24map28_12)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map28_12() const { return ___U3CU3Ef__switchU24map28_12; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map28_12() { return &___U3CU3Ef__switchU24map28_12; }
	inline void set_U3CU3Ef__switchU24map28_12(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map28_12 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map28_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLNAMESPACEMANAGER_T418790500_H
#ifndef EVENTARGS_T3591816995_H
#define EVENTARGS_T3591816995_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.EventArgs
struct  EventArgs_t3591816995  : public RuntimeObject
{
public:

public:
};

struct EventArgs_t3591816995_StaticFields
{
public:
	// System.EventArgs System.EventArgs::Empty
	EventArgs_t3591816995 * ___Empty_0;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(EventArgs_t3591816995_StaticFields, ___Empty_0)); }
	inline EventArgs_t3591816995 * get_Empty_0() const { return ___Empty_0; }
	inline EventArgs_t3591816995 ** get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(EventArgs_t3591816995 * value)
	{
		___Empty_0 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTARGS_T3591816995_H
#ifndef XPATHEXPRESSION_T1723793351_H
#define XPATHEXPRESSION_T1723793351_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.XPathExpression
struct  XPathExpression_t1723793351  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XPATHEXPRESSION_T1723793351_H
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
#ifndef XPATHITEM_T4250588140_H
#define XPATHITEM_T4250588140_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.XPathItem
struct  XPathItem_t4250588140  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XPATHITEM_T4250588140_H
#ifndef XSLTSETTINGS_T3615464394_H
#define XSLTSETTINGS_T3615464394_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Xsl.XsltSettings
struct  XsltSettings_t3615464394  : public RuntimeObject
{
public:
	// System.Boolean System.Xml.Xsl.XsltSettings::readOnly
	bool ___readOnly_2;
	// System.Boolean System.Xml.Xsl.XsltSettings::enableDocument
	bool ___enableDocument_3;
	// System.Boolean System.Xml.Xsl.XsltSettings::enableScript
	bool ___enableScript_4;

public:
	inline static int32_t get_offset_of_readOnly_2() { return static_cast<int32_t>(offsetof(XsltSettings_t3615464394, ___readOnly_2)); }
	inline bool get_readOnly_2() const { return ___readOnly_2; }
	inline bool* get_address_of_readOnly_2() { return &___readOnly_2; }
	inline void set_readOnly_2(bool value)
	{
		___readOnly_2 = value;
	}

	inline static int32_t get_offset_of_enableDocument_3() { return static_cast<int32_t>(offsetof(XsltSettings_t3615464394, ___enableDocument_3)); }
	inline bool get_enableDocument_3() const { return ___enableDocument_3; }
	inline bool* get_address_of_enableDocument_3() { return &___enableDocument_3; }
	inline void set_enableDocument_3(bool value)
	{
		___enableDocument_3 = value;
	}

	inline static int32_t get_offset_of_enableScript_4() { return static_cast<int32_t>(offsetof(XsltSettings_t3615464394, ___enableScript_4)); }
	inline bool get_enableScript_4() const { return ___enableScript_4; }
	inline bool* get_address_of_enableScript_4() { return &___enableScript_4; }
	inline void set_enableScript_4(bool value)
	{
		___enableScript_4 = value;
	}
};

struct XsltSettings_t3615464394_StaticFields
{
public:
	// System.Xml.Xsl.XsltSettings System.Xml.Xsl.XsltSettings::defaultSettings
	XsltSettings_t3615464394 * ___defaultSettings_0;
	// System.Xml.Xsl.XsltSettings System.Xml.Xsl.XsltSettings::trustedXslt
	XsltSettings_t3615464394 * ___trustedXslt_1;

public:
	inline static int32_t get_offset_of_defaultSettings_0() { return static_cast<int32_t>(offsetof(XsltSettings_t3615464394_StaticFields, ___defaultSettings_0)); }
	inline XsltSettings_t3615464394 * get_defaultSettings_0() const { return ___defaultSettings_0; }
	inline XsltSettings_t3615464394 ** get_address_of_defaultSettings_0() { return &___defaultSettings_0; }
	inline void set_defaultSettings_0(XsltSettings_t3615464394 * value)
	{
		___defaultSettings_0 = value;
		Il2CppCodeGenWriteBarrier((&___defaultSettings_0), value);
	}

	inline static int32_t get_offset_of_trustedXslt_1() { return static_cast<int32_t>(offsetof(XsltSettings_t3615464394_StaticFields, ___trustedXslt_1)); }
	inline XsltSettings_t3615464394 * get_trustedXslt_1() const { return ___trustedXslt_1; }
	inline XsltSettings_t3615464394 ** get_address_of_trustedXslt_1() { return &___trustedXslt_1; }
	inline void set_trustedXslt_1(XsltSettings_t3615464394 * value)
	{
		___trustedXslt_1 = value;
		Il2CppCodeGenWriteBarrier((&___trustedXslt_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XSLTSETTINGS_T3615464394_H
#ifndef EVIDENCE_T2008144148_H
#define EVIDENCE_T2008144148_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.Evidence
struct  Evidence_t2008144148  : public RuntimeObject
{
public:
	// System.Boolean System.Security.Policy.Evidence::_locked
	bool ____locked_0;
	// System.Collections.ArrayList System.Security.Policy.Evidence::hostEvidenceList
	ArrayList_t2718874744 * ___hostEvidenceList_1;
	// System.Collections.ArrayList System.Security.Policy.Evidence::assemblyEvidenceList
	ArrayList_t2718874744 * ___assemblyEvidenceList_2;
	// System.Int32 System.Security.Policy.Evidence::_hashCode
	int32_t ____hashCode_3;

public:
	inline static int32_t get_offset_of__locked_0() { return static_cast<int32_t>(offsetof(Evidence_t2008144148, ____locked_0)); }
	inline bool get__locked_0() const { return ____locked_0; }
	inline bool* get_address_of__locked_0() { return &____locked_0; }
	inline void set__locked_0(bool value)
	{
		____locked_0 = value;
	}

	inline static int32_t get_offset_of_hostEvidenceList_1() { return static_cast<int32_t>(offsetof(Evidence_t2008144148, ___hostEvidenceList_1)); }
	inline ArrayList_t2718874744 * get_hostEvidenceList_1() const { return ___hostEvidenceList_1; }
	inline ArrayList_t2718874744 ** get_address_of_hostEvidenceList_1() { return &___hostEvidenceList_1; }
	inline void set_hostEvidenceList_1(ArrayList_t2718874744 * value)
	{
		___hostEvidenceList_1 = value;
		Il2CppCodeGenWriteBarrier((&___hostEvidenceList_1), value);
	}

	inline static int32_t get_offset_of_assemblyEvidenceList_2() { return static_cast<int32_t>(offsetof(Evidence_t2008144148, ___assemblyEvidenceList_2)); }
	inline ArrayList_t2718874744 * get_assemblyEvidenceList_2() const { return ___assemblyEvidenceList_2; }
	inline ArrayList_t2718874744 ** get_address_of_assemblyEvidenceList_2() { return &___assemblyEvidenceList_2; }
	inline void set_assemblyEvidenceList_2(ArrayList_t2718874744 * value)
	{
		___assemblyEvidenceList_2 = value;
		Il2CppCodeGenWriteBarrier((&___assemblyEvidenceList_2), value);
	}

	inline static int32_t get_offset_of__hashCode_3() { return static_cast<int32_t>(offsetof(Evidence_t2008144148, ____hashCode_3)); }
	inline int32_t get__hashCode_3() const { return ____hashCode_3; }
	inline int32_t* get_address_of__hashCode_3() { return &____hashCode_3; }
	inline void set__hashCode_3(int32_t value)
	{
		____hashCode_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVIDENCE_T2008144148_H
#ifndef XSLTRANSFORMPROCESSOR_T3405861191_H
#define XSLTRANSFORMPROCESSOR_T3405861191_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Xml.Xsl.XslTransformProcessor
struct  XslTransformProcessor_t3405861191  : public RuntimeObject
{
public:
	// Mono.Xml.Xsl.XsltDebuggerWrapper Mono.Xml.Xsl.XslTransformProcessor::debugger
	XsltDebuggerWrapper_t4148725768 * ___debugger_0;
	// Mono.Xml.Xsl.CompiledStylesheet Mono.Xml.Xsl.XslTransformProcessor::compiledStyle
	CompiledStylesheet_t759457236 * ___compiledStyle_1;
	// Mono.Xml.Xsl.XslStylesheet Mono.Xml.Xsl.XslTransformProcessor::style
	XslStylesheet_t113441946 * ___style_2;
	// System.Collections.Stack Mono.Xml.Xsl.XslTransformProcessor::currentTemplateStack
	Stack_t2329662280 * ___currentTemplateStack_3;
	// System.Xml.XPath.XPathNavigator Mono.Xml.Xsl.XslTransformProcessor::root
	XPathNavigator_t787956054 * ___root_4;
	// System.Xml.Xsl.XsltArgumentList Mono.Xml.Xsl.XslTransformProcessor::args
	XsltArgumentList_t741251601 * ___args_5;
	// System.Xml.XmlResolver Mono.Xml.Xsl.XslTransformProcessor::resolver
	XmlResolver_t626023767 * ___resolver_6;
	// System.String Mono.Xml.Xsl.XslTransformProcessor::currentOutputUri
	String_t* ___currentOutputUri_7;
	// Mono.Xml.Xsl.XsltCompiledContext Mono.Xml.Xsl.XslTransformProcessor::XPathContext
	XsltCompiledContext_t2295645487 * ___XPathContext_8;
	// System.Collections.Hashtable Mono.Xml.Xsl.XslTransformProcessor::globalVariableTable
	Hashtable_t1853889766 * ___globalVariableTable_9;
	// System.Collections.Hashtable Mono.Xml.Xsl.XslTransformProcessor::docCache
	Hashtable_t1853889766 * ___docCache_10;
	// System.Collections.Stack Mono.Xml.Xsl.XslTransformProcessor::outputStack
	Stack_t2329662280 * ___outputStack_11;
	// System.Text.StringBuilder Mono.Xml.Xsl.XslTransformProcessor::avtSB
	StringBuilder_t * ___avtSB_12;
	// System.Collections.Stack Mono.Xml.Xsl.XslTransformProcessor::paramPassingCache
	Stack_t2329662280 * ___paramPassingCache_13;
	// System.Collections.ArrayList Mono.Xml.Xsl.XslTransformProcessor::nodesetStack
	ArrayList_t2718874744 * ___nodesetStack_14;
	// System.Collections.Stack Mono.Xml.Xsl.XslTransformProcessor::variableStack
	Stack_t2329662280 * ___variableStack_15;
	// System.Object[] Mono.Xml.Xsl.XslTransformProcessor::currentStack
	ObjectU5BU5D_t2843939325* ___currentStack_16;
	// System.Collections.Hashtable Mono.Xml.Xsl.XslTransformProcessor::busyTable
	Hashtable_t1853889766 * ___busyTable_17;

public:
	inline static int32_t get_offset_of_debugger_0() { return static_cast<int32_t>(offsetof(XslTransformProcessor_t3405861191, ___debugger_0)); }
	inline XsltDebuggerWrapper_t4148725768 * get_debugger_0() const { return ___debugger_0; }
	inline XsltDebuggerWrapper_t4148725768 ** get_address_of_debugger_0() { return &___debugger_0; }
	inline void set_debugger_0(XsltDebuggerWrapper_t4148725768 * value)
	{
		___debugger_0 = value;
		Il2CppCodeGenWriteBarrier((&___debugger_0), value);
	}

	inline static int32_t get_offset_of_compiledStyle_1() { return static_cast<int32_t>(offsetof(XslTransformProcessor_t3405861191, ___compiledStyle_1)); }
	inline CompiledStylesheet_t759457236 * get_compiledStyle_1() const { return ___compiledStyle_1; }
	inline CompiledStylesheet_t759457236 ** get_address_of_compiledStyle_1() { return &___compiledStyle_1; }
	inline void set_compiledStyle_1(CompiledStylesheet_t759457236 * value)
	{
		___compiledStyle_1 = value;
		Il2CppCodeGenWriteBarrier((&___compiledStyle_1), value);
	}

	inline static int32_t get_offset_of_style_2() { return static_cast<int32_t>(offsetof(XslTransformProcessor_t3405861191, ___style_2)); }
	inline XslStylesheet_t113441946 * get_style_2() const { return ___style_2; }
	inline XslStylesheet_t113441946 ** get_address_of_style_2() { return &___style_2; }
	inline void set_style_2(XslStylesheet_t113441946 * value)
	{
		___style_2 = value;
		Il2CppCodeGenWriteBarrier((&___style_2), value);
	}

	inline static int32_t get_offset_of_currentTemplateStack_3() { return static_cast<int32_t>(offsetof(XslTransformProcessor_t3405861191, ___currentTemplateStack_3)); }
	inline Stack_t2329662280 * get_currentTemplateStack_3() const { return ___currentTemplateStack_3; }
	inline Stack_t2329662280 ** get_address_of_currentTemplateStack_3() { return &___currentTemplateStack_3; }
	inline void set_currentTemplateStack_3(Stack_t2329662280 * value)
	{
		___currentTemplateStack_3 = value;
		Il2CppCodeGenWriteBarrier((&___currentTemplateStack_3), value);
	}

	inline static int32_t get_offset_of_root_4() { return static_cast<int32_t>(offsetof(XslTransformProcessor_t3405861191, ___root_4)); }
	inline XPathNavigator_t787956054 * get_root_4() const { return ___root_4; }
	inline XPathNavigator_t787956054 ** get_address_of_root_4() { return &___root_4; }
	inline void set_root_4(XPathNavigator_t787956054 * value)
	{
		___root_4 = value;
		Il2CppCodeGenWriteBarrier((&___root_4), value);
	}

	inline static int32_t get_offset_of_args_5() { return static_cast<int32_t>(offsetof(XslTransformProcessor_t3405861191, ___args_5)); }
	inline XsltArgumentList_t741251601 * get_args_5() const { return ___args_5; }
	inline XsltArgumentList_t741251601 ** get_address_of_args_5() { return &___args_5; }
	inline void set_args_5(XsltArgumentList_t741251601 * value)
	{
		___args_5 = value;
		Il2CppCodeGenWriteBarrier((&___args_5), value);
	}

	inline static int32_t get_offset_of_resolver_6() { return static_cast<int32_t>(offsetof(XslTransformProcessor_t3405861191, ___resolver_6)); }
	inline XmlResolver_t626023767 * get_resolver_6() const { return ___resolver_6; }
	inline XmlResolver_t626023767 ** get_address_of_resolver_6() { return &___resolver_6; }
	inline void set_resolver_6(XmlResolver_t626023767 * value)
	{
		___resolver_6 = value;
		Il2CppCodeGenWriteBarrier((&___resolver_6), value);
	}

	inline static int32_t get_offset_of_currentOutputUri_7() { return static_cast<int32_t>(offsetof(XslTransformProcessor_t3405861191, ___currentOutputUri_7)); }
	inline String_t* get_currentOutputUri_7() const { return ___currentOutputUri_7; }
	inline String_t** get_address_of_currentOutputUri_7() { return &___currentOutputUri_7; }
	inline void set_currentOutputUri_7(String_t* value)
	{
		___currentOutputUri_7 = value;
		Il2CppCodeGenWriteBarrier((&___currentOutputUri_7), value);
	}

	inline static int32_t get_offset_of_XPathContext_8() { return static_cast<int32_t>(offsetof(XslTransformProcessor_t3405861191, ___XPathContext_8)); }
	inline XsltCompiledContext_t2295645487 * get_XPathContext_8() const { return ___XPathContext_8; }
	inline XsltCompiledContext_t2295645487 ** get_address_of_XPathContext_8() { return &___XPathContext_8; }
	inline void set_XPathContext_8(XsltCompiledContext_t2295645487 * value)
	{
		___XPathContext_8 = value;
		Il2CppCodeGenWriteBarrier((&___XPathContext_8), value);
	}

	inline static int32_t get_offset_of_globalVariableTable_9() { return static_cast<int32_t>(offsetof(XslTransformProcessor_t3405861191, ___globalVariableTable_9)); }
	inline Hashtable_t1853889766 * get_globalVariableTable_9() const { return ___globalVariableTable_9; }
	inline Hashtable_t1853889766 ** get_address_of_globalVariableTable_9() { return &___globalVariableTable_9; }
	inline void set_globalVariableTable_9(Hashtable_t1853889766 * value)
	{
		___globalVariableTable_9 = value;
		Il2CppCodeGenWriteBarrier((&___globalVariableTable_9), value);
	}

	inline static int32_t get_offset_of_docCache_10() { return static_cast<int32_t>(offsetof(XslTransformProcessor_t3405861191, ___docCache_10)); }
	inline Hashtable_t1853889766 * get_docCache_10() const { return ___docCache_10; }
	inline Hashtable_t1853889766 ** get_address_of_docCache_10() { return &___docCache_10; }
	inline void set_docCache_10(Hashtable_t1853889766 * value)
	{
		___docCache_10 = value;
		Il2CppCodeGenWriteBarrier((&___docCache_10), value);
	}

	inline static int32_t get_offset_of_outputStack_11() { return static_cast<int32_t>(offsetof(XslTransformProcessor_t3405861191, ___outputStack_11)); }
	inline Stack_t2329662280 * get_outputStack_11() const { return ___outputStack_11; }
	inline Stack_t2329662280 ** get_address_of_outputStack_11() { return &___outputStack_11; }
	inline void set_outputStack_11(Stack_t2329662280 * value)
	{
		___outputStack_11 = value;
		Il2CppCodeGenWriteBarrier((&___outputStack_11), value);
	}

	inline static int32_t get_offset_of_avtSB_12() { return static_cast<int32_t>(offsetof(XslTransformProcessor_t3405861191, ___avtSB_12)); }
	inline StringBuilder_t * get_avtSB_12() const { return ___avtSB_12; }
	inline StringBuilder_t ** get_address_of_avtSB_12() { return &___avtSB_12; }
	inline void set_avtSB_12(StringBuilder_t * value)
	{
		___avtSB_12 = value;
		Il2CppCodeGenWriteBarrier((&___avtSB_12), value);
	}

	inline static int32_t get_offset_of_paramPassingCache_13() { return static_cast<int32_t>(offsetof(XslTransformProcessor_t3405861191, ___paramPassingCache_13)); }
	inline Stack_t2329662280 * get_paramPassingCache_13() const { return ___paramPassingCache_13; }
	inline Stack_t2329662280 ** get_address_of_paramPassingCache_13() { return &___paramPassingCache_13; }
	inline void set_paramPassingCache_13(Stack_t2329662280 * value)
	{
		___paramPassingCache_13 = value;
		Il2CppCodeGenWriteBarrier((&___paramPassingCache_13), value);
	}

	inline static int32_t get_offset_of_nodesetStack_14() { return static_cast<int32_t>(offsetof(XslTransformProcessor_t3405861191, ___nodesetStack_14)); }
	inline ArrayList_t2718874744 * get_nodesetStack_14() const { return ___nodesetStack_14; }
	inline ArrayList_t2718874744 ** get_address_of_nodesetStack_14() { return &___nodesetStack_14; }
	inline void set_nodesetStack_14(ArrayList_t2718874744 * value)
	{
		___nodesetStack_14 = value;
		Il2CppCodeGenWriteBarrier((&___nodesetStack_14), value);
	}

	inline static int32_t get_offset_of_variableStack_15() { return static_cast<int32_t>(offsetof(XslTransformProcessor_t3405861191, ___variableStack_15)); }
	inline Stack_t2329662280 * get_variableStack_15() const { return ___variableStack_15; }
	inline Stack_t2329662280 ** get_address_of_variableStack_15() { return &___variableStack_15; }
	inline void set_variableStack_15(Stack_t2329662280 * value)
	{
		___variableStack_15 = value;
		Il2CppCodeGenWriteBarrier((&___variableStack_15), value);
	}

	inline static int32_t get_offset_of_currentStack_16() { return static_cast<int32_t>(offsetof(XslTransformProcessor_t3405861191, ___currentStack_16)); }
	inline ObjectU5BU5D_t2843939325* get_currentStack_16() const { return ___currentStack_16; }
	inline ObjectU5BU5D_t2843939325** get_address_of_currentStack_16() { return &___currentStack_16; }
	inline void set_currentStack_16(ObjectU5BU5D_t2843939325* value)
	{
		___currentStack_16 = value;
		Il2CppCodeGenWriteBarrier((&___currentStack_16), value);
	}

	inline static int32_t get_offset_of_busyTable_17() { return static_cast<int32_t>(offsetof(XslTransformProcessor_t3405861191, ___busyTable_17)); }
	inline Hashtable_t1853889766 * get_busyTable_17() const { return ___busyTable_17; }
	inline Hashtable_t1853889766 ** get_address_of_busyTable_17() { return &___busyTable_17; }
	inline void set_busyTable_17(Hashtable_t1853889766 * value)
	{
		___busyTable_17 = value;
		Il2CppCodeGenWriteBarrier((&___busyTable_17), value);
	}
};

struct XslTransformProcessor_t3405861191_StaticFields
{
public:
	// System.Object Mono.Xml.Xsl.XslTransformProcessor::busyObject
	RuntimeObject * ___busyObject_18;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Xml.Xsl.XslTransformProcessor::<>f__switch$map27
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map27_19;

public:
	inline static int32_t get_offset_of_busyObject_18() { return static_cast<int32_t>(offsetof(XslTransformProcessor_t3405861191_StaticFields, ___busyObject_18)); }
	inline RuntimeObject * get_busyObject_18() const { return ___busyObject_18; }
	inline RuntimeObject ** get_address_of_busyObject_18() { return &___busyObject_18; }
	inline void set_busyObject_18(RuntimeObject * value)
	{
		___busyObject_18 = value;
		Il2CppCodeGenWriteBarrier((&___busyObject_18), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map27_19() { return static_cast<int32_t>(offsetof(XslTransformProcessor_t3405861191_StaticFields, ___U3CU3Ef__switchU24map27_19)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map27_19() const { return ___U3CU3Ef__switchU24map27_19; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map27_19() { return &___U3CU3Ef__switchU24map27_19; }
	inline void set_U3CU3Ef__switchU24map27_19(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map27_19 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map27_19), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XSLTRANSFORMPROCESSOR_T3405861191_H
#ifndef URI_T100236324_H
#define URI_T100236324_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Uri
struct  Uri_t100236324  : public RuntimeObject
{
public:
	// System.Boolean System.Uri::isUnixFilePath
	bool ___isUnixFilePath_1;
	// System.String System.Uri::source
	String_t* ___source_2;
	// System.String System.Uri::scheme
	String_t* ___scheme_3;
	// System.String System.Uri::host
	String_t* ___host_4;
	// System.Int32 System.Uri::port
	int32_t ___port_5;
	// System.String System.Uri::path
	String_t* ___path_6;
	// System.String System.Uri::query
	String_t* ___query_7;
	// System.String System.Uri::fragment
	String_t* ___fragment_8;
	// System.String System.Uri::userinfo
	String_t* ___userinfo_9;
	// System.Boolean System.Uri::isUnc
	bool ___isUnc_10;
	// System.Boolean System.Uri::isOpaquePart
	bool ___isOpaquePart_11;
	// System.Boolean System.Uri::isAbsoluteUri
	bool ___isAbsoluteUri_12;
	// System.String[] System.Uri::segments
	StringU5BU5D_t1281789340* ___segments_13;
	// System.Boolean System.Uri::userEscaped
	bool ___userEscaped_14;
	// System.String System.Uri::cachedAbsoluteUri
	String_t* ___cachedAbsoluteUri_15;
	// System.String System.Uri::cachedToString
	String_t* ___cachedToString_16;
	// System.String System.Uri::cachedLocalPath
	String_t* ___cachedLocalPath_17;
	// System.Int32 System.Uri::cachedHashCode
	int32_t ___cachedHashCode_18;
	// System.UriParser System.Uri::parser
	UriParser_t3890150400 * ___parser_32;

public:
	inline static int32_t get_offset_of_isUnixFilePath_1() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___isUnixFilePath_1)); }
	inline bool get_isUnixFilePath_1() const { return ___isUnixFilePath_1; }
	inline bool* get_address_of_isUnixFilePath_1() { return &___isUnixFilePath_1; }
	inline void set_isUnixFilePath_1(bool value)
	{
		___isUnixFilePath_1 = value;
	}

	inline static int32_t get_offset_of_source_2() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___source_2)); }
	inline String_t* get_source_2() const { return ___source_2; }
	inline String_t** get_address_of_source_2() { return &___source_2; }
	inline void set_source_2(String_t* value)
	{
		___source_2 = value;
		Il2CppCodeGenWriteBarrier((&___source_2), value);
	}

	inline static int32_t get_offset_of_scheme_3() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___scheme_3)); }
	inline String_t* get_scheme_3() const { return ___scheme_3; }
	inline String_t** get_address_of_scheme_3() { return &___scheme_3; }
	inline void set_scheme_3(String_t* value)
	{
		___scheme_3 = value;
		Il2CppCodeGenWriteBarrier((&___scheme_3), value);
	}

	inline static int32_t get_offset_of_host_4() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___host_4)); }
	inline String_t* get_host_4() const { return ___host_4; }
	inline String_t** get_address_of_host_4() { return &___host_4; }
	inline void set_host_4(String_t* value)
	{
		___host_4 = value;
		Il2CppCodeGenWriteBarrier((&___host_4), value);
	}

	inline static int32_t get_offset_of_port_5() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___port_5)); }
	inline int32_t get_port_5() const { return ___port_5; }
	inline int32_t* get_address_of_port_5() { return &___port_5; }
	inline void set_port_5(int32_t value)
	{
		___port_5 = value;
	}

	inline static int32_t get_offset_of_path_6() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___path_6)); }
	inline String_t* get_path_6() const { return ___path_6; }
	inline String_t** get_address_of_path_6() { return &___path_6; }
	inline void set_path_6(String_t* value)
	{
		___path_6 = value;
		Il2CppCodeGenWriteBarrier((&___path_6), value);
	}

	inline static int32_t get_offset_of_query_7() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___query_7)); }
	inline String_t* get_query_7() const { return ___query_7; }
	inline String_t** get_address_of_query_7() { return &___query_7; }
	inline void set_query_7(String_t* value)
	{
		___query_7 = value;
		Il2CppCodeGenWriteBarrier((&___query_7), value);
	}

	inline static int32_t get_offset_of_fragment_8() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___fragment_8)); }
	inline String_t* get_fragment_8() const { return ___fragment_8; }
	inline String_t** get_address_of_fragment_8() { return &___fragment_8; }
	inline void set_fragment_8(String_t* value)
	{
		___fragment_8 = value;
		Il2CppCodeGenWriteBarrier((&___fragment_8), value);
	}

	inline static int32_t get_offset_of_userinfo_9() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___userinfo_9)); }
	inline String_t* get_userinfo_9() const { return ___userinfo_9; }
	inline String_t** get_address_of_userinfo_9() { return &___userinfo_9; }
	inline void set_userinfo_9(String_t* value)
	{
		___userinfo_9 = value;
		Il2CppCodeGenWriteBarrier((&___userinfo_9), value);
	}

	inline static int32_t get_offset_of_isUnc_10() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___isUnc_10)); }
	inline bool get_isUnc_10() const { return ___isUnc_10; }
	inline bool* get_address_of_isUnc_10() { return &___isUnc_10; }
	inline void set_isUnc_10(bool value)
	{
		___isUnc_10 = value;
	}

	inline static int32_t get_offset_of_isOpaquePart_11() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___isOpaquePart_11)); }
	inline bool get_isOpaquePart_11() const { return ___isOpaquePart_11; }
	inline bool* get_address_of_isOpaquePart_11() { return &___isOpaquePart_11; }
	inline void set_isOpaquePart_11(bool value)
	{
		___isOpaquePart_11 = value;
	}

	inline static int32_t get_offset_of_isAbsoluteUri_12() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___isAbsoluteUri_12)); }
	inline bool get_isAbsoluteUri_12() const { return ___isAbsoluteUri_12; }
	inline bool* get_address_of_isAbsoluteUri_12() { return &___isAbsoluteUri_12; }
	inline void set_isAbsoluteUri_12(bool value)
	{
		___isAbsoluteUri_12 = value;
	}

	inline static int32_t get_offset_of_segments_13() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___segments_13)); }
	inline StringU5BU5D_t1281789340* get_segments_13() const { return ___segments_13; }
	inline StringU5BU5D_t1281789340** get_address_of_segments_13() { return &___segments_13; }
	inline void set_segments_13(StringU5BU5D_t1281789340* value)
	{
		___segments_13 = value;
		Il2CppCodeGenWriteBarrier((&___segments_13), value);
	}

	inline static int32_t get_offset_of_userEscaped_14() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___userEscaped_14)); }
	inline bool get_userEscaped_14() const { return ___userEscaped_14; }
	inline bool* get_address_of_userEscaped_14() { return &___userEscaped_14; }
	inline void set_userEscaped_14(bool value)
	{
		___userEscaped_14 = value;
	}

	inline static int32_t get_offset_of_cachedAbsoluteUri_15() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___cachedAbsoluteUri_15)); }
	inline String_t* get_cachedAbsoluteUri_15() const { return ___cachedAbsoluteUri_15; }
	inline String_t** get_address_of_cachedAbsoluteUri_15() { return &___cachedAbsoluteUri_15; }
	inline void set_cachedAbsoluteUri_15(String_t* value)
	{
		___cachedAbsoluteUri_15 = value;
		Il2CppCodeGenWriteBarrier((&___cachedAbsoluteUri_15), value);
	}

	inline static int32_t get_offset_of_cachedToString_16() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___cachedToString_16)); }
	inline String_t* get_cachedToString_16() const { return ___cachedToString_16; }
	inline String_t** get_address_of_cachedToString_16() { return &___cachedToString_16; }
	inline void set_cachedToString_16(String_t* value)
	{
		___cachedToString_16 = value;
		Il2CppCodeGenWriteBarrier((&___cachedToString_16), value);
	}

	inline static int32_t get_offset_of_cachedLocalPath_17() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___cachedLocalPath_17)); }
	inline String_t* get_cachedLocalPath_17() const { return ___cachedLocalPath_17; }
	inline String_t** get_address_of_cachedLocalPath_17() { return &___cachedLocalPath_17; }
	inline void set_cachedLocalPath_17(String_t* value)
	{
		___cachedLocalPath_17 = value;
		Il2CppCodeGenWriteBarrier((&___cachedLocalPath_17), value);
	}

	inline static int32_t get_offset_of_cachedHashCode_18() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___cachedHashCode_18)); }
	inline int32_t get_cachedHashCode_18() const { return ___cachedHashCode_18; }
	inline int32_t* get_address_of_cachedHashCode_18() { return &___cachedHashCode_18; }
	inline void set_cachedHashCode_18(int32_t value)
	{
		___cachedHashCode_18 = value;
	}

	inline static int32_t get_offset_of_parser_32() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___parser_32)); }
	inline UriParser_t3890150400 * get_parser_32() const { return ___parser_32; }
	inline UriParser_t3890150400 ** get_address_of_parser_32() { return &___parser_32; }
	inline void set_parser_32(UriParser_t3890150400 * value)
	{
		___parser_32 = value;
		Il2CppCodeGenWriteBarrier((&___parser_32), value);
	}
};

struct Uri_t100236324_StaticFields
{
public:
	// System.String System.Uri::hexUpperChars
	String_t* ___hexUpperChars_19;
	// System.String System.Uri::SchemeDelimiter
	String_t* ___SchemeDelimiter_20;
	// System.String System.Uri::UriSchemeFile
	String_t* ___UriSchemeFile_21;
	// System.String System.Uri::UriSchemeFtp
	String_t* ___UriSchemeFtp_22;
	// System.String System.Uri::UriSchemeGopher
	String_t* ___UriSchemeGopher_23;
	// System.String System.Uri::UriSchemeHttp
	String_t* ___UriSchemeHttp_24;
	// System.String System.Uri::UriSchemeHttps
	String_t* ___UriSchemeHttps_25;
	// System.String System.Uri::UriSchemeMailto
	String_t* ___UriSchemeMailto_26;
	// System.String System.Uri::UriSchemeNews
	String_t* ___UriSchemeNews_27;
	// System.String System.Uri::UriSchemeNntp
	String_t* ___UriSchemeNntp_28;
	// System.String System.Uri::UriSchemeNetPipe
	String_t* ___UriSchemeNetPipe_29;
	// System.String System.Uri::UriSchemeNetTcp
	String_t* ___UriSchemeNetTcp_30;
	// System.Uri/UriScheme[] System.Uri::schemes
	UriSchemeU5BU5D_t2082808316* ___schemes_31;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Uri::<>f__switch$map12
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map12_33;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Uri::<>f__switch$map13
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map13_34;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Uri::<>f__switch$map14
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map14_35;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Uri::<>f__switch$map15
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map15_36;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Uri::<>f__switch$map16
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map16_37;

public:
	inline static int32_t get_offset_of_hexUpperChars_19() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___hexUpperChars_19)); }
	inline String_t* get_hexUpperChars_19() const { return ___hexUpperChars_19; }
	inline String_t** get_address_of_hexUpperChars_19() { return &___hexUpperChars_19; }
	inline void set_hexUpperChars_19(String_t* value)
	{
		___hexUpperChars_19 = value;
		Il2CppCodeGenWriteBarrier((&___hexUpperChars_19), value);
	}

	inline static int32_t get_offset_of_SchemeDelimiter_20() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___SchemeDelimiter_20)); }
	inline String_t* get_SchemeDelimiter_20() const { return ___SchemeDelimiter_20; }
	inline String_t** get_address_of_SchemeDelimiter_20() { return &___SchemeDelimiter_20; }
	inline void set_SchemeDelimiter_20(String_t* value)
	{
		___SchemeDelimiter_20 = value;
		Il2CppCodeGenWriteBarrier((&___SchemeDelimiter_20), value);
	}

	inline static int32_t get_offset_of_UriSchemeFile_21() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeFile_21)); }
	inline String_t* get_UriSchemeFile_21() const { return ___UriSchemeFile_21; }
	inline String_t** get_address_of_UriSchemeFile_21() { return &___UriSchemeFile_21; }
	inline void set_UriSchemeFile_21(String_t* value)
	{
		___UriSchemeFile_21 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeFile_21), value);
	}

	inline static int32_t get_offset_of_UriSchemeFtp_22() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeFtp_22)); }
	inline String_t* get_UriSchemeFtp_22() const { return ___UriSchemeFtp_22; }
	inline String_t** get_address_of_UriSchemeFtp_22() { return &___UriSchemeFtp_22; }
	inline void set_UriSchemeFtp_22(String_t* value)
	{
		___UriSchemeFtp_22 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeFtp_22), value);
	}

	inline static int32_t get_offset_of_UriSchemeGopher_23() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeGopher_23)); }
	inline String_t* get_UriSchemeGopher_23() const { return ___UriSchemeGopher_23; }
	inline String_t** get_address_of_UriSchemeGopher_23() { return &___UriSchemeGopher_23; }
	inline void set_UriSchemeGopher_23(String_t* value)
	{
		___UriSchemeGopher_23 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeGopher_23), value);
	}

	inline static int32_t get_offset_of_UriSchemeHttp_24() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeHttp_24)); }
	inline String_t* get_UriSchemeHttp_24() const { return ___UriSchemeHttp_24; }
	inline String_t** get_address_of_UriSchemeHttp_24() { return &___UriSchemeHttp_24; }
	inline void set_UriSchemeHttp_24(String_t* value)
	{
		___UriSchemeHttp_24 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeHttp_24), value);
	}

	inline static int32_t get_offset_of_UriSchemeHttps_25() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeHttps_25)); }
	inline String_t* get_UriSchemeHttps_25() const { return ___UriSchemeHttps_25; }
	inline String_t** get_address_of_UriSchemeHttps_25() { return &___UriSchemeHttps_25; }
	inline void set_UriSchemeHttps_25(String_t* value)
	{
		___UriSchemeHttps_25 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeHttps_25), value);
	}

	inline static int32_t get_offset_of_UriSchemeMailto_26() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeMailto_26)); }
	inline String_t* get_UriSchemeMailto_26() const { return ___UriSchemeMailto_26; }
	inline String_t** get_address_of_UriSchemeMailto_26() { return &___UriSchemeMailto_26; }
	inline void set_UriSchemeMailto_26(String_t* value)
	{
		___UriSchemeMailto_26 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeMailto_26), value);
	}

	inline static int32_t get_offset_of_UriSchemeNews_27() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeNews_27)); }
	inline String_t* get_UriSchemeNews_27() const { return ___UriSchemeNews_27; }
	inline String_t** get_address_of_UriSchemeNews_27() { return &___UriSchemeNews_27; }
	inline void set_UriSchemeNews_27(String_t* value)
	{
		___UriSchemeNews_27 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeNews_27), value);
	}

	inline static int32_t get_offset_of_UriSchemeNntp_28() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeNntp_28)); }
	inline String_t* get_UriSchemeNntp_28() const { return ___UriSchemeNntp_28; }
	inline String_t** get_address_of_UriSchemeNntp_28() { return &___UriSchemeNntp_28; }
	inline void set_UriSchemeNntp_28(String_t* value)
	{
		___UriSchemeNntp_28 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeNntp_28), value);
	}

	inline static int32_t get_offset_of_UriSchemeNetPipe_29() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeNetPipe_29)); }
	inline String_t* get_UriSchemeNetPipe_29() const { return ___UriSchemeNetPipe_29; }
	inline String_t** get_address_of_UriSchemeNetPipe_29() { return &___UriSchemeNetPipe_29; }
	inline void set_UriSchemeNetPipe_29(String_t* value)
	{
		___UriSchemeNetPipe_29 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeNetPipe_29), value);
	}

	inline static int32_t get_offset_of_UriSchemeNetTcp_30() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeNetTcp_30)); }
	inline String_t* get_UriSchemeNetTcp_30() const { return ___UriSchemeNetTcp_30; }
	inline String_t** get_address_of_UriSchemeNetTcp_30() { return &___UriSchemeNetTcp_30; }
	inline void set_UriSchemeNetTcp_30(String_t* value)
	{
		___UriSchemeNetTcp_30 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeNetTcp_30), value);
	}

	inline static int32_t get_offset_of_schemes_31() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___schemes_31)); }
	inline UriSchemeU5BU5D_t2082808316* get_schemes_31() const { return ___schemes_31; }
	inline UriSchemeU5BU5D_t2082808316** get_address_of_schemes_31() { return &___schemes_31; }
	inline void set_schemes_31(UriSchemeU5BU5D_t2082808316* value)
	{
		___schemes_31 = value;
		Il2CppCodeGenWriteBarrier((&___schemes_31), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map12_33() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___U3CU3Ef__switchU24map12_33)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map12_33() const { return ___U3CU3Ef__switchU24map12_33; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map12_33() { return &___U3CU3Ef__switchU24map12_33; }
	inline void set_U3CU3Ef__switchU24map12_33(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map12_33 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map12_33), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map13_34() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___U3CU3Ef__switchU24map13_34)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map13_34() const { return ___U3CU3Ef__switchU24map13_34; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map13_34() { return &___U3CU3Ef__switchU24map13_34; }
	inline void set_U3CU3Ef__switchU24map13_34(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map13_34 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map13_34), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map14_35() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___U3CU3Ef__switchU24map14_35)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map14_35() const { return ___U3CU3Ef__switchU24map14_35; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map14_35() { return &___U3CU3Ef__switchU24map14_35; }
	inline void set_U3CU3Ef__switchU24map14_35(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map14_35 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map14_35), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map15_36() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___U3CU3Ef__switchU24map15_36)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map15_36() const { return ___U3CU3Ef__switchU24map15_36; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map15_36() { return &___U3CU3Ef__switchU24map15_36; }
	inline void set_U3CU3Ef__switchU24map15_36(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map15_36 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map15_36), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map16_37() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___U3CU3Ef__switchU24map16_37)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map16_37() const { return ___U3CU3Ef__switchU24map16_37; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map16_37() { return &___U3CU3Ef__switchU24map16_37; }
	inline void set_U3CU3Ef__switchU24map16_37(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map16_37 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map16_37), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // URI_T100236324_H
#ifndef SERIALIZATIONINFO_T950877179_H
#define SERIALIZATIONINFO_T950877179_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.SerializationInfo
struct  SerializationInfo_t950877179  : public RuntimeObject
{
public:
	// System.Collections.Hashtable System.Runtime.Serialization.SerializationInfo::serialized
	Hashtable_t1853889766 * ___serialized_0;
	// System.Collections.ArrayList System.Runtime.Serialization.SerializationInfo::values
	ArrayList_t2718874744 * ___values_1;
	// System.String System.Runtime.Serialization.SerializationInfo::assemblyName
	String_t* ___assemblyName_2;
	// System.String System.Runtime.Serialization.SerializationInfo::fullTypeName
	String_t* ___fullTypeName_3;
	// System.Runtime.Serialization.IFormatterConverter System.Runtime.Serialization.SerializationInfo::converter
	RuntimeObject* ___converter_4;

public:
	inline static int32_t get_offset_of_serialized_0() { return static_cast<int32_t>(offsetof(SerializationInfo_t950877179, ___serialized_0)); }
	inline Hashtable_t1853889766 * get_serialized_0() const { return ___serialized_0; }
	inline Hashtable_t1853889766 ** get_address_of_serialized_0() { return &___serialized_0; }
	inline void set_serialized_0(Hashtable_t1853889766 * value)
	{
		___serialized_0 = value;
		Il2CppCodeGenWriteBarrier((&___serialized_0), value);
	}

	inline static int32_t get_offset_of_values_1() { return static_cast<int32_t>(offsetof(SerializationInfo_t950877179, ___values_1)); }
	inline ArrayList_t2718874744 * get_values_1() const { return ___values_1; }
	inline ArrayList_t2718874744 ** get_address_of_values_1() { return &___values_1; }
	inline void set_values_1(ArrayList_t2718874744 * value)
	{
		___values_1 = value;
		Il2CppCodeGenWriteBarrier((&___values_1), value);
	}

	inline static int32_t get_offset_of_assemblyName_2() { return static_cast<int32_t>(offsetof(SerializationInfo_t950877179, ___assemblyName_2)); }
	inline String_t* get_assemblyName_2() const { return ___assemblyName_2; }
	inline String_t** get_address_of_assemblyName_2() { return &___assemblyName_2; }
	inline void set_assemblyName_2(String_t* value)
	{
		___assemblyName_2 = value;
		Il2CppCodeGenWriteBarrier((&___assemblyName_2), value);
	}

	inline static int32_t get_offset_of_fullTypeName_3() { return static_cast<int32_t>(offsetof(SerializationInfo_t950877179, ___fullTypeName_3)); }
	inline String_t* get_fullTypeName_3() const { return ___fullTypeName_3; }
	inline String_t** get_address_of_fullTypeName_3() { return &___fullTypeName_3; }
	inline void set_fullTypeName_3(String_t* value)
	{
		___fullTypeName_3 = value;
		Il2CppCodeGenWriteBarrier((&___fullTypeName_3), value);
	}

	inline static int32_t get_offset_of_converter_4() { return static_cast<int32_t>(offsetof(SerializationInfo_t950877179, ___converter_4)); }
	inline RuntimeObject* get_converter_4() const { return ___converter_4; }
	inline RuntimeObject** get_address_of_converter_4() { return &___converter_4; }
	inline void set_converter_4(RuntimeObject* value)
	{
		___converter_4 = value;
		Il2CppCodeGenWriteBarrier((&___converter_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZATIONINFO_T950877179_H
#ifndef XMLNAMETABLE_T71772148_H
#define XMLNAMETABLE_T71772148_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlNameTable
struct  XmlNameTable_t71772148  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLNAMETABLE_T71772148_H
#ifndef COMPILER_T485846590_H
#define COMPILER_T485846590_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Xml.Xsl.Compiler
struct  Compiler_t485846590  : public RuntimeObject
{
public:
	// System.Collections.ArrayList Mono.Xml.Xsl.Compiler::inputStack
	ArrayList_t2718874744 * ___inputStack_1;
	// System.Xml.XPath.XPathNavigator Mono.Xml.Xsl.Compiler::currentInput
	XPathNavigator_t787956054 * ___currentInput_2;
	// System.Collections.Stack Mono.Xml.Xsl.Compiler::styleStack
	Stack_t2329662280 * ___styleStack_3;
	// Mono.Xml.Xsl.XslStylesheet Mono.Xml.Xsl.Compiler::currentStyle
	XslStylesheet_t113441946 * ___currentStyle_4;
	// System.Collections.Hashtable Mono.Xml.Xsl.Compiler::keys
	Hashtable_t1853889766 * ___keys_5;
	// System.Collections.Hashtable Mono.Xml.Xsl.Compiler::globalVariables
	Hashtable_t1853889766 * ___globalVariables_6;
	// System.Collections.Hashtable Mono.Xml.Xsl.Compiler::attrSets
	Hashtable_t1853889766 * ___attrSets_7;
	// System.Xml.XmlNamespaceManager Mono.Xml.Xsl.Compiler::nsMgr
	XmlNamespaceManager_t418790500 * ___nsMgr_8;
	// System.Xml.XmlResolver Mono.Xml.Xsl.Compiler::res
	XmlResolver_t626023767 * ___res_9;
	// System.Security.Policy.Evidence Mono.Xml.Xsl.Compiler::evidence
	Evidence_t2008144148 * ___evidence_10;
	// Mono.Xml.Xsl.XslStylesheet Mono.Xml.Xsl.Compiler::rootStyle
	XslStylesheet_t113441946 * ___rootStyle_11;
	// System.Collections.Hashtable Mono.Xml.Xsl.Compiler::outputs
	Hashtable_t1853889766 * ___outputs_12;
	// System.Boolean Mono.Xml.Xsl.Compiler::keyCompilationMode
	bool ___keyCompilationMode_13;
	// System.String Mono.Xml.Xsl.Compiler::stylesheetVersion
	String_t* ___stylesheetVersion_14;
	// Mono.Xml.Xsl.XsltDebuggerWrapper Mono.Xml.Xsl.Compiler::debugger
	XsltDebuggerWrapper_t4148725768 * ___debugger_15;
	// Mono.Xml.Xsl.MSXslScriptManager Mono.Xml.Xsl.Compiler::msScripts
	MSXslScriptManager_t4018040365 * ___msScripts_16;
	// Mono.Xml.XPath.XPathParser Mono.Xml.Xsl.Compiler::xpathParser
	XPathParser_t4136515887 * ___xpathParser_17;
	// Mono.Xml.Xsl.XsltPatternParser Mono.Xml.Xsl.Compiler::patternParser
	XsltPatternParser_t433897766 * ___patternParser_18;
	// Mono.Xml.Xsl.VariableScope Mono.Xml.Xsl.Compiler::curVarScope
	VariableScope_t3522028429 * ___curVarScope_19;
	// System.Collections.Hashtable Mono.Xml.Xsl.Compiler::decimalFormats
	Hashtable_t1853889766 * ___decimalFormats_20;

public:
	inline static int32_t get_offset_of_inputStack_1() { return static_cast<int32_t>(offsetof(Compiler_t485846590, ___inputStack_1)); }
	inline ArrayList_t2718874744 * get_inputStack_1() const { return ___inputStack_1; }
	inline ArrayList_t2718874744 ** get_address_of_inputStack_1() { return &___inputStack_1; }
	inline void set_inputStack_1(ArrayList_t2718874744 * value)
	{
		___inputStack_1 = value;
		Il2CppCodeGenWriteBarrier((&___inputStack_1), value);
	}

	inline static int32_t get_offset_of_currentInput_2() { return static_cast<int32_t>(offsetof(Compiler_t485846590, ___currentInput_2)); }
	inline XPathNavigator_t787956054 * get_currentInput_2() const { return ___currentInput_2; }
	inline XPathNavigator_t787956054 ** get_address_of_currentInput_2() { return &___currentInput_2; }
	inline void set_currentInput_2(XPathNavigator_t787956054 * value)
	{
		___currentInput_2 = value;
		Il2CppCodeGenWriteBarrier((&___currentInput_2), value);
	}

	inline static int32_t get_offset_of_styleStack_3() { return static_cast<int32_t>(offsetof(Compiler_t485846590, ___styleStack_3)); }
	inline Stack_t2329662280 * get_styleStack_3() const { return ___styleStack_3; }
	inline Stack_t2329662280 ** get_address_of_styleStack_3() { return &___styleStack_3; }
	inline void set_styleStack_3(Stack_t2329662280 * value)
	{
		___styleStack_3 = value;
		Il2CppCodeGenWriteBarrier((&___styleStack_3), value);
	}

	inline static int32_t get_offset_of_currentStyle_4() { return static_cast<int32_t>(offsetof(Compiler_t485846590, ___currentStyle_4)); }
	inline XslStylesheet_t113441946 * get_currentStyle_4() const { return ___currentStyle_4; }
	inline XslStylesheet_t113441946 ** get_address_of_currentStyle_4() { return &___currentStyle_4; }
	inline void set_currentStyle_4(XslStylesheet_t113441946 * value)
	{
		___currentStyle_4 = value;
		Il2CppCodeGenWriteBarrier((&___currentStyle_4), value);
	}

	inline static int32_t get_offset_of_keys_5() { return static_cast<int32_t>(offsetof(Compiler_t485846590, ___keys_5)); }
	inline Hashtable_t1853889766 * get_keys_5() const { return ___keys_5; }
	inline Hashtable_t1853889766 ** get_address_of_keys_5() { return &___keys_5; }
	inline void set_keys_5(Hashtable_t1853889766 * value)
	{
		___keys_5 = value;
		Il2CppCodeGenWriteBarrier((&___keys_5), value);
	}

	inline static int32_t get_offset_of_globalVariables_6() { return static_cast<int32_t>(offsetof(Compiler_t485846590, ___globalVariables_6)); }
	inline Hashtable_t1853889766 * get_globalVariables_6() const { return ___globalVariables_6; }
	inline Hashtable_t1853889766 ** get_address_of_globalVariables_6() { return &___globalVariables_6; }
	inline void set_globalVariables_6(Hashtable_t1853889766 * value)
	{
		___globalVariables_6 = value;
		Il2CppCodeGenWriteBarrier((&___globalVariables_6), value);
	}

	inline static int32_t get_offset_of_attrSets_7() { return static_cast<int32_t>(offsetof(Compiler_t485846590, ___attrSets_7)); }
	inline Hashtable_t1853889766 * get_attrSets_7() const { return ___attrSets_7; }
	inline Hashtable_t1853889766 ** get_address_of_attrSets_7() { return &___attrSets_7; }
	inline void set_attrSets_7(Hashtable_t1853889766 * value)
	{
		___attrSets_7 = value;
		Il2CppCodeGenWriteBarrier((&___attrSets_7), value);
	}

	inline static int32_t get_offset_of_nsMgr_8() { return static_cast<int32_t>(offsetof(Compiler_t485846590, ___nsMgr_8)); }
	inline XmlNamespaceManager_t418790500 * get_nsMgr_8() const { return ___nsMgr_8; }
	inline XmlNamespaceManager_t418790500 ** get_address_of_nsMgr_8() { return &___nsMgr_8; }
	inline void set_nsMgr_8(XmlNamespaceManager_t418790500 * value)
	{
		___nsMgr_8 = value;
		Il2CppCodeGenWriteBarrier((&___nsMgr_8), value);
	}

	inline static int32_t get_offset_of_res_9() { return static_cast<int32_t>(offsetof(Compiler_t485846590, ___res_9)); }
	inline XmlResolver_t626023767 * get_res_9() const { return ___res_9; }
	inline XmlResolver_t626023767 ** get_address_of_res_9() { return &___res_9; }
	inline void set_res_9(XmlResolver_t626023767 * value)
	{
		___res_9 = value;
		Il2CppCodeGenWriteBarrier((&___res_9), value);
	}

	inline static int32_t get_offset_of_evidence_10() { return static_cast<int32_t>(offsetof(Compiler_t485846590, ___evidence_10)); }
	inline Evidence_t2008144148 * get_evidence_10() const { return ___evidence_10; }
	inline Evidence_t2008144148 ** get_address_of_evidence_10() { return &___evidence_10; }
	inline void set_evidence_10(Evidence_t2008144148 * value)
	{
		___evidence_10 = value;
		Il2CppCodeGenWriteBarrier((&___evidence_10), value);
	}

	inline static int32_t get_offset_of_rootStyle_11() { return static_cast<int32_t>(offsetof(Compiler_t485846590, ___rootStyle_11)); }
	inline XslStylesheet_t113441946 * get_rootStyle_11() const { return ___rootStyle_11; }
	inline XslStylesheet_t113441946 ** get_address_of_rootStyle_11() { return &___rootStyle_11; }
	inline void set_rootStyle_11(XslStylesheet_t113441946 * value)
	{
		___rootStyle_11 = value;
		Il2CppCodeGenWriteBarrier((&___rootStyle_11), value);
	}

	inline static int32_t get_offset_of_outputs_12() { return static_cast<int32_t>(offsetof(Compiler_t485846590, ___outputs_12)); }
	inline Hashtable_t1853889766 * get_outputs_12() const { return ___outputs_12; }
	inline Hashtable_t1853889766 ** get_address_of_outputs_12() { return &___outputs_12; }
	inline void set_outputs_12(Hashtable_t1853889766 * value)
	{
		___outputs_12 = value;
		Il2CppCodeGenWriteBarrier((&___outputs_12), value);
	}

	inline static int32_t get_offset_of_keyCompilationMode_13() { return static_cast<int32_t>(offsetof(Compiler_t485846590, ___keyCompilationMode_13)); }
	inline bool get_keyCompilationMode_13() const { return ___keyCompilationMode_13; }
	inline bool* get_address_of_keyCompilationMode_13() { return &___keyCompilationMode_13; }
	inline void set_keyCompilationMode_13(bool value)
	{
		___keyCompilationMode_13 = value;
	}

	inline static int32_t get_offset_of_stylesheetVersion_14() { return static_cast<int32_t>(offsetof(Compiler_t485846590, ___stylesheetVersion_14)); }
	inline String_t* get_stylesheetVersion_14() const { return ___stylesheetVersion_14; }
	inline String_t** get_address_of_stylesheetVersion_14() { return &___stylesheetVersion_14; }
	inline void set_stylesheetVersion_14(String_t* value)
	{
		___stylesheetVersion_14 = value;
		Il2CppCodeGenWriteBarrier((&___stylesheetVersion_14), value);
	}

	inline static int32_t get_offset_of_debugger_15() { return static_cast<int32_t>(offsetof(Compiler_t485846590, ___debugger_15)); }
	inline XsltDebuggerWrapper_t4148725768 * get_debugger_15() const { return ___debugger_15; }
	inline XsltDebuggerWrapper_t4148725768 ** get_address_of_debugger_15() { return &___debugger_15; }
	inline void set_debugger_15(XsltDebuggerWrapper_t4148725768 * value)
	{
		___debugger_15 = value;
		Il2CppCodeGenWriteBarrier((&___debugger_15), value);
	}

	inline static int32_t get_offset_of_msScripts_16() { return static_cast<int32_t>(offsetof(Compiler_t485846590, ___msScripts_16)); }
	inline MSXslScriptManager_t4018040365 * get_msScripts_16() const { return ___msScripts_16; }
	inline MSXslScriptManager_t4018040365 ** get_address_of_msScripts_16() { return &___msScripts_16; }
	inline void set_msScripts_16(MSXslScriptManager_t4018040365 * value)
	{
		___msScripts_16 = value;
		Il2CppCodeGenWriteBarrier((&___msScripts_16), value);
	}

	inline static int32_t get_offset_of_xpathParser_17() { return static_cast<int32_t>(offsetof(Compiler_t485846590, ___xpathParser_17)); }
	inline XPathParser_t4136515887 * get_xpathParser_17() const { return ___xpathParser_17; }
	inline XPathParser_t4136515887 ** get_address_of_xpathParser_17() { return &___xpathParser_17; }
	inline void set_xpathParser_17(XPathParser_t4136515887 * value)
	{
		___xpathParser_17 = value;
		Il2CppCodeGenWriteBarrier((&___xpathParser_17), value);
	}

	inline static int32_t get_offset_of_patternParser_18() { return static_cast<int32_t>(offsetof(Compiler_t485846590, ___patternParser_18)); }
	inline XsltPatternParser_t433897766 * get_patternParser_18() const { return ___patternParser_18; }
	inline XsltPatternParser_t433897766 ** get_address_of_patternParser_18() { return &___patternParser_18; }
	inline void set_patternParser_18(XsltPatternParser_t433897766 * value)
	{
		___patternParser_18 = value;
		Il2CppCodeGenWriteBarrier((&___patternParser_18), value);
	}

	inline static int32_t get_offset_of_curVarScope_19() { return static_cast<int32_t>(offsetof(Compiler_t485846590, ___curVarScope_19)); }
	inline VariableScope_t3522028429 * get_curVarScope_19() const { return ___curVarScope_19; }
	inline VariableScope_t3522028429 ** get_address_of_curVarScope_19() { return &___curVarScope_19; }
	inline void set_curVarScope_19(VariableScope_t3522028429 * value)
	{
		___curVarScope_19 = value;
		Il2CppCodeGenWriteBarrier((&___curVarScope_19), value);
	}

	inline static int32_t get_offset_of_decimalFormats_20() { return static_cast<int32_t>(offsetof(Compiler_t485846590, ___decimalFormats_20)); }
	inline Hashtable_t1853889766 * get_decimalFormats_20() const { return ___decimalFormats_20; }
	inline Hashtable_t1853889766 ** get_address_of_decimalFormats_20() { return &___decimalFormats_20; }
	inline void set_decimalFormats_20(Hashtable_t1853889766 * value)
	{
		___decimalFormats_20 = value;
		Il2CppCodeGenWriteBarrier((&___decimalFormats_20), value);
	}
};

struct Compiler_t485846590_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Xml.Xsl.Compiler::<>f__switch$mapE
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24mapE_21;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Xml.Xsl.Compiler::<>f__switch$mapF
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24mapF_22;

public:
	inline static int32_t get_offset_of_U3CU3Ef__switchU24mapE_21() { return static_cast<int32_t>(offsetof(Compiler_t485846590_StaticFields, ___U3CU3Ef__switchU24mapE_21)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24mapE_21() const { return ___U3CU3Ef__switchU24mapE_21; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24mapE_21() { return &___U3CU3Ef__switchU24mapE_21; }
	inline void set_U3CU3Ef__switchU24mapE_21(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24mapE_21 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24mapE_21), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24mapF_22() { return static_cast<int32_t>(offsetof(Compiler_t485846590_StaticFields, ___U3CU3Ef__switchU24mapF_22)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24mapF_22() const { return ___U3CU3Ef__switchU24mapF_22; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24mapF_22() { return &___U3CU3Ef__switchU24mapF_22; }
	inline void set_U3CU3Ef__switchU24mapF_22(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24mapF_22 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24mapF_22), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPILER_T485846590_H
#ifndef XMLQUALIFIEDNAME_T2760654312_H
#define XMLQUALIFIEDNAME_T2760654312_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlQualifiedName
struct  XmlQualifiedName_t2760654312  : public RuntimeObject
{
public:
	// System.String System.Xml.XmlQualifiedName::name
	String_t* ___name_1;
	// System.String System.Xml.XmlQualifiedName::ns
	String_t* ___ns_2;
	// System.Int32 System.Xml.XmlQualifiedName::hash
	int32_t ___hash_3;

public:
	inline static int32_t get_offset_of_name_1() { return static_cast<int32_t>(offsetof(XmlQualifiedName_t2760654312, ___name_1)); }
	inline String_t* get_name_1() const { return ___name_1; }
	inline String_t** get_address_of_name_1() { return &___name_1; }
	inline void set_name_1(String_t* value)
	{
		___name_1 = value;
		Il2CppCodeGenWriteBarrier((&___name_1), value);
	}

	inline static int32_t get_offset_of_ns_2() { return static_cast<int32_t>(offsetof(XmlQualifiedName_t2760654312, ___ns_2)); }
	inline String_t* get_ns_2() const { return ___ns_2; }
	inline String_t** get_address_of_ns_2() { return &___ns_2; }
	inline void set_ns_2(String_t* value)
	{
		___ns_2 = value;
		Il2CppCodeGenWriteBarrier((&___ns_2), value);
	}

	inline static int32_t get_offset_of_hash_3() { return static_cast<int32_t>(offsetof(XmlQualifiedName_t2760654312, ___hash_3)); }
	inline int32_t get_hash_3() const { return ___hash_3; }
	inline int32_t* get_address_of_hash_3() { return &___hash_3; }
	inline void set_hash_3(int32_t value)
	{
		___hash_3 = value;
	}
};

struct XmlQualifiedName_t2760654312_StaticFields
{
public:
	// System.Xml.XmlQualifiedName System.Xml.XmlQualifiedName::Empty
	XmlQualifiedName_t2760654312 * ___Empty_0;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(XmlQualifiedName_t2760654312_StaticFields, ___Empty_0)); }
	inline XmlQualifiedName_t2760654312 * get_Empty_0() const { return ___Empty_0; }
	inline XmlQualifiedName_t2760654312 ** get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(XmlQualifiedName_t2760654312 * value)
	{
		___Empty_0 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLQUALIFIEDNAME_T2760654312_H
#ifndef XPATHSORTERS_T698127628_H
#define XPATHSORTERS_T698127628_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.XPathSorters
struct  XPathSorters_t698127628  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.Xml.XPath.XPathSorters::_rgSorters
	ArrayList_t2718874744 * ____rgSorters_0;

public:
	inline static int32_t get_offset_of__rgSorters_0() { return static_cast<int32_t>(offsetof(XPathSorters_t698127628, ____rgSorters_0)); }
	inline ArrayList_t2718874744 * get__rgSorters_0() const { return ____rgSorters_0; }
	inline ArrayList_t2718874744 ** get_address_of__rgSorters_0() { return &____rgSorters_0; }
	inline void set__rgSorters_0(ArrayList_t2718874744 * value)
	{
		____rgSorters_0 = value;
		Il2CppCodeGenWriteBarrier((&____rgSorters_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XPATHSORTERS_T698127628_H
#ifndef XPATHNAVIGATORCOMPARER_T2421573191_H
#define XPATHNAVIGATORCOMPARER_T2421573191_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.XPathNavigatorComparer
struct  XPathNavigatorComparer_t2421573191  : public RuntimeObject
{
public:

public:
};

struct XPathNavigatorComparer_t2421573191_StaticFields
{
public:
	// System.Xml.XPath.XPathNavigatorComparer System.Xml.XPath.XPathNavigatorComparer::Instance
	XPathNavigatorComparer_t2421573191 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(XPathNavigatorComparer_t2421573191_StaticFields, ___Instance_0)); }
	inline XPathNavigatorComparer_t2421573191 * get_Instance_0() const { return ___Instance_0; }
	inline XPathNavigatorComparer_t2421573191 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(XPathNavigatorComparer_t2421573191 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XPATHNAVIGATORCOMPARER_T2421573191_H
#ifndef U3CGETENUMERATORU3EC__ITERATOR2_T90454087_H
#define U3CGETENUMERATORU3EC__ITERATOR2_T90454087_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.XPathNodeIterator/<GetEnumerator>c__Iterator2
struct  U3CGetEnumeratorU3Ec__Iterator2_t90454087  : public RuntimeObject
{
public:
	// System.Int32 System.Xml.XPath.XPathNodeIterator/<GetEnumerator>c__Iterator2::$PC
	int32_t ___U24PC_0;
	// System.Object System.Xml.XPath.XPathNodeIterator/<GetEnumerator>c__Iterator2::$current
	RuntimeObject * ___U24current_1;
	// System.Xml.XPath.XPathNodeIterator System.Xml.XPath.XPathNodeIterator/<GetEnumerator>c__Iterator2::<>f__this
	XPathNodeIterator_t3667290188 * ___U3CU3Ef__this_2;

public:
	inline static int32_t get_offset_of_U24PC_0() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ec__Iterator2_t90454087, ___U24PC_0)); }
	inline int32_t get_U24PC_0() const { return ___U24PC_0; }
	inline int32_t* get_address_of_U24PC_0() { return &___U24PC_0; }
	inline void set_U24PC_0(int32_t value)
	{
		___U24PC_0 = value;
	}

	inline static int32_t get_offset_of_U24current_1() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ec__Iterator2_t90454087, ___U24current_1)); }
	inline RuntimeObject * get_U24current_1() const { return ___U24current_1; }
	inline RuntimeObject ** get_address_of_U24current_1() { return &___U24current_1; }
	inline void set_U24current_1(RuntimeObject * value)
	{
		___U24current_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_1), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__this_2() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ec__Iterator2_t90454087, ___U3CU3Ef__this_2)); }
	inline XPathNodeIterator_t3667290188 * get_U3CU3Ef__this_2() const { return ___U3CU3Ef__this_2; }
	inline XPathNodeIterator_t3667290188 ** get_address_of_U3CU3Ef__this_2() { return &___U3CU3Ef__this_2; }
	inline void set_U3CU3Ef__this_2(XPathNodeIterator_t3667290188 * value)
	{
		___U3CU3Ef__this_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__this_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CGETENUMERATORU3EC__ITERATOR2_T90454087_H
#ifndef XPATHPARSER_T4136515887_H
#define XPATHPARSER_T4136515887_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Xml.XPath.XPathParser
struct  XPathParser_t4136515887  : public RuntimeObject
{
public:
	// System.Xml.Xsl.IStaticXsltContext Mono.Xml.XPath.XPathParser::Context
	RuntimeObject* ___Context_0;
	// System.IO.TextWriter Mono.Xml.XPath.XPathParser::ErrorOutput
	TextWriter_t3478189236 * ___ErrorOutput_2;
	// System.Int32 Mono.Xml.XPath.XPathParser::eof_token
	int32_t ___eof_token_3;
	// Mono.Xml.XPath.yydebug.yyDebug Mono.Xml.XPath.XPathParser::debug
	RuntimeObject* ___debug_4;
	// System.Int32 Mono.Xml.XPath.XPathParser::yyExpectingState
	int32_t ___yyExpectingState_7;
	// System.Int32 Mono.Xml.XPath.XPathParser::yyMax
	int32_t ___yyMax_8;

public:
	inline static int32_t get_offset_of_Context_0() { return static_cast<int32_t>(offsetof(XPathParser_t4136515887, ___Context_0)); }
	inline RuntimeObject* get_Context_0() const { return ___Context_0; }
	inline RuntimeObject** get_address_of_Context_0() { return &___Context_0; }
	inline void set_Context_0(RuntimeObject* value)
	{
		___Context_0 = value;
		Il2CppCodeGenWriteBarrier((&___Context_0), value);
	}

	inline static int32_t get_offset_of_ErrorOutput_2() { return static_cast<int32_t>(offsetof(XPathParser_t4136515887, ___ErrorOutput_2)); }
	inline TextWriter_t3478189236 * get_ErrorOutput_2() const { return ___ErrorOutput_2; }
	inline TextWriter_t3478189236 ** get_address_of_ErrorOutput_2() { return &___ErrorOutput_2; }
	inline void set_ErrorOutput_2(TextWriter_t3478189236 * value)
	{
		___ErrorOutput_2 = value;
		Il2CppCodeGenWriteBarrier((&___ErrorOutput_2), value);
	}

	inline static int32_t get_offset_of_eof_token_3() { return static_cast<int32_t>(offsetof(XPathParser_t4136515887, ___eof_token_3)); }
	inline int32_t get_eof_token_3() const { return ___eof_token_3; }
	inline int32_t* get_address_of_eof_token_3() { return &___eof_token_3; }
	inline void set_eof_token_3(int32_t value)
	{
		___eof_token_3 = value;
	}

	inline static int32_t get_offset_of_debug_4() { return static_cast<int32_t>(offsetof(XPathParser_t4136515887, ___debug_4)); }
	inline RuntimeObject* get_debug_4() const { return ___debug_4; }
	inline RuntimeObject** get_address_of_debug_4() { return &___debug_4; }
	inline void set_debug_4(RuntimeObject* value)
	{
		___debug_4 = value;
		Il2CppCodeGenWriteBarrier((&___debug_4), value);
	}

	inline static int32_t get_offset_of_yyExpectingState_7() { return static_cast<int32_t>(offsetof(XPathParser_t4136515887, ___yyExpectingState_7)); }
	inline int32_t get_yyExpectingState_7() const { return ___yyExpectingState_7; }
	inline int32_t* get_address_of_yyExpectingState_7() { return &___yyExpectingState_7; }
	inline void set_yyExpectingState_7(int32_t value)
	{
		___yyExpectingState_7 = value;
	}

	inline static int32_t get_offset_of_yyMax_8() { return static_cast<int32_t>(offsetof(XPathParser_t4136515887, ___yyMax_8)); }
	inline int32_t get_yyMax_8() const { return ___yyMax_8; }
	inline int32_t* get_address_of_yyMax_8() { return &___yyMax_8; }
	inline void set_yyMax_8(int32_t value)
	{
		___yyMax_8 = value;
	}
};

struct XPathParser_t4136515887_StaticFields
{
public:
	// System.Int32 Mono.Xml.XPath.XPathParser::yacc_verbose_flag
	int32_t ___yacc_verbose_flag_1;
	// System.Int32 Mono.Xml.XPath.XPathParser::yyFinal
	int32_t ___yyFinal_5;
	// System.String[] Mono.Xml.XPath.XPathParser::yyNames
	StringU5BU5D_t1281789340* ___yyNames_6;
	// System.Int16[] Mono.Xml.XPath.XPathParser::yyLhs
	Int16U5BU5D_t3686840178* ___yyLhs_9;
	// System.Int16[] Mono.Xml.XPath.XPathParser::yyLen
	Int16U5BU5D_t3686840178* ___yyLen_10;
	// System.Int16[] Mono.Xml.XPath.XPathParser::yyDefRed
	Int16U5BU5D_t3686840178* ___yyDefRed_11;
	// System.Int16[] Mono.Xml.XPath.XPathParser::yyDgoto
	Int16U5BU5D_t3686840178* ___yyDgoto_12;
	// System.Int16[] Mono.Xml.XPath.XPathParser::yySindex
	Int16U5BU5D_t3686840178* ___yySindex_13;
	// System.Int16[] Mono.Xml.XPath.XPathParser::yyRindex
	Int16U5BU5D_t3686840178* ___yyRindex_14;
	// System.Int16[] Mono.Xml.XPath.XPathParser::yyGindex
	Int16U5BU5D_t3686840178* ___yyGindex_15;
	// System.Int16[] Mono.Xml.XPath.XPathParser::yyTable
	Int16U5BU5D_t3686840178* ___yyTable_16;
	// System.Int16[] Mono.Xml.XPath.XPathParser::yyCheck
	Int16U5BU5D_t3686840178* ___yyCheck_17;

public:
	inline static int32_t get_offset_of_yacc_verbose_flag_1() { return static_cast<int32_t>(offsetof(XPathParser_t4136515887_StaticFields, ___yacc_verbose_flag_1)); }
	inline int32_t get_yacc_verbose_flag_1() const { return ___yacc_verbose_flag_1; }
	inline int32_t* get_address_of_yacc_verbose_flag_1() { return &___yacc_verbose_flag_1; }
	inline void set_yacc_verbose_flag_1(int32_t value)
	{
		___yacc_verbose_flag_1 = value;
	}

	inline static int32_t get_offset_of_yyFinal_5() { return static_cast<int32_t>(offsetof(XPathParser_t4136515887_StaticFields, ___yyFinal_5)); }
	inline int32_t get_yyFinal_5() const { return ___yyFinal_5; }
	inline int32_t* get_address_of_yyFinal_5() { return &___yyFinal_5; }
	inline void set_yyFinal_5(int32_t value)
	{
		___yyFinal_5 = value;
	}

	inline static int32_t get_offset_of_yyNames_6() { return static_cast<int32_t>(offsetof(XPathParser_t4136515887_StaticFields, ___yyNames_6)); }
	inline StringU5BU5D_t1281789340* get_yyNames_6() const { return ___yyNames_6; }
	inline StringU5BU5D_t1281789340** get_address_of_yyNames_6() { return &___yyNames_6; }
	inline void set_yyNames_6(StringU5BU5D_t1281789340* value)
	{
		___yyNames_6 = value;
		Il2CppCodeGenWriteBarrier((&___yyNames_6), value);
	}

	inline static int32_t get_offset_of_yyLhs_9() { return static_cast<int32_t>(offsetof(XPathParser_t4136515887_StaticFields, ___yyLhs_9)); }
	inline Int16U5BU5D_t3686840178* get_yyLhs_9() const { return ___yyLhs_9; }
	inline Int16U5BU5D_t3686840178** get_address_of_yyLhs_9() { return &___yyLhs_9; }
	inline void set_yyLhs_9(Int16U5BU5D_t3686840178* value)
	{
		___yyLhs_9 = value;
		Il2CppCodeGenWriteBarrier((&___yyLhs_9), value);
	}

	inline static int32_t get_offset_of_yyLen_10() { return static_cast<int32_t>(offsetof(XPathParser_t4136515887_StaticFields, ___yyLen_10)); }
	inline Int16U5BU5D_t3686840178* get_yyLen_10() const { return ___yyLen_10; }
	inline Int16U5BU5D_t3686840178** get_address_of_yyLen_10() { return &___yyLen_10; }
	inline void set_yyLen_10(Int16U5BU5D_t3686840178* value)
	{
		___yyLen_10 = value;
		Il2CppCodeGenWriteBarrier((&___yyLen_10), value);
	}

	inline static int32_t get_offset_of_yyDefRed_11() { return static_cast<int32_t>(offsetof(XPathParser_t4136515887_StaticFields, ___yyDefRed_11)); }
	inline Int16U5BU5D_t3686840178* get_yyDefRed_11() const { return ___yyDefRed_11; }
	inline Int16U5BU5D_t3686840178** get_address_of_yyDefRed_11() { return &___yyDefRed_11; }
	inline void set_yyDefRed_11(Int16U5BU5D_t3686840178* value)
	{
		___yyDefRed_11 = value;
		Il2CppCodeGenWriteBarrier((&___yyDefRed_11), value);
	}

	inline static int32_t get_offset_of_yyDgoto_12() { return static_cast<int32_t>(offsetof(XPathParser_t4136515887_StaticFields, ___yyDgoto_12)); }
	inline Int16U5BU5D_t3686840178* get_yyDgoto_12() const { return ___yyDgoto_12; }
	inline Int16U5BU5D_t3686840178** get_address_of_yyDgoto_12() { return &___yyDgoto_12; }
	inline void set_yyDgoto_12(Int16U5BU5D_t3686840178* value)
	{
		___yyDgoto_12 = value;
		Il2CppCodeGenWriteBarrier((&___yyDgoto_12), value);
	}

	inline static int32_t get_offset_of_yySindex_13() { return static_cast<int32_t>(offsetof(XPathParser_t4136515887_StaticFields, ___yySindex_13)); }
	inline Int16U5BU5D_t3686840178* get_yySindex_13() const { return ___yySindex_13; }
	inline Int16U5BU5D_t3686840178** get_address_of_yySindex_13() { return &___yySindex_13; }
	inline void set_yySindex_13(Int16U5BU5D_t3686840178* value)
	{
		___yySindex_13 = value;
		Il2CppCodeGenWriteBarrier((&___yySindex_13), value);
	}

	inline static int32_t get_offset_of_yyRindex_14() { return static_cast<int32_t>(offsetof(XPathParser_t4136515887_StaticFields, ___yyRindex_14)); }
	inline Int16U5BU5D_t3686840178* get_yyRindex_14() const { return ___yyRindex_14; }
	inline Int16U5BU5D_t3686840178** get_address_of_yyRindex_14() { return &___yyRindex_14; }
	inline void set_yyRindex_14(Int16U5BU5D_t3686840178* value)
	{
		___yyRindex_14 = value;
		Il2CppCodeGenWriteBarrier((&___yyRindex_14), value);
	}

	inline static int32_t get_offset_of_yyGindex_15() { return static_cast<int32_t>(offsetof(XPathParser_t4136515887_StaticFields, ___yyGindex_15)); }
	inline Int16U5BU5D_t3686840178* get_yyGindex_15() const { return ___yyGindex_15; }
	inline Int16U5BU5D_t3686840178** get_address_of_yyGindex_15() { return &___yyGindex_15; }
	inline void set_yyGindex_15(Int16U5BU5D_t3686840178* value)
	{
		___yyGindex_15 = value;
		Il2CppCodeGenWriteBarrier((&___yyGindex_15), value);
	}

	inline static int32_t get_offset_of_yyTable_16() { return static_cast<int32_t>(offsetof(XPathParser_t4136515887_StaticFields, ___yyTable_16)); }
	inline Int16U5BU5D_t3686840178* get_yyTable_16() const { return ___yyTable_16; }
	inline Int16U5BU5D_t3686840178** get_address_of_yyTable_16() { return &___yyTable_16; }
	inline void set_yyTable_16(Int16U5BU5D_t3686840178* value)
	{
		___yyTable_16 = value;
		Il2CppCodeGenWriteBarrier((&___yyTable_16), value);
	}

	inline static int32_t get_offset_of_yyCheck_17() { return static_cast<int32_t>(offsetof(XPathParser_t4136515887_StaticFields, ___yyCheck_17)); }
	inline Int16U5BU5D_t3686840178* get_yyCheck_17() const { return ___yyCheck_17; }
	inline Int16U5BU5D_t3686840178** get_address_of_yyCheck_17() { return &___yyCheck_17; }
	inline void set_yyCheck_17(Int16U5BU5D_t3686840178* value)
	{
		___yyCheck_17 = value;
		Il2CppCodeGenWriteBarrier((&___yyCheck_17), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XPATHPARSER_T4136515887_H
#ifndef XPATHNODEITERATOR_T3667290188_H
#define XPATHNODEITERATOR_T3667290188_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.XPathNodeIterator
struct  XPathNodeIterator_t3667290188  : public RuntimeObject
{
public:
	// System.Int32 System.Xml.XPath.XPathNodeIterator::_count
	int32_t ____count_0;

public:
	inline static int32_t get_offset_of__count_0() { return static_cast<int32_t>(offsetof(XPathNodeIterator_t3667290188, ____count_0)); }
	inline int32_t get__count_0() const { return ____count_0; }
	inline int32_t* get_address_of__count_0() { return &____count_0; }
	inline void set__count_0(int32_t value)
	{
		____count_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XPATHNODEITERATOR_T3667290188_H
#ifndef XPATHSORTELEMENT_T4237073177_H
#define XPATHSORTELEMENT_T4237073177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.XPathSortElement
struct  XPathSortElement_t4237073177  : public RuntimeObject
{
public:
	// System.Xml.XPath.XPathNavigator System.Xml.XPath.XPathSortElement::Navigator
	XPathNavigator_t787956054 * ___Navigator_0;
	// System.Object[] System.Xml.XPath.XPathSortElement::Values
	ObjectU5BU5D_t2843939325* ___Values_1;

public:
	inline static int32_t get_offset_of_Navigator_0() { return static_cast<int32_t>(offsetof(XPathSortElement_t4237073177, ___Navigator_0)); }
	inline XPathNavigator_t787956054 * get_Navigator_0() const { return ___Navigator_0; }
	inline XPathNavigator_t787956054 ** get_address_of_Navigator_0() { return &___Navigator_0; }
	inline void set_Navigator_0(XPathNavigator_t787956054 * value)
	{
		___Navigator_0 = value;
		Il2CppCodeGenWriteBarrier((&___Navigator_0), value);
	}

	inline static int32_t get_offset_of_Values_1() { return static_cast<int32_t>(offsetof(XPathSortElement_t4237073177, ___Values_1)); }
	inline ObjectU5BU5D_t2843939325* get_Values_1() const { return ___Values_1; }
	inline ObjectU5BU5D_t2843939325** get_address_of_Values_1() { return &___Values_1; }
	inline void set_Values_1(ObjectU5BU5D_t2843939325* value)
	{
		___Values_1 = value;
		Il2CppCodeGenWriteBarrier((&___Values_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XPATHSORTELEMENT_T4237073177_H
#ifndef EXPRESSION_T1452783009_H
#define EXPRESSION_T1452783009_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.Expression
struct  Expression_t1452783009  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXPRESSION_T1452783009_H
#ifndef XPATHNUMBERCOMPARER_T6863540_H
#define XPATHNUMBERCOMPARER_T6863540_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.XPathSorter/XPathNumberComparer
struct  XPathNumberComparer_t6863540  : public RuntimeObject
{
public:
	// System.Int32 System.Xml.XPath.XPathSorter/XPathNumberComparer::_nMulSort
	int32_t ____nMulSort_0;

public:
	inline static int32_t get_offset_of__nMulSort_0() { return static_cast<int32_t>(offsetof(XPathNumberComparer_t6863540, ____nMulSort_0)); }
	inline int32_t get__nMulSort_0() const { return ____nMulSort_0; }
	inline int32_t* get_address_of__nMulSort_0() { return &____nMulSort_0; }
	inline void set__nMulSort_0(int32_t value)
	{
		____nMulSort_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XPATHNUMBERCOMPARER_T6863540_H
#ifndef FUNCTIONARGUMENTS_T3573450773_H
#define FUNCTIONARGUMENTS_T3573450773_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.FunctionArguments
struct  FunctionArguments_t3573450773  : public RuntimeObject
{
public:
	// System.Xml.XPath.Expression System.Xml.XPath.FunctionArguments::_arg
	Expression_t1452783009 * ____arg_0;
	// System.Xml.XPath.FunctionArguments System.Xml.XPath.FunctionArguments::_tail
	FunctionArguments_t3573450773 * ____tail_1;

public:
	inline static int32_t get_offset_of__arg_0() { return static_cast<int32_t>(offsetof(FunctionArguments_t3573450773, ____arg_0)); }
	inline Expression_t1452783009 * get__arg_0() const { return ____arg_0; }
	inline Expression_t1452783009 ** get_address_of__arg_0() { return &____arg_0; }
	inline void set__arg_0(Expression_t1452783009 * value)
	{
		____arg_0 = value;
		Il2CppCodeGenWriteBarrier((&____arg_0), value);
	}

	inline static int32_t get_offset_of__tail_1() { return static_cast<int32_t>(offsetof(FunctionArguments_t3573450773, ____tail_1)); }
	inline FunctionArguments_t3573450773 * get__tail_1() const { return ____tail_1; }
	inline FunctionArguments_t3573450773 ** get_address_of__tail_1() { return &____tail_1; }
	inline void set__tail_1(FunctionArguments_t3573450773 * value)
	{
		____tail_1 = value;
		Il2CppCodeGenWriteBarrier((&____tail_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FUNCTIONARGUMENTS_T3573450773_H
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
#ifndef U3CENUMERATECHILDRENU3EC__ITERATOR1_T1970726095_H
#define U3CENUMERATECHILDRENU3EC__ITERATOR1_T1970726095_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.XPathNavigator/<EnumerateChildren>c__Iterator1
struct  U3CEnumerateChildrenU3Ec__Iterator1_t1970726095  : public RuntimeObject
{
public:
	// System.Xml.XPath.XPathNavigator System.Xml.XPath.XPathNavigator/<EnumerateChildren>c__Iterator1::n
	XPathNavigator_t787956054 * ___n_0;
	// System.Xml.XPath.XPathNavigator System.Xml.XPath.XPathNavigator/<EnumerateChildren>c__Iterator1::<nav>__0
	XPathNavigator_t787956054 * ___U3CnavU3E__0_1;
	// System.Xml.XPath.XPathNavigator System.Xml.XPath.XPathNavigator/<EnumerateChildren>c__Iterator1::<nav2>__1
	XPathNavigator_t787956054 * ___U3Cnav2U3E__1_2;
	// System.String System.Xml.XPath.XPathNavigator/<EnumerateChildren>c__Iterator1::name
	String_t* ___name_3;
	// System.String System.Xml.XPath.XPathNavigator/<EnumerateChildren>c__Iterator1::ns
	String_t* ___ns_4;
	// System.Int32 System.Xml.XPath.XPathNavigator/<EnumerateChildren>c__Iterator1::$PC
	int32_t ___U24PC_5;
	// System.Object System.Xml.XPath.XPathNavigator/<EnumerateChildren>c__Iterator1::$current
	RuntimeObject * ___U24current_6;
	// System.Xml.XPath.XPathNavigator System.Xml.XPath.XPathNavigator/<EnumerateChildren>c__Iterator1::<$>n
	XPathNavigator_t787956054 * ___U3CU24U3En_7;
	// System.String System.Xml.XPath.XPathNavigator/<EnumerateChildren>c__Iterator1::<$>name
	String_t* ___U3CU24U3Ename_8;
	// System.String System.Xml.XPath.XPathNavigator/<EnumerateChildren>c__Iterator1::<$>ns
	String_t* ___U3CU24U3Ens_9;

public:
	inline static int32_t get_offset_of_n_0() { return static_cast<int32_t>(offsetof(U3CEnumerateChildrenU3Ec__Iterator1_t1970726095, ___n_0)); }
	inline XPathNavigator_t787956054 * get_n_0() const { return ___n_0; }
	inline XPathNavigator_t787956054 ** get_address_of_n_0() { return &___n_0; }
	inline void set_n_0(XPathNavigator_t787956054 * value)
	{
		___n_0 = value;
		Il2CppCodeGenWriteBarrier((&___n_0), value);
	}

	inline static int32_t get_offset_of_U3CnavU3E__0_1() { return static_cast<int32_t>(offsetof(U3CEnumerateChildrenU3Ec__Iterator1_t1970726095, ___U3CnavU3E__0_1)); }
	inline XPathNavigator_t787956054 * get_U3CnavU3E__0_1() const { return ___U3CnavU3E__0_1; }
	inline XPathNavigator_t787956054 ** get_address_of_U3CnavU3E__0_1() { return &___U3CnavU3E__0_1; }
	inline void set_U3CnavU3E__0_1(XPathNavigator_t787956054 * value)
	{
		___U3CnavU3E__0_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CnavU3E__0_1), value);
	}

	inline static int32_t get_offset_of_U3Cnav2U3E__1_2() { return static_cast<int32_t>(offsetof(U3CEnumerateChildrenU3Ec__Iterator1_t1970726095, ___U3Cnav2U3E__1_2)); }
	inline XPathNavigator_t787956054 * get_U3Cnav2U3E__1_2() const { return ___U3Cnav2U3E__1_2; }
	inline XPathNavigator_t787956054 ** get_address_of_U3Cnav2U3E__1_2() { return &___U3Cnav2U3E__1_2; }
	inline void set_U3Cnav2U3E__1_2(XPathNavigator_t787956054 * value)
	{
		___U3Cnav2U3E__1_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3Cnav2U3E__1_2), value);
	}

	inline static int32_t get_offset_of_name_3() { return static_cast<int32_t>(offsetof(U3CEnumerateChildrenU3Ec__Iterator1_t1970726095, ___name_3)); }
	inline String_t* get_name_3() const { return ___name_3; }
	inline String_t** get_address_of_name_3() { return &___name_3; }
	inline void set_name_3(String_t* value)
	{
		___name_3 = value;
		Il2CppCodeGenWriteBarrier((&___name_3), value);
	}

	inline static int32_t get_offset_of_ns_4() { return static_cast<int32_t>(offsetof(U3CEnumerateChildrenU3Ec__Iterator1_t1970726095, ___ns_4)); }
	inline String_t* get_ns_4() const { return ___ns_4; }
	inline String_t** get_address_of_ns_4() { return &___ns_4; }
	inline void set_ns_4(String_t* value)
	{
		___ns_4 = value;
		Il2CppCodeGenWriteBarrier((&___ns_4), value);
	}

	inline static int32_t get_offset_of_U24PC_5() { return static_cast<int32_t>(offsetof(U3CEnumerateChildrenU3Ec__Iterator1_t1970726095, ___U24PC_5)); }
	inline int32_t get_U24PC_5() const { return ___U24PC_5; }
	inline int32_t* get_address_of_U24PC_5() { return &___U24PC_5; }
	inline void set_U24PC_5(int32_t value)
	{
		___U24PC_5 = value;
	}

	inline static int32_t get_offset_of_U24current_6() { return static_cast<int32_t>(offsetof(U3CEnumerateChildrenU3Ec__Iterator1_t1970726095, ___U24current_6)); }
	inline RuntimeObject * get_U24current_6() const { return ___U24current_6; }
	inline RuntimeObject ** get_address_of_U24current_6() { return &___U24current_6; }
	inline void set_U24current_6(RuntimeObject * value)
	{
		___U24current_6 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_6), value);
	}

	inline static int32_t get_offset_of_U3CU24U3En_7() { return static_cast<int32_t>(offsetof(U3CEnumerateChildrenU3Ec__Iterator1_t1970726095, ___U3CU24U3En_7)); }
	inline XPathNavigator_t787956054 * get_U3CU24U3En_7() const { return ___U3CU24U3En_7; }
	inline XPathNavigator_t787956054 ** get_address_of_U3CU24U3En_7() { return &___U3CU24U3En_7; }
	inline void set_U3CU24U3En_7(XPathNavigator_t787956054 * value)
	{
		___U3CU24U3En_7 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU24U3En_7), value);
	}

	inline static int32_t get_offset_of_U3CU24U3Ename_8() { return static_cast<int32_t>(offsetof(U3CEnumerateChildrenU3Ec__Iterator1_t1970726095, ___U3CU24U3Ename_8)); }
	inline String_t* get_U3CU24U3Ename_8() const { return ___U3CU24U3Ename_8; }
	inline String_t** get_address_of_U3CU24U3Ename_8() { return &___U3CU24U3Ename_8; }
	inline void set_U3CU24U3Ename_8(String_t* value)
	{
		___U3CU24U3Ename_8 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU24U3Ename_8), value);
	}

	inline static int32_t get_offset_of_U3CU24U3Ens_9() { return static_cast<int32_t>(offsetof(U3CEnumerateChildrenU3Ec__Iterator1_t1970726095, ___U3CU24U3Ens_9)); }
	inline String_t* get_U3CU24U3Ens_9() const { return ___U3CU24U3Ens_9; }
	inline String_t** get_address_of_U3CU24U3Ens_9() { return &___U3CU24U3Ens_9; }
	inline void set_U3CU24U3Ens_9(String_t* value)
	{
		___U3CU24U3Ens_9 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU24U3Ens_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CENUMERATECHILDRENU3EC__ITERATOR1_T1970726095_H
#ifndef CULTUREINFO_T4157843068_H
#define CULTUREINFO_T4157843068_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.CultureInfo
struct  CultureInfo_t4157843068  : public RuntimeObject
{
public:
	// System.Boolean System.Globalization.CultureInfo::m_isReadOnly
	bool ___m_isReadOnly_7;
	// System.Int32 System.Globalization.CultureInfo::cultureID
	int32_t ___cultureID_8;
	// System.Int32 System.Globalization.CultureInfo::parent_lcid
	int32_t ___parent_lcid_9;
	// System.Int32 System.Globalization.CultureInfo::specific_lcid
	int32_t ___specific_lcid_10;
	// System.Int32 System.Globalization.CultureInfo::datetime_index
	int32_t ___datetime_index_11;
	// System.Int32 System.Globalization.CultureInfo::number_index
	int32_t ___number_index_12;
	// System.Boolean System.Globalization.CultureInfo::m_useUserOverride
	bool ___m_useUserOverride_13;
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::numInfo
	NumberFormatInfo_t435877138 * ___numInfo_14;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::dateTimeInfo
	DateTimeFormatInfo_t2405853701 * ___dateTimeInfo_15;
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::textInfo
	TextInfo_t3810425522 * ___textInfo_16;
	// System.String System.Globalization.CultureInfo::m_name
	String_t* ___m_name_17;
	// System.String System.Globalization.CultureInfo::displayname
	String_t* ___displayname_18;
	// System.String System.Globalization.CultureInfo::englishname
	String_t* ___englishname_19;
	// System.String System.Globalization.CultureInfo::nativename
	String_t* ___nativename_20;
	// System.String System.Globalization.CultureInfo::iso3lang
	String_t* ___iso3lang_21;
	// System.String System.Globalization.CultureInfo::iso2lang
	String_t* ___iso2lang_22;
	// System.String System.Globalization.CultureInfo::icu_name
	String_t* ___icu_name_23;
	// System.String System.Globalization.CultureInfo::win3lang
	String_t* ___win3lang_24;
	// System.String System.Globalization.CultureInfo::territory
	String_t* ___territory_25;
	// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::compareInfo
	CompareInfo_t1092934962 * ___compareInfo_26;
	// System.Int32* System.Globalization.CultureInfo::calendar_data
	int32_t* ___calendar_data_27;
	// System.Void* System.Globalization.CultureInfo::textinfo_data
	void* ___textinfo_data_28;
	// System.Globalization.Calendar[] System.Globalization.CultureInfo::optional_calendars
	CalendarU5BU5D_t3985046076* ___optional_calendars_29;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::parent_culture
	CultureInfo_t4157843068 * ___parent_culture_30;
	// System.Int32 System.Globalization.CultureInfo::m_dataItem
	int32_t ___m_dataItem_31;
	// System.Globalization.Calendar System.Globalization.CultureInfo::calendar
	Calendar_t1661121569 * ___calendar_32;
	// System.Boolean System.Globalization.CultureInfo::constructed
	bool ___constructed_33;
	// System.Byte[] System.Globalization.CultureInfo::cached_serialized_form
	ByteU5BU5D_t4116647657* ___cached_serialized_form_34;

public:
	inline static int32_t get_offset_of_m_isReadOnly_7() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___m_isReadOnly_7)); }
	inline bool get_m_isReadOnly_7() const { return ___m_isReadOnly_7; }
	inline bool* get_address_of_m_isReadOnly_7() { return &___m_isReadOnly_7; }
	inline void set_m_isReadOnly_7(bool value)
	{
		___m_isReadOnly_7 = value;
	}

	inline static int32_t get_offset_of_cultureID_8() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___cultureID_8)); }
	inline int32_t get_cultureID_8() const { return ___cultureID_8; }
	inline int32_t* get_address_of_cultureID_8() { return &___cultureID_8; }
	inline void set_cultureID_8(int32_t value)
	{
		___cultureID_8 = value;
	}

	inline static int32_t get_offset_of_parent_lcid_9() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___parent_lcid_9)); }
	inline int32_t get_parent_lcid_9() const { return ___parent_lcid_9; }
	inline int32_t* get_address_of_parent_lcid_9() { return &___parent_lcid_9; }
	inline void set_parent_lcid_9(int32_t value)
	{
		___parent_lcid_9 = value;
	}

	inline static int32_t get_offset_of_specific_lcid_10() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___specific_lcid_10)); }
	inline int32_t get_specific_lcid_10() const { return ___specific_lcid_10; }
	inline int32_t* get_address_of_specific_lcid_10() { return &___specific_lcid_10; }
	inline void set_specific_lcid_10(int32_t value)
	{
		___specific_lcid_10 = value;
	}

	inline static int32_t get_offset_of_datetime_index_11() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___datetime_index_11)); }
	inline int32_t get_datetime_index_11() const { return ___datetime_index_11; }
	inline int32_t* get_address_of_datetime_index_11() { return &___datetime_index_11; }
	inline void set_datetime_index_11(int32_t value)
	{
		___datetime_index_11 = value;
	}

	inline static int32_t get_offset_of_number_index_12() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___number_index_12)); }
	inline int32_t get_number_index_12() const { return ___number_index_12; }
	inline int32_t* get_address_of_number_index_12() { return &___number_index_12; }
	inline void set_number_index_12(int32_t value)
	{
		___number_index_12 = value;
	}

	inline static int32_t get_offset_of_m_useUserOverride_13() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___m_useUserOverride_13)); }
	inline bool get_m_useUserOverride_13() const { return ___m_useUserOverride_13; }
	inline bool* get_address_of_m_useUserOverride_13() { return &___m_useUserOverride_13; }
	inline void set_m_useUserOverride_13(bool value)
	{
		___m_useUserOverride_13 = value;
	}

	inline static int32_t get_offset_of_numInfo_14() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___numInfo_14)); }
	inline NumberFormatInfo_t435877138 * get_numInfo_14() const { return ___numInfo_14; }
	inline NumberFormatInfo_t435877138 ** get_address_of_numInfo_14() { return &___numInfo_14; }
	inline void set_numInfo_14(NumberFormatInfo_t435877138 * value)
	{
		___numInfo_14 = value;
		Il2CppCodeGenWriteBarrier((&___numInfo_14), value);
	}

	inline static int32_t get_offset_of_dateTimeInfo_15() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___dateTimeInfo_15)); }
	inline DateTimeFormatInfo_t2405853701 * get_dateTimeInfo_15() const { return ___dateTimeInfo_15; }
	inline DateTimeFormatInfo_t2405853701 ** get_address_of_dateTimeInfo_15() { return &___dateTimeInfo_15; }
	inline void set_dateTimeInfo_15(DateTimeFormatInfo_t2405853701 * value)
	{
		___dateTimeInfo_15 = value;
		Il2CppCodeGenWriteBarrier((&___dateTimeInfo_15), value);
	}

	inline static int32_t get_offset_of_textInfo_16() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___textInfo_16)); }
	inline TextInfo_t3810425522 * get_textInfo_16() const { return ___textInfo_16; }
	inline TextInfo_t3810425522 ** get_address_of_textInfo_16() { return &___textInfo_16; }
	inline void set_textInfo_16(TextInfo_t3810425522 * value)
	{
		___textInfo_16 = value;
		Il2CppCodeGenWriteBarrier((&___textInfo_16), value);
	}

	inline static int32_t get_offset_of_m_name_17() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___m_name_17)); }
	inline String_t* get_m_name_17() const { return ___m_name_17; }
	inline String_t** get_address_of_m_name_17() { return &___m_name_17; }
	inline void set_m_name_17(String_t* value)
	{
		___m_name_17 = value;
		Il2CppCodeGenWriteBarrier((&___m_name_17), value);
	}

	inline static int32_t get_offset_of_displayname_18() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___displayname_18)); }
	inline String_t* get_displayname_18() const { return ___displayname_18; }
	inline String_t** get_address_of_displayname_18() { return &___displayname_18; }
	inline void set_displayname_18(String_t* value)
	{
		___displayname_18 = value;
		Il2CppCodeGenWriteBarrier((&___displayname_18), value);
	}

	inline static int32_t get_offset_of_englishname_19() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___englishname_19)); }
	inline String_t* get_englishname_19() const { return ___englishname_19; }
	inline String_t** get_address_of_englishname_19() { return &___englishname_19; }
	inline void set_englishname_19(String_t* value)
	{
		___englishname_19 = value;
		Il2CppCodeGenWriteBarrier((&___englishname_19), value);
	}

	inline static int32_t get_offset_of_nativename_20() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___nativename_20)); }
	inline String_t* get_nativename_20() const { return ___nativename_20; }
	inline String_t** get_address_of_nativename_20() { return &___nativename_20; }
	inline void set_nativename_20(String_t* value)
	{
		___nativename_20 = value;
		Il2CppCodeGenWriteBarrier((&___nativename_20), value);
	}

	inline static int32_t get_offset_of_iso3lang_21() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___iso3lang_21)); }
	inline String_t* get_iso3lang_21() const { return ___iso3lang_21; }
	inline String_t** get_address_of_iso3lang_21() { return &___iso3lang_21; }
	inline void set_iso3lang_21(String_t* value)
	{
		___iso3lang_21 = value;
		Il2CppCodeGenWriteBarrier((&___iso3lang_21), value);
	}

	inline static int32_t get_offset_of_iso2lang_22() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___iso2lang_22)); }
	inline String_t* get_iso2lang_22() const { return ___iso2lang_22; }
	inline String_t** get_address_of_iso2lang_22() { return &___iso2lang_22; }
	inline void set_iso2lang_22(String_t* value)
	{
		___iso2lang_22 = value;
		Il2CppCodeGenWriteBarrier((&___iso2lang_22), value);
	}

	inline static int32_t get_offset_of_icu_name_23() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___icu_name_23)); }
	inline String_t* get_icu_name_23() const { return ___icu_name_23; }
	inline String_t** get_address_of_icu_name_23() { return &___icu_name_23; }
	inline void set_icu_name_23(String_t* value)
	{
		___icu_name_23 = value;
		Il2CppCodeGenWriteBarrier((&___icu_name_23), value);
	}

	inline static int32_t get_offset_of_win3lang_24() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___win3lang_24)); }
	inline String_t* get_win3lang_24() const { return ___win3lang_24; }
	inline String_t** get_address_of_win3lang_24() { return &___win3lang_24; }
	inline void set_win3lang_24(String_t* value)
	{
		___win3lang_24 = value;
		Il2CppCodeGenWriteBarrier((&___win3lang_24), value);
	}

	inline static int32_t get_offset_of_territory_25() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___territory_25)); }
	inline String_t* get_territory_25() const { return ___territory_25; }
	inline String_t** get_address_of_territory_25() { return &___territory_25; }
	inline void set_territory_25(String_t* value)
	{
		___territory_25 = value;
		Il2CppCodeGenWriteBarrier((&___territory_25), value);
	}

	inline static int32_t get_offset_of_compareInfo_26() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___compareInfo_26)); }
	inline CompareInfo_t1092934962 * get_compareInfo_26() const { return ___compareInfo_26; }
	inline CompareInfo_t1092934962 ** get_address_of_compareInfo_26() { return &___compareInfo_26; }
	inline void set_compareInfo_26(CompareInfo_t1092934962 * value)
	{
		___compareInfo_26 = value;
		Il2CppCodeGenWriteBarrier((&___compareInfo_26), value);
	}

	inline static int32_t get_offset_of_calendar_data_27() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___calendar_data_27)); }
	inline int32_t* get_calendar_data_27() const { return ___calendar_data_27; }
	inline int32_t** get_address_of_calendar_data_27() { return &___calendar_data_27; }
	inline void set_calendar_data_27(int32_t* value)
	{
		___calendar_data_27 = value;
	}

	inline static int32_t get_offset_of_textinfo_data_28() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___textinfo_data_28)); }
	inline void* get_textinfo_data_28() const { return ___textinfo_data_28; }
	inline void** get_address_of_textinfo_data_28() { return &___textinfo_data_28; }
	inline void set_textinfo_data_28(void* value)
	{
		___textinfo_data_28 = value;
	}

	inline static int32_t get_offset_of_optional_calendars_29() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___optional_calendars_29)); }
	inline CalendarU5BU5D_t3985046076* get_optional_calendars_29() const { return ___optional_calendars_29; }
	inline CalendarU5BU5D_t3985046076** get_address_of_optional_calendars_29() { return &___optional_calendars_29; }
	inline void set_optional_calendars_29(CalendarU5BU5D_t3985046076* value)
	{
		___optional_calendars_29 = value;
		Il2CppCodeGenWriteBarrier((&___optional_calendars_29), value);
	}

	inline static int32_t get_offset_of_parent_culture_30() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___parent_culture_30)); }
	inline CultureInfo_t4157843068 * get_parent_culture_30() const { return ___parent_culture_30; }
	inline CultureInfo_t4157843068 ** get_address_of_parent_culture_30() { return &___parent_culture_30; }
	inline void set_parent_culture_30(CultureInfo_t4157843068 * value)
	{
		___parent_culture_30 = value;
		Il2CppCodeGenWriteBarrier((&___parent_culture_30), value);
	}

	inline static int32_t get_offset_of_m_dataItem_31() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___m_dataItem_31)); }
	inline int32_t get_m_dataItem_31() const { return ___m_dataItem_31; }
	inline int32_t* get_address_of_m_dataItem_31() { return &___m_dataItem_31; }
	inline void set_m_dataItem_31(int32_t value)
	{
		___m_dataItem_31 = value;
	}

	inline static int32_t get_offset_of_calendar_32() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___calendar_32)); }
	inline Calendar_t1661121569 * get_calendar_32() const { return ___calendar_32; }
	inline Calendar_t1661121569 ** get_address_of_calendar_32() { return &___calendar_32; }
	inline void set_calendar_32(Calendar_t1661121569 * value)
	{
		___calendar_32 = value;
		Il2CppCodeGenWriteBarrier((&___calendar_32), value);
	}

	inline static int32_t get_offset_of_constructed_33() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___constructed_33)); }
	inline bool get_constructed_33() const { return ___constructed_33; }
	inline bool* get_address_of_constructed_33() { return &___constructed_33; }
	inline void set_constructed_33(bool value)
	{
		___constructed_33 = value;
	}

	inline static int32_t get_offset_of_cached_serialized_form_34() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___cached_serialized_form_34)); }
	inline ByteU5BU5D_t4116647657* get_cached_serialized_form_34() const { return ___cached_serialized_form_34; }
	inline ByteU5BU5D_t4116647657** get_address_of_cached_serialized_form_34() { return &___cached_serialized_form_34; }
	inline void set_cached_serialized_form_34(ByteU5BU5D_t4116647657* value)
	{
		___cached_serialized_form_34 = value;
		Il2CppCodeGenWriteBarrier((&___cached_serialized_form_34), value);
	}
};

struct CultureInfo_t4157843068_StaticFields
{
public:
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::invariant_culture_info
	CultureInfo_t4157843068 * ___invariant_culture_info_4;
	// System.Object System.Globalization.CultureInfo::shared_table_lock
	RuntimeObject * ___shared_table_lock_5;
	// System.Int32 System.Globalization.CultureInfo::BootstrapCultureID
	int32_t ___BootstrapCultureID_6;
	// System.String System.Globalization.CultureInfo::MSG_READONLY
	String_t* ___MSG_READONLY_35;
	// System.Collections.Hashtable System.Globalization.CultureInfo::shared_by_number
	Hashtable_t1853889766 * ___shared_by_number_36;
	// System.Collections.Hashtable System.Globalization.CultureInfo::shared_by_name
	Hashtable_t1853889766 * ___shared_by_name_37;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Globalization.CultureInfo::<>f__switch$map19
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map19_38;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Globalization.CultureInfo::<>f__switch$map1A
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map1A_39;

public:
	inline static int32_t get_offset_of_invariant_culture_info_4() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___invariant_culture_info_4)); }
	inline CultureInfo_t4157843068 * get_invariant_culture_info_4() const { return ___invariant_culture_info_4; }
	inline CultureInfo_t4157843068 ** get_address_of_invariant_culture_info_4() { return &___invariant_culture_info_4; }
	inline void set_invariant_culture_info_4(CultureInfo_t4157843068 * value)
	{
		___invariant_culture_info_4 = value;
		Il2CppCodeGenWriteBarrier((&___invariant_culture_info_4), value);
	}

	inline static int32_t get_offset_of_shared_table_lock_5() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___shared_table_lock_5)); }
	inline RuntimeObject * get_shared_table_lock_5() const { return ___shared_table_lock_5; }
	inline RuntimeObject ** get_address_of_shared_table_lock_5() { return &___shared_table_lock_5; }
	inline void set_shared_table_lock_5(RuntimeObject * value)
	{
		___shared_table_lock_5 = value;
		Il2CppCodeGenWriteBarrier((&___shared_table_lock_5), value);
	}

	inline static int32_t get_offset_of_BootstrapCultureID_6() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___BootstrapCultureID_6)); }
	inline int32_t get_BootstrapCultureID_6() const { return ___BootstrapCultureID_6; }
	inline int32_t* get_address_of_BootstrapCultureID_6() { return &___BootstrapCultureID_6; }
	inline void set_BootstrapCultureID_6(int32_t value)
	{
		___BootstrapCultureID_6 = value;
	}

	inline static int32_t get_offset_of_MSG_READONLY_35() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___MSG_READONLY_35)); }
	inline String_t* get_MSG_READONLY_35() const { return ___MSG_READONLY_35; }
	inline String_t** get_address_of_MSG_READONLY_35() { return &___MSG_READONLY_35; }
	inline void set_MSG_READONLY_35(String_t* value)
	{
		___MSG_READONLY_35 = value;
		Il2CppCodeGenWriteBarrier((&___MSG_READONLY_35), value);
	}

	inline static int32_t get_offset_of_shared_by_number_36() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___shared_by_number_36)); }
	inline Hashtable_t1853889766 * get_shared_by_number_36() const { return ___shared_by_number_36; }
	inline Hashtable_t1853889766 ** get_address_of_shared_by_number_36() { return &___shared_by_number_36; }
	inline void set_shared_by_number_36(Hashtable_t1853889766 * value)
	{
		___shared_by_number_36 = value;
		Il2CppCodeGenWriteBarrier((&___shared_by_number_36), value);
	}

	inline static int32_t get_offset_of_shared_by_name_37() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___shared_by_name_37)); }
	inline Hashtable_t1853889766 * get_shared_by_name_37() const { return ___shared_by_name_37; }
	inline Hashtable_t1853889766 ** get_address_of_shared_by_name_37() { return &___shared_by_name_37; }
	inline void set_shared_by_name_37(Hashtable_t1853889766 * value)
	{
		___shared_by_name_37 = value;
		Il2CppCodeGenWriteBarrier((&___shared_by_name_37), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map19_38() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___U3CU3Ef__switchU24map19_38)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map19_38() const { return ___U3CU3Ef__switchU24map19_38; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map19_38() { return &___U3CU3Ef__switchU24map19_38; }
	inline void set_U3CU3Ef__switchU24map19_38(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map19_38 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map19_38), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map1A_39() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___U3CU3Ef__switchU24map1A_39)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map1A_39() const { return ___U3CU3Ef__switchU24map1A_39; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map1A_39() { return &___U3CU3Ef__switchU24map1A_39; }
	inline void set_U3CU3Ef__switchU24map1A_39(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map1A_39 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map1A_39), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CULTUREINFO_T4157843068_H
#ifndef XMLURLRESOLVER_T817895037_H
#define XMLURLRESOLVER_T817895037_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlUrlResolver
struct  XmlUrlResolver_t817895037  : public XmlResolver_t626023767
{
public:
	// System.Net.ICredentials System.Xml.XmlUrlResolver::credential
	RuntimeObject* ___credential_0;

public:
	inline static int32_t get_offset_of_credential_0() { return static_cast<int32_t>(offsetof(XmlUrlResolver_t817895037, ___credential_0)); }
	inline RuntimeObject* get_credential_0() const { return ___credential_0; }
	inline RuntimeObject** get_address_of_credential_0() { return &___credential_0; }
	inline void set_credential_0(RuntimeObject* value)
	{
		___credential_0 = value;
		Il2CppCodeGenWriteBarrier((&___credential_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLURLRESOLVER_T817895037_H
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
#ifndef XMLTEXTREADER_T4233384356_H
#define XMLTEXTREADER_T4233384356_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlTextReader
struct  XmlTextReader_t4233384356  : public XmlReader_t3121518892
{
public:
	// System.Xml.XmlTextReader System.Xml.XmlTextReader::entity
	XmlTextReader_t4233384356 * ___entity_3;
	// Mono.Xml2.XmlTextReader System.Xml.XmlTextReader::source
	XmlTextReader_t3455035481 * ___source_4;
	// System.Boolean System.Xml.XmlTextReader::entityInsideAttribute
	bool ___entityInsideAttribute_5;
	// System.Boolean System.Xml.XmlTextReader::insideAttribute
	bool ___insideAttribute_6;
	// System.Collections.Generic.Stack`1<System.String> System.Xml.XmlTextReader::entityNameStack
	Stack_1_t2690840144 * ___entityNameStack_7;

public:
	inline static int32_t get_offset_of_entity_3() { return static_cast<int32_t>(offsetof(XmlTextReader_t4233384356, ___entity_3)); }
	inline XmlTextReader_t4233384356 * get_entity_3() const { return ___entity_3; }
	inline XmlTextReader_t4233384356 ** get_address_of_entity_3() { return &___entity_3; }
	inline void set_entity_3(XmlTextReader_t4233384356 * value)
	{
		___entity_3 = value;
		Il2CppCodeGenWriteBarrier((&___entity_3), value);
	}

	inline static int32_t get_offset_of_source_4() { return static_cast<int32_t>(offsetof(XmlTextReader_t4233384356, ___source_4)); }
	inline XmlTextReader_t3455035481 * get_source_4() const { return ___source_4; }
	inline XmlTextReader_t3455035481 ** get_address_of_source_4() { return &___source_4; }
	inline void set_source_4(XmlTextReader_t3455035481 * value)
	{
		___source_4 = value;
		Il2CppCodeGenWriteBarrier((&___source_4), value);
	}

	inline static int32_t get_offset_of_entityInsideAttribute_5() { return static_cast<int32_t>(offsetof(XmlTextReader_t4233384356, ___entityInsideAttribute_5)); }
	inline bool get_entityInsideAttribute_5() const { return ___entityInsideAttribute_5; }
	inline bool* get_address_of_entityInsideAttribute_5() { return &___entityInsideAttribute_5; }
	inline void set_entityInsideAttribute_5(bool value)
	{
		___entityInsideAttribute_5 = value;
	}

	inline static int32_t get_offset_of_insideAttribute_6() { return static_cast<int32_t>(offsetof(XmlTextReader_t4233384356, ___insideAttribute_6)); }
	inline bool get_insideAttribute_6() const { return ___insideAttribute_6; }
	inline bool* get_address_of_insideAttribute_6() { return &___insideAttribute_6; }
	inline void set_insideAttribute_6(bool value)
	{
		___insideAttribute_6 = value;
	}

	inline static int32_t get_offset_of_entityNameStack_7() { return static_cast<int32_t>(offsetof(XmlTextReader_t4233384356, ___entityNameStack_7)); }
	inline Stack_1_t2690840144 * get_entityNameStack_7() const { return ___entityNameStack_7; }
	inline Stack_1_t2690840144 ** get_address_of_entityNameStack_7() { return &___entityNameStack_7; }
	inline void set_entityNameStack_7(Stack_1_t2690840144 * value)
	{
		___entityNameStack_7 = value;
		Il2CppCodeGenWriteBarrier((&___entityNameStack_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLTEXTREADER_T4233384356_H
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
#ifndef XPATHFUNCTION_T857746608_H
#define XPATHFUNCTION_T857746608_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.XPathFunction
struct  XPathFunction_t857746608  : public Expression_t1452783009
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XPATHFUNCTION_T857746608_H
#ifndef STREAMWRITER_T1266378904_H
#define STREAMWRITER_T1266378904_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.StreamWriter
struct  StreamWriter_t1266378904  : public TextWriter_t3478189236
{
public:
	// System.Text.Encoding System.IO.StreamWriter::internalEncoding
	Encoding_t1523322056 * ___internalEncoding_3;
	// System.IO.Stream System.IO.StreamWriter::internalStream
	Stream_t1273022909 * ___internalStream_4;
	// System.Boolean System.IO.StreamWriter::iflush
	bool ___iflush_5;
	// System.Byte[] System.IO.StreamWriter::byte_buf
	ByteU5BU5D_t4116647657* ___byte_buf_6;
	// System.Int32 System.IO.StreamWriter::byte_pos
	int32_t ___byte_pos_7;
	// System.Char[] System.IO.StreamWriter::decode_buf
	CharU5BU5D_t3528271667* ___decode_buf_8;
	// System.Int32 System.IO.StreamWriter::decode_pos
	int32_t ___decode_pos_9;
	// System.Boolean System.IO.StreamWriter::DisposedAlready
	bool ___DisposedAlready_10;
	// System.Boolean System.IO.StreamWriter::preamble_done
	bool ___preamble_done_11;

public:
	inline static int32_t get_offset_of_internalEncoding_3() { return static_cast<int32_t>(offsetof(StreamWriter_t1266378904, ___internalEncoding_3)); }
	inline Encoding_t1523322056 * get_internalEncoding_3() const { return ___internalEncoding_3; }
	inline Encoding_t1523322056 ** get_address_of_internalEncoding_3() { return &___internalEncoding_3; }
	inline void set_internalEncoding_3(Encoding_t1523322056 * value)
	{
		___internalEncoding_3 = value;
		Il2CppCodeGenWriteBarrier((&___internalEncoding_3), value);
	}

	inline static int32_t get_offset_of_internalStream_4() { return static_cast<int32_t>(offsetof(StreamWriter_t1266378904, ___internalStream_4)); }
	inline Stream_t1273022909 * get_internalStream_4() const { return ___internalStream_4; }
	inline Stream_t1273022909 ** get_address_of_internalStream_4() { return &___internalStream_4; }
	inline void set_internalStream_4(Stream_t1273022909 * value)
	{
		___internalStream_4 = value;
		Il2CppCodeGenWriteBarrier((&___internalStream_4), value);
	}

	inline static int32_t get_offset_of_iflush_5() { return static_cast<int32_t>(offsetof(StreamWriter_t1266378904, ___iflush_5)); }
	inline bool get_iflush_5() const { return ___iflush_5; }
	inline bool* get_address_of_iflush_5() { return &___iflush_5; }
	inline void set_iflush_5(bool value)
	{
		___iflush_5 = value;
	}

	inline static int32_t get_offset_of_byte_buf_6() { return static_cast<int32_t>(offsetof(StreamWriter_t1266378904, ___byte_buf_6)); }
	inline ByteU5BU5D_t4116647657* get_byte_buf_6() const { return ___byte_buf_6; }
	inline ByteU5BU5D_t4116647657** get_address_of_byte_buf_6() { return &___byte_buf_6; }
	inline void set_byte_buf_6(ByteU5BU5D_t4116647657* value)
	{
		___byte_buf_6 = value;
		Il2CppCodeGenWriteBarrier((&___byte_buf_6), value);
	}

	inline static int32_t get_offset_of_byte_pos_7() { return static_cast<int32_t>(offsetof(StreamWriter_t1266378904, ___byte_pos_7)); }
	inline int32_t get_byte_pos_7() const { return ___byte_pos_7; }
	inline int32_t* get_address_of_byte_pos_7() { return &___byte_pos_7; }
	inline void set_byte_pos_7(int32_t value)
	{
		___byte_pos_7 = value;
	}

	inline static int32_t get_offset_of_decode_buf_8() { return static_cast<int32_t>(offsetof(StreamWriter_t1266378904, ___decode_buf_8)); }
	inline CharU5BU5D_t3528271667* get_decode_buf_8() const { return ___decode_buf_8; }
	inline CharU5BU5D_t3528271667** get_address_of_decode_buf_8() { return &___decode_buf_8; }
	inline void set_decode_buf_8(CharU5BU5D_t3528271667* value)
	{
		___decode_buf_8 = value;
		Il2CppCodeGenWriteBarrier((&___decode_buf_8), value);
	}

	inline static int32_t get_offset_of_decode_pos_9() { return static_cast<int32_t>(offsetof(StreamWriter_t1266378904, ___decode_pos_9)); }
	inline int32_t get_decode_pos_9() const { return ___decode_pos_9; }
	inline int32_t* get_address_of_decode_pos_9() { return &___decode_pos_9; }
	inline void set_decode_pos_9(int32_t value)
	{
		___decode_pos_9 = value;
	}

	inline static int32_t get_offset_of_DisposedAlready_10() { return static_cast<int32_t>(offsetof(StreamWriter_t1266378904, ___DisposedAlready_10)); }
	inline bool get_DisposedAlready_10() const { return ___DisposedAlready_10; }
	inline bool* get_address_of_DisposedAlready_10() { return &___DisposedAlready_10; }
	inline void set_DisposedAlready_10(bool value)
	{
		___DisposedAlready_10 = value;
	}

	inline static int32_t get_offset_of_preamble_done_11() { return static_cast<int32_t>(offsetof(StreamWriter_t1266378904, ___preamble_done_11)); }
	inline bool get_preamble_done_11() const { return ___preamble_done_11; }
	inline bool* get_address_of_preamble_done_11() { return &___preamble_done_11; }
	inline void set_preamble_done_11(bool value)
	{
		___preamble_done_11 = value;
	}
};

struct StreamWriter_t1266378904_StaticFields
{
public:
	// System.IO.StreamWriter System.IO.StreamWriter::Null
	StreamWriter_t1266378904 * ___Null_12;

public:
	inline static int32_t get_offset_of_Null_12() { return static_cast<int32_t>(offsetof(StreamWriter_t1266378904_StaticFields, ___Null_12)); }
	inline StreamWriter_t1266378904 * get_Null_12() const { return ___Null_12; }
	inline StreamWriter_t1266378904 ** get_address_of_Null_12() { return &___Null_12; }
	inline void set_Null_12(StreamWriter_t1266378904 * value)
	{
		___Null_12 = value;
		Il2CppCodeGenWriteBarrier((&___Null_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STREAMWRITER_T1266378904_H
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
#ifndef XSLTMESSAGEENCOUNTEREDEVENTARGS_T1348681757_H
#define XSLTMESSAGEENCOUNTEREDEVENTARGS_T1348681757_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Xsl.XsltMessageEncounteredEventArgs
struct  XsltMessageEncounteredEventArgs_t1348681757  : public EventArgs_t3591816995
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XSLTMESSAGEENCOUNTEREDEVENTARGS_T1348681757_H
#ifndef XPATHNAVIGATOR_T787956054_H
#define XPATHNAVIGATOR_T787956054_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.XPathNavigator
struct  XPathNavigator_t787956054  : public XPathItem_t4250588140
{
public:

public:
};

struct XPathNavigator_t787956054_StaticFields
{
public:
	// System.Char[] System.Xml.XPath.XPathNavigator::escape_text_chars
	CharU5BU5D_t3528271667* ___escape_text_chars_0;
	// System.Char[] System.Xml.XPath.XPathNavigator::escape_attr_chars
	CharU5BU5D_t3528271667* ___escape_attr_chars_1;

public:
	inline static int32_t get_offset_of_escape_text_chars_0() { return static_cast<int32_t>(offsetof(XPathNavigator_t787956054_StaticFields, ___escape_text_chars_0)); }
	inline CharU5BU5D_t3528271667* get_escape_text_chars_0() const { return ___escape_text_chars_0; }
	inline CharU5BU5D_t3528271667** get_address_of_escape_text_chars_0() { return &___escape_text_chars_0; }
	inline void set_escape_text_chars_0(CharU5BU5D_t3528271667* value)
	{
		___escape_text_chars_0 = value;
		Il2CppCodeGenWriteBarrier((&___escape_text_chars_0), value);
	}

	inline static int32_t get_offset_of_escape_attr_chars_1() { return static_cast<int32_t>(offsetof(XPathNavigator_t787956054_StaticFields, ___escape_attr_chars_1)); }
	inline CharU5BU5D_t3528271667* get_escape_attr_chars_1() const { return ___escape_attr_chars_1; }
	inline CharU5BU5D_t3528271667** get_address_of_escape_attr_chars_1() { return &___escape_attr_chars_1; }
	inline void set_escape_attr_chars_1(CharU5BU5D_t3528271667* value)
	{
		___escape_attr_chars_1 = value;
		Il2CppCodeGenWriteBarrier((&___escape_attr_chars_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XPATHNAVIGATOR_T787956054_H
#ifndef INT16_T2552820387_H
#define INT16_T2552820387_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int16
struct  Int16_t2552820387 
{
public:
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int16_t2552820387, ___m_value_2)); }
	inline int16_t get_m_value_2() const { return ___m_value_2; }
	inline int16_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int16_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT16_T2552820387_H
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
#ifndef NAMETABLE_T3178203267_H
#define NAMETABLE_T3178203267_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.NameTable
struct  NameTable_t3178203267  : public XmlNameTable_t71772148
{
public:
	// System.Int32 System.Xml.NameTable::count
	int32_t ___count_1;
	// System.Xml.NameTable/Entry[] System.Xml.NameTable::buckets
	EntryU5BU5D_t491982174* ___buckets_2;
	// System.Int32 System.Xml.NameTable::size
	int32_t ___size_3;

public:
	inline static int32_t get_offset_of_count_1() { return static_cast<int32_t>(offsetof(NameTable_t3178203267, ___count_1)); }
	inline int32_t get_count_1() const { return ___count_1; }
	inline int32_t* get_address_of_count_1() { return &___count_1; }
	inline void set_count_1(int32_t value)
	{
		___count_1 = value;
	}

	inline static int32_t get_offset_of_buckets_2() { return static_cast<int32_t>(offsetof(NameTable_t3178203267, ___buckets_2)); }
	inline EntryU5BU5D_t491982174* get_buckets_2() const { return ___buckets_2; }
	inline EntryU5BU5D_t491982174** get_address_of_buckets_2() { return &___buckets_2; }
	inline void set_buckets_2(EntryU5BU5D_t491982174* value)
	{
		___buckets_2 = value;
		Il2CppCodeGenWriteBarrier((&___buckets_2), value);
	}

	inline static int32_t get_offset_of_size_3() { return static_cast<int32_t>(offsetof(NameTable_t3178203267, ___size_3)); }
	inline int32_t get_size_3() const { return ___size_3; }
	inline int32_t* get_address_of_size_3() { return &___size_3; }
	inline void set_size_3(int32_t value)
	{
		___size_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NAMETABLE_T3178203267_H
#ifndef ENUMERABLEITERATOR_T1590428576_H
#define ENUMERABLEITERATOR_T1590428576_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.XPathNavigator/EnumerableIterator
struct  EnumerableIterator_t1590428576  : public XPathNodeIterator_t3667290188
{
public:
	// System.Collections.IEnumerable System.Xml.XPath.XPathNavigator/EnumerableIterator::source
	RuntimeObject* ___source_1;
	// System.Collections.IEnumerator System.Xml.XPath.XPathNavigator/EnumerableIterator::e
	RuntimeObject* ___e_2;
	// System.Int32 System.Xml.XPath.XPathNavigator/EnumerableIterator::pos
	int32_t ___pos_3;

public:
	inline static int32_t get_offset_of_source_1() { return static_cast<int32_t>(offsetof(EnumerableIterator_t1590428576, ___source_1)); }
	inline RuntimeObject* get_source_1() const { return ___source_1; }
	inline RuntimeObject** get_address_of_source_1() { return &___source_1; }
	inline void set_source_1(RuntimeObject* value)
	{
		___source_1 = value;
		Il2CppCodeGenWriteBarrier((&___source_1), value);
	}

	inline static int32_t get_offset_of_e_2() { return static_cast<int32_t>(offsetof(EnumerableIterator_t1590428576, ___e_2)); }
	inline RuntimeObject* get_e_2() const { return ___e_2; }
	inline RuntimeObject** get_address_of_e_2() { return &___e_2; }
	inline void set_e_2(RuntimeObject* value)
	{
		___e_2 = value;
		Il2CppCodeGenWriteBarrier((&___e_2), value);
	}

	inline static int32_t get_offset_of_pos_3() { return static_cast<int32_t>(offsetof(EnumerableIterator_t1590428576, ___pos_3)); }
	inline int32_t get_pos_3() const { return ___pos_3; }
	inline int32_t* get_address_of_pos_3() { return &___pos_3; }
	inline void set_pos_3(int32_t value)
	{
		___pos_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERABLEITERATOR_T1590428576_H
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
#ifndef BASEITERATOR_T4168896842_H
#define BASEITERATOR_T4168896842_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.BaseIterator
struct  BaseIterator_t4168896842  : public XPathNodeIterator_t3667290188
{
public:
	// System.Xml.IXmlNamespaceResolver System.Xml.XPath.BaseIterator::_nsm
	RuntimeObject* ____nsm_1;
	// System.Int32 System.Xml.XPath.BaseIterator::position
	int32_t ___position_2;

public:
	inline static int32_t get_offset_of__nsm_1() { return static_cast<int32_t>(offsetof(BaseIterator_t4168896842, ____nsm_1)); }
	inline RuntimeObject* get__nsm_1() const { return ____nsm_1; }
	inline RuntimeObject** get_address_of__nsm_1() { return &____nsm_1; }
	inline void set__nsm_1(RuntimeObject* value)
	{
		____nsm_1 = value;
		Il2CppCodeGenWriteBarrier((&____nsm_1), value);
	}

	inline static int32_t get_offset_of_position_2() { return static_cast<int32_t>(offsetof(BaseIterator_t4168896842, ___position_2)); }
	inline int32_t get_position_2() const { return ___position_2; }
	inline int32_t* get_address_of_position_2() { return &___position_2; }
	inline void set_position_2(int32_t value)
	{
		___position_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASEITERATOR_T4168896842_H
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
#ifndef UINT16_T2177724958_H
#define UINT16_T2177724958_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt16
struct  UInt16_t2177724958 
{
public:
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(UInt16_t2177724958, ___m_value_2)); }
	inline uint16_t get_m_value_2() const { return ___m_value_2; }
	inline uint16_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(uint16_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT16_T2177724958_H
#ifndef XSLTCONTEXT_T2039362735_H
#define XSLTCONTEXT_T2039362735_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Xsl.XsltContext
struct  XsltContext_t2039362735  : public XmlNamespaceManager_t418790500
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XSLTCONTEXT_T2039362735_H
#ifndef COMPILEDEXPRESSION_T4018285681_H
#define COMPILEDEXPRESSION_T4018285681_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.CompiledExpression
struct  CompiledExpression_t4018285681  : public XPathExpression_t1723793351
{
public:
	// System.Xml.IXmlNamespaceResolver System.Xml.XPath.CompiledExpression::_nsm
	RuntimeObject* ____nsm_0;
	// System.Xml.XPath.Expression System.Xml.XPath.CompiledExpression::_expr
	Expression_t1452783009 * ____expr_1;
	// System.Xml.XPath.XPathSorters System.Xml.XPath.CompiledExpression::_sorters
	XPathSorters_t698127628 * ____sorters_2;
	// System.String System.Xml.XPath.CompiledExpression::rawExpression
	String_t* ___rawExpression_3;

public:
	inline static int32_t get_offset_of__nsm_0() { return static_cast<int32_t>(offsetof(CompiledExpression_t4018285681, ____nsm_0)); }
	inline RuntimeObject* get__nsm_0() const { return ____nsm_0; }
	inline RuntimeObject** get_address_of__nsm_0() { return &____nsm_0; }
	inline void set__nsm_0(RuntimeObject* value)
	{
		____nsm_0 = value;
		Il2CppCodeGenWriteBarrier((&____nsm_0), value);
	}

	inline static int32_t get_offset_of__expr_1() { return static_cast<int32_t>(offsetof(CompiledExpression_t4018285681, ____expr_1)); }
	inline Expression_t1452783009 * get__expr_1() const { return ____expr_1; }
	inline Expression_t1452783009 ** get_address_of__expr_1() { return &____expr_1; }
	inline void set__expr_1(Expression_t1452783009 * value)
	{
		____expr_1 = value;
		Il2CppCodeGenWriteBarrier((&____expr_1), value);
	}

	inline static int32_t get_offset_of__sorters_2() { return static_cast<int32_t>(offsetof(CompiledExpression_t4018285681, ____sorters_2)); }
	inline XPathSorters_t698127628 * get__sorters_2() const { return ____sorters_2; }
	inline XPathSorters_t698127628 ** get_address_of__sorters_2() { return &____sorters_2; }
	inline void set__sorters_2(XPathSorters_t698127628 * value)
	{
		____sorters_2 = value;
		Il2CppCodeGenWriteBarrier((&____sorters_2), value);
	}

	inline static int32_t get_offset_of_rawExpression_3() { return static_cast<int32_t>(offsetof(CompiledExpression_t4018285681, ___rawExpression_3)); }
	inline String_t* get_rawExpression_3() const { return ___rawExpression_3; }
	inline String_t** get_address_of_rawExpression_3() { return &___rawExpression_3; }
	inline void set_rawExpression_3(String_t* value)
	{
		___rawExpression_3 = value;
		Il2CppCodeGenWriteBarrier((&___rawExpression_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPILEDEXPRESSION_T4018285681_H
#ifndef TIMESPAN_T881159249_H
#define TIMESPAN_T881159249_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TimeSpan
struct  TimeSpan_t881159249 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_3;

public:
	inline static int32_t get_offset_of__ticks_3() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249, ____ticks_3)); }
	inline int64_t get__ticks_3() const { return ____ticks_3; }
	inline int64_t* get_address_of__ticks_3() { return &____ticks_3; }
	inline void set__ticks_3(int64_t value)
	{
		____ticks_3 = value;
	}
};

struct TimeSpan_t881159249_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t881159249  ___MaxValue_0;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t881159249  ___MinValue_1;
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t881159249  ___Zero_2;

public:
	inline static int32_t get_offset_of_MaxValue_0() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ___MaxValue_0)); }
	inline TimeSpan_t881159249  get_MaxValue_0() const { return ___MaxValue_0; }
	inline TimeSpan_t881159249 * get_address_of_MaxValue_0() { return &___MaxValue_0; }
	inline void set_MaxValue_0(TimeSpan_t881159249  value)
	{
		___MaxValue_0 = value;
	}

	inline static int32_t get_offset_of_MinValue_1() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ___MinValue_1)); }
	inline TimeSpan_t881159249  get_MinValue_1() const { return ___MinValue_1; }
	inline TimeSpan_t881159249 * get_address_of_MinValue_1() { return &___MinValue_1; }
	inline void set_MinValue_1(TimeSpan_t881159249  value)
	{
		___MinValue_1 = value;
	}

	inline static int32_t get_offset_of_Zero_2() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ___Zero_2)); }
	inline TimeSpan_t881159249  get_Zero_2() const { return ___Zero_2; }
	inline TimeSpan_t881159249 * get_address_of_Zero_2() { return &___Zero_2; }
	inline void set_Zero_2(TimeSpan_t881159249  value)
	{
		___Zero_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMESPAN_T881159249_H
#ifndef UINT64_T4134040092_H
#define UINT64_T4134040092_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt64
struct  UInt64_t4134040092 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt64_t4134040092, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT64_T4134040092_H
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
#ifndef STANDALONETYPE_T1639935827_H
#define STANDALONETYPE_T1639935827_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Xml.Xsl.StandaloneType
struct  StandaloneType_t1639935827 
{
public:
	// System.Int32 Mono.Xml.Xsl.StandaloneType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(StandaloneType_t1639935827, ___value___1)); }
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
#endif // STANDALONETYPE_T1639935827_H
#ifndef ENTITYHANDLING_T1047276436_H
#define ENTITYHANDLING_T1047276436_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.EntityHandling
struct  EntityHandling_t1047276436 
{
public:
	// System.Int32 System.Xml.EntityHandling::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(EntityHandling_t1047276436, ___value___1)); }
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
#endif // ENTITYHANDLING_T1047276436_H
#ifndef XMLNODETYPE_T1672767151_H
#define XMLNODETYPE_T1672767151_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlNodeType
struct  XmlNodeType_t1672767151 
{
public:
	// System.Int32 System.Xml.XmlNodeType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(XmlNodeType_t1672767151, ___value___1)); }
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
#endif // XMLNODETYPE_T1672767151_H
#ifndef OUTPUTMETHOD_T245858122_H
#define OUTPUTMETHOD_T245858122_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Xml.Xsl.OutputMethod
struct  OutputMethod_t245858122 
{
public:
	// System.Int32 Mono.Xml.Xsl.OutputMethod::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(OutputMethod_t245858122, ___value___1)); }
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
#endif // OUTPUTMETHOD_T245858122_H
#ifndef XPATHEXCEPTION_T2107611652_H
#define XPATHEXCEPTION_T2107611652_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.XPathException
struct  XPathException_t2107611652  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XPATHEXCEPTION_T2107611652_H
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
#ifndef XMLDECLSTATE_T1683299469_H
#define XMLDECLSTATE_T1683299469_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlTextWriter/XmlDeclState
struct  XmlDeclState_t1683299469 
{
public:
	// System.Int32 System.Xml.XmlTextWriter/XmlDeclState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(XmlDeclState_t1683299469, ___value___1)); }
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
#endif // XMLDECLSTATE_T1683299469_H
#ifndef WRITESTATE_T3983380671_H
#define WRITESTATE_T3983380671_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.WriteState
struct  WriteState_t3983380671 
{
public:
	// System.Int32 System.Xml.WriteState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(WriteState_t3983380671, ___value___1)); }
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
#endif // WRITESTATE_T3983380671_H
#ifndef NEWLINEHANDLING_T850339274_H
#define NEWLINEHANDLING_T850339274_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.NewLineHandling
struct  NewLineHandling_t850339274 
{
public:
	// System.Int32 System.Xml.NewLineHandling::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(NewLineHandling_t850339274, ___value___1)); }
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
#endif // NEWLINEHANDLING_T850339274_H
#ifndef XMLTYPECODE_T2623622950_H
#define XMLTYPECODE_T2623622950_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.XmlTypeCode
struct  XmlTypeCode_t2623622950 
{
public:
	// System.Int32 System.Xml.Schema.XmlTypeCode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(XmlTypeCode_t2623622950, ___value___1)); }
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
#endif // XMLTYPECODE_T2623622950_H
#ifndef LISTITERATOR_T3066609410_H
#define LISTITERATOR_T3066609410_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.ListIterator
struct  ListIterator_t3066609410  : public BaseIterator_t4168896842
{
public:
	// System.Collections.IList System.Xml.XPath.ListIterator::_list
	RuntimeObject* ____list_3;

public:
	inline static int32_t get_offset_of__list_3() { return static_cast<int32_t>(offsetof(ListIterator_t3066609410, ____list_3)); }
	inline RuntimeObject* get__list_3() const { return ____list_3; }
	inline RuntimeObject** get_address_of__list_3() { return &____list_3; }
	inline void set__list_3(RuntimeObject* value)
	{
		____list_3 = value;
		Il2CppCodeGenWriteBarrier((&____list_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LISTITERATOR_T3066609410_H
#ifndef DATETIMEKIND_T3468814247_H
#define DATETIMEKIND_T3468814247_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTimeKind
struct  DateTimeKind_t3468814247 
{
public:
	// System.Int32 System.DateTimeKind::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DateTimeKind_t3468814247, ___value___1)); }
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
#endif // DATETIMEKIND_T3468814247_H
#ifndef FILEACCESS_T1659085276_H
#define FILEACCESS_T1659085276_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.FileAccess
struct  FileAccess_t1659085276 
{
public:
	// System.Int32 System.IO.FileAccess::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(FileAccess_t1659085276, ___value___1)); }
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
#endif // FILEACCESS_T1659085276_H
#ifndef FILEMODE_T1183438340_H
#define FILEMODE_T1183438340_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.FileMode
struct  FileMode_t1183438340 
{
public:
	// System.Int32 System.IO.FileMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(FileMode_t1183438340, ___value___1)); }
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
#endif // FILEMODE_T1183438340_H
#ifndef XMLOUTPUTMETHOD_T2185361861_H
#define XMLOUTPUTMETHOD_T2185361861_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlOutputMethod
struct  XmlOutputMethod_t2185361861 
{
public:
	// System.Int32 System.Xml.XmlOutputMethod::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(XmlOutputMethod_t2185361861, ___value___1)); }
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
#endif // XMLOUTPUTMETHOD_T2185361861_H
#ifndef NAMESPACEHANDLING_T4087553436_H
#define NAMESPACEHANDLING_T4087553436_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.NamespaceHandling
struct  NamespaceHandling_t4087553436 
{
public:
	// System.Int32 System.Xml.NamespaceHandling::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(NamespaceHandling_t4087553436, ___value___1)); }
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
#endif // NAMESPACEHANDLING_T4087553436_H
#ifndef XPATHNUMERICFUNCTION_T307051317_H
#define XPATHNUMERICFUNCTION_T307051317_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.XPathNumericFunction
struct  XPathNumericFunction_t307051317  : public XPathFunction_t857746608
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XPATHNUMERICFUNCTION_T307051317_H
#ifndef XMLSPACE_T3324193251_H
#define XMLSPACE_T3324193251_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlSpace
struct  XmlSpace_t3324193251 
{
public:
	// System.Int32 System.Xml.XmlSpace::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(XmlSpace_t3324193251, ___value___1)); }
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
#endif // XMLSPACE_T3324193251_H
#ifndef XPATHNODETYPE_T3031007223_H
#define XPATHNODETYPE_T3031007223_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.XPathNodeType
struct  XPathNodeType_t3031007223 
{
public:
	// System.Int32 System.Xml.XPath.XPathNodeType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(XPathNodeType_t3031007223, ___value___1)); }
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
#endif // XPATHNODETYPE_T3031007223_H
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
#ifndef XMLNODEORDER_T3385003529_H
#define XMLNODEORDER_T3385003529_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlNodeOrder
struct  XmlNodeOrder_t3385003529 
{
public:
	// System.Int32 System.Xml.XmlNodeOrder::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(XmlNodeOrder_t3385003529, ___value___1)); }
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
#endif // XMLNODEORDER_T3385003529_H
#ifndef VALIDATIONTYPE_T4049928607_H
#define VALIDATIONTYPE_T4049928607_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.ValidationType
struct  ValidationType_t4049928607 
{
public:
	// System.Int32 System.Xml.ValidationType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ValidationType_t4049928607, ___value___1)); }
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
#endif // VALIDATIONTYPE_T4049928607_H
#ifndef XMLCASEORDER_T176547839_H
#define XMLCASEORDER_T176547839_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.XmlCaseOrder
struct  XmlCaseOrder_t176547839 
{
public:
	// System.Int32 System.Xml.XPath.XmlCaseOrder::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(XmlCaseOrder_t176547839, ___value___1)); }
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
#endif // XMLCASEORDER_T176547839_H
#ifndef XMLSORTORDER_T4114893492_H
#define XMLSORTORDER_T4114893492_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.XmlSortOrder
struct  XmlSortOrder_t4114893492 
{
public:
	// System.Int32 System.Xml.XPath.XmlSortOrder::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(XmlSortOrder_t4114893492, ___value___1)); }
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
#endif // XMLSORTORDER_T4114893492_H
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
#ifndef CONFORMANCELEVEL_T3899847875_H
#define CONFORMANCELEVEL_T3899847875_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.ConformanceLevel
struct  ConformanceLevel_t3899847875 
{
public:
	// System.Int32 System.Xml.ConformanceLevel::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ConformanceLevel_t3899847875, ___value___1)); }
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
#endif // CONFORMANCELEVEL_T3899847875_H
#ifndef NOTSUPPORTEDEXCEPTION_T1314879016_H
#define NOTSUPPORTEDEXCEPTION_T1314879016_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.NotSupportedException
struct  NotSupportedException_t1314879016  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NOTSUPPORTEDEXCEPTION_T1314879016_H
#ifndef XPATHRESULTTYPE_T2828988488_H
#define XPATHRESULTTYPE_T2828988488_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.XPathResultType
struct  XPathResultType_t2828988488 
{
public:
	// System.Int32 System.Xml.XPath.XPathResultType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(XPathResultType_t2828988488, ___value___1)); }
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
#endif // XPATHRESULTTYPE_T2828988488_H
#ifndef XMLDATATYPE_T3437356259_H
#define XMLDATATYPE_T3437356259_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.XmlDataType
struct  XmlDataType_t3437356259 
{
public:
	// System.Int32 System.Xml.XPath.XmlDataType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(XmlDataType_t3437356259, ___value___1)); }
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
#endif // XMLDATATYPE_T3437356259_H
#ifndef XSLTEXCEPTION_T1876063340_H
#define XSLTEXCEPTION_T1876063340_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Xsl.XsltException
struct  XsltException_t1876063340  : public SystemException_t176217640
{
public:
	// System.Int32 System.Xml.Xsl.XsltException::lineNumber
	int32_t ___lineNumber_11;
	// System.Int32 System.Xml.Xsl.XsltException::linePosition
	int32_t ___linePosition_12;
	// System.String System.Xml.Xsl.XsltException::sourceUri
	String_t* ___sourceUri_13;
	// System.String System.Xml.Xsl.XsltException::templateFrames
	String_t* ___templateFrames_14;

public:
	inline static int32_t get_offset_of_lineNumber_11() { return static_cast<int32_t>(offsetof(XsltException_t1876063340, ___lineNumber_11)); }
	inline int32_t get_lineNumber_11() const { return ___lineNumber_11; }
	inline int32_t* get_address_of_lineNumber_11() { return &___lineNumber_11; }
	inline void set_lineNumber_11(int32_t value)
	{
		___lineNumber_11 = value;
	}

	inline static int32_t get_offset_of_linePosition_12() { return static_cast<int32_t>(offsetof(XsltException_t1876063340, ___linePosition_12)); }
	inline int32_t get_linePosition_12() const { return ___linePosition_12; }
	inline int32_t* get_address_of_linePosition_12() { return &___linePosition_12; }
	inline void set_linePosition_12(int32_t value)
	{
		___linePosition_12 = value;
	}

	inline static int32_t get_offset_of_sourceUri_13() { return static_cast<int32_t>(offsetof(XsltException_t1876063340, ___sourceUri_13)); }
	inline String_t* get_sourceUri_13() const { return ___sourceUri_13; }
	inline String_t** get_address_of_sourceUri_13() { return &___sourceUri_13; }
	inline void set_sourceUri_13(String_t* value)
	{
		___sourceUri_13 = value;
		Il2CppCodeGenWriteBarrier((&___sourceUri_13), value);
	}

	inline static int32_t get_offset_of_templateFrames_14() { return static_cast<int32_t>(offsetof(XsltException_t1876063340, ___templateFrames_14)); }
	inline String_t* get_templateFrames_14() const { return ___templateFrames_14; }
	inline String_t** get_address_of_templateFrames_14() { return &___templateFrames_14; }
	inline void set_templateFrames_14(String_t* value)
	{
		___templateFrames_14 = value;
		Il2CppCodeGenWriteBarrier((&___templateFrames_14), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XSLTEXCEPTION_T1876063340_H
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
#ifndef GENERICOUTPUTTER_T1694878872_H
#define GENERICOUTPUTTER_T1694878872_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Xml.Xsl.GenericOutputter
struct  GenericOutputter_t1694878872  : public Outputter_t889105973
{
public:
	// System.Collections.Hashtable Mono.Xml.Xsl.GenericOutputter::_outputs
	Hashtable_t1853889766 * ____outputs_0;
	// Mono.Xml.Xsl.XslOutput Mono.Xml.Xsl.GenericOutputter::_currentOutput
	XslOutput_t472631936 * ____currentOutput_1;
	// Mono.Xml.Xsl.Emitter Mono.Xml.Xsl.GenericOutputter::_emitter
	Emitter_t942443340 * ____emitter_2;
	// System.IO.TextWriter Mono.Xml.Xsl.GenericOutputter::pendingTextWriter
	TextWriter_t3478189236 * ___pendingTextWriter_3;
	// System.Text.StringBuilder Mono.Xml.Xsl.GenericOutputter::pendingFirstSpaces
	StringBuilder_t * ___pendingFirstSpaces_4;
	// System.Xml.WriteState Mono.Xml.Xsl.GenericOutputter::_state
	int32_t ____state_5;
	// Mono.Xml.Xsl.Attribute[] Mono.Xml.Xsl.GenericOutputter::pendingAttributes
	AttributeU5BU5D_t4194715064* ___pendingAttributes_6;
	// System.Int32 Mono.Xml.Xsl.GenericOutputter::pendingAttributesPos
	int32_t ___pendingAttributesPos_7;
	// System.Xml.XmlNamespaceManager Mono.Xml.Xsl.GenericOutputter::_nsManager
	XmlNamespaceManager_t418790500 * ____nsManager_8;
	// System.Collections.Specialized.ListDictionary Mono.Xml.Xsl.GenericOutputter::_currentNamespaceDecls
	ListDictionary_t1624492310 * ____currentNamespaceDecls_9;
	// System.Collections.ArrayList Mono.Xml.Xsl.GenericOutputter::newNamespaces
	ArrayList_t2718874744 * ___newNamespaces_10;
	// System.Xml.NameTable Mono.Xml.Xsl.GenericOutputter::_nt
	NameTable_t3178203267 * ____nt_11;
	// System.Text.Encoding Mono.Xml.Xsl.GenericOutputter::_encoding
	Encoding_t1523322056 * ____encoding_12;
	// System.Boolean Mono.Xml.Xsl.GenericOutputter::_canProcessAttributes
	bool ____canProcessAttributes_13;
	// System.Boolean Mono.Xml.Xsl.GenericOutputter::_insideCData
	bool ____insideCData_14;
	// System.Boolean Mono.Xml.Xsl.GenericOutputter::_omitXmlDeclaration
	bool ____omitXmlDeclaration_15;
	// System.Int32 Mono.Xml.Xsl.GenericOutputter::_xpCount
	int32_t ____xpCount_16;

public:
	inline static int32_t get_offset_of__outputs_0() { return static_cast<int32_t>(offsetof(GenericOutputter_t1694878872, ____outputs_0)); }
	inline Hashtable_t1853889766 * get__outputs_0() const { return ____outputs_0; }
	inline Hashtable_t1853889766 ** get_address_of__outputs_0() { return &____outputs_0; }
	inline void set__outputs_0(Hashtable_t1853889766 * value)
	{
		____outputs_0 = value;
		Il2CppCodeGenWriteBarrier((&____outputs_0), value);
	}

	inline static int32_t get_offset_of__currentOutput_1() { return static_cast<int32_t>(offsetof(GenericOutputter_t1694878872, ____currentOutput_1)); }
	inline XslOutput_t472631936 * get__currentOutput_1() const { return ____currentOutput_1; }
	inline XslOutput_t472631936 ** get_address_of__currentOutput_1() { return &____currentOutput_1; }
	inline void set__currentOutput_1(XslOutput_t472631936 * value)
	{
		____currentOutput_1 = value;
		Il2CppCodeGenWriteBarrier((&____currentOutput_1), value);
	}

	inline static int32_t get_offset_of__emitter_2() { return static_cast<int32_t>(offsetof(GenericOutputter_t1694878872, ____emitter_2)); }
	inline Emitter_t942443340 * get__emitter_2() const { return ____emitter_2; }
	inline Emitter_t942443340 ** get_address_of__emitter_2() { return &____emitter_2; }
	inline void set__emitter_2(Emitter_t942443340 * value)
	{
		____emitter_2 = value;
		Il2CppCodeGenWriteBarrier((&____emitter_2), value);
	}

	inline static int32_t get_offset_of_pendingTextWriter_3() { return static_cast<int32_t>(offsetof(GenericOutputter_t1694878872, ___pendingTextWriter_3)); }
	inline TextWriter_t3478189236 * get_pendingTextWriter_3() const { return ___pendingTextWriter_3; }
	inline TextWriter_t3478189236 ** get_address_of_pendingTextWriter_3() { return &___pendingTextWriter_3; }
	inline void set_pendingTextWriter_3(TextWriter_t3478189236 * value)
	{
		___pendingTextWriter_3 = value;
		Il2CppCodeGenWriteBarrier((&___pendingTextWriter_3), value);
	}

	inline static int32_t get_offset_of_pendingFirstSpaces_4() { return static_cast<int32_t>(offsetof(GenericOutputter_t1694878872, ___pendingFirstSpaces_4)); }
	inline StringBuilder_t * get_pendingFirstSpaces_4() const { return ___pendingFirstSpaces_4; }
	inline StringBuilder_t ** get_address_of_pendingFirstSpaces_4() { return &___pendingFirstSpaces_4; }
	inline void set_pendingFirstSpaces_4(StringBuilder_t * value)
	{
		___pendingFirstSpaces_4 = value;
		Il2CppCodeGenWriteBarrier((&___pendingFirstSpaces_4), value);
	}

	inline static int32_t get_offset_of__state_5() { return static_cast<int32_t>(offsetof(GenericOutputter_t1694878872, ____state_5)); }
	inline int32_t get__state_5() const { return ____state_5; }
	inline int32_t* get_address_of__state_5() { return &____state_5; }
	inline void set__state_5(int32_t value)
	{
		____state_5 = value;
	}

	inline static int32_t get_offset_of_pendingAttributes_6() { return static_cast<int32_t>(offsetof(GenericOutputter_t1694878872, ___pendingAttributes_6)); }
	inline AttributeU5BU5D_t4194715064* get_pendingAttributes_6() const { return ___pendingAttributes_6; }
	inline AttributeU5BU5D_t4194715064** get_address_of_pendingAttributes_6() { return &___pendingAttributes_6; }
	inline void set_pendingAttributes_6(AttributeU5BU5D_t4194715064* value)
	{
		___pendingAttributes_6 = value;
		Il2CppCodeGenWriteBarrier((&___pendingAttributes_6), value);
	}

	inline static int32_t get_offset_of_pendingAttributesPos_7() { return static_cast<int32_t>(offsetof(GenericOutputter_t1694878872, ___pendingAttributesPos_7)); }
	inline int32_t get_pendingAttributesPos_7() const { return ___pendingAttributesPos_7; }
	inline int32_t* get_address_of_pendingAttributesPos_7() { return &___pendingAttributesPos_7; }
	inline void set_pendingAttributesPos_7(int32_t value)
	{
		___pendingAttributesPos_7 = value;
	}

	inline static int32_t get_offset_of__nsManager_8() { return static_cast<int32_t>(offsetof(GenericOutputter_t1694878872, ____nsManager_8)); }
	inline XmlNamespaceManager_t418790500 * get__nsManager_8() const { return ____nsManager_8; }
	inline XmlNamespaceManager_t418790500 ** get_address_of__nsManager_8() { return &____nsManager_8; }
	inline void set__nsManager_8(XmlNamespaceManager_t418790500 * value)
	{
		____nsManager_8 = value;
		Il2CppCodeGenWriteBarrier((&____nsManager_8), value);
	}

	inline static int32_t get_offset_of__currentNamespaceDecls_9() { return static_cast<int32_t>(offsetof(GenericOutputter_t1694878872, ____currentNamespaceDecls_9)); }
	inline ListDictionary_t1624492310 * get__currentNamespaceDecls_9() const { return ____currentNamespaceDecls_9; }
	inline ListDictionary_t1624492310 ** get_address_of__currentNamespaceDecls_9() { return &____currentNamespaceDecls_9; }
	inline void set__currentNamespaceDecls_9(ListDictionary_t1624492310 * value)
	{
		____currentNamespaceDecls_9 = value;
		Il2CppCodeGenWriteBarrier((&____currentNamespaceDecls_9), value);
	}

	inline static int32_t get_offset_of_newNamespaces_10() { return static_cast<int32_t>(offsetof(GenericOutputter_t1694878872, ___newNamespaces_10)); }
	inline ArrayList_t2718874744 * get_newNamespaces_10() const { return ___newNamespaces_10; }
	inline ArrayList_t2718874744 ** get_address_of_newNamespaces_10() { return &___newNamespaces_10; }
	inline void set_newNamespaces_10(ArrayList_t2718874744 * value)
	{
		___newNamespaces_10 = value;
		Il2CppCodeGenWriteBarrier((&___newNamespaces_10), value);
	}

	inline static int32_t get_offset_of__nt_11() { return static_cast<int32_t>(offsetof(GenericOutputter_t1694878872, ____nt_11)); }
	inline NameTable_t3178203267 * get__nt_11() const { return ____nt_11; }
	inline NameTable_t3178203267 ** get_address_of__nt_11() { return &____nt_11; }
	inline void set__nt_11(NameTable_t3178203267 * value)
	{
		____nt_11 = value;
		Il2CppCodeGenWriteBarrier((&____nt_11), value);
	}

	inline static int32_t get_offset_of__encoding_12() { return static_cast<int32_t>(offsetof(GenericOutputter_t1694878872, ____encoding_12)); }
	inline Encoding_t1523322056 * get__encoding_12() const { return ____encoding_12; }
	inline Encoding_t1523322056 ** get_address_of__encoding_12() { return &____encoding_12; }
	inline void set__encoding_12(Encoding_t1523322056 * value)
	{
		____encoding_12 = value;
		Il2CppCodeGenWriteBarrier((&____encoding_12), value);
	}

	inline static int32_t get_offset_of__canProcessAttributes_13() { return static_cast<int32_t>(offsetof(GenericOutputter_t1694878872, ____canProcessAttributes_13)); }
	inline bool get__canProcessAttributes_13() const { return ____canProcessAttributes_13; }
	inline bool* get_address_of__canProcessAttributes_13() { return &____canProcessAttributes_13; }
	inline void set__canProcessAttributes_13(bool value)
	{
		____canProcessAttributes_13 = value;
	}

	inline static int32_t get_offset_of__insideCData_14() { return static_cast<int32_t>(offsetof(GenericOutputter_t1694878872, ____insideCData_14)); }
	inline bool get__insideCData_14() const { return ____insideCData_14; }
	inline bool* get_address_of__insideCData_14() { return &____insideCData_14; }
	inline void set__insideCData_14(bool value)
	{
		____insideCData_14 = value;
	}

	inline static int32_t get_offset_of__omitXmlDeclaration_15() { return static_cast<int32_t>(offsetof(GenericOutputter_t1694878872, ____omitXmlDeclaration_15)); }
	inline bool get__omitXmlDeclaration_15() const { return ____omitXmlDeclaration_15; }
	inline bool* get_address_of__omitXmlDeclaration_15() { return &____omitXmlDeclaration_15; }
	inline void set__omitXmlDeclaration_15(bool value)
	{
		____omitXmlDeclaration_15 = value;
	}

	inline static int32_t get_offset_of__xpCount_16() { return static_cast<int32_t>(offsetof(GenericOutputter_t1694878872, ____xpCount_16)); }
	inline int32_t get__xpCount_16() const { return ____xpCount_16; }
	inline int32_t* get_address_of__xpCount_16() { return &____xpCount_16; }
	inline void set__xpCount_16(int32_t value)
	{
		____xpCount_16 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GENERICOUTPUTTER_T1694878872_H
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
#ifndef XSLOUTPUT_T472631936_H
#define XSLOUTPUT_T472631936_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Xml.Xsl.XslOutput
struct  XslOutput_t472631936  : public RuntimeObject
{
public:
	// System.String Mono.Xml.Xsl.XslOutput::uri
	String_t* ___uri_0;
	// System.Xml.XmlQualifiedName Mono.Xml.Xsl.XslOutput::customMethod
	XmlQualifiedName_t2760654312 * ___customMethod_1;
	// Mono.Xml.Xsl.OutputMethod Mono.Xml.Xsl.XslOutput::method
	int32_t ___method_2;
	// System.String Mono.Xml.Xsl.XslOutput::version
	String_t* ___version_3;
	// System.Text.Encoding Mono.Xml.Xsl.XslOutput::encoding
	Encoding_t1523322056 * ___encoding_4;
	// System.Boolean Mono.Xml.Xsl.XslOutput::omitXmlDeclaration
	bool ___omitXmlDeclaration_5;
	// Mono.Xml.Xsl.StandaloneType Mono.Xml.Xsl.XslOutput::standalone
	int32_t ___standalone_6;
	// System.String Mono.Xml.Xsl.XslOutput::doctypePublic
	String_t* ___doctypePublic_7;
	// System.String Mono.Xml.Xsl.XslOutput::doctypeSystem
	String_t* ___doctypeSystem_8;
	// System.Xml.XmlQualifiedName[] Mono.Xml.Xsl.XslOutput::cdataSectionElements
	XmlQualifiedNameU5BU5D_t1471530361* ___cdataSectionElements_9;
	// System.String Mono.Xml.Xsl.XslOutput::indent
	String_t* ___indent_10;
	// System.String Mono.Xml.Xsl.XslOutput::mediaType
	String_t* ___mediaType_11;
	// System.String Mono.Xml.Xsl.XslOutput::stylesheetVersion
	String_t* ___stylesheetVersion_12;
	// System.Collections.ArrayList Mono.Xml.Xsl.XslOutput::cdSectsList
	ArrayList_t2718874744 * ___cdSectsList_13;

public:
	inline static int32_t get_offset_of_uri_0() { return static_cast<int32_t>(offsetof(XslOutput_t472631936, ___uri_0)); }
	inline String_t* get_uri_0() const { return ___uri_0; }
	inline String_t** get_address_of_uri_0() { return &___uri_0; }
	inline void set_uri_0(String_t* value)
	{
		___uri_0 = value;
		Il2CppCodeGenWriteBarrier((&___uri_0), value);
	}

	inline static int32_t get_offset_of_customMethod_1() { return static_cast<int32_t>(offsetof(XslOutput_t472631936, ___customMethod_1)); }
	inline XmlQualifiedName_t2760654312 * get_customMethod_1() const { return ___customMethod_1; }
	inline XmlQualifiedName_t2760654312 ** get_address_of_customMethod_1() { return &___customMethod_1; }
	inline void set_customMethod_1(XmlQualifiedName_t2760654312 * value)
	{
		___customMethod_1 = value;
		Il2CppCodeGenWriteBarrier((&___customMethod_1), value);
	}

	inline static int32_t get_offset_of_method_2() { return static_cast<int32_t>(offsetof(XslOutput_t472631936, ___method_2)); }
	inline int32_t get_method_2() const { return ___method_2; }
	inline int32_t* get_address_of_method_2() { return &___method_2; }
	inline void set_method_2(int32_t value)
	{
		___method_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(XslOutput_t472631936, ___version_3)); }
	inline String_t* get_version_3() const { return ___version_3; }
	inline String_t** get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(String_t* value)
	{
		___version_3 = value;
		Il2CppCodeGenWriteBarrier((&___version_3), value);
	}

	inline static int32_t get_offset_of_encoding_4() { return static_cast<int32_t>(offsetof(XslOutput_t472631936, ___encoding_4)); }
	inline Encoding_t1523322056 * get_encoding_4() const { return ___encoding_4; }
	inline Encoding_t1523322056 ** get_address_of_encoding_4() { return &___encoding_4; }
	inline void set_encoding_4(Encoding_t1523322056 * value)
	{
		___encoding_4 = value;
		Il2CppCodeGenWriteBarrier((&___encoding_4), value);
	}

	inline static int32_t get_offset_of_omitXmlDeclaration_5() { return static_cast<int32_t>(offsetof(XslOutput_t472631936, ___omitXmlDeclaration_5)); }
	inline bool get_omitXmlDeclaration_5() const { return ___omitXmlDeclaration_5; }
	inline bool* get_address_of_omitXmlDeclaration_5() { return &___omitXmlDeclaration_5; }
	inline void set_omitXmlDeclaration_5(bool value)
	{
		___omitXmlDeclaration_5 = value;
	}

	inline static int32_t get_offset_of_standalone_6() { return static_cast<int32_t>(offsetof(XslOutput_t472631936, ___standalone_6)); }
	inline int32_t get_standalone_6() const { return ___standalone_6; }
	inline int32_t* get_address_of_standalone_6() { return &___standalone_6; }
	inline void set_standalone_6(int32_t value)
	{
		___standalone_6 = value;
	}

	inline static int32_t get_offset_of_doctypePublic_7() { return static_cast<int32_t>(offsetof(XslOutput_t472631936, ___doctypePublic_7)); }
	inline String_t* get_doctypePublic_7() const { return ___doctypePublic_7; }
	inline String_t** get_address_of_doctypePublic_7() { return &___doctypePublic_7; }
	inline void set_doctypePublic_7(String_t* value)
	{
		___doctypePublic_7 = value;
		Il2CppCodeGenWriteBarrier((&___doctypePublic_7), value);
	}

	inline static int32_t get_offset_of_doctypeSystem_8() { return static_cast<int32_t>(offsetof(XslOutput_t472631936, ___doctypeSystem_8)); }
	inline String_t* get_doctypeSystem_8() const { return ___doctypeSystem_8; }
	inline String_t** get_address_of_doctypeSystem_8() { return &___doctypeSystem_8; }
	inline void set_doctypeSystem_8(String_t* value)
	{
		___doctypeSystem_8 = value;
		Il2CppCodeGenWriteBarrier((&___doctypeSystem_8), value);
	}

	inline static int32_t get_offset_of_cdataSectionElements_9() { return static_cast<int32_t>(offsetof(XslOutput_t472631936, ___cdataSectionElements_9)); }
	inline XmlQualifiedNameU5BU5D_t1471530361* get_cdataSectionElements_9() const { return ___cdataSectionElements_9; }
	inline XmlQualifiedNameU5BU5D_t1471530361** get_address_of_cdataSectionElements_9() { return &___cdataSectionElements_9; }
	inline void set_cdataSectionElements_9(XmlQualifiedNameU5BU5D_t1471530361* value)
	{
		___cdataSectionElements_9 = value;
		Il2CppCodeGenWriteBarrier((&___cdataSectionElements_9), value);
	}

	inline static int32_t get_offset_of_indent_10() { return static_cast<int32_t>(offsetof(XslOutput_t472631936, ___indent_10)); }
	inline String_t* get_indent_10() const { return ___indent_10; }
	inline String_t** get_address_of_indent_10() { return &___indent_10; }
	inline void set_indent_10(String_t* value)
	{
		___indent_10 = value;
		Il2CppCodeGenWriteBarrier((&___indent_10), value);
	}

	inline static int32_t get_offset_of_mediaType_11() { return static_cast<int32_t>(offsetof(XslOutput_t472631936, ___mediaType_11)); }
	inline String_t* get_mediaType_11() const { return ___mediaType_11; }
	inline String_t** get_address_of_mediaType_11() { return &___mediaType_11; }
	inline void set_mediaType_11(String_t* value)
	{
		___mediaType_11 = value;
		Il2CppCodeGenWriteBarrier((&___mediaType_11), value);
	}

	inline static int32_t get_offset_of_stylesheetVersion_12() { return static_cast<int32_t>(offsetof(XslOutput_t472631936, ___stylesheetVersion_12)); }
	inline String_t* get_stylesheetVersion_12() const { return ___stylesheetVersion_12; }
	inline String_t** get_address_of_stylesheetVersion_12() { return &___stylesheetVersion_12; }
	inline void set_stylesheetVersion_12(String_t* value)
	{
		___stylesheetVersion_12 = value;
		Il2CppCodeGenWriteBarrier((&___stylesheetVersion_12), value);
	}

	inline static int32_t get_offset_of_cdSectsList_13() { return static_cast<int32_t>(offsetof(XslOutput_t472631936, ___cdSectsList_13)); }
	inline ArrayList_t2718874744 * get_cdSectsList_13() const { return ___cdSectsList_13; }
	inline ArrayList_t2718874744 ** get_address_of_cdSectsList_13() { return &___cdSectsList_13; }
	inline void set_cdSectsList_13(ArrayList_t2718874744 * value)
	{
		___cdSectsList_13 = value;
		Il2CppCodeGenWriteBarrier((&___cdSectsList_13), value);
	}
};

struct XslOutput_t472631936_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Xml.Xsl.XslOutput::<>f__switch$map1F
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map1F_14;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Xml.Xsl.XslOutput::<>f__switch$map20
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map20_15;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Xml.Xsl.XslOutput::<>f__switch$map21
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map21_16;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Xml.Xsl.XslOutput::<>f__switch$map22
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map22_17;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Xml.Xsl.XslOutput::<>f__switch$map23
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map23_18;

public:
	inline static int32_t get_offset_of_U3CU3Ef__switchU24map1F_14() { return static_cast<int32_t>(offsetof(XslOutput_t472631936_StaticFields, ___U3CU3Ef__switchU24map1F_14)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map1F_14() const { return ___U3CU3Ef__switchU24map1F_14; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map1F_14() { return &___U3CU3Ef__switchU24map1F_14; }
	inline void set_U3CU3Ef__switchU24map1F_14(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map1F_14 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map1F_14), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map20_15() { return static_cast<int32_t>(offsetof(XslOutput_t472631936_StaticFields, ___U3CU3Ef__switchU24map20_15)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map20_15() const { return ___U3CU3Ef__switchU24map20_15; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map20_15() { return &___U3CU3Ef__switchU24map20_15; }
	inline void set_U3CU3Ef__switchU24map20_15(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map20_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map20_15), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map21_16() { return static_cast<int32_t>(offsetof(XslOutput_t472631936_StaticFields, ___U3CU3Ef__switchU24map21_16)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map21_16() const { return ___U3CU3Ef__switchU24map21_16; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map21_16() { return &___U3CU3Ef__switchU24map21_16; }
	inline void set_U3CU3Ef__switchU24map21_16(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map21_16 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map21_16), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map22_17() { return static_cast<int32_t>(offsetof(XslOutput_t472631936_StaticFields, ___U3CU3Ef__switchU24map22_17)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map22_17() const { return ___U3CU3Ef__switchU24map22_17; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map22_17() { return &___U3CU3Ef__switchU24map22_17; }
	inline void set_U3CU3Ef__switchU24map22_17(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map22_17 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map22_17), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map23_18() { return static_cast<int32_t>(offsetof(XslOutput_t472631936_StaticFields, ___U3CU3Ef__switchU24map23_18)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map23_18() const { return ___U3CU3Ef__switchU24map23_18; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map23_18() { return &___U3CU3Ef__switchU24map23_18; }
	inline void set_U3CU3Ef__switchU24map23_18(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map23_18 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map23_18), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XSLOUTPUT_T472631936_H
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
#ifndef XPATHSORTER_T36376808_H
#define XPATHSORTER_T36376808_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.XPathSorter
struct  XPathSorter_t36376808  : public RuntimeObject
{
public:
	// System.Xml.XPath.Expression System.Xml.XPath.XPathSorter::_expr
	Expression_t1452783009 * ____expr_0;
	// System.Collections.IComparer System.Xml.XPath.XPathSorter::_cmp
	RuntimeObject* ____cmp_1;
	// System.Xml.XPath.XmlDataType System.Xml.XPath.XPathSorter::_type
	int32_t ____type_2;

public:
	inline static int32_t get_offset_of__expr_0() { return static_cast<int32_t>(offsetof(XPathSorter_t36376808, ____expr_0)); }
	inline Expression_t1452783009 * get__expr_0() const { return ____expr_0; }
	inline Expression_t1452783009 ** get_address_of__expr_0() { return &____expr_0; }
	inline void set__expr_0(Expression_t1452783009 * value)
	{
		____expr_0 = value;
		Il2CppCodeGenWriteBarrier((&____expr_0), value);
	}

	inline static int32_t get_offset_of__cmp_1() { return static_cast<int32_t>(offsetof(XPathSorter_t36376808, ____cmp_1)); }
	inline RuntimeObject* get__cmp_1() const { return ____cmp_1; }
	inline RuntimeObject** get_address_of__cmp_1() { return &____cmp_1; }
	inline void set__cmp_1(RuntimeObject* value)
	{
		____cmp_1 = value;
		Il2CppCodeGenWriteBarrier((&____cmp_1), value);
	}

	inline static int32_t get_offset_of__type_2() { return static_cast<int32_t>(offsetof(XPathSorter_t36376808, ____type_2)); }
	inline int32_t get__type_2() const { return ____type_2; }
	inline int32_t* get_address_of__type_2() { return &____type_2; }
	inline void set__type_2(int32_t value)
	{
		____type_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XPATHSORTER_T36376808_H
#ifndef XMLWRITERSETTINGS_T3314986516_H
#define XMLWRITERSETTINGS_T3314986516_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlWriterSettings
struct  XmlWriterSettings_t3314986516  : public RuntimeObject
{
public:
	// System.Boolean System.Xml.XmlWriterSettings::checkCharacters
	bool ___checkCharacters_0;
	// System.Boolean System.Xml.XmlWriterSettings::closeOutput
	bool ___closeOutput_1;
	// System.Xml.ConformanceLevel System.Xml.XmlWriterSettings::conformance
	int32_t ___conformance_2;
	// System.Text.Encoding System.Xml.XmlWriterSettings::encoding
	Encoding_t1523322056 * ___encoding_3;
	// System.Boolean System.Xml.XmlWriterSettings::indent
	bool ___indent_4;
	// System.String System.Xml.XmlWriterSettings::indentChars
	String_t* ___indentChars_5;
	// System.String System.Xml.XmlWriterSettings::newLineChars
	String_t* ___newLineChars_6;
	// System.Boolean System.Xml.XmlWriterSettings::newLineOnAttributes
	bool ___newLineOnAttributes_7;
	// System.Xml.NewLineHandling System.Xml.XmlWriterSettings::newLineHandling
	int32_t ___newLineHandling_8;
	// System.Boolean System.Xml.XmlWriterSettings::omitXmlDeclaration
	bool ___omitXmlDeclaration_9;
	// System.Xml.XmlOutputMethod System.Xml.XmlWriterSettings::outputMethod
	int32_t ___outputMethod_10;
	// System.Xml.NamespaceHandling System.Xml.XmlWriterSettings::<NamespaceHandling>k__BackingField
	int32_t ___U3CNamespaceHandlingU3Ek__BackingField_11;

public:
	inline static int32_t get_offset_of_checkCharacters_0() { return static_cast<int32_t>(offsetof(XmlWriterSettings_t3314986516, ___checkCharacters_0)); }
	inline bool get_checkCharacters_0() const { return ___checkCharacters_0; }
	inline bool* get_address_of_checkCharacters_0() { return &___checkCharacters_0; }
	inline void set_checkCharacters_0(bool value)
	{
		___checkCharacters_0 = value;
	}

	inline static int32_t get_offset_of_closeOutput_1() { return static_cast<int32_t>(offsetof(XmlWriterSettings_t3314986516, ___closeOutput_1)); }
	inline bool get_closeOutput_1() const { return ___closeOutput_1; }
	inline bool* get_address_of_closeOutput_1() { return &___closeOutput_1; }
	inline void set_closeOutput_1(bool value)
	{
		___closeOutput_1 = value;
	}

	inline static int32_t get_offset_of_conformance_2() { return static_cast<int32_t>(offsetof(XmlWriterSettings_t3314986516, ___conformance_2)); }
	inline int32_t get_conformance_2() const { return ___conformance_2; }
	inline int32_t* get_address_of_conformance_2() { return &___conformance_2; }
	inline void set_conformance_2(int32_t value)
	{
		___conformance_2 = value;
	}

	inline static int32_t get_offset_of_encoding_3() { return static_cast<int32_t>(offsetof(XmlWriterSettings_t3314986516, ___encoding_3)); }
	inline Encoding_t1523322056 * get_encoding_3() const { return ___encoding_3; }
	inline Encoding_t1523322056 ** get_address_of_encoding_3() { return &___encoding_3; }
	inline void set_encoding_3(Encoding_t1523322056 * value)
	{
		___encoding_3 = value;
		Il2CppCodeGenWriteBarrier((&___encoding_3), value);
	}

	inline static int32_t get_offset_of_indent_4() { return static_cast<int32_t>(offsetof(XmlWriterSettings_t3314986516, ___indent_4)); }
	inline bool get_indent_4() const { return ___indent_4; }
	inline bool* get_address_of_indent_4() { return &___indent_4; }
	inline void set_indent_4(bool value)
	{
		___indent_4 = value;
	}

	inline static int32_t get_offset_of_indentChars_5() { return static_cast<int32_t>(offsetof(XmlWriterSettings_t3314986516, ___indentChars_5)); }
	inline String_t* get_indentChars_5() const { return ___indentChars_5; }
	inline String_t** get_address_of_indentChars_5() { return &___indentChars_5; }
	inline void set_indentChars_5(String_t* value)
	{
		___indentChars_5 = value;
		Il2CppCodeGenWriteBarrier((&___indentChars_5), value);
	}

	inline static int32_t get_offset_of_newLineChars_6() { return static_cast<int32_t>(offsetof(XmlWriterSettings_t3314986516, ___newLineChars_6)); }
	inline String_t* get_newLineChars_6() const { return ___newLineChars_6; }
	inline String_t** get_address_of_newLineChars_6() { return &___newLineChars_6; }
	inline void set_newLineChars_6(String_t* value)
	{
		___newLineChars_6 = value;
		Il2CppCodeGenWriteBarrier((&___newLineChars_6), value);
	}

	inline static int32_t get_offset_of_newLineOnAttributes_7() { return static_cast<int32_t>(offsetof(XmlWriterSettings_t3314986516, ___newLineOnAttributes_7)); }
	inline bool get_newLineOnAttributes_7() const { return ___newLineOnAttributes_7; }
	inline bool* get_address_of_newLineOnAttributes_7() { return &___newLineOnAttributes_7; }
	inline void set_newLineOnAttributes_7(bool value)
	{
		___newLineOnAttributes_7 = value;
	}

	inline static int32_t get_offset_of_newLineHandling_8() { return static_cast<int32_t>(offsetof(XmlWriterSettings_t3314986516, ___newLineHandling_8)); }
	inline int32_t get_newLineHandling_8() const { return ___newLineHandling_8; }
	inline int32_t* get_address_of_newLineHandling_8() { return &___newLineHandling_8; }
	inline void set_newLineHandling_8(int32_t value)
	{
		___newLineHandling_8 = value;
	}

	inline static int32_t get_offset_of_omitXmlDeclaration_9() { return static_cast<int32_t>(offsetof(XmlWriterSettings_t3314986516, ___omitXmlDeclaration_9)); }
	inline bool get_omitXmlDeclaration_9() const { return ___omitXmlDeclaration_9; }
	inline bool* get_address_of_omitXmlDeclaration_9() { return &___omitXmlDeclaration_9; }
	inline void set_omitXmlDeclaration_9(bool value)
	{
		___omitXmlDeclaration_9 = value;
	}

	inline static int32_t get_offset_of_outputMethod_10() { return static_cast<int32_t>(offsetof(XmlWriterSettings_t3314986516, ___outputMethod_10)); }
	inline int32_t get_outputMethod_10() const { return ___outputMethod_10; }
	inline int32_t* get_address_of_outputMethod_10() { return &___outputMethod_10; }
	inline void set_outputMethod_10(int32_t value)
	{
		___outputMethod_10 = value;
	}

	inline static int32_t get_offset_of_U3CNamespaceHandlingU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(XmlWriterSettings_t3314986516, ___U3CNamespaceHandlingU3Ek__BackingField_11)); }
	inline int32_t get_U3CNamespaceHandlingU3Ek__BackingField_11() const { return ___U3CNamespaceHandlingU3Ek__BackingField_11; }
	inline int32_t* get_address_of_U3CNamespaceHandlingU3Ek__BackingField_11() { return &___U3CNamespaceHandlingU3Ek__BackingField_11; }
	inline void set_U3CNamespaceHandlingU3Ek__BackingField_11(int32_t value)
	{
		___U3CNamespaceHandlingU3Ek__BackingField_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLWRITERSETTINGS_T3314986516_H
#ifndef XMLPARSERCONTEXT_T2544895291_H
#define XMLPARSERCONTEXT_T2544895291_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlParserContext
struct  XmlParserContext_t2544895291  : public RuntimeObject
{
public:
	// System.String System.Xml.XmlParserContext::baseURI
	String_t* ___baseURI_0;
	// System.String System.Xml.XmlParserContext::docTypeName
	String_t* ___docTypeName_1;
	// System.Text.Encoding System.Xml.XmlParserContext::encoding
	Encoding_t1523322056 * ___encoding_2;
	// System.String System.Xml.XmlParserContext::internalSubset
	String_t* ___internalSubset_3;
	// System.Xml.XmlNamespaceManager System.Xml.XmlParserContext::namespaceManager
	XmlNamespaceManager_t418790500 * ___namespaceManager_4;
	// System.Xml.XmlNameTable System.Xml.XmlParserContext::nameTable
	XmlNameTable_t71772148 * ___nameTable_5;
	// System.String System.Xml.XmlParserContext::publicID
	String_t* ___publicID_6;
	// System.String System.Xml.XmlParserContext::systemID
	String_t* ___systemID_7;
	// System.String System.Xml.XmlParserContext::xmlLang
	String_t* ___xmlLang_8;
	// System.Xml.XmlSpace System.Xml.XmlParserContext::xmlSpace
	int32_t ___xmlSpace_9;
	// System.Collections.ArrayList System.Xml.XmlParserContext::contextItems
	ArrayList_t2718874744 * ___contextItems_10;
	// System.Int32 System.Xml.XmlParserContext::contextItemCount
	int32_t ___contextItemCount_11;
	// Mono.Xml.DTDObjectModel System.Xml.XmlParserContext::dtd
	DTDObjectModel_t1729680289 * ___dtd_12;

public:
	inline static int32_t get_offset_of_baseURI_0() { return static_cast<int32_t>(offsetof(XmlParserContext_t2544895291, ___baseURI_0)); }
	inline String_t* get_baseURI_0() const { return ___baseURI_0; }
	inline String_t** get_address_of_baseURI_0() { return &___baseURI_0; }
	inline void set_baseURI_0(String_t* value)
	{
		___baseURI_0 = value;
		Il2CppCodeGenWriteBarrier((&___baseURI_0), value);
	}

	inline static int32_t get_offset_of_docTypeName_1() { return static_cast<int32_t>(offsetof(XmlParserContext_t2544895291, ___docTypeName_1)); }
	inline String_t* get_docTypeName_1() const { return ___docTypeName_1; }
	inline String_t** get_address_of_docTypeName_1() { return &___docTypeName_1; }
	inline void set_docTypeName_1(String_t* value)
	{
		___docTypeName_1 = value;
		Il2CppCodeGenWriteBarrier((&___docTypeName_1), value);
	}

	inline static int32_t get_offset_of_encoding_2() { return static_cast<int32_t>(offsetof(XmlParserContext_t2544895291, ___encoding_2)); }
	inline Encoding_t1523322056 * get_encoding_2() const { return ___encoding_2; }
	inline Encoding_t1523322056 ** get_address_of_encoding_2() { return &___encoding_2; }
	inline void set_encoding_2(Encoding_t1523322056 * value)
	{
		___encoding_2 = value;
		Il2CppCodeGenWriteBarrier((&___encoding_2), value);
	}

	inline static int32_t get_offset_of_internalSubset_3() { return static_cast<int32_t>(offsetof(XmlParserContext_t2544895291, ___internalSubset_3)); }
	inline String_t* get_internalSubset_3() const { return ___internalSubset_3; }
	inline String_t** get_address_of_internalSubset_3() { return &___internalSubset_3; }
	inline void set_internalSubset_3(String_t* value)
	{
		___internalSubset_3 = value;
		Il2CppCodeGenWriteBarrier((&___internalSubset_3), value);
	}

	inline static int32_t get_offset_of_namespaceManager_4() { return static_cast<int32_t>(offsetof(XmlParserContext_t2544895291, ___namespaceManager_4)); }
	inline XmlNamespaceManager_t418790500 * get_namespaceManager_4() const { return ___namespaceManager_4; }
	inline XmlNamespaceManager_t418790500 ** get_address_of_namespaceManager_4() { return &___namespaceManager_4; }
	inline void set_namespaceManager_4(XmlNamespaceManager_t418790500 * value)
	{
		___namespaceManager_4 = value;
		Il2CppCodeGenWriteBarrier((&___namespaceManager_4), value);
	}

	inline static int32_t get_offset_of_nameTable_5() { return static_cast<int32_t>(offsetof(XmlParserContext_t2544895291, ___nameTable_5)); }
	inline XmlNameTable_t71772148 * get_nameTable_5() const { return ___nameTable_5; }
	inline XmlNameTable_t71772148 ** get_address_of_nameTable_5() { return &___nameTable_5; }
	inline void set_nameTable_5(XmlNameTable_t71772148 * value)
	{
		___nameTable_5 = value;
		Il2CppCodeGenWriteBarrier((&___nameTable_5), value);
	}

	inline static int32_t get_offset_of_publicID_6() { return static_cast<int32_t>(offsetof(XmlParserContext_t2544895291, ___publicID_6)); }
	inline String_t* get_publicID_6() const { return ___publicID_6; }
	inline String_t** get_address_of_publicID_6() { return &___publicID_6; }
	inline void set_publicID_6(String_t* value)
	{
		___publicID_6 = value;
		Il2CppCodeGenWriteBarrier((&___publicID_6), value);
	}

	inline static int32_t get_offset_of_systemID_7() { return static_cast<int32_t>(offsetof(XmlParserContext_t2544895291, ___systemID_7)); }
	inline String_t* get_systemID_7() const { return ___systemID_7; }
	inline String_t** get_address_of_systemID_7() { return &___systemID_7; }
	inline void set_systemID_7(String_t* value)
	{
		___systemID_7 = value;
		Il2CppCodeGenWriteBarrier((&___systemID_7), value);
	}

	inline static int32_t get_offset_of_xmlLang_8() { return static_cast<int32_t>(offsetof(XmlParserContext_t2544895291, ___xmlLang_8)); }
	inline String_t* get_xmlLang_8() const { return ___xmlLang_8; }
	inline String_t** get_address_of_xmlLang_8() { return &___xmlLang_8; }
	inline void set_xmlLang_8(String_t* value)
	{
		___xmlLang_8 = value;
		Il2CppCodeGenWriteBarrier((&___xmlLang_8), value);
	}

	inline static int32_t get_offset_of_xmlSpace_9() { return static_cast<int32_t>(offsetof(XmlParserContext_t2544895291, ___xmlSpace_9)); }
	inline int32_t get_xmlSpace_9() const { return ___xmlSpace_9; }
	inline int32_t* get_address_of_xmlSpace_9() { return &___xmlSpace_9; }
	inline void set_xmlSpace_9(int32_t value)
	{
		___xmlSpace_9 = value;
	}

	inline static int32_t get_offset_of_contextItems_10() { return static_cast<int32_t>(offsetof(XmlParserContext_t2544895291, ___contextItems_10)); }
	inline ArrayList_t2718874744 * get_contextItems_10() const { return ___contextItems_10; }
	inline ArrayList_t2718874744 ** get_address_of_contextItems_10() { return &___contextItems_10; }
	inline void set_contextItems_10(ArrayList_t2718874744 * value)
	{
		___contextItems_10 = value;
		Il2CppCodeGenWriteBarrier((&___contextItems_10), value);
	}

	inline static int32_t get_offset_of_contextItemCount_11() { return static_cast<int32_t>(offsetof(XmlParserContext_t2544895291, ___contextItemCount_11)); }
	inline int32_t get_contextItemCount_11() const { return ___contextItemCount_11; }
	inline int32_t* get_address_of_contextItemCount_11() { return &___contextItemCount_11; }
	inline void set_contextItemCount_11(int32_t value)
	{
		___contextItemCount_11 = value;
	}

	inline static int32_t get_offset_of_dtd_12() { return static_cast<int32_t>(offsetof(XmlParserContext_t2544895291, ___dtd_12)); }
	inline DTDObjectModel_t1729680289 * get_dtd_12() const { return ___dtd_12; }
	inline DTDObjectModel_t1729680289 ** get_address_of_dtd_12() { return &___dtd_12; }
	inline void set_dtd_12(DTDObjectModel_t1729680289 * value)
	{
		___dtd_12 = value;
		Il2CppCodeGenWriteBarrier((&___dtd_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLPARSERCONTEXT_T2544895291_H
#ifndef DATETIME_T3738529785_H
#define DATETIME_T3738529785_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTime
struct  DateTime_t3738529785 
{
public:
	// System.TimeSpan System.DateTime::ticks
	TimeSpan_t881159249  ___ticks_0;
	// System.DateTimeKind System.DateTime::kind
	int32_t ___kind_1;

public:
	inline static int32_t get_offset_of_ticks_0() { return static_cast<int32_t>(offsetof(DateTime_t3738529785, ___ticks_0)); }
	inline TimeSpan_t881159249  get_ticks_0() const { return ___ticks_0; }
	inline TimeSpan_t881159249 * get_address_of_ticks_0() { return &___ticks_0; }
	inline void set_ticks_0(TimeSpan_t881159249  value)
	{
		___ticks_0 = value;
	}

	inline static int32_t get_offset_of_kind_1() { return static_cast<int32_t>(offsetof(DateTime_t3738529785, ___kind_1)); }
	inline int32_t get_kind_1() const { return ___kind_1; }
	inline int32_t* get_address_of_kind_1() { return &___kind_1; }
	inline void set_kind_1(int32_t value)
	{
		___kind_1 = value;
	}
};

struct DateTime_t3738529785_StaticFields
{
public:
	// System.DateTime System.DateTime::MaxValue
	DateTime_t3738529785  ___MaxValue_2;
	// System.DateTime System.DateTime::MinValue
	DateTime_t3738529785  ___MinValue_3;
	// System.String[] System.DateTime::ParseTimeFormats
	StringU5BU5D_t1281789340* ___ParseTimeFormats_4;
	// System.String[] System.DateTime::ParseYearDayMonthFormats
	StringU5BU5D_t1281789340* ___ParseYearDayMonthFormats_5;
	// System.String[] System.DateTime::ParseYearMonthDayFormats
	StringU5BU5D_t1281789340* ___ParseYearMonthDayFormats_6;
	// System.String[] System.DateTime::ParseDayMonthYearFormats
	StringU5BU5D_t1281789340* ___ParseDayMonthYearFormats_7;
	// System.String[] System.DateTime::ParseMonthDayYearFormats
	StringU5BU5D_t1281789340* ___ParseMonthDayYearFormats_8;
	// System.String[] System.DateTime::MonthDayShortFormats
	StringU5BU5D_t1281789340* ___MonthDayShortFormats_9;
	// System.String[] System.DateTime::DayMonthShortFormats
	StringU5BU5D_t1281789340* ___DayMonthShortFormats_10;
	// System.Int32[] System.DateTime::daysmonth
	Int32U5BU5D_t385246372* ___daysmonth_11;
	// System.Int32[] System.DateTime::daysmonthleap
	Int32U5BU5D_t385246372* ___daysmonthleap_12;
	// System.Object System.DateTime::to_local_time_span_object
	RuntimeObject * ___to_local_time_span_object_13;
	// System.Int64 System.DateTime::last_now
	int64_t ___last_now_14;

public:
	inline static int32_t get_offset_of_MaxValue_2() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___MaxValue_2)); }
	inline DateTime_t3738529785  get_MaxValue_2() const { return ___MaxValue_2; }
	inline DateTime_t3738529785 * get_address_of_MaxValue_2() { return &___MaxValue_2; }
	inline void set_MaxValue_2(DateTime_t3738529785  value)
	{
		___MaxValue_2 = value;
	}

	inline static int32_t get_offset_of_MinValue_3() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___MinValue_3)); }
	inline DateTime_t3738529785  get_MinValue_3() const { return ___MinValue_3; }
	inline DateTime_t3738529785 * get_address_of_MinValue_3() { return &___MinValue_3; }
	inline void set_MinValue_3(DateTime_t3738529785  value)
	{
		___MinValue_3 = value;
	}

	inline static int32_t get_offset_of_ParseTimeFormats_4() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___ParseTimeFormats_4)); }
	inline StringU5BU5D_t1281789340* get_ParseTimeFormats_4() const { return ___ParseTimeFormats_4; }
	inline StringU5BU5D_t1281789340** get_address_of_ParseTimeFormats_4() { return &___ParseTimeFormats_4; }
	inline void set_ParseTimeFormats_4(StringU5BU5D_t1281789340* value)
	{
		___ParseTimeFormats_4 = value;
		Il2CppCodeGenWriteBarrier((&___ParseTimeFormats_4), value);
	}

	inline static int32_t get_offset_of_ParseYearDayMonthFormats_5() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___ParseYearDayMonthFormats_5)); }
	inline StringU5BU5D_t1281789340* get_ParseYearDayMonthFormats_5() const { return ___ParseYearDayMonthFormats_5; }
	inline StringU5BU5D_t1281789340** get_address_of_ParseYearDayMonthFormats_5() { return &___ParseYearDayMonthFormats_5; }
	inline void set_ParseYearDayMonthFormats_5(StringU5BU5D_t1281789340* value)
	{
		___ParseYearDayMonthFormats_5 = value;
		Il2CppCodeGenWriteBarrier((&___ParseYearDayMonthFormats_5), value);
	}

	inline static int32_t get_offset_of_ParseYearMonthDayFormats_6() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___ParseYearMonthDayFormats_6)); }
	inline StringU5BU5D_t1281789340* get_ParseYearMonthDayFormats_6() const { return ___ParseYearMonthDayFormats_6; }
	inline StringU5BU5D_t1281789340** get_address_of_ParseYearMonthDayFormats_6() { return &___ParseYearMonthDayFormats_6; }
	inline void set_ParseYearMonthDayFormats_6(StringU5BU5D_t1281789340* value)
	{
		___ParseYearMonthDayFormats_6 = value;
		Il2CppCodeGenWriteBarrier((&___ParseYearMonthDayFormats_6), value);
	}

	inline static int32_t get_offset_of_ParseDayMonthYearFormats_7() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___ParseDayMonthYearFormats_7)); }
	inline StringU5BU5D_t1281789340* get_ParseDayMonthYearFormats_7() const { return ___ParseDayMonthYearFormats_7; }
	inline StringU5BU5D_t1281789340** get_address_of_ParseDayMonthYearFormats_7() { return &___ParseDayMonthYearFormats_7; }
	inline void set_ParseDayMonthYearFormats_7(StringU5BU5D_t1281789340* value)
	{
		___ParseDayMonthYearFormats_7 = value;
		Il2CppCodeGenWriteBarrier((&___ParseDayMonthYearFormats_7), value);
	}

	inline static int32_t get_offset_of_ParseMonthDayYearFormats_8() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___ParseMonthDayYearFormats_8)); }
	inline StringU5BU5D_t1281789340* get_ParseMonthDayYearFormats_8() const { return ___ParseMonthDayYearFormats_8; }
	inline StringU5BU5D_t1281789340** get_address_of_ParseMonthDayYearFormats_8() { return &___ParseMonthDayYearFormats_8; }
	inline void set_ParseMonthDayYearFormats_8(StringU5BU5D_t1281789340* value)
	{
		___ParseMonthDayYearFormats_8 = value;
		Il2CppCodeGenWriteBarrier((&___ParseMonthDayYearFormats_8), value);
	}

	inline static int32_t get_offset_of_MonthDayShortFormats_9() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___MonthDayShortFormats_9)); }
	inline StringU5BU5D_t1281789340* get_MonthDayShortFormats_9() const { return ___MonthDayShortFormats_9; }
	inline StringU5BU5D_t1281789340** get_address_of_MonthDayShortFormats_9() { return &___MonthDayShortFormats_9; }
	inline void set_MonthDayShortFormats_9(StringU5BU5D_t1281789340* value)
	{
		___MonthDayShortFormats_9 = value;
		Il2CppCodeGenWriteBarrier((&___MonthDayShortFormats_9), value);
	}

	inline static int32_t get_offset_of_DayMonthShortFormats_10() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___DayMonthShortFormats_10)); }
	inline StringU5BU5D_t1281789340* get_DayMonthShortFormats_10() const { return ___DayMonthShortFormats_10; }
	inline StringU5BU5D_t1281789340** get_address_of_DayMonthShortFormats_10() { return &___DayMonthShortFormats_10; }
	inline void set_DayMonthShortFormats_10(StringU5BU5D_t1281789340* value)
	{
		___DayMonthShortFormats_10 = value;
		Il2CppCodeGenWriteBarrier((&___DayMonthShortFormats_10), value);
	}

	inline static int32_t get_offset_of_daysmonth_11() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___daysmonth_11)); }
	inline Int32U5BU5D_t385246372* get_daysmonth_11() const { return ___daysmonth_11; }
	inline Int32U5BU5D_t385246372** get_address_of_daysmonth_11() { return &___daysmonth_11; }
	inline void set_daysmonth_11(Int32U5BU5D_t385246372* value)
	{
		___daysmonth_11 = value;
		Il2CppCodeGenWriteBarrier((&___daysmonth_11), value);
	}

	inline static int32_t get_offset_of_daysmonthleap_12() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___daysmonthleap_12)); }
	inline Int32U5BU5D_t385246372* get_daysmonthleap_12() const { return ___daysmonthleap_12; }
	inline Int32U5BU5D_t385246372** get_address_of_daysmonthleap_12() { return &___daysmonthleap_12; }
	inline void set_daysmonthleap_12(Int32U5BU5D_t385246372* value)
	{
		___daysmonthleap_12 = value;
		Il2CppCodeGenWriteBarrier((&___daysmonthleap_12), value);
	}

	inline static int32_t get_offset_of_to_local_time_span_object_13() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___to_local_time_span_object_13)); }
	inline RuntimeObject * get_to_local_time_span_object_13() const { return ___to_local_time_span_object_13; }
	inline RuntimeObject ** get_address_of_to_local_time_span_object_13() { return &___to_local_time_span_object_13; }
	inline void set_to_local_time_span_object_13(RuntimeObject * value)
	{
		___to_local_time_span_object_13 = value;
		Il2CppCodeGenWriteBarrier((&___to_local_time_span_object_13), value);
	}

	inline static int32_t get_offset_of_last_now_14() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___last_now_14)); }
	inline int64_t get_last_now_14() const { return ___last_now_14; }
	inline int64_t* get_address_of_last_now_14() { return &___last_now_14; }
	inline void set_last_now_14(int64_t value)
	{
		___last_now_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIME_T3738529785_H
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
#ifndef XSLTCOMPILEEXCEPTION_T1322447047_H
#define XSLTCOMPILEEXCEPTION_T1322447047_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Xsl.XsltCompileException
struct  XsltCompileException_t1322447047  : public XsltException_t1876063340
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XSLTCOMPILEEXCEPTION_T1322447047_H
#ifndef FILESTREAM_T4292183065_H
#define FILESTREAM_T4292183065_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.FileStream
struct  FileStream_t4292183065  : public Stream_t1273022909
{
public:
	// System.IO.FileAccess System.IO.FileStream::access
	int32_t ___access_1;
	// System.Boolean System.IO.FileStream::owner
	bool ___owner_2;
	// System.Boolean System.IO.FileStream::async
	bool ___async_3;
	// System.Boolean System.IO.FileStream::canseek
	bool ___canseek_4;
	// System.Int64 System.IO.FileStream::append_startpos
	int64_t ___append_startpos_5;
	// System.Boolean System.IO.FileStream::anonymous
	bool ___anonymous_6;
	// System.Byte[] System.IO.FileStream::buf
	ByteU5BU5D_t4116647657* ___buf_7;
	// System.Int32 System.IO.FileStream::buf_size
	int32_t ___buf_size_8;
	// System.Int32 System.IO.FileStream::buf_length
	int32_t ___buf_length_9;
	// System.Int32 System.IO.FileStream::buf_offset
	int32_t ___buf_offset_10;
	// System.Boolean System.IO.FileStream::buf_dirty
	bool ___buf_dirty_11;
	// System.Int64 System.IO.FileStream::buf_start
	int64_t ___buf_start_12;
	// System.String System.IO.FileStream::name
	String_t* ___name_13;
	// System.IntPtr System.IO.FileStream::handle
	intptr_t ___handle_14;

public:
	inline static int32_t get_offset_of_access_1() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___access_1)); }
	inline int32_t get_access_1() const { return ___access_1; }
	inline int32_t* get_address_of_access_1() { return &___access_1; }
	inline void set_access_1(int32_t value)
	{
		___access_1 = value;
	}

	inline static int32_t get_offset_of_owner_2() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___owner_2)); }
	inline bool get_owner_2() const { return ___owner_2; }
	inline bool* get_address_of_owner_2() { return &___owner_2; }
	inline void set_owner_2(bool value)
	{
		___owner_2 = value;
	}

	inline static int32_t get_offset_of_async_3() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___async_3)); }
	inline bool get_async_3() const { return ___async_3; }
	inline bool* get_address_of_async_3() { return &___async_3; }
	inline void set_async_3(bool value)
	{
		___async_3 = value;
	}

	inline static int32_t get_offset_of_canseek_4() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___canseek_4)); }
	inline bool get_canseek_4() const { return ___canseek_4; }
	inline bool* get_address_of_canseek_4() { return &___canseek_4; }
	inline void set_canseek_4(bool value)
	{
		___canseek_4 = value;
	}

	inline static int32_t get_offset_of_append_startpos_5() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___append_startpos_5)); }
	inline int64_t get_append_startpos_5() const { return ___append_startpos_5; }
	inline int64_t* get_address_of_append_startpos_5() { return &___append_startpos_5; }
	inline void set_append_startpos_5(int64_t value)
	{
		___append_startpos_5 = value;
	}

	inline static int32_t get_offset_of_anonymous_6() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___anonymous_6)); }
	inline bool get_anonymous_6() const { return ___anonymous_6; }
	inline bool* get_address_of_anonymous_6() { return &___anonymous_6; }
	inline void set_anonymous_6(bool value)
	{
		___anonymous_6 = value;
	}

	inline static int32_t get_offset_of_buf_7() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___buf_7)); }
	inline ByteU5BU5D_t4116647657* get_buf_7() const { return ___buf_7; }
	inline ByteU5BU5D_t4116647657** get_address_of_buf_7() { return &___buf_7; }
	inline void set_buf_7(ByteU5BU5D_t4116647657* value)
	{
		___buf_7 = value;
		Il2CppCodeGenWriteBarrier((&___buf_7), value);
	}

	inline static int32_t get_offset_of_buf_size_8() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___buf_size_8)); }
	inline int32_t get_buf_size_8() const { return ___buf_size_8; }
	inline int32_t* get_address_of_buf_size_8() { return &___buf_size_8; }
	inline void set_buf_size_8(int32_t value)
	{
		___buf_size_8 = value;
	}

	inline static int32_t get_offset_of_buf_length_9() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___buf_length_9)); }
	inline int32_t get_buf_length_9() const { return ___buf_length_9; }
	inline int32_t* get_address_of_buf_length_9() { return &___buf_length_9; }
	inline void set_buf_length_9(int32_t value)
	{
		___buf_length_9 = value;
	}

	inline static int32_t get_offset_of_buf_offset_10() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___buf_offset_10)); }
	inline int32_t get_buf_offset_10() const { return ___buf_offset_10; }
	inline int32_t* get_address_of_buf_offset_10() { return &___buf_offset_10; }
	inline void set_buf_offset_10(int32_t value)
	{
		___buf_offset_10 = value;
	}

	inline static int32_t get_offset_of_buf_dirty_11() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___buf_dirty_11)); }
	inline bool get_buf_dirty_11() const { return ___buf_dirty_11; }
	inline bool* get_address_of_buf_dirty_11() { return &___buf_dirty_11; }
	inline void set_buf_dirty_11(bool value)
	{
		___buf_dirty_11 = value;
	}

	inline static int32_t get_offset_of_buf_start_12() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___buf_start_12)); }
	inline int64_t get_buf_start_12() const { return ___buf_start_12; }
	inline int64_t* get_address_of_buf_start_12() { return &___buf_start_12; }
	inline void set_buf_start_12(int64_t value)
	{
		___buf_start_12 = value;
	}

	inline static int32_t get_offset_of_name_13() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___name_13)); }
	inline String_t* get_name_13() const { return ___name_13; }
	inline String_t** get_address_of_name_13() { return &___name_13; }
	inline void set_name_13(String_t* value)
	{
		___name_13 = value;
		Il2CppCodeGenWriteBarrier((&___name_13), value);
	}

	inline static int32_t get_offset_of_handle_14() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___handle_14)); }
	inline intptr_t get_handle_14() const { return ___handle_14; }
	inline intptr_t* get_address_of_handle_14() { return &___handle_14; }
	inline void set_handle_14(intptr_t value)
	{
		___handle_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FILESTREAM_T4292183065_H
#ifndef XMLVALIDATINGREADER_T1719295192_H
#define XMLVALIDATINGREADER_T1719295192_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlValidatingReader
struct  XmlValidatingReader_t1719295192  : public XmlReader_t3121518892
{
public:
	// System.Xml.EntityHandling System.Xml.XmlValidatingReader::entityHandling
	int32_t ___entityHandling_3;
	// System.Xml.XmlReader System.Xml.XmlValidatingReader::sourceReader
	XmlReader_t3121518892 * ___sourceReader_4;
	// System.Xml.XmlTextReader System.Xml.XmlValidatingReader::xmlTextReader
	XmlTextReader_t4233384356 * ___xmlTextReader_5;
	// System.Xml.XmlReader System.Xml.XmlValidatingReader::validatingReader
	XmlReader_t3121518892 * ___validatingReader_6;
	// System.Xml.XmlResolver System.Xml.XmlValidatingReader::resolver
	XmlResolver_t626023767 * ___resolver_7;
	// System.Boolean System.Xml.XmlValidatingReader::resolverSpecified
	bool ___resolverSpecified_8;
	// System.Xml.ValidationType System.Xml.XmlValidatingReader::validationType
	int32_t ___validationType_9;
	// System.Xml.Schema.XmlSchemaCollection System.Xml.XmlValidatingReader::schemas
	XmlSchemaCollection_t3610399789 * ___schemas_10;
	// Mono.Xml.DTDValidatingReader System.Xml.XmlValidatingReader::dtdReader
	DTDValidatingReader_t3946379043 * ___dtdReader_11;
	// Mono.Xml.IHasXmlSchemaInfo System.Xml.XmlValidatingReader::schemaInfo
	RuntimeObject* ___schemaInfo_12;
	// System.Text.StringBuilder System.Xml.XmlValidatingReader::storedCharacters
	StringBuilder_t * ___storedCharacters_13;
	// System.Xml.Schema.ValidationEventHandler System.Xml.XmlValidatingReader::ValidationEventHandler
	ValidationEventHandler_t791314227 * ___ValidationEventHandler_14;

public:
	inline static int32_t get_offset_of_entityHandling_3() { return static_cast<int32_t>(offsetof(XmlValidatingReader_t1719295192, ___entityHandling_3)); }
	inline int32_t get_entityHandling_3() const { return ___entityHandling_3; }
	inline int32_t* get_address_of_entityHandling_3() { return &___entityHandling_3; }
	inline void set_entityHandling_3(int32_t value)
	{
		___entityHandling_3 = value;
	}

	inline static int32_t get_offset_of_sourceReader_4() { return static_cast<int32_t>(offsetof(XmlValidatingReader_t1719295192, ___sourceReader_4)); }
	inline XmlReader_t3121518892 * get_sourceReader_4() const { return ___sourceReader_4; }
	inline XmlReader_t3121518892 ** get_address_of_sourceReader_4() { return &___sourceReader_4; }
	inline void set_sourceReader_4(XmlReader_t3121518892 * value)
	{
		___sourceReader_4 = value;
		Il2CppCodeGenWriteBarrier((&___sourceReader_4), value);
	}

	inline static int32_t get_offset_of_xmlTextReader_5() { return static_cast<int32_t>(offsetof(XmlValidatingReader_t1719295192, ___xmlTextReader_5)); }
	inline XmlTextReader_t4233384356 * get_xmlTextReader_5() const { return ___xmlTextReader_5; }
	inline XmlTextReader_t4233384356 ** get_address_of_xmlTextReader_5() { return &___xmlTextReader_5; }
	inline void set_xmlTextReader_5(XmlTextReader_t4233384356 * value)
	{
		___xmlTextReader_5 = value;
		Il2CppCodeGenWriteBarrier((&___xmlTextReader_5), value);
	}

	inline static int32_t get_offset_of_validatingReader_6() { return static_cast<int32_t>(offsetof(XmlValidatingReader_t1719295192, ___validatingReader_6)); }
	inline XmlReader_t3121518892 * get_validatingReader_6() const { return ___validatingReader_6; }
	inline XmlReader_t3121518892 ** get_address_of_validatingReader_6() { return &___validatingReader_6; }
	inline void set_validatingReader_6(XmlReader_t3121518892 * value)
	{
		___validatingReader_6 = value;
		Il2CppCodeGenWriteBarrier((&___validatingReader_6), value);
	}

	inline static int32_t get_offset_of_resolver_7() { return static_cast<int32_t>(offsetof(XmlValidatingReader_t1719295192, ___resolver_7)); }
	inline XmlResolver_t626023767 * get_resolver_7() const { return ___resolver_7; }
	inline XmlResolver_t626023767 ** get_address_of_resolver_7() { return &___resolver_7; }
	inline void set_resolver_7(XmlResolver_t626023767 * value)
	{
		___resolver_7 = value;
		Il2CppCodeGenWriteBarrier((&___resolver_7), value);
	}

	inline static int32_t get_offset_of_resolverSpecified_8() { return static_cast<int32_t>(offsetof(XmlValidatingReader_t1719295192, ___resolverSpecified_8)); }
	inline bool get_resolverSpecified_8() const { return ___resolverSpecified_8; }
	inline bool* get_address_of_resolverSpecified_8() { return &___resolverSpecified_8; }
	inline void set_resolverSpecified_8(bool value)
	{
		___resolverSpecified_8 = value;
	}

	inline static int32_t get_offset_of_validationType_9() { return static_cast<int32_t>(offsetof(XmlValidatingReader_t1719295192, ___validationType_9)); }
	inline int32_t get_validationType_9() const { return ___validationType_9; }
	inline int32_t* get_address_of_validationType_9() { return &___validationType_9; }
	inline void set_validationType_9(int32_t value)
	{
		___validationType_9 = value;
	}

	inline static int32_t get_offset_of_schemas_10() { return static_cast<int32_t>(offsetof(XmlValidatingReader_t1719295192, ___schemas_10)); }
	inline XmlSchemaCollection_t3610399789 * get_schemas_10() const { return ___schemas_10; }
	inline XmlSchemaCollection_t3610399789 ** get_address_of_schemas_10() { return &___schemas_10; }
	inline void set_schemas_10(XmlSchemaCollection_t3610399789 * value)
	{
		___schemas_10 = value;
		Il2CppCodeGenWriteBarrier((&___schemas_10), value);
	}

	inline static int32_t get_offset_of_dtdReader_11() { return static_cast<int32_t>(offsetof(XmlValidatingReader_t1719295192, ___dtdReader_11)); }
	inline DTDValidatingReader_t3946379043 * get_dtdReader_11() const { return ___dtdReader_11; }
	inline DTDValidatingReader_t3946379043 ** get_address_of_dtdReader_11() { return &___dtdReader_11; }
	inline void set_dtdReader_11(DTDValidatingReader_t3946379043 * value)
	{
		___dtdReader_11 = value;
		Il2CppCodeGenWriteBarrier((&___dtdReader_11), value);
	}

	inline static int32_t get_offset_of_schemaInfo_12() { return static_cast<int32_t>(offsetof(XmlValidatingReader_t1719295192, ___schemaInfo_12)); }
	inline RuntimeObject* get_schemaInfo_12() const { return ___schemaInfo_12; }
	inline RuntimeObject** get_address_of_schemaInfo_12() { return &___schemaInfo_12; }
	inline void set_schemaInfo_12(RuntimeObject* value)
	{
		___schemaInfo_12 = value;
		Il2CppCodeGenWriteBarrier((&___schemaInfo_12), value);
	}

	inline static int32_t get_offset_of_storedCharacters_13() { return static_cast<int32_t>(offsetof(XmlValidatingReader_t1719295192, ___storedCharacters_13)); }
	inline StringBuilder_t * get_storedCharacters_13() const { return ___storedCharacters_13; }
	inline StringBuilder_t ** get_address_of_storedCharacters_13() { return &___storedCharacters_13; }
	inline void set_storedCharacters_13(StringBuilder_t * value)
	{
		___storedCharacters_13 = value;
		Il2CppCodeGenWriteBarrier((&___storedCharacters_13), value);
	}

	inline static int32_t get_offset_of_ValidationEventHandler_14() { return static_cast<int32_t>(offsetof(XmlValidatingReader_t1719295192, ___ValidationEventHandler_14)); }
	inline ValidationEventHandler_t791314227 * get_ValidationEventHandler_14() const { return ___ValidationEventHandler_14; }
	inline ValidationEventHandler_t791314227 ** get_address_of_ValidationEventHandler_14() { return &___ValidationEventHandler_14; }
	inline void set_ValidationEventHandler_14(ValidationEventHandler_t791314227 * value)
	{
		___ValidationEventHandler_14 = value;
		Il2CppCodeGenWriteBarrier((&___ValidationEventHandler_14), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLVALIDATINGREADER_T1719295192_H
#ifndef XPATHTEXTCOMPARER_T2075334572_H
#define XPATHTEXTCOMPARER_T2075334572_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.XPathSorter/XPathTextComparer
struct  XPathTextComparer_t2075334572  : public RuntimeObject
{
public:
	// System.Int32 System.Xml.XPath.XPathSorter/XPathTextComparer::_nMulSort
	int32_t ____nMulSort_0;
	// System.Int32 System.Xml.XPath.XPathSorter/XPathTextComparer::_nMulCase
	int32_t ____nMulCase_1;
	// System.Xml.XPath.XmlCaseOrder System.Xml.XPath.XPathSorter/XPathTextComparer::_orderCase
	int32_t ____orderCase_2;
	// System.Globalization.CultureInfo System.Xml.XPath.XPathSorter/XPathTextComparer::_ci
	CultureInfo_t4157843068 * ____ci_3;

public:
	inline static int32_t get_offset_of__nMulSort_0() { return static_cast<int32_t>(offsetof(XPathTextComparer_t2075334572, ____nMulSort_0)); }
	inline int32_t get__nMulSort_0() const { return ____nMulSort_0; }
	inline int32_t* get_address_of__nMulSort_0() { return &____nMulSort_0; }
	inline void set__nMulSort_0(int32_t value)
	{
		____nMulSort_0 = value;
	}

	inline static int32_t get_offset_of__nMulCase_1() { return static_cast<int32_t>(offsetof(XPathTextComparer_t2075334572, ____nMulCase_1)); }
	inline int32_t get__nMulCase_1() const { return ____nMulCase_1; }
	inline int32_t* get_address_of__nMulCase_1() { return &____nMulCase_1; }
	inline void set__nMulCase_1(int32_t value)
	{
		____nMulCase_1 = value;
	}

	inline static int32_t get_offset_of__orderCase_2() { return static_cast<int32_t>(offsetof(XPathTextComparer_t2075334572, ____orderCase_2)); }
	inline int32_t get__orderCase_2() const { return ____orderCase_2; }
	inline int32_t* get_address_of__orderCase_2() { return &____orderCase_2; }
	inline void set__orderCase_2(int32_t value)
	{
		____orderCase_2 = value;
	}

	inline static int32_t get_offset_of__ci_3() { return static_cast<int32_t>(offsetof(XPathTextComparer_t2075334572, ____ci_3)); }
	inline CultureInfo_t4157843068 * get__ci_3() const { return ____ci_3; }
	inline CultureInfo_t4157843068 ** get_address_of__ci_3() { return &____ci_3; }
	inline void set__ci_3(CultureInfo_t4157843068 * value)
	{
		____ci_3 = value;
		Il2CppCodeGenWriteBarrier((&____ci_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XPATHTEXTCOMPARER_T2075334572_H
#ifndef XMLTEXTWRITER_T2114213153_H
#define XMLTEXTWRITER_T2114213153_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlTextWriter
struct  XmlTextWriter_t2114213153  : public XmlWriter_t127905479
{
public:
	// System.IO.Stream System.Xml.XmlTextWriter::base_stream
	Stream_t1273022909 * ___base_stream_6;
	// System.IO.TextWriter System.Xml.XmlTextWriter::source
	TextWriter_t3478189236 * ___source_7;
	// System.IO.TextWriter System.Xml.XmlTextWriter::writer
	TextWriter_t3478189236 * ___writer_8;
	// System.IO.StringWriter System.Xml.XmlTextWriter::preserver
	StringWriter_t802263757 * ___preserver_9;
	// System.String System.Xml.XmlTextWriter::preserved_name
	String_t* ___preserved_name_10;
	// System.Boolean System.Xml.XmlTextWriter::is_preserved_xmlns
	bool ___is_preserved_xmlns_11;
	// System.Boolean System.Xml.XmlTextWriter::allow_doc_fragment
	bool ___allow_doc_fragment_12;
	// System.Boolean System.Xml.XmlTextWriter::close_output_stream
	bool ___close_output_stream_13;
	// System.Boolean System.Xml.XmlTextWriter::ignore_encoding
	bool ___ignore_encoding_14;
	// System.Boolean System.Xml.XmlTextWriter::namespaces
	bool ___namespaces_15;
	// System.Xml.XmlTextWriter/XmlDeclState System.Xml.XmlTextWriter::xmldecl_state
	int32_t ___xmldecl_state_16;
	// System.Boolean System.Xml.XmlTextWriter::check_character_validity
	bool ___check_character_validity_17;
	// System.Xml.NewLineHandling System.Xml.XmlTextWriter::newline_handling
	int32_t ___newline_handling_18;
	// System.Boolean System.Xml.XmlTextWriter::is_document_entity
	bool ___is_document_entity_19;
	// System.Xml.WriteState System.Xml.XmlTextWriter::state
	int32_t ___state_20;
	// System.Xml.XmlNodeType System.Xml.XmlTextWriter::node_state
	int32_t ___node_state_21;
	// System.Xml.XmlNamespaceManager System.Xml.XmlTextWriter::nsmanager
	XmlNamespaceManager_t418790500 * ___nsmanager_22;
	// System.Int32 System.Xml.XmlTextWriter::open_count
	int32_t ___open_count_23;
	// System.Xml.XmlTextWriter/XmlNodeInfo[] System.Xml.XmlTextWriter::elements
	XmlNodeInfoU5BU5D_t431163322* ___elements_24;
	// System.Collections.Stack System.Xml.XmlTextWriter::new_local_namespaces
	Stack_t2329662280 * ___new_local_namespaces_25;
	// System.Collections.ArrayList System.Xml.XmlTextWriter::explicit_nsdecls
	ArrayList_t2718874744 * ___explicit_nsdecls_26;
	// System.Xml.NamespaceHandling System.Xml.XmlTextWriter::namespace_handling
	int32_t ___namespace_handling_27;
	// System.Boolean System.Xml.XmlTextWriter::indent
	bool ___indent_28;
	// System.Int32 System.Xml.XmlTextWriter::indent_count
	int32_t ___indent_count_29;
	// System.Char System.Xml.XmlTextWriter::indent_char
	Il2CppChar ___indent_char_30;
	// System.String System.Xml.XmlTextWriter::indent_string
	String_t* ___indent_string_31;
	// System.String System.Xml.XmlTextWriter::newline
	String_t* ___newline_32;
	// System.Boolean System.Xml.XmlTextWriter::indent_attributes
	bool ___indent_attributes_33;
	// System.Char System.Xml.XmlTextWriter::quote_char
	Il2CppChar ___quote_char_34;
	// System.Boolean System.Xml.XmlTextWriter::v2
	bool ___v2_35;

public:
	inline static int32_t get_offset_of_base_stream_6() { return static_cast<int32_t>(offsetof(XmlTextWriter_t2114213153, ___base_stream_6)); }
	inline Stream_t1273022909 * get_base_stream_6() const { return ___base_stream_6; }
	inline Stream_t1273022909 ** get_address_of_base_stream_6() { return &___base_stream_6; }
	inline void set_base_stream_6(Stream_t1273022909 * value)
	{
		___base_stream_6 = value;
		Il2CppCodeGenWriteBarrier((&___base_stream_6), value);
	}

	inline static int32_t get_offset_of_source_7() { return static_cast<int32_t>(offsetof(XmlTextWriter_t2114213153, ___source_7)); }
	inline TextWriter_t3478189236 * get_source_7() const { return ___source_7; }
	inline TextWriter_t3478189236 ** get_address_of_source_7() { return &___source_7; }
	inline void set_source_7(TextWriter_t3478189236 * value)
	{
		___source_7 = value;
		Il2CppCodeGenWriteBarrier((&___source_7), value);
	}

	inline static int32_t get_offset_of_writer_8() { return static_cast<int32_t>(offsetof(XmlTextWriter_t2114213153, ___writer_8)); }
	inline TextWriter_t3478189236 * get_writer_8() const { return ___writer_8; }
	inline TextWriter_t3478189236 ** get_address_of_writer_8() { return &___writer_8; }
	inline void set_writer_8(TextWriter_t3478189236 * value)
	{
		___writer_8 = value;
		Il2CppCodeGenWriteBarrier((&___writer_8), value);
	}

	inline static int32_t get_offset_of_preserver_9() { return static_cast<int32_t>(offsetof(XmlTextWriter_t2114213153, ___preserver_9)); }
	inline StringWriter_t802263757 * get_preserver_9() const { return ___preserver_9; }
	inline StringWriter_t802263757 ** get_address_of_preserver_9() { return &___preserver_9; }
	inline void set_preserver_9(StringWriter_t802263757 * value)
	{
		___preserver_9 = value;
		Il2CppCodeGenWriteBarrier((&___preserver_9), value);
	}

	inline static int32_t get_offset_of_preserved_name_10() { return static_cast<int32_t>(offsetof(XmlTextWriter_t2114213153, ___preserved_name_10)); }
	inline String_t* get_preserved_name_10() const { return ___preserved_name_10; }
	inline String_t** get_address_of_preserved_name_10() { return &___preserved_name_10; }
	inline void set_preserved_name_10(String_t* value)
	{
		___preserved_name_10 = value;
		Il2CppCodeGenWriteBarrier((&___preserved_name_10), value);
	}

	inline static int32_t get_offset_of_is_preserved_xmlns_11() { return static_cast<int32_t>(offsetof(XmlTextWriter_t2114213153, ___is_preserved_xmlns_11)); }
	inline bool get_is_preserved_xmlns_11() const { return ___is_preserved_xmlns_11; }
	inline bool* get_address_of_is_preserved_xmlns_11() { return &___is_preserved_xmlns_11; }
	inline void set_is_preserved_xmlns_11(bool value)
	{
		___is_preserved_xmlns_11 = value;
	}

	inline static int32_t get_offset_of_allow_doc_fragment_12() { return static_cast<int32_t>(offsetof(XmlTextWriter_t2114213153, ___allow_doc_fragment_12)); }
	inline bool get_allow_doc_fragment_12() const { return ___allow_doc_fragment_12; }
	inline bool* get_address_of_allow_doc_fragment_12() { return &___allow_doc_fragment_12; }
	inline void set_allow_doc_fragment_12(bool value)
	{
		___allow_doc_fragment_12 = value;
	}

	inline static int32_t get_offset_of_close_output_stream_13() { return static_cast<int32_t>(offsetof(XmlTextWriter_t2114213153, ___close_output_stream_13)); }
	inline bool get_close_output_stream_13() const { return ___close_output_stream_13; }
	inline bool* get_address_of_close_output_stream_13() { return &___close_output_stream_13; }
	inline void set_close_output_stream_13(bool value)
	{
		___close_output_stream_13 = value;
	}

	inline static int32_t get_offset_of_ignore_encoding_14() { return static_cast<int32_t>(offsetof(XmlTextWriter_t2114213153, ___ignore_encoding_14)); }
	inline bool get_ignore_encoding_14() const { return ___ignore_encoding_14; }
	inline bool* get_address_of_ignore_encoding_14() { return &___ignore_encoding_14; }
	inline void set_ignore_encoding_14(bool value)
	{
		___ignore_encoding_14 = value;
	}

	inline static int32_t get_offset_of_namespaces_15() { return static_cast<int32_t>(offsetof(XmlTextWriter_t2114213153, ___namespaces_15)); }
	inline bool get_namespaces_15() const { return ___namespaces_15; }
	inline bool* get_address_of_namespaces_15() { return &___namespaces_15; }
	inline void set_namespaces_15(bool value)
	{
		___namespaces_15 = value;
	}

	inline static int32_t get_offset_of_xmldecl_state_16() { return static_cast<int32_t>(offsetof(XmlTextWriter_t2114213153, ___xmldecl_state_16)); }
	inline int32_t get_xmldecl_state_16() const { return ___xmldecl_state_16; }
	inline int32_t* get_address_of_xmldecl_state_16() { return &___xmldecl_state_16; }
	inline void set_xmldecl_state_16(int32_t value)
	{
		___xmldecl_state_16 = value;
	}

	inline static int32_t get_offset_of_check_character_validity_17() { return static_cast<int32_t>(offsetof(XmlTextWriter_t2114213153, ___check_character_validity_17)); }
	inline bool get_check_character_validity_17() const { return ___check_character_validity_17; }
	inline bool* get_address_of_check_character_validity_17() { return &___check_character_validity_17; }
	inline void set_check_character_validity_17(bool value)
	{
		___check_character_validity_17 = value;
	}

	inline static int32_t get_offset_of_newline_handling_18() { return static_cast<int32_t>(offsetof(XmlTextWriter_t2114213153, ___newline_handling_18)); }
	inline int32_t get_newline_handling_18() const { return ___newline_handling_18; }
	inline int32_t* get_address_of_newline_handling_18() { return &___newline_handling_18; }
	inline void set_newline_handling_18(int32_t value)
	{
		___newline_handling_18 = value;
	}

	inline static int32_t get_offset_of_is_document_entity_19() { return static_cast<int32_t>(offsetof(XmlTextWriter_t2114213153, ___is_document_entity_19)); }
	inline bool get_is_document_entity_19() const { return ___is_document_entity_19; }
	inline bool* get_address_of_is_document_entity_19() { return &___is_document_entity_19; }
	inline void set_is_document_entity_19(bool value)
	{
		___is_document_entity_19 = value;
	}

	inline static int32_t get_offset_of_state_20() { return static_cast<int32_t>(offsetof(XmlTextWriter_t2114213153, ___state_20)); }
	inline int32_t get_state_20() const { return ___state_20; }
	inline int32_t* get_address_of_state_20() { return &___state_20; }
	inline void set_state_20(int32_t value)
	{
		___state_20 = value;
	}

	inline static int32_t get_offset_of_node_state_21() { return static_cast<int32_t>(offsetof(XmlTextWriter_t2114213153, ___node_state_21)); }
	inline int32_t get_node_state_21() const { return ___node_state_21; }
	inline int32_t* get_address_of_node_state_21() { return &___node_state_21; }
	inline void set_node_state_21(int32_t value)
	{
		___node_state_21 = value;
	}

	inline static int32_t get_offset_of_nsmanager_22() { return static_cast<int32_t>(offsetof(XmlTextWriter_t2114213153, ___nsmanager_22)); }
	inline XmlNamespaceManager_t418790500 * get_nsmanager_22() const { return ___nsmanager_22; }
	inline XmlNamespaceManager_t418790500 ** get_address_of_nsmanager_22() { return &___nsmanager_22; }
	inline void set_nsmanager_22(XmlNamespaceManager_t418790500 * value)
	{
		___nsmanager_22 = value;
		Il2CppCodeGenWriteBarrier((&___nsmanager_22), value);
	}

	inline static int32_t get_offset_of_open_count_23() { return static_cast<int32_t>(offsetof(XmlTextWriter_t2114213153, ___open_count_23)); }
	inline int32_t get_open_count_23() const { return ___open_count_23; }
	inline int32_t* get_address_of_open_count_23() { return &___open_count_23; }
	inline void set_open_count_23(int32_t value)
	{
		___open_count_23 = value;
	}

	inline static int32_t get_offset_of_elements_24() { return static_cast<int32_t>(offsetof(XmlTextWriter_t2114213153, ___elements_24)); }
	inline XmlNodeInfoU5BU5D_t431163322* get_elements_24() const { return ___elements_24; }
	inline XmlNodeInfoU5BU5D_t431163322** get_address_of_elements_24() { return &___elements_24; }
	inline void set_elements_24(XmlNodeInfoU5BU5D_t431163322* value)
	{
		___elements_24 = value;
		Il2CppCodeGenWriteBarrier((&___elements_24), value);
	}

	inline static int32_t get_offset_of_new_local_namespaces_25() { return static_cast<int32_t>(offsetof(XmlTextWriter_t2114213153, ___new_local_namespaces_25)); }
	inline Stack_t2329662280 * get_new_local_namespaces_25() const { return ___new_local_namespaces_25; }
	inline Stack_t2329662280 ** get_address_of_new_local_namespaces_25() { return &___new_local_namespaces_25; }
	inline void set_new_local_namespaces_25(Stack_t2329662280 * value)
	{
		___new_local_namespaces_25 = value;
		Il2CppCodeGenWriteBarrier((&___new_local_namespaces_25), value);
	}

	inline static int32_t get_offset_of_explicit_nsdecls_26() { return static_cast<int32_t>(offsetof(XmlTextWriter_t2114213153, ___explicit_nsdecls_26)); }
	inline ArrayList_t2718874744 * get_explicit_nsdecls_26() const { return ___explicit_nsdecls_26; }
	inline ArrayList_t2718874744 ** get_address_of_explicit_nsdecls_26() { return &___explicit_nsdecls_26; }
	inline void set_explicit_nsdecls_26(ArrayList_t2718874744 * value)
	{
		___explicit_nsdecls_26 = value;
		Il2CppCodeGenWriteBarrier((&___explicit_nsdecls_26), value);
	}

	inline static int32_t get_offset_of_namespace_handling_27() { return static_cast<int32_t>(offsetof(XmlTextWriter_t2114213153, ___namespace_handling_27)); }
	inline int32_t get_namespace_handling_27() const { return ___namespace_handling_27; }
	inline int32_t* get_address_of_namespace_handling_27() { return &___namespace_handling_27; }
	inline void set_namespace_handling_27(int32_t value)
	{
		___namespace_handling_27 = value;
	}

	inline static int32_t get_offset_of_indent_28() { return static_cast<int32_t>(offsetof(XmlTextWriter_t2114213153, ___indent_28)); }
	inline bool get_indent_28() const { return ___indent_28; }
	inline bool* get_address_of_indent_28() { return &___indent_28; }
	inline void set_indent_28(bool value)
	{
		___indent_28 = value;
	}

	inline static int32_t get_offset_of_indent_count_29() { return static_cast<int32_t>(offsetof(XmlTextWriter_t2114213153, ___indent_count_29)); }
	inline int32_t get_indent_count_29() const { return ___indent_count_29; }
	inline int32_t* get_address_of_indent_count_29() { return &___indent_count_29; }
	inline void set_indent_count_29(int32_t value)
	{
		___indent_count_29 = value;
	}

	inline static int32_t get_offset_of_indent_char_30() { return static_cast<int32_t>(offsetof(XmlTextWriter_t2114213153, ___indent_char_30)); }
	inline Il2CppChar get_indent_char_30() const { return ___indent_char_30; }
	inline Il2CppChar* get_address_of_indent_char_30() { return &___indent_char_30; }
	inline void set_indent_char_30(Il2CppChar value)
	{
		___indent_char_30 = value;
	}

	inline static int32_t get_offset_of_indent_string_31() { return static_cast<int32_t>(offsetof(XmlTextWriter_t2114213153, ___indent_string_31)); }
	inline String_t* get_indent_string_31() const { return ___indent_string_31; }
	inline String_t** get_address_of_indent_string_31() { return &___indent_string_31; }
	inline void set_indent_string_31(String_t* value)
	{
		___indent_string_31 = value;
		Il2CppCodeGenWriteBarrier((&___indent_string_31), value);
	}

	inline static int32_t get_offset_of_newline_32() { return static_cast<int32_t>(offsetof(XmlTextWriter_t2114213153, ___newline_32)); }
	inline String_t* get_newline_32() const { return ___newline_32; }
	inline String_t** get_address_of_newline_32() { return &___newline_32; }
	inline void set_newline_32(String_t* value)
	{
		___newline_32 = value;
		Il2CppCodeGenWriteBarrier((&___newline_32), value);
	}

	inline static int32_t get_offset_of_indent_attributes_33() { return static_cast<int32_t>(offsetof(XmlTextWriter_t2114213153, ___indent_attributes_33)); }
	inline bool get_indent_attributes_33() const { return ___indent_attributes_33; }
	inline bool* get_address_of_indent_attributes_33() { return &___indent_attributes_33; }
	inline void set_indent_attributes_33(bool value)
	{
		___indent_attributes_33 = value;
	}

	inline static int32_t get_offset_of_quote_char_34() { return static_cast<int32_t>(offsetof(XmlTextWriter_t2114213153, ___quote_char_34)); }
	inline Il2CppChar get_quote_char_34() const { return ___quote_char_34; }
	inline Il2CppChar* get_address_of_quote_char_34() { return &___quote_char_34; }
	inline void set_quote_char_34(Il2CppChar value)
	{
		___quote_char_34 = value;
	}

	inline static int32_t get_offset_of_v2_35() { return static_cast<int32_t>(offsetof(XmlTextWriter_t2114213153, ___v2_35)); }
	inline bool get_v2_35() const { return ___v2_35; }
	inline bool* get_address_of_v2_35() { return &___v2_35; }
	inline void set_v2_35(bool value)
	{
		___v2_35 = value;
	}
};

struct XmlTextWriter_t2114213153_StaticFields
{
public:
	// System.Text.Encoding System.Xml.XmlTextWriter::unmarked_utf8encoding
	Encoding_t1523322056 * ___unmarked_utf8encoding_3;
	// System.Char[] System.Xml.XmlTextWriter::escaped_text_chars
	CharU5BU5D_t3528271667* ___escaped_text_chars_4;
	// System.Char[] System.Xml.XmlTextWriter::escaped_attr_chars
	CharU5BU5D_t3528271667* ___escaped_attr_chars_5;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Xml.XmlTextWriter::<>f__switch$map53
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map53_36;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Xml.XmlTextWriter::<>f__switch$map54
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map54_37;

public:
	inline static int32_t get_offset_of_unmarked_utf8encoding_3() { return static_cast<int32_t>(offsetof(XmlTextWriter_t2114213153_StaticFields, ___unmarked_utf8encoding_3)); }
	inline Encoding_t1523322056 * get_unmarked_utf8encoding_3() const { return ___unmarked_utf8encoding_3; }
	inline Encoding_t1523322056 ** get_address_of_unmarked_utf8encoding_3() { return &___unmarked_utf8encoding_3; }
	inline void set_unmarked_utf8encoding_3(Encoding_t1523322056 * value)
	{
		___unmarked_utf8encoding_3 = value;
		Il2CppCodeGenWriteBarrier((&___unmarked_utf8encoding_3), value);
	}

	inline static int32_t get_offset_of_escaped_text_chars_4() { return static_cast<int32_t>(offsetof(XmlTextWriter_t2114213153_StaticFields, ___escaped_text_chars_4)); }
	inline CharU5BU5D_t3528271667* get_escaped_text_chars_4() const { return ___escaped_text_chars_4; }
	inline CharU5BU5D_t3528271667** get_address_of_escaped_text_chars_4() { return &___escaped_text_chars_4; }
	inline void set_escaped_text_chars_4(CharU5BU5D_t3528271667* value)
	{
		___escaped_text_chars_4 = value;
		Il2CppCodeGenWriteBarrier((&___escaped_text_chars_4), value);
	}

	inline static int32_t get_offset_of_escaped_attr_chars_5() { return static_cast<int32_t>(offsetof(XmlTextWriter_t2114213153_StaticFields, ___escaped_attr_chars_5)); }
	inline CharU5BU5D_t3528271667* get_escaped_attr_chars_5() const { return ___escaped_attr_chars_5; }
	inline CharU5BU5D_t3528271667** get_address_of_escaped_attr_chars_5() { return &___escaped_attr_chars_5; }
	inline void set_escaped_attr_chars_5(CharU5BU5D_t3528271667* value)
	{
		___escaped_attr_chars_5 = value;
		Il2CppCodeGenWriteBarrier((&___escaped_attr_chars_5), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map53_36() { return static_cast<int32_t>(offsetof(XmlTextWriter_t2114213153_StaticFields, ___U3CU3Ef__switchU24map53_36)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map53_36() const { return ___U3CU3Ef__switchU24map53_36; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map53_36() { return &___U3CU3Ef__switchU24map53_36; }
	inline void set_U3CU3Ef__switchU24map53_36(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map53_36 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map53_36), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map54_37() { return static_cast<int32_t>(offsetof(XmlTextWriter_t2114213153_StaticFields, ___U3CU3Ef__switchU24map54_37)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map54_37() const { return ___U3CU3Ef__switchU24map54_37; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map54_37() { return &___U3CU3Ef__switchU24map54_37; }
	inline void set_U3CU3Ef__switchU24map54_37(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map54_37 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map54_37), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLTEXTWRITER_T2114213153_H
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
#ifndef XSLTMESSAGEENCOUNTEREDEVENTHANDLER_T414593873_H
#define XSLTMESSAGEENCOUNTEREDEVENTHANDLER_T414593873_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Xsl.XsltMessageEncounteredEventHandler
struct  XsltMessageEncounteredEventHandler_t414593873  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XSLTMESSAGEENCOUNTEREDEVENTHANDLER_T414593873_H
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
// System.Xml.XPath.XPathSorter[]
struct XPathSorterU5BU5D_t4263134841  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) XPathSorter_t36376808 * m_Items[1];

public:
	inline XPathSorter_t36376808 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline XPathSorter_t36376808 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, XPathSorter_t36376808 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline XPathSorter_t36376808 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline XPathSorter_t36376808 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, XPathSorter_t36376808 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Xml.XPath.XPathNavigator[]
struct XPathNavigatorU5BU5D_t3671675027  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) XPathNavigator_t787956054 * m_Items[1];

public:
	inline XPathNavigator_t787956054 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline XPathNavigator_t787956054 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, XPathNavigator_t787956054 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline XPathNavigator_t787956054 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline XPathNavigator_t787956054 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, XPathNavigator_t787956054 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
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
// System.Xml.XPath.XPathResultType[]
struct XPathResultTypeU5BU5D_t1515527577  : public RuntimeArray
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


// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m182537451_gshared (Dictionary_2_t3384741 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Add(!0,!1)
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2_Add_m1279427033_gshared (Dictionary_2_t3384741 * __this, RuntimeObject * p0, int32_t p1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::TryGetValue(!0,!1&)
extern "C" IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m3959998165_gshared (Dictionary_2_t3384741 * __this, RuntimeObject * p0, int32_t* p1, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Object__ctor_m297566312 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<System.Object> System.Xml.XPath.XPathNavigator/<EnumerateChildren>c__Iterator1::System.Collections.Generic.IEnumerable<object>.GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* U3CEnumerateChildrenU3Ec__Iterator1_System_Collections_Generic_IEnumerableU3CobjectU3E_GetEnumerator_m2784775865 (U3CEnumerateChildrenU3Ec__Iterator1_t1970726095 * __this, const RuntimeMethod* method);
// System.Int32 System.Threading.Interlocked::CompareExchange(System.Int32&,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t Interlocked_CompareExchange_m3023855514 (RuntimeObject * __this /* static, unused */, int32_t* p0, int32_t p1, int32_t p2, const RuntimeMethod* method);
// System.Void System.Xml.XPath.XPathNavigator/<EnumerateChildren>c__Iterator1::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CEnumerateChildrenU3Ec__Iterator1__ctor_m1670277563 (U3CEnumerateChildrenU3Ec__Iterator1_t1970726095 * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR bool String_op_Equality_m920492651 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
extern "C" IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m2730133172 (NotSupportedException_t1314879016 * __this, const RuntimeMethod* method);
// System.Void System.Xml.XPath.XPathNodeIterator::.ctor()
extern "C" IL2CPP_METHOD_ATTR void XPathNodeIterator__ctor_m2459357076 (XPathNodeIterator_t3667290188 * __this, const RuntimeMethod* method);
// System.Void System.Xml.XPath.XPathNavigator/EnumerableIterator::.ctor(System.Collections.IEnumerable,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void EnumerableIterator__ctor_m868206615 (EnumerableIterator_t1590428576 * __this, RuntimeObject* ___source0, int32_t ___pos1, const RuntimeMethod* method);
// System.Void System.Xml.XPath.XPathNavigatorComparer::.ctor()
extern "C" IL2CPP_METHOD_ATTR void XPathNavigatorComparer__ctor_m3727039997 (XPathNavigatorComparer_t2421573191 * __this, const RuntimeMethod* method);
// System.Void System.Xml.XPath.XPathNodeIterator/<GetEnumerator>c__Iterator2::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ec__Iterator2__ctor_m4018238552 (U3CGetEnumeratorU3Ec__Iterator2_t90454087 * __this, const RuntimeMethod* method);
// System.Void System.Xml.XPath.XPathFunction::.ctor(System.Xml.XPath.FunctionArguments)
extern "C" IL2CPP_METHOD_ATTR void XPathFunction__ctor_m3144973253 (XPathFunction_t857746608 * __this, FunctionArguments_t3573450773 * ___args0, const RuntimeMethod* method);
// System.Xml.XPath.Expression System.Xml.XPath.XPathSorter::ExpressionFromObject(System.Object)
extern "C" IL2CPP_METHOD_ATTR Expression_t1452783009 * XPathSorter_ExpressionFromObject_m606255708 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___expr0, const RuntimeMethod* method);
// System.Void System.Xml.XPath.XPathSorter/XPathNumberComparer::.ctor(System.Xml.XPath.XmlSortOrder)
extern "C" IL2CPP_METHOD_ATTR void XPathNumberComparer__ctor_m3809809632 (XPathNumberComparer_t6863540 * __this, int32_t ___orderSort0, const RuntimeMethod* method);
// System.Void System.Xml.XPath.XPathSorter/XPathTextComparer::.ctor(System.Xml.XPath.XmlSortOrder,System.Xml.XPath.XmlCaseOrder,System.String)
extern "C" IL2CPP_METHOD_ATTR void XPathTextComparer__ctor_m1758171726 (XPathTextComparer_t2075334572 * __this, int32_t ___orderSort0, int32_t ___orderCase1, String_t* ___strLang2, const RuntimeMethod* method);
// System.Xml.XPath.Expression System.Xml.XPath.CompiledExpression::get_ExpressionNode()
extern "C" IL2CPP_METHOD_ATTR Expression_t1452783009 * CompiledExpression_get_ExpressionNode_m1591642156 (CompiledExpression_t4018285681 * __this, const RuntimeMethod* method);
// System.Void Mono.Xml.XPath.XPathParser::.ctor()
extern "C" IL2CPP_METHOD_ATTR void XPathParser__ctor_m2802761505 (XPathParser_t4136515887 * __this, const RuntimeMethod* method);
// System.Xml.XPath.Expression Mono.Xml.XPath.XPathParser::Compile(System.String)
extern "C" IL2CPP_METHOD_ATTR Expression_t1452783009 * XPathParser_Compile_m1959434407 (XPathParser_t4136515887 * __this, String_t* ___xpath0, const RuntimeMethod* method);
// System.Void System.Xml.XPath.XPathException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void XPathException__ctor_m3226187054 (XPathException_t2107611652 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Boolean System.Double::IsNaN(System.Double)
extern "C" IL2CPP_METHOD_ATTR bool Double_IsNaN_m649024406 (RuntimeObject * __this /* static, unused */, double p0, const RuntimeMethod* method);
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_CurrentCulture()
extern "C" IL2CPP_METHOD_ATTR CultureInfo_t4157843068 * CultureInfo_get_CurrentCulture_m1632690660 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void System.Globalization.CultureInfo::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void CultureInfo__ctor_m686319079 (CultureInfo_t4157843068 * __this, String_t* p0, const RuntimeMethod* method);
// System.Int32 System.String::Compare(System.String,System.String,System.Boolean,System.Globalization.CultureInfo)
extern "C" IL2CPP_METHOD_ATTR int32_t String_Compare_m1293271421 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, bool p2, CultureInfo_t4157843068 * p3, const RuntimeMethod* method);
// System.Void System.Collections.ArrayList::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ArrayList__ctor_m4254721275 (ArrayList_t2718874744 * __this, const RuntimeMethod* method);
// System.Int32 System.Xml.XPath.XPathSorter::Compare(System.Object,System.Object)
extern "C" IL2CPP_METHOD_ATTR int32_t XPathSorter_Compare_m1410690161 (XPathSorter_t36376808 * __this, RuntimeObject * ___o10, RuntimeObject * ___o21, const RuntimeMethod* method);
// System.Void System.Xml.XPath.XPathSorter::.ctor(System.Object,System.Collections.IComparer)
extern "C" IL2CPP_METHOD_ATTR void XPathSorter__ctor_m2798942655 (XPathSorter_t36376808 * __this, RuntimeObject * ___expr0, RuntimeObject* ___cmp1, const RuntimeMethod* method);
// System.Void System.Xml.XPath.XPathSorter::.ctor(System.Object,System.Xml.XPath.XmlSortOrder,System.Xml.XPath.XmlCaseOrder,System.String,System.Xml.XPath.XmlDataType)
extern "C" IL2CPP_METHOD_ATTR void XPathSorter__ctor_m1849939766 (XPathSorter_t36376808 * __this, RuntimeObject * ___expr0, int32_t ___orderSort1, int32_t ___orderCase2, String_t* ___lang3, int32_t ___dataType4, const RuntimeMethod* method);
// System.Collections.ArrayList System.Xml.XPath.XPathSorters::ToSortElementList(System.Xml.XPath.BaseIterator)
extern "C" IL2CPP_METHOD_ATTR ArrayList_t2718874744 * XPathSorters_ToSortElementList_m992101952 (XPathSorters_t698127628 * __this, BaseIterator_t4168896842 * ___iter0, const RuntimeMethod* method);
// System.Xml.IXmlNamespaceResolver System.Xml.XPath.BaseIterator::get_NamespaceManager()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* BaseIterator_get_NamespaceManager_m2542706114 (BaseIterator_t4168896842 * __this, const RuntimeMethod* method);
// System.Xml.XPath.BaseIterator System.Xml.XPath.XPathSorters::Sort(System.Collections.ArrayList,System.Xml.IXmlNamespaceResolver)
extern "C" IL2CPP_METHOD_ATTR BaseIterator_t4168896842 * XPathSorters_Sort_m148301611 (XPathSorters_t698127628 * __this, ArrayList_t2718874744 * ___rgElts0, RuntimeObject* ___nsm1, const RuntimeMethod* method);
// System.Void System.Xml.XPath.XPathSortElement::.ctor()
extern "C" IL2CPP_METHOD_ATTR void XPathSortElement__ctor_m4130792685 (XPathSortElement_t4237073177 * __this, const RuntimeMethod* method);
// System.Object System.Xml.XPath.XPathSorter::Evaluate(System.Xml.XPath.BaseIterator)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * XPathSorter_Evaluate_m2305850354 (XPathSorter_t36376808 * __this, BaseIterator_t4168896842 * ___iter0, const RuntimeMethod* method);
// System.Void System.Xml.XPath.ListIterator::.ctor(System.Collections.IList,System.Xml.IXmlNamespaceResolver)
extern "C" IL2CPP_METHOD_ATTR void ListIterator__ctor_m1701056558 (ListIterator_t3066609410 * __this, RuntimeObject* ___list0, RuntimeObject* ___nsm1, const RuntimeMethod* method);
// System.String System.Convert::ToBase64String(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR String_t* Convert_ToBase64String_m3839334935 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* p0, const RuntimeMethod* method);
// System.Byte[] System.Xml.XmlConvert::FromBinHexString(System.String)
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* XmlConvert_FromBinHexString_m376671528 (RuntimeObject * __this /* static, unused */, String_t* ___s0, const RuntimeMethod* method);
// System.Decimal System.Convert::ToDecimal(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR Decimal_t2948259380  Convert_ToDecimal_m2233265097 (RuntimeObject * __this /* static, unused */, bool p0, const RuntimeMethod* method);
// System.Double System.Convert::ToDouble(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR double Convert_ToDouble_m954895424 (RuntimeObject * __this /* static, unused */, bool p0, const RuntimeMethod* method);
// System.Single System.Convert::ToSingle(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR float Convert_ToSingle_m1386109941 (RuntimeObject * __this /* static, unused */, bool p0, const RuntimeMethod* method);
// System.Int32 System.Convert::ToInt32(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR int32_t Convert_ToInt32_m2100527582 (RuntimeObject * __this /* static, unused */, bool p0, const RuntimeMethod* method);
// System.Int64 System.Convert::ToInt64(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR int64_t Convert_ToInt64_m2812720657 (RuntimeObject * __this /* static, unused */, bool p0, const RuntimeMethod* method);
// System.DateTime System.DateTime::get_Date()
extern "C" IL2CPP_METHOD_ATTR DateTime_t3738529785  DateTime_get_Date_m46742767 (DateTime_t3738529785 * __this, const RuntimeMethod* method);
// System.Int32 System.DateTime::get_Day()
extern "C" IL2CPP_METHOD_ATTR int32_t DateTime_get_Day_m1623500273 (DateTime_t3738529785 * __this, const RuntimeMethod* method);
// System.Void System.DateTime::.ctor(System.Int32,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void DateTime__ctor_m12900168 (DateTime_t3738529785 * __this, int32_t p0, int32_t p1, int32_t p2, const RuntimeMethod* method);
// System.Int32 System.DateTime::get_Month()
extern "C" IL2CPP_METHOD_ATTR int32_t DateTime_get_Month_m1566006993 (DateTime_t3738529785 * __this, const RuntimeMethod* method);
// System.Int32 System.DateTime::get_Year()
extern "C" IL2CPP_METHOD_ATTR int32_t DateTime_get_Year_m1184003812 (DateTime_t3738529785 * __this, const RuntimeMethod* method);
// System.TimeSpan System.DateTime::get_TimeOfDay()
extern "C" IL2CPP_METHOD_ATTR TimeSpan_t881159249  DateTime_get_TimeOfDay_m82064893 (DateTime_t3738529785 * __this, const RuntimeMethod* method);
// System.Int64 System.TimeSpan::get_Ticks()
extern "C" IL2CPP_METHOD_ATTR int64_t TimeSpan_get_Ticks_m2137362016 (TimeSpan_t881159249 * __this, const RuntimeMethod* method);
// System.Void System.DateTime::.ctor(System.Int64)
extern "C" IL2CPP_METHOD_ATTR void DateTime__ctor_m516789325 (DateTime_t3738529785 * __this, int64_t p0, const RuntimeMethod* method);
// System.String System.Xml.XmlConvert::ToString(System.DateTime)
extern "C" IL2CPP_METHOD_ATTR String_t* XmlConvert_ToString_m2925918111 (RuntimeObject * __this /* static, unused */, DateTime_t3738529785  ___value0, const RuntimeMethod* method);
// System.String System.Xml.XmlConvert::ToString(System.TimeSpan)
extern "C" IL2CPP_METHOD_ATTR String_t* XmlConvert_ToString_m1102839109 (RuntimeObject * __this /* static, unused */, TimeSpan_t881159249  ___value0, const RuntimeMethod* method);
// System.String System.Xml.XQueryConvert::DayTimeDurationToDuration(System.TimeSpan)
extern "C" IL2CPP_METHOD_ATTR String_t* XQueryConvert_DayTimeDurationToDuration_m2511886778 (RuntimeObject * __this /* static, unused */, TimeSpan_t881159249  ___value0, const RuntimeMethod* method);
// System.Void System.Decimal::.ctor(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Decimal__ctor_m1256289983 (Decimal_t2948259380 * __this, int32_t p0, const RuntimeMethod* method);
// System.Boolean System.Decimal::op_Inequality(System.Decimal,System.Decimal)
extern "C" IL2CPP_METHOD_ATTR bool Decimal_op_Inequality_m3543190500 (RuntimeObject * __this /* static, unused */, Decimal_t2948259380  p0, Decimal_t2948259380  p1, const RuntimeMethod* method);
// System.Double System.Convert::ToDouble(System.Decimal)
extern "C" IL2CPP_METHOD_ATTR double Convert_ToDouble_m1177445661 (RuntimeObject * __this /* static, unused */, Decimal_t2948259380  p0, const RuntimeMethod* method);
// System.Single System.Convert::ToSingle(System.Decimal)
extern "C" IL2CPP_METHOD_ATTR float Convert_ToSingle_m1389817074 (RuntimeObject * __this /* static, unused */, Decimal_t2948259380  p0, const RuntimeMethod* method);
// System.Int32 System.Convert::ToInt32(System.Decimal)
extern "C" IL2CPP_METHOD_ATTR int32_t Convert_ToInt32_m3048308591 (RuntimeObject * __this /* static, unused */, Decimal_t2948259380  p0, const RuntimeMethod* method);
// System.Int64 System.Convert::ToInt64(System.Decimal)
extern "C" IL2CPP_METHOD_ATTR int64_t Convert_ToInt64_m4082637156 (RuntimeObject * __this /* static, unused */, Decimal_t2948259380  p0, const RuntimeMethod* method);
// System.String System.Xml.XmlConvert::ToString(System.Decimal)
extern "C" IL2CPP_METHOD_ATTR String_t* XmlConvert_ToString_m732346799 (RuntimeObject * __this /* static, unused */, Decimal_t2948259380  ___value0, const RuntimeMethod* method);
// System.Decimal System.Decimal::op_Explicit(System.Double)
extern "C" IL2CPP_METHOD_ATTR Decimal_t2948259380  Decimal_op_Explicit_m2433293820 (RuntimeObject * __this /* static, unused */, double p0, const RuntimeMethod* method);
// System.Single System.Convert::ToSingle(System.Double)
extern "C" IL2CPP_METHOD_ATTR float Convert_ToSingle_m3227075028 (RuntimeObject * __this /* static, unused */, double p0, const RuntimeMethod* method);
// System.Int32 System.Convert::ToInt32(System.Double)
extern "C" IL2CPP_METHOD_ATTR int32_t Convert_ToInt32_m2880498116 (RuntimeObject * __this /* static, unused */, double p0, const RuntimeMethod* method);
// System.Int64 System.Convert::ToInt64(System.Double)
extern "C" IL2CPP_METHOD_ATTR int64_t Convert_ToInt64_m3758262873 (RuntimeObject * __this /* static, unused */, double p0, const RuntimeMethod* method);
// System.String System.Xml.XmlConvert::ToString(System.Double)
extern "C" IL2CPP_METHOD_ATTR String_t* XmlConvert_ToString_m2027917565 (RuntimeObject * __this /* static, unused */, double ___value0, const RuntimeMethod* method);
// System.TimeSpan System.Xml.XmlConvert::ToTimeSpan(System.String)
extern "C" IL2CPP_METHOD_ATTR TimeSpan_t881159249  XmlConvert_ToTimeSpan_m349710467 (RuntimeObject * __this /* static, unused */, String_t* ___s0, const RuntimeMethod* method);
// System.Decimal System.Decimal::op_Explicit(System.Single)
extern "C" IL2CPP_METHOD_ATTR Decimal_t2948259380  Decimal_op_Explicit_m2070069477 (RuntimeObject * __this /* static, unused */, float p0, const RuntimeMethod* method);
// System.Double System.Convert::ToDouble(System.Single)
extern "C" IL2CPP_METHOD_ATTR double Convert_ToDouble_m217737046 (RuntimeObject * __this /* static, unused */, float p0, const RuntimeMethod* method);
// System.Int32 System.Convert::ToInt32(System.Single)
extern "C" IL2CPP_METHOD_ATTR int32_t Convert_ToInt32_m1613163543 (RuntimeObject * __this /* static, unused */, float p0, const RuntimeMethod* method);
// System.Int64 System.Convert::ToInt64(System.Single)
extern "C" IL2CPP_METHOD_ATTR int64_t Convert_ToInt64_m658295522 (RuntimeObject * __this /* static, unused */, float p0, const RuntimeMethod* method);
// System.String System.Xml.XmlConvert::ToString(System.Single)
extern "C" IL2CPP_METHOD_ATTR String_t* XmlConvert_ToString_m934314535 (RuntimeObject * __this /* static, unused */, float ___value0, const RuntimeMethod* method);
// System.TimeSpan System.TimeSpan::FromDays(System.Double)
extern "C" IL2CPP_METHOD_ATTR TimeSpan_t881159249  TimeSpan_FromDays_m3788741098 (RuntimeObject * __this /* static, unused */, double p0, const RuntimeMethod* method);
// System.Int32 System.DateTime::get_Hour()
extern "C" IL2CPP_METHOD_ATTR int32_t DateTime_get_Hour_m4153505178 (DateTime_t3738529785 * __this, const RuntimeMethod* method);
// System.Int32 System.DateTime::get_Minute()
extern "C" IL2CPP_METHOD_ATTR int32_t DateTime_get_Minute_m87527789 (DateTime_t3738529785 * __this, const RuntimeMethod* method);
// System.Int32 System.DateTime::get_Second()
extern "C" IL2CPP_METHOD_ATTR int32_t DateTime_get_Second_m2686182256 (DateTime_t3738529785 * __this, const RuntimeMethod* method);
// System.Void System.TimeSpan::.ctor(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void TimeSpan__ctor_m4161351023 (TimeSpan_t881159249 * __this, int32_t p0, int32_t p1, int32_t p2, int32_t p3, const RuntimeMethod* method);
// System.Void System.TimeSpan::.ctor(System.Int32,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void TimeSpan__ctor_m3689759052 (TimeSpan_t881159249 * __this, int32_t p0, int32_t p1, int32_t p2, const RuntimeMethod* method);
// System.Int64 System.DateTime::get_Ticks()
extern "C" IL2CPP_METHOD_ATTR int64_t DateTime_get_Ticks_m1550640881 (DateTime_t3738529785 * __this, const RuntimeMethod* method);
// System.Void System.TimeSpan::.ctor(System.Int64)
extern "C" IL2CPP_METHOD_ATTR void TimeSpan__ctor_m1896986612 (TimeSpan_t881159249 * __this, int64_t p0, const RuntimeMethod* method);
// System.String System.Xml.XmlConvert::ToBinHexString(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR String_t* XmlConvert_ToBinHexString_m2457677889 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* ___buffer0, const RuntimeMethod* method);
// System.Decimal System.Decimal::op_Implicit(System.Int64)
extern "C" IL2CPP_METHOD_ATTR Decimal_t2948259380  Decimal_op_Implicit_m1349849065 (RuntimeObject * __this /* static, unused */, int64_t p0, const RuntimeMethod* method);
// System.Double System.Convert::ToDouble(System.Int64)
extern "C" IL2CPP_METHOD_ATTR double Convert_ToDouble_m2180337032 (RuntimeObject * __this /* static, unused */, int64_t p0, const RuntimeMethod* method);
// System.Single System.Convert::ToSingle(System.Int64)
extern "C" IL2CPP_METHOD_ATTR float Convert_ToSingle_m2891972375 (RuntimeObject * __this /* static, unused */, int64_t p0, const RuntimeMethod* method);
// System.Int32 System.Convert::ToInt32(System.Int64)
extern "C" IL2CPP_METHOD_ATTR int32_t Convert_ToInt32_m1085875835 (RuntimeObject * __this /* static, unused */, int64_t p0, const RuntimeMethod* method);
// System.String System.Xml.XmlConvert::ToString(System.Int64)
extern "C" IL2CPP_METHOD_ATTR String_t* XmlConvert_ToString_m2891307708 (RuntimeObject * __this /* static, unused */, int64_t ___value0, const RuntimeMethod* method);
// System.Decimal System.Decimal::op_Implicit(System.Int32)
extern "C" IL2CPP_METHOD_ATTR Decimal_t2948259380  Decimal_op_Implicit_m1328901562 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method);
// System.Double System.Convert::ToDouble(System.Int32)
extern "C" IL2CPP_METHOD_ATTR double Convert_ToDouble_m2924063577 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method);
// System.Single System.Convert::ToSingle(System.Int32)
extern "C" IL2CPP_METHOD_ATTR float Convert_ToSingle_m3635698920 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method);
// System.String System.Xml.XmlConvert::ToString(System.Int32)
extern "C" IL2CPP_METHOD_ATTR String_t* XmlConvert_ToString_m4082948798 (RuntimeObject * __this /* static, unused */, int32_t ___value0, const RuntimeMethod* method);
// System.String System.Xml.XmlConvert::ToString(System.DateTime,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* XmlConvert_ToString_m419894725 (RuntimeObject * __this /* static, unused */, DateTime_t3738529785  ___value0, String_t* ___format1, const RuntimeMethod* method);
// System.String System.Xml.XQueryConvert::YearMonthDurationToDuration(System.TimeSpan)
extern "C" IL2CPP_METHOD_ATTR String_t* XQueryConvert_YearMonthDurationToDuration_m1651035387 (RuntimeObject * __this /* static, unused */, TimeSpan_t881159249  ___value0, const RuntimeMethod* method);
// System.Byte[] System.Convert::FromBase64String(System.String)
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* Convert_FromBase64String_m3685135396 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// System.Boolean System.Xml.XmlConvert::ToBoolean(System.String)
extern "C" IL2CPP_METHOD_ATTR bool XmlConvert_ToBoolean_m3792671347 (RuntimeObject * __this /* static, unused */, String_t* ___s0, const RuntimeMethod* method);
// System.DateTime System.Xml.XmlConvert::ToDateTime(System.String)
extern "C" IL2CPP_METHOD_ATTR DateTime_t3738529785  XmlConvert_ToDateTime_m800272518 (RuntimeObject * __this /* static, unused */, String_t* ___s0, const RuntimeMethod* method);
// System.Decimal System.Xml.XmlConvert::ToDecimal(System.String)
extern "C" IL2CPP_METHOD_ATTR Decimal_t2948259380  XmlConvert_ToDecimal_m1028049782 (RuntimeObject * __this /* static, unused */, String_t* ___s0, const RuntimeMethod* method);
// System.Double System.Xml.XmlConvert::ToDouble(System.String)
extern "C" IL2CPP_METHOD_ATTR double XmlConvert_ToDouble_m4257337793 (RuntimeObject * __this /* static, unused */, String_t* ___s0, const RuntimeMethod* method);
// System.Single System.Xml.XmlConvert::ToSingle(System.String)
extern "C" IL2CPP_METHOD_ATTR float XmlConvert_ToSingle_m966688176 (RuntimeObject * __this /* static, unused */, String_t* ___s0, const RuntimeMethod* method);
// System.Int32 System.Xml.XmlConvert::ToInt32(System.String)
extern "C" IL2CPP_METHOD_ATTR int32_t XmlConvert_ToInt32_m2886969565 (RuntimeObject * __this /* static, unused */, String_t* ___s0, const RuntimeMethod* method);
// System.Int64 System.Xml.XmlConvert::ToInt64(System.String)
extern "C" IL2CPP_METHOD_ATTR int64_t XmlConvert_ToInt64_m1902133275 (RuntimeObject * __this /* static, unused */, String_t* ___s0, const RuntimeMethod* method);
// System.UInt32 System.Xml.XmlConvert::ToUInt32(System.String)
extern "C" IL2CPP_METHOD_ATTR uint32_t XmlConvert_ToUInt32_m120686766 (RuntimeObject * __this /* static, unused */, String_t* ___s0, const RuntimeMethod* method);
// System.UInt64 System.Xml.XmlConvert::ToUInt64(System.String)
extern "C" IL2CPP_METHOD_ATTR uint64_t XmlConvert_ToUInt64_m4076754168 (RuntimeObject * __this /* static, unused */, String_t* ___s0, const RuntimeMethod* method);
// System.Decimal System.Decimal::op_Implicit(System.UInt64)
extern "C" IL2CPP_METHOD_ATTR Decimal_t2948259380  Decimal_op_Implicit_m2299919277 (RuntimeObject * __this /* static, unused */, uint64_t p0, const RuntimeMethod* method);
// System.UInt16 System.Xml.XmlConvert::ToUInt16(System.String)
extern "C" IL2CPP_METHOD_ATTR uint16_t XmlConvert_ToUInt16_m928332189 (RuntimeObject * __this /* static, unused */, String_t* ___s0, const RuntimeMethod* method);
// System.Void System.Console::Write(System.String)
extern "C" IL2CPP_METHOD_ATTR void Console_Write_m3466945868 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// System.Void System.Xml.Xsl.SimpleXsltDebugger::PrintXPathNavigator(System.Xml.XPath.XPathNavigator)
extern "C" IL2CPP_METHOD_ATTR void SimpleXsltDebugger_PrintXPathNavigator_m3059154787 (SimpleXsltDebugger_t937136423 * __this, XPathNavigator_t787956054 * ___nav0, const RuntimeMethod* method);
// System.Void System.Console::WriteLine()
extern "C" IL2CPP_METHOD_ATTR void Console_WriteLine_m3341094494 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Type System.Object::GetType()
extern "C" IL2CPP_METHOD_ATTR Type_t * Object_GetType_m88164663 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.Console::WriteLine(System.String,System.Object,System.Object,System.Object)
extern "C" IL2CPP_METHOD_ATTR void Console_WriteLine_m2144370159 (RuntimeObject * __this /* static, unused */, String_t* p0, RuntimeObject * p1, RuntimeObject * p2, RuntimeObject * p3, const RuntimeMethod* method);
// System.Void System.Console::Write(System.String,System.Object,System.Object,System.Object)
extern "C" IL2CPP_METHOD_ATTR void Console_Write_m4272738233 (RuntimeObject * __this /* static, unused */, String_t* p0, RuntimeObject * p1, RuntimeObject * p2, RuntimeObject * p3, const RuntimeMethod* method);
// System.Void System.Xml.Xsl.XslCompiledTransform::.ctor(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void XslCompiledTransform__ctor_m758478083 (XslCompiledTransform_t1831779368 * __this, bool ___enableDebug0, const RuntimeMethod* method);
// System.Void System.Xml.XmlWriterSettings::.ctor()
extern "C" IL2CPP_METHOD_ATTR void XmlWriterSettings__ctor_m2465852079 (XmlWriterSettings_t3314986516 * __this, const RuntimeMethod* method);
// System.Void System.Xml.Xsl.NoOperationDebugger::.ctor()
extern "C" IL2CPP_METHOD_ATTR void NoOperationDebugger__ctor_m556574875 (NoOperationDebugger_t2873281971 * __this, const RuntimeMethod* method);
// System.Void System.Xml.XmlWriterSettings::set_ConformanceLevel(System.Xml.ConformanceLevel)
extern "C" IL2CPP_METHOD_ATTR void XmlWriterSettings_set_ConformanceLevel_m2379836262 (XmlWriterSettings_t3314986516 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.IO.FileStream System.IO.File::Create(System.String)
extern "C" IL2CPP_METHOD_ATTR FileStream_t4292183065 * File_Create_m2207667142 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// System.Void System.Xml.XPath.XPathDocument::.ctor(System.String,System.Xml.XmlSpace)
extern "C" IL2CPP_METHOD_ATTR void XPathDocument__ctor_m3635034092 (XPathDocument_t1673143697 * __this, String_t* ___uri0, int32_t ___space1, const RuntimeMethod* method);
// System.Void System.Xml.Xsl.XslCompiledTransform::Transform(System.Xml.XPath.IXPathNavigable,System.Xml.Xsl.XsltArgumentList,System.IO.Stream)
extern "C" IL2CPP_METHOD_ATTR void XslCompiledTransform_Transform_m393856666 (XslCompiledTransform_t1831779368 * __this, RuntimeObject* ___input0, XsltArgumentList_t741251601 * ___args1, Stream_t1273022909 * ___output2, const RuntimeMethod* method);
// System.Void System.Xml.Xsl.XslCompiledTransform::Transform(System.String,System.Xml.Xsl.XsltArgumentList,System.Xml.XmlWriter)
extern "C" IL2CPP_METHOD_ATTR void XslCompiledTransform_Transform_m421172798 (XslCompiledTransform_t1831779368 * __this, String_t* ___inputfile0, XsltArgumentList_t741251601 * ___args1, XmlWriter_t127905479 * ___output2, const RuntimeMethod* method);
// System.Void System.Xml.Xsl.XslCompiledTransform::Transform(System.Xml.XPath.IXPathNavigable,System.Xml.Xsl.XsltArgumentList,System.IO.TextWriter)
extern "C" IL2CPP_METHOD_ATTR void XslCompiledTransform_Transform_m4009940777 (XslCompiledTransform_t1831779368 * __this, RuntimeObject* ___input0, XsltArgumentList_t741251601 * ___args1, TextWriter_t3478189236 * ___output2, const RuntimeMethod* method);
// System.Void System.Xml.Xsl.XslCompiledTransform::Transform(System.Xml.XPath.IXPathNavigable,System.Xml.Xsl.XsltArgumentList,System.Xml.XmlWriter)
extern "C" IL2CPP_METHOD_ATTR void XslCompiledTransform_Transform_m606404611 (XslCompiledTransform_t1831779368 * __this, RuntimeObject* ___input0, XsltArgumentList_t741251601 * ___args1, XmlWriter_t127905479 * ___output2, const RuntimeMethod* method);
// System.Void System.Xml.Xsl.XslCompiledTransform::Transform(System.Xml.XmlReader,System.Xml.Xsl.XsltArgumentList,System.Xml.XmlWriter)
extern "C" IL2CPP_METHOD_ATTR void XslCompiledTransform_Transform_m3704894601 (XslCompiledTransform_t1831779368 * __this, XmlReader_t3121518892 * ___reader0, XsltArgumentList_t741251601 * ___args1, XmlWriter_t127905479 * ___output2, const RuntimeMethod* method);
// System.Void System.Xml.XPath.XPathDocument::.ctor(System.Xml.XmlReader,System.Xml.XmlSpace)
extern "C" IL2CPP_METHOD_ATTR void XPathDocument__ctor_m3434295591 (XPathDocument_t1673143697 * __this, XmlReader_t3121518892 * ___reader0, int32_t ___space1, const RuntimeMethod* method);
// System.Void System.Xml.Xsl.XslCompiledTransform::Transform(System.Xml.XmlReader,System.Xml.Xsl.XsltArgumentList,System.Xml.XmlWriter,System.Xml.XmlResolver)
extern "C" IL2CPP_METHOD_ATTR void XslCompiledTransform_Transform_m2784886948 (XslCompiledTransform_t1831779368 * __this, XmlReader_t3121518892 * ___input0, XsltArgumentList_t741251601 * ___args1, XmlWriter_t127905479 * ___output2, XmlResolver_t626023767 * ___resolver3, const RuntimeMethod* method);
// System.Void System.Xml.Xsl.XslCompiledTransform::Transform(System.Xml.XPath.XPathNavigator,System.Xml.Xsl.XsltArgumentList,System.IO.TextWriter)
extern "C" IL2CPP_METHOD_ATTR void XslCompiledTransform_Transform_m3052639314 (XslCompiledTransform_t1831779368 * __this, XPathNavigator_t787956054 * ___input0, XsltArgumentList_t741251601 * ___args1, TextWriter_t3478189236 * ___output2, const RuntimeMethod* method);
// System.Void System.Xml.Xsl.XslCompiledTransform::Transform(System.Xml.XPath.XPathNavigator,System.Xml.Xsl.XsltArgumentList,System.IO.Stream)
extern "C" IL2CPP_METHOD_ATTR void XslCompiledTransform_Transform_m4274984391 (XslCompiledTransform_t1831779368 * __this, XPathNavigator_t787956054 * ___input0, XsltArgumentList_t741251601 * ___args1, Stream_t1273022909 * ___output2, const RuntimeMethod* method);
// System.Void System.Xml.Xsl.XslCompiledTransform::Transform(System.Xml.XPath.XPathNavigator,System.Xml.Xsl.XsltArgumentList,System.Xml.XmlWriter,System.Xml.XmlResolver)
extern "C" IL2CPP_METHOD_ATTR void XslCompiledTransform_Transform_m1013616809 (XslCompiledTransform_t1831779368 * __this, XPathNavigator_t787956054 * ___input0, XsltArgumentList_t741251601 * ___args1, XmlWriter_t127905479 * ___output2, XmlResolver_t626023767 * ___resolver3, const RuntimeMethod* method);
// System.Xml.XPath.XPathNavigator System.Xml.XPath.XPathDocument::CreateNavigator()
extern "C" IL2CPP_METHOD_ATTR XPathNavigator_t787956054 * XPathDocument_CreateNavigator_m1454500353 (XPathDocument_t1673143697 * __this, const RuntimeMethod* method);
// System.Void System.Xml.Xsl.XsltException::.ctor(System.String,System.Exception)
extern "C" IL2CPP_METHOD_ATTR void XsltException__ctor_m2928735883 (XsltException_t1876063340 * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Collections.Hashtable Mono.Xml.Xsl.CompiledStylesheet::get_Outputs()
extern "C" IL2CPP_METHOD_ATTR Hashtable_t1853889766 * CompiledStylesheet_get_Outputs_m1025770811 (CompiledStylesheet_t759457236 * __this, const RuntimeMethod* method);
// System.Void Mono.Xml.Xsl.GenericOutputter::.ctor(System.Xml.XmlWriter,System.Collections.Hashtable,System.Text.Encoding)
extern "C" IL2CPP_METHOD_ATTR void GenericOutputter__ctor_m1355938407 (GenericOutputter_t1694878872 * __this, XmlWriter_t127905479 * ___writer0, Hashtable_t1853889766 * ___outputs1, Encoding_t1523322056 * ___encoding2, const RuntimeMethod* method);
// System.Void Mono.Xml.Xsl.XslTransformProcessor::.ctor(Mono.Xml.Xsl.CompiledStylesheet,System.Object)
extern "C" IL2CPP_METHOD_ATTR void XslTransformProcessor__ctor_m2824512103 (XslTransformProcessor_t3405861191 * __this, CompiledStylesheet_t759457236 * ___style0, RuntimeObject * ___debugger1, const RuntimeMethod* method);
// System.Void Mono.Xml.Xsl.XslTransformProcessor::Process(System.Xml.XPath.XPathNavigator,Mono.Xml.Xsl.Outputter,System.Xml.Xsl.XsltArgumentList,System.Xml.XmlResolver)
extern "C" IL2CPP_METHOD_ATTR void XslTransformProcessor_Process_m1084818256 (XslTransformProcessor_t3405861191 * __this, XPathNavigator_t787956054 * ___root0, Outputter_t889105973 * ___outputtter1, XsltArgumentList_t741251601 * ___args2, XmlResolver_t626023767 * ___resolver3, const RuntimeMethod* method);
// System.Text.Encoding Mono.Xml.Xsl.XslOutput::get_Encoding()
extern "C" IL2CPP_METHOD_ATTR Encoding_t1523322056 * XslOutput_get_Encoding_m1490244604 (XslOutput_t472631936 * __this, const RuntimeMethod* method);
// System.Void System.IO.StreamWriter::.ctor(System.IO.Stream,System.Text.Encoding)
extern "C" IL2CPP_METHOD_ATTR void StreamWriter__ctor_m2310301218 (StreamWriter_t1266378904 * __this, Stream_t1273022909 * p0, Encoding_t1523322056 * p1, const RuntimeMethod* method);
// System.Void Mono.Xml.Xsl.GenericOutputter::.ctor(System.IO.TextWriter,System.Collections.Hashtable,System.Text.Encoding)
extern "C" IL2CPP_METHOD_ATTR void GenericOutputter__ctor_m2516974096 (GenericOutputter_t1694878872 * __this, TextWriter_t3478189236 * ___writer0, Hashtable_t1853889766 * ___outputs1, Encoding_t1523322056 * ___encoding2, const RuntimeMethod* method);
// System.Void System.Xml.XmlUrlResolver::.ctor()
extern "C" IL2CPP_METHOD_ATTR void XmlUrlResolver__ctor_m1338399436 (XmlUrlResolver_t817895037 * __this, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
extern "C" IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m1620074514 (RuntimeObject * __this /* static, unused */, RuntimeTypeHandle_t3027515415  p0, const RuntimeMethod* method);
// System.Void System.Xml.XmlTextReader::.ctor(System.String,System.IO.Stream)
extern "C" IL2CPP_METHOD_ATTR void XmlTextReader__ctor_m1114649521 (XmlTextReader_t4233384356 * __this, String_t* ___url0, Stream_t1273022909 * ___input1, const RuntimeMethod* method);
// System.Void System.Xml.XmlTextReader::set_XmlResolver(System.Xml.XmlResolver)
extern "C" IL2CPP_METHOD_ATTR void XmlTextReader_set_XmlResolver_m1445354776 (XmlTextReader_t4233384356 * __this, XmlResolver_t626023767 * ___value0, const RuntimeMethod* method);
// System.Void System.Xml.XmlValidatingReader::.ctor(System.Xml.XmlReader)
extern "C" IL2CPP_METHOD_ATTR void XmlValidatingReader__ctor_m746074126 (XmlValidatingReader_t1719295192 * __this, XmlReader_t3121518892 * ___reader0, const RuntimeMethod* method);
// System.Void System.Xml.XmlValidatingReader::set_XmlResolver(System.Xml.XmlResolver)
extern "C" IL2CPP_METHOD_ATTR void XmlValidatingReader_set_XmlResolver_m3039624282 (XmlValidatingReader_t1719295192 * __this, XmlResolver_t626023767 * ___value0, const RuntimeMethod* method);
// System.Void System.Xml.XmlValidatingReader::set_ValidationType(System.Xml.ValidationType)
extern "C" IL2CPP_METHOD_ATTR void XmlValidatingReader_set_ValidationType_m3850545770 (XmlValidatingReader_t1719295192 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Xml.XmlReader System.Xml.Xsl.XslCompiledTransform::GetXmlReader(System.String)
extern "C" IL2CPP_METHOD_ATTR XmlReader_t3121518892 * XslCompiledTransform_GetXmlReader_m1245545288 (XslCompiledTransform_t1831779368 * __this, String_t* ___url0, const RuntimeMethod* method);
// System.Void System.Xml.Xsl.XslCompiledTransform::Load(System.Xml.XmlReader)
extern "C" IL2CPP_METHOD_ATTR void XslCompiledTransform_Load_m3215015174 (XslCompiledTransform_t1831779368 * __this, XmlReader_t3121518892 * ___stylesheet0, const RuntimeMethod* method);
// System.Void System.Xml.Xsl.XslCompiledTransform::Load(System.Xml.XmlReader,System.Xml.Xsl.XsltSettings,System.Xml.XmlResolver)
extern "C" IL2CPP_METHOD_ATTR void XslCompiledTransform_Load_m2431283482 (XslCompiledTransform_t1831779368 * __this, XmlReader_t3121518892 * ___stylesheet0, XsltSettings_t3615464394 * ___settings1, XmlResolver_t626023767 * ___resolver2, const RuntimeMethod* method);
// System.Void System.Xml.Xsl.XslCompiledTransform::Load(System.Xml.XPath.XPathNavigator,System.Xml.Xsl.XsltSettings,System.Xml.XmlResolver)
extern "C" IL2CPP_METHOD_ATTR void XslCompiledTransform_Load_m1324717055 (XslCompiledTransform_t1831779368 * __this, XPathNavigator_t787956054 * ___stylesheet0, XsltSettings_t3615464394 * ___settings1, XmlResolver_t626023767 * ___resolver2, const RuntimeMethod* method);
// System.Void Mono.Xml.Xsl.Compiler::.ctor(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Compiler__ctor_m2510731679 (Compiler_t485846590 * __this, RuntimeObject * ___debugger0, const RuntimeMethod* method);
// Mono.Xml.Xsl.CompiledStylesheet Mono.Xml.Xsl.Compiler::Compile(System.Xml.XPath.XPathNavigator,System.Xml.XmlResolver,System.Security.Policy.Evidence)
extern "C" IL2CPP_METHOD_ATTR CompiledStylesheet_t759457236 * Compiler_Compile_m2130682056 (Compiler_t485846590 * __this, XPathNavigator_t787956054 * ___nav0, XmlResolver_t626023767 * ___res1, Evidence_t2008144148 * ___evidence2, const RuntimeMethod* method);
// System.Void System.Collections.Hashtable::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Hashtable__ctor_m1815022027 (Hashtable_t1853889766 * __this, const RuntimeMethod* method);
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
extern "C" IL2CPP_METHOD_ATTR Delegate_t1188392813 * Delegate_Combine_m1859655160 (RuntimeObject * __this /* static, unused */, Delegate_t1188392813 * p0, Delegate_t1188392813 * p1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
extern "C" IL2CPP_METHOD_ATTR Delegate_t1188392813 * Delegate_Remove_m334097152 (RuntimeObject * __this /* static, unused */, Delegate_t1188392813 * p0, Delegate_t1188392813 * p1, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void ArgumentException__ctor_m1312628991 (ArgumentException_t132251570 * __this, String_t* p0, const RuntimeMethod* method);
// System.Void System.Xml.XmlQualifiedName::.ctor(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void XmlQualifiedName__ctor_m835061046 (XmlQualifiedName_t2760654312 * __this, String_t* ___name0, String_t* ___ns1, const RuntimeMethod* method);
// System.Object System.Xml.Xsl.XsltArgumentList::ValidateParam(System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * XsltArgumentList_ValidateParam_m2717540126 (XsltArgumentList_t741251601 * __this, RuntimeObject * ___parameter0, const RuntimeMethod* method);
// System.Object System.Xml.Xsl.XsltArgumentList::GetExtensionObject(System.String)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * XsltArgumentList_GetExtensionObject_m2200005688 (XsltArgumentList_t741251601 * __this, String_t* ___namespaceUri0, const RuntimeMethod* method);
// System.Object System.Xml.Xsl.XsltArgumentList::GetParam(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * XsltArgumentList_GetParam_m3573250394 (XsltArgumentList_t741251601 * __this, String_t* ___name0, String_t* ___namespaceUri1, const RuntimeMethod* method);
// System.Double System.Decimal::op_Explicit(System.Decimal)
extern "C" IL2CPP_METHOD_ATTR double Decimal_op_Explicit_m2816896069 (RuntimeObject * __this /* static, unused */, Decimal_t2948259380  p0, const RuntimeMethod* method);
// System.Void System.Xml.Xsl.XsltException::.ctor()
extern "C" IL2CPP_METHOD_ATTR void XsltException__ctor_m1857825485 (XsltException_t1876063340 * __this, const RuntimeMethod* method);
// System.Void System.Xml.Xsl.XsltException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void XsltException__ctor_m682292363 (XsltException_t1876063340 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void System.Xml.Xsl.XsltException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" IL2CPP_METHOD_ATTR void XsltException__ctor_m4227114572 (XsltException_t1876063340 * __this, SerializationInfo_t950877179 * ___info0, StreamingContext_t3711869237  ___context1, const RuntimeMethod* method);
// System.Void System.Xml.Xsl.XsltException::.ctor(System.String,System.String,System.Exception,System.Int32,System.Int32,System.String)
extern "C" IL2CPP_METHOD_ATTR void XsltException__ctor_m470371806 (XsltException_t1876063340 * __this, String_t* ___msgFormat0, String_t* ___message1, Exception_t * ___innerException2, int32_t ___lineNumber3, int32_t ___linePosition4, String_t* ___sourceUri5, const RuntimeMethod* method);
// System.Void System.Xml.Xsl.XsltException::.ctor(System.String,System.Exception,System.Xml.XPath.XPathNavigator)
extern "C" IL2CPP_METHOD_ATTR void XsltException__ctor_m978028932 (XsltException_t1876063340 * __this, String_t* ___message0, Exception_t * ___innerException1, XPathNavigator_t787956054 * ___nav2, const RuntimeMethod* method);
// System.Void System.Xml.Xsl.XsltException::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" IL2CPP_METHOD_ATTR void XsltException_GetObjectData_m1382619486 (XsltException_t1876063340 * __this, SerializationInfo_t950877179 * ___info0, StreamingContext_t3711869237  ___context1, const RuntimeMethod* method);
// System.Void System.Xml.NameTable::.ctor()
extern "C" IL2CPP_METHOD_ATTR void NameTable__ctor_m874080766 (NameTable_t3178203267 * __this, const RuntimeMethod* method);
// System.Void System.Xml.XmlNamespaceManager::.ctor(System.Xml.XmlNameTable)
extern "C" IL2CPP_METHOD_ATTR void XmlNamespaceManager__ctor_m3238790559 (XmlNamespaceManager_t418790500 * __this, XmlNameTable_t71772148 * ___nameTable0, const RuntimeMethod* method);
// System.String System.Xml.XmlQualifiedName::get_Namespace()
extern "C" IL2CPP_METHOD_ATTR String_t* XmlQualifiedName_get_Namespace_m3957593392 (XmlQualifiedName_t2760654312 * __this, const RuntimeMethod* method);
// System.String System.Xml.XmlQualifiedName::get_Name()
extern "C" IL2CPP_METHOD_ATTR String_t* XmlQualifiedName_get_Name_m815040483 (XmlQualifiedName_t2760654312 * __this, const RuntimeMethod* method);
// System.Void System.SystemException::.ctor()
extern "C" IL2CPP_METHOD_ATTR void SystemException__ctor_m4274309232 (SystemException_t176217640 * __this, const RuntimeMethod* method);
// System.Int32 System.Runtime.Serialization.SerializationInfo::GetInt32(System.String)
extern "C" IL2CPP_METHOD_ATTR int32_t SerializationInfo_GetInt32_m2640574809 (SerializationInfo_t950877179 * __this, String_t* p0, const RuntimeMethod* method);
// System.String System.Runtime.Serialization.SerializationInfo::GetString(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* SerializationInfo_GetString_m3155282843 (SerializationInfo_t950877179 * __this, String_t* p0, const RuntimeMethod* method);
// System.String System.Xml.Xsl.XsltException::CreateMessage(System.String,System.String,System.Int32,System.Int32,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* XsltException_CreateMessage_m1566675326 (RuntimeObject * __this /* static, unused */, String_t* ___msgFormat0, String_t* ___message1, int32_t ___lineNumber2, int32_t ___linePosition3, String_t* ___sourceUri4, const RuntimeMethod* method);
// System.Void System.SystemException::.ctor(System.String,System.Exception)
extern "C" IL2CPP_METHOD_ATTR void SystemException__ctor_m4132668650 (SystemException_t176217640 * __this, String_t* p0, Exception_t * p1, const RuntimeMethod* method);
// System.String System.Xml.Xsl.XsltException::CreateMessage(System.String,System.Xml.XPath.XPathNavigator)
extern "C" IL2CPP_METHOD_ATTR String_t* XsltException_CreateMessage_m4042504401 (RuntimeObject * __this /* static, unused */, String_t* ___message0, XPathNavigator_t787956054 * ___nav1, const RuntimeMethod* method);
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
extern "C" IL2CPP_METHOD_ATTR CultureInfo_t4157843068 * CultureInfo_get_InvariantCulture_m3532445182 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.String System.Int32::ToString(System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR String_t* Int32_ToString_m1760361794 (int32_t* __this, RuntimeObject* p0, const RuntimeMethod* method);
// System.String System.String::Format(System.IFormatProvider,System.String,System.Object[])
extern "C" IL2CPP_METHOD_ATTR String_t* String_Format_m1881875187 (RuntimeObject * __this /* static, unused */, RuntimeObject* p0, String_t* p1, ObjectU5BU5D_t2843939325* p2, const RuntimeMethod* method);
// System.String System.Exception::get_Message()
extern "C" IL2CPP_METHOD_ATTR String_t* Exception_get_Message_m3320461627 (Exception_t * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m3937257545 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.Void System.Exception::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" IL2CPP_METHOD_ATTR void Exception_GetObjectData_m1103241326 (Exception_t * __this, SerializationInfo_t950877179 * p0, StreamingContext_t3711869237  p1, const RuntimeMethod* method);
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void SerializationInfo_AddValue_m412754688 (SerializationInfo_t950877179 * __this, String_t* p0, int32_t p1, const RuntimeMethod* method);
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.Object)
extern "C" IL2CPP_METHOD_ATTR void SerializationInfo_AddValue_m2872281893 (SerializationInfo_t950877179 * __this, String_t* p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Void System.EventArgs::.ctor()
extern "C" IL2CPP_METHOD_ATTR void EventArgs__ctor_m32674013 (EventArgs_t3591816995 * __this, const RuntimeMethod* method);
// System.Void System.Xml.Xsl.XsltMessageEncounteredEventHandler::Invoke(System.Object,System.Xml.Xsl.XsltMessageEncounteredEventArgs)
extern "C" IL2CPP_METHOD_ATTR void XsltMessageEncounteredEventHandler_Invoke_m441782826 (XsltMessageEncounteredEventHandler_t414593873 * __this, RuntimeObject * ___sender0, XsltMessageEncounteredEventArgs_t1348681757 * ___e1, const RuntimeMethod* method);
// System.Object System.Xml.Xsl.XslTransform::GetDefaultDebugger()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * XslTransform_GetDefaultDebugger_m2336972937 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void System.Xml.Xsl.XslTransform::.ctor(System.Object)
extern "C" IL2CPP_METHOD_ATTR void XslTransform__ctor_m1423564942 (XslTransform_t2320758400 * __this, RuntimeObject * ___debugger0, const RuntimeMethod* method);
// System.String System.Environment::GetEnvironmentVariable(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* Environment_GetEnvironmentVariable_m394552009 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::.ctor(System.Int32)
#define Dictionary_2__ctor_m2392909825(__this, p0, method) ((  void (*) (Dictionary_2_t2736202052 *, int32_t, const RuntimeMethod*))Dictionary_2__ctor_m182537451_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1)
#define Dictionary_2_Add_m282647386(__this, p0, p1, method) ((  void (*) (Dictionary_2_t2736202052 *, String_t*, int32_t, const RuntimeMethod*))Dictionary_2_Add_m1279427033_gshared)(__this, p0, p1, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::TryGetValue(!0,!1&)
#define Dictionary_2_TryGetValue_m1013208020(__this, p0, p1, method) ((  bool (*) (Dictionary_2_t2736202052 *, String_t*, int32_t*, const RuntimeMethod*))Dictionary_2_TryGetValue_m3959998165_gshared)(__this, p0, p1, method)
// System.IO.TextWriter System.Console::get_Out()
extern "C" IL2CPP_METHOD_ATTR TextWriter_t3478189236 * Console_get_Out_m535961184 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.IO.TextWriter System.Console::get_Error()
extern "C" IL2CPP_METHOD_ATTR TextWriter_t3478189236 * Console_get_Error_m1839879495 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void System.Xml.Xsl.SimpleXsltDebugger::.ctor()
extern "C" IL2CPP_METHOD_ATTR void SimpleXsltDebugger__ctor_m2585114588 (SimpleXsltDebugger_t937136423 * __this, const RuntimeMethod* method);
// System.Type System.Type::GetType(System.String)
extern "C" IL2CPP_METHOD_ATTR Type_t * Type_GetType_m1693760368 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// System.Object System.Activator::CreateInstance(System.Type)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Activator_CreateInstance_m3631483688 (RuntimeObject * __this /* static, unused */, Type_t * p0, const RuntimeMethod* method);
// System.Xml.XmlReader System.Xml.Xsl.XslTransform::Transform(System.Xml.XPath.XPathNavigator,System.Xml.Xsl.XsltArgumentList,System.Xml.XmlResolver)
extern "C" IL2CPP_METHOD_ATTR XmlReader_t3121518892 * XslTransform_Transform_m209782705 (XslTransform_t2320758400 * __this, XPathNavigator_t787956054 * ___input0, XsltArgumentList_t741251601 * ___args1, XmlResolver_t626023767 * ___resolver2, const RuntimeMethod* method);
// System.Void System.IO.MemoryStream::.ctor()
extern "C" IL2CPP_METHOD_ATTR void MemoryStream__ctor_m2678285228 (MemoryStream_t94973147 * __this, const RuntimeMethod* method);
// System.Void System.Xml.XmlTextWriter::.ctor(System.IO.Stream,System.Text.Encoding)
extern "C" IL2CPP_METHOD_ATTR void XmlTextWriter__ctor_m614698628 (XmlTextWriter_t2114213153 * __this, Stream_t1273022909 * ___stream0, Encoding_t1523322056 * ___encoding1, const RuntimeMethod* method);
// System.Void System.Xml.Xsl.XslTransform::Transform(System.Xml.XPath.XPathNavigator,System.Xml.Xsl.XsltArgumentList,System.Xml.XmlWriter,System.Xml.XmlResolver)
extern "C" IL2CPP_METHOD_ATTR void XslTransform_Transform_m3669272905 (XslTransform_t2320758400 * __this, XPathNavigator_t787956054 * ___input0, XsltArgumentList_t741251601 * ___args1, XmlWriter_t127905479 * ___output2, XmlResolver_t626023767 * ___resolver3, const RuntimeMethod* method);
// System.Void System.Xml.XmlTextReader::.ctor(System.IO.Stream,System.Xml.XmlNodeType,System.Xml.XmlParserContext)
extern "C" IL2CPP_METHOD_ATTR void XmlTextReader__ctor_m1059080747 (XmlTextReader_t4233384356 * __this, Stream_t1273022909 * ___xmlFragment0, int32_t ___fragType1, XmlParserContext_t2544895291 * ___context2, const RuntimeMethod* method);
// System.Void System.Xml.Xsl.XslTransform::Transform(System.Xml.XPath.XPathNavigator,System.Xml.Xsl.XsltArgumentList,System.IO.TextWriter,System.Xml.XmlResolver)
extern "C" IL2CPP_METHOD_ATTR void XslTransform_Transform_m2990866288 (XslTransform_t2320758400 * __this, XPathNavigator_t787956054 * ___input0, XsltArgumentList_t741251601 * ___args1, TextWriter_t3478189236 * ___output2, XmlResolver_t626023767 * ___resolver3, const RuntimeMethod* method);
// System.Void System.Xml.Xsl.XslTransform::Transform(System.Xml.XPath.XPathNavigator,System.Xml.Xsl.XsltArgumentList,System.IO.Stream,System.Xml.XmlResolver)
extern "C" IL2CPP_METHOD_ATTR void XslTransform_Transform_m471343747 (XslTransform_t2320758400 * __this, XPathNavigator_t787956054 * ___input0, XsltArgumentList_t741251601 * ___args1, Stream_t1273022909 * ___output2, XmlResolver_t626023767 * ___resolver3, const RuntimeMethod* method);
// System.Void System.Xml.Xsl.XslTransform::Transform(System.String,System.String,System.Xml.XmlResolver)
extern "C" IL2CPP_METHOD_ATTR void XslTransform_Transform_m1032190196 (XslTransform_t2320758400 * __this, String_t* ___inputfile0, String_t* ___outputfile1, XmlResolver_t626023767 * ___resolver2, const RuntimeMethod* method);
// System.Void System.IO.FileStream::.ctor(System.String,System.IO.FileMode,System.IO.FileAccess)
extern "C" IL2CPP_METHOD_ATTR void FileStream__ctor_m3135402178 (FileStream_t4292183065 * __this, String_t* p0, int32_t p1, int32_t p2, const RuntimeMethod* method);
// System.Void System.Xml.XPath.XPathDocument::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void XPathDocument__ctor_m1637441265 (XPathDocument_t1673143697 * __this, String_t* ___uri0, const RuntimeMethod* method);
// System.Void System.Xml.Xsl.XslTransform::Load(System.String,System.Xml.XmlResolver)
extern "C" IL2CPP_METHOD_ATTR void XslTransform_Load_m3882090966 (XslTransform_t2320758400 * __this, String_t* ___url0, XmlResolver_t626023767 * ___resolver1, const RuntimeMethod* method);
// System.Void System.Xml.Xsl.XslTransform::Load(System.Xml.XPath.XPathNavigator,System.Xml.XmlResolver,System.Security.Policy.Evidence)
extern "C" IL2CPP_METHOD_ATTR void XslTransform_Load_m3491484097 (XslTransform_t2320758400 * __this, XPathNavigator_t787956054 * ___stylesheet0, XmlResolver_t626023767 * ___resolver1, Evidence_t2008144148 * ___evidence2, const RuntimeMethod* method);
// System.Void System.Xml.Xsl.XslTransform::Load(System.Xml.XmlReader,System.Xml.XmlResolver,System.Security.Policy.Evidence)
extern "C" IL2CPP_METHOD_ATTR void XslTransform_Load_m2788296096 (XslTransform_t2320758400 * __this, XmlReader_t3121518892 * ___stylesheet0, XmlResolver_t626023767 * ___resolver1, Evidence_t2008144148 * ___evidence2, const RuntimeMethod* method);
// System.Void System.Xml.Xsl.XslTransform::Load(System.Xml.XPath.XPathNavigator,System.Xml.XmlResolver)
extern "C" IL2CPP_METHOD_ATTR void XslTransform_Load_m3740515843 (XslTransform_t2320758400 * __this, XPathNavigator_t787956054 * ___stylesheet0, XmlResolver_t626023767 * ___resolver1, const RuntimeMethod* method);
// System.Void System.Xml.Xsl.XsltSettings::.ctor(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void XsltSettings__ctor_m571040767 (XsltSettings_t3615464394 * __this, bool ___readOnly0, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Xml.XPath.XPathNavigator/<EnumerateChildren>c__Iterator1::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CEnumerateChildrenU3Ec__Iterator1__ctor_m1670277563 (U3CEnumerateChildrenU3Ec__Iterator1_t1970726095 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object System.Xml.XPath.XPathNavigator/<EnumerateChildren>c__Iterator1::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CEnumerateChildrenU3Ec__Iterator1_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1773895552 (U3CEnumerateChildrenU3Ec__Iterator1_t1970726095 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_6();
		return L_0;
	}
}
// System.Object System.Xml.XPath.XPathNavigator/<EnumerateChildren>c__Iterator1::System.Collections.IEnumerator.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CEnumerateChildrenU3Ec__Iterator1_System_Collections_IEnumerator_get_Current_m486712643 (U3CEnumerateChildrenU3Ec__Iterator1_t1970726095 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_6();
		return L_0;
	}
}
// System.Collections.IEnumerator System.Xml.XPath.XPathNavigator/<EnumerateChildren>c__Iterator1::System.Collections.IEnumerable.GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* U3CEnumerateChildrenU3Ec__Iterator1_System_Collections_IEnumerable_GetEnumerator_m34756839 (U3CEnumerateChildrenU3Ec__Iterator1_t1970726095 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = U3CEnumerateChildrenU3Ec__Iterator1_System_Collections_Generic_IEnumerableU3CobjectU3E_GetEnumerator_m2784775865(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Object> System.Xml.XPath.XPathNavigator/<EnumerateChildren>c__Iterator1::System.Collections.Generic.IEnumerable<object>.GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* U3CEnumerateChildrenU3Ec__Iterator1_System_Collections_Generic_IEnumerableU3CobjectU3E_GetEnumerator_m2784775865 (U3CEnumerateChildrenU3Ec__Iterator1_t1970726095 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CEnumerateChildrenU3Ec__Iterator1_System_Collections_Generic_IEnumerableU3CobjectU3E_GetEnumerator_m2784775865_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CEnumerateChildrenU3Ec__Iterator1_t1970726095 * V_0 = NULL;
	{
		int32_t* L_0 = __this->get_address_of_U24PC_5();
		int32_t L_1 = Interlocked_CompareExchange_m3023855514(NULL /*static, unused*/, L_0, 0, ((int32_t)-2), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0014;
		}
	}
	{
		return __this;
	}

IL_0014:
	{
		U3CEnumerateChildrenU3Ec__Iterator1_t1970726095 * L_2 = (U3CEnumerateChildrenU3Ec__Iterator1_t1970726095 *)il2cpp_codegen_object_new(U3CEnumerateChildrenU3Ec__Iterator1_t1970726095_il2cpp_TypeInfo_var);
		U3CEnumerateChildrenU3Ec__Iterator1__ctor_m1670277563(L_2, /*hidden argument*/NULL);
		V_0 = L_2;
		U3CEnumerateChildrenU3Ec__Iterator1_t1970726095 * L_3 = V_0;
		XPathNavigator_t787956054 * L_4 = __this->get_U3CU24U3En_7();
		NullCheck(L_3);
		L_3->set_n_0(L_4);
		U3CEnumerateChildrenU3Ec__Iterator1_t1970726095 * L_5 = V_0;
		String_t* L_6 = __this->get_U3CU24U3Ename_8();
		NullCheck(L_5);
		L_5->set_name_3(L_6);
		U3CEnumerateChildrenU3Ec__Iterator1_t1970726095 * L_7 = V_0;
		String_t* L_8 = __this->get_U3CU24U3Ens_9();
		NullCheck(L_7);
		L_7->set_ns_4(L_8);
		U3CEnumerateChildrenU3Ec__Iterator1_t1970726095 * L_9 = V_0;
		return L_9;
	}
}
// System.Boolean System.Xml.XPath.XPathNavigator/<EnumerateChildren>c__Iterator1::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool U3CEnumerateChildrenU3Ec__Iterator1_MoveNext_m2840526773 (U3CEnumerateChildrenU3Ec__Iterator1_t1970726095 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CEnumerateChildrenU3Ec__Iterator1_MoveNext_m2840526773_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t L_0 = __this->get_U24PC_5();
		V_0 = L_0;
		__this->set_U24PC_5((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0021;
			}
			case 1:
			{
				goto IL_00fa;
			}
		}
	}
	{
		goto IL_0111;
	}

IL_0021:
	{
		XPathNavigator_t787956054 * L_2 = __this->get_n_0();
		NullCheck(L_2);
		bool L_3 = VirtFuncInvoker0< bool >::Invoke(52 /* System.Boolean System.Xml.XPath.XPathNavigator::MoveToFirstChild() */, L_2);
		if (L_3)
		{
			goto IL_0036;
		}
	}
	{
		goto IL_0111;
	}

IL_0036:
	{
		XPathNavigator_t787956054 * L_4 = __this->get_n_0();
		NullCheck(L_4);
		VirtFuncInvoker0< bool >::Invoke(58 /* System.Boolean System.Xml.XPath.XPathNavigator::MoveToParent() */, L_4);
		XPathNavigator_t787956054 * L_5 = __this->get_n_0();
		NullCheck(L_5);
		XPathNavigator_t787956054 * L_6 = VirtFuncInvoker0< XPathNavigator_t787956054 * >::Invoke(33 /* System.Xml.XPath.XPathNavigator System.Xml.XPath.XPathNavigator::Clone() */, L_5);
		__this->set_U3CnavU3E__0_1(L_6);
		XPathNavigator_t787956054 * L_7 = __this->get_U3CnavU3E__0_1();
		NullCheck(L_7);
		VirtFuncInvoker0< bool >::Invoke(52 /* System.Boolean System.Xml.XPath.XPathNavigator::MoveToFirstChild() */, L_7);
		XPathNavigator_t787956054 * L_8 = __this->get_U3CnavU3E__0_1();
		NullCheck(L_8);
		XPathNavigator_t787956054 * L_9 = VirtFuncInvoker0< XPathNavigator_t787956054 * >::Invoke(33 /* System.Xml.XPath.XPathNavigator System.Xml.XPath.XPathNavigator::Clone() */, L_8);
		__this->set_U3Cnav2U3E__1_2(L_9);
	}

IL_0070:
	{
		String_t* L_10 = __this->get_name_3();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_11 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		bool L_12 = String_op_Equality_m920492651(NULL /*static, unused*/, L_10, L_11, /*hidden argument*/NULL);
		if (L_12)
		{
			goto IL_00a0;
		}
	}
	{
		XPathNavigator_t787956054 * L_13 = __this->get_U3CnavU3E__0_1();
		NullCheck(L_13);
		String_t* L_14 = VirtFuncInvoker0< String_t* >::Invoke(26 /* System.String System.Xml.XPath.XPathNavigator::get_LocalName() */, L_13);
		String_t* L_15 = __this->get_name_3();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_16 = String_op_Equality_m920492651(NULL /*static, unused*/, L_14, L_15, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_00fa;
		}
	}

IL_00a0:
	{
		String_t* L_17 = __this->get_ns_4();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_18 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		bool L_19 = String_op_Equality_m920492651(NULL /*static, unused*/, L_17, L_18, /*hidden argument*/NULL);
		if (L_19)
		{
			goto IL_00d0;
		}
	}
	{
		XPathNavigator_t787956054 * L_20 = __this->get_U3CnavU3E__0_1();
		NullCheck(L_20);
		String_t* L_21 = VirtFuncInvoker0< String_t* >::Invoke(28 /* System.String System.Xml.XPath.XPathNavigator::get_NamespaceURI() */, L_20);
		String_t* L_22 = __this->get_ns_4();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_23 = String_op_Equality_m920492651(NULL /*static, unused*/, L_21, L_22, /*hidden argument*/NULL);
		if (!L_23)
		{
			goto IL_00fa;
		}
	}

IL_00d0:
	{
		XPathNavigator_t787956054 * L_24 = __this->get_U3Cnav2U3E__1_2();
		XPathNavigator_t787956054 * L_25 = __this->get_U3CnavU3E__0_1();
		NullCheck(L_24);
		VirtFuncInvoker1< bool, XPathNavigator_t787956054 * >::Invoke(46 /* System.Boolean System.Xml.XPath.XPathNavigator::MoveTo(System.Xml.XPath.XPathNavigator) */, L_24, L_25);
		XPathNavigator_t787956054 * L_26 = __this->get_U3Cnav2U3E__1_2();
		__this->set_U24current_6(L_26);
		__this->set_U24PC_5(1);
		goto IL_0113;
	}

IL_00fa:
	{
		XPathNavigator_t787956054 * L_27 = __this->get_U3CnavU3E__0_1();
		NullCheck(L_27);
		bool L_28 = VirtFuncInvoker0< bool >::Invoke(55 /* System.Boolean System.Xml.XPath.XPathNavigator::MoveToNext() */, L_27);
		if (L_28)
		{
			goto IL_0070;
		}
	}
	{
		__this->set_U24PC_5((-1));
	}

IL_0111:
	{
		return (bool)0;
	}

IL_0113:
	{
		return (bool)1;
	}
	// Dead block : IL_0115: ldloc.1
}
// System.Void System.Xml.XPath.XPathNavigator/<EnumerateChildren>c__Iterator1::Dispose()
extern "C" IL2CPP_METHOD_ATTR void U3CEnumerateChildrenU3Ec__Iterator1_Dispose_m367008718 (U3CEnumerateChildrenU3Ec__Iterator1_t1970726095 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24PC_5((-1));
		return;
	}
}
// System.Void System.Xml.XPath.XPathNavigator/<EnumerateChildren>c__Iterator1::Reset()
extern "C" IL2CPP_METHOD_ATTR void U3CEnumerateChildrenU3Ec__Iterator1_Reset_m3639600308 (U3CEnumerateChildrenU3Ec__Iterator1_t1970726095 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CEnumerateChildrenU3Ec__Iterator1_Reset_m3639600308_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0,U3CEnumerateChildrenU3Ec__Iterator1_Reset_m3639600308_RuntimeMethod_var);
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
// System.Void System.Xml.XPath.XPathNavigator/EnumerableIterator::.ctor(System.Collections.IEnumerable,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void EnumerableIterator__ctor_m868206615 (EnumerableIterator_t1590428576 * __this, RuntimeObject* ___source0, int32_t ___pos1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		XPathNodeIterator__ctor_m2459357076(__this, /*hidden argument*/NULL);
		RuntimeObject* L_0 = ___source0;
		__this->set_source_1(L_0);
		V_0 = 0;
		goto IL_001f;
	}

IL_0014:
	{
		VirtFuncInvoker0< bool >::Invoke(11 /* System.Boolean System.Xml.XPath.XPathNavigator/EnumerableIterator::MoveNext() */, __this);
		int32_t L_1 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)1));
	}

IL_001f:
	{
		int32_t L_2 = V_0;
		int32_t L_3 = ___pos1;
		if ((((int32_t)L_2) < ((int32_t)L_3)))
		{
			goto IL_0014;
		}
	}
	{
		return;
	}
}
// System.Xml.XPath.XPathNodeIterator System.Xml.XPath.XPathNavigator/EnumerableIterator::Clone()
extern "C" IL2CPP_METHOD_ATTR XPathNodeIterator_t3667290188 * EnumerableIterator_Clone_m1053335037 (EnumerableIterator_t1590428576 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EnumerableIterator_Clone_m1053335037_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get_source_1();
		int32_t L_1 = __this->get_pos_3();
		EnumerableIterator_t1590428576 * L_2 = (EnumerableIterator_t1590428576 *)il2cpp_codegen_object_new(EnumerableIterator_t1590428576_il2cpp_TypeInfo_var);
		EnumerableIterator__ctor_m868206615(L_2, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean System.Xml.XPath.XPathNavigator/EnumerableIterator::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool EnumerableIterator_MoveNext_m1390725293 (EnumerableIterator_t1590428576 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EnumerableIterator_MoveNext_m1390725293_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get_e_2();
		if (L_0)
		{
			goto IL_001c;
		}
	}
	{
		RuntimeObject* L_1 = __this->get_source_1();
		NullCheck(L_1);
		RuntimeObject* L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t1941168011_il2cpp_TypeInfo_var, L_1);
		__this->set_e_2(L_2);
	}

IL_001c:
	{
		RuntimeObject* L_3 = __this->get_e_2();
		NullCheck(L_3);
		bool L_4 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_3);
		if (L_4)
		{
			goto IL_002e;
		}
	}
	{
		return (bool)0;
	}

IL_002e:
	{
		int32_t L_5 = __this->get_pos_3();
		__this->set_pos_3(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)));
		return (bool)1;
	}
}
// System.Int32 System.Xml.XPath.XPathNavigator/EnumerableIterator::get_CurrentPosition()
extern "C" IL2CPP_METHOD_ATTR int32_t EnumerableIterator_get_CurrentPosition_m898049090 (EnumerableIterator_t1590428576 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_pos_3();
		return L_0;
	}
}
// System.Xml.XPath.XPathNavigator System.Xml.XPath.XPathNavigator/EnumerableIterator::get_Current()
extern "C" IL2CPP_METHOD_ATTR XPathNavigator_t787956054 * EnumerableIterator_get_Current_m2416282970 (EnumerableIterator_t1590428576 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EnumerableIterator_get_Current_m2416282970_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	XPathNavigator_t787956054 * G_B3_0 = NULL;
	{
		int32_t L_0 = __this->get_pos_3();
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		G_B3_0 = ((XPathNavigator_t787956054 *)(NULL));
		goto IL_0021;
	}

IL_0011:
	{
		RuntimeObject* L_1 = __this->get_e_2();
		NullCheck(L_1);
		RuntimeObject * L_2 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_1);
		G_B3_0 = ((XPathNavigator_t787956054 *)CastclassClass((RuntimeObject*)L_2, XPathNavigator_t787956054_il2cpp_TypeInfo_var));
	}

IL_0021:
	{
		return G_B3_0;
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
// System.Void System.Xml.XPath.XPathNavigatorComparer::.ctor()
extern "C" IL2CPP_METHOD_ATTR void XPathNavigatorComparer__ctor_m3727039997 (XPathNavigatorComparer_t2421573191 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XPath.XPathNavigatorComparer::.cctor()
extern "C" IL2CPP_METHOD_ATTR void XPathNavigatorComparer__cctor_m3115965016 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XPathNavigatorComparer__cctor_m3115965016_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		XPathNavigatorComparer_t2421573191 * L_0 = (XPathNavigatorComparer_t2421573191 *)il2cpp_codegen_object_new(XPathNavigatorComparer_t2421573191_il2cpp_TypeInfo_var);
		XPathNavigatorComparer__ctor_m3727039997(L_0, /*hidden argument*/NULL);
		((XPathNavigatorComparer_t2421573191_StaticFields*)il2cpp_codegen_static_fields_for(XPathNavigatorComparer_t2421573191_il2cpp_TypeInfo_var))->set_Instance_0(L_0);
		return;
	}
}
// System.Boolean System.Xml.XPath.XPathNavigatorComparer::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
extern "C" IL2CPP_METHOD_ATTR bool XPathNavigatorComparer_System_Collections_IEqualityComparer_Equals_m4007475784 (XPathNavigatorComparer_t2421573191 * __this, RuntimeObject * ___o10, RuntimeObject * ___o21, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XPathNavigatorComparer_System_Collections_IEqualityComparer_Equals_m4007475784_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	XPathNavigator_t787956054 * V_0 = NULL;
	XPathNavigator_t787956054 * V_1 = NULL;
	int32_t G_B4_0 = 0;
	{
		RuntimeObject * L_0 = ___o10;
		V_0 = ((XPathNavigator_t787956054 *)IsInstClass((RuntimeObject*)L_0, XPathNavigator_t787956054_il2cpp_TypeInfo_var));
		RuntimeObject * L_1 = ___o21;
		V_1 = ((XPathNavigator_t787956054 *)IsInstClass((RuntimeObject*)L_1, XPathNavigator_t787956054_il2cpp_TypeInfo_var));
		XPathNavigator_t787956054 * L_2 = V_0;
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		XPathNavigator_t787956054 * L_3 = V_1;
		if (!L_3)
		{
			goto IL_0023;
		}
	}
	{
		XPathNavigator_t787956054 * L_4 = V_0;
		XPathNavigator_t787956054 * L_5 = V_1;
		NullCheck(L_4);
		bool L_6 = VirtFuncInvoker1< bool, XPathNavigator_t787956054 * >::Invoke(43 /* System.Boolean System.Xml.XPath.XPathNavigator::IsSamePosition(System.Xml.XPath.XPathNavigator) */, L_4, L_5);
		G_B4_0 = ((int32_t)(L_6));
		goto IL_0024;
	}

IL_0023:
	{
		G_B4_0 = 0;
	}

IL_0024:
	{
		return (bool)G_B4_0;
	}
}
// System.Int32 System.Xml.XPath.XPathNavigatorComparer::System.Collections.IEqualityComparer.GetHashCode(System.Object)
extern "C" IL2CPP_METHOD_ATTR int32_t XPathNavigatorComparer_System_Collections_IEqualityComparer_GetHashCode_m682080960 (XPathNavigatorComparer_t2421573191 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___obj0;
		NullCheck(L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_0);
		return L_1;
	}
}
// System.Int32 System.Xml.XPath.XPathNavigatorComparer::Compare(System.Object,System.Object)
extern "C" IL2CPP_METHOD_ATTR int32_t XPathNavigatorComparer_Compare_m812493843 (XPathNavigatorComparer_t2421573191 * __this, RuntimeObject * ___o10, RuntimeObject * ___o21, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XPathNavigatorComparer_Compare_m812493843_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	XPathNavigator_t787956054 * V_0 = NULL;
	XPathNavigator_t787956054 * V_1 = NULL;
	int32_t V_2 = 0;
	{
		RuntimeObject * L_0 = ___o10;
		V_0 = ((XPathNavigator_t787956054 *)IsInstClass((RuntimeObject*)L_0, XPathNavigator_t787956054_il2cpp_TypeInfo_var));
		RuntimeObject * L_1 = ___o21;
		V_1 = ((XPathNavigator_t787956054 *)IsInstClass((RuntimeObject*)L_1, XPathNavigator_t787956054_il2cpp_TypeInfo_var));
		XPathNavigator_t787956054 * L_2 = V_0;
		if (L_2)
		{
			goto IL_0016;
		}
	}
	{
		return (-1);
	}

IL_0016:
	{
		XPathNavigator_t787956054 * L_3 = V_1;
		if (L_3)
		{
			goto IL_001e;
		}
	}
	{
		return 1;
	}

IL_001e:
	{
		XPathNavigator_t787956054 * L_4 = V_0;
		XPathNavigator_t787956054 * L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = VirtFuncInvoker1< int32_t, XPathNavigator_t787956054 * >::Invoke(34 /* System.Xml.XmlNodeOrder System.Xml.XPath.XPathNavigator::ComparePosition(System.Xml.XPath.XPathNavigator) */, L_4, L_5);
		V_2 = L_6;
		int32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)1)))
		{
			goto IL_003b;
		}
	}
	{
		int32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)2)))
		{
			goto IL_0039;
		}
	}
	{
		goto IL_003d;
	}

IL_0039:
	{
		return 0;
	}

IL_003b:
	{
		return 1;
	}

IL_003d:
	{
		return (-1);
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
// System.Void System.Xml.XPath.XPathNodeIterator::.ctor()
extern "C" IL2CPP_METHOD_ATTR void XPathNodeIterator__ctor_m2459357076 (XPathNodeIterator_t3667290188 * __this, const RuntimeMethod* method)
{
	{
		__this->set__count_0((-1));
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object System.Xml.XPath.XPathNodeIterator::System.ICloneable.Clone()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * XPathNodeIterator_System_ICloneable_Clone_m3439409221 (XPathNodeIterator_t3667290188 * __this, const RuntimeMethod* method)
{
	{
		XPathNodeIterator_t3667290188 * L_0 = VirtFuncInvoker0< XPathNodeIterator_t3667290188 * >::Invoke(9 /* System.Xml.XPath.XPathNodeIterator System.Xml.XPath.XPathNodeIterator::Clone() */, __this);
		return L_0;
	}
}
// System.Int32 System.Xml.XPath.XPathNodeIterator::get_Count()
extern "C" IL2CPP_METHOD_ATTR int32_t XPathNodeIterator_get_Count_m4166971475 (XPathNodeIterator_t3667290188 * __this, const RuntimeMethod* method)
{
	XPathNodeIterator_t3667290188 * V_0 = NULL;
	{
		int32_t L_0 = __this->get__count_0();
		if ((!(((uint32_t)L_0) == ((uint32_t)(-1)))))
		{
			goto IL_002f;
		}
	}
	{
		XPathNodeIterator_t3667290188 * L_1 = VirtFuncInvoker0< XPathNodeIterator_t3667290188 * >::Invoke(9 /* System.Xml.XPath.XPathNodeIterator System.Xml.XPath.XPathNodeIterator::Clone() */, __this);
		V_0 = L_1;
		goto IL_0018;
	}

IL_0018:
	{
		XPathNodeIterator_t3667290188 * L_2 = V_0;
		NullCheck(L_2);
		bool L_3 = VirtFuncInvoker0< bool >::Invoke(11 /* System.Boolean System.Xml.XPath.XPathNodeIterator::MoveNext() */, L_2);
		if (L_3)
		{
			goto IL_0018;
		}
	}
	{
		XPathNodeIterator_t3667290188 * L_4 = V_0;
		NullCheck(L_4);
		int32_t L_5 = VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 System.Xml.XPath.XPathNodeIterator::get_CurrentPosition() */, L_4);
		__this->set__count_0(L_5);
	}

IL_002f:
	{
		int32_t L_6 = __this->get__count_0();
		return L_6;
	}
}
// System.Collections.IEnumerator System.Xml.XPath.XPathNodeIterator::GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* XPathNodeIterator_GetEnumerator_m117094251 (XPathNodeIterator_t3667290188 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XPathNodeIterator_GetEnumerator_m117094251_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CGetEnumeratorU3Ec__Iterator2_t90454087 * V_0 = NULL;
	{
		U3CGetEnumeratorU3Ec__Iterator2_t90454087 * L_0 = (U3CGetEnumeratorU3Ec__Iterator2_t90454087 *)il2cpp_codegen_object_new(U3CGetEnumeratorU3Ec__Iterator2_t90454087_il2cpp_TypeInfo_var);
		U3CGetEnumeratorU3Ec__Iterator2__ctor_m4018238552(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CGetEnumeratorU3Ec__Iterator2_t90454087 * L_1 = V_0;
		NullCheck(L_1);
		L_1->set_U3CU3Ef__this_2(__this);
		U3CGetEnumeratorU3Ec__Iterator2_t90454087 * L_2 = V_0;
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
// System.Void System.Xml.XPath.XPathNodeIterator/<GetEnumerator>c__Iterator2::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ec__Iterator2__ctor_m4018238552 (U3CGetEnumeratorU3Ec__Iterator2_t90454087 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object System.Xml.XPath.XPathNodeIterator/<GetEnumerator>c__Iterator2::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CGetEnumeratorU3Ec__Iterator2_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m2379591546 (U3CGetEnumeratorU3Ec__Iterator2_t90454087 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_1();
		return L_0;
	}
}
// System.Object System.Xml.XPath.XPathNodeIterator/<GetEnumerator>c__Iterator2::System.Collections.IEnumerator.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CGetEnumeratorU3Ec__Iterator2_System_Collections_IEnumerator_get_Current_m1400419750 (U3CGetEnumeratorU3Ec__Iterator2_t90454087 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_1();
		return L_0;
	}
}
// System.Boolean System.Xml.XPath.XPathNodeIterator/<GetEnumerator>c__Iterator2::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool U3CGetEnumeratorU3Ec__Iterator2_MoveNext_m869430810 (U3CGetEnumeratorU3Ec__Iterator2_t90454087 * __this, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t L_0 = __this->get_U24PC_0();
		V_0 = L_0;
		__this->set_U24PC_0((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0021;
			}
			case 1:
			{
				goto IL_0043;
			}
		}
	}
	{
		goto IL_005a;
	}

IL_0021:
	{
		goto IL_0043;
	}

IL_0026:
	{
		XPathNodeIterator_t3667290188 * L_2 = __this->get_U3CU3Ef__this_2();
		NullCheck(L_2);
		XPathNavigator_t787956054 * L_3 = VirtFuncInvoker0< XPathNavigator_t787956054 * >::Invoke(7 /* System.Xml.XPath.XPathNavigator System.Xml.XPath.XPathNodeIterator::get_Current() */, L_2);
		__this->set_U24current_1(L_3);
		__this->set_U24PC_0(1);
		goto IL_005c;
	}

IL_0043:
	{
		XPathNodeIterator_t3667290188 * L_4 = __this->get_U3CU3Ef__this_2();
		NullCheck(L_4);
		bool L_5 = VirtFuncInvoker0< bool >::Invoke(11 /* System.Boolean System.Xml.XPath.XPathNodeIterator::MoveNext() */, L_4);
		if (L_5)
		{
			goto IL_0026;
		}
	}
	{
		__this->set_U24PC_0((-1));
	}

IL_005a:
	{
		return (bool)0;
	}

IL_005c:
	{
		return (bool)1;
	}
	// Dead block : IL_005e: ldloc.1
}
// System.Void System.Xml.XPath.XPathNodeIterator/<GetEnumerator>c__Iterator2::Dispose()
extern "C" IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ec__Iterator2_Dispose_m824786816 (U3CGetEnumeratorU3Ec__Iterator2_t90454087 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24PC_0((-1));
		return;
	}
}
// System.Void System.Xml.XPath.XPathNodeIterator/<GetEnumerator>c__Iterator2::Reset()
extern "C" IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ec__Iterator2_Reset_m3606261836 (U3CGetEnumeratorU3Ec__Iterator2_t90454087 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CGetEnumeratorU3Ec__Iterator2_Reset_m3606261836_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0,U3CGetEnumeratorU3Ec__Iterator2_Reset_m3606261836_RuntimeMethod_var);
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
// System.Void System.Xml.XPath.XPathNumericFunction::.ctor(System.Xml.XPath.FunctionArguments)
extern "C" IL2CPP_METHOD_ATTR void XPathNumericFunction__ctor_m4265073059 (XPathNumericFunction_t307051317 * __this, FunctionArguments_t3573450773 * ___args0, const RuntimeMethod* method)
{
	{
		FunctionArguments_t3573450773 * L_0 = ___args0;
		XPathFunction__ctor_m3144973253(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Xml.XPath.XPathResultType System.Xml.XPath.XPathNumericFunction::get_ReturnType()
extern "C" IL2CPP_METHOD_ATTR int32_t XPathNumericFunction_get_ReturnType_m3502341669 (XPathNumericFunction_t307051317 * __this, const RuntimeMethod* method)
{
	{
		return (int32_t)(0);
	}
}
// System.Object System.Xml.XPath.XPathNumericFunction::get_StaticValue()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * XPathNumericFunction_get_StaticValue_m673646255 (XPathNumericFunction_t307051317 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XPathNumericFunction_get_StaticValue_m673646255_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		double L_0 = VirtFuncInvoker0< double >::Invoke(10 /* System.Double System.Xml.XPath.Expression::get_StaticValueAsNumber() */, __this);
		double L_1 = L_0;
		RuntimeObject * L_2 = Box(Double_t594665363_il2cpp_TypeInfo_var, &L_1);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Xml.XPath.XPathSortElement::.ctor()
extern "C" IL2CPP_METHOD_ATTR void XPathSortElement__ctor_m4130792685 (XPathSortElement_t4237073177 * __this, const RuntimeMethod* method)
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
// System.Void System.Xml.XPath.XPathSorter::.ctor(System.Object,System.Collections.IComparer)
extern "C" IL2CPP_METHOD_ATTR void XPathSorter__ctor_m2798942655 (XPathSorter_t36376808 * __this, RuntimeObject * ___expr0, RuntimeObject* ___cmp1, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		RuntimeObject * L_0 = ___expr0;
		Expression_t1452783009 * L_1 = XPathSorter_ExpressionFromObject_m606255708(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		__this->set__expr_0(L_1);
		RuntimeObject* L_2 = ___cmp1;
		__this->set__cmp_1(L_2);
		__this->set__type_2(1);
		return;
	}
}
// System.Void System.Xml.XPath.XPathSorter::.ctor(System.Object,System.Xml.XPath.XmlSortOrder,System.Xml.XPath.XmlCaseOrder,System.String,System.Xml.XPath.XmlDataType)
extern "C" IL2CPP_METHOD_ATTR void XPathSorter__ctor_m1849939766 (XPathSorter_t36376808 * __this, RuntimeObject * ___expr0, int32_t ___orderSort1, int32_t ___orderCase2, String_t* ___lang3, int32_t ___dataType4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XPathSorter__ctor_m1849939766_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		RuntimeObject * L_0 = ___expr0;
		Expression_t1452783009 * L_1 = XPathSorter_ExpressionFromObject_m606255708(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		__this->set__expr_0(L_1);
		int32_t L_2 = ___dataType4;
		__this->set__type_2(L_2);
		int32_t L_3 = ___dataType4;
		if ((!(((uint32_t)L_3) == ((uint32_t)2))))
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_4 = ___orderSort1;
		XPathNumberComparer_t6863540 * L_5 = (XPathNumberComparer_t6863540 *)il2cpp_codegen_object_new(XPathNumberComparer_t6863540_il2cpp_TypeInfo_var);
		XPathNumberComparer__ctor_m3809809632(L_5, L_4, /*hidden argument*/NULL);
		__this->set__cmp_1(L_5);
		goto IL_0042;
	}

IL_0033:
	{
		int32_t L_6 = ___orderSort1;
		int32_t L_7 = ___orderCase2;
		String_t* L_8 = ___lang3;
		XPathTextComparer_t2075334572 * L_9 = (XPathTextComparer_t2075334572 *)il2cpp_codegen_object_new(XPathTextComparer_t2075334572_il2cpp_TypeInfo_var);
		XPathTextComparer__ctor_m1758171726(L_9, L_6, L_7, L_8, /*hidden argument*/NULL);
		__this->set__cmp_1(L_9);
	}

IL_0042:
	{
		return;
	}
}
// System.Xml.XPath.Expression System.Xml.XPath.XPathSorter::ExpressionFromObject(System.Object)
extern "C" IL2CPP_METHOD_ATTR Expression_t1452783009 * XPathSorter_ExpressionFromObject_m606255708 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___expr0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XPathSorter_ExpressionFromObject_m606255708_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___expr0;
		if (!((CompiledExpression_t4018285681 *)IsInstClass((RuntimeObject*)L_0, CompiledExpression_t4018285681_il2cpp_TypeInfo_var)))
		{
			goto IL_0017;
		}
	}
	{
		RuntimeObject * L_1 = ___expr0;
		NullCheck(((CompiledExpression_t4018285681 *)CastclassClass((RuntimeObject*)L_1, CompiledExpression_t4018285681_il2cpp_TypeInfo_var)));
		Expression_t1452783009 * L_2 = CompiledExpression_get_ExpressionNode_m1591642156(((CompiledExpression_t4018285681 *)CastclassClass((RuntimeObject*)L_1, CompiledExpression_t4018285681_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		return L_2;
	}

IL_0017:
	{
		RuntimeObject * L_3 = ___expr0;
		if (!((String_t*)IsInstSealed((RuntimeObject*)L_3, String_t_il2cpp_TypeInfo_var)))
		{
			goto IL_0033;
		}
	}
	{
		XPathParser_t4136515887 * L_4 = (XPathParser_t4136515887 *)il2cpp_codegen_object_new(XPathParser_t4136515887_il2cpp_TypeInfo_var);
		XPathParser__ctor_m2802761505(L_4, /*hidden argument*/NULL);
		RuntimeObject * L_5 = ___expr0;
		NullCheck(L_4);
		Expression_t1452783009 * L_6 = XPathParser_Compile_m1959434407(L_4, ((String_t*)CastclassSealed((RuntimeObject*)L_5, String_t_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		return L_6;
	}

IL_0033:
	{
		XPathException_t2107611652 * L_7 = (XPathException_t2107611652 *)il2cpp_codegen_object_new(XPathException_t2107611652_il2cpp_TypeInfo_var);
		XPathException__ctor_m3226187054(L_7, _stringLiteral3252873007, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7,XPathSorter_ExpressionFromObject_m606255708_RuntimeMethod_var);
	}
}
// System.Object System.Xml.XPath.XPathSorter::Evaluate(System.Xml.XPath.BaseIterator)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * XPathSorter_Evaluate_m2305850354 (XPathSorter_t36376808 * __this, BaseIterator_t4168896842 * ___iter0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XPathSorter_Evaluate_m2305850354_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->get__type_2();
		if ((!(((uint32_t)L_0) == ((uint32_t)2))))
		{
			goto IL_001e;
		}
	}
	{
		Expression_t1452783009 * L_1 = __this->get__expr_0();
		BaseIterator_t4168896842 * L_2 = ___iter0;
		NullCheck(L_1);
		double L_3 = VirtFuncInvoker1< double, BaseIterator_t4168896842 * >::Invoke(18 /* System.Double System.Xml.XPath.Expression::EvaluateNumber(System.Xml.XPath.BaseIterator) */, L_1, L_2);
		double L_4 = L_3;
		RuntimeObject * L_5 = Box(Double_t594665363_il2cpp_TypeInfo_var, &L_4);
		return L_5;
	}

IL_001e:
	{
		Expression_t1452783009 * L_6 = __this->get__expr_0();
		BaseIterator_t4168896842 * L_7 = ___iter0;
		NullCheck(L_6);
		String_t* L_8 = VirtFuncInvoker1< String_t*, BaseIterator_t4168896842 * >::Invoke(19 /* System.String System.Xml.XPath.Expression::EvaluateString(System.Xml.XPath.BaseIterator) */, L_6, L_7);
		return L_8;
	}
}
// System.Int32 System.Xml.XPath.XPathSorter::Compare(System.Object,System.Object)
extern "C" IL2CPP_METHOD_ATTR int32_t XPathSorter_Compare_m1410690161 (XPathSorter_t36376808 * __this, RuntimeObject * ___o10, RuntimeObject * ___o21, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XPathSorter_Compare_m1410690161_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get__cmp_1();
		RuntimeObject * L_1 = ___o10;
		RuntimeObject * L_2 = ___o21;
		NullCheck(L_0);
		int32_t L_3 = InterfaceFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Int32 System.Collections.IComparer::Compare(System.Object,System.Object) */, IComparer_t1540313114_il2cpp_TypeInfo_var, L_0, L_1, L_2);
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
// System.Void System.Xml.XPath.XPathSorter/XPathNumberComparer::.ctor(System.Xml.XPath.XmlSortOrder)
extern "C" IL2CPP_METHOD_ATTR void XPathNumberComparer__ctor_m3809809632 (XPathNumberComparer_t6863540 * __this, int32_t ___orderSort0, const RuntimeMethod* method)
{
	XPathNumberComparer_t6863540 * G_B2_0 = NULL;
	XPathNumberComparer_t6863540 * G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	XPathNumberComparer_t6863540 * G_B3_1 = NULL;
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___orderSort0;
		G_B1_0 = __this;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			G_B2_0 = __this;
			goto IL_0014;
		}
	}
	{
		G_B3_0 = 1;
		G_B3_1 = G_B1_0;
		goto IL_0015;
	}

IL_0014:
	{
		G_B3_0 = (-1);
		G_B3_1 = G_B2_0;
	}

IL_0015:
	{
		NullCheck(G_B3_1);
		G_B3_1->set__nMulSort_0(G_B3_0);
		return;
	}
}
// System.Int32 System.Xml.XPath.XPathSorter/XPathNumberComparer::System.Collections.IComparer.Compare(System.Object,System.Object)
extern "C" IL2CPP_METHOD_ATTR int32_t XPathNumberComparer_System_Collections_IComparer_Compare_m3857931383 (XPathNumberComparer_t6863540 * __this, RuntimeObject * ___o10, RuntimeObject * ___o21, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XPathNumberComparer_System_Collections_IComparer_Compare_m3857931383_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	double V_1 = 0.0;
	int32_t G_B10_0 = 0;
	{
		RuntimeObject * L_0 = ___o10;
		V_0 = ((*(double*)((double*)UnBox(L_0, Double_t594665363_il2cpp_TypeInfo_var))));
		RuntimeObject * L_1 = ___o21;
		V_1 = ((*(double*)((double*)UnBox(L_1, Double_t594665363_il2cpp_TypeInfo_var))));
		double L_2 = V_0;
		double L_3 = V_1;
		if ((!(((double)L_2) < ((double)L_3))))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_4 = __this->get__nMulSort_0();
		return ((-L_4));
	}

IL_001d:
	{
		double L_5 = V_0;
		double L_6 = V_1;
		if ((!(((double)L_5) > ((double)L_6))))
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_7 = __this->get__nMulSort_0();
		return L_7;
	}

IL_002b:
	{
		double L_8 = V_0;
		double L_9 = V_1;
		if ((!(((double)L_8) == ((double)L_9))))
		{
			goto IL_0034;
		}
	}
	{
		return 0;
	}

IL_0034:
	{
		double L_10 = V_0;
		bool L_11 = Double_IsNaN_m649024406(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0058;
		}
	}
	{
		double L_12 = V_1;
		bool L_13 = Double_IsNaN_m649024406(NULL /*static, unused*/, L_12, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_0050;
		}
	}
	{
		G_B10_0 = 0;
		goto IL_0057;
	}

IL_0050:
	{
		int32_t L_14 = __this->get__nMulSort_0();
		G_B10_0 = ((-L_14));
	}

IL_0057:
	{
		return G_B10_0;
	}

IL_0058:
	{
		int32_t L_15 = __this->get__nMulSort_0();
		return L_15;
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
// System.Void System.Xml.XPath.XPathSorter/XPathTextComparer::.ctor(System.Xml.XPath.XmlSortOrder,System.Xml.XPath.XmlCaseOrder,System.String)
extern "C" IL2CPP_METHOD_ATTR void XPathTextComparer__ctor_m1758171726 (XPathTextComparer_t2075334572 * __this, int32_t ___orderSort0, int32_t ___orderCase1, String_t* ___strLang2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XPathTextComparer__ctor_m1758171726_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	XPathTextComparer_t2075334572 * G_B2_0 = NULL;
	XPathTextComparer_t2075334572 * G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	XPathTextComparer_t2075334572 * G_B3_1 = NULL;
	XPathTextComparer_t2075334572 * G_B5_0 = NULL;
	XPathTextComparer_t2075334572 * G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	XPathTextComparer_t2075334572 * G_B6_1 = NULL;
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___orderCase1;
		__this->set__orderCase_2(L_0);
		int32_t L_1 = ___orderCase1;
		G_B1_0 = __this;
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			G_B2_0 = __this;
			goto IL_001b;
		}
	}
	{
		G_B3_0 = (-1);
		G_B3_1 = G_B1_0;
		goto IL_001c;
	}

IL_001b:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
	}

IL_001c:
	{
		NullCheck(G_B3_1);
		G_B3_1->set__nMulCase_1(G_B3_0);
		int32_t L_2 = ___orderSort0;
		G_B4_0 = __this;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			G_B5_0 = __this;
			goto IL_002f;
		}
	}
	{
		G_B6_0 = 1;
		G_B6_1 = G_B4_0;
		goto IL_0030;
	}

IL_002f:
	{
		G_B6_0 = (-1);
		G_B6_1 = G_B5_0;
	}

IL_0030:
	{
		NullCheck(G_B6_1);
		G_B6_1->set__nMulSort_0(G_B6_0);
		String_t* L_3 = ___strLang2;
		if (!L_3)
		{
			goto IL_004b;
		}
	}
	{
		String_t* L_4 = ___strLang2;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		bool L_6 = String_op_Equality_m920492651(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_005b;
		}
	}

IL_004b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t4157843068_il2cpp_TypeInfo_var);
		CultureInfo_t4157843068 * L_7 = CultureInfo_get_CurrentCulture_m1632690660(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set__ci_3(L_7);
		goto IL_0067;
	}

IL_005b:
	{
		String_t* L_8 = ___strLang2;
		CultureInfo_t4157843068 * L_9 = (CultureInfo_t4157843068 *)il2cpp_codegen_object_new(CultureInfo_t4157843068_il2cpp_TypeInfo_var);
		CultureInfo__ctor_m686319079(L_9, L_8, /*hidden argument*/NULL);
		__this->set__ci_3(L_9);
	}

IL_0067:
	{
		return;
	}
}
// System.Int32 System.Xml.XPath.XPathSorter/XPathTextComparer::System.Collections.IComparer.Compare(System.Object,System.Object)
extern "C" IL2CPP_METHOD_ATTR int32_t XPathTextComparer_System_Collections_IComparer_Compare_m2816827614 (XPathTextComparer_t2075334572 * __this, RuntimeObject * ___o10, RuntimeObject * ___o21, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XPathTextComparer_System_Collections_IComparer_Compare_m2816827614_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	int32_t V_2 = 0;
	{
		RuntimeObject * L_0 = ___o10;
		V_0 = ((String_t*)CastclassSealed((RuntimeObject*)L_0, String_t_il2cpp_TypeInfo_var));
		RuntimeObject * L_1 = ___o21;
		V_1 = ((String_t*)CastclassSealed((RuntimeObject*)L_1, String_t_il2cpp_TypeInfo_var));
		String_t* L_2 = V_0;
		String_t* L_3 = V_1;
		CultureInfo_t4157843068 * L_4 = __this->get__ci_3();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		int32_t L_5 = String_Compare_m1293271421(NULL /*static, unused*/, L_2, L_3, (bool)1, L_4, /*hidden argument*/NULL);
		V_2 = L_5;
		int32_t L_6 = V_2;
		if (L_6)
		{
			goto IL_002e;
		}
	}
	{
		int32_t L_7 = __this->get__orderCase_2();
		if (L_7)
		{
			goto IL_0037;
		}
	}

IL_002e:
	{
		int32_t L_8 = V_2;
		int32_t L_9 = __this->get__nMulSort_0();
		return ((int32_t)il2cpp_codegen_multiply((int32_t)L_8, (int32_t)L_9));
	}

IL_0037:
	{
		int32_t L_10 = __this->get__nMulSort_0();
		int32_t L_11 = __this->get__nMulCase_1();
		String_t* L_12 = V_0;
		String_t* L_13 = V_1;
		CultureInfo_t4157843068 * L_14 = __this->get__ci_3();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		int32_t L_15 = String_Compare_m1293271421(NULL /*static, unused*/, L_12, L_13, (bool)0, L_14, /*hidden argument*/NULL);
		return ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, (int32_t)L_11)), (int32_t)L_15));
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
// System.Void System.Xml.XPath.XPathSorters::.ctor()
extern "C" IL2CPP_METHOD_ATTR void XPathSorters__ctor_m2528397853 (XPathSorters_t698127628 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XPathSorters__ctor_m2528397853_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ArrayList_t2718874744 * L_0 = (ArrayList_t2718874744 *)il2cpp_codegen_object_new(ArrayList_t2718874744_il2cpp_TypeInfo_var);
		ArrayList__ctor_m4254721275(L_0, /*hidden argument*/NULL);
		__this->set__rgSorters_0(L_0);
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 System.Xml.XPath.XPathSorters::System.Collections.IComparer.Compare(System.Object,System.Object)
extern "C" IL2CPP_METHOD_ATTR int32_t XPathSorters_System_Collections_IComparer_Compare_m3602250543 (XPathSorters_t698127628 * __this, RuntimeObject * ___o10, RuntimeObject * ___o21, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XPathSorters_System_Collections_IComparer_Compare_m3602250543_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	XPathSortElement_t4237073177 * V_0 = NULL;
	XPathSortElement_t4237073177 * V_1 = NULL;
	int32_t V_2 = 0;
	XPathSorter_t36376808 * V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		RuntimeObject * L_0 = ___o10;
		V_0 = ((XPathSortElement_t4237073177 *)CastclassClass((RuntimeObject*)L_0, XPathSortElement_t4237073177_il2cpp_TypeInfo_var));
		RuntimeObject * L_1 = ___o21;
		V_1 = ((XPathSortElement_t4237073177 *)CastclassClass((RuntimeObject*)L_1, XPathSortElement_t4237073177_il2cpp_TypeInfo_var));
		V_2 = 0;
		goto IL_004d;
	}

IL_0015:
	{
		ArrayList_t2718874744 * L_2 = __this->get__rgSorters_0();
		int32_t L_3 = V_2;
		NullCheck(L_2);
		RuntimeObject * L_4 = VirtFuncInvoker1< RuntimeObject *, int32_t >::Invoke(21 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_2, L_3);
		V_3 = ((XPathSorter_t36376808 *)CastclassClass((RuntimeObject*)L_4, XPathSorter_t36376808_il2cpp_TypeInfo_var));
		XPathSorter_t36376808 * L_5 = V_3;
		XPathSortElement_t4237073177 * L_6 = V_0;
		NullCheck(L_6);
		ObjectU5BU5D_t2843939325* L_7 = L_6->get_Values_1();
		int32_t L_8 = V_2;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		RuntimeObject * L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		XPathSortElement_t4237073177 * L_11 = V_1;
		NullCheck(L_11);
		ObjectU5BU5D_t2843939325* L_12 = L_11->get_Values_1();
		int32_t L_13 = V_2;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		RuntimeObject * L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		NullCheck(L_5);
		int32_t L_16 = XPathSorter_Compare_m1410690161(L_5, L_10, L_15, /*hidden argument*/NULL);
		V_4 = L_16;
		int32_t L_17 = V_4;
		if (!L_17)
		{
			goto IL_0049;
		}
	}
	{
		int32_t L_18 = V_4;
		return L_18;
	}

IL_0049:
	{
		int32_t L_19 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)1));
	}

IL_004d:
	{
		int32_t L_20 = V_2;
		ArrayList_t2718874744 * L_21 = __this->get__rgSorters_0();
		NullCheck(L_21);
		int32_t L_22 = VirtFuncInvoker0< int32_t >::Invoke(23 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_21);
		if ((((int32_t)L_20) < ((int32_t)L_22)))
		{
			goto IL_0015;
		}
	}
	{
		XPathSortElement_t4237073177 * L_23 = V_0;
		NullCheck(L_23);
		XPathNavigator_t787956054 * L_24 = L_23->get_Navigator_0();
		XPathSortElement_t4237073177 * L_25 = V_1;
		NullCheck(L_25);
		XPathNavigator_t787956054 * L_26 = L_25->get_Navigator_0();
		NullCheck(L_24);
		int32_t L_27 = VirtFuncInvoker1< int32_t, XPathNavigator_t787956054 * >::Invoke(34 /* System.Xml.XmlNodeOrder System.Xml.XPath.XPathNavigator::ComparePosition(System.Xml.XPath.XPathNavigator) */, L_24, L_26);
		V_5 = L_27;
		int32_t L_28 = V_5;
		if ((((int32_t)L_28) == ((int32_t)1)))
		{
			goto IL_0088;
		}
	}
	{
		int32_t L_29 = V_5;
		if ((((int32_t)L_29) == ((int32_t)2)))
		{
			goto IL_0086;
		}
	}
	{
		goto IL_008a;
	}

IL_0086:
	{
		return 0;
	}

IL_0088:
	{
		return 1;
	}

IL_008a:
	{
		return (-1);
	}
}
// System.Void System.Xml.XPath.XPathSorters::Add(System.Object,System.Collections.IComparer)
extern "C" IL2CPP_METHOD_ATTR void XPathSorters_Add_m1233257773 (XPathSorters_t698127628 * __this, RuntimeObject * ___expr0, RuntimeObject* ___cmp1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XPathSorters_Add_m1233257773_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ArrayList_t2718874744 * L_0 = __this->get__rgSorters_0();
		RuntimeObject * L_1 = ___expr0;
		RuntimeObject* L_2 = ___cmp1;
		XPathSorter_t36376808 * L_3 = (XPathSorter_t36376808 *)il2cpp_codegen_object_new(XPathSorter_t36376808_il2cpp_TypeInfo_var);
		XPathSorter__ctor_m2798942655(L_3, L_1, L_2, /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtFuncInvoker1< int32_t, RuntimeObject * >::Invoke(30 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_0, L_3);
		return;
	}
}
// System.Void System.Xml.XPath.XPathSorters::Add(System.Object,System.Xml.XPath.XmlSortOrder,System.Xml.XPath.XmlCaseOrder,System.String,System.Xml.XPath.XmlDataType)
extern "C" IL2CPP_METHOD_ATTR void XPathSorters_Add_m2795344906 (XPathSorters_t698127628 * __this, RuntimeObject * ___expr0, int32_t ___orderSort1, int32_t ___orderCase2, String_t* ___lang3, int32_t ___dataType4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XPathSorters_Add_m2795344906_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ArrayList_t2718874744 * L_0 = __this->get__rgSorters_0();
		RuntimeObject * L_1 = ___expr0;
		int32_t L_2 = ___orderSort1;
		int32_t L_3 = ___orderCase2;
		String_t* L_4 = ___lang3;
		int32_t L_5 = ___dataType4;
		XPathSorter_t36376808 * L_6 = (XPathSorter_t36376808 *)il2cpp_codegen_object_new(XPathSorter_t36376808_il2cpp_TypeInfo_var);
		XPathSorter__ctor_m1849939766(L_6, L_1, L_2, L_3, L_4, L_5, /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtFuncInvoker1< int32_t, RuntimeObject * >::Invoke(30 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_0, L_6);
		return;
	}
}
// System.Void System.Xml.XPath.XPathSorters::CopyFrom(System.Xml.XPath.XPathSorter[])
extern "C" IL2CPP_METHOD_ATTR void XPathSorters_CopyFrom_m2708621791 (XPathSorters_t698127628 * __this, XPathSorterU5BU5D_t4263134841* ___sorters0, const RuntimeMethod* method)
{
	{
		ArrayList_t2718874744 * L_0 = __this->get__rgSorters_0();
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(31 /* System.Void System.Collections.ArrayList::Clear() */, L_0);
		ArrayList_t2718874744 * L_1 = __this->get__rgSorters_0();
		XPathSorterU5BU5D_t4263134841* L_2 = ___sorters0;
		NullCheck(L_1);
		VirtActionInvoker1< RuntimeObject* >::Invoke(45 /* System.Void System.Collections.ArrayList::AddRange(System.Collections.ICollection) */, L_1, (RuntimeObject*)(RuntimeObject*)L_2);
		return;
	}
}
// System.Xml.XPath.BaseIterator System.Xml.XPath.XPathSorters::Sort(System.Xml.XPath.BaseIterator)
extern "C" IL2CPP_METHOD_ATTR BaseIterator_t4168896842 * XPathSorters_Sort_m1473903338 (XPathSorters_t698127628 * __this, BaseIterator_t4168896842 * ___iter0, const RuntimeMethod* method)
{
	ArrayList_t2718874744 * V_0 = NULL;
	{
		BaseIterator_t4168896842 * L_0 = ___iter0;
		ArrayList_t2718874744 * L_1 = XPathSorters_ToSortElementList_m992101952(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		ArrayList_t2718874744 * L_2 = V_0;
		BaseIterator_t4168896842 * L_3 = ___iter0;
		NullCheck(L_3);
		RuntimeObject* L_4 = BaseIterator_get_NamespaceManager_m2542706114(L_3, /*hidden argument*/NULL);
		BaseIterator_t4168896842 * L_5 = XPathSorters_Sort_m148301611(__this, L_2, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Collections.ArrayList System.Xml.XPath.XPathSorters::ToSortElementList(System.Xml.XPath.BaseIterator)
extern "C" IL2CPP_METHOD_ATTR ArrayList_t2718874744 * XPathSorters_ToSortElementList_m992101952 (XPathSorters_t698127628 * __this, BaseIterator_t4168896842 * ___iter0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XPathSorters_ToSortElementList_m992101952_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ArrayList_t2718874744 * V_0 = NULL;
	int32_t V_1 = 0;
	XPathSortElement_t4237073177 * V_2 = NULL;
	int32_t V_3 = 0;
	XPathSorter_t36376808 * V_4 = NULL;
	{
		ArrayList_t2718874744 * L_0 = (ArrayList_t2718874744 *)il2cpp_codegen_object_new(ArrayList_t2718874744_il2cpp_TypeInfo_var);
		ArrayList__ctor_m4254721275(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		ArrayList_t2718874744 * L_1 = __this->get__rgSorters_0();
		NullCheck(L_1);
		int32_t L_2 = VirtFuncInvoker0< int32_t >::Invoke(23 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_1);
		V_1 = L_2;
		goto IL_0081;
	}

IL_0017:
	{
		XPathSortElement_t4237073177 * L_3 = (XPathSortElement_t4237073177 *)il2cpp_codegen_object_new(XPathSortElement_t4237073177_il2cpp_TypeInfo_var);
		XPathSortElement__ctor_m4130792685(L_3, /*hidden argument*/NULL);
		V_2 = L_3;
		XPathSortElement_t4237073177 * L_4 = V_2;
		BaseIterator_t4168896842 * L_5 = ___iter0;
		NullCheck(L_5);
		XPathNavigator_t787956054 * L_6 = VirtFuncInvoker0< XPathNavigator_t787956054 * >::Invoke(7 /* System.Xml.XPath.XPathNavigator System.Xml.XPath.XPathNodeIterator::get_Current() */, L_5);
		NullCheck(L_6);
		XPathNavigator_t787956054 * L_7 = VirtFuncInvoker0< XPathNavigator_t787956054 * >::Invoke(33 /* System.Xml.XPath.XPathNavigator System.Xml.XPath.XPathNavigator::Clone() */, L_6);
		NullCheck(L_4);
		L_4->set_Navigator_0(L_7);
		XPathSortElement_t4237073177 * L_8 = V_2;
		int32_t L_9 = V_1;
		NullCheck(L_8);
		L_8->set_Values_1(((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)L_9)));
		V_3 = 0;
		goto IL_0068;
	}

IL_0041:
	{
		ArrayList_t2718874744 * L_10 = __this->get__rgSorters_0();
		int32_t L_11 = V_3;
		NullCheck(L_10);
		RuntimeObject * L_12 = VirtFuncInvoker1< RuntimeObject *, int32_t >::Invoke(21 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_10, L_11);
		V_4 = ((XPathSorter_t36376808 *)CastclassClass((RuntimeObject*)L_12, XPathSorter_t36376808_il2cpp_TypeInfo_var));
		XPathSortElement_t4237073177 * L_13 = V_2;
		NullCheck(L_13);
		ObjectU5BU5D_t2843939325* L_14 = L_13->get_Values_1();
		int32_t L_15 = V_3;
		XPathSorter_t36376808 * L_16 = V_4;
		BaseIterator_t4168896842 * L_17 = ___iter0;
		NullCheck(L_16);
		RuntimeObject * L_18 = XPathSorter_Evaluate_m2305850354(L_16, L_17, /*hidden argument*/NULL);
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_18);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(L_15), (RuntimeObject *)L_18);
		int32_t L_19 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)1));
	}

IL_0068:
	{
		int32_t L_20 = V_3;
		ArrayList_t2718874744 * L_21 = __this->get__rgSorters_0();
		NullCheck(L_21);
		int32_t L_22 = VirtFuncInvoker0< int32_t >::Invoke(23 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_21);
		if ((((int32_t)L_20) < ((int32_t)L_22)))
		{
			goto IL_0041;
		}
	}
	{
		ArrayList_t2718874744 * L_23 = V_0;
		XPathSortElement_t4237073177 * L_24 = V_2;
		NullCheck(L_23);
		VirtFuncInvoker1< int32_t, RuntimeObject * >::Invoke(30 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_23, L_24);
	}

IL_0081:
	{
		BaseIterator_t4168896842 * L_25 = ___iter0;
		NullCheck(L_25);
		bool L_26 = VirtFuncInvoker0< bool >::Invoke(11 /* System.Boolean System.Xml.XPath.BaseIterator::MoveNext() */, L_25);
		if (L_26)
		{
			goto IL_0017;
		}
	}
	{
		ArrayList_t2718874744 * L_27 = V_0;
		return L_27;
	}
}
// System.Xml.XPath.BaseIterator System.Xml.XPath.XPathSorters::Sort(System.Collections.ArrayList,System.Xml.IXmlNamespaceResolver)
extern "C" IL2CPP_METHOD_ATTR BaseIterator_t4168896842 * XPathSorters_Sort_m148301611 (XPathSorters_t698127628 * __this, ArrayList_t2718874744 * ___rgElts0, RuntimeObject* ___nsm1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XPathSorters_Sort_m148301611_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	XPathNavigatorU5BU5D_t3671675027* V_0 = NULL;
	int32_t V_1 = 0;
	XPathSortElement_t4237073177 * V_2 = NULL;
	{
		ArrayList_t2718874744 * L_0 = ___rgElts0;
		NullCheck(L_0);
		VirtActionInvoker1< RuntimeObject* >::Invoke(47 /* System.Void System.Collections.ArrayList::Sort(System.Collections.IComparer) */, L_0, __this);
		ArrayList_t2718874744 * L_1 = ___rgElts0;
		NullCheck(L_1);
		int32_t L_2 = VirtFuncInvoker0< int32_t >::Invoke(23 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_1);
		V_0 = ((XPathNavigatorU5BU5D_t3671675027*)SZArrayNew(XPathNavigatorU5BU5D_t3671675027_il2cpp_TypeInfo_var, (uint32_t)L_2));
		V_1 = 0;
		goto IL_0034;
	}

IL_001a:
	{
		ArrayList_t2718874744 * L_3 = ___rgElts0;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		RuntimeObject * L_5 = VirtFuncInvoker1< RuntimeObject *, int32_t >::Invoke(21 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_3, L_4);
		V_2 = ((XPathSortElement_t4237073177 *)CastclassClass((RuntimeObject*)L_5, XPathSortElement_t4237073177_il2cpp_TypeInfo_var));
		XPathNavigatorU5BU5D_t3671675027* L_6 = V_0;
		int32_t L_7 = V_1;
		XPathSortElement_t4237073177 * L_8 = V_2;
		NullCheck(L_8);
		XPathNavigator_t787956054 * L_9 = L_8->get_Navigator_0();
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_9);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (XPathNavigator_t787956054 *)L_9);
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_0034:
	{
		int32_t L_11 = V_1;
		ArrayList_t2718874744 * L_12 = ___rgElts0;
		NullCheck(L_12);
		int32_t L_13 = VirtFuncInvoker0< int32_t >::Invoke(23 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_12);
		if ((((int32_t)L_11) < ((int32_t)L_13)))
		{
			goto IL_001a;
		}
	}
	{
		XPathNavigatorU5BU5D_t3671675027* L_14 = V_0;
		RuntimeObject* L_15 = ___nsm1;
		ListIterator_t3066609410 * L_16 = (ListIterator_t3066609410 *)il2cpp_codegen_object_new(ListIterator_t3066609410_il2cpp_TypeInfo_var);
		ListIterator__ctor_m1701056558(L_16, (RuntimeObject*)(RuntimeObject*)L_14, L_15, /*hidden argument*/NULL);
		return L_16;
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
// System.Void System.Xml.XQueryConvert::.ctor()
extern "C" IL2CPP_METHOD_ATTR void XQueryConvert__ctor_m3705198054 (XQueryConvert_t2841811029 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Xml.Schema.XmlTypeCode System.Xml.XQueryConvert::GetFallbackType(System.Xml.Schema.XmlTypeCode)
extern "C" IL2CPP_METHOD_ATTR int32_t XQueryConvert_GetFallbackType_m2057942700 (RuntimeObject * __this /* static, unused */, int32_t ___type0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___type0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)((int32_t)10))))
		{
			case 0:
			{
				goto IL_00bc;
			}
			case 1:
			{
				goto IL_00be;
			}
			case 2:
			{
				goto IL_00e8;
			}
			case 3:
			{
				goto IL_00e8;
			}
			case 4:
			{
				goto IL_00e8;
			}
			case 5:
			{
				goto IL_00e8;
			}
			case 6:
			{
				goto IL_00e8;
			}
			case 7:
			{
				goto IL_00e8;
			}
			case 8:
			{
				goto IL_00e8;
			}
			case 9:
			{
				goto IL_00e8;
			}
			case 10:
			{
				goto IL_00e8;
			}
			case 11:
			{
				goto IL_00e8;
			}
			case 12:
			{
				goto IL_00e8;
			}
			case 13:
			{
				goto IL_00e8;
			}
			case 14:
			{
				goto IL_00e8;
			}
			case 15:
			{
				goto IL_00e8;
			}
			case 16:
			{
				goto IL_00e8;
			}
			case 17:
			{
				goto IL_00e8;
			}
			case 18:
			{
				goto IL_00e8;
			}
			case 19:
			{
				goto IL_00e8;
			}
			case 20:
			{
				goto IL_00c1;
			}
			case 21:
			{
				goto IL_00c4;
			}
			case 22:
			{
				goto IL_00c4;
			}
			case 23:
			{
				goto IL_00c4;
			}
			case 24:
			{
				goto IL_00c4;
			}
			case 25:
			{
				goto IL_00c4;
			}
			case 26:
			{
				goto IL_00c4;
			}
			case 27:
			{
				goto IL_00c4;
			}
			case 28:
			{
				goto IL_00c4;
			}
			case 29:
			{
				goto IL_00c4;
			}
			case 30:
			{
				goto IL_00e8;
			}
			case 31:
			{
				goto IL_00c7;
			}
			case 32:
			{
				goto IL_00ca;
			}
			case 33:
			{
				goto IL_00cd;
			}
			case 34:
			{
				goto IL_00e8;
			}
			case 35:
			{
				goto IL_00d0;
			}
			case 36:
			{
				goto IL_00d3;
			}
			case 37:
			{
				goto IL_00d6;
			}
			case 38:
			{
				goto IL_00d9;
			}
			case 39:
			{
				goto IL_00dc;
			}
			case 40:
			{
				goto IL_00df;
			}
			case 41:
			{
				goto IL_00e2;
			}
			case 42:
			{
				goto IL_00e5;
			}
		}
	}
	{
		goto IL_00e8;
	}

IL_00bc:
	{
		return (int32_t)(1);
	}

IL_00be:
	{
		return (int32_t)(((int32_t)12));
	}

IL_00c1:
	{
		return (int32_t)(((int32_t)29));
	}

IL_00c4:
	{
		return (int32_t)(((int32_t)12));
	}

IL_00c7:
	{
		return (int32_t)(((int32_t)14));
	}

IL_00ca:
	{
		return (int32_t)(((int32_t)41));
	}

IL_00cd:
	{
		return (int32_t)(((int32_t)40));
	}

IL_00d0:
	{
		return (int32_t)(((int32_t)44));
	}

IL_00d3:
	{
		return (int32_t)(((int32_t)44));
	}

IL_00d6:
	{
		return (int32_t)(((int32_t)14));
	}

IL_00d9:
	{
		return (int32_t)(((int32_t)47));
	}

IL_00dc:
	{
		return (int32_t)(((int32_t)40));
	}

IL_00df:
	{
		return (int32_t)(((int32_t)44));
	}

IL_00e2:
	{
		return (int32_t)(((int32_t)50));
	}

IL_00e5:
	{
		return (int32_t)(((int32_t)47));
	}

IL_00e8:
	{
		return (int32_t)(0);
	}
}
// System.String System.Xml.XQueryConvert::AnyUriToString(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* XQueryConvert_AnyUriToString_m420085440 (RuntimeObject * __this /* static, unused */, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		return L_0;
	}
}
// System.Byte[] System.Xml.XQueryConvert::Base64BinaryToHexBinary(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* XQueryConvert_Base64BinaryToHexBinary_m1076450049 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XQueryConvert_Base64BinaryToHexBinary_m1076450049_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_t4116647657* L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		String_t* L_1 = Convert_ToBase64String_m3839334935(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(XmlConvert_t1981561327_il2cpp_TypeInfo_var);
		ByteU5BU5D_t4116647657* L_2 = XmlConvert_FromBinHexString_m376671528(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.String System.Xml.XQueryConvert::Base64BinaryToString(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR String_t* XQueryConvert_Base64BinaryToString_m1560532516 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XQueryConvert_Base64BinaryToString_m1560532516_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_t4116647657* L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		String_t* L_1 = Convert_ToBase64String_m3839334935(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Decimal System.Xml.XQueryConvert::BooleanToDecimal(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR Decimal_t2948259380  XQueryConvert_BooleanToDecimal_m3250283024 (RuntimeObject * __this /* static, unused */, bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XQueryConvert_BooleanToDecimal_m3250283024_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		Decimal_t2948259380  L_1 = Convert_ToDecimal_m2233265097(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Double System.Xml.XQueryConvert::BooleanToDouble(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR double XQueryConvert_BooleanToDouble_m3264703653 (RuntimeObject * __this /* static, unused */, bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XQueryConvert_BooleanToDouble_m3264703653_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		double L_1 = Convert_ToDouble_m954895424(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Single System.Xml.XQueryConvert::BooleanToFloat(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR float XQueryConvert_BooleanToFloat_m1333230503 (RuntimeObject * __this /* static, unused */, bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XQueryConvert_BooleanToFloat_m1333230503_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		float L_1 = Convert_ToSingle_m1386109941(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 System.Xml.XQueryConvert::BooleanToInt(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR int32_t XQueryConvert_BooleanToInt_m923205647 (RuntimeObject * __this /* static, unused */, bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XQueryConvert_BooleanToInt_m923205647_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		int32_t L_1 = Convert_ToInt32_m2100527582(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int64 System.Xml.XQueryConvert::BooleanToInteger(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR int64_t XQueryConvert_BooleanToInteger_m1475222156 (RuntimeObject * __this /* static, unused */, bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XQueryConvert_BooleanToInteger_m1475222156_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		int64_t L_1 = Convert_ToInt64_m2812720657(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.String System.Xml.XQueryConvert::BooleanToString(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR String_t* XQueryConvert_BooleanToString_m1246398600 (RuntimeObject * __this /* static, unused */, bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XQueryConvert_BooleanToString_m1246398600_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B3_0 = NULL;
	{
		bool L_0 = ___value0;
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		G_B3_0 = _stringLiteral4002445229;
		goto IL_0015;
	}

IL_0010:
	{
		G_B3_0 = _stringLiteral3875954633;
	}

IL_0015:
	{
		return G_B3_0;
	}
}
// System.DateTime System.Xml.XQueryConvert::DateTimeToDate(System.DateTime)
extern "C" IL2CPP_METHOD_ATTR DateTime_t3738529785  XQueryConvert_DateTimeToDate_m3839177526 (RuntimeObject * __this /* static, unused */, DateTime_t3738529785  ___value0, const RuntimeMethod* method)
{
	{
		DateTime_t3738529785  L_0 = DateTime_get_Date_m46742767((&___value0), /*hidden argument*/NULL);
		return L_0;
	}
}
// System.DateTime System.Xml.XQueryConvert::DateTimeToGDay(System.DateTime)
extern "C" IL2CPP_METHOD_ATTR DateTime_t3738529785  XQueryConvert_DateTimeToGDay_m172885474 (RuntimeObject * __this /* static, unused */, DateTime_t3738529785  ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = DateTime_get_Day_m1623500273((&___value0), /*hidden argument*/NULL);
		DateTime_t3738529785  L_1;
		memset(&L_1, 0, sizeof(L_1));
		DateTime__ctor_m12900168((&L_1), 0, 0, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.DateTime System.Xml.XQueryConvert::DateTimeToGMonth(System.DateTime)
extern "C" IL2CPP_METHOD_ATTR DateTime_t3738529785  XQueryConvert_DateTimeToGMonth_m600986347 (RuntimeObject * __this /* static, unused */, DateTime_t3738529785  ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = DateTime_get_Month_m1566006993((&___value0), /*hidden argument*/NULL);
		DateTime_t3738529785  L_1;
		memset(&L_1, 0, sizeof(L_1));
		DateTime__ctor_m12900168((&L_1), 0, L_0, 0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.DateTime System.Xml.XQueryConvert::DateTimeToGMonthDay(System.DateTime)
extern "C" IL2CPP_METHOD_ATTR DateTime_t3738529785  XQueryConvert_DateTimeToGMonthDay_m594122542 (RuntimeObject * __this /* static, unused */, DateTime_t3738529785  ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = DateTime_get_Month_m1566006993((&___value0), /*hidden argument*/NULL);
		int32_t L_1 = DateTime_get_Day_m1623500273((&___value0), /*hidden argument*/NULL);
		DateTime_t3738529785  L_2;
		memset(&L_2, 0, sizeof(L_2));
		DateTime__ctor_m12900168((&L_2), 0, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.DateTime System.Xml.XQueryConvert::DateTimeToGYear(System.DateTime)
extern "C" IL2CPP_METHOD_ATTR DateTime_t3738529785  XQueryConvert_DateTimeToGYear_m752063762 (RuntimeObject * __this /* static, unused */, DateTime_t3738529785  ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = DateTime_get_Year_m1184003812((&___value0), /*hidden argument*/NULL);
		DateTime_t3738529785  L_1;
		memset(&L_1, 0, sizeof(L_1));
		DateTime__ctor_m12900168((&L_1), L_0, 0, 0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.DateTime System.Xml.XQueryConvert::DateTimeToGYearMonth(System.DateTime)
extern "C" IL2CPP_METHOD_ATTR DateTime_t3738529785  XQueryConvert_DateTimeToGYearMonth_m243017386 (RuntimeObject * __this /* static, unused */, DateTime_t3738529785  ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = DateTime_get_Year_m1184003812((&___value0), /*hidden argument*/NULL);
		int32_t L_1 = DateTime_get_Month_m1566006993((&___value0), /*hidden argument*/NULL);
		DateTime_t3738529785  L_2;
		memset(&L_2, 0, sizeof(L_2));
		DateTime__ctor_m12900168((&L_2), L_0, L_1, 0, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.DateTime System.Xml.XQueryConvert::DateTimeToTime(System.DateTime)
extern "C" IL2CPP_METHOD_ATTR DateTime_t3738529785  XQueryConvert_DateTimeToTime_m1150468170 (RuntimeObject * __this /* static, unused */, DateTime_t3738529785  ___value0, const RuntimeMethod* method)
{
	TimeSpan_t881159249  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		TimeSpan_t881159249  L_0 = DateTime_get_TimeOfDay_m82064893((&___value0), /*hidden argument*/NULL);
		V_0 = L_0;
		int64_t L_1 = TimeSpan_get_Ticks_m2137362016((&V_0), /*hidden argument*/NULL);
		DateTime_t3738529785  L_2;
		memset(&L_2, 0, sizeof(L_2));
		DateTime__ctor_m516789325((&L_2), L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.DateTime System.Xml.XQueryConvert::DateToDateTime(System.DateTime)
extern "C" IL2CPP_METHOD_ATTR DateTime_t3738529785  XQueryConvert_DateToDateTime_m3084202270 (RuntimeObject * __this /* static, unused */, DateTime_t3738529785  ___value0, const RuntimeMethod* method)
{
	{
		DateTime_t3738529785  L_0 = DateTime_get_Date_m46742767((&___value0), /*hidden argument*/NULL);
		return L_0;
	}
}
// System.DateTime System.Xml.XQueryConvert::DateToGDay(System.DateTime)
extern "C" IL2CPP_METHOD_ATTR DateTime_t3738529785  XQueryConvert_DateToGDay_m1338677011 (RuntimeObject * __this /* static, unused */, DateTime_t3738529785  ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = DateTime_get_Day_m1623500273((&___value0), /*hidden argument*/NULL);
		DateTime_t3738529785  L_1;
		memset(&L_1, 0, sizeof(L_1));
		DateTime__ctor_m12900168((&L_1), 0, 0, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.DateTime System.Xml.XQueryConvert::DateToGMonth(System.DateTime)
extern "C" IL2CPP_METHOD_ATTR DateTime_t3738529785  XQueryConvert_DateToGMonth_m3911116232 (RuntimeObject * __this /* static, unused */, DateTime_t3738529785  ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = DateTime_get_Month_m1566006993((&___value0), /*hidden argument*/NULL);
		DateTime_t3738529785  L_1;
		memset(&L_1, 0, sizeof(L_1));
		DateTime__ctor_m12900168((&L_1), 0, L_0, 0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.DateTime System.Xml.XQueryConvert::DateToGMonthDay(System.DateTime)
extern "C" IL2CPP_METHOD_ATTR DateTime_t3738529785  XQueryConvert_DateToGMonthDay_m4026324868 (RuntimeObject * __this /* static, unused */, DateTime_t3738529785  ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = DateTime_get_Month_m1566006993((&___value0), /*hidden argument*/NULL);
		int32_t L_1 = DateTime_get_Day_m1623500273((&___value0), /*hidden argument*/NULL);
		DateTime_t3738529785  L_2;
		memset(&L_2, 0, sizeof(L_2));
		DateTime__ctor_m12900168((&L_2), 0, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.DateTime System.Xml.XQueryConvert::DateToGYear(System.DateTime)
extern "C" IL2CPP_METHOD_ATTR DateTime_t3738529785  XQueryConvert_DateToGYear_m333061238 (RuntimeObject * __this /* static, unused */, DateTime_t3738529785  ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = DateTime_get_Year_m1184003812((&___value0), /*hidden argument*/NULL);
		DateTime_t3738529785  L_1;
		memset(&L_1, 0, sizeof(L_1));
		DateTime__ctor_m12900168((&L_1), L_0, 0, 0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.DateTime System.Xml.XQueryConvert::DateToGYearMonth(System.DateTime)
extern "C" IL2CPP_METHOD_ATTR DateTime_t3738529785  XQueryConvert_DateToGYearMonth_m2359837776 (RuntimeObject * __this /* static, unused */, DateTime_t3738529785  ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = DateTime_get_Year_m1184003812((&___value0), /*hidden argument*/NULL);
		int32_t L_1 = DateTime_get_Month_m1566006993((&___value0), /*hidden argument*/NULL);
		DateTime_t3738529785  L_2;
		memset(&L_2, 0, sizeof(L_2));
		DateTime__ctor_m12900168((&L_2), L_0, L_1, 0, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.String System.Xml.XQueryConvert::DateToString(System.DateTime)
extern "C" IL2CPP_METHOD_ATTR String_t* XQueryConvert_DateToString_m1111763387 (RuntimeObject * __this /* static, unused */, DateTime_t3738529785  ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XQueryConvert_DateToString_m1111763387_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		DateTime_t3738529785  L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(XmlConvert_t1981561327_il2cpp_TypeInfo_var);
		String_t* L_1 = XmlConvert_ToString_m2925918111(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.String System.Xml.XQueryConvert::DateTimeToString(System.DateTime)
extern "C" IL2CPP_METHOD_ATTR String_t* XQueryConvert_DateTimeToString_m3419669089 (RuntimeObject * __this /* static, unused */, DateTime_t3738529785  ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XQueryConvert_DateTimeToString_m3419669089_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		DateTime_t3738529785  L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(XmlConvert_t1981561327_il2cpp_TypeInfo_var);
		String_t* L_1 = XmlConvert_ToString_m2925918111(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.String System.Xml.XQueryConvert::DayTimeDurationToDuration(System.TimeSpan)
extern "C" IL2CPP_METHOD_ATTR String_t* XQueryConvert_DayTimeDurationToDuration_m2511886778 (RuntimeObject * __this /* static, unused */, TimeSpan_t881159249  ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XQueryConvert_DayTimeDurationToDuration_m2511886778_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		TimeSpan_t881159249  L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(XmlConvert_t1981561327_il2cpp_TypeInfo_var);
		String_t* L_1 = XmlConvert_ToString_m1102839109(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.String System.Xml.XQueryConvert::DayTimeDurationToString(System.TimeSpan)
extern "C" IL2CPP_METHOD_ATTR String_t* XQueryConvert_DayTimeDurationToString_m1381670619 (RuntimeObject * __this /* static, unused */, TimeSpan_t881159249  ___value0, const RuntimeMethod* method)
{
	{
		TimeSpan_t881159249  L_0 = ___value0;
		String_t* L_1 = XQueryConvert_DayTimeDurationToDuration_m2511886778(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean System.Xml.XQueryConvert::DecimalToBoolean(System.Decimal)
extern "C" IL2CPP_METHOD_ATTR bool XQueryConvert_DecimalToBoolean_m1434077073 (RuntimeObject * __this /* static, unused */, Decimal_t2948259380  ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XQueryConvert_DecimalToBoolean_m1434077073_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Decimal_t2948259380  L_0 = ___value0;
		Decimal_t2948259380  L_1;
		memset(&L_1, 0, sizeof(L_1));
		Decimal__ctor_m1256289983((&L_1), 0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Decimal_t2948259380_il2cpp_TypeInfo_var);
		bool L_2 = Decimal_op_Inequality_m3543190500(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Double System.Xml.XQueryConvert::DecimalToDouble(System.Decimal)
extern "C" IL2CPP_METHOD_ATTR double XQueryConvert_DecimalToDouble_m1986311801 (RuntimeObject * __this /* static, unused */, Decimal_t2948259380  ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XQueryConvert_DecimalToDouble_m1986311801_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Decimal_t2948259380  L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		double L_1 = Convert_ToDouble_m1177445661(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Single System.Xml.XQueryConvert::DecimalToFloat(System.Decimal)
extern "C" IL2CPP_METHOD_ATTR float XQueryConvert_DecimalToFloat_m3515441337 (RuntimeObject * __this /* static, unused */, Decimal_t2948259380  ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XQueryConvert_DecimalToFloat_m3515441337_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Decimal_t2948259380  L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		float L_1 = Convert_ToSingle_m1389817074(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 System.Xml.XQueryConvert::DecimalToInt(System.Decimal)
extern "C" IL2CPP_METHOD_ATTR int32_t XQueryConvert_DecimalToInt_m850401348 (RuntimeObject * __this /* static, unused */, Decimal_t2948259380  ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XQueryConvert_DecimalToInt_m850401348_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Decimal_t2948259380  L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		int32_t L_1 = Convert_ToInt32_m3048308591(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int64 System.Xml.XQueryConvert::DecimalToInteger(System.Decimal)
extern "C" IL2CPP_METHOD_ATTR int64_t XQueryConvert_DecimalToInteger_m433136421 (RuntimeObject * __this /* static, unused */, Decimal_t2948259380  ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XQueryConvert_DecimalToInteger_m433136421_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Decimal_t2948259380  L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		int64_t L_1 = Convert_ToInt64_m4082637156(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.String System.Xml.XQueryConvert::DecimalToString(System.Decimal)
extern "C" IL2CPP_METHOD_ATTR String_t* XQueryConvert_DecimalToString_m603199621 (RuntimeObject * __this /* static, unused */, Decimal_t2948259380  ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XQueryConvert_DecimalToString_m603199621_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Decimal_t2948259380  L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(XmlConvert_t1981561327_il2cpp_TypeInfo_var);
		String_t* L_1 = XmlConvert_ToString_m732346799(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean System.Xml.XQueryConvert::DoubleToBoolean(System.Double)
extern "C" IL2CPP_METHOD_ATTR bool XQueryConvert_DoubleToBoolean_m1126860906 (RuntimeObject * __this /* static, unused */, double ___value0, const RuntimeMethod* method)
{
	{
		double L_0 = ___value0;
		return (bool)((((int32_t)((((double)L_0) == ((double)(0.0)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Decimal System.Xml.XQueryConvert::DoubleToDecimal(System.Double)
extern "C" IL2CPP_METHOD_ATTR Decimal_t2948259380  XQueryConvert_DoubleToDecimal_m2263709119 (RuntimeObject * __this /* static, unused */, double ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XQueryConvert_DoubleToDecimal_m2263709119_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		double L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Decimal_t2948259380_il2cpp_TypeInfo_var);
		Decimal_t2948259380  L_1 = Decimal_op_Explicit_m2433293820(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Single System.Xml.XQueryConvert::DoubleToFloat(System.Double)
extern "C" IL2CPP_METHOD_ATTR float XQueryConvert_DoubleToFloat_m3277774460 (RuntimeObject * __this /* static, unused */, double ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XQueryConvert_DoubleToFloat_m3277774460_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		double L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		float L_1 = Convert_ToSingle_m3227075028(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 System.Xml.XQueryConvert::DoubleToInt(System.Double)
extern "C" IL2CPP_METHOD_ATTR int32_t XQueryConvert_DoubleToInt_m1008191687 (RuntimeObject * __this /* static, unused */, double ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XQueryConvert_DoubleToInt_m1008191687_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		double L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		int32_t L_1 = Convert_ToInt32_m2880498116(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int64 System.Xml.XQueryConvert::DoubleToInteger(System.Double)
extern "C" IL2CPP_METHOD_ATTR int64_t XQueryConvert_DoubleToInteger_m1961635078 (RuntimeObject * __this /* static, unused */, double ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XQueryConvert_DoubleToInteger_m1961635078_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		double L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		int64_t L_1 = Convert_ToInt64_m3758262873(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.String System.Xml.XQueryConvert::DoubleToString(System.Double)
extern "C" IL2CPP_METHOD_ATTR String_t* XQueryConvert_DoubleToString_m3397435802 (RuntimeObject * __this /* static, unused */, double ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XQueryConvert_DoubleToString_m3397435802_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		double L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(XmlConvert_t1981561327_il2cpp_TypeInfo_var);
		String_t* L_1 = XmlConvert_ToString_m2027917565(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.TimeSpan System.Xml.XQueryConvert::DurationToDayTimeDuration(System.String)
extern "C" IL2CPP_METHOD_ATTR TimeSpan_t881159249  XQueryConvert_DurationToDayTimeDuration_m1262223862 (RuntimeObject * __this /* static, unused */, String_t* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XQueryConvert_DurationToDayTimeDuration_m1262223862_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(XmlConvert_t1981561327_il2cpp_TypeInfo_var);
		TimeSpan_t881159249  L_1 = XmlConvert_ToTimeSpan_m349710467(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.String System.Xml.XQueryConvert::DurationToString(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* XQueryConvert_DurationToString_m858995430 (RuntimeObject * __this /* static, unused */, String_t* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XQueryConvert_DurationToString_m858995430_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(XmlConvert_t1981561327_il2cpp_TypeInfo_var);
		TimeSpan_t881159249  L_1 = XmlConvert_ToTimeSpan_m349710467(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		String_t* L_2 = XmlConvert_ToString_m1102839109(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.TimeSpan System.Xml.XQueryConvert::DurationToYearMonthDuration(System.String)
extern "C" IL2CPP_METHOD_ATTR TimeSpan_t881159249  XQueryConvert_DurationToYearMonthDuration_m1289867814 (RuntimeObject * __this /* static, unused */, String_t* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XQueryConvert_DurationToYearMonthDuration_m1289867814_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(XmlConvert_t1981561327_il2cpp_TypeInfo_var);
		TimeSpan_t881159249  L_1 = XmlConvert_ToTimeSpan_m349710467(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean System.Xml.XQueryConvert::FloatToBoolean(System.Single)
extern "C" IL2CPP_METHOD_ATTR bool XQueryConvert_FloatToBoolean_m3448872841 (RuntimeObject * __this /* static, unused */, float ___value0, const RuntimeMethod* method)
{
	{
		float L_0 = ___value0;
		return (bool)((((int32_t)((((float)L_0) == ((float)(0.0f)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Decimal System.Xml.XQueryConvert::FloatToDecimal(System.Single)
extern "C" IL2CPP_METHOD_ATTR Decimal_t2948259380  XQueryConvert_FloatToDecimal_m2851574299 (RuntimeObject * __this /* static, unused */, float ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XQueryConvert_FloatToDecimal_m2851574299_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Decimal_t2948259380_il2cpp_TypeInfo_var);
		Decimal_t2948259380  L_1 = Decimal_op_Explicit_m2070069477(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Double System.Xml.XQueryConvert::FloatToDouble(System.Single)
extern "C" IL2CPP_METHOD_ATTR double XQueryConvert_FloatToDouble_m1056356666 (RuntimeObject * __this /* static, unused */, float ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XQueryConvert_FloatToDouble_m1056356666_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		double L_1 = Convert_ToDouble_m217737046(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 System.Xml.XQueryConvert::FloatToInt(System.Single)
extern "C" IL2CPP_METHOD_ATTR int32_t XQueryConvert_FloatToInt_m1276914392 (RuntimeObject * __this /* static, unused */, float ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XQueryConvert_FloatToInt_m1276914392_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		int32_t L_1 = Convert_ToInt32_m1613163543(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int64 System.Xml.XQueryConvert::FloatToInteger(System.Single)
extern "C" IL2CPP_METHOD_ATTR int64_t XQueryConvert_FloatToInteger_m2026094839 (RuntimeObject * __this /* static, unused */, float ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XQueryConvert_FloatToInteger_m2026094839_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		int64_t L_1 = Convert_ToInt64_m658295522(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.String System.Xml.XQueryConvert::FloatToString(System.Single)
extern "C" IL2CPP_METHOD_ATTR String_t* XQueryConvert_FloatToString_m18943831 (RuntimeObject * __this /* static, unused */, float ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XQueryConvert_FloatToString_m18943831_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(XmlConvert_t1981561327_il2cpp_TypeInfo_var);
		String_t* L_1 = XmlConvert_ToString_m934314535(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.String System.Xml.XQueryConvert::GDayToString(System.DateTime)
extern "C" IL2CPP_METHOD_ATTR String_t* XQueryConvert_GDayToString_m3590589383 (RuntimeObject * __this /* static, unused */, DateTime_t3738529785  ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XQueryConvert_GDayToString_m3590589383_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = DateTime_get_Day_m1623500273((&___value0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(TimeSpan_t881159249_il2cpp_TypeInfo_var);
		TimeSpan_t881159249  L_1 = TimeSpan_FromDays_m3788741098(NULL /*static, unused*/, (((double)((double)L_0))), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(XmlConvert_t1981561327_il2cpp_TypeInfo_var);
		String_t* L_2 = XmlConvert_ToString_m1102839109(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.String System.Xml.XQueryConvert::GMonthDayToString(System.DateTime)
extern "C" IL2CPP_METHOD_ATTR String_t* XQueryConvert_GMonthDayToString_m3341681722 (RuntimeObject * __this /* static, unused */, DateTime_t3738529785  ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XQueryConvert_GMonthDayToString_m3341681722_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = DateTime_get_Day_m1623500273((&___value0), /*hidden argument*/NULL);
		int32_t L_1 = DateTime_get_Hour_m4153505178((&___value0), /*hidden argument*/NULL);
		int32_t L_2 = DateTime_get_Minute_m87527789((&___value0), /*hidden argument*/NULL);
		int32_t L_3 = DateTime_get_Second_m2686182256((&___value0), /*hidden argument*/NULL);
		TimeSpan_t881159249  L_4;
		memset(&L_4, 0, sizeof(L_4));
		TimeSpan__ctor_m4161351023((&L_4), L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(XmlConvert_t1981561327_il2cpp_TypeInfo_var);
		String_t* L_5 = XmlConvert_ToString_m1102839109(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.String System.Xml.XQueryConvert::GMonthToString(System.DateTime)
extern "C" IL2CPP_METHOD_ATTR String_t* XQueryConvert_GMonthToString_m96669560 (RuntimeObject * __this /* static, unused */, DateTime_t3738529785  ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XQueryConvert_GMonthToString_m96669560_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = DateTime_get_Month_m1566006993((&___value0), /*hidden argument*/NULL);
		TimeSpan_t881159249  L_1;
		memset(&L_1, 0, sizeof(L_1));
		TimeSpan__ctor_m3689759052((&L_1), 0, L_0, 0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(XmlConvert_t1981561327_il2cpp_TypeInfo_var);
		String_t* L_2 = XmlConvert_ToString_m1102839109(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.String System.Xml.XQueryConvert::GYearMonthToString(System.DateTime)
extern "C" IL2CPP_METHOD_ATTR String_t* XQueryConvert_GYearMonthToString_m2000814436 (RuntimeObject * __this /* static, unused */, DateTime_t3738529785  ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XQueryConvert_GYearMonthToString_m2000814436_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = DateTime_get_Year_m1184003812((&___value0), /*hidden argument*/NULL);
		int32_t L_1 = DateTime_get_Month_m1566006993((&___value0), /*hidden argument*/NULL);
		TimeSpan_t881159249  L_2;
		memset(&L_2, 0, sizeof(L_2));
		TimeSpan__ctor_m3689759052((&L_2), L_0, L_1, 0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(XmlConvert_t1981561327_il2cpp_TypeInfo_var);
		String_t* L_3 = XmlConvert_ToString_m1102839109(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.String System.Xml.XQueryConvert::GYearToString(System.DateTime)
extern "C" IL2CPP_METHOD_ATTR String_t* XQueryConvert_GYearToString_m737655434 (RuntimeObject * __this /* static, unused */, DateTime_t3738529785  ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XQueryConvert_GYearToString_m737655434_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DateTime_t3738529785  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = DateTime_get_Year_m1184003812((&___value0), /*hidden argument*/NULL);
		DateTime__ctor_m12900168((&V_0), L_0, 0, 0, /*hidden argument*/NULL);
		int64_t L_1 = DateTime_get_Ticks_m1550640881((&V_0), /*hidden argument*/NULL);
		TimeSpan_t881159249  L_2;
		memset(&L_2, 0, sizeof(L_2));
		TimeSpan__ctor_m1896986612((&L_2), L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(XmlConvert_t1981561327_il2cpp_TypeInfo_var);
		String_t* L_3 = XmlConvert_ToString_m1102839109(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.String System.Xml.XQueryConvert::HexBinaryToString(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR String_t* XQueryConvert_HexBinaryToString_m3184488723 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* ___data0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XQueryConvert_HexBinaryToString_m3184488723_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_t4116647657* L_0 = ___data0;
		IL2CPP_RUNTIME_CLASS_INIT(XmlConvert_t1981561327_il2cpp_TypeInfo_var);
		String_t* L_1 = XmlConvert_ToBinHexString_m2457677889(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Byte[] System.Xml.XQueryConvert::HexBinaryToBase64Binary(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* XQueryConvert_HexBinaryToBase64Binary_m255655287 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* ___data0, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_t4116647657* L_0 = ___data0;
		return L_0;
	}
}
// System.Boolean System.Xml.XQueryConvert::IntegerToBoolean(System.Int64)
extern "C" IL2CPP_METHOD_ATTR bool XQueryConvert_IntegerToBoolean_m3629664552 (RuntimeObject * __this /* static, unused */, int64_t ___value0, const RuntimeMethod* method)
{
	{
		int64_t L_0 = ___value0;
		return (bool)((((int32_t)((((int64_t)L_0) == ((int64_t)(((int64_t)((int64_t)0)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Decimal System.Xml.XQueryConvert::IntegerToDecimal(System.Int64)
extern "C" IL2CPP_METHOD_ATTR Decimal_t2948259380  XQueryConvert_IntegerToDecimal_m145995142 (RuntimeObject * __this /* static, unused */, int64_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XQueryConvert_IntegerToDecimal_m145995142_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int64_t L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Decimal_t2948259380_il2cpp_TypeInfo_var);
		Decimal_t2948259380  L_1 = Decimal_op_Implicit_m1349849065(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Double System.Xml.XQueryConvert::IntegerToDouble(System.Int64)
extern "C" IL2CPP_METHOD_ATTR double XQueryConvert_IntegerToDouble_m3919208762 (RuntimeObject * __this /* static, unused */, int64_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XQueryConvert_IntegerToDouble_m3919208762_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int64_t L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		double L_1 = Convert_ToDouble_m2180337032(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Single System.Xml.XQueryConvert::IntegerToFloat(System.Int64)
extern "C" IL2CPP_METHOD_ATTR float XQueryConvert_IntegerToFloat_m4060428780 (RuntimeObject * __this /* static, unused */, int64_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XQueryConvert_IntegerToFloat_m4060428780_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int64_t L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		float L_1 = Convert_ToSingle_m2891972375(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 System.Xml.XQueryConvert::IntegerToInt(System.Int64)
extern "C" IL2CPP_METHOD_ATTR int32_t XQueryConvert_IntegerToInt_m3303545509 (RuntimeObject * __this /* static, unused */, int64_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XQueryConvert_IntegerToInt_m3303545509_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int64_t L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		int32_t L_1 = Convert_ToInt32_m1085875835(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.String System.Xml.XQueryConvert::IntegerToString(System.Int64)
extern "C" IL2CPP_METHOD_ATTR String_t* XQueryConvert_IntegerToString_m438592566 (RuntimeObject * __this /* static, unused */, int64_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XQueryConvert_IntegerToString_m438592566_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int64_t L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(XmlConvert_t1981561327_il2cpp_TypeInfo_var);
		String_t* L_1 = XmlConvert_ToString_m2891307708(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean System.Xml.XQueryConvert::IntToBoolean(System.Int32)
extern "C" IL2CPP_METHOD_ATTR bool XQueryConvert_IntToBoolean_m2003967774 (RuntimeObject * __this /* static, unused */, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		return (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Decimal System.Xml.XQueryConvert::IntToDecimal(System.Int32)
extern "C" IL2CPP_METHOD_ATTR Decimal_t2948259380  XQueryConvert_IntToDecimal_m1441294476 (RuntimeObject * __this /* static, unused */, int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XQueryConvert_IntToDecimal_m1441294476_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Decimal_t2948259380_il2cpp_TypeInfo_var);
		Decimal_t2948259380  L_1 = Decimal_op_Implicit_m1328901562(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Double System.Xml.XQueryConvert::IntToDouble(System.Int32)
extern "C" IL2CPP_METHOD_ATTR double XQueryConvert_IntToDouble_m328705259 (RuntimeObject * __this /* static, unused */, int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XQueryConvert_IntToDouble_m328705259_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		double L_1 = Convert_ToDouble_m2924063577(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Single System.Xml.XQueryConvert::IntToFloat(System.Int32)
extern "C" IL2CPP_METHOD_ATTR float XQueryConvert_IntToFloat_m1973973305 (RuntimeObject * __this /* static, unused */, int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XQueryConvert_IntToFloat_m1973973305_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		float L_1 = Convert_ToSingle_m3635698920(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int64 System.Xml.XQueryConvert::IntToInteger(System.Int32)
extern "C" IL2CPP_METHOD_ATTR int64_t XQueryConvert_IntToInteger_m4232271675 (RuntimeObject * __this /* static, unused */, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		return (((int64_t)((int64_t)L_0)));
	}
}
// System.String System.Xml.XQueryConvert::IntToString(System.Int32)
extern "C" IL2CPP_METHOD_ATTR String_t* XQueryConvert_IntToString_m3128239816 (RuntimeObject * __this /* static, unused */, int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XQueryConvert_IntToString_m3128239816_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(XmlConvert_t1981561327_il2cpp_TypeInfo_var);
		String_t* L_1 = XmlConvert_ToString_m4082948798(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.String System.Xml.XQueryConvert::NonNegativeIntegerToString(System.Decimal)
extern "C" IL2CPP_METHOD_ATTR String_t* XQueryConvert_NonNegativeIntegerToString_m3470626339 (RuntimeObject * __this /* static, unused */, Decimal_t2948259380  ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XQueryConvert_NonNegativeIntegerToString_m3470626339_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Decimal_t2948259380  L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(XmlConvert_t1981561327_il2cpp_TypeInfo_var);
		String_t* L_1 = XmlConvert_ToString_m732346799(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.String System.Xml.XQueryConvert::NonPositiveIntegerToString(System.Decimal)
extern "C" IL2CPP_METHOD_ATTR String_t* XQueryConvert_NonPositiveIntegerToString_m3142498018 (RuntimeObject * __this /* static, unused */, Decimal_t2948259380  ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XQueryConvert_NonPositiveIntegerToString_m3142498018_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Decimal_t2948259380  L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(XmlConvert_t1981561327_il2cpp_TypeInfo_var);
		String_t* L_1 = XmlConvert_ToString_m732346799(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.DateTime System.Xml.XQueryConvert::TimeToDateTime(System.DateTime)
extern "C" IL2CPP_METHOD_ATTR DateTime_t3738529785  XQueryConvert_TimeToDateTime_m861075965 (RuntimeObject * __this /* static, unused */, DateTime_t3738529785  ___value0, const RuntimeMethod* method)
{
	{
		DateTime_t3738529785  L_0 = ___value0;
		return L_0;
	}
}
// System.String System.Xml.XQueryConvert::TimeToString(System.DateTime)
extern "C" IL2CPP_METHOD_ATTR String_t* XQueryConvert_TimeToString_m1625545776 (RuntimeObject * __this /* static, unused */, DateTime_t3738529785  ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XQueryConvert_TimeToString_m1625545776_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		DateTime_t3738529785  L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(XmlConvert_t1981561327_il2cpp_TypeInfo_var);
		String_t* L_1 = XmlConvert_ToString_m419894725(NULL /*static, unused*/, L_0, _stringLiteral135540524, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.String System.Xml.XQueryConvert::YearMonthDurationToDuration(System.TimeSpan)
extern "C" IL2CPP_METHOD_ATTR String_t* XQueryConvert_YearMonthDurationToDuration_m1651035387 (RuntimeObject * __this /* static, unused */, TimeSpan_t881159249  ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XQueryConvert_YearMonthDurationToDuration_m1651035387_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		TimeSpan_t881159249  L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(XmlConvert_t1981561327_il2cpp_TypeInfo_var);
		String_t* L_1 = XmlConvert_ToString_m1102839109(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.String System.Xml.XQueryConvert::YearMonthDurationToString(System.TimeSpan)
extern "C" IL2CPP_METHOD_ATTR String_t* XQueryConvert_YearMonthDurationToString_m2396194347 (RuntimeObject * __this /* static, unused */, TimeSpan_t881159249  ___value0, const RuntimeMethod* method)
{
	{
		TimeSpan_t881159249  L_0 = ___value0;
		String_t* L_1 = XQueryConvert_YearMonthDurationToDuration_m1651035387(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.String System.Xml.XQueryConvert::StringToAnyUri(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* XQueryConvert_StringToAnyUri_m2655355938 (RuntimeObject * __this /* static, unused */, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		return L_0;
	}
}
// System.Byte[] System.Xml.XQueryConvert::StringToBase64Binary(System.String)
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* XQueryConvert_StringToBase64Binary_m3063741055 (RuntimeObject * __this /* static, unused */, String_t* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XQueryConvert_StringToBase64Binary_m3063741055_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		ByteU5BU5D_t4116647657* L_1 = Convert_FromBase64String_m3685135396(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean System.Xml.XQueryConvert::StringToBoolean(System.String)
extern "C" IL2CPP_METHOD_ATTR bool XQueryConvert_StringToBoolean_m1546556753 (RuntimeObject * __this /* static, unused */, String_t* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XQueryConvert_StringToBoolean_m1546556753_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(XmlConvert_t1981561327_il2cpp_TypeInfo_var);
		bool L_1 = XmlConvert_ToBoolean_m3792671347(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.DateTime System.Xml.XQueryConvert::StringToDate(System.String)
extern "C" IL2CPP_METHOD_ATTR DateTime_t3738529785  XQueryConvert_StringToDate_m2182784307 (RuntimeObject * __this /* static, unused */, String_t* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XQueryConvert_StringToDate_m2182784307_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(XmlConvert_t1981561327_il2cpp_TypeInfo_var);
		DateTime_t3738529785  L_1 = XmlConvert_ToDateTime_m800272518(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.DateTime System.Xml.XQueryConvert::StringToDateTime(System.String)
extern "C" IL2CPP_METHOD_ATTR DateTime_t3738529785  XQueryConvert_StringToDateTime_m2390548143 (RuntimeObject * __this /* static, unused */, String_t* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XQueryConvert_StringToDateTime_m2390548143_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(XmlConvert_t1981561327_il2cpp_TypeInfo_var);
		DateTime_t3738529785  L_1 = XmlConvert_ToDateTime_m800272518(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.TimeSpan System.Xml.XQueryConvert::StringToDayTimeDuration(System.String)
extern "C" IL2CPP_METHOD_ATTR TimeSpan_t881159249  XQueryConvert_StringToDayTimeDuration_m1300131547 (RuntimeObject * __this /* static, unused */, String_t* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XQueryConvert_StringToDayTimeDuration_m1300131547_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(XmlConvert_t1981561327_il2cpp_TypeInfo_var);
		TimeSpan_t881159249  L_1 = XmlConvert_ToTimeSpan_m349710467(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Decimal System.Xml.XQueryConvert::StringToDecimal(System.String)
extern "C" IL2CPP_METHOD_ATTR Decimal_t2948259380  XQueryConvert_StringToDecimal_m4290158632 (RuntimeObject * __this /* static, unused */, String_t* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XQueryConvert_StringToDecimal_m4290158632_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(XmlConvert_t1981561327_il2cpp_TypeInfo_var);
		Decimal_t2948259380  L_1 = XmlConvert_ToDecimal_m1028049782(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Double System.Xml.XQueryConvert::StringToDouble(System.String)
extern "C" IL2CPP_METHOD_ATTR double XQueryConvert_StringToDouble_m2283484990 (RuntimeObject * __this /* static, unused */, String_t* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XQueryConvert_StringToDouble_m2283484990_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(XmlConvert_t1981561327_il2cpp_TypeInfo_var);
		double L_1 = XmlConvert_ToDouble_m4257337793(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.String System.Xml.XQueryConvert::StringToDuration(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* XQueryConvert_StringToDuration_m2041646225 (RuntimeObject * __this /* static, unused */, String_t* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XQueryConvert_StringToDuration_m2041646225_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(XmlConvert_t1981561327_il2cpp_TypeInfo_var);
		TimeSpan_t881159249  L_1 = XmlConvert_ToTimeSpan_m349710467(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		String_t* L_2 = XmlConvert_ToString_m1102839109(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Single System.Xml.XQueryConvert::StringToFloat(System.String)
extern "C" IL2CPP_METHOD_ATTR float XQueryConvert_StringToFloat_m3895254224 (RuntimeObject * __this /* static, unused */, String_t* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XQueryConvert_StringToFloat_m3895254224_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(XmlConvert_t1981561327_il2cpp_TypeInfo_var);
		float L_1 = XmlConvert_ToSingle_m966688176(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.DateTime System.Xml.XQueryConvert::StringToGDay(System.String)
extern "C" IL2CPP_METHOD_ATTR DateTime_t3738529785  XQueryConvert_StringToGDay_m3863825363 (RuntimeObject * __this /* static, unused */, String_t* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XQueryConvert_StringToGDay_m3863825363_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(XmlConvert_t1981561327_il2cpp_TypeInfo_var);
		DateTime_t3738529785  L_1 = XmlConvert_ToDateTime_m800272518(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.DateTime System.Xml.XQueryConvert::StringToGMonth(System.String)
extern "C" IL2CPP_METHOD_ATTR DateTime_t3738529785  XQueryConvert_StringToGMonth_m2816959826 (RuntimeObject * __this /* static, unused */, String_t* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XQueryConvert_StringToGMonth_m2816959826_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(XmlConvert_t1981561327_il2cpp_TypeInfo_var);
		DateTime_t3738529785  L_1 = XmlConvert_ToDateTime_m800272518(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.DateTime System.Xml.XQueryConvert::StringToGMonthDay(System.String)
extern "C" IL2CPP_METHOD_ATTR DateTime_t3738529785  XQueryConvert_StringToGMonthDay_m2325808560 (RuntimeObject * __this /* static, unused */, String_t* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XQueryConvert_StringToGMonthDay_m2325808560_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(XmlConvert_t1981561327_il2cpp_TypeInfo_var);
		DateTime_t3738529785  L_1 = XmlConvert_ToDateTime_m800272518(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.DateTime System.Xml.XQueryConvert::StringToGYear(System.String)
extern "C" IL2CPP_METHOD_ATTR DateTime_t3738529785  XQueryConvert_StringToGYear_m1734580589 (RuntimeObject * __this /* static, unused */, String_t* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XQueryConvert_StringToGYear_m1734580589_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(XmlConvert_t1981561327_il2cpp_TypeInfo_var);
		DateTime_t3738529785  L_1 = XmlConvert_ToDateTime_m800272518(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.DateTime System.Xml.XQueryConvert::StringToGYearMonth(System.String)
extern "C" IL2CPP_METHOD_ATTR DateTime_t3738529785  XQueryConvert_StringToGYearMonth_m2272193914 (RuntimeObject * __this /* static, unused */, String_t* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XQueryConvert_StringToGYearMonth_m2272193914_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(XmlConvert_t1981561327_il2cpp_TypeInfo_var);
		DateTime_t3738529785  L_1 = XmlConvert_ToDateTime_m800272518(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Byte[] System.Xml.XQueryConvert::StringToHexBinary(System.String)
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* XQueryConvert_StringToHexBinary_m2817305050 (RuntimeObject * __this /* static, unused */, String_t* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XQueryConvert_StringToHexBinary_m2817305050_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(XmlConvert_t1981561327_il2cpp_TypeInfo_var);
		ByteU5BU5D_t4116647657* L_1 = XmlConvert_FromBinHexString_m376671528(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 System.Xml.XQueryConvert::StringToInt(System.String)
extern "C" IL2CPP_METHOD_ATTR int32_t XQueryConvert_StringToInt_m1486500011 (RuntimeObject * __this /* static, unused */, String_t* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XQueryConvert_StringToInt_m1486500011_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(XmlConvert_t1981561327_il2cpp_TypeInfo_var);
		int32_t L_1 = XmlConvert_ToInt32_m2886969565(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int64 System.Xml.XQueryConvert::StringToInteger(System.String)
extern "C" IL2CPP_METHOD_ATTR int64_t XQueryConvert_StringToInteger_m2833755124 (RuntimeObject * __this /* static, unused */, String_t* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XQueryConvert_StringToInteger_m2833755124_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(XmlConvert_t1981561327_il2cpp_TypeInfo_var);
		int64_t L_1 = XmlConvert_ToInt64_m1902133275(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Decimal System.Xml.XQueryConvert::StringToNonNegativeInteger(System.String)
extern "C" IL2CPP_METHOD_ATTR Decimal_t2948259380  XQueryConvert_StringToNonNegativeInteger_m1728677293 (RuntimeObject * __this /* static, unused */, String_t* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XQueryConvert_StringToNonNegativeInteger_m1728677293_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(XmlConvert_t1981561327_il2cpp_TypeInfo_var);
		Decimal_t2948259380  L_1 = XmlConvert_ToDecimal_m1028049782(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Decimal System.Xml.XQueryConvert::StringToNonPositiveInteger(System.String)
extern "C" IL2CPP_METHOD_ATTR Decimal_t2948259380  XQueryConvert_StringToNonPositiveInteger_m2043609473 (RuntimeObject * __this /* static, unused */, String_t* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XQueryConvert_StringToNonPositiveInteger_m2043609473_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(XmlConvert_t1981561327_il2cpp_TypeInfo_var);
		Decimal_t2948259380  L_1 = XmlConvert_ToDecimal_m1028049782(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.DateTime System.Xml.XQueryConvert::StringToTime(System.String)
extern "C" IL2CPP_METHOD_ATTR DateTime_t3738529785  XQueryConvert_StringToTime_m1148168159 (RuntimeObject * __this /* static, unused */, String_t* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XQueryConvert_StringToTime_m1148168159_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(XmlConvert_t1981561327_il2cpp_TypeInfo_var);
		DateTime_t3738529785  L_1 = XmlConvert_ToDateTime_m800272518(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int64 System.Xml.XQueryConvert::StringToUnsignedInt(System.String)
extern "C" IL2CPP_METHOD_ATTR int64_t XQueryConvert_StringToUnsignedInt_m2500577595 (RuntimeObject * __this /* static, unused */, String_t* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XQueryConvert_StringToUnsignedInt_m2500577595_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(XmlConvert_t1981561327_il2cpp_TypeInfo_var);
		uint32_t L_1 = XmlConvert_ToUInt32_m120686766(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return (((int64_t)((uint64_t)L_1)));
	}
}
// System.Decimal System.Xml.XQueryConvert::StringToUnsignedLong(System.String)
extern "C" IL2CPP_METHOD_ATTR Decimal_t2948259380  XQueryConvert_StringToUnsignedLong_m35177115 (RuntimeObject * __this /* static, unused */, String_t* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XQueryConvert_StringToUnsignedLong_m35177115_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(XmlConvert_t1981561327_il2cpp_TypeInfo_var);
		uint64_t L_1 = XmlConvert_ToUInt64_m4076754168(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Decimal_t2948259380_il2cpp_TypeInfo_var);
		Decimal_t2948259380  L_2 = Decimal_op_Implicit_m2299919277(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Int32 System.Xml.XQueryConvert::StringToUnsignedShort(System.String)
extern "C" IL2CPP_METHOD_ATTR int32_t XQueryConvert_StringToUnsignedShort_m428057413 (RuntimeObject * __this /* static, unused */, String_t* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XQueryConvert_StringToUnsignedShort_m428057413_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(XmlConvert_t1981561327_il2cpp_TypeInfo_var);
		uint16_t L_1 = XmlConvert_ToUInt16_m928332189(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.TimeSpan System.Xml.XQueryConvert::StringToYearMonthDuration(System.String)
extern "C" IL2CPP_METHOD_ATTR TimeSpan_t881159249  XQueryConvert_StringToYearMonthDuration_m1747272231 (RuntimeObject * __this /* static, unused */, String_t* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XQueryConvert_StringToYearMonthDuration_m1747272231_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(XmlConvert_t1981561327_il2cpp_TypeInfo_var);
		TimeSpan_t881159249  L_1 = XmlConvert_ToTimeSpan_m349710467(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
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
// System.Void System.Xml.Xsl.NoOperationDebugger::.ctor()
extern "C" IL2CPP_METHOD_ATTR void NoOperationDebugger__ctor_m556574875 (NoOperationDebugger_t2873281971 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.Xsl.NoOperationDebugger::OnCompile(System.Xml.XPath.XPathNavigator)
extern "C" IL2CPP_METHOD_ATTR void NoOperationDebugger_OnCompile_m125833800 (NoOperationDebugger_t2873281971 * __this, XPathNavigator_t787956054 * ___input0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void System.Xml.Xsl.NoOperationDebugger::OnExecute(System.Xml.XPath.XPathNodeIterator,System.Xml.XPath.XPathNavigator,System.Xml.Xsl.XsltContext)
extern "C" IL2CPP_METHOD_ATTR void NoOperationDebugger_OnExecute_m2925788510 (NoOperationDebugger_t2873281971 * __this, XPathNodeIterator_t3667290188 * ___currentNodeset0, XPathNavigator_t787956054 * ___style1, XsltContext_t2039362735 * ___context2, const RuntimeMethod* method)
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
// System.Void System.Xml.Xsl.SimpleXsltDebugger::.ctor()
extern "C" IL2CPP_METHOD_ATTR void SimpleXsltDebugger__ctor_m2585114588 (SimpleXsltDebugger_t937136423 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.Xsl.SimpleXsltDebugger::OnCompile(System.Xml.XPath.XPathNavigator)
extern "C" IL2CPP_METHOD_ATTR void SimpleXsltDebugger_OnCompile_m97699206 (SimpleXsltDebugger_t937136423 * __this, XPathNavigator_t787956054 * ___style0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimpleXsltDebugger_OnCompile_m97699206_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Console_t3208230065_il2cpp_TypeInfo_var);
		Console_Write_m3466945868(NULL /*static, unused*/, _stringLiteral2753931770, /*hidden argument*/NULL);
		XPathNavigator_t787956054 * L_0 = ___style0;
		SimpleXsltDebugger_PrintXPathNavigator_m3059154787(__this, L_0, /*hidden argument*/NULL);
		Console_WriteLine_m3341094494(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.Xsl.SimpleXsltDebugger::OnExecute(System.Xml.XPath.XPathNodeIterator,System.Xml.XPath.XPathNavigator,System.Xml.Xsl.XsltContext)
extern "C" IL2CPP_METHOD_ATTR void SimpleXsltDebugger_OnExecute_m1306735706 (SimpleXsltDebugger_t937136423 * __this, XPathNodeIterator_t3667290188 * ___currentNodeSet0, XPathNavigator_t787956054 * ___style1, XsltContext_t2039362735 * ___xsltContext2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimpleXsltDebugger_OnExecute_m1306735706_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Console_t3208230065_il2cpp_TypeInfo_var);
		Console_Write_m3466945868(NULL /*static, unused*/, _stringLiteral434176978, /*hidden argument*/NULL);
		XPathNavigator_t787956054 * L_0 = ___style1;
		SimpleXsltDebugger_PrintXPathNavigator_m3059154787(__this, L_0, /*hidden argument*/NULL);
		XPathNodeIterator_t3667290188 * L_1 = ___currentNodeSet0;
		XPathNodeIterator_t3667290188 * L_2 = ___currentNodeSet0;
		NullCheck(L_2);
		Type_t * L_3 = Object_GetType_m88164663(L_2, /*hidden argument*/NULL);
		XsltContext_t2039362735 * L_4 = ___xsltContext2;
		Console_WriteLine_m2144370159(NULL /*static, unused*/, _stringLiteral985931992, L_1, L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.Xsl.SimpleXsltDebugger::PrintXPathNavigator(System.Xml.XPath.XPathNavigator)
extern "C" IL2CPP_METHOD_ATTR void SimpleXsltDebugger_PrintXPathNavigator_m3059154787 (SimpleXsltDebugger_t937136423 * __this, XPathNavigator_t787956054 * ___nav0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimpleXsltDebugger_PrintXPathNavigator_m3059154787_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	String_t* G_B6_0 = NULL;
	String_t* G_B5_0 = NULL;
	int32_t G_B7_0 = 0;
	String_t* G_B7_1 = NULL;
	RuntimeObject * G_B9_0 = NULL;
	String_t* G_B9_1 = NULL;
	RuntimeObject * G_B8_0 = NULL;
	String_t* G_B8_1 = NULL;
	int32_t G_B10_0 = 0;
	RuntimeObject * G_B10_1 = NULL;
	String_t* G_B10_2 = NULL;
	{
		XPathNavigator_t787956054 * L_0 = ___nav0;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IXmlLineInfo_t2353988607_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		NullCheck(L_2);
		bool L_3 = InterfaceFuncInvoker0< bool >::Invoke(2 /* System.Boolean System.Xml.IXmlLineInfo::HasLineInfo() */, IXmlLineInfo_t2353988607_il2cpp_TypeInfo_var, L_2);
		if (!L_3)
		{
			goto IL_0020;
		}
	}
	{
		RuntimeObject* L_4 = V_0;
		V_1 = L_4;
		RuntimeObject* L_5 = V_1;
		G_B4_0 = L_5;
		goto IL_0021;
	}

IL_0020:
	{
		G_B4_0 = ((RuntimeObject*)(NULL));
	}

IL_0021:
	{
		V_0 = G_B4_0;
		RuntimeObject* L_6 = V_0;
		G_B5_0 = _stringLiteral2594472939;
		if (!L_6)
		{
			G_B6_0 = _stringLiteral2594472939;
			goto IL_0038;
		}
	}
	{
		RuntimeObject* L_7 = V_0;
		NullCheck(L_7);
		int32_t L_8 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Xml.IXmlLineInfo::get_LineNumber() */, IXmlLineInfo_t2353988607_il2cpp_TypeInfo_var, L_7);
		G_B7_0 = L_8;
		G_B7_1 = G_B5_0;
		goto IL_0039;
	}

IL_0038:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
	}

IL_0039:
	{
		int32_t L_9 = G_B7_0;
		RuntimeObject * L_10 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_9);
		RuntimeObject* L_11 = V_0;
		G_B8_0 = L_10;
		G_B8_1 = G_B7_1;
		if (!L_11)
		{
			G_B9_0 = L_10;
			G_B9_1 = G_B7_1;
			goto IL_004f;
		}
	}
	{
		RuntimeObject* L_12 = V_0;
		NullCheck(L_12);
		int32_t L_13 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Xml.IXmlLineInfo::get_LinePosition() */, IXmlLineInfo_t2353988607_il2cpp_TypeInfo_var, L_12);
		G_B10_0 = L_13;
		G_B10_1 = G_B8_0;
		G_B10_2 = G_B8_1;
		goto IL_0050;
	}

IL_004f:
	{
		G_B10_0 = 0;
		G_B10_1 = G_B9_0;
		G_B10_2 = G_B9_1;
	}

IL_0050:
	{
		int32_t L_14 = G_B10_0;
		RuntimeObject * L_15 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_14);
		XPathNavigator_t787956054 * L_16 = ___nav0;
		NullCheck(L_16);
		String_t* L_17 = VirtFuncInvoker0< String_t* >::Invoke(27 /* System.String System.Xml.XPath.XPathNavigator::get_Name() */, L_16);
		IL2CPP_RUNTIME_CLASS_INIT(Console_t3208230065_il2cpp_TypeInfo_var);
		Console_Write_m4272738233(NULL /*static, unused*/, G_B10_2, G_B10_1, L_15, L_17, /*hidden argument*/NULL);
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
// System.Void System.Xml.Xsl.XslCompiledTransform::.ctor()
extern "C" IL2CPP_METHOD_ATTR void XslCompiledTransform__ctor_m1407355813 (XslCompiledTransform_t1831779368 * __this, const RuntimeMethod* method)
{
	{
		XslCompiledTransform__ctor_m758478083(__this, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.Xsl.XslCompiledTransform::.ctor(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void XslCompiledTransform__ctor_m758478083 (XslCompiledTransform_t1831779368 * __this, bool ___enableDebug0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XslCompiledTransform__ctor_m758478083_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		XmlWriterSettings_t3314986516 * L_0 = (XmlWriterSettings_t3314986516 *)il2cpp_codegen_object_new(XmlWriterSettings_t3314986516_il2cpp_TypeInfo_var);
		XmlWriterSettings__ctor_m2465852079(L_0, /*hidden argument*/NULL);
		__this->set_output_settings_3(L_0);
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		bool L_1 = ___enableDebug0;
		__this->set_enable_debug_0(L_1);
		bool L_2 = __this->get_enable_debug_0();
		if (!L_2)
		{
			goto IL_002e;
		}
	}
	{
		NoOperationDebugger_t2873281971 * L_3 = (NoOperationDebugger_t2873281971 *)il2cpp_codegen_object_new(NoOperationDebugger_t2873281971_il2cpp_TypeInfo_var);
		NoOperationDebugger__ctor_m556574875(L_3, /*hidden argument*/NULL);
		__this->set_debugger_1(L_3);
	}

IL_002e:
	{
		XmlWriterSettings_t3314986516 * L_4 = __this->get_output_settings_3();
		NullCheck(L_4);
		XmlWriterSettings_set_ConformanceLevel_m2379836262(L_4, 1, /*hidden argument*/NULL);
		return;
	}
}
// System.Xml.XmlWriterSettings System.Xml.Xsl.XslCompiledTransform::get_OutputSettings()
extern "C" IL2CPP_METHOD_ATTR XmlWriterSettings_t3314986516 * XslCompiledTransform_get_OutputSettings_m3268509385 (XslCompiledTransform_t1831779368 * __this, const RuntimeMethod* method)
{
	{
		XmlWriterSettings_t3314986516 * L_0 = __this->get_output_settings_3();
		return L_0;
	}
}
// System.Void System.Xml.Xsl.XslCompiledTransform::Transform(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void XslCompiledTransform_Transform_m3681608 (XslCompiledTransform_t1831779368 * __this, String_t* ___inputfile0, String_t* ___outputfile1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XslCompiledTransform_Transform_m3681608_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Stream_t1273022909 * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		String_t* L_0 = ___outputfile1;
		FileStream_t4292183065 * L_1 = File_Create_m2207667142(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		String_t* L_2 = ___inputfile0;
		XPathDocument_t1673143697 * L_3 = (XPathDocument_t1673143697 *)il2cpp_codegen_object_new(XPathDocument_t1673143697_il2cpp_TypeInfo_var);
		XPathDocument__ctor_m3635034092(L_3, L_2, 2, /*hidden argument*/NULL);
		Stream_t1273022909 * L_4 = V_0;
		XslCompiledTransform_Transform_m393856666(__this, L_3, (XsltArgumentList_t741251601 *)NULL, L_4, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x28, FINALLY_001b);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_001b;
	}

FINALLY_001b:
	{ // begin finally (depth: 1)
		{
			Stream_t1273022909 * L_5 = V_0;
			if (!L_5)
			{
				goto IL_0027;
			}
		}

IL_0021:
		{
			Stream_t1273022909 * L_6 = V_0;
			NullCheck(L_6);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_6);
		}

IL_0027:
		{
			IL2CPP_END_FINALLY(27)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(27)
	{
		IL2CPP_JUMP_TBL(0x28, IL_0028)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0028:
	{
		return;
	}
}
// System.Void System.Xml.Xsl.XslCompiledTransform::Transform(System.String,System.Xml.XmlWriter)
extern "C" IL2CPP_METHOD_ATTR void XslCompiledTransform_Transform_m3937380205 (XslCompiledTransform_t1831779368 * __this, String_t* ___inputfile0, XmlWriter_t127905479 * ___output1, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___inputfile0;
		XmlWriter_t127905479 * L_1 = ___output1;
		XslCompiledTransform_Transform_m421172798(__this, L_0, (XsltArgumentList_t741251601 *)NULL, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.Xsl.XslCompiledTransform::Transform(System.String,System.Xml.Xsl.XsltArgumentList,System.IO.Stream)
extern "C" IL2CPP_METHOD_ATTR void XslCompiledTransform_Transform_m1218573648 (XslCompiledTransform_t1831779368 * __this, String_t* ___inputfile0, XsltArgumentList_t741251601 * ___args1, Stream_t1273022909 * ___output2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XslCompiledTransform_Transform_m1218573648_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___inputfile0;
		XPathDocument_t1673143697 * L_1 = (XPathDocument_t1673143697 *)il2cpp_codegen_object_new(XPathDocument_t1673143697_il2cpp_TypeInfo_var);
		XPathDocument__ctor_m3635034092(L_1, L_0, 2, /*hidden argument*/NULL);
		XsltArgumentList_t741251601 * L_2 = ___args1;
		Stream_t1273022909 * L_3 = ___output2;
		XslCompiledTransform_Transform_m393856666(__this, L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.Xsl.XslCompiledTransform::Transform(System.String,System.Xml.Xsl.XsltArgumentList,System.IO.TextWriter)
extern "C" IL2CPP_METHOD_ATTR void XslCompiledTransform_Transform_m281984698 (XslCompiledTransform_t1831779368 * __this, String_t* ___inputfile0, XsltArgumentList_t741251601 * ___args1, TextWriter_t3478189236 * ___output2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XslCompiledTransform_Transform_m281984698_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___inputfile0;
		XPathDocument_t1673143697 * L_1 = (XPathDocument_t1673143697 *)il2cpp_codegen_object_new(XPathDocument_t1673143697_il2cpp_TypeInfo_var);
		XPathDocument__ctor_m3635034092(L_1, L_0, 2, /*hidden argument*/NULL);
		XsltArgumentList_t741251601 * L_2 = ___args1;
		TextWriter_t3478189236 * L_3 = ___output2;
		XslCompiledTransform_Transform_m4009940777(__this, L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.Xsl.XslCompiledTransform::Transform(System.String,System.Xml.Xsl.XsltArgumentList,System.Xml.XmlWriter)
extern "C" IL2CPP_METHOD_ATTR void XslCompiledTransform_Transform_m421172798 (XslCompiledTransform_t1831779368 * __this, String_t* ___inputfile0, XsltArgumentList_t741251601 * ___args1, XmlWriter_t127905479 * ___output2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XslCompiledTransform_Transform_m421172798_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___inputfile0;
		XPathDocument_t1673143697 * L_1 = (XPathDocument_t1673143697 *)il2cpp_codegen_object_new(XPathDocument_t1673143697_il2cpp_TypeInfo_var);
		XPathDocument__ctor_m3635034092(L_1, L_0, 2, /*hidden argument*/NULL);
		XsltArgumentList_t741251601 * L_2 = ___args1;
		XmlWriter_t127905479 * L_3 = ___output2;
		XslCompiledTransform_Transform_m606404611(__this, L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.Xsl.XslCompiledTransform::Transform(System.Xml.XmlReader,System.Xml.XmlWriter)
extern "C" IL2CPP_METHOD_ATTR void XslCompiledTransform_Transform_m3220146577 (XslCompiledTransform_t1831779368 * __this, XmlReader_t3121518892 * ___reader0, XmlWriter_t127905479 * ___output1, const RuntimeMethod* method)
{
	{
		XmlReader_t3121518892 * L_0 = ___reader0;
		XmlWriter_t127905479 * L_1 = ___output1;
		XslCompiledTransform_Transform_m3704894601(__this, L_0, (XsltArgumentList_t741251601 *)NULL, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.Xsl.XslCompiledTransform::Transform(System.Xml.XmlReader,System.Xml.Xsl.XsltArgumentList,System.IO.Stream)
extern "C" IL2CPP_METHOD_ATTR void XslCompiledTransform_Transform_m1435012811 (XslCompiledTransform_t1831779368 * __this, XmlReader_t3121518892 * ___reader0, XsltArgumentList_t741251601 * ___args1, Stream_t1273022909 * ___output2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XslCompiledTransform_Transform_m1435012811_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		XmlReader_t3121518892 * L_0 = ___reader0;
		XPathDocument_t1673143697 * L_1 = (XPathDocument_t1673143697 *)il2cpp_codegen_object_new(XPathDocument_t1673143697_il2cpp_TypeInfo_var);
		XPathDocument__ctor_m3434295591(L_1, L_0, 2, /*hidden argument*/NULL);
		XsltArgumentList_t741251601 * L_2 = ___args1;
		Stream_t1273022909 * L_3 = ___output2;
		XslCompiledTransform_Transform_m393856666(__this, L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.Xsl.XslCompiledTransform::Transform(System.Xml.XmlReader,System.Xml.Xsl.XsltArgumentList,System.IO.TextWriter)
extern "C" IL2CPP_METHOD_ATTR void XslCompiledTransform_Transform_m745111606 (XslCompiledTransform_t1831779368 * __this, XmlReader_t3121518892 * ___reader0, XsltArgumentList_t741251601 * ___args1, TextWriter_t3478189236 * ___output2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XslCompiledTransform_Transform_m745111606_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		XmlReader_t3121518892 * L_0 = ___reader0;
		XPathDocument_t1673143697 * L_1 = (XPathDocument_t1673143697 *)il2cpp_codegen_object_new(XPathDocument_t1673143697_il2cpp_TypeInfo_var);
		XPathDocument__ctor_m3434295591(L_1, L_0, 2, /*hidden argument*/NULL);
		XsltArgumentList_t741251601 * L_2 = ___args1;
		TextWriter_t3478189236 * L_3 = ___output2;
		XslCompiledTransform_Transform_m4009940777(__this, L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.Xsl.XslCompiledTransform::Transform(System.Xml.XmlReader,System.Xml.Xsl.XsltArgumentList,System.Xml.XmlWriter)
extern "C" IL2CPP_METHOD_ATTR void XslCompiledTransform_Transform_m3704894601 (XslCompiledTransform_t1831779368 * __this, XmlReader_t3121518892 * ___reader0, XsltArgumentList_t741251601 * ___args1, XmlWriter_t127905479 * ___output2, const RuntimeMethod* method)
{
	{
		XmlReader_t3121518892 * L_0 = ___reader0;
		XsltArgumentList_t741251601 * L_1 = ___args1;
		XmlWriter_t127905479 * L_2 = ___output2;
		XslCompiledTransform_Transform_m2784886948(__this, L_0, L_1, L_2, (XmlResolver_t626023767 *)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.Xsl.XslCompiledTransform::Transform(System.Xml.XPath.IXPathNavigable,System.Xml.Xsl.XsltArgumentList,System.IO.TextWriter)
extern "C" IL2CPP_METHOD_ATTR void XslCompiledTransform_Transform_m4009940777 (XslCompiledTransform_t1831779368 * __this, RuntimeObject* ___input0, XsltArgumentList_t741251601 * ___args1, TextWriter_t3478189236 * ___output2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XslCompiledTransform_Transform_m4009940777_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___input0;
		NullCheck(L_0);
		XPathNavigator_t787956054 * L_1 = InterfaceFuncInvoker0< XPathNavigator_t787956054 * >::Invoke(0 /* System.Xml.XPath.XPathNavigator System.Xml.XPath.IXPathNavigable::CreateNavigator() */, IXPathNavigable_t2716156786_il2cpp_TypeInfo_var, L_0);
		XsltArgumentList_t741251601 * L_2 = ___args1;
		TextWriter_t3478189236 * L_3 = ___output2;
		XslCompiledTransform_Transform_m3052639314(__this, L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.Xsl.XslCompiledTransform::Transform(System.Xml.XPath.IXPathNavigable,System.Xml.Xsl.XsltArgumentList,System.IO.Stream)
extern "C" IL2CPP_METHOD_ATTR void XslCompiledTransform_Transform_m393856666 (XslCompiledTransform_t1831779368 * __this, RuntimeObject* ___input0, XsltArgumentList_t741251601 * ___args1, Stream_t1273022909 * ___output2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XslCompiledTransform_Transform_m393856666_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___input0;
		NullCheck(L_0);
		XPathNavigator_t787956054 * L_1 = InterfaceFuncInvoker0< XPathNavigator_t787956054 * >::Invoke(0 /* System.Xml.XPath.XPathNavigator System.Xml.XPath.IXPathNavigable::CreateNavigator() */, IXPathNavigable_t2716156786_il2cpp_TypeInfo_var, L_0);
		XsltArgumentList_t741251601 * L_2 = ___args1;
		Stream_t1273022909 * L_3 = ___output2;
		XslCompiledTransform_Transform_m4274984391(__this, L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.Xsl.XslCompiledTransform::Transform(System.Xml.XPath.IXPathNavigable,System.Xml.XmlWriter)
extern "C" IL2CPP_METHOD_ATTR void XslCompiledTransform_Transform_m2791360041 (XslCompiledTransform_t1831779368 * __this, RuntimeObject* ___input0, XmlWriter_t127905479 * ___output1, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___input0;
		XmlWriter_t127905479 * L_1 = ___output1;
		XslCompiledTransform_Transform_m606404611(__this, L_0, (XsltArgumentList_t741251601 *)NULL, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.Xsl.XslCompiledTransform::Transform(System.Xml.XPath.IXPathNavigable,System.Xml.Xsl.XsltArgumentList,System.Xml.XmlWriter)
extern "C" IL2CPP_METHOD_ATTR void XslCompiledTransform_Transform_m606404611 (XslCompiledTransform_t1831779368 * __this, RuntimeObject* ___input0, XsltArgumentList_t741251601 * ___args1, XmlWriter_t127905479 * ___output2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XslCompiledTransform_Transform_m606404611_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___input0;
		NullCheck(L_0);
		XPathNavigator_t787956054 * L_1 = InterfaceFuncInvoker0< XPathNavigator_t787956054 * >::Invoke(0 /* System.Xml.XPath.XPathNavigator System.Xml.XPath.IXPathNavigable::CreateNavigator() */, IXPathNavigable_t2716156786_il2cpp_TypeInfo_var, L_0);
		XsltArgumentList_t741251601 * L_2 = ___args1;
		XmlWriter_t127905479 * L_3 = ___output2;
		XslCompiledTransform_Transform_m1013616809(__this, L_1, L_2, L_3, (XmlResolver_t626023767 *)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.Xsl.XslCompiledTransform::Transform(System.Xml.XmlReader,System.Xml.Xsl.XsltArgumentList,System.Xml.XmlWriter,System.Xml.XmlResolver)
extern "C" IL2CPP_METHOD_ATTR void XslCompiledTransform_Transform_m2784886948 (XslCompiledTransform_t1831779368 * __this, XmlReader_t3121518892 * ___input0, XsltArgumentList_t741251601 * ___args1, XmlWriter_t127905479 * ___output2, XmlResolver_t626023767 * ___resolver3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XslCompiledTransform_Transform_m2784886948_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		XmlReader_t3121518892 * L_0 = ___input0;
		XPathDocument_t1673143697 * L_1 = (XPathDocument_t1673143697 *)il2cpp_codegen_object_new(XPathDocument_t1673143697_il2cpp_TypeInfo_var);
		XPathDocument__ctor_m3434295591(L_1, L_0, 2, /*hidden argument*/NULL);
		NullCheck(L_1);
		XPathNavigator_t787956054 * L_2 = XPathDocument_CreateNavigator_m1454500353(L_1, /*hidden argument*/NULL);
		XsltArgumentList_t741251601 * L_3 = ___args1;
		XmlWriter_t127905479 * L_4 = ___output2;
		XmlResolver_t626023767 * L_5 = ___resolver3;
		XslCompiledTransform_Transform_m1013616809(__this, L_2, L_3, L_4, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.Xsl.XslCompiledTransform::Transform(System.Xml.XPath.XPathNavigator,System.Xml.Xsl.XsltArgumentList,System.Xml.XmlWriter,System.Xml.XmlResolver)
extern "C" IL2CPP_METHOD_ATTR void XslCompiledTransform_Transform_m1013616809 (XslCompiledTransform_t1831779368 * __this, XPathNavigator_t787956054 * ___input0, XsltArgumentList_t741251601 * ___args1, XmlWriter_t127905479 * ___output2, XmlResolver_t626023767 * ___resolver3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XslCompiledTransform_Transform_m1013616809_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Outputter_t889105973 * V_0 = NULL;
	{
		CompiledStylesheet_t759457236 * L_0 = __this->get_s_2();
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		XsltException_t1876063340 * L_1 = (XsltException_t1876063340 *)il2cpp_codegen_object_new(XsltException_t1876063340_il2cpp_TypeInfo_var);
		XsltException__ctor_m2928735883(L_1, _stringLiteral1764791452, (Exception_t *)NULL, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1,XslCompiledTransform_Transform_m1013616809_RuntimeMethod_var);
	}

IL_0017:
	{
		XmlWriter_t127905479 * L_2 = ___output2;
		CompiledStylesheet_t759457236 * L_3 = __this->get_s_2();
		NullCheck(L_3);
		Hashtable_t1853889766 * L_4 = CompiledStylesheet_get_Outputs_m1025770811(L_3, /*hidden argument*/NULL);
		GenericOutputter_t1694878872 * L_5 = (GenericOutputter_t1694878872 *)il2cpp_codegen_object_new(GenericOutputter_t1694878872_il2cpp_TypeInfo_var);
		GenericOutputter__ctor_m1355938407(L_5, L_2, L_4, (Encoding_t1523322056 *)NULL, /*hidden argument*/NULL);
		V_0 = L_5;
		CompiledStylesheet_t759457236 * L_6 = __this->get_s_2();
		RuntimeObject * L_7 = __this->get_debugger_1();
		XslTransformProcessor_t3405861191 * L_8 = (XslTransformProcessor_t3405861191 *)il2cpp_codegen_object_new(XslTransformProcessor_t3405861191_il2cpp_TypeInfo_var);
		XslTransformProcessor__ctor_m2824512103(L_8, L_6, L_7, /*hidden argument*/NULL);
		XPathNavigator_t787956054 * L_9 = ___input0;
		Outputter_t889105973 * L_10 = V_0;
		XsltArgumentList_t741251601 * L_11 = ___args1;
		XmlResolver_t626023767 * L_12 = ___resolver3;
		NullCheck(L_8);
		XslTransformProcessor_Process_m1084818256(L_8, L_9, L_10, L_11, L_12, /*hidden argument*/NULL);
		XmlWriter_t127905479 * L_13 = ___output2;
		NullCheck(L_13);
		VirtActionInvoker0::Invoke(11 /* System.Void System.Xml.XmlWriter::Flush() */, L_13);
		return;
	}
}
// System.Void System.Xml.Xsl.XslCompiledTransform::Transform(System.Xml.XPath.XPathNavigator,System.Xml.Xsl.XsltArgumentList,System.IO.Stream)
extern "C" IL2CPP_METHOD_ATTR void XslCompiledTransform_Transform_m4274984391 (XslCompiledTransform_t1831779368 * __this, XPathNavigator_t787956054 * ___input0, XsltArgumentList_t741251601 * ___args1, Stream_t1273022909 * ___output2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XslCompiledTransform_Transform_m4274984391_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	XslOutput_t472631936 * V_0 = NULL;
	{
		CompiledStylesheet_t759457236 * L_0 = __this->get_s_2();
		NullCheck(L_0);
		Hashtable_t1853889766 * L_1 = CompiledStylesheet_get_Outputs_m1025770811(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		NullCheck(L_1);
		RuntimeObject * L_3 = VirtFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(30 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_1, L_2);
		V_0 = ((XslOutput_t472631936 *)CastclassClass((RuntimeObject*)L_3, XslOutput_t472631936_il2cpp_TypeInfo_var));
		XPathNavigator_t787956054 * L_4 = ___input0;
		XsltArgumentList_t741251601 * L_5 = ___args1;
		Stream_t1273022909 * L_6 = ___output2;
		XslOutput_t472631936 * L_7 = V_0;
		NullCheck(L_7);
		Encoding_t1523322056 * L_8 = XslOutput_get_Encoding_m1490244604(L_7, /*hidden argument*/NULL);
		StreamWriter_t1266378904 * L_9 = (StreamWriter_t1266378904 *)il2cpp_codegen_object_new(StreamWriter_t1266378904_il2cpp_TypeInfo_var);
		StreamWriter__ctor_m2310301218(L_9, L_6, L_8, /*hidden argument*/NULL);
		XslCompiledTransform_Transform_m3052639314(__this, L_4, L_5, L_9, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.Xsl.XslCompiledTransform::Transform(System.Xml.XPath.XPathNavigator,System.Xml.Xsl.XsltArgumentList,System.IO.TextWriter)
extern "C" IL2CPP_METHOD_ATTR void XslCompiledTransform_Transform_m3052639314 (XslCompiledTransform_t1831779368 * __this, XPathNavigator_t787956054 * ___input0, XsltArgumentList_t741251601 * ___args1, TextWriter_t3478189236 * ___output2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XslCompiledTransform_Transform_m3052639314_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Outputter_t889105973 * V_0 = NULL;
	{
		CompiledStylesheet_t759457236 * L_0 = __this->get_s_2();
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		XsltException_t1876063340 * L_1 = (XsltException_t1876063340 *)il2cpp_codegen_object_new(XsltException_t1876063340_il2cpp_TypeInfo_var);
		XsltException__ctor_m2928735883(L_1, _stringLiteral1764791452, (Exception_t *)NULL, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1,XslCompiledTransform_Transform_m3052639314_RuntimeMethod_var);
	}

IL_0017:
	{
		TextWriter_t3478189236 * L_2 = ___output2;
		CompiledStylesheet_t759457236 * L_3 = __this->get_s_2();
		NullCheck(L_3);
		Hashtable_t1853889766 * L_4 = CompiledStylesheet_get_Outputs_m1025770811(L_3, /*hidden argument*/NULL);
		TextWriter_t3478189236 * L_5 = ___output2;
		NullCheck(L_5);
		Encoding_t1523322056 * L_6 = VirtFuncInvoker0< Encoding_t1523322056 * >::Invoke(5 /* System.Text.Encoding System.IO.TextWriter::get_Encoding() */, L_5);
		GenericOutputter_t1694878872 * L_7 = (GenericOutputter_t1694878872 *)il2cpp_codegen_object_new(GenericOutputter_t1694878872_il2cpp_TypeInfo_var);
		GenericOutputter__ctor_m2516974096(L_7, L_2, L_4, L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		CompiledStylesheet_t759457236 * L_8 = __this->get_s_2();
		RuntimeObject * L_9 = __this->get_debugger_1();
		XslTransformProcessor_t3405861191 * L_10 = (XslTransformProcessor_t3405861191 *)il2cpp_codegen_object_new(XslTransformProcessor_t3405861191_il2cpp_TypeInfo_var);
		XslTransformProcessor__ctor_m2824512103(L_10, L_8, L_9, /*hidden argument*/NULL);
		XPathNavigator_t787956054 * L_11 = ___input0;
		Outputter_t889105973 * L_12 = V_0;
		XsltArgumentList_t741251601 * L_13 = ___args1;
		NullCheck(L_10);
		XslTransformProcessor_Process_m1084818256(L_10, L_11, L_12, L_13, (XmlResolver_t626023767 *)NULL, /*hidden argument*/NULL);
		Outputter_t889105973 * L_14 = V_0;
		NullCheck(L_14);
		VirtActionInvoker0::Invoke(14 /* System.Void Mono.Xml.Xsl.Outputter::Done() */, L_14);
		TextWriter_t3478189236 * L_15 = ___output2;
		NullCheck(L_15);
		VirtActionInvoker0::Invoke(9 /* System.Void System.IO.TextWriter::Flush() */, L_15);
		return;
	}
}
// System.Xml.XmlReader System.Xml.Xsl.XslCompiledTransform::GetXmlReader(System.String)
extern "C" IL2CPP_METHOD_ATTR XmlReader_t3121518892 * XslCompiledTransform_GetXmlReader_m1245545288 (XslCompiledTransform_t1831779368 * __this, String_t* ___url0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XslCompiledTransform_GetXmlReader_m1245545288_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	XmlResolver_t626023767 * V_0 = NULL;
	Uri_t100236324 * V_1 = NULL;
	Stream_t1273022909 * V_2 = NULL;
	XmlTextReader_t4233384356 * V_3 = NULL;
	XmlValidatingReader_t1719295192 * V_4 = NULL;
	{
		XmlUrlResolver_t817895037 * L_0 = (XmlUrlResolver_t817895037 *)il2cpp_codegen_object_new(XmlUrlResolver_t817895037_il2cpp_TypeInfo_var);
		XmlUrlResolver__ctor_m1338399436(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		XmlResolver_t626023767 * L_1 = V_0;
		String_t* L_2 = ___url0;
		NullCheck(L_1);
		Uri_t100236324 * L_3 = VirtFuncInvoker2< Uri_t100236324 *, Uri_t100236324 *, String_t* >::Invoke(6 /* System.Uri System.Xml.XmlResolver::ResolveUri(System.Uri,System.String) */, L_1, (Uri_t100236324 *)NULL, L_2);
		V_1 = L_3;
		XmlResolver_t626023767 * L_4 = V_0;
		Uri_t100236324 * L_5 = V_1;
		RuntimeTypeHandle_t3027515415  L_6 = { reinterpret_cast<intptr_t> (Stream_t1273022909_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_7 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		NullCheck(L_4);
		RuntimeObject * L_8 = VirtFuncInvoker3< RuntimeObject *, Uri_t100236324 *, String_t*, Type_t * >::Invoke(5 /* System.Object System.Xml.XmlResolver::GetEntity(System.Uri,System.String,System.Type) */, L_4, L_5, (String_t*)NULL, L_7);
		V_2 = ((Stream_t1273022909 *)IsInstClass((RuntimeObject*)L_8, Stream_t1273022909_il2cpp_TypeInfo_var));
		Uri_t100236324 * L_9 = V_1;
		NullCheck(L_9);
		String_t* L_10 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Uri::ToString() */, L_9);
		Stream_t1273022909 * L_11 = V_2;
		XmlTextReader_t4233384356 * L_12 = (XmlTextReader_t4233384356 *)il2cpp_codegen_object_new(XmlTextReader_t4233384356_il2cpp_TypeInfo_var);
		XmlTextReader__ctor_m1114649521(L_12, L_10, L_11, /*hidden argument*/NULL);
		V_3 = L_12;
		XmlTextReader_t4233384356 * L_13 = V_3;
		XmlResolver_t626023767 * L_14 = V_0;
		NullCheck(L_13);
		XmlTextReader_set_XmlResolver_m1445354776(L_13, L_14, /*hidden argument*/NULL);
		XmlTextReader_t4233384356 * L_15 = V_3;
		XmlValidatingReader_t1719295192 * L_16 = (XmlValidatingReader_t1719295192 *)il2cpp_codegen_object_new(XmlValidatingReader_t1719295192_il2cpp_TypeInfo_var);
		XmlValidatingReader__ctor_m746074126(L_16, L_15, /*hidden argument*/NULL);
		V_4 = L_16;
		XmlValidatingReader_t1719295192 * L_17 = V_4;
		XmlResolver_t626023767 * L_18 = V_0;
		NullCheck(L_17);
		XmlValidatingReader_set_XmlResolver_m3039624282(L_17, L_18, /*hidden argument*/NULL);
		XmlValidatingReader_t1719295192 * L_19 = V_4;
		NullCheck(L_19);
		XmlValidatingReader_set_ValidationType_m3850545770(L_19, 0, /*hidden argument*/NULL);
		XmlValidatingReader_t1719295192 * L_20 = V_4;
		return L_20;
	}
}
// System.Void System.Xml.Xsl.XslCompiledTransform::Load(System.String)
extern "C" IL2CPP_METHOD_ATTR void XslCompiledTransform_Load_m3048941411 (XslCompiledTransform_t1831779368 * __this, String_t* ___url0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XslCompiledTransform_Load_m3048941411_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	XmlReader_t3121518892 * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		String_t* L_0 = ___url0;
		XmlReader_t3121518892 * L_1 = XslCompiledTransform_GetXmlReader_m1245545288(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		XmlReader_t3121518892 * L_2 = V_0;
		XslCompiledTransform_Load_m3215015174(__this, L_2, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x21, FINALLY_0014);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0014;
	}

FINALLY_0014:
	{ // begin finally (depth: 1)
		{
			XmlReader_t3121518892 * L_3 = V_0;
			if (!L_3)
			{
				goto IL_0020;
			}
		}

IL_001a:
		{
			XmlReader_t3121518892 * L_4 = V_0;
			NullCheck(L_4);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_4);
		}

IL_0020:
		{
			IL2CPP_END_FINALLY(20)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(20)
	{
		IL2CPP_JUMP_TBL(0x21, IL_0021)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0021:
	{
		return;
	}
}
// System.Void System.Xml.Xsl.XslCompiledTransform::Load(System.Xml.XmlReader)
extern "C" IL2CPP_METHOD_ATTR void XslCompiledTransform_Load_m3215015174 (XslCompiledTransform_t1831779368 * __this, XmlReader_t3121518892 * ___stylesheet0, const RuntimeMethod* method)
{
	{
		XmlReader_t3121518892 * L_0 = ___stylesheet0;
		XslCompiledTransform_Load_m2431283482(__this, L_0, (XsltSettings_t3615464394 *)NULL, (XmlResolver_t626023767 *)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.Xsl.XslCompiledTransform::Load(System.Xml.XPath.IXPathNavigable)
extern "C" IL2CPP_METHOD_ATTR void XslCompiledTransform_Load_m4286844072 (XslCompiledTransform_t1831779368 * __this, RuntimeObject* ___stylesheet0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XslCompiledTransform_Load_m4286844072_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___stylesheet0;
		NullCheck(L_0);
		XPathNavigator_t787956054 * L_1 = InterfaceFuncInvoker0< XPathNavigator_t787956054 * >::Invoke(0 /* System.Xml.XPath.XPathNavigator System.Xml.XPath.IXPathNavigable::CreateNavigator() */, IXPathNavigable_t2716156786_il2cpp_TypeInfo_var, L_0);
		XslCompiledTransform_Load_m1324717055(__this, L_1, (XsltSettings_t3615464394 *)NULL, (XmlResolver_t626023767 *)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.Xsl.XslCompiledTransform::Load(System.Xml.XPath.IXPathNavigable,System.Xml.Xsl.XsltSettings,System.Xml.XmlResolver)
extern "C" IL2CPP_METHOD_ATTR void XslCompiledTransform_Load_m1782824559 (XslCompiledTransform_t1831779368 * __this, RuntimeObject* ___stylesheet0, XsltSettings_t3615464394 * ___settings1, XmlResolver_t626023767 * ___resolver2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XslCompiledTransform_Load_m1782824559_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___stylesheet0;
		NullCheck(L_0);
		XPathNavigator_t787956054 * L_1 = InterfaceFuncInvoker0< XPathNavigator_t787956054 * >::Invoke(0 /* System.Xml.XPath.XPathNavigator System.Xml.XPath.IXPathNavigable::CreateNavigator() */, IXPathNavigable_t2716156786_il2cpp_TypeInfo_var, L_0);
		XsltSettings_t3615464394 * L_2 = ___settings1;
		XmlResolver_t626023767 * L_3 = ___resolver2;
		XslCompiledTransform_Load_m1324717055(__this, L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.Xsl.XslCompiledTransform::Load(System.Xml.XmlReader,System.Xml.Xsl.XsltSettings,System.Xml.XmlResolver)
extern "C" IL2CPP_METHOD_ATTR void XslCompiledTransform_Load_m2431283482 (XslCompiledTransform_t1831779368 * __this, XmlReader_t3121518892 * ___stylesheet0, XsltSettings_t3615464394 * ___settings1, XmlResolver_t626023767 * ___resolver2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XslCompiledTransform_Load_m2431283482_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		XmlReader_t3121518892 * L_0 = ___stylesheet0;
		XPathDocument_t1673143697 * L_1 = (XPathDocument_t1673143697 *)il2cpp_codegen_object_new(XPathDocument_t1673143697_il2cpp_TypeInfo_var);
		XPathDocument__ctor_m3434295591(L_1, L_0, 2, /*hidden argument*/NULL);
		NullCheck(L_1);
		XPathNavigator_t787956054 * L_2 = XPathDocument_CreateNavigator_m1454500353(L_1, /*hidden argument*/NULL);
		XsltSettings_t3615464394 * L_3 = ___settings1;
		XmlResolver_t626023767 * L_4 = ___resolver2;
		XslCompiledTransform_Load_m1324717055(__this, L_2, L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.Xsl.XslCompiledTransform::Load(System.String,System.Xml.Xsl.XsltSettings,System.Xml.XmlResolver)
extern "C" IL2CPP_METHOD_ATTR void XslCompiledTransform_Load_m2156443391 (XslCompiledTransform_t1831779368 * __this, String_t* ___stylesheet0, XsltSettings_t3615464394 * ___settings1, XmlResolver_t626023767 * ___resolver2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XslCompiledTransform_Load_m2156443391_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___stylesheet0;
		XPathDocument_t1673143697 * L_1 = (XPathDocument_t1673143697 *)il2cpp_codegen_object_new(XPathDocument_t1673143697_il2cpp_TypeInfo_var);
		XPathDocument__ctor_m3635034092(L_1, L_0, 2, /*hidden argument*/NULL);
		NullCheck(L_1);
		XPathNavigator_t787956054 * L_2 = XPathDocument_CreateNavigator_m1454500353(L_1, /*hidden argument*/NULL);
		XsltSettings_t3615464394 * L_3 = ___settings1;
		XmlResolver_t626023767 * L_4 = ___resolver2;
		XslCompiledTransform_Load_m1324717055(__this, L_2, L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.Xsl.XslCompiledTransform::Load(System.Xml.XPath.XPathNavigator,System.Xml.Xsl.XsltSettings,System.Xml.XmlResolver)
extern "C" IL2CPP_METHOD_ATTR void XslCompiledTransform_Load_m1324717055 (XslCompiledTransform_t1831779368 * __this, XPathNavigator_t787956054 * ___stylesheet0, XsltSettings_t3615464394 * ___settings1, XmlResolver_t626023767 * ___resolver2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XslCompiledTransform_Load_m1324717055_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = __this->get_debugger_1();
		Compiler_t485846590 * L_1 = (Compiler_t485846590 *)il2cpp_codegen_object_new(Compiler_t485846590_il2cpp_TypeInfo_var);
		Compiler__ctor_m2510731679(L_1, L_0, /*hidden argument*/NULL);
		XPathNavigator_t787956054 * L_2 = ___stylesheet0;
		XmlResolver_t626023767 * L_3 = ___resolver2;
		NullCheck(L_1);
		CompiledStylesheet_t759457236 * L_4 = Compiler_Compile_m2130682056(L_1, L_2, L_3, (Evidence_t2008144148 *)NULL, /*hidden argument*/NULL);
		__this->set_s_2(L_4);
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
// System.Void System.Xml.Xsl.XsltArgumentList::.ctor()
extern "C" IL2CPP_METHOD_ATTR void XsltArgumentList__ctor_m612655310 (XsltArgumentList_t741251601 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XsltArgumentList__ctor_m612655310_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		Hashtable_t1853889766 * L_0 = (Hashtable_t1853889766 *)il2cpp_codegen_object_new(Hashtable_t1853889766_il2cpp_TypeInfo_var);
		Hashtable__ctor_m1815022027(L_0, /*hidden argument*/NULL);
		__this->set_extensionObjects_0(L_0);
		Hashtable_t1853889766 * L_1 = (Hashtable_t1853889766 *)il2cpp_codegen_object_new(Hashtable_t1853889766_il2cpp_TypeInfo_var);
		Hashtable__ctor_m1815022027(L_1, /*hidden argument*/NULL);
		__this->set_parameters_1(L_1);
		return;
	}
}
// System.Void System.Xml.Xsl.XsltArgumentList::add_XsltMessageEncountered(System.Xml.Xsl.XsltMessageEncounteredEventHandler)
extern "C" IL2CPP_METHOD_ATTR void XsltArgumentList_add_XsltMessageEncountered_m894901439 (XsltArgumentList_t741251601 * __this, XsltMessageEncounteredEventHandler_t414593873 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XsltArgumentList_add_XsltMessageEncountered_m894901439_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		XsltMessageEncounteredEventHandler_t414593873 * L_0 = __this->get_XsltMessageEncountered_2();
		XsltMessageEncounteredEventHandler_t414593873 * L_1 = ___value0;
		Delegate_t1188392813 * L_2 = Delegate_Combine_m1859655160(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->set_XsltMessageEncountered_2(((XsltMessageEncounteredEventHandler_t414593873 *)CastclassSealed((RuntimeObject*)L_2, XsltMessageEncounteredEventHandler_t414593873_il2cpp_TypeInfo_var)));
		return;
	}
}
// System.Void System.Xml.Xsl.XsltArgumentList::remove_XsltMessageEncountered(System.Xml.Xsl.XsltMessageEncounteredEventHandler)
extern "C" IL2CPP_METHOD_ATTR void XsltArgumentList_remove_XsltMessageEncountered_m3261078315 (XsltArgumentList_t741251601 * __this, XsltMessageEncounteredEventHandler_t414593873 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XsltArgumentList_remove_XsltMessageEncountered_m3261078315_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		XsltMessageEncounteredEventHandler_t414593873 * L_0 = __this->get_XsltMessageEncountered_2();
		XsltMessageEncounteredEventHandler_t414593873 * L_1 = ___value0;
		Delegate_t1188392813 * L_2 = Delegate_Remove_m334097152(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->set_XsltMessageEncountered_2(((XsltMessageEncounteredEventHandler_t414593873 *)CastclassSealed((RuntimeObject*)L_2, XsltMessageEncounteredEventHandler_t414593873_il2cpp_TypeInfo_var)));
		return;
	}
}
// System.Void System.Xml.Xsl.XsltArgumentList::AddExtensionObject(System.String,System.Object)
extern "C" IL2CPP_METHOD_ATTR void XsltArgumentList_AddExtensionObject_m1235730489 (XsltArgumentList_t741251601 * __this, String_t* ___namespaceUri0, RuntimeObject * ___extension1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XsltArgumentList_AddExtensionObject_m1235730489_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___namespaceUri0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentException_t132251570 * L_1 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_1, _stringLiteral121233265, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1,XsltArgumentList_AddExtensionObject_m1235730489_RuntimeMethod_var);
	}

IL_0011:
	{
		String_t* L_2 = ___namespaceUri0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_3 = String_op_Equality_m920492651(NULL /*static, unused*/, L_2, _stringLiteral2111856551, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_002c;
		}
	}
	{
		ArgumentException_t132251570 * L_4 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_4, _stringLiteral2324369574, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4,XsltArgumentList_AddExtensionObject_m1235730489_RuntimeMethod_var);
	}

IL_002c:
	{
		Hashtable_t1853889766 * L_5 = __this->get_extensionObjects_0();
		String_t* L_6 = ___namespaceUri0;
		NullCheck(L_5);
		bool L_7 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(35 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_5, L_6);
		if (!L_7)
		{
			goto IL_0048;
		}
	}
	{
		ArgumentException_t132251570 * L_8 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_8, _stringLiteral3150211581, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8,XsltArgumentList_AddExtensionObject_m1235730489_RuntimeMethod_var);
	}

IL_0048:
	{
		Hashtable_t1853889766 * L_9 = __this->get_extensionObjects_0();
		String_t* L_10 = ___namespaceUri0;
		RuntimeObject * L_11 = ___extension1;
		NullCheck(L_9);
		VirtActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(31 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_9, L_10, L_11);
		return;
	}
}
// System.Void System.Xml.Xsl.XsltArgumentList::AddParam(System.String,System.String,System.Object)
extern "C" IL2CPP_METHOD_ATTR void XsltArgumentList_AddParam_m2716690738 (XsltArgumentList_t741251601 * __this, String_t* ___name0, String_t* ___namespaceUri1, RuntimeObject * ___parameter2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XsltArgumentList_AddParam_m2716690738_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	XmlQualifiedName_t2760654312 * V_0 = NULL;
	{
		String_t* L_0 = ___namespaceUri1;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentException_t132251570 * L_1 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_1, _stringLiteral121233265, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1,XsltArgumentList_AddParam_m2716690738_RuntimeMethod_var);
	}

IL_0011:
	{
		String_t* L_2 = ___namespaceUri1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_3 = String_op_Equality_m920492651(NULL /*static, unused*/, L_2, _stringLiteral2111856551, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_002c;
		}
	}
	{
		ArgumentException_t132251570 * L_4 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_4, _stringLiteral2324369574, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4,XsltArgumentList_AddParam_m2716690738_RuntimeMethod_var);
	}

IL_002c:
	{
		String_t* L_5 = ___name0;
		if (L_5)
		{
			goto IL_003d;
		}
	}
	{
		ArgumentException_t132251570 * L_6 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_6, _stringLiteral2967628286, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6,XsltArgumentList_AddParam_m2716690738_RuntimeMethod_var);
	}

IL_003d:
	{
		String_t* L_7 = ___name0;
		String_t* L_8 = ___namespaceUri1;
		XmlQualifiedName_t2760654312 * L_9 = (XmlQualifiedName_t2760654312 *)il2cpp_codegen_object_new(XmlQualifiedName_t2760654312_il2cpp_TypeInfo_var);
		XmlQualifiedName__ctor_m835061046(L_9, L_7, L_8, /*hidden argument*/NULL);
		V_0 = L_9;
		Hashtable_t1853889766 * L_10 = __this->get_parameters_1();
		XmlQualifiedName_t2760654312 * L_11 = V_0;
		NullCheck(L_10);
		bool L_12 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(35 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_10, L_11);
		if (!L_12)
		{
			goto IL_0061;
		}
	}
	{
		ArgumentException_t132251570 * L_13 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_13, _stringLiteral4077025863, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13,XsltArgumentList_AddParam_m2716690738_RuntimeMethod_var);
	}

IL_0061:
	{
		RuntimeObject * L_14 = ___parameter2;
		RuntimeObject * L_15 = XsltArgumentList_ValidateParam_m2717540126(__this, L_14, /*hidden argument*/NULL);
		___parameter2 = L_15;
		Hashtable_t1853889766 * L_16 = __this->get_parameters_1();
		XmlQualifiedName_t2760654312 * L_17 = V_0;
		RuntimeObject * L_18 = ___parameter2;
		NullCheck(L_16);
		VirtActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(31 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_16, L_17, L_18);
		return;
	}
}
// System.Void System.Xml.Xsl.XsltArgumentList::Clear()
extern "C" IL2CPP_METHOD_ATTR void XsltArgumentList_Clear_m671433716 (XsltArgumentList_t741251601 * __this, const RuntimeMethod* method)
{
	{
		Hashtable_t1853889766 * L_0 = __this->get_extensionObjects_0();
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(34 /* System.Void System.Collections.Hashtable::Clear() */, L_0);
		Hashtable_t1853889766 * L_1 = __this->get_parameters_1();
		NullCheck(L_1);
		VirtActionInvoker0::Invoke(34 /* System.Void System.Collections.Hashtable::Clear() */, L_1);
		return;
	}
}
// System.Object System.Xml.Xsl.XsltArgumentList::GetExtensionObject(System.String)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * XsltArgumentList_GetExtensionObject_m2200005688 (XsltArgumentList_t741251601 * __this, String_t* ___namespaceUri0, const RuntimeMethod* method)
{
	{
		Hashtable_t1853889766 * L_0 = __this->get_extensionObjects_0();
		String_t* L_1 = ___namespaceUri0;
		NullCheck(L_0);
		RuntimeObject * L_2 = VirtFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(30 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_0, L_1);
		return L_2;
	}
}
// System.Object System.Xml.Xsl.XsltArgumentList::GetParam(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * XsltArgumentList_GetParam_m3573250394 (XsltArgumentList_t741251601 * __this, String_t* ___name0, String_t* ___namespaceUri1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XsltArgumentList_GetParam_m3573250394_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	XmlQualifiedName_t2760654312 * V_0 = NULL;
	{
		String_t* L_0 = ___name0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentException_t132251570 * L_1 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_1, _stringLiteral2967628286, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1,XsltArgumentList_GetParam_m3573250394_RuntimeMethod_var);
	}

IL_0011:
	{
		String_t* L_2 = ___name0;
		String_t* L_3 = ___namespaceUri1;
		XmlQualifiedName_t2760654312 * L_4 = (XmlQualifiedName_t2760654312 *)il2cpp_codegen_object_new(XmlQualifiedName_t2760654312_il2cpp_TypeInfo_var);
		XmlQualifiedName__ctor_m835061046(L_4, L_2, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		Hashtable_t1853889766 * L_5 = __this->get_parameters_1();
		XmlQualifiedName_t2760654312 * L_6 = V_0;
		NullCheck(L_5);
		RuntimeObject * L_7 = VirtFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(30 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_5, L_6);
		return L_7;
	}
}
// System.Object System.Xml.Xsl.XsltArgumentList::RemoveExtensionObject(System.String)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * XsltArgumentList_RemoveExtensionObject_m2216945579 (XsltArgumentList_t741251601 * __this, String_t* ___namespaceUri0, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	{
		String_t* L_0 = ___namespaceUri0;
		RuntimeObject * L_1 = XsltArgumentList_GetExtensionObject_m2200005688(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		Hashtable_t1853889766 * L_2 = __this->get_extensionObjects_0();
		String_t* L_3 = ___namespaceUri0;
		NullCheck(L_2);
		VirtActionInvoker1< RuntimeObject * >::Invoke(37 /* System.Void System.Collections.Hashtable::Remove(System.Object) */, L_2, L_3);
		RuntimeObject * L_4 = V_0;
		return L_4;
	}
}
// System.Object System.Xml.Xsl.XsltArgumentList::RemoveParam(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * XsltArgumentList_RemoveParam_m3662225844 (XsltArgumentList_t741251601 * __this, String_t* ___name0, String_t* ___namespaceUri1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XsltArgumentList_RemoveParam_m3662225844_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	XmlQualifiedName_t2760654312 * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	{
		String_t* L_0 = ___name0;
		String_t* L_1 = ___namespaceUri1;
		XmlQualifiedName_t2760654312 * L_2 = (XmlQualifiedName_t2760654312 *)il2cpp_codegen_object_new(XmlQualifiedName_t2760654312_il2cpp_TypeInfo_var);
		XmlQualifiedName__ctor_m835061046(L_2, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		String_t* L_3 = ___name0;
		String_t* L_4 = ___namespaceUri1;
		RuntimeObject * L_5 = XsltArgumentList_GetParam_m3573250394(__this, L_3, L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		Hashtable_t1853889766 * L_6 = __this->get_parameters_1();
		XmlQualifiedName_t2760654312 * L_7 = V_0;
		NullCheck(L_6);
		VirtActionInvoker1< RuntimeObject * >::Invoke(37 /* System.Void System.Collections.Hashtable::Remove(System.Object) */, L_6, L_7);
		RuntimeObject * L_8 = V_1;
		return L_8;
	}
}
// System.Object System.Xml.Xsl.XsltArgumentList::ValidateParam(System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * XsltArgumentList_ValidateParam_m2717540126 (XsltArgumentList_t741251601 * __this, RuntimeObject * ___parameter0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XsltArgumentList_ValidateParam_m2717540126_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___parameter0;
		if (!((String_t*)IsInstSealed((RuntimeObject*)L_0, String_t_il2cpp_TypeInfo_var)))
		{
			goto IL_000d;
		}
	}
	{
		RuntimeObject * L_1 = ___parameter0;
		return L_1;
	}

IL_000d:
	{
		RuntimeObject * L_2 = ___parameter0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_2, Boolean_t97287965_il2cpp_TypeInfo_var)))
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject * L_3 = ___parameter0;
		return L_3;
	}

IL_001a:
	{
		RuntimeObject * L_4 = ___parameter0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_4, Double_t594665363_il2cpp_TypeInfo_var)))
		{
			goto IL_0027;
		}
	}
	{
		RuntimeObject * L_5 = ___parameter0;
		return L_5;
	}

IL_0027:
	{
		RuntimeObject * L_6 = ___parameter0;
		if (!((XPathNavigator_t787956054 *)IsInstClass((RuntimeObject*)L_6, XPathNavigator_t787956054_il2cpp_TypeInfo_var)))
		{
			goto IL_0034;
		}
	}
	{
		RuntimeObject * L_7 = ___parameter0;
		return L_7;
	}

IL_0034:
	{
		RuntimeObject * L_8 = ___parameter0;
		if (!((XPathNodeIterator_t3667290188 *)IsInstClass((RuntimeObject*)L_8, XPathNodeIterator_t3667290188_il2cpp_TypeInfo_var)))
		{
			goto IL_0041;
		}
	}
	{
		RuntimeObject * L_9 = ___parameter0;
		return L_9;
	}

IL_0041:
	{
		RuntimeObject * L_10 = ___parameter0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_10, Int16_t2552820387_il2cpp_TypeInfo_var)))
		{
			goto IL_0059;
		}
	}
	{
		RuntimeObject * L_11 = ___parameter0;
		double L_12 = (((double)((double)((*(int16_t*)((int16_t*)UnBox(L_11, Int16_t2552820387_il2cpp_TypeInfo_var)))))));
		RuntimeObject * L_13 = Box(Double_t594665363_il2cpp_TypeInfo_var, &L_12);
		return L_13;
	}

IL_0059:
	{
		RuntimeObject * L_14 = ___parameter0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_14, UInt16_t2177724958_il2cpp_TypeInfo_var)))
		{
			goto IL_0071;
		}
	}
	{
		RuntimeObject * L_15 = ___parameter0;
		double L_16 = (((double)((double)((*(uint16_t*)((uint16_t*)UnBox(L_15, UInt16_t2177724958_il2cpp_TypeInfo_var)))))));
		RuntimeObject * L_17 = Box(Double_t594665363_il2cpp_TypeInfo_var, &L_16);
		return L_17;
	}

IL_0071:
	{
		RuntimeObject * L_18 = ___parameter0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_18, Int32_t2950945753_il2cpp_TypeInfo_var)))
		{
			goto IL_0089;
		}
	}
	{
		RuntimeObject * L_19 = ___parameter0;
		double L_20 = (((double)((double)((*(int32_t*)((int32_t*)UnBox(L_19, Int32_t2950945753_il2cpp_TypeInfo_var)))))));
		RuntimeObject * L_21 = Box(Double_t594665363_il2cpp_TypeInfo_var, &L_20);
		return L_21;
	}

IL_0089:
	{
		RuntimeObject * L_22 = ___parameter0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_22, Int64_t3736567304_il2cpp_TypeInfo_var)))
		{
			goto IL_00a1;
		}
	}
	{
		RuntimeObject * L_23 = ___parameter0;
		double L_24 = (((double)((double)((*(int64_t*)((int64_t*)UnBox(L_23, Int64_t3736567304_il2cpp_TypeInfo_var)))))));
		RuntimeObject * L_25 = Box(Double_t594665363_il2cpp_TypeInfo_var, &L_24);
		return L_25;
	}

IL_00a1:
	{
		RuntimeObject * L_26 = ___parameter0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_26, UInt64_t4134040092_il2cpp_TypeInfo_var)))
		{
			goto IL_00ba;
		}
	}
	{
		RuntimeObject * L_27 = ___parameter0;
		double L_28 = (((double)((double)(((double)((uint64_t)((*(uint64_t*)((uint64_t*)UnBox(L_27, UInt64_t4134040092_il2cpp_TypeInfo_var))))))))));
		RuntimeObject * L_29 = Box(Double_t594665363_il2cpp_TypeInfo_var, &L_28);
		return L_29;
	}

IL_00ba:
	{
		RuntimeObject * L_30 = ___parameter0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_30, Single_t1397266774_il2cpp_TypeInfo_var)))
		{
			goto IL_00d2;
		}
	}
	{
		RuntimeObject * L_31 = ___parameter0;
		double L_32 = (((double)((double)((*(float*)((float*)UnBox(L_31, Single_t1397266774_il2cpp_TypeInfo_var)))))));
		RuntimeObject * L_33 = Box(Double_t594665363_il2cpp_TypeInfo_var, &L_32);
		return L_33;
	}

IL_00d2:
	{
		RuntimeObject * L_34 = ___parameter0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_34, Decimal_t2948259380_il2cpp_TypeInfo_var)))
		{
			goto IL_00ee;
		}
	}
	{
		RuntimeObject * L_35 = ___parameter0;
		IL2CPP_RUNTIME_CLASS_INIT(Decimal_t2948259380_il2cpp_TypeInfo_var);
		double L_36 = Decimal_op_Explicit_m2816896069(NULL /*static, unused*/, ((*(Decimal_t2948259380 *)((Decimal_t2948259380 *)UnBox(L_35, Decimal_t2948259380_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		double L_37 = L_36;
		RuntimeObject * L_38 = Box(Double_t594665363_il2cpp_TypeInfo_var, &L_37);
		return L_38;
	}

IL_00ee:
	{
		RuntimeObject * L_39 = ___parameter0;
		NullCheck(L_39);
		String_t* L_40 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_39);
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
// System.Void System.Xml.Xsl.XsltCompileException::.ctor()
extern "C" IL2CPP_METHOD_ATTR void XsltCompileException__ctor_m943048237 (XsltCompileException_t1322447047 * __this, const RuntimeMethod* method)
{
	{
		XsltException__ctor_m1857825485(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.Xsl.XsltCompileException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void XsltCompileException__ctor_m4079630765 (XsltCompileException_t1322447047 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___message0;
		XsltException__ctor_m682292363(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.Xsl.XsltCompileException::.ctor(System.String,System.Exception)
extern "C" IL2CPP_METHOD_ATTR void XsltCompileException__ctor_m2485360100 (XsltCompileException_t1322447047 * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___message0;
		Exception_t * L_1 = ___innerException1;
		XsltException__ctor_m2928735883(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.Xsl.XsltCompileException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" IL2CPP_METHOD_ATTR void XsltCompileException__ctor_m2108035469 (XsltCompileException_t1322447047 * __this, SerializationInfo_t950877179 * ___info0, StreamingContext_t3711869237  ___context1, const RuntimeMethod* method)
{
	{
		SerializationInfo_t950877179 * L_0 = ___info0;
		StreamingContext_t3711869237  L_1 = ___context1;
		XsltException__ctor_m4227114572(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.Xsl.XsltCompileException::.ctor(System.Exception,System.String,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void XsltCompileException__ctor_m3121015145 (XsltCompileException_t1322447047 * __this, Exception_t * ___inner0, String_t* ___sourceUri1, int32_t ___lineNumber2, int32_t ___linePosition3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XsltCompileException__ctor_m3121015145_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	XsltCompileException_t1322447047 * G_B2_0 = NULL;
	XsltCompileException_t1322447047 * G_B1_0 = NULL;
	String_t* G_B3_0 = NULL;
	XsltCompileException_t1322447047 * G_B3_1 = NULL;
	{
		int32_t L_0 = ___lineNumber2;
		G_B1_0 = __this;
		if (!L_0)
		{
			G_B2_0 = __this;
			goto IL_0011;
		}
	}
	{
		G_B3_0 = _stringLiteral3279002317;
		G_B3_1 = G_B1_0;
		goto IL_0016;
	}

IL_0011:
	{
		G_B3_0 = _stringLiteral3482964702;
		G_B3_1 = G_B2_0;
	}

IL_0016:
	{
		Exception_t * L_1 = ___inner0;
		int32_t L_2 = ___lineNumber2;
		int32_t L_3 = ___linePosition3;
		String_t* L_4 = ___sourceUri1;
		NullCheck(G_B3_1);
		XsltException__ctor_m470371806(G_B3_1, G_B3_0, _stringLiteral3195681598, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.Xsl.XsltCompileException::.ctor(System.String,System.Exception,System.Xml.XPath.XPathNavigator)
extern "C" IL2CPP_METHOD_ATTR void XsltCompileException__ctor_m1607933104 (XsltCompileException_t1322447047 * __this, String_t* ___message0, Exception_t * ___innerException1, XPathNavigator_t787956054 * ___nav2, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___message0;
		Exception_t * L_1 = ___innerException1;
		XPathNavigator_t787956054 * L_2 = ___nav2;
		XsltException__ctor_m978028932(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.Xsl.XsltCompileException::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" IL2CPP_METHOD_ATTR void XsltCompileException_GetObjectData_m2152053580 (XsltCompileException_t1322447047 * __this, SerializationInfo_t950877179 * ___info0, StreamingContext_t3711869237  ___context1, const RuntimeMethod* method)
{
	{
		SerializationInfo_t950877179 * L_0 = ___info0;
		StreamingContext_t3711869237  L_1 = ___context1;
		XsltException_GetObjectData_m1382619486(__this, L_0, L_1, /*hidden argument*/NULL);
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
// System.Void System.Xml.Xsl.XsltContext::.ctor()
extern "C" IL2CPP_METHOD_ATTR void XsltContext__ctor_m3056385392 (XsltContext_t2039362735 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XsltContext__ctor_m3056385392_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NameTable_t3178203267 * L_0 = (NameTable_t3178203267 *)il2cpp_codegen_object_new(NameTable_t3178203267_il2cpp_TypeInfo_var);
		NameTable__ctor_m874080766(L_0, /*hidden argument*/NULL);
		XmlNamespaceManager__ctor_m3238790559(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.Xsl.XsltContext::.ctor(System.Xml.NameTable)
extern "C" IL2CPP_METHOD_ATTR void XsltContext__ctor_m3074254434 (XsltContext_t2039362735 * __this, NameTable_t3178203267 * ___table0, const RuntimeMethod* method)
{
	{
		NameTable_t3178203267 * L_0 = ___table0;
		XmlNamespaceManager__ctor_m3238790559(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Xml.Xsl.IXsltContextVariable System.Xml.Xsl.XsltContext::ResolveVariable(System.Xml.XmlQualifiedName)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* XsltContext_ResolveVariable_m463515924 (XsltContext_t2039362735 * __this, XmlQualifiedName_t2760654312 * ___name0, const RuntimeMethod* method)
{
	{
		XmlQualifiedName_t2760654312 * L_0 = ___name0;
		NullCheck(L_0);
		String_t* L_1 = XmlQualifiedName_get_Namespace_m3957593392(L_0, /*hidden argument*/NULL);
		String_t* L_2 = VirtFuncInvoker1< String_t*, String_t* >::Invoke(16 /* System.String System.Xml.XmlNamespaceManager::LookupPrefix(System.String) */, __this, L_1);
		XmlQualifiedName_t2760654312 * L_3 = ___name0;
		NullCheck(L_3);
		String_t* L_4 = XmlQualifiedName_get_Name_m815040483(L_3, /*hidden argument*/NULL);
		RuntimeObject* L_5 = VirtFuncInvoker2< RuntimeObject*, String_t*, String_t* >::Invoke(24 /* System.Xml.Xsl.IXsltContextVariable System.Xml.Xsl.XsltContext::ResolveVariable(System.String,System.String) */, __this, L_2, L_4);
		return L_5;
	}
}
// System.Xml.Xsl.IXsltContextFunction System.Xml.Xsl.XsltContext::ResolveFunction(System.Xml.XmlQualifiedName,System.Xml.XPath.XPathResultType[])
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* XsltContext_ResolveFunction_m4178006800 (XsltContext_t2039362735 * __this, XmlQualifiedName_t2760654312 * ___name0, XPathResultTypeU5BU5D_t1515527577* ___argTypes1, const RuntimeMethod* method)
{
	{
		XmlQualifiedName_t2760654312 * L_0 = ___name0;
		NullCheck(L_0);
		String_t* L_1 = XmlQualifiedName_get_Name_m815040483(L_0, /*hidden argument*/NULL);
		XmlQualifiedName_t2760654312 * L_2 = ___name0;
		NullCheck(L_2);
		String_t* L_3 = XmlQualifiedName_get_Namespace_m3957593392(L_2, /*hidden argument*/NULL);
		XPathResultTypeU5BU5D_t1515527577* L_4 = ___argTypes1;
		RuntimeObject* L_5 = VirtFuncInvoker3< RuntimeObject*, String_t*, String_t*, XPathResultTypeU5BU5D_t1515527577* >::Invoke(23 /* System.Xml.Xsl.IXsltContextFunction System.Xml.Xsl.XsltContext::ResolveFunction(System.String,System.String,System.Xml.XPath.XPathResultType[]) */, __this, L_1, L_3, L_4);
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
// System.Void System.Xml.Xsl.XsltException::.ctor()
extern "C" IL2CPP_METHOD_ATTR void XsltException__ctor_m1857825485 (XsltException_t1876063340 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XsltException__ctor_m1857825485_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		XsltException__ctor_m2928735883(__this, L_0, (Exception_t *)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.Xsl.XsltException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void XsltException__ctor_m682292363 (XsltException_t1876063340 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___message0;
		XsltException__ctor_m2928735883(__this, L_0, (Exception_t *)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.Xsl.XsltException::.ctor(System.String,System.Exception)
extern "C" IL2CPP_METHOD_ATTR void XsltException__ctor_m2928735883 (XsltException_t1876063340 * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XsltException__ctor_m2928735883_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		Exception_t * L_1 = ___innerException1;
		XsltException__ctor_m470371806(__this, _stringLiteral628085470, L_0, L_1, 0, 0, (String_t*)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.Xsl.XsltException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" IL2CPP_METHOD_ATTR void XsltException__ctor_m4227114572 (XsltException_t1876063340 * __this, SerializationInfo_t950877179 * ___info0, StreamingContext_t3711869237  ___context1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XsltException__ctor_m4227114572_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SystemException__ctor_m4274309232(__this, /*hidden argument*/NULL);
		SerializationInfo_t950877179 * L_0 = ___info0;
		NullCheck(L_0);
		int32_t L_1 = SerializationInfo_GetInt32_m2640574809(L_0, _stringLiteral3165237107, /*hidden argument*/NULL);
		__this->set_lineNumber_11(L_1);
		SerializationInfo_t950877179 * L_2 = ___info0;
		NullCheck(L_2);
		int32_t L_3 = SerializationInfo_GetInt32_m2640574809(L_2, _stringLiteral2894530008, /*hidden argument*/NULL);
		__this->set_linePosition_12(L_3);
		SerializationInfo_t950877179 * L_4 = ___info0;
		NullCheck(L_4);
		String_t* L_5 = SerializationInfo_GetString_m3155282843(L_4, _stringLiteral1785022704, /*hidden argument*/NULL);
		__this->set_sourceUri_13(L_5);
		SerializationInfo_t950877179 * L_6 = ___info0;
		NullCheck(L_6);
		String_t* L_7 = SerializationInfo_GetString_m3155282843(L_6, _stringLiteral2703330669, /*hidden argument*/NULL);
		__this->set_templateFrames_14(L_7);
		return;
	}
}
// System.Void System.Xml.Xsl.XsltException::.ctor(System.String,System.String,System.Exception,System.Int32,System.Int32,System.String)
extern "C" IL2CPP_METHOD_ATTR void XsltException__ctor_m470371806 (XsltException_t1876063340 * __this, String_t* ___msgFormat0, String_t* ___message1, Exception_t * ___innerException2, int32_t ___lineNumber3, int32_t ___linePosition4, String_t* ___sourceUri5, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___msgFormat0;
		String_t* L_1 = ___message1;
		int32_t L_2 = ___lineNumber3;
		int32_t L_3 = ___linePosition4;
		String_t* L_4 = ___sourceUri5;
		String_t* L_5 = XsltException_CreateMessage_m1566675326(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		Exception_t * L_6 = ___innerException2;
		SystemException__ctor_m4132668650(__this, L_5, L_6, /*hidden argument*/NULL);
		int32_t L_7 = ___lineNumber3;
		__this->set_lineNumber_11(L_7);
		int32_t L_8 = ___linePosition4;
		__this->set_linePosition_12(L_8);
		String_t* L_9 = ___sourceUri5;
		__this->set_sourceUri_13(L_9);
		return;
	}
}
// System.Void System.Xml.Xsl.XsltException::.ctor(System.String,System.Exception,System.Xml.XPath.XPathNavigator)
extern "C" IL2CPP_METHOD_ATTR void XsltException__ctor_m978028932 (XsltException_t1876063340 * __this, String_t* ___message0, Exception_t * ___innerException1, XPathNavigator_t787956054 * ___nav2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XsltException__ctor_m978028932_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	XsltException_t1876063340 * G_B2_0 = NULL;
	XsltException_t1876063340 * G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	XsltException_t1876063340 * G_B3_1 = NULL;
	XsltException_t1876063340 * G_B5_0 = NULL;
	XsltException_t1876063340 * G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	XsltException_t1876063340 * G_B6_1 = NULL;
	XsltException_t1876063340 * G_B8_0 = NULL;
	XsltException_t1876063340 * G_B7_0 = NULL;
	String_t* G_B9_0 = NULL;
	XsltException_t1876063340 * G_B9_1 = NULL;
	{
		String_t* L_0 = ___message0;
		XPathNavigator_t787956054 * L_1 = ___nav2;
		String_t* L_2 = XsltException_CreateMessage_m4042504401(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		Exception_t * L_3 = ___innerException1;
		SystemException__ctor_m4132668650(__this, L_2, L_3, /*hidden argument*/NULL);
		XPathNavigator_t787956054 * L_4 = ___nav2;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_4, IXmlLineInfo_t2353988607_il2cpp_TypeInfo_var));
		RuntimeObject* L_5 = V_0;
		G_B1_0 = __this;
		if (!L_5)
		{
			G_B2_0 = __this;
			goto IL_0027;
		}
	}
	{
		RuntimeObject* L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Xml.IXmlLineInfo::get_LineNumber() */, IXmlLineInfo_t2353988607_il2cpp_TypeInfo_var, L_6);
		G_B3_0 = L_7;
		G_B3_1 = G_B1_0;
		goto IL_0028;
	}

IL_0027:
	{
		G_B3_0 = 0;
		G_B3_1 = G_B2_0;
	}

IL_0028:
	{
		NullCheck(G_B3_1);
		G_B3_1->set_lineNumber_11(G_B3_0);
		RuntimeObject* L_8 = V_0;
		G_B4_0 = __this;
		if (!L_8)
		{
			G_B5_0 = __this;
			goto IL_003f;
		}
	}
	{
		RuntimeObject* L_9 = V_0;
		NullCheck(L_9);
		int32_t L_10 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Xml.IXmlLineInfo::get_LinePosition() */, IXmlLineInfo_t2353988607_il2cpp_TypeInfo_var, L_9);
		G_B6_0 = L_10;
		G_B6_1 = G_B4_0;
		goto IL_0040;
	}

IL_003f:
	{
		G_B6_0 = 0;
		G_B6_1 = G_B5_0;
	}

IL_0040:
	{
		NullCheck(G_B6_1);
		G_B6_1->set_linePosition_12(G_B6_0);
		XPathNavigator_t787956054 * L_11 = ___nav2;
		G_B7_0 = __this;
		if (!L_11)
		{
			G_B8_0 = __this;
			goto IL_0057;
		}
	}
	{
		XPathNavigator_t787956054 * L_12 = ___nav2;
		NullCheck(L_12);
		String_t* L_13 = VirtFuncInvoker0< String_t* >::Invoke(21 /* System.String System.Xml.XPath.XPathNavigator::get_BaseURI() */, L_12);
		G_B9_0 = L_13;
		G_B9_1 = G_B7_0;
		goto IL_005c;
	}

IL_0057:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_14 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		G_B9_0 = L_14;
		G_B9_1 = G_B8_0;
	}

IL_005c:
	{
		NullCheck(G_B9_1);
		G_B9_1->set_sourceUri_13(G_B9_0);
		return;
	}
}
// System.String System.Xml.Xsl.XsltException::CreateMessage(System.String,System.Xml.XPath.XPathNavigator)
extern "C" IL2CPP_METHOD_ATTR String_t* XsltException_CreateMessage_m4042504401 (RuntimeObject * __this /* static, unused */, String_t* ___message0, XPathNavigator_t787956054 * ___nav1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XsltException_CreateMessage_m4042504401_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	String_t* V_3 = NULL;
	int32_t G_B3_0 = 0;
	int32_t G_B6_0 = 0;
	String_t* G_B9_0 = NULL;
	{
		XPathNavigator_t787956054 * L_0 = ___nav1;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IXmlLineInfo_t2353988607_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		NullCheck(L_2);
		int32_t L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Xml.IXmlLineInfo::get_LineNumber() */, IXmlLineInfo_t2353988607_il2cpp_TypeInfo_var, L_2);
		G_B3_0 = L_3;
		goto IL_0019;
	}

IL_0018:
	{
		G_B3_0 = 0;
	}

IL_0019:
	{
		V_1 = G_B3_0;
		RuntimeObject* L_4 = V_0;
		if (!L_4)
		{
			goto IL_002b;
		}
	}
	{
		RuntimeObject* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Xml.IXmlLineInfo::get_LinePosition() */, IXmlLineInfo_t2353988607_il2cpp_TypeInfo_var, L_5);
		G_B6_0 = L_6;
		goto IL_002c;
	}

IL_002b:
	{
		G_B6_0 = 0;
	}

IL_002c:
	{
		V_2 = G_B6_0;
		XPathNavigator_t787956054 * L_7 = ___nav1;
		if (!L_7)
		{
			goto IL_003e;
		}
	}
	{
		XPathNavigator_t787956054 * L_8 = ___nav1;
		NullCheck(L_8);
		String_t* L_9 = VirtFuncInvoker0< String_t* >::Invoke(21 /* System.String System.Xml.XPath.XPathNavigator::get_BaseURI() */, L_8);
		G_B9_0 = L_9;
		goto IL_0043;
	}

IL_003e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_10 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		G_B9_0 = L_10;
	}

IL_0043:
	{
		V_3 = G_B9_0;
		int32_t L_11 = V_1;
		if (!L_11)
		{
			goto IL_0059;
		}
	}
	{
		String_t* L_12 = ___message0;
		int32_t L_13 = V_1;
		int32_t L_14 = V_2;
		String_t* L_15 = V_3;
		String_t* L_16 = XsltException_CreateMessage_m1566675326(NULL /*static, unused*/, _stringLiteral3639890932, L_12, L_13, L_14, L_15, /*hidden argument*/NULL);
		return L_16;
	}

IL_0059:
	{
		String_t* L_17 = ___message0;
		int32_t L_18 = V_1;
		int32_t L_19 = V_2;
		String_t* L_20 = V_3;
		String_t* L_21 = XsltException_CreateMessage_m1566675326(NULL /*static, unused*/, _stringLiteral3482964702, L_17, L_18, L_19, L_20, /*hidden argument*/NULL);
		return L_21;
	}
}
// System.String System.Xml.Xsl.XsltException::CreateMessage(System.String,System.String,System.Int32,System.Int32,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* XsltException_CreateMessage_m1566675326 (RuntimeObject * __this /* static, unused */, String_t* ___msgFormat0, String_t* ___message1, int32_t ___lineNumber2, int32_t ___linePosition3, String_t* ___sourceUri4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XsltException_CreateMessage_m1566675326_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t4157843068_il2cpp_TypeInfo_var);
		CultureInfo_t4157843068 * L_0 = CultureInfo_get_InvariantCulture_m3532445182(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_1 = ___msgFormat0;
		ObjectU5BU5D_t2843939325* L_2 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)4));
		String_t* L_3 = ___message1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		ObjectU5BU5D_t2843939325* L_4 = L_2;
		String_t* L_5 = ___sourceUri4;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_5);
		ObjectU5BU5D_t2843939325* L_6 = L_4;
		CultureInfo_t4157843068 * L_7 = CultureInfo_get_InvariantCulture_m3532445182(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_8 = Int32_ToString_m1760361794((&___lineNumber2), L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_8);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_8);
		ObjectU5BU5D_t2843939325* L_9 = L_6;
		CultureInfo_t4157843068 * L_10 = CultureInfo_get_InvariantCulture_m3532445182(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_11 = Int32_ToString_m1760361794((&___linePosition3), L_10, /*hidden argument*/NULL);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_11);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_11);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_12 = String_Format_m1881875187(NULL /*static, unused*/, L_0, L_1, L_9, /*hidden argument*/NULL);
		return L_12;
	}
}
// System.Int32 System.Xml.Xsl.XsltException::get_LineNumber()
extern "C" IL2CPP_METHOD_ATTR int32_t XsltException_get_LineNumber_m1893685993 (XsltException_t1876063340 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_lineNumber_11();
		return L_0;
	}
}
// System.Int32 System.Xml.Xsl.XsltException::get_LinePosition()
extern "C" IL2CPP_METHOD_ATTR int32_t XsltException_get_LinePosition_m4019625836 (XsltException_t1876063340 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_linePosition_12();
		return L_0;
	}
}
// System.String System.Xml.Xsl.XsltException::get_Message()
extern "C" IL2CPP_METHOD_ATTR String_t* XsltException_get_Message_m2060362262 (XsltException_t1876063340 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XsltException_get_Message_m2060362262_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B3_0 = NULL;
	{
		String_t* L_0 = __this->get_templateFrames_14();
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		String_t* L_1 = Exception_get_Message_m3320461627(__this, /*hidden argument*/NULL);
		String_t* L_2 = __this->get_templateFrames_14();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m3937257545(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		G_B3_0 = L_3;
		goto IL_0027;
	}

IL_0021:
	{
		String_t* L_4 = Exception_get_Message_m3320461627(__this, /*hidden argument*/NULL);
		G_B3_0 = L_4;
	}

IL_0027:
	{
		return G_B3_0;
	}
}
// System.String System.Xml.Xsl.XsltException::get_SourceUri()
extern "C" IL2CPP_METHOD_ATTR String_t* XsltException_get_SourceUri_m1840937190 (XsltException_t1876063340 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_sourceUri_13();
		return L_0;
	}
}
// System.Void System.Xml.Xsl.XsltException::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" IL2CPP_METHOD_ATTR void XsltException_GetObjectData_m1382619486 (XsltException_t1876063340 * __this, SerializationInfo_t950877179 * ___info0, StreamingContext_t3711869237  ___context1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XsltException_GetObjectData_m1382619486_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SerializationInfo_t950877179 * L_0 = ___info0;
		StreamingContext_t3711869237  L_1 = ___context1;
		Exception_GetObjectData_m1103241326(__this, L_0, L_1, /*hidden argument*/NULL);
		SerializationInfo_t950877179 * L_2 = ___info0;
		int32_t L_3 = __this->get_lineNumber_11();
		NullCheck(L_2);
		SerializationInfo_AddValue_m412754688(L_2, _stringLiteral3165237107, L_3, /*hidden argument*/NULL);
		SerializationInfo_t950877179 * L_4 = ___info0;
		int32_t L_5 = __this->get_linePosition_12();
		NullCheck(L_4);
		SerializationInfo_AddValue_m412754688(L_4, _stringLiteral2894530008, L_5, /*hidden argument*/NULL);
		SerializationInfo_t950877179 * L_6 = ___info0;
		String_t* L_7 = __this->get_sourceUri_13();
		NullCheck(L_6);
		SerializationInfo_AddValue_m2872281893(L_6, _stringLiteral1785022704, L_7, /*hidden argument*/NULL);
		SerializationInfo_t950877179 * L_8 = ___info0;
		String_t* L_9 = __this->get_templateFrames_14();
		NullCheck(L_8);
		SerializationInfo_AddValue_m2872281893(L_8, _stringLiteral2703330669, L_9, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.Xsl.XsltException::AddTemplateFrame(System.String)
extern "C" IL2CPP_METHOD_ATTR void XsltException_AddTemplateFrame_m3446307439 (XsltException_t1876063340 * __this, String_t* ___frame0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XsltException_AddTemplateFrame_m3446307439_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = __this->get_templateFrames_14();
		String_t* L_1 = ___frame0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = String_Concat_m3937257545(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->set_templateFrames_14(L_2);
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
// System.Void System.Xml.Xsl.XsltMessageEncounteredEventArgs::.ctor()
extern "C" IL2CPP_METHOD_ATTR void XsltMessageEncounteredEventArgs__ctor_m3523293355 (XsltMessageEncounteredEventArgs_t1348681757 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XsltMessageEncounteredEventArgs__ctor_m3523293355_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_t3591816995_il2cpp_TypeInfo_var);
		EventArgs__ctor_m32674013(__this, /*hidden argument*/NULL);
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
// System.Void System.Xml.Xsl.XsltMessageEncounteredEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void XsltMessageEncounteredEventHandler__ctor_m1378574597 (XsltMessageEncounteredEventHandler_t414593873 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void System.Xml.Xsl.XsltMessageEncounteredEventHandler::Invoke(System.Object,System.Xml.Xsl.XsltMessageEncounteredEventArgs)
extern "C" IL2CPP_METHOD_ATTR void XsltMessageEncounteredEventHandler_Invoke_m441782826 (XsltMessageEncounteredEventHandler_t414593873 * __this, RuntimeObject * ___sender0, XsltMessageEncounteredEventArgs_t1348681757 * ___e1, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		XsltMessageEncounteredEventHandler_Invoke_m441782826((XsltMessageEncounteredEventHandler_t414593873 *)__this->get_prev_9(), ___sender0, ___e1, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 2)
		{
			// open
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, XsltMessageEncounteredEventArgs_t1348681757 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, ___sender0, ___e1, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, RuntimeObject *, XsltMessageEncounteredEventArgs_t1348681757 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___sender0, ___e1, targetMethod);
			}
		}
	}
	else
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 2)
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< RuntimeObject *, XsltMessageEncounteredEventArgs_t1348681757 * >::Invoke(targetMethod, targetThis, ___sender0, ___e1);
					else
						GenericVirtActionInvoker2< RuntimeObject *, XsltMessageEncounteredEventArgs_t1348681757 * >::Invoke(targetMethod, targetThis, ___sender0, ___e1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< RuntimeObject *, XsltMessageEncounteredEventArgs_t1348681757 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___sender0, ___e1);
					else
						VirtActionInvoker2< RuntimeObject *, XsltMessageEncounteredEventArgs_t1348681757 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___sender0, ___e1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, RuntimeObject *, XsltMessageEncounteredEventArgs_t1348681757 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___sender0, ___e1, targetMethod);
			}
		}
		else
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< XsltMessageEncounteredEventArgs_t1348681757 * >::Invoke(targetMethod, ___sender0, ___e1);
					else
						GenericVirtActionInvoker1< XsltMessageEncounteredEventArgs_t1348681757 * >::Invoke(targetMethod, ___sender0, ___e1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< XsltMessageEncounteredEventArgs_t1348681757 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___sender0, ___e1);
					else
						VirtActionInvoker1< XsltMessageEncounteredEventArgs_t1348681757 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___sender0, ___e1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, XsltMessageEncounteredEventArgs_t1348681757 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___sender0, ___e1, targetMethod);
			}
		}
	}
}
// System.IAsyncResult System.Xml.Xsl.XsltMessageEncounteredEventHandler::BeginInvoke(System.Object,System.Xml.Xsl.XsltMessageEncounteredEventArgs,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* XsltMessageEncounteredEventHandler_BeginInvoke_m363037147 (XsltMessageEncounteredEventHandler_t414593873 * __this, RuntimeObject * ___sender0, XsltMessageEncounteredEventArgs_t1348681757 * ___e1, AsyncCallback_t3962456242 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___sender0;
	__d_args[1] = ___e1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void System.Xml.Xsl.XsltMessageEncounteredEventHandler::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void XsltMessageEncounteredEventHandler_EndInvoke_m681286149 (XsltMessageEncounteredEventHandler_t414593873 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void System.Xml.Xsl.XslTransform::.ctor()
extern "C" IL2CPP_METHOD_ATTR void XslTransform__ctor_m250494130 (XslTransform_t2320758400 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XslTransform__ctor_m250494130_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(XslTransform_t2320758400_il2cpp_TypeInfo_var);
		RuntimeObject * L_0 = XslTransform_GetDefaultDebugger_m2336972937(NULL /*static, unused*/, /*hidden argument*/NULL);
		XslTransform__ctor_m1423564942(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.Xsl.XslTransform::.ctor(System.Object)
extern "C" IL2CPP_METHOD_ATTR void XslTransform__ctor_m1423564942 (XslTransform_t2320758400 * __this, RuntimeObject * ___debugger0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XslTransform__ctor_m1423564942_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		XmlUrlResolver_t817895037 * L_0 = (XmlUrlResolver_t817895037 *)il2cpp_codegen_object_new(XmlUrlResolver_t817895037_il2cpp_TypeInfo_var);
		XmlUrlResolver__ctor_m1338399436(L_0, /*hidden argument*/NULL);
		__this->set_xmlResolver_4(L_0);
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		RuntimeObject * L_1 = ___debugger0;
		__this->set_debugger_2(L_1);
		return;
	}
}
// System.Void System.Xml.Xsl.XslTransform::.cctor()
extern "C" IL2CPP_METHOD_ATTR void XslTransform__cctor_m1675380197 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XslTransform__cctor_m1675380197_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	Dictionary_2_t2736202052 * V_2 = NULL;
	int32_t V_3 = 0;
	{
		String_t* L_0 = Environment_GetEnvironmentVariable_m394552009(NULL /*static, unused*/, _stringLiteral1144791547, /*hidden argument*/NULL);
		V_0 = L_0;
		String_t* L_1 = V_0;
		V_1 = L_1;
		String_t* L_2 = V_1;
		if (!L_2)
		{
			goto IL_00a0;
		}
	}
	{
		Dictionary_2_t2736202052 * L_3 = ((XslTransform_t2320758400_StaticFields*)il2cpp_codegen_static_fields_for(XslTransform_t2320758400_il2cpp_TypeInfo_var))->get_U3CU3Ef__switchU24map42_5();
		if (L_3)
		{
			goto IL_004e;
		}
	}
	{
		Dictionary_2_t2736202052 * L_4 = (Dictionary_2_t2736202052 *)il2cpp_codegen_object_new(Dictionary_2_t2736202052_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m2392909825(L_4, 3, /*hidden argument*/Dictionary_2__ctor_m2392909825_RuntimeMethod_var);
		V_2 = L_4;
		Dictionary_2_t2736202052 * L_5 = V_2;
		NullCheck(L_5);
		Dictionary_2_Add_m282647386(L_5, _stringLiteral1965492014, 0, /*hidden argument*/Dictionary_2_Add_m282647386_RuntimeMethod_var);
		Dictionary_2_t2736202052 * L_6 = V_2;
		NullCheck(L_6);
		Dictionary_2_Add_m282647386(L_6, _stringLiteral818087719, 1, /*hidden argument*/Dictionary_2_Add_m282647386_RuntimeMethod_var);
		Dictionary_2_t2736202052 * L_7 = V_2;
		NullCheck(L_7);
		Dictionary_2_Add_m282647386(L_7, _stringLiteral95342995, 2, /*hidden argument*/Dictionary_2_Add_m282647386_RuntimeMethod_var);
		Dictionary_2_t2736202052 * L_8 = V_2;
		((XslTransform_t2320758400_StaticFields*)il2cpp_codegen_static_fields_for(XslTransform_t2320758400_il2cpp_TypeInfo_var))->set_U3CU3Ef__switchU24map42_5(L_8);
	}

IL_004e:
	{
		Dictionary_2_t2736202052 * L_9 = ((XslTransform_t2320758400_StaticFields*)il2cpp_codegen_static_fields_for(XslTransform_t2320758400_il2cpp_TypeInfo_var))->get_U3CU3Ef__switchU24map42_5();
		String_t* L_10 = V_1;
		NullCheck(L_9);
		bool L_11 = Dictionary_2_TryGetValue_m1013208020(L_9, L_10, (&V_3), /*hidden argument*/Dictionary_2_TryGetValue_m1013208020_RuntimeMethod_var);
		if (!L_11)
		{
			goto IL_00a0;
		}
	}
	{
		int32_t L_12 = V_3;
		switch (L_12)
		{
			case 0:
			{
				goto IL_0077;
			}
			case 1:
			{
				goto IL_0086;
			}
			case 2:
			{
				goto IL_0095;
			}
		}
	}
	{
		goto IL_00a0;
	}

IL_0077:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Console_t3208230065_il2cpp_TypeInfo_var);
		TextWriter_t3478189236 * L_13 = Console_get_Out_m535961184(NULL /*static, unused*/, /*hidden argument*/NULL);
		((XslTransform_t2320758400_StaticFields*)il2cpp_codegen_static_fields_for(XslTransform_t2320758400_il2cpp_TypeInfo_var))->set_TemplateStackFrameOutput_1(L_13);
		goto IL_00a0;
	}

IL_0086:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Console_t3208230065_il2cpp_TypeInfo_var);
		TextWriter_t3478189236 * L_14 = Console_get_Error_m1839879495(NULL /*static, unused*/, /*hidden argument*/NULL);
		((XslTransform_t2320758400_StaticFields*)il2cpp_codegen_static_fields_for(XslTransform_t2320758400_il2cpp_TypeInfo_var))->set_TemplateStackFrameOutput_1(L_14);
		goto IL_00a0;
	}

IL_0095:
	{
		((XslTransform_t2320758400_StaticFields*)il2cpp_codegen_static_fields_for(XslTransform_t2320758400_il2cpp_TypeInfo_var))->set_TemplateStackFrameError_0((bool)1);
		goto IL_00a0;
	}

IL_00a0:
	{
		return;
	}
}
// System.Object System.Xml.Xsl.XslTransform::GetDefaultDebugger()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * XslTransform_GetDefaultDebugger_m2336972937 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XslTransform_GetDefaultDebugger_m2336972937_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = (String_t*)NULL;
	}

IL_0002:
	try
	{ // begin try (depth: 1)
		String_t* L_0 = Environment_GetEnvironmentVariable_m394552009(NULL /*static, unused*/, _stringLiteral1822802014, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_0018;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0012;
		throw e;
	}

CATCH_0012:
	{ // begin catch(System.Exception)
		goto IL_0018;
	} // end catch (depth: 1)

IL_0018:
	{
		String_t* L_1 = V_0;
		if (L_1)
		{
			goto IL_0020;
		}
	}
	{
		return NULL;
	}

IL_0020:
	{
		String_t* L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_3 = String_op_Equality_m920492651(NULL /*static, unused*/, L_2, _stringLiteral754964184, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0036;
		}
	}
	{
		SimpleXsltDebugger_t937136423 * L_4 = (SimpleXsltDebugger_t937136423 *)il2cpp_codegen_object_new(SimpleXsltDebugger_t937136423_il2cpp_TypeInfo_var);
		SimpleXsltDebugger__ctor_m2585114588(L_4, /*hidden argument*/NULL);
		return L_4;
	}

IL_0036:
	{
		String_t* L_5 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_6 = il2cpp_codegen_get_type((Il2CppMethodPointer)&Type_GetType_m1693760368, L_5, "System.Xml, Version=2.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089");
		RuntimeObject * L_7 = Activator_CreateInstance_m3631483688(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		RuntimeObject * L_8 = V_1;
		return L_8;
	}
}
// System.Void System.Xml.Xsl.XslTransform::set_XmlResolver(System.Xml.XmlResolver)
extern "C" IL2CPP_METHOD_ATTR void XslTransform_set_XmlResolver_m2596599835 (XslTransform_t2320758400 * __this, XmlResolver_t626023767 * ___value0, const RuntimeMethod* method)
{
	{
		XmlResolver_t626023767 * L_0 = ___value0;
		__this->set_xmlResolver_4(L_0);
		return;
	}
}
// System.Xml.XmlReader System.Xml.Xsl.XslTransform::Transform(System.Xml.XPath.IXPathNavigable,System.Xml.Xsl.XsltArgumentList)
extern "C" IL2CPP_METHOD_ATTR XmlReader_t3121518892 * XslTransform_Transform_m3696627812 (XslTransform_t2320758400 * __this, RuntimeObject* ___input0, XsltArgumentList_t741251601 * ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XslTransform_Transform_m3696627812_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___input0;
		NullCheck(L_0);
		XPathNavigator_t787956054 * L_1 = InterfaceFuncInvoker0< XPathNavigator_t787956054 * >::Invoke(0 /* System.Xml.XPath.XPathNavigator System.Xml.XPath.IXPathNavigable::CreateNavigator() */, IXPathNavigable_t2716156786_il2cpp_TypeInfo_var, L_0);
		XsltArgumentList_t741251601 * L_2 = ___args1;
		XmlResolver_t626023767 * L_3 = __this->get_xmlResolver_4();
		XmlReader_t3121518892 * L_4 = XslTransform_Transform_m209782705(__this, L_1, L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Xml.XmlReader System.Xml.Xsl.XslTransform::Transform(System.Xml.XPath.IXPathNavigable,System.Xml.Xsl.XsltArgumentList,System.Xml.XmlResolver)
extern "C" IL2CPP_METHOD_ATTR XmlReader_t3121518892 * XslTransform_Transform_m898090491 (XslTransform_t2320758400 * __this, RuntimeObject* ___input0, XsltArgumentList_t741251601 * ___args1, XmlResolver_t626023767 * ___resolver2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XslTransform_Transform_m898090491_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___input0;
		NullCheck(L_0);
		XPathNavigator_t787956054 * L_1 = InterfaceFuncInvoker0< XPathNavigator_t787956054 * >::Invoke(0 /* System.Xml.XPath.XPathNavigator System.Xml.XPath.IXPathNavigable::CreateNavigator() */, IXPathNavigable_t2716156786_il2cpp_TypeInfo_var, L_0);
		XsltArgumentList_t741251601 * L_2 = ___args1;
		XmlResolver_t626023767 * L_3 = ___resolver2;
		XmlReader_t3121518892 * L_4 = XslTransform_Transform_m209782705(__this, L_1, L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Xml.XmlReader System.Xml.Xsl.XslTransform::Transform(System.Xml.XPath.XPathNavigator,System.Xml.Xsl.XsltArgumentList)
extern "C" IL2CPP_METHOD_ATTR XmlReader_t3121518892 * XslTransform_Transform_m3534939495 (XslTransform_t2320758400 * __this, XPathNavigator_t787956054 * ___input0, XsltArgumentList_t741251601 * ___args1, const RuntimeMethod* method)
{
	{
		XPathNavigator_t787956054 * L_0 = ___input0;
		XsltArgumentList_t741251601 * L_1 = ___args1;
		XmlResolver_t626023767 * L_2 = __this->get_xmlResolver_4();
		XmlReader_t3121518892 * L_3 = XslTransform_Transform_m209782705(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Xml.XmlReader System.Xml.Xsl.XslTransform::Transform(System.Xml.XPath.XPathNavigator,System.Xml.Xsl.XsltArgumentList,System.Xml.XmlResolver)
extern "C" IL2CPP_METHOD_ATTR XmlReader_t3121518892 * XslTransform_Transform_m209782705 (XslTransform_t2320758400 * __this, XPathNavigator_t787956054 * ___input0, XsltArgumentList_t741251601 * ___args1, XmlResolver_t626023767 * ___resolver2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XslTransform_Transform_m209782705_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MemoryStream_t94973147 * V_0 = NULL;
	{
		MemoryStream_t94973147 * L_0 = (MemoryStream_t94973147 *)il2cpp_codegen_object_new(MemoryStream_t94973147_il2cpp_TypeInfo_var);
		MemoryStream__ctor_m2678285228(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		XPathNavigator_t787956054 * L_1 = ___input0;
		XsltArgumentList_t741251601 * L_2 = ___args1;
		MemoryStream_t94973147 * L_3 = V_0;
		XmlTextWriter_t2114213153 * L_4 = (XmlTextWriter_t2114213153 *)il2cpp_codegen_object_new(XmlTextWriter_t2114213153_il2cpp_TypeInfo_var);
		XmlTextWriter__ctor_m614698628(L_4, L_3, (Encoding_t1523322056 *)NULL, /*hidden argument*/NULL);
		XmlResolver_t626023767 * L_5 = ___resolver2;
		XslTransform_Transform_m3669272905(__this, L_1, L_2, L_4, L_5, /*hidden argument*/NULL);
		MemoryStream_t94973147 * L_6 = V_0;
		NullCheck(L_6);
		VirtActionInvoker1< int64_t >::Invoke(11 /* System.Void System.IO.MemoryStream::set_Position(System.Int64) */, L_6, (((int64_t)((int64_t)0))));
		MemoryStream_t94973147 * L_7 = V_0;
		XmlTextReader_t4233384356 * L_8 = (XmlTextReader_t4233384356 *)il2cpp_codegen_object_new(XmlTextReader_t4233384356_il2cpp_TypeInfo_var);
		XmlTextReader__ctor_m1059080747(L_8, L_7, 1, (XmlParserContext_t2544895291 *)NULL, /*hidden argument*/NULL);
		return L_8;
	}
}
// System.Void System.Xml.Xsl.XslTransform::Transform(System.Xml.XPath.IXPathNavigable,System.Xml.Xsl.XsltArgumentList,System.IO.TextWriter)
extern "C" IL2CPP_METHOD_ATTR void XslTransform_Transform_m4214542599 (XslTransform_t2320758400 * __this, RuntimeObject* ___input0, XsltArgumentList_t741251601 * ___args1, TextWriter_t3478189236 * ___output2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XslTransform_Transform_m4214542599_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___input0;
		NullCheck(L_0);
		XPathNavigator_t787956054 * L_1 = InterfaceFuncInvoker0< XPathNavigator_t787956054 * >::Invoke(0 /* System.Xml.XPath.XPathNavigator System.Xml.XPath.IXPathNavigable::CreateNavigator() */, IXPathNavigable_t2716156786_il2cpp_TypeInfo_var, L_0);
		XsltArgumentList_t741251601 * L_2 = ___args1;
		TextWriter_t3478189236 * L_3 = ___output2;
		XmlResolver_t626023767 * L_4 = __this->get_xmlResolver_4();
		XslTransform_Transform_m2990866288(__this, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.Xsl.XslTransform::Transform(System.Xml.XPath.IXPathNavigable,System.Xml.Xsl.XsltArgumentList,System.IO.TextWriter,System.Xml.XmlResolver)
extern "C" IL2CPP_METHOD_ATTR void XslTransform_Transform_m2245597697 (XslTransform_t2320758400 * __this, RuntimeObject* ___input0, XsltArgumentList_t741251601 * ___args1, TextWriter_t3478189236 * ___output2, XmlResolver_t626023767 * ___resolver3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XslTransform_Transform_m2245597697_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___input0;
		NullCheck(L_0);
		XPathNavigator_t787956054 * L_1 = InterfaceFuncInvoker0< XPathNavigator_t787956054 * >::Invoke(0 /* System.Xml.XPath.XPathNavigator System.Xml.XPath.IXPathNavigable::CreateNavigator() */, IXPathNavigable_t2716156786_il2cpp_TypeInfo_var, L_0);
		XsltArgumentList_t741251601 * L_2 = ___args1;
		TextWriter_t3478189236 * L_3 = ___output2;
		XmlResolver_t626023767 * L_4 = ___resolver3;
		XslTransform_Transform_m2990866288(__this, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.Xsl.XslTransform::Transform(System.Xml.XPath.IXPathNavigable,System.Xml.Xsl.XsltArgumentList,System.IO.Stream)
extern "C" IL2CPP_METHOD_ATTR void XslTransform_Transform_m3198606506 (XslTransform_t2320758400 * __this, RuntimeObject* ___input0, XsltArgumentList_t741251601 * ___args1, Stream_t1273022909 * ___output2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XslTransform_Transform_m3198606506_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___input0;
		NullCheck(L_0);
		XPathNavigator_t787956054 * L_1 = InterfaceFuncInvoker0< XPathNavigator_t787956054 * >::Invoke(0 /* System.Xml.XPath.XPathNavigator System.Xml.XPath.IXPathNavigable::CreateNavigator() */, IXPathNavigable_t2716156786_il2cpp_TypeInfo_var, L_0);
		XsltArgumentList_t741251601 * L_2 = ___args1;
		Stream_t1273022909 * L_3 = ___output2;
		XmlResolver_t626023767 * L_4 = __this->get_xmlResolver_4();
		XslTransform_Transform_m471343747(__this, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.Xsl.XslTransform::Transform(System.Xml.XPath.IXPathNavigable,System.Xml.Xsl.XsltArgumentList,System.IO.Stream,System.Xml.XmlResolver)
extern "C" IL2CPP_METHOD_ATTR void XslTransform_Transform_m2259576944 (XslTransform_t2320758400 * __this, RuntimeObject* ___input0, XsltArgumentList_t741251601 * ___args1, Stream_t1273022909 * ___output2, XmlResolver_t626023767 * ___resolver3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XslTransform_Transform_m2259576944_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___input0;
		NullCheck(L_0);
		XPathNavigator_t787956054 * L_1 = InterfaceFuncInvoker0< XPathNavigator_t787956054 * >::Invoke(0 /* System.Xml.XPath.XPathNavigator System.Xml.XPath.IXPathNavigable::CreateNavigator() */, IXPathNavigable_t2716156786_il2cpp_TypeInfo_var, L_0);
		XsltArgumentList_t741251601 * L_2 = ___args1;
		Stream_t1273022909 * L_3 = ___output2;
		XmlResolver_t626023767 * L_4 = ___resolver3;
		XslTransform_Transform_m471343747(__this, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.Xsl.XslTransform::Transform(System.Xml.XPath.IXPathNavigable,System.Xml.Xsl.XsltArgumentList,System.Xml.XmlWriter)
extern "C" IL2CPP_METHOD_ATTR void XslTransform_Transform_m1149417995 (XslTransform_t2320758400 * __this, RuntimeObject* ___input0, XsltArgumentList_t741251601 * ___args1, XmlWriter_t127905479 * ___output2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XslTransform_Transform_m1149417995_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___input0;
		NullCheck(L_0);
		XPathNavigator_t787956054 * L_1 = InterfaceFuncInvoker0< XPathNavigator_t787956054 * >::Invoke(0 /* System.Xml.XPath.XPathNavigator System.Xml.XPath.IXPathNavigable::CreateNavigator() */, IXPathNavigable_t2716156786_il2cpp_TypeInfo_var, L_0);
		XsltArgumentList_t741251601 * L_2 = ___args1;
		XmlWriter_t127905479 * L_3 = ___output2;
		XmlResolver_t626023767 * L_4 = __this->get_xmlResolver_4();
		XslTransform_Transform_m3669272905(__this, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.Xsl.XslTransform::Transform(System.Xml.XPath.IXPathNavigable,System.Xml.Xsl.XsltArgumentList,System.Xml.XmlWriter,System.Xml.XmlResolver)
extern "C" IL2CPP_METHOD_ATTR void XslTransform_Transform_m1584402363 (XslTransform_t2320758400 * __this, RuntimeObject* ___input0, XsltArgumentList_t741251601 * ___args1, XmlWriter_t127905479 * ___output2, XmlResolver_t626023767 * ___resolver3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XslTransform_Transform_m1584402363_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___input0;
		NullCheck(L_0);
		XPathNavigator_t787956054 * L_1 = InterfaceFuncInvoker0< XPathNavigator_t787956054 * >::Invoke(0 /* System.Xml.XPath.XPathNavigator System.Xml.XPath.IXPathNavigable::CreateNavigator() */, IXPathNavigable_t2716156786_il2cpp_TypeInfo_var, L_0);
		XsltArgumentList_t741251601 * L_2 = ___args1;
		XmlWriter_t127905479 * L_3 = ___output2;
		XmlResolver_t626023767 * L_4 = ___resolver3;
		XslTransform_Transform_m3669272905(__this, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.Xsl.XslTransform::Transform(System.Xml.XPath.XPathNavigator,System.Xml.Xsl.XsltArgumentList,System.Xml.XmlWriter)
extern "C" IL2CPP_METHOD_ATTR void XslTransform_Transform_m4116716169 (XslTransform_t2320758400 * __this, XPathNavigator_t787956054 * ___input0, XsltArgumentList_t741251601 * ___args1, XmlWriter_t127905479 * ___output2, const RuntimeMethod* method)
{
	{
		XPathNavigator_t787956054 * L_0 = ___input0;
		XsltArgumentList_t741251601 * L_1 = ___args1;
		XmlWriter_t127905479 * L_2 = ___output2;
		XmlResolver_t626023767 * L_3 = __this->get_xmlResolver_4();
		XslTransform_Transform_m3669272905(__this, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.Xsl.XslTransform::Transform(System.Xml.XPath.XPathNavigator,System.Xml.Xsl.XsltArgumentList,System.Xml.XmlWriter,System.Xml.XmlResolver)
extern "C" IL2CPP_METHOD_ATTR void XslTransform_Transform_m3669272905 (XslTransform_t2320758400 * __this, XPathNavigator_t787956054 * ___input0, XsltArgumentList_t741251601 * ___args1, XmlWriter_t127905479 * ___output2, XmlResolver_t626023767 * ___resolver3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XslTransform_Transform_m3669272905_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Outputter_t889105973 * V_0 = NULL;
	{
		CompiledStylesheet_t759457236 * L_0 = __this->get_s_3();
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		XsltException_t1876063340 * L_1 = (XsltException_t1876063340 *)il2cpp_codegen_object_new(XsltException_t1876063340_il2cpp_TypeInfo_var);
		XsltException__ctor_m2928735883(L_1, _stringLiteral1764791452, (Exception_t *)NULL, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1,XslTransform_Transform_m3669272905_RuntimeMethod_var);
	}

IL_0017:
	{
		XmlWriter_t127905479 * L_2 = ___output2;
		CompiledStylesheet_t759457236 * L_3 = __this->get_s_3();
		NullCheck(L_3);
		Hashtable_t1853889766 * L_4 = CompiledStylesheet_get_Outputs_m1025770811(L_3, /*hidden argument*/NULL);
		GenericOutputter_t1694878872 * L_5 = (GenericOutputter_t1694878872 *)il2cpp_codegen_object_new(GenericOutputter_t1694878872_il2cpp_TypeInfo_var);
		GenericOutputter__ctor_m1355938407(L_5, L_2, L_4, (Encoding_t1523322056 *)NULL, /*hidden argument*/NULL);
		V_0 = L_5;
		CompiledStylesheet_t759457236 * L_6 = __this->get_s_3();
		RuntimeObject * L_7 = __this->get_debugger_2();
		XslTransformProcessor_t3405861191 * L_8 = (XslTransformProcessor_t3405861191 *)il2cpp_codegen_object_new(XslTransformProcessor_t3405861191_il2cpp_TypeInfo_var);
		XslTransformProcessor__ctor_m2824512103(L_8, L_6, L_7, /*hidden argument*/NULL);
		XPathNavigator_t787956054 * L_9 = ___input0;
		Outputter_t889105973 * L_10 = V_0;
		XsltArgumentList_t741251601 * L_11 = ___args1;
		XmlResolver_t626023767 * L_12 = ___resolver3;
		NullCheck(L_8);
		XslTransformProcessor_Process_m1084818256(L_8, L_9, L_10, L_11, L_12, /*hidden argument*/NULL);
		XmlWriter_t127905479 * L_13 = ___output2;
		NullCheck(L_13);
		VirtActionInvoker0::Invoke(11 /* System.Void System.Xml.XmlWriter::Flush() */, L_13);
		return;
	}
}
// System.Void System.Xml.Xsl.XslTransform::Transform(System.Xml.XPath.XPathNavigator,System.Xml.Xsl.XsltArgumentList,System.IO.Stream)
extern "C" IL2CPP_METHOD_ATTR void XslTransform_Transform_m3134581198 (XslTransform_t2320758400 * __this, XPathNavigator_t787956054 * ___input0, XsltArgumentList_t741251601 * ___args1, Stream_t1273022909 * ___output2, const RuntimeMethod* method)
{
	{
		XPathNavigator_t787956054 * L_0 = ___input0;
		XsltArgumentList_t741251601 * L_1 = ___args1;
		Stream_t1273022909 * L_2 = ___output2;
		XmlResolver_t626023767 * L_3 = __this->get_xmlResolver_4();
		XslTransform_Transform_m471343747(__this, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.Xsl.XslTransform::Transform(System.Xml.XPath.XPathNavigator,System.Xml.Xsl.XsltArgumentList,System.IO.Stream,System.Xml.XmlResolver)
extern "C" IL2CPP_METHOD_ATTR void XslTransform_Transform_m471343747 (XslTransform_t2320758400 * __this, XPathNavigator_t787956054 * ___input0, XsltArgumentList_t741251601 * ___args1, Stream_t1273022909 * ___output2, XmlResolver_t626023767 * ___resolver3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XslTransform_Transform_m471343747_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	XslOutput_t472631936 * V_0 = NULL;
	{
		CompiledStylesheet_t759457236 * L_0 = __this->get_s_3();
		NullCheck(L_0);
		Hashtable_t1853889766 * L_1 = CompiledStylesheet_get_Outputs_m1025770811(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		NullCheck(L_1);
		RuntimeObject * L_3 = VirtFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(30 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_1, L_2);
		V_0 = ((XslOutput_t472631936 *)CastclassClass((RuntimeObject*)L_3, XslOutput_t472631936_il2cpp_TypeInfo_var));
		XPathNavigator_t787956054 * L_4 = ___input0;
		XsltArgumentList_t741251601 * L_5 = ___args1;
		Stream_t1273022909 * L_6 = ___output2;
		XslOutput_t472631936 * L_7 = V_0;
		NullCheck(L_7);
		Encoding_t1523322056 * L_8 = XslOutput_get_Encoding_m1490244604(L_7, /*hidden argument*/NULL);
		StreamWriter_t1266378904 * L_9 = (StreamWriter_t1266378904 *)il2cpp_codegen_object_new(StreamWriter_t1266378904_il2cpp_TypeInfo_var);
		StreamWriter__ctor_m2310301218(L_9, L_6, L_8, /*hidden argument*/NULL);
		XmlResolver_t626023767 * L_10 = ___resolver3;
		XslTransform_Transform_m2990866288(__this, L_4, L_5, L_9, L_10, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.Xsl.XslTransform::Transform(System.Xml.XPath.XPathNavigator,System.Xml.Xsl.XsltArgumentList,System.IO.TextWriter)
extern "C" IL2CPP_METHOD_ATTR void XslTransform_Transform_m3484483524 (XslTransform_t2320758400 * __this, XPathNavigator_t787956054 * ___input0, XsltArgumentList_t741251601 * ___args1, TextWriter_t3478189236 * ___output2, const RuntimeMethod* method)
{
	{
		XPathNavigator_t787956054 * L_0 = ___input0;
		XsltArgumentList_t741251601 * L_1 = ___args1;
		TextWriter_t3478189236 * L_2 = ___output2;
		XmlResolver_t626023767 * L_3 = __this->get_xmlResolver_4();
		XslTransform_Transform_m2990866288(__this, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.Xsl.XslTransform::Transform(System.Xml.XPath.XPathNavigator,System.Xml.Xsl.XsltArgumentList,System.IO.TextWriter,System.Xml.XmlResolver)
extern "C" IL2CPP_METHOD_ATTR void XslTransform_Transform_m2990866288 (XslTransform_t2320758400 * __this, XPathNavigator_t787956054 * ___input0, XsltArgumentList_t741251601 * ___args1, TextWriter_t3478189236 * ___output2, XmlResolver_t626023767 * ___resolver3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XslTransform_Transform_m2990866288_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Outputter_t889105973 * V_0 = NULL;
	{
		CompiledStylesheet_t759457236 * L_0 = __this->get_s_3();
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		XsltException_t1876063340 * L_1 = (XsltException_t1876063340 *)il2cpp_codegen_object_new(XsltException_t1876063340_il2cpp_TypeInfo_var);
		XsltException__ctor_m2928735883(L_1, _stringLiteral1764791452, (Exception_t *)NULL, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1,XslTransform_Transform_m2990866288_RuntimeMethod_var);
	}

IL_0017:
	{
		TextWriter_t3478189236 * L_2 = ___output2;
		CompiledStylesheet_t759457236 * L_3 = __this->get_s_3();
		NullCheck(L_3);
		Hashtable_t1853889766 * L_4 = CompiledStylesheet_get_Outputs_m1025770811(L_3, /*hidden argument*/NULL);
		TextWriter_t3478189236 * L_5 = ___output2;
		NullCheck(L_5);
		Encoding_t1523322056 * L_6 = VirtFuncInvoker0< Encoding_t1523322056 * >::Invoke(5 /* System.Text.Encoding System.IO.TextWriter::get_Encoding() */, L_5);
		GenericOutputter_t1694878872 * L_7 = (GenericOutputter_t1694878872 *)il2cpp_codegen_object_new(GenericOutputter_t1694878872_il2cpp_TypeInfo_var);
		GenericOutputter__ctor_m2516974096(L_7, L_2, L_4, L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		CompiledStylesheet_t759457236 * L_8 = __this->get_s_3();
		RuntimeObject * L_9 = __this->get_debugger_2();
		XslTransformProcessor_t3405861191 * L_10 = (XslTransformProcessor_t3405861191 *)il2cpp_codegen_object_new(XslTransformProcessor_t3405861191_il2cpp_TypeInfo_var);
		XslTransformProcessor__ctor_m2824512103(L_10, L_8, L_9, /*hidden argument*/NULL);
		XPathNavigator_t787956054 * L_11 = ___input0;
		Outputter_t889105973 * L_12 = V_0;
		XsltArgumentList_t741251601 * L_13 = ___args1;
		XmlResolver_t626023767 * L_14 = ___resolver3;
		NullCheck(L_10);
		XslTransformProcessor_Process_m1084818256(L_10, L_11, L_12, L_13, L_14, /*hidden argument*/NULL);
		Outputter_t889105973 * L_15 = V_0;
		NullCheck(L_15);
		VirtActionInvoker0::Invoke(14 /* System.Void Mono.Xml.Xsl.Outputter::Done() */, L_15);
		TextWriter_t3478189236 * L_16 = ___output2;
		NullCheck(L_16);
		VirtActionInvoker0::Invoke(9 /* System.Void System.IO.TextWriter::Flush() */, L_16);
		return;
	}
}
// System.Void System.Xml.Xsl.XslTransform::Transform(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void XslTransform_Transform_m3259636259 (XslTransform_t2320758400 * __this, String_t* ___inputfile0, String_t* ___outputfile1, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___inputfile0;
		String_t* L_1 = ___outputfile1;
		XmlResolver_t626023767 * L_2 = __this->get_xmlResolver_4();
		XslTransform_Transform_m1032190196(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.Xsl.XslTransform::Transform(System.String,System.String,System.Xml.XmlResolver)
extern "C" IL2CPP_METHOD_ATTR void XslTransform_Transform_m1032190196 (XslTransform_t2320758400 * __this, String_t* ___inputfile0, String_t* ___outputfile1, XmlResolver_t626023767 * ___resolver2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XslTransform_Transform_m1032190196_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Stream_t1273022909 * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		String_t* L_0 = ___outputfile1;
		FileStream_t4292183065 * L_1 = (FileStream_t4292183065 *)il2cpp_codegen_object_new(FileStream_t4292183065_il2cpp_TypeInfo_var);
		FileStream__ctor_m3135402178(L_1, L_0, 2, 3, /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_0009:
	try
	{ // begin try (depth: 1)
		String_t* L_2 = ___inputfile0;
		XPathDocument_t1673143697 * L_3 = (XPathDocument_t1673143697 *)il2cpp_codegen_object_new(XPathDocument_t1673143697_il2cpp_TypeInfo_var);
		XPathDocument__ctor_m1637441265(L_3, L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		XPathNavigator_t787956054 * L_4 = XPathDocument_CreateNavigator_m1454500353(L_3, /*hidden argument*/NULL);
		Stream_t1273022909 * L_5 = V_0;
		XmlResolver_t626023767 * L_6 = ___resolver2;
		XslTransform_Transform_m471343747(__this, L_4, (XsltArgumentList_t741251601 *)NULL, L_5, L_6, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x2F, FINALLY_0022);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0022;
	}

FINALLY_0022:
	{ // begin finally (depth: 1)
		{
			Stream_t1273022909 * L_7 = V_0;
			if (!L_7)
			{
				goto IL_002e;
			}
		}

IL_0028:
		{
			Stream_t1273022909 * L_8 = V_0;
			NullCheck(L_8);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_8);
		}

IL_002e:
		{
			IL2CPP_END_FINALLY(34)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(34)
	{
		IL2CPP_JUMP_TBL(0x2F, IL_002f)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_002f:
	{
		return;
	}
}
// System.Void System.Xml.Xsl.XslTransform::Load(System.String)
extern "C" IL2CPP_METHOD_ATTR void XslTransform_Load_m446014609 (XslTransform_t2320758400 * __this, String_t* ___url0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___url0;
		XslTransform_Load_m3882090966(__this, L_0, (XmlResolver_t626023767 *)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.Xsl.XslTransform::Load(System.String,System.Xml.XmlResolver)
extern "C" IL2CPP_METHOD_ATTR void XslTransform_Load_m3882090966 (XslTransform_t2320758400 * __this, String_t* ___url0, XmlResolver_t626023767 * ___resolver1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XslTransform_Load_m3882090966_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	XmlResolver_t626023767 * V_0 = NULL;
	Uri_t100236324 * V_1 = NULL;
	Stream_t1273022909 * V_2 = NULL;
	XmlTextReader_t4233384356 * V_3 = NULL;
	XmlValidatingReader_t1719295192 * V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		XmlResolver_t626023767 * L_0 = ___resolver1;
		V_0 = L_0;
		XmlResolver_t626023767 * L_1 = V_0;
		if (L_1)
		{
			goto IL_000e;
		}
	}
	{
		XmlUrlResolver_t817895037 * L_2 = (XmlUrlResolver_t817895037 *)il2cpp_codegen_object_new(XmlUrlResolver_t817895037_il2cpp_TypeInfo_var);
		XmlUrlResolver__ctor_m1338399436(L_2, /*hidden argument*/NULL);
		V_0 = L_2;
	}

IL_000e:
	{
		XmlResolver_t626023767 * L_3 = V_0;
		String_t* L_4 = ___url0;
		NullCheck(L_3);
		Uri_t100236324 * L_5 = VirtFuncInvoker2< Uri_t100236324 *, Uri_t100236324 *, String_t* >::Invoke(6 /* System.Uri System.Xml.XmlResolver::ResolveUri(System.Uri,System.String) */, L_3, (Uri_t100236324 *)NULL, L_4);
		V_1 = L_5;
		XmlResolver_t626023767 * L_6 = V_0;
		Uri_t100236324 * L_7 = V_1;
		RuntimeTypeHandle_t3027515415  L_8 = { reinterpret_cast<intptr_t> (Stream_t1273022909_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_9 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		NullCheck(L_6);
		RuntimeObject * L_10 = VirtFuncInvoker3< RuntimeObject *, Uri_t100236324 *, String_t*, Type_t * >::Invoke(5 /* System.Object System.Xml.XmlResolver::GetEntity(System.Uri,System.String,System.Type) */, L_6, L_7, (String_t*)NULL, L_9);
		V_2 = ((Stream_t1273022909 *)IsInstClass((RuntimeObject*)L_10, Stream_t1273022909_il2cpp_TypeInfo_var));
	}

IL_002f:
	try
	{ // begin try (depth: 1)
		Uri_t100236324 * L_11 = V_1;
		NullCheck(L_11);
		String_t* L_12 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Uri::ToString() */, L_11);
		Stream_t1273022909 * L_13 = V_2;
		XmlTextReader_t4233384356 * L_14 = (XmlTextReader_t4233384356 *)il2cpp_codegen_object_new(XmlTextReader_t4233384356_il2cpp_TypeInfo_var);
		XmlTextReader__ctor_m1114649521(L_14, L_12, L_13, /*hidden argument*/NULL);
		V_3 = L_14;
		XmlTextReader_t4233384356 * L_15 = V_3;
		XmlResolver_t626023767 * L_16 = V_0;
		NullCheck(L_15);
		XmlTextReader_set_XmlResolver_m1445354776(L_15, L_16, /*hidden argument*/NULL);
		XmlTextReader_t4233384356 * L_17 = V_3;
		XmlValidatingReader_t1719295192 * L_18 = (XmlValidatingReader_t1719295192 *)il2cpp_codegen_object_new(XmlValidatingReader_t1719295192_il2cpp_TypeInfo_var);
		XmlValidatingReader__ctor_m746074126(L_18, L_17, /*hidden argument*/NULL);
		V_4 = L_18;
		XmlValidatingReader_t1719295192 * L_19 = V_4;
		XmlResolver_t626023767 * L_20 = V_0;
		NullCheck(L_19);
		XmlValidatingReader_set_XmlResolver_m3039624282(L_19, L_20, /*hidden argument*/NULL);
		XmlValidatingReader_t1719295192 * L_21 = V_4;
		NullCheck(L_21);
		XmlValidatingReader_set_ValidationType_m3850545770(L_21, 0, /*hidden argument*/NULL);
		XmlValidatingReader_t1719295192 * L_22 = V_4;
		XPathDocument_t1673143697 * L_23 = (XPathDocument_t1673143697 *)il2cpp_codegen_object_new(XPathDocument_t1673143697_il2cpp_TypeInfo_var);
		XPathDocument__ctor_m3434295591(L_23, L_22, 2, /*hidden argument*/NULL);
		NullCheck(L_23);
		XPathNavigator_t787956054 * L_24 = XPathDocument_CreateNavigator_m1454500353(L_23, /*hidden argument*/NULL);
		XmlResolver_t626023767 * L_25 = ___resolver1;
		XslTransform_Load_m3491484097(__this, L_24, L_25, (Evidence_t2008144148 *)NULL, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x82, FINALLY_0075);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0075;
	}

FINALLY_0075:
	{ // begin finally (depth: 1)
		{
			Stream_t1273022909 * L_26 = V_2;
			if (!L_26)
			{
				goto IL_0081;
			}
		}

IL_007b:
		{
			Stream_t1273022909 * L_27 = V_2;
			NullCheck(L_27);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_27);
		}

IL_0081:
		{
			IL2CPP_END_FINALLY(117)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(117)
	{
		IL2CPP_JUMP_TBL(0x82, IL_0082)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0082:
	{
		return;
	}
}
// System.Void System.Xml.Xsl.XslTransform::Load(System.Xml.XmlReader)
extern "C" IL2CPP_METHOD_ATTR void XslTransform_Load_m2134675007 (XslTransform_t2320758400 * __this, XmlReader_t3121518892 * ___stylesheet0, const RuntimeMethod* method)
{
	{
		XmlReader_t3121518892 * L_0 = ___stylesheet0;
		XslTransform_Load_m2788296096(__this, L_0, (XmlResolver_t626023767 *)NULL, (Evidence_t2008144148 *)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.Xsl.XslTransform::Load(System.Xml.XmlReader,System.Xml.XmlResolver)
extern "C" IL2CPP_METHOD_ATTR void XslTransform_Load_m381372127 (XslTransform_t2320758400 * __this, XmlReader_t3121518892 * ___stylesheet0, XmlResolver_t626023767 * ___resolver1, const RuntimeMethod* method)
{
	{
		XmlReader_t3121518892 * L_0 = ___stylesheet0;
		XmlResolver_t626023767 * L_1 = ___resolver1;
		XslTransform_Load_m2788296096(__this, L_0, L_1, (Evidence_t2008144148 *)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.Xsl.XslTransform::Load(System.Xml.XPath.XPathNavigator)
extern "C" IL2CPP_METHOD_ATTR void XslTransform_Load_m343962499 (XslTransform_t2320758400 * __this, XPathNavigator_t787956054 * ___stylesheet0, const RuntimeMethod* method)
{
	{
		XPathNavigator_t787956054 * L_0 = ___stylesheet0;
		XslTransform_Load_m3491484097(__this, L_0, (XmlResolver_t626023767 *)NULL, (Evidence_t2008144148 *)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.Xsl.XslTransform::Load(System.Xml.XPath.XPathNavigator,System.Xml.XmlResolver)
extern "C" IL2CPP_METHOD_ATTR void XslTransform_Load_m3740515843 (XslTransform_t2320758400 * __this, XPathNavigator_t787956054 * ___stylesheet0, XmlResolver_t626023767 * ___resolver1, const RuntimeMethod* method)
{
	{
		XPathNavigator_t787956054 * L_0 = ___stylesheet0;
		XmlResolver_t626023767 * L_1 = ___resolver1;
		XslTransform_Load_m3491484097(__this, L_0, L_1, (Evidence_t2008144148 *)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.Xsl.XslTransform::Load(System.Xml.XPath.IXPathNavigable)
extern "C" IL2CPP_METHOD_ATTR void XslTransform_Load_m1092902637 (XslTransform_t2320758400 * __this, RuntimeObject* ___stylesheet0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XslTransform_Load_m1092902637_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___stylesheet0;
		NullCheck(L_0);
		XPathNavigator_t787956054 * L_1 = InterfaceFuncInvoker0< XPathNavigator_t787956054 * >::Invoke(0 /* System.Xml.XPath.XPathNavigator System.Xml.XPath.IXPathNavigable::CreateNavigator() */, IXPathNavigable_t2716156786_il2cpp_TypeInfo_var, L_0);
		XslTransform_Load_m3740515843(__this, L_1, (XmlResolver_t626023767 *)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.Xsl.XslTransform::Load(System.Xml.XPath.IXPathNavigable,System.Xml.XmlResolver)
extern "C" IL2CPP_METHOD_ATTR void XslTransform_Load_m2876062051 (XslTransform_t2320758400 * __this, RuntimeObject* ___stylesheet0, XmlResolver_t626023767 * ___resolver1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XslTransform_Load_m2876062051_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___stylesheet0;
		NullCheck(L_0);
		XPathNavigator_t787956054 * L_1 = InterfaceFuncInvoker0< XPathNavigator_t787956054 * >::Invoke(0 /* System.Xml.XPath.XPathNavigator System.Xml.XPath.IXPathNavigable::CreateNavigator() */, IXPathNavigable_t2716156786_il2cpp_TypeInfo_var, L_0);
		XmlResolver_t626023767 * L_2 = ___resolver1;
		XslTransform_Load_m3740515843(__this, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.Xsl.XslTransform::Load(System.Xml.XPath.IXPathNavigable,System.Xml.XmlResolver,System.Security.Policy.Evidence)
extern "C" IL2CPP_METHOD_ATTR void XslTransform_Load_m3760997482 (XslTransform_t2320758400 * __this, RuntimeObject* ___stylesheet0, XmlResolver_t626023767 * ___resolver1, Evidence_t2008144148 * ___evidence2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XslTransform_Load_m3760997482_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___stylesheet0;
		NullCheck(L_0);
		XPathNavigator_t787956054 * L_1 = InterfaceFuncInvoker0< XPathNavigator_t787956054 * >::Invoke(0 /* System.Xml.XPath.XPathNavigator System.Xml.XPath.IXPathNavigable::CreateNavigator() */, IXPathNavigable_t2716156786_il2cpp_TypeInfo_var, L_0);
		XmlResolver_t626023767 * L_2 = ___resolver1;
		Evidence_t2008144148 * L_3 = ___evidence2;
		XslTransform_Load_m3491484097(__this, L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.Xsl.XslTransform::Load(System.Xml.XPath.XPathNavigator,System.Xml.XmlResolver,System.Security.Policy.Evidence)
extern "C" IL2CPP_METHOD_ATTR void XslTransform_Load_m3491484097 (XslTransform_t2320758400 * __this, XPathNavigator_t787956054 * ___stylesheet0, XmlResolver_t626023767 * ___resolver1, Evidence_t2008144148 * ___evidence2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XslTransform_Load_m3491484097_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = __this->get_debugger_2();
		Compiler_t485846590 * L_1 = (Compiler_t485846590 *)il2cpp_codegen_object_new(Compiler_t485846590_il2cpp_TypeInfo_var);
		Compiler__ctor_m2510731679(L_1, L_0, /*hidden argument*/NULL);
		XPathNavigator_t787956054 * L_2 = ___stylesheet0;
		XmlResolver_t626023767 * L_3 = ___resolver1;
		Evidence_t2008144148 * L_4 = ___evidence2;
		NullCheck(L_1);
		CompiledStylesheet_t759457236 * L_5 = Compiler_Compile_m2130682056(L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		__this->set_s_3(L_5);
		return;
	}
}
// System.Void System.Xml.Xsl.XslTransform::Load(System.Xml.XmlReader,System.Xml.XmlResolver,System.Security.Policy.Evidence)
extern "C" IL2CPP_METHOD_ATTR void XslTransform_Load_m2788296096 (XslTransform_t2320758400 * __this, XmlReader_t3121518892 * ___stylesheet0, XmlResolver_t626023767 * ___resolver1, Evidence_t2008144148 * ___evidence2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XslTransform_Load_m2788296096_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		XmlReader_t3121518892 * L_0 = ___stylesheet0;
		XPathDocument_t1673143697 * L_1 = (XPathDocument_t1673143697 *)il2cpp_codegen_object_new(XPathDocument_t1673143697_il2cpp_TypeInfo_var);
		XPathDocument__ctor_m3434295591(L_1, L_0, 2, /*hidden argument*/NULL);
		NullCheck(L_1);
		XPathNavigator_t787956054 * L_2 = XPathDocument_CreateNavigator_m1454500353(L_1, /*hidden argument*/NULL);
		XmlResolver_t626023767 * L_3 = ___resolver1;
		Evidence_t2008144148 * L_4 = ___evidence2;
		XslTransform_Load_m3491484097(__this, L_2, L_3, L_4, /*hidden argument*/NULL);
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
// System.Void System.Xml.Xsl.XsltSettings::.ctor()
extern "C" IL2CPP_METHOD_ATTR void XsltSettings__ctor_m3947832962 (XsltSettings_t3615464394 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.Xsl.XsltSettings::.ctor(System.Boolean,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void XsltSettings__ctor_m2524224294 (XsltSettings_t3615464394 * __this, bool ___enableDocumentFunction0, bool ___enableScript1, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		bool L_0 = ___enableDocumentFunction0;
		__this->set_enableDocument_3(L_0);
		bool L_1 = ___enableScript1;
		__this->set_enableScript_4(L_1);
		return;
	}
}
// System.Void System.Xml.Xsl.XsltSettings::.ctor(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void XsltSettings__ctor_m571040767 (XsltSettings_t3615464394 * __this, bool ___readOnly0, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		bool L_0 = ___readOnly0;
		__this->set_readOnly_2(L_0);
		return;
	}
}
// System.Void System.Xml.Xsl.XsltSettings::.cctor()
extern "C" IL2CPP_METHOD_ATTR void XsltSettings__cctor_m1345135331 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XsltSettings__cctor_m1345135331_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		XsltSettings_t3615464394 * L_0 = (XsltSettings_t3615464394 *)il2cpp_codegen_object_new(XsltSettings_t3615464394_il2cpp_TypeInfo_var);
		XsltSettings__ctor_m571040767(L_0, (bool)1, /*hidden argument*/NULL);
		((XsltSettings_t3615464394_StaticFields*)il2cpp_codegen_static_fields_for(XsltSettings_t3615464394_il2cpp_TypeInfo_var))->set_defaultSettings_0(L_0);
		XsltSettings_t3615464394 * L_1 = (XsltSettings_t3615464394 *)il2cpp_codegen_object_new(XsltSettings_t3615464394_il2cpp_TypeInfo_var);
		XsltSettings__ctor_m571040767(L_1, (bool)1, /*hidden argument*/NULL);
		((XsltSettings_t3615464394_StaticFields*)il2cpp_codegen_static_fields_for(XsltSettings_t3615464394_il2cpp_TypeInfo_var))->set_trustedXslt_1(L_1);
		XsltSettings_t3615464394 * L_2 = ((XsltSettings_t3615464394_StaticFields*)il2cpp_codegen_static_fields_for(XsltSettings_t3615464394_il2cpp_TypeInfo_var))->get_trustedXslt_1();
		NullCheck(L_2);
		L_2->set_enableDocument_3((bool)1);
		XsltSettings_t3615464394 * L_3 = ((XsltSettings_t3615464394_StaticFields*)il2cpp_codegen_static_fields_for(XsltSettings_t3615464394_il2cpp_TypeInfo_var))->get_trustedXslt_1();
		NullCheck(L_3);
		L_3->set_enableScript_4((bool)1);
		return;
	}
}
// System.Xml.Xsl.XsltSettings System.Xml.Xsl.XsltSettings::get_Default()
extern "C" IL2CPP_METHOD_ATTR XsltSettings_t3615464394 * XsltSettings_get_Default_m220706120 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XsltSettings_get_Default_m220706120_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(XsltSettings_t3615464394_il2cpp_TypeInfo_var);
		XsltSettings_t3615464394 * L_0 = ((XsltSettings_t3615464394_StaticFields*)il2cpp_codegen_static_fields_for(XsltSettings_t3615464394_il2cpp_TypeInfo_var))->get_defaultSettings_0();
		return L_0;
	}
}
// System.Xml.Xsl.XsltSettings System.Xml.Xsl.XsltSettings::get_TrustedXslt()
extern "C" IL2CPP_METHOD_ATTR XsltSettings_t3615464394 * XsltSettings_get_TrustedXslt_m1993617110 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XsltSettings_get_TrustedXslt_m1993617110_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(XsltSettings_t3615464394_il2cpp_TypeInfo_var);
		XsltSettings_t3615464394 * L_0 = ((XsltSettings_t3615464394_StaticFields*)il2cpp_codegen_static_fields_for(XsltSettings_t3615464394_il2cpp_TypeInfo_var))->get_trustedXslt_1();
		return L_0;
	}
}
// System.Boolean System.Xml.Xsl.XsltSettings::get_EnableDocumentFunction()
extern "C" IL2CPP_METHOD_ATTR bool XsltSettings_get_EnableDocumentFunction_m698182364 (XsltSettings_t3615464394 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_enableDocument_3();
		return L_0;
	}
}
// System.Void System.Xml.Xsl.XsltSettings::set_EnableDocumentFunction(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void XsltSettings_set_EnableDocumentFunction_m3827075956 (XsltSettings_t3615464394 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_readOnly_2();
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		bool L_1 = ___value0;
		__this->set_enableDocument_3(L_1);
	}

IL_0012:
	{
		return;
	}
}
// System.Boolean System.Xml.Xsl.XsltSettings::get_EnableScript()
extern "C" IL2CPP_METHOD_ATTR bool XsltSettings_get_EnableScript_m3919537307 (XsltSettings_t3615464394 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_enableScript_4();
		return L_0;
	}
}
// System.Void System.Xml.Xsl.XsltSettings::set_EnableScript(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void XsltSettings_set_EnableScript_m2001720229 (XsltSettings_t3615464394 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_readOnly_2();
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		bool L_1 = ___value0;
		__this->set_enableScript_4(L_1);
	}

IL_0012:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
