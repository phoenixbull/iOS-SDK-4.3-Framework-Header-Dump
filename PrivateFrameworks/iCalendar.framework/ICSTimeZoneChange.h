/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

#import <XXUnknownSuperclass.h> // Unknown library


@interface ICSTimeZoneChange : XXUnknownSuperclass {
	double _interval;
	int _tzOffsetTo;
}
-(id)initWithTimeInterval:(double)timeInterval tzOffsetTo:(int)to;
-(double)interval;
-(int)tzOffsetTo;
-(BOOL)isEqual:(id)equal;
-(id)description;
-(int)compare:(id)compare;
@end

