/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface SSProtocolCondition : XXUnknownSuperclass {
@private
	int _operator;
	id _value;
}
+(id)newConditionWithDictionary:(id)dictionary;
-(id)initWithDictionary:(id)dictionary;
-(void)dealloc;
-(BOOL)evaluateWithContext:(id)context;
@end

