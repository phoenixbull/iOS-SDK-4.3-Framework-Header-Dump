/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <ProtocolBuffer/PBCodable.h>


__attribute__((visibility("hidden")))
@interface GEOSessionID : PBCodable {
@private
	unsigned long long _low;
	unsigned long long _high;
}
@property(assign, nonatomic) unsigned long long low;
@property(assign, nonatomic) unsigned long long high;
-(id)init;
-(void)dealloc;
-(BOOL)readFrom:(id)from;
-(void)writeTo:(id)to;
-(id)description;
-(id)dictionaryRepresentation;
@end

