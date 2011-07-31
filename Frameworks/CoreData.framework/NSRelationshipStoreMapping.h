/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSPropertyStoreMapping.h"

@class NSString, NSArray;

__attribute__((visibility("hidden")))
@interface NSRelationshipStoreMapping : NSPropertyStoreMapping {
@private
	NSString* _destinationEntityExternalName;
	NSArray* _foreignKeys;
	NSArray* _joins;
	unsigned _joinSemantic;
}
-(void)dealloc;
-(BOOL)isEqual:(id)equal;
-(id)relationship;
-(id)destinationEntityExternalName;
-(void)setDestinationEntityExternalName:(id)name;
-(id)foreignKeys;
-(void)setForeignKeys:(id)keys;
-(id)joins;
-(void)setJoins:(id)joins;
-(unsigned)joinSemantic;
-(void)setJoinSemantic:(unsigned)semantic;
-(id)columnDefinitions;
-(id)constraintDefinitions;
@end

