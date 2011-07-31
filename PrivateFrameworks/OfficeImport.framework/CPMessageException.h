/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "OfficeImport-Structs.h"

@class CPMessageEntry;

__attribute__((visibility("hidden"),objc_exception))
@interface CPMessageException : XXUnknownSuperclass {
@private
	CPMessageEntry* m_entry;
}
+(void)initialize;
+(id)exceptionWithMessage:(CPTaggedMessageStructure*)message;
+(id)exceptionWithUntaggedMessage:(id)untaggedMessage;
+(void)raise:(CPTaggedMessageStructure*)raise;
+(void)raiseUntaggedMessage:(id)message;
+(id)nsError:(id)error domain:(id)domain;
-(id)initWithMessage:(CPTaggedMessageStructure*)message;
-(id)initWithUntaggedMessage:(id)untaggedMessage;
-(void)dealloc;
-(id)getEntry;
-(id)description;
@end

