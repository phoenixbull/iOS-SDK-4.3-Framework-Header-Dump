/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "WXTableRow.h"
#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface WXTableRow : XXUnknownSuperclass {
}
+(void)readFrom:(xmlNode*)from tableGrid:(ChVector<long int>*)grid to:(id)to state:(id)state;
@end

@interface WXTableRow (Private)
+(void)readCellsFrom:(xmlNode*)from tableGrid:(ChVector<long int>*)grid to:(id)to gridIndex:(int*)index state:(id)state;
@end

