/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVTimedMetadataGroup.h"
#import "AVFoundation-Structs.h"

@class AVMutableTimedMetadataGroupInternal, NSArray;

@interface AVMutableTimedMetadataGroup : AVTimedMetadataGroup {
	AVMutableTimedMetadataGroupInternal* _mutablePriv;
}
@property(copy) NSArray* items;
@property(assign) XXStruct_yD8eWC timeRange;
-(id)copyWithZone:(NSZone*)zone;
@end

