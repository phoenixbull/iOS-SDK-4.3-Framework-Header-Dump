/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSSaveChangesRequest.h"
#import "NSPersistentStoreRequest.h"

@class NSSet;

@interface NSSaveChangesRequest : NSPersistentStoreRequest {
@private
	NSSet* _insertedObjects;
	NSSet* _updatedObjects;
	NSSet* _deletedObjects;
	NSSet* _optimisticallyLockedObjects;
}
+(void)initialize;
-(id)initWithInsertedObjects:(id)insertedObjects updatedObjects:(id)objects deletedObjects:(id)objects3 lockedObjects:(id)objects4;
-(void)dealloc;
-(id)init;
-(id)insertedObjects;
-(id)updatedObjects;
-(id)deletedObjects;
-(id)lockedObjects;
-(unsigned)requestType;
@end

@interface NSSaveChangesRequest (NSSaveChangesRequest_Internal)
-(void)setDeletedObjects:(id)objects;
-(BOOL)hasChanges;
@end

