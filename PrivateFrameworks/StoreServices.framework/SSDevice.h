/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "StoreServices-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, SSRequest, NSSet, NSMutableArray;

@interface SSDevice : XXUnknownSuperclass {
@private
	dispatch_queue_s* _dispatchQueue;
	NSMutableArray* _loadStoreFrontHandlers;
	SSRequest* _loadStoreFrontRequest;
	NSString* _localStoreFrontIdentifier;
	BOOL _localStoreFrontIsTransient;
	NSMutableArray* _simpleRequests;
	NSString* _synchedStoreFrontIdentifier;
}
@property(readonly, assign) NSString* synchedStoreFrontIdentifier;
@property(readonly, assign, getter=isStoreFrontIdentifierTransient) BOOL storeFrontIdentifierTransient;
@property(readonly, assign) NSSet* automaticDownloadKinds;
@property(readonly, assign) NSString* storeFrontIdentifier;
+(id)currentDevice;
+(id)copyCachedAvailableItemKinds;
+(BOOL)promptNeedsDisplay:(id)display;
+(BOOL)setCachedAvailableItemKinds:(id)kinds;
+(void)setLastPromptAttemptDate:(id)date forPromptWithIdentifier:(id)identifier;
+(void)setPromptWithIdentifier:(id)identifier needsDisplay:(BOOL)display;
-(id)init;
-(void)dealloc;
-(id)copyStoreFrontRequestHeaders;
-(void)getAvailableItemKindsWithBlock:(id)block;
-(void)loadStoreFrontWithCompletionHandler:(id)completionHandler;
-(void)setStoreFrontWithResponseHeaders:(id)responseHeaders;
-(void)showPromptWithIdentifier:(id)identifier completionHandler:(id)handler;
-(void)minusAutomaticDownloadKinds:(id)kinds withCompletionBlock:(id)completionBlock;
-(void)reloadStoreFrontIdentifier;
-(void)setAutomaticDownloadKinds:(id)kinds withCompletionBlock:(id)completionBlock;
-(void)setStoreFrontIdentifier:(id)identifier isTransient:(BOOL)transient;
-(void)unionAutomaticDownloadKinds:(id)kinds withCompletionBlock:(id)completionBlock;
-(void)request:(id)request didFailWithError:(id)error;
-(void)requestDidFinish:(id)request;
-(void)resetStoreFrontForSignOut;
-(void)setStoreFrontIdentifierWithInfo:(id)info;
-(void)_cleanupSimpleRequest:(id)request;
-(void)_finishRequestWithError:(id)error;
-(void)_postStoreFrontDidChangeNotification;
-(void)_reloadAfterStoreFrontChange;
-(void)_reloadStoreFrontIdentifier;
-(void)_setLocalStoreFrontIdentifier:(id)identifier isTransient:(BOOL)transient;
-(BOOL)_setStoreFrontIdentifier:(id)identifier isTransient:(BOOL)transient;
-(void)_trackSimpleRequest:(id)request;
-(void)_updateAutomaticDownloadKinds:(id)kinds withValue:(id)value completionBlock:(id)block;
@end

