/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, NSArray, NSDictionary;

@interface NSProcessInfo : XXUnknownSuperclass {
@private
	NSDictionary* environment;
	NSArray* arguments;
	NSString* hostName;
	NSString* name;
	void* reserved;
}
+(id)processInfo;
-(void)dealloc;
-(id)environment;
-(id)arguments;
-(void)setArguments:(id)arguments;
-(id)hostName;
-(id)processName;
-(void)setProcessName:(id)name;
-(int)processIdentifier;
-(id)globallyUniqueString;
-(id)userName;
-(id)userFullName;
-(id)userHomeDirectory;
-(unsigned)operatingSystem;
-(id)operatingSystemName;
-(id)operatingSystemVersionString;
-(unsigned)processorCount;
-(unsigned)activeProcessorCount;
-(unsigned long long)physicalMemory;
-(BOOL)isTranslated;
-(double)systemUptime;
-(void)disableSuddenTermination;
-(void)enableSuddenTermination;
-(void)_exitIfSuddenTerminationEnabledWithStatus:(int)status;
-(void)_exitWhenSuddenTerminationEnabledWithStatus:(int)status;
-(int)_suddenTerminationDisablingCount;
@end

