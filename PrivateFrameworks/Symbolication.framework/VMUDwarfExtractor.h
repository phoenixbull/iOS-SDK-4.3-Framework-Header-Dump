/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import "VMUSymbolExtractor.h"

@class NSMutableDictionary, VMUMachOHeader;
@protocol VMUMemory;

@interface VMUDwarfExtractor : VMUSymbolExtractor {
	BOOL _shouldUseTaskBasedAddresses;
	NSMutableDictionary* _abbrevDicts;
	id<VMUMemory> _infoMem;
	id<VMUMemory> _abbrevMem;
	id<VMUMemory> _lineMem;
	id<VMUMemory> _strMem;
	VMUMachOHeader* _hdr;
}
+(unsigned long long)constantClassAttributeWithMemoryView:(id)memoryView form:(unsigned long long)form;
+(id)dwarfExtractorWithMachOHeader:(id)machOHeader;
-(id)initWithMachOHeader:(id)machOHeader;
-(void)dealloc;
-(void)parseCompilationUnitWithMemoryView:(id)memoryView withHeader:(id)header;
-(id)parseAbbrevDictionaryAtOffset:(unsigned)offset;
-(void)parseLineNumberMatrixAtOffset:(unsigned long long)offset withBaseDirectory:(id)baseDirectory withWordSize:(unsigned char)wordSize;
@end

