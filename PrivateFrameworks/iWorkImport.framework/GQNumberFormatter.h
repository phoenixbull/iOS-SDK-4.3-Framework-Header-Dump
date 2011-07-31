/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "iWorkImport-Structs.h"
#import "GQNumberFormatter.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface GQNumberFormatter : XXUnknownSuperclass {
@private
	CFLocaleRef mLocale;
	CFArrayRef mDecimalFormatters;
	CFArrayRef mCurrencyFormatters;
	CFArrayRef mPercentageFormatters;
	CFArrayRef mScientificFormatters;
	CFNumberFormatterRef mFractionFormatter;
	NSMutableDictionary* mCurrencyCodeToSymbolMap;
	NSMutableDictionary* mCurrencyCodeToHalfWidthSymbolMap;
	NSString* mCurrencyString;
	NSString* mPercentageString;
	NSString* mScientificString;
	NSString* mDecimalString;
	NSString* mPercentSymbol;
	NSMutableArray* mTransformedDecimalStrings;
	NSMutableArray* mTransformedCurrencyStrings;
	NSMutableArray* mTransformedPercentageStrings;
	NSMutableArray* mTransformedScientificStrings;
	CFStringRef mAdditionalCurrencyCode;
	CFArrayRef mAdditionalCurrencyCodeFormatters;
}
+(int)positionOfSymbol:(id)symbol inNumberFormatSubpattern:(id)numberFormatSubpattern;
+(int)positionOfCurrencySymbolInNumberFormatSubpattern:(id)numberFormatSubpattern;
+(int)positionOfMinusSignInNumberFormatSubpattern:(id)numberFormatSubpattern;
+(id)formatString:(id)string transformedForNegativeStyle:(int)negativeStyle;
+(void)formatString:(id)string replaceOccurencesOfUnescapedString:(id)unescapedString withString:(id)string3;
+(id)availableCurrencyCodes;
+(id)displayNameForCurrencyCode:(id)currencyCode;
+(id)currencySymbolForCurrencyCode:(id)currencyCode;
+(unsigned short)defaultDecimalPlacesForCurrencyCode:(id)currencyCode;
+(id)currentLocaleCurrencyCode;
+(id)numberFormatStringSpecialSymbols;
+(id)defaultFormatStringForValueType:(int)valueType negativeStyle:(int)style;
+(id)defaultFormatStringForValueType:(int)valueType;
+(id)localizedPercentSymbol;
+(id)userVisibleCurrencyCodes;
@end

@interface GQNumberFormatter (Private)
+(id)formatterForLocale:(CFLocaleRef)locale;
-(id)initWithLocale:(CFLocaleRef)locale;
-(void)dealloc;
-(void)numberPreferencesChanged:(id)changed;
-(BOOL)decimalFromString:(CFStringRef)string value:(double*)value formatString:(const CFStringRef*)string3;
-(BOOL)currencyFromString:(CFStringRef)string additionalCurrencyCode:(CFStringRef)code value:(double*)value formatString:(const CFStringRef*)string4 currencyCode:(const CFStringRef*)code5;
-(BOOL)percentageFromString:(CFStringRef)string value:(double*)value formatString:(const CFStringRef*)string3;
-(BOOL)scientificFromString:(CFStringRef)string value:(double*)value formatString:(const CFStringRef*)string3;
-(BOOL)fractionFromString:(CFStringRef)string value:(double*)value;
-(BOOL)valueFromString:(CFStringRef)string formatters:(CFArrayRef)formatters value:(double*)value formatString:(const CFStringRef*)string4 currencyCode:(const CFStringRef*)code;
-(BOOL)findCurrencySymbolInString:(CFStringRef)string additionalCurrencyCode:(CFStringRef)code successfulString:(const CFStringRef*)string3;
-(id)displayNameForCurrencyCode:(id)currencyCode;
-(id)currencySymbolForCurrencyCode:(id)currencyCode;
-(id)halfWidthCurrencySymbolForCurrencyCode:(id)currencyCode;
-(id)currentLocaleCurrencyCode;
-(id)defaultFormatStringForValueType:(int)valueType negativeStyle:(int)style;
-(id)defaultFormatStringForValueType:(int)valueType;
-(id)localizedPercentSymbol;
@end

