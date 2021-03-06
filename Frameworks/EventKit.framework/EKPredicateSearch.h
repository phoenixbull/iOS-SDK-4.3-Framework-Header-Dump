/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "EventKit-Structs.h"

@class NSPredicate, EKEventStore;

__attribute__((visibility("hidden")))
@interface EKPredicateSearch : XXUnknownSuperclass {
@private
	NSPredicate* _predicate;
	EKEventStore* _store;
	BOOL _finished;
	id _callback;
	unsigned _previous;
}
+(id)searchWithPredicate:(id)predicate store:(id)store callback:(id)callback;
-(id)initWithPredicate:(id)predicate store:(id)store callback:(id)callback;
-(void)dealloc;
-(BOOL)_receivedData:(XXStruct_lR_t3A [50])data count:(int)count;
-(void)terminate;
-(void)run;
@end

