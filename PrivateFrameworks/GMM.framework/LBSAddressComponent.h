/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray, LBSAddressRange, LBSFeatureId;

__attribute__((visibility("hidden")))
@interface LBSAddressComponent : XXUnknownSuperclass {
@private
	int _type;
	NSMutableArray* _parsed_names;
	int _feature_type;
	BOOL _hasFeature_type;
	LBSFeatureId* _feature_id;
	LBSAddressRange* _range;
}
@property(assign, nonatomic) int type;
@property(retain, nonatomic) NSMutableArray* parsed_names;
@property(assign, nonatomic) int feature_type;
@property(readonly, assign, nonatomic) BOOL hasFeature_type;
@property(retain, nonatomic) LBSFeatureId* feature_id;
@property(retain, nonatomic) LBSAddressRange* range;
@property(readonly, assign, nonatomic) BOOL hasRange;
@property(readonly, assign, nonatomic) BOOL hasFeature_id;
@property(readonly, assign, nonatomic) int parsed_namesCount;
-(id)init;
-(void)dealloc;
-(void)setParsed_name:(id)name atIndex:(unsigned)index;
-(id)parsed_nameAtIndex:(unsigned)index;
-(void)addParsed_name:(id)name;
-(BOOL)readFrom:(id)from;
-(void)writeTo:(id)to;
-(id)description;
-(id)dictionaryRepresentation;
@end

