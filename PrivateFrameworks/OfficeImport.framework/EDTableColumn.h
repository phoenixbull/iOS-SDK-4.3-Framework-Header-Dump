/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "EDTableColumn.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class EDString, EDResources;

__attribute__((visibility("hidden")))
@interface EDTableColumn : XXUnknownSuperclass {
@private
	EDResources* mResources;
	unsigned mHeaderRowDxfIndex;
	unsigned mTotalsRowDxfIndex;
	unsigned mDataAreaDxfIndex;
	EDString* mName;
	EDString* mUniqueName;
	EDString* mTotalsRowLabel;
}
+(id)tableColumnWithResources:(id)resources;
-(id)initWithResources:(id)resources;
-(void)dealloc;
-(id)headerRowDxf;
-(void)setHeaderRowDxf:(id)dxf;
-(id)totalsRowDxf;
-(void)setTotalsRowDxf:(id)dxf;
-(id)dataAreaDxf;
-(void)setDataAreaDxf:(id)dxf;
-(id)name;
-(void)setName:(id)name;
-(id)uniqueName;
-(void)setUniqueName:(id)name;
-(id)totalsRowLabel;
-(void)setTotalsRowLabel:(id)label;
@end

@interface EDTableColumn (EDInternal)
-(unsigned)headerRowDxfIndex;
-(void)setHeaderRowDxfIndex:(unsigned)index;
-(unsigned)totalsRowDxfIndex;
-(void)setTotalsRowDxfIndex:(unsigned)index;
-(unsigned)dataAreaDxfIndex;
-(void)setDataAreaDxfIndex:(unsigned)index;
@end
