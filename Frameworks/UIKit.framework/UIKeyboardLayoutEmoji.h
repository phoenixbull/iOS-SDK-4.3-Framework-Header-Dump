/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIKeyboardEmojiController.h"
#import "UIKeyboardLayout.h"

@class UIButton, UIKeyboardEmojiFactory, UIKeyboardEmojiCategoryController, UIKeyboardEmojiScrollView, UIKeyboardEmojiCategoriesControl, UIKeyboardEmojiRecentsController;

__attribute__((visibility("hidden")))
@interface UIKeyboardLayoutEmoji : UIKeyboardLayout <UIKeyboardEmojiController> {
@private
	UIKeyboardEmojiScrollView* _emojiView;
	UIKeyboardEmojiCategoriesControl* _categoriesView;
	UIButton* _globeButton;
	UIButton* _deleteButton;
	CGRect _globeFrame;
	CGRect _deleteFrame;
	CGRect _categoryFrame;
	UIKeyboardEmojiFactory* _emojiFactory;
	UIKeyboardEmojiRecentsController* _recentsController;
	UIKeyboardEmojiCategoryController* _categoryController;
}
@property(readonly, assign) CGRect globeFrame;
@property(readonly, assign) CGRect deleteFrame;
@property(readonly, assign) CGRect categoryFrame;
+(id)emojiLayout;
+(BOOL)isLandscape;
+(id)localizedStringForKey:(id)key;
+(void)emojiKeyboardPreferencesChanged;
-(id)initWithFrame:(CGRect)frame;
-(BOOL)setDefaultsDictionary:(id)dictionary;
-(void)dealloc;
-(void)setFrame:(CGRect)frame;
-(void)drawRect:(CGRect)rect;
-(void)deactivateActiveKeys;
-(void)layoutSubviews;
-(id)defaultsDictionary;
-(id)emojiForCodePoint:(id)codePoint;
-(void)emojiSelected:(id)selected;
-(id)recents;
-(void)setKeyboardDefault;
-(void)globeLongPressGestureRecognized:(id)recognized;
-(void)globeDown;
-(void)globeSwitch;
-(void)deleteBegin;
-(void)deleteEnd;
-(BOOL)shouldShowIndicator;
-(void)categoryChangedNoSounds;
-(void)showKeyboardType:(int)type withAppearance:(int)appearance;
-(void)categoryChanged;
-(void)categoryReselected;
@end

