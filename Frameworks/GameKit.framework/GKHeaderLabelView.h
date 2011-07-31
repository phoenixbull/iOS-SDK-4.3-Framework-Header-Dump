/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/GameKit.framework/GameKit
 */

#import "GameKit-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class GKUITheme, NSString;

@interface GKHeaderLabelView : XXUnknownSuperclass {
	NSString* _label;
	GKUITheme* _theme;
	unsigned _highlighted : 1;
}
@property(retain, nonatomic) GKUITheme* theme;
-(void)drawRect:(CGRect)rect;
-(void)setLabel:(id)label;
-(void)setLabelHighlighted:(BOOL)highlighted;
-(void)dealloc;
@end

