/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, NSMutableArray, SUItem;

@interface SUItemListGroup : XXUnknownSuperclass {
	NSMutableArray* _items;
	SUItem* _separatorItem;
}
@property(retain, nonatomic) NSMutableArray* items;
@property(retain, nonatomic) SUItem* separatorItem;
@property(readonly, assign, nonatomic) NSString* indexBarTitle;
-(void)dealloc;
-(id)description;
@end
