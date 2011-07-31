/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "NSCoding.h"


@interface SCROCallback : XXUnknownSuperclass <NSCoding> {
	int _key;
	id _object;
	BOOL _isAtomic;
}
-(id)initWithKey:(int)key object:(id)object;
-(id)initWithCoder:(id)coder;
-(void)encodeWithCoder:(id)coder;
-(void)dealloc;
-(int)key;
-(id)object;
-(void)setIsAtomic:(BOOL)atomic;
-(BOOL)isAtomic;
-(void)postToHandler:(id)handler;
@end

