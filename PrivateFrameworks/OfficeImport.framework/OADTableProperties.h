/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OADDrawableProperties.h"
#import "OADEffectsParent.h"

@class NSArray, OADTableStyle, NSString;

__attribute__((visibility("hidden")))
@interface OADTableProperties : OADDrawableProperties <OADEffectsParent> {
@private
	NSString* mStyleId;
	OADTableStyle* mStyle;
	BOOL mRightToLeft;
	BOOL mFirstRow;
	BOOL mFirstColumn;
	BOOL mLastRow;
	BOOL mLastColumn;
	BOOL mBandRow;
	BOOL mBandColumn;
	NSArray* mEffects;
}
+(id)defaultProperties;
-(id)initWithDefaults;
-(void)dealloc;
-(id)styleId;
-(void)setStyleId:(id)anId;
-(id)style;
-(void)setStyle:(id)style;
-(BOOL)rightToLeft;
-(void)setRightToLeft:(BOOL)left;
-(BOOL)firstRow;
-(void)setFirstRow:(BOOL)row;
-(BOOL)firstColumn;
-(void)setFirstColumn:(BOOL)column;
-(BOOL)lastRow;
-(void)setLastRow:(BOOL)row;
-(BOOL)lastColumn;
-(void)setLastColumn:(BOOL)column;
-(BOOL)bandRow;
-(void)setBandRow:(BOOL)row;
-(BOOL)bandColumn;
-(void)setBandColumn:(BOOL)column;
-(BOOL)hasBandsNormalToDir:(int)dir;
-(BOOL)hasVectorNormalToDir:(int)dir atExtremePos:(int)extremePos;
-(id)effects;
-(void)setEffects:(id)effects;
-(BOOL)hasEffects;
@end

