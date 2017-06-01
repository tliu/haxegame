// Generated by Haxe 3.4.2
#include <hxcpp.h>

#ifndef INCLUDED_flixel_system_debug_Window
#include <flixel/system/debug/Window.h>
#endif
#ifndef INCLUDED_flixel_system_debug_watch_Watch
#include <flixel/system/debug/watch/Watch.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_BitmapData
#include <openfl/_legacy/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObject
#include <openfl/_legacy/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObjectContainer
#include <openfl/_legacy/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_InteractiveObject
#include <openfl/_legacy/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Sprite
#include <openfl/_legacy/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Rectangle
#include <openfl/_legacy/geom/Rectangle.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_f3919820c0c3a2ee_14_new,"flixel.system.debug.watch.Watch","new",0xfeaf943a,"flixel.system.debug.watch.Watch.new","flixel/system/debug/watch/Watch.hx",14,0x446c9b58)
namespace flixel{
namespace _hx_system{
namespace debug{
namespace watch{

void Watch_obj::__construct(::String Title, ::openfl::_legacy::display::BitmapData Icon, ::Dynamic Width, ::Dynamic Height, ::Dynamic Resizable, ::openfl::_legacy::geom::Rectangle Bounds, ::Dynamic Closable){
            	HX_STACKFRAME(&_hx_pos_f3919820c0c3a2ee_14_new)
HXDLIN(  14)		super::__construct(Title,Icon,Width,Height,Resizable,Bounds,Closable);
            	}

Dynamic Watch_obj::__CreateEmpty() { return new Watch_obj; }

void *Watch_obj::_hx_vtable = 0;

Dynamic Watch_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Watch_obj > _hx_result = new Watch_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6]);
	return _hx_result;
}

bool Watch_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3934d2c4) {
		if (inClassId<=(int)0x25b00754) {
			if (inClassId<=(int)0x1e88cdcf) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x1e88cdcf;
			} else {
				return inClassId==(int)0x25b00754;
			}
		} else {
			return inClassId==(int)0x306ae42a || inClassId==(int)0x3934d2c4;
		}
	} else {
		if (inClassId<=(int)0x5fcdb6d3) {
			return inClassId==(int)0x3d2d7617 || inClassId==(int)0x5fcdb6d3;
		} else {
			return inClassId==(int)0x619ca9b8;
		}
	}
}


hx::ObjectPtr< Watch_obj > Watch_obj::__new(::String Title, ::openfl::_legacy::display::BitmapData Icon, ::Dynamic Width, ::Dynamic Height, ::Dynamic Resizable, ::openfl::_legacy::geom::Rectangle Bounds, ::Dynamic Closable) {
	hx::ObjectPtr< Watch_obj > __this = new Watch_obj();
	__this->__construct(Title,Icon,Width,Height,Resizable,Bounds,Closable);
	return __this;
}

hx::ObjectPtr< Watch_obj > Watch_obj::__alloc(hx::Ctx *_hx_ctx,::String Title, ::openfl::_legacy::display::BitmapData Icon, ::Dynamic Width, ::Dynamic Height, ::Dynamic Resizable, ::openfl::_legacy::geom::Rectangle Bounds, ::Dynamic Closable) {
	Watch_obj *__this = (Watch_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Watch_obj), true, "flixel.system.debug.watch.Watch"));
	*(void **)__this = Watch_obj::_hx_vtable;
	__this->__construct(Title,Icon,Width,Height,Resizable,Bounds,Closable);
	return __this;
}

Watch_obj::Watch_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *Watch_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *Watch_obj_sStaticStorageInfo = 0;
#endif

static void Watch_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Watch_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Watch_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Watch_obj::__mClass,"__mClass");
};

#endif

hx::Class Watch_obj::__mClass;

void Watch_obj::__register()
{
	hx::Object *dummy = new Watch_obj;
	Watch_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.system.debug.watch.Watch","\x48","\xaf","\x96","\x48");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Watch_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Watch_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Watch_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Watch_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Watch_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace system
} // end namespace debug
} // end namespace watch
