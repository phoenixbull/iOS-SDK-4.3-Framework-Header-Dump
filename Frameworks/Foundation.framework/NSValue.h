/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSValue.h"
#import "Foundation-Structs.h"
#import "NSCoding.h"
#import "NSCopying.h"
#import <XXUnknownSuperclass.h> // Unknown library


@interface NSValue : XXUnknownSuperclass <NSCopying, NSCoding> {
}
+(void)initialize;
+(id)allocWithZone:(NSZone*)zone;
+(id)value:(const void*)value withObjCType:(const char*)objCType;
+(id)valueWithBytes:(const void*)bytes objCType:(const char*)type;
+(id)valueWithNonretainedObject:(id)nonretainedObject;
+(id)valueWithPointer:(const void*)pointer;
+(id)valueWithPoint:(CGPoint)point;
+(id)valueWithSize:(CGSize)size;
+(id)valueWithRect:(CGRect)rect;
+(id)valueWithRange:(NSRange)range;
-(id)init;
-(void)getValue:(void*)value;
-(const char*)objCType;
-(id)copyWithZone:(NSZone*)zone;
-(BOOL)isEqualToValue:(id)value;
-(BOOL)isEqual:(id)equal;
-(unsigned)hash;
-(id)description;
-(id)nonretainedObjectValue;
-(void*)pointerValue;
-(CGPoint)pointValue;
-(CGSize)sizeValue;
-(CGRect)rectValue;
-(NSRange)rangeValue;
-(Class)classForCoder;
-(void)encodeWithCoder:(id)coder;
-(id)initWithCoder:(id)coder;
-(id)initWithBytes:(const void*)bytes objCType:(const char*)type;
@end

@interface NSValue (NSKindOfAdditions)
-(BOOL)isNSValue__;
@end

