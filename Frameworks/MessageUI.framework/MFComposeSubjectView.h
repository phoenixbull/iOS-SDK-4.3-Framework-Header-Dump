/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

#import "MessageUI-Structs.h"
#import "MFComposeHeaderView.h"
#import "UITextFieldDelegate.h"

@class UITextField;

@interface MFComposeSubjectView : MFComposeHeaderView <UITextFieldDelegate> {
	UITextField* _textField;
	unsigned _delegateRespondsToTextChange : 1;
}
-(id)initWithFrame:(CGRect)frame;
-(void)layoutSubviews;
-(BOOL)becomeFirstResponder;
-(void)textFieldDidResignFirstResponder:(id)textField;
-(id)text;
-(void)setText:(id)text;
-(void)setDelegate:(id)delegate;
-(void)textChanged:(id)changed;
-(BOOL)keyboardInput:(id)input shouldInsertText:(id)text isMarkedText:(BOOL)text3;
-(BOOL)endEditing:(BOOL)editing;
-(void)dealloc;
-(BOOL)_canBecomeFirstResponder;
-(void)setAcceptsEmoji:(BOOL)emoji;
@end
