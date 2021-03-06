/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBook.framework/AddressBook
 */

#import "ABPredicate.h"
#import "AddressBook-Structs.h"


@interface ABAnyValuePredicate : ABPredicate {
@private
	int _property;
}
@property(assign, nonatomic) int property;
-(id)init;
-(BOOL)isValid;
-(id)queryJoinsInCompound:(BOOL)compound;
-(id)queryGroupByProperties;
-(id)queryWhereString;
-(void)ab_bindStatement:(CPSqliteStatement*)statement withBindingOffset:(int*)bindingOffset predicateIdentifier:(int)identifier;
@end

