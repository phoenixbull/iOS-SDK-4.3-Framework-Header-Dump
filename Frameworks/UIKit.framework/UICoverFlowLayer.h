/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library


@interface UICoverFlowLayer : XXUnknownSuperclass {
@private
	void* _private;
}
-(id)initWithFrame:(CGRect)frame numberOfCovers:(unsigned)covers numberOfPlaceholders:(unsigned)placeholders;
-(unsigned)numberOfCovers;
-(unsigned)numberOfPlaceholders;
-(void)dealloc;
-(void)setDelegate:(id)delegate;
-(void)setPlaceholderImage:(void*)image atPlaceholderIndex:(unsigned)placeholderIndex;
-(void)setPlaceholderImage:(void*)image atPlaceholderIndex:(unsigned)placeholderIndex imageSubRect:(CGRect)rect;
-(void)setPlaceholderIndicesForCovers:(unsigned*)covers;
-(void)_prefetch:(unsigned)prefetch atIndex:(unsigned)index;
-(void)_requestBatch;
-(void)_requestImageAtIndex:(int)index quality:(unsigned)quality;
-(void)_requestImageAtIndex:(int)index;
-(void)_notifySelectionDidChange;
-(void)transitionIn:(float)anIn;
-(void)transitionOut:(float)anOut;
-(void)transition:(unsigned)transition withCoverFrame:(CGRect)coverFrame;
-(void)transitionIn:(float)anIn fromFrame:(CGRect)frame;
-(void)transitionOut:(float)anOut toFrame:(CGRect)frame;
-(void)setDisplayedOrientation:(int)orientation animate:(BOOL)animate;
-(void)setInfoLayer:(id)layer;
-(void)setImage:(void*)image atIndex:(unsigned)index type:(unsigned)type;
-(void)setImage:(void*)image atIndex:(unsigned)index type:(unsigned)type imageSubRect:(CGRect)rect;
-(void)setImage:(void*)image atIndex:(unsigned)index;
-(unsigned)indexOfSelectedCover;
-(unsigned)_coverAtScreenPosition:(CGPoint)screenPosition;
-(void)_recycleLayer:(int)layer to:(int)to;
-(void)_setNewSelectedIndex:(int)index;
-(void)_updateTick;
-(void)displayTick;
-(void)dragFlow:(unsigned)flow atPoint:(CGPoint)point;
-(void)selectCoverAtIndex:(unsigned)index;
-(void)selectCoverAtOffset:(int)offset;
-(unsigned)coverIndexAtPosition:(float)position;
-(void)_setupFlippedCoverLayer:(id)layer;
-(void)flipSelectedCover;
-(int)benchmarkTick;
-(void)benchmarkHeartbeatLongScrub;
-(void)benchmarkHeartbeatShortScrub;
-(void)benchmarkHeartbeatScrubAndWait;
-(void)benchmarkTightLoop;
-(void)benchmarkTightLoopScrub;
-(BOOL)benchmarkLoadScrub;
-(BOOL)benchmarkImageManager:(void*)manager;
-(void)benchmarkSetEnv;
-(void)benchmarkMode:(int)mode;
-(void)benchmarkTickMode:(int)mode;
-(void)benchmarkImageMode:(int)mode;
-(void)benchmarkPerformanceLog:(BOOL)log;
-(void)benchmarkTightLoopTime:(unsigned)time;
-(void)benchmarkLongScrubSpeed:(float)speed;
-(void)benchmarkSkipImageLoad:(BOOL)load;
@end

