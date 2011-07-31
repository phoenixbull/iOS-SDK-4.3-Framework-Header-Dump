/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "AVPlayer.h"

@class AVPlayerInternal, AVPlayerItem, NSError, NSArray;

@interface AVPlayer : XXUnknownSuperclass {
@private
	AVPlayerInternal* _player;
}
@property(readonly, assign, nonatomic) int status;
@property(readonly, assign, nonatomic) NSError* error;
@property(assign, nonatomic, getter=isClosedCaptionDisplayEnabled) BOOL closedCaptionDisplayEnabled;
@property(assign, nonatomic) int actionAtItemEnd;
@property(assign, nonatomic) float rate;
@property(readonly, assign, nonatomic) AVPlayerItem* currentItem;
+(void)initialize;
+(id)playerWithURL:(id)url;
+(id)playerWithPlayerItem:(id)playerItem;
+(BOOL)automaticallyNotifiesObserversOfCurrentItem;
+(BOOL)automaticallyNotifiesObserversOfRate;
+(id)keyPathsForValuesAffectingRate;
+(BOOL)automaticallyNotifiesObserversOfActionAtItemEnd;
+(id)keyPathsForValuesAffectingActionAtItemEnd;
+(BOOL)automaticallyNotifiesObserversOfClosedCaptionDisplayEnabled;
+(id)keyPathsForValuesAffectingClosedCaptionDisplayEnabled;
+(BOOL)automaticallyNotifiesObserversOfSubtitleDisplayEnabled;
+(id)keyPathsForValuesAffectingSubtitleDisplayEnabled;
-(id)initWithPlayerItem:(id)playerItem;
-(id)initWithURL:(id)url;
-(id)init;
-(id)initWithDispatchQueue:(dispatch_queue_s*)dispatchQueue;
-(id)retain;
-(void)release;
-(void)dealloc;
-(void)finalize;
-(id)_weakReference;
-(dispatch_queue_s*)dispatchQueue;
-(dispatch_queue_s*)_stateDispatchQueue;
-(OpaqueFigPlayer*)_figPlayer;
-(int)_playerType;
-(id)_propertyStorage;
-(id)_cachedValueForKey:(id)key;
-(void)_setCachedValue:(id)value forKey:(id)key;
-(void)_willAccessKVOForKey:(id)key;
-(void)_didAccessKVOForKey:(id)key;
-(void)willChangeValueForKey:(id)key;
-(void)didChangeValueForKey:(id)key;
-(void)addObserver:(id)observer forKeyPath:(id)keyPath options:(unsigned)options context:(void*)context;
-(void)_changeStatusToFailedWithError:(id)error;
-(id)_currentItem;
-(void)_setCurrentItem:(id)item;
-(void)_advanceCurrentItemToItemContainingFigPlaybackItem:(OpaqueFigPlaybackItem*)itemContainingFigPlaybackItem;
-(BOOL)waitsUntilItemsAreReadyForInspectionBeforeMakingEligibleForPlayback;
-(void)setWaitsUntilItemsAreReadyForInspectionBeforeMakingEligibleForPlayback:(BOOL)playback;
-(BOOL)_insertPlaybackItemOfItem:(id)item inPlayerQueueAfterPlaybackItemOfItem:(id)item2;
-(void)_preparePlaybackItemOfItemForEnqueueing:(id)enqueueing withCompletionHandler:(id)completionHandler;
-(void)prepareItem:(id)item withCompletionHandler:(id)completionHandler;
-(BOOL)_insertItem:(id)item afterItem:(id)item2;
-(BOOL)_attachItem:(id)item andPerformOperation:(int)operation withObject:(id)object;
-(BOOL)_removeAnItem:(id)item;
-(BOOL)_removeItem:(id)item;
-(void)_enumerateItemsUsingBlock:(id)block;
-(id)_items;
-(void)_removeAllItems;
-(float)_rate;
-(XXStruct_pwHToB)currentTime;
-(void)seekToTime:(XXStruct_pwHToB)time;
-(void)seekToTime:(XXStruct_pwHToB)time toleranceBefore:(XXStruct_pwHToB)before toleranceAfter:(XXStruct_pwHToB)after;
-(int)_defaultActionAtItemEnd;
-(int)_actionAtItemEnd;
-(void)_setActionAtItemEnd:(int)itemEnd allowingAdvance:(BOOL)advance;
-(BOOL)_isClosedCaptionDisplayEnabled;
-(BOOL)_isSubtitleDisplayEnabled;
-(BOOL)isSubtitleDisplayEnabled;
-(void)setSubtitleDisplayEnabled:(BOOL)enabled;
-(void)play;
-(void)pause;
-(void)replaceCurrentItemWithPlayerItem:(id)playerItem;
-(id)addPeriodicTimeObserverForInterval:(XXStruct_pwHToB)interval queue:(dispatch_queue_s*)queue usingBlock:(id)block;
-(id)addBoundaryTimeObserverForTimes:(id)times queue:(dispatch_queue_s*)queue usingBlock:(id)block;
-(void)removeTimeObserver:(id)observer;
-(void)_setLayer:(id)layer;
-(id)_playerLayers;
-(void)_attachLayerToFigPlayer;
-(void)_removeLayer:(id)layer;
-(void)_addLayer:(id)layer;
-(void)_beginInterruption;
-(id)_fpNotificationNames;
-(void)_addFPListeners;
-(void)_removeFPListeners;
-(void)_checkDefaultsWriteForPerformanceLogging;
-(BOOL)_shouldLogPerformanceData;
-(void)_logPerformanceDataForPreviousItem;
-(void)_logPerformanceDataForCurrentItem;
@end

@interface AVPlayer (AVPlayerAudioPlaybackRateLimits)
@property(assign, nonatomic) float maxRateForAudioPlayback;
@property(assign, nonatomic) float minRateForAudioPlayback;
@property(readonly, assign, nonatomic, getter=isAudioPlaybackEnabledAtAllRates) BOOL audioPlaybackEnabledAtAllRates;
-(void)removeAudioPlaybackRateLimits;
@end

@interface AVPlayer (AVPlayerProtectedContentPrivate)
@property(readonly, assign, nonatomic) int _externalProtectionStatus;
@property(copy, nonatomic, setter=_setDisplaysUsedForPlayback:) NSArray* _displaysUsedForPlayback;
-(id)_playbackDisplaysForFigPlayer;
@end

