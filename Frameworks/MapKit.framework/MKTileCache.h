/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import "MapKit-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, _MKTileCache;

@interface MKTileCache : XXUnknownSuperclass {
@private
	_MKTileCache* _mapCache;
	_MKTileCache* _trafficCache;
	int _tile_edition;
	TileCachePrivate* _private;
}
@property(assign) int tileEdition;
@property(readonly, assign, nonatomic) NSString* rootDirectory;
+(id)sharedCache;
+(id)rootDirectory;
+(void)setRootDirectory:(id)directory;
-(id)init;
-(id)renderObjectForTilePath:(XXStruct_j8inqB*)tilePath useStore:(BOOL)store;
-(id)renderObjectForTilePath:(XXStruct_j8inqB*)tilePath;
-(void)setRenderObject:(id)object forTilePath:(XXStruct_j8inqB*)tilePath;
-(void)setRenderData:(const char*)data length:(unsigned long)length skipAddToMemory:(BOOL)memory forTilePath:(const XXStruct_j8inqB*)tilePath;
-(void)readTilePaths:(XXStruct_j8inqB*)paths count:(unsigned)count requester:(GMMTileRequester*)requester;
-(void)cancelRequests:(GMMTileRequester*)requests;
-(void)removeExpiredTrafficTiles:(id*)tiles nextExpireTime:(double*)time;
-(void)synchronize;
-(void)clear;
-(void)compact;
-(void)enterBackground;
-(void)enterForeground;
-(id)attributionStringForTilePaths:(id)tilePaths;
@end

