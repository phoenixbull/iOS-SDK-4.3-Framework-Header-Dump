/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "NSCopying.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface EDCollection : XXUnknownSuperclass <NSCopying> {
@private
	NSMutableArray* mObjects;
}
+(id)collection;
+(id)collectionWithObject:(id)object;
-(id)init;
-(id)initWithObject:(id)object;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)zone;
-(BOOL)isEqualToCollection:(id)collection;
-(BOOL)isEqual:(id)equal;
-(unsigned)hash;
-(unsigned)count;
-(id)objectAtIndex:(unsigned)index;
-(unsigned)addObject:(id)object;
-(unsigned)addOrEquivalentObject:(id)object;
-(unsigned)indexOfObject:(id)object;
-(void)removeObjectAtIndex:(unsigned)index;
-(void)removeAllObjects;
-(void)insertObject:(id)object atIndex:(unsigned)index;
@end

