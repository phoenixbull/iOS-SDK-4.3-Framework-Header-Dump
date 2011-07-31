/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "WDRun.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface WDBookmark : WDRun {
@private
	NSString* mName;
	int mBookmarkType;
}
-(id)initWithParagraph:(id)paragraph name:(id)name type:(int)type;
-(id)name;
-(void)setName:(id)name;
-(void)dealloc;
-(int)runType;
-(int)bookmarkType;
-(void)setBookmarkType:(int)type;
@end

