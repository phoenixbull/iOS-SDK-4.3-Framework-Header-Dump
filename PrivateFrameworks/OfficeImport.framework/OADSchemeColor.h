/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "OADColor.h"


__attribute__((visibility("hidden")))
@interface OADSchemeColor : OADColor {
@private
	int mIndex;
}
+(id)schemeColorWithIndex:(int)index;
-(id)initWithSchemeColorIndex:(int)schemeColorIndex;
-(id)copyWithZone:(NSZone*)zone;
-(int)schemeColorIndex;
-(unsigned)hash;
-(BOOL)isEqual:(id)equal;
@end

