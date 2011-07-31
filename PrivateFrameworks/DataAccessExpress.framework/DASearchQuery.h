/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccessExpress.framework/DataAccessExpress
 */

#import "DataAccessExpress-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;
@protocol DASearchQueryConsumer;

@interface DASearchQuery : XXUnknownSuperclass {
	NSString* _searchString;
	NSRange _range;
	int _timeLimit;
	CFMachPortRef _callbackPort;
	unsigned _searchID;
	BOOL _cancelled;
	id<DASearchQueryConsumer> _consumer;
}
@property(readonly, assign) NSString* searchString;
@property(assign) NSRange range;
@property(assign) int timeLimit;
@property(assign) BOOL cancelled;
@property(assign) id<DASearchQueryConsumer> consumer;
+(id)searchQueryWithSearchString:(id)searchString consumer:(id)consumer;
-(id)initWithSearchString:(id)searchString consumer:(id)consumer;
-(void)dealloc;
-(id)description;
-(void)sendResultsToConsumer:(id)consumer;
-(void)sendFinishedToConsumerWithError:(id)error;
-(void)handleBrokenPipe;
-(id)dictionaryRepresentation;
-(CFMachPortRef)callbackPort;
-(void)setCallbackPort:(CFMachPortRef)port;
-(unsigned)searchID;
-(void)setSearchID:(unsigned)anId;
@end

