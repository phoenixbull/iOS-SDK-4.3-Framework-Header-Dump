/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "UIScrollViewDelegate.h"
#import "SBIconController.h"
#import "SBIconListPageControlDelegate.h"
#import "SBIconDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class SBIconIndexPath, NSMutableArray, UITouch, TPLCDTextView, UIKeyboard, SBIconListView, UIView, SBDockIconListView, SBIconScrollView, SBSearchView, SBWallpaperNotchView, SBFolderSlidingView, SBSearchController, SBIconModel, SBFolderView, SBIconListPageControl, NSTimer, SBFolder, SBIcon, SBLeafIcon, SBRootFolder;

@interface SBIconController : XXUnknownSuperclass <UIScrollViewDelegate, SBIconListPageControlDelegate, SBIconDelegate> {
	SBIconModel* _iconModel;
	SBRootFolder* _rootFolder;
	UIView* _contentView;
	SBIconScrollView* _scrollView;
	SBIconListPageControl* _pageControl;
	NSMutableArray* _rootIconLists;
	SBDockIconListView* _dock;
	UIView* _dockContainerView;
	SBFolderView* _folderView;
	NSMutableArray* _folderIconLists;
	SBFolder* _openFolder;
	SBFolder* _closingFolder;
	SBFolder* _folderToReopenWhenSwitcherCloses;
	SBFolder* _folderToOpenWhenScrollingEnds;
	int _wantsToScrollListIndex;
	BOOL _wantsToScrollAnimated;
	SBIconIndexPath* _openFolderIndexPath;
	id _currentListRepresentation;
	id _dockRepresentation;
	UIView* _slidingViewsContainer;
	SBFolderSlidingView* _upperSlidingView;
	SBFolderSlidingView* _lowerSlidingView;
	UIView* _upperIconsSlidingView;
	SBWallpaperNotchView* _slidingNotchView;
	SBIconListView* _ghostedIconListForFolder;
	SBIconListView* _ghostedIconListForSwitcher;
	int _currentIconListIndex;
	unsigned _currentFolderIconListIndex;
	TPLCDTextView* _idleText;
	float _currentIdleTextOffset;
	SBSearchView* _searchView;
	SBSearchController* _searchController;
	int _orientation;
	SBIcon* _lastTappedIcon;
	double _lastTapTime;
	SBLeafIcon* _iconToReveal;
	SBIcon* _grabbedIcon;
	SBIcon* _recipientIcon;
	NSMutableArray* _iconsDroppedWhileFolderIsAnimating;
	NSMutableArray* _insertionIndexPathsForDroppedIcons;
	unsigned _numberOfDroppedIconsStillAnimatingIntoPlace;
	NSTimer* _closeFolderTimer;
	SBIconListView* _destinationIconList;
	unsigned _destinationIndex;
	SBIcon* _lastTouchedIcon;
	NSTimer* _scrollPageTimer;
	unsigned _didScroll : 1;
	unsigned _isEditing : 1;
	unsigned _animatedScrolling : 1;
	unsigned _scrollingToSearch : 1;
	unsigned _movedFromOrigin : 1;
	unsigned _disableUpdatingCurrentIconList : 1;
	unsigned _onWallpaper : 1;
	unsigned _animatingFolder : 1;
	unsigned _folderClosedWhileAnimatingOpen : 1;
	unsigned _grabbedIconHasEverEnteredFolderView : 1;
	unsigned _grabbedIconIsDraggedOutOfFolderView : 1;
	BOOL _allowsUninstall;
	float _iconAlpha;
	float _searchViewAlpha;
	UITouch* _lastTouch;
	CGPoint _dragPausePoint;
	NSTimer* _dragPauseTimer;
	NSTimer* _folderSpringloadTimer;
	UIKeyboard* _folderKeyboard;
	BOOL _folderKeyboardIsAnimatingRotation;
}
@property(readonly, assign, nonatomic) SBSearchController* searchController;
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(id)contentView;
-(CGRect)_dockContainerViewFrameForCurrentOrientation;
-(id)scrollView;
-(id)dockContainerView;
-(void)setShouldRasterizeFirstIconList:(BOOL)rasterizeFirstIconList;
-(id)rootIconListAtIndex:(int)index;
-(id)folderIconListAtIndex:(unsigned)index;
-(void)prepareToResetRootIconLists;
-(void)resetRootIconLists;
-(void)setPageControlVisible:(BOOL)visible;
-(void)setPageControlAlpha:(float)alpha;
-(void)showInfoAlertIfNeeded;
-(void)showCarrierDebuggingAlertIfNeeded;
-(BOOL)isScrolling;
-(void)pageControl:(id)control didRecieveTouchInDirection:(int)direction;
-(int)lowestVisibleIconListIndexAndColumn:(int*)column totalLists:(unsigned)lists columnsPerList:(unsigned)list;
-(void)updateCurrentIconListIndexAndVisibility;
-(void)resetCurrentVisibleIconListImageVisibilityAndJitterState;
-(id)currentRootIconList;
-(id)dock;
-(id)currentFolderIconList;
-(void)setDestinationIconList:(id)list;
-(BOOL)isShowingSearch;
-(int)currentIconListIndex;
-(BOOL)_iconCanBeGrabbed:(id)grabbed;
-(BOOL)_shouldLockItemsInStoreDemoMode;
-(BOOL)iconAppearsOnCurrentPage:(id)page;
-(void)scrollToIconListContainingIcon:(id)iconListContainingIcon animate:(BOOL)animate;
-(void)scrollToIconListAtIndex:(int)index animate:(BOOL)animate;
-(int)orientation;
-(void)willRotateToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
-(void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
-(void)didRotateFromInterfaceOrientation:(int)interfaceOrientation;
-(void)updateContentSize;
-(void)updateRootIconListFrames;
-(void)updateIconListWallpaperState;
-(void)updateNumberOfRootIconLists;
-(void)removeEmptyIconList:(id)list animate:(BOOL)animate;
-(void)addNewIconToDesignatedLocation:(id)designatedLocation animate:(BOOL)animate scrollToList:(BOOL)list saveIconState:(BOOL)state;
-(void)setIconsDisplayOnWallpaper:(BOOL)wallpaper;
-(id)iconToReveal;
-(void)setIconToReveal:(id)reveal;
-(void)finishInstallingIcon;
-(void)scrollToIconDestination;
-(id)addEmptyListViewForFolder:(id)folder;
-(id)placeIcon:(id)icon atIndexPath:(id)indexPath moveNow:(BOOL)now layoutNow:(BOOL)now4 pop:(BOOL)pop;
-(id)insertIcon:(id)icon atIndexPath:(id)indexPath moveNow:(BOOL)now;
-(id)insertIcon:(id)icon intoListView:(id)view iconIndex:(int)index moveNow:(BOOL)now;
-(void)removeIcon:(id)icon animate:(BOOL)animate;
-(void)uninstallIconDidAnimate:(id)uninstallIcon finished:(id)finished icons:(id)icons;
-(void)setAllowsUninstall:(BOOL)uninstall;
-(BOOL)allowsUninstall;
-(BOOL)canUninstallIcon:(id)icon;
-(void)uninstallIcon:(id)icon;
-(void)uninstallIcon:(id)icon animate:(BOOL)animate;
-(void)lcdTextViewCompletedScroll:(id)scroll;
-(void)idleTextDidAnimate:(id)idleText finished:(id)finished toText:(id)text;
-(void)updateNumberOfRowsWithDuration:(float)duration;
-(BOOL)hasIdleModeText;
-(void)setIdleModeText:(id)text;
-(void)scatterWithDuration:(double)duration startTime:(double)time;
-(void)scatterWithDuration:(double)duration startTime:(double)time fade:(BOOL)fade;
-(void)unscatterWithDuration:(double)duration startTime:(double)time;
-(void)unscatterWithDuration:(double)duration startTime:(double)time fade:(BOOL)fade;
-(void)_finishedUnscattering;
-(void)finishedUnscatteringIconList:(id)list;
-(void)finishedUnscatteringSearchView;
-(void)_showDockAnimationStopped:(id)stopped finished:(id)finished context:(void*)context;
-(void)showDock:(BOOL)dock startTime:(double)time duration:(double)duration;
-(void)adjustIconListAlpha;
-(void)_awayControllerLocked:(id)locked;
-(void)_awayControllerUnlocked:(id)unlocked;
-(void)_showSearchKeyboardIfNecessary:(BOOL)necessary;
-(void)scrollViewDidScroll:(id)scrollView;
-(void)scrollViewDidEndDragging:(id)scrollView willDecelerate:(BOOL)decelerate;
-(void)scrollViewWillBeginDecelerating:(id)scrollView;
-(void)scrollViewDidEndDecelerating:(id)scrollView;
-(void)scrollViewDidEndScrollingAnimation:(id)scrollView;
-(void)launchIcon:(id)icon;
-(void)iconWasDoubleTapped:(id)tapped;
-(void)iconWasTapped:(id)tapped;
-(void)_addEmptyListIfNecessary;
-(void)setIsEditing:(BOOL)editing;
-(BOOL)isEditing;
-(void)setShowsFolderKeyboard:(BOOL)keyboard;
-(void)folderKeyboardHideAnimationDidStop:(id)folderKeyboardHideAnimation finished:(id)finished context:(void*)context;
-(void)_keyboardWillShow:(id)_keyboard;
-(void)_keyboardWillHide:(id)_keyboard;
-(void)moveIconToWindow:(id)window;
-(void)moveIconFromWindow:(id)window toIconList:(id)iconList;
-(void)restoreScrollingAndRotationAfterUngrab;
-(void)ungrabAnimation:(id)animation didFinish:(id)finish grabbedIcon:(id)icon;
-(void)noteDownloadStateChanged;
-(void)noteViewCovered;
-(void)setLastTouch:(id)touch;
-(void)fixupBouncedIconsInFolder:(id)folder startingWithIndex:(int)index;
-(void)_dropIconInDestinationHole:(id)destinationHole;
-(void)setGrabbedIcon:(id)icon;
-(id)grabbedIcon;
-(void)setRecipientIcon:(id)icon duration:(double)duration;
-(id)lastTouchedIcon;
-(void)setLastTouchedIcon:(id)icon;
-(void)overlapAnimationStopped:(id)stopped finished:(id)finished oldRecipientIcon:(id)icon;
-(id)recipientIcon;
-(id)destinationIconList;
-(void)cancelScrollTimer;
-(void)scrollLeft;
-(void)scrollRight;
-(void)cancelCloseFolderTimer;
-(void)closeFolderTimerFired;
-(void)setCloseFolderTimerIfNecessary;
-(void)cancelDragPauseTimer;
-(void)resetDragPauseTimer;
-(void)cancelFolderSpringloadTimer;
-(void)resetFolderSpringloadTimer;
-(void)noteGrabbedIconLocationChangedWithTouch:(id)touch;
-(void)dragPauseTimerFired;
-(void)folderSpringloadTimerFired;
-(void)animationDidStop:(id)animation finished:(BOOL)finished;
-(void)noteGrabbedIconLocationChangedWithEvent:(id)event;
-(void)compactRootIconLists;
-(void)compactIconsInIconListsInFolder:(id)folder moveNow:(BOOL)now limitToIconList:(id)iconList;
-(void)animateToNewState:(float)newState domino:(BOOL)domino;
-(void)moveAnimation:(id)animation didFinish:(id)finish movePlan:(id)plan;
-(void)moveIcon:(id)icon fromIconList:(id)iconList toIndex:(int)index toIconList:(id)iconList4 animate:(BOOL)animate;
-(void)moveIcon:(id)icon fromIconList:(id)iconList toIndex:(int)index toIconList:(id)iconList4;
-(BOOL)iconAllowJitter:(id)jitter;
-(BOOL)iconPositionIsEditable:(id)editable;
-(void)iconHandleLongPress:(id)press;
-(void)iconGrabbed:(id)grabbed;
-(void)icon:(id)icon touchEnded:(BOOL)ended;
-(BOOL)iconShouldAllowGrab:(id)icon;
-(void)iconDidBeginGrab:(id)icon;
-(void)iconTouchBegan:(id)began;
-(void)icon:(id)icon touchMovedWithEvent:(id)event;
-(BOOL)iconShouldAllowTap:(id)icon;
-(void)iconTapped:(id)tapped;
-(BOOL)icon:(id)icon canReceiveGrabbedIcon:(id)icon2;
-(void)icon:(id)icon grabbedLocationChangedWithEvent:(id)event;
-(void)iconDownloadStateChanged:(id)changed;
-(void)iconUninstall:(id)uninstall;
-(void)icon:(id)icon closeFolderAnimated:(BOOL)animated;
-(void)icon:(id)icon openFolder:(id)folder animated:(BOOL)animated;
-(int)closeBoxTypeForIcon:(id)icon;
-(void)iconCloseBoxTapped:(id)tapped;
@end

@interface SBIconController (Folders)
-(void)getListView:(id*)view folder:(id*)folder relativePath:(id*)path forIcon:(id)icon;
-(void)getListView:(id*)view folder:(id*)folder relativePath:(id*)path forIndexPath:(id)indexPath createIfNecessary:(BOOL)necessary;
-(id)iconListViewAtIndex:(unsigned)index inFolder:(id)folder createIfNecessary:(BOOL)necessary;
-(void)setOpenFolder:(id)folder;
-(BOOL)hasOpenFolder;
-(void)_setHasAnimatingFolder:(BOOL)folder;
-(BOOL)hasAnimatingFolder;
-(void)saveFolderToReopenWhenSwitcherCloses;
-(void)clearFolderToReopenWhenSwitcherCloses;
-(id)folderToReopenWhenSwitcherCloses;
-(id)openFolder;
-(void)openFolder:(id)folder animated:(BOOL)animated;
-(void)openFolder:(id)folder animated:(BOOL)animated fromSwitcher:(BOOL)switcher;
-(void)closeFolderAnimated:(BOOL)animated;
-(void)closeFolderAnimated:(BOOL)animated toSwitcher:(BOOL)switcher;
-(id)createNewFolderFromRecipientIcon:(id)recipientIcon grabbedIcon:(id)icon;
-(void)dropIconIntoOpeningFolder:(id)folder;
-(void)_moveDroppedIconsIntoFolderIconListView;
-(void)dropIconIntoOpeningFolderAnimationDidStop:(id)dropIconIntoOpeningFolderAnimation finished:(id)finished context:(void*)context;
-(void)dropIconOutOfClosingFolder:(id)closingFolder insertionPosition:(int)position;
-(void)_moveDroppedIconsIntoRootIconListView;
-(void)dropIconOutOfClosingFolderAnimationDidStop:(id)dropIconOutOfClosingFolderAnimation finished:(id)finished context:(void*)context;
-(BOOL)isDroppingIconsInOrOutOfFolder;
-(void)animateIcon:(id)icon intoFolderIcon:(id)icon2;
-(void)animateIcons:(id)icons intoFolderIcon:(id)icon openFolderOnFinish:(BOOL)finish;
-(void)replaceFolderIcon:(id)icon byContainedIcon:(id)icon2 animated:(BOOL)animated;
-(void)_slideFolderOpen:(BOOL)open animated:(BOOL)animated;
-(void)_openCloseFolderAnimationEnded:(id)ended finished:(id)finished context:(void*)context;
-(void)_cleanupForClosingFolderAnimated:(BOOL)closingFolderAnimated;
-(void)_compactRootListsAfterFolderClose;
-(void)_addToFolderAnimation:(id)folderAnimation didFinish:(id)finish context:(id)context;
-(void)_outOfFolderAnimation:(id)folderAnimation didFinish:(id)finish context:(id)context;
-(void)_snapshotFadeDidStop:(id)_snapshotFade finished:(id)finished snapshot:(id)snapshot;
-(id)_proposedFolderNameForGrabbedIcon:(id)grabbedIcon recipientIcon:(id)icon;
-(void)prepareToRotateFolderAndSlidingViewsToOrientation:(int)orientation;
-(void)rotateFolderAndSlidingViewsWithDuration:(double)duration;
-(void)_folderRotationIconFadeAnimationDidStop:(id)_folderRotationIconFadeAnimation finished:(id)finished context:(id)context;
-(void)cleanUpFolderAndSlidingViewsAfterRotation;
-(void)_insertFolderViewAndSlidingViewsForFolder:(id)folder;
-(void)_positionFolderViewAndSlidingViewsForFolder:(id)folder notchInfo:(XXStruct_9ihRqB)info;
-(void)shiftFolderViewsForKeyboardAppearing:(BOOL)keyboardAppearing keyboardHeight:(float)height;
-(void)dismissFolderKeyboard;
-(void)_clearFolderViewAndSlidingViews;
-(void)prepareToGhostCurrentPageIconsForRequester:(int)requester skipIcon:(id)icon;
-(void)setCurrentPageIconsGhostly:(BOOL)ghostly forRequester:(int)requester skipIcon:(id)icon;
-(void)setCurrentPageIconsPartialGhostly:(float)ghostly forRequester:(int)requester skipIcon:(id)icon;
-(void)cleanUpGhostlyIconsForRequester:(int)requester;
-(id)_iconsOnGhostedListForRequester:(int)requester;
-(id)_iconsOnGhostedListForRequester:(int)requester skippingIcon:(id)icon;
-(id)_ghostedIconListForRequester:(int)requester;
-(CGRect)_contentViewRelativeFrameForIcon:(id)icon;
-(XXStruct_9ihRqB)_notchInfoForFolderIcon:(id)folderIcon;
-(unsigned)_folderRowsForIconCount:(unsigned)iconCount;
-(void)_computeUpperTransform:(CGAffineTransform*)transform lowerTransform:(CGAffineTransform*)transform2 notchTransform:(CGAffineTransform*)transform3 forFolderIcon:(id)folderIcon;
-(void)_placeIcon:(id)icon inSlidingViewsWithNotchInfo:(XXStruct_9ihRqB)notchInfo;
-(void)_runFolderOpenCloseTest;
@end
