/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "Symbolication-Structs.h"

@class NSMutableSet, NSMapTable;

@interface VMUTraceData : XXUnknownSuperclass {
	NSMapTable* pcMap;
	NSMapTable* threadTraces;
	NSMapTable* libXrefs;
	NSMapTable* fnXrefs;
	NSMutableSet* threadIDnumbers;
	unsigned maxDepth;
	unsigned threadCount;
}
-(id)init;
-(void)freeXrefTable:(id)table;
-(void)dealloc;
-(void)finalize;
-(void)addEvent:(id)event;
-(void)buildPCMap:(long*)map withNumPages:(unsigned)numPages forTask:(unsigned)task;
-(id)initWithLogRecords:(XXStruct_KGqEpA*)logRecords forTask:(unsigned)task;
-(id)initWithBacktraces:(id)backtraces forTask:(unsigned)task;
-(id)symbolForPC:(unsigned)pc;
-(id)threadIDs;
-(id)traceForThread:(unsigned)thread;
-(id)numberForThread:(unsigned)thread;
-(unsigned)maxDepth;
-(void)writeToFile:(FILE*)file;
-(unsigned)readAddressFromFile:(FILE*)file has64bitAddresses:(BOOL)addresses needSwap:(BOOL)swap;
-(BOOL)readFromFile:(FILE*)file;
-(void)addOrIncrementXref:(id)xref withParent:(id)parent withChild:(id)child withSelector:(SEL)selector commutative:(BOOL)commutative;
-(void)generateXref:(id)xref withSelector:(SEL)selector commutative:(BOOL)commutative;
-(id)functionXref;
-(id)libraryXref;
-(void)printXrefs:(id)xrefs toString:(id)string;
@end

