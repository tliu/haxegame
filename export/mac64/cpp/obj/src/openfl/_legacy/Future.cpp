// Generated by Haxe 3.4.2
#include <hxcpp.h>

#ifndef INCLUDED_openfl__legacy_Future
#include <openfl/_legacy/Future.h>
#endif
#ifndef INCLUDED_openfl__legacy_Promise
#include <openfl/_legacy/Promise.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_78e25bd7169acb7a_1694_new,"openfl._legacy.Future","new",0x6d0ac7b9,"openfl._legacy.Future.new","openfl/_legacy/Assets.hx",1694,0x9276b055)
HX_LOCAL_STACK_FRAME(_hx_pos_78e25bd7169acb7a_1715_onComplete,"openfl._legacy.Future","onComplete",0x222e6abf,"openfl._legacy.Future.onComplete","openfl/_legacy/Assets.hx",1715,0x9276b055)
HX_LOCAL_STACK_FRAME(_hx_pos_78e25bd7169acb7a_1742_onError,"openfl._legacy.Future","onError",0x410f8202,"openfl._legacy.Future.onError","openfl/_legacy/Assets.hx",1742,0x9276b055)
HX_LOCAL_STACK_FRAME(_hx_pos_78e25bd7169acb7a_1769_onProgress,"openfl._legacy.Future","onProgress",0x289161b3,"openfl._legacy.Future.onProgress","openfl/_legacy/Assets.hx",1769,0x9276b055)
HX_LOCAL_STACK_FRAME(_hx_pos_78e25bd7169acb7a_1790_then,"openfl._legacy.Future","then",0x005d7964,"openfl._legacy.Future.then","openfl/_legacy/Assets.hx",1790,0x9276b055)
HX_LOCAL_STACK_FRAME(_hx_pos_78e25bd7169acb7a_1807_then,"openfl._legacy.Future","then",0x005d7964,"openfl._legacy.Future.then","openfl/_legacy/Assets.hx",1807,0x9276b055)
HX_LOCAL_STACK_FRAME(_hx_pos_78e25bd7169acb7a_1831_get_isCompleted,"openfl._legacy.Future","get_isCompleted",0x8d5428b1,"openfl._legacy.Future.get_isCompleted","openfl/_legacy/Assets.hx",1831,0x9276b055)
namespace openfl{
namespace _legacy{

void Future_obj::__construct( ::Dynamic work){
            	HX_GC_STACKFRAME(&_hx_pos_78e25bd7169acb7a_1694_new)
HXDLIN(1694)		if (hx::IsNotNull( work )) {
HXLINE(1696)			 ::openfl::_legacy::Promise promise =  ::openfl::_legacy::Promise_obj::__alloc( HX_CTX );
HXLINE(1697)			promise->future = hx::ObjectPtr<OBJ_>(this);
HXLINE(1699)			try {
            				HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE(1701)				 ::Dynamic result = work();
HXLINE(1702)				promise->complete(result);
            			}
            			catch( ::Dynamic _hx_e){
            				if (_hx_e.IsClass<  ::Dynamic >() ){
            					HX_STACK_BEGIN_CATCH
            					 ::Dynamic e = _hx_e;
HXLINE(1706)					promise->error(e);
            				}
            				else {
            					HX_STACK_DO_THROW(_hx_e);
            				}
            			}
            		}
            	}

Dynamic Future_obj::__CreateEmpty() { return new Future_obj; }

void *Future_obj::_hx_vtable = 0;

Dynamic Future_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Future_obj > _hx_result = new Future_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool Future_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x3b428ed7;
}

 ::openfl::_legacy::Future Future_obj::onComplete( ::Dynamic listener){
            	HX_STACKFRAME(&_hx_pos_78e25bd7169acb7a_1715_onComplete)
HXLINE(1717)		if (hx::IsNotNull( listener )) {
HXLINE(1719)			if (this->_hx___completed) {
HXLINE(1721)				listener(this->value);
            			}
            			else {
HXLINE(1723)				if (!(this->_hx___errored)) {
HXLINE(1725)					if (hx::IsNull( this->_hx___completeListeners )) {
HXLINE(1727)						this->_hx___completeListeners = ::Array_obj< ::Dynamic>::__new();
            					}
HXLINE(1731)					this->_hx___completeListeners->push(listener);
            				}
            			}
            		}
HXLINE(1737)		return hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Future_obj,onComplete,return )

 ::openfl::_legacy::Future Future_obj::onError( ::Dynamic listener){
            	HX_STACKFRAME(&_hx_pos_78e25bd7169acb7a_1742_onError)
HXLINE(1744)		if (hx::IsNotNull( listener )) {
HXLINE(1746)			if (this->_hx___errored) {
HXLINE(1748)				listener(this->_hx___errorMessage);
            			}
            			else {
HXLINE(1750)				if (!(this->_hx___completed)) {
HXLINE(1752)					if (hx::IsNull( this->_hx___errorListeners )) {
HXLINE(1754)						this->_hx___errorListeners = ::Array_obj< ::Dynamic>::__new();
            					}
HXLINE(1758)					this->_hx___errorListeners->push(listener);
            				}
            			}
            		}
HXLINE(1764)		return hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Future_obj,onError,return )

 ::openfl::_legacy::Future Future_obj::onProgress( ::Dynamic listener){
            	HX_STACKFRAME(&_hx_pos_78e25bd7169acb7a_1769_onProgress)
HXLINE(1771)		if (hx::IsNotNull( listener )) {
HXLINE(1773)			if (hx::IsNull( this->_hx___progressListeners )) {
HXLINE(1775)				this->_hx___progressListeners = ::Array_obj< ::Dynamic>::__new();
            			}
HXLINE(1779)			this->_hx___progressListeners->push(listener);
            		}
HXLINE(1783)		return hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Future_obj,onProgress,return )

 ::openfl::_legacy::Future Future_obj::then( ::Dynamic next){
            	HX_GC_STACKFRAME(&_hx_pos_78e25bd7169acb7a_1790_then)
HXDLIN(1790)		if (this->_hx___completed) {
HXLINE(1792)			return ( ( ::openfl::_legacy::Future)(next(this->value)) );
            		}
            		else {
HXLINE(1794)			if (this->_hx___errored) {
HXLINE(1796)				 ::openfl::_legacy::Future future =  ::openfl::_legacy::Future_obj::__alloc( HX_CTX ,null());
HXLINE(1797)				future->onError(this->_hx___errorMessage);
HXLINE(1798)				return future;
            			}
            			else {
            				HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_hx_Closure_0, ::Dynamic,next, ::openfl::_legacy::Promise,promise) HXARGC(1)
            				void _hx_run( ::Dynamic val){
            					HX_GC_STACKFRAME(&_hx_pos_78e25bd7169acb7a_1807_then)
HXLINE(1809)					 ::openfl::_legacy::Future future1 = ( ( ::openfl::_legacy::Future)(next(val)) );
HXLINE(1810)					future1->onError(promise->error_dyn());
HXLINE(1811)					future1->onComplete(promise->complete_dyn());
            				}
            				HX_END_LOCAL_FUNC1((void))

HXLINE(1802)				 ::openfl::_legacy::Promise promise =  ::openfl::_legacy::Promise_obj::__alloc( HX_CTX );
HXLINE(1804)				this->onError(promise->error_dyn());
HXLINE(1805)				this->onProgress(promise->progress_dyn());
HXLINE(1807)				this->onComplete( ::Dynamic(new _hx_Closure_0(next,promise)));
HXLINE(1815)				return promise->future;
            			}
            		}
HXLINE(1790)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Future_obj,then,return )

bool Future_obj::get_isCompleted(){
            	HX_STACKFRAME(&_hx_pos_78e25bd7169acb7a_1831_get_isCompleted)
HXDLIN(1831)		if (!(this->_hx___completed)) {
HXDLIN(1831)			return this->_hx___errored;
            		}
            		else {
HXDLIN(1831)			return true;
            		}
HXDLIN(1831)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Future_obj,get_isCompleted,return )


hx::ObjectPtr< Future_obj > Future_obj::__new( ::Dynamic work) {
	hx::ObjectPtr< Future_obj > __this = new Future_obj();
	__this->__construct(work);
	return __this;
}

hx::ObjectPtr< Future_obj > Future_obj::__alloc(hx::Ctx *_hx_ctx, ::Dynamic work) {
	Future_obj *__this = (Future_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Future_obj), true, "openfl._legacy.Future"));
	*(void **)__this = Future_obj::_hx_vtable;
	__this->__construct(work);
	return __this;
}

Future_obj::Future_obj()
{
}

void Future_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Future);
	HX_MARK_MEMBER_NAME(isCompleted,"isCompleted");
	HX_MARK_MEMBER_NAME(value,"value");
	HX_MARK_MEMBER_NAME(_hx___completed,"__completed");
	HX_MARK_MEMBER_NAME(_hx___completeListeners,"__completeListeners");
	HX_MARK_MEMBER_NAME(_hx___errored,"__errored");
	HX_MARK_MEMBER_NAME(_hx___errorListeners,"__errorListeners");
	HX_MARK_MEMBER_NAME(_hx___errorMessage,"__errorMessage");
	HX_MARK_MEMBER_NAME(_hx___progressListeners,"__progressListeners");
	HX_MARK_END_CLASS();
}

void Future_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(isCompleted,"isCompleted");
	HX_VISIT_MEMBER_NAME(value,"value");
	HX_VISIT_MEMBER_NAME(_hx___completed,"__completed");
	HX_VISIT_MEMBER_NAME(_hx___completeListeners,"__completeListeners");
	HX_VISIT_MEMBER_NAME(_hx___errored,"__errored");
	HX_VISIT_MEMBER_NAME(_hx___errorListeners,"__errorListeners");
	HX_VISIT_MEMBER_NAME(_hx___errorMessage,"__errorMessage");
	HX_VISIT_MEMBER_NAME(_hx___progressListeners,"__progressListeners");
}

hx::Val Future_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"then") ) { return hx::Val( then_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { return hx::Val( value ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onError") ) { return hx::Val( onError_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__errored") ) { return hx::Val( _hx___errored ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"onComplete") ) { return hx::Val( onComplete_dyn() ); }
		if (HX_FIELD_EQ(inName,"onProgress") ) { return hx::Val( onProgress_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"isCompleted") ) { return hx::Val( inCallProp == hx::paccAlways ? get_isCompleted() : isCompleted ); }
		if (HX_FIELD_EQ(inName,"__completed") ) { return hx::Val( _hx___completed ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__errorMessage") ) { return hx::Val( _hx___errorMessage ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_isCompleted") ) { return hx::Val( get_isCompleted_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__errorListeners") ) { return hx::Val( _hx___errorListeners ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"__completeListeners") ) { return hx::Val( _hx___completeListeners ); }
		if (HX_FIELD_EQ(inName,"__progressListeners") ) { return hx::Val( _hx___progressListeners ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val Future_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { value=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__errored") ) { _hx___errored=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"isCompleted") ) { isCompleted=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__completed") ) { _hx___completed=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__errorMessage") ) { _hx___errorMessage=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__errorListeners") ) { _hx___errorListeners=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"__completeListeners") ) { _hx___completeListeners=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__progressListeners") ) { _hx___progressListeners=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Future_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("isCompleted","\x41","\x58","\xb9","\x2d"));
	outFields->push(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"));
	outFields->push(HX_HCSTRING("__completed","\x6b","\xea","\x64","\x7d"));
	outFields->push(HX_HCSTRING("__completeListeners","\x66","\x0e","\x5a","\x85"));
	outFields->push(HX_HCSTRING("__errored","\x07","\xf7","\x58","\x6b"));
	outFields->push(HX_HCSTRING("__errorListeners","\xb7","\x4b","\x93","\x70"));
	outFields->push(HX_HCSTRING("__errorMessage","\xff","\x9d","\x01","\x6c"));
	outFields->push(HX_HCSTRING("__progressListeners","\xf2","\x98","\xe2","\x78"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo Future_obj_sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(Future_obj,isCompleted),HX_HCSTRING("isCompleted","\x41","\x58","\xb9","\x2d")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Future_obj,value),HX_HCSTRING("value","\x71","\x7f","\xb8","\x31")},
	{hx::fsBool,(int)offsetof(Future_obj,_hx___completed),HX_HCSTRING("__completed","\x6b","\xea","\x64","\x7d")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(Future_obj,_hx___completeListeners),HX_HCSTRING("__completeListeners","\x66","\x0e","\x5a","\x85")},
	{hx::fsBool,(int)offsetof(Future_obj,_hx___errored),HX_HCSTRING("__errored","\x07","\xf7","\x58","\x6b")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(Future_obj,_hx___errorListeners),HX_HCSTRING("__errorListeners","\xb7","\x4b","\x93","\x70")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Future_obj,_hx___errorMessage),HX_HCSTRING("__errorMessage","\xff","\x9d","\x01","\x6c")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(Future_obj,_hx___progressListeners),HX_HCSTRING("__progressListeners","\xf2","\x98","\xe2","\x78")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *Future_obj_sStaticStorageInfo = 0;
#endif

static ::String Future_obj_sMemberFields[] = {
	HX_HCSTRING("isCompleted","\x41","\x58","\xb9","\x2d"),
	HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"),
	HX_HCSTRING("__completed","\x6b","\xea","\x64","\x7d"),
	HX_HCSTRING("__completeListeners","\x66","\x0e","\x5a","\x85"),
	HX_HCSTRING("__errored","\x07","\xf7","\x58","\x6b"),
	HX_HCSTRING("__errorListeners","\xb7","\x4b","\x93","\x70"),
	HX_HCSTRING("__errorMessage","\xff","\x9d","\x01","\x6c"),
	HX_HCSTRING("__progressListeners","\xf2","\x98","\xe2","\x78"),
	HX_HCSTRING("onComplete","\xf8","\xd4","\x7e","\x5d"),
	HX_HCSTRING("onError","\x29","\x6a","\x67","\x09"),
	HX_HCSTRING("onProgress","\xec","\xcb","\xe1","\x63"),
	HX_HCSTRING("then","\xdd","\x02","\xfc","\x4c"),
	HX_HCSTRING("get_isCompleted","\xd8","\x0f","\x9b","\xee"),
	::String(null()) };

static void Future_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Future_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Future_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Future_obj::__mClass,"__mClass");
};

#endif

hx::Class Future_obj::__mClass;

void Future_obj::__register()
{
	hx::Object *dummy = new Future_obj;
	Future_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._legacy.Future","\x47","\x77","\xd4","\x43");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Future_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Future_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Future_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Future_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Future_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Future_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace _legacy
