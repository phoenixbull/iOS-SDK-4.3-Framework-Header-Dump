/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMapTable;

__attribute__((visibility("hidden")))
@interface SFUNoCopyDictionary : XXUnknownSuperclass {
@private
	NSMapTable* m_map;
}
-(id)init;
-(id)initWithCapacity:(unsigned)capacity;
-(void)dealloc;
-(unsigned)count;
-(id)keyEnumerator;
-(id)objectForKey:(id)key;
-(void)removeObjectForKey:(id)key;
-(void)setObject:(id)object forKey:(id)key;
@end

