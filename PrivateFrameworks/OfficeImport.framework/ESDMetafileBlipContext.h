/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "ESDBlipContext.h"


__attribute__((visibility("hidden")))
@interface ESDMetafileBlipContext : ESDBlipContext {
@private
	unsigned mCb;
	unsigned defaultHeaderSize;
}
@property(assign) unsigned defaultHeaderSize;
-(id)initWithOffset:(unsigned)offset byteCount:(unsigned)count uncompressed:(unsigned long)uncompressed stream:(SsrwOOStream*)stream streamID:(unsigned)anId;
-(bool)loadDelayedNode:(id)node;
@end

