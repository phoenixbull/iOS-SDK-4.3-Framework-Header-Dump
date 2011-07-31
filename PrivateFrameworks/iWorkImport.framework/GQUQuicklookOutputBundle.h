/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "iWorkImport-Structs.h"
#import "GQUOutputBundle.h"
#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface GQUQuicklookOutputBundle : XXUnknownSuperclass <GQUOutputBundle> {
@private
	CFDictionaryRef mQuicklookProperties;
	CFDictionaryRef mAttachments;
	CFDataRef mMainHtmlData;
	CFStringRef mUriScheme;
	CFStringRef mUuidStr;
}
-(id)init;
-(id)initWithUriScheme:(CFStringRef)uriScheme;
-(void)dealloc;
-(CFDataRef)mainHtmlData;
-(CFDictionaryRef)quicklookDictionary;
-(BOOL)giveOutputToPreviewRequest:(QLPreviewRequestRef)previewRequest;
-(CFStringRef)createUriForResource:(CFStringRef)resource;
-(BOOL)setDataForMainHtmlResource:(CFDataRef)mainHtmlResource;
-(BOOL)setData:(CFDataRef)data mimeType:(CFStringRef)type forNamedResource:(CFStringRef)namedResource;
-(void)setDocumentSize:(CGSize)size;
-(void)setPageElementXPath:(CFStringRef)path withThumbnailsOnLeft:(BOOL)thumbnailsOnLeft;
@end

