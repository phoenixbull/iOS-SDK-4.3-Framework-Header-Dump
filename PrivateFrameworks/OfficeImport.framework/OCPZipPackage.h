/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OCPZipPackage.h"
#import "OCPPackage.h"

@class NSMutableDictionary, SFUZipArchive;

__attribute__((visibility("hidden")))
@interface OCPZipPackage : OCPPackage {
@private
	SFUZipArchive* mArchive;
	NSMutableDictionary* mParts;
}
-(id)initWithPath:(id)path;
-(id)initWithData:(id)data;
-(void)dealloc;
-(id)partForLocation:(id)location;
-(void)resetPartForLocation:(id)location;
@end

@interface OCPZipPackage (Private)
-(id)initWithArchive:(id)archive;
@end

