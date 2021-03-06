/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SportsWorkout.framework/SportsWorkout
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class SWSyncServiceConnection, NSMutableArray, SWSyncHost, NSString;
@protocol SWSyncControllerDelegate;

@interface SWSyncController : XXUnknownSuperclass {
	int _uploadCount;
	id<SWSyncControllerDelegate> _syncDelegate;
	SWSyncHost* _syncHost;
	SWSyncServiceConnection* _currentSyncConnection;
	NSMutableArray* _empedDirectoriesToSync;
	NSMutableArray* _workoutFilesToSync;
	NSString* _syncPin;
	NSString* _currentlySyncingWorkoutFilePath;
	NSString* _baseDirectoryPath;
	BOOL _shouldMoveFilesToSynchedDirectoryWhenDone;
}
@property(assign, nonatomic) id<SWSyncControllerDelegate> syncDelegate;
@property(assign, nonatomic) BOOL shouldMoveFilesToSynchedDirectoryWhenDone;
@property(assign, nonatomic) int uploadCount;
-(id)initWithBaseDirectoryPath:(id)baseDirectoryPath;
-(void)dealloc;
-(id)_syncHost;
-(void)connection:(id)connection didFailWithError:(id)error;
-(void)syncAllWorkouts;
-(void)visitNikeWebSite;
-(void)_syncWorkoutsForNextEmpedDirectory;
-(void)connection:(id)connection didGeneratePIN:(id)pin;
-(void)_syncNextWorkout;
-(void)connectionDidSyncWorkout:(id)connection;
-(void)connectionDidCompleteSync:(id)connection;
-(void)connection:(id)connection didGenerateToken:(id)token;
-(void)connection:(id)connection didConfirmEmail:(id)email screenName:(id)name;
-(void)connection:(id)connection didReplaceOldPINWithNewPIN:(id)newPIN;
-(void)connectionDidReturnStatusUnconfirmed:(id)connection;
-(void)connectionDidReturnStatusInvalid:(id)connection;
@end

