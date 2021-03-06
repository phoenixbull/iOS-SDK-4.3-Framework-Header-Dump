/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import "ABPersonViewControllerDelegate.h"
#import "ABUnknownPersonViewControllerDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "EventKitUI-Structs.h"
#import "_MFComposeRecipientViewDelegate.h"
#import "MFContactsSearchConsumer.h"
#import "ABPeoplePickerNavigationControllerDelegate.h"

@class MFSearchShadowView, UIKeyboard, NSNumber, MFContactsSearchManager, MFContactsSearchResultsModel, NSArray, NSString, UITableView, UIScrollView, _MFComposeRecipientView;

__attribute__((visibility("hidden")))
@interface EKEventAttendeePicker : XXUnknownSuperclass <ABPeoplePickerNavigationControllerDelegate, MFContactsSearchConsumer, _MFComposeRecipientViewDelegate, ABPersonViewControllerDelegate, ABUnknownPersonViewControllerDelegate> {
@private
	NSArray* _recipients;
	_MFComposeRecipientView* _composeRecipientView;
	UIScrollView* _recipientScrollView;
	UITableView* _searchResultsView;
	MFSearchShadowView* _shadowView;
	BOOL _showingSearchField;
	UIKeyboard* _keyboard;
	NSNumber* _lastSearchId;
	MFContactsSearchManager* _searchManager;
	MFContactsSearchResultsModel* _searchResultsModel;
	BOOL _shouldReenableAutomaticKeyboard;
	CGRect _initialFrame;
	NSString* _searchAccountID;
}
@property(copy, nonatomic) NSString* searchAccountID;
@property(readonly, assign, nonatomic) NSString* remainingText;
@property(copy, nonatomic) NSArray* recipients;
@property(readonly, assign, nonatomic) NSArray* addresses;
-(id)initWithFrame:(CGRect)frame;
-(void)dealloc;
-(void)loadView;
-(void)viewDidLoad;
-(void)viewDidUnload;
-(void)commitRemainingText;
-(void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
-(void)_setRecipientsOnComposeView;
-(void)_copyRecipientsFromComposeView;
-(id)_shadowView;
-(id)_searchResultsView;
-(void)_hideSearchFieldAndCancelOutstandingSearches:(BOOL)searches;
-(void)_showSearchField;
-(float)_maxScrollerHeight;
-(float)_properHeight;
-(id)_searchManager;
-(void)consumeSearchResults:(id)results type:(int)type taskID:(id)anId;
-(void)finishedSearchingForType:(int)type;
-(void)finishedTaskWithID:(id)anId;
-(void)beganNetworkActivity;
-(void)endedNetworkActivity;
-(void)searchWithText:(id)text;
-(void)animationDidStop:(id)animation;
-(void)composeRecipientView:(id)view requestDeleteRecipientAtIndex:(int)index;
-(void)composeRecipientViewDidFinishEnteringRecipient:(id)composeRecipientView;
-(void)composeRecipientView:(id)view didChangeSize:(CGSize)size;
-(void)composeRecipientView:(id)view textDidChange:(id)text;
-(void)composeRecipientView:(id)view showPersonCardForAtom:(id)atom;
-(void)composeRecipientViewRequestAddRecipient:(id)recipient;
-(void)composeRecipientViewDidFinishPickingRecipient:(id)composeRecipientView;
-(id)composeRecipientView:(id)view composeRecipientForAddress:(id)address;
-(id)composeRecipientView:(id)view composeRecipientForRecord:(void*)record identifier:(int)identifier;
-(void)peoplePickerNavigationControllerDidCancel:(id)peoplePickerNavigationController;
-(BOOL)peoplePickerNavigationController:(id)controller shouldContinueAfterSelectingPerson:(void*)person;
-(BOOL)peoplePickerNavigationController:(id)controller shouldContinueAfterSelectingPerson:(void*)person property:(int)property identifier:(int)identifier;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(BOOL)tableView:(id)view canEditRowAtIndexPath:(id)indexPath;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(BOOL)personViewController:(id)controller shouldPerformDefaultActionForPerson:(void*)person property:(int)property identifier:(int)identifier;
-(void)unknownPersonViewController:(id)controller didResolveToPerson:(void*)person;
-(BOOL)unknownPersonViewController:(id)controller shouldPerformDefaultActionForPerson:(void*)person property:(int)property identifier:(int)identifier;
@end

