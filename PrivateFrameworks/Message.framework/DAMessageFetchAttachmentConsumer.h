/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Message.framework/Message
 */



@protocol DAMessageFetchAttachmentConsumer
-(void)consumeData:(id)data ofContentType:(id)contentType forAttachmentNamed:(id)attachmentNamed ofMessageWithServerID:(id)serverID;
-(void)attachmentFetchCompletedWithStatus:(int)status forAttachmentNamed:(id)attachmentNamed ofMessageWithServerID:(id)serverID dataWasBase64:(BOOL)a64;
@end

