/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "EBCellFormatTable.h"
#import "OfficeImport-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface EBCellFormatTable : XXUnknownSuperclass {
}
+(void)readWithState:(id)state;
+(unsigned)xlCellFormatIndexFromEDCellFormatIndex:(unsigned)edcellFormatIndex state:(id)state;
@end

@interface EBCellFormatTable (Private)
+(id)getStyleNameForCellFormatIndex:(unsigned)cellFormatIndex xlStyleTable:(const XlStyleTable*)table edResources:(id)resources;
@end

