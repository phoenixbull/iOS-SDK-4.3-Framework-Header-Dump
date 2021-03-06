/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import "DACalendarObject.h"

@class NSString, NSArray;

@interface DACalendarStore : DACalendarObject {
}
@property(readonly, assign, nonatomic) NSArray* events;
@property(readonly, assign, nonatomic) NSArray* calendars;
@property(readonly, assign, nonatomic) NSString* externalID;
@property(readonly, assign, nonatomic) int uid;
-(unsigned)hash;
-(BOOL)isEqual:(id)equal;
@end

