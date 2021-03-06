/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import "Celestial-Structs.h"
#import "NSCopying.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSArray, AVItemErrorLogInternal;

@interface AVItemErrorLog : XXUnknownSuperclass <NSCopying> {
@private
	AVItemErrorLogInternal* _playerItemErrorLog;
}
@property(readonly, assign, nonatomic) NSArray* events;
-(id)init;
-(id)initWithLogArray:(id)logArray;
-(id)description;
-(id)copyWithZone:(NSZone*)zone;
-(void)finalize;
-(void)dealloc;
-(id)extendedLogData;
-(unsigned)extendedLogDataStringEncoding;
@end

