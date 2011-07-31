/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "CoreData-Structs.h"
#import "NSPropertyMapping.h"

@class NSDictionary, NSExpression, NSArray, NSString;

@interface NSPropertyMapping : XXUnknownSuperclass {
@private
	void* _reserved;
	void* _reserved1;
	NSArray* _propertyTransforms;
	NSString* _name;
	NSExpression* _valueExpression;
	NSDictionary* _userInfo;
	propertyMappingFlags _propertyMappingFlags;
}
+(void)initialize;
-(id)init;
-(void)dealloc;
-(void)encodeWithCoder:(id)coder;
-(id)initWithCoder:(id)coder;
-(id)copyWithZone:(NSZone*)zone;
-(BOOL)isEqual:(id)equal;
-(id)description;
-(id)name;
-(void)setName:(id)name;
-(id)valueExpression;
-(void)setValueExpression:(id)expression;
-(id)userInfo;
-(void)setUserInfo:(id)info;
@end

@interface NSPropertyMapping (_NSInternalMethods)
-(id)_initWithDestinationName:(id)destinationName valueExpression:(id)expression;
-(id)initWithName:(id)name valueExpression:(id)expression;
-(BOOL)isEditable;
-(void)_createCachesAndOptimizeState;
-(void)_setIsEditable:(BOOL)editable;
-(void)_throwIfNotEditable;
-(void)_setPropertyTransforms:(id)transforms;
-(id)_propertyTransforms;
@end
