/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBAlertItem.h"
#import "SBWiFiManagerDelegate.h"
#import "UITableViewDelegate.h"
#import "UITableViewDataSource.h"

@class NSTimer, NSDictionary, UITableView, NSString, NSMutableArray;

@interface SBWiFiAlertItem : SBAlertItem <UITableViewDelegate, UITableViewDataSource, SBWiFiManagerDelegate> {
	NSMutableArray* _networks;
	NSTimer* _scanTimer;
	NSTimer* _btScanTimer;
	UITableView* _table;
	int _joinRow;
	NSString* _password;
	NSDictionary* _joinDict;
	SBAlertItem* _childAlert;
	BOOL _selectingRow;
	BOOL _storedPassword;
	BOOL _passwordFailed;
	BOOL _sentResponse;
}
-(id)init;
-(void)dealloc;
-(void)configure:(BOOL)configure requirePasscodeForActions:(BOOL)actions;
-(BOOL)allowMenuButtonDismissal;
-(void)performUnlockAction;
-(BOOL)dismissOnLock;
-(void)willActivate;
-(void)willDeactivateForReason:(int)reason;
-(void)didDeactivateForReason:(int)reason;
-(void)setNetworks:(id)networks;
-(int)_joinRow;
-(void)_setDelegateForAlert:(id)alert delegate:(id)delegate;
-(void)_dismissCurrentChildAlert;
-(void)childAlertDismissed:(id)dismissed;
-(void)registerBTNotificationHandlers;
-(void)powerChangedHandler:(id)handler;
-(void)deviceUpdatedHandler:(id)handler;
-(void)deviceDiscoveredHandler:(id)handler;
-(void)deviceRemovedHandler:(id)handler;
-(void)authenticationRequestHandler:(id)handler;
-(void)deviceConnectionFailedHandler:(id)handler;
-(void)deviceConnectedHandler:(id)handler;
-(void)scan;
-(void)startBTScan:(BOOL)scan;
-(void)stopBTScan;
-(void)_enableTable;
-(void)wifiManager:(id)manager scanCompleted:(id)completed;
-(void)wifiManager:(id)manager joinCompleted:(int)completed;
-(void)passwordEntered:(id)entered;
-(void)sspRequestAllowed:(BOOL)allowed;
-(void)didPresentAlertView:(id)view;
-(void)_alertViewDismissed:(id)dismissed automatically:(BOOL)automatically;
-(void)alertView:(id)view clickedButtonAtIndex:(int)index;
-(void)dismissAlertsForApplicationTransition;
-(void)dismiss:(int)dismiss;
-(int)numberOfSectionsInTableView:(id)tableView;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
@end

