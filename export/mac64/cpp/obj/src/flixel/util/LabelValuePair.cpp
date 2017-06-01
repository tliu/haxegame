// Generated by Haxe 3.4.2
#include <hxcpp.h>

#ifndef INCLUDED_flixel_util_FlxPool_flixel_util_LabelValuePair
#include <flixel/util/FlxPool_flixel_util_LabelValuePair.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPool
#include <flixel/util/IFlxPool.h>
#endif
#ifndef INCLUDED_flixel_util_LabelValuePair
#include <flixel/util/LabelValuePair.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_53443e31a49e57d3_633_new,"flixel.util.LabelValuePair","new",0x8e753503,"flixel.util.LabelValuePair.new","flixel/util/FlxStringUtil.hx",633,0x4e012e33)
HX_LOCAL_STACK_FRAME(_hx_pos_53443e31a49e57d3_615_create,"flixel.util.LabelValuePair","create",0x3da24a39,"flixel.util.LabelValuePair.create","flixel/util/FlxStringUtil.hx",615,0x4e012e33)
HX_LOCAL_STACK_FRAME(_hx_pos_53443e31a49e57d3_623_put,"flixel.util.LabelValuePair","put",0x8e76c772,"flixel.util.LabelValuePair.put","flixel/util/FlxStringUtil.hx",623,0x4e012e33)
HX_LOCAL_STACK_FRAME(_hx_pos_53443e31a49e57d3_627_destroy,"flixel.util.LabelValuePair","destroy",0xc37a1f1d,"flixel.util.LabelValuePair.destroy","flixel/util/FlxStringUtil.hx",627,0x4e012e33)
HX_LOCAL_STACK_FRAME(_hx_pos_53443e31a49e57d3_608_weak,"flixel.util.LabelValuePair","weak",0x1e0c0675,"flixel.util.LabelValuePair.weak","flixel/util/FlxStringUtil.hx",608,0x4e012e33)
HX_LOCAL_STACK_FRAME(_hx_pos_53443e31a49e57d3_604_boot,"flixel.util.LabelValuePair","boot",0x10322e2f,"flixel.util.LabelValuePair.boot","flixel/util/FlxStringUtil.hx",604,0x4e012e33)
namespace flixel{
namespace util{

void LabelValuePair_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_53443e31a49e57d3_633_new)
            	}

Dynamic LabelValuePair_obj::__CreateEmpty() { return new LabelValuePair_obj; }

void *LabelValuePair_obj::_hx_vtable = 0;

Dynamic LabelValuePair_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< LabelValuePair_obj > _hx_result = new LabelValuePair_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool LabelValuePair_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0c361495;
}

static ::flixel::util::IFlxDestroyable_obj _hx_flixel_util_LabelValuePair__hx_flixel_util_IFlxDestroyable= {
	( void (hx::Object::*)())&::flixel::util::LabelValuePair_obj::destroy,
};

void *LabelValuePair_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0xd4fe2fcd: return &_hx_flixel_util_LabelValuePair__hx_flixel_util_IFlxDestroyable;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

 ::flixel::util::LabelValuePair LabelValuePair_obj::create(::String label, ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_53443e31a49e57d3_615_create)
HXLINE( 616)		this->label = label;
HXLINE( 617)		this->value = value;
HXLINE( 618)		return hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC2(LabelValuePair_obj,create,return )

void LabelValuePair_obj::put(){
            	HX_STACKFRAME(&_hx_pos_53443e31a49e57d3_623_put)
HXDLIN( 623)		::flixel::util::LabelValuePair_obj::_pool->put(hx::ObjectPtr<OBJ_>(this));
            	}


HX_DEFINE_DYNAMIC_FUNC0(LabelValuePair_obj,put,(void))

void LabelValuePair_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_53443e31a49e57d3_627_destroy)
HXLINE( 628)		this->label = null();
HXLINE( 629)		this->value = null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(LabelValuePair_obj,destroy,(void))

 ::flixel::util::FlxPool_flixel_util_LabelValuePair LabelValuePair_obj::_pool;

 ::flixel::util::LabelValuePair LabelValuePair_obj::weak(::String label, ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_53443e31a49e57d3_608_weak)
HXDLIN( 608)		 ::flixel::util::LabelValuePair _this = ::flixel::util::LabelValuePair_obj::_pool->get();
HXDLIN( 608)		_this->label = label;
HXDLIN( 608)		_this->value = value;
HXDLIN( 608)		return _this;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(LabelValuePair_obj,weak,return )


hx::ObjectPtr< LabelValuePair_obj > LabelValuePair_obj::__new() {
	hx::ObjectPtr< LabelValuePair_obj > __this = new LabelValuePair_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< LabelValuePair_obj > LabelValuePair_obj::__alloc(hx::Ctx *_hx_ctx) {
	LabelValuePair_obj *__this = (LabelValuePair_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(LabelValuePair_obj), true, "flixel.util.LabelValuePair"));
	*(void **)__this = LabelValuePair_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

LabelValuePair_obj::LabelValuePair_obj()
{
}

void LabelValuePair_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(LabelValuePair);
	HX_MARK_MEMBER_NAME(label,"label");
	HX_MARK_MEMBER_NAME(value,"value");
	HX_MARK_END_CLASS();
}

void LabelValuePair_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(label,"label");
	HX_VISIT_MEMBER_NAME(value,"value");
}

hx::Val LabelValuePair_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"put") ) { return hx::Val( put_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"label") ) { return hx::Val( label ); }
		if (HX_FIELD_EQ(inName,"value") ) { return hx::Val( value ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return hx::Val( create_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return hx::Val( destroy_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool LabelValuePair_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"weak") ) { outValue = weak_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_pool") ) { outValue = ( _pool ); return true; }
	}
	return false;
}

hx::Val LabelValuePair_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"label") ) { label=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"value") ) { value=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool LabelValuePair_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_pool") ) { _pool=ioValue.Cast<  ::flixel::util::FlxPool_flixel_util_LabelValuePair >(); return true; }
	}
	return false;
}

void LabelValuePair_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("label","\xf4","\x0d","\xaf","\x6f"));
	outFields->push(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo LabelValuePair_obj_sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(LabelValuePair_obj,label),HX_HCSTRING("label","\xf4","\x0d","\xaf","\x6f")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(LabelValuePair_obj,value),HX_HCSTRING("value","\x71","\x7f","\xb8","\x31")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo LabelValuePair_obj_sStaticStorageInfo[] = {
	{hx::fsObject /*::flixel::util::FlxPool_flixel_util_LabelValuePair*/ ,(void *) &LabelValuePair_obj::_pool,HX_HCSTRING("_pool","\xbb","\x9c","\x6d","\xfd")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String LabelValuePair_obj_sMemberFields[] = {
	HX_HCSTRING("label","\xf4","\x0d","\xaf","\x6f"),
	HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"),
	HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"),
	HX_HCSTRING("put","\xcf","\x62","\x55","\x00"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	::String(null()) };

static void LabelValuePair_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(LabelValuePair_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(LabelValuePair_obj::_pool,"_pool");
};

#ifdef HXCPP_VISIT_ALLOCS
static void LabelValuePair_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(LabelValuePair_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(LabelValuePair_obj::_pool,"_pool");
};

#endif

hx::Class LabelValuePair_obj::__mClass;

static ::String LabelValuePair_obj_sStaticFields[] = {
	HX_HCSTRING("_pool","\xbb","\x9c","\x6d","\xfd"),
	HX_HCSTRING("weak","\x78","\x5c","\xf5","\x4e"),
	::String(null())
};

void LabelValuePair_obj::__register()
{
	hx::Object *dummy = new LabelValuePair_obj;
	LabelValuePair_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.util.LabelValuePair","\x91","\xf7","\xd7","\xc1");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &LabelValuePair_obj::__GetStatic;
	__mClass->mSetStaticField = &LabelValuePair_obj::__SetStatic;
	__mClass->mMarkFunc = LabelValuePair_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(LabelValuePair_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(LabelValuePair_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< LabelValuePair_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = LabelValuePair_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = LabelValuePair_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = LabelValuePair_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void LabelValuePair_obj::__boot()
{
{
            	HX_GC_STACKFRAME(&_hx_pos_53443e31a49e57d3_604_boot)
HXDLIN( 604)		_pool =  ::flixel::util::FlxPool_flixel_util_LabelValuePair_obj::__alloc( HX_CTX ,hx::ClassOf< ::flixel::util::LabelValuePair >());
            	}
}

} // end namespace flixel
} // end namespace util
