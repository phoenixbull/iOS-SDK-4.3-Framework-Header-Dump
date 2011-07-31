/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OADProperties.h"

@class OADTextWarp, OADTextBodyAutoFit;

__attribute__((visibility("hidden")))
@interface OADTextBodyProperties : OADProperties {
@private
	OADTextBodyAutoFit* mAutoFit;
	OADTextWarp* mTextWarp;
	double mTopInset;
	double mLeftInset;
	double mBottomInset;
	double mRightInset;
	double mRotation;
	double mColumnSpacing;
	unsigned short mColumnCount;
	unsigned short mTextBodyId;
	unsigned char mTextAnchorType;
	unsigned char mVerticalType;
	unsigned char mWrapType;
	unsigned char mVerticalOverflowType;
	unsigned char mHorizontalOverflowType;
	unsigned mRepectFirstLastParagraphSpacing : 1;
	unsigned mIsUpright : 1;
	unsigned mIsAnchorCenter : 1;
	unsigned mIsLeftToRightColumns : 1;
	unsigned mHasVerticalOverflowType : 1;
	unsigned mHasHorizontalOverflowType : 1;
	unsigned mHasTextBodyId : 1;
	unsigned mHasVerticalType : 1;
	unsigned mHasWrapType : 1;
	unsigned mHasTextAnchorType : 1;
	unsigned mHasIsAnchorCenter : 1;
	unsigned mHasIsUpright : 1;
	unsigned mHasRotation : 1;
	unsigned mHasColumnCount : 1;
	unsigned mHasColumnSpacing : 1;
	unsigned mHasIsLeftToRightColumns : 1;
	unsigned mHasRepectFirstLastParagraphSpacing : 1;
	unsigned mHasTopInset : 1;
	unsigned mHasLeftInset : 1;
	unsigned mHasRightInset : 1;
	unsigned mHasBottomInset : 1;
}
+(id)defaultProperties;
+(id)defaultEscherWordArtProperties;
-(id)init;
-(id)initWithDefaults;
-(void)dealloc;
-(BOOL)hasRespectLastFirstLineSpacing;
-(BOOL)respectLastFirstLineSpacing;
-(void)setRespectLastFirstLineSpacing:(BOOL)spacing;
-(BOOL)hasTopInset;
-(BOOL)hasLeftInset;
-(BOOL)hasRightInset;
-(BOOL)hasBottomInset;
-(double)topInset;
-(void)setTopInset:(double)inset;
-(double)leftInset;
-(void)setLeftInset:(double)inset;
-(double)bottomInset;
-(void)setBottomInset:(double)inset;
-(double)rightInset;
-(void)setRightInset:(double)inset;
-(BOOL)hasColumnCount;
-(int)columnCount;
-(void)setColumnCount:(int)count;
-(BOOL)hasColumnSpacing;
-(double)columnSpacing;
-(void)setColumnSpacing:(double)spacing;
-(BOOL)hasIsLeftToRightColumns;
-(BOOL)isLeftToRightColumns;
-(void)setIsLeftToRightColumns:(BOOL)rightColumns;
-(BOOL)hasAutoFit;
-(id)autoFit;
-(void)setAutoFit:(id)fit;
-(BOOL)hasVerticalType;
-(int)verticalType;
-(void)setVerticalType:(int)type;
-(BOOL)hasWrapType;
-(int)wrapType;
-(void)setWrapType:(int)type;
-(BOOL)hasVerticalOverflowType;
-(int)verticalOverflowType;
-(void)setVerticalOverflowType:(int)type;
-(BOOL)hasHorizontalOverflowType;
-(int)horizontalOverflowType;
-(void)setHorizontalOverflowType:(int)type;
-(BOOL)hasTextBodyId;
-(int)textBodyId;
-(void)setTextBodyId:(int)anId;
-(BOOL)hasTextWarp;
-(id)textWarp;
-(void)setTextWarp:(id)warp;
-(BOOL)hasIsAnchorCenter;
-(BOOL)isAnchorCenter;
-(void)setIsAnchorCenter:(BOOL)center;
-(BOOL)hasTextAnchorType;
-(int)textAnchorType;
-(void)setTextAnchorType:(int)type;
-(BOOL)hasIsUpright;
-(BOOL)isUpright;
-(void)setIsUpright:(BOOL)upright;
-(BOOL)hasRotation;
-(double)rotation;
-(void)setRotation:(double)rotation;
-(void)removeUnnecessaryOverrides;
-(unsigned)hash;
-(BOOL)isEqual:(id)equal;
@end

