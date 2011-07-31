/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import "ChatKit-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UILabel, NSString, CKSummaryLabel, CKConversation, UIDateLabel, UIImageView;

@interface CKConversationListCell : XXUnknownSuperclass {
@private
	CKConversation* _conversation;
	UIDateLabel* _dateLabel;
	UILabel* _hitsLabel;
	CKSummaryLabel* _summaryLabel;
	CKSummaryLabel* _backupSummaryLabel;
	UIImageView* _unreadIndicatorImageView;
	UILabel* _fromLabel;
	UIImageView* _groupImageView;
	NSString* _searchSummaryText;
	int _searchMessageID;
	int _searchPartID;
}
@property(readonly, assign, nonatomic) int searchMessageID;
@property(readonly, assign, nonatomic) int searchPartID;
@property(retain, nonatomic) CKConversation* conversation;
+(id)identifier;
+(float)cellHeight;
-(id)initWithFrame:(CGRect)frame conversation:(id)conversation;
-(void)updateFontSize;
-(void)dealloc;
-(void)clearText;
-(void)updateContents;
-(void)updateWithSearchResult:(CKSpotlightSearchResult*)searchResult;
-(void)_createBackupSummaryLabel;
-(void)setHighlighted:(BOOL)highlighted animated:(BOOL)animated;
-(void)willTransitionToState:(unsigned)state;
-(void)didTransitionToState:(unsigned)state;
-(void)layoutSubviews;
@end

