/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import "EKCellShortener.h"
#import "EKEventEditItemViewController.h"
#import "UITableViewDelegate.h"
#import "EventKitUI-Structs.h"
#import "UITableViewDataSource.h"

@class EKPickerTableView, PreferencesValueCell;

__attribute__((visibility("hidden")))
@interface EKEventRecurrenceEndViewController : EKEventEditItemViewController <UITableViewDataSource, UITableViewDelegate, EKCellShortener> {
@private
	EKPickerTableView* _container;
	PreferencesValueCell* _dateCell;
	XXStruct_lQVxyC _repeatEndGr;
	XXStruct_lQVxyC _preNeverEndDate;
	XXStruct_lQVxyC _minimumEndDate;
	int _shorteningStatus;
	unsigned _updatingPicker : 1;
}
@property(assign) XXStruct_lQVxyC repeatEndDate;
-(id)initWithFrame:(CGRect)frame;
-(void)loadView;
-(void)dealloc;
-(void)viewDidLoad;
-(void)viewDidUnload;
-(void)_localeChanged;
-(id)_stringForEndDate;
-(void)updatePicker;
-(void)applyMinimumEndDateToPicker;
-(void)setMinimumEndDate:(XXStruct_lQVxyC)date;
-(void)datePickerChanged:(id)changed;
-(BOOL)_showsNeverButton;
-(BOOL)fitsPopoverWhenKeyboardActive;
-(int)numberOfSectionsInTableView:(id)tableView;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(BOOL)tableView:(id)view wantsHeaderForSection:(int)section;
-(float)tableView:(id)view heightForHeaderInSection:(int)section;
-(void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
-(void)shortenCell:(id)cell;
@end
