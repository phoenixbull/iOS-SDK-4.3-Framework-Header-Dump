/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OADBulletProperties.h"

@class OADBlipRef;

__attribute__((visibility("hidden")))
@interface OADImageBulletProperties : OADBulletProperties {
@private
	OADBlipRef* mImage;
}
-(id)initWithBlipRef:(id)blipRef;
-(void)dealloc;
-(id)image;
-(BOOL)isEqual:(id)equal;
@end

