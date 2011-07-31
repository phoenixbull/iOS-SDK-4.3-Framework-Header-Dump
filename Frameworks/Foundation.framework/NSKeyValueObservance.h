/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSPointerArray, NSKeyValueProperty, NSObject;

__attribute__((visibility("hidden")))
@interface NSKeyValueObservance : XXUnknownSuperclass {
@private
	int _retainCountMinusOne;
	NSObject* _observer;
	NSKeyValueProperty* _property;
	unsigned _options;
	void* _context;
	NSObject* _originalObservable;
	unsigned _cachedUnrotatedHashComponent;
	BOOL _cachedIsShareable;
	NSPointerArray* _observationInfos;
	auto_weak_callback_block _observerWentAwayCallback;
}
-(id)_initWithObserver:(id)observer property:(id)property options:(unsigned)options context:(void*)context originalObservable:(id)observable;
-(id)retain;
-(oneway void)release;
-(unsigned)retainCount;
-(void)dealloc;
-(unsigned)hash;
-(BOOL)isEqual:(id)equal;
-(id)description;
-(void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void*)context;
@end

