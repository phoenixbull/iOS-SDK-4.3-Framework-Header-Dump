/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIWebDocumentView.h"
#import "UIBrowserDocumentController.h"
#import "UIWebFormAccessoryDelegate.h"

@class UIWindow, WebPDFView, DOMNode, UIActionSheet, NSMutableArray, NSObject, NSTimer, UIWebFormAccessory, UIInformalDelegate, UIWebFormDelegate, UIWebTouchEventsGestureRecognizer;
@protocol UIFormPeripheral;

@interface UIWebBrowserView : UIWebDocumentView <UIWebFormAccessoryDelegate, UIBrowserDocumentController> {
	UIWebFormAccessory* _accessory;
	NSObject<UIFormPeripheral>* _input;
	DOMNode* _currentAssistedNode;
	CGRect _inputViewBounds;
	float _lastAdjustmentForScroller;
	unsigned _accessoryEnabled : 1;
	unsigned _forceInputView : 1;
	unsigned _formIsAutoFilling : 1;
	unsigned _inputViewObeysDOMFocus : 1;
	unsigned _hasEditedTextField : 1;
	unsigned _requiresInputView : 1;
	UIWebTouchEventsGestureRecognizer* _webTouchEventsGestureRecognizer;
	UIWebFormDelegate* _formDelegate;
	UIResponder* _editingDelegateForEverythingExceptForms;
	struct {
		NSMutableArray* all;
		NSMutableArray* html;
		NSMutableArray* javascript;
		NSMutableArray* css;
		NSMutableArray* error;
		NSMutableArray* warning;
		NSMutableArray* tip;
		NSMutableArray* log;
	} _messages;
	struct {
		WebPDFView* view;
		NSTimer* timer;
	} _pdf;
}
@property(retain, nonatomic) UIWebFormAccessory* _accessory;
@property(retain, nonatomic) NSObject<UIFormPeripheral>* _input;
@property(retain, nonatomic) DOMNode* _currentAssistedNode;
@property(assign, nonatomic) UIResponder* _editingDelegateForEverythingExceptForms;
@property(assign, nonatomic, getter=isAccessoryEnabled) BOOL accessoryEnabled;
@property(assign, nonatomic) BOOL inputViewObeysDOMFocus;
@property(assign, nonatomic) CGRect inputViewBounds;
@property(readonly, assign, nonatomic) BOOL hasEditedTextField;
@property(assign, nonatomic) BOOL mediaPlaybackRequiresUserAction;
@property(assign, nonatomic) BOOL allowsInlineMediaPlayback;
+(float)preferredScrollDecelerationFactor;
+(id)getUIWebBrowserViewForWebFrame:(id)webFrame;
+(BOOL)isAutoFillAllowed;
+(id)_PDFPageNumberLabel;
-(id)initWithFrame:(CGRect)frame;
-(id)initWithWebView:(id)webView frame:(CGRect)frame;
-(void)installGestureRecognizers;
-(BOOL)_requiresKeyboardWhenFirstResponder;
-(BOOL)_requiresKeyboardResetOnReload;
-(id)_keyboardResponder;
-(void)dealloc;
-(BOOL)resignFirstResponder;
-(void)_handleKeyEvent:(GSEventRef)event;
-(id)inputAccessoryView;
-(id)inputView;
-(BOOL)canPerformAction:(SEL)action withSender:(id)sender;
-(id)_editingDelegate;
-(BOOL)playsNicelyWithGestures;
-(void)promptForReplace:(id)replace;
-(void)_startAssistingKeyboard;
-(void)_stopAssistingKeyboard;
-(void)_startAssistingSelectForNode:(id)node;
-(void)_stopAssistingSelectForNode:(id)node;
-(void)_keyboardWillShow:(id)_keyboard;
-(void)_keyboardWillHide:(id)_keyboard;
-(void)_updateScrollerViewForInputView:(id)inputView;
-(void)setFrame:(CGRect)frame;
-(void)setBounds:(CGRect)bounds;
-(void)_stopAssistingFormNode;
-(void)_displayFormNodeInputView;
-(void)_updateAccessory;
-(void)assistFormNode:(id)node;
-(void)accessoryDone;
-(void)accessoryTab:(BOOL)tab;
-(void)accessoryAutoFill;
-(void)_scrollCaretToVisible:(id)visible;
-(void)formDelegateHandleTextChangeWithAutoFillSuggestions:(BOOL)autoFillSuggestions;
-(BOOL)canAutoFill;
-(id)formElement;
-(id)textFormElement;
-(void)_resetFormDataForFrame:(id)frame;
-(void)_autoFillFrame:(id)frame;
-(void)webView:(id)view willCloseFrame:(id)frame;
-(void)webView:(id)view didStartProvisionalLoadForFrame:(id)frame;
-(void)webView:(id)view didFinishDocumentLoadForFrame:(id)frame;
-(void)webView:(id)view didFirstLayoutInFrame:(id)frame;
-(void)acceptedAutoFillWord:(id)word;
-(void)autoFillWithElementValue;
-(BOOL)isAutoFillMode;
-(BOOL)isAutoFilling;
-(void)webViewFormEditedStatusHasChanged:(id)changed;
-(void)webView:(id)view formStateDidFocusNode:(id)formState;
-(void)webView:(id)view formStateDidBlurNode:(id)formState;
-(void)_webTouchEventsRecognized:(id)recognized;
-(CGPoint)_convertWindowPointToViewport:(CGPoint)viewport;
-(void)webViewDidPreventDefaultForEvent:(id)webView;
-(CGRect)_editingRect;
-(void)_centerRect:(CGRect)rect forSizeChange:(BOOL)sizeChange withVisibleHeight:(float)visibleHeight pinningEdge:(int)edge;
-(void)_zoomToNode:(id)node forceScroll:(BOOL)scroll;
-(void)_zoomToRect:(CGRect)rect ensuringVisibilityOfRect:(CGRect)rect2 withScale:(float)scale forceScroll:(BOOL)scroll;
-(void)_zoomToRect:(CGRect)rect ensuringVisibilityOfRect:(CGRect)rect2 withScale:(float)scale forceScroll:(BOOL)scroll formAssistantFrame:(CGRect)frame animationDuration:(double)duration;
-(void)_zoomToRect:(CGRect)rect withScale:(float)scale;
-(void)webView:(id)view didReceiveMessage:(id)message;
-(id)messagesMatchingMask:(int)mask;
-(void)clearMessagesMatchingMask:(int)mask;
-(void)_clearAllConsoleMessages;
-(void)_setPDFView:(id)view;
-(void)_updatePDFPageNumberLabelWithUserScrolling:(BOOL)userScrolling animated:(BOOL)animated;
-(void)_pdfPageNumberLabelAnimationDidStop:(id)_pdfPageNumberLabelAnimation finished:(id)finished;
-(void)_hidePDFPageNumberLabel;
-(void)_cleanUpPDF;
-(BOOL)_domainIsWhitelistedForUDIDHeader:(id)udidheader;
-(id)_requestWithUDIDHeaderIfAppropriate:(id)udidheaderIfAppropriate;
-(void)_dumpWebArchiveAtPath:(id)path;
-(void)_clearSelectionAndUI;
-(void)_setSelectedDOMRangeAndUpdateUI:(id)ui;
-(void)_startURLificationIfNeededCoalesce:(BOOL)coalesce;
-(id)_buildVersion;
-(void)_setBrowserUserAgentProductVersion:(id)version bundleVersion:(id)version2;
-(void)_setUIWebViewUserAgent;
@end

