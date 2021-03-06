/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "OfficeImport-Structs.h"
#import "ECFormulaProcessor.h"


__attribute__((visibility("hidden")))
@interface ECFormulaProcessor : XXUnknownSuperclass {
@private
	XlFormulaProcessor* mXlFormulaProcessorLasso;
	XlFormulaProcessor* mXlFormulaProcessorXl;
	XlNameTable* mXlNameTable;
	ChVector<OcText>* mLassoSheetNames;
	ChVector<OcText>* mXlSheetNames;
	XlLinkTable* mXlLinkTable;
}
-(id)init;
-(void)dealloc;
-(void)setupWithWorkbook:(id)workbook;
-(XlFormulaProcessor*)xlFormulaProcessorLasso;
-(XlFormulaProcessor*)xlFormulaProcessorXl;
@end

@interface ECFormulaProcessor (Private)
-(XlFormulaProcessor*)setupWithWorkbook:(id)workbook xlNameTable:(XlNameTable*)table sheetNames:(ChVector<OcText>*)names xlLinkTable:(XlLinkTable*)table4 lassoSyntax:(bool)syntax;
-(ChVector<OcText>*)sheetNamesFromWorkbook:(id)workbook;
@end

