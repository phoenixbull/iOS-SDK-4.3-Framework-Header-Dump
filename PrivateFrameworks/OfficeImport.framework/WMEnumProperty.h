/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "CMProperty.h"


__attribute__((visibility("hidden")))
@interface WMEnumProperty : CMProperty {
@private
	int wdValue;
}
-(id)initWithEnum:(int)anEnum;
-(int)value;
-(id)mapJustification;
-(id)mapUnderline;
-(id)mapVerticalAlign;
-(id)mapCellTextVAlign;
-(id)cssStringForName:(id)name;
@end

