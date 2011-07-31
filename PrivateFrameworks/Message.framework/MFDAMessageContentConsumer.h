/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "MFDAStreamingContentConsumer.h"

@class NSMutableData;
@protocol MFCollectingDataConsumer, MFMessageDataConsumerFactory;

@interface MFDAMessageContentConsumer : XXUnknownSuperclass <MFDAStreamingContentConsumer> {
	int _requestedFormat;
	id<MFCollectingDataConsumer> _dataConsumer;
	id<MFCollectingDataConsumer> _alternatePartConsumer;
	id<MFMessageDataConsumerFactory> _consumerFactory;
	BOOL _triedCreatingAlternatePartConsumer;
	BOOL _succeeded;
	NSMutableData* _bodyData;
	double _timeOfLastActivity;
}
@property(retain, nonatomic) id<MFCollectingDataConsumer> dataConsumer;
@property(retain, nonatomic) id<MFCollectingDataConsumer> alternatePartConsumer;
@property(readonly, retain, nonatomic) NSMutableData* bodyData;
@property(retain, nonatomic) id<MFMessageDataConsumerFactory> consumerFactory;
@property(assign, nonatomic) int requestedFormat;
@property(readonly, assign, nonatomic) double timeOfLastActivity;
-(BOOL)shouldBeginStreamingForMailMessage:(id)mailMessage format:(int)format;
-(void)consumeData:(char*)data length:(int)length format:(int)format mailMessage:(id)message;
-(void)didEndStreamingForMailMessage:(id)mailMessage;
-(id)data;
-(BOOL)succeeded;
-(id)dataConsumerForPart:(id)part;
-(void)dealloc;
@end

