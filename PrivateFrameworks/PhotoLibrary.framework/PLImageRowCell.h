/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

#import "PhotoLibrary-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSArray, NSMutableArray;

@interface PLImageRowCell : XXUnknownSuperclass {
	NSMutableArray* _stackItemViews;
	CGImageRef _rowImage;
}
@property(readonly, assign, nonatomic) NSArray* stackItemViews;
+(Class)layerClass;
-(id)initWithReuseIdentifier:(id)reuseIdentifier;
-(void)dealloc;
-(void)prepareForReuse;
-(void)addStackItemView:(id)view;
-(void)removeStackItemView:(id)view;
-(void)redrawStackItemView:(id)view;
-(void)clearContents;
-(void)setRowImage:(CGImageRef)image;
-(void)layoutSubviews;
@end

