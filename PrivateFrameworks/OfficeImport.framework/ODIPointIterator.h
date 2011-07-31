/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "ODIPointIterator.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "OfficeImport-Structs.h"


__attribute__((visibility("hidden")))
@interface ODIPointIterator : XXUnknownSuperclass {
}
+(id)pointsForSpecification:(id)specification startingPoint:(id)point isLast:(BOOL)last;
@end

@interface ODIPointIterator (Private)
+(id)processAttributes:(id)attributes startingPoint:(id)point isLast:(BOOL)last;
+(BOOL)addPoint:(id)point state:(ODIPointIteratorState*)state;
+(BOOL)isPoint:(id)point ofType:(int)type;
+(BOOL)isDoneForState:(ODIPointIteratorState*)state;
+(void)processSelfAxisFromPoint:(id)point state:(ODIPointIteratorState*)state;
+(void)processChildAxisFromPoint:(id)point state:(ODIPointIteratorState*)state;
+(void)processFollowingSiblingAxisFromPoint:(id)point state:(ODIPointIteratorState*)state;
@end
