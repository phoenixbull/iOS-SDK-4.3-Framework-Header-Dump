/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "iWorkImport-Structs.h"
#import "GQDWPContainerHint.h"
#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface GQDWPContainerHint : XXUnknownSuperclass {
@private
	long mPageIndex;
	long mCIndex;
	long mSIndex;
	long mLIndex;
	long mAnchorLocation;
	double mAttachmentPosition;
	CGRect mFrame;
}
-(id)initWithPageIndex:(long)pageIndex cIndex:(long)index sIndex:(long)index3 lIndex:(long)index4 anchorLocation:(long)location frame:(CGRect)frame;
-(long)pageIndex;
-(long)cIndex;
-(long)sIndex;
-(long)lIndex;
-(long)anchorLocation;
-(double)attachmentPosition;
-(CGRect)frame;
@end

@interface GQDWPContainerHint (Private)
-(int)readAttributesFromReader:(xmlTextReader*)reader;
@end

