/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "EventKitUI-Structs.h"

@class UIToolbar, UITableView, NSString, NSArray, UIButton, EKEvent, UIActionSheet, EKEventDetailItem;
@protocol EKEventViewDelegate;

@interface EKEventViewController : XXUnknownSuperclass {
@private
	EKEvent* _event;
	NSString* _eventId;
	UIActionSheet* _alertSheet;
	int _pendingStatus;
	id<EKEventViewDelegate> _delegate;
	id _editor;
	UIButton* _responseButtons[3];
	UIToolbar* _buttonBar;
	int _lastOrientation;
	id _currentEditItem;
	UITableView* _tableView;
	unsigned _didAppear : 1;
	unsigned _autoPop : 1;
	unsigned _allowsEditing : 1;
	unsigned _allowsSubitems : 1;
	unsigned _showsPreview : 1;
	unsigned _forcePreview : 1;
	unsigned _trustsStatus : 1;
	unsigned _allowsInviteResponses : 1;
	unsigned _showsAddToCalendar : 1;
	unsigned _icsPreview : 1;
	unsigned _needsReload : 1;
	NSArray* _items;
	NSArray* _currentSections;
	int _scrollToSection;
}
@property(assign, nonatomic) id<EKEventViewDelegate> delegate;
@property(retain, nonatomic) EKEventDetailItem* _currentEditItem;
@property(readonly, assign, nonatomic) UITableView* tableView;
@property(assign, nonatomic) BOOL allowsCalendarPreview;
@property(assign, nonatomic) BOOL allowsEditing;
@property(retain, nonatomic) EKEvent* event;
+(void)setDefaultDatesForEvent:(id)event;
-(id)initWithEvent:(id)event;
-(id)initWithNibName:(id)nibName bundle:(id)bundle;
-(void)dealloc;
-(void)loadView;
-(void)viewDidLoad;
-(void)viewDidUnload;
-(void)viewWillAppear:(BOOL)view;
-(void)viewDidAppear:(BOOL)view;
-(BOOL)_shouldDisplayDoneButton;
-(void)_updateNavBarAnimated:(BOOL)animated;
-(CGSize)_idealSize;
-(void)_pop;
-(void)setNeedsReload;
-(void)reloadIfNeeded;
-(BOOL)allowsSubitems;
-(void)setAllowsSubitems:(BOOL)subitems;
-(BOOL)alwaysShowsCalendarPreview;
-(void)setAlwaysShowsCalendarPreview:(BOOL)preview;
-(BOOL)isICSPreview;
-(void)setICSPreview:(BOOL)preview;
-(BOOL)showsAddToCalendar;
-(void)setShowsAddToCalendar:(BOOL)calendar;
-(void)completeWithAction:(int)action;
-(void)setScrollToSection:(int)section;
-(int)scrollToSection;
-(void)accessibilityLargeTextDidChange;
-(void)_storeChanged:(id)changed;
-(void)_localeChanged;
-(void)_setupAttendeesWithAcceptedItem:(id)acceptedItem declinedItem:(id)item maybeItem:(id)item3 noReplyItem:(id)item4;
-(id)_items;
-(void)_configureItemsForStoreConstraintsGivenCalendar:(id)storeConstraintsGivenCalendar;
-(void)_updateFooterIfNeeded;
-(void)setupForEvent;
-(void)doneButtonPressed;
-(void)editEvent;
-(void)_markEventAsRead;
-(void)_saveStatus:(int)status span:(int)span;
-(BOOL)_performSave:(int)save animated:(BOOL)animated;
-(void)_presentValidationAlert:(id)alert;
-(void)_performDelete;
-(CGSize)contentSizeForViewInPopoverView;
-(BOOL)_canDetachSingleOccurrence;
-(void)_presentDetachSheet;
-(void)actionSheet:(id)sheet clickedButtonAtIndex:(int)index;
-(void)eventItemDidStartEditing:(id)eventItem;
-(void)eventItemDidCommit:(id)eventItem;
-(void)eventItemDidEndEditing:(id)eventItem;
-(void)_dismissEditor:(BOOL)editor;
-(void)eventEditViewController:(id)controller didCompleteWithAction:(int)action;
-(void)_prepareEventForEdit;
-(void)invokeInviteAction:(int)action;
-(void)_deleteClicked:(id)clicked;
-(void)_addToCalendarClicked:(id)calendarClicked;
-(void)_updateResponseVisibility;
-(void)_updateResponse;
-(void)_selectButtonWithTag:(int)tag;
-(void)_acceptButtonPressed:(id)pressed;
-(void)_maybeButtonPressed:(id)pressed;
-(void)_declineButtonPressed:(id)pressed;
-(void)_responseChanged:(id)changed;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;
-(void)willRotateToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
-(void)didRotateFromInterfaceOrientation:(int)interfaceOrientation;
-(void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
-(int)numberOfSectionsInTableView:(id)tableView;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view titleForHeaderInSection:(int)section;
@end

