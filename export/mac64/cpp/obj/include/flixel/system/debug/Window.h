// Generated by Haxe 3.4.2
#ifndef INCLUDED_flixel_system_debug_Window
#define INCLUDED_flixel_system_debug_Window

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl__legacy_display_Sprite
#include <openfl/_legacy/display/Sprite.h>
#endif
HX_DECLARE_CLASS3(flixel,_hx_system,debug,Window)
HX_DECLARE_CLASS3(flixel,_hx_system,ui,FlxSystemButton)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS3(openfl,_legacy,display,Bitmap)
HX_DECLARE_CLASS3(openfl,_legacy,display,BitmapData)
HX_DECLARE_CLASS3(openfl,_legacy,display,DisplayObject)
HX_DECLARE_CLASS3(openfl,_legacy,display,DisplayObjectContainer)
HX_DECLARE_CLASS3(openfl,_legacy,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,_legacy,display,InteractiveObject)
HX_DECLARE_CLASS3(openfl,_legacy,display,Sprite)
HX_DECLARE_CLASS3(openfl,_legacy,events,Event)
HX_DECLARE_CLASS3(openfl,_legacy,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,events,IEventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,events,MouseEvent)
HX_DECLARE_CLASS3(openfl,_legacy,geom,Point)
HX_DECLARE_CLASS3(openfl,_legacy,geom,Rectangle)
HX_DECLARE_CLASS3(openfl,_legacy,text,TextField)

namespace flixel{
namespace _hx_system{
namespace debug{


class HXCPP_CLASS_ATTRIBUTES Window_obj : public  ::openfl::_legacy::display::Sprite_obj
{
	public:
		typedef  ::openfl::_legacy::display::Sprite_obj super;
		typedef Window_obj OBJ_;
		Window_obj();

	public:
		enum { _hx_ClassId = 0x619ca9b8 };

		void __construct(::String Title, ::openfl::_legacy::display::BitmapData Icon,hx::Null< Float >  __o_Width,hx::Null< Float >  __o_Height,hx::Null< bool >  __o_Resizable, ::openfl::_legacy::geom::Rectangle Bounds,hx::Null< bool >  __o_Closable);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.system.debug.Window")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"flixel.system.debug.Window"); }
		static hx::ObjectPtr< Window_obj > __new(::String Title, ::openfl::_legacy::display::BitmapData Icon,hx::Null< Float >  __o_Width,hx::Null< Float >  __o_Height,hx::Null< bool >  __o_Resizable, ::openfl::_legacy::geom::Rectangle Bounds,hx::Null< bool >  __o_Closable);
		static hx::ObjectPtr< Window_obj > __alloc(hx::Ctx *_hx_ctx,::String Title, ::openfl::_legacy::display::BitmapData Icon,hx::Null< Float >  __o_Width,hx::Null< Float >  __o_Height,hx::Null< bool >  __o_Resizable, ::openfl::_legacy::geom::Rectangle Bounds,hx::Null< bool >  __o_Closable);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Window_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Window","\x10","\x08","\x21","\x87"); }

		static void __boot();
		static int BG_COLOR;
		static int HEADER_COLOR;
		static Float HEADER_ALPHA;
		static int HEADER_HEIGHT;
		static int WINDOW_AMOUNT;
		 ::openfl::_legacy::geom::Point minSize;
		 ::openfl::_legacy::geom::Point maxSize;
		 ::flixel::_hx_system::ui::FlxSystemButton toggleButton;
		int _width;
		int _height;
		 ::openfl::_legacy::geom::Rectangle _bounds;
		 ::openfl::_legacy::display::Bitmap _background;
		 ::openfl::_legacy::display::Bitmap _header;
		 ::openfl::_legacy::display::Bitmap _shadow;
		 ::openfl::_legacy::text::TextField _title;
		 ::openfl::_legacy::display::Bitmap _handle;
		 ::flixel::_hx_system::ui::FlxSystemButton _closeButton;
		bool _overHeader;
		bool _overHandle;
		 ::openfl::_legacy::geom::Point _drag;
		bool _dragging;
		bool _resizing;
		bool _resizable;
		bool _closable;
		int _id;
		virtual void destroy();
		::Dynamic destroy_dyn();

		void resize(Float Width,Float Height);
		::Dynamic resize_dyn();

		void reposition(Float X,Float Y);
		::Dynamic reposition_dyn();

		void updateBounds( ::openfl::_legacy::geom::Rectangle Bounds);
		::Dynamic updateBounds_dyn();

		void setVisible(bool Value);
		::Dynamic setVisible_dyn();

		virtual void toggleVisible();
		::Dynamic toggleVisible_dyn();

		void putOnTop();
		::Dynamic putOnTop_dyn();

		void loadSaveData();
		::Dynamic loadSaveData_dyn();

		void initSaveData();
		::Dynamic initSaveData_dyn();

		virtual void update();
		::Dynamic update_dyn();

		void init( ::openfl::_legacy::events::Event E);
		::Dynamic init_dyn();

		void onMouseMove( ::openfl::_legacy::events::MouseEvent E);
		::Dynamic onMouseMove_dyn();

		void onMouseDown( ::openfl::_legacy::events::MouseEvent E);
		::Dynamic onMouseDown_dyn();

		void onMouseUp( ::openfl::_legacy::events::MouseEvent E);
		::Dynamic onMouseUp_dyn();

		void bound();
		::Dynamic bound_dyn();

		void updateSize();
		::Dynamic updateSize_dyn();

		void close();
		::Dynamic close_dyn();

};

} // end namespace flixel
} // end namespace system
} // end namespace debug

#endif /* INCLUDED_flixel_system_debug_Window */ 
