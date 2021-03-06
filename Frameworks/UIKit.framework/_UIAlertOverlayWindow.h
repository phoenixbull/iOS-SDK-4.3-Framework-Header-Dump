/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIWindow.h"


__attribute__((visibility("hidden")))
@interface _UIAlertOverlayWindow : UIWindow {
@private
	BOOL _shouldDeferDisplay;
}
@property(assign, nonatomic) BOOL shouldDeferDisplay;
+(CGRect)constrainFrameToScreen:(CGRect)screen;
-(void)_handleMouseUp:(GSEventRef)up;
-(BOOL)_shouldUseKeyWindowStack;
-(id)representation;
-(BOOL)isInternalWindow;
-(void)setContentScaleFactor:(float)factor;
-(float)_contentScaleFactor;
@end

