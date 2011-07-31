/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class GMMGeometry, NSData;

__attribute__((visibility("hidden")))
@interface GMMOffsetPolyline : XXUnknownSuperclass {
@private
	GMMGeometry* _absolutePoint;
	NSData* _relativePoints;
}
@property(retain, nonatomic) GMMGeometry* absolutePoint;
@property(retain, nonatomic) NSData* relativePoints;
@property(readonly, assign, nonatomic) BOOL hasRelativePoints;
-(id)init;
-(void)dealloc;
-(BOOL)readFrom:(id)from;
-(void)writeTo:(id)to;
-(id)description;
-(id)dictionaryRepresentation;
@end

