/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PersistentConnection.framework/PersistentConnection
 */

#import <XXUnknownSuperclass.h> // Unknown library


@interface PCLogging : XXUnknownSuperclass {
}
+(void)initialize;
+(BOOL)loggingEnabledForLevel:(int)level;
+(void)logAtLevel:(int)level delegate:(id)delegate format:(id)format;
+(void)logAtLevel:(int)level delegate:(id)delegate format:(id)format arguments:(void*)arguments;
+(void)logKeepAliveInterval:(double)interval forServiceIdentifier:(id)serviceIdentifier;
+(id)logFileDirectory;
+(id)_dateFormatter;
+(void)_appendString:(id)string toFileNamed:(id)fileNamed;
+(void)enableConsoleLoggingForLevel:(int)level;
+(void)enableFileLogging:(BOOL)logging;
+(void)enableLoggingForCustomHandler:(id)customHandler;
@end

