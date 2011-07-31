/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "ISOperationDelegate.h"
#import "CLLocationManagerDelegate.h"

@class NSArray, CLLocationManager, ISOperation;

@interface SULocationObserver : XXUnknownSuperclass <CLLocationManagerDelegate, ISOperationDelegate> {
	int _distanceFilter;
	CLLocationManager* _locationManager;
	NSArray* _locationSections;
	int _observeCount;
	ISOperation* _operation;
}
@property(retain, nonatomic) NSArray* locationSections;
@property(readonly, assign, nonatomic, getter=isObservingLocation) BOOL observingLocation;
-(id)init;
-(void)dealloc;
-(void)beginObservingLocation;
-(void)endObservingLocation;
-(void)endObserveringLocation;
-(void)locationManager:(id)manager didUpdateToLocation:(id)location fromLocation:(id)location3;
-(void)operation:(id)operation failedWithError:(id)error;
-(void)operationFinished:(id)finished;
-(void)_cancelOperation;
-(void)_checkIfLocationsAreEnabled;
-(void)_handleEnabledCheckResponse:(id)response;
-(void)_handleLoadSectionsReseponse:(id)reseponse;
-(void)_loadSectionsForLocation:(id)location;
-(void)_registerForLocationCallbacks;
-(void)_setDistanceFilter:(int)filter;
-(void)_unregisterForLocationCallbacks;
@end

