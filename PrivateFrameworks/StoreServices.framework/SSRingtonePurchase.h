/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "StoreServices-Structs.h"
#import "NSCopying.h"
#import "NSCoding.h"
#import "SSPurchase.h"

@class NSNumber;

@interface SSRingtonePurchase : SSPurchase <NSCoding, NSCopying> {
@private
	NSNumber* _assigneeIdentifier;
	BOOL _shouldMakeDefaultRingtone;
}
@property(retain, nonatomic) NSNumber* assigneeIdentifier;
@property(assign, nonatomic) BOOL shouldMakeDefaultRingtone;
-(void)dealloc;
-(id)initWithCoder:(id)coder;
-(void)encodeWithCoder:(id)coder;
-(id)copyWithZone:(NSZone*)zone;
-(id)copyPropertyListEncoding;
-(id)initWithPropertyListEncoding:(id)propertyListEncoding;
@end

