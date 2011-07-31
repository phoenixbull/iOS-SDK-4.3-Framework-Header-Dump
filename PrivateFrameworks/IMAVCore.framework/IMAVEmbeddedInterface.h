/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/IMAVCore.framework/IMAVCore
 */

#import "IMAVInterface.h"
#import "AVConferenceDelegate.h"

@class NSMutableArray, AVConference;

@interface IMAVEmbeddedInterface : IMAVInterface <AVConferenceDelegate> {
	NSMutableArray* _avConferencesToCleanup;
	AVConference* _vcc;
	BOOL _duringInit;
	BOOL _previewStarted;
	BOOL _pendingCleanup;
}
@property(readonly, assign, nonatomic) AVConference* controller;
+(id)bestChatForCallID:(int)callID errorString:(id)string;
+(void)updateCriticalState;
-(id)init;
-(void)dealloc;
-(void)_cleanupAVInterface;
-(void)_queueAVConferenceForCleanup:(id)cleanup;
-(void)invalidateAVInterface;
-(void)initAVInterface;
-(BOOL)isAVInterfaceReady;
-(void)_conferenceWillStart:(id)_conference;
-(void)_conferenceEnded:(id)ended;
-(BOOL)systemCanARD;
-(BOOL)systemCanHostARD;
-(BOOL)systemCanVideoChat;
-(BOOL)systemCanAudioChat;
-(BOOL)allowsVideoForAVChat:(id)avchat;
-(unsigned)cameraType;
-(void)setCameraType:(unsigned)type;
-(unsigned)cameraOrientation;
-(void)setCameraOrientation:(unsigned)orientation;
-(BOOL)isMuteForAVChat:(id)avchat;
-(void)avChat:(id)chat setMute:(BOOL)mute;
-(BOOL)isPausedForAVChat:(id)avchat;
-(void)avChat:(id)chat setPaused:(BOOL)paused;
-(BOOL)isSendingAudioForAVChat:(id)avchat;
-(void)avChat:(id)chat setSendingAudio:(BOOL)audio;
-(BOOL)isSendingVideoForAVChat:(id)avchat;
-(void)avChat:(id)chat setSendingVideo:(BOOL)video;
-(unsigned long long)capabilitiesOfNetwork;
-(unsigned long long)capabilitiesOfCPU;
-(unsigned long long)capabilities;
-(BOOL)startPreviewWithError:(id*)error;
-(BOOL)stopPreview;
-(BOOL)openCamera;
-(BOOL)closeCamera;
-(int)endConferenceForAVChat:(id)avchat;
-(BOOL)avChat:(id)chat startConferenceWithUserID:(id)userID;
-(int)avChat:(id)chat endConferenceForUserID:(id)userID;
-(void)avChat:(id)chat enableSoftwareCamera:(BOOL)camera;
-(void)avChat:(id)chat enableSoftwareMicrophone:(BOOL)microphone;
-(unsigned)avChat:(id)chat enableAudioReflector:(BOOL)reflector;
-(void)_notifyAboutPotentialCall;
-(id)getNatIPFromICEData:(id)icedata;
-(id)natType;
-(void)avChat:(id)chat prepareConnectionWithRemoteConnectionData:(id)remoteConnectionData localConnectionData:(id)data;
-(id)avChat:(id)chat localICEDataForHandle:(id)handle usingRelay:(BOOL)relay;
-(void)conference:(id)conference didStartSession:(BOOL)session withUserInfo:(id)userInfo;
-(void)conference:(id)conference didStopWithCallID:(int)callID error:(id)error;
-(void)conference:(id)conference updateInputMeterLevel:(float)level;
-(void)conference:(id)conference updateOutputMeterLevel:(float)level;
-(id)localDisplayNameForCallID:(int)callID;
-(id)remoteDisplayNameForCallID:(int)callID;
-(void)conference:(id)conference receivedFirstPreviewForCallID:(int)callID;
-(void)conference:(id)conference receivedFirstRemoteFrameForCallID:(int)callID;
-(void)conference:(id)conference remoteOrientationChangedForCallID:(int)callID orientation:(unsigned)orientation;
-(void)conference:(id)conference remoteCameraBeingChangedForCallID:(int)callID;
-(void)conference:(id)conference remoteCameraChangedForCallID:(int)callID cameraType:(unsigned)type;
-(void)conference:(id)conference remoteAudioPaused:(BOOL)paused callID:(int)anId;
-(void)conference:(id)conference remoteVideoPaused:(BOOL)paused callID:(int)anId;
-(void)conference:(id)conference inititiateRelayRequest:(int)request requestDict:(id)dict;
-(void)conference:(id)conference sendRelayUpdate:(int)update updateDict:(id)dict;
-(void)conference:(id)conference cancelRelayRequest:(int)request requestDict:(id)dict;
-(void)conference:(id)conference receivedNoRemotePacketsForTime:(double)time callID:(int)anId;
-(BOOL)supportsLayers;
-(void*)remoteVideoLayer;
-(void)setRemoteVideoLayer:(void*)layer;
-(void*)localVideoLayer;
-(void)setLocalVideoLayer:(void*)layer;
-(void*)remoteVideoBackLayer;
-(void)setRemoteVideoBackLayer:(void*)layer;
-(void*)localVideoBackLayer;
-(void)setLocalVideoBackLayer:(void*)layer;
-(BOOL)supportsRelay;
-(void)handleRelayInitate:(id)initate fromParticipant:(id)participant;
-(void)handleRelayUpdate:(id)update fromParticipant:(id)participant;
-(void)handleRelayCancel:(id)cancel fromParticipant:(id)participant;
-(void)setupComplete;
-(void)persistentProperty:(id)property changedTo:(id)to from:(id)from;
-(void)chatStateUpdated;
-(int)_checkNetwork;
@end

