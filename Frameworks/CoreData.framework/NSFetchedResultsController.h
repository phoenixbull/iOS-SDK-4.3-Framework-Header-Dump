/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSFetchedResultsController.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "CoreData-Structs.h"

@class NSFetchRequest, NSManagedObjectContext, NSArray, NSString;
@protocol NSFetchedResultsControllerDelegate;

@interface NSFetchedResultsController : XXUnknownSuperclass {
@private
	NSFetchRequest* _fetchRequest;
	NSManagedObjectContext* _managedObjectContext;
	NSString* _sectionNameKeyPath;
	NSString* _sectionNameKey;
	NSString* _cacheName;
	void* _cache;
	fetchResultsControllerFlags _flags;
	id _delegate;
	id _sortKeys;
	id _fetchedObjects;
	id _sections;
	id _sectionsByName;
	id _sectionIndexTitles;
	id _sectionIndexTitlesSections;
}
@property(readonly, assign, nonatomic) NSFetchRequest* fetchRequest;
@property(readonly, assign, nonatomic) NSManagedObjectContext* managedObjectContext;
@property(readonly, assign, nonatomic) NSString* sectionNameKeyPath;
@property(readonly, assign, nonatomic) NSString* cacheName;
@property(assign, nonatomic) id<NSFetchedResultsControllerDelegate> delegate;
@property(readonly, assign, nonatomic) NSArray* sections;
@property(readonly, assign, nonatomic) NSArray* sectionIndexTitles;
@property(readonly, assign, nonatomic) NSArray* fetchedObjects;
+(void)initialize;
+(void)deleteCacheWithName:(id)name;
-(id)initWithFetchRequest:(id)fetchRequest managedObjectContext:(id)context sectionNameKeyPath:(id)path cacheName:(id)name;
-(void)dealloc;
-(BOOL)performFetch:(id*)fetch;
-(id)objectAtIndexPath:(id)indexPath;
-(id)indexPathForObject:(id)object;
-(id)sectionIndexTitleForSectionName:(id)sectionName;
-(int)sectionForSectionIndexTitle:(id)sectionIndexTitle atIndex:(int)index;
@end

@interface NSFetchedResultsController (PrivateMethods)
+(id)_CoreDataSectionCachesPath;
+(unsigned)_insertIndexForObject:(id)object inArray:(id)array lowIdx:(unsigned)idx highIdx:(unsigned)idx4 sortDescriptors:(id)descriptors;
-(BOOL)_hasFetchedObjects;
-(id)_sectionNameForObject:(id)object;
-(BOOL)_restoreCachedSectionInfo;
-(BOOL)_computeSectionInfo:(id)info error:(id*)error;
-(BOOL)_computeSectionInfoWithGroupBy:(id)groupBy error:(id*)error;
-(void)_makeMutableFetchedObjects;
-(id)_fetchedObjectsArrayOfObjectIDs;
-(unsigned)_indexOfFetchedID:(id)fetchedID;
-(void)_insertObjectInFetchedObjects:(id)fetchedObjects atIndex:(unsigned)index;
-(void)_removeObjectInFetchedObjectsAtIndex:(unsigned)index;
-(unsigned)_sectionNumberForIndex:(unsigned)index;
-(id)_indexPathForIndex:(unsigned)index;
-(BOOL)_objectInResults:(id)results;
-(void)_updateSectionOffsetsStartingAtSection:(id)section;
-(void)_preprocessInsertedObjects:(id)objects insertsInfo:(id)info newSectionNames:(id)names;
-(BOOL)_postprocessInsertedObjects:(id)objects;
-(id)_createNewSectionForObject:(id)object;
-(void)_preprocessDeletedObjects:(id)objects deletesInfo:(id)info sectionsWithDeletes:(id)deletes;
-(BOOL)_postprocessDeletedObjects:(id)objects;
-(void)_preprocessUpdatedObjects:(id)objects insertsInfo:(id)info deletesInfo:(id)info3 updatesInfo:(id)info4 sectionsWithDeletes:(id)deletes newSectionNames:(id)names treatAsRefreshes:(BOOL)refreshes;
-(BOOL)_postprocessUpdatedObjects:(id)objects;
-(void)_managedObjectContextDidChange:(id)_managedObjectContext;
-(void)_appendAffectedStoreInfoToData:(id)data adjustedOffset:(long long*)offset;
-(void)_updateCachedStoreInfo;
-(void)_managedObjectContextDidSave:(id)_managedObjectContext;
-(id)_sectionCachePath;
-(BOOL)_didUseCachedSectionInfo;
-(BOOL)_didUpdateOnlyStoreInfo;
-(BOOL)_didFailPostprocessing;
-(BOOL)_didUseGroupBy;
-(void)_dumpSectionInfo;
-(id)_resolveSectionIndexTitleForSectionName:(id)sectionName;
-(BOOL)_keyPathContainsNonPersistedProperties:(id)properties;
@end

