/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class NSMutableArray, NSArray, InlineCandidateCell;

__attribute__((visibility("hidden")))
@interface UIInlineCandidateTextView : UIView {
@private
	int m_type;
	int m_edgeType;
	BOOL m_animating;
	NSMutableArray* _candidateCellArray;
	NSArray* _candidates;
	id _target;
	SEL _action;
	unsigned _selectedItem;
	InlineCandidateCell* _currentlyPushedItem;
	BOOL _showingArrow;
	BOOL _arrowHighlighted;
	BOOL _phraseEditable;
}
-(id)initWithFrame:(CGRect)frame candidates:(id)candidates type:(int)type maxScreenWidth:(float)width;
-(void)dealloc;
-(int)edgeType;
-(int)textEffectsVisibilityLevel;
-(void)setEdgeType:(int)type;
-(void)setAnimating:(BOOL)animating;
-(void)_cellSelected:(id)selected;
-(void)setTarget:(id)target action:(SEL)action;
-(float)_layoutCandidates:(id)candidates maxCount:(int)count height:(float)height maxScreenWidth:(float)width;
-(unsigned)numberOfShownItems;
-(BOOL)_arrowHighlighted;
-(void)showHighlightedArrow;
-(void)setSelectedItem:(unsigned)item;
-(unsigned)selectedItem;
-(void)drawRect:(CGRect)rect;
-(id)findCell:(CGPoint)cell;
-(void)redrawArrow;
-(void)mouseDown:(GSEventRef)down;
-(void)mouseDragged:(GSEventRef)dragged;
-(void)_mouseUp:(GSEventRef)up wasCancelled:(BOOL)cancelled;
-(void)mouseUp:(GSEventRef)up;
-(CGRect)_calculateRectForExpandedHitRegion;
-(BOOL)pointInside:(CGPoint)inside forEvent:(GSEventRef)event;
-(BOOL)pointInside:(CGPoint)inside withEvent:(id)event;
-(id)hitTest:(CGPoint)test withEvent:(id)event;
-(void)touchesBegan:(id)began withEvent:(id)event;
-(void)touchesMoved:(id)moved withEvent:(id)event;
-(void)touchesEnded:(id)ended withEvent:(id)event;
-(void)touchesCancelled:(id)cancelled withEvent:(id)event;
-(BOOL)needsWebDocumentViewEventsDirectly;
@end

