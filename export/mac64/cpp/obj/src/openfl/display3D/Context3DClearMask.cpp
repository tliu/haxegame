// Generated by Haxe 3.4.2
#include <hxcpp.h>

#ifndef INCLUDED_openfl_display3D_Context3DClearMask
#include <openfl/display3D/Context3DClearMask.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_8ee8e439d5729f3b_10_boot,"openfl.display3D.Context3DClearMask","boot",0x4d1639ae,"openfl.display3D.Context3DClearMask.boot","openfl/display3D/Context3DClearMask.hx",10,0x30405b0a)
HX_LOCAL_STACK_FRAME(_hx_pos_8ee8e439d5729f3b_11_boot,"openfl.display3D.Context3DClearMask","boot",0x4d1639ae,"openfl.display3D.Context3DClearMask.boot","openfl/display3D/Context3DClearMask.hx",11,0x30405b0a)
HX_LOCAL_STACK_FRAME(_hx_pos_8ee8e439d5729f3b_12_boot,"openfl.display3D.Context3DClearMask","boot",0x4d1639ae,"openfl.display3D.Context3DClearMask.boot","openfl/display3D/Context3DClearMask.hx",12,0x30405b0a)
HX_LOCAL_STACK_FRAME(_hx_pos_8ee8e439d5729f3b_13_boot,"openfl.display3D.Context3DClearMask","boot",0x4d1639ae,"openfl.display3D.Context3DClearMask.boot","openfl/display3D/Context3DClearMask.hx",13,0x30405b0a)
namespace openfl{
namespace display3D{

void Context3DClearMask_obj::__construct() { }

Dynamic Context3DClearMask_obj::__CreateEmpty() { return new Context3DClearMask_obj; }

void *Context3DClearMask_obj::_hx_vtable = 0;

Dynamic Context3DClearMask_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Context3DClearMask_obj > _hx_result = new Context3DClearMask_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Context3DClearMask_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x59383738;
}

int Context3DClearMask_obj::ALL;

int Context3DClearMask_obj::COLOR;

int Context3DClearMask_obj::DEPTH;

int Context3DClearMask_obj::STENCIL;


Context3DClearMask_obj::Context3DClearMask_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *Context3DClearMask_obj_sMemberStorageInfo = 0;
static hx::StaticInfo Context3DClearMask_obj_sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &Context3DClearMask_obj::ALL,HX_HCSTRING("ALL","\x01","\x95","\x31","\x00")},
	{hx::fsInt,(void *) &Context3DClearMask_obj::COLOR,HX_HCSTRING("COLOR","\x43","\xa9","\x4a","\xc8")},
	{hx::fsInt,(void *) &Context3DClearMask_obj::DEPTH,HX_HCSTRING("DEPTH","\xe3","\x28","\x18","\x55")},
	{hx::fsInt,(void *) &Context3DClearMask_obj::STENCIL,HX_HCSTRING("STENCIL","\xdc","\x91","\xd7","\xff")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void Context3DClearMask_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Context3DClearMask_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Context3DClearMask_obj::ALL,"ALL");
	HX_MARK_MEMBER_NAME(Context3DClearMask_obj::COLOR,"COLOR");
	HX_MARK_MEMBER_NAME(Context3DClearMask_obj::DEPTH,"DEPTH");
	HX_MARK_MEMBER_NAME(Context3DClearMask_obj::STENCIL,"STENCIL");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Context3DClearMask_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Context3DClearMask_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Context3DClearMask_obj::ALL,"ALL");
	HX_VISIT_MEMBER_NAME(Context3DClearMask_obj::COLOR,"COLOR");
	HX_VISIT_MEMBER_NAME(Context3DClearMask_obj::DEPTH,"DEPTH");
	HX_VISIT_MEMBER_NAME(Context3DClearMask_obj::STENCIL,"STENCIL");
};

#endif

hx::Class Context3DClearMask_obj::__mClass;

static ::String Context3DClearMask_obj_sStaticFields[] = {
	HX_HCSTRING("ALL","\x01","\x95","\x31","\x00"),
	HX_HCSTRING("COLOR","\x43","\xa9","\x4a","\xc8"),
	HX_HCSTRING("DEPTH","\xe3","\x28","\x18","\x55"),
	HX_HCSTRING("STENCIL","\xdc","\x91","\xd7","\xff"),
	::String(null())
};

void Context3DClearMask_obj::__register()
{
	hx::Object *dummy = new Context3DClearMask_obj;
	Context3DClearMask_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display3D.Context3DClearMask","\x72","\x9c","\x4d","\x3a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Context3DClearMask_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Context3DClearMask_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Context3DClearMask_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Context3DClearMask_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Context3DClearMask_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Context3DClearMask_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Context3DClearMask_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_8ee8e439d5729f3b_10_boot)
HXDLIN(  10)		ALL = (int)17664;
            	}
{
            	HX_STACKFRAME(&_hx_pos_8ee8e439d5729f3b_11_boot)
HXDLIN(  11)		COLOR = (int)16384;
            	}
{
            	HX_STACKFRAME(&_hx_pos_8ee8e439d5729f3b_12_boot)
HXDLIN(  12)		DEPTH = (int)256;
            	}
{
            	HX_STACKFRAME(&_hx_pos_8ee8e439d5729f3b_13_boot)
HXDLIN(  13)		STENCIL = (int)1024;
            	}
}

} // end namespace openfl
} // end namespace display3D
