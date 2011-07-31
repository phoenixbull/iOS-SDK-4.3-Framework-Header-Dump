/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIButton.h"
#import "UIKit-Structs.h"

@class UINavigationBar, UIColor, NSString, NSSet, UIImage;

@interface UINavigationButton : UIButton {
@private
	NSSet* _possibleTitles;
	int _style;
	int _barStyle;
	UIColor* _tintColor;
	CGSize _boundsAdjustment;
	UINavigationBar* _navigationBar;
	unsigned _size : 2;
	unsigned _pad : 30;
}
@property(assign, nonatomic) int style;
@property(assign, nonatomic) int barStyle;
@property(retain, nonatomic) UIColor* tintColor;
@property(assign, nonatomic) int controlSize;
@property(retain, nonatomic) UIImage* image;
@property(retain, nonatomic) NSString* title;
+(id)defaultFont;
-(void)_updateStyle;
-(void)_setNavigationBar:(id)bar;
-(id)initWithValue:(id)value width:(float)width style:(int)style barStyle:(int)style4 possibleTitles:(id)titles tintColor:(id)color applyBezel:(BOOL)bezel forButtonItemStyle:(int)buttonItemStyle;
-(id)initWithValue:(id)value width:(float)width style:(int)style barStyle:(int)style4 possibleTitles:(id)titles tintColor:(id)color;
-(id)initWithTitle:(id)title;
-(id)initWithTitle:(id)title style:(int)style;
-(id)initWithTitle:(id)title possibleTitles:(id)titles style:(int)style;
-(id)initWithImage:(id)image width:(float)width style:(int)style applyBezel:(BOOL)bezel forBarStyle:(int)barStyle buttonItemStyle:(int)style6;
-(id)initWithImage:(id)image width:(float)width style:(int)style;
-(id)initWithImage:(id)image;
-(id)initWithImage:(id)image style:(int)style;
-(void)dealloc;
-(BOOL)contentsEqualTo:(id)to withStyle:(int)style;
-(CGSize)sizeThatFits:(CGSize)fits;
-(BOOL)_canHandleStatusBarMouseEvents:(GSEventRef)events;
-(id)_scriptingInfo;
-(void)_adjustBounds;
-(void)setFrame:(CGRect)frame;
-(void)_setBoundsAdjustment:(CGSize)adjustment;
-(void)_updateContentInsets;
-(CGPoint)_offsetForMiniBarState:(BOOL)miniBarState;
@end

