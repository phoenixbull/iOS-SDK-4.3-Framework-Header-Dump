/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class PLImageTable;

@interface PLImageTableSegment : XXUnknownSuperclass {
	PLImageTable* _imageTable;
	unsigned _index;
	void* _ptr;
	unsigned _length;
	BOOL _dying;
}
-(id)initWithImageTable:(id)imageTable index:(unsigned long)index length:(unsigned long)length idealAddress:(void*)address;
-(id)initWithImageTable:(id)imageTable offset:(long long)offset length:(unsigned long)length;
-(void)release;
-(void)dealloc;
-(void*)bytes;
@end

