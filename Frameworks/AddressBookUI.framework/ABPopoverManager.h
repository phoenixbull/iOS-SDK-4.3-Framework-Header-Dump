/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

#import "AddressBookUI-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIResponder, UIView, UIActionSheet, UIWindow, UIBarButtonItem, UIPopoverController;
@protocol ABPopoverRepresentDelegate;

@interface ABPopoverManager : XXUnknownSuperclass {
@private
	UIView* _autorotateView;
	UIResponder* _autorotateResponder;
	UIBarButtonItem* _autorotateBarButtonItem;
	unsigned _autorotateDirections;
	UIPopoverController* _autorotatePopoverController;
	UIActionSheet* _autorotateActionSheet;
	id<ABPopoverRepresentDelegate> _representDelegate;
	id _realDelegate;
	BOOL _rotating;
}
@property(retain, nonatomic) UIView* autorotateView;
@property(retain, nonatomic) UIResponder* autorotateResponder;
@property(retain, nonatomic) UIBarButtonItem* autorotateBarButtonItem;
@property(assign, nonatomic) unsigned autorotateDirrections;
@property(retain, nonatomic) UIPopoverController* autorotatePopoverController;
@property(retain, nonatomic) UIActionSheet* autorotateActionSheet;
@property(retain, nonatomic) id realDelegate;
@property(retain, nonatomic) id<ABPopoverRepresentDelegate> representDelegate;
@property(readonly, assign, nonatomic) UIWindow* observedWindow;
+(id)managerForPresenter:(id)presenter;
+(void)removeManagerForPresenter:(id)presenter;
+(BOOL)resignFirstResponderIfNeeded;
+(void)actionSheet:(id)sheet showFromRect:(CGRect)rect inView:(id)view direction:(unsigned)direction animated:(BOOL)animated;
+(void)actionSheet:(id)sheet showFromRect:(CGRect)rect inView:(id)view animated:(BOOL)animated;
+(void)actionSheet:(id)sheet showFromBarButtonItem:(id)barButtonItem animated:(BOOL)animated;
+(void)actionSheet:(id)sheet showFromView:(id)view animated:(BOOL)animated direction:(unsigned)direction autorotate:(BOOL)autorotate;
+(void)actionSheet:(id)sheet showFromView:(id)view animated:(BOOL)animated autorotate:(BOOL)autorotate;
+(void)actionSheet:(id)sheet showFromBarButtonItem:(id)barButtonItem animated:(BOOL)animated autorotate:(BOOL)autorotate;
+(void)actionSheet:(id)sheet dismissWithClickedButtonIndex:(int)clickedButtonIndex animated:(BOOL)animated;
+(void)dismissPopoverForActionSheet:(id)actionSheet;
+(void)popoverController:(id)controller presentPopoverFromRect:(CGRect)rect inView:(id)view permittedArrowDirections:(unsigned)directions animated:(BOOL)animated;
+(void)popoverController:(id)controller presentPopoverFromView:(id)view permittedArrowDirections:(unsigned)directions animated:(BOOL)animated representDelegate:(id)delegate;
+(void)popoverController:(id)controller dismissPopoverAnimated:(BOOL)animated;
+(void)stopAutorotatePresenter:(id)presenter;
-(id)init;
-(void)dealloc;
-(void)keyboardDidShow:(id)keyboard;
-(void)keyboardDidHide:(id)keyboard;
-(void)windowWillRotate:(id)window;
-(void)windowDidRotate:(id)window;
-(void)startObservingRotationOfWindow:(id)window;
-(void)stopObservingRotation;
-(id)delegateOwner;
-(BOOL)autorotates;
-(void)startAutorotatePopoverController:(id)controller showFromView:(id)view permittedArrowDirections:(unsigned)directions representDelegate:(id)delegate;
-(void)revertDelegate;
-(void)stopAutorotate;
-(void)startAutorotateActionSheet:(id)sheet fromView:(id)view;
-(void)startAutorotateActionSheet:(id)sheet fromBarButtonItem:(id)barButtonItem;
-(BOOL)respondsToSelector:(SEL)selector;
-(id)methodSignatureForSelector:(SEL)selector;
-(void)forwardInvocation:(id)invocation;
-(void)popoverControllerDidDismissPopover:(id)popoverController;
-(void)actionSheet:(id)sheet didDismissWithButtonIndex:(int)buttonIndex;
@end

