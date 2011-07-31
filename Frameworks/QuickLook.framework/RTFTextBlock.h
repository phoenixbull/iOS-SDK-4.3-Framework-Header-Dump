/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "QuickLook-Structs.h"
#import "NSCopying.h"


__attribute__((visibility("hidden")))
@interface RTFTextBlock : XXUnknownSuperclass <NSCopying> {
@private
	void* _propVals;
	unsigned _propMask;
	unsigned _typeMask;
	id _primParamVal;
	id _otherParamVals;
	void* _blockPrimary;
	void* _blockSecondary;
}
-(id)init;
-(void)_createFloatStorage;
-(void)_destroyFloatStorage;
-(void)dealloc;
-(void)_setValue:(float)value type:(unsigned)type forParameter:(unsigned)parameter;
-(float)_valueForParameter:(unsigned)parameter;
-(unsigned)_valueTypeForParameter:(unsigned)parameter;
-(void)_takeValuesFromTextBlock:(id)textBlock;
-(id)copyWithZone:(NSZone*)zone;
-(void)setValue:(float)value type:(unsigned)type forDimension:(unsigned)dimension;
-(float)valueForDimension:(unsigned)dimension;
-(unsigned)valueTypeForDimension:(unsigned)dimension;
-(void)setContentWidth:(float)width type:(unsigned)type;
-(float)contentWidth;
-(unsigned)contentWidthValueType;
-(void)setWidth:(float)width type:(unsigned)type forLayer:(int)layer edge:(unsigned)edge;
-(float)widthForLayer:(int)layer edge:(unsigned)edge;
-(unsigned)widthValueTypeForLayer:(int)layer edge:(unsigned)edge;
-(void)setWidth:(float)width type:(unsigned)type forLayer:(int)layer;
-(void)setVerticalAlignment:(unsigned)alignment;
-(unsigned)verticalAlignment;
-(void)setBackgroundColor:(id)color;
-(id)backgroundColor;
-(void)setBorderColor:(id)color forEdge:(unsigned)edge;
-(id)borderColorForEdge:(unsigned)edge;
-(void)setBorderColor:(id)color;
-(id)_attributeDescription;
@end

