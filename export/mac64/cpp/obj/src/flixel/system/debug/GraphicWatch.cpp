// Generated by Haxe 3.4.2
#include <hxcpp.h>

#ifndef INCLUDED_flixel_system_debug_GraphicWatch
#include <flixel/system/debug/GraphicWatch.h>
#endif
#ifndef INCLUDED_haxe_Resource
#include <haxe/Resource.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_BitmapData
#include <openfl/_legacy/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_ByteArray
#include <openfl/_legacy/utils/ByteArray.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_IDataInput
#include <openfl/_legacy/utils/IDataInput.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_IDataOutput
#include <openfl/_legacy/utils/IDataOutput.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_IMemoryRange
#include <openfl/_legacy/utils/IMemoryRange.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_998269d48f90abc3_2010_new,"flixel.system.debug.GraphicWatch","new",0xb737cfa1,"flixel.system.debug.GraphicWatch.new","openfl/_legacy/Assets.hx",2010,0x9276b055)
HX_LOCAL_STACK_FRAME(_hx_pos_3c0477ee7bfdb1b1_1_boot,"flixel.system.debug.GraphicWatch","boot",0x91b6ddd1,"flixel.system.debug.GraphicWatch.boot","?",1,0x0000003f)
namespace flixel{
namespace _hx_system{
namespace debug{

void GraphicWatch_obj::__construct(int width,int height, ::Dynamic __o_transparent, ::Dynamic __o_fillRGBA){
 ::Dynamic transparent = __o_transparent.Default(true);
 ::Dynamic fillRGBA = __o_fillRGBA.Default(-1);
            	HX_STACKFRAME(&_hx_pos_998269d48f90abc3_2010_new)
HXLINE(2076)		super::__construct(width,height,transparent,fillRGBA,null());
HXLINE(2078)		 ::openfl::_legacy::utils::ByteArray byteArray = ::openfl::_legacy::utils::ByteArray_obj::fromBytes(::haxe::Resource_obj::getBytes(::flixel::_hx_system::debug::GraphicWatch_obj::resourceName));
HXLINE(2079)		this->_hx___handle = ::openfl::_legacy::display::BitmapData_obj::lime_bitmap_data_from_bytes(byteArray,null());
            	}

Dynamic GraphicWatch_obj::__CreateEmpty() { return new GraphicWatch_obj; }

void *GraphicWatch_obj::_hx_vtable = 0;

Dynamic GraphicWatch_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< GraphicWatch_obj > _hx_result = new GraphicWatch_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool GraphicWatch_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0cd766e7) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x0cd766e7;
	} else {
		return inClassId==(int)0x27dab287;
	}
}

::String GraphicWatch_obj::resourceName;


hx::ObjectPtr< GraphicWatch_obj > GraphicWatch_obj::__new(int width,int height, ::Dynamic __o_transparent, ::Dynamic __o_fillRGBA) {
	hx::ObjectPtr< GraphicWatch_obj > __this = new GraphicWatch_obj();
	__this->__construct(width,height,__o_transparent,__o_fillRGBA);
	return __this;
}

hx::ObjectPtr< GraphicWatch_obj > GraphicWatch_obj::__alloc(hx::Ctx *_hx_ctx,int width,int height, ::Dynamic __o_transparent, ::Dynamic __o_fillRGBA) {
	GraphicWatch_obj *__this = (GraphicWatch_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(GraphicWatch_obj), true, "flixel.system.debug.GraphicWatch"));
	*(void **)__this = GraphicWatch_obj::_hx_vtable;
	__this->__construct(width,height,__o_transparent,__o_fillRGBA);
	return __this;
}

GraphicWatch_obj::GraphicWatch_obj()
{
}

bool GraphicWatch_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"resourceName") ) { outValue = ( resourceName ); return true; }
	}
	return false;
}

bool GraphicWatch_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"resourceName") ) { resourceName=ioValue.Cast< ::String >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *GraphicWatch_obj_sMemberStorageInfo = 0;
static hx::StaticInfo GraphicWatch_obj_sStaticStorageInfo[] = {
	{hx::fsString,(void *) &GraphicWatch_obj::resourceName,HX_HCSTRING("resourceName","\x39","\x7a","\x62","\x90")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void GraphicWatch_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GraphicWatch_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(GraphicWatch_obj::resourceName,"resourceName");
};

#ifdef HXCPP_VISIT_ALLOCS
static void GraphicWatch_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GraphicWatch_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(GraphicWatch_obj::resourceName,"resourceName");
};

#endif

hx::Class GraphicWatch_obj::__mClass;

static ::String GraphicWatch_obj_sStaticFields[] = {
	HX_HCSTRING("resourceName","\x39","\x7a","\x62","\x90"),
	::String(null())
};

void GraphicWatch_obj::__register()
{
	hx::Object *dummy = new GraphicWatch_obj;
	GraphicWatch_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.system.debug.GraphicWatch","\x2f","\x6b","\x15","\x7a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &GraphicWatch_obj::__GetStatic;
	__mClass->mSetStaticField = &GraphicWatch_obj::__SetStatic;
	__mClass->mMarkFunc = GraphicWatch_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(GraphicWatch_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< GraphicWatch_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = GraphicWatch_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GraphicWatch_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GraphicWatch_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void GraphicWatch_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_3c0477ee7bfdb1b1_1_boot)
HXDLIN(   1)		resourceName = HX_("__ASSET__:bitmap_flixel_system_debug_GraphicWatch",66,8f,5d,86);
            	}
}

} // end namespace flixel
} // end namespace system
} // end namespace debug
