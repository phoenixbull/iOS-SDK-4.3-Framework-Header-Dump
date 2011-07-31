/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

#import "MFComposeHeaderView.h"
#import "MessageUI-Structs.h"

@class UITextLabel, UIImageView;

@interface MFComposeFromView : MFComposeHeaderView {
	UITextLabel* _accountLabel;
	UIImageView* _background;
}
-(id)initWithFrame:(CGRect)frame;
-(void)dealloc;
-(void)layoutSubviews;
-(id)_accountLabel;
-(CGRect)accountLabelRect;
-(void)setAccountLabel:(id)label;
-(void)setLabelHighlighted:(BOOL)highlighted;
@end

