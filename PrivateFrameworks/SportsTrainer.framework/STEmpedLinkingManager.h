/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SportsTrainer.framework/SportsTrainer
 */

#import <XXUnknownSuperclass.h> // Unknown library

@protocol STEmpedLinkingManagerDelegate;

@interface STEmpedLinkingManager : XXUnknownSuperclass {
	id<STEmpedLinkingManagerDelegate> _delegate;
	unsigned _isLinking : 1;
}
@property(assign, nonatomic) id<STEmpedLinkingManagerDelegate> delegate;
+(void)_startLinking;
+(void)_startRemoteLinking;
+(void)_stopLinking;
-(id)init;
-(void)dealloc;
-(BOOL)isLinking;
-(void)startLinking;
-(void)startRemoteLinking;
-(void)stopLinking;
-(void)unlinkSensor;
-(void)unlinkRemote;
-(void)_empedLinkingStateChanged:(id)changed;
-(void)_remoteLinkingStateChanged:(id)changed;
-(void)_fakeEmpedLinkingStateChanged:(BOOL)changed afterDelay:(double)delay;
@end

