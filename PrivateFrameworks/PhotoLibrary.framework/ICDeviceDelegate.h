/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

#import "NSObject.h"


@protocol ICDeviceDelegate <NSObject>
-(void)didRemoveDevice:(id)device;
@optional
-(void)device:(id)device didOpenSessionWithError:(id)error;
-(void)deviceDidBecomeReady:(id)device;
-(void)device:(id)device didCloseSessionWithError:(id)error;
-(void)device:(id)device didReceiveStatusInformation:(id)information;
-(void)device:(id)device didEncounterError:(id)error;
@end

