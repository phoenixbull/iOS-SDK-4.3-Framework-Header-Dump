/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "EDWorkbook.h"
#import "OCDDocument.h"

@class OADTheme, NSMutableArray, NSDate, EDProcessors, ESDContainer, EDReference, EDResources, ECMappingContext, EDWarnings, OADDrawingGroup, NSString;

__attribute__((visibility("hidden")))
@interface EDWorkbook : OCDDocument {
@private
	EDResources* mResources;
	NSMutableArray* mOtherResources;
	EDProcessors* mProcessors;
	ECMappingContext* mMappingContext;
	EDWarnings* mWarnings;
	NSMutableArray* mSheets;
	EDReference* mVisibleRange;
	unsigned mActiveSheetIndex;
	NSDate* mDateBaseDate;
	unsigned mDateBase;
	NSString* mFileName;
	NSString* mTemporaryDirectory;
	OADDrawingGroup* mDrawingGroup;
	OADTheme* mTheme;
	ESDContainer* mEscherDrawingGroup;
	unsigned mRealSheetCount;
}
-(id)init;
-(id)initWithStringOptimization:(bool)stringOptimization;
-(id)initWithFileName:(id)fileName;
-(void)dealloc;
-(id)resources;
-(void)setResources:(id)resources;
-(void)addOtherResources:(id)resources;
-(id)workbookName;
-(id)fileName;
-(id)temporaryDirectory;
-(void)setTemporaryDirectory:(id)directory;
-(id)dateBaseDate;
-(unsigned)dateBase;
-(void)setDateBase:(unsigned)base;
-(id)visibleRange;
-(void)setVisibleRange:(id)range;
-(unsigned)sheetCount;
-(id)sheetAtIndex:(unsigned)index;
-(id)sheetAtIndex:(unsigned)index loadIfNeeded:(bool)needed;
-(unsigned)indexOfSheet:(id)sheet;
-(unsigned)indexOfSheetWithName:(id)name;
-(void)addSheet:(id)sheet;
-(id)activeSheet;
-(void)setActiveSheet:(id)sheet;
-(id)mappingContext;
-(void)setMappingContext:(id)context;
-(id)processors;
-(void)applyProcessors;
-(id)warnings;
-(id)drawingGroup;
-(id)theme;
-(void)setTheme:(id)theme;
-(void)trashSheetAtIndex:(unsigned)index;
@end

@interface EDWorkbook (EMAdditions)
-(void)removeWorksheetAtIndex:(unsigned)index;
@end

@interface EDWorkbook (EDInternal)
-(unsigned)activeSheetIndex;
-(void)setActiveSheetIndex:(unsigned)index;
@end

@interface EDWorkbook (EDDomPersistence)
-(void)reduceMemoryIfPossible;
@end

@interface EDWorkbook (EDExportOnly)
-(id)escherDrawingGroup;
-(void)setEscherDrawingGroup:(id)group;
@end

