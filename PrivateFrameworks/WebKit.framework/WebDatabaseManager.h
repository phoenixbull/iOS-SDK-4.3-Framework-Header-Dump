/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import "WebDatabaseManager.h"
#import <XXUnknownSuperclass.h> // Unknown library


@interface WebDatabaseManager : XXUnknownSuperclass {
}
+(id)sharedWebDatabaseManager;
+(void)removeEmptyDatabaseFiles;
+(void)scheduleEmptyDatabaseRemoval;
-(id)init;
-(id)origins;
-(id)databasesWithOrigin:(id)origin;
-(id)detailsForDatabase:(id)database withOrigin:(id)origin;
-(void)deleteAllDatabases;
-(BOOL)deleteOrigin:(id)origin;
-(BOOL)deleteDatabase:(id)database withOrigin:(id)origin;
@end

@interface WebDatabaseManager (WebDatabaseManagerInternal)
+(void)willBeginFirstTransaction;
+(void)didFinishLastTransaction;
+(void)startBackgroundTask;
+(void)endBackgroundTask;
@end

