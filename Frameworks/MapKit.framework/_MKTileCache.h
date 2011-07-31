/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "MapKit-Structs.h"


@interface _MKTileCache : XXUnknownSuperclass {
@private
	id _imp;
}
+(id)impWithCapacity:(unsigned)capacity maxCapacity:(unsigned)capacity2 delegate:(id)delegate;
-(id)init;
-(id)initWithCapacity:(unsigned)capacity;
-(id)initWithCapacity:(unsigned)capacity maxCapacity:(unsigned)capacity2;
-(void)dealloc;
-(float)compactionFactor;
-(void)setCompactionFactor:(float)factor;
-(unsigned)maxCapacity;
-(void)setMaxCapacity:(unsigned)capacity;
-(unsigned)count;
-(id)allObjects;
-(void)removeAllObjects;
-(void)compact;
-(void)removeObjectsForKeys:(id)keys;
-(id)objectForKey:(const XXStruct_j8inqB*)key;
-(void)setObject:(id)object forKey:(const XXStruct_j8inqB*)key;
-(id)description;
-(unsigned)getKeys:(const void**)keys values:(const void**)values;
@end
