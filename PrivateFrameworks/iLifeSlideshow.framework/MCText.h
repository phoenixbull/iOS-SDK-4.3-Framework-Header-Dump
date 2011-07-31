/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iLifeSlideshow.framework/iLifeSlideshow
 */

#import "MCObject.h"

@class MCContainerEffect, NSAttributedString, MCAsset, NSString;

@interface MCText : MCObject {
	unsigned mIndex;
	NSAttributedString* mAttributedString;
	MCAsset* mAsset;
	NSString* mKeyInAsset;
	MCContainerEffect* mContainer;
}
@property(assign) unsigned index;
@property(retain) MCAsset* asset;
@property(copy) NSString* keyInAsset;
@property(copy) NSAttributedString* attributedString;
@property(assign) MCContainerEffect* container;
-(id)init;
-(id)initWithImprint:(id)imprint andMontage:(id)montage;
-(void)demolish;
-(id)imprint;
@end
