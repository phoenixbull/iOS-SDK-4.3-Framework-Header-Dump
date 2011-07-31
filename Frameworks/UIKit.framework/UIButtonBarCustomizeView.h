/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class NSMutableArray, UIToolbar, UIImageView, NSArray;

__attribute__((visibility("hidden")))
@interface UIButtonBarCustomizeView : UIView {
@private
	UIToolbar* _buttonBar;
	NSArray* _availableButtons;
	NSArray* _currentButtons;
	NSMutableArray* _fixedButtons;
	UIView* _draggingView;
	UIImageView* _ghostView;
	UIImageView* _replacementGlow;
	UIView* _replaceButton;
	CGPoint _startPoint;
}
-(void)dealloc;
-(void)setButtonBar:(id)bar currentButtons:(id)buttons availableButtons:(id)buttons3;
-(void)layoutSubviews;
-(void)adjustDragImage:(GSEventRef)image;
-(void)mouseDown:(GSEventRef)down;
-(id)buttonAtEvent:(GSEventRef)event;
-(void)mouseDragged:(GSEventRef)dragged;
-(void)mouseUp:(GSEventRef)up;
-(BOOL)canHandleSwipes;
-(void)buttonBarMouseDown:(GSEventRef)down;
-(void)buttonBarMouseDragged:(GSEventRef)dragged;
-(void)buttonBarMouseUp:(GSEventRef)up;
-(void)_finishCustomizeMouseUpChangeAnimation:(id)animation finished:(id)finished context:(id)context;
@end

