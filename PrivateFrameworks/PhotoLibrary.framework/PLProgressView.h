/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "PhotoLibrary-Structs.h"

@class UIImageView, NSNumberFormatter, UILabel;

@interface PLProgressView : XXUnknownSuperclass {
	UIImageView* _backgroundView;
	UILabel* _labelView;
	UIImageView* _progressView;
	UIImageView* _wellView;
	unsigned _didLayout : 1;
	unsigned _didSetPermanantTextOnLabelView : 1;
	NSNumberFormatter* _progressFormatter;
	float _percentComplete;
}
@property(assign, nonatomic) float percentComplete;
-(void)dealloc;
-(void)layoutSubviews;
-(void)updateUIForPublishingAgent:(id)publishingAgent;
-(void)_updateProgressView;
-(void)setLabelText:(id)text;
-(void)setFrame:(CGRect)frame;
@end

