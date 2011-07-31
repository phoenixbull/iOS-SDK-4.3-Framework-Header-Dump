/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

#import "NSObject.h"


@protocol ICDeviceManagerProtocol <NSObject>
-(int)openDevice:(id)device contextInfo:(void*)info;
-(int)closeDevice:(id)device contextInfo:(void*)info;
-(int)openSession:(id)session contextInfo:(void*)info;
-(int)closeSession:(id)session contextInfo:(void*)info;
-(int)getThumbnailOfFile:(id)file fromDevice:(id)device contextInfo:(void*)info;
-(int)getMetadataOfFile:(id)file fromDevice:(id)device contextInfo:(void*)info;
-(int)syncClock:(id)clock contextInfo:(void*)info;
-(int)deleteFile:(id)file fromDevice:(id)device contextInfo:(void*)info;
-(int)downloadFile:(id)file fromDevice:(id)device options:(id)options contextInfo:(void*)info;
-(int)eject:(id)eject;
@end

