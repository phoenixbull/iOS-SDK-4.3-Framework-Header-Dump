/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "CHDAxis.h"


__attribute__((visibility("hidden")))
@interface CHDDateAxis : CHDAxis {
@private
	bool mAutomatic;
	double mMajorUnitValue;
	double mMinorUnitValue;
	int mMinorTimeUnit;
	int mMajorTimeUnit;
	int mBaseTimeUnit;
}
-(id)initWithResources:(id)resources;
-(bool)isDate;
-(bool)isAutomatic;
-(void)setAutomatic:(bool)automatic;
-(double)majorUnitValue;
-(void)setMajorUnitValue:(double)value;
-(double)minorUnitValue;
-(void)setMinorUnitValue:(double)value;
-(int)majorTimeUnit;
-(void)setMajorTimeUnit:(int)unit;
-(int)minorTimeUnit;
-(void)setMinorTimeUnit:(int)unit;
-(int)baseTimeUnit;
-(void)setBaseTimeUnit:(int)unit;
@end

