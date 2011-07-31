/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UITextSelectingContainer.h"
#import "UITextInputTraits_Private.h"
#import "UITextInput.h"
#import "UITextInputTokenizer.h"


@protocol UITextInputPrivate <UITextInput, UITextInputTokenizer, UITextInputTraits_Private, UITextSelectingContainer>
-(BOOL)shouldEnableAutoShift;
-(id)textInputTraits;
-(NSRange)selectionRange;
-(CGRect)rectForNSRange:(NSRange)nsrange;
-(NSRange)_markedTextNSRange;
-(id)selectedDOMRange;
-(id)wordInRange:(id)range;
-(void)setSelectedDOMRange:(id)range affinityDownstream:(BOOL)downstream;
-(void)replaceRangeWithTextWithoutClosingTyping:(id)textWithoutClosingTyping replacementText:(id)text;
-(CGRect)rectContainingCaretSelection;
-(void)moveBackward:(unsigned)backward;
-(void)moveForward:(unsigned)forward;
-(unsigned short)characterBeforeCaretSelection;
-(id)wordContainingCaretSelection;
-(id)wordRangeContainingCaretSelection;
-(id)markedText;
-(void)setMarkedText:(id)text;
-(BOOL)hasContent;
-(void)selectAll;
-(id)textColorForCaretSelection;
-(id)fontForCaretSelection;
-(BOOL)hasSelection;
@optional
-(BOOL)requiresKeyEvents;
-(void)handleKeyWebEvent:(id)event;
-(void)setBottomBufferHeight:(float)height;
-(id)automaticallySelectedOverlay;
@end

