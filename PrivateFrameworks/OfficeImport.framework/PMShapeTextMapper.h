/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "PMShapeTextMapper.h"
#import "CMMapper.h"

@class CMStyle, OADOrientedBounds, OADTextBody;

__attribute__((visibility("hidden")))
@interface PMShapeTextMapper : CMMapper {
@private
	OADTextBody* mTextBody;
	OADOrientedBounds* mBounds;
	CMStyle* mStyle;
	BOOL mRectangular;
}
-(id)initWithOadTextBody:(id)oadTextBody bounds:(id)bounds parent:(id)parent;
-(void)dealloc;
-(BOOL)setRectangular:(BOOL)rectangular;
-(void)mapAt:(id)at withState:(id)state;
-(BOOL)isTableCellContent;
-(int)textAnchor;
@end

@interface PMShapeTextMapper (Private)
@end

