/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

#import "AddressBookUI-Structs.h"
#import "ABPasteboardControl.h"
#import "ABPersonNameDisplayView.h"

@class ABNamePropertyGroup, UILabel, NSString, UIFont, UIView, ABStyleProvider;

@interface ABPersonNameDisplayView : ABPasteboardControl {
@private
	ABNamePropertyGroup* _namePropertyGroup;
	int _primaryProperty;
	NSString* _primaryPropertyFormattingCountryCode;
	float _minimumHeight;
	UILabel* _headlineLabel;
	UILabel* _tagLineLabel;
	UILabel* _messageLabel;
	UILabel* _messageDetailLabel;
	UIFont* _messageFont;
	UIFont* _messageDetailFont;
	ABStyleProvider* _styleProvider;
	NSString* _customHeadline;
	NSString* _customTagLine;
	NSString* _customMessage;
	NSString* _customMessageDetail;
	UIView* _customMessageView;
}
@property(retain, nonatomic) ABNamePropertyGroup* namePropertyGroup;
@property(assign, nonatomic) int primaryProperty;
@property(copy, nonatomic) NSString* primaryPropertyFormattingCountryCode;
@property(assign, nonatomic) float minimumHeight;
@property(copy, nonatomic) NSString* headline;
@property(copy, nonatomic) NSString* tagLine;
@property(retain, nonatomic) ABStyleProvider* styleProvider;
@property(copy, nonatomic) NSString* message;
@property(copy, nonatomic) NSString* messageDetail;
@property(retain, nonatomic) UIFont* messageFont;
@property(retain, nonatomic) UIFont* messageDetailFont;
@property(retain, nonatomic) UIView* customMessageView;
-(id)initWithFrame:(CGRect)frame;
-(void)dealloc;
-(void)initializeHeadlineAndTaglineIfNeeded;
-(CGSize)sizeThatFits:(CGSize)fits;
-(void)setFrame:(CGRect)frame;
-(CGSize)multilineLabel:(id)label sizeThatFits:(CGSize)fits;
-(void)layoutSubviews;
-(void)reloadNameDataAnimated:(BOOL)animated;
-(void)_adjustLabelTextColorForPasteboardSelection:(BOOL)pasteboardSelection;
-(BOOL)abShouldShowMenu;
-(void)abMenuControllerWillShow:(id)abMenuController;
-(void)abMenuControllerWillHide;
-(BOOL)canPerformAction:(SEL)action withSender:(id)sender;
-(void)copy:(id)copy;
@end

@interface ABPersonNameDisplayView (Internal)
-(id)_copyPrimaryValue;
-(void)_updateHeadlineText;
-(void)_updateTagLineText;
-(void)_appendString:(id)string withFormatKey:(id)formatKey toTagLine:(id)tagLine;
-(id)_copyTagLine;
-(id)_newLabelWithFont:(id)font numberOfLines:(unsigned)lines;
-(void)_setMessageText:(id)text isDetail:(BOOL)detail;
-(void)_setFont:(id)font isDetail:(BOOL)detail;
-(void)_setLabel:(id)label highlighted:(BOOL)highlighted animated:(BOOL)animated;
-(void)_setSubviewsHighlighted:(BOOL)highlighted animated:(BOOL)animated;
-(float)_heightForLabelsForWidth:(float)width;
-(void)setStyleProvider:(id)provider;
@end

