/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSError, NSString, NSDate, SKPayment, NSData;

@interface SKPaymentTransaction : XXUnknownSuperclass {
@private
	id _internal;
}
@property(readonly, assign, nonatomic) int transactionState;
@property(readonly, assign, nonatomic) NSData* transactionReceipt;
@property(readonly, assign, nonatomic) NSString* transactionIdentifier;
@property(readonly, assign, nonatomic) NSDate* transactionDate;
@property(readonly, assign, nonatomic) SKPayment* payment;
@property(readonly, assign, nonatomic) SKPaymentTransaction* originalTransaction;
@property(readonly, assign, nonatomic) NSError* error;
-(id)init;
-(id)initWithDictionary:(id)dictionary;
-(id)initWithPayment:(id)payment;
-(void)dealloc;
-(BOOL)canMergeWithTransaction:(id)transaction;
-(id)matchingIdentifier;
-(BOOL)mergeWithTransaction:(id)transaction;
-(id)_transactionIdentifier;
@end

