/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iAdCore.framework/iAdCore
 */

#import "ADAdImage.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

@interface ADAdImage : XXUnknownSuperclass {
	int _width;
	int _height;
	int _dpi;
	NSString* _url;
	int _xOffset;
	BOOL _hasXOffset;
	int _yOffset;
	BOOL _hasYOffset;
}
@property(assign, nonatomic) int width;
@property(assign, nonatomic) int height;
@property(assign, nonatomic) int dpi;
@property(retain, nonatomic) NSString* url;
@property(assign, nonatomic) int xOffset;
@property(readonly, assign, nonatomic) BOOL hasXOffset;
@property(assign, nonatomic) int yOffset;
@property(readonly, assign, nonatomic) BOOL hasYOffset;
-(id)init;
-(void)dealloc;
-(BOOL)readFrom:(id)from;
-(void)writeTo:(id)to;
-(id)description;
-(id)dictionaryRepresentation;
@end

@interface ADAdImage (Swizzle)
+(void)initialize;
@end

