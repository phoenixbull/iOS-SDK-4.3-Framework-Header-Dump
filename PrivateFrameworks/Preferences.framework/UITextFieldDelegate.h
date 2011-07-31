/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

#import "Preferences-Structs.h"
#import "NSObject.h"


@protocol UITextFieldDelegate <NSObject>
@optional
-(BOOL)textFieldShouldBeginEditing:(id)textField;
-(void)textFieldDidBeginEditing:(id)textField;
-(BOOL)textFieldShouldEndEditing:(id)textField;
-(void)textFieldDidEndEditing:(id)textField;
-(BOOL)textField:(id)field shouldChangeCharactersInRange:(NSRange)range replacementString:(id)string;
-(BOOL)textFieldShouldClear:(id)textField;
-(BOOL)textFieldShouldReturn:(id)textField;
@end

