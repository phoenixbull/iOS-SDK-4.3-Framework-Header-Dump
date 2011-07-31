/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import "MapKit-Structs.h"
#import "MKAnnotation.h"


@protocol MKOverlay <MKAnnotation>
@property(readonly, assign, nonatomic) CADoublePoint coordinate;
@property(readonly, assign, nonatomic) XXStruct_Yvvv9D boundingMapRect;
@optional
-(BOOL)intersectsMapRect:(XXStruct_Yvvv9D)rect;
@end

