/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "GQDWPInlineList.h"
#import "GQDWPParagraph.h"
#import "iWorkImport-Structs.h"

@class GQDSStyle;

__attribute__((visibility("hidden")))
@interface GQDWPParagraph : GQDWPInlineList {
@private
	GQDSStyle* mParaStyle;
	long mListLevel;
	BOOL mRestartList;
	BOOL mContinue;
	BOOL mIsHidden;
}
-(void)dealloc;
-(id)paragraphStyle;
-(long)listLevel;
-(BOOL)restartList;
-(BOOL)cont;
-(BOOL)isBlank;
-(BOOL)isHidden;
@end

@interface GQDWPParagraph (Private)
-(int)readAttributesFromReader:(xmlTextReader*)reader processor:(id)processor;
@end

