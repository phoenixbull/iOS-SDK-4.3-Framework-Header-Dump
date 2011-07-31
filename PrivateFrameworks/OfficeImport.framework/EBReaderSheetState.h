/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "OfficeImport-Structs.h"

@class EDSheet, EBReaderState;

__attribute__((visibility("hidden")))
@interface EBReaderSheetState : XXUnknownSuperclass {
@private
	EBReaderState* mReaderState;
	EDSheet* mEDSheet;
	CFDictionaryRef mSharedFormulas;
	unsigned mChartIndex;
}
-(id)initWithReaderState:(id)readerState;
-(void)dealloc;
-(id)readerState;
-(XlBinaryReader*)xlReader;
-(id)workbook;
-(id)resources;
-(id)edSheet;
-(void)setEDSheet:(id)sheet;
-(unsigned)sharedFormulaIndexForRowCol:(int)rowCol;
-(void)setSharedFormulaIndex:(unsigned)index forRowCol:(int)rowCol;
-(unsigned)nextChartIndex;
-(void)reportWorksheetWarning:(CPTaggedMessageStructure*)warning;
@end

