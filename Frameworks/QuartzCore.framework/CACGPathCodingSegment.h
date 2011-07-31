/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import "QuartzCore-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "NSCoding.h"


__attribute__((visibility("hidden")))
@interface CACGPathCodingSegment : XXUnknownSuperclass <NSCoding> {
@private
	int _type;
	CGPoint _points[3];
}
-(id)initWithCGPathElement:(const CGPathElement*)cgpathElement;
-(void)addToCGPath:(CGPathRef)cgpath;
-(void)encodeWithCoder:(id)coder;
-(id)initWithCoder:(id)coder;
@end

