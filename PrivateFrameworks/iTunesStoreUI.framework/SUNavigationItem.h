/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class UIView, UIBarButtonItem;

@interface SUNavigationItem : XXUnknownSuperclass {
	BOOL _returnsInternalTitleView;
}
@property(retain, nonatomic) UIBarButtonItem* secondaryLeftBarButtonItem;
@property(readonly, assign, nonatomic) UIView* internalTitleView;
-(void)setSecondaryLeftBarButtonItem:(id)item animated:(BOOL)animated;
-(void)setTitleView:(id)view;
-(id)titleView;
-(void)_setReturnsInternalTitleView:(BOOL)view;
@end

