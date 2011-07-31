/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "EDImmutableObject.h"
#import "OfficeImport-Structs.h"
#import "EDFont.h"
#import "NSCopying.h"

@class EDColorReference, NSString, EDResources;

__attribute__((visibility("hidden")))
@interface EDFont : XXUnknownSuperclass <NSCopying, EDImmutableObject> {
@private
	EDResources* mResources;
	NSString* mName;
	EDColorReference* mColorReference;
	int mUnderline;
	int mScript;
	double mHeightInTwips;
	int mCharSet;
	int mFamily;
	unsigned mWeight;
	bool mBold;
	bool mItalic;
	bool mShadow;
	bool mStrike;
	bool mOutline;
	bool mUnderlineOverridden;
	bool mStrikeOverridden;
	bool mBoldOverridden;
	bool mWeightOverridden;
	bool mItalicOverridden;
	bool mHeightOverridden;
	bool mDoNotModify;
}
+(id)fontWithResources:(id)resources;
+(id)filterFontName:(id)name;
+(id)lassoNameForFontName:(id)fontName bold:(bool)bold italic:(bool)italic;
-(id)initWithResources:(id)resources;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)zone;
-(BOOL)isEqualToFont:(id)font;
-(BOOL)isEqual:(id)equal;
-(id)filteredName;
-(id)lassoName;
-(int)script;
-(void)setScript:(int)script;
-(int)underline;
-(bool)isUnderlineOverridden;
-(void)setUnderline:(int)underline;
-(id)name;
-(void)setName:(id)name;
-(id)color;
-(void)setColor:(id)color;
-(bool)isBold;
-(bool)isBoldOverridden;
-(void)setBold:(bool)bold;
-(bool)isItalic;
-(bool)isItalicOverridden;
-(void)setItalic:(bool)italic;
-(bool)isShadow;
-(void)setShadow:(bool)shadow;
-(bool)isOutline;
-(void)setOutline:(bool)outline;
-(bool)isStrike;
-(bool)isStrikeOverridden;
-(void)setStrike:(bool)strike;
-(double)height;
-(bool)isHeightOverridden;
-(void)setHeight:(double)height;
-(int)charSet;
-(void)setCharSet:(int)set;
-(int)family;
-(void)setFamily:(int)family;
-(unsigned)weight;
-(bool)isWeightOverridden;
-(void)setWeight:(unsigned)weight;
-(void)setDoNotModify:(bool)modify;
@end

@interface EDFont (Private)
+(id)fontNameWithFamilyName:(id)familyName bold:(bool)bold italic:(bool)italic;
@end

@interface EDFont (EDInternal)
-(id)colorReference;
-(void)setColorReference:(id)reference;
@end

