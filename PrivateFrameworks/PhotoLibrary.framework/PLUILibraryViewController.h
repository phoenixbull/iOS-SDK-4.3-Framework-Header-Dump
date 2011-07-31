/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

#import "PLLibraryViewController.h"


@interface PLUILibraryViewController : PLLibraryViewController {
	int _previousStatusBarMode;
	int _newStatusBarMode;
	unsigned _didSetPreviousStatusBarMode : 1;
}
-(id)init;
-(void)dealloc;
-(void)iTunesSyncPhaseWillStart:(int)iTunesSyncPhase;
-(void)iTunesSyncPhaseDidFinish:(int)iTunesSyncPhase reason:(int)reason;
-(void)loadView;
-(void)viewWillAppear:(BOOL)view;
-(int)_imagePickerStatusBarMode;
-(void)viewWillDisappear:(BOOL)view;
-(void)cancelButtonClicked:(id)clicked;
-(void)iTunesSyncDidFinish;
-(void)_setImagePickerMediaTypes:(id)types;
-(void)didSelectAlbum:(id)album;
@end

