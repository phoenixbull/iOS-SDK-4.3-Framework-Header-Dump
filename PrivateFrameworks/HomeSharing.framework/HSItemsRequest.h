/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

#import "HSRequest.h"


@interface HSItemsRequest : HSRequest {
@private
	BOOL _shouldParseResponse;
}
@property(assign, nonatomic) BOOL shouldParseResponse;
+(id)requestWithDatabaseID:(unsigned)databaseID;
+(id)requestWithDatabaseID:(unsigned)databaseID containerID:(unsigned)anId;
-(id)initWithAction:(id)action;
-(id)initWithDatabaseID:(unsigned)databaseID;
-(id)initWithDatabaseID:(unsigned)databaseID containerID:(unsigned)anId;
-(id)canonicalResponseForResponse:(id)response;
@end

