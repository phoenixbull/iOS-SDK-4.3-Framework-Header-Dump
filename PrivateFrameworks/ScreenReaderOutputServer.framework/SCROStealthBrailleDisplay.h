/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ScreenReaderOutputServer.framework/ScreenReaderOutputServer
 */

#import "ScreenReaderOutputServer-Structs.h"
#import "SCROBrailleDisplay.h"

@class NSData, NSMutableString, NSMutableArray;

@interface SCROStealthBrailleDisplay : SCROBrailleDisplay {
}
+(id)displayWithDelegate:(id)delegate;
+(id)displayWithIOElement:(id)ioelement driverIdentifier:(id)identifier delegate:(id)delegate;
-(void)_mainDisplayHandler:(id)handler;
@end

