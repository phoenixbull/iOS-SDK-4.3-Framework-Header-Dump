/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

#import "FTProfileMessage.h"

@class NSString;

@interface FTProfileConfirmEmailsMessage : FTProfileMessage {
	NSString* _emailAddress;
	NSString* _vettingToken;
}
@property(copy) NSString* vettingToken;
@property(copy) NSString* emailAddress;
-(void)dealloc;
-(id)bagKey;
-(id)requiredKeys;
-(id)messageBody;
@end

