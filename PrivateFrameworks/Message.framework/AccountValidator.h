/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class ActivityMonitor, NSArray, MFError, Account;

@interface AccountValidator : XXUnknownSuperclass {
	Account* _account;
	id _delegate;
	ActivityMonitor* _accountValidationActivity;
	struct {
		unsigned useSSL : 1;
		unsigned incomingServerSupportsSSL : 1;
		unsigned smtpServerSupportsSSL : 1;
		unsigned validationInProgress : 1;
		unsigned canceled : 1;
		unsigned unused : 27;
	} _flags;
	MFError* _incomingServerValidationError;
	MFError* _smtpServerValidationError;
	NSArray* _incomingServerAuthSchemes;
	NSArray* _smtpServerAuthSchemes;
}
-(id)init;
-(void)dealloc;
-(void)setDelegate:(id)delegate;
-(void)validateAccount:(id)account useSSL:(BOOL)ssl;
-(void)validateAccountWithoutFallbacks:(id)fallbacks;
-(id)account;
-(void)cancelValidation;
-(id)_ispAccountInfo;
-(void)_backgroundValidateAccountFinished:(id)finished authSchemes:(id)schemes;
-(void)_validateAccount:(id)account;
-(void)_validateAccountWithoutFallbacks:(id)fallbacks;
-(BOOL)_incomingServerValid;
-(BOOL)_outgoingServerValid;
-(void)stop;
-(BOOL)accountValidationCanceled;
-(void)_validateAccountInBackground:(id)background withFallbacks:(BOOL)fallbacks;
-(BOOL)accountIsValid;
-(BOOL)accountSupportsSSL;
-(id)error;
@end

