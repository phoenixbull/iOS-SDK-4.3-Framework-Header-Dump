/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "UISearchBarDelegate.h"
#import "UITableViewDelegate.h"
#import "UITableViewDataSource.h"
#import "SpringBoard-Structs.h"

@class NSCalendar, NSDate, NSDateFormatter, SBSearchView, NSTimeZone;

@interface SBSearchController : XXUnknownSuperclass <UISearchBarDelegate, UITableViewDataSource, UITableViewDelegate> {
	SBSearchView* _searchView;
	NSTimeZone* _calTimeZone;
	NSDateFormatter* _calDayDateFormatter;
	NSDateFormatter* _dayDateFormatter;
	NSDateFormatter* _timeDateFormatter;
	BOOL _reloadingTableContent;
	BOOL _resultsUpdated;
	NSCalendar* _autoUpdatingCurrentCalendar;
	NSDate* _midnightThisMorning;
	void* _addressBook;
}
@property(retain, nonatomic) SBSearchView* searchView;
-(id)init;
-(void)dealloc;
-(void)updateResultsIfNecessary;
-(void)controllerWasDeactivated;
-(void)scrollViewIsScrollingHorizontallyInSearchView;
-(BOOL)_hasSearchResults;
-(BOOL)shouldShowKeyboardOnScroll;
-(void)searchBarTextDidBeginEditing:(id)searchBarText;
-(void)searchBarTextDidEndEditing:(id)searchBarText;
-(void)searchBar:(id)bar textDidChange:(id)text;
-(void)searchBarSearchButtonClicked:(id)clicked;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(int)numberOfSectionsInTableView:(id)tableView;
-(void)_populateCell:(id)cell withSearchResult:(id)searchResult;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(id)_calTimeZone;
-(id)_dayDateFormatter;
-(id)_calDayDateFormatter;
-(id)_timeDateFormatter;
-(void)_resetCalTimeZone;
-(id)_dayAndTimeStringForDate:(id)date;
-(id)_autoUpdatingCurrentCalendar;
-(id)_midnightThisMorning;
-(void)_significantTimeChange:(id)change;
-(id)_dayStringForDate:(id)date useCalendarTimeZone:(BOOL)zone;
-(id)_timeStringForDate:(id)date;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(void)_deselect;
-(void)tableView:(id)view willDisplayCell:(id)cell forRowAtIndexPath:(id)indexPath;
-(BOOL)tableView:(id)view wantsHeaderForSection:(int)section;
-(id)tableView:(id)view viewForHeaderInSection:(int)section;
-(float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;
-(void)scrollViewDidScroll:(id)scrollView;
-(void)_tableViewDidFadeOut:(id)_tableView finished:(id)finished context:(void*)context;
-(void)_updateTableContents;
-(void)_updateResults:(id)results;
-(void)_clearResultsString:(id)string;
-(void)willRotateToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
-(void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
-(void)didRotateFromInterfaceOrientation:(int)interfaceOrientation;
-(id)_auxiliaryTitleForABRecordID:(int)abrecordID;
@end

