// Generated by Haxe 3.4.2
#include <hxcpp.h>

#ifndef INCLUDED_openfl__legacy_AssetType
#include <openfl/_legacy/AssetType.h>
#endif
namespace openfl{
namespace _legacy{

::openfl::_legacy::AssetType AssetType_obj::BINARY;

::openfl::_legacy::AssetType AssetType_obj::FONT;

::openfl::_legacy::AssetType AssetType_obj::IMAGE;

::openfl::_legacy::AssetType AssetType_obj::MOVIE_CLIP;

::openfl::_legacy::AssetType AssetType_obj::MUSIC;

::openfl::_legacy::AssetType AssetType_obj::SOUND;

::openfl::_legacy::AssetType AssetType_obj::TEMPLATE;

::openfl::_legacy::AssetType AssetType_obj::TEXT;

bool AssetType_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	if (inName==HX_("BINARY",01,68,8e,9f)) { outValue = AssetType_obj::BINARY; return true; }
	if (inName==HX_("FONT",cf,25,81,2e)) { outValue = AssetType_obj::FONT; return true; }
	if (inName==HX_("IMAGE",3b,57,57,3b)) { outValue = AssetType_obj::IMAGE; return true; }
	if (inName==HX_("MOVIE_CLIP",1f,e1,aa,77)) { outValue = AssetType_obj::MOVIE_CLIP; return true; }
	if (inName==HX_("MUSIC",85,08,49,8e)) { outValue = AssetType_obj::MUSIC; return true; }
	if (inName==HX_("SOUND",af,c4,ba,fe)) { outValue = AssetType_obj::SOUND; return true; }
	if (inName==HX_("TEMPLATE",3a,78,cd,05)) { outValue = AssetType_obj::TEMPLATE; return true; }
	if (inName==HX_("TEXT",ad,94,ba,37)) { outValue = AssetType_obj::TEXT; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(AssetType_obj)

int AssetType_obj::__FindIndex(::String inName)
{
	if (inName==HX_("BINARY",01,68,8e,9f)) return 0;
	if (inName==HX_("FONT",cf,25,81,2e)) return 1;
	if (inName==HX_("IMAGE",3b,57,57,3b)) return 2;
	if (inName==HX_("MOVIE_CLIP",1f,e1,aa,77)) return 3;
	if (inName==HX_("MUSIC",85,08,49,8e)) return 4;
	if (inName==HX_("SOUND",af,c4,ba,fe)) return 5;
	if (inName==HX_("TEMPLATE",3a,78,cd,05)) return 6;
	if (inName==HX_("TEXT",ad,94,ba,37)) return 7;
	return super::__FindIndex(inName);
}

int AssetType_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("BINARY",01,68,8e,9f)) return 0;
	if (inName==HX_("FONT",cf,25,81,2e)) return 0;
	if (inName==HX_("IMAGE",3b,57,57,3b)) return 0;
	if (inName==HX_("MOVIE_CLIP",1f,e1,aa,77)) return 0;
	if (inName==HX_("MUSIC",85,08,49,8e)) return 0;
	if (inName==HX_("SOUND",af,c4,ba,fe)) return 0;
	if (inName==HX_("TEMPLATE",3a,78,cd,05)) return 0;
	if (inName==HX_("TEXT",ad,94,ba,37)) return 0;
	return super::__FindArgCount(inName);
}

hx::Val AssetType_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_("BINARY",01,68,8e,9f)) return BINARY;
	if (inName==HX_("FONT",cf,25,81,2e)) return FONT;
	if (inName==HX_("IMAGE",3b,57,57,3b)) return IMAGE;
	if (inName==HX_("MOVIE_CLIP",1f,e1,aa,77)) return MOVIE_CLIP;
	if (inName==HX_("MUSIC",85,08,49,8e)) return MUSIC;
	if (inName==HX_("SOUND",af,c4,ba,fe)) return SOUND;
	if (inName==HX_("TEMPLATE",3a,78,cd,05)) return TEMPLATE;
	if (inName==HX_("TEXT",ad,94,ba,37)) return TEXT;
	return super::__Field(inName,inCallProp);
}

static ::String AssetType_obj_sStaticFields[] = {
	HX_("BINARY",01,68,8e,9f),
	HX_("FONT",cf,25,81,2e),
	HX_("IMAGE",3b,57,57,3b),
	HX_("MOVIE_CLIP",1f,e1,aa,77),
	HX_("MUSIC",85,08,49,8e),
	HX_("SOUND",af,c4,ba,fe),
	HX_("TEMPLATE",3a,78,cd,05),
	HX_("TEXT",ad,94,ba,37),
	::String(null())
};

static void AssetType_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AssetType_obj::BINARY,"BINARY");
	HX_MARK_MEMBER_NAME(AssetType_obj::FONT,"FONT");
	HX_MARK_MEMBER_NAME(AssetType_obj::IMAGE,"IMAGE");
	HX_MARK_MEMBER_NAME(AssetType_obj::MOVIE_CLIP,"MOVIE_CLIP");
	HX_MARK_MEMBER_NAME(AssetType_obj::MUSIC,"MUSIC");
	HX_MARK_MEMBER_NAME(AssetType_obj::SOUND,"SOUND");
	HX_MARK_MEMBER_NAME(AssetType_obj::TEMPLATE,"TEMPLATE");
	HX_MARK_MEMBER_NAME(AssetType_obj::TEXT,"TEXT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void AssetType_obj_sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AssetType_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(AssetType_obj::BINARY,"BINARY");
	HX_VISIT_MEMBER_NAME(AssetType_obj::FONT,"FONT");
	HX_VISIT_MEMBER_NAME(AssetType_obj::IMAGE,"IMAGE");
	HX_VISIT_MEMBER_NAME(AssetType_obj::MOVIE_CLIP,"MOVIE_CLIP");
	HX_VISIT_MEMBER_NAME(AssetType_obj::MUSIC,"MUSIC");
	HX_VISIT_MEMBER_NAME(AssetType_obj::SOUND,"SOUND");
	HX_VISIT_MEMBER_NAME(AssetType_obj::TEMPLATE,"TEMPLATE");
	HX_VISIT_MEMBER_NAME(AssetType_obj::TEXT,"TEXT");
};
#endif

hx::Class AssetType_obj::__mClass;

Dynamic __Create_AssetType_obj() { return new AssetType_obj; }

void AssetType_obj::__register()
{

hx::Static(__mClass) = hx::_hx_RegisterClass(HX_HCSTRING("openfl._legacy.AssetType","\x46","\x9c","\x83","\xab"), hx::TCanCast< AssetType_obj >,AssetType_obj_sStaticFields,0,
	&__Create_AssetType_obj, &__Create,
	&super::__SGetClass(), &CreateAssetType_obj, AssetType_obj_sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , AssetType_obj_sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &AssetType_obj::__GetStatic;
}

void AssetType_obj::__boot()
{
BINARY = hx::CreateEnum< AssetType_obj >(HX_HCSTRING("BINARY","\x01","\x68","\x8e","\x9f"),0,0);
FONT = hx::CreateEnum< AssetType_obj >(HX_HCSTRING("FONT","\xcf","\x25","\x81","\x2e"),1,0);
IMAGE = hx::CreateEnum< AssetType_obj >(HX_HCSTRING("IMAGE","\x3b","\x57","\x57","\x3b"),2,0);
MOVIE_CLIP = hx::CreateEnum< AssetType_obj >(HX_HCSTRING("MOVIE_CLIP","\x1f","\xe1","\xaa","\x77"),3,0);
MUSIC = hx::CreateEnum< AssetType_obj >(HX_HCSTRING("MUSIC","\x85","\x08","\x49","\x8e"),4,0);
SOUND = hx::CreateEnum< AssetType_obj >(HX_HCSTRING("SOUND","\xaf","\xc4","\xba","\xfe"),5,0);
TEMPLATE = hx::CreateEnum< AssetType_obj >(HX_HCSTRING("TEMPLATE","\x3a","\x78","\xcd","\x05"),6,0);
TEXT = hx::CreateEnum< AssetType_obj >(HX_HCSTRING("TEXT","\xad","\x94","\xba","\x37"),7,0);
}


} // end namespace openfl
} // end namespace _legacy
