/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "ManagedConfiguration-Structs.h"

@class NSString, NSMutableDictionary;

@interface MCManifest : XXUnknownSuperclass {
@private
	NSString* _path;
	NSMutableDictionary* _manifest;
	dispatch_queue_s* _syncQueue;
}
+(void)_setManifestPath:(id)path;
+(id)sharedManifest;
-(id)init;
-(void)dealloc;
-(id)_manifest;
-(id)manifest;
-(void)_setManifest:(id)manifest;
-(id)identifiersOfProfilesWithFilterFlags:(int)filterFlags;
-(id)allInstalledProfileIdentifiers;
-(void)addIdentifierToManifest:(id)manifest flag:(int)flag;
-(void)removeIdentifierFromManifest:(id)manifest;
-(void)invalidateCache;
@end

