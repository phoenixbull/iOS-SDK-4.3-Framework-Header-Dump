/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "PhotoLibrary-Structs.h"

@class PLSyncProgressView, PLCameraView;

@interface PLCameraViewController : XXUnknownSuperclass {
	PLCameraView* _cameraView;
	PLSyncProgressView* _rebuildProgressView;
	BOOL _ignoreAppearCallbacks;
}
-(BOOL)_displaysFullScreen;
-(void)dealloc;
-(void)loadView;
-(void)viewWillDisappear:(BOOL)view;
-(void)viewDidAppear:(BOOL)view;
-(void)_getRotationContentSettings:(XXStruct_3B_lsC*)settings;
@end

