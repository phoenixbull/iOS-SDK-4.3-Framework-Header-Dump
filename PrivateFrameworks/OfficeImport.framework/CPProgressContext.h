/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "CPProgressContext.h"

@class NSMutableArray, CPProgressStage, NSDate;

__attribute__((visibility("hidden")))
@interface CPProgressContext : XXUnknownSuperclass {
@private
	CPProgressStage* m_currentStage;
	NSDate* m_lastReportTime;
	NSMutableArray* m_stackOfBranches;
}
+(void)createContextForCurrentThread;
+(void)removeContextForCurrentThread;
+(void)addProgressObserver:(id)observer selector:(SEL)selector;
+(void)removeProgressObserver:(id)observer;
+(void)createStageWithSteps:(double)steps takingSteps:(double)steps2;
+(void)createStageWithSteps:(double)steps takingSteps:(double)steps2 name:(id)name;
+(void)endStage;
+(id)createBranchWithSteps:(double)steps takingSteps:(double)steps2 name:(id)name;
+(void)endBranch:(id)branch;
+(void)pushBranch:(id)branch;
+(void)popBranch;
+(void)advanceProgress:(double)progress;
+(void)setProgress:(double)progress;
+(void)setMessage:(id)message;
+(double)currentPosition;
@end

@interface CPProgressContext (Private)
+(id)contextForCurrentThread;
+(id)stageForCurrentThread;
-(id)init;
-(void)dealloc;
-(id)currentStage;
-(id)rootStage;
-(void)reportProgress:(double)progress;
@end

