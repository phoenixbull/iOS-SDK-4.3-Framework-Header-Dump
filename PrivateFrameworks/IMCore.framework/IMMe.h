/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class IMHandle, NSString, IMPerson, NSMutableArray, NSArray;

@interface IMMe : XXUnknownSuperclass {
	IMPerson* _person;
	NSString* _abNickname;
	NSString* _abFirstName;
	NSString* _abFullName;
	NSString* _abLastName;
	NSArray* _abEmails;
	NSMutableArray* _abIMHandles;
	NSMutableArray* _loginIMHandles;
}
@property(readonly, assign, nonatomic) NSArray* imHandles;
@property(readonly, assign, nonatomic) IMHandle* bestIMHandle;
@property(readonly, assign, nonatomic) NSArray* emails;
@property(readonly, assign, nonatomic) NSString* email;
@property(readonly, assign, nonatomic) NSString* fullName;
@property(readonly, assign, nonatomic) NSString* lastName;
@property(readonly, assign, nonatomic) NSString* firstName;
@property(readonly, assign, nonatomic) NSString* nickname;
@property(readonly, assign, nonatomic) IMPerson* person;
@property(readonly, assign, nonatomic) NSString* guid;
+(id)fallbackUserName;
+(id)me;
+(id)imHandleForService:(id)service;
-(id)init;
-(void)dealloc;
-(id)_imHandlesWithIDs:(id)ids onAccount:(id)account;
-(void)rebuildIMHandles;
-(void)resetABPerson;
-(void)setIMPerson:(id)person;
-(BOOL)addLoginIMHandle:(id)handle;
-(BOOL)removeLoginIMHandle:(id)handle;
-(id)loginIMHandles;
-(BOOL)addIMHandle:(id)handle;
-(BOOL)isIMHandleLoginIMHandle:(id)handle;
-(BOOL)removeIMHandle:(id)handle;
-(void)setFirstName:(id)name lastName:(id)name2;
-(void)myPictureChanged;
@end
