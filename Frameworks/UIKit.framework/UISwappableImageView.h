/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class UIToolbar, _UISwappableImageViewAnimationProxy;

__attribute__((visibility("hidden")))
@interface UISwappableImageView : UIView {
@private
	id _value;
	id _alternate;
	float _scale;
	BOOL _showAlternate;
	BOOL _flipped;
	BOOL _updateImage;
	BOOL _bezel;
	int _bezelStyle;
	int _currentAnimation;
	UIToolbar* _buttonBar;
	int _buttonTag;
	_UISwappableImageViewAnimationProxy* _proxy;
	int _barButtonItemStyle;
	BOOL _didDisableWindowAutorotation;
	id _didFinishTarget;
	SEL _didFinishSelector;
}
-(id)initWithImage:(id)image alternateImage:(id)image2 barStyle:(int)style barButtonItemStyle:(int)style4 tintColor:(id)color bezel:(BOOL)bezel;
-(void)dealloc;
-(void)setBezelStyleForBarStyle:(int)barStyle tintColor:(id)color;
-(void)updateImageIfNeeded;
-(void)showAlternateImage:(BOOL)image;
-(void)setFlipped:(BOOL)flipped;
-(void)animateImage:(float)image withButtonBar:(id)buttonBar withTag:(int)tag target:(id)target didFinishSelector:(SEL)selector;
-(void)animationDidStop:(id)animation finished:(BOOL)finished;
-(void)_willMoveToWindow:(id)window;
-(void)setImage:(id)image;
@end
