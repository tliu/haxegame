// Generated by Haxe 3.4.2
#include <hxcpp.h>

#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED_haxe_io_Output
#include <haxe/io/Output.h>
#endif
#ifndef INCLUDED_sys_io_FileOutput
#include <sys/io/FileOutput.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_39f5eab4124248fe_31_println,"Sys","println",0x3905f76e,"Sys.println","/usr/local/lib/haxe/std/cpp/_std/Sys.hx",31,0xd23c22f3)
HX_LOCAL_STACK_FRAME(_hx_pos_39f5eab4124248fe_46_stderr,"Sys","stderr",0x3eb04003,"Sys.stderr","/usr/local/lib/haxe/std/cpp/_std/Sys.hx",46,0xd23c22f3)
HX_LOCAL_STACK_FRAME(_hx_pos_39f5eab4124248fe_54_args,"Sys","args",0xeaeddc7e,"Sys.args","/usr/local/lib/haxe/std/cpp/_std/Sys.hx",54,0xd23c22f3)
HX_LOCAL_STACK_FRAME(_hx_pos_39f5eab4124248fe_69_sleep,"Sys","sleep",0xfe70aad6,"Sys.sleep","/usr/local/lib/haxe/std/cpp/_std/Sys.hx",69,0xd23c22f3)
HX_LOCAL_STACK_FRAME(_hx_pos_39f5eab4124248fe_77_getCwd,"Sys","getCwd",0xd9ded99b,"Sys.getCwd","/usr/local/lib/haxe/std/cpp/_std/Sys.hx",77,0xd23c22f3)
HX_LOCAL_STACK_FRAME(_hx_pos_39f5eab4124248fe_81_setCwd,"Sys","setCwd",0xa6272e0f,"Sys.setCwd","/usr/local/lib/haxe/std/cpp/_std/Sys.hx",81,0xd23c22f3)
HX_LOCAL_STACK_FRAME(_hx_pos_39f5eab4124248fe_107_exit,"Sys","exit",0xed97463f,"Sys.exit","/usr/local/lib/haxe/std/cpp/_std/Sys.hx",107,0xd23c22f3)

void Sys_obj::__construct() { }

Dynamic Sys_obj::__CreateEmpty() { return new Sys_obj; }

void *Sys_obj::_hx_vtable = 0;

Dynamic Sys_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Sys_obj > _hx_result = new Sys_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Sys_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x003f64ed;
}

void Sys_obj::println( ::Dynamic v){
            	HX_STACKFRAME(&_hx_pos_39f5eab4124248fe_31_println)
HXDLIN(  31)		::__hxcpp_println(v);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Sys_obj,println,(void))

 ::haxe::io::Output Sys_obj::_hx_stderr(){
            	HX_GC_STACKFRAME(&_hx_pos_39f5eab4124248fe_46_stderr)
HXDLIN(  46)		return  ::sys::io::FileOutput_obj::__alloc( HX_CTX ,_hx_std_file_stderr());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Sys_obj,_hx_stderr,return )

::Array< ::String > Sys_obj::args(){
            	HX_STACKFRAME(&_hx_pos_39f5eab4124248fe_54_args)
HXDLIN(  54)		return ::__get_args();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Sys_obj,args,return )

void Sys_obj::sleep(Float seconds){
            	HX_STACKFRAME(&_hx_pos_39f5eab4124248fe_69_sleep)
HXDLIN(  69)		_hx_std_sys_sleep(seconds);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Sys_obj,sleep,(void))

::String Sys_obj::getCwd(){
            	HX_STACKFRAME(&_hx_pos_39f5eab4124248fe_77_getCwd)
HXDLIN(  77)		return _hx_std_get_cwd();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Sys_obj,getCwd,return )

void Sys_obj::setCwd(::String s){
            	HX_STACKFRAME(&_hx_pos_39f5eab4124248fe_81_setCwd)
HXDLIN(  81)		_hx_std_set_cwd(s);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Sys_obj,setCwd,(void))

void Sys_obj::exit(int code){
            	HX_STACKFRAME(&_hx_pos_39f5eab4124248fe_107_exit)
HXDLIN( 107)		::__hxcpp_exit(code);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Sys_obj,exit,(void))


Sys_obj::Sys_obj()
{
}

bool Sys_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"args") ) { outValue = args_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"exit") ) { outValue = exit_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"sleep") ) { outValue = sleep_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"stderr") ) { outValue = _hx_stderr_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getCwd") ) { outValue = getCwd_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"setCwd") ) { outValue = setCwd_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"println") ) { outValue = println_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *Sys_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *Sys_obj_sStaticStorageInfo = 0;
#endif

static void Sys_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Sys_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Sys_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Sys_obj::__mClass,"__mClass");
};

#endif

hx::Class Sys_obj::__mClass;

static ::String Sys_obj_sStaticFields[] = {
	HX_HCSTRING("println","\xef","\xdb","\x33","\x84"),
	HX_HCSTRING("stderr","\xa2","\x26","\xec","\x07"),
	HX_HCSTRING("args","\x5d","\x8d","\x74","\x40"),
	HX_HCSTRING("sleep","\x17","\xbd","\xc4","\x7e"),
	HX_HCSTRING("getCwd","\x3a","\xc0","\x1a","\xa3"),
	HX_HCSTRING("setCwd","\xae","\x14","\x63","\x6f"),
	HX_HCSTRING("exit","\x1e","\xf7","\x1d","\x43"),
	::String(null())
};

void Sys_obj::__register()
{
	hx::Object *dummy = new Sys_obj;
	Sys_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("Sys","\xed","\x64","\x3f","\x00");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Sys_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Sys_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Sys_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Sys_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Sys_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Sys_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Sys_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

