/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSPersistentStore.h"

@class NSPersistentStoreMap;

__attribute__((visibility("hidden")))
@interface NSMappedObjectStore : NSPersistentStore {
@private
	NSPersistentStoreMap* _theMap;
}
-(id)init;
-(void)dealloc;
-(id)_theMap;
-(void)_setMap:(id)map;
-(id)dataForKey:(id)key;
-(id)_pathFromURI:(id)uri;
-(void)save;
-(void)saveDocumentToPath:(id)path;
-(id)executeRequest:(id)request withContext:(id)context error:(id*)error;
-(id)executeFetchRequest:(id)request withContext:(id)context;
-(id)executeCountRequest:(id)request withContext:(id)context;
-(id)executeSaveChangesRequest:(id)request withContext:(id)context;
-(id)newValuesForObjectWithID:(id)anId withContext:(id)context error:(id*)error;
-(id)newValueForRelationship:(id)relationship forObjectWithID:(id)anId withContext:(id)context error:(id*)error;
-(id)obtainPermanentIDsForObjects:(id)objects error:(id*)error;
-(id)getNewIDForObject:(id)object;
-(void)_addObject:(id)object objectIDMap:(id)map;
-(void)_removeObject:(id)object objectIDMap:(id)map;
-(void)_updateObject:(id)object objectIDMap:(id)map;
-(void)managedObjectContextDidRegisterObjectsWithIDs:(id)managedObjectContext;
-(void)managedObjectContextDidUnregisterObjectsWithIDs:(id)managedObjectContext;
-(id)identifier;
-(id)metadata;
-(void)setMetadata:(id)metadata;
@end
