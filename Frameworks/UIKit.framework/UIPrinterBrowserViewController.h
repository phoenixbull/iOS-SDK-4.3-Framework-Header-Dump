/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UITableViewController.h"
#import "PKPrinterBrowserDelegate.h"

@class PKPrinter, PKPrinterBrowser, UIPrintPanelViewController, UIPrinterSearchingView, NSMutableArray;

__attribute__((visibility("hidden")))
@interface UIPrinterBrowserViewController : UITableViewController <PKPrinterBrowserDelegate> {
@private
	UIPrintPanelViewController* _printPanelViewController;
	PKPrinterBrowser* _printerBrowser;
	NSMutableArray* _printers;
	PKPrinter* _lockedPrinter;
	BOOL _loaded;
	UIPrinterSearchingView* _searchingView;
	double _displayTime;
}
-(id)initWithPrintPanelViewController:(id)printPanelViewController;
-(void)dealloc;
-(void)adjustPopoverSize;
-(void)loadView;
-(void)startPrinterBrowser;
-(void)stopPrinterBrowser;
-(void)updateSearching;
-(void)willEnterForeground;
-(void)viewWillAppear:(BOOL)view;
-(void)viewWillDisappear:(BOOL)view;
-(void)viewDidDisappear:(BOOL)view;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(void)addPrinter:(id)printer moreComing:(BOOL)coming;
-(void)removePrinter:(id)printer moreGoing:(BOOL)going;
@end

