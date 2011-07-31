/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class CPProgressContext, NSString;

__attribute__((visibility("hidden")))
@interface CPProgressStage : XXUnknownSuperclass {
@private
	double m_currentPosition;
	double m_totalSteps;
	double m_stepsInParent;
	NSString* m_name;
	CPProgressStage* m_parentStage;
	CPProgressContext* m_context;
}
-(id)initRootStageInContext:(id)context;
-(id)initWithSteps:(double)steps takingSteps:(double)steps2 name:(id)name inContext:(id)context;
-(id)initBranchWithSteps:(double)steps takingSteps:(double)steps2 name:(id)name inContext:(id)context;
-(void)dealloc;
-(void)advanceProgress:(double)progress;
-(void)setProgress:(double)progress;
-(void)end;
-(id)parentStage;
-(double)currentPosition;
@end

