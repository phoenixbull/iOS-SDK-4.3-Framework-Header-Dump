/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/GameKit.framework/GameKit
 */

#import "GameKit-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIActivityIndicatorView, GKUITheme, UILabel, UIImageView, NSString;

@interface GKBackgroundView : XXUnknownSuperclass {
	GKUITheme* _theme;
	BOOL _loading;
	UIEdgeInsets _contentInsets;
	UIEdgeInsets _backgroundInsets;
	int _shadowStyle;
	id _loadingHandler;
	UILabel* _statusLabel;
	UIActivityIndicatorView* _loadingSpinner;
	BOOL _shouldHideLabelAfterLoading;
	UIImageView* _upperShadowView;
	UIImageView* _lowerShadowView;
	UIEdgeInsets _shadowInsets;
	UIEdgeInsets _statusInsets;
}
@property(retain, nonatomic) GKUITheme* theme;
@property(assign, nonatomic) BOOL loading;
@property(assign, nonatomic) UIEdgeInsets contentInsets;
@property(assign, nonatomic) UIEdgeInsets backgroundInsets;
@property(assign, nonatomic) int shadowStyle;
@property(copy, nonatomic) id loadingHandler;
@property(retain, nonatomic) UILabel* statusLabel;
@property(retain, nonatomic) UIActivityIndicatorView* loadingSpinner;
@property(assign, nonatomic) BOOL shouldHideLabelAfterLoading;
@property(retain, nonatomic) UIImageView* upperShadowView;
@property(retain, nonatomic) UIImageView* lowerShadowView;
@property(assign, nonatomic) UIEdgeInsets shadowInsets;
@property(assign, nonatomic) UIEdgeInsets statusInsets;
@property(retain, nonatomic) NSString* status;
@property(readonly, assign, nonatomic) CGRect contentBounds;
-(id)initWithFrame:(CGRect)frame;
-(void)dealloc;
-(void)updateLoading;
-(void)setLoadingWithNoDelay;
-(void)updateShadowViews;
-(void)layoutSubviews;
@end

