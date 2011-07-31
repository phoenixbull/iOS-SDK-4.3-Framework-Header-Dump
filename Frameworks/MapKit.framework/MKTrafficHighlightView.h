/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import "MapKit-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSTimer;

__attribute__((visibility("hidden")))
@interface MKTrafficHighlightView : XXUnknownSuperclass {
@private
	XXStruct_Yvvv9D _visibleMapRect;
	float _zoomScale;
	float _screenScale;
	int _zoomLevel;
	unsigned char _tileType;
	NSTimer* _showTimer;
}
-(id)initWithFrame:(CGRect)frame;
-(void)setVisibleMapRect:(XXStruct_Yvvv9D)rect zoomScale:(float)scale zoomLevel:(int)level tileType:(unsigned char)type;
-(XXStruct_Yvvv9D)_mapRectForRect:(CGRect)rect;
-(CGRect)_rectForMapRect:(XXStruct_Yvvv9D)mapRect;
-(void)setNeedsDisplayInTilePath:(XXStruct_j8inqB*)tilePath;
-(void)beginPulsing;
-(void)endPulsing;
-(void)willMoveToWindow:(id)window;
-(void)_show;
-(void)setHidden:(BOOL)hidden;
-(void)drawRect:(CGRect)rect;
-(void)dealloc;
@end

