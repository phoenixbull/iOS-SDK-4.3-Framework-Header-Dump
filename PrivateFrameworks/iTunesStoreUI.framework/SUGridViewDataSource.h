/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import "NSObject.h"


@protocol SUGridViewDataSource <NSObject>
-(id)gridView:(id)view gridCellForRowAtIndexPath:(id)indexPath;
-(int)gridView:(id)view numberOfColumnsInSection:(int)section;
-(int)gridView:(id)view numberOfRowsInSection:(int)section;
@optional
-(void)gridView:(id)view commitEditingStyle:(int)style forCellAtIndexPath:(id)indexPath;
-(id)gridView:(id)view titleForHeaderInSection:(int)section;
-(int)numberOfSectionsInGridView:(id)gridView;
@end

