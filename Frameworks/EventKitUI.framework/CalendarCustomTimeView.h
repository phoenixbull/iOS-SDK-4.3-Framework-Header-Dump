/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import "EventKitUI-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, UIFont;

__attribute__((visibility("hidden")))
@interface CalendarCustomTimeView : XXUnknownSuperclass {
@private
	int _style;
	unsigned _isAllDay : 1;
	unsigned _showDates : 1;
	unsigned _highlighted : 1;
	unsigned _forceSingleLine : 1;
	unsigned _startDesignator : 2;
	unsigned _endDesignator : 2;
	XXStruct_lQVxyC _startDate;
	XXStruct_lQVxyC _endDate;
	NSString* _startTimeString;
	NSString* _endTimeString;
	NSString* _startDateString;
	NSString* _endDateString;
	UIFont* _timeFont;
	UIFont* _designatorFont;
	UIFont* _betweenFont;
	NSString* _betweenTimesString;
	NSString* _startDesignatorString;
	NSString* _endDesignatorString;
	float _startTimeX;
	float _startDateX;
	float _endTimeX;
	float _endDateX;
	float _startTimeDesignatorX;
	float _endTimeDesignatorX;
	float _betweenTimeX;
	float _firstLineWidth;
	float _secondLineWidth;
	float _fullWidth;
	float _fullHeight;
	float _yTextOffset;
}
-(id)initWithFrame:(CGRect)frame style:(int)style;
-(void)dealloc;
-(void)_localeChanged;
-(void)_rebuildStrings;
-(void)setIsAllDay:(BOOL)day;
-(void)setShowDates:(BOOL)dates;
-(BOOL)showDates;
-(BOOL)_isTwoLinesHigh;
-(int)_designatorForTime:(XXStruct_lQVxyC)time use24Hr:(BOOL)hr;
-(id)_timeString:(XXStruct_lQVxyC)string use24Hr:(BOOL)hr;
-(id)_dateString:(XXStruct_lQVxyC)string;
-(void)setStartDate:(XXStruct_lQVxyC)date endDate:(XXStruct_lQVxyC)date2;
-(void)relayoutText;
-(void)setHighlighted:(BOOL)highlighted;
-(void)setForceSingleLine:(BOOL)line;
-(BOOL)isHighlighted;
-(void)drawRect:(CGRect)rect;
-(float)fullTextHeight;
-(float)fullTextWidth;
@end

