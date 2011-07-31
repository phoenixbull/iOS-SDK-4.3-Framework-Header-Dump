/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import "QuartzCore-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "NSCoding.h"
#import "NSMutableCopying.h"
#import "NSCopying.h"

@class NSString, CALayer, CAValueFunction;

@interface CAForceField : XXUnknownSuperclass <NSCopying, NSMutableCopying, NSCoding> {
@private
	NSString* _name;
	CALayer* _layer;
	CAValueFunction* _function;
	BOOL _enabled;
	void* _priv;
}
@property(retain) CAValueFunction* function;
@property(retain) CALayer* layer;
@property(assign, getter=isEnabled) BOOL enabled;
@property(copy) NSString* name;
+(id)forceField;
+(id)defaultValueForKey:(id)key;
-(id)init;
-(void)dealloc;
-(Object*)CA_copyRenderValue;
-(id)valueForKey:(id)key;
-(void)setValue:(id)value forKey:(id)key;
-(id)valueForKeyPath:(id)keyPath;
-(void)setValue:(id)value forKeyPath:(id)keyPath;
-(id)copyWithZone:(NSZone*)zone;
-(id)mutableCopyWithZone:(NSZone*)zone;
-(void)encodeWithCoder:(id)coder;
-(id)initWithCoder:(id)coder;
@end

