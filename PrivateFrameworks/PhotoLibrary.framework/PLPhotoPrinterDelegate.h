/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

#import "NSObject.h"


@protocol PLPhotoPrinterDelegate <NSObject>
@optional
-(void)photoPrinterWillPresentPrintingOptions:(id)photoPrinter;
-(void)photoPrinterDidDismissPrintingOptions:(id)photoPrinter;
-(void)photoPrinter:(id)printer didPrint:(BOOL)print error:(id)error;
@end

