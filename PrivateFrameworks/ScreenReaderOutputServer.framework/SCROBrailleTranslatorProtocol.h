/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ScreenReaderOutputServer.framework/ScreenReaderOutputServer
 */

#import "NSObject.h"


@protocol SCROBrailleTranslatorProtocol <NSObject>
-(unsigned)interfaceVersion;
-(void)setActiveTable:(id)table;
-(id)activeTable;
-(BOOL)activeTableSupportsContractedBraille;
-(BOOL)activeTableSupportsEightDotBraille;
-(id)printBrailleForText:(id)text contracted:(BOOL)contracted eightDot:(BOOL)dot locations:(id*)locations;
-(id)textForPrintBraille:(id)printBraille contracted:(BOOL)contracted eightDot:(BOOL)dot locations:(id*)locations;
@end

