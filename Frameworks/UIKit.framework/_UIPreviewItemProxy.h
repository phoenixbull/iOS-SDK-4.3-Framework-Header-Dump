/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSURL, NSString;

__attribute__((visibility("hidden")))
@interface _UIPreviewItemProxy : XXUnknownSuperclass {
@private
	NSURL* _URL;
	NSURL* _previewURLOverride;
	NSString* _name;
}
@property(copy, nonatomic) NSURL* previewItemURL;
@property(copy, nonatomic) NSURL* previewItemURLOverride;
@property(copy, nonatomic) NSString* previewItemTitle;
-(void)dealloc;
-(id)previewItemURLForDisplay;
@end

