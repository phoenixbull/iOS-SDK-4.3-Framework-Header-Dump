/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "DASearchQueryConsumer.h"
#import "MessageUI-Structs.h"

@class NSSet, NSMutableDictionary, NSArray, NSOperationQueue;

@interface MFContactsSearchManager : XXUnknownSuperclass <DASearchQueryConsumer> {
@private
	CFDictionaryRef _taskIDsBySearchQuery;
	NSMutableDictionary* _taskContextsByTaskID;
	void* _addressBook;
	NSOperationQueue* _queue;
	unsigned _genNumber;
	NSSet* _properties;
	unsigned _searchTypes;
	NSArray* _searchAccountIDs;
}
@property(retain) NSArray* searchAccountIDs;
-(id)initWithAddressBook:(void*)addressBook properties:(int*)properties propertyCount:(unsigned)count;
-(void)setSearchTypes:(unsigned)types;
-(id)searchForText:(id)text consumer:(id)consumer;
-(void)_handleTaskFinished:(id)finished context:(id)context;
-(void)_handleLocalSearchResults:(id)results type:(int)type operation:(id)operation taskID:(id)anId;
-(void)_handleSearchQueries:(id)queries forAccountIDs:(id)accountIDs operation:(id)operation taskID:(id)anId;
-(void)_handleSearchQueryFinished:(id)finished context:(id)context;
-(void)_handleSearchQuery:(id)query returnedResults:(id)results;
-(void)searchQuery:(id)query returnedResults:(id)results;
-(void)_handleSearchQuery:(id)query finishedWithError:(id)error;
-(void)searchQuery:(id)query finishedWithError:(id)error;
-(void)cancelTaskWithID:(id)anId;
-(void)dealloc;
@end

