/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import "AVTrackReaderInspector.h"


@interface AVCompositionTrackReaderInspector : AVTrackReaderInspector {
	OpaqueFigMutableComposition* _figMutableComposition;
}
@property(readonly, assign, nonatomic, getter=_mutableComposition) OpaqueFigMutableComposition* mutableComposition;
-(id)_initWithAsset:(id)asset trackID:(int)anId trackIndex:(long)index;
-(void)dealloc;
-(void)finalize;
-(id)segments;
-(id)segmentForTrackTime:(XXStruct_pwHToB)trackTime;
@end

