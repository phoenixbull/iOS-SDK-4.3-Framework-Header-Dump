/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSArray;

@interface ABModelRecord : XXUnknownSuperclass {
	void* _record;
	int _highlightIndex;
	BOOL _isGroup;
	NSArray* _namePieces;
}
-(id)initWithRecord:(void*)record highlightIndex:(long)index group:(BOOL)group namePieces:(id)pieces;
-(void)dealloc;
-(void*)record;
-(long)highlightIndex;
-(BOOL)isGroup;
-(id)namePieces;
@end

