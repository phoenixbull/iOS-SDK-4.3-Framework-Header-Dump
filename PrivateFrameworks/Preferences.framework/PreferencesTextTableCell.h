/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

#import "UITextViewDelegate.h"
#import "UITextFieldDelegate.h"
#import "Preferences-Structs.h"
#import "PreferencesTableCell.h"

@class UIColor;

@interface PreferencesTextTableCell : PreferencesTableCell <UITextViewDelegate, UITextFieldDelegate> {
	UIColor* _textColor;
	id _delegate;
	BOOL _forceFirstResponder;
}
-(id)initWithStyle:(int)style reuseIdentifier:(id)identifier;
-(void)dealloc;
-(void)setCellEnabled:(BOOL)enabled;
-(void)setTitle:(id)title;
-(void)setDelegate:(id)delegate;
-(void)layoutSubviews;
-(BOOL)canBecomeFirstResponder;
-(BOOL)canResignFirstResponder;
-(BOOL)isFirstResponder;
-(BOOL)becomeFirstResponder;
-(BOOL)resignFirstResponder;
-(BOOL)isEditing;
-(id)value;
-(void)setValue:(id)value;
-(void)setPlaceholderText:(id)text;
-(id)textField;
@end
