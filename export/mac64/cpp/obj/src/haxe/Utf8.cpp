// Generated by Haxe 3.4.2
#include <hxcpp.h>

#ifndef INCLUDED_haxe_Utf8
#include <haxe/Utf8.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_d2cdfdd1de365ca0_74_length,"haxe.Utf8","length",0x88322e1b,"haxe.Utf8.length","/usr/local/lib/haxe/std/cpp/_std/haxe/Utf8.hx",74,0xb2cec866)
HX_LOCAL_STACK_FRAME(_hx_pos_d2cdfdd1de365ca0_78_compare,"haxe.Utf8","compare",0x9f848dd0,"haxe.Utf8.compare","/usr/local/lib/haxe/std/cpp/_std/haxe/Utf8.hx",78,0xb2cec866)
HX_LOCAL_STACK_FRAME(_hx_pos_d2cdfdd1de365ca0_82_sub,"haxe.Utf8","sub",0x67d06d2b,"haxe.Utf8.sub","/usr/local/lib/haxe/std/cpp/_std/haxe/Utf8.hx",82,0xb2cec866)
namespace haxe{

void Utf8_obj::__construct() { }

Dynamic Utf8_obj::__CreateEmpty() { return new Utf8_obj; }

void *Utf8_obj::_hx_vtable = 0;

Dynamic Utf8_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Utf8_obj > _hx_result = new Utf8_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Utf8_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x11cee8b7;
}

int Utf8_obj::length(::String s){
            	HX_STACKFRAME(&_hx_pos_d2cdfdd1de365ca0_74_length)
HXDLIN(  74)		return _hx_utf8_length(s);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Utf8_obj,length,return )

int Utf8_obj::compare(::String a,::String b){
            	HX_STACKFRAME(&_hx_pos_d2cdfdd1de365ca0_78_compare)
HXDLIN(  78)		return _hx_string_compare(a,b);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Utf8_obj,compare,return )

::String Utf8_obj::sub(::String s,int pos,int len){
            	HX_STACKFRAME(&_hx_pos_d2cdfdd1de365ca0_82_sub)
HXDLIN(  82)		return _hx_utf8_sub(s,pos,len);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Utf8_obj,sub,return )


Utf8_obj::Utf8_obj()
{
}

bool Utf8_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"sub") ) { outValue = sub_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { outValue = length_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"compare") ) { outValue = compare_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *Utf8_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *Utf8_obj_sStaticStorageInfo = 0;
#endif

static void Utf8_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Utf8_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Utf8_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Utf8_obj::__mClass,"__mClass");
};

#endif

hx::Class Utf8_obj::__mClass;

static ::String Utf8_obj_sStaticFields[] = {
	HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"),
	HX_HCSTRING("compare","\xa5","\x18","\x69","\x83"),
	HX_HCSTRING("sub","\x80","\xa9","\x57","\x00"),
	::String(null())
};

void Utf8_obj::__register()
{
	hx::Object *dummy = new Utf8_obj;
	Utf8_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.Utf8","\x99","\x32","\x41","\xf3");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Utf8_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Utf8_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Utf8_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Utf8_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Utf8_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Utf8_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Utf8_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
