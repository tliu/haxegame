// Generated by Haxe 3.4.2
#ifndef INCLUDED___ASSET__flixel_sounds_flixel_ogg
#define INCLUDED___ASSET__flixel_sounds_flixel_ogg

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl__legacy_media_Sound
#include <openfl/_legacy/media/Sound.h>
#endif
HX_DECLARE_CLASS0(__ASSET__flixel_sounds_flixel_ogg)
HX_DECLARE_CLASS3(openfl,_legacy,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,events,IEventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,media,Sound)
HX_DECLARE_CLASS3(openfl,_legacy,net,URLRequest)
HX_DECLARE_CLASS2(openfl,media,SoundLoaderContext)



class HXCPP_CLASS_ATTRIBUTES __ASSET__flixel_sounds_flixel_ogg_obj : public  ::openfl::_legacy::media::Sound_obj
{
	public:
		typedef  ::openfl::_legacy::media::Sound_obj super;
		typedef __ASSET__flixel_sounds_flixel_ogg_obj OBJ_;
		__ASSET__flixel_sounds_flixel_ogg_obj();

	public:
		enum { _hx_ClassId = 0x02a7cb90 };

		void __construct( ::openfl::_legacy::net::URLRequest stream, ::openfl::media::SoundLoaderContext context, ::Dynamic __o_forcePlayAsMusic);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="__ASSET__flixel_sounds_flixel_ogg")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"__ASSET__flixel_sounds_flixel_ogg"); }
		static hx::ObjectPtr< __ASSET__flixel_sounds_flixel_ogg_obj > __new( ::openfl::_legacy::net::URLRequest stream, ::openfl::media::SoundLoaderContext context, ::Dynamic __o_forcePlayAsMusic);
		static hx::ObjectPtr< __ASSET__flixel_sounds_flixel_ogg_obj > __alloc(hx::Ctx *_hx_ctx, ::openfl::_legacy::net::URLRequest stream, ::openfl::media::SoundLoaderContext context, ::Dynamic __o_forcePlayAsMusic);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~__ASSET__flixel_sounds_flixel_ogg_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("__ASSET__flixel_sounds_flixel_ogg","\x74","\x84","\x25","\xe1"); }

		static void __boot();
		static ::String resourceName;
};


#endif /* INCLUDED___ASSET__flixel_sounds_flixel_ogg */ 
