/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "MusicLibrary-Structs.h"

@class NSString, NSData;

__attribute__((visibility("hidden")))
@interface MLSQLCodeBinding : XXUnknownSuperclass {
@private
	unsigned _valueType;
	union {
		NSString* stringValue;
		NSData* dataValue;
		unsigned uint32Value;
		unsigned long long uint64Value;
		long long int64Value;
		long long rowidValue;
	} _value;
}
+(id)placeholder;
+(id)bindingWithUInt32:(unsigned)uint32;
+(id)bindingWithUInt64:(unsigned long long)uint64;
+(id)bindingWithSInt64:(long long)sint64;
+(id)bindingWithStringValue:(id)stringValue;
+(id)bindingWithDataValue:(id)dataValue noCopy:(BOOL)copy;
+(id)bindingWithCPRecordID:(int)cprecordID store:(CPRecordStoreRef)store;
-(BOOL)isPlaceholder;
-(void)dealloc;
-(id)description;
-(id)bindableStringValue;
-(void)bindToSQLStatement:(CPSqliteStatement*)sqlstatement bindingIndex:(unsigned)index;
@end

