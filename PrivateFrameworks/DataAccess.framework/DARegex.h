/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import "DataAccess-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

@interface DARegex : XXUnknownSuperclass {
	NSString* _pattern;
	struct {
		int re_magic;
		unsigned re_nsub;
		char* re_endp;
		re_guts* re_g;
	} _regex;
}
@property(readonly, assign, nonatomic) NSString* pattern;
+(BOOL)matchesString:(id)string pattern:(id)pattern ignoreCase:(BOOL)aCase;
+(id)subexpressionsMatchingString:(id)string pattern:(id)pattern ignoreCase:(BOOL)aCase;
+(id)regexWithPattern:(id)pattern ignoreCase:(BOOL)aCase;
-(id)initWithPattern:(id)pattern ignoreCase:(BOOL)aCase;
-(void)dealloc;
-(BOOL)matchesString:(id)string;
-(id)subexpressionsMatchingString:(id)string;
@end

