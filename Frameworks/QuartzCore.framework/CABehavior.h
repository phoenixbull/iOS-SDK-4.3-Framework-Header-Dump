/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import "QuartzCore-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "NSCoding.h"
#import "NSCopying.h"

@class NSString, NSDictionary;

@interface CABehavior : XXUnknownSuperclass <NSCoding, NSCopying> {
@private
	void* _attr;
	unsigned _refcount;
	unsigned _uid;
	void* _priv;
}
@property(copy) NSDictionary* style;
@property(assign) id delegate;
@property(copy) NSString* name;
@property(assign, getter=isEnabled) BOOL enabled;
+(id)behavior;
+(id)defaultValueForKey:(id)key;
+(BOOL)automaticallyNotifiesObserversForKey:(id)key;
+(BOOL)CA_automaticallyNotifiesObservers:(Class)observers;
+(/*function-pointer*/ void*)CA_setterForType:(int)type;
+(/*function-pointer*/ void*)CA_getterForType:(int)type;
+(BOOL)resolveInstanceMethod:(SEL)method;
-(id)init;
-(id)retain;
-(void)release;
-(unsigned)retainCount;
-(void)dealloc;
-(void)_setCARenderBehavior:(Behavior*)behavior;
-(BOOL)shouldArchiveValueForKey:(id)key;
-(id)initWithCoder:(id)coder;
-(void)encodeWithCoder:(id)coder;
-(id)valueForKey:(id)key;
-(void)setValue:(id)value forKey:(id)key;
-(id)valueForUndefinedKey:(id)undefinedKey;
-(void)setValue:(id)value forUndefinedKey:(id)undefinedKey;
-(id)valueForKeyPath:(id)keyPath;
-(void)setValue:(id)value forKeyPath:(id)keyPath;
-(id)copyWithZone:(NSZone*)zone;
-(id)debugDescription;
@end

