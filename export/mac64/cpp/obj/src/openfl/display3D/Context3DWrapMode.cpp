// Generated by Haxe 3.4.2
#include <hxcpp.h>

#ifndef INCLUDED_openfl_display3D_Context3DWrapMode
#include <openfl/display3D/Context3DWrapMode.h>
#endif
namespace openfl{
namespace display3D{

::openfl::display3D::Context3DWrapMode Context3DWrapMode_obj::CLAMP;

::openfl::display3D::Context3DWrapMode Context3DWrapMode_obj::REPEAT;

bool Context3DWrapMode_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	if (inName==HX_("CLAMP",db,aa,46,c6)) { outValue = Context3DWrapMode_obj::CLAMP; return true; }
	if (inName==HX_("REPEAT",5b,43,ff,b8)) { outValue = Context3DWrapMode_obj::REPEAT; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(Context3DWrapMode_obj)

int Context3DWrapMode_obj::__FindIndex(::String inName)
{
	if (inName==HX_("CLAMP",db,aa,46,c6)) return 0;
	if (inName==HX_("REPEAT",5b,43,ff,b8)) return 1;
	return super::__FindIndex(inName);
}

int Context3DWrapMode_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("CLAMP",db,aa,46,c6)) return 0;
	if (inName==HX_("REPEAT",5b,43,ff,b8)) return 0;
	return super::__FindArgCount(inName);
}

hx::Val Context3DWrapMode_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_("CLAMP",db,aa,46,c6)) return CLAMP;
	if (inName==HX_("REPEAT",5b,43,ff,b8)) return REPEAT;
	return super::__Field(inName,inCallProp);
}

static ::String Context3DWrapMode_obj_sStaticFields[] = {
	HX_("CLAMP",db,aa,46,c6),
	HX_("REPEAT",5b,43,ff,b8),
	::String(null())
};

static void Context3DWrapMode_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Context3DWrapMode_obj::CLAMP,"CLAMP");
	HX_MARK_MEMBER_NAME(Context3DWrapMode_obj::REPEAT,"REPEAT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Context3DWrapMode_obj_sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Context3DWrapMode_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Context3DWrapMode_obj::CLAMP,"CLAMP");
	HX_VISIT_MEMBER_NAME(Context3DWrapMode_obj::REPEAT,"REPEAT");
};
#endif

hx::Class Context3DWrapMode_obj::__mClass;

Dynamic __Create_Context3DWrapMode_obj() { return new Context3DWrapMode_obj; }

void Context3DWrapMode_obj::__register()
{

hx::Static(__mClass) = hx::_hx_RegisterClass(HX_HCSTRING("openfl.display3D.Context3DWrapMode","\x14","\xe1","\xdf","\xf5"), hx::TCanCast< Context3DWrapMode_obj >,Context3DWrapMode_obj_sStaticFields,0,
	&__Create_Context3DWrapMode_obj, &__Create,
	&super::__SGetClass(), &CreateContext3DWrapMode_obj, Context3DWrapMode_obj_sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , Context3DWrapMode_obj_sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &Context3DWrapMode_obj::__GetStatic;
}

void Context3DWrapMode_obj::__boot()
{
CLAMP = hx::CreateEnum< Context3DWrapMode_obj >(HX_HCSTRING("CLAMP","\xdb","\xaa","\x46","\xc6"),0,0);
REPEAT = hx::CreateEnum< Context3DWrapMode_obj >(HX_HCSTRING("REPEAT","\x5b","\x43","\xff","\xb8"),1,0);
}


} // end namespace openfl
} // end namespace display3D
