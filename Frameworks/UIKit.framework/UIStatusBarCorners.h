/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"


@interface UIStatusBarCorners : UIView {
	int _cornerStyle;
}
-(id)initForOrientation:(int)orientation alignment:(int)alignment style:(int)style;
-(int)cornerStyle;
-(id)_imageForCorner:(int)corner withStyle:(int)style;
-(void)_addCornersForAlignment:(int)alignment style:(int)style;
@end

