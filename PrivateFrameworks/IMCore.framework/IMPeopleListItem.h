/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

#import "IMCore-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "IMDirectlyObservableObjectObserver.h"
#import "NSCopying.h"

@class NSDate, NSAttributedString, IMBuddyListPresence, IMPeopleListGroup, NSMutableAttributedString, NSString, IMHandle;

@interface IMPeopleListItem : XXUnknownSuperclass <NSCopying, IMDirectlyObservableObjectObserver> {
	id _delegate;
	IMBuddyListPresence* _presence;
	NSDate* _whenStatusChanged;
	IMPeopleListGroup* _group;
	NSAttributedString* _attributedStatusMessage;
	NSString* _statusMessage;
	NSString* _displayName;
	NSDate* _transitionStartTime;
	float _currentTransitionTime;
	unsigned _currentStatus;
	unsigned _previousStatus;
	int _minutesIdle;
	BOOL _inTransition;
	BOOL _isGroup;
}
@property(readonly, assign, nonatomic) unsigned sortOrder;
@property(readonly, assign, nonatomic) BOOL isPulseTransition;
@property(readonly, assign, nonatomic) BOOL inStatusTransition;
@property(readonly, assign, nonatomic) BOOL canTransition;
@property(retain, nonatomic) IMBuddyListPresence* buddyListPresence;
@property(readonly, assign, nonatomic) IMHandle* imHandle;
@property(retain, nonatomic) IMPeopleListGroup* peopleListGroup;
@property(readonly, assign, nonatomic) NSString* group;
@property(readonly, assign, nonatomic) BOOL isIMHandle;
@property(readonly, assign, nonatomic) BOOL isGroup;
@property(readonly, assign, nonatomic) double timeSinceStatusChanged;
@property(readonly, assign, nonatomic) unsigned effectiveStatus;
@property(readonly, assign, nonatomic) unsigned previousStatus;
@property(readonly, assign, nonatomic) unsigned currentStatus;
@property(readonly, assign, nonatomic) NSAttributedString* displayStatusMessage;
@property(readonly, assign, nonatomic) NSMutableAttributedString* displayName;
@property(assign, nonatomic) id delegate;
+(id)notifications;
+(id)selectors;
+(id)displayNameForString:(id)string;
+(id)displayStatusMessageForString:(id)string;
-(id)initWithBuddyListPresence:(id)buddyListPresence inGroup:(id)group;
-(id)initAsGroup:(id)group;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)zone;
-(BOOL)isEqual:(id)equal;
-(id)description;
-(void)_postNotificationNamed:(id)named userInfo:(id)info;
-(void)_observePresence:(id)presence;
-(void)_unobservePresence:(id)presence;
-(void)_presenceInfoChanged:(id)changed;
-(void)_presenceSortOrderChanged:(id)changed;
-(void)_presenceCapabilitiesChanged:(id)changed;
-(void)_presenceStatusChanged:(id)changed;
-(void)_presencePictureChanged:(id)changed;
-(void)_presenceGroupsChanged:(id)changed;
-(void)_presenceMobileChanged:(id)changed;
-(void)_presenceCertsChanged:(id)changed;
-(void)objectDidPostDirectNotification:(id)object;
-(void)_cacheCurrentState;
-(BOOL)_currentInfoDiffersFromCache;
-(BOOL)_currentStatusDiffersFromCache;
-(id)tooltipString;
-(void)_setWhenStatusChanged:(id)changed;
-(BOOL)_updateCurrentStatus;
-(void)_startAnimationPusling:(BOOL)pusling;
-(void)_startStatusTransition;
-(void)_startPulse;
-(void)startPulse;
-(void)stopTransition;
-(float)transitionPhase:(float)phase;
-(float)transitionAlphaTo:(float)to from:(float)from throbs:(unsigned)throbs;
-(int)_compareIMHandlesWith:(id)with withSortParameters:(XXStruct_xDJerA*)sortParameters;
-(int)compare:(id)compare withSortParameters:(XXStruct_xDJerA*)sortParameters;
-(void)clearAttributedStatusMessageCache;
@end

