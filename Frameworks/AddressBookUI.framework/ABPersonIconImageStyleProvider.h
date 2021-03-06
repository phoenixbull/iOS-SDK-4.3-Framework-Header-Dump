/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

#import "AddressBookUI-Structs.h"
#import "ABStyleProvider.h"

@class ABPersonImageView, ABPersonIconImageView;

@interface ABPersonIconImageStyleProvider : ABStyleProvider {
	ABPersonImageView* _imageView;
	ABPersonIconImageView* _iconImageView;
}
-(id)initWithIconImageView:(id)iconImageView imageView:(id)view;
-(void)clearWeakReferencesToObject:(id)object;
-(void)_clearAsStyleProvider;
-(void)dealloc;
-(id)cardPhotoOverlayImage;
-(id)cardPhotoMaskImage;
-(BOOL)cardPlaceholderImageShouldApplyMaskAndOverlay;
-(id)cardPlaceholderPersonImage;
-(id)cardPlaceholderCompanyImage;
@end

