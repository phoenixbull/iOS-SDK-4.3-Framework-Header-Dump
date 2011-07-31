/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class EDReference;

__attribute__((visibility("hidden")))
@interface EDPane : XXUnknownSuperclass {
@private
	double mXSplitPosition;
	double mYSplitPosition;
	EDReference* mTopLeftCell;
	int mActivePane;
}
+(id)pane;
-(id)init;
-(void)dealloc;
-(double)xSplitPosition;
-(void)setXSplitPosition:(double)position;
-(double)ySplitPosition;
-(void)setYSplitPosition:(double)position;
-(id)topLeftCell;
-(void)setTopLeftCell:(id)cell;
-(int)activePane;
-(void)setActivePane:(int)pane;
@end
