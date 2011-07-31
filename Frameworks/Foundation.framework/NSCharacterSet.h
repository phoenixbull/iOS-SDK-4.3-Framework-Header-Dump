/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSCoding.h"
#import "NSCopying.h"
#import "NSMutableCopying.h"
#import <XXUnknownSuperclass.h> // Unknown library


@interface NSCharacterSet : XXUnknownSuperclass <NSCopying, NSMutableCopying, NSCoding> {
}
+(void)initialize;
+(id)controlCharacterSet;
+(id)whitespaceCharacterSet;
+(id)whitespaceAndNewlineCharacterSet;
+(id)decimalDigitCharacterSet;
+(id)letterCharacterSet;
+(id)lowercaseLetterCharacterSet;
+(id)uppercaseLetterCharacterSet;
+(id)alphanumericCharacterSet;
+(id)nonBaseCharacterSet;
+(id)decomposableCharacterSet;
+(id)punctuationCharacterSet;
+(id)capitalizedLetterCharacterSet;
+(id)illegalCharacterSet;
+(id)symbolCharacterSet;
+(id)newlineCharacterSet;
+(id)characterSetWithContentsOfFile:(id)file;
+(id)characterSetWithRange:(NSRange)range;
+(id)characterSetWithCharactersInString:(id)string;
+(id)characterSetWithBitmapRepresentation:(id)bitmapRepresentation;
-(unsigned long)_cfTypeID;
-(CFCharacterSetRef)_expandedCFCharacterSet;
-(id)init;
-(unsigned)hash;
-(id)copyWithZone:(NSZone*)zone;
-(id)invertedSet;
-(BOOL)isEmpty;
-(unsigned)count;
-(BOOL)isMutable;
-(void)makeImmutable;
-(BOOL)characterIsMember:(unsigned short)member;
-(BOOL)longCharacterIsMember:(unsigned long)member;
-(BOOL)isSupersetOfSet:(id)set;
-(BOOL)hasMemberInPlane:(unsigned char)plane;
-(BOOL)isEqual:(id)equal;
-(id)bitmapRepresentation;
-(id)mutableCopyWithZone:(NSZone*)zone;
-(void)encodeWithCoder:(id)coder;
-(id)initWithCoder:(id)coder;
-(id)_retainedBitmapRepresentation;
@end

