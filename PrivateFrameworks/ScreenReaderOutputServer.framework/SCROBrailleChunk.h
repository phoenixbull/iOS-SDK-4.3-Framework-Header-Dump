/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ScreenReaderOutputServer.framework/ScreenReaderOutputServer
 */

#import "ScreenReaderOutputServer-Structs.h"
#import "NSCopying.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableAttributedString, NSString;

@interface SCROBrailleChunk : XXUnknownSuperclass <NSCopying> {
	NSString* _text;
	int _contractionMode;
	BOOL _showEightDot;
	BOOL _isFocused;
	BOOL _hasTextSelection;
	NSRange _textSelection;
	int _token;
	BOOL _showDotsSevenAndEight;
	NSMutableAttributedString* _brailleString;
	NSRange _brailleSelection;
}
+(void)initialize;
-(id)copyWithZone:(NSZone*)zone;
-(id)initWithText:(id)text selection:(NSRange*)selection token:(int)token focused:(BOOL)focused contractionMode:(int)mode showEightDot:(BOOL)dot showDotsSevenAndEight:(BOOL)eight;
-(void)dealloc;
-(void)translate;
-(BOOL)focused;
-(BOOL)hasSelection;
-(BOOL)isFocusedOrSelected;
-(int)token;
-(int)locationForIndex:(int)index;
-(id)brailleWithIBeamLocation:(int*)ibeamLocation selection:(NSRange*)selection;
@end

