/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UILabel.h"

@class UITextRenderingAttributes;

__attribute__((visibility("hidden")))
@interface UITabBarButtonLabel : UILabel {
@private
	float _boundsWidth;
	UITextRenderingAttributes* _attributes;
}
-(void)dealloc;
-(id)_attributes;
-(void)sizeToFitBounds:(CGRect)fitBounds;
@end

