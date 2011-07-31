/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "DOMHTMLElement.h"
#import "WebCore-Structs.h"
#import "DOMHTMLTableElement.h"

@class DOMHTMLCollection, NSString, DOMHTMLTableCaptionElement, DOMHTMLTableSectionElement;

__attribute__((visibility("hidden")))
@interface DOMHTMLTableElement : DOMHTMLElement {
}
@property(copy) NSString* width;
@property(copy) NSString* summary;
@property(copy) NSString* rules;
@property(copy) NSString* frameBorders;
@property(copy) NSString* cellSpacing;
@property(copy) NSString* cellPadding;
@property(copy) NSString* border;
@property(copy) NSString* bgColor;
@property(copy) NSString* align;
@property(readonly, retain) DOMHTMLCollection* tBodies;
@property(readonly, retain) DOMHTMLCollection* rows;
@property(retain) DOMHTMLTableSectionElement* tFoot;
@property(retain) DOMHTMLTableSectionElement* tHead;
@property(retain) DOMHTMLTableCaptionElement* caption;
-(id)createTHead;
-(void)deleteTHead;
-(id)createTFoot;
-(void)deleteTFoot;
-(id)createCaption;
-(void)deleteCaption;
-(id)insertRow:(int)row;
-(void)deleteRow:(int)row;
@end

@interface DOMHTMLTableElement (DOMUIKitComplexityExtensions)
-(int)structuralComplexityContribution;
@end

