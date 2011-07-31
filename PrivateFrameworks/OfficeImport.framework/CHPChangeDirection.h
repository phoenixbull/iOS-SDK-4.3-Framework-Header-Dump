/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "CHPChangeDirection.h"
#import "EDProcessor.h"


__attribute__((visibility("hidden")))
@interface CHPChangeDirection : EDProcessor {
}
-(bool)isObjectSupported:(id)supported;
-(void)applyProcessorToObject:(id)object sheet:(id)sheet;
-(void)changeChartDirection:(id)direction sheet:(id)sheet;
@end

@interface CHPChangeDirection (Private)
-(id)createNewSeriesCollectionForOrthogonalDirection:(id)orthogonalDirection forChart:(id)chart;
-(id)getSeriesCollectionForOrthogonalDirection:(id)orthogonalDirection forChart:(id)chart;
-(void)mapSeriesCollection:(id)collection from:(id)from forChart:(id)chart;
-(void)mapSeriesValues:(id)values to:(id)to forIndex:(unsigned)index byRow:(bool)row forChart:(id)chart;
-(id)getGraphicPropertiesForSeriesWithIndex:(int)index fromCollection:(id)collection isVaryColors:(bool)colors forChart:(id)chart;
-(void)addDataValue:(id)value to:(id)to withIndex:(int)index;
-(void)cleanUpOldSeriesCollection:(id)collection;
@end

