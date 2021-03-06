/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "AVAsynchronousKeyValueLoading.h"
#import "AVAsset.h"
#import "NSCopying.h"

@class AVAssetInternal, NSArray;

@interface AVAsset : XXUnknownSuperclass <NSCopying, AVAsynchronousKeyValueLoading> {
@private
	AVAssetInternal* _assetInternal;
}
@property(readonly, assign, nonatomic) CGSize naturalSize;
@property(readonly, assign, nonatomic) CGAffineTransform preferredTransform;
@property(readonly, assign, nonatomic) float preferredVolume;
@property(readonly, assign, nonatomic) float preferredRate;
@property(readonly, assign, nonatomic) XXStruct_pwHToB duration;
-(id)init;
-(id)copyWithZone:(NSZone*)zone;
-(id)retain;
-(void)release;
-(void)dealloc;
-(id)_weakReference;
-(id)_assetInspector;
-(id)_assetInspectorLoader;
-(id)_comparisonToken;
-(BOOL)isEqual:(id)equal;
-(unsigned)hash;
-(int)statusOfValueForKey:(id)key;
-(int)statusOfValueForKey:(id)key error:(id*)error;
-(void)loadValuesAsynchronouslyForKeys:(id)keys completionHandler:(id)handler;
-(void)cancelLoading;
-(OpaqueFigFormatReaderLoader*)_formatReaderLoader;
-(OpaqueFigFormatReader*)_formatReader;
-(OpaqueFigPlaybackItem*)_playbackItem;
-(CFURLRef)_URL;
-(BOOL)_isReadyForBasicInspection;
-(BOOL)_isStreaming;
-(int)naturalTimeScale;
-(BOOL)providesPreciseDurationAndTiming;
-(id)trackGroups;
-(id)_firstTrackGroupWithMediaType:(id)mediaType;
-(id)audioAlternatesTrackGroup;
-(id)subtitleAlternatesTrackGroup;
-(id)alternateTrackGroups;
-(id)trackReferences;
-(id)lyrics;
-(id)commonMetadata;
-(id)availableMetadataFormats;
-(id)metadataForFormat:(id)format;
-(id)tracks;
-(void)_tracksDidChange;
-(id)trackWithTrackID:(int)trackID;
-(id)tracksWithMediaType:(id)mediaType;
-(id)tracksWithMediaCharacteristic:(id)mediaCharacteristic;
-(id)compatibleTrackForCompositionTrack:(id)compositionTrack;
-(void)_serverHasDied;
-(BOOL)hasProtectedContent;
-(BOOL)isPlayable;
-(BOOL)isExportable;
-(BOOL)isReadable;
-(BOOL)isComposable;
@end

@interface AVAsset (AVAssetChapterInspection)
@property(readonly, assign) NSArray* availableChapterLocales;
-(id)chapterMetadataGroupsWithTitleLocale:(id)titleLocale containingItemsWithCommonKeys:(id)commonKeys;
@end

@interface AVAsset (AVAssetVideoCompositionUtility)
-(int)unusedTrackID;
@end

