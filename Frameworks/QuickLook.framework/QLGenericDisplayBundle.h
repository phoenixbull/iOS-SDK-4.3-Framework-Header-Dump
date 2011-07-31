/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

#import "QLDisplayBundle.h"

@class UILabel, UIView, UIImageView;

@interface QLGenericDisplayBundle : QLDisplayBundle {
	UIView* _containerView;
	UIImageView* _iconView;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
}
-(void)loadView;
-(void)_relayout;
-(void)loadWithHints:(id)hints;
-(id)backgroundColor;
@end

