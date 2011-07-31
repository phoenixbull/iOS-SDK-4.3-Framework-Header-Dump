/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import "ISOperation.h"

@class NSDictionary;

@interface ISSoftwareCapabilitiesDialogOperation : ISOperation {
@private
	NSDictionary* _mismatches;
	id _requiredCapabilities;
}
@property(readonly, assign) id requiredCapabilities;
@property(readonly, assign) NSDictionary* mismatches;
-(id)initWithRequiredCapabilities:(id)requiredCapabilities mismatches:(id)mismatches;
-(void)dealloc;
-(void)run;
-(void)_postDefaultDialog;
@end

