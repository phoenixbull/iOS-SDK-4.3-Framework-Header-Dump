/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OADGraphicProperties.h"

@class OADImageFill;

__attribute__((visibility("hidden")))
@interface OADImageProperties : OADGraphicProperties {
@private
	OADImageFill* mImageFill;
}
+(id)defaultProperties;
-(void)dealloc;
-(id)imageFill;
-(void)setImageFill:(id)fill;
-(BOOL)hasImageFill;
@end
