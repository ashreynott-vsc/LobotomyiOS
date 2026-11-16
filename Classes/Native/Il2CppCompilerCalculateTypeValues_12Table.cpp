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


// System.EventHandler
struct EventHandler_t1348719766;
// System.ComponentModel.Design.CommandID
struct CommandID_t2504350095;
// System.Collections.Hashtable
struct Hashtable_t1853889766;
// System.ComponentModel.ICustomTypeDescriptor
struct ICustomTypeDescriptor_t1654759486;
// System.Runtime.Remoting.ServerIdentity
struct ServerIdentity_t2342208608;
// System.Collections.ArrayList
struct ArrayList_t2718874744;
// System.String
struct String_t;
// System.ComponentModel.ListEntry
struct ListEntry_t1182276877;
// System.Delegate
struct Delegate_t1188392813;
// System.ComponentModel.AsyncOperation
struct AsyncOperation_t2743648699;
// System.ComponentModel.DoWorkEventHandler
struct DoWorkEventHandler_t3704776641;
// System.ComponentModel.ProgressChangedEventHandler
struct ProgressChangedEventHandler_t1213062803;
// System.ComponentModel.RunWorkerCompletedEventHandler
struct RunWorkerCompletedEventHandler_t2386199656;
// System.Threading.SynchronizationContext
struct SynchronizationContext_t2326897723;
// System.Collections.Specialized.NameObjectCollectionBase
struct NameObjectCollectionBase_t2091847364;
// System.Collections.Specialized.ListDictionary/DictionaryNode
struct DictionaryNode_t417719465;
// System.Collections.IComparer
struct IComparer_t1540313114;
// System.Collections.Specialized.ListDictionary
struct ListDictionary_t1624492310;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t950877179;
// System.Collections.IEqualityComparer
struct IEqualityComparer_t1493878338;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1693217257;
// System.Collections.Specialized.NameObjectCollectionBase/_Item
struct _Item_t2272350267;
// System.Collections.IHashCodeProvider
struct IHashCodeProvider_t267601189;
// System.Collections.Specialized.NameObjectCollectionBase/KeysCollection
struct KeysCollection_t1318642398;
// System.Collections.IEnumerator
struct IEnumerator_t1853284238;
// System.Attribute[]
struct AttributeU5BU5D_t1575011174;
// System.ComponentModel.AttributeCollection
struct AttributeCollection_t4221220734;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Collections.ICollection
struct ICollection_t3904884886;
// System.ComponentModel.TypeConverter
struct TypeConverter_t2249118273;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Void
struct Void_t1185182177;
// System.Type
struct Type_t;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t386037858;
// System.ComponentModel.TypeConverter/StandardValuesCollection
struct StandardValuesCollection_t2184948248;
// System.Exception
struct Exception_t;
// System.ComponentModel.CategoryAttribute
struct CategoryAttribute_t39585132;
// System.ComponentModel.MemberDescriptor
struct MemberDescriptor_t3815403747;
// System.String[]
struct StringU5BU5D_t1281789340;
// System.ComponentModel.IComponent
struct IComponent_t2320218252;
// System.ComponentModel.EventHandlerList
struct EventHandlerList_t1108123056;
// System.ComponentModel.ISite
struct ISite_t4006303512;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t1677132599;
// System.Threading.SendOrPostCallback
struct SendOrPostCallback_t2750080073;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.AsyncCallback
struct AsyncCallback_t3962456242;




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
#ifndef MENUCOMMAND_T2745965391_H
#define MENUCOMMAND_T2745965391_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.Design.MenuCommand
struct  MenuCommand_t2745965391  : public RuntimeObject
{
public:
	// System.EventHandler System.ComponentModel.Design.MenuCommand::handler
	EventHandler_t1348719766 * ___handler_0;
	// System.ComponentModel.Design.CommandID System.ComponentModel.Design.MenuCommand::command
	CommandID_t2504350095 * ___command_1;
	// System.Boolean System.ComponentModel.Design.MenuCommand::ischecked
	bool ___ischecked_2;
	// System.Boolean System.ComponentModel.Design.MenuCommand::enabled
	bool ___enabled_3;
	// System.Boolean System.ComponentModel.Design.MenuCommand::issupported
	bool ___issupported_4;
	// System.Boolean System.ComponentModel.Design.MenuCommand::visible
	bool ___visible_5;
	// System.Collections.Hashtable System.ComponentModel.Design.MenuCommand::properties
	Hashtable_t1853889766 * ___properties_6;
	// System.EventHandler System.ComponentModel.Design.MenuCommand::CommandChanged
	EventHandler_t1348719766 * ___CommandChanged_7;

public:
	inline static int32_t get_offset_of_handler_0() { return static_cast<int32_t>(offsetof(MenuCommand_t2745965391, ___handler_0)); }
	inline EventHandler_t1348719766 * get_handler_0() const { return ___handler_0; }
	inline EventHandler_t1348719766 ** get_address_of_handler_0() { return &___handler_0; }
	inline void set_handler_0(EventHandler_t1348719766 * value)
	{
		___handler_0 = value;
		Il2CppCodeGenWriteBarrier((&___handler_0), value);
	}

	inline static int32_t get_offset_of_command_1() { return static_cast<int32_t>(offsetof(MenuCommand_t2745965391, ___command_1)); }
	inline CommandID_t2504350095 * get_command_1() const { return ___command_1; }
	inline CommandID_t2504350095 ** get_address_of_command_1() { return &___command_1; }
	inline void set_command_1(CommandID_t2504350095 * value)
	{
		___command_1 = value;
		Il2CppCodeGenWriteBarrier((&___command_1), value);
	}

	inline static int32_t get_offset_of_ischecked_2() { return static_cast<int32_t>(offsetof(MenuCommand_t2745965391, ___ischecked_2)); }
	inline bool get_ischecked_2() const { return ___ischecked_2; }
	inline bool* get_address_of_ischecked_2() { return &___ischecked_2; }
	inline void set_ischecked_2(bool value)
	{
		___ischecked_2 = value;
	}

	inline static int32_t get_offset_of_enabled_3() { return static_cast<int32_t>(offsetof(MenuCommand_t2745965391, ___enabled_3)); }
	inline bool get_enabled_3() const { return ___enabled_3; }
	inline bool* get_address_of_enabled_3() { return &___enabled_3; }
	inline void set_enabled_3(bool value)
	{
		___enabled_3 = value;
	}

	inline static int32_t get_offset_of_issupported_4() { return static_cast<int32_t>(offsetof(MenuCommand_t2745965391, ___issupported_4)); }
	inline bool get_issupported_4() const { return ___issupported_4; }
	inline bool* get_address_of_issupported_4() { return &___issupported_4; }
	inline void set_issupported_4(bool value)
	{
		___issupported_4 = value;
	}

	inline static int32_t get_offset_of_visible_5() { return static_cast<int32_t>(offsetof(MenuCommand_t2745965391, ___visible_5)); }
	inline bool get_visible_5() const { return ___visible_5; }
	inline bool* get_address_of_visible_5() { return &___visible_5; }
	inline void set_visible_5(bool value)
	{
		___visible_5 = value;
	}

	inline static int32_t get_offset_of_properties_6() { return static_cast<int32_t>(offsetof(MenuCommand_t2745965391, ___properties_6)); }
	inline Hashtable_t1853889766 * get_properties_6() const { return ___properties_6; }
	inline Hashtable_t1853889766 ** get_address_of_properties_6() { return &___properties_6; }
	inline void set_properties_6(Hashtable_t1853889766 * value)
	{
		___properties_6 = value;
		Il2CppCodeGenWriteBarrier((&___properties_6), value);
	}

	inline static int32_t get_offset_of_CommandChanged_7() { return static_cast<int32_t>(offsetof(MenuCommand_t2745965391, ___CommandChanged_7)); }
	inline EventHandler_t1348719766 * get_CommandChanged_7() const { return ___CommandChanged_7; }
	inline EventHandler_t1348719766 ** get_address_of_CommandChanged_7() { return &___CommandChanged_7; }
	inline void set_CommandChanged_7(EventHandler_t1348719766 * value)
	{
		___CommandChanged_7 = value;
		Il2CppCodeGenWriteBarrier((&___CommandChanged_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MENUCOMMAND_T2745965391_H
#ifndef CUSTOMTYPEDESCRIPTOR_T3093649079_H
#define CUSTOMTYPEDESCRIPTOR_T3093649079_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.CustomTypeDescriptor
struct  CustomTypeDescriptor_t3093649079  : public RuntimeObject
{
public:
	// System.ComponentModel.ICustomTypeDescriptor System.ComponentModel.CustomTypeDescriptor::_parent
	RuntimeObject* ____parent_0;

public:
	inline static int32_t get_offset_of__parent_0() { return static_cast<int32_t>(offsetof(CustomTypeDescriptor_t3093649079, ____parent_0)); }
	inline RuntimeObject* get__parent_0() const { return ____parent_0; }
	inline RuntimeObject** get_address_of__parent_0() { return &____parent_0; }
	inline void set__parent_0(RuntimeObject* value)
	{
		____parent_0 = value;
		Il2CppCodeGenWriteBarrier((&____parent_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CUSTOMTYPEDESCRIPTOR_T3093649079_H
#ifndef LICENSECONTEXT_T2141136407_H
#define LICENSECONTEXT_T2141136407_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.LicenseContext
struct  LicenseContext_t2141136407  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LICENSECONTEXT_T2141136407_H
#ifndef STANDARDCOMMANDS_T1676831160_H
#define STANDARDCOMMANDS_T1676831160_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.Design.StandardCommands
struct  StandardCommands_t1676831160  : public RuntimeObject
{
public:

public:
};

struct StandardCommands_t1676831160_StaticFields
{
public:
	// System.ComponentModel.Design.CommandID System.ComponentModel.Design.StandardCommands::AlignBottom
	CommandID_t2504350095 * ___AlignBottom_0;
	// System.ComponentModel.Design.CommandID System.ComponentModel.Design.StandardCommands::AlignHorizontalCenters
	CommandID_t2504350095 * ___AlignHorizontalCenters_1;
	// System.ComponentModel.Design.CommandID System.ComponentModel.Design.StandardCommands::AlignLeft
	CommandID_t2504350095 * ___AlignLeft_2;
	// System.ComponentModel.Design.CommandID System.ComponentModel.Design.StandardCommands::AlignRight
	CommandID_t2504350095 * ___AlignRight_3;
	// System.ComponentModel.Design.CommandID System.ComponentModel.Design.StandardCommands::AlignToGrid
	CommandID_t2504350095 * ___AlignToGrid_4;
	// System.ComponentModel.Design.CommandID System.ComponentModel.Design.StandardCommands::AlignTop
	CommandID_t2504350095 * ___AlignTop_5;
	// System.ComponentModel.Design.CommandID System.ComponentModel.Design.StandardCommands::AlignVerticalCenters
	CommandID_t2504350095 * ___AlignVerticalCenters_6;
	// System.ComponentModel.Design.CommandID System.ComponentModel.Design.StandardCommands::ArrangeBottom
	CommandID_t2504350095 * ___ArrangeBottom_7;
	// System.ComponentModel.Design.CommandID System.ComponentModel.Design.StandardCommands::ArrangeIcons
	CommandID_t2504350095 * ___ArrangeIcons_8;
	// System.ComponentModel.Design.CommandID System.ComponentModel.Design.StandardCommands::ArrangeRight
	CommandID_t2504350095 * ___ArrangeRight_9;
	// System.ComponentModel.Design.CommandID System.ComponentModel.Design.StandardCommands::BringForward
	CommandID_t2504350095 * ___BringForward_10;
	// System.ComponentModel.Design.CommandID System.ComponentModel.Design.StandardCommands::BringToFront
	CommandID_t2504350095 * ___BringToFront_11;
	// System.ComponentModel.Design.CommandID System.ComponentModel.Design.StandardCommands::CenterHorizontally
	CommandID_t2504350095 * ___CenterHorizontally_12;
	// System.ComponentModel.Design.CommandID System.ComponentModel.Design.StandardCommands::CenterVertically
	CommandID_t2504350095 * ___CenterVertically_13;
	// System.ComponentModel.Design.CommandID System.ComponentModel.Design.StandardCommands::Copy
	CommandID_t2504350095 * ___Copy_14;
	// System.ComponentModel.Design.CommandID System.ComponentModel.Design.StandardCommands::Cut
	CommandID_t2504350095 * ___Cut_15;
	// System.ComponentModel.Design.CommandID System.ComponentModel.Design.StandardCommands::Delete
	CommandID_t2504350095 * ___Delete_16;
	// System.ComponentModel.Design.CommandID System.ComponentModel.Design.StandardCommands::F1Help
	CommandID_t2504350095 * ___F1Help_17;
	// System.ComponentModel.Design.CommandID System.ComponentModel.Design.StandardCommands::Group
	CommandID_t2504350095 * ___Group_18;
	// System.ComponentModel.Design.CommandID System.ComponentModel.Design.StandardCommands::HorizSpaceConcatenate
	CommandID_t2504350095 * ___HorizSpaceConcatenate_19;
	// System.ComponentModel.Design.CommandID System.ComponentModel.Design.StandardCommands::HorizSpaceDecrease
	CommandID_t2504350095 * ___HorizSpaceDecrease_20;
	// System.ComponentModel.Design.CommandID System.ComponentModel.Design.StandardCommands::HorizSpaceIncrease
	CommandID_t2504350095 * ___HorizSpaceIncrease_21;
	// System.ComponentModel.Design.CommandID System.ComponentModel.Design.StandardCommands::HorizSpaceMakeEqual
	CommandID_t2504350095 * ___HorizSpaceMakeEqual_22;
	// System.ComponentModel.Design.CommandID System.ComponentModel.Design.StandardCommands::LineupIcons
	CommandID_t2504350095 * ___LineupIcons_23;
	// System.ComponentModel.Design.CommandID System.ComponentModel.Design.StandardCommands::LockControls
	CommandID_t2504350095 * ___LockControls_24;
	// System.ComponentModel.Design.CommandID System.ComponentModel.Design.StandardCommands::MultiLevelRedo
	CommandID_t2504350095 * ___MultiLevelRedo_25;
	// System.ComponentModel.Design.CommandID System.ComponentModel.Design.StandardCommands::MultiLevelUndo
	CommandID_t2504350095 * ___MultiLevelUndo_26;
	// System.ComponentModel.Design.CommandID System.ComponentModel.Design.StandardCommands::Paste
	CommandID_t2504350095 * ___Paste_27;
	// System.ComponentModel.Design.CommandID System.ComponentModel.Design.StandardCommands::Properties
	CommandID_t2504350095 * ___Properties_28;
	// System.ComponentModel.Design.CommandID System.ComponentModel.Design.StandardCommands::PropertiesWindow
	CommandID_t2504350095 * ___PropertiesWindow_29;
	// System.ComponentModel.Design.CommandID System.ComponentModel.Design.StandardCommands::Redo
	CommandID_t2504350095 * ___Redo_30;
	// System.ComponentModel.Design.CommandID System.ComponentModel.Design.StandardCommands::Replace
	CommandID_t2504350095 * ___Replace_31;
	// System.ComponentModel.Design.CommandID System.ComponentModel.Design.StandardCommands::SelectAll
	CommandID_t2504350095 * ___SelectAll_32;
	// System.ComponentModel.Design.CommandID System.ComponentModel.Design.StandardCommands::SendBackward
	CommandID_t2504350095 * ___SendBackward_33;
	// System.ComponentModel.Design.CommandID System.ComponentModel.Design.StandardCommands::SendToBack
	CommandID_t2504350095 * ___SendToBack_34;
	// System.ComponentModel.Design.CommandID System.ComponentModel.Design.StandardCommands::ShowGrid
	CommandID_t2504350095 * ___ShowGrid_35;
	// System.ComponentModel.Design.CommandID System.ComponentModel.Design.StandardCommands::ShowLargeIcons
	CommandID_t2504350095 * ___ShowLargeIcons_36;
	// System.ComponentModel.Design.CommandID System.ComponentModel.Design.StandardCommands::SizeToControl
	CommandID_t2504350095 * ___SizeToControl_37;
	// System.ComponentModel.Design.CommandID System.ComponentModel.Design.StandardCommands::SizeToControlHeight
	CommandID_t2504350095 * ___SizeToControlHeight_38;
	// System.ComponentModel.Design.CommandID System.ComponentModel.Design.StandardCommands::SizeToControlWidth
	CommandID_t2504350095 * ___SizeToControlWidth_39;
	// System.ComponentModel.Design.CommandID System.ComponentModel.Design.StandardCommands::SizeToFit
	CommandID_t2504350095 * ___SizeToFit_40;
	// System.ComponentModel.Design.CommandID System.ComponentModel.Design.StandardCommands::SizeToGrid
	CommandID_t2504350095 * ___SizeToGrid_41;
	// System.ComponentModel.Design.CommandID System.ComponentModel.Design.StandardCommands::SnapToGrid
	CommandID_t2504350095 * ___SnapToGrid_42;
	// System.ComponentModel.Design.CommandID System.ComponentModel.Design.StandardCommands::TabOrder
	CommandID_t2504350095 * ___TabOrder_43;
	// System.ComponentModel.Design.CommandID System.ComponentModel.Design.StandardCommands::Undo
	CommandID_t2504350095 * ___Undo_44;
	// System.ComponentModel.Design.CommandID System.ComponentModel.Design.StandardCommands::Ungroup
	CommandID_t2504350095 * ___Ungroup_45;
	// System.ComponentModel.Design.CommandID System.ComponentModel.Design.StandardCommands::VerbFirst
	CommandID_t2504350095 * ___VerbFirst_46;
	// System.ComponentModel.Design.CommandID System.ComponentModel.Design.StandardCommands::VerbLast
	CommandID_t2504350095 * ___VerbLast_47;
	// System.ComponentModel.Design.CommandID System.ComponentModel.Design.StandardCommands::VertSpaceConcatenate
	CommandID_t2504350095 * ___VertSpaceConcatenate_48;
	// System.ComponentModel.Design.CommandID System.ComponentModel.Design.StandardCommands::VertSpaceDecrease
	CommandID_t2504350095 * ___VertSpaceDecrease_49;
	// System.ComponentModel.Design.CommandID System.ComponentModel.Design.StandardCommands::VertSpaceIncrease
	CommandID_t2504350095 * ___VertSpaceIncrease_50;
	// System.ComponentModel.Design.CommandID System.ComponentModel.Design.StandardCommands::VertSpaceMakeEqual
	CommandID_t2504350095 * ___VertSpaceMakeEqual_51;
	// System.ComponentModel.Design.CommandID System.ComponentModel.Design.StandardCommands::ViewGrid
	CommandID_t2504350095 * ___ViewGrid_52;
	// System.ComponentModel.Design.CommandID System.ComponentModel.Design.StandardCommands::DocumentOutline
	CommandID_t2504350095 * ___DocumentOutline_53;
	// System.ComponentModel.Design.CommandID System.ComponentModel.Design.StandardCommands::ViewCode
	CommandID_t2504350095 * ___ViewCode_54;

public:
	inline static int32_t get_offset_of_AlignBottom_0() { return static_cast<int32_t>(offsetof(StandardCommands_t1676831160_StaticFields, ___AlignBottom_0)); }
	inline CommandID_t2504350095 * get_AlignBottom_0() const { return ___AlignBottom_0; }
	inline CommandID_t2504350095 ** get_address_of_AlignBottom_0() { return &___AlignBottom_0; }
	inline void set_AlignBottom_0(CommandID_t2504350095 * value)
	{
		___AlignBottom_0 = value;
		Il2CppCodeGenWriteBarrier((&___AlignBottom_0), value);
	}

	inline static int32_t get_offset_of_AlignHorizontalCenters_1() { return static_cast<int32_t>(offsetof(StandardCommands_t1676831160_StaticFields, ___AlignHorizontalCenters_1)); }
	inline CommandID_t2504350095 * get_AlignHorizontalCenters_1() const { return ___AlignHorizontalCenters_1; }
	inline CommandID_t2504350095 ** get_address_of_AlignHorizontalCenters_1() { return &___AlignHorizontalCenters_1; }
	inline void set_AlignHorizontalCenters_1(CommandID_t2504350095 * value)
	{
		___AlignHorizontalCenters_1 = value;
		Il2CppCodeGenWriteBarrier((&___AlignHorizontalCenters_1), value);
	}

	inline static int32_t get_offset_of_AlignLeft_2() { return static_cast<int32_t>(offsetof(StandardCommands_t1676831160_StaticFields, ___AlignLeft_2)); }
	inline CommandID_t2504350095 * get_AlignLeft_2() const { return ___AlignLeft_2; }
	inline CommandID_t2504350095 ** get_address_of_AlignLeft_2() { return &___AlignLeft_2; }
	inline void set_AlignLeft_2(CommandID_t2504350095 * value)
	{
		___AlignLeft_2 = value;
		Il2CppCodeGenWriteBarrier((&___AlignLeft_2), value);
	}

	inline static int32_t get_offset_of_AlignRight_3() { return static_cast<int32_t>(offsetof(StandardCommands_t1676831160_StaticFields, ___AlignRight_3)); }
	inline CommandID_t2504350095 * get_AlignRight_3() const { return ___AlignRight_3; }
	inline CommandID_t2504350095 ** get_address_of_AlignRight_3() { return &___AlignRight_3; }
	inline void set_AlignRight_3(CommandID_t2504350095 * value)
	{
		___AlignRight_3 = value;
		Il2CppCodeGenWriteBarrier((&___AlignRight_3), value);
	}

	inline static int32_t get_offset_of_AlignToGrid_4() { return static_cast<int32_t>(offsetof(StandardCommands_t1676831160_StaticFields, ___AlignToGrid_4)); }
	inline CommandID_t2504350095 * get_AlignToGrid_4() const { return ___AlignToGrid_4; }
	inline CommandID_t2504350095 ** get_address_of_AlignToGrid_4() { return &___AlignToGrid_4; }
	inline void set_AlignToGrid_4(CommandID_t2504350095 * value)
	{
		___AlignToGrid_4 = value;
		Il2CppCodeGenWriteBarrier((&___AlignToGrid_4), value);
	}

	inline static int32_t get_offset_of_AlignTop_5() { return static_cast<int32_t>(offsetof(StandardCommands_t1676831160_StaticFields, ___AlignTop_5)); }
	inline CommandID_t2504350095 * get_AlignTop_5() const { return ___AlignTop_5; }
	inline CommandID_t2504350095 ** get_address_of_AlignTop_5() { return &___AlignTop_5; }
	inline void set_AlignTop_5(CommandID_t2504350095 * value)
	{
		___AlignTop_5 = value;
		Il2CppCodeGenWriteBarrier((&___AlignTop_5), value);
	}

	inline static int32_t get_offset_of_AlignVerticalCenters_6() { return static_cast<int32_t>(offsetof(StandardCommands_t1676831160_StaticFields, ___AlignVerticalCenters_6)); }
	inline CommandID_t2504350095 * get_AlignVerticalCenters_6() const { return ___AlignVerticalCenters_6; }
	inline CommandID_t2504350095 ** get_address_of_AlignVerticalCenters_6() { return &___AlignVerticalCenters_6; }
	inline void set_AlignVerticalCenters_6(CommandID_t2504350095 * value)
	{
		___AlignVerticalCenters_6 = value;
		Il2CppCodeGenWriteBarrier((&___AlignVerticalCenters_6), value);
	}

	inline static int32_t get_offset_of_ArrangeBottom_7() { return static_cast<int32_t>(offsetof(StandardCommands_t1676831160_StaticFields, ___ArrangeBottom_7)); }
	inline CommandID_t2504350095 * get_ArrangeBottom_7() const { return ___ArrangeBottom_7; }
	inline CommandID_t2504350095 ** get_address_of_ArrangeBottom_7() { return &___ArrangeBottom_7; }
	inline void set_ArrangeBottom_7(CommandID_t2504350095 * value)
	{
		___ArrangeBottom_7 = value;
		Il2CppCodeGenWriteBarrier((&___ArrangeBottom_7), value);
	}

	inline static int32_t get_offset_of_ArrangeIcons_8() { return static_cast<int32_t>(offsetof(StandardCommands_t1676831160_StaticFields, ___ArrangeIcons_8)); }
	inline CommandID_t2504350095 * get_ArrangeIcons_8() const { return ___ArrangeIcons_8; }
	inline CommandID_t2504350095 ** get_address_of_ArrangeIcons_8() { return &___ArrangeIcons_8; }
	inline void set_ArrangeIcons_8(CommandID_t2504350095 * value)
	{
		___ArrangeIcons_8 = value;
		Il2CppCodeGenWriteBarrier((&___ArrangeIcons_8), value);
	}

	inline static int32_t get_offset_of_ArrangeRight_9() { return static_cast<int32_t>(offsetof(StandardCommands_t1676831160_StaticFields, ___ArrangeRight_9)); }
	inline CommandID_t2504350095 * get_ArrangeRight_9() const { return ___ArrangeRight_9; }
	inline CommandID_t2504350095 ** get_address_of_ArrangeRight_9() { return &___ArrangeRight_9; }
	inline void set_ArrangeRight_9(CommandID_t2504350095 * value)
	{
		___ArrangeRight_9 = value;
		Il2CppCodeGenWriteBarrier((&___ArrangeRight_9), value);
	}

	inline static int32_t get_offset_of_BringForward_10() { return static_cast<int32_t>(offsetof(StandardCommands_t1676831160_StaticFields, ___BringForward_10)); }
	inline CommandID_t2504350095 * get_BringForward_10() const { return ___BringForward_10; }
	inline CommandID_t2504350095 ** get_address_of_BringForward_10() { return &___BringForward_10; }
	inline void set_BringForward_10(CommandID_t2504350095 * value)
	{
		___BringForward_10 = value;
		Il2CppCodeGenWriteBarrier((&___BringForward_10), value);
	}

	inline static int32_t get_offset_of_BringToFront_11() { return static_cast<int32_t>(offsetof(StandardCommands_t1676831160_StaticFields, ___BringToFront_11)); }
	inline CommandID_t2504350095 * get_BringToFront_11() const { return ___BringToFront_11; }
	inline CommandID_t2504350095 ** get_address_of_BringToFront_11() { return &___BringToFront_11; }
	inline void set_BringToFront_11(CommandID_t2504350095 * value)
	{
		___BringToFront_11 = value;
		Il2CppCodeGenWriteBarrier((&___BringToFront_11), value);
	}

	inline static int32_t get_offset_of_CenterHorizontally_12() { return static_cast<int32_t>(offsetof(StandardCommands_t1676831160_StaticFields, ___CenterHorizontally_12)); }
	inline CommandID_t2504350095 * get_CenterHorizontally_12() const { return ___CenterHorizontally_12; }
	inline CommandID_t2504350095 ** get_address_of_CenterHorizontally_12() { return &___CenterHorizontally_12; }
	inline void set_CenterHorizontally_12(CommandID_t2504350095 * value)
	{
		___CenterHorizontally_12 = value;
		Il2CppCodeGenWriteBarrier((&___CenterHorizontally_12), value);
	}

	inline static int32_t get_offset_of_CenterVertically_13() { return static_cast<int32_t>(offsetof(StandardCommands_t1676831160_StaticFields, ___CenterVertically_13)); }
	inline CommandID_t2504350095 * get_CenterVertically_13() const { return ___CenterVertically_13; }
	inline CommandID_t2504350095 ** get_address_of_CenterVertically_13() { return &___CenterVertically_13; }
	inline void set_CenterVertically_13(CommandID_t2504350095 * value)
	{
		___CenterVertically_13 = value;
		Il2CppCodeGenWriteBarrier((&___CenterVertically_13), value);
	}

	inline static int32_t get_offset_of_Copy_14() { return static_cast<int32_t>(offsetof(StandardCommands_t1676831160_StaticFields, ___Copy_14)); }
	inline CommandID_t2504350095 * get_Copy_14() const { return ___Copy_14; }
	inline CommandID_t2504350095 ** get_address_of_Copy_14() { return &___Copy_14; }
	inline void set_Copy_14(CommandID_t2504350095 * value)
	{
		___Copy_14 = value;
		Il2CppCodeGenWriteBarrier((&___Copy_14), value);
	}

	inline static int32_t get_offset_of_Cut_15() { return static_cast<int32_t>(offsetof(StandardCommands_t1676831160_StaticFields, ___Cut_15)); }
	inline CommandID_t2504350095 * get_Cut_15() const { return ___Cut_15; }
	inline CommandID_t2504350095 ** get_address_of_Cut_15() { return &___Cut_15; }
	inline void set_Cut_15(CommandID_t2504350095 * value)
	{
		___Cut_15 = value;
		Il2CppCodeGenWriteBarrier((&___Cut_15), value);
	}

	inline static int32_t get_offset_of_Delete_16() { return static_cast<int32_t>(offsetof(StandardCommands_t1676831160_StaticFields, ___Delete_16)); }
	inline CommandID_t2504350095 * get_Delete_16() const { return ___Delete_16; }
	inline CommandID_t2504350095 ** get_address_of_Delete_16() { return &___Delete_16; }
	inline void set_Delete_16(CommandID_t2504350095 * value)
	{
		___Delete_16 = value;
		Il2CppCodeGenWriteBarrier((&___Delete_16), value);
	}

	inline static int32_t get_offset_of_F1Help_17() { return static_cast<int32_t>(offsetof(StandardCommands_t1676831160_StaticFields, ___F1Help_17)); }
	inline CommandID_t2504350095 * get_F1Help_17() const { return ___F1Help_17; }
	inline CommandID_t2504350095 ** get_address_of_F1Help_17() { return &___F1Help_17; }
	inline void set_F1Help_17(CommandID_t2504350095 * value)
	{
		___F1Help_17 = value;
		Il2CppCodeGenWriteBarrier((&___F1Help_17), value);
	}

	inline static int32_t get_offset_of_Group_18() { return static_cast<int32_t>(offsetof(StandardCommands_t1676831160_StaticFields, ___Group_18)); }
	inline CommandID_t2504350095 * get_Group_18() const { return ___Group_18; }
	inline CommandID_t2504350095 ** get_address_of_Group_18() { return &___Group_18; }
	inline void set_Group_18(CommandID_t2504350095 * value)
	{
		___Group_18 = value;
		Il2CppCodeGenWriteBarrier((&___Group_18), value);
	}

	inline static int32_t get_offset_of_HorizSpaceConcatenate_19() { return static_cast<int32_t>(offsetof(StandardCommands_t1676831160_StaticFields, ___HorizSpaceConcatenate_19)); }
	inline CommandID_t2504350095 * get_HorizSpaceConcatenate_19() const { return ___HorizSpaceConcatenate_19; }
	inline CommandID_t2504350095 ** get_address_of_HorizSpaceConcatenate_19() { return &___HorizSpaceConcatenate_19; }
	inline void set_HorizSpaceConcatenate_19(CommandID_t2504350095 * value)
	{
		___HorizSpaceConcatenate_19 = value;
		Il2CppCodeGenWriteBarrier((&___HorizSpaceConcatenate_19), value);
	}

	inline static int32_t get_offset_of_HorizSpaceDecrease_20() { return static_cast<int32_t>(offsetof(StandardCommands_t1676831160_StaticFields, ___HorizSpaceDecrease_20)); }
	inline CommandID_t2504350095 * get_HorizSpaceDecrease_20() const { return ___HorizSpaceDecrease_20; }
	inline CommandID_t2504350095 ** get_address_of_HorizSpaceDecrease_20() { return &___HorizSpaceDecrease_20; }
	inline void set_HorizSpaceDecrease_20(CommandID_t2504350095 * value)
	{
		___HorizSpaceDecrease_20 = value;
		Il2CppCodeGenWriteBarrier((&___HorizSpaceDecrease_20), value);
	}

	inline static int32_t get_offset_of_HorizSpaceIncrease_21() { return static_cast<int32_t>(offsetof(StandardCommands_t1676831160_StaticFields, ___HorizSpaceIncrease_21)); }
	inline CommandID_t2504350095 * get_HorizSpaceIncrease_21() const { return ___HorizSpaceIncrease_21; }
	inline CommandID_t2504350095 ** get_address_of_HorizSpaceIncrease_21() { return &___HorizSpaceIncrease_21; }
	inline void set_HorizSpaceIncrease_21(CommandID_t2504350095 * value)
	{
		___HorizSpaceIncrease_21 = value;
		Il2CppCodeGenWriteBarrier((&___HorizSpaceIncrease_21), value);
	}

	inline static int32_t get_offset_of_HorizSpaceMakeEqual_22() { return static_cast<int32_t>(offsetof(StandardCommands_t1676831160_StaticFields, ___HorizSpaceMakeEqual_22)); }
	inline CommandID_t2504350095 * get_HorizSpaceMakeEqual_22() const { return ___HorizSpaceMakeEqual_22; }
	inline CommandID_t2504350095 ** get_address_of_HorizSpaceMakeEqual_22() { return &___HorizSpaceMakeEqual_22; }
	inline void set_HorizSpaceMakeEqual_22(CommandID_t2504350095 * value)
	{
		___HorizSpaceMakeEqual_22 = value;
		Il2CppCodeGenWriteBarrier((&___HorizSpaceMakeEqual_22), value);
	}

	inline static int32_t get_offset_of_LineupIcons_23() { return static_cast<int32_t>(offsetof(StandardCommands_t1676831160_StaticFields, ___LineupIcons_23)); }
	inline CommandID_t2504350095 * get_LineupIcons_23() const { return ___LineupIcons_23; }
	inline CommandID_t2504350095 ** get_address_of_LineupIcons_23() { return &___LineupIcons_23; }
	inline void set_LineupIcons_23(CommandID_t2504350095 * value)
	{
		___LineupIcons_23 = value;
		Il2CppCodeGenWriteBarrier((&___LineupIcons_23), value);
	}

	inline static int32_t get_offset_of_LockControls_24() { return static_cast<int32_t>(offsetof(StandardCommands_t1676831160_StaticFields, ___LockControls_24)); }
	inline CommandID_t2504350095 * get_LockControls_24() const { return ___LockControls_24; }
	inline CommandID_t2504350095 ** get_address_of_LockControls_24() { return &___LockControls_24; }
	inline void set_LockControls_24(CommandID_t2504350095 * value)
	{
		___LockControls_24 = value;
		Il2CppCodeGenWriteBarrier((&___LockControls_24), value);
	}

	inline static int32_t get_offset_of_MultiLevelRedo_25() { return static_cast<int32_t>(offsetof(StandardCommands_t1676831160_StaticFields, ___MultiLevelRedo_25)); }
	inline CommandID_t2504350095 * get_MultiLevelRedo_25() const { return ___MultiLevelRedo_25; }
	inline CommandID_t2504350095 ** get_address_of_MultiLevelRedo_25() { return &___MultiLevelRedo_25; }
	inline void set_MultiLevelRedo_25(CommandID_t2504350095 * value)
	{
		___MultiLevelRedo_25 = value;
		Il2CppCodeGenWriteBarrier((&___MultiLevelRedo_25), value);
	}

	inline static int32_t get_offset_of_MultiLevelUndo_26() { return static_cast<int32_t>(offsetof(StandardCommands_t1676831160_StaticFields, ___MultiLevelUndo_26)); }
	inline CommandID_t2504350095 * get_MultiLevelUndo_26() const { return ___MultiLevelUndo_26; }
	inline CommandID_t2504350095 ** get_address_of_MultiLevelUndo_26() { return &___MultiLevelUndo_26; }
	inline void set_MultiLevelUndo_26(CommandID_t2504350095 * value)
	{
		___MultiLevelUndo_26 = value;
		Il2CppCodeGenWriteBarrier((&___MultiLevelUndo_26), value);
	}

	inline static int32_t get_offset_of_Paste_27() { return static_cast<int32_t>(offsetof(StandardCommands_t1676831160_StaticFields, ___Paste_27)); }
	inline CommandID_t2504350095 * get_Paste_27() const { return ___Paste_27; }
	inline CommandID_t2504350095 ** get_address_of_Paste_27() { return &___Paste_27; }
	inline void set_Paste_27(CommandID_t2504350095 * value)
	{
		___Paste_27 = value;
		Il2CppCodeGenWriteBarrier((&___Paste_27), value);
	}

	inline static int32_t get_offset_of_Properties_28() { return static_cast<int32_t>(offsetof(StandardCommands_t1676831160_StaticFields, ___Properties_28)); }
	inline CommandID_t2504350095 * get_Properties_28() const { return ___Properties_28; }
	inline CommandID_t2504350095 ** get_address_of_Properties_28() { return &___Properties_28; }
	inline void set_Properties_28(CommandID_t2504350095 * value)
	{
		___Properties_28 = value;
		Il2CppCodeGenWriteBarrier((&___Properties_28), value);
	}

	inline static int32_t get_offset_of_PropertiesWindow_29() { return static_cast<int32_t>(offsetof(StandardCommands_t1676831160_StaticFields, ___PropertiesWindow_29)); }
	inline CommandID_t2504350095 * get_PropertiesWindow_29() const { return ___PropertiesWindow_29; }
	inline CommandID_t2504350095 ** get_address_of_PropertiesWindow_29() { return &___PropertiesWindow_29; }
	inline void set_PropertiesWindow_29(CommandID_t2504350095 * value)
	{
		___PropertiesWindow_29 = value;
		Il2CppCodeGenWriteBarrier((&___PropertiesWindow_29), value);
	}

	inline static int32_t get_offset_of_Redo_30() { return static_cast<int32_t>(offsetof(StandardCommands_t1676831160_StaticFields, ___Redo_30)); }
	inline CommandID_t2504350095 * get_Redo_30() const { return ___Redo_30; }
	inline CommandID_t2504350095 ** get_address_of_Redo_30() { return &___Redo_30; }
	inline void set_Redo_30(CommandID_t2504350095 * value)
	{
		___Redo_30 = value;
		Il2CppCodeGenWriteBarrier((&___Redo_30), value);
	}

	inline static int32_t get_offset_of_Replace_31() { return static_cast<int32_t>(offsetof(StandardCommands_t1676831160_StaticFields, ___Replace_31)); }
	inline CommandID_t2504350095 * get_Replace_31() const { return ___Replace_31; }
	inline CommandID_t2504350095 ** get_address_of_Replace_31() { return &___Replace_31; }
	inline void set_Replace_31(CommandID_t2504350095 * value)
	{
		___Replace_31 = value;
		Il2CppCodeGenWriteBarrier((&___Replace_31), value);
	}

	inline static int32_t get_offset_of_SelectAll_32() { return static_cast<int32_t>(offsetof(StandardCommands_t1676831160_StaticFields, ___SelectAll_32)); }
	inline CommandID_t2504350095 * get_SelectAll_32() const { return ___SelectAll_32; }
	inline CommandID_t2504350095 ** get_address_of_SelectAll_32() { return &___SelectAll_32; }
	inline void set_SelectAll_32(CommandID_t2504350095 * value)
	{
		___SelectAll_32 = value;
		Il2CppCodeGenWriteBarrier((&___SelectAll_32), value);
	}

	inline static int32_t get_offset_of_SendBackward_33() { return static_cast<int32_t>(offsetof(StandardCommands_t1676831160_StaticFields, ___SendBackward_33)); }
	inline CommandID_t2504350095 * get_SendBackward_33() const { return ___SendBackward_33; }
	inline CommandID_t2504350095 ** get_address_of_SendBackward_33() { return &___SendBackward_33; }
	inline void set_SendBackward_33(CommandID_t2504350095 * value)
	{
		___SendBackward_33 = value;
		Il2CppCodeGenWriteBarrier((&___SendBackward_33), value);
	}

	inline static int32_t get_offset_of_SendToBack_34() { return static_cast<int32_t>(offsetof(StandardCommands_t1676831160_StaticFields, ___SendToBack_34)); }
	inline CommandID_t2504350095 * get_SendToBack_34() const { return ___SendToBack_34; }
	inline CommandID_t2504350095 ** get_address_of_SendToBack_34() { return &___SendToBack_34; }
	inline void set_SendToBack_34(CommandID_t2504350095 * value)
	{
		___SendToBack_34 = value;
		Il2CppCodeGenWriteBarrier((&___SendToBack_34), value);
	}

	inline static int32_t get_offset_of_ShowGrid_35() { return static_cast<int32_t>(offsetof(StandardCommands_t1676831160_StaticFields, ___ShowGrid_35)); }
	inline CommandID_t2504350095 * get_ShowGrid_35() const { return ___ShowGrid_35; }
	inline CommandID_t2504350095 ** get_address_of_ShowGrid_35() { return &___ShowGrid_35; }
	inline void set_ShowGrid_35(CommandID_t2504350095 * value)
	{
		___ShowGrid_35 = value;
		Il2CppCodeGenWriteBarrier((&___ShowGrid_35), value);
	}

	inline static int32_t get_offset_of_ShowLargeIcons_36() { return static_cast<int32_t>(offsetof(StandardCommands_t1676831160_StaticFields, ___ShowLargeIcons_36)); }
	inline CommandID_t2504350095 * get_ShowLargeIcons_36() const { return ___ShowLargeIcons_36; }
	inline CommandID_t2504350095 ** get_address_of_ShowLargeIcons_36() { return &___ShowLargeIcons_36; }
	inline void set_ShowLargeIcons_36(CommandID_t2504350095 * value)
	{
		___ShowLargeIcons_36 = value;
		Il2CppCodeGenWriteBarrier((&___ShowLargeIcons_36), value);
	}

	inline static int32_t get_offset_of_SizeToControl_37() { return static_cast<int32_t>(offsetof(StandardCommands_t1676831160_StaticFields, ___SizeToControl_37)); }
	inline CommandID_t2504350095 * get_SizeToControl_37() const { return ___SizeToControl_37; }
	inline CommandID_t2504350095 ** get_address_of_SizeToControl_37() { return &___SizeToControl_37; }
	inline void set_SizeToControl_37(CommandID_t2504350095 * value)
	{
		___SizeToControl_37 = value;
		Il2CppCodeGenWriteBarrier((&___SizeToControl_37), value);
	}

	inline static int32_t get_offset_of_SizeToControlHeight_38() { return static_cast<int32_t>(offsetof(StandardCommands_t1676831160_StaticFields, ___SizeToControlHeight_38)); }
	inline CommandID_t2504350095 * get_SizeToControlHeight_38() const { return ___SizeToControlHeight_38; }
	inline CommandID_t2504350095 ** get_address_of_SizeToControlHeight_38() { return &___SizeToControlHeight_38; }
	inline void set_SizeToControlHeight_38(CommandID_t2504350095 * value)
	{
		___SizeToControlHeight_38 = value;
		Il2CppCodeGenWriteBarrier((&___SizeToControlHeight_38), value);
	}

	inline static int32_t get_offset_of_SizeToControlWidth_39() { return static_cast<int32_t>(offsetof(StandardCommands_t1676831160_StaticFields, ___SizeToControlWidth_39)); }
	inline CommandID_t2504350095 * get_SizeToControlWidth_39() const { return ___SizeToControlWidth_39; }
	inline CommandID_t2504350095 ** get_address_of_SizeToControlWidth_39() { return &___SizeToControlWidth_39; }
	inline void set_SizeToControlWidth_39(CommandID_t2504350095 * value)
	{
		___SizeToControlWidth_39 = value;
		Il2CppCodeGenWriteBarrier((&___SizeToControlWidth_39), value);
	}

	inline static int32_t get_offset_of_SizeToFit_40() { return static_cast<int32_t>(offsetof(StandardCommands_t1676831160_StaticFields, ___SizeToFit_40)); }
	inline CommandID_t2504350095 * get_SizeToFit_40() const { return ___SizeToFit_40; }
	inline CommandID_t2504350095 ** get_address_of_SizeToFit_40() { return &___SizeToFit_40; }
	inline void set_SizeToFit_40(CommandID_t2504350095 * value)
	{
		___SizeToFit_40 = value;
		Il2CppCodeGenWriteBarrier((&___SizeToFit_40), value);
	}

	inline static int32_t get_offset_of_SizeToGrid_41() { return static_cast<int32_t>(offsetof(StandardCommands_t1676831160_StaticFields, ___SizeToGrid_41)); }
	inline CommandID_t2504350095 * get_SizeToGrid_41() const { return ___SizeToGrid_41; }
	inline CommandID_t2504350095 ** get_address_of_SizeToGrid_41() { return &___SizeToGrid_41; }
	inline void set_SizeToGrid_41(CommandID_t2504350095 * value)
	{
		___SizeToGrid_41 = value;
		Il2CppCodeGenWriteBarrier((&___SizeToGrid_41), value);
	}

	inline static int32_t get_offset_of_SnapToGrid_42() { return static_cast<int32_t>(offsetof(StandardCommands_t1676831160_StaticFields, ___SnapToGrid_42)); }
	inline CommandID_t2504350095 * get_SnapToGrid_42() const { return ___SnapToGrid_42; }
	inline CommandID_t2504350095 ** get_address_of_SnapToGrid_42() { return &___SnapToGrid_42; }
	inline void set_SnapToGrid_42(CommandID_t2504350095 * value)
	{
		___SnapToGrid_42 = value;
		Il2CppCodeGenWriteBarrier((&___SnapToGrid_42), value);
	}

	inline static int32_t get_offset_of_TabOrder_43() { return static_cast<int32_t>(offsetof(StandardCommands_t1676831160_StaticFields, ___TabOrder_43)); }
	inline CommandID_t2504350095 * get_TabOrder_43() const { return ___TabOrder_43; }
	inline CommandID_t2504350095 ** get_address_of_TabOrder_43() { return &___TabOrder_43; }
	inline void set_TabOrder_43(CommandID_t2504350095 * value)
	{
		___TabOrder_43 = value;
		Il2CppCodeGenWriteBarrier((&___TabOrder_43), value);
	}

	inline static int32_t get_offset_of_Undo_44() { return static_cast<int32_t>(offsetof(StandardCommands_t1676831160_StaticFields, ___Undo_44)); }
	inline CommandID_t2504350095 * get_Undo_44() const { return ___Undo_44; }
	inline CommandID_t2504350095 ** get_address_of_Undo_44() { return &___Undo_44; }
	inline void set_Undo_44(CommandID_t2504350095 * value)
	{
		___Undo_44 = value;
		Il2CppCodeGenWriteBarrier((&___Undo_44), value);
	}

	inline static int32_t get_offset_of_Ungroup_45() { return static_cast<int32_t>(offsetof(StandardCommands_t1676831160_StaticFields, ___Ungroup_45)); }
	inline CommandID_t2504350095 * get_Ungroup_45() const { return ___Ungroup_45; }
	inline CommandID_t2504350095 ** get_address_of_Ungroup_45() { return &___Ungroup_45; }
	inline void set_Ungroup_45(CommandID_t2504350095 * value)
	{
		___Ungroup_45 = value;
		Il2CppCodeGenWriteBarrier((&___Ungroup_45), value);
	}

	inline static int32_t get_offset_of_VerbFirst_46() { return static_cast<int32_t>(offsetof(StandardCommands_t1676831160_StaticFields, ___VerbFirst_46)); }
	inline CommandID_t2504350095 * get_VerbFirst_46() const { return ___VerbFirst_46; }
	inline CommandID_t2504350095 ** get_address_of_VerbFirst_46() { return &___VerbFirst_46; }
	inline void set_VerbFirst_46(CommandID_t2504350095 * value)
	{
		___VerbFirst_46 = value;
		Il2CppCodeGenWriteBarrier((&___VerbFirst_46), value);
	}

	inline static int32_t get_offset_of_VerbLast_47() { return static_cast<int32_t>(offsetof(StandardCommands_t1676831160_StaticFields, ___VerbLast_47)); }
	inline CommandID_t2504350095 * get_VerbLast_47() const { return ___VerbLast_47; }
	inline CommandID_t2504350095 ** get_address_of_VerbLast_47() { return &___VerbLast_47; }
	inline void set_VerbLast_47(CommandID_t2504350095 * value)
	{
		___VerbLast_47 = value;
		Il2CppCodeGenWriteBarrier((&___VerbLast_47), value);
	}

	inline static int32_t get_offset_of_VertSpaceConcatenate_48() { return static_cast<int32_t>(offsetof(StandardCommands_t1676831160_StaticFields, ___VertSpaceConcatenate_48)); }
	inline CommandID_t2504350095 * get_VertSpaceConcatenate_48() const { return ___VertSpaceConcatenate_48; }
	inline CommandID_t2504350095 ** get_address_of_VertSpaceConcatenate_48() { return &___VertSpaceConcatenate_48; }
	inline void set_VertSpaceConcatenate_48(CommandID_t2504350095 * value)
	{
		___VertSpaceConcatenate_48 = value;
		Il2CppCodeGenWriteBarrier((&___VertSpaceConcatenate_48), value);
	}

	inline static int32_t get_offset_of_VertSpaceDecrease_49() { return static_cast<int32_t>(offsetof(StandardCommands_t1676831160_StaticFields, ___VertSpaceDecrease_49)); }
	inline CommandID_t2504350095 * get_VertSpaceDecrease_49() const { return ___VertSpaceDecrease_49; }
	inline CommandID_t2504350095 ** get_address_of_VertSpaceDecrease_49() { return &___VertSpaceDecrease_49; }
	inline void set_VertSpaceDecrease_49(CommandID_t2504350095 * value)
	{
		___VertSpaceDecrease_49 = value;
		Il2CppCodeGenWriteBarrier((&___VertSpaceDecrease_49), value);
	}

	inline static int32_t get_offset_of_VertSpaceIncrease_50() { return static_cast<int32_t>(offsetof(StandardCommands_t1676831160_StaticFields, ___VertSpaceIncrease_50)); }
	inline CommandID_t2504350095 * get_VertSpaceIncrease_50() const { return ___VertSpaceIncrease_50; }
	inline CommandID_t2504350095 ** get_address_of_VertSpaceIncrease_50() { return &___VertSpaceIncrease_50; }
	inline void set_VertSpaceIncrease_50(CommandID_t2504350095 * value)
	{
		___VertSpaceIncrease_50 = value;
		Il2CppCodeGenWriteBarrier((&___VertSpaceIncrease_50), value);
	}

	inline static int32_t get_offset_of_VertSpaceMakeEqual_51() { return static_cast<int32_t>(offsetof(StandardCommands_t1676831160_StaticFields, ___VertSpaceMakeEqual_51)); }
	inline CommandID_t2504350095 * get_VertSpaceMakeEqual_51() const { return ___VertSpaceMakeEqual_51; }
	inline CommandID_t2504350095 ** get_address_of_VertSpaceMakeEqual_51() { return &___VertSpaceMakeEqual_51; }
	inline void set_VertSpaceMakeEqual_51(CommandID_t2504350095 * value)
	{
		___VertSpaceMakeEqual_51 = value;
		Il2CppCodeGenWriteBarrier((&___VertSpaceMakeEqual_51), value);
	}

	inline static int32_t get_offset_of_ViewGrid_52() { return static_cast<int32_t>(offsetof(StandardCommands_t1676831160_StaticFields, ___ViewGrid_52)); }
	inline CommandID_t2504350095 * get_ViewGrid_52() const { return ___ViewGrid_52; }
	inline CommandID_t2504350095 ** get_address_of_ViewGrid_52() { return &___ViewGrid_52; }
	inline void set_ViewGrid_52(CommandID_t2504350095 * value)
	{
		___ViewGrid_52 = value;
		Il2CppCodeGenWriteBarrier((&___ViewGrid_52), value);
	}

	inline static int32_t get_offset_of_DocumentOutline_53() { return static_cast<int32_t>(offsetof(StandardCommands_t1676831160_StaticFields, ___DocumentOutline_53)); }
	inline CommandID_t2504350095 * get_DocumentOutline_53() const { return ___DocumentOutline_53; }
	inline CommandID_t2504350095 ** get_address_of_DocumentOutline_53() { return &___DocumentOutline_53; }
	inline void set_DocumentOutline_53(CommandID_t2504350095 * value)
	{
		___DocumentOutline_53 = value;
		Il2CppCodeGenWriteBarrier((&___DocumentOutline_53), value);
	}

	inline static int32_t get_offset_of_ViewCode_54() { return static_cast<int32_t>(offsetof(StandardCommands_t1676831160_StaticFields, ___ViewCode_54)); }
	inline CommandID_t2504350095 * get_ViewCode_54() const { return ___ViewCode_54; }
	inline CommandID_t2504350095 ** get_address_of_ViewCode_54() { return &___ViewCode_54; }
	inline void set_ViewCode_54(CommandID_t2504350095 * value)
	{
		___ViewCode_54 = value;
		Il2CppCodeGenWriteBarrier((&___ViewCode_54), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STANDARDCOMMANDS_T1676831160_H
#ifndef CULTUREINFOCOMPARER_T1184699714_H
#define CULTUREINFOCOMPARER_T1184699714_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.CultureInfoConverter/CultureInfoComparer
struct  CultureInfoComparer_t1184699714  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CULTUREINFOCOMPARER_T1184699714_H
#ifndef MARSHALBYREFOBJECT_T2760389100_H
#define MARSHALBYREFOBJECT_T2760389100_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MarshalByRefObject
struct  MarshalByRefObject_t2760389100  : public RuntimeObject
{
public:
	// System.Runtime.Remoting.ServerIdentity System.MarshalByRefObject::_identity
	ServerIdentity_t2342208608 * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_t2760389100, ____identity_0)); }
	inline ServerIdentity_t2342208608 * get__identity_0() const { return ____identity_0; }
	inline ServerIdentity_t2342208608 ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(ServerIdentity_t2342208608 * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((&____identity_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MARSHALBYREFOBJECT_T2760389100_H
#ifndef READONLYCOLLECTIONBASE_T1836743899_H
#define READONLYCOLLECTIONBASE_T1836743899_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.ReadOnlyCollectionBase
struct  ReadOnlyCollectionBase_t1836743899  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.Collections.ReadOnlyCollectionBase::list
	ArrayList_t2718874744 * ___list_0;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(ReadOnlyCollectionBase_t1836743899, ___list_0)); }
	inline ArrayList_t2718874744 * get_list_0() const { return ___list_0; }
	inline ArrayList_t2718874744 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(ArrayList_t2718874744 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // READONLYCOLLECTIONBASE_T1836743899_H
#ifndef ATTRIBUTE_T861562559_H
#define ATTRIBUTE_T861562559_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Attribute
struct  Attribute_t861562559  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTE_T861562559_H
#ifndef TYPECONVERTER_T2249118273_H
#define TYPECONVERTER_T2249118273_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.TypeConverter
struct  TypeConverter_t2249118273  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPECONVERTER_T2249118273_H
#ifndef DESIGNERTRANSACTION_T2710857822_H
#define DESIGNERTRANSACTION_T2710857822_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.Design.DesignerTransaction
struct  DesignerTransaction_t2710857822  : public RuntimeObject
{
public:
	// System.String System.ComponentModel.Design.DesignerTransaction::description
	String_t* ___description_0;
	// System.Boolean System.ComponentModel.Design.DesignerTransaction::committed
	bool ___committed_1;
	// System.Boolean System.ComponentModel.Design.DesignerTransaction::canceled
	bool ___canceled_2;

public:
	inline static int32_t get_offset_of_description_0() { return static_cast<int32_t>(offsetof(DesignerTransaction_t2710857822, ___description_0)); }
	inline String_t* get_description_0() const { return ___description_0; }
	inline String_t** get_address_of_description_0() { return &___description_0; }
	inline void set_description_0(String_t* value)
	{
		___description_0 = value;
		Il2CppCodeGenWriteBarrier((&___description_0), value);
	}

	inline static int32_t get_offset_of_committed_1() { return static_cast<int32_t>(offsetof(DesignerTransaction_t2710857822, ___committed_1)); }
	inline bool get_committed_1() const { return ___committed_1; }
	inline bool* get_address_of_committed_1() { return &___committed_1; }
	inline void set_committed_1(bool value)
	{
		___committed_1 = value;
	}

	inline static int32_t get_offset_of_canceled_2() { return static_cast<int32_t>(offsetof(DesignerTransaction_t2710857822, ___canceled_2)); }
	inline bool get_canceled_2() const { return ___canceled_2; }
	inline bool* get_address_of_canceled_2() { return &___canceled_2; }
	inline void set_canceled_2(bool value)
	{
		___canceled_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DESIGNERTRANSACTION_T2710857822_H
#ifndef EVENTHANDLERLIST_T1108123056_H
#define EVENTHANDLERLIST_T1108123056_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.EventHandlerList
struct  EventHandlerList_t1108123056  : public RuntimeObject
{
public:
	// System.ComponentModel.ListEntry System.ComponentModel.EventHandlerList::entries
	ListEntry_t1182276877 * ___entries_0;
	// System.Delegate System.ComponentModel.EventHandlerList::null_entry
	Delegate_t1188392813 * ___null_entry_1;

public:
	inline static int32_t get_offset_of_entries_0() { return static_cast<int32_t>(offsetof(EventHandlerList_t1108123056, ___entries_0)); }
	inline ListEntry_t1182276877 * get_entries_0() const { return ___entries_0; }
	inline ListEntry_t1182276877 ** get_address_of_entries_0() { return &___entries_0; }
	inline void set_entries_0(ListEntry_t1182276877 * value)
	{
		___entries_0 = value;
		Il2CppCodeGenWriteBarrier((&___entries_0), value);
	}

	inline static int32_t get_offset_of_null_entry_1() { return static_cast<int32_t>(offsetof(EventHandlerList_t1108123056, ___null_entry_1)); }
	inline Delegate_t1188392813 * get_null_entry_1() const { return ___null_entry_1; }
	inline Delegate_t1188392813 ** get_address_of_null_entry_1() { return &___null_entry_1; }
	inline void set_null_entry_1(Delegate_t1188392813 * value)
	{
		___null_entry_1 = value;
		Il2CppCodeGenWriteBarrier((&___null_entry_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTHANDLERLIST_T1108123056_H
#ifndef BACKGROUNDWORKER_T3811013447_H
#define BACKGROUNDWORKER_T3811013447_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.BackgroundWorker
struct  BackgroundWorker_t3811013447  : public RuntimeObject
{
public:
	// System.ComponentModel.AsyncOperation System.ComponentModel.BackgroundWorker::async
	AsyncOperation_t2743648699 * ___async_0;
	// System.Boolean System.ComponentModel.BackgroundWorker::cancel_pending
	bool ___cancel_pending_1;
	// System.Boolean System.ComponentModel.BackgroundWorker::report_progress
	bool ___report_progress_2;
	// System.Boolean System.ComponentModel.BackgroundWorker::support_cancel
	bool ___support_cancel_3;
	// System.ComponentModel.DoWorkEventHandler System.ComponentModel.BackgroundWorker::DoWork
	DoWorkEventHandler_t3704776641 * ___DoWork_4;
	// System.ComponentModel.ProgressChangedEventHandler System.ComponentModel.BackgroundWorker::ProgressChanged
	ProgressChangedEventHandler_t1213062803 * ___ProgressChanged_5;
	// System.ComponentModel.RunWorkerCompletedEventHandler System.ComponentModel.BackgroundWorker::RunWorkerCompleted
	RunWorkerCompletedEventHandler_t2386199656 * ___RunWorkerCompleted_6;

public:
	inline static int32_t get_offset_of_async_0() { return static_cast<int32_t>(offsetof(BackgroundWorker_t3811013447, ___async_0)); }
	inline AsyncOperation_t2743648699 * get_async_0() const { return ___async_0; }
	inline AsyncOperation_t2743648699 ** get_address_of_async_0() { return &___async_0; }
	inline void set_async_0(AsyncOperation_t2743648699 * value)
	{
		___async_0 = value;
		Il2CppCodeGenWriteBarrier((&___async_0), value);
	}

	inline static int32_t get_offset_of_cancel_pending_1() { return static_cast<int32_t>(offsetof(BackgroundWorker_t3811013447, ___cancel_pending_1)); }
	inline bool get_cancel_pending_1() const { return ___cancel_pending_1; }
	inline bool* get_address_of_cancel_pending_1() { return &___cancel_pending_1; }
	inline void set_cancel_pending_1(bool value)
	{
		___cancel_pending_1 = value;
	}

	inline static int32_t get_offset_of_report_progress_2() { return static_cast<int32_t>(offsetof(BackgroundWorker_t3811013447, ___report_progress_2)); }
	inline bool get_report_progress_2() const { return ___report_progress_2; }
	inline bool* get_address_of_report_progress_2() { return &___report_progress_2; }
	inline void set_report_progress_2(bool value)
	{
		___report_progress_2 = value;
	}

	inline static int32_t get_offset_of_support_cancel_3() { return static_cast<int32_t>(offsetof(BackgroundWorker_t3811013447, ___support_cancel_3)); }
	inline bool get_support_cancel_3() const { return ___support_cancel_3; }
	inline bool* get_address_of_support_cancel_3() { return &___support_cancel_3; }
	inline void set_support_cancel_3(bool value)
	{
		___support_cancel_3 = value;
	}

	inline static int32_t get_offset_of_DoWork_4() { return static_cast<int32_t>(offsetof(BackgroundWorker_t3811013447, ___DoWork_4)); }
	inline DoWorkEventHandler_t3704776641 * get_DoWork_4() const { return ___DoWork_4; }
	inline DoWorkEventHandler_t3704776641 ** get_address_of_DoWork_4() { return &___DoWork_4; }
	inline void set_DoWork_4(DoWorkEventHandler_t3704776641 * value)
	{
		___DoWork_4 = value;
		Il2CppCodeGenWriteBarrier((&___DoWork_4), value);
	}

	inline static int32_t get_offset_of_ProgressChanged_5() { return static_cast<int32_t>(offsetof(BackgroundWorker_t3811013447, ___ProgressChanged_5)); }
	inline ProgressChangedEventHandler_t1213062803 * get_ProgressChanged_5() const { return ___ProgressChanged_5; }
	inline ProgressChangedEventHandler_t1213062803 ** get_address_of_ProgressChanged_5() { return &___ProgressChanged_5; }
	inline void set_ProgressChanged_5(ProgressChangedEventHandler_t1213062803 * value)
	{
		___ProgressChanged_5 = value;
		Il2CppCodeGenWriteBarrier((&___ProgressChanged_5), value);
	}

	inline static int32_t get_offset_of_RunWorkerCompleted_6() { return static_cast<int32_t>(offsetof(BackgroundWorker_t3811013447, ___RunWorkerCompleted_6)); }
	inline RunWorkerCompletedEventHandler_t2386199656 * get_RunWorkerCompleted_6() const { return ___RunWorkerCompleted_6; }
	inline RunWorkerCompletedEventHandler_t2386199656 ** get_address_of_RunWorkerCompleted_6() { return &___RunWorkerCompleted_6; }
	inline void set_RunWorkerCompleted_6(RunWorkerCompletedEventHandler_t2386199656 * value)
	{
		___RunWorkerCompleted_6 = value;
		Il2CppCodeGenWriteBarrier((&___RunWorkerCompleted_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BACKGROUNDWORKER_T3811013447_H
#ifndef LISTENTRY_T1182276877_H
#define LISTENTRY_T1182276877_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ListEntry
struct  ListEntry_t1182276877  : public RuntimeObject
{
public:
	// System.Object System.ComponentModel.ListEntry::key
	RuntimeObject * ___key_0;
	// System.Delegate System.ComponentModel.ListEntry::value
	Delegate_t1188392813 * ___value_1;
	// System.ComponentModel.ListEntry System.ComponentModel.ListEntry::next
	ListEntry_t1182276877 * ___next_2;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(ListEntry_t1182276877, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(ListEntry_t1182276877, ___value_1)); }
	inline Delegate_t1188392813 * get_value_1() const { return ___value_1; }
	inline Delegate_t1188392813 ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(Delegate_t1188392813 * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}

	inline static int32_t get_offset_of_next_2() { return static_cast<int32_t>(offsetof(ListEntry_t1182276877, ___next_2)); }
	inline ListEntry_t1182276877 * get_next_2() const { return ___next_2; }
	inline ListEntry_t1182276877 ** get_address_of_next_2() { return &___next_2; }
	inline void set_next_2(ListEntry_t1182276877 * value)
	{
		___next_2 = value;
		Il2CppCodeGenWriteBarrier((&___next_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LISTENTRY_T1182276877_H
#ifndef ENUMCOMPARER_T557155003_H
#define ENUMCOMPARER_T557155003_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.EnumConverter/EnumComparer
struct  EnumComparer_t557155003  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMCOMPARER_T557155003_H
#ifndef EVENTDESCRIPTORCOLLECTION_T2278158832_H
#define EVENTDESCRIPTORCOLLECTION_T2278158832_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.EventDescriptorCollection
struct  EventDescriptorCollection_t2278158832  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.ComponentModel.EventDescriptorCollection::eventList
	ArrayList_t2718874744 * ___eventList_0;
	// System.Boolean System.ComponentModel.EventDescriptorCollection::isReadOnly
	bool ___isReadOnly_1;

public:
	inline static int32_t get_offset_of_eventList_0() { return static_cast<int32_t>(offsetof(EventDescriptorCollection_t2278158832, ___eventList_0)); }
	inline ArrayList_t2718874744 * get_eventList_0() const { return ___eventList_0; }
	inline ArrayList_t2718874744 ** get_address_of_eventList_0() { return &___eventList_0; }
	inline void set_eventList_0(ArrayList_t2718874744 * value)
	{
		___eventList_0 = value;
		Il2CppCodeGenWriteBarrier((&___eventList_0), value);
	}

	inline static int32_t get_offset_of_isReadOnly_1() { return static_cast<int32_t>(offsetof(EventDescriptorCollection_t2278158832, ___isReadOnly_1)); }
	inline bool get_isReadOnly_1() const { return ___isReadOnly_1; }
	inline bool* get_address_of_isReadOnly_1() { return &___isReadOnly_1; }
	inline void set_isReadOnly_1(bool value)
	{
		___isReadOnly_1 = value;
	}
};

struct EventDescriptorCollection_t2278158832_StaticFields
{
public:
	// System.ComponentModel.EventDescriptorCollection System.ComponentModel.EventDescriptorCollection::Empty
	EventDescriptorCollection_t2278158832 * ___Empty_2;

public:
	inline static int32_t get_offset_of_Empty_2() { return static_cast<int32_t>(offsetof(EventDescriptorCollection_t2278158832_StaticFields, ___Empty_2)); }
	inline EventDescriptorCollection_t2278158832 * get_Empty_2() const { return ___Empty_2; }
	inline EventDescriptorCollection_t2278158832 ** get_address_of_Empty_2() { return &___Empty_2; }
	inline void set_Empty_2(EventDescriptorCollection_t2278158832 * value)
	{
		___Empty_2 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTDESCRIPTORCOLLECTION_T2278158832_H
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
#ifndef COLLECTIONBASE_T2727926298_H
#define COLLECTIONBASE_T2727926298_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.CollectionBase
struct  CollectionBase_t2727926298  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.Collections.CollectionBase::list
	ArrayList_t2718874744 * ___list_0;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(CollectionBase_t2727926298, ___list_0)); }
	inline ArrayList_t2718874744 * get_list_0() const { return ___list_0; }
	inline ArrayList_t2718874744 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(ArrayList_t2718874744 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLLECTIONBASE_T2727926298_H
#ifndef ASYNCOPERATION_T2743648699_H
#define ASYNCOPERATION_T2743648699_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.AsyncOperation
struct  AsyncOperation_t2743648699  : public RuntimeObject
{
public:
	// System.Threading.SynchronizationContext System.ComponentModel.AsyncOperation::ctx
	SynchronizationContext_t2326897723 * ___ctx_0;
	// System.Object System.ComponentModel.AsyncOperation::state
	RuntimeObject * ___state_1;
	// System.Boolean System.ComponentModel.AsyncOperation::done
	bool ___done_2;

public:
	inline static int32_t get_offset_of_ctx_0() { return static_cast<int32_t>(offsetof(AsyncOperation_t2743648699, ___ctx_0)); }
	inline SynchronizationContext_t2326897723 * get_ctx_0() const { return ___ctx_0; }
	inline SynchronizationContext_t2326897723 ** get_address_of_ctx_0() { return &___ctx_0; }
	inline void set_ctx_0(SynchronizationContext_t2326897723 * value)
	{
		___ctx_0 = value;
		Il2CppCodeGenWriteBarrier((&___ctx_0), value);
	}

	inline static int32_t get_offset_of_state_1() { return static_cast<int32_t>(offsetof(AsyncOperation_t2743648699, ___state_1)); }
	inline RuntimeObject * get_state_1() const { return ___state_1; }
	inline RuntimeObject ** get_address_of_state_1() { return &___state_1; }
	inline void set_state_1(RuntimeObject * value)
	{
		___state_1 = value;
		Il2CppCodeGenWriteBarrier((&___state_1), value);
	}

	inline static int32_t get_offset_of_done_2() { return static_cast<int32_t>(offsetof(AsyncOperation_t2743648699, ___done_2)); }
	inline bool get_done_2() const { return ___done_2; }
	inline bool* get_address_of_done_2() { return &___done_2; }
	inline void set_done_2(bool value)
	{
		___done_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYNCOPERATION_T2743648699_H
#ifndef ATTRIBUTECOLLECTION_T4221220734_H
#define ATTRIBUTECOLLECTION_T4221220734_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.AttributeCollection
struct  AttributeCollection_t4221220734  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.ComponentModel.AttributeCollection::attrList
	ArrayList_t2718874744 * ___attrList_0;

public:
	inline static int32_t get_offset_of_attrList_0() { return static_cast<int32_t>(offsetof(AttributeCollection_t4221220734, ___attrList_0)); }
	inline ArrayList_t2718874744 * get_attrList_0() const { return ___attrList_0; }
	inline ArrayList_t2718874744 ** get_address_of_attrList_0() { return &___attrList_0; }
	inline void set_attrList_0(ArrayList_t2718874744 * value)
	{
		___attrList_0 = value;
		Il2CppCodeGenWriteBarrier((&___attrList_0), value);
	}
};

struct AttributeCollection_t4221220734_StaticFields
{
public:
	// System.ComponentModel.AttributeCollection System.ComponentModel.AttributeCollection::Empty
	AttributeCollection_t4221220734 * ___Empty_1;

public:
	inline static int32_t get_offset_of_Empty_1() { return static_cast<int32_t>(offsetof(AttributeCollection_t4221220734_StaticFields, ___Empty_1)); }
	inline AttributeCollection_t4221220734 * get_Empty_1() const { return ___Empty_1; }
	inline AttributeCollection_t4221220734 ** get_address_of_Empty_1() { return &___Empty_1; }
	inline void set_Empty_1(AttributeCollection_t4221220734 * value)
	{
		___Empty_1 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTECOLLECTION_T4221220734_H
#ifndef ASYNCOPERATIONMANAGER_T1665670643_H
#define ASYNCOPERATIONMANAGER_T1665670643_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.AsyncOperationManager
struct  AsyncOperationManager_t1665670643  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYNCOPERATIONMANAGER_T1665670643_H
#ifndef KEYSCOLLECTION_T1318642398_H
#define KEYSCOLLECTION_T1318642398_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.NameObjectCollectionBase/KeysCollection
struct  KeysCollection_t1318642398  : public RuntimeObject
{
public:
	// System.Collections.Specialized.NameObjectCollectionBase System.Collections.Specialized.NameObjectCollectionBase/KeysCollection::m_collection
	NameObjectCollectionBase_t2091847364 * ___m_collection_0;

public:
	inline static int32_t get_offset_of_m_collection_0() { return static_cast<int32_t>(offsetof(KeysCollection_t1318642398, ___m_collection_0)); }
	inline NameObjectCollectionBase_t2091847364 * get_m_collection_0() const { return ___m_collection_0; }
	inline NameObjectCollectionBase_t2091847364 ** get_address_of_m_collection_0() { return &___m_collection_0; }
	inline void set_m_collection_0(NameObjectCollectionBase_t2091847364 * value)
	{
		___m_collection_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_collection_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYSCOLLECTION_T1318642398_H
#ifndef _KEYSENUMERATOR_T4246666432_H
#define _KEYSENUMERATOR_T4246666432_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.NameObjectCollectionBase/_KeysEnumerator
struct  _KeysEnumerator_t4246666432  : public RuntimeObject
{
public:
	// System.Collections.Specialized.NameObjectCollectionBase System.Collections.Specialized.NameObjectCollectionBase/_KeysEnumerator::m_collection
	NameObjectCollectionBase_t2091847364 * ___m_collection_0;
	// System.Int32 System.Collections.Specialized.NameObjectCollectionBase/_KeysEnumerator::m_position
	int32_t ___m_position_1;

public:
	inline static int32_t get_offset_of_m_collection_0() { return static_cast<int32_t>(offsetof(_KeysEnumerator_t4246666432, ___m_collection_0)); }
	inline NameObjectCollectionBase_t2091847364 * get_m_collection_0() const { return ___m_collection_0; }
	inline NameObjectCollectionBase_t2091847364 ** get_address_of_m_collection_0() { return &___m_collection_0; }
	inline void set_m_collection_0(NameObjectCollectionBase_t2091847364 * value)
	{
		___m_collection_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_collection_0), value);
	}

	inline static int32_t get_offset_of_m_position_1() { return static_cast<int32_t>(offsetof(_KeysEnumerator_t4246666432, ___m_position_1)); }
	inline int32_t get_m_position_1() const { return ___m_position_1; }
	inline int32_t* get_address_of_m_position_1() { return &___m_position_1; }
	inline void set_m_position_1(int32_t value)
	{
		___m_position_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // _KEYSENUMERATOR_T4246666432_H
#ifndef LISTDICTIONARY_T1624492310_H
#define LISTDICTIONARY_T1624492310_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.ListDictionary
struct  ListDictionary_t1624492310  : public RuntimeObject
{
public:
	// System.Int32 System.Collections.Specialized.ListDictionary::count
	int32_t ___count_0;
	// System.Int32 System.Collections.Specialized.ListDictionary::version
	int32_t ___version_1;
	// System.Collections.Specialized.ListDictionary/DictionaryNode System.Collections.Specialized.ListDictionary::head
	DictionaryNode_t417719465 * ___head_2;
	// System.Collections.IComparer System.Collections.Specialized.ListDictionary::comparer
	RuntimeObject* ___comparer_3;

public:
	inline static int32_t get_offset_of_count_0() { return static_cast<int32_t>(offsetof(ListDictionary_t1624492310, ___count_0)); }
	inline int32_t get_count_0() const { return ___count_0; }
	inline int32_t* get_address_of_count_0() { return &___count_0; }
	inline void set_count_0(int32_t value)
	{
		___count_0 = value;
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(ListDictionary_t1624492310, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_head_2() { return static_cast<int32_t>(offsetof(ListDictionary_t1624492310, ___head_2)); }
	inline DictionaryNode_t417719465 * get_head_2() const { return ___head_2; }
	inline DictionaryNode_t417719465 ** get_address_of_head_2() { return &___head_2; }
	inline void set_head_2(DictionaryNode_t417719465 * value)
	{
		___head_2 = value;
		Il2CppCodeGenWriteBarrier((&___head_2), value);
	}

	inline static int32_t get_offset_of_comparer_3() { return static_cast<int32_t>(offsetof(ListDictionary_t1624492310, ___comparer_3)); }
	inline RuntimeObject* get_comparer_3() const { return ___comparer_3; }
	inline RuntimeObject** get_address_of_comparer_3() { return &___comparer_3; }
	inline void set_comparer_3(RuntimeObject* value)
	{
		___comparer_3 = value;
		Il2CppCodeGenWriteBarrier((&___comparer_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LISTDICTIONARY_T1624492310_H
#ifndef DICTIONARYNODECOLLECTION_T819283804_H
#define DICTIONARYNODECOLLECTION_T819283804_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.ListDictionary/DictionaryNodeCollection
struct  DictionaryNodeCollection_t819283804  : public RuntimeObject
{
public:
	// System.Collections.Specialized.ListDictionary System.Collections.Specialized.ListDictionary/DictionaryNodeCollection::dict
	ListDictionary_t1624492310 * ___dict_0;
	// System.Boolean System.Collections.Specialized.ListDictionary/DictionaryNodeCollection::isKeyList
	bool ___isKeyList_1;

public:
	inline static int32_t get_offset_of_dict_0() { return static_cast<int32_t>(offsetof(DictionaryNodeCollection_t819283804, ___dict_0)); }
	inline ListDictionary_t1624492310 * get_dict_0() const { return ___dict_0; }
	inline ListDictionary_t1624492310 ** get_address_of_dict_0() { return &___dict_0; }
	inline void set_dict_0(ListDictionary_t1624492310 * value)
	{
		___dict_0 = value;
		Il2CppCodeGenWriteBarrier((&___dict_0), value);
	}

	inline static int32_t get_offset_of_isKeyList_1() { return static_cast<int32_t>(offsetof(DictionaryNodeCollection_t819283804, ___isKeyList_1)); }
	inline bool get_isKeyList_1() const { return ___isKeyList_1; }
	inline bool* get_address_of_isKeyList_1() { return &___isKeyList_1; }
	inline void set_isKeyList_1(bool value)
	{
		___isKeyList_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARYNODECOLLECTION_T819283804_H
#ifndef ORDEREDDICTIONARY_T2617496293_H
#define ORDEREDDICTIONARY_T2617496293_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.OrderedDictionary
struct  OrderedDictionary_t2617496293  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.Collections.Specialized.OrderedDictionary::list
	ArrayList_t2718874744 * ___list_0;
	// System.Collections.Hashtable System.Collections.Specialized.OrderedDictionary::hash
	Hashtable_t1853889766 * ___hash_1;
	// System.Boolean System.Collections.Specialized.OrderedDictionary::readOnly
	bool ___readOnly_2;
	// System.Int32 System.Collections.Specialized.OrderedDictionary::initialCapacity
	int32_t ___initialCapacity_3;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Specialized.OrderedDictionary::serializationInfo
	SerializationInfo_t950877179 * ___serializationInfo_4;
	// System.Collections.IEqualityComparer System.Collections.Specialized.OrderedDictionary::comparer
	RuntimeObject* ___comparer_5;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(OrderedDictionary_t2617496293, ___list_0)); }
	inline ArrayList_t2718874744 * get_list_0() const { return ___list_0; }
	inline ArrayList_t2718874744 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(ArrayList_t2718874744 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}

	inline static int32_t get_offset_of_hash_1() { return static_cast<int32_t>(offsetof(OrderedDictionary_t2617496293, ___hash_1)); }
	inline Hashtable_t1853889766 * get_hash_1() const { return ___hash_1; }
	inline Hashtable_t1853889766 ** get_address_of_hash_1() { return &___hash_1; }
	inline void set_hash_1(Hashtable_t1853889766 * value)
	{
		___hash_1 = value;
		Il2CppCodeGenWriteBarrier((&___hash_1), value);
	}

	inline static int32_t get_offset_of_readOnly_2() { return static_cast<int32_t>(offsetof(OrderedDictionary_t2617496293, ___readOnly_2)); }
	inline bool get_readOnly_2() const { return ___readOnly_2; }
	inline bool* get_address_of_readOnly_2() { return &___readOnly_2; }
	inline void set_readOnly_2(bool value)
	{
		___readOnly_2 = value;
	}

	inline static int32_t get_offset_of_initialCapacity_3() { return static_cast<int32_t>(offsetof(OrderedDictionary_t2617496293, ___initialCapacity_3)); }
	inline int32_t get_initialCapacity_3() const { return ___initialCapacity_3; }
	inline int32_t* get_address_of_initialCapacity_3() { return &___initialCapacity_3; }
	inline void set_initialCapacity_3(int32_t value)
	{
		___initialCapacity_3 = value;
	}

	inline static int32_t get_offset_of_serializationInfo_4() { return static_cast<int32_t>(offsetof(OrderedDictionary_t2617496293, ___serializationInfo_4)); }
	inline SerializationInfo_t950877179 * get_serializationInfo_4() const { return ___serializationInfo_4; }
	inline SerializationInfo_t950877179 ** get_address_of_serializationInfo_4() { return &___serializationInfo_4; }
	inline void set_serializationInfo_4(SerializationInfo_t950877179 * value)
	{
		___serializationInfo_4 = value;
		Il2CppCodeGenWriteBarrier((&___serializationInfo_4), value);
	}

	inline static int32_t get_offset_of_comparer_5() { return static_cast<int32_t>(offsetof(OrderedDictionary_t2617496293, ___comparer_5)); }
	inline RuntimeObject* get_comparer_5() const { return ___comparer_5; }
	inline RuntimeObject** get_address_of_comparer_5() { return &___comparer_5; }
	inline void set_comparer_5(RuntimeObject* value)
	{
		___comparer_5 = value;
		Il2CppCodeGenWriteBarrier((&___comparer_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ORDEREDDICTIONARY_T2617496293_H
#ifndef DICTIONARYNODE_T417719465_H
#define DICTIONARYNODE_T417719465_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.ListDictionary/DictionaryNode
struct  DictionaryNode_t417719465  : public RuntimeObject
{
public:
	// System.Object System.Collections.Specialized.ListDictionary/DictionaryNode::key
	RuntimeObject * ___key_0;
	// System.Object System.Collections.Specialized.ListDictionary/DictionaryNode::value
	RuntimeObject * ___value_1;
	// System.Collections.Specialized.ListDictionary/DictionaryNode System.Collections.Specialized.ListDictionary/DictionaryNode::next
	DictionaryNode_t417719465 * ___next_2;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(DictionaryNode_t417719465, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(DictionaryNode_t417719465, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}

	inline static int32_t get_offset_of_next_2() { return static_cast<int32_t>(offsetof(DictionaryNode_t417719465, ___next_2)); }
	inline DictionaryNode_t417719465 * get_next_2() const { return ___next_2; }
	inline DictionaryNode_t417719465 ** get_address_of_next_2() { return &___next_2; }
	inline void set_next_2(DictionaryNode_t417719465 * value)
	{
		___next_2 = value;
		Il2CppCodeGenWriteBarrier((&___next_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARYNODE_T417719465_H
#ifndef DICTIONARYNODEENUMERATOR_T1673829610_H
#define DICTIONARYNODEENUMERATOR_T1673829610_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.ListDictionary/DictionaryNodeEnumerator
struct  DictionaryNodeEnumerator_t1673829610  : public RuntimeObject
{
public:
	// System.Collections.Specialized.ListDictionary System.Collections.Specialized.ListDictionary/DictionaryNodeEnumerator::dict
	ListDictionary_t1624492310 * ___dict_0;
	// System.Boolean System.Collections.Specialized.ListDictionary/DictionaryNodeEnumerator::isAtStart
	bool ___isAtStart_1;
	// System.Collections.Specialized.ListDictionary/DictionaryNode System.Collections.Specialized.ListDictionary/DictionaryNodeEnumerator::current
	DictionaryNode_t417719465 * ___current_2;
	// System.Int32 System.Collections.Specialized.ListDictionary/DictionaryNodeEnumerator::version
	int32_t ___version_3;

public:
	inline static int32_t get_offset_of_dict_0() { return static_cast<int32_t>(offsetof(DictionaryNodeEnumerator_t1673829610, ___dict_0)); }
	inline ListDictionary_t1624492310 * get_dict_0() const { return ___dict_0; }
	inline ListDictionary_t1624492310 ** get_address_of_dict_0() { return &___dict_0; }
	inline void set_dict_0(ListDictionary_t1624492310 * value)
	{
		___dict_0 = value;
		Il2CppCodeGenWriteBarrier((&___dict_0), value);
	}

	inline static int32_t get_offset_of_isAtStart_1() { return static_cast<int32_t>(offsetof(DictionaryNodeEnumerator_t1673829610, ___isAtStart_1)); }
	inline bool get_isAtStart_1() const { return ___isAtStart_1; }
	inline bool* get_address_of_isAtStart_1() { return &___isAtStart_1; }
	inline void set_isAtStart_1(bool value)
	{
		___isAtStart_1 = value;
	}

	inline static int32_t get_offset_of_current_2() { return static_cast<int32_t>(offsetof(DictionaryNodeEnumerator_t1673829610, ___current_2)); }
	inline DictionaryNode_t417719465 * get_current_2() const { return ___current_2; }
	inline DictionaryNode_t417719465 ** get_address_of_current_2() { return &___current_2; }
	inline void set_current_2(DictionaryNode_t417719465 * value)
	{
		___current_2 = value;
		Il2CppCodeGenWriteBarrier((&___current_2), value);
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(DictionaryNodeEnumerator_t1673829610, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARYNODEENUMERATOR_T1673829610_H
#ifndef DICTIONARYNODECOLLECTIONENUMERATOR_T2863182637_H
#define DICTIONARYNODECOLLECTIONENUMERATOR_T2863182637_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.ListDictionary/DictionaryNodeCollection/DictionaryNodeCollectionEnumerator
struct  DictionaryNodeCollectionEnumerator_t2863182637  : public RuntimeObject
{
public:
	// System.Collections.IDictionaryEnumerator System.Collections.Specialized.ListDictionary/DictionaryNodeCollection/DictionaryNodeCollectionEnumerator::inner
	RuntimeObject* ___inner_0;
	// System.Boolean System.Collections.Specialized.ListDictionary/DictionaryNodeCollection/DictionaryNodeCollectionEnumerator::isKeyList
	bool ___isKeyList_1;

public:
	inline static int32_t get_offset_of_inner_0() { return static_cast<int32_t>(offsetof(DictionaryNodeCollectionEnumerator_t2863182637, ___inner_0)); }
	inline RuntimeObject* get_inner_0() const { return ___inner_0; }
	inline RuntimeObject** get_address_of_inner_0() { return &___inner_0; }
	inline void set_inner_0(RuntimeObject* value)
	{
		___inner_0 = value;
		Il2CppCodeGenWriteBarrier((&___inner_0), value);
	}

	inline static int32_t get_offset_of_isKeyList_1() { return static_cast<int32_t>(offsetof(DictionaryNodeCollectionEnumerator_t2863182637, ___isKeyList_1)); }
	inline bool get_isKeyList_1() const { return ___isKeyList_1; }
	inline bool* get_address_of_isKeyList_1() { return &___isKeyList_1; }
	inline void set_isKeyList_1(bool value)
	{
		___isKeyList_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARYNODECOLLECTIONENUMERATOR_T2863182637_H
#ifndef _ITEM_T2272350267_H
#define _ITEM_T2272350267_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.NameObjectCollectionBase/_Item
struct  _Item_t2272350267  : public RuntimeObject
{
public:
	// System.String System.Collections.Specialized.NameObjectCollectionBase/_Item::key
	String_t* ___key_0;
	// System.Object System.Collections.Specialized.NameObjectCollectionBase/_Item::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(_Item_t2272350267, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(_Item_t2272350267, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // _ITEM_T2272350267_H
#ifndef NAMEOBJECTCOLLECTIONBASE_T2091847364_H
#define NAMEOBJECTCOLLECTIONBASE_T2091847364_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.NameObjectCollectionBase
struct  NameObjectCollectionBase_t2091847364  : public RuntimeObject
{
public:
	// System.Collections.Hashtable System.Collections.Specialized.NameObjectCollectionBase::m_ItemsContainer
	Hashtable_t1853889766 * ___m_ItemsContainer_0;
	// System.Collections.Specialized.NameObjectCollectionBase/_Item System.Collections.Specialized.NameObjectCollectionBase::m_NullKeyItem
	_Item_t2272350267 * ___m_NullKeyItem_1;
	// System.Collections.ArrayList System.Collections.Specialized.NameObjectCollectionBase::m_ItemsArray
	ArrayList_t2718874744 * ___m_ItemsArray_2;
	// System.Collections.IHashCodeProvider System.Collections.Specialized.NameObjectCollectionBase::m_hashprovider
	RuntimeObject* ___m_hashprovider_3;
	// System.Collections.IComparer System.Collections.Specialized.NameObjectCollectionBase::m_comparer
	RuntimeObject* ___m_comparer_4;
	// System.Int32 System.Collections.Specialized.NameObjectCollectionBase::m_defCapacity
	int32_t ___m_defCapacity_5;
	// System.Boolean System.Collections.Specialized.NameObjectCollectionBase::m_readonly
	bool ___m_readonly_6;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Specialized.NameObjectCollectionBase::infoCopy
	SerializationInfo_t950877179 * ___infoCopy_7;
	// System.Collections.Specialized.NameObjectCollectionBase/KeysCollection System.Collections.Specialized.NameObjectCollectionBase::keyscoll
	KeysCollection_t1318642398 * ___keyscoll_8;
	// System.Collections.IEqualityComparer System.Collections.Specialized.NameObjectCollectionBase::equality_comparer
	RuntimeObject* ___equality_comparer_9;

public:
	inline static int32_t get_offset_of_m_ItemsContainer_0() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t2091847364, ___m_ItemsContainer_0)); }
	inline Hashtable_t1853889766 * get_m_ItemsContainer_0() const { return ___m_ItemsContainer_0; }
	inline Hashtable_t1853889766 ** get_address_of_m_ItemsContainer_0() { return &___m_ItemsContainer_0; }
	inline void set_m_ItemsContainer_0(Hashtable_t1853889766 * value)
	{
		___m_ItemsContainer_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_ItemsContainer_0), value);
	}

	inline static int32_t get_offset_of_m_NullKeyItem_1() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t2091847364, ___m_NullKeyItem_1)); }
	inline _Item_t2272350267 * get_m_NullKeyItem_1() const { return ___m_NullKeyItem_1; }
	inline _Item_t2272350267 ** get_address_of_m_NullKeyItem_1() { return &___m_NullKeyItem_1; }
	inline void set_m_NullKeyItem_1(_Item_t2272350267 * value)
	{
		___m_NullKeyItem_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_NullKeyItem_1), value);
	}

	inline static int32_t get_offset_of_m_ItemsArray_2() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t2091847364, ___m_ItemsArray_2)); }
	inline ArrayList_t2718874744 * get_m_ItemsArray_2() const { return ___m_ItemsArray_2; }
	inline ArrayList_t2718874744 ** get_address_of_m_ItemsArray_2() { return &___m_ItemsArray_2; }
	inline void set_m_ItemsArray_2(ArrayList_t2718874744 * value)
	{
		___m_ItemsArray_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_ItemsArray_2), value);
	}

	inline static int32_t get_offset_of_m_hashprovider_3() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t2091847364, ___m_hashprovider_3)); }
	inline RuntimeObject* get_m_hashprovider_3() const { return ___m_hashprovider_3; }
	inline RuntimeObject** get_address_of_m_hashprovider_3() { return &___m_hashprovider_3; }
	inline void set_m_hashprovider_3(RuntimeObject* value)
	{
		___m_hashprovider_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_hashprovider_3), value);
	}

	inline static int32_t get_offset_of_m_comparer_4() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t2091847364, ___m_comparer_4)); }
	inline RuntimeObject* get_m_comparer_4() const { return ___m_comparer_4; }
	inline RuntimeObject** get_address_of_m_comparer_4() { return &___m_comparer_4; }
	inline void set_m_comparer_4(RuntimeObject* value)
	{
		___m_comparer_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_comparer_4), value);
	}

	inline static int32_t get_offset_of_m_defCapacity_5() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t2091847364, ___m_defCapacity_5)); }
	inline int32_t get_m_defCapacity_5() const { return ___m_defCapacity_5; }
	inline int32_t* get_address_of_m_defCapacity_5() { return &___m_defCapacity_5; }
	inline void set_m_defCapacity_5(int32_t value)
	{
		___m_defCapacity_5 = value;
	}

	inline static int32_t get_offset_of_m_readonly_6() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t2091847364, ___m_readonly_6)); }
	inline bool get_m_readonly_6() const { return ___m_readonly_6; }
	inline bool* get_address_of_m_readonly_6() { return &___m_readonly_6; }
	inline void set_m_readonly_6(bool value)
	{
		___m_readonly_6 = value;
	}

	inline static int32_t get_offset_of_infoCopy_7() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t2091847364, ___infoCopy_7)); }
	inline SerializationInfo_t950877179 * get_infoCopy_7() const { return ___infoCopy_7; }
	inline SerializationInfo_t950877179 ** get_address_of_infoCopy_7() { return &___infoCopy_7; }
	inline void set_infoCopy_7(SerializationInfo_t950877179 * value)
	{
		___infoCopy_7 = value;
		Il2CppCodeGenWriteBarrier((&___infoCopy_7), value);
	}

	inline static int32_t get_offset_of_keyscoll_8() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t2091847364, ___keyscoll_8)); }
	inline KeysCollection_t1318642398 * get_keyscoll_8() const { return ___keyscoll_8; }
	inline KeysCollection_t1318642398 ** get_address_of_keyscoll_8() { return &___keyscoll_8; }
	inline void set_keyscoll_8(KeysCollection_t1318642398 * value)
	{
		___keyscoll_8 = value;
		Il2CppCodeGenWriteBarrier((&___keyscoll_8), value);
	}

	inline static int32_t get_offset_of_equality_comparer_9() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t2091847364, ___equality_comparer_9)); }
	inline RuntimeObject* get_equality_comparer_9() const { return ___equality_comparer_9; }
	inline RuntimeObject** get_address_of_equality_comparer_9() { return &___equality_comparer_9; }
	inline void set_equality_comparer_9(RuntimeObject* value)
	{
		___equality_comparer_9 = value;
		Il2CppCodeGenWriteBarrier((&___equality_comparer_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NAMEOBJECTCOLLECTIONBASE_T2091847364_H
#ifndef STRINGDICTIONARY_T120437468_H
#define STRINGDICTIONARY_T120437468_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.StringDictionary
struct  StringDictionary_t120437468  : public RuntimeObject
{
public:
	// System.Collections.Hashtable System.Collections.Specialized.StringDictionary::contents
	Hashtable_t1853889766 * ___contents_0;

public:
	inline static int32_t get_offset_of_contents_0() { return static_cast<int32_t>(offsetof(StringDictionary_t120437468, ___contents_0)); }
	inline Hashtable_t1853889766 * get_contents_0() const { return ___contents_0; }
	inline Hashtable_t1853889766 ** get_address_of_contents_0() { return &___contents_0; }
	inline void set_contents_0(Hashtable_t1853889766 * value)
	{
		___contents_0 = value;
		Il2CppCodeGenWriteBarrier((&___contents_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGDICTIONARY_T120437468_H
#ifndef ORDEREDENTRYCOLLECTIONENUMERATOR_T1171499853_H
#define ORDEREDENTRYCOLLECTIONENUMERATOR_T1171499853_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.OrderedDictionary/OrderedEntryCollectionEnumerator
struct  OrderedEntryCollectionEnumerator_t1171499853  : public RuntimeObject
{
public:
	// System.Collections.IEnumerator System.Collections.Specialized.OrderedDictionary/OrderedEntryCollectionEnumerator::listEnumerator
	RuntimeObject* ___listEnumerator_0;

public:
	inline static int32_t get_offset_of_listEnumerator_0() { return static_cast<int32_t>(offsetof(OrderedEntryCollectionEnumerator_t1171499853, ___listEnumerator_0)); }
	inline RuntimeObject* get_listEnumerator_0() const { return ___listEnumerator_0; }
	inline RuntimeObject** get_address_of_listEnumerator_0() { return &___listEnumerator_0; }
	inline void set_listEnumerator_0(RuntimeObject* value)
	{
		___listEnumerator_0 = value;
		Il2CppCodeGenWriteBarrier((&___listEnumerator_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ORDEREDENTRYCOLLECTIONENUMERATOR_T1171499853_H
#ifndef STRINGENUMERATOR_T3934291441_H
#define STRINGENUMERATOR_T3934291441_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.StringEnumerator
struct  StringEnumerator_t3934291441  : public RuntimeObject
{
public:
	// System.Collections.IEnumerator System.Collections.Specialized.StringEnumerator::enumerable
	RuntimeObject* ___enumerable_0;

public:
	inline static int32_t get_offset_of_enumerable_0() { return static_cast<int32_t>(offsetof(StringEnumerator_t3934291441, ___enumerable_0)); }
	inline RuntimeObject* get_enumerable_0() const { return ___enumerable_0; }
	inline RuntimeObject** get_address_of_enumerable_0() { return &___enumerable_0; }
	inline void set_enumerable_0(RuntimeObject* value)
	{
		___enumerable_0 = value;
		Il2CppCodeGenWriteBarrier((&___enumerable_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGENUMERATOR_T3934291441_H
#ifndef MEMBERDESCRIPTOR_T3815403747_H
#define MEMBERDESCRIPTOR_T3815403747_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.MemberDescriptor
struct  MemberDescriptor_t3815403747  : public RuntimeObject
{
public:
	// System.String System.ComponentModel.MemberDescriptor::name
	String_t* ___name_0;
	// System.Attribute[] System.ComponentModel.MemberDescriptor::attrs
	AttributeU5BU5D_t1575011174* ___attrs_1;
	// System.ComponentModel.AttributeCollection System.ComponentModel.MemberDescriptor::attrCollection
	AttributeCollection_t4221220734 * ___attrCollection_2;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(MemberDescriptor_t3815403747, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}

	inline static int32_t get_offset_of_attrs_1() { return static_cast<int32_t>(offsetof(MemberDescriptor_t3815403747, ___attrs_1)); }
	inline AttributeU5BU5D_t1575011174* get_attrs_1() const { return ___attrs_1; }
	inline AttributeU5BU5D_t1575011174** get_address_of_attrs_1() { return &___attrs_1; }
	inline void set_attrs_1(AttributeU5BU5D_t1575011174* value)
	{
		___attrs_1 = value;
		Il2CppCodeGenWriteBarrier((&___attrs_1), value);
	}

	inline static int32_t get_offset_of_attrCollection_2() { return static_cast<int32_t>(offsetof(MemberDescriptor_t3815403747, ___attrCollection_2)); }
	inline AttributeCollection_t4221220734 * get_attrCollection_2() const { return ___attrCollection_2; }
	inline AttributeCollection_t4221220734 ** get_address_of_attrCollection_2() { return &___attrCollection_2; }
	inline void set_attrCollection_2(AttributeCollection_t4221220734 * value)
	{
		___attrCollection_2 = value;
		Il2CppCodeGenWriteBarrier((&___attrCollection_2), value);
	}
};

struct MemberDescriptor_t3815403747_StaticFields
{
public:
	// System.Collections.IComparer System.ComponentModel.MemberDescriptor::default_comparer
	RuntimeObject* ___default_comparer_3;

public:
	inline static int32_t get_offset_of_default_comparer_3() { return static_cast<int32_t>(offsetof(MemberDescriptor_t3815403747_StaticFields, ___default_comparer_3)); }
	inline RuntimeObject* get_default_comparer_3() const { return ___default_comparer_3; }
	inline RuntimeObject** get_address_of_default_comparer_3() { return &___default_comparer_3; }
	inline void set_default_comparer_3(RuntimeObject* value)
	{
		___default_comparer_3 = value;
		Il2CppCodeGenWriteBarrier((&___default_comparer_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERDESCRIPTOR_T3815403747_H
#ifndef INSTANCEDESCRIPTOR_T657473484_H
#define INSTANCEDESCRIPTOR_T657473484_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.Design.Serialization.InstanceDescriptor
struct  InstanceDescriptor_t657473484  : public RuntimeObject
{
public:
	// System.Reflection.MemberInfo System.ComponentModel.Design.Serialization.InstanceDescriptor::member
	MemberInfo_t * ___member_0;
	// System.Collections.ICollection System.ComponentModel.Design.Serialization.InstanceDescriptor::arguments
	RuntimeObject* ___arguments_1;
	// System.Boolean System.ComponentModel.Design.Serialization.InstanceDescriptor::isComplete
	bool ___isComplete_2;

public:
	inline static int32_t get_offset_of_member_0() { return static_cast<int32_t>(offsetof(InstanceDescriptor_t657473484, ___member_0)); }
	inline MemberInfo_t * get_member_0() const { return ___member_0; }
	inline MemberInfo_t ** get_address_of_member_0() { return &___member_0; }
	inline void set_member_0(MemberInfo_t * value)
	{
		___member_0 = value;
		Il2CppCodeGenWriteBarrier((&___member_0), value);
	}

	inline static int32_t get_offset_of_arguments_1() { return static_cast<int32_t>(offsetof(InstanceDescriptor_t657473484, ___arguments_1)); }
	inline RuntimeObject* get_arguments_1() const { return ___arguments_1; }
	inline RuntimeObject** get_address_of_arguments_1() { return &___arguments_1; }
	inline void set_arguments_1(RuntimeObject* value)
	{
		___arguments_1 = value;
		Il2CppCodeGenWriteBarrier((&___arguments_1), value);
	}

	inline static int32_t get_offset_of_isComplete_2() { return static_cast<int32_t>(offsetof(InstanceDescriptor_t657473484, ___isComplete_2)); }
	inline bool get_isComplete_2() const { return ___isComplete_2; }
	inline bool* get_address_of_isComplete_2() { return &___isComplete_2; }
	inline void set_isComplete_2(bool value)
	{
		___isComplete_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INSTANCEDESCRIPTOR_T657473484_H
#ifndef ORDEREDCOLLECTIONENUMERATOR_T3799789192_H
#define ORDEREDCOLLECTIONENUMERATOR_T3799789192_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.OrderedDictionary/OrderedCollection/OrderedCollectionEnumerator
struct  OrderedCollectionEnumerator_t3799789192  : public RuntimeObject
{
public:
	// System.Boolean System.Collections.Specialized.OrderedDictionary/OrderedCollection/OrderedCollectionEnumerator::isKeyList
	bool ___isKeyList_0;
	// System.Collections.IEnumerator System.Collections.Specialized.OrderedDictionary/OrderedCollection/OrderedCollectionEnumerator::listEnumerator
	RuntimeObject* ___listEnumerator_1;

public:
	inline static int32_t get_offset_of_isKeyList_0() { return static_cast<int32_t>(offsetof(OrderedCollectionEnumerator_t3799789192, ___isKeyList_0)); }
	inline bool get_isKeyList_0() const { return ___isKeyList_0; }
	inline bool* get_address_of_isKeyList_0() { return &___isKeyList_0; }
	inline void set_isKeyList_0(bool value)
	{
		___isKeyList_0 = value;
	}

	inline static int32_t get_offset_of_listEnumerator_1() { return static_cast<int32_t>(offsetof(OrderedCollectionEnumerator_t3799789192, ___listEnumerator_1)); }
	inline RuntimeObject* get_listEnumerator_1() const { return ___listEnumerator_1; }
	inline RuntimeObject** get_address_of_listEnumerator_1() { return &___listEnumerator_1; }
	inline void set_listEnumerator_1(RuntimeObject* value)
	{
		___listEnumerator_1 = value;
		Il2CppCodeGenWriteBarrier((&___listEnumerator_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ORDEREDCOLLECTIONENUMERATOR_T3799789192_H
#ifndef ORDEREDCOLLECTION_T2804082187_H
#define ORDEREDCOLLECTION_T2804082187_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.OrderedDictionary/OrderedCollection
struct  OrderedCollection_t2804082187  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.Collections.Specialized.OrderedDictionary/OrderedCollection::list
	ArrayList_t2718874744 * ___list_0;
	// System.Boolean System.Collections.Specialized.OrderedDictionary/OrderedCollection::isKeyList
	bool ___isKeyList_1;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(OrderedCollection_t2804082187, ___list_0)); }
	inline ArrayList_t2718874744 * get_list_0() const { return ___list_0; }
	inline ArrayList_t2718874744 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(ArrayList_t2718874744 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}

	inline static int32_t get_offset_of_isKeyList_1() { return static_cast<int32_t>(offsetof(OrderedCollection_t2804082187, ___isKeyList_1)); }
	inline bool get_isKeyList_1() const { return ___isKeyList_1; }
	inline bool* get_address_of_isKeyList_1() { return &___isKeyList_1; }
	inline void set_isKeyList_1(bool value)
	{
		___isKeyList_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ORDEREDCOLLECTION_T2804082187_H
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
#ifndef STRINGCOLLECTION_T167406615_H
#define STRINGCOLLECTION_T167406615_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.StringCollection
struct  StringCollection_t167406615  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.Collections.Specialized.StringCollection::data
	ArrayList_t2718874744 * ___data_0;

public:
	inline static int32_t get_offset_of_data_0() { return static_cast<int32_t>(offsetof(StringCollection_t167406615, ___data_0)); }
	inline ArrayList_t2718874744 * get_data_0() const { return ___data_0; }
	inline ArrayList_t2718874744 ** get_address_of_data_0() { return &___data_0; }
	inline void set_data_0(ArrayList_t2718874744 * value)
	{
		___data_0 = value;
		Il2CppCodeGenWriteBarrier((&___data_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGCOLLECTION_T167406615_H
#ifndef DOWORKEVENTARGS_T1025725751_H
#define DOWORKEVENTARGS_T1025725751_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DoWorkEventArgs
struct  DoWorkEventArgs_t1025725751  : public EventArgs_t3591816995
{
public:
	// System.Object System.ComponentModel.DoWorkEventArgs::arg
	RuntimeObject * ___arg_1;
	// System.Object System.ComponentModel.DoWorkEventArgs::result
	RuntimeObject * ___result_2;
	// System.Boolean System.ComponentModel.DoWorkEventArgs::cancel
	bool ___cancel_3;

public:
	inline static int32_t get_offset_of_arg_1() { return static_cast<int32_t>(offsetof(DoWorkEventArgs_t1025725751, ___arg_1)); }
	inline RuntimeObject * get_arg_1() const { return ___arg_1; }
	inline RuntimeObject ** get_address_of_arg_1() { return &___arg_1; }
	inline void set_arg_1(RuntimeObject * value)
	{
		___arg_1 = value;
		Il2CppCodeGenWriteBarrier((&___arg_1), value);
	}

	inline static int32_t get_offset_of_result_2() { return static_cast<int32_t>(offsetof(DoWorkEventArgs_t1025725751, ___result_2)); }
	inline RuntimeObject * get_result_2() const { return ___result_2; }
	inline RuntimeObject ** get_address_of_result_2() { return &___result_2; }
	inline void set_result_2(RuntimeObject * value)
	{
		___result_2 = value;
		Il2CppCodeGenWriteBarrier((&___result_2), value);
	}

	inline static int32_t get_offset_of_cancel_3() { return static_cast<int32_t>(offsetof(DoWorkEventArgs_t1025725751, ___cancel_3)); }
	inline bool get_cancel_3() const { return ___cancel_3; }
	inline bool* get_address_of_cancel_3() { return &___cancel_3; }
	inline void set_cancel_3(bool value)
	{
		___cancel_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DOWORKEVENTARGS_T1025725751_H
#ifndef DESIGNERCATEGORYATTRIBUTE_T2912925731_H
#define DESIGNERCATEGORYATTRIBUTE_T2912925731_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DesignerCategoryAttribute
struct  DesignerCategoryAttribute_t2912925731  : public Attribute_t861562559
{
public:
	// System.String System.ComponentModel.DesignerCategoryAttribute::category
	String_t* ___category_0;

public:
	inline static int32_t get_offset_of_category_0() { return static_cast<int32_t>(offsetof(DesignerCategoryAttribute_t2912925731, ___category_0)); }
	inline String_t* get_category_0() const { return ___category_0; }
	inline String_t** get_address_of_category_0() { return &___category_0; }
	inline void set_category_0(String_t* value)
	{
		___category_0 = value;
		Il2CppCodeGenWriteBarrier((&___category_0), value);
	}
};

struct DesignerCategoryAttribute_t2912925731_StaticFields
{
public:
	// System.ComponentModel.DesignerCategoryAttribute System.ComponentModel.DesignerCategoryAttribute::Component
	DesignerCategoryAttribute_t2912925731 * ___Component_1;
	// System.ComponentModel.DesignerCategoryAttribute System.ComponentModel.DesignerCategoryAttribute::Form
	DesignerCategoryAttribute_t2912925731 * ___Form_2;
	// System.ComponentModel.DesignerCategoryAttribute System.ComponentModel.DesignerCategoryAttribute::Generic
	DesignerCategoryAttribute_t2912925731 * ___Generic_3;
	// System.ComponentModel.DesignerCategoryAttribute System.ComponentModel.DesignerCategoryAttribute::Default
	DesignerCategoryAttribute_t2912925731 * ___Default_4;

public:
	inline static int32_t get_offset_of_Component_1() { return static_cast<int32_t>(offsetof(DesignerCategoryAttribute_t2912925731_StaticFields, ___Component_1)); }
	inline DesignerCategoryAttribute_t2912925731 * get_Component_1() const { return ___Component_1; }
	inline DesignerCategoryAttribute_t2912925731 ** get_address_of_Component_1() { return &___Component_1; }
	inline void set_Component_1(DesignerCategoryAttribute_t2912925731 * value)
	{
		___Component_1 = value;
		Il2CppCodeGenWriteBarrier((&___Component_1), value);
	}

	inline static int32_t get_offset_of_Form_2() { return static_cast<int32_t>(offsetof(DesignerCategoryAttribute_t2912925731_StaticFields, ___Form_2)); }
	inline DesignerCategoryAttribute_t2912925731 * get_Form_2() const { return ___Form_2; }
	inline DesignerCategoryAttribute_t2912925731 ** get_address_of_Form_2() { return &___Form_2; }
	inline void set_Form_2(DesignerCategoryAttribute_t2912925731 * value)
	{
		___Form_2 = value;
		Il2CppCodeGenWriteBarrier((&___Form_2), value);
	}

	inline static int32_t get_offset_of_Generic_3() { return static_cast<int32_t>(offsetof(DesignerCategoryAttribute_t2912925731_StaticFields, ___Generic_3)); }
	inline DesignerCategoryAttribute_t2912925731 * get_Generic_3() const { return ___Generic_3; }
	inline DesignerCategoryAttribute_t2912925731 ** get_address_of_Generic_3() { return &___Generic_3; }
	inline void set_Generic_3(DesignerCategoryAttribute_t2912925731 * value)
	{
		___Generic_3 = value;
		Il2CppCodeGenWriteBarrier((&___Generic_3), value);
	}

	inline static int32_t get_offset_of_Default_4() { return static_cast<int32_t>(offsetof(DesignerCategoryAttribute_t2912925731_StaticFields, ___Default_4)); }
	inline DesignerCategoryAttribute_t2912925731 * get_Default_4() const { return ___Default_4; }
	inline DesignerCategoryAttribute_t2912925731 ** get_address_of_Default_4() { return &___Default_4; }
	inline void set_Default_4(DesignerCategoryAttribute_t2912925731 * value)
	{
		___Default_4 = value;
		Il2CppCodeGenWriteBarrier((&___Default_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DESIGNERCATEGORYATTRIBUTE_T2912925731_H
#ifndef DISPLAYNAMEATTRIBUTE_T2074055386_H
#define DISPLAYNAMEATTRIBUTE_T2074055386_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DisplayNameAttribute
struct  DisplayNameAttribute_t2074055386  : public Attribute_t861562559
{
public:
	// System.String System.ComponentModel.DisplayNameAttribute::attributeDisplayName
	String_t* ___attributeDisplayName_1;

public:
	inline static int32_t get_offset_of_attributeDisplayName_1() { return static_cast<int32_t>(offsetof(DisplayNameAttribute_t2074055386, ___attributeDisplayName_1)); }
	inline String_t* get_attributeDisplayName_1() const { return ___attributeDisplayName_1; }
	inline String_t** get_address_of_attributeDisplayName_1() { return &___attributeDisplayName_1; }
	inline void set_attributeDisplayName_1(String_t* value)
	{
		___attributeDisplayName_1 = value;
		Il2CppCodeGenWriteBarrier((&___attributeDisplayName_1), value);
	}
};

struct DisplayNameAttribute_t2074055386_StaticFields
{
public:
	// System.ComponentModel.DisplayNameAttribute System.ComponentModel.DisplayNameAttribute::Default
	DisplayNameAttribute_t2074055386 * ___Default_0;

public:
	inline static int32_t get_offset_of_Default_0() { return static_cast<int32_t>(offsetof(DisplayNameAttribute_t2074055386_StaticFields, ___Default_0)); }
	inline DisplayNameAttribute_t2074055386 * get_Default_0() const { return ___Default_0; }
	inline DisplayNameAttribute_t2074055386 ** get_address_of_Default_0() { return &___Default_0; }
	inline void set_Default_0(DisplayNameAttribute_t2074055386 * value)
	{
		___Default_0 = value;
		Il2CppCodeGenWriteBarrier((&___Default_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DISPLAYNAMEATTRIBUTE_T2074055386_H
#ifndef DEFAULTPROPERTYATTRIBUTE_T1952442862_H
#define DEFAULTPROPERTYATTRIBUTE_T1952442862_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DefaultPropertyAttribute
struct  DefaultPropertyAttribute_t1952442862  : public Attribute_t861562559
{
public:
	// System.String System.ComponentModel.DefaultPropertyAttribute::property_name
	String_t* ___property_name_0;

public:
	inline static int32_t get_offset_of_property_name_0() { return static_cast<int32_t>(offsetof(DefaultPropertyAttribute_t1952442862, ___property_name_0)); }
	inline String_t* get_property_name_0() const { return ___property_name_0; }
	inline String_t** get_address_of_property_name_0() { return &___property_name_0; }
	inline void set_property_name_0(String_t* value)
	{
		___property_name_0 = value;
		Il2CppCodeGenWriteBarrier((&___property_name_0), value);
	}
};

struct DefaultPropertyAttribute_t1952442862_StaticFields
{
public:
	// System.ComponentModel.DefaultPropertyAttribute System.ComponentModel.DefaultPropertyAttribute::Default
	DefaultPropertyAttribute_t1952442862 * ___Default_1;

public:
	inline static int32_t get_offset_of_Default_1() { return static_cast<int32_t>(offsetof(DefaultPropertyAttribute_t1952442862_StaticFields, ___Default_1)); }
	inline DefaultPropertyAttribute_t1952442862 * get_Default_1() const { return ___Default_1; }
	inline DefaultPropertyAttribute_t1952442862 ** get_address_of_Default_1() { return &___Default_1; }
	inline void set_Default_1(DefaultPropertyAttribute_t1952442862 * value)
	{
		___Default_1 = value;
		Il2CppCodeGenWriteBarrier((&___Default_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTPROPERTYATTRIBUTE_T1952442862_H
#ifndef DESCRIPTIONATTRIBUTE_T874390736_H
#define DESCRIPTIONATTRIBUTE_T874390736_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DescriptionAttribute
struct  DescriptionAttribute_t874390736  : public Attribute_t861562559
{
public:
	// System.String System.ComponentModel.DescriptionAttribute::desc
	String_t* ___desc_0;

public:
	inline static int32_t get_offset_of_desc_0() { return static_cast<int32_t>(offsetof(DescriptionAttribute_t874390736, ___desc_0)); }
	inline String_t* get_desc_0() const { return ___desc_0; }
	inline String_t** get_address_of_desc_0() { return &___desc_0; }
	inline void set_desc_0(String_t* value)
	{
		___desc_0 = value;
		Il2CppCodeGenWriteBarrier((&___desc_0), value);
	}
};

struct DescriptionAttribute_t874390736_StaticFields
{
public:
	// System.ComponentModel.DescriptionAttribute System.ComponentModel.DescriptionAttribute::Default
	DescriptionAttribute_t874390736 * ___Default_1;

public:
	inline static int32_t get_offset_of_Default_1() { return static_cast<int32_t>(offsetof(DescriptionAttribute_t874390736_StaticFields, ___Default_1)); }
	inline DescriptionAttribute_t874390736 * get_Default_1() const { return ___Default_1; }
	inline DescriptionAttribute_t874390736 ** get_address_of_Default_1() { return &___Default_1; }
	inline void set_Default_1(DescriptionAttribute_t874390736 * value)
	{
		___Default_1 = value;
		Il2CppCodeGenWriteBarrier((&___Default_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DESCRIPTIONATTRIBUTE_T874390736_H
#ifndef DEFAULTVALUEATTRIBUTE_T587583663_H
#define DEFAULTVALUEATTRIBUTE_T587583663_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DefaultValueAttribute
struct  DefaultValueAttribute_t587583663  : public Attribute_t861562559
{
public:
	// System.Object System.ComponentModel.DefaultValueAttribute::DefaultValue
	RuntimeObject * ___DefaultValue_0;

public:
	inline static int32_t get_offset_of_DefaultValue_0() { return static_cast<int32_t>(offsetof(DefaultValueAttribute_t587583663, ___DefaultValue_0)); }
	inline RuntimeObject * get_DefaultValue_0() const { return ___DefaultValue_0; }
	inline RuntimeObject ** get_address_of_DefaultValue_0() { return &___DefaultValue_0; }
	inline void set_DefaultValue_0(RuntimeObject * value)
	{
		___DefaultValue_0 = value;
		Il2CppCodeGenWriteBarrier((&___DefaultValue_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTVALUEATTRIBUTE_T587583663_H
#ifndef DESIGNERATTRIBUTE_T2079716647_H
#define DESIGNERATTRIBUTE_T2079716647_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DesignerAttribute
struct  DesignerAttribute_t2079716647  : public Attribute_t861562559
{
public:
	// System.String System.ComponentModel.DesignerAttribute::name
	String_t* ___name_0;
	// System.String System.ComponentModel.DesignerAttribute::basetypename
	String_t* ___basetypename_1;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(DesignerAttribute_t2079716647, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}

	inline static int32_t get_offset_of_basetypename_1() { return static_cast<int32_t>(offsetof(DesignerAttribute_t2079716647, ___basetypename_1)); }
	inline String_t* get_basetypename_1() const { return ___basetypename_1; }
	inline String_t** get_address_of_basetypename_1() { return &___basetypename_1; }
	inline void set_basetypename_1(String_t* value)
	{
		___basetypename_1 = value;
		Il2CppCodeGenWriteBarrier((&___basetypename_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DESIGNERATTRIBUTE_T2079716647_H
#ifndef DESIGNTIMEVISIBLEATTRIBUTE_T2841844458_H
#define DESIGNTIMEVISIBLEATTRIBUTE_T2841844458_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DesignTimeVisibleAttribute
struct  DesignTimeVisibleAttribute_t2841844458  : public Attribute_t861562559
{
public:
	// System.Boolean System.ComponentModel.DesignTimeVisibleAttribute::visible
	bool ___visible_0;

public:
	inline static int32_t get_offset_of_visible_0() { return static_cast<int32_t>(offsetof(DesignTimeVisibleAttribute_t2841844458, ___visible_0)); }
	inline bool get_visible_0() const { return ___visible_0; }
	inline bool* get_address_of_visible_0() { return &___visible_0; }
	inline void set_visible_0(bool value)
	{
		___visible_0 = value;
	}
};

struct DesignTimeVisibleAttribute_t2841844458_StaticFields
{
public:
	// System.ComponentModel.DesignTimeVisibleAttribute System.ComponentModel.DesignTimeVisibleAttribute::Default
	DesignTimeVisibleAttribute_t2841844458 * ___Default_1;
	// System.ComponentModel.DesignTimeVisibleAttribute System.ComponentModel.DesignTimeVisibleAttribute::No
	DesignTimeVisibleAttribute_t2841844458 * ___No_2;
	// System.ComponentModel.DesignTimeVisibleAttribute System.ComponentModel.DesignTimeVisibleAttribute::Yes
	DesignTimeVisibleAttribute_t2841844458 * ___Yes_3;

public:
	inline static int32_t get_offset_of_Default_1() { return static_cast<int32_t>(offsetof(DesignTimeVisibleAttribute_t2841844458_StaticFields, ___Default_1)); }
	inline DesignTimeVisibleAttribute_t2841844458 * get_Default_1() const { return ___Default_1; }
	inline DesignTimeVisibleAttribute_t2841844458 ** get_address_of_Default_1() { return &___Default_1; }
	inline void set_Default_1(DesignTimeVisibleAttribute_t2841844458 * value)
	{
		___Default_1 = value;
		Il2CppCodeGenWriteBarrier((&___Default_1), value);
	}

	inline static int32_t get_offset_of_No_2() { return static_cast<int32_t>(offsetof(DesignTimeVisibleAttribute_t2841844458_StaticFields, ___No_2)); }
	inline DesignTimeVisibleAttribute_t2841844458 * get_No_2() const { return ___No_2; }
	inline DesignTimeVisibleAttribute_t2841844458 ** get_address_of_No_2() { return &___No_2; }
	inline void set_No_2(DesignTimeVisibleAttribute_t2841844458 * value)
	{
		___No_2 = value;
		Il2CppCodeGenWriteBarrier((&___No_2), value);
	}

	inline static int32_t get_offset_of_Yes_3() { return static_cast<int32_t>(offsetof(DesignTimeVisibleAttribute_t2841844458_StaticFields, ___Yes_3)); }
	inline DesignTimeVisibleAttribute_t2841844458 * get_Yes_3() const { return ___Yes_3; }
	inline DesignTimeVisibleAttribute_t2841844458 ** get_address_of_Yes_3() { return &___Yes_3; }
	inline void set_Yes_3(DesignTimeVisibleAttribute_t2841844458 * value)
	{
		___Yes_3 = value;
		Il2CppCodeGenWriteBarrier((&___Yes_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DESIGNTIMEVISIBLEATTRIBUTE_T2841844458_H
#ifndef DESIGNONLYATTRIBUTE_T1017827538_H
#define DESIGNONLYATTRIBUTE_T1017827538_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DesignOnlyAttribute
struct  DesignOnlyAttribute_t1017827538  : public Attribute_t861562559
{
public:
	// System.Boolean System.ComponentModel.DesignOnlyAttribute::design_only
	bool ___design_only_0;

public:
	inline static int32_t get_offset_of_design_only_0() { return static_cast<int32_t>(offsetof(DesignOnlyAttribute_t1017827538, ___design_only_0)); }
	inline bool get_design_only_0() const { return ___design_only_0; }
	inline bool* get_address_of_design_only_0() { return &___design_only_0; }
	inline void set_design_only_0(bool value)
	{
		___design_only_0 = value;
	}
};

struct DesignOnlyAttribute_t1017827538_StaticFields
{
public:
	// System.ComponentModel.DesignOnlyAttribute System.ComponentModel.DesignOnlyAttribute::Default
	DesignOnlyAttribute_t1017827538 * ___Default_1;
	// System.ComponentModel.DesignOnlyAttribute System.ComponentModel.DesignOnlyAttribute::No
	DesignOnlyAttribute_t1017827538 * ___No_2;
	// System.ComponentModel.DesignOnlyAttribute System.ComponentModel.DesignOnlyAttribute::Yes
	DesignOnlyAttribute_t1017827538 * ___Yes_3;

public:
	inline static int32_t get_offset_of_Default_1() { return static_cast<int32_t>(offsetof(DesignOnlyAttribute_t1017827538_StaticFields, ___Default_1)); }
	inline DesignOnlyAttribute_t1017827538 * get_Default_1() const { return ___Default_1; }
	inline DesignOnlyAttribute_t1017827538 ** get_address_of_Default_1() { return &___Default_1; }
	inline void set_Default_1(DesignOnlyAttribute_t1017827538 * value)
	{
		___Default_1 = value;
		Il2CppCodeGenWriteBarrier((&___Default_1), value);
	}

	inline static int32_t get_offset_of_No_2() { return static_cast<int32_t>(offsetof(DesignOnlyAttribute_t1017827538_StaticFields, ___No_2)); }
	inline DesignOnlyAttribute_t1017827538 * get_No_2() const { return ___No_2; }
	inline DesignOnlyAttribute_t1017827538 ** get_address_of_No_2() { return &___No_2; }
	inline void set_No_2(DesignOnlyAttribute_t1017827538 * value)
	{
		___No_2 = value;
		Il2CppCodeGenWriteBarrier((&___No_2), value);
	}

	inline static int32_t get_offset_of_Yes_3() { return static_cast<int32_t>(offsetof(DesignOnlyAttribute_t1017827538_StaticFields, ___Yes_3)); }
	inline DesignOnlyAttribute_t1017827538 * get_Yes_3() const { return ___Yes_3; }
	inline DesignOnlyAttribute_t1017827538 ** get_address_of_Yes_3() { return &___Yes_3; }
	inline void set_Yes_3(DesignOnlyAttribute_t1017827538 * value)
	{
		___Yes_3 = value;
		Il2CppCodeGenWriteBarrier((&___Yes_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DESIGNONLYATTRIBUTE_T1017827538_H
#ifndef PROPERTYDESCRIPTOR_T3244362832_H
#define PROPERTYDESCRIPTOR_T3244362832_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.PropertyDescriptor
struct  PropertyDescriptor_t3244362832  : public MemberDescriptor_t3815403747
{
public:
	// System.ComponentModel.TypeConverter System.ComponentModel.PropertyDescriptor::converter
	TypeConverter_t2249118273 * ___converter_4;
	// System.Collections.Hashtable System.ComponentModel.PropertyDescriptor::notifiers
	Hashtable_t1853889766 * ___notifiers_5;

public:
	inline static int32_t get_offset_of_converter_4() { return static_cast<int32_t>(offsetof(PropertyDescriptor_t3244362832, ___converter_4)); }
	inline TypeConverter_t2249118273 * get_converter_4() const { return ___converter_4; }
	inline TypeConverter_t2249118273 ** get_address_of_converter_4() { return &___converter_4; }
	inline void set_converter_4(TypeConverter_t2249118273 * value)
	{
		___converter_4 = value;
		Il2CppCodeGenWriteBarrier((&___converter_4), value);
	}

	inline static int32_t get_offset_of_notifiers_5() { return static_cast<int32_t>(offsetof(PropertyDescriptor_t3244362832, ___notifiers_5)); }
	inline Hashtable_t1853889766 * get_notifiers_5() const { return ___notifiers_5; }
	inline Hashtable_t1853889766 ** get_address_of_notifiers_5() { return &___notifiers_5; }
	inline void set_notifiers_5(Hashtable_t1853889766 * value)
	{
		___notifiers_5 = value;
		Il2CppCodeGenWriteBarrier((&___notifiers_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROPERTYDESCRIPTOR_T3244362832_H
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
#ifndef REFERENCECONVERTER_T1811933861_H
#define REFERENCECONVERTER_T1811933861_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ReferenceConverter
struct  ReferenceConverter_t1811933861  : public TypeConverter_t2249118273
{
public:
	// System.Type System.ComponentModel.ReferenceConverter::reference_type
	Type_t * ___reference_type_0;

public:
	inline static int32_t get_offset_of_reference_type_0() { return static_cast<int32_t>(offsetof(ReferenceConverter_t1811933861, ___reference_type_0)); }
	inline Type_t * get_reference_type_0() const { return ___reference_type_0; }
	inline Type_t ** get_address_of_reference_type_0() { return &___reference_type_0; }
	inline void set_reference_type_0(Type_t * value)
	{
		___reference_type_0 = value;
		Il2CppCodeGenWriteBarrier((&___reference_type_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REFERENCECONVERTER_T1811933861_H
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
#ifndef ENUMCONVERTER_T1688858217_H
#define ENUMCONVERTER_T1688858217_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.EnumConverter
struct  EnumConverter_t1688858217  : public TypeConverter_t2249118273
{
public:
	// System.Type System.ComponentModel.EnumConverter::type
	Type_t * ___type_0;
	// System.ComponentModel.TypeConverter/StandardValuesCollection System.ComponentModel.EnumConverter::stdValues
	StandardValuesCollection_t2184948248 * ___stdValues_1;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(EnumConverter_t1688858217, ___type_0)); }
	inline Type_t * get_type_0() const { return ___type_0; }
	inline Type_t ** get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(Type_t * value)
	{
		___type_0 = value;
		Il2CppCodeGenWriteBarrier((&___type_0), value);
	}

	inline static int32_t get_offset_of_stdValues_1() { return static_cast<int32_t>(offsetof(EnumConverter_t1688858217, ___stdValues_1)); }
	inline StandardValuesCollection_t2184948248 * get_stdValues_1() const { return ___stdValues_1; }
	inline StandardValuesCollection_t2184948248 ** get_address_of_stdValues_1() { return &___stdValues_1; }
	inline void set_stdValues_1(StandardValuesCollection_t2184948248 * value)
	{
		___stdValues_1 = value;
		Il2CppCodeGenWriteBarrier((&___stdValues_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMCONVERTER_T1688858217_H
#ifndef EDITORATTRIBUTE_T1332199665_H
#define EDITORATTRIBUTE_T1332199665_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.EditorAttribute
struct  EditorAttribute_t1332199665  : public Attribute_t861562559
{
public:
	// System.String System.ComponentModel.EditorAttribute::name
	String_t* ___name_0;
	// System.String System.ComponentModel.EditorAttribute::basename
	String_t* ___basename_1;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(EditorAttribute_t1332199665, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}

	inline static int32_t get_offset_of_basename_1() { return static_cast<int32_t>(offsetof(EditorAttribute_t1332199665, ___basename_1)); }
	inline String_t* get_basename_1() const { return ___basename_1; }
	inline String_t** get_address_of_basename_1() { return &___basename_1; }
	inline void set_basename_1(String_t* value)
	{
		___basename_1 = value;
		Il2CppCodeGenWriteBarrier((&___basename_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EDITORATTRIBUTE_T1332199665_H
#ifndef EVENTDESCRIPTOR_T88602298_H
#define EVENTDESCRIPTOR_T88602298_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.EventDescriptor
struct  EventDescriptor_t88602298  : public MemberDescriptor_t3815403747
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTDESCRIPTOR_T88602298_H
#ifndef GUIDCONVERTER_T3396672461_H
#define GUIDCONVERTER_T3396672461_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.GuidConverter
struct  GuidConverter_t3396672461  : public TypeConverter_t2249118273
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUIDCONVERTER_T3396672461_H
#ifndef EXPANDABLEOBJECTCONVERTER_T420832579_H
#define EXPANDABLEOBJECTCONVERTER_T420832579_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ExpandableObjectConverter
struct  ExpandableObjectConverter_t420832579  : public TypeConverter_t2249118273
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXPANDABLEOBJECTCONVERTER_T420832579_H
#ifndef ASYNCCOMPLETEDEVENTARGS_T1863481821_H
#define ASYNCCOMPLETEDEVENTARGS_T1863481821_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.AsyncCompletedEventArgs
struct  AsyncCompletedEventArgs_t1863481821  : public EventArgs_t3591816995
{
public:
	// System.Exception System.ComponentModel.AsyncCompletedEventArgs::_error
	Exception_t * ____error_1;
	// System.Boolean System.ComponentModel.AsyncCompletedEventArgs::_cancelled
	bool ____cancelled_2;
	// System.Object System.ComponentModel.AsyncCompletedEventArgs::_userState
	RuntimeObject * ____userState_3;

public:
	inline static int32_t get_offset_of__error_1() { return static_cast<int32_t>(offsetof(AsyncCompletedEventArgs_t1863481821, ____error_1)); }
	inline Exception_t * get__error_1() const { return ____error_1; }
	inline Exception_t ** get_address_of__error_1() { return &____error_1; }
	inline void set__error_1(Exception_t * value)
	{
		____error_1 = value;
		Il2CppCodeGenWriteBarrier((&____error_1), value);
	}

	inline static int32_t get_offset_of__cancelled_2() { return static_cast<int32_t>(offsetof(AsyncCompletedEventArgs_t1863481821, ____cancelled_2)); }
	inline bool get__cancelled_2() const { return ____cancelled_2; }
	inline bool* get_address_of__cancelled_2() { return &____cancelled_2; }
	inline void set__cancelled_2(bool value)
	{
		____cancelled_2 = value;
	}

	inline static int32_t get_offset_of__userState_3() { return static_cast<int32_t>(offsetof(AsyncCompletedEventArgs_t1863481821, ____userState_3)); }
	inline RuntimeObject * get__userState_3() const { return ____userState_3; }
	inline RuntimeObject ** get_address_of__userState_3() { return &____userState_3; }
	inline void set__userState_3(RuntimeObject * value)
	{
		____userState_3 = value;
		Il2CppCodeGenWriteBarrier((&____userState_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYNCCOMPLETEDEVENTARGS_T1863481821_H
#ifndef BASENUMBERCONVERTER_T312147029_H
#define BASENUMBERCONVERTER_T312147029_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.BaseNumberConverter
struct  BaseNumberConverter_t312147029  : public TypeConverter_t2249118273
{
public:
	// System.Type System.ComponentModel.BaseNumberConverter::InnerType
	Type_t * ___InnerType_0;

public:
	inline static int32_t get_offset_of_InnerType_0() { return static_cast<int32_t>(offsetof(BaseNumberConverter_t312147029, ___InnerType_0)); }
	inline Type_t * get_InnerType_0() const { return ___InnerType_0; }
	inline Type_t ** get_address_of_InnerType_0() { return &___InnerType_0; }
	inline void set_InnerType_0(Type_t * value)
	{
		___InnerType_0 = value;
		Il2CppCodeGenWriteBarrier((&___InnerType_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASENUMBERCONVERTER_T312147029_H
#ifndef DESIGNERVERBCOLLECTION_T2615404383_H
#define DESIGNERVERBCOLLECTION_T2615404383_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.Design.DesignerVerbCollection
struct  DesignerVerbCollection_t2615404383  : public CollectionBase_t2727926298
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DESIGNERVERBCOLLECTION_T2615404383_H
#ifndef RUNTIMELICENSECONTEXT_T1578118062_H
#define RUNTIMELICENSECONTEXT_T1578118062_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.Design.RuntimeLicenseContext
struct  RuntimeLicenseContext_t1578118062  : public LicenseContext_t2141136407
{
public:
	// System.Collections.Hashtable System.ComponentModel.Design.RuntimeLicenseContext::extraassemblies
	Hashtable_t1853889766 * ___extraassemblies_0;
	// System.Collections.Hashtable System.ComponentModel.Design.RuntimeLicenseContext::keys
	Hashtable_t1853889766 * ___keys_1;

public:
	inline static int32_t get_offset_of_extraassemblies_0() { return static_cast<int32_t>(offsetof(RuntimeLicenseContext_t1578118062, ___extraassemblies_0)); }
	inline Hashtable_t1853889766 * get_extraassemblies_0() const { return ___extraassemblies_0; }
	inline Hashtable_t1853889766 ** get_address_of_extraassemblies_0() { return &___extraassemblies_0; }
	inline void set_extraassemblies_0(Hashtable_t1853889766 * value)
	{
		___extraassemblies_0 = value;
		Il2CppCodeGenWriteBarrier((&___extraassemblies_0), value);
	}

	inline static int32_t get_offset_of_keys_1() { return static_cast<int32_t>(offsetof(RuntimeLicenseContext_t1578118062, ___keys_1)); }
	inline Hashtable_t1853889766 * get_keys_1() const { return ___keys_1; }
	inline Hashtable_t1853889766 ** get_address_of_keys_1() { return &___keys_1; }
	inline void set_keys_1(Hashtable_t1853889766 * value)
	{
		___keys_1 = value;
		Il2CppCodeGenWriteBarrier((&___keys_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMELICENSECONTEXT_T1578118062_H
#ifndef CANCELEVENTARGS_T1846056344_H
#define CANCELEVENTARGS_T1846056344_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.CancelEventArgs
struct  CancelEventArgs_t1846056344  : public EventArgs_t3591816995
{
public:
	// System.Boolean System.ComponentModel.CancelEventArgs::cancel
	bool ___cancel_1;

public:
	inline static int32_t get_offset_of_cancel_1() { return static_cast<int32_t>(offsetof(CancelEventArgs_t1846056344, ___cancel_1)); }
	inline bool get_cancel_1() const { return ___cancel_1; }
	inline bool* get_address_of_cancel_1() { return &___cancel_1; }
	inline void set_cancel_1(bool value)
	{
		___cancel_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CANCELEVENTARGS_T1846056344_H
#ifndef CATEGORYATTRIBUTE_T39585132_H
#define CATEGORYATTRIBUTE_T39585132_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.CategoryAttribute
struct  CategoryAttribute_t39585132  : public Attribute_t861562559
{
public:
	// System.String System.ComponentModel.CategoryAttribute::category
	String_t* ___category_0;
	// System.Boolean System.ComponentModel.CategoryAttribute::IsLocalized
	bool ___IsLocalized_1;

public:
	inline static int32_t get_offset_of_category_0() { return static_cast<int32_t>(offsetof(CategoryAttribute_t39585132, ___category_0)); }
	inline String_t* get_category_0() const { return ___category_0; }
	inline String_t** get_address_of_category_0() { return &___category_0; }
	inline void set_category_0(String_t* value)
	{
		___category_0 = value;
		Il2CppCodeGenWriteBarrier((&___category_0), value);
	}

	inline static int32_t get_offset_of_IsLocalized_1() { return static_cast<int32_t>(offsetof(CategoryAttribute_t39585132, ___IsLocalized_1)); }
	inline bool get_IsLocalized_1() const { return ___IsLocalized_1; }
	inline bool* get_address_of_IsLocalized_1() { return &___IsLocalized_1; }
	inline void set_IsLocalized_1(bool value)
	{
		___IsLocalized_1 = value;
	}
};

struct CategoryAttribute_t39585132_StaticFields
{
public:
	// System.ComponentModel.CategoryAttribute modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.CategoryAttribute::action
	CategoryAttribute_t39585132 * ___action_2;
	// System.ComponentModel.CategoryAttribute modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.CategoryAttribute::appearance
	CategoryAttribute_t39585132 * ___appearance_3;
	// System.ComponentModel.CategoryAttribute modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.CategoryAttribute::behaviour
	CategoryAttribute_t39585132 * ___behaviour_4;
	// System.ComponentModel.CategoryAttribute modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.CategoryAttribute::data
	CategoryAttribute_t39585132 * ___data_5;
	// System.ComponentModel.CategoryAttribute modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.CategoryAttribute::def
	CategoryAttribute_t39585132 * ___def_6;
	// System.ComponentModel.CategoryAttribute modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.CategoryAttribute::design
	CategoryAttribute_t39585132 * ___design_7;
	// System.ComponentModel.CategoryAttribute modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.CategoryAttribute::drag_drop
	CategoryAttribute_t39585132 * ___drag_drop_8;
	// System.ComponentModel.CategoryAttribute modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.CategoryAttribute::focus
	CategoryAttribute_t39585132 * ___focus_9;
	// System.ComponentModel.CategoryAttribute modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.CategoryAttribute::format
	CategoryAttribute_t39585132 * ___format_10;
	// System.ComponentModel.CategoryAttribute modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.CategoryAttribute::key
	CategoryAttribute_t39585132 * ___key_11;
	// System.ComponentModel.CategoryAttribute modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.CategoryAttribute::layout
	CategoryAttribute_t39585132 * ___layout_12;
	// System.ComponentModel.CategoryAttribute modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.CategoryAttribute::mouse
	CategoryAttribute_t39585132 * ___mouse_13;
	// System.ComponentModel.CategoryAttribute modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.CategoryAttribute::window_style
	CategoryAttribute_t39585132 * ___window_style_14;
	// System.ComponentModel.CategoryAttribute modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.CategoryAttribute::async
	CategoryAttribute_t39585132 * ___async_15;
	// System.Object System.ComponentModel.CategoryAttribute::lockobj
	RuntimeObject * ___lockobj_16;

public:
	inline static int32_t get_offset_of_action_2() { return static_cast<int32_t>(offsetof(CategoryAttribute_t39585132_StaticFields, ___action_2)); }
	inline CategoryAttribute_t39585132 * get_action_2() const { return ___action_2; }
	inline CategoryAttribute_t39585132 ** get_address_of_action_2() { return &___action_2; }
	inline void set_action_2(CategoryAttribute_t39585132 * value)
	{
		___action_2 = value;
		Il2CppCodeGenWriteBarrier((&___action_2), value);
	}

	inline static int32_t get_offset_of_appearance_3() { return static_cast<int32_t>(offsetof(CategoryAttribute_t39585132_StaticFields, ___appearance_3)); }
	inline CategoryAttribute_t39585132 * get_appearance_3() const { return ___appearance_3; }
	inline CategoryAttribute_t39585132 ** get_address_of_appearance_3() { return &___appearance_3; }
	inline void set_appearance_3(CategoryAttribute_t39585132 * value)
	{
		___appearance_3 = value;
		Il2CppCodeGenWriteBarrier((&___appearance_3), value);
	}

	inline static int32_t get_offset_of_behaviour_4() { return static_cast<int32_t>(offsetof(CategoryAttribute_t39585132_StaticFields, ___behaviour_4)); }
	inline CategoryAttribute_t39585132 * get_behaviour_4() const { return ___behaviour_4; }
	inline CategoryAttribute_t39585132 ** get_address_of_behaviour_4() { return &___behaviour_4; }
	inline void set_behaviour_4(CategoryAttribute_t39585132 * value)
	{
		___behaviour_4 = value;
		Il2CppCodeGenWriteBarrier((&___behaviour_4), value);
	}

	inline static int32_t get_offset_of_data_5() { return static_cast<int32_t>(offsetof(CategoryAttribute_t39585132_StaticFields, ___data_5)); }
	inline CategoryAttribute_t39585132 * get_data_5() const { return ___data_5; }
	inline CategoryAttribute_t39585132 ** get_address_of_data_5() { return &___data_5; }
	inline void set_data_5(CategoryAttribute_t39585132 * value)
	{
		___data_5 = value;
		Il2CppCodeGenWriteBarrier((&___data_5), value);
	}

	inline static int32_t get_offset_of_def_6() { return static_cast<int32_t>(offsetof(CategoryAttribute_t39585132_StaticFields, ___def_6)); }
	inline CategoryAttribute_t39585132 * get_def_6() const { return ___def_6; }
	inline CategoryAttribute_t39585132 ** get_address_of_def_6() { return &___def_6; }
	inline void set_def_6(CategoryAttribute_t39585132 * value)
	{
		___def_6 = value;
		Il2CppCodeGenWriteBarrier((&___def_6), value);
	}

	inline static int32_t get_offset_of_design_7() { return static_cast<int32_t>(offsetof(CategoryAttribute_t39585132_StaticFields, ___design_7)); }
	inline CategoryAttribute_t39585132 * get_design_7() const { return ___design_7; }
	inline CategoryAttribute_t39585132 ** get_address_of_design_7() { return &___design_7; }
	inline void set_design_7(CategoryAttribute_t39585132 * value)
	{
		___design_7 = value;
		Il2CppCodeGenWriteBarrier((&___design_7), value);
	}

	inline static int32_t get_offset_of_drag_drop_8() { return static_cast<int32_t>(offsetof(CategoryAttribute_t39585132_StaticFields, ___drag_drop_8)); }
	inline CategoryAttribute_t39585132 * get_drag_drop_8() const { return ___drag_drop_8; }
	inline CategoryAttribute_t39585132 ** get_address_of_drag_drop_8() { return &___drag_drop_8; }
	inline void set_drag_drop_8(CategoryAttribute_t39585132 * value)
	{
		___drag_drop_8 = value;
		Il2CppCodeGenWriteBarrier((&___drag_drop_8), value);
	}

	inline static int32_t get_offset_of_focus_9() { return static_cast<int32_t>(offsetof(CategoryAttribute_t39585132_StaticFields, ___focus_9)); }
	inline CategoryAttribute_t39585132 * get_focus_9() const { return ___focus_9; }
	inline CategoryAttribute_t39585132 ** get_address_of_focus_9() { return &___focus_9; }
	inline void set_focus_9(CategoryAttribute_t39585132 * value)
	{
		___focus_9 = value;
		Il2CppCodeGenWriteBarrier((&___focus_9), value);
	}

	inline static int32_t get_offset_of_format_10() { return static_cast<int32_t>(offsetof(CategoryAttribute_t39585132_StaticFields, ___format_10)); }
	inline CategoryAttribute_t39585132 * get_format_10() const { return ___format_10; }
	inline CategoryAttribute_t39585132 ** get_address_of_format_10() { return &___format_10; }
	inline void set_format_10(CategoryAttribute_t39585132 * value)
	{
		___format_10 = value;
		Il2CppCodeGenWriteBarrier((&___format_10), value);
	}

	inline static int32_t get_offset_of_key_11() { return static_cast<int32_t>(offsetof(CategoryAttribute_t39585132_StaticFields, ___key_11)); }
	inline CategoryAttribute_t39585132 * get_key_11() const { return ___key_11; }
	inline CategoryAttribute_t39585132 ** get_address_of_key_11() { return &___key_11; }
	inline void set_key_11(CategoryAttribute_t39585132 * value)
	{
		___key_11 = value;
		Il2CppCodeGenWriteBarrier((&___key_11), value);
	}

	inline static int32_t get_offset_of_layout_12() { return static_cast<int32_t>(offsetof(CategoryAttribute_t39585132_StaticFields, ___layout_12)); }
	inline CategoryAttribute_t39585132 * get_layout_12() const { return ___layout_12; }
	inline CategoryAttribute_t39585132 ** get_address_of_layout_12() { return &___layout_12; }
	inline void set_layout_12(CategoryAttribute_t39585132 * value)
	{
		___layout_12 = value;
		Il2CppCodeGenWriteBarrier((&___layout_12), value);
	}

	inline static int32_t get_offset_of_mouse_13() { return static_cast<int32_t>(offsetof(CategoryAttribute_t39585132_StaticFields, ___mouse_13)); }
	inline CategoryAttribute_t39585132 * get_mouse_13() const { return ___mouse_13; }
	inline CategoryAttribute_t39585132 ** get_address_of_mouse_13() { return &___mouse_13; }
	inline void set_mouse_13(CategoryAttribute_t39585132 * value)
	{
		___mouse_13 = value;
		Il2CppCodeGenWriteBarrier((&___mouse_13), value);
	}

	inline static int32_t get_offset_of_window_style_14() { return static_cast<int32_t>(offsetof(CategoryAttribute_t39585132_StaticFields, ___window_style_14)); }
	inline CategoryAttribute_t39585132 * get_window_style_14() const { return ___window_style_14; }
	inline CategoryAttribute_t39585132 ** get_address_of_window_style_14() { return &___window_style_14; }
	inline void set_window_style_14(CategoryAttribute_t39585132 * value)
	{
		___window_style_14 = value;
		Il2CppCodeGenWriteBarrier((&___window_style_14), value);
	}

	inline static int32_t get_offset_of_async_15() { return static_cast<int32_t>(offsetof(CategoryAttribute_t39585132_StaticFields, ___async_15)); }
	inline CategoryAttribute_t39585132 * get_async_15() const { return ___async_15; }
	inline CategoryAttribute_t39585132 ** get_address_of_async_15() { return &___async_15; }
	inline void set_async_15(CategoryAttribute_t39585132 * value)
	{
		___async_15 = value;
		Il2CppCodeGenWriteBarrier((&___async_15), value);
	}

	inline static int32_t get_offset_of_lockobj_16() { return static_cast<int32_t>(offsetof(CategoryAttribute_t39585132_StaticFields, ___lockobj_16)); }
	inline RuntimeObject * get_lockobj_16() const { return ___lockobj_16; }
	inline RuntimeObject ** get_address_of_lockobj_16() { return &___lockobj_16; }
	inline void set_lockobj_16(RuntimeObject * value)
	{
		___lockobj_16 = value;
		Il2CppCodeGenWriteBarrier((&___lockobj_16), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CATEGORYATTRIBUTE_T39585132_H
#ifndef BOOLEANCONVERTER_T941538927_H
#define BOOLEANCONVERTER_T941538927_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.BooleanConverter
struct  BooleanConverter_t941538927  : public TypeConverter_t2249118273
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEANCONVERTER_T941538927_H
#ifndef BROWSABLEATTRIBUTE_T3407396667_H
#define BROWSABLEATTRIBUTE_T3407396667_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.BrowsableAttribute
struct  BrowsableAttribute_t3407396667  : public Attribute_t861562559
{
public:
	// System.Boolean System.ComponentModel.BrowsableAttribute::browsable
	bool ___browsable_0;

public:
	inline static int32_t get_offset_of_browsable_0() { return static_cast<int32_t>(offsetof(BrowsableAttribute_t3407396667, ___browsable_0)); }
	inline bool get_browsable_0() const { return ___browsable_0; }
	inline bool* get_address_of_browsable_0() { return &___browsable_0; }
	inline void set_browsable_0(bool value)
	{
		___browsable_0 = value;
	}
};

struct BrowsableAttribute_t3407396667_StaticFields
{
public:
	// System.ComponentModel.BrowsableAttribute System.ComponentModel.BrowsableAttribute::Default
	BrowsableAttribute_t3407396667 * ___Default_1;
	// System.ComponentModel.BrowsableAttribute System.ComponentModel.BrowsableAttribute::No
	BrowsableAttribute_t3407396667 * ___No_2;
	// System.ComponentModel.BrowsableAttribute System.ComponentModel.BrowsableAttribute::Yes
	BrowsableAttribute_t3407396667 * ___Yes_3;

public:
	inline static int32_t get_offset_of_Default_1() { return static_cast<int32_t>(offsetof(BrowsableAttribute_t3407396667_StaticFields, ___Default_1)); }
	inline BrowsableAttribute_t3407396667 * get_Default_1() const { return ___Default_1; }
	inline BrowsableAttribute_t3407396667 ** get_address_of_Default_1() { return &___Default_1; }
	inline void set_Default_1(BrowsableAttribute_t3407396667 * value)
	{
		___Default_1 = value;
		Il2CppCodeGenWriteBarrier((&___Default_1), value);
	}

	inline static int32_t get_offset_of_No_2() { return static_cast<int32_t>(offsetof(BrowsableAttribute_t3407396667_StaticFields, ___No_2)); }
	inline BrowsableAttribute_t3407396667 * get_No_2() const { return ___No_2; }
	inline BrowsableAttribute_t3407396667 ** get_address_of_No_2() { return &___No_2; }
	inline void set_No_2(BrowsableAttribute_t3407396667 * value)
	{
		___No_2 = value;
		Il2CppCodeGenWriteBarrier((&___No_2), value);
	}

	inline static int32_t get_offset_of_Yes_3() { return static_cast<int32_t>(offsetof(BrowsableAttribute_t3407396667_StaticFields, ___Yes_3)); }
	inline BrowsableAttribute_t3407396667 * get_Yes_3() const { return ___Yes_3; }
	inline BrowsableAttribute_t3407396667 ** get_address_of_Yes_3() { return &___Yes_3; }
	inline void set_Yes_3(BrowsableAttribute_t3407396667 * value)
	{
		___Yes_3 = value;
		Il2CppCodeGenWriteBarrier((&___Yes_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BROWSABLEATTRIBUTE_T3407396667_H
#ifndef COMPONENTCHANGEDEVENTARGS_T1471191266_H
#define COMPONENTCHANGEDEVENTARGS_T1471191266_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.Design.ComponentChangedEventArgs
struct  ComponentChangedEventArgs_t1471191266  : public EventArgs_t3591816995
{
public:
	// System.Object System.ComponentModel.Design.ComponentChangedEventArgs::component
	RuntimeObject * ___component_1;
	// System.ComponentModel.MemberDescriptor System.ComponentModel.Design.ComponentChangedEventArgs::member
	MemberDescriptor_t3815403747 * ___member_2;
	// System.Object System.ComponentModel.Design.ComponentChangedEventArgs::oldValue
	RuntimeObject * ___oldValue_3;
	// System.Object System.ComponentModel.Design.ComponentChangedEventArgs::newValue
	RuntimeObject * ___newValue_4;

public:
	inline static int32_t get_offset_of_component_1() { return static_cast<int32_t>(offsetof(ComponentChangedEventArgs_t1471191266, ___component_1)); }
	inline RuntimeObject * get_component_1() const { return ___component_1; }
	inline RuntimeObject ** get_address_of_component_1() { return &___component_1; }
	inline void set_component_1(RuntimeObject * value)
	{
		___component_1 = value;
		Il2CppCodeGenWriteBarrier((&___component_1), value);
	}

	inline static int32_t get_offset_of_member_2() { return static_cast<int32_t>(offsetof(ComponentChangedEventArgs_t1471191266, ___member_2)); }
	inline MemberDescriptor_t3815403747 * get_member_2() const { return ___member_2; }
	inline MemberDescriptor_t3815403747 ** get_address_of_member_2() { return &___member_2; }
	inline void set_member_2(MemberDescriptor_t3815403747 * value)
	{
		___member_2 = value;
		Il2CppCodeGenWriteBarrier((&___member_2), value);
	}

	inline static int32_t get_offset_of_oldValue_3() { return static_cast<int32_t>(offsetof(ComponentChangedEventArgs_t1471191266, ___oldValue_3)); }
	inline RuntimeObject * get_oldValue_3() const { return ___oldValue_3; }
	inline RuntimeObject ** get_address_of_oldValue_3() { return &___oldValue_3; }
	inline void set_oldValue_3(RuntimeObject * value)
	{
		___oldValue_3 = value;
		Il2CppCodeGenWriteBarrier((&___oldValue_3), value);
	}

	inline static int32_t get_offset_of_newValue_4() { return static_cast<int32_t>(offsetof(ComponentChangedEventArgs_t1471191266, ___newValue_4)); }
	inline RuntimeObject * get_newValue_4() const { return ___newValue_4; }
	inline RuntimeObject ** get_address_of_newValue_4() { return &___newValue_4; }
	inline void set_newValue_4(RuntimeObject * value)
	{
		___newValue_4 = value;
		Il2CppCodeGenWriteBarrier((&___newValue_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENTCHANGEDEVENTARGS_T1471191266_H
#ifndef COMPONENTCHANGINGEVENTARGS_T2355090559_H
#define COMPONENTCHANGINGEVENTARGS_T2355090559_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.Design.ComponentChangingEventArgs
struct  ComponentChangingEventArgs_t2355090559  : public EventArgs_t3591816995
{
public:
	// System.Object System.ComponentModel.Design.ComponentChangingEventArgs::component
	RuntimeObject * ___component_1;
	// System.ComponentModel.MemberDescriptor System.ComponentModel.Design.ComponentChangingEventArgs::member
	MemberDescriptor_t3815403747 * ___member_2;

public:
	inline static int32_t get_offset_of_component_1() { return static_cast<int32_t>(offsetof(ComponentChangingEventArgs_t2355090559, ___component_1)); }
	inline RuntimeObject * get_component_1() const { return ___component_1; }
	inline RuntimeObject ** get_address_of_component_1() { return &___component_1; }
	inline void set_component_1(RuntimeObject * value)
	{
		___component_1 = value;
		Il2CppCodeGenWriteBarrier((&___component_1), value);
	}

	inline static int32_t get_offset_of_member_2() { return static_cast<int32_t>(offsetof(ComponentChangingEventArgs_t2355090559, ___member_2)); }
	inline MemberDescriptor_t3815403747 * get_member_2() const { return ___member_2; }
	inline MemberDescriptor_t3815403747 ** get_address_of_member_2() { return &___member_2; }
	inline void set_member_2(MemberDescriptor_t3815403747 * value)
	{
		___member_2 = value;
		Il2CppCodeGenWriteBarrier((&___member_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENTCHANGINGEVENTARGS_T2355090559_H
#ifndef NAMEVALUECOLLECTION_T407452768_H
#define NAMEVALUECOLLECTION_T407452768_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.NameValueCollection
struct  NameValueCollection_t407452768  : public NameObjectCollectionBase_t2091847364
{
public:
	// System.String[] System.Collections.Specialized.NameValueCollection::cachedAllKeys
	StringU5BU5D_t1281789340* ___cachedAllKeys_10;
	// System.String[] System.Collections.Specialized.NameValueCollection::cachedAll
	StringU5BU5D_t1281789340* ___cachedAll_11;

public:
	inline static int32_t get_offset_of_cachedAllKeys_10() { return static_cast<int32_t>(offsetof(NameValueCollection_t407452768, ___cachedAllKeys_10)); }
	inline StringU5BU5D_t1281789340* get_cachedAllKeys_10() const { return ___cachedAllKeys_10; }
	inline StringU5BU5D_t1281789340** get_address_of_cachedAllKeys_10() { return &___cachedAllKeys_10; }
	inline void set_cachedAllKeys_10(StringU5BU5D_t1281789340* value)
	{
		___cachedAllKeys_10 = value;
		Il2CppCodeGenWriteBarrier((&___cachedAllKeys_10), value);
	}

	inline static int32_t get_offset_of_cachedAll_11() { return static_cast<int32_t>(offsetof(NameValueCollection_t407452768, ___cachedAll_11)); }
	inline StringU5BU5D_t1281789340* get_cachedAll_11() const { return ___cachedAll_11; }
	inline StringU5BU5D_t1281789340** get_address_of_cachedAll_11() { return &___cachedAll_11; }
	inline void set_cachedAll_11(StringU5BU5D_t1281789340* value)
	{
		___cachedAll_11 = value;
		Il2CppCodeGenWriteBarrier((&___cachedAll_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NAMEVALUECOLLECTION_T407452768_H
#ifndef PROCESSSTRINGDICTIONARY_T2107791454_H
#define PROCESSSTRINGDICTIONARY_T2107791454_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.ProcessStringDictionary
struct  ProcessStringDictionary_t2107791454  : public StringDictionary_t120437468
{
public:
	// System.Collections.Hashtable System.Collections.Specialized.ProcessStringDictionary::table
	Hashtable_t1853889766 * ___table_1;

public:
	inline static int32_t get_offset_of_table_1() { return static_cast<int32_t>(offsetof(ProcessStringDictionary_t2107791454, ___table_1)); }
	inline Hashtable_t1853889766 * get_table_1() const { return ___table_1; }
	inline Hashtable_t1853889766 ** get_address_of_table_1() { return &___table_1; }
	inline void set_table_1(Hashtable_t1853889766 * value)
	{
		___table_1 = value;
		Il2CppCodeGenWriteBarrier((&___table_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROCESSSTRINGDICTIONARY_T2107791454_H
#ifndef DESIGNERTRANSACTIONCLOSEEVENTARGS_T2369104035_H
#define DESIGNERTRANSACTIONCLOSEEVENTARGS_T2369104035_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.Design.DesignerTransactionCloseEventArgs
struct  DesignerTransactionCloseEventArgs_t2369104035  : public EventArgs_t3591816995
{
public:
	// System.Boolean System.ComponentModel.Design.DesignerTransactionCloseEventArgs::commit
	bool ___commit_1;
	// System.Boolean System.ComponentModel.Design.DesignerTransactionCloseEventArgs::last_transaction
	bool ___last_transaction_2;

public:
	inline static int32_t get_offset_of_commit_1() { return static_cast<int32_t>(offsetof(DesignerTransactionCloseEventArgs_t2369104035, ___commit_1)); }
	inline bool get_commit_1() const { return ___commit_1; }
	inline bool* get_address_of_commit_1() { return &___commit_1; }
	inline void set_commit_1(bool value)
	{
		___commit_1 = value;
	}

	inline static int32_t get_offset_of_last_transaction_2() { return static_cast<int32_t>(offsetof(DesignerTransactionCloseEventArgs_t2369104035, ___last_transaction_2)); }
	inline bool get_last_transaction_2() const { return ___last_transaction_2; }
	inline bool* get_address_of_last_transaction_2() { return &___last_transaction_2; }
	inline void set_last_transaction_2(bool value)
	{
		___last_transaction_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DESIGNERTRANSACTIONCLOSEEVENTARGS_T2369104035_H
#ifndef DESIGNERVERB_T103962676_H
#define DESIGNERVERB_T103962676_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.Design.DesignerVerb
struct  DesignerVerb_t103962676  : public MenuCommand_t2745965391
{
public:
	// System.String System.ComponentModel.Design.DesignerVerb::text
	String_t* ___text_8;
	// System.String System.ComponentModel.Design.DesignerVerb::description
	String_t* ___description_9;

public:
	inline static int32_t get_offset_of_text_8() { return static_cast<int32_t>(offsetof(DesignerVerb_t103962676, ___text_8)); }
	inline String_t* get_text_8() const { return ___text_8; }
	inline String_t** get_address_of_text_8() { return &___text_8; }
	inline void set_text_8(String_t* value)
	{
		___text_8 = value;
		Il2CppCodeGenWriteBarrier((&___text_8), value);
	}

	inline static int32_t get_offset_of_description_9() { return static_cast<int32_t>(offsetof(DesignerVerb_t103962676, ___description_9)); }
	inline String_t* get_description_9() const { return ___description_9; }
	inline String_t** get_address_of_description_9() { return &___description_9; }
	inline void set_description_9(String_t* value)
	{
		___description_9 = value;
		Il2CppCodeGenWriteBarrier((&___description_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DESIGNERVERB_T103962676_H
#ifndef COMPONENTEVENTARGS_T1368962142_H
#define COMPONENTEVENTARGS_T1368962142_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.Design.ComponentEventArgs
struct  ComponentEventArgs_t1368962142  : public EventArgs_t3591816995
{
public:
	// System.ComponentModel.IComponent System.ComponentModel.Design.ComponentEventArgs::icomp
	RuntimeObject* ___icomp_1;

public:
	inline static int32_t get_offset_of_icomp_1() { return static_cast<int32_t>(offsetof(ComponentEventArgs_t1368962142, ___icomp_1)); }
	inline RuntimeObject* get_icomp_1() const { return ___icomp_1; }
	inline RuntimeObject** get_address_of_icomp_1() { return &___icomp_1; }
	inline void set_icomp_1(RuntimeObject* value)
	{
		___icomp_1 = value;
		Il2CppCodeGenWriteBarrier((&___icomp_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENTEVENTARGS_T1368962142_H
#ifndef COMPONENTRENAMEEVENTARGS_T729293354_H
#define COMPONENTRENAMEEVENTARGS_T729293354_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.Design.ComponentRenameEventArgs
struct  ComponentRenameEventArgs_t729293354  : public EventArgs_t3591816995
{
public:
	// System.Object System.ComponentModel.Design.ComponentRenameEventArgs::component
	RuntimeObject * ___component_1;
	// System.String System.ComponentModel.Design.ComponentRenameEventArgs::oldName
	String_t* ___oldName_2;
	// System.String System.ComponentModel.Design.ComponentRenameEventArgs::newName
	String_t* ___newName_3;

public:
	inline static int32_t get_offset_of_component_1() { return static_cast<int32_t>(offsetof(ComponentRenameEventArgs_t729293354, ___component_1)); }
	inline RuntimeObject * get_component_1() const { return ___component_1; }
	inline RuntimeObject ** get_address_of_component_1() { return &___component_1; }
	inline void set_component_1(RuntimeObject * value)
	{
		___component_1 = value;
		Il2CppCodeGenWriteBarrier((&___component_1), value);
	}

	inline static int32_t get_offset_of_oldName_2() { return static_cast<int32_t>(offsetof(ComponentRenameEventArgs_t729293354, ___oldName_2)); }
	inline String_t* get_oldName_2() const { return ___oldName_2; }
	inline String_t** get_address_of_oldName_2() { return &___oldName_2; }
	inline void set_oldName_2(String_t* value)
	{
		___oldName_2 = value;
		Il2CppCodeGenWriteBarrier((&___oldName_2), value);
	}

	inline static int32_t get_offset_of_newName_3() { return static_cast<int32_t>(offsetof(ComponentRenameEventArgs_t729293354, ___newName_3)); }
	inline String_t* get_newName_3() const { return ___newName_3; }
	inline String_t** get_address_of_newName_3() { return &___newName_3; }
	inline void set_newName_3(String_t* value)
	{
		___newName_3 = value;
		Il2CppCodeGenWriteBarrier((&___newName_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENTRENAMEEVENTARGS_T729293354_H
#ifndef COMPONENTCOLLECTION_T1445440302_H
#define COMPONENTCOLLECTION_T1445440302_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ComponentCollection
struct  ComponentCollection_t1445440302  : public ReadOnlyCollectionBase_t1836743899
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENTCOLLECTION_T1445440302_H
#ifndef COMPONENT_T3620823400_H
#define COMPONENT_T3620823400_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.Component
struct  Component_t3620823400  : public MarshalByRefObject_t2760389100
{
public:
	// System.ComponentModel.EventHandlerList System.ComponentModel.Component::event_handlers
	EventHandlerList_t1108123056 * ___event_handlers_1;
	// System.ComponentModel.ISite System.ComponentModel.Component::mySite
	RuntimeObject* ___mySite_2;
	// System.Object System.ComponentModel.Component::disposedEvent
	RuntimeObject * ___disposedEvent_3;

public:
	inline static int32_t get_offset_of_event_handlers_1() { return static_cast<int32_t>(offsetof(Component_t3620823400, ___event_handlers_1)); }
	inline EventHandlerList_t1108123056 * get_event_handlers_1() const { return ___event_handlers_1; }
	inline EventHandlerList_t1108123056 ** get_address_of_event_handlers_1() { return &___event_handlers_1; }
	inline void set_event_handlers_1(EventHandlerList_t1108123056 * value)
	{
		___event_handlers_1 = value;
		Il2CppCodeGenWriteBarrier((&___event_handlers_1), value);
	}

	inline static int32_t get_offset_of_mySite_2() { return static_cast<int32_t>(offsetof(Component_t3620823400, ___mySite_2)); }
	inline RuntimeObject* get_mySite_2() const { return ___mySite_2; }
	inline RuntimeObject** get_address_of_mySite_2() { return &___mySite_2; }
	inline void set_mySite_2(RuntimeObject* value)
	{
		___mySite_2 = value;
		Il2CppCodeGenWriteBarrier((&___mySite_2), value);
	}

	inline static int32_t get_offset_of_disposedEvent_3() { return static_cast<int32_t>(offsetof(Component_t3620823400, ___disposedEvent_3)); }
	inline RuntimeObject * get_disposedEvent_3() const { return ___disposedEvent_3; }
	inline RuntimeObject ** get_address_of_disposedEvent_3() { return &___disposedEvent_3; }
	inline void set_disposedEvent_3(RuntimeObject * value)
	{
		___disposedEvent_3 = value;
		Il2CppCodeGenWriteBarrier((&___disposedEvent_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T3620823400_H
#ifndef COLLECTIONCONVERTER_T3078846443_H
#define COLLECTIONCONVERTER_T3078846443_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.CollectionConverter
struct  CollectionConverter_t3078846443  : public TypeConverter_t2249118273
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLLECTIONCONVERTER_T3078846443_H
#ifndef DEFAULTEVENTATTRIBUTE_T3124666540_H
#define DEFAULTEVENTATTRIBUTE_T3124666540_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DefaultEventAttribute
struct  DefaultEventAttribute_t3124666540  : public Attribute_t861562559
{
public:
	// System.String System.ComponentModel.DefaultEventAttribute::eventName
	String_t* ___eventName_0;

public:
	inline static int32_t get_offset_of_eventName_0() { return static_cast<int32_t>(offsetof(DefaultEventAttribute_t3124666540, ___eventName_0)); }
	inline String_t* get_eventName_0() const { return ___eventName_0; }
	inline String_t** get_address_of_eventName_0() { return &___eventName_0; }
	inline void set_eventName_0(String_t* value)
	{
		___eventName_0 = value;
		Il2CppCodeGenWriteBarrier((&___eventName_0), value);
	}
};

struct DefaultEventAttribute_t3124666540_StaticFields
{
public:
	// System.ComponentModel.DefaultEventAttribute System.ComponentModel.DefaultEventAttribute::Default
	DefaultEventAttribute_t3124666540 * ___Default_1;

public:
	inline static int32_t get_offset_of_Default_1() { return static_cast<int32_t>(offsetof(DefaultEventAttribute_t3124666540_StaticFields, ___Default_1)); }
	inline DefaultEventAttribute_t3124666540 * get_Default_1() const { return ___Default_1; }
	inline DefaultEventAttribute_t3124666540 ** get_address_of_Default_1() { return &___Default_1; }
	inline void set_Default_1(DefaultEventAttribute_t3124666540 * value)
	{
		___Default_1 = value;
		Il2CppCodeGenWriteBarrier((&___Default_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTEVENTATTRIBUTE_T3124666540_H
#ifndef DATETIMECONVERTER_T2298802450_H
#define DATETIMECONVERTER_T2298802450_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DateTimeConverter
struct  DateTimeConverter_t2298802450  : public TypeConverter_t2249118273
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIMECONVERTER_T2298802450_H
#ifndef CULTUREINFOCONVERTER_T81550636_H
#define CULTUREINFOCONVERTER_T81550636_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.CultureInfoConverter
struct  CultureInfoConverter_t81550636  : public TypeConverter_t2249118273
{
public:
	// System.ComponentModel.TypeConverter/StandardValuesCollection System.ComponentModel.CultureInfoConverter::_standardValues
	StandardValuesCollection_t2184948248 * ____standardValues_0;

public:
	inline static int32_t get_offset_of__standardValues_0() { return static_cast<int32_t>(offsetof(CultureInfoConverter_t81550636, ____standardValues_0)); }
	inline StandardValuesCollection_t2184948248 * get__standardValues_0() const { return ____standardValues_0; }
	inline StandardValuesCollection_t2184948248 ** get_address_of__standardValues_0() { return &____standardValues_0; }
	inline void set__standardValues_0(StandardValuesCollection_t2184948248 * value)
	{
		____standardValues_0 = value;
		Il2CppCodeGenWriteBarrier((&____standardValues_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CULTUREINFOCONVERTER_T81550636_H
#ifndef CHARCONVERTER_T747842913_H
#define CHARCONVERTER_T747842913_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.CharConverter
struct  CharConverter_t747842913  : public TypeConverter_t2249118273
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHARCONVERTER_T747842913_H
#ifndef BYTECONVERTER_T1408362843_H
#define BYTECONVERTER_T1408362843_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ByteConverter
struct  ByteConverter_t1408362843  : public BaseNumberConverter_t312147029
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BYTECONVERTER_T1408362843_H
#ifndef EDITORBROWSABLESTATE_T2839071299_H
#define EDITORBROWSABLESTATE_T2839071299_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.EditorBrowsableState
struct  EditorBrowsableState_t2839071299 
{
public:
	// System.Int32 System.ComponentModel.EditorBrowsableState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(EditorBrowsableState_t2839071299, ___value___1)); }
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
#endif // EDITORBROWSABLESTATE_T2839071299_H
#ifndef COLLECTIONCHANGEACTION_T1145968582_H
#define COLLECTIONCHANGEACTION_T1145968582_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.CollectionChangeAction
struct  CollectionChangeAction_t1145968582 
{
public:
	// System.Int32 System.ComponentModel.CollectionChangeAction::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CollectionChangeAction_t1145968582, ___value___1)); }
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
#endif // COLLECTIONCHANGEACTION_T1145968582_H
#ifndef COMPONENTCONVERTER_T118941221_H
#define COMPONENTCONVERTER_T118941221_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ComponentConverter
struct  ComponentConverter_t118941221  : public ReferenceConverter_t1811933861
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENTCONVERTER_T118941221_H
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
#ifndef DOUBLECONVERTER_T805142290_H
#define DOUBLECONVERTER_T805142290_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DoubleConverter
struct  DoubleConverter_t805142290  : public BaseNumberConverter_t312147029
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DOUBLECONVERTER_T805142290_H
#ifndef COMMANDID_T2504350095_H
#define COMMANDID_T2504350095_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.Design.CommandID
struct  CommandID_t2504350095  : public RuntimeObject
{
public:
	// System.Int32 System.ComponentModel.Design.CommandID::cID
	int32_t ___cID_0;
	// System.Guid System.ComponentModel.Design.CommandID::guid
	Guid_t  ___guid_1;

public:
	inline static int32_t get_offset_of_cID_0() { return static_cast<int32_t>(offsetof(CommandID_t2504350095, ___cID_0)); }
	inline int32_t get_cID_0() const { return ___cID_0; }
	inline int32_t* get_address_of_cID_0() { return &___cID_0; }
	inline void set_cID_0(int32_t value)
	{
		___cID_0 = value;
	}

	inline static int32_t get_offset_of_guid_1() { return static_cast<int32_t>(offsetof(CommandID_t2504350095, ___guid_1)); }
	inline Guid_t  get_guid_1() const { return ___guid_1; }
	inline Guid_t * get_address_of_guid_1() { return &___guid_1; }
	inline void set_guid_1(Guid_t  value)
	{
		___guid_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMMANDID_T2504350095_H
#ifndef DECIMALCONVERTER_T3574141665_H
#define DECIMALCONVERTER_T3574141665_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DecimalConverter
struct  DecimalConverter_t3574141665  : public BaseNumberConverter_t312147029
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECIMALCONVERTER_T3574141665_H
#ifndef DESIGNERSERIALIZATIONVISIBILITY_T3481291396_H
#define DESIGNERSERIALIZATIONVISIBILITY_T3481291396_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DesignerSerializationVisibility
struct  DesignerSerializationVisibility_t3481291396 
{
public:
	// System.Int32 System.ComponentModel.DesignerSerializationVisibility::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DesignerSerializationVisibility_t3481291396, ___value___1)); }
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
#endif // DESIGNERSERIALIZATIONVISIBILITY_T3481291396_H
#ifndef BINDABLESUPPORT_T3743993600_H
#define BINDABLESUPPORT_T3743993600_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.BindableSupport
struct  BindableSupport_t3743993600 
{
public:
	// System.Int32 System.ComponentModel.BindableSupport::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(BindableSupport_t3743993600, ___value___1)); }
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
#endif // BINDABLESUPPORT_T3743993600_H
#ifndef ARRAYCONVERTER_T1750795769_H
#define ARRAYCONVERTER_T1750795769_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ArrayConverter
struct  ArrayConverter_t1750795769  : public CollectionConverter_t3078846443
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARRAYCONVERTER_T1750795769_H
#ifndef ARRAYPROPERTYDESCRIPTOR_T157990669_H
#define ARRAYPROPERTYDESCRIPTOR_T157990669_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ArrayConverter/ArrayPropertyDescriptor
struct  ArrayPropertyDescriptor_t157990669  : public PropertyDescriptor_t3244362832
{
public:
	// System.Int32 System.ComponentModel.ArrayConverter/ArrayPropertyDescriptor::index
	int32_t ___index_6;
	// System.Type System.ComponentModel.ArrayConverter/ArrayPropertyDescriptor::array_type
	Type_t * ___array_type_7;

public:
	inline static int32_t get_offset_of_index_6() { return static_cast<int32_t>(offsetof(ArrayPropertyDescriptor_t157990669, ___index_6)); }
	inline int32_t get_index_6() const { return ___index_6; }
	inline int32_t* get_address_of_index_6() { return &___index_6; }
	inline void set_index_6(int32_t value)
	{
		___index_6 = value;
	}

	inline static int32_t get_offset_of_array_type_7() { return static_cast<int32_t>(offsetof(ArrayPropertyDescriptor_t157990669, ___array_type_7)); }
	inline Type_t * get_array_type_7() const { return ___array_type_7; }
	inline Type_t ** get_address_of_array_type_7() { return &___array_type_7; }
	inline void set_array_type_7(Type_t * value)
	{
		___array_type_7 = value;
		Il2CppCodeGenWriteBarrier((&___array_type_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARRAYPROPERTYDESCRIPTOR_T157990669_H
#ifndef VIEWTECHNOLOGY_T1747061125_H
#define VIEWTECHNOLOGY_T1747061125_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.Design.ViewTechnology
struct  ViewTechnology_t1747061125 
{
public:
	// System.Int32 System.ComponentModel.Design.ViewTechnology::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ViewTechnology_t1747061125, ___value___1)); }
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
#endif // VIEWTECHNOLOGY_T1747061125_H
#ifndef COLLECTIONCHANGEEVENTARGS_T1870286136_H
#define COLLECTIONCHANGEEVENTARGS_T1870286136_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.CollectionChangeEventArgs
struct  CollectionChangeEventArgs_t1870286136  : public EventArgs_t3591816995
{
public:
	// System.ComponentModel.CollectionChangeAction System.ComponentModel.CollectionChangeEventArgs::changeAction
	int32_t ___changeAction_1;
	// System.Object System.ComponentModel.CollectionChangeEventArgs::theElement
	RuntimeObject * ___theElement_2;

public:
	inline static int32_t get_offset_of_changeAction_1() { return static_cast<int32_t>(offsetof(CollectionChangeEventArgs_t1870286136, ___changeAction_1)); }
	inline int32_t get_changeAction_1() const { return ___changeAction_1; }
	inline int32_t* get_address_of_changeAction_1() { return &___changeAction_1; }
	inline void set_changeAction_1(int32_t value)
	{
		___changeAction_1 = value;
	}

	inline static int32_t get_offset_of_theElement_2() { return static_cast<int32_t>(offsetof(CollectionChangeEventArgs_t1870286136, ___theElement_2)); }
	inline RuntimeObject * get_theElement_2() const { return ___theElement_2; }
	inline RuntimeObject ** get_address_of_theElement_2() { return &___theElement_2; }
	inline void set_theElement_2(RuntimeObject * value)
	{
		___theElement_2 = value;
		Il2CppCodeGenWriteBarrier((&___theElement_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLLECTIONCHANGEEVENTARGS_T1870286136_H
#ifndef EDITORBROWSABLEATTRIBUTE_T1475454531_H
#define EDITORBROWSABLEATTRIBUTE_T1475454531_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.EditorBrowsableAttribute
struct  EditorBrowsableAttribute_t1475454531  : public Attribute_t861562559
{
public:
	// System.ComponentModel.EditorBrowsableState System.ComponentModel.EditorBrowsableAttribute::state
	int32_t ___state_0;

public:
	inline static int32_t get_offset_of_state_0() { return static_cast<int32_t>(offsetof(EditorBrowsableAttribute_t1475454531, ___state_0)); }
	inline int32_t get_state_0() const { return ___state_0; }
	inline int32_t* get_address_of_state_0() { return &___state_0; }
	inline void set_state_0(int32_t value)
	{
		___state_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EDITORBROWSABLEATTRIBUTE_T1475454531_H
#ifndef DESIGNERSERIALIZATIONVISIBILITYATTRIBUTE_T4084246596_H
#define DESIGNERSERIALIZATIONVISIBILITYATTRIBUTE_T4084246596_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DesignerSerializationVisibilityAttribute
struct  DesignerSerializationVisibilityAttribute_t4084246596  : public Attribute_t861562559
{
public:
	// System.ComponentModel.DesignerSerializationVisibility System.ComponentModel.DesignerSerializationVisibilityAttribute::visibility
	int32_t ___visibility_0;

public:
	inline static int32_t get_offset_of_visibility_0() { return static_cast<int32_t>(offsetof(DesignerSerializationVisibilityAttribute_t4084246596, ___visibility_0)); }
	inline int32_t get_visibility_0() const { return ___visibility_0; }
	inline int32_t* get_address_of_visibility_0() { return &___visibility_0; }
	inline void set_visibility_0(int32_t value)
	{
		___visibility_0 = value;
	}
};

struct DesignerSerializationVisibilityAttribute_t4084246596_StaticFields
{
public:
	// System.ComponentModel.DesignerSerializationVisibilityAttribute System.ComponentModel.DesignerSerializationVisibilityAttribute::Default
	DesignerSerializationVisibilityAttribute_t4084246596 * ___Default_1;
	// System.ComponentModel.DesignerSerializationVisibilityAttribute System.ComponentModel.DesignerSerializationVisibilityAttribute::Content
	DesignerSerializationVisibilityAttribute_t4084246596 * ___Content_2;
	// System.ComponentModel.DesignerSerializationVisibilityAttribute System.ComponentModel.DesignerSerializationVisibilityAttribute::Hidden
	DesignerSerializationVisibilityAttribute_t4084246596 * ___Hidden_3;
	// System.ComponentModel.DesignerSerializationVisibilityAttribute System.ComponentModel.DesignerSerializationVisibilityAttribute::Visible
	DesignerSerializationVisibilityAttribute_t4084246596 * ___Visible_4;

public:
	inline static int32_t get_offset_of_Default_1() { return static_cast<int32_t>(offsetof(DesignerSerializationVisibilityAttribute_t4084246596_StaticFields, ___Default_1)); }
	inline DesignerSerializationVisibilityAttribute_t4084246596 * get_Default_1() const { return ___Default_1; }
	inline DesignerSerializationVisibilityAttribute_t4084246596 ** get_address_of_Default_1() { return &___Default_1; }
	inline void set_Default_1(DesignerSerializationVisibilityAttribute_t4084246596 * value)
	{
		___Default_1 = value;
		Il2CppCodeGenWriteBarrier((&___Default_1), value);
	}

	inline static int32_t get_offset_of_Content_2() { return static_cast<int32_t>(offsetof(DesignerSerializationVisibilityAttribute_t4084246596_StaticFields, ___Content_2)); }
	inline DesignerSerializationVisibilityAttribute_t4084246596 * get_Content_2() const { return ___Content_2; }
	inline DesignerSerializationVisibilityAttribute_t4084246596 ** get_address_of_Content_2() { return &___Content_2; }
	inline void set_Content_2(DesignerSerializationVisibilityAttribute_t4084246596 * value)
	{
		___Content_2 = value;
		Il2CppCodeGenWriteBarrier((&___Content_2), value);
	}

	inline static int32_t get_offset_of_Hidden_3() { return static_cast<int32_t>(offsetof(DesignerSerializationVisibilityAttribute_t4084246596_StaticFields, ___Hidden_3)); }
	inline DesignerSerializationVisibilityAttribute_t4084246596 * get_Hidden_3() const { return ___Hidden_3; }
	inline DesignerSerializationVisibilityAttribute_t4084246596 ** get_address_of_Hidden_3() { return &___Hidden_3; }
	inline void set_Hidden_3(DesignerSerializationVisibilityAttribute_t4084246596 * value)
	{
		___Hidden_3 = value;
		Il2CppCodeGenWriteBarrier((&___Hidden_3), value);
	}

	inline static int32_t get_offset_of_Visible_4() { return static_cast<int32_t>(offsetof(DesignerSerializationVisibilityAttribute_t4084246596_StaticFields, ___Visible_4)); }
	inline DesignerSerializationVisibilityAttribute_t4084246596 * get_Visible_4() const { return ___Visible_4; }
	inline DesignerSerializationVisibilityAttribute_t4084246596 ** get_address_of_Visible_4() { return &___Visible_4; }
	inline void set_Visible_4(DesignerSerializationVisibilityAttribute_t4084246596 * value)
	{
		___Visible_4 = value;
		Il2CppCodeGenWriteBarrier((&___Visible_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DESIGNERSERIALIZATIONVISIBILITYATTRIBUTE_T4084246596_H
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
#ifndef PROCESSWORKEREVENTHANDLER_T952431846_H
#define PROCESSWORKEREVENTHANDLER_T952431846_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.BackgroundWorker/ProcessWorkerEventHandler
struct  ProcessWorkerEventHandler_t952431846  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROCESSWORKEREVENTHANDLER_T952431846_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1200 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1201 = { sizeof (ListDictionary_t1624492310), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1201[4] = 
{
	ListDictionary_t1624492310::get_offset_of_count_0(),
	ListDictionary_t1624492310::get_offset_of_version_1(),
	ListDictionary_t1624492310::get_offset_of_head_2(),
	ListDictionary_t1624492310::get_offset_of_comparer_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1202 = { sizeof (DictionaryNode_t417719465), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1202[3] = 
{
	DictionaryNode_t417719465::get_offset_of_key_0(),
	DictionaryNode_t417719465::get_offset_of_value_1(),
	DictionaryNode_t417719465::get_offset_of_next_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1203 = { sizeof (DictionaryNodeEnumerator_t1673829610), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1203[4] = 
{
	DictionaryNodeEnumerator_t1673829610::get_offset_of_dict_0(),
	DictionaryNodeEnumerator_t1673829610::get_offset_of_isAtStart_1(),
	DictionaryNodeEnumerator_t1673829610::get_offset_of_current_2(),
	DictionaryNodeEnumerator_t1673829610::get_offset_of_version_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1204 = { sizeof (DictionaryNodeCollection_t819283804), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1204[2] = 
{
	DictionaryNodeCollection_t819283804::get_offset_of_dict_0(),
	DictionaryNodeCollection_t819283804::get_offset_of_isKeyList_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1205 = { sizeof (DictionaryNodeCollectionEnumerator_t2863182637), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1205[2] = 
{
	DictionaryNodeCollectionEnumerator_t2863182637::get_offset_of_inner_0(),
	DictionaryNodeCollectionEnumerator_t2863182637::get_offset_of_isKeyList_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1206 = { sizeof (NameObjectCollectionBase_t2091847364), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1206[10] = 
{
	NameObjectCollectionBase_t2091847364::get_offset_of_m_ItemsContainer_0(),
	NameObjectCollectionBase_t2091847364::get_offset_of_m_NullKeyItem_1(),
	NameObjectCollectionBase_t2091847364::get_offset_of_m_ItemsArray_2(),
	NameObjectCollectionBase_t2091847364::get_offset_of_m_hashprovider_3(),
	NameObjectCollectionBase_t2091847364::get_offset_of_m_comparer_4(),
	NameObjectCollectionBase_t2091847364::get_offset_of_m_defCapacity_5(),
	NameObjectCollectionBase_t2091847364::get_offset_of_m_readonly_6(),
	NameObjectCollectionBase_t2091847364::get_offset_of_infoCopy_7(),
	NameObjectCollectionBase_t2091847364::get_offset_of_keyscoll_8(),
	NameObjectCollectionBase_t2091847364::get_offset_of_equality_comparer_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1207 = { sizeof (_Item_t2272350267), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1207[2] = 
{
	_Item_t2272350267::get_offset_of_key_0(),
	_Item_t2272350267::get_offset_of_value_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1208 = { sizeof (_KeysEnumerator_t4246666432), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1208[2] = 
{
	_KeysEnumerator_t4246666432::get_offset_of_m_collection_0(),
	_KeysEnumerator_t4246666432::get_offset_of_m_position_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1209 = { sizeof (KeysCollection_t1318642398), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1209[1] = 
{
	KeysCollection_t1318642398::get_offset_of_m_collection_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1210 = { sizeof (NameValueCollection_t407452768), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1210[2] = 
{
	NameValueCollection_t407452768::get_offset_of_cachedAllKeys_10(),
	NameValueCollection_t407452768::get_offset_of_cachedAll_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1211 = { sizeof (OrderedDictionary_t2617496293), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1211[6] = 
{
	OrderedDictionary_t2617496293::get_offset_of_list_0(),
	OrderedDictionary_t2617496293::get_offset_of_hash_1(),
	OrderedDictionary_t2617496293::get_offset_of_readOnly_2(),
	OrderedDictionary_t2617496293::get_offset_of_initialCapacity_3(),
	OrderedDictionary_t2617496293::get_offset_of_serializationInfo_4(),
	OrderedDictionary_t2617496293::get_offset_of_comparer_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1212 = { sizeof (OrderedEntryCollectionEnumerator_t1171499853), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1212[1] = 
{
	OrderedEntryCollectionEnumerator_t1171499853::get_offset_of_listEnumerator_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1213 = { sizeof (OrderedCollection_t2804082187), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1213[2] = 
{
	OrderedCollection_t2804082187::get_offset_of_list_0(),
	OrderedCollection_t2804082187::get_offset_of_isKeyList_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1214 = { sizeof (OrderedCollectionEnumerator_t3799789192), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1214[2] = 
{
	OrderedCollectionEnumerator_t3799789192::get_offset_of_isKeyList_0(),
	OrderedCollectionEnumerator_t3799789192::get_offset_of_listEnumerator_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1215 = { sizeof (ProcessStringDictionary_t2107791454), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1215[1] = 
{
	ProcessStringDictionary_t2107791454::get_offset_of_table_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1216 = { sizeof (StringCollection_t167406615), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1216[1] = 
{
	StringCollection_t167406615::get_offset_of_data_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1217 = { sizeof (StringDictionary_t120437468), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1217[1] = 
{
	StringDictionary_t120437468::get_offset_of_contents_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1218 = { sizeof (StringEnumerator_t3934291441), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1218[1] = 
{
	StringEnumerator_t3934291441::get_offset_of_enumerable_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1219 = { sizeof (InstanceDescriptor_t657473484), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1219[3] = 
{
	InstanceDescriptor_t657473484::get_offset_of_member_0(),
	InstanceDescriptor_t657473484::get_offset_of_arguments_1(),
	InstanceDescriptor_t657473484::get_offset_of_isComplete_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1220 = { sizeof (CommandID_t2504350095), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1220[2] = 
{
	CommandID_t2504350095::get_offset_of_cID_0(),
	CommandID_t2504350095::get_offset_of_guid_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1221 = { sizeof (ComponentChangedEventArgs_t1471191266), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1221[4] = 
{
	ComponentChangedEventArgs_t1471191266::get_offset_of_component_1(),
	ComponentChangedEventArgs_t1471191266::get_offset_of_member_2(),
	ComponentChangedEventArgs_t1471191266::get_offset_of_oldValue_3(),
	ComponentChangedEventArgs_t1471191266::get_offset_of_newValue_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1222 = { sizeof (ComponentChangingEventArgs_t2355090559), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1222[2] = 
{
	ComponentChangingEventArgs_t2355090559::get_offset_of_component_1(),
	ComponentChangingEventArgs_t2355090559::get_offset_of_member_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1223 = { sizeof (ComponentEventArgs_t1368962142), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1223[1] = 
{
	ComponentEventArgs_t1368962142::get_offset_of_icomp_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1224 = { sizeof (ComponentRenameEventArgs_t729293354), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1224[3] = 
{
	ComponentRenameEventArgs_t729293354::get_offset_of_component_1(),
	ComponentRenameEventArgs_t729293354::get_offset_of_oldName_2(),
	ComponentRenameEventArgs_t729293354::get_offset_of_newName_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1225 = { sizeof (DesignerTransaction_t2710857822), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1225[3] = 
{
	DesignerTransaction_t2710857822::get_offset_of_description_0(),
	DesignerTransaction_t2710857822::get_offset_of_committed_1(),
	DesignerTransaction_t2710857822::get_offset_of_canceled_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1226 = { sizeof (DesignerTransactionCloseEventArgs_t2369104035), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1226[2] = 
{
	DesignerTransactionCloseEventArgs_t2369104035::get_offset_of_commit_1(),
	DesignerTransactionCloseEventArgs_t2369104035::get_offset_of_last_transaction_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1227 = { sizeof (DesignerVerb_t103962676), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1227[2] = 
{
	DesignerVerb_t103962676::get_offset_of_text_8(),
	DesignerVerb_t103962676::get_offset_of_description_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1228 = { sizeof (DesignerVerbCollection_t2615404383), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1229 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1230 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1231 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1232 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1233 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1234 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1235 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1236 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1237 = { sizeof (MenuCommand_t2745965391), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1237[8] = 
{
	MenuCommand_t2745965391::get_offset_of_handler_0(),
	MenuCommand_t2745965391::get_offset_of_command_1(),
	MenuCommand_t2745965391::get_offset_of_ischecked_2(),
	MenuCommand_t2745965391::get_offset_of_enabled_3(),
	MenuCommand_t2745965391::get_offset_of_issupported_4(),
	MenuCommand_t2745965391::get_offset_of_visible_5(),
	MenuCommand_t2745965391::get_offset_of_properties_6(),
	MenuCommand_t2745965391::get_offset_of_CommandChanged_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1238 = { sizeof (RuntimeLicenseContext_t1578118062), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1238[2] = 
{
	RuntimeLicenseContext_t1578118062::get_offset_of_extraassemblies_0(),
	RuntimeLicenseContext_t1578118062::get_offset_of_keys_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1239 = { sizeof (StandardCommands_t1676831160), -1, sizeof(StandardCommands_t1676831160_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1239[55] = 
{
	StandardCommands_t1676831160_StaticFields::get_offset_of_AlignBottom_0(),
	StandardCommands_t1676831160_StaticFields::get_offset_of_AlignHorizontalCenters_1(),
	StandardCommands_t1676831160_StaticFields::get_offset_of_AlignLeft_2(),
	StandardCommands_t1676831160_StaticFields::get_offset_of_AlignRight_3(),
	StandardCommands_t1676831160_StaticFields::get_offset_of_AlignToGrid_4(),
	StandardCommands_t1676831160_StaticFields::get_offset_of_AlignTop_5(),
	StandardCommands_t1676831160_StaticFields::get_offset_of_AlignVerticalCenters_6(),
	StandardCommands_t1676831160_StaticFields::get_offset_of_ArrangeBottom_7(),
	StandardCommands_t1676831160_StaticFields::get_offset_of_ArrangeIcons_8(),
	StandardCommands_t1676831160_StaticFields::get_offset_of_ArrangeRight_9(),
	StandardCommands_t1676831160_StaticFields::get_offset_of_BringForward_10(),
	StandardCommands_t1676831160_StaticFields::get_offset_of_BringToFront_11(),
	StandardCommands_t1676831160_StaticFields::get_offset_of_CenterHorizontally_12(),
	StandardCommands_t1676831160_StaticFields::get_offset_of_CenterVertically_13(),
	StandardCommands_t1676831160_StaticFields::get_offset_of_Copy_14(),
	StandardCommands_t1676831160_StaticFields::get_offset_of_Cut_15(),
	StandardCommands_t1676831160_StaticFields::get_offset_of_Delete_16(),
	StandardCommands_t1676831160_StaticFields::get_offset_of_F1Help_17(),
	StandardCommands_t1676831160_StaticFields::get_offset_of_Group_18(),
	StandardCommands_t1676831160_StaticFields::get_offset_of_HorizSpaceConcatenate_19(),
	StandardCommands_t1676831160_StaticFields::get_offset_of_HorizSpaceDecrease_20(),
	StandardCommands_t1676831160_StaticFields::get_offset_of_HorizSpaceIncrease_21(),
	StandardCommands_t1676831160_StaticFields::get_offset_of_HorizSpaceMakeEqual_22(),
	StandardCommands_t1676831160_StaticFields::get_offset_of_LineupIcons_23(),
	StandardCommands_t1676831160_StaticFields::get_offset_of_LockControls_24(),
	StandardCommands_t1676831160_StaticFields::get_offset_of_MultiLevelRedo_25(),
	StandardCommands_t1676831160_StaticFields::get_offset_of_MultiLevelUndo_26(),
	StandardCommands_t1676831160_StaticFields::get_offset_of_Paste_27(),
	StandardCommands_t1676831160_StaticFields::get_offset_of_Properties_28(),
	StandardCommands_t1676831160_StaticFields::get_offset_of_PropertiesWindow_29(),
	StandardCommands_t1676831160_StaticFields::get_offset_of_Redo_30(),
	StandardCommands_t1676831160_StaticFields::get_offset_of_Replace_31(),
	StandardCommands_t1676831160_StaticFields::get_offset_of_SelectAll_32(),
	StandardCommands_t1676831160_StaticFields::get_offset_of_SendBackward_33(),
	StandardCommands_t1676831160_StaticFields::get_offset_of_SendToBack_34(),
	StandardCommands_t1676831160_StaticFields::get_offset_of_ShowGrid_35(),
	StandardCommands_t1676831160_StaticFields::get_offset_of_ShowLargeIcons_36(),
	StandardCommands_t1676831160_StaticFields::get_offset_of_SizeToControl_37(),
	StandardCommands_t1676831160_StaticFields::get_offset_of_SizeToControlHeight_38(),
	StandardCommands_t1676831160_StaticFields::get_offset_of_SizeToControlWidth_39(),
	StandardCommands_t1676831160_StaticFields::get_offset_of_SizeToFit_40(),
	StandardCommands_t1676831160_StaticFields::get_offset_of_SizeToGrid_41(),
	StandardCommands_t1676831160_StaticFields::get_offset_of_SnapToGrid_42(),
	StandardCommands_t1676831160_StaticFields::get_offset_of_TabOrder_43(),
	StandardCommands_t1676831160_StaticFields::get_offset_of_Undo_44(),
	StandardCommands_t1676831160_StaticFields::get_offset_of_Ungroup_45(),
	StandardCommands_t1676831160_StaticFields::get_offset_of_VerbFirst_46(),
	StandardCommands_t1676831160_StaticFields::get_offset_of_VerbLast_47(),
	StandardCommands_t1676831160_StaticFields::get_offset_of_VertSpaceConcatenate_48(),
	StandardCommands_t1676831160_StaticFields::get_offset_of_VertSpaceDecrease_49(),
	StandardCommands_t1676831160_StaticFields::get_offset_of_VertSpaceIncrease_50(),
	StandardCommands_t1676831160_StaticFields::get_offset_of_VertSpaceMakeEqual_51(),
	StandardCommands_t1676831160_StaticFields::get_offset_of_ViewGrid_52(),
	StandardCommands_t1676831160_StaticFields::get_offset_of_DocumentOutline_53(),
	StandardCommands_t1676831160_StaticFields::get_offset_of_ViewCode_54(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1240 = { sizeof (ViewTechnology_t1747061125)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1240[4] = 
{
	ViewTechnology_t1747061125::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1241 = { sizeof (ArrayConverter_t1750795769), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1242 = { sizeof (ArrayPropertyDescriptor_t157990669), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1242[2] = 
{
	ArrayPropertyDescriptor_t157990669::get_offset_of_index_6(),
	ArrayPropertyDescriptor_t157990669::get_offset_of_array_type_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1243 = { sizeof (AsyncCompletedEventArgs_t1863481821), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1243[3] = 
{
	AsyncCompletedEventArgs_t1863481821::get_offset_of__error_1(),
	AsyncCompletedEventArgs_t1863481821::get_offset_of__cancelled_2(),
	AsyncCompletedEventArgs_t1863481821::get_offset_of__userState_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1244 = { sizeof (AsyncOperation_t2743648699), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1244[3] = 
{
	AsyncOperation_t2743648699::get_offset_of_ctx_0(),
	AsyncOperation_t2743648699::get_offset_of_state_1(),
	AsyncOperation_t2743648699::get_offset_of_done_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1245 = { sizeof (AsyncOperationManager_t1665670643), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1246 = { sizeof (AttributeCollection_t4221220734), -1, sizeof(AttributeCollection_t4221220734_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1246[2] = 
{
	AttributeCollection_t4221220734::get_offset_of_attrList_0(),
	AttributeCollection_t4221220734_StaticFields::get_offset_of_Empty_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1247 = { sizeof (BackgroundWorker_t3811013447), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1247[7] = 
{
	BackgroundWorker_t3811013447::get_offset_of_async_0(),
	BackgroundWorker_t3811013447::get_offset_of_cancel_pending_1(),
	BackgroundWorker_t3811013447::get_offset_of_report_progress_2(),
	BackgroundWorker_t3811013447::get_offset_of_support_cancel_3(),
	BackgroundWorker_t3811013447::get_offset_of_DoWork_4(),
	BackgroundWorker_t3811013447::get_offset_of_ProgressChanged_5(),
	BackgroundWorker_t3811013447::get_offset_of_RunWorkerCompleted_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1248 = { sizeof (ProcessWorkerEventHandler_t952431846), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1249 = { sizeof (BaseNumberConverter_t312147029), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1249[1] = 
{
	BaseNumberConverter_t312147029::get_offset_of_InnerType_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1250 = { sizeof (BindableSupport_t3743993600)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1250[4] = 
{
	BindableSupport_t3743993600::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1251 = { sizeof (BooleanConverter_t941538927), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1252 = { sizeof (BrowsableAttribute_t3407396667), -1, sizeof(BrowsableAttribute_t3407396667_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1252[4] = 
{
	BrowsableAttribute_t3407396667::get_offset_of_browsable_0(),
	BrowsableAttribute_t3407396667_StaticFields::get_offset_of_Default_1(),
	BrowsableAttribute_t3407396667_StaticFields::get_offset_of_No_2(),
	BrowsableAttribute_t3407396667_StaticFields::get_offset_of_Yes_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1253 = { sizeof (ByteConverter_t1408362843), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1254 = { sizeof (CancelEventArgs_t1846056344), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1254[1] = 
{
	CancelEventArgs_t1846056344::get_offset_of_cancel_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1255 = { sizeof (CategoryAttribute_t39585132), -1, sizeof(CategoryAttribute_t39585132_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1255[17] = 
{
	CategoryAttribute_t39585132::get_offset_of_category_0(),
	CategoryAttribute_t39585132::get_offset_of_IsLocalized_1(),
	CategoryAttribute_t39585132_StaticFields::get_offset_of_action_2(),
	CategoryAttribute_t39585132_StaticFields::get_offset_of_appearance_3(),
	CategoryAttribute_t39585132_StaticFields::get_offset_of_behaviour_4(),
	CategoryAttribute_t39585132_StaticFields::get_offset_of_data_5(),
	CategoryAttribute_t39585132_StaticFields::get_offset_of_def_6(),
	CategoryAttribute_t39585132_StaticFields::get_offset_of_design_7(),
	CategoryAttribute_t39585132_StaticFields::get_offset_of_drag_drop_8(),
	CategoryAttribute_t39585132_StaticFields::get_offset_of_focus_9(),
	CategoryAttribute_t39585132_StaticFields::get_offset_of_format_10(),
	CategoryAttribute_t39585132_StaticFields::get_offset_of_key_11(),
	CategoryAttribute_t39585132_StaticFields::get_offset_of_layout_12(),
	CategoryAttribute_t39585132_StaticFields::get_offset_of_mouse_13(),
	CategoryAttribute_t39585132_StaticFields::get_offset_of_window_style_14(),
	CategoryAttribute_t39585132_StaticFields::get_offset_of_async_15(),
	CategoryAttribute_t39585132_StaticFields::get_offset_of_lockobj_16(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1256 = { sizeof (CharConverter_t747842913), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1257 = { sizeof (CollectionChangeAction_t1145968582)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1257[4] = 
{
	CollectionChangeAction_t1145968582::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1258 = { sizeof (CollectionChangeEventArgs_t1870286136), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1258[2] = 
{
	CollectionChangeEventArgs_t1870286136::get_offset_of_changeAction_1(),
	CollectionChangeEventArgs_t1870286136::get_offset_of_theElement_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1259 = { sizeof (CollectionConverter_t3078846443), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1260 = { sizeof (Component_t3620823400), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1260[3] = 
{
	Component_t3620823400::get_offset_of_event_handlers_1(),
	Component_t3620823400::get_offset_of_mySite_2(),
	Component_t3620823400::get_offset_of_disposedEvent_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1261 = { sizeof (ComponentCollection_t1445440302), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1262 = { sizeof (ComponentConverter_t118941221), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1263 = { sizeof (CultureInfoConverter_t81550636), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1263[1] = 
{
	CultureInfoConverter_t81550636::get_offset_of__standardValues_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1264 = { sizeof (CultureInfoComparer_t1184699714), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1265 = { sizeof (CustomTypeDescriptor_t3093649079), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1265[1] = 
{
	CustomTypeDescriptor_t3093649079::get_offset_of__parent_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1266 = { sizeof (DateTimeConverter_t2298802450), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1267 = { sizeof (DecimalConverter_t3574141665), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1268 = { sizeof (DefaultEventAttribute_t3124666540), -1, sizeof(DefaultEventAttribute_t3124666540_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1268[2] = 
{
	DefaultEventAttribute_t3124666540::get_offset_of_eventName_0(),
	DefaultEventAttribute_t3124666540_StaticFields::get_offset_of_Default_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1269 = { sizeof (DefaultPropertyAttribute_t1952442862), -1, sizeof(DefaultPropertyAttribute_t1952442862_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1269[2] = 
{
	DefaultPropertyAttribute_t1952442862::get_offset_of_property_name_0(),
	DefaultPropertyAttribute_t1952442862_StaticFields::get_offset_of_Default_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1270 = { sizeof (DefaultValueAttribute_t587583663), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1270[1] = 
{
	DefaultValueAttribute_t587583663::get_offset_of_DefaultValue_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1271 = { sizeof (DescriptionAttribute_t874390736), -1, sizeof(DescriptionAttribute_t874390736_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1271[2] = 
{
	DescriptionAttribute_t874390736::get_offset_of_desc_0(),
	DescriptionAttribute_t874390736_StaticFields::get_offset_of_Default_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1272 = { sizeof (DesignOnlyAttribute_t1017827538), -1, sizeof(DesignOnlyAttribute_t1017827538_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1272[4] = 
{
	DesignOnlyAttribute_t1017827538::get_offset_of_design_only_0(),
	DesignOnlyAttribute_t1017827538_StaticFields::get_offset_of_Default_1(),
	DesignOnlyAttribute_t1017827538_StaticFields::get_offset_of_No_2(),
	DesignOnlyAttribute_t1017827538_StaticFields::get_offset_of_Yes_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1273 = { sizeof (DesignTimeVisibleAttribute_t2841844458), -1, sizeof(DesignTimeVisibleAttribute_t2841844458_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1273[4] = 
{
	DesignTimeVisibleAttribute_t2841844458::get_offset_of_visible_0(),
	DesignTimeVisibleAttribute_t2841844458_StaticFields::get_offset_of_Default_1(),
	DesignTimeVisibleAttribute_t2841844458_StaticFields::get_offset_of_No_2(),
	DesignTimeVisibleAttribute_t2841844458_StaticFields::get_offset_of_Yes_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1274 = { sizeof (DesignerAttribute_t2079716647), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1274[2] = 
{
	DesignerAttribute_t2079716647::get_offset_of_name_0(),
	DesignerAttribute_t2079716647::get_offset_of_basetypename_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1275 = { sizeof (DesignerCategoryAttribute_t2912925731), -1, sizeof(DesignerCategoryAttribute_t2912925731_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1275[5] = 
{
	DesignerCategoryAttribute_t2912925731::get_offset_of_category_0(),
	DesignerCategoryAttribute_t2912925731_StaticFields::get_offset_of_Component_1(),
	DesignerCategoryAttribute_t2912925731_StaticFields::get_offset_of_Form_2(),
	DesignerCategoryAttribute_t2912925731_StaticFields::get_offset_of_Generic_3(),
	DesignerCategoryAttribute_t2912925731_StaticFields::get_offset_of_Default_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1276 = { sizeof (DesignerSerializationVisibility_t3481291396)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1276[4] = 
{
	DesignerSerializationVisibility_t3481291396::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1277 = { sizeof (DesignerSerializationVisibilityAttribute_t4084246596), -1, sizeof(DesignerSerializationVisibilityAttribute_t4084246596_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1277[5] = 
{
	DesignerSerializationVisibilityAttribute_t4084246596::get_offset_of_visibility_0(),
	DesignerSerializationVisibilityAttribute_t4084246596_StaticFields::get_offset_of_Default_1(),
	DesignerSerializationVisibilityAttribute_t4084246596_StaticFields::get_offset_of_Content_2(),
	DesignerSerializationVisibilityAttribute_t4084246596_StaticFields::get_offset_of_Hidden_3(),
	DesignerSerializationVisibilityAttribute_t4084246596_StaticFields::get_offset_of_Visible_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1278 = { sizeof (DisplayNameAttribute_t2074055386), -1, sizeof(DisplayNameAttribute_t2074055386_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1278[2] = 
{
	DisplayNameAttribute_t2074055386_StaticFields::get_offset_of_Default_0(),
	DisplayNameAttribute_t2074055386::get_offset_of_attributeDisplayName_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1279 = { sizeof (DoWorkEventArgs_t1025725751), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1279[3] = 
{
	DoWorkEventArgs_t1025725751::get_offset_of_arg_1(),
	DoWorkEventArgs_t1025725751::get_offset_of_result_2(),
	DoWorkEventArgs_t1025725751::get_offset_of_cancel_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1280 = { sizeof (DoubleConverter_t805142290), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1281 = { sizeof (EditorAttribute_t1332199665), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1281[2] = 
{
	EditorAttribute_t1332199665::get_offset_of_name_0(),
	EditorAttribute_t1332199665::get_offset_of_basename_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1282 = { sizeof (EditorBrowsableAttribute_t1475454531), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1282[1] = 
{
	EditorBrowsableAttribute_t1475454531::get_offset_of_state_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1283 = { sizeof (EditorBrowsableState_t2839071299)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1283[4] = 
{
	EditorBrowsableState_t2839071299::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1284 = { sizeof (EnumConverter_t1688858217), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1284[2] = 
{
	EnumConverter_t1688858217::get_offset_of_type_0(),
	EnumConverter_t1688858217::get_offset_of_stdValues_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1285 = { sizeof (EnumComparer_t557155003), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1286 = { sizeof (EventDescriptor_t88602298), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1287 = { sizeof (EventDescriptorCollection_t2278158832), -1, sizeof(EventDescriptorCollection_t2278158832_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1287[3] = 
{
	EventDescriptorCollection_t2278158832::get_offset_of_eventList_0(),
	EventDescriptorCollection_t2278158832::get_offset_of_isReadOnly_1(),
	EventDescriptorCollection_t2278158832_StaticFields::get_offset_of_Empty_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1288 = { sizeof (ListEntry_t1182276877), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1288[3] = 
{
	ListEntry_t1182276877::get_offset_of_key_0(),
	ListEntry_t1182276877::get_offset_of_value_1(),
	ListEntry_t1182276877::get_offset_of_next_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1289 = { sizeof (EventHandlerList_t1108123056), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1289[2] = 
{
	EventHandlerList_t1108123056::get_offset_of_entries_0(),
	EventHandlerList_t1108123056::get_offset_of_null_entry_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1290 = { sizeof (ExpandableObjectConverter_t420832579), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1291 = { sizeof (GuidConverter_t3396672461), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1292 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1293 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1294 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1295 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1296 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1297 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1298 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1299 = { 0, -1, 0, 0 };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
