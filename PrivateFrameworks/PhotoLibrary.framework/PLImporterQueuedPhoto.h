/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

#import "PhotoLibrary-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSDictionary, PLPhotoAlbum, NSString;

@interface PLImporterQueuedPhoto : XXUnknownSuperclass {
	NSString* directoryPath;
	NSString* baseName;
	NSDictionary* extensions;
	PLPhotoAlbum* event;
	XXStruct_6rcd1D* progressStack;
	int importIdentifier;
}
@property(copy, nonatomic) NSString* directoryPath;
@property(copy, nonatomic) NSString* baseName;
@property(copy, nonatomic) NSDictionary* extensions;
@property(retain, nonatomic) PLPhotoAlbum* event;
@property(assign, nonatomic) XXStruct_6rcd1D* progressStack;
@property(assign, nonatomic) int importIdentifier;
+(id)queuedPhotoWithDirectoryPath:(id)directoryPath baseName:(id)name extensions:(id)extensions event:(id)event progress:(XXStruct_pqCwAA*)progress importSessionIdentifier:(int)identifier;
-(void)dealloc;
@end

