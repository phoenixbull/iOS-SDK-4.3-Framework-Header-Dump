/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "OADPathElement.h"


__attribute__((visibility("hidden")))
@interface OADAngleArcPathElement : OADPathElement {
@private
	OADAdjustPoint mCenter;
	OADAdjustPoint mSemiaxes;
	OADAdjustCoord mStartAngle;
	OADAdjustCoord mAngleLength;
	BOOL mConnectedToPrevious;
}
-(id)initWithCenter:(OADAdjustPoint)center semiaxes:(OADAdjustPoint)semiaxes startAngle:(OADAdjustCoord)angle angleLength:(OADAdjustCoord)length connectedToPrevious:(BOOL)previous;
-(OADAdjustPoint)center;
-(OADAdjustPoint)semiaxes;
-(OADAdjustCoord)startAngle;
-(OADAdjustCoord)angleLength;
-(BOOL)connectedToPrevious;
@end

