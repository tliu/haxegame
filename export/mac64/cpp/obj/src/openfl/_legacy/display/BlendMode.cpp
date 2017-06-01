// Generated by Haxe 3.4.2
#include <hxcpp.h>

#ifndef INCLUDED_openfl__legacy_display_BlendMode
#include <openfl/_legacy/display/BlendMode.h>
#endif
namespace openfl{
namespace _legacy{
namespace display{

::openfl::_legacy::display::BlendMode BlendMode_obj::ADD;

::openfl::_legacy::display::BlendMode BlendMode_obj::ALPHA;

::openfl::_legacy::display::BlendMode BlendMode_obj::DARKEN;

::openfl::_legacy::display::BlendMode BlendMode_obj::DIFFERENCE;

::openfl::_legacy::display::BlendMode BlendMode_obj::ERASE;

::openfl::_legacy::display::BlendMode BlendMode_obj::HARDLIGHT;

::openfl::_legacy::display::BlendMode BlendMode_obj::INVERT;

::openfl::_legacy::display::BlendMode BlendMode_obj::LAYER;

::openfl::_legacy::display::BlendMode BlendMode_obj::LIGHTEN;

::openfl::_legacy::display::BlendMode BlendMode_obj::MULTIPLY;

::openfl::_legacy::display::BlendMode BlendMode_obj::NORMAL;

::openfl::_legacy::display::BlendMode BlendMode_obj::OVERLAY;

::openfl::_legacy::display::BlendMode BlendMode_obj::SCREEN;

::openfl::_legacy::display::BlendMode BlendMode_obj::SUBTRACT;

bool BlendMode_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	if (inName==HX_("ADD",01,8e,31,00)) { outValue = BlendMode_obj::ADD; return true; }
	if (inName==HX_("ALPHA",3e,df,84,9f)) { outValue = BlendMode_obj::ALPHA; return true; }
	if (inName==HX_("DARKEN",5f,e2,bc,d3)) { outValue = BlendMode_obj::DARKEN; return true; }
	if (inName==HX_("DIFFERENCE",fd,0f,9b,38)) { outValue = BlendMode_obj::DIFFERENCE; return true; }
	if (inName==HX_("ERASE",c6,20,0b,f1)) { outValue = BlendMode_obj::ERASE; return true; }
	if (inName==HX_("HARDLIGHT",eb,dd,c3,4e)) { outValue = BlendMode_obj::HARDLIGHT; return true; }
	if (inName==HX_("INVERT",16,93,5b,52)) { outValue = BlendMode_obj::INVERT; return true; }
	if (inName==HX_("LAYER",b1,b9,ae,ed)) { outValue = BlendMode_obj::LAYER; return true; }
	if (inName==HX_("LIGHTEN",9f,1e,b7,99)) { outValue = BlendMode_obj::LIGHTEN; return true; }
	if (inName==HX_("MULTIPLY",24,72,12,f4)) { outValue = BlendMode_obj::MULTIPLY; return true; }
	if (inName==HX_("NORMAL",27,1e,ec,e2)) { outValue = BlendMode_obj::NORMAL; return true; }
	if (inName==HX_("OVERLAY",70,17,e4,28)) { outValue = BlendMode_obj::OVERLAY; return true; }
	if (inName==HX_("SCREEN",6c,e7,df,f9)) { outValue = BlendMode_obj::SCREEN; return true; }
	if (inName==HX_("SUBTRACT",14,05,97,51)) { outValue = BlendMode_obj::SUBTRACT; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(BlendMode_obj)

int BlendMode_obj::__FindIndex(::String inName)
{
	if (inName==HX_("ADD",01,8e,31,00)) return 7;
	if (inName==HX_("ALPHA",3e,df,84,9f)) return 10;
	if (inName==HX_("DARKEN",5f,e2,bc,d3)) return 5;
	if (inName==HX_("DIFFERENCE",fd,0f,9b,38)) return 6;
	if (inName==HX_("ERASE",c6,20,0b,f1)) return 11;
	if (inName==HX_("HARDLIGHT",eb,dd,c3,4e)) return 13;
	if (inName==HX_("INVERT",16,93,5b,52)) return 9;
	if (inName==HX_("LAYER",b1,b9,ae,ed)) return 1;
	if (inName==HX_("LIGHTEN",9f,1e,b7,99)) return 4;
	if (inName==HX_("MULTIPLY",24,72,12,f4)) return 2;
	if (inName==HX_("NORMAL",27,1e,ec,e2)) return 0;
	if (inName==HX_("OVERLAY",70,17,e4,28)) return 12;
	if (inName==HX_("SCREEN",6c,e7,df,f9)) return 3;
	if (inName==HX_("SUBTRACT",14,05,97,51)) return 8;
	return super::__FindIndex(inName);
}

int BlendMode_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("ADD",01,8e,31,00)) return 0;
	if (inName==HX_("ALPHA",3e,df,84,9f)) return 0;
	if (inName==HX_("DARKEN",5f,e2,bc,d3)) return 0;
	if (inName==HX_("DIFFERENCE",fd,0f,9b,38)) return 0;
	if (inName==HX_("ERASE",c6,20,0b,f1)) return 0;
	if (inName==HX_("HARDLIGHT",eb,dd,c3,4e)) return 0;
	if (inName==HX_("INVERT",16,93,5b,52)) return 0;
	if (inName==HX_("LAYER",b1,b9,ae,ed)) return 0;
	if (inName==HX_("LIGHTEN",9f,1e,b7,99)) return 0;
	if (inName==HX_("MULTIPLY",24,72,12,f4)) return 0;
	if (inName==HX_("NORMAL",27,1e,ec,e2)) return 0;
	if (inName==HX_("OVERLAY",70,17,e4,28)) return 0;
	if (inName==HX_("SCREEN",6c,e7,df,f9)) return 0;
	if (inName==HX_("SUBTRACT",14,05,97,51)) return 0;
	return super::__FindArgCount(inName);
}

hx::Val BlendMode_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_("ADD",01,8e,31,00)) return ADD;
	if (inName==HX_("ALPHA",3e,df,84,9f)) return ALPHA;
	if (inName==HX_("DARKEN",5f,e2,bc,d3)) return DARKEN;
	if (inName==HX_("DIFFERENCE",fd,0f,9b,38)) return DIFFERENCE;
	if (inName==HX_("ERASE",c6,20,0b,f1)) return ERASE;
	if (inName==HX_("HARDLIGHT",eb,dd,c3,4e)) return HARDLIGHT;
	if (inName==HX_("INVERT",16,93,5b,52)) return INVERT;
	if (inName==HX_("LAYER",b1,b9,ae,ed)) return LAYER;
	if (inName==HX_("LIGHTEN",9f,1e,b7,99)) return LIGHTEN;
	if (inName==HX_("MULTIPLY",24,72,12,f4)) return MULTIPLY;
	if (inName==HX_("NORMAL",27,1e,ec,e2)) return NORMAL;
	if (inName==HX_("OVERLAY",70,17,e4,28)) return OVERLAY;
	if (inName==HX_("SCREEN",6c,e7,df,f9)) return SCREEN;
	if (inName==HX_("SUBTRACT",14,05,97,51)) return SUBTRACT;
	return super::__Field(inName,inCallProp);
}

static ::String BlendMode_obj_sStaticFields[] = {
	HX_("NORMAL",27,1e,ec,e2),
	HX_("LAYER",b1,b9,ae,ed),
	HX_("MULTIPLY",24,72,12,f4),
	HX_("SCREEN",6c,e7,df,f9),
	HX_("LIGHTEN",9f,1e,b7,99),
	HX_("DARKEN",5f,e2,bc,d3),
	HX_("DIFFERENCE",fd,0f,9b,38),
	HX_("ADD",01,8e,31,00),
	HX_("SUBTRACT",14,05,97,51),
	HX_("INVERT",16,93,5b,52),
	HX_("ALPHA",3e,df,84,9f),
	HX_("ERASE",c6,20,0b,f1),
	HX_("OVERLAY",70,17,e4,28),
	HX_("HARDLIGHT",eb,dd,c3,4e),
	::String(null())
};

static void BlendMode_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BlendMode_obj::ADD,"ADD");
	HX_MARK_MEMBER_NAME(BlendMode_obj::ALPHA,"ALPHA");
	HX_MARK_MEMBER_NAME(BlendMode_obj::DARKEN,"DARKEN");
	HX_MARK_MEMBER_NAME(BlendMode_obj::DIFFERENCE,"DIFFERENCE");
	HX_MARK_MEMBER_NAME(BlendMode_obj::ERASE,"ERASE");
	HX_MARK_MEMBER_NAME(BlendMode_obj::HARDLIGHT,"HARDLIGHT");
	HX_MARK_MEMBER_NAME(BlendMode_obj::INVERT,"INVERT");
	HX_MARK_MEMBER_NAME(BlendMode_obj::LAYER,"LAYER");
	HX_MARK_MEMBER_NAME(BlendMode_obj::LIGHTEN,"LIGHTEN");
	HX_MARK_MEMBER_NAME(BlendMode_obj::MULTIPLY,"MULTIPLY");
	HX_MARK_MEMBER_NAME(BlendMode_obj::NORMAL,"NORMAL");
	HX_MARK_MEMBER_NAME(BlendMode_obj::OVERLAY,"OVERLAY");
	HX_MARK_MEMBER_NAME(BlendMode_obj::SCREEN,"SCREEN");
	HX_MARK_MEMBER_NAME(BlendMode_obj::SUBTRACT,"SUBTRACT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void BlendMode_obj_sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BlendMode_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(BlendMode_obj::ADD,"ADD");
	HX_VISIT_MEMBER_NAME(BlendMode_obj::ALPHA,"ALPHA");
	HX_VISIT_MEMBER_NAME(BlendMode_obj::DARKEN,"DARKEN");
	HX_VISIT_MEMBER_NAME(BlendMode_obj::DIFFERENCE,"DIFFERENCE");
	HX_VISIT_MEMBER_NAME(BlendMode_obj::ERASE,"ERASE");
	HX_VISIT_MEMBER_NAME(BlendMode_obj::HARDLIGHT,"HARDLIGHT");
	HX_VISIT_MEMBER_NAME(BlendMode_obj::INVERT,"INVERT");
	HX_VISIT_MEMBER_NAME(BlendMode_obj::LAYER,"LAYER");
	HX_VISIT_MEMBER_NAME(BlendMode_obj::LIGHTEN,"LIGHTEN");
	HX_VISIT_MEMBER_NAME(BlendMode_obj::MULTIPLY,"MULTIPLY");
	HX_VISIT_MEMBER_NAME(BlendMode_obj::NORMAL,"NORMAL");
	HX_VISIT_MEMBER_NAME(BlendMode_obj::OVERLAY,"OVERLAY");
	HX_VISIT_MEMBER_NAME(BlendMode_obj::SCREEN,"SCREEN");
	HX_VISIT_MEMBER_NAME(BlendMode_obj::SUBTRACT,"SUBTRACT");
};
#endif

hx::Class BlendMode_obj::__mClass;

Dynamic __Create_BlendMode_obj() { return new BlendMode_obj; }

void BlendMode_obj::__register()
{

hx::Static(__mClass) = hx::_hx_RegisterClass(HX_HCSTRING("openfl._legacy.display.BlendMode","\xa4","\x16","\xb7","\xb7"), hx::TCanCast< BlendMode_obj >,BlendMode_obj_sStaticFields,0,
	&__Create_BlendMode_obj, &__Create,
	&super::__SGetClass(), &CreateBlendMode_obj, BlendMode_obj_sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , BlendMode_obj_sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &BlendMode_obj::__GetStatic;
}

void BlendMode_obj::__boot()
{
ADD = hx::CreateEnum< BlendMode_obj >(HX_HCSTRING("ADD","\x01","\x8e","\x31","\x00"),7,0);
ALPHA = hx::CreateEnum< BlendMode_obj >(HX_HCSTRING("ALPHA","\x3e","\xdf","\x84","\x9f"),10,0);
DARKEN = hx::CreateEnum< BlendMode_obj >(HX_HCSTRING("DARKEN","\x5f","\xe2","\xbc","\xd3"),5,0);
DIFFERENCE = hx::CreateEnum< BlendMode_obj >(HX_HCSTRING("DIFFERENCE","\xfd","\x0f","\x9b","\x38"),6,0);
ERASE = hx::CreateEnum< BlendMode_obj >(HX_HCSTRING("ERASE","\xc6","\x20","\x0b","\xf1"),11,0);
HARDLIGHT = hx::CreateEnum< BlendMode_obj >(HX_HCSTRING("HARDLIGHT","\xeb","\xdd","\xc3","\x4e"),13,0);
INVERT = hx::CreateEnum< BlendMode_obj >(HX_HCSTRING("INVERT","\x16","\x93","\x5b","\x52"),9,0);
LAYER = hx::CreateEnum< BlendMode_obj >(HX_HCSTRING("LAYER","\xb1","\xb9","\xae","\xed"),1,0);
LIGHTEN = hx::CreateEnum< BlendMode_obj >(HX_HCSTRING("LIGHTEN","\x9f","\x1e","\xb7","\x99"),4,0);
MULTIPLY = hx::CreateEnum< BlendMode_obj >(HX_HCSTRING("MULTIPLY","\x24","\x72","\x12","\xf4"),2,0);
NORMAL = hx::CreateEnum< BlendMode_obj >(HX_HCSTRING("NORMAL","\x27","\x1e","\xec","\xe2"),0,0);
OVERLAY = hx::CreateEnum< BlendMode_obj >(HX_HCSTRING("OVERLAY","\x70","\x17","\xe4","\x28"),12,0);
SCREEN = hx::CreateEnum< BlendMode_obj >(HX_HCSTRING("SCREEN","\x6c","\xe7","\xdf","\xf9"),3,0);
SUBTRACT = hx::CreateEnum< BlendMode_obj >(HX_HCSTRING("SUBTRACT","\x14","\x05","\x97","\x51"),8,0);
}


} // end namespace openfl
} // end namespace _legacy
} // end namespace display
