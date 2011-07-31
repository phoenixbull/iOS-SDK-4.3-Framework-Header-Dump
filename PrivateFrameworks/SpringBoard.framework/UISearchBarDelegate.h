/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "NSObject.h"


@protocol UISearchBarDelegate <NSObject>
@optional
-(BOOL)searchBarShouldBeginEditing:(id)searchBar;
-(void)searchBarTextDidBeginEditing:(id)searchBarText;
-(BOOL)searchBarShouldEndEditing:(id)searchBar;
-(void)searchBarTextDidEndEditing:(id)searchBarText;
-(void)searchBar:(id)bar textDidChange:(id)text;
-(BOOL)searchBar:(id)bar shouldChangeTextInRange:(NSRange)range replacementText:(id)text;
-(void)searchBarSearchButtonClicked:(id)clicked;
-(void)searchBarBookmarkButtonClicked:(id)clicked;
-(void)searchBarCancelButtonClicked:(id)clicked;
-(void)searchBarResultsListButtonClicked:(id)clicked;
-(void)searchBar:(id)bar selectedScopeButtonIndexDidChange:(int)selectedScopeButtonIndex;
@end

