/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "EBFont.h"


__attribute__((visibility("hidden")))
@interface EBFont : XXUnknownSuperclass {
}
+(id)edFontFromXlFont:(XlFont*)xlFont edResources:(id)resources;
+(id)edFontFromXlDXfFont:(XlDXfFont*)xlDXfFont edResources:(id)resources;
@end

@interface EBFont (Private)
+(int)convertXlScriptEnumToED:(int)ed;
+(int)convertXlUnderlineEnumToED:(int)ed;
+(int)convertEDScriptEnumToXl:(int)xl;
+(int)convertEDUnderlineEnumToXl:(int)xl;
@end

