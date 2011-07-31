/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoBoothEffects.framework/PhotoBoothEffects
 */

#import "PBStretchFilter.h"
#import "PBFilter.h"
#import "PhotoBoothEffects-Structs.h"


@interface PBStretchFilter : PBFilter {
	CGPoint inputPoint;
}
@property(assign) CGPoint inputPoint;
-(void)setDefaults;
-(const char*)_fragmentShaderSource;
-(id)_glesUniforms;
-(id)_lookupTableNames;
-(void)renderWithContext:(id)context inputSize:(CGSize)size outputRect:(CGRect)rect mirrored:(BOOL)mirrored;
@end

@interface PBStretchFilter (OpenCL)
-(void)setupKernelArguments:(id)arguments mirrored:(BOOL)mirrored;
-(unsigned long)kernelArgCount;
-(/*function-pointer*/ void*)kernelWrapper;
@end

