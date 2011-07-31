/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBAlertItem.h"

@class NSTimeZone, NSString;

@interface SBCalendarAlertItem : SBAlertItem {
	double _date;
	NSTimeZone* _timeZone;
	NSString* _title;
	NSString* _location;
	int _eventId;
	BOOL _isAllDay;
}
+(void)registerForAlerts;
+(void)alarmsDidFire:(id)alarms;
-(id)initWithDate:(double)date timeZone:(id)zone title:(id)title location:(id)location eventId:(int)anId isAllDay:(BOOL)day;
-(void)dealloc;
-(id)description;
-(void)_updateEventDetails:(id)details;
-(void)configure:(BOOL)configure requirePasscodeForActions:(BOOL)actions;
-(id)lockLabel;
-(void)didPresentAlertView:(id)view;
-(void)revealEvent;
-(void)alertView:(id)view clickedButtonAtIndex:(int)index;
-(void)performUnlockAction;
-(BOOL)shouldShowInEmergencyCall;
-(BOOL)willShowInAwayItems;
-(void)_playPresentationSound;
-(id)awayItem;
-(void)screenWillUndim;
@end
