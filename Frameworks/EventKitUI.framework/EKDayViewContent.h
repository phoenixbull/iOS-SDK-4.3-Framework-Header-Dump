/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "EventKitUI-Structs.h"

@class NSMutableArray, NSDate, EKDayGridView;
@protocol EKDayViewContentDataSource, EKDayViewContentDelegate;

@interface EKDayViewContent : XXUnknownSuperclass {
	EKDayGridView* _grid;
	NSMutableArray* _itemsByDay;
	NSDate* _selectedDate;
	double _dayStart;
	double _dayStartGMTOffset;
	double _dayEndGMTOffset;
	unsigned _loadingOccurrences : 1;
	unsigned _allowsOccurrenceSelection : 1;
	unsigned _putSelectionOnTop : 1;
	unsigned _showsGrid : 1;
	unsigned _darkensSelection : 1;
	unsigned _eventsFillGrid : 1;
	unsigned _dimsNonSelectedItems : 1;
	unsigned _selectedEventIndex;
	unsigned _daysToDisplay;
	NSMutableArray* _dayStarts;
	id<EKDayViewContentDelegate> _delegate;
	id<EKDayViewContentDataSource> _dataSource;
}
@property(assign, nonatomic) id<EKDayViewContentDataSource> dataSource;
@property(assign, nonatomic) id<EKDayViewContentDelegate> delegate;
@property(readonly, assign, nonatomic) double firstEventSecond;
@property(assign, nonatomic) BOOL dimsNonSelectedItems;
@property(assign, nonatomic) BOOL showsGrid;
@property(assign, nonatomic) BOOL eventsFillGrid;
@property(assign, nonatomic) BOOL darkensSelection;
@property(assign, nonatomic) BOOL showsLeftBorder;
@property(assign, nonatomic) BOOL allowsOccurrenceSelection;
-(id)initWithFrame:(CGRect)frame backgroundColor:(id)color opaque:(BOOL)opaque numberOfDaysToDisplay:(unsigned)display;
-(id)initWithFrame:(CGRect)frame backgroundColor:(id)color opaque:(BOOL)opaque;
-(id)initWithFrame:(CGRect)frame opaque:(BOOL)opaque;
-(id)initWithFrame:(CGRect)frame;
-(void)dealloc;
-(BOOL)eventIndexExists:(unsigned)exists;
-(unsigned)selectedEventIndex;
-(void)selectItemWithEventIndex:(unsigned)eventIndex;
-(void)setSelectedDate:(id)date;
-(id)getAllOccurrenceViews;
-(void)dayOccurrenceViewDragExited:(id)exited;
-(void)dayOccurrenceViewStartTouch:(id)touch atPoint:(CGPoint)point;
-(void)dayOccurrenceViewClicked:(id)clicked atPoint:(CGPoint)point;
-(void)_selectedOccurrenceChanged:(id)changed;
-(id)grid;
-(id)startDateForEventIndex:(unsigned)eventIndex;
-(id)viewForEventIndex:(unsigned)eventIndex;
-(unsigned)eventIndexForView:(id)view;
-(void)setViewsDimmed:(BOOL)dimmed forEventIndex:(unsigned)eventIndex;
-(CGPoint)pointForDate:(XXStruct_lQVxyC)date;
-(id)occurrenceViewForEventOccurrence:(id)eventOccurrence onDate:(XXStruct_lQVxyC)date;
-(id)occurrenceViewForOccurrence:(id)occurrence;
-(float)_dayWidth;
-(XXStruct_lQVxyC)_dateForPoint:(CGPoint)point;
-(void)layoutSubviews;
-(void)removeAllOccurrenceViews;
-(double)_offsetTimeForDST:(double)dst timeZone:(CFTimeZoneRef)zone dayStartTimeZone:(id)zone3;
-(NSRange)_dayRangeForEventWithStartDate:(id)startDate duration:(double)duration;
-(NSRange)_dayRangeForOccurrence:(id)occurrence;
-(NSRange)_dayRangeForEventAtIndex:(int)index;
-(void)reloadData;
-(void)_layoutContentItems:(id)items forDayStart:(id)dayStart xPosition:(float)position width:(float)width;
-(BOOL)eventsIntersectRect:(CGRect)rect;
-(void)touchesEnded:(id)ended withEvent:(id)event;
@end

