/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import "SUScriptObject.h"
#import "iTunesStoreUI-Structs.h"


@interface SUScriptColor : SUScriptObject {
	CGColorRef _color;
	float _alpha;
	float _blue;
	float _green;
	float _red;
}
@property(assign, getter=_alpha, setter=set_alpha:) float alpha;
@property(assign, getter=_blue, setter=set_blue:) float blue;
@property(assign, getter=_green, setter=set_green:) float green;
@property(assign, getter=_red, setter=set_red:) float red;
+(id)webScriptNameForKey:(const char*)key;
+(id)webScriptNameForSelector:(SEL)selector;
-(id)initWithCGColor:(CGColorRef)cgcolor;
-(id)initWithStyleString:(id)styleString;
-(void)dealloc;
-(CGColorRef)copyCGColor;
-(id)stringRepresentation;
-(void)setHue:(float)hue saturation:(float)saturation brightness:(float)brightness alpha:(float)alpha;
-(void)setRed:(float)red green:(float)green blue:(float)blue alpha:(float)alpha;
-(void)setWhite:(float)white alpha:(float)alpha;
-(id)_className;
-(void)_ntsSetColor:(CGColorRef)color;
@end

