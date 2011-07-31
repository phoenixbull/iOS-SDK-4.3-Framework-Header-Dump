/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray;

@interface SBAppRatingsStarControl : XXUnknownSuperclass {
	NSMutableArray* _stars;
	int _currentIndex;
}
-(id)initWithFrame:(CGRect)frame;
-(void)dealloc;
-(float)firstStarOffset;
-(void)layoutSubviews;
-(void)handleTouches:(id)touches withEvent:(id)event;
-(void)touchesBegan:(id)began withEvent:(id)event;
-(void)touchesMoved:(id)moved withEvent:(id)event;
-(void)touchesEnded:(id)ended withEvent:(id)event;
-(int)currentIndex;
@end

