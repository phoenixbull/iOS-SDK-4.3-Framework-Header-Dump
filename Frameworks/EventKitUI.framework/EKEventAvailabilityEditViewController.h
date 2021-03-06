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

@class NSMutableArray, UITableView;

__attribute__((visibility("hidden")))
@interface EKEventAvailabilityEditViewController : EKEventEditItemViewController <UITableViewDataSource, UITableViewDelegate> {
@private
	int _availability;
	unsigned _supportedAvailabilities;
	NSMutableArray* _choices;
	UITableView* _table;
}
@property(assign, nonatomic) unsigned supportedAvailabilities;
@property(assign, nonatomic) int availability;
-(id)initWithFrame:(CGRect)frame;
-(void)loadView;
-(void)viewDidUnload;
-(void)dealloc;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(void)_selectRow:(int)row;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
@end

