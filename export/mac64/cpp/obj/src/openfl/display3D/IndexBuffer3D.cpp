// Generated by Haxe 3.4.2
#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_openfl__legacy_gl_GL
#include <openfl/_legacy/gl/GL.h>
#endif
#ifndef INCLUDED_openfl__legacy_gl_GLBuffer
#include <openfl/_legacy/gl/GLBuffer.h>
#endif
#ifndef INCLUDED_openfl__legacy_gl_GLObject
#include <openfl/_legacy/gl/GLObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_ArrayBufferView
#include <openfl/_legacy/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_ByteArray
#include <openfl/_legacy/utils/ByteArray.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_IDataInput
#include <openfl/_legacy/utils/IDataInput.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_IDataOutput
#include <openfl/_legacy/utils/IDataOutput.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_IMemoryRange
#include <openfl/_legacy/utils/IMemoryRange.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_Int16Array
#include <openfl/_legacy/utils/Int16Array.h>
#endif
#ifndef INCLUDED_openfl_display3D_Context3D
#include <openfl/display3D/Context3D.h>
#endif
#ifndef INCLUDED_openfl_display3D_IndexBuffer3D
#include <openfl/display3D/IndexBuffer3D.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_0f6a02916d47e310_20_new,"openfl.display3D.IndexBuffer3D","new",0x7b4eb39c,"openfl.display3D.IndexBuffer3D.new","openfl/display3D/IndexBuffer3D.hx",20,0x3d934296)
HX_LOCAL_STACK_FRAME(_hx_pos_0f6a02916d47e310_32_dispose,"openfl.display3D.IndexBuffer3D","dispose",0xbcffb1db,"openfl.display3D.IndexBuffer3D.dispose","openfl/display3D/IndexBuffer3D.hx",32,0x3d934296)
HX_LOCAL_STACK_FRAME(_hx_pos_0f6a02916d47e310_37_uploadFromByteArray,"openfl.display3D.IndexBuffer3D","uploadFromByteArray",0x61713322,"openfl.display3D.IndexBuffer3D.uploadFromByteArray","openfl/display3D/IndexBuffer3D.hx",37,0x3d934296)
HX_LOCAL_STACK_FRAME(_hx_pos_0f6a02916d47e310_67_uploadFromVector,"openfl.display3D.IndexBuffer3D","uploadFromVector",0xaabe3672,"openfl.display3D.IndexBuffer3D.uploadFromVector","openfl/display3D/IndexBuffer3D.hx",67,0x3d934296)
HX_LOCAL_STACK_FRAME(_hx_pos_0f6a02916d47e310_89_uploadFromInt16Array,"openfl.display3D.IndexBuffer3D","uploadFromInt16Array",0x04669c94,"openfl.display3D.IndexBuffer3D.uploadFromInt16Array","openfl/display3D/IndexBuffer3D.hx",89,0x3d934296)
namespace openfl{
namespace display3D{

void IndexBuffer3D_obj::__construct( ::openfl::display3D::Context3D context, ::openfl::_legacy::gl::GLBuffer glBuffer,int numIndices,int bufferUsage){
            	HX_STACKFRAME(&_hx_pos_0f6a02916d47e310_20_new)
HXLINE(  22)		this->context = context;
HXLINE(  23)		this->glBuffer = glBuffer;
HXLINE(  24)		this->numIndices = numIndices;
HXLINE(  25)		this->bufferUsage = bufferUsage;
            	}

Dynamic IndexBuffer3D_obj::__CreateEmpty() { return new IndexBuffer3D_obj; }

void *IndexBuffer3D_obj::_hx_vtable = 0;

Dynamic IndexBuffer3D_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< IndexBuffer3D_obj > _hx_result = new IndexBuffer3D_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool IndexBuffer3D_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x36314040;
}

void IndexBuffer3D_obj::dispose(){
            	HX_STACKFRAME(&_hx_pos_0f6a02916d47e310_32_dispose)
HXDLIN(  32)		this->context->_hx___deleteIndexBuffer(hx::ObjectPtr<OBJ_>(this));
            	}


HX_DEFINE_DYNAMIC_FUNC0(IndexBuffer3D_obj,dispose,(void))

void IndexBuffer3D_obj::uploadFromByteArray( ::openfl::_legacy::utils::ByteArray byteArray,int byteArrayOffset,int startOffset,int count){
            	HX_GC_STACKFRAME(&_hx_pos_0f6a02916d47e310_37_uploadFromByteArray)
HXLINE(  39)		int bytesPerIndex = (int)2;
HXLINE(  40)		{
HXLINE(  40)			 ::openfl::_legacy::gl::GLBuffer buffer = this->glBuffer;
HXDLIN(  40)			 ::Dynamic _hx_tmp;
HXDLIN(  40)			if (hx::IsNull( buffer )) {
HXLINE(  40)				_hx_tmp = null();
            			}
            			else {
HXLINE(  40)				_hx_tmp = buffer->id;
            			}
HXDLIN(  40)			::openfl::_legacy::gl::GL_obj::lime_gl_bind_buffer((int)34963,_hx_tmp);
            		}
HXLINE(  42)		int length = (count * bytesPerIndex);
HXLINE(  43)		int offset = (byteArrayOffset + (startOffset * bytesPerIndex));
HXLINE(  44)		 ::openfl::_legacy::utils::Int16Array indices =  ::openfl::_legacy::utils::Int16Array_obj::__alloc( HX_CTX ,byteArray,offset,length);
HXLINE(  62)		{
HXLINE(  62)			int usage = this->bufferUsage;
HXDLIN(  62)			 ::Dynamic _hx_tmp1 = hx::ClassOf< ::openfl::_legacy::gl::GL >();
HXDLIN(  62)			 ::openfl::_legacy::utils::ByteArray _hx_tmp2 = ::openfl::_legacy::utils::IMemoryRange_obj::getByteBuffer(indices);
HXDLIN(  62)			int _hx_tmp3 = ::openfl::_legacy::utils::IMemoryRange_obj::getStart(indices);
HXDLIN(  62)			int _hx_tmp4 = ::openfl::_legacy::utils::IMemoryRange_obj::getLength(indices);
HXDLIN(  62)			::openfl::_legacy::gl::GL_obj::lime_gl_buffer_data((int)34963,_hx_tmp2,_hx_tmp3,_hx_tmp4,usage);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC4(IndexBuffer3D_obj,uploadFromByteArray,(void))

void IndexBuffer3D_obj::uploadFromVector(::Array< int > data,int startOffset,int count){
            	HX_GC_STACKFRAME(&_hx_pos_0f6a02916d47e310_67_uploadFromVector)
HXLINE(  69)		{
HXLINE(  69)			 ::openfl::_legacy::gl::GLBuffer buffer = this->glBuffer;
HXDLIN(  69)			 ::Dynamic _hx_tmp;
HXDLIN(  69)			if (hx::IsNull( buffer )) {
HXLINE(  69)				_hx_tmp = null();
            			}
            			else {
HXLINE(  69)				_hx_tmp = buffer->id;
            			}
HXDLIN(  69)			::openfl::_legacy::gl::GL_obj::lime_gl_bind_buffer((int)34963,_hx_tmp);
            		}
HXLINE(  70)		 ::openfl::_legacy::utils::Int16Array indices =  ::openfl::_legacy::utils::Int16Array_obj::__alloc( HX_CTX ,data,startOffset,count);
HXLINE(  84)		{
HXLINE(  84)			int usage = this->bufferUsage;
HXDLIN(  84)			 ::Dynamic _hx_tmp1 = hx::ClassOf< ::openfl::_legacy::gl::GL >();
HXDLIN(  84)			 ::openfl::_legacy::utils::ByteArray _hx_tmp2 = ::openfl::_legacy::utils::IMemoryRange_obj::getByteBuffer(indices);
HXDLIN(  84)			int _hx_tmp3 = ::openfl::_legacy::utils::IMemoryRange_obj::getStart(indices);
HXDLIN(  84)			int _hx_tmp4 = ::openfl::_legacy::utils::IMemoryRange_obj::getLength(indices);
HXDLIN(  84)			::openfl::_legacy::gl::GL_obj::lime_gl_buffer_data((int)34963,_hx_tmp2,_hx_tmp3,_hx_tmp4,usage);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(IndexBuffer3D_obj,uploadFromVector,(void))

void IndexBuffer3D_obj::uploadFromInt16Array( ::openfl::_legacy::utils::Int16Array data){
            	HX_STACKFRAME(&_hx_pos_0f6a02916d47e310_89_uploadFromInt16Array)
HXLINE(  91)		{
HXLINE(  91)			 ::openfl::_legacy::gl::GLBuffer buffer = this->glBuffer;
HXDLIN(  91)			 ::Dynamic _hx_tmp;
HXDLIN(  91)			if (hx::IsNull( buffer )) {
HXLINE(  91)				_hx_tmp = null();
            			}
            			else {
HXLINE(  91)				_hx_tmp = buffer->id;
            			}
HXDLIN(  91)			::openfl::_legacy::gl::GL_obj::lime_gl_bind_buffer((int)34963,_hx_tmp);
            		}
HXLINE(  92)		{
HXLINE(  92)			int usage = this->bufferUsage;
HXDLIN(  92)			 ::Dynamic _hx_tmp1 = hx::ClassOf< ::openfl::_legacy::gl::GL >();
HXDLIN(  92)			 ::openfl::_legacy::utils::ByteArray _hx_tmp2 = ::openfl::_legacy::utils::IMemoryRange_obj::getByteBuffer(data);
HXDLIN(  92)			int _hx_tmp3 = ::openfl::_legacy::utils::IMemoryRange_obj::getStart(data);
HXDLIN(  92)			int _hx_tmp4 = ::openfl::_legacy::utils::IMemoryRange_obj::getLength(data);
HXDLIN(  92)			::openfl::_legacy::gl::GL_obj::lime_gl_buffer_data((int)34963,_hx_tmp2,_hx_tmp3,_hx_tmp4,usage);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(IndexBuffer3D_obj,uploadFromInt16Array,(void))


hx::ObjectPtr< IndexBuffer3D_obj > IndexBuffer3D_obj::__new( ::openfl::display3D::Context3D context, ::openfl::_legacy::gl::GLBuffer glBuffer,int numIndices,int bufferUsage) {
	hx::ObjectPtr< IndexBuffer3D_obj > __this = new IndexBuffer3D_obj();
	__this->__construct(context,glBuffer,numIndices,bufferUsage);
	return __this;
}

hx::ObjectPtr< IndexBuffer3D_obj > IndexBuffer3D_obj::__alloc(hx::Ctx *_hx_ctx, ::openfl::display3D::Context3D context, ::openfl::_legacy::gl::GLBuffer glBuffer,int numIndices,int bufferUsage) {
	IndexBuffer3D_obj *__this = (IndexBuffer3D_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(IndexBuffer3D_obj), true, "openfl.display3D.IndexBuffer3D"));
	*(void **)__this = IndexBuffer3D_obj::_hx_vtable;
	__this->__construct(context,glBuffer,numIndices,bufferUsage);
	return __this;
}

IndexBuffer3D_obj::IndexBuffer3D_obj()
{
}

void IndexBuffer3D_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(IndexBuffer3D);
	HX_MARK_MEMBER_NAME(context,"context");
	HX_MARK_MEMBER_NAME(glBuffer,"glBuffer");
	HX_MARK_MEMBER_NAME(numIndices,"numIndices");
	HX_MARK_MEMBER_NAME(bufferUsage,"bufferUsage");
	HX_MARK_END_CLASS();
}

void IndexBuffer3D_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(context,"context");
	HX_VISIT_MEMBER_NAME(glBuffer,"glBuffer");
	HX_VISIT_MEMBER_NAME(numIndices,"numIndices");
	HX_VISIT_MEMBER_NAME(bufferUsage,"bufferUsage");
}

hx::Val IndexBuffer3D_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"context") ) { return hx::Val( context ); }
		if (HX_FIELD_EQ(inName,"dispose") ) { return hx::Val( dispose_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"glBuffer") ) { return hx::Val( glBuffer ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"numIndices") ) { return hx::Val( numIndices ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bufferUsage") ) { return hx::Val( bufferUsage ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"uploadFromVector") ) { return hx::Val( uploadFromVector_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"uploadFromByteArray") ) { return hx::Val( uploadFromByteArray_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"uploadFromInt16Array") ) { return hx::Val( uploadFromInt16Array_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val IndexBuffer3D_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"context") ) { context=inValue.Cast<  ::openfl::display3D::Context3D >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"glBuffer") ) { glBuffer=inValue.Cast<  ::openfl::_legacy::gl::GLBuffer >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"numIndices") ) { numIndices=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bufferUsage") ) { bufferUsage=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void IndexBuffer3D_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("context","\xef","\x95","\x77","\x19"));
	outFields->push(HX_HCSTRING("glBuffer","\x05","\x35","\x83","\x93"));
	outFields->push(HX_HCSTRING("numIndices","\x81","\x85","\x74","\x13"));
	outFields->push(HX_HCSTRING("bufferUsage","\x01","\xf0","\x7a","\x47"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo IndexBuffer3D_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::display3D::Context3D*/ ,(int)offsetof(IndexBuffer3D_obj,context),HX_HCSTRING("context","\xef","\x95","\x77","\x19")},
	{hx::fsObject /*::openfl::_legacy::gl::GLBuffer*/ ,(int)offsetof(IndexBuffer3D_obj,glBuffer),HX_HCSTRING("glBuffer","\x05","\x35","\x83","\x93")},
	{hx::fsInt,(int)offsetof(IndexBuffer3D_obj,numIndices),HX_HCSTRING("numIndices","\x81","\x85","\x74","\x13")},
	{hx::fsInt,(int)offsetof(IndexBuffer3D_obj,bufferUsage),HX_HCSTRING("bufferUsage","\x01","\xf0","\x7a","\x47")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *IndexBuffer3D_obj_sStaticStorageInfo = 0;
#endif

static ::String IndexBuffer3D_obj_sMemberFields[] = {
	HX_HCSTRING("context","\xef","\x95","\x77","\x19"),
	HX_HCSTRING("glBuffer","\x05","\x35","\x83","\x93"),
	HX_HCSTRING("numIndices","\x81","\x85","\x74","\x13"),
	HX_HCSTRING("bufferUsage","\x01","\xf0","\x7a","\x47"),
	HX_HCSTRING("dispose","\x9f","\x80","\x4c","\xbb"),
	HX_HCSTRING("uploadFromByteArray","\xe6","\x17","\x1b","\xee"),
	HX_HCSTRING("uploadFromVector","\x2e","\x6f","\x6b","\xa8"),
	HX_HCSTRING("uploadFromInt16Array","\x50","\xe3","\x64","\x8c"),
	::String(null()) };

static void IndexBuffer3D_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(IndexBuffer3D_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void IndexBuffer3D_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(IndexBuffer3D_obj::__mClass,"__mClass");
};

#endif

hx::Class IndexBuffer3D_obj::__mClass;

void IndexBuffer3D_obj::__register()
{
	hx::Object *dummy = new IndexBuffer3D_obj;
	IndexBuffer3D_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display3D.IndexBuffer3D","\xaa","\xf5","\xd5","\x3f");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = IndexBuffer3D_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(IndexBuffer3D_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< IndexBuffer3D_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = IndexBuffer3D_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = IndexBuffer3D_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = IndexBuffer3D_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace display3D
