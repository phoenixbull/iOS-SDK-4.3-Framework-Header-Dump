/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import "NSObject.h"


@protocol MFContactsSearchConsumer <NSObject>
-(void)consumeSearchResults:(id)results type:(int)type taskID:(id)anId;
-(void)finishedSearchingForType:(int)type;
-(void)finishedTaskWithID:(id)anId;
-(void)beganNetworkActivity;
-(void)endedNetworkActivity;
@end

