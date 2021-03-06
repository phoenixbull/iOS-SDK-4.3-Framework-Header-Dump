/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "ECMappingContext.h"
#import "OfficeImport-Structs.h"

@class NSMutableArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface ECMappingContext : XXUnknownSuperclass {
@private
	CFDictionaryRef mIndexToMappedIndex;
	NSMutableDictionary* mSheetNameToMappedIndex;
	CFDictionaryRef mObjectToMappingInfo;
	NSMutableArray* mMappingInfos;
}
+(id)mappingContext;
-(id)init;
-(void)dealloc;
-(ChVector<OcText>*)mappedSheetNames;
-(unsigned)mappedSheetIndexForSheetIndex:(unsigned)sheetIndex;
-(unsigned)mappedSheetIndexForSheetName:(id)sheetName;
-(id)mappingInfoForObject:(id)object;
-(unsigned)mappingInfoCount;
-(id)mappingInfoAtIndex:(unsigned)index;
@end

@interface ECMappingContext (ECInternal)
-(void)associateMappingInfo:(id)info withSheetName:(id)sheetName andSheetIndex:(unsigned)index andObject:(id)object;
@end

