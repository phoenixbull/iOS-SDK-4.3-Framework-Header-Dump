/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import "SUTableDataSource.h"

@class SUStructuredPage, NSMutableArray, SUItem;

@interface SUStructuredPageTableDataSource : SUTableDataSource {
	SUItem* _activeLoadMoreItem;
	NSMutableArray* _cachedHeaderViews;
	float _offerButtonWidth;
	SUStructuredPage* _structuredPage;
	int _style;
}
@property(retain, nonatomic) SUItem* activeLoadMoreItem;
@property(retain, nonatomic) SUStructuredPage* structuredPage;
@property(assign, nonatomic) int style;
-(void)dealloc;
-(BOOL)canShowItemOfferButtonForItem:(id)item;
-(Class)cellClassForItem:(id)item reuseIdentifier:(id*)identifier;
-(Class)cellConfigurationClassForItem:(id)item;
-(id)cellConfigurationForIndex:(int)index item:(id)item;
-(id)newHeaderViewForSection:(int)section;
-(BOOL)canDeleteIndexPath:(id)path;
-(BOOL)canSelectIndexPath:(id)path;
-(id)cellForIndexPath:(id)indexPath;
-(float)cellHeightForIndexPath:(id)indexPath;
-(void)configureCell:(id)cell forIndexPath:(id)indexPath;
-(BOOL)deleteIndexPath:(id)path;
-(id)headerViewForSection:(int)section;
-(int)numberOfSections;
-(int)numberOfRowsInSection:(int)section;
-(void)reloadCellContexts;
-(void)reloadData;
-(int)sectionIndexForIndexTitle:(id)indexTitle atIndex:(int)index;
-(id)sectionIndexTitles;
-(int)tableViewStyle;
-(id)titleForDeleteConfirmationForIndexPath:(id)indexPath;
-(id)titleForHeaderInSection:(int)section;
-(void)_configureLoadMoreCell:(id)cell forItem:(id)item;
-(id)_itemOfferButtonForCell:(id)cell item:(id)item;
-(BOOL)_shouldShowItemOfferButtonForItem:(id)item;
@end

