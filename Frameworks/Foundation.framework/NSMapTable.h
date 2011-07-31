/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSCoding.h"
#import "NSCopying.h"
#import "Foundation-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "NSFastEnumeration.h"


@interface NSMapTable : XXUnknownSuperclass <NSCopying, NSCoding, NSFastEnumeration> {
}
+(id)alloc;
+(id)allocWithZone:(NSZone*)zone;
+(id)mapTableWithKeyOptions:(unsigned)keyOptions valueOptions:(unsigned)options;
+(id)mapTableWithStrongToStrongObjects;
+(id)mapTableWithWeakToStrongObjects;
+(id)mapTableWithStrongToWeakObjects;
+(id)mapTableWithWeakToWeakObjects;
-(id)initWithCoder:(id)coder;
-(id)initWithKeyOptions:(unsigned)keyOptions valueOptions:(unsigned)options capacity:(unsigned)capacity;
-(id)initWithKeyPointerFunctions:(id)keyPointerFunctions valuePointerFunctions:(id)functions capacity:(unsigned)capacity;
-(id)init;
-(id)description;
-(void)encodeWithCoder:(id)coder;
-(unsigned)count;
-(id)keyEnumerator;
-(id)objectEnumerator;
-(id)copy;
-(unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA*)state objects:(id*)objects count:(unsigned)count;
-(id)keyPointerFunctions;
-(id)valuePointerFunctions;
-(id)objectForKey:(id)key;
-(void)setObject:(id)object forKey:(id)key;
-(void)removeObjectForKey:(id)key;
-(void)setItem:(const void*)item forKey:(const void*)key;
-(void)setItem:(const void*)item forAbsentKey:(const void*)absentKey;
-(void)setItem:(const void*)item forKnownAbsentKey:(const void*)knownAbsentKey;
-(void*)existingItemForSetItem:(const void*)setItem forAbsentKey:(const void*)absentKey;
-(void)replaceItem:(const void*)item forExistingKey:(const void*)existingKey;
-(id)allKeys;
-(id)allValues;
-(void)removeAllItems;
-(id)enumerator;
-(BOOL)mapMember:(const void*)member originalKey:(const void**)key value:(const void**)value;
-(unsigned)getKeys:(const void**)keys values:(const void**)values;
-(void)removeAllObjects;
-(id)mutableDictionary;
-(id)dictionaryRepresentation;
-(id)copyWithZone:(NSZone*)zone;
-(id)mutableCopyWithZone:(NSZone*)zone;
@end

