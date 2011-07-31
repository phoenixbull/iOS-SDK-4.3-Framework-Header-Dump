/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "iWorkImport-Structs.h"
#import "GQPProcessor.h"


__attribute__((visibility("hidden")))
@interface GQPLSProcessor : GQPProcessor {
@private
	Class mGenerator;
}
-(id)initWithPath:(id)path indexFileName:(id)name outputType:(int)type outputPath:(CFStringRef)path4 previewRequest:(QLPreviewRequestRef)request generator:(Class)generator;
-(id)initWithZipArchive:(id)zipArchive indexFileName:(id)name outputType:(int)type outputPath:(CFStringRef)path previewRequest:(QLPreviewRequestRef)request generator:(Class)generator;
-(void)pushInitialState;
-(BOOL)go;
-(Class)generator;
@end

