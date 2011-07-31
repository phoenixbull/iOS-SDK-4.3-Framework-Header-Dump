/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import "SUScriptObject.h"
#import "NSObject.h"

@class NSString, UINavigationItem;
@protocol SUScriptNavigationItem;

@protocol SUScriptNavigationItem <NSObject>
-(id)buttonItem;
@end

@interface SUScriptNavigationItem : SUScriptObject {
	id _scriptLeftItem;
	id _scriptRightItem;
}
@property(retain) id<SUScriptNavigationItem> rightItem;
@property(retain) id<SUScriptNavigationItem> leftItem;
@property(assign) id hidesBackButton;
@property(retain) NSString* title;
@property(retain) NSString* prompt;
@property(readonly, assign, nonatomic) UINavigationItem* nativeNavigationItem;
+(id)webScriptNameForKey:(const char*)key;
+(id)webScriptNameForSelector:(SEL)selector;
-(id)init;
-(id)initWithNativeNavigationItem:(id)nativeNavigationItem;
-(void)dealloc;
-(void)tearDownUserInterface;
-(id)_className;
-(void)setHidesBackButton:(BOOL)button animated:(BOOL)animated;
-(void)setLeftItem:(id)item animated:(BOOL)animated;
-(void)setRightItem:(id)item animated:(BOOL)animated;
-(id)_copyLeftItem;
-(id)_copyPrompt;
-(id)_copyRightItem;
-(id)_copyTitle;
-(BOOL)_hidesBackButton;
-(void)_setHidesBackButton:(BOOL)button animated:(BOOL)animated;
-(void)_setLeftItem:(id)item animated:(BOOL)animated;
-(void)_setPrompt:(id)prompt;
-(void)_setRightItem:(id)item animated:(BOOL)animated;
-(void)_setTitle:(id)title;
-(id)_copyScriptButtonForButtonItem:(id)buttonItem;
-(id)_copyScriptObjectForButtonItem:(id)buttonItem;
-(void)_setScriptLeftItem:(id)item;
-(void)_setScriptRightItem:(id)item;
-(id)attributeKeys;
-(id)scriptAttributeKeys;
@end

