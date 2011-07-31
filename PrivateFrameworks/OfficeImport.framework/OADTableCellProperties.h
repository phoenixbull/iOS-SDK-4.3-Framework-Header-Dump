/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class OADTableCell3DProperties, OADFill, OADStroke;

__attribute__((visibility("hidden")))
@interface OADTableCellProperties : XXUnknownSuperclass {
@private
	OADStroke* mLeftStroke;
	BOOL mIsLeftStrokeOverridden;
	OADStroke* mRightStroke;
	BOOL mIsRightStrokeOverridden;
	OADStroke* mTopStroke;
	BOOL mIsTopStrokeOverridden;
	OADStroke* mBottomStroke;
	BOOL mIsBottomStrokeOverridden;
	OADStroke* mTopLeftToBottomRightStroke;
	BOOL mIsTopLeftToBottomRightStrokeOverridden;
	OADStroke* mBottomLeftToTopRightStroke;
	BOOL mIsBottomLeftToTopRightStrokeOverridden;
	OADTableCell3DProperties* mThreeDProperties;
	BOOL mIsThreeDPropertiesOverridden;
	OADFill* mFill;
	BOOL mIsFillOverridden;
	float mLeftMargin;
	BOOL mIsLeftMarginOverridden;
	float mRightMargin;
	BOOL mIsRightMarginOverridden;
	float mTopMargin;
	BOOL mIsTopMarginOverridden;
	float mBottomMargin;
	BOOL mIsBottomMarginOverridden;
	int mTextVertical;
	BOOL mIsTextVerticalOverridden;
	int mTextAnchor;
	BOOL mIsTextAnchorOverridden;
	BOOL mTextAnchorCenter;
	BOOL mIsTextAnchorCenterOverridden;
	int mTextHorizontalOverflow;
	BOOL mIsTextHorizontalOverflowOverridden;
}
-(void)dealloc;
-(id)stroke:(int)stroke;
-(id)leftStroke;
-(void)setLeftStroke:(id)stroke;
-(BOOL)isLeftStrokeOverridden;
-(id)rightStroke;
-(void)setRightStroke:(id)stroke;
-(BOOL)isRightStrokeOverridden;
-(id)topStroke;
-(void)setTopStroke:(id)stroke;
-(BOOL)isTopStrokeOverridden;
-(id)bottomStroke;
-(void)setBottomStroke:(id)stroke;
-(BOOL)isBottomStrokeOverridden;
-(id)topLeftToBottomRightStroke;
-(void)setTopLeftToBottomRightStroke:(id)bottomRightStroke;
-(BOOL)isTopLeftToBottomRightStrokeOverridden;
-(id)bottomLeftToTopRightStroke;
-(void)setBottomLeftToTopRightStroke:(id)topRightStroke;
-(BOOL)isBottomLeftToTopRightStrokeOverridden;
-(id)strokeNormalToDir:(int)dir bound:(int)bound;
-(id)threeDProperties;
-(void)setThreeDProperties:(id)properties;
-(BOOL)isThreeDPropertiesOverridden;
-(id)fill;
-(void)setFill:(id)fill;
-(BOOL)isFillOverridden;
-(float)leftMargin;
-(void)setLeftMargin:(float)margin;
-(BOOL)isLeftMarginOverridden;
-(float)rightMargin;
-(void)setRightMargin:(float)margin;
-(BOOL)isRightMarginOverridden;
-(float)topMargin;
-(void)setTopMargin:(float)margin;
-(BOOL)isTopMarginOverridden;
-(float)bottomMargin;
-(void)setBottomMargin:(float)margin;
-(BOOL)isBottomMarginOverridden;
-(int)textVertical;
-(void)setTextVertical:(int)vertical;
-(BOOL)isTextVerticalOverridden;
-(int)textAnchor;
-(void)setTextAnchor:(int)anchor;
-(BOOL)isTextAnchorOverridden;
-(BOOL)textAnchorCenter;
-(void)setTextAnchorCenter:(BOOL)center;
-(BOOL)isTextAnchorCenterOverridden;
-(int)textHorizontalOverflow;
-(void)setTextHorizontalOverflow:(int)overflow;
-(BOOL)isTextHorizontalOverflowOverridden;
@end

