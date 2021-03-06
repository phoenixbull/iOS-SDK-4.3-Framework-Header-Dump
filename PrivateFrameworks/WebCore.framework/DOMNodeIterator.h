/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "DOMObject.h"

@class DOMNode;
@protocol DOMNodeFilter;

__attribute__((visibility("hidden")))
@interface DOMNodeIterator : DOMObject {
}
@property(readonly, assign) BOOL pointerBeforeReferenceNode;
@property(readonly, retain) DOMNode* referenceNode;
@property(readonly, assign) BOOL expandEntityReferences;
@property(readonly, retain) id<DOMNodeFilter> filter;
@property(readonly, assign) unsigned whatToShow;
@property(readonly, retain) DOMNode* root;
-(void)dealloc;
-(void)finalize;
-(id)nextNode;
-(id)previousNode;
-(void)detach;
@end

