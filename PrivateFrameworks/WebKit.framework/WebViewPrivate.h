/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "WebKit-Structs.h"

@class WebVideoFullscreenController, WebEvent, NSTimer, WebPreferences, WAKWindow, WebInspector, WebNodeHighlight, NSURL, NSMutableSet, NSString;
@protocol WebGeolocationProvider, WebFormDelegate, WebCaretChangeListener;

__attribute__((visibility("hidden")))
@interface WebViewPrivate : XXUnknownSuperclass {
@private
	Page* page;
	id UIDelegate;
	id UIDelegateForwarder;
	id resourceProgressDelegate;
	id downloadDelegate;
	id policyDelegate;
	id policyDelegateForwarder;
	id frameLoadDelegate;
	id frameLoadDelegateForwarder;
	id<WebFormDelegate> formDelegate;
	id editingDelegate;
	id editingDelegateForwarder;
	id scriptDebugDelegate;
	id historyDelegate;
	id resourceProgressDelegateForwarder;
	id formDelegateForwarder;
	WebInspector* inspector;
	WebNodeHighlight* currentNodeHighlight;
	BOOL allowsUndo;
	float zoomMultiplier;
	NSString* applicationNameForUserAgent;
	String userAgent;
	BOOL userAgentOverridden;
	WebPreferences* preferences;
	BOOL useSiteSpecificSpoofing;
	NSURL* userStyleSheetLocation;
	WAKWindow* hostWindow;
	int programmaticFocusCount;
	WebResourceDelegateImplementationCache resourceLoadDelegateImplementations;
	WebFrameLoadDelegateImplementationCache frameLoadDelegateImplementations;
	WebScriptDebugDelegateImplementationCache scriptDebugDelegateImplementations;
	WebHistoryDelegateImplementationCache historyDelegateImplementations;
	void* observationInfo;
	BOOL closed;
	BOOL closing;
	BOOL shouldCloseWithWindow;
	BOOL mainFrameDocumentReady;
	BOOL drawsBackground;
	BOOL editable;
	BOOL tabKeyCyclesThroughElementsChanged;
	BOOL becomingFirstResponder;
	BOOL becomingFirstResponderFromOutside;
	BOOL hoverFeedbackSuspended;
	BOOL usesPageCache;
	BOOL catchesDelegateExceptions;
	BOOL cssAnimationsSuspended;
	CGColorRef backgroundColor;
	NSString* mediaStyle;
	BOOL hasSpellCheckerDocumentTag;
	int spellCheckerDocumentTag;
	BOOL smartInsertDeleteEnabled;
	BOOL selectTrailingWhitespaceEnabled;
	BOOL isStopping;
	BOOL usesLoaderCache;
	BOOL shouldCacheFileURLs;
	id UIKitDelegate;
	id UIKitDelegateForwarder;
	id WebMailDelegate;
	BOOL allowsMessaging;
	NSMutableSet* _caretChangeListeners;
	id<WebCaretChangeListener> _caretChangeListener;
	CGSize fixedLayoutSize;
	BOOL mainViewIsScrollingOrZooming;
	int didDrawTiles;
	HashMap<long unsigned int,WTF::RetainPtr<objc_object*>,WTF::IntHash<long unsigned int>,WTF::HashTraits<long unsigned int>,WTF::HashTraits<WTF::RetainPtr<objc_object*> > > identifierMap;
	BOOL _keyboardUIModeAccessed;
	int _keyboardUIMode;
	BOOL shouldUpdateWhileOffscreen;
	BOOL usesDocumentViews;
	BOOL includesFlattenedCompositingLayersWhenDrawingToBitmap;
	BOOL needsOneShotDrawingSynchronization;
	BOOL postsAcceleratedCompositingNotifications;
	CFRunLoopObserverRef layerSyncRunLoopObserver;
	CGSize lastLayoutSize;
	BOOL ignoringMouseDraggedEvents;
	WebEvent* mouseDownEvent;
	BOOL handlingMouseDownEvent;
	WebEvent* keyDownEvent;
	NSTimer* autoscrollTimer;
	WebEvent* autoscrollTriggerEvent;
	WebVideoFullscreenController* fullscreenController;
	id<WebGeolocationProvider> _geolocationProvider;
}
+(void)initialize;
-(id)init;
-(void)dealloc;
-(void)finalize;
-(id).cxx_construct;
-(void).cxx_destruct;
@end

