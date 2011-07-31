/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "NSCoding.h"

@class UINavigationBar, UIBarButtonItem, NSString, UIImageView, UIView;

@interface UINavigationItem : XXUnknownSuperclass <NSCoding> {
@private
	NSString* _title;
	NSString* _backButtonTitle;
	UIBarButtonItem* _backBarButtonItem;
	NSString* _prompt;
	int _tag;
	id _context;
	UINavigationBar* _navigationBar;
	UIView* _defaultTitleView;
	UIView* _titleView;
	UIView* _backButtonView;
	UIBarButtonItem* _leftBarButtonItem;
	UIBarButtonItem* _rightBarButtonItem;
	UIView* _customLeftView;
	UIView* _customRightView;
	BOOL _hidesBackButton;
	UIImageView* _frozenTitleView;
}
@property(retain, nonatomic) UIView* titleView;
@property(retain, nonatomic) UIBarButtonItem* rightBarButtonItem;
@property(retain, nonatomic) UIBarButtonItem* leftBarButtonItem;
@property(assign, nonatomic) BOOL hidesBackButton;
@property(copy, nonatomic) NSString* prompt;
@property(retain, nonatomic) UIBarButtonItem* backBarButtonItem;
@property(copy, nonatomic) NSString* title;
+(id)defaultFont;
-(id)initWithTitle:(id)title;
-(id)initWithCoder:(id)coder;
-(void)encodeWithCoder:(id)coder;
-(void)dealloc;
-(id)navigationBar;
-(void)setNavigationBar:(id)bar;
-(void)_freezeCurrentTitleView;
-(void)_cleanupFrozenTitleView;
-(void)_setTitleAnimationDidStop:(id)_setTitleAnimation finished:(id)finished context:(void*)context;
-(void)_setTitle:(id)title animated:(BOOL)animated;
-(void)setBackButtonTitle:(id)title;
-(void)_setBackButtonTitle:(id)title lineBreakMode:(int)mode;
-(id)backButtonTitle;
-(id)currentBackButtonTitle;
-(float)width;
-(void)setWidth:(float)width;
-(void)setFont:(id)font;
-(id)font;
-(void)setTag:(int)tag;
-(int)tag;
-(void)setContext:(id)context;
-(id)context;
-(void)_removeTitleAndButtonViews;
-(void)_removeBackButtonView;
-(void)_removeCustomLeftView;
-(void)_removeCustomRightView;
-(id)existingBackButtonView;
-(id)backButtonView;
-(void)updateNavigationBarButtonsAnimated:(BOOL)animated;
-(void)setHidesBackButton:(BOOL)button animated:(BOOL)animated;
-(void)setObject:(id)object forLeftRightKeyPath:(id)leftRightKeyPath animated:(BOOL)animated;
-(id)_leftBarButtonItem;
-(void)_setLeftBarButtonItem:(id)item;
-(void)setLeftBarButtonItem:(id)item animated:(BOOL)animated;
-(id)_rightBarButtonItem;
-(void)_setRightBarButtonItem:(id)item;
-(void)setRightBarButtonItem:(id)item animated:(BOOL)animated;
-(id)_customLeftView;
-(void)_setCustomLeftView:(id)view;
-(id)customLeftView;
-(void)setCustomLeftView:(id)view;
-(void)setCustomLeftView:(id)view animated:(BOOL)animated;
-(id)_customRightView;
-(void)_setCustomRightView:(id)view;
-(id)customRightView;
-(void)setCustomRightView:(id)view;
-(void)setCustomRightView:(id)view animated:(BOOL)animated;
-(void)_updateViewsForBarSizeChangeIfNecessary;
-(id)_titleView;
-(void)setCustomTitleView:(id)view;
-(id)customTitleView;
-(void)setCustomLeftItem:(id)item;
-(id)customLeftItem;
-(void)setCustomLeftItem:(id)item animated:(BOOL)animated;
-(void)setCustomRightItem:(id)item;
-(id)customRightItem;
-(void)setCustomRightItem:(id)item animated:(BOOL)animated;
-(id)_automationID;
@end

