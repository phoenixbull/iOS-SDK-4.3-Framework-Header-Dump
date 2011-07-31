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

@class NSString, UITableView, CalendarNotesCell;

__attribute__((visibility("hidden")))
@interface EKEventNotesEditItemViewController : EKEventEditItemViewController <UITableViewDataSource, UITableViewDelegate> {
@private
	UITableView* _table;
	CalendarNotesCell* _cell;
	NSString* _text;
}
@property(copy) NSString* noteText;
-(id)initWithFrame:(CGRect)frame;
-(void)loadView;
-(void)dealloc;
-(void)viewDidLoad;
-(void)viewDidUnload;
-(void)viewDidDisappear:(BOOL)view;
-(void)viewWillAppear:(BOOL)view;
-(BOOL)becomeFirstResponder;
-(BOOL)resignFirstResponder;
-(BOOL)validateAllowingAlert:(BOOL)alert;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;
-(CGSize)contentSizeForViewInPopoverView;
@end

