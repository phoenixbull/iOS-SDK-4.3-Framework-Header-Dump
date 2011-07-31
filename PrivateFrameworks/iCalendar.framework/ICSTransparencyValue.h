/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

#import "ICSPredefinedValue.h"
#import "ICSTransparencyValue.h"


@interface ICSTransparencyValue : ICSPredefinedValue {
}
+(id)transparencyTypeFromCode:(int)code;
@end

@interface ICSTransparencyValue (ICSWriter)
-(void)_ICSStringWithOptions:(unsigned)options appendingToString:(id)string;
@end

@interface ICSTransparencyValue (iCalendarImport)
+(id)transparencyValueFromICSString:(id)icsstring;
@end

