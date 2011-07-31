/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface OADOle : XXUnknownSuperclass {
@private
	BOOL mIconic;
	NSString* mCLSID;
	NSString* mAnsiUserType;
	NSString* mAnsiClipboardFormatName;
	unsigned mWinClipboardFormat;
	NSString* mMacClipboardFormat;
	NSString* mAnsiProgID;
	NSString* mUnicodeUserType;
	NSString* mUnicodeClipboardFormatName;
	NSString* mUnicodeProgID;
	id mObject;
}
+(BOOL)isProgIDSupported:(id)supported;
+(BOOL)isCLSIDSupported:(id)supported;
-(id)init;
-(void)dealloc;
-(BOOL)iconic;
-(void)setIconic:(BOOL)iconic;
-(id)CLSID;
-(void)setCLSID:(id)clsid;
-(id)ansiUserType;
-(void)setAnsiUserType:(id)type;
-(id)ansiClipboardFormatName;
-(void)setAnsiClipboardFormatName:(id)name;
-(unsigned long)winClipboardFormat;
-(void)setWinClipboardFormat:(unsigned long)format;
-(id)macClipboardFormat;
-(void)setMacClipboardFormat:(id)format;
-(id)ansiProgID;
-(void)setAnsiProgID:(id)anId;
-(id)unicodeUserType;
-(void)setUnicodeUserType:(id)type;
-(id)unicodeClipboardFormatName;
-(void)setUnicodeClipboardFormatName:(id)name;
-(id)unicodeProgID;
-(void)setUnicodeProgID:(id)anId;
-(id)object;
-(void)setObject:(id)object;
@end

