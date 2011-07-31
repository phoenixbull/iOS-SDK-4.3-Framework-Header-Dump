/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIPinchGestureRecognizer.h"

@class UIScrollView;

__attribute__((visibility("hidden")))
@interface UIScrollViewPinchGestureRecognizer : UIPinchGestureRecognizer {
@private
	UIScrollView* _scrollView;
	unsigned _hasParentScrollView : 1;
}
@property(assign, nonatomic) UIScrollView* scrollView;
-(float)_hysteresis;
-(void)touchesBegan:(id)began withEvent:(id)event;
-(void)touchesMoved:(id)moved withEvent:(id)event;
@end

