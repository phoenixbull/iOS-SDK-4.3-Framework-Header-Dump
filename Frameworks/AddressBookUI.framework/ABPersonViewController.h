/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

#import "AddressBookUI-Structs.h"
#import "ABPersonViewController.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, UIFont, UIView, ABModel, NSArray;
@protocol ABPersonEditDelegate, ABPersonViewControllerDelegate, ABStyleProvider;

@interface ABPersonViewController : XXUnknownSuperclass {
@private
	id<ABPersonViewControllerDelegate> _personViewDelegate;
	CFArrayRef _displayedProperties;
	id _helper;
}
@property(assign, nonatomic) BOOL allowsSettingAsPreferredCardForName;
@property(assign, nonatomic) BOOL appearsInLinkingPeoplePicker;
@property(retain, nonatomic) id<ABStyleProvider> styleProvider;
@property(copy, nonatomic) NSString* shareMessageSubject;
@property(copy, nonatomic) NSString* shareMessageBody;
@property(assign, nonatomic) BOOL shareMessageBodyIsHTML;
@property(assign, nonatomic) BOOL shouldShowLinkingUI;
@property(assign, nonatomic) id<ABPersonEditDelegate> editDelegate;
@property(copy, nonatomic) NSString* attribution;
@property(assign, nonatomic) BOOL personHeaderViewScrolls;
@property(retain, nonatomic) UIView* customFooterView;
@property(retain, nonatomic) UIView* customHeaderView;
@property(retain, nonatomic) UIView* personHeaderView;
@property(retain, nonatomic) UIView* customMessageView;
@property(retain, nonatomic) UIFont* messageDetailFont;
@property(copy, nonatomic) NSString* messageDetail;
@property(retain, nonatomic) UIFont* messageFont;
@property(copy, nonatomic) NSString* message;
@property(retain, nonatomic) ABModel* model;
@property(assign, nonatomic) BOOL allowsConferencing;
@property(assign, nonatomic) BOOL allowsSounds;
@property(assign, nonatomic) BOOL allowsCancel;
@property(assign, nonatomic) BOOL allowsDeletion;
@property(assign, nonatomic) BOOL allowsAddToFavorites;
@property(assign, nonatomic) BOOL allowsSharing;
@property(assign, nonatomic) BOOL allowsActions;
@property(assign, nonatomic) BOOL shouldShowLinkedPeople;
@property(assign, nonatomic) BOOL allowsEditing;
@property(copy, nonatomic) NSArray* displayedProperties;
@property(assign, nonatomic) void* displayedPerson;
@property(assign, nonatomic) void* addressBook;
@property(assign, nonatomic) id<ABPersonViewControllerDelegate> personViewDelegate;
+(id)arrayByWrappingIntegersInCFArray:(CFArrayRef)cfarray;
+(CFArrayRef)newCFArrayByUnwrappingIntegersInArray:(id)array;
-(id)init;
-(id)initWithNibName:(id)nibName bundle:(id)bundle addressBook:(void*)book model:(id)model style:(int)style;
-(id)initWithNibName:(id)nibName bundle:(id)bundle addressBook:(void*)book model:(id)model;
-(id)initWithNibName:(id)nibName bundle:(id)bundle model:(id)model;
-(id)initWithModel:(id)model;
-(id)initWithModel:(id)model style:(int)style;
-(id)initWithNibName:(id)nibName bundle:(id)bundle;
-(id)initWithAddressBook:(void*)addressBook;
-(id)initWithStyle:(int)style;
-(id)helper;
-(void)dismissModalViewControllerAnimated:(BOOL)animated;
-(void)dealloc;
-(void)updateTitle;
-(void)peoplePickerLinkButtonTapped;
-(BOOL)isReadonly;
-(void)setAttribution:(id)attribution target:(id)target selector:(SEL)selector;
-(BOOL)makeFirstFieldBecomeFirstResponder;
-(void)setDisplayedPropertiesAsIntegers:(CFArrayRef)integers;
-(void)setHighlightedItemForProperty:(int)property withIdentifier:(int)identifier;
-(void)setHighlightedItemForProperty:(int)property withIdentifier:(int)identifier important:(BOOL)important;
-(void)setHighlightedItemForProperty:(int)property withIdentifier:(int)identifier person:(void*)person;
-(void)setHighlightedItemForProperty:(int)property withIdentifier:(int)identifier person:(void*)person important:(BOOL)important;
-(void)shareContactByEmail:(id)email;
-(void)applicationWillTerminate:(id)application;
-(BOOL)manuallyLinkPerson:(void*)person;
-(BOOL)manuallyUnlinkPerson:(void*)person;
-(void)modelDatabaseChange:(id)change;
-(void)model:(id)model localChangeWithInfo:(CFDictionaryRef)info;
-(float)ab_heightToFitForViewInPopoverView;
-(void)viewDidLoad;
-(BOOL)_allowsAutorotation;
-(BOOL)_isSupportedInterfaceOrientation:(int)orientation;
-(void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
-(void)_getRotationContentSettings:(XXStruct_3B_lsC*)settings;
-(void)editCancel:(id)cancel;
-(void)cancelEditing:(BOOL)editing;
-(void)pickerCancel:(id)cancel;
-(void)updateNavigationButtonsAnimated:(BOOL)animated;
-(void)updateNavigationButtons;
-(void)loadView;
-(void)viewDidUnload;
-(void)viewWillAppear:(BOOL)view;
-(void)viewDidAppear:(BOOL)view;
-(BOOL)canHandleSnapbackIdentifier:(id)identifier animated:(BOOL)animated;
-(void)updateRecord;
-(void)saveChanges;
-(void)viewWillDisappear:(BOOL)view;
-(void)applicationWillSuspend;
-(void)applicationDidResume;
-(int)abViewControllerType;
-(void)ignoreNextLocalChange;
-(void)editAnimationDidStop:(id)editAnimation finished:(id)finished context:(void*)context;
-(void)setEditing:(BOOL)editing saveChanges:(BOOL)changes animated:(BOOL)animated;
-(void)setEditing:(BOOL)editing animated:(BOOL)animated;
-(void)tableView:(id)view willBeginEditingRowAtIndexPath:(id)indexPath;
-(void)tableView:(id)view didEndEditingRowAtIndexPath:(id)indexPath;
-(void)helper:(id)helper didToggleEditingWhileInViewMode:(BOOL)viewMode;
-(void)setPeopleForUnifiedCard:(id)unifiedCard;
@end

@interface ABPersonViewController (ABPersonViewControllerActionsAdditions)
-(void)addActionWithTitle:(id)title shortTitle:(id)title2 target:(id)target selector:(SEL)selector forProperty:(int)property withActionGrouping:(int)actionGrouping ordering:(int)ordering;
-(void)addActionWithTitle:(id)title target:(id)target selector:(SEL)selector forProperty:(int)property withActionGrouping:(int)actionGrouping ordering:(int)ordering;
-(void)removeActionWithSelector:(SEL)selector target:(id)target forProperty:(int)property withActionGrouping:(int)actionGrouping ordering:(int)ordering;
-(void)setActionShouldPickHighlightedItem:(BOOL)pickHighlightedItem;
@end

@interface ABPersonViewController (ABCustomAppearanceProvider)
-(void)setCustomAppearanceProvider:(id)provider;
@end

