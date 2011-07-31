/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "iTunesStoreUI-Structs.h"

@class NSString;

@interface SUWebDocumentView : XXUnknownSuperclass {
	id _loadDelegate;
	NSString* _stylesheet;
	unsigned _adjustHeightToFit : 1;
}
@property(assign, nonatomic) id loadDelegate;
@property(retain, nonatomic) NSString* stylesheet;
-(id)initWithFrame:(CGRect)frame;
-(void)dealloc;
-(void)setPlaintextString:(id)string;
-(void)setHTMLFragment:(id)fragment;
-(void)webView:(id)view didFinishLoadForFrame:(id)frame;
-(void)webView:(id)view decidePolicyForNavigationAction:(id)navigationAction request:(id)request frame:(id)frame decisionListener:(id)listener;
@end
