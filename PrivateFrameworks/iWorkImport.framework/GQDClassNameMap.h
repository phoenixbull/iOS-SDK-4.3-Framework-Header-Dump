/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "GQDClassNameMap.h"
#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface GQDClassNameMap : XXUnknownSuperclass {
}
+(void)initialize;
+(void)registerClass:(Class)aClass forName:(const char*)name inRootType:(Class)rootType;
+(void)registerGlobalClass:(Class)aClass name:(const char*)name;
+(Class)classForName:(const char*)name inRootType:(Class)rootType;
@end

@interface GQDClassNameMap (Private)
+(void)registerDefaults;
@end

