/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "StoreServices-Structs.h"

@class NSString, NSMutableArray;

@interface SSBlobStore : XXUnknownSuperclass {
@private
	dispatch_queue_s* _dispatchQueue;
	NSString* _domain;
	NSMutableArray* _requests;
}
@property(readonly, assign) NSString* blobStoreDomain;
-(id)init;
-(id)initWithBlobStoreDomain:(id)blobStoreDomain;
-(void)dealloc;
-(void)cancelAllBlobRequests;
-(void)loadBlobWithIdentifier:(id)identifier options:(unsigned)options completion:(id)completion;
-(void)loadBlobsWithIdentifiers:(id)identifiers options:(unsigned)options completion:(id)completion;
-(void)setBlob:(id)blob options:(unsigned)options completion:(id)completion;
-(void)setBlobs:(id)blobs options:(unsigned)options completion:(id)completion;
-(void)_enqueueBlobsRequest:(id)request withCompletion:(id)completion;
-(void)_request:(id)request didReceiveResponse:(id)response;
@end

