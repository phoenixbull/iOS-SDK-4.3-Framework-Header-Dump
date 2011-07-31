/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "CMDiagramShapeMapper.h"


__attribute__((visibility("hidden")))
@interface CMDiagramArrowMapper : CMDiagramShapeMapper {
@private
	BOOL mIsVertical;
	BOOL mIsOutward;
	float mRadius;
}
+(void)initialize;
-(id)initWithOddDiagram:(id)oddDiagram drawingContext:(id)context orientedBounds:(id)bounds identifier:(id)identifier parent:(id)parent;
-(void)mapChildrenAt:(id)at withState:(id)state;
-(CGRect)circumscribedBounds;
-(CGSize)sizeForNode:(id)node atIndex:(unsigned)index;
-(CGSize)textSizeForShapeSize:(CGSize)shapeSize;
@end

