/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import "SUScriptObject.h"

@class NSString;

@interface SUScriptABPerson : SUScriptObject {
	void* _record;
}
@property(readonly, assign) NSString* compositeName;
+(id)webScriptNameForKey:(const char*)key;
+(id)webScriptNameForSelector:(SEL)selector;
-(id)init;
-(id)initWithRecord:(void*)record;
-(void)dealloc;
-(id)valueForProperty:(int)property;
-(id)_className;
-(id)_copyArrayFromMultiValue:(void*)multiValue ofType:(unsigned)type;
-(id)_newSingleValueWithLabel:(id)label value:(id)value;
-(id)attributeKeys;
-(id)scriptAttributeKeys;
@end

