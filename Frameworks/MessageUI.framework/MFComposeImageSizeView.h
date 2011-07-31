/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

#import "MFComposeHeaderView.h"
#import "MessageUI-Structs.h"

@class UISegmentedControl;

@interface MFComposeImageSizeView : MFComposeHeaderView {
	UISegmentedControl* _segmentedControl;
}
-(id)initWithFrame:(CGRect)frame;
-(void)dealloc;
-(void)layoutSubviews;
-(unsigned long)_segmentIndexForScale:(int)scale;
-(void)setSizeDescription:(id)description forScale:(int)scale;
-(void)setScale:(int)scale;
-(void)segmentedControlChanged;
@end
