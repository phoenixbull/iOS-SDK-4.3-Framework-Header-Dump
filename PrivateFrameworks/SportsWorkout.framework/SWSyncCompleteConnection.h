/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SportsWorkout.framework/SportsWorkout
 */

#import "SWSyncServiceConnection.h"

@class NSString;
@protocol SWSyncCompleteConnectionDelegate, SWSyncServiceConnectionDelegate;

@interface SWSyncCompleteConnection : SWSyncServiceConnection {
	id<SWSyncServiceConnectionDelegate, SWSyncCompleteConnectionDelegate> _delegate;
	NSString* _PIN;
}
@property(assign, nonatomic) id<SWSyncServiceConnectionDelegate, SWSyncCompleteConnectionDelegate> delegate;
@property(readonly, assign, nonatomic) NSString* PIN;
-(id)initWithPIN:(id)pin host:(id)host delegate:(id)delegate;
-(void)dealloc;
-(void)handleResponse:(id)response;
@end

