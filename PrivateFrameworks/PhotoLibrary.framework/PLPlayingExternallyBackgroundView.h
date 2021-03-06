/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "PhotoLibrary-Structs.h"

@class UIImageView, UILabel;

@interface PLPlayingExternallyBackgroundView : XXUnknownSuperclass {
	UILabel* _titleLabel;
	UILabel* _messageLabel;
	UIImageView* _imageView;
	UIEdgeInsets _edgeInsets;
}
@property(assign, nonatomic) UIEdgeInsets edgeInsets;
-(id)initWithFrame:(CGRect)frame;
-(void)dealloc;
-(void)setTitle:(id)title;
-(void)setMessage:(id)message;
-(void)layoutSubviews;
-(id)_newLabelWithText:(id)text withFont:(id)font;
@end

