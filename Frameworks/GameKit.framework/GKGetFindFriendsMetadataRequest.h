/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/GameKit.framework/GameKit
 */

#import "GKDataRequest.h"

@class NSString;

@interface GKGetFindFriendsMetadataRequest : GKDataRequest {
	NSString* _buttonUsageHelp;
	NSString* _buttonTitle;
	NSString* _sectionTitle;
	BOOL _friendFinderVisible;
}
@property(retain, nonatomic) NSString* buttonUsageHelp;
@property(retain, nonatomic) NSString* buttonTitle;
@property(retain, nonatomic) NSString* sectionTitle;
@property(assign, nonatomic) BOOL friendFinderVisible;
-(void)dealloc;
-(id)key;
-(id)cacheKey;
-(int)cachePriority;
-(int)cacheType;
-(id)request;
-(void)handleResponseFromServer:(id)server error:(id)error;
@end

