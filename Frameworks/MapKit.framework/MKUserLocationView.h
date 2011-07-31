/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import "MKUserLocationView.h"
#import "MapKit-Structs.h"
#import "MKAnnotationView.h"

@class MKUserLocationViewInternal;

@interface MKUserLocationView : MKAnnotationView {
@private
	MKUserLocationViewInternal* _imp;
}
+(void)initialize;
+(Class)layerClass;
+(unsigned)_zIndex;
+(unsigned)_selectedZIndex;
+(float)accuracyDiameter:(float)diameter level:(unsigned)level;
+(CADoubleRect)effectiveFrameWithFrame:(CADoubleRect)frame;
-(id)initWithFrame:(CGRect)frame;
-(void)dealloc;
-(CADoubleRect)effectiveFrame;
-(CGRect)visibleRect;
-(CGRect)accuracyBounds;
-(BOOL)isDisplayingAccuracy;
-(id)headingLayer;
-(BOOL)shouldDisplayHalo;
-(void)setShouldDisplayHalo:(BOOL)displayHalo;
-(BOOL)shouldDisplayEffects;
-(void)setShouldDisplayEffects:(BOOL)displayEffects;
-(BOOL)effectsVisible;
-(void)setEffectsVisible:(BOOL)visible;
-(BOOL)shouldDisplayAccuracy;
-(void)setShouldDisplayAccuracy:(BOOL)displayAccuracy;
-(BOOL)shouldDisplayHeading;
-(void)setShouldDisplayHeading:(BOOL)displayHeading;
-(id)delegate;
-(void)setDelegate:(id)delegate;
-(float)accuracy;
-(void)setAccuracy:(float)accuracy;
-(double)headingAccuracy;
-(void)setHeadingAccuracy:(double)accuracy;
-(CADoublePoint)position;
-(void)setPosition:(CADoublePoint)position;
-(BOOL)isStale;
-(void)setStale:(BOOL)stale;
-(BOOL)isHovering;
-(int)zoomDirection;
-(void)setZoomDirection:(int)direction;
-(void)setZoomDirection:(int)direction deltaScale:(float)scale;
-(id)_searchResult;
-(void)setHighlighted:(BOOL)highlighted;
-(void)_setCalloutView:(id)view;
-(void)bounce;
-(void)updateHalo;
-(unsigned)accuracyIntersectionPoints:(CGPoint*)points layer:(id)layer bounds:(CGRect)bounds;
-(void)setPosition:(CADoublePoint)position duration:(double)duration;
-(void)setAccuracy:(float)accuracy duration:(double)duration;
-(void)setPosition:(BOOL)position value:(CADoublePoint)value accuracy:(BOOL)accuracy value:(float)value4 duration:(double)duration;
-(void)setPosition:(id)position accuracy:(id)accuracy duration:(double)duration;
-(void)setValue:(id)value forKey:(id)key actionContext:(id)context;
-(void)stopHover;
-(void)removeHover;
-(BOOL)shouldDisplayAccuracy:(double*)accuracy diameter:(id*)diameter;
-(void)didMoveToWindow;
-(void)willMoveToWindow:(id)window;
-(void)_setMapType:(unsigned)type;
-(id)description;
@end

@interface MKUserLocationView (Animations)
-(id)actionForLayer:(id)layer forKey:(id)key;
@end

