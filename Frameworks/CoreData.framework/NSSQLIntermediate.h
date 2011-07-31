/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface NSSQLIntermediate : XXUnknownSuperclass {
@private
	NSSQLIntermediate* _scope;
}
+(BOOL)expressionIsBasicKeypath:(id)keypath;
+(BOOL)isSimpleKeypath:(id)keypath;
-(id)initWithScope:(id)scope;
-(id)scope;
-(id)generateSQLStringInContext:(id)context;
-(BOOL)isOrScoped;
-(BOOL)isSelectTargetScoped;
-(BOOL)isFunctionScoped;
-(BOOL)isHavingScoped;
-(id)fetchIntermediate;
-(id)fetchIntermediateForKeypathExpression:(id)keypathExpression;
-(BOOL)expressionIsBasicKeypath:(id)keypath;
-(BOOL)isSimpleKeypath:(id)keypath;
-(BOOL)isVariableBasedKeypathScopedBySubquery:(id)subquery;
-(id)governingAlias;
-(id)governingAliasForKeypathExpression:(id)keypathExpression;
-(id)governingEntityForKeypathExpression:(id)keypathExpression;
-(id)_generateSQLForVariableExpression:(id)variableExpression inContext:(id)context;
-(BOOL)keypathExpressionIsSafeLHSForIn:(id)anIn;
-(id)_lastScopedItem;
-(void)_promoteJoinsForKeypathExpression:(id)keypathExpression;
-(void)_promoteJoinsForSubqueryScopedKeypath:(id)subqueryScopedKeypath;
-(void)_promoteJoinsForFunctionExpression:(id)functionExpression;
-(void)_promoteJoinsForAggregateExpression:(id)aggregateExpression;
-(void)_promoteJoinsForTernaryExpression:(id)ternaryExpression;
-(void)promoteJoinsInKeypathsForExpression:(id)expression;
-(void)_promoteJoinsForSubqueryScopedKeypaths;
-(BOOL)_functionExpressionIsSubqueryFollowedByKeypath:(id)keypath;
-(id)_generateSQLForConstantValue:(id)constantValue inContext:(id)context;
-(id)_generateSQLForFunctionExpression:(id)functionExpression allowToMany:(BOOL)many inContext:(id)context;
-(id)_generateSQLForKeyPathExpression:(id)keyPathExpression allowToMany:(BOOL)many inContext:(id)context;
-(id)_generateSQLForExpressionCollection:(id)expressionCollection allowToMany:(BOOL)many inContext:(id)context;
-(id)_generateSQLForConstantCollection:(id)constantCollection inContext:(id)context;
-(id)_generateSQLForFetchExpression:(id)fetchExpression allowToMany:(BOOL)many inContext:(id)context;
-(id)_generateSQLForSubqueryExpression:(id)subqueryExpression trailingKeypath:(id)keypath inContext:(id)context;
-(id)_generateSQLForTernaryExpression:(id)ternaryExpression allowToMany:(BOOL)many inContext:(id)context;
-(id)_generateSQLForExpression:(id)expression allowToMany:(BOOL)many inContext:(id)context;
@end
