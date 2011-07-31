/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

#import "MFBaseFilterDataConsumer.h"


@interface MFBase64Encoder : MFBaseFilterDataConsumer {
	char* _table;
	unsigned _left;
	unsigned char _leftovers[3];
	unsigned _line;
	unsigned _lineBreak;
	BOOL _padChar;
}
@property(assign, nonatomic) unsigned lineBreak;
@property(assign, nonatomic) BOOL padChar;
@property(assign, nonatomic) BOOL allowSlash;
-(id)initWithConsumers:(id)consumers;
-(int)appendData:(id)data;
-(void)done;
-(void)setStandardLineBreak;
@end

