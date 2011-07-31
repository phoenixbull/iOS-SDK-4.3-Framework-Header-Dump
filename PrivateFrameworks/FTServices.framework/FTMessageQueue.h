/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray, FTMessage, NSArray;
@protocol FTMessageQueueDelegate;

@interface FTMessageQueue : XXUnknownSuperclass {
	NSMutableArray* _queue;
	NSMutableArray* _addDates;
	double _timeoutTime;
	id<FTMessageQueueDelegate> _delegate;
}
@property(assign) double messageTimeoutTime;
@property(assign) id<FTMessageQueueDelegate> delegate;
@property(readonly, assign) NSArray* messages;
@property(readonly, assign) int count;
@property(readonly, assign) FTMessage* topMessage;
-(id)init;
-(void)dealloc;
-(void)_clearTimeout;
-(void)_setTimeout;
-(void)_timeoutHit;
-(void)removeAllMessages;
-(id)dequeueTopMessage;
-(BOOL)addMessage:(id)message;
-(BOOL)removeMessage:(id)message;
@end

