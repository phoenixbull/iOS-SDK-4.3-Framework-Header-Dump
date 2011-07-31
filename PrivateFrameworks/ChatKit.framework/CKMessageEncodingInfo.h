/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import "ChatKit-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableString;

@interface CKMessageEncodingInfo : XXUnknownSuperclass {
@private
	NSMutableString* _mutableText;
	BOOL _isTextOnly;
	BOOL _infoCalculated;
	int _characterCountNumerator;
	int _characterCountDenominator;
}
@property(assign, nonatomic) int characterCountNumerator;
@property(assign, nonatomic) int characterCountDenominator;
@property(assign, nonatomic) BOOL infoCalculated;
@property(assign, nonatomic) BOOL isTextOnly;
-(id)initWithContentsOfComposition:(id)composition;
-(void)dealloc;
-(void)calculateInfo;
-(void)_calculateInfoIfNecessary;
-(void)updateByReloadingFromComposition:(id)composition replacementRange:(NSRange)range replacementText:(id)text;
@end

