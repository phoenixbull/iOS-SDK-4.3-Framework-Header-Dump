/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

#import "NSCoding.h"
#import <XXUnknownSuperclass.h> // Unknown library


@interface ICSColor : XXUnknownSuperclass <NSCoding> {
	unsigned char _red;
	unsigned char _green;
	unsigned char _blue;
}
-(id)initWithRed:(unsigned char)red green:(unsigned char)green blue:(unsigned char)blue;
-(unsigned char)red;
-(unsigned char)green;
-(unsigned char)blue;
-(void)encodeWithCoder:(id)coder;
-(id)initWithCoder:(id)coder;
@end

