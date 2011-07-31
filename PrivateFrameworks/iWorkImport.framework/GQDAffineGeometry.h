/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "iWorkImport-Structs.h"
#import "GQDAffineGeometry.h"
#import "GQDNameMappable.h"
#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface GQDAffineGeometry : XXUnknownSuperclass <GQDNameMappable> {
@private
	CGSize mNaturalSize;
	CGSize mSize;
	BOOL mSizesLocked;
	BOOL mAspectRatioLocked;
	CGPoint mPosition;
	float mAngle;
	BOOL mHorizontalFlip;
	BOOL mVerticalFlip;
	float mShearXAngle;
	float mShearYAngle;
}
+(const StateSpec*)stateForReading;
+(void)transformRect:(CGRect)rect transform:(id)transform upperLeft:(CGPoint*)left lowerLeft:(CGPoint*)left4 lowerRight:(CGPoint*)right upperRight:(CGPoint*)right6;
+(CGRect)boundsOfTransformedRect:(CGRect)transformedRect transform:(id)transform;
-(CGSize)naturalSize;
-(void)setNaturalSize:(CGSize)size;
-(CGSize)size;
-(void)setSize:(CGSize)size;
-(BOOL)sizesLocked;
-(BOOL)aspectRatioLocked;
-(CGPoint)position;
-(void)setPosition:(CGPoint)position;
-(float)angle;
-(void)setAngle:(float)angle;
-(BOOL)horizontalFlip;
-(BOOL)verticalFlip;
-(float)shearXAngle;
-(float)shearYAngle;
-(CGSize)sizeOfBoundingBox;
-(CGPoint)nonrotatedPosition;
-(CGRect)naturalBounds;
-(CGAffineTransform)transform;
-(CGAffineTransform)transformHasVFlip:(BOOL)flip vFlip:(BOOL)flip2 hasHFlip:(BOOL)flip3 hFlip:(BOOL)flip4;
@end

@interface GQDAffineGeometry (Private)
-(int)readAttributesFromReader:(xmlTextReader*)reader;
@end

