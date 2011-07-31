/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIControl.h"

@class UIKeyboardEmoji, UIImageView;

__attribute__((visibility("hidden")))
@interface UIKeyboardEmojiView : UIControl {
@private
	UIKeyboardEmoji* _emoji;
	UIView* _popup;
	UIImageView* _imageView;
}
@property(retain) UIKeyboardEmoji* emoji;
@property(retain) UIView* popup;
@property(retain) UIImageView* imageView;
+(void)recycleEmojiView:(id)view;
+(id)emojiViewForEmoji:(id)emoji withFrame:(CGRect)frame;
-(id)initWithFrame:(CGRect)frame emoji:(id)emoji;
-(void)dealloc;
-(id)createAndInstallKeyPopupView;
-(void)uninstallPopup;
-(void)setEmoji:(id)emoji withFrame:(CGRect)frame;
@end

