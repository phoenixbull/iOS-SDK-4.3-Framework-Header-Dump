/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIThreePartButton.h"

@class UIImageView, UIImage, UILabel;

__attribute__((visibility("hidden")))
@interface _UIMediaPushButton : UIThreePartButton {
@private
	UIImageView* _icon;
	UIImageView* _selectionMark;
	UILabel* _titleView;
	UIImage* _tableIcon;
	UIImage* _highlightedTableIcon;
}
@property(retain, nonatomic) UIImageView* icon;
@property(retain, nonatomic) UIImageView* selectionMark;
@property(retain, nonatomic) UIImage* tableIcon;
@property(retain, nonatomic) UIImage* highlightedTableIcon;
-(void)setTitle:(id)title;
-(void)_drawImageAndTextPartInRect:(CGRect)rect;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)highlighted;
-(void)setupTextAttributes;
@end

