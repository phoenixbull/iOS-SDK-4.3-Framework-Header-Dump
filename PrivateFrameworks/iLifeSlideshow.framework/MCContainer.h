/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iLifeSlideshow.framework/iLifeSlideshow
 */

#import "MCObject.h"

@class NSSet, NSLock, MCPlug, NSMutableSet, MCAudioPlaylist;

@interface MCContainer : MCObject {
	MCAudioPlaylist* mAudioPlaylist;
	NSMutableSet* mReferencingPlugs;
	NSLock* mReferencingPlugsLock;
	int mSpecialRetainCount;
}
@property(readonly, assign) MCAudioPlaylist* audioPlaylist;
@property(readonly, assign) NSSet* referencingPlugs;
@property(readonly, assign) MCPlug* superplug;
@property(readonly, assign) unsigned numberOfReferencingPlugs;
@property(readonly, assign) MCAudioPlaylist* audioPlaylistCreateIfNeeded;
-(id)init;
-(id)initWithImprint:(id)imprint andMontage:(id)montage;
-(void)demolish;
-(id)imprint;
-(void)referenceByPlug:(id)plug;
-(void)unreferenceByPlug:(id)plug;
-(id)specialRetain;
-(void)specialRelease;
@end

