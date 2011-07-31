/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "CMDiagramShapeMapper.h"


__attribute__((visibility("hidden")))
@interface CMDiagramChevronMapper : CMDiagramShapeMapper {
@private
	BOOL mHChevron;
}
-(void)setIsHChevron:(BOOL)chevron;
-(void)mapAt:(id)at withState:(id)state;
-(void)mapChildrenAt:(id)at withState:(id)state;
-(id)_suggestedBoundsForNodeAtIndex:(unsigned)index;
-(CGSize)sizeForNode:(id)node atIndex:(unsigned)index;
@end

