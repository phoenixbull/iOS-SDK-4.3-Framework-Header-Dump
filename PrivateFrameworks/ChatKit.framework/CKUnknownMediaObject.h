/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import "ChatKit-Structs.h"
#import "CKMediaObject.h"


@interface CKUnknownMediaObject : CKMediaObject {
}
+(BOOL)supportsMIMEType:(id)type;
-(float)balloonHeightWithPreviewData:(id)previewData;
-(Class)balloonPreviewClassWithPreviewData:(id)previewData;
-(BOOL)shouldTranscodeForMMS;
-(id)newTranscodingForMMSWithMaxByteLength:(int)maxByteLength;
-(id)newPreview:(int)preview highlight:(BOOL)highlight;
-(id)_icon;
-(void)configureBalloon:(id)balloon withPreviewData:(id)previewData;
-(id)_effectiveFilename;
@end

