/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface SFUCryptoKey : XXUnknownSuperclass {
@private
	unsigned mIterationCount;
}
-(id)initAes128KeyFromPassphrase:(const char*)passphrase length:(unsigned)length;
-(id)initAes128KeyFromPassphrase:(const char*)passphrase length:(unsigned)length iterationCount:(unsigned)count;
-(int)keyType;
-(unsigned)iterationCount;
@end

