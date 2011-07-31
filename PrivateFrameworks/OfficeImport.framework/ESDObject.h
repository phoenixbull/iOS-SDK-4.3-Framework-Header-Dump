/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "OfficeImport-Structs.h"
#import "ESDObject.h"

@class ESDContainer;

__attribute__((visibility("hidden")))
@interface ESDObject : XXUnknownSuperclass {
@private
	EshObject* mEshObject;
	ESDContainer* mParent;
	bool mIsChart;
}
-(id)initWithEshObject:(EshObject*)eshObject;
-(id)initWithType:(unsigned short)type;
-(id)initFromReader:(OcReader*)reader type:(unsigned short)type version:(unsigned short)version;
-(void)dealloc;
-(EshObject*)eshObject;
-(id)parent;
-(bool)isChart;
-(void)setChart:(bool)chart;
@end

@interface ESDObject (ESDShapeAdditions)
-(EshShape*)eshShape;
-(EshGroup*)eshGroup;
-(long)shapeID;
@end

@interface ESDObject (EBAdditions)
-(id)ebInitWithType:(unsigned short)type version:(unsigned short)version state:(id)state;
@end

@interface ESDObject (PBAdditions)
-(id)pbInitWithType:(unsigned short)type version:(unsigned short)version state:(id)state;
@end
