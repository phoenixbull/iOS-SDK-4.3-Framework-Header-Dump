/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import "MCPayload.h"

@class NSMutableDictionary, NSDictionary;

@interface MCRestrictionsPayload : MCPayload {
@private
	NSMutableDictionary* _restrictions;
}
@property(readonly, assign) NSDictionary* restrictions;
+(id)typeStrings;
+(id)localizedDescriptionForPayloadCount:(unsigned)payloadCount;
-(id)_invalidFieldErrorWithFieldName:(id)fieldName;
-(id)initWithDictionary:(id)dictionary profile:(id)profile outError:(id*)error;
-(void)dealloc;
-(id)stubDictionary;
-(id)description;
-(id)_localizedStrings;
-(id)_defaultMediaSettings;
-(id)subtitle1Description;
-(void)_insertRestrictedBoolForKey:(id)key value:(id)value preferenc:(BOOL)preferenc;
@end

