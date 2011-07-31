/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iAdCore.framework/iAdCore
 */

#import "iAdCore-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library


@interface ADLayerHostWindow : XXUnknownSuperclass {
}
+(id)layerHostWindowForView:(id)view;
-(BOOL)_isWindowServerHostingManaged;
-(CGAffineTransform)_screenTransform:(float)transform;
-(CGPoint)_adjustForClassic:(CGPoint)classic;
-(CGPoint)_centerForCenter:(CGPoint)center;
-(CGPoint)_centerForFrame:(CGRect)frame;
-(void)_setupConfiguration;
-(id)init;
-(id)initWithFrame:(CGRect)frame;
-(id)initWithCoder:(id)coder;
-(void)setFrame:(CGRect)frame;
@end

