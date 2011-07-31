/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import "MKSearchResult.h"
#import "MapKit-Structs.h"


__attribute__((visibility("hidden")))
@interface MKUserLocationSearchResult : MKSearchResult {
@private
	double _lastUserLocationUpdateTime;
	CADoublePoint _lastUserLocationCoordinate;
}
+(id)searchResult;
-(void)setCoordinate:(CADoublePoint)coordinate;
-(CGPoint)longLat;
-(BOOL)needsReverseGeocodeCheck;
-(BOOL)performsReverseGeocodeCheck;
-(BOOL)requiresPanoramaIDCheck;
@end
