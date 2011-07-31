/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/GameKit.framework/GameKit
 */

#import "GKDataRequest.h"

@class NSArray;

@interface GKFilterEmailsByCommunityDataRequest : GKDataRequest {
@private
	NSArray* _emails;
}
@property(retain, nonatomic) NSArray* emails;
-(void)dealloc;
-(id)key;
-(id)request;
-(void)handleResponseFromServer:(id)server error:(id)error;
@end

