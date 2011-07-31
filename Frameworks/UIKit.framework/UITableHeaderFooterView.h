/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class UIImage, UITableHeaderFooterViewLabel, UITableView, NSString;

@interface UITableHeaderFooterView : UIView {
	UITableHeaderFooterViewLabel* _label;
	UIImage* _backgroundImage;
	int _tableViewStyle;
	BOOL _sectionHeader;
	CGRect _frame;
	int _textAlignment;
	UITableView* _tableView;
	float _maxTitleWidth;
	BOOL _labelBackgroundColorNeedsUpdate;
}
@property(assign, nonatomic) int tableViewStyle;
@property(assign, nonatomic) BOOL sectionHeader;
@property(assign, nonatomic) UITableView* tableView;
@property(assign, nonatomic) float maxTitleWidth;
@property(assign, nonatomic) int textAlignment;
@property(retain, nonatomic) NSString* text;
+(id)_defaultFontForTableViewStyle:(int)tableViewStyle isSectionHeader:(BOOL)header;
-(id)initWithFrame:(CGRect)frame;
-(void)dealloc;
-(void)setFrame:(CGRect)frame;
-(CGRect)frame;
-(CGSize)_textSizeForWidth:(float)width;
-(void)_invalidateLabelBackgroundColor;
-(void)_updateLabelBackgroundColor;
-(void)_updateLabelBackgroundColorIfNeeeded;
-(id)_label:(BOOL)label;
-(CGRect)_labelFrame;
-(CGSize)sizeThatFits:(CGSize)fits;
-(void)_updateBackgroundImage;
-(void)_updateLayerContents;
-(void)setOpaque:(BOOL)opaque;
-(void)setBackgroundColor:(id)color;
-(void)layoutSubviews;
-(id)_scriptingInfo;
@end
