/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSPipe.h"

@class NSFileHandle;

__attribute__((visibility("hidden")))
@interface NSConcretePipe : NSPipe {
@private
	NSFileHandle* _readHandle;
	NSFileHandle* _writeHandle;
}
-(id)fileHandleForReading;
-(id)fileHandleForWriting;
-(id)init;
-(void)dealloc;
-(void)finalize;
-(id)copyWithZone:(NSZone*)zone;
@end

