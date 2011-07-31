/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import "ABPersonViewControllerDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class EKParticipant;

__attribute__((visibility("hidden")))
@interface EKParticipantViewController : XXUnknownSuperclass <ABPersonViewControllerDelegate> {
@private
	EKParticipant* _participant;
}
-(id)initWithParticipant:(id)participant;
-(void)dealloc;
-(void)setParticipant:(id)participant;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;
-(BOOL)personViewController:(id)controller shouldPerformDefaultActionForPerson:(void*)person property:(int)property identifier:(int)identifier;
@end

