/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "OfficeImport-Structs.h"

@class SFUZipEntry;

__attribute__((visibility("hidden")))
@interface CPBundleResourcePackageEntry : XXUnknownSuperclass {
@private
	SFUZipEntry* mZipEntry;
	xmlDoc* mXmlDocument;
}
-(id)initWithZipEntry:(id)zipEntry;
-(void)dealloc;
-(id)data;
-(xmlDoc*)xmlDocument;
@end

