/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "AVFoundation-Structs.h"

@class AVCaptureSessionInternal, NSString, NSArray;

@interface AVCaptureSession : XXUnknownSuperclass {
@private
	AVCaptureSessionInternal* _internal;
}
@property(readonly, assign, nonatomic, getter=isInterrupted) BOOL interrupted;
@property(readonly, assign, nonatomic, getter=isRunning) BOOL running;
@property(readonly, assign, nonatomic) NSArray* outputs;
@property(readonly, assign, nonatomic) NSArray* inputs;
@property(copy, nonatomic) NSString* sessionPreset;
+(void)initialize;
+(id)avCaptureSessionPlist;
-(id)init;
-(void)_teardownFigRecorder;
-(id)retain;
-(void)release;
-(void)dealloc;
-(OpaqueFigRecorder*)recorder;
-(BOOL)canSetSessionPreset:(id)preset;
-(void)beginConfiguration;
-(void)commitConfiguration;
-(BOOL)isBeingConfigured;
-(id)outputWithClass:(Class)aClass;
-(id)inputWithClass:(Class)aClass;
-(BOOL)_canAddInput:(id)input failureReason:(id*)reason;
-(BOOL)canAddInput:(id)input;
-(void)addInput:(id)input;
-(id)description;
-(void)addInputWithNoConnections:(id)noConnections;
-(void)_addInputWithNoConnections:(id)noConnections;
-(void)removeInput:(id)input;
-(BOOL)_canAddOutput:(id)output failureReason:(id*)reason;
-(BOOL)canAddOutput:(id)output;
-(void)addOutput:(id)output;
-(void)addOutputWithNoConnections:(id)noConnections;
-(void)_addOutputWithNoConnections:(id)noConnections;
-(void)removeOutput:(id)output;
-(id)videoPreviewLayer;
-(void)removeVideoPreviewLayer;
-(void)setVideoPreviewLayer:(id)layer;
-(BOOL)_canAddConnection:(id)connection failureReason:(id*)reason;
-(BOOL)canAddConnection:(id)connection;
-(void)addConnection:(id)connection;
-(void)_addConnection:(id)connection;
-(void)removeConnection:(id)connection;
-(void)_removeConnection:(id)connection;
-(void)_setInterrupted:(BOOL)interrupted;
-(void)startRunning;
-(void)stopRunning;
-(BOOL)isPreviewing;
-(BOOL)_startPreviewing;
-(BOOL)_stopPreviewing;
-(void)_setRunning:(BOOL)running;
-(long)_startRecording;
-(long)_stopRecording;
-(void)_rebuildGraph;
-(void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void*)context;
-(void)videoPreviewLayerPropertiesChanged;
-(id)captureOptions;
-(long)_createRecorderIfNeeded;
-(void)_excludeOutputsForCaptureOptions:(id)captureOptions;
-(void)_rebuildInternalCaptureOptions;
-(id)_createCaptureOptionsForPreset:(id)preset audioDevice:(id)device videoDevice:(id)device3 errorStatus:(int*)status;
-(id)_applyOutputOverridesToCaptureOptions:(id)captureOptions;
-(id)_addFastSwitchOptionsToCaptureOptions:(id)captureOptions forDevice:(id)device preset:(id)preset;
-(id)_figRecorderOptionsForPreset:(id)preset audioDevice:(id)device videoDevice:(id)device3;
-(id)_connectionsForNewInputPort:(id)newInputPort;
-(id)_connectionsForNewOutput:(id)newOutput;
-(void)_removeConnectionsForInputPort:(id)inputPort;
-(void)_removeVideoPreviewLayerConnectionsForInputPort:(id)inputPort;
-(void)_beginSessionUpdates;
-(void)_endSessionUpdates;
-(id)_stopError;
-(void)_postRuntimeError:(id)error;
-(BOOL)_connectionIsActive:(id)active;
-(void)_doDidStartSources;
-(void)_doDidStart;
-(void)_doDidStop:(id)_do;
-(BOOL)_figRecorderOldOptionsAreEqual:(id)equal toNewOptions:(id)newOptions livesourceOptionsAreEqual:(BOOL*)equal3;
-(BOOL)_buildAndRunGraph;
-(void)_stopAndTearDownGraph;
-(id)_currentVideoDevice;
-(id)_errorForFigRecorderNotification:(id)figRecorderNotification;
-(void)_handleNotification:(id)notification payload:(id)payload;
@end

