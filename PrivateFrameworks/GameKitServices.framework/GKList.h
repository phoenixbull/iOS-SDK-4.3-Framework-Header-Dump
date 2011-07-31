/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "GameKitServices-Structs.h"


__attribute__((visibility("hidden")))
@interface GKList : XXUnknownSuperclass {
@private
	unsigned* _items;
	unsigned _count;
	unsigned _size;
	opaque_pthread_mutex_t _lock;
}
@property(readonly, assign) unsigned count;
-(id)init;
-(id)initWithSize:(unsigned long)size;
-(void)dealloc;
-(BOOL)hasID:(unsigned)anId;
-(void)addID:(unsigned)anId;
-(void)copyItemsInto:(id)into;
-(void)addIDsFromList:(id)list;
-(void)removeID:(unsigned)anId;
-(void)removeAllIDs;
-(id)allMatchingObjectsFromTable:(id)table;
-(void)lock;
-(void)unlock;
-(void)print;
@end

