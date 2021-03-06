/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "PMBulletMapper.h"
#import "CMMapper.h"

@class OADParagraphProperties, CMStyle;

__attribute__((visibility("hidden")))
@interface PMBulletMapper : CMMapper {
@private
	OADParagraphProperties* mProperties;
	CMStyle* mStyle;
	int mFontSize;
}
+(id)stringForIndex:(int)index withFormat:(int)format;
-(id)initWithOadProperties:(id)oadProperties fontSize:(int)size parent:(id)parent;
-(void)dealloc;
-(void)mapAt:(id)at withState:(id)state;
@end

@interface PMBulletMapper (Private)
-(int)bulletSize;
-(id)bulletFontName;
-(void)mapBulletColorWithState:(id)state;
-(id)makeBulletWithListState:(id)listState;
@end

