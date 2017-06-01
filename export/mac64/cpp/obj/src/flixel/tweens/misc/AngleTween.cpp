// Generated by Haxe 3.4.2
#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTweenManager
#include <flixel/tweens/FlxTweenManager.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_AngleTween
#include <flixel/tweens/misc/AngleTween.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_f55a54b42a9231a6_9_new,"flixel.tweens.misc.AngleTween","new",0x28853ef8,"flixel.tweens.misc.AngleTween.new","flixel/tweens/misc/AngleTween.hx",9,0x989494f7)
HX_LOCAL_STACK_FRAME(_hx_pos_f55a54b42a9231a6_25_destroy,"flixel.tweens.misc.AngleTween","destroy",0x51eec792,"flixel.tweens.misc.AngleTween.destroy","flixel/tweens/misc/AngleTween.hx",25,0x989494f7)
HX_LOCAL_STACK_FRAME(_hx_pos_f55a54b42a9231a6_38_tween,"flixel.tweens.misc.AngleTween","tween",0xc3ccef03,"flixel.tweens.misc.AngleTween.tween","flixel/tweens/misc/AngleTween.hx",38,0x989494f7)
HX_LOCAL_STACK_FRAME(_hx_pos_f55a54b42a9231a6_52_update,"flixel.tweens.misc.AngleTween","update",0xed654671,"flixel.tweens.misc.AngleTween.update","flixel/tweens/misc/AngleTween.hx",52,0x989494f7)
namespace flixel{
namespace tweens{
namespace misc{

void AngleTween_obj::__construct( ::Dynamic Options, ::flixel::tweens::FlxTweenManager manager){
            	HX_STACKFRAME(&_hx_pos_f55a54b42a9231a6_9_new)
HXDLIN(   9)		super::__construct(Options,manager);
            	}

Dynamic AngleTween_obj::__CreateEmpty() { return new AngleTween_obj; }

void *AngleTween_obj::_hx_vtable = 0;

Dynamic AngleTween_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< AngleTween_obj > _hx_result = new AngleTween_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool AngleTween_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x123505a1) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x123505a1;
	} else {
		return inClassId==(int)0x54eebe4c;
	}
}

void AngleTween_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_f55a54b42a9231a6_25_destroy)
HXLINE(  26)		this->super::destroy();
HXLINE(  27)		this->sprite = null();
            	}


 ::flixel::tweens::misc::AngleTween AngleTween_obj::tween(Float FromAngle,Float ToAngle,Float Duration, ::flixel::FlxSprite Sprite){
            	HX_STACKFRAME(&_hx_pos_f55a54b42a9231a6_38_tween)
HXLINE(  39)		this->_start = (this->angle = FromAngle);
HXLINE(  40)		this->_range = (ToAngle - this->angle);
HXLINE(  41)		this->duration = Duration;
HXLINE(  42)		this->sprite = Sprite;
HXLINE(  43)		if (hx::IsNotNull( this->sprite )) {
HXLINE(  45)			 ::flixel::FlxSprite _hx_tmp = this->sprite;
HXDLIN(  45)			_hx_tmp->set_angle(hx::Mod(this->angle,(int)360));
            		}
HXLINE(  47)		this->start();
HXLINE(  48)		return hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC4(AngleTween_obj,tween,return )

void AngleTween_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_f55a54b42a9231a6_52_update)
HXLINE(  53)		this->super::update(elapsed);
HXLINE(  54)		Float _hx_tmp = this->_start;
HXDLIN(  54)		this->angle = (_hx_tmp + (this->_range * this->scale));
HXLINE(  56)		if (hx::IsNotNull( this->sprite )) {
HXLINE(  58)			Float spriteAngle = hx::Mod(this->angle,(int)360);
HXLINE(  59)			this->sprite->set_angle(spriteAngle);
            		}
            	}



hx::ObjectPtr< AngleTween_obj > AngleTween_obj::__new( ::Dynamic Options, ::flixel::tweens::FlxTweenManager manager) {
	hx::ObjectPtr< AngleTween_obj > __this = new AngleTween_obj();
	__this->__construct(Options,manager);
	return __this;
}

hx::ObjectPtr< AngleTween_obj > AngleTween_obj::__alloc(hx::Ctx *_hx_ctx, ::Dynamic Options, ::flixel::tweens::FlxTweenManager manager) {
	AngleTween_obj *__this = (AngleTween_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(AngleTween_obj), true, "flixel.tweens.misc.AngleTween"));
	*(void **)__this = AngleTween_obj::_hx_vtable;
	__this->__construct(Options,manager);
	return __this;
}

AngleTween_obj::AngleTween_obj()
{
}

void AngleTween_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AngleTween);
	HX_MARK_MEMBER_NAME(angle,"angle");
	HX_MARK_MEMBER_NAME(sprite,"sprite");
	HX_MARK_MEMBER_NAME(_start,"_start");
	HX_MARK_MEMBER_NAME(_range,"_range");
	 ::flixel::tweens::FlxTween_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void AngleTween_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(angle,"angle");
	HX_VISIT_MEMBER_NAME(sprite,"sprite");
	HX_VISIT_MEMBER_NAME(_start,"_start");
	HX_VISIT_MEMBER_NAME(_range,"_range");
	 ::flixel::tweens::FlxTween_obj::__Visit(HX_VISIT_ARG);
}

hx::Val AngleTween_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"angle") ) { return hx::Val( angle ); }
		if (HX_FIELD_EQ(inName,"tween") ) { return hx::Val( tween_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"sprite") ) { return hx::Val( sprite ); }
		if (HX_FIELD_EQ(inName,"_start") ) { return hx::Val( _start ); }
		if (HX_FIELD_EQ(inName,"_range") ) { return hx::Val( _range ); }
		if (HX_FIELD_EQ(inName,"update") ) { return hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return hx::Val( destroy_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val AngleTween_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"angle") ) { angle=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"sprite") ) { sprite=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_start") ) { _start=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_range") ) { _range=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AngleTween_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("angle","\xd3","\x43","\xe2","\x22"));
	outFields->push(HX_HCSTRING("sprite","\x05","\xdc","\x95","\xc3"));
	outFields->push(HX_HCSTRING("_start","\xa3","\xbb","\xf2","\x7f"));
	outFields->push(HX_HCSTRING("_range","\xfe","\xec","\x06","\xe0"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo AngleTween_obj_sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(AngleTween_obj,angle),HX_HCSTRING("angle","\xd3","\x43","\xe2","\x22")},
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(AngleTween_obj,sprite),HX_HCSTRING("sprite","\x05","\xdc","\x95","\xc3")},
	{hx::fsFloat,(int)offsetof(AngleTween_obj,_start),HX_HCSTRING("_start","\xa3","\xbb","\xf2","\x7f")},
	{hx::fsFloat,(int)offsetof(AngleTween_obj,_range),HX_HCSTRING("_range","\xfe","\xec","\x06","\xe0")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *AngleTween_obj_sStaticStorageInfo = 0;
#endif

static ::String AngleTween_obj_sMemberFields[] = {
	HX_HCSTRING("angle","\xd3","\x43","\xe2","\x22"),
	HX_HCSTRING("sprite","\x05","\xdc","\x95","\xc3"),
	HX_HCSTRING("_start","\xa3","\xbb","\xf2","\x7f"),
	HX_HCSTRING("_range","\xfe","\xec","\x06","\xe0"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("tween","\x6b","\xaa","\x70","\x19"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	::String(null()) };

static void AngleTween_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AngleTween_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void AngleTween_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AngleTween_obj::__mClass,"__mClass");
};

#endif

hx::Class AngleTween_obj::__mClass;

void AngleTween_obj::__register()
{
	hx::Object *dummy = new AngleTween_obj;
	AngleTween_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.tweens.misc.AngleTween","\x06","\xa3","\xd4","\x4a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = AngleTween_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(AngleTween_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< AngleTween_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = AngleTween_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = AngleTween_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = AngleTween_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace tweens
} // end namespace misc
