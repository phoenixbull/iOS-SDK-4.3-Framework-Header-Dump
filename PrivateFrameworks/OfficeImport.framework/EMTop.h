/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "OIProgressiveReaderDelegate.h"

@class CMArchiveManager, NSString, EMWorkbookMapper, EMState;

__attribute__((visibility("hidden")))
@interface EMTop : XXUnknownSuperclass <OIProgressiveReaderDelegate> {
@private
	CMArchiveManager* _archiver;
	EMState* _state;
	EMWorkbookMapper* _mapper;
	NSString* _inFileName;
	BOOL _xml;
}
+(void)fillHTMLArchiveForExcelFile:(id)excelFile xmlFlag:(BOOL)flag archiver:(id)archiver;
+(void)fillHTMLArchiveForExcelData:(id)excelData fileName:(id)name xmlFlag:(BOOL)flag archiver:(id)archiver;
-(void)_streamWorkbook:(id)workbook;
-(void)readData:(id)data fileName:(id)name xmlFlag:(BOOL)flag archiver:(id)archiver;
-(void)readFile:(id)file xmlFlag:(BOOL)flag archiver:(id)archiver;
-(void)dealloc;
-(void)readerDidStartDocument:(id)reader withElementCount:(int)elementCount;
-(void)readerDidReadElement:(id)reader atIndex:(unsigned)index inDocument:(id)document isLastElement:(BOOL)element;
-(void)readerDidEndDocument:(id)reader;
@end

