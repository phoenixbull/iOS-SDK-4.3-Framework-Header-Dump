/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, NSMutableArray, NSSQLEntity;

__attribute__((visibility("hidden")))
@interface NSSQLStatement : XXUnknownSuperclass {
@private
	NSSQLEntity* _entity;
	NSMutableArray* _bindVariables;
	NSString* _sqlString;
	BOOL _isImpossibleCondition;
	NSSQLEntity* _fakeEntityForFetch;
}
-(id)initWithEntity:(id)entity sqlString:(id)string;
-(id)initWithEntity:(id)entity;
-(void)clearCaches;
-(void)dealloc;
-(id)entity;
-(id)sqlString;
-(void)setSQLString:(id)string;
-(id)bindVariables;
-(unsigned)addBindVariable:(id)variable;
-(void)setBindVariables:(id)variables;
-(void)removeAllBindVariables;
-(BOOL)isImpossibleCondition;
-(void)setImpossibleCondition:(BOOL)condition;
-(id)fakeEntityForFetch;
-(void)cacheFakeEntityForFetch:(id)fetch;
@end

