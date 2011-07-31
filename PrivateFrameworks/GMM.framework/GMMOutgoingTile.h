/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray, GMMClientCapabilities;

@interface GMMOutgoingTile : XXUnknownSuperclass {
@private
	int _tileSize;
	NSMutableArray* _indexs;
	int _zoom;
	GMMClientCapabilities* _clientCapabilities;
}
@property(assign, nonatomic) int tileSize;
@property(retain, nonatomic) NSMutableArray* indexs;
@property(assign, nonatomic) int zoom;
@property(retain, nonatomic) GMMClientCapabilities* clientCapabilities;
@property(readonly, assign, nonatomic) int indexsCount;
-(id)init;
-(void)dealloc;
-(void)setIndex:(id)index atIndex:(unsigned)index2;
-(id)indexAtIndex:(unsigned)index;
-(void)addIndex:(id)index;
-(BOOL)readFrom:(id)from;
-(void)writeTo:(id)to;
-(id)description;
-(id)dictionaryRepresentation;
@end

