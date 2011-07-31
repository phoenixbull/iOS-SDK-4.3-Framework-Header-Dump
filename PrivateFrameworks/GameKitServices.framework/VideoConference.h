/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
 */

#import "GameKitServices-Structs.h"
#import "VideoConference.h"
#import "VCCallSessionDelegate.h"
#import "GKNATObserverDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class VCCallSession, VideoConferenceManager, NSMutableDictionary, NSObject, NSLock, GKNATObserver, NSArray, CALayer, NSString;
@protocol VideoConferenceChannelQualityDelegate, VideoConferenceNotificationObserver, VideoConferenceRealTimeChannel, VideoConferenceDelegate, VideoConferenceSpeakingDelegate;

__attribute__((visibility("hidden")))
@interface VideoConference : XXUnknownSuperclass {
@private
	NSObject<VideoConferenceDelegate>* delegate;
	NSLock* delegateLock;
	VideoConferenceManager* manager;
	opaque_pthread_rwlock_t stateLock;
	NSMutableDictionary* sessionDict;
	NSArray* sessionArray;
	BOOL outputMeteringEnabled;
	BOOL inputMeteringEnabled;
	float outputMeterLevel;
	float inputMeterLevel;
	BOOL microphoneMuted;
	NSObject<VideoConferenceRealTimeChannel>* rtChannel;
	tagHANDLE* hCMCapture;
	void* localVideoLayer;
	void* localVideoBackLayer;
	void* remoteVideoLayer;
	void* remoteVideoBackLayer;
	int localVideoSlot;
	int remoteVideoSlot;
	int localVideoSlotBack;
	int remoteVideoSlotBack;
	CALayer* localVideoSubLayer;
	CALayer* remoteVideoSubLayer;
	CALayer* localVideoSubLayerBack;
	CALayer* remoteVideoSubLayerBack;
	CAImageQueueRef localCAImageQueue;
	CAImageQueueRef localCAImageQueueBack;
	CAImageQueueRef remoteCAImageQueue;
	CAImageQueueRef remoteCAImageQueueBack;
	OpaqueFigImageQueue* localVideoImageQueue;
	OpaqueFigImageQueue* localVideoImageQueueBack;
	OpaqueFigImageQueue* remoteVideoImageQueue;
	OpaqueFigImageQueue* remoteVideoImageQueueBack;
	OpaqueVTPixelTransferSession* vtTransferSession;
	CVPixelBufferPoolRef previewBufferPool;
	tagHANDLE* hVR;
	tagHANDLE* hVT;
	BOOL isRecvVideo;
	int iSoundBytes;
	double dAudioHostTime;
	opaque_pthread_mutex_t xLocalLayer;
	opaque_pthread_mutex_t xRemoteLayer;
	opaque_pthread_mutex_t xAudioTS;
	unsigned dwAudioTS;
	BOOL forceNoICE;
	BOOL useViceroyBlobFormat;
	int chatMode;
	BOOL isFocus;
	NSString* currentFocus;
	VCCallSession* currentFocusSession;
	BOOL hasMic;
	float conferenceVolume;
	NSArray* mutedPeers;
	NSArray* connectedPeers;
	unsigned talkingPeersLimit;
	unsigned char speakingArray[16];
	NSObject<VideoConferenceSpeakingDelegate>* speakingDelegate;
	NSObject<VideoConferenceChannelQualityDelegate>* qualityDelegate;
	float longTerm;
	float shortTerm;
	BOOL isTalking;
	unsigned talkTime;
	int packetsPerBundle;
	double recvRTPTimeStamp;
	int recvRTPBytes;
	BOOL disableVAD;
	BOOL forceHWICheck;
	BOOL receivedFirstRemoteFrame;
	BOOL receivedFirstPreviewFrame;
	BOOL isAttemptingRelay;
	BOOL requiresWifi;
	CFStringRef forceHWI;
	CFStringRef forceNOLOG;
	unsigned preferredCodec;
	NSObject<VideoConferenceNotificationObserver>* genericObserver;
	int upstreamBandwidth;
	int downstreamBandwidth;
	tagCameraStatus localCameraStatus;
	tagCameraStatus remoteCameraStatus;
	BOOL useComplexRendering;
	BOOL useAFRC;
	BOOL isGKVoiceChat;
	BOOL isUsingSuppression;
	BOOL shouldTimeoutPackets;
	BOOL shouldSendEmptyPacket;
	unsigned char requestedCameraType;
	BOOL useCompressedConnectionData;
	int natType;
	opaque_pthread_mutex_t natMutex;
	opaque_pthread_cond_t natCond;
	unsigned lastSentAudioSampleTime;
	GKNATObserver* natObserver;
	int mostRecentStartedCall;
	BOOL shouldStopPreviewOnClose;
}
@property(assign) NSObject<VideoConferenceDelegate>* delegate;
@property(assign, setter=setRTChannel:) NSObject<VideoConferenceRealTimeChannel>* rtChannel;
@property(assign, nonatomic) void* localVideoLayer;
@property(assign, nonatomic) void* localVideoBackLayer;
@property(assign, nonatomic) void* remoteVideoLayer;
@property(assign, nonatomic) void* remoteVideoBackLayer;
@property(assign) int chatMode;
@property(assign) BOOL isFocus;
@property(retain, nonatomic) NSString* currentFocus;
@property(assign) int packetsPerBundle;
@property(assign, nonatomic) unsigned preferredCodec;
@property(assign) BOOL hasMic;
@property(assign) NSObject<VideoConferenceNotificationObserver>* genericObserver;
@property(assign) int upstreamBandwidth;
@property(assign) int downstreamBandwidth;
@property(assign) NSObject<VideoConferenceSpeakingDelegate>* speakingDelegate;
@property(assign) BOOL useViceroyBlobFormat;
@property(assign, nonatomic) BOOL isUsingSuppression;
@property(assign) BOOL useComplexRendering;
@property(assign) NSObject<VideoConferenceChannelQualityDelegate>* qualityDelegate;
@property(assign) BOOL shouldTimeoutPackets;
@property(assign, nonatomic) BOOL useCompressedConnectionData;
@property(assign, nonatomic) int natType;
@property(assign, nonatomic) BOOL isGKVoiceChat;
@property(assign, nonatomic) BOOL requiresWifi;
@property(assign) BOOL disableVAD;
@property(assign) unsigned talkingPeersLimit;
@property(assign, nonatomic) unsigned orientation;
@property(assign, nonatomic) unsigned cameraType;
@property(readonly, assign) int remoteFrameWidth;
@property(readonly, assign) int remoteFrameHeight;
@property(readonly, assign) int localFrameWidth;
@property(readonly, assign) int localFrameHeight;
@property(readonly, assign) double roundTripTime;
@property(readonly, assign) double localPacketLossRate;
@property(readonly, assign) double remotePacketLossRate;
@property(readonly, assign, getter=getRemoteBitrate) double remoteBitrate;
@property(readonly, assign, getter=getRemoteFramerate) double remoteFramerate;
@property(readonly, assign, getter=getLocalBitrate) double localBitrate;
@property(readonly, assign, getter=getLocalFramerate) double localFramerate;
@property(assign) float conferenceVolume;
@property(readonly, assign, nonatomic) float inputMeterLevel;
@property(readonly, assign, nonatomic) float outputMeterLevel;
@property(assign, nonatomic, getter=isInputMeteringEnabled) BOOL inputMeteringEnabled;
@property(assign, nonatomic, getter=isOutputMeteringEnabled) BOOL outputMeteringEnabled;
@property(assign, nonatomic, getter=isMicrophoneMuted) BOOL microphoneMuted;
@property(assign, getter=isSpeakerPhoneEnabled) BOOL enableSpeakerPhone;
@property(assign) BOOL setupAudioSession;
-(id)init;
-(void)dealloc;
-(void)cleanupManager;
-(void)warmupForCall;
-(double)packetLossRateForCallID:(int)callID;
-(double)networkQualityForCallID:(int)callID;
-(void)cleanupQueues;
-(id)connectionBlobForParticipantID:(id)participantID callID:(int*)anId error:(id*)error;
-(BOOL)getIsVideoPaused:(BOOL*)paused callID:(int)anId error:(id*)error;
-(BOOL)getIsAudioPaused:(BOOL*)paused callID:(int)anId error:(id*)error;
-(BOOL)shouldSendAudioForCallID:(int)callID;
-(void)setSendAudio:(BOOL)audio forCallID:(int)callID;
-(BOOL)setPauseAudio:(BOOL)audio callID:(int)anId error:(id*)error;
-(BOOL)setPauseVideo:(BOOL)video callID:(int)anId error:(id*)error;
-(void)setPeerCN:(id)cn callID:(int)anId;
-(BOOL)startConnectionWithParticipantID:(id)participantID callID:(int)anId usingBlob:(id)blob isCaller:(BOOL)caller capabilities:(id)capabilities error:(id*)error;
-(BOOL)setActive:(BOOL)active;
-(void)updatedMutedPeers:(id)peers forParticipantID:(id)participantID;
-(void)updatedConnectedPeers:(id)peers;
-(void)stopCallID:(int)anId;
-(void)remoteCancelledCallID:(int)anId;
-(int)localVideoSlot:(BOOL)slot;
-(int)remoteVideoSlot:(BOOL)slot;
-(id)statsForCallID:(int)callID;
-(void)forceNoICE:(BOOL)ice;
-(void)processRelayRequestResponse:(int)response responseDict:(id)dict didOriginateRequest:(BOOL)request;
-(void)processRelayUpdate:(int)update updateDict:(id)dict didOriginateRequest:(BOOL)request;
-(void)receivedRealTimeData:(id)data fromParticipantID:(id)participantID;
@end

@interface VideoConference (NATDelegate) <GKNATObserverDelegate>
-(void)NATTypeDidChange:(int)nattype;
@end

@interface VideoConference (VideoProcessing)
-(BOOL)startPreviewWithError:(id*)error;
-(BOOL)startPreview:(BOOL)preview withError:(id*)error;
-(void)stopPreview;
-(bool)onCaptureVideo:(CVBufferRef)video frameTime:(XXStruct_oHBkXC)time preview:(bool)preview isSwitching:(bool)switching cameraType:(unsigned)type;
-(bool)onPlayVideo:(CVBufferRef)video frameTime:(XXStruct_oHBkXC)time cameraStatus:(tagCameraStatus*)status;
@end

@interface VideoConference (SessionDelegate) <VCCallSessionDelegate>
-(void)session:(id)session didStart:(BOOL)start connectionType:(unsigned)type error:(id)error;
-(void)session:(id)session didStopWithError:(id)error;
-(void)session:(id)session didStopWithDelay:(int)delay error:(id)error;
-(void)session:(id)session receivedNoPacketsForSeconds:(double)seconds;
-(void)startVideoProc:(id)proc;
-(void)getVideoSettings:(int*)settings height:(int*)height frameRate:(int*)rate bitRate:(int*)rate4 localIfName:(char*)name useBFC:(BOOL*)bfc enableBitstreamCapture:(BOOL*)capture enable2vuyCapture:(BOOL*)capture8 enableVPBLogging:(BOOL*)logging;
-(bool)didDetectBandwidth:(BOOL)bandwidth upstreamBandwidth:(int)bandwidth2 downstreamBandwidth:(int)bandwidth3;
-(bool)startVideoIO:(id*)io rtpVideo:(tagHANDLE*)video rtpAudio:(tagHANDLE*)audio actualVideoPayload:(int)payload enableUEP:(BOOL)uep enableControlByte:(BOOL)byte featuresListString:(char*)string;
-(bool)stopVideoIO:(BOOL)io error:(id*)error;
-(id)localDisplayNameForCallID:(int)callID;
-(id)remoteDisplayNameForCallID:(int)callID;
-(void)remoteAudioDidPause:(BOOL)remoteAudio callID:(int)anId;
-(void)remoteVideoDidPause:(BOOL)remoteVideo callID:(int)anId;
-(void)session:(id)session inititiateRelayRequest:(id)request;
-(void)session:(id)session sendRelayResponse:(id)response;
-(void)session:(id)session cancelRelayRequest:(id)request;
@end

@interface VideoConference (PrivateMethods)
-(void)wrlock;
-(int)tryrdlock;
-(void)rdlock;
-(void)unlock;
-(unsigned)connectionResultCallbackForCallID:(int)callID result:(tagCONNRESULT*)result didReceiveICEPacket:(BOOL)packet didUseRelay:(BOOL)relay;
-(void)stopCallID:(int)anId didRemoteCancel:(BOOL)cancel;
-(void)cleanupSession:(id)session withDelay:(unsigned)delay;
-(void)cleanupProc:(id)proc;
-(void)defaultCleanupSession:(id)session;
-(void)threadSafeCleanupSession:(id)session;
-(void)cleanupSession:(id)session didRemoteCancel:(BOOL)cancel;
-(void)getNSError:(id*)error code:(int)code detailedCode:(int)code3 filePath:(id)path description:(id)description hResult:(int)result;
-(void)getNSError:(id*)error code:(int)code detailedCode:(int)code3 filePath:(id)path description:(id)description reason:(id)reason;
-(BOOL)setPauseAudio:(BOOL)audio;
-(BOOL)setPauseVideo:(BOOL)video;
@end

@interface VideoConference (SessionInfo)
-(BOOL)matchesCallID:(int)anId;
-(BOOL)matchesOpenSessionForParticipantID:(id)participantID;
-(int)callIDForOpenSessionWithParticipantID:(id)participantID;
-(id)openSessionForParticipant:(id)participant;
-(BOOL)matchesParticipantID:(id)anId;
-(id)sessionForParticipantID:(id)participantID;
-(BOOL)hasSessionWaitingForSIPInvite;
-(id)loopbackSessionWaitingForSIPInvite;
-(id)sessionForIncomingParticipantID:(id)incomingParticipantID;
-(BOOL)matchesIncomingConnectionResult:(tagCONNRESULT*)result;
-(id)sessionForIncomingConnectionResult:(tagCONNRESULT*)incomingConnectionResult;
-(id)participantIDForCallID:(int)callID;
-(int)stateForCallID:(int)callID;
-(int)callIDForParticipantID:(id)participantID;
@end

@interface VideoConference (SIPDispatch)
-(int)sipCallbackNotification:(int)notification callID:(int)anId msgIn:(const char*)anIn msgOut:(char*)anOut optional:(void*)optional confIndex:(int*)index;
@end

@interface VideoConference (AudioProcessing)
-(unsigned char)powerFloatToInt:(float)int;
-(float)powerIntToFloat:(unsigned char)aFloat;
-(bool)onCaptureSound:(char*)sound numBytes:(int)bytes numSamples:(int)samples timeStamp:(unsigned)stamp timeStampDelta:(int)delta hostTime:(double)time averagePower:(float)power voiceActivity:(unsigned long)activity;
-(BOOL)updateSpeaking:(unsigned long)speaking timeStamp:(unsigned)stamp;
-(unsigned)pruneQuietestPeers:(unsigned)peers talking:(unsigned)talking mask:(unsigned)mask meters:(char*)meters;
-(unsigned)calculateTalkingMaskAtTimeStamp:(unsigned)timeStamp samples:(short*)samples numSamples:(int)samples3;
-(void)calculateMixingArrays:(unsigned*)arrays talkingMask:(unsigned)mask;
-(int)captureAsFocus:(char*)focus numBytes:(int)bytes numSamples:(int)samples timeStamp:(unsigned)stamp timeStampDelta:(int)delta averagePower:(unsigned char)power;
-(int)captureAsFocusClient:(char*)client numBytes:(int)bytes numSamples:(int)samples timeStamp:(unsigned)stamp timeStampDelta:(int)delta averagePower:(unsigned char)power;
-(int)captureMeshMode:(char*)mode numBytes:(int)bytes numSamples:(int)samples timeStamp:(unsigned)stamp timeStampDelta:(int)delta hostTime:(double)time;
-(void)packMeters:(char*)meters forSession:(id)session len:(char*)len;
-(int)sendBundle:(id)bundle samples:(char*)samples numEncodedBytes:(int)bytes timeStamp:(unsigned)stamp timeStampDelta:(int)delta hasNewSamples:(BOOL)samples6;
-(bool)onPlaySound:(char*)sound numBytes:(int)bytes numSamples:(int)samples timeStamp:(unsigned)stamp averagePower:(float)power;
-(void)updateMeter:(unsigned char)meter forParticipant:(id)participant atIndex:(unsigned)index;
-(void)updateMeters:(unsigned short)meters;
-(BOOL)recvSamplesForSession:(id)session samples:(short*)samples numSamples:(int)samples3 storeTimestamp:(unsigned)timestamp;
-(int)pullDecodedAsFocus:(short*)focus timestamp:(unsigned)timestamp numBytes:(int)bytes numSamples:(int)samples;
-(int)pullDecodedAsFocusClient:(short*)client timestamp:(unsigned)timestamp numBytes:(int)bytes numSamples:(int)samples;
-(int)pullDecodedMeshMode:(short*)mode timestamp:(unsigned)timestamp numBytes:(int)bytes numSamples:(int)samples;
@end

