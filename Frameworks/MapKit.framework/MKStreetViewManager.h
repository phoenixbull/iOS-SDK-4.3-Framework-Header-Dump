/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import "MapKit-Structs.h"
#import "PBRequesterDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray, MKPanoramaStore;

@interface MKStreetViewManager : XXUnknownSuperclass <PBRequesterDelegate> {
@private
	MKPanoramaStore* _store;
	NSMutableArray* _requesters;
	CFDictionaryRef _requesterForLocatableObject;
}
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)didReceiveMemoryWarning;
-(id)panoramaWithId:(id)anId;
-(id)panoramaWithCoordinate:(CADoublePoint)coordinate;
-(void)_consumeRequester:(id)requester;
-(void)_loadRequest:(id)request forObject:(id)object delegate:(id)delegate;
-(void)_requestPanoramaInfoForObject:(id)object withPanoramaID:(id)panoramaID delegate:(id)delegate;
-(void)_requestPanoramaInfoForObject:(id)object delegate:(id)delegate;
-(void)_requesterFailedLoadingLocatableObject:(id)object;
-(void)_requesterCanceledLoadingLocatableObject:(id)object;
-(void)requester:(id)requester didFailWithError:(id)error;
-(void)requesterDidCancel:(id)requester;
-(void)_handleMissingPanoramaRequest:(id)request response:(id)response;
-(void)_notifyStreetViewDelegateRequest:(id)request response:(id)response;
-(void)requester:(id)requester didReceiveResponse:(id)response forRequest:(id)request;
-(id)_storedPanoramaForObject:(id)object;
-(void)requestPanoramaInfoForObject:(id)object delegate:(id)delegate;
-(void)requestPanoramaInfoForObjects:(id)objects delegate:(id)delegate;
@end

