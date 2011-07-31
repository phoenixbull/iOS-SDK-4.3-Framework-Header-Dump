/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

#import "TelephonyUI-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

@interface TPPushButton : XXUnknownSuperclass {
	NSString* _plusSeparatedTitle;
	int _tpcolor;
	float _titleImagePadding;
	float _titleImageRightMargin;
	float _titleVerticalOffset;
	float _iconVerticalOffset;
	float _iconAlpha;
	float _minimumFontSize;
	BOOL _imageIsOptional;
}
+(float)defaultHeight;
+(float)defaultHeightForColor:(int)color;
+(void)preloadImagesForColor:(int)color;
+(id)answerButtonImage;
+(id)declineButtonImage;
+(id)declineVideoButtonImage;
+(id)acceptVideoButtonImage;
-(float)minTitleMargin;
-(id)initWithTitle:(id)title icon:(id)icon color:(int)color frame:(CGRect)frame;
-(id)initWithTitle:(id)title icon:(id)icon color:(int)color frame:(CGRect)frame imageIsOptional:(BOOL)optional;
-(void)dealloc;
-(void)setPlusSeparatedTitle:(id)title;
-(void)setPushButtonColor:(int)color;
-(int)pushButtonColor;
-(float)titleImagePadding;
-(void)setTitleImagePadding:(float)padding;
-(void)setTitleImageRightMargin:(float)margin;
-(void)setTitleVerticalOffset:(float)offset;
-(void)setIconVerticalOffset:(float)offset;
-(void)setIconAlpha:(float)alpha;
-(void)drawImageAtPoint:(CGPoint)point fraction:(float)fraction;
-(void)drawTitleAtPoint:(CGPoint)point width:(float)width;
-(CGPoint)_titleOriginForTitleSize:(CGSize)titleSize;
-(void)drawButtonPart:(int)part inRect:(CGRect)rect;
-(void)setMinimumTitleFontSize:(float)size;
-(void)setImageIsOptional:(BOOL)optional;
-(BOOL)imageIsOptional;
@end

