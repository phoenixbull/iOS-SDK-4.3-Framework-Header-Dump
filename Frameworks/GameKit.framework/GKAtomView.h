/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/GameKit.framework/GameKit
 */

#import "GameKit-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class GKUITheme, UILabel, GKAtomBackgroundView;

@interface GKAtomView : XXUnknownSuperclass {
	GKAtomBackgroundView* _background;
	GKUITheme* _theme;
	UILabel* _label;
	id _delegate;
	unsigned _disclosure : 1;
	unsigned _invalidAddress : 1;
	unsigned _selected : 1;
	float _width;
}
@property(retain, nonatomic) GKUITheme* theme;
@property(assign, nonatomic) BOOL invalidAddress;
+(float)defaultHeight;
+(float)horizontalPadding;
-(id)initWithFrame:(CGRect)frame theme:(id)theme;
-(void)dealloc;
-(id)backgroundImage;
-(id)title;
-(void)setTitle:(id)title;
-(void)setShowsDisclosure:(BOOL)disclosure;
-(void)updateBackgroundViewImage;
-(void)updateTextColor;
-(BOOL)selected;
-(void)setSelected:(BOOL)selected;
-(void)showBackground:(BOOL)background;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)fits;
@end

