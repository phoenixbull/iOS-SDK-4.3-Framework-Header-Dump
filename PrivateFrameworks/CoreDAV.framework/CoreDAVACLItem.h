/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVItem.h"

@class NSMutableSet;

@interface CoreDAVACLItem : CoreDAVItem {
	NSMutableSet* _accessControlEntities;
}
@property(retain) NSMutableSet* accessControlEntities;
-(id)init;
-(id)initWithNameSpace:(id)nameSpace andName:(id)name;
-(void)dealloc;
-(id)description;
-(id)copyParseRules;
-(void)addACE:(id)ace;
-(id)notGrantedSubsetOfACEs:(id)aces;
-(id)liveACEs;
@end

