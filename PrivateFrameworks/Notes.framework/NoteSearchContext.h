/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Notes.framework/Notes
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "Notes-Structs.h"

@class NSMutableArray, NoteContext;

@interface NoteSearchContext : XXUnknownSuperclass {
	CXQueryRef query;
	NSMutableArray* integerIds;
	NoteContext* noteContext;
}
@property(readonly, assign, nonatomic) CXQueryRef query;
-(id)initWithSearchTerms:(id)searchTerms context:(id)context;
-(void)dealloc;
-(BOOL)nextSearchResults:(id*)results includePrevious:(BOOL)previous;
@end

