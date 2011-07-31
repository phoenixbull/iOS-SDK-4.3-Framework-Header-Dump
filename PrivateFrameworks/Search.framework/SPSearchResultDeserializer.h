/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Search.framework/Search
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSArray, SPSearchResult, CPSearchMatcher, NSString;

@interface SPSearchResultDeserializer : XXUnknownSuperclass {
	unsigned _byteVector;
	NSArray* _resultOffsetVector;
	BOOL _munmapAtDealloc;
	unsigned _resultCount;
	unsigned _domain;
	NSString* _displayIdentifier;
	NSString* _category;
	CPSearchMatcher* _matcher;
	CPSearchMatcher* _diacriticMatcher;
	SPSearchResult* _sortA;
	SPSearchResult* _sortB;
}
@property(readonly, assign, nonatomic) SPSearchResult* sortB;
@property(readonly, assign, nonatomic) SPSearchResult* sortA;
@property(readonly, assign, nonatomic) CPSearchMatcher* diacriticMatcher;
@property(readonly, assign, nonatomic) CPSearchMatcher* matcher;
@property(readonly, assign, nonatomic) NSString* category;
@property(readonly, assign, nonatomic) NSString* displayIdentifier;
@property(readonly, assign, nonatomic) unsigned domain;
@property(readonly, assign, nonatomic) unsigned resultCount;
-(void)dealloc;
-(id)initWithSerializer:(id)serializer;
-(id)initWithMallocRegion:(unsigned)mallocRegion length:(unsigned)length;
-(id)initWithMappedRegion:(unsigned)mappedRegion length:(unsigned)length;
-(void)_prepareForRandomAccess;
-(id)readBytes:(unsigned)bytes;
-(int)read:(const char*)read maxLength:(unsigned)length;
-(void)sortResultsByDate;
-(void)sortResultsUsingQueryString:(id)string;
-(BOOL)deserializeResultAtIndex:(unsigned)index toCursor:(id)cursor;
-(BOOL)readResultIntoCursor:(id)cursor;
@end
