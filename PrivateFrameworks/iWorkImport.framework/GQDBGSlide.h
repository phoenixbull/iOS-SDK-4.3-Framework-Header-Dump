/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "GQDBGAbstractSlide.h"

@class GQDWPLayoutFrame, GQDBGMasterSlide;

__attribute__((visibility("hidden")))
@interface GQDBGSlide : GQDBGAbstractSlide {
@private
	GQDBGMasterSlide* mMaster;
	GQDWPLayoutFrame* mNoteFrame;
}
-(id)init;
-(void)dealloc;
-(id)master;
-(id)noteFrame;
@end

