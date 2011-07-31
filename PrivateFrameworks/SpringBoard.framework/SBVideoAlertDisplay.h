/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "SBSlidingAlertDisplay.h"
#import "ABPredicateDelegate.h"

@class NSString;

@interface SBVideoAlertDisplay : SBSlidingAlertDisplay <ABPredicateDelegate> {
	NSString* _contactDisplayName;
	BOOL _answered;
	unsigned _isAccepting;
	BOOL _wasToldToStopRinging;
	BOOL _isStandardRinging;
	BOOL _isCallWaitingRinging;
	BOOL _pendingRing;
}
+(id)newTopBarForInstance:(id)instance;
+(id)newBottomLockBarForDisplay:(id)display;
+(id)newBottomBarForInstance:(id)instance;
-(BOOL)predicateShouldContinue:(id)predicate;
-(BOOL)predicateShouldContinue:(id)predicate afterFindingRecord:(void*)record;
-(void)_updateDisplayControllerForOrientation:(int)orientation;
-(id)initWithFrame:(CGRect)frame;
-(void)layoutForInterfaceOrientation:(int)interfaceOrientation;
-(void)updateImageFromPerson:(void*)person;
-(void)ringerChanged;
-(void)_ringIfNecessary;
-(void)updateRingtone;
-(BOOL)_shouldAutoAnswerConference;
-(void)alertDisplayWillBecomeVisible;
-(void)setAlert:(id)alert;
-(void)alertDisplayBecameVisible;
-(void)finishedAnimatingIn;
-(BOOL)showsDesktopImage;
-(void)setupMissedVC;
-(void)decline;
-(void)dismissWithAnimations;
-(void)dismiss;
-(void)inviterCanceledConference;
-(void)accept;
-(void)lockBarUnlocked:(id)unlocked;
-(void)endWhileConnecting;
-(void)checkForStatusChange;
-(BOOL)shouldRingOrVibrate;
-(void)ringOrVibrate;
-(void)stopRingingOrVibrating;
-(id)contactDisplayName;
-(void)setContactDisplayName:(id)name;
-(void)handleVolumeEvent:(GSEventRef)event;
-(BOOL)wasToldToStopRinging;
-(void)dealloc;
@end
