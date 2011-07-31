/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVOctetStreamParser.h"

@class NSFileHandle;

@interface CoreDAVOctetStreamToFileParser : CoreDAVOctetStreamParser {
	NSFileHandle* _fileHandle;
}
@property(retain) NSFileHandle* fileHandle;
-(id)initWithFileHandle:(id)fileHandle;
-(void)dealloc;
-(BOOL)task:(id)task receivedData:(id)data;
-(BOOL)processData:(id)data;
@end

