/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class NSArray, UIImageView;

__attribute__((visibility("hidden")))
@interface UIMovieScrubberEditingView : UIView {
@private
	UIImageView* _leftImageView;
	UIImageView* _middleImageView;
	UIImageView* _rightImageView;
	NSArray* _activeImages;
	NSArray* _inactiveImages;
	unsigned _isActive : 1;
	unsigned _centerHandleEnabled : 1;
}
@property(assign, nonatomic, getter=isEditing) BOOL editing;
-(id)initWithFrame:(CGRect)frame;
-(void)dealloc;
-(void)setCenterHandleEnabled:(BOOL)enabled;
-(BOOL)pointInsideLeftHandle:(CGPoint)handle;
-(BOOL)pointInsideRightHandle:(CGPoint)handle;
-(BOOL)pointInsideCenterHandle:(CGPoint)handle;
-(int)handleForPoint:(CGPoint)point hitOffset:(float*)offset;
-(CGRect)leftHandleBounds;
-(CGRect)leftHandleFrame;
-(CGRect)rightHandleBounds;
-(CGRect)rightHandleFrame;
-(void)bounce;
-(float)_bounceValueForFraction:(float)fraction;
@end

