/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "PDBuild.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface PDParagraphBuild : PDBuild {
@private
	NSMutableArray* mTimeNodeDataList;
	double mAutoAdvanceTime;
	BOOL mIsReversedParagraphOrder;
	int mBuildLevel;
	int mType;
}
-(id)init;
-(void)dealloc;
-(int)timeNodeDataListCount;
-(id)timeNodeDataAtIndex:(int)index;
-(id)addTimeNodeData;
-(id)timeNodeDataList;
-(double)autoAdvanceTime;
-(void)setAutoAdvanceTime:(double)time;
-(BOOL)isReversedParagraphOrder;
-(void)setIsReversedParagraphOrder:(BOOL)order;
-(int)buildLevel;
-(void)setBuildLevel:(int)level;
-(int)type;
-(void)setType:(int)type;
@end

