/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSFetchRequest.h"
#import "CoreData-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "NSCoding.h"
#import "NSCopying.h"

@class NSEntityDescription, NSArray, NSPredicate;

@interface NSFetchRequest : XXUnknownSuperclass <NSCoding, NSCopying> {
@private
	NSArray* _affectedStores;
	NSArray* _groupByProperties;
	NSPredicate* _havingPredicate;
	unsigned _offset;
	NSArray* _valuesToFetch;
	NSEntityDescription* _entity;
	NSPredicate* _predicate;
	NSArray* _sortDescriptors;
	unsigned _batchSize;
	unsigned long _fetchLimit;
	NSArray* _relationshipKeyPathsForPrefetching;
	fetchRequestFlags _flags;
}
+(void)initialize;
+(BOOL)accessInstanceVariablesDirectly;
-(id)init;
-(void)dealloc;
-(void)encodeWithCoder:(id)coder;
-(id)initWithCoder:(id)coder;
-(id)copyWithZone:(NSZone*)zone;
-(unsigned)hash;
-(BOOL)isEqual:(id)equal;
-(id)description;
-(id)entity;
-(void)setEntity:(id)entity;
-(id)predicate;
-(void)setPredicate:(id)predicate;
-(id)sortDescriptors;
-(void)setSortDescriptors:(id)descriptors;
-(unsigned)fetchLimit;
-(void)setFetchLimit:(unsigned)limit;
-(id)relationshipKeyPathsForPrefetching;
-(void)setRelationshipKeyPathsForPrefetching:(id)prefetching;
-(BOOL)returnsObjectsAsFaults;
-(void)setReturnsObjectsAsFaults:(BOOL)faults;
-(BOOL)includesSubentities;
-(void)setIncludesSubentities:(BOOL)subentities;
-(BOOL)includesPropertyValues;
-(void)setIncludesPropertyValues:(BOOL)values;
-(unsigned)resultType;
-(void)setResultType:(unsigned)type;
-(BOOL)includesPendingChanges;
-(void)setIncludesPendingChanges:(BOOL)changes;
-(BOOL)returnsDistinctResults;
-(void)setReturnsDistinctResults:(BOOL)results;
-(id)propertiesToFetch;
-(void)setPropertiesToFetch:(id)fetch;
-(unsigned)fetchOffset;
-(void)setFetchOffset:(unsigned)offset;
-(unsigned)fetchBatchSize;
-(void)setFetchBatchSize:(unsigned)size;
-(id)affectedStores;
-(void)setAffectedStores:(id)stores;
@end

@interface NSFetchRequest (_NSCoreDataSPI)
+(id)fetchRequestWithEntityName:(id)entityName;
-(id)initWithEntityName:(id)entityName;
-(id)entityName;
-(id)groupByProperties;
-(void)setGroupByProperties:(id)properties;
-(id)havingPredicate;
-(void)setHavingPredicate:(id)predicate;
@end

@interface NSFetchRequest (_NSInternalMethods)
-(void)_resolveEntityWithContext:(id)context;
-(void)_incrementInUseCounter;
-(BOOL)_isEditable;
-(void)_throwIfNotEditable;
-(unsigned)requestType;
-(id)stores;
-(BOOL)hasChanges;
@end

