/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSCopying.h"
#import <XXUnknownSuperclass.h> // Unknown library


@interface NSDocInfo : XXUnknownSuperclass <NSCopying> {
	int time;
	unsigned short mode;
	struct {
		unsigned isDir : 1;
		unsigned isSingleFile : 1;
		unsigned isSoftLink : 1;
		unsigned _pad : 13;
	} flags;
}
-(id)initFromInfo:(stat*)info;
-(id)initWithFileAttributes:(id)fileAttributes;
-(id)copyWithZone:(NSZone*)zone;
-(id)copy;
@end

