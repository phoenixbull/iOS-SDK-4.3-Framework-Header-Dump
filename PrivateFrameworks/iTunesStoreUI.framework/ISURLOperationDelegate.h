/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import "ISOperationDelegate.h"


@protocol ISURLOperationDelegate <ISOperationDelegate>
@optional
-(void)operation:(id)operation didDiscoverContentLength:(id)length;
-(void)operation:(id)operation didReceiveResponse:(id)response;
-(void)operation:(id)operation finishedWithOutput:(id)output;
-(void)operation:(id)operation willSendRequest:(id)request;
@end

