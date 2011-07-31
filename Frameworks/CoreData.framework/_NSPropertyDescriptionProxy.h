/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSPropertyDescription, NSEntityDescription;

__attribute__((visibility("hidden")))
@interface _NSPropertyDescriptionProxy : XXUnknownSuperclass {
@private
	id _sourceBuffer;
	NSPropertyDescription* _underlyingProperty;
	NSEntityDescription* _entityDescription;
	unsigned _entitysReferenceIDForProperty;
}
+(BOOL)resolveInstanceMethod:(SEL)method;
-(id)initWithPropertyDescription:(id)propertyDescription;
-(id)description;
-(id)_underlyingProperty;
-(void)_setEntitysReferenceID:(unsigned)anId;
-(unsigned)_entitysReferenceID;
-(id)entity;
-(void)_createCachesAndOptimizeState;
-(void)_setEntity:(id)entity;
-(BOOL)isKindOfClass:(Class)aClass;
-(Class)class;
-(BOOL)isEqual:(id)equal;
-(id)forwardingTargetForSelector:(SEL)selector;
-(id)methodSignatureForSelector:(SEL)selector;
@end

