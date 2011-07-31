/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "CMDiagramPointMapper.h"


__attribute__((visibility("hidden")))
@interface CMDiagramPointArrowMapper : CMDiagramPointMapper {
@private
	int mArrowType;
}
-(id)initWithPoint:(id)point drawingContext:(id)context orientedBounds:(id)bounds parent:(id)parent;
-(void)mapAt:(id)at withState:(id)state;
-(id)getTextBoundsForBounds:(id)bounds;
-(id)transformPresentationName;
@end

