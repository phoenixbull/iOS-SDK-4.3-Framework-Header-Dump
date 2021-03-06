/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "CoreFoundation-Structs.h"
#import "NSMutableSet.h"


__attribute__((visibility("hidden")))
@interface __NSCFSet : NSMutableSet {
}
+(BOOL)automaticallyNotifiesObserversForKey:(id)key;
-(BOOL)isEqual:(id)equal;
-(unsigned)hash;
-(id)retain;
-(oneway void)release;
-(unsigned)retainCount;
-(void)finalize;
-(Class)classForCoder;
-(id)copyWithZone:(NSZone*)zone;
-(id)mutableCopyWithZone:(NSZone*)zone;
-(unsigned)count;
-(id)member:(id)member;
-(unsigned)_trueCount;
-(unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA*)state objects:(id*)objects count:(unsigned)count;
-(id)objectEnumerator;
-(void)addObject:(id)object;
-(void)removeObject:(id)object;
-(void)removeAllObjects;
-(void)getObjects:(id*)objects;
@end

