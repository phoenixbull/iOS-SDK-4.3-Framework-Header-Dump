/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ProtocolBuffer.framework/ProtocolBuffer
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class PBDataWriter, PBStreamWriter;

@interface PBMessageStreamWriter : XXUnknownSuperclass {
	PBStreamWriter* _writer;
	PBDataWriter* _messageWriter;
}
@property(retain) PBStreamWriter* writer;
@property(retain) PBDataWriter* messageWriter;
-(id)initWithOutputStream:(id)outputStream;
-(void)dealloc;
-(BOOL)writeMessage:(id)message;
@end

