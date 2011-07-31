/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "NSCopying.h"


__attribute__((visibility("hidden")))
@interface PBOutlineBulletKey : XXUnknownSuperclass <NSCopying> {
@private
	unsigned mSlideId;
	int mTextType;
	unsigned mPlaceholderIndex;
}
-(id)initWithOutlineBullet:(id)outlineBullet;
-(id)initWithSlideId:(unsigned long)slideId textType:(int)type placeholderIndex:(unsigned long)index;
-(id)copyWithZone:(NSZone*)zone;
-(unsigned)hash;
-(BOOL)isEqual:(id)equal;
@end

