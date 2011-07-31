/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

#import "QuickLook-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UILabel, UIView, UIImageView;

@interface QLErrorLayer : XXUnknownSuperclass {
	UIView* _containerView;
	UIImageView* _iconView;
	UILabel* _mainLabel;
	UILabel* _errorLabel;
}
-(id)initWithFrame:(CGRect)frame;
-(void)_relayout;
-(void)setError:(id)error;
@end

