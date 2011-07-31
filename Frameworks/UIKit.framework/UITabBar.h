/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UITabBar.h"
#import "UIView.h"

@class UITabBarItem, NSArray;
@protocol UITabBarDelegate;

@interface UITabBar : UIView {
@private
	UIView* _customizeView;
	id<UITabBarDelegate> _delegate;
	NSArray* _items;
	UITabBarItem* _selectedItem;
	NSArray* _customizationItems;
	struct {
		unsigned _firstTouchForView : 1;
		unsigned _isTap : 1;
		unsigned _isWarped : 1;
		unsigned _isDelayed : 1;
		unsigned _sentTouchesEnded : 1;
	} _tabBarFlags;
	NSArray* _buttonItems;
	CFArrayRef _hiddenItems;
	id _appearance;
}
@property(assign, nonatomic) id<UITabBarDelegate> delegate;
@property(assign, nonatomic) UITabBarItem* selectedItem;
@property(copy, nonatomic) NSArray* items;
-(id)initWithCoder:(id)coder;
-(void)_populateArchivedSubviews:(id)subviews;
-(void)encodeWithCoder:(id)coder;
-(void)dealloc;
-(BOOL)isLocked;
-(void)setLocked:(BOOL)locked;
-(void)_sendAction:(id)action withEvent:(id)event;
-(void)_finishSetItems:(id)items finished:(id)finished context:(void*)context;
-(void)setItems:(id)items animated:(BOOL)animated;
-(CGSize)sizeThatFits:(CGSize)fits;
-(void)setBounds:(CGRect)bounds;
-(void)layoutSubviews;
-(void)beginCustomizingItems:(id)items;
-(BOOL)endCustomizingAnimated:(BOOL)animated;
-(BOOL)isCustomizing;
@end

@interface UITabBar (SynthEvents)
-(BOOL)_isHidden:(id)hidden;
@end

@interface UITabBar (Static)
-(void)_buttonDown:(id)down;
-(void)_buttonDownDelayed:(id)delayed;
-(void)_buttonUp:(id)up;
-(void)_buttonCancel:(id)cancel;
-(void)_adjustButtonSelection:(id)selection;
-(void)_dismissCustomizeSheet:(BOOL)sheet;
-(void)_customizeDoneButtonAction:(id)action;
-(void)_finishCustomizeAnimation:(id)animation;
-(void)_customizeWithAvailableItems:(id)availableItems;
-(void)_configureTabBarReplacingItem:(id)item withNewItem:(id)newItem dragging:(BOOL)dragging swapping:(BOOL)swapping;
-(void)_positionTabBarButtons:(id)buttons ignoringItem:(id)item;
-(id)hitTest:(CGPoint)test forEvent:(GSEventRef)event;
@end

@interface UITabBar (UITabBarInternal)
+(float)_buttonGap;
-(void)_alertWillShow:(BOOL)_alert duration:(float)duration;
-(void)_alertDidHide;
@end

@interface UITabBar (UITabBarPrivate)
+(float)defaultHeightForBarSize:(int)barSize;
-(void)_tabBarFinishedAnimating;
-(void)dismissCustomizeSheet:(BOOL)sheet;
-(id)hitTest:(CGPoint)test withEvent:(id)event;
-(void)touchesBegan:(id)began withEvent:(id)event;
-(void)touchesMoved:(id)moved withEvent:(id)event;
-(void)touchesEnded:(id)ended withEvent:(id)event;
-(void)touchesCancelled:(id)cancelled withEvent:(id)event;
-(void)setBadgeValue:(id)value forButton:(int)button;
-(void)setBadgeGlyph:(id)glyph forButton:(int)button;
-(void)setBadgeAnimated:(BOOL)animated forButton:(int)button;
-(BOOL)onStateForButton:(int)button;
-(void)setOnStateForButton:(BOOL)button forButton:(int)button2;
-(void)setFrame:(CGRect)frame;
-(void)drawRect:(CGRect)rect;
-(id)buttonItems;
-(void)setButtonItems:(id)items;
@end

@interface UITabBar (PrivateCustomizationSPI)
-(id)_appearance;
-(void)_setBackgroundImage:(id)image;
-(void)_setSelectionIndicatorImage:(id)image;
-(void)_setLabelFont:(id)font;
-(void)_setLabelTextColor:(id)color selectedTextColor:(id)color2;
-(void)_setLabelShadowColor:(id)color;
-(void)_setLabelShadowOffset:(CGSize)offset;
@end

@interface UITabBar (UIKitAccessibilityInterfaceBuilderSupport)
-(BOOL)isElementAccessibilityExposedToInterfaceBuilder;
@end

