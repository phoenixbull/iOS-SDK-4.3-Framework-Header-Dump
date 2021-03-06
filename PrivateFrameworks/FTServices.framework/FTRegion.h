/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, NSArray, NSDictionary;

@interface FTRegion : XXUnknownSuperclass {
	NSDictionary* _dictionary;
	FTRegion* _parentRegion;
	NSArray* _subRegions;
}
@property(readonly, assign) NSArray* subRegions;
@property(readonly, assign) FTRegion* parentRegion;
@property(readonly, assign) NSString* basePhoneNumber;
@property(readonly, assign) NSString* regionID;
@property(readonly, assign) NSString* label;
@property(readonly, assign) NSString* isoCode;
-(id)_initWithDictionary:(id)dictionary;
-(void)dealloc;
-(void)_setParentRegion:(id)region;
-(id)regionWithID:(id)anId;
-(id)description;
@end

