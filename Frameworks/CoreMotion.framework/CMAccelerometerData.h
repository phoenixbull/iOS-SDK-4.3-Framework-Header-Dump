/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

#import "CoreMotion-Structs.h"
#import "CMLogItem.h"


@interface CMAccelerometerData : CMLogItem {
@private
	id _internal;
}
@property(readonly, assign, nonatomic) XXStruct_taVrlB acceleration;
-(id)initWithAcceleration:(XXStruct_ZUkpeA)acceleration andTimestamp:(double)timestamp;
-(id)initWithCoder:(id)coder;
-(void)encodeWithCoder:(id)coder;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)zone;
-(id)description;
@end

