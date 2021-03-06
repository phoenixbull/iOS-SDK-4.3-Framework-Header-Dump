/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface UIKeyboardCandidateBarCell : UIView {
@private
	NSString* m_candidate;
	id m_target;
	SEL m_action;
	CGSize m_textSize;
	BOOL m_highlighted;
	BOOL m_special;
	BOOL m_arrow;
}
@property(readonly, assign, nonatomic) CGSize stringSize;
@property(readonly, assign, nonatomic) BOOL isArrow;
@property(assign, nonatomic) BOOL highlighted;
+(id)font;
-(id)initWithCandidate:(id)candidate tag:(int)tag target:(id)target action:(SEL)action;
-(void)dealloc;
-(void)drawRect:(CGRect)rect;
-(void)touchesBegan:(id)began withEvent:(id)event;
-(void)touchesMoved:(id)moved withEvent:(id)event;
-(void)touchesEnded:(id)ended withEvent:(id)event;
-(void)touchesCancelled:(id)cancelled withEvent:(id)event;
-(BOOL)pointInside:(CGPoint)inside withEvent:(id)event;
@end

