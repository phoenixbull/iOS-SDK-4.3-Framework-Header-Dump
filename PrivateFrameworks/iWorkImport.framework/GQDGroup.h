/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "GQDDrawable.h"
#import "iWorkImport-Structs.h"
#import "GQDNameMappable.h"

@class GQDWPExternalTextWrap;

__attribute__((visibility("hidden")))
@interface GQDGroup : GQDDrawable <GQDNameMappable> {
@private
	CFArrayRef mDrawables;
	GQDWPExternalTextWrap* mExternalTextWrap;
}
+(const StateSpec*)stateForReading;
-(void)dealloc;
-(CFArrayRef)drawables;
-(id)externalTextWrap;
@end

