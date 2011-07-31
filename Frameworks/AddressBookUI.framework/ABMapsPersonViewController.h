/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

#import "ABUnknownPersonViewController.h"

@protocol ABMapsPersonViewControllerDelegate;

@interface ABMapsPersonViewController : ABUnknownPersonViewController {
@private
	BOOL _showAddToBookmarks;
	BOOL _showDirections;
	BOOL _showRemovePin;
}
@property(assign, nonatomic) BOOL shouldShowDirections;
@property(assign, nonatomic) BOOL shouldShowAddToBookmarks;
@property(assign, nonatomic) BOOL shouldShowRemovePin;
@property(assign, nonatomic) id<ABMapsPersonViewControllerDelegate> mapsPersonViewControllerDelegate;
-(id)initWithNibName:(id)nibName bundle:(id)bundle style:(int)style;
-(BOOL)ab_wantsToPresentModalViewControllerWithoutAnyHelp;
-(void)presentAddToContactsSheetIfNeeded:(id)contactsSheetIfNeeded;
-(void)presentNewContactViewControllerForAddToContacts;
-(void)presentPeoplePickerNavigationControllerForMergeToContact;
-(void)setAllowsAddingToAddressBook:(BOOL)addressBook;
-(BOOL)allowsAddingToAddressBook;
-(id)attribution;
-(BOOL)isAttributionEnabled;
-(void)setAttribution:(id)attribution;
-(void)reloadImageData;
-(void)attributionSelected:(id)selected;
-(void)removePin:(id)pin;
-(void)addToBookmarks:(id)bookmarks person:(void*)person property:(int)property identifier:(int)identifier;
-(void)directionsTo:(id)to person:(void*)person property:(int)property identifier:(int)identifier;
-(void)directionsFrom:(id)from person:(void*)person property:(int)property identifier:(int)identifier;
-(BOOL)personViewControllerHelper:(id)helper shouldContinueAfterSelectingPropertyAtIndex:(int)index inPropertyGroup:(id)propertyGroup;
-(void)presentModalViewController:(id)controller animated:(BOOL)animated;
-(void)dismissModalViewControllerAnimated:(BOOL)animated;
@end

