/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, NSURL;

@interface SSItemMedia : XXUnknownSuperclass {
@private
	int _duration;
	int _fullDuration;
	long long _mediaFileSize;
	NSString* _mediaKind;
	BOOL _protected;
	NSURL* _url;
}
@property(readonly, assign, nonatomic) int durationInMilliseconds;
@property(readonly, assign, nonatomic) int fullDurationInMilliseconds;
@property(readonly, assign, nonatomic) long long mediaFileSize;
@property(copy, nonatomic) NSString* mediaKind;
@property(readonly, assign, nonatomic, getter=isProtectedMedia) BOOL protectedMedia;
@property(readonly, assign, nonatomic) NSURL* URL;
-(id)init;
-(void)dealloc;
-(id)description;
-(unsigned)hash;
-(BOOL)isEqual:(id)equal;
-(id)initWithStoreOfferDictionary:(id)storeOfferDictionary;
@end

