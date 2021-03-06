/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iAdCore.framework/iAdCore
 */

#import "NSObject.h"


@protocol ADStoryboardControllerDelegate <NSObject>
-(void)storyboardShouldDismiss:(id)storyboard;
-(void)storyboardDidChangeSupportedOrientations:(id)storyboard;
-(void)storyboard:(id)storyboard didFailLoadWithError:(id)error;
-(void)storyboardDidFinishFirstSignificantDraw:(id)storyboard;
-(BOOL)openURL:(id)url;
-(void)storyboard:(id)storyboard didReportSystemEventWithType:(int)type;
-(void)storyboard:(id)storyboard didReportContentEventWithMessage:(id)message;
-(void)storyboardContentRequestsGeolocation:(id)geolocation approval:(id)approval;
-(void)storyboardContentSignalsReady:(id)ready;
-(void)storyboardVideoPlayerWentFullScreen:(id)screen;
-(void)storyboardVideoPlayerExitedFullScreen:(id)screen;
-(id)storyboardHumanReadableContentName:(id)name;
@end

