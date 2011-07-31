/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

#import "NSObject.h"


@protocol NSNetServiceDelegate <NSObject>
@optional
-(void)netServiceWillPublish:(id)netService;
-(void)netServiceDidPublish:(id)netService;
-(void)netService:(id)service didNotPublish:(id)publish;
-(void)netServiceWillResolve:(id)netService;
-(void)netServiceDidResolveAddress:(id)netService;
-(void)netService:(id)service didNotResolve:(id)resolve;
-(void)netServiceDidStop:(id)netService;
-(void)netService:(id)service didUpdateTXTRecordData:(id)data;
@end

