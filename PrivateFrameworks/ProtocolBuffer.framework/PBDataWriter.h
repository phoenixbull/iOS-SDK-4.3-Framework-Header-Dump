/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ProtocolBuffer.framework/ProtocolBuffer
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableData;

@interface PBDataWriter : XXUnknownSuperclass {
	NSMutableData* _data;
}
-(id)init;
-(void)dealloc;
-(id)data;
-(void)writeBigEndianFixed16:(unsigned short)a16;
-(void)writeBigEndianFixed32:(unsigned)a32;
-(void)writeBigEndianShortThenString:(id)string;
-(void)writeProtoBuffer:(id)buffer;
-(void)writeInt8:(BOOL)a8;
-(void)writeBareVarint:(long long)varint;
-(void)writeTag:(unsigned short)tag andType:(unsigned char)type;
-(void)writeDouble:(double)aDouble forTag:(unsigned short)tag;
-(void)writeFloat:(float)aFloat forTag:(unsigned short)tag;
-(void)writeInt32:(int)a32 forTag:(unsigned short)tag;
-(void)writeInt64:(long long)a64 forTag:(unsigned short)tag;
-(void)writeUint32:(unsigned)a32 forTag:(unsigned)tag;
-(void)writeUint64:(unsigned long long)a64 forTag:(unsigned long long)tag;
-(void)writeSint32:(int)a32 forTag:(unsigned short)tag;
-(void)writeSint64:(long long)a64 forTag:(unsigned short)tag;
-(void)writeFixed32:(unsigned)a32 forTag:(unsigned short)tag;
-(void)writeFixed64:(unsigned long long)a64 forTag:(unsigned short)tag;
-(void)writeSfixed32:(int)a32 forTag:(unsigned short)tag;
-(void)writeSfixed64:(long long)a64 forTag:(unsigned short)tag;
-(void)writeBOOL:(BOOL)aBool forTag:(unsigned short)tag;
-(void)writeString:(id)string forTag:(unsigned short)tag;
-(void)writeData:(id)data forTag:(unsigned short)tag;
-(BOOL)writeData:(id)data;
-(int)write:(const char*)write maxLength:(unsigned)length;
@end

