/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "CorePDF-Structs.h"
#import "UIPDFSelection.h"

@class UIPDFPage;

@interface UIPDFSelection : XXUnknownSuperclass {
@private
	UIPDFPage* _page;
	CGPDFSelectionRef _cgSelection;
	BOOL _dirty;
	CFStringRef _string;
}
-(id)page;
-(CGAffineTransform)transform;
-(CGRect)bounds;
-(id)string;
-(BOOL)isEmpty;
-(id)containingTextLine;
-(BOOL)isWord;
-(unsigned)numberOfRectangles;
-(void)getBounds:(CGRect*)bounds transform:(CGAffineTransform*)transform index:(unsigned)index;
@end

@interface UIPDFSelection (UIPDFSelectionInternal)
-(id)initWithPage:(id)page cgSelection:(CGPDFSelectionRef)selection;
-(void)dealloc;
-(CGPDFSelectionRef)CGSelection;
-(void)extendToParagraph;
-(id)description;
@end

