// Generated by Haxe 3.4.2
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Lambda
#include <Lambda.h>
#endif
#ifndef INCLUDED_List
#include <List.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED__List_ListNode
#include <_List/ListNode.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxAtlasFrames
#include <flixel/graphics/frames/FlxAtlasFrames.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFrame
#include <flixel/graphics/frames/FlxFrame.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFrameCollectionType
#include <flixel/graphics/frames/FlxFrameCollectionType.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFramesCollection
#include <flixel/graphics/frames/FlxFramesCollection.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRect
#include <flixel/math/FlxRect.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_BitmapFrontEnd
#include <flixel/system/frontEnds/BitmapFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_math_FlxPoint
#include <flixel/util/FlxPool_flixel_math_FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_math_FlxRect
#include <flixel/util/FlxPool_flixel_math_FlxRect.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPool
#include <flixel/util/IFlxPool.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_BalancedTree
#include <haxe/ds/BalancedTree.h>
#endif
#ifndef INCLUDED_haxe_ds_EnumValueMap
#include <haxe/ds/EnumValueMap.h>
#endif
#ifndef INCLUDED_haxe_format_JsonParser
#include <haxe/format/JsonParser.h>
#endif
#ifndef INCLUDED_haxe_xml_Fast
#include <haxe/xml/Fast.h>
#endif
#ifndef INCLUDED_haxe_xml__Fast_AttribAccess
#include <haxe/xml/_Fast/AttribAccess.h>
#endif
#ifndef INCLUDED_haxe_xml__Fast_HasAttribAccess
#include <haxe/xml/_Fast/HasAttribAccess.h>
#endif
#ifndef INCLUDED_haxe_xml__Fast_NodeListAccess
#include <haxe/xml/_Fast/NodeListAccess.h>
#endif
#ifndef INCLUDED_openfl__legacy_AssetType
#include <openfl/_legacy/AssetType.h>
#endif
#ifndef INCLUDED_openfl__legacy_Assets
#include <openfl/_legacy/Assets.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Rectangle
#include <openfl/_legacy/geom/Rectangle.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_d294561f5bda5770_22_new,"flixel.graphics.frames.FlxAtlasFrames","new",0xed20cbc8,"flixel.graphics.frames.FlxAtlasFrames.new","flixel/graphics/frames/FlxAtlasFrames.hx",22,0x501ecb67)
HX_LOCAL_STACK_FRAME(_hx_pos_d294561f5bda5770_385_addBorder,"flixel.graphics.frames.FlxAtlasFrames","addBorder",0x1a31fb55,"flixel.graphics.frames.FlxAtlasFrames.addBorder","flixel/graphics/frames/FlxAtlasFrames.hx",385,0x501ecb67)
HX_LOCAL_STACK_FRAME(_hx_pos_d294561f5bda5770_33_fromTexturePackerJson,"flixel.graphics.frames.FlxAtlasFrames","fromTexturePackerJson",0xae76e627,"flixel.graphics.frames.FlxAtlasFrames.fromTexturePackerJson","flixel/graphics/frames/FlxAtlasFrames.hx",33,0x501ecb67)
HX_LOCAL_STACK_FRAME(_hx_pos_d294561f5bda5770_82_texturePackerHelper,"flixel.graphics.frames.FlxAtlasFrames","texturePackerHelper",0x397d6e77,"flixel.graphics.frames.FlxAtlasFrames.texturePackerHelper","flixel/graphics/frames/FlxAtlasFrames.hx",82,0x501ecb67)
HX_LOCAL_STACK_FRAME(_hx_pos_d294561f5bda5770_112_fromLibGdx,"flixel.graphics.frames.FlxAtlasFrames","fromLibGdx",0x5ef5c818,"flixel.graphics.frames.FlxAtlasFrames.fromLibGdx","flixel/graphics/frames/FlxAtlasFrames.hx",112,0x501ecb67)
HX_LOCAL_STACK_FRAME(_hx_pos_d294561f5bda5770_196_getDimensions,"flixel.graphics.frames.FlxAtlasFrames","getDimensions",0x0a6267eb,"flixel.graphics.frames.FlxAtlasFrames.getDimensions","flixel/graphics/frames/FlxAtlasFrames.hx",196,0x501ecb67)
HX_LOCAL_STACK_FRAME(_hx_pos_d294561f5bda5770_215_fromSparrow,"flixel.graphics.frames.FlxAtlasFrames","fromSparrow",0x30bf432a,"flixel.graphics.frames.FlxAtlasFrames.fromSparrow","flixel/graphics/frames/FlxAtlasFrames.hx",215,0x501ecb67)
HX_LOCAL_STACK_FRAME(_hx_pos_d294561f5bda5770_277_fromTexturePackerXml,"flixel.graphics.frames.FlxAtlasFrames","fromTexturePackerXml",0x5ca98eb8,"flixel.graphics.frames.FlxAtlasFrames.fromTexturePackerXml","flixel/graphics/frames/FlxAtlasFrames.hx",277,0x501ecb67)
HX_LOCAL_STACK_FRAME(_hx_pos_d294561f5bda5770_327_fromSpriteSheetPacker,"flixel.graphics.frames.FlxAtlasFrames","fromSpriteSheetPacker",0x4fb8a81e,"flixel.graphics.frames.FlxAtlasFrames.fromSpriteSheetPacker","flixel/graphics/frames/FlxAtlasFrames.hx",327,0x501ecb67)
HX_LOCAL_STACK_FRAME(_hx_pos_d294561f5bda5770_371_findFrame,"flixel.graphics.frames.FlxAtlasFrames","findFrame",0xf36e229c,"flixel.graphics.frames.FlxAtlasFrames.findFrame","flixel/graphics/frames/FlxAtlasFrames.hx",371,0x501ecb67)
namespace flixel{
namespace graphics{
namespace frames{

void FlxAtlasFrames_obj::__construct( ::flixel::graphics::FlxGraphic parent, ::flixel::math::FlxPoint border){
            	HX_STACKFRAME(&_hx_pos_d294561f5bda5770_22_new)
HXDLIN(  22)		super::__construct(parent,::flixel::graphics::frames::FlxFrameCollectionType_obj::ATLAS_dyn(),border);
            	}

Dynamic FlxAtlasFrames_obj::__CreateEmpty() { return new FlxAtlasFrames_obj; }

void *FlxAtlasFrames_obj::_hx_vtable = 0;

Dynamic FlxAtlasFrames_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< FlxAtlasFrames_obj > _hx_result = new FlxAtlasFrames_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool FlxAtlasFrames_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0163a3e9) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x0163a3e9;
	} else {
		return inClassId==(int)0x0564f3f4;
	}
}

 ::flixel::graphics::frames::FlxFramesCollection FlxAtlasFrames_obj::addBorder( ::flixel::math::FlxPoint border){
            	HX_GC_STACKFRAME(&_hx_pos_d294561f5bda5770_385_addBorder)
HXLINE( 386)		 ::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set((int)0,(int)0);
HXDLIN( 386)		point->_inPool = false;
HXDLIN( 386)		 ::flixel::math::FlxPoint point1 = point;
HXDLIN( 386)		point1->_weak = true;
HXDLIN( 386)		 ::flixel::math::FlxPoint resultBorder = point1->addPoint(this->border)->addPoint(border);
HXLINE( 387)		 ::flixel::graphics::frames::FlxAtlasFrames atlasFrames = ::flixel::graphics::frames::FlxAtlasFrames_obj::findFrame(this->parent,resultBorder);
HXLINE( 388)		if (hx::IsNotNull( atlasFrames )) {
HXLINE( 389)			return atlasFrames;
            		}
HXLINE( 391)		atlasFrames =  ::flixel::graphics::frames::FlxAtlasFrames_obj::__alloc( HX_CTX ,this->parent,resultBorder);
HXLINE( 393)		{
HXLINE( 393)			int _g = (int)0;
HXDLIN( 393)			::Array< ::Dynamic> _g1 = this->frames;
HXDLIN( 393)			while((_g < _g1->length)){
HXLINE( 393)				 ::flixel::graphics::frames::FlxFrame frame = _g1->__get(_g).StaticCast<  ::flixel::graphics::frames::FlxFrame >();
HXDLIN( 393)				_g = (_g + (int)1);
HXLINE( 394)				atlasFrames->pushFrame(frame->setBorderTo(border,null()));
            			}
            		}
HXLINE( 396)		return atlasFrames;
            	}


 ::flixel::graphics::frames::FlxAtlasFrames FlxAtlasFrames_obj::fromTexturePackerJson( ::Dynamic Source,::String Description){
            	HX_GC_STACKFRAME(&_hx_pos_d294561f5bda5770_33_fromTexturePackerJson)
HXLINE(  34)		 ::flixel::graphics::FlxGraphic graphic = ::flixel::FlxG_obj::bitmap->add(Source,false,null());
HXLINE(  35)		if (hx::IsNull( graphic )) {
HXLINE(  36)			return null();
            		}
HXLINE(  39)		 ::flixel::graphics::frames::FlxAtlasFrames frames = ::flixel::graphics::frames::FlxAtlasFrames_obj::findFrame(graphic,null());
HXLINE(  40)		if (hx::IsNotNull( frames )) {
HXLINE(  41)			return frames;
            		}
HXLINE(  43)		bool _hx_tmp;
HXDLIN(  43)		if (hx::IsNotNull( graphic )) {
HXLINE(  43)			_hx_tmp = hx::IsNull( Description );
            		}
            		else {
HXLINE(  43)			_hx_tmp = true;
            		}
HXDLIN(  43)		if (_hx_tmp) {
HXLINE(  44)			return null();
            		}
HXLINE(  46)		frames =  ::flixel::graphics::frames::FlxAtlasFrames_obj::__alloc( HX_CTX ,graphic,null());
HXLINE(  48)		if (::openfl::_legacy::Assets_obj::exists(Description,null())) {
HXLINE(  50)			Description = ::openfl::_legacy::Assets_obj::getText(Description);
            		}
HXLINE(  53)		 ::Dynamic data =  ::haxe::format::JsonParser_obj::__alloc( HX_CTX ,Description)->parseRec();
HXLINE(  56)		if (::Std_obj::is( ::Dynamic(data->__Field(HX_("frames",a6,af,85,ac),hx::paccDynamic)),hx::ArrayBase::__mClass)) {
HXLINE(  58)			int _g = (int)0;
HXDLIN(  58)			::Array< ::Dynamic> _g1 = ::Lambda_obj::array(data->__Field(HX_("frames",a6,af,85,ac),hx::paccDynamic));
HXDLIN(  58)			while((_g < _g1->length)){
HXLINE(  58)				 ::Dynamic frame = _g1->__get(_g);
HXDLIN(  58)				_g = (_g + (int)1);
HXLINE(  60)				::flixel::graphics::frames::FlxAtlasFrames_obj::texturePackerHelper(( (::String)(frame->__Field(HX_("filename",c7,2e,6a,77),hx::paccDynamic)) ),frame,frames);
            			}
            		}
            		else {
HXLINE(  66)			int _g2 = (int)0;
HXDLIN(  66)			::Array< ::String > _g11 = ::Reflect_obj::fields( ::Dynamic(data->__Field(HX_("frames",a6,af,85,ac),hx::paccDynamic)));
HXDLIN(  66)			while((_g2 < _g11->length)){
HXLINE(  66)				::String frameName = _g11->__get(_g2);
HXDLIN(  66)				_g2 = (_g2 + (int)1);
HXLINE(  68)				::flixel::graphics::frames::FlxAtlasFrames_obj::texturePackerHelper(frameName,::Reflect_obj::field( ::Dynamic(data->__Field(HX_("frames",a6,af,85,ac),hx::paccDynamic)),frameName),frames);
            			}
            		}
HXLINE(  72)		return frames;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxAtlasFrames_obj,fromTexturePackerJson,return )

void FlxAtlasFrames_obj::texturePackerHelper(::String FrameName, ::Dynamic FrameData, ::flixel::graphics::frames::FlxAtlasFrames Frames){
            	HX_STACKFRAME(&_hx_pos_d294561f5bda5770_82_texturePackerHelper)
HXLINE(  83)		bool rotated = ( (bool)(FrameData->__Field(HX_("rotated",a9,49,1d,f1),hx::paccDynamic)) );
HXLINE(  84)		::String name = FrameName;
HXLINE(  85)		Float X = ( (Float)( ::Dynamic(FrameData->__Field(HX_("sourceSize",3c,87,b7,74),hx::paccDynamic))->__Field(HX_("w",77,00,00,00),hx::paccDynamic)) );
HXDLIN(  85)		Float Y = ( (Float)( ::Dynamic(FrameData->__Field(HX_("sourceSize",3c,87,b7,74),hx::paccDynamic))->__Field(HX_("h",68,00,00,00),hx::paccDynamic)) );
HXDLIN(  85)		 ::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(X,Y);
HXDLIN(  85)		point->_inPool = false;
HXDLIN(  85)		 ::flixel::math::FlxPoint sourceSize = point;
HXLINE(  86)		Float X1 = ( (Float)( ::Dynamic(FrameData->__Field(HX_("spriteSourceSize",a1,7f,c1,03),hx::paccDynamic))->__Field(HX_("x",78,00,00,00),hx::paccDynamic)) );
HXDLIN(  86)		Float Y1 = ( (Float)( ::Dynamic(FrameData->__Field(HX_("spriteSourceSize",a1,7f,c1,03),hx::paccDynamic))->__Field(HX_("y",79,00,00,00),hx::paccDynamic)) );
HXDLIN(  86)		 ::flixel::math::FlxPoint point1 = ::flixel::math::FlxPoint_obj::_pool->get()->set(X1,Y1);
HXDLIN(  86)		point1->_inPool = false;
HXDLIN(  86)		 ::flixel::math::FlxPoint offset = point1;
HXLINE(  87)		int angle = (int)0;
HXLINE(  88)		 ::flixel::math::FlxRect frameRect = null();
HXLINE(  90)		if (rotated) {
HXLINE(  92)			Float X2 = ( (Float)( ::Dynamic(FrameData->__Field(HX_("frame",2d,78,83,06),hx::paccDynamic))->__Field(HX_("x",78,00,00,00),hx::paccDynamic)) );
HXDLIN(  92)			Float Y2 = ( (Float)( ::Dynamic(FrameData->__Field(HX_("frame",2d,78,83,06),hx::paccDynamic))->__Field(HX_("y",79,00,00,00),hx::paccDynamic)) );
HXDLIN(  92)			Float Width = ( (Float)( ::Dynamic(FrameData->__Field(HX_("frame",2d,78,83,06),hx::paccDynamic))->__Field(HX_("h",68,00,00,00),hx::paccDynamic)) );
HXDLIN(  92)			Float Height = ( (Float)( ::Dynamic(FrameData->__Field(HX_("frame",2d,78,83,06),hx::paccDynamic))->__Field(HX_("w",77,00,00,00),hx::paccDynamic)) );
HXDLIN(  92)			 ::flixel::math::FlxRect _this = ::flixel::math::FlxRect_obj::_pool->get();
HXDLIN(  92)			_this->x = X2;
HXDLIN(  92)			_this->y = Y2;
HXDLIN(  92)			_this->width = Width;
HXDLIN(  92)			_this->height = Height;
HXDLIN(  92)			 ::flixel::math::FlxRect rect = _this;
HXDLIN(  92)			rect->_inPool = false;
HXDLIN(  92)			frameRect = rect;
HXLINE(  93)			angle = (int)-90;
            		}
            		else {
HXLINE(  97)			Float X3 = ( (Float)( ::Dynamic(FrameData->__Field(HX_("frame",2d,78,83,06),hx::paccDynamic))->__Field(HX_("x",78,00,00,00),hx::paccDynamic)) );
HXDLIN(  97)			Float Y3 = ( (Float)( ::Dynamic(FrameData->__Field(HX_("frame",2d,78,83,06),hx::paccDynamic))->__Field(HX_("y",79,00,00,00),hx::paccDynamic)) );
HXDLIN(  97)			Float Width1 = ( (Float)( ::Dynamic(FrameData->__Field(HX_("frame",2d,78,83,06),hx::paccDynamic))->__Field(HX_("w",77,00,00,00),hx::paccDynamic)) );
HXDLIN(  97)			Float Height1 = ( (Float)( ::Dynamic(FrameData->__Field(HX_("frame",2d,78,83,06),hx::paccDynamic))->__Field(HX_("h",68,00,00,00),hx::paccDynamic)) );
HXDLIN(  97)			 ::flixel::math::FlxRect _this1 = ::flixel::math::FlxRect_obj::_pool->get();
HXDLIN(  97)			_this1->x = X3;
HXDLIN(  97)			_this1->y = Y3;
HXDLIN(  97)			_this1->width = Width1;
HXDLIN(  97)			_this1->height = Height1;
HXDLIN(  97)			 ::flixel::math::FlxRect rect1 = _this1;
HXDLIN(  97)			rect1->_inPool = false;
HXDLIN(  97)			frameRect = rect1;
            		}
HXLINE( 100)		Frames->addAtlasFrame(frameRect,sourceSize,offset,name,angle,null(),null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxAtlasFrames_obj,texturePackerHelper,(void))

 ::flixel::graphics::frames::FlxAtlasFrames FlxAtlasFrames_obj::fromLibGdx( ::Dynamic Source,::String Description){
            	HX_GC_STACKFRAME(&_hx_pos_d294561f5bda5770_112_fromLibGdx)
HXLINE( 113)		 ::flixel::graphics::FlxGraphic graphic = ::flixel::FlxG_obj::bitmap->add(Source,null(),null());
HXLINE( 114)		if (hx::IsNull( graphic )) {
HXLINE( 115)			return null();
            		}
HXLINE( 118)		 ::flixel::graphics::frames::FlxAtlasFrames frames = ::flixel::graphics::frames::FlxAtlasFrames_obj::findFrame(graphic,null());
HXLINE( 119)		if (hx::IsNotNull( frames )) {
HXLINE( 120)			return frames;
            		}
HXLINE( 122)		bool _hx_tmp;
HXDLIN( 122)		if (hx::IsNotNull( graphic )) {
HXLINE( 122)			_hx_tmp = hx::IsNull( Description );
            		}
            		else {
HXLINE( 122)			_hx_tmp = true;
            		}
HXDLIN( 122)		if (_hx_tmp) {
HXLINE( 123)			return null();
            		}
HXLINE( 125)		frames =  ::flixel::graphics::frames::FlxAtlasFrames_obj::__alloc( HX_CTX ,graphic,null());
HXLINE( 127)		if (::openfl::_legacy::Assets_obj::exists(Description,null())) {
HXLINE( 128)			Description = ::openfl::_legacy::Assets_obj::getText(Description);
            		}
HXLINE( 130)		::String pack = ::StringTools_obj::trim(Description);
HXLINE( 131)		::Array< ::String > lines = pack.split(HX_("\n",0a,00,00,00));
HXLINE( 134)		int repeatLine;
HXDLIN( 134)		if ((lines->__get((int)3).indexOf(HX_("repeat:",7f,d8,87,a6),null()) > (int)-1)) {
HXLINE( 134)			repeatLine = (int)3;
            		}
            		else {
HXLINE( 134)			repeatLine = (int)4;
            		}
HXLINE( 135)		lines->removeRange((int)0,(repeatLine + (int)1));
HXLINE( 137)		int numElementsPerImage = (int)7;
HXLINE( 138)		int numImages = ::Std_obj::_hx_int(((Float)lines->length / (Float)numElementsPerImage));
HXLINE( 139)		::Array< int > size = ::Array_obj< int >::__new(0);
HXLINE( 141)		{
HXLINE( 141)			int _g1 = (int)0;
HXDLIN( 141)			int _g = numImages;
HXDLIN( 141)			while((_g1 < _g)){
HXLINE( 141)				_g1 = (_g1 + (int)1);
HXDLIN( 141)				int i = (_g1 - (int)1);
HXLINE( 143)				int curIndex = (i * numElementsPerImage);
HXLINE( 145)				curIndex = (curIndex + (int)1);
HXDLIN( 145)				::String name = lines->__get((curIndex - (int)1));
HXLINE( 146)				curIndex = (curIndex + (int)1);
HXDLIN( 146)				bool rotated = (lines->__get((curIndex - (int)1)).indexOf(HX_("true",4e,a7,03,4d),null()) >= (int)0);
HXLINE( 147)				int angle = (int)0;
HXLINE( 149)				curIndex = (curIndex + (int)1);
HXDLIN( 149)				::String tempString = lines->__get((curIndex - (int)1));
HXLINE( 150)				::Array< int > size1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::getDimensions(tempString,size);
HXLINE( 152)				int imageX = size1->__get((int)0);
HXLINE( 153)				int imageY = size1->__get((int)1);
HXLINE( 155)				curIndex = (curIndex + (int)1);
HXDLIN( 155)				tempString = lines->__get((curIndex - (int)1));
HXLINE( 156)				size1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::getDimensions(tempString,size1);
HXLINE( 158)				int imageWidth = size1->__get((int)0);
HXLINE( 159)				int imageHeight = size1->__get((int)1);
HXLINE( 161)				 ::flixel::math::FlxRect rect = null();
HXLINE( 162)				if (rotated) {
HXLINE( 164)					 ::flixel::math::FlxRect _this = ::flixel::math::FlxRect_obj::_pool->get();
HXDLIN( 164)					_this->x = imageX;
HXDLIN( 164)					_this->y = imageY;
HXDLIN( 164)					_this->width = imageHeight;
HXDLIN( 164)					_this->height = imageWidth;
HXDLIN( 164)					 ::flixel::math::FlxRect rect1 = _this;
HXDLIN( 164)					rect1->_inPool = false;
HXDLIN( 164)					rect = rect1;
HXLINE( 165)					angle = (int)90;
            				}
            				else {
HXLINE( 169)					 ::flixel::math::FlxRect _this1 = ::flixel::math::FlxRect_obj::_pool->get();
HXDLIN( 169)					_this1->x = imageX;
HXDLIN( 169)					_this1->y = imageY;
HXDLIN( 169)					_this1->width = imageWidth;
HXDLIN( 169)					_this1->height = imageHeight;
HXDLIN( 169)					 ::flixel::math::FlxRect rect2 = _this1;
HXDLIN( 169)					rect2->_inPool = false;
HXDLIN( 169)					rect = rect2;
            				}
HXLINE( 172)				curIndex = (curIndex + (int)1);
HXDLIN( 172)				tempString = lines->__get((curIndex - (int)1));
HXLINE( 173)				size1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::getDimensions(tempString,size1);
HXLINE( 175)				 ::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get();
HXDLIN( 175)				 ::flixel::math::FlxPoint point1 = point->set(size1->__get((int)0),size1->__get((int)1));
HXDLIN( 175)				point1->_inPool = false;
HXDLIN( 175)				 ::flixel::math::FlxPoint sourceSize = point1;
HXLINE( 177)				curIndex = (curIndex + (int)1);
HXDLIN( 177)				tempString = lines->__get((curIndex - (int)1));
HXLINE( 178)				size1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::getDimensions(tempString,size1);
HXLINE( 181)				Float sourceSize1 = sourceSize->y;
HXDLIN( 181)				Float Y = ((sourceSize1 - size1->__get((int)1)) - imageHeight);
HXDLIN( 181)				 ::flixel::math::FlxPoint point2 = ::flixel::math::FlxPoint_obj::_pool->get();
HXDLIN( 181)				 ::flixel::math::FlxPoint point3 = point2->set(size1->__get((int)0),Y);
HXDLIN( 181)				point3->_inPool = false;
HXDLIN( 181)				 ::flixel::math::FlxPoint offset = point3;
HXLINE( 182)				frames->addAtlasFrame(rect,sourceSize,offset,name,angle,null(),null());
            			}
            		}
HXLINE( 185)		return frames;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxAtlasFrames_obj,fromLibGdx,return )

::Array< int > FlxAtlasFrames_obj::getDimensions(::String line,::Array< int > size){
            	HX_STACKFRAME(&_hx_pos_d294561f5bda5770_196_getDimensions)
HXLINE( 197)		int colonPosition = line.indexOf(HX_(":",3a,00,00,00),null());
HXLINE( 198)		int comaPosition = line.indexOf(HX_(",",2c,00,00,00),null());
HXLINE( 200)		size[(int)0] = ::Std_obj::parseInt(line.substring((colonPosition + (int)1),comaPosition));
HXLINE( 201)		size[(int)1] = ::Std_obj::parseInt(line.substring((comaPosition + (int)1),line.length));
HXLINE( 203)		return size;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxAtlasFrames_obj,getDimensions,return )

 ::flixel::graphics::frames::FlxAtlasFrames FlxAtlasFrames_obj::fromSparrow( ::Dynamic Source,::String Description){
            	HX_GC_STACKFRAME(&_hx_pos_d294561f5bda5770_215_fromSparrow)
HXLINE( 216)		 ::flixel::graphics::FlxGraphic graphic = ::flixel::FlxG_obj::bitmap->add(Source,null(),null());
HXLINE( 217)		if (hx::IsNull( graphic )) {
HXLINE( 218)			return null();
            		}
HXLINE( 221)		 ::flixel::graphics::frames::FlxAtlasFrames frames = ::flixel::graphics::frames::FlxAtlasFrames_obj::findFrame(graphic,null());
HXLINE( 222)		if (hx::IsNotNull( frames )) {
HXLINE( 223)			return frames;
            		}
HXLINE( 225)		bool _hx_tmp;
HXDLIN( 225)		if (hx::IsNotNull( graphic )) {
HXLINE( 225)			_hx_tmp = hx::IsNull( Description );
            		}
            		else {
HXLINE( 225)			_hx_tmp = true;
            		}
HXDLIN( 225)		if (_hx_tmp) {
HXLINE( 226)			return null();
            		}
HXLINE( 228)		frames =  ::flixel::graphics::frames::FlxAtlasFrames_obj::__alloc( HX_CTX ,graphic,null());
HXLINE( 230)		if (::openfl::_legacy::Assets_obj::exists(Description,null())) {
HXLINE( 231)			Description = ::openfl::_legacy::Assets_obj::getText(Description);
            		}
HXLINE( 233)		 ::haxe::xml::Fast data =  ::haxe::xml::Fast_obj::__alloc( HX_CTX ,::Xml_obj::parse(Description)->firstElement());
HXLINE( 235)		{
HXLINE( 235)			 ::_List::ListNode _g_head = data->nodes->resolve(HX_("SubTexture",5b,7b,fb,11))->h;
HXDLIN( 235)			while(hx::IsNotNull( _g_head )){
HXLINE( 235)				 ::haxe::xml::Fast val = ( ( ::haxe::xml::Fast)(_g_head->item) );
HXDLIN( 235)				_g_head = _g_head->next;
HXDLIN( 235)				 ::haxe::xml::Fast texture = val;
HXLINE( 237)				::String name = texture->att->resolve(HX_("name",4b,72,ff,48));
HXLINE( 238)				bool trimmed = texture->has->resolve(HX_("frameX",8b,af,85,ac));
HXLINE( 239)				bool rotated;
HXDLIN( 239)				if (texture->has->resolve(HX_("rotated",a9,49,1d,f1))) {
HXLINE( 239)					rotated = (texture->att->resolve(HX_("rotated",a9,49,1d,f1)) == HX_("true",4e,a7,03,4d));
            				}
            				else {
HXLINE( 239)					rotated = false;
            				}
HXLINE( 240)				bool flipX;
HXDLIN( 240)				if (texture->has->resolve(HX_("flipX",0b,45,92,02))) {
HXLINE( 240)					flipX = (texture->att->resolve(HX_("flipX",0b,45,92,02)) == HX_("true",4e,a7,03,4d));
            				}
            				else {
HXLINE( 240)					flipX = false;
            				}
HXLINE( 241)				bool flipY;
HXDLIN( 241)				if (texture->has->resolve(HX_("flipY",0c,45,92,02))) {
HXLINE( 241)					flipY = (texture->att->resolve(HX_("flipY",0c,45,92,02)) == HX_("true",4e,a7,03,4d));
            				}
            				else {
HXLINE( 241)					flipY = false;
            				}
HXLINE( 243)				Float X = ::Std_obj::parseFloat(texture->att->resolve(HX_("x",78,00,00,00)));
HXDLIN( 243)				Float Y = ::Std_obj::parseFloat(texture->att->resolve(HX_("y",79,00,00,00)));
HXDLIN( 243)				Float Width = ::Std_obj::parseFloat(texture->att->resolve(HX_("width",06,b6,62,ca)));
HXDLIN( 243)				Float Height = ::Std_obj::parseFloat(texture->att->resolve(HX_("height",e7,07,4c,02)));
HXDLIN( 243)				 ::flixel::math::FlxRect _this = ::flixel::math::FlxRect_obj::_pool->get();
HXDLIN( 243)				_this->x = X;
HXDLIN( 243)				_this->y = Y;
HXDLIN( 243)				_this->width = Width;
HXDLIN( 243)				_this->height = Height;
HXDLIN( 243)				 ::flixel::math::FlxRect rect = _this;
HXDLIN( 243)				rect->_inPool = false;
HXDLIN( 243)				 ::flixel::math::FlxRect rect1 = rect;
HXLINE( 245)				 ::openfl::_legacy::geom::Rectangle size;
HXDLIN( 245)				if (trimmed) {
HXLINE( 247)					 ::Dynamic size1 = ::Std_obj::parseInt(texture->att->resolve(HX_("frameX",8b,af,85,ac)));
HXDLIN( 247)					 ::Dynamic size2 = ::Std_obj::parseInt(texture->att->resolve(HX_("frameY",8c,af,85,ac)));
HXDLIN( 247)					 ::Dynamic size3 = ::Std_obj::parseInt(texture->att->resolve(HX_("frameWidth",99,ea,88,ad)));
HXLINE( 245)					size =  ::openfl::_legacy::geom::Rectangle_obj::__alloc( HX_CTX ,size1,size2,size3,::Std_obj::parseInt(texture->att->resolve(HX_("frameHeight",f4,d3,93,e0))));
            				}
            				else {
HXLINE( 245)					size =  ::openfl::_legacy::geom::Rectangle_obj::__alloc( HX_CTX ,(int)0,(int)0,rect1->width,rect1->height);
            				}
HXLINE( 254)				int angle;
HXDLIN( 254)				if (rotated) {
HXLINE( 254)					angle = (int)-90;
            				}
            				else {
HXLINE( 254)					angle = (int)0;
            				}
HXLINE( 256)				Float X1 = -(size->get_left());
HXDLIN( 256)				Float Y1 = -(size->get_top());
HXDLIN( 256)				 ::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(X1,Y1);
HXDLIN( 256)				point->_inPool = false;
HXDLIN( 256)				 ::flixel::math::FlxPoint offset = point;
HXLINE( 257)				Float X2 = size->width;
HXDLIN( 257)				Float Y2 = size->height;
HXDLIN( 257)				 ::flixel::math::FlxPoint point1 = ::flixel::math::FlxPoint_obj::_pool->get()->set(X2,Y2);
HXDLIN( 257)				point1->_inPool = false;
HXDLIN( 257)				 ::flixel::math::FlxPoint sourceSize = point1;
HXLINE( 259)				bool _hx_tmp1;
HXDLIN( 259)				if (rotated) {
HXLINE( 259)					_hx_tmp1 = !(trimmed);
            				}
            				else {
HXLINE( 259)					_hx_tmp1 = false;
            				}
HXDLIN( 259)				if (_hx_tmp1) {
HXLINE( 260)					sourceSize->set(size->height,size->width);
            				}
HXLINE( 262)				frames->addAtlasFrame(rect1,sourceSize,offset,name,angle,flipX,flipY);
            			}
            		}
HXLINE( 265)		return frames;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxAtlasFrames_obj,fromSparrow,return )

 ::flixel::graphics::frames::FlxAtlasFrames FlxAtlasFrames_obj::fromTexturePackerXml( ::Dynamic Source,::String Description){
            	HX_GC_STACKFRAME(&_hx_pos_d294561f5bda5770_277_fromTexturePackerXml)
HXLINE( 278)		 ::flixel::graphics::FlxGraphic graphic = ::flixel::FlxG_obj::bitmap->add(Source,false,null());
HXLINE( 279)		if (hx::IsNull( graphic )) {
HXLINE( 279)			return null();
            		}
HXLINE( 282)		 ::flixel::graphics::frames::FlxAtlasFrames frames = ::flixel::graphics::frames::FlxAtlasFrames_obj::findFrame(graphic,null());
HXLINE( 283)		if (hx::IsNotNull( frames )) {
HXLINE( 284)			return frames;
            		}
HXLINE( 286)		bool _hx_tmp;
HXDLIN( 286)		if (hx::IsNotNull( graphic )) {
HXLINE( 286)			_hx_tmp = hx::IsNull( Description );
            		}
            		else {
HXLINE( 286)			_hx_tmp = true;
            		}
HXDLIN( 286)		if (_hx_tmp) {
HXLINE( 287)			return null();
            		}
HXLINE( 289)		frames =  ::flixel::graphics::frames::FlxAtlasFrames_obj::__alloc( HX_CTX ,graphic,null());
HXLINE( 291)		if (::openfl::_legacy::Assets_obj::exists(Description,null())) {
HXLINE( 292)			Description = ::openfl::_legacy::Assets_obj::getText(Description);
            		}
HXLINE( 294)		 ::Xml xml = ::Xml_obj::parse(Description);
HXLINE( 296)		{
HXLINE( 296)			 ::Dynamic sprite = xml->firstElement()->elements();
HXDLIN( 296)			while(( (bool)(sprite->__Field(HX_("hasNext",6d,a5,46,18),hx::paccDynamic)()) )){
HXLINE( 296)				 ::Xml sprite1 = ( ( ::Xml)(sprite->__Field(HX_("next",f3,84,02,49),hx::paccDynamic)()) );
HXLINE( 298)				bool trimmed;
HXDLIN( 298)				if (!(sprite1->exists(HX_("oX",09,61,00,00)))) {
HXLINE( 298)					trimmed = sprite1->exists(HX_("oY",0a,61,00,00));
            				}
            				else {
HXLINE( 298)					trimmed = true;
            				}
HXLINE( 299)				bool rotated;
HXDLIN( 299)				if (sprite1->exists(HX_("r",72,00,00,00))) {
HXLINE( 299)					rotated = (sprite1->get(HX_("r",72,00,00,00)) == HX_("y",79,00,00,00));
            				}
            				else {
HXLINE( 299)					rotated = false;
            				}
HXLINE( 300)				int angle;
HXDLIN( 300)				if (rotated) {
HXLINE( 300)					angle = (int)-90;
            				}
            				else {
HXLINE( 300)					angle = (int)0;
            				}
HXLINE( 301)				::String name = sprite1->get(HX_("n",6e,00,00,00));
HXLINE( 302)				 ::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set((int)0,(int)0);
HXDLIN( 302)				point->_inPool = false;
HXDLIN( 302)				 ::flixel::math::FlxPoint offset = point;
HXLINE( 303)				Float X = ::Std_obj::parseInt(sprite1->get(HX_("x",78,00,00,00)));
HXDLIN( 303)				Float Y = ::Std_obj::parseInt(sprite1->get(HX_("y",79,00,00,00)));
HXDLIN( 303)				Float Width = ::Std_obj::parseInt(sprite1->get(HX_("w",77,00,00,00)));
HXDLIN( 303)				Float Height = ::Std_obj::parseInt(sprite1->get(HX_("h",68,00,00,00)));
HXDLIN( 303)				 ::flixel::math::FlxRect _this = ::flixel::math::FlxRect_obj::_pool->get();
HXDLIN( 303)				_this->x = X;
HXDLIN( 303)				_this->y = Y;
HXDLIN( 303)				_this->width = Width;
HXDLIN( 303)				_this->height = Height;
HXDLIN( 303)				 ::flixel::math::FlxRect rect = _this;
HXDLIN( 303)				rect->_inPool = false;
HXDLIN( 303)				 ::flixel::math::FlxRect rect1 = rect;
HXLINE( 304)				Float X1 = rect1->width;
HXDLIN( 304)				Float Y1 = rect1->height;
HXDLIN( 304)				 ::flixel::math::FlxPoint point1 = ::flixel::math::FlxPoint_obj::_pool->get()->set(X1,Y1);
HXDLIN( 304)				point1->_inPool = false;
HXDLIN( 304)				 ::flixel::math::FlxPoint sourceSize = point1;
HXLINE( 306)				if (trimmed) {
HXLINE( 308)					 ::Dynamic _hx_tmp1 = ::Std_obj::parseInt(sprite1->get(HX_("oX",09,61,00,00)));
HXDLIN( 308)					offset->set(_hx_tmp1,::Std_obj::parseInt(sprite1->get(HX_("oY",0a,61,00,00))));
HXLINE( 309)					 ::Dynamic _hx_tmp2 = ::Std_obj::parseInt(sprite1->get(HX_("oW",08,61,00,00)));
HXDLIN( 309)					sourceSize->set(_hx_tmp2,::Std_obj::parseInt(sprite1->get(HX_("oH",f9,60,00,00))));
            				}
HXLINE( 312)				frames->addAtlasFrame(rect1,sourceSize,offset,name,angle,null(),null());
            			}
            		}
HXLINE( 315)		return frames;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxAtlasFrames_obj,fromTexturePackerXml,return )

 ::flixel::graphics::frames::FlxAtlasFrames FlxAtlasFrames_obj::fromSpriteSheetPacker( ::Dynamic Source,::String Description){
            	HX_GC_STACKFRAME(&_hx_pos_d294561f5bda5770_327_fromSpriteSheetPacker)
HXLINE( 328)		 ::flixel::graphics::FlxGraphic graphic = ::flixel::FlxG_obj::bitmap->add(Source,null(),null());
HXLINE( 329)		if (hx::IsNull( graphic )) {
HXLINE( 330)			return null();
            		}
HXLINE( 333)		 ::flixel::graphics::frames::FlxAtlasFrames frames = ::flixel::graphics::frames::FlxAtlasFrames_obj::findFrame(graphic,null());
HXLINE( 334)		if (hx::IsNotNull( frames )) {
HXLINE( 335)			return frames;
            		}
HXLINE( 337)		bool _hx_tmp;
HXDLIN( 337)		if (hx::IsNotNull( graphic )) {
HXLINE( 337)			_hx_tmp = hx::IsNull( Description );
            		}
            		else {
HXLINE( 337)			_hx_tmp = true;
            		}
HXDLIN( 337)		if (_hx_tmp) {
HXLINE( 338)			return null();
            		}
HXLINE( 340)		frames =  ::flixel::graphics::frames::FlxAtlasFrames_obj::__alloc( HX_CTX ,graphic,null());
HXLINE( 342)		if (::openfl::_legacy::Assets_obj::exists(Description,null())) {
HXLINE( 343)			Description = ::openfl::_legacy::Assets_obj::getText(Description);
            		}
HXLINE( 345)		::String pack = ::StringTools_obj::trim(Description);
HXLINE( 346)		::Array< ::String > lines = pack.split(HX_("\n",0a,00,00,00));
HXLINE( 348)		{
HXLINE( 348)			int _g1 = (int)0;
HXDLIN( 348)			int _g = lines->length;
HXDLIN( 348)			while((_g1 < _g)){
HXLINE( 348)				_g1 = (_g1 + (int)1);
HXDLIN( 348)				int i = (_g1 - (int)1);
HXLINE( 350)				::Array< ::String > currImageData = lines->__get(i).split(HX_("=",3d,00,00,00));
HXLINE( 351)				::String name = ::StringTools_obj::trim(currImageData->__get((int)0));
HXLINE( 352)				::Array< ::String > currImageRegion = ::StringTools_obj::trim(currImageData->__get((int)1)).split(HX_(" ",20,00,00,00));
HXLINE( 354)				Float X = ::Std_obj::parseInt(currImageRegion->__get((int)0));
HXDLIN( 354)				Float Y = ::Std_obj::parseInt(currImageRegion->__get((int)1));
HXDLIN( 354)				Float Width = ::Std_obj::parseInt(currImageRegion->__get((int)2));
HXDLIN( 354)				Float Height = ::Std_obj::parseInt(currImageRegion->__get((int)3));
HXDLIN( 354)				 ::flixel::math::FlxRect _this = ::flixel::math::FlxRect_obj::_pool->get();
HXDLIN( 354)				_this->x = X;
HXDLIN( 354)				_this->y = Y;
HXDLIN( 354)				_this->width = Width;
HXDLIN( 354)				_this->height = Height;
HXDLIN( 354)				 ::flixel::math::FlxRect rect = _this;
HXDLIN( 354)				rect->_inPool = false;
HXDLIN( 354)				 ::flixel::math::FlxRect rect1 = rect;
HXLINE( 355)				Float X1 = rect1->width;
HXDLIN( 355)				Float Y1 = rect1->height;
HXDLIN( 355)				 ::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(X1,Y1);
HXDLIN( 355)				point->_inPool = false;
HXDLIN( 355)				 ::flixel::math::FlxPoint sourceSize = point;
HXLINE( 356)				 ::flixel::math::FlxPoint point1 = ::flixel::math::FlxPoint_obj::_pool->get()->set((int)0,(int)0);
HXDLIN( 356)				point1->_inPool = false;
HXDLIN( 356)				 ::flixel::math::FlxPoint offset = point1;
HXLINE( 358)				frames->addAtlasFrame(rect1,sourceSize,offset,name,(int)0,null(),null());
            			}
            		}
HXLINE( 361)		return frames;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxAtlasFrames_obj,fromSpriteSheetPacker,return )

 ::flixel::graphics::frames::FlxAtlasFrames FlxAtlasFrames_obj::findFrame( ::flixel::graphics::FlxGraphic graphic, ::flixel::math::FlxPoint border){
            	HX_STACKFRAME(&_hx_pos_d294561f5bda5770_371_findFrame)
HXLINE( 372)		if (hx::IsNull( border )) {
HXLINE( 373)			 ::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set((int)0,(int)0);
HXDLIN( 373)			point->_inPool = false;
HXDLIN( 373)			 ::flixel::math::FlxPoint point1 = point;
HXDLIN( 373)			point1->_weak = true;
HXDLIN( 373)			border = point1;
            		}
HXLINE( 375)		 ::flixel::graphics::frames::FlxFrameCollectionType type = ::flixel::graphics::frames::FlxFrameCollectionType_obj::ATLAS_dyn();
HXDLIN( 375)		::cpp::VirtualArray collections = ( (::cpp::VirtualArray)(::haxe::IMap_obj::get(graphic->frameCollections,type)) );
HXDLIN( 375)		if (hx::IsNull( collections )) {
HXLINE( 375)			collections = ::Array_obj< ::Dynamic>::__new();
HXDLIN( 375)			::haxe::IMap_obj::set(graphic->frameCollections,type,collections);
            		}
HXDLIN( 375)		::Array< ::Dynamic> atlasFrames = collections;
HXLINE( 377)		{
HXLINE( 377)			int _g = (int)0;
HXDLIN( 377)			while((_g < atlasFrames->length)){
HXLINE( 377)				 ::flixel::graphics::frames::FlxAtlasFrames atlas = atlasFrames->__get(_g).StaticCast<  ::flixel::graphics::frames::FlxAtlasFrames >();
HXDLIN( 377)				_g = (_g + (int)1);
HXLINE( 378)				 ::flixel::math::FlxPoint _this = atlas->border;
HXDLIN( 378)				bool result;
HXDLIN( 378)				if ((::Math_obj::abs((_this->x - border->x)) <= ((Float)0.0000001))) {
HXLINE( 378)					result = (::Math_obj::abs((_this->y - border->y)) <= ((Float)0.0000001));
            				}
            				else {
HXLINE( 378)					result = false;
            				}
HXDLIN( 378)				if (border->_weak) {
HXLINE( 378)					border->put();
            				}
HXDLIN( 378)				if (result) {
HXLINE( 379)					return atlas;
            				}
            			}
            		}
HXLINE( 381)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxAtlasFrames_obj,findFrame,return )


hx::ObjectPtr< FlxAtlasFrames_obj > FlxAtlasFrames_obj::__new( ::flixel::graphics::FlxGraphic parent, ::flixel::math::FlxPoint border) {
	hx::ObjectPtr< FlxAtlasFrames_obj > __this = new FlxAtlasFrames_obj();
	__this->__construct(parent,border);
	return __this;
}

hx::ObjectPtr< FlxAtlasFrames_obj > FlxAtlasFrames_obj::__alloc(hx::Ctx *_hx_ctx, ::flixel::graphics::FlxGraphic parent, ::flixel::math::FlxPoint border) {
	FlxAtlasFrames_obj *__this = (FlxAtlasFrames_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(FlxAtlasFrames_obj), true, "flixel.graphics.frames.FlxAtlasFrames"));
	*(void **)__this = FlxAtlasFrames_obj::_hx_vtable;
	__this->__construct(parent,border);
	return __this;
}

FlxAtlasFrames_obj::FlxAtlasFrames_obj()
{
}

hx::Val FlxAtlasFrames_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"addBorder") ) { return hx::Val( addBorder_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool FlxAtlasFrames_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"findFrame") ) { outValue = findFrame_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fromLibGdx") ) { outValue = fromLibGdx_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"fromSparrow") ) { outValue = fromSparrow_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getDimensions") ) { outValue = getDimensions_dyn(); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"texturePackerHelper") ) { outValue = texturePackerHelper_dyn(); return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"fromTexturePackerXml") ) { outValue = fromTexturePackerXml_dyn(); return true; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"fromTexturePackerJson") ) { outValue = fromTexturePackerJson_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"fromSpriteSheetPacker") ) { outValue = fromSpriteSheetPacker_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *FlxAtlasFrames_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *FlxAtlasFrames_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxAtlasFrames_obj_sMemberFields[] = {
	HX_HCSTRING("addBorder","\xed","\x81","\x3e","\x1c"),
	::String(null()) };

static void FlxAtlasFrames_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxAtlasFrames_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FlxAtlasFrames_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxAtlasFrames_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxAtlasFrames_obj::__mClass;

static ::String FlxAtlasFrames_obj_sStaticFields[] = {
	HX_HCSTRING("fromTexturePackerJson","\xbf","\xf0","\x7e","\xbe"),
	HX_HCSTRING("texturePackerHelper","\x0f","\x23","\xbd","\xb2"),
	HX_HCSTRING("fromLibGdx","\x80","\x06","\xdf","\x27"),
	HX_HCSTRING("getDimensions","\x83","\x1a","\x12","\x39"),
	HX_HCSTRING("fromSparrow","\xc2","\x9f","\xec","\x33"),
	HX_HCSTRING("fromTexturePackerXml","\x20","\xdf","\x27","\xfb"),
	HX_HCSTRING("fromSpriteSheetPacker","\xb6","\xb2","\xc0","\x5f"),
	HX_HCSTRING("findFrame","\x34","\xa9","\x7a","\xf5"),
	::String(null())
};

void FlxAtlasFrames_obj::__register()
{
	hx::Object *dummy = new FlxAtlasFrames_obj;
	FlxAtlasFrames_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.graphics.frames.FlxAtlasFrames","\xd6","\x87","\xd5","\x6f");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxAtlasFrames_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = FlxAtlasFrames_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(FlxAtlasFrames_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(FlxAtlasFrames_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxAtlasFrames_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FlxAtlasFrames_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxAtlasFrames_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxAtlasFrames_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace graphics
} // end namespace frames