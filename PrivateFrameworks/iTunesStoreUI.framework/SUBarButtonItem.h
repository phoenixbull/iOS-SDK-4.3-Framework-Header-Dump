/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "iTunesStoreUI-Structs.h"

@class UINavigationItem, UIView;

@interface SUBarButtonItem : XXUnknownSuperclass {
	UIView* _accessoryView;
	UIEdgeInsets _accessoryViewInsets;
	UINavigationItem* _lastNavigationItem;
}
@property(retain, nonatomic) UIView* accessoryView;
@property(assign, nonatomic) UIEdgeInsets accessoryViewInsets;
@property(assign, nonatomic, getter=isLoading) BOOL loading;
+(Class)classForNavigationButton;
-(void)dealloc;
-(void)configureFromScriptButton:(id)scriptButton;
-(id)createViewForNavigationItem:(id)navigationItem;
-(id)_navigationButton;
-(void)_updateViewForAccessoryChange;
@end

