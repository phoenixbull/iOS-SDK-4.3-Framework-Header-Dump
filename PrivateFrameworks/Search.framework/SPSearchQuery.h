/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Search.framework/Search
 */

#import "Search-Structs.h"
#import "NSCopying.h"
#import <Foundation/NSFileHandle.h>

@class NSArray, NSString;

@interface SPSearchQuery : NSFileHandle <NSCopying> {
	unsigned _queryID;
	NSString* _searchString;
	BOOL _cancelled;
	BOOL _finished;
	char* _domainVector;
	int _domainCount;
	double _creationTime;
	double _cancellationTime;
}
@property(readonly, assign, nonatomic) double cancellationTime;
@property(readonly, assign, nonatomic) double creationTime;
@property(readonly, assign, nonatomic) NSArray* searchDomains;
@property(readonly, assign, nonatomic) BOOL cancelled;
@property(readonly, assign, nonatomic) NSString* searchString;
-(unsigned)hash;
-(BOOL)isEqual:(id)equal;
-(id)copyWithZone:(NSZone*)zone;
-(int)domainsVectorCount;
-(char*)domainsVector;
-(void)dealloc;
-(id)initWithSearchString:(id)searchString;
-(id)initWithSearchString:(id)searchString forSearchDomains:(id)searchDomains;
-(id)initWithSearchString:(id)searchString andDomainsVector:(char*)vector vectorCount:(int)count;
-(void)cancel;
@end

