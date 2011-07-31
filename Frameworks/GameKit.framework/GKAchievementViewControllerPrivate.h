/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/GameKit.framework/GameKit
 */

#import "GKTableViewController.h"

@class NSArray, GKTableViewCell, NSMutableArray, NSMutableDictionary, GKGame;

@interface GKAchievementViewControllerPrivate : GKTableViewController {
	GKGame* _game;
	NSMutableArray* _achievements;
	unsigned _numberOfAchievementsAchieved;
	unsigned _pointsTally;
	struct {
		unsigned playButtonVisible : 1;
		unsigned usePlayerBackground : 1;
		unsigned translucentNavBar : 1;
		unsigned reserved : 27;
	} _flags;
	NSMutableDictionary* _tokenImageCache;
	NSMutableDictionary* _progressImageCache;
	GKTableViewCell* _detailHeaderCell;
	BOOL _isInFormSheet;
}
@property(retain, nonatomic) GKGame* game;
@property(retain, nonatomic) NSArray* achievements;
@property(assign, nonatomic) unsigned numberOfAchievementsAchieved;
@property(assign, nonatomic) unsigned pointsTally;
@property(retain, nonatomic) NSMutableDictionary* tokenImageCache;
@property(retain, nonatomic) NSMutableDictionary* progressImageCache;
@property(retain, nonatomic) GKTableViewCell* detailHeaderCell;
@property(assign, nonatomic) BOOL isInFormSheet;
@property(assign, nonatomic, getter=isPlayButtonVisible) BOOL playButtonVisible;
-(id)initWithGame:(id)game;
-(id)initWithGame:(id)game withFriend:(id)aFriend;
-(void)dealloc;
-(void)loadView;
-(float)marginForTableView:(id)tableView;
-(id)title;
-(void)localPlayerDidAuthenticate:(id)localPlayer;
-(void)viewDidUnload;
-(void)viewWillAppear:(BOOL)view;
-(void)playTapped;
-(void)reloadView;
-(void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
-(void)updateStatusWithError:(id)error;
-(void)_gkRefreshContents;
-(void)addNonAchievedAchievementsTo:(id)to withAchievementDescription:(id)achievementDescription;
-(void)updatePlayerGameAchievements:(id)achievements;
-(int)numberOfSectionsInTableView:(id)tableView;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;
-(id)imageForPercentAchieved:(int)percentAchieved withCompletionHandler:(id)completionHandler;
-(id)tokenImageForAchievement:(id)achievement image:(id)image withCompletionHandler:(id)completionHandler;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(float)tableView:(id)view heightForHeaderInSection:(int)section;
-(id)tableView:(id)view viewForHeaderInSection:(int)section;
@end

