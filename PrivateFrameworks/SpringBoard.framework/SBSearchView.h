/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "SpringBoard-Structs.h"

@class SBKeyboard, SBRoundedCornersView, UILabel, UIView, UITableView, UISearchBar, SBNoResultsView;

@interface SBSearchView : XXUnknownSuperclass {
	SBRoundedCornersView* _roundedCornersView;
	UISearchBar* _searchBar;
	UITableView* _tableView;
	SBKeyboard* _keyboard;
	UILabel* _noResultsLabel;
	SBNoResultsView* _noResultsView;
	UIView* _rootView;
	UIView* _contentView;
	BOOL _isKeyboardVisible;
	BOOL _isKeyboardAnimatingRotation;
	BOOL _showSearchKeyWhenAnimatingKeyboard;
	BOOL _keyboardWasMinimizedWhenAnimationStarted;
	BOOL _hidesEmptyTableFooter;
}
@property(readonly, assign, nonatomic) UISearchBar* searchBar;
@property(readonly, assign, nonatomic) UITableView* tableView;
@property(retain, nonatomic) UIView* contentView;
@property(retain, nonatomic) UIView* rootView;
@property(readonly, assign, nonatomic) UIView* roundedCornersView;
+(double)keyboardAnimationDuration;
-(id)initWithFrame:(CGRect)frame;
-(id)initWithFrame:(CGRect)frame withContent:(id)content onWallpaper:(id)wallpaper;
-(BOOL)_initializeKeyboardIfNotBricked;
-(void)dealloc;
-(void)didMoveToWindow;
-(void)setFrame:(CGRect)frame;
-(void)scrollViewIsScrollingHorizontally;
-(void)setShowsNoResultsView:(BOOL)view;
-(void)layoutCornerView;
-(void)setHidesEmptyTableFooter:(BOOL)footer;
-(float)_footerHeight;
-(void)layoutFooterView;
-(void)_layoutNoResultsView;
-(Class)tableViewClass;
-(Class)searchBarClass;
-(BOOL)isKeyboardMinimized;
-(BOOL)isKeyboardVisible;
-(void)_keyboardWillShow:(id)_keyboard;
-(void)_keyboardDidHide:(id)_keyboard;
-(void)setShowsKeyboard:(BOOL)keyboard animated:(BOOL)animated;
-(void)keyboardAnimationDidStop:(id)keyboardAnimation finished:(id)finished context:(void*)context;
-(void)_fixUpRespondersAndPreheat;
-(void)setShowingNoResultsText:(BOOL)text;
-(void)setShowsSearchKeyWhenAnimatingKeyboard:(BOOL)keyboard;
-(void)_setDistantContentViewTransform;
-(void)_resetContentViewTransform;
-(void)scatter:(BOOL)scatter startTime:(double)time;
-(void)scatterAnimationDidStop;
-(void)unscatter:(BOOL)unscatter startTime:(double)time;
-(void)unscatterAnimationDidStop;
-(void)willRotateToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
-(void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
-(void)didRotateFromInterfaceOrientation:(int)interfaceOrientation;
@end

