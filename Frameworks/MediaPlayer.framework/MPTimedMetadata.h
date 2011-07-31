/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, NSDictionary;

@interface MPTimedMetadata : XXUnknownSuperclass {
@private
	void* _internal;
}
@property(readonly, assign, nonatomic) NSDictionary* allMetadata;
@property(readonly, assign, nonatomic) double timestamp;
@property(readonly, assign, nonatomic) id value;
@property(readonly, assign, nonatomic) NSString* keyspace;
@property(readonly, assign, nonatomic) NSString* key;
-(id)init;
-(id)_initWithMetadataDictionary:(id)metadataDictionary;
-(void)dealloc;
@end

