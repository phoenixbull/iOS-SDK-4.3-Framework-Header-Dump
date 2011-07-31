/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

#import "ICSProperty.h"
#import "ICSUserAddress.h"

@class NSString;

@interface ICSUserAddress : ICSProperty {
}
@property(retain) NSString* email;
@property(assign) BOOL x_apple_self_invited;
@property(assign) int role;
@property(assign) int scheduleforcesend;
@property(assign) int scheduleagent;
@property(assign) int schedulestatus;
@property(assign) int partstat;
@property(retain) NSString* dir;
@property(assign) int cutype;
@property(retain) NSString* cn;
@property(assign) BOOL rsvp;
+(int)calendarUserFromICSString:(id)icsstring;
+(int)participationStatusFromICSString:(id)icsstring;
+(int)scheduleStatusFromICSString:(id)icsstring;
+(int)scheduleAgentFromICSString:(id)icsstring;
+(int)scheduleForceSendFromICSString:(id)icsstring;
+(int)roleFromICSString:(id)icsstring;
+(id)ICSStringFromCalendarUser:(int)calendarUser;
+(id)ICSStringFromParticipationStatus:(int)participationStatus;
+(id)ICSStringFromScheduleAgent:(int)scheduleAgent;
+(id)ICSStringFromScheduleStatus:(int)scheduleStatus;
+(id)ICSStringFromScheduleForceSend:(int)scheduleForceSend;
+(id)ICSStringFromRole:(int)role;
-(id)initWithURL:(id)url;
-(id)initWithEmailAddress:(id)emailAddress;
-(BOOL)hasEmailAddress;
-(BOOL)isEmailAddress;
-(BOOL)isHTTPAddress;
-(BOOL)isHTTPSAddress;
-(id)emailAddress;
-(id)displayName;
-(void)setX_calendarserver_email:(id)email;
-(id)x_calendarserver_email;
@end

@interface ICSUserAddress (RepairPropertiesPrivate)
-(void)fixAddress;
@end

@interface ICSUserAddress (Internal)
+(id)URLForNoMail;
@end

@interface ICSUserAddress (Private)
-(void)setURL:(id)url;
@end

