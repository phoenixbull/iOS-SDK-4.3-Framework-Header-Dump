/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSData;

@interface PTPEndDataPacket : XXUnknownSuperclass {
	unsigned short _operationCode;
	unsigned _transactionID;
	NSData* _data;
}
-(id)initWithOperationCode:(unsigned short)operationCode transactionID:(unsigned long)anId andData:(id)data;
-(id)initWithTCPBuffer:(void*)tcpbuffer;
-(id)initWithUSBBuffer:(void*)usbbuffer;
-(void)dealloc;
-(id)contentForTCP;
-(id)contentForUSB;
-(id)contentForUSBUsingBuffer:(void*)usbusingBuffer capacity:(unsigned long)capacity;
-(id)description;
-(unsigned short)operationCode;
-(void)setOperationCode:(unsigned short)code;
-(unsigned long)transactionID;
-(void)setTransactionID:(unsigned long)anId;
-(id)data;
-(void)setData:(id)data;
@end

