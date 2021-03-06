/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class OADFill, OADStroke;

__attribute__((visibility("hidden")))
@interface OADUnderline : XXUnknownSuperclass {
@private
	OADStroke* mStroke;
	OADFill* mFill;
	unsigned char mType;
	unsigned mIsUsingTextFill : 1;
	unsigned mIsUsingTextStroke : 1;
}
-(id)initWithStroke:(id)stroke fill:(id)fill type:(int)type;
-(void)dealloc;
-(id)stroke;
-(void)setStroke:(id)stroke;
-(id)fill;
-(void)setFill:(id)fill;
-(int)type;
-(void)setType:(int)type;
-(BOOL)isUsingTextFill;
-(void)setIsUsingTextFill:(BOOL)fill;
-(BOOL)isUsingTextStroke;
-(void)setIsUsingTextStroke:(BOOL)stroke;
-(unsigned)hash;
-(BOOL)isEqual:(id)equal;
@end

