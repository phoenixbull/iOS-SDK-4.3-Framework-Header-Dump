/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

#import "PLStackableImage.h"
#import "PhotoLibrary-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIActivityIndicatorView, PLImageView, UIImageView, UIImage, UIView;

@interface PLCameraImportItemView : XXUnknownSuperclass <PLStackableImage> {
	PLImageView* _imageView;
@private
	UIView* _movieBadgeView;
	UIActivityIndicatorView* _spinner;
	UIActivityIndicatorView* _shadowSpinner;
}
@property(readonly, assign, nonatomic) UIImageView* imageView;
@property(assign, nonatomic, getter=isShadowEnabled) BOOL shadowEnabled;
@property(assign, nonatomic) float transitionProgress;
@property(readonly, assign, nonatomic) BOOL isBeingManipulated;
@property(assign, nonatomic) BOOL showProgressSpinner;
@property(retain, nonatomic) UIImage* image;
+(id)completedBadgeImage;
+(float)importItemViewBorderWidth;
-(id)initWithFrame:(CGRect)frame;
-(void)dealloc;
-(void)touchesBegan:(id)began withEvent:(id)event;
-(void)touchesMoved:(id)moved withEvent:(id)event;
-(void)touchesEnded:(id)ended withEvent:(id)event;
-(void)touchesCancelled:(id)cancelled withEvent:(id)event;
-(void)setDrawsBorders:(BOOL)borders;
-(void)setTextBadgeString:(id)string;
@end

