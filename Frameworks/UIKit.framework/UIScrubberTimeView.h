/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class UIColor, NSString;

__attribute__((visibility("hidden")))
@interface UIScrubberTimeView : UIView {
@private
	NSString* _time;
	UIColor* _timeColor;
	UIColor* _timeShadowColor;
	unsigned _align : 2;
}
-(id)initWithFrame:(CGRect)frame;
-(void)dealloc;
-(void)setTime:(id)time;
-(void)setTimeColor:(id)color;
-(void)setTimeShadowColor:(id)color;
-(id)time;
-(void)drawRect:(CGRect)rect;
@end

