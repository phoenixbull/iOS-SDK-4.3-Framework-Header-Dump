/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface EKDaemonConnection : XXUnknownSuperclass {
@private
	unsigned _options;
	NSString* _dbPath;
	unsigned _serverPort;
	unsigned _machPort;
	unsigned _connectionPort;
	id _delegate;
}
@property(assign) id delegate;
@property(readonly, assign) unsigned port;
-(id)initWithOptions:(unsigned long)options path:(id)path;
-(void)dealloc;
-(BOOL)_connectToServer;
-(void)_daemonRestarted;
@end

