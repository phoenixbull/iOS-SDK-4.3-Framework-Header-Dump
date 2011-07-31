/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import "CPVisitor.h"
#import <XXUnknownSuperclass.h> // Unknown library


@interface CPGenericVisitor : XXUnknownSuperclass <CPVisitor> {
}
-(void)visitChunk:(id)chunk;
-(void)visitShape:(id)shape;
-(void)visitImage:(id)image;
-(void)visitCompoundGraphic:(id)graphic;
-(void)visitPage:(id)page;
-(void)visitRegion:(id)region;
-(void)visitTextLine:(id)line;
-(void)visitZone:(id)zone;
-(void)visitRotation:(id)rotation;
-(void)visitBody:(id)body;
-(void)visitParagraph:(id)paragraph;
-(void)visitLayoutArea:(id)area;
-(void)visitColumn:(id)column;
-(void)visitTextBox:(id)box;
-(void)visitImageRegion:(id)region;
-(void)visitShapeRegion:(id)region;
@end

