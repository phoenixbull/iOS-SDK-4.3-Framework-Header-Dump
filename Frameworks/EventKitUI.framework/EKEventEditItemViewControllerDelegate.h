/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import "NSObject.h"


@protocol EKEventEditItemViewControllerDelegate <NSObject>
-(void)editItemViewController:(id)controller didCompleteWithAction:(int)action;
@optional
-(BOOL)eventEditItemViewControllerCommit:(id)commit;
-(void)eventEditItemViewControllerWantsKeyboardPinned:(BOOL)pinned;
@end

