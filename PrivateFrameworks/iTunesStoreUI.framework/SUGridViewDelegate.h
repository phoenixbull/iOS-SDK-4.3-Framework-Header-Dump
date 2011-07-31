/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import "NSObject.h"


@protocol SUGridViewDelegate <NSObject>
@optional
-(int)gridView:(id)view editingStyleForCellAtIndexPath:(id)indexPath;
-(float)gridView:(id)view heightForHeaderInSection:(int)section;
-(id)gridView:(id)view viewForHeaderInSection:(int)section;
-(void)gridView:(id)view willDisplayCell:(id)cell forIndexPath:(id)indexPath;
-(float)marginForGridView:(id)gridView;
@end

