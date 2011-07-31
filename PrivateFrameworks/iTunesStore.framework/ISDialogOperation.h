/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import "ISOperation.h"
#import "iTunesStore-Structs.h"

@class NSArray, ISDialog, ISDialogButton;
@protocol ISDialogOperationDelegate;

@interface ISDialogOperation : ISOperation {
	ISDialog* _dialog;
	BOOL _performDefaultActions;
	ISDialogButton* _selectedButton;
	NSArray* _textFieldValues;
	id _userNotification;
}
@property(assign) id<ISDialogOperationDelegate> delegate;
@property(retain) ISDialog* dialog;
@property(assign) BOOL performDefaultActions;
@property(retain) ISDialogButton* selectedButton;
@property(retain) id userNotification;
@property(readonly, assign) NSArray* textFieldValues;
+(id)operationWithDialog:(id)dialog;
+(id)operationWithError:(id)error;
-(id)init;
-(void)dealloc;
-(void)handleButtonSelected:(int)selected withResponseDictionary:(id)responseDictionary;
-(void)cancel;
-(void)run;
-(void)_handleResponseForNotification:(CFUserNotificationRef)notification responseFlags:(unsigned long)flags;
-(void)_run;
-(void)_showUserNotification:(id)notification;
-(void)_waitForUserNotificationResponse:(CFUserNotificationRef)userNotificationResponse;
@end

