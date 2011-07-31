/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import "WebKit-Structs.h"
#import "WebCoreFrameView.h"
#import "WebFrameView.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class WebFrameViewPrivate;

@interface WebFrameView : XXUnknownSuperclass {
@private
	WebFrameViewPrivate* _private;
}
-(id)initWithFrame:(CGRect)frame;
-(void)dealloc;
-(void)finalize;
-(BOOL)scrollView:(id)view shouldScrollToPoint:(CGPoint)point;
-(id)webFrame;
-(void)setAllowsScrolling:(BOOL)scrolling;
-(BOOL)allowsScrolling;
-(id)documentView;
-(BOOL)acceptsFirstResponder;
-(BOOL)becomeFirstResponder;
-(void)setNextKeyView:(id)view;
-(BOOL)isOpaque;
-(void)drawRect:(CGRect)rect;
-(CGRect)visibleRect;
-(void)setFrameSize:(CGSize)size;
-(void)viewDidMoveToWindow;
-(BOOL)_scrollOverflowInDirection:(int)direction granularity:(int)granularity;
-(BOOL)_scrollToBeginningOfDocument;
-(BOOL)_scrollToEndOfDocument;
-(void)scrollToBeginningOfDocument:(id)document;
-(void)scrollToEndOfDocument:(id)document;
-(void)_goBack;
-(void)_goForward;
-(BOOL)_scrollVerticallyBy:(float)by;
-(BOOL)_scrollHorizontallyBy:(float)by;
-(float)_horizontalKeyboardScrollDistance;
-(float)_horizontalPageScrollDistance;
-(BOOL)_pageVertically:(BOOL)vertically;
-(BOOL)_pageHorizontally:(BOOL)horizontally;
-(BOOL)_scrollLineVertically:(BOOL)vertically;
-(BOOL)_scrollLineHorizontally:(BOOL)horizontally;
-(void)scrollPageUp:(id)up;
-(void)scrollPageDown:(id)down;
-(void)scrollLineUp:(id)up;
-(void)scrollLineDown:(id)down;
-(BOOL)_firstResponderIsFormControl;
-(void)_forwardMouseEvent:(id)event;
-(void)mouseDown:(id)down;
-(void)mouseUp:(id)up;
-(void)keyDown:(id)down;
-(id)_webcore_effectiveFirstResponder;
-(BOOL)documentViewShouldHandlePrint;
-(void)printDocumentView;
@end

@interface WebFrameView (WebPrivate)
-(float)_area;
-(BOOL)_isScrollable;
-(id)_largestScrollableChild;
-(BOOL)_hasScrollBars;
-(id)_largestChildWithScrollBars;
-(id)_contentView;
-(Class)_customScrollViewClass;
@end

@interface WebFrameView (WebInternal)
+(id)_viewTypesAllowImageTypeOmission:(BOOL)omission;
+(BOOL)_canShowMIMETypeAsHTML:(id)html;
+(Class)_viewClassForMIMEType:(id)mimetype allowingPlugins:(BOOL)plugins;
-(id)_webView;
-(void)_setDocumentView:(id)view;
-(id)_makeDocumentViewForDataSource:(id)dataSource;
-(void)_setWebFrame:(id)frame;
-(id)_scrollView;
-(float)_verticalPageScrollDistance;
-(Class)_viewClassForMIMEType:(id)mimetype;
-(void)_install;
@end

@interface WebFrameView (WebFrameViewFileInternal) <WebCoreFrameView>
-(float)_verticalKeyboardScrollDistance;
-(Frame*)_web_frame;
@end

