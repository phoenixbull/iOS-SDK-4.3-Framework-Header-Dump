/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class SUNavigationItem, UIView, UIBarButtonItem;

@interface SUSecondaryButtonTitleView : XXUnknownSuperclass {
	UIBarButtonItem* _buttonItem;
	UIView* _buttonItemView;
	SUNavigationItem* _navigationItem;
	UIView* _titleView;
	BOOL _titleViewIsCustom;
}
@property(retain, nonatomic) UIBarButtonItem* buttonItem;
@property(assign, nonatomic, getter=isCustomTitleView) BOOL customTitleView;
@property(assign, nonatomic) SUNavigationItem* navigationItem;
@property(retain, nonatomic) UIView* titleView;
-(id)init;
-(id)initWithNavigationItem:(id)navigationItem;
-(void)dealloc;
-(void)layoutSubviews;
-(void)sizeToFit;
@end

