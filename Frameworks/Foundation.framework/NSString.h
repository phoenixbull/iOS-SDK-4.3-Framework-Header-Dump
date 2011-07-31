/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSString.h"
#import "NSCoding.h"
#import "NSCopying.h"
#import "NSMutableCopying.h"
#import <XXUnknownSuperclass.h> // Unknown library


@interface NSString : XXUnknownSuperclass <NSCopying, NSMutableCopying, NSCoding> {
}
+(void)initialize;
+(id)allocWithZone:(NSZone*)zone;
+(id)string;
+(id)stringWithString:(id)string;
+(id)stringWithCharacters:(const unsigned short*)characters length:(unsigned)length;
+(id)stringWithCString:(const char*)cstring;
+(id)stringWithCString:(const char*)cstring length:(unsigned)length;
+(id)stringWithCString:(const char*)cstring encoding:(unsigned)encoding;
+(id)stringWithUTF8String:(const char*)utf8String;
+(id)stringWithBytes:(const void*)bytes length:(unsigned)length encoding:(unsigned)encoding;
+(id)localizedStringWithFormat:(id)format;
+(id)stringWithFormat:(id)format;
+(id)stringWithFormat:(id)format locale:(id)locale;
+(id)stringWithContentsOfFile:(id)file;
+(id)stringWithContentsOfURL:(id)url;
+(id)stringWithContentsOfURL:(id)url encoding:(unsigned)encoding error:(id*)error;
+(id)stringWithContentsOfURL:(id)url usedEncoding:(unsigned*)encoding error:(id*)error;
+(id)stringWithContentsOfFile:(id)file encoding:(unsigned)encoding error:(id*)error;
+(id)stringWithContentsOfFile:(id)file usedEncoding:(unsigned*)encoding error:(id*)error;
-(unsigned)length;
-(unsigned short)characterAtIndex:(unsigned)index;
-(const unsigned short*)_fastCharacterContents;
-(const char*)_fastCStringContents:(BOOL)contents;
-(BOOL)_isCString;
-(id)_stringRepresentation;
-(id)quotedStringRepresentation;
-(id)description;
-(id)copyWithZone:(NSZone*)zone;
-(id)mutableCopyWithZone:(NSZone*)zone;
-(BOOL)isEqual:(id)equal;
-(unsigned)hash;
-(BOOL)isEqualToString:(id)string;
-(int)compare:(id)compare options:(unsigned)options range:(NSRange)range;
-(int)compare:(id)compare options:(unsigned)options range:(NSRange)range locale:(id)locale;
-(int)compare:(id)compare options:(unsigned)options;
-(int)compare:(id)compare;
-(int)caseInsensitiveCompare:(id)compare;
-(int)localizedCompare:(id)compare;
-(int)localizedCaseInsensitiveCompare:(id)compare;
-(int)localizedStandardCompare:(id)compare;
-(NSRange)rangeOfComposedCharacterSequenceAtIndex:(unsigned)index;
-(NSRange)rangeOfComposedCharacterSequencesForRange:(NSRange)range;
-(NSRange)rangeOfString:(id)string options:(unsigned)options range:(NSRange)range locale:(id)locale;
-(NSRange)rangeOfString:(id)string options:(unsigned)options range:(NSRange)range;
-(NSRange)rangeOfString:(id)string options:(unsigned)options;
-(NSRange)rangeOfString:(id)string;
-(NSRange)rangeOfCharacterFromSet:(id)set options:(unsigned)options range:(NSRange)range;
-(NSRange)rangeOfCharacterFromSet:(id)set options:(unsigned)options;
-(NSRange)rangeOfCharacterFromSet:(id)set;
-(id)componentsSeparatedByString:(id)string;
-(id)componentsSeparatedByCharactersInSet:(id)set;
-(id)commonPrefixWithString:(id)string options:(unsigned)options;
-(BOOL)hasPrefix:(id)prefix;
-(BOOL)hasSuffix:(id)suffix;
-(id)stringByTrimmingCharactersInSet:(id)set;
-(id)stringByPaddingToLength:(unsigned)length withString:(id)string startingAtIndex:(unsigned)index;
-(id)stringByReplacingOccurrencesOfString:(id)string withString:(id)string2 options:(unsigned)options range:(NSRange)range;
-(id)stringByReplacingOccurrencesOfString:(id)string withString:(id)string2;
-(id)stringByReplacingCharactersInRange:(NSRange)range withString:(id)string;
-(void)getCharacters:(unsigned short*)characters range:(NSRange)range;
-(void)getCharacters:(unsigned short*)characters;
-(id)_newSubstringWithRange:(NSRange)range zone:(NSZone*)zone;
-(id)substringWithRange:(NSRange)range;
-(id)substringFromIndex:(unsigned)index;
-(id)substringToIndex:(unsigned)index;
-(id)stringByAppendingString:(id)string;
-(id)stringByAppendingFormat:(id)format;
-(double)doubleValue;
-(float)floatValue;
-(int)intValue;
-(long long)longLongValue;
-(int)integerValue;
-(BOOL)boolValue;
-(id)uppercaseString;
-(id)lowercaseString;
-(id)capitalizedString;
-(id)decomposedStringWithCanonicalMapping;
-(id)precomposedStringWithCanonicalMapping;
-(id)decomposedStringWithCompatibilityMapping;
-(id)precomposedStringWithCompatibilityMapping;
-(id)stringByFoldingWithOptions:(unsigned)options locale:(id)locale;
-(void)_getBlockStart:(unsigned*)start end:(unsigned*)end contentsEnd:(unsigned*)end3 forRange:(NSRange)range stopAtLineSeparators:(BOOL)lineSeparators;
-(void)getLineStart:(unsigned*)start end:(unsigned*)end contentsEnd:(unsigned*)end3 forRange:(NSRange)range;
-(void)getParagraphStart:(unsigned*)start end:(unsigned*)end contentsEnd:(unsigned*)end3 forRange:(NSRange)range;
-(NSRange)lineRangeForRange:(NSRange)range;
-(NSRange)paragraphRangeForRange:(NSRange)range;
-(void)enumerateSubstringsInRange:(NSRange)range options:(unsigned)options usingBlock:(id)block;
-(void)enumerateLinesUsingBlock:(id)block;
-(id)displayableString;
-(BOOL)getExternalRepresentation:(id*)representation extendedAttributes:(id*)attributes forWritingToURLOrPath:(id)urlorPath usingEncoding:(unsigned)encoding error:(id*)error;
-(BOOL)writeToURL:(id)url atomically:(BOOL)atomically encoding:(unsigned)encoding error:(id*)error;
-(BOOL)writeToFile:(id)file atomically:(BOOL)atomically encoding:(unsigned)encoding error:(id*)error;
-(BOOL)writeToFile:(id)file atomically:(BOOL)atomically;
-(BOOL)writeToURL:(id)url atomically:(BOOL)atomically;
-(id)initWithCString:(const char*)cstring length:(unsigned)length;
-(id)initWithCString:(const char*)cstring;
-(id)initWithCString:(const char*)cstring encoding:(unsigned)encoding;
-(id)initWithUTF8String:(const char*)utf8String;
-(id)initWithCharacters:(const unsigned short*)characters length:(unsigned)length;
-(id)initWithString:(id)string;
-(id)initWithData:(id)data encoding:(unsigned)encoding;
-(id)_initWithBytesOfUnknownEncoding:(char*)unknownEncoding length:(unsigned)length copy:(BOOL)copy usedEncoding:(unsigned*)encoding;
-(id)_initWithDataOfUnknownEncoding:(id)unknownEncoding;
-(id)initWithContentsOfFile:(id)file;
-(id)initWithContentsOfURL:(id)url;
-(id)initWithContentsOfURL:(id)url encoding:(unsigned)encoding error:(id*)error;
-(id)initWithContentsOfFile:(id)file encoding:(unsigned)encoding error:(id*)error;
-(id)initWithContentsOfURL:(id)url usedEncoding:(unsigned*)encoding error:(id*)error;
-(id)initWithContentsOfFile:(id)file usedEncoding:(unsigned*)encoding error:(id*)error;
-(id)initWithData:(id)data usedEncoding:(unsigned*)encoding;
-(id)initWithFormat:(id)format;
-(id)initWithFormat:(id)format locale:(id)locale;
-(id)initWithFormat:(id)format arguments:(void*)arguments;
-(id)initWithCharactersNoCopy:(unsigned short*)charactersNoCopy length:(unsigned)length freeWhenDone:(BOOL)done;
-(id)initWithCStringNoCopy:(char*)cstringNoCopy length:(unsigned)length freeWhenDone:(BOOL)done;
-(id)initWithBytesNoCopy:(void*)bytesNoCopy length:(unsigned)length encoding:(unsigned)encoding freeWhenDone:(BOOL)done;
-(id)initWithFormat:(id)format locale:(id)locale arguments:(void*)arguments;
-(Class)classForCoder;
-(void)encodeWithCoder:(id)coder;
-(id)initWithCoder:(id)coder;
@end

@interface NSString (NSCFAdditions)
-(unsigned long)_cfTypeID;
-(id)_createSubstringWithRange:(NSRange)range;
-(unsigned char)_encodingCantBeStoredInEightBitCFString;
-(unsigned long)_smallestEncodingInCFStringEncoding;
-(unsigned long)_fastestEncodingInCFStringEncoding;
-(BOOL)_getCString:(char*)string maxLength:(unsigned)length encoding:(unsigned long)encoding;
@end

@interface NSString (NSPathUtilities)
+(id)pathWithComponents:(id)components;
-(id)pathComponents;
-(BOOL)isAbsolutePath;
-(id)lastPathComponent;
-(id)stringByDeletingLastPathComponent;
-(id)stringByAppendingPathComponent:(id)component;
-(id)pathExtension;
-(id)stringByDeletingPathExtension;
-(id)stringByAppendingPathExtension:(id)extension;
-(id)stringByAbbreviatingWithTildeInPath;
-(id)stringByExpandingTildeInPath;
-(id)_stringByStandardizingPathUsingCache:(BOOL)cache;
-(id)stringByStandardizingPath;
-(id)_stringByResolvingSymlinksInPathUsingCache:(BOOL)pathUsingCache;
-(id)stringByResolvingSymlinksInPath;
-(id)stringsByAppendingPaths:(id)paths;
-(const char*)fileSystemRepresentation;
-(BOOL)getFileSystemRepresentation:(char*)representation maxLength:(unsigned)length;
-(unsigned)completePathIntoString:(id*)string caseSensitive:(BOOL)sensitive matchesIntoArray:(id*)array filterTypes:(id)types;
-(id)stringByConvertingPathToURL;
-(id)stringByConvertingURLToPath;
@end

@interface NSString (NSKindOfAdditions)
-(BOOL)isNSString__;
@end

@interface NSString (__NSLocalizedStringAddition)
-(id)_copyFormatStringWithConfiguration:(id)configuration;
-(id)formatConfiguration;
@end

@interface NSString (NSExtendedStringPropertyListParsing)
-(id)propertyList;
-(id)propertyListFromStringsFileFormat;
@end

@interface NSString (NSStringOtherEncodings)
+(unsigned)defaultCStringEncoding;
+(const unsigned*)availableStringEncodings;
+(id)localizedNameOfStringEncoding:(unsigned)stringEncoding;
-(void)getCString:(char*)string maxLength:(unsigned)length range:(NSRange)range remainingRange:(NSRange*)range4;
-(void)getCString:(char*)string maxLength:(unsigned)length;
-(void)getCString:(char*)string;
-(const char*)UTF8String;
-(const char*)cString;
-(unsigned)cStringLength;
-(const char*)lossyCString;
-(unsigned)fastestEncoding;
-(unsigned)smallestEncoding;
-(BOOL)canBeConvertedToEncoding:(unsigned)encoding;
-(id)dataUsingEncoding:(unsigned)encoding allowLossyConversion:(BOOL)conversion;
-(id)dataUsingEncoding:(unsigned)encoding;
-(const char*)cStringUsingEncoding:(unsigned)encoding;
-(BOOL)getCString:(char*)string maxLength:(unsigned)length encoding:(unsigned)encoding;
-(unsigned)maximumLengthOfBytesUsingEncoding:(unsigned)bytesUsingEncoding;
-(unsigned)lengthOfBytesUsingEncoding:(unsigned)bytesUsingEncoding;
-(BOOL)getBytes:(void*)bytes maxLength:(unsigned)length usedLength:(unsigned*)length3 encoding:(unsigned)encoding options:(unsigned)options range:(NSRange)range remainingRange:(NSRange*)range7;
-(BOOL)getBytes:(char*)bytes maxLength:(unsigned)length filledLength:(unsigned*)length3 encoding:(unsigned)encoding allowLossyConversion:(BOOL)conversion range:(NSRange)range remainingRange:(NSRange*)range7;
@end

@interface NSString (NSURLUtilities)
-(id)stringByAddingPercentEscapesUsingEncoding:(unsigned)encoding;
-(id)stringByReplacingPercentEscapesUsingEncoding:(unsigned)encoding;
@end

@interface NSString (NSURLPathUtilities)
-(id)standardizedURLPath;
-(id)stringByRemovingPercentEscapes;
-(id)stringByAddingPercentEscapes;
-(id)urlPathRelativeToPath:(id)path;
@end

@interface NSString (NSDecimalExtension)
-(XXStruct_9isexA)decimalValue;
@end

@interface NSString (NSUserDefaults_NSURLExtras)
-(id)_web_HTTPStyleLanguageCode;
-(id)_web_HTTPStyleLanguageCodeWithoutRegion;
@end

@interface NSString (NSURLExtrasInternal)
-(id)_web_splitAtNonDateCommas_nowarn;
-(id)_web_parseAsKeyValuePair_nowarn;
-(id)_web_parseAsKeyValuePairHandleQuotes_nowarn:(BOOL)nowarn;
-(NSRange)_web_rangeOfURLScheme_nowarn;
-(NSRange)_web_rangeOfURLResourceSpecifier_nowarn;
-(id)_web_mimeTypeFromContentTypeHeader_nowarn;
-(id)_web_characterSetFromContentTypeHeader_nowarn;
-(id)_web_fileNameFromContentDispositionHeader_nowarn;
-(id)_web_stringByReplacingValidPercentEscapes_nowarn;
-(BOOL)_web_isJavaScriptURL;
@end

@interface NSString (NSURLExtras)
+(id)_web_stringRepresentationForBytes:(long long)bytes;
-(BOOL)_web_isCaseInsensitiveEqualToString:(id)string;
-(BOOL)_web_hasCaseInsensitivePrefix:(id)prefix;
-(int)_web_countOfString:(id)string;
-(BOOL)_web_looksLikeIPAddress;
-(BOOL)_web_hasCountryCodeTLD;
-(BOOL)_web_domainMatches:(id)matches;
-(id)_web_domainFromHost;
-(id)_web_stringByTrimmingWhitespace;
-(id)_web_stringByExpandingTildeInPath;
-(id)_web_fixedCarbonPOSIXPath;
-(NSRange)_web_rangeOfURLUserPasswordHostPort;
-(NSRange)_web_rangeOfURLHost;
-(BOOL)_web_looksLikeAbsoluteURL;
-(BOOL)_web_isFileURL;
-(id)_web_URLFragment;
-(id)_web_stringByCollapsingNonPrintingCharacters;
-(id)_web_filenameByFixingIllegalCharacters;
-(unsigned long)_web_extractFourCharCode;
@end

@interface NSString (NSRegularExpressionSupport)
-(NSRange)_rangeOfRegularExpressionPattern:(id)regularExpressionPattern options:(unsigned)options range:(NSRange)range locale:(id)locale;
-(id)_stringByReplacingOccurrencesOfRegularExpressionPattern:(id)regularExpressionPattern withTemplate:(id)aTemplate options:(unsigned)options range:(NSRange)range;
-(void)_flushRegularExpressionCaches;
@end

@interface NSString (NSUniquePart)
-(NSRange)significantText;
@end

