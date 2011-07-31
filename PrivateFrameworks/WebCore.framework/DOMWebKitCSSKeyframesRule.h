/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "DOMCSSRule.h"

@class DOMCSSRuleList, NSString;

__attribute__((visibility("hidden")))
@interface DOMWebKitCSSKeyframesRule : DOMCSSRule {
}
@property(readonly, retain) DOMCSSRuleList* cssRules;
@property(copy) NSString* name;
-(void)insertRule:(id)rule;
-(void)deleteRule:(id)rule;
-(id)findRule:(id)rule;
@end
