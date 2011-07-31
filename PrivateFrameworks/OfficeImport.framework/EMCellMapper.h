/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "EMCellMapper.h"
#import "CMMapper.h"

@class EDReference;

__attribute__((visibility("hidden")))
@interface EMCellMapper : CMMapper {
@private
	EDCellHeader* edCell;
	EDReference* edMergedCellReference;
	int rowNumber;
	int firstColumn;
	int lastColumn;
	int columnSpan;
	BOOL firstCellFlag;
	BOOL spreadLeftFlag;
	double columnWidth;
}
-(id)initWithParent:(id)parent;
-(id)initWithEDCell:(EDCellHeader*)edcell rowInfo:(EDRowInfo*)info parent:(id)parent state:(id)state;
-(int)lastColumn;
-(void)setLastColumn:(int)column;
-(int)firstColumn;
-(void)setFirstColumn:(int)column;
-(double)columnWidth;
-(void)resetColumnSpan:(int)span;
-(int)columnSpan;
-(BOOL)isCellEmpty;
-(void)setFirstCellFlag;
-(BOOL)isFirstCell;
-(BOOL)isCellSpreading:(id)spreading;
-(BOOL)isCellMerged;
-(void)adjustColumnSpanForGrid:(double*)grid columnCount:(unsigned)count nextCell:(EDCellHeader*)cell withState:(id)state;
-(void)mapRowColSpansAt:(id)at withState:(id)state;
-(void)mapAt:(id)at withState:(id)state;
-(void)mapAt:(id)at withState:(id)state height:(double)height;
@end

@interface EMCellMapper (Private)
-(id)mapHyperlinkAt:(id)at;
@end
