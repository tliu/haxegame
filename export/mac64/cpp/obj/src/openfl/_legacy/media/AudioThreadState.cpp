// Generated by Haxe 3.4.2
#include <hxcpp.h>

#ifndef INCLUDED_Lambda
#include <Lambda.h>
#endif
#ifndef INCLUDED_cpp_vm_Mutex
#include <cpp/vm/Mutex.h>
#endif
#ifndef INCLUDED_cpp_vm_Thread
#include <cpp/vm/Thread.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_media_AudioThreadState
#include <openfl/_legacy/media/AudioThreadState.h>
#endif
#ifndef INCLUDED_openfl__legacy_media_SoundChannel
#include <openfl/_legacy/media/SoundChannel.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_d3f310d7f87f6475_352_new,"openfl._legacy.media.AudioThreadState","new",0x7864e3f1,"openfl._legacy.media.AudioThreadState.new","openfl/_legacy/media/SoundChannel.hx",352,0xd2a8ca59)
HX_LOCAL_STACK_FRAME(_hx_pos_d3f310d7f87f6475_362_add,"openfl._legacy.media.AudioThreadState","add",0x785b05b2,"openfl._legacy.media.AudioThreadState.add","openfl/_legacy/media/SoundChannel.hx",362,0xd2a8ca59)
HX_LOCAL_STACK_FRAME(_hx_pos_d3f310d7f87f6475_372_remove,"openfl._legacy.media.AudioThreadState","remove",0x1bfd5953,"openfl._legacy.media.AudioThreadState.remove","openfl/_legacy/media/SoundChannel.hx",372,0xd2a8ca59)
HX_LOCAL_STACK_FRAME(_hx_pos_d3f310d7f87f6475_401_updateComplete,"openfl._legacy.media.AudioThreadState","updateComplete",0xf710d7f1,"openfl._legacy.media.AudioThreadState.updateComplete","openfl/_legacy/media/SoundChannel.hx",401,0xd2a8ca59)
namespace openfl{
namespace _legacy{
namespace media{

void AudioThreadState_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_d3f310d7f87f6475_352_new)
HXLINE( 354)		this->mutex =  ::cpp::vm::Mutex_obj::__alloc( HX_CTX );
HXLINE( 355)		this->channelList = ::Array_obj< ::Dynamic>::__new(0);
            	}

Dynamic AudioThreadState_obj::__CreateEmpty() { return new AudioThreadState_obj; }

void *AudioThreadState_obj::_hx_vtable = 0;

Dynamic AudioThreadState_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< AudioThreadState_obj > _hx_result = new AudioThreadState_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool AudioThreadState_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x04fce981;
}

void AudioThreadState_obj::add( ::openfl::_legacy::media::SoundChannel channel){
            	HX_STACKFRAME(&_hx_pos_d3f310d7f87f6475_362_add)
HXDLIN( 362)		if (!(::Lambda_obj::has(this->channelList,channel))) {
HXLINE( 364)			this->channelList->push(channel);
HXLINE( 365)			::openfl::_legacy::media::SoundChannel_obj::_hx___audioThreadIsIdle = false;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(AudioThreadState_obj,add,(void))

void AudioThreadState_obj::remove( ::openfl::_legacy::media::SoundChannel channel){
            	HX_STACKFRAME(&_hx_pos_d3f310d7f87f6475_372_remove)
HXLINE( 374)		this->mutex->acquire();
HXLINE( 376)		if (::Lambda_obj::has(this->channelList,channel)) {
HXLINE( 379)			channel->_hx___addedToThread = false;
HXLINE( 382)			channel->_hx___thread_completed = true;
HXLINE( 385)			this->channelList->remove(channel);
HXLINE( 388)			if ((this->channelList->length == (int)0)) {
HXLINE( 390)				::openfl::_legacy::media::SoundChannel_obj::_hx___audioThreadIsIdle = true;
            			}
            		}
HXLINE( 396)		this->mutex->release();
            	}


HX_DEFINE_DYNAMIC_FUNC1(AudioThreadState_obj,remove,(void))

void AudioThreadState_obj::updateComplete(){
            	HX_STACKFRAME(&_hx_pos_d3f310d7f87f6475_401_updateComplete)
HXLINE( 403)		this->mutex->acquire();
HXLINE( 405)		{
HXLINE( 405)			int _g = (int)0;
HXDLIN( 405)			::Array< ::Dynamic> _g1 = this->channelList;
HXDLIN( 405)			while((_g < _g1->length)){
HXLINE( 405)				 ::openfl::_legacy::media::SoundChannel channel = _g1->__get(_g).StaticCast<  ::openfl::_legacy::media::SoundChannel >();
HXDLIN( 405)				_g = (_g + (int)1);
HXLINE( 407)				if (hx::IsNotNull( channel )) {
HXLINE( 409)					if (channel->_hx___runCheckComplete()) {
HXLINE( 410)						this->remove(channel);
            					}
            				}
            				else {
HXLINE( 415)					this->channelList->remove(channel);
            				}
            			}
            		}
HXLINE( 421)		this->mutex->release();
            	}


HX_DEFINE_DYNAMIC_FUNC0(AudioThreadState_obj,updateComplete,(void))


hx::ObjectPtr< AudioThreadState_obj > AudioThreadState_obj::__new() {
	hx::ObjectPtr< AudioThreadState_obj > __this = new AudioThreadState_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< AudioThreadState_obj > AudioThreadState_obj::__alloc(hx::Ctx *_hx_ctx) {
	AudioThreadState_obj *__this = (AudioThreadState_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(AudioThreadState_obj), true, "openfl._legacy.media.AudioThreadState"));
	*(void **)__this = AudioThreadState_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

AudioThreadState_obj::AudioThreadState_obj()
{
}

void AudioThreadState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AudioThreadState);
	HX_MARK_MEMBER_NAME(audioThread,"audioThread");
	HX_MARK_MEMBER_NAME(channelList,"channelList");
	HX_MARK_MEMBER_NAME(mainThread,"mainThread");
	HX_MARK_MEMBER_NAME(mutex,"mutex");
	HX_MARK_END_CLASS();
}

void AudioThreadState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(audioThread,"audioThread");
	HX_VISIT_MEMBER_NAME(channelList,"channelList");
	HX_VISIT_MEMBER_NAME(mainThread,"mainThread");
	HX_VISIT_MEMBER_NAME(mutex,"mutex");
}

hx::Val AudioThreadState_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return hx::Val( add_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"mutex") ) { return hx::Val( mutex ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"remove") ) { return hx::Val( remove_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"mainThread") ) { return hx::Val( mainThread ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"audioThread") ) { return hx::Val( audioThread ); }
		if (HX_FIELD_EQ(inName,"channelList") ) { return hx::Val( channelList ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"updateComplete") ) { return hx::Val( updateComplete_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val AudioThreadState_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"mutex") ) { mutex=inValue.Cast<  ::cpp::vm::Mutex >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"mainThread") ) { mainThread=inValue.Cast<  ::cpp::vm::Thread >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"audioThread") ) { audioThread=inValue.Cast<  ::cpp::vm::Thread >(); return inValue; }
		if (HX_FIELD_EQ(inName,"channelList") ) { channelList=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AudioThreadState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("audioThread","\x40","\xac","\x69","\x5d"));
	outFields->push(HX_HCSTRING("channelList","\xc1","\x66","\x81","\x17"));
	outFields->push(HX_HCSTRING("mainThread","\xe3","\x97","\x65","\xe4"));
	outFields->push(HX_HCSTRING("mutex","\x7f","\x8f","\x5b","\x10"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo AudioThreadState_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::cpp::vm::Thread*/ ,(int)offsetof(AudioThreadState_obj,audioThread),HX_HCSTRING("audioThread","\x40","\xac","\x69","\x5d")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(AudioThreadState_obj,channelList),HX_HCSTRING("channelList","\xc1","\x66","\x81","\x17")},
	{hx::fsObject /*::cpp::vm::Thread*/ ,(int)offsetof(AudioThreadState_obj,mainThread),HX_HCSTRING("mainThread","\xe3","\x97","\x65","\xe4")},
	{hx::fsObject /*::cpp::vm::Mutex*/ ,(int)offsetof(AudioThreadState_obj,mutex),HX_HCSTRING("mutex","\x7f","\x8f","\x5b","\x10")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *AudioThreadState_obj_sStaticStorageInfo = 0;
#endif

static ::String AudioThreadState_obj_sMemberFields[] = {
	HX_HCSTRING("audioThread","\x40","\xac","\x69","\x5d"),
	HX_HCSTRING("channelList","\xc1","\x66","\x81","\x17"),
	HX_HCSTRING("mainThread","\xe3","\x97","\x65","\xe4"),
	HX_HCSTRING("mutex","\x7f","\x8f","\x5b","\x10"),
	HX_HCSTRING("add","\x21","\xf2","\x49","\x00"),
	HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"),
	HX_HCSTRING("updateComplete","\xe2","\xf3","\xf1","\xb4"),
	::String(null()) };

static void AudioThreadState_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AudioThreadState_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void AudioThreadState_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AudioThreadState_obj::__mClass,"__mClass");
};

#endif

hx::Class AudioThreadState_obj::__mClass;

void AudioThreadState_obj::__register()
{
	hx::Object *dummy = new AudioThreadState_obj;
	AudioThreadState_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._legacy.media.AudioThreadState","\x7f","\x17","\x6e","\xb3");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = AudioThreadState_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(AudioThreadState_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< AudioThreadState_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = AudioThreadState_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = AudioThreadState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = AudioThreadState_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace _legacy
} // end namespace media
