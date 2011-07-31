/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSDictionary, NSSet, NSArray;

@interface ISURLBag : XXUnknownSuperclass {
	NSDictionary* _dictionary;
	NSDictionary* _headerPatterns;
	double _invalidationTime;
	NSArray* _networkConstraints;
}
@property(assign) double invalidationTime;
@property(readonly, assign, getter=isValid) BOOL valid;
@property(readonly, assign) NSSet* availableStorefrontItemKinds;
@property(readonly, assign) NSArray* networkConstraints;
+(void)invalidateAllBags;
+(void)setURLBag:(id)bag forContext:(id)context;
+(id)urlBagForContext:(id)context;
+(void)_loadItemKindURLBagKeyMap;
+(id)storeFrontURLBagKeyForItemKind:(id)itemKind;
+(id)copyExtraHeadersForURL:(id)url inBagContext:(id)bagContext;
+(id)networkConstraintsForNetworkType:(int)networkType inBagContext:(id)bagContext;
+(id)urlForKey:(id)key inBagContext:(id)bagContext;
+(BOOL)urlIsTrusted:(id)trusted inBagContext:(id)bagContext;
+(id)valueForKey:(id)key inBagContext:(id)bagContext;
+(id)_copyFallbackContextForContext:(id)context;
-(id)init;
-(id)initWithRawDictionary:(id)rawDictionary;
-(id)initWithURLBagContext:(id)urlbagContext;
-(void)dealloc;
-(id)copyExtraHeadersForURL:(id)url;
-(BOOL)loadFromDictionary:(id)dictionary returningError:(id*)error;
-(int)minimumNetworkTypeForAssetType:(int)assetType fileSize:(long long)size;
-(id)networkConstraintsForNetworkType:(int)networkType;
-(id)urlForKey:(id)key;
-(BOOL)urlIsTrusted:(id)trusted;
-(id)valueForKey:(id)key;
-(id)sanitizedURLForURL:(id)url;
-(id)_copyHeaderPatternsFromDictionary:(id)dictionary;
-(id)_copyNetworkConstraintsFromDictionary:(id)dictionary;
-(id)_copyNetworkConstraintsFromURLBag:(id)urlbag;
-(BOOL)_loadFromSignedDictionary:(id)signedDictionary returningError:(id*)error;
-(id)_networkConstraintsCachePath;
-(id)_newDefaultExternalNetworkConstraints;
-(id)_newExternalNetworkConstraints;
-(void)_setDictionary:(id)dictionary;
-(void)_writeNetworkConstraintsCacheFile;
-(void)_writeURLResolutionCacheFile;
@end

