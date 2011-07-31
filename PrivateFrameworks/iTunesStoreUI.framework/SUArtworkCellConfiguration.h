/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import "iTunesStoreUI-Structs.h"
#import "SUArrayCellConfiguration.h"
#import "ISStoreURLOperationDelegate.h"

@class NSMutableArray, NSMutableDictionary;

@interface SUArtworkCellConfiguration : SUArrayCellConfiguration <ISStoreURLOperationDelegate> {
	NSMutableDictionary* _artworkByURL;
	NSMutableArray* _artworkLoadOperations;
}
+(id)copyDefaultContext;
-(void)dealloc;
-(id)artworkImageForItemImage:(id)itemImage;
-(id)artworkImageForURL:(id)url;
-(void)cancelArtworkRequests;
-(id)copyImageDataProvider;
-(void)reloadAfterArtworkLoad;
-(void)setRepresentedObject:(id)object;
-(void)operation:(id)operation failedWithError:(id)error;
-(void)operation:(id)operation finishedWithOutput:(id)output;
-(id)_artworkImageForURL:(id)url dataProvider:(id)provider;
@end

