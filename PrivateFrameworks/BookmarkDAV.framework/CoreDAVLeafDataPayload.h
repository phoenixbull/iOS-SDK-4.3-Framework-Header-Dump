/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BookmarkDAV.framework/BookmarkDAV
 */

#import "NSObject.h"

@class NSData, NSURL, NSString;

@protocol CoreDAVLeafDataPayload <NSObject>
@property(retain) NSURL* serverID;
@property(readonly, assign) NSData* dataPayload;
@property(readonly, assign) NSString* syncKey;
-(id)initWithURL:(id)url eTag:(id)tag dataPayload:(id)payload inContainerWithURL:(id)url4 withAccountInfoProvider:(id)accountInfoProvider;
@end

