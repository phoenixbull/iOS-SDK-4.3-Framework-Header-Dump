/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/UIAccessibility.framework/UIAccessibility
 */

#import <XXUnknownSuperclass.h> // Unknown library


@interface UIAccessibilityLoader : XXUnknownSuperclass {
}
+(void)initialize;
+(id)_accessibilityBundlesForBundle:(id)bundle;
+(id)_axBundleForBundle:(id)bundle;
+(id)loadAccessibilityBundle:(id)bundle didLoad:(BOOL*)load;
+(id)_loadAXBundleForBundle:(id)bundle didLoad:(BOOL*)load forceLoad:(BOOL)load3 loadSubbundles:(BOOL)subbundles;
+(id)_loadAXBundleForBundle:(id)bundle didLoad:(BOOL*)load;
+(void)_accessibilityStartServer;
+(void)_accessibilityReenabled;
+(void)_accessibilityStopServer;
@end

