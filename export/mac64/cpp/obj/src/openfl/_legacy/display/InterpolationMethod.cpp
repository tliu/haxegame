// Generated by Haxe 3.4.2
#include <hxcpp.h>

#ifndef INCLUDED_openfl__legacy_display_InterpolationMethod
#include <openfl/_legacy/display/InterpolationMethod.h>
#endif
namespace openfl{
namespace _legacy{
namespace display{

::openfl::_legacy::display::InterpolationMethod InterpolationMethod_obj::LINEAR_RGB;

::openfl::_legacy::display::InterpolationMethod InterpolationMethod_obj::RGB;

bool InterpolationMethod_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	if (inName==HX_("LINEAR_RGB",53,10,b2,52)) { outValue = InterpolationMethod_obj::LINEAR_RGB; return true; }
	if (inName==HX_("RGB",ed,76,3e,00)) { outValue = InterpolationMethod_obj::RGB; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(InterpolationMethod_obj)

int InterpolationMethod_obj::__FindIndex(::String inName)
{
	if (inName==HX_("LINEAR_RGB",53,10,b2,52)) return 1;
	if (inName==HX_("RGB",ed,76,3e,00)) return 0;
	return super::__FindIndex(inName);
}

int InterpolationMethod_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("LINEAR_RGB",53,10,b2,52)) return 0;
	if (inName==HX_("RGB",ed,76,3e,00)) return 0;
	return super::__FindArgCount(inName);
}

hx::Val InterpolationMethod_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_("LINEAR_RGB",53,10,b2,52)) return LINEAR_RGB;
	if (inName==HX_("RGB",ed,76,3e,00)) return RGB;
	return super::__Field(inName,inCallProp);
}

static ::String InterpolationMethod_obj_sStaticFields[] = {
	HX_("RGB",ed,76,3e,00),
	HX_("LINEAR_RGB",53,10,b2,52),
	::String(null())
};

static void InterpolationMethod_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(InterpolationMethod_obj::LINEAR_RGB,"LINEAR_RGB");
	HX_MARK_MEMBER_NAME(InterpolationMethod_obj::RGB,"RGB");
};

#ifdef HXCPP_VISIT_ALLOCS
static void InterpolationMethod_obj_sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(InterpolationMethod_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(InterpolationMethod_obj::LINEAR_RGB,"LINEAR_RGB");
	HX_VISIT_MEMBER_NAME(InterpolationMethod_obj::RGB,"RGB");
};
#endif

hx::Class InterpolationMethod_obj::__mClass;

Dynamic __Create_InterpolationMethod_obj() { return new InterpolationMethod_obj; }

void InterpolationMethod_obj::__register()
{

hx::Static(__mClass) = hx::_hx_RegisterClass(HX_HCSTRING("openfl._legacy.display.InterpolationMethod","\x75","\xc5","\xa7","\x1f"), hx::TCanCast< InterpolationMethod_obj >,InterpolationMethod_obj_sStaticFields,0,
	&__Create_InterpolationMethod_obj, &__Create,
	&super::__SGetClass(), &CreateInterpolationMethod_obj, InterpolationMethod_obj_sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , InterpolationMethod_obj_sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &InterpolationMethod_obj::__GetStatic;
}

void InterpolationMethod_obj::__boot()
{
LINEAR_RGB = hx::CreateEnum< InterpolationMethod_obj >(HX_HCSTRING("LINEAR_RGB","\x53","\x10","\xb2","\x52"),1,0);
RGB = hx::CreateEnum< InterpolationMethod_obj >(HX_HCSTRING("RGB","\xed","\x76","\x3e","\x00"),0,0);
}


} // end namespace openfl
} // end namespace _legacy
} // end namespace display