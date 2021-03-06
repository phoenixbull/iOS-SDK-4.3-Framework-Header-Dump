/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

#import "AddressBookUI-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIImageView, ABNamePropertyGroup, ABPersonImageView, NSString, UIFont, UIView, ABMultiCellContentView, ABPersonNameDisplayView, ABPersonNameEditingViewContainer;
@protocol ABPersonTableHeaderViewDelegate, ABStyleProvider;

@interface ABPersonTableHeaderView : XXUnknownSuperclass {
@private
	BOOL _editing;
	BOOL _representsLinkedPeople;
	ABPersonImageView* _imageView;
	UIImageView* _imageShadowView;
	ABPersonNameDisplayView* _displayView;
	UIImageView* _multiplePhotoBackdropView;
	BOOL _showsMultiplePhotoBackdropView;
	ABNamePropertyGroup* _namePropertyGroup;
	ABMultiCellContentView* _editingView;
	ABPersonNameEditingViewContainer* _editingViewContainer;
	UIView* _extraHeaderView;
	id<ABPersonTableHeaderViewDelegate> _delegate;
	id<ABStyleProvider> _styleProvider;
}
@property(readonly, assign, nonatomic) ABPersonImageView* imageView;
@property(readonly, assign, nonatomic) ABPersonNameDisplayView* displayView;
@property(readonly, assign, nonatomic) UIView* editingViewContainer;
@property(readonly, assign, nonatomic) ABMultiCellContentView* editingView;
@property(retain, nonatomic) ABNamePropertyGroup* namePropertyGroup;
@property(assign, nonatomic) id<ABPersonTableHeaderViewDelegate> delegate;
@property(retain, nonatomic) id<ABStyleProvider> styleProvider;
@property(assign, nonatomic) BOOL representsLinkedPeople;
@property(retain, nonatomic) UIView* extraHeaderView;
@property(retain, nonatomic) UIView* customMessageView;
@property(retain, nonatomic) UIFont* messageDetailFont;
@property(copy, nonatomic) NSString* messageDetail;
@property(retain, nonatomic) UIFont* messageFont;
@property(copy, nonatomic) NSString* message;
@property(copy, nonatomic) NSString* alternateName;
@property(assign, nonatomic) void* personForImageView;
-(id)initWithFrame:(CGRect)frame styleProvider:(id)provider;
-(id)initWithFrame:(CGRect)frame;
-(void)setBackgroundColor:(id)color;
-(void)dealloc;
-(BOOL)_isSpecialInternalHeaderView;
-(BOOL)canBecomeFirstResponder;
-(BOOL)becomeFirstResponder;
-(BOOL)canResignFirstResponder;
-(BOOL)resignFirstResponder;
-(BOOL)isFirstResponder;
-(CGRect)_imageViewFrameWhenEditing:(BOOL)editing;
-(CGRect)_multiplePhotoBackdropViewFrame;
-(CGPoint)_displayViewOrigin;
-(float)_displayViewWidthForWidth:(float)width;
-(CGRect)_displayViewFrameForWidth:(float)width;
-(CGPoint)_editingViewOrigin;
-(float)_editingViewWidthForWidth:(float)width;
-(CGRect)_editingViewFrameForWidth:(float)width;
-(CGRect)_frameForEditingView;
-(CGPoint)_extraHeaderViewOriginForWidth:(float)width whenEditing:(BOOL)editing;
-(float)_extraHeaderViewAvailableWidth;
-(id)_displayView;
-(id)_imageShadowView;
-(id)_multiplePhotoBackdropViewImage;
-(id)_multiplePhotoBackdropView;
-(void*)personForName;
-(id)_newEditingViewContainerForWidth:(float)width;
-(void)_updateShowsMultiplePhotoBackdrop;
-(void)setEditing:(BOOL)editing animated:(BOOL)animated;
-(void)deselectAnimated:(BOOL)animated;
-(CGPoint)extraHeaderViewOrigin;
-(void)setPrimaryProperty:(int)property countryCode:(id)code;
-(void)reloadNameDataAnimated:(BOOL)animated;
-(void)reloadNameDataButNotModelAnimated:(BOOL)animated;
-(void)reloadImageData;
-(void)reloadData;
-(void)setAllowsEditing:(BOOL)editing;
-(CGSize)sizeThatFits:(CGSize)fits;
-(void)layoutSubviews;
-(void)imageViewSelected:(id)selected;
-(void)_updateRecordIfNeeded;
-(id)entryFieldForRow:(unsigned)row;
@end

