/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <XXUnknownSuperclass.h> // Unknown library


@interface SUInputSource : XXUnknownSuperclass {
}
@property(readonly, assign, nonatomic) unsigned minimumReadLength;
@property(readonly, assign, nonatomic) BOOL hasBytesAvailable;
@property(readonly, assign, nonatomic) long long expectedLength;
-(void)close;
-(id)copyAllData:(id*)data;
-(BOOL)open:(id*)open;
-(int)read:(char*)read maxLength:(unsigned)length error:(id*)error;
@end

