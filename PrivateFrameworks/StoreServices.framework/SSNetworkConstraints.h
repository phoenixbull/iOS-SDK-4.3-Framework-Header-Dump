/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "StoreServices-Structs.h"

@class NSDictionary, NSMutableDictionary;

@interface SSNetworkConstraints : XXUnknownSuperclass {
@private
	NSMutableDictionary* _dictionary;
	dispatch_queue_s* _dispatchQueue;
	int _networkType;
}
@property(readonly, assign) NSDictionary* constraintDictionary;
@property(assign) int networkType;
+(id)disableEverythingConstraints;
+(id)enableEverythingConstraints;
-(id)_initSSNetworkConstraints;
-(id)init;
-(id)initWithConstraintDictionary:(id)constraintDictionary forNetworkType:(int)networkType;
-(void)dealloc;
-(id)networkTooSlowErrorWithAssetType:(int)assetType itemName:(id)name;
-(id)networkTooSlowErrorWithAssetType:(int)assetType itemName:(id)name canDownloadInITunes:(BOOL)itunes;
-(id)searchQueryParametersForAssetType:(int)assetType;
-(long long)sizeLimitForAssetType:(int)assetType;
-(void)setContentEnabled:(BOOL)enabled forConstraintCategory:(id)constraintCategory;
-(void)setSearchQueryParameters:(id)parameters forAssetType:(int)assetType;
-(void)setSizeLimit:(long long)limit forAssetType:(int)assetType;
@end

