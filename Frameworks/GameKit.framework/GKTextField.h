/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/GameKit.framework/GameKit
 */

#import "GameKit-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class GKUITheme;

@interface GKTextField : XXUnknownSuperclass {
	GKUITheme* _theme;
	int _sectionLocation;
	BOOL _useHeaderViewAppearance;
}
@property(retain, nonatomic) GKUITheme* theme;
@property(assign, nonatomic) int sectionLocation;
@property(assign, nonatomic) BOOL useHeaderViewAppearance;
-(id)initWithFrame:(CGRect)frame;
-(void)dealloc;
-(void)updateBackgroundImage;
-(void)drawPlaceholderInRect:(CGRect)rect;
-(void)drawTextInRect:(CGRect)rect;
-(id)clearButton;
-(CGRect)textRectForBounds:(CGRect)bounds;
-(CGRect)placeholderRectForBounds:(CGRect)bounds;
-(CGRect)editingRectForBounds:(CGRect)bounds;
-(CGRect)clearButtonRectForBounds:(CGRect)bounds;
@end

