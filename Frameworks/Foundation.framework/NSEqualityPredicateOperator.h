/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSPredicateOperator.h"


@interface NSEqualityPredicateOperator : NSPredicateOperator {
@private
	BOOL _negate;
	unsigned _options;
}
-(id)initWithOperatorType:(unsigned)operatorType modifier:(unsigned)modifier negate:(BOOL)negate;
-(id)initWithOperatorType:(unsigned)operatorType modifier:(unsigned)modifier negate:(BOOL)negate options:(unsigned)options;
-(void)encodeWithCoder:(id)coder;
-(id)initWithCoder:(id)coder;
-(id)copyWithZone:(NSZone*)zone;
-(id)predicateFormat;
-(BOOL)isNegation;
-(void)setNegation:(BOOL)negation;
-(unsigned)options;
-(void)_setOptions:(unsigned)options;
-(BOOL)isEqual:(id)equal;
-(BOOL)performPrimitiveOperationUsingObject:(id)object andObject:(id)object2;
@end

