/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "iTunesStoreUI-Structs.h"

@class UIImage, UIBezierPath, UIColor;

@interface SUGridTableViewCellBackgroundView : XXUnknownSuperclass {
	UIColor* _backgroundColor;
	int _borderedEdges;
	UIImage* _borderImage;
	UIBezierPath* _bottomCornersPath;
	UIBezierPath* _topCornersPath;
}
@property(assign, nonatomic) int borderedEdges;
@property(retain, nonatomic) UIImage* borderImage;
-(void)dealloc;
-(void)drawInteriorBordersWithRect:(CGRect)rect;
-(id)backgroundColor;
-(void)drawRect:(CGRect)rect;
-(void)setBackgroundColor:(id)color;
-(id)_bottomCornersPath;
-(void)_resetCachedPaths;
-(id)_topCornersPath;
@end

