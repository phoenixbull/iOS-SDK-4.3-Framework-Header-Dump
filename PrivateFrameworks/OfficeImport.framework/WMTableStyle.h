/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "WMStyle.h"

@class WDTableProperties;

__attribute__((visibility("hidden")))
@interface WMTableStyle : WMStyle {
@private
	WDTableProperties* mWdTableProperties;
}
-(id)initWithWDTableProperties:(id)wdtableProperties;
-(void)addTableProperties:(id)properties;
@end

