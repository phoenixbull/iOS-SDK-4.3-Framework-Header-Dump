/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "EDGradientFill.h"
#import "OfficeImport-Structs.h"
#import "EDFill.h"

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface EDGradientFill : EDFill {
@private
	int mType;
	NSMutableDictionary* mStops;
	double mDegree;
	CGRect mFocusRect;
}
-(id)initWithResources:(id)resources;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)zone;
-(BOOL)isEqualToGradientFill:(id)gradientFill;
-(BOOL)isEqual:(id)equal;
-(unsigned)hash;
-(bool)isEmpty;
-(int)type;
-(double)degree;
-(id)stops;
-(CGRect)focusRect;
-(id)colorForStopAtPosition:(id)position;
@end

@interface EDGradientFill (Private)
-(void)setType:(int)type;
-(void)setDegree:(double)degree;
-(void)setFocusRect:(CGRect)rect;
-(void)setStops:(id)stops;
-(void)setStopColor:(id)color atPosition:(id)position;
@end

@interface EDGradientFill (EDInternal)
+(id)gradientWithType:(int)type degree:(double)degree top:(double)top bottom:(double)bottom right:(double)right left:(double)left stops:(id)stops resources:(id)resources;
+(id)gradientWithType:(int)type degree:(double)degree focusRect:(CGRect)rect stops:(id)stops resources:(id)resources;
-(id)initWithType:(int)type degree:(double)degree top:(double)top bottom:(double)bottom right:(double)right left:(double)left stops:(id)stops resources:(id)resources;
-(id)initWithType:(int)type degree:(double)degree focusRect:(CGRect)rect stops:(id)stops resources:(id)resources;
@end

