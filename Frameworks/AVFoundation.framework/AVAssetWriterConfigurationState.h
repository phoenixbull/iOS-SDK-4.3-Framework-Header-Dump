/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "AVFoundation-Structs.h"

@class AVMediaFileType, NSURL, NSArray;

@interface AVAssetWriterConfigurationState : XXUnknownSuperclass {
@private
	NSURL* _URL;
	AVMediaFileType* _mediaFileType;
	XXStruct_pwHToB _movieFragmentInterval;
	BOOL _shouldOptimizeForNetworkUse;
	NSArray* _metadataItems;
	int _movieTimeScale;
	NSArray* _inputs;
}
@property(copy, nonatomic) NSURL* URL;
@property(copy, nonatomic) AVMediaFileType* mediaFileType;
@property(assign, nonatomic) XXStruct_pwHToB movieFragmentInterval;
@property(assign, nonatomic) BOOL shouldOptimizeForNetworkUse;
@property(copy, nonatomic) NSArray* metadataItems;
@property(assign, nonatomic) int movieTimeScale;
@property(copy, nonatomic) NSArray* inputs;
-(void)dealloc;
@end

