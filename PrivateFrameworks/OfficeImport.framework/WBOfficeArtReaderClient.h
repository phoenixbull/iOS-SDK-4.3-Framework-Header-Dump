/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OABReaderClient.h"
#import "OfficeImport-Structs.h"
#import "WBOfficeArtReaderClient.h"
#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface WBOfficeArtReaderClient : XXUnknownSuperclass <OABReaderClient> {
}
+(void)readClientDataFromShape:(id)shape toGraphic:(id)graphic state:(id)state;
+(void)readClientDataFromGroup:(id)group toGroup:(id)group2 state:(id)state;
+(void)readClientDataFromTableCell:(id)tableCell toTableCell:(id)tableCell2 state:(id)state;
+(BOOL)escherIsFullySupported;
+(BOOL)tablesAreAllowed;
@end

@interface WBOfficeArtReaderClient (Private)
+(void)readFrom:(EshContentProperties*)from to:(id)to;
+(bool)behindText:(EshContentProperties*)text;
+(bool)allowOverlap:(EshContentProperties*)overlap;
+(int)horizontalPosition:(EshContentProperties*)position;
+(int)relativeHorizontalPosition:(EshContentProperties*)position;
+(int)verticalPosition:(EshContentProperties*)position;
+(int)relativeVerticalPosition:(EshContentProperties*)position;
+(double)wrapDistanceLeft:(EshContentProperties*)left;
+(double)wrapDistanceTop:(EshContentProperties*)top;
+(double)wrapDistanceRight:(EshContentProperties*)right;
+(double)wrapDistanceBottom:(EshContentProperties*)bottom;
@end

