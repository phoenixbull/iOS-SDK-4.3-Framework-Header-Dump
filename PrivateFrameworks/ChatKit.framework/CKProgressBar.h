/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "ChatKit-Structs.h"

@class UIImageView;

@interface CKProgressBar : XXUnknownSuperclass {
	UIImageView* _well;
	UIImageView* _fill;
	float _progressValue;
}
@property(assign, nonatomic) float progressValue;
+(float)defaultHeight;
+(float)_minFillWidth;
-(id)initWithFrame:(CGRect)frame;
-(void)dealloc;
-(void)layoutSubviews;
-(void)_setupFillFrame;
@end

