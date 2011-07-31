/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/GameKit.framework/GameKit
 */

#import "GKServerWebViewController.h"

@class NSURL, NSString, GKPlayer;

@interface GKReportProblemViewController : GKServerWebViewController {
@private
	GKPlayer* _player;
	NSString* _baseURL;
}
@property(retain, nonatomic) GKPlayer* player;
@property(retain, nonatomic) NSString* baseURL;
@property(readonly, assign, nonatomic) NSURL* url;
-(id)initWithPlayer:(id)player;
-(void)dealloc;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;
-(void)viewWillAppear:(BOOL)view;
-(void)processGameKitURLComponents:(id)components;
@end

