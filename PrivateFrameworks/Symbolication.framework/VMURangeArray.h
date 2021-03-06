/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import "Symbolication-Structs.h"
#import "NSCopying.h"
#import <XXUnknownSuperclass.h> // Unknown library


@interface VMURangeArray : XXUnknownSuperclass <NSCopying> {
	unsigned _count;
	VMURange* _ranges;
	unsigned _max;
	BOOL _sorted;
}
-(id)init;
-(id)initWithRanges:(const VMURange*)ranges count:(unsigned)count;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)zone;
-(void)setCapacity:(unsigned)capacity;
-(void)sort;
-(void)addRange:(VMURange)range;
-(void)addRanges:(id)ranges;
-(VMURange)rangeAtIndex:(unsigned)index;
-(unsigned)indexForLocation:(unsigned long long)location;
-(VMURange)rangeForLocation:(unsigned long long)location;
-(void)insertRange:(VMURange)range atIndex:(unsigned)index;
-(void)removeRangeAtIndex:(unsigned)index;
-(void)removeAllRanges;
-(BOOL)intersectsLocation:(unsigned long long)location;
-(BOOL)intersectsRange:(VMURange)range;
-(VMURange)subrangeNotExcludedBySelfForRange:(VMURange)range;
-(VMURange)largestSubrangeNotExcludedBySelfForRange:(VMURange)range andLargerThan:(unsigned long long)than startIndex:(unsigned*)index;
-(VMURange)range;
-(VMURange)largestRange;
-(unsigned long long)sumLengths;
-(VMURange*)ranges;
-(unsigned)count;
-(id)description;
@end

