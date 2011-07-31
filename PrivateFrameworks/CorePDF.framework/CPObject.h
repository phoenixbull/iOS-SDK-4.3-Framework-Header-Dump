/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import "CorePDF-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "NSCopying.h"

@class NSMutableArray, CPDocument, CPPage;

@interface CPObject : XXUnknownSuperclass <NSCopying> {
	CPObject* parent;
	NSMutableArray* children;
	CPDocument* document;
	CPPage* page;
	long zOrder;
}
-(id)init;
-(void)dealloc;
-(void)disposeDescendants;
-(id)copyWithZone:(NSZone*)zone;
-(id)copyWithoutChildren;
-(id)copyAndSplitChildrenAtIndex:(unsigned)index;
-(id)takeChildren;
-(void)setParent:(id)parent;
-(id)parent;
-(unsigned)count;
-(unsigned)countOfClass:(Class)aClass;
-(id)childAtIndex:(unsigned)index;
-(id)firstChild;
-(id)lastChild;
-(id)nextSibling;
-(id)previousSibling;
-(id)lastSibling;
-(id)firstSibling;
-(void)add:(id)add;
-(void)add:(id)add atIndex:(unsigned)index;
-(void)addChildren:(id)children;
-(void)addChildrenOf:(id)of;
-(void)remove:(id)remove;
-(void)removeFirstChild;
-(void)removeLastChild;
-(void)remove;
-(void)removeObjectAtIndex:(unsigned)index;
-(void)removeAll;
-(void)promoteChildren;
-(id)ancestorOfClass:(Class)aClass;
-(void)childrenOfClass:(Class)aClass into:(id)into;
-(id)childrenOfClass:(Class)aClass;
-(id)childrenNotOfClass:(Class)aClass;
-(void)performSelector:(SEL)selector;
-(void)map:(SEL)map target:(id)target childrenOfClass:(Class)aClass last:(BOOL)last;
-(void)map:(SEL)map target:(id)target childrenOfClass:(Class)aClass;
-(void)mapSafely:(SEL)safely target:(id)target childrenOfClass:(Class)aClass;
-(void)map:(SEL)map target:(id)target;
-(void)map:(SEL)map target:(id)target last:(BOOL)last;
-(id)children;
-(id)descendantsOfClass:(Class)aClass deep:(BOOL)deep;
-(void)descendantsOfClass:(Class)aClass to:(id)to;
-(id)descendantsOfClass:(Class)aClass;
-(id)shallowDescendantsOfClass:(Class)aClass;
-(id)descendantsOfClass:(Class)aClass omitTraversing:(Class)traversing;
-(id)firstDescendantOfClass:(Class)aClass;
-(id)lastDescendantOfClass:(Class)aClass;
-(unsigned)countOfFirstDescendantsOfClass:(Class)aClass;
-(void)accept:(id)accept;
-(unsigned)indexOf:(id)of;
-(BOOL)isEqual:(id)equal;
-(void)setDocument:(id)document;
-(id)document;
-(long)zOrder;
-(void)recomputeZOrder;
-(void)updateZOrder:(long)order;
-(void)setZOrder:(long)order;
-(void)clearCachedInfo;
-(id)firstDescendantsOfClass:(Class)aClass;
-(void)setPage:(id)page;
-(id)page;
-(int)depth;
@end

