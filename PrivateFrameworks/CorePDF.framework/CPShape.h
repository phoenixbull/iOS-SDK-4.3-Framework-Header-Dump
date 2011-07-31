/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import "CorePDF-Structs.h"
#import "CPDisposable.h"
#import "CPGraphicObject.h"
#import "CPShape.h"

@class CPImage;

@interface CPShape : CPGraphicObject <CPDisposable> {
	unsigned pdfObjectID;
	CGPathRef path;
	BOOL isUprightRectangle;
	int windingRule;
	float lineWidth;
	CGColorRef fillColor;
	CGColorRef strokeColor;
	CPImage* fillPattern;
	CPImage* strokePattern;
}
-(id)init;
-(void)dispose;
-(void)finalize;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)zone;
-(CGRect)bounds;
-(void)recomputeBounds;
-(unsigned)pdfObjectID;
-(void)setPdfObjectID:(unsigned)anId;
-(CGPathRef)path;
-(void)setPath:(CGPathRef)path;
-(CGRect)renderedBounds;
-(void)recomputeRenderedBounds;
-(CGRect)innerBounds;
-(BOOL)isUprightRectangle;
-(id)attributes;
-(void)accept:(id)accept;
-(long)zOrder;
-(int)windingRule;
-(void)setWindingRule:(int)rule;
-(CGColorRef)fillColor;
-(void)setFillColor:(CGColorRef)color;
-(id)fillPattern;
-(void)setFillPattern:(id)pattern;
-(BOOL)hasFill;
-(CGColorRef)strokeColor;
-(void)setStrokeColor:(CGColorRef)color;
-(id)strokePattern;
-(void)setStrokePattern:(id)pattern;
-(BOOL)hasStroke;
-(float)lineWidth;
-(void)setLineWidth:(float)width;
-(BOOL)hasSamePathAs:(id)as;
-(BOOL)isStrokeFor:(id)aFor;
-(BOOL)isVisible;
-(BOOL)canCombineWith:(id)with;
-(void)addShape:(id)shape;
-(id)string;
-(void)makeLineFromVertex:(CGPoint)vertex toVertex:(CGPoint)vertex2;
-(unsigned)pathElementCount;
@end

@interface CPShape (Additions)
-(id)initWithPDFShape:(CPPDFShape*)pdfshape;
@end

