/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

#import "AddressBookUI-Structs.h"
#import "ABStyleProviding.h"
#import "UITableViewDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "UITableViewDataSource.h"

@class NSIndexPath, NSString, UITableView, NSArray;

@interface ABCountryCodePicker : XXUnknownSuperclass <UITableViewDataSource, UITableViewDelegate, ABStyleProviding> {
@private
	id _delegate;
	id _editedItem;
	NSString* _selectedCountryCode;
	NSIndexPath* _selectedPath;
	UITableView* _tableView;
	NSArray* _sortedRegions;
}
@property(readonly, assign, nonatomic) UITableView* tableView;
-(id)initWithFrame:(CGRect)frame;
-(void)dealloc;
-(void)setEditedItem:(id)item;
-(id)editedItem;
-(void)_setSelectedCountryCode:(id)code atPath:(id)path;
-(void)setSelectedCountryCode:(id)code;
-(id)selectedCountryCode;
-(void)reloadCountryCodes;
-(void)setDelegate:(id)delegate;
-(void)buildUI;
-(void)_didEndPickingAndConfirmed:(BOOL)confirmed animate:(BOOL)animate;
-(id)styleProvider;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(int)numberOfSectionsInTableView:(id)tableView;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(id)tableView:(id)view titleForHeaderInSection:(int)section;
-(id)tableView:(id)view willSelectRowAtIndexPath:(id)indexPath;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(void)tableView:(id)view willDisplayCell:(id)cell forRowAtIndexPath:(id)indexPath;
@end

