/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "StoreServices-Structs.h"
#import "NSCopying.h"
#import "NSMutableCopying.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

@interface SSSoftwareUpdatesContext : XXUnknownSuperclass <NSCopying, NSMutableCopying> {
@private
	NSString* _clientIdentifierHeader;
	BOOL _forced;
}
@property(readonly, copy, nonatomic) NSString* clientIdentifierHeader;
@property(readonly, assign, nonatomic, getter=isForced) BOOL forced;
@property(readonly, assign) NSString* queueIdentifier;
-(id)copyPropertyListEncoding;
-(id)initWithPropertyListEncoding:(id)propertyListEncoding;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)zone;
-(id)mutableCopyWithZone:(NSZone*)zone;
@end

