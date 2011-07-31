/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSScanner.h"
#import "NSCopying.h"
#import <XXUnknownSuperclass.h> // Unknown library


@interface NSScanner : XXUnknownSuperclass <NSCopying> {
}
+(id)allocWithZone:(NSZone*)zone;
+(id)scannerWithString:(id)string;
+(id)localizedScannerWithString:(id)string;
-(id)initWithString:(id)string;
-(id)copyWithZone:(NSZone*)zone;
-(id)_invertedSkipSet;
-(BOOL)scanDouble:(double*)aDouble;
-(BOOL)scanFloat:(float*)aFloat;
-(BOOL)scanHexDouble:(double*)aDouble;
-(BOOL)scanHexFloat:(float*)aFloat;
-(BOOL)scanLongLong:(long long*)aLong;
-(BOOL)scanInt:(int*)int;
-(BOOL)scanInteger:(int*)integer;
-(BOOL)scanHexLongLong:(unsigned long long*)aLong;
-(BOOL)scanHexInt:(unsigned*)int;
-(BOOL)scanCharactersFromSet:(id)set intoString:(id*)string;
-(BOOL)scanUpToCharactersFromSet:(id)set intoString:(id*)string;
-(BOOL)scanString:(id)string intoString:(id*)string2;
-(BOOL)scanUpToString:(id)string intoString:(id*)string2;
-(BOOL)isAtEnd;
-(id)charactersToBeSkipped;
-(BOOL)caseSensitive;
-(id)locale;
-(id)string;
-(void)setScanLocation:(unsigned)location;
-(unsigned)scanLocation;
-(void)setCharactersToBeSkipped:(id)beSkipped;
-(void)setCaseSensitive:(BOOL)sensitive;
-(void)setLocale:(id)locale;
@end

@interface NSScanner (NSRemainingString)
-(id)_remainingString;
-(BOOL)_scanDecimal:(unsigned)decimal into:(int*)into;
@end

@interface NSScanner (NSDecimalNumberScanning)
-(BOOL)scanDecimal:(XXStruct_9isexA*)decimal;
@end

