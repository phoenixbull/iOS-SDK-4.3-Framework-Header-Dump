/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "StoreServices-Structs.h"
#import "NSCopying.h"
#import "SSBlobsRequestContext.h"
#import "SSCoding.h"

@class NSArray;

@interface SSGetBlobsRequestContext : SSBlobsRequestContext <NSCopying, SSCoding> {
@private
	NSArray* _blobIdentifiers;
}
@property(copy, nonatomic) NSArray* blobIdentifiers;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)zone;
-(id)copyPropertyListEncoding;
-(id)initWithPropertyListEncoding:(id)propertyListEncoding;
@end

