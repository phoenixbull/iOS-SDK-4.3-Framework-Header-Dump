/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "PDCommonTimeNodeData.h"

@class PDAnimationTargetElement;

__attribute__((visibility("hidden")))
@interface PDCommonMediaNodeData : PDCommonTimeNodeData {
@private
	PDAnimationTargetElement* mTarget;
	BOOL mIsMuted;
	BOOL mIsShowWhenStopped;
	long mNumberOfSlides;
	long mVolume;
}
-(id)init;
-(void)dealloc;
-(id)target;
-(void)setTarget:(id)target;
-(BOOL)isMuted;
-(void)setIsMuted:(BOOL)muted;
-(BOOL)isShowWhenStopped;
-(void)setIsShowWhenStopped:(BOOL)stopped;
-(long)numberOfSlides;
-(void)setNumberOfSlides:(long)slides;
-(long)volume;
-(void)setVolume:(long)volume;
@end

