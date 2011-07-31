/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

#import "MIME-Structs.h"
#import "MFWeakObject.h"
#import "MFWeakReferenceHolder.h"


@interface MFWeakSet : MFWeakObject <MFWeakReferenceHolder> {
@private
	CFSetRef _set;
}
-(id)init;
-(void)dealloc;
-(void)objectWillBeDeallocated:(id)object;
-(void)addObject:(id)object;
-(void)removeObject:(id)object;
-(id)allObjects;
-(void)applyFunction:(/*function-pointer*/ void*)function context:(void*)context;
@end

