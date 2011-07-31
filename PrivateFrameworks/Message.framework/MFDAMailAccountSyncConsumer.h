/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import "MFDAMailAccountConsumer.h"
#import "DAMailboxStreamingContentConsumer.h"
#import "DAMailboxRequestConsumer.h"

@class ActivityMonitor, NSArray, NSMutableData, NSString;

@interface MFDAMailAccountSyncConsumer : MFDAMailAccountConsumer <DAMailboxRequestConsumer, DAMailboxStreamingContentConsumer> {
	NSArray* requests;
	NSArray* consumers;
	NSString* tag;
	NSString* accountID;
	BOOL receivedFirstItem;
	BOOL moreAvailable;
	BOOL firstSyncBatch;
	int syncKeyResets;
	int serverErrors;
	id _streamConsumer;
	ActivityMonitor* monitor;
	NSMutableData* bodyData;
}
@property(retain, nonatomic) id streamConsumer;
-(void)reset;
-(void)setTag:(id)tag;
-(id)originalThreadMonitor;
-(id)initWithCurrentTag:(id)currentTag andAccountID:(id)anId;
-(id)actionsConsumer;
-(void)handleSyncResponses:(id)responses;
-(void)partialResultsForMailbox:(id)mailbox actions:(id)actions responses:(id)responses percentComplete:(double)complete moreAvailable:(BOOL)available;
-(void)resultsForMailbox:(id)mailbox newTag:(id)tag actions:(id)actions responses:(id)responses percentComplete:(double)complete moreAvailable:(BOOL)available;
-(BOOL)shouldBeginStreamingForMailMessage:(id)mailMessage format:(int)format;
-(void)consumeData:(char*)data length:(int)length format:(int)format mailMessage:(id)message;
-(void)didEndStreamingForMailMessage:(id)mailMessage;
-(void)actionFailed:(int)failed forTask:(id)task error:(id)error;
-(void)dealloc;
@end

