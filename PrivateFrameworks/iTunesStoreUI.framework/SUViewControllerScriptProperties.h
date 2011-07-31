/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import "NSCopying.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "iTunesStoreUI-Structs.h"
#import "NSCoding.h"

@class SUGradient, UIColor;

@interface SUViewControllerScriptProperties : XXUnknownSuperclass <NSCoding, NSCopying> {
	UIColor* _backgroundColor;
	BOOL _doubleTapEnabled;
	BOOL _embedded;
	BOOL _inputViewObeysDOMFocus;
	int _loadingIndicatorStyle;
	UIColor* _loadingTextColor;
	UIColor* _loadingTextShadowColor;
	SUGradient* _placeholderBackgroundGradient;
	BOOL _scrollingDisabled;
	BOOL _shouldLoadProgressively;
	BOOL _shouldShowFormAccessory;
	BOOL _showsBackgroundShadow;
	UIColor* _topExtensionColor;
}
@property(retain, nonatomic) UIColor* backgroundColor;
@property(assign, nonatomic, getter=isDoubleTapEnabled) BOOL doubleTapEnabled;
@property(assign, nonatomic, getter=isEmbedded) BOOL embedded;
@property(assign, nonatomic) BOOL inputViewObeysDOMFocus;
@property(assign, nonatomic) int loadingIndicatorStyle;
@property(retain, nonatomic) UIColor* loadingTextColor;
@property(retain, nonatomic) UIColor* loadingTextShadowColor;
@property(retain, nonatomic) SUGradient* placeholderBackgroundGradient;
@property(assign, nonatomic, getter=isScrollingDisabled) BOOL scrollingDisabled;
@property(assign, nonatomic) BOOL shouldLoadProgressively;
@property(assign, nonatomic) BOOL shouldShowFormAccessory;
@property(assign, nonatomic) BOOL showsBackgroundShadow;
@property(retain, nonatomic) UIColor* topExtensionColor;
-(id)initWithCoder:(id)coder;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)zone;
-(void)encodeWithCoder:(id)coder;
@end

