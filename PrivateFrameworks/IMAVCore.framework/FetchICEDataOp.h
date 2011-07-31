/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/IMAVCore.framework/IMAVCore
 */

#import "IMExtendedOperation.h"

@class NSData, IMAVChatParticipant, NetworkCheckOperation;

@interface FetchICEDataOp : IMExtendedOperation {
	NetworkCheckOperation* _networkCheckOp;
	IMAVChatParticipant* _participant;
	NSData* _ICEData;
}
-(id)initWithParticipant:(id)participant;
-(void)dealloc;
-(void)createChildOperations;
-(void)main;
-(id)ICEData;
-(id)networkCheckOperation;
@end

