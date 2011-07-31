/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "CoreData-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSManagedObject;

__attribute__((visibility("hidden")))
@interface _NSFaultingMutableSet : XXUnknownSuperclass {
@private
	int _cd_rc;
	NSFaultingMutableSetFlags _flags;
	id _realSet;
	NSManagedObject* _source;
}
+(BOOL)accessInstanceVariablesDirectly;
+(id)alloc;
+(id)allocWithZone:(NSZone*)zone;
-(id)initWithSource:(id)source forRelationship:(id)relationship asFault:(BOOL)fault;
-(id)initWithSource:(id)source destinations:(id)destinations forRelationship:(id)relationship inContext:(id)context;
-(id)retain;
-(void)release;
-(unsigned)retainCount;
-(void)dealloc;
-(BOOL)isFault;
-(void)willRead;
-(void)turnIntoFault;
-(id)source;
-(id)relationship;
-(id)copyWithZone:(NSZone*)zone;
-(id)mutableCopyWithZone:(NSZone*)zone;
-(id)description;
-(id)descriptionWithLocale:(id)locale;
-(unsigned)count;
-(id)member:(id)member;
-(void)addObject:(id)object;
-(unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA*)state objects:(id*)objects count:(unsigned)count;
-(id)objectEnumerator;
-(void)getObjects:(id*)objects;
-(id)allObjects;
-(id)anyObject;
-(BOOL)containsObject:(id)object;
-(BOOL)intersectsSet:(id)set;
-(BOOL)isEqualToSet:(id)set;
-(BOOL)isSubsetOfSet:(id)set;
-(void)makeObjectsPerformSelector:(SEL)selector;
-(void)makeObjectsPerformSelector:(SEL)selector withObject:(id)object;
-(void)removeObject:(id)object;
-(void)addObjectsFromArray:(id)array;
-(void)intersectSet:(id)set;
-(void)minusSet:(id)set;
-(void)removeAllObjects;
-(void)unionSet:(id)set;
-(void)setSet:(id)set;
-(void)setValue:(id)value forKey:(id)key;
-(id)valueForKey:(id)key;
-(id)valueForKeyPath:(id)keyPath;
-(Class)classForCoder;
-(id)replacementObjectForCoder:(id)coder;
-(Class)classForArchiver;
@end

