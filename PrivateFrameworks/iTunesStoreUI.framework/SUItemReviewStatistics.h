/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import "NSCopying.h"
#import "iTunesStoreUI-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

@interface SUItemReviewStatistics : XXUnknownSuperclass <NSCopying> {
@private
	float _averageUserRating;
	int _numberOfUserRatings;
	NSString* _numberOfUserRatingsString;
	int _numberOfUserReviews;
	NSString* _numberOfUserReviewsString;
}
@property(assign, nonatomic) float averageUserRating;
@property(assign, nonatomic) int numberOfUserRatings;
@property(copy, nonatomic) NSString* numberOfUserRatingsString;
@property(assign, nonatomic) int numberOfUserReviews;
@property(copy, nonatomic) NSString* numberOfUserReviewsString;
-(id)initWithDictionary:(id)dictionary;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)zone;
@end

