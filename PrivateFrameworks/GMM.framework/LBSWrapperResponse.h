/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class LBSGLocResponse;

@interface LBSWrapperResponse : XXUnknownSuperclass {
@private
	int _status;
	BOOL _hasStatus;
	LBSGLocResponse* _reply;
}
@property(assign, nonatomic) int status;
@property(readonly, assign, nonatomic) BOOL hasStatus;
@property(retain, nonatomic) LBSGLocResponse* reply;
@property(readonly, assign, nonatomic) BOOL hasReply;
-(id)init;
-(void)dealloc;
-(BOOL)readFrom:(id)from;
-(void)writeTo:(id)to;
-(id)description;
@end

