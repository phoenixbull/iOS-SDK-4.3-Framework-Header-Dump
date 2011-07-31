/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AssetsLibrary.framework/AssetsLibrary
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class PLPhotoLibrary, NSMutableArray;

__attribute__((visibility("hidden")))
@interface ALAssetsLibraryPrivate : XXUnknownSuperclass {
@private
	PLPhotoLibrary* _photoLibrary;
	NSMutableArray* _assets;
	BOOL _isValid;
}
@property(retain, nonatomic) PLPhotoLibrary* photoLibrary;
@property(retain, nonatomic) NSMutableArray* assets;
@property(assign, nonatomic) BOOL isValid;
-(id)init;
-(void)dealloc;
@end

