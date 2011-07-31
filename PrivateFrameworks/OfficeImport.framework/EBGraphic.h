/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "EBGraphic.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "OfficeImport-Structs.h"


__attribute__((visibility("hidden")))
@interface EBGraphic : XXUnknownSuperclass {
}
+(void)readGraphicsWithState:(id)state;
+(void)readGraphicsInChart:(id)chart state:(id)state;
+(id)readMainChartWithState:(id)state;
@end

@interface EBGraphic (Private)
+(id)readGraphicWithDictionary:(id)dictionary state:(id)state;
+(void)readOle:(id)ole xlGraphicsInfo:(XlGraphicsInfo*)info state:(id)state;
+(void)readChart:(id)chart chartIndex:(int)index state:(id)state;
+(void)readImage:(id)image xlGraphicsInfo:(XlGraphicsInfo*)info state:(id)state;
+(void)readNotesWithDictionary:(id)dictionary state:(id)state;
+(int)objectTypeForShape:(id)shape;
@end

