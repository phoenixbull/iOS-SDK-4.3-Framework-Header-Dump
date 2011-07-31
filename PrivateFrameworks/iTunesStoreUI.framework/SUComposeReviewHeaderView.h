/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "iTunesStoreUI-Structs.h"

@class UIImageView, NSString, ISReview, SUComposeTextFieldListView, SURatingControl, UILabel, UIResponder;
@protocol SUComposeReviewHeaderDelegate;

@interface SUComposeReviewHeaderView : XXUnknownSuperclass {
	UIImageView* _backgroundView;
	id<SUComposeReviewHeaderDelegate> _delegate;
	SURatingControl* _ratingControl;
	UILabel* _ratingLabel;
	ISReview* _review;
	unsigned _showNicknameField : 1;
	int _style;
	SUComposeTextFieldListView* _textFieldListView;
}
@property(readonly, assign, nonatomic) int composeReviewStyle;
@property(assign, nonatomic) id<SUComposeReviewHeaderDelegate> delegate;
@property(retain, nonatomic) ISReview* review;
@property(readonly, assign, nonatomic) NSString* title;
@property(assign, nonatomic) float rating;
@property(readonly, assign, nonatomic) NSString* nickname;
@property(readonly, assign, nonatomic) UIResponder* initialFirstResponder;
-(id)initWithFrame:(CGRect)frame style:(int)style;
-(void)dealloc;
-(void)layoutSubviews;
-(void)sizeToFit;
-(int)numberOfColumnsInTextFieldList:(id)textFieldList;
-(int)numberOfFieldsInTextFieldList:(id)textFieldList;
-(id)textFieldList:(id)list configurationForFieldAtIndex:(unsigned)index;
-(void)textFieldListValidityDidChange:(id)textFieldListValidity;
-(void)textFieldListValuesDidChange:(id)textFieldListValues;
-(void)_layoutSubviewsForPadStyle;
-(void)_layoutSubviewsForPhoneStyle;
-(void)_setupViewsForPadStyle;
-(void)_setupViewsForPhoneStyle;
@end

