/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "CHBMarker.h"
#import "OfficeImport-Structs.h"


__attribute__((visibility("hidden")))
@interface CHBMarker : XXUnknownSuperclass {
}
+(id)readFrom:(const XlChartSeriesFormat*)from state:(id)state;
@end

@interface CHBMarker (Private)
+(int)chdMarkerStyleFromXlMarkerType:(int)xlMarkerType;
+(int)xlMarkerStyleFromCHDMarkerType:(int)chdmarkerType;
@end

