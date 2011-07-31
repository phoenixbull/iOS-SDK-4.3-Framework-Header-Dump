/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIPopoverController, UILabel, UISearchBar, UITableView, UIViewController, UIView, NSString;
@protocol UISearchDisplayDelegate, UITableViewDelegate, UITableViewDataSource;

@interface UISearchDisplayController : XXUnknownSuperclass {
@private
	UIViewController* _viewController;
	UITableView* _tableView;
	UIView* _dimmingView;
	UISearchBar* _searchBar;
	UILabel* _noResultsLabel;
	NSString* _noResultsMessage;
	id<UISearchDisplayDelegate> _delegate;
	id<UITableViewDataSource> _tableViewDataSource;
	id<UITableViewDelegate> _tableViewDelegate;
	CFArrayRef _containingScrollViews;
	float _lastKeyboardAdjustment;
	float _lastFooterAdjustment;
	UIPopoverController* _popoverController;
	int _searchResultsTableViewStyle;
	id _navigationControllerBookkeeper;
	struct {
		unsigned visible : 1;
		unsigned animating : 1;
		unsigned hidIndexBar : 1;
		unsigned hidNavigationBar : 1;
		unsigned noResultsMessageVisible : 1;
		unsigned noResultsMessageAutoDisplay : 1;
		unsigned navigationBarHidingEnabled : 1;
		unsigned dimTableViewOnEmptySearchString : 1;
		unsigned isRotatingWithPopover : 1;
		unsigned cancelButtonManagementDisabled : 1;
	} _searchDisplayControllerFlags;
}
@property(assign, nonatomic) id<UISearchDisplayDelegate> delegate;
@property(readonly, assign, nonatomic) UIViewController* searchContentsController;
@property(readonly, assign, nonatomic) UISearchBar* searchBar;
@property(assign, nonatomic) id<UITableViewDataSource> searchResultsDataSource;
@property(assign, nonatomic) id<UITableViewDelegate> searchResultsDelegate;
@property(readonly, assign, nonatomic) UITableView* searchResultsTableView;
@property(readonly, assign, nonatomic) BOOL hidNavigationBar;
@property(assign, nonatomic, getter=_isCancelButtonManagementDisabled, setter=_setCancelButtonManagementDisabled:) BOOL cancelButtonManagementDisabled;
@property(assign, nonatomic) BOOL dimTableViewOnEmptySearchString;
@property(assign, nonatomic, getter=isNavigationBarHidingEnabled) BOOL navigationBarHidingEnabled;
@property(copy, nonatomic) NSString* noResultsMessage;
@property(assign, nonatomic) BOOL automaticallyShowsNoResultsMessage;
@property(assign, nonatomic) BOOL noResultsMessageVisible;
@property(assign, nonatomic, getter=isActive) BOOL active;
-(id)init;
-(id)initWithSearchBar:(id)searchBar contentsController:(id)controller;
-(id)initWithSearchBar:(id)searchBar contentsController:(id)controller searchResultsTableViewStyle:(int)style;
-(id)initWithCoder:(id)coder;
-(void)encodeWithCoder:(id)coder;
-(void)dealloc;
-(void)_configureSearchBarForTableView;
-(void)_cleanUpSearchBar;
-(BOOL)_areSearchContentsSplitViewMaster;
-(void)_configureNewSearchBar;
-(void)setSearchBar:(id)bar;
-(void)_setupNoResultsLabelIfNecessary;
-(void)setSearchContentsController:(id)controller;
-(id)_containingViewOfClass:(Class)aClass;
-(id)_containingTableView;
-(BOOL)_isSearchBarInBar;
-(void)_popoverKeyboardDidShow:(id)_popoverKeyboard;
-(void)_popoverKeyboardDidHide:(id)_popoverKeyboard;
-(void)_popoverClearButtonPressed:(id)pressed;
-(id)_createPopoverController;
-(void)_destroyManagedTableView;
-(void)_disableParentScrollViews;
-(void)_enableParentScrollViews;
-(CGRect)_tableViewFrame;
-(void)_adjustTableViewContentInsets;
-(void)_setTableViewVisible:(BOOL)visible inView:(id)view;
-(void)_updateSearchBarForTableViewIndexBar:(id)tableViewIndexBar;
-(void)_indexBarFrameChanged:(id)changed;
-(void)_searchBarSuperviewWillChange;
-(void)_searchBarSuperviewChanged;
-(void)showHideAnimationDidFinish;
-(void)setActive:(BOOL)active animated:(BOOL)animated;
-(void)_keyboardWillShow:(id)_keyboard;
-(void)_keyboardWillHide:(id)_keyboard;
-(void)windowWillAnimateRotation:(id)window;
-(void)windowDidRotate:(id)window;
-(void)searchBarTextDidBeginEditing:(id)searchBarText;
-(void)searchBarCancelButtonClicked:(id)clicked;
-(void)searchBarSearchButtonClicked:(id)clicked;
-(void)searchBarResultsListButtonClicked:(id)clicked;
-(void)searchBar:(id)bar textDidChange:(id)text;
-(void)searchBar:(id)bar selectedScopeButtonIndexDidChange:(int)selectedScopeButtonIndex;
-(void)navigationControllerWillShowViewController:(id)navigationController;
-(void)navigationControllerDidShowViewController:(id)navigationController;
-(void)_updateNoSearchResultsMessageVisiblity;
-(void)_managedTableViewDidScroll;
-(void)popoverController:(id)controller animationCompleted:(int)completed;
-(void)_clearViewController;
-(id)_noResultsMessageLabel;
@end

