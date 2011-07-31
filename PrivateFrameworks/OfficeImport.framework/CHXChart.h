/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "CHXChart.h"


__attribute__((visibility("hidden")))
@interface CHXChart : XXUnknownSuperclass {
}
+(id)readFromState:(id)state;
@end

@interface CHXChart (Private)
+(void)readChartFromXmlNode:(xmlNode*)xmlNode chart:(id)chart state:(id)state;
+(void)readDefaultTextPropertiesFromXmlNode:(xmlNode*)xmlNode chart:(id)chart state:(id)state;
+(int)chdDisplayBlanksAsEnumFromXmlElement:(xmlNode*)xmlElement;
@end
