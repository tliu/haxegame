// Generated by Haxe 3.4.2
#ifndef INCLUDED_haxe_xml__Fast_HasAttribAccess
#define INCLUDED_haxe_xml__Fast_HasAttribAccess

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Xml)
HX_DECLARE_CLASS3(haxe,xml,_Fast,HasAttribAccess)

namespace haxe{
namespace xml{
namespace _Fast{


class HXCPP_CLASS_ATTRIBUTES HasAttribAccess_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef HasAttribAccess_obj OBJ_;
		HasAttribAccess_obj();

	public:
		enum { _hx_ClassId = 0x2a4cf61e };

		void __construct( ::Xml x);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.xml._Fast.HasAttribAccess")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"haxe.xml._Fast.HasAttribAccess"); }
		static hx::ObjectPtr< HasAttribAccess_obj > __new( ::Xml x);
		static hx::ObjectPtr< HasAttribAccess_obj > __alloc(hx::Ctx *_hx_ctx, ::Xml x);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~HasAttribAccess_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		HX_DECLARE_IMPLEMENT_DYNAMIC;
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("HasAttribAccess","\xe8","\xb6","\x0f","\xc8"); }

		 ::Xml _hx___x;
		bool resolve(::String name);
		::Dynamic resolve_dyn();

};

} // end namespace haxe
} // end namespace xml
} // end namespace _Fast

#endif /* INCLUDED_haxe_xml__Fast_HasAttribAccess */ 
