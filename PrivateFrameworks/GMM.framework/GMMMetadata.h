/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <XXUnknownSuperclass.h> // Unknown library


@interface GMMMetadata : XXUnknownSuperclass {
@private
	BOOL _needsLinkStreetRange;
	BOOL _hasNeedsLinkStreetRange;
	BOOL _fetchDepthMap;
	BOOL _hasFetchDepthMap;
	BOOL _fetchPanoMap;
	BOOL _hasFetchPanoMap;
}
@property(assign, nonatomic) BOOL needsLinkStreetRange;
@property(readonly, assign, nonatomic) BOOL hasNeedsLinkStreetRange;
@property(assign, nonatomic) BOOL fetchDepthMap;
@property(readonly, assign, nonatomic) BOOL hasFetchDepthMap;
@property(assign, nonatomic) BOOL fetchPanoMap;
@property(readonly, assign, nonatomic) BOOL hasFetchPanoMap;
-(id)init;
-(void)dealloc;
-(BOOL)readFrom:(id)from;
-(void)writeTo:(id)to;
-(id)description;
-(id)dictionaryRepresentation;
@end

