/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface OADOrientedBounds : XXUnknownSuperclass {
@private
	CGRect mBounds;
	float mRotation;
	unsigned mFlipX : 1;
	unsigned mFlipY : 1;
}
+(id)orientedBoundsWithBounds:(CGRect)bounds rotation:(float)rotation flipX:(BOOL)x flipY:(BOOL)y;
+(id)orientedBoundsWithBounds:(CGRect)bounds;
+(BOOL)directionCloserToVerticalThanToHorizontal:(float)horizontal;
-(id)initWithBounds:(CGRect)bounds rotation:(float)rotation flipX:(BOOL)x flipY:(BOOL)y;
-(id)initWithBounds:(CGRect)bounds;
-(id)init;
-(void)setOrientedBounds:(id)bounds;
-(CGRect)bounds;
-(void)setBounds:(CGRect)bounds;
-(float)rotation;
-(void)setRotation:(float)rotation;
-(BOOL)flipX;
-(void)setFlipX:(BOOL)x;
-(BOOL)flipY;
-(void)setFlipY:(BOOL)y;
-(BOOL)isEqualToOrientedBounds:(id)orientedBounds;
-(unsigned)hash;
-(BOOL)isEqual:(id)equal;
@end

