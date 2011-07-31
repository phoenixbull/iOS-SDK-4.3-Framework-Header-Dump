/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OADDrawableContainer.h"
#import "OfficeImport-Structs.h"
#import "OADDrawable.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface OADGroup : OADDrawable <OADDrawableContainer> {
@private
	CGRect mLogicalBounds;
	NSMutableArray* mChildren;
}
-(id)init;
-(void)dealloc;
-(id)groupProperties;
-(CGRect)logicalBounds;
-(void)setLogicalBounds:(CGRect)bounds;
-(unsigned)childCount;
-(void)addChild:(id)child;
-(void)addChildren:(id)children;
-(id)childAtIndex:(unsigned)index;
-(id)children;
-(void)setParentTextListStyle:(id)style;
-(void)removeUnnecessaryOverrides;
@end

