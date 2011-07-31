/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "WDTableCell.h"

@class WDTableCellProperties, WDTableRow, WDText;

__attribute__((visibility("hidden")))
@interface WDTableCell : XXUnknownSuperclass {
@private
	int mIndex;
	WDTableRow* mRow;
	WDTableCellProperties* mProperties;
	WDText* mText;
	BOOL mUseTrackedProperties;
}
-(id)initWithRow:(id)row at:(int)at;
-(void)dealloc;
-(BOOL)useTrackedProperties;
-(void)setUseTrackedProperties:(BOOL)properties;
-(int)index;
-(int)compareIndex:(id)index;
-(id)row;
-(id)properties;
-(void)clearProperties;
-(id)text;
@end

@interface WDTableCell (WMwdTableCellAdditions)
-(double)cellWidth;
@end

