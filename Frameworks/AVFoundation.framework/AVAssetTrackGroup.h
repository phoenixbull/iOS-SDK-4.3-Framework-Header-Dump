/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVTrackGroup.h"

@class NSArray;

@interface AVAssetTrackGroup : AVTrackGroup {
@private
	id _assetComparisonToken;
	NSArray* _trackIDs;
}
@property(readonly, assign, nonatomic) NSArray* trackIDs;
-(id)initWithAsset:(id)asset trackIDs:(id)ids;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)equal;
-(unsigned)hash;
-(id)_assetComparisonToken;
@end

