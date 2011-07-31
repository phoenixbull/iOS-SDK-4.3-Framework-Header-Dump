/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "MessageUI-Structs.h"

@class NSString, MimeTextAttachment, NSData;

@interface MFMailInlineTextAttachment : XXUnknownSuperclass {
	MimeTextAttachment* _original;
	NSData* _cachedImageData;
	NSString* _cachedMimeType;
	NSString* _encodingGuess;
	CGSize _cachedImageSize;
	float _constrainedWidth;
	unsigned _numBytes;
	unsigned _isBeingLoaded : 1;
	unsigned _cachedDataIsPlaceholder : 1;
	unsigned _shouldNotLoadFully : 1;
	unsigned _shouldNotDisplayInline : 1;
	unsigned _hasBeenDownloaded : 1;
	CGRect _pluginFrame;
}
@property(assign, nonatomic) CGRect pluginFrame;
-(void)inlineDisplayData:(id*)data mimeType:(id*)type ignoreCachedData:(BOOL)data3;
-(void)inlineDisplayData:(id*)data mimeType:(id*)type;
-(void)_generateInlineData;
-(void)_setDataDerivedImage:(id)image;
-(unsigned)approximateSize;
-(BOOL)shouldDownloadAttachmentOnDisplay;
-(float)constrainedWidth;
-(CGSize)imageDimensions;
-(void)setFileWrapper:(id)wrapper;
-(void)_setImageDimensions:(CGSize)dimensions;
-(void)_setImageDimensionsFromData:(id)data;
-(void)setupForComposition;
-(void)setDisplayableInline:(BOOL)anInline;
-(BOOL)isDisplayableInline;
-(id)initWithWrapper:(id)wrapper shouldDownload:(BOOL)download;
-(id)initWithMimeTextAttachment:(id)mimeTextAttachment shouldDownload:(BOOL)download andMessageBody:(id)body;
-(id)fileWrapperForcingDownload:(BOOL)download;
-(BOOL)hasBeenDownloaded;
-(BOOL)allowDownload;
-(void)dealloc;
@end

