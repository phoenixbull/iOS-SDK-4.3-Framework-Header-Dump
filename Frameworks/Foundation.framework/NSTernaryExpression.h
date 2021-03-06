/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSExpression.h"

@class NSPredicate;

@interface NSTernaryExpression : NSExpression {
@private
	NSPredicate* _predicate;
	NSExpression* _trueExpression;
	NSExpression* _falseExpression;
}
-(id)initWithPredicate:(id)predicate trueExpression:(id)expression falseExpression:(id)expression3;
-(void)dealloc;
-(void)encodeWithCoder:(id)coder;
-(id)initWithCoder:(id)coder;
-(id)copyWithZone:(NSZone*)zone;
-(BOOL)isEqual:(id)equal;
-(id)predicateFormat;
-(id)predicate;
-(id)trueExpression;
-(id)falseExpression;
-(void)acceptVisitor:(id)visitor flags:(unsigned)flags;
-(id)_expressionWithSubstitutionVariables:(id)substitutionVariables;
-(id)expressionValueWithObject:(id)object context:(id)context;
@end

