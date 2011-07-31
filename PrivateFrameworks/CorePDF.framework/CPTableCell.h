/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import "CorePDF-Structs.h"
#import "CPDisposable.h"
#import "CPChunk.h"


@interface CPTableCell : CPChunk <CPDisposable> {
	CGRect cellBounds;
	XXStruct_ny2fMB rowSpan;
	XXStruct_ny2fMB columnSpan;
	XXStruct_De2_4C* borders;
	CGColorRef backgroundColor;
	unsigned backgroundGraphicCount;
	CPGraphicObject** backgroundGraphics;
}
@property(readonly, assign, nonatomic) CGRect cellBounds;
@property(assign, nonatomic) XXStruct_ny2fMB rowSpan;
@property(assign, nonatomic) XXStruct_ny2fMB columnSpan;
@property(readonly, assign, nonatomic) unsigned backgroundGraphicCount;
-(id)initWithBounds:(CGRect)bounds;
-(void)dispose;
-(void)finalize;
-(void)dealloc;
-(CGColorRef)backgroundColor;
-(void)setBackgroundGraphics:(id)graphics;
-(id)backgroundGraphicAtIndex:(unsigned)index;
-(void)setBorder:(int)border bounds:(CGRect)bounds graphics:(id)graphics;
-(CGRect)boundsOfBorder:(int)border;
-(CGColorRef)colorOfBorder:(int)border;
-(unsigned)graphicCountOfBorder:(int)border;
-(id)graphicObjectOfBorder:(int)border atIndex:(unsigned)index;
-(int)compareCellOrdinal:(id)ordinal;
@end

