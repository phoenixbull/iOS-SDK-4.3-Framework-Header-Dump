/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import "NSObject.h"


@protocol WebMultipleTextMatches <NSObject>
-(void)setMarkedTextMatchesAreHighlighted:(BOOL)highlighted;
-(BOOL)markedTextMatchesAreHighlighted;
-(unsigned)markAllMatchesForText:(id)text caseSensitive:(BOOL)sensitive limit:(unsigned)limit;
-(unsigned)countMatchesForText:(id)text caseSensitive:(BOOL)sensitive limit:(unsigned)limit markMatches:(BOOL)matches;
-(void)unmarkAllTextMatches;
-(id)rectsForTextMatches;
@end

