/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import "ISOperation.h"

@class NSURL, ISReview;

@interface ISFetchReviewOperation : ISOperation {
	int _assetType;
	BOOL _backgroundReview;
	unsigned long long _itemIdentifier;
	unsigned _softwareVersionIdentifier;
	ISReview* _review;
	NSURL* _url;
}
@property(assign) int assetType;
@property(assign, getter=isBackgroundReview) BOOL backgroundReview;
@property(assign) unsigned long long itemIdentifier;
@property(retain) ISReview* review;
@property(assign) unsigned softwareVersionIdentifier;
@property(retain) NSURL* url;
-(void)dealloc;
-(void)run;
-(void)_fetchReviewInformation;
@end

