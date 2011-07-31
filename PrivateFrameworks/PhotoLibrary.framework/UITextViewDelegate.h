/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

#import "PhotoLibrary-Structs.h"
#import "UIScrollViewDelegate.h"
#import "NSObject.h"


@protocol UITextViewDelegate <NSObject, UIScrollViewDelegate>
@optional
-(BOOL)textViewShouldBeginEditing:(id)textView;
-(BOOL)textViewShouldEndEditing:(id)textView;
-(void)textViewDidBeginEditing:(id)textView;
-(void)textViewDidEndEditing:(id)textView;
-(BOOL)textView:(id)view shouldChangeTextInRange:(NSRange)range replacementText:(id)text;
-(void)textViewDidChange:(id)textView;
-(void)textViewDidChangeSelection:(id)textView;
@end

