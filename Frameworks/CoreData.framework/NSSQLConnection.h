/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "CoreData-Structs.h"

@class NSSQLAdapter, NSSQLStatement, NSArray;

__attribute__((visibility("hidden")))
@interface NSSQLConnection : XXUnknownSuperclass {
@private
	NSSQLAdapter* _adapter;
	BOOL _transactionIsOpen;
	BOOL _useSyntaxColoredLogging;
	int _debug;
	NSSQLStatement* _sqlStatement;
	NSArray* _columnsToFetch;
	NSArray* _metadataColumns;
}
+(void)initialize;
-(void)_raiseOptimisticLockingExceptionWithReason:(id)reason;
-(id)initWithAdapter:(id)adapter;
-(void)finalize;
-(void)dealloc;
-(id)adapter;
-(void)beginTransaction;
-(void)commitTransaction;
-(void)rollbackTransaction;
-(void)connect;
-(void)awake;
-(void)sleep;
-(void)disconnect;
-(BOOL)hasOpenTransaction;
-(void)forceTransactionClosed;
-(void)_forceDisconnectOnError;
-(void)transactionDidBegin;
-(void)transactionDidCommit;
-(void)transactionDidRollback;
-(BOOL)canConnect;
-(BOOL)databaseIsEmpty;
-(BOOL)isOpen;
-(void)insertRow:(id)row;
-(void)insertCorrelation:(id)correlation;
-(void)deleteCorrelation:(id)correlation;
-(void)updateRow:(id)row;
-(void)deleteRow:(id)row;
-(void)selectAttributes:(id)attributes fetchRequest:(id)request lock:(BOOL)lock entity:(id)entity;
-(void)prepareSQLStatement:(id)statement;
-(void)execute;
-(void)resetSQLStatement;
-(void)releaseSQLStatement;
-(void)prepareAndExecuteSQLStatement:(id)statement;
-(id)sqlStatement;
-(void)setExclusiveLockingMode:(BOOL)mode;
-(BOOL)isFetchInProgress;
-(id)describeResults;
-(id)newFetchedArray;
-(int)fetchResultSet:(void*)set usingFetchPlan:(void*)plan;
-(id)columnsToFetch;
-(void)setColumnsToFetch:(id)fetch;
-(void)endFetch;
-(void)performAdapterOperation:(id)operation;
-(void)performAdapterOperations:(id)operations;
-(void)createTableForEntity:(id)entity;
-(void)createManyToManyTablesForEntity:(id)entity;
-(void)createIndexesForEntity:(id)entity;
-(void)createTablesForEntities:(id)entities;
-(void)createMetadata;
-(void)willCreateSchema;
-(void)didCreateSchema;
-(void)createSchema;
-(CFArrayRef)rawIntegerRowsForSQL:(id)sql;
-(long long)fetchMaxPrimaryKeyForEntity:(id)entity;
-(id)fetchTableNames;
-(id)fetchTableCreationSQL;
-(BOOL)hasMetadataTable;
-(void)saveMetadata:(id)metadata;
-(id)metadataColumns;
-(id)fetchMetadata;
-(long long)generatePrimaryKeysForEntity:(id)entity batch:(unsigned)batch;
-(void)prepareForPrimaryKeyGeneration;
-(void)endPrimaryKeyGeneration;
-(BOOL)hasPrimaryKeyTable;
-(void)createPrimaryKeyTableForModel:(id)model knownEmpty:(BOOL)empty;
-(void)_performPostSaveTasks;
@end

