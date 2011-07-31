/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSStoreMapping.h"

@class NSKnownKeysDictionary, NSManagedObjectModel, NSMutableArray, NSString, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface NSSQLModel : NSStoreMapping {
@private
	NSString* _configuration;
	NSManagedObjectModel* _mom;
	NSKnownKeysDictionary* _entitiesByName;
	NSMutableArray* _entities;
	unsigned _brokenHashVersion;
	NSMutableDictionary* _cachedFabricatedEntities;
	BOOL _retainLeopardStyleDictionaries;
	BOOL _modelHasPrecomputedKeyOrder;
}
-(id)initWithManagedObjectModel:(id)managedObjectModel configurationName:(id)name retainHashHack:(BOOL)hack brokenHashVersion:(unsigned)version;
-(id)initWithManagedObjectModel:(id)managedObjectModel configurationName:(id)name;
-(id)initWithManagedObjectModel:(id)managedObjectModel configurationName:(id)name retainHashHack:(BOOL)hack;
-(id)initWithManagedObjectModel:(id)managedObjectModel configurationName:(id)name brokenHashVersion:(unsigned)version;
-(void)dealloc;
-(id)configurationName;
-(id)managedObjectModel;
-(void)_generateModel:(id)model;
-(id)_entityMapping;
-(id)entityNamed:(id)named;
-(unsigned long)entityIDForName:(id)name;
-(id)entities;
-(id)entitiesByName;
-(id)entityForID:(unsigned long)anId;
-(void)_addIndexedEntity:(id)entity;
-(BOOL)_useLeopardStyleHashing;
-(BOOL)_useSnowLeopardStyleHashing;
-(BOOL)_retainHashHack;
-(BOOL)_modelHasPrecomputedKeyOrder;
-(id)_precomputedKeyOrderForEntity:(id)entity;
@end

