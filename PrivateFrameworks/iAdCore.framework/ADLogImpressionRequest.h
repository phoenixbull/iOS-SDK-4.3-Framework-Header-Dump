/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iAdCore.framework/iAdCore
 */

#import "ADLogImpressionRequest.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray, ADLogMetaData;

@interface ADLogImpressionRequest : XXUnknownSuperclass {
	ADLogMetaData* _metaData;
	NSMutableArray* _metrics;
}
@property(retain, nonatomic) ADLogMetaData* metaData;
@property(retain, nonatomic) NSMutableArray* metrics;
@property(readonly, assign, nonatomic) int metricsCount;
@property(readonly, assign, nonatomic) BOOL hasMetaData;
-(id)init;
-(void)dealloc;
-(void)setMetric:(id)metric atIndex:(unsigned)index;
-(id)metricAtIndex:(unsigned)index;
-(void)addMetric:(id)metric;
-(BOOL)readFrom:(id)from;
-(void)writeTo:(id)to;
-(Class)responseClass;
-(unsigned)requestTypeCode;
-(id)description;
@end

@interface ADLogImpressionRequest (Swizzle)
+(void)initialize;
@end

