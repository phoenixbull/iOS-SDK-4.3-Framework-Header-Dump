/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface EDPivotAreaReference : XXUnknownSuperclass {
@private
	bool mByPosition;
	bool mRelative;
	bool mSelected;
	unsigned mFieldId;
	unsigned mCount;
}
+(id)pivotAreaReference;
-(id)init;
-(bool)byPosition;
-(void)setByPosition:(bool)position;
-(bool)relative;
-(void)setRelative:(bool)relative;
-(bool)selected;
-(void)setSelected:(bool)selected;
-(unsigned)fieldId;
-(void)setFieldId:(unsigned)anId;
-(unsigned)count;
-(void)setCount:(unsigned)count;
@end

