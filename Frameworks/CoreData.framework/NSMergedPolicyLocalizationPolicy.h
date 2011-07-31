/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "CoreData-Structs.h"
#import "NSValidationErrorLocalizationPolicy.h"

@class NSSet;

__attribute__((visibility("hidden")))
@interface NSMergedPolicyLocalizationPolicy : NSValidationErrorLocalizationPolicy {
@private
	NSSet* _mergedPolicies;
}
-(id)init;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)zone;
-(void)addPolicy:(id)policy;
-(id)_localizedStringForKey:(id)key value:(void*)value;
-(void)_ensureFullLocalizationDictionaryIsLoaded;
@end

