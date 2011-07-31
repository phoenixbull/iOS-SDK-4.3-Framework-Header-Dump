/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/GameKit.framework/GameKit
 */

#import "GameKit-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIActivityIndicatorView, UILabel, NSString;

@interface GKProgressLabel : XXUnknownSuperclass {
	UILabel* _label;
	UIActivityIndicatorView* _activityIndicator;
	BOOL _loading;
	NSString* _text;
}
@property(copy, nonatomic) NSString* text;
-(id)_loadingString;
-(id)initWithFrame:(CGRect)frame;
-(void)dealloc;
-(void)setLoading:(BOOL)loading;
-(void)layoutSubviews;
@end
