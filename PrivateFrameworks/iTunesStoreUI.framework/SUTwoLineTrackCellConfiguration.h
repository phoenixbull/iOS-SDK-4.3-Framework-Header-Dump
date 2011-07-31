/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import "iTunesStoreUI-Structs.h"
#import "SUMediaItemCellConfiguration.h"


@interface SUTwoLineTrackCellConfiguration : SUMediaItemCellConfiguration {
}
+(id)copyDefaultContext;
+(float)rowHeightForContext:(id)context representedObject:(id)object;
-(id)init;
-(id)colorForLabelAtIndex:(unsigned)index withModifiers:(unsigned)modifiers;
-(id)fontForLabelAtIndex:(unsigned)index;
-(unsigned)indexOfLabelForPurchaseAnimation;
-(void)reloadLayoutInformation;
-(void)reloadImages;
-(void)reloadStrings;
@end

