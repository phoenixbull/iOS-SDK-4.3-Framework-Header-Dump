/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iLifeSlideshow.framework/iLifeSlideshow
 */

#import "iLifeSlideshow-Structs.h"
#import "MPAnimationKeyframe2D.h"
#import "MPAnimationKeyframe.h"


@interface MPAnimationKeyframe2D : MPAnimationKeyframe {
@private
	CGPoint _point;
}
+(id)keyframe2DWithPoint:(CGPoint)point atTime:(double)time;
+(id)keyframe2DWithPoint:(CGPoint)point atTime:(double)time offset:(int)offset;
-(id)initKeyframe2DWithPoint:(CGPoint)point atTime:(double)time offset:(int)offset;
-(id)copyWithZone:(NSZone*)zone;
-(void)encodeWithCoder:(id)coder;
-(id)initWithCoder:(id)coder;
-(id)description;
-(CGPoint)point;
-(void)setPoint:(CGPoint)point;
@end

@interface MPAnimationKeyframe2D (Private)
-(id)keyframe;
@end

