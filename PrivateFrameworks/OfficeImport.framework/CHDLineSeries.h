/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "CHDMarkerOwner.h"
#import "CHDSeries.h"

@class CHDMarker;

__attribute__((visibility("hidden")))
@interface CHDLineSeries : CHDSeries <CHDMarkerOwner> {
@private
	CHDMarker* mMarker;
	bool mSmooth;
}
-(id)initWithChart:(id)chart;
-(void)dealloc;
-(id)marker;
-(void)setMarker:(id)marker;
-(bool)isSmooth;
-(void)setSmooth:(bool)smooth;
@end

