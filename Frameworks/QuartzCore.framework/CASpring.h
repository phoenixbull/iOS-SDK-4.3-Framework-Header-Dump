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

@interface CASpring : XXUnknownSuperclass <NSCopying, NSMutableCopying, NSCoding> {
@private
	NSString* _name;
	CALayer* _layerA;
	CALayer* _layerB;
	CGPoint _attachmentPointA;
	CGPoint _attachmentPointB;
	CAValueFunction* _function;
	float _stiffness;
	float _damping;
	float _restLength;
	BOOL _enabled;
	id _delegate;
	void* _priv;
}
@property(assign) id delegate;
@property(assign) float damping;
@property(assign) float stiffness;
@property(assign) float restLength;
@property(retain) CAValueFunction* function;
@property(assign) CGPoint attachmentPointB;
@property(assign) CGPoint attachmentPointA;
@property(retain) CALayer* layerB;
@property(retain) CALayer* layerA;
@property(assign, getter=isEnabled) BOOL enabled;
@property(copy) NSString* name;
+(id)spring;
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

