/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Conference.framework/Conference
 */

#import <XXUnknownSuperclass.h> // Unknown library

@protocol CNFRegWizardControllerDelegate;

@interface CNFRegWizardController : XXUnknownSuperclass {
@private
	id<CNFRegWizardControllerDelegate> _firstRunDelegate;
	id _resignListener;
	id _resumeListener;
	struct {
		unsigned automaticKeyboardWasDisabled : 1;
		unsigned shouldListenForSuspension : 1;
		unsigned canStartNested : 1;
		unsigned canShowSplashScreen : 1;
		unsigned canShowDisabledScreen : 1;
		unsigned reloadOnViewWillAppear : 1;
	} _wizardFlags;
}
@property(assign, nonatomic) id<CNFRegWizardControllerDelegate> firstRunDelegate;
@property(assign, nonatomic) BOOL reloadOnViewWillAppear;
@property(readonly, assign, nonatomic) int currentControllerDisplayStyle;
@property(assign, nonatomic) BOOL canShowDisabledScreen;
@property(assign, nonatomic) BOOL canShowSplashScreen;
@property(assign, nonatomic) BOOL canStartNested;
+(int)_firstRunState;
+(BOOL)shouldShowFirstRunController:(BOOL)controller;
+(BOOL)shouldShowFirstRunController;
+(void)setGlobalAppearanceStyle:(int)style;
+(void)setSupportsAutoRotation:(BOOL)rotation;
-(id)controllerClassesToShow:(BOOL)show;
-(id)controllersToShow:(BOOL)show;
-(id)controllersToShow;
-(id)controllerToShow:(BOOL)show;
-(id)controllerToShow;
-(void)viewDidLoad;
-(void)setupController;
-(id)init;
-(void)dealloc;
-(void)viewWillAppear:(BOOL)view;
-(void)viewDidAppear:(BOOL)view;
-(void)viewWillDisappear:(BOOL)view;
-(void)_startListeningForResignResume;
-(void)_stopListeningForResignResume;
-(void)dismissWithState:(unsigned)state;
-(void)dismiss:(BOOL)dismiss aliased:(BOOL)aliased;
-(void)firstRunController:(id)controller finishedWithState:(unsigned)state;
@end

