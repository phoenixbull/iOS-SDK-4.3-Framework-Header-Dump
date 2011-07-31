/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "NSTimeZone.h"


__attribute__((visibility("hidden")))
@interface __NSPlaceholderTimeZone : NSTimeZone {
}
+(void)initialize;
+(id)immutablePlaceholder;
-(id)__initWithName:(id)name data:(id)data cache:(BOOL)cache;
-(id)initWithName:(id)name data:(id)data;
-(id)__initWithName:(id)name cache:(BOOL)cache;
-(id)initWithName:(id)name;
-(id)init;
-(id)retain;
-(oneway void)release;
-(unsigned)retainCount;
-(void)dealloc;
-(id)name;
-(id)data;
-(int)secondsFromGMTForDate:(id)date;
-(id)abbreviationForDate:(id)date;
-(BOOL)isDaylightSavingTimeForDate:(id)date;
-(double)daylightSavingTimeOffsetForDate:(id)date;
-(id)nextDaylightSavingTimeTransitionAfterDate:(id)date;
@end

