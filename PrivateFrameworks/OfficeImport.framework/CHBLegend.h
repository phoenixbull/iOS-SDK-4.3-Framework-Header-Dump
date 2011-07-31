/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "CHBLegend.h"


__attribute__((visibility("hidden")))
@interface CHBLegend : XXUnknownSuperclass {
}
+(id)readFrom:(XlChartLegendFrame*)from state:(id)state;
+(id)readCHDLegendEntryFrom:(const XlChartCustomLegend*)from state:(id)state;
@end

@interface CHBLegend (Private)
+(int)chdLegendPositionEnumFromXlLegendPosition:(int)xlLegendPosition;
+(int)xlLegendPositionEnumFromCHDLegendPosition:(int)chdlegendPosition;
@end

