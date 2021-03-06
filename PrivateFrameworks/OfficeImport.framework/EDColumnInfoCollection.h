/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "EDSortedCollection.h"

@class EDWorksheet, EDResources;

__attribute__((visibility("hidden")))
@interface EDColumnInfoCollection : EDSortedCollection {
@private
	EDResources* mResources;
	EDWorksheet* mWorksheet;
}
-(id)initWithResources:(id)resources worksheet:(id)worksheet;
-(void)dealloc;
-(id)columnInfoForColumnNumber:(int)columnNumber;
-(id)columnInfoCreateIfNilForColumnNumber:(int)columnNumber;
@end

