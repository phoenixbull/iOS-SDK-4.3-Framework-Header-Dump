/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

#import "UIPickerViewDelegate.h"
#import "UITableViewDelegate.h"
#import "UITableViewDataSource.h"


@protocol MFMailComposeViewDelegate <UIPickerViewDelegate, UITableViewDelegate, UITableViewDataSource>
-(void)selectCurrentEntryForFromAddressPickerView:(id)addressPickerView;
-(void)scrollToSelectedEntryInFromAddressTableView:(id)addressTableView;
-(id)sendingEmailAddressIfExists;
-(BOOL)canShowFromField;
-(BOOL)canShowImageSizeField;
-(BOOL)sendingEmailDirtied;
-(BOOL)bccAddressesDirtied;
-(BOOL)hasAttachments;
-(id)currentScaleImageSize;
-(int)imageScaleFromUserDefaults;
-(id)addInlineAttachmentForInclusion:(id)inclusion;
@optional
-(void)composeBodyFieldDidFinishLoad;
@end
