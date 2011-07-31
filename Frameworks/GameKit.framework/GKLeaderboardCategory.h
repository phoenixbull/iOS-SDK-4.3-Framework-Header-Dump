/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/GameKit.framework/GameKit
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

@interface GKLeaderboardCategory : XXUnknownSuperclass {
	NSString* _categoryID;
	NSString* _localizedTitle;
	int _overallRank;
	int _overallRankCount;
	int _rankAmongFriends;
	int _friendCount;
}
@property(retain, nonatomic) NSString* categoryID;
@property(retain, nonatomic) NSString* localizedTitle;
@property(assign, nonatomic) int overallRank;
@property(assign, nonatomic) int overallRankCount;
@property(assign, nonatomic) int rankAmongFriends;
@property(assign, nonatomic) int friendCount;
+(id)categoryWithDictionary:(id)dictionary;
-(void)dealloc;
-(id)description;
@end

