/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSManagedObject, NSSQLRow, NSMutableArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface NSSQLOperation : XXUnknownSuperclass {
@private
	unsigned _databaseOperator;
	NSSQLRow* _rowForUpdate;
	NSMutableArray* _adapterOps;
	NSManagedObject* _object;
	NSSQLRow* _dbSnapshot;
	NSMutableDictionary* _mtmDeltas;
}
-(id)initWithObject:(id)object entity:(id)entity;
-(void)dealloc;
-(id)dbSnapshot;
-(void)setDBSnapshot:(id)snapshot;
-(id)rowForUpdate;
-(void)setRowForUpdate:(id)update;
-(id)objectID;
-(id)object;
-(unsigned)databaseOperator;
-(void)setDatabaseOperator:(unsigned)anOperator;
-(id)adapterOperations;
-(void)addAdapterOperation:(id)operation;
-(void)removeAdapterOperation:(id)operation;
-(id)description;
-(void)addDelta:(id)delta forManyToManyKey:(id)manyKey;
-(id)manyToManyDeltas;
@end

