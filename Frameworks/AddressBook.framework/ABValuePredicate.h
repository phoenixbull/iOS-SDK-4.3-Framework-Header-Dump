/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBook.framework/AddressBook
 */

#import "AddressBook-Structs.h"
#import "ABPredicate.h"

@class NSObject;
@protocol NSObject;

@interface ABValuePredicate : ABPredicate {
@private
	int _property;
	int _comparison;
	id<NSObject> _value;
	BOOL _dictionaryValue;
}
@property(assign, nonatomic) int property;
@property(assign, nonatomic) int comparison;
@property(copy, nonatomic) NSObject* value;
-(id)init;
-(void)dealloc;
-(BOOL)isValid;
-(id)querySelectProperties;
-(id)queryJoinsInCompound:(BOOL)compound;
-(id)queryWhereString;
-(id)stringForComparison:(id)comparison;
-(void)ab_bindStatement:(CPSqliteStatement*)statement withBindingOffset:(int*)bindingOffset predicateIdentifier:(int)identifier;
-(id)predicateFormat;
@end

