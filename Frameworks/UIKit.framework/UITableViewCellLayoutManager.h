/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "UITableViewCellLayoutManager.h"
#import "UIKit-Structs.h"


@interface UITableViewCellLayoutManager : XXUnknownSuperclass {
}
+(id)layoutManagerForTableViewCellStyle:(int)tableViewCellStyle;
-(float)defaultTextLabelFontSizeForCell:(id)cell;
-(float)defaultDetailTextLabelFontSizeForCell:(id)cell;
-(id)defaultImageViewForCell:(id)cell;
-(id)defaultLabelForCell:(id)cell ofClass:(Class)aClass;
-(id)defaultLabelForCell:(id)cell;
-(id)defaultEditableTextFieldForCell:(id)cell;
-(id)imageViewForCell:(id)cell;
-(id)textLabelForCell:(id)cell;
-(id)detailTextLabelForCell:(id)cell;
-(id)editableTextFieldForCell:(id)cell;
-(float)contentIndentationForCell:(id)cell;
-(void)layoutSubviewsOfCell:(id)cell;
-(void)cell:(id)cell willTransitionToState:(unsigned)state;
-(void)cell:(id)cell didTransitionToState:(unsigned)state;
-(CGRect)contentRectForCell:(id)cell forState:(unsigned)state;
-(BOOL)editControlShouldAppearForCell:(id)editControl;
-(CGRect)editControlStartingRectForCell:(id)cell forNewEditingState:(BOOL)newEditingState;
-(CGRect)editControlEndingRectForCell:(id)cell forNewEditingState:(BOOL)newEditingState;
-(BOOL)editControlShouldFadeForCell:(id)editControl;
-(BOOL)reorderControlShouldAppearForCell:(id)reorderControl;
-(CGRect)reorderControlStartingRectForCell:(id)cell forNewEditingState:(BOOL)newEditingState;
-(CGRect)reorderControlEndingRectForCell:(id)cell forNewEditingState:(BOOL)newEditingState;
-(BOOL)reorderControlShouldFadeForCell:(id)reorderControl;
-(BOOL)reorderSeparatorShouldAppearForCell:(id)reorderSeparator;
-(CGRect)reorderSeparatorStartingRectForCell:(id)cell forNewEditingState:(BOOL)newEditingState;
-(CGRect)reorderSeparatorEndingRectForCell:(id)cell forNewEditingState:(BOOL)newEditingState;
-(BOOL)reorderSeparatorShouldFadeForCell:(id)reorderSeparator;
-(BOOL)accessoryShouldAppearForCell:(id)accessory;
-(CGRect)accessoryStartingRectForCell:(id)cell forNewEditingState:(BOOL)newEditingState;
-(CGRect)accessoryEndingRectForCell:(id)cell forNewEditingState:(BOOL)newEditingState;
-(BOOL)accessoryShouldFadeForCell:(id)accessory;
-(BOOL)editingAccessoryShouldAppearForCell:(id)editingAccessory;
-(CGRect)editingAccessoryStartingRectForCell:(id)cell forNewEditingState:(BOOL)newEditingState;
-(CGRect)editingAccessoryEndingRectForCell:(id)cell forNewEditingState:(BOOL)newEditingState;
-(BOOL)editingAccessoryShouldFadeForCell:(id)editingAccessory;
-(CGRect)deleteConfirmationRectForCell:(id)cell;
-(CGRect)backgroundStartingRectForCell:(id)cell forNewEditingState:(BOOL)newEditingState;
-(CGRect)backgroundEndingRectForCell:(id)cell forNewEditingState:(BOOL)newEditingState;
-(CGRect)contentStartingRectForCell:(id)cell forNewEditingState:(BOOL)newEditingState;
-(CGRect)contentEndingRectForCell:(id)cell forNewEditingState:(BOOL)newEditingState;
-(CGRect)contentStartingRectForCell:(id)cell forDisplayOfDeleteConfirmation:(BOOL)deleteConfirmation;
-(CGRect)contentEndingRectForCell:(id)cell forDisplayOfDeleteConfirmation:(BOOL)deleteConfirmation;
@end

@interface UITableViewCellLayoutManager (UITableViewCellLayoutManagerStatic)
-(CGRect)_backgroundRectForCell:(id)cell forIndentedState:(BOOL)indentedState;
-(CGRect)_adjustedBackgroundRectForCell:(id)cell forIndentedState:(BOOL)indentedState;
-(CGRect)_adjustedBackgroundContentRectForCell:(id)cell forIndentedState:(BOOL)indentedState;
-(CGRect)_editControlRectForCell:(id)cell offscreen:(BOOL)offscreen;
-(CGRect)_reorderControlRectForCell:(id)cell offscreen:(BOOL)offscreen;
-(CGRect)_reorderSeparatorRectForCell:(id)cell offscreen:(BOOL)offscreen;
-(CGRect)_accessoryRectForCell:(id)cell offscreen:(BOOL)offscreen;
-(CGRect)_editingAccessoryRectForCell:(id)cell offscreen:(BOOL)offscreen;
-(CGRect)_contentRectForCell:(id)cell forEditingState:(BOOL)editingState showingDeleteConfirmation:(BOOL)confirmation;
@end

