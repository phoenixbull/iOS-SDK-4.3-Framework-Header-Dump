/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import "Symbolication-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

@interface VMUTraceSymbol : XXUnknownSuperclass {
	unsigned address;
	NSString* name;
	NSString* library;
	NSString* filename;
	int lineNumber;
}
-(id)initWithPC:(unsigned)pc withSymbolicator:(CSTypeRef)symbolicator;
-(id)initWithCString:(char*)cstring length:(long)length withLine:(int)line;
-(id)name;
-(id)library;
-(id)filename;
-(int)lineNumber;
-(void)writeToFile:(FILE*)file;
-(BOOL)readFromFile:(FILE*)file;
@end

