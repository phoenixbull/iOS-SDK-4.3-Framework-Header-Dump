/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import "SUScriptObject.h"

@class NSNumber, NSString, ISReview;

@interface SUScriptReview : SUScriptObject {
	ISReview* _review;
	NSNumber* _adamID;
	NSString* _body;
	id _hasSavedDraft;
	NSString* _infoURL;
	NSString* _itemType;
	NSNumber* _rating;
	NSNumber* _nickname;
	id _nicknameIsConfirmed;
	NSString* _title;
}
@property(retain, getter=_title, setter=set_title:) NSString* title;
@property(retain, getter=_rating, setter=set_rating:) NSNumber* rating;
@property(retain, getter=_nicknameIsConfirmed, setter=set_nicknameIsConfirmed:) id nicknameIsConfirmed;
@property(retain, getter=_nickname, setter=set_nickname:) NSString* nickname;
@property(retain, getter=_itemType, setter=set_itemType:) NSString* itemType;
@property(retain, getter=_infoURL, setter=set_infoURL:) NSString* infoURL;
@property(readonly, retain, getter=_hasSavedDraft) id hasSavedDraft;
@property(retain, getter=_body, setter=set_body:) NSString* body;
@property(readonly, retain, getter=_adamID) NSNumber* adamID;
+(id)webScriptNameForKey:(const char*)key;
+(id)webScriptNameForSelector:(SEL)selector;
-(id)init;
-(id)initWithReview:(id)review;
-(void)dealloc;
-(id)copyReview;
-(id)removeDraft;
-(id)restoreFromDraft;
-(id)saveAsDraft;
-(id)_className;
-(void)set_adamID:(id)anId;
-(void)set_hasSavedDraft:(id)draft;
@end

