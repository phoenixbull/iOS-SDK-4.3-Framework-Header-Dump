/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVWeakReference.h"

@class NSString;

@interface AVGarbageCollectedWeakReference : AVWeakReference {
@private
	id _referencedObject;
	NSString* _cachedReferencedObjectDescription;
}
-(id)initWithReferencedObject:(id)referencedObject;
-(id)init;
-(id)description;
-(id)referencedObject;
-(void)referencedObjectWillBeRetained;
-(void)referencedObjectWillBeReleased;
@end
