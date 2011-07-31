/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/GameKit.framework/GameKit
 */

#import "GameKit-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIImage, UIColor, GKUITheme, UILabel;

@interface GKInviteButton : XXUnknownSuperclass {
	GKUITheme* _theme;
	UILabel* _titleLabel;
	UIImage* _normalImage;
	UIColor* _normalTitleColor;
	UIColor* _normalShadowTitleColor;
	UIImage* _highlightImage;
	UIColor* _highlightTitleColor;
	UIColor* _highlightShadowTitleColor;
	UIEdgeInsets _titleEdgeInsets;
	float _leftCapWidth;
	float _mostlyInsideInset;
	BOOL _adjustsImageWhenHighlighted;
}
@property(retain, nonatomic) GKUITheme* theme;
@property(retain, nonatomic) UILabel* titleLabel;
@property(retain, nonatomic) UIImage* normalImage;
@property(retain, nonatomic) UIColor* normalTitleColor;
@property(retain, nonatomic) UIColor* normalTitleShadowColor;
@property(retain, nonatomic) UIImage* highlightImage;
@property(retain, nonatomic) UIColor* highlightTitleColor;
@property(retain, nonatomic) UIColor* highlightTitleShadowColor;
@property(assign, nonatomic) UIEdgeInsets titleEdgeInsets;
@property(assign, nonatomic) float leftCapWidth;
@property(assign, nonatomic) float mostlyInsideInset;
@property(assign, nonatomic) BOOL adjustsImageWhenHighlighted;
-(id)initWithTheme:(id)theme;
-(void)dealloc;
-(void)setToInviteOrUninvite;
-(void)setToInvite;
-(void)setToUninvite;
-(void)setToConfirm;
-(void)setHighlighted:(BOOL)highlighted;
-(void)setNormalShadowTitleColor:(id)color;
-(void)setHightlightTitleColor:(id)color;
-(void)setHightlightShadowTitleColor:(id)color;
-(void)layoutSubviews;
-(void)drawRect:(CGRect)rect;
-(BOOL)isAccessibilityElement;
-(id)accessibilityLabel;
-(unsigned long long)accessibilityTraits;
@end

