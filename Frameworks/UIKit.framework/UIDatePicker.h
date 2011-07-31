/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIControl.h"
#import "NSCoding.h"
#import "UIKit-Structs.h"
#import "UIDatePicker.h"

@class NSCalendar, NSDate, UIPickerView, NSLocale, NSTimeZone;

@interface UIDatePicker : UIControl <NSCoding> {
@private
	UIPickerView* _pickerView;
}
@property(assign, nonatomic) int datePickerMode;
@property(retain, nonatomic) NSLocale* locale;
@property(retain, nonatomic) NSTimeZone* timeZone;
@property(copy, nonatomic) NSCalendar* calendar;
@property(retain, nonatomic) NSDate* date;
@property(retain, nonatomic) NSDate* minimumDate;
@property(retain, nonatomic) NSDate* maximumDate;
@property(assign, nonatomic) double countDownDuration;
@property(assign, nonatomic) int minuteInterval;
-(void)_insertPickerView;
-(id)initWithFrame:(CGRect)frame;
-(id)initWithCoder:(id)coder;
-(void)_populateArchivedSubviews:(id)subviews;
-(void)encodeWithCoder:(id)coder;
-(void)setDate:(id)date animated:(BOOL)animated;
-(CGSize)sizeThatFits:(CGSize)fits;
@end

@interface UIDatePicker (UIDatePickerDeprecated)
-(void)setDelegate:(id)delegate;
-(void)setTimeInterval:(double)interval;
-(double)timeInterval;
-(id)dateComponents;
-(void)setDateComponents:(id)components;
-(void)setStaggerTimeIntervals:(BOOL)intervals;
-(void)setHighlightsToday:(BOOL)today;
-(int)hour;
-(int)minute;
-(int)second;
-(void)setDate:(id)date animate:(BOOL)animate;
-(void)setFrame:(CGRect)frame;
@end

