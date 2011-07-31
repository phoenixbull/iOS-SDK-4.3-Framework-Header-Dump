/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/GameKit.framework/GameKit
 */

#import "GKTableViewCellContents.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class GKUITheme, UILabel, UIImageView, NSString;

@interface GKSectionHeader : XXUnknownSuperclass <GKTableViewCellContents> {
	UIImageView* _leftOrnamentView;
	UIImageView* _rightOrnamentView;
	UILabel* _leftLabel;
	GKUITheme* _theme;
	UILabel* _rightLabel;
	int _style;
	float _fontSize;
	float _bottomOffset;
}
@property(retain, nonatomic) UIImageView* leftOrnamentView;
@property(retain, nonatomic) UIImageView* rightOrnamentView;
@property(retain, nonatomic) UILabel* leftLabel;
@property(retain, nonatomic) GKUITheme* theme;
@property(retain, nonatomic) UILabel* rightLabel;
@property(assign, nonatomic) int style;
@property(assign, nonatomic) float fontSize;
@property(assign, nonatomic) float bottomOffset;
@property(assign, nonatomic) int secondaryLineBreakMode;
@property(assign, nonatomic) int primaryLineBreakMode;
@property(retain, nonatomic) NSString* secondaryText;
@property(retain, nonatomic) NSString* primaryText;
-(id)init;
-(void)dealloc;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(float)preferredHeightForOrientation:(int)orientation;
@end

