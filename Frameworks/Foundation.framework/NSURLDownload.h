/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "NSURLAuthenticationChallengeSender.h"
#import "NSURLDownload.h"

@class NSURLDownloadInternal;

@interface NSURLDownload : XXUnknownSuperclass {
@private
	NSURLDownloadInternal* _internal;
}
+(id)_downloadWithLoadingConnection:(id)loadingConnection request:(id)request response:(id)response delegate:(id)delegate proxy:(id)proxy;
+(id)_downloadWithRequest:(id)request delegate:(id)delegate directory:(id)directory;
+(BOOL)canResumeDownloadDecodedWithEncodingMIMEType:(id)encodingMIMEType;
+(BOOL)_isEncodingMIMETypeResumable:(id)resumable;
-(id)init;
-(id)initWithRequest:(id)request delegate:(id)delegate;
-(id)_initWithLoadingConnection:(id)loadingConnection request:(id)request response:(id)response delegate:(id)delegate proxy:(id)proxy;
-(id)_initWithRequest:(id)request delegate:(id)delegate directory:(id)directory;
-(id)_initWithResumeInformation:(id)resumeInformation delegate:(id)delegate path:(id)path;
-(id)initWithResumeData:(id)resumeData delegate:(id)delegate path:(id)path;
-(id)_resumeInformation;
-(id)resumeData;
-(void)dealloc;
-(void)cancel;
-(id)request;
-(void)setDestination:(id)destination allowOverwrite:(BOOL)overwrite;
-(void)_setDeletesFileAfterFailure:(BOOL)failure;
-(BOOL)_deletesFileAfterFailure;
-(void)setDeletesFileUponFailure:(BOOL)failure;
-(BOOL)deletesFileUponFailure;
-(id)url;
-(id)_directoryPath;
-(void)_setDelegate:(id)delegate;
-(void)_setDirectoryPath:(id)path;
-(void)_setOriginatingURL:(id)url;
-(id)_originatingURL;
-(void)releaseDelegate;
-(id)_delegate;
-(BOOL)_downloadActive;
-(void)sendDidStart:(CFURLDownloadRef)send;
-(CFURLRequestRef)sendWillSendRequest:(CFURLRequestRef)send redirectResponse:(CFURLResponseRef)response;
-(unsigned char)sendDownloadShouldUseCredentialStorage;
-(void)sendDidReceiveChallenge:(CFURLAuthChallengeRef)send;
-(void)sendDidReceiveResponse:(CFURLResponseRef)send;
-(void)sendWillResumeWithResponse:(CFURLResponseRef)send startingByte:(unsigned long long)byte;
-(void)sendDidReceiveData:(long)send;
-(bool)sendShouldDecodeDataOfMIMEType:(CFStringRef)send;
-(void)sendDecideDestinationWithSuggestedObjectName:(CFStringRef)suggestedObjectName;
-(void)sendDidCreateDestination:(CFURLRef)send;
-(void)sendDidFinish;
-(void)sendDidFail:(CFErrorRef)send;
-(BOOL)sendCanAuthenticateAgainstProtectionSpace:(CFURLProtectionSpaceRef)space;
@end

@interface NSURLDownload (NSURLAuthenticationChallengeSender) <NSURLAuthenticationChallengeSender>
-(void)cleanupChallenges;
-(void)useCredential:(id)credential forAuthenticationChallenge:(id)authenticationChallenge;
-(void)continueWithoutCredentialForAuthenticationChallenge:(id)authenticationChallenge;
-(void)cancelAuthenticationChallenge:(id)challenge;
@end

