/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "CoreData-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "NSManagedObjectModel.h"
#import "NSCoding.h"
#import "NSFastEnumeration.h"
#import "NSCopying.h"

@class NSSet, NSMutableDictionary;

@interface NSManagedObjectModel : XXUnknownSuperclass <NSCoding, NSCopying, NSFastEnumeration> {
@private
	id _dataForOptimization;
	id* _optimizationHints;
	id _localizationPolicy;
	NSMutableDictionary* _entities;
	NSMutableDictionary* _configurations;
	NSMutableDictionary* _fetchRequestTemplates;
	NSSet* _versionIdentifiers;
	managedObjectModelFlags _managedObjectModelFlags;
}
+(void)initialize;
+(id)mergedModelFromBundles:(id)bundles;
+(id)modelByMergingModels:(id)models;
+(id)mergedModelFromBundles:(id)bundles forStoreMetadata:(id)storeMetadata;
+(id)modelByMergingModels:(id)models forStoreMetadata:(id)storeMetadata;
-(id)init;
-(id)initWithContentsOfURL:(id)url;
-(void)dealloc;
-(void)encodeWithCoder:(id)coder;
-(id)initWithCoder:(id)coder;
-(id)copyWithZone:(NSZone*)zone;
-(id)mutableCopyWithZone:(NSZone*)zone;
-(unsigned)hash;
-(BOOL)isEqual:(id)equal;
-(id)description;
-(unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA*)state objects:(id*)objects count:(unsigned)count;
-(id)entitiesByName;
-(id)entities;
-(void)setEntities:(id)entities;
-(id)configurations;
-(id)entitiesForConfiguration:(id)configuration;
-(void)setEntities:(id)entities forConfiguration:(id)configuration;
-(id)fetchRequestTemplatesByName;
-(id)fetchRequestTemplateForName:(id)name;
-(void)setFetchRequestTemplate:(id)aTemplate forName:(id)name;
-(id)fetchRequestFromTemplateWithName:(id)name substitutionVariables:(id)variables;
-(id)localizationDictionary;
-(void)setLocalizationDictionary:(id)dictionary;
-(id)versionIdentifiers;
-(void)setVersionIdentifiers:(id)identifiers;
-(id)entityVersionHashesByName;
-(BOOL)isConfiguration:(id)configuration compatibleWithStoreMetadata:(id)storeMetadata;
@end

@interface NSManagedObjectModel (_NSInternalMethods)
+(void)_deepCollectEntitiesInArray:(id)array entity:(id)entity;
+(id)_modelPathsFromBundles:(id)bundles;
-(id)_initWithEntities:(id)entities;
-(BOOL)isEditable;
-(void)_flattenProperties;
-(void)_createCachesAndOptimizeState;
-(BOOL)_isOptimizedForEncoding;
-(BOOL)_hasPrecomputedKeyOrder;
-(id)_precomputedKeysForEntity:(id)entity;
-(void)_setIsEditable:(BOOL)editable optimizationStyle:(unsigned)style;
-(void)_setIsEditable:(BOOL)editable;
-(void)_throwIfNotEditable;
-(id)_entityForName:(id)name;
-(void)_removeEntityNamed:(id)named;
-(void)_removeEntity:(id)entity;
-(id)_configurationsByName;
-(void)_addEntities:(id)entities toConfiguration:(id)configuration;
-(void)_removeEntities:(id)entities fromConfiguration:(id)configuration;
-(id)_localizationPolicy;
-(void)_setLocalizationPolicy:(id)policy;
-(id)_sortedEntitiesForConfiguration:(id)configuration;
-(void)_addVersionIdentifiers:(id)identifiers;
-(id)_entitiesByVersionHash;
-(void)_stripForMigration;
-(void)_restoreValidation;
-(id)_versionIdentifiersAsArray;
@end

@interface NSManagedObjectModel (_NSManagedObjectModelPrivateMethods)
+(id)_newModelFromOptimizedEncoding:(id)optimizedEncoding error:(id*)error;
-(id)initWithContentsOfOptimizedURL:(id)optimizedURL;
-(id)_optimizedEncoding:(id*)encoding;
-(id)initWithContentsOfURL:(id)url forStoreMetadata:(id)storeMetadata;
-(void)_addEntity:(id)entity;
-(id)versionHash;
-(id)_modelForVersionHashes:(id)versionHashes;
@end

