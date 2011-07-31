/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <ProtocolBuffer/PBCodable.h>


__attribute__((visibility("hidden")))
@interface GEOMapRegion : PBCodable {
@private
	double _centerLng;
	BOOL _hasCenterLng;
	double _centerLat;
	BOOL _hasCenterLat;
	double _spanLng;
	BOOL _hasSpanLng;
	double _spanLat;
	BOOL _hasSpanLat;
}
@property(assign, nonatomic) double centerLng;
@property(readonly, assign, nonatomic) BOOL hasCenterLng;
@property(assign, nonatomic) double centerLat;
@property(readonly, assign, nonatomic) BOOL hasCenterLat;
@property(assign, nonatomic) double spanLng;
@property(readonly, assign, nonatomic) BOOL hasSpanLng;
@property(assign, nonatomic) double spanLat;
@property(readonly, assign, nonatomic) BOOL hasSpanLat;
-(id)init;
-(void)dealloc;
-(BOOL)readFrom:(id)from;
-(void)writeTo:(id)to;
-(id)description;
-(id)dictionaryRepresentation;
@end

