/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSSQLRelationship.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface NSSQLManyToMany : NSSQLRelationship {
@private
	NSString* _correlationTableName;
	NSString* _columnName;
}
-(id)initWithEntity:(id)entity propertyDescription:(id)description;
-(void)dealloc;
-(id)correlationTableName;
-(BOOL)isMaster;
-(void)_setInverseManyToMany:(id)many;
-(BOOL)isReflexive;
-(id)columnName;
-(void)_setColumnName:(id)name;
-(void)_setCorrelationTableName:(id)name;
-(id)inverseManyToMany;
-(id)inverseColumnName;
-(BOOL)isTableSchemaEqual:(id)equal;
@end

