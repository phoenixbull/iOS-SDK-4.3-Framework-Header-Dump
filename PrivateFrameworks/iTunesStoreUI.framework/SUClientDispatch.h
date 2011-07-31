/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "iTunesStoreUI-Structs.h"


@interface SUClientDispatch : XXUnknownSuperclass {
}
+(CFArrayRef)assetTypes;
+(id)beginDownloadQueueSessionForDownloadKind:(id)downloadKind;
+(id)beginDownloadQueueSessionWithDownloadKinds:(id)downloadKinds;
+(id)beginPreOrderQueueSessionWithDownloadKinds:(id)downloadKinds;
+(id)clientIdentifier;
+(void)composeEmailWithSubject:(id)subject body:(id)body;
+(BOOL)composeReviewWithViewController:(id)viewController animated:(BOOL)animated;
+(void)endDownloadQueueSessionForQueue:(id)queue;
+(void)endPreOrderQueueSessionWithDownloadKinds:(id)downloadKinds;
+(BOOL)enterAccountFlowWithViewController:(id)viewController animated:(BOOL)animated;
+(void)exitStoreWithReason:(int)reason;
+(BOOL)gotoStorePage:(id)page animated:(BOOL)animated;
+(id)imageCache;
+(id)imagePool;
+(BOOL)isTabBarControllerLoaded;
+(BOOL)matchesClientApplication:(id)application;
+(id)newScriptInterface;
+(BOOL)openClientURL:(id)url;
+(BOOL)openExternalURL:(id)url;
+(BOOL)openURL:(id)url inClientApplication:(id)clientApplication;
+(BOOL)reloadSectionWithIdentifier:(id)identifier url:(id)url;
+(BOOL)reportAProblemForItemIdentifier:(unsigned long long)itemIdentifier;
+(id)scriptExecutionContext;
+(id)searchHintsURLBagKey;
+(id)searchURLBagKey;
+(BOOL)selectSectionWithIdentifier:(id)identifier;
+(BOOL)sendActionForDialog:(id)dialog button:(id)button;
+(id)tabBarController;
+(id)viewControllerFactory;
@end

