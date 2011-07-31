/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

#import "NSCoding.h"
#import "ICSDateValue.h"
#import <XXUnknownSuperclass.h> // Unknown library


@interface ICSDateValue : XXUnknownSuperclass <NSCoding> {
	int _year;
	int _month;
	int _day;
}
@property(readonly, assign) int year;
@property(readonly, assign) int month;
@property(readonly, assign) int day;
+(id)dateFromICSString:(id)icsstring;
-(id)initWithYear:(int)year month:(int)month day:(int)day;
-(id)components;
-(int)compare:(id)compare;
-(id)description;
-(void)encodeWithCoder:(id)coder;
-(id)initWithCoder:(id)coder;
@end

@interface ICSDateValue (ICSWriter)
-(void)_ICSStringWithOptions:(unsigned)options appendingToString:(id)string;
@end

@interface ICSDateValue (Internal)
+(id)dateFromICSUTF8String:(const char*)icsutf8String;
-(int)dateType;
@end
