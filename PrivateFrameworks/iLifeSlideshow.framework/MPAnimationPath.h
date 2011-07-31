/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iLifeSlideshow.framework/iLifeSlideshow
 */

#import "iLifeSlideshow-Structs.h"
#import "NSCoding.h"
#import "NSCopying.h"
#import "MPAnimationPath.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class MCAnimationPath, NSObject, NSMutableSet;
@protocol MPAnimationSupport;

@interface MPAnimationPath : XXUnknownSuperclass <NSCoding, NSCopying> {
@private
	MCAnimationPath* _animationPath;
	NSMutableSet* _keyframes;
	BOOL _postKeyframeChange;
	NSObject<MPAnimationSupport>* _parentObject;
}
+(id)animationPath;
-(id)init;
-(void)encodeWithCoder:(id)coder;
-(id)initWithCoder:(id)coder;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)zone;
-(id)description;
-(id)key;
-(id)keyframes;
-(id)orderedKeyframes;
-(void)addKeyframe:(id)keyframe;
-(void)addKeyframes:(id)keyframes;
-(void)removeKeyframe:(id)keyframe;
-(void)removeKeyframes:(id)keyframes;
-(void)removeAllKeyframes;
-(id)createKeyframeWithScalar:(float)scalar atTime:(double)time;
-(id)createKeyframeWithScalar:(float)scalar atTime:(double)time offset:(int)offset;
-(id)createKeyframeWithPoint:(CGPoint)point atTime:(double)time;
-(id)createKeyframeWithPoint:(CGPoint)point atTime:(double)time offset:(int)offset;
-(id)createKeyframeWithVector:(id)vector atTime:(double)time;
-(id)createKeyframeWithVector:(id)vector atTime:(double)time offset:(int)offset;
-(id)newKeyframeWithScalar:(float)scalar atTime:(double)time;
-(id)newKeyframeWithScalar:(float)scalar atTime:(double)time offset:(int)offset;
-(id)newKeyframeWithPoint:(CGPoint)point atTime:(double)time;
-(id)newKeyframeWithPoint:(CGPoint)point atTime:(double)time offset:(int)offset;
-(id)newKeyframeWithVector:(id)vector atTime:(double)time;
-(id)newKeyframeWithVector:(id)vector atTime:(double)time offset:(int)offset;
-(id)parent;
-(BOOL)postsKeyframeChangeNotifications;
-(void)setPostsKeyframeChangeNotifications:(BOOL)notifications;
-(double)relativeTimeForKeyframe:(id)keyframe;
@end

@interface MPAnimationPath (Internal)
-(void)copyKeyframes:(id)keyframes;
-(void)cleanup;
-(void)setAnimationPath:(id)path;
-(void)setParent:(id)parent;
-(id)parentDocument;
-(void)recreateWithAnimationPath:(id)animationPath;
@end

@interface MPAnimationPath (Private)
-(id)animationPath;
-(double)parentPhaseInDuration;
-(double)parentPhaseOutDuration;
-(double)parentMainDuration;
-(void)dump;
-(id)fullDebugLog;
@end

