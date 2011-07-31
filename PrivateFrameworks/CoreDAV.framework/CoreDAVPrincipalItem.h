/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVItem.h"

@class CoreDAVItemWithNoChildren, CoreDAVHrefItem;

@interface CoreDAVPrincipalItem : CoreDAVItem {
	CoreDAVHrefItem* _href;
	CoreDAVItemWithNoChildren* _all;
	CoreDAVItemWithNoChildren* _authenticated;
	CoreDAVItemWithNoChildren* _unauthenticated;
	CoreDAVItem* _property;
	CoreDAVItemWithNoChildren* _selfItem;
}
@property(retain) CoreDAVHrefItem* href;
@property(retain) CoreDAVItemWithNoChildren* all;
@property(retain) CoreDAVItemWithNoChildren* authenticated;
@property(retain) CoreDAVItemWithNoChildren* unauthenticated;
@property(retain) CoreDAVItem* property;
@property(retain) CoreDAVItemWithNoChildren* selfItem;
-(id)init;
-(id)initTypeIsAll;
-(id)initTypeIsHREFWithURL:(id)url;
-(id)initTypeIsProperty:(id)property;
-(id)initTypeIsAuthenticated;
-(id)initTypeIsUnauthenticated;
-(id)initTypeIsSelf;
-(void)dealloc;
-(id)description;
-(void)write:(id)write;
-(id)copyParseRules;
-(id)hashString;
@end

