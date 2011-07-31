/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import "EventKitUI-Structs.h"
#import "EKEventEditItem.h"

@class NSString, EKParticipant;

__attribute__((visibility("hidden")))
@interface EKEventAttendeesEditItem : EKEventEditItem {
@private
	EKParticipant* _selfOrganizer;
	NSString* _searchAccountID;
}
-(void)dealloc;
-(BOOL)configureForCalendarConstraints:(id)calendarConstraints;
-(id)cellForSubitemAtIndex:(int)index;
-(id)attendeesWithoutSelfOrganizer;
-(id)detailViewControllerWithFrame:(CGRect)frame forSubitemAtIndex:(int)index;
-(BOOL)eventEditItemViewControllerCommit:(id)commit;
@end
