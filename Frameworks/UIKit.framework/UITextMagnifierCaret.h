/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UITextMagnifier.h"
#import "UIView.h"

@class UITextMagnifierTimeWeightedPoint;
@protocol UITextInput;

__attribute__((visibility("hidden")))
@interface UITextMagnifierCaret : UIView <UITextMagnifier> {
@private
	UIResponder<UITextInput>* _text;
	UIView* _target;
	CGPoint _magnificationPoint;
	CGPoint _offset;
	UITextMagnifierTimeWeightedPoint* _weightedPoint;
	float _yOffset;
	UIView* _magnifierRenderer;
	UIView* _autoscrollRenderer;
	int _autoscrollDirections;
}
@property(retain, nonatomic) UIResponder<UITextInput>* text;
@property(retain, nonatomic) UIView* target;
@property(assign, nonatomic) CGPoint offset;
@property(assign, nonatomic) float yOffset;
@property(assign, nonatomic) CGPoint animationPoint;
@property(readonly, assign, nonatomic) CGPoint terminalPoint;
@property(readonly, assign, nonatomic) BOOL terminalPointPlacedCarefully;
@property(assign, nonatomic) CGPoint magnificationPoint;
+(id)sharedCaretMagnifier;
-(id)initWithDefaultFrame;
-(void)dealloc;
-(void)postAutoscrollPoint:(CGPoint)point;
-(void)animateToAutoscrollRenderer;
-(void)setToMagnifierRenderer;
-(void)animateToMagnifierRenderer;
-(void)setAutoscrollDirections:(int)directions;
-(void)autoscrollWillNotStart;
-(void)zoomUpAnimation;
-(void)zoomUpAnimationDidStop:(id)zoomUpAnimation finished:(id)finished;
-(void)setFrame:(CGRect)frame;
-(void)setNeedsDisplay;
-(void)zoomDownAnimation;
-(void)zoomDownAnimationDidStop:(id)zoomDownAnimation finished:(id)finished;
-(void)remove;
-(void)updateFrameAndOffset;
-(void)detectLostTouches:(id)touches;
-(void)windowWillRotate:(id)window;
-(void)beginMagnifyingTarget:(id)target text:(id)text magnificationPoint:(CGPoint)point offset:(CGPoint)offset animated:(BOOL)animated;
-(void)stopMagnifying:(BOOL)magnifying;
@end

