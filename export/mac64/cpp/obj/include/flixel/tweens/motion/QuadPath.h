// Generated by Haxe 3.4.2
#ifndef INCLUDED_flixel_tweens_motion_QuadPath
#define INCLUDED_flixel_tweens_motion_QuadPath

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_tweens_motion_Motion
#include <flixel/tweens/motion/Motion.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS2(flixel,math,FlxPoint)
HX_DECLARE_CLASS2(flixel,tweens,FlxTween)
HX_DECLARE_CLASS2(flixel,tweens,FlxTweenManager)
HX_DECLARE_CLASS3(flixel,tweens,motion,Motion)
HX_DECLARE_CLASS3(flixel,tweens,motion,QuadPath)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxPooled)

namespace flixel{
namespace tweens{
namespace motion{


class HXCPP_CLASS_ATTRIBUTES QuadPath_obj : public  ::flixel::tweens::motion::Motion_obj
{
	public:
		typedef  ::flixel::tweens::motion::Motion_obj super;
		typedef QuadPath_obj OBJ_;
		QuadPath_obj();

	public:
		enum { _hx_ClassId = 0x2cd27726 };

		void __construct( ::Dynamic Options, ::flixel::tweens::FlxTweenManager manager);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.tweens.motion.QuadPath")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"flixel.tweens.motion.QuadPath"); }
		static hx::ObjectPtr< QuadPath_obj > __new( ::Dynamic Options, ::flixel::tweens::FlxTweenManager manager);
		static hx::ObjectPtr< QuadPath_obj > __alloc(hx::Ctx *_hx_ctx, ::Dynamic Options, ::flixel::tweens::FlxTweenManager manager);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~QuadPath_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("QuadPath","\x2c","\x76","\x20","\xac"); }

		::Array< ::Dynamic> _points;
		Float _distance;
		Float _speed;
		int _index;
		int _numSegs;
		bool _updateCurve;
		::Array< Float > _curveT;
		::Array< Float > _curveD;
		 ::flixel::math::FlxPoint _a;
		 ::flixel::math::FlxPoint _b;
		 ::flixel::math::FlxPoint _c;
		void destroy();

		 ::flixel::tweens::motion::QuadPath setMotion(Float DurationOrSpeed,hx::Null< bool >  UseDuration);
		::Dynamic setMotion_dyn();

		 ::flixel::tweens::motion::QuadPath addPoint(hx::Null< Float >  x,hx::Null< Float >  y);
		::Dynamic addPoint_dyn();

		 ::flixel::math::FlxPoint getPoint(hx::Null< int >  index);
		::Dynamic getPoint_dyn();

		 ::flixel::tweens::FlxTween start();

		void update(Float elapsed);

		void updatePath();
		::Dynamic updatePath_dyn();

		Float getCurveLength( ::flixel::math::FlxPoint start, ::flixel::math::FlxPoint control, ::flixel::math::FlxPoint finish);
		::Dynamic getCurveLength_dyn();

};

} // end namespace flixel
} // end namespace tweens
} // end namespace motion

#endif /* INCLUDED_flixel_tweens_motion_QuadPath */ 
