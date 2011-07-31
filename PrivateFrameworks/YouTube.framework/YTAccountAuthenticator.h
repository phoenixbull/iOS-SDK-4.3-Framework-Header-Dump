/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/YouTube.framework/YouTube
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, NSDate, NSHTTPURLResponse, NSMutableData;

@interface YTAccountAuthenticator : XXUnknownSuperclass {
	NSString* _accountToken;
	NSDate* _accountTokenDate;
	NSString* _account;
	NSString* _accountYouTubeName;
	NSString* _password;
	NSMutableData* _responseData;
	NSHTTPURLResponse* _urlResponse;
	NSString* _authURLBase;
}
+(id)sharedAuthenticator;
-(id)init;
-(void)dealloc;
-(BOOL)cachedCredentialsValid;
-(BOOL)readyToRequestToken;
-(id)accountYouTubeName;
-(id)tokenForCurrentAccount;
-(void)validateAccount:(id)account password:(id)password;
-(BOOL)_isTokenExpired:(id)expired;
-(id)_authRequestWithURL:(id)url;
-(id)_authRequestForAccount:(id)account password:(id)password;
-(void)_getNewTokenForAccount:(id)account password:(id)password;
-(void)_setAccountToken:(id)token;
-(void)_setAccountTokenDate:(id)date;
-(void)_setAccount:(id)account;
-(void)_setAccountYouTubeName:(id)name;
-(void)_setPassword:(id)password;
-(void)_setURLResponse:(id)response;
-(void)_clearURLResponseInfo;
-(void)_removePasswordFromKeychain;
-(void)clearAccountInfo;
-(void)_postAccountTokenGenerationFailedWithError:(id)error;
-(id)_passwordFromKeychain;
-(void)_postNewAccountTokenAvailable;
-(void)connection:(id)connection didReceiveResponse:(id)response;
-(void)connection:(id)connection didFailWithError:(id)error;
-(void)connection:(id)connection didReceiveData:(id)data;
-(void)connectionDidFinishLoading:(id)connection;
@end

