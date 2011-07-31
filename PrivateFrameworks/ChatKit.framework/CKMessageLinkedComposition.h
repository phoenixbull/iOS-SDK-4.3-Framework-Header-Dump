/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import "CKMessageComposition.h"

@class CKMessage;

@interface CKMessageLinkedComposition : CKMessageComposition {
	CKMessage* _message;
}
@property(retain, nonatomic) CKMessage* message;
-(BOOL)isTextOnly;
-(id)textString;
-(id)markupString;
-(id)subject;
-(id)resources;
-(void)dealloc;
@end

