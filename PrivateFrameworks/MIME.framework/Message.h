/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

#import "MIME-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSData, MessageStore, NSString, NSArray;

@interface Message : XXUnknownSuperclass {
	MessageStore* _store;
	unsigned _preferredEncoding;
	NSString* _senderAddressComment;
	unsigned _dateSentInterval;
	unsigned _dateReceivedInterval;
	unsigned long long _generationNumber;
	NSString* _subject;
	NSArray* _to;
	NSArray* _cc;
	NSArray* _bcc;
	NSArray* _sender;
	NSString* _contentType;
	NSData* _messageIDHeaderDigest;
	NSData* _inReplyToHeaderDigest;
	NSString* _summary;
	NSString* _conversationID;
	NSString* _externalID;
	unsigned _calculatedAttachmentInfo : 1;
	unsigned short _numberOfAttachments;
}
+(void)initialize;
+(void)setMessageClassForStore:(id)store;
-(id)init;
-(id)copyWithZone:(NSZone*)zone;
-(id)messageStore;
-(void)setMessageStore:(id)store;
-(id)headers;
-(id)headersIfAvailable;
-(id)messageBody;
-(id)messageBodyIfAvailable;
-(id)messageBodyUpdatingFlags:(BOOL)flags;
-(id)messageBodyIfAvailableUpdatingFlags:(BOOL)flags;
-(BOOL)messageData:(id*)data messageSize:(unsigned*)size isComplete:(BOOL*)complete downloadIfNecessary:(BOOL)necessary;
-(id)messageDataIsComplete:(BOOL*)complete downloadIfNecessary:(BOOL)necessary;
-(id)messageData;
-(void)setMessageData:(id)data isPartial:(BOOL)partial;
-(id)dataConsumerForMimePart:(id)mimePart;
-(void)dealloc;
-(unsigned)messageSize;
-(id)preferredEmailAddressToReplyWith;
-(id)messageID;
-(id)messageIDHeaderDigest;
-(id)messageIDHeader;
-(id)messageIDHeaderInFortyBytesOrLess;
-(void)unlockedSetMessageIDHeaderDigest:(id)digest;
-(void)setMessageIDHeaderDigest:(id)digest;
-(id)_messageIDHeaderDigestIvar;
-(id)inReplyToHeaderDigest;
-(void)unlockedSetInReplyToHeaderDigest:(id)headerDigest;
-(void)setInReplyToHeaderDigest:(id)headerDigest;
-(id)_inReplyToHeaderDigestIvar;
-(BOOL)isMessageContentsLocallyAvailable;
-(unsigned short)numberOfAttachments;
-(BOOL)calculatedNumberOfAttachments;
-(unsigned long)preferredEncoding;
-(void)setPreferredEncoding:(unsigned long)encoding;
-(BOOL)_doesDateAppearToBeSane:(id)beSane;
-(id)_copyDateFromReceivedHeadersInHeaders:(id)headers;
-(id)_copyDateFromDateHeaderInHeaders:(id)headers;
-(void)_setDateReceivedFromHeaders:(id)headers;
-(void)_setDateSentFromHeaders:(id)headers;
-(void)loadCachedHeaderValuesFromHeaders:(id)headers;
-(id)subject;
-(void)setSubject:(id)subject;
-(id)dateReceived;
-(id)dateSent;
-(void)setDateReceivedTimeIntervalSince1970:(double)a1970;
-(double)dateReceivedAsTimeIntervalSince1970;
-(BOOL)needsDateReceived;
-(double)dateSentAsTimeIntervalSince1970;
-(void)setDateSentTimeIntervalSince1970:(double)a1970;
-(id)contentType;
-(void)setContentType:(id)type;
-(id)senders;
-(id)sendersIfCached;
-(id)firstSender;
-(void)setSender:(id)sender;
-(id)senderAddressComment;
-(id)to;
-(id)toIfCached;
-(void)setTo:(id)to;
-(id)cc;
-(id)ccIfCached;
-(void)setCc:(id)cc;
-(id)bcc;
-(id)bccIfCached;
-(void)setBcc:(id)bcc;
-(id)conversationID;
-(void)setConversationID:(id)anId;
-(id)externalID;
-(void)setExternalID:(id)anId;
-(id)summary;
-(id)uniqueArray:(id)array withStore:(id)store;
-(void)setMessageInfo:(id)info to:(id)to cc:(id)cc bcc:(id)bcc sender:(id)sender dateReceivedTimeIntervalSince1970:(double)a1970 dateSentTimeIntervalSince1970:(double)a19707 messageIDHeaderDigest:(id)digest inReplyToHeaderDigest:(id)headerDigest conversationID:(id)anId summary:(id)summary;
-(void)setMessageInfoFromMessage:(id)message;
-(id)remoteID;
-(unsigned long)uid;
-(id)path;
-(id)persistentID;
-(id)bodyData;
-(id)bodyDataIsComplete:(BOOL*)complete;
-(id)headerData;
-(id)dataForMimePart:(id)mimePart;
-(id)dataForMimePart:(id)mimePart inRange:(NSRange)range isComplete:(BOOL*)complete;
-(id)dataForMimePart:(id)mimePart inRange:(NSRange)range isComplete:(BOOL*)complete downloadIfNecessary:(BOOL)necessary didDownload:(BOOL*)download;
-(id)dataPathForMimePart:(id)mimePart;
-(void)_calculateAttachmentInfoFromBody:(id)body;
-(void)calculateAttachmentInfoFromBody:(id)body;
-(void)setNumberOfAttachments:(unsigned)attachments isSigned:(BOOL)aSigned isEncrypted:(BOOL)encrypted;
-(void)setNumberOfAttachments:(unsigned)attachments;
-(id)cachedAttributes;
-(void)setGenerationNumber:(unsigned long long)number;
-(unsigned long long)generationNumber;
-(int)generationCompare:(id)compare;
-(id)defaultAlternativeInPart:(id)part;
-(id)bestAlternativeInPart:(id)part;
-(BOOL)canBeDeleted;
-(BOOL)isLibraryMessage;
-(id)additionalHeadersForReply;
-(id)additionalHeadersForForward;
@end

