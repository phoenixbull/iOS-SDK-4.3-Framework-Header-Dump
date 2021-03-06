/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import "Symbolication-Structs.h"
#import "VMUMemory_Base.h"
#import "VMUMemory.h"

@class NSString, NSMutableDictionary, VMUArchitecture, NSDate;

@interface VMUMemory_File : VMUMemory_Base <VMUMemory> {
	char* _mappedAddress;
	unsigned _mappedSize;
	NSDate* _lastModifiedTimestamp;
	VMURange _addressRange;
	VMURange _fileRange;
	NSString* _path;
	VMUArchitecture* _architecture;
	NSMutableDictionary* _sharedCacheMap;
}
+(id)headerWithPath:(id)path;
+(id)headerFromSharedCacheWithPath:(id)path;
+(id)memoryWithPath:(id)path;
+(id)memoryWithPath:(id)path fileRange:(VMURange)range mapToAddress:(unsigned long long)address architecture:(id)architecture;
-(id)initWithPath:(id)path fileRange:(VMURange)range mapToAddress:(unsigned long long)address architecture:(id)architecture;
-(id)path;
-(id)lastModifiedTimestamp;
-(void)buildSharedCacheMap;
-(unsigned long long)sharedCacheHeaderOffsetForPath:(id)path;
-(BOOL)map;
-(id)description;
-(void)dealloc;
-(void)finalize;
-(VMURange)addressRange;
-(id)architecture;
-(BOOL)isContiguous;
-(id)memoryAtAddress:(unsigned long long)address maxSize:(unsigned long long)size;
-(id)memoryFromSubRange:(VMURange)subRange mapToAddress:(unsigned long long)address architecture:(id)architecture;
-(id)view;
-(id)swappedView;
@end

