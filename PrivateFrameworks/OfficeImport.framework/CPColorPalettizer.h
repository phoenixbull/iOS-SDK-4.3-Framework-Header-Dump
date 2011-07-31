/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "OfficeImport-Structs.h"
#import "CPColorPalettizer.h"


__attribute__((visibility("hidden")))
@interface CPColorPalettizer : XXUnknownSuperclass {
@private
	tagOctree* m_pTree;
	bool isDefaultPaletteSize;
}
-(id)initWitMaxPaletteSize:(unsigned)size;
-(id)initWitDefaultPaletteSize;
-(void)dealloc;
-(bool)addNSColor:(id)color;
-(bool)addQuadColor:(tagRgbQuad)color;
-(void)createPalette;
-(unsigned)paletteColorCount;
-(id)getPaletteDataRaw;
-(id)getPngPaletteData;
-(id)getPaletteData;
-(int)paletteIndexFromNSColor:(id)nscolor;
-(int)paletteIndexFromQuadColor:(tagRgbQuad)quadColor;
@end

@interface CPColorPalettizer (Private)
-(int)createOctree:(tagOctree**)octree maxPaletteSize:(unsigned short)size;
-(int)deleteOctree:(tagOctree*)octree;
-(int)createNodeOctree:(tagOctreeNode**)octree parent:(tagOctreeNode*)parent;
-(int)deleteNodeOctree:(tagOctreeNode*)octree;
-(int)deleteListOctree:(tagLevelItem*)octree;
-(int)addPixelToOctree:(tagOctree*)octree pixel:(tagRgbQuad)pixel;
-(int)reduceOctree:(tagOctree*)octree;
-(unsigned short)getPaletteFromOctree:(tagOctreeNode*)octree paletteEntry:(tagRgbQuad*)entry index:(unsigned short)index;
-(int)rgbToIndexOctree:(tagOctree*)indexOctree source:(tagRgbQuad)source destination:(char*)destination;
@end

