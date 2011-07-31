/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "OADBlipEffect.h"

@class OADColor;

__attribute__((visibility("hidden")))
@interface OADForegroundColorEffect : OADBlipEffect {
@private
	OADColor* mForegroundColor;
}
-(id)init;
-(id)copyWithZone:(NSZone*)zone;
-(void)dealloc;
-(id)foregroundColor;
-(void)setForegroundColor:(id)color;
-(void)setStyleColor:(id)color;
-(unsigned)hash;
-(BOOL)isEqual:(id)equal;
@end

