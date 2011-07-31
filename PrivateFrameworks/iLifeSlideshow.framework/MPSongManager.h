/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iLifeSlideshow.framework/iLifeSlideshow
 */

#import "MPSongManager.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableDictionary, NSString, NSRecursiveLock;

@interface MPSongManager : XXUnknownSuperclass {
	NSMutableDictionary* mSongDescriptions;
	NSMutableDictionary* mSongBeats;
	NSString* mSongCacheFilePath;
	NSRecursiveLock* mSongLock;
	void* mDaFunc;
}
+(id)sharedManager;
+(void)releaseSharedManager;
-(id)init;
-(void)dealloc;
-(id)beatsForSongAtPath:(id)path progressCallback:(/*function-pointer*/ void*)callback context:(void*)context;
@end

@interface MPSongManager (Private)
-(id)cachedBeatsForSongAtPath:(id)path;
@end

@interface MPSongManager (Internal)
-(void)storeBeats:(id)beats forPath:(id)path;
@end

