/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "GQDRoot.h"
#import "iWorkImport-Structs.h"
#import "GQDLSDocument.h"

@class GQDSStylesheet;

__attribute__((visibility("hidden")))
@interface GQDLSDocument : GQDRoot {
@private
	GQDSStylesheet* mStylesheet;
	BOOL mIsOldAssetNameMapInitialized;
	CFDictionaryRef mOldAssetNameMap;
}
+(xmlNs*)appNamespace;
-(void)dealloc;
-(id)stylesheet;
-(void)setStylesheet:(id)stylesheet;
-(CFURLRef)createUrlToAppBundleResource:(CFStringRef)appBundleResource processorBundle:(CFBundleRef)bundle;
-(void)initializeAppBundleResourcesUrl;
@end

@interface GQDLSDocument (Private)
-(CFStringRef)createUpgradedAppBundleResourcePath:(CFStringRef)path;
@end
