/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/GameKit.framework/GameKit
 */

#import "GKDataRequest.h"

@class NSArray;

@interface GKGetGameMetadataRequest : GKDataRequest {
@private
	NSArray* _gamesPlayed;
}
@property(retain, nonatomic) NSArray* gamesPlayed;
-(void)dealloc;
-(id)key;
-(id)cacheKey;
-(int)cachePriority;
-(int)cacheType;
-(id)request;
-(void)handleResponseFromServer:(id)server error:(id)error;
@end

