/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class LBSGRectangle, LBSUserLocation, NSString;

__attribute__((visibility("hidden")))
@interface LBSGeocodeParams : XXUnknownSuperclass {
@private
	NSString* _resultLanguage;
	int _numFeatureLimit;
	BOOL _includeBoundingBoxes;
	BOOL _hasIncludeBoundingBoxes;
	LBSUserLocation* _location;
	LBSGRectangle* _boundingBox;
	int _addressLinesLimit;
	BOOL _hasAddressLinesLimit;
}
@property(retain, nonatomic) NSString* resultLanguage;
@property(assign, nonatomic) int numFeatureLimit;
@property(assign, nonatomic) BOOL includeBoundingBoxes;
@property(readonly, assign, nonatomic) BOOL hasIncludeBoundingBoxes;
@property(retain, nonatomic) LBSUserLocation* location;
@property(retain, nonatomic) LBSGRectangle* boundingBox;
@property(assign, nonatomic) int addressLinesLimit;
@property(readonly, assign, nonatomic) BOOL hasAddressLinesLimit;
@property(readonly, assign, nonatomic) BOOL hasBoundingBox;
@property(readonly, assign, nonatomic) BOOL hasLocation;
-(id)init;
-(void)dealloc;
-(BOOL)readFrom:(id)from;
-(void)writeTo:(id)to;
-(id)description;
-(id)dictionaryRepresentation;
@end

