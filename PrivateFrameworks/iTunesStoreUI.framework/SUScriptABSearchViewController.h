/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import "SUScriptViewController.h"

@class NSArray;

@interface SUScriptABSearchViewController : SUScriptViewController {
	NSArray* _properties;
	int _scope;
}
@property(readonly, assign) int numberOfResults;
+(id)webScriptNameForKey:(const char*)key;
+(id)webScriptNameForSelector:(SEL)selector;
-(id)init;
-(id)initWithOptions:(id)options;
-(void)dealloc;
-(id)newNativeViewController;
-(void)setNativeViewController:(id)controller;
-(void)cancelSearchWithTag:(id)tag;
-(id)searchForText:(id)text;
-(void)resetResults;
-(id)_className;
-(void)_cancelSearchWithTag:(id)tag;
-(int)_numberOfResults;
-(id)_searchForText:(id)text;
-(void)_resetResults;
-(id)_contactsSearchViewController;
-(id)attributeKeys;
-(id)scriptAttributeKeys;
@end

