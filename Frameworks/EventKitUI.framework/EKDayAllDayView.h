/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import "EventKitUI-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIScrollView, UILabel, NSMutableArray;
@protocol EKDayAllDayViewDataSource, EKDayAllDayViewDelegate;

__attribute__((visibility("hidden")))
@interface EKDayAllDayView : XXUnknownSuperclass {
@private
	NSMutableArray* _occurrenceViews;
	UILabel* _allDay;
	UIScrollView* _scroller;
	float _occurrenceInset;
	id<EKDayAllDayViewDelegate> _delegate;
	BOOL _allowSelection;
	BOOL _showSelection;
	BOOL _dimsNonSelectedItems;
	int _maxVisibleItems;
	unsigned _selectedEventIndex;
	id<EKDayAllDayViewDataSource> _dataSource;
}
@property(assign, nonatomic) int maxVisibleItems;
@property(assign, nonatomic) id<EKDayAllDayViewDelegate> delegate;
@property(assign, nonatomic) id<EKDayAllDayViewDataSource> dataSource;
@property(assign, nonatomic) BOOL dimsNonSelectedItems;
@property(assign, nonatomic) BOOL allowsOccurrenceSelection;
@property(assign, nonatomic) BOOL showsSelection;
-(id)initWithFrame:(CGRect)frame;
-(void)dealloc;
-(id)viewForEventIndex:(unsigned)eventIndex;
-(unsigned)eventIndexForView:(id)view;
-(unsigned)selectedEventIndex;
-(void)selectItemWithEventIndex:(unsigned)eventIndex;
-(void)setOccurrenceInset:(float)inset labelInset:(float)inset2;
-(void)removeAllOccurrenceViews;
-(void)reloadData;
-(void)didMoveToWindow;
-(void)dayOccurrenceViewClicked:(id)clicked atPoint:(CGPoint)point;
-(CGSize)sizeThatFits:(CGSize)fits;
@end

