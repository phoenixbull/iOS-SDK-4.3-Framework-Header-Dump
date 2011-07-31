/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "GMMStructuredAddress.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface GMMStructuredAddress : XXUnknownSuperclass {
@private
	NSString* _thoroughfare;
	NSString* _dependentLocality;
	NSString* _locality;
	NSString* _region;
	NSString* _postalCode;
	NSString* _countryCode;
	NSString* _countryName;
}
@property(retain, nonatomic) NSString* thoroughfare;
@property(retain, nonatomic) NSString* dependentLocality;
@property(retain, nonatomic) NSString* locality;
@property(retain, nonatomic) NSString* region;
@property(retain, nonatomic) NSString* postalCode;
@property(retain, nonatomic) NSString* countryCode;
@property(retain, nonatomic) NSString* countryName;
@property(readonly, assign, nonatomic) BOOL hasCountryName;
@property(readonly, assign, nonatomic) BOOL hasCountryCode;
@property(readonly, assign, nonatomic) BOOL hasPostalCode;
@property(readonly, assign, nonatomic) BOOL hasRegion;
@property(readonly, assign, nonatomic) BOOL hasLocality;
@property(readonly, assign, nonatomic) BOOL hasDependentLocality;
@property(readonly, assign, nonatomic) BOOL hasThoroughfare;
-(id)init;
-(void)dealloc;
-(BOOL)readFrom:(id)from;
-(void)writeTo:(id)to;
-(id)description;
-(id)dictionaryRepresentation;
@end

@interface GMMStructuredAddress (GMMProtoExtras)
-(id)description;
@end
