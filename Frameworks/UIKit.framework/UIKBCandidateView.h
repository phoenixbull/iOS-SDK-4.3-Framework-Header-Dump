/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIKeyboardCandidateList.h"
#import "UIKBCandidateView.h"
#import "UIKBKeyView.h"

@class NSArray, NSObject, UIColor, NSMutableArray;

__attribute__((visibility("hidden")))
@interface UIKBCandidateView : UIKBKeyView <UIKeyboardCandidateList> {
@private
	NSArray* m_candidates;
	NSMutableArray* m_buttons;
	NSObject* m_delegate;
	int m_columns;
	int m_candidatesPerColumn;
	int m_candidatesPerPage;
	int m_current;
	int m_firstShown;
	int m_firstComposition;
	int m_candidateCount;
	CGRect m_symbolRect;
	UIColor* m_textColor;
	CGColorRef m_highlightColor;
	BOOL m_respondsToSelect;
	BOOL m_respondsToAccept;
}
-(id)initWithFrame:(CGRect)frame keyboard:(id)keyboard key:(id)key state:(int)state;
-(void)dealloc;
-(void)updateKeyboard:(id)keyboard key:(id)key;
-(id)candidateList;
-(void)nextCandidatesAction;
-(void)setCandidates:(id)candidates inlineText:(id)text inlineRect:(CGRect)rect maxX:(float)x layout:(BOOL)layout;
-(void)layout;
-(void)setUIKeyboardCandidateListDelegate:(id)delegate;
-(void)showCandidateAtIndex:(unsigned)index;
-(void)showNextCandidate;
-(void)showPreviousCandidate;
-(void)showPageAtIndex:(unsigned)index;
-(void)showNextPage;
-(void)showPreviousPage;
-(id)currentCandidate;
-(unsigned)currentIndex;
-(id)candidateAtIndex:(unsigned)index;
-(void)candidateAcceptedAtIndex:(unsigned)index;
-(unsigned)count;
-(void)configureKeyboard:(id)keyboard;
-(id)hitTest:(CGPoint)test withEvent:(id)event;
@end

@interface UIKBCandidateView (Internal)
-(void)selectCandidate:(id)candidate;
-(void)jumpToCompositions;
@end

