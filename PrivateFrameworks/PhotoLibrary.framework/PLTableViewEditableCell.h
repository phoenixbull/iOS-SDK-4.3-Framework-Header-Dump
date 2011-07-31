/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

#import "PhotoLibrary-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "UITextViewDelegate.h"
#import "UITextFieldDelegate.h"

@class PLTextView, UILabel, UITextField;

@interface PLTableViewEditableCell : XXUnknownSuperclass <UITextViewDelegate, UITextFieldDelegate> {
	PLTextView* _textView;
	UITextField* _textField;
	UILabel* _sizeTextLabel;
	id _delegate;
	BOOL _forceFirstResponder;
	int _cellStyle;
}
@property(assign, nonatomic) int style;
+(id)posterCellIdentifier;
-(id)initWithFrame:(CGRect)frame multiLine:(BOOL)line;
-(id)initHDSDCell;
-(id)initWithFrame:(CGRect)frame cellStyle:(int)style;
-(void)dealloc;
-(void)setDelegate:(id)delegate;
-(void)forceFirstResponder:(BOOL)responder;
-(id)sizeTextLabel;
-(void)layoutSubviews;
-(void)becomeFirstResponder;
-(void)resignFirstResponder;
-(BOOL)isEditing;
-(void)setValue:(id)value;
-(id)value;
-(void)setPlaceholderText:(id)text;
-(void)textFieldDidBeginEditing:(id)textField;
-(BOOL)textFieldShouldEndEditing:(id)textField;
-(BOOL)textFieldShouldReturn:(id)textField;
-(void)_textFieldChanged;
-(CGSize)contentSize;
-(void)textViewDidChange:(id)textView;
-(void)textViewDidBeginEditing:(id)textView;
-(BOOL)textViewShouldEndEditing:(id)textView;
@end

