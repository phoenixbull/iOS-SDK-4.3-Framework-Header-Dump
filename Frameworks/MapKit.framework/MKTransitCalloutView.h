/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import "MapKit-Structs.h"
#import "MKAnnotationView.h"
#import "MKOrientable.h"

@class MKRouteStep, UIImage, UIImageView;

__attribute__((visibility("hidden")))
@interface MKTransitCalloutView : MKAnnotationView <MKOrientable> {
@private
	UIImageView* _iconView;
	int _orientation;
}
@property(assign, nonatomic) int _orientation;
@property(retain, nonatomic) UIImage* icon;
@property(readonly, assign, nonatomic) MKRouteStep* step;
+(CGRect)_bubbleFrameForType:(int)type;
+(id)_imageForType:(int)type;
-(void)_updateCalloutOffset;
-(id)initWithStep:(id)step;
-(void)dealloc;
-(int)_annotationViewType;
-(CGRect)_significantBounds;
-(unsigned)_orientationCount;
-(id)rightCalloutAccessoryView;
-(void)_layoutIcon;
-(void)_updateAnchorPoint;
@end

