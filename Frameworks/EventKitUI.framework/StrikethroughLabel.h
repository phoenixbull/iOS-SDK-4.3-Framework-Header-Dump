/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import "EventKitUI-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSIndexSet;

@interface StrikethroughLabel : XXUnknownSuperclass {
	BOOL _strikethroughEnabled;
	NSIndexSet* _textMetrics;
}
@property(assign, nonatomic) BOOL strikethroughEnabled;
-(void)setBounds:(CGRect)bounds;
-(void)setFont:(id)font;
-(void)setText:(id)text;
-(void)setLineBreakMode:(int)mode;
-(void)dealloc;
-(id)_textMetrics;
-(void)_invalidateTextMetrics;
-(void)drawRect:(CGRect)rect;
@end
