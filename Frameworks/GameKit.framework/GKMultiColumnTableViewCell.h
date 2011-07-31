/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/GameKit.framework/GameKit
 */

#import "GKTableViewCell.h"
#import "GameKit-Structs.h"

@class NSArray, GKCellBackgroundView;

@interface GKMultiColumnTableViewCell : GKTableViewCell {
	unsigned _columnCount;
	NSArray* _contentsArray;
	int _selectedColumn;
	float _columnSeparatorWidth;
	SEL _columnCountSetter;
	SEL _selectedColumnSetter;
	BOOL _multiCellEnabled;
}
@property(assign, nonatomic) unsigned columnCount;
@property(assign, nonatomic) int selectedColumn;
@property(assign, nonatomic) float columnSeparatorWidth;
@property(copy, nonatomic) NSArray* contentsArray;
@property(assign, nonatomic) SEL columnCountSetter;
@property(assign, nonatomic) SEL selectedColumnSetter;
@property(assign, nonatomic) BOOL multiCellEnabled;
@property(readonly, assign, nonatomic) GKCellBackgroundView* selectedCellBackgroundView;
@property(readonly, assign, nonatomic) GKCellBackgroundView* cellBackgroundView;
-(id)initWithStyle:(int)style reuseIdentifier:(id)identifier tableViewStyle:(int)style3 backgroundStyle:(int)style4;
-(void)dealloc;
-(void)prepareForReuse;
-(void)layoutSubviews;
-(void)setFrame:(CGRect)frame;
-(void)setHighlighted:(BOOL)highlighted animated:(BOOL)animated;
-(void)_updateHighlightColorsForView:(id)view highlighted:(BOOL)highlighted;
-(void)setSelectedColumn:(int)column animated:(BOOL)animated;
-(void)setSelected:(BOOL)selected animated:(BOOL)animated;
-(void)updateBackgroundViews;
-(void)configureBackgroundView;
@end
