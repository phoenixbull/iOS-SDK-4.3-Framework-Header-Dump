/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import "Message-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library


@interface XXUnknownSuperclass (MimeEnrichedReader)
+(id)mf_stringFromMimeRichTextString:(id)mimeRichTextString asHTML:(BOOL)html;
+(id)mf_stringFromMimeEnrichedString:(id)mimeEnrichedString asHTML:(BOOL)html;
@end

@interface XXUnknownSuperclass (FormatFlowedSupport)
-(id)mf_convertFromFlowedText:(unsigned)flowedText;
@end

@interface XXUnknownSuperclass (FormatFlowedSupportInternal)
-(unsigned)mf_lineBreakBeforeIndex:(unsigned)index withinRange:(NSRange)range;
-(unsigned)mf_nextWordFromIndex:(unsigned)index forward:(BOOL)forward;
@end

@interface XXUnknownSuperclass (SortedMailboxes)
-(unsigned)mf_indexOfMailboxDictionaryWithName:(id)name;
@end

@interface XXUnknownSuperclass (Goodies)
-(void)mf_setBool:(BOOL)aBool forKey:(id)key;
-(void)mf_setInteger:(int)integer forKey:(id)key;
-(void)mf_addObject:(id)object forKey:(id)key;
-(id)mf_objectForKey:(id)key ofClass:(Class)aClass;
@end

@interface XXUnknownSuperclass (Goodies)
-(BOOL)mf_boolForKey:(id)key;
-(int)mf_integerForKey:(id)key;
@end

@interface XXUnknownSuperclass (Goodies)
-(id)mf_descriptionForMimeHeaders;
-(id)mf_replyPrefixForSender:(id)sender withSpacer:(BOOL)spacer;
@end

@interface XXUnknownSuperclass (MessageAdditions)
+(id)mf_createFileAtPath:(id)path flags:(int)flags mode:(int)mode;
+(id)mf_fileHandleForTempFile:(id*)tempFile atPath:(id)path mode:(int)mode;
@end

@interface XXUnknownSuperclass (MessageAdditions)
-(id)mf_getAllObjectsAsArray;
-(void)mf_getAllObjects:(id*)objects;
@end

@interface XXUnknownSuperclass (NSStringUtils)
+(id)mf_UUID;
+(id)mf_messageIDStringWithDomainHint:(id)domainHint;
+(id)mf_stringRepresentationForBytes:(long long)bytes;
+(id)mf_stringWithAttachmentCharacter;
-(id)mf_stringByLocalizingReOrFwdPrefix;
-(unsigned)mf_subjectPrefixLength;
-(id)mf_fileSystemString;
-(id)mf_stringWithNoExtraSpaces;
-(id)mf_MD5Digest;
-(id)mf_messageIDSubstring;
-(id)mf_encodedMessageID;
-(id)mf_encodedMessageIDString;
-(id)mf_uniqueFilenameWithRespectToFilenames:(id)filenames;
-(id)mf_componentsSeparatedByPattern:(id)pattern;
-(id)mf_stringByEscapingForXML;
-(id)mf_stringByEscapingHTMLCodes;
@end

@interface XXUnknownSuperclass (PathUtils)
-(BOOL)mf_makeDirectoryWithMode:(int)mode;
-(BOOL)mf_isSubdirectoryOfPath:(id)path;
-(id)mf_stringByReallyAbbreviatingWithTildeInPath;
-(id)mf_betterStringByResolvingSymlinksInPath;
@end

@interface XXUnknownSuperclass (DigestUtilities)
-(id)mf_MD5Digest;
@end

@interface XXUnknownSuperclass (ToReplaceCenterWithOurOwn)
+(id)allocWithZone:(NSZone*)zone;
@end

@interface XXUnknownSuperclass (MailExtensions)
+(id)mf_invocationWithSelector:(SEL)selector target:(id)target;
+(id)mf_invocationWithSelector:(SEL)selector target:(id)target object:(id)object;
+(id)mf_invocationWithSelector:(SEL)selector target:(id)target object1:(id)a1 object2:(id)a2;
-(void)mf_invokeWithObject:(id)object;
-(BOOL)mf_shouldLogInvocation;
@end

@interface XXUnknownSuperclass (MainThreadAdditions)
-(void)mf_performOneway:(BOOL)aOneway result:(void*)result withTarget:(id)target selector:(SEL)selector;
@end

@interface XXUnknownSuperclass (MainThreadPosting)
-(void)mf_postNotificationInMainThread:(id)mainThread;
@end

@interface XXUnknownSuperclass (MainThreadMessaging)
-(void)mf_performSelectorInMainThread:(SEL)mainThread withObject:(id)object withObject:(id)object3;
-(void)mf_performOnewaySelectorInMainThread:(SEL)mainThread withObject:(id)object withObject:(id)object3;
@end

@interface XXUnknownSuperclass (MessageAdditions)
-(BOOL)mf_isUserCancelledError;
-(BOOL)mf_shouldBeReportedToUser;
-(id)mf_moreInfo;
-(id)mf_shortDescription;
@end

@interface XXUnknownSuperclass (Queue)
-(id)mf_remove;
-(BOOL)mf_isEmpty;
@end

