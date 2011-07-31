/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, DAMessageMoveRequest;

@interface DAMoveResponse : XXUnknownSuperclass {
	int _status;
	NSString* _sourceID;
	NSString* _destID;
	DAMessageMoveRequest* _origRequest;
}
@property(readonly, assign) int status;
@property(readonly, assign) NSString* sourceID;
@property(readonly, assign) NSString* destID;
@property(retain) DAMessageMoveRequest* origRequest;
-(id)initWithStatus:(int)status sourceID:(id)anId destID:(id)anId3;
-(void)dealloc;
@end

