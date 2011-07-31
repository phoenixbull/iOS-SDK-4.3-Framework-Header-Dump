/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSDecimalNumber.h"
#import "NSNumber.h"


@interface NSDecimalNumber : NSNumber {
@private
	unsigned _exponent : 8;
	unsigned _length : 4;
	unsigned _isNegative : 1;
	unsigned _isCompact : 1;
	unsigned _reserved : 1;
	unsigned _hasExternalRefCount : 1;
	unsigned _refs : 16;
	unsigned short _mantissa[0];
}
+(id)allocWithZone:(NSZone*)zone;
+(id)decimalNumberWithMantissa:(unsigned long long)mantissa exponent:(short)exponent isNegative:(BOOL)negative;
+(id)decimalNumberWithDecimal:(XXStruct_9isexA)decimal;
+(id)decimalNumberWithString:(id)string;
+(id)decimalNumberWithString:(id)string locale:(id)locale;
+(id)minimumDecimalNumber;
+(id)maximumDecimalNumber;
+(id)zero;
+(id)one;
+(id)notANumber;
+(void)setDefaultBehavior:(id)behavior;
+(id)defaultBehavior;
-(id)copy;
-(id)copyWithZone:(NSZone*)zone;
-(id)initWithMantissa:(unsigned long long)mantissa exponent:(short)exponent isNegative:(BOOL)negative;
-(id)initWithDecimal:(XXStruct_9isexA)decimal;
-(id)initWithString:(id)string;
-(id)initWithString:(id)string locale:(id)locale;
-(id)initWithCoder:(id)coder;
-(id)description;
-(id)descriptionWithLocale:(id)locale;
-(XXStruct_9isexA)decimalValue;
-(int)compare:(id)compare;
-(BOOL)isEqual:(id)equal;
-(const char*)objCType;
-(double)doubleValue;
-(void)getValue:(void*)value;
-(id)decimalNumberByAdding:(id)adding;
-(id)decimalNumberByAdding:(id)adding withBehavior:(id)behavior;
-(id)decimalNumberBySubstracting:(id)substracting;
-(id)decimalNumberBySubstracting:(id)substracting withBehavior:(id)behavior;
-(id)decimalNumberBySubtracting:(id)subtracting;
-(id)decimalNumberBySubtracting:(id)subtracting withBehavior:(id)behavior;
-(id)decimalNumberByMultiplyingBy:(id)by;
-(id)decimalNumberByMultiplyingBy:(id)by withBehavior:(id)behavior;
-(id)decimalNumberByDividingBy:(id)by;
-(id)decimalNumberByDividingBy:(id)by withBehavior:(id)behavior;
-(id)decimalNumberByRaisingToPower:(unsigned)power;
-(id)decimalNumberByRaisingToPower:(unsigned)power withBehavior:(id)behavior;
-(id)decimalNumberByMultiplyingByPowerOf10:(short)a10;
-(id)decimalNumberByMultiplyingByPowerOf10:(short)a10 withBehavior:(id)behavior;
-(id)decimalNumberByRoundingAccordingToBehavior:(id)behavior;
-(Class)classForCoder;
-(void)encodeWithCoder:(id)coder;
-(BOOL)charValue;
-(unsigned char)unsignedCharValue;
-(short)shortValue;
-(unsigned short)unsignedShortValue;
-(int)intValue;
-(unsigned)unsignedIntValue;
-(long)longValue;
-(unsigned long)unsignedLongValue;
-(long long)longLongValue;
-(unsigned long long)unsignedLongLongValue;
-(float)floatValue;
-(BOOL)boolValue;
@end

@interface NSDecimalNumber (NSNumberCompatibility)
+(id)numberWithChar:(BOOL)aChar;
+(id)numberWithUnsignedChar:(unsigned char)unsignedChar;
+(id)numberWithShort:(short)aShort;
+(id)numberWithUnsignedShort:(unsigned short)unsignedShort;
+(id)numberWithInt:(int)int;
+(id)numberWithInteger:(int)integer;
+(id)numberWithUnsignedInt:(unsigned)unsignedInt;
+(id)numberWithUnsignedInteger:(unsigned)unsignedInteger;
+(id)numberWithLong:(long)aLong;
+(id)numberWithUnsignedLong:(unsigned long)unsignedLong;
+(id)numberWithLongLong:(long long)longLong;
+(id)numberWithUnsignedLongLong:(unsigned long long)unsignedLongLong;
+(id)numberWithFloat:(float)aFloat;
+(id)numberWithDouble:(double)aDouble;
+(id)numberWithBool:(BOOL)aBool;
@end

