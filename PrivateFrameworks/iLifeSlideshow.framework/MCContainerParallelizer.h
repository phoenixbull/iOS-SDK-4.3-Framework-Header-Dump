/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iLifeSlideshow.framework/iLifeSlideshow
 */

#import "iLifeSlideshow-Structs.h"
#import "MCContainer.h"

@class NSSet, NSArray, NSString, NSMutableSet, NSRecursiveLock;

@interface MCContainerParallelizer : MCContainer {
	NSMutableSet* mPlugs;
	NSRecursiveLock* mPlugsLock;
	NSArray* mCachedZOrderedPlugs;
	CGColorRef mBackgroundColor;
	NSString* mPageIDAtStart;
}
@property(assign) CGColorRef backgroundColor;
@property(copy) NSString* pageIDAtStart;
@property(readonly, assign) NSArray* zOrderedPlugs;
@property(readonly, assign) NSSet* plugs;
+(id)keyPathsForValuesAffectingValueForKey:(id)key;
-(id)init;
-(id)initWithImprint:(id)imprint andMontage:(id)montage;
-(void)demolish;
-(id)imprint;
-(void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void*)context;
-(unsigned)countOfPlugs;
-(id)plugForID:(id)anId;
-(id)setPlugForContainer:(id)container forID:(id)anId;
-(void)removePlug:(id)plug;
-(void)removePlugForID:(id)anId;
@end

