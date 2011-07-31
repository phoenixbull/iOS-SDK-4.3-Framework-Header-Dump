/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/GameKit.framework/GameKit
 */

#import "GameKit-Structs.h"
#import "GKAbstractComposeController.h"

@class NSURL, NSString;
@protocol GKComposeControllerDelegate;

@interface GKComposeController : GKAbstractComposeController {
	BOOL _alreadySetUp;
	int _successCount;
	int _failCount;
	BOOL _dismissed;
	BOOL _alertShown;
	id<GKComposeControllerDelegate> _delegate;
	NSURL* _serverAddFriendsURL;
	BOOL _messageWasSetExternally;
}
@property(assign, nonatomic) id<GKComposeControllerDelegate> delegate;
@property(retain, nonatomic) NSURL* serverAddFriendsURL;
@property(assign) BOOL messageWasSetExternally;
@property(copy, nonatomic) NSString* defaultMessage;
-(void)dealloc;
-(void)loadView;
-(void)viewWillDisappear:(BOOL)view;
-(void)addPlayerRecipients:(id)recipients;
-(void)setDefaultMessageWithRealName;
-(void)viewWillAppear:(BOOL)view;
-(void)viewDidAppear:(BOOL)view;
-(void)serverAddFriendsButtonWasTouched;
-(void)cancelButtonClicked:(id)clicked;
-(void)send:(id)send;
-(void)alertView:(id)view didDismissWithButtonIndex:(int)buttonIndex;
-(void)dismiss;
-(void)showAlertForSuccess;
-(void)showAlertForFailures:(id)failures allFailed:(BOOL)failed;
-(void)showAlertForError:(id)error;
-(void)updateTitle;
-(void)updateNavigationButtons;
@end

