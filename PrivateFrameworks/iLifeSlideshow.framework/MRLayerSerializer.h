/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iLifeSlideshow.framework/iLifeSlideshow
 */

#import "iLifeSlideshow-Structs.h"
#import "MRLayer.h"

@class MCContainerSerializer, NSArray, NSMutableArray;
@protocol NSObject, MRTransition;

@interface MRLayerSerializer : MRLayer {
	MCContainerSerializer* mContainer;
	NSMutableArray* mSublayers;
	id<MRTransition, NSObject> mCurrentTransition;
	MRLayer* mCurrentTransitionSourceSublayer;
	double mLastCleanUpTime;
	BOOL mSerializerIsComplete;
}
@property(readonly, assign) NSArray* sublayers;
-(id)initWithPlug:(id)plug andParameters:(id)parameters inSuperlayer:(id)superlayer;
-(void)cleanup;
-(void)updateSize;
-(void)renderAtTime:(double)time;
-(void)_cleanupAndCheckIfNeedsAdditionalEffectsAtTime:(double)time forInterval:(double)interval;
-(void)contextChanged;
-(double)stillDurationFromTime:(double)time;
-(BOOL)changedBetweenTime:(double)time andTime:(double)time2 remainingStillDuration:(double)duration;
-(void)hackCheckIfNeedsAdditionalEffectsAtTime:(double)time;
-(void)_buildSublayers;
-(BOOL)_applyGLTransformationForTransitionID:(id)transitionID transitionAttributes:(id)attributes atTime:(double)time isTargetSublayer:(BOOL)sublayer currentColor:(float [4])color;
-(BOOL)isSimpleTransitionWithTransitionID:(id)transitionID;
-(int)subtypeForSimpleTransitionWithTransitionID:(id)transitionID;
@end

