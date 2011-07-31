/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import "MapKit-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class MKUserLocationView, NSMutableArray, NSMutableSet, NSMapTable, MKAnnotationView, NSMutableDictionary, MKQuadTrie, UICalloutView, MKMapTileView, MKUserLocation, MKSearchResult;

__attribute__((visibility("hidden")))
@interface MKAnnotationContainerViewInternal : XXUnknownSuperclass {
@private
	MKMapTileView* mapTileView;
	MKQuadTrie* annotationsTrie;
	NSMutableSet* pendingAnnotations;
	NSMutableArray* managedAnnotations;
	NSMutableArray* annotationViews;
	NSMapTable* annotationsToViews;
	NSMapTable* reusableAnnotationViews;
	XXStruct_Yvvv9D visibleMapRect;
	NSMutableArray* searchResultPins;
	NSMutableArray* awaitingDropPins;
	NSMutableDictionary* transitCallouts;
	BOOL isShowingTransitCallouts;
	UICalloutView* bubble;
	UICalloutView* calculateBubble;
	BOOL isAnimatingCallout;
	BOOL calloutNeedsReset;
	BOOL registeredForAddressBookChanges;
	MKAnnotationView* bubbleAnnotationView;
	MKAnnotationView* selectedAnnotationView;
	MKSearchResult* searchResultToSelect;
	id delegate;
	MKAnnotationView* draggingAnnotationView;
	CGPoint mouseDownPoint;
	CGPoint draggingAnnotationViewPosition;
	unsigned mapType;
	BOOL clickedOnAnnotationView;
	BOOL didDragAnnotationView;
	BOOL animationsEnabled;
	MKUserLocation* userLocation;
	MKUserLocationView* userLocationView;
	BOOL didAddUserLocationView;
	int userLocationViewUpdateMode;
	int restoreUserLocationViewUpdateMode;
	CADoublePoint lastMetaDataCoordinate;
	double lastMetaDataUpdateTime;
	CGAffineTransform mapTransform;
	Class calloutViewClass;
}
@end

