/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray;

@interface IMActionsController : XXUnknownSuperclass {
	NSMutableArray* _handlers;
}
+(id)actionsController;
-(oneway void)release;
-(unsigned)retainCount;
-(id)autorelease;
-(id)init;
-(void)dealloc;
-(void)addHandler:(id)handler;
-(void)removeHandler:(id)handler;
-(id)performActionsForEvent:(int)event withIMHandle:(id)imhandle;
-(id)performActionsForEvent:(int)event withIMHandle:(id)imhandle withObject:(id)object;
-(id)performActionsForEvent:(int)event withIMHandle:(id)imhandle withObject:(id)object withChat:(id)chat silent:(BOOL)silent;
@end

