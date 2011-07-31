/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "NSObject.h"
#import "NSCopying.h"


@protocol DOMEventTarget <NSObject, NSCopying>
-(void)addEventListener:(id)listener listener:(id)listener2 useCapture:(BOOL)capture;
-(void)removeEventListener:(id)listener listener:(id)listener2 useCapture:(BOOL)capture;
-(BOOL)dispatchEvent:(id)event;
-(void)addEventListener:(id)listener :(id)arg2 :(BOOL)arg3;
-(void)removeEventListener:(id)listener :(id)arg2 :(BOOL)arg3;
@end

