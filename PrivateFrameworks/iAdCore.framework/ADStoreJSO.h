/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iAdCore.framework/iAdCore
 */

#import "iAdCore-Structs.h"
#import "ADJavaScriptObject.h"

@class UIAlertView, NSString, NSMutableDictionary, NSMutableArray, NSNumber, SSItemOffer, NSTimer;
@protocol ADJSODelegate;

@interface ADStoreJSO : ADJavaScriptObject {
	NSNumber* _currentPurchaseAdamId;
	SSItemOffer* _currentPurchaseOffer;
	NSMutableDictionary* _registeredItems;
	NSMutableDictionary* _expirationTimers;
	NSMutableArray* _storeRequests;
	NSTimer* _renewalTimer;
	UIAlertView* _purchaseConfirmationAlertView;
	id<ADJSODelegate> _delegate;
	BOOL _privilegedClient;
	BOOL _adManagesPurchaseFlow;
	NSString* _iBooksBuyParameters;
	BOOL _hasRegisteredItems;
}
@property(copy, nonatomic) NSNumber* currentPurchaseAdamId;
@property(retain, nonatomic) SSItemOffer* currentPurchaseOffer;
@property(retain, nonatomic) NSMutableDictionary* registeredItems;
@property(retain, nonatomic) NSMutableDictionary* expirationTimers;
@property(retain, nonatomic) NSMutableArray* storeRequests;
@property(retain, nonatomic) NSTimer* renewalTimer;
@property(retain, nonatomic) UIAlertView* purchaseConfirmationAlertView;
@property(assign, nonatomic) id<ADJSODelegate> delegate;
@property(assign, nonatomic, getter=isPrivilegedClient) BOOL privilegedClient;
@property(assign) BOOL adManagesPurchaseFlow;
@property(copy, nonatomic) NSString* iBooksBuyParameters;
@property(assign) BOOL hasRegisteredItems;
+(id)scriptSelectors;
+(void)initializeInContext:(OpaqueJSContext*)context;
-(void)dealloc;
-(id)init;
-(void)_lookupRegisteredItems;
-(void)registerItemsForPurchase:(id)purchase;
-(void)lookupItemWithID:(id)anId listener:(id)listener;
-(void)invalidateMetadataTimers;
-(void)_updateTimersForItem:(id)item validUntil:(double)until;
-(void)_validateItemMetadata;
-(void)itemMetadataExpired:(id)expired;
-(void)itemLookupRequest:(id)request didFindItems:(id)items;
-(void)request:(id)request didFailWithError:(id)error;
-(void)handleFailedAdamId:(id)anId;
-(void)requestDidFinish:(id)request;
-(void)_purchaseCurrentItemIncludingiBooksApp:(BOOL)app;
-(void)_checkForiBooksApp;
-(void)alertView:(id)view clickedButtonAtIndex:(int)index;
-(void)purchaseItemWithID:(id)anId offerIdentifier:(id)identifier listener:(id)listener;
-(void)purchaseRequest:(id)request purchaseDidFail:(id)purchase withError:(id)error;
-(void)purchaseRequest:(id)request purchaseDidSucceed:(id)purchase;
@end

