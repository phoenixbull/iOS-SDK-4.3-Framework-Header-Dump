/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import "SUItemTableViewController.h"
#import "iTunesStoreUI-Structs.h"
#import "ISURLOperationDelegate.h"

@class SUStructuredPage, UILabel;

@interface SUStructuredPageViewController : SUItemTableViewController <ISURLOperationDelegate> {
	Class _dataSourceClass;
	UILabel* _noItemsLabel;
	SUStructuredPage* _structuredPage;
}
@property(retain, nonatomic) Class dataSourceClass;
@property(retain, nonatomic) SUStructuredPage* structuredPage;
-(id)init;
-(void)dealloc;
-(id)newDataSource;
-(id)newNoItemsOverlayLabel;
-(id)newTermsAndConditionsFooter;
-(BOOL)canSelectRowAtIndexPath:(id)indexPath;
-(CGRect)documentBounds;
-(BOOL)handleSelectionForIndexPath:(id)indexPath tapCount:(int)count;
-(BOOL)hasDisplayableContent;
-(BOOL)loadMoreWithURL:(id)url;
-(void)reloadData;
-(void)reloadWithStorePage:(id)storePage forURL:(id)url;
-(void)setLoading:(BOOL)loading;
-(id)storePageProtocol;
-(void)viewDidAppear:(BOOL)view;
-(void)viewWillAppear:(BOOL)view;
-(void)bannerCell:(id)cell tappedButtonAtIndex:(int)index;
-(void)operation:(id)operation failedWithError:(id)error;
-(void)operation:(id)operation finishedWithOutput:(id)output;
-(BOOL)_handleLoadMoreForIndexPath:(id)indexPath;
-(BOOL)_gotoURLForItem:(id)item withURLIndex:(int)urlindex;
-(void)_loadMoreOperation:(id)operation finishedWithOutput:(id)output;
-(void)_loadMoreWithURL:(id)url;
-(void)_reloadLoadMoreCellAtIndexPath:(id)indexPath;
-(void)_reloadNoItemsLabel;
-(void)_reloadTermsAndConditions;
@end

