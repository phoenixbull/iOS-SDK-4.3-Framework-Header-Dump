/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "iTunesStoreUI-Structs.h"

@class SUScriptExecutionContext, SUViewControllerFactory, NSLock, SUImageCache, NSString, NSMutableArray, ISURLOperationPool;
@protocol SUClientDelegate;

@interface SUClient : XXUnknownSuperclass {
	CFArrayRef _assetTypes;
	NSString* _clientIdentifier;
	id<SUClientDelegate> _delegate;
	NSMutableArray* _downloadQueues;
	SUImageCache* _imageCache;
	ISURLOperationPool* _imagePool;
	NSLock* _lock;
	NSMutableArray* _preOrderQueues;
	SUScriptExecutionContext* _scriptExecutionContext;
	NSString* _searchHintsURLBagKey;
	NSString* _searchURLBagKey;
	SUViewControllerFactory* _viewControllerFactory;
	BOOL _dontSaveNavigationPath;
}
@property(retain, nonatomic) NSString* clientIdentifier;
@property(assign, nonatomic) id<SUClientDelegate> delegate;
@property(retain, nonatomic) SUImageCache* imageCache;
@property(retain, nonatomic) ISURLOperationPool* imagePool;
@property(readonly, assign, nonatomic) SUScriptExecutionContext* scriptExecutionContext;
@property(retain, nonatomic) NSString* searchHintsURLBagKey;
@property(retain, nonatomic) NSString* searchURLBagKey;
@property(retain, nonatomic) SUViewControllerFactory* viewControllerFactory;
@property(assign, nonatomic) BOOL dontSaveNavigationPath;
+(void)setSharedClient:(id)client;
+(id)sharedClient;
+(id)imagePool;
+(id)viewControllerFactory;
-(id)init;
-(void)dealloc;
-(CFArrayRef)assetTypes;
-(id)beginDownloadQueueSessionForDownloadKind:(id)downloadKind;
-(id)beginDownloadQueueSessionWithDownloadKinds:(id)downloadKinds;
-(id)beginPreOrderQueueSessionWithDownloadKinds:(id)downloadKinds;
-(BOOL)composeReviewWithViewController:(id)viewController animated:(BOOL)animated;
-(BOOL)dismissTopViewControllerAnimated:(BOOL)animated;
-(void)endDownloadQueueSessionForQueue:(id)queue;
-(void)endPreOrderQueueSessionWithDownloadKinds:(id)downloadKinds;
-(BOOL)enterAccountFlowWithViewController:(id)viewController animated:(BOOL)animated;
-(BOOL)openURL:(id)url inClientApplication:(id)clientApplication;
-(BOOL)openExternalURL:(id)url;
-(BOOL)openInternalURL:(id)url;
-(BOOL)sendActionForDialog:(id)dialog button:(id)button;
-(void)setAssetTypes:(CFArrayRef)types;
-(id)downloadQueueForDownloadKind:(id)downloadKind;
-(void)endDownloadQueueSessionWithDownloadKinds:(id)downloadKinds;
-(void)_applicationDidEnterBackgroundNotification:(id)_application;
-(void)_bagDidLoadNotification:(id)_bag;
-(void)_memoryWarningNotification:(id)notification;
-(void)_syncDidFinishNotification:(id)_sync;
-(id)_newAccountViewControllerForButtonAction:(id)buttonAction;
-(id)_newComposeReviewViewControllerForButtonAction:(id)buttonAction;
-(void)_ntsEndQueueSession:(id)session fromArray:(id)array;
-(id)_ntsQueueSessionWithDownloadKinds:(id)downloadKinds fromArray:(id)array;
-(id)_ntsQueueSessionWithQueue:(id)queue fromArray:(id)array;
-(BOOL)_presentModalViewController:(id)controller animated:(BOOL)animated;
-(void)_purgeCaches;
-(void)_reloadScriptExecutionContext;
@end

