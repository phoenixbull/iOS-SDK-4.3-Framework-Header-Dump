/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import "MCPayload.h"

@class NSArray;

@interface MCAPNPayload : MCPayload {
	NSArray* _apnInfos;
	BOOL _wasInstalled;
}
@property(assign, nonatomic) BOOL wasInstalled;
+(id)typeStrings;
+(id)localizedDescriptionForPayloadCount:(unsigned)payloadCount;
+(id)apnDomainName;
-(id)_validationErrorType:(int)type forInvalidKey:(id)invalidKey;
-(BOOL)_checkForValidContents:(id)validContents outError:(id*)error;
-(void)_finishInitializationWithContents:(id)contents;
-(id)initWithDictionary:(id)dictionary profile:(id)profile outError:(id*)error;
-(void)dealloc;
-(id)apnDefaults;
-(id)_strippedAPNDefaults;
-(id)stubDictionary;
-(id)description;
-(id)subtitle1Label;
-(id)subtitle1Description;
-(id)subtitle2Label;
-(id)subtitle2Description;
@end

