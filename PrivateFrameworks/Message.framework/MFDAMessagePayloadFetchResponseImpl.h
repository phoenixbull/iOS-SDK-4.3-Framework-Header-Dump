/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import "MFDAMessagePayloadFetchResponse.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSData;

@interface MFDAMessagePayloadFetchResponseImpl : XXUnknownSuperclass <MFDAMessagePayloadFetchResponse> {
	BOOL streaming;
	BOOL streamingDone;
	NSData* data;
}
-(id)initWithData:(id)data streaming:(BOOL)streaming streamingDone:(BOOL)done;
-(BOOL)streaming;
-(BOOL)streamingDone;
-(id)data;
-(void)dealloc;
@end

