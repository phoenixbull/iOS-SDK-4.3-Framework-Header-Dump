/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "PXTransition.h"
#import "OfficeImport-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface PXTransition : XXUnknownSuperclass {
}
+(void)initialize;
+(void)readTransitionFromNode:(xmlNode*)node tgtTransition:(id)transition drawingState:(id)state;
@end

@interface PXTransition (Private)
+(int)readDirection:(xmlNode*)direction defaultValue:(int)value;
+(int)readOrientation:(xmlNode*)orientation attribute:(const char*)attribute defaultValue:(int)value;
+(int)readInOut:(xmlNode*)anOut defaultValue:(int)value;
@end

