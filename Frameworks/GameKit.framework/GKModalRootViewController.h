/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/GameKit.framework/GameKit
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class UIViewController;

@interface GKModalRootViewController : XXUnknownSuperclass {
	int _statusBarOrientation;
	UIViewController* oldRootViewController;
	id oldDelegate;
	BOOL callDismiss;
}
@property(retain, nonatomic) UIViewController* oldRootViewController;
@property(retain, nonatomic) id oldDelegate;
@property(assign, nonatomic) BOOL callDismiss;
-(id)init;
-(void)dealloc;
-(void)loadView;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;
-(void)removeChildViewController:(id)controller;
@end

