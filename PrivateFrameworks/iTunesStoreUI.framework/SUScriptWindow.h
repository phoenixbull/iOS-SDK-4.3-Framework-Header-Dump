/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import "iTunesStoreUI-Structs.h"
#import "SUScriptObject.h"

@class WebScriptObject, NSNumber, SUScriptCanvasFunction, NSString, SUScriptViewController, SUScriptFunction, SUScriptWindowContext;

@interface SUScriptWindow : SUScriptObject {
	SUScriptWindowContext* _context;
	SUScriptCanvasFunction* _maskFunction;
	SUScriptFunction* _shouldDismissFunction;
	id _backViewController;
	id _frontViewController;
	id _height;
	id _shadowOpacity;
	id _shadowRadius;
	id _style;
	id _width;
	id _windowParentViewController;
}
@property(readonly, assign) SUScriptWindowContext* context;
@property(readonly, assign, getter=_windowParentViewController) SUScriptViewController* windowParentViewController;
@property(readonly, assign, getter=_width) NSNumber* width;
@property(retain, getter=_style, setter=set_style:) NSString* style;
@property(retain, getter=_shouldDismissFunction, setter=set_shouldDismissFunction:) WebScriptObject* shouldDismissFunction;
@property(retain, getter=_shadowRadius, setter=set_shadowRadius:) NSNumber* shadowRadius;
@property(retain, getter=_shadowOpacity, setter=set_shadowOpacity:) NSNumber* shadowOpacity;
@property(retain, getter=_maskFunction, setter=set_maskFunction:) WebScriptObject* maskFunction;
@property(readonly, assign, getter=_height) NSNumber* height;
@property(retain, getter=_frontViewController, setter=set_frontViewController:) SUScriptViewController* frontViewController;
@property(retain, getter=_backViewController, setter=set_backViewController:) SUScriptViewController* backViewController;
+(void)dismissWindowsWithOptions:(id)options;
+(id)webScriptNameForKey:(const char*)key;
+(id)webScriptNameForSelector:(SEL)selector;
+(void)_dismissWindowsAnimated:(BOOL)animated;
-(id)init;
-(id)initWithContext:(id)context;
-(void)dealloc;
-(void)dismiss:(id)dismiss;
-(void)flip:(id)flip;
-(void)show:(id)show;
-(id)_className;
-(void)set_height:(id)height;
-(void)set_width:(id)width;
-(void)set_windowParentViewController:(id)controller;
-(void)_overlayDidDismissNotification:(id)_overlay;
-(void)_overlayDidFlipNotification:(id)_overlay;
-(void)_overlayDidShowNotification:(id)_overlay;
-(id)_copyBackViewController;
-(id)_copyFrontViewController;
-(id)_copyShouldDismissFunction;
-(id)_copyWindowParentViewController;
-(void)_dismiss:(id)dismiss;
-(void)_flip:(id)flip;
-(float)_mainThreadShadowOpacity;
-(float)_mainThreadShadowRadius;
-(CGSize)_overlaySize;
-(void)_reloadVisibility;
-(void)_setBackViewController:(id)controller;
-(void)_setFrontViewController:(id)controller;
-(void)_setHeight:(float)height;
-(void)_setMaskFunction:(id)function;
-(void)_setShadowOpacity:(float)opacity;
-(void)_setShadowRadius:(float)radius;
-(void)_setShouldDismissFunction:(id)_set;
-(void)_setWidth:(float)width;
-(void)_show:(id)show;
-(id)_backgroundViewController:(BOOL)controller;
-(id)_copySafeTransitionOptionsFromOptions:(id)options;
-(id)_newOverlayTransitionWithOptions:(id)options;
-(id)_overlayViewController:(BOOL)controller;
-(void)_registerForOverlayNotifications;
@end

