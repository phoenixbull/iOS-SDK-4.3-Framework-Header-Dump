/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import "MapKit-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSNumber, NSValue, CLLocation;

__attribute__((visibility("hidden")))
@interface MKMapViewPositioningChange : XXUnknownSuperclass {
@private
	CLLocation* _location;
	NSNumber* _zoomLevel;
	NSValue* _position;
	NSNumber* _accuracy;
	NSNumber* _shouldHover;
	NSNumber* _shouldHalo;
	NSNumber* _distance;
	int _locationSource;
	unsigned _runCount;
	struct {
		unsigned hasFocus : 1;
		unsigned isStartVisible : 1;
		unsigned isEndVisible : 1;
		unsigned hasComputedMetrics : 1;
		unsigned shouldScrollToLocation : 1;
	} _flags;
}
@property(retain, nonatomic) CLLocation* location;
@property(assign, nonatomic) int locationSource;
@property(readonly, assign, nonatomic) unsigned runCount;
@property(readonly, assign, nonatomic) NSNumber* accuracyObject;
@property(readonly, assign, nonatomic) NSValue* positionObject;
@property(assign, nonatomic) double distance;
@property(assign, nonatomic) float accuracy;
@property(assign, nonatomic) CADoublePoint position;
@property(assign, nonatomic) float zoomLevel;
@property(assign, nonatomic) BOOL shouldHover;
@property(assign, nonatomic) BOOL shouldHalo;
@property(readonly, assign, nonatomic) BOOL hasDistance;
@property(readonly, assign, nonatomic) BOOL hasMetrics;
@property(readonly, assign, nonatomic) BOOL hasAccuracy;
@property(readonly, assign, nonatomic) BOOL hasPosition;
@property(readonly, assign, nonatomic) BOOL hasZoomLevel;
@property(readonly, assign, nonatomic) BOOL hasShouldHover;
@property(readonly, assign, nonatomic) BOOL hasShouldHalo;
@property(readonly, assign, nonatomic) BOOL hasChanges;
@property(assign, nonatomic) BOOL shouldScrollToLocation;
@property(assign, nonatomic) BOOL isEndVisible;
@property(assign, nonatomic) BOOL isStartVisible;
@property(assign, nonatomic) BOOL hasComputedMetrics;
@property(assign, nonatomic) BOOL hasFocus;
-(void)clearShouldHalo;
-(id)shouldHaloObject;
-(void)clearShouldHover;
-(id)shouldHoverObject;
-(void)clearZoomLevel;
-(id)zoomLevelObject;
-(void)clearPosition;
-(void)clearAccuracy;
-(void)clearDistance;
-(id)distanceObject;
-(id)copyWithZone:(NSZone*)zone;
-(id)description;
-(void)clearMetrics;
-(void)resetMetrics;
-(void)incrementRunCount;
-(void)dealloc;
@end

