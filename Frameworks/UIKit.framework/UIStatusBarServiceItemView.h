/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIStatusBarItemView.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface UIStatusBarServiceItemView : UIStatusBarItemView {
@private
	NSString* _pathToBlackServiceImage;
	NSString* _pathToSilverServiceImage;
	NSString* _serviceString;
	int _contentType;
	BOOL _loopingNecessaryForString;
	BOOL _usingStringForBlack;
	BOOL _usingStringForSilver;
	BOOL _loopNowIfNecessary;
	float _letterSpacing;
}
-(float)standardPadding;
-(BOOL)updateForNewData:(XXStruct_LyCp7D*)newData actions:(int)actions;
-(float)updateContentsAndWidth;
-(id)contentsImageForStyle:(int)style;
-(BOOL)usesSmallerTextFont;
-(id)textColorForStyle:(int)style;
-(void)setVisible:(BOOL)visible frame:(CGRect)frame duration:(double)duration;
-(BOOL)animatesDataChange;
-(BOOL)animatesFrameChange;
-(void)performPendedActions;
-(void)_loopAnimationDidStop:(id)_loopAnimation finished:(id)finished context:(void*)context;
-(BOOL)_loopingNecessary;
-(void)_setUsingString:(BOOL)string;
-(void)dealloc;
@end

