/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "WXVmlClient.h"
#import "OfficeImport-Structs.h"
#import "OAVClient.h"
#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface WXVmlClient : XXUnknownSuperclass <OAVClient> {
}
+(void)initialize;
+(void)copyFromDrawable:(id)drawable toContent:(id)content;
+(bool)behindText:(id)text;
+(int)horizontalPosition:(id)position;
+(int)relativeHorizontalPosition:(id)position;
+(int)verticalPosition:(id)position;
+(int)relativeVerticalPosition:(id)position;
+(double)wrapDistanceLeft:(id)left;
+(double)wrapDistanceTop:(id)top;
+(double)wrapDistanceRight:(id)right;
+(double)wrapDistanceBottom:(id)bottom;
+(BOOL)floating:(id)floating;
+(int)zIndex:(id)index;
+(void)readFromDrawable:(xmlNode*)drawable toContent:(id)content;
+(void)readClientDataFromShape:(xmlNode*)shape toGraphic:(id)graphic state:(id)state;
+(void)readClientDataFromGroup:(xmlNode*)group toGroup:(id)group2 state:(id)state;
+(int)vmlSupportLevel;
@end

@interface WXVmlClient (Private)
+(void)readTextWrappingFromParent:(xmlNode*)parent toAnchor:(id)anchor;
@end

