/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSSQLWhereIntermediate.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface NSSQLCompoundWhereIntermediate : NSSQLWhereIntermediate {
@private
	NSMutableArray* _subclauses;
}
-(id)initWithPredicate:(id)predicate inScope:(id)scope inContext:(id)context;
-(void)dealloc;
-(id)_generateMulticlauseStringInContext:(id)context;
-(id)generateSQLStringInContext:(id)context;
-(BOOL)isOrScoped;
@end

