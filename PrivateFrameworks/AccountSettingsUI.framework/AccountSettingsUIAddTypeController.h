/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AccountSettingsUI.framework/AccountSettingsUI
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSArray;

@interface AccountSettingsUIAddTypeController : XXUnknownSuperclass {
	NSArray* _plugins;
	NSArray* _allowedDataclasses;
	BOOL _dontShowSecondLevelOtherAccountTypes;
	BOOL _forceMailSetup;
	NSArray* _preEnabledDataclasses;
	unsigned char originalWifiFlag;
	unsigned char originalCellFlag;
}
@property(retain) NSArray* preEnabledDataclasses;
@property(retain) NSArray* plugins;
@property(retain) NSArray* allowedDataclasses;
-(id)init;
-(void)handleURL:(id)url;
-(void)dealloc;
-(id)specifiers;
-(void)finishedAccountSetup;
-(id)specifierForAccountType:(id)accountType;
-(int)numAddControllersInStack;
-(void)popOutOfAddControllers;
-(void)dontShowSecondLevelOtherAccountTypes;
-(void)forceMailSetup;
@end

