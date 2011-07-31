/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import "Celestial-Structs.h"
#import "NSCopying.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class AVItemErrorLogEventInternal, NSDate, NSString;

@interface AVItemErrorLogEvent : XXUnknownSuperclass <NSCopying> {
@private
	AVItemErrorLogEventInternal* _playerItemErrorLogEvent;
}
@property(readonly, assign, nonatomic) NSString* errorComment;
@property(readonly, assign, nonatomic) NSString* errorDomain;
@property(readonly, assign, nonatomic) int errorStatusCode;
@property(readonly, assign, nonatomic) NSString* playbackSessionID;
@property(readonly, assign, nonatomic) NSString* serverAddress;
@property(readonly, assign, nonatomic) NSString* URI;
@property(readonly, assign, nonatomic) NSDate* date;
-(id)init;
-(id)initWithDictionary:(id)dictionary;
-(id)copyWithZone:(NSZone*)zone;
-(void)finalize;
-(void)dealloc;
@end

