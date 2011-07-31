/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSColorStub;

__attribute__((visibility("hidden")))
@interface EDColorLocator : XXUnknownSuperclass {
@private
	unsigned mColorOffset;
	int mColorIndex;
	NSColorStub* mColor;
}
-(id)initWith:(id)with index:(int)index offset:(unsigned)offset;
-(void)dealloc;
-(unsigned)offset;
-(void)setOffset:(unsigned)offset;
-(int)colorIndex;
-(void)setColorIndex:(int)index;
-(id)color;
-(void)setColor:(id)color;
@end
