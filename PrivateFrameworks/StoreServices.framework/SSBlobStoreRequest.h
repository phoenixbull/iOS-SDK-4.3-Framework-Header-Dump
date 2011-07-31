/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "StoreServices-Structs.h"
#import "SSBlobsRequestDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class SSBlobsRequest, SSBlobStore;

__attribute__((visibility("hidden")))
@interface SSBlobStoreRequest : XXUnknownSuperclass <SSBlobsRequestDelegate> {
@private
	SSBlobStore* _blobStore;
	id _completionBlock;
	dispatch_queue_s* _dispatchQueue;
	SSBlobsRequest* _request;
}
@property(assign) SSBlobStore* blobStore;
@property(readonly, assign) id completionBlock;
@property(readonly, assign) SSBlobsRequest* blobsRequest;
-(id)init;
-(id)initWithBlobsRequest:(id)blobsRequest completion:(id)completion;
-(void)dealloc;
-(void)cancel;
-(void)request:(id)request didFailWithError:(id)error;
-(void)blobsRequest:(id)request didReceiveResponse:(id)response;
@end

