/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iAdCore.framework/iAdCore
 */

#import "iAdCore-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableSet, ADAdJSO, NSString, UIViewController, NSMutableDictionary, NSMutableArray;
@protocol AdSheetWebViewDelegate;

@interface AdSheetWebView : XXUnknownSuperclass {
	BOOL _scrollingEnabled;
	BOOL _trackResourceRetrieval;
	id<AdSheetWebViewDelegate> _delegate;
	NSString* _qToken;
	BOOL _privilegedClient;
	BOOL _adManagesPurchaseFlow;
	UIViewController* _viewController;
	BOOL _webGLEnabled;
	ADAdJSO* _adScriptObject;
	NSMutableDictionary* _resourceLoadStartDates;
	NSMutableArray* _mapPlugins;
	id _currentModalOwner;
	dispatch_queue_s* _scriptObjectModalAccessDispatchQueue;
	int _javaScriptAlertButtonIndex;
	BOOL _isShuttingDown;
	NSMutableSet* _activeJavaScriptAlerts;
}
@property(assign) BOOL scrollingEnabled;
@property(assign) BOOL trackResourceRetrieval;
@property(assign, nonatomic) id<AdSheetWebViewDelegate> delegate;
@property(retain, nonatomic) NSString* qToken;
@property(assign, nonatomic, getter=isPrivilegedClient) BOOL privilegedClient;
@property(assign) BOOL adManagesPurchaseFlow;
@property(assign, nonatomic) UIViewController* viewController;
@property(assign) BOOL webGLEnabled;
@property(retain, nonatomic) ADAdJSO* adScriptObject;
@property(retain, nonatomic) NSMutableDictionary* resourceLoadStartDates;
@property(retain, nonatomic) NSMutableArray* mapPlugins;
@property(retain, nonatomic) id currentModalOwner;
@property(assign, nonatomic) dispatch_queue_s* scriptObjectModalAccessDispatchQueue;
@property(assign) int javaScriptAlertButtonIndex;
@property(assign) BOOL isShuttingDown;
@property(retain, nonatomic) NSMutableSet* activeJavaScriptAlerts;
@property(readonly, assign, nonatomic) BOOL isBusy;
@property(readonly, assign) float estimatedProgress;
+(void)initialize;
-(void)dealloc;
-(void)configureMapPlugin:(id)plugin;
-(void)mapPluginDestroyed:(id)destroyed;
-(id)hitTest:(CGPoint)test withEvent:(id)event;
-(void)didMoveToWindow;
-(id)initWithFrame:(CGRect)frame;
-(void)setBackgroundColor:(id)color;
-(void)setPaused:(BOOL)paused;
-(void)willUnloadContent;
-(void)loadWebArchiveData:(id)data;
-(void)sendOrientationEventForOrientation:(int)orientation;
-(void)clientApplicationDidResignActive;
-(void)clientApplicationDidBecomeActive;
-(void)dispatchDOMEventWithName:(id)name canBubble:(BOOL)bubble cancelable:(BOOL)cancelable;
-(void)webView:(id)view didClearWindowObject:(id)object forFrame:(id)frame;
-(void)webView:(id)view didFinishLoadForFrame:(id)frame;
-(void)webView:(id)view failedToParseSource:(id)parseSource baseLineNumber:(unsigned)number fromURL:(id)url withError:(id)error forWebFrame:(id)webFrame;
-(void)webView:(id)view exceptionWasRaised:(id)raised sourceId:(long)anId line:(int)line forWebFrame:(id)webFrame;
-(id)webView:(id)view identifierForInitialRequest:(id)initialRequest fromDataSource:(id)dataSource;
-(id)webView:(id)view resource:(id)resource willSendRequest:(id)request redirectResponse:(id)response fromDataSource:(id)dataSource;
-(void)webView:(id)view resource:(id)resource didFinishLoadingFromDataSource:(id)dataSource;
-(void)webView:(id)view decidePolicyForGeolocationRequestFromOrigin:(id)origin frame:(id)frame listener:(id)listener;
-(void)alertView:(id)view clickedButtonAtIndex:(int)index;
-(void)alertViewCancel:(id)cancel;
-(void)webView:(id)view runJavaScriptAlertPanelWithMessage:(id)message initiatedByFrame:(id)frame;
-(BOOL)webView:(id)view runJavaScriptConfirmPanelWithMessage:(id)message initiatedByFrame:(id)frame;
-(id)webView:(id)view runJavaScriptTextInputPanelWithPrompt:(id)prompt defaultText:(id)text initiatedByFrame:(id)frame;
-(id)scriptObjectValueForQToken:(id)qtoken;
-(id)webViewForScriptObject:(id)scriptObject;
-(void)scriptObject:(id)object didCreateView:(id)view;
-(void)scriptObject:(id)object didReportClickEventWithContext:(id)context;
-(void)scriptObject:(id)object didReportSystemEventWithType:(int)type;
-(void)scriptObject:(id)object didChangeContentOrientation:(int)orientation;
-(void)scriptObject:(id)object didChangeSupportedInterfaceOrientations:(unsigned)orientations;
-(void)privilegedAdWantsToDismiss;
-(void)scriptObjectRequestsGeolocation:(id)geolocation;
-(id)scriptObjectRequestsCurrentDisplayCapturedAsImage:(id)image;
-(OpaqueJSContext*)javaScriptContextRef;
-(BOOL)javaScriptObjectShouldBeginModalActivity:(id)javaScriptObject;
-(void)scriptObject:(id)object requestsPresentModalViewController:(id)controller animated:(BOOL)animated;
-(void)scriptObject:(id)object requestsPresentPopoverViewController:(id)controller fromRect:(CGRect)rect animated:(BOOL)animated;
-(void)scriptObject:(id)object requestsDismissModalViewControllerAnimated:(BOOL)animated;
-(void)scriptObject:(id)object requestsDismissPopoverViewControllerAnimated:(BOOL)animated;
-(void)javaScriptObjectDidFinishModalActivity:(id)javaScriptObject;
-(void)scriptObjectContentSignalsReady:(id)ready;
-(id)scriptObject:(id)object requestsURLForString:(id)string allowOtherDomains:(BOOL)domains;
@end

