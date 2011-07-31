/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIButton.h"

@class UITextReplacement, NSTimer;

__attribute__((visibility("hidden")))
@interface UICalloutBarButton : UIButton {
@private
	SEL m_action;
	int m_position;
	int m_type;
	NSTimer* m_flashTimer;
	UITextReplacement* m_textReplacement;
	float m_contentWidth;
	float m_contentScale;
	int m_flashCount;
	BOOL m_isText;
	BOOL m_configured;
	BOOL m_single;
	BOOL m_padLeft;
	BOOL m_padRight;
}
@property(readonly, assign, nonatomic) SEL action;
@property(readonly, assign, nonatomic) float contentWidth;
@property(readonly, assign, nonatomic) float contentScale;
@property(readonly, assign, nonatomic) int type;
@property(retain, nonatomic) UITextReplacement* textReplacement;
+(id)buttonWithTitle:(id)title action:(SEL)action type:(int)type inView:(id)view;
+(id)buttonWithImage:(id)image action:(SEL)action type:(int)type inView:(id)view;
-(void)_commonSetupWithAction:(SEL)action type:(int)type;
-(void)setupWithTitle:(id)title action:(SEL)action type:(int)type;
-(void)setupWithImage:(id)image action:(SEL)action type:(int)type;
-(void)dealloc;
-(void)configureLabel;
-(void)layoutSubviews;
-(void)removeFromSuperview;
-(CGRect)titleRectForContentRect:(CGRect)contentRect;
-(CGRect)imageRectForContentRect:(CGRect)contentRect;
-(void)configureForSingle:(int)single;
-(void)configureForLeftPosition:(int)leftPosition;
-(void)configureForMiddlePosition;
-(void)configureForRightPosition:(int)rightPosition;
-(void)setContentScale:(float)scale;
-(void)setHighlighted:(BOOL)highlighted;
-(void)sendCallback;
-(void)cancelFlash;
-(void)flash;
-(void)flashCallback:(id)callback;
@end

