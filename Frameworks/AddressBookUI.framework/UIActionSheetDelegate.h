/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

#import "NSObject.h"


@protocol UIActionSheetDelegate <NSObject>
@optional
-(void)actionSheet:(id)sheet clickedButtonAtIndex:(int)index;
-(void)actionSheetCancel:(id)cancel;
-(void)willPresentActionSheet:(id)sheet;
-(void)didPresentActionSheet:(id)sheet;
-(void)actionSheet:(id)sheet willDismissWithButtonIndex:(int)buttonIndex;
-(void)actionSheet:(id)sheet didDismissWithButtonIndex:(int)buttonIndex;
@end

