/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "EDPatternFill.h"
#import "OfficeImport-Structs.h"
#import "EDFill.h"

@class EDColorReference;

__attribute__((visibility("hidden")))
@interface EDPatternFill : EDFill {
@private
	int mType;
	EDColorReference* mBackColorReference;
	EDColorReference* mForeColorReference;
}
+(id)patternFillWithType:(int)type resources:(id)resources;
+(id)patternFillWithType:(int)type foreColor:(id)color resources:(id)resources;
+(id)patternFillWithType:(int)type foreColor:(id)color backColor:(id)color3 resources:(id)resources;
-(id)initWithResources:(id)resources;
-(id)initWithType:(int)type foreColor:(id)color backColor:(id)color3 resources:(id)resources;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)zone;
-(BOOL)isEqualToPatternFill:(id)patternFill;
-(BOOL)isEqual:(id)equal;
-(unsigned)hash;
-(bool)isEmpty;
-(int)type;
-(id)foreColor;
-(id)backColor;
@end

@interface EDPatternFill (Private)
-(void)setType:(int)type;
-(void)setForeColor:(id)color;
-(void)setBackColor:(id)color;
-(void)setBackColorReference:(id)reference;
-(void)setForeColorReference:(id)reference;
@end

@interface EDPatternFill (EDInternal)
+(id)patternFillWithType:(int)type foreColorReference:(id)reference backColorReference:(id)reference3 resources:(id)resources;
-(id)initWithType:(int)type foreColorReference:(id)reference backColorReference:(id)reference3 resources:(id)resources;
-(id)foreColorReference;
-(id)backColorReference;
@end

