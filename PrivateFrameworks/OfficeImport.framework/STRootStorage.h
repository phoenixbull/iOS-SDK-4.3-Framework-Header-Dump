/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "STRootStorage.h"
#import "STStorage.h"
#import "OfficeImport-Structs.h"

@class NSMutableData;

__attribute__((visibility("hidden")))
@interface STRootStorage : STStorage {
@private
	RootStorage* m_pCRoot;
	NSMutableData* m_StorageData;
	void* m_pvBuf;
}
-(id)initWithName:(id)name andMode:(int)mode;
-(id)initWithMutableData:(id)mutableData andMode:(int)mode;
-(void)dealloc;
-(void*)resizeStorageBuffer:(unsigned long)buffer;
@end

@interface STRootStorage (SummaryInfo)
-(id)getDocumentProperty:(int)property withId:(int)anId PropType:(int*)type;
-(id)getDocumentProperty:(int)property withId:(int)anId PropType:(int*)type throwOnError:(BOOL)error;
-(id)getStringDocumentPropertyWithId:(int)anId givenPropStream:(int)stream;
-(long)getLongDocumentPropertyWithId:(int)anId givenPropStream:(int)stream;
-(short)getShortDocumentPropertyWithId:(int)anId givenPropStream:(int)stream;
-(void)setDocumentProperty:(int)property withId:(int)anId AndType:(int)type AndValue:(void*)value;
-(void)setStringDocumentPropertyWithId:(int)anId to:(id)to givenPropStream:(int)stream;
-(void)setLongDocumentPropertyWithId:(int)anId to:(long)to givenPropStream:(int)stream;
-(void)setShortDocumentPropertyWithId:(int)anId to:(short)to givenPropStream:(int)stream;
-(void)setBlobDocumentPropertyWithId:(int)anId to:(void*)to givenPropStream:(int)stream;
-(void)setDefaultDocumentProperties;
@end

