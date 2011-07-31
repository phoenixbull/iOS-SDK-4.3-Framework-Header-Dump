/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "DataAccess-Structs.h"


@interface DALocalDBHelper : XXUnknownSuperclass {
	void* _abDB;
	int _abConnectionCount;
	CalDatabase* _calDB;
	int _calConnectionCount;
	void* _bookmarkDB;
	int _bookmarkConnectionCount;
	id _calUnitTestCallbackObject;
	SEL _calUnitTestCallbackSelector;
}
+(id)sharedInstanceForAccountType:(id)accountType creatingClass:(Class)aClass;
+(void)abSetTestABDBDir:(id)dir;
+(id)abTestABDBDir;
+(void)calSetTestCalDBDir:(id)dir;
+(id)calTestCalDBDir;
-(void*)abDB;
-(void)abOpenDB;
-(void)abProcessAddedRecords;
-(BOOL)abSaveDB;
-(BOOL)abCloseDBAndSave:(BOOL)save;
-(id)abConstraintPlistPath;
-(CalDatabase*)calDB;
-(void)calOpenDB;
-(void)calOpenDBWithChangeLogging;
-(void)calProcessAddedRecords;
-(BOOL)calSaveDB;
-(BOOL)calSaveDBAndFlushCaches;
-(BOOL)calCloseDBAndSave:(BOOL)save;
-(void*)bookmarkDB;
-(BOOL)bookmarkOpenDB;
-(void)bookmarkSaveDB;
-(void)bookmarkCloseDBAndSave:(BOOL)save;
-(void)calUnitTestsSetCallbackObjectForSave:(id)save callbackSelector:(SEL)selector;
@end

