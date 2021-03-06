/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "SUWebViewDelegate.h"
#import "iTunesStoreUI-Structs.h"
#import "ISStoreURLOperationDelegate.h"

@class SUWebView, ISStoreURLOperation;

@interface SUScriptExecutionContext : XXUnknownSuperclass <ISStoreURLOperationDelegate, SUWebViewDelegate> {
	ISStoreURLOperation* _loadOperation;
	BOOL _sourceIsTrusted;
	SUWebView* _webView;
}
@property(assign, nonatomic) BOOL sourceIsTrusted;
@property(readonly, assign, nonatomic) OpaqueJSContext* globalExecutionContext;
@property(readonly, assign, nonatomic) id windowScriptObject;
-(void)dealloc;
-(BOOL)evaluateData:(id)data MIMEType:(id)type textEncodingName:(id)name baseURL:(id)url;
-(id)callWebScriptMethod:(id)method withArguments:(id)arguments;
-(void)evaluateScriptAtURL:(id)url;
-(void)evaluateScriptWithURLBagKey:(id)urlbagKey;
-(void)operation:(id)operation failedWithError:(id)error;
-(void)operation:(id)operation finishedWithOutput:(id)output;
-(id)parentViewControllerForWebView:(id)webView;
-(void)_cancelLoadOperation;
-(id)_newLoadOperation;
-(id)_webView;
@end

