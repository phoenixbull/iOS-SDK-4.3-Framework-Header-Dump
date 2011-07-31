/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/GameKit.framework/GameKit
 */

#import "GKBackgroundView.h"

@class NSArray, UIImage;

@interface GKImageBackgroundView : GKBackgroundView {
	NSArray* _backgroundTiles;
}
@property(retain, nonatomic) NSArray* backgroundTiles;
@property(readonly, retain, nonatomic) UIImage* backgroundImage;
-(void)dealloc;
-(void)layoutSubviews;
@end

