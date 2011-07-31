/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "PDSlideBase.h"

@class OADTextListStyle, OADColorMap, OADTheme;

__attribute__((visibility("hidden")))
@interface PDNotesMaster : PDSlideBase {
@private
	OADTheme* mTheme;
	OADColorMap* mColorMap;
	OADTextListStyle* mNotesTextStyle;
}
-(id)init;
-(void)dealloc;
-(id)parentSlideBase;
-(id)theme;
-(id)colorScheme;
-(id)fontScheme;
-(id)colorMap;
-(id)styleMatrix;
-(id)notesTextStyle;
-(id)placeholderWithType:(int)type placeholderTypeIndex:(int)index;
-(id)parentTextBodyPropertiesForPlaceholderType:(int)placeholderType placeholderTypeIndex:(int)index;
-(id)parentTextStyleForPlaceholderType:(int)placeholderType placeholderTypeIndex:(int)index defaultTextListStyle:(id)style;
-(id)parentTextStyleForTables;
-(id)parentShapePropertiesForPlaceholderType:(int)placeholderType placeholderTypeIndex:(int)index;
-(id)masterGraphicForPlaceholderType:(int)placeholderType placeholderTypeIndex:(int)index;
-(void)doneWithContent;
-(id)drawingTheme;
@end

