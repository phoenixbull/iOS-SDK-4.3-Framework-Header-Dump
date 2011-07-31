/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "OfficeImport-Structs.h"

@class MFGraphicsDevice;

__attribute__((visibility("hidden")))
@interface WMFPlayer : XXUnknownSuperclass {
@private
	MFGraphicsDevice* m_gdi;
	int m_records;
	unsigned short m_windowsVersion;
	BOOL m_boundsSet;
	BOOL m_ignoreSetWindowOrg;
}
+(CGRect)placeableBounds:(const char*)bounds;
+(CGRect)windowBounds:(id)bounds;
+(CGRect)boundsInPoints:(id)points;
-(id)initWithGraphicsDevice:(id)graphicsDevice;
-(void)dealloc;
-(long)records;
-(int)play:(unsigned)play :(const char*)arg2;
-(void)done;
-(int)playHeader:(unsigned)header :(const char*)arg2;
-(int)playUnknown:(unsigned)unknown :(unsigned)arg2 :(const char*)arg3;
-(int)playUnsupported:(unsigned)unsupported :(const char*)arg2 :(const char*)arg3;
-(int)playPatBlt:(unsigned)blt :(const char*)arg2;
-(int)playBitBlt:(unsigned)blt :(const char*)arg2;
-(int)playDibBitBlt:(unsigned)blt :(const char*)arg2;
-(int)playStretchDib:(unsigned)dib :(const char*)arg2;
-(int)playDibStretchBlt:(unsigned)blt :(const char*)arg2;
-(int)playSetTextAlign:(unsigned)align :(const char*)arg2;
-(int)playSetBkColour:(unsigned)colour :(const char*)arg2;
-(int)playSetMapMode:(unsigned)mode :(const char*)arg2;
-(int)playSetBkMode:(unsigned)mode :(const char*)arg2;
-(int)playSetStretchBltMode:(unsigned)mode :(const char*)arg2;
-(int)playSetTextColour:(unsigned)colour :(const char*)arg2;
-(int)playSetTextJustification:(unsigned)justification :(const char*)arg2;
-(int)playSetTextCharExtra:(unsigned)extra :(const char*)arg2;
-(int)playTextOut:(unsigned)anOut :(const char*)arg2;
-(int)playExtTextOut:(unsigned)anOut :(const char*)arg2;
-(int)playRectangle:(unsigned)rectangle :(const char*)arg2;
-(int)playEllipse:(unsigned)ellipse :(const char*)arg2;
-(int)playSaveDC:(unsigned)dc :(const char*)arg2;
-(int)playRestoreDC:(unsigned)dc :(const char*)arg2;
-(int)playMoveTo:(unsigned)to :(const char*)arg2;
-(int)playLineTo:(unsigned)to :(const char*)arg2;
-(int)playPolygon:(unsigned)polygon :(const char*)arg2;
-(int)playPolyline:(unsigned)polyline :(const char*)arg2;
-(int)playArc:(unsigned)arc :(const char*)arg2;
-(int)playPie:(unsigned)pie :(const char*)arg2;
-(int)playChord:(unsigned)chord :(const char*)arg2;
-(int)playRoundRect:(unsigned)rect :(const char*)arg2;
-(int)playPolyPolygon:(unsigned)polygon :(const char*)arg2;
-(int)playSetWindowExt:(unsigned)ext :(const char*)arg2;
-(int)playSetWindowOrg:(unsigned)org :(const char*)arg2;
-(int)playScaleWindowExt:(unsigned)ext :(const char*)arg2;
-(int)playOffsetWindowOrg:(unsigned)org :(const char*)arg2;
-(int)playOffsetViewportOrg:(unsigned)org :(const char*)arg2;
-(int)playSetViewportExt:(unsigned)ext :(const char*)arg2;
-(int)playSetViewportOrg:(unsigned)org :(const char*)arg2;
-(int)playScaleViewportExt:(unsigned)ext :(const char*)arg2;
-(int)playSelectObject:(unsigned)object :(const char*)arg2;
-(int)playSelectPalette:(unsigned)palette :(const char*)arg2;
-(int)playDeleteObject:(unsigned)object :(const char*)arg2;
-(int)playCreateDIBPatternBrush:(unsigned)brush :(const char*)arg2;
-(int)playRealizePalette:(unsigned)palette :(const char*)arg2;
-(int)playCreatePalette:(unsigned)palette :(const char*)arg2;
-(int)playSetPaletteEntries:(unsigned)entries :(const char*)arg2;
-(int)playResizePalette:(unsigned)palette :(const char*)arg2;
-(int)playCreatePatternBrush:(unsigned)brush :(const char*)arg2;
-(int)playCreatePenIndirect:(unsigned)indirect :(const char*)arg2;
-(int)playCreateFontIndirect:(unsigned)indirect :(const char*)arg2;
-(int)playCreateBrushIndirect:(unsigned)indirect :(const char*)arg2;
-(int)playCreateRegion:(unsigned)region :(const char*)arg2;
-(int)playSetPolyFillMode:(unsigned)mode :(const char*)arg2;
-(int)playSetROP2:(unsigned)a2 :(const char*)arg2;
-(int)playFillRegion:(unsigned)region :(const char*)arg2;
-(int)playFrameRegion:(unsigned)region :(const char*)arg2;
-(int)playInvertRegion:(unsigned)region :(const char*)arg2;
-(int)playPaintRegion:(unsigned)region :(const char*)arg2;
-(int)playSelectClipRegion:(unsigned)region :(const char*)arg2;
-(int)playExcludeClipRect:(unsigned)rect :(const char*)arg2;
-(int)playIntersectClipRect:(unsigned)rect :(const char*)arg2;
-(id)parseRegion:(unsigned)region :(const char*)arg2;
@end

