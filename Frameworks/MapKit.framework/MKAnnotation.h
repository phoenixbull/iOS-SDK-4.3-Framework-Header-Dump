/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import "MapKit-Structs.h"
#import "NSObject.h"


@protocol MKAnnotation <NSObject>
@property(readonly, assign, nonatomic) CADoublePoint coordinate;
@optional
-(id)title;
-(id)subtitle;
-(void)setCoordinate:(CADoublePoint)coordinate;
@end
