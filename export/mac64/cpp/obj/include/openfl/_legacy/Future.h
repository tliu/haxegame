// Generated by Haxe 3.4.2
#ifndef INCLUDED_openfl__legacy_Future
#define INCLUDED_openfl__legacy_Future

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(openfl,_legacy,Future)

namespace openfl{
namespace _legacy{


class HXCPP_CLASS_ATTRIBUTES Future_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Future_obj OBJ_;
		Future_obj();

	public:
		enum { _hx_ClassId = 0x3b428ed7 };

		void __construct( ::Dynamic work);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl._legacy.Future")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"openfl._legacy.Future"); }
		static hx::ObjectPtr< Future_obj > __new( ::Dynamic work);
		static hx::ObjectPtr< Future_obj > __alloc(hx::Ctx *_hx_ctx, ::Dynamic work);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Future_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Future","\x63","\x0c","\xe3","\xa7"); }

		bool isCompleted;
		 ::Dynamic value;
		bool _hx___completed;
		::Array< ::Dynamic> _hx___completeListeners;
		bool _hx___errored;
		::Array< ::Dynamic> _hx___errorListeners;
		 ::Dynamic _hx___errorMessage;
		::Array< ::Dynamic> _hx___progressListeners;
		 ::openfl::_legacy::Future onComplete( ::Dynamic listener);
		::Dynamic onComplete_dyn();

		 ::openfl::_legacy::Future onError( ::Dynamic listener);
		::Dynamic onError_dyn();

		 ::openfl::_legacy::Future onProgress( ::Dynamic listener);
		::Dynamic onProgress_dyn();

		 ::openfl::_legacy::Future then( ::Dynamic next);
		::Dynamic then_dyn();

		bool get_isCompleted();
		::Dynamic get_isCompleted_dyn();

};

} // end namespace openfl
} // end namespace _legacy

#endif /* INCLUDED_openfl__legacy_Future */ 