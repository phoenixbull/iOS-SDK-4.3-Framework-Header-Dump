/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "CoreData-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface _NSKnownKeysEnumerator : XXUnknownSuperclass {
@private
	id _target;
	id* _list;
	id* _referenceItems;
	NSRange _range;
	unsigned long _index;
	unsigned long _flags;
}
-(id)initWithArray:(const id*)array forTarget:(id)target withReferenceValues:(const id*)referenceValues andRange:(NSRange)range andCopyItems:(BOOL)items;
-(void)_invalidate;
-(void)dealloc;
-(id)nextObject;
@end

