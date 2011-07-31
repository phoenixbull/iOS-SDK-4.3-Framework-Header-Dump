/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSKeyValueProperty.h"

@class NSString, NSKeyValueUnnestedProperty;

__attribute__((visibility("hidden")))
@interface NSKeyValueNestedProperty : NSKeyValueProperty {
@private
	NSString* _relationshipKey;
	NSString* _keyPathFromRelatedObject;
	NSKeyValueUnnestedProperty* _relationshipProperty;
	NSString* _keyPathWithoutOperatorComponents;
	BOOL _isAllowedToResultInForwarding;
	id _dependentValueKeyOrKeys;
	BOOL _dependentValueKeyOrKeysIsASet;
}
-(id)_initWithContainerClass:(id)containerClass keyPath:(id)path firstDotIndex:(unsigned)index propertiesBeingInitialized:(CFSetRef)initialized;
-(void)dealloc;
-(id)description;
-(void)_givenPropertiesBeingInitialized:(CFSetRef)initialized getAffectingProperties:(id)properties;
-(void)_addDependentValueKey:(id)key;
-(Class)_isaForAutonotifying;
-(id)_keyPathIfAffectedByValueForKey:(id)key exactMatch:(BOOL*)match;
-(id)_keyPathIfAffectedByValueForMemberOfKeys:(id)keys;
-(void)object:(id)object didAddObservance:(id)observance recurse:(BOOL)recurse;
-(void)object:(id)object didRemoveObservance:(id)observance recurse:(BOOL)recurse;
-(BOOL)object:(id)object withObservance:(id)observance willChangeValueForKeyOrKeys:(id)keyOrKeys recurse:(BOOL)recurse forwardingValues:(XXStruct_OzJQfB*)values;
-(void)object:(id)object withObservance:(id)observance didChangeValueForKeyOrKeys:(id)keyOrKeys recurse:(BOOL)recurse forwardingValues:(XXStruct_OzJQfB)values;
-(id)dependentValueKeyOrKeysIsASet:(BOOL*)set;
-(BOOL)matchesWithoutOperatorComponentsKeyPath:(id)path;
@end

