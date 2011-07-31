/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import "MKAnnotation.h"
#import "MapKit-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, MKPlacemarkInternal, NSDictionary;

@interface MKPlacemark : XXUnknownSuperclass <MKAnnotation> {
@private
	MKPlacemarkInternal* _internal;
}
@property(readonly, assign, nonatomic) CADoublePoint coordinate;
@property(readonly, assign, nonatomic) NSDictionary* addressDictionary;
@property(readonly, assign, nonatomic) NSString* thoroughfare;
@property(readonly, assign, nonatomic) NSString* subThoroughfare;
@property(readonly, assign, nonatomic) NSString* locality;
@property(readonly, assign, nonatomic) NSString* subLocality;
@property(readonly, assign, nonatomic) NSString* administrativeArea;
@property(readonly, assign, nonatomic) NSString* subAdministrativeArea;
@property(readonly, assign, nonatomic) NSString* postalCode;
@property(readonly, assign, nonatomic) NSString* country;
@property(readonly, assign, nonatomic) NSString* countryCode;
-(id)init;
-(id)initWithCoordinate:(CADoublePoint)coordinate addressDictionary:(id)dictionary;
-(void)dealloc;
-(id)description;
-(id)title;
-(id)_mergedThoroughfare;
-(id)_formattedAddressLines;
-(id)_mapkit_cache_key;
-(unsigned)_mapkit_cache_accessTime;
-(void)set_mapkit_cache_accessTime:(unsigned)time;
@end

