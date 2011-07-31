/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/iAd.framework/iAd
 */

#import "iAd-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class ADDistributedMessagingCenter, NSMutableArray, ADMessageProxy, CPDistributedMessagingCenter, NSDate, NSTimer, NSString;

@interface ADSession : XXUnknownSuperclass {
	NSMutableArray* _pendingRequests;
	ADDistributedMessagingCenter* _localMessagingCenter;
	CPDistributedMessagingCenter* _remoteMessagingCenter;
	NSDate* _lastTermination;
	NSString* _serverURL;
	ADMessageProxy* _sessionProxy;
	BOOL _isBootstrapped;
	BOOL _isInBackground;
	NSTimer* _visibilityTimer;
	double _visibilitySlowCheckTime;
	dispatch_queue_s* _ipcReplyQueue;
	BOOL _creatingControllers;
	unsigned _recentlyCreatedControllers;
	double _lastControllerCreated;
	BOOL _waitingForBootstrap;
}
@property(retain, nonatomic) NSMutableArray* pendingRequests;
@property(retain, nonatomic) ADDistributedMessagingCenter* localMessagingCenter;
@property(retain, nonatomic) CPDistributedMessagingCenter* remoteMessagingCenter;
@property(retain, nonatomic) NSDate* lastTermination;
@property(retain, nonatomic) NSString* serverURL;
@property(retain, nonatomic) ADMessageProxy* sessionProxy;
@property(assign, nonatomic) BOOL isBootstrapped;
@property(assign, nonatomic) BOOL isInBackground;
@property(retain, nonatomic) NSTimer* visibilityTimer;
@property(assign, nonatomic) double visibilitySlowCheckTime;
@property(readonly, assign, nonatomic) dispatch_queue_s* ipcReplyQueue;
@property(assign) BOOL creatingControllers;
@property(assign) unsigned recentlyCreatedControllers;
@property(assign) double lastControllerCreated;
@property(assign) BOOL waitingForBootstrap;
+(id)sharedInstance;
+(id)allocWithZone:(NSZone*)zone;
-(void)bannerControllerForRecipient:(id)recipient;
-(BOOL)isAdSheetRunning;
-(void)bootstrap;
-(BOOL)launchAdSheet;
-(void)sendSetServerUrlMessage;
-(void)sendBootstrapApplicationRequestMessage;
-(void)bootstrapApplicationRequest:(id)request receivedReply:(id)reply error:(id)error context:(void*)context;
-(void)serverCenterDidTerminate:(id)serverCenter;
-(void)serverSessionDidCloseMessage:(id)serverSession userInfo:(id)info;
-(void)considerCreatingSessions;
-(double)throttleInterval;
-(void)registerForMessages;
-(void)unregisterForMessages;
-(void)sendMessageName:(id)name userInfo:(id)info;
-(id)createSession;
-(void)sessionDidCloseNotification:(id)session;
-(void)deviceOrientationDidChangeNotification:(id)deviceOrientation;
-(void)classicDidZoomNotification:(id)classic;
-(void)requestAdSheetClearURLCache;
-(void)requestAdSheetClearAdCache;
-(void)checkVisibility:(id)visibility;
-(void)suspendVisibilityCheck;
-(void)resumeVisibilityCheck;
-(void)applicationWillEnterForeground:(id)application;
-(void)applicationDidBecomeActive:(id)application;
-(void)applicationDidResignActive:(id)application;
-(void)applicationDidEnterBackground:(id)application;
-(void)setDefaultsValue:(id)value forKey:(id)key type:(id)type;
-(id)messageProxy:(id)proxy proxyItemIdentifierForforInvocation:(id)invocation;
-(id)init;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)zone;
-(id)retain;
-(unsigned)retainCount;
-(void)release;
-(id)autorelease;
@end
