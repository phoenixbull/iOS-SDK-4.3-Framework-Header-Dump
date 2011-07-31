/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import "MapKit-Structs.h"
#import "MKStreetViewGeometry.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface MKPanoramaAnnotationGeometry : MKStreetViewGeometry {
@private
	NSArray* _labels;
	unsigned _intersectionNumSides;
	XXStruct_mQP$MA _intersectionColor;
	XXStruct_mQP$MA* _linkColors;
	float _opacity;
	BOOL _linkPressed;
	unsigned _pressedLinkIndex;
	int _lineSize;
	int _colorSize;
	int _lineNumIndices;
	int _labelSize;
	int _arrowSize;
	int _arrowNumIndices;
}
@property(assign, nonatomic) float opacity;
@property(assign, nonatomic) BOOL linkPressed;
@property(assign, nonatomic) unsigned pressedLinkIndex;
-(id)initWithAnnotations:(id)annotations;
-(void)dealloc;
-(void)drawWithLabelCache:(id)labelCache;
@end

