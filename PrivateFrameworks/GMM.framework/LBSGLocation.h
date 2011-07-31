/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class LBSGLatLng, NSMutableArray, NSString;

@interface LBSGLocation : XXUnknownSuperclass {
@private
	LBSGLatLng* _latLng;
	NSString* _source;
	int _accuracy;
	BOOL _hasAccuracy;
	int _confidence;
	BOOL _hasConfidence;
	NSMutableArray* _features;
	long long _timestamp;
	BOOL _hasTimestamp;
	BOOL _obsolete;
	BOOL _hasObsolete;
	int _locType;
	BOOL _hasLocType;
	NSString* _misc;
	int _altitude;
	BOOL _hasAltitude;
	int _verticalAccuracy;
	BOOL _hasVerticalAccuracy;
	int _velocity;
	BOOL _hasVelocity;
	int _heading;
	BOOL _hasHeading;
	NSString* _locationString;
}
@property(retain, nonatomic) LBSGLatLng* latLng;
@property(retain, nonatomic) NSString* source;
@property(assign, nonatomic) int accuracy;
@property(readonly, assign, nonatomic) BOOL hasAccuracy;
@property(assign, nonatomic) int confidence;
@property(readonly, assign, nonatomic) BOOL hasConfidence;
@property(retain, nonatomic) NSMutableArray* features;
@property(assign, nonatomic) long long timestamp;
@property(readonly, assign, nonatomic) BOOL hasTimestamp;
@property(assign, nonatomic) BOOL obsolete;
@property(readonly, assign, nonatomic) BOOL hasObsolete;
@property(assign, nonatomic) int locType;
@property(readonly, assign, nonatomic) BOOL hasLocType;
@property(retain, nonatomic) NSString* misc;
@property(assign, nonatomic) int altitude;
@property(readonly, assign, nonatomic) BOOL hasAltitude;
@property(assign, nonatomic) int verticalAccuracy;
@property(readonly, assign, nonatomic) BOOL hasVerticalAccuracy;
@property(assign, nonatomic) int velocity;
@property(readonly, assign, nonatomic) BOOL hasVelocity;
@property(assign, nonatomic) int heading;
@property(readonly, assign, nonatomic) BOOL hasHeading;
@property(retain, nonatomic) NSString* locationString;
@property(readonly, assign, nonatomic) BOOL hasLocationString;
@property(readonly, assign, nonatomic) BOOL hasMisc;
@property(readonly, assign, nonatomic) int featuresCount;
@property(readonly, assign, nonatomic) BOOL hasSource;
@property(readonly, assign, nonatomic) BOOL hasLatLng;
-(id)init;
-(void)dealloc;
-(void)setFeature:(id)feature atIndex:(unsigned)index;
-(id)featureAtIndex:(unsigned)index;
-(void)addFeature:(id)feature;
-(BOOL)readFrom:(id)from;
-(void)writeTo:(id)to;
-(id)description;
-(id)dictionaryRepresentation;
@end

