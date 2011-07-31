/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "CHXReader.h"


__attribute__((visibility("hidden")))
@interface CHXReader : XXUnknownSuperclass {
}
+(id)readFromParentNode:(xmlNode*)parentNode drawingState:(id)state;
@end

@interface CHXReader (Private)
+(id)chartPartWithParentNode:(xmlNode*)parentNode drawingState:(id)state;
+(id)externalDataRelationshipWithChartPart:(id)chartPart;
+(id)externalDataWithChartPart:(id)chartPart relationship:(id)relationship;
@end

