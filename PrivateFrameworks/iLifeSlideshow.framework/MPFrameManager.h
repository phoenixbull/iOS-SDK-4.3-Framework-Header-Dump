/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iLifeSlideshow.framework/iLifeSlideshow
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "MPFrameManager.h"

@class NSMutableDictionary;

@interface MPFrameManager : XXUnknownSuperclass {
	NSMutableDictionary* mFrames;
	NSMutableDictionary* mCategories;
}
+(id)sharedManager;
+(void)releaseSharedManager;
-(void)dealloc;
-(id)allFrameIDs;
-(id)allCategoryIDs;
-(id)versionOfFrameID:(id)frameID;
-(id)localizedFrameNameForFrameID:(id)frameID;
-(id)localizedCategoryNameFromCategoryID:(id)categoryID;
-(id)categoryIDsForFrameID:(id)frameID;
-(id)framesForCategoryID:(id)categoryID;
-(id)thumbnailForFrameID:(id)frameID;
-(id)attributesForFrameID:(id)frameID andPresetID:(id)anId;
@end

@interface MPFrameManager (VeryInternal)
-(id)initWithPaths:(id)paths;
@end

@interface MPFrameManager (Internal)
-(id)randomFrameFromList:(id)list abidingWithConstraints:(id)constraints;
-(id)constraintsForFramesMatchingList:(id)framesMatchingList andCriteria:(id)criteria;
@end

@interface MPFrameManager (Private)
+(void)loadFrameManagerWithPaths:(id)paths;
@end

