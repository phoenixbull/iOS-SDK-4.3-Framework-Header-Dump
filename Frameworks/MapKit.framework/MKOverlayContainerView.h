/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import "MapKit-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray, NSArray, NSMutableSet, NSMapTable;
@protocol MKOverlayContainerViewDelegate;

__attribute__((visibility("hidden")))
@interface MKOverlayContainerView : XXUnknownSuperclass {
@private
	NSMutableSet* _overlaySet;
	NSMutableArray* _overlays;
	NSMapTable* _overlayToView;
	NSMutableArray* _views;
	NSMutableArray* _viewClusters;
	id<MKOverlayContainerViewDelegate> _delegate;
	CGAffineTransform _mapTransform;
}
@property(assign, nonatomic) id<MKOverlayContainerViewDelegate> delegate;
@property(assign, nonatomic) CGAffineTransform mapTransform;
@property(readonly, assign, nonatomic) NSArray* overlays;
-(id)initWithFrame:(CGRect)frame;
-(void)dealloc;
-(void)visibleRectChanged;
-(void)setLevelCrossFade:(BOOL)fade;
-(void)setDrawingEnabled:(BOOL)enabled;
-(int)_viewIndexForOverlayView:(id)overlayView;
-(XXStruct_Yvvv9D)_mapRectWithFractionOfVisible:(double)visible;
-(void)_configureAndAddView:(id)view forOverlay:(id)overlay;
-(id)_considerAddingOverlayView:(id)view inAddRect:(XXStruct_Yvvv9D)addRect;
-(void)addAndRemoveOverlayViews;
-(void)_addInternalOverlay:(id)overlay withView:(id)view;
-(void)swapViewsWithOverlay:(id)overlay andOverlay:(id)overlay2;
-(void)addOverlay:(id)overlay;
-(void)addOverlays:(id)overlays;
-(void)removeOverlay:(id)overlay;
-(void)removeOverlays:(id)overlays;
-(void)insertOverlay:(id)overlay atIndex:(unsigned)index;
-(void)exchangeOverlayAtIndex:(unsigned)index withOverlayAtIndex:(unsigned)index2;
-(void)insertOverlay:(id)overlay aboveOverlay:(id)overlay2;
-(void)insertOverlay:(id)overlay belowOverlay:(id)overlay2;
-(id)viewForOverlay:(id)overlay;
-(void)_removeOverlayView:(id)view forOverlay:(id)overlay coalesce:(BOOL)coalesce;
-(void)_insertOverlayView:(id)view forOverlay:(id)overlay atIndex:(int)index;
-(void)_coalesceAdjacentClusters;
@end

