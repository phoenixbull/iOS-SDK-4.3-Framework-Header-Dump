/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableDictionary, NSMutableSet, NSArray;

@interface CKDraftManager : XXUnknownSuperclass {
	NSMutableDictionary* _cachedDrafts;
	NSMutableSet* _dirtyDraftIDs;
	NSArray* _pendingRecipients;
}
+(id)sharedInstance;
+(void)_createPendingRecipientPath;
+(id)_pendingRecipientFile;
+(id)_draftSavePath;
+(void)_createDraftSavePath;
-(id)init;
-(void)dealloc;
-(id)draftForConversation:(id)conversation;
-(void)setDraft:(id)draft forConversation:(id)conversation;
-(void)clearDraftForConversation:(id)conversation;
-(id)draftForPendingConversationWithRecipients:(id*)recipients;
-(void)setDraftForPendingConversation:(id)pendingConversation withRecipients:(id)recipients;
-(void)clearDraftForPendingConversation;
-(void)save:(BOOL)save;
-(id)_draftForKey:(id)key;
-(void)_setDraft:(id)draft forKey:(id)key;
-(void)_setPendingRecipients:(id)recipients;
-(id)_pendingRecipients;
@end

