/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

#import "MFNullDataConsumer.h"


@interface MFCountingDataConsumer : MFNullDataConsumer {
	unsigned _count;
}
@property(readonly, assign, nonatomic) unsigned count;
-(int)appendData:(id)data;
@end

