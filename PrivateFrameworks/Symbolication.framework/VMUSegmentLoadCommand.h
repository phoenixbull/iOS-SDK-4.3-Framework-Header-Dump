/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import "VMULoadCommand.h"

@class NSString, NSArray;

@interface VMUSegmentLoadCommand : VMULoadCommand {
	NSString* _name;
	unsigned long long _vmaddr;
	unsigned long long _vmsize;
	unsigned long long _fileoff;
	unsigned long long _filesize;
	int _maxprot;
	int _initprot;
	unsigned _flags;
	NSArray* _sections;
}
-(BOOL)isSegment;
-(id)name;
-(unsigned long long)vmaddr;
-(unsigned long long)vmsize;
-(unsigned long long)fileoff;
-(unsigned long long)filesize;
-(int)maxprot;
-(int)initprot;
-(unsigned)flags;
-(id)sections;
-(id)sectionNamed:(id)named;
-(id)description;
-(void)dealloc;
@end

