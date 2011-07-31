/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "EventKitUI-Structs.h"
#import "EKDayViewProtocol.h"
#import "EKDayViewDelegate.h"
#import "EKDayViewDataSource.h"
#import "EKPadAllDayViewDataSource.h"
#import "EKPadAllDayViewDelegate.h"

@class EKPadDayAllDayView, EKDayView, NSDate, NSArray, UIView;

@interface EKPadDayView : XXUnknownSuperclass <EKDayViewDelegate, EKPadAllDayViewDelegate, EKPadAllDayViewDataSource, EKDayViewProtocol, EKDayViewDataSource> {
	EKDayView* _timedView;
	EKPadDayAllDayView* _allDayView;
	UIView* _bottomFader;
	UIView* _topFader;
	BOOL _dimsNonSelectedItems;
	CGRect _layedOutOccurrencesForBounds;
	id<EKDayViewDelegate> _delegate;
	id<EKDayViewDataSource> _dataSource;
}
@property(assign, nonatomic) id<EKDayViewDelegate> delegate;
@property(assign, nonatomic) id<EKDayViewDataSource> dataSource;
@property(copy, nonatomic) NSDate* selectedDate;
@property(assign, nonatomic) unsigned firstVisibleSecond;
@property(assign, nonatomic) BOOL allowsOccurrenceSelection;
@property(assign, nonatomic) BOOL dimsNonSelectedItems;
@property(readonly, assign, nonatomic) NSArray* occurrenceViews;
@property(assign, nonatomic) XXStruct_lQVxyC selectedDateGr;
-(id)initWithFrame:(CGRect)frame backgroundColor:(id)color opaque:(BOOL)opaque scrollbarShowsInside:(BOOL)inside;
-(void)dealloc;
-(void)setTopFader:(id)fader bottomFader:(id)fader2 sizeToImage:(BOOL)image;
-(id)viewForItemAtPath:(id)path;
-(CGRect)rectForItemAtPath:(id)path;
-(void)scrollEventsIntoViewAnimated:(BOOL)animated;
-(void)_resetOccurrences;
-(void)reloadData;
-(void)resetLastSelectedOccurrencePoint;
-(id)occurrenceVisibleRect:(id)rect;
-(void)scrollToItemAtPath:(id)path animated:(BOOL)animated;
-(void)scrollToOccurrence:(id)occurrence animated:(BOOL)animated;
-(void)scrollToDate:(id)date animated:(BOOL)animated;
-(void)setOutlineStyle:(int)style;
-(void)layoutSubviews;
-(id)_faderForFaderImage:(id)faderImage fader:(id)fader sizeToImage:(BOOL)image;
-(void)bringEventToFront:(id)front;
-(void)selectItemAtPath:(id)path;
-(id)selectedItem;
-(void)_notifyDelegateOfPressOnEvent:(id)pressOnEvent;
-(void)_notifyDelegateOfFinishedScrollingToOccurrence;
-(void)_notifyDelegateOfDragExitedOnOccurrence:(id)dragExitedOnOccurrence;
-(void)dayView:(id)view firstVisibleSecondChanged:(unsigned)changed;
-(void)dayView:(id)view didClickOnEvent:(id)event;
-(void)dayView:(id)view didPressOnEvent:(id)event;
-(void)dayViewDidFinishScrollingToOccurrence:(id)dayView;
-(void)dayView:(id)view didCreateOccurrenceViews:(id)views;
-(void)dayView:(id)view dragExitedEvent:(id)event;
-(void)dayView:(id)view didSelectItemAtPath:(id)path;
-(void)padAllDayView:(id)view occurrenceClicked:(id)clicked onDay:(XXStruct_lQVxyC)day;
-(void)padAllDayView:(id)view occurrencePressed:(id)pressed onDay:(XXStruct_lQVxyC)day;
-(void)padAllDayView:(id)view occurrenceDragExited:(id)exited;
-(void)padAllDayViewStartDrag:(id)drag;
-(void)padAllDayViewEmptySpaceClick:(id)click onDay:(XXStruct_lQVxyC)day;
-(void)padAllDayViewFinishScrollingToOccurrence:(id)occurrence;
-(void)padAllDayView:(id)view didSelectItemWithEventIndex:(unsigned)eventIndex;
-(unsigned)numberOfEventsInPadAllDayView:(id)padAllDayView;
-(id)padAllDayView:(id)view startDateForEventAtIndex:(unsigned)index;
-(id)padAllDayView:(id)view endDateForEventAtIndex:(unsigned)index;
-(id)padAllDayView:(id)view occurrenceViewForEventAtIndex:(unsigned)index;
-(unsigned)dayView:(id)view numberOfEventsInSection:(int)section;
-(id)dayView:(id)view startDateForItemPath:(id)itemPath;
-(id)dayView:(id)view endDateForItemPath:(id)itemPath;
-(double)dayView:(id)view durationForItemPath:(id)itemPath;
-(id)dayView:(id)view occurrenceViewForItemPath:(id)itemPath;
@end
