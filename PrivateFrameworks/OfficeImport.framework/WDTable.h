/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "WDBlock.h"

@class NSMutableArray, WDTableProperties;

__attribute__((visibility("hidden")))
@interface WDTable : WDBlock {
@private
	WDTableProperties* mProperties;
	NSMutableArray* mRows;
}
-(id)initWithText:(id)text;
-(void)dealloc;
-(id)properties;
-(void)clearProperties;
-(int)rowCount;
-(id)rowAt:(int)at;
-(id)addRow;
-(void)clearRows;
-(int)blockType;
-(int)nestingLevel;
-(id)rowIterator;
-(id)newRowIterator;
-(id)cellIterator;
-(id)newCellIterator;
-(id)runIterator;
-(id)newRunIterator;
@end

