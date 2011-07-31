/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import "MusicLibrary-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface ITDBGeniusDatabase : XXUnknownSuperclass {
@private
	CPSqliteDatabase* _db;
	CPSqliteConnection* _dbrc;
	int _transactionCount;
	double _connectionFailedTime;
	unsigned _hasGeniusSchema : 1;
	unsigned _hasGeniusSchemaCached : 1;
}
+(id)geniusDatabaseFilePath;
+(id)fallbackGeniusDatabaseFilePath;
+(id)sharedGeniusDatabase;
-(id)init;
-(CPSqliteDatabase*)_loadedDatabaseAtPath:(id)path;
-(void)beginTransaction;
-(void)endTransaction;
-(void)_connect;
-(unsigned)_getCountOfResultsInTable:(id)table where:(id)where limit:(unsigned)limit;
-(BOOL)_schemaHasDefinedTable:(id)table;
-(unsigned)_getInt32ValueInTable:(id)table column:(id)column where:(id)where limit:(unsigned)limit;
-(unsigned long long)_getInt64ValueInTable:(id)table column:(id)column where:(id)where limit:(unsigned)limit;
-(BOOL)_copyBlobData:(id*)data blobAllocType:(int)type table:(id)table blobColumn:(id)column where:(id)where limit:(unsigned)limit sqliteStatement:(CPSqliteStatement*)statement;
-(id)_copyBlobDataAndBytesInTable:(id)table blobColumn:(id)column where:(id)where limit:(unsigned)limit sqliteStatement:(CPSqliteStatement*)statement;
-(BOOL)_readBlobIntoData:(id)data table:(id)table blobColumn:(id)column where:(id)where limit:(unsigned)limit sqliteStatement:(CPSqliteStatement*)statement;
-(BOOL)_readBlobForRowID:(unsigned long long)rowID intoData:(id)data table:(const char*)table blobColumn:(const char*)column;
-(BOOL)hasDatabase;
-(BOOL)_hasAnySongs;
-(BOOL)hasGeniusDataAvailable;
-(BOOL)hasGeniusCapableiTunes;
-(BOOL)hasGeniusFeatureEnabled;
-(unsigned)defaultMinTrackCount;
-(unsigned)defaultTrackCount;
-(id)copyGeniusConfigrationDataAndBytes;
-(unsigned)geniusConfigurationVersion;
-(id)copyGeniusMetadataDataAndBytesForGlobalID:(unsigned long long)globalID;
-(id)copyGeniusSimilaritiesDataAndBytesForGlobalID:(unsigned long long)globalID;
-(BOOL)getGeniusConfigrationDataAndBytesIntoData:(id)data;
-(CPSqliteStatement*)_cachedStatementForReading:(id)reading;
-(BOOL)getGeniusMetadataDataAndBytesForGlobalID:(unsigned long long)globalID intoData:(id)data;
-(BOOL)getGeniusSimilaritiesDataAndBytesForGlobalID:(unsigned long long)globalID intoData:(id)data;
@end

