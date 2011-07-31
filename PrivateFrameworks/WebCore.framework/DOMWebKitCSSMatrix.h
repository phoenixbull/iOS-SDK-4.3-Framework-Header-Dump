/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "DOMObject.h"


__attribute__((visibility("hidden")))
@interface DOMWebKitCSSMatrix : DOMObject {
}
@property(assign) double m44;
@property(assign) double m43;
@property(assign) double m42;
@property(assign) double m41;
@property(assign) double m34;
@property(assign) double m33;
@property(assign) double m32;
@property(assign) double m31;
@property(assign) double m24;
@property(assign) double m23;
@property(assign) double m22;
@property(assign) double m21;
@property(assign) double m14;
@property(assign) double m13;
@property(assign) double m12;
@property(assign) double m11;
@property(assign) double f;
@property(assign) double e;
@property(assign) double d;
@property(assign) double c;
@property(assign) double b;
@property(assign) double a;
-(void)dealloc;
-(void)finalize;
-(void)setMatrixValue:(id)value;
-(id)multiply:(id)multiply;
-(id)inverse;
-(id)translate:(double)translate y:(double)y z:(double)z;
-(id)scale:(double)scale scaleY:(double)y scaleZ:(double)z;
-(id)rotate:(double)rotate rotY:(double)y rotZ:(double)z;
-(id)rotateAxisAngle:(double)angle y:(double)y z:(double)z angle:(double)angle4;
-(id)toString;
@end

