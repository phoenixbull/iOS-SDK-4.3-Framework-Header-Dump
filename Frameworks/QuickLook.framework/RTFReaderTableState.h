/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class RTFTextTable, NSMutableArray;

__attribute__((visibility("hidden")))
@interface RTFReaderTableState : XXUnknownSuperclass {
@private
	RTFTextTable* _currentTable;
	RTFTextTable* _previousTable;
	NSMutableArray* _currentRowArray;
	NSMutableArray* _previousRowArray;
	int _currentRow;
	int _currentColumn;
	int _currentDefinitionColumn;
	BOOL _currentRowIsLast;
}
-(void)dealloc;
@end

