/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import "EKEventEditItemViewController.h"
#import "UITableViewDelegate.h"
#import "EventKitUI-Structs.h"
#import "UITableViewDataSource.h"

@class NSString, UITableView, NSIndexPath;

__attribute__((visibility("hidden")))
@interface EKEventRecurrenceTypeViewController : EKEventEditItemViewController <UITableViewDataSource, UITableViewDelegate> {
@private
	UITableView* _table;
	NSString* _customString;
	int _repeatType;
	NSIndexPath* _checkedItem;
}
@property(assign, nonatomic) int repeatType;
-(id)initWithFrame:(CGRect)frame;
-(void)dealloc;
-(void)loadView;
-(void)viewDidLoad;
-(void)viewDidUnload;
-(void)_checkItemAtIndexPath:(id)indexPath;
-(void)setCustomString:(id)string;
-(int)numberOfSectionsInTableView:(id)tableView;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
@end

