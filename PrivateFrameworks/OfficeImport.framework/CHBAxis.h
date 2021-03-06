/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "OfficeImport-Structs.h"
#import "CHBAxis.h"


__attribute__((visibility("hidden")))
@interface CHBAxis : XXUnknownSuperclass {
}
+(id)readWithXlPlotAxis:(int)xlPlotAxis state:(id)state;
+(int)chbAxisIdForPlotAxis:(int)plotAxis state:(id)state;
@end

@interface CHBAxis (Private)
+(Class)chbAxisClassWith:(XlChartPlotAxis*)with plotAxis:(int)axis;
+(Class)chbAxisClassWith:(id)with;
+(int)xlPlotAxisTypeFrom:(int)from;
+(int)chdAxisPositionFromAxisType:(int)axisType;
@end

