/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OAVColor.h"
#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface OAVColor : XXUnknownSuperclass {
}
+(int)readColorProperty:(id)property;
+(int)readColorAdjustmentType:(id)type;
+(id)readColorFromAttribute:(id)attribute alpha:(float)alpha manager:(id)manager;
@end

@interface OAVColor (Private)
+(id)readRGBColorFromAttribute:(id)attribute;
+(id)readColorProperty:(int)property manager:(id)manager;
+(id)readPropertyColorFromAttribute:(id)attribute manager:(id)manager;
@end

