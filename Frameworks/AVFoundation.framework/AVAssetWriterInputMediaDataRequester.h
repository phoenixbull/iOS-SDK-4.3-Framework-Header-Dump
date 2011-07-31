/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class AVAssetWriterInputWritingHelper;

@interface AVAssetWriterInputMediaDataRequester : XXUnknownSuperclass {
@private
	AVAssetWriterInputWritingHelper* _writingHelper;
	dispatch_queue_s* _requestQueue;
	id _requestBlock;
}
@property(readonly, assign, nonatomic) dispatch_queue_s* requestQueue;
@property(readonly, assign, nonatomic) id requestBlock;
-(id)initWithAssetWriterInputWritingHelper:(id)assetWriterInputWritingHelper requestQueue:(dispatch_queue_s*)queue requestBlock:(id)block;
-(id)init;
-(void)dealloc;
-(void)finalize;
-(void)startRequestingMediaData;
-(void)invalidate;
-(void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void*)context;
-(void)_requestMediaDataIfReady;
@end

