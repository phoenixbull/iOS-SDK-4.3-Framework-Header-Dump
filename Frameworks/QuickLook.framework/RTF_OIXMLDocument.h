/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

#import "QuickLook-Structs.h"
#import "RTF_OIXMLNode.h"

@class NSString, RTF_OIXMLElement;

__attribute__((visibility("hidden")))
@interface RTF_OIXMLDocument : RTF_OIXMLNode {
@private
	RTF_OIXMLElement* _rootElement;
	NSString* _version;
	NSString* _encoding;
}
-(id)initWithRootElement:(id)rootElement;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)zone;
-(void)setVersion:(id)version;
-(void)setRootElement:(id)element;
-(id)rootElement;
-(void)setCharacterEncoding:(id)encoding;
-(id)description;
-(id)copyMutableXMLString;
-(id)XMLString;
-(id)openingTagString;
-(id)contentString;
-(id)closingTagString;
@end

