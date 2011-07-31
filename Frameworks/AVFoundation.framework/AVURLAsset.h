/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVURLAsset.h"
#import "AVAsset.h"
#import "AVFoundation-Structs.h"

@class AVURLAssetInternal, NSString, AVAssetCache, NSURL;

@interface AVURLAsset : AVAsset {
@private
	AVURLAssetInternal* _asset;
}
@property(readonly, copy, nonatomic) NSURL* URL;
+(id)URLAssetWithURL:(id)url options:(id)options;
-(id)init;
-(id)initWithURL:(id)url options:(id)options;
-(void)dealloc;
-(void)finalize;
-(id)description;
-(id)_assetInspectorLoader;
-(void)_setAssetInspectorLoader:(id)loader;
-(id)_assetInspector;
-(OpaqueFigFormatReader*)_formatReader;
-(id)tracks;
-(void)_tracksDidChange;
-(CFURLRef)_URL;
-(void)cancelLoading;
-(id)lyrics;
@end

@interface AVURLAsset (AVURLAssetCache_Private)
@property(readonly, assign, nonatomic) NSString* cacheKey;
@property(readonly, assign, nonatomic) BOOL shouldMatchDataInCacheByURLWithoutQueryComponent;
@property(readonly, assign, nonatomic) BOOL shouldMatchDataInCacheByURLPathComponentOnly;
@property(readonly, assign, nonatomic) AVAssetCache* assetCache;
@end

@interface AVURLAsset (AVAssetChapterInspection)
-(id)_chapterGroupInfo;
-(id)availableChapterLocales;
-(unsigned)_addChapterMetadataItem:(id)item withDuration:(XXStruct_pwHToB)duration timeRange:(XXStruct_yD8eWC)range toChapters:(id)chapters fromIndex:(unsigned)index;
-(id)chapterMetadataGroupsWithTitleLocale:(id)titleLocale containingItemsWithCommonKeys:(id)commonKeys;
@end

