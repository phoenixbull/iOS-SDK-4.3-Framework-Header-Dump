/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccessExpress.framework/DataAccessExpress
 */

#import "DataAccessExpress-Structs.h"
#import "DASearchQuery.h"

@class NSString;

@interface DAContactsSearchQuery : DASearchQuery {
	NSString* _searchBase;
	NSString* _searchScope;
}
@property(readonly, assign) NSString* searchBase;
@property(readonly, assign) NSString* searchScope;
+(id)contactsSearchQueryWithSearchString:(id)searchString searchBase:(id)base searchScope:(id)scope consumer:(id)consumer;
-(id)initWithSearchString:(id)searchString searchBase:(id)base searchScope:(id)scope consumer:(id)consumer;
-(void)dealloc;
-(id)dictionaryRepresentation;
@end

