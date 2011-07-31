/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSURLCacheInternal;

@interface NSURLCache : XXUnknownSuperclass {
@private
	NSURLCacheInternal* _internal;
}
+(id)sharedURLCache;
+(void)setSharedURLCache:(id)cache;
+(void)_performDiskCacheSync;
+(void)_diskCacheSyncLoop:(id)loop;
-(CFCachedURLResponseRef)_nscfBridgeURLCacheCopyResponseForRequest:(CFURLRequestRef)request;
-(void)_nscfBridgeURLCacheStoreCachedResponse:(CFCachedURLResponseRef)response forRequest:(CFURLRequestRef)request;
-(long)_nscfBridgeURLCacheDiskCapacity;
-(void)_nscfBridgeURLCacheSetMemoryCapacity:(long)capacity;
-(void)_nscfBridgeURLCacheSetDiskCapacity:(long)capacity;
-(void)_nscfBridgeURLCacheRemoveCachedResponseForRequest:(id)request;
-(void)_nscfBridgeURLCacheRemoveAllCachedResponses;
-(long)_nscfBridgeURLCacheMemoryCapacity;
-(long)_nscfBridgeURLCacheCurrentMemoryUsage;
-(long)_nscfBridgeURLCacheCurrentDiskUsage;
-(id)init;
-(id)initWithExistingSharedCFURLCache:(CFURLCacheRef)existingSharedCFURLCache;
-(id)initWithMemoryCapacity:(unsigned)memoryCapacity diskCapacity:(unsigned)capacity diskPath:(id)path;
-(id)cachedResponseForRequest:(id)request;
-(void)storeCachedResponse:(id)response forRequest:(id)request;
-(void)removeCachedResponseForRequest:(id)request;
-(void)removeAllCachedResponses;
-(unsigned)memoryCapacity;
-(unsigned)diskCapacity;
-(void)setMemoryCapacity:(unsigned)capacity;
-(void)setDiskCapacity:(unsigned)capacity;
-(unsigned)currentMemoryUsage;
-(unsigned)currentDiskUsage;
-(XXStruct_K5nmsA)_cacheStatistics;
-(void)dealloc;
-(CFURLCacheRef)_CFURLCache;
-(void)_memoryCacheRemoveNodeFromLRUList:(id)lrulist;
-(void)_memoryCacheAppendNodeToLRUList:(id)lrulist;
-(void)_memoryCacheTouchNode:(id)node;
-(void)_memoryCacheTruncate:(unsigned)truncate;
-(id)_memoryCacheGet:(id)get;
-(void)_memoryCachePut:(id)put;
-(void)_memoryCacheRemove:(id)remove;
-(void)_memoryCacheClear;
-(void)_diskCacheSetSyncTimer;
-(void)_diskCacheSync;
-(void)_diskCacheCreateLRUList:(id)list;
-(id)_cacheDirectory;
-(id)_diskCacheDefaultPath;
-(BOOL)_diskCacheCreateDirectory;
-(id)_diskCacheGet:(id)get;
-(void)_diskCacheClear;
-(void)_diskCacheTruncate:(unsigned)truncate;
-(void)_diskCacheScheduleWrite:(id)write;
-(void)_diskCacheExecuteWrite:(id)write;
-(void)_diskCacheScheduleRemoval:(id)removal;
-(void)_diskCacheExecuteRemoval:(id)removal;
@end

