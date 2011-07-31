/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "UIKit-Structs.h"
#import "UITextInputTokenizer.h"

@class UIResponder;
@protocol UITextInput;

@interface UITextInputStringTokenizer : XXUnknownSuperclass <UITextInputTokenizer> {
@private
	UIResponder<UITextInput>* _textInput;
}
-(id)initWithTextInput:(id)textInput;
-(NSRange)_getClosestTokenRangeForPosition:(id)position granularity:(int)granularity downstream:(BOOL)downstream;
-(BOOL)isPosition:(id)position atBoundary:(int)boundary inDirection:(int)direction;
-(id)positionFromPosition:(id)position toBoundary:(int)boundary inDirection:(int)direction;
-(BOOL)isPosition:(id)position withinTextUnit:(int)unit inDirection:(int)direction;
-(id)rangeEnclosingPosition:(id)position withGranularity:(int)granularity inDirection:(int)direction;
@end

