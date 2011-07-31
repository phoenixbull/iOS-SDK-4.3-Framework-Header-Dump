/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iLifeSlideshow.framework/iLifeSlideshow
 */

#import "iLifeSlideshow-Structs.h"
#import "NSCoding.h"
#import "NSCopying.h"
#import "MPTransition.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableDictionary, MPEffectContainer, MPTransitionInternal;

@interface MPTransition : XXUnknownSuperclass <NSCoding, NSCopying> {
@private
	NSMutableDictionary* _attributes;
	MPEffectContainer* _parentContainer;
	MPTransitionInternal* _internal;
}
+(id)transitionWithTransitionID:(id)transitionID;
-(id)initWithTransitionID:(id)transitionID;
-(id)init;
-(id)copyWithZone:(NSZone*)zone;
-(id)description;
-(void)encodeWithCoder:(id)coder;
-(id)initWithCoder:(id)coder;
-(void)dealloc;
-(id)transitionID;
-(void)setTransitionID:(id)anId;
-(id)presetID;
-(void)setPresetID:(id)anId;
-(double)duration;
-(void)setDuration:(double)duration;
-(id)transitionAttributes;
-(void)setTransitionAttributes:(id)attributes;
-(id)transitionAttributeForKey:(id)key;
-(void)setTransitionAttribute:(id)attribute forKey:(id)key;
-(id)parentContainer;
@end

@interface MPTransition (Internal)
-(void)copyStruct:(id)aStruct;
-(void)copyAttribures:(id)attribures;
-(void)setParentContainer:(id)container;
-(void)recreateWithPlug:(id)plug;
-(BOOL)isRandom;
-(void)setIsRandom:(BOOL)random;
-(id)_transitionAttributes;
@end

@interface MPTransition (Private)
-(void)dump;
-(id)fullDebugLog;
-(id)convertMPAttributeToMCAttribute:(id)mcattribute withKey:(id)key;
-(double)findMaxDuration;
@end

