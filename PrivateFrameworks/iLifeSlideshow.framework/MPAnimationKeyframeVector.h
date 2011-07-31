/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iLifeSlideshow.framework/iLifeSlideshow
 */

#import "MPAnimationKeyframeVector.h"
#import "MPAnimationKeyframe.h"
#import "iLifeSlideshow-Structs.h"

@class MPVector;

@interface MPAnimationKeyframeVector : MPAnimationKeyframe {
@private
	MPVector* _vector;
}
+(id)keyframeVectorWithVector:(id)vector atTime:(double)time;
+(id)keyframeVectorWithVector:(id)vector atTime:(double)time offset:(int)offset;
-(id)initKeyframeVectorWithVector:(id)vector atTime:(double)time offset:(int)offset;
-(id)copyWithZone:(NSZone*)zone;
-(void)dealloc;
-(void)encodeWithCoder:(id)coder;
-(id)initWithCoder:(id)coder;
-(id)description;
-(id)vector;
-(void)setVector:(id)vector;
@end

@interface MPAnimationKeyframeVector (Private)
-(id)keyframe;
@end

