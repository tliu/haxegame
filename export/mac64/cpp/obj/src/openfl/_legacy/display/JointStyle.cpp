// Generated by Haxe 3.4.2
#include <hxcpp.h>

#ifndef INCLUDED_openfl__legacy_display_JointStyle
#include <openfl/_legacy/display/JointStyle.h>
#endif
namespace openfl{
namespace _legacy{
namespace display{

::openfl::_legacy::display::JointStyle JointStyle_obj::BEVEL;

::openfl::_legacy::display::JointStyle JointStyle_obj::MITER;

::openfl::_legacy::display::JointStyle JointStyle_obj::ROUND;

bool JointStyle_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	if (inName==HX_("BEVEL",5a,80,4f,2e)) { outValue = JointStyle_obj::BEVEL; return true; }
	if (inName==HX_("MITER",e5,37,5b,86)) { outValue = JointStyle_obj::MITER; return true; }
	if (inName==HX_("ROUND",2e,30,54,6b)) { outValue = JointStyle_obj::ROUND; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(JointStyle_obj)

int JointStyle_obj::__FindIndex(::String inName)
{
	if (inName==HX_("BEVEL",5a,80,4f,2e)) return 2;
	if (inName==HX_("MITER",e5,37,5b,86)) return 1;
	if (inName==HX_("ROUND",2e,30,54,6b)) return 0;
	return super::__FindIndex(inName);
}

int JointStyle_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("BEVEL",5a,80,4f,2e)) return 0;
	if (inName==HX_("MITER",e5,37,5b,86)) return 0;
	if (inName==HX_("ROUND",2e,30,54,6b)) return 0;
	return super::__FindArgCount(inName);
}

hx::Val JointStyle_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_("BEVEL",5a,80,4f,2e)) return BEVEL;
	if (inName==HX_("MITER",e5,37,5b,86)) return MITER;
	if (inName==HX_("ROUND",2e,30,54,6b)) return ROUND;
	return super::__Field(inName,inCallProp);
}

static ::String JointStyle_obj_sStaticFields[] = {
	HX_("ROUND",2e,30,54,6b),
	HX_("MITER",e5,37,5b,86),
	HX_("BEVEL",5a,80,4f,2e),
	::String(null())
};

static void JointStyle_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(JointStyle_obj::BEVEL,"BEVEL");
	HX_MARK_MEMBER_NAME(JointStyle_obj::MITER,"MITER");
	HX_MARK_MEMBER_NAME(JointStyle_obj::ROUND,"ROUND");
};

#ifdef HXCPP_VISIT_ALLOCS
static void JointStyle_obj_sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(JointStyle_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(JointStyle_obj::BEVEL,"BEVEL");
	HX_VISIT_MEMBER_NAME(JointStyle_obj::MITER,"MITER");
	HX_VISIT_MEMBER_NAME(JointStyle_obj::ROUND,"ROUND");
};
#endif

hx::Class JointStyle_obj::__mClass;

Dynamic __Create_JointStyle_obj() { return new JointStyle_obj; }

void JointStyle_obj::__register()
{

hx::Static(__mClass) = hx::_hx_RegisterClass(HX_HCSTRING("openfl._legacy.display.JointStyle","\x37","\xc3","\xe9","\x45"), hx::TCanCast< JointStyle_obj >,JointStyle_obj_sStaticFields,0,
	&__Create_JointStyle_obj, &__Create,
	&super::__SGetClass(), &CreateJointStyle_obj, JointStyle_obj_sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , JointStyle_obj_sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &JointStyle_obj::__GetStatic;
}

void JointStyle_obj::__boot()
{
BEVEL = hx::CreateEnum< JointStyle_obj >(HX_HCSTRING("BEVEL","\x5a","\x80","\x4f","\x2e"),2,0);
MITER = hx::CreateEnum< JointStyle_obj >(HX_HCSTRING("MITER","\xe5","\x37","\x5b","\x86"),1,0);
ROUND = hx::CreateEnum< JointStyle_obj >(HX_HCSTRING("ROUND","\x2e","\x30","\x54","\x6b"),0,0);
}


} // end namespace openfl
} // end namespace _legacy
} // end namespace display
