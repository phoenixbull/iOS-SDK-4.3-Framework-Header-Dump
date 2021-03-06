/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

#import "AAAuthenticationResponse.h"

@class NSArray, NSDictionary, NSNumber, NSString;

@interface AAProvisioningResponse : AAAuthenticationResponse {
	NSDictionary* _mobileMe;
	NSDictionary* _appleAccount;
}
@property(readonly, assign, nonatomic) NSDictionary* mobileMeAccountFirstDisplayAlert;
@property(readonly, assign, nonatomic) NSDictionary* mobileMeAccountFooterButton;
@property(readonly, assign, nonatomic) NSString* mobileMeAccountFooterText;
@property(readonly, assign, nonatomic) NSNumber* mobileMeAccountStatusCode;
@property(readonly, assign, nonatomic) NSNumber* primaryEmailVerified;
@property(readonly, assign, nonatomic) NSString* primaryEmail;
@property(readonly, assign, nonatomic) NSString* lastName;
@property(readonly, assign, nonatomic) NSString* firstName;
@property(readonly, assign, nonatomic) NSString* personID;
@property(readonly, assign, nonatomic) NSDictionary* dataclassProperties;
@property(readonly, assign, nonatomic) NSArray* provisionedDataclasses;
-(id)initWithHTTPResponse:(id)httpresponse data:(id)data;
-(void)dealloc;
@end

